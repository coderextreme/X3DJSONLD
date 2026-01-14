
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
Someta3->setContent(QString("HAnimSpecificationLOA3Invisible.x3d"));
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
Someta6->setContent(QString("HAnimSpecificationLOA3Illustrated.x3d"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("HAnimSpecificationLOA3Animation.x3d"));
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
Someta17->setContent(QString("Tue, 09 Sep 2025 19:39:08 GMT"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("error"));
Someta18->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("creator"));
Someta19->setContent(QString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("images/BonesAllSkeletonFrontViewLOA1.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("images/BonesAllSkeletonFrontViewLOA2.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("Image"));
Someta22->setContent(QString("images/BonesAllSkeletonFrontViewLOA3.png"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("TODO"));
Someta23->setContent(QString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("TODO"));
Someta24->setContent(QString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("translator"));
Someta25->setContent(QString("Don Brutzman and Joe Williams"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("generator"));
Someta26->setContent(QString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("generator"));
Someta27->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta27);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode28 = new SoNode();
SoBackground* SoBackground29 = new SoBackground();
SoBackground29->setSkyColor(new float[]{0.3,0.3,0.3}, 3);
SoNode28->addChild(*SoBackground29);

SoNavigationInfo* SoNavigationInfo30 = new SoNavigationInfo();
SoNode28->addChild(*SoNavigationInfo30);

SoGroup* SoGroup31 = new SoGroup();
SoGroup31->setDEF(QString("Original_WorldInfo"));
SoWorldInfo* SoWorldInfo32 = new SoWorldInfo();
SoWorldInfo32->setTitle(QString("HANIM 200x Default Joint Centers, LOA3"));
SoWorldInfo32->setInfo(new QString[]{QString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
SoGroup31->addChild(*SoWorldInfo32);

SoNode28->addChild(*SoGroup31);

SoViewpoint* SoViewpoint33 = new SoViewpoint();
SoViewpoint33->setDescription(QString("Humanoid LOA 3 Front"));
SoViewpoint33->setPosition(new float[]{0.0,0.4,4.0});
SoViewpoint33->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint33);

SoViewpoint* SoViewpoint34 = new SoViewpoint();
SoViewpoint34->setDescription(QString("Humanoid LOA 3 Front Close"));
SoViewpoint34->setPosition(new float[]{0.0,0.8,2.0});
SoViewpoint34->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint34);

SoViewpoint* SoViewpoint35 = new SoViewpoint();
SoViewpoint35->setDescription(QString("Humanoid LOA 3 Front Closer"));
SoViewpoint35->setPosition(new float[]{0.0,1.2,1.0});
SoViewpoint35->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint35);

SoViewpoint* SoViewpoint36 = new SoViewpoint();
SoViewpoint36->setDescription(QString("Humanoid LOA 3 Front Face"));
SoViewpoint36->setPosition(new float[]{0.0,1.63,1.0});
SoViewpoint36->setCenterOfRotation(new float[]{0.0,1.5,0.0016});
SoNode28->addChild(*SoViewpoint36);

SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDescription(QString("Humanoid LOA 3 Right Side"));
SoViewpoint37->setPosition(new float[]{2.6,0.8,0.0});
SoViewpoint37->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint37->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint37);

SoViewpoint* SoViewpoint38 = new SoViewpoint();
SoViewpoint38->setDescription(QString("Humanoid LOA 3 Right Side Close"));
SoViewpoint38->setPosition(new float[]{1.0,0.8,0.5});
SoViewpoint38->setOrientation(new float[]{0.0,1.0,0.0,1.2});
SoViewpoint38->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint38);

SoViewpoint* SoViewpoint39 = new SoViewpoint();
SoViewpoint39->setDescription(QString("Humanoid LOA 3 Left Side Close"));
SoViewpoint39->setPosition(new float[]{-1.0,0.8,0.5});
SoViewpoint39->setOrientation(new float[]{0.0,1.0,0.0,-1.2});
SoViewpoint39->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint39);

SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("Humanoid LOA 3 Left Side"));
SoViewpoint40->setPosition(new float[]{-2.6,0.8,0.0});
SoViewpoint40->setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
SoViewpoint40->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint40);

SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDescription(QString("Humanoid LOA 3 Top"));
SoViewpoint41->setPosition(new float[]{0.0,3.5,0.0});
SoViewpoint41->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint41->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode28->addChild(*SoViewpoint41);

SoHAnimHumanoid* SoHAnimHumanoid42 = new SoHAnimHumanoid();
SoHAnimHumanoid42->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid42->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid42->setInfo(new QString[]{QString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), QString("authorEmail=HAnim@web3D.org"), QString("copyright=none"), QString("creationDate=12 May 1999"), QString("usageRestrictions=none"), QString("humanoidVersion=2.0"), QString("height=1.7504")}, 7);
SoHAnimHumanoid42->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint43->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint43->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimSegment* SoHAnimSegment44 = new SoHAnimSegment();
SoHAnimSegment44->setDEF(QString("hanim_sacrum"));
SoHAnimSegment44->X3DNode::setName(QString("sacrum"));
SoHAnimJoint43->addChildren(*SoHAnimSegment44);

SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint45->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint45->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment46 = new SoHAnimSegment();
SoHAnimSegment46->setDEF(QString("hanim_pelvis"));
SoHAnimSegment46->X3DNode::setName(QString("pelvis"));
SoHAnimSite* SoHAnimSite47 = new SoHAnimSite();
SoHAnimSite47->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite47->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite47->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoHAnimSegment46->addChild(*SoHAnimSite47);

SoHAnimSite* SoHAnimSite48 = new SoHAnimSite();
SoHAnimSite48->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite48->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite48->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoHAnimSegment46->addChild(*SoHAnimSite48);

SoHAnimSite* SoHAnimSite49 = new SoHAnimSite();
SoHAnimSite49->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite49->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite49->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoHAnimSegment46->addChild(*SoHAnimSite49);

SoHAnimSite* SoHAnimSite50 = new SoHAnimSite();
SoHAnimSite50->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite50->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite50->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoHAnimSegment46->addChild(*SoHAnimSite50);

SoHAnimSite* SoHAnimSite51 = new SoHAnimSite();
SoHAnimSite51->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite51->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite51->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoHAnimSegment46->addChild(*SoHAnimSite51);

SoHAnimSite* SoHAnimSite52 = new SoHAnimSite();
SoHAnimSite52->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite52->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite52->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoHAnimSegment46->addChild(*SoHAnimSite52);

SoHAnimSite* SoHAnimSite53 = new SoHAnimSite();
SoHAnimSite53->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite53->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite53->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoHAnimSegment46->addChild(*SoHAnimSite53);

SoHAnimSite* SoHAnimSite54 = new SoHAnimSite();
SoHAnimSite54->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite54->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite54->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoHAnimSegment46->addChild(*SoHAnimSite54);

SoHAnimSite* SoHAnimSite55 = new SoHAnimSite();
SoHAnimSite55->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite55->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite55->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoHAnimSegment46->addChild(*SoHAnimSite55);

SoHAnimJoint45->addChildren(*SoHAnimSegment46);

SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->setDEF(QString("hanim_l_hip"));
SoHAnimJoint56->X3DNode::setName(QString("l_hip"));
SoHAnimJoint56->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment57 = new SoHAnimSegment();
SoHAnimSegment57->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment57->X3DNode::setName(QString("l_thigh"));
SoHAnimSite* SoHAnimSite58 = new SoHAnimSite();
SoHAnimSite58->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite58->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite58->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoHAnimSegment57->addChild(*SoHAnimSite58);

