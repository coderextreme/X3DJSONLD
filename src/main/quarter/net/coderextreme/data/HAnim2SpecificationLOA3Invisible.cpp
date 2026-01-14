
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
Someta3->setContent(QString("HAnim2SpecificationLOA3Invisible.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("reference"));
Someta5->setContent(QString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("reference"));
Someta6->setContent(QString("HAnim2SpecificationLOA3Illustrated.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("HAnim2SpecificationLOA3Animation.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("HAnimSpecificationExampleChangeLog.txt"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989."));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("created"));
Someta16->setContent(QString("24 April 2013"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("modified"));
Someta17->setContent(QString("Mon, 15 Sep 2025 05:20:09 GMT"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("creator"));
Someta18->setContent(QString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("images/BonesAllSkeletonFrontViewLOA1.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("images/BonesAllSkeletonFrontViewLOA2.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("images/BonesAllSkeletonFrontViewLOA3.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("TODO"));
Someta22->setContent(QString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("TODO"));
Someta23->setContent(QString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("translator"));
Someta24->setContent(QString("Don Brutzman and Joe Williams"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("generator"));
Someta25->setContent(QString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("generator"));
Someta26->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta26);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode27 = new SoNode();
SoBackground* SoBackground28 = new SoBackground();
SoBackground28->setSkyColor(new float[]{0.3,0.3,0.3}, 3);
SoNode27->addChild(*SoBackground28);

SoNavigationInfo* SoNavigationInfo29 = new SoNavigationInfo();
SoNode27->addChild(*SoNavigationInfo29);

SoGroup* SoGroup30 = new SoGroup();
SoGroup30->setDEF(QString("Original_WorldInfo"));
SoWorldInfo* SoWorldInfo31 = new SoWorldInfo();
SoWorldInfo31->setTitle(QString("HANIM 200x Default Joint Centers, LOA3"));
SoWorldInfo31->setInfo(new QString[]{QString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
SoGroup30->addChild(*SoWorldInfo31);

SoNode27->addChild(*SoGroup30);

SoViewpoint* SoViewpoint32 = new SoViewpoint();
SoViewpoint32->setDescription(QString("Humanoid LOA 3 Front"));
SoViewpoint32->setPosition(new float[]{0.0,0.4,4.0});
SoViewpoint32->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint32);

SoViewpoint* SoViewpoint33 = new SoViewpoint();
SoViewpoint33->setDescription(QString("Humanoid LOA 3 Front Close"));
SoViewpoint33->setPosition(new float[]{0.0,0.8,2.0});
SoViewpoint33->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint33);

SoViewpoint* SoViewpoint34 = new SoViewpoint();
SoViewpoint34->setDescription(QString("Humanoid LOA 3 Front Closer"));
SoViewpoint34->setPosition(new float[]{0.0,1.2,1.0});
SoViewpoint34->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint34);

SoViewpoint* SoViewpoint35 = new SoViewpoint();
SoViewpoint35->setDescription(QString("Humanoid LOA 3 Front Face"));
SoViewpoint35->setPosition(new float[]{0.0,1.63,1.0});
SoViewpoint35->setCenterOfRotation(new float[]{0.0,1.5,0.0016});
SoNode27->addChild(*SoViewpoint35);

SoViewpoint* SoViewpoint36 = new SoViewpoint();
SoViewpoint36->setDescription(QString("Humanoid LOA 3 Right Side"));
SoViewpoint36->setPosition(new float[]{2.6,0.8,0.0});
SoViewpoint36->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint36->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint36);

SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDescription(QString("Humanoid LOA 3 Right Side Close"));
SoViewpoint37->setPosition(new float[]{1.0,0.8,0.5});
SoViewpoint37->setOrientation(new float[]{0.0,1.0,0.0,1.2});
SoViewpoint37->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint37);

SoViewpoint* SoViewpoint38 = new SoViewpoint();
SoViewpoint38->setDescription(QString("Humanoid LOA 3 Left Side Close"));
SoViewpoint38->setPosition(new float[]{-1.0,0.8,0.5});
SoViewpoint38->setOrientation(new float[]{0.0,1.0,0.0,-1.2});
SoViewpoint38->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint38);

SoViewpoint* SoViewpoint39 = new SoViewpoint();
SoViewpoint39->setDescription(QString("Humanoid LOA 3 Left Side"));
SoViewpoint39->setPosition(new float[]{-2.6,0.8,0.0});
SoViewpoint39->setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
SoViewpoint39->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint39);

SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("Humanoid LOA 3 Top"));
SoViewpoint40->setPosition(new float[]{0.0,3.5,0.0});
SoViewpoint40->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint40->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode27->addChild(*SoViewpoint40);

SoHAnimHumanoid* SoHAnimHumanoid41 = new SoHAnimHumanoid();
SoHAnimHumanoid41->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid41->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid41->setLoa(3);
SoMetadataSet* SoMetadataSet42 = new SoMetadataSet();
SoMetadataSet42->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet42->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString43 = new SoMetadataString();
SoMetadataString43->X3DNode::setName(QString("authorName"));
SoMetadataSet42->setValue((X3DNode *)&SoMetadataString43);

SoMetadataString* SoMetadataString44 = new SoMetadataString();
SoMetadataString44->X3DNode::setName(QString("authorEmail"));
SoMetadataSet42->setValue((X3DNode *)&SoMetadataString44);

SoMetadataString* SoMetadataString45 = new SoMetadataString();
SoMetadataString45->X3DNode::setName(QString("copyright"));
SoMetadataSet42->setValue((X3DNode *)&SoMetadataString45);

SoMetadataString* SoMetadataString46 = new SoMetadataString();
SoMetadataString46->X3DNode::setName(QString("creationDate"));
SoMetadataSet42->setValue((X3DNode *)&SoMetadataString46);

SoMetadataFloat* SoMetadataFloat47 = new SoMetadataFloat();
SoMetadataFloat47->X3DNode::setName(QString("height"));
SoMetadataFloat47->setValue(new float[]{1.7504}, 1);
SoMetadataSet42->setValue((X3DNode *)&SoMetadataFloat47);

SoMetadataString* SoMetadataString48 = new SoMetadataString();
SoMetadataString48->X3DNode::setName(QString("humanoidVersion"));
SoMetadataSet42->setValue((X3DNode *)&SoMetadataString48);

SoMetadataString* SoMetadataString49 = new SoMetadataString();
SoMetadataString49->X3DNode::setName(QString("usageRestrictions"));
SoMetadataSet42->setValue((X3DNode *)&SoMetadataString49);

SoHAnimHumanoid41->setMetadata(*SoMetadataSet42);

SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint50->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint50->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimSegment* SoHAnimSegment51 = new SoHAnimSegment();
SoHAnimSegment51->setDEF(QString("hanim_sacrum"));
SoHAnimSegment51->X3DNode::setName(QString("sacrum"));
SoHAnimJoint50->addChildren(*SoHAnimSegment51);

SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint52->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint52->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment53 = new SoHAnimSegment();
SoHAnimSegment53->setDEF(QString("hanim_pelvis"));
SoHAnimSegment53->X3DNode::setName(QString("pelvis"));
SoHAnimSite* SoHAnimSite54 = new SoHAnimSite();
SoHAnimSite54->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite54->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite54->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoHAnimSegment53->addChild(*SoHAnimSite54);

SoHAnimSite* SoHAnimSite55 = new SoHAnimSite();
SoHAnimSite55->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite55->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite55->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoHAnimSegment53->addChild(*SoHAnimSite55);

SoHAnimSite* SoHAnimSite56 = new SoHAnimSite();
SoHAnimSite56->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite56->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite56->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoHAnimSegment53->addChild(*SoHAnimSite56);

SoHAnimSite* SoHAnimSite57 = new SoHAnimSite();
SoHAnimSite57->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite57->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite57->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoHAnimSegment53->addChild(*SoHAnimSite57);

SoHAnimSite* SoHAnimSite58 = new SoHAnimSite();
SoHAnimSite58->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite58->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite58->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoHAnimSegment53->addChild(*SoHAnimSite58);

SoHAnimSite* SoHAnimSite59 = new SoHAnimSite();
SoHAnimSite59->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite59->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite59->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoHAnimSegment53->addChild(*SoHAnimSite59);

SoHAnimSite* SoHAnimSite60 = new SoHAnimSite();
SoHAnimSite60->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite60->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite60->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoHAnimSegment53->addChild(*SoHAnimSite60);

SoHAnimSite* SoHAnimSite61 = new SoHAnimSite();
SoHAnimSite61->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite61->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite61->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoHAnimSegment53->addChild(*SoHAnimSite61);

SoHAnimSite* SoHAnimSite62 = new SoHAnimSite();
SoHAnimSite62->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite62->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite62->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoHAnimSegment53->addChild(*SoHAnimSite62);

SoHAnimJoint52->addChildren(*SoHAnimSegment53);

SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->setDEF(QString("hanim_l_hip"));
SoHAnimJoint63->X3DNode::setName(QString("l_hip"));
SoHAnimJoint63->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment64 = new SoHAnimSegment();
SoHAnimSegment64->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment64->X3DNode::setName(QString("l_thigh"));
SoHAnimSite* SoHAnimSite65 = new SoHAnimSite();
SoHAnimSite65->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite65->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite65->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoHAnimSegment64->addChild(*SoHAnimSite65);

SoHAnimSite* SoHAnimSite66 = new SoHAnimSite();
SoHAnimSite66->setDEF(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite66->X3DNode::setName(QString("l_femoral_lateral_epicondyle_pt"));
SoHAnimSite66->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoHAnimSegment64->addChild(*SoHAnimSite66);

SoHAnimSite* SoHAnimSite67 = new SoHAnimSite();
SoHAnimSite67->setDEF(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimSite67->X3DNode::setName(QString("l_femoral_medial_epicondyle_pt"));
SoHAnimSite67->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoHAnimSegment64->addChild(*SoHAnimSite67);

SoHAnimJoint63->addChildren(*SoHAnimSegment64);

SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->setDEF(QString("hanim_l_knee"));
SoHAnimJoint68->X3DNode::setName(QString("l_knee"));
SoHAnimJoint68->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment69 = new SoHAnimSegment();
SoHAnimSegment69->setDEF(QString("hanim_l_calf"));
SoHAnimSegment69->X3DNode::setName(QString("l_calf"));
SoHAnimJoint68->addChildren(*SoHAnimSegment69);

SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint70->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint70->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment71 = new SoHAnimSegment();
SoHAnimSegment71->setDEF(QString("hanim_l_talus"));
SoHAnimSegment71->X3DNode::setName(QString("l_talus"));
SoHAnimSite* SoHAnimSite72 = new SoHAnimSite();
SoHAnimSite72->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite72->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite72->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoHAnimSegment71->addChild(*SoHAnimSite72);

SoHAnimSite* SoHAnimSite73 = new SoHAnimSite();
SoHAnimSite73->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite73->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite73->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoHAnimSegment71->addChild(*SoHAnimSite73);

SoHAnimSite* SoHAnimSite74 = new SoHAnimSite();
SoHAnimSite74->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite74->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite74->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoHAnimSegment71->addChild(*SoHAnimSite74);

SoHAnimSite* SoHAnimSite75 = new SoHAnimSite();
SoHAnimSite75->setDEF(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimSite75->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite75->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoHAnimSegment71->addChild(*SoHAnimSite75);

SoHAnimJoint70->addChildren(*SoHAnimSegment71);

SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint76->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint76->setCenter(new float[]{0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment77 = new SoHAnimSegment();
SoHAnimSegment77->setDEF(QString("hanim_l_metatarsal_2"));
SoHAnimSegment77->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimJoint76->addChildren(*SoHAnimSegment77);

SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint78->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint78->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment79 = new SoHAnimSegment();
SoHAnimSegment79->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment79->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSite* SoHAnimSite80 = new SoHAnimSite();
SoHAnimSite80->setDEF(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimSite80->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite80->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoHAnimSegment79->addChild(*SoHAnimSite80);

SoHAnimJoint78->addChildren(*SoHAnimSegment79);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint81->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint81->setCenter(new float[]{0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment82 = new SoHAnimSegment();
SoHAnimSegment82->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimSegment82->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite83 = new SoHAnimSite();
SoHAnimSite83->setDEF(QString("hanim_l_forefoot_tip"));
SoHAnimSite83->X3DNode::setName(QString("l_forefoot_tip"));
SoHAnimSite83->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoHAnimSegment82->addChild(*SoHAnimSite83);

SoHAnimSite* SoHAnimSite84 = new SoHAnimSite();
SoHAnimSite84->setDEF(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimSite84->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite84->setTranslation(new float[]{0.1825,0.007,0.0928});
SoHAnimSegment82->addChild(*SoHAnimSite84);

SoHAnimSite* SoHAnimSite85 = new SoHAnimSite();
SoHAnimSite85->setDEF(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite85->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite85->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoHAnimSegment82->addChild(*SoHAnimSite85);

SoHAnimJoint81->addChildren(*SoHAnimSegment82);

SoHAnimJoint78->addChildren(*SoHAnimJoint81);

SoHAnimJoint76->addChildren(*SoHAnimJoint78);

SoHAnimJoint70->addChildren(*SoHAnimJoint76);

SoHAnimJoint68->addChildren(*SoHAnimJoint70);

SoHAnimJoint63->addChildren(*SoHAnimJoint68);

SoHAnimJoint52->addChildren(*SoHAnimJoint63);

SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->setDEF(QString("hanim_r_hip"));
SoHAnimJoint86->X3DNode::setName(QString("r_hip"));
SoHAnimJoint86->setCenter(new float[]{-0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment87 = new SoHAnimSegment();
SoHAnimSegment87->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment87->X3DNode::setName(QString("r_thigh"));
SoHAnimSite* SoHAnimSite88 = new SoHAnimSite();
SoHAnimSite88->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite88->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite88->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoHAnimSegment87->addChild(*SoHAnimSite88);

SoHAnimSite* SoHAnimSite89 = new SoHAnimSite();
SoHAnimSite89->setDEF(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite89->X3DNode::setName(QString("r_femoral_lateral_epicondyle_pt"));
SoHAnimSite89->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoHAnimSegment87->addChild(*SoHAnimSite89);

SoHAnimSite* SoHAnimSite90 = new SoHAnimSite();
SoHAnimSite90->setDEF(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimSite90->X3DNode::setName(QString("r_femoral_medial_epicondyle_pt"));
SoHAnimSite90->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoHAnimSegment87->addChild(*SoHAnimSite90);

SoHAnimJoint86->addChildren(*SoHAnimSegment87);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->setDEF(QString("hanim_r_knee"));
SoHAnimJoint91->X3DNode::setName(QString("r_knee"));
SoHAnimJoint91->setCenter(new float[]{-0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment92 = new SoHAnimSegment();
SoHAnimSegment92->setDEF(QString("hanim_r_calf"));
SoHAnimSegment92->X3DNode::setName(QString("r_calf"));
SoHAnimJoint91->addChildren(*SoHAnimSegment92);

SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint93->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint93->setCenter(new float[]{-0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment94 = new SoHAnimSegment();
SoHAnimSegment94->setDEF(QString("hanim_r_talus"));
SoHAnimSegment94->X3DNode::setName(QString("r_talus"));
SoHAnimSite* SoHAnimSite95 = new SoHAnimSite();
SoHAnimSite95->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite95->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite95->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoHAnimSegment94->addChild(*SoHAnimSite95);

SoHAnimSite* SoHAnimSite96 = new SoHAnimSite();
SoHAnimSite96->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite96->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite96->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoHAnimSegment94->addChild(*SoHAnimSite96);

SoHAnimSite* SoHAnimSite97 = new SoHAnimSite();
SoHAnimSite97->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite97->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite97->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoHAnimSegment94->addChild(*SoHAnimSite97);

SoHAnimSite* SoHAnimSite98 = new SoHAnimSite();
SoHAnimSite98->setDEF(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimSite98->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite98->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoHAnimSegment94->addChild(*SoHAnimSite98);

SoHAnimJoint93->addChildren(*SoHAnimSegment94);

SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint99->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint99->setCenter(new float[]{-0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment100 = new SoHAnimSegment();
SoHAnimSegment100->setDEF(QString("hanim_r_metatarsal_2"));
SoHAnimSegment100->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimJoint99->addChildren(*SoHAnimSegment100);

SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint101->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint101->setCenter(new float[]{-0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment102 = new SoHAnimSegment();
SoHAnimSegment102->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment102->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSite* SoHAnimSite103 = new SoHAnimSite();
SoHAnimSite103->setDEF(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimSite103->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite103->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoHAnimSegment102->addChild(*SoHAnimSite103);

SoHAnimJoint101->addChildren(*SoHAnimSegment102);

SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint104->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint104->setCenter(new float[]{-0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment105 = new SoHAnimSegment();
SoHAnimSegment105->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimSegment105->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite106 = new SoHAnimSite();
SoHAnimSite106->setDEF(QString("hanim_r_forefoot_tip"));
SoHAnimSite106->X3DNode::setName(QString("r_forefoot_tip"));
SoHAnimSite106->setTranslation(new float[]{-0.1043,0.0227,0.145});
SoHAnimSegment105->addChild(*SoHAnimSite106);

SoHAnimSite* SoHAnimSite107 = new SoHAnimSite();
SoHAnimSite107->setDEF(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimSite107->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite107->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoHAnimSegment105->addChild(*SoHAnimSite107);

SoHAnimSite* SoHAnimSite108 = new SoHAnimSite();
SoHAnimSite108->setDEF(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite108->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite108->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoHAnimSegment105->addChild(*SoHAnimSite108);

SoHAnimJoint104->addChildren(*SoHAnimSegment105);

SoHAnimJoint101->addChildren(*SoHAnimJoint104);

SoHAnimJoint99->addChildren(*SoHAnimJoint101);

SoHAnimJoint93->addChildren(*SoHAnimJoint99);

SoHAnimJoint91->addChildren(*SoHAnimJoint93);

SoHAnimJoint86->addChildren(*SoHAnimJoint91);

SoHAnimJoint52->addChildren(*SoHAnimJoint86);

SoHAnimJoint50->addChildren(*SoHAnimJoint52);

SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->setDEF(QString("hanim_vl5"));
SoHAnimJoint109->X3DNode::setName(QString("vl5"));
SoHAnimJoint109->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimSegment* SoHAnimSegment110 = new SoHAnimSegment();
SoHAnimSegment110->setDEF(QString("hanim_l5"));
SoHAnimSegment110->X3DNode::setName(QString("l5"));
SoHAnimSite* SoHAnimSite111 = new SoHAnimSite();
SoHAnimSite111->setDEF(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimSite111->X3DNode::setName(QString("waist_preferred_posterior_pt"));
SoHAnimSite111->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoHAnimSegment110->addChild(*SoHAnimSite111);

SoHAnimSite* SoHAnimSite112 = new SoHAnimSite();
SoHAnimSite112->setDEF(QString("hanim_navel_pt"));
SoHAnimSite112->X3DNode::setName(QString("navel_pt"));
SoHAnimSite112->setTranslation(new float[]{0.0069,1.0966,0.1017});
SoHAnimSegment110->addChild(*SoHAnimSite112);

SoHAnimJoint109->addChildren(*SoHAnimSegment110);

SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->setDEF(QString("hanim_vl4"));
SoHAnimJoint113->X3DNode::setName(QString("vl4"));
SoHAnimJoint113->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimSegment* SoHAnimSegment114 = new SoHAnimSegment();
SoHAnimSegment114->setDEF(QString("hanim_l4"));
SoHAnimSegment114->X3DNode::setName(QString("l4"));
SoHAnimJoint113->addChildren(*SoHAnimSegment114);

SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->setDEF(QString("hanim_vl3"));
SoHAnimJoint115->X3DNode::setName(QString("vl3"));
SoHAnimJoint115->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimSegment* SoHAnimSegment116 = new SoHAnimSegment();
SoHAnimSegment116->setDEF(QString("hanim_l3"));
SoHAnimSegment116->X3DNode::setName(QString("l3"));
SoHAnimJoint115->addChildren(*SoHAnimSegment116);

SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->setDEF(QString("hanim_vl2"));
SoHAnimJoint117->X3DNode::setName(QString("vl2"));
SoHAnimJoint117->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimSegment* SoHAnimSegment118 = new SoHAnimSegment();
SoHAnimSegment118->setDEF(QString("hanim_l2"));
SoHAnimSegment118->X3DNode::setName(QString("l2"));
SoHAnimSite* SoHAnimSite119 = new SoHAnimSite();
SoHAnimSite119->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite119->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite119->setTranslation(new float[]{-0.0711,1.1941,0.1016});
SoHAnimSegment118->addChild(*SoHAnimSite119);

SoHAnimSite* SoHAnimSite120 = new SoHAnimSite();
SoHAnimSite120->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite120->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite120->setTranslation(new float[]{0.0871,1.1925,0.0992});
SoHAnimSegment118->addChild(*SoHAnimSite120);

SoHAnimSite* SoHAnimSite121 = new SoHAnimSite();
SoHAnimSite121->setDEF(QString("hanim_rib10_midspine_pt"));
SoHAnimSite121->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite121->setTranslation(new float[]{0.0049,1.1908,-0.1113});
SoHAnimSegment118->addChild(*SoHAnimSite121);

SoHAnimJoint117->addChildren(*SoHAnimSegment118);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("hanim_vl1"));
SoHAnimJoint122->X3DNode::setName(QString("vl1"));
SoHAnimJoint122->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimSegment* SoHAnimSegment123 = new SoHAnimSegment();
SoHAnimSegment123->setDEF(QString("hanim_l1"));
SoHAnimSegment123->X3DNode::setName(QString("l1"));
SoHAnimJoint122->addChildren(*SoHAnimSegment123);

SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setDEF(QString("hanim_vt12"));
SoHAnimJoint124->X3DNode::setName(QString("vt12"));
SoHAnimJoint124->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimSegment* SoHAnimSegment125 = new SoHAnimSegment();
SoHAnimSegment125->setDEF(QString("hanim_t12"));
SoHAnimSegment125->X3DNode::setName(QString("t12"));
SoHAnimJoint124->addChildren(*SoHAnimSegment125);

SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->setDEF(QString("hanim_vt11"));
SoHAnimJoint126->X3DNode::setName(QString("vt11"));
SoHAnimJoint126->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment127 = new SoHAnimSegment();
SoHAnimSegment127->setDEF(QString("hanim_t11"));
SoHAnimSegment127->X3DNode::setName(QString("t11"));
SoHAnimJoint126->addChildren(*SoHAnimSegment127);

SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setDEF(QString("hanim_vt10"));
SoHAnimJoint128->X3DNode::setName(QString("vt10"));
SoHAnimJoint128->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimSegment* SoHAnimSegment129 = new SoHAnimSegment();
SoHAnimSegment129->setDEF(QString("hanim_t10"));
SoHAnimSegment129->X3DNode::setName(QString("t10"));
SoHAnimSite* SoHAnimSite130 = new SoHAnimSite();
SoHAnimSite130->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite130->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite130->setTranslation(new float[]{0.0085,1.2995,0.1147});
SoHAnimSegment129->addChild(*SoHAnimSite130);

SoHAnimJoint128->addChildren(*SoHAnimSegment129);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->setDEF(QString("hanim_vt9"));
SoHAnimJoint131->X3DNode::setName(QString("vt9"));
SoHAnimJoint131->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimSegment* SoHAnimSegment132 = new SoHAnimSegment();
SoHAnimSegment132->setDEF(QString("hanim_t9"));
SoHAnimSegment132->X3DNode::setName(QString("t9"));
SoHAnimSite* SoHAnimSite133 = new SoHAnimSite();
SoHAnimSite133->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite133->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite133->setTranslation(new float[]{-0.0736,1.3385,0.1217});
SoHAnimSegment132->addChild(*SoHAnimSite133);

SoHAnimSite* SoHAnimSite134 = new SoHAnimSite();
SoHAnimSite134->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite134->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite134->setTranslation(new float[]{0.0918,1.3382,0.1192});
SoHAnimSegment132->addChild(*SoHAnimSite134);

SoHAnimJoint131->addChildren(*SoHAnimSegment132);

SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->setDEF(QString("hanim_vt8"));
SoHAnimJoint135->X3DNode::setName(QString("vt8"));
SoHAnimJoint135->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimSegment* SoHAnimSegment136 = new SoHAnimSegment();
SoHAnimSegment136->setDEF(QString("hanim_t8"));
SoHAnimSegment136->X3DNode::setName(QString("t8"));
SoHAnimJoint135->addChildren(*SoHAnimSegment136);

SoHAnimJoint* SoHAnimJoint137 = new SoHAnimJoint();
SoHAnimJoint137->setDEF(QString("hanim_vt7"));
SoHAnimJoint137->X3DNode::setName(QString("vt7"));
SoHAnimJoint137->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimSegment* SoHAnimSegment138 = new SoHAnimSegment();
SoHAnimSegment138->setDEF(QString("hanim_t7"));
SoHAnimSegment138->X3DNode::setName(QString("t7"));
SoHAnimJoint137->addChildren(*SoHAnimSegment138);

SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->setDEF(QString("hanim_vt6"));
SoHAnimJoint139->X3DNode::setName(QString("vt6"));
SoHAnimJoint139->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimSegment* SoHAnimSegment140 = new SoHAnimSegment();
SoHAnimSegment140->setDEF(QString("hanim_t6"));
SoHAnimSegment140->X3DNode::setName(QString("t6"));
SoHAnimJoint139->addChildren(*SoHAnimSegment140);

SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->setDEF(QString("hanim_vt5"));
SoHAnimJoint141->X3DNode::setName(QString("vt5"));
SoHAnimJoint141->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimSegment* SoHAnimSegment142 = new SoHAnimSegment();
SoHAnimSegment142->setDEF(QString("hanim_t5"));
SoHAnimSegment142->X3DNode::setName(QString("t5"));
SoHAnimJoint141->addChildren(*SoHAnimSegment142);

SoHAnimJoint* SoHAnimJoint143 = new SoHAnimJoint();
SoHAnimJoint143->setDEF(QString("hanim_vt4"));
SoHAnimJoint143->X3DNode::setName(QString("vt4"));
SoHAnimJoint143->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimSegment* SoHAnimSegment144 = new SoHAnimSegment();
SoHAnimSegment144->setDEF(QString("hanim_t4"));
SoHAnimSegment144->X3DNode::setName(QString("t4"));
SoHAnimJoint143->addChildren(*SoHAnimSegment144);

SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->setDEF(QString("hanim_vt3"));
SoHAnimJoint145->X3DNode::setName(QString("vt3"));
SoHAnimJoint145->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimSegment* SoHAnimSegment146 = new SoHAnimSegment();
SoHAnimSegment146->setDEF(QString("hanim_t3"));
SoHAnimSegment146->X3DNode::setName(QString("t3"));
SoHAnimJoint145->addChildren(*SoHAnimSegment146);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setDEF(QString("hanim_vt2"));
SoHAnimJoint147->X3DNode::setName(QString("vt2"));
SoHAnimJoint147->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimSegment* SoHAnimSegment148 = new SoHAnimSegment();
SoHAnimSegment148->setDEF(QString("hanim_t2"));
SoHAnimSegment148->X3DNode::setName(QString("t2"));
SoHAnimJoint147->addChildren(*SoHAnimSegment148);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->setDEF(QString("hanim_vt1"));
SoHAnimJoint149->X3DNode::setName(QString("vt1"));
SoHAnimJoint149->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimSegment* SoHAnimSegment150 = new SoHAnimSegment();
SoHAnimSegment150->setDEF(QString("hanim_t1"));
SoHAnimSegment150->X3DNode::setName(QString("t1"));
SoHAnimSite* SoHAnimSite151 = new SoHAnimSite();
SoHAnimSite151->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite151->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite151->setTranslation(new float[]{0.0084,1.4714,0.0551});
SoHAnimSegment150->addChild(*SoHAnimSite151);

SoHAnimSite* SoHAnimSite152 = new SoHAnimSite();
SoHAnimSite152->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite152->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite152->setTranslation(new float[]{0.0064,1.52,-0.0815});
SoHAnimSegment150->addChild(*SoHAnimSite152);

SoHAnimJoint149->addChildren(*SoHAnimSegment150);

SoHAnimJoint* SoHAnimJoint153 = new SoHAnimJoint();
SoHAnimJoint153->setDEF(QString("hanim_vc7"));
SoHAnimJoint153->X3DNode::setName(QString("vc7"));
SoHAnimJoint153->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimSegment* SoHAnimSegment154 = new SoHAnimSegment();
SoHAnimSegment154->setDEF(QString("hanim_c7"));
SoHAnimSegment154->X3DNode::setName(QString("c7"));
SoHAnimSite* SoHAnimSite155 = new SoHAnimSite();
SoHAnimSite155->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite155->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite155->setTranslation(new float[]{-0.0419,1.5149,-0.022});
SoHAnimSegment154->addChild(*SoHAnimSite155);

SoHAnimSite* SoHAnimSite156 = new SoHAnimSite();
SoHAnimSite156->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite156->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite156->setTranslation(new float[]{0.0646,1.5141,-0.038});
SoHAnimSegment154->addChild(*SoHAnimSite156);

SoHAnimJoint153->addChildren(*SoHAnimSegment154);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->setDEF(QString("hanim_vc6"));
SoHAnimJoint157->X3DNode::setName(QString("vc6"));
SoHAnimJoint157->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimSegment* SoHAnimSegment158 = new SoHAnimSegment();
SoHAnimSegment158->setDEF(QString("hanim_c6"));
SoHAnimSegment158->X3DNode::setName(QString("c6"));
SoHAnimJoint157->addChildren(*SoHAnimSegment158);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->setDEF(QString("hanim_vc5"));
SoHAnimJoint159->X3DNode::setName(QString("vc5"));
SoHAnimJoint159->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimSegment* SoHAnimSegment160 = new SoHAnimSegment();
SoHAnimSegment160->setDEF(QString("hanim_c5"));
SoHAnimSegment160->X3DNode::setName(QString("c5"));
SoHAnimJoint159->addChildren(*SoHAnimSegment160);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->setDEF(QString("hanim_vc4"));
SoHAnimJoint161->X3DNode::setName(QString("vc4"));
SoHAnimJoint161->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimSegment* SoHAnimSegment162 = new SoHAnimSegment();
SoHAnimSegment162->setDEF(QString("hanim_c4"));
SoHAnimSegment162->X3DNode::setName(QString("c4"));
SoHAnimJoint161->addChildren(*SoHAnimSegment162);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setDEF(QString("hanim_vc3"));
SoHAnimJoint163->X3DNode::setName(QString("vc3"));
SoHAnimJoint163->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimSegment* SoHAnimSegment164 = new SoHAnimSegment();
SoHAnimSegment164->setDEF(QString("hanim_c3"));
SoHAnimSegment164->X3DNode::setName(QString("c3"));
SoHAnimJoint163->addChildren(*SoHAnimSegment164);

SoHAnimJoint* SoHAnimJoint165 = new SoHAnimJoint();
SoHAnimJoint165->setDEF(QString("hanim_vc2"));
SoHAnimJoint165->X3DNode::setName(QString("vc2"));
SoHAnimJoint165->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimSegment* SoHAnimSegment166 = new SoHAnimSegment();
SoHAnimSegment166->setDEF(QString("hanim_c2"));
SoHAnimSegment166->X3DNode::setName(QString("c2"));
SoHAnimJoint165->addChildren(*SoHAnimSegment166);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setDEF(QString("hanim_vc1"));
SoHAnimJoint167->X3DNode::setName(QString("vc1"));
SoHAnimJoint167->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimSegment* SoHAnimSegment168 = new SoHAnimSegment();
SoHAnimSegment168->setDEF(QString("hanim_c1"));
SoHAnimSegment168->X3DNode::setName(QString("c1"));
SoHAnimJoint167->addChildren(*SoHAnimSegment168);

SoHAnimJoint* SoHAnimJoint169 = new SoHAnimJoint();
SoHAnimJoint169->setDEF(QString("hanim_skullbase"));
SoHAnimJoint169->X3DNode::setName(QString("skullbase"));
SoHAnimJoint169->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment170 = new SoHAnimSegment();
SoHAnimSegment170->setDEF(QString("hanim_skull"));
SoHAnimSegment170->X3DNode::setName(QString("skull"));
SoHAnimSite* SoHAnimSite171 = new SoHAnimSite();
SoHAnimSite171->setDEF(QString("hanim_skull_vertex_tip"));
SoHAnimSite171->X3DNode::setName(QString("skull_vertex_tip"));
SoHAnimSite171->setTranslation(new float[]{0.005,1.7504,0.0055});
SoHAnimSegment170->addChild(*SoHAnimSite171);

SoHAnimSite* SoHAnimSite172 = new SoHAnimSite();
SoHAnimSite172->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite172->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite172->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoHAnimSegment170->addChild(*SoHAnimSite172);

SoHAnimSite* SoHAnimSite173 = new SoHAnimSite();
SoHAnimSite173->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite173->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite173->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoHAnimSegment170->addChild(*SoHAnimSite173);

SoHAnimSite* SoHAnimSite174 = new SoHAnimSite();
SoHAnimSite174->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite174->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite174->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoHAnimSegment170->addChild(*SoHAnimSite174);

SoHAnimSite* SoHAnimSite175 = new SoHAnimSite();
SoHAnimSite175->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite175->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite175->setTranslation(new float[]{0.0061,1.541,0.0805});
SoHAnimSegment170->addChild(*SoHAnimSite175);

SoHAnimSite* SoHAnimSite176 = new SoHAnimSite();
SoHAnimSite176->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite176->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite176->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoHAnimSegment170->addChild(*SoHAnimSite176);

SoHAnimSite* SoHAnimSite177 = new SoHAnimSite();
SoHAnimSite177->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite177->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite177->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoHAnimSegment170->addChild(*SoHAnimSite177);

SoHAnimSite* SoHAnimSite178 = new SoHAnimSite();
SoHAnimSite178->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite178->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite178->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoHAnimSegment170->addChild(*SoHAnimSite178);

SoHAnimSite* SoHAnimSite179 = new SoHAnimSite();
SoHAnimSite179->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite179->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite179->setTranslation(new float[]{0.0631,1.553,0.033});
SoHAnimSegment170->addChild(*SoHAnimSite179);

SoHAnimSite* SoHAnimSite180 = new SoHAnimSite();
SoHAnimSite180->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite180->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite180->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoHAnimSegment170->addChild(*SoHAnimSite180);

SoHAnimJoint169->addChildren(*SoHAnimSegment170);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint181->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint181->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment182 = new SoHAnimSegment();
SoHAnimSegment182->setDEF(QString("hanim_l_eyeball"));
SoHAnimSegment182->X3DNode::setName(QString("l_eyeball"));
SoHAnimSite* SoHAnimSite183 = new SoHAnimSite();
SoHAnimSite183->setDEF(QString("hanim_l_eyeball_site_view"));
SoHAnimSite183->X3DNode::setName(QString("l_eyeball_site_view"));
SoHAnimSite183->setTranslation(new float[]{0.034,1.64,0.05});
SoViewpoint* SoViewpoint184 = new SoViewpoint();
SoViewpoint184->setDEF(QString("hanim_l_eyeball_site_viewpoint"));
SoViewpoint184->setDescription(QString("l_eyeball_site_viewpoint looking forward"));
SoViewpoint184->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint184->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite183->addChild(*SoViewpoint184);

SoHAnimSegment182->addChild(*SoHAnimSite183);

SoHAnimJoint181->addChildren(*SoHAnimSegment182);

SoHAnimJoint169->addChildren(*SoHAnimJoint181);

SoHAnimJoint* SoHAnimJoint185 = new SoHAnimJoint();
SoHAnimJoint185->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint185->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint185->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment186 = new SoHAnimSegment();
SoHAnimSegment186->setDEF(QString("hanim_l_eyelid"));
SoHAnimSegment186->X3DNode::setName(QString("l_eyelid"));
SoHAnimJoint185->addChildren(*SoHAnimSegment186);

SoHAnimJoint169->addChildren(*SoHAnimJoint185);

SoHAnimJoint* SoHAnimJoint187 = new SoHAnimJoint();
SoHAnimJoint187->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint187->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint187->setCenter(new float[]{0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment188 = new SoHAnimSegment();
SoHAnimSegment188->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSegment188->X3DNode::setName(QString("l_eyebrow"));
SoHAnimJoint187->addChildren(*SoHAnimSegment188);

SoHAnimJoint169->addChildren(*SoHAnimJoint187);

SoHAnimJoint* SoHAnimJoint189 = new SoHAnimJoint();
SoHAnimJoint189->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint189->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint189->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment190 = new SoHAnimSegment();
SoHAnimSegment190->setDEF(QString("hanim_r_eyeball"));
SoHAnimSegment190->X3DNode::setName(QString("r_eyeball"));
SoHAnimSite* SoHAnimSite191 = new SoHAnimSite();
SoHAnimSite191->setDEF(QString("hanim_r_eyeball_site_view"));
SoHAnimSite191->X3DNode::setName(QString("r_eyeball_site_view"));
SoHAnimSite191->setTranslation(new float[]{-0.034,1.64,0.05});
SoViewpoint* SoViewpoint192 = new SoViewpoint();
SoViewpoint192->setDEF(QString("hanim_r_eyeball_site_viewpoint"));
SoViewpoint192->setDescription(QString("r_eyeball_site_viewpoint looking forward"));
SoViewpoint192->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint192->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite191->addChild(*SoViewpoint192);

SoHAnimSegment190->addChild(*SoHAnimSite191);

SoHAnimJoint189->addChildren(*SoHAnimSegment190);

SoHAnimJoint169->addChildren(*SoHAnimJoint189);

SoHAnimJoint* SoHAnimJoint193 = new SoHAnimJoint();
SoHAnimJoint193->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint193->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint193->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment194 = new SoHAnimSegment();
SoHAnimSegment194->setDEF(QString("hanim_r_eyelid"));
SoHAnimSegment194->X3DNode::setName(QString("r_eyelid"));
SoHAnimJoint193->addChildren(*SoHAnimSegment194);

SoHAnimJoint169->addChildren(*SoHAnimJoint193);

SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint195->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint195->setCenter(new float[]{-0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment196 = new SoHAnimSegment();
SoHAnimSegment196->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSegment196->X3DNode::setName(QString("r_eyebrow"));
SoHAnimJoint195->addChildren(*SoHAnimSegment196);

SoHAnimJoint169->addChildren(*SoHAnimJoint195);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint197->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint197->setCenter(new float[]{0.0,1.63,0.015});
SoHAnimSegment* SoHAnimSegment198 = new SoHAnimSegment();
SoHAnimSegment198->setDEF(QString("hanim_jaw"));
SoHAnimSegment198->X3DNode::setName(QString("jaw"));
SoHAnimSite* SoHAnimSite199 = new SoHAnimSite();
SoHAnimSite199->setDEF(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimSite199->X3DNode::setName(QString("temporomandibular_l_site_pt"));
SoHAnimSite199->setTranslation(new float[]{0.045,1.63,0.0});
SoHAnimSegment198->addChild(*SoHAnimSite199);

SoHAnimSite* SoHAnimSite200 = new SoHAnimSite();
SoHAnimSite200->setDEF(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimSite200->X3DNode::setName(QString("temporomandibular_r_site_pt"));
SoHAnimSite200->setTranslation(new float[]{-0.045,1.63,0.0});
SoHAnimSegment198->addChild(*SoHAnimSite200);

SoHAnimJoint197->addChildren(*SoHAnimSegment198);

SoHAnimJoint169->addChildren(*SoHAnimJoint197);

SoHAnimJoint167->addChildren(*SoHAnimJoint169);

SoHAnimJoint165->addChildren(*SoHAnimJoint167);

SoHAnimJoint163->addChildren(*SoHAnimJoint165);

SoHAnimJoint161->addChildren(*SoHAnimJoint163);

SoHAnimJoint159->addChildren(*SoHAnimJoint161);

SoHAnimJoint157->addChildren(*SoHAnimJoint159);

SoHAnimJoint153->addChildren(*SoHAnimJoint157);

SoHAnimJoint149->addChildren(*SoHAnimJoint153);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint201->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint201->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment202 = new SoHAnimSegment();
SoHAnimSegment202->setDEF(QString("hanim_l_clavicle"));
SoHAnimSegment202->X3DNode::setName(QString("l_clavicle"));
SoHAnimSite* SoHAnimSite203 = new SoHAnimSite();
SoHAnimSite203->setDEF(QString("hanim_l_clavicle_pt"));
SoHAnimSite203->X3DNode::setName(QString("l_clavicle_pt"));
SoHAnimSite203->setTranslation(new float[]{0.0271,1.4943,0.0394});
SoHAnimSegment202->addChild(*SoHAnimSite203);

SoHAnimSite* SoHAnimSite204 = new SoHAnimSite();
SoHAnimSite204->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite204->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite204->setTranslation(new float[]{0.2032,1.476,-0.049});
SoHAnimSegment202->addChild(*SoHAnimSite204);

SoHAnimSite* SoHAnimSite205 = new SoHAnimSite();
SoHAnimSite205->setDEF(QString("hanim_l_axilla_proximal_pt"));
SoHAnimSite205->X3DNode::setName(QString("l_axilla_proximal_pt"));
SoHAnimSite205->setTranslation(new float[]{0.1777,1.4065,-0.0075});
SoHAnimSegment202->addChild(*SoHAnimSite205);

SoHAnimSite* SoHAnimSite206 = new SoHAnimSite();
SoHAnimSite206->setDEF(QString("hanim_l_axilla_distal_pt"));
SoHAnimSite206->X3DNode::setName(QString("l_axilla_distal_pt"));
SoHAnimSite206->setTranslation(new float[]{0.1706,1.4072,-0.0875});
SoHAnimSegment202->addChild(*SoHAnimSite206);

SoHAnimJoint201->addChildren(*SoHAnimSegment202);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint207->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint207->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment208 = new SoHAnimSegment();
SoHAnimSegment208->setDEF(QString("hanim_l_scapula"));
SoHAnimSegment208->X3DNode::setName(QString("l_scapula"));
SoHAnimJoint207->addChildren(*SoHAnimSegment208);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint209->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint209->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment210 = new SoHAnimSegment();
SoHAnimSegment210->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment210->X3DNode::setName(QString("l_upperarm"));
SoHAnimSite* SoHAnimSite211 = new SoHAnimSite();
SoHAnimSite211->setDEF(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite211->X3DNode::setName(QString("l_humeral_lateral_epicondyle_pt"));
SoHAnimSite211->setTranslation(new float[]{0.228,1.1482,-0.11});
SoHAnimSegment210->addChild(*SoHAnimSite211);

SoHAnimJoint209->addChildren(*SoHAnimSegment210);

SoHAnimJoint* SoHAnimJoint212 = new SoHAnimJoint();
SoHAnimJoint212->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint212->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint212->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment213 = new SoHAnimSegment();
SoHAnimSegment213->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment213->X3DNode::setName(QString("l_forearm"));
SoHAnimSite* SoHAnimSite214 = new SoHAnimSite();
SoHAnimSite214->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite214->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite214->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoHAnimSegment213->addChild(*SoHAnimSite214);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite215->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite215->setTranslation(new float[]{0.1962,1.1375,-0.1123});
SoHAnimSegment213->addChild(*SoHAnimSite215);

SoHAnimSite* SoHAnimSite216 = new SoHAnimSite();
SoHAnimSite216->setDEF(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimSite216->X3DNode::setName(QString("l_humeral_medial_epicondyle_pt"));
SoHAnimSite216->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoHAnimSegment213->addChild(*SoHAnimSite216);

SoHAnimSite* SoHAnimSite217 = new SoHAnimSite();
SoHAnimSite217->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite217->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite217->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoHAnimSegment213->addChild(*SoHAnimSite217);

SoHAnimJoint212->addChildren(*SoHAnimSegment213);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint218->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint218->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment219 = new SoHAnimSegment();
SoHAnimSegment219->setDEF(QString("hanim_l_carpal"));
SoHAnimSegment219->X3DNode::setName(QString("l_carpal"));
SoHAnimSite* SoHAnimSite220 = new SoHAnimSite();
SoHAnimSite220->setDEF(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite220->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite220->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoHAnimSegment219->addChild(*SoHAnimSite220);

SoHAnimSite* SoHAnimSite221 = new SoHAnimSite();
SoHAnimSite221->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite221->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite221->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoHAnimSegment219->addChild(*SoHAnimSite221);

SoHAnimSite* SoHAnimSite222 = new SoHAnimSite();
SoHAnimSite222->setDEF(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite222->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite222->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoHAnimSegment219->addChild(*SoHAnimSite222);

SoHAnimSite* SoHAnimSite223 = new SoHAnimSite();
SoHAnimSite223->setDEF(QString("hanim_l_hand_front_view"));
SoHAnimSite223->X3DNode::setName(QString("l_hand_front_view"));
SoHAnimSite223->setTranslation(new float[]{0.3,0.75,0.45});
SoViewpoint* SoViewpoint224 = new SoViewpoint();
SoViewpoint224->setDEF(QString("hanim_l_hand_front_viewpoint"));
SoViewpoint224->setDescription(QString("left hand front"));
SoViewpoint224->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint224->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite223->addChild(*SoViewpoint224);

SoHAnimSegment219->addChild(*SoHAnimSite223);

SoHAnimJoint218->addChildren(*SoHAnimSegment219);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint225->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint225->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment226 = new SoHAnimSegment();
SoHAnimSegment226->setDEF(QString("hanim_l_metacarpal_1"));
SoHAnimSegment226->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimJoint225->addChildren(*SoHAnimSegment226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint227->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint227->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment228 = new SoHAnimSegment();
SoHAnimSegment228->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimSegment228->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimJoint227->addChildren(*SoHAnimSegment228);

SoHAnimJoint* SoHAnimJoint229 = new SoHAnimJoint();
SoHAnimJoint229->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint229->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint229->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment230 = new SoHAnimSegment();
SoHAnimSegment230->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimSegment230->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSite* SoHAnimSite231 = new SoHAnimSite();
SoHAnimSite231->setDEF(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite231->X3DNode::setName(QString("l_carpal_distal_phalanx_1_tip"));
SoHAnimSite231->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoHAnimSegment230->addChild(*SoHAnimSite231);

SoHAnimJoint229->addChildren(*SoHAnimSegment230);

SoHAnimJoint227->addChildren(*SoHAnimJoint229);

SoHAnimJoint225->addChildren(*SoHAnimJoint227);

SoHAnimJoint218->addChildren(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint232 = new SoHAnimJoint();
SoHAnimJoint232->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint232->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint232->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment233 = new SoHAnimSegment();
SoHAnimSegment233->setDEF(QString("hanim_l_metacarpal_2"));
SoHAnimSegment233->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimJoint232->addChildren(*SoHAnimSegment233);

SoHAnimJoint* SoHAnimJoint234 = new SoHAnimJoint();
SoHAnimJoint234->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint234->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint234->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment235 = new SoHAnimSegment();
SoHAnimSegment235->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimSegment235->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimJoint234->addChildren(*SoHAnimSegment235);

SoHAnimJoint* SoHAnimJoint236 = new SoHAnimJoint();
SoHAnimJoint236->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint236->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint236->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment237 = new SoHAnimSegment();
SoHAnimSegment237->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimSegment237->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimJoint236->addChildren(*SoHAnimSegment237);

SoHAnimJoint* SoHAnimJoint238 = new SoHAnimJoint();
SoHAnimJoint238->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint238->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint238->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment239 = new SoHAnimSegment();
SoHAnimSegment239->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimSegment239->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite240 = new SoHAnimSite();
SoHAnimSite240->setDEF(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite240->X3DNode::setName(QString("l_carpal_distal_phalanx_2_tip"));
SoHAnimSite240->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoHAnimSegment239->addChild(*SoHAnimSite240);

SoHAnimSite* SoHAnimSite241 = new SoHAnimSite();
SoHAnimSite241->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite241->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite241->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoHAnimSegment239->addChild(*SoHAnimSite241);

SoHAnimJoint238->addChildren(*SoHAnimSegment239);

SoHAnimJoint236->addChildren(*SoHAnimJoint238);

SoHAnimJoint234->addChildren(*SoHAnimJoint236);

SoHAnimJoint232->addChildren(*SoHAnimJoint234);

SoHAnimJoint218->addChildren(*SoHAnimJoint232);

SoHAnimJoint* SoHAnimJoint242 = new SoHAnimJoint();
SoHAnimJoint242->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint242->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint242->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment243 = new SoHAnimSegment();
SoHAnimSegment243->setDEF(QString("hanim_l_metacarpal_3"));
SoHAnimSegment243->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimJoint242->addChildren(*SoHAnimSegment243);

SoHAnimJoint* SoHAnimJoint244 = new SoHAnimJoint();
SoHAnimJoint244->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint244->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint244->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment245 = new SoHAnimSegment();
SoHAnimSegment245->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimSegment245->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimJoint244->addChildren(*SoHAnimSegment245);

SoHAnimJoint* SoHAnimJoint246 = new SoHAnimJoint();
SoHAnimJoint246->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint246->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint246->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment247 = new SoHAnimSegment();
SoHAnimSegment247->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimSegment247->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimJoint246->addChildren(*SoHAnimSegment247);

SoHAnimJoint* SoHAnimJoint248 = new SoHAnimJoint();
SoHAnimJoint248->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint248->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint248->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment249 = new SoHAnimSegment();
SoHAnimSegment249->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimSegment249->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSite* SoHAnimSite250 = new SoHAnimSite();
SoHAnimSite250->setDEF(QString("hanim_l_carpal_distal_phalanx_3_tip"));
SoHAnimSite250->X3DNode::setName(QString("l_carpal_distal_phalanx_3_tip"));
SoHAnimSite250->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoHAnimSegment249->addChild(*SoHAnimSite250);

SoHAnimJoint248->addChildren(*SoHAnimSegment249);

SoHAnimJoint246->addChildren(*SoHAnimJoint248);

SoHAnimJoint244->addChildren(*SoHAnimJoint246);

SoHAnimJoint242->addChildren(*SoHAnimJoint244);

SoHAnimJoint218->addChildren(*SoHAnimJoint242);

SoHAnimJoint* SoHAnimJoint251 = new SoHAnimJoint();
SoHAnimJoint251->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint251->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint251->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment252 = new SoHAnimSegment();
SoHAnimSegment252->setDEF(QString("hanim_l_metacarpal_4"));
SoHAnimSegment252->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimJoint251->addChildren(*SoHAnimSegment252);

SoHAnimJoint* SoHAnimJoint253 = new SoHAnimJoint();
SoHAnimJoint253->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint253->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint253->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment254 = new SoHAnimSegment();
SoHAnimSegment254->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimSegment254->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimJoint253->addChildren(*SoHAnimSegment254);

SoHAnimJoint* SoHAnimJoint255 = new SoHAnimJoint();
SoHAnimJoint255->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint255->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint255->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment256 = new SoHAnimSegment();
SoHAnimSegment256->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimSegment256->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimJoint255->addChildren(*SoHAnimSegment256);

SoHAnimJoint* SoHAnimJoint257 = new SoHAnimJoint();
SoHAnimJoint257->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint257->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint257->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment258 = new SoHAnimSegment();
SoHAnimSegment258->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimSegment258->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSite* SoHAnimSite259 = new SoHAnimSite();
SoHAnimSite259->setDEF(QString("hanim_l_carpal_distal_phalanx_4_tip"));
SoHAnimSite259->X3DNode::setName(QString("l_carpal_distal_phalanx_4_tip"));
SoHAnimSite259->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoHAnimSegment258->addChild(*SoHAnimSite259);

SoHAnimJoint257->addChildren(*SoHAnimSegment258);

SoHAnimJoint255->addChildren(*SoHAnimJoint257);

SoHAnimJoint253->addChildren(*SoHAnimJoint255);

SoHAnimJoint251->addChildren(*SoHAnimJoint253);

SoHAnimJoint218->addChildren(*SoHAnimJoint251);

SoHAnimJoint* SoHAnimJoint260 = new SoHAnimJoint();
SoHAnimJoint260->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint260->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint260->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment261 = new SoHAnimSegment();
SoHAnimSegment261->setDEF(QString("hanim_l_metacarpal_5"));
SoHAnimSegment261->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimJoint260->addChildren(*SoHAnimSegment261);

SoHAnimJoint* SoHAnimJoint262 = new SoHAnimJoint();
SoHAnimJoint262->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint262->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint262->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment263 = new SoHAnimSegment();
SoHAnimSegment263->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimSegment263->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimJoint262->addChildren(*SoHAnimSegment263);

SoHAnimJoint* SoHAnimJoint264 = new SoHAnimJoint();
SoHAnimJoint264->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint264->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint264->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment265 = new SoHAnimSegment();
SoHAnimSegment265->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimSegment265->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimJoint264->addChildren(*SoHAnimSegment265);

SoHAnimJoint* SoHAnimJoint266 = new SoHAnimJoint();
SoHAnimJoint266->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint266->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint266->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment267 = new SoHAnimSegment();
SoHAnimSegment267->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimSegment267->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSite* SoHAnimSite268 = new SoHAnimSite();
SoHAnimSite268->setDEF(QString("hanim_l_carpal_distal_phalanx_5_tip"));
SoHAnimSite268->X3DNode::setName(QString("l_carpal_distal_phalanx_5_tip"));
SoHAnimSite268->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoHAnimSegment267->addChild(*SoHAnimSite268);

SoHAnimJoint266->addChildren(*SoHAnimSegment267);

SoHAnimJoint264->addChildren(*SoHAnimJoint266);

SoHAnimJoint262->addChildren(*SoHAnimJoint264);

SoHAnimJoint260->addChildren(*SoHAnimJoint262);

SoHAnimJoint218->addChildren(*SoHAnimJoint260);

SoHAnimJoint212->addChildren(*SoHAnimJoint218);

SoHAnimJoint209->addChildren(*SoHAnimJoint212);

SoHAnimJoint207->addChildren(*SoHAnimJoint209);

SoHAnimJoint201->addChildren(*SoHAnimJoint207);

SoHAnimJoint149->addChildren(*SoHAnimJoint201);

SoHAnimJoint* SoHAnimJoint269 = new SoHAnimJoint();
SoHAnimJoint269->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint269->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint269->setCenter(new float[]{-0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment270 = new SoHAnimSegment();
SoHAnimSegment270->setDEF(QString("hanim_r_clavicle"));
SoHAnimSegment270->X3DNode::setName(QString("r_clavicle"));
SoHAnimSite* SoHAnimSite271 = new SoHAnimSite();
SoHAnimSite271->setDEF(QString("hanim_r_clavicle_pt"));
SoHAnimSite271->X3DNode::setName(QString("r_clavicle_pt"));
SoHAnimSite271->setTranslation(new float[]{-0.0115,1.4943,0.04});
SoHAnimSegment270->addChild(*SoHAnimSite271);

SoHAnimSite* SoHAnimSite272 = new SoHAnimSite();
SoHAnimSite272->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite272->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite272->setTranslation(new float[]{-0.1905,1.4791,-0.0431});
SoHAnimSegment270->addChild(*SoHAnimSite272);

SoHAnimSite* SoHAnimSite273 = new SoHAnimSite();
SoHAnimSite273->setDEF(QString("hanim_r_axilla_proximal_pt"));
SoHAnimSite273->X3DNode::setName(QString("r_axilla_proximal_pt"));
SoHAnimSite273->setTranslation(new float[]{-0.1626,1.4072,-0.0031});
SoHAnimSegment270->addChild(*SoHAnimSite273);

SoHAnimSite* SoHAnimSite274 = new SoHAnimSite();
SoHAnimSite274->setDEF(QString("hanim_r_axilla_distal_pt"));
SoHAnimSite274->X3DNode::setName(QString("r_axilla_distal_pt"));
SoHAnimSite274->setTranslation(new float[]{-0.1603,1.4098,-0.0826});
SoHAnimSegment270->addChild(*SoHAnimSite274);

SoHAnimJoint269->addChildren(*SoHAnimSegment270);

SoHAnimJoint* SoHAnimJoint275 = new SoHAnimJoint();
SoHAnimJoint275->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint275->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint275->setCenter(new float[]{-0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment276 = new SoHAnimSegment();
SoHAnimSegment276->setDEF(QString("hanim_r_scapula"));
SoHAnimSegment276->X3DNode::setName(QString("r_scapula"));
SoHAnimJoint275->addChildren(*SoHAnimSegment276);

SoHAnimJoint* SoHAnimJoint277 = new SoHAnimJoint();
SoHAnimJoint277->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint277->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint277->setCenter(new float[]{-0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment278 = new SoHAnimSegment();
SoHAnimSegment278->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment278->X3DNode::setName(QString("r_upperarm"));
SoHAnimSite* SoHAnimSite279 = new SoHAnimSite();
SoHAnimSite279->setDEF(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite279->X3DNode::setName(QString("r_humeral_lateral_epicondyle_pt"));
SoHAnimSite279->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoHAnimSegment278->addChild(*SoHAnimSite279);

SoHAnimJoint277->addChildren(*SoHAnimSegment278);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint280->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint280->setCenter(new float[]{-0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment281 = new SoHAnimSegment();
SoHAnimSegment281->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment281->X3DNode::setName(QString("r_forearm"));
SoHAnimSite* SoHAnimSite282 = new SoHAnimSite();
SoHAnimSite282->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite282->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite282->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoHAnimSegment281->addChild(*SoHAnimSite282);

SoHAnimSite* SoHAnimSite283 = new SoHAnimSite();
SoHAnimSite283->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite283->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite283->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoHAnimSegment281->addChild(*SoHAnimSite283);

SoHAnimSite* SoHAnimSite284 = new SoHAnimSite();
SoHAnimSite284->setDEF(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimSite284->X3DNode::setName(QString("r_humeral_medial_epicondyle_pt"));
SoHAnimSite284->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoHAnimSegment281->addChild(*SoHAnimSite284);

SoHAnimSite* SoHAnimSite285 = new SoHAnimSite();
SoHAnimSite285->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite285->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite285->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoHAnimSegment281->addChild(*SoHAnimSite285);

SoHAnimJoint280->addChildren(*SoHAnimSegment281);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint286->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint286->setCenter(new float[]{-0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment287 = new SoHAnimSegment();
SoHAnimSegment287->setDEF(QString("hanim_r_carpal"));
SoHAnimSegment287->X3DNode::setName(QString("r_carpal"));
SoHAnimSite* SoHAnimSite288 = new SoHAnimSite();
SoHAnimSite288->setDEF(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite288->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite288->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoHAnimSegment287->addChild(*SoHAnimSite288);

SoHAnimSite* SoHAnimSite289 = new SoHAnimSite();
SoHAnimSite289->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite289->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite289->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoHAnimSegment287->addChild(*SoHAnimSite289);

SoHAnimSite* SoHAnimSite290 = new SoHAnimSite();
SoHAnimSite290->setDEF(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite290->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite290->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoHAnimSegment287->addChild(*SoHAnimSite290);

SoHAnimSite* SoHAnimSite291 = new SoHAnimSite();
SoHAnimSite291->setDEF(QString("hanim_r_hand_front_view"));
SoHAnimSite291->X3DNode::setName(QString("r_hand_front_view"));
SoHAnimSite291->setTranslation(new float[]{-0.3,0.75,0.45});
SoViewpoint* SoViewpoint292 = new SoViewpoint();
SoViewpoint292->setDEF(QString("hanim_r_hand_front_viewpoint"));
SoViewpoint292->setDescription(QString("right hand front"));
SoViewpoint292->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint292->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite291->addChild(*SoViewpoint292);

SoHAnimSegment287->addChild(*SoHAnimSite291);

SoHAnimJoint286->addChildren(*SoHAnimSegment287);

SoHAnimJoint* SoHAnimJoint293 = new SoHAnimJoint();
SoHAnimJoint293->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint293->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint293->setCenter(new float[]{-0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment294 = new SoHAnimSegment();
SoHAnimSegment294->setDEF(QString("hanim_r_metacarpal_1"));
SoHAnimSegment294->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimJoint293->addChildren(*SoHAnimSegment294);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint295->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint295->setCenter(new float[]{-0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment296 = new SoHAnimSegment();
SoHAnimSegment296->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimSegment296->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimJoint295->addChildren(*SoHAnimSegment296);

SoHAnimJoint* SoHAnimJoint297 = new SoHAnimJoint();
SoHAnimJoint297->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint297->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint297->setCenter(new float[]{-0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment298 = new SoHAnimSegment();
SoHAnimSegment298->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimSegment298->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSite* SoHAnimSite299 = new SoHAnimSite();
SoHAnimSite299->setDEF(QString("hanim_r_carpal_distal_phalanx_1_tip"));
SoHAnimSite299->X3DNode::setName(QString("r_carpal_distal_phalanx_1_tip"));
SoHAnimSite299->setTranslation(new float[]{-0.1869,0.809,0.082});
SoHAnimSegment298->addChild(*SoHAnimSite299);

SoHAnimJoint297->addChildren(*SoHAnimSegment298);

SoHAnimJoint295->addChildren(*SoHAnimJoint297);

SoHAnimJoint293->addChildren(*SoHAnimJoint295);

SoHAnimJoint286->addChildren(*SoHAnimJoint293);

SoHAnimJoint* SoHAnimJoint300 = new SoHAnimJoint();
SoHAnimJoint300->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint300->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint300->setCenter(new float[]{-0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment301 = new SoHAnimSegment();
SoHAnimSegment301->setDEF(QString("hanim_r_metacarpal_2"));
SoHAnimSegment301->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimJoint300->addChildren(*SoHAnimSegment301);

SoHAnimJoint* SoHAnimJoint302 = new SoHAnimJoint();
SoHAnimJoint302->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint302->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint302->setCenter(new float[]{-0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment303 = new SoHAnimSegment();
SoHAnimSegment303->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimSegment303->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimJoint302->addChildren(*SoHAnimSegment303);

SoHAnimJoint* SoHAnimJoint304 = new SoHAnimJoint();
SoHAnimJoint304->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint304->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint304->setCenter(new float[]{-0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment305 = new SoHAnimSegment();
SoHAnimSegment305->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimSegment305->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimJoint304->addChildren(*SoHAnimSegment305);

SoHAnimJoint* SoHAnimJoint306 = new SoHAnimJoint();
SoHAnimJoint306->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint306->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint306->setCenter(new float[]{-0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment307 = new SoHAnimSegment();
SoHAnimSegment307->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimSegment307->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSite* SoHAnimSite308 = new SoHAnimSite();
SoHAnimSite308->setDEF(QString("hanim_r_carpal_distal_phalanx_2_tip"));
SoHAnimSite308->X3DNode::setName(QString("r_carpal_distal_phalanx_2_tip"));
SoHAnimSite308->setTranslation(new float[]{-0.198,0.6883,-0.018});
SoHAnimSegment307->addChild(*SoHAnimSite308);

SoHAnimSite* SoHAnimSite309 = new SoHAnimSite();
SoHAnimSite309->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite309->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite309->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoHAnimSegment307->addChild(*SoHAnimSite309);

SoHAnimJoint306->addChildren(*SoHAnimSegment307);

SoHAnimJoint304->addChildren(*SoHAnimJoint306);

SoHAnimJoint302->addChildren(*SoHAnimJoint304);

SoHAnimJoint300->addChildren(*SoHAnimJoint302);

SoHAnimJoint286->addChildren(*SoHAnimJoint300);

SoHAnimJoint* SoHAnimJoint310 = new SoHAnimJoint();
SoHAnimJoint310->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint310->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint310->setCenter(new float[]{-0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment311 = new SoHAnimSegment();
SoHAnimSegment311->setDEF(QString("hanim_r_metacarpal_3"));
SoHAnimSegment311->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimJoint310->addChildren(*SoHAnimSegment311);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint312->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint312->setCenter(new float[]{-0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimSegment313->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimJoint312->addChildren(*SoHAnimSegment313);

SoHAnimJoint* SoHAnimJoint314 = new SoHAnimJoint();
SoHAnimJoint314->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint314->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint314->setCenter(new float[]{-0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment315 = new SoHAnimSegment();
SoHAnimSegment315->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimSegment315->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimJoint314->addChildren(*SoHAnimSegment315);

SoHAnimJoint* SoHAnimJoint316 = new SoHAnimJoint();
SoHAnimJoint316->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint316->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint316->setCenter(new float[]{-0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment317 = new SoHAnimSegment();
SoHAnimSegment317->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimSegment317->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSite* SoHAnimSite318 = new SoHAnimSite();
SoHAnimSite318->setDEF(QString("hanim_r_carpal_distal_phalanx_3_tip"));
SoHAnimSite318->X3DNode::setName(QString("r_carpal_distal_phalanx_3_tip"));
SoHAnimSite318->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoHAnimSegment317->addChild(*SoHAnimSite318);

SoHAnimJoint316->addChildren(*SoHAnimSegment317);

SoHAnimJoint314->addChildren(*SoHAnimJoint316);

SoHAnimJoint312->addChildren(*SoHAnimJoint314);

SoHAnimJoint310->addChildren(*SoHAnimJoint312);

SoHAnimJoint286->addChildren(*SoHAnimJoint310);

SoHAnimJoint* SoHAnimJoint319 = new SoHAnimJoint();
SoHAnimJoint319->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint319->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint319->setCenter(new float[]{-0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment320 = new SoHAnimSegment();
SoHAnimSegment320->setDEF(QString("hanim_r_metacarpal_4"));
SoHAnimSegment320->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimJoint319->addChildren(*SoHAnimSegment320);

SoHAnimJoint* SoHAnimJoint321 = new SoHAnimJoint();
SoHAnimJoint321->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint321->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint321->setCenter(new float[]{-0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment322 = new SoHAnimSegment();
SoHAnimSegment322->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimSegment322->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimJoint321->addChildren(*SoHAnimSegment322);

SoHAnimJoint* SoHAnimJoint323 = new SoHAnimJoint();
SoHAnimJoint323->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint323->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint323->setCenter(new float[]{-0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment324 = new SoHAnimSegment();
SoHAnimSegment324->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimSegment324->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimJoint323->addChildren(*SoHAnimSegment324);

SoHAnimJoint* SoHAnimJoint325 = new SoHAnimJoint();
SoHAnimJoint325->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint325->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint325->setCenter(new float[]{-0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment326 = new SoHAnimSegment();
SoHAnimSegment326->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimSegment326->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSite* SoHAnimSite327 = new SoHAnimSite();
SoHAnimSite327->setDEF(QString("hanim_r_carpal_distal_phalanx_4_tip"));
SoHAnimSite327->X3DNode::setName(QString("r_carpal_distal_phalanx_4_tip"));
SoHAnimSite327->setTranslation(new float[]{-0.1934,0.6778,-0.0693});
SoHAnimSegment326->addChild(*SoHAnimSite327);

SoHAnimJoint325->addChildren(*SoHAnimSegment326);

SoHAnimJoint323->addChildren(*SoHAnimJoint325);

SoHAnimJoint321->addChildren(*SoHAnimJoint323);

SoHAnimJoint319->addChildren(*SoHAnimJoint321);

SoHAnimJoint286->addChildren(*SoHAnimJoint319);

SoHAnimJoint* SoHAnimJoint328 = new SoHAnimJoint();
SoHAnimJoint328->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint328->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint328->setCenter(new float[]{-0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment329 = new SoHAnimSegment();
SoHAnimSegment329->setDEF(QString("hanim_r_metacarpal_5"));
SoHAnimSegment329->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimJoint328->addChildren(*SoHAnimSegment329);

SoHAnimJoint* SoHAnimJoint330 = new SoHAnimJoint();
SoHAnimJoint330->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint330->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint330->setCenter(new float[]{-0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment331 = new SoHAnimSegment();
SoHAnimSegment331->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimSegment331->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimJoint330->addChildren(*SoHAnimSegment331);

SoHAnimJoint* SoHAnimJoint332 = new SoHAnimJoint();
SoHAnimJoint332->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint332->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint332->setCenter(new float[]{-0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment333 = new SoHAnimSegment();
SoHAnimSegment333->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimSegment333->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimJoint332->addChildren(*SoHAnimSegment333);

SoHAnimJoint* SoHAnimJoint334 = new SoHAnimJoint();
SoHAnimJoint334->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint334->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint334->setCenter(new float[]{-0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment335 = new SoHAnimSegment();
SoHAnimSegment335->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimSegment335->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSite* SoHAnimSite336 = new SoHAnimSite();
SoHAnimSite336->setDEF(QString("hanim_r_carpal_distal_phalanx_5_tip"));
SoHAnimSite336->X3DNode::setName(QString("r_carpal_distal_phalanx_5_tip"));
SoHAnimSite336->setTranslation(new float[]{-0.1938,0.7035,-0.0949});
SoHAnimSegment335->addChild(*SoHAnimSite336);

SoHAnimJoint334->addChildren(*SoHAnimSegment335);

SoHAnimJoint332->addChildren(*SoHAnimJoint334);

SoHAnimJoint330->addChildren(*SoHAnimJoint332);

SoHAnimJoint328->addChildren(*SoHAnimJoint330);

SoHAnimJoint286->addChildren(*SoHAnimJoint328);

SoHAnimJoint280->addChildren(*SoHAnimJoint286);

SoHAnimJoint277->addChildren(*SoHAnimJoint280);

SoHAnimJoint275->addChildren(*SoHAnimJoint277);

SoHAnimJoint269->addChildren(*SoHAnimJoint275);

SoHAnimJoint149->addChildren(*SoHAnimJoint269);

SoHAnimJoint147->addChildren(*SoHAnimJoint149);

SoHAnimJoint145->addChildren(*SoHAnimJoint147);

SoHAnimJoint143->addChildren(*SoHAnimJoint145);

SoHAnimJoint141->addChildren(*SoHAnimJoint143);

SoHAnimJoint139->addChildren(*SoHAnimJoint141);

SoHAnimJoint137->addChildren(*SoHAnimJoint139);

SoHAnimJoint135->addChildren(*SoHAnimJoint137);

SoHAnimJoint131->addChildren(*SoHAnimJoint135);

SoHAnimJoint128->addChildren(*SoHAnimJoint131);

SoHAnimJoint126->addChildren(*SoHAnimJoint128);

SoHAnimJoint124->addChildren(*SoHAnimJoint126);

SoHAnimJoint122->addChildren(*SoHAnimJoint124);

SoHAnimJoint117->addChildren(*SoHAnimJoint122);

SoHAnimJoint115->addChildren(*SoHAnimJoint117);

SoHAnimJoint113->addChildren(*SoHAnimJoint115);

SoHAnimJoint109->addChildren(*SoHAnimJoint113);

SoHAnimJoint50->addChildren(*SoHAnimJoint109);

SoHAnimHumanoid41->setSkeleton(*SoHAnimJoint50);

SoHAnimJoint* SoHAnimJoint337 = new SoHAnimJoint();
SoHAnimJoint337->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint337);

SoHAnimJoint* SoHAnimJoint338 = new SoHAnimJoint();
SoHAnimJoint338->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint338);

SoHAnimJoint* SoHAnimJoint339 = new SoHAnimJoint();
SoHAnimJoint339->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint339);

SoHAnimJoint* SoHAnimJoint340 = new SoHAnimJoint();
SoHAnimJoint340->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint340);

SoHAnimJoint* SoHAnimJoint341 = new SoHAnimJoint();
SoHAnimJoint341->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint341);

SoHAnimJoint* SoHAnimJoint342 = new SoHAnimJoint();
SoHAnimJoint342->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint342);

SoHAnimJoint* SoHAnimJoint343 = new SoHAnimJoint();
SoHAnimJoint343->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint343);

SoHAnimJoint* SoHAnimJoint344 = new SoHAnimJoint();
SoHAnimJoint344->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint344);

SoHAnimJoint* SoHAnimJoint345 = new SoHAnimJoint();
SoHAnimJoint345->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint345);

SoHAnimJoint* SoHAnimJoint346 = new SoHAnimJoint();
SoHAnimJoint346->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint346);

SoHAnimJoint* SoHAnimJoint347 = new SoHAnimJoint();
SoHAnimJoint347->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint347);

SoHAnimJoint* SoHAnimJoint348 = new SoHAnimJoint();
SoHAnimJoint348->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint348);

SoHAnimJoint* SoHAnimJoint349 = new SoHAnimJoint();
SoHAnimJoint349->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint349);

SoHAnimJoint* SoHAnimJoint350 = new SoHAnimJoint();
SoHAnimJoint350->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint350);

SoHAnimJoint* SoHAnimJoint351 = new SoHAnimJoint();
SoHAnimJoint351->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint351);

SoHAnimJoint* SoHAnimJoint352 = new SoHAnimJoint();
SoHAnimJoint352->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint352);

SoHAnimJoint* SoHAnimJoint353 = new SoHAnimJoint();
SoHAnimJoint353->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint353);

SoHAnimJoint* SoHAnimJoint354 = new SoHAnimJoint();
SoHAnimJoint354->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint354);

SoHAnimJoint* SoHAnimJoint355 = new SoHAnimJoint();
SoHAnimJoint355->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint355);

SoHAnimJoint* SoHAnimJoint356 = new SoHAnimJoint();
SoHAnimJoint356->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint356);

SoHAnimJoint* SoHAnimJoint357 = new SoHAnimJoint();
SoHAnimJoint357->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint357);

SoHAnimJoint* SoHAnimJoint358 = new SoHAnimJoint();
SoHAnimJoint358->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint358);

SoHAnimJoint* SoHAnimJoint359 = new SoHAnimJoint();
SoHAnimJoint359->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint359);

SoHAnimJoint* SoHAnimJoint360 = new SoHAnimJoint();
SoHAnimJoint360->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint360);

SoHAnimJoint* SoHAnimJoint361 = new SoHAnimJoint();
SoHAnimJoint361->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint361);

SoHAnimJoint* SoHAnimJoint362 = new SoHAnimJoint();
SoHAnimJoint362->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint362);

SoHAnimJoint* SoHAnimJoint363 = new SoHAnimJoint();
SoHAnimJoint363->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint363);

SoHAnimJoint* SoHAnimJoint364 = new SoHAnimJoint();
SoHAnimJoint364->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint364);

SoHAnimJoint* SoHAnimJoint365 = new SoHAnimJoint();
SoHAnimJoint365->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint365);

SoHAnimJoint* SoHAnimJoint366 = new SoHAnimJoint();
SoHAnimJoint366->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint366);

SoHAnimJoint* SoHAnimJoint367 = new SoHAnimJoint();
SoHAnimJoint367->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint367);

SoHAnimJoint* SoHAnimJoint368 = new SoHAnimJoint();
SoHAnimJoint368->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint368);

SoHAnimJoint* SoHAnimJoint369 = new SoHAnimJoint();
SoHAnimJoint369->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint369);

SoHAnimJoint* SoHAnimJoint370 = new SoHAnimJoint();
SoHAnimJoint370->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint370);

SoHAnimJoint* SoHAnimJoint371 = new SoHAnimJoint();
SoHAnimJoint371->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint371);

SoHAnimJoint* SoHAnimJoint372 = new SoHAnimJoint();
SoHAnimJoint372->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint372);

SoHAnimJoint* SoHAnimJoint373 = new SoHAnimJoint();
SoHAnimJoint373->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint373);

SoHAnimJoint* SoHAnimJoint374 = new SoHAnimJoint();
SoHAnimJoint374->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint374);

SoHAnimJoint* SoHAnimJoint375 = new SoHAnimJoint();
SoHAnimJoint375->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint375);

SoHAnimJoint* SoHAnimJoint376 = new SoHAnimJoint();
SoHAnimJoint376->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint376);

SoHAnimJoint* SoHAnimJoint377 = new SoHAnimJoint();
SoHAnimJoint377->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint377);

SoHAnimJoint* SoHAnimJoint378 = new SoHAnimJoint();
SoHAnimJoint378->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint378);

SoHAnimJoint* SoHAnimJoint379 = new SoHAnimJoint();
SoHAnimJoint379->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint379);

SoHAnimJoint* SoHAnimJoint380 = new SoHAnimJoint();
SoHAnimJoint380->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint380);

SoHAnimJoint* SoHAnimJoint381 = new SoHAnimJoint();
SoHAnimJoint381->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint381);

SoHAnimJoint* SoHAnimJoint382 = new SoHAnimJoint();
SoHAnimJoint382->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint382);

SoHAnimJoint* SoHAnimJoint383 = new SoHAnimJoint();
SoHAnimJoint383->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint383);

SoHAnimJoint* SoHAnimJoint384 = new SoHAnimJoint();
SoHAnimJoint384->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint384);

SoHAnimJoint* SoHAnimJoint385 = new SoHAnimJoint();
SoHAnimJoint385->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint385);

SoHAnimJoint* SoHAnimJoint386 = new SoHAnimJoint();
SoHAnimJoint386->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint386);

SoHAnimJoint* SoHAnimJoint387 = new SoHAnimJoint();
SoHAnimJoint387->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint387);

SoHAnimJoint* SoHAnimJoint388 = new SoHAnimJoint();
SoHAnimJoint388->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint388);

SoHAnimJoint* SoHAnimJoint389 = new SoHAnimJoint();
SoHAnimJoint389->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint389);

SoHAnimJoint* SoHAnimJoint390 = new SoHAnimJoint();
SoHAnimJoint390->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint390);

SoHAnimJoint* SoHAnimJoint391 = new SoHAnimJoint();
SoHAnimJoint391->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint391);

SoHAnimJoint* SoHAnimJoint392 = new SoHAnimJoint();
SoHAnimJoint392->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint392);

SoHAnimJoint* SoHAnimJoint393 = new SoHAnimJoint();
SoHAnimJoint393->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint393);

SoHAnimJoint* SoHAnimJoint394 = new SoHAnimJoint();
SoHAnimJoint394->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint394);

SoHAnimJoint* SoHAnimJoint395 = new SoHAnimJoint();
SoHAnimJoint395->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint395);

SoHAnimJoint* SoHAnimJoint396 = new SoHAnimJoint();
SoHAnimJoint396->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint396);

SoHAnimJoint* SoHAnimJoint397 = new SoHAnimJoint();
SoHAnimJoint397->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint397);

SoHAnimJoint* SoHAnimJoint398 = new SoHAnimJoint();
SoHAnimJoint398->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint398);

SoHAnimJoint* SoHAnimJoint399 = new SoHAnimJoint();
SoHAnimJoint399->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint399);

SoHAnimJoint* SoHAnimJoint400 = new SoHAnimJoint();
SoHAnimJoint400->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint400);

SoHAnimJoint* SoHAnimJoint401 = new SoHAnimJoint();
SoHAnimJoint401->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint401);

SoHAnimJoint* SoHAnimJoint402 = new SoHAnimJoint();
SoHAnimJoint402->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint402);

SoHAnimJoint* SoHAnimJoint403 = new SoHAnimJoint();
SoHAnimJoint403->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint403);

SoHAnimJoint* SoHAnimJoint404 = new SoHAnimJoint();
SoHAnimJoint404->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint404);

SoHAnimJoint* SoHAnimJoint405 = new SoHAnimJoint();
SoHAnimJoint405->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint405);

SoHAnimJoint* SoHAnimJoint406 = new SoHAnimJoint();
SoHAnimJoint406->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint406);

SoHAnimJoint* SoHAnimJoint407 = new SoHAnimJoint();
SoHAnimJoint407->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint407);

SoHAnimJoint* SoHAnimJoint408 = new SoHAnimJoint();
SoHAnimJoint408->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint408);

SoHAnimJoint* SoHAnimJoint409 = new SoHAnimJoint();
SoHAnimJoint409->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint409);

SoHAnimJoint* SoHAnimJoint410 = new SoHAnimJoint();
SoHAnimJoint410->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint410);

SoHAnimJoint* SoHAnimJoint411 = new SoHAnimJoint();
SoHAnimJoint411->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint411);

SoHAnimJoint* SoHAnimJoint412 = new SoHAnimJoint();
SoHAnimJoint412->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint412);

SoHAnimJoint* SoHAnimJoint413 = new SoHAnimJoint();
SoHAnimJoint413->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint413);

SoHAnimJoint* SoHAnimJoint414 = new SoHAnimJoint();
SoHAnimJoint414->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint414);

SoHAnimJoint* SoHAnimJoint415 = new SoHAnimJoint();
SoHAnimJoint415->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint415);

SoHAnimJoint* SoHAnimJoint416 = new SoHAnimJoint();
SoHAnimJoint416->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint416);

SoHAnimJoint* SoHAnimJoint417 = new SoHAnimJoint();
SoHAnimJoint417->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint417);

SoHAnimJoint* SoHAnimJoint418 = new SoHAnimJoint();
SoHAnimJoint418->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint418);

SoHAnimJoint* SoHAnimJoint419 = new SoHAnimJoint();
SoHAnimJoint419->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint419);

SoHAnimJoint* SoHAnimJoint420 = new SoHAnimJoint();
SoHAnimJoint420->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint420);

SoHAnimJoint* SoHAnimJoint421 = new SoHAnimJoint();
SoHAnimJoint421->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint421);

SoHAnimJoint* SoHAnimJoint422 = new SoHAnimJoint();
SoHAnimJoint422->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint422);

SoHAnimJoint* SoHAnimJoint423 = new SoHAnimJoint();
SoHAnimJoint423->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint423);

SoHAnimJoint* SoHAnimJoint424 = new SoHAnimJoint();
SoHAnimJoint424->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint424);

SoHAnimJoint* SoHAnimJoint425 = new SoHAnimJoint();
SoHAnimJoint425->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint425);

SoHAnimJoint* SoHAnimJoint426 = new SoHAnimJoint();
SoHAnimJoint426->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint426);

SoHAnimJoint* SoHAnimJoint427 = new SoHAnimJoint();
SoHAnimJoint427->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint427);

SoHAnimJoint* SoHAnimJoint428 = new SoHAnimJoint();
SoHAnimJoint428->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint428);

SoHAnimJoint* SoHAnimJoint429 = new SoHAnimJoint();
SoHAnimJoint429->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint429);

SoHAnimJoint* SoHAnimJoint430 = new SoHAnimJoint();
SoHAnimJoint430->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint430);

SoHAnimSegment* SoHAnimSegment431 = new SoHAnimSegment();
SoHAnimSegment431->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment431);

SoHAnimSegment* SoHAnimSegment432 = new SoHAnimSegment();
SoHAnimSegment432->setUSE(QString("hanim_skull"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment432);

SoHAnimSegment* SoHAnimSegment433 = new SoHAnimSegment();
SoHAnimSegment433->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment433);

SoHAnimSegment* SoHAnimSegment434 = new SoHAnimSegment();
SoHAnimSegment434->setUSE(QString("hanim_c1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment434);

SoHAnimSegment* SoHAnimSegment435 = new SoHAnimSegment();
SoHAnimSegment435->setUSE(QString("hanim_c2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment435);

SoHAnimSegment* SoHAnimSegment436 = new SoHAnimSegment();
SoHAnimSegment436->setUSE(QString("hanim_c3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment436);

SoHAnimSegment* SoHAnimSegment437 = new SoHAnimSegment();
SoHAnimSegment437->setUSE(QString("hanim_c4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment437);

SoHAnimSegment* SoHAnimSegment438 = new SoHAnimSegment();
SoHAnimSegment438->setUSE(QString("hanim_c5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment438);

SoHAnimSegment* SoHAnimSegment439 = new SoHAnimSegment();
SoHAnimSegment439->setUSE(QString("hanim_c6"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment439);

SoHAnimSegment* SoHAnimSegment440 = new SoHAnimSegment();
SoHAnimSegment440->setUSE(QString("hanim_c7"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment440);

SoHAnimSegment* SoHAnimSegment441 = new SoHAnimSegment();
SoHAnimSegment441->setUSE(QString("hanim_t1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment441);

SoHAnimSegment* SoHAnimSegment442 = new SoHAnimSegment();
SoHAnimSegment442->setUSE(QString("hanim_t2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment442);

SoHAnimSegment* SoHAnimSegment443 = new SoHAnimSegment();
SoHAnimSegment443->setUSE(QString("hanim_t3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment443);

SoHAnimSegment* SoHAnimSegment444 = new SoHAnimSegment();
SoHAnimSegment444->setUSE(QString("hanim_t4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment444);

SoHAnimSegment* SoHAnimSegment445 = new SoHAnimSegment();
SoHAnimSegment445->setUSE(QString("hanim_t5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment445);

SoHAnimSegment* SoHAnimSegment446 = new SoHAnimSegment();
SoHAnimSegment446->setUSE(QString("hanim_t6"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment446);

SoHAnimSegment* SoHAnimSegment447 = new SoHAnimSegment();
SoHAnimSegment447->setUSE(QString("hanim_t7"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment447);

SoHAnimSegment* SoHAnimSegment448 = new SoHAnimSegment();
SoHAnimSegment448->setUSE(QString("hanim_t8"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment448);

SoHAnimSegment* SoHAnimSegment449 = new SoHAnimSegment();
SoHAnimSegment449->setUSE(QString("hanim_t9"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment449);

SoHAnimSegment* SoHAnimSegment450 = new SoHAnimSegment();
SoHAnimSegment450->setUSE(QString("hanim_t10"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment450);

SoHAnimSegment* SoHAnimSegment451 = new SoHAnimSegment();
SoHAnimSegment451->setUSE(QString("hanim_t11"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment451);

SoHAnimSegment* SoHAnimSegment452 = new SoHAnimSegment();
SoHAnimSegment452->setUSE(QString("hanim_t12"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment452);

SoHAnimSegment* SoHAnimSegment453 = new SoHAnimSegment();
SoHAnimSegment453->setUSE(QString("hanim_l1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment453);

SoHAnimSegment* SoHAnimSegment454 = new SoHAnimSegment();
SoHAnimSegment454->setUSE(QString("hanim_l2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment454);

SoHAnimSegment* SoHAnimSegment455 = new SoHAnimSegment();
SoHAnimSegment455->setUSE(QString("hanim_l3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment455);

SoHAnimSegment* SoHAnimSegment456 = new SoHAnimSegment();
SoHAnimSegment456->setUSE(QString("hanim_l4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment456);

SoHAnimSegment* SoHAnimSegment457 = new SoHAnimSegment();
SoHAnimSegment457->setUSE(QString("hanim_l5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment457);

SoHAnimSegment* SoHAnimSegment458 = new SoHAnimSegment();
SoHAnimSegment458->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment458);

SoHAnimSegment* SoHAnimSegment459 = new SoHAnimSegment();
SoHAnimSegment459->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment459);

SoHAnimSegment* SoHAnimSegment460 = new SoHAnimSegment();
SoHAnimSegment460->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment460);

SoHAnimSegment* SoHAnimSegment461 = new SoHAnimSegment();
SoHAnimSegment461->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment461);

SoHAnimSegment* SoHAnimSegment462 = new SoHAnimSegment();
SoHAnimSegment462->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment462);

SoHAnimSegment* SoHAnimSegment463 = new SoHAnimSegment();
SoHAnimSegment463->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment463);

SoHAnimSegment* SoHAnimSegment464 = new SoHAnimSegment();
SoHAnimSegment464->setUSE(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment464);

SoHAnimSegment* SoHAnimSegment465 = new SoHAnimSegment();
SoHAnimSegment465->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment465);

SoHAnimSegment* SoHAnimSegment466 = new SoHAnimSegment();
SoHAnimSegment466->setUSE(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment466);

SoHAnimSegment* SoHAnimSegment467 = new SoHAnimSegment();
SoHAnimSegment467->setUSE(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment467);

SoHAnimSegment* SoHAnimSegment468 = new SoHAnimSegment();
SoHAnimSegment468->setUSE(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment468);

SoHAnimSegment* SoHAnimSegment469 = new SoHAnimSegment();
SoHAnimSegment469->setUSE(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment469);

SoHAnimSegment* SoHAnimSegment470 = new SoHAnimSegment();
SoHAnimSegment470->setUSE(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment470);

SoHAnimSegment* SoHAnimSegment471 = new SoHAnimSegment();
SoHAnimSegment471->setUSE(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment471);

SoHAnimSegment* SoHAnimSegment472 = new SoHAnimSegment();
SoHAnimSegment472->setUSE(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment472);

SoHAnimSegment* SoHAnimSegment473 = new SoHAnimSegment();
SoHAnimSegment473->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment473);

SoHAnimSegment* SoHAnimSegment474 = new SoHAnimSegment();
SoHAnimSegment474->setUSE(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment474);

SoHAnimSegment* SoHAnimSegment475 = new SoHAnimSegment();
SoHAnimSegment475->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment475);

SoHAnimSegment* SoHAnimSegment476 = new SoHAnimSegment();
SoHAnimSegment476->setUSE(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment476);

SoHAnimSegment* SoHAnimSegment477 = new SoHAnimSegment();
SoHAnimSegment477->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment477);

SoHAnimSegment* SoHAnimSegment478 = new SoHAnimSegment();
SoHAnimSegment478->setUSE(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment478);

SoHAnimSegment* SoHAnimSegment479 = new SoHAnimSegment();
SoHAnimSegment479->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment479);

SoHAnimSegment* SoHAnimSegment480 = new SoHAnimSegment();
SoHAnimSegment480->setUSE(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment480);

SoHAnimSegment* SoHAnimSegment481 = new SoHAnimSegment();
SoHAnimSegment481->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment481);

SoHAnimSegment* SoHAnimSegment482 = new SoHAnimSegment();
SoHAnimSegment482->setUSE(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment482);

SoHAnimSegment* SoHAnimSegment483 = new SoHAnimSegment();
SoHAnimSegment483->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment483);

SoHAnimSegment* SoHAnimSegment484 = new SoHAnimSegment();
SoHAnimSegment484->setUSE(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment484);

SoHAnimSegment* SoHAnimSegment485 = new SoHAnimSegment();
SoHAnimSegment485->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment485);

SoHAnimSegment* SoHAnimSegment486 = new SoHAnimSegment();
SoHAnimSegment486->setUSE(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment486);

SoHAnimSegment* SoHAnimSegment487 = new SoHAnimSegment();
SoHAnimSegment487->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment487);

SoHAnimSegment* SoHAnimSegment488 = new SoHAnimSegment();
SoHAnimSegment488->setUSE(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment488);

SoHAnimSegment* SoHAnimSegment489 = new SoHAnimSegment();
SoHAnimSegment489->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment489);

SoHAnimSegment* SoHAnimSegment490 = new SoHAnimSegment();
SoHAnimSegment490->setUSE(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment490);

SoHAnimSegment* SoHAnimSegment491 = new SoHAnimSegment();
SoHAnimSegment491->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment491);

SoHAnimSegment* SoHAnimSegment492 = new SoHAnimSegment();
SoHAnimSegment492->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment492);

SoHAnimSegment* SoHAnimSegment493 = new SoHAnimSegment();
SoHAnimSegment493->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment493);

SoHAnimSegment* SoHAnimSegment494 = new SoHAnimSegment();
SoHAnimSegment494->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment494);

SoHAnimSegment* SoHAnimSegment495 = new SoHAnimSegment();
SoHAnimSegment495->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment495);

SoHAnimSegment* SoHAnimSegment496 = new SoHAnimSegment();
SoHAnimSegment496->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment496);

SoHAnimSegment* SoHAnimSegment497 = new SoHAnimSegment();
SoHAnimSegment497->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment497);

SoHAnimSegment* SoHAnimSegment498 = new SoHAnimSegment();
SoHAnimSegment498->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment498);

SoHAnimSegment* SoHAnimSegment499 = new SoHAnimSegment();
SoHAnimSegment499->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment499);

SoHAnimSegment* SoHAnimSegment500 = new SoHAnimSegment();
SoHAnimSegment500->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment500);

SoHAnimSegment* SoHAnimSegment501 = new SoHAnimSegment();
SoHAnimSegment501->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment501);

SoHAnimSegment* SoHAnimSegment502 = new SoHAnimSegment();
SoHAnimSegment502->setUSE(QString("hanim_r_metacarpal_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment502);

SoHAnimSegment* SoHAnimSegment503 = new SoHAnimSegment();
SoHAnimSegment503->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment503);

SoHAnimSegment* SoHAnimSegment504 = new SoHAnimSegment();
SoHAnimSegment504->setUSE(QString("hanim_r_metacarpal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment504);

SoHAnimSegment* SoHAnimSegment505 = new SoHAnimSegment();
SoHAnimSegment505->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment505);

SoHAnimSegment* SoHAnimSegment506 = new SoHAnimSegment();
SoHAnimSegment506->setUSE(QString("hanim_r_metacarpal_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment506);

SoHAnimSegment* SoHAnimSegment507 = new SoHAnimSegment();
SoHAnimSegment507->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment507);

SoHAnimSegment* SoHAnimSegment508 = new SoHAnimSegment();
SoHAnimSegment508->setUSE(QString("hanim_r_metacarpal_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment508);

SoHAnimSegment* SoHAnimSegment509 = new SoHAnimSegment();
SoHAnimSegment509->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment509);

SoHAnimSegment* SoHAnimSegment510 = new SoHAnimSegment();
SoHAnimSegment510->setUSE(QString("hanim_r_metacarpal_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment510);

SoHAnimSegment* SoHAnimSegment511 = new SoHAnimSegment();
SoHAnimSegment511->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment511);

SoHAnimSegment* SoHAnimSegment512 = new SoHAnimSegment();
SoHAnimSegment512->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment512);

SoHAnimSegment* SoHAnimSegment513 = new SoHAnimSegment();
SoHAnimSegment513->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment513);

SoHAnimSegment* SoHAnimSegment514 = new SoHAnimSegment();
SoHAnimSegment514->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment514);

SoHAnimSegment* SoHAnimSegment515 = new SoHAnimSegment();
SoHAnimSegment515->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment515);

SoHAnimSegment* SoHAnimSegment516 = new SoHAnimSegment();
SoHAnimSegment516->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment516);

SoHAnimSegment* SoHAnimSegment517 = new SoHAnimSegment();
SoHAnimSegment517->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment517);

SoHAnimSegment* SoHAnimSegment518 = new SoHAnimSegment();
SoHAnimSegment518->setUSE(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment518);

SoHAnimSegment* SoHAnimSegment519 = new SoHAnimSegment();
SoHAnimSegment519->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment519);

SoHAnimSegment* SoHAnimSegment520 = new SoHAnimSegment();
SoHAnimSegment520->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment520);

SoHAnimSegment* SoHAnimSegment521 = new SoHAnimSegment();
SoHAnimSegment521->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment521);

SoHAnimSegment* SoHAnimSegment522 = new SoHAnimSegment();
SoHAnimSegment522->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment522);

SoHAnimSegment* SoHAnimSegment523 = new SoHAnimSegment();
SoHAnimSegment523->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment523);

SoHAnimSegment* SoHAnimSegment524 = new SoHAnimSegment();
SoHAnimSegment524->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment524);

SoHAnimSite* SoHAnimSite525 = new SoHAnimSite();
SoHAnimSite525->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite525);

SoHAnimSite* SoHAnimSite526 = new SoHAnimSite();
SoHAnimSite526->setUSE(QString("hanim_skull_vertex_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite526);

SoHAnimSite* SoHAnimSite527 = new SoHAnimSite();
SoHAnimSite527->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite527);

SoHAnimSite* SoHAnimSite528 = new SoHAnimSite();
SoHAnimSite528->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite528);

SoHAnimSite* SoHAnimSite529 = new SoHAnimSite();
SoHAnimSite529->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite529);

SoHAnimSite* SoHAnimSite530 = new SoHAnimSite();
SoHAnimSite530->setUSE(QString("hanim_suprasternale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite530);

SoHAnimSite* SoHAnimSite531 = new SoHAnimSite();
SoHAnimSite531->setUSE(QString("hanim_cervicale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite531);

SoHAnimSite* SoHAnimSite532 = new SoHAnimSite();
SoHAnimSite532->setUSE(QString("hanim_substernale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite532);

SoHAnimSite* SoHAnimSite533 = new SoHAnimSite();
SoHAnimSite533->setUSE(QString("hanim_rib10_midspine_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite533);

SoHAnimSite* SoHAnimSite534 = new SoHAnimSite();
SoHAnimSite534->setUSE(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite534);

SoHAnimSite* SoHAnimSite535 = new SoHAnimSite();
SoHAnimSite535->setUSE(QString("hanim_navel_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite535);

SoHAnimSite* SoHAnimSite536 = new SoHAnimSite();
SoHAnimSite536->setUSE(QString("hanim_l_acromion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite536);

SoHAnimSite* SoHAnimSite537 = new SoHAnimSite();
SoHAnimSite537->setUSE(QString("hanim_r_acromion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite537);

SoHAnimSite* SoHAnimSite538 = new SoHAnimSite();
SoHAnimSite538->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite538);

SoHAnimSite* SoHAnimSite539 = new SoHAnimSite();
SoHAnimSite539->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite539);

SoHAnimSite* SoHAnimSite540 = new SoHAnimSite();
SoHAnimSite540->setUSE(QString("hanim_l_axilla_distal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite540);

SoHAnimSite* SoHAnimSite541 = new SoHAnimSite();
SoHAnimSite541->setUSE(QString("hanim_r_axilla_distal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite541);

SoHAnimSite* SoHAnimSite542 = new SoHAnimSite();
SoHAnimSite542->setUSE(QString("hanim_l_axilla_proximal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite542);

SoHAnimSite* SoHAnimSite543 = new SoHAnimSite();
SoHAnimSite543->setUSE(QString("hanim_r_axilla_proximal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite543);

SoHAnimSite* SoHAnimSite544 = new SoHAnimSite();
SoHAnimSite544->setUSE(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite544);

SoHAnimSite* SoHAnimSite545 = new SoHAnimSite();
SoHAnimSite545->setUSE(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite545);

SoHAnimSite* SoHAnimSite546 = new SoHAnimSite();
SoHAnimSite546->setUSE(QString("hanim_l_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite546);

SoHAnimSite* SoHAnimSite547 = new SoHAnimSite();
SoHAnimSite547->setUSE(QString("hanim_r_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite547);

SoHAnimSite* SoHAnimSite548 = new SoHAnimSite();
SoHAnimSite548->setUSE(QString("hanim_l_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite548);

SoHAnimSite* SoHAnimSite549 = new SoHAnimSite();
SoHAnimSite549->setUSE(QString("hanim_r_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite549);

SoHAnimSite* SoHAnimSite550 = new SoHAnimSite();
SoHAnimSite550->setUSE(QString("hanim_l_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite550);

SoHAnimSite* SoHAnimSite551 = new SoHAnimSite();
SoHAnimSite551->setUSE(QString("hanim_r_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite551);

SoHAnimSite* SoHAnimSite552 = new SoHAnimSite();
SoHAnimSite552->setUSE(QString("hanim_l_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite552);

SoHAnimSite* SoHAnimSite553 = new SoHAnimSite();
SoHAnimSite553->setUSE(QString("hanim_r_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite553);

SoHAnimSite* SoHAnimSite554 = new SoHAnimSite();
SoHAnimSite554->setUSE(QString("hanim_l_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite554);

SoHAnimSite* SoHAnimSite555 = new SoHAnimSite();
SoHAnimSite555->setUSE(QString("hanim_r_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite555);

SoHAnimSite* SoHAnimSite556 = new SoHAnimSite();
SoHAnimSite556->setUSE(QString("hanim_l_clavicle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite556);

SoHAnimSite* SoHAnimSite557 = new SoHAnimSite();
SoHAnimSite557->setUSE(QString("hanim_r_clavicle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite557);

SoHAnimSite* SoHAnimSite558 = new SoHAnimSite();
SoHAnimSite558->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite558);

SoHAnimSite* SoHAnimSite559 = new SoHAnimSite();
SoHAnimSite559->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite559);

SoHAnimSite* SoHAnimSite560 = new SoHAnimSite();
SoHAnimSite560->setUSE(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite560);

SoHAnimSite* SoHAnimSite561 = new SoHAnimSite();
SoHAnimSite561->setUSE(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite561);

SoHAnimSite* SoHAnimSite562 = new SoHAnimSite();
SoHAnimSite562->setUSE(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite562);

SoHAnimSite* SoHAnimSite563 = new SoHAnimSite();
SoHAnimSite563->setUSE(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite563);

SoHAnimSite* SoHAnimSite564 = new SoHAnimSite();
SoHAnimSite564->setUSE(QString("hanim_l_forefoot_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite564);

SoHAnimSite* SoHAnimSite565 = new SoHAnimSite();
SoHAnimSite565->setUSE(QString("hanim_r_forefoot_tip"));
SoHAnimHumanoid41->setSites(*SoHAnimSite565);

SoHAnimSite* SoHAnimSite566 = new SoHAnimSite();
SoHAnimSite566->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite566);

SoHAnimSite* SoHAnimSite567 = new SoHAnimSite();
SoHAnimSite567->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite567);

SoHAnimSite* SoHAnimSite568 = new SoHAnimSite();
SoHAnimSite568->setUSE(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite568);

SoHAnimSite* SoHAnimSite569 = new SoHAnimSite();
SoHAnimSite569->setUSE(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite569);

SoHAnimSite* SoHAnimSite570 = new SoHAnimSite();
SoHAnimSite570->setUSE(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite570);

SoHAnimSite* SoHAnimSite571 = new SoHAnimSite();
SoHAnimSite571->setUSE(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite571);

SoHAnimSite* SoHAnimSite572 = new SoHAnimSite();
SoHAnimSite572->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite572);

SoHAnimSite* SoHAnimSite573 = new SoHAnimSite();
SoHAnimSite573->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite573);

SoHAnimSite* SoHAnimSite574 = new SoHAnimSite();
SoHAnimSite574->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite574);

SoHAnimSite* SoHAnimSite575 = new SoHAnimSite();
SoHAnimSite575->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite575);

SoHAnimSite* SoHAnimSite576 = new SoHAnimSite();
SoHAnimSite576->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite576);

SoHAnimSite* SoHAnimSite577 = new SoHAnimSite();
SoHAnimSite577->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite577);

SoHAnimSite* SoHAnimSite578 = new SoHAnimSite();
SoHAnimSite578->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite578);

SoHAnimSite* SoHAnimSite579 = new SoHAnimSite();
SoHAnimSite579->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite579);

SoHAnimSite* SoHAnimSite580 = new SoHAnimSite();
SoHAnimSite580->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite580);

SoHAnimSite* SoHAnimSite581 = new SoHAnimSite();
SoHAnimSite581->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite581);

SoHAnimSite* SoHAnimSite582 = new SoHAnimSite();
SoHAnimSite582->setUSE(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite582);

SoHAnimSite* SoHAnimSite583 = new SoHAnimSite();
SoHAnimSite583->setUSE(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite583);

SoHAnimSite* SoHAnimSite584 = new SoHAnimSite();
SoHAnimSite584->setUSE(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite584);

SoHAnimSite* SoHAnimSite585 = new SoHAnimSite();
SoHAnimSite585->setUSE(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite585);

SoHAnimSite* SoHAnimSite586 = new SoHAnimSite();
SoHAnimSite586->setUSE(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite586);

SoHAnimSite* SoHAnimSite587 = new SoHAnimSite();
SoHAnimSite587->setUSE(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite587);

SoHAnimSite* SoHAnimSite588 = new SoHAnimSite();
SoHAnimSite588->setUSE(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite588);

SoHAnimSite* SoHAnimSite589 = new SoHAnimSite();
SoHAnimSite589->setUSE(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite589);

SoHAnimSite* SoHAnimSite590 = new SoHAnimSite();
SoHAnimSite590->setUSE(QString("hanim_r_neck_base_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite590);

SoHAnimSite* SoHAnimSite591 = new SoHAnimSite();
SoHAnimSite591->setUSE(QString("hanim_l_neck_base_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite591);

SoHAnimSite* SoHAnimSite592 = new SoHAnimSite();
SoHAnimSite592->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite592);

SoHAnimSite* SoHAnimSite593 = new SoHAnimSite();
SoHAnimSite593->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite593);

SoHAnimSite* SoHAnimSite594 = new SoHAnimSite();
SoHAnimSite594->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite594);

SoHAnimSite* SoHAnimSite595 = new SoHAnimSite();
SoHAnimSite595->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite595);

SoHAnimSite* SoHAnimSite596 = new SoHAnimSite();
SoHAnimSite596->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite596);

SoHAnimSite* SoHAnimSite597 = new SoHAnimSite();
SoHAnimSite597->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite597);

SoHAnimSite* SoHAnimSite598 = new SoHAnimSite();
SoHAnimSite598->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite598);

SoHAnimSite* SoHAnimSite599 = new SoHAnimSite();
SoHAnimSite599->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite599);

SoHAnimSite* SoHAnimSite600 = new SoHAnimSite();
SoHAnimSite600->setUSE(QString("hanim_r_rib10_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite600);

SoHAnimSite* SoHAnimSite601 = new SoHAnimSite();
SoHAnimSite601->setUSE(QString("hanim_l_rib10_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite601);

SoHAnimSite* SoHAnimSite602 = new SoHAnimSite();
SoHAnimSite602->setUSE(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite602);

SoHAnimSite* SoHAnimSite603 = new SoHAnimSite();
SoHAnimSite603->setUSE(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite603);

SoHAnimSite* SoHAnimSite604 = new SoHAnimSite();
SoHAnimSite604->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite604);

SoHAnimSite* SoHAnimSite605 = new SoHAnimSite();
SoHAnimSite605->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite605);

SoHAnimSite* SoHAnimSite606 = new SoHAnimSite();
SoHAnimSite606->setUSE(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite606);

SoHAnimSite* SoHAnimSite607 = new SoHAnimSite();
SoHAnimSite607->setUSE(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite607);

SoHAnimSite* SoHAnimSite608 = new SoHAnimSite();
SoHAnimSite608->setUSE(QString("hanim_r_thelion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite608);

SoHAnimSite* SoHAnimSite609 = new SoHAnimSite();
SoHAnimSite609->setUSE(QString("hanim_l_thelion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite609);

SoHAnimSite* SoHAnimSite610 = new SoHAnimSite();
SoHAnimSite610->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite610);

SoHAnimSite* SoHAnimSite611 = new SoHAnimSite();
SoHAnimSite611->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite611);

SoHAnimSite* SoHAnimSite612 = new SoHAnimSite();
SoHAnimSite612->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite612);

SoHAnimSite* SoHAnimSite613 = new SoHAnimSite();
SoHAnimSite613->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite613);

SoHAnimSite* SoHAnimSite614 = new SoHAnimSite();
SoHAnimSite614->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite614);

SoHAnimSite* SoHAnimSite615 = new SoHAnimSite();
SoHAnimSite615->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite615);

SoHAnimSite* SoHAnimSite616 = new SoHAnimSite();
SoHAnimSite616->setDEF(QString("hanim_l_inclined_view"));
SoHAnimSite616->X3DNode::setName(QString("l_inclined_view"));
SoHAnimSite616->setTranslation(new float[]{1.62,1.05,2.06});
SoHAnimSite616->setRotation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint* SoViewpoint617 = new SoViewpoint();
SoViewpoint617->setDEF(QString("hanim_l_inclined_viewpoint"));
SoViewpoint617->setDescription(QString("left inclined"));
SoViewpoint617->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite616->addChild(*SoViewpoint617);

SoHAnimHumanoid41->setViewpoints(*SoHAnimSite616);

SoHAnimSite* SoHAnimSite618 = new SoHAnimSite();
SoHAnimSite618->setDEF(QString("hanim_r_inclined_view"));
SoHAnimSite618->X3DNode::setName(QString("r_inclined_view"));
SoHAnimSite618->setTranslation(new float[]{-1.62,1.05,2.06});
SoHAnimSite618->setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
SoViewpoint* SoViewpoint619 = new SoViewpoint();
SoViewpoint619->setDEF(QString("hanim_r_inclined_viewpoint"));
SoViewpoint619->setDescription(QString("right inclined"));
SoViewpoint619->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint619->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite618->addChild(*SoViewpoint619);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite618);

SoHAnimSite* SoHAnimSite620 = new SoHAnimSite();
SoHAnimSite620->setDEF(QString("hanim_front_view"));
SoHAnimSite620->X3DNode::setName(QString("front_view"));
SoHAnimSite620->setTranslation(new float[]{0.0,0.85,2.58});
SoViewpoint* SoViewpoint621 = new SoViewpoint();
SoViewpoint621->setDEF(QString("hanim_front_viewpoint"));
SoViewpoint621->setDescription(QString("front"));
SoViewpoint621->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint621->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite620->addChild(*SoViewpoint621);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite620);

SoHAnimSite* SoHAnimSite622 = new SoHAnimSite();
SoHAnimSite622->setDEF(QString("hanim_back_view"));
SoHAnimSite622->X3DNode::setName(QString("back_view"));
SoHAnimSite622->setTranslation(new float[]{0.0,0.85,-2.58});
SoHAnimSite622->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint* SoViewpoint623 = new SoViewpoint();
SoViewpoint623->setDEF(QString("hanim_back_viewpoint"));
SoViewpoint623->setDescription(QString("back"));
SoViewpoint623->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint623->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite622->addChild(*SoViewpoint623);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite622);

SoHAnimSite* SoHAnimSite624 = new SoHAnimSite();
SoHAnimSite624->setDEF(QString("hanim_l_side_view"));
SoHAnimSite624->X3DNode::setName(QString("l_side_view"));
SoHAnimSite624->setTranslation(new float[]{2.6,0.854,0.0});
SoHAnimSite624->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint* SoViewpoint625 = new SoViewpoint();
SoViewpoint625->setDEF(QString("hanim_l_side_viewpoint"));
SoViewpoint625->setDescription(QString("left side"));
SoViewpoint625->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint625->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite624->addChild(*SoViewpoint625);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite624);

SoHAnimSite* SoHAnimSite626 = new SoHAnimSite();
SoHAnimSite626->setDEF(QString("hanim_Top_view"));
SoHAnimSite626->X3DNode::setName(QString("Top_view"));
SoHAnimSite626->setTranslation(new float[]{0.0,3.5,0.0});
SoHAnimSite626->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint* SoViewpoint627 = new SoViewpoint();
SoViewpoint627->setDEF(QString("hanim_Top_viewpoint"));
SoViewpoint627->setDescription(QString("Top"));
SoViewpoint627->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint627->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite626->addChild(*SoViewpoint627);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite626);

SoHAnimSite* SoHAnimSite628 = new SoHAnimSite();
SoHAnimSite628->setDEF(QString("hanim_front_close_view"));
SoHAnimSite628->X3DNode::setName(QString("front_close_view"));
SoHAnimSite628->setTranslation(new float[]{0.0,0.854,1.575});
SoViewpoint* SoViewpoint629 = new SoViewpoint();
SoViewpoint629->setDEF(QString("hanim_front_close_viewpoint"));
SoViewpoint629->setDescription(QString("front close"));
SoViewpoint629->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint629->setCenterOfRotation(new float[]{0.0,0.0,1.575});
SoHAnimSite628->addChild(*SoViewpoint629);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite628);

SoHAnimSite* SoHAnimSite630 = new SoHAnimSite();
SoHAnimSite630->setDEF(QString("hanim_side_close_view"));
SoHAnimSite630->X3DNode::setName(QString("side_close_view"));
SoHAnimSite630->setTranslation(new float[]{1.56,0.854,0.0});
SoHAnimSite630->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint* SoViewpoint631 = new SoViewpoint();
SoViewpoint631->setDEF(QString("hanim_side_close_viewpoint"));
SoViewpoint631->setDescription(QString("side close"));
SoViewpoint631->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint631->setCenterOfRotation(new float[]{1.6,0.0,0.0});
SoHAnimSite630->addChild(*SoViewpoint631);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite630);

SoHAnimSite* SoHAnimSite632 = new SoHAnimSite();
SoHAnimSite632->setDEF(QString("hanim_head_front_close_view"));
SoHAnimSite632->X3DNode::setName(QString("head_front_close_view"));
SoHAnimSite632->setTranslation(new float[]{0.0,1.5,1.0});
SoViewpoint* SoViewpoint633 = new SoViewpoint();
SoViewpoint633->setDEF(QString("hanim_head_front_close_viewpoint"));
SoViewpoint633->setDescription(QString("head front close"));
SoViewpoint633->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint633->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite632->addChild(*SoViewpoint633);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite632);

SoHAnimSite* SoHAnimSite634 = new SoHAnimSite();
SoHAnimSite634->setDEF(QString("hanim_chest_front_close_view"));
SoHAnimSite634->X3DNode::setName(QString("chest_front_close_view"));
SoHAnimSite634->setTranslation(new float[]{0.0,1.2,1.0});
SoViewpoint* SoViewpoint635 = new SoViewpoint();
SoViewpoint635->setDEF(QString("hanim_chest_front_close_viewpoint"));
SoViewpoint635->setDescription(QString("chest front close"));
SoViewpoint635->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint635->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite634->addChild(*SoViewpoint635);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite634);

SoHAnimSite* SoHAnimSite636 = new SoHAnimSite();
SoHAnimSite636->setDEF(QString("hanim_pelvis_front_close_view"));
SoHAnimSite636->X3DNode::setName(QString("pelvis_front_close_view"));
SoHAnimSite636->setTranslation(new float[]{0.0,0.8,1.0});
SoViewpoint* SoViewpoint637 = new SoViewpoint();
SoViewpoint637->setDEF(QString("hanim_pelvis_front_close_viewpoint"));
SoViewpoint637->setDescription(QString("pelvis front close"));
SoViewpoint637->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint637->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite636->addChild(*SoViewpoint637);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite636);

SoHAnimSite* SoHAnimSite638 = new SoHAnimSite();
SoHAnimSite638->setDEF(QString("hanim_knees_front_close_view"));
SoHAnimSite638->X3DNode::setName(QString("knees_front_close_view"));
SoHAnimSite638->setTranslation(new float[]{0.0,0.4,1.0});
SoViewpoint* SoViewpoint639 = new SoViewpoint();
SoViewpoint639->setDEF(QString("hanim_knees_front_close_viewpoint"));
SoViewpoint639->setDescription(QString("knees front close"));
SoViewpoint639->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint639->setCenterOfRotation(new float[]{0.0,0.4,0.0});
SoHAnimSite638->addChild(*SoViewpoint639);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite638);

SoHAnimSite* SoHAnimSite640 = new SoHAnimSite();
SoHAnimSite640->setDEF(QString("hanim_feet_front_close_view"));
SoHAnimSite640->X3DNode::setName(QString("feet_front_close_view"));
SoHAnimSite640->setTranslation(new float[]{0.0,0.0,1.0});
SoViewpoint* SoViewpoint641 = new SoViewpoint();
SoViewpoint641->setDEF(QString("hanim_feet_front_close_viewpoint"));
SoViewpoint641->setDescription(QString("feet front close"));
SoViewpoint641->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite640->addChild(*SoViewpoint641);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite640);

SoHAnimSite* SoHAnimSite642 = new SoHAnimSite();
SoHAnimSite642->setDEF(QString("hanim_eye_level_view"));
SoHAnimSite642->X3DNode::setName(QString("eye_level_view"));
SoHAnimSite642->setTranslation(new float[]{0.0,1.6332,0.0502});
SoViewpoint* SoViewpoint643 = new SoViewpoint();
SoViewpoint643->setDEF(QString("hanim_eye_level_viewpoint"));
SoViewpoint643->setDescription(QString("eye level looking forward"));
SoViewpoint643->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint643->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite642->addChild(*SoViewpoint643);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite642);

SoHAnimSite* SoHAnimSite644 = new SoHAnimSite();
SoHAnimSite644->setUSE(QString("hanim_l_eyeball_site_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite644);

SoHAnimSite* SoHAnimSite645 = new SoHAnimSite();
SoHAnimSite645->setUSE(QString("hanim_r_eyeball_site_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite645);

SoHAnimSite* SoHAnimSite646 = new SoHAnimSite();
SoHAnimSite646->setUSE(QString("hanim_l_hand_front_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite646);

SoHAnimSite* SoHAnimSite647 = new SoHAnimSite();
SoHAnimSite647->setUSE(QString("hanim_r_hand_front_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite647);

SoNode27->addChild(*SoHAnimHumanoid41);

SoSceneManager0->setSceneGraph(*SoNode27);

return 0;
}
