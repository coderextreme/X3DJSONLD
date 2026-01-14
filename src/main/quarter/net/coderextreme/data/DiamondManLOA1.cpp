
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
Someta3->setContent(QString("DiamondManLOA1.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers, also includes HAnimSite feaature points. LOA-1 is typical low-end real-time 3D hierarchy."));
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
Someta8->setContent(QString("Mon, 15 Sep 2025 05:18:46 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("Image"));
Someta9->setContent(QString("images/BonesAllSkeletonFrontViewLOA1.png"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("Image"));
Someta10->setContent(QString("humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("Image"));
Someta11->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("motto"));
Someta12->setContent(QString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("warning"));
Someta13->setContent(QString("Still needs comments on CAESAR feature points inserted"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("http://ece.uwaterloo.ca/~HAnim"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("reference"));
Someta21->setContent(QString("http://www.cis.upenn.edu/~beitler"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("identifier"));
Someta22->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA1.x3d"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("generator"));
Someta23->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta23);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode24 = new SoNode();
SoWorldInfo* SoWorldInfo25 = new SoWorldInfo();
SoWorldInfo25->setTitle(QString("HANIM 1.1 Default Joint Centers, LOA1"));
SoWorldInfo25->setInfo(new QString[]{QString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
SoNode24->addChild(*SoWorldInfo25);

SoNavigationInfo* SoNavigationInfo26 = new SoNavigationInfo();
SoNavigationInfo26->setSpeed(1.5);
SoNode24->addChild(*SoNavigationInfo26);

SoViewpoint* SoViewpoint27 = new SoViewpoint();
SoViewpoint27->setDescription(QString("Diamond Man, LOA 1"));
SoViewpoint27->setPosition(new float[]{0.0,1.0,3.0});
SoViewpoint27->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode24->addChild(*SoViewpoint27);

SoHAnimHumanoid* SoHAnimHumanoid28 = new SoHAnimHumanoid();
SoHAnimHumanoid28->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid28->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid28->setLoa(1);
SoMetadataSet* SoMetadataSet29 = new SoMetadataSet();
SoMetadataSet29->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet29->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString30 = new SoMetadataString();
SoMetadataString30->X3DNode::setName(QString("authorEmail"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString30);

SoMetadataString* SoMetadataString31 = new SoMetadataString();
SoMetadataString31->X3DNode::setName(QString("authorName"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString31);

SoMetadataString* SoMetadataString32 = new SoMetadataString();
SoMetadataString32->X3DNode::setName(QString("copyright"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString32);

SoMetadataString* SoMetadataString33 = new SoMetadataString();
SoMetadataString33->X3DNode::setName(QString("humanoidVersion"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString33);

SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("usageRestrictions"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString34);

SoHAnimHumanoid28->setMetadata(*SoMetadataSet29);

SoHAnimJoint* SoHAnimJoint35 = new SoHAnimJoint();
SoHAnimJoint35->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint35->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint35->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint36->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint36->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment37 = new SoHAnimSegment();
SoHAnimSegment37->setDEF(QString("hanim_pelvis"));
SoHAnimSegment37->X3DNode::setName(QString("pelvis"));
SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape39 = new SoShape();
SoShape39->setDEF(QString("DiamondShape"));
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape39->addChild(*SoVRMLAppearance40);

SoIndexedFaceSet* SoIndexedFaceSet42 = new SoIndexedFaceSet();
SoIndexedFaceSet42->setCreaseAngle(0.5);
SoIndexedFaceSet42->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate43 = new SoCoordinate();
SoCoordinate43->setDEF(QString("points"));
SoCoordinate43->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet42->setCoord(*SoCoordinate43);

SoShape39->setGeometry(*SoIndexedFaceSet42);

SoTransform38->addChild(*SoShape39);

SoHAnimSegment37->addChild(*SoTransform38);

SoHAnimJoint36->addChildren(*SoHAnimSegment37);

SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->setDEF(QString("hanim_l_hip"));
SoHAnimJoint44->X3DNode::setName(QString("l_hip"));
SoHAnimJoint44->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment45 = new SoHAnimSegment();
SoHAnimSegment45->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment45->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform46 = new SoTransform();
SoTransform46->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoShape* SoShape47 = new SoShape();
SoShape47->setUSE(QString("DiamondShape"));
SoTransform46->addChild(*SoShape47);

SoHAnimSegment45->addChild(*SoTransform46);

SoHAnimSite* SoHAnimSite48 = new SoHAnimSite();
SoHAnimSite48->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite48->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite48->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoHAnimSegment45->addChild(*SoHAnimSite48);

SoHAnimSite* SoHAnimSite49 = new SoHAnimSite();
SoHAnimSite49->setDEF(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite49->X3DNode::setName(QString("l_femoral_lateral_epicondyle_pt"));
SoHAnimSite49->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoHAnimSegment45->addChild(*SoHAnimSite49);

SoHAnimSite* SoHAnimSite50 = new SoHAnimSite();
SoHAnimSite50->setDEF(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimSite50->X3DNode::setName(QString("l_femoral_medial_epicondyle_pt"));
SoHAnimSite50->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoHAnimSegment45->addChild(*SoHAnimSite50);

SoHAnimJoint44->addChildren(*SoHAnimSegment45);

SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->setDEF(QString("hanim_l_knee"));
SoHAnimJoint51->X3DNode::setName(QString("l_knee"));
SoHAnimJoint51->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment52 = new SoHAnimSegment();
SoHAnimSegment52->setDEF(QString("hanim_l_calf"));
SoHAnimSegment52->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{0.104,0.4867,0.0308});
SoShape* SoShape54 = new SoShape();
SoShape54->setUSE(QString("DiamondShape"));
SoTransform53->addChild(*SoShape54);

SoHAnimSegment52->addChild(*SoTransform53);

SoHAnimJoint51->addChildren(*SoHAnimSegment52);

SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint55->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint55->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment56 = new SoHAnimSegment();
SoHAnimSegment56->setDEF(QString("hanim_l_talus"));
SoHAnimSegment56->X3DNode::setName(QString("l_talus"));
SoTransform* SoTransform57 = new SoTransform();
SoTransform57->setTranslation(new float[]{0.1101,0.0656,-0.0736});
SoShape* SoShape58 = new SoShape();
SoShape58->setUSE(QString("DiamondShape"));
SoTransform57->addChild(*SoShape58);

SoHAnimSegment56->addChild(*SoTransform57);

SoHAnimSite* SoHAnimSite59 = new SoHAnimSite();
SoHAnimSite59->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite59->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite59->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoHAnimSegment56->addChild(*SoHAnimSite59);

SoHAnimSite* SoHAnimSite60 = new SoHAnimSite();
SoHAnimSite60->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite60->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite60->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoHAnimSegment56->addChild(*SoHAnimSite60);

SoHAnimSite* SoHAnimSite61 = new SoHAnimSite();
SoHAnimSite61->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite61->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite61->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoHAnimSegment56->addChild(*SoHAnimSite61);

SoHAnimSite* SoHAnimSite62 = new SoHAnimSite();
SoHAnimSite62->setDEF(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimSite62->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite62->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoHAnimSegment56->addChild(*SoHAnimSite62);

SoHAnimJoint55->addChildren(*SoHAnimSegment56);

SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint63->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint63->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment64 = new SoHAnimSegment();
SoHAnimSegment64->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment64->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSite* SoHAnimSite65 = new SoHAnimSite();
SoHAnimSite65->setDEF(QString("hanim_l_middistal_tip"));
SoHAnimSite65->X3DNode::setName(QString("l_middistal_tip"));
SoHAnimSite65->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoHAnimSegment64->addChild(*SoHAnimSite65);

SoHAnimSite* SoHAnimSite66 = new SoHAnimSite();
SoHAnimSite66->setDEF(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimSite66->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite66->setTranslation(new float[]{0.1825,0.007,0.0928});
SoHAnimSegment64->addChild(*SoHAnimSite66);

SoHAnimSite* SoHAnimSite67 = new SoHAnimSite();
SoHAnimSite67->setDEF(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimSite67->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite67->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoHAnimSegment64->addChild(*SoHAnimSite67);

SoHAnimSite* SoHAnimSite68 = new SoHAnimSite();
SoHAnimSite68->setDEF(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite68->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite68->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoHAnimSegment64->addChild(*SoHAnimSite68);

SoHAnimJoint63->addChildren(*SoHAnimSegment64);

SoHAnimJoint55->addChildren(*SoHAnimJoint63);

SoHAnimJoint51->addChildren(*SoHAnimJoint55);

SoHAnimJoint44->addChildren(*SoHAnimJoint51);

SoHAnimJoint36->addChildren(*SoHAnimJoint44);

SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->setDEF(QString("hanim_r_hip"));
SoHAnimJoint69->X3DNode::setName(QString("r_hip"));
SoHAnimJoint69->setCenter(new float[]{-0.095,0.9171,0.0029});
SoHAnimSegment* SoHAnimSegment70 = new SoHAnimSegment();
SoHAnimSegment70->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment70->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform71 = new SoTransform();
SoTransform71->setTranslation(new float[]{-0.095,0.9171,0.0029});
SoShape* SoShape72 = new SoShape();
SoShape72->setUSE(QString("DiamondShape"));
SoTransform71->addChild(*SoShape72);

SoHAnimSegment70->addChild(*SoTransform71);

SoHAnimSite* SoHAnimSite73 = new SoHAnimSite();
SoHAnimSite73->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite73->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite73->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoHAnimSegment70->addChild(*SoHAnimSite73);

SoHAnimSite* SoHAnimSite74 = new SoHAnimSite();
SoHAnimSite74->setDEF(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite74->X3DNode::setName(QString("r_femoral_lateral_epicondyle_pt"));
SoHAnimSite74->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoHAnimSegment70->addChild(*SoHAnimSite74);

SoHAnimSite* SoHAnimSite75 = new SoHAnimSite();
SoHAnimSite75->setDEF(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimSite75->X3DNode::setName(QString("r_femoral_medial_epicondyle_pt"));
SoHAnimSite75->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoHAnimSegment70->addChild(*SoHAnimSite75);

SoHAnimJoint69->addChildren(*SoHAnimSegment70);

SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->setDEF(QString("hanim_r_knee"));
SoHAnimJoint76->X3DNode::setName(QString("r_knee"));
SoHAnimJoint76->setCenter(new float[]{-0.0867,0.4913,0.0318});
SoHAnimSegment* SoHAnimSegment77 = new SoHAnimSegment();
SoHAnimSegment77->setDEF(QString("hanim_r_calf"));
SoHAnimSegment77->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform78 = new SoTransform();
SoTransform78->setTranslation(new float[]{-0.0867,0.4913,0.0318});
SoShape* SoShape79 = new SoShape();
SoShape79->setUSE(QString("DiamondShape"));
SoTransform78->addChild(*SoShape79);

SoHAnimSegment77->addChild(*SoTransform78);

SoHAnimJoint76->addChildren(*SoHAnimSegment77);

SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint80->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint80->setCenter(new float[]{-0.0801,0.0712,-0.0766});
SoHAnimSegment* SoHAnimSegment81 = new SoHAnimSegment();
SoHAnimSegment81->setDEF(QString("hanim_r_talus"));
SoHAnimSegment81->X3DNode::setName(QString("r_talus"));
SoTransform* SoTransform82 = new SoTransform();
SoTransform82->setTranslation(new float[]{-0.0801,0.0712,-0.0766});
SoShape* SoShape83 = new SoShape();
SoShape83->setUSE(QString("DiamondShape"));
SoTransform82->addChild(*SoShape83);

SoHAnimSegment81->addChild(*SoTransform82);

SoHAnimSite* SoHAnimSite84 = new SoHAnimSite();
SoHAnimSite84->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite84->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite84->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoHAnimSegment81->addChild(*SoHAnimSite84);

SoHAnimSite* SoHAnimSite85 = new SoHAnimSite();
SoHAnimSite85->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite85->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite85->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoHAnimSegment81->addChild(*SoHAnimSite85);

SoHAnimSite* SoHAnimSite86 = new SoHAnimSite();
SoHAnimSite86->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite86->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite86->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoHAnimSegment81->addChild(*SoHAnimSite86);

SoHAnimSite* SoHAnimSite87 = new SoHAnimSite();
SoHAnimSite87->setDEF(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimSite87->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite87->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoHAnimSegment81->addChild(*SoHAnimSite87);

SoHAnimJoint80->addChildren(*SoHAnimSegment81);

SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint88->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint88->setCenter(new float[]{-0.0801,0.0,0.0368});
SoHAnimSegment* SoHAnimSegment89 = new SoHAnimSegment();
SoHAnimSegment89->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment89->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSite* SoHAnimSite90 = new SoHAnimSite();
SoHAnimSite90->setDEF(QString("hanim_r_middistal_tip"));
SoHAnimSite90->X3DNode::setName(QString("r_middistal_tip"));
SoHAnimSite90->setTranslation(new float[]{-0.1043,-0.0227,0.145});
SoHAnimSegment89->addChild(*SoHAnimSite90);

SoHAnimSite* SoHAnimSite91 = new SoHAnimSite();
SoHAnimSite91->setDEF(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimSite91->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite91->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoHAnimSegment89->addChild(*SoHAnimSite91);

SoHAnimSite* SoHAnimSite92 = new SoHAnimSite();
SoHAnimSite92->setDEF(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimSite92->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite92->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoHAnimSegment89->addChild(*SoHAnimSite92);

SoHAnimSite* SoHAnimSite93 = new SoHAnimSite();
SoHAnimSite93->setDEF(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite93->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite93->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoHAnimSegment89->addChild(*SoHAnimSite93);

SoHAnimJoint88->addChildren(*SoHAnimSegment89);

SoHAnimJoint80->addChildren(*SoHAnimJoint88);

SoHAnimJoint76->addChildren(*SoHAnimJoint80);

SoHAnimJoint69->addChildren(*SoHAnimJoint76);

SoHAnimJoint36->addChildren(*SoHAnimJoint69);

SoHAnimJoint35->addChildren(*SoHAnimJoint36);

SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->setDEF(QString("hanim_vl1"));
SoHAnimJoint94->X3DNode::setName(QString("vl1"));
SoHAnimJoint94->setCenter(new float[]{-0.00405,1.07,-0.0275});
SoHAnimSegment* SoHAnimSegment95 = new SoHAnimSegment();
SoHAnimSegment95->setDEF(QString("hanim_l1"));
SoHAnimSegment95->X3DNode::setName(QString("l1"));
SoHAnimJoint94->addChildren(*SoHAnimSegment95);

SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint96->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint96->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment97 = new SoHAnimSegment();
SoHAnimSegment97->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment97->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform98 = new SoTransform();
SoTransform98->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoShape* SoShape99 = new SoShape();
SoShape99->setUSE(QString("DiamondShape"));
SoTransform98->addChild(*SoShape99);

SoHAnimSegment97->addChild(*SoTransform98);

SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setDEF(QString("l_upperarm_adjust"));
SoTransform100->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoTransform100->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform100->setCenter(new float[]{0.182,1.22,-0.047});
SoHAnimSegment97->addChild(*SoTransform100);

SoHAnimSite* SoHAnimSite101 = new SoHAnimSite();
SoHAnimSite101->setDEF(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite101->X3DNode::setName(QString("l_humeral_lateral_epicondyle_pt"));
SoHAnimSite101->setTranslation(new float[]{0.228,1.1482,-0.11});
SoHAnimSegment97->addChild(*SoHAnimSite101);

SoHAnimJoint96->addChildren(*SoHAnimSegment97);

SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint102->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint102->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment103 = new SoHAnimSegment();
SoHAnimSegment103->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment103->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform104 = new SoTransform();
SoTransform104->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoShape* SoShape105 = new SoShape();
SoShape105->setUSE(QString("DiamondShape"));
SoTransform104->addChild(*SoShape105);

SoHAnimSegment103->addChild(*SoTransform104);

SoTransform* SoTransform106 = new SoTransform();
SoTransform106->setDEF(QString("l_forearm_adjust"));
SoTransform106->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoTransform106->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform106->setCenter(new float[]{0.198,0.961,-0.0405});
SoHAnimSegment103->addChild(*SoTransform106);

SoHAnimSite* SoHAnimSite107 = new SoHAnimSite();
SoHAnimSite107->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite107->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite107->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoHAnimSegment103->addChild(*SoHAnimSite107);

SoHAnimSite* SoHAnimSite108 = new SoHAnimSite();
SoHAnimSite108->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite108->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite108->setTranslation(new float[]{-0.1962,1.1375,-0.1123});
SoHAnimSegment103->addChild(*SoHAnimSite108);

SoHAnimSite* SoHAnimSite109 = new SoHAnimSite();
SoHAnimSite109->setDEF(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimSite109->X3DNode::setName(QString("l_humeral_medial_epicondyle_pt"));
SoHAnimSite109->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoHAnimSegment103->addChild(*SoHAnimSite109);

SoHAnimSite* SoHAnimSite110 = new SoHAnimSite();
SoHAnimSite110->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite110->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite110->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoHAnimSegment103->addChild(*SoHAnimSite110);

SoHAnimJoint102->addChildren(*SoHAnimSegment103);

SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint111->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint111->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment112 = new SoHAnimSegment();
SoHAnimSegment112->setDEF(QString("hanim_l_carpal"));
SoHAnimSegment112->X3DNode::setName(QString("l_carpal"));
SoTransform* SoTransform113 = new SoTransform();
SoTransform113->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoShape* SoShape114 = new SoShape();
SoShape114->setUSE(QString("DiamondShape"));
SoTransform113->addChild(*SoShape114);

SoHAnimSegment112->addChild(*SoTransform113);

SoTransform* SoTransform115 = new SoTransform();
SoTransform115->setDEF(QString("l_hand_adjust"));
SoTransform115->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoTransform115->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform115->setCenter(new float[]{0.213,0.811,-0.0338});
SoHAnimSegment112->addChild(*SoTransform115);

SoHAnimSite* SoHAnimSite116 = new SoHAnimSite();
SoHAnimSite116->setDEF(QString("hanim_l_hand_tip"));
SoHAnimSite116->X3DNode::setName(QString("l_hand_tip"));
SoHAnimSite116->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoHAnimSegment112->addChild(*SoHAnimSite116);

SoHAnimSite* SoHAnimSite117 = new SoHAnimSite();
SoHAnimSite117->setDEF(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite117->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite117->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoHAnimSegment112->addChild(*SoHAnimSite117);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite118->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite118->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoHAnimSegment112->addChild(*SoHAnimSite118);

SoHAnimSite* SoHAnimSite119 = new SoHAnimSite();
SoHAnimSite119->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite119->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite119->setTranslation(new float[]{-0.2142,0.8529,-0.0648});
SoHAnimSegment112->addChild(*SoHAnimSite119);

SoHAnimSite* SoHAnimSite120 = new SoHAnimSite();
SoHAnimSite120->setDEF(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite120->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite120->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoHAnimSegment112->addChild(*SoHAnimSite120);

SoHAnimJoint111->addChildren(*SoHAnimSegment112);

SoHAnimJoint102->addChildren(*SoHAnimJoint111);

SoHAnimJoint96->addChildren(*SoHAnimJoint102);

SoHAnimJoint94->addChildren(*SoHAnimJoint96);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint121->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint121->setCenter(new float[]{-0.1907,1.4407,-0.0325});
SoHAnimSegment* SoHAnimSegment122 = new SoHAnimSegment();
SoHAnimSegment122->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment122->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform123 = new SoTransform();
SoTransform123->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoShape* SoShape124 = new SoShape();
SoShape124->setUSE(QString("DiamondShape"));
SoTransform123->addChild(*SoShape124);

SoHAnimSegment122->addChild(*SoTransform123);

SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setDEF(QString("r_upperarm_adjust"));
SoTransform125->setTranslation(new float[]{-0.1907,1.4407,-0.0325});
SoTransform125->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform125->setCenter(new float[]{-0.182,1.22,-0.047});
SoHAnimSegment122->addChild(*SoTransform125);

SoHAnimSite* SoHAnimSite126 = new SoHAnimSite();
SoHAnimSite126->setDEF(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite126->X3DNode::setName(QString("r_humeral_lateral_epicondyle_pt"));
SoHAnimSite126->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoHAnimSegment122->addChild(*SoHAnimSite126);

SoHAnimJoint121->addChildren(*SoHAnimSegment122);

SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint127->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint127->setCenter(new float[]{-0.1949,1.1388,-0.062});
SoHAnimSegment* SoHAnimSegment128 = new SoHAnimSegment();
SoHAnimSegment128->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment128->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoShape* SoShape130 = new SoShape();
SoShape130->setUSE(QString("DiamondShape"));
SoTransform129->addChild(*SoShape130);

SoHAnimSegment128->addChild(*SoTransform129);

SoTransform* SoTransform131 = new SoTransform();
SoTransform131->setDEF(QString("r_forearm_adjust"));
SoTransform131->setTranslation(new float[]{-0.1949,1.1388,-0.062});
SoTransform131->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform131->setCenter(new float[]{-0.198,0.961,-0.0397});
SoHAnimSegment128->addChild(*SoTransform131);

SoHAnimSite* SoHAnimSite132 = new SoHAnimSite();
SoHAnimSite132->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite132->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite132->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoHAnimSegment128->addChild(*SoHAnimSite132);

SoHAnimSite* SoHAnimSite133 = new SoHAnimSite();
SoHAnimSite133->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite133->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite133->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoHAnimSegment128->addChild(*SoHAnimSite133);

SoHAnimSite* SoHAnimSite134 = new SoHAnimSite();
SoHAnimSite134->setDEF(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimSite134->X3DNode::setName(QString("r_humeral_medial_epicondyle_pt"));
SoHAnimSite134->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoHAnimSegment128->addChild(*SoHAnimSite134);

SoHAnimSite* SoHAnimSite135 = new SoHAnimSite();
SoHAnimSite135->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite135->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite135->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoHAnimSegment128->addChild(*SoHAnimSite135);

SoHAnimJoint127->addChildren(*SoHAnimSegment128);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint136->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint136->setCenter(new float[]{-0.1959,0.8694,-0.0521});
SoHAnimSegment* SoHAnimSegment137 = new SoHAnimSegment();
SoHAnimSegment137->setDEF(QString("hanim_r_carpal"));
SoHAnimSegment137->X3DNode::setName(QString("r_carpal"));
SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setTranslation(new float[]{-0.1959,0.8694,-0.0521});
SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("DiamondShape"));
SoTransform138->addChild(*SoShape139);

SoHAnimSegment137->addChild(*SoTransform138);

SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setDEF(QString("r_hand_adjust"));
SoTransform140->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform140->setCenter(new float[]{-0.217,0.811,-0.0338});
SoHAnimSegment137->addChild(*SoTransform140);

SoHAnimSite* SoHAnimSite141 = new SoHAnimSite();
SoHAnimSite141->setDEF(QString("hanim_r_hand_tip"));
SoHAnimSite141->X3DNode::setName(QString("r_hand_tip"));
SoHAnimSite141->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoHAnimSegment137->addChild(*SoHAnimSite141);

SoHAnimSite* SoHAnimSite142 = new SoHAnimSite();
SoHAnimSite142->setDEF(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite142->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite142->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoHAnimSegment137->addChild(*SoHAnimSite142);

SoHAnimSite* SoHAnimSite143 = new SoHAnimSite();
SoHAnimSite143->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite143->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite143->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoHAnimSegment137->addChild(*SoHAnimSite143);

SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite144->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite144->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoHAnimSegment137->addChild(*SoHAnimSite144);

SoHAnimSite* SoHAnimSite145 = new SoHAnimSite();
SoHAnimSite145->setDEF(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite145->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite145->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoHAnimSegment137->addChild(*SoHAnimSite145);

SoHAnimJoint136->addChildren(*SoHAnimSegment137);

SoHAnimJoint127->addChildren(*SoHAnimJoint136);

SoHAnimJoint121->addChildren(*SoHAnimJoint127);

SoHAnimJoint94->addChildren(*SoHAnimJoint121);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setDEF(QString("hanim_vc4"));
SoHAnimJoint146->X3DNode::setName(QString("vc4"));
SoHAnimJoint146->setCenter(new float[]{0.0,1.43,-0.0458});
SoHAnimSegment* SoHAnimSegment147 = new SoHAnimSegment();
SoHAnimSegment147->setDEF(QString("hanim_c4"));
SoHAnimSegment147->X3DNode::setName(QString("c4"));
SoHAnimJoint146->addChildren(*SoHAnimSegment147);

SoHAnimJoint94->addChildren(*SoHAnimJoint146);

SoHAnimJoint35->addChildren(*SoHAnimJoint94);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setDEF(QString("hanim_vl5"));
SoHAnimJoint148->X3DNode::setName(QString("vl5"));
SoHAnimJoint148->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setDEF(QString("hanim_skullbase"));
SoHAnimJoint149->X3DNode::setName(QString("skullbase"));
SoHAnimJoint149->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment150 = new SoHAnimSegment();
SoHAnimSegment150->setDEF(QString("hanim_skull"));
SoHAnimSegment150->X3DNode::setName(QString("skull"));
SoTransform* SoTransform151 = new SoTransform();
SoTransform151->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoShape* SoShape152 = new SoShape();
SoShape152->setUSE(QString("DiamondShape"));
SoTransform151->addChild(*SoShape152);

SoHAnimSegment150->addChild(*SoTransform151);

SoHAnimSite* SoHAnimSite153 = new SoHAnimSite();
SoHAnimSite153->setDEF(QString("hanim_skull_vertex_tip"));
SoHAnimSite153->X3DNode::setName(QString("skull_vertex_tip"));
SoHAnimSite153->setTranslation(new float[]{0.005,1.7504,0.0055});
SoHAnimSegment150->addChild(*SoHAnimSite153);

SoHAnimSite* SoHAnimSite154 = new SoHAnimSite();
SoHAnimSite154->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite154->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite154->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoHAnimSegment150->addChild(*SoHAnimSite154);

SoHAnimSite* SoHAnimSite155 = new SoHAnimSite();
SoHAnimSite155->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite155->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite155->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoHAnimSegment150->addChild(*SoHAnimSite155);

SoHAnimSite* SoHAnimSite156 = new SoHAnimSite();
SoHAnimSite156->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite156->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite156->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoHAnimSegment150->addChild(*SoHAnimSite156);

SoHAnimSite* SoHAnimSite157 = new SoHAnimSite();
SoHAnimSite157->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite157->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite157->setTranslation(new float[]{0.0061,1.541,0.0805});
SoHAnimSegment150->addChild(*SoHAnimSite157);

SoHAnimSite* SoHAnimSite158 = new SoHAnimSite();
SoHAnimSite158->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite158->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite158->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoHAnimSegment150->addChild(*SoHAnimSite158);

SoHAnimSite* SoHAnimSite159 = new SoHAnimSite();
SoHAnimSite159->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite159->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite159->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoHAnimSegment150->addChild(*SoHAnimSite159);

SoHAnimSite* SoHAnimSite160 = new SoHAnimSite();
SoHAnimSite160->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite160->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite160->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoHAnimSegment150->addChild(*SoHAnimSite160);

SoHAnimSite* SoHAnimSite161 = new SoHAnimSite();
SoHAnimSite161->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite161->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite161->setTranslation(new float[]{0.0631,1.553,0.033});
SoHAnimSegment150->addChild(*SoHAnimSite161);

SoHAnimSite* SoHAnimSite162 = new SoHAnimSite();
SoHAnimSite162->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite162->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite162->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoHAnimSegment150->addChild(*SoHAnimSite162);

SoHAnimJoint149->addChildren(*SoHAnimSegment150);

SoHAnimJoint148->addChildren(*SoHAnimJoint149);

SoHAnimJoint35->addChildren(*SoHAnimJoint148);

SoHAnimHumanoid28->setSkeleton(*SoHAnimJoint35);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint163);

SoHAnimJoint* SoHAnimJoint164 = new SoHAnimJoint();
SoHAnimJoint164->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint164);

SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint165);

SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint166);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint167);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint168);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint169);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint170);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint171);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint172);

SoHAnimJoint* SoHAnimJoint173 = new SoHAnimJoint();
SoHAnimJoint173->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint173);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint174);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint175);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint176);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint177);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint179);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint182);

SoHAnimSegment* SoHAnimSegment183 = new SoHAnimSegment();
SoHAnimSegment183->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment183);

SoHAnimSegment* SoHAnimSegment184 = new SoHAnimSegment();
SoHAnimSegment184->setUSE(QString("hanim_l1"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment184);

SoHAnimSegment* SoHAnimSegment185 = new SoHAnimSegment();
SoHAnimSegment185->setUSE(QString("hanim_c4"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment185);

SoHAnimSegment* SoHAnimSegment186 = new SoHAnimSegment();
SoHAnimSegment186->setUSE(QString("hanim_skull"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment186);

SoHAnimSegment* SoHAnimSegment187 = new SoHAnimSegment();
SoHAnimSegment187->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment187);

SoHAnimSegment* SoHAnimSegment188 = new SoHAnimSegment();
SoHAnimSegment188->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment188);

SoHAnimSegment* SoHAnimSegment189 = new SoHAnimSegment();
SoHAnimSegment189->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment189);

SoHAnimSegment* SoHAnimSegment190 = new SoHAnimSegment();
SoHAnimSegment190->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment190);

SoHAnimSegment* SoHAnimSegment191 = new SoHAnimSegment();
SoHAnimSegment191->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment191);

SoHAnimSegment* SoHAnimSegment192 = new SoHAnimSegment();
SoHAnimSegment192->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment192);

SoHAnimSegment* SoHAnimSegment193 = new SoHAnimSegment();
SoHAnimSegment193->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment193);

SoHAnimSegment* SoHAnimSegment194 = new SoHAnimSegment();
SoHAnimSegment194->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment194);

SoHAnimSegment* SoHAnimSegment195 = new SoHAnimSegment();
SoHAnimSegment195->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment195);

SoHAnimSegment* SoHAnimSegment196 = new SoHAnimSegment();
SoHAnimSegment196->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment196);

SoHAnimSegment* SoHAnimSegment197 = new SoHAnimSegment();
SoHAnimSegment197->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment197);

SoHAnimSegment* SoHAnimSegment198 = new SoHAnimSegment();
SoHAnimSegment198->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment198);

SoHAnimSegment* SoHAnimSegment199 = new SoHAnimSegment();
SoHAnimSegment199->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment199);

SoHAnimSegment* SoHAnimSegment200 = new SoHAnimSegment();
SoHAnimSegment200->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment200);

SoHAnimSite* SoHAnimSite201 = new SoHAnimSite();
SoHAnimSite201->setUSE(QString("hanim_skull_vertex_tip"));
SoHAnimHumanoid28->setSites(*SoHAnimSite201);

SoHAnimSite* SoHAnimSite202 = new SoHAnimSite();
SoHAnimSite202->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite202);