SoHAnimSite* SoHAnimSite59 = new SoHAnimSite();
SoHAnimSite59->setDEF(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimSite59->X3DNode::setName(QString("l_femoral_lateral_epicn_pt"));
SoHAnimSite59->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoHAnimSegment57->addChild(*SoHAnimSite59);

SoHAnimSite* SoHAnimSite60 = new SoHAnimSite();
SoHAnimSite60->setDEF(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimSite60->X3DNode::setName(QString("l_femoral_medial_epicn_pt"));
SoHAnimSite60->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoHAnimSegment57->addChild(*SoHAnimSite60);

SoHAnimJoint56->addChildren(*SoHAnimSegment57);

SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->setDEF(QString("hanim_l_knee"));
SoHAnimJoint61->X3DNode::setName(QString("l_knee"));
SoHAnimJoint61->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment62 = new SoHAnimSegment();
SoHAnimSegment62->setDEF(QString("hanim_l_calf"));
SoHAnimSegment62->X3DNode::setName(QString("l_calf"));
SoHAnimJoint61->addChildren(*SoHAnimSegment62);

SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->setDEF(QString("hanim_l_ankle"));
SoHAnimJoint63->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint63->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment64 = new SoHAnimSegment();
SoHAnimSegment64->setDEF(QString("hanim_l_hindfoot"));
SoHAnimSegment64->X3DNode::setName(QString("l_hindfoot"));
SoHAnimSite* SoHAnimSite65 = new SoHAnimSite();
SoHAnimSite65->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite65->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite65->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoHAnimSegment64->addChild(*SoHAnimSite65);

SoHAnimSite* SoHAnimSite66 = new SoHAnimSite();
SoHAnimSite66->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite66->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite66->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoHAnimSegment64->addChild(*SoHAnimSite66);

SoHAnimSite* SoHAnimSite67 = new SoHAnimSite();
SoHAnimSite67->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite67->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite67->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoHAnimSegment64->addChild(*SoHAnimSite67);

SoHAnimSite* SoHAnimSite68 = new SoHAnimSite();
SoHAnimSite68->setDEF(QString("hanim_l_calcaneous_post_pt"));
SoHAnimSite68->X3DNode::setName(QString("l_calcaneous_post_pt"));
SoHAnimSite68->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoHAnimSegment64->addChild(*SoHAnimSite68);

SoHAnimJoint63->addChildren(*SoHAnimSegment64);

SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->setDEF(QString("hanim_l_subtalar"));
SoHAnimJoint69->X3DNode::setName(QString("l_subtalar"));
SoHAnimJoint69->setCenter(new float[]{0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment70 = new SoHAnimSegment();
SoHAnimSegment70->setDEF(QString("hanim_l_midproximal"));
SoHAnimSegment70->X3DNode::setName(QString("l_midproximal"));
SoHAnimJoint69->addChildren(*SoHAnimSegment70);

SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->setDEF(QString("hanim_l_midtarsal"));
SoHAnimJoint71->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint71->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment72 = new SoHAnimSegment();
SoHAnimSegment72->setDEF(QString("hanim_l_middistal"));
SoHAnimSegment72->X3DNode::setName(QString("l_middistal"));
SoHAnimSite* SoHAnimSite73 = new SoHAnimSite();
SoHAnimSite73->setDEF(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimSite73->X3DNode::setName(QString("l_metatarsal_pha1_pt"));
SoHAnimSite73->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoHAnimSegment72->addChild(*SoHAnimSite73);

SoHAnimJoint71->addChildren(*SoHAnimSegment72);

SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->setDEF(QString("hanim_l_metatarsal"));
SoHAnimJoint74->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint74->setCenter(new float[]{0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment75 = new SoHAnimSegment();
SoHAnimSegment75->setDEF(QString("hanim_l_forefoot"));
SoHAnimSegment75->X3DNode::setName(QString("l_forefoot"));
SoHAnimSite* SoHAnimSite76 = new SoHAnimSite();
SoHAnimSite76->setDEF(QString("hanim_l_forefoot_tip"));
SoHAnimSite76->X3DNode::setName(QString("l_forefoot_tip"));
SoHAnimSite76->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoHAnimSegment75->addChild(*SoHAnimSite76);

SoHAnimSite* SoHAnimSite77 = new SoHAnimSite();
SoHAnimSite77->setDEF(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimSite77->X3DNode::setName(QString("l_metatarsal_pha5_pt"));
SoHAnimSite77->setTranslation(new float[]{0.1825,0.007,0.0928});
SoHAnimSegment75->addChild(*SoHAnimSite77);

SoHAnimSite* SoHAnimSite78 = new SoHAnimSite();
SoHAnimSite78->setDEF(QString("hanim_l_digit2_pt"));
SoHAnimSite78->X3DNode::setName(QString("l_digit2_pt"));
SoHAnimSite78->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoHAnimSegment75->addChild(*SoHAnimSite78);

SoHAnimJoint74->addChildren(*SoHAnimSegment75);

SoHAnimJoint71->addChildren(*SoHAnimJoint74);

SoHAnimJoint69->addChildren(*SoHAnimJoint71);

SoHAnimJoint63->addChildren(*SoHAnimJoint69);

SoHAnimJoint61->addChildren(*SoHAnimJoint63);

SoHAnimJoint56->addChildren(*SoHAnimJoint61);

SoHAnimJoint45->addChildren(*SoHAnimJoint56);

SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->setDEF(QString("hanim_r_hip"));
SoHAnimJoint79->X3DNode::setName(QString("r_hip"));
SoHAnimJoint79->setCenter(new float[]{-0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment80 = new SoHAnimSegment();
SoHAnimSegment80->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment80->X3DNode::setName(QString("r_thigh"));
SoHAnimSite* SoHAnimSite81 = new SoHAnimSite();
SoHAnimSite81->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite81->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite81->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoHAnimSegment80->addChild(*SoHAnimSite81);

SoHAnimSite* SoHAnimSite82 = new SoHAnimSite();
SoHAnimSite82->setDEF(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimSite82->X3DNode::setName(QString("r_femoral_lateral_epicn_pt"));
SoHAnimSite82->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoHAnimSegment80->addChild(*SoHAnimSite82);

SoHAnimSite* SoHAnimSite83 = new SoHAnimSite();
SoHAnimSite83->setDEF(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimSite83->X3DNode::setName(QString("r_femoral_medial_epicn_pt"));
SoHAnimSite83->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoHAnimSegment80->addChild(*SoHAnimSite83);

SoHAnimJoint79->addChildren(*SoHAnimSegment80);

SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->setDEF(QString("hanim_r_knee"));
SoHAnimJoint84->X3DNode::setName(QString("r_knee"));
SoHAnimJoint84->setCenter(new float[]{-0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment85 = new SoHAnimSegment();
SoHAnimSegment85->setDEF(QString("hanim_r_calf"));
SoHAnimSegment85->X3DNode::setName(QString("r_calf"));
SoHAnimJoint84->addChildren(*SoHAnimSegment85);

SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->setDEF(QString("hanim_r_ankle"));
SoHAnimJoint86->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint86->setCenter(new float[]{-0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment87 = new SoHAnimSegment();
SoHAnimSegment87->setDEF(QString("hanim_r_hindfoot"));
SoHAnimSegment87->X3DNode::setName(QString("r_hindfoot"));
SoHAnimSite* SoHAnimSite88 = new SoHAnimSite();
SoHAnimSite88->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite88->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite88->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoHAnimSegment87->addChild(*SoHAnimSite88);

SoHAnimSite* SoHAnimSite89 = new SoHAnimSite();
SoHAnimSite89->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite89->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite89->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoHAnimSegment87->addChild(*SoHAnimSite89);

SoHAnimSite* SoHAnimSite90 = new SoHAnimSite();
SoHAnimSite90->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite90->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite90->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoHAnimSegment87->addChild(*SoHAnimSite90);

SoHAnimSite* SoHAnimSite91 = new SoHAnimSite();
SoHAnimSite91->setDEF(QString("hanim_r_calcaneous_post_pt"));
SoHAnimSite91->X3DNode::setName(QString("r_calcaneous_post_pt"));
SoHAnimSite91->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoHAnimSegment87->addChild(*SoHAnimSite91);

SoHAnimJoint86->addChildren(*SoHAnimSegment87);

SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("hanim_r_subtalar"));
SoHAnimJoint92->X3DNode::setName(QString("r_subtalar"));
SoHAnimJoint92->setCenter(new float[]{-0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment93 = new SoHAnimSegment();
SoHAnimSegment93->setDEF(QString("hanim_r_midproximal"));
SoHAnimSegment93->X3DNode::setName(QString("r_midproximal"));
SoHAnimJoint92->addChildren(*SoHAnimSegment93);

SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->setDEF(QString("hanim_r_midtarsal"));
SoHAnimJoint94->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint94->setCenter(new float[]{-0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment95 = new SoHAnimSegment();
SoHAnimSegment95->setDEF(QString("hanim_r_middistal"));
SoHAnimSegment95->X3DNode::setName(QString("r_middistal"));
SoHAnimSite* SoHAnimSite96 = new SoHAnimSite();
SoHAnimSite96->setDEF(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimSite96->X3DNode::setName(QString("r_metatarsal_pha1_pt"));
SoHAnimSite96->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoHAnimSegment95->addChild(*SoHAnimSite96);

SoHAnimJoint94->addChildren(*SoHAnimSegment95);

SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->setDEF(QString("hanim_r_metatarsal"));
SoHAnimJoint97->X3DNode::setName(QString("r_metatarsal"));
SoHAnimJoint97->setCenter(new float[]{-0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment98 = new SoHAnimSegment();
SoHAnimSegment98->setDEF(QString("hanim_r_forefoot"));
SoHAnimSegment98->X3DNode::setName(QString("r_forefoot"));
SoHAnimSite* SoHAnimSite99 = new SoHAnimSite();
SoHAnimSite99->setDEF(QString("hanim_r_forefoot_tip"));
SoHAnimSite99->X3DNode::setName(QString("r_forefoot_tip"));
SoHAnimSite99->setTranslation(new float[]{-0.1043,0.0227,0.145});
SoHAnimSegment98->addChild(*SoHAnimSite99);

SoHAnimSite* SoHAnimSite100 = new SoHAnimSite();
SoHAnimSite100->setDEF(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimSite100->X3DNode::setName(QString("r_metatarsal_pha5_pt"));
SoHAnimSite100->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoHAnimSegment98->addChild(*SoHAnimSite100);

SoHAnimSite* SoHAnimSite101 = new SoHAnimSite();
SoHAnimSite101->setDEF(QString("hanim_r_digit2_pt"));
SoHAnimSite101->X3DNode::setName(QString("r_digit2_pt"));
SoHAnimSite101->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoHAnimSegment98->addChild(*SoHAnimSite101);

SoHAnimJoint97->addChildren(*SoHAnimSegment98);

SoHAnimJoint94->addChildren(*SoHAnimJoint97);

SoHAnimJoint92->addChildren(*SoHAnimJoint94);

SoHAnimJoint86->addChildren(*SoHAnimJoint92);

SoHAnimJoint84->addChildren(*SoHAnimJoint86);

SoHAnimJoint79->addChildren(*SoHAnimJoint84);

SoHAnimJoint45->addChildren(*SoHAnimJoint79);

SoHAnimJoint43->addChildren(*SoHAnimJoint45);

SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->setDEF(QString("hanim_vl5"));
SoHAnimJoint102->X3DNode::setName(QString("vl5"));
SoHAnimJoint102->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimSegment* SoHAnimSegment103 = new SoHAnimSegment();
SoHAnimSegment103->setDEF(QString("hanim_l5"));
SoHAnimSegment103->X3DNode::setName(QString("l5"));
SoHAnimSite* SoHAnimSite104 = new SoHAnimSite();
SoHAnimSite104->setDEF(QString("hanim_waist_preferred_post_pt"));
SoHAnimSite104->X3DNode::setName(QString("waist_preferred_post_pt"));
SoHAnimSite104->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoHAnimSegment103->addChild(*SoHAnimSite104);

SoHAnimSite* SoHAnimSite105 = new SoHAnimSite();
SoHAnimSite105->setDEF(QString("hanim_navel_pt"));
SoHAnimSite105->X3DNode::setName(QString("navel_pt"));
SoHAnimSite105->setTranslation(new float[]{0.0069,1.0966,0.1017});
SoHAnimSegment103->addChild(*SoHAnimSite105);

SoHAnimJoint102->addChildren(*SoHAnimSegment103);

SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->setDEF(QString("hanim_vl4"));
SoHAnimJoint106->X3DNode::setName(QString("vl4"));
SoHAnimJoint106->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimSegment* SoHAnimSegment107 = new SoHAnimSegment();
SoHAnimSegment107->setDEF(QString("hanim_l4"));
SoHAnimSegment107->X3DNode::setName(QString("l4"));
SoHAnimJoint106->addChildren(*SoHAnimSegment107);

SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->setDEF(QString("hanim_vl3"));
SoHAnimJoint108->X3DNode::setName(QString("vl3"));
SoHAnimJoint108->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimSegment* SoHAnimSegment109 = new SoHAnimSegment();
SoHAnimSegment109->setDEF(QString("hanim_l3"));
SoHAnimSegment109->X3DNode::setName(QString("l3"));
SoHAnimJoint108->addChildren(*SoHAnimSegment109);

SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->setDEF(QString("hanim_vl2"));
SoHAnimJoint110->X3DNode::setName(QString("vl2"));
SoHAnimJoint110->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimSegment* SoHAnimSegment111 = new SoHAnimSegment();
SoHAnimSegment111->setDEF(QString("hanim_l2"));
SoHAnimSegment111->X3DNode::setName(QString("l2"));
SoHAnimSite* SoHAnimSite112 = new SoHAnimSite();
SoHAnimSite112->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite112->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite112->setTranslation(new float[]{-0.0711,1.1941,0.1016});
SoHAnimSegment111->addChild(*SoHAnimSite112);

SoHAnimSite* SoHAnimSite113 = new SoHAnimSite();
SoHAnimSite113->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite113->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite113->setTranslation(new float[]{0.0871,1.1925,0.0992});
SoHAnimSegment111->addChild(*SoHAnimSite113);

SoHAnimSite* SoHAnimSite114 = new SoHAnimSite();
SoHAnimSite114->setDEF(QString("hanim_rib10_midspine_pt"));
SoHAnimSite114->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite114->setTranslation(new float[]{0.0049,1.1908,-0.1113});
SoHAnimSegment111->addChild(*SoHAnimSite114);

SoHAnimJoint110->addChildren(*SoHAnimSegment111);

SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->setDEF(QString("hanim_vl1"));
SoHAnimJoint115->X3DNode::setName(QString("vl1"));
SoHAnimJoint115->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimSegment* SoHAnimSegment116 = new SoHAnimSegment();
SoHAnimSegment116->setDEF(QString("hanim_l1"));
SoHAnimSegment116->X3DNode::setName(QString("l1"));
SoHAnimJoint115->addChildren(*SoHAnimSegment116);

SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->setDEF(QString("hanim_vt12"));
SoHAnimJoint117->X3DNode::setName(QString("vt12"));
SoHAnimJoint117->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimSegment* SoHAnimSegment118 = new SoHAnimSegment();
SoHAnimSegment118->setDEF(QString("hanim_t12"));
SoHAnimSegment118->X3DNode::setName(QString("t12"));
SoHAnimJoint117->addChildren(*SoHAnimSegment118);

SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->setDEF(QString("hanim_vt11"));
SoHAnimJoint119->X3DNode::setName(QString("vt11"));
SoHAnimJoint119->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment120 = new SoHAnimSegment();
SoHAnimSegment120->setDEF(QString("hanim_t11"));
SoHAnimSegment120->X3DNode::setName(QString("t11"));
SoHAnimJoint119->addChildren(*SoHAnimSegment120);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->setDEF(QString("hanim_vt10"));
SoHAnimJoint121->X3DNode::setName(QString("vt10"));
SoHAnimJoint121->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimSegment* SoHAnimSegment122 = new SoHAnimSegment();
SoHAnimSegment122->setDEF(QString("hanim_t10"));
SoHAnimSegment122->X3DNode::setName(QString("t10"));
SoHAnimSite* SoHAnimSite123 = new SoHAnimSite();
SoHAnimSite123->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite123->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite123->setTranslation(new float[]{0.0085,1.2995,0.1147});
SoHAnimSegment122->addChild(*SoHAnimSite123);

SoHAnimJoint121->addChildren(*SoHAnimSegment122);

SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setDEF(QString("hanim_vt9"));
SoHAnimJoint124->X3DNode::setName(QString("vt9"));
SoHAnimJoint124->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimSegment* SoHAnimSegment125 = new SoHAnimSegment();
SoHAnimSegment125->setDEF(QString("hanim_t9"));
SoHAnimSegment125->X3DNode::setName(QString("t9"));
SoHAnimSite* SoHAnimSite126 = new SoHAnimSite();
SoHAnimSite126->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite126->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite126->setTranslation(new float[]{-0.0736,1.3385,0.1217});
SoHAnimSegment125->addChild(*SoHAnimSite126);

SoHAnimSite* SoHAnimSite127 = new SoHAnimSite();
SoHAnimSite127->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite127->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite127->setTranslation(new float[]{0.0918,1.3382,0.1192});
SoHAnimSegment125->addChild(*SoHAnimSite127);

SoHAnimJoint124->addChildren(*SoHAnimSegment125);

SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setDEF(QString("hanim_vt8"));
SoHAnimJoint128->X3DNode::setName(QString("vt8"));
SoHAnimJoint128->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimSegment* SoHAnimSegment129 = new SoHAnimSegment();
SoHAnimSegment129->setDEF(QString("hanim_t8"));
SoHAnimSegment129->X3DNode::setName(QString("t8"));
SoHAnimJoint128->addChildren(*SoHAnimSegment129);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->setDEF(QString("hanim_vt7"));
SoHAnimJoint130->X3DNode::setName(QString("vt7"));
SoHAnimJoint130->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimSegment* SoHAnimSegment131 = new SoHAnimSegment();
SoHAnimSegment131->setDEF(QString("hanim_t7"));
SoHAnimSegment131->X3DNode::setName(QString("t7"));
SoHAnimJoint130->addChildren(*SoHAnimSegment131);

SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setDEF(QString("hanim_vt6"));
SoHAnimJoint132->X3DNode::setName(QString("vt6"));
SoHAnimJoint132->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimSegment* SoHAnimSegment133 = new SoHAnimSegment();
SoHAnimSegment133->setDEF(QString("hanim_t6"));
SoHAnimSegment133->X3DNode::setName(QString("t6"));
SoHAnimJoint132->addChildren(*SoHAnimSegment133);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->setDEF(QString("hanim_vt5"));
SoHAnimJoint134->X3DNode::setName(QString("vt5"));
SoHAnimJoint134->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimSegment* SoHAnimSegment135 = new SoHAnimSegment();
SoHAnimSegment135->setDEF(QString("hanim_t5"));
SoHAnimSegment135->X3DNode::setName(QString("t5"));
SoHAnimJoint134->addChildren(*SoHAnimSegment135);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setDEF(QString("hanim_vt4"));
SoHAnimJoint136->X3DNode::setName(QString("vt4"));
SoHAnimJoint136->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimSegment* SoHAnimSegment137 = new SoHAnimSegment();
SoHAnimSegment137->setDEF(QString("hanim_t4"));
SoHAnimSegment137->X3DNode::setName(QString("t4"));
SoHAnimJoint136->addChildren(*SoHAnimSegment137);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->setDEF(QString("hanim_vt3"));
SoHAnimJoint138->X3DNode::setName(QString("vt3"));
SoHAnimJoint138->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimSegment* SoHAnimSegment139 = new SoHAnimSegment();
SoHAnimSegment139->setDEF(QString("hanim_t3"));
SoHAnimSegment139->X3DNode::setName(QString("t3"));
SoHAnimJoint138->addChildren(*SoHAnimSegment139);

SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->setDEF(QString("hanim_vt2"));
SoHAnimJoint140->X3DNode::setName(QString("vt2"));
SoHAnimJoint140->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimSegment* SoHAnimSegment141 = new SoHAnimSegment();
SoHAnimSegment141->setDEF(QString("hanim_t2"));
SoHAnimSegment141->X3DNode::setName(QString("t2"));
SoHAnimJoint140->addChildren(*SoHAnimSegment141);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setDEF(QString("hanim_vt1"));
SoHAnimJoint142->X3DNode::setName(QString("vt1"));
SoHAnimJoint142->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimSegment* SoHAnimSegment143 = new SoHAnimSegment();
SoHAnimSegment143->setDEF(QString("hanim_t1"));
SoHAnimSegment143->X3DNode::setName(QString("t1"));
SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite144->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite144->setTranslation(new float[]{0.0084,1.4714,0.0551});
SoHAnimSegment143->addChild(*SoHAnimSite144);

SoHAnimSite* SoHAnimSite145 = new SoHAnimSite();
SoHAnimSite145->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite145->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite145->setTranslation(new float[]{0.0064,1.52,-0.0815});
SoHAnimSegment143->addChild(*SoHAnimSite145);

SoHAnimJoint142->addChildren(*SoHAnimSegment143);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setDEF(QString("hanim_vc7"));
SoHAnimJoint146->X3DNode::setName(QString("vc7"));
SoHAnimJoint146->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimSegment* SoHAnimSegment147 = new SoHAnimSegment();
SoHAnimSegment147->setDEF(QString("hanim_c7"));
SoHAnimSegment147->X3DNode::setName(QString("c7"));
SoHAnimSite* SoHAnimSite148 = new SoHAnimSite();
SoHAnimSite148->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite148->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite148->setTranslation(new float[]{-0.0419,1.5149,-0.022});
SoHAnimSegment147->addChild(*SoHAnimSite148);

SoHAnimSite* SoHAnimSite149 = new SoHAnimSite();
SoHAnimSite149->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite149->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite149->setTranslation(new float[]{0.0646,1.5141,-0.038});
SoHAnimSegment147->addChild(*SoHAnimSite149);

SoHAnimJoint146->addChildren(*SoHAnimSegment147);

SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->setDEF(QString("hanim_vc6"));
SoHAnimJoint150->X3DNode::setName(QString("vc6"));
SoHAnimJoint150->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimSegment* SoHAnimSegment151 = new SoHAnimSegment();
SoHAnimSegment151->setDEF(QString("hanim_c6"));
SoHAnimSegment151->X3DNode::setName(QString("c6"));
SoHAnimJoint150->addChildren(*SoHAnimSegment151);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setDEF(QString("hanim_vc5"));
SoHAnimJoint152->X3DNode::setName(QString("vc5"));
SoHAnimJoint152->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimSegment* SoHAnimSegment153 = new SoHAnimSegment();
SoHAnimSegment153->setDEF(QString("hanim_c5"));
SoHAnimSegment153->X3DNode::setName(QString("c5"));
SoHAnimJoint152->addChildren(*SoHAnimSegment153);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->setDEF(QString("hanim_vc4"));
SoHAnimJoint154->X3DNode::setName(QString("vc4"));
SoHAnimJoint154->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimSegment* SoHAnimSegment155 = new SoHAnimSegment();
SoHAnimSegment155->setDEF(QString("hanim_c4"));
SoHAnimSegment155->X3DNode::setName(QString("c4"));
SoHAnimJoint154->addChildren(*SoHAnimSegment155);

SoHAnimJoint* SoHAnimJoint156 = new SoHAnimJoint();
SoHAnimJoint156->setDEF(QString("hanim_vc3"));
SoHAnimJoint156->X3DNode::setName(QString("vc3"));
SoHAnimJoint156->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimSegment* SoHAnimSegment157 = new SoHAnimSegment();
SoHAnimSegment157->setDEF(QString("hanim_c3"));
SoHAnimSegment157->X3DNode::setName(QString("c3"));
SoHAnimJoint156->addChildren(*SoHAnimSegment157);

SoHAnimJoint* SoHAnimJoint158 = new SoHAnimJoint();
SoHAnimJoint158->setDEF(QString("hanim_vc2"));
SoHAnimJoint158->X3DNode::setName(QString("vc2"));
SoHAnimJoint158->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimSegment* SoHAnimSegment159 = new SoHAnimSegment();
SoHAnimSegment159->setDEF(QString("hanim_c2"));
SoHAnimSegment159->X3DNode::setName(QString("c2"));
SoHAnimJoint158->addChildren(*SoHAnimSegment159);

SoHAnimJoint* SoHAnimJoint160 = new SoHAnimJoint();
SoHAnimJoint160->setDEF(QString("hanim_vc1"));
SoHAnimJoint160->X3DNode::setName(QString("vc1"));
SoHAnimJoint160->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimSegment* SoHAnimSegment161 = new SoHAnimSegment();
SoHAnimSegment161->setDEF(QString("hanim_c1"));
SoHAnimSegment161->X3DNode::setName(QString("c1"));
SoHAnimJoint160->addChildren(*SoHAnimSegment161);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setDEF(QString("hanim_skullbase"));
SoHAnimJoint162->X3DNode::setName(QString("skullbase"));
SoHAnimJoint162->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment163 = new SoHAnimSegment();
SoHAnimSegment163->setDEF(QString("hanim_skull"));
SoHAnimSegment163->X3DNode::setName(QString("skull"));
SoHAnimSite* SoHAnimSite164 = new SoHAnimSite();
SoHAnimSite164->setDEF(QString("hanim_skull_tip"));
SoHAnimSite164->X3DNode::setName(QString("skull_tip"));
SoHAnimSite164->setTranslation(new float[]{0.005,1.7504,0.0055});
SoHAnimSegment163->addChild(*SoHAnimSite164);

SoHAnimSite* SoHAnimSite165 = new SoHAnimSite();
SoHAnimSite165->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite165->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite165->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoHAnimSegment163->addChild(*SoHAnimSite165);

SoHAnimSite* SoHAnimSite166 = new SoHAnimSite();
SoHAnimSite166->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite166->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite166->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoHAnimSegment163->addChild(*SoHAnimSite166);

SoHAnimSite* SoHAnimSite167 = new SoHAnimSite();
SoHAnimSite167->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite167->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite167->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoHAnimSegment163->addChild(*SoHAnimSite167);

SoHAnimSite* SoHAnimSite168 = new SoHAnimSite();
SoHAnimSite168->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite168->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite168->setTranslation(new float[]{0.0061,1.541,0.0805});
SoHAnimSegment163->addChild(*SoHAnimSite168);

SoHAnimSite* SoHAnimSite169 = new SoHAnimSite();
SoHAnimSite169->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite169->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite169->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoHAnimSegment163->addChild(*SoHAnimSite169);

SoHAnimSite* SoHAnimSite170 = new SoHAnimSite();
SoHAnimSite170->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite170->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite170->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoHAnimSegment163->addChild(*SoHAnimSite170);

SoHAnimSite* SoHAnimSite171 = new SoHAnimSite();
SoHAnimSite171->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite171->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite171->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoHAnimSegment163->addChild(*SoHAnimSite171);

SoHAnimSite* SoHAnimSite172 = new SoHAnimSite();
SoHAnimSite172->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite172->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite172->setTranslation(new float[]{0.0631,1.553,0.033});
SoHAnimSegment163->addChild(*SoHAnimSite172);

SoHAnimSite* SoHAnimSite173 = new SoHAnimSite();
SoHAnimSite173->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite173->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite173->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoHAnimSegment163->addChild(*SoHAnimSite173);

SoHAnimJoint162->addChildren(*SoHAnimSegment163);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint174->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint174->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment175 = new SoHAnimSegment();
SoHAnimSegment175->setDEF(QString("hanim_l_eyeball"));
SoHAnimSegment175->X3DNode::setName(QString("l_eyeball"));
SoHAnimSite* SoHAnimSite176 = new SoHAnimSite();
SoHAnimSite176->setDEF(QString("hanim_l_eyeball_site_view"));
SoHAnimSite176->X3DNode::setName(QString("l_eyeball_site_view"));
SoHAnimSite176->setTranslation(new float[]{0.034,1.64,0.05});
SoViewpoint* SoViewpoint177 = new SoViewpoint();
SoViewpoint177->setDEF(QString("hanim_l_eyeball_site_viewpoint"));
SoViewpoint177->setDescription(QString("l_eyeball_site_viewpoint looking forward"));
SoViewpoint177->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint177->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite176->addChild(*SoViewpoint177);

SoHAnimSegment175->addChild(*SoHAnimSite176);

SoHAnimJoint174->addChildren(*SoHAnimSegment175);

SoHAnimJoint162->addChildren(*SoHAnimJoint174);

SoHAnimJoint* SoHAnimJoint178 = new SoHAnimJoint();
SoHAnimJoint178->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint178->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint178->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment179 = new SoHAnimSegment();
SoHAnimSegment179->setDEF(QString("hanim_l_eyelid"));
SoHAnimSegment179->X3DNode::setName(QString("l_eyelid"));
SoHAnimJoint178->addChildren(*SoHAnimSegment179);

SoHAnimJoint162->addChildren(*SoHAnimJoint178);

SoHAnimJoint* SoHAnimJoint180 = new SoHAnimJoint();
SoHAnimJoint180->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint180->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint180->setCenter(new float[]{0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment181 = new SoHAnimSegment();
SoHAnimSegment181->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSegment181->X3DNode::setName(QString("l_eyebrow"));
SoHAnimJoint180->addChildren(*SoHAnimSegment181);

SoHAnimJoint162->addChildren(*SoHAnimJoint180);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint182->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint182->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment183 = new SoHAnimSegment();
SoHAnimSegment183->setDEF(QString("hanim_r_eyeball"));
SoHAnimSegment183->X3DNode::setName(QString("r_eyeball"));
SoHAnimSite* SoHAnimSite184 = new SoHAnimSite();
SoHAnimSite184->setDEF(QString("hanim_r_eyeball_site_view"));
SoHAnimSite184->X3DNode::setName(QString("r_eyeball_site_view"));
SoHAnimSite184->setTranslation(new float[]{-0.034,1.64,0.05});
SoViewpoint* SoViewpoint185 = new SoViewpoint();
SoViewpoint185->setDEF(QString("hanim_r_eyeball_site_viewpoint"));
SoViewpoint185->setDescription(QString("r_eyeball_site_viewpoint looking forward"));
SoViewpoint185->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint185->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite184->addChild(*SoViewpoint185);

SoHAnimSegment183->addChild(*SoHAnimSite184);

SoHAnimJoint182->addChildren(*SoHAnimSegment183);

SoHAnimJoint162->addChildren(*SoHAnimJoint182);

SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint186->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint186->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment187 = new SoHAnimSegment();
SoHAnimSegment187->setDEF(QString("hanim_r_eyelid"));
SoHAnimSegment187->X3DNode::setName(QString("r_eyelid"));
SoHAnimJoint186->addChildren(*SoHAnimSegment187);

SoHAnimJoint162->addChildren(*SoHAnimJoint186);

SoHAnimJoint* SoHAnimJoint188 = new SoHAnimJoint();
SoHAnimJoint188->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint188->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint188->setCenter(new float[]{-0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment189 = new SoHAnimSegment();
SoHAnimSegment189->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSegment189->X3DNode::setName(QString("r_eyebrow"));
SoHAnimJoint188->addChildren(*SoHAnimSegment189);

SoHAnimJoint162->addChildren(*SoHAnimJoint188);

SoHAnimJoint* SoHAnimJoint190 = new SoHAnimJoint();
SoHAnimJoint190->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint190->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint190->setCenter(new float[]{0.0,1.63,0.015});
SoHAnimSegment* SoHAnimSegment191 = new SoHAnimSegment();
SoHAnimSegment191->setDEF(QString("hanim_jaw"));
SoHAnimSegment191->X3DNode::setName(QString("jaw"));
SoHAnimSite* SoHAnimSite192 = new SoHAnimSite();
SoHAnimSite192->setDEF(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimSite192->X3DNode::setName(QString("temporomandibular_l_site_pt"));
SoHAnimSite192->setTranslation(new float[]{0.045,1.63,0.0});
SoHAnimSegment191->addChild(*SoHAnimSite192);

SoHAnimSite* SoHAnimSite193 = new SoHAnimSite();
SoHAnimSite193->setDEF(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimSite193->X3DNode::setName(QString("temporomandibular_r_site_pt"));
SoHAnimSite193->setTranslation(new float[]{-0.045,1.63,0.0});
SoHAnimSegment191->addChild(*SoHAnimSite193);

SoHAnimJoint190->addChildren(*SoHAnimSegment191);

SoHAnimJoint162->addChildren(*SoHAnimJoint190);

SoHAnimJoint160->addChildren(*SoHAnimJoint162);

SoHAnimJoint158->addChildren(*SoHAnimJoint160);

SoHAnimJoint156->addChildren(*SoHAnimJoint158);

SoHAnimJoint154->addChildren(*SoHAnimJoint156);

SoHAnimJoint152->addChildren(*SoHAnimJoint154);

SoHAnimJoint150->addChildren(*SoHAnimJoint152);

SoHAnimJoint146->addChildren(*SoHAnimJoint150);

SoHAnimJoint142->addChildren(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint194->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint194->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment195 = new SoHAnimSegment();
SoHAnimSegment195->setDEF(QString("hanim_l_clavicle"));
SoHAnimSegment195->X3DNode::setName(QString("l_clavicle"));
SoHAnimSite* SoHAnimSite196 = new SoHAnimSite();
SoHAnimSite196->setDEF(QString("hanim_l_clavicale_pt"));
SoHAnimSite196->X3DNode::setName(QString("l_clavicale_pt"));
SoHAnimSite196->setTranslation(new float[]{0.0271,1.4943,0.0394});
SoHAnimSegment195->addChild(*SoHAnimSite196);

SoHAnimSite* SoHAnimSite197 = new SoHAnimSite();
SoHAnimSite197->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite197->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite197->setTranslation(new float[]{0.2032,1.476,-0.049});
SoHAnimSegment195->addChild(*SoHAnimSite197);

SoHAnimSite* SoHAnimSite198 = new SoHAnimSite();
SoHAnimSite198->setDEF(QString("hanim_l_axilla_ant_pt"));
SoHAnimSite198->X3DNode::setName(QString("l_axilla_ant_pt"));
SoHAnimSite198->setTranslation(new float[]{0.1777,1.4065,-0.0075});
SoHAnimSegment195->addChild(*SoHAnimSite198);

SoHAnimSite* SoHAnimSite199 = new SoHAnimSite();
SoHAnimSite199->setDEF(QString("hanim_l_axilla_post_pt"));
SoHAnimSite199->X3DNode::setName(QString("l_axilla_post_pt"));
SoHAnimSite199->setTranslation(new float[]{0.1706,1.4072,-0.0875});
SoHAnimSegment195->addChild(*SoHAnimSite199);

SoHAnimJoint194->addChildren(*SoHAnimSegment195);

SoHAnimJoint* SoHAnimJoint200 = new SoHAnimJoint();
SoHAnimJoint200->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint200->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint200->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment201 = new SoHAnimSegment();
SoHAnimSegment201->setDEF(QString("hanim_l_scapula"));
SoHAnimSegment201->X3DNode::setName(QString("l_scapula"));
SoHAnimJoint200->addChildren(*SoHAnimSegment201);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint202->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint202->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment203 = new SoHAnimSegment();
SoHAnimSegment203->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment203->X3DNode::setName(QString("l_upperarm"));
SoHAnimSite* SoHAnimSite204 = new SoHAnimSite();
SoHAnimSite204->setDEF(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimSite204->X3DNode::setName(QString("l_humeral_lateral_epicn_pt"));
SoHAnimSite204->setTranslation(new float[]{0.228,1.1482,-0.11});
SoHAnimSegment203->addChild(*SoHAnimSite204);

SoHAnimJoint202->addChildren(*SoHAnimSegment203);

SoHAnimJoint* SoHAnimJoint205 = new SoHAnimJoint();
SoHAnimJoint205->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint205->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint205->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment206 = new SoHAnimSegment();
SoHAnimSegment206->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment206->X3DNode::setName(QString("l_forearm"));
SoHAnimSite* SoHAnimSite207 = new SoHAnimSite();
SoHAnimSite207->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite207->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite207->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoHAnimSegment206->addChild(*SoHAnimSite207);

SoHAnimSite* SoHAnimSite208 = new SoHAnimSite();
SoHAnimSite208->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite208->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite208->setTranslation(new float[]{0.1962,1.1375,-0.1123});
SoHAnimSegment206->addChild(*SoHAnimSite208);

SoHAnimSite* SoHAnimSite209 = new SoHAnimSite();
SoHAnimSite209->setDEF(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimSite209->X3DNode::setName(QString("l_humeral_medial_epicn_pt"));
SoHAnimSite209->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoHAnimSegment206->addChild(*SoHAnimSite209);

SoHAnimSite* SoHAnimSite210 = new SoHAnimSite();
SoHAnimSite210->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite210->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite210->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoHAnimSegment206->addChild(*SoHAnimSite210);

SoHAnimJoint205->addChildren(*SoHAnimSegment206);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->setDEF(QString("hanim_l_wrist"));
SoHAnimJoint211->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint211->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment212 = new SoHAnimSegment();
SoHAnimSegment212->setDEF(QString("hanim_l_hand"));
SoHAnimSegment212->X3DNode::setName(QString("l_hand"));
SoHAnimSite* SoHAnimSite213 = new SoHAnimSite();
SoHAnimSite213->setDEF(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimSite213->X3DNode::setName(QString("l_metacarpal_pha2_pt"));
SoHAnimSite213->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoHAnimSegment212->addChild(*SoHAnimSite213);

SoHAnimSite* SoHAnimSite214 = new SoHAnimSite();
SoHAnimSite214->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite214->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite214->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoHAnimSegment212->addChild(*SoHAnimSite214);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->setDEF(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimSite215->X3DNode::setName(QString("l_metacarpal_pha5_pt"));
SoHAnimSite215->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoHAnimSegment212->addChild(*SoHAnimSite215);

SoHAnimSite* SoHAnimSite216 = new SoHAnimSite();
SoHAnimSite216->setDEF(QString("hanim_l_hand_front_view"));
SoHAnimSite216->X3DNode::setName(QString("l_hand_front_view"));
SoHAnimSite216->setTranslation(new float[]{0.3,0.75,0.45});
SoViewpoint* SoViewpoint217 = new SoViewpoint();
SoViewpoint217->setDEF(QString("hanim_l_hand_front_viewpoint"));
SoViewpoint217->setDescription(QString("left hand front"));
SoViewpoint217->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint217->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite216->addChild(*SoViewpoint217);

SoHAnimSegment212->addChild(*SoHAnimSite216);

SoHAnimJoint211->addChildren(*SoHAnimSegment212);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setDEF(QString("hanim_l_thumb1"));
SoHAnimJoint218->X3DNode::setName(QString("l_thumb1"));
SoHAnimJoint218->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment219 = new SoHAnimSegment();
SoHAnimSegment219->setDEF(QString("hanim_l_thumb_metacarpal"));
SoHAnimSegment219->X3DNode::setName(QString("l_thumb_metacarpal"));
SoHAnimJoint218->addChildren(*SoHAnimSegment219);

SoHAnimJoint* SoHAnimJoint220 = new SoHAnimJoint();
SoHAnimJoint220->setDEF(QString("hanim_l_thumb2"));
SoHAnimJoint220->X3DNode::setName(QString("l_thumb2"));
SoHAnimJoint220->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment221 = new SoHAnimSegment();
SoHAnimSegment221->setDEF(QString("hanim_l_thumb_proximal"));
SoHAnimSegment221->X3DNode::setName(QString("l_thumb_proximal"));
SoHAnimJoint220->addChildren(*SoHAnimSegment221);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setDEF(QString("hanim_l_thumb3"));
SoHAnimJoint222->X3DNode::setName(QString("l_thumb3"));
SoHAnimJoint222->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment223 = new SoHAnimSegment();
SoHAnimSegment223->setDEF(QString("hanim_l_thumb_distal"));
SoHAnimSegment223->X3DNode::setName(QString("l_thumb_distal"));
SoHAnimSite* SoHAnimSite224 = new SoHAnimSite();
SoHAnimSite224->setDEF(QString("hanim_l_thumb_distal_tip"));
SoHAnimSite224->X3DNode::setName(QString("l_thumb_distal_tip"));
SoHAnimSite224->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoHAnimSegment223->addChild(*SoHAnimSite224);

SoHAnimJoint222->addChildren(*SoHAnimSegment223);

SoHAnimJoint220->addChildren(*SoHAnimJoint222);

SoHAnimJoint218->addChildren(*SoHAnimJoint220);

SoHAnimJoint211->addChildren(*SoHAnimJoint218);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setDEF(QString("hanim_l_index0"));
SoHAnimJoint225->X3DNode::setName(QString("l_index0"));
SoHAnimJoint225->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment226 = new SoHAnimSegment();
SoHAnimSegment226->setDEF(QString("hanim_l_index_metacarpal"));
SoHAnimSegment226->X3DNode::setName(QString("l_index_metacarpal"));
SoHAnimJoint225->addChildren(*SoHAnimSegment226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setDEF(QString("hanim_l_index1"));
SoHAnimJoint227->X3DNode::setName(QString("l_index1"));
SoHAnimJoint227->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment228 = new SoHAnimSegment();
SoHAnimSegment228->setDEF(QString("hanim_l_index_proximal"));
SoHAnimSegment228->X3DNode::setName(QString("l_index_proximal"));
SoHAnimJoint227->addChildren(*SoHAnimSegment228);

SoHAnimJoint* SoHAnimJoint229 = new SoHAnimJoint();
SoHAnimJoint229->setDEF(QString("hanim_l_index2"));
SoHAnimJoint229->X3DNode::setName(QString("l_index2"));
SoHAnimJoint229->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment230 = new SoHAnimSegment();
SoHAnimSegment230->setDEF(QString("hanim_l_index_middle"));
SoHAnimSegment230->X3DNode::setName(QString("l_index_middle"));
SoHAnimJoint229->addChildren(*SoHAnimSegment230);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->setDEF(QString("hanim_l_index3"));
SoHAnimJoint231->X3DNode::setName(QString("l_index3"));
SoHAnimJoint231->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->setDEF(QString("hanim_l_index_distal"));
SoHAnimSegment232->X3DNode::setName(QString("l_index_distal"));
SoHAnimSite* SoHAnimSite233 = new SoHAnimSite();
SoHAnimSite233->setDEF(QString("hanim_l_index_distal_tip"));
SoHAnimSite233->X3DNode::setName(QString("l_index_distal_tip"));
SoHAnimSite233->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoHAnimSegment232->addChild(*SoHAnimSite233);

SoHAnimSite* SoHAnimSite234 = new SoHAnimSite();
SoHAnimSite234->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite234->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite234->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoHAnimSegment232->addChild(*SoHAnimSite234);

SoHAnimJoint231->addChildren(*SoHAnimSegment232);

SoHAnimJoint229->addChildren(*SoHAnimJoint231);

SoHAnimJoint227->addChildren(*SoHAnimJoint229);

SoHAnimJoint225->addChildren(*SoHAnimJoint227);

SoHAnimJoint211->addChildren(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint235 = new SoHAnimJoint();
SoHAnimJoint235->setDEF(QString("hanim_l_middle0"));
SoHAnimJoint235->X3DNode::setName(QString("l_middle0"));
SoHAnimJoint235->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment236 = new SoHAnimSegment();
SoHAnimSegment236->setDEF(QString("hanim_l_middle_metacarpal"));
SoHAnimSegment236->X3DNode::setName(QString("l_middle_metacarpal"));
SoHAnimJoint235->addChildren(*SoHAnimSegment236);

SoHAnimJoint* SoHAnimJoint237 = new SoHAnimJoint();
SoHAnimJoint237->setDEF(QString("hanim_l_middle1"));
SoHAnimJoint237->X3DNode::setName(QString("l_middle1"));
SoHAnimJoint237->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment238 = new SoHAnimSegment();
SoHAnimSegment238->setDEF(QString("hanim_l_middle_proximal"));
SoHAnimSegment238->X3DNode::setName(QString("l_middle_proximal"));
SoHAnimJoint237->addChildren(*SoHAnimSegment238);

SoHAnimJoint* SoHAnimJoint239 = new SoHAnimJoint();
SoHAnimJoint239->setDEF(QString("hanim_l_middle2"));
SoHAnimJoint239->X3DNode::setName(QString("l_middle2"));
SoHAnimJoint239->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment240 = new SoHAnimSegment();
SoHAnimSegment240->setDEF(QString("hanim_l_middle_middle"));
SoHAnimSegment240->X3DNode::setName(QString("l_middle_middle"));
SoHAnimJoint239->addChildren(*SoHAnimSegment240);

SoHAnimJoint* SoHAnimJoint241 = new SoHAnimJoint();
SoHAnimJoint241->setDEF(QString("hanim_l_middle3"));
SoHAnimJoint241->X3DNode::setName(QString("l_middle3"));
SoHAnimJoint241->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment242 = new SoHAnimSegment();
SoHAnimSegment242->setDEF(QString("hanim_l_middle_distal"));
SoHAnimSegment242->X3DNode::setName(QString("l_middle_distal"));
SoHAnimSite* SoHAnimSite243 = new SoHAnimSite();
SoHAnimSite243->setDEF(QString("hanim_l_middle_distal_tip"));
SoHAnimSite243->X3DNode::setName(QString("l_middle_distal_tip"));
SoHAnimSite243->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoHAnimSegment242->addChild(*SoHAnimSite243);

SoHAnimJoint241->addChildren(*SoHAnimSegment242);

SoHAnimJoint239->addChildren(*SoHAnimJoint241);

SoHAnimJoint237->addChildren(*SoHAnimJoint239);

SoHAnimJoint235->addChildren(*SoHAnimJoint237);

SoHAnimJoint211->addChildren(*SoHAnimJoint235);

SoHAnimJoint* SoHAnimJoint244 = new SoHAnimJoint();
SoHAnimJoint244->setDEF(QString("hanim_l_ring0"));
SoHAnimJoint244->X3DNode::setName(QString("l_ring0"));
SoHAnimJoint244->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment245 = new SoHAnimSegment();
SoHAnimSegment245->setDEF(QString("hanim_l_ring_metacarpal"));
SoHAnimSegment245->X3DNode::setName(QString("l_ring_metacarpal"));
SoHAnimJoint244->addChildren(*SoHAnimSegment245);

SoHAnimJoint* SoHAnimJoint246 = new SoHAnimJoint();
SoHAnimJoint246->setDEF(QString("hanim_l_ring1"));
SoHAnimJoint246->X3DNode::setName(QString("l_ring1"));
SoHAnimJoint246->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment247 = new SoHAnimSegment();
SoHAnimSegment247->setDEF(QString("hanim_l_ring_proximal"));
SoHAnimSegment247->X3DNode::setName(QString("l_ring_proximal"));
SoHAnimJoint246->addChildren(*SoHAnimSegment247);

SoHAnimJoint* SoHAnimJoint248 = new SoHAnimJoint();
SoHAnimJoint248->setDEF(QString("hanim_l_ring2"));
SoHAnimJoint248->X3DNode::setName(QString("l_ring2"));
SoHAnimJoint248->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment249 = new SoHAnimSegment();
SoHAnimSegment249->setDEF(QString("hanim_l_ring_middle"));
SoHAnimSegment249->X3DNode::setName(QString("l_ring_middle"));
SoHAnimJoint248->addChildren(*SoHAnimSegment249);

SoHAnimJoint* SoHAnimJoint250 = new SoHAnimJoint();
SoHAnimJoint250->setDEF(QString("hanim_l_ring3"));
SoHAnimJoint250->X3DNode::setName(QString("l_ring3"));
SoHAnimJoint250->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment251 = new SoHAnimSegment();
SoHAnimSegment251->setDEF(QString("hanim_l_ring_distal"));
SoHAnimSegment251->X3DNode::setName(QString("l_ring_distal"));
SoHAnimSite* SoHAnimSite252 = new SoHAnimSite();
SoHAnimSite252->setDEF(QString("hanim_l_ring_distal_tip"));
SoHAnimSite252->X3DNode::setName(QString("l_ring_distal_tip"));
SoHAnimSite252->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoHAnimSegment251->addChild(*SoHAnimSite252);

SoHAnimJoint250->addChildren(*SoHAnimSegment251);

SoHAnimJoint248->addChildren(*SoHAnimJoint250);

SoHAnimJoint246->addChildren(*SoHAnimJoint248);

SoHAnimJoint244->addChildren(*SoHAnimJoint246);

SoHAnimJoint211->addChildren(*SoHAnimJoint244);

SoHAnimJoint* SoHAnimJoint253 = new SoHAnimJoint();
SoHAnimJoint253->setDEF(QString("hanim_l_pinky0"));
SoHAnimJoint253->X3DNode::setName(QString("l_pinky0"));
SoHAnimJoint253->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment254 = new SoHAnimSegment();
SoHAnimSegment254->setDEF(QString("hanim_l_pinky_metacarpal"));
SoHAnimSegment254->X3DNode::setName(QString("l_pinky_metacarpal"));
SoHAnimJoint253->addChildren(*SoHAnimSegment254);

SoHAnimJoint* SoHAnimJoint255 = new SoHAnimJoint();
SoHAnimJoint255->setDEF(QString("hanim_l_pinky1"));
SoHAnimJoint255->X3DNode::setName(QString("l_pinky1"));
SoHAnimJoint255->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment256 = new SoHAnimSegment();
SoHAnimSegment256->setDEF(QString("hanim_l_pinky_proximal"));
SoHAnimSegment256->X3DNode::setName(QString("l_pinky_proximal"));
SoHAnimJoint255->addChildren(*SoHAnimSegment256);

SoHAnimJoint* SoHAnimJoint257 = new SoHAnimJoint();
SoHAnimJoint257->setDEF(QString("hanim_l_pinky2"));
SoHAnimJoint257->X3DNode::setName(QString("l_pinky2"));
SoHAnimJoint257->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment258 = new SoHAnimSegment();
SoHAnimSegment258->setDEF(QString("hanim_l_pinky_middle"));
SoHAnimSegment258->X3DNode::setName(QString("l_pinky_middle"));
SoHAnimJoint257->addChildren(*SoHAnimSegment258);

SoHAnimJoint* SoHAnimJoint259 = new SoHAnimJoint();
SoHAnimJoint259->setDEF(QString("hanim_l_pinky3"));
SoHAnimJoint259->X3DNode::setName(QString("l_pinky3"));
SoHAnimJoint259->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment260 = new SoHAnimSegment();
SoHAnimSegment260->setDEF(QString("hanim_l_pinky_distal"));
SoHAnimSegment260->X3DNode::setName(QString("l_pinky_distal"));
SoHAnimSite* SoHAnimSite261 = new SoHAnimSite();
SoHAnimSite261->setDEF(QString("hanim_l_pinky_distal_tip"));
SoHAnimSite261->X3DNode::setName(QString("l_pinky_distal_tip"));
SoHAnimSite261->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoHAnimSegment260->addChild(*SoHAnimSite261);

SoHAnimJoint259->addChildren(*SoHAnimSegment260);

SoHAnimJoint257->addChildren(*SoHAnimJoint259);

SoHAnimJoint255->addChildren(*SoHAnimJoint257);

SoHAnimJoint253->addChildren(*SoHAnimJoint255);

SoHAnimJoint211->addChildren(*SoHAnimJoint253);

SoHAnimJoint205->addChildren(*SoHAnimJoint211);

SoHAnimJoint202->addChildren(*SoHAnimJoint205);

SoHAnimJoint200->addChildren(*SoHAnimJoint202);

SoHAnimJoint194->addChildren(*SoHAnimJoint200);

SoHAnimJoint142->addChildren(*SoHAnimJoint194);

SoHAnimJoint* SoHAnimJoint262 = new SoHAnimJoint();
SoHAnimJoint262->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint262->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint262->setCenter(new float[]{-0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment263 = new SoHAnimSegment();
SoHAnimSegment263->setDEF(QString("hanim_r_clavicle"));
SoHAnimSegment263->X3DNode::setName(QString("r_clavicle"));
SoHAnimSite* SoHAnimSite264 = new SoHAnimSite();
SoHAnimSite264->setDEF(QString("hanim_r_clavicale_pt"));
SoHAnimSite264->X3DNode::setName(QString("r_clavicale_pt"));
SoHAnimSite264->setTranslation(new float[]{-0.0115,1.4943,0.04});
SoHAnimSegment263->addChild(*SoHAnimSite264);

SoHAnimSite* SoHAnimSite265 = new SoHAnimSite();
SoHAnimSite265->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite265->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite265->setTranslation(new float[]{-0.1905,1.4791,-0.0431});
SoHAnimSegment263->addChild(*SoHAnimSite265);

SoHAnimSite* SoHAnimSite266 = new SoHAnimSite();
SoHAnimSite266->setDEF(QString("hanim_r_axilla_ant_pt"));
SoHAnimSite266->X3DNode::setName(QString("r_axilla_ant_pt"));
SoHAnimSite266->setTranslation(new float[]{-0.1626,1.4072,-0.0031});
SoHAnimSegment263->addChild(*SoHAnimSite266);

SoHAnimSite* SoHAnimSite267 = new SoHAnimSite();
SoHAnimSite267->setDEF(QString("hanim_r_axilla_post_pt"));
SoHAnimSite267->X3DNode::setName(QString("r_axilla_post_pt"));
SoHAnimSite267->setTranslation(new float[]{-0.1603,1.4098,-0.0826});
SoHAnimSegment263->addChild(*SoHAnimSite267);

SoHAnimJoint262->addChildren(*SoHAnimSegment263);

SoHAnimJoint* SoHAnimJoint268 = new SoHAnimJoint();
SoHAnimJoint268->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint268->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint268->setCenter(new float[]{-0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment269 = new SoHAnimSegment();
SoHAnimSegment269->setDEF(QString("hanim_r_scapula"));
SoHAnimSegment269->X3DNode::setName(QString("r_scapula"));
SoHAnimJoint268->addChildren(*SoHAnimSegment269);

SoHAnimJoint* SoHAnimJoint270 = new SoHAnimJoint();
SoHAnimJoint270->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint270->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint270->setCenter(new float[]{-0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment271 = new SoHAnimSegment();
SoHAnimSegment271->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment271->X3DNode::setName(QString("r_upperarm"));
SoHAnimSite* SoHAnimSite272 = new SoHAnimSite();
SoHAnimSite272->setDEF(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimSite272->X3DNode::setName(QString("r_humeral_lateral_epicn_pt"));
SoHAnimSite272->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoHAnimSegment271->addChild(*SoHAnimSite272);

SoHAnimJoint270->addChildren(*SoHAnimSegment271);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint273->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint273->setCenter(new float[]{-0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment274 = new SoHAnimSegment();
SoHAnimSegment274->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment274->X3DNode::setName(QString("r_forearm"));
SoHAnimSite* SoHAnimSite275 = new SoHAnimSite();
SoHAnimSite275->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite275->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite275->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoHAnimSegment274->addChild(*SoHAnimSite275);

SoHAnimSite* SoHAnimSite276 = new SoHAnimSite();
SoHAnimSite276->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite276->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite276->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoHAnimSegment274->addChild(*SoHAnimSite276);

SoHAnimSite* SoHAnimSite277 = new SoHAnimSite();
SoHAnimSite277->setDEF(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimSite277->X3DNode::setName(QString("r_humeral_medial_epicn_pt"));
SoHAnimSite277->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoHAnimSegment274->addChild(*SoHAnimSite277);

SoHAnimSite* SoHAnimSite278 = new SoHAnimSite();
SoHAnimSite278->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite278->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite278->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoHAnimSegment274->addChild(*SoHAnimSite278);

SoHAnimJoint273->addChildren(*SoHAnimSegment274);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->setDEF(QString("hanim_r_wrist"));
SoHAnimJoint279->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint279->setCenter(new float[]{-0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment280 = new SoHAnimSegment();
SoHAnimSegment280->setDEF(QString("hanim_r_hand"));
SoHAnimSegment280->X3DNode::setName(QString("r_hand"));
SoHAnimSite* SoHAnimSite281 = new SoHAnimSite();
SoHAnimSite281->setDEF(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimSite281->X3DNode::setName(QString("r_metacarpal_pha2_pt"));
SoHAnimSite281->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoHAnimSegment280->addChild(*SoHAnimSite281);

SoHAnimSite* SoHAnimSite282 = new SoHAnimSite();
SoHAnimSite282->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite282->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite282->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoHAnimSegment280->addChild(*SoHAnimSite282);

SoHAnimSite* SoHAnimSite283 = new SoHAnimSite();
SoHAnimSite283->setDEF(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimSite283->X3DNode::setName(QString("r_metacarpal_pha5_pt"));
SoHAnimSite283->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoHAnimSegment280->addChild(*SoHAnimSite283);

SoHAnimSite* SoHAnimSite284 = new SoHAnimSite();
SoHAnimSite284->setDEF(QString("hanim_r_hand_front_view"));
SoHAnimSite284->X3DNode::setName(QString("r_hand_front_view"));
SoHAnimSite284->setTranslation(new float[]{-0.3,0.75,0.45});
SoViewpoint* SoViewpoint285 = new SoViewpoint();
SoViewpoint285->setDEF(QString("hanim_r_hand_front_viewpoint"));
SoViewpoint285->setDescription(QString("right hand front"));
SoViewpoint285->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint285->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite284->addChild(*SoViewpoint285);

SoHAnimSegment280->addChild(*SoHAnimSite284);

SoHAnimJoint279->addChildren(*SoHAnimSegment280);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setDEF(QString("hanim_r_thumb1"));
SoHAnimJoint286->X3DNode::setName(QString("r_thumb1"));
SoHAnimJoint286->setCenter(new float[]{-0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment287 = new SoHAnimSegment();
SoHAnimSegment287->setDEF(QString("hanim_r_thumb_metacarpal"));
SoHAnimSegment287->X3DNode::setName(QString("r_thumb_metacarpal"));
SoHAnimJoint286->addChildren(*SoHAnimSegment287);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setDEF(QString("hanim_r_thumb2"));
SoHAnimJoint288->X3DNode::setName(QString("r_thumb2"));
SoHAnimJoint288->setCenter(new float[]{-0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment289 = new SoHAnimSegment();
SoHAnimSegment289->setDEF(QString("hanim_r_thumb_proximal"));
SoHAnimSegment289->X3DNode::setName(QString("r_thumb_proximal"));
SoHAnimJoint288->addChildren(*SoHAnimSegment289);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->setDEF(QString("hanim_r_thumb3"));
SoHAnimJoint290->X3DNode::setName(QString("r_thumb3"));
SoHAnimJoint290->setCenter(new float[]{-0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment291 = new SoHAnimSegment();
SoHAnimSegment291->setDEF(QString("hanim_r_thumb_distal"));
SoHAnimSegment291->X3DNode::setName(QString("r_thumb_distal"));
SoHAnimSite* SoHAnimSite292 = new SoHAnimSite();
SoHAnimSite292->setDEF(QString("hanim_r_thumb_distal_tip"));
SoHAnimSite292->X3DNode::setName(QString("r_thumb_distal_tip"));
SoHAnimSite292->setTranslation(new float[]{-0.1869,0.809,0.082});
SoHAnimSegment291->addChild(*SoHAnimSite292);

SoHAnimJoint290->addChildren(*SoHAnimSegment291);

SoHAnimJoint288->addChildren(*SoHAnimJoint290);

SoHAnimJoint286->addChildren(*SoHAnimJoint288);

SoHAnimJoint279->addChildren(*SoHAnimJoint286);

SoHAnimJoint* SoHAnimJoint293 = new SoHAnimJoint();
SoHAnimJoint293->setDEF(QString("hanim_r_index0"));
SoHAnimJoint293->X3DNode::setName(QString("r_index0"));
SoHAnimJoint293->setCenter(new float[]{-0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment294 = new SoHAnimSegment();
SoHAnimSegment294->setDEF(QString("hanim_r_index_metacarpal"));
SoHAnimSegment294->X3DNode::setName(QString("r_index_metacarpal"));
SoHAnimJoint293->addChildren(*SoHAnimSegment294);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setDEF(QString("hanim_r_index1"));
SoHAnimJoint295->X3DNode::setName(QString("r_index1"));
SoHAnimJoint295->setCenter(new float[]{-0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment296 = new SoHAnimSegment();
SoHAnimSegment296->setDEF(QString("hanim_r_index_proximal"));
SoHAnimSegment296->X3DNode::setName(QString("r_index_proximal"));
SoHAnimJoint295->addChildren(*SoHAnimSegment296);

SoHAnimJoint* SoHAnimJoint297 = new SoHAnimJoint();
SoHAnimJoint297->setDEF(QString("hanim_r_index2"));
SoHAnimJoint297->X3DNode::setName(QString("r_index2"));
SoHAnimJoint297->setCenter(new float[]{-0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment298 = new SoHAnimSegment();
SoHAnimSegment298->setDEF(QString("hanim_r_index_middle"));
SoHAnimSegment298->X3DNode::setName(QString("r_index_middle"));
SoHAnimJoint297->addChildren(*SoHAnimSegment298);

SoHAnimJoint* SoHAnimJoint299 = new SoHAnimJoint();
SoHAnimJoint299->setDEF(QString("hanim_r_index3"));
SoHAnimJoint299->X3DNode::setName(QString("r_index3"));
SoHAnimJoint299->setCenter(new float[]{-0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment300 = new SoHAnimSegment();
SoHAnimSegment300->setDEF(QString("hanim_r_index_distal"));
SoHAnimSegment300->X3DNode::setName(QString("r_index_distal"));
SoHAnimSite* SoHAnimSite301 = new SoHAnimSite();
SoHAnimSite301->setDEF(QString("hanim_r_index_distal_tip"));
SoHAnimSite301->X3DNode::setName(QString("r_index_distal_tip"));
SoHAnimSite301->setTranslation(new float[]{-0.198,0.6883,-0.018});
SoHAnimSegment300->addChild(*SoHAnimSite301);

SoHAnimSite* SoHAnimSite302 = new SoHAnimSite();
SoHAnimSite302->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite302->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite302->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoHAnimSegment300->addChild(*SoHAnimSite302);

SoHAnimJoint299->addChildren(*SoHAnimSegment300);

SoHAnimJoint297->addChildren(*SoHAnimJoint299);

SoHAnimJoint295->addChildren(*SoHAnimJoint297);

SoHAnimJoint293->addChildren(*SoHAnimJoint295);

SoHAnimJoint279->addChildren(*SoHAnimJoint293);

SoHAnimJoint* SoHAnimJoint303 = new SoHAnimJoint();
SoHAnimJoint303->setDEF(QString("hanim_r_middle0"));
SoHAnimJoint303->X3DNode::setName(QString("r_middle0"));
SoHAnimJoint303->setCenter(new float[]{-0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment304 = new SoHAnimSegment();
SoHAnimSegment304->setDEF(QString("hanim_r_middle_metacarpal"));
SoHAnimSegment304->X3DNode::setName(QString("r_middle_metacarpal"));
SoHAnimJoint303->addChildren(*SoHAnimSegment304);

SoHAnimJoint* SoHAnimJoint305 = new SoHAnimJoint();
SoHAnimJoint305->setDEF(QString("hanim_r_middle1"));
SoHAnimJoint305->X3DNode::setName(QString("r_middle1"));
SoHAnimJoint305->setCenter(new float[]{-0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment306 = new SoHAnimSegment();
SoHAnimSegment306->setDEF(QString("hanim_r_middle_proximal"));
SoHAnimSegment306->X3DNode::setName(QString("r_middle_proximal"));
SoHAnimJoint305->addChildren(*SoHAnimSegment306);

SoHAnimJoint* SoHAnimJoint307 = new SoHAnimJoint();
SoHAnimJoint307->setDEF(QString("hanim_r_middle2"));
SoHAnimJoint307->X3DNode::setName(QString("r_middle2"));
SoHAnimJoint307->setCenter(new float[]{-0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment308 = new SoHAnimSegment();
SoHAnimSegment308->setDEF(QString("hanim_r_middle_middle"));
SoHAnimSegment308->X3DNode::setName(QString("r_middle_middle"));
SoHAnimJoint307->addChildren(*SoHAnimSegment308);

SoHAnimJoint* SoHAnimJoint309 = new SoHAnimJoint();
SoHAnimJoint309->setDEF(QString("hanim_r_middle3"));
SoHAnimJoint309->X3DNode::setName(QString("r_middle3"));
SoHAnimJoint309->setCenter(new float[]{-0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment310 = new SoHAnimSegment();
SoHAnimSegment310->setDEF(QString("hanim_r_middle_distal"));
SoHAnimSegment310->X3DNode::setName(QString("r_middle_distal"));
SoHAnimSite* SoHAnimSite311 = new SoHAnimSite();
SoHAnimSite311->setDEF(QString("hanim_r_middle_distal_tip"));
SoHAnimSite311->X3DNode::setName(QString("r_middle_distal_tip"));
SoHAnimSite311->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoHAnimSegment310->addChild(*SoHAnimSite311);

SoHAnimJoint309->addChildren(*SoHAnimSegment310);

SoHAnimJoint307->addChildren(*SoHAnimJoint309);

SoHAnimJoint305->addChildren(*SoHAnimJoint307);

SoHAnimJoint303->addChildren(*SoHAnimJoint305);

SoHAnimJoint279->addChildren(*SoHAnimJoint303);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setDEF(QString("hanim_r_ring0"));
SoHAnimJoint312->X3DNode::setName(QString("r_ring0"));
SoHAnimJoint312->setCenter(new float[]{-0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setDEF(QString("hanim_r_ring_metacarpal"));
SoHAnimSegment313->X3DNode::setName(QString("r_ring_metacarpal"));
SoHAnimJoint312->addChildren(*SoHAnimSegment313);

SoHAnimJoint* SoHAnimJoint314 = new SoHAnimJoint();
SoHAnimJoint314->setDEF(QString("hanim_r_ring1"));
SoHAnimJoint314->X3DNode::setName(QString("r_ring1"));
SoHAnimJoint314->setCenter(new float[]{-0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment315 = new SoHAnimSegment();
SoHAnimSegment315->setDEF(QString("hanim_r_ring_proximal"));
SoHAnimSegment315->X3DNode::setName(QString("r_ring_proximal"));
SoHAnimJoint314->addChildren(*SoHAnimSegment315);

SoHAnimJoint* SoHAnimJoint316 = new SoHAnimJoint();
SoHAnimJoint316->setDEF(QString("hanim_r_ring2"));
SoHAnimJoint316->X3DNode::setName(QString("r_ring2"));
SoHAnimJoint316->setCenter(new float[]{-0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment317 = new SoHAnimSegment();
SoHAnimSegment317->setDEF(QString("hanim_r_ring_middle"));
SoHAnimSegment317->X3DNode::setName(QString("r_ring_middle"));
SoHAnimJoint316->addChildren(*SoHAnimSegment317);

SoHAnimJoint* SoHAnimJoint318 = new SoHAnimJoint();
SoHAnimJoint318->setDEF(QString("hanim_r_ring3"));
SoHAnimJoint318->X3DNode::setName(QString("r_ring3"));
SoHAnimJoint318->setCenter(new float[]{-0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment319 = new SoHAnimSegment();
SoHAnimSegment319->setDEF(QString("hanim_r_ring_distal"));
SoHAnimSegment319->X3DNode::setName(QString("r_ring_distal"));
SoHAnimSite* SoHAnimSite320 = new SoHAnimSite();
SoHAnimSite320->setDEF(QString("hanim_r_ring_distal_tip"));
SoHAnimSite320->X3DNode::setName(QString("r_ring_distal_tip"));
SoHAnimSite320->setTranslation(new float[]{-0.1934,0.6778,-0.0693});
SoHAnimSegment319->addChild(*SoHAnimSite320);

SoHAnimJoint318->addChildren(*SoHAnimSegment319);

SoHAnimJoint316->addChildren(*SoHAnimJoint318);

SoHAnimJoint314->addChildren(*SoHAnimJoint316);

SoHAnimJoint312->addChildren(*SoHAnimJoint314);

SoHAnimJoint279->addChildren(*SoHAnimJoint312);

SoHAnimJoint* SoHAnimJoint321 = new SoHAnimJoint();
SoHAnimJoint321->setDEF(QString("hanim_r_pinky0"));
SoHAnimJoint321->X3DNode::setName(QString("r_pinky0"));
SoHAnimJoint321->setCenter(new float[]{-0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment322 = new SoHAnimSegment();
SoHAnimSegment322->setDEF(QString("hanim_r_pinky_metacarpal"));
SoHAnimSegment322->X3DNode::setName(QString("r_pinky_metacarpal"));
SoHAnimJoint321->addChildren(*SoHAnimSegment322);

SoHAnimJoint* SoHAnimJoint323 = new SoHAnimJoint();
SoHAnimJoint323->setDEF(QString("hanim_r_pinky1"));
SoHAnimJoint323->X3DNode::setName(QString("r_pinky1"));
SoHAnimJoint323->setCenter(new float[]{-0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment324 = new SoHAnimSegment();
SoHAnimSegment324->setDEF(QString("hanim_r_pinky_proximal"));
SoHAnimSegment324->X3DNode::setName(QString("r_pinky_proximal"));
SoHAnimJoint323->addChildren(*SoHAnimSegment324);

SoHAnimJoint* SoHAnimJoint325 = new SoHAnimJoint();
SoHAnimJoint325->setDEF(QString("hanim_r_pinky2"));
SoHAnimJoint325->X3DNode::setName(QString("r_pinky2"));
SoHAnimJoint325->setCenter(new float[]{-0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment326 = new SoHAnimSegment();
SoHAnimSegment326->setDEF(QString("hanim_r_pinky_middle"));
SoHAnimSegment326->X3DNode::setName(QString("r_pinky_middle"));
SoHAnimJoint325->addChildren(*SoHAnimSegment326);

SoHAnimJoint* SoHAnimJoint327 = new SoHAnimJoint();
SoHAnimJoint327->setDEF(QString("hanim_r_pinky3"));
SoHAnimJoint327->X3DNode::setName(QString("r_pinky3"));
SoHAnimJoint327->setCenter(new float[]{-0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment328 = new SoHAnimSegment();
SoHAnimSegment328->setDEF(QString("hanim_r_pinky_distal"));
SoHAnimSegment328->X3DNode::setName(QString("r_pinky_distal"));
SoHAnimSite* SoHAnimSite329 = new SoHAnimSite();
SoHAnimSite329->setDEF(QString("hanim_r_pinky_distal_tip"));
SoHAnimSite329->X3DNode::setName(QString("r_pinky_distal_tip"));
SoHAnimSite329->setTranslation(new float[]{-0.1938,0.7035,-0.0949});
SoHAnimSegment328->addChild(*SoHAnimSite329);

SoHAnimJoint327->addChildren(*SoHAnimSegment328);

SoHAnimJoint325->addChildren(*SoHAnimJoint327);

SoHAnimJoint323->addChildren(*SoHAnimJoint325);

SoHAnimJoint321->addChildren(*SoHAnimJoint323);

SoHAnimJoint279->addChildren(*SoHAnimJoint321);

SoHAnimJoint273->addChildren(*SoHAnimJoint279);

SoHAnimJoint270->addChildren(*SoHAnimJoint273);

SoHAnimJoint268->addChildren(*SoHAnimJoint270);

SoHAnimJoint262->addChildren(*SoHAnimJoint268);

SoHAnimJoint142->addChildren(*SoHAnimJoint262);

SoHAnimJoint140->addChildren(*SoHAnimJoint142);

SoHAnimJoint138->addChildren(*SoHAnimJoint140);

SoHAnimJoint136->addChildren(*SoHAnimJoint138);

SoHAnimJoint134->addChildren(*SoHAnimJoint136);

SoHAnimJoint132->addChildren(*SoHAnimJoint134);

SoHAnimJoint130->addChildren(*SoHAnimJoint132);

SoHAnimJoint128->addChildren(*SoHAnimJoint130);

SoHAnimJoint124->addChildren(*SoHAnimJoint128);

SoHAnimJoint121->addChildren(*SoHAnimJoint124);

SoHAnimJoint119->addChildren(*SoHAnimJoint121);

SoHAnimJoint117->addChildren(*SoHAnimJoint119);

SoHAnimJoint115->addChildren(*SoHAnimJoint117);

SoHAnimJoint110->addChildren(*SoHAnimJoint115);

SoHAnimJoint108->addChildren(*SoHAnimJoint110);

SoHAnimJoint106->addChildren(*SoHAnimJoint108);

SoHAnimJoint102->addChildren(*SoHAnimJoint106);

SoHAnimJoint43->addChildren(*SoHAnimJoint102);

SoHAnimHumanoid42->setSkeleton(*SoHAnimJoint43);

SoHAnimJoint* SoHAnimJoint330 = new SoHAnimJoint();
SoHAnimJoint330->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint330);

SoHAnimJoint* SoHAnimJoint331 = new SoHAnimJoint();
SoHAnimJoint331->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint331);

SoHAnimJoint* SoHAnimJoint332 = new SoHAnimJoint();
SoHAnimJoint332->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint332);

SoHAnimJoint* SoHAnimJoint333 = new SoHAnimJoint();
SoHAnimJoint333->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint333);

SoHAnimJoint* SoHAnimJoint334 = new SoHAnimJoint();
SoHAnimJoint334->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint334);

SoHAnimJoint* SoHAnimJoint335 = new SoHAnimJoint();
SoHAnimJoint335->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint335);

SoHAnimJoint* SoHAnimJoint336 = new SoHAnimJoint();
SoHAnimJoint336->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint336);

SoHAnimJoint* SoHAnimJoint337 = new SoHAnimJoint();
SoHAnimJoint337->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint337);

SoHAnimJoint* SoHAnimJoint338 = new SoHAnimJoint();
SoHAnimJoint338->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint338);

SoHAnimJoint* SoHAnimJoint339 = new SoHAnimJoint();
SoHAnimJoint339->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint339);

SoHAnimJoint* SoHAnimJoint340 = new SoHAnimJoint();
SoHAnimJoint340->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint340);

SoHAnimJoint* SoHAnimJoint341 = new SoHAnimJoint();
SoHAnimJoint341->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint341);

SoHAnimJoint* SoHAnimJoint342 = new SoHAnimJoint();
SoHAnimJoint342->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint342);

SoHAnimJoint* SoHAnimJoint343 = new SoHAnimJoint();
SoHAnimJoint343->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint343);

SoHAnimJoint* SoHAnimJoint344 = new SoHAnimJoint();
SoHAnimJoint344->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint344);

SoHAnimJoint* SoHAnimJoint345 = new SoHAnimJoint();
SoHAnimJoint345->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint345);

SoHAnimJoint* SoHAnimJoint346 = new SoHAnimJoint();
SoHAnimJoint346->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint346);

SoHAnimJoint* SoHAnimJoint347 = new SoHAnimJoint();
SoHAnimJoint347->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint347);

SoHAnimJoint* SoHAnimJoint348 = new SoHAnimJoint();
SoHAnimJoint348->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint348);

SoHAnimJoint* SoHAnimJoint349 = new SoHAnimJoint();
SoHAnimJoint349->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint349);

SoHAnimJoint* SoHAnimJoint350 = new SoHAnimJoint();
SoHAnimJoint350->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint350);

SoHAnimJoint* SoHAnimJoint351 = new SoHAnimJoint();
SoHAnimJoint351->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint351);

SoHAnimJoint* SoHAnimJoint352 = new SoHAnimJoint();
SoHAnimJoint352->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint352);

SoHAnimJoint* SoHAnimJoint353 = new SoHAnimJoint();
SoHAnimJoint353->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint353);

SoHAnimJoint* SoHAnimJoint354 = new SoHAnimJoint();
SoHAnimJoint354->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint354);

SoHAnimJoint* SoHAnimJoint355 = new SoHAnimJoint();
SoHAnimJoint355->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint355);

SoHAnimJoint* SoHAnimJoint356 = new SoHAnimJoint();
SoHAnimJoint356->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint356);

SoHAnimJoint* SoHAnimJoint357 = new SoHAnimJoint();
SoHAnimJoint357->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint357);

SoHAnimJoint* SoHAnimJoint358 = new SoHAnimJoint();
SoHAnimJoint358->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint358);

SoHAnimJoint* SoHAnimJoint359 = new SoHAnimJoint();
SoHAnimJoint359->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint359);

SoHAnimJoint* SoHAnimJoint360 = new SoHAnimJoint();
SoHAnimJoint360->setUSE(QString("hanim_l_ankle"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint360);

SoHAnimJoint* SoHAnimJoint361 = new SoHAnimJoint();
SoHAnimJoint361->setUSE(QString("hanim_r_ankle"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint361);

SoHAnimJoint* SoHAnimJoint362 = new SoHAnimJoint();
SoHAnimJoint362->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint362);

SoHAnimJoint* SoHAnimJoint363 = new SoHAnimJoint();
SoHAnimJoint363->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint363);

SoHAnimJoint* SoHAnimJoint364 = new SoHAnimJoint();
SoHAnimJoint364->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint364);

SoHAnimJoint* SoHAnimJoint365 = new SoHAnimJoint();
SoHAnimJoint365->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint365);

SoHAnimJoint* SoHAnimJoint366 = new SoHAnimJoint();
SoHAnimJoint366->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint366);

SoHAnimJoint* SoHAnimJoint367 = new SoHAnimJoint();
SoHAnimJoint367->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint367);

SoHAnimJoint* SoHAnimJoint368 = new SoHAnimJoint();
SoHAnimJoint368->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint368);

SoHAnimJoint* SoHAnimJoint369 = new SoHAnimJoint();
SoHAnimJoint369->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint369);

SoHAnimJoint* SoHAnimJoint370 = new SoHAnimJoint();
SoHAnimJoint370->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint370);

SoHAnimJoint* SoHAnimJoint371 = new SoHAnimJoint();
SoHAnimJoint371->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint371);

SoHAnimJoint* SoHAnimJoint372 = new SoHAnimJoint();
SoHAnimJoint372->setUSE(QString("hanim_l_index0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint372);

SoHAnimJoint* SoHAnimJoint373 = new SoHAnimJoint();
SoHAnimJoint373->setUSE(QString("hanim_r_index0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint373);

SoHAnimJoint* SoHAnimJoint374 = new SoHAnimJoint();
SoHAnimJoint374->setUSE(QString("hanim_l_index1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint374);

SoHAnimJoint* SoHAnimJoint375 = new SoHAnimJoint();
SoHAnimJoint375->setUSE(QString("hanim_r_index1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint375);

SoHAnimJoint* SoHAnimJoint376 = new SoHAnimJoint();
SoHAnimJoint376->setUSE(QString("hanim_l_index2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint376);

SoHAnimJoint* SoHAnimJoint377 = new SoHAnimJoint();
SoHAnimJoint377->setUSE(QString("hanim_r_index2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint377);

SoHAnimJoint* SoHAnimJoint378 = new SoHAnimJoint();
SoHAnimJoint378->setUSE(QString("hanim_l_index3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint378);

SoHAnimJoint* SoHAnimJoint379 = new SoHAnimJoint();
SoHAnimJoint379->setUSE(QString("hanim_r_index3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint379);

SoHAnimJoint* SoHAnimJoint380 = new SoHAnimJoint();
SoHAnimJoint380->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint380);

SoHAnimJoint* SoHAnimJoint381 = new SoHAnimJoint();
SoHAnimJoint381->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint381);

SoHAnimJoint* SoHAnimJoint382 = new SoHAnimJoint();
SoHAnimJoint382->setUSE(QString("hanim_l_metatarsal"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint382);

SoHAnimJoint* SoHAnimJoint383 = new SoHAnimJoint();
SoHAnimJoint383->setUSE(QString("hanim_r_metatarsal"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint383);

SoHAnimJoint* SoHAnimJoint384 = new SoHAnimJoint();
SoHAnimJoint384->setUSE(QString("hanim_l_middle0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint384);

SoHAnimJoint* SoHAnimJoint385 = new SoHAnimJoint();
SoHAnimJoint385->setUSE(QString("hanim_r_middle0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint385);

SoHAnimJoint* SoHAnimJoint386 = new SoHAnimJoint();
SoHAnimJoint386->setUSE(QString("hanim_l_middle1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint386);

SoHAnimJoint* SoHAnimJoint387 = new SoHAnimJoint();
SoHAnimJoint387->setUSE(QString("hanim_r_middle1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint387);

SoHAnimJoint* SoHAnimJoint388 = new SoHAnimJoint();
SoHAnimJoint388->setUSE(QString("hanim_l_middle2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint388);

SoHAnimJoint* SoHAnimJoint389 = new SoHAnimJoint();
SoHAnimJoint389->setUSE(QString("hanim_r_middle2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint389);

SoHAnimJoint* SoHAnimJoint390 = new SoHAnimJoint();
SoHAnimJoint390->setUSE(QString("hanim_l_middle3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint390);

SoHAnimJoint* SoHAnimJoint391 = new SoHAnimJoint();
SoHAnimJoint391->setUSE(QString("hanim_r_middle3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint391);

SoHAnimJoint* SoHAnimJoint392 = new SoHAnimJoint();
SoHAnimJoint392->setUSE(QString("hanim_l_midtarsal"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint392);

SoHAnimJoint* SoHAnimJoint393 = new SoHAnimJoint();
SoHAnimJoint393->setUSE(QString("hanim_r_midtarsal"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint393);

SoHAnimJoint* SoHAnimJoint394 = new SoHAnimJoint();
SoHAnimJoint394->setUSE(QString("hanim_l_pinky0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint394);

SoHAnimJoint* SoHAnimJoint395 = new SoHAnimJoint();
SoHAnimJoint395->setUSE(QString("hanim_r_pinky0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint395);

SoHAnimJoint* SoHAnimJoint396 = new SoHAnimJoint();
SoHAnimJoint396->setUSE(QString("hanim_l_pinky1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint396);

SoHAnimJoint* SoHAnimJoint397 = new SoHAnimJoint();
SoHAnimJoint397->setUSE(QString("hanim_r_pinky1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint397);

SoHAnimJoint* SoHAnimJoint398 = new SoHAnimJoint();
SoHAnimJoint398->setUSE(QString("hanim_l_pinky2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint398);

SoHAnimJoint* SoHAnimJoint399 = new SoHAnimJoint();
SoHAnimJoint399->setUSE(QString("hanim_r_pinky2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint399);

SoHAnimJoint* SoHAnimJoint400 = new SoHAnimJoint();
SoHAnimJoint400->setUSE(QString("hanim_l_pinky3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint400);

SoHAnimJoint* SoHAnimJoint401 = new SoHAnimJoint();
SoHAnimJoint401->setUSE(QString("hanim_r_pinky3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint401);

SoHAnimJoint* SoHAnimJoint402 = new SoHAnimJoint();
SoHAnimJoint402->setUSE(QString("hanim_l_ring0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint402);

SoHAnimJoint* SoHAnimJoint403 = new SoHAnimJoint();
SoHAnimJoint403->setUSE(QString("hanim_r_ring0"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint403);

SoHAnimJoint* SoHAnimJoint404 = new SoHAnimJoint();
SoHAnimJoint404->setUSE(QString("hanim_l_ring1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint404);

SoHAnimJoint* SoHAnimJoint405 = new SoHAnimJoint();
SoHAnimJoint405->setUSE(QString("hanim_r_ring1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint405);

SoHAnimJoint* SoHAnimJoint406 = new SoHAnimJoint();
SoHAnimJoint406->setUSE(QString("hanim_l_ring2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint406);

SoHAnimJoint* SoHAnimJoint407 = new SoHAnimJoint();
SoHAnimJoint407->setUSE(QString("hanim_r_ring2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint407);

SoHAnimJoint* SoHAnimJoint408 = new SoHAnimJoint();
SoHAnimJoint408->setUSE(QString("hanim_l_ring3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint408);

SoHAnimJoint* SoHAnimJoint409 = new SoHAnimJoint();
SoHAnimJoint409->setUSE(QString("hanim_r_ring3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint409);

SoHAnimJoint* SoHAnimJoint410 = new SoHAnimJoint();
SoHAnimJoint410->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint410);

SoHAnimJoint* SoHAnimJoint411 = new SoHAnimJoint();
SoHAnimJoint411->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint411);

SoHAnimJoint* SoHAnimJoint412 = new SoHAnimJoint();
SoHAnimJoint412->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint412);

SoHAnimJoint* SoHAnimJoint413 = new SoHAnimJoint();
SoHAnimJoint413->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint413);

SoHAnimJoint* SoHAnimJoint414 = new SoHAnimJoint();
SoHAnimJoint414->setUSE(QString("hanim_l_subtalar"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint414);

SoHAnimJoint* SoHAnimJoint415 = new SoHAnimJoint();
SoHAnimJoint415->setUSE(QString("hanim_r_subtalar"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint415);

SoHAnimJoint* SoHAnimJoint416 = new SoHAnimJoint();
SoHAnimJoint416->setUSE(QString("hanim_l_thumb1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint416);

SoHAnimJoint* SoHAnimJoint417 = new SoHAnimJoint();
SoHAnimJoint417->setUSE(QString("hanim_r_thumb1"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint417);

SoHAnimJoint* SoHAnimJoint418 = new SoHAnimJoint();
SoHAnimJoint418->setUSE(QString("hanim_l_thumb2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint418);

SoHAnimJoint* SoHAnimJoint419 = new SoHAnimJoint();
SoHAnimJoint419->setUSE(QString("hanim_r_thumb2"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint419);

SoHAnimJoint* SoHAnimJoint420 = new SoHAnimJoint();
SoHAnimJoint420->setUSE(QString("hanim_l_thumb3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint420);

SoHAnimJoint* SoHAnimJoint421 = new SoHAnimJoint();
SoHAnimJoint421->setUSE(QString("hanim_r_thumb3"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint421);

SoHAnimJoint* SoHAnimJoint422 = new SoHAnimJoint();
SoHAnimJoint422->setUSE(QString("hanim_l_wrist"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint422);

SoHAnimJoint* SoHAnimJoint423 = new SoHAnimJoint();
SoHAnimJoint423->setUSE(QString("hanim_r_wrist"));
SoHAnimHumanoid42->setJoints(*SoHAnimJoint423);

SoHAnimSegment* SoHAnimSegment424 = new SoHAnimSegment();
SoHAnimSegment424->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment424);

SoHAnimSegment* SoHAnimSegment425 = new SoHAnimSegment();
SoHAnimSegment425->setUSE(QString("hanim_skull"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment425);

SoHAnimSegment* SoHAnimSegment426 = new SoHAnimSegment();
SoHAnimSegment426->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment426);

SoHAnimSegment* SoHAnimSegment427 = new SoHAnimSegment();
SoHAnimSegment427->setUSE(QString("hanim_c1"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment427);

SoHAnimSegment* SoHAnimSegment428 = new SoHAnimSegment();
SoHAnimSegment428->setUSE(QString("hanim_c2"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment428);

SoHAnimSegment* SoHAnimSegment429 = new SoHAnimSegment();
SoHAnimSegment429->setUSE(QString("hanim_c3"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment429);

SoHAnimSegment* SoHAnimSegment430 = new SoHAnimSegment();
SoHAnimSegment430->setUSE(QString("hanim_c4"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment430);

SoHAnimSegment* SoHAnimSegment431 = new SoHAnimSegment();
SoHAnimSegment431->setUSE(QString("hanim_c5"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment431);

SoHAnimSegment* SoHAnimSegment432 = new SoHAnimSegment();
SoHAnimSegment432->setUSE(QString("hanim_c6"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment432);

SoHAnimSegment* SoHAnimSegment433 = new SoHAnimSegment();
SoHAnimSegment433->setUSE(QString("hanim_c7"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment433);

SoHAnimSegment* SoHAnimSegment434 = new SoHAnimSegment();
SoHAnimSegment434->setUSE(QString("hanim_t1"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment434);

SoHAnimSegment* SoHAnimSegment435 = new SoHAnimSegment();
SoHAnimSegment435->setUSE(QString("hanim_t2"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment435);

SoHAnimSegment* SoHAnimSegment436 = new SoHAnimSegment();
SoHAnimSegment436->setUSE(QString("hanim_t3"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment436);

SoHAnimSegment* SoHAnimSegment437 = new SoHAnimSegment();
SoHAnimSegment437->setUSE(QString("hanim_t4"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment437);

SoHAnimSegment* SoHAnimSegment438 = new SoHAnimSegment();
SoHAnimSegment438->setUSE(QString("hanim_t5"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment438);

SoHAnimSegment* SoHAnimSegment439 = new SoHAnimSegment();
SoHAnimSegment439->setUSE(QString("hanim_t6"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment439);

SoHAnimSegment* SoHAnimSegment440 = new SoHAnimSegment();
SoHAnimSegment440->setUSE(QString("hanim_t7"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment440);

SoHAnimSegment* SoHAnimSegment441 = new SoHAnimSegment();
SoHAnimSegment441->setUSE(QString("hanim_t8"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment441);

SoHAnimSegment* SoHAnimSegment442 = new SoHAnimSegment();
SoHAnimSegment442->setUSE(QString("hanim_t9"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment442);

SoHAnimSegment* SoHAnimSegment443 = new SoHAnimSegment();
SoHAnimSegment443->setUSE(QString("hanim_t10"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment443);

SoHAnimSegment* SoHAnimSegment444 = new SoHAnimSegment();
SoHAnimSegment444->setUSE(QString("hanim_t11"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment444);

SoHAnimSegment* SoHAnimSegment445 = new SoHAnimSegment();
SoHAnimSegment445->setUSE(QString("hanim_t12"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment445);

SoHAnimSegment* SoHAnimSegment446 = new SoHAnimSegment();
SoHAnimSegment446->setUSE(QString("hanim_l1"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment446);

SoHAnimSegment* SoHAnimSegment447 = new SoHAnimSegment();
SoHAnimSegment447->setUSE(QString("hanim_l2"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment447);

SoHAnimSegment* SoHAnimSegment448 = new SoHAnimSegment();
SoHAnimSegment448->setUSE(QString("hanim_l3"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment448);

SoHAnimSegment* SoHAnimSegment449 = new SoHAnimSegment();
SoHAnimSegment449->setUSE(QString("hanim_l4"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment449);

SoHAnimSegment* SoHAnimSegment450 = new SoHAnimSegment();
SoHAnimSegment450->setUSE(QString("hanim_l5"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment450);

SoHAnimSegment* SoHAnimSegment451 = new SoHAnimSegment();
SoHAnimSegment451->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment451);

SoHAnimSegment* SoHAnimSegment452 = new SoHAnimSegment();
SoHAnimSegment452->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment452);

SoHAnimSegment* SoHAnimSegment453 = new SoHAnimSegment();
SoHAnimSegment453->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment453);

SoHAnimSegment* SoHAnimSegment454 = new SoHAnimSegment();
SoHAnimSegment454->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment454);

SoHAnimSegment* SoHAnimSegment455 = new SoHAnimSegment();
SoHAnimSegment455->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment455);

SoHAnimSegment* SoHAnimSegment456 = new SoHAnimSegment();
SoHAnimSegment456->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment456);

SoHAnimSegment* SoHAnimSegment457 = new SoHAnimSegment();
SoHAnimSegment457->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment457);

SoHAnimSegment* SoHAnimSegment458 = new SoHAnimSegment();
SoHAnimSegment458->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment458);

SoHAnimSegment* SoHAnimSegment459 = new SoHAnimSegment();
SoHAnimSegment459->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment459);

SoHAnimSegment* SoHAnimSegment460 = new SoHAnimSegment();
SoHAnimSegment460->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment460);

SoHAnimSegment* SoHAnimSegment461 = new SoHAnimSegment();
SoHAnimSegment461->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment461);

SoHAnimSegment* SoHAnimSegment462 = new SoHAnimSegment();
SoHAnimSegment462->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment462);

SoHAnimSegment* SoHAnimSegment463 = new SoHAnimSegment();
SoHAnimSegment463->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment463);

SoHAnimSegment* SoHAnimSegment464 = new SoHAnimSegment();
SoHAnimSegment464->setUSE(QString("hanim_l_forefoot"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment464);

SoHAnimSegment* SoHAnimSegment465 = new SoHAnimSegment();
SoHAnimSegment465->setUSE(QString("hanim_r_forefoot"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment465);

SoHAnimSegment* SoHAnimSegment466 = new SoHAnimSegment();
SoHAnimSegment466->setUSE(QString("hanim_l_hand"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment466);

SoHAnimSegment* SoHAnimSegment467 = new SoHAnimSegment();
SoHAnimSegment467->setUSE(QString("hanim_r_hand"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment467);

SoHAnimSegment* SoHAnimSegment468 = new SoHAnimSegment();
SoHAnimSegment468->setUSE(QString("hanim_l_hindfoot"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment468);

SoHAnimSegment* SoHAnimSegment469 = new SoHAnimSegment();
SoHAnimSegment469->setUSE(QString("hanim_r_hindfoot"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment469);

SoHAnimSegment* SoHAnimSegment470 = new SoHAnimSegment();
SoHAnimSegment470->setUSE(QString("hanim_l_index_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment470);

SoHAnimSegment* SoHAnimSegment471 = new SoHAnimSegment();
SoHAnimSegment471->setUSE(QString("hanim_r_index_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment471);

SoHAnimSegment* SoHAnimSegment472 = new SoHAnimSegment();
SoHAnimSegment472->setUSE(QString("hanim_l_index_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment472);

SoHAnimSegment* SoHAnimSegment473 = new SoHAnimSegment();
SoHAnimSegment473->setUSE(QString("hanim_r_index_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment473);

SoHAnimSegment* SoHAnimSegment474 = new SoHAnimSegment();
SoHAnimSegment474->setUSE(QString("hanim_l_index_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment474);

SoHAnimSegment* SoHAnimSegment475 = new SoHAnimSegment();
SoHAnimSegment475->setUSE(QString("hanim_r_index_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment475);

SoHAnimSegment* SoHAnimSegment476 = new SoHAnimSegment();
SoHAnimSegment476->setUSE(QString("hanim_l_index_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment476);

SoHAnimSegment* SoHAnimSegment477 = new SoHAnimSegment();
SoHAnimSegment477->setUSE(QString("hanim_r_index_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment477);

SoHAnimSegment* SoHAnimSegment478 = new SoHAnimSegment();
SoHAnimSegment478->setUSE(QString("hanim_l_middistal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment478);

SoHAnimSegment* SoHAnimSegment479 = new SoHAnimSegment();
SoHAnimSegment479->setUSE(QString("hanim_r_middistal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment479);

SoHAnimSegment* SoHAnimSegment480 = new SoHAnimSegment();
SoHAnimSegment480->setUSE(QString("hanim_l_middle_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment480);

SoHAnimSegment* SoHAnimSegment481 = new SoHAnimSegment();
SoHAnimSegment481->setUSE(QString("hanim_r_middle_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment481);

SoHAnimSegment* SoHAnimSegment482 = new SoHAnimSegment();
SoHAnimSegment482->setUSE(QString("hanim_l_middle_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment482);

SoHAnimSegment* SoHAnimSegment483 = new SoHAnimSegment();
SoHAnimSegment483->setUSE(QString("hanim_r_middle_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment483);

SoHAnimSegment* SoHAnimSegment484 = new SoHAnimSegment();
SoHAnimSegment484->setUSE(QString("hanim_l_middle_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment484);

SoHAnimSegment* SoHAnimSegment485 = new SoHAnimSegment();
SoHAnimSegment485->setUSE(QString("hanim_r_middle_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment485);

SoHAnimSegment* SoHAnimSegment486 = new SoHAnimSegment();
SoHAnimSegment486->setUSE(QString("hanim_l_middle_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment486);

SoHAnimSegment* SoHAnimSegment487 = new SoHAnimSegment();
SoHAnimSegment487->setUSE(QString("hanim_r_middle_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment487);

SoHAnimSegment* SoHAnimSegment488 = new SoHAnimSegment();
SoHAnimSegment488->setUSE(QString("hanim_l_midproximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment488);

SoHAnimSegment* SoHAnimSegment489 = new SoHAnimSegment();
SoHAnimSegment489->setUSE(QString("hanim_r_midproximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment489);

SoHAnimSegment* SoHAnimSegment490 = new SoHAnimSegment();
SoHAnimSegment490->setUSE(QString("hanim_l_pinky_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment490);

SoHAnimSegment* SoHAnimSegment491 = new SoHAnimSegment();
SoHAnimSegment491->setUSE(QString("hanim_r_pinky_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment491);

SoHAnimSegment* SoHAnimSegment492 = new SoHAnimSegment();
SoHAnimSegment492->setUSE(QString("hanim_l_pinky_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment492);

SoHAnimSegment* SoHAnimSegment493 = new SoHAnimSegment();
SoHAnimSegment493->setUSE(QString("hanim_r_pinky_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment493);

SoHAnimSegment* SoHAnimSegment494 = new SoHAnimSegment();
SoHAnimSegment494->setUSE(QString("hanim_l_pinky_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment494);

SoHAnimSegment* SoHAnimSegment495 = new SoHAnimSegment();
SoHAnimSegment495->setUSE(QString("hanim_r_pinky_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment495);

SoHAnimSegment* SoHAnimSegment496 = new SoHAnimSegment();
SoHAnimSegment496->setUSE(QString("hanim_l_pinky_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment496);

SoHAnimSegment* SoHAnimSegment497 = new SoHAnimSegment();
SoHAnimSegment497->setUSE(QString("hanim_r_pinky_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment497);

SoHAnimSegment* SoHAnimSegment498 = new SoHAnimSegment();
SoHAnimSegment498->setUSE(QString("hanim_l_ring_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment498);

SoHAnimSegment* SoHAnimSegment499 = new SoHAnimSegment();
SoHAnimSegment499->setUSE(QString("hanim_r_ring_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment499);

SoHAnimSegment* SoHAnimSegment500 = new SoHAnimSegment();
SoHAnimSegment500->setUSE(QString("hanim_l_ring_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment500);

SoHAnimSegment* SoHAnimSegment501 = new SoHAnimSegment();
SoHAnimSegment501->setUSE(QString("hanim_r_ring_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment501);

SoHAnimSegment* SoHAnimSegment502 = new SoHAnimSegment();
SoHAnimSegment502->setUSE(QString("hanim_l_ring_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment502);

SoHAnimSegment* SoHAnimSegment503 = new SoHAnimSegment();
SoHAnimSegment503->setUSE(QString("hanim_r_ring_middle"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment503);

SoHAnimSegment* SoHAnimSegment504 = new SoHAnimSegment();
SoHAnimSegment504->setUSE(QString("hanim_l_ring_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment504);

SoHAnimSegment* SoHAnimSegment505 = new SoHAnimSegment();
SoHAnimSegment505->setUSE(QString("hanim_r_ring_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment505);

SoHAnimSegment* SoHAnimSegment506 = new SoHAnimSegment();
SoHAnimSegment506->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment506);

SoHAnimSegment* SoHAnimSegment507 = new SoHAnimSegment();
SoHAnimSegment507->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment507);

SoHAnimSegment* SoHAnimSegment508 = new SoHAnimSegment();
SoHAnimSegment508->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment508);

SoHAnimSegment* SoHAnimSegment509 = new SoHAnimSegment();
SoHAnimSegment509->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment509);

SoHAnimSegment* SoHAnimSegment510 = new SoHAnimSegment();
SoHAnimSegment510->setUSE(QString("hanim_l_thumb_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment510);

SoHAnimSegment* SoHAnimSegment511 = new SoHAnimSegment();
SoHAnimSegment511->setUSE(QString("hanim_r_thumb_distal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment511);

SoHAnimSegment* SoHAnimSegment512 = new SoHAnimSegment();
SoHAnimSegment512->setUSE(QString("hanim_l_thumb_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment512);

SoHAnimSegment* SoHAnimSegment513 = new SoHAnimSegment();
SoHAnimSegment513->setUSE(QString("hanim_r_thumb_metacarpal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment513);

SoHAnimSegment* SoHAnimSegment514 = new SoHAnimSegment();
SoHAnimSegment514->setUSE(QString("hanim_l_thumb_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment514);

SoHAnimSegment* SoHAnimSegment515 = new SoHAnimSegment();
SoHAnimSegment515->setUSE(QString("hanim_r_thumb_proximal"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment515);

SoHAnimSegment* SoHAnimSegment516 = new SoHAnimSegment();
SoHAnimSegment516->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment516);

SoHAnimSegment* SoHAnimSegment517 = new SoHAnimSegment();
SoHAnimSegment517->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid42->setSegments(*SoHAnimSegment517);

SoHAnimSite* SoHAnimSite518 = new SoHAnimSite();
SoHAnimSite518->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite518);

SoHAnimSite* SoHAnimSite519 = new SoHAnimSite();
SoHAnimSite519->setUSE(QString("hanim_skull_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite519);

SoHAnimSite* SoHAnimSite520 = new SoHAnimSite();
SoHAnimSite520->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite520);

SoHAnimSite* SoHAnimSite521 = new SoHAnimSite();
SoHAnimSite521->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite521);

SoHAnimSite* SoHAnimSite522 = new SoHAnimSite();
SoHAnimSite522->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite522);

SoHAnimSite* SoHAnimSite523 = new SoHAnimSite();
SoHAnimSite523->setUSE(QString("hanim_suprasternale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite523);

SoHAnimSite* SoHAnimSite524 = new SoHAnimSite();
SoHAnimSite524->setUSE(QString("hanim_cervicale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite524);

SoHAnimSite* SoHAnimSite525 = new SoHAnimSite();
SoHAnimSite525->setUSE(QString("hanim_substernale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite525);

SoHAnimSite* SoHAnimSite526 = new SoHAnimSite();
SoHAnimSite526->setUSE(QString("hanim_rib10_midspine_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite526);

SoHAnimSite* SoHAnimSite527 = new SoHAnimSite();
SoHAnimSite527->setUSE(QString("hanim_waist_preferred_post_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite527);

SoHAnimSite* SoHAnimSite528 = new SoHAnimSite();
SoHAnimSite528->setUSE(QString("hanim_navel_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite528);

SoHAnimSite* SoHAnimSite529 = new SoHAnimSite();
SoHAnimSite529->setUSE(QString("hanim_l_acromion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite529);

SoHAnimSite* SoHAnimSite530 = new SoHAnimSite();
SoHAnimSite530->setUSE(QString("hanim_r_acromion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite530);

SoHAnimSite* SoHAnimSite531 = new SoHAnimSite();
SoHAnimSite531->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite531);

SoHAnimSite* SoHAnimSite532 = new SoHAnimSite();
SoHAnimSite532->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite532);

SoHAnimSite* SoHAnimSite533 = new SoHAnimSite();
SoHAnimSite533->setUSE(QString("hanim_l_axilla_ant_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite533);

SoHAnimSite* SoHAnimSite534 = new SoHAnimSite();
SoHAnimSite534->setUSE(QString("hanim_r_axilla_ant_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite534);

SoHAnimSite* SoHAnimSite535 = new SoHAnimSite();
SoHAnimSite535->setUSE(QString("hanim_l_axilla_post_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite535);

SoHAnimSite* SoHAnimSite536 = new SoHAnimSite();
SoHAnimSite536->setUSE(QString("hanim_r_axilla_post_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite536);

SoHAnimSite* SoHAnimSite537 = new SoHAnimSite();
SoHAnimSite537->setUSE(QString("hanim_l_calcaneous_post_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite537);

SoHAnimSite* SoHAnimSite538 = new SoHAnimSite();
SoHAnimSite538->setUSE(QString("hanim_r_calcaneous_post_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite538);

SoHAnimSite* SoHAnimSite539 = new SoHAnimSite();
SoHAnimSite539->setUSE(QString("hanim_l_clavicale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite539);

SoHAnimSite* SoHAnimSite540 = new SoHAnimSite();
SoHAnimSite540->setUSE(QString("hanim_r_clavicale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite540);

SoHAnimSite* SoHAnimSite541 = new SoHAnimSite();
SoHAnimSite541->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite541);

SoHAnimSite* SoHAnimSite542 = new SoHAnimSite();
SoHAnimSite542->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite542);

SoHAnimSite* SoHAnimSite543 = new SoHAnimSite();
SoHAnimSite543->setUSE(QString("hanim_l_digit2_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite543);

SoHAnimSite* SoHAnimSite544 = new SoHAnimSite();
SoHAnimSite544->setUSE(QString("hanim_r_digit2_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite544);

SoHAnimSite* SoHAnimSite545 = new SoHAnimSite();
SoHAnimSite545->setUSE(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite545);

SoHAnimSite* SoHAnimSite546 = new SoHAnimSite();
SoHAnimSite546->setUSE(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite546);

SoHAnimSite* SoHAnimSite547 = new SoHAnimSite();
SoHAnimSite547->setUSE(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite547);

SoHAnimSite* SoHAnimSite548 = new SoHAnimSite();
SoHAnimSite548->setUSE(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite548);

SoHAnimSite* SoHAnimSite549 = new SoHAnimSite();
SoHAnimSite549->setUSE(QString("hanim_l_forefoot_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite549);

SoHAnimSite* SoHAnimSite550 = new SoHAnimSite();
SoHAnimSite550->setUSE(QString("hanim_r_forefoot_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite550);

SoHAnimSite* SoHAnimSite551 = new SoHAnimSite();
SoHAnimSite551->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite551);

SoHAnimSite* SoHAnimSite552 = new SoHAnimSite();
SoHAnimSite552->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite552);

SoHAnimSite* SoHAnimSite553 = new SoHAnimSite();
SoHAnimSite553->setUSE(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite553);

SoHAnimSite* SoHAnimSite554 = new SoHAnimSite();
SoHAnimSite554->setUSE(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite554);

SoHAnimSite* SoHAnimSite555 = new SoHAnimSite();
SoHAnimSite555->setUSE(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite555);

SoHAnimSite* SoHAnimSite556 = new SoHAnimSite();
SoHAnimSite556->setUSE(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite556);

SoHAnimSite* SoHAnimSite557 = new SoHAnimSite();
SoHAnimSite557->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite557);

SoHAnimSite* SoHAnimSite558 = new SoHAnimSite();
SoHAnimSite558->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite558);

SoHAnimSite* SoHAnimSite559 = new SoHAnimSite();
SoHAnimSite559->setUSE(QString("hanim_l_index_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite559);

SoHAnimSite* SoHAnimSite560 = new SoHAnimSite();
SoHAnimSite560->setUSE(QString("hanim_r_index_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite560);

SoHAnimSite* SoHAnimSite561 = new SoHAnimSite();
SoHAnimSite561->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite561);

SoHAnimSite* SoHAnimSite562 = new SoHAnimSite();
SoHAnimSite562->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite562);

SoHAnimSite* SoHAnimSite563 = new SoHAnimSite();
SoHAnimSite563->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite563);

SoHAnimSite* SoHAnimSite564 = new SoHAnimSite();
SoHAnimSite564->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite564);

SoHAnimSite* SoHAnimSite565 = new SoHAnimSite();
SoHAnimSite565->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite565);

SoHAnimSite* SoHAnimSite566 = new SoHAnimSite();
SoHAnimSite566->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite566);

SoHAnimSite* SoHAnimSite567 = new SoHAnimSite();
SoHAnimSite567->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite567);

SoHAnimSite* SoHAnimSite568 = new SoHAnimSite();
SoHAnimSite568->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite568);

SoHAnimSite* SoHAnimSite569 = new SoHAnimSite();
SoHAnimSite569->setUSE(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite569);

SoHAnimSite* SoHAnimSite570 = new SoHAnimSite();
SoHAnimSite570->setUSE(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite570);

SoHAnimSite* SoHAnimSite571 = new SoHAnimSite();
SoHAnimSite571->setUSE(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite571);

SoHAnimSite* SoHAnimSite572 = new SoHAnimSite();
SoHAnimSite572->setUSE(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite572);

SoHAnimSite* SoHAnimSite573 = new SoHAnimSite();
SoHAnimSite573->setUSE(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite573);

SoHAnimSite* SoHAnimSite574 = new SoHAnimSite();
SoHAnimSite574->setUSE(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite574);

SoHAnimSite* SoHAnimSite575 = new SoHAnimSite();
SoHAnimSite575->setUSE(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite575);

SoHAnimSite* SoHAnimSite576 = new SoHAnimSite();
SoHAnimSite576->setUSE(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite576);

SoHAnimSite* SoHAnimSite577 = new SoHAnimSite();
SoHAnimSite577->setUSE(QString("hanim_l_middle_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite577);

SoHAnimSite* SoHAnimSite578 = new SoHAnimSite();
SoHAnimSite578->setUSE(QString("hanim_r_middle_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite578);

SoHAnimSite* SoHAnimSite579 = new SoHAnimSite();
SoHAnimSite579->setUSE(QString("hanim_r_neck_base_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite579);

SoHAnimSite* SoHAnimSite580 = new SoHAnimSite();
SoHAnimSite580->setUSE(QString("hanim_l_neck_base_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite580);

SoHAnimSite* SoHAnimSite581 = new SoHAnimSite();
SoHAnimSite581->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite581);

SoHAnimSite* SoHAnimSite582 = new SoHAnimSite();
SoHAnimSite582->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite582);

SoHAnimSite* SoHAnimSite583 = new SoHAnimSite();
SoHAnimSite583->setUSE(QString("hanim_l_pinky_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite583);

SoHAnimSite* SoHAnimSite584 = new SoHAnimSite();
SoHAnimSite584->setUSE(QString("hanim_r_pinky_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite584);

SoHAnimSite* SoHAnimSite585 = new SoHAnimSite();
SoHAnimSite585->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite585);

SoHAnimSite* SoHAnimSite586 = new SoHAnimSite();
SoHAnimSite586->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite586);

SoHAnimSite* SoHAnimSite587 = new SoHAnimSite();
SoHAnimSite587->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite587);

SoHAnimSite* SoHAnimSite588 = new SoHAnimSite();
SoHAnimSite588->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite588);

SoHAnimSite* SoHAnimSite589 = new SoHAnimSite();
SoHAnimSite589->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite589);

SoHAnimSite* SoHAnimSite590 = new SoHAnimSite();
SoHAnimSite590->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite590);

SoHAnimSite* SoHAnimSite591 = new SoHAnimSite();
SoHAnimSite591->setUSE(QString("hanim_r_rib10_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite591);

SoHAnimSite* SoHAnimSite592 = new SoHAnimSite();
SoHAnimSite592->setUSE(QString("hanim_l_rib10_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite592);

SoHAnimSite* SoHAnimSite593 = new SoHAnimSite();
SoHAnimSite593->setUSE(QString("hanim_l_ring_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite593);

SoHAnimSite* SoHAnimSite594 = new SoHAnimSite();
SoHAnimSite594->setUSE(QString("hanim_r_ring_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite594);

SoHAnimSite* SoHAnimSite595 = new SoHAnimSite();
SoHAnimSite595->setUSE(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite595);

SoHAnimSite* SoHAnimSite596 = new SoHAnimSite();
SoHAnimSite596->setUSE(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite596);

SoHAnimSite* SoHAnimSite597 = new SoHAnimSite();
SoHAnimSite597->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite597);

SoHAnimSite* SoHAnimSite598 = new SoHAnimSite();
SoHAnimSite598->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite598);

SoHAnimSite* SoHAnimSite599 = new SoHAnimSite();
SoHAnimSite599->setUSE(QString("hanim_r_thelion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite599);

SoHAnimSite* SoHAnimSite600 = new SoHAnimSite();
SoHAnimSite600->setUSE(QString("hanim_l_thelion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite600);

SoHAnimSite* SoHAnimSite601 = new SoHAnimSite();
SoHAnimSite601->setUSE(QString("hanim_l_thumb_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite601);

SoHAnimSite* SoHAnimSite602 = new SoHAnimSite();
SoHAnimSite602->setUSE(QString("hanim_r_thumb_distal_tip"));
SoHAnimHumanoid42->setSites(*SoHAnimSite602);

SoHAnimSite* SoHAnimSite603 = new SoHAnimSite();
SoHAnimSite603->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite603);

SoHAnimSite* SoHAnimSite604 = new SoHAnimSite();
SoHAnimSite604->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite604);

SoHAnimSite* SoHAnimSite605 = new SoHAnimSite();
SoHAnimSite605->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite605);

SoHAnimSite* SoHAnimSite606 = new SoHAnimSite();
SoHAnimSite606->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite606);

SoHAnimSite* SoHAnimSite607 = new SoHAnimSite();
SoHAnimSite607->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite607);

SoHAnimSite* SoHAnimSite608 = new SoHAnimSite();
SoHAnimSite608->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid42->setSites(*SoHAnimSite608);

SoHAnimSite* SoHAnimSite609 = new SoHAnimSite();
SoHAnimSite609->setDEF(QString("hanim_l_inclined_view"));
SoHAnimSite609->X3DNode::setName(QString("l_inclined_view"));
SoHAnimSite609->setTranslation(new float[]{1.62,1.05,2.06});
SoHAnimSite609->setRotation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint* SoViewpoint610 = new SoViewpoint();
SoViewpoint610->setDEF(QString("hanim_l_inclined_viewpoint"));
SoViewpoint610->setDescription(QString("left inclined"));
SoViewpoint610->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite609->addChild(*SoViewpoint610);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite609);

SoHAnimSite* SoHAnimSite611 = new SoHAnimSite();
SoHAnimSite611->setDEF(QString("hanim_r_inclined_view"));
SoHAnimSite611->X3DNode::setName(QString("r_inclined_view"));
SoHAnimSite611->setTranslation(new float[]{-1.62,1.05,2.06});
SoHAnimSite611->setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
SoViewpoint* SoViewpoint612 = new SoViewpoint();
SoViewpoint612->setDEF(QString("hanim_r_inclined_viewpoint"));
SoViewpoint612->setDescription(QString("right inclined"));
SoViewpoint612->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint612->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite611->addChild(*SoViewpoint612);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite611);

SoHAnimSite* SoHAnimSite613 = new SoHAnimSite();
SoHAnimSite613->setDEF(QString("hanim_front_view"));
SoHAnimSite613->X3DNode::setName(QString("front_view"));
SoHAnimSite613->setTranslation(new float[]{0.0,0.85,2.58});
SoViewpoint* SoViewpoint614 = new SoViewpoint();
SoViewpoint614->setDEF(QString("hanim_front_viewpoint"));
SoViewpoint614->setDescription(QString("front"));
SoViewpoint614->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint614->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite613->addChild(*SoViewpoint614);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite613);

SoHAnimSite* SoHAnimSite615 = new SoHAnimSite();
SoHAnimSite615->setDEF(QString("hanim_back_view"));
SoHAnimSite615->X3DNode::setName(QString("back_view"));
SoHAnimSite615->setTranslation(new float[]{0.0,0.85,-2.58});
SoHAnimSite615->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint* SoViewpoint616 = new SoViewpoint();
SoViewpoint616->setDEF(QString("hanim_back_viewpoint"));
SoViewpoint616->setDescription(QString("back"));
SoViewpoint616->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint616->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite615->addChild(*SoViewpoint616);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite615);

SoHAnimSite* SoHAnimSite617 = new SoHAnimSite();
SoHAnimSite617->setDEF(QString("hanim_l_side_view"));
SoHAnimSite617->X3DNode::setName(QString("l_side_view"));
SoHAnimSite617->setTranslation(new float[]{2.6,0.854,0.0});
SoHAnimSite617->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint* SoViewpoint618 = new SoViewpoint();
SoViewpoint618->setDEF(QString("hanim_l_side_viewpoint"));
SoViewpoint618->setDescription(QString("left side"));
SoViewpoint618->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint618->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite617->addChild(*SoViewpoint618);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite617);

SoHAnimSite* SoHAnimSite619 = new SoHAnimSite();
SoHAnimSite619->setDEF(QString("hanim_Top_view"));
SoHAnimSite619->X3DNode::setName(QString("Top_view"));
SoHAnimSite619->setTranslation(new float[]{0.0,3.5,0.0});
SoHAnimSite619->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint* SoViewpoint620 = new SoViewpoint();
SoViewpoint620->setDEF(QString("hanim_Top_viewpoint"));
SoViewpoint620->setDescription(QString("Top"));
SoViewpoint620->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint620->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite619->addChild(*SoViewpoint620);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite619);

SoHAnimSite* SoHAnimSite621 = new SoHAnimSite();
SoHAnimSite621->setDEF(QString("hanim_front_close_view"));
SoHAnimSite621->X3DNode::setName(QString("front_close_view"));
SoHAnimSite621->setTranslation(new float[]{0.0,0.854,1.575});
SoViewpoint* SoViewpoint622 = new SoViewpoint();
SoViewpoint622->setDEF(QString("hanim_front_close_viewpoint"));
SoViewpoint622->setDescription(QString("front close"));
SoViewpoint622->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint622->setCenterOfRotation(new float[]{0.0,0.0,1.575});
SoHAnimSite621->addChild(*SoViewpoint622);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite621);

SoHAnimSite* SoHAnimSite623 = new SoHAnimSite();
SoHAnimSite623->setDEF(QString("hanim_side_close_view"));
SoHAnimSite623->X3DNode::setName(QString("side_close_view"));
SoHAnimSite623->setTranslation(new float[]{1.56,0.854,0.0});
SoHAnimSite623->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint* SoViewpoint624 = new SoViewpoint();
SoViewpoint624->setDEF(QString("hanim_side_close_viewpoint"));
SoViewpoint624->setDescription(QString("side close"));
SoViewpoint624->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint624->setCenterOfRotation(new float[]{1.6,0.0,0.0});
SoHAnimSite623->addChild(*SoViewpoint624);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite623);

SoHAnimSite* SoHAnimSite625 = new SoHAnimSite();
SoHAnimSite625->setDEF(QString("hanim_head_front_close_view"));
SoHAnimSite625->X3DNode::setName(QString("head_front_close_view"));
SoHAnimSite625->setTranslation(new float[]{0.0,1.5,1.0});
SoViewpoint* SoViewpoint626 = new SoViewpoint();
SoViewpoint626->setDEF(QString("hanim_head_front_close_viewpoint"));
SoViewpoint626->setDescription(QString("head front close"));
SoViewpoint626->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint626->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite625->addChild(*SoViewpoint626);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite625);

SoHAnimSite* SoHAnimSite627 = new SoHAnimSite();
SoHAnimSite627->setDEF(QString("hanim_chest_front_close_view"));
SoHAnimSite627->X3DNode::setName(QString("chest_front_close_view"));
SoHAnimSite627->setTranslation(new float[]{0.0,1.2,1.0});
SoViewpoint* SoViewpoint628 = new SoViewpoint();
SoViewpoint628->setDEF(QString("hanim_chest_front_close_viewpoint"));
SoViewpoint628->setDescription(QString("chest front close"));
SoViewpoint628->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint628->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite627->addChild(*SoViewpoint628);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite627);

SoHAnimSite* SoHAnimSite629 = new SoHAnimSite();
SoHAnimSite629->setDEF(QString("hanim_pelvis_front_close_view"));
SoHAnimSite629->X3DNode::setName(QString("pelvis_front_close_view"));
SoHAnimSite629->setTranslation(new float[]{0.0,0.8,1.0});
SoViewpoint* SoViewpoint630 = new SoViewpoint();
SoViewpoint630->setDEF(QString("hanim_pelvis_front_close_viewpoint"));
SoViewpoint630->setDescription(QString("pelvis front close"));
SoViewpoint630->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint630->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite629->addChild(*SoViewpoint630);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite629);

SoHAnimSite* SoHAnimSite631 = new SoHAnimSite();
SoHAnimSite631->setDEF(QString("hanim_knees_front_close_view"));
SoHAnimSite631->X3DNode::setName(QString("knees_front_close_view"));
SoHAnimSite631->setTranslation(new float[]{0.0,0.4,1.0});
SoViewpoint* SoViewpoint632 = new SoViewpoint();
SoViewpoint632->setDEF(QString("hanim_knees_front_close_viewpoint"));
SoViewpoint632->setDescription(QString("knees front close"));
SoViewpoint632->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint632->setCenterOfRotation(new float[]{0.0,0.4,0.0});
SoHAnimSite631->addChild(*SoViewpoint632);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite631);

SoHAnimSite* SoHAnimSite633 = new SoHAnimSite();
SoHAnimSite633->setDEF(QString("hanim_feet_front_close_view"));
SoHAnimSite633->X3DNode::setName(QString("feet_front_close_view"));
SoHAnimSite633->setTranslation(new float[]{0.0,0.0,1.0});
SoViewpoint* SoViewpoint634 = new SoViewpoint();
SoViewpoint634->setDEF(QString("hanim_feet_front_close_viewpoint"));
SoViewpoint634->setDescription(QString("feet front close"));
SoViewpoint634->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite633->addChild(*SoViewpoint634);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite633);

SoHAnimSite* SoHAnimSite635 = new SoHAnimSite();
SoHAnimSite635->setDEF(QString("hanim_eye_level_view"));
SoHAnimSite635->X3DNode::setName(QString("eye_level_view"));
SoHAnimSite635->setTranslation(new float[]{0.0,1.6332,0.0502});
SoViewpoint* SoViewpoint636 = new SoViewpoint();
SoViewpoint636->setDEF(QString("hanim_eye_level_viewpoint"));
SoViewpoint636->setDescription(QString("eye level looking forward"));
SoViewpoint636->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint636->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite635->addChild(*SoViewpoint636);

SoHAnimHumanoid42->setViewpoints(*SoHAnimSite635);

SoHAnimSite* SoHAnimSite637 = new SoHAnimSite();
SoHAnimSite637->setUSE(QString("hanim_l_eyeball_site_view"));
SoHAnimHumanoid42->setSites(*SoHAnimSite637);

SoHAnimSite* SoHAnimSite638 = new SoHAnimSite();
SoHAnimSite638->setUSE(QString("hanim_r_eyeball_site_view"));
SoHAnimHumanoid42->setSites(*SoHAnimSite638);

SoHAnimSite* SoHAnimSite639 = new SoHAnimSite();
SoHAnimSite639->setUSE(QString("hanim_l_hand_front_view"));
SoHAnimHumanoid42->setSites(*SoHAnimSite639);

SoHAnimSite* SoHAnimSite640 = new SoHAnimSite();
SoHAnimSite640->setUSE(QString("hanim_r_hand_front_view"));
SoHAnimHumanoid42->setSites(*SoHAnimSite640);

SoNode28->addChild(*SoHAnimHumanoid42);

SoSceneManager0->setSceneGraph(*SoNode28);

return 0;
}
