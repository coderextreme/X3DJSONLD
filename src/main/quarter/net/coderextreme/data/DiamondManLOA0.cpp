
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
Someta3->setContent(QString("DiamondManLOA0.x3d"));
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
Someta8->setContent(QString("Mon, 15 Sep 2025 05:18:46 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("motto"));
Someta9->setContent(QString("(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""));
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
Someta21->setName(QString("Image"));
Someta21->setContent(QString("humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("Image"));
Someta22->setContent(QString("http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("identifier"));
Someta23->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d"));
Sohead1->addMeta(*Someta23);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode24 = new SoNode();
SoWorldInfo* SoWorldInfo25 = new SoWorldInfo();
SoWorldInfo25->setTitle(QString("HANIM 2.0 Default Joint Centers, LOA0"));
SoWorldInfo25->setInfo(new QString[]{QString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")}, 1);
SoNode24->addChild(*SoWorldInfo25);

SoNavigationInfo* SoNavigationInfo26 = new SoNavigationInfo();
SoNavigationInfo26->setSpeed(1.5);
SoNode24->addChild(*SoNavigationInfo26);

SoViewpoint* SoViewpoint27 = new SoViewpoint();
SoViewpoint27->setDescription(QString("Diamond Man, LOA 0"));
SoViewpoint27->setPosition(new float[]{0.0,1.0,3.0});
SoViewpoint27->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode24->addChild(*SoViewpoint27);

SoHAnimHumanoid* SoHAnimHumanoid28 = new SoHAnimHumanoid();
SoHAnimHumanoid28->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid28->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid28->setLoa(0);
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
SoMetadataString33->X3DNode::setName(QString("creationDate"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString33);

SoMetadataString* SoMetadataString34 = new SoMetadataString();
SoMetadataString34->X3DNode::setName(QString("humanoidVersion"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString34);

SoMetadataString* SoMetadataString35 = new SoMetadataString();
SoMetadataString35->X3DNode::setName(QString("usageRestrictions"));
SoMetadataSet29->setValue((X3DNode *)&SoMetadataString35);

SoHAnimHumanoid28->setMetadata(*SoMetadataSet29);

SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->setDEF(QString("hanim_humanoid_root"));
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
SoCoordinate44->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet43->setCoord(*SoCoordinate44);

SoShape40->setGeometry(*SoIndexedFaceSet43);

SoTransform39->addChild(*SoShape40);

SoHAnimSegment38->addChild(*SoTransform39);

SoHAnimJoint37->addChildren(*SoHAnimSegment38);

SoHAnimJoint36->addChildren(*SoHAnimJoint37);

SoHAnimHumanoid28->setSkeleton(*SoHAnimJoint36);

SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint45);

SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid28->setJoints(*SoHAnimJoint46);

SoHAnimSegment* SoHAnimSegment47 = new SoHAnimSegment();
SoHAnimSegment47->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid28->setSegments(*SoHAnimSegment47);

SoHAnimSite* SoHAnimSite48 = new SoHAnimSite();
SoHAnimSite48->setDEF(QString("hanim_site_view"));
SoHAnimSite48->X3DNode::setName(QString("site_view"));
SoViewpoint* SoViewpoint49 = new SoViewpoint();
SoViewpoint49->setDEF(QString("InclinedView"));
SoViewpoint49->setDescription(QString("Inclined View"));
SoViewpoint49->setPosition(new float[]{1.62,1.05,2.06});
SoViewpoint49->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoHAnimSite48->addChild(*SoViewpoint49);

SoViewpoint* SoViewpoint50 = new SoViewpoint();
SoViewpoint50->setDEF(QString("FrontView"));
SoViewpoint50->setDescription(QString("Front View"));
SoViewpoint50->setPosition(new float[]{0.0,0.854,2.57665});
SoHAnimSite48->addChild(*SoViewpoint50);

SoViewpoint* SoViewpoint51 = new SoViewpoint();
SoViewpoint51->setDEF(QString("SideView"));
SoViewpoint51->setDescription(QString("Side View"));
SoViewpoint51->setPosition(new float[]{2.5929,0.854,0.0});
SoViewpoint51->setOrientation(new float[]{0.0,1.0,0.0,1.57079});
SoHAnimSite48->addChild(*SoViewpoint51);

SoViewpoint* SoViewpoint52 = new SoViewpoint();
SoViewpoint52->setDEF(QString("TopView"));
SoViewpoint52->setDescription(QString("Top View"));
SoViewpoint52->setPosition(new float[]{0.0,3.4495,0.0});
SoViewpoint52->setOrientation(new float[]{1.0,0.0,0.0,-1.57079});
SoHAnimSite48->addChild(*SoViewpoint52);

SoHAnimHumanoid28->setViewpoints(*SoHAnimSite48);

SoNode24->addChild(*SoHAnimHumanoid28);

SoSceneManager0->setSceneGraph(*SoNode24);

return 0;
}