SoHAnimSite* SoHAnimSite203 = new SoHAnimSite();
SoHAnimSite203->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite203);

SoHAnimSite* SoHAnimSite204 = new SoHAnimSite();
SoHAnimSite204->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite204);

SoHAnimSite* SoHAnimSite205 = new SoHAnimSite();
SoHAnimSite205->setUSE(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite205);

SoHAnimSite* SoHAnimSite206 = new SoHAnimSite();
SoHAnimSite206->setUSE(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite206);

SoHAnimSite* SoHAnimSite207 = new SoHAnimSite();
SoHAnimSite207->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite207);

SoHAnimSite* SoHAnimSite208 = new SoHAnimSite();
SoHAnimSite208->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite208);

SoHAnimSite* SoHAnimSite209 = new SoHAnimSite();
SoHAnimSite209->setUSE(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite209);

SoHAnimSite* SoHAnimSite210 = new SoHAnimSite();
SoHAnimSite210->setUSE(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite210);

SoHAnimSite* SoHAnimSite211 = new SoHAnimSite();
SoHAnimSite211->setUSE(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite211);

SoHAnimSite* SoHAnimSite212 = new SoHAnimSite();
SoHAnimSite212->setUSE(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite212);

SoHAnimSite* SoHAnimSite213 = new SoHAnimSite();
SoHAnimSite213->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite213);

