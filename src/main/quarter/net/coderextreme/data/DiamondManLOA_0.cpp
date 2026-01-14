
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
Someta3->setContent(QString("DiamondManLOA_0.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."));
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
Someta9->setContent(QString("../Templates/DiamondManLOA_0.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("http://ece.uwaterloo.ca/~HAnim"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("reference"));
Someta20->setContent(QString("http://www.cis.upenn.edu/~beitler"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("error"));
Someta21->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("motto"));
Someta22->setContent(QString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("Image"));
Someta23->setContent(QString("humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("Image"));
Someta24->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("identifier"));
Someta25->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_0.x3d"));
Sohead1->addMeta(*Someta25);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode26 = new SoNode();
SoWorldInfo* SoWorldInfo27 = new SoWorldInfo();
SoWorldInfo27->setTitle(QString("HANIM 2.0 Default Joint Centers, LOA0"));
SoWorldInfo27->setInfo(new QString[]{QString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
SoNode26->addChild(*SoWorldInfo27);

SoNavigationInfo* SoNavigationInfo28 = new SoNavigationInfo();
SoNavigationInfo28->setSpeed(1.5);
SoNode26->addChild(*SoNavigationInfo28);

SoViewpoint* SoViewpoint29 = new SoViewpoint();
SoViewpoint29->setDescription(QString("Diamond Man, LOA 0"));
SoViewpoint29->setPosition(new float[]{0.0,1.0,3.0});
SoViewpoint29->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode26->addChild(*SoViewpoint29);

SoHAnimHumanoid* SoHAnimHumanoid30 = new SoHAnimHumanoid();
SoHAnimHumanoid30->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid30->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid30->setVersion(QString("1.0"));
SoMetadataSet* SoMetadataSet31 = new SoMetadataSet();
SoMetadataSet31->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet31->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString32 = new SoMetadataString();
SoMetadataString32->X3DNode::setName(QString("authorEmail"));
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString32);

SoMetadataString* SoMetadataString33 = new SoMetadataString();
SoMetadataString33->X3DNode::setName(QString("authorName"));
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString33);

SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("copyright"));
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString34);

SoMetadataString* SoMetadataString35 = new SoMetadataString();
SoMetadataString35->X3DNode::setName(QString("creationDate"));
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString35);

SoMetadataString* SoMetadataString36 = new SoMetadataString();
SoMetadataString36->X3DNode::setName(QString("humanoidVersion"));
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString36);

SoMetadataString* SoMetadataString37 = new SoMetadataString();
SoMetadataString37->X3DNode::setName(QString("usageRestrictions"));
SoMetadataSet31->setValue((X3DNode *)&SoMetadataString37);

SoHAnimHumanoid30->setMetadata(*SoMetadataSet31);

SoHAnimJoint* SoHAnimJoint38 = new SoHAnimJoint();
SoHAnimJoint38->setDEF(QString("hanim_HumanoidRoot"));
SoHAnimJoint38->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint38->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint39->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint39->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment40 = new SoHAnimSegment();
SoHAnimSegment40->setDEF(QString("hanim_pelvis"));
SoHAnimSegment40->X3DNode::setName(QString("pelvis"));
SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape42 = new SoShape();
SoShape42->setDEF(QString("DiamondShape"));
SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoVRMLAppearance43->addChild(*SoMaterial44);

SoShape42->addChild(*SoVRMLAppearance43);

SoIndexedFaceSet* SoIndexedFaceSet45 = new SoIndexedFaceSet();
SoIndexedFaceSet45->setCreaseAngle(0.5);
SoIndexedFaceSet45->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate46 = new SoCoordinate();
SoCoordinate46->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet45->setCoord(*SoCoordinate46);

SoShape42->setGeometry(*SoIndexedFaceSet45);

SoTransform41->addChild(*SoShape42);

SoHAnimSegment40->addChild(*SoTransform41);

SoHAnimJoint39->addChildren(*SoHAnimSegment40);

SoHAnimJoint38->addChildren(*SoHAnimJoint39);

SoHAnimHumanoid30->setSkeleton(*SoHAnimJoint38);

SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->setUSE(QString("hanim_HumanoidRoot"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint47);

SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid30->setJoints(*SoHAnimJoint48);

SoHAnimSegment* SoHAnimSegment49 = new SoHAnimSegment();
SoHAnimSegment49->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid30->setSegments(*SoHAnimSegment49);

SoHAnimSite* SoHAnimSite50 = new SoHAnimSite();
SoHAnimSite50->setDEF(QString("hanim_site_view"));
SoHAnimSite50->X3DNode::setName(QString("site_view"));
SoViewpoint* SoViewpoint51 = new SoViewpoint();
SoViewpoint51->setDEF(QString("InclinedView"));
SoViewpoint51->setDescription(QString("Inclined View"));
SoViewpoint51->setPosition(new float[]{1.62,1.05,2.06});
SoViewpoint51->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoHAnimSite50->addChild(*SoViewpoint51);

SoViewpoint* SoViewpoint52 = new SoViewpoint();
SoViewpoint52->setDEF(QString("FrontView"));
SoViewpoint52->setDescription(QString("Front View"));
SoViewpoint52->setPosition(new float[]{0.0,0.854,2.57665});
SoHAnimSite50->addChild(*SoViewpoint52);

SoViewpoint* SoViewpoint53 = new SoViewpoint();
SoViewpoint53->setDEF(QString("SideView"));
SoViewpoint53->setDescription(QString("Side View"));
SoViewpoint53->setPosition(new float[]{2.5929,0.854,0.0});
SoViewpoint53->setOrientation(new float[]{0.0,1.0,0.0,1.57079});
SoHAnimSite50->addChild(*SoViewpoint53);

SoViewpoint* SoViewpoint54 = new SoViewpoint();
SoViewpoint54->setDEF(QString("TopView"));
SoViewpoint54->setDescription(QString("Top View"));
SoViewpoint54->setPosition(new float[]{0.0,3.4495,0.0});
SoViewpoint54->setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
SoHAnimSite50->addChild(*SoViewpoint54);

SoHAnimHumanoid30->setViewpoints(*SoHAnimSite50);

SoNode26->addChild(*SoHAnimHumanoid30);

SoSceneManager0->setSceneGraph(*SoNode26);

return 0;
}