SoHAnimSite* SoHAnimSite214 = new SoHAnimSite();
SoHAnimSite214->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite214);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->setUSE(QString("hanim_l_hand_tip"));
SoHAnimHumanoid28->setSites(*SoHAnimSite215);

SoHAnimSite* SoHAnimSite216 = new SoHAnimSite();
SoHAnimSite216->setUSE(QString("hanim_r_hand_tip"));
SoHAnimHumanoid28->setSites(*SoHAnimSite216);

SoHAnimSite* SoHAnimSite217 = new SoHAnimSite();
SoHAnimSite217->setUSE(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite217);

SoHAnimSite* SoHAnimSite218 = new SoHAnimSite();
SoHAnimSite218->setUSE(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite218);

SoHAnimSite* SoHAnimSite219 = new SoHAnimSite();
SoHAnimSite219->setUSE(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite219);

SoHAnimSite* SoHAnimSite220 = new SoHAnimSite();
SoHAnimSite220->setUSE(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite220);

SoHAnimSite* SoHAnimSite221 = new SoHAnimSite();
SoHAnimSite221->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite221);

SoHAnimSite* SoHAnimSite222 = new SoHAnimSite();
SoHAnimSite222->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite222);

SoHAnimSite* SoHAnimSite223 = new SoHAnimSite();
SoHAnimSite223->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite223);

SoHAnimSite* SoHAnimSite224 = new SoHAnimSite();
SoHAnimSite224->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite224);

SoHAnimSite* SoHAnimSite225 = new SoHAnimSite();
SoHAnimSite225->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite225);

SoHAnimSite* SoHAnimSite226 = new SoHAnimSite();
SoHAnimSite226->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite226);

SoHAnimSite* SoHAnimSite227 = new SoHAnimSite();
SoHAnimSite227->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite227);

SoHAnimSite* SoHAnimSite228 = new SoHAnimSite();
SoHAnimSite228->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite228);

SoHAnimSite* SoHAnimSite229 = new SoHAnimSite();
SoHAnimSite229->setUSE(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite229);

SoHAnimSite* SoHAnimSite230 = new SoHAnimSite();
SoHAnimSite230->setUSE(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite230);

SoHAnimSite* SoHAnimSite231 = new SoHAnimSite();
SoHAnimSite231->setUSE(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite231);

SoHAnimSite* SoHAnimSite232 = new SoHAnimSite();
SoHAnimSite232->setUSE(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite232);

SoHAnimSite* SoHAnimSite233 = new SoHAnimSite();
SoHAnimSite233->setUSE(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite233);

SoHAnimSite* SoHAnimSite234 = new SoHAnimSite();
SoHAnimSite234->setUSE(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite234);

SoHAnimSite* SoHAnimSite235 = new SoHAnimSite();
SoHAnimSite235->setUSE(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite235);

SoHAnimSite* SoHAnimSite236 = new SoHAnimSite();
SoHAnimSite236->setUSE(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite236);

SoHAnimSite* SoHAnimSite237 = new SoHAnimSite();
SoHAnimSite237->setUSE(QString("hanim_l_middistal_tip"));
SoHAnimHumanoid28->setSites(*SoHAnimSite237);

SoHAnimSite* SoHAnimSite238 = new SoHAnimSite();
SoHAnimSite238->setUSE(QString("hanim_r_middistal_tip"));
SoHAnimHumanoid28->setSites(*SoHAnimSite238);

SoHAnimSite* SoHAnimSite239 = new SoHAnimSite();
SoHAnimSite239->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite239);

SoHAnimSite* SoHAnimSite240 = new SoHAnimSite();
SoHAnimSite240->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite240);

SoHAnimSite* SoHAnimSite241 = new SoHAnimSite();
SoHAnimSite241->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite241);

SoHAnimSite* SoHAnimSite242 = new SoHAnimSite();
SoHAnimSite242->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite242);

SoHAnimSite* SoHAnimSite243 = new SoHAnimSite();
SoHAnimSite243->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite243);

SoHAnimSite* SoHAnimSite244 = new SoHAnimSite();
SoHAnimSite244->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite244);

SoHAnimSite* SoHAnimSite245 = new SoHAnimSite();
SoHAnimSite245->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite245);

SoHAnimSite* SoHAnimSite246 = new SoHAnimSite();
SoHAnimSite246->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite246);

SoHAnimSite* SoHAnimSite247 = new SoHAnimSite();
SoHAnimSite247->setUSE(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite247);

SoHAnimSite* SoHAnimSite248 = new SoHAnimSite();
SoHAnimSite248->setUSE(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite248);

SoHAnimSite* SoHAnimSite249 = new SoHAnimSite();
SoHAnimSite249->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite249);

SoHAnimSite* SoHAnimSite250 = new SoHAnimSite();
SoHAnimSite250->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite250);

SoHAnimSite* SoHAnimSite251 = new SoHAnimSite();
SoHAnimSite251->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite251);

SoHAnimSite* SoHAnimSite252 = new SoHAnimSite();
SoHAnimSite252->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid28->setSites(*SoHAnimSite252);

SoHAnimSite* SoHAnimSite253 = new SoHAnimSite();
SoHAnimSite253->setDEF(QString("hanim_DiamondManLOA1_view"));
SoHAnimSite253->X3DNode::setName(QString("DiamondManLOA1_view"));
SoViewpoint* SoViewpoint254 = new SoViewpoint();
SoViewpoint254->setDEF(QString("InclinedView"));
SoViewpoint254->setDescription(QString("Inclined View"));
SoViewpoint254->setPosition(new float[]{1.62,1.05,2.06});
SoViewpoint254->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoHAnimSite253->addChild(*SoViewpoint254);

SoViewpoint* SoViewpoint255 = new SoViewpoint();
SoViewpoint255->setDEF(QString("FrontView"));
SoViewpoint255->setDescription(QString("Front View"));
SoViewpoint255->setPosition(new float[]{0.0,0.854,2.57665});
SoHAnimSite253->addChild(*SoViewpoint255);

SoViewpoint* SoViewpoint256 = new SoViewpoint();
SoViewpoint256->setDEF(QString("SideView"));
SoViewpoint256->setDescription(QString("Side View"));
SoViewpoint256->setPosition(new float[]{2.5929,0.854,0.0});
SoViewpoint256->setOrientation(new float[]{0.0,1.0,0.0,1.57079});
SoHAnimSite253->addChild(*SoViewpoint256);

SoViewpoint* SoViewpoint257 = new SoViewpoint();
SoViewpoint257->setDEF(QString("TopView"));
SoViewpoint257->setDescription(QString("Top View"));
SoViewpoint257->setPosition(new float[]{0.0,3.4495,0.0});
SoViewpoint257->setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
SoHAnimSite253->addChild(*SoViewpoint257);

SoHAnimHumanoid28->setViewpoints(*SoHAnimSite253);

SoNode24->addChild(*SoHAnimHumanoid28);

SoSceneManager0->setSceneGraph(*SoNode24);

return 0;
}
