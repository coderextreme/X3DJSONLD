
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
Someta3->setContent(QString("HAnimSpecificationLOA3Animation.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."));
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
Someta7->setContent(QString("HAnimSpecificationLOA3Invisible.x3d"));
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
Someta15->setName(QString("created"));
Someta15->setContent(QString("24 April 2013"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("modified"));
Someta16->setContent(QString("Tue, 09 Sep 2025 19:39:08 GMT"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("error"));
Someta17->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("Image"));
Someta18->setContent(QString("HAnimSpecificationLOA3MotionH3DViewer.png"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("HAnimSpecificationLOA3MotionInstantReality.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("HAnimSpecificationLOA3MotionOctagaVS.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("HAnimSpecificationLOA3MotionView3dscene.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("Image"));
Someta22->setContent(QString("images/BonesAllSkeletonFrontViewLOA1.png"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("Image"));
Someta23->setContent(QString("images/BonesAllSkeletonFrontViewLOA2.png"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("Image"));
Someta24->setContent(QString("images/BonesAllSkeletonFrontViewLOA3.png"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("creator"));
Someta25->setContent(QString("Matthew T. Beitler, Joe D. Williams, Don Brutzman"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("translator"));
Someta26->setContent(QString("Don Brutzman and Joe Williams"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("generator"));
Someta27->setContent(QString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("generator"));
Someta28->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta28);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode29 = new SoNode();
SoBackground* SoBackground30 = new SoBackground();
SoBackground30->setSkyColor(new float[]{0.3,0.3,0.3}, 3);
SoNode29->addChild(*SoBackground30);

SoNavigationInfo* SoNavigationInfo31 = new SoNavigationInfo();
SoNode29->addChild(*SoNavigationInfo31);

SoGroup* SoGroup32 = new SoGroup();
SoGroup32->setDEF(QString("Original_WorldInfo"));
SoWorldInfo* SoWorldInfo33 = new SoWorldInfo();
SoWorldInfo33->setTitle(QString("HANIM 200x Default Joint Centers, LOA3"));
SoWorldInfo33->setInfo(new QString[]{QString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
SoGroup32->addChild(*SoWorldInfo33);

SoNode29->addChild(*SoGroup32);

SoViewpoint* SoViewpoint34 = new SoViewpoint();
SoViewpoint34->setDescription(QString("Humanoid LOA 3 Front"));
SoViewpoint34->setPosition(new float[]{0.0,0.4,4.0});
SoViewpoint34->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint34);

SoViewpoint* SoViewpoint35 = new SoViewpoint();
SoViewpoint35->setDescription(QString("Humanoid LOA 3 Front Close"));
SoViewpoint35->setPosition(new float[]{0.0,0.8,2.0});
SoViewpoint35->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint35);

SoViewpoint* SoViewpoint36 = new SoViewpoint();
SoViewpoint36->setDescription(QString("Humanoid LOA 3 Front Closer"));
SoViewpoint36->setPosition(new float[]{0.0,1.2,1.0});
SoViewpoint36->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint36);

SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDescription(QString("Humanoid LOA 3 Front Face"));
SoViewpoint37->setPosition(new float[]{0.0,1.63,1.0});
SoViewpoint37->setCenterOfRotation(new float[]{0.0,1.5,0.0016});
SoNode29->addChild(*SoViewpoint37);

SoViewpoint* SoViewpoint38 = new SoViewpoint();
SoViewpoint38->setDescription(QString("Humanoid LOA 3 Right Side"));
SoViewpoint38->setPosition(new float[]{2.6,0.8,0.0});
SoViewpoint38->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint38->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint38);

SoViewpoint* SoViewpoint39 = new SoViewpoint();
SoViewpoint39->setDescription(QString("Humanoid LOA 3 Right Side Close"));
SoViewpoint39->setPosition(new float[]{1.0,0.8,0.5});
SoViewpoint39->setOrientation(new float[]{0.0,1.0,0.0,1.2});
SoViewpoint39->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint39);

SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("Humanoid LOA 3 Left Side Close"));
SoViewpoint40->setPosition(new float[]{-1.0,0.8,0.5});
SoViewpoint40->setOrientation(new float[]{0.0,1.0,0.0,-1.2});
SoViewpoint40->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint40);

SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDescription(QString("Humanoid LOA 3 Left Side"));
SoViewpoint41->setPosition(new float[]{-2.6,0.8,0.0});
SoViewpoint41->setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
SoViewpoint41->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint41);

SoViewpoint* SoViewpoint42 = new SoViewpoint();
SoViewpoint42->setDescription(QString("Humanoid LOA 3 Top"));
SoViewpoint42->setPosition(new float[]{0.0,3.5,0.0});
SoViewpoint42->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint42->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode29->addChild(*SoViewpoint42);

SoHAnimHumanoid* SoHAnimHumanoid43 = new SoHAnimHumanoid();
SoHAnimHumanoid43->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid43->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid43->setInfo(new QString[]{QString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), QString("authorEmail=HAnim@web3D.org"), QString("copyright=none"), QString("creationDate=12 May 1999"), QString("usageRestrictions=none"), QString("humanoidVersion=2.0"), QString("height=1.7504")}, 7);
SoHAnimHumanoid43->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint44->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint44->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimSegment* SoHAnimSegment45 = new SoHAnimSegment();
SoHAnimSegment45->setDEF(QString("hanim_sacrum"));
SoHAnimSegment45->X3DNode::setName(QString("sacrum"));
SoTouchSensor* SoTouchSensor46 = new SoTouchSensor();
SoTouchSensor46->setDescription(QString("HAnimJoint HumanoidRoot, HAnimSegment sacrum"));
SoHAnimSegment45->addChild(*SoTouchSensor46);

SoTransform* SoTransform47 = new SoTransform();
SoTransform47->setTranslation(new float[]{0.0,0.824,0.0277});
SoShape* SoShape48 = new SoShape();
SoShape48->setDEF(QString("HAnimJointShape"));
SoVRMLAppearance* SoVRMLAppearance49 = new SoVRMLAppearance();
SoVRMLAppearance49->setDEF(QString("HAnimJointAppearance"));
SoMaterial* SoMaterial50 = new SoMaterial();
SoMaterial50->setDiffuseColor(new float[]{1.0,0.5,0.0});
SoMaterial50->setTransparency(0.5);
SoVRMLAppearance49->addChild(*SoMaterial50);

SoShape48->addChild(*SoVRMLAppearance49);

SoSphere* SoSphere51 = new SoSphere();
SoSphere51->setRadius(0.006);
SoShape48->setGeometry(*SoSphere51);

SoTransform47->addChild(*SoShape48);

SoHAnimSegment45->addChild(*SoTransform47);

SoShape* SoShape52 = new SoShape();
SoLineSet* SoLineSet53 = new SoLineSet();
SoLineSet53->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA54 = new SoColorRGBA();
SoColorRGBA54->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA54->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet53->addChild(*SoColorRGBA54);

SoCoordinate* SoCoordinate55 = new SoCoordinate();
SoCoordinate55->setPoint(new float[]{0.0,0.824,0.0277,0.0,0.9149,0.0016}, 6);
SoLineSet53->setCoord(*SoCoordinate55);

SoShape52->setGeometry(*SoLineSet53);

SoHAnimSegment45->addChild(*SoShape52);

SoShape* SoShape56 = new SoShape();
SoLineSet* SoLineSet57 = new SoLineSet();
SoLineSet57->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA58 = new SoColorRGBA();
SoColorRGBA58->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet57->addChild(*SoColorRGBA58);

SoCoordinate* SoCoordinate59 = new SoCoordinate();
SoCoordinate59->setPoint(new float[]{0.0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
SoLineSet57->setCoord(*SoCoordinate59);

SoShape56->setGeometry(*SoLineSet57);

SoHAnimSegment45->addChild(*SoShape56);

SoHAnimJoint44->addChildren(*SoHAnimSegment45);

SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint60->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint60->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment61 = new SoHAnimSegment();
SoHAnimSegment61->setDEF(QString("hanim_pelvis"));
SoHAnimSegment61->X3DNode::setName(QString("pelvis"));
SoTouchSensor* SoTouchSensor62 = new SoTouchSensor();
SoTouchSensor62->setDescription(QString("HAnimJoint sacroiliac, HAnimSegment pelvis"));
SoHAnimSegment61->addChild(*SoTouchSensor62);

SoTransform* SoTransform63 = new SoTransform();
SoTransform63->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape64 = new SoShape();
SoShape64->setUSE(QString("HAnimJointShape"));
SoTransform63->addChild(*SoShape64);

SoHAnimSegment61->addChild(*SoTransform63);

SoShape* SoShape65 = new SoShape();
SoLineSet* SoLineSet66 = new SoLineSet();
SoLineSet66->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA67 = new SoColorRGBA();
SoColorRGBA67->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet66->addChild(*SoColorRGBA67);

SoCoordinate* SoCoordinate68 = new SoCoordinate();
SoCoordinate68->setPoint(new float[]{0.0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
SoLineSet66->setCoord(*SoCoordinate68);

SoShape65->setGeometry(*SoLineSet66);

SoHAnimSegment61->addChild(*SoShape65);

SoShape* SoShape69 = new SoShape();
SoLineSet* SoLineSet70 = new SoLineSet();
SoLineSet70->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA71 = new SoColorRGBA();
SoColorRGBA71->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet70->addChild(*SoColorRGBA71);

SoCoordinate* SoCoordinate72 = new SoCoordinate();
SoCoordinate72->setPoint(new float[]{0.0,0.9149,0.0016,-0.0961,0.9124,-0.0001}, 6);
SoLineSet70->setCoord(*SoCoordinate72);

SoShape69->setGeometry(*SoLineSet70);

SoHAnimSegment61->addChild(*SoShape69);

SoShape* SoShape73 = new SoShape();
SoLineSet* SoLineSet74 = new SoLineSet();
SoLineSet74->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA75 = new SoColorRGBA();
SoColorRGBA75->setDEF(QString("HAnimSiteLineColorRGBA"));
SoColorRGBA75->setColor(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.1}, 8);
SoLineSet74->addChild(*SoColorRGBA75);

SoCoordinate* SoCoordinate76 = new SoCoordinate();
SoCoordinate76->setPoint(new float[]{0.0,0.9149,0.0016,-0.1525,1.0628,0.0035}, 6);
SoLineSet74->setCoord(*SoCoordinate76);

SoShape73->setGeometry(*SoLineSet74);

SoHAnimSegment61->addChild(*SoShape73);

SoShape* SoShape77 = new SoShape();
SoLineSet* SoLineSet78 = new SoLineSet();
SoLineSet78->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA79 = new SoColorRGBA();
SoColorRGBA79->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet78->addChild(*SoColorRGBA79);

SoCoordinate* SoCoordinate80 = new SoCoordinate();
SoCoordinate80->setPoint(new float[]{0.0,0.9149,0.0016,-0.1689,0.8419,0.0352}, 6);
SoLineSet78->setCoord(*SoCoordinate80);

SoShape77->setGeometry(*SoLineSet78);

SoHAnimSegment61->addChild(*SoShape77);

SoShape* SoShape81 = new SoShape();
SoLineSet* SoLineSet82 = new SoLineSet();
SoLineSet82->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA83 = new SoColorRGBA();
SoColorRGBA83->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet82->addChild(*SoColorRGBA83);

SoCoordinate* SoCoordinate84 = new SoCoordinate();
SoCoordinate84->setPoint(new float[]{0.0,0.9149,0.0016,0.1612,1.0537,0.0008}, 6);
SoLineSet82->setCoord(*SoCoordinate84);

SoShape81->setGeometry(*SoLineSet82);

SoHAnimSegment61->addChild(*SoShape81);

SoShape* SoShape85 = new SoShape();
SoLineSet* SoLineSet86 = new SoLineSet();
SoLineSet86->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA87 = new SoColorRGBA();
SoColorRGBA87->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet86->addChild(*SoColorRGBA87);

SoCoordinate* SoCoordinate88 = new SoCoordinate();
SoCoordinate88->setPoint(new float[]{0.0,0.9149,0.0016,0.1677,0.8336,0.0303}, 6);
SoLineSet86->setCoord(*SoCoordinate88);

SoShape85->setGeometry(*SoLineSet86);

SoHAnimSegment61->addChild(*SoShape85);

SoShape* SoShape89 = new SoShape();
SoLineSet* SoLineSet90 = new SoLineSet();
SoLineSet90->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA91 = new SoColorRGBA();
SoColorRGBA91->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet90->addChild(*SoColorRGBA91);

SoCoordinate* SoCoordinate92 = new SoCoordinate();
SoCoordinate92->setPoint(new float[]{0.0,0.9149,0.0016,-0.0887,1.0021,0.1112}, 6);
SoLineSet90->setCoord(*SoCoordinate92);

SoShape89->setGeometry(*SoLineSet90);

SoHAnimSegment61->addChild(*SoShape89);

SoShape* SoShape93 = new SoShape();
SoLineSet* SoLineSet94 = new SoLineSet();
SoLineSet94->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA95 = new SoColorRGBA();
SoColorRGBA95->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet94->addChild(*SoColorRGBA95);

SoCoordinate* SoCoordinate96 = new SoCoordinate();
SoCoordinate96->setPoint(new float[]{0.0,0.9149,0.0016,0.0925,0.9983,0.1052}, 6);
SoLineSet94->setCoord(*SoCoordinate96);

SoShape93->setGeometry(*SoLineSet94);

SoHAnimSegment61->addChild(*SoShape93);

SoShape* SoShape97 = new SoShape();
SoLineSet* SoLineSet98 = new SoLineSet();
SoLineSet98->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA99 = new SoColorRGBA();
SoColorRGBA99->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet98->addChild(*SoColorRGBA99);

SoCoordinate* SoCoordinate100 = new SoCoordinate();
SoCoordinate100->setPoint(new float[]{0.0,0.9149,0.0016,-0.0716,1.019,-0.1138}, 6);
SoLineSet98->setCoord(*SoCoordinate100);

SoShape97->setGeometry(*SoLineSet98);

SoHAnimSegment61->addChild(*SoShape97);

SoShape* SoShape101 = new SoShape();
SoLineSet* SoLineSet102 = new SoLineSet();
SoLineSet102->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA103 = new SoColorRGBA();
SoColorRGBA103->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet102->addChild(*SoColorRGBA103);

SoCoordinate* SoCoordinate104 = new SoCoordinate();
SoCoordinate104->setPoint(new float[]{0.0,0.9149,0.0016,0.0774,1.019,-0.1151}, 6);
SoLineSet102->setCoord(*SoCoordinate104);

SoShape101->setGeometry(*SoLineSet102);

SoHAnimSegment61->addChild(*SoShape101);

SoShape* SoShape105 = new SoShape();
SoLineSet* SoLineSet106 = new SoLineSet();
SoLineSet106->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA107 = new SoColorRGBA();
SoColorRGBA107->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet106->addChild(*SoColorRGBA107);

SoCoordinate* SoCoordinate108 = new SoCoordinate();
SoCoordinate108->setPoint(new float[]{0.0,0.9149,0.0016,0.0034,0.8266,0.0257}, 6);
SoLineSet106->setCoord(*SoCoordinate108);

SoShape105->setGeometry(*SoLineSet106);

SoHAnimSegment61->addChild(*SoShape105);

SoHAnimSite* SoHAnimSite109 = new SoHAnimSite();
SoHAnimSite109->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite109->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite109->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoTouchSensor* SoTouchSensor110 = new SoTouchSensor();
SoTouchSensor110->setDescription(QString("HAnimSite r_iliocristale"));
SoHAnimSite109->addChild(*SoTouchSensor110);

SoShape* SoShape111 = new SoShape();
SoShape111->setDEF(QString("HAnimSiteShape"));
SoVRMLAppearance* SoVRMLAppearance112 = new SoVRMLAppearance();
SoMaterial* SoMaterial113 = new SoMaterial();
SoMaterial113->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance112->addChild(*SoMaterial113);

SoShape111->addChild(*SoVRMLAppearance112);

SoIndexedFaceSet* SoIndexedFaceSet114 = new SoIndexedFaceSet();
SoIndexedFaceSet114->setDEF(QString("DiamondIFS"));
SoIndexedFaceSet114->setSolid(false);
SoIndexedFaceSet114->setCreaseAngle(0.5);
SoIndexedFaceSet114->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate115 = new SoCoordinate();
SoCoordinate115->setPoint(new float[]{0.0,0.008,0.0,-0.008,0.0,0.0,0.0,0.0,0.008,0.008,0.0,0.0,0.0,0.0,-0.008,0.0,-0.008,0.0}, 18);
SoIndexedFaceSet114->setCoord(*SoCoordinate115);

SoShape111->setGeometry(*SoIndexedFaceSet114);

SoHAnimSite109->addChild(*SoShape111);

SoHAnimSegment61->addChild(*SoHAnimSite109);

SoHAnimSite* SoHAnimSite116 = new SoHAnimSite();
SoHAnimSite116->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite116->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite116->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoTouchSensor* SoTouchSensor117 = new SoTouchSensor();
SoTouchSensor117->setDescription(QString("HAnimSite r_trochanterion"));
SoHAnimSite116->addChild(*SoTouchSensor117);

SoShape* SoShape118 = new SoShape();
SoShape118->setUSE(QString("HAnimSiteShape"));
SoHAnimSite116->addChild(*SoShape118);

SoHAnimSegment61->addChild(*SoHAnimSite116);

SoHAnimSite* SoHAnimSite119 = new SoHAnimSite();
SoHAnimSite119->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite119->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite119->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoTouchSensor* SoTouchSensor120 = new SoTouchSensor();
SoTouchSensor120->setDescription(QString("HAnimSite l_iliocristale"));
SoHAnimSite119->addChild(*SoTouchSensor120);

SoShape* SoShape121 = new SoShape();
SoShape121->setUSE(QString("HAnimSiteShape"));
SoHAnimSite119->addChild(*SoShape121);

SoHAnimSegment61->addChild(*SoHAnimSite119);

SoHAnimSite* SoHAnimSite122 = new SoHAnimSite();
SoHAnimSite122->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite122->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite122->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoTouchSensor* SoTouchSensor123 = new SoTouchSensor();
SoTouchSensor123->setDescription(QString("HAnimSite l_trochanterion"));
SoHAnimSite122->addChild(*SoTouchSensor123);

SoShape* SoShape124 = new SoShape();
SoShape124->setUSE(QString("HAnimSiteShape"));
SoHAnimSite122->addChild(*SoShape124);

SoHAnimSegment61->addChild(*SoHAnimSite122);

SoHAnimSite* SoHAnimSite125 = new SoHAnimSite();
SoHAnimSite125->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite125->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite125->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoTouchSensor* SoTouchSensor126 = new SoTouchSensor();
SoTouchSensor126->setDescription(QString("HAnimSite r_asis"));
SoHAnimSite125->addChild(*SoTouchSensor126);

SoShape* SoShape127 = new SoShape();
SoShape127->setUSE(QString("HAnimSiteShape"));
SoHAnimSite125->addChild(*SoShape127);

SoHAnimSegment61->addChild(*SoHAnimSite125);

SoHAnimSite* SoHAnimSite128 = new SoHAnimSite();
SoHAnimSite128->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite128->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite128->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoTouchSensor* SoTouchSensor129 = new SoTouchSensor();
SoTouchSensor129->setDescription(QString("HAnimSite l_asis"));
SoHAnimSite128->addChild(*SoTouchSensor129);

SoShape* SoShape130 = new SoShape();
SoShape130->setUSE(QString("HAnimSiteShape"));
SoHAnimSite128->addChild(*SoShape130);

SoHAnimSegment61->addChild(*SoHAnimSite128);

SoHAnimSite* SoHAnimSite131 = new SoHAnimSite();
SoHAnimSite131->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite131->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite131->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoTouchSensor* SoTouchSensor132 = new SoTouchSensor();
SoTouchSensor132->setDescription(QString("HAnimSite r_psis"));
SoHAnimSite131->addChild(*SoTouchSensor132);

SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("HAnimSiteShape"));
SoHAnimSite131->addChild(*SoShape133);

SoHAnimSegment61->addChild(*SoHAnimSite131);

SoHAnimSite* SoHAnimSite134 = new SoHAnimSite();
SoHAnimSite134->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite134->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite134->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoTouchSensor* SoTouchSensor135 = new SoTouchSensor();
SoTouchSensor135->setDescription(QString("HAnimSite l_psis"));
SoHAnimSite134->addChild(*SoTouchSensor135);

SoShape* SoShape136 = new SoShape();
SoShape136->setUSE(QString("HAnimSiteShape"));
SoHAnimSite134->addChild(*SoShape136);

SoHAnimSegment61->addChild(*SoHAnimSite134);

SoHAnimSite* SoHAnimSite137 = new SoHAnimSite();
SoHAnimSite137->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite137->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite137->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoTouchSensor* SoTouchSensor138 = new SoTouchSensor();
SoTouchSensor138->setDescription(QString("HAnimSite crotch"));
SoHAnimSite137->addChild(*SoTouchSensor138);

SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("HAnimSiteShape"));
SoHAnimSite137->addChild(*SoShape139);

SoHAnimSegment61->addChild(*SoHAnimSite137);

SoHAnimJoint60->addChildren(*SoHAnimSegment61);

SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->setDEF(QString("hanim_l_hip"));
SoHAnimJoint140->X3DNode::setName(QString("l_hip"));
SoHAnimJoint140->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment141 = new SoHAnimSegment();
SoHAnimSegment141->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment141->X3DNode::setName(QString("l_thigh"));
SoTouchSensor* SoTouchSensor142 = new SoTouchSensor();
SoTouchSensor142->setDescription(QString("HAnimJoint l_hip, HAnimSegment l_thigh"));
SoHAnimSegment141->addChild(*SoTouchSensor142);

SoTransform* SoTransform143 = new SoTransform();
SoTransform143->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoShape* SoShape144 = new SoShape();
SoShape144->setUSE(QString("HAnimJointShape"));
SoTransform143->addChild(*SoShape144);

SoHAnimSegment141->addChild(*SoTransform143);

SoShape* SoShape145 = new SoShape();
SoLineSet* SoLineSet146 = new SoLineSet();
SoLineSet146->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA147 = new SoColorRGBA();
SoColorRGBA147->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet146->addChild(*SoColorRGBA147);

SoCoordinate* SoCoordinate148 = new SoCoordinate();
SoCoordinate148->setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
SoLineSet146->setCoord(*SoCoordinate148);

SoShape145->setGeometry(*SoLineSet146);

SoHAnimSegment141->addChild(*SoShape145);

SoShape* SoShape149 = new SoShape();
SoLineSet* SoLineSet150 = new SoLineSet();
SoLineSet150->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA151 = new SoColorRGBA();
SoColorRGBA151->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet150->addChild(*SoColorRGBA151);

SoCoordinate* SoCoordinate152 = new SoCoordinate();
SoCoordinate152->setPoint(new float[]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309}, 6);
SoLineSet150->setCoord(*SoCoordinate152);

SoShape149->setGeometry(*SoLineSet150);

SoHAnimSegment141->addChild(*SoShape149);

SoShape* SoShape153 = new SoShape();
SoLineSet* SoLineSet154 = new SoLineSet();
SoLineSet154->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA155 = new SoColorRGBA();
SoColorRGBA155->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet154->addChild(*SoColorRGBA155);

SoCoordinate* SoCoordinate156 = new SoCoordinate();
SoCoordinate156->setPoint(new float[]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297}, 6);
SoLineSet154->setCoord(*SoCoordinate156);

SoShape153->setGeometry(*SoLineSet154);

SoHAnimSegment141->addChild(*SoShape153);

SoShape* SoShape157 = new SoShape();
SoLineSet* SoLineSet158 = new SoLineSet();
SoLineSet158->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA159 = new SoColorRGBA();
SoColorRGBA159->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet158->addChild(*SoColorRGBA159);

SoCoordinate* SoCoordinate160 = new SoCoordinate();
SoCoordinate160->setPoint(new float[]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303}, 6);
SoLineSet158->setCoord(*SoCoordinate160);

SoShape157->setGeometry(*SoLineSet158);

SoHAnimSegment141->addChild(*SoShape157);

SoHAnimSite* SoHAnimSite161 = new SoHAnimSite();
SoHAnimSite161->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite161->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite161->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoTouchSensor* SoTouchSensor162 = new SoTouchSensor();
SoTouchSensor162->setDescription(QString("HAnimSite l_knee_crease"));
SoHAnimSite161->addChild(*SoTouchSensor162);

SoShape* SoShape163 = new SoShape();
SoShape163->setUSE(QString("HAnimSiteShape"));
SoHAnimSite161->addChild(*SoShape163);

SoHAnimSegment141->addChild(*SoHAnimSite161);

SoHAnimSite* SoHAnimSite164 = new SoHAnimSite();
SoHAnimSite164->setDEF(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimSite164->X3DNode::setName(QString("l_femoral_lateral_epicn_pt"));
SoHAnimSite164->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoTouchSensor* SoTouchSensor165 = new SoTouchSensor();
SoTouchSensor165->setDescription(QString("HAnimSite l_femoral_lateral_epicn"));
SoHAnimSite164->addChild(*SoTouchSensor165);

SoShape* SoShape166 = new SoShape();
SoShape166->setUSE(QString("HAnimSiteShape"));
SoHAnimSite164->addChild(*SoShape166);

SoHAnimSegment141->addChild(*SoHAnimSite164);

SoHAnimSite* SoHAnimSite167 = new SoHAnimSite();
SoHAnimSite167->setDEF(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimSite167->X3DNode::setName(QString("l_femoral_medial_epicn_pt"));
SoHAnimSite167->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoTouchSensor* SoTouchSensor168 = new SoTouchSensor();
SoTouchSensor168->setDescription(QString("HAnimSite l_femoral_medial_epicn"));
SoHAnimSite167->addChild(*SoTouchSensor168);

SoShape* SoShape169 = new SoShape();
SoShape169->setUSE(QString("HAnimSiteShape"));
SoHAnimSite167->addChild(*SoShape169);

SoHAnimSegment141->addChild(*SoHAnimSite167);

SoHAnimJoint140->addChildren(*SoHAnimSegment141);

SoHAnimJoint* SoHAnimJoint170 = new SoHAnimJoint();
SoHAnimJoint170->setDEF(QString("hanim_l_knee"));
SoHAnimJoint170->X3DNode::setName(QString("l_knee"));
SoHAnimJoint170->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment171 = new SoHAnimSegment();
SoHAnimSegment171->setDEF(QString("hanim_l_calf"));
SoHAnimSegment171->X3DNode::setName(QString("l_calf"));
SoTouchSensor* SoTouchSensor172 = new SoTouchSensor();
SoTouchSensor172->setDescription(QString("HAnimJoint l_knee, HAnimSegment l_calf"));
SoHAnimSegment171->addChild(*SoTouchSensor172);

SoTransform* SoTransform173 = new SoTransform();
SoTransform173->setTranslation(new float[]{0.104,0.4867,0.0308});
SoShape* SoShape174 = new SoShape();
SoShape174->setUSE(QString("HAnimJointShape"));
SoTransform173->addChild(*SoShape174);

SoHAnimSegment171->addChild(*SoTransform173);

SoShape* SoShape175 = new SoShape();
SoLineSet* SoLineSet176 = new SoLineSet();
SoLineSet176->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA177 = new SoColorRGBA();
SoColorRGBA177->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet176->addChild(*SoColorRGBA177);

SoCoordinate* SoCoordinate178 = new SoCoordinate();
SoCoordinate178->setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
SoLineSet176->setCoord(*SoCoordinate178);

SoShape175->setGeometry(*SoLineSet176);

SoHAnimSegment171->addChild(*SoShape175);

SoHAnimJoint170->addChildren(*SoHAnimSegment171);

SoHAnimJoint* SoHAnimJoint179 = new SoHAnimJoint();
SoHAnimJoint179->setDEF(QString("hanim_l_ankle"));
SoHAnimJoint179->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint179->setRotation(new float[]{-0.999999999999999,0.0,0.0,0.486193023827777});
SoHAnimJoint179->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment180 = new SoHAnimSegment();
SoHAnimSegment180->setDEF(QString("hanim_l_hindfoot"));
SoHAnimSegment180->X3DNode::setName(QString("l_hindfoot"));
SoTouchSensor* SoTouchSensor181 = new SoTouchSensor();
SoTouchSensor181->setDescription(QString("HAnimJoint l_ankle, HAnimSegment l_hindfoot"));
SoHAnimSegment180->addChild(*SoTouchSensor181);

SoTransform* SoTransform182 = new SoTransform();
SoTransform182->setTranslation(new float[]{0.1101,0.0656,-0.0736});
SoShape* SoShape183 = new SoShape();
SoShape183->setUSE(QString("HAnimJointShape"));
SoTransform182->addChild(*SoShape183);

SoHAnimSegment180->addChild(*SoTransform182);

SoShape* SoShape184 = new SoShape();
SoLineSet* SoLineSet185 = new SoLineSet();
SoLineSet185->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA186 = new SoColorRGBA();
SoColorRGBA186->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet185->addChild(*SoColorRGBA186);

SoCoordinate* SoCoordinate187 = new SoCoordinate();
SoCoordinate187->setPoint(new float[]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368}, 6);
SoLineSet185->setCoord(*SoCoordinate187);

SoShape184->setGeometry(*SoLineSet185);

SoHAnimSegment180->addChild(*SoShape184);

SoShape* SoShape188 = new SoShape();
SoLineSet* SoLineSet189 = new SoLineSet();
SoLineSet189->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA190 = new SoColorRGBA();
SoColorRGBA190->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet189->addChild(*SoColorRGBA190);

SoCoordinate* SoCoordinate191 = new SoCoordinate();
SoCoordinate191->setPoint(new float[]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032}, 6);
SoLineSet189->setCoord(*SoCoordinate191);

SoShape188->setGeometry(*SoLineSet189);

SoHAnimSegment180->addChild(*SoShape188);

SoShape* SoShape192 = new SoShape();
SoLineSet* SoLineSet193 = new SoLineSet();
SoLineSet193->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA194 = new SoColorRGBA();
SoColorRGBA194->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet193->addChild(*SoColorRGBA194);

SoCoordinate* SoCoordinate195 = new SoCoordinate();
SoCoordinate195->setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881}, 6);
SoLineSet193->setCoord(*SoCoordinate195);

SoShape192->setGeometry(*SoLineSet193);

SoHAnimSegment180->addChild(*SoShape192);

SoShape* SoShape196 = new SoShape();
SoLineSet* SoLineSet197 = new SoLineSet();
SoLineSet197->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA198 = new SoColorRGBA();
SoColorRGBA198->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet197->addChild(*SoColorRGBA198);

SoCoordinate* SoCoordinate199 = new SoCoordinate();
SoCoordinate199->setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943}, 6);
SoLineSet197->setCoord(*SoCoordinate199);

SoShape196->setGeometry(*SoLineSet197);

SoHAnimSegment180->addChild(*SoShape196);

SoShape* SoShape200 = new SoShape();
SoLineSet* SoLineSet201 = new SoLineSet();
SoLineSet201->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA202 = new SoColorRGBA();
SoColorRGBA202->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet201->addChild(*SoColorRGBA202);

SoCoordinate* SoCoordinate203 = new SoCoordinate();
SoCoordinate203->setPoint(new float[]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171}, 6);
SoLineSet201->setCoord(*SoCoordinate203);

SoShape200->setGeometry(*SoLineSet201);

SoHAnimSegment180->addChild(*SoShape200);

SoHAnimSite* SoHAnimSite204 = new SoHAnimSite();
SoHAnimSite204->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite204->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite204->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoTouchSensor* SoTouchSensor205 = new SoTouchSensor();
SoTouchSensor205->setDescription(QString("HAnimSite l_lateral_malleolus"));
SoHAnimSite204->addChild(*SoTouchSensor205);

SoShape* SoShape206 = new SoShape();
SoShape206->setUSE(QString("HAnimSiteShape"));
SoHAnimSite204->addChild(*SoShape206);

SoHAnimSegment180->addChild(*SoHAnimSite204);

SoHAnimSite* SoHAnimSite207 = new SoHAnimSite();
SoHAnimSite207->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite207->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite207->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoTouchSensor* SoTouchSensor208 = new SoTouchSensor();
SoTouchSensor208->setDescription(QString("HAnimSite l_medial_malleolus"));
SoHAnimSite207->addChild(*SoTouchSensor208);

SoShape* SoShape209 = new SoShape();
SoShape209->setUSE(QString("HAnimSiteShape"));
SoHAnimSite207->addChild(*SoShape209);

SoHAnimSegment180->addChild(*SoHAnimSite207);

SoHAnimSite* SoHAnimSite210 = new SoHAnimSite();
SoHAnimSite210->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite210->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite210->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoTouchSensor* SoTouchSensor211 = new SoTouchSensor();
SoTouchSensor211->setDescription(QString("HAnimSite l_sphyrion"));
SoHAnimSite210->addChild(*SoTouchSensor211);

SoShape* SoShape212 = new SoShape();
SoShape212->setUSE(QString("HAnimSiteShape"));
SoHAnimSite210->addChild(*SoShape212);

SoHAnimSegment180->addChild(*SoHAnimSite210);

SoHAnimSite* SoHAnimSite213 = new SoHAnimSite();
SoHAnimSite213->setDEF(QString("hanim_l_calcaneous_post_pt"));
SoHAnimSite213->X3DNode::setName(QString("l_calcaneous_post_pt"));
SoHAnimSite213->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoTouchSensor* SoTouchSensor214 = new SoTouchSensor();
SoTouchSensor214->setDescription(QString("HAnimSite l_calcaneous_post"));
SoHAnimSite213->addChild(*SoTouchSensor214);

SoShape* SoShape215 = new SoShape();
SoShape215->setUSE(QString("HAnimSiteShape"));
SoHAnimSite213->addChild(*SoShape215);

SoHAnimSegment180->addChild(*SoHAnimSite213);

SoHAnimJoint179->addChildren(*SoHAnimSegment180);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setDEF(QString("hanim_l_subtalar"));
SoHAnimJoint216->X3DNode::setName(QString("l_subtalar"));
SoHAnimJoint216->setCenter(new float[]{0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment217 = new SoHAnimSegment();
SoHAnimSegment217->setDEF(QString("hanim_l_midproximal"));
SoHAnimSegment217->X3DNode::setName(QString("l_midproximal"));
SoTouchSensor* SoTouchSensor218 = new SoTouchSensor();
SoTouchSensor218->setDescription(QString("HAnimJoint l_subtalar, HAnimSegment l_midproximal"));
SoHAnimSegment217->addChild(*SoTouchSensor218);

SoTransform* SoTransform219 = new SoTransform();
SoTransform219->setTranslation(new float[]{0.1086,0.0001,-0.0368});
SoShape* SoShape220 = new SoShape();
SoShape220->setUSE(QString("HAnimJointShape"));
SoTransform219->addChild(*SoShape220);

SoHAnimSegment217->addChild(*SoTransform219);

SoShape* SoShape221 = new SoShape();
SoLineSet* SoLineSet222 = new SoLineSet();
SoLineSet222->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA223 = new SoColorRGBA();
SoColorRGBA223->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet222->addChild(*SoColorRGBA223);

SoCoordinate* SoCoordinate224 = new SoCoordinate();
SoCoordinate224->setPoint(new float[]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368}, 6);
SoLineSet222->setCoord(*SoCoordinate224);

SoShape221->setGeometry(*SoLineSet222);

SoHAnimSegment217->addChild(*SoShape221);

SoHAnimJoint216->addChildren(*SoHAnimSegment217);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setDEF(QString("hanim_l_midtarsal"));
SoHAnimJoint225->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint225->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment226 = new SoHAnimSegment();
SoHAnimSegment226->setDEF(QString("hanim_l_middistal"));
SoHAnimSegment226->X3DNode::setName(QString("l_middistal"));
SoTouchSensor* SoTouchSensor227 = new SoTouchSensor();
SoTouchSensor227->setDescription(QString("HAnimJoint l_midtarsal, HAnimSegment l_middistal"));
SoHAnimSegment226->addChild(*SoTouchSensor227);

SoTransform* SoTransform228 = new SoTransform();
SoTransform228->setTranslation(new float[]{0.1086,0.0001,0.0368});
SoShape* SoShape229 = new SoShape();
SoShape229->setUSE(QString("HAnimJointShape"));
SoTransform228->addChild(*SoShape229);

SoHAnimSegment226->addChild(*SoTransform228);

SoShape* SoShape230 = new SoShape();
SoLineSet* SoLineSet231 = new SoLineSet();
SoLineSet231->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA232 = new SoColorRGBA();
SoColorRGBA232->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet231->addChild(*SoColorRGBA232);

SoCoordinate* SoCoordinate233 = new SoCoordinate();
SoCoordinate233->setPoint(new float[]{0.1086,0.0001,0.0368,0.1086,0.0,0.0762}, 6);
SoLineSet231->setCoord(*SoCoordinate233);

SoShape230->setGeometry(*SoLineSet231);

SoHAnimSegment226->addChild(*SoShape230);

SoShape* SoShape234 = new SoShape();
SoLineSet* SoLineSet235 = new SoLineSet();
SoLineSet235->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA236 = new SoColorRGBA();
SoColorRGBA236->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet235->addChild(*SoColorRGBA236);

SoCoordinate* SoCoordinate237 = new SoCoordinate();
SoCoordinate237->setPoint(new float[]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106}, 6);
SoLineSet235->setCoord(*SoCoordinate237);

SoShape234->setGeometry(*SoLineSet235);

SoHAnimSegment226->addChild(*SoShape234);

SoHAnimSite* SoHAnimSite238 = new SoHAnimSite();
SoHAnimSite238->setDEF(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimSite238->X3DNode::setName(QString("l_metatarsal_pha1_pt"));
SoHAnimSite238->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoTouchSensor* SoTouchSensor239 = new SoTouchSensor();
SoTouchSensor239->setDescription(QString("HAnimSite l_metatarsal_pha1"));
SoHAnimSite238->addChild(*SoTouchSensor239);

SoShape* SoShape240 = new SoShape();
SoShape240->setUSE(QString("HAnimSiteShape"));
SoHAnimSite238->addChild(*SoShape240);

SoHAnimSegment226->addChild(*SoHAnimSite238);

SoHAnimJoint225->addChildren(*SoHAnimSegment226);

SoHAnimJoint* SoHAnimJoint241 = new SoHAnimJoint();
SoHAnimJoint241->setDEF(QString("hanim_l_metatarsal"));
SoHAnimJoint241->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint241->setRotation(new float[]{-1.0,0.0,0.0,0.270107235459875});
SoHAnimJoint241->setCenter(new float[]{0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment242 = new SoHAnimSegment();
SoHAnimSegment242->setDEF(QString("hanim_l_forefoot"));
SoHAnimSegment242->X3DNode::setName(QString("l_forefoot"));
SoTouchSensor* SoTouchSensor243 = new SoTouchSensor();
SoTouchSensor243->setDescription(QString("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"));
SoHAnimSegment242->addChild(*SoTouchSensor243);

SoTransform* SoTransform244 = new SoTransform();
SoTransform244->setTranslation(new float[]{0.1086,0.0,0.0762});
SoShape* SoShape245 = new SoShape();
SoShape245->setUSE(QString("HAnimJointShape"));
SoTransform244->addChild(*SoShape245);

SoHAnimSegment242->addChild(*SoTransform244);

SoShape* SoShape246 = new SoShape();
SoLineSet* SoLineSet247 = new SoLineSet();
SoLineSet247->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA248 = new SoColorRGBA();
SoColorRGBA248->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet247->addChild(*SoColorRGBA248);

SoCoordinate* SoCoordinate249 = new SoCoordinate();
SoCoordinate249->setPoint(new float[]{0.1086,0.0,0.0762,0.1354,0.0016,0.1476}, 6);
SoLineSet247->setCoord(*SoCoordinate249);

SoShape246->setGeometry(*SoLineSet247);

SoHAnimSegment242->addChild(*SoShape246);

SoShape* SoShape250 = new SoShape();
SoLineSet* SoLineSet251 = new SoLineSet();
SoLineSet251->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA252 = new SoColorRGBA();
SoColorRGBA252->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet251->addChild(*SoColorRGBA252);

SoCoordinate* SoCoordinate253 = new SoCoordinate();
SoCoordinate253->setPoint(new float[]{0.1086,0.0,0.0762,0.1825,0.007,0.0928}, 6);
SoLineSet251->setCoord(*SoCoordinate253);

SoShape250->setGeometry(*SoLineSet251);

SoHAnimSegment242->addChild(*SoShape250);

SoShape* SoShape254 = new SoShape();
SoLineSet* SoLineSet255 = new SoLineSet();
SoLineSet255->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA256 = new SoColorRGBA();
SoColorRGBA256->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet255->addChild(*SoColorRGBA256);

SoCoordinate* SoCoordinate257 = new SoCoordinate();
SoCoordinate257->setPoint(new float[]{0.1086,0.0,0.0762,0.1195,0.0079,0.1433}, 6);
SoLineSet255->setCoord(*SoCoordinate257);

SoShape254->setGeometry(*SoLineSet255);

SoHAnimSegment242->addChild(*SoShape254);

SoHAnimSite* SoHAnimSite258 = new SoHAnimSite();
SoHAnimSite258->setDEF(QString("hanim_l_forefoot_tip"));
SoHAnimSite258->X3DNode::setName(QString("l_forefoot_tip"));
SoHAnimSite258->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoTouchSensor* SoTouchSensor259 = new SoTouchSensor();
SoTouchSensor259->setDescription(QString("HAnimSite l_forefoot_tip"));
SoHAnimSite258->addChild(*SoTouchSensor259);

SoShape* SoShape260 = new SoShape();
SoShape260->setUSE(QString("HAnimSiteShape"));
SoHAnimSite258->addChild(*SoShape260);

SoHAnimSegment242->addChild(*SoHAnimSite258);

SoHAnimSite* SoHAnimSite261 = new SoHAnimSite();
SoHAnimSite261->setDEF(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimSite261->X3DNode::setName(QString("l_metatarsal_pha5_pt"));
SoHAnimSite261->setTranslation(new float[]{0.1825,0.007,0.0928});
SoTouchSensor* SoTouchSensor262 = new SoTouchSensor();
SoTouchSensor262->setDescription(QString("HAnimSite l_metatarsal_pha5"));
SoHAnimSite261->addChild(*SoTouchSensor262);

SoShape* SoShape263 = new SoShape();
SoShape263->setUSE(QString("HAnimSiteShape"));
SoHAnimSite261->addChild(*SoShape263);

SoHAnimSegment242->addChild(*SoHAnimSite261);

SoHAnimSite* SoHAnimSite264 = new SoHAnimSite();
SoHAnimSite264->setDEF(QString("hanim_l_digit2_pt"));
SoHAnimSite264->X3DNode::setName(QString("l_digit2_pt"));
SoHAnimSite264->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoTouchSensor* SoTouchSensor265 = new SoTouchSensor();
SoTouchSensor265->setDescription(QString("HAnimSite l_digit2"));
SoHAnimSite264->addChild(*SoTouchSensor265);

SoShape* SoShape266 = new SoShape();
SoShape266->setUSE(QString("HAnimSiteShape"));
SoHAnimSite264->addChild(*SoShape266);

SoHAnimSegment242->addChild(*SoHAnimSite264);

SoHAnimJoint241->addChildren(*SoHAnimSegment242);

SoHAnimJoint225->addChildren(*SoHAnimJoint241);

SoHAnimJoint216->addChildren(*SoHAnimJoint225);

SoHAnimJoint179->addChildren(*SoHAnimJoint216);

SoHAnimJoint170->addChildren(*SoHAnimJoint179);

SoHAnimJoint140->addChildren(*SoHAnimJoint170);

SoHAnimJoint60->addChildren(*SoHAnimJoint140);

SoHAnimJoint* SoHAnimJoint267 = new SoHAnimJoint();
SoHAnimJoint267->setDEF(QString("hanim_r_hip"));
SoHAnimJoint267->X3DNode::setName(QString("r_hip"));
SoHAnimJoint267->setRotation(new float[]{0.999999999999999,0.0,0.0,0.486193023827777});
SoHAnimJoint267->setCenter(new float[]{-0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment268 = new SoHAnimSegment();
SoHAnimSegment268->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment268->X3DNode::setName(QString("r_thigh"));
SoTouchSensor* SoTouchSensor269 = new SoTouchSensor();
SoTouchSensor269->setDescription(QString("HAnimJoint r_hip, HAnimSegment r_thigh"));
SoHAnimSegment268->addChild(*SoTouchSensor269);

SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setTranslation(new float[]{-0.0961,0.9124,-0.0001});
SoShape* SoShape271 = new SoShape();
SoShape271->setUSE(QString("HAnimJointShape"));
SoTransform270->addChild(*SoShape271);

SoHAnimSegment268->addChild(*SoTransform270);

SoShape* SoShape272 = new SoShape();
SoLineSet* SoLineSet273 = new SoLineSet();
SoLineSet273->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA274 = new SoColorRGBA();
SoColorRGBA274->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet273->addChild(*SoColorRGBA274);

SoCoordinate* SoCoordinate275 = new SoCoordinate();
SoCoordinate275->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308}, 6);
SoLineSet273->setCoord(*SoCoordinate275);

SoShape272->setGeometry(*SoLineSet273);

SoHAnimSegment268->addChild(*SoShape272);

SoShape* SoShape276 = new SoShape();
SoLineSet* SoLineSet277 = new SoLineSet();
SoLineSet277->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA278 = new SoColorRGBA();
SoColorRGBA278->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet277->addChild(*SoColorRGBA278);

SoCoordinate* SoCoordinate279 = new SoCoordinate();
SoCoordinate279->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326}, 6);
SoLineSet277->setCoord(*SoCoordinate279);

SoShape276->setGeometry(*SoLineSet277);

SoHAnimSegment268->addChild(*SoShape276);

SoShape* SoShape280 = new SoShape();
SoLineSet* SoLineSet281 = new SoLineSet();
SoLineSet281->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA282 = new SoColorRGBA();
SoColorRGBA282->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet281->addChild(*SoColorRGBA282);

SoCoordinate* SoCoordinate283 = new SoCoordinate();
SoCoordinate283->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031}, 6);
SoLineSet281->setCoord(*SoCoordinate283);

SoShape280->setGeometry(*SoLineSet281);

SoHAnimSegment268->addChild(*SoShape280);

SoShape* SoShape284 = new SoShape();
SoLineSet* SoLineSet285 = new SoLineSet();
SoLineSet285->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA286 = new SoColorRGBA();
SoColorRGBA286->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet285->addChild(*SoColorRGBA286);

SoCoordinate* SoCoordinate287 = new SoCoordinate();
SoCoordinate287->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289}, 6);
SoLineSet285->setCoord(*SoCoordinate287);

SoShape284->setGeometry(*SoLineSet285);

SoHAnimSegment268->addChild(*SoShape284);

SoHAnimSite* SoHAnimSite288 = new SoHAnimSite();
SoHAnimSite288->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite288->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite288->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoTouchSensor* SoTouchSensor289 = new SoTouchSensor();
SoTouchSensor289->setDescription(QString("HAnimSite r_knee_crease"));
SoHAnimSite288->addChild(*SoTouchSensor289);

SoShape* SoShape290 = new SoShape();
SoShape290->setUSE(QString("HAnimSiteShape"));
SoHAnimSite288->addChild(*SoShape290);

SoHAnimSegment268->addChild(*SoHAnimSite288);

SoHAnimSite* SoHAnimSite291 = new SoHAnimSite();
SoHAnimSite291->setDEF(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimSite291->X3DNode::setName(QString("r_femoral_lateral_epicn_pt"));
SoHAnimSite291->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoTouchSensor* SoTouchSensor292 = new SoTouchSensor();
SoTouchSensor292->setDescription(QString("HAnimSite r_femoral_lateral_epicn"));
SoHAnimSite291->addChild(*SoTouchSensor292);

SoShape* SoShape293 = new SoShape();
SoShape293->setUSE(QString("HAnimSiteShape"));
SoHAnimSite291->addChild(*SoShape293);

SoHAnimSegment268->addChild(*SoHAnimSite291);

SoHAnimSite* SoHAnimSite294 = new SoHAnimSite();
SoHAnimSite294->setDEF(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimSite294->X3DNode::setName(QString("r_femoral_medial_epicn_pt"));
SoHAnimSite294->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoTouchSensor* SoTouchSensor295 = new SoTouchSensor();
SoTouchSensor295->setDescription(QString("HAnimSite r_femoral_medial_epicn"));
SoHAnimSite294->addChild(*SoTouchSensor295);

SoShape* SoShape296 = new SoShape();
SoShape296->setUSE(QString("HAnimSiteShape"));
SoHAnimSite294->addChild(*SoShape296);

SoHAnimSegment268->addChild(*SoHAnimSite294);

SoHAnimJoint267->addChildren(*SoHAnimSegment268);

SoHAnimJoint* SoHAnimJoint297 = new SoHAnimJoint();
SoHAnimJoint297->setDEF(QString("hanim_r_knee"));
SoHAnimJoint297->X3DNode::setName(QString("r_knee"));
SoHAnimJoint297->setRotation(new float[]{1.0,0.0,0.0,1.05341821829351});
SoHAnimJoint297->setCenter(new float[]{-0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment298 = new SoHAnimSegment();
SoHAnimSegment298->setDEF(QString("hanim_r_calf"));
SoHAnimSegment298->X3DNode::setName(QString("r_calf"));
SoTouchSensor* SoTouchSensor299 = new SoTouchSensor();
SoTouchSensor299->setDescription(QString("HAnimJoint r_knee, HAnimSegment r_calf"));
SoHAnimSegment298->addChild(*SoTouchSensor299);

SoTransform* SoTransform300 = new SoTransform();
SoTransform300->setTranslation(new float[]{-0.104,0.4867,0.0308});
SoShape* SoShape301 = new SoShape();
SoShape301->setUSE(QString("HAnimJointShape"));
SoTransform300->addChild(*SoShape301);

SoHAnimSegment298->addChild(*SoTransform300);

SoShape* SoShape302 = new SoShape();
SoLineSet* SoLineSet303 = new SoLineSet();
SoLineSet303->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA304 = new SoColorRGBA();
SoColorRGBA304->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet303->addChild(*SoColorRGBA304);

SoCoordinate* SoCoordinate305 = new SoCoordinate();
SoCoordinate305->setPoint(new float[]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736}, 6);
SoLineSet303->setCoord(*SoCoordinate305);

SoShape302->setGeometry(*SoLineSet303);

SoHAnimSegment298->addChild(*SoShape302);

SoHAnimJoint297->addChildren(*SoHAnimSegment298);

SoHAnimJoint* SoHAnimJoint306 = new SoHAnimJoint();
SoHAnimJoint306->setDEF(QString("hanim_r_ankle"));
SoHAnimJoint306->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint306->setRotation(new float[]{-0.999999999999999,0.0,0.0,0.486193023827777});
SoHAnimJoint306->setCenter(new float[]{-0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment307 = new SoHAnimSegment();
SoHAnimSegment307->setDEF(QString("hanim_r_hindfoot"));
SoHAnimSegment307->X3DNode::setName(QString("r_hindfoot"));
SoTouchSensor* SoTouchSensor308 = new SoTouchSensor();
SoTouchSensor308->setDescription(QString("HAnimJoint r_ankle, HAnimSegment r_hindfoot"));
SoHAnimSegment307->addChild(*SoTouchSensor308);

SoTransform* SoTransform309 = new SoTransform();
SoTransform309->setTranslation(new float[]{-0.1101,0.0656,-0.0736});
SoShape* SoShape310 = new SoShape();
SoShape310->setUSE(QString("HAnimJointShape"));
SoTransform309->addChild(*SoShape310);

SoHAnimSegment307->addChild(*SoTransform309);

SoShape* SoShape311 = new SoShape();
SoLineSet* SoLineSet312 = new SoLineSet();
SoLineSet312->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA313 = new SoColorRGBA();
SoColorRGBA313->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet312->addChild(*SoColorRGBA313);

SoCoordinate* SoCoordinate314 = new SoCoordinate();
SoCoordinate314->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368}, 6);
SoLineSet312->setCoord(*SoCoordinate314);

SoShape311->setGeometry(*SoLineSet312);

SoHAnimSegment307->addChild(*SoShape311);

SoShape* SoShape315 = new SoShape();
SoLineSet* SoLineSet316 = new SoLineSet();
SoLineSet316->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA317 = new SoColorRGBA();
SoColorRGBA317->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet316->addChild(*SoColorRGBA317);

SoCoordinate* SoCoordinate318 = new SoCoordinate();
SoCoordinate318->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075}, 6);
SoLineSet316->setCoord(*SoCoordinate318);

SoShape315->setGeometry(*SoLineSet316);

SoHAnimSegment307->addChild(*SoShape315);

SoShape* SoShape319 = new SoShape();
SoLineSet* SoLineSet320 = new SoLineSet();
SoLineSet320->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA321 = new SoColorRGBA();
SoColorRGBA321->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet320->addChild(*SoColorRGBA321);

SoCoordinate* SoCoordinate322 = new SoCoordinate();
SoCoordinate322->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928}, 6);
SoLineSet320->setCoord(*SoCoordinate322);

SoShape319->setGeometry(*SoLineSet320);

SoHAnimSegment307->addChild(*SoShape319);

SoShape* SoShape323 = new SoShape();
SoLineSet* SoLineSet324 = new SoLineSet();
SoLineSet324->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA325 = new SoColorRGBA();
SoColorRGBA325->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet324->addChild(*SoColorRGBA325);

SoCoordinate* SoCoordinate326 = new SoCoordinate();
SoCoordinate326->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002}, 6);
SoLineSet324->setCoord(*SoCoordinate326);

SoShape323->setGeometry(*SoLineSet324);

SoHAnimSegment307->addChild(*SoShape323);

SoShape* SoShape327 = new SoShape();
SoLineSet* SoLineSet328 = new SoLineSet();
SoLineSet328->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA329 = new SoColorRGBA();
SoColorRGBA329->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet328->addChild(*SoColorRGBA329);

SoCoordinate* SoCoordinate330 = new SoCoordinate();
SoCoordinate330->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221}, 6);
SoLineSet328->setCoord(*SoCoordinate330);

SoShape327->setGeometry(*SoLineSet328);

SoHAnimSegment307->addChild(*SoShape327);

SoHAnimSite* SoHAnimSite331 = new SoHAnimSite();
SoHAnimSite331->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite331->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite331->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoTouchSensor* SoTouchSensor332 = new SoTouchSensor();
SoTouchSensor332->setDescription(QString("HAnimSite r_lateral_malleolus"));
SoHAnimSite331->addChild(*SoTouchSensor332);

SoShape* SoShape333 = new SoShape();
SoShape333->setUSE(QString("HAnimSiteShape"));
SoHAnimSite331->addChild(*SoShape333);

SoHAnimSegment307->addChild(*SoHAnimSite331);

SoHAnimSite* SoHAnimSite334 = new SoHAnimSite();
SoHAnimSite334->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite334->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite334->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoTouchSensor* SoTouchSensor335 = new SoTouchSensor();
SoTouchSensor335->setDescription(QString("HAnimSite r_medial_malleolus"));
SoHAnimSite334->addChild(*SoTouchSensor335);

SoShape* SoShape336 = new SoShape();
SoShape336->setUSE(QString("HAnimSiteShape"));
SoHAnimSite334->addChild(*SoShape336);

SoHAnimSegment307->addChild(*SoHAnimSite334);

SoHAnimSite* SoHAnimSite337 = new SoHAnimSite();
SoHAnimSite337->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite337->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite337->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoTouchSensor* SoTouchSensor338 = new SoTouchSensor();
SoTouchSensor338->setDescription(QString("HAnimSite r_sphyrion"));
SoHAnimSite337->addChild(*SoTouchSensor338);

SoShape* SoShape339 = new SoShape();
SoShape339->setUSE(QString("HAnimSiteShape"));
SoHAnimSite337->addChild(*SoShape339);

SoHAnimSegment307->addChild(*SoHAnimSite337);

SoHAnimSite* SoHAnimSite340 = new SoHAnimSite();
SoHAnimSite340->setDEF(QString("hanim_r_calcaneous_post_pt"));
SoHAnimSite340->X3DNode::setName(QString("r_calcaneous_post_pt"));
SoHAnimSite340->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoTouchSensor* SoTouchSensor341 = new SoTouchSensor();
SoTouchSensor341->setDescription(QString("HAnimSite r_calcaneous_post"));
SoHAnimSite340->addChild(*SoTouchSensor341);

SoShape* SoShape342 = new SoShape();
SoShape342->setUSE(QString("HAnimSiteShape"));
SoHAnimSite340->addChild(*SoShape342);

SoHAnimSegment307->addChild(*SoHAnimSite340);

SoHAnimJoint306->addChildren(*SoHAnimSegment307);

SoHAnimJoint* SoHAnimJoint343 = new SoHAnimJoint();
SoHAnimJoint343->setDEF(QString("hanim_r_subtalar"));
SoHAnimJoint343->X3DNode::setName(QString("r_subtalar"));
SoHAnimJoint343->setCenter(new float[]{-0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment344 = new SoHAnimSegment();
SoHAnimSegment344->setDEF(QString("hanim_r_midproximal"));
SoHAnimSegment344->X3DNode::setName(QString("r_midproximal"));
SoTouchSensor* SoTouchSensor345 = new SoTouchSensor();
SoTouchSensor345->setDescription(QString("HAnimJoint r_subtalar, HAnimSegment r_midproximal"));
SoHAnimSegment344->addChild(*SoTouchSensor345);

SoTransform* SoTransform346 = new SoTransform();
SoTransform346->setTranslation(new float[]{-0.1086,0.0001,-0.0368});
SoShape* SoShape347 = new SoShape();
SoShape347->setUSE(QString("HAnimJointShape"));
SoTransform346->addChild(*SoShape347);

SoHAnimSegment344->addChild(*SoTransform346);

SoShape* SoShape348 = new SoShape();
SoLineSet* SoLineSet349 = new SoLineSet();
SoLineSet349->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA350 = new SoColorRGBA();
SoColorRGBA350->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet349->addChild(*SoColorRGBA350);

SoCoordinate* SoCoordinate351 = new SoCoordinate();
SoCoordinate351->setPoint(new float[]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368}, 6);
SoLineSet349->setCoord(*SoCoordinate351);

SoShape348->setGeometry(*SoLineSet349);

SoHAnimSegment344->addChild(*SoShape348);

SoHAnimJoint343->addChildren(*SoHAnimSegment344);

SoHAnimJoint* SoHAnimJoint352 = new SoHAnimJoint();
SoHAnimJoint352->setDEF(QString("hanim_r_midtarsal"));
SoHAnimJoint352->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint352->setCenter(new float[]{-0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment353 = new SoHAnimSegment();
SoHAnimSegment353->setDEF(QString("hanim_r_middistal"));
SoHAnimSegment353->X3DNode::setName(QString("r_middistal"));
SoTouchSensor* SoTouchSensor354 = new SoTouchSensor();
SoTouchSensor354->setDescription(QString("HAnimJoint r_midtarsal, HAnimSegment r_middistal"));
SoHAnimSegment353->addChild(*SoTouchSensor354);

SoTransform* SoTransform355 = new SoTransform();
SoTransform355->setTranslation(new float[]{-0.1086,0.0001,0.0368});
SoShape* SoShape356 = new SoShape();
SoShape356->setUSE(QString("HAnimJointShape"));
SoTransform355->addChild(*SoShape356);

SoHAnimSegment353->addChild(*SoTransform355);

SoShape* SoShape357 = new SoShape();
SoLineSet* SoLineSet358 = new SoLineSet();
SoLineSet358->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA359 = new SoColorRGBA();
SoColorRGBA359->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet358->addChild(*SoColorRGBA359);

SoCoordinate* SoCoordinate360 = new SoCoordinate();
SoCoordinate360->setPoint(new float[]{-0.1086,0.0001,0.0368,-0.1086,0.0,0.0762}, 6);
SoLineSet358->setCoord(*SoCoordinate360);

SoShape357->setGeometry(*SoLineSet358);

SoHAnimSegment353->addChild(*SoShape357);

SoShape* SoShape361 = new SoShape();
SoLineSet* SoLineSet362 = new SoLineSet();
SoLineSet362->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA363 = new SoColorRGBA();
SoColorRGBA363->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet362->addChild(*SoColorRGBA363);

SoCoordinate* SoCoordinate364 = new SoCoordinate();
SoCoordinate364->setPoint(new float[]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127}, 6);
SoLineSet362->setCoord(*SoCoordinate364);

SoShape361->setGeometry(*SoLineSet362);

SoHAnimSegment353->addChild(*SoShape361);

SoHAnimSite* SoHAnimSite365 = new SoHAnimSite();
SoHAnimSite365->setDEF(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimSite365->X3DNode::setName(QString("r_metatarsal_pha1_pt"));
SoHAnimSite365->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoTouchSensor* SoTouchSensor366 = new SoTouchSensor();
SoTouchSensor366->setDescription(QString("HAnimSite r_metatarsal_pha1"));
SoHAnimSite365->addChild(*SoTouchSensor366);

SoShape* SoShape367 = new SoShape();
SoShape367->setUSE(QString("HAnimSiteShape"));
SoHAnimSite365->addChild(*SoShape367);

SoHAnimSegment353->addChild(*SoHAnimSite365);

SoHAnimJoint352->addChildren(*SoHAnimSegment353);

SoHAnimJoint* SoHAnimJoint368 = new SoHAnimJoint();
SoHAnimJoint368->setDEF(QString("hanim_r_metatarsal"));
SoHAnimJoint368->X3DNode::setName(QString("r_metatarsal"));
SoHAnimJoint368->setRotation(new float[]{-1.0,0.0,0.0,0.270107235459875});
SoHAnimJoint368->setCenter(new float[]{-0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment369 = new SoHAnimSegment();
SoHAnimSegment369->setDEF(QString("hanim_r_forefoot"));
SoHAnimSegment369->X3DNode::setName(QString("r_forefoot"));
SoTouchSensor* SoTouchSensor370 = new SoTouchSensor();
SoTouchSensor370->setDescription(QString("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"));
SoHAnimSegment369->addChild(*SoTouchSensor370);

SoTransform* SoTransform371 = new SoTransform();
SoTransform371->setTranslation(new float[]{-0.1086,0.0,0.0762});
SoShape* SoShape372 = new SoShape();
SoShape372->setUSE(QString("HAnimJointShape"));
SoTransform371->addChild(*SoShape372);

SoHAnimSegment369->addChild(*SoTransform371);

SoShape* SoShape373 = new SoShape();
SoLineSet* SoLineSet374 = new SoLineSet();
SoLineSet374->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA375 = new SoColorRGBA();
SoColorRGBA375->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet374->addChild(*SoColorRGBA375);

SoCoordinate* SoCoordinate376 = new SoCoordinate();
SoCoordinate376->setPoint(new float[]{-0.1086,0.0,0.0762,-0.1043,0.0227,0.145}, 6);
SoLineSet374->setCoord(*SoCoordinate376);

SoShape373->setGeometry(*SoLineSet374);

SoHAnimSegment369->addChild(*SoShape373);

SoShape* SoShape377 = new SoShape();
SoLineSet* SoLineSet378 = new SoLineSet();
SoLineSet378->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA379 = new SoColorRGBA();
SoColorRGBA379->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet378->addChild(*SoColorRGBA379);

SoCoordinate* SoCoordinate380 = new SoCoordinate();
SoCoordinate380->setPoint(new float[]{-0.1086,0.0,0.0762,-0.1523,0.0166,0.0895}, 6);
SoLineSet378->setCoord(*SoCoordinate380);

SoShape377->setGeometry(*SoLineSet378);

SoHAnimSegment369->addChild(*SoShape377);

SoShape* SoShape381 = new SoShape();
SoLineSet* SoLineSet382 = new SoLineSet();
SoLineSet382->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA383 = new SoColorRGBA();
SoColorRGBA383->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet382->addChild(*SoColorRGBA383);

SoCoordinate* SoCoordinate384 = new SoCoordinate();
SoCoordinate384->setPoint(new float[]{-0.1086,0.0,0.0762,-0.0883,0.0134,0.1383}, 6);
SoLineSet382->setCoord(*SoCoordinate384);

SoShape381->setGeometry(*SoLineSet382);

SoHAnimSegment369->addChild(*SoShape381);

SoHAnimSite* SoHAnimSite385 = new SoHAnimSite();
SoHAnimSite385->setDEF(QString("hanim_r_forefoot_tip"));
SoHAnimSite385->X3DNode::setName(QString("r_forefoot_tip"));
SoHAnimSite385->setTranslation(new float[]{-0.1043,0.0227,0.145});
SoTouchSensor* SoTouchSensor386 = new SoTouchSensor();
SoTouchSensor386->setDescription(QString("HAnimSite r_forefoot_tip"));
SoHAnimSite385->addChild(*SoTouchSensor386);

SoShape* SoShape387 = new SoShape();
SoShape387->setUSE(QString("HAnimSiteShape"));
SoHAnimSite385->addChild(*SoShape387);

SoHAnimSegment369->addChild(*SoHAnimSite385);

SoHAnimSite* SoHAnimSite388 = new SoHAnimSite();
SoHAnimSite388->setDEF(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimSite388->X3DNode::setName(QString("r_metatarsal_pha5_pt"));
SoHAnimSite388->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoTouchSensor* SoTouchSensor389 = new SoTouchSensor();
SoTouchSensor389->setDescription(QString("HAnimSite r_metatarsal_pha5"));
SoHAnimSite388->addChild(*SoTouchSensor389);

SoShape* SoShape390 = new SoShape();
SoShape390->setUSE(QString("HAnimSiteShape"));
SoHAnimSite388->addChild(*SoShape390);

SoHAnimSegment369->addChild(*SoHAnimSite388);

SoHAnimSite* SoHAnimSite391 = new SoHAnimSite();
SoHAnimSite391->setDEF(QString("hanim_r_digit2_pt"));
SoHAnimSite391->X3DNode::setName(QString("r_digit2_pt"));
SoHAnimSite391->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoTouchSensor* SoTouchSensor392 = new SoTouchSensor();
SoTouchSensor392->setDescription(QString("HAnimSite r_digit2"));
SoHAnimSite391->addChild(*SoTouchSensor392);

SoShape* SoShape393 = new SoShape();
SoShape393->setUSE(QString("HAnimSiteShape"));
SoHAnimSite391->addChild(*SoShape393);

SoHAnimSegment369->addChild(*SoHAnimSite391);

SoHAnimJoint368->addChildren(*SoHAnimSegment369);

SoHAnimJoint352->addChildren(*SoHAnimJoint368);

SoHAnimJoint343->addChildren(*SoHAnimJoint352);

SoHAnimJoint306->addChildren(*SoHAnimJoint343);

SoHAnimJoint297->addChildren(*SoHAnimJoint306);

SoHAnimJoint267->addChildren(*SoHAnimJoint297);

SoHAnimJoint60->addChildren(*SoHAnimJoint267);

SoHAnimJoint44->addChildren(*SoHAnimJoint60);

SoHAnimJoint* SoHAnimJoint394 = new SoHAnimJoint();
SoHAnimJoint394->setDEF(QString("hanim_vl5"));
SoHAnimJoint394->X3DNode::setName(QString("vl5"));
SoHAnimJoint394->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimSegment* SoHAnimSegment395 = new SoHAnimSegment();
SoHAnimSegment395->setDEF(QString("hanim_l5"));
SoHAnimSegment395->X3DNode::setName(QString("l5"));
SoTouchSensor* SoTouchSensor396 = new SoTouchSensor();
SoTouchSensor396->setDescription(QString("HAnimJoint vl5, HAnimSegment l5"));
SoHAnimSegment395->addChild(*SoTouchSensor396);

SoTransform* SoTransform397 = new SoTransform();
SoTransform397->setTranslation(new float[]{0.0028,1.0568,-0.0776});
SoShape* SoShape398 = new SoShape();
SoShape398->setUSE(QString("HAnimJointShape"));
SoTransform397->addChild(*SoShape398);

SoHAnimSegment395->addChild(*SoTransform397);

SoShape* SoShape399 = new SoShape();
SoLineSet* SoLineSet400 = new SoLineSet();
SoLineSet400->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA401 = new SoColorRGBA();
SoColorRGBA401->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet400->addChild(*SoColorRGBA401);

SoCoordinate* SoCoordinate402 = new SoCoordinate();
SoCoordinate402->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
SoLineSet400->setCoord(*SoCoordinate402);

SoShape399->setGeometry(*SoLineSet400);

SoHAnimSegment395->addChild(*SoShape399);

SoShape* SoShape403 = new SoShape();
SoLineSet* SoLineSet404 = new SoLineSet();
SoLineSet404->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA405 = new SoColorRGBA();
SoColorRGBA405->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet404->addChild(*SoColorRGBA405);

SoCoordinate* SoCoordinate406 = new SoCoordinate();
SoCoordinate406->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0,1.0915,-0.1091}, 6);
SoLineSet404->setCoord(*SoCoordinate406);

SoShape403->setGeometry(*SoLineSet404);

SoHAnimSegment395->addChild(*SoShape403);

SoShape* SoShape407 = new SoShape();
SoLineSet* SoLineSet408 = new SoLineSet();
SoLineSet408->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA409 = new SoColorRGBA();
SoColorRGBA409->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet408->addChild(*SoColorRGBA409);

SoCoordinate* SoCoordinate410 = new SoCoordinate();
SoCoordinate410->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017}, 6);
SoLineSet408->setCoord(*SoCoordinate410);

SoShape407->setGeometry(*SoLineSet408);

SoHAnimSegment395->addChild(*SoShape407);

SoHAnimSite* SoHAnimSite411 = new SoHAnimSite();
SoHAnimSite411->setDEF(QString("hanim_waist_preferred_post_pt"));
SoHAnimSite411->X3DNode::setName(QString("waist_preferred_post_pt"));
SoHAnimSite411->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoTouchSensor* SoTouchSensor412 = new SoTouchSensor();
SoTouchSensor412->setDescription(QString("HAnimSite waist_preferred_post"));
SoHAnimSite411->addChild(*SoTouchSensor412);

SoShape* SoShape413 = new SoShape();
SoShape413->setUSE(QString("HAnimSiteShape"));
SoHAnimSite411->addChild(*SoShape413);

SoHAnimSegment395->addChild(*SoHAnimSite411);

SoHAnimSite* SoHAnimSite414 = new SoHAnimSite();
SoHAnimSite414->setDEF(QString("hanim_navel_pt"));
SoHAnimSite414->X3DNode::setName(QString("navel_pt"));
SoHAnimSite414->setTranslation(new float[]{0.0069,1.0966,0.1017});
SoTouchSensor* SoTouchSensor415 = new SoTouchSensor();
SoTouchSensor415->setDescription(QString("HAnimSite navel"));
SoHAnimSite414->addChild(*SoTouchSensor415);

SoShape* SoShape416 = new SoShape();
SoShape416->setUSE(QString("HAnimSiteShape"));
SoHAnimSite414->addChild(*SoShape416);

SoHAnimSegment395->addChild(*SoHAnimSite414);

SoHAnimJoint394->addChildren(*SoHAnimSegment395);

SoHAnimJoint* SoHAnimJoint417 = new SoHAnimJoint();
SoHAnimJoint417->setDEF(QString("hanim_vl4"));
SoHAnimJoint417->X3DNode::setName(QString("vl4"));
SoHAnimJoint417->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimSegment* SoHAnimSegment418 = new SoHAnimSegment();
SoHAnimSegment418->setDEF(QString("hanim_l4"));
SoHAnimSegment418->X3DNode::setName(QString("l4"));
SoTouchSensor* SoTouchSensor419 = new SoTouchSensor();
SoTouchSensor419->setDescription(QString("HAnimJoint vl4, HAnimSegment l4"));
SoHAnimSegment418->addChild(*SoTouchSensor419);

SoTransform* SoTransform420 = new SoTransform();
SoTransform420->setTranslation(new float[]{0.0035,1.0925,-0.0787});
SoShape* SoShape421 = new SoShape();
SoShape421->setUSE(QString("HAnimJointShape"));
SoTransform420->addChild(*SoShape421);

SoHAnimSegment418->addChild(*SoTransform420);

SoShape* SoShape422 = new SoShape();
SoLineSet* SoLineSet423 = new SoLineSet();
SoLineSet423->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA424 = new SoColorRGBA();
SoColorRGBA424->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet423->addChild(*SoColorRGBA424);

SoCoordinate* SoCoordinate425 = new SoCoordinate();
SoCoordinate425->setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
SoLineSet423->setCoord(*SoCoordinate425);

SoShape422->setGeometry(*SoLineSet423);

SoHAnimSegment418->addChild(*SoShape422);

SoHAnimJoint417->addChildren(*SoHAnimSegment418);

SoHAnimJoint* SoHAnimJoint426 = new SoHAnimJoint();
SoHAnimJoint426->setDEF(QString("hanim_vl3"));
SoHAnimJoint426->X3DNode::setName(QString("vl3"));
SoHAnimJoint426->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimSegment* SoHAnimSegment427 = new SoHAnimSegment();
SoHAnimSegment427->setDEF(QString("hanim_l3"));
SoHAnimSegment427->X3DNode::setName(QString("l3"));
SoTouchSensor* SoTouchSensor428 = new SoTouchSensor();
SoTouchSensor428->setDescription(QString("HAnimJoint vl3, HAnimSegment l3"));
SoHAnimSegment427->addChild(*SoTouchSensor428);

SoTransform* SoTransform429 = new SoTransform();
SoTransform429->setTranslation(new float[]{0.0041,1.1276,-0.0796});
SoShape* SoShape430 = new SoShape();
SoShape430->setUSE(QString("HAnimJointShape"));
SoTransform429->addChild(*SoShape430);

SoHAnimSegment427->addChild(*SoTransform429);

SoShape* SoShape431 = new SoShape();
SoLineSet* SoLineSet432 = new SoLineSet();
SoLineSet432->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA433 = new SoColorRGBA();
SoColorRGBA433->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet432->addChild(*SoColorRGBA433);

SoCoordinate* SoCoordinate434 = new SoCoordinate();
SoCoordinate434->setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
SoLineSet432->setCoord(*SoCoordinate434);

SoShape431->setGeometry(*SoLineSet432);

SoHAnimSegment427->addChild(*SoShape431);

SoHAnimJoint426->addChildren(*SoHAnimSegment427);

SoHAnimJoint* SoHAnimJoint435 = new SoHAnimJoint();
SoHAnimJoint435->setDEF(QString("hanim_vl2"));
SoHAnimJoint435->X3DNode::setName(QString("vl2"));
SoHAnimJoint435->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimSegment* SoHAnimSegment436 = new SoHAnimSegment();
SoHAnimSegment436->setDEF(QString("hanim_l2"));
SoHAnimSegment436->X3DNode::setName(QString("l2"));
SoTouchSensor* SoTouchSensor437 = new SoTouchSensor();
SoTouchSensor437->setDescription(QString("HAnimJoint vl2, HAnimSegment l2"));
SoHAnimSegment436->addChild(*SoTouchSensor437);

SoTransform* SoTransform438 = new SoTransform();
SoTransform438->setTranslation(new float[]{0.0045,1.1546,-0.08});
SoShape* SoShape439 = new SoShape();
SoShape439->setUSE(QString("HAnimJointShape"));
SoTransform438->addChild(*SoShape439);

SoHAnimSegment436->addChild(*SoTransform438);

SoShape* SoShape440 = new SoShape();
SoLineSet* SoLineSet441 = new SoLineSet();
SoLineSet441->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA442 = new SoColorRGBA();
SoColorRGBA442->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet441->addChild(*SoColorRGBA442);

SoCoordinate* SoCoordinate443 = new SoCoordinate();
SoCoordinate443->setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
SoLineSet441->setCoord(*SoCoordinate443);

SoShape440->setGeometry(*SoLineSet441);

SoHAnimSegment436->addChild(*SoShape440);

SoShape* SoShape444 = new SoShape();
SoLineSet* SoLineSet445 = new SoLineSet();
SoLineSet445->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA446 = new SoColorRGBA();
SoColorRGBA446->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet445->addChild(*SoColorRGBA446);

SoCoordinate* SoCoordinate447 = new SoCoordinate();
SoCoordinate447->setPoint(new float[]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016}, 6);
SoLineSet445->setCoord(*SoCoordinate447);

SoShape444->setGeometry(*SoLineSet445);

SoHAnimSegment436->addChild(*SoShape444);

SoShape* SoShape448 = new SoShape();
SoLineSet* SoLineSet449 = new SoLineSet();
SoLineSet449->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA450 = new SoColorRGBA();
SoColorRGBA450->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet449->addChild(*SoColorRGBA450);

SoCoordinate* SoCoordinate451 = new SoCoordinate();
SoCoordinate451->setPoint(new float[]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992}, 6);
SoLineSet449->setCoord(*SoCoordinate451);

SoShape448->setGeometry(*SoLineSet449);

SoHAnimSegment436->addChild(*SoShape448);

SoShape* SoShape452 = new SoShape();
SoLineSet* SoLineSet453 = new SoLineSet();
SoLineSet453->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA454 = new SoColorRGBA();
SoColorRGBA454->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet453->addChild(*SoColorRGBA454);

SoCoordinate* SoCoordinate455 = new SoCoordinate();
SoCoordinate455->setPoint(new float[]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113}, 6);
SoLineSet453->setCoord(*SoCoordinate455);

SoShape452->setGeometry(*SoLineSet453);

SoHAnimSegment436->addChild(*SoShape452);

SoHAnimSite* SoHAnimSite456 = new SoHAnimSite();
SoHAnimSite456->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite456->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite456->setTranslation(new float[]{-0.0711,1.1941,0.1016});
SoTouchSensor* SoTouchSensor457 = new SoTouchSensor();
SoTouchSensor457->setDescription(QString("HAnimSite r_rib10"));
SoHAnimSite456->addChild(*SoTouchSensor457);

SoShape* SoShape458 = new SoShape();
SoShape458->setUSE(QString("HAnimSiteShape"));
SoHAnimSite456->addChild(*SoShape458);

SoHAnimSegment436->addChild(*SoHAnimSite456);

SoHAnimSite* SoHAnimSite459 = new SoHAnimSite();
SoHAnimSite459->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite459->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite459->setTranslation(new float[]{0.0871,1.1925,0.0992});
SoTouchSensor* SoTouchSensor460 = new SoTouchSensor();
SoTouchSensor460->setDescription(QString("HAnimSite l_rib10"));
SoHAnimSite459->addChild(*SoTouchSensor460);

SoShape* SoShape461 = new SoShape();
SoShape461->setUSE(QString("HAnimSiteShape"));
SoHAnimSite459->addChild(*SoShape461);

SoHAnimSegment436->addChild(*SoHAnimSite459);

SoHAnimSite* SoHAnimSite462 = new SoHAnimSite();
SoHAnimSite462->setDEF(QString("hanim_rib10_midspine_pt"));
SoHAnimSite462->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite462->setTranslation(new float[]{0.0049,1.1908,-0.1113});
SoTouchSensor* SoTouchSensor463 = new SoTouchSensor();
SoTouchSensor463->setDescription(QString("HAnimSite rib10_midspine"));
SoHAnimSite462->addChild(*SoTouchSensor463);

SoShape* SoShape464 = new SoShape();
SoShape464->setUSE(QString("HAnimSiteShape"));
SoHAnimSite462->addChild(*SoShape464);

SoHAnimSegment436->addChild(*SoHAnimSite462);

SoHAnimJoint435->addChildren(*SoHAnimSegment436);

SoHAnimJoint* SoHAnimJoint465 = new SoHAnimJoint();
SoHAnimJoint465->setDEF(QString("hanim_vl1"));
SoHAnimJoint465->X3DNode::setName(QString("vl1"));
SoHAnimJoint465->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimSegment* SoHAnimSegment466 = new SoHAnimSegment();
SoHAnimSegment466->setDEF(QString("hanim_l1"));
SoHAnimSegment466->X3DNode::setName(QString("l1"));
SoTouchSensor* SoTouchSensor467 = new SoTouchSensor();
SoTouchSensor467->setDescription(QString("HAnimJoint vl1, HAnimSegment l1"));
SoHAnimSegment466->addChild(*SoTouchSensor467);

SoTransform* SoTransform468 = new SoTransform();
SoTransform468->setTranslation(new float[]{0.0048,1.1912,-0.0805});
SoShape* SoShape469 = new SoShape();
SoShape469->setUSE(QString("HAnimJointShape"));
SoTransform468->addChild(*SoShape469);

SoHAnimSegment466->addChild(*SoTransform468);

SoShape* SoShape470 = new SoShape();
SoLineSet* SoLineSet471 = new SoLineSet();
SoLineSet471->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA472 = new SoColorRGBA();
SoColorRGBA472->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet471->addChild(*SoColorRGBA472);

SoCoordinate* SoCoordinate473 = new SoCoordinate();
SoCoordinate473->setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
SoLineSet471->setCoord(*SoCoordinate473);

SoShape470->setGeometry(*SoLineSet471);

SoHAnimSegment466->addChild(*SoShape470);

SoHAnimJoint465->addChildren(*SoHAnimSegment466);

SoHAnimJoint* SoHAnimJoint474 = new SoHAnimJoint();
SoHAnimJoint474->setDEF(QString("hanim_vt12"));
SoHAnimJoint474->X3DNode::setName(QString("vt12"));
SoHAnimJoint474->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimSegment* SoHAnimSegment475 = new SoHAnimSegment();
SoHAnimSegment475->setDEF(QString("hanim_t12"));
SoHAnimSegment475->X3DNode::setName(QString("t12"));
SoTouchSensor* SoTouchSensor476 = new SoTouchSensor();
SoTouchSensor476->setDescription(QString("HAnimJoint vt12, HAnimSegment t12"));
SoHAnimSegment475->addChild(*SoTouchSensor476);

SoTransform* SoTransform477 = new SoTransform();
SoTransform477->setTranslation(new float[]{0.0051,1.2278,-0.0808});
SoShape* SoShape478 = new SoShape();
SoShape478->setUSE(QString("HAnimJointShape"));
SoTransform477->addChild(*SoShape478);

SoHAnimSegment475->addChild(*SoTransform477);

SoShape* SoShape479 = new SoShape();
SoLineSet* SoLineSet480 = new SoLineSet();
SoLineSet480->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA481 = new SoColorRGBA();
SoColorRGBA481->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet480->addChild(*SoColorRGBA481);

SoCoordinate* SoCoordinate482 = new SoCoordinate();
SoCoordinate482->setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
SoLineSet480->setCoord(*SoCoordinate482);

SoShape479->setGeometry(*SoLineSet480);

SoHAnimSegment475->addChild(*SoShape479);

SoHAnimJoint474->addChildren(*SoHAnimSegment475);

SoHAnimJoint* SoHAnimJoint483 = new SoHAnimJoint();
SoHAnimJoint483->setDEF(QString("hanim_vt11"));
SoHAnimJoint483->X3DNode::setName(QString("vt11"));
SoHAnimJoint483->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment484 = new SoHAnimSegment();
SoHAnimSegment484->setDEF(QString("hanim_t11"));
SoHAnimSegment484->X3DNode::setName(QString("t11"));
SoTouchSensor* SoTouchSensor485 = new SoTouchSensor();
SoTouchSensor485->setDescription(QString("HAnimJoint vt11, HAnimSegment t11"));
SoHAnimSegment484->addChild(*SoTouchSensor485);

SoTransform* SoTransform486 = new SoTransform();
SoTransform486->setTranslation(new float[]{0.0053,1.2679,-0.081});
SoShape* SoShape487 = new SoShape();
SoShape487->setUSE(QString("HAnimJointShape"));
SoTransform486->addChild(*SoShape487);

SoHAnimSegment484->addChild(*SoTransform486);

SoShape* SoShape488 = new SoShape();
SoLineSet* SoLineSet489 = new SoLineSet();
SoLineSet489->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA490 = new SoColorRGBA();
SoColorRGBA490->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet489->addChild(*SoColorRGBA490);

SoCoordinate* SoCoordinate491 = new SoCoordinate();
SoCoordinate491->setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
SoLineSet489->setCoord(*SoCoordinate491);

SoShape488->setGeometry(*SoLineSet489);

SoHAnimSegment484->addChild(*SoShape488);

SoHAnimJoint483->addChildren(*SoHAnimSegment484);

SoHAnimJoint* SoHAnimJoint492 = new SoHAnimJoint();
SoHAnimJoint492->setDEF(QString("hanim_vt10"));
SoHAnimJoint492->X3DNode::setName(QString("vt10"));
SoHAnimJoint492->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimSegment* SoHAnimSegment493 = new SoHAnimSegment();
SoHAnimSegment493->setDEF(QString("hanim_t10"));
SoHAnimSegment493->X3DNode::setName(QString("t10"));
SoTouchSensor* SoTouchSensor494 = new SoTouchSensor();
SoTouchSensor494->setDescription(QString("HAnimJoint vt10, HAnimSegment t10"));
SoHAnimSegment493->addChild(*SoTouchSensor494);

SoTransform* SoTransform495 = new SoTransform();
SoTransform495->setTranslation(new float[]{0.0056,1.2848,-0.0822});
SoShape* SoShape496 = new SoShape();
SoShape496->setUSE(QString("HAnimJointShape"));
SoTransform495->addChild(*SoShape496);

SoHAnimSegment493->addChild(*SoTransform495);

SoShape* SoShape497 = new SoShape();
SoLineSet* SoLineSet498 = new SoLineSet();
SoLineSet498->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA499 = new SoColorRGBA();
SoColorRGBA499->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet498->addChild(*SoColorRGBA499);

SoCoordinate* SoCoordinate500 = new SoCoordinate();
SoCoordinate500->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
SoLineSet498->setCoord(*SoCoordinate500);

SoShape497->setGeometry(*SoLineSet498);

SoHAnimSegment493->addChild(*SoShape497);

SoShape* SoShape501 = new SoShape();
SoLineSet* SoLineSet502 = new SoLineSet();
SoLineSet502->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA503 = new SoColorRGBA();
SoColorRGBA503->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet502->addChild(*SoColorRGBA503);

SoCoordinate* SoCoordinate504 = new SoCoordinate();
SoCoordinate504->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147}, 6);
SoLineSet502->setCoord(*SoCoordinate504);

SoShape501->setGeometry(*SoLineSet502);

SoHAnimSegment493->addChild(*SoShape501);

SoHAnimSite* SoHAnimSite505 = new SoHAnimSite();
SoHAnimSite505->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite505->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite505->setTranslation(new float[]{0.0085,1.2995,0.1147});
SoTouchSensor* SoTouchSensor506 = new SoTouchSensor();
SoTouchSensor506->setDescription(QString("HAnimSite substernale"));
SoHAnimSite505->addChild(*SoTouchSensor506);

SoShape* SoShape507 = new SoShape();
SoShape507->setUSE(QString("HAnimSiteShape"));
SoHAnimSite505->addChild(*SoShape507);

SoHAnimSegment493->addChild(*SoHAnimSite505);

SoHAnimJoint492->addChildren(*SoHAnimSegment493);

SoHAnimJoint* SoHAnimJoint508 = new SoHAnimJoint();
SoHAnimJoint508->setDEF(QString("hanim_vt9"));
SoHAnimJoint508->X3DNode::setName(QString("vt9"));
SoHAnimJoint508->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimSegment* SoHAnimSegment509 = new SoHAnimSegment();
SoHAnimSegment509->setDEF(QString("hanim_t9"));
SoHAnimSegment509->X3DNode::setName(QString("t9"));
SoTouchSensor* SoTouchSensor510 = new SoTouchSensor();
SoTouchSensor510->setDescription(QString("HAnimJoint vt9, HAnimSegment t9"));
SoHAnimSegment509->addChild(*SoTouchSensor510);

SoTransform* SoTransform511 = new SoTransform();
SoTransform511->setTranslation(new float[]{0.0057,1.3126,-0.0838});
SoShape* SoShape512 = new SoShape();
SoShape512->setUSE(QString("HAnimJointShape"));
SoTransform511->addChild(*SoShape512);

SoHAnimSegment509->addChild(*SoTransform511);

SoShape* SoShape513 = new SoShape();
SoLineSet* SoLineSet514 = new SoLineSet();
SoLineSet514->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA515 = new SoColorRGBA();
SoColorRGBA515->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet514->addChild(*SoColorRGBA515);

SoCoordinate* SoCoordinate516 = new SoCoordinate();
SoCoordinate516->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
SoLineSet514->setCoord(*SoCoordinate516);

SoShape513->setGeometry(*SoLineSet514);

SoHAnimSegment509->addChild(*SoShape513);

SoShape* SoShape517 = new SoShape();
SoLineSet* SoLineSet518 = new SoLineSet();
SoLineSet518->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA519 = new SoColorRGBA();
SoColorRGBA519->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet518->addChild(*SoColorRGBA519);

SoCoordinate* SoCoordinate520 = new SoCoordinate();
SoCoordinate520->setPoint(new float[]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217}, 6);
SoLineSet518->setCoord(*SoCoordinate520);

SoShape517->setGeometry(*SoLineSet518);

SoHAnimSegment509->addChild(*SoShape517);

SoShape* SoShape521 = new SoShape();
SoLineSet* SoLineSet522 = new SoLineSet();
SoLineSet522->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA523 = new SoColorRGBA();
SoColorRGBA523->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet522->addChild(*SoColorRGBA523);

SoCoordinate* SoCoordinate524 = new SoCoordinate();
SoCoordinate524->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192}, 6);
SoLineSet522->setCoord(*SoCoordinate524);

SoShape521->setGeometry(*SoLineSet522);

SoHAnimSegment509->addChild(*SoShape521);

SoHAnimSite* SoHAnimSite525 = new SoHAnimSite();
SoHAnimSite525->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite525->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite525->setTranslation(new float[]{-0.0736,1.3385,0.1217});
SoTouchSensor* SoTouchSensor526 = new SoTouchSensor();
SoTouchSensor526->setDescription(QString("HAnimSite r_thelion"));
SoHAnimSite525->addChild(*SoTouchSensor526);

SoShape* SoShape527 = new SoShape();
SoShape527->setUSE(QString("HAnimSiteShape"));
SoHAnimSite525->addChild(*SoShape527);

SoHAnimSegment509->addChild(*SoHAnimSite525);

SoHAnimSite* SoHAnimSite528 = new SoHAnimSite();
SoHAnimSite528->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite528->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite528->setTranslation(new float[]{0.0918,1.3382,0.1192});
SoTouchSensor* SoTouchSensor529 = new SoTouchSensor();
SoTouchSensor529->setDescription(QString("HAnimSite l_thelion"));
SoHAnimSite528->addChild(*SoTouchSensor529);

SoShape* SoShape530 = new SoShape();
SoShape530->setUSE(QString("HAnimSiteShape"));
SoHAnimSite528->addChild(*SoShape530);

SoHAnimSegment509->addChild(*SoHAnimSite528);

SoHAnimJoint508->addChildren(*SoHAnimSegment509);

SoHAnimJoint* SoHAnimJoint531 = new SoHAnimJoint();
SoHAnimJoint531->setDEF(QString("hanim_vt8"));
SoHAnimJoint531->X3DNode::setName(QString("vt8"));
SoHAnimJoint531->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimSegment* SoHAnimSegment532 = new SoHAnimSegment();
SoHAnimSegment532->setDEF(QString("hanim_t8"));
SoHAnimSegment532->X3DNode::setName(QString("t8"));
SoTouchSensor* SoTouchSensor533 = new SoTouchSensor();
SoTouchSensor533->setDescription(QString("HAnimJoint vt8, HAnimSegment t8"));
SoHAnimSegment532->addChild(*SoTouchSensor533);

SoTransform* SoTransform534 = new SoTransform();
SoTransform534->setTranslation(new float[]{0.0057,1.3382,-0.0845});
SoShape* SoShape535 = new SoShape();
SoShape535->setUSE(QString("HAnimJointShape"));
SoTransform534->addChild(*SoShape535);

SoHAnimSegment532->addChild(*SoTransform534);

SoShape* SoShape536 = new SoShape();
SoLineSet* SoLineSet537 = new SoLineSet();
SoLineSet537->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA538 = new SoColorRGBA();
SoColorRGBA538->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet537->addChild(*SoColorRGBA538);

SoCoordinate* SoCoordinate539 = new SoCoordinate();
SoCoordinate539->setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
SoLineSet537->setCoord(*SoCoordinate539);

SoShape536->setGeometry(*SoLineSet537);

SoHAnimSegment532->addChild(*SoShape536);

SoHAnimJoint531->addChildren(*SoHAnimSegment532);

SoHAnimJoint* SoHAnimJoint540 = new SoHAnimJoint();
SoHAnimJoint540->setDEF(QString("hanim_vt7"));
SoHAnimJoint540->X3DNode::setName(QString("vt7"));
SoHAnimJoint540->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimSegment* SoHAnimSegment541 = new SoHAnimSegment();
SoHAnimSegment541->setDEF(QString("hanim_t7"));
SoHAnimSegment541->X3DNode::setName(QString("t7"));
SoTouchSensor* SoTouchSensor542 = new SoTouchSensor();
SoTouchSensor542->setDescription(QString("HAnimJoint vt7, HAnimSegment t7"));
SoHAnimSegment541->addChild(*SoTouchSensor542);

SoTransform* SoTransform543 = new SoTransform();
SoTransform543->setTranslation(new float[]{0.0058,1.3625,-0.0833});
SoShape* SoShape544 = new SoShape();
SoShape544->setUSE(QString("HAnimJointShape"));
SoTransform543->addChild(*SoShape544);

SoHAnimSegment541->addChild(*SoTransform543);

SoShape* SoShape545 = new SoShape();
SoLineSet* SoLineSet546 = new SoLineSet();
SoLineSet546->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA547 = new SoColorRGBA();
SoColorRGBA547->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet546->addChild(*SoColorRGBA547);

SoCoordinate* SoCoordinate548 = new SoCoordinate();
SoCoordinate548->setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
SoLineSet546->setCoord(*SoCoordinate548);

SoShape545->setGeometry(*SoLineSet546);

SoHAnimSegment541->addChild(*SoShape545);

SoHAnimJoint540->addChildren(*SoHAnimSegment541);

SoHAnimJoint* SoHAnimJoint549 = new SoHAnimJoint();
SoHAnimJoint549->setDEF(QString("hanim_vt6"));
SoHAnimJoint549->X3DNode::setName(QString("vt6"));
SoHAnimJoint549->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimSegment* SoHAnimSegment550 = new SoHAnimSegment();
SoHAnimSegment550->setDEF(QString("hanim_t6"));
SoHAnimSegment550->X3DNode::setName(QString("t6"));
SoTouchSensor* SoTouchSensor551 = new SoTouchSensor();
SoTouchSensor551->setDescription(QString("HAnimJoint vt6, HAnimSegment t6"));
SoHAnimSegment550->addChild(*SoTouchSensor551);

SoTransform* SoTransform552 = new SoTransform();
SoTransform552->setTranslation(new float[]{0.0059,1.3866,-0.08});
SoShape* SoShape553 = new SoShape();
SoShape553->setUSE(QString("HAnimJointShape"));
SoTransform552->addChild(*SoShape553);

SoHAnimSegment550->addChild(*SoTransform552);

SoShape* SoShape554 = new SoShape();
SoLineSet* SoLineSet555 = new SoLineSet();
SoLineSet555->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA556 = new SoColorRGBA();
SoColorRGBA556->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet555->addChild(*SoColorRGBA556);

SoCoordinate* SoCoordinate557 = new SoCoordinate();
SoCoordinate557->setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
SoLineSet555->setCoord(*SoCoordinate557);

SoShape554->setGeometry(*SoLineSet555);

SoHAnimSegment550->addChild(*SoShape554);

SoHAnimJoint549->addChildren(*SoHAnimSegment550);

SoHAnimJoint* SoHAnimJoint558 = new SoHAnimJoint();
SoHAnimJoint558->setDEF(QString("hanim_vt5"));
SoHAnimJoint558->X3DNode::setName(QString("vt5"));
SoHAnimJoint558->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimSegment* SoHAnimSegment559 = new SoHAnimSegment();
SoHAnimSegment559->setDEF(QString("hanim_t5"));
SoHAnimSegment559->X3DNode::setName(QString("t5"));
SoTouchSensor* SoTouchSensor560 = new SoTouchSensor();
SoTouchSensor560->setDescription(QString("HAnimJoint vt5, HAnimSegment t5"));
SoHAnimSegment559->addChild(*SoTouchSensor560);

SoTransform* SoTransform561 = new SoTransform();
SoTransform561->setTranslation(new float[]{0.006,1.4102,-0.0745});
SoShape* SoShape562 = new SoShape();
SoShape562->setUSE(QString("HAnimJointShape"));
SoTransform561->addChild(*SoShape562);

SoHAnimSegment559->addChild(*SoTransform561);

SoShape* SoShape563 = new SoShape();
SoLineSet* SoLineSet564 = new SoLineSet();
SoLineSet564->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA565 = new SoColorRGBA();
SoColorRGBA565->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet564->addChild(*SoColorRGBA565);

SoCoordinate* SoCoordinate566 = new SoCoordinate();
SoCoordinate566->setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
SoLineSet564->setCoord(*SoCoordinate566);

SoShape563->setGeometry(*SoLineSet564);

SoHAnimSegment559->addChild(*SoShape563);

SoHAnimJoint558->addChildren(*SoHAnimSegment559);

SoHAnimJoint* SoHAnimJoint567 = new SoHAnimJoint();
SoHAnimJoint567->setDEF(QString("hanim_vt4"));
SoHAnimJoint567->X3DNode::setName(QString("vt4"));
SoHAnimJoint567->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimSegment* SoHAnimSegment568 = new SoHAnimSegment();
SoHAnimSegment568->setDEF(QString("hanim_t4"));
SoHAnimSegment568->X3DNode::setName(QString("t4"));
SoTouchSensor* SoTouchSensor569 = new SoTouchSensor();
SoTouchSensor569->setDescription(QString("HAnimJoint vt4, HAnimSegment t4"));
SoHAnimSegment568->addChild(*SoTouchSensor569);

SoTransform* SoTransform570 = new SoTransform();
SoTransform570->setTranslation(new float[]{0.0061,1.432,-0.0675});
SoShape* SoShape571 = new SoShape();
SoShape571->setUSE(QString("HAnimJointShape"));
SoTransform570->addChild(*SoShape571);

SoHAnimSegment568->addChild(*SoTransform570);

SoShape* SoShape572 = new SoShape();
SoLineSet* SoLineSet573 = new SoLineSet();
SoLineSet573->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA574 = new SoColorRGBA();
SoColorRGBA574->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet573->addChild(*SoColorRGBA574);

SoCoordinate* SoCoordinate575 = new SoCoordinate();
SoCoordinate575->setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
SoLineSet573->setCoord(*SoCoordinate575);

SoShape572->setGeometry(*SoLineSet573);

SoHAnimSegment568->addChild(*SoShape572);

SoHAnimJoint567->addChildren(*SoHAnimSegment568);

SoHAnimJoint* SoHAnimJoint576 = new SoHAnimJoint();
SoHAnimJoint576->setDEF(QString("hanim_vt3"));
SoHAnimJoint576->X3DNode::setName(QString("vt3"));
SoHAnimJoint576->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimSegment* SoHAnimSegment577 = new SoHAnimSegment();
SoHAnimSegment577->setDEF(QString("hanim_t3"));
SoHAnimSegment577->X3DNode::setName(QString("t3"));
SoTouchSensor* SoTouchSensor578 = new SoTouchSensor();
SoTouchSensor578->setDescription(QString("HAnimJoint vt3, HAnimSegment t3"));
SoHAnimSegment577->addChild(*SoTouchSensor578);

SoTransform* SoTransform579 = new SoTransform();
SoTransform579->setTranslation(new float[]{0.0062,1.4583,-0.057});
SoShape* SoShape580 = new SoShape();
SoShape580->setUSE(QString("HAnimJointShape"));
SoTransform579->addChild(*SoShape580);

SoHAnimSegment577->addChild(*SoTransform579);

SoShape* SoShape581 = new SoShape();
SoLineSet* SoLineSet582 = new SoLineSet();
SoLineSet582->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA583 = new SoColorRGBA();
SoColorRGBA583->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet582->addChild(*SoColorRGBA583);

SoCoordinate* SoCoordinate584 = new SoCoordinate();
SoCoordinate584->setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
SoLineSet582->setCoord(*SoCoordinate584);

SoShape581->setGeometry(*SoLineSet582);

SoHAnimSegment577->addChild(*SoShape581);

SoHAnimJoint576->addChildren(*SoHAnimSegment577);

SoHAnimJoint* SoHAnimJoint585 = new SoHAnimJoint();
SoHAnimJoint585->setDEF(QString("hanim_vt2"));
SoHAnimJoint585->X3DNode::setName(QString("vt2"));
SoHAnimJoint585->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimSegment* SoHAnimSegment586 = new SoHAnimSegment();
SoHAnimSegment586->setDEF(QString("hanim_t2"));
SoHAnimSegment586->X3DNode::setName(QString("t2"));
SoTouchSensor* SoTouchSensor587 = new SoTouchSensor();
SoTouchSensor587->setDescription(QString("HAnimJoint vt2, HAnimSegment t2"));
SoHAnimSegment586->addChild(*SoTouchSensor587);

SoTransform* SoTransform588 = new SoTransform();
SoTransform588->setTranslation(new float[]{0.0063,1.4761,-0.0484});
SoShape* SoShape589 = new SoShape();
SoShape589->setUSE(QString("HAnimJointShape"));
SoTransform588->addChild(*SoShape589);

SoHAnimSegment586->addChild(*SoTransform588);

SoShape* SoShape590 = new SoShape();
SoLineSet* SoLineSet591 = new SoLineSet();
SoLineSet591->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA592 = new SoColorRGBA();
SoColorRGBA592->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet591->addChild(*SoColorRGBA592);

SoCoordinate* SoCoordinate593 = new SoCoordinate();
SoCoordinate593->setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
SoLineSet591->setCoord(*SoCoordinate593);

SoShape590->setGeometry(*SoLineSet591);

SoHAnimSegment586->addChild(*SoShape590);

SoHAnimJoint585->addChildren(*SoHAnimSegment586);

SoHAnimJoint* SoHAnimJoint594 = new SoHAnimJoint();
SoHAnimJoint594->setDEF(QString("hanim_vt1"));
SoHAnimJoint594->X3DNode::setName(QString("vt1"));
SoHAnimJoint594->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimSegment* SoHAnimSegment595 = new SoHAnimSegment();
SoHAnimSegment595->setDEF(QString("hanim_t1"));
SoHAnimSegment595->X3DNode::setName(QString("t1"));
SoTouchSensor* SoTouchSensor596 = new SoTouchSensor();
SoTouchSensor596->setDescription(QString("HAnimJoint vt1, HAnimSegment t1"));
SoHAnimSegment595->addChild(*SoTouchSensor596);

SoTransform* SoTransform597 = new SoTransform();
SoTransform597->setTranslation(new float[]{0.0065,1.4951,-0.0387});
SoShape* SoShape598 = new SoShape();
SoShape598->setUSE(QString("HAnimJointShape"));
SoTransform597->addChild(*SoShape598);

SoHAnimSegment595->addChild(*SoTransform597);

SoShape* SoShape599 = new SoShape();
SoLineSet* SoLineSet600 = new SoLineSet();
SoLineSet600->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA601 = new SoColorRGBA();
SoColorRGBA601->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet600->addChild(*SoColorRGBA601);

SoCoordinate* SoCoordinate602 = new SoCoordinate();
SoCoordinate602->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
SoLineSet600->setCoord(*SoCoordinate602);

SoShape599->setGeometry(*SoLineSet600);

SoHAnimSegment595->addChild(*SoShape599);

SoShape* SoShape603 = new SoShape();
SoLineSet* SoLineSet604 = new SoLineSet();
SoLineSet604->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA605 = new SoColorRGBA();
SoColorRGBA605->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet604->addChild(*SoColorRGBA605);

SoCoordinate* SoCoordinate606 = new SoCoordinate();
SoCoordinate606->setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
SoLineSet604->setCoord(*SoCoordinate606);

SoShape603->setGeometry(*SoLineSet604);

SoHAnimSegment595->addChild(*SoShape603);

SoShape* SoShape607 = new SoShape();
SoLineSet* SoLineSet608 = new SoLineSet();
SoLineSet608->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA609 = new SoColorRGBA();
SoColorRGBA609->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet608->addChild(*SoColorRGBA609);

SoCoordinate* SoCoordinate610 = new SoCoordinate();
SoCoordinate610->setPoint(new float[]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353}, 6);
SoLineSet608->setCoord(*SoCoordinate610);

SoShape607->setGeometry(*SoLineSet608);

SoHAnimSegment595->addChild(*SoShape607);

SoShape* SoShape611 = new SoShape();
SoLineSet* SoLineSet612 = new SoLineSet();
SoLineSet612->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA613 = new SoColorRGBA();
SoColorRGBA613->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet612->addChild(*SoColorRGBA613);

SoCoordinate* SoCoordinate614 = new SoCoordinate();
SoCoordinate614->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551}, 6);
SoLineSet612->setCoord(*SoCoordinate614);

SoShape611->setGeometry(*SoLineSet612);

SoHAnimSegment595->addChild(*SoShape611);

SoShape* SoShape615 = new SoShape();
SoLineSet* SoLineSet616 = new SoLineSet();
SoLineSet616->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA617 = new SoColorRGBA();
SoColorRGBA617->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet616->addChild(*SoColorRGBA617);

SoCoordinate* SoCoordinate618 = new SoCoordinate();
SoCoordinate618->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815}, 6);
SoLineSet616->setCoord(*SoCoordinate618);

SoShape615->setGeometry(*SoLineSet616);

SoHAnimSegment595->addChild(*SoShape615);

SoHAnimSite* SoHAnimSite619 = new SoHAnimSite();
SoHAnimSite619->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite619->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite619->setTranslation(new float[]{0.0084,1.4714,0.0551});
SoTouchSensor* SoTouchSensor620 = new SoTouchSensor();
SoTouchSensor620->setDescription(QString("HAnimSite suprasternale"));
SoHAnimSite619->addChild(*SoTouchSensor620);

SoShape* SoShape621 = new SoShape();
SoShape621->setUSE(QString("HAnimSiteShape"));
SoHAnimSite619->addChild(*SoShape621);

SoHAnimSegment595->addChild(*SoHAnimSite619);

SoHAnimSite* SoHAnimSite622 = new SoHAnimSite();
SoHAnimSite622->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite622->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite622->setTranslation(new float[]{0.0064,1.52,-0.0815});
SoTouchSensor* SoTouchSensor623 = new SoTouchSensor();
SoTouchSensor623->setDescription(QString("HAnimSite cervicale"));
SoHAnimSite622->addChild(*SoTouchSensor623);

SoShape* SoShape624 = new SoShape();
SoShape624->setUSE(QString("HAnimSiteShape"));
SoHAnimSite622->addChild(*SoShape624);

SoHAnimSegment595->addChild(*SoHAnimSite622);

SoHAnimJoint594->addChildren(*SoHAnimSegment595);

SoHAnimJoint* SoHAnimJoint625 = new SoHAnimJoint();
SoHAnimJoint625->setDEF(QString("hanim_vc7"));
SoHAnimJoint625->X3DNode::setName(QString("vc7"));
SoHAnimJoint625->setRotation(new float[]{-0.999999999999996,0.0,0.0,0.222164034843446});
SoHAnimJoint625->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimSegment* SoHAnimSegment626 = new SoHAnimSegment();
SoHAnimSegment626->setDEF(QString("hanim_c7"));
SoHAnimSegment626->X3DNode::setName(QString("c7"));
SoTouchSensor* SoTouchSensor627 = new SoTouchSensor();
SoTouchSensor627->setDescription(QString("HAnimJoint vc7, HAnimSegment c7"));
SoHAnimSegment626->addChild(*SoTouchSensor627);

SoTransform* SoTransform628 = new SoTransform();
SoTransform628->setTranslation(new float[]{0.0066,1.5132,-0.0301});
SoShape* SoShape629 = new SoShape();
SoShape629->setUSE(QString("HAnimJointShape"));
SoTransform628->addChild(*SoShape629);

SoHAnimSegment626->addChild(*SoTransform628);

SoShape* SoShape630 = new SoShape();
SoLineSet* SoLineSet631 = new SoLineSet();
SoLineSet631->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA632 = new SoColorRGBA();
SoColorRGBA632->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet631->addChild(*SoColorRGBA632);

SoCoordinate* SoCoordinate633 = new SoCoordinate();
SoCoordinate633->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
SoLineSet631->setCoord(*SoCoordinate633);

SoShape630->setGeometry(*SoLineSet631);

SoHAnimSegment626->addChild(*SoShape630);

SoShape* SoShape634 = new SoShape();
SoLineSet* SoLineSet635 = new SoLineSet();
SoLineSet635->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA636 = new SoColorRGBA();
SoColorRGBA636->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet635->addChild(*SoColorRGBA636);

SoCoordinate* SoCoordinate637 = new SoCoordinate();
SoCoordinate637->setPoint(new float[]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022}, 6);
SoLineSet635->setCoord(*SoCoordinate637);

SoShape634->setGeometry(*SoLineSet635);

SoHAnimSegment626->addChild(*SoShape634);

SoShape* SoShape638 = new SoShape();
SoLineSet* SoLineSet639 = new SoLineSet();
SoLineSet639->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA640 = new SoColorRGBA();
SoColorRGBA640->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet639->addChild(*SoColorRGBA640);

SoCoordinate* SoCoordinate641 = new SoCoordinate();
SoCoordinate641->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038}, 6);
SoLineSet639->setCoord(*SoCoordinate641);

SoShape638->setGeometry(*SoLineSet639);

SoHAnimSegment626->addChild(*SoShape638);

SoHAnimSite* SoHAnimSite642 = new SoHAnimSite();
SoHAnimSite642->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite642->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite642->setTranslation(new float[]{-0.0419,1.5149,-0.022});
SoTouchSensor* SoTouchSensor643 = new SoTouchSensor();
SoTouchSensor643->setDescription(QString("HAnimSite r_neck_base"));
SoHAnimSite642->addChild(*SoTouchSensor643);

SoShape* SoShape644 = new SoShape();
SoShape644->setUSE(QString("HAnimSiteShape"));
SoHAnimSite642->addChild(*SoShape644);

SoHAnimSegment626->addChild(*SoHAnimSite642);

SoHAnimSite* SoHAnimSite645 = new SoHAnimSite();
SoHAnimSite645->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite645->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite645->setTranslation(new float[]{0.0646,1.5141,-0.038});
SoTouchSensor* SoTouchSensor646 = new SoTouchSensor();
SoTouchSensor646->setDescription(QString("HAnimSite l_neck_base"));
SoHAnimSite645->addChild(*SoTouchSensor646);

SoShape* SoShape647 = new SoShape();
SoShape647->setUSE(QString("HAnimSiteShape"));
SoHAnimSite645->addChild(*SoShape647);

SoHAnimSegment626->addChild(*SoHAnimSite645);

SoHAnimJoint625->addChildren(*SoHAnimSegment626);

SoHAnimJoint* SoHAnimJoint648 = new SoHAnimJoint();
SoHAnimJoint648->setDEF(QString("hanim_vc6"));
SoHAnimJoint648->X3DNode::setName(QString("vc6"));
SoHAnimJoint648->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimSegment* SoHAnimSegment649 = new SoHAnimSegment();
SoHAnimSegment649->setDEF(QString("hanim_c6"));
SoHAnimSegment649->X3DNode::setName(QString("c6"));
SoTouchSensor* SoTouchSensor650 = new SoTouchSensor();
SoTouchSensor650->setDescription(QString("HAnimJoint vc6, HAnimSegment c6"));
SoHAnimSegment649->addChild(*SoTouchSensor650);

SoTransform* SoTransform651 = new SoTransform();
SoTransform651->setTranslation(new float[]{0.0066,1.5357,-0.0143});
SoShape* SoShape652 = new SoShape();
SoShape652->setUSE(QString("HAnimJointShape"));
SoTransform651->addChild(*SoShape652);

SoHAnimSegment649->addChild(*SoTransform651);

SoShape* SoShape653 = new SoShape();
SoLineSet* SoLineSet654 = new SoLineSet();
SoLineSet654->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA655 = new SoColorRGBA();
SoColorRGBA655->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet654->addChild(*SoColorRGBA655);

SoCoordinate* SoCoordinate656 = new SoCoordinate();
SoCoordinate656->setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
SoLineSet654->setCoord(*SoCoordinate656);

SoShape653->setGeometry(*SoLineSet654);

SoHAnimSegment649->addChild(*SoShape653);

SoHAnimJoint648->addChildren(*SoHAnimSegment649);

SoHAnimJoint* SoHAnimJoint657 = new SoHAnimJoint();
SoHAnimJoint657->setDEF(QString("hanim_vc5"));
SoHAnimJoint657->X3DNode::setName(QString("vc5"));
SoHAnimJoint657->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimSegment* SoHAnimSegment658 = new SoHAnimSegment();
SoHAnimSegment658->setDEF(QString("hanim_c5"));
SoHAnimSegment658->X3DNode::setName(QString("c5"));
SoTouchSensor* SoTouchSensor659 = new SoTouchSensor();
SoTouchSensor659->setDescription(QString("HAnimJoint vc5, HAnimSegment c5"));
SoHAnimSegment658->addChild(*SoTouchSensor659);

SoTransform* SoTransform660 = new SoTransform();
SoTransform660->setTranslation(new float[]{0.0066,1.552,-0.0082});
SoShape* SoShape661 = new SoShape();
SoShape661->setUSE(QString("HAnimJointShape"));
SoTransform660->addChild(*SoShape661);

SoHAnimSegment658->addChild(*SoTransform660);

SoShape* SoShape662 = new SoShape();
SoLineSet* SoLineSet663 = new SoLineSet();
SoLineSet663->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA664 = new SoColorRGBA();
SoColorRGBA664->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet663->addChild(*SoColorRGBA664);

SoCoordinate* SoCoordinate665 = new SoCoordinate();
SoCoordinate665->setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
SoLineSet663->setCoord(*SoCoordinate665);

SoShape662->setGeometry(*SoLineSet663);

SoHAnimSegment658->addChild(*SoShape662);

SoHAnimJoint657->addChildren(*SoHAnimSegment658);

SoHAnimJoint* SoHAnimJoint666 = new SoHAnimJoint();
SoHAnimJoint666->setDEF(QString("hanim_vc4"));
SoHAnimJoint666->X3DNode::setName(QString("vc4"));
SoHAnimJoint666->setRotation(new float[]{1.0,0.0,0.0,0.302520108222961});
SoHAnimJoint666->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimSegment* SoHAnimSegment667 = new SoHAnimSegment();
SoHAnimSegment667->setDEF(QString("hanim_c4"));
SoHAnimSegment667->X3DNode::setName(QString("c4"));
SoTouchSensor* SoTouchSensor668 = new SoTouchSensor();
SoTouchSensor668->setDescription(QString("HAnimJoint vc4, HAnimSegment c4"));
SoHAnimSegment667->addChild(*SoTouchSensor668);

SoTransform* SoTransform669 = new SoTransform();
SoTransform669->setTranslation(new float[]{0.0066,1.5662,-0.0084});
SoShape* SoShape670 = new SoShape();
SoShape670->setUSE(QString("HAnimJointShape"));
SoTransform669->addChild(*SoShape670);

SoHAnimSegment667->addChild(*SoTransform669);

SoShape* SoShape671 = new SoShape();
SoLineSet* SoLineSet672 = new SoLineSet();
SoLineSet672->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA673 = new SoColorRGBA();
SoColorRGBA673->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet672->addChild(*SoColorRGBA673);

SoCoordinate* SoCoordinate674 = new SoCoordinate();
SoCoordinate674->setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
SoLineSet672->setCoord(*SoCoordinate674);

SoShape671->setGeometry(*SoLineSet672);

SoHAnimSegment667->addChild(*SoShape671);

SoHAnimJoint666->addChildren(*SoHAnimSegment667);

SoHAnimJoint* SoHAnimJoint675 = new SoHAnimJoint();
SoHAnimJoint675->setDEF(QString("hanim_vc3"));
SoHAnimJoint675->X3DNode::setName(QString("vc3"));
SoHAnimJoint675->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimSegment* SoHAnimSegment676 = new SoHAnimSegment();
SoHAnimSegment676->setDEF(QString("hanim_c3"));
SoHAnimSegment676->X3DNode::setName(QString("c3"));
SoTouchSensor* SoTouchSensor677 = new SoTouchSensor();
SoTouchSensor677->setDescription(QString("HAnimJoint vc3, HAnimSegment c3"));
SoHAnimSegment676->addChild(*SoTouchSensor677);

SoTransform* SoTransform678 = new SoTransform();
SoTransform678->setTranslation(new float[]{0.0066,1.58,-0.0103});
SoShape* SoShape679 = new SoShape();
SoShape679->setUSE(QString("HAnimJointShape"));
SoTransform678->addChild(*SoShape679);

SoHAnimSegment676->addChild(*SoTransform678);

SoShape* SoShape680 = new SoShape();
SoLineSet* SoLineSet681 = new SoLineSet();
SoLineSet681->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA682 = new SoColorRGBA();
SoColorRGBA682->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet681->addChild(*SoColorRGBA682);

SoCoordinate* SoCoordinate683 = new SoCoordinate();
SoCoordinate683->setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
SoLineSet681->setCoord(*SoCoordinate683);

SoShape680->setGeometry(*SoLineSet681);

SoHAnimSegment676->addChild(*SoShape680);

SoHAnimJoint675->addChildren(*SoHAnimSegment676);

SoHAnimJoint* SoHAnimJoint684 = new SoHAnimJoint();
SoHAnimJoint684->setDEF(QString("hanim_vc2"));
SoHAnimJoint684->X3DNode::setName(QString("vc2"));
SoHAnimJoint684->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimSegment* SoHAnimSegment685 = new SoHAnimSegment();
SoHAnimSegment685->setDEF(QString("hanim_c2"));
SoHAnimSegment685->X3DNode::setName(QString("c2"));
SoTouchSensor* SoTouchSensor686 = new SoTouchSensor();
SoTouchSensor686->setDescription(QString("HAnimJoint vc2, HAnimSegment c2"));
SoHAnimSegment685->addChild(*SoTouchSensor686);

SoTransform* SoTransform687 = new SoTransform();
SoTransform687->setTranslation(new float[]{0.0066,1.5928,-0.0103});
SoShape* SoShape688 = new SoShape();
SoShape688->setUSE(QString("HAnimJointShape"));
SoTransform687->addChild(*SoShape688);

SoHAnimSegment685->addChild(*SoTransform687);

SoShape* SoShape689 = new SoShape();
SoLineSet* SoLineSet690 = new SoLineSet();
SoLineSet690->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA691 = new SoColorRGBA();
SoColorRGBA691->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet690->addChild(*SoColorRGBA691);

SoCoordinate* SoCoordinate692 = new SoCoordinate();
SoCoordinate692->setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
SoLineSet690->setCoord(*SoCoordinate692);

SoShape689->setGeometry(*SoLineSet690);

SoHAnimSegment685->addChild(*SoShape689);

SoHAnimJoint684->addChildren(*SoHAnimSegment685);

SoHAnimJoint* SoHAnimJoint693 = new SoHAnimJoint();
SoHAnimJoint693->setDEF(QString("hanim_vc1"));
SoHAnimJoint693->X3DNode::setName(QString("vc1"));
SoHAnimJoint693->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimSegment* SoHAnimSegment694 = new SoHAnimSegment();
SoHAnimSegment694->setDEF(QString("hanim_c1"));
SoHAnimSegment694->X3DNode::setName(QString("c1"));
SoTouchSensor* SoTouchSensor695 = new SoTouchSensor();
SoTouchSensor695->setDescription(QString("HAnimJoint vc1, HAnimSegment c1"));
SoHAnimSegment694->addChild(*SoTouchSensor695);

SoTransform* SoTransform696 = new SoTransform();
SoTransform696->setTranslation(new float[]{0.0066,1.6144,-0.0034});
SoShape* SoShape697 = new SoShape();
SoShape697->setUSE(QString("HAnimJointShape"));
SoTransform696->addChild(*SoShape697);

SoHAnimSegment694->addChild(*SoTransform696);

SoShape* SoShape698 = new SoShape();
SoLineSet* SoLineSet699 = new SoLineSet();
SoLineSet699->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA700 = new SoColorRGBA();
SoColorRGBA700->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet699->addChild(*SoColorRGBA700);

SoCoordinate* SoCoordinate701 = new SoCoordinate();
SoCoordinate701->setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
SoLineSet699->setCoord(*SoCoordinate701);

SoShape698->setGeometry(*SoLineSet699);

SoHAnimSegment694->addChild(*SoShape698);

SoHAnimJoint693->addChildren(*SoHAnimSegment694);

SoHAnimJoint* SoHAnimJoint702 = new SoHAnimJoint();
SoHAnimJoint702->setDEF(QString("hanim_skullbase"));
SoHAnimJoint702->X3DNode::setName(QString("skullbase"));
SoHAnimJoint702->setRotation(new float[]{-1.00000000000001,0.0,0.0,0.231096035769597});
SoHAnimJoint702->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment703 = new SoHAnimSegment();
SoHAnimSegment703->setDEF(QString("hanim_skull"));
SoHAnimSegment703->X3DNode::setName(QString("skull"));
SoTouchSensor* SoTouchSensor704 = new SoTouchSensor();
SoTouchSensor704->setDescription(QString("HAnimJoint skullbase, HAnimSegment skull"));
SoHAnimSegment703->addChild(*SoTouchSensor704);

SoTransform* SoTransform705 = new SoTransform();
SoTransform705->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoShape* SoShape706 = new SoShape();
SoShape706->setUSE(QString("HAnimJointShape"));
SoTransform705->addChild(*SoShape706);

SoHAnimSegment703->addChild(*SoTransform705);

SoShape* SoShape707 = new SoShape();
SoLineSet* SoLineSet708 = new SoLineSet();
SoLineSet708->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA709 = new SoColorRGBA();
SoColorRGBA709->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet708->addChild(*SoColorRGBA709);

SoCoordinate* SoCoordinate710 = new SoCoordinate();
SoCoordinate710->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
SoLineSet708->setCoord(*SoCoordinate710);

SoShape707->setGeometry(*SoLineSet708);

SoHAnimSegment703->addChild(*SoShape707);

SoShape* SoShape711 = new SoShape();
SoLineSet* SoLineSet712 = new SoLineSet();
SoLineSet712->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA713 = new SoColorRGBA();
SoColorRGBA713->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet712->addChild(*SoColorRGBA713);

SoCoordinate* SoCoordinate714 = new SoCoordinate();
SoCoordinate714->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
SoLineSet712->setCoord(*SoCoordinate714);

SoShape711->setGeometry(*SoLineSet712);

SoHAnimSegment703->addChild(*SoShape711);

SoShape* SoShape715 = new SoShape();
SoLineSet* SoLineSet716 = new SoLineSet();
SoLineSet716->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA717 = new SoColorRGBA();
SoColorRGBA717->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet716->addChild(*SoColorRGBA717);

SoCoordinate* SoCoordinate718 = new SoCoordinate();
SoCoordinate718->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506}, 6);
SoLineSet716->setCoord(*SoCoordinate718);

SoShape715->setGeometry(*SoLineSet716);

SoHAnimSegment703->addChild(*SoShape715);

SoShape* SoShape719 = new SoShape();
SoLineSet* SoLineSet720 = new SoLineSet();
SoLineSet720->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA721 = new SoColorRGBA();
SoColorRGBA721->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet720->addChild(*SoColorRGBA721);

SoCoordinate* SoCoordinate722 = new SoCoordinate();
SoCoordinate722->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
SoLineSet720->setCoord(*SoCoordinate722);

SoShape719->setGeometry(*SoLineSet720);

SoHAnimSegment703->addChild(*SoShape719);

SoShape* SoShape723 = new SoShape();
SoLineSet* SoLineSet724 = new SoLineSet();
SoLineSet724->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA725 = new SoColorRGBA();
SoColorRGBA725->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet724->addChild(*SoColorRGBA725);

SoCoordinate* SoCoordinate726 = new SoCoordinate();
SoCoordinate726->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
SoLineSet724->setCoord(*SoCoordinate726);

SoShape723->setGeometry(*SoLineSet724);

SoHAnimSegment703->addChild(*SoShape723);

SoShape* SoShape727 = new SoShape();
SoLineSet* SoLineSet728 = new SoLineSet();
SoLineSet728->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA729 = new SoColorRGBA();
SoColorRGBA729->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet728->addChild(*SoColorRGBA729);

SoCoordinate* SoCoordinate730 = new SoCoordinate();
SoCoordinate730->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506}, 6);
SoLineSet728->setCoord(*SoCoordinate730);

SoShape727->setGeometry(*SoLineSet728);

SoHAnimSegment703->addChild(*SoShape727);

SoShape* SoShape731 = new SoShape();
SoLineSet* SoLineSet732 = new SoLineSet();
SoLineSet732->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA733 = new SoColorRGBA();
SoColorRGBA733->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet732->addChild(*SoColorRGBA733);

SoCoordinate* SoCoordinate734 = new SoCoordinate();
SoCoordinate734->setPoint(new float[]{0.0044,1.6209,0.0236,0.0,1.63,0.015}, 6);
SoLineSet732->setCoord(*SoCoordinate734);

SoShape731->setGeometry(*SoLineSet732);

SoHAnimSegment703->addChild(*SoShape731);

SoShape* SoShape735 = new SoShape();
SoLineSet* SoLineSet736 = new SoLineSet();
SoLineSet736->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA737 = new SoColorRGBA();
SoColorRGBA737->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet736->addChild(*SoColorRGBA737);

SoCoordinate* SoCoordinate738 = new SoCoordinate();
SoCoordinate738->setPoint(new float[]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055}, 6);
SoLineSet736->setCoord(*SoCoordinate738);

SoShape735->setGeometry(*SoLineSet736);

SoHAnimSegment703->addChild(*SoShape735);

SoShape* SoShape739 = new SoShape();
SoLineSet* SoLineSet740 = new SoLineSet();
SoLineSet740->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA741 = new SoColorRGBA();
SoColorRGBA741->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet740->addChild(*SoColorRGBA741);

SoCoordinate* SoCoordinate742 = new SoCoordinate();
SoCoordinate742->setPoint(new float[]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852}, 6);
SoLineSet740->setCoord(*SoCoordinate742);

SoShape739->setGeometry(*SoLineSet740);

SoHAnimSegment703->addChild(*SoShape739);

SoShape* SoShape743 = new SoShape();
SoLineSet* SoLineSet744 = new SoLineSet();
SoLineSet744->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA745 = new SoColorRGBA();
SoColorRGBA745->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet744->addChild(*SoColorRGBA745);

SoCoordinate* SoCoordinate746 = new SoCoordinate();
SoCoordinate746->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752}, 6);
SoLineSet744->setCoord(*SoCoordinate746);

SoShape743->setGeometry(*SoLineSet744);

SoHAnimSegment703->addChild(*SoShape743);

SoShape* SoShape747 = new SoShape();
SoLineSet* SoLineSet748 = new SoLineSet();
SoLineSet748->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA749 = new SoColorRGBA();
SoColorRGBA749->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet748->addChild(*SoColorRGBA749);

SoCoordinate* SoCoordinate750 = new SoCoordinate();
SoCoordinate750->setPoint(new float[]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752}, 6);
SoLineSet748->setCoord(*SoCoordinate750);

SoShape747->setGeometry(*SoLineSet748);

SoHAnimSegment703->addChild(*SoShape747);

SoShape* SoShape751 = new SoShape();
SoLineSet* SoLineSet752 = new SoLineSet();
SoLineSet752->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA753 = new SoColorRGBA();
SoColorRGBA753->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet752->addChild(*SoColorRGBA753);

SoCoordinate* SoCoordinate754 = new SoCoordinate();
SoCoordinate754->setPoint(new float[]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805}, 6);
SoLineSet752->setCoord(*SoCoordinate754);

SoShape751->setGeometry(*SoLineSet752);

SoHAnimSegment703->addChild(*SoShape751);

SoShape* SoShape755 = new SoShape();
SoLineSet* SoLineSet756 = new SoLineSet();
SoLineSet756->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA757 = new SoColorRGBA();
SoColorRGBA757->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet756->addChild(*SoColorRGBA757);

SoCoordinate* SoCoordinate758 = new SoCoordinate();
SoCoordinate758->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302}, 6);
SoLineSet756->setCoord(*SoCoordinate758);

SoShape755->setGeometry(*SoLineSet756);

SoHAnimSegment703->addChild(*SoShape755);

SoShape* SoShape759 = new SoShape();
SoLineSet* SoLineSet760 = new SoLineSet();
SoLineSet760->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA761 = new SoColorRGBA();
SoColorRGBA761->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet760->addChild(*SoColorRGBA761);

SoCoordinate* SoCoordinate762 = new SoCoordinate();
SoCoordinate762->setPoint(new float[]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347}, 6);
SoLineSet760->setCoord(*SoCoordinate762);

SoShape759->setGeometry(*SoLineSet760);

SoHAnimSegment703->addChild(*SoShape759);

SoShape* SoShape763 = new SoShape();
SoLineSet* SoLineSet764 = new SoLineSet();
SoLineSet764->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA765 = new SoColorRGBA();
SoColorRGBA765->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet764->addChild(*SoColorRGBA765);

SoCoordinate* SoCoordinate766 = new SoCoordinate();
SoCoordinate766->setPoint(new float[]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282}, 6);
SoLineSet764->setCoord(*SoCoordinate766);

SoShape763->setGeometry(*SoLineSet764);

SoHAnimSegment703->addChild(*SoShape763);

SoShape* SoShape767 = new SoShape();
SoLineSet* SoLineSet768 = new SoLineSet();
SoLineSet768->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA769 = new SoColorRGBA();
SoColorRGBA769->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet768->addChild(*SoColorRGBA769);

SoCoordinate* SoCoordinate770 = new SoCoordinate();
SoCoordinate770->setPoint(new float[]{0.0044,1.6209,0.0236,0.0631,1.553,0.033}, 6);
SoLineSet768->setCoord(*SoCoordinate770);

SoShape767->setGeometry(*SoLineSet768);

SoHAnimSegment703->addChild(*SoShape767);

SoShape* SoShape771 = new SoShape();
SoLineSet* SoLineSet772 = new SoLineSet();
SoLineSet772->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA773 = new SoColorRGBA();
SoColorRGBA773->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet772->addChild(*SoColorRGBA773);

SoCoordinate* SoCoordinate774 = new SoCoordinate();
SoCoordinate774->setPoint(new float[]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796}, 6);
SoLineSet772->setCoord(*SoCoordinate774);

SoShape771->setGeometry(*SoLineSet772);

SoHAnimSegment703->addChild(*SoShape771);

SoHAnimSite* SoHAnimSite775 = new SoHAnimSite();
SoHAnimSite775->setDEF(QString("hanim_skull_tip"));
SoHAnimSite775->X3DNode::setName(QString("skull_tip"));
SoHAnimSite775->setTranslation(new float[]{0.005,1.7504,0.0055});
SoTouchSensor* SoTouchSensor776 = new SoTouchSensor();
SoTouchSensor776->setDescription(QString("HAnimSite skull_tip"));
SoHAnimSite775->addChild(*SoTouchSensor776);

SoShape* SoShape777 = new SoShape();
SoShape777->setUSE(QString("HAnimSiteShape"));
SoHAnimSite775->addChild(*SoShape777);

SoHAnimSegment703->addChild(*SoHAnimSite775);

SoHAnimSite* SoHAnimSite778 = new SoHAnimSite();
SoHAnimSite778->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite778->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite778->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoTouchSensor* SoTouchSensor779 = new SoTouchSensor();
SoTouchSensor779->setDescription(QString("HAnimSite sellion"));
SoHAnimSite778->addChild(*SoTouchSensor779);

SoShape* SoShape780 = new SoShape();
SoShape780->setUSE(QString("HAnimSiteShape"));
SoHAnimSite778->addChild(*SoShape780);

SoHAnimSegment703->addChild(*SoHAnimSite778);

SoHAnimSite* SoHAnimSite781 = new SoHAnimSite();
SoHAnimSite781->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite781->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite781->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoTouchSensor* SoTouchSensor782 = new SoTouchSensor();
SoTouchSensor782->setDescription(QString("HAnimSite r_infraorbitale"));
SoHAnimSite781->addChild(*SoTouchSensor782);

SoShape* SoShape783 = new SoShape();
SoShape783->setUSE(QString("HAnimSiteShape"));
SoHAnimSite781->addChild(*SoShape783);

SoHAnimSegment703->addChild(*SoHAnimSite781);

SoHAnimSite* SoHAnimSite784 = new SoHAnimSite();
SoHAnimSite784->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite784->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite784->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoTouchSensor* SoTouchSensor785 = new SoTouchSensor();
SoTouchSensor785->setDescription(QString("HAnimSite l_infraorbitale"));
SoHAnimSite784->addChild(*SoTouchSensor785);

SoShape* SoShape786 = new SoShape();
SoShape786->setUSE(QString("HAnimSiteShape"));
SoHAnimSite784->addChild(*SoShape786);

SoHAnimSegment703->addChild(*SoHAnimSite784);

SoHAnimSite* SoHAnimSite787 = new SoHAnimSite();
SoHAnimSite787->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite787->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite787->setTranslation(new float[]{0.0061,1.541,0.0805});
SoTouchSensor* SoTouchSensor788 = new SoTouchSensor();
SoTouchSensor788->setDescription(QString("HAnimSite supramenton"));
SoHAnimSite787->addChild(*SoTouchSensor788);

SoShape* SoShape789 = new SoShape();
SoShape789->setUSE(QString("HAnimSiteShape"));
SoHAnimSite787->addChild(*SoShape789);

SoHAnimSegment703->addChild(*SoHAnimSite787);

SoHAnimSite* SoHAnimSite790 = new SoHAnimSite();
SoHAnimSite790->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite790->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite790->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoTouchSensor* SoTouchSensor791 = new SoTouchSensor();
SoTouchSensor791->setDescription(QString("HAnimSite r_tragion"));
SoHAnimSite790->addChild(*SoTouchSensor791);

SoShape* SoShape792 = new SoShape();
SoShape792->setUSE(QString("HAnimSiteShape"));
SoHAnimSite790->addChild(*SoShape792);

SoHAnimSegment703->addChild(*SoHAnimSite790);

SoHAnimSite* SoHAnimSite793 = new SoHAnimSite();
SoHAnimSite793->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite793->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite793->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoTouchSensor* SoTouchSensor794 = new SoTouchSensor();
SoTouchSensor794->setDescription(QString("HAnimSite r_gonion"));
SoHAnimSite793->addChild(*SoTouchSensor794);

SoShape* SoShape795 = new SoShape();
SoShape795->setUSE(QString("HAnimSiteShape"));
SoHAnimSite793->addChild(*SoShape795);

SoHAnimSegment703->addChild(*SoHAnimSite793);

SoHAnimSite* SoHAnimSite796 = new SoHAnimSite();
SoHAnimSite796->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite796->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite796->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoTouchSensor* SoTouchSensor797 = new SoTouchSensor();
SoTouchSensor797->setDescription(QString("HAnimSite l_tragion"));
SoHAnimSite796->addChild(*SoTouchSensor797);

SoShape* SoShape798 = new SoShape();
SoShape798->setUSE(QString("HAnimSiteShape"));
SoHAnimSite796->addChild(*SoShape798);

SoHAnimSegment703->addChild(*SoHAnimSite796);

SoHAnimSite* SoHAnimSite799 = new SoHAnimSite();
SoHAnimSite799->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite799->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite799->setTranslation(new float[]{0.0631,1.553,0.033});
SoTouchSensor* SoTouchSensor800 = new SoTouchSensor();
SoTouchSensor800->setDescription(QString("HAnimSite l_gonion"));
SoHAnimSite799->addChild(*SoTouchSensor800);

SoShape* SoShape801 = new SoShape();
SoShape801->setUSE(QString("HAnimSiteShape"));
SoHAnimSite799->addChild(*SoShape801);

SoHAnimSegment703->addChild(*SoHAnimSite799);

SoHAnimSite* SoHAnimSite802 = new SoHAnimSite();
SoHAnimSite802->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite802->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite802->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoTouchSensor* SoTouchSensor803 = new SoTouchSensor();
SoTouchSensor803->setDescription(QString("HAnimSite nuchale"));
SoHAnimSite802->addChild(*SoTouchSensor803);

SoShape* SoShape804 = new SoShape();
SoShape804->setUSE(QString("HAnimSiteShape"));
SoHAnimSite802->addChild(*SoShape804);

SoHAnimSegment703->addChild(*SoHAnimSite802);

SoHAnimJoint702->addChildren(*SoHAnimSegment703);

SoHAnimJoint* SoHAnimJoint805 = new SoHAnimJoint();
SoHAnimJoint805->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint805->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint805->setRotation(new float[]{-0.999999999999999,0.0,0.0,0.277705039416179});
SoHAnimJoint805->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment806 = new SoHAnimSegment();
SoHAnimSegment806->setDEF(QString("hanim_l_eyeball"));
SoHAnimSegment806->X3DNode::setName(QString("l_eyeball"));
SoTouchSensor* SoTouchSensor807 = new SoTouchSensor();
SoTouchSensor807->setDescription(QString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"));
SoHAnimSegment806->addChild(*SoTouchSensor807);

SoTransform* SoTransform808 = new SoTransform();
SoTransform808->setTranslation(new float[]{0.0336,1.6332,0.0502});
SoShape* SoShape809 = new SoShape();
SoShape809->setUSE(QString("HAnimJointShape"));
SoTransform808->addChild(*SoShape809);

SoHAnimSegment806->addChild(*SoTransform808);

SoShape* SoShape810 = new SoShape();
SoLineSet* SoLineSet811 = new SoLineSet();
SoLineSet811->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA812 = new SoColorRGBA();
SoColorRGBA812->setDEF(QString("HAnimSiteViewpointLineColorRGBA"));
SoColorRGBA812->setColor(new float[]{0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.1}, 8);
SoLineSet811->addChild(*SoColorRGBA812);

SoCoordinate* SoCoordinate813 = new SoCoordinate();
SoCoordinate813->setPoint(new float[]{0.0336,1.6332,0.0502,0.034,1.64,0.05}, 6);
SoLineSet811->setCoord(*SoCoordinate813);

SoShape810->setGeometry(*SoLineSet811);

SoHAnimSegment806->addChild(*SoShape810);

SoHAnimSite* SoHAnimSite814 = new SoHAnimSite();
SoHAnimSite814->setDEF(QString("hanim_l_eyeball_site_view"));
SoHAnimSite814->X3DNode::setName(QString("l_eyeball_site_view"));
SoHAnimSite814->setTranslation(new float[]{0.034,1.64,0.05});
SoViewpoint* SoViewpoint815 = new SoViewpoint();
SoViewpoint815->setDEF(QString("hanim_l_eyeball_site_viewpoint"));
SoViewpoint815->setDescription(QString("l_eyeball_site_viewpoint looking forward"));
SoViewpoint815->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint815->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite814->addChild(*SoViewpoint815);

SoAnchor* SoAnchor816 = new SoAnchor();
SoAnchor816->setDescription(QString("HAnimSite Viewpoint hanim_l_eyeball_site_view"));
SoAnchor816->setUrl(new QString[]{QString("#hanim_l_eyeball_site_viewpoint")}, 1);
SoLOD* SoLOD817 = new SoLOD();
SoLOD817->setForceTransitions(true);
SoLOD817->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo818 = new SoWorldInfo();
SoWorldInfo818->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD817->addChildren(*SoWorldInfo818);

SoShape* SoShape819 = new SoShape();
SoShape819->setDEF(QString("HAnimSiteViewpointShape"));
SoVRMLAppearance* SoVRMLAppearance820 = new SoVRMLAppearance();
SoMaterial* SoMaterial821 = new SoMaterial();
SoMaterial821->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial821->setTransparency(0.6);
SoVRMLAppearance820->addChild(*SoMaterial821);

SoShape819->addChild(*SoVRMLAppearance820);

SoIndexedFaceSet* SoIndexedFaceSet822 = new SoIndexedFaceSet();
SoIndexedFaceSet822->setDEF(QString("SiteViewpointDiamondIFS"));
SoIndexedFaceSet822->setCreaseAngle(0.5);
SoIndexedFaceSet822->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate823 = new SoCoordinate();
SoCoordinate823->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet822->setCoord(*SoCoordinate823);

SoShape819->setGeometry(*SoIndexedFaceSet822);

SoLOD817->addChildren(SoShape819);

SoAnchor816->addChild(*SoLOD817);

SoHAnimSite814->addChild(SoAnchor816);

SoHAnimSegment806->addChild(*SoHAnimSite814);

SoHAnimJoint805->addChildren(*SoHAnimSegment806);

SoHAnimJoint702->addChildren(*SoHAnimJoint805);

SoHAnimJoint* SoHAnimJoint824 = new SoHAnimJoint();
SoHAnimJoint824->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint824->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint824->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment825 = new SoHAnimSegment();
SoHAnimSegment825->setDEF(QString("hanim_l_eyelid"));
SoHAnimSegment825->X3DNode::setName(QString("l_eyelid"));
SoTouchSensor* SoTouchSensor826 = new SoTouchSensor();
SoTouchSensor826->setDescription(QString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"));
SoHAnimSegment825->addChild(*SoTouchSensor826);

SoTransform* SoTransform827 = new SoTransform();
SoTransform827->setTranslation(new float[]{0.0336,1.6332,0.0502});
SoShape* SoShape828 = new SoShape();
SoShape828->setUSE(QString("HAnimJointShape"));
SoTransform827->addChild(*SoShape828);

SoHAnimSegment825->addChild(*SoTransform827);

SoHAnimJoint824->addChildren(*SoHAnimSegment825);

SoHAnimJoint702->addChildren(*SoHAnimJoint824);

SoHAnimJoint* SoHAnimJoint829 = new SoHAnimJoint();
SoHAnimJoint829->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint829->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint829->setCenter(new float[]{0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment830 = new SoHAnimSegment();
SoHAnimSegment830->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSegment830->X3DNode::setName(QString("l_eyebrow"));
SoTouchSensor* SoTouchSensor831 = new SoTouchSensor();
SoTouchSensor831->setDescription(QString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"));
SoHAnimSegment830->addChild(*SoTouchSensor831);

SoTransform* SoTransform832 = new SoTransform();
SoTransform832->setTranslation(new float[]{0.0336,1.635,0.0506});
SoShape* SoShape833 = new SoShape();
SoShape833->setUSE(QString("HAnimJointShape"));
SoTransform832->addChild(*SoShape833);

SoHAnimSegment830->addChild(*SoTransform832);

SoHAnimJoint829->addChildren(*SoHAnimSegment830);

SoHAnimJoint702->addChildren(*SoHAnimJoint829);

SoHAnimJoint* SoHAnimJoint834 = new SoHAnimJoint();
SoHAnimJoint834->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint834->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint834->setRotation(new float[]{-0.999999999999999,0.0,0.0,0.277705039416179});
SoHAnimJoint834->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment835 = new SoHAnimSegment();
SoHAnimSegment835->setDEF(QString("hanim_r_eyeball"));
SoHAnimSegment835->X3DNode::setName(QString("r_eyeball"));
SoTouchSensor* SoTouchSensor836 = new SoTouchSensor();
SoTouchSensor836->setDescription(QString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"));
SoHAnimSegment835->addChild(*SoTouchSensor836);

SoTransform* SoTransform837 = new SoTransform();
SoTransform837->setTranslation(new float[]{-0.0336,1.6332,0.0502});
SoShape* SoShape838 = new SoShape();
SoShape838->setUSE(QString("HAnimJointShape"));
SoTransform837->addChild(*SoShape838);

SoHAnimSegment835->addChild(*SoTransform837);

SoShape* SoShape839 = new SoShape();
SoLineSet* SoLineSet840 = new SoLineSet();
SoLineSet840->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA841 = new SoColorRGBA();
SoColorRGBA841->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet840->addChild(*SoColorRGBA841);

SoCoordinate* SoCoordinate842 = new SoCoordinate();
SoCoordinate842->setPoint(new float[]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05}, 6);
SoLineSet840->setCoord(*SoCoordinate842);

SoShape839->setGeometry(*SoLineSet840);

SoHAnimSegment835->addChild(*SoShape839);

SoHAnimSite* SoHAnimSite843 = new SoHAnimSite();
SoHAnimSite843->setDEF(QString("hanim_r_eyeball_site_view"));
SoHAnimSite843->X3DNode::setName(QString("r_eyeball_site_view"));
SoHAnimSite843->setTranslation(new float[]{-0.034,1.64,0.05});
SoViewpoint* SoViewpoint844 = new SoViewpoint();
SoViewpoint844->setDEF(QString("hanim_r_eyeball_site_viewpoint"));
SoViewpoint844->setDescription(QString("r_eyeball_site_viewpoint looking forward"));
SoViewpoint844->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint844->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite843->addChild(*SoViewpoint844);

SoAnchor* SoAnchor845 = new SoAnchor();
SoAnchor845->setDescription(QString("HAnimSite Viewpoint hanim_r_eyeball_site_view"));
SoAnchor845->setUrl(new QString[]{QString("#hanim_r_eyeball_site_viewpoint")}, 1);
SoLOD* SoLOD846 = new SoLOD();
SoLOD846->setForceTransitions(true);
SoLOD846->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo847 = new SoWorldInfo();
SoWorldInfo847->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD846->addChildren(*SoWorldInfo847);

SoShape* SoShape848 = new SoShape();
SoShape848->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD846->addChildren(SoShape848);

SoAnchor845->addChild(*SoLOD846);

SoHAnimSite843->addChild(SoAnchor845);

SoHAnimSegment835->addChild(*SoHAnimSite843);

SoHAnimJoint834->addChildren(*SoHAnimSegment835);

SoHAnimJoint702->addChildren(*SoHAnimJoint834);

SoHAnimJoint* SoHAnimJoint849 = new SoHAnimJoint();
SoHAnimJoint849->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint849->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint849->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment850 = new SoHAnimSegment();
SoHAnimSegment850->setDEF(QString("hanim_r_eyelid"));
SoHAnimSegment850->X3DNode::setName(QString("r_eyelid"));
SoTouchSensor* SoTouchSensor851 = new SoTouchSensor();
SoTouchSensor851->setDescription(QString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"));
SoHAnimSegment850->addChild(*SoTouchSensor851);

SoTransform* SoTransform852 = new SoTransform();
SoTransform852->setTranslation(new float[]{-0.0336,1.6332,0.0502});
SoShape* SoShape853 = new SoShape();
SoShape853->setUSE(QString("HAnimJointShape"));
SoTransform852->addChild(*SoShape853);

SoHAnimSegment850->addChild(*SoTransform852);

SoHAnimJoint849->addChildren(*SoHAnimSegment850);

SoHAnimJoint702->addChildren(*SoHAnimJoint849);

SoHAnimJoint* SoHAnimJoint854 = new SoHAnimJoint();
SoHAnimJoint854->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint854->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint854->setCenter(new float[]{-0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment855 = new SoHAnimSegment();
SoHAnimSegment855->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSegment855->X3DNode::setName(QString("r_eyebrow"));
SoTouchSensor* SoTouchSensor856 = new SoTouchSensor();
SoTouchSensor856->setDescription(QString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"));
SoHAnimSegment855->addChild(*SoTouchSensor856);

SoTransform* SoTransform857 = new SoTransform();
SoTransform857->setTranslation(new float[]{-0.0336,1.635,0.0506});
SoShape* SoShape858 = new SoShape();
SoShape858->setUSE(QString("HAnimJointShape"));
SoTransform857->addChild(*SoShape858);

SoHAnimSegment855->addChild(*SoTransform857);

SoHAnimJoint854->addChildren(*SoHAnimSegment855);

SoHAnimJoint702->addChildren(*SoHAnimJoint854);

SoHAnimJoint* SoHAnimJoint859 = new SoHAnimJoint();
SoHAnimJoint859->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint859->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint859->setCenter(new float[]{0.0,1.63,0.015});
SoHAnimSegment* SoHAnimSegment860 = new SoHAnimSegment();
SoHAnimSegment860->setDEF(QString("hanim_jaw"));
SoHAnimSegment860->X3DNode::setName(QString("jaw"));
SoTouchSensor* SoTouchSensor861 = new SoTouchSensor();
SoTouchSensor861->setDescription(QString("HAnimJoint temporomandibular, HAnimSegment jaw"));
SoHAnimSegment860->addChild(*SoTouchSensor861);

SoTransform* SoTransform862 = new SoTransform();
SoTransform862->setTranslation(new float[]{0.0,1.63,0.015});
SoShape* SoShape863 = new SoShape();
SoShape863->setUSE(QString("HAnimJointShape"));
SoTransform862->addChild(*SoShape863);

SoHAnimSegment860->addChild(*SoTransform862);

SoShape* SoShape864 = new SoShape();
SoLineSet* SoLineSet865 = new SoLineSet();
SoLineSet865->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA866 = new SoColorRGBA();
SoColorRGBA866->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet865->addChild(*SoColorRGBA866);

SoCoordinate* SoCoordinate867 = new SoCoordinate();
SoCoordinate867->setPoint(new float[]{0.0,1.63,0.015,0.045,1.63,0.0}, 6);
SoLineSet865->setCoord(*SoCoordinate867);

SoShape864->setGeometry(*SoLineSet865);

SoHAnimSegment860->addChild(*SoShape864);

SoShape* SoShape868 = new SoShape();
SoLineSet* SoLineSet869 = new SoLineSet();
SoLineSet869->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA870 = new SoColorRGBA();
SoColorRGBA870->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet869->addChild(*SoColorRGBA870);

SoCoordinate* SoCoordinate871 = new SoCoordinate();
SoCoordinate871->setPoint(new float[]{0.0,1.63,0.015,-0.045,1.63,0.0}, 6);
SoLineSet869->setCoord(*SoCoordinate871);

SoShape868->setGeometry(*SoLineSet869);

SoHAnimSegment860->addChild(*SoShape868);

SoHAnimSite* SoHAnimSite872 = new SoHAnimSite();
SoHAnimSite872->setDEF(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimSite872->X3DNode::setName(QString("temporomandibular_l_site_pt"));
SoHAnimSite872->setTranslation(new float[]{0.045,1.63,0.0});
SoTouchSensor* SoTouchSensor873 = new SoTouchSensor();
SoTouchSensor873->setDescription(QString("HAnimSite temporomandibular_l_site"));
SoHAnimSite872->addChild(*SoTouchSensor873);

SoShape* SoShape874 = new SoShape();
SoShape874->setUSE(QString("HAnimSiteShape"));
SoHAnimSite872->addChild(*SoShape874);

SoHAnimSegment860->addChild(*SoHAnimSite872);

SoHAnimSite* SoHAnimSite875 = new SoHAnimSite();
SoHAnimSite875->setDEF(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimSite875->X3DNode::setName(QString("temporomandibular_r_site_pt"));
SoHAnimSite875->setTranslation(new float[]{-0.045,1.63,0.0});
SoTouchSensor* SoTouchSensor876 = new SoTouchSensor();
SoTouchSensor876->setDescription(QString("HAnimSite temporomandibular_r_site"));
SoHAnimSite875->addChild(*SoTouchSensor876);

SoShape* SoShape877 = new SoShape();
SoShape877->setUSE(QString("HAnimSiteShape"));
SoHAnimSite875->addChild(*SoShape877);

SoHAnimSegment860->addChild(*SoHAnimSite875);

SoHAnimJoint859->addChildren(*SoHAnimSegment860);

SoHAnimJoint702->addChildren(*SoHAnimJoint859);

SoHAnimJoint693->addChildren(*SoHAnimJoint702);

SoHAnimJoint684->addChildren(*SoHAnimJoint693);

SoHAnimJoint675->addChildren(*SoHAnimJoint684);

SoHAnimJoint666->addChildren(*SoHAnimJoint675);

SoHAnimJoint657->addChildren(*SoHAnimJoint666);

SoHAnimJoint648->addChildren(*SoHAnimJoint657);

SoHAnimJoint625->addChildren(*SoHAnimJoint648);

SoHAnimJoint594->addChildren(*SoHAnimJoint625);

SoHAnimJoint* SoHAnimJoint878 = new SoHAnimJoint();
SoHAnimJoint878->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint878->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint878->setRotation(new float[]{0.0,0.0,1.00000000000003,0.108042894183947});
SoHAnimJoint878->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment879 = new SoHAnimSegment();
SoHAnimSegment879->setDEF(QString("hanim_l_clavicle"));
SoHAnimSegment879->X3DNode::setName(QString("l_clavicle"));
SoTouchSensor* SoTouchSensor880 = new SoTouchSensor();
SoTouchSensor880->setDescription(QString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"));
SoHAnimSegment879->addChild(*SoTouchSensor880);

SoTransform* SoTransform881 = new SoTransform();
SoTransform881->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoShape* SoShape882 = new SoShape();
SoShape882->setUSE(QString("HAnimJointShape"));
SoTransform881->addChild(*SoShape882);

SoHAnimSegment879->addChild(*SoTransform881);

SoShape* SoShape883 = new SoShape();
SoLineSet* SoLineSet884 = new SoLineSet();
SoLineSet884->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA885 = new SoColorRGBA();
SoColorRGBA885->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet884->addChild(*SoColorRGBA885);

SoCoordinate* SoCoordinate886 = new SoCoordinate();
SoCoordinate886->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoLineSet884->setCoord(*SoCoordinate886);

SoShape883->setGeometry(*SoLineSet884);

SoHAnimSegment879->addChild(*SoShape883);

SoShape* SoShape887 = new SoShape();
SoLineSet* SoLineSet888 = new SoLineSet();
SoLineSet888->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA889 = new SoColorRGBA();
SoColorRGBA889->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet888->addChild(*SoColorRGBA889);

SoCoordinate* SoCoordinate890 = new SoCoordinate();
SoCoordinate890->setPoint(new float[]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394}, 6);
SoLineSet888->setCoord(*SoCoordinate890);

SoShape887->setGeometry(*SoLineSet888);

SoHAnimSegment879->addChild(*SoShape887);

SoShape* SoShape891 = new SoShape();
SoLineSet* SoLineSet892 = new SoLineSet();
SoLineSet892->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA893 = new SoColorRGBA();
SoColorRGBA893->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet892->addChild(*SoColorRGBA893);

SoCoordinate* SoCoordinate894 = new SoCoordinate();
SoCoordinate894->setPoint(new float[]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049}, 6);
SoLineSet892->setCoord(*SoCoordinate894);

SoShape891->setGeometry(*SoLineSet892);

SoHAnimSegment879->addChild(*SoShape891);

SoShape* SoShape895 = new SoShape();
SoLineSet* SoLineSet896 = new SoLineSet();
SoLineSet896->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA897 = new SoColorRGBA();
SoColorRGBA897->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet896->addChild(*SoColorRGBA897);

SoCoordinate* SoCoordinate898 = new SoCoordinate();
SoCoordinate898->setPoint(new float[]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075}, 6);
SoLineSet896->setCoord(*SoCoordinate898);

SoShape895->setGeometry(*SoLineSet896);

SoHAnimSegment879->addChild(*SoShape895);

SoShape* SoShape899 = new SoShape();
SoLineSet* SoLineSet900 = new SoLineSet();
SoLineSet900->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA901 = new SoColorRGBA();
SoColorRGBA901->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet900->addChild(*SoColorRGBA901);

SoCoordinate* SoCoordinate902 = new SoCoordinate();
SoCoordinate902->setPoint(new float[]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875}, 6);
SoLineSet900->setCoord(*SoCoordinate902);

SoShape899->setGeometry(*SoLineSet900);

SoHAnimSegment879->addChild(*SoShape899);

SoHAnimSite* SoHAnimSite903 = new SoHAnimSite();
SoHAnimSite903->setDEF(QString("hanim_l_clavicale_pt"));
SoHAnimSite903->X3DNode::setName(QString("l_clavicale_pt"));
SoHAnimSite903->setTranslation(new float[]{0.0271,1.4943,0.0394});
SoTouchSensor* SoTouchSensor904 = new SoTouchSensor();
SoTouchSensor904->setDescription(QString("HAnimSite l_clavicale"));
SoHAnimSite903->addChild(*SoTouchSensor904);

SoShape* SoShape905 = new SoShape();
SoShape905->setUSE(QString("HAnimSiteShape"));
SoHAnimSite903->addChild(*SoShape905);

SoHAnimSegment879->addChild(*SoHAnimSite903);

SoHAnimSite* SoHAnimSite906 = new SoHAnimSite();
SoHAnimSite906->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite906->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite906->setTranslation(new float[]{0.2032,1.476,-0.049});
SoTouchSensor* SoTouchSensor907 = new SoTouchSensor();
SoTouchSensor907->setDescription(QString("HAnimSite l_acromion"));
SoHAnimSite906->addChild(*SoTouchSensor907);

SoShape* SoShape908 = new SoShape();
SoShape908->setUSE(QString("HAnimSiteShape"));
SoHAnimSite906->addChild(*SoShape908);

SoHAnimSegment879->addChild(*SoHAnimSite906);

SoHAnimSite* SoHAnimSite909 = new SoHAnimSite();
SoHAnimSite909->setDEF(QString("hanim_l_axilla_ant_pt"));
SoHAnimSite909->X3DNode::setName(QString("l_axilla_ant_pt"));
SoHAnimSite909->setTranslation(new float[]{0.1777,1.4065,-0.0075});
SoTouchSensor* SoTouchSensor910 = new SoTouchSensor();
SoTouchSensor910->setDescription(QString("HAnimSite l_axilla_ant"));
SoHAnimSite909->addChild(*SoTouchSensor910);

SoShape* SoShape911 = new SoShape();
SoShape911->setUSE(QString("HAnimSiteShape"));
SoHAnimSite909->addChild(*SoShape911);

SoHAnimSegment879->addChild(*SoHAnimSite909);

SoHAnimSite* SoHAnimSite912 = new SoHAnimSite();
SoHAnimSite912->setDEF(QString("hanim_l_axilla_post_pt"));
SoHAnimSite912->X3DNode::setName(QString("l_axilla_post_pt"));
SoHAnimSite912->setTranslation(new float[]{0.1706,1.4072,-0.0875});
SoTouchSensor* SoTouchSensor913 = new SoTouchSensor();
SoTouchSensor913->setDescription(QString("HAnimSite l_axilla_post"));
SoHAnimSite912->addChild(*SoTouchSensor913);

SoShape* SoShape914 = new SoShape();
SoShape914->setUSE(QString("HAnimSiteShape"));
SoHAnimSite912->addChild(*SoShape914);

SoHAnimSegment879->addChild(*SoHAnimSite912);

SoHAnimJoint878->addChildren(*SoHAnimSegment879);

SoHAnimJoint* SoHAnimJoint915 = new SoHAnimJoint();
SoHAnimJoint915->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint915->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint915->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment916 = new SoHAnimSegment();
SoHAnimSegment916->setDEF(QString("hanim_l_scapula"));
SoHAnimSegment916->X3DNode::setName(QString("l_scapula"));
SoTouchSensor* SoTouchSensor917 = new SoTouchSensor();
SoTouchSensor917->setDescription(QString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"));
SoHAnimSegment916->addChild(*SoTouchSensor917);

SoTransform* SoTransform918 = new SoTransform();
SoTransform918->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoShape* SoShape919 = new SoShape();
SoShape919->setUSE(QString("HAnimJointShape"));
SoTransform918->addChild(*SoShape919);

SoHAnimSegment916->addChild(*SoTransform918);

SoShape* SoShape920 = new SoShape();
SoLineSet* SoLineSet921 = new SoLineSet();
SoLineSet921->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA922 = new SoColorRGBA();
SoColorRGBA922->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet921->addChild(*SoColorRGBA922);

SoCoordinate* SoCoordinate923 = new SoCoordinate();
SoCoordinate923->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
SoLineSet921->setCoord(*SoCoordinate923);

SoShape920->setGeometry(*SoLineSet921);

SoHAnimSegment916->addChild(*SoShape920);

SoHAnimJoint915->addChildren(*SoHAnimSegment916);

SoHAnimJoint* SoHAnimJoint924 = new SoHAnimJoint();
SoHAnimJoint924->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint924->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint924->setRotation(new float[]{0.0,0.0,1.0,0.950777468818762});
SoHAnimJoint924->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment925 = new SoHAnimSegment();
SoHAnimSegment925->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment925->X3DNode::setName(QString("l_upperarm"));
SoTouchSensor* SoTouchSensor926 = new SoTouchSensor();
SoTouchSensor926->setDescription(QString("HAnimJoint l_shoulder, HAnimSegment l_upperarm"));
SoHAnimSegment925->addChild(*SoTouchSensor926);

SoTransform* SoTransform927 = new SoTransform();
SoTransform927->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoShape* SoShape928 = new SoShape();
SoShape928->setUSE(QString("HAnimJointShape"));
SoTransform927->addChild(*SoShape928);

SoHAnimSegment925->addChild(*SoTransform927);

SoShape* SoShape929 = new SoShape();
SoLineSet* SoLineSet930 = new SoLineSet();
SoLineSet930->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA931 = new SoColorRGBA();
SoColorRGBA931->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet930->addChild(*SoColorRGBA931);

SoCoordinate* SoCoordinate932 = new SoCoordinate();
SoCoordinate932->setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
SoLineSet930->setCoord(*SoCoordinate932);

SoShape929->setGeometry(*SoLineSet930);

SoHAnimSegment925->addChild(*SoShape929);

SoShape* SoShape933 = new SoShape();
SoLineSet* SoLineSet934 = new SoLineSet();
SoLineSet934->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA935 = new SoColorRGBA();
SoColorRGBA935->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet934->addChild(*SoColorRGBA935);

SoCoordinate* SoCoordinate936 = new SoCoordinate();
SoCoordinate936->setPoint(new float[]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11}, 6);
SoLineSet934->setCoord(*SoCoordinate936);

SoShape933->setGeometry(*SoLineSet934);

SoHAnimSegment925->addChild(*SoShape933);

SoHAnimSite* SoHAnimSite937 = new SoHAnimSite();
SoHAnimSite937->setDEF(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimSite937->X3DNode::setName(QString("l_humeral_lateral_epicn_pt"));
SoHAnimSite937->setTranslation(new float[]{0.228,1.1482,-0.11});
SoTouchSensor* SoTouchSensor938 = new SoTouchSensor();
SoTouchSensor938->setDescription(QString("HAnimSite l_humeral_lateral_epicn"));
SoHAnimSite937->addChild(*SoTouchSensor938);

SoShape* SoShape939 = new SoShape();
SoShape939->setUSE(QString("HAnimSiteShape"));
SoHAnimSite937->addChild(*SoShape939);

SoHAnimSegment925->addChild(*SoHAnimSite937);

SoHAnimJoint924->addChildren(*SoHAnimSegment925);

SoHAnimJoint* SoHAnimJoint940 = new SoHAnimJoint();
SoHAnimJoint940->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint940->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint940->setRotation(new float[]{-1.0,0.0,0.0,0.297117959005863});
SoHAnimJoint940->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment941 = new SoHAnimSegment();
SoHAnimSegment941->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment941->X3DNode::setName(QString("l_forearm"));
SoTouchSensor* SoTouchSensor942 = new SoTouchSensor();
SoTouchSensor942->setDescription(QString("HAnimJoint l_elbow, HAnimSegment l_forearm"));
SoHAnimSegment941->addChild(*SoTouchSensor942);

SoTransform* SoTransform943 = new SoTransform();
SoTransform943->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoShape* SoShape944 = new SoShape();
SoShape944->setUSE(QString("HAnimJointShape"));
SoTransform943->addChild(*SoShape944);

SoHAnimSegment941->addChild(*SoTransform943);

SoShape* SoShape945 = new SoShape();
SoLineSet* SoLineSet946 = new SoLineSet();
SoLineSet946->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA947 = new SoColorRGBA();
SoColorRGBA947->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet946->addChild(*SoColorRGBA947);

SoCoordinate* SoCoordinate948 = new SoCoordinate();
SoCoordinate948->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
SoLineSet946->setCoord(*SoCoordinate948);

SoShape945->setGeometry(*SoLineSet946);

SoHAnimSegment941->addChild(*SoShape945);

SoShape* SoShape949 = new SoShape();
SoLineSet* SoLineSet950 = new SoLineSet();
SoLineSet950->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA951 = new SoColorRGBA();
SoColorRGBA951->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet950->addChild(*SoColorRGBA951);

SoCoordinate* SoCoordinate952 = new SoCoordinate();
SoCoordinate952->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415}, 6);
SoLineSet950->setCoord(*SoCoordinate952);

SoShape949->setGeometry(*SoLineSet950);

SoHAnimSegment941->addChild(*SoShape949);

SoShape* SoShape953 = new SoShape();
SoLineSet* SoLineSet954 = new SoLineSet();
SoLineSet954->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA955 = new SoColorRGBA();
SoColorRGBA955->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet954->addChild(*SoColorRGBA955);

SoCoordinate* SoCoordinate956 = new SoCoordinate();
SoCoordinate956->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123}, 6);
SoLineSet954->setCoord(*SoCoordinate956);

SoShape953->setGeometry(*SoLineSet954);

SoHAnimSegment941->addChild(*SoShape953);

SoShape* SoShape957 = new SoShape();
SoLineSet* SoLineSet958 = new SoLineSet();
SoLineSet958->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA959 = new SoColorRGBA();
SoColorRGBA959->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet958->addChild(*SoColorRGBA959);

SoCoordinate* SoCoordinate960 = new SoCoordinate();
SoCoordinate960->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113}, 6);
SoLineSet958->setCoord(*SoCoordinate960);

SoShape957->setGeometry(*SoLineSet958);

SoHAnimSegment941->addChild(*SoShape957);

SoShape* SoShape961 = new SoShape();
SoLineSet* SoLineSet962 = new SoLineSet();
SoLineSet962->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA963 = new SoColorRGBA();
SoColorRGBA963->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet962->addChild(*SoColorRGBA963);

SoCoordinate* SoCoordinate964 = new SoCoordinate();
SoCoordinate964->setPoint(new float[]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167}, 6);
SoLineSet962->setCoord(*SoCoordinate964);

SoShape961->setGeometry(*SoLineSet962);

SoHAnimSegment941->addChild(*SoShape961);

SoHAnimSite* SoHAnimSite965 = new SoHAnimSite();
SoHAnimSite965->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite965->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite965->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoTouchSensor* SoTouchSensor966 = new SoTouchSensor();
SoTouchSensor966->setDescription(QString("HAnimSite l_radial_styloid"));
SoHAnimSite965->addChild(*SoTouchSensor966);

SoShape* SoShape967 = new SoShape();
SoShape967->setUSE(QString("HAnimSiteShape"));
SoHAnimSite965->addChild(*SoShape967);

SoHAnimSegment941->addChild(*SoHAnimSite965);

SoHAnimSite* SoHAnimSite968 = new SoHAnimSite();
SoHAnimSite968->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite968->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite968->setTranslation(new float[]{0.1962,1.1375,-0.1123});
SoTouchSensor* SoTouchSensor969 = new SoTouchSensor();
SoTouchSensor969->setDescription(QString("HAnimSite l_olecranon"));
SoHAnimSite968->addChild(*SoTouchSensor969);

SoShape* SoShape970 = new SoShape();
SoShape970->setUSE(QString("HAnimSiteShape"));
SoHAnimSite968->addChild(*SoShape970);

SoHAnimSegment941->addChild(*SoHAnimSite968);

SoHAnimSite* SoHAnimSite971 = new SoHAnimSite();
SoHAnimSite971->setDEF(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimSite971->X3DNode::setName(QString("l_humeral_medial_epicn_pt"));
SoHAnimSite971->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoTouchSensor* SoTouchSensor972 = new SoTouchSensor();
SoTouchSensor972->setDescription(QString("HAnimSite l_humeral_medial_epicn"));
SoHAnimSite971->addChild(*SoTouchSensor972);

SoShape* SoShape973 = new SoShape();
SoShape973->setUSE(QString("HAnimSiteShape"));
SoHAnimSite971->addChild(*SoShape973);

SoHAnimSegment941->addChild(*SoHAnimSite971);

SoHAnimSite* SoHAnimSite974 = new SoHAnimSite();
SoHAnimSite974->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite974->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite974->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoTouchSensor* SoTouchSensor975 = new SoTouchSensor();
SoTouchSensor975->setDescription(QString("HAnimSite l_radiale"));
SoHAnimSite974->addChild(*SoTouchSensor975);

SoShape* SoShape976 = new SoShape();
SoShape976->setUSE(QString("HAnimSiteShape"));
SoHAnimSite974->addChild(*SoShape976);

SoHAnimSegment941->addChild(*SoHAnimSite974);

SoHAnimJoint940->addChildren(*SoHAnimSegment941);

SoHAnimJoint* SoHAnimJoint977 = new SoHAnimJoint();
SoHAnimJoint977->setDEF(QString("hanim_l_wrist"));
SoHAnimJoint977->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint977->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment978 = new SoHAnimSegment();
SoHAnimSegment978->setDEF(QString("hanim_l_hand"));
SoHAnimSegment978->X3DNode::setName(QString("l_hand"));
SoTouchSensor* SoTouchSensor979 = new SoTouchSensor();
SoTouchSensor979->setDescription(QString("HAnimJoint l_wrist, HAnimSegment l_hand"));
SoHAnimSegment978->addChild(*SoTouchSensor979);

SoTransform* SoTransform980 = new SoTransform();
SoTransform980->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoShape* SoShape981 = new SoShape();
SoShape981->setUSE(QString("HAnimJointShape"));
SoTransform980->addChild(*SoShape981);

SoHAnimSegment978->addChild(*SoTransform980);

SoShape* SoShape982 = new SoShape();
SoLineSet* SoLineSet983 = new SoLineSet();
SoLineSet983->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA984 = new SoColorRGBA();
SoColorRGBA984->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet983->addChild(*SoColorRGBA984);

SoCoordinate* SoCoordinate985 = new SoCoordinate();
SoCoordinate985->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
SoLineSet983->setCoord(*SoCoordinate985);

SoShape982->setGeometry(*SoLineSet983);

SoHAnimSegment978->addChild(*SoShape982);

SoShape* SoShape986 = new SoShape();
SoLineSet* SoLineSet987 = new SoLineSet();
SoLineSet987->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA988 = new SoColorRGBA();
SoColorRGBA988->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet987->addChild(*SoColorRGBA988);

SoCoordinate* SoCoordinate989 = new SoCoordinate();
SoCoordinate989->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
SoLineSet987->setCoord(*SoCoordinate989);

SoShape986->setGeometry(*SoLineSet987);

SoHAnimSegment978->addChild(*SoShape986);

SoShape* SoShape990 = new SoShape();
SoLineSet* SoLineSet991 = new SoLineSet();
SoLineSet991->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA992 = new SoColorRGBA();
SoColorRGBA992->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet991->addChild(*SoColorRGBA992);

SoCoordinate* SoCoordinate993 = new SoCoordinate();
SoCoordinate993->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
SoLineSet991->setCoord(*SoCoordinate993);

SoShape990->setGeometry(*SoLineSet991);

SoHAnimSegment978->addChild(*SoShape990);

SoShape* SoShape994 = new SoShape();
SoLineSet* SoLineSet995 = new SoLineSet();
SoLineSet995->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA996 = new SoColorRGBA();
SoColorRGBA996->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet995->addChild(*SoColorRGBA996);

SoCoordinate* SoCoordinate997 = new SoCoordinate();
SoCoordinate997->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
SoLineSet995->setCoord(*SoCoordinate997);

SoShape994->setGeometry(*SoLineSet995);

SoHAnimSegment978->addChild(*SoShape994);

SoShape* SoShape998 = new SoShape();
SoLineSet* SoLineSet999 = new SoLineSet();
SoLineSet999->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1000 = new SoColorRGBA();
SoColorRGBA1000->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet999->addChild(*SoColorRGBA1000);

SoCoordinate* SoCoordinate1001 = new SoCoordinate();
SoCoordinate1001->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
SoLineSet999->setCoord(*SoCoordinate1001);

SoShape998->setGeometry(*SoLineSet999);

SoHAnimSegment978->addChild(*SoShape998);

SoShape* SoShape1002 = new SoShape();
SoLineSet* SoLineSet1003 = new SoLineSet();
SoLineSet1003->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1004 = new SoColorRGBA();
SoColorRGBA1004->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1003->addChild(*SoColorRGBA1004);

SoCoordinate* SoCoordinate1005 = new SoCoordinate();
SoCoordinate1005->setPoint(new float[]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237}, 6);
SoLineSet1003->setCoord(*SoCoordinate1005);

SoShape1002->setGeometry(*SoLineSet1003);

SoHAnimSegment978->addChild(*SoShape1002);

SoShape* SoShape1006 = new SoShape();
SoLineSet* SoLineSet1007 = new SoLineSet();
SoLineSet1007->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1008 = new SoColorRGBA();
SoColorRGBA1008->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1007->addChild(*SoColorRGBA1008);

SoCoordinate* SoCoordinate1009 = new SoCoordinate();
SoCoordinate1009->setPoint(new float[]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648}, 6);
SoLineSet1007->setCoord(*SoCoordinate1009);

SoShape1006->setGeometry(*SoLineSet1007);

SoHAnimSegment978->addChild(*SoShape1006);

SoShape* SoShape1010 = new SoShape();
SoLineSet* SoLineSet1011 = new SoLineSet();
SoLineSet1011->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1012 = new SoColorRGBA();
SoColorRGBA1012->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1011->addChild(*SoColorRGBA1012);

SoCoordinate* SoCoordinate1013 = new SoCoordinate();
SoCoordinate1013->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122}, 6);
SoLineSet1011->setCoord(*SoCoordinate1013);

SoShape1010->setGeometry(*SoLineSet1011);

SoHAnimSegment978->addChild(*SoShape1010);

SoShape* SoShape1014 = new SoShape();
SoLineSet* SoLineSet1015 = new SoLineSet();
SoLineSet1015->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1016 = new SoColorRGBA();
SoColorRGBA1016->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet1015->addChild(*SoColorRGBA1016);

SoCoordinate* SoCoordinate1017 = new SoCoordinate();
SoCoordinate1017->setPoint(new float[]{0.1984,0.8663,-0.0583,0.3,0.75,0.45}, 6);
SoLineSet1015->setCoord(*SoCoordinate1017);

SoShape1014->setGeometry(*SoLineSet1015);

SoHAnimSegment978->addChild(*SoShape1014);

SoHAnimSite* SoHAnimSite1018 = new SoHAnimSite();
SoHAnimSite1018->setDEF(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimSite1018->X3DNode::setName(QString("l_metacarpal_pha2_pt"));
SoHAnimSite1018->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoTouchSensor* SoTouchSensor1019 = new SoTouchSensor();
SoTouchSensor1019->setDescription(QString("HAnimSite l_metacarpal_pha2"));
SoHAnimSite1018->addChild(*SoTouchSensor1019);

SoShape* SoShape1020 = new SoShape();
SoShape1020->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1018->addChild(*SoShape1020);

SoHAnimSegment978->addChild(*SoHAnimSite1018);

SoHAnimSite* SoHAnimSite1021 = new SoHAnimSite();
SoHAnimSite1021->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite1021->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite1021->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoTouchSensor* SoTouchSensor1022 = new SoTouchSensor();
SoTouchSensor1022->setDescription(QString("HAnimSite l_ulnar_styloid"));
SoHAnimSite1021->addChild(*SoTouchSensor1022);

SoShape* SoShape1023 = new SoShape();
SoShape1023->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1021->addChild(*SoShape1023);

SoHAnimSegment978->addChild(*SoHAnimSite1021);

SoHAnimSite* SoHAnimSite1024 = new SoHAnimSite();
SoHAnimSite1024->setDEF(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimSite1024->X3DNode::setName(QString("l_metacarpal_pha5_pt"));
SoHAnimSite1024->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoTouchSensor* SoTouchSensor1025 = new SoTouchSensor();
SoTouchSensor1025->setDescription(QString("HAnimSite l_metacarpal_pha5"));
SoHAnimSite1024->addChild(*SoTouchSensor1025);

SoShape* SoShape1026 = new SoShape();
SoShape1026->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1024->addChild(*SoShape1026);

SoHAnimSegment978->addChild(*SoHAnimSite1024);

SoHAnimSite* SoHAnimSite1027 = new SoHAnimSite();
SoHAnimSite1027->setDEF(QString("hanim_l_hand_front_view"));
SoHAnimSite1027->X3DNode::setName(QString("l_hand_front_view"));
SoHAnimSite1027->setTranslation(new float[]{0.3,0.75,0.45});
SoViewpoint* SoViewpoint1028 = new SoViewpoint();
SoViewpoint1028->setDEF(QString("hanim_l_hand_front_viewpoint"));
SoViewpoint1028->setDescription(QString("left hand front"));
SoViewpoint1028->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1028->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite1027->addChild(*SoViewpoint1028);

SoAnchor* SoAnchor1029 = new SoAnchor();
SoAnchor1029->setDescription(QString("HAnimSite Viewpoint hanim_l_hand_front_view"));
SoAnchor1029->setUrl(new QString[]{QString("#hanim_l_hand_front_viewpoint")}, 1);
SoLOD* SoLOD1030 = new SoLOD();
SoLOD1030->setForceTransitions(true);
SoLOD1030->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1031 = new SoWorldInfo();
SoWorldInfo1031->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1030->addChildren(*SoWorldInfo1031);

SoShape* SoShape1032 = new SoShape();
SoShape1032->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1030->addChildren(SoShape1032);

SoAnchor1029->addChild(*SoLOD1030);

SoHAnimSite1027->addChild(SoAnchor1029);

SoHAnimSegment978->addChild(*SoHAnimSite1027);

SoHAnimJoint977->addChildren(*SoHAnimSegment978);

SoHAnimJoint* SoHAnimJoint1033 = new SoHAnimJoint();
SoHAnimJoint1033->setDEF(QString("hanim_l_thumb1"));
SoHAnimJoint1033->X3DNode::setName(QString("l_thumb1"));
SoHAnimJoint1033->setRotation(new float[]{1.0,0.0,0.0,0.270107235459875});
SoHAnimJoint1033->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment1034 = new SoHAnimSegment();
SoHAnimSegment1034->setDEF(QString("hanim_l_thumb_metacarpal"));
SoHAnimSegment1034->X3DNode::setName(QString("l_thumb_metacarpal"));
SoTouchSensor* SoTouchSensor1035 = new SoTouchSensor();
SoTouchSensor1035->setDescription(QString("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"));
SoHAnimSegment1034->addChild(*SoTouchSensor1035);

SoTransform* SoTransform1036 = new SoTransform();
SoTransform1036->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape1037 = new SoShape();
SoShape1037->setUSE(QString("HAnimJointShape"));
SoTransform1036->addChild(*SoShape1037);

SoHAnimSegment1034->addChild(*SoTransform1036);

SoShape* SoShape1038 = new SoShape();
SoLineSet* SoLineSet1039 = new SoLineSet();
SoLineSet1039->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1040 = new SoColorRGBA();
SoColorRGBA1040->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1039->addChild(*SoColorRGBA1040);

SoCoordinate* SoCoordinate1041 = new SoCoordinate();
SoCoordinate1041->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoLineSet1039->setCoord(*SoCoordinate1041);

SoShape1038->setGeometry(*SoLineSet1039);

SoHAnimSegment1034->addChild(*SoShape1038);

SoHAnimJoint1033->addChildren(*SoHAnimSegment1034);

SoHAnimJoint* SoHAnimJoint1042 = new SoHAnimJoint();
SoHAnimJoint1042->setDEF(QString("hanim_l_thumb2"));
SoHAnimJoint1042->X3DNode::setName(QString("l_thumb2"));
SoHAnimJoint1042->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment1043 = new SoHAnimSegment();
SoHAnimSegment1043->setDEF(QString("hanim_l_thumb_proximal"));
SoHAnimSegment1043->X3DNode::setName(QString("l_thumb_proximal"));
SoTouchSensor* SoTouchSensor1044 = new SoTouchSensor();
SoTouchSensor1044->setDescription(QString("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"));
SoHAnimSegment1043->addChild(*SoTouchSensor1044);

SoTransform* SoTransform1045 = new SoTransform();
SoTransform1045->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape1046 = new SoShape();
SoShape1046->setUSE(QString("HAnimJointShape"));
SoTransform1045->addChild(*SoShape1046);

SoHAnimSegment1043->addChild(*SoTransform1045);

SoShape* SoShape1047 = new SoShape();
SoLineSet* SoLineSet1048 = new SoLineSet();
SoLineSet1048->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1049 = new SoColorRGBA();
SoColorRGBA1049->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1048->addChild(*SoColorRGBA1049);

SoCoordinate* SoCoordinate1050 = new SoCoordinate();
SoCoordinate1050->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoLineSet1048->setCoord(*SoCoordinate1050);

SoShape1047->setGeometry(*SoLineSet1048);

SoHAnimSegment1043->addChild(*SoShape1047);

SoHAnimJoint1042->addChildren(*SoHAnimSegment1043);

SoHAnimJoint* SoHAnimJoint1051 = new SoHAnimJoint();
SoHAnimJoint1051->setDEF(QString("hanim_l_thumb3"));
SoHAnimJoint1051->X3DNode::setName(QString("l_thumb3"));
SoHAnimJoint1051->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment1052 = new SoHAnimSegment();
SoHAnimSegment1052->setDEF(QString("hanim_l_thumb_distal"));
SoHAnimSegment1052->X3DNode::setName(QString("l_thumb_distal"));
SoTouchSensor* SoTouchSensor1053 = new SoTouchSensor();
SoTouchSensor1053->setDescription(QString("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"));
SoHAnimSegment1052->addChild(*SoTouchSensor1053);

SoTransform* SoTransform1054 = new SoTransform();
SoTransform1054->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape1055 = new SoShape();
SoShape1055->setUSE(QString("HAnimJointShape"));
SoTransform1054->addChild(*SoShape1055);

SoHAnimSegment1052->addChild(*SoTransform1054);

SoShape* SoShape1056 = new SoShape();
SoLineSet* SoLineSet1057 = new SoLineSet();
SoLineSet1057->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1058 = new SoColorRGBA();
SoColorRGBA1058->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1057->addChild(*SoColorRGBA1058);

SoCoordinate* SoCoordinate1059 = new SoCoordinate();
SoCoordinate1059->setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
SoLineSet1057->setCoord(*SoCoordinate1059);

SoShape1056->setGeometry(*SoLineSet1057);

SoHAnimSegment1052->addChild(*SoShape1056);

SoHAnimSite* SoHAnimSite1060 = new SoHAnimSite();
SoHAnimSite1060->setDEF(QString("hanim_l_thumb_distal_tip"));
SoHAnimSite1060->X3DNode::setName(QString("l_thumb_distal_tip"));
SoHAnimSite1060->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoTouchSensor* SoTouchSensor1061 = new SoTouchSensor();
SoTouchSensor1061->setDescription(QString("HAnimSite l_thumb_distal_tip"));
SoHAnimSite1060->addChild(*SoTouchSensor1061);

SoShape* SoShape1062 = new SoShape();
SoShape1062->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1060->addChild(*SoShape1062);

SoHAnimSegment1052->addChild(*SoHAnimSite1060);

SoHAnimJoint1051->addChildren(*SoHAnimSegment1052);

SoHAnimJoint1042->addChildren(*SoHAnimJoint1051);

SoHAnimJoint1033->addChildren(*SoHAnimJoint1042);

SoHAnimJoint977->addChildren(*SoHAnimJoint1033);

SoHAnimJoint* SoHAnimJoint1063 = new SoHAnimJoint();
SoHAnimJoint1063->setDEF(QString("hanim_l_index0"));
SoHAnimJoint1063->X3DNode::setName(QString("l_index0"));
SoHAnimJoint1063->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment1064 = new SoHAnimSegment();
SoHAnimSegment1064->setDEF(QString("hanim_l_index_metacarpal"));
SoHAnimSegment1064->X3DNode::setName(QString("l_index_metacarpal"));
SoTouchSensor* SoTouchSensor1065 = new SoTouchSensor();
SoTouchSensor1065->setDescription(QString("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"));
SoHAnimSegment1064->addChild(*SoTouchSensor1065);

SoTransform* SoTransform1066 = new SoTransform();
SoTransform1066->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape1067 = new SoShape();
SoShape1067->setUSE(QString("HAnimJointShape"));
SoTransform1066->addChild(*SoShape1067);

SoHAnimSegment1064->addChild(*SoTransform1066);

SoShape* SoShape1068 = new SoShape();
SoLineSet* SoLineSet1069 = new SoLineSet();
SoLineSet1069->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1070 = new SoColorRGBA();
SoColorRGBA1070->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1069->addChild(*SoColorRGBA1070);

SoCoordinate* SoCoordinate1071 = new SoCoordinate();
SoCoordinate1071->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoLineSet1069->setCoord(*SoCoordinate1071);

SoShape1068->setGeometry(*SoLineSet1069);

SoHAnimSegment1064->addChild(*SoShape1068);

SoHAnimJoint1063->addChildren(*SoHAnimSegment1064);

SoHAnimJoint* SoHAnimJoint1072 = new SoHAnimJoint();
SoHAnimJoint1072->setDEF(QString("hanim_l_index1"));
SoHAnimJoint1072->X3DNode::setName(QString("l_index1"));
SoHAnimJoint1072->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment1073 = new SoHAnimSegment();
SoHAnimSegment1073->setDEF(QString("hanim_l_index_proximal"));
SoHAnimSegment1073->X3DNode::setName(QString("l_index_proximal"));
SoTouchSensor* SoTouchSensor1074 = new SoTouchSensor();
SoTouchSensor1074->setDescription(QString("HAnimJoint l_index1, HAnimSegment l_index_proximal"));
SoHAnimSegment1073->addChild(*SoTouchSensor1074);

SoTransform* SoTransform1075 = new SoTransform();
SoTransform1075->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape1076 = new SoShape();
SoShape1076->setUSE(QString("HAnimJointShape"));
SoTransform1075->addChild(*SoShape1076);

SoHAnimSegment1073->addChild(*SoTransform1075);

SoShape* SoShape1077 = new SoShape();
SoLineSet* SoLineSet1078 = new SoLineSet();
SoLineSet1078->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1079 = new SoColorRGBA();
SoColorRGBA1079->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1078->addChild(*SoColorRGBA1079);

SoCoordinate* SoCoordinate1080 = new SoCoordinate();
SoCoordinate1080->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoLineSet1078->setCoord(*SoCoordinate1080);

SoShape1077->setGeometry(*SoLineSet1078);

SoHAnimSegment1073->addChild(*SoShape1077);

SoHAnimJoint1072->addChildren(*SoHAnimSegment1073);

SoHAnimJoint* SoHAnimJoint1081 = new SoHAnimJoint();
SoHAnimJoint1081->setDEF(QString("hanim_l_index2"));
SoHAnimJoint1081->X3DNode::setName(QString("l_index2"));
SoHAnimJoint1081->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment1082 = new SoHAnimSegment();
SoHAnimSegment1082->setDEF(QString("hanim_l_index_middle"));
SoHAnimSegment1082->X3DNode::setName(QString("l_index_middle"));
SoTouchSensor* SoTouchSensor1083 = new SoTouchSensor();
SoTouchSensor1083->setDescription(QString("HAnimJoint l_index2, HAnimSegment l_index_middle"));
SoHAnimSegment1082->addChild(*SoTouchSensor1083);

SoTransform* SoTransform1084 = new SoTransform();
SoTransform1084->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape1085 = new SoShape();
SoShape1085->setUSE(QString("HAnimJointShape"));
SoTransform1084->addChild(*SoShape1085);

SoHAnimSegment1082->addChild(*SoTransform1084);

SoShape* SoShape1086 = new SoShape();
SoLineSet* SoLineSet1087 = new SoLineSet();
SoLineSet1087->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1088 = new SoColorRGBA();
SoColorRGBA1088->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1087->addChild(*SoColorRGBA1088);

SoCoordinate* SoCoordinate1089 = new SoCoordinate();
SoCoordinate1089->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoLineSet1087->setCoord(*SoCoordinate1089);

SoShape1086->setGeometry(*SoLineSet1087);

SoHAnimSegment1082->addChild(*SoShape1086);

SoHAnimJoint1081->addChildren(*SoHAnimSegment1082);

SoHAnimJoint* SoHAnimJoint1090 = new SoHAnimJoint();
SoHAnimJoint1090->setDEF(QString("hanim_l_index3"));
SoHAnimJoint1090->X3DNode::setName(QString("l_index3"));
SoHAnimJoint1090->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment1091 = new SoHAnimSegment();
SoHAnimSegment1091->setDEF(QString("hanim_l_index_distal"));
SoHAnimSegment1091->X3DNode::setName(QString("l_index_distal"));
SoTouchSensor* SoTouchSensor1092 = new SoTouchSensor();
SoTouchSensor1092->setDescription(QString("HAnimJoint l_index3, HAnimSegment l_index_distal"));
SoHAnimSegment1091->addChild(*SoTouchSensor1092);

SoTransform* SoTransform1093 = new SoTransform();
SoTransform1093->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape1094 = new SoShape();
SoShape1094->setUSE(QString("HAnimJointShape"));
SoTransform1093->addChild(*SoShape1094);

SoHAnimSegment1091->addChild(*SoTransform1093);

SoShape* SoShape1095 = new SoShape();
SoLineSet* SoLineSet1096 = new SoLineSet();
SoLineSet1096->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1097 = new SoColorRGBA();
SoColorRGBA1097->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1096->addChild(*SoColorRGBA1097);

SoCoordinate* SoCoordinate1098 = new SoCoordinate();
SoCoordinate1098->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
SoLineSet1096->setCoord(*SoCoordinate1098);

SoShape1095->setGeometry(*SoLineSet1096);

SoHAnimSegment1091->addChild(*SoShape1095);

SoShape* SoShape1099 = new SoShape();
SoLineSet* SoLineSet1100 = new SoLineSet();
SoLineSet1100->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1101 = new SoColorRGBA();
SoColorRGBA1101->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1100->addChild(*SoColorRGBA1101);

SoCoordinate* SoCoordinate1102 = new SoCoordinate();
SoCoordinate1102->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482}, 6);
SoLineSet1100->setCoord(*SoCoordinate1102);

SoShape1099->setGeometry(*SoLineSet1100);

SoHAnimSegment1091->addChild(*SoShape1099);

SoHAnimSite* SoHAnimSite1103 = new SoHAnimSite();
SoHAnimSite1103->setDEF(QString("hanim_l_index_distal_tip"));
SoHAnimSite1103->X3DNode::setName(QString("l_index_distal_tip"));
SoHAnimSite1103->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoTouchSensor* SoTouchSensor1104 = new SoTouchSensor();
SoTouchSensor1104->setDescription(QString("HAnimSite l_index_distal_tip"));
SoHAnimSite1103->addChild(*SoTouchSensor1104);

SoShape* SoShape1105 = new SoShape();
SoShape1105->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1103->addChild(*SoShape1105);

SoHAnimSegment1091->addChild(*SoHAnimSite1103);

SoHAnimSite* SoHAnimSite1106 = new SoHAnimSite();
SoHAnimSite1106->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite1106->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite1106->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoTouchSensor* SoTouchSensor1107 = new SoTouchSensor();
SoTouchSensor1107->setDescription(QString("HAnimSite l_dactylion"));
SoHAnimSite1106->addChild(*SoTouchSensor1107);

SoShape* SoShape1108 = new SoShape();
SoShape1108->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1106->addChild(*SoShape1108);

SoHAnimSegment1091->addChild(*SoHAnimSite1106);

SoHAnimJoint1090->addChildren(*SoHAnimSegment1091);

SoHAnimJoint1081->addChildren(*SoHAnimJoint1090);

SoHAnimJoint1072->addChildren(*SoHAnimJoint1081);

SoHAnimJoint1063->addChildren(*SoHAnimJoint1072);

SoHAnimJoint977->addChildren(*SoHAnimJoint1063);

SoHAnimJoint* SoHAnimJoint1109 = new SoHAnimJoint();
SoHAnimJoint1109->setDEF(QString("hanim_l_middle0"));
SoHAnimJoint1109->X3DNode::setName(QString("l_middle0"));
SoHAnimJoint1109->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment1110 = new SoHAnimSegment();
SoHAnimSegment1110->setDEF(QString("hanim_l_middle_metacarpal"));
SoHAnimSegment1110->X3DNode::setName(QString("l_middle_metacarpal"));
SoTouchSensor* SoTouchSensor1111 = new SoTouchSensor();
SoTouchSensor1111->setDescription(QString("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"));
SoHAnimSegment1110->addChild(*SoTouchSensor1111);

SoTransform* SoTransform1112 = new SoTransform();
SoTransform1112->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoShape* SoShape1113 = new SoShape();
SoShape1113->setUSE(QString("HAnimJointShape"));
SoTransform1112->addChild(*SoShape1113);

SoHAnimSegment1110->addChild(*SoTransform1112);

SoShape* SoShape1114 = new SoShape();
SoLineSet* SoLineSet1115 = new SoLineSet();
SoLineSet1115->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1116 = new SoColorRGBA();
SoColorRGBA1116->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1115->addChild(*SoColorRGBA1116);

SoCoordinate* SoCoordinate1117 = new SoCoordinate();
SoCoordinate1117->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoLineSet1115->setCoord(*SoCoordinate1117);

SoShape1114->setGeometry(*SoLineSet1115);

SoHAnimSegment1110->addChild(*SoShape1114);

SoHAnimJoint1109->addChildren(*SoHAnimSegment1110);

SoHAnimJoint* SoHAnimJoint1118 = new SoHAnimJoint();
SoHAnimJoint1118->setDEF(QString("hanim_l_middle1"));
SoHAnimJoint1118->X3DNode::setName(QString("l_middle1"));
SoHAnimJoint1118->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment1119 = new SoHAnimSegment();
SoHAnimSegment1119->setDEF(QString("hanim_l_middle_proximal"));
SoHAnimSegment1119->X3DNode::setName(QString("l_middle_proximal"));
SoTouchSensor* SoTouchSensor1120 = new SoTouchSensor();
SoTouchSensor1120->setDescription(QString("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"));
SoHAnimSegment1119->addChild(*SoTouchSensor1120);

SoTransform* SoTransform1121 = new SoTransform();
SoTransform1121->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoShape* SoShape1122 = new SoShape();
SoShape1122->setUSE(QString("HAnimJointShape"));
SoTransform1121->addChild(*SoShape1122);

SoHAnimSegment1119->addChild(*SoTransform1121);

SoShape* SoShape1123 = new SoShape();
SoLineSet* SoLineSet1124 = new SoLineSet();
SoLineSet1124->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1125 = new SoColorRGBA();
SoColorRGBA1125->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1124->addChild(*SoColorRGBA1125);

SoCoordinate* SoCoordinate1126 = new SoCoordinate();
SoCoordinate1126->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoLineSet1124->setCoord(*SoCoordinate1126);

SoShape1123->setGeometry(*SoLineSet1124);

SoHAnimSegment1119->addChild(*SoShape1123);

SoHAnimJoint1118->addChildren(*SoHAnimSegment1119);

SoHAnimJoint* SoHAnimJoint1127 = new SoHAnimJoint();
SoHAnimJoint1127->setDEF(QString("hanim_l_middle2"));
SoHAnimJoint1127->X3DNode::setName(QString("l_middle2"));
SoHAnimJoint1127->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment1128 = new SoHAnimSegment();
SoHAnimSegment1128->setDEF(QString("hanim_l_middle_middle"));
SoHAnimSegment1128->X3DNode::setName(QString("l_middle_middle"));
SoTouchSensor* SoTouchSensor1129 = new SoTouchSensor();
SoTouchSensor1129->setDescription(QString("HAnimJoint l_middle2, HAnimSegment l_middle_middle"));
SoHAnimSegment1128->addChild(*SoTouchSensor1129);

SoTransform* SoTransform1130 = new SoTransform();
SoTransform1130->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoShape* SoShape1131 = new SoShape();
SoShape1131->setUSE(QString("HAnimJointShape"));
SoTransform1130->addChild(*SoShape1131);

SoHAnimSegment1128->addChild(*SoTransform1130);

SoShape* SoShape1132 = new SoShape();
SoLineSet* SoLineSet1133 = new SoLineSet();
SoLineSet1133->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1134 = new SoColorRGBA();
SoColorRGBA1134->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1133->addChild(*SoColorRGBA1134);

SoCoordinate* SoCoordinate1135 = new SoCoordinate();
SoCoordinate1135->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoLineSet1133->setCoord(*SoCoordinate1135);

SoShape1132->setGeometry(*SoLineSet1133);

SoHAnimSegment1128->addChild(*SoShape1132);

SoHAnimJoint1127->addChildren(*SoHAnimSegment1128);

SoHAnimJoint* SoHAnimJoint1136 = new SoHAnimJoint();
SoHAnimJoint1136->setDEF(QString("hanim_l_middle3"));
SoHAnimJoint1136->X3DNode::setName(QString("l_middle3"));
SoHAnimJoint1136->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment1137 = new SoHAnimSegment();
SoHAnimSegment1137->setDEF(QString("hanim_l_middle_distal"));
SoHAnimSegment1137->X3DNode::setName(QString("l_middle_distal"));
SoTouchSensor* SoTouchSensor1138 = new SoTouchSensor();
SoTouchSensor1138->setDescription(QString("HAnimJoint l_middle3, HAnimSegment l_middle_distal"));
SoHAnimSegment1137->addChild(*SoTouchSensor1138);

SoTransform* SoTransform1139 = new SoTransform();
SoTransform1139->setTranslation(new float[]{0.2026,0.7011,-0.0494});
SoShape* SoShape1140 = new SoShape();
SoShape1140->setUSE(QString("HAnimJointShape"));
SoTransform1139->addChild(*SoShape1140);

SoHAnimSegment1137->addChild(*SoTransform1139);

SoShape* SoShape1141 = new SoShape();
SoLineSet* SoLineSet1142 = new SoLineSet();
SoLineSet1142->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1143 = new SoColorRGBA();
SoColorRGBA1143->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1142->addChild(*SoColorRGBA1143);

SoCoordinate* SoCoordinate1144 = new SoCoordinate();
SoCoordinate1144->setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
SoLineSet1142->setCoord(*SoCoordinate1144);

SoShape1141->setGeometry(*SoLineSet1142);

SoHAnimSegment1137->addChild(*SoShape1141);

SoHAnimSite* SoHAnimSite1145 = new SoHAnimSite();
SoHAnimSite1145->setDEF(QString("hanim_l_middle_distal_tip"));
SoHAnimSite1145->X3DNode::setName(QString("l_middle_distal_tip"));
SoHAnimSite1145->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoTouchSensor* SoTouchSensor1146 = new SoTouchSensor();
SoTouchSensor1146->setDescription(QString("HAnimSite l_middle_distal_tip"));
SoHAnimSite1145->addChild(*SoTouchSensor1146);

SoShape* SoShape1147 = new SoShape();
SoShape1147->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1145->addChild(*SoShape1147);

SoHAnimSegment1137->addChild(*SoHAnimSite1145);

SoHAnimJoint1136->addChildren(*SoHAnimSegment1137);

SoHAnimJoint1127->addChildren(*SoHAnimJoint1136);

SoHAnimJoint1118->addChildren(*SoHAnimJoint1127);

SoHAnimJoint1109->addChildren(*SoHAnimJoint1118);

SoHAnimJoint977->addChildren(*SoHAnimJoint1109);

SoHAnimJoint* SoHAnimJoint1148 = new SoHAnimJoint();
SoHAnimJoint1148->setDEF(QString("hanim_l_ring0"));
SoHAnimJoint1148->X3DNode::setName(QString("l_ring0"));
SoHAnimJoint1148->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment1149 = new SoHAnimSegment();
SoHAnimSegment1149->setDEF(QString("hanim_l_ring_metacarpal"));
SoHAnimSegment1149->X3DNode::setName(QString("l_ring_metacarpal"));
SoTouchSensor* SoTouchSensor1150 = new SoTouchSensor();
SoTouchSensor1150->setDescription(QString("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"));
SoHAnimSegment1149->addChild(*SoTouchSensor1150);

SoTransform* SoTransform1151 = new SoTransform();
SoTransform1151->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoShape* SoShape1152 = new SoShape();
SoShape1152->setUSE(QString("HAnimJointShape"));
SoTransform1151->addChild(*SoShape1152);

SoHAnimSegment1149->addChild(*SoTransform1151);

SoShape* SoShape1153 = new SoShape();
SoLineSet* SoLineSet1154 = new SoLineSet();
SoLineSet1154->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1155 = new SoColorRGBA();
SoColorRGBA1155->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1154->addChild(*SoColorRGBA1155);

SoCoordinate* SoCoordinate1156 = new SoCoordinate();
SoCoordinate1156->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoLineSet1154->setCoord(*SoCoordinate1156);

SoShape1153->setGeometry(*SoLineSet1154);

SoHAnimSegment1149->addChild(*SoShape1153);

SoHAnimJoint1148->addChildren(*SoHAnimSegment1149);

SoHAnimJoint* SoHAnimJoint1157 = new SoHAnimJoint();
SoHAnimJoint1157->setDEF(QString("hanim_l_ring1"));
SoHAnimJoint1157->X3DNode::setName(QString("l_ring1"));
SoHAnimJoint1157->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment1158 = new SoHAnimSegment();
SoHAnimSegment1158->setDEF(QString("hanim_l_ring_proximal"));
SoHAnimSegment1158->X3DNode::setName(QString("l_ring_proximal"));
SoTouchSensor* SoTouchSensor1159 = new SoTouchSensor();
SoTouchSensor1159->setDescription(QString("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"));
SoHAnimSegment1158->addChild(*SoTouchSensor1159);

SoTransform* SoTransform1160 = new SoTransform();
SoTransform1160->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoShape* SoShape1161 = new SoShape();
SoShape1161->setUSE(QString("HAnimJointShape"));
SoTransform1160->addChild(*SoShape1161);

SoHAnimSegment1158->addChild(*SoTransform1160);

SoShape* SoShape1162 = new SoShape();
SoLineSet* SoLineSet1163 = new SoLineSet();
SoLineSet1163->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1164 = new SoColorRGBA();
SoColorRGBA1164->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1163->addChild(*SoColorRGBA1164);

SoCoordinate* SoCoordinate1165 = new SoCoordinate();
SoCoordinate1165->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoLineSet1163->setCoord(*SoCoordinate1165);

SoShape1162->setGeometry(*SoLineSet1163);

SoHAnimSegment1158->addChild(*SoShape1162);

SoHAnimJoint1157->addChildren(*SoHAnimSegment1158);

SoHAnimJoint* SoHAnimJoint1166 = new SoHAnimJoint();
SoHAnimJoint1166->setDEF(QString("hanim_l_ring2"));
SoHAnimJoint1166->X3DNode::setName(QString("l_ring2"));
SoHAnimJoint1166->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment1167 = new SoHAnimSegment();
SoHAnimSegment1167->setDEF(QString("hanim_l_ring_middle"));
SoHAnimSegment1167->X3DNode::setName(QString("l_ring_middle"));
SoTouchSensor* SoTouchSensor1168 = new SoTouchSensor();
SoTouchSensor1168->setDescription(QString("HAnimJoint l_ring2, HAnimSegment l_ring_middle"));
SoHAnimSegment1167->addChild(*SoTouchSensor1168);

SoTransform* SoTransform1169 = new SoTransform();
SoTransform1169->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoShape* SoShape1170 = new SoShape();
SoShape1170->setUSE(QString("HAnimJointShape"));
SoTransform1169->addChild(*SoShape1170);

SoHAnimSegment1167->addChild(*SoTransform1169);

SoShape* SoShape1171 = new SoShape();
SoLineSet* SoLineSet1172 = new SoLineSet();
SoLineSet1172->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1173 = new SoColorRGBA();
SoColorRGBA1173->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1172->addChild(*SoColorRGBA1173);

SoCoordinate* SoCoordinate1174 = new SoCoordinate();
SoCoordinate1174->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoLineSet1172->setCoord(*SoCoordinate1174);

SoShape1171->setGeometry(*SoLineSet1172);

SoHAnimSegment1167->addChild(*SoShape1171);

SoHAnimJoint1166->addChildren(*SoHAnimSegment1167);

SoHAnimJoint* SoHAnimJoint1175 = new SoHAnimJoint();
SoHAnimJoint1175->setDEF(QString("hanim_l_ring3"));
SoHAnimJoint1175->X3DNode::setName(QString("l_ring3"));
SoHAnimJoint1175->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment1176 = new SoHAnimSegment();
SoHAnimSegment1176->setDEF(QString("hanim_l_ring_distal"));
SoHAnimSegment1176->X3DNode::setName(QString("l_ring_distal"));
SoTouchSensor* SoTouchSensor1177 = new SoTouchSensor();
SoTouchSensor1177->setDescription(QString("HAnimJoint l_ring3, HAnimSegment l_ring_distal"));
SoHAnimSegment1176->addChild(*SoTouchSensor1177);

SoTransform* SoTransform1178 = new SoTransform();
SoTransform1178->setTranslation(new float[]{0.1983,0.7045,-0.0767});
SoShape* SoShape1179 = new SoShape();
SoShape1179->setUSE(QString("HAnimJointShape"));
SoTransform1178->addChild(*SoShape1179);

SoHAnimSegment1176->addChild(*SoTransform1178);

SoShape* SoShape1180 = new SoShape();
SoLineSet* SoLineSet1181 = new SoLineSet();
SoLineSet1181->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1182 = new SoColorRGBA();
SoColorRGBA1182->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1181->addChild(*SoColorRGBA1182);

SoCoordinate* SoCoordinate1183 = new SoCoordinate();
SoCoordinate1183->setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
SoLineSet1181->setCoord(*SoCoordinate1183);

SoShape1180->setGeometry(*SoLineSet1181);

SoHAnimSegment1176->addChild(*SoShape1180);

SoHAnimSite* SoHAnimSite1184 = new SoHAnimSite();
SoHAnimSite1184->setDEF(QString("hanim_l_ring_distal_tip"));
SoHAnimSite1184->X3DNode::setName(QString("l_ring_distal_tip"));
SoHAnimSite1184->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoTouchSensor* SoTouchSensor1185 = new SoTouchSensor();
SoTouchSensor1185->setDescription(QString("HAnimSite l_ring_distal_tip"));
SoHAnimSite1184->addChild(*SoTouchSensor1185);

SoShape* SoShape1186 = new SoShape();
SoShape1186->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1184->addChild(*SoShape1186);

SoHAnimSegment1176->addChild(*SoHAnimSite1184);

SoHAnimJoint1175->addChildren(*SoHAnimSegment1176);

SoHAnimJoint1166->addChildren(*SoHAnimJoint1175);

SoHAnimJoint1157->addChildren(*SoHAnimJoint1166);

SoHAnimJoint1148->addChildren(*SoHAnimJoint1157);

SoHAnimJoint977->addChildren(*SoHAnimJoint1148);

SoHAnimJoint* SoHAnimJoint1187 = new SoHAnimJoint();
SoHAnimJoint1187->setDEF(QString("hanim_l_pinky0"));
SoHAnimJoint1187->X3DNode::setName(QString("l_pinky0"));
SoHAnimJoint1187->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment1188 = new SoHAnimSegment();
SoHAnimSegment1188->setDEF(QString("hanim_l_pinky_metacarpal"));
SoHAnimSegment1188->X3DNode::setName(QString("l_pinky_metacarpal"));
SoTouchSensor* SoTouchSensor1189 = new SoTouchSensor();
SoTouchSensor1189->setDescription(QString("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"));
SoHAnimSegment1188->addChild(*SoTouchSensor1189);

SoTransform* SoTransform1190 = new SoTransform();
SoTransform1190->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoShape* SoShape1191 = new SoShape();
SoShape1191->setUSE(QString("HAnimJointShape"));
SoTransform1190->addChild(*SoShape1191);

SoHAnimSegment1188->addChild(*SoTransform1190);

SoShape* SoShape1192 = new SoShape();
SoLineSet* SoLineSet1193 = new SoLineSet();
SoLineSet1193->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1194 = new SoColorRGBA();
SoColorRGBA1194->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1193->addChild(*SoColorRGBA1194);

SoCoordinate* SoCoordinate1195 = new SoCoordinate();
SoCoordinate1195->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoLineSet1193->setCoord(*SoCoordinate1195);

SoShape1192->setGeometry(*SoLineSet1193);

SoHAnimSegment1188->addChild(*SoShape1192);

SoHAnimJoint1187->addChildren(*SoHAnimSegment1188);

SoHAnimJoint* SoHAnimJoint1196 = new SoHAnimJoint();
SoHAnimJoint1196->setDEF(QString("hanim_l_pinky1"));
SoHAnimJoint1196->X3DNode::setName(QString("l_pinky1"));
SoHAnimJoint1196->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment1197 = new SoHAnimSegment();
SoHAnimSegment1197->setDEF(QString("hanim_l_pinky_proximal"));
SoHAnimSegment1197->X3DNode::setName(QString("l_pinky_proximal"));
SoTouchSensor* SoTouchSensor1198 = new SoTouchSensor();
SoTouchSensor1198->setDescription(QString("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"));
SoHAnimSegment1197->addChild(*SoTouchSensor1198);

SoTransform* SoTransform1199 = new SoTransform();
SoTransform1199->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoShape* SoShape1200 = new SoShape();
SoShape1200->setUSE(QString("HAnimJointShape"));
SoTransform1199->addChild(*SoShape1200);

SoHAnimSegment1197->addChild(*SoTransform1199);

SoShape* SoShape1201 = new SoShape();
SoLineSet* SoLineSet1202 = new SoLineSet();
SoLineSet1202->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1203 = new SoColorRGBA();
SoColorRGBA1203->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1202->addChild(*SoColorRGBA1203);

SoCoordinate* SoCoordinate1204 = new SoCoordinate();
SoCoordinate1204->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoLineSet1202->setCoord(*SoCoordinate1204);

SoShape1201->setGeometry(*SoLineSet1202);

SoHAnimSegment1197->addChild(*SoShape1201);

SoHAnimJoint1196->addChildren(*SoHAnimSegment1197);

SoHAnimJoint* SoHAnimJoint1205 = new SoHAnimJoint();
SoHAnimJoint1205->setDEF(QString("hanim_l_pinky2"));
SoHAnimJoint1205->X3DNode::setName(QString("l_pinky2"));
SoHAnimJoint1205->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment1206 = new SoHAnimSegment();
SoHAnimSegment1206->setDEF(QString("hanim_l_pinky_middle"));
SoHAnimSegment1206->X3DNode::setName(QString("l_pinky_middle"));
SoTouchSensor* SoTouchSensor1207 = new SoTouchSensor();
SoTouchSensor1207->setDescription(QString("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"));
SoHAnimSegment1206->addChild(*SoTouchSensor1207);

SoTransform* SoTransform1208 = new SoTransform();
SoTransform1208->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoShape* SoShape1209 = new SoShape();
SoShape1209->setUSE(QString("HAnimJointShape"));
SoTransform1208->addChild(*SoShape1209);

SoHAnimSegment1206->addChild(*SoTransform1208);

SoShape* SoShape1210 = new SoShape();
SoLineSet* SoLineSet1211 = new SoLineSet();
SoLineSet1211->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1212 = new SoColorRGBA();
SoColorRGBA1212->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1211->addChild(*SoColorRGBA1212);

SoCoordinate* SoCoordinate1213 = new SoCoordinate();
SoCoordinate1213->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoLineSet1211->setCoord(*SoCoordinate1213);

SoShape1210->setGeometry(*SoLineSet1211);

SoHAnimSegment1206->addChild(*SoShape1210);

SoHAnimJoint1205->addChildren(*SoHAnimSegment1206);

SoHAnimJoint* SoHAnimJoint1214 = new SoHAnimJoint();
SoHAnimJoint1214->setDEF(QString("hanim_l_pinky3"));
SoHAnimJoint1214->X3DNode::setName(QString("l_pinky3"));
SoHAnimJoint1214->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment1215 = new SoHAnimSegment();
SoHAnimSegment1215->setDEF(QString("hanim_l_pinky_distal"));
SoHAnimSegment1215->X3DNode::setName(QString("l_pinky_distal"));
SoTouchSensor* SoTouchSensor1216 = new SoTouchSensor();
SoTouchSensor1216->setDescription(QString("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"));
SoHAnimSegment1215->addChild(*SoTouchSensor1216);

SoTransform* SoTransform1217 = new SoTransform();
SoTransform1217->setTranslation(new float[]{0.1948,0.7277,-0.1017});
SoShape* SoShape1218 = new SoShape();
SoShape1218->setUSE(QString("HAnimJointShape"));
SoTransform1217->addChild(*SoShape1218);

SoHAnimSegment1215->addChild(*SoTransform1217);

SoShape* SoShape1219 = new SoShape();
SoLineSet* SoLineSet1220 = new SoLineSet();
SoLineSet1220->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1221 = new SoColorRGBA();
SoColorRGBA1221->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1220->addChild(*SoColorRGBA1221);

SoCoordinate* SoCoordinate1222 = new SoCoordinate();
SoCoordinate1222->setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
SoLineSet1220->setCoord(*SoCoordinate1222);

SoShape1219->setGeometry(*SoLineSet1220);

SoHAnimSegment1215->addChild(*SoShape1219);

SoHAnimSite* SoHAnimSite1223 = new SoHAnimSite();
SoHAnimSite1223->setDEF(QString("hanim_l_pinky_distal_tip"));
SoHAnimSite1223->X3DNode::setName(QString("l_pinky_distal_tip"));
SoHAnimSite1223->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoTouchSensor* SoTouchSensor1224 = new SoTouchSensor();
SoTouchSensor1224->setDescription(QString("HAnimSite l_pinky_distal_tip"));
SoHAnimSite1223->addChild(*SoTouchSensor1224);

SoShape* SoShape1225 = new SoShape();
SoShape1225->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1223->addChild(*SoShape1225);

SoHAnimSegment1215->addChild(*SoHAnimSite1223);

SoHAnimJoint1214->addChildren(*SoHAnimSegment1215);

SoHAnimJoint1205->addChildren(*SoHAnimJoint1214);

SoHAnimJoint1196->addChildren(*SoHAnimJoint1205);

SoHAnimJoint1187->addChildren(*SoHAnimJoint1196);

SoHAnimJoint977->addChildren(*SoHAnimJoint1187);

SoHAnimJoint940->addChildren(*SoHAnimJoint977);

SoHAnimJoint924->addChildren(*SoHAnimJoint940);

SoHAnimJoint915->addChildren(*SoHAnimJoint924);

SoHAnimJoint878->addChildren(*SoHAnimJoint915);

SoHAnimJoint594->addChildren(*SoHAnimJoint878);

SoHAnimJoint* SoHAnimJoint1226 = new SoHAnimJoint();
SoHAnimJoint1226->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint1226->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint1226->setRotation(new float[]{0.0,0.0,-1.00000000000003,0.108042894183947});
SoHAnimJoint1226->setCenter(new float[]{-0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment1227 = new SoHAnimSegment();
SoHAnimSegment1227->setDEF(QString("hanim_r_clavicle"));
SoHAnimSegment1227->X3DNode::setName(QString("r_clavicle"));
SoTouchSensor* SoTouchSensor1228 = new SoTouchSensor();
SoTouchSensor1228->setDescription(QString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"));
SoHAnimSegment1227->addChild(*SoTouchSensor1228);

SoTransform* SoTransform1229 = new SoTransform();
SoTransform1229->setTranslation(new float[]{-0.082,1.4488,-0.0353});
SoShape* SoShape1230 = new SoShape();
SoShape1230->setUSE(QString("HAnimJointShape"));
SoTransform1229->addChild(*SoShape1230);

SoHAnimSegment1227->addChild(*SoTransform1229);

SoShape* SoShape1231 = new SoShape();
SoLineSet* SoLineSet1232 = new SoLineSet();
SoLineSet1232->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1233 = new SoColorRGBA();
SoColorRGBA1233->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1232->addChild(*SoColorRGBA1233);

SoCoordinate* SoCoordinate1234 = new SoCoordinate();
SoCoordinate1234->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424}, 6);
SoLineSet1232->setCoord(*SoCoordinate1234);

SoShape1231->setGeometry(*SoLineSet1232);

SoHAnimSegment1227->addChild(*SoShape1231);

SoShape* SoShape1235 = new SoShape();
SoLineSet* SoLineSet1236 = new SoLineSet();
SoLineSet1236->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1237 = new SoColorRGBA();
SoColorRGBA1237->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1236->addChild(*SoColorRGBA1237);

SoCoordinate* SoCoordinate1238 = new SoCoordinate();
SoCoordinate1238->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04}, 6);
SoLineSet1236->setCoord(*SoCoordinate1238);

SoShape1235->setGeometry(*SoLineSet1236);

SoHAnimSegment1227->addChild(*SoShape1235);

SoShape* SoShape1239 = new SoShape();
SoLineSet* SoLineSet1240 = new SoLineSet();
SoLineSet1240->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1241 = new SoColorRGBA();
SoColorRGBA1241->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1240->addChild(*SoColorRGBA1241);

SoCoordinate* SoCoordinate1242 = new SoCoordinate();
SoCoordinate1242->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431}, 6);
SoLineSet1240->setCoord(*SoCoordinate1242);

SoShape1239->setGeometry(*SoLineSet1240);

SoHAnimSegment1227->addChild(*SoShape1239);

SoShape* SoShape1243 = new SoShape();
SoLineSet* SoLineSet1244 = new SoLineSet();
SoLineSet1244->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1245 = new SoColorRGBA();
SoColorRGBA1245->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1244->addChild(*SoColorRGBA1245);

SoCoordinate* SoCoordinate1246 = new SoCoordinate();
SoCoordinate1246->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031}, 6);
SoLineSet1244->setCoord(*SoCoordinate1246);

SoShape1243->setGeometry(*SoLineSet1244);

SoHAnimSegment1227->addChild(*SoShape1243);

SoShape* SoShape1247 = new SoShape();
SoLineSet* SoLineSet1248 = new SoLineSet();
SoLineSet1248->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1249 = new SoColorRGBA();
SoColorRGBA1249->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1248->addChild(*SoColorRGBA1249);

SoCoordinate* SoCoordinate1250 = new SoCoordinate();
SoCoordinate1250->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826}, 6);
SoLineSet1248->setCoord(*SoCoordinate1250);

SoShape1247->setGeometry(*SoLineSet1248);

SoHAnimSegment1227->addChild(*SoShape1247);

SoHAnimSite* SoHAnimSite1251 = new SoHAnimSite();
SoHAnimSite1251->setDEF(QString("hanim_r_clavicale_pt"));
SoHAnimSite1251->X3DNode::setName(QString("r_clavicale_pt"));
SoHAnimSite1251->setTranslation(new float[]{-0.0115,1.4943,0.04});
SoTouchSensor* SoTouchSensor1252 = new SoTouchSensor();
SoTouchSensor1252->setDescription(QString("HAnimSite r_clavicale"));
SoHAnimSite1251->addChild(*SoTouchSensor1252);

SoShape* SoShape1253 = new SoShape();
SoShape1253->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1251->addChild(*SoShape1253);

SoHAnimSegment1227->addChild(*SoHAnimSite1251);

SoHAnimSite* SoHAnimSite1254 = new SoHAnimSite();
SoHAnimSite1254->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite1254->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite1254->setTranslation(new float[]{-0.1905,1.4791,-0.0431});
SoTouchSensor* SoTouchSensor1255 = new SoTouchSensor();
SoTouchSensor1255->setDescription(QString("HAnimSite r_acromion"));
SoHAnimSite1254->addChild(*SoTouchSensor1255);

SoShape* SoShape1256 = new SoShape();
SoShape1256->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1254->addChild(*SoShape1256);

SoHAnimSegment1227->addChild(*SoHAnimSite1254);

SoHAnimSite* SoHAnimSite1257 = new SoHAnimSite();
SoHAnimSite1257->setDEF(QString("hanim_r_axilla_ant_pt"));
SoHAnimSite1257->X3DNode::setName(QString("r_axilla_ant_pt"));
SoHAnimSite1257->setTranslation(new float[]{-0.1626,1.4072,-0.0031});
SoTouchSensor* SoTouchSensor1258 = new SoTouchSensor();
SoTouchSensor1258->setDescription(QString("HAnimSite r_axilla_ant"));
SoHAnimSite1257->addChild(*SoTouchSensor1258);

SoShape* SoShape1259 = new SoShape();
SoShape1259->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1257->addChild(*SoShape1259);

SoHAnimSegment1227->addChild(*SoHAnimSite1257);

SoHAnimSite* SoHAnimSite1260 = new SoHAnimSite();
SoHAnimSite1260->setDEF(QString("hanim_r_axilla_post_pt"));
SoHAnimSite1260->X3DNode::setName(QString("r_axilla_post_pt"));
SoHAnimSite1260->setTranslation(new float[]{-0.1603,1.4098,-0.0826});
SoTouchSensor* SoTouchSensor1261 = new SoTouchSensor();
SoTouchSensor1261->setDescription(QString("HAnimSite r_axilla_post"));
SoHAnimSite1260->addChild(*SoTouchSensor1261);

SoShape* SoShape1262 = new SoShape();
SoShape1262->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1260->addChild(*SoShape1262);

SoHAnimSegment1227->addChild(*SoHAnimSite1260);

SoHAnimJoint1226->addChildren(*SoHAnimSegment1227);

SoHAnimJoint* SoHAnimJoint1263 = new SoHAnimJoint();
SoHAnimJoint1263->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint1263->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint1263->setCenter(new float[]{-0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment1264 = new SoHAnimSegment();
SoHAnimSegment1264->setDEF(QString("hanim_r_scapula"));
SoHAnimSegment1264->X3DNode::setName(QString("r_scapula"));
SoTouchSensor* SoTouchSensor1265 = new SoTouchSensor();
SoTouchSensor1265->setDescription(QString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"));
SoHAnimSegment1264->addChild(*SoTouchSensor1265);

SoTransform* SoTransform1266 = new SoTransform();
SoTransform1266->setTranslation(new float[]{-0.0962,1.4269,-0.0424});
SoShape* SoShape1267 = new SoShape();
SoShape1267->setUSE(QString("HAnimJointShape"));
SoTransform1266->addChild(*SoShape1267);

SoHAnimSegment1264->addChild(*SoTransform1266);

SoShape* SoShape1268 = new SoShape();
SoLineSet* SoLineSet1269 = new SoLineSet();
SoLineSet1269->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1270 = new SoColorRGBA();
SoColorRGBA1270->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1269->addChild(*SoColorRGBA1270);

SoCoordinate* SoCoordinate1271 = new SoCoordinate();
SoCoordinate1271->setPoint(new float[]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387}, 6);
SoLineSet1269->setCoord(*SoCoordinate1271);

SoShape1268->setGeometry(*SoLineSet1269);

SoHAnimSegment1264->addChild(*SoShape1268);

SoHAnimJoint1263->addChildren(*SoHAnimSegment1264);

SoHAnimJoint* SoHAnimJoint1272 = new SoHAnimJoint();
SoHAnimJoint1272->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint1272->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint1272->setRotation(new float[]{0.0,0.0,-1.0,0.950777468818762});
SoHAnimJoint1272->setCenter(new float[]{-0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment1273 = new SoHAnimSegment();
SoHAnimSegment1273->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment1273->X3DNode::setName(QString("r_upperarm"));
SoTouchSensor* SoTouchSensor1274 = new SoTouchSensor();
SoTouchSensor1274->setDescription(QString("HAnimJoint r_shoulder, HAnimSegment r_upperarm"));
SoHAnimSegment1273->addChild(*SoTouchSensor1274);

SoTransform* SoTransform1275 = new SoTransform();
SoTransform1275->setTranslation(new float[]{-0.2029,1.4376,-0.0387});
SoShape* SoShape1276 = new SoShape();
SoShape1276->setUSE(QString("HAnimJointShape"));
SoTransform1275->addChild(*SoShape1276);

SoHAnimSegment1273->addChild(*SoTransform1275);

SoShape* SoShape1277 = new SoShape();
SoLineSet* SoLineSet1278 = new SoLineSet();
SoLineSet1278->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1279 = new SoColorRGBA();
SoColorRGBA1279->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1278->addChild(*SoColorRGBA1279);

SoCoordinate* SoCoordinate1280 = new SoCoordinate();
SoCoordinate1280->setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682}, 6);
SoLineSet1278->setCoord(*SoCoordinate1280);

SoShape1277->setGeometry(*SoLineSet1278);

SoHAnimSegment1273->addChild(*SoShape1277);

SoShape* SoShape1281 = new SoShape();
SoLineSet* SoLineSet1282 = new SoLineSet();
SoLineSet1282->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1283 = new SoColorRGBA();
SoColorRGBA1283->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1282->addChild(*SoColorRGBA1283);

SoCoordinate* SoCoordinate1284 = new SoCoordinate();
SoCoordinate1284->setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033}, 6);
SoLineSet1282->setCoord(*SoCoordinate1284);

SoShape1281->setGeometry(*SoLineSet1282);

SoHAnimSegment1273->addChild(*SoShape1281);

SoHAnimSite* SoHAnimSite1285 = new SoHAnimSite();
SoHAnimSite1285->setDEF(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimSite1285->X3DNode::setName(QString("r_humeral_lateral_epicn_pt"));
SoHAnimSite1285->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoTouchSensor* SoTouchSensor1286 = new SoTouchSensor();
SoTouchSensor1286->setDescription(QString("HAnimSite r_humeral_lateral_epicn"));
SoHAnimSite1285->addChild(*SoTouchSensor1286);

SoShape* SoShape1287 = new SoShape();
SoShape1287->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1285->addChild(*SoShape1287);

SoHAnimSegment1273->addChild(*SoHAnimSite1285);

SoHAnimJoint1272->addChildren(*SoHAnimSegment1273);

SoHAnimJoint* SoHAnimJoint1288 = new SoHAnimJoint();
SoHAnimJoint1288->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint1288->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint1288->setRotation(new float[]{-1.0,0.0,0.0,0.297117959005863});
SoHAnimJoint1288->setCenter(new float[]{-0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment1289 = new SoHAnimSegment();
SoHAnimSegment1289->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment1289->X3DNode::setName(QString("r_forearm"));
SoTouchSensor* SoTouchSensor1290 = new SoTouchSensor();
SoTouchSensor1290->setDescription(QString("HAnimJoint r_elbow, HAnimSegment r_forearm"));
SoHAnimSegment1289->addChild(*SoTouchSensor1290);

SoTransform* SoTransform1291 = new SoTransform();
SoTransform1291->setTranslation(new float[]{-0.2014,1.1357,-0.0682});
SoShape* SoShape1292 = new SoShape();
SoShape1292->setUSE(QString("HAnimJointShape"));
SoTransform1291->addChild(*SoShape1292);

SoHAnimSegment1289->addChild(*SoTransform1291);

SoShape* SoShape1293 = new SoShape();
SoLineSet* SoLineSet1294 = new SoLineSet();
SoLineSet1294->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1295 = new SoColorRGBA();
SoColorRGBA1295->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1294->addChild(*SoColorRGBA1295);

SoCoordinate* SoCoordinate1296 = new SoCoordinate();
SoCoordinate1296->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583}, 6);
SoLineSet1294->setCoord(*SoCoordinate1296);

SoShape1293->setGeometry(*SoLineSet1294);

SoHAnimSegment1289->addChild(*SoShape1293);

SoShape* SoShape1297 = new SoShape();
SoLineSet* SoLineSet1298 = new SoLineSet();
SoLineSet1298->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1299 = new SoColorRGBA();
SoColorRGBA1299->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1298->addChild(*SoColorRGBA1299);

SoCoordinate* SoCoordinate1300 = new SoCoordinate();
SoCoordinate1300->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036}, 6);
SoLineSet1298->setCoord(*SoCoordinate1300);

SoShape1297->setGeometry(*SoLineSet1298);

SoHAnimSegment1289->addChild(*SoShape1297);

SoShape* SoShape1301 = new SoShape();
SoLineSet* SoLineSet1302 = new SoLineSet();
SoLineSet1302->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1303 = new SoColorRGBA();
SoColorRGBA1303->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1302->addChild(*SoColorRGBA1303);

SoCoordinate* SoCoordinate1304 = new SoCoordinate();
SoCoordinate1304->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065}, 6);
SoLineSet1302->setCoord(*SoCoordinate1304);

SoShape1301->setGeometry(*SoLineSet1302);

SoHAnimSegment1289->addChild(*SoShape1301);

SoShape* SoShape1305 = new SoShape();
SoLineSet* SoLineSet1306 = new SoLineSet();
SoLineSet1306->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1307 = new SoColorRGBA();
SoColorRGBA1307->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1306->addChild(*SoColorRGBA1307);

SoCoordinate* SoCoordinate1308 = new SoCoordinate();
SoCoordinate1308->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062}, 6);
SoLineSet1306->setCoord(*SoCoordinate1308);

SoShape1305->setGeometry(*SoLineSet1306);

SoHAnimSegment1289->addChild(*SoShape1305);

SoShape* SoShape1309 = new SoShape();
SoLineSet* SoLineSet1310 = new SoLineSet();
SoLineSet1310->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1311 = new SoColorRGBA();
SoColorRGBA1311->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1310->addChild(*SoColorRGBA1311);

SoCoordinate* SoCoordinate1312 = new SoCoordinate();
SoCoordinate1312->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091}, 6);
SoLineSet1310->setCoord(*SoCoordinate1312);

SoShape1309->setGeometry(*SoLineSet1310);

SoHAnimSegment1289->addChild(*SoShape1309);

SoHAnimSite* SoHAnimSite1313 = new SoHAnimSite();
SoHAnimSite1313->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite1313->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite1313->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoTouchSensor* SoTouchSensor1314 = new SoTouchSensor();
SoTouchSensor1314->setDescription(QString("HAnimSite r_radial_styloid"));
SoHAnimSite1313->addChild(*SoTouchSensor1314);

SoShape* SoShape1315 = new SoShape();
SoShape1315->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1313->addChild(*SoShape1315);

SoHAnimSegment1289->addChild(*SoHAnimSite1313);

SoHAnimSite* SoHAnimSite1316 = new SoHAnimSite();
SoHAnimSite1316->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite1316->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite1316->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoTouchSensor* SoTouchSensor1317 = new SoTouchSensor();
SoTouchSensor1317->setDescription(QString("HAnimSite r_olecranon"));
SoHAnimSite1316->addChild(*SoTouchSensor1317);

SoShape* SoShape1318 = new SoShape();
SoShape1318->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1316->addChild(*SoShape1318);

SoHAnimSegment1289->addChild(*SoHAnimSite1316);

SoHAnimSite* SoHAnimSite1319 = new SoHAnimSite();
SoHAnimSite1319->setDEF(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimSite1319->X3DNode::setName(QString("r_humeral_medial_epicn_pt"));
SoHAnimSite1319->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoTouchSensor* SoTouchSensor1320 = new SoTouchSensor();
SoTouchSensor1320->setDescription(QString("HAnimSite r_humeral_medial_epicn"));
SoHAnimSite1319->addChild(*SoTouchSensor1320);

SoShape* SoShape1321 = new SoShape();
SoShape1321->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1319->addChild(*SoShape1321);

SoHAnimSegment1289->addChild(*SoHAnimSite1319);

SoHAnimSite* SoHAnimSite1322 = new SoHAnimSite();
SoHAnimSite1322->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite1322->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite1322->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoTouchSensor* SoTouchSensor1323 = new SoTouchSensor();
SoTouchSensor1323->setDescription(QString("HAnimSite r_radiale"));
SoHAnimSite1322->addChild(*SoTouchSensor1323);

SoShape* SoShape1324 = new SoShape();
SoShape1324->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1322->addChild(*SoShape1324);

SoHAnimSegment1289->addChild(*SoHAnimSite1322);

SoHAnimJoint1288->addChildren(*SoHAnimSegment1289);

SoHAnimJoint* SoHAnimJoint1325 = new SoHAnimJoint();
SoHAnimJoint1325->setDEF(QString("hanim_r_wrist"));
SoHAnimJoint1325->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint1325->setCenter(new float[]{-0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment1326 = new SoHAnimSegment();
SoHAnimSegment1326->setDEF(QString("hanim_r_hand"));
SoHAnimSegment1326->X3DNode::setName(QString("r_hand"));
SoTouchSensor* SoTouchSensor1327 = new SoTouchSensor();
SoTouchSensor1327->setDescription(QString("HAnimJoint r_wrist, HAnimSegment r_hand"));
SoHAnimSegment1326->addChild(*SoTouchSensor1327);

SoTransform* SoTransform1328 = new SoTransform();
SoTransform1328->setTranslation(new float[]{-0.1984,0.8663,-0.0583});
SoShape* SoShape1329 = new SoShape();
SoShape1329->setUSE(QString("HAnimJointShape"));
SoTransform1328->addChild(*SoShape1329);

SoHAnimSegment1326->addChild(*SoTransform1328);

SoShape* SoShape1330 = new SoShape();
SoLineSet* SoLineSet1331 = new SoLineSet();
SoLineSet1331->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1332 = new SoColorRGBA();
SoColorRGBA1332->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1331->addChild(*SoColorRGBA1332);

SoCoordinate* SoCoordinate1333 = new SoCoordinate();
SoCoordinate1333->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534}, 6);
SoLineSet1331->setCoord(*SoCoordinate1333);

SoShape1330->setGeometry(*SoLineSet1331);

SoHAnimSegment1326->addChild(*SoShape1330);

SoShape* SoShape1334 = new SoShape();
SoLineSet* SoLineSet1335 = new SoLineSet();
SoLineSet1335->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1336 = new SoColorRGBA();
SoColorRGBA1336->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1335->addChild(*SoColorRGBA1336);

SoCoordinate* SoCoordinate1337 = new SoCoordinate();
SoCoordinate1337->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028}, 6);
SoLineSet1335->setCoord(*SoCoordinate1337);

SoShape1334->setGeometry(*SoLineSet1335);

SoHAnimSegment1326->addChild(*SoShape1334);

SoShape* SoShape1338 = new SoShape();
SoLineSet* SoLineSet1339 = new SoLineSet();
SoLineSet1339->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1340 = new SoColorRGBA();
SoColorRGBA1340->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1339->addChild(*SoColorRGBA1340);

SoCoordinate* SoCoordinate1341 = new SoCoordinate();
SoCoordinate1341->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053}, 6);
SoLineSet1339->setCoord(*SoCoordinate1341);

SoShape1338->setGeometry(*SoLineSet1339);

SoHAnimSegment1326->addChild(*SoShape1338);

SoShape* SoShape1342 = new SoShape();
SoLineSet* SoLineSet1343 = new SoLineSet();
SoLineSet1343->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1344 = new SoColorRGBA();
SoColorRGBA1344->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1343->addChild(*SoColorRGBA1344);

SoCoordinate* SoCoordinate1345 = new SoCoordinate();
SoCoordinate1345->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794}, 6);
SoLineSet1343->setCoord(*SoCoordinate1345);

SoShape1342->setGeometry(*SoLineSet1343);

SoHAnimSegment1326->addChild(*SoShape1342);

SoShape* SoShape1346 = new SoShape();
SoLineSet* SoLineSet1347 = new SoLineSet();
SoLineSet1347->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1348 = new SoColorRGBA();
SoColorRGBA1348->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1347->addChild(*SoColorRGBA1348);

SoCoordinate* SoCoordinate1349 = new SoCoordinate();
SoCoordinate1349->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036}, 6);
SoLineSet1347->setCoord(*SoCoordinate1349);

SoShape1346->setGeometry(*SoLineSet1347);

SoHAnimSegment1326->addChild(*SoShape1346);

SoShape* SoShape1350 = new SoShape();
SoLineSet* SoLineSet1351 = new SoLineSet();
SoLineSet1351->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1352 = new SoColorRGBA();
SoColorRGBA1352->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1351->addChild(*SoColorRGBA1352);

SoCoordinate* SoCoordinate1353 = new SoCoordinate();
SoCoordinate1353->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177}, 6);
SoLineSet1351->setCoord(*SoCoordinate1353);

SoShape1350->setGeometry(*SoLineSet1351);

SoHAnimSegment1326->addChild(*SoShape1350);

SoShape* SoShape1354 = new SoShape();
SoLineSet* SoLineSet1355 = new SoLineSet();
SoLineSet1355->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1356 = new SoColorRGBA();
SoColorRGBA1356->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1355->addChild(*SoColorRGBA1356);

SoCoordinate* SoCoordinate1357 = new SoCoordinate();
SoCoordinate1357->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584}, 6);
SoLineSet1355->setCoord(*SoCoordinate1357);

SoShape1354->setGeometry(*SoLineSet1355);

SoHAnimSegment1326->addChild(*SoShape1354);

SoShape* SoShape1358 = new SoShape();
SoLineSet* SoLineSet1359 = new SoLineSet();
SoLineSet1359->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1360 = new SoColorRGBA();
SoColorRGBA1360->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1359->addChild(*SoColorRGBA1360);

SoCoordinate* SoCoordinate1361 = new SoCoordinate();
SoCoordinate1361->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064}, 6);
SoLineSet1359->setCoord(*SoCoordinate1361);

SoShape1358->setGeometry(*SoLineSet1359);

SoHAnimSegment1326->addChild(*SoShape1358);

SoShape* SoShape1362 = new SoShape();
SoLineSet* SoLineSet1363 = new SoLineSet();
SoLineSet1363->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1364 = new SoColorRGBA();
SoColorRGBA1364->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet1363->addChild(*SoColorRGBA1364);

SoCoordinate* SoCoordinate1365 = new SoCoordinate();
SoCoordinate1365->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45}, 6);
SoLineSet1363->setCoord(*SoCoordinate1365);

SoShape1362->setGeometry(*SoLineSet1363);

SoHAnimSegment1326->addChild(*SoShape1362);

SoHAnimSite* SoHAnimSite1366 = new SoHAnimSite();
SoHAnimSite1366->setDEF(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimSite1366->X3DNode::setName(QString("r_metacarpal_pha2_pt"));
SoHAnimSite1366->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoTouchSensor* SoTouchSensor1367 = new SoTouchSensor();
SoTouchSensor1367->setDescription(QString("HAnimSite r_metacarpal_pha2"));
SoHAnimSite1366->addChild(*SoTouchSensor1367);

SoShape* SoShape1368 = new SoShape();
SoShape1368->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1366->addChild(*SoShape1368);

SoHAnimSegment1326->addChild(*SoHAnimSite1366);

SoHAnimSite* SoHAnimSite1369 = new SoHAnimSite();
SoHAnimSite1369->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite1369->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite1369->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoTouchSensor* SoTouchSensor1370 = new SoTouchSensor();
SoTouchSensor1370->setDescription(QString("HAnimSite r_ulnar_styloid"));
SoHAnimSite1369->addChild(*SoTouchSensor1370);

SoShape* SoShape1371 = new SoShape();
SoShape1371->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1369->addChild(*SoShape1371);

SoHAnimSegment1326->addChild(*SoHAnimSite1369);

SoHAnimSite* SoHAnimSite1372 = new SoHAnimSite();
SoHAnimSite1372->setDEF(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimSite1372->X3DNode::setName(QString("r_metacarpal_pha5_pt"));
SoHAnimSite1372->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoTouchSensor* SoTouchSensor1373 = new SoTouchSensor();
SoTouchSensor1373->setDescription(QString("HAnimSite r_metacarpal_pha5"));
SoHAnimSite1372->addChild(*SoTouchSensor1373);

SoShape* SoShape1374 = new SoShape();
SoShape1374->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1372->addChild(*SoShape1374);

SoHAnimSegment1326->addChild(*SoHAnimSite1372);

SoHAnimSite* SoHAnimSite1375 = new SoHAnimSite();
SoHAnimSite1375->setDEF(QString("hanim_r_hand_front_view"));
SoHAnimSite1375->X3DNode::setName(QString("r_hand_front_view"));
SoHAnimSite1375->setTranslation(new float[]{-0.3,0.75,0.45});
SoViewpoint* SoViewpoint1376 = new SoViewpoint();
SoViewpoint1376->setDEF(QString("hanim_r_hand_front_viewpoint"));
SoViewpoint1376->setDescription(QString("right hand front"));
SoViewpoint1376->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1376->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite1375->addChild(*SoViewpoint1376);

SoAnchor* SoAnchor1377 = new SoAnchor();
SoAnchor1377->setDescription(QString("HAnimSite Viewpoint hanim_r_hand_front_view"));
SoAnchor1377->setUrl(new QString[]{QString("#hanim_r_hand_front_viewpoint")}, 1);
SoLOD* SoLOD1378 = new SoLOD();
SoLOD1378->setForceTransitions(true);
SoLOD1378->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1379 = new SoWorldInfo();
SoWorldInfo1379->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1378->addChildren(*SoWorldInfo1379);

SoShape* SoShape1380 = new SoShape();
SoShape1380->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1378->addChildren(SoShape1380);

SoAnchor1377->addChild(*SoLOD1378);

SoHAnimSite1375->addChild(SoAnchor1377);

SoHAnimSegment1326->addChild(*SoHAnimSite1375);

SoHAnimJoint1325->addChildren(*SoHAnimSegment1326);

SoHAnimJoint* SoHAnimJoint1381 = new SoHAnimJoint();
SoHAnimJoint1381->setDEF(QString("hanim_r_thumb1"));
SoHAnimJoint1381->X3DNode::setName(QString("r_thumb1"));
SoHAnimJoint1381->setRotation(new float[]{1.0,0.0,0.0,0.270107235459875});
SoHAnimJoint1381->setCenter(new float[]{-0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment1382 = new SoHAnimSegment();
SoHAnimSegment1382->setDEF(QString("hanim_r_thumb_metacarpal"));
SoHAnimSegment1382->X3DNode::setName(QString("r_thumb_metacarpal"));
SoTouchSensor* SoTouchSensor1383 = new SoTouchSensor();
SoTouchSensor1383->setDescription(QString("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"));
SoHAnimSegment1382->addChild(*SoTouchSensor1383);

SoTransform* SoTransform1384 = new SoTransform();
SoTransform1384->setTranslation(new float[]{-0.1924,0.8472,-0.0534});
SoShape* SoShape1385 = new SoShape();
SoShape1385->setUSE(QString("HAnimJointShape"));
SoTransform1384->addChild(*SoShape1385);

SoHAnimSegment1382->addChild(*SoTransform1384);

SoShape* SoShape1386 = new SoShape();
SoLineSet* SoLineSet1387 = new SoLineSet();
SoLineSet1387->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1388 = new SoColorRGBA();
SoColorRGBA1388->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1387->addChild(*SoColorRGBA1388);

SoCoordinate* SoCoordinate1389 = new SoCoordinate();
SoCoordinate1389->setPoint(new float[]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246}, 6);
SoLineSet1387->setCoord(*SoCoordinate1389);

SoShape1386->setGeometry(*SoLineSet1387);

SoHAnimSegment1382->addChild(*SoShape1386);

SoHAnimJoint1381->addChildren(*SoHAnimSegment1382);

SoHAnimJoint* SoHAnimJoint1390 = new SoHAnimJoint();
SoHAnimJoint1390->setDEF(QString("hanim_r_thumb2"));
SoHAnimJoint1390->X3DNode::setName(QString("r_thumb2"));
SoHAnimJoint1390->setCenter(new float[]{-0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment1391 = new SoHAnimSegment();
SoHAnimSegment1391->setDEF(QString("hanim_r_thumb_proximal"));
SoHAnimSegment1391->X3DNode::setName(QString("r_thumb_proximal"));
SoTouchSensor* SoTouchSensor1392 = new SoTouchSensor();
SoTouchSensor1392->setDescription(QString("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"));
SoHAnimSegment1391->addChild(*SoTouchSensor1392);

SoTransform* SoTransform1393 = new SoTransform();
SoTransform1393->setTranslation(new float[]{-0.1951,0.8226,0.0246});
SoShape* SoShape1394 = new SoShape();
SoShape1394->setUSE(QString("HAnimJointShape"));
SoTransform1393->addChild(*SoShape1394);

SoHAnimSegment1391->addChild(*SoTransform1393);

SoShape* SoShape1395 = new SoShape();
SoLineSet* SoLineSet1396 = new SoLineSet();
SoLineSet1396->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1397 = new SoColorRGBA();
SoColorRGBA1397->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1396->addChild(*SoColorRGBA1397);

SoCoordinate* SoCoordinate1398 = new SoCoordinate();
SoCoordinate1398->setPoint(new float[]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464}, 6);
SoLineSet1396->setCoord(*SoCoordinate1398);

SoShape1395->setGeometry(*SoLineSet1396);

SoHAnimSegment1391->addChild(*SoShape1395);

SoHAnimJoint1390->addChildren(*SoHAnimSegment1391);

SoHAnimJoint* SoHAnimJoint1399 = new SoHAnimJoint();
SoHAnimJoint1399->setDEF(QString("hanim_r_thumb3"));
SoHAnimJoint1399->X3DNode::setName(QString("r_thumb3"));
SoHAnimJoint1399->setCenter(new float[]{-0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment1400 = new SoHAnimSegment();
SoHAnimSegment1400->setDEF(QString("hanim_r_thumb_distal"));
SoHAnimSegment1400->X3DNode::setName(QString("r_thumb_distal"));
SoTouchSensor* SoTouchSensor1401 = new SoTouchSensor();
SoTouchSensor1401->setDescription(QString("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"));
SoHAnimSegment1400->addChild(*SoTouchSensor1401);

SoTransform* SoTransform1402 = new SoTransform();
SoTransform1402->setTranslation(new float[]{-0.1955,0.8159,0.0464});
SoShape* SoShape1403 = new SoShape();
SoShape1403->setUSE(QString("HAnimJointShape"));
SoTransform1402->addChild(*SoShape1403);

SoHAnimSegment1400->addChild(*SoTransform1402);

SoShape* SoShape1404 = new SoShape();
SoLineSet* SoLineSet1405 = new SoLineSet();
SoLineSet1405->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1406 = new SoColorRGBA();
SoColorRGBA1406->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1405->addChild(*SoColorRGBA1406);

SoCoordinate* SoCoordinate1407 = new SoCoordinate();
SoCoordinate1407->setPoint(new float[]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082}, 6);
SoLineSet1405->setCoord(*SoCoordinate1407);

SoShape1404->setGeometry(*SoLineSet1405);

SoHAnimSegment1400->addChild(*SoShape1404);

SoHAnimSite* SoHAnimSite1408 = new SoHAnimSite();
SoHAnimSite1408->setDEF(QString("hanim_r_thumb_distal_tip"));
SoHAnimSite1408->X3DNode::setName(QString("r_thumb_distal_tip"));
SoHAnimSite1408->setTranslation(new float[]{-0.1869,0.809,0.082});
SoTouchSensor* SoTouchSensor1409 = new SoTouchSensor();
SoTouchSensor1409->setDescription(QString("HAnimSite r_thumb_distal_tip"));
SoHAnimSite1408->addChild(*SoTouchSensor1409);

SoShape* SoShape1410 = new SoShape();
SoShape1410->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1408->addChild(*SoShape1410);

SoHAnimSegment1400->addChild(*SoHAnimSite1408);

SoHAnimJoint1399->addChildren(*SoHAnimSegment1400);

SoHAnimJoint1390->addChildren(*SoHAnimJoint1399);

SoHAnimJoint1381->addChildren(*SoHAnimJoint1390);

SoHAnimJoint1325->addChildren(*SoHAnimJoint1381);

SoHAnimJoint* SoHAnimJoint1411 = new SoHAnimJoint();
SoHAnimJoint1411->setDEF(QString("hanim_r_index0"));
SoHAnimJoint1411->X3DNode::setName(QString("r_index0"));
SoHAnimJoint1411->setCenter(new float[]{-0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment1412 = new SoHAnimSegment();
SoHAnimSegment1412->setDEF(QString("hanim_r_index_metacarpal"));
SoHAnimSegment1412->X3DNode::setName(QString("r_index_metacarpal"));
SoTouchSensor* SoTouchSensor1413 = new SoTouchSensor();
SoTouchSensor1413->setDescription(QString("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"));
SoHAnimSegment1412->addChild(*SoTouchSensor1413);

SoTransform* SoTransform1414 = new SoTransform();
SoTransform1414->setTranslation(new float[]{-0.1983,0.8024,-0.028});
SoShape* SoShape1415 = new SoShape();
SoShape1415->setUSE(QString("HAnimJointShape"));
SoTransform1414->addChild(*SoShape1415);

SoHAnimSegment1412->addChild(*SoTransform1414);

SoShape* SoShape1416 = new SoShape();
SoLineSet* SoLineSet1417 = new SoLineSet();
SoLineSet1417->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1418 = new SoColorRGBA();
SoColorRGBA1418->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1417->addChild(*SoColorRGBA1418);

SoCoordinate* SoCoordinate1419 = new SoCoordinate();
SoCoordinate1419->setPoint(new float[]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028}, 6);
SoLineSet1417->setCoord(*SoCoordinate1419);

SoShape1416->setGeometry(*SoLineSet1417);

SoHAnimSegment1412->addChild(*SoShape1416);

SoHAnimJoint1411->addChildren(*SoHAnimSegment1412);

SoHAnimJoint* SoHAnimJoint1420 = new SoHAnimJoint();
SoHAnimJoint1420->setDEF(QString("hanim_r_index1"));
SoHAnimJoint1420->X3DNode::setName(QString("r_index1"));
SoHAnimJoint1420->setRotation(new float[]{0.0,0.0,1.00000000000003,0.111082015766469});
SoHAnimJoint1420->setCenter(new float[]{-0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment1421 = new SoHAnimSegment();
SoHAnimSegment1421->setDEF(QString("hanim_r_index_proximal"));
SoHAnimSegment1421->X3DNode::setName(QString("r_index_proximal"));
SoTouchSensor* SoTouchSensor1422 = new SoTouchSensor();
SoTouchSensor1422->setDescription(QString("HAnimJoint r_index1, HAnimSegment r_index_proximal"));
SoHAnimSegment1421->addChild(*SoTouchSensor1422);

SoTransform* SoTransform1423 = new SoTransform();
SoTransform1423->setTranslation(new float[]{-0.1983,0.7815,-0.028});
SoShape* SoShape1424 = new SoShape();
SoShape1424->setUSE(QString("HAnimJointShape"));
SoTransform1423->addChild(*SoShape1424);

SoHAnimSegment1421->addChild(*SoTransform1423);

SoShape* SoShape1425 = new SoShape();
SoLineSet* SoLineSet1426 = new SoLineSet();
SoLineSet1426->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1427 = new SoColorRGBA();
SoColorRGBA1427->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1426->addChild(*SoColorRGBA1427);

SoCoordinate* SoCoordinate1428 = new SoCoordinate();
SoCoordinate1428->setPoint(new float[]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248}, 6);
SoLineSet1426->setCoord(*SoCoordinate1428);

SoShape1425->setGeometry(*SoLineSet1426);

SoHAnimSegment1421->addChild(*SoShape1425);

SoHAnimJoint1420->addChildren(*SoHAnimSegment1421);

SoHAnimJoint* SoHAnimJoint1429 = new SoHAnimJoint();
SoHAnimJoint1429->setDEF(QString("hanim_r_index2"));
SoHAnimJoint1429->X3DNode::setName(QString("r_index2"));
SoHAnimJoint1429->setRotation(new float[]{0.0,0.0,0.999999999999999,0.391134387386823});
SoHAnimJoint1429->setCenter(new float[]{-0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment1430 = new SoHAnimSegment();
SoHAnimSegment1430->setDEF(QString("hanim_r_index_middle"));
SoHAnimSegment1430->X3DNode::setName(QString("r_index_middle"));
SoTouchSensor* SoTouchSensor1431 = new SoTouchSensor();
SoTouchSensor1431->setDescription(QString("HAnimJoint r_index2, HAnimSegment r_index_middle"));
SoHAnimSegment1430->addChild(*SoTouchSensor1431);

SoTransform* SoTransform1432 = new SoTransform();
SoTransform1432->setTranslation(new float[]{-0.2017,0.7363,-0.0248});
SoShape* SoShape1433 = new SoShape();
SoShape1433->setUSE(QString("HAnimJointShape"));
SoTransform1432->addChild(*SoShape1433);

SoHAnimSegment1430->addChild(*SoTransform1432);

SoShape* SoShape1434 = new SoShape();
SoLineSet* SoLineSet1435 = new SoLineSet();
SoLineSet1435->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1436 = new SoColorRGBA();
SoColorRGBA1436->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1435->addChild(*SoColorRGBA1436);

SoCoordinate* SoCoordinate1437 = new SoCoordinate();
SoCoordinate1437->setPoint(new float[]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236}, 6);
SoLineSet1435->setCoord(*SoCoordinate1437);

SoShape1434->setGeometry(*SoLineSet1435);

SoHAnimSegment1430->addChild(*SoShape1434);

SoHAnimJoint1429->addChildren(*SoHAnimSegment1430);

SoHAnimJoint* SoHAnimJoint1438 = new SoHAnimJoint();
SoHAnimJoint1438->setDEF(QString("hanim_r_index3"));
SoHAnimJoint1438->X3DNode::setName(QString("r_index3"));
SoHAnimJoint1438->setRotation(new float[]{0.0,0.0,0.999999999999997,0.211082015766472});
SoHAnimJoint1438->setCenter(new float[]{-0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment1439 = new SoHAnimSegment();
SoHAnimSegment1439->setDEF(QString("hanim_r_index_distal"));
SoHAnimSegment1439->X3DNode::setName(QString("r_index_distal"));
SoTouchSensor* SoTouchSensor1440 = new SoTouchSensor();
SoTouchSensor1440->setDescription(QString("HAnimJoint r_index3, HAnimSegment r_index_distal"));
SoHAnimSegment1439->addChild(*SoTouchSensor1440);

SoTransform* SoTransform1441 = new SoTransform();
SoTransform1441->setTranslation(new float[]{-0.2028,0.7139,-0.0236});
SoShape* SoShape1442 = new SoShape();
SoShape1442->setUSE(QString("HAnimJointShape"));
SoTransform1441->addChild(*SoShape1442);

SoHAnimSegment1439->addChild(*SoTransform1441);

SoShape* SoShape1443 = new SoShape();
SoLineSet* SoLineSet1444 = new SoLineSet();
SoLineSet1444->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1445 = new SoColorRGBA();
SoColorRGBA1445->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1444->addChild(*SoColorRGBA1445);

SoCoordinate* SoCoordinate1446 = new SoCoordinate();
SoCoordinate1446->setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018}, 6);
SoLineSet1444->setCoord(*SoCoordinate1446);

SoShape1443->setGeometry(*SoLineSet1444);

SoHAnimSegment1439->addChild(*SoShape1443);

SoShape* SoShape1447 = new SoShape();
SoLineSet* SoLineSet1448 = new SoLineSet();
SoLineSet1448->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1449 = new SoColorRGBA();
SoColorRGBA1449->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1448->addChild(*SoColorRGBA1449);

SoCoordinate* SoCoordinate1450 = new SoCoordinate();
SoCoordinate1450->setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423}, 6);
SoLineSet1448->setCoord(*SoCoordinate1450);

SoShape1447->setGeometry(*SoLineSet1448);

SoHAnimSegment1439->addChild(*SoShape1447);

SoHAnimSite* SoHAnimSite1451 = new SoHAnimSite();
SoHAnimSite1451->setDEF(QString("hanim_r_index_distal_tip"));
SoHAnimSite1451->X3DNode::setName(QString("r_index_distal_tip"));
SoHAnimSite1451->setTranslation(new float[]{-0.198,0.6883,-0.018});
SoTouchSensor* SoTouchSensor1452 = new SoTouchSensor();
SoTouchSensor1452->setDescription(QString("HAnimSite r_index_distal_tip"));
SoHAnimSite1451->addChild(*SoTouchSensor1452);

SoShape* SoShape1453 = new SoShape();
SoShape1453->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1451->addChild(*SoShape1453);

SoHAnimSegment1439->addChild(*SoHAnimSite1451);

SoHAnimSite* SoHAnimSite1454 = new SoHAnimSite();
SoHAnimSite1454->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite1454->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite1454->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoTouchSensor* SoTouchSensor1455 = new SoTouchSensor();
SoTouchSensor1455->setDescription(QString("HAnimSite r_dactylion"));
SoHAnimSite1454->addChild(*SoTouchSensor1455);

SoShape* SoShape1456 = new SoShape();
SoShape1456->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1454->addChild(*SoShape1456);

SoHAnimSegment1439->addChild(*SoHAnimSite1454);

SoHAnimJoint1438->addChildren(*SoHAnimSegment1439);

SoHAnimJoint1429->addChildren(*SoHAnimJoint1438);

SoHAnimJoint1420->addChildren(*SoHAnimJoint1429);

SoHAnimJoint1411->addChildren(*SoHAnimJoint1420);

SoHAnimJoint1325->addChildren(*SoHAnimJoint1411);

SoHAnimJoint* SoHAnimJoint1457 = new SoHAnimJoint();
SoHAnimJoint1457->setDEF(QString("hanim_r_middle0"));
SoHAnimJoint1457->X3DNode::setName(QString("r_middle0"));
SoHAnimJoint1457->setCenter(new float[]{-0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment1458 = new SoHAnimSegment();
SoHAnimSegment1458->setDEF(QString("hanim_r_middle_metacarpal"));
SoHAnimSegment1458->X3DNode::setName(QString("r_middle_metacarpal"));
SoTouchSensor* SoTouchSensor1459 = new SoTouchSensor();
SoTouchSensor1459->setDescription(QString("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"));
SoHAnimSegment1458->addChild(*SoTouchSensor1459);

SoTransform* SoTransform1460 = new SoTransform();
SoTransform1460->setTranslation(new float[]{-0.1987,0.8029,-0.053});
SoShape* SoShape1461 = new SoShape();
SoShape1461->setUSE(QString("HAnimJointShape"));
SoTransform1460->addChild(*SoShape1461);

SoHAnimSegment1458->addChild(*SoTransform1460);

SoShape* SoShape1462 = new SoShape();
SoLineSet* SoLineSet1463 = new SoLineSet();
SoLineSet1463->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1464 = new SoColorRGBA();
SoColorRGBA1464->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1463->addChild(*SoColorRGBA1464);

SoCoordinate* SoCoordinate1465 = new SoCoordinate();
SoCoordinate1465->setPoint(new float[]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053}, 6);
SoLineSet1463->setCoord(*SoCoordinate1465);

SoShape1462->setGeometry(*SoLineSet1463);

SoHAnimSegment1458->addChild(*SoShape1462);

SoHAnimJoint1457->addChildren(*SoHAnimSegment1458);

SoHAnimJoint* SoHAnimJoint1466 = new SoHAnimJoint();
SoHAnimJoint1466->setDEF(QString("hanim_r_middle1"));
SoHAnimJoint1466->X3DNode::setName(QString("r_middle1"));
SoHAnimJoint1466->setRotation(new float[]{0.0,0.0,1.00000000000003,0.111082015766469});
SoHAnimJoint1466->setCenter(new float[]{-0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment1467 = new SoHAnimSegment();
SoHAnimSegment1467->setDEF(QString("hanim_r_middle_proximal"));
SoHAnimSegment1467->X3DNode::setName(QString("r_middle_proximal"));
SoTouchSensor* SoTouchSensor1468 = new SoTouchSensor();
SoTouchSensor1468->setDescription(QString("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"));
SoHAnimSegment1467->addChild(*SoTouchSensor1468);

SoTransform* SoTransform1469 = new SoTransform();
SoTransform1469->setTranslation(new float[]{-0.1987,0.7818,-0.053});
SoShape* SoShape1470 = new SoShape();
SoShape1470->setUSE(QString("HAnimJointShape"));
SoTransform1469->addChild(*SoShape1470);

SoHAnimSegment1467->addChild(*SoTransform1469);

SoShape* SoShape1471 = new SoShape();
SoLineSet* SoLineSet1472 = new SoLineSet();
SoLineSet1472->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1473 = new SoColorRGBA();
SoColorRGBA1473->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1472->addChild(*SoColorRGBA1473);

SoCoordinate* SoCoordinate1474 = new SoCoordinate();
SoCoordinate1474->setPoint(new float[]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503}, 6);
SoLineSet1472->setCoord(*SoCoordinate1474);

SoShape1471->setGeometry(*SoLineSet1472);

SoHAnimSegment1467->addChild(*SoShape1471);

SoHAnimJoint1466->addChildren(*SoHAnimSegment1467);

SoHAnimJoint* SoHAnimJoint1475 = new SoHAnimJoint();
SoHAnimJoint1475->setDEF(QString("hanim_r_middle2"));
SoHAnimJoint1475->X3DNode::setName(QString("r_middle2"));
SoHAnimJoint1475->setRotation(new float[]{0.0,0.0,0.999999999999999,0.391134387386823});
SoHAnimJoint1475->setCenter(new float[]{-0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment1476 = new SoHAnimSegment();
SoHAnimSegment1476->setDEF(QString("hanim_r_middle_middle"));
SoHAnimSegment1476->X3DNode::setName(QString("r_middle_middle"));
SoTouchSensor* SoTouchSensor1477 = new SoTouchSensor();
SoTouchSensor1477->setDescription(QString("HAnimJoint r_middle2, HAnimSegment r_middle_middle"));
SoHAnimSegment1476->addChild(*SoTouchSensor1477);

SoTransform* SoTransform1478 = new SoTransform();
SoTransform1478->setTranslation(new float[]{-0.2013,0.7273,-0.0503});
SoShape* SoShape1479 = new SoShape();
SoShape1479->setUSE(QString("HAnimJointShape"));
SoTransform1478->addChild(*SoShape1479);

SoHAnimSegment1476->addChild(*SoTransform1478);

SoShape* SoShape1480 = new SoShape();
SoLineSet* SoLineSet1481 = new SoLineSet();
SoLineSet1481->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1482 = new SoColorRGBA();
SoColorRGBA1482->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1481->addChild(*SoColorRGBA1482);

SoCoordinate* SoCoordinate1483 = new SoCoordinate();
SoCoordinate1483->setPoint(new float[]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494}, 6);
SoLineSet1481->setCoord(*SoCoordinate1483);

SoShape1480->setGeometry(*SoLineSet1481);

SoHAnimSegment1476->addChild(*SoShape1480);

SoHAnimJoint1475->addChildren(*SoHAnimSegment1476);

SoHAnimJoint* SoHAnimJoint1484 = new SoHAnimJoint();
SoHAnimJoint1484->setDEF(QString("hanim_r_middle3"));
SoHAnimJoint1484->X3DNode::setName(QString("r_middle3"));
SoHAnimJoint1484->setRotation(new float[]{0.0,0.0,0.999999999999997,0.211082015766472});
SoHAnimJoint1484->setCenter(new float[]{-0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment1485 = new SoHAnimSegment();
SoHAnimSegment1485->setDEF(QString("hanim_r_middle_distal"));
SoHAnimSegment1485->X3DNode::setName(QString("r_middle_distal"));
SoTouchSensor* SoTouchSensor1486 = new SoTouchSensor();
SoTouchSensor1486->setDescription(QString("HAnimJoint r_middle3, HAnimSegment r_middle_distal"));
SoHAnimSegment1485->addChild(*SoTouchSensor1486);

SoTransform* SoTransform1487 = new SoTransform();
SoTransform1487->setTranslation(new float[]{-0.2026,0.7011,-0.0494});
SoShape* SoShape1488 = new SoShape();
SoShape1488->setUSE(QString("HAnimJointShape"));
SoTransform1487->addChild(*SoShape1488);

SoHAnimSegment1485->addChild(*SoTransform1487);

SoShape* SoShape1489 = new SoShape();
SoLineSet* SoLineSet1490 = new SoLineSet();
SoLineSet1490->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1491 = new SoColorRGBA();
SoColorRGBA1491->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1490->addChild(*SoColorRGBA1491);

SoCoordinate* SoCoordinate1492 = new SoCoordinate();
SoCoordinate1492->setPoint(new float[]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427}, 6);
SoLineSet1490->setCoord(*SoCoordinate1492);

SoShape1489->setGeometry(*SoLineSet1490);

SoHAnimSegment1485->addChild(*SoShape1489);

SoHAnimSite* SoHAnimSite1493 = new SoHAnimSite();
SoHAnimSite1493->setDEF(QString("hanim_r_middle_distal_tip"));
SoHAnimSite1493->X3DNode::setName(QString("r_middle_distal_tip"));
SoHAnimSite1493->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoTouchSensor* SoTouchSensor1494 = new SoTouchSensor();
SoTouchSensor1494->setDescription(QString("HAnimSite r_middle_distal_tip"));
SoHAnimSite1493->addChild(*SoTouchSensor1494);

SoShape* SoShape1495 = new SoShape();
SoShape1495->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1493->addChild(*SoShape1495);

SoHAnimSegment1485->addChild(*SoHAnimSite1493);

SoHAnimJoint1484->addChildren(*SoHAnimSegment1485);

SoHAnimJoint1475->addChildren(*SoHAnimJoint1484);

SoHAnimJoint1466->addChildren(*SoHAnimJoint1475);

SoHAnimJoint1457->addChildren(*SoHAnimJoint1466);

SoHAnimJoint1325->addChildren(*SoHAnimJoint1457);

SoHAnimJoint* SoHAnimJoint1496 = new SoHAnimJoint();
SoHAnimJoint1496->setDEF(QString("hanim_r_ring0"));
SoHAnimJoint1496->X3DNode::setName(QString("r_ring0"));
SoHAnimJoint1496->setCenter(new float[]{-0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment1497 = new SoHAnimSegment();
SoHAnimSegment1497->setDEF(QString("hanim_r_ring_metacarpal"));
SoHAnimSegment1497->X3DNode::setName(QString("r_ring_metacarpal"));
SoTouchSensor* SoTouchSensor1498 = new SoTouchSensor();
SoTouchSensor1498->setDescription(QString("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"));
SoHAnimSegment1497->addChild(*SoTouchSensor1498);

SoTransform* SoTransform1499 = new SoTransform();
SoTransform1499->setTranslation(new float[]{-0.1956,0.8019,-0.0794});
SoShape* SoShape1500 = new SoShape();
SoShape1500->setUSE(QString("HAnimJointShape"));
SoTransform1499->addChild(*SoShape1500);

SoHAnimSegment1497->addChild(*SoTransform1499);

SoShape* SoShape1501 = new SoShape();
SoLineSet* SoLineSet1502 = new SoLineSet();
SoLineSet1502->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1503 = new SoColorRGBA();
SoColorRGBA1503->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1502->addChild(*SoColorRGBA1503);

SoCoordinate* SoCoordinate1504 = new SoCoordinate();
SoCoordinate1504->setPoint(new float[]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794}, 6);
SoLineSet1502->setCoord(*SoCoordinate1504);

SoShape1501->setGeometry(*SoLineSet1502);

SoHAnimSegment1497->addChild(*SoShape1501);

SoHAnimJoint1496->addChildren(*SoHAnimSegment1497);

SoHAnimJoint* SoHAnimJoint1505 = new SoHAnimJoint();
SoHAnimJoint1505->setDEF(QString("hanim_r_ring1"));
SoHAnimJoint1505->X3DNode::setName(QString("r_ring1"));
SoHAnimJoint1505->setRotation(new float[]{0.0,0.0,1.00000000000003,0.111082015766469});
SoHAnimJoint1505->setCenter(new float[]{-0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment1506 = new SoHAnimSegment();
SoHAnimSegment1506->setDEF(QString("hanim_r_ring_proximal"));
SoHAnimSegment1506->X3DNode::setName(QString("r_ring_proximal"));
SoTouchSensor* SoTouchSensor1507 = new SoTouchSensor();
SoTouchSensor1507->setDescription(QString("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"));
SoHAnimSegment1506->addChild(*SoTouchSensor1507);

SoTransform* SoTransform1508 = new SoTransform();
SoTransform1508->setTranslation(new float[]{-0.1956,0.7815,-0.0794});
SoShape* SoShape1509 = new SoShape();
SoShape1509->setUSE(QString("HAnimJointShape"));
SoTransform1508->addChild(*SoShape1509);

SoHAnimSegment1506->addChild(*SoTransform1508);

SoShape* SoShape1510 = new SoShape();
SoLineSet* SoLineSet1511 = new SoLineSet();
SoLineSet1511->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1512 = new SoColorRGBA();
SoColorRGBA1512->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1511->addChild(*SoColorRGBA1512);

SoCoordinate* SoCoordinate1513 = new SoCoordinate();
SoCoordinate1513->setPoint(new float[]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777}, 6);
SoLineSet1511->setCoord(*SoCoordinate1513);

SoShape1510->setGeometry(*SoLineSet1511);

SoHAnimSegment1506->addChild(*SoShape1510);

SoHAnimJoint1505->addChildren(*SoHAnimSegment1506);

SoHAnimJoint* SoHAnimJoint1514 = new SoHAnimJoint();
SoHAnimJoint1514->setDEF(QString("hanim_r_ring2"));
SoHAnimJoint1514->X3DNode::setName(QString("r_ring2"));
SoHAnimJoint1514->setRotation(new float[]{0.0,0.0,0.999999999999999,0.391134387386823});
SoHAnimJoint1514->setCenter(new float[]{-0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment1515 = new SoHAnimSegment();
SoHAnimSegment1515->setDEF(QString("hanim_r_ring_middle"));
SoHAnimSegment1515->X3DNode::setName(QString("r_ring_middle"));
SoTouchSensor* SoTouchSensor1516 = new SoTouchSensor();
SoTouchSensor1516->setDescription(QString("HAnimJoint r_ring2, HAnimSegment r_ring_middle"));
SoHAnimSegment1515->addChild(*SoTouchSensor1516);

SoTransform* SoTransform1517 = new SoTransform();
SoTransform1517->setTranslation(new float[]{-0.1973,0.7287,-0.0777});
SoShape* SoShape1518 = new SoShape();
SoShape1518->setUSE(QString("HAnimJointShape"));
SoTransform1517->addChild(*SoShape1518);

SoHAnimSegment1515->addChild(*SoTransform1517);

SoShape* SoShape1519 = new SoShape();
SoLineSet* SoLineSet1520 = new SoLineSet();
SoLineSet1520->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1521 = new SoColorRGBA();
SoColorRGBA1521->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1520->addChild(*SoColorRGBA1521);

SoCoordinate* SoCoordinate1522 = new SoCoordinate();
SoCoordinate1522->setPoint(new float[]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767}, 6);
SoLineSet1520->setCoord(*SoCoordinate1522);

SoShape1519->setGeometry(*SoLineSet1520);

SoHAnimSegment1515->addChild(*SoShape1519);

SoHAnimJoint1514->addChildren(*SoHAnimSegment1515);

SoHAnimJoint* SoHAnimJoint1523 = new SoHAnimJoint();
SoHAnimJoint1523->setDEF(QString("hanim_r_ring3"));
SoHAnimJoint1523->X3DNode::setName(QString("r_ring3"));
SoHAnimJoint1523->setRotation(new float[]{0.0,0.0,0.999999999999997,0.211082015766472});
SoHAnimJoint1523->setCenter(new float[]{-0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment1524 = new SoHAnimSegment();
SoHAnimSegment1524->setDEF(QString("hanim_r_ring_distal"));
SoHAnimSegment1524->X3DNode::setName(QString("r_ring_distal"));
SoTouchSensor* SoTouchSensor1525 = new SoTouchSensor();
SoTouchSensor1525->setDescription(QString("HAnimJoint r_ring3, HAnimSegment r_ring_distal"));
SoHAnimSegment1524->addChild(*SoTouchSensor1525);

SoTransform* SoTransform1526 = new SoTransform();
SoTransform1526->setTranslation(new float[]{-0.1983,0.7045,-0.0767});
SoShape* SoShape1527 = new SoShape();
SoShape1527->setUSE(QString("HAnimJointShape"));
SoTransform1526->addChild(*SoShape1527);

SoHAnimSegment1524->addChild(*SoTransform1526);

SoShape* SoShape1528 = new SoShape();
SoLineSet* SoLineSet1529 = new SoLineSet();
SoLineSet1529->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1530 = new SoColorRGBA();
SoColorRGBA1530->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1529->addChild(*SoColorRGBA1530);

SoCoordinate* SoCoordinate1531 = new SoCoordinate();
SoCoordinate1531->setPoint(new float[]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693}, 6);
SoLineSet1529->setCoord(*SoCoordinate1531);

SoShape1528->setGeometry(*SoLineSet1529);

SoHAnimSegment1524->addChild(*SoShape1528);

SoHAnimSite* SoHAnimSite1532 = new SoHAnimSite();
SoHAnimSite1532->setDEF(QString("hanim_r_ring_distal_tip"));
SoHAnimSite1532->X3DNode::setName(QString("r_ring_distal_tip"));
SoHAnimSite1532->setTranslation(new float[]{-0.1934,0.6778,-0.0693});
SoTouchSensor* SoTouchSensor1533 = new SoTouchSensor();
SoTouchSensor1533->setDescription(QString("HAnimSite r_ring_distal_tip"));
SoHAnimSite1532->addChild(*SoTouchSensor1533);

SoShape* SoShape1534 = new SoShape();
SoShape1534->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1532->addChild(*SoShape1534);

SoHAnimSegment1524->addChild(*SoHAnimSite1532);

SoHAnimJoint1523->addChildren(*SoHAnimSegment1524);

SoHAnimJoint1514->addChildren(*SoHAnimJoint1523);

SoHAnimJoint1505->addChildren(*SoHAnimJoint1514);

SoHAnimJoint1496->addChildren(*SoHAnimJoint1505);

SoHAnimJoint1325->addChildren(*SoHAnimJoint1496);

SoHAnimJoint* SoHAnimJoint1535 = new SoHAnimJoint();
SoHAnimJoint1535->setDEF(QString("hanim_r_pinky0"));
SoHAnimJoint1535->X3DNode::setName(QString("r_pinky0"));
SoHAnimJoint1535->setCenter(new float[]{-0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment1536 = new SoHAnimSegment();
SoHAnimSegment1536->setDEF(QString("hanim_r_pinky_metacarpal"));
SoHAnimSegment1536->X3DNode::setName(QString("r_pinky_metacarpal"));
SoTouchSensor* SoTouchSensor1537 = new SoTouchSensor();
SoTouchSensor1537->setDescription(QString("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"));
SoHAnimSegment1536->addChild(*SoTouchSensor1537);

SoTransform* SoTransform1538 = new SoTransform();
SoTransform1538->setTranslation(new float[]{-0.1925,0.8066,-0.1036});
SoShape* SoShape1539 = new SoShape();
SoShape1539->setUSE(QString("HAnimJointShape"));
SoTransform1538->addChild(*SoShape1539);

SoHAnimSegment1536->addChild(*SoTransform1538);

SoShape* SoShape1540 = new SoShape();
SoLineSet* SoLineSet1541 = new SoLineSet();
SoLineSet1541->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1542 = new SoColorRGBA();
SoColorRGBA1542->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1541->addChild(*SoColorRGBA1542);

SoCoordinate* SoCoordinate1543 = new SoCoordinate();
SoCoordinate1543->setPoint(new float[]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036}, 6);
SoLineSet1541->setCoord(*SoCoordinate1543);

SoShape1540->setGeometry(*SoLineSet1541);

SoHAnimSegment1536->addChild(*SoShape1540);

SoHAnimJoint1535->addChildren(*SoHAnimSegment1536);

SoHAnimJoint* SoHAnimJoint1544 = new SoHAnimJoint();
SoHAnimJoint1544->setDEF(QString("hanim_r_pinky1"));
SoHAnimJoint1544->X3DNode::setName(QString("r_pinky1"));
SoHAnimJoint1544->setRotation(new float[]{0.0,0.0,1.00000000000003,0.111082015766469});
SoHAnimJoint1544->setCenter(new float[]{-0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment1545 = new SoHAnimSegment();
SoHAnimSegment1545->setDEF(QString("hanim_r_pinky_proximal"));
SoHAnimSegment1545->X3DNode::setName(QString("r_pinky_proximal"));
SoTouchSensor* SoTouchSensor1546 = new SoTouchSensor();
SoTouchSensor1546->setDescription(QString("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"));
SoHAnimSegment1545->addChild(*SoTouchSensor1546);

SoTransform* SoTransform1547 = new SoTransform();
SoTransform1547->setTranslation(new float[]{-0.1925,0.7866,-0.1036});
SoShape* SoShape1548 = new SoShape();
SoShape1548->setUSE(QString("HAnimJointShape"));
SoTransform1547->addChild(*SoShape1548);

SoHAnimSegment1545->addChild(*SoTransform1547);

SoShape* SoShape1549 = new SoShape();
SoLineSet* SoLineSet1550 = new SoLineSet();
SoLineSet1550->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1551 = new SoColorRGBA();
SoColorRGBA1551->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1550->addChild(*SoColorRGBA1551);

SoCoordinate* SoCoordinate1552 = new SoCoordinate();
SoCoordinate1552->setPoint(new float[]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024}, 6);
SoLineSet1550->setCoord(*SoCoordinate1552);

SoShape1549->setGeometry(*SoLineSet1550);

SoHAnimSegment1545->addChild(*SoShape1549);

SoHAnimJoint1544->addChildren(*SoHAnimSegment1545);

SoHAnimJoint* SoHAnimJoint1553 = new SoHAnimJoint();
SoHAnimJoint1553->setDEF(QString("hanim_r_pinky2"));
SoHAnimJoint1553->X3DNode::setName(QString("r_pinky2"));
SoHAnimJoint1553->setRotation(new float[]{0.0,0.0,0.999999999999999,0.391134387386823});
SoHAnimJoint1553->setCenter(new float[]{-0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment1554 = new SoHAnimSegment();
SoHAnimSegment1554->setDEF(QString("hanim_r_pinky_middle"));
SoHAnimSegment1554->X3DNode::setName(QString("r_pinky_middle"));
SoTouchSensor* SoTouchSensor1555 = new SoTouchSensor();
SoTouchSensor1555->setDescription(QString("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"));
SoHAnimSegment1554->addChild(*SoTouchSensor1555);

SoTransform* SoTransform1556 = new SoTransform();
SoTransform1556->setTranslation(new float[]{-0.1938,0.7452,-0.1024});
SoShape* SoShape1557 = new SoShape();
SoShape1557->setUSE(QString("HAnimJointShape"));
SoTransform1556->addChild(*SoShape1557);

SoHAnimSegment1554->addChild(*SoTransform1556);

SoShape* SoShape1558 = new SoShape();
SoLineSet* SoLineSet1559 = new SoLineSet();
SoLineSet1559->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1560 = new SoColorRGBA();
SoColorRGBA1560->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1559->addChild(*SoColorRGBA1560);

SoCoordinate* SoCoordinate1561 = new SoCoordinate();
SoCoordinate1561->setPoint(new float[]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017}, 6);
SoLineSet1559->setCoord(*SoCoordinate1561);

SoShape1558->setGeometry(*SoLineSet1559);

SoHAnimSegment1554->addChild(*SoShape1558);

SoHAnimJoint1553->addChildren(*SoHAnimSegment1554);

SoHAnimJoint* SoHAnimJoint1562 = new SoHAnimJoint();
SoHAnimJoint1562->setDEF(QString("hanim_r_pinky3"));
SoHAnimJoint1562->X3DNode::setName(QString("r_pinky3"));
SoHAnimJoint1562->setRotation(new float[]{0.0,0.0,0.999999999999997,0.211082015766472});
SoHAnimJoint1562->setCenter(new float[]{-0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment1563 = new SoHAnimSegment();
SoHAnimSegment1563->setDEF(QString("hanim_r_pinky_distal"));
SoHAnimSegment1563->X3DNode::setName(QString("r_pinky_distal"));
SoTouchSensor* SoTouchSensor1564 = new SoTouchSensor();
SoTouchSensor1564->setDescription(QString("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"));
SoHAnimSegment1563->addChild(*SoTouchSensor1564);

SoTransform* SoTransform1565 = new SoTransform();
SoTransform1565->setTranslation(new float[]{-0.1948,0.7277,-0.1017});
SoShape* SoShape1566 = new SoShape();
SoShape1566->setUSE(QString("HAnimJointShape"));
SoTransform1565->addChild(*SoShape1566);

SoHAnimSegment1563->addChild(*SoTransform1565);

SoShape* SoShape1567 = new SoShape();
SoLineSet* SoLineSet1568 = new SoLineSet();
SoLineSet1568->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1569 = new SoColorRGBA();
SoColorRGBA1569->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1568->addChild(*SoColorRGBA1569);

SoCoordinate* SoCoordinate1570 = new SoCoordinate();
SoCoordinate1570->setPoint(new float[]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949}, 6);
SoLineSet1568->setCoord(*SoCoordinate1570);

SoShape1567->setGeometry(*SoLineSet1568);

SoHAnimSegment1563->addChild(*SoShape1567);

SoHAnimSite* SoHAnimSite1571 = new SoHAnimSite();
SoHAnimSite1571->setDEF(QString("hanim_r_pinky_distal_tip"));
SoHAnimSite1571->X3DNode::setName(QString("r_pinky_distal_tip"));
SoHAnimSite1571->setTranslation(new float[]{-0.1938,0.7035,-0.0949});
SoTouchSensor* SoTouchSensor1572 = new SoTouchSensor();
SoTouchSensor1572->setDescription(QString("HAnimSite r_pinky_distal_tip"));
SoHAnimSite1571->addChild(*SoTouchSensor1572);

SoShape* SoShape1573 = new SoShape();
SoShape1573->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1571->addChild(*SoShape1573);

SoHAnimSegment1563->addChild(*SoHAnimSite1571);

SoHAnimJoint1562->addChildren(*SoHAnimSegment1563);

SoHAnimJoint1553->addChildren(*SoHAnimJoint1562);

SoHAnimJoint1544->addChildren(*SoHAnimJoint1553);

SoHAnimJoint1535->addChildren(*SoHAnimJoint1544);

SoHAnimJoint1325->addChildren(*SoHAnimJoint1535);

SoHAnimJoint1288->addChildren(*SoHAnimJoint1325);

SoHAnimJoint1272->addChildren(*SoHAnimJoint1288);

SoHAnimJoint1263->addChildren(*SoHAnimJoint1272);

SoHAnimJoint1226->addChildren(*SoHAnimJoint1263);

SoHAnimJoint594->addChildren(*SoHAnimJoint1226);

SoHAnimJoint585->addChildren(*SoHAnimJoint594);

SoHAnimJoint576->addChildren(*SoHAnimJoint585);

SoHAnimJoint567->addChildren(*SoHAnimJoint576);

SoHAnimJoint558->addChildren(*SoHAnimJoint567);

SoHAnimJoint549->addChildren(*SoHAnimJoint558);

SoHAnimJoint540->addChildren(*SoHAnimJoint549);

SoHAnimJoint531->addChildren(*SoHAnimJoint540);

SoHAnimJoint508->addChildren(*SoHAnimJoint531);

SoHAnimJoint492->addChildren(*SoHAnimJoint508);

SoHAnimJoint483->addChildren(*SoHAnimJoint492);

SoHAnimJoint474->addChildren(*SoHAnimJoint483);

SoHAnimJoint465->addChildren(*SoHAnimJoint474);

SoHAnimJoint435->addChildren(*SoHAnimJoint465);

SoHAnimJoint426->addChildren(*SoHAnimJoint435);

SoHAnimJoint417->addChildren(*SoHAnimJoint426);

SoHAnimJoint394->addChildren(*SoHAnimJoint417);

SoHAnimJoint44->addChildren(*SoHAnimJoint394);

SoHAnimHumanoid43->setSkeleton(*SoHAnimJoint44);

SoHAnimJoint* SoHAnimJoint1574 = new SoHAnimJoint();
SoHAnimJoint1574->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1574);

SoHAnimJoint* SoHAnimJoint1575 = new SoHAnimJoint();
SoHAnimJoint1575->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1575);

SoHAnimJoint* SoHAnimJoint1576 = new SoHAnimJoint();
SoHAnimJoint1576->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1576);

SoHAnimJoint* SoHAnimJoint1577 = new SoHAnimJoint();
SoHAnimJoint1577->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1577);

SoHAnimJoint* SoHAnimJoint1578 = new SoHAnimJoint();
SoHAnimJoint1578->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1578);

SoHAnimJoint* SoHAnimJoint1579 = new SoHAnimJoint();
SoHAnimJoint1579->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1579);

SoHAnimJoint* SoHAnimJoint1580 = new SoHAnimJoint();
SoHAnimJoint1580->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1580);

SoHAnimJoint* SoHAnimJoint1581 = new SoHAnimJoint();
SoHAnimJoint1581->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1581);

SoHAnimJoint* SoHAnimJoint1582 = new SoHAnimJoint();
SoHAnimJoint1582->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1582);

SoHAnimJoint* SoHAnimJoint1583 = new SoHAnimJoint();
SoHAnimJoint1583->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1583);

SoHAnimJoint* SoHAnimJoint1584 = new SoHAnimJoint();
SoHAnimJoint1584->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1584);

SoHAnimJoint* SoHAnimJoint1585 = new SoHAnimJoint();
SoHAnimJoint1585->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1585);

SoHAnimJoint* SoHAnimJoint1586 = new SoHAnimJoint();
SoHAnimJoint1586->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1586);

SoHAnimJoint* SoHAnimJoint1587 = new SoHAnimJoint();
SoHAnimJoint1587->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1587);

SoHAnimJoint* SoHAnimJoint1588 = new SoHAnimJoint();
SoHAnimJoint1588->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1588);

SoHAnimJoint* SoHAnimJoint1589 = new SoHAnimJoint();
SoHAnimJoint1589->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1589);

SoHAnimJoint* SoHAnimJoint1590 = new SoHAnimJoint();
SoHAnimJoint1590->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1590);

SoHAnimJoint* SoHAnimJoint1591 = new SoHAnimJoint();
SoHAnimJoint1591->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1591);

SoHAnimJoint* SoHAnimJoint1592 = new SoHAnimJoint();
SoHAnimJoint1592->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1592);

SoHAnimJoint* SoHAnimJoint1593 = new SoHAnimJoint();
SoHAnimJoint1593->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1593);

SoHAnimJoint* SoHAnimJoint1594 = new SoHAnimJoint();
SoHAnimJoint1594->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1594);

SoHAnimJoint* SoHAnimJoint1595 = new SoHAnimJoint();
SoHAnimJoint1595->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1595);

SoHAnimJoint* SoHAnimJoint1596 = new SoHAnimJoint();
SoHAnimJoint1596->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1596);

SoHAnimJoint* SoHAnimJoint1597 = new SoHAnimJoint();
SoHAnimJoint1597->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1597);

SoHAnimJoint* SoHAnimJoint1598 = new SoHAnimJoint();
SoHAnimJoint1598->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1598);

SoHAnimJoint* SoHAnimJoint1599 = new SoHAnimJoint();
SoHAnimJoint1599->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1599);

SoHAnimJoint* SoHAnimJoint1600 = new SoHAnimJoint();
SoHAnimJoint1600->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1600);

SoHAnimJoint* SoHAnimJoint1601 = new SoHAnimJoint();
SoHAnimJoint1601->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1601);

SoHAnimJoint* SoHAnimJoint1602 = new SoHAnimJoint();
SoHAnimJoint1602->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1602);

SoHAnimJoint* SoHAnimJoint1603 = new SoHAnimJoint();
SoHAnimJoint1603->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1603);

SoHAnimJoint* SoHAnimJoint1604 = new SoHAnimJoint();
SoHAnimJoint1604->setUSE(QString("hanim_l_ankle"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1604);

SoHAnimJoint* SoHAnimJoint1605 = new SoHAnimJoint();
SoHAnimJoint1605->setUSE(QString("hanim_r_ankle"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1605);

SoHAnimJoint* SoHAnimJoint1606 = new SoHAnimJoint();
SoHAnimJoint1606->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1606);

SoHAnimJoint* SoHAnimJoint1607 = new SoHAnimJoint();
SoHAnimJoint1607->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1607);

SoHAnimJoint* SoHAnimJoint1608 = new SoHAnimJoint();
SoHAnimJoint1608->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1608);

SoHAnimJoint* SoHAnimJoint1609 = new SoHAnimJoint();
SoHAnimJoint1609->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1609);

SoHAnimJoint* SoHAnimJoint1610 = new SoHAnimJoint();
SoHAnimJoint1610->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1610);

SoHAnimJoint* SoHAnimJoint1611 = new SoHAnimJoint();
SoHAnimJoint1611->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1611);

SoHAnimJoint* SoHAnimJoint1612 = new SoHAnimJoint();
SoHAnimJoint1612->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1612);

SoHAnimJoint* SoHAnimJoint1613 = new SoHAnimJoint();
SoHAnimJoint1613->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1613);

SoHAnimJoint* SoHAnimJoint1614 = new SoHAnimJoint();
SoHAnimJoint1614->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1614);

SoHAnimJoint* SoHAnimJoint1615 = new SoHAnimJoint();
SoHAnimJoint1615->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1615);

SoHAnimJoint* SoHAnimJoint1616 = new SoHAnimJoint();
SoHAnimJoint1616->setUSE(QString("hanim_l_index0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1616);

SoHAnimJoint* SoHAnimJoint1617 = new SoHAnimJoint();
SoHAnimJoint1617->setUSE(QString("hanim_r_index0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1617);

SoHAnimJoint* SoHAnimJoint1618 = new SoHAnimJoint();
SoHAnimJoint1618->setUSE(QString("hanim_l_index1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1618);

SoHAnimJoint* SoHAnimJoint1619 = new SoHAnimJoint();
SoHAnimJoint1619->setUSE(QString("hanim_r_index1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1619);

SoHAnimJoint* SoHAnimJoint1620 = new SoHAnimJoint();
SoHAnimJoint1620->setUSE(QString("hanim_l_index2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1620);

SoHAnimJoint* SoHAnimJoint1621 = new SoHAnimJoint();
SoHAnimJoint1621->setUSE(QString("hanim_r_index2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1621);

SoHAnimJoint* SoHAnimJoint1622 = new SoHAnimJoint();
SoHAnimJoint1622->setUSE(QString("hanim_l_index3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1622);

SoHAnimJoint* SoHAnimJoint1623 = new SoHAnimJoint();
SoHAnimJoint1623->setUSE(QString("hanim_r_index3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1623);

SoHAnimJoint* SoHAnimJoint1624 = new SoHAnimJoint();
SoHAnimJoint1624->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1624);

SoHAnimJoint* SoHAnimJoint1625 = new SoHAnimJoint();
SoHAnimJoint1625->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1625);

SoHAnimJoint* SoHAnimJoint1626 = new SoHAnimJoint();
SoHAnimJoint1626->setUSE(QString("hanim_l_metatarsal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1626);

SoHAnimJoint* SoHAnimJoint1627 = new SoHAnimJoint();
SoHAnimJoint1627->setUSE(QString("hanim_r_metatarsal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1627);

SoHAnimJoint* SoHAnimJoint1628 = new SoHAnimJoint();
SoHAnimJoint1628->setUSE(QString("hanim_l_middle0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1628);

SoHAnimJoint* SoHAnimJoint1629 = new SoHAnimJoint();
SoHAnimJoint1629->setUSE(QString("hanim_r_middle0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1629);

SoHAnimJoint* SoHAnimJoint1630 = new SoHAnimJoint();
SoHAnimJoint1630->setUSE(QString("hanim_l_middle1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1630);

SoHAnimJoint* SoHAnimJoint1631 = new SoHAnimJoint();
SoHAnimJoint1631->setUSE(QString("hanim_r_middle1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1631);

SoHAnimJoint* SoHAnimJoint1632 = new SoHAnimJoint();
SoHAnimJoint1632->setUSE(QString("hanim_l_middle2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1632);

SoHAnimJoint* SoHAnimJoint1633 = new SoHAnimJoint();
SoHAnimJoint1633->setUSE(QString("hanim_r_middle2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1633);

SoHAnimJoint* SoHAnimJoint1634 = new SoHAnimJoint();
SoHAnimJoint1634->setUSE(QString("hanim_l_middle3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1634);

SoHAnimJoint* SoHAnimJoint1635 = new SoHAnimJoint();
SoHAnimJoint1635->setUSE(QString("hanim_r_middle3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1635);

SoHAnimJoint* SoHAnimJoint1636 = new SoHAnimJoint();
SoHAnimJoint1636->setUSE(QString("hanim_l_midtarsal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1636);

SoHAnimJoint* SoHAnimJoint1637 = new SoHAnimJoint();
SoHAnimJoint1637->setUSE(QString("hanim_r_midtarsal"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1637);

SoHAnimJoint* SoHAnimJoint1638 = new SoHAnimJoint();
SoHAnimJoint1638->setUSE(QString("hanim_l_pinky0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1638);

SoHAnimJoint* SoHAnimJoint1639 = new SoHAnimJoint();
SoHAnimJoint1639->setUSE(QString("hanim_r_pinky0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1639);

SoHAnimJoint* SoHAnimJoint1640 = new SoHAnimJoint();
SoHAnimJoint1640->setUSE(QString("hanim_l_pinky1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1640);

SoHAnimJoint* SoHAnimJoint1641 = new SoHAnimJoint();
SoHAnimJoint1641->setUSE(QString("hanim_r_pinky1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1641);

SoHAnimJoint* SoHAnimJoint1642 = new SoHAnimJoint();
SoHAnimJoint1642->setUSE(QString("hanim_l_pinky2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1642);

SoHAnimJoint* SoHAnimJoint1643 = new SoHAnimJoint();
SoHAnimJoint1643->setUSE(QString("hanim_r_pinky2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1643);

SoHAnimJoint* SoHAnimJoint1644 = new SoHAnimJoint();
SoHAnimJoint1644->setUSE(QString("hanim_l_pinky3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1644);

SoHAnimJoint* SoHAnimJoint1645 = new SoHAnimJoint();
SoHAnimJoint1645->setUSE(QString("hanim_r_pinky3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1645);

SoHAnimJoint* SoHAnimJoint1646 = new SoHAnimJoint();
SoHAnimJoint1646->setUSE(QString("hanim_l_ring0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1646);

SoHAnimJoint* SoHAnimJoint1647 = new SoHAnimJoint();
SoHAnimJoint1647->setUSE(QString("hanim_r_ring0"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1647);

SoHAnimJoint* SoHAnimJoint1648 = new SoHAnimJoint();
SoHAnimJoint1648->setUSE(QString("hanim_l_ring1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1648);

SoHAnimJoint* SoHAnimJoint1649 = new SoHAnimJoint();
SoHAnimJoint1649->setUSE(QString("hanim_r_ring1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1649);

SoHAnimJoint* SoHAnimJoint1650 = new SoHAnimJoint();
SoHAnimJoint1650->setUSE(QString("hanim_l_ring2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1650);

SoHAnimJoint* SoHAnimJoint1651 = new SoHAnimJoint();
SoHAnimJoint1651->setUSE(QString("hanim_r_ring2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1651);

SoHAnimJoint* SoHAnimJoint1652 = new SoHAnimJoint();
SoHAnimJoint1652->setUSE(QString("hanim_l_ring3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1652);

SoHAnimJoint* SoHAnimJoint1653 = new SoHAnimJoint();
SoHAnimJoint1653->setUSE(QString("hanim_r_ring3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1653);

SoHAnimJoint* SoHAnimJoint1654 = new SoHAnimJoint();
SoHAnimJoint1654->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1654);

SoHAnimJoint* SoHAnimJoint1655 = new SoHAnimJoint();
SoHAnimJoint1655->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1655);

SoHAnimJoint* SoHAnimJoint1656 = new SoHAnimJoint();
SoHAnimJoint1656->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1656);

SoHAnimJoint* SoHAnimJoint1657 = new SoHAnimJoint();
SoHAnimJoint1657->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1657);

SoHAnimJoint* SoHAnimJoint1658 = new SoHAnimJoint();
SoHAnimJoint1658->setUSE(QString("hanim_l_subtalar"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1658);

SoHAnimJoint* SoHAnimJoint1659 = new SoHAnimJoint();
SoHAnimJoint1659->setUSE(QString("hanim_r_subtalar"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1659);

SoHAnimJoint* SoHAnimJoint1660 = new SoHAnimJoint();
SoHAnimJoint1660->setUSE(QString("hanim_l_thumb1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1660);

SoHAnimJoint* SoHAnimJoint1661 = new SoHAnimJoint();
SoHAnimJoint1661->setUSE(QString("hanim_r_thumb1"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1661);

SoHAnimJoint* SoHAnimJoint1662 = new SoHAnimJoint();
SoHAnimJoint1662->setUSE(QString("hanim_l_thumb2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1662);

SoHAnimJoint* SoHAnimJoint1663 = new SoHAnimJoint();
SoHAnimJoint1663->setUSE(QString("hanim_r_thumb2"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1663);

SoHAnimJoint* SoHAnimJoint1664 = new SoHAnimJoint();
SoHAnimJoint1664->setUSE(QString("hanim_l_thumb3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1664);

SoHAnimJoint* SoHAnimJoint1665 = new SoHAnimJoint();
SoHAnimJoint1665->setUSE(QString("hanim_r_thumb3"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1665);

SoHAnimJoint* SoHAnimJoint1666 = new SoHAnimJoint();
SoHAnimJoint1666->setUSE(QString("hanim_l_wrist"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1666);

SoHAnimJoint* SoHAnimJoint1667 = new SoHAnimJoint();
SoHAnimJoint1667->setUSE(QString("hanim_r_wrist"));
SoHAnimHumanoid43->setJoints(*SoHAnimJoint1667);

SoHAnimSegment* SoHAnimSegment1668 = new SoHAnimSegment();
SoHAnimSegment1668->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1668);

SoHAnimSegment* SoHAnimSegment1669 = new SoHAnimSegment();
SoHAnimSegment1669->setUSE(QString("hanim_skull"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1669);

SoHAnimSegment* SoHAnimSegment1670 = new SoHAnimSegment();
SoHAnimSegment1670->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1670);

SoHAnimSegment* SoHAnimSegment1671 = new SoHAnimSegment();
SoHAnimSegment1671->setUSE(QString("hanim_c1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1671);

SoHAnimSegment* SoHAnimSegment1672 = new SoHAnimSegment();
SoHAnimSegment1672->setUSE(QString("hanim_c2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1672);

SoHAnimSegment* SoHAnimSegment1673 = new SoHAnimSegment();
SoHAnimSegment1673->setUSE(QString("hanim_c3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1673);

SoHAnimSegment* SoHAnimSegment1674 = new SoHAnimSegment();
SoHAnimSegment1674->setUSE(QString("hanim_c4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1674);

SoHAnimSegment* SoHAnimSegment1675 = new SoHAnimSegment();
SoHAnimSegment1675->setUSE(QString("hanim_c5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1675);

SoHAnimSegment* SoHAnimSegment1676 = new SoHAnimSegment();
SoHAnimSegment1676->setUSE(QString("hanim_c6"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1676);

SoHAnimSegment* SoHAnimSegment1677 = new SoHAnimSegment();
SoHAnimSegment1677->setUSE(QString("hanim_c7"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1677);

SoHAnimSegment* SoHAnimSegment1678 = new SoHAnimSegment();
SoHAnimSegment1678->setUSE(QString("hanim_t1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1678);

SoHAnimSegment* SoHAnimSegment1679 = new SoHAnimSegment();
SoHAnimSegment1679->setUSE(QString("hanim_t2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1679);

SoHAnimSegment* SoHAnimSegment1680 = new SoHAnimSegment();
SoHAnimSegment1680->setUSE(QString("hanim_t3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1680);

SoHAnimSegment* SoHAnimSegment1681 = new SoHAnimSegment();
SoHAnimSegment1681->setUSE(QString("hanim_t4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1681);

SoHAnimSegment* SoHAnimSegment1682 = new SoHAnimSegment();
SoHAnimSegment1682->setUSE(QString("hanim_t5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1682);

SoHAnimSegment* SoHAnimSegment1683 = new SoHAnimSegment();
SoHAnimSegment1683->setUSE(QString("hanim_t6"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1683);

SoHAnimSegment* SoHAnimSegment1684 = new SoHAnimSegment();
SoHAnimSegment1684->setUSE(QString("hanim_t7"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1684);

SoHAnimSegment* SoHAnimSegment1685 = new SoHAnimSegment();
SoHAnimSegment1685->setUSE(QString("hanim_t8"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1685);

SoHAnimSegment* SoHAnimSegment1686 = new SoHAnimSegment();
SoHAnimSegment1686->setUSE(QString("hanim_t9"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1686);

SoHAnimSegment* SoHAnimSegment1687 = new SoHAnimSegment();
SoHAnimSegment1687->setUSE(QString("hanim_t10"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1687);

SoHAnimSegment* SoHAnimSegment1688 = new SoHAnimSegment();
SoHAnimSegment1688->setUSE(QString("hanim_t11"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1688);

SoHAnimSegment* SoHAnimSegment1689 = new SoHAnimSegment();
SoHAnimSegment1689->setUSE(QString("hanim_t12"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1689);

SoHAnimSegment* SoHAnimSegment1690 = new SoHAnimSegment();
SoHAnimSegment1690->setUSE(QString("hanim_l1"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1690);

SoHAnimSegment* SoHAnimSegment1691 = new SoHAnimSegment();
SoHAnimSegment1691->setUSE(QString("hanim_l2"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1691);

SoHAnimSegment* SoHAnimSegment1692 = new SoHAnimSegment();
SoHAnimSegment1692->setUSE(QString("hanim_l3"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1692);

SoHAnimSegment* SoHAnimSegment1693 = new SoHAnimSegment();
SoHAnimSegment1693->setUSE(QString("hanim_l4"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1693);

SoHAnimSegment* SoHAnimSegment1694 = new SoHAnimSegment();
SoHAnimSegment1694->setUSE(QString("hanim_l5"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1694);

SoHAnimSegment* SoHAnimSegment1695 = new SoHAnimSegment();
SoHAnimSegment1695->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1695);

SoHAnimSegment* SoHAnimSegment1696 = new SoHAnimSegment();
SoHAnimSegment1696->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1696);

SoHAnimSegment* SoHAnimSegment1697 = new SoHAnimSegment();
SoHAnimSegment1697->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1697);

SoHAnimSegment* SoHAnimSegment1698 = new SoHAnimSegment();
SoHAnimSegment1698->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1698);

SoHAnimSegment* SoHAnimSegment1699 = new SoHAnimSegment();
SoHAnimSegment1699->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1699);

SoHAnimSegment* SoHAnimSegment1700 = new SoHAnimSegment();
SoHAnimSegment1700->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1700);

SoHAnimSegment* SoHAnimSegment1701 = new SoHAnimSegment();
SoHAnimSegment1701->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1701);

SoHAnimSegment* SoHAnimSegment1702 = new SoHAnimSegment();
SoHAnimSegment1702->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1702);

SoHAnimSegment* SoHAnimSegment1703 = new SoHAnimSegment();
SoHAnimSegment1703->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1703);

SoHAnimSegment* SoHAnimSegment1704 = new SoHAnimSegment();
SoHAnimSegment1704->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1704);

SoHAnimSegment* SoHAnimSegment1705 = new SoHAnimSegment();
SoHAnimSegment1705->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1705);

SoHAnimSegment* SoHAnimSegment1706 = new SoHAnimSegment();
SoHAnimSegment1706->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1706);

SoHAnimSegment* SoHAnimSegment1707 = new SoHAnimSegment();
SoHAnimSegment1707->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1707);

SoHAnimSegment* SoHAnimSegment1708 = new SoHAnimSegment();
SoHAnimSegment1708->setUSE(QString("hanim_l_forefoot"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1708);

SoHAnimSegment* SoHAnimSegment1709 = new SoHAnimSegment();
SoHAnimSegment1709->setUSE(QString("hanim_r_forefoot"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1709);

SoHAnimSegment* SoHAnimSegment1710 = new SoHAnimSegment();
SoHAnimSegment1710->setUSE(QString("hanim_l_hand"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1710);

SoHAnimSegment* SoHAnimSegment1711 = new SoHAnimSegment();
SoHAnimSegment1711->setUSE(QString("hanim_r_hand"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1711);

SoHAnimSegment* SoHAnimSegment1712 = new SoHAnimSegment();
SoHAnimSegment1712->setUSE(QString("hanim_l_hindfoot"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1712);

SoHAnimSegment* SoHAnimSegment1713 = new SoHAnimSegment();
SoHAnimSegment1713->setUSE(QString("hanim_r_hindfoot"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1713);

SoHAnimSegment* SoHAnimSegment1714 = new SoHAnimSegment();
SoHAnimSegment1714->setUSE(QString("hanim_l_index_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1714);

SoHAnimSegment* SoHAnimSegment1715 = new SoHAnimSegment();
SoHAnimSegment1715->setUSE(QString("hanim_r_index_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1715);

SoHAnimSegment* SoHAnimSegment1716 = new SoHAnimSegment();
SoHAnimSegment1716->setUSE(QString("hanim_l_index_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1716);

SoHAnimSegment* SoHAnimSegment1717 = new SoHAnimSegment();
SoHAnimSegment1717->setUSE(QString("hanim_r_index_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1717);

SoHAnimSegment* SoHAnimSegment1718 = new SoHAnimSegment();
SoHAnimSegment1718->setUSE(QString("hanim_l_index_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1718);

SoHAnimSegment* SoHAnimSegment1719 = new SoHAnimSegment();
SoHAnimSegment1719->setUSE(QString("hanim_r_index_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1719);

SoHAnimSegment* SoHAnimSegment1720 = new SoHAnimSegment();
SoHAnimSegment1720->setUSE(QString("hanim_l_index_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1720);

SoHAnimSegment* SoHAnimSegment1721 = new SoHAnimSegment();
SoHAnimSegment1721->setUSE(QString("hanim_r_index_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1721);

SoHAnimSegment* SoHAnimSegment1722 = new SoHAnimSegment();
SoHAnimSegment1722->setUSE(QString("hanim_l_middistal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1722);

SoHAnimSegment* SoHAnimSegment1723 = new SoHAnimSegment();
SoHAnimSegment1723->setUSE(QString("hanim_r_middistal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1723);

SoHAnimSegment* SoHAnimSegment1724 = new SoHAnimSegment();
SoHAnimSegment1724->setUSE(QString("hanim_l_middle_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1724);

SoHAnimSegment* SoHAnimSegment1725 = new SoHAnimSegment();
SoHAnimSegment1725->setUSE(QString("hanim_r_middle_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1725);

SoHAnimSegment* SoHAnimSegment1726 = new SoHAnimSegment();
SoHAnimSegment1726->setUSE(QString("hanim_l_middle_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1726);

SoHAnimSegment* SoHAnimSegment1727 = new SoHAnimSegment();
SoHAnimSegment1727->setUSE(QString("hanim_r_middle_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1727);

SoHAnimSegment* SoHAnimSegment1728 = new SoHAnimSegment();
SoHAnimSegment1728->setUSE(QString("hanim_l_middle_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1728);

SoHAnimSegment* SoHAnimSegment1729 = new SoHAnimSegment();
SoHAnimSegment1729->setUSE(QString("hanim_r_middle_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1729);

SoHAnimSegment* SoHAnimSegment1730 = new SoHAnimSegment();
SoHAnimSegment1730->setUSE(QString("hanim_l_middle_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1730);

SoHAnimSegment* SoHAnimSegment1731 = new SoHAnimSegment();
SoHAnimSegment1731->setUSE(QString("hanim_r_middle_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1731);

SoHAnimSegment* SoHAnimSegment1732 = new SoHAnimSegment();
SoHAnimSegment1732->setUSE(QString("hanim_l_midproximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1732);

SoHAnimSegment* SoHAnimSegment1733 = new SoHAnimSegment();
SoHAnimSegment1733->setUSE(QString("hanim_r_midproximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1733);

SoHAnimSegment* SoHAnimSegment1734 = new SoHAnimSegment();
SoHAnimSegment1734->setUSE(QString("hanim_l_pinky_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1734);

SoHAnimSegment* SoHAnimSegment1735 = new SoHAnimSegment();
SoHAnimSegment1735->setUSE(QString("hanim_r_pinky_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1735);

SoHAnimSegment* SoHAnimSegment1736 = new SoHAnimSegment();
SoHAnimSegment1736->setUSE(QString("hanim_l_pinky_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1736);

SoHAnimSegment* SoHAnimSegment1737 = new SoHAnimSegment();
SoHAnimSegment1737->setUSE(QString("hanim_r_pinky_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1737);

SoHAnimSegment* SoHAnimSegment1738 = new SoHAnimSegment();
SoHAnimSegment1738->setUSE(QString("hanim_l_pinky_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1738);

SoHAnimSegment* SoHAnimSegment1739 = new SoHAnimSegment();
SoHAnimSegment1739->setUSE(QString("hanim_r_pinky_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1739);

SoHAnimSegment* SoHAnimSegment1740 = new SoHAnimSegment();
SoHAnimSegment1740->setUSE(QString("hanim_l_pinky_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1740);

SoHAnimSegment* SoHAnimSegment1741 = new SoHAnimSegment();
SoHAnimSegment1741->setUSE(QString("hanim_r_pinky_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1741);

SoHAnimSegment* SoHAnimSegment1742 = new SoHAnimSegment();
SoHAnimSegment1742->setUSE(QString("hanim_l_ring_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1742);

SoHAnimSegment* SoHAnimSegment1743 = new SoHAnimSegment();
SoHAnimSegment1743->setUSE(QString("hanim_r_ring_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1743);

SoHAnimSegment* SoHAnimSegment1744 = new SoHAnimSegment();
SoHAnimSegment1744->setUSE(QString("hanim_l_ring_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1744);

SoHAnimSegment* SoHAnimSegment1745 = new SoHAnimSegment();
SoHAnimSegment1745->setUSE(QString("hanim_r_ring_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1745);

SoHAnimSegment* SoHAnimSegment1746 = new SoHAnimSegment();
SoHAnimSegment1746->setUSE(QString("hanim_l_ring_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1746);

SoHAnimSegment* SoHAnimSegment1747 = new SoHAnimSegment();
SoHAnimSegment1747->setUSE(QString("hanim_r_ring_middle"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1747);

SoHAnimSegment* SoHAnimSegment1748 = new SoHAnimSegment();
SoHAnimSegment1748->setUSE(QString("hanim_l_ring_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1748);

SoHAnimSegment* SoHAnimSegment1749 = new SoHAnimSegment();
SoHAnimSegment1749->setUSE(QString("hanim_r_ring_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1749);

SoHAnimSegment* SoHAnimSegment1750 = new SoHAnimSegment();
SoHAnimSegment1750->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1750);

SoHAnimSegment* SoHAnimSegment1751 = new SoHAnimSegment();
SoHAnimSegment1751->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1751);

SoHAnimSegment* SoHAnimSegment1752 = new SoHAnimSegment();
SoHAnimSegment1752->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1752);

SoHAnimSegment* SoHAnimSegment1753 = new SoHAnimSegment();
SoHAnimSegment1753->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1753);

SoHAnimSegment* SoHAnimSegment1754 = new SoHAnimSegment();
SoHAnimSegment1754->setUSE(QString("hanim_l_thumb_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1754);

SoHAnimSegment* SoHAnimSegment1755 = new SoHAnimSegment();
SoHAnimSegment1755->setUSE(QString("hanim_r_thumb_distal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1755);

SoHAnimSegment* SoHAnimSegment1756 = new SoHAnimSegment();
SoHAnimSegment1756->setUSE(QString("hanim_l_thumb_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1756);

SoHAnimSegment* SoHAnimSegment1757 = new SoHAnimSegment();
SoHAnimSegment1757->setUSE(QString("hanim_r_thumb_metacarpal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1757);

SoHAnimSegment* SoHAnimSegment1758 = new SoHAnimSegment();
SoHAnimSegment1758->setUSE(QString("hanim_l_thumb_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1758);

SoHAnimSegment* SoHAnimSegment1759 = new SoHAnimSegment();
SoHAnimSegment1759->setUSE(QString("hanim_r_thumb_proximal"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1759);

SoHAnimSegment* SoHAnimSegment1760 = new SoHAnimSegment();
SoHAnimSegment1760->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1760);

SoHAnimSegment* SoHAnimSegment1761 = new SoHAnimSegment();
SoHAnimSegment1761->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid43->setSegments(*SoHAnimSegment1761);

SoHAnimSite* SoHAnimSite1762 = new SoHAnimSite();
SoHAnimSite1762->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1762);

SoHAnimSite* SoHAnimSite1763 = new SoHAnimSite();
SoHAnimSite1763->setUSE(QString("hanim_skull_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1763);

SoHAnimSite* SoHAnimSite1764 = new SoHAnimSite();
SoHAnimSite1764->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1764);

SoHAnimSite* SoHAnimSite1765 = new SoHAnimSite();
SoHAnimSite1765->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1765);

SoHAnimSite* SoHAnimSite1766 = new SoHAnimSite();
SoHAnimSite1766->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1766);

SoHAnimSite* SoHAnimSite1767 = new SoHAnimSite();
SoHAnimSite1767->setUSE(QString("hanim_suprasternale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1767);

SoHAnimSite* SoHAnimSite1768 = new SoHAnimSite();
SoHAnimSite1768->setUSE(QString("hanim_cervicale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1768);

SoHAnimSite* SoHAnimSite1769 = new SoHAnimSite();
SoHAnimSite1769->setUSE(QString("hanim_substernale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1769);

SoHAnimSite* SoHAnimSite1770 = new SoHAnimSite();
SoHAnimSite1770->setUSE(QString("hanim_rib10_midspine_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1770);

SoHAnimSite* SoHAnimSite1771 = new SoHAnimSite();
SoHAnimSite1771->setUSE(QString("hanim_waist_preferred_post_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1771);

SoHAnimSite* SoHAnimSite1772 = new SoHAnimSite();
SoHAnimSite1772->setUSE(QString("hanim_navel_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1772);

SoHAnimSite* SoHAnimSite1773 = new SoHAnimSite();
SoHAnimSite1773->setUSE(QString("hanim_l_acromion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1773);

SoHAnimSite* SoHAnimSite1774 = new SoHAnimSite();
SoHAnimSite1774->setUSE(QString("hanim_r_acromion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1774);

SoHAnimSite* SoHAnimSite1775 = new SoHAnimSite();
SoHAnimSite1775->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1775);

SoHAnimSite* SoHAnimSite1776 = new SoHAnimSite();
SoHAnimSite1776->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1776);

SoHAnimSite* SoHAnimSite1777 = new SoHAnimSite();
SoHAnimSite1777->setUSE(QString("hanim_l_axilla_ant_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1777);

SoHAnimSite* SoHAnimSite1778 = new SoHAnimSite();
SoHAnimSite1778->setUSE(QString("hanim_r_axilla_ant_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1778);

SoHAnimSite* SoHAnimSite1779 = new SoHAnimSite();
SoHAnimSite1779->setUSE(QString("hanim_l_axilla_post_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1779);

SoHAnimSite* SoHAnimSite1780 = new SoHAnimSite();
SoHAnimSite1780->setUSE(QString("hanim_r_axilla_post_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1780);

SoHAnimSite* SoHAnimSite1781 = new SoHAnimSite();
SoHAnimSite1781->setUSE(QString("hanim_l_calcaneous_post_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1781);

SoHAnimSite* SoHAnimSite1782 = new SoHAnimSite();
SoHAnimSite1782->setUSE(QString("hanim_r_calcaneous_post_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1782);

SoHAnimSite* SoHAnimSite1783 = new SoHAnimSite();
SoHAnimSite1783->setUSE(QString("hanim_l_clavicale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1783);

SoHAnimSite* SoHAnimSite1784 = new SoHAnimSite();
SoHAnimSite1784->setUSE(QString("hanim_r_clavicale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1784);

SoHAnimSite* SoHAnimSite1785 = new SoHAnimSite();
SoHAnimSite1785->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1785);

SoHAnimSite* SoHAnimSite1786 = new SoHAnimSite();
SoHAnimSite1786->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1786);

SoHAnimSite* SoHAnimSite1787 = new SoHAnimSite();
SoHAnimSite1787->setUSE(QString("hanim_l_digit2_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1787);

SoHAnimSite* SoHAnimSite1788 = new SoHAnimSite();
SoHAnimSite1788->setUSE(QString("hanim_r_digit2_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1788);

SoHAnimSite* SoHAnimSite1789 = new SoHAnimSite();
SoHAnimSite1789->setUSE(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1789);

SoHAnimSite* SoHAnimSite1790 = new SoHAnimSite();
SoHAnimSite1790->setUSE(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1790);

SoHAnimSite* SoHAnimSite1791 = new SoHAnimSite();
SoHAnimSite1791->setUSE(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1791);

SoHAnimSite* SoHAnimSite1792 = new SoHAnimSite();
SoHAnimSite1792->setUSE(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1792);

SoHAnimSite* SoHAnimSite1793 = new SoHAnimSite();
SoHAnimSite1793->setUSE(QString("hanim_l_forefoot_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1793);

SoHAnimSite* SoHAnimSite1794 = new SoHAnimSite();
SoHAnimSite1794->setUSE(QString("hanim_r_forefoot_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1794);

SoHAnimSite* SoHAnimSite1795 = new SoHAnimSite();
SoHAnimSite1795->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1795);

SoHAnimSite* SoHAnimSite1796 = new SoHAnimSite();
SoHAnimSite1796->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1796);

SoHAnimSite* SoHAnimSite1797 = new SoHAnimSite();
SoHAnimSite1797->setUSE(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1797);

SoHAnimSite* SoHAnimSite1798 = new SoHAnimSite();
SoHAnimSite1798->setUSE(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1798);

SoHAnimSite* SoHAnimSite1799 = new SoHAnimSite();
SoHAnimSite1799->setUSE(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1799);

SoHAnimSite* SoHAnimSite1800 = new SoHAnimSite();
SoHAnimSite1800->setUSE(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1800);

SoHAnimSite* SoHAnimSite1801 = new SoHAnimSite();
SoHAnimSite1801->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1801);

SoHAnimSite* SoHAnimSite1802 = new SoHAnimSite();
SoHAnimSite1802->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1802);

SoHAnimSite* SoHAnimSite1803 = new SoHAnimSite();
SoHAnimSite1803->setUSE(QString("hanim_l_index_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1803);

SoHAnimSite* SoHAnimSite1804 = new SoHAnimSite();
SoHAnimSite1804->setUSE(QString("hanim_r_index_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1804);

SoHAnimSite* SoHAnimSite1805 = new SoHAnimSite();
SoHAnimSite1805->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1805);

SoHAnimSite* SoHAnimSite1806 = new SoHAnimSite();
SoHAnimSite1806->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1806);

SoHAnimSite* SoHAnimSite1807 = new SoHAnimSite();
SoHAnimSite1807->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1807);

SoHAnimSite* SoHAnimSite1808 = new SoHAnimSite();
SoHAnimSite1808->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1808);

SoHAnimSite* SoHAnimSite1809 = new SoHAnimSite();
SoHAnimSite1809->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1809);

SoHAnimSite* SoHAnimSite1810 = new SoHAnimSite();
SoHAnimSite1810->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1810);

SoHAnimSite* SoHAnimSite1811 = new SoHAnimSite();
SoHAnimSite1811->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1811);

SoHAnimSite* SoHAnimSite1812 = new SoHAnimSite();
SoHAnimSite1812->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1812);

SoHAnimSite* SoHAnimSite1813 = new SoHAnimSite();
SoHAnimSite1813->setUSE(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1813);

SoHAnimSite* SoHAnimSite1814 = new SoHAnimSite();
SoHAnimSite1814->setUSE(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1814);

SoHAnimSite* SoHAnimSite1815 = new SoHAnimSite();
SoHAnimSite1815->setUSE(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1815);

SoHAnimSite* SoHAnimSite1816 = new SoHAnimSite();
SoHAnimSite1816->setUSE(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1816);

SoHAnimSite* SoHAnimSite1817 = new SoHAnimSite();
SoHAnimSite1817->setUSE(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1817);

SoHAnimSite* SoHAnimSite1818 = new SoHAnimSite();
SoHAnimSite1818->setUSE(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1818);

SoHAnimSite* SoHAnimSite1819 = new SoHAnimSite();
SoHAnimSite1819->setUSE(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1819);

SoHAnimSite* SoHAnimSite1820 = new SoHAnimSite();
SoHAnimSite1820->setUSE(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1820);

SoHAnimSite* SoHAnimSite1821 = new SoHAnimSite();
SoHAnimSite1821->setUSE(QString("hanim_l_middle_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1821);

SoHAnimSite* SoHAnimSite1822 = new SoHAnimSite();
SoHAnimSite1822->setUSE(QString("hanim_r_middle_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1822);

SoHAnimSite* SoHAnimSite1823 = new SoHAnimSite();
SoHAnimSite1823->setUSE(QString("hanim_r_neck_base_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1823);

SoHAnimSite* SoHAnimSite1824 = new SoHAnimSite();
SoHAnimSite1824->setUSE(QString("hanim_l_neck_base_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1824);

SoHAnimSite* SoHAnimSite1825 = new SoHAnimSite();
SoHAnimSite1825->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1825);

SoHAnimSite* SoHAnimSite1826 = new SoHAnimSite();
SoHAnimSite1826->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1826);

SoHAnimSite* SoHAnimSite1827 = new SoHAnimSite();
SoHAnimSite1827->setUSE(QString("hanim_l_pinky_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1827);

SoHAnimSite* SoHAnimSite1828 = new SoHAnimSite();
SoHAnimSite1828->setUSE(QString("hanim_r_pinky_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1828);

SoHAnimSite* SoHAnimSite1829 = new SoHAnimSite();
SoHAnimSite1829->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1829);

SoHAnimSite* SoHAnimSite1830 = new SoHAnimSite();
SoHAnimSite1830->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1830);

SoHAnimSite* SoHAnimSite1831 = new SoHAnimSite();
SoHAnimSite1831->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1831);

SoHAnimSite* SoHAnimSite1832 = new SoHAnimSite();
SoHAnimSite1832->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1832);

SoHAnimSite* SoHAnimSite1833 = new SoHAnimSite();
SoHAnimSite1833->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1833);

SoHAnimSite* SoHAnimSite1834 = new SoHAnimSite();
SoHAnimSite1834->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1834);

SoHAnimSite* SoHAnimSite1835 = new SoHAnimSite();
SoHAnimSite1835->setUSE(QString("hanim_r_rib10_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1835);

SoHAnimSite* SoHAnimSite1836 = new SoHAnimSite();
SoHAnimSite1836->setUSE(QString("hanim_l_rib10_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1836);

SoHAnimSite* SoHAnimSite1837 = new SoHAnimSite();
SoHAnimSite1837->setUSE(QString("hanim_l_ring_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1837);

SoHAnimSite* SoHAnimSite1838 = new SoHAnimSite();
SoHAnimSite1838->setUSE(QString("hanim_r_ring_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1838);

SoHAnimSite* SoHAnimSite1839 = new SoHAnimSite();
SoHAnimSite1839->setUSE(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1839);

SoHAnimSite* SoHAnimSite1840 = new SoHAnimSite();
SoHAnimSite1840->setUSE(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1840);

SoHAnimSite* SoHAnimSite1841 = new SoHAnimSite();
SoHAnimSite1841->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1841);

SoHAnimSite* SoHAnimSite1842 = new SoHAnimSite();
SoHAnimSite1842->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1842);

SoHAnimSite* SoHAnimSite1843 = new SoHAnimSite();
SoHAnimSite1843->setUSE(QString("hanim_r_thelion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1843);

SoHAnimSite* SoHAnimSite1844 = new SoHAnimSite();
SoHAnimSite1844->setUSE(QString("hanim_l_thelion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1844);

SoHAnimSite* SoHAnimSite1845 = new SoHAnimSite();
SoHAnimSite1845->setUSE(QString("hanim_l_thumb_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1845);

SoHAnimSite* SoHAnimSite1846 = new SoHAnimSite();
SoHAnimSite1846->setUSE(QString("hanim_r_thumb_distal_tip"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1846);

SoHAnimSite* SoHAnimSite1847 = new SoHAnimSite();
SoHAnimSite1847->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1847);

SoHAnimSite* SoHAnimSite1848 = new SoHAnimSite();
SoHAnimSite1848->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1848);

SoHAnimSite* SoHAnimSite1849 = new SoHAnimSite();
SoHAnimSite1849->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1849);

SoHAnimSite* SoHAnimSite1850 = new SoHAnimSite();
SoHAnimSite1850->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1850);

SoHAnimSite* SoHAnimSite1851 = new SoHAnimSite();
SoHAnimSite1851->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1851);

SoHAnimSite* SoHAnimSite1852 = new SoHAnimSite();
SoHAnimSite1852->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1852);

SoHAnimSite* SoHAnimSite1853 = new SoHAnimSite();
SoHAnimSite1853->setDEF(QString("hanim_l_inclined_view"));
SoHAnimSite1853->X3DNode::setName(QString("l_inclined_view"));
SoHAnimSite1853->setTranslation(new float[]{1.62,1.05,2.06});
SoHAnimSite1853->setRotation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint* SoViewpoint1854 = new SoViewpoint();
SoViewpoint1854->setDEF(QString("hanim_l_inclined_viewpoint"));
SoViewpoint1854->setDescription(QString("left inclined"));
SoViewpoint1854->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite1853->addChild(*SoViewpoint1854);

SoAnchor* SoAnchor1855 = new SoAnchor();
SoAnchor1855->setDescription(QString("HAnimSite Viewpoint hanim_l_inclined_view"));
SoAnchor1855->setUrl(new QString[]{QString("#hanim_l_inclined_viewpoint")}, 1);
SoLOD* SoLOD1856 = new SoLOD();
SoLOD1856->setForceTransitions(true);
SoLOD1856->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1857 = new SoWorldInfo();
SoWorldInfo1857->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1856->addChildren(*SoWorldInfo1857);

SoShape* SoShape1858 = new SoShape();
SoShape1858->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1856->addChildren(SoShape1858);

SoAnchor1855->addChild(*SoLOD1856);

SoHAnimSite1853->addChild(SoAnchor1855);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1853);

SoHAnimSite* SoHAnimSite1859 = new SoHAnimSite();
SoHAnimSite1859->setDEF(QString("hanim_r_inclined_view"));
SoHAnimSite1859->X3DNode::setName(QString("r_inclined_view"));
SoHAnimSite1859->setTranslation(new float[]{-1.62,1.05,2.06});
SoHAnimSite1859->setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
SoViewpoint* SoViewpoint1860 = new SoViewpoint();
SoViewpoint1860->setDEF(QString("hanim_r_inclined_viewpoint"));
SoViewpoint1860->setDescription(QString("right inclined"));
SoViewpoint1860->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1860->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1859->addChild(*SoViewpoint1860);

SoAnchor* SoAnchor1861 = new SoAnchor();
SoAnchor1861->setDescription(QString("HAnimSite Viewpoint hanim_r_inclined_view"));
SoAnchor1861->setUrl(new QString[]{QString("#hanim_r_inclined_viewpoint")}, 1);
SoLOD* SoLOD1862 = new SoLOD();
SoLOD1862->setForceTransitions(true);
SoLOD1862->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1863 = new SoWorldInfo();
SoWorldInfo1863->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1862->addChildren(*SoWorldInfo1863);

SoShape* SoShape1864 = new SoShape();
SoShape1864->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1862->addChildren(SoShape1864);

SoAnchor1861->addChild(*SoLOD1862);

SoHAnimSite1859->addChild(SoAnchor1861);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1859);

SoHAnimSite* SoHAnimSite1865 = new SoHAnimSite();
SoHAnimSite1865->setDEF(QString("hanim_front_view"));
SoHAnimSite1865->X3DNode::setName(QString("front_view"));
SoHAnimSite1865->setTranslation(new float[]{0.0,0.85,2.58});
SoViewpoint* SoViewpoint1866 = new SoViewpoint();
SoViewpoint1866->setDEF(QString("hanim_front_viewpoint"));
SoViewpoint1866->setDescription(QString("front"));
SoViewpoint1866->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1866->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1865->addChild(*SoViewpoint1866);

SoAnchor* SoAnchor1867 = new SoAnchor();
SoAnchor1867->setDescription(QString("HAnimSite Viewpoint hanim_front_view"));
SoAnchor1867->setUrl(new QString[]{QString("#hanim_front_viewpoint")}, 1);
SoLOD* SoLOD1868 = new SoLOD();
SoLOD1868->setForceTransitions(true);
SoLOD1868->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1869 = new SoWorldInfo();
SoWorldInfo1869->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1868->addChildren(*SoWorldInfo1869);

SoShape* SoShape1870 = new SoShape();
SoShape1870->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1868->addChildren(SoShape1870);

SoAnchor1867->addChild(*SoLOD1868);

SoHAnimSite1865->addChild(SoAnchor1867);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1865);

SoHAnimSite* SoHAnimSite1871 = new SoHAnimSite();
SoHAnimSite1871->setDEF(QString("hanim_back_view"));
SoHAnimSite1871->X3DNode::setName(QString("back_view"));
SoHAnimSite1871->setTranslation(new float[]{0.0,0.85,-2.58});
SoHAnimSite1871->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint* SoViewpoint1872 = new SoViewpoint();
SoViewpoint1872->setDEF(QString("hanim_back_viewpoint"));
SoViewpoint1872->setDescription(QString("back"));
SoViewpoint1872->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1872->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1871->addChild(*SoViewpoint1872);

SoAnchor* SoAnchor1873 = new SoAnchor();
SoAnchor1873->setDescription(QString("HAnimSite Viewpoint hanim_back_view"));
SoAnchor1873->setUrl(new QString[]{QString("#hanim_back_viewpoint")}, 1);
SoLOD* SoLOD1874 = new SoLOD();
SoLOD1874->setForceTransitions(true);
SoLOD1874->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1875 = new SoWorldInfo();
SoWorldInfo1875->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1874->addChildren(*SoWorldInfo1875);

SoShape* SoShape1876 = new SoShape();
SoShape1876->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1874->addChildren(SoShape1876);

SoAnchor1873->addChild(*SoLOD1874);

SoHAnimSite1871->addChild(SoAnchor1873);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1871);

SoHAnimSite* SoHAnimSite1877 = new SoHAnimSite();
SoHAnimSite1877->setDEF(QString("hanim_l_side_view"));
SoHAnimSite1877->X3DNode::setName(QString("l_side_view"));
SoHAnimSite1877->setTranslation(new float[]{2.6,0.854,0.0});
SoHAnimSite1877->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint* SoViewpoint1878 = new SoViewpoint();
SoViewpoint1878->setDEF(QString("hanim_l_side_viewpoint"));
SoViewpoint1878->setDescription(QString("left side"));
SoViewpoint1878->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1878->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1877->addChild(*SoViewpoint1878);

SoAnchor* SoAnchor1879 = new SoAnchor();
SoAnchor1879->setDescription(QString("HAnimSite Viewpoint hanim_l_side_view"));
SoAnchor1879->setUrl(new QString[]{QString("#hanim_l_side_viewpoint")}, 1);
SoLOD* SoLOD1880 = new SoLOD();
SoLOD1880->setForceTransitions(true);
SoLOD1880->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1881 = new SoWorldInfo();
SoWorldInfo1881->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1880->addChildren(*SoWorldInfo1881);

SoShape* SoShape1882 = new SoShape();
SoShape1882->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1880->addChildren(SoShape1882);

SoAnchor1879->addChild(*SoLOD1880);

SoHAnimSite1877->addChild(SoAnchor1879);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1877);

SoHAnimSite* SoHAnimSite1883 = new SoHAnimSite();
SoHAnimSite1883->setDEF(QString("hanim_Top_view"));
SoHAnimSite1883->X3DNode::setName(QString("Top_view"));
SoHAnimSite1883->setTranslation(new float[]{0.0,3.5,0.0});
SoHAnimSite1883->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint* SoViewpoint1884 = new SoViewpoint();
SoViewpoint1884->setDEF(QString("hanim_Top_viewpoint"));
SoViewpoint1884->setDescription(QString("Top"));
SoViewpoint1884->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1884->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1883->addChild(*SoViewpoint1884);

SoAnchor* SoAnchor1885 = new SoAnchor();
SoAnchor1885->setDescription(QString("HAnimSite Viewpoint hanim_Top_view"));
SoAnchor1885->setUrl(new QString[]{QString("#hanim_Top_viewpoint")}, 1);
SoLOD* SoLOD1886 = new SoLOD();
SoLOD1886->setForceTransitions(true);
SoLOD1886->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1887 = new SoWorldInfo();
SoWorldInfo1887->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1886->addChildren(*SoWorldInfo1887);

SoShape* SoShape1888 = new SoShape();
SoShape1888->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1886->addChildren(SoShape1888);

SoAnchor1885->addChild(*SoLOD1886);

SoHAnimSite1883->addChild(SoAnchor1885);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1883);

SoHAnimSite* SoHAnimSite1889 = new SoHAnimSite();
SoHAnimSite1889->setDEF(QString("hanim_front_close_view"));
SoHAnimSite1889->X3DNode::setName(QString("front_close_view"));
SoHAnimSite1889->setTranslation(new float[]{0.0,0.854,1.575});
SoViewpoint* SoViewpoint1890 = new SoViewpoint();
SoViewpoint1890->setDEF(QString("hanim_front_close_viewpoint"));
SoViewpoint1890->setDescription(QString("front close"));
SoViewpoint1890->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1890->setCenterOfRotation(new float[]{0.0,0.0,1.575});
SoHAnimSite1889->addChild(*SoViewpoint1890);

SoAnchor* SoAnchor1891 = new SoAnchor();
SoAnchor1891->setDescription(QString("HAnimSite Viewpoint hanim_front_close_view"));
SoAnchor1891->setUrl(new QString[]{QString("#hanim_front_close_viewpoint")}, 1);
SoLOD* SoLOD1892 = new SoLOD();
SoLOD1892->setForceTransitions(true);
SoLOD1892->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1893 = new SoWorldInfo();
SoWorldInfo1893->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1892->addChildren(*SoWorldInfo1893);

SoShape* SoShape1894 = new SoShape();
SoShape1894->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1892->addChildren(SoShape1894);

SoAnchor1891->addChild(*SoLOD1892);

SoHAnimSite1889->addChild(SoAnchor1891);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1889);

SoHAnimSite* SoHAnimSite1895 = new SoHAnimSite();
SoHAnimSite1895->setDEF(QString("hanim_side_close_view"));
SoHAnimSite1895->X3DNode::setName(QString("side_close_view"));
SoHAnimSite1895->setTranslation(new float[]{1.56,0.854,0.0});
SoHAnimSite1895->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint* SoViewpoint1896 = new SoViewpoint();
SoViewpoint1896->setDEF(QString("hanim_side_close_viewpoint"));
SoViewpoint1896->setDescription(QString("side close"));
SoViewpoint1896->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1896->setCenterOfRotation(new float[]{1.6,0.0,0.0});
SoHAnimSite1895->addChild(*SoViewpoint1896);

SoAnchor* SoAnchor1897 = new SoAnchor();
SoAnchor1897->setDescription(QString("HAnimSite Viewpoint hanim_side_close_view"));
SoAnchor1897->setUrl(new QString[]{QString("#hanim_side_close_viewpoint")}, 1);
SoLOD* SoLOD1898 = new SoLOD();
SoLOD1898->setForceTransitions(true);
SoLOD1898->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1899 = new SoWorldInfo();
SoWorldInfo1899->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1898->addChildren(*SoWorldInfo1899);

SoShape* SoShape1900 = new SoShape();
SoShape1900->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1898->addChildren(SoShape1900);

SoAnchor1897->addChild(*SoLOD1898);

SoHAnimSite1895->addChild(SoAnchor1897);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1895);

SoHAnimSite* SoHAnimSite1901 = new SoHAnimSite();
SoHAnimSite1901->setDEF(QString("hanim_head_front_close_view"));
SoHAnimSite1901->X3DNode::setName(QString("head_front_close_view"));
SoHAnimSite1901->setTranslation(new float[]{0.0,1.5,1.0});
SoViewpoint* SoViewpoint1902 = new SoViewpoint();
SoViewpoint1902->setDEF(QString("hanim_head_front_close_viewpoint"));
SoViewpoint1902->setDescription(QString("head front close"));
SoViewpoint1902->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1902->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1901->addChild(*SoViewpoint1902);

SoAnchor* SoAnchor1903 = new SoAnchor();
SoAnchor1903->setDescription(QString("HAnimSite Viewpoint hanim_head_front_close_view"));
SoAnchor1903->setUrl(new QString[]{QString("#hanim_head_front_close_viewpoint")}, 1);
SoLOD* SoLOD1904 = new SoLOD();
SoLOD1904->setForceTransitions(true);
SoLOD1904->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1905 = new SoWorldInfo();
SoWorldInfo1905->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1904->addChildren(*SoWorldInfo1905);

SoShape* SoShape1906 = new SoShape();
SoShape1906->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1904->addChildren(SoShape1906);

SoAnchor1903->addChild(*SoLOD1904);

SoHAnimSite1901->addChild(SoAnchor1903);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1901);

SoHAnimSite* SoHAnimSite1907 = new SoHAnimSite();
SoHAnimSite1907->setDEF(QString("hanim_chest_front_close_view"));
SoHAnimSite1907->X3DNode::setName(QString("chest_front_close_view"));
SoHAnimSite1907->setTranslation(new float[]{0.0,1.2,1.0});
SoViewpoint* SoViewpoint1908 = new SoViewpoint();
SoViewpoint1908->setDEF(QString("hanim_chest_front_close_viewpoint"));
SoViewpoint1908->setDescription(QString("chest front close"));
SoViewpoint1908->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1908->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1907->addChild(*SoViewpoint1908);

SoAnchor* SoAnchor1909 = new SoAnchor();
SoAnchor1909->setDescription(QString("HAnimSite Viewpoint hanim_chest_front_close_view"));
SoAnchor1909->setUrl(new QString[]{QString("#hanim_chest_front_close_viewpoint")}, 1);
SoLOD* SoLOD1910 = new SoLOD();
SoLOD1910->setForceTransitions(true);
SoLOD1910->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1911 = new SoWorldInfo();
SoWorldInfo1911->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1910->addChildren(*SoWorldInfo1911);

SoShape* SoShape1912 = new SoShape();
SoShape1912->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1910->addChildren(SoShape1912);

SoAnchor1909->addChild(*SoLOD1910);

SoHAnimSite1907->addChild(SoAnchor1909);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1907);

SoHAnimSite* SoHAnimSite1913 = new SoHAnimSite();
SoHAnimSite1913->setDEF(QString("hanim_pelvis_front_close_view"));
SoHAnimSite1913->X3DNode::setName(QString("pelvis_front_close_view"));
SoHAnimSite1913->setTranslation(new float[]{0.0,0.8,1.0});
SoViewpoint* SoViewpoint1914 = new SoViewpoint();
SoViewpoint1914->setDEF(QString("hanim_pelvis_front_close_viewpoint"));
SoViewpoint1914->setDescription(QString("pelvis front close"));
SoViewpoint1914->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1914->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1913->addChild(*SoViewpoint1914);

SoAnchor* SoAnchor1915 = new SoAnchor();
SoAnchor1915->setDescription(QString("HAnimSite Viewpoint hanim_pelvis_front_close_view"));
SoAnchor1915->setUrl(new QString[]{QString("#hanim_pelvis_front_close_viewpoint")}, 1);
SoLOD* SoLOD1916 = new SoLOD();
SoLOD1916->setForceTransitions(true);
SoLOD1916->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1917 = new SoWorldInfo();
SoWorldInfo1917->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1916->addChildren(*SoWorldInfo1917);

SoShape* SoShape1918 = new SoShape();
SoShape1918->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1916->addChildren(SoShape1918);

SoAnchor1915->addChild(*SoLOD1916);

SoHAnimSite1913->addChild(SoAnchor1915);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1913);

SoHAnimSite* SoHAnimSite1919 = new SoHAnimSite();
SoHAnimSite1919->setDEF(QString("hanim_knees_front_close_view"));
SoHAnimSite1919->X3DNode::setName(QString("knees_front_close_view"));
SoHAnimSite1919->setTranslation(new float[]{0.0,0.4,1.0});
SoViewpoint* SoViewpoint1920 = new SoViewpoint();
SoViewpoint1920->setDEF(QString("hanim_knees_front_close_viewpoint"));
SoViewpoint1920->setDescription(QString("knees front close"));
SoViewpoint1920->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1920->setCenterOfRotation(new float[]{0.0,0.4,0.0});
SoHAnimSite1919->addChild(*SoViewpoint1920);

SoAnchor* SoAnchor1921 = new SoAnchor();
SoAnchor1921->setDescription(QString("HAnimSite Viewpoint hanim_knees_front_close_view"));
SoAnchor1921->setUrl(new QString[]{QString("#hanim_knees_front_close_viewpoint")}, 1);
SoLOD* SoLOD1922 = new SoLOD();
SoLOD1922->setForceTransitions(true);
SoLOD1922->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1923 = new SoWorldInfo();
SoWorldInfo1923->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1922->addChildren(*SoWorldInfo1923);

SoShape* SoShape1924 = new SoShape();
SoShape1924->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1922->addChildren(SoShape1924);

SoAnchor1921->addChild(*SoLOD1922);

SoHAnimSite1919->addChild(SoAnchor1921);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1919);

SoHAnimSite* SoHAnimSite1925 = new SoHAnimSite();
SoHAnimSite1925->setDEF(QString("hanim_feet_front_close_view"));
SoHAnimSite1925->X3DNode::setName(QString("feet_front_close_view"));
SoHAnimSite1925->setTranslation(new float[]{0.0,0.0,1.0});
SoViewpoint* SoViewpoint1926 = new SoViewpoint();
SoViewpoint1926->setDEF(QString("hanim_feet_front_close_viewpoint"));
SoViewpoint1926->setDescription(QString("feet front close"));
SoViewpoint1926->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite1925->addChild(*SoViewpoint1926);

SoAnchor* SoAnchor1927 = new SoAnchor();
SoAnchor1927->setDescription(QString("HAnimSite Viewpoint hanim_feet_front_close_view"));
SoAnchor1927->setUrl(new QString[]{QString("#hanim_feet_front_close_viewpoint")}, 1);
SoLOD* SoLOD1928 = new SoLOD();
SoLOD1928->setForceTransitions(true);
SoLOD1928->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1929 = new SoWorldInfo();
SoWorldInfo1929->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1928->addChildren(*SoWorldInfo1929);

SoShape* SoShape1930 = new SoShape();
SoShape1930->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1928->addChildren(SoShape1930);

SoAnchor1927->addChild(*SoLOD1928);

SoHAnimSite1925->addChild(SoAnchor1927);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1925);

SoHAnimSite* SoHAnimSite1931 = new SoHAnimSite();
SoHAnimSite1931->setDEF(QString("hanim_eye_level_view"));
SoHAnimSite1931->X3DNode::setName(QString("eye_level_view"));
SoHAnimSite1931->setTranslation(new float[]{0.0,1.6332,0.0502});
SoViewpoint* SoViewpoint1932 = new SoViewpoint();
SoViewpoint1932->setDEF(QString("hanim_eye_level_viewpoint"));
SoViewpoint1932->setDescription(QString("eye level looking forward"));
SoViewpoint1932->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1932->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite1931->addChild(*SoViewpoint1932);

SoAnchor* SoAnchor1933 = new SoAnchor();
SoAnchor1933->setDescription(QString("HAnimSite Viewpoint hanim_eye_level_view"));
SoAnchor1933->setUrl(new QString[]{QString("#hanim_eye_level_viewpoint")}, 1);
SoLOD* SoLOD1934 = new SoLOD();
SoLOD1934->setForceTransitions(true);
SoLOD1934->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1935 = new SoWorldInfo();
SoWorldInfo1935->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1934->addChildren(*SoWorldInfo1935);

SoShape* SoShape1936 = new SoShape();
SoShape1936->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1934->addChildren(SoShape1936);

SoAnchor1933->addChild(*SoLOD1934);

SoHAnimSite1931->addChild(SoAnchor1933);

SoHAnimHumanoid43->setViewpoints(*SoHAnimSite1931);

SoHAnimSite* SoHAnimSite1937 = new SoHAnimSite();
SoHAnimSite1937->setUSE(QString("hanim_l_eyeball_site_view"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1937);

SoHAnimSite* SoHAnimSite1938 = new SoHAnimSite();
SoHAnimSite1938->setUSE(QString("hanim_r_eyeball_site_view"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1938);

SoHAnimSite* SoHAnimSite1939 = new SoHAnimSite();
SoHAnimSite1939->setUSE(QString("hanim_l_hand_front_view"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1939);

SoHAnimSite* SoHAnimSite1940 = new SoHAnimSite();
SoHAnimSite1940->setUSE(QString("hanim_r_hand_front_view"));
SoHAnimHumanoid43->setSites(*SoHAnimSite1940);

SoNode29->addChild(*SoHAnimHumanoid43);

SoGroup* SoGroup1941 = new SoGroup();
SoGroup1941->setDEF(QString("StopAnimation"));
SoTimeSensor* SoTimeSensor1942 = new SoTimeSensor();
SoTimeSensor1942->setDEF(QString("StopTimer"));
SoTimeSensor1942->setCycleInterval(5.73);
SoTimeSensor1942->setLoop(true);
SoGroup1941->addChild(*SoTimeSensor1942);

SoPositionInterpolator* SoPositionInterpolator1943 = new SoPositionInterpolator();
SoPositionInterpolator1943->setDEF(QString("Stop_HumanoidRoot_TranslationInterpolator"));
SoPositionInterpolator1943->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator1943->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup1941->addChild(*SoPositionInterpolator1943);

SoOrientationInterpolator* SoOrientationInterpolator1944 = new SoOrientationInterpolator();
SoOrientationInterpolator1944->setDEF(QString("Stop_HumanoidRoot_RotationInterpolator"));
SoOrientationInterpolator1944->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1944->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1944);

SoOrientationInterpolator* SoOrientationInterpolator1945 = new SoOrientationInterpolator();
SoOrientationInterpolator1945->setDEF(QString("Stop_sacroiliac_RotationInterpolator"));
SoOrientationInterpolator1945->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1945->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1945);

SoOrientationInterpolator* SoOrientationInterpolator1946 = new SoOrientationInterpolator();
SoOrientationInterpolator1946->setDEF(QString("Stop_l_hip_RotationInterpolator"));
SoOrientationInterpolator1946->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1946->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1946);

SoOrientationInterpolator* SoOrientationInterpolator1947 = new SoOrientationInterpolator();
SoOrientationInterpolator1947->setDEF(QString("Stop_l_knee_RotationInterpolator"));
SoOrientationInterpolator1947->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1947->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1947);

SoOrientationInterpolator* SoOrientationInterpolator1948 = new SoOrientationInterpolator();
SoOrientationInterpolator1948->setDEF(QString("Stop_l_ankle_RotationInterpolator"));
SoOrientationInterpolator1948->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1948->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1948);

SoOrientationInterpolator* SoOrientationInterpolator1949 = new SoOrientationInterpolator();
SoOrientationInterpolator1949->setDEF(QString("Stop_l_subtalar_RotationInterpolator"));
SoOrientationInterpolator1949->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1949->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1949);

SoOrientationInterpolator* SoOrientationInterpolator1950 = new SoOrientationInterpolator();
SoOrientationInterpolator1950->setDEF(QString("Stop_l_midtarsal_RotationInterpolator"));
SoOrientationInterpolator1950->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1950->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1950);

SoOrientationInterpolator* SoOrientationInterpolator1951 = new SoOrientationInterpolator();
SoOrientationInterpolator1951->setDEF(QString("Stop_l_metatarsal_RotationInterpolator"));
SoOrientationInterpolator1951->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1951->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1951);

SoOrientationInterpolator* SoOrientationInterpolator1952 = new SoOrientationInterpolator();
SoOrientationInterpolator1952->setDEF(QString("Stop_r_hip_RotationInterpolator"));
SoOrientationInterpolator1952->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1952->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1952);

SoOrientationInterpolator* SoOrientationInterpolator1953 = new SoOrientationInterpolator();
SoOrientationInterpolator1953->setDEF(QString("Stop_r_knee_RotationInterpolator"));
SoOrientationInterpolator1953->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1953->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1953);

SoOrientationInterpolator* SoOrientationInterpolator1954 = new SoOrientationInterpolator();
SoOrientationInterpolator1954->setDEF(QString("Stop_r_ankle_RotationInterpolator"));
SoOrientationInterpolator1954->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1954->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1954);

SoOrientationInterpolator* SoOrientationInterpolator1955 = new SoOrientationInterpolator();
SoOrientationInterpolator1955->setDEF(QString("Stop_r_subtalar_RotationInterpolator"));
SoOrientationInterpolator1955->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1955->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1955);

SoOrientationInterpolator* SoOrientationInterpolator1956 = new SoOrientationInterpolator();
SoOrientationInterpolator1956->setDEF(QString("Stop_r_midtarsal_RotationInterpolator"));
SoOrientationInterpolator1956->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1956->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1956);

SoOrientationInterpolator* SoOrientationInterpolator1957 = new SoOrientationInterpolator();
SoOrientationInterpolator1957->setDEF(QString("Stop_r_metatarsal_RotationInterpolator"));
SoOrientationInterpolator1957->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1957->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1957);

SoOrientationInterpolator* SoOrientationInterpolator1958 = new SoOrientationInterpolator();
SoOrientationInterpolator1958->setDEF(QString("Stop_vl5_RotationInterpolator"));
SoOrientationInterpolator1958->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1958->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1958);

SoOrientationInterpolator* SoOrientationInterpolator1959 = new SoOrientationInterpolator();
SoOrientationInterpolator1959->setDEF(QString("Stop_vl4_RotationInterpolator"));
SoOrientationInterpolator1959->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1959->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1959);

SoOrientationInterpolator* SoOrientationInterpolator1960 = new SoOrientationInterpolator();
SoOrientationInterpolator1960->setDEF(QString("Stop_vl3_RotationInterpolator"));
SoOrientationInterpolator1960->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1960->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1960);

SoOrientationInterpolator* SoOrientationInterpolator1961 = new SoOrientationInterpolator();
SoOrientationInterpolator1961->setDEF(QString("Stop_vl2_RotationInterpolator"));
SoOrientationInterpolator1961->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1961->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1961);

SoOrientationInterpolator* SoOrientationInterpolator1962 = new SoOrientationInterpolator();
SoOrientationInterpolator1962->setDEF(QString("Stop_vl1_RotationInterpolator"));
SoOrientationInterpolator1962->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1962->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1962);

SoOrientationInterpolator* SoOrientationInterpolator1963 = new SoOrientationInterpolator();
SoOrientationInterpolator1963->setDEF(QString("Stop_vt12_RotationInterpolator"));
SoOrientationInterpolator1963->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1963->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1963);

SoOrientationInterpolator* SoOrientationInterpolator1964 = new SoOrientationInterpolator();
SoOrientationInterpolator1964->setDEF(QString("Stop_vt11_RotationInterpolator"));
SoOrientationInterpolator1964->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1964->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1964);

SoOrientationInterpolator* SoOrientationInterpolator1965 = new SoOrientationInterpolator();
SoOrientationInterpolator1965->setDEF(QString("Stop_vt10_RotationInterpolator"));
SoOrientationInterpolator1965->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1965->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1965);

SoOrientationInterpolator* SoOrientationInterpolator1966 = new SoOrientationInterpolator();
SoOrientationInterpolator1966->setDEF(QString("Stop_vt9_RotationInterpolator"));
SoOrientationInterpolator1966->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1966->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1966);

SoOrientationInterpolator* SoOrientationInterpolator1967 = new SoOrientationInterpolator();
SoOrientationInterpolator1967->setDEF(QString("Stop_vt8_RotationInterpolator"));
SoOrientationInterpolator1967->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1967->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1967);

SoOrientationInterpolator* SoOrientationInterpolator1968 = new SoOrientationInterpolator();
SoOrientationInterpolator1968->setDEF(QString("Stop_vt7_RotationInterpolator"));
SoOrientationInterpolator1968->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1968->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1968);

SoOrientationInterpolator* SoOrientationInterpolator1969 = new SoOrientationInterpolator();
SoOrientationInterpolator1969->setDEF(QString("Stop_vt6_RotationInterpolator"));
SoOrientationInterpolator1969->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1969->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1969);

SoOrientationInterpolator* SoOrientationInterpolator1970 = new SoOrientationInterpolator();
SoOrientationInterpolator1970->setDEF(QString("Stop_vt5_RotationInterpolator"));
SoOrientationInterpolator1970->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1970->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1970);

SoOrientationInterpolator* SoOrientationInterpolator1971 = new SoOrientationInterpolator();
SoOrientationInterpolator1971->setDEF(QString("Stop_vt4_RotationInterpolator"));
SoOrientationInterpolator1971->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1971->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1971);

SoOrientationInterpolator* SoOrientationInterpolator1972 = new SoOrientationInterpolator();
SoOrientationInterpolator1972->setDEF(QString("Stop_vt3_RotationInterpolator"));
SoOrientationInterpolator1972->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1972->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1972);

SoOrientationInterpolator* SoOrientationInterpolator1973 = new SoOrientationInterpolator();
SoOrientationInterpolator1973->setDEF(QString("Stop_vt2_RotationInterpolator"));
SoOrientationInterpolator1973->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1973->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1973);

SoOrientationInterpolator* SoOrientationInterpolator1974 = new SoOrientationInterpolator();
SoOrientationInterpolator1974->setDEF(QString("Stop_vt1_RotationInterpolator"));
SoOrientationInterpolator1974->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1974->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1974);

SoOrientationInterpolator* SoOrientationInterpolator1975 = new SoOrientationInterpolator();
SoOrientationInterpolator1975->setDEF(QString("Stop_vc7_RotationInterpolator"));
SoOrientationInterpolator1975->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1975->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1975);

SoOrientationInterpolator* SoOrientationInterpolator1976 = new SoOrientationInterpolator();
SoOrientationInterpolator1976->setDEF(QString("Stop_vc6_RotationInterpolator"));
SoOrientationInterpolator1976->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1976->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1976);

SoOrientationInterpolator* SoOrientationInterpolator1977 = new SoOrientationInterpolator();
SoOrientationInterpolator1977->setDEF(QString("Stop_vc5_RotationInterpolator"));
SoOrientationInterpolator1977->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1977->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1977);

SoOrientationInterpolator* SoOrientationInterpolator1978 = new SoOrientationInterpolator();
SoOrientationInterpolator1978->setDEF(QString("Stop_vc4_RotationInterpolator"));
SoOrientationInterpolator1978->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1978->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1978);

SoOrientationInterpolator* SoOrientationInterpolator1979 = new SoOrientationInterpolator();
SoOrientationInterpolator1979->setDEF(QString("Stop_vc3_RotationInterpolator"));
SoOrientationInterpolator1979->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1979->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1979);

SoOrientationInterpolator* SoOrientationInterpolator1980 = new SoOrientationInterpolator();
SoOrientationInterpolator1980->setDEF(QString("Stop_vc2_RotationInterpolator"));
SoOrientationInterpolator1980->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1980->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1980);

SoOrientationInterpolator* SoOrientationInterpolator1981 = new SoOrientationInterpolator();
SoOrientationInterpolator1981->setDEF(QString("Stop_vc1_RotationInterpolator"));
SoOrientationInterpolator1981->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1981->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1981);

SoOrientationInterpolator* SoOrientationInterpolator1982 = new SoOrientationInterpolator();
SoOrientationInterpolator1982->setDEF(QString("Stop_skullbase_RotationInterpolator"));
SoOrientationInterpolator1982->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1982->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1982);

SoOrientationInterpolator* SoOrientationInterpolator1983 = new SoOrientationInterpolator();
SoOrientationInterpolator1983->setDEF(QString("Stop_l_eyeball_joint_RotationInterpolator"));
SoOrientationInterpolator1983->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1983->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1983);

SoOrientationInterpolator* SoOrientationInterpolator1984 = new SoOrientationInterpolator();
SoOrientationInterpolator1984->setDEF(QString("Stop_r_eyeball_joint_RotationInterpolator"));
SoOrientationInterpolator1984->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1984->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1984);

SoOrientationInterpolator* SoOrientationInterpolator1985 = new SoOrientationInterpolator();
SoOrientationInterpolator1985->setDEF(QString("Stop_l_sternoclavicular_RotationInterpolator"));
SoOrientationInterpolator1985->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1985->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1985);

SoOrientationInterpolator* SoOrientationInterpolator1986 = new SoOrientationInterpolator();
SoOrientationInterpolator1986->setDEF(QString("Stop_l_acromioclavicular_RotationInterpolator"));
SoOrientationInterpolator1986->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1986->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1986);

SoOrientationInterpolator* SoOrientationInterpolator1987 = new SoOrientationInterpolator();
SoOrientationInterpolator1987->setDEF(QString("Stop_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator1987->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1987->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1987);

SoOrientationInterpolator* SoOrientationInterpolator1988 = new SoOrientationInterpolator();
SoOrientationInterpolator1988->setDEF(QString("Stop_l_elbow_RotationInterpolator"));
SoOrientationInterpolator1988->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1988->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1988);

SoOrientationInterpolator* SoOrientationInterpolator1989 = new SoOrientationInterpolator();
SoOrientationInterpolator1989->setDEF(QString("Stop_l_wrist_RotationInterpolator"));
SoOrientationInterpolator1989->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1989->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1989);

SoOrientationInterpolator* SoOrientationInterpolator1990 = new SoOrientationInterpolator();
SoOrientationInterpolator1990->setDEF(QString("Stop_l_thumb1_RotationInterpolator"));
SoOrientationInterpolator1990->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1990->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1990);

SoOrientationInterpolator* SoOrientationInterpolator1991 = new SoOrientationInterpolator();
SoOrientationInterpolator1991->setDEF(QString("Stop_l_thumb2_RotationInterpolator"));
SoOrientationInterpolator1991->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1991->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1991);

SoOrientationInterpolator* SoOrientationInterpolator1992 = new SoOrientationInterpolator();
SoOrientationInterpolator1992->setDEF(QString("Stop_l_thumb3_RotationInterpolator"));
SoOrientationInterpolator1992->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1992->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1992);

SoOrientationInterpolator* SoOrientationInterpolator1993 = new SoOrientationInterpolator();
SoOrientationInterpolator1993->setDEF(QString("Stop_l_index0_RotationInterpolator"));
SoOrientationInterpolator1993->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1993->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1993);

SoOrientationInterpolator* SoOrientationInterpolator1994 = new SoOrientationInterpolator();
SoOrientationInterpolator1994->setDEF(QString("Stop_l_index1_RotationInterpolator"));
SoOrientationInterpolator1994->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1994->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1994);

SoOrientationInterpolator* SoOrientationInterpolator1995 = new SoOrientationInterpolator();
SoOrientationInterpolator1995->setDEF(QString("Stop_l_index2_RotationInterpolator"));
SoOrientationInterpolator1995->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1995->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1995);

SoOrientationInterpolator* SoOrientationInterpolator1996 = new SoOrientationInterpolator();
SoOrientationInterpolator1996->setDEF(QString("Stop_l_index3_RotationInterpolator"));
SoOrientationInterpolator1996->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1996->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1996);

SoOrientationInterpolator* SoOrientationInterpolator1997 = new SoOrientationInterpolator();
SoOrientationInterpolator1997->setDEF(QString("Stop_l_middle0_RotationInterpolator"));
SoOrientationInterpolator1997->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1997->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1997);

SoOrientationInterpolator* SoOrientationInterpolator1998 = new SoOrientationInterpolator();
SoOrientationInterpolator1998->setDEF(QString("Stop_l_middle1_RotationInterpolator"));
SoOrientationInterpolator1998->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1998->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1998);

SoOrientationInterpolator* SoOrientationInterpolator1999 = new SoOrientationInterpolator();
SoOrientationInterpolator1999->setDEF(QString("Stop_l_middle2_RotationInterpolator"));
SoOrientationInterpolator1999->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1999->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator1999);

SoOrientationInterpolator* SoOrientationInterpolator2000 = new SoOrientationInterpolator();
SoOrientationInterpolator2000->setDEF(QString("Stop_l_middle3_RotationInterpolator"));
SoOrientationInterpolator2000->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2000->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2000);

SoOrientationInterpolator* SoOrientationInterpolator2001 = new SoOrientationInterpolator();
SoOrientationInterpolator2001->setDEF(QString("Stop_l_ring0_RotationInterpolator"));
SoOrientationInterpolator2001->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2001->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2001);

SoOrientationInterpolator* SoOrientationInterpolator2002 = new SoOrientationInterpolator();
SoOrientationInterpolator2002->setDEF(QString("Stop_l_ring1_RotationInterpolator"));
SoOrientationInterpolator2002->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2002->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2002);

SoOrientationInterpolator* SoOrientationInterpolator2003 = new SoOrientationInterpolator();
SoOrientationInterpolator2003->setDEF(QString("Stop_l_ring2_RotationInterpolator"));
SoOrientationInterpolator2003->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2003->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2003);

SoOrientationInterpolator* SoOrientationInterpolator2004 = new SoOrientationInterpolator();
SoOrientationInterpolator2004->setDEF(QString("Stop_l_ring3_RotationInterpolator"));
SoOrientationInterpolator2004->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2004->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2004);

SoOrientationInterpolator* SoOrientationInterpolator2005 = new SoOrientationInterpolator();
SoOrientationInterpolator2005->setDEF(QString("Stop_l_pinky0_RotationInterpolator"));
SoOrientationInterpolator2005->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2005->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2005);

SoOrientationInterpolator* SoOrientationInterpolator2006 = new SoOrientationInterpolator();
SoOrientationInterpolator2006->setDEF(QString("Stop_l_pinky1_RotationInterpolator"));
SoOrientationInterpolator2006->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2006->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2006);

SoOrientationInterpolator* SoOrientationInterpolator2007 = new SoOrientationInterpolator();
SoOrientationInterpolator2007->setDEF(QString("Stop_l_pinky2_RotationInterpolator"));
SoOrientationInterpolator2007->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2007->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2007);

SoOrientationInterpolator* SoOrientationInterpolator2008 = new SoOrientationInterpolator();
SoOrientationInterpolator2008->setDEF(QString("Stop_l_pinky3_RotationInterpolator"));
SoOrientationInterpolator2008->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2008->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2008);

SoOrientationInterpolator* SoOrientationInterpolator2009 = new SoOrientationInterpolator();
SoOrientationInterpolator2009->setDEF(QString("Stop_r_sternoclavicular_RotationInterpolator"));
SoOrientationInterpolator2009->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2009->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2009);

SoOrientationInterpolator* SoOrientationInterpolator2010 = new SoOrientationInterpolator();
SoOrientationInterpolator2010->setDEF(QString("Stop_r_acromioclavicular_RotationInterpolator"));
SoOrientationInterpolator2010->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2010->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2010);

SoOrientationInterpolator* SoOrientationInterpolator2011 = new SoOrientationInterpolator();
SoOrientationInterpolator2011->setDEF(QString("Stop_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2011->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2011->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2011);

SoOrientationInterpolator* SoOrientationInterpolator2012 = new SoOrientationInterpolator();
SoOrientationInterpolator2012->setDEF(QString("Stop_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2012->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2012->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2012);

SoOrientationInterpolator* SoOrientationInterpolator2013 = new SoOrientationInterpolator();
SoOrientationInterpolator2013->setDEF(QString("Stop_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2013->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2013->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2013);

SoOrientationInterpolator* SoOrientationInterpolator2014 = new SoOrientationInterpolator();
SoOrientationInterpolator2014->setDEF(QString("Stop_r_thumb1_RotationInterpolator"));
SoOrientationInterpolator2014->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2014->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2014);

SoOrientationInterpolator* SoOrientationInterpolator2015 = new SoOrientationInterpolator();
SoOrientationInterpolator2015->setDEF(QString("Stop_r_thumb2_RotationInterpolator"));
SoOrientationInterpolator2015->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2015->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2015);

SoOrientationInterpolator* SoOrientationInterpolator2016 = new SoOrientationInterpolator();
SoOrientationInterpolator2016->setDEF(QString("Stop_r_thumb3_RotationInterpolator"));
SoOrientationInterpolator2016->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2016->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2016);

SoOrientationInterpolator* SoOrientationInterpolator2017 = new SoOrientationInterpolator();
SoOrientationInterpolator2017->setDEF(QString("Stop_r_index0_RotationInterpolator"));
SoOrientationInterpolator2017->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2017->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2017);

SoOrientationInterpolator* SoOrientationInterpolator2018 = new SoOrientationInterpolator();
SoOrientationInterpolator2018->setDEF(QString("Stop_r_index1_RotationInterpolator"));
SoOrientationInterpolator2018->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2018->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2018);

SoOrientationInterpolator* SoOrientationInterpolator2019 = new SoOrientationInterpolator();
SoOrientationInterpolator2019->setDEF(QString("Stop_r_index2_RotationInterpolator"));
SoOrientationInterpolator2019->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2019->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2019);

SoOrientationInterpolator* SoOrientationInterpolator2020 = new SoOrientationInterpolator();
SoOrientationInterpolator2020->setDEF(QString("Stop_r_index3_RotationInterpolator"));
SoOrientationInterpolator2020->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2020->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2020);

SoOrientationInterpolator* SoOrientationInterpolator2021 = new SoOrientationInterpolator();
SoOrientationInterpolator2021->setDEF(QString("Stop_r_middle0_RotationInterpolator"));
SoOrientationInterpolator2021->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2021->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2021);

SoOrientationInterpolator* SoOrientationInterpolator2022 = new SoOrientationInterpolator();
SoOrientationInterpolator2022->setDEF(QString("Stop_r_middle1_RotationInterpolator"));
SoOrientationInterpolator2022->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2022->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2022);

SoOrientationInterpolator* SoOrientationInterpolator2023 = new SoOrientationInterpolator();
SoOrientationInterpolator2023->setDEF(QString("Stop_r_middle2_RotationInterpolator"));
SoOrientationInterpolator2023->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2023->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2023);

SoOrientationInterpolator* SoOrientationInterpolator2024 = new SoOrientationInterpolator();
SoOrientationInterpolator2024->setDEF(QString("Stop_r_middle3_RotationInterpolator"));
SoOrientationInterpolator2024->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2024->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2024);

SoOrientationInterpolator* SoOrientationInterpolator2025 = new SoOrientationInterpolator();
SoOrientationInterpolator2025->setDEF(QString("Stop_r_ring0_RotationInterpolator"));
SoOrientationInterpolator2025->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2025->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2025);

SoOrientationInterpolator* SoOrientationInterpolator2026 = new SoOrientationInterpolator();
SoOrientationInterpolator2026->setDEF(QString("Stop_r_ring1_RotationInterpolator"));
SoOrientationInterpolator2026->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2026->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2026);

SoOrientationInterpolator* SoOrientationInterpolator2027 = new SoOrientationInterpolator();
SoOrientationInterpolator2027->setDEF(QString("Stop_r_ring2_RotationInterpolator"));
SoOrientationInterpolator2027->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2027->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2027);

SoOrientationInterpolator* SoOrientationInterpolator2028 = new SoOrientationInterpolator();
SoOrientationInterpolator2028->setDEF(QString("Stop_r_ring3_RotationInterpolator"));
SoOrientationInterpolator2028->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2028->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2028);

SoOrientationInterpolator* SoOrientationInterpolator2029 = new SoOrientationInterpolator();
SoOrientationInterpolator2029->setDEF(QString("Stop_r_pinky0_RotationInterpolator"));
SoOrientationInterpolator2029->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2029->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2029);

SoOrientationInterpolator* SoOrientationInterpolator2030 = new SoOrientationInterpolator();
SoOrientationInterpolator2030->setDEF(QString("Stop_r_pinky1_RotationInterpolator"));
SoOrientationInterpolator2030->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2030->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2030);

SoOrientationInterpolator* SoOrientationInterpolator2031 = new SoOrientationInterpolator();
SoOrientationInterpolator2031->setDEF(QString("Stop_r_pinky2_RotationInterpolator"));
SoOrientationInterpolator2031->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2031->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2031);

SoOrientationInterpolator* SoOrientationInterpolator2032 = new SoOrientationInterpolator();
SoOrientationInterpolator2032->setDEF(QString("Stop_r_pinky3_RotationInterpolator"));
SoOrientationInterpolator2032->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2032->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1941->addChild(*SoOrientationInterpolator2032);

SoNode29->addChild(*SoGroup1941);

SoGroup* SoGroup2033 = new SoGroup();
SoGroup2033->setDEF(QString("StandAnimation"));
SoTimeSensor* SoTimeSensor2034 = new SoTimeSensor();
SoTimeSensor2034->setDEF(QString("StandTimer"));
SoTimeSensor2034->setCycleInterval(5.73);
SoTimeSensor2034->setLoop(true);
SoGroup2033->addChild(*SoTimeSensor2034);

SoOrientationInterpolator* SoOrientationInterpolator2035 = new SoOrientationInterpolator();
SoOrientationInterpolator2035->setDEF(QString("Stand_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2035->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2035->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.015,1.0,0.0,0.0,0.17,-1.0,0.0,0.0,0.025,1.0,0.0,0.0,0.01,1.0,0.0,0.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2035);

SoOrientationInterpolator* SoOrientationInterpolator2036 = new SoOrientationInterpolator();
SoOrientationInterpolator2036->setDEF(QString("Stand_r_ankle_RotationInterpolator"));
SoOrientationInterpolator2036->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2036->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2036);

SoOrientationInterpolator* SoOrientationInterpolator2037 = new SoOrientationInterpolator();
SoOrientationInterpolator2037->setDEF(QString("Stand_r_knee_RotationInterpolator"));
SoOrientationInterpolator2037->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2037->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2037);

SoOrientationInterpolator* SoOrientationInterpolator2038 = new SoOrientationInterpolator();
SoOrientationInterpolator2038->setDEF(QString("Stand_r_hip_RotationInterpolator"));
SoOrientationInterpolator2038->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2038->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2038);

SoOrientationInterpolator* SoOrientationInterpolator2039 = new SoOrientationInterpolator();
SoOrientationInterpolator2039->setDEF(QString("Stand_l_ankle_RotationInterpolator"));
SoOrientationInterpolator2039->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2039->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2039);

SoOrientationInterpolator* SoOrientationInterpolator2040 = new SoOrientationInterpolator();
SoOrientationInterpolator2040->setDEF(QString("Stand_l_knee_RotationInterpolator"));
SoOrientationInterpolator2040->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2040->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2040);

SoOrientationInterpolator* SoOrientationInterpolator2041 = new SoOrientationInterpolator();
SoOrientationInterpolator2041->setDEF(QString("Stand_l_hip_RotationInterpolator"));
SoOrientationInterpolator2041->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2041->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2041);

SoOrientationInterpolator* SoOrientationInterpolator2042 = new SoOrientationInterpolator();
SoOrientationInterpolator2042->setDEF(QString("Stand_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2042->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2042->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.25,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2042);

SoOrientationInterpolator* SoOrientationInterpolator2043 = new SoOrientationInterpolator();
SoOrientationInterpolator2043->setDEF(QString("Stand_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2043->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2043->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2043);

SoOrientationInterpolator* SoOrientationInterpolator2044 = new SoOrientationInterpolator();
SoOrientationInterpolator2044->setDEF(QString("Stand_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2044->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2044->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2044);

SoOrientationInterpolator* SoOrientationInterpolator2045 = new SoOrientationInterpolator();
SoOrientationInterpolator2045->setDEF(QString("Stand_l_wrist_RotationInterpolator"));
SoOrientationInterpolator2045->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2045->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2045);

SoOrientationInterpolator* SoOrientationInterpolator2046 = new SoOrientationInterpolator();
SoOrientationInterpolator2046->setDEF(QString("Stand_l_elbow_RotationInterpolator"));
SoOrientationInterpolator2046->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2046->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2046);

SoOrientationInterpolator* SoOrientationInterpolator2047 = new SoOrientationInterpolator();
SoOrientationInterpolator2047->setDEF(QString("Stand_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator2047->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2047->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2047);

SoOrientationInterpolator* SoOrientationInterpolator2048 = new SoOrientationInterpolator();
SoOrientationInterpolator2048->setDEF(QString("Stand_head_RotationInterpolator"));
SoOrientationInterpolator2048->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2048->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2048);

SoOrientationInterpolator* SoOrientationInterpolator2049 = new SoOrientationInterpolator();
SoOrientationInterpolator2049->setDEF(QString("Stand_neck_RotationInterpolator"));
SoOrientationInterpolator2049->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2049->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2049);

SoOrientationInterpolator* SoOrientationInterpolator2050 = new SoOrientationInterpolator();
SoOrientationInterpolator2050->setDEF(QString("Stand_l_eyeball_RotationInterpolator"));
SoOrientationInterpolator2050->setKey(new float[]{0.0,0.4,0.7,1.0}, 4);
SoOrientationInterpolator2050->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0}, 16);
SoGroup2033->addChild(*SoOrientationInterpolator2050);

SoOrientationInterpolator* SoOrientationInterpolator2051 = new SoOrientationInterpolator();
SoOrientationInterpolator2051->setDEF(QString("Stand_r_eyeball_RotationInterpolator"));
SoOrientationInterpolator2051->setKey(new float[]{0.0,0.4,0.7,1.0}, 4);
SoOrientationInterpolator2051->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0}, 16);
SoGroup2033->addChild(*SoOrientationInterpolator2051);

SoOrientationInterpolator* SoOrientationInterpolator2052 = new SoOrientationInterpolator();
SoOrientationInterpolator2052->setDEF(QString("Stand_lower_body_RotationInterpolator"));
SoOrientationInterpolator2052->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2052->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2052);

SoOrientationInterpolator* SoOrientationInterpolator2053 = new SoOrientationInterpolator();
SoOrientationInterpolator2053->setDEF(QString("Stand_upper_body_RotationInterpolator"));
SoOrientationInterpolator2053->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2053->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2053);

SoOrientationInterpolator* SoOrientationInterpolator2054 = new SoOrientationInterpolator();
SoOrientationInterpolator2054->setDEF(QString("Stand_whole_body_RotationInterpolator"));
SoOrientationInterpolator2054->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2054->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2033->addChild(*SoOrientationInterpolator2054);

SoPositionInterpolator* SoPositionInterpolator2055 = new SoPositionInterpolator();
SoPositionInterpolator2055->setDEF(QString("Stand_whole_body_TranslationInterpolator"));
SoPositionInterpolator2055->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator2055->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup2033->addChild(*SoPositionInterpolator2055);

SoOrientationInterpolator* SoOrientationInterpolator2056 = new SoOrientationInterpolator();
SoOrientationInterpolator2056->setDEF(QString("Stand_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2056->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2056->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2056);

SoOrientationInterpolator* SoOrientationInterpolator2057 = new SoOrientationInterpolator();
SoOrientationInterpolator2057->setDEF(QString("Stand_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2057->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2057->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2057);

SoOrientationInterpolator* SoOrientationInterpolator2058 = new SoOrientationInterpolator();
SoOrientationInterpolator2058->setDEF(QString("Stand_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2058->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2058->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2058);

SoOrientationInterpolator* SoOrientationInterpolator2059 = new SoOrientationInterpolator();
SoOrientationInterpolator2059->setDEF(QString("Stand_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2059->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2059->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2059);

SoOrientationInterpolator* SoOrientationInterpolator2060 = new SoOrientationInterpolator();
SoOrientationInterpolator2060->setDEF(QString("Stand_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2060->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2060->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2060);

SoOrientationInterpolator* SoOrientationInterpolator2061 = new SoOrientationInterpolator();
SoOrientationInterpolator2061->setDEF(QString("Stand_vl5_YawInterpolator"));
SoOrientationInterpolator2061->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2061->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2033->addChild(*SoOrientationInterpolator2061);

SoOrientationInterpolator* SoOrientationInterpolator2062 = new SoOrientationInterpolator();
SoOrientationInterpolator2062->setDEF(QString("Stand_vc6_YawInterpolator"));
SoOrientationInterpolator2062->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2062->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 28);
SoGroup2033->addChild(*SoOrientationInterpolator2062);

SoOrientationInterpolator* SoOrientationInterpolator2063 = new SoOrientationInterpolator();
SoOrientationInterpolator2063->setDEF(QString("Stand_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2063->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2063->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2063);

SoOrientationInterpolator* SoOrientationInterpolator2064 = new SoOrientationInterpolator();
SoOrientationInterpolator2064->setDEF(QString("Stand_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2064->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2064->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.1,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2064);

SoOrientationInterpolator* SoOrientationInterpolator2065 = new SoOrientationInterpolator();
SoOrientationInterpolator2065->setDEF(QString("Stand_r_index1_RollInterpolator"));
SoOrientationInterpolator2065->setKey(new float[]{0.0,0.2,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator2065->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.3,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2065);

SoOrientationInterpolator* SoOrientationInterpolator2066 = new SoOrientationInterpolator();
SoOrientationInterpolator2066->setDEF(QString("Stand_r_index2_RollInterpolator"));
SoOrientationInterpolator2066->setKey(new float[]{0.0,0.2,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator2066->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.4,0.0,0.0,1.0,0.32,0.0,0.0,1.0,0.25,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2066);

SoOrientationInterpolator* SoOrientationInterpolator2067 = new SoOrientationInterpolator();
SoOrientationInterpolator2067->setDEF(QString("Stand_r_index3_RollInterpolator"));
SoOrientationInterpolator2067->setKey(new float[]{0.0,0.2,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator2067->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.3,0.0,0.0,1.0,0.35,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0}, 24);
SoGroup2033->addChild(*SoOrientationInterpolator2067);

SoNode29->addChild(*SoGroup2033);

SoGroup* SoGroup2068 = new SoGroup();
SoGroup2068->setDEF(QString("PitchesAnimation"));
SoTimeSensor* SoTimeSensor2069 = new SoTimeSensor();
SoTimeSensor2069->setDEF(QString("PitchTimer"));
SoTimeSensor2069->setCycleInterval(5.73);
SoTimeSensor2069->setLoop(true);
SoGroup2068->addChild(*SoTimeSensor2069);

SoOrientationInterpolator* SoOrientationInterpolator2070 = new SoOrientationInterpolator();
SoOrientationInterpolator2070->setDEF(QString("Pitch_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2070->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2070->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2070);

SoOrientationInterpolator* SoOrientationInterpolator2071 = new SoOrientationInterpolator();
SoOrientationInterpolator2071->setDEF(QString("Pitches_r_ankle_RotationInterpolator"));
SoOrientationInterpolator2071->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2071->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2068->addChild(*SoOrientationInterpolator2071);

SoOrientationInterpolator* SoOrientationInterpolator2072 = new SoOrientationInterpolator();
SoOrientationInterpolator2072->setDEF(QString("Pitches_r_knee_RotationInterpolator"));
SoOrientationInterpolator2072->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2072->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2072);

SoOrientationInterpolator* SoOrientationInterpolator2073 = new SoOrientationInterpolator();
SoOrientationInterpolator2073->setDEF(QString("Pitches_r_hip_RotationInterpolator"));
SoOrientationInterpolator2073->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2073->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2068->addChild(*SoOrientationInterpolator2073);

SoOrientationInterpolator* SoOrientationInterpolator2074 = new SoOrientationInterpolator();
SoOrientationInterpolator2074->setDEF(QString("Pitches_l_ankle_RotationInterpolator"));
SoOrientationInterpolator2074->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2074->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2068->addChild(*SoOrientationInterpolator2074);

SoOrientationInterpolator* SoOrientationInterpolator2075 = new SoOrientationInterpolator();
SoOrientationInterpolator2075->setDEF(QString("Pitches_l_knee_RotationInterpolator"));
SoOrientationInterpolator2075->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2075->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2075);

SoOrientationInterpolator* SoOrientationInterpolator2076 = new SoOrientationInterpolator();
SoOrientationInterpolator2076->setDEF(QString("Pitches_l_hip_RotationInterpolator"));
SoOrientationInterpolator2076->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2076->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2068->addChild(*SoOrientationInterpolator2076);

SoOrientationInterpolator* SoOrientationInterpolator2077 = new SoOrientationInterpolator();
SoOrientationInterpolator2077->setDEF(QString("Pitches_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2077->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2077->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2077);

SoOrientationInterpolator* SoOrientationInterpolator2078 = new SoOrientationInterpolator();
SoOrientationInterpolator2078->setDEF(QString("Pitches_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2078->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2078->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2078);

SoOrientationInterpolator* SoOrientationInterpolator2079 = new SoOrientationInterpolator();
SoOrientationInterpolator2079->setDEF(QString("Pitches_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2079->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2079->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2068->addChild(*SoOrientationInterpolator2079);

SoOrientationInterpolator* SoOrientationInterpolator2080 = new SoOrientationInterpolator();
SoOrientationInterpolator2080->setDEF(QString("Pitches_l_wrist_RotationInterpolator"));
SoOrientationInterpolator2080->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2080->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2080);

SoOrientationInterpolator* SoOrientationInterpolator2081 = new SoOrientationInterpolator();
SoOrientationInterpolator2081->setDEF(QString("Pitches_l_elbow_RotationInterpolator"));
SoOrientationInterpolator2081->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2081->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2081);

SoOrientationInterpolator* SoOrientationInterpolator2082 = new SoOrientationInterpolator();
SoOrientationInterpolator2082->setDEF(QString("Pitches_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator2082->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2082->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2068->addChild(*SoOrientationInterpolator2082);

SoOrientationInterpolator* SoOrientationInterpolator2083 = new SoOrientationInterpolator();
SoOrientationInterpolator2083->setDEF(QString("Pitches_head_RotationInterpolator"));
SoOrientationInterpolator2083->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2083->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2083);

SoOrientationInterpolator* SoOrientationInterpolator2084 = new SoOrientationInterpolator();
SoOrientationInterpolator2084->setDEF(QString("Pitches_neck_RotationInterpolator"));
SoOrientationInterpolator2084->setKey(new float[]{0.0,0.25,0.55,1.0}, 4);
SoOrientationInterpolator2084->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.55,-1.0,0.0,0.0,1.05,0.0,0.0,1.0,0.0}, 16);
SoGroup2068->addChild(*SoOrientationInterpolator2084);

SoOrientationInterpolator* SoOrientationInterpolator2085 = new SoOrientationInterpolator();
SoOrientationInterpolator2085->setDEF(QString("Pitches_lower_body_RotationInterpolator"));
SoOrientationInterpolator2085->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2085->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2085);

SoOrientationInterpolator* SoOrientationInterpolator2086 = new SoOrientationInterpolator();
SoOrientationInterpolator2086->setDEF(QString("Pitches_upper_body_RotationInterpolator"));
SoOrientationInterpolator2086->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2086->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2086);

SoOrientationInterpolator* SoOrientationInterpolator2087 = new SoOrientationInterpolator();
SoOrientationInterpolator2087->setDEF(QString("Pitches_whole_body_RotationInterpolator"));
SoOrientationInterpolator2087->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2087->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2068->addChild(*SoOrientationInterpolator2087);

SoPositionInterpolator* SoPositionInterpolator2088 = new SoPositionInterpolator();
SoPositionInterpolator2088->setDEF(QString("Pitches_whole_body_TranslationInterpolator"));
SoPositionInterpolator2088->setKey(new float[]{0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}, 9);
SoPositionInterpolator2088->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.15,0.0,0.0,-0.7,0.0,0.0,-0.15,0.0,0.0,0.0,0.0,0.0,-0.15,0.0,0.0,-0.7,0.0,0.0,-0.15,0.0,0.0,0.0,0.0}, 27);
SoGroup2068->addChild(*SoPositionInterpolator2088);

SoOrientationInterpolator* SoOrientationInterpolator2089 = new SoOrientationInterpolator();
SoOrientationInterpolator2089->setDEF(QString("Pitch_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2089->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2089->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2089);

SoOrientationInterpolator* SoOrientationInterpolator2090 = new SoOrientationInterpolator();
SoOrientationInterpolator2090->setDEF(QString("Pitch_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2090->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2090->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2090);

SoOrientationInterpolator* SoOrientationInterpolator2091 = new SoOrientationInterpolator();
SoOrientationInterpolator2091->setDEF(QString("Pitch_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2091->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2091->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2091);

SoOrientationInterpolator* SoOrientationInterpolator2092 = new SoOrientationInterpolator();
SoOrientationInterpolator2092->setDEF(QString("Pitch_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2092->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2092->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2092);

SoOrientationInterpolator* SoOrientationInterpolator2093 = new SoOrientationInterpolator();
SoOrientationInterpolator2093->setDEF(QString("Pitch_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2093->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2093->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2093);

SoOrientationInterpolator* SoOrientationInterpolator2094 = new SoOrientationInterpolator();
SoOrientationInterpolator2094->setDEF(QString("Pitch_vl5_YawInterpolator"));
SoOrientationInterpolator2094->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2094->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2068->addChild(*SoOrientationInterpolator2094);

SoOrientationInterpolator* SoOrientationInterpolator2095 = new SoOrientationInterpolator();
SoOrientationInterpolator2095->setDEF(QString("Pitch_vc6_YawInterpolator"));
SoOrientationInterpolator2095->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2095->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2068->addChild(*SoOrientationInterpolator2095);

SoOrientationInterpolator* SoOrientationInterpolator2096 = new SoOrientationInterpolator();
SoOrientationInterpolator2096->setDEF(QString("Pitch_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2096->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2096->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2096);

SoOrientationInterpolator* SoOrientationInterpolator2097 = new SoOrientationInterpolator();
SoOrientationInterpolator2097->setDEF(QString("Pitch_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2097->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2097->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2068->addChild(*SoOrientationInterpolator2097);

SoNode29->addChild(*SoGroup2068);

SoGroup* SoGroup2098 = new SoGroup();
SoGroup2098->setDEF(QString("YawsAnimation"));
SoTimeSensor* SoTimeSensor2099 = new SoTimeSensor();
SoTimeSensor2099->setDEF(QString("YawTimer"));
SoTimeSensor2099->setCycleInterval(5.73);
SoTimeSensor2099->setLoop(true);
SoGroup2098->addChild(*SoTimeSensor2099);

SoOrientationInterpolator* SoOrientationInterpolator2100 = new SoOrientationInterpolator();
SoOrientationInterpolator2100->setDEF(QString("Yaw_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2100->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2100->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2100);

SoOrientationInterpolator* SoOrientationInterpolator2101 = new SoOrientationInterpolator();
SoOrientationInterpolator2101->setDEF(QString("Yaws_r_ankle_RotationInterpolator"));
SoOrientationInterpolator2101->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2101->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2098->addChild(*SoOrientationInterpolator2101);

SoOrientationInterpolator* SoOrientationInterpolator2102 = new SoOrientationInterpolator();
SoOrientationInterpolator2102->setDEF(QString("Yaws_r_knee_RotationInterpolator"));
SoOrientationInterpolator2102->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2102->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2098->addChild(*SoOrientationInterpolator2102);

SoOrientationInterpolator* SoOrientationInterpolator2103 = new SoOrientationInterpolator();
SoOrientationInterpolator2103->setDEF(QString("Yaws_r_hip_RotationInterpolator"));
SoOrientationInterpolator2103->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2103->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2103);

SoOrientationInterpolator* SoOrientationInterpolator2104 = new SoOrientationInterpolator();
SoOrientationInterpolator2104->setDEF(QString("Yaws_l_ankle_RotationInterpolator"));
SoOrientationInterpolator2104->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2104->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2098->addChild(*SoOrientationInterpolator2104);

SoOrientationInterpolator* SoOrientationInterpolator2105 = new SoOrientationInterpolator();
SoOrientationInterpolator2105->setDEF(QString("Yaws_l_knee_RotationInterpolator"));
SoOrientationInterpolator2105->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2105->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2098->addChild(*SoOrientationInterpolator2105);

SoOrientationInterpolator* SoOrientationInterpolator2106 = new SoOrientationInterpolator();
SoOrientationInterpolator2106->setDEF(QString("Yaws_l_hip_RotationInterpolator"));
SoOrientationInterpolator2106->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2106->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2106);

SoOrientationInterpolator* SoOrientationInterpolator2107 = new SoOrientationInterpolator();
SoOrientationInterpolator2107->setDEF(QString("Yaws_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2107->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2107->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2107);

SoOrientationInterpolator* SoOrientationInterpolator2108 = new SoOrientationInterpolator();
SoOrientationInterpolator2108->setDEF(QString("Yaws_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2108->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2108->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2108);

SoOrientationInterpolator* SoOrientationInterpolator2109 = new SoOrientationInterpolator();
SoOrientationInterpolator2109->setDEF(QString("Yaws_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2109->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2109->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2109);

SoOrientationInterpolator* SoOrientationInterpolator2110 = new SoOrientationInterpolator();
SoOrientationInterpolator2110->setDEF(QString("Yaws_l_wrist_RotationInterpolator"));
SoOrientationInterpolator2110->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2110->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2110);

SoOrientationInterpolator* SoOrientationInterpolator2111 = new SoOrientationInterpolator();
SoOrientationInterpolator2111->setDEF(QString("Yaws_l_elbow_RotationInterpolator"));
SoOrientationInterpolator2111->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2111->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2111);

SoOrientationInterpolator* SoOrientationInterpolator2112 = new SoOrientationInterpolator();
SoOrientationInterpolator2112->setDEF(QString("Yaws_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator2112->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2112->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2112);

SoOrientationInterpolator* SoOrientationInterpolator2113 = new SoOrientationInterpolator();
SoOrientationInterpolator2113->setDEF(QString("Yaws_head_RotationInterpolator"));
SoOrientationInterpolator2113->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2113->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2113);

SoOrientationInterpolator* SoOrientationInterpolator2114 = new SoOrientationInterpolator();
SoOrientationInterpolator2114->setDEF(QString("Yaws_neck_RotationInterpolator"));
SoOrientationInterpolator2114->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2114->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2098->addChild(*SoOrientationInterpolator2114);

SoOrientationInterpolator* SoOrientationInterpolator2115 = new SoOrientationInterpolator();
SoOrientationInterpolator2115->setDEF(QString("Yaws_upper_body_RotationInterpolator"));
SoOrientationInterpolator2115->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2115->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.5,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2098->addChild(*SoOrientationInterpolator2115);

SoOrientationInterpolator* SoOrientationInterpolator2116 = new SoOrientationInterpolator();
SoOrientationInterpolator2116->setDEF(QString("Yaws_lower_body_RotationInterpolator"));
SoOrientationInterpolator2116->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2116->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2116);

SoOrientationInterpolator* SoOrientationInterpolator2117 = new SoOrientationInterpolator();
SoOrientationInterpolator2117->setDEF(QString("Yaws_whole_body_RotationInterpolator"));
SoOrientationInterpolator2117->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2117->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2098->addChild(*SoOrientationInterpolator2117);

SoPositionInterpolator* SoPositionInterpolator2118 = new SoPositionInterpolator();
SoPositionInterpolator2118->setDEF(QString("Yaws_whole_body_TranslationInterpolator"));
SoPositionInterpolator2118->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator2118->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup2098->addChild(*SoPositionInterpolator2118);

SoOrientationInterpolator* SoOrientationInterpolator2119 = new SoOrientationInterpolator();
SoOrientationInterpolator2119->setDEF(QString("Yaw_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2119->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2119->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2119);

SoOrientationInterpolator* SoOrientationInterpolator2120 = new SoOrientationInterpolator();
SoOrientationInterpolator2120->setDEF(QString("Yaw_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2120->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2120->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2120);

SoOrientationInterpolator* SoOrientationInterpolator2121 = new SoOrientationInterpolator();
SoOrientationInterpolator2121->setDEF(QString("Yaw_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2121->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2121->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2121);

SoOrientationInterpolator* SoOrientationInterpolator2122 = new SoOrientationInterpolator();
SoOrientationInterpolator2122->setDEF(QString("Yaw_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2122->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2122->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2122);

SoOrientationInterpolator* SoOrientationInterpolator2123 = new SoOrientationInterpolator();
SoOrientationInterpolator2123->setDEF(QString("Yaw_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2123->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2123->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2123);

SoOrientationInterpolator* SoOrientationInterpolator2124 = new SoOrientationInterpolator();
SoOrientationInterpolator2124->setDEF(QString("Yaw_vl5_YawInterpolator"));
SoOrientationInterpolator2124->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2124->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2098->addChild(*SoOrientationInterpolator2124);

SoOrientationInterpolator* SoOrientationInterpolator2125 = new SoOrientationInterpolator();
SoOrientationInterpolator2125->setDEF(QString("Yaw_vc6_YawInterpolator"));
SoOrientationInterpolator2125->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2125->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2098->addChild(*SoOrientationInterpolator2125);

SoOrientationInterpolator* SoOrientationInterpolator2126 = new SoOrientationInterpolator();
SoOrientationInterpolator2126->setDEF(QString("Yaw_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2126->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2126->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2126);

SoOrientationInterpolator* SoOrientationInterpolator2127 = new SoOrientationInterpolator();
SoOrientationInterpolator2127->setDEF(QString("Yaw_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2127->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2127->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2098->addChild(*SoOrientationInterpolator2127);

SoNode29->addChild(*SoGroup2098);

SoGroup* SoGroup2128 = new SoGroup();
SoGroup2128->setDEF(QString("RollsAnimation"));
SoTimeSensor* SoTimeSensor2129 = new SoTimeSensor();
SoTimeSensor2129->setDEF(QString("RollTimer"));
SoTimeSensor2129->setCycleInterval(5.73);
SoTimeSensor2129->setLoop(true);
SoGroup2128->addChild(*SoTimeSensor2129);

SoOrientationInterpolator* SoOrientationInterpolator2130 = new SoOrientationInterpolator();
SoOrientationInterpolator2130->setDEF(QString("Roll_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2130->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2130->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2130);

SoOrientationInterpolator* SoOrientationInterpolator2131 = new SoOrientationInterpolator();
SoOrientationInterpolator2131->setDEF(QString("Rolls_r_ankle_RotationInterpolator"));
SoOrientationInterpolator2131->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2131->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2131);

SoOrientationInterpolator* SoOrientationInterpolator2132 = new SoOrientationInterpolator();
SoOrientationInterpolator2132->setDEF(QString("Rolls_r_knee_RotationInterpolator"));
SoOrientationInterpolator2132->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2132->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2132);

SoOrientationInterpolator* SoOrientationInterpolator2133 = new SoOrientationInterpolator();
SoOrientationInterpolator2133->setDEF(QString("Rolls_r_hip_RotationInterpolator"));
SoOrientationInterpolator2133->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2133->setKeyValue(new float[]{0.0,0.0,-1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2133);

SoOrientationInterpolator* SoOrientationInterpolator2134 = new SoOrientationInterpolator();
SoOrientationInterpolator2134->setDEF(QString("Rolls_l_ankle_RotationInterpolator"));
SoOrientationInterpolator2134->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2134->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2134);

SoOrientationInterpolator* SoOrientationInterpolator2135 = new SoOrientationInterpolator();
SoOrientationInterpolator2135->setDEF(QString("Rolls_l_knee_RotationInterpolator"));
SoOrientationInterpolator2135->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2135->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2135);

SoOrientationInterpolator* SoOrientationInterpolator2136 = new SoOrientationInterpolator();
SoOrientationInterpolator2136->setDEF(QString("Rolls_l_hip_RotationInterpolator"));
SoOrientationInterpolator2136->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2136->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2136);

SoOrientationInterpolator* SoOrientationInterpolator2137 = new SoOrientationInterpolator();
SoOrientationInterpolator2137->setDEF(QString("Rolls_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2137->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2137->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2137);

SoOrientationInterpolator* SoOrientationInterpolator2138 = new SoOrientationInterpolator();
SoOrientationInterpolator2138->setDEF(QString("Rolls_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2138->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2138->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2138);

SoOrientationInterpolator* SoOrientationInterpolator2139 = new SoOrientationInterpolator();
SoOrientationInterpolator2139->setDEF(QString("Rolls_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2139->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2139->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,-1.0,3.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2139);

SoOrientationInterpolator* SoOrientationInterpolator2140 = new SoOrientationInterpolator();
SoOrientationInterpolator2140->setDEF(QString("Rolls_l_wrist_RotationInterpolator"));
SoOrientationInterpolator2140->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2140->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2140);

SoOrientationInterpolator* SoOrientationInterpolator2141 = new SoOrientationInterpolator();
SoOrientationInterpolator2141->setDEF(QString("Rolls_l_elbow_RotationInterpolator"));
SoOrientationInterpolator2141->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2141->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2141);

SoOrientationInterpolator* SoOrientationInterpolator2142 = new SoOrientationInterpolator();
SoOrientationInterpolator2142->setDEF(QString("Rolls_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator2142->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2142->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,3.0,0.0,0.0,1.0,1.5,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2142);

SoOrientationInterpolator* SoOrientationInterpolator2143 = new SoOrientationInterpolator();
SoOrientationInterpolator2143->setDEF(QString("Rolls_head_RotationInterpolator"));
SoOrientationInterpolator2143->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2143->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2143);

SoOrientationInterpolator* SoOrientationInterpolator2144 = new SoOrientationInterpolator();
SoOrientationInterpolator2144->setDEF(QString("Rolls_neck_RotationInterpolator"));
SoOrientationInterpolator2144->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2144->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.25,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.25,0.0,0.0,1.0,0.0}, 20);
SoGroup2128->addChild(*SoOrientationInterpolator2144);

SoOrientationInterpolator* SoOrientationInterpolator2145 = new SoOrientationInterpolator();
SoOrientationInterpolator2145->setDEF(QString("Rolls_lower_body_RotationInterpolator"));
SoOrientationInterpolator2145->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2145->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2145);

SoOrientationInterpolator* SoOrientationInterpolator2146 = new SoOrientationInterpolator();
SoOrientationInterpolator2146->setDEF(QString("Rolls_upper_body_RotationInterpolator"));
SoOrientationInterpolator2146->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2146->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2146);

SoOrientationInterpolator* SoOrientationInterpolator2147 = new SoOrientationInterpolator();
SoOrientationInterpolator2147->setDEF(QString("Rolls_whole_body_RotationInterpolator"));
SoOrientationInterpolator2147->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2147->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2128->addChild(*SoOrientationInterpolator2147);

SoPositionInterpolator* SoPositionInterpolator2148 = new SoPositionInterpolator();
SoPositionInterpolator2148->setDEF(QString("Rolls_whole_body_TranslationInterpolator"));
SoPositionInterpolator2148->setKey(new float[]{0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}, 9);
SoPositionInterpolator2148->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.25,0.0,0.0,-0.8,0.0,0.0,-0.25,0.0,0.0,0.0,0.0,0.0,-0.25,0.0,0.0,-0.8,0.0,0.0,-0.25,0.0,0.0,0.0,0.0}, 27);
SoGroup2128->addChild(*SoPositionInterpolator2148);

SoOrientationInterpolator* SoOrientationInterpolator2149 = new SoOrientationInterpolator();
SoOrientationInterpolator2149->setDEF(QString("Roll_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2149->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2149->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2149);

SoOrientationInterpolator* SoOrientationInterpolator2150 = new SoOrientationInterpolator();
SoOrientationInterpolator2150->setDEF(QString("Roll_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2150->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2150->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2150);

SoOrientationInterpolator* SoOrientationInterpolator2151 = new SoOrientationInterpolator();
SoOrientationInterpolator2151->setDEF(QString("Roll_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2151->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2151->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2151);

SoOrientationInterpolator* SoOrientationInterpolator2152 = new SoOrientationInterpolator();
SoOrientationInterpolator2152->setDEF(QString("Roll_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2152->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2152->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2152);

SoOrientationInterpolator* SoOrientationInterpolator2153 = new SoOrientationInterpolator();
SoOrientationInterpolator2153->setDEF(QString("Roll_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2153->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2153->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2153);

SoOrientationInterpolator* SoOrientationInterpolator2154 = new SoOrientationInterpolator();
SoOrientationInterpolator2154->setDEF(QString("Roll_vl5_YawInterpolator"));
SoOrientationInterpolator2154->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2154->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2128->addChild(*SoOrientationInterpolator2154);

SoOrientationInterpolator* SoOrientationInterpolator2155 = new SoOrientationInterpolator();
SoOrientationInterpolator2155->setDEF(QString("Roll_vc6_YawInterpolator"));
SoOrientationInterpolator2155->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2155->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2128->addChild(*SoOrientationInterpolator2155);

SoOrientationInterpolator* SoOrientationInterpolator2156 = new SoOrientationInterpolator();
SoOrientationInterpolator2156->setDEF(QString("Roll_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2156->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2156->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2156);

SoOrientationInterpolator* SoOrientationInterpolator2157 = new SoOrientationInterpolator();
SoOrientationInterpolator2157->setDEF(QString("Roll_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2157->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2157->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2128->addChild(*SoOrientationInterpolator2157);

SoNode29->addChild(*SoGroup2128);

SoGroup* SoGroup2158 = new SoGroup();
SoGroup2158->setDEF(QString("WalkAnimation"));
SoTimeSensor* SoTimeSensor2159 = new SoTimeSensor();
SoTimeSensor2159->setDEF(QString("WalkTimer"));
SoTimeSensor2159->setCycleInterval(1.73);
SoTimeSensor2159->setLoop(true);
SoGroup2158->addChild(*SoTimeSensor2159);

SoOrientationInterpolator* SoOrientationInterpolator2160 = new SoOrientationInterpolator();
SoOrientationInterpolator2160->setDEF(QString("Walk_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2160->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2160->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2160);

SoOrientationInterpolator* SoOrientationInterpolator2161 = new SoOrientationInterpolator();
SoOrientationInterpolator2161->setDEF(QString("Walk_r_ankle_RotationInterpolator"));
SoOrientationInterpolator2161->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator2161->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.2612,1.0,0.0,0.0,0.1268,-1.0,0.0,0.0,0.01793,-1.0,0.0,0.0,0.05824,-1.0,0.0,0.0,0.2398,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.3322,0.0,0.0,1.0,0.0}, 44);
SoGroup2158->addChild(*SoOrientationInterpolator2161);

SoOrientationInterpolator* SoOrientationInterpolator2162 = new SoOrientationInterpolator();
SoOrientationInterpolator2162->setDEF(QString("Walk_r_knee_RotationInterpolator"));
SoOrientationInterpolator2162->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator2162->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
SoGroup2158->addChild(*SoOrientationInterpolator2162);

SoOrientationInterpolator* SoOrientationInterpolator2163 = new SoOrientationInterpolator();
SoOrientationInterpolator2163->setDEF(QString("Walk_r_hip_RotationInterpolator"));
SoOrientationInterpolator2163->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator2163->setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 40);
SoGroup2158->addChild(*SoOrientationInterpolator2163);

SoOrientationInterpolator* SoOrientationInterpolator2164 = new SoOrientationInterpolator();
SoOrientationInterpolator2164->setDEF(QString("Walk_l_ankle_RotationInterpolator"));
SoOrientationInterpolator2164->setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
SoOrientationInterpolator2164->setKeyValue(new float[]{-1.0,0.0,0.0,0.06714,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.1222,-1.0,0.0,0.0,0.06714}, 28);
SoGroup2158->addChild(*SoOrientationInterpolator2164);

SoOrientationInterpolator* SoOrientationInterpolator2165 = new SoOrientationInterpolator();
SoOrientationInterpolator2165->setDEF(QString("Walk_l_knee_RotationInterpolator"));
SoOrientationInterpolator2165->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator2165->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoGroup2158->addChild(*SoOrientationInterpolator2165);

SoOrientationInterpolator* SoOrientationInterpolator2166 = new SoOrientationInterpolator();
SoOrientationInterpolator2166->setDEF(QString("Walk_l_hip_RotationInterpolator"));
SoOrientationInterpolator2166->setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator2166->setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 32);
SoGroup2158->addChild(*SoOrientationInterpolator2166);

SoOrientationInterpolator* SoOrientationInterpolator2167 = new SoOrientationInterpolator();
SoOrientationInterpolator2167->setDEF(QString("Walk_lower_body_RotationInterpolator"));
SoOrientationInterpolator2167->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2167->setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
SoGroup2158->addChild(*SoOrientationInterpolator2167);

SoOrientationInterpolator* SoOrientationInterpolator2168 = new SoOrientationInterpolator();
SoOrientationInterpolator2168->setDEF(QString("Walk_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2168->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator2168->setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
SoGroup2158->addChild(*SoOrientationInterpolator2168);

SoOrientationInterpolator* SoOrientationInterpolator2169 = new SoOrientationInterpolator();
SoOrientationInterpolator2169->setDEF(QString("Walk_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2169->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator2169->setKeyValue(new float[]{-1.0,0.0,0.0,0.411508,-1.0,0.0,0.0,0.0925011,-1.0,0.0,0.0,0.572568,-1.0,0.0,0.0,0.411508}, 16);
SoGroup2158->addChild(*SoOrientationInterpolator2169);

SoOrientationInterpolator* SoOrientationInterpolator2170 = new SoOrientationInterpolator();
SoOrientationInterpolator2170->setDEF(QString("Walk_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2170->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator2170->setKeyValue(new float[]{-1.0,0.0,0.0,0.09346,1.0,0.0,0.0,0.3197,-1.0,0.0,0.0,0.1564,-1.0,0.0,0.0,0.09346}, 16);
SoGroup2158->addChild(*SoOrientationInterpolator2170);

SoOrientationInterpolator* SoOrientationInterpolator2171 = new SoOrientationInterpolator();
SoOrientationInterpolator2171->setDEF(QString("Walk_l_wrist_RotationInterpolator"));
SoOrientationInterpolator2171->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator2171->setKeyValue(new float[]{0.0,-1.0,0.0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0.0,-1.0,0.0,0.461076}, 16);
SoGroup2158->addChild(*SoOrientationInterpolator2171);

SoOrientationInterpolator* SoOrientationInterpolator2172 = new SoOrientationInterpolator();
SoOrientationInterpolator2172->setDEF(QString("Walk_l_elbow_RotationInterpolator"));
SoOrientationInterpolator2172->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator2172->setKeyValue(new float[]{-1.0,0.0,0.0,0.0659878,-1.0,0.0,0.0,0.488383,-1.0,0.0,0.0,0.0177536,-1.0,0.0,0.0,0.0659878}, 16);
SoGroup2158->addChild(*SoOrientationInterpolator2172);

SoOrientationInterpolator* SoOrientationInterpolator2173 = new SoOrientationInterpolator();
SoOrientationInterpolator2173->setDEF(QString("Walk_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator2173->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator2173->setKeyValue(new float[]{1.0,0.0,0.0,0.1189,-1.0,0.0,0.0,0.1861,1.0,0.0,0.0,0.3357,1.0,0.0,0.0,0.1189}, 16);
SoGroup2158->addChild(*SoOrientationInterpolator2173);

SoOrientationInterpolator* SoOrientationInterpolator2174 = new SoOrientationInterpolator();
SoOrientationInterpolator2174->setDEF(QString("Walk_head_RotationInterpolator"));
SoOrientationInterpolator2174->setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
SoOrientationInterpolator2174->setKeyValue(new float[]{0.0,-1.0,0.0,0.08642,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.04391,0.0,-1.0,0.0,0.03119,0.0,-1.0,0.0,0.07936,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.08642}, 40);
SoGroup2158->addChild(*SoOrientationInterpolator2174);

SoOrientationInterpolator* SoOrientationInterpolator2175 = new SoOrientationInterpolator();
SoOrientationInterpolator2175->setDEF(QString("Walk_neck_RotationInterpolator"));
SoOrientationInterpolator2175->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator2175->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup2158->addChild(*SoOrientationInterpolator2175);

SoOrientationInterpolator* SoOrientationInterpolator2176 = new SoOrientationInterpolator();
SoOrientationInterpolator2176->setDEF(QString("Walk_upper_body_RotationInterpolator"));
SoOrientationInterpolator2176->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator2176->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2176);

SoOrientationInterpolator* SoOrientationInterpolator2177 = new SoOrientationInterpolator();
SoOrientationInterpolator2177->setDEF(QString("Walk_whole_body_RotationInterpolator"));
SoOrientationInterpolator2177->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator2177->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup2158->addChild(*SoOrientationInterpolator2177);

SoPositionInterpolator* SoPositionInterpolator2178 = new SoPositionInterpolator();
SoPositionInterpolator2178->setDEF(QString("Walk_whole_body_TranslationInterpolator"));
SoPositionInterpolator2178->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator2178->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoGroup2158->addChild(*SoPositionInterpolator2178);

SoOrientationInterpolator* SoOrientationInterpolator2179 = new SoOrientationInterpolator();
SoOrientationInterpolator2179->setDEF(QString("Walk_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2179->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2179->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2179);

SoOrientationInterpolator* SoOrientationInterpolator2180 = new SoOrientationInterpolator();
SoOrientationInterpolator2180->setDEF(QString("Walk_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2180->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2180->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2180);

SoOrientationInterpolator* SoOrientationInterpolator2181 = new SoOrientationInterpolator();
SoOrientationInterpolator2181->setDEF(QString("Walk_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2181->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2181->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2181);

SoOrientationInterpolator* SoOrientationInterpolator2182 = new SoOrientationInterpolator();
SoOrientationInterpolator2182->setDEF(QString("Walk_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2182->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2182->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2182);

SoOrientationInterpolator* SoOrientationInterpolator2183 = new SoOrientationInterpolator();
SoOrientationInterpolator2183->setDEF(QString("Walk_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2183->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2183->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2183);

SoOrientationInterpolator* SoOrientationInterpolator2184 = new SoOrientationInterpolator();
SoOrientationInterpolator2184->setDEF(QString("Walk_vl5_YawInterpolator"));
SoOrientationInterpolator2184->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2184->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2158->addChild(*SoOrientationInterpolator2184);

SoOrientationInterpolator* SoOrientationInterpolator2185 = new SoOrientationInterpolator();
SoOrientationInterpolator2185->setDEF(QString("Walk_vc6_YawInterpolator"));
SoOrientationInterpolator2185->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2185->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2158->addChild(*SoOrientationInterpolator2185);

SoOrientationInterpolator* SoOrientationInterpolator2186 = new SoOrientationInterpolator();
SoOrientationInterpolator2186->setDEF(QString("Walk_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2186->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2186->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2186);

SoOrientationInterpolator* SoOrientationInterpolator2187 = new SoOrientationInterpolator();
SoOrientationInterpolator2187->setDEF(QString("Walk_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2187->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2187->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.5,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2158->addChild(*SoOrientationInterpolator2187);

SoNode29->addChild(*SoGroup2158);

SoGroup* SoGroup2188 = new SoGroup();
SoGroup2188->setDEF(QString("RunAnimation"));
SoTimeSensor* SoTimeSensor2189 = new SoTimeSensor();
SoTimeSensor2189->setDEF(QString("RunTimer"));
SoTimeSensor2189->setCycleInterval(0.9);
SoTimeSensor2189->setLoop(true);
SoGroup2188->addChild(*SoTimeSensor2189);

SoOrientationInterpolator* SoOrientationInterpolator2190 = new SoOrientationInterpolator();
SoOrientationInterpolator2190->setDEF(QString("Run_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2190->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2190->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2190);

SoOrientationInterpolator* SoOrientationInterpolator2191 = new SoOrientationInterpolator();
SoOrientationInterpolator2191->setDEF(QString("Run_l_hip_RotationInterpolator_Run"));
SoOrientationInterpolator2191->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator2191->setKeyValue(new float[]{-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2191);

SoOrientationInterpolator* SoOrientationInterpolator2192 = new SoOrientationInterpolator();
SoOrientationInterpolator2192->setDEF(QString("Run_l_knee_RotationInterpolator_Run"));
SoOrientationInterpolator2192->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator2192->setKeyValue(new float[]{1.0,0.0,0.0,1.01,1.0,0.0,0.0,0.426,1.0,0.0,0.0,0.705,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.01}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2192);

SoOrientationInterpolator* SoOrientationInterpolator2193 = new SoOrientationInterpolator();
SoOrientationInterpolator2193->setDEF(QString("Run_l_ankle_RotationInterpolator_Run"));
SoOrientationInterpolator2193->setKey(new float[]{0.0,0.22,0.3,0.4,1.0}, 5);
SoOrientationInterpolator2193->setKeyValue(new float[]{1.0,0.0,0.0,0.0374,-1.0,0.0,0.0,0.1037,-1.0,0.0,0.0,0.4328,1.0,0.0,0.0,0.1929,1.0,0.0,0.0,0.03574}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2193);

SoOrientationInterpolator* SoOrientationInterpolator2194 = new SoOrientationInterpolator();
SoOrientationInterpolator2194->setDEF(QString("Run_r_hip_RotationInterpolator_Run"));
SoOrientationInterpolator2194->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator2194->setKeyValue(new float[]{0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2194);

SoOrientationInterpolator* SoOrientationInterpolator2195 = new SoOrientationInterpolator();
SoOrientationInterpolator2195->setDEF(QString("Run_r_knee_RotationInterpolator_Run"));
SoOrientationInterpolator2195->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator2195->setKeyValue(new float[]{1.0,0.0,0.0,0.705,1.0,0.0,0.0,2.179,1.0,0.0,0.0,1.01,1.0,0.0,0.0,0.426,1.0,0.0,0.0,0.705}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2195);

SoOrientationInterpolator* SoOrientationInterpolator2196 = new SoOrientationInterpolator();
SoOrientationInterpolator2196->setDEF(QString("Run_r_ankle_RotationInterpolator_Run"));
SoOrientationInterpolator2196->setKey(new float[]{0.0,0.4,0.71,0.8,0.82,1.0}, 6);
SoOrientationInterpolator2196->setKeyValue(new float[]{1.0,0.0,0.0,0.2323,-1.0,0.0,0.0,0.07843,-1.0,0.0,0.0,0.32,-1.0,0.0,0.0,0.374,-1.0,0.0,0.0,0.3478,1.0,0.0,0.0,0.2323}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2196);

SoOrientationInterpolator* SoOrientationInterpolator2197 = new SoOrientationInterpolator();
SoOrientationInterpolator2197->setDEF(QString("Run_l_shoulder_RotationInterpolator_Run"));
SoOrientationInterpolator2197->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator2197->setKeyValue(new float[]{0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2197);

SoOrientationInterpolator* SoOrientationInterpolator2198 = new SoOrientationInterpolator();
SoOrientationInterpolator2198->setDEF(QString("Run_l_elbow_RotationInterpolator_Run"));
SoOrientationInterpolator2198->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator2198->setKeyValue(new float[]{-1.0,0.0,0.0,1.85,-0.99,-0.19,0.18,1.35,-1.0,0.0,0.0,0.975,-0.99,-0.09,-0.02,1.55,-1.0,0.0,0.0,1.85}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2198);

SoOrientationInterpolator* SoOrientationInterpolator2199 = new SoOrientationInterpolator();
SoOrientationInterpolator2199->setDEF(QString("Run_l_wrist_RotationInterpolator_Run"));
SoOrientationInterpolator2199->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2199->setKeyValue(new float[]{-0.25,-1.0,0.08,0.14,0.25,1.0,0.08,0.14,0.0,0.0,1.0,0.0,-0.25,1.0,0.08,-0.14,-0.25,1.0,0.08,0.14}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2199);

SoOrientationInterpolator* SoOrientationInterpolator2200 = new SoOrientationInterpolator();
SoOrientationInterpolator2200->setDEF(QString("Run_r_shoulder_RotationInterpolator_Run"));
SoOrientationInterpolator2200->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator2200->setKeyValue(new float[]{-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2200);

SoOrientationInterpolator* SoOrientationInterpolator2201 = new SoOrientationInterpolator();
SoOrientationInterpolator2201->setDEF(QString("Run_r_elbow_RotationInterpolator_Run"));
SoOrientationInterpolator2201->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator2201->setKeyValue(new float[]{-1.0,0.0,0.0,0.975,-0.99,0.09,0.02,1.55,-1.0,0.0,0.0,1.85,-0.99,0.19,-0.18,1.35,-1.0,0.0,0.0,0.975}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2201);

SoOrientationInterpolator* SoOrientationInterpolator2202 = new SoOrientationInterpolator();
SoOrientationInterpolator2202->setDEF(QString("Run_r_wrist_RotationInterpolator_Run"));
SoOrientationInterpolator2202->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator2202->setKeyValue(new float[]{-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273}, 8);
SoGroup2188->addChild(*SoOrientationInterpolator2202);

SoOrientationInterpolator* SoOrientationInterpolator2203 = new SoOrientationInterpolator();
SoOrientationInterpolator2203->setDEF(QString("Run_lower_body_RotationInterpolator_Run"));
SoOrientationInterpolator2203->setKey(new float[]{0.0,0.2182,0.4909,0.7455,1.0}, 5);
SoOrientationInterpolator2203->setKeyValue(new float[]{0.0,-1.0,0.0,0.125,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.125,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.125}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2203);

SoOrientationInterpolator* SoOrientationInterpolator2204 = new SoOrientationInterpolator();
SoOrientationInterpolator2204->setDEF(QString("Run_head_RotationInterpolator_Run"));
SoOrientationInterpolator2204->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator2204->setKeyValue(new float[]{1.0,0.0,0.0,0.08,1.0,0.0,0.0,0.12,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.3,1.0,0.0,0.0,0.08}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2204);

SoOrientationInterpolator* SoOrientationInterpolator2205 = new SoOrientationInterpolator();
SoOrientationInterpolator2205->setDEF(QString("Run_neck_RotationInterpolator_Run"));
SoOrientationInterpolator2205->setKey(new float[]{0.0,0.2545,0.4909,0.7091,1.0}, 5);
SoOrientationInterpolator2205->setKeyValue(new float[]{0.7,0.0,0.0,0.4,-0.7,-0.7,0.0,0.4,0.0,0.0,0.0,0.4,-0.7,0.7,0.0,0.4,0.7,0.0,0.0,0.4}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2205);

SoOrientationInterpolator* SoOrientationInterpolator2206 = new SoOrientationInterpolator();
SoOrientationInterpolator2206->setDEF(QString("Run_upper_body_RotationInterpolator_Run"));
SoOrientationInterpolator2206->setKey(new float[]{0.0,0.2545,0.4909,0.7636,1.0}, 5);
SoOrientationInterpolator2206->setKeyValue(new float[]{0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2206);

SoOrientationInterpolator* SoOrientationInterpolator2207 = new SoOrientationInterpolator();
SoOrientationInterpolator2207->setDEF(QString("Run_whole_body_RotationInterpolator_Run"));
SoOrientationInterpolator2207->setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
SoOrientationInterpolator2207->setKeyValue(new float[]{1.0,0.0,0.0,0.06,1.0,0.0,0.0,0.167,1.0,0.0,0.0,0.06,1.0,0.0,0.0,0.168,1.0,0.0,0.0,0.06}, 20);
SoGroup2188->addChild(*SoOrientationInterpolator2207);

SoPositionInterpolator* SoPositionInterpolator2208 = new SoPositionInterpolator();
SoPositionInterpolator2208->setDEF(QString("Run_whole_body_TranslationInterpolator_Run"));
SoPositionInterpolator2208->setKey(new float[]{0.0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1.0}, 9);
SoPositionInterpolator2208->setKeyValue(new float[]{0.0,-0.01,0.0,0.0,-0.037,0.0,0.0,-0.049,0.0,0.0,-0.037,0.0,0.0,-0.01,0.0,0.0,-0.037,0.0,0.0,-0.049,0.0,0.0,-0.037,0.0,0.0,-0.01,0.0}, 27);
SoGroup2188->addChild(*SoPositionInterpolator2208);

SoOrientationInterpolator* SoOrientationInterpolator2209 = new SoOrientationInterpolator();
SoOrientationInterpolator2209->setDEF(QString("Run_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2209->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2209->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2209);

SoOrientationInterpolator* SoOrientationInterpolator2210 = new SoOrientationInterpolator();
SoOrientationInterpolator2210->setDEF(QString("Run_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2210->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2210->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2210);

SoOrientationInterpolator* SoOrientationInterpolator2211 = new SoOrientationInterpolator();
SoOrientationInterpolator2211->setDEF(QString("Run_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2211->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2211->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2211);

SoOrientationInterpolator* SoOrientationInterpolator2212 = new SoOrientationInterpolator();
SoOrientationInterpolator2212->setDEF(QString("Run_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2212->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2212->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2212);

SoOrientationInterpolator* SoOrientationInterpolator2213 = new SoOrientationInterpolator();
SoOrientationInterpolator2213->setDEF(QString("Run_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2213->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2213->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2213);

SoOrientationInterpolator* SoOrientationInterpolator2214 = new SoOrientationInterpolator();
SoOrientationInterpolator2214->setDEF(QString("Run_vl5_YawInterpolator"));
SoOrientationInterpolator2214->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2214->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2188->addChild(*SoOrientationInterpolator2214);

SoOrientationInterpolator* SoOrientationInterpolator2215 = new SoOrientationInterpolator();
SoOrientationInterpolator2215->setDEF(QString("Run_vc6_YawInterpolator"));
SoOrientationInterpolator2215->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2215->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2188->addChild(*SoOrientationInterpolator2215);

SoOrientationInterpolator* SoOrientationInterpolator2216 = new SoOrientationInterpolator();
SoOrientationInterpolator2216->setDEF(QString("Run_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2216->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2216->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2216);

SoOrientationInterpolator* SoOrientationInterpolator2217 = new SoOrientationInterpolator();
SoOrientationInterpolator2217->setDEF(QString("Run_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2217->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2217->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.27,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2188->addChild(*SoOrientationInterpolator2217);

SoNode29->addChild(*SoGroup2188);

SoGroup* SoGroup2218 = new SoGroup();
SoGroup2218->setDEF(QString("JumpAnimation"));
SoTimeSensor* SoTimeSensor2219 = new SoTimeSensor();
SoTimeSensor2219->setDEF(QString("JumpTimer"));
SoTimeSensor2219->setCycleInterval(3.73);
SoTimeSensor2219->setLoop(true);
SoGroup2218->addChild(*SoTimeSensor2219);

SoOrientationInterpolator* SoOrientationInterpolator2220 = new SoOrientationInterpolator();
SoOrientationInterpolator2220->setDEF(QString("Jump_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2220->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2220->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2220);

SoOrientationInterpolator* SoOrientationInterpolator2221 = new SoOrientationInterpolator();
SoOrientationInterpolator2221->setDEF(QString("Jump_r_ankle_RotationInterpolator"));
SoOrientationInterpolator2221->setKey(new float[]{0.0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1.0}, 14);
SoOrientationInterpolator2221->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.6735,-1.0,0.0,0.0,0.3527,-1.0,0.0,0.0,0.3038,-1.0,0.0,0.0,0.07964,1.0,0.0,0.0,1.3,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.3001,-1.0,0.0,0.0,0.2087,-1.0,0.0,0.0,0.3756,-1.0,0.0,0.0,0.3279,-1.0,0.0,0.0,0.1193,0.0,0.0,1.0,0.0}, 56);
SoGroup2218->addChild(*SoOrientationInterpolator2221);

SoOrientationInterpolator* SoOrientationInterpolator2222 = new SoOrientationInterpolator();
SoOrientationInterpolator2222->setDEF(QString("Jump_r_knee_RotationInterpolator"));
SoOrientationInterpolator2222->setKey(new float[]{0.0,0.2,0.25,0.3,0.64,0.76,0.88,1.0}, 8);
SoOrientationInterpolator2222->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.5,1.0,0.0,0.0,1.7,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.9507,1.0,0.0,0.0,0.5845,1.0,0.0,0.0,0.9054,0.0,0.0,1.0,0.0}, 32);
SoGroup2218->addChild(*SoOrientationInterpolator2222);

SoOrientationInterpolator* SoOrientationInterpolator2223 = new SoOrientationInterpolator();
SoOrientationInterpolator2223->setDEF(QString("Jump_r_hip_RotationInterpolator"));
SoOrientationInterpolator2223->setKey(new float[]{0.0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1.0}, 11);
SoOrientationInterpolator2223->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.63,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,1.55,-1.0,0.0,0.0,0.8943,-1.0,0.0,0.0,0.3698,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.4963,-1.0,0.0,0.0,0.3829,-1.0,0.0,0.0,0.5169,0.0,0.0,1.0,0.0}, 44);
SoGroup2218->addChild(*SoOrientationInterpolator2223);

SoOrientationInterpolator* SoOrientationInterpolator2224 = new SoOrientationInterpolator();
SoOrientationInterpolator2224->setDEF(QString("Jump_l_ankle_RotationInterpolator"));
SoOrientationInterpolator2224->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1.0}, 14);
SoOrientationInterpolator2224->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.625,-1.0,0.0,0.0,0.3364,-1.0,0.0,0.0,0.2742,-1.0,0.0,0.0,0.05078,1.0,0.0,0.0,0.2833,1.0,0.0,0.0,0.6667,1.0,0.0,0.0,0.2833,-1.0,0.0,0.0,0.2108,-1.0,0.0,0.0,0.375,-1.0,0.0,0.0,0.3146,-1.0,0.0,0.0,0.1174,0.0,0.0,1.0,0.0}, 56);
SoGroup2218->addChild(*SoOrientationInterpolator2224);

SoOrientationInterpolator* SoOrientationInterpolator2225 = new SoOrientationInterpolator();
SoOrientationInterpolator2225->setDEF(QString("Jump_l_knee_RotationInterpolator"));
SoOrientationInterpolator2225->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,0.88,1.0}, 8);
SoOrientationInterpolator2225->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,2.047,1.0,0.0,0.0,2.047,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.566,1.0,0.0,0.0,0.5913,1.0,0.0,0.0,0.9235,0.0,0.0,1.0,0.0}, 32);
SoGroup2218->addChild(*SoOrientationInterpolator2225);

SoOrientationInterpolator* SoOrientationInterpolator2226 = new SoOrientationInterpolator();
SoOrientationInterpolator2226->setDEF(QString("Jump_l_hip_RotationInterpolator"));
SoOrientationInterpolator2226->setKey(new float[]{0.0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1.0}, 11);
SoOrientationInterpolator2226->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.349,1.0,0.0,0.0,4.615,-1.0,0.0,0.0,0.9136,-1.0,0.0,0.0,0.3614,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.7869,-1.0,0.0,0.0,0.3918,-1.0,0.0,0.0,0.5433,0.0,0.0,1.0,0.0}, 44);
SoGroup2218->addChild(*SoOrientationInterpolator2226);

SoOrientationInterpolator* SoOrientationInterpolator2227 = new SoOrientationInterpolator();
SoOrientationInterpolator2227->setDEF(QString("Jump_lower_body_RotationInterpolator"));
SoOrientationInterpolator2227->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator2227->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1892,1.0,0.0,0.0,0.1892,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2227);

SoOrientationInterpolator* SoOrientationInterpolator2228 = new SoOrientationInterpolator();
SoOrientationInterpolator2228->setDEF(QString("Jump_r_wrist_RotationInterpolator"));
SoOrientationInterpolator2228->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator2228->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2228);

SoOrientationInterpolator* SoOrientationInterpolator2229 = new SoOrientationInterpolator();
SoOrientationInterpolator2229->setDEF(QString("Jump_r_elbow_RotationInterpolator"));
SoOrientationInterpolator2229->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator2229->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2229);

SoOrientationInterpolator* SoOrientationInterpolator2230 = new SoOrientationInterpolator();
SoOrientationInterpolator2230->setDEF(QString("Jump_r_shoulder_RotationInterpolator"));
SoOrientationInterpolator2230->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator2230->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2230);

SoOrientationInterpolator* SoOrientationInterpolator2231 = new SoOrientationInterpolator();
SoOrientationInterpolator2231->setDEF(QString("Jump_l_wrist_RotationInterpolator"));
SoOrientationInterpolator2231->setKey(new float[]{0.0,0.48,0.52,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator2231->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0.0,-1.0,0.0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0.0,0.0,1.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2231);

SoOrientationInterpolator* SoOrientationInterpolator2232 = new SoOrientationInterpolator();
SoOrientationInterpolator2232->setDEF(QString("Jump_l_elbow_RotationInterpolator"));
SoOrientationInterpolator2232->setKey(new float[]{0.0,0.28,0.32,0.58,0.72,1.0}, 6);
SoOrientationInterpolator2232->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,1.13,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,1.7,-1.0,0.0,0.0,0.4,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2232);

SoOrientationInterpolator* SoOrientationInterpolator2233 = new SoOrientationInterpolator();
SoOrientationInterpolator2233->setDEF(QString("Jump_l_shoulder_RotationInterpolator"));
SoOrientationInterpolator2233->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,0.88,1.0}, 7);
SoOrientationInterpolator2233->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1.0,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0.0,0.0,1.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2233);

SoOrientationInterpolator* SoOrientationInterpolator2234 = new SoOrientationInterpolator();
SoOrientationInterpolator2234->setDEF(QString("Jump_head_RotationInterpolator"));
SoOrientationInterpolator2234->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator2234->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.5989,-1.0,0.0,0.0,0.3216,1.0,0.0,0.0,0.06503,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2234);

SoOrientationInterpolator* SoOrientationInterpolator2235 = new SoOrientationInterpolator();
SoOrientationInterpolator2235->setDEF(QString("Jump_neck_RotationInterpolator"));
SoOrientationInterpolator2235->setKey(new float[]{0.0,0.28,0.32,0.48,0.76,1.0}, 6);
SoOrientationInterpolator2235->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1942,-1.0,0.0,0.0,0.1942,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.2284,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2235);

SoOrientationInterpolator* SoOrientationInterpolator2236 = new SoOrientationInterpolator();
SoOrientationInterpolator2236->setDEF(QString("Jump_upper_body_RotationInterpolator"));
SoOrientationInterpolator2236->setKey(new float[]{0.0,0.22,0.28,0.34,0.71,0.88,1.0}, 7);
SoOrientationInterpolator2236->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.05,1.0,0.0,0.0,1.051,-1.0,0.0,0.0,0.257,1.0,0.0,0.0,0.2171,1.0,0.0,0.0,0.3465,0.0,0.0,1.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2236);

SoOrientationInterpolator* SoOrientationInterpolator2237 = new SoOrientationInterpolator();
SoOrientationInterpolator2237->setDEF(QString("Jump_whole_body_RotationInterpolator"));
SoOrientationInterpolator2237->setKey(new float[]{0.0,0.28,0.32,0.48,0.64,0.76,1.0}, 7);
SoOrientationInterpolator2237->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3273,1.0,0.0,0.0,0.3273,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2237);

SoPositionInterpolator* SoPositionInterpolator2238 = new SoPositionInterpolator();
SoPositionInterpolator2238->setDEF(QString("Jump_whole_body_TranslationInterpolator"));
SoPositionInterpolator2238->setKey(new float[]{0.0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1.0}, 22);
SoPositionInterpolator2238->setKeyValue(new float[]{0.0,0.0,0.0,0.0,-0.01264,-0.01289,0.0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0.0,0.35,0.02148,0.0,-0.01299,-0.01057,0.0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0.0,0.0,0.0}, 66);
SoGroup2218->addChild(*SoPositionInterpolator2238);

SoOrientationInterpolator* SoOrientationInterpolator2239 = new SoOrientationInterpolator();
SoOrientationInterpolator2239->setDEF(QString("Jump_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2239->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2239->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2239);

SoOrientationInterpolator* SoOrientationInterpolator2240 = new SoOrientationInterpolator();
SoOrientationInterpolator2240->setDEF(QString("Jump_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2240->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2240->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2240);

SoOrientationInterpolator* SoOrientationInterpolator2241 = new SoOrientationInterpolator();
SoOrientationInterpolator2241->setDEF(QString("Jump_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2241->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2241->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2241);

SoOrientationInterpolator* SoOrientationInterpolator2242 = new SoOrientationInterpolator();
SoOrientationInterpolator2242->setDEF(QString("Jump_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2242->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2242->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2242);

SoOrientationInterpolator* SoOrientationInterpolator2243 = new SoOrientationInterpolator();
SoOrientationInterpolator2243->setDEF(QString("Jump_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2243->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2243->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,-1.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2243);

SoOrientationInterpolator* SoOrientationInterpolator2244 = new SoOrientationInterpolator();
SoOrientationInterpolator2244->setDEF(QString("Jump_vl5_YawInterpolator"));
SoOrientationInterpolator2244->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2244->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.1,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.6,0.0,1.0,0.0,0.1,0.0,1.0,0.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2244);

SoOrientationInterpolator* SoOrientationInterpolator2245 = new SoOrientationInterpolator();
SoOrientationInterpolator2245->setDEF(QString("Jump_vc6_YawInterpolator"));
SoOrientationInterpolator2245->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2245->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.8,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.6,0.0,-1.0,0.0,0.8,0.0,1.0,0.0,0.0}, 28);
SoGroup2218->addChild(*SoOrientationInterpolator2245);

SoOrientationInterpolator* SoOrientationInterpolator2246 = new SoOrientationInterpolator();
SoOrientationInterpolator2246->setDEF(QString("Jump_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2246->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2246->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2246);

SoOrientationInterpolator* SoOrientationInterpolator2247 = new SoOrientationInterpolator();
SoOrientationInterpolator2247->setDEF(QString("Jump_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2247->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2247->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2218->addChild(*SoOrientationInterpolator2247);

SoNode29->addChild(*SoGroup2218);

SoGroup* SoGroup2248 = new SoGroup();
SoGroup2248->setDEF(QString("KickAnimation"));
SoTimeSensor* SoTimeSensor2249 = new SoTimeSensor();
SoTimeSensor2249->setDEF(QString("KickTimer"));
SoTimeSensor2249->setCycleInterval(3.73);
SoTimeSensor2249->setLoop(true);
SoGroup2248->addChild(*SoTimeSensor2249);

SoOrientationInterpolator* SoOrientationInterpolator2250 = new SoOrientationInterpolator();
SoOrientationInterpolator2250->setDEF(QString("Kick_l_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2250->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2250->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.22,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2250);

SoOrientationInterpolator* SoOrientationInterpolator2251 = new SoOrientationInterpolator();
SoOrientationInterpolator2251->setDEF(QString("Kick_l_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2251->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2251->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2251);

SoOrientationInterpolator* SoOrientationInterpolator2252 = new SoOrientationInterpolator();
SoOrientationInterpolator2252->setDEF(QString("Kick_l_shoulder_RollInterpolator"));
SoOrientationInterpolator2252->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2252->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.76,-0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.256,0.0,0.0,1.0,0.05,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2252);

SoOrientationInterpolator* SoOrientationInterpolator2253 = new SoOrientationInterpolator();
SoOrientationInterpolator2253->setDEF(QString("Kick_l_ForeArm_PitchInterpolator"));
SoOrientationInterpolator2253->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2253->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.55,-1.0,0.25,0.0,2.55,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2253);

SoOrientationInterpolator* SoOrientationInterpolator2254 = new SoOrientationInterpolator();
SoOrientationInterpolator2254->setDEF(QString("Kick_l_wrist_RollInterpolator"));
SoOrientationInterpolator2254->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2254->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2254);

SoOrientationInterpolator* SoOrientationInterpolator2255 = new SoOrientationInterpolator();
SoOrientationInterpolator2255->setDEF(QString("Kick_l_thumb1_PitchInterpolator"));
SoOrientationInterpolator2255->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2255->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2255);

SoOrientationInterpolator* SoOrientationInterpolator2256 = new SoOrientationInterpolator();
SoOrientationInterpolator2256->setDEF(QString("Kick_r_sternoclavicular_RollInterpolator"));
SoOrientationInterpolator2256->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2256->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,-0.22,0.0,0.0,1.0,-0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2256);

SoOrientationInterpolator* SoOrientationInterpolator2257 = new SoOrientationInterpolator();
SoOrientationInterpolator2257->setDEF(QString("Kick_r_acromioclavicular_RollInterpolator"));
SoOrientationInterpolator2257->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2257->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2257);

SoOrientationInterpolator* SoOrientationInterpolator2258 = new SoOrientationInterpolator();
SoOrientationInterpolator2258->setDEF(QString("Kick_r_shoulder_RollInterpolator"));
SoOrientationInterpolator2258->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2258->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-1.76,0.25,0.0,1.0,-1.76,0.0,0.0,1.0,-1.256,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2258);

SoOrientationInterpolator* SoOrientationInterpolator2259 = new SoOrientationInterpolator();
SoOrientationInterpolator2259->setDEF(QString("Kick_r_ForeArm_PitchInterpolator"));
SoOrientationInterpolator2259->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2259->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.55,1.0,0.25,0.0,-2.55,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2259);

SoOrientationInterpolator* SoOrientationInterpolator2260 = new SoOrientationInterpolator();
SoOrientationInterpolator2260->setDEF(QString("Kick_r_wrist_RollInterpolator"));
SoOrientationInterpolator2260->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2260->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2260);

SoOrientationInterpolator* SoOrientationInterpolator2261 = new SoOrientationInterpolator();
SoOrientationInterpolator2261->setDEF(QString("Kick_r_thumb1_PitchInterpolator"));
SoOrientationInterpolator2261->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2261->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.1,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2261);

SoOrientationInterpolator* SoOrientationInterpolator2262 = new SoOrientationInterpolator();
SoOrientationInterpolator2262->setDEF(QString("Kick_r_hip_PitchInterpolator"));
SoOrientationInterpolator2262->setKey(new float[]{0.0,0.2,0.3,0.5,0.6,0.9,1.0}, 7);
SoOrientationInterpolator2262->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.75,-1.0,0.0,0.0,2.25,-1.0,0.0,0.0,2.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 28);
SoGroup2248->addChild(*SoOrientationInterpolator2262);

SoOrientationInterpolator* SoOrientationInterpolator2263 = new SoOrientationInterpolator();
SoOrientationInterpolator2263->setDEF(QString("Kick_r_knee_PitchInterpolator"));
SoOrientationInterpolator2263->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2263->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.95,1.0,0.0,0.0,1.75,-1.0,0.0,0.0,0.28,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2263);

SoOrientationInterpolator* SoOrientationInterpolator2264 = new SoOrientationInterpolator();
SoOrientationInterpolator2264->setDEF(QString("Kick_l_hip_PitchInterpolator"));
SoOrientationInterpolator2264->setKey(new float[]{0.0,0.2,0.3,0.5,0.6,0.9,1.0}, 7);
SoOrientationInterpolator2264->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2248->addChild(*SoOrientationInterpolator2264);

SoOrientationInterpolator* SoOrientationInterpolator2265 = new SoOrientationInterpolator();
SoOrientationInterpolator2265->setDEF(QString("Kick_l_knee_PitchInterpolator"));
SoOrientationInterpolator2265->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2265->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2265);

SoOrientationInterpolator* SoOrientationInterpolator2266 = new SoOrientationInterpolator();
SoOrientationInterpolator2266->setDEF(QString("Kick_r_ankle_PitchInterpolator"));
SoOrientationInterpolator2266->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2266->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.95,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.05,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2266);

SoOrientationInterpolator* SoOrientationInterpolator2267 = new SoOrientationInterpolator();
SoOrientationInterpolator2267->setDEF(QString("Kick_r_metatarsal_PitchInterpolator"));
SoOrientationInterpolator2267->setKey(new float[]{0.0,0.2,0.4,0.6,0.7,1.0}, 6);
SoOrientationInterpolator2267->setKeyValue(new float[]{1.0,0.0,0.0,0.0,-1.0,0.0,0.0,0.5,-1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.75,-1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2267);

SoOrientationInterpolator* SoOrientationInterpolator2268 = new SoOrientationInterpolator();
SoOrientationInterpolator2268->setDEF(QString("Kick_sacroiliac_YawInterpolator"));
SoOrientationInterpolator2268->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator2268->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.1,0.0,1.0,0.0,0.0,0.0,1.0,-1.0,0.24,0.0,-1.0,0.0,0.4,0.0,1.0,0.0,0.0}, 24);
SoGroup2248->addChild(*SoOrientationInterpolator2268);

SoOrientationInterpolator* SoOrientationInterpolator2269 = new SoOrientationInterpolator();
SoOrientationInterpolator2269->setDEF(QString("Kick_vl5_YawInterpolator"));
SoOrientationInterpolator2269->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2269->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2248->addChild(*SoOrientationInterpolator2269);

SoOrientationInterpolator* SoOrientationInterpolator2270 = new SoOrientationInterpolator();
SoOrientationInterpolator2270->setDEF(QString("Kick_vc6_YawInterpolator"));
SoOrientationInterpolator2270->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.8,1.0}, 7);
SoOrientationInterpolator2270->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoGroup2248->addChild(*SoOrientationInterpolator2270);

SoOrientationInterpolator* SoOrientationInterpolator2271 = new SoOrientationInterpolator();
SoOrientationInterpolator2271->setDEF(QString("Kick_lower_body_RotationInterpolator"));
SoOrientationInterpolator2271->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2271->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2248->addChild(*SoOrientationInterpolator2271);

SoOrientationInterpolator* SoOrientationInterpolator2272 = new SoOrientationInterpolator();
SoOrientationInterpolator2272->setDEF(QString("Kick_upper_body_RotationInterpolator"));
SoOrientationInterpolator2272->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2272->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2248->addChild(*SoOrientationInterpolator2272);

SoOrientationInterpolator* SoOrientationInterpolator2273 = new SoOrientationInterpolator();
SoOrientationInterpolator2273->setDEF(QString("Kick_whole_body_RotationInterpolator"));
SoOrientationInterpolator2273->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator2273->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup2248->addChild(*SoOrientationInterpolator2273);

SoPositionInterpolator* SoPositionInterpolator2274 = new SoPositionInterpolator();
SoPositionInterpolator2274->setDEF(QString("Kick_whole_body_TranslationInterpolator"));
SoPositionInterpolator2274->setKey(new float[]{0.0,0.5,1.0}, 3);
SoPositionInterpolator2274->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 9);
SoGroup2248->addChild(*SoPositionInterpolator2274);

SoOrientationInterpolator* SoOrientationInterpolator2275 = new SoOrientationInterpolator();
SoOrientationInterpolator2275->setDEF(QString("Kick_neck_RotationInterpolator"));
SoOrientationInterpolator2275->setKey(new float[]{0.0,0.25,0.55,1.0}, 4);
SoOrientationInterpolator2275->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.7,1.0,0.0,0.0,0.5,0.0,0.0,1.0,0.0}, 16);
SoGroup2248->addChild(*SoOrientationInterpolator2275);

SoNode29->addChild(*SoGroup2248);

SoGroup* SoGroup2276 = new SoGroup();
SoGroup2276->setDEF(QString("UserInterface"));
SoTransform* SoTransform2277 = new SoTransform();
SoTransform2277->setDEF(QString("CoordinateAxesAdjustedScale"));
SoTransform2277->setScale(new float[]{0.175,0.175,0.175});
SoInline* SoInline2278 = new SoInline();
SoInline2278->setDEF(QString("CoordinateAxes"));
SoInline2278->setGlobal(true);
SoInline2278->setUrl(new QString[]{QString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), QString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl")}, 4);
SoTransform2277->addChild(*SoInline2278);

SoGroup2276->addChild(*SoTransform2277);

SoTransform* SoTransform2279 = new SoTransform();
SoTransform2279->setDEF(QString("cordsys"));
SoTransform2279->setScale(new float[]{0.175,0.175,0.175});
SoGroup2276->addChild(*SoTransform2279);

SoProximitySensor* SoProximitySensor2280 = new SoProximitySensor();
SoProximitySensor2280->setDEF(QString("HudProximitySensor"));
SoProximitySensor2280->setSize(new float[]{500.0,100.0,500.0});
SoProximitySensor2280->setCenter(new float[]{0.0,20.0,0.0});
SoGroup2276->addChild(*SoProximitySensor2280);

SoTransform* SoTransform2281 = new SoTransform();
SoTransform2281->setDEF(QString("Stage"));
SoTransform2281->setTranslation(new float[]{0.0,-0.0125,0.0});
SoTransform2281->setScale(new float[]{1.0,0.0125,1.0});
SoShape* SoShape2282 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2283 = new SoVRMLAppearance();
SoMaterial* SoMaterial2284 = new SoMaterial();
SoMaterial2284->setTransparency(0.6);
SoVRMLAppearance2283->addChild(*SoMaterial2284);

SoShape2282->addChild(*SoVRMLAppearance2283);

SoBox* SoBox2285 = new SoBox();
SoShape2282->setGeometry(*SoBox2285);

SoTransform2281->addChild(*SoShape2282);

SoTransform* SoTransform2286 = new SoTransform();
SoTransform2286->setDEF(QString("Circle0"));
SoTransform2286->setScale(new float[]{1.175,1.0,1.175});
SoShape* SoShape2287 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2288 = new SoVRMLAppearance();
SoMaterial* SoMaterial2289 = new SoMaterial();
SoMaterial2289->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial2289->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance2288->addChild(*SoMaterial2289);

SoShape2287->addChild(*SoVRMLAppearance2288);

SoIndexedLineSet* SoIndexedLineSet2290 = new SoIndexedLineSet();
SoIndexedLineSet2290->setDEF(QString("Orbit1"));
SoIndexedLineSet2290->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1}, 62);
SoCoordinate* SoCoordinate2291 = new SoCoordinate();
SoCoordinate2291->setPoint(new float[]{1.0,0.0,0.0,0.995,0.0,-0.105,0.979,0.0,-0.208,0.951,0.0,-0.309,0.914,0.0,-0.407,0.866,0.0,-0.5,0.809,0.0,-0.588,0.743,0.0,-0.669,0.669,0.0,-0.743,0.588,0.0,-0.809,0.5,0.0,-0.866,0.407,0.0,-0.914,0.309,0.0,-0.951,0.208,0.0,-0.978,0.105,0.0,-0.995,0.0,0.0,-1.0,-0.105,0.0,-0.994522,-0.208,0.0,-0.978,-0.309,0.0,-0.951,-0.407,0.0,-0.914,-0.5,0.0,-0.866,-0.588,0.0,-0.809,-0.669,0.0,-0.743,-0.743,0.0,-0.669,-0.809,0.0,-0.588,-0.866,0.0,-0.5,-0.914,0.0,-0.407,-0.951,0.0,-0.309,-0.978,0.0,-0.208,-0.995,0.0,-0.105,-1.0,0.0,0.0,-0.995,0.0,0.105,-0.978,0.0,0.208,-0.951,0.0,0.309,-0.914,0.0,0.407,-0.866,0.0,0.5,-0.809,0.0,0.588,-0.743,0.0,0.669,-0.669,0.0,0.743,-0.588,0.0,0.809,-0.5,0.0,0.866,-0.407,0.0,0.914,-0.309,0.0,0.951,-0.208,0.0,0.978,-0.105,0.0,0.995,0.0,0.0,1.0,0.105,0.0,0.995,0.208,0.0,0.978,0.309,0.0,0.951,0.407,0.0,0.914,0.5,0.0,0.866,0.588,0.0,0.809,0.669,0.0,0.743,0.743,0.0,0.669,0.809,0.0,0.588,0.866,0.0,0.5,0.914,0.0,0.407,0.951,0.0,0.309,0.978,0.0,0.208,0.995,0.0,0.104,1.0,0.0,0.0}, 183);
SoIndexedLineSet2290->setCoord(*SoCoordinate2291);

SoShape2287->setGeometry(*SoIndexedLineSet2290);

SoTransform2286->addChild(*SoShape2287);

SoTransform2281->addChild(*SoTransform2286);

SoTransform* SoTransform2292 = new SoTransform();
SoTransform2292->setDEF(QString("Circle1"));
SoTransform2292->setScale(new float[]{0.5,1.0,0.5});
SoShape* SoShape2293 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2294 = new SoVRMLAppearance();
SoMaterial* SoMaterial2295 = new SoMaterial();
SoMaterial2295->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial2295->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance2294->addChild(*SoMaterial2295);

SoShape2293->addChild(*SoVRMLAppearance2294);

SoIndexedLineSet* SoIndexedLineSet2296 = new SoIndexedLineSet();
SoIndexedLineSet2296->setUSE(QString("Orbit1"));
SoShape2293->setGeometry(*SoIndexedLineSet2296);

SoTransform2292->addChild(*SoShape2293);

SoTransform2281->addChild(*SoTransform2292);

SoTransform* SoTransform2297 = new SoTransform();
SoTransform2297->setDEF(QString("Circle2"));
SoTransform2297->setScale(new float[]{0.25,1.0,0.25});
SoShape* SoShape2298 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2299 = new SoVRMLAppearance();
SoMaterial* SoMaterial2300 = new SoMaterial();
SoMaterial2300->setDiffuseColor(new float[]{0.9,0.0,0.7});
SoMaterial2300->setEmissiveColor(new float[]{0.424956,0.483976,1.0});
SoVRMLAppearance2299->addChild(*SoMaterial2300);

SoShape2298->addChild(*SoVRMLAppearance2299);

SoIndexedLineSet* SoIndexedLineSet2301 = new SoIndexedLineSet();
SoIndexedLineSet2301->setUSE(QString("Orbit1"));
SoShape2298->setGeometry(*SoIndexedLineSet2301);

SoTransform2297->addChild(*SoShape2298);

SoTransform2281->addChild(*SoTransform2297);

SoGroup2276->addChild(*SoTransform2281);

SoTransform* SoTransform2302 = new SoTransform();
SoTransform2302->setDEF(QString("HudXform"));
SoTransform2302->setTranslation(new float[]{1.705442,1.042139,1.989742});
SoTransform2302->setRotation(new float[]{-0.09996068,0.9942513,0.03837026,0.7131352});
SoTransform* SoTransform2303 = new SoTransform();
SoTransform2303->setTranslation(new float[]{-0.42,-0.2,-0.75});
SoTransform2303->setScale(new float[]{0.035,0.035,0.035});
SoTransform* SoTransform2304 = new SoTransform();
SoTransform2304->setDEF(QString("StandTransform"));
SoTransform2304->setTranslation(new float[]{0.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2305 = new SoTouchSensor();
SoTouchSensor2305->setDEF(QString("Stand_Touch"));
SoTouchSensor2305->setDescription(QString("touch to select"));
SoTransform2304->addChild(*SoTouchSensor2305);

SoShape* SoShape2306 = new SoShape();
SoShape2306->setDEF(QString("StandTextShape"));
SoVRMLAppearance* SoVRMLAppearance2307 = new SoVRMLAppearance();
SoMaterial* SoMaterial2308 = new SoMaterial();
SoMaterial2308->setDEF(QString("text_color"));
SoMaterial2308->setAmbientIntensity(1);
SoMaterial2308->setDiffuseColor(new float[]{0.819,0.521,0.169});
SoMaterial2308->setSpecularColor(new float[]{0.819,0.521,0.169});
SoMaterial2308->setEmissiveColor(new float[]{0.819,0.521,0.169});
SoVRMLAppearance2307->addChild(*SoMaterial2308);

SoShape2306->addChild(*SoVRMLAppearance2307);

SoText* SoText2309 = new SoText();
SoText2309->setString(new QString[]{QString("Stand")}, 1);
SoShape2306->setGeometry(*SoText2309);

SoTransform2304->addChild(*SoShape2306);

SoShape* SoShape2310 = new SoShape();
SoShape2310->setDEF(QString("Stand_Back"));
SoVRMLAppearance* SoVRMLAppearance2311 = new SoVRMLAppearance();
SoMaterial* SoMaterial2312 = new SoMaterial();
SoMaterial2312->setDEF(QString("Clear"));
SoMaterial2312->setAmbientIntensity(1);
SoMaterial2312->setDiffuseColor(new float[]{0.0,0.5,0.0});
SoMaterial2312->setEmissiveColor(new float[]{0.0,0.5,0.0});
SoMaterial2312->setTransparency(0.8);
SoVRMLAppearance2311->addChild(*SoMaterial2312);

SoShape2310->addChild(*SoVRMLAppearance2311);

SoIndexedFaceSet* SoIndexedFaceSet2313 = new SoIndexedFaceSet();
SoIndexedFaceSet2313->setDEF(QString("Backing"));
SoIndexedFaceSet2313->setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
SoCoordinate* SoCoordinate2314 = new SoCoordinate();
SoCoordinate2314->setPoint(new float[]{-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01}, 12);
SoIndexedFaceSet2313->setCoord(*SoCoordinate2314);

SoShape2310->setGeometry(*SoIndexedFaceSet2313);

SoTransform2304->addChild(*SoShape2310);

SoTransform2303->addChild(*SoTransform2304);

SoTransform* SoTransform2315 = new SoTransform();
SoTransform2315->setDEF(QString("PitchTransform"));
SoTransform2315->setTranslation(new float[]{3.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2316 = new SoTouchSensor();
SoTouchSensor2316->setDEF(QString("Pitch_Touch"));
SoTouchSensor2316->setDescription(QString("touch to select"));
SoTransform2315->addChild(*SoTouchSensor2316);

SoShape* SoShape2317 = new SoShape();
SoShape2317->setDEF(QString("PitchTextShape"));
SoVRMLAppearance* SoVRMLAppearance2318 = new SoVRMLAppearance();
SoMaterial* SoMaterial2319 = new SoMaterial();
SoMaterial2319->setUSE(QString("text_color"));
SoVRMLAppearance2318->addChild(*SoMaterial2319);

SoShape2317->addChild(*SoVRMLAppearance2318);

SoText* SoText2320 = new SoText();
SoText2320->setString(new QString[]{QString("Pitch")}, 1);
SoShape2317->setGeometry(*SoText2320);

SoTransform2315->addChild(*SoShape2317);

SoShape* SoShape2321 = new SoShape();
SoShape2321->setDEF(QString("Pitch_Back"));
SoVRMLAppearance* SoVRMLAppearance2322 = new SoVRMLAppearance();
SoMaterial* SoMaterial2323 = new SoMaterial();
SoMaterial2323->setUSE(QString("Clear"));
SoVRMLAppearance2322->addChild(*SoMaterial2323);

SoShape2321->addChild(*SoVRMLAppearance2322);

SoIndexedFaceSet* SoIndexedFaceSet2324 = new SoIndexedFaceSet();
SoIndexedFaceSet2324->setUSE(QString("Backing"));
SoShape2321->setGeometry(*SoIndexedFaceSet2324);

SoTransform2315->addChild(*SoShape2321);

SoTransform2303->addChild(*SoTransform2315);

SoTransform* SoTransform2325 = new SoTransform();
SoTransform2325->setDEF(QString("YawTransform"));
SoTransform2325->setTranslation(new float[]{6.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2326 = new SoTouchSensor();
SoTouchSensor2326->setDEF(QString("Yaw_Touch"));
SoTouchSensor2326->setDescription(QString("touch to select"));
SoTransform2325->addChild(*SoTouchSensor2326);

SoShape* SoShape2327 = new SoShape();
SoShape2327->setDEF(QString("YawText"));
SoVRMLAppearance* SoVRMLAppearance2328 = new SoVRMLAppearance();
SoMaterial* SoMaterial2329 = new SoMaterial();
SoMaterial2329->setUSE(QString("text_color"));
SoVRMLAppearance2328->addChild(*SoMaterial2329);

SoShape2327->addChild(*SoVRMLAppearance2328);

SoText* SoText2330 = new SoText();
SoText2330->setString(new QString[]{QString("Yaw")}, 1);
SoShape2327->setGeometry(*SoText2330);

SoTransform2325->addChild(*SoShape2327);

SoShape* SoShape2331 = new SoShape();
SoShape2331->setDEF(QString("Yaw_Back"));
SoVRMLAppearance* SoVRMLAppearance2332 = new SoVRMLAppearance();
SoMaterial* SoMaterial2333 = new SoMaterial();
SoMaterial2333->setUSE(QString("Clear"));
SoVRMLAppearance2332->addChild(*SoMaterial2333);

SoShape2331->addChild(*SoVRMLAppearance2332);

SoIndexedFaceSet* SoIndexedFaceSet2334 = new SoIndexedFaceSet();
SoIndexedFaceSet2334->setUSE(QString("Backing"));
SoShape2331->setGeometry(*SoIndexedFaceSet2334);

SoTransform2325->addChild(*SoShape2331);

SoTransform2303->addChild(*SoTransform2325);

SoTransform* SoTransform2335 = new SoTransform();
SoTransform2335->setDEF(QString("RollTransform"));
SoTransform2335->setTranslation(new float[]{9.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2336 = new SoTouchSensor();
SoTouchSensor2336->setDEF(QString("Roll_Touch"));
SoTouchSensor2336->setDescription(QString("touch to select"));
SoTransform2335->addChild(*SoTouchSensor2336);

SoShape* SoShape2337 = new SoShape();
SoShape2337->setDEF(QString("_RollInterpolator"));
SoVRMLAppearance* SoVRMLAppearance2338 = new SoVRMLAppearance();
SoMaterial* SoMaterial2339 = new SoMaterial();
SoMaterial2339->setUSE(QString("text_color"));
SoVRMLAppearance2338->addChild(*SoMaterial2339);

SoShape2337->addChild(*SoVRMLAppearance2338);

SoText* SoText2340 = new SoText();
SoText2340->setString(new QString[]{QString("Roll")}, 1);
SoShape2337->setGeometry(*SoText2340);

SoTransform2335->addChild(*SoShape2337);

SoShape* SoShape2341 = new SoShape();
SoShape2341->setDEF(QString("Roll_Back"));
SoVRMLAppearance* SoVRMLAppearance2342 = new SoVRMLAppearance();
SoMaterial* SoMaterial2343 = new SoMaterial();
SoMaterial2343->setUSE(QString("Clear"));
SoVRMLAppearance2342->addChild(*SoMaterial2343);

SoShape2341->addChild(*SoVRMLAppearance2342);

SoIndexedFaceSet* SoIndexedFaceSet2344 = new SoIndexedFaceSet();
SoIndexedFaceSet2344->setUSE(QString("Backing"));
SoShape2341->setGeometry(*SoIndexedFaceSet2344);

SoTransform2335->addChild(*SoShape2341);

SoTransform2303->addChild(*SoTransform2335);

SoTransform* SoTransform2345 = new SoTransform();
SoTransform2345->setDEF(QString("WalkTransform"));
SoTransform2345->setTranslation(new float[]{12.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2346 = new SoTouchSensor();
SoTouchSensor2346->setDEF(QString("Walk_Touch"));
SoTouchSensor2346->setDescription(QString("touch to select"));
SoTransform2345->addChild(*SoTouchSensor2346);

SoShape* SoShape2347 = new SoShape();
SoShape2347->setDEF(QString("WalkText"));
SoVRMLAppearance* SoVRMLAppearance2348 = new SoVRMLAppearance();
SoMaterial* SoMaterial2349 = new SoMaterial();
SoMaterial2349->setUSE(QString("text_color"));
SoVRMLAppearance2348->addChild(*SoMaterial2349);

SoShape2347->addChild(*SoVRMLAppearance2348);

SoText* SoText2350 = new SoText();
SoText2350->setString(new QString[]{QString("Walk")}, 1);
SoShape2347->setGeometry(*SoText2350);

SoTransform2345->addChild(*SoShape2347);

SoShape* SoShape2351 = new SoShape();
SoShape2351->setDEF(QString("Walk_Back"));
SoVRMLAppearance* SoVRMLAppearance2352 = new SoVRMLAppearance();
SoMaterial* SoMaterial2353 = new SoMaterial();
SoMaterial2353->setUSE(QString("Clear"));
SoVRMLAppearance2352->addChild(*SoMaterial2353);

SoShape2351->addChild(*SoVRMLAppearance2352);

SoIndexedFaceSet* SoIndexedFaceSet2354 = new SoIndexedFaceSet();
SoIndexedFaceSet2354->setUSE(QString("Backing"));
SoShape2351->setGeometry(*SoIndexedFaceSet2354);

SoTransform2345->addChild(*SoShape2351);

SoTransform2303->addChild(*SoTransform2345);

SoTransform* SoTransform2355 = new SoTransform();
SoTransform2355->setDEF(QString("RunTransform"));
SoTransform2355->setTranslation(new float[]{15.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2356 = new SoTouchSensor();
SoTouchSensor2356->setDEF(QString("Run_Touch"));
SoTouchSensor2356->setDescription(QString("touch to select"));
SoTransform2355->addChild(*SoTouchSensor2356);

SoShape* SoShape2357 = new SoShape();
SoShape2357->setDEF(QString("RunText"));
SoVRMLAppearance* SoVRMLAppearance2358 = new SoVRMLAppearance();
SoMaterial* SoMaterial2359 = new SoMaterial();
SoMaterial2359->setUSE(QString("text_color"));
SoVRMLAppearance2358->addChild(*SoMaterial2359);

SoShape2357->addChild(*SoVRMLAppearance2358);

SoText* SoText2360 = new SoText();
SoText2360->setString(new QString[]{QString("Run")}, 1);
SoShape2357->setGeometry(*SoText2360);

SoTransform2355->addChild(*SoShape2357);

SoShape* SoShape2361 = new SoShape();
SoShape2361->setDEF(QString("Run_Back"));
SoVRMLAppearance* SoVRMLAppearance2362 = new SoVRMLAppearance();
SoMaterial* SoMaterial2363 = new SoMaterial();
SoMaterial2363->setUSE(QString("Clear"));
SoVRMLAppearance2362->addChild(*SoMaterial2363);

SoShape2361->addChild(*SoVRMLAppearance2362);

SoIndexedFaceSet* SoIndexedFaceSet2364 = new SoIndexedFaceSet();
SoIndexedFaceSet2364->setUSE(QString("Backing"));
SoShape2361->setGeometry(*SoIndexedFaceSet2364);

SoTransform2355->addChild(*SoShape2361);

SoTransform2303->addChild(*SoTransform2355);

SoTransform* SoTransform2365 = new SoTransform();
SoTransform2365->setDEF(QString("JumpTransform"));
SoTransform2365->setTranslation(new float[]{18.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2366 = new SoTouchSensor();
SoTouchSensor2366->setDEF(QString("Jump_Touch"));
SoTouchSensor2366->setDescription(QString("touch to select"));
SoTransform2365->addChild(*SoTouchSensor2366);

SoShape* SoShape2367 = new SoShape();
SoShape2367->setDEF(QString("Jump"));
SoVRMLAppearance* SoVRMLAppearance2368 = new SoVRMLAppearance();
SoMaterial* SoMaterial2369 = new SoMaterial();
SoMaterial2369->setUSE(QString("text_color"));
SoVRMLAppearance2368->addChild(*SoMaterial2369);

SoShape2367->addChild(*SoVRMLAppearance2368);

SoText* SoText2370 = new SoText();
SoText2370->setString(new QString[]{QString("Jump")}, 1);
SoShape2367->setGeometry(*SoText2370);

SoTransform2365->addChild(*SoShape2367);

SoShape* SoShape2371 = new SoShape();
SoShape2371->setDEF(QString("Jump_Back"));
SoVRMLAppearance* SoVRMLAppearance2372 = new SoVRMLAppearance();
SoMaterial* SoMaterial2373 = new SoMaterial();
SoMaterial2373->setUSE(QString("Clear"));
SoVRMLAppearance2372->addChild(*SoMaterial2373);

SoShape2371->addChild(*SoVRMLAppearance2372);

SoIndexedFaceSet* SoIndexedFaceSet2374 = new SoIndexedFaceSet();
SoIndexedFaceSet2374->setUSE(QString("Backing"));
SoShape2371->setGeometry(*SoIndexedFaceSet2374);

SoTransform2365->addChild(*SoShape2371);

SoTransform2303->addChild(*SoTransform2365);

SoTransform* SoTransform2375 = new SoTransform();
SoTransform2375->setDEF(QString("KickTransform"));
SoTransform2375->setTranslation(new float[]{21.0,-1.0,0.0});
SoTouchSensor* SoTouchSensor2376 = new SoTouchSensor();
SoTouchSensor2376->setDEF(QString("Kick_Touch"));
SoTouchSensor2376->setDescription(QString("touch to select"));
SoTransform2375->addChild(*SoTouchSensor2376);

SoShape* SoShape2377 = new SoShape();
SoShape2377->setDEF(QString("KickText"));
SoVRMLAppearance* SoVRMLAppearance2378 = new SoVRMLAppearance();
SoMaterial* SoMaterial2379 = new SoMaterial();
SoMaterial2379->setUSE(QString("text_color"));
SoVRMLAppearance2378->addChild(*SoMaterial2379);

SoShape2377->addChild(*SoVRMLAppearance2378);

SoText* SoText2380 = new SoText();
SoText2380->setString(new QString[]{QString("Kick")}, 1);
SoShape2377->setGeometry(*SoText2380);

SoTransform2375->addChild(*SoShape2377);

SoShape* SoShape2381 = new SoShape();
SoShape2381->setDEF(QString("Kick_Back"));
SoVRMLAppearance* SoVRMLAppearance2382 = new SoVRMLAppearance();
SoMaterial* SoMaterial2383 = new SoMaterial();
SoMaterial2383->setUSE(QString("Clear"));
SoVRMLAppearance2382->addChild(*SoMaterial2383);

SoShape2381->addChild(*SoVRMLAppearance2382);

SoIndexedFaceSet* SoIndexedFaceSet2384 = new SoIndexedFaceSet();
SoIndexedFaceSet2384->setUSE(QString("Backing"));
SoShape2381->setGeometry(*SoIndexedFaceSet2384);

SoTransform2375->addChild(*SoShape2381);

SoTransform2303->addChild(*SoTransform2375);

SoTransform* SoTransform2385 = new SoTransform();
SoTransform2385->setDEF(QString("Stop_Text"));
SoTransform2385->setTranslation(new float[]{0.0,1.4,0.0});
SoTouchSensor* SoTouchSensor2386 = new SoTouchSensor();
SoTouchSensor2386->setDEF(QString("Stop_Touch"));
SoTouchSensor2386->setDescription(QString("touch to select"));
SoTransform2385->addChild(*SoTouchSensor2386);

SoShape* SoShape2387 = new SoShape();
SoShape2387->setDEF(QString("StopText"));
SoVRMLAppearance* SoVRMLAppearance2388 = new SoVRMLAppearance();
SoMaterial* SoMaterial2389 = new SoMaterial();
SoMaterial2389->setUSE(QString("text_color"));
SoVRMLAppearance2388->addChild(*SoMaterial2389);

SoShape2387->addChild(*SoVRMLAppearance2388);

SoText* SoText2390 = new SoText();
SoText2390->setString(new QString[]{QString("Stop"), QString("Default Pose")}, 2);
SoShape2387->setGeometry(*SoText2390);

SoTransform2385->addChild(*SoShape2387);

SoShape* SoShape2391 = new SoShape();
SoShape2391->setDEF(QString("Stop_Back"));
SoVRMLAppearance* SoVRMLAppearance2392 = new SoVRMLAppearance();
SoMaterial* SoMaterial2393 = new SoMaterial();
SoMaterial2393->setUSE(QString("Clear"));
SoVRMLAppearance2392->addChild(*SoMaterial2393);

SoShape2391->addChild(*SoVRMLAppearance2392);

SoIndexedFaceSet* SoIndexedFaceSet2394 = new SoIndexedFaceSet();
SoIndexedFaceSet2394->setUSE(QString("Backing"));
SoShape2391->setGeometry(*SoIndexedFaceSet2394);

SoTransform2385->addChild(*SoShape2391);

SoTransform2303->addChild(*SoTransform2385);

SoTransform2302->addChild(*SoTransform2303);

SoGroup2276->addChild(*SoTransform2302);

SoNode29->addChild(*SoGroup2276);

SoGroup* SoGroup2395 = new SoGroup();
SoGroup2395->setDEF(QString("BehaviorSynchronization"));
SoNode29->addChild(*SoGroup2395);

SoROUTE* SoROUTE2396 = new SoROUTE();
SoROUTE2396->setFromNode(QString("StopTimer"));
SoROUTE2396->setFromField(QString("fraction_changed"));
SoROUTE2396->setToNode(QString("Stop_HumanoidRoot_TranslationInterpolator"));
SoROUTE2396->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2396);

SoROUTE* SoROUTE2397 = new SoROUTE();
SoROUTE2397->setFromNode(QString("StopTimer"));
SoROUTE2397->setFromField(QString("fraction_changed"));
SoROUTE2397->setToNode(QString("Stop_HumanoidRoot_RotationInterpolator"));
SoROUTE2397->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2397);

SoROUTE* SoROUTE2398 = new SoROUTE();
SoROUTE2398->setFromNode(QString("StopTimer"));
SoROUTE2398->setFromField(QString("fraction_changed"));
SoROUTE2398->setToNode(QString("Stop_sacroiliac_RotationInterpolator"));
SoROUTE2398->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2398);

SoROUTE* SoROUTE2399 = new SoROUTE();
SoROUTE2399->setFromNode(QString("StopTimer"));
SoROUTE2399->setFromField(QString("fraction_changed"));
SoROUTE2399->setToNode(QString("Stop_l_hip_RotationInterpolator"));
SoROUTE2399->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2399);

SoROUTE* SoROUTE2400 = new SoROUTE();
SoROUTE2400->setFromNode(QString("StopTimer"));
SoROUTE2400->setFromField(QString("fraction_changed"));
SoROUTE2400->setToNode(QString("Stop_l_knee_RotationInterpolator"));
SoROUTE2400->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2400);

SoROUTE* SoROUTE2401 = new SoROUTE();
SoROUTE2401->setFromNode(QString("StopTimer"));
SoROUTE2401->setFromField(QString("fraction_changed"));
SoROUTE2401->setToNode(QString("Stop_l_ankle_RotationInterpolator"));
SoROUTE2401->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2401);

SoROUTE* SoROUTE2402 = new SoROUTE();
SoROUTE2402->setFromNode(QString("StopTimer"));
SoROUTE2402->setFromField(QString("fraction_changed"));
SoROUTE2402->setToNode(QString("Stop_l_subtalar_RotationInterpolator"));
SoROUTE2402->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2402);

SoROUTE* SoROUTE2403 = new SoROUTE();
SoROUTE2403->setFromNode(QString("StopTimer"));
SoROUTE2403->setFromField(QString("fraction_changed"));
SoROUTE2403->setToNode(QString("Stop_l_midtarsal_RotationInterpolator"));
SoROUTE2403->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2403);

SoROUTE* SoROUTE2404 = new SoROUTE();
SoROUTE2404->setFromNode(QString("StopTimer"));
SoROUTE2404->setFromField(QString("fraction_changed"));
SoROUTE2404->setToNode(QString("Stop_l_metatarsal_RotationInterpolator"));
SoROUTE2404->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2404);

SoROUTE* SoROUTE2405 = new SoROUTE();
SoROUTE2405->setFromNode(QString("StopTimer"));
SoROUTE2405->setFromField(QString("fraction_changed"));
SoROUTE2405->setToNode(QString("Stop_r_hip_RotationInterpolator"));
SoROUTE2405->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2405);

SoROUTE* SoROUTE2406 = new SoROUTE();
SoROUTE2406->setFromNode(QString("StopTimer"));
SoROUTE2406->setFromField(QString("fraction_changed"));
SoROUTE2406->setToNode(QString("Stop_r_knee_RotationInterpolator"));
SoROUTE2406->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2406);

SoROUTE* SoROUTE2407 = new SoROUTE();
SoROUTE2407->setFromNode(QString("StopTimer"));
SoROUTE2407->setFromField(QString("fraction_changed"));
SoROUTE2407->setToNode(QString("Stop_r_ankle_RotationInterpolator"));
SoROUTE2407->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2407);

SoROUTE* SoROUTE2408 = new SoROUTE();
SoROUTE2408->setFromNode(QString("StopTimer"));
SoROUTE2408->setFromField(QString("fraction_changed"));
SoROUTE2408->setToNode(QString("Stop_r_subtalar_RotationInterpolator"));
SoROUTE2408->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2408);

SoROUTE* SoROUTE2409 = new SoROUTE();
SoROUTE2409->setFromNode(QString("StopTimer"));
SoROUTE2409->setFromField(QString("fraction_changed"));
SoROUTE2409->setToNode(QString("Stop_r_midtarsal_RotationInterpolator"));
SoROUTE2409->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2409);

SoROUTE* SoROUTE2410 = new SoROUTE();
SoROUTE2410->setFromNode(QString("StopTimer"));
SoROUTE2410->setFromField(QString("fraction_changed"));
SoROUTE2410->setToNode(QString("Stop_r_metatarsal_RotationInterpolator"));
SoROUTE2410->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2410);

SoROUTE* SoROUTE2411 = new SoROUTE();
SoROUTE2411->setFromNode(QString("StopTimer"));
SoROUTE2411->setFromField(QString("fraction_changed"));
SoROUTE2411->setToNode(QString("Stop_vl5_RotationInterpolator"));
SoROUTE2411->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2411);

SoROUTE* SoROUTE2412 = new SoROUTE();
SoROUTE2412->setFromNode(QString("StopTimer"));
SoROUTE2412->setFromField(QString("fraction_changed"));
SoROUTE2412->setToNode(QString("Stop_vl4_RotationInterpolator"));
SoROUTE2412->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2412);

SoROUTE* SoROUTE2413 = new SoROUTE();
SoROUTE2413->setFromNode(QString("StopTimer"));
SoROUTE2413->setFromField(QString("fraction_changed"));
SoROUTE2413->setToNode(QString("Stop_vl3_RotationInterpolator"));
SoROUTE2413->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2413);

SoROUTE* SoROUTE2414 = new SoROUTE();
SoROUTE2414->setFromNode(QString("StopTimer"));
SoROUTE2414->setFromField(QString("fraction_changed"));
SoROUTE2414->setToNode(QString("Stop_vl2_RotationInterpolator"));
SoROUTE2414->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2414);

SoROUTE* SoROUTE2415 = new SoROUTE();
SoROUTE2415->setFromNode(QString("StopTimer"));
SoROUTE2415->setFromField(QString("fraction_changed"));
SoROUTE2415->setToNode(QString("Stop_vl1_RotationInterpolator"));
SoROUTE2415->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2415);

SoROUTE* SoROUTE2416 = new SoROUTE();
SoROUTE2416->setFromNode(QString("StopTimer"));
SoROUTE2416->setFromField(QString("fraction_changed"));
SoROUTE2416->setToNode(QString("Stop_vt12_RotationInterpolator"));
SoROUTE2416->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2416);

SoROUTE* SoROUTE2417 = new SoROUTE();
SoROUTE2417->setFromNode(QString("StopTimer"));
SoROUTE2417->setFromField(QString("fraction_changed"));
SoROUTE2417->setToNode(QString("Stop_vt11_RotationInterpolator"));
SoROUTE2417->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2417);

SoROUTE* SoROUTE2418 = new SoROUTE();
SoROUTE2418->setFromNode(QString("StopTimer"));
SoROUTE2418->setFromField(QString("fraction_changed"));
SoROUTE2418->setToNode(QString("Stop_vt10_RotationInterpolator"));
SoROUTE2418->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2418);

SoROUTE* SoROUTE2419 = new SoROUTE();
SoROUTE2419->setFromNode(QString("StopTimer"));
SoROUTE2419->setFromField(QString("fraction_changed"));
SoROUTE2419->setToNode(QString("Stop_vt9_RotationInterpolator"));
SoROUTE2419->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2419);

SoROUTE* SoROUTE2420 = new SoROUTE();
SoROUTE2420->setFromNode(QString("StopTimer"));
SoROUTE2420->setFromField(QString("fraction_changed"));
SoROUTE2420->setToNode(QString("Stop_vt8_RotationInterpolator"));
SoROUTE2420->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2420);

SoROUTE* SoROUTE2421 = new SoROUTE();
SoROUTE2421->setFromNode(QString("StopTimer"));
SoROUTE2421->setFromField(QString("fraction_changed"));
SoROUTE2421->setToNode(QString("Stop_vt7_RotationInterpolator"));
SoROUTE2421->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2421);

SoROUTE* SoROUTE2422 = new SoROUTE();
SoROUTE2422->setFromNode(QString("StopTimer"));
SoROUTE2422->setFromField(QString("fraction_changed"));
SoROUTE2422->setToNode(QString("Stop_vt6_RotationInterpolator"));
SoROUTE2422->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2422);

SoROUTE* SoROUTE2423 = new SoROUTE();
SoROUTE2423->setFromNode(QString("StopTimer"));
SoROUTE2423->setFromField(QString("fraction_changed"));
SoROUTE2423->setToNode(QString("Stop_vt5_RotationInterpolator"));
SoROUTE2423->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2423);

SoROUTE* SoROUTE2424 = new SoROUTE();
SoROUTE2424->setFromNode(QString("StopTimer"));
SoROUTE2424->setFromField(QString("fraction_changed"));
SoROUTE2424->setToNode(QString("Stop_vt4_RotationInterpolator"));
SoROUTE2424->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2424);

SoROUTE* SoROUTE2425 = new SoROUTE();
SoROUTE2425->setFromNode(QString("StopTimer"));
SoROUTE2425->setFromField(QString("fraction_changed"));
SoROUTE2425->setToNode(QString("Stop_vt3_RotationInterpolator"));
SoROUTE2425->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2425);

SoROUTE* SoROUTE2426 = new SoROUTE();
SoROUTE2426->setFromNode(QString("StopTimer"));
SoROUTE2426->setFromField(QString("fraction_changed"));
SoROUTE2426->setToNode(QString("Stop_vt2_RotationInterpolator"));
SoROUTE2426->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2426);

SoROUTE* SoROUTE2427 = new SoROUTE();
SoROUTE2427->setFromNode(QString("StopTimer"));
SoROUTE2427->setFromField(QString("fraction_changed"));
SoROUTE2427->setToNode(QString("Stop_vt1_RotationInterpolator"));
SoROUTE2427->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2427);

SoROUTE* SoROUTE2428 = new SoROUTE();
SoROUTE2428->setFromNode(QString("StopTimer"));
SoROUTE2428->setFromField(QString("fraction_changed"));
SoROUTE2428->setToNode(QString("Stop_vc7_RotationInterpolator"));
SoROUTE2428->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2428);

SoROUTE* SoROUTE2429 = new SoROUTE();
SoROUTE2429->setFromNode(QString("StopTimer"));
SoROUTE2429->setFromField(QString("fraction_changed"));
SoROUTE2429->setToNode(QString("Stop_vc6_RotationInterpolator"));
SoROUTE2429->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2429);

SoROUTE* SoROUTE2430 = new SoROUTE();
SoROUTE2430->setFromNode(QString("StopTimer"));
SoROUTE2430->setFromField(QString("fraction_changed"));
SoROUTE2430->setToNode(QString("Stop_vc5_RotationInterpolator"));
SoROUTE2430->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2430);

SoROUTE* SoROUTE2431 = new SoROUTE();
SoROUTE2431->setFromNode(QString("StopTimer"));
SoROUTE2431->setFromField(QString("fraction_changed"));
SoROUTE2431->setToNode(QString("Stop_vc4_RotationInterpolator"));
SoROUTE2431->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2431);

SoROUTE* SoROUTE2432 = new SoROUTE();
SoROUTE2432->setFromNode(QString("StopTimer"));
SoROUTE2432->setFromField(QString("fraction_changed"));
SoROUTE2432->setToNode(QString("Stop_vc3_RotationInterpolator"));
SoROUTE2432->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2432);

SoROUTE* SoROUTE2433 = new SoROUTE();
SoROUTE2433->setFromNode(QString("StopTimer"));
SoROUTE2433->setFromField(QString("fraction_changed"));
SoROUTE2433->setToNode(QString("Stop_vc2_RotationInterpolator"));
SoROUTE2433->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2433);

SoROUTE* SoROUTE2434 = new SoROUTE();
SoROUTE2434->setFromNode(QString("StopTimer"));
SoROUTE2434->setFromField(QString("fraction_changed"));
SoROUTE2434->setToNode(QString("Stop_vc1_RotationInterpolator"));
SoROUTE2434->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2434);

SoROUTE* SoROUTE2435 = new SoROUTE();
SoROUTE2435->setFromNode(QString("StopTimer"));
SoROUTE2435->setFromField(QString("fraction_changed"));
SoROUTE2435->setToNode(QString("Stop_skullbase_RotationInterpolator"));
SoROUTE2435->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2435);

SoROUTE* SoROUTE2436 = new SoROUTE();
SoROUTE2436->setFromNode(QString("StopTimer"));
SoROUTE2436->setFromField(QString("fraction_changed"));
SoROUTE2436->setToNode(QString("Stop_l_eyeball_joint_RotationInterpolator"));
SoROUTE2436->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2436);

SoROUTE* SoROUTE2437 = new SoROUTE();
SoROUTE2437->setFromNode(QString("StopTimer"));
SoROUTE2437->setFromField(QString("fraction_changed"));
SoROUTE2437->setToNode(QString("Stop_r_eyeball_joint_RotationInterpolator"));
SoROUTE2437->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2437);

SoROUTE* SoROUTE2438 = new SoROUTE();
SoROUTE2438->setFromNode(QString("StopTimer"));
SoROUTE2438->setFromField(QString("fraction_changed"));
SoROUTE2438->setToNode(QString("Stop_l_sternoclavicular_RotationInterpolator"));
SoROUTE2438->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2438);

SoROUTE* SoROUTE2439 = new SoROUTE();
SoROUTE2439->setFromNode(QString("StopTimer"));
SoROUTE2439->setFromField(QString("fraction_changed"));
SoROUTE2439->setToNode(QString("Stop_l_acromioclavicular_RotationInterpolator"));
SoROUTE2439->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2439);

SoROUTE* SoROUTE2440 = new SoROUTE();
SoROUTE2440->setFromNode(QString("StopTimer"));
SoROUTE2440->setFromField(QString("fraction_changed"));
SoROUTE2440->setToNode(QString("Stop_l_shoulder_RotationInterpolator"));
SoROUTE2440->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2440);

SoROUTE* SoROUTE2441 = new SoROUTE();
SoROUTE2441->setFromNode(QString("StopTimer"));
SoROUTE2441->setFromField(QString("fraction_changed"));
SoROUTE2441->setToNode(QString("Stop_l_elbow_RotationInterpolator"));
SoROUTE2441->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2441);

SoROUTE* SoROUTE2442 = new SoROUTE();
SoROUTE2442->setFromNode(QString("StopTimer"));
SoROUTE2442->setFromField(QString("fraction_changed"));
SoROUTE2442->setToNode(QString("Stop_l_wrist_RotationInterpolator"));
SoROUTE2442->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2442);

SoROUTE* SoROUTE2443 = new SoROUTE();
SoROUTE2443->setFromNode(QString("StopTimer"));
SoROUTE2443->setFromField(QString("fraction_changed"));
SoROUTE2443->setToNode(QString("Stop_l_thumb1_RotationInterpolator"));
SoROUTE2443->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2443);

SoROUTE* SoROUTE2444 = new SoROUTE();
SoROUTE2444->setFromNode(QString("StopTimer"));
SoROUTE2444->setFromField(QString("fraction_changed"));
SoROUTE2444->setToNode(QString("Stop_l_thumb2_RotationInterpolator"));
SoROUTE2444->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2444);

SoROUTE* SoROUTE2445 = new SoROUTE();
SoROUTE2445->setFromNode(QString("StopTimer"));
SoROUTE2445->setFromField(QString("fraction_changed"));
SoROUTE2445->setToNode(QString("Stop_l_thumb3_RotationInterpolator"));
SoROUTE2445->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2445);

SoROUTE* SoROUTE2446 = new SoROUTE();
SoROUTE2446->setFromNode(QString("StopTimer"));
SoROUTE2446->setFromField(QString("fraction_changed"));
SoROUTE2446->setToNode(QString("Stop_l_index0_RotationInterpolator"));
SoROUTE2446->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2446);

SoROUTE* SoROUTE2447 = new SoROUTE();
SoROUTE2447->setFromNode(QString("StopTimer"));
SoROUTE2447->setFromField(QString("fraction_changed"));
SoROUTE2447->setToNode(QString("Stop_l_index1_RotationInterpolator"));
SoROUTE2447->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2447);

SoROUTE* SoROUTE2448 = new SoROUTE();
SoROUTE2448->setFromNode(QString("StopTimer"));
SoROUTE2448->setFromField(QString("fraction_changed"));
SoROUTE2448->setToNode(QString("Stop_l_index2_RotationInterpolator"));
SoROUTE2448->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2448);

SoROUTE* SoROUTE2449 = new SoROUTE();
SoROUTE2449->setFromNode(QString("StopTimer"));
SoROUTE2449->setFromField(QString("fraction_changed"));
SoROUTE2449->setToNode(QString("Stop_l_index3_RotationInterpolator"));
SoROUTE2449->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2449);

SoROUTE* SoROUTE2450 = new SoROUTE();
SoROUTE2450->setFromNode(QString("StopTimer"));
SoROUTE2450->setFromField(QString("fraction_changed"));
SoROUTE2450->setToNode(QString("Stop_l_middle0_RotationInterpolator"));
SoROUTE2450->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2450);

SoROUTE* SoROUTE2451 = new SoROUTE();
SoROUTE2451->setFromNode(QString("StopTimer"));
SoROUTE2451->setFromField(QString("fraction_changed"));
SoROUTE2451->setToNode(QString("Stop_l_middle1_RotationInterpolator"));
SoROUTE2451->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2451);

SoROUTE* SoROUTE2452 = new SoROUTE();
SoROUTE2452->setFromNode(QString("StopTimer"));
SoROUTE2452->setFromField(QString("fraction_changed"));
SoROUTE2452->setToNode(QString("Stop_l_middle2_RotationInterpolator"));
SoROUTE2452->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2452);

SoROUTE* SoROUTE2453 = new SoROUTE();
SoROUTE2453->setFromNode(QString("StopTimer"));
SoROUTE2453->setFromField(QString("fraction_changed"));
SoROUTE2453->setToNode(QString("Stop_l_middle3_RotationInterpolator"));
SoROUTE2453->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2453);

SoROUTE* SoROUTE2454 = new SoROUTE();
SoROUTE2454->setFromNode(QString("StopTimer"));
SoROUTE2454->setFromField(QString("fraction_changed"));
SoROUTE2454->setToNode(QString("Stop_l_ring0_RotationInterpolator"));
SoROUTE2454->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2454);

SoROUTE* SoROUTE2455 = new SoROUTE();
SoROUTE2455->setFromNode(QString("StopTimer"));
SoROUTE2455->setFromField(QString("fraction_changed"));
SoROUTE2455->setToNode(QString("Stop_l_ring1_RotationInterpolator"));
SoROUTE2455->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2455);

SoROUTE* SoROUTE2456 = new SoROUTE();
SoROUTE2456->setFromNode(QString("StopTimer"));
SoROUTE2456->setFromField(QString("fraction_changed"));
SoROUTE2456->setToNode(QString("Stop_l_ring2_RotationInterpolator"));
SoROUTE2456->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2456);

SoROUTE* SoROUTE2457 = new SoROUTE();
SoROUTE2457->setFromNode(QString("StopTimer"));
SoROUTE2457->setFromField(QString("fraction_changed"));
SoROUTE2457->setToNode(QString("Stop_l_ring3_RotationInterpolator"));
SoROUTE2457->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2457);

SoROUTE* SoROUTE2458 = new SoROUTE();
SoROUTE2458->setFromNode(QString("StopTimer"));
SoROUTE2458->setFromField(QString("fraction_changed"));
SoROUTE2458->setToNode(QString("Stop_l_pinky0_RotationInterpolator"));
SoROUTE2458->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2458);

SoROUTE* SoROUTE2459 = new SoROUTE();
SoROUTE2459->setFromNode(QString("StopTimer"));
SoROUTE2459->setFromField(QString("fraction_changed"));
SoROUTE2459->setToNode(QString("Stop_l_pinky1_RotationInterpolator"));
SoROUTE2459->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2459);

SoROUTE* SoROUTE2460 = new SoROUTE();
SoROUTE2460->setFromNode(QString("StopTimer"));
SoROUTE2460->setFromField(QString("fraction_changed"));
SoROUTE2460->setToNode(QString("Stop_l_pinky2_RotationInterpolator"));
SoROUTE2460->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2460);

SoROUTE* SoROUTE2461 = new SoROUTE();
SoROUTE2461->setFromNode(QString("StopTimer"));
SoROUTE2461->setFromField(QString("fraction_changed"));
SoROUTE2461->setToNode(QString("Stop_l_pinky3_RotationInterpolator"));
SoROUTE2461->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2461);

SoROUTE* SoROUTE2462 = new SoROUTE();
SoROUTE2462->setFromNode(QString("StopTimer"));
SoROUTE2462->setFromField(QString("fraction_changed"));
SoROUTE2462->setToNode(QString("Stop_r_sternoclavicular_RotationInterpolator"));
SoROUTE2462->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2462);

SoROUTE* SoROUTE2463 = new SoROUTE();
SoROUTE2463->setFromNode(QString("StopTimer"));
SoROUTE2463->setFromField(QString("fraction_changed"));
SoROUTE2463->setToNode(QString("Stop_r_acromioclavicular_RotationInterpolator"));
SoROUTE2463->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2463);

SoROUTE* SoROUTE2464 = new SoROUTE();
SoROUTE2464->setFromNode(QString("StopTimer"));
SoROUTE2464->setFromField(QString("fraction_changed"));
SoROUTE2464->setToNode(QString("Stop_r_shoulder_RotationInterpolator"));
SoROUTE2464->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2464);

SoROUTE* SoROUTE2465 = new SoROUTE();
SoROUTE2465->setFromNode(QString("StopTimer"));
SoROUTE2465->setFromField(QString("fraction_changed"));
SoROUTE2465->setToNode(QString("Stop_r_elbow_RotationInterpolator"));
SoROUTE2465->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2465);

SoROUTE* SoROUTE2466 = new SoROUTE();
SoROUTE2466->setFromNode(QString("StopTimer"));
SoROUTE2466->setFromField(QString("fraction_changed"));
SoROUTE2466->setToNode(QString("Stop_r_wrist_RotationInterpolator"));
SoROUTE2466->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2466);

SoROUTE* SoROUTE2467 = new SoROUTE();
SoROUTE2467->setFromNode(QString("StopTimer"));
SoROUTE2467->setFromField(QString("fraction_changed"));
SoROUTE2467->setToNode(QString("Stop_r_thumb1_RotationInterpolator"));
SoROUTE2467->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2467);

SoROUTE* SoROUTE2468 = new SoROUTE();
SoROUTE2468->setFromNode(QString("StopTimer"));
SoROUTE2468->setFromField(QString("fraction_changed"));
SoROUTE2468->setToNode(QString("Stop_r_thumb2_RotationInterpolator"));
SoROUTE2468->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2468);

SoROUTE* SoROUTE2469 = new SoROUTE();
SoROUTE2469->setFromNode(QString("StopTimer"));
SoROUTE2469->setFromField(QString("fraction_changed"));
SoROUTE2469->setToNode(QString("Stop_r_thumb3_RotationInterpolator"));
SoROUTE2469->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2469);

SoROUTE* SoROUTE2470 = new SoROUTE();
SoROUTE2470->setFromNode(QString("StopTimer"));
SoROUTE2470->setFromField(QString("fraction_changed"));
SoROUTE2470->setToNode(QString("Stop_r_index0_RotationInterpolator"));
SoROUTE2470->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2470);

SoROUTE* SoROUTE2471 = new SoROUTE();
SoROUTE2471->setFromNode(QString("StopTimer"));
SoROUTE2471->setFromField(QString("fraction_changed"));
SoROUTE2471->setToNode(QString("Stop_r_index1_RotationInterpolator"));
SoROUTE2471->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2471);

SoROUTE* SoROUTE2472 = new SoROUTE();
SoROUTE2472->setFromNode(QString("StopTimer"));
SoROUTE2472->setFromField(QString("fraction_changed"));
SoROUTE2472->setToNode(QString("Stop_r_index2_RotationInterpolator"));
SoROUTE2472->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2472);

SoROUTE* SoROUTE2473 = new SoROUTE();
SoROUTE2473->setFromNode(QString("StopTimer"));
SoROUTE2473->setFromField(QString("fraction_changed"));
SoROUTE2473->setToNode(QString("Stop_r_index3_RotationInterpolator"));
SoROUTE2473->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2473);

SoROUTE* SoROUTE2474 = new SoROUTE();
SoROUTE2474->setFromNode(QString("StopTimer"));
SoROUTE2474->setFromField(QString("fraction_changed"));
SoROUTE2474->setToNode(QString("Stop_r_middle0_RotationInterpolator"));
SoROUTE2474->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2474);

SoROUTE* SoROUTE2475 = new SoROUTE();
SoROUTE2475->setFromNode(QString("StopTimer"));
SoROUTE2475->setFromField(QString("fraction_changed"));
SoROUTE2475->setToNode(QString("Stop_r_middle1_RotationInterpolator"));
SoROUTE2475->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2475);

SoROUTE* SoROUTE2476 = new SoROUTE();
SoROUTE2476->setFromNode(QString("StopTimer"));
SoROUTE2476->setFromField(QString("fraction_changed"));
SoROUTE2476->setToNode(QString("Stop_r_middle2_RotationInterpolator"));
SoROUTE2476->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2476);

SoROUTE* SoROUTE2477 = new SoROUTE();
SoROUTE2477->setFromNode(QString("StopTimer"));
SoROUTE2477->setFromField(QString("fraction_changed"));
SoROUTE2477->setToNode(QString("Stop_r_middle3_RotationInterpolator"));
SoROUTE2477->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2477);

SoROUTE* SoROUTE2478 = new SoROUTE();
SoROUTE2478->setFromNode(QString("StopTimer"));
SoROUTE2478->setFromField(QString("fraction_changed"));
SoROUTE2478->setToNode(QString("Stop_r_ring0_RotationInterpolator"));
SoROUTE2478->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2478);

SoROUTE* SoROUTE2479 = new SoROUTE();
SoROUTE2479->setFromNode(QString("StopTimer"));
SoROUTE2479->setFromField(QString("fraction_changed"));
SoROUTE2479->setToNode(QString("Stop_r_ring1_RotationInterpolator"));
SoROUTE2479->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2479);

SoROUTE* SoROUTE2480 = new SoROUTE();
SoROUTE2480->setFromNode(QString("StopTimer"));
SoROUTE2480->setFromField(QString("fraction_changed"));
SoROUTE2480->setToNode(QString("Stop_r_ring2_RotationInterpolator"));
SoROUTE2480->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2480);

SoROUTE* SoROUTE2481 = new SoROUTE();
SoROUTE2481->setFromNode(QString("StopTimer"));
SoROUTE2481->setFromField(QString("fraction_changed"));
SoROUTE2481->setToNode(QString("Stop_r_ring3_RotationInterpolator"));
SoROUTE2481->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2481);

SoROUTE* SoROUTE2482 = new SoROUTE();
SoROUTE2482->setFromNode(QString("StopTimer"));
SoROUTE2482->setFromField(QString("fraction_changed"));
SoROUTE2482->setToNode(QString("Stop_r_pinky0_RotationInterpolator"));
SoROUTE2482->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2482);

SoROUTE* SoROUTE2483 = new SoROUTE();
SoROUTE2483->setFromNode(QString("StopTimer"));
SoROUTE2483->setFromField(QString("fraction_changed"));
SoROUTE2483->setToNode(QString("Stop_r_pinky1_RotationInterpolator"));
SoROUTE2483->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2483);

SoROUTE* SoROUTE2484 = new SoROUTE();
SoROUTE2484->setFromNode(QString("StopTimer"));
SoROUTE2484->setFromField(QString("fraction_changed"));
SoROUTE2484->setToNode(QString("Stop_r_pinky2_RotationInterpolator"));
SoROUTE2484->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2484);

SoROUTE* SoROUTE2485 = new SoROUTE();
SoROUTE2485->setFromNode(QString("StopTimer"));
SoROUTE2485->setFromField(QString("fraction_changed"));
SoROUTE2485->setToNode(QString("Stop_r_pinky3_RotationInterpolator"));
SoROUTE2485->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2485);

SoROUTE* SoROUTE2486 = new SoROUTE();
SoROUTE2486->setFromNode(QString("Stop_HumanoidRoot_TranslationInterpolator"));
SoROUTE2486->setFromField(QString("value_changed"));
SoROUTE2486->setToNode(QString("hanim_humanoid_root"));
SoROUTE2486->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2486);

SoROUTE* SoROUTE2487 = new SoROUTE();
SoROUTE2487->setFromNode(QString("Stop_HumanoidRoot_RotationInterpolator"));
SoROUTE2487->setFromField(QString("value_changed"));
SoROUTE2487->setToNode(QString("hanim_humanoid_root"));
SoROUTE2487->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2487);

SoROUTE* SoROUTE2488 = new SoROUTE();
SoROUTE2488->setFromNode(QString("Stop_sacroiliac_RotationInterpolator"));
SoROUTE2488->setFromField(QString("value_changed"));
SoROUTE2488->setToNode(QString("hanim_sacroiliac"));
SoROUTE2488->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2488);

SoROUTE* SoROUTE2489 = new SoROUTE();
SoROUTE2489->setFromNode(QString("Stop_l_hip_RotationInterpolator"));
SoROUTE2489->setFromField(QString("value_changed"));
SoROUTE2489->setToNode(QString("hanim_l_hip"));
SoROUTE2489->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2489);

SoROUTE* SoROUTE2490 = new SoROUTE();
SoROUTE2490->setFromNode(QString("Stop_l_knee_RotationInterpolator"));
SoROUTE2490->setFromField(QString("value_changed"));
SoROUTE2490->setToNode(QString("hanim_l_knee"));
SoROUTE2490->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2490);

SoROUTE* SoROUTE2491 = new SoROUTE();
SoROUTE2491->setFromNode(QString("Stop_l_ankle_RotationInterpolator"));
SoROUTE2491->setFromField(QString("value_changed"));
SoROUTE2491->setToNode(QString("hanim_l_ankle"));
SoROUTE2491->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2491);

SoROUTE* SoROUTE2492 = new SoROUTE();
SoROUTE2492->setFromNode(QString("Stop_l_subtalar_RotationInterpolator"));
SoROUTE2492->setFromField(QString("value_changed"));
SoROUTE2492->setToNode(QString("hanim_l_subtalar"));
SoROUTE2492->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2492);

SoROUTE* SoROUTE2493 = new SoROUTE();
SoROUTE2493->setFromNode(QString("Stop_l_midtarsal_RotationInterpolator"));
SoROUTE2493->setFromField(QString("value_changed"));
SoROUTE2493->setToNode(QString("hanim_l_midtarsal"));
SoROUTE2493->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2493);

SoROUTE* SoROUTE2494 = new SoROUTE();
SoROUTE2494->setFromNode(QString("Stop_l_metatarsal_RotationInterpolator"));
SoROUTE2494->setFromField(QString("value_changed"));
SoROUTE2494->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2494->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2494);

SoROUTE* SoROUTE2495 = new SoROUTE();
SoROUTE2495->setFromNode(QString("Stop_r_hip_RotationInterpolator"));
SoROUTE2495->setFromField(QString("value_changed"));
SoROUTE2495->setToNode(QString("hanim_r_hip"));
SoROUTE2495->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2495);

SoROUTE* SoROUTE2496 = new SoROUTE();
SoROUTE2496->setFromNode(QString("Stop_r_knee_RotationInterpolator"));
SoROUTE2496->setFromField(QString("value_changed"));
SoROUTE2496->setToNode(QString("hanim_r_knee"));
SoROUTE2496->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2496);

SoROUTE* SoROUTE2497 = new SoROUTE();
SoROUTE2497->setFromNode(QString("Stop_r_ankle_RotationInterpolator"));
SoROUTE2497->setFromField(QString("value_changed"));
SoROUTE2497->setToNode(QString("hanim_r_ankle"));
SoROUTE2497->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2497);

SoROUTE* SoROUTE2498 = new SoROUTE();
SoROUTE2498->setFromNode(QString("Stop_r_subtalar_RotationInterpolator"));
SoROUTE2498->setFromField(QString("value_changed"));
SoROUTE2498->setToNode(QString("hanim_r_subtalar"));
SoROUTE2498->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2498);

SoROUTE* SoROUTE2499 = new SoROUTE();
SoROUTE2499->setFromNode(QString("Stop_r_midtarsal_RotationInterpolator"));
SoROUTE2499->setFromField(QString("value_changed"));
SoROUTE2499->setToNode(QString("hanim_r_midtarsal"));
SoROUTE2499->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2499);

SoROUTE* SoROUTE2500 = new SoROUTE();
SoROUTE2500->setFromNode(QString("Stop_r_metatarsal_RotationInterpolator"));
SoROUTE2500->setFromField(QString("value_changed"));
SoROUTE2500->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2500->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2500);

SoROUTE* SoROUTE2501 = new SoROUTE();
SoROUTE2501->setFromNode(QString("Stop_vl5_RotationInterpolator"));
SoROUTE2501->setFromField(QString("value_changed"));
SoROUTE2501->setToNode(QString("hanim_vl5"));
SoROUTE2501->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2501);

SoROUTE* SoROUTE2502 = new SoROUTE();
SoROUTE2502->setFromNode(QString("Stop_vl4_RotationInterpolator"));
SoROUTE2502->setFromField(QString("value_changed"));
SoROUTE2502->setToNode(QString("hanim_vl4"));
SoROUTE2502->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2502);

SoROUTE* SoROUTE2503 = new SoROUTE();
SoROUTE2503->setFromNode(QString("Stop_vl3_RotationInterpolator"));
SoROUTE2503->setFromField(QString("value_changed"));
SoROUTE2503->setToNode(QString("hanim_vl3"));
SoROUTE2503->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2503);

SoROUTE* SoROUTE2504 = new SoROUTE();
SoROUTE2504->setFromNode(QString("Stop_vl2_RotationInterpolator"));
SoROUTE2504->setFromField(QString("value_changed"));
SoROUTE2504->setToNode(QString("hanim_vl2"));
SoROUTE2504->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2504);

SoROUTE* SoROUTE2505 = new SoROUTE();
SoROUTE2505->setFromNode(QString("Stop_vl1_RotationInterpolator"));
SoROUTE2505->setFromField(QString("value_changed"));
SoROUTE2505->setToNode(QString("hanim_vl1"));
SoROUTE2505->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2505);

SoROUTE* SoROUTE2506 = new SoROUTE();
SoROUTE2506->setFromNode(QString("Stop_vt12_RotationInterpolator"));
SoROUTE2506->setFromField(QString("value_changed"));
SoROUTE2506->setToNode(QString("hanim_vt12"));
SoROUTE2506->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2506);

SoROUTE* SoROUTE2507 = new SoROUTE();
SoROUTE2507->setFromNode(QString("Stop_vt11_RotationInterpolator"));
SoROUTE2507->setFromField(QString("value_changed"));
SoROUTE2507->setToNode(QString("hanim_vt11"));
SoROUTE2507->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2507);

SoROUTE* SoROUTE2508 = new SoROUTE();
SoROUTE2508->setFromNode(QString("Stop_vt10_RotationInterpolator"));
SoROUTE2508->setFromField(QString("value_changed"));
SoROUTE2508->setToNode(QString("hanim_vt10"));
SoROUTE2508->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2508);

SoROUTE* SoROUTE2509 = new SoROUTE();
SoROUTE2509->setFromNode(QString("Stop_vt9_RotationInterpolator"));
SoROUTE2509->setFromField(QString("value_changed"));
SoROUTE2509->setToNode(QString("hanim_vt9"));
SoROUTE2509->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2509);

SoROUTE* SoROUTE2510 = new SoROUTE();
SoROUTE2510->setFromNode(QString("Stop_vt8_RotationInterpolator"));
SoROUTE2510->setFromField(QString("value_changed"));
SoROUTE2510->setToNode(QString("hanim_vt8"));
SoROUTE2510->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2510);

SoROUTE* SoROUTE2511 = new SoROUTE();
SoROUTE2511->setFromNode(QString("Stop_vt7_RotationInterpolator"));
SoROUTE2511->setFromField(QString("value_changed"));
SoROUTE2511->setToNode(QString("hanim_vt7"));
SoROUTE2511->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2511);

SoROUTE* SoROUTE2512 = new SoROUTE();
SoROUTE2512->setFromNode(QString("Stop_vt6_RotationInterpolator"));
SoROUTE2512->setFromField(QString("value_changed"));
SoROUTE2512->setToNode(QString("hanim_vt6"));
SoROUTE2512->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2512);

SoROUTE* SoROUTE2513 = new SoROUTE();
SoROUTE2513->setFromNode(QString("Stop_vt5_RotationInterpolator"));
SoROUTE2513->setFromField(QString("value_changed"));
SoROUTE2513->setToNode(QString("hanim_vt5"));
SoROUTE2513->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2513);

SoROUTE* SoROUTE2514 = new SoROUTE();
SoROUTE2514->setFromNode(QString("Stop_vt4_RotationInterpolator"));
SoROUTE2514->setFromField(QString("value_changed"));
SoROUTE2514->setToNode(QString("hanim_vt4"));
SoROUTE2514->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2514);

SoROUTE* SoROUTE2515 = new SoROUTE();
SoROUTE2515->setFromNode(QString("Stop_vt3_RotationInterpolator"));
SoROUTE2515->setFromField(QString("value_changed"));
SoROUTE2515->setToNode(QString("hanim_vt3"));
SoROUTE2515->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2515);

SoROUTE* SoROUTE2516 = new SoROUTE();
SoROUTE2516->setFromNode(QString("Stop_vt2_RotationInterpolator"));
SoROUTE2516->setFromField(QString("value_changed"));
SoROUTE2516->setToNode(QString("hanim_vt2"));
SoROUTE2516->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2516);

SoROUTE* SoROUTE2517 = new SoROUTE();
SoROUTE2517->setFromNode(QString("Stop_vt1_RotationInterpolator"));
SoROUTE2517->setFromField(QString("value_changed"));
SoROUTE2517->setToNode(QString("hanim_vt1"));
SoROUTE2517->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2517);

SoROUTE* SoROUTE2518 = new SoROUTE();
SoROUTE2518->setFromNode(QString("Stop_vc7_RotationInterpolator"));
SoROUTE2518->setFromField(QString("value_changed"));
SoROUTE2518->setToNode(QString("hanim_vc7"));
SoROUTE2518->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2518);

SoROUTE* SoROUTE2519 = new SoROUTE();
SoROUTE2519->setFromNode(QString("Stop_vc6_RotationInterpolator"));
SoROUTE2519->setFromField(QString("value_changed"));
SoROUTE2519->setToNode(QString("hanim_vc6"));
SoROUTE2519->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2519);

SoROUTE* SoROUTE2520 = new SoROUTE();
SoROUTE2520->setFromNode(QString("Stop_vc5_RotationInterpolator"));
SoROUTE2520->setFromField(QString("value_changed"));
SoROUTE2520->setToNode(QString("hanim_vc5"));
SoROUTE2520->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2520);

SoROUTE* SoROUTE2521 = new SoROUTE();
SoROUTE2521->setFromNode(QString("Stop_vc4_RotationInterpolator"));
SoROUTE2521->setFromField(QString("value_changed"));
SoROUTE2521->setToNode(QString("hanim_vc4"));
SoROUTE2521->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2521);

SoROUTE* SoROUTE2522 = new SoROUTE();
SoROUTE2522->setFromNode(QString("Stop_vc3_RotationInterpolator"));
SoROUTE2522->setFromField(QString("value_changed"));
SoROUTE2522->setToNode(QString("hanim_vc3"));
SoROUTE2522->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2522);

SoROUTE* SoROUTE2523 = new SoROUTE();
SoROUTE2523->setFromNode(QString("Stop_vc2_RotationInterpolator"));
SoROUTE2523->setFromField(QString("value_changed"));
SoROUTE2523->setToNode(QString("hanim_vc2"));
SoROUTE2523->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2523);

SoROUTE* SoROUTE2524 = new SoROUTE();
SoROUTE2524->setFromNode(QString("Stop_vc1_RotationInterpolator"));
SoROUTE2524->setFromField(QString("value_changed"));
SoROUTE2524->setToNode(QString("hanim_vc1"));
SoROUTE2524->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2524);

SoROUTE* SoROUTE2525 = new SoROUTE();
SoROUTE2525->setFromNode(QString("Stop_skullbase_RotationInterpolator"));
SoROUTE2525->setFromField(QString("value_changed"));
SoROUTE2525->setToNode(QString("hanim_skullbase"));
SoROUTE2525->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2525);

SoROUTE* SoROUTE2526 = new SoROUTE();
SoROUTE2526->setFromNode(QString("Stop_l_eyeball_joint_RotationInterpolator"));
SoROUTE2526->setFromField(QString("value_changed"));
SoROUTE2526->setToNode(QString("hanim_l_eyeball_joint"));
SoROUTE2526->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2526);

SoROUTE* SoROUTE2527 = new SoROUTE();
SoROUTE2527->setFromNode(QString("Stop_r_eyeball_joint_RotationInterpolator"));
SoROUTE2527->setFromField(QString("value_changed"));
SoROUTE2527->setToNode(QString("hanim_r_eyeball_joint"));
SoROUTE2527->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2527);

SoROUTE* SoROUTE2528 = new SoROUTE();
SoROUTE2528->setFromNode(QString("Stop_l_sternoclavicular_RotationInterpolator"));
SoROUTE2528->setFromField(QString("value_changed"));
SoROUTE2528->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2528->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2528);

SoROUTE* SoROUTE2529 = new SoROUTE();
SoROUTE2529->setFromNode(QString("Stop_l_acromioclavicular_RotationInterpolator"));
SoROUTE2529->setFromField(QString("value_changed"));
SoROUTE2529->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2529->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2529);

SoROUTE* SoROUTE2530 = new SoROUTE();
SoROUTE2530->setFromNode(QString("Stop_l_shoulder_RotationInterpolator"));
SoROUTE2530->setFromField(QString("value_changed"));
SoROUTE2530->setToNode(QString("hanim_l_shoulder"));
SoROUTE2530->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2530);

SoROUTE* SoROUTE2531 = new SoROUTE();
SoROUTE2531->setFromNode(QString("Stop_l_elbow_RotationInterpolator"));
SoROUTE2531->setFromField(QString("value_changed"));
SoROUTE2531->setToNode(QString("hanim_l_elbow"));
SoROUTE2531->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2531);

SoROUTE* SoROUTE2532 = new SoROUTE();
SoROUTE2532->setFromNode(QString("Stop_l_wrist_RotationInterpolator"));
SoROUTE2532->setFromField(QString("value_changed"));
SoROUTE2532->setToNode(QString("hanim_l_wrist"));
SoROUTE2532->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2532);

SoROUTE* SoROUTE2533 = new SoROUTE();
SoROUTE2533->setFromNode(QString("Stop_l_thumb1_RotationInterpolator"));
SoROUTE2533->setFromField(QString("value_changed"));
SoROUTE2533->setToNode(QString("hanim_l_thumb1"));
SoROUTE2533->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2533);

SoROUTE* SoROUTE2534 = new SoROUTE();
SoROUTE2534->setFromNode(QString("Stop_l_thumb2_RotationInterpolator"));
SoROUTE2534->setFromField(QString("value_changed"));
SoROUTE2534->setToNode(QString("hanim_l_thumb2"));
SoROUTE2534->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2534);

SoROUTE* SoROUTE2535 = new SoROUTE();
SoROUTE2535->setFromNode(QString("Stop_l_thumb3_RotationInterpolator"));
SoROUTE2535->setFromField(QString("value_changed"));
SoROUTE2535->setToNode(QString("hanim_l_thumb3"));
SoROUTE2535->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2535);

SoROUTE* SoROUTE2536 = new SoROUTE();
SoROUTE2536->setFromNode(QString("Stop_l_index0_RotationInterpolator"));
SoROUTE2536->setFromField(QString("value_changed"));
SoROUTE2536->setToNode(QString("hanim_l_index0"));
SoROUTE2536->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2536);

SoROUTE* SoROUTE2537 = new SoROUTE();
SoROUTE2537->setFromNode(QString("Stop_l_index1_RotationInterpolator"));
SoROUTE2537->setFromField(QString("value_changed"));
SoROUTE2537->setToNode(QString("hanim_l_index1"));
SoROUTE2537->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2537);

SoROUTE* SoROUTE2538 = new SoROUTE();
SoROUTE2538->setFromNode(QString("Stop_l_index2_RotationInterpolator"));
SoROUTE2538->setFromField(QString("value_changed"));
SoROUTE2538->setToNode(QString("hanim_l_index2"));
SoROUTE2538->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2538);

SoROUTE* SoROUTE2539 = new SoROUTE();
SoROUTE2539->setFromNode(QString("Stop_l_index3_RotationInterpolator"));
SoROUTE2539->setFromField(QString("value_changed"));
SoROUTE2539->setToNode(QString("hanim_l_index3"));
SoROUTE2539->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2539);

SoROUTE* SoROUTE2540 = new SoROUTE();
SoROUTE2540->setFromNode(QString("Stop_l_middle0_RotationInterpolator"));
SoROUTE2540->setFromField(QString("value_changed"));
SoROUTE2540->setToNode(QString("hanim_l_middle0"));
SoROUTE2540->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2540);

SoROUTE* SoROUTE2541 = new SoROUTE();
SoROUTE2541->setFromNode(QString("Stop_l_middle1_RotationInterpolator"));
SoROUTE2541->setFromField(QString("value_changed"));
SoROUTE2541->setToNode(QString("hanim_l_middle1"));
SoROUTE2541->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2541);

SoROUTE* SoROUTE2542 = new SoROUTE();
SoROUTE2542->setFromNode(QString("Stop_l_middle2_RotationInterpolator"));
SoROUTE2542->setFromField(QString("value_changed"));
SoROUTE2542->setToNode(QString("hanim_l_middle2"));
SoROUTE2542->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2542);

SoROUTE* SoROUTE2543 = new SoROUTE();
SoROUTE2543->setFromNode(QString("Stop_l_middle3_RotationInterpolator"));
SoROUTE2543->setFromField(QString("value_changed"));
SoROUTE2543->setToNode(QString("hanim_l_middle3"));
SoROUTE2543->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2543);

SoROUTE* SoROUTE2544 = new SoROUTE();
SoROUTE2544->setFromNode(QString("Stop_l_ring0_RotationInterpolator"));
SoROUTE2544->setFromField(QString("value_changed"));
SoROUTE2544->setToNode(QString("hanim_l_ring0"));
SoROUTE2544->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2544);

SoROUTE* SoROUTE2545 = new SoROUTE();
SoROUTE2545->setFromNode(QString("Stop_l_ring1_RotationInterpolator"));
SoROUTE2545->setFromField(QString("value_changed"));
SoROUTE2545->setToNode(QString("hanim_l_ring1"));
SoROUTE2545->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2545);

SoROUTE* SoROUTE2546 = new SoROUTE();
SoROUTE2546->setFromNode(QString("Stop_l_ring2_RotationInterpolator"));
SoROUTE2546->setFromField(QString("value_changed"));
SoROUTE2546->setToNode(QString("hanim_l_ring2"));
SoROUTE2546->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2546);

SoROUTE* SoROUTE2547 = new SoROUTE();
SoROUTE2547->setFromNode(QString("Stop_l_ring3_RotationInterpolator"));
SoROUTE2547->setFromField(QString("value_changed"));
SoROUTE2547->setToNode(QString("hanim_l_ring3"));
SoROUTE2547->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2547);

SoROUTE* SoROUTE2548 = new SoROUTE();
SoROUTE2548->setFromNode(QString("Stop_l_pinky0_RotationInterpolator"));
SoROUTE2548->setFromField(QString("value_changed"));
SoROUTE2548->setToNode(QString("hanim_l_pinky0"));
SoROUTE2548->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2548);

SoROUTE* SoROUTE2549 = new SoROUTE();
SoROUTE2549->setFromNode(QString("Stop_l_pinky1_RotationInterpolator"));
SoROUTE2549->setFromField(QString("value_changed"));
SoROUTE2549->setToNode(QString("hanim_l_pinky1"));
SoROUTE2549->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2549);

SoROUTE* SoROUTE2550 = new SoROUTE();
SoROUTE2550->setFromNode(QString("Stop_l_pinky2_RotationInterpolator"));
SoROUTE2550->setFromField(QString("value_changed"));
SoROUTE2550->setToNode(QString("hanim_l_pinky2"));
SoROUTE2550->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2550);

SoROUTE* SoROUTE2551 = new SoROUTE();
SoROUTE2551->setFromNode(QString("Stop_l_pinky3_RotationInterpolator"));
SoROUTE2551->setFromField(QString("value_changed"));
SoROUTE2551->setToNode(QString("hanim_l_pinky3"));
SoROUTE2551->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2551);

SoROUTE* SoROUTE2552 = new SoROUTE();
SoROUTE2552->setFromNode(QString("Stop_r_sternoclavicular_RotationInterpolator"));
SoROUTE2552->setFromField(QString("value_changed"));
SoROUTE2552->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2552->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2552);

SoROUTE* SoROUTE2553 = new SoROUTE();
SoROUTE2553->setFromNode(QString("Stop_r_acromioclavicular_RotationInterpolator"));
SoROUTE2553->setFromField(QString("value_changed"));
SoROUTE2553->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2553->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2553);

SoROUTE* SoROUTE2554 = new SoROUTE();
SoROUTE2554->setFromNode(QString("Stop_r_shoulder_RotationInterpolator"));
SoROUTE2554->setFromField(QString("value_changed"));
SoROUTE2554->setToNode(QString("hanim_r_shoulder"));
SoROUTE2554->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2554);

SoROUTE* SoROUTE2555 = new SoROUTE();
SoROUTE2555->setFromNode(QString("Stop_r_elbow_RotationInterpolator"));
SoROUTE2555->setFromField(QString("value_changed"));
SoROUTE2555->setToNode(QString("hanim_r_elbow"));
SoROUTE2555->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2555);

SoROUTE* SoROUTE2556 = new SoROUTE();
SoROUTE2556->setFromNode(QString("Stop_r_wrist_RotationInterpolator"));
SoROUTE2556->setFromField(QString("value_changed"));
SoROUTE2556->setToNode(QString("hanim_r_wrist"));
SoROUTE2556->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2556);

SoROUTE* SoROUTE2557 = new SoROUTE();
SoROUTE2557->setFromNode(QString("Stop_r_thumb1_RotationInterpolator"));
SoROUTE2557->setFromField(QString("value_changed"));
SoROUTE2557->setToNode(QString("hanim_r_thumb1"));
SoROUTE2557->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2557);

SoROUTE* SoROUTE2558 = new SoROUTE();
SoROUTE2558->setFromNode(QString("Stop_r_thumb2_RotationInterpolator"));
SoROUTE2558->setFromField(QString("value_changed"));
SoROUTE2558->setToNode(QString("hanim_r_thumb2"));
SoROUTE2558->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2558);

SoROUTE* SoROUTE2559 = new SoROUTE();
SoROUTE2559->setFromNode(QString("Stop_r_thumb3_RotationInterpolator"));
SoROUTE2559->setFromField(QString("value_changed"));
SoROUTE2559->setToNode(QString("hanim_r_thumb3"));
SoROUTE2559->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2559);

SoROUTE* SoROUTE2560 = new SoROUTE();
SoROUTE2560->setFromNode(QString("Stop_r_index0_RotationInterpolator"));
SoROUTE2560->setFromField(QString("value_changed"));
SoROUTE2560->setToNode(QString("hanim_r_index0"));
SoROUTE2560->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2560);

SoROUTE* SoROUTE2561 = new SoROUTE();
SoROUTE2561->setFromNode(QString("Stop_r_index1_RotationInterpolator"));
SoROUTE2561->setFromField(QString("value_changed"));
SoROUTE2561->setToNode(QString("hanim_r_index1"));
SoROUTE2561->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2561);

SoROUTE* SoROUTE2562 = new SoROUTE();
SoROUTE2562->setFromNode(QString("Stop_r_index2_RotationInterpolator"));
SoROUTE2562->setFromField(QString("value_changed"));
SoROUTE2562->setToNode(QString("hanim_r_index2"));
SoROUTE2562->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2562);

SoROUTE* SoROUTE2563 = new SoROUTE();
SoROUTE2563->setFromNode(QString("Stop_r_index3_RotationInterpolator"));
SoROUTE2563->setFromField(QString("value_changed"));
SoROUTE2563->setToNode(QString("hanim_r_index3"));
SoROUTE2563->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2563);

SoROUTE* SoROUTE2564 = new SoROUTE();
SoROUTE2564->setFromNode(QString("Stop_r_middle0_RotationInterpolator"));
SoROUTE2564->setFromField(QString("value_changed"));
SoROUTE2564->setToNode(QString("hanim_r_middle0"));
SoROUTE2564->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2564);

SoROUTE* SoROUTE2565 = new SoROUTE();
SoROUTE2565->setFromNode(QString("Stop_r_middle1_RotationInterpolator"));
SoROUTE2565->setFromField(QString("value_changed"));
SoROUTE2565->setToNode(QString("hanim_r_middle1"));
SoROUTE2565->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2565);

SoROUTE* SoROUTE2566 = new SoROUTE();
SoROUTE2566->setFromNode(QString("Stop_r_middle2_RotationInterpolator"));
SoROUTE2566->setFromField(QString("value_changed"));
SoROUTE2566->setToNode(QString("hanim_r_middle2"));
SoROUTE2566->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2566);

SoROUTE* SoROUTE2567 = new SoROUTE();
SoROUTE2567->setFromNode(QString("Stop_r_middle3_RotationInterpolator"));
SoROUTE2567->setFromField(QString("value_changed"));
SoROUTE2567->setToNode(QString("hanim_r_middle3"));
SoROUTE2567->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2567);

SoROUTE* SoROUTE2568 = new SoROUTE();
SoROUTE2568->setFromNode(QString("Stop_r_ring0_RotationInterpolator"));
SoROUTE2568->setFromField(QString("value_changed"));
SoROUTE2568->setToNode(QString("hanim_r_ring0"));
SoROUTE2568->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2568);

SoROUTE* SoROUTE2569 = new SoROUTE();
SoROUTE2569->setFromNode(QString("Stop_r_ring1_RotationInterpolator"));
SoROUTE2569->setFromField(QString("value_changed"));
SoROUTE2569->setToNode(QString("hanim_r_ring1"));
SoROUTE2569->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2569);

SoROUTE* SoROUTE2570 = new SoROUTE();
SoROUTE2570->setFromNode(QString("Stop_r_ring2_RotationInterpolator"));
SoROUTE2570->setFromField(QString("value_changed"));
SoROUTE2570->setToNode(QString("hanim_r_ring2"));
SoROUTE2570->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2570);

SoROUTE* SoROUTE2571 = new SoROUTE();
SoROUTE2571->setFromNode(QString("Stop_r_ring3_RotationInterpolator"));
SoROUTE2571->setFromField(QString("value_changed"));
SoROUTE2571->setToNode(QString("hanim_r_ring3"));
SoROUTE2571->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2571);

SoROUTE* SoROUTE2572 = new SoROUTE();
SoROUTE2572->setFromNode(QString("Stop_r_pinky0_RotationInterpolator"));
SoROUTE2572->setFromField(QString("value_changed"));
SoROUTE2572->setToNode(QString("hanim_r_pinky0"));
SoROUTE2572->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2572);

SoROUTE* SoROUTE2573 = new SoROUTE();
SoROUTE2573->setFromNode(QString("Stop_r_pinky1_RotationInterpolator"));
SoROUTE2573->setFromField(QString("value_changed"));
SoROUTE2573->setToNode(QString("hanim_r_pinky1"));
SoROUTE2573->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2573);

SoROUTE* SoROUTE2574 = new SoROUTE();
SoROUTE2574->setFromNode(QString("Stop_r_pinky2_RotationInterpolator"));
SoROUTE2574->setFromField(QString("value_changed"));
SoROUTE2574->setToNode(QString("hanim_r_pinky2"));
SoROUTE2574->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2574);

SoROUTE* SoROUTE2575 = new SoROUTE();
SoROUTE2575->setFromNode(QString("Stop_r_pinky3_RotationInterpolator"));
SoROUTE2575->setFromField(QString("value_changed"));
SoROUTE2575->setToNode(QString("hanim_r_pinky3"));
SoROUTE2575->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2575);

SoROUTE* SoROUTE2576 = new SoROUTE();
SoROUTE2576->setFromNode(QString("StandTimer"));
SoROUTE2576->setFromField(QString("fraction_changed"));
SoROUTE2576->setToNode(QString("Stand_r_ankle_RotationInterpolator"));
SoROUTE2576->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2576);

SoROUTE* SoROUTE2577 = new SoROUTE();
SoROUTE2577->setFromNode(QString("StandTimer"));
SoROUTE2577->setFromField(QString("fraction_changed"));
SoROUTE2577->setToNode(QString("Stand_r_knee_RotationInterpolator"));
SoROUTE2577->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2577);

SoROUTE* SoROUTE2578 = new SoROUTE();
SoROUTE2578->setFromNode(QString("StandTimer"));
SoROUTE2578->setFromField(QString("fraction_changed"));
SoROUTE2578->setToNode(QString("Stand_r_hip_RotationInterpolator"));
SoROUTE2578->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2578);

SoROUTE* SoROUTE2579 = new SoROUTE();
SoROUTE2579->setFromNode(QString("StandTimer"));
SoROUTE2579->setFromField(QString("fraction_changed"));
SoROUTE2579->setToNode(QString("Stand_l_ankle_RotationInterpolator"));
SoROUTE2579->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2579);

SoROUTE* SoROUTE2580 = new SoROUTE();
SoROUTE2580->setFromNode(QString("StandTimer"));
SoROUTE2580->setFromField(QString("fraction_changed"));
SoROUTE2580->setToNode(QString("Stand_l_knee_RotationInterpolator"));
SoROUTE2580->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2580);

SoROUTE* SoROUTE2581 = new SoROUTE();
SoROUTE2581->setFromNode(QString("StandTimer"));
SoROUTE2581->setFromField(QString("fraction_changed"));
SoROUTE2581->setToNode(QString("Stand_l_hip_RotationInterpolator"));
SoROUTE2581->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2581);

SoROUTE* SoROUTE2582 = new SoROUTE();
SoROUTE2582->setFromNode(QString("StandTimer"));
SoROUTE2582->setFromField(QString("fraction_changed"));
SoROUTE2582->setToNode(QString("Stand_lower_body_RotationInterpolator"));
SoROUTE2582->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2582);

SoROUTE* SoROUTE2583 = new SoROUTE();
SoROUTE2583->setFromNode(QString("StandTimer"));
SoROUTE2583->setFromField(QString("fraction_changed"));
SoROUTE2583->setToNode(QString("Stand_r_wrist_RotationInterpolator"));
SoROUTE2583->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2583);

SoROUTE* SoROUTE2584 = new SoROUTE();
SoROUTE2584->setFromNode(QString("StandTimer"));
SoROUTE2584->setFromField(QString("fraction_changed"));
SoROUTE2584->setToNode(QString("Stand_r_elbow_RotationInterpolator"));
SoROUTE2584->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2584);

SoROUTE* SoROUTE2585 = new SoROUTE();
SoROUTE2585->setFromNode(QString("StandTimer"));
SoROUTE2585->setFromField(QString("fraction_changed"));
SoROUTE2585->setToNode(QString("Stand_r_shoulder_RotationInterpolator"));
SoROUTE2585->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2585);

SoROUTE* SoROUTE2586 = new SoROUTE();
SoROUTE2586->setFromNode(QString("StandTimer"));
SoROUTE2586->setFromField(QString("fraction_changed"));
SoROUTE2586->setToNode(QString("Stand_l_wrist_RotationInterpolator"));
SoROUTE2586->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2586);

SoROUTE* SoROUTE2587 = new SoROUTE();
SoROUTE2587->setFromNode(QString("StandTimer"));
SoROUTE2587->setFromField(QString("fraction_changed"));
SoROUTE2587->setToNode(QString("Stand_l_elbow_RotationInterpolator"));
SoROUTE2587->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2587);

SoROUTE* SoROUTE2588 = new SoROUTE();
SoROUTE2588->setFromNode(QString("StandTimer"));
SoROUTE2588->setFromField(QString("fraction_changed"));
SoROUTE2588->setToNode(QString("Stand_l_shoulder_RotationInterpolator"));
SoROUTE2588->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2588);

SoROUTE* SoROUTE2589 = new SoROUTE();
SoROUTE2589->setFromNode(QString("StandTimer"));
SoROUTE2589->setFromField(QString("fraction_changed"));
SoROUTE2589->setToNode(QString("Stand_head_RotationInterpolator"));
SoROUTE2589->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2589);

SoROUTE* SoROUTE2590 = new SoROUTE();
SoROUTE2590->setFromNode(QString("StandTimer"));
SoROUTE2590->setFromField(QString("fraction_changed"));
SoROUTE2590->setToNode(QString("Stand_neck_RotationInterpolator"));
SoROUTE2590->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2590);

SoROUTE* SoROUTE2591 = new SoROUTE();
SoROUTE2591->setFromNode(QString("StandTimer"));
SoROUTE2591->setFromField(QString("fraction_changed"));
SoROUTE2591->setToNode(QString("Stand_l_eyeball_RotationInterpolator"));
SoROUTE2591->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2591);

SoROUTE* SoROUTE2592 = new SoROUTE();
SoROUTE2592->setFromNode(QString("StandTimer"));
SoROUTE2592->setFromField(QString("fraction_changed"));
SoROUTE2592->setToNode(QString("Stand_r_eyeball_RotationInterpolator"));
SoROUTE2592->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2592);

SoROUTE* SoROUTE2593 = new SoROUTE();
SoROUTE2593->setFromNode(QString("StandTimer"));
SoROUTE2593->setFromField(QString("fraction_changed"));
SoROUTE2593->setToNode(QString("Stand_upper_body_RotationInterpolator"));
SoROUTE2593->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2593);

SoROUTE* SoROUTE2594 = new SoROUTE();
SoROUTE2594->setFromNode(QString("StandTimer"));
SoROUTE2594->setFromField(QString("fraction_changed"));
SoROUTE2594->setToNode(QString("Stand_whole_body_RotationInterpolator"));
SoROUTE2594->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2594);

SoROUTE* SoROUTE2595 = new SoROUTE();
SoROUTE2595->setFromNode(QString("StandTimer"));
SoROUTE2595->setFromField(QString("fraction_changed"));
SoROUTE2595->setToNode(QString("Stand_whole_body_TranslationInterpolator"));
SoROUTE2595->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2595);

SoROUTE* SoROUTE2596 = new SoROUTE();
SoROUTE2596->setFromNode(QString("StandTimer"));
SoROUTE2596->setFromField(QString("fraction_changed"));
SoROUTE2596->setToNode(QString("Stand_l_sternoclavicular_RollInterpolator"));
SoROUTE2596->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2596);

SoROUTE* SoROUTE2597 = new SoROUTE();
SoROUTE2597->setFromNode(QString("StandTimer"));
SoROUTE2597->setFromField(QString("fraction_changed"));
SoROUTE2597->setToNode(QString("Stand_l_acromioclavicular_RollInterpolator"));
SoROUTE2597->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2597);

SoROUTE* SoROUTE2598 = new SoROUTE();
SoROUTE2598->setFromNode(QString("StandTimer"));
SoROUTE2598->setFromField(QString("fraction_changed"));
SoROUTE2598->setToNode(QString("Stand_r_sternoclavicular_RollInterpolator"));
SoROUTE2598->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2598);

SoROUTE* SoROUTE2599 = new SoROUTE();
SoROUTE2599->setFromNode(QString("StandTimer"));
SoROUTE2599->setFromField(QString("fraction_changed"));
SoROUTE2599->setToNode(QString("Stand_r_acromioclavicular_RollInterpolator"));
SoROUTE2599->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2599);

SoROUTE* SoROUTE2600 = new SoROUTE();
SoROUTE2600->setFromNode(QString("StandTimer"));
SoROUTE2600->setFromField(QString("fraction_changed"));
SoROUTE2600->setToNode(QString("Stand_r_metatarsal_PitchInterpolator"));
SoROUTE2600->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2600);

SoROUTE* SoROUTE2601 = new SoROUTE();
SoROUTE2601->setFromNode(QString("StandTimer"));
SoROUTE2601->setFromField(QString("fraction_changed"));
SoROUTE2601->setToNode(QString("Stand_sacroiliac_YawInterpolator"));
SoROUTE2601->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2601);

SoROUTE* SoROUTE2602 = new SoROUTE();
SoROUTE2602->setFromNode(QString("StandTimer"));
SoROUTE2602->setFromField(QString("fraction_changed"));
SoROUTE2602->setToNode(QString("Stand_vl5_YawInterpolator"));
SoROUTE2602->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2602);

SoROUTE* SoROUTE2603 = new SoROUTE();
SoROUTE2603->setFromNode(QString("StandTimer"));
SoROUTE2603->setFromField(QString("fraction_changed"));
SoROUTE2603->setToNode(QString("Stand_vc6_YawInterpolator"));
SoROUTE2603->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2603);

SoROUTE* SoROUTE2604 = new SoROUTE();
SoROUTE2604->setFromNode(QString("StandTimer"));
SoROUTE2604->setFromField(QString("fraction_changed"));
SoROUTE2604->setToNode(QString("Stand_l_thumb1_PitchInterpolator"));
SoROUTE2604->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2604);

SoROUTE* SoROUTE2605 = new SoROUTE();
SoROUTE2605->setFromNode(QString("StandTimer"));
SoROUTE2605->setFromField(QString("fraction_changed"));
SoROUTE2605->setToNode(QString("Stand_r_thumb1_PitchInterpolator"));
SoROUTE2605->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2605);

SoROUTE* SoROUTE2606 = new SoROUTE();
SoROUTE2606->setFromNode(QString("StandTimer"));
SoROUTE2606->setFromField(QString("fraction_changed"));
SoROUTE2606->setToNode(QString("Stand_r_index1_RollInterpolator"));
SoROUTE2606->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2606);

SoROUTE* SoROUTE2607 = new SoROUTE();
SoROUTE2607->setFromNode(QString("StandTimer"));
SoROUTE2607->setFromField(QString("fraction_changed"));
SoROUTE2607->setToNode(QString("Stand_r_index2_RollInterpolator"));
SoROUTE2607->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2607);

SoROUTE* SoROUTE2608 = new SoROUTE();
SoROUTE2608->setFromNode(QString("StandTimer"));
SoROUTE2608->setFromField(QString("fraction_changed"));
SoROUTE2608->setToNode(QString("Stand_r_index3_RollInterpolator"));
SoROUTE2608->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2608);

SoROUTE* SoROUTE2609 = new SoROUTE();
SoROUTE2609->setFromNode(QString("Stand_r_ankle_RotationInterpolator"));
SoROUTE2609->setFromField(QString("value_changed"));
SoROUTE2609->setToNode(QString("hanim_r_ankle"));
SoROUTE2609->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2609);

SoROUTE* SoROUTE2610 = new SoROUTE();
SoROUTE2610->setFromNode(QString("Stand_r_knee_RotationInterpolator"));
SoROUTE2610->setFromField(QString("value_changed"));
SoROUTE2610->setToNode(QString("hanim_r_knee"));
SoROUTE2610->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2610);

SoROUTE* SoROUTE2611 = new SoROUTE();
SoROUTE2611->setFromNode(QString("Stand_r_hip_RotationInterpolator"));
SoROUTE2611->setFromField(QString("value_changed"));
SoROUTE2611->setToNode(QString("hanim_r_hip"));
SoROUTE2611->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2611);

SoROUTE* SoROUTE2612 = new SoROUTE();
SoROUTE2612->setFromNode(QString("Stand_l_ankle_RotationInterpolator"));
SoROUTE2612->setFromField(QString("value_changed"));
SoROUTE2612->setToNode(QString("hanim_l_ankle"));
SoROUTE2612->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2612);

SoROUTE* SoROUTE2613 = new SoROUTE();
SoROUTE2613->setFromNode(QString("Stand_l_knee_RotationInterpolator"));
SoROUTE2613->setFromField(QString("value_changed"));
SoROUTE2613->setToNode(QString("hanim_l_knee"));
SoROUTE2613->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2613);

SoROUTE* SoROUTE2614 = new SoROUTE();
SoROUTE2614->setFromNode(QString("Stand_l_hip_RotationInterpolator"));
SoROUTE2614->setFromField(QString("value_changed"));
SoROUTE2614->setToNode(QString("hanim_l_hip"));
SoROUTE2614->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2614);

SoROUTE* SoROUTE2615 = new SoROUTE();
SoROUTE2615->setFromNode(QString("Stand_r_wrist_RotationInterpolator"));
SoROUTE2615->setFromField(QString("value_changed"));
SoROUTE2615->setToNode(QString("hanim_r_wrist"));
SoROUTE2615->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2615);

SoROUTE* SoROUTE2616 = new SoROUTE();
SoROUTE2616->setFromNode(QString("Stand_r_elbow_RotationInterpolator"));
SoROUTE2616->setFromField(QString("value_changed"));
SoROUTE2616->setToNode(QString("hanim_r_elbow"));
SoROUTE2616->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2616);

SoROUTE* SoROUTE2617 = new SoROUTE();
SoROUTE2617->setFromNode(QString("Stand_r_shoulder_RotationInterpolator"));
SoROUTE2617->setFromField(QString("value_changed"));
SoROUTE2617->setToNode(QString("hanim_r_shoulder"));
SoROUTE2617->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2617);

SoROUTE* SoROUTE2618 = new SoROUTE();
SoROUTE2618->setFromNode(QString("Stand_l_wrist_RotationInterpolator"));
SoROUTE2618->setFromField(QString("value_changed"));
SoROUTE2618->setToNode(QString("hanim_l_wrist"));
SoROUTE2618->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2618);

SoROUTE* SoROUTE2619 = new SoROUTE();
SoROUTE2619->setFromNode(QString("Stand_l_elbow_RotationInterpolator"));
SoROUTE2619->setFromField(QString("value_changed"));
SoROUTE2619->setToNode(QString("hanim_l_elbow"));
SoROUTE2619->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2619);

SoROUTE* SoROUTE2620 = new SoROUTE();
SoROUTE2620->setFromNode(QString("Stand_l_shoulder_RotationInterpolator"));
SoROUTE2620->setFromField(QString("value_changed"));
SoROUTE2620->setToNode(QString("hanim_l_shoulder"));
SoROUTE2620->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2620);

SoROUTE* SoROUTE2621 = new SoROUTE();
SoROUTE2621->setFromNode(QString("Stand_head_RotationInterpolator"));
SoROUTE2621->setFromField(QString("value_changed"));
SoROUTE2621->setToNode(QString("hanim_skullbase"));
SoROUTE2621->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2621);

SoROUTE* SoROUTE2622 = new SoROUTE();
SoROUTE2622->setFromNode(QString("Stand_neck_RotationInterpolator"));
SoROUTE2622->setFromField(QString("value_changed"));
SoROUTE2622->setToNode(QString("hanim_vc7"));
SoROUTE2622->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2622);

SoROUTE* SoROUTE2623 = new SoROUTE();
SoROUTE2623->setFromNode(QString("Stand_l_eyeball_RotationInterpolator"));
SoROUTE2623->setFromField(QString("value_changed"));
SoROUTE2623->setToNode(QString("hanim_l_eyeball_joint"));
SoROUTE2623->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2623);

SoROUTE* SoROUTE2624 = new SoROUTE();
SoROUTE2624->setFromNode(QString("Stand_r_eyeball_RotationInterpolator"));
SoROUTE2624->setFromField(QString("value_changed"));
SoROUTE2624->setToNode(QString("hanim_r_eyeball_joint"));
SoROUTE2624->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2624);

SoROUTE* SoROUTE2625 = new SoROUTE();
SoROUTE2625->setFromNode(QString("Stand_upper_body_RotationInterpolator"));
SoROUTE2625->setFromField(QString("value_changed"));
SoROUTE2625->setToNode(QString("hanim_vl1"));
SoROUTE2625->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2625);

SoROUTE* SoROUTE2626 = new SoROUTE();
SoROUTE2626->setFromNode(QString("Stand_lower_body_RotationInterpolator"));
SoROUTE2626->setFromField(QString("value_changed"));
SoROUTE2626->setToNode(QString("hanim_sacroiliac"));
SoROUTE2626->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2626);

SoROUTE* SoROUTE2627 = new SoROUTE();
SoROUTE2627->setFromNode(QString("Stand_whole_body_RotationInterpolator"));
SoROUTE2627->setFromField(QString("value_changed"));
SoROUTE2627->setToNode(QString("hanim_humanoid_root"));
SoROUTE2627->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2627);

SoROUTE* SoROUTE2628 = new SoROUTE();
SoROUTE2628->setFromNode(QString("Stand_whole_body_TranslationInterpolator"));
SoROUTE2628->setFromField(QString("value_changed"));
SoROUTE2628->setToNode(QString("hanim_humanoid_root"));
SoROUTE2628->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2628);

SoROUTE* SoROUTE2629 = new SoROUTE();
SoROUTE2629->setFromNode(QString("Stand_l_sternoclavicular_RollInterpolator"));
SoROUTE2629->setFromField(QString("value_changed"));
SoROUTE2629->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2629->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2629);

SoROUTE* SoROUTE2630 = new SoROUTE();
SoROUTE2630->setFromNode(QString("Stand_l_acromioclavicular_RollInterpolator"));
SoROUTE2630->setFromField(QString("value_changed"));
SoROUTE2630->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2630->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2630);

SoROUTE* SoROUTE2631 = new SoROUTE();
SoROUTE2631->setFromNode(QString("Stand_r_sternoclavicular_RollInterpolator"));
SoROUTE2631->setFromField(QString("value_changed"));
SoROUTE2631->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2631->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2631);

SoROUTE* SoROUTE2632 = new SoROUTE();
SoROUTE2632->setFromNode(QString("Stand_r_acromioclavicular_RollInterpolator"));
SoROUTE2632->setFromField(QString("value_changed"));
SoROUTE2632->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2632->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2632);

SoROUTE* SoROUTE2633 = new SoROUTE();
SoROUTE2633->setFromNode(QString("Stand_r_metatarsal_PitchInterpolator"));
SoROUTE2633->setFromField(QString("value_changed"));
SoROUTE2633->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2633->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2633);

SoROUTE* SoROUTE2634 = new SoROUTE();
SoROUTE2634->setFromNode(QString("Stand_r_metatarsal_PitchInterpolator"));
SoROUTE2634->setFromField(QString("value_changed"));
SoROUTE2634->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2634->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2634);

SoROUTE* SoROUTE2635 = new SoROUTE();
SoROUTE2635->setFromNode(QString("Stand_sacroiliac_YawInterpolator"));
SoROUTE2635->setFromField(QString("value_changed"));
SoROUTE2635->setToNode(QString("hanim_sacroiliac"));
SoROUTE2635->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2635);

SoROUTE* SoROUTE2636 = new SoROUTE();
SoROUTE2636->setFromNode(QString("Stand_vl5_YawInterpolator"));
SoROUTE2636->setFromField(QString("value_changed"));
SoROUTE2636->setToNode(QString("hanim_vl5"));
SoROUTE2636->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2636);

SoROUTE* SoROUTE2637 = new SoROUTE();
SoROUTE2637->setFromNode(QString("Stand_vc6_YawInterpolator"));
SoROUTE2637->setFromField(QString("value_changed"));
SoROUTE2637->setToNode(QString("hanim_vc6"));
SoROUTE2637->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2637);

SoROUTE* SoROUTE2638 = new SoROUTE();
SoROUTE2638->setFromNode(QString("Stand_l_thumb1_PitchInterpolator"));
SoROUTE2638->setFromField(QString("value_changed"));
SoROUTE2638->setToNode(QString("hanim_l_thumb1"));
SoROUTE2638->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2638);

SoROUTE* SoROUTE2639 = new SoROUTE();
SoROUTE2639->setFromNode(QString("Stand_r_thumb1_PitchInterpolator"));
SoROUTE2639->setFromField(QString("value_changed"));
SoROUTE2639->setToNode(QString("hanim_r_thumb1"));
SoROUTE2639->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2639);

SoROUTE* SoROUTE2640 = new SoROUTE();
SoROUTE2640->setFromNode(QString("Stand_r_index1_RollInterpolator"));
SoROUTE2640->setFromField(QString("value_changed"));
SoROUTE2640->setToNode(QString("hanim_r_index1"));
SoROUTE2640->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2640);

SoROUTE* SoROUTE2641 = new SoROUTE();
SoROUTE2641->setFromNode(QString("Stand_r_index2_RollInterpolator"));
SoROUTE2641->setFromField(QString("value_changed"));
SoROUTE2641->setToNode(QString("hanim_r_index2"));
SoROUTE2641->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2641);

SoROUTE* SoROUTE2642 = new SoROUTE();
SoROUTE2642->setFromNode(QString("Stand_r_index3_RollInterpolator"));
SoROUTE2642->setFromField(QString("value_changed"));
SoROUTE2642->setToNode(QString("hanim_r_index3"));
SoROUTE2642->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2642);

SoROUTE* SoROUTE2643 = new SoROUTE();
SoROUTE2643->setFromNode(QString("Stand_r_index1_RollInterpolator"));
SoROUTE2643->setFromField(QString("value_changed"));
SoROUTE2643->setToNode(QString("hanim_r_middle1"));
SoROUTE2643->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2643);

SoROUTE* SoROUTE2644 = new SoROUTE();
SoROUTE2644->setFromNode(QString("Stand_r_index2_RollInterpolator"));
SoROUTE2644->setFromField(QString("value_changed"));
SoROUTE2644->setToNode(QString("hanim_r_middle2"));
SoROUTE2644->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2644);

SoROUTE* SoROUTE2645 = new SoROUTE();
SoROUTE2645->setFromNode(QString("Stand_r_index3_RollInterpolator"));
SoROUTE2645->setFromField(QString("value_changed"));
SoROUTE2645->setToNode(QString("hanim_r_middle3"));
SoROUTE2645->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2645);

SoROUTE* SoROUTE2646 = new SoROUTE();
SoROUTE2646->setFromNode(QString("Stand_r_index1_RollInterpolator"));
SoROUTE2646->setFromField(QString("value_changed"));
SoROUTE2646->setToNode(QString("hanim_r_ring1"));
SoROUTE2646->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2646);

SoROUTE* SoROUTE2647 = new SoROUTE();
SoROUTE2647->setFromNode(QString("Stand_r_index2_RollInterpolator"));
SoROUTE2647->setFromField(QString("value_changed"));
SoROUTE2647->setToNode(QString("hanim_r_ring2"));
SoROUTE2647->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2647);

SoROUTE* SoROUTE2648 = new SoROUTE();
SoROUTE2648->setFromNode(QString("Stand_r_index3_RollInterpolator"));
SoROUTE2648->setFromField(QString("value_changed"));
SoROUTE2648->setToNode(QString("hanim_r_ring3"));
SoROUTE2648->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2648);

SoROUTE* SoROUTE2649 = new SoROUTE();
SoROUTE2649->setFromNode(QString("Stand_r_index1_RollInterpolator"));
SoROUTE2649->setFromField(QString("value_changed"));
SoROUTE2649->setToNode(QString("hanim_r_pinky1"));
SoROUTE2649->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2649);

SoROUTE* SoROUTE2650 = new SoROUTE();
SoROUTE2650->setFromNode(QString("Stand_r_index2_RollInterpolator"));
SoROUTE2650->setFromField(QString("value_changed"));
SoROUTE2650->setToNode(QString("hanim_r_pinky2"));
SoROUTE2650->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2650);

SoROUTE* SoROUTE2651 = new SoROUTE();
SoROUTE2651->setFromNode(QString("Stand_r_index3_RollInterpolator"));
SoROUTE2651->setFromField(QString("value_changed"));
SoROUTE2651->setToNode(QString("hanim_r_pinky3"));
SoROUTE2651->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2651);

SoROUTE* SoROUTE2652 = new SoROUTE();
SoROUTE2652->setFromNode(QString("PitchTimer"));
SoROUTE2652->setFromField(QString("fraction_changed"));
SoROUTE2652->setToNode(QString("Pitches_r_ankle_RotationInterpolator"));
SoROUTE2652->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2652);

SoROUTE* SoROUTE2653 = new SoROUTE();
SoROUTE2653->setFromNode(QString("PitchTimer"));
SoROUTE2653->setFromField(QString("fraction_changed"));
SoROUTE2653->setToNode(QString("Pitches_r_knee_RotationInterpolator"));
SoROUTE2653->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2653);

SoROUTE* SoROUTE2654 = new SoROUTE();
SoROUTE2654->setFromNode(QString("PitchTimer"));
SoROUTE2654->setFromField(QString("fraction_changed"));
SoROUTE2654->setToNode(QString("Pitches_r_hip_RotationInterpolator"));
SoROUTE2654->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2654);

SoROUTE* SoROUTE2655 = new SoROUTE();
SoROUTE2655->setFromNode(QString("PitchTimer"));
SoROUTE2655->setFromField(QString("fraction_changed"));
SoROUTE2655->setToNode(QString("Pitches_l_ankle_RotationInterpolator"));
SoROUTE2655->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2655);

SoROUTE* SoROUTE2656 = new SoROUTE();
SoROUTE2656->setFromNode(QString("PitchTimer"));
SoROUTE2656->setFromField(QString("fraction_changed"));
SoROUTE2656->setToNode(QString("Pitches_l_knee_RotationInterpolator"));
SoROUTE2656->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2656);

SoROUTE* SoROUTE2657 = new SoROUTE();
SoROUTE2657->setFromNode(QString("PitchTimer"));
SoROUTE2657->setFromField(QString("fraction_changed"));
SoROUTE2657->setToNode(QString("Pitches_l_hip_RotationInterpolator"));
SoROUTE2657->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2657);

SoROUTE* SoROUTE2658 = new SoROUTE();
SoROUTE2658->setFromNode(QString("PitchTimer"));
SoROUTE2658->setFromField(QString("fraction_changed"));
SoROUTE2658->setToNode(QString("Pitches_lower_body_RotationInterpolator"));
SoROUTE2658->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2658);

SoROUTE* SoROUTE2659 = new SoROUTE();
SoROUTE2659->setFromNode(QString("PitchTimer"));
SoROUTE2659->setFromField(QString("fraction_changed"));
SoROUTE2659->setToNode(QString("Pitches_r_wrist_RotationInterpolator"));
SoROUTE2659->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2659);

SoROUTE* SoROUTE2660 = new SoROUTE();
SoROUTE2660->setFromNode(QString("PitchTimer"));
SoROUTE2660->setFromField(QString("fraction_changed"));
SoROUTE2660->setToNode(QString("Pitches_r_elbow_RotationInterpolator"));
SoROUTE2660->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2660);

SoROUTE* SoROUTE2661 = new SoROUTE();
SoROUTE2661->setFromNode(QString("PitchTimer"));
SoROUTE2661->setFromField(QString("fraction_changed"));
SoROUTE2661->setToNode(QString("Pitches_r_shoulder_RotationInterpolator"));
SoROUTE2661->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2661);

SoROUTE* SoROUTE2662 = new SoROUTE();
SoROUTE2662->setFromNode(QString("PitchTimer"));
SoROUTE2662->setFromField(QString("fraction_changed"));
SoROUTE2662->setToNode(QString("Pitches_l_wrist_RotationInterpolator"));
SoROUTE2662->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2662);

SoROUTE* SoROUTE2663 = new SoROUTE();
SoROUTE2663->setFromNode(QString("PitchTimer"));
SoROUTE2663->setFromField(QString("fraction_changed"));
SoROUTE2663->setToNode(QString("Pitches_l_elbow_RotationInterpolator"));
SoROUTE2663->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2663);

SoROUTE* SoROUTE2664 = new SoROUTE();
SoROUTE2664->setFromNode(QString("PitchTimer"));
SoROUTE2664->setFromField(QString("fraction_changed"));
SoROUTE2664->setToNode(QString("Pitches_l_shoulder_RotationInterpolator"));
SoROUTE2664->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2664);

SoROUTE* SoROUTE2665 = new SoROUTE();
SoROUTE2665->setFromNode(QString("PitchTimer"));
SoROUTE2665->setFromField(QString("fraction_changed"));
SoROUTE2665->setToNode(QString("Pitches_head_RotationInterpolator"));
SoROUTE2665->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2665);

SoROUTE* SoROUTE2666 = new SoROUTE();
SoROUTE2666->setFromNode(QString("PitchTimer"));
SoROUTE2666->setFromField(QString("fraction_changed"));
SoROUTE2666->setToNode(QString("Pitches_neck_RotationInterpolator"));
SoROUTE2666->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2666);

SoROUTE* SoROUTE2667 = new SoROUTE();
SoROUTE2667->setFromNode(QString("PitchTimer"));
SoROUTE2667->setFromField(QString("fraction_changed"));
SoROUTE2667->setToNode(QString("Pitches_upper_body_RotationInterpolator"));
SoROUTE2667->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2667);

SoROUTE* SoROUTE2668 = new SoROUTE();
SoROUTE2668->setFromNode(QString("PitchTimer"));
SoROUTE2668->setFromField(QString("fraction_changed"));
SoROUTE2668->setToNode(QString("Pitches_whole_body_RotationInterpolator"));
SoROUTE2668->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2668);

SoROUTE* SoROUTE2669 = new SoROUTE();
SoROUTE2669->setFromNode(QString("PitchTimer"));
SoROUTE2669->setFromField(QString("fraction_changed"));
SoROUTE2669->setToNode(QString("Pitches_whole_body_TranslationInterpolator"));
SoROUTE2669->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2669);

SoROUTE* SoROUTE2670 = new SoROUTE();
SoROUTE2670->setFromNode(QString("PitchTimer"));
SoROUTE2670->setFromField(QString("fraction_changed"));
SoROUTE2670->setToNode(QString("Pitch_l_sternoclavicular_RollInterpolator"));
SoROUTE2670->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2670);

SoROUTE* SoROUTE2671 = new SoROUTE();
SoROUTE2671->setFromNode(QString("PitchTimer"));
SoROUTE2671->setFromField(QString("fraction_changed"));
SoROUTE2671->setToNode(QString("Pitch_l_acromioclavicular_RollInterpolator"));
SoROUTE2671->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2671);

SoROUTE* SoROUTE2672 = new SoROUTE();
SoROUTE2672->setFromNode(QString("PitchTimer"));
SoROUTE2672->setFromField(QString("fraction_changed"));
SoROUTE2672->setToNode(QString("Pitch_r_sternoclavicular_RollInterpolator"));
SoROUTE2672->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2672);

SoROUTE* SoROUTE2673 = new SoROUTE();
SoROUTE2673->setFromNode(QString("PitchTimer"));
SoROUTE2673->setFromField(QString("fraction_changed"));
SoROUTE2673->setToNode(QString("Pitch_r_acromioclavicular_RollInterpolator"));
SoROUTE2673->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2673);

SoROUTE* SoROUTE2674 = new SoROUTE();
SoROUTE2674->setFromNode(QString("PitchTimer"));
SoROUTE2674->setFromField(QString("fraction_changed"));
SoROUTE2674->setToNode(QString("Pitch_r_metatarsal_PitchInterpolator"));
SoROUTE2674->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2674);

SoROUTE* SoROUTE2675 = new SoROUTE();
SoROUTE2675->setFromNode(QString("PitchTimer"));
SoROUTE2675->setFromField(QString("fraction_changed"));
SoROUTE2675->setToNode(QString("Pitch_sacroiliac_YawInterpolator"));
SoROUTE2675->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2675);

SoROUTE* SoROUTE2676 = new SoROUTE();
SoROUTE2676->setFromNode(QString("PitchTimer"));
SoROUTE2676->setFromField(QString("fraction_changed"));
SoROUTE2676->setToNode(QString("Pitch_vl5_YawInterpolator"));
SoROUTE2676->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2676);

SoROUTE* SoROUTE2677 = new SoROUTE();
SoROUTE2677->setFromNode(QString("PitchTimer"));
SoROUTE2677->setFromField(QString("fraction_changed"));
SoROUTE2677->setToNode(QString("Pitch_vc6_YawInterpolator"));
SoROUTE2677->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2677);

SoROUTE* SoROUTE2678 = new SoROUTE();
SoROUTE2678->setFromNode(QString("PitchTimer"));
SoROUTE2678->setFromField(QString("fraction_changed"));
SoROUTE2678->setToNode(QString("Pitch_l_thumb1_PitchInterpolator"));
SoROUTE2678->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2678);

SoROUTE* SoROUTE2679 = new SoROUTE();
SoROUTE2679->setFromNode(QString("PitchTimer"));
SoROUTE2679->setFromField(QString("fraction_changed"));
SoROUTE2679->setToNode(QString("Pitch_r_thumb1_PitchInterpolator"));
SoROUTE2679->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2679);

SoROUTE* SoROUTE2680 = new SoROUTE();
SoROUTE2680->setFromNode(QString("Pitches_r_ankle_RotationInterpolator"));
SoROUTE2680->setFromField(QString("value_changed"));
SoROUTE2680->setToNode(QString("hanim_r_ankle"));
SoROUTE2680->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2680);

SoROUTE* SoROUTE2681 = new SoROUTE();
SoROUTE2681->setFromNode(QString("Pitches_r_knee_RotationInterpolator"));
SoROUTE2681->setFromField(QString("value_changed"));
SoROUTE2681->setToNode(QString("hanim_r_knee"));
SoROUTE2681->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2681);

SoROUTE* SoROUTE2682 = new SoROUTE();
SoROUTE2682->setFromNode(QString("Pitches_r_hip_RotationInterpolator"));
SoROUTE2682->setFromField(QString("value_changed"));
SoROUTE2682->setToNode(QString("hanim_r_hip"));
SoROUTE2682->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2682);

SoROUTE* SoROUTE2683 = new SoROUTE();
SoROUTE2683->setFromNode(QString("Pitches_l_ankle_RotationInterpolator"));
SoROUTE2683->setFromField(QString("value_changed"));
SoROUTE2683->setToNode(QString("hanim_l_ankle"));
SoROUTE2683->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2683);

SoROUTE* SoROUTE2684 = new SoROUTE();
SoROUTE2684->setFromNode(QString("Pitches_l_knee_RotationInterpolator"));
SoROUTE2684->setFromField(QString("value_changed"));
SoROUTE2684->setToNode(QString("hanim_l_knee"));
SoROUTE2684->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2684);

SoROUTE* SoROUTE2685 = new SoROUTE();
SoROUTE2685->setFromNode(QString("Pitches_l_hip_RotationInterpolator"));
SoROUTE2685->setFromField(QString("value_changed"));
SoROUTE2685->setToNode(QString("hanim_l_hip"));
SoROUTE2685->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2685);

SoROUTE* SoROUTE2686 = new SoROUTE();
SoROUTE2686->setFromNode(QString("Pitches_lower_body_RotationInterpolator"));
SoROUTE2686->setFromField(QString("value_changed"));
SoROUTE2686->setToNode(QString("hanim_sacroiliac"));
SoROUTE2686->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2686);

SoROUTE* SoROUTE2687 = new SoROUTE();
SoROUTE2687->setFromNode(QString("Pitches_r_wrist_RotationInterpolator"));
SoROUTE2687->setFromField(QString("value_changed"));
SoROUTE2687->setToNode(QString("hanim_r_wrist"));
SoROUTE2687->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2687);

SoROUTE* SoROUTE2688 = new SoROUTE();
SoROUTE2688->setFromNode(QString("Pitches_r_elbow_RotationInterpolator"));
SoROUTE2688->setFromField(QString("value_changed"));
SoROUTE2688->setToNode(QString("hanim_r_elbow"));
SoROUTE2688->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2688);

SoROUTE* SoROUTE2689 = new SoROUTE();
SoROUTE2689->setFromNode(QString("Pitches_r_shoulder_RotationInterpolator"));
SoROUTE2689->setFromField(QString("value_changed"));
SoROUTE2689->setToNode(QString("hanim_r_shoulder"));
SoROUTE2689->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2689);

SoROUTE* SoROUTE2690 = new SoROUTE();
SoROUTE2690->setFromNode(QString("Pitches_l_wrist_RotationInterpolator"));
SoROUTE2690->setFromField(QString("value_changed"));
SoROUTE2690->setToNode(QString("hanim_l_wrist"));
SoROUTE2690->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2690);

SoROUTE* SoROUTE2691 = new SoROUTE();
SoROUTE2691->setFromNode(QString("Pitches_l_elbow_RotationInterpolator"));
SoROUTE2691->setFromField(QString("value_changed"));
SoROUTE2691->setToNode(QString("hanim_l_elbow"));
SoROUTE2691->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2691);

SoROUTE* SoROUTE2692 = new SoROUTE();
SoROUTE2692->setFromNode(QString("Pitches_l_shoulder_RotationInterpolator"));
SoROUTE2692->setFromField(QString("value_changed"));
SoROUTE2692->setToNode(QString("hanim_l_shoulder"));
SoROUTE2692->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2692);

SoROUTE* SoROUTE2693 = new SoROUTE();
SoROUTE2693->setFromNode(QString("Pitches_head_RotationInterpolator"));
SoROUTE2693->setFromField(QString("value_changed"));
SoROUTE2693->setToNode(QString("hanim_skullbase"));
SoROUTE2693->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2693);

SoROUTE* SoROUTE2694 = new SoROUTE();
SoROUTE2694->setFromNode(QString("Pitches_neck_RotationInterpolator"));
SoROUTE2694->setFromField(QString("value_changed"));
SoROUTE2694->setToNode(QString("hanim_vc4"));
SoROUTE2694->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2694);

SoROUTE* SoROUTE2695 = new SoROUTE();
SoROUTE2695->setFromNode(QString("Pitches_upper_body_RotationInterpolator"));
SoROUTE2695->setFromField(QString("value_changed"));
SoROUTE2695->setToNode(QString("hanim_vl1"));
SoROUTE2695->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2695);

SoROUTE* SoROUTE2696 = new SoROUTE();
SoROUTE2696->setFromNode(QString("Pitches_whole_body_RotationInterpolator"));
SoROUTE2696->setFromField(QString("value_changed"));
SoROUTE2696->setToNode(QString("hanim_humanoid_root"));
SoROUTE2696->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2696);

SoROUTE* SoROUTE2697 = new SoROUTE();
SoROUTE2697->setFromNode(QString("Pitches_whole_body_TranslationInterpolator"));
SoROUTE2697->setFromField(QString("value_changed"));
SoROUTE2697->setToNode(QString("hanim_humanoid_root"));
SoROUTE2697->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2697);

SoROUTE* SoROUTE2698 = new SoROUTE();
SoROUTE2698->setFromNode(QString("Pitch_l_sternoclavicular_RollInterpolator"));
SoROUTE2698->setFromField(QString("value_changed"));
SoROUTE2698->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2698->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2698);

SoROUTE* SoROUTE2699 = new SoROUTE();
SoROUTE2699->setFromNode(QString("Pitch_l_acromioclavicular_RollInterpolator"));
SoROUTE2699->setFromField(QString("value_changed"));
SoROUTE2699->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2699->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2699);

SoROUTE* SoROUTE2700 = new SoROUTE();
SoROUTE2700->setFromNode(QString("Pitch_r_sternoclavicular_RollInterpolator"));
SoROUTE2700->setFromField(QString("value_changed"));
SoROUTE2700->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2700->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2700);

SoROUTE* SoROUTE2701 = new SoROUTE();
SoROUTE2701->setFromNode(QString("Pitch_r_acromioclavicular_RollInterpolator"));
SoROUTE2701->setFromField(QString("value_changed"));
SoROUTE2701->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2701->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2701);

SoROUTE* SoROUTE2702 = new SoROUTE();
SoROUTE2702->setFromNode(QString("Pitch_r_metatarsal_PitchInterpolator"));
SoROUTE2702->setFromField(QString("value_changed"));
SoROUTE2702->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2702->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2702);

SoROUTE* SoROUTE2703 = new SoROUTE();
SoROUTE2703->setFromNode(QString("Pitch_r_metatarsal_PitchInterpolator"));
SoROUTE2703->setFromField(QString("value_changed"));
SoROUTE2703->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2703->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2703);

SoROUTE* SoROUTE2704 = new SoROUTE();
SoROUTE2704->setFromNode(QString("Pitch_sacroiliac_YawInterpolator"));
SoROUTE2704->setFromField(QString("value_changed"));
SoROUTE2704->setToNode(QString("hanim_sacroiliac"));
SoROUTE2704->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2704);

SoROUTE* SoROUTE2705 = new SoROUTE();
SoROUTE2705->setFromNode(QString("Pitch_vl5_YawInterpolator"));
SoROUTE2705->setFromField(QString("value_changed"));
SoROUTE2705->setToNode(QString("hanim_vl5"));
SoROUTE2705->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2705);

SoROUTE* SoROUTE2706 = new SoROUTE();
SoROUTE2706->setFromNode(QString("Pitch_vc6_YawInterpolator"));
SoROUTE2706->setFromField(QString("value_changed"));
SoROUTE2706->setToNode(QString("hanim_vc6"));
SoROUTE2706->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2706);

SoROUTE* SoROUTE2707 = new SoROUTE();
SoROUTE2707->setFromNode(QString("Pitch_l_thumb1_PitchInterpolator"));
SoROUTE2707->setFromField(QString("value_changed"));
SoROUTE2707->setToNode(QString("hanim_l_thumb1"));
SoROUTE2707->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2707);

SoROUTE* SoROUTE2708 = new SoROUTE();
SoROUTE2708->setFromNode(QString("Pitch_r_thumb1_PitchInterpolator"));
SoROUTE2708->setFromField(QString("value_changed"));
SoROUTE2708->setToNode(QString("hanim_r_thumb1"));
SoROUTE2708->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2708);

SoROUTE* SoROUTE2709 = new SoROUTE();
SoROUTE2709->setFromNode(QString("YawTimer"));
SoROUTE2709->setFromField(QString("fraction_changed"));
SoROUTE2709->setToNode(QString("Yaws_r_ankle_RotationInterpolator"));
SoROUTE2709->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2709);

SoROUTE* SoROUTE2710 = new SoROUTE();
SoROUTE2710->setFromNode(QString("YawTimer"));
SoROUTE2710->setFromField(QString("fraction_changed"));
SoROUTE2710->setToNode(QString("Yaws_r_knee_RotationInterpolator"));
SoROUTE2710->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2710);

SoROUTE* SoROUTE2711 = new SoROUTE();
SoROUTE2711->setFromNode(QString("YawTimer"));
SoROUTE2711->setFromField(QString("fraction_changed"));
SoROUTE2711->setToNode(QString("Yaws_r_hip_RotationInterpolator"));
SoROUTE2711->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2711);

SoROUTE* SoROUTE2712 = new SoROUTE();
SoROUTE2712->setFromNode(QString("YawTimer"));
SoROUTE2712->setFromField(QString("fraction_changed"));
SoROUTE2712->setToNode(QString("Yaws_l_ankle_RotationInterpolator"));
SoROUTE2712->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2712);

SoROUTE* SoROUTE2713 = new SoROUTE();
SoROUTE2713->setFromNode(QString("YawTimer"));
SoROUTE2713->setFromField(QString("fraction_changed"));
SoROUTE2713->setToNode(QString("Yaws_l_knee_RotationInterpolator"));
SoROUTE2713->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2713);

SoROUTE* SoROUTE2714 = new SoROUTE();
SoROUTE2714->setFromNode(QString("YawTimer"));
SoROUTE2714->setFromField(QString("fraction_changed"));
SoROUTE2714->setToNode(QString("Yaws_l_hip_RotationInterpolator"));
SoROUTE2714->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2714);

SoROUTE* SoROUTE2715 = new SoROUTE();
SoROUTE2715->setFromNode(QString("YawTimer"));
SoROUTE2715->setFromField(QString("fraction_changed"));
SoROUTE2715->setToNode(QString("Yaws_lower_body_RotationInterpolator"));
SoROUTE2715->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2715);

SoROUTE* SoROUTE2716 = new SoROUTE();
SoROUTE2716->setFromNode(QString("YawTimer"));
SoROUTE2716->setFromField(QString("fraction_changed"));
SoROUTE2716->setToNode(QString("Yaws_r_wrist_RotationInterpolator"));
SoROUTE2716->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2716);

SoROUTE* SoROUTE2717 = new SoROUTE();
SoROUTE2717->setFromNode(QString("YawTimer"));
SoROUTE2717->setFromField(QString("fraction_changed"));
SoROUTE2717->setToNode(QString("Yaws_r_elbow_RotationInterpolator"));
SoROUTE2717->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2717);

SoROUTE* SoROUTE2718 = new SoROUTE();
SoROUTE2718->setFromNode(QString("YawTimer"));
SoROUTE2718->setFromField(QString("fraction_changed"));
SoROUTE2718->setToNode(QString("Yaws_r_shoulder_RotationInterpolator"));
SoROUTE2718->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2718);

SoROUTE* SoROUTE2719 = new SoROUTE();
SoROUTE2719->setFromNode(QString("YawTimer"));
SoROUTE2719->setFromField(QString("fraction_changed"));
SoROUTE2719->setToNode(QString("Yaws_l_wrist_RotationInterpolator"));
SoROUTE2719->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2719);

SoROUTE* SoROUTE2720 = new SoROUTE();
SoROUTE2720->setFromNode(QString("YawTimer"));
SoROUTE2720->setFromField(QString("fraction_changed"));
SoROUTE2720->setToNode(QString("Yaws_l_elbow_RotationInterpolator"));
SoROUTE2720->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2720);

SoROUTE* SoROUTE2721 = new SoROUTE();
SoROUTE2721->setFromNode(QString("YawTimer"));
SoROUTE2721->setFromField(QString("fraction_changed"));
SoROUTE2721->setToNode(QString("Yaws_l_shoulder_RotationInterpolator"));
SoROUTE2721->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2721);

SoROUTE* SoROUTE2722 = new SoROUTE();
SoROUTE2722->setFromNode(QString("YawTimer"));
SoROUTE2722->setFromField(QString("fraction_changed"));
SoROUTE2722->setToNode(QString("Yaws_head_RotationInterpolator"));
SoROUTE2722->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2722);

SoROUTE* SoROUTE2723 = new SoROUTE();
SoROUTE2723->setFromNode(QString("YawTimer"));
SoROUTE2723->setFromField(QString("fraction_changed"));
SoROUTE2723->setToNode(QString("Yaws_neck_RotationInterpolator"));
SoROUTE2723->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2723);

SoROUTE* SoROUTE2724 = new SoROUTE();
SoROUTE2724->setFromNode(QString("YawTimer"));
SoROUTE2724->setFromField(QString("fraction_changed"));
SoROUTE2724->setToNode(QString("Yaws_upper_body_RotationInterpolator"));
SoROUTE2724->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2724);

SoROUTE* SoROUTE2725 = new SoROUTE();
SoROUTE2725->setFromNode(QString("YawTimer"));
SoROUTE2725->setFromField(QString("fraction_changed"));
SoROUTE2725->setToNode(QString("Yaws_whole_body_RotationInterpolator"));
SoROUTE2725->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2725);

SoROUTE* SoROUTE2726 = new SoROUTE();
SoROUTE2726->setFromNode(QString("YawTimer"));
SoROUTE2726->setFromField(QString("fraction_changed"));
SoROUTE2726->setToNode(QString("Yaws_whole_body_TranslationInterpolator"));
SoROUTE2726->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2726);

SoROUTE* SoROUTE2727 = new SoROUTE();
SoROUTE2727->setFromNode(QString("YawTimer"));
SoROUTE2727->setFromField(QString("fraction_changed"));
SoROUTE2727->setToNode(QString("Yaw_l_sternoclavicular_RollInterpolator"));
SoROUTE2727->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2727);

SoROUTE* SoROUTE2728 = new SoROUTE();
SoROUTE2728->setFromNode(QString("YawTimer"));
SoROUTE2728->setFromField(QString("fraction_changed"));
SoROUTE2728->setToNode(QString("Yaw_l_acromioclavicular_RollInterpolator"));
SoROUTE2728->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2728);

SoROUTE* SoROUTE2729 = new SoROUTE();
SoROUTE2729->setFromNode(QString("YawTimer"));
SoROUTE2729->setFromField(QString("fraction_changed"));
SoROUTE2729->setToNode(QString("Yaw_r_sternoclavicular_RollInterpolator"));
SoROUTE2729->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2729);

SoROUTE* SoROUTE2730 = new SoROUTE();
SoROUTE2730->setFromNode(QString("YawTimer"));
SoROUTE2730->setFromField(QString("fraction_changed"));
SoROUTE2730->setToNode(QString("Yaw_r_acromioclavicular_RollInterpolator"));
SoROUTE2730->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2730);

SoROUTE* SoROUTE2731 = new SoROUTE();
SoROUTE2731->setFromNode(QString("YawTimer"));
SoROUTE2731->setFromField(QString("fraction_changed"));
SoROUTE2731->setToNode(QString("Yaw_r_metatarsal_PitchInterpolator"));
SoROUTE2731->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2731);

SoROUTE* SoROUTE2732 = new SoROUTE();
SoROUTE2732->setFromNode(QString("YawTimer"));
SoROUTE2732->setFromField(QString("fraction_changed"));
SoROUTE2732->setToNode(QString("Yaw_sacroiliac_YawInterpolator"));
SoROUTE2732->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2732);

SoROUTE* SoROUTE2733 = new SoROUTE();
SoROUTE2733->setFromNode(QString("YawTimer"));
SoROUTE2733->setFromField(QString("fraction_changed"));
SoROUTE2733->setToNode(QString("Yaw_vl5_YawInterpolator"));
SoROUTE2733->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2733);

SoROUTE* SoROUTE2734 = new SoROUTE();
SoROUTE2734->setFromNode(QString("YawTimer"));
SoROUTE2734->setFromField(QString("fraction_changed"));
SoROUTE2734->setToNode(QString("Yaw_vc6_YawInterpolator"));
SoROUTE2734->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2734);

SoROUTE* SoROUTE2735 = new SoROUTE();
SoROUTE2735->setFromNode(QString("YawTimer"));
SoROUTE2735->setFromField(QString("fraction_changed"));
SoROUTE2735->setToNode(QString("Yaw_l_thumb1_PitchInterpolator"));
SoROUTE2735->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2735);

SoROUTE* SoROUTE2736 = new SoROUTE();
SoROUTE2736->setFromNode(QString("YawTimer"));
SoROUTE2736->setFromField(QString("fraction_changed"));
SoROUTE2736->setToNode(QString("Yaw_r_thumb1_PitchInterpolator"));
SoROUTE2736->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2736);

SoROUTE* SoROUTE2737 = new SoROUTE();
SoROUTE2737->setFromNode(QString("Yaws_r_ankle_RotationInterpolator"));
SoROUTE2737->setFromField(QString("value_changed"));
SoROUTE2737->setToNode(QString("hanim_r_ankle"));
SoROUTE2737->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2737);

SoROUTE* SoROUTE2738 = new SoROUTE();
SoROUTE2738->setFromNode(QString("Yaws_r_knee_RotationInterpolator"));
SoROUTE2738->setFromField(QString("value_changed"));
SoROUTE2738->setToNode(QString("hanim_r_knee"));
SoROUTE2738->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2738);

SoROUTE* SoROUTE2739 = new SoROUTE();
SoROUTE2739->setFromNode(QString("Yaws_r_hip_RotationInterpolator"));
SoROUTE2739->setFromField(QString("value_changed"));
SoROUTE2739->setToNode(QString("hanim_r_hip"));
SoROUTE2739->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2739);

SoROUTE* SoROUTE2740 = new SoROUTE();
SoROUTE2740->setFromNode(QString("Yaws_l_ankle_RotationInterpolator"));
SoROUTE2740->setFromField(QString("value_changed"));
SoROUTE2740->setToNode(QString("hanim_l_ankle"));
SoROUTE2740->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2740);

SoROUTE* SoROUTE2741 = new SoROUTE();
SoROUTE2741->setFromNode(QString("Yaws_l_knee_RotationInterpolator"));
SoROUTE2741->setFromField(QString("value_changed"));
SoROUTE2741->setToNode(QString("hanim_l_knee"));
SoROUTE2741->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2741);

SoROUTE* SoROUTE2742 = new SoROUTE();
SoROUTE2742->setFromNode(QString("Yaws_l_hip_RotationInterpolator"));
SoROUTE2742->setFromField(QString("value_changed"));
SoROUTE2742->setToNode(QString("hanim_l_hip"));
SoROUTE2742->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2742);

SoROUTE* SoROUTE2743 = new SoROUTE();
SoROUTE2743->setFromNode(QString("Yaws_lower_body_RotationInterpolator"));
SoROUTE2743->setFromField(QString("value_changed"));
SoROUTE2743->setToNode(QString("hanim_sacroiliac"));
SoROUTE2743->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2743);

SoROUTE* SoROUTE2744 = new SoROUTE();
SoROUTE2744->setFromNode(QString("Yaws_r_wrist_RotationInterpolator"));
SoROUTE2744->setFromField(QString("value_changed"));
SoROUTE2744->setToNode(QString("hanim_r_wrist"));
SoROUTE2744->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2744);

SoROUTE* SoROUTE2745 = new SoROUTE();
SoROUTE2745->setFromNode(QString("Yaws_r_elbow_RotationInterpolator"));
SoROUTE2745->setFromField(QString("value_changed"));
SoROUTE2745->setToNode(QString("hanim_r_elbow"));
SoROUTE2745->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2745);

SoROUTE* SoROUTE2746 = new SoROUTE();
SoROUTE2746->setFromNode(QString("Yaws_r_shoulder_RotationInterpolator"));
SoROUTE2746->setFromField(QString("value_changed"));
SoROUTE2746->setToNode(QString("hanim_r_shoulder"));
SoROUTE2746->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2746);

SoROUTE* SoROUTE2747 = new SoROUTE();
SoROUTE2747->setFromNode(QString("Yaws_l_wrist_RotationInterpolator"));
SoROUTE2747->setFromField(QString("value_changed"));
SoROUTE2747->setToNode(QString("hanim_l_wrist"));
SoROUTE2747->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2747);

SoROUTE* SoROUTE2748 = new SoROUTE();
SoROUTE2748->setFromNode(QString("Yaws_l_elbow_RotationInterpolator"));
SoROUTE2748->setFromField(QString("value_changed"));
SoROUTE2748->setToNode(QString("hanim_l_elbow"));
SoROUTE2748->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2748);

SoROUTE* SoROUTE2749 = new SoROUTE();
SoROUTE2749->setFromNode(QString("Yaws_l_shoulder_RotationInterpolator"));
SoROUTE2749->setFromField(QString("value_changed"));
SoROUTE2749->setToNode(QString("hanim_l_shoulder"));
SoROUTE2749->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2749);

SoROUTE* SoROUTE2750 = new SoROUTE();
SoROUTE2750->setFromNode(QString("Yaws_head_RotationInterpolator"));
SoROUTE2750->setFromField(QString("value_changed"));
SoROUTE2750->setToNode(QString("hanim_skullbase"));
SoROUTE2750->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2750);

SoROUTE* SoROUTE2751 = new SoROUTE();
SoROUTE2751->setFromNode(QString("Yaws_neck_RotationInterpolator"));
SoROUTE2751->setFromField(QString("value_changed"));
SoROUTE2751->setToNode(QString("hanim_vc4"));
SoROUTE2751->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2751);

SoROUTE* SoROUTE2752 = new SoROUTE();
SoROUTE2752->setFromNode(QString("Yaws_upper_body_RotationInterpolator"));
SoROUTE2752->setFromField(QString("value_changed"));
SoROUTE2752->setToNode(QString("hanim_vl1"));
SoROUTE2752->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2752);

SoROUTE* SoROUTE2753 = new SoROUTE();
SoROUTE2753->setFromNode(QString("Yaws_whole_body_RotationInterpolator"));
SoROUTE2753->setFromField(QString("value_changed"));
SoROUTE2753->setToNode(QString("hanim_humanoid_root"));
SoROUTE2753->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2753);

SoROUTE* SoROUTE2754 = new SoROUTE();
SoROUTE2754->setFromNode(QString("Yaws_whole_body_TranslationInterpolator"));
SoROUTE2754->setFromField(QString("value_changed"));
SoROUTE2754->setToNode(QString("hanim_humanoid_root"));
SoROUTE2754->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2754);

SoROUTE* SoROUTE2755 = new SoROUTE();
SoROUTE2755->setFromNode(QString("Yaw_l_sternoclavicular_RollInterpolator"));
SoROUTE2755->setFromField(QString("value_changed"));
SoROUTE2755->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2755->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2755);

SoROUTE* SoROUTE2756 = new SoROUTE();
SoROUTE2756->setFromNode(QString("Yaw_l_acromioclavicular_RollInterpolator"));
SoROUTE2756->setFromField(QString("value_changed"));
SoROUTE2756->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2756->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2756);

SoROUTE* SoROUTE2757 = new SoROUTE();
SoROUTE2757->setFromNode(QString("Yaw_r_sternoclavicular_RollInterpolator"));
SoROUTE2757->setFromField(QString("value_changed"));
SoROUTE2757->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2757->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2757);

SoROUTE* SoROUTE2758 = new SoROUTE();
SoROUTE2758->setFromNode(QString("Yaw_r_acromioclavicular_RollInterpolator"));
SoROUTE2758->setFromField(QString("value_changed"));
SoROUTE2758->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2758->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2758);

SoROUTE* SoROUTE2759 = new SoROUTE();
SoROUTE2759->setFromNode(QString("Yaw_r_metatarsal_PitchInterpolator"));
SoROUTE2759->setFromField(QString("value_changed"));
SoROUTE2759->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2759->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2759);

SoROUTE* SoROUTE2760 = new SoROUTE();
SoROUTE2760->setFromNode(QString("Yaw_r_metatarsal_PitchInterpolator"));
SoROUTE2760->setFromField(QString("value_changed"));
SoROUTE2760->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2760->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2760);

SoROUTE* SoROUTE2761 = new SoROUTE();
SoROUTE2761->setFromNode(QString("Yaw_sacroiliac_YawInterpolator"));
SoROUTE2761->setFromField(QString("value_changed"));
SoROUTE2761->setToNode(QString("hanim_sacroiliac"));
SoROUTE2761->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2761);

SoROUTE* SoROUTE2762 = new SoROUTE();
SoROUTE2762->setFromNode(QString("Yaw_vl5_YawInterpolator"));
SoROUTE2762->setFromField(QString("value_changed"));
SoROUTE2762->setToNode(QString("hanim_vl5"));
SoROUTE2762->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2762);

SoROUTE* SoROUTE2763 = new SoROUTE();
SoROUTE2763->setFromNode(QString("Yaw_vc6_YawInterpolator"));
SoROUTE2763->setFromField(QString("value_changed"));
SoROUTE2763->setToNode(QString("hanim_vc6"));
SoROUTE2763->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2763);

SoROUTE* SoROUTE2764 = new SoROUTE();
SoROUTE2764->setFromNode(QString("Yaw_l_thumb1_PitchInterpolator"));
SoROUTE2764->setFromField(QString("value_changed"));
SoROUTE2764->setToNode(QString("hanim_l_thumb1"));
SoROUTE2764->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2764);

SoROUTE* SoROUTE2765 = new SoROUTE();
SoROUTE2765->setFromNode(QString("Yaw_r_thumb1_PitchInterpolator"));
SoROUTE2765->setFromField(QString("value_changed"));
SoROUTE2765->setToNode(QString("hanim_r_thumb1"));
SoROUTE2765->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2765);

SoROUTE* SoROUTE2766 = new SoROUTE();
SoROUTE2766->setFromNode(QString("RollTimer"));
SoROUTE2766->setFromField(QString("fraction_changed"));
SoROUTE2766->setToNode(QString("Rolls_r_ankle_RotationInterpolator"));
SoROUTE2766->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2766);

SoROUTE* SoROUTE2767 = new SoROUTE();
SoROUTE2767->setFromNode(QString("RollTimer"));
SoROUTE2767->setFromField(QString("fraction_changed"));
SoROUTE2767->setToNode(QString("Rolls_r_knee_RotationInterpolator"));
SoROUTE2767->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2767);

SoROUTE* SoROUTE2768 = new SoROUTE();
SoROUTE2768->setFromNode(QString("RollTimer"));
SoROUTE2768->setFromField(QString("fraction_changed"));
SoROUTE2768->setToNode(QString("Rolls_r_hip_RotationInterpolator"));
SoROUTE2768->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2768);

SoROUTE* SoROUTE2769 = new SoROUTE();
SoROUTE2769->setFromNode(QString("RollTimer"));
SoROUTE2769->setFromField(QString("fraction_changed"));
SoROUTE2769->setToNode(QString("Rolls_l_ankle_RotationInterpolator"));
SoROUTE2769->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2769);

SoROUTE* SoROUTE2770 = new SoROUTE();
SoROUTE2770->setFromNode(QString("RollTimer"));
SoROUTE2770->setFromField(QString("fraction_changed"));
SoROUTE2770->setToNode(QString("Rolls_l_knee_RotationInterpolator"));
SoROUTE2770->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2770);

SoROUTE* SoROUTE2771 = new SoROUTE();
SoROUTE2771->setFromNode(QString("RollTimer"));
SoROUTE2771->setFromField(QString("fraction_changed"));
SoROUTE2771->setToNode(QString("Rolls_l_hip_RotationInterpolator"));
SoROUTE2771->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2771);

SoROUTE* SoROUTE2772 = new SoROUTE();
SoROUTE2772->setFromNode(QString("RollTimer"));
SoROUTE2772->setFromField(QString("fraction_changed"));
SoROUTE2772->setToNode(QString("Rolls_lower_body_RotationInterpolator"));
SoROUTE2772->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2772);

SoROUTE* SoROUTE2773 = new SoROUTE();
SoROUTE2773->setFromNode(QString("RollTimer"));
SoROUTE2773->setFromField(QString("fraction_changed"));
SoROUTE2773->setToNode(QString("Rolls_r_wrist_RotationInterpolator"));
SoROUTE2773->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2773);

SoROUTE* SoROUTE2774 = new SoROUTE();
SoROUTE2774->setFromNode(QString("RollTimer"));
SoROUTE2774->setFromField(QString("fraction_changed"));
SoROUTE2774->setToNode(QString("Rolls_r_elbow_RotationInterpolator"));
SoROUTE2774->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2774);

SoROUTE* SoROUTE2775 = new SoROUTE();
SoROUTE2775->setFromNode(QString("RollTimer"));
SoROUTE2775->setFromField(QString("fraction_changed"));
SoROUTE2775->setToNode(QString("Rolls_r_shoulder_RotationInterpolator"));
SoROUTE2775->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2775);

SoROUTE* SoROUTE2776 = new SoROUTE();
SoROUTE2776->setFromNode(QString("RollTimer"));
SoROUTE2776->setFromField(QString("fraction_changed"));
SoROUTE2776->setToNode(QString("Rolls_l_wrist_RotationInterpolator"));
SoROUTE2776->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2776);

SoROUTE* SoROUTE2777 = new SoROUTE();
SoROUTE2777->setFromNode(QString("RollTimer"));
SoROUTE2777->setFromField(QString("fraction_changed"));
SoROUTE2777->setToNode(QString("Rolls_l_elbow_RotationInterpolator"));
SoROUTE2777->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2777);

SoROUTE* SoROUTE2778 = new SoROUTE();
SoROUTE2778->setFromNode(QString("RollTimer"));
SoROUTE2778->setFromField(QString("fraction_changed"));
SoROUTE2778->setToNode(QString("Rolls_l_shoulder_RotationInterpolator"));
SoROUTE2778->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2778);

SoROUTE* SoROUTE2779 = new SoROUTE();
SoROUTE2779->setFromNode(QString("RollTimer"));
SoROUTE2779->setFromField(QString("fraction_changed"));
SoROUTE2779->setToNode(QString("Rolls_head_RotationInterpolator"));
SoROUTE2779->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2779);

SoROUTE* SoROUTE2780 = new SoROUTE();
SoROUTE2780->setFromNode(QString("RollTimer"));
SoROUTE2780->setFromField(QString("fraction_changed"));
SoROUTE2780->setToNode(QString("Rolls_neck_RotationInterpolator"));
SoROUTE2780->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2780);

SoROUTE* SoROUTE2781 = new SoROUTE();
SoROUTE2781->setFromNode(QString("RollTimer"));
SoROUTE2781->setFromField(QString("fraction_changed"));
SoROUTE2781->setToNode(QString("Rolls_upper_body_RotationInterpolator"));
SoROUTE2781->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2781);

SoROUTE* SoROUTE2782 = new SoROUTE();
SoROUTE2782->setFromNode(QString("RollTimer"));
SoROUTE2782->setFromField(QString("fraction_changed"));
SoROUTE2782->setToNode(QString("Rolls_whole_body_RotationInterpolator"));
SoROUTE2782->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2782);

SoROUTE* SoROUTE2783 = new SoROUTE();
SoROUTE2783->setFromNode(QString("RollTimer"));
SoROUTE2783->setFromField(QString("fraction_changed"));
SoROUTE2783->setToNode(QString("Rolls_whole_body_TranslationInterpolator"));
SoROUTE2783->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2783);

SoROUTE* SoROUTE2784 = new SoROUTE();
SoROUTE2784->setFromNode(QString("RollTimer"));
SoROUTE2784->setFromField(QString("fraction_changed"));
SoROUTE2784->setToNode(QString("Roll_l_sternoclavicular_RollInterpolator"));
SoROUTE2784->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2784);

SoROUTE* SoROUTE2785 = new SoROUTE();
SoROUTE2785->setFromNode(QString("RollTimer"));
SoROUTE2785->setFromField(QString("fraction_changed"));
SoROUTE2785->setToNode(QString("Roll_l_acromioclavicular_RollInterpolator"));
SoROUTE2785->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2785);

SoROUTE* SoROUTE2786 = new SoROUTE();
SoROUTE2786->setFromNode(QString("RollTimer"));
SoROUTE2786->setFromField(QString("fraction_changed"));
SoROUTE2786->setToNode(QString("Roll_r_sternoclavicular_RollInterpolator"));
SoROUTE2786->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2786);

SoROUTE* SoROUTE2787 = new SoROUTE();
SoROUTE2787->setFromNode(QString("RollTimer"));
SoROUTE2787->setFromField(QString("fraction_changed"));
SoROUTE2787->setToNode(QString("Roll_r_acromioclavicular_RollInterpolator"));
SoROUTE2787->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2787);

SoROUTE* SoROUTE2788 = new SoROUTE();
SoROUTE2788->setFromNode(QString("RollTimer"));
SoROUTE2788->setFromField(QString("fraction_changed"));
SoROUTE2788->setToNode(QString("Roll_r_metatarsal_PitchInterpolator"));
SoROUTE2788->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2788);

SoROUTE* SoROUTE2789 = new SoROUTE();
SoROUTE2789->setFromNode(QString("RollTimer"));
SoROUTE2789->setFromField(QString("fraction_changed"));
SoROUTE2789->setToNode(QString("Roll_sacroiliac_YawInterpolator"));
SoROUTE2789->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2789);

SoROUTE* SoROUTE2790 = new SoROUTE();
SoROUTE2790->setFromNode(QString("RollTimer"));
SoROUTE2790->setFromField(QString("fraction_changed"));
SoROUTE2790->setToNode(QString("Roll_vl5_YawInterpolator"));
SoROUTE2790->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2790);

SoROUTE* SoROUTE2791 = new SoROUTE();
SoROUTE2791->setFromNode(QString("RollTimer"));
SoROUTE2791->setFromField(QString("fraction_changed"));
SoROUTE2791->setToNode(QString("Roll_vc6_YawInterpolator"));
SoROUTE2791->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2791);

SoROUTE* SoROUTE2792 = new SoROUTE();
SoROUTE2792->setFromNode(QString("RollTimer"));
SoROUTE2792->setFromField(QString("fraction_changed"));
SoROUTE2792->setToNode(QString("Roll_l_thumb1_PitchInterpolator"));
SoROUTE2792->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2792);

SoROUTE* SoROUTE2793 = new SoROUTE();
SoROUTE2793->setFromNode(QString("RollTimer"));
SoROUTE2793->setFromField(QString("fraction_changed"));
SoROUTE2793->setToNode(QString("Roll_r_thumb1_PitchInterpolator"));
SoROUTE2793->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2793);

SoROUTE* SoROUTE2794 = new SoROUTE();
SoROUTE2794->setFromNode(QString("Rolls_r_ankle_RotationInterpolator"));
SoROUTE2794->setFromField(QString("value_changed"));
SoROUTE2794->setToNode(QString("hanim_r_ankle"));
SoROUTE2794->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2794);

SoROUTE* SoROUTE2795 = new SoROUTE();
SoROUTE2795->setFromNode(QString("Rolls_r_knee_RotationInterpolator"));
SoROUTE2795->setFromField(QString("value_changed"));
SoROUTE2795->setToNode(QString("hanim_r_knee"));
SoROUTE2795->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2795);

SoROUTE* SoROUTE2796 = new SoROUTE();
SoROUTE2796->setFromNode(QString("Rolls_r_hip_RotationInterpolator"));
SoROUTE2796->setFromField(QString("value_changed"));
SoROUTE2796->setToNode(QString("hanim_r_hip"));
SoROUTE2796->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2796);

SoROUTE* SoROUTE2797 = new SoROUTE();
SoROUTE2797->setFromNode(QString("Rolls_l_ankle_RotationInterpolator"));
SoROUTE2797->setFromField(QString("value_changed"));
SoROUTE2797->setToNode(QString("hanim_l_ankle"));
SoROUTE2797->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2797);

SoROUTE* SoROUTE2798 = new SoROUTE();
SoROUTE2798->setFromNode(QString("Rolls_l_knee_RotationInterpolator"));
SoROUTE2798->setFromField(QString("value_changed"));
SoROUTE2798->setToNode(QString("hanim_l_knee"));
SoROUTE2798->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2798);

SoROUTE* SoROUTE2799 = new SoROUTE();
SoROUTE2799->setFromNode(QString("Rolls_l_hip_RotationInterpolator"));
SoROUTE2799->setFromField(QString("value_changed"));
SoROUTE2799->setToNode(QString("hanim_l_hip"));
SoROUTE2799->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2799);

SoROUTE* SoROUTE2800 = new SoROUTE();
SoROUTE2800->setFromNode(QString("Rolls_lower_body_RotationInterpolator"));
SoROUTE2800->setFromField(QString("value_changed"));
SoROUTE2800->setToNode(QString("hanim_sacroiliac"));
SoROUTE2800->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2800);

SoROUTE* SoROUTE2801 = new SoROUTE();
SoROUTE2801->setFromNode(QString("Rolls_r_wrist_RotationInterpolator"));
SoROUTE2801->setFromField(QString("value_changed"));
SoROUTE2801->setToNode(QString("hanim_r_wrist"));
SoROUTE2801->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2801);

SoROUTE* SoROUTE2802 = new SoROUTE();
SoROUTE2802->setFromNode(QString("Rolls_r_elbow_RotationInterpolator"));
SoROUTE2802->setFromField(QString("value_changed"));
SoROUTE2802->setToNode(QString("hanim_r_elbow"));
SoROUTE2802->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2802);

SoROUTE* SoROUTE2803 = new SoROUTE();
SoROUTE2803->setFromNode(QString("Rolls_r_shoulder_RotationInterpolator"));
SoROUTE2803->setFromField(QString("value_changed"));
SoROUTE2803->setToNode(QString("hanim_r_shoulder"));
SoROUTE2803->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2803);

SoROUTE* SoROUTE2804 = new SoROUTE();
SoROUTE2804->setFromNode(QString("Rolls_l_wrist_RotationInterpolator"));
SoROUTE2804->setFromField(QString("value_changed"));
SoROUTE2804->setToNode(QString("hanim_l_wrist"));
SoROUTE2804->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2804);

SoROUTE* SoROUTE2805 = new SoROUTE();
SoROUTE2805->setFromNode(QString("Rolls_l_elbow_RotationInterpolator"));
SoROUTE2805->setFromField(QString("value_changed"));
SoROUTE2805->setToNode(QString("hanim_l_elbow"));
SoROUTE2805->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2805);

SoROUTE* SoROUTE2806 = new SoROUTE();
SoROUTE2806->setFromNode(QString("Rolls_l_shoulder_RotationInterpolator"));
SoROUTE2806->setFromField(QString("value_changed"));
SoROUTE2806->setToNode(QString("hanim_l_shoulder"));
SoROUTE2806->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2806);

SoROUTE* SoROUTE2807 = new SoROUTE();
SoROUTE2807->setFromNode(QString("Rolls_head_RotationInterpolator"));
SoROUTE2807->setFromField(QString("value_changed"));
SoROUTE2807->setToNode(QString("hanim_skullbase"));
SoROUTE2807->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2807);

SoROUTE* SoROUTE2808 = new SoROUTE();
SoROUTE2808->setFromNode(QString("Rolls_neck_RotationInterpolator"));
SoROUTE2808->setFromField(QString("value_changed"));
SoROUTE2808->setToNode(QString("hanim_vc4"));
SoROUTE2808->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2808);

SoROUTE* SoROUTE2809 = new SoROUTE();
SoROUTE2809->setFromNode(QString("Rolls_upper_body_RotationInterpolator"));
SoROUTE2809->setFromField(QString("value_changed"));
SoROUTE2809->setToNode(QString("hanim_vl1"));
SoROUTE2809->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2809);

SoROUTE* SoROUTE2810 = new SoROUTE();
SoROUTE2810->setFromNode(QString("Rolls_whole_body_RotationInterpolator"));
SoROUTE2810->setFromField(QString("value_changed"));
SoROUTE2810->setToNode(QString("hanim_humanoid_root"));
SoROUTE2810->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2810);

SoROUTE* SoROUTE2811 = new SoROUTE();
SoROUTE2811->setFromNode(QString("Rolls_whole_body_TranslationInterpolator"));
SoROUTE2811->setFromField(QString("value_changed"));
SoROUTE2811->setToNode(QString("hanim_humanoid_root"));
SoROUTE2811->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2811);

SoROUTE* SoROUTE2812 = new SoROUTE();
SoROUTE2812->setFromNode(QString("Roll_l_sternoclavicular_RollInterpolator"));
SoROUTE2812->setFromField(QString("value_changed"));
SoROUTE2812->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2812->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2812);

SoROUTE* SoROUTE2813 = new SoROUTE();
SoROUTE2813->setFromNode(QString("Roll_l_acromioclavicular_RollInterpolator"));
SoROUTE2813->setFromField(QString("value_changed"));
SoROUTE2813->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2813->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2813);

SoROUTE* SoROUTE2814 = new SoROUTE();
SoROUTE2814->setFromNode(QString("Roll_r_sternoclavicular_RollInterpolator"));
SoROUTE2814->setFromField(QString("value_changed"));
SoROUTE2814->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2814->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2814);

SoROUTE* SoROUTE2815 = new SoROUTE();
SoROUTE2815->setFromNode(QString("Roll_r_acromioclavicular_RollInterpolator"));
SoROUTE2815->setFromField(QString("value_changed"));
SoROUTE2815->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2815->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2815);

SoROUTE* SoROUTE2816 = new SoROUTE();
SoROUTE2816->setFromNode(QString("Roll_r_metatarsal_PitchInterpolator"));
SoROUTE2816->setFromField(QString("value_changed"));
SoROUTE2816->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2816->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2816);

SoROUTE* SoROUTE2817 = new SoROUTE();
SoROUTE2817->setFromNode(QString("Roll_r_metatarsal_PitchInterpolator"));
SoROUTE2817->setFromField(QString("value_changed"));
SoROUTE2817->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2817->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2817);

SoROUTE* SoROUTE2818 = new SoROUTE();
SoROUTE2818->setFromNode(QString("Roll_sacroiliac_YawInterpolator"));
SoROUTE2818->setFromField(QString("value_changed"));
SoROUTE2818->setToNode(QString("hanim_sacroiliac"));
SoROUTE2818->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2818);

SoROUTE* SoROUTE2819 = new SoROUTE();
SoROUTE2819->setFromNode(QString("Roll_vl5_YawInterpolator"));
SoROUTE2819->setFromField(QString("value_changed"));
SoROUTE2819->setToNode(QString("hanim_vl5"));
SoROUTE2819->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2819);

SoROUTE* SoROUTE2820 = new SoROUTE();
SoROUTE2820->setFromNode(QString("Roll_vc6_YawInterpolator"));
SoROUTE2820->setFromField(QString("value_changed"));
SoROUTE2820->setToNode(QString("hanim_vc6"));
SoROUTE2820->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2820);

SoROUTE* SoROUTE2821 = new SoROUTE();
SoROUTE2821->setFromNode(QString("Roll_l_thumb1_PitchInterpolator"));
SoROUTE2821->setFromField(QString("value_changed"));
SoROUTE2821->setToNode(QString("hanim_l_thumb1"));
SoROUTE2821->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2821);

SoROUTE* SoROUTE2822 = new SoROUTE();
SoROUTE2822->setFromNode(QString("Roll_r_thumb1_PitchInterpolator"));
SoROUTE2822->setFromField(QString("value_changed"));
SoROUTE2822->setToNode(QString("hanim_r_thumb1"));
SoROUTE2822->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2822);

SoROUTE* SoROUTE2823 = new SoROUTE();
SoROUTE2823->setFromNode(QString("WalkTimer"));
SoROUTE2823->setFromField(QString("fraction_changed"));
SoROUTE2823->setToNode(QString("Walk_r_ankle_RotationInterpolator"));
SoROUTE2823->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2823);

SoROUTE* SoROUTE2824 = new SoROUTE();
SoROUTE2824->setFromNode(QString("WalkTimer"));
SoROUTE2824->setFromField(QString("fraction_changed"));
SoROUTE2824->setToNode(QString("Walk_r_knee_RotationInterpolator"));
SoROUTE2824->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2824);

SoROUTE* SoROUTE2825 = new SoROUTE();
SoROUTE2825->setFromNode(QString("WalkTimer"));
SoROUTE2825->setFromField(QString("fraction_changed"));
SoROUTE2825->setToNode(QString("Walk_r_hip_RotationInterpolator"));
SoROUTE2825->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2825);

SoROUTE* SoROUTE2826 = new SoROUTE();
SoROUTE2826->setFromNode(QString("WalkTimer"));
SoROUTE2826->setFromField(QString("fraction_changed"));
SoROUTE2826->setToNode(QString("Walk_l_ankle_RotationInterpolator"));
SoROUTE2826->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2826);

SoROUTE* SoROUTE2827 = new SoROUTE();
SoROUTE2827->setFromNode(QString("WalkTimer"));
SoROUTE2827->setFromField(QString("fraction_changed"));
SoROUTE2827->setToNode(QString("Walk_l_knee_RotationInterpolator"));
SoROUTE2827->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2827);

SoROUTE* SoROUTE2828 = new SoROUTE();
SoROUTE2828->setFromNode(QString("WalkTimer"));
SoROUTE2828->setFromField(QString("fraction_changed"));
SoROUTE2828->setToNode(QString("Walk_l_hip_RotationInterpolator"));
SoROUTE2828->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2828);

SoROUTE* SoROUTE2829 = new SoROUTE();
SoROUTE2829->setFromNode(QString("WalkTimer"));
SoROUTE2829->setFromField(QString("fraction_changed"));
SoROUTE2829->setToNode(QString("Walk_lower_body_RotationInterpolator"));
SoROUTE2829->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2829);

SoROUTE* SoROUTE2830 = new SoROUTE();
SoROUTE2830->setFromNode(QString("WalkTimer"));
SoROUTE2830->setFromField(QString("fraction_changed"));
SoROUTE2830->setToNode(QString("Walk_r_wrist_RotationInterpolator"));
SoROUTE2830->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2830);

SoROUTE* SoROUTE2831 = new SoROUTE();
SoROUTE2831->setFromNode(QString("WalkTimer"));
SoROUTE2831->setFromField(QString("fraction_changed"));
SoROUTE2831->setToNode(QString("Walk_r_elbow_RotationInterpolator"));
SoROUTE2831->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2831);

SoROUTE* SoROUTE2832 = new SoROUTE();
SoROUTE2832->setFromNode(QString("WalkTimer"));
SoROUTE2832->setFromField(QString("fraction_changed"));
SoROUTE2832->setToNode(QString("Walk_r_shoulder_RotationInterpolator"));
SoROUTE2832->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2832);

SoROUTE* SoROUTE2833 = new SoROUTE();
SoROUTE2833->setFromNode(QString("WalkTimer"));
SoROUTE2833->setFromField(QString("fraction_changed"));
SoROUTE2833->setToNode(QString("Walk_l_wrist_RotationInterpolator"));
SoROUTE2833->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2833);

SoROUTE* SoROUTE2834 = new SoROUTE();
SoROUTE2834->setFromNode(QString("WalkTimer"));
SoROUTE2834->setFromField(QString("fraction_changed"));
SoROUTE2834->setToNode(QString("Walk_l_elbow_RotationInterpolator"));
SoROUTE2834->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2834);

SoROUTE* SoROUTE2835 = new SoROUTE();
SoROUTE2835->setFromNode(QString("WalkTimer"));
SoROUTE2835->setFromField(QString("fraction_changed"));
SoROUTE2835->setToNode(QString("Walk_l_shoulder_RotationInterpolator"));
SoROUTE2835->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2835);

SoROUTE* SoROUTE2836 = new SoROUTE();
SoROUTE2836->setFromNode(QString("WalkTimer"));
SoROUTE2836->setFromField(QString("fraction_changed"));
SoROUTE2836->setToNode(QString("Walk_head_RotationInterpolator"));
SoROUTE2836->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2836);

SoROUTE* SoROUTE2837 = new SoROUTE();
SoROUTE2837->setFromNode(QString("WalkTimer"));
SoROUTE2837->setFromField(QString("fraction_changed"));
SoROUTE2837->setToNode(QString("Walk_neck_RotationInterpolator"));
SoROUTE2837->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2837);

SoROUTE* SoROUTE2838 = new SoROUTE();
SoROUTE2838->setFromNode(QString("WalkTimer"));
SoROUTE2838->setFromField(QString("fraction_changed"));
SoROUTE2838->setToNode(QString("Walk_upper_body_RotationInterpolator"));
SoROUTE2838->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2838);

SoROUTE* SoROUTE2839 = new SoROUTE();
SoROUTE2839->setFromNode(QString("WalkTimer"));
SoROUTE2839->setFromField(QString("fraction_changed"));
SoROUTE2839->setToNode(QString("Walk_whole_body_RotationInterpolator"));
SoROUTE2839->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2839);

SoROUTE* SoROUTE2840 = new SoROUTE();
SoROUTE2840->setFromNode(QString("WalkTimer"));
SoROUTE2840->setFromField(QString("fraction_changed"));
SoROUTE2840->setToNode(QString("Walk_whole_body_TranslationInterpolator"));
SoROUTE2840->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2840);

SoROUTE* SoROUTE2841 = new SoROUTE();
SoROUTE2841->setFromNode(QString("WalkTimer"));
SoROUTE2841->setFromField(QString("fraction_changed"));
SoROUTE2841->setToNode(QString("Walk_l_sternoclavicular_RollInterpolator"));
SoROUTE2841->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2841);

SoROUTE* SoROUTE2842 = new SoROUTE();
SoROUTE2842->setFromNode(QString("WalkTimer"));
SoROUTE2842->setFromField(QString("fraction_changed"));
SoROUTE2842->setToNode(QString("Walk_l_acromioclavicular_RollInterpolator"));
SoROUTE2842->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2842);

SoROUTE* SoROUTE2843 = new SoROUTE();
SoROUTE2843->setFromNode(QString("WalkTimer"));
SoROUTE2843->setFromField(QString("fraction_changed"));
SoROUTE2843->setToNode(QString("Walk_r_sternoclavicular_RollInterpolator"));
SoROUTE2843->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2843);

SoROUTE* SoROUTE2844 = new SoROUTE();
SoROUTE2844->setFromNode(QString("WalkTimer"));
SoROUTE2844->setFromField(QString("fraction_changed"));
SoROUTE2844->setToNode(QString("Walk_r_acromioclavicular_RollInterpolator"));
SoROUTE2844->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2844);

SoROUTE* SoROUTE2845 = new SoROUTE();
SoROUTE2845->setFromNode(QString("WalkTimer"));
SoROUTE2845->setFromField(QString("fraction_changed"));
SoROUTE2845->setToNode(QString("Walk_r_metatarsal_PitchInterpolator"));
SoROUTE2845->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2845);

SoROUTE* SoROUTE2846 = new SoROUTE();
SoROUTE2846->setFromNode(QString("WalkTimer"));
SoROUTE2846->setFromField(QString("fraction_changed"));
SoROUTE2846->setToNode(QString("Walk_sacroiliac_YawInterpolator"));
SoROUTE2846->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2846);

SoROUTE* SoROUTE2847 = new SoROUTE();
SoROUTE2847->setFromNode(QString("WalkTimer"));
SoROUTE2847->setFromField(QString("fraction_changed"));
SoROUTE2847->setToNode(QString("Walk_vl5_YawInterpolator"));
SoROUTE2847->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2847);

SoROUTE* SoROUTE2848 = new SoROUTE();
SoROUTE2848->setFromNode(QString("WalkTimer"));
SoROUTE2848->setFromField(QString("fraction_changed"));
SoROUTE2848->setToNode(QString("Walk_vc6_YawInterpolator"));
SoROUTE2848->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2848);

SoROUTE* SoROUTE2849 = new SoROUTE();
SoROUTE2849->setFromNode(QString("WalkTimer"));
SoROUTE2849->setFromField(QString("fraction_changed"));
SoROUTE2849->setToNode(QString("Walk_l_thumb1_PitchInterpolator"));
SoROUTE2849->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2849);

SoROUTE* SoROUTE2850 = new SoROUTE();
SoROUTE2850->setFromNode(QString("WalkTimer"));
SoROUTE2850->setFromField(QString("fraction_changed"));
SoROUTE2850->setToNode(QString("Walk_r_thumb1_PitchInterpolator"));
SoROUTE2850->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2850);

SoROUTE* SoROUTE2851 = new SoROUTE();
SoROUTE2851->setFromNode(QString("Walk_r_ankle_RotationInterpolator"));
SoROUTE2851->setFromField(QString("value_changed"));
SoROUTE2851->setToNode(QString("hanim_r_ankle"));
SoROUTE2851->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2851);

SoROUTE* SoROUTE2852 = new SoROUTE();
SoROUTE2852->setFromNode(QString("Walk_r_knee_RotationInterpolator"));
SoROUTE2852->setFromField(QString("value_changed"));
SoROUTE2852->setToNode(QString("hanim_r_knee"));
SoROUTE2852->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2852);

SoROUTE* SoROUTE2853 = new SoROUTE();
SoROUTE2853->setFromNode(QString("Walk_r_hip_RotationInterpolator"));
SoROUTE2853->setFromField(QString("value_changed"));
SoROUTE2853->setToNode(QString("hanim_r_hip"));
SoROUTE2853->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2853);

SoROUTE* SoROUTE2854 = new SoROUTE();
SoROUTE2854->setFromNode(QString("Walk_l_ankle_RotationInterpolator"));
SoROUTE2854->setFromField(QString("value_changed"));
SoROUTE2854->setToNode(QString("hanim_l_ankle"));
SoROUTE2854->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2854);

SoROUTE* SoROUTE2855 = new SoROUTE();
SoROUTE2855->setFromNode(QString("Walk_l_knee_RotationInterpolator"));
SoROUTE2855->setFromField(QString("value_changed"));
SoROUTE2855->setToNode(QString("hanim_l_knee"));
SoROUTE2855->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2855);

SoROUTE* SoROUTE2856 = new SoROUTE();
SoROUTE2856->setFromNode(QString("Walk_l_hip_RotationInterpolator"));
SoROUTE2856->setFromField(QString("value_changed"));
SoROUTE2856->setToNode(QString("hanim_l_hip"));
SoROUTE2856->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2856);

SoROUTE* SoROUTE2857 = new SoROUTE();
SoROUTE2857->setFromNode(QString("Walk_lower_body_RotationInterpolator"));
SoROUTE2857->setFromField(QString("value_changed"));
SoROUTE2857->setToNode(QString("hanim_sacroiliac"));
SoROUTE2857->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2857);

SoROUTE* SoROUTE2858 = new SoROUTE();
SoROUTE2858->setFromNode(QString("Walk_r_wrist_RotationInterpolator"));
SoROUTE2858->setFromField(QString("value_changed"));
SoROUTE2858->setToNode(QString("hanim_r_wrist"));
SoROUTE2858->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2858);

SoROUTE* SoROUTE2859 = new SoROUTE();
SoROUTE2859->setFromNode(QString("Walk_r_elbow_RotationInterpolator"));
SoROUTE2859->setFromField(QString("value_changed"));
SoROUTE2859->setToNode(QString("hanim_r_elbow"));
SoROUTE2859->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2859);

SoROUTE* SoROUTE2860 = new SoROUTE();
SoROUTE2860->setFromNode(QString("Walk_r_shoulder_RotationInterpolator"));
SoROUTE2860->setFromField(QString("value_changed"));
SoROUTE2860->setToNode(QString("hanim_r_shoulder"));
SoROUTE2860->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2860);

SoROUTE* SoROUTE2861 = new SoROUTE();
SoROUTE2861->setFromNode(QString("Walk_l_wrist_RotationInterpolator"));
SoROUTE2861->setFromField(QString("value_changed"));
SoROUTE2861->setToNode(QString("hanim_l_wrist"));
SoROUTE2861->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2861);

SoROUTE* SoROUTE2862 = new SoROUTE();
SoROUTE2862->setFromNode(QString("Walk_l_elbow_RotationInterpolator"));
SoROUTE2862->setFromField(QString("value_changed"));
SoROUTE2862->setToNode(QString("hanim_l_elbow"));
SoROUTE2862->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2862);

SoROUTE* SoROUTE2863 = new SoROUTE();
SoROUTE2863->setFromNode(QString("Walk_l_shoulder_RotationInterpolator"));
SoROUTE2863->setFromField(QString("value_changed"));
SoROUTE2863->setToNode(QString("hanim_l_shoulder"));
SoROUTE2863->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2863);

SoROUTE* SoROUTE2864 = new SoROUTE();
SoROUTE2864->setFromNode(QString("Walk_head_RotationInterpolator"));
SoROUTE2864->setFromField(QString("value_changed"));
SoROUTE2864->setToNode(QString("hanim_skullbase"));
SoROUTE2864->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2864);

SoROUTE* SoROUTE2865 = new SoROUTE();
SoROUTE2865->setFromNode(QString("Walk_neck_RotationInterpolator"));
SoROUTE2865->setFromField(QString("value_changed"));
SoROUTE2865->setToNode(QString("hanim_vc4"));
SoROUTE2865->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2865);

SoROUTE* SoROUTE2866 = new SoROUTE();
SoROUTE2866->setFromNode(QString("Walk_upper_body_RotationInterpolator"));
SoROUTE2866->setFromField(QString("value_changed"));
SoROUTE2866->setToNode(QString("hanim_vl1"));
SoROUTE2866->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2866);

SoROUTE* SoROUTE2867 = new SoROUTE();
SoROUTE2867->setFromNode(QString("Walk_whole_body_RotationInterpolator"));
SoROUTE2867->setFromField(QString("value_changed"));
SoROUTE2867->setToNode(QString("hanim_humanoid_root"));
SoROUTE2867->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2867);

SoROUTE* SoROUTE2868 = new SoROUTE();
SoROUTE2868->setFromNode(QString("Walk_whole_body_TranslationInterpolator"));
SoROUTE2868->setFromField(QString("value_changed"));
SoROUTE2868->setToNode(QString("hanim_humanoid_root"));
SoROUTE2868->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2868);

SoROUTE* SoROUTE2869 = new SoROUTE();
SoROUTE2869->setFromNode(QString("Walk_l_sternoclavicular_RollInterpolator"));
SoROUTE2869->setFromField(QString("value_changed"));
SoROUTE2869->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2869->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2869);

SoROUTE* SoROUTE2870 = new SoROUTE();
SoROUTE2870->setFromNode(QString("Walk_l_acromioclavicular_RollInterpolator"));
SoROUTE2870->setFromField(QString("value_changed"));
SoROUTE2870->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2870->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2870);

SoROUTE* SoROUTE2871 = new SoROUTE();
SoROUTE2871->setFromNode(QString("Walk_r_sternoclavicular_RollInterpolator"));
SoROUTE2871->setFromField(QString("value_changed"));
SoROUTE2871->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2871->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2871);

SoROUTE* SoROUTE2872 = new SoROUTE();
SoROUTE2872->setFromNode(QString("Walk_r_acromioclavicular_RollInterpolator"));
SoROUTE2872->setFromField(QString("value_changed"));
SoROUTE2872->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2872->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2872);

SoROUTE* SoROUTE2873 = new SoROUTE();
SoROUTE2873->setFromNode(QString("Walk_r_metatarsal_PitchInterpolator"));
SoROUTE2873->setFromField(QString("value_changed"));
SoROUTE2873->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2873->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2873);

SoROUTE* SoROUTE2874 = new SoROUTE();
SoROUTE2874->setFromNode(QString("Walk_r_metatarsal_PitchInterpolator"));
SoROUTE2874->setFromField(QString("value_changed"));
SoROUTE2874->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2874->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2874);

SoROUTE* SoROUTE2875 = new SoROUTE();
SoROUTE2875->setFromNode(QString("Walk_sacroiliac_YawInterpolator"));
SoROUTE2875->setFromField(QString("value_changed"));
SoROUTE2875->setToNode(QString("hanim_sacroiliac"));
SoROUTE2875->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2875);

SoROUTE* SoROUTE2876 = new SoROUTE();
SoROUTE2876->setFromNode(QString("Walk_vl5_YawInterpolator"));
SoROUTE2876->setFromField(QString("value_changed"));
SoROUTE2876->setToNode(QString("hanim_vl5"));
SoROUTE2876->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2876);

SoROUTE* SoROUTE2877 = new SoROUTE();
SoROUTE2877->setFromNode(QString("Walk_vc6_YawInterpolator"));
SoROUTE2877->setFromField(QString("value_changed"));
SoROUTE2877->setToNode(QString("hanim_vc6"));
SoROUTE2877->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2877);

SoROUTE* SoROUTE2878 = new SoROUTE();
SoROUTE2878->setFromNode(QString("Walk_l_thumb1_PitchInterpolator"));
SoROUTE2878->setFromField(QString("value_changed"));
SoROUTE2878->setToNode(QString("hanim_l_thumb1"));
SoROUTE2878->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2878);

SoROUTE* SoROUTE2879 = new SoROUTE();
SoROUTE2879->setFromNode(QString("Walk_r_thumb1_PitchInterpolator"));
SoROUTE2879->setFromField(QString("value_changed"));
SoROUTE2879->setToNode(QString("hanim_r_thumb1"));
SoROUTE2879->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2879);

SoROUTE* SoROUTE2880 = new SoROUTE();
SoROUTE2880->setFromNode(QString("RunTimer"));
SoROUTE2880->setFromField(QString("fraction_changed"));
SoROUTE2880->setToNode(QString("Run_r_ankle_RotationInterpolator_Run"));
SoROUTE2880->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2880);

SoROUTE* SoROUTE2881 = new SoROUTE();
SoROUTE2881->setFromNode(QString("RunTimer"));
SoROUTE2881->setFromField(QString("fraction_changed"));
SoROUTE2881->setToNode(QString("Run_r_knee_RotationInterpolator_Run"));
SoROUTE2881->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2881);

SoROUTE* SoROUTE2882 = new SoROUTE();
SoROUTE2882->setFromNode(QString("RunTimer"));
SoROUTE2882->setFromField(QString("fraction_changed"));
SoROUTE2882->setToNode(QString("Run_r_hip_RotationInterpolator_Run"));
SoROUTE2882->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2882);

SoROUTE* SoROUTE2883 = new SoROUTE();
SoROUTE2883->setFromNode(QString("RunTimer"));
SoROUTE2883->setFromField(QString("fraction_changed"));
SoROUTE2883->setToNode(QString("Run_l_ankle_RotationInterpolator_Run"));
SoROUTE2883->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2883);

SoROUTE* SoROUTE2884 = new SoROUTE();
SoROUTE2884->setFromNode(QString("RunTimer"));
SoROUTE2884->setFromField(QString("fraction_changed"));
SoROUTE2884->setToNode(QString("Run_l_knee_RotationInterpolator_Run"));
SoROUTE2884->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2884);

SoROUTE* SoROUTE2885 = new SoROUTE();
SoROUTE2885->setFromNode(QString("RunTimer"));
SoROUTE2885->setFromField(QString("fraction_changed"));
SoROUTE2885->setToNode(QString("Run_l_hip_RotationInterpolator_Run"));
SoROUTE2885->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2885);

SoROUTE* SoROUTE2886 = new SoROUTE();
SoROUTE2886->setFromNode(QString("RunTimer"));
SoROUTE2886->setFromField(QString("fraction_changed"));
SoROUTE2886->setToNode(QString("Run_lower_body_RotationInterpolator_Run"));
SoROUTE2886->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2886);

SoROUTE* SoROUTE2887 = new SoROUTE();
SoROUTE2887->setFromNode(QString("RunTimer"));
SoROUTE2887->setFromField(QString("fraction_changed"));
SoROUTE2887->setToNode(QString("Run_r_wrist_RotationInterpolator_Run"));
SoROUTE2887->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2887);

SoROUTE* SoROUTE2888 = new SoROUTE();
SoROUTE2888->setFromNode(QString("RunTimer"));
SoROUTE2888->setFromField(QString("fraction_changed"));
SoROUTE2888->setToNode(QString("Run_r_elbow_RotationInterpolator_Run"));
SoROUTE2888->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2888);

SoROUTE* SoROUTE2889 = new SoROUTE();
SoROUTE2889->setFromNode(QString("RunTimer"));
SoROUTE2889->setFromField(QString("fraction_changed"));
SoROUTE2889->setToNode(QString("Run_r_shoulder_RotationInterpolator_Run"));
SoROUTE2889->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2889);

SoROUTE* SoROUTE2890 = new SoROUTE();
SoROUTE2890->setFromNode(QString("RunTimer"));
SoROUTE2890->setFromField(QString("fraction_changed"));
SoROUTE2890->setToNode(QString("Run_l_wrist_RotationInterpolator_Run"));
SoROUTE2890->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2890);

SoROUTE* SoROUTE2891 = new SoROUTE();
SoROUTE2891->setFromNode(QString("RunTimer"));
SoROUTE2891->setFromField(QString("fraction_changed"));
SoROUTE2891->setToNode(QString("Run_l_elbow_RotationInterpolator_Run"));
SoROUTE2891->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2891);

SoROUTE* SoROUTE2892 = new SoROUTE();
SoROUTE2892->setFromNode(QString("RunTimer"));
SoROUTE2892->setFromField(QString("fraction_changed"));
SoROUTE2892->setToNode(QString("Run_l_shoulder_RotationInterpolator_Run"));
SoROUTE2892->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2892);

SoROUTE* SoROUTE2893 = new SoROUTE();
SoROUTE2893->setFromNode(QString("RunTimer"));
SoROUTE2893->setFromField(QString("fraction_changed"));
SoROUTE2893->setToNode(QString("Run_head_RotationInterpolator_Run"));
SoROUTE2893->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2893);

SoROUTE* SoROUTE2894 = new SoROUTE();
SoROUTE2894->setFromNode(QString("RunTimer"));
SoROUTE2894->setFromField(QString("fraction_changed"));
SoROUTE2894->setToNode(QString("Run_neck_RotationInterpolator_Run"));
SoROUTE2894->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2894);

SoROUTE* SoROUTE2895 = new SoROUTE();
SoROUTE2895->setFromNode(QString("RunTimer"));
SoROUTE2895->setFromField(QString("fraction_changed"));
SoROUTE2895->setToNode(QString("Run_upper_body_RotationInterpolator_Run"));
SoROUTE2895->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2895);

SoROUTE* SoROUTE2896 = new SoROUTE();
SoROUTE2896->setFromNode(QString("RunTimer"));
SoROUTE2896->setFromField(QString("fraction_changed"));
SoROUTE2896->setToNode(QString("Run_whole_body_RotationInterpolator_Run"));
SoROUTE2896->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2896);

SoROUTE* SoROUTE2897 = new SoROUTE();
SoROUTE2897->setFromNode(QString("RunTimer"));
SoROUTE2897->setFromField(QString("fraction_changed"));
SoROUTE2897->setToNode(QString("Run_whole_body_TranslationInterpolator_Run"));
SoROUTE2897->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2897);

SoROUTE* SoROUTE2898 = new SoROUTE();
SoROUTE2898->setFromNode(QString("RunTimer"));
SoROUTE2898->setFromField(QString("fraction_changed"));
SoROUTE2898->setToNode(QString("Run_l_sternoclavicular_RollInterpolator"));
SoROUTE2898->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2898);

SoROUTE* SoROUTE2899 = new SoROUTE();
SoROUTE2899->setFromNode(QString("RunTimer"));
SoROUTE2899->setFromField(QString("fraction_changed"));
SoROUTE2899->setToNode(QString("Run_l_acromioclavicular_RollInterpolator"));
SoROUTE2899->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2899);

SoROUTE* SoROUTE2900 = new SoROUTE();
SoROUTE2900->setFromNode(QString("RunTimer"));
SoROUTE2900->setFromField(QString("fraction_changed"));
SoROUTE2900->setToNode(QString("Run_r_sternoclavicular_RollInterpolator"));
SoROUTE2900->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2900);

SoROUTE* SoROUTE2901 = new SoROUTE();
SoROUTE2901->setFromNode(QString("RunTimer"));
SoROUTE2901->setFromField(QString("fraction_changed"));
SoROUTE2901->setToNode(QString("Run_r_acromioclavicular_RollInterpolator"));
SoROUTE2901->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2901);

SoROUTE* SoROUTE2902 = new SoROUTE();
SoROUTE2902->setFromNode(QString("RunTimer"));
SoROUTE2902->setFromField(QString("fraction_changed"));
SoROUTE2902->setToNode(QString("Run_r_metatarsal_PitchInterpolator"));
SoROUTE2902->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2902);

SoROUTE* SoROUTE2903 = new SoROUTE();
SoROUTE2903->setFromNode(QString("RunTimer"));
SoROUTE2903->setFromField(QString("fraction_changed"));
SoROUTE2903->setToNode(QString("Run_sacroiliac_YawInterpolator"));
SoROUTE2903->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2903);

SoROUTE* SoROUTE2904 = new SoROUTE();
SoROUTE2904->setFromNode(QString("RunTimer"));
SoROUTE2904->setFromField(QString("fraction_changed"));
SoROUTE2904->setToNode(QString("Run_vl5_YawInterpolator"));
SoROUTE2904->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2904);

SoROUTE* SoROUTE2905 = new SoROUTE();
SoROUTE2905->setFromNode(QString("RunTimer"));
SoROUTE2905->setFromField(QString("fraction_changed"));
SoROUTE2905->setToNode(QString("Run_vc6_YawInterpolator"));
SoROUTE2905->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2905);

SoROUTE* SoROUTE2906 = new SoROUTE();
SoROUTE2906->setFromNode(QString("RunTimer"));
SoROUTE2906->setFromField(QString("fraction_changed"));
SoROUTE2906->setToNode(QString("Run_l_thumb1_PitchInterpolator"));
SoROUTE2906->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2906);

SoROUTE* SoROUTE2907 = new SoROUTE();
SoROUTE2907->setFromNode(QString("RunTimer"));
SoROUTE2907->setFromField(QString("fraction_changed"));
SoROUTE2907->setToNode(QString("Run_r_thumb1_PitchInterpolator"));
SoROUTE2907->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2907);

SoROUTE* SoROUTE2908 = new SoROUTE();
SoROUTE2908->setFromNode(QString("Run_r_ankle_RotationInterpolator_Run"));
SoROUTE2908->setFromField(QString("value_changed"));
SoROUTE2908->setToNode(QString("hanim_r_ankle"));
SoROUTE2908->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2908);

SoROUTE* SoROUTE2909 = new SoROUTE();
SoROUTE2909->setFromNode(QString("Run_r_knee_RotationInterpolator_Run"));
SoROUTE2909->setFromField(QString("value_changed"));
SoROUTE2909->setToNode(QString("hanim_r_knee"));
SoROUTE2909->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2909);

SoROUTE* SoROUTE2910 = new SoROUTE();
SoROUTE2910->setFromNode(QString("Run_r_hip_RotationInterpolator_Run"));
SoROUTE2910->setFromField(QString("value_changed"));
SoROUTE2910->setToNode(QString("hanim_r_hip"));
SoROUTE2910->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2910);

SoROUTE* SoROUTE2911 = new SoROUTE();
SoROUTE2911->setFromNode(QString("Run_l_ankle_RotationInterpolator_Run"));
SoROUTE2911->setFromField(QString("value_changed"));
SoROUTE2911->setToNode(QString("hanim_l_ankle"));
SoROUTE2911->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2911);

SoROUTE* SoROUTE2912 = new SoROUTE();
SoROUTE2912->setFromNode(QString("Run_l_knee_RotationInterpolator_Run"));
SoROUTE2912->setFromField(QString("value_changed"));
SoROUTE2912->setToNode(QString("hanim_l_knee"));
SoROUTE2912->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2912);

SoROUTE* SoROUTE2913 = new SoROUTE();
SoROUTE2913->setFromNode(QString("Run_l_hip_RotationInterpolator_Run"));
SoROUTE2913->setFromField(QString("value_changed"));
SoROUTE2913->setToNode(QString("hanim_l_hip"));
SoROUTE2913->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2913);

SoROUTE* SoROUTE2914 = new SoROUTE();
SoROUTE2914->setFromNode(QString("Run_r_wrist_RotationInterpolator_Run"));
SoROUTE2914->setFromField(QString("value_changed"));
SoROUTE2914->setToNode(QString("hanim_r_wrist"));
SoROUTE2914->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2914);

SoROUTE* SoROUTE2915 = new SoROUTE();
SoROUTE2915->setFromNode(QString("Run_r_elbow_RotationInterpolator_Run"));
SoROUTE2915->setFromField(QString("value_changed"));
SoROUTE2915->setToNode(QString("hanim_r_elbow"));
SoROUTE2915->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2915);

SoROUTE* SoROUTE2916 = new SoROUTE();
SoROUTE2916->setFromNode(QString("Run_r_shoulder_RotationInterpolator_Run"));
SoROUTE2916->setFromField(QString("value_changed"));
SoROUTE2916->setToNode(QString("hanim_r_shoulder"));
SoROUTE2916->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2916);

SoROUTE* SoROUTE2917 = new SoROUTE();
SoROUTE2917->setFromNode(QString("Run_l_wrist_RotationInterpolator_Run"));
SoROUTE2917->setFromField(QString("value_changed"));
SoROUTE2917->setToNode(QString("hanim_l_wrist"));
SoROUTE2917->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2917);

SoROUTE* SoROUTE2918 = new SoROUTE();
SoROUTE2918->setFromNode(QString("Run_l_elbow_RotationInterpolator_Run"));
SoROUTE2918->setFromField(QString("value_changed"));
SoROUTE2918->setToNode(QString("hanim_l_elbow"));
SoROUTE2918->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2918);

SoROUTE* SoROUTE2919 = new SoROUTE();
SoROUTE2919->setFromNode(QString("Run_l_shoulder_RotationInterpolator_Run"));
SoROUTE2919->setFromField(QString("value_changed"));
SoROUTE2919->setToNode(QString("hanim_l_shoulder"));
SoROUTE2919->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2919);

SoROUTE* SoROUTE2920 = new SoROUTE();
SoROUTE2920->setFromNode(QString("Run_lower_body_RotationInterpolator_Run"));
SoROUTE2920->setFromField(QString("value_changed"));
SoROUTE2920->setToNode(QString("hanim_sacroiliac"));
SoROUTE2920->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2920);

SoROUTE* SoROUTE2921 = new SoROUTE();
SoROUTE2921->setFromNode(QString("Run_head_RotationInterpolator_Run"));
SoROUTE2921->setFromField(QString("value_changed"));
SoROUTE2921->setToNode(QString("hanim_skullbase"));
SoROUTE2921->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2921);

SoROUTE* SoROUTE2922 = new SoROUTE();
SoROUTE2922->setFromNode(QString("Run_neck_RotationInterpolator_Run"));
SoROUTE2922->setFromField(QString("value_changed"));
SoROUTE2922->setToNode(QString("hanim_vc4"));
SoROUTE2922->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2922);

SoROUTE* SoROUTE2923 = new SoROUTE();
SoROUTE2923->setFromNode(QString("Run_upper_body_RotationInterpolator_Run"));
SoROUTE2923->setFromField(QString("value_changed"));
SoROUTE2923->setToNode(QString("hanim_vl1"));
SoROUTE2923->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2923);

SoROUTE* SoROUTE2924 = new SoROUTE();
SoROUTE2924->setFromNode(QString("Run_whole_body_RotationInterpolator_Run"));
SoROUTE2924->setFromField(QString("value_changed"));
SoROUTE2924->setToNode(QString("hanim_humanoid_root"));
SoROUTE2924->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2924);

SoROUTE* SoROUTE2925 = new SoROUTE();
SoROUTE2925->setFromNode(QString("Run_whole_body_TranslationInterpolator_Run"));
SoROUTE2925->setFromField(QString("value_changed"));
SoROUTE2925->setToNode(QString("hanim_humanoid_root"));
SoROUTE2925->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2925);

SoROUTE* SoROUTE2926 = new SoROUTE();
SoROUTE2926->setFromNode(QString("Run_l_sternoclavicular_RollInterpolator"));
SoROUTE2926->setFromField(QString("value_changed"));
SoROUTE2926->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2926->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2926);

SoROUTE* SoROUTE2927 = new SoROUTE();
SoROUTE2927->setFromNode(QString("Run_l_acromioclavicular_RollInterpolator"));
SoROUTE2927->setFromField(QString("value_changed"));
SoROUTE2927->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2927->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2927);

SoROUTE* SoROUTE2928 = new SoROUTE();
SoROUTE2928->setFromNode(QString("Run_r_sternoclavicular_RollInterpolator"));
SoROUTE2928->setFromField(QString("value_changed"));
SoROUTE2928->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2928->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2928);

SoROUTE* SoROUTE2929 = new SoROUTE();
SoROUTE2929->setFromNode(QString("Run_r_acromioclavicular_RollInterpolator"));
SoROUTE2929->setFromField(QString("value_changed"));
SoROUTE2929->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2929->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2929);

SoROUTE* SoROUTE2930 = new SoROUTE();
SoROUTE2930->setFromNode(QString("Run_r_metatarsal_PitchInterpolator"));
SoROUTE2930->setFromField(QString("value_changed"));
SoROUTE2930->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2930->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2930);

SoROUTE* SoROUTE2931 = new SoROUTE();
SoROUTE2931->setFromNode(QString("Run_r_metatarsal_PitchInterpolator"));
SoROUTE2931->setFromField(QString("value_changed"));
SoROUTE2931->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2931->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2931);

SoROUTE* SoROUTE2932 = new SoROUTE();
SoROUTE2932->setFromNode(QString("Run_sacroiliac_YawInterpolator"));
SoROUTE2932->setFromField(QString("value_changed"));
SoROUTE2932->setToNode(QString("hanim_sacroiliac"));
SoROUTE2932->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2932);

SoROUTE* SoROUTE2933 = new SoROUTE();
SoROUTE2933->setFromNode(QString("Run_vl5_YawInterpolator"));
SoROUTE2933->setFromField(QString("value_changed"));
SoROUTE2933->setToNode(QString("hanim_vl5"));
SoROUTE2933->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2933);

SoROUTE* SoROUTE2934 = new SoROUTE();
SoROUTE2934->setFromNode(QString("Run_vc6_YawInterpolator"));
SoROUTE2934->setFromField(QString("value_changed"));
SoROUTE2934->setToNode(QString("hanim_vc6"));
SoROUTE2934->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2934);

SoROUTE* SoROUTE2935 = new SoROUTE();
SoROUTE2935->setFromNode(QString("Run_l_thumb1_PitchInterpolator"));
SoROUTE2935->setFromField(QString("value_changed"));
SoROUTE2935->setToNode(QString("hanim_l_thumb1"));
SoROUTE2935->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2935);

SoROUTE* SoROUTE2936 = new SoROUTE();
SoROUTE2936->setFromNode(QString("Run_r_thumb1_PitchInterpolator"));
SoROUTE2936->setFromField(QString("value_changed"));
SoROUTE2936->setToNode(QString("hanim_r_thumb1"));
SoROUTE2936->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2936);

SoROUTE* SoROUTE2937 = new SoROUTE();
SoROUTE2937->setFromNode(QString("JumpTimer"));
SoROUTE2937->setFromField(QString("fraction_changed"));
SoROUTE2937->setToNode(QString("Jump_r_ankle_RotationInterpolator"));
SoROUTE2937->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2937);

SoROUTE* SoROUTE2938 = new SoROUTE();
SoROUTE2938->setFromNode(QString("JumpTimer"));
SoROUTE2938->setFromField(QString("fraction_changed"));
SoROUTE2938->setToNode(QString("Jump_r_knee_RotationInterpolator"));
SoROUTE2938->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2938);

SoROUTE* SoROUTE2939 = new SoROUTE();
SoROUTE2939->setFromNode(QString("JumpTimer"));
SoROUTE2939->setFromField(QString("fraction_changed"));
SoROUTE2939->setToNode(QString("Jump_r_hip_RotationInterpolator"));
SoROUTE2939->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2939);

SoROUTE* SoROUTE2940 = new SoROUTE();
SoROUTE2940->setFromNode(QString("JumpTimer"));
SoROUTE2940->setFromField(QString("fraction_changed"));
SoROUTE2940->setToNode(QString("Jump_l_ankle_RotationInterpolator"));
SoROUTE2940->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2940);

SoROUTE* SoROUTE2941 = new SoROUTE();
SoROUTE2941->setFromNode(QString("JumpTimer"));
SoROUTE2941->setFromField(QString("fraction_changed"));
SoROUTE2941->setToNode(QString("Jump_l_knee_RotationInterpolator"));
SoROUTE2941->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2941);

SoROUTE* SoROUTE2942 = new SoROUTE();
SoROUTE2942->setFromNode(QString("JumpTimer"));
SoROUTE2942->setFromField(QString("fraction_changed"));
SoROUTE2942->setToNode(QString("Jump_l_hip_RotationInterpolator"));
SoROUTE2942->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2942);

SoROUTE* SoROUTE2943 = new SoROUTE();
SoROUTE2943->setFromNode(QString("JumpTimer"));
SoROUTE2943->setFromField(QString("fraction_changed"));
SoROUTE2943->setToNode(QString("Jump_lower_body_RotationInterpolator"));
SoROUTE2943->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2943);

SoROUTE* SoROUTE2944 = new SoROUTE();
SoROUTE2944->setFromNode(QString("JumpTimer"));
SoROUTE2944->setFromField(QString("fraction_changed"));
SoROUTE2944->setToNode(QString("Jump_r_wrist_RotationInterpolator"));
SoROUTE2944->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2944);

SoROUTE* SoROUTE2945 = new SoROUTE();
SoROUTE2945->setFromNode(QString("JumpTimer"));
SoROUTE2945->setFromField(QString("fraction_changed"));
SoROUTE2945->setToNode(QString("Jump_r_elbow_RotationInterpolator"));
SoROUTE2945->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2945);

SoROUTE* SoROUTE2946 = new SoROUTE();
SoROUTE2946->setFromNode(QString("JumpTimer"));
SoROUTE2946->setFromField(QString("fraction_changed"));
SoROUTE2946->setToNode(QString("Jump_r_shoulder_RotationInterpolator"));
SoROUTE2946->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2946);

SoROUTE* SoROUTE2947 = new SoROUTE();
SoROUTE2947->setFromNode(QString("JumpTimer"));
SoROUTE2947->setFromField(QString("fraction_changed"));
SoROUTE2947->setToNode(QString("Jump_l_wrist_RotationInterpolator"));
SoROUTE2947->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2947);

SoROUTE* SoROUTE2948 = new SoROUTE();
SoROUTE2948->setFromNode(QString("JumpTimer"));
SoROUTE2948->setFromField(QString("fraction_changed"));
SoROUTE2948->setToNode(QString("Jump_l_elbow_RotationInterpolator"));
SoROUTE2948->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2948);

SoROUTE* SoROUTE2949 = new SoROUTE();
SoROUTE2949->setFromNode(QString("JumpTimer"));
SoROUTE2949->setFromField(QString("fraction_changed"));
SoROUTE2949->setToNode(QString("Jump_l_shoulder_RotationInterpolator"));
SoROUTE2949->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2949);

SoROUTE* SoROUTE2950 = new SoROUTE();
SoROUTE2950->setFromNode(QString("JumpTimer"));
SoROUTE2950->setFromField(QString("fraction_changed"));
SoROUTE2950->setToNode(QString("Jump_head_RotationInterpolator"));
SoROUTE2950->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2950);

SoROUTE* SoROUTE2951 = new SoROUTE();
SoROUTE2951->setFromNode(QString("JumpTimer"));
SoROUTE2951->setFromField(QString("fraction_changed"));
SoROUTE2951->setToNode(QString("Jump_neck_RotationInterpolator"));
SoROUTE2951->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2951);

SoROUTE* SoROUTE2952 = new SoROUTE();
SoROUTE2952->setFromNode(QString("JumpTimer"));
SoROUTE2952->setFromField(QString("fraction_changed"));
SoROUTE2952->setToNode(QString("Jump_upper_body_RotationInterpolator"));
SoROUTE2952->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2952);

SoROUTE* SoROUTE2953 = new SoROUTE();
SoROUTE2953->setFromNode(QString("JumpTimer"));
SoROUTE2953->setFromField(QString("fraction_changed"));
SoROUTE2953->setToNode(QString("Jump_whole_body_RotationInterpolator"));
SoROUTE2953->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2953);

SoROUTE* SoROUTE2954 = new SoROUTE();
SoROUTE2954->setFromNode(QString("JumpTimer"));
SoROUTE2954->setFromField(QString("fraction_changed"));
SoROUTE2954->setToNode(QString("Jump_whole_body_TranslationInterpolator"));
SoROUTE2954->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2954);

SoROUTE* SoROUTE2955 = new SoROUTE();
SoROUTE2955->setFromNode(QString("JumpTimer"));
SoROUTE2955->setFromField(QString("fraction_changed"));
SoROUTE2955->setToNode(QString("Jump_l_sternoclavicular_RollInterpolator"));
SoROUTE2955->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2955);

SoROUTE* SoROUTE2956 = new SoROUTE();
SoROUTE2956->setFromNode(QString("JumpTimer"));
SoROUTE2956->setFromField(QString("fraction_changed"));
SoROUTE2956->setToNode(QString("Jump_l_acromioclavicular_RollInterpolator"));
SoROUTE2956->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2956);

SoROUTE* SoROUTE2957 = new SoROUTE();
SoROUTE2957->setFromNode(QString("JumpTimer"));
SoROUTE2957->setFromField(QString("fraction_changed"));
SoROUTE2957->setToNode(QString("Jump_r_sternoclavicular_RollInterpolator"));
SoROUTE2957->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2957);

SoROUTE* SoROUTE2958 = new SoROUTE();
SoROUTE2958->setFromNode(QString("JumpTimer"));
SoROUTE2958->setFromField(QString("fraction_changed"));
SoROUTE2958->setToNode(QString("Jump_r_acromioclavicular_RollInterpolator"));
SoROUTE2958->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2958);

SoROUTE* SoROUTE2959 = new SoROUTE();
SoROUTE2959->setFromNode(QString("JumpTimer"));
SoROUTE2959->setFromField(QString("fraction_changed"));
SoROUTE2959->setToNode(QString("Jump_r_metatarsal_PitchInterpolator"));
SoROUTE2959->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2959);

SoROUTE* SoROUTE2960 = new SoROUTE();
SoROUTE2960->setFromNode(QString("JumpTimer"));
SoROUTE2960->setFromField(QString("fraction_changed"));
SoROUTE2960->setToNode(QString("Jump_sacroiliac_YawInterpolator"));
SoROUTE2960->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2960);

SoROUTE* SoROUTE2961 = new SoROUTE();
SoROUTE2961->setFromNode(QString("JumpTimer"));
SoROUTE2961->setFromField(QString("fraction_changed"));
SoROUTE2961->setToNode(QString("Jump_vl5_YawInterpolator"));
SoROUTE2961->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2961);

SoROUTE* SoROUTE2962 = new SoROUTE();
SoROUTE2962->setFromNode(QString("JumpTimer"));
SoROUTE2962->setFromField(QString("fraction_changed"));
SoROUTE2962->setToNode(QString("Jump_vc6_YawInterpolator"));
SoROUTE2962->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2962);

SoROUTE* SoROUTE2963 = new SoROUTE();
SoROUTE2963->setFromNode(QString("JumpTimer"));
SoROUTE2963->setFromField(QString("fraction_changed"));
SoROUTE2963->setToNode(QString("Jump_l_thumb1_PitchInterpolator"));
SoROUTE2963->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2963);

SoROUTE* SoROUTE2964 = new SoROUTE();
SoROUTE2964->setFromNode(QString("JumpTimer"));
SoROUTE2964->setFromField(QString("fraction_changed"));
SoROUTE2964->setToNode(QString("Jump_r_thumb1_PitchInterpolator"));
SoROUTE2964->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2964);

SoROUTE* SoROUTE2965 = new SoROUTE();
SoROUTE2965->setFromNode(QString("Jump_r_ankle_RotationInterpolator"));
SoROUTE2965->setFromField(QString("value_changed"));
SoROUTE2965->setToNode(QString("hanim_r_ankle"));
SoROUTE2965->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2965);

SoROUTE* SoROUTE2966 = new SoROUTE();
SoROUTE2966->setFromNode(QString("Jump_r_knee_RotationInterpolator"));
SoROUTE2966->setFromField(QString("value_changed"));
SoROUTE2966->setToNode(QString("hanim_r_knee"));
SoROUTE2966->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2966);

SoROUTE* SoROUTE2967 = new SoROUTE();
SoROUTE2967->setFromNode(QString("Jump_r_hip_RotationInterpolator"));
SoROUTE2967->setFromField(QString("value_changed"));
SoROUTE2967->setToNode(QString("hanim_r_hip"));
SoROUTE2967->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2967);

SoROUTE* SoROUTE2968 = new SoROUTE();
SoROUTE2968->setFromNode(QString("Jump_l_ankle_RotationInterpolator"));
SoROUTE2968->setFromField(QString("value_changed"));
SoROUTE2968->setToNode(QString("hanim_l_ankle"));
SoROUTE2968->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2968);

SoROUTE* SoROUTE2969 = new SoROUTE();
SoROUTE2969->setFromNode(QString("Jump_l_knee_RotationInterpolator"));
SoROUTE2969->setFromField(QString("value_changed"));
SoROUTE2969->setToNode(QString("hanim_l_knee"));
SoROUTE2969->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2969);

SoROUTE* SoROUTE2970 = new SoROUTE();
SoROUTE2970->setFromNode(QString("Jump_l_hip_RotationInterpolator"));
SoROUTE2970->setFromField(QString("value_changed"));
SoROUTE2970->setToNode(QString("hanim_l_hip"));
SoROUTE2970->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2970);

SoROUTE* SoROUTE2971 = new SoROUTE();
SoROUTE2971->setFromNode(QString("Jump_lower_body_RotationInterpolator"));
SoROUTE2971->setFromField(QString("value_changed"));
SoROUTE2971->setToNode(QString("hanim_sacroiliac"));
SoROUTE2971->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2971);

SoROUTE* SoROUTE2972 = new SoROUTE();
SoROUTE2972->setFromNode(QString("Jump_r_wrist_RotationInterpolator"));
SoROUTE2972->setFromField(QString("value_changed"));
SoROUTE2972->setToNode(QString("hanim_r_wrist"));
SoROUTE2972->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2972);

SoROUTE* SoROUTE2973 = new SoROUTE();
SoROUTE2973->setFromNode(QString("Jump_r_elbow_RotationInterpolator"));
SoROUTE2973->setFromField(QString("value_changed"));
SoROUTE2973->setToNode(QString("hanim_r_elbow"));
SoROUTE2973->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2973);

SoROUTE* SoROUTE2974 = new SoROUTE();
SoROUTE2974->setFromNode(QString("Jump_r_shoulder_RotationInterpolator"));
SoROUTE2974->setFromField(QString("value_changed"));
SoROUTE2974->setToNode(QString("hanim_r_shoulder"));
SoROUTE2974->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2974);

SoROUTE* SoROUTE2975 = new SoROUTE();
SoROUTE2975->setFromNode(QString("Jump_l_wrist_RotationInterpolator"));
SoROUTE2975->setFromField(QString("value_changed"));
SoROUTE2975->setToNode(QString("hanim_l_wrist"));
SoROUTE2975->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2975);

SoROUTE* SoROUTE2976 = new SoROUTE();
SoROUTE2976->setFromNode(QString("Jump_l_elbow_RotationInterpolator"));
SoROUTE2976->setFromField(QString("value_changed"));
SoROUTE2976->setToNode(QString("hanim_l_elbow"));
SoROUTE2976->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2976);

SoROUTE* SoROUTE2977 = new SoROUTE();
SoROUTE2977->setFromNode(QString("Jump_l_shoulder_RotationInterpolator"));
SoROUTE2977->setFromField(QString("value_changed"));
SoROUTE2977->setToNode(QString("hanim_l_shoulder"));
SoROUTE2977->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2977);

SoROUTE* SoROUTE2978 = new SoROUTE();
SoROUTE2978->setFromNode(QString("Jump_head_RotationInterpolator"));
SoROUTE2978->setFromField(QString("value_changed"));
SoROUTE2978->setToNode(QString("hanim_skullbase"));
SoROUTE2978->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2978);

SoROUTE* SoROUTE2979 = new SoROUTE();
SoROUTE2979->setFromNode(QString("Jump_neck_RotationInterpolator"));
SoROUTE2979->setFromField(QString("value_changed"));
SoROUTE2979->setToNode(QString("hanim_vc4"));
SoROUTE2979->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2979);

SoROUTE* SoROUTE2980 = new SoROUTE();
SoROUTE2980->setFromNode(QString("Jump_upper_body_RotationInterpolator"));
SoROUTE2980->setFromField(QString("value_changed"));
SoROUTE2980->setToNode(QString("hanim_vl1"));
SoROUTE2980->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2980);

SoROUTE* SoROUTE2981 = new SoROUTE();
SoROUTE2981->setFromNode(QString("Jump_whole_body_RotationInterpolator"));
SoROUTE2981->setFromField(QString("value_changed"));
SoROUTE2981->setToNode(QString("hanim_humanoid_root"));
SoROUTE2981->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2981);

SoROUTE* SoROUTE2982 = new SoROUTE();
SoROUTE2982->setFromNode(QString("Jump_whole_body_TranslationInterpolator"));
SoROUTE2982->setFromField(QString("value_changed"));
SoROUTE2982->setToNode(QString("hanim_humanoid_root"));
SoROUTE2982->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE2982);

SoROUTE* SoROUTE2983 = new SoROUTE();
SoROUTE2983->setFromNode(QString("Jump_l_sternoclavicular_RollInterpolator"));
SoROUTE2983->setFromField(QString("value_changed"));
SoROUTE2983->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE2983->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2983);

SoROUTE* SoROUTE2984 = new SoROUTE();
SoROUTE2984->setFromNode(QString("Jump_l_acromioclavicular_RollInterpolator"));
SoROUTE2984->setFromField(QString("value_changed"));
SoROUTE2984->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE2984->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2984);

SoROUTE* SoROUTE2985 = new SoROUTE();
SoROUTE2985->setFromNode(QString("Jump_r_sternoclavicular_RollInterpolator"));
SoROUTE2985->setFromField(QString("value_changed"));
SoROUTE2985->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE2985->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2985);

SoROUTE* SoROUTE2986 = new SoROUTE();
SoROUTE2986->setFromNode(QString("Jump_r_acromioclavicular_RollInterpolator"));
SoROUTE2986->setFromField(QString("value_changed"));
SoROUTE2986->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE2986->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2986);

SoROUTE* SoROUTE2987 = new SoROUTE();
SoROUTE2987->setFromNode(QString("Jump_r_metatarsal_PitchInterpolator"));
SoROUTE2987->setFromField(QString("value_changed"));
SoROUTE2987->setToNode(QString("hanim_l_metatarsal"));
SoROUTE2987->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2987);

SoROUTE* SoROUTE2988 = new SoROUTE();
SoROUTE2988->setFromNode(QString("Jump_r_metatarsal_PitchInterpolator"));
SoROUTE2988->setFromField(QString("value_changed"));
SoROUTE2988->setToNode(QString("hanim_r_metatarsal"));
SoROUTE2988->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2988);

SoROUTE* SoROUTE2989 = new SoROUTE();
SoROUTE2989->setFromNode(QString("Jump_sacroiliac_YawInterpolator"));
SoROUTE2989->setFromField(QString("value_changed"));
SoROUTE2989->setToNode(QString("hanim_sacroiliac"));
SoROUTE2989->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2989);

SoROUTE* SoROUTE2990 = new SoROUTE();
SoROUTE2990->setFromNode(QString("Jump_vl5_YawInterpolator"));
SoROUTE2990->setFromField(QString("value_changed"));
SoROUTE2990->setToNode(QString("hanim_vl5"));
SoROUTE2990->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2990);

SoROUTE* SoROUTE2991 = new SoROUTE();
SoROUTE2991->setFromNode(QString("Jump_vc6_YawInterpolator"));
SoROUTE2991->setFromField(QString("value_changed"));
SoROUTE2991->setToNode(QString("hanim_vc6"));
SoROUTE2991->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2991);

SoROUTE* SoROUTE2992 = new SoROUTE();
SoROUTE2992->setFromNode(QString("Jump_l_thumb1_PitchInterpolator"));
SoROUTE2992->setFromField(QString("value_changed"));
SoROUTE2992->setToNode(QString("hanim_l_thumb1"));
SoROUTE2992->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2992);

SoROUTE* SoROUTE2993 = new SoROUTE();
SoROUTE2993->setFromNode(QString("Jump_r_thumb1_PitchInterpolator"));
SoROUTE2993->setFromField(QString("value_changed"));
SoROUTE2993->setToNode(QString("hanim_r_thumb1"));
SoROUTE2993->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE2993);

SoROUTE* SoROUTE2994 = new SoROUTE();
SoROUTE2994->setFromNode(QString("KickTimer"));
SoROUTE2994->setFromField(QString("fraction_changed"));
SoROUTE2994->setToNode(QString("Kick_l_sternoclavicular_RollInterpolator"));
SoROUTE2994->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2994);

SoROUTE* SoROUTE2995 = new SoROUTE();
SoROUTE2995->setFromNode(QString("KickTimer"));
SoROUTE2995->setFromField(QString("fraction_changed"));
SoROUTE2995->setToNode(QString("Kick_l_acromioclavicular_RollInterpolator"));
SoROUTE2995->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2995);

SoROUTE* SoROUTE2996 = new SoROUTE();
SoROUTE2996->setFromNode(QString("KickTimer"));
SoROUTE2996->setFromField(QString("fraction_changed"));
SoROUTE2996->setToNode(QString("Kick_l_shoulder_RollInterpolator"));
SoROUTE2996->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2996);

SoROUTE* SoROUTE2997 = new SoROUTE();
SoROUTE2997->setFromNode(QString("KickTimer"));
SoROUTE2997->setFromField(QString("fraction_changed"));
SoROUTE2997->setToNode(QString("Kick_l_ForeArm_PitchInterpolator"));
SoROUTE2997->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2997);

SoROUTE* SoROUTE2998 = new SoROUTE();
SoROUTE2998->setFromNode(QString("KickTimer"));
SoROUTE2998->setFromField(QString("fraction_changed"));
SoROUTE2998->setToNode(QString("Kick_l_wrist_RollInterpolator"));
SoROUTE2998->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2998);

SoROUTE* SoROUTE2999 = new SoROUTE();
SoROUTE2999->setFromNode(QString("KickTimer"));
SoROUTE2999->setFromField(QString("fraction_changed"));
SoROUTE2999->setToNode(QString("Kick_l_thumb1_PitchInterpolator"));
SoROUTE2999->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE2999);

SoROUTE* SoROUTE3000 = new SoROUTE();
SoROUTE3000->setFromNode(QString("KickTimer"));
SoROUTE3000->setFromField(QString("fraction_changed"));
SoROUTE3000->setToNode(QString("Kick_r_sternoclavicular_RollInterpolator"));
SoROUTE3000->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3000);

SoROUTE* SoROUTE3001 = new SoROUTE();
SoROUTE3001->setFromNode(QString("KickTimer"));
SoROUTE3001->setFromField(QString("fraction_changed"));
SoROUTE3001->setToNode(QString("Kick_r_acromioclavicular_RollInterpolator"));
SoROUTE3001->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3001);

SoROUTE* SoROUTE3002 = new SoROUTE();
SoROUTE3002->setFromNode(QString("KickTimer"));
SoROUTE3002->setFromField(QString("fraction_changed"));
SoROUTE3002->setToNode(QString("Kick_r_shoulder_RollInterpolator"));
SoROUTE3002->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3002);

SoROUTE* SoROUTE3003 = new SoROUTE();
SoROUTE3003->setFromNode(QString("KickTimer"));
SoROUTE3003->setFromField(QString("fraction_changed"));
SoROUTE3003->setToNode(QString("Kick_r_ForeArm_PitchInterpolator"));
SoROUTE3003->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3003);

SoROUTE* SoROUTE3004 = new SoROUTE();
SoROUTE3004->setFromNode(QString("KickTimer"));
SoROUTE3004->setFromField(QString("fraction_changed"));
SoROUTE3004->setToNode(QString("Kick_r_wrist_RollInterpolator"));
SoROUTE3004->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3004);

SoROUTE* SoROUTE3005 = new SoROUTE();
SoROUTE3005->setFromNode(QString("KickTimer"));
SoROUTE3005->setFromField(QString("fraction_changed"));
SoROUTE3005->setToNode(QString("Kick_r_thumb1_PitchInterpolator"));
SoROUTE3005->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3005);

SoROUTE* SoROUTE3006 = new SoROUTE();
SoROUTE3006->setFromNode(QString("KickTimer"));
SoROUTE3006->setFromField(QString("fraction_changed"));
SoROUTE3006->setToNode(QString("Kick_r_hip_PitchInterpolator"));
SoROUTE3006->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3006);

SoROUTE* SoROUTE3007 = new SoROUTE();
SoROUTE3007->setFromNode(QString("KickTimer"));
SoROUTE3007->setFromField(QString("fraction_changed"));
SoROUTE3007->setToNode(QString("Kick_r_knee_PitchInterpolator"));
SoROUTE3007->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3007);

SoROUTE* SoROUTE3008 = new SoROUTE();
SoROUTE3008->setFromNode(QString("KickTimer"));
SoROUTE3008->setFromField(QString("fraction_changed"));
SoROUTE3008->setToNode(QString("Kick_l_hip_PitchInterpolator"));
SoROUTE3008->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3008);

SoROUTE* SoROUTE3009 = new SoROUTE();
SoROUTE3009->setFromNode(QString("KickTimer"));
SoROUTE3009->setFromField(QString("fraction_changed"));
SoROUTE3009->setToNode(QString("Kick_l_knee_PitchInterpolator"));
SoROUTE3009->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3009);

SoROUTE* SoROUTE3010 = new SoROUTE();
SoROUTE3010->setFromNode(QString("KickTimer"));
SoROUTE3010->setFromField(QString("fraction_changed"));
SoROUTE3010->setToNode(QString("Kick_r_ankle_PitchInterpolator"));
SoROUTE3010->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3010);

SoROUTE* SoROUTE3011 = new SoROUTE();
SoROUTE3011->setFromNode(QString("KickTimer"));
SoROUTE3011->setFromField(QString("fraction_changed"));
SoROUTE3011->setToNode(QString("Kick_r_metatarsal_PitchInterpolator"));
SoROUTE3011->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3011);

SoROUTE* SoROUTE3012 = new SoROUTE();
SoROUTE3012->setFromNode(QString("KickTimer"));
SoROUTE3012->setFromField(QString("fraction_changed"));
SoROUTE3012->setToNode(QString("Kick_sacroiliac_YawInterpolator"));
SoROUTE3012->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3012);

SoROUTE* SoROUTE3013 = new SoROUTE();
SoROUTE3013->setFromNode(QString("KickTimer"));
SoROUTE3013->setFromField(QString("fraction_changed"));
SoROUTE3013->setToNode(QString("Kick_vl5_YawInterpolator"));
SoROUTE3013->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3013);

SoROUTE* SoROUTE3014 = new SoROUTE();
SoROUTE3014->setFromNode(QString("KickTimer"));
SoROUTE3014->setFromField(QString("fraction_changed"));
SoROUTE3014->setToNode(QString("Kick_vc6_YawInterpolator"));
SoROUTE3014->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3014);

SoROUTE* SoROUTE3015 = new SoROUTE();
SoROUTE3015->setFromNode(QString("KickTimer"));
SoROUTE3015->setFromField(QString("fraction_changed"));
SoROUTE3015->setToNode(QString("Kick_lower_body_RotationInterpolator"));
SoROUTE3015->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3015);

SoROUTE* SoROUTE3016 = new SoROUTE();
SoROUTE3016->setFromNode(QString("KickTimer"));
SoROUTE3016->setFromField(QString("fraction_changed"));
SoROUTE3016->setToNode(QString("Kick_upper_body_RotationInterpolator"));
SoROUTE3016->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3016);

SoROUTE* SoROUTE3017 = new SoROUTE();
SoROUTE3017->setFromNode(QString("KickTimer"));
SoROUTE3017->setFromField(QString("fraction_changed"));
SoROUTE3017->setToNode(QString("Kick_whole_body_RotationInterpolator"));
SoROUTE3017->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3017);

SoROUTE* SoROUTE3018 = new SoROUTE();
SoROUTE3018->setFromNode(QString("KickTimer"));
SoROUTE3018->setFromField(QString("fraction_changed"));
SoROUTE3018->setToNode(QString("Kick_whole_body_TranslationInterpolator"));
SoROUTE3018->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3018);

SoROUTE* SoROUTE3019 = new SoROUTE();
SoROUTE3019->setFromNode(QString("KickTimer"));
SoROUTE3019->setFromField(QString("fraction_changed"));
SoROUTE3019->setToNode(QString("Kick_neck_RotationInterpolator"));
SoROUTE3019->setToField(QString("set_fraction"));
SoNode29->addChild(*SoROUTE3019);

SoROUTE* SoROUTE3020 = new SoROUTE();
SoROUTE3020->setFromNode(QString("Kick_l_sternoclavicular_RollInterpolator"));
SoROUTE3020->setFromField(QString("value_changed"));
SoROUTE3020->setToNode(QString("hanim_l_sternoclavicular"));
SoROUTE3020->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3020);

SoROUTE* SoROUTE3021 = new SoROUTE();
SoROUTE3021->setFromNode(QString("Kick_l_acromioclavicular_RollInterpolator"));
SoROUTE3021->setFromField(QString("value_changed"));
SoROUTE3021->setToNode(QString("hanim_l_acromioclavicular"));
SoROUTE3021->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3021);

SoROUTE* SoROUTE3022 = new SoROUTE();
SoROUTE3022->setFromNode(QString("Kick_l_shoulder_RollInterpolator"));
SoROUTE3022->setFromField(QString("value_changed"));
SoROUTE3022->setToNode(QString("hanim_l_shoulder"));
SoROUTE3022->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3022);

SoROUTE* SoROUTE3023 = new SoROUTE();
SoROUTE3023->setFromNode(QString("Kick_l_ForeArm_PitchInterpolator"));
SoROUTE3023->setFromField(QString("value_changed"));
SoROUTE3023->setToNode(QString("hanim_l_elbow"));
SoROUTE3023->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3023);

SoROUTE* SoROUTE3024 = new SoROUTE();
SoROUTE3024->setFromNode(QString("Kick_l_wrist_RollInterpolator"));
SoROUTE3024->setFromField(QString("value_changed"));
SoROUTE3024->setToNode(QString("hanim_l_wrist"));
SoROUTE3024->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3024);

SoROUTE* SoROUTE3025 = new SoROUTE();
SoROUTE3025->setFromNode(QString("Kick_l_thumb1_PitchInterpolator"));
SoROUTE3025->setFromField(QString("value_changed"));
SoROUTE3025->setToNode(QString("hanim_l_thumb1"));
SoROUTE3025->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3025);

SoROUTE* SoROUTE3026 = new SoROUTE();
SoROUTE3026->setFromNode(QString("Kick_r_sternoclavicular_RollInterpolator"));
SoROUTE3026->setFromField(QString("value_changed"));
SoROUTE3026->setToNode(QString("hanim_r_sternoclavicular"));
SoROUTE3026->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3026);

SoROUTE* SoROUTE3027 = new SoROUTE();
SoROUTE3027->setFromNode(QString("Kick_r_acromioclavicular_RollInterpolator"));
SoROUTE3027->setFromField(QString("value_changed"));
SoROUTE3027->setToNode(QString("hanim_r_acromioclavicular"));
SoROUTE3027->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3027);

SoROUTE* SoROUTE3028 = new SoROUTE();
SoROUTE3028->setFromNode(QString("Kick_r_shoulder_RollInterpolator"));
SoROUTE3028->setFromField(QString("value_changed"));
SoROUTE3028->setToNode(QString("hanim_r_shoulder"));
SoROUTE3028->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3028);

SoROUTE* SoROUTE3029 = new SoROUTE();
SoROUTE3029->setFromNode(QString("Kick_r_ForeArm_PitchInterpolator"));
SoROUTE3029->setFromField(QString("value_changed"));
SoROUTE3029->setToNode(QString("hanim_r_elbow"));
SoROUTE3029->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3029);

SoROUTE* SoROUTE3030 = new SoROUTE();
SoROUTE3030->setFromNode(QString("Kick_r_wrist_RollInterpolator"));
SoROUTE3030->setFromField(QString("value_changed"));
SoROUTE3030->setToNode(QString("hanim_r_wrist"));
SoROUTE3030->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3030);

SoROUTE* SoROUTE3031 = new SoROUTE();
SoROUTE3031->setFromNode(QString("Kick_r_thumb1_PitchInterpolator"));
SoROUTE3031->setFromField(QString("value_changed"));
SoROUTE3031->setToNode(QString("hanim_r_thumb1"));
SoROUTE3031->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3031);

SoROUTE* SoROUTE3032 = new SoROUTE();
SoROUTE3032->setFromNode(QString("Kick_r_hip_PitchInterpolator"));
SoROUTE3032->setFromField(QString("value_changed"));
SoROUTE3032->setToNode(QString("hanim_r_hip"));
SoROUTE3032->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3032);

SoROUTE* SoROUTE3033 = new SoROUTE();
SoROUTE3033->setFromNode(QString("Kick_r_knee_PitchInterpolator"));
SoROUTE3033->setFromField(QString("value_changed"));
SoROUTE3033->setToNode(QString("hanim_r_knee"));
SoROUTE3033->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3033);

SoROUTE* SoROUTE3034 = new SoROUTE();
SoROUTE3034->setFromNode(QString("Kick_r_ankle_PitchInterpolator"));
SoROUTE3034->setFromField(QString("value_changed"));
SoROUTE3034->setToNode(QString("hanim_r_ankle"));
SoROUTE3034->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3034);

SoROUTE* SoROUTE3035 = new SoROUTE();
SoROUTE3035->setFromNode(QString("Kick_r_metatarsal_PitchInterpolator"));
SoROUTE3035->setFromField(QString("value_changed"));
SoROUTE3035->setToNode(QString("hanim_r_metatarsal"));
SoROUTE3035->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3035);

SoROUTE* SoROUTE3036 = new SoROUTE();
SoROUTE3036->setFromNode(QString("Kick_l_hip_PitchInterpolator"));
SoROUTE3036->setFromField(QString("value_changed"));
SoROUTE3036->setToNode(QString("hanim_l_hip"));
SoROUTE3036->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3036);

SoROUTE* SoROUTE3037 = new SoROUTE();
SoROUTE3037->setFromNode(QString("Kick_l_knee_PitchInterpolator"));
SoROUTE3037->setFromField(QString("value_changed"));
SoROUTE3037->setToNode(QString("hanim_l_knee"));
SoROUTE3037->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3037);

SoROUTE* SoROUTE3038 = new SoROUTE();
SoROUTE3038->setFromNode(QString("Kick_r_ankle_PitchInterpolator"));
SoROUTE3038->setFromField(QString("value_changed"));
SoROUTE3038->setToNode(QString("hanim_l_ankle"));
SoROUTE3038->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3038);

SoROUTE* SoROUTE3039 = new SoROUTE();
SoROUTE3039->setFromNode(QString("Kick_r_metatarsal_PitchInterpolator"));
SoROUTE3039->setFromField(QString("value_changed"));
SoROUTE3039->setToNode(QString("hanim_l_metatarsal"));
SoROUTE3039->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3039);

SoROUTE* SoROUTE3040 = new SoROUTE();
SoROUTE3040->setFromNode(QString("Kick_sacroiliac_YawInterpolator"));
SoROUTE3040->setFromField(QString("value_changed"));
SoROUTE3040->setToNode(QString("hanim_sacroiliac"));
SoROUTE3040->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3040);

SoROUTE* SoROUTE3041 = new SoROUTE();
SoROUTE3041->setFromNode(QString("Kick_vl5_YawInterpolator"));
SoROUTE3041->setFromField(QString("value_changed"));
SoROUTE3041->setToNode(QString("hanim_vl5"));
SoROUTE3041->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3041);

SoROUTE* SoROUTE3042 = new SoROUTE();
SoROUTE3042->setFromNode(QString("Kick_vc6_YawInterpolator"));
SoROUTE3042->setFromField(QString("value_changed"));
SoROUTE3042->setToNode(QString("hanim_vc6"));
SoROUTE3042->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3042);

SoROUTE* SoROUTE3043 = new SoROUTE();
SoROUTE3043->setFromNode(QString("Kick_upper_body_RotationInterpolator"));
SoROUTE3043->setFromField(QString("value_changed"));
SoROUTE3043->setToNode(QString("hanim_vl1"));
SoROUTE3043->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3043);

SoROUTE* SoROUTE3044 = new SoROUTE();
SoROUTE3044->setFromNode(QString("Kick_lower_body_RotationInterpolator"));
SoROUTE3044->setFromField(QString("value_changed"));
SoROUTE3044->setToNode(QString("hanim_sacroiliac"));
SoROUTE3044->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3044);

SoROUTE* SoROUTE3045 = new SoROUTE();
SoROUTE3045->setFromNode(QString("Kick_whole_body_RotationInterpolator"));
SoROUTE3045->setFromField(QString("value_changed"));
SoROUTE3045->setToNode(QString("hanim_humanoid_root"));
SoROUTE3045->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3045);

SoROUTE* SoROUTE3046 = new SoROUTE();
SoROUTE3046->setFromNode(QString("Kick_whole_body_TranslationInterpolator"));
SoROUTE3046->setFromField(QString("value_changed"));
SoROUTE3046->setToNode(QString("hanim_humanoid_root"));
SoROUTE3046->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE3046);

SoROUTE* SoROUTE3047 = new SoROUTE();
SoROUTE3047->setFromNode(QString("Kick_neck_RotationInterpolator"));
SoROUTE3047->setFromField(QString("value_changed"));
SoROUTE3047->setToNode(QString("hanim_vc4"));
SoROUTE3047->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3047);

SoROUTE* SoROUTE3048 = new SoROUTE();
SoROUTE3048->setFromNode(QString("HudProximitySensor"));
SoROUTE3048->setFromField(QString("position_changed"));
SoROUTE3048->setToNode(QString("HudXform"));
SoROUTE3048->setToField(QString("set_translation"));
SoNode29->addChild(*SoROUTE3048);

SoROUTE* SoROUTE3049 = new SoROUTE();
SoROUTE3049->setFromNode(QString("HudProximitySensor"));
SoROUTE3049->setFromField(QString("orientation_changed"));
SoROUTE3049->setToNode(QString("HudXform"));
SoROUTE3049->setToField(QString("set_rotation"));
SoNode29->addChild(*SoROUTE3049);

SoROUTE* SoROUTE3050 = new SoROUTE();
SoROUTE3050->setFromNode(QString("Stand_Touch"));
SoROUTE3050->setFromField(QString("touchTime"));
SoROUTE3050->setToNode(QString("PitchTimer"));
SoROUTE3050->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3050);

SoROUTE* SoROUTE3051 = new SoROUTE();
SoROUTE3051->setFromNode(QString("Stand_Touch"));
SoROUTE3051->setFromField(QString("touchTime"));
SoROUTE3051->setToNode(QString("YawTimer"));
SoROUTE3051->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3051);

SoROUTE* SoROUTE3052 = new SoROUTE();
SoROUTE3052->setFromNode(QString("Stand_Touch"));
SoROUTE3052->setFromField(QString("touchTime"));
SoROUTE3052->setToNode(QString("RollTimer"));
SoROUTE3052->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3052);

SoROUTE* SoROUTE3053 = new SoROUTE();
SoROUTE3053->setFromNode(QString("Stand_Touch"));
SoROUTE3053->setFromField(QString("touchTime"));
SoROUTE3053->setToNode(QString("WalkTimer"));
SoROUTE3053->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3053);

SoROUTE* SoROUTE3054 = new SoROUTE();
SoROUTE3054->setFromNode(QString("Stand_Touch"));
SoROUTE3054->setFromField(QString("touchTime"));
SoROUTE3054->setToNode(QString("RunTimer"));
SoROUTE3054->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3054);

SoROUTE* SoROUTE3055 = new SoROUTE();
SoROUTE3055->setFromNode(QString("Stand_Touch"));
SoROUTE3055->setFromField(QString("touchTime"));
SoROUTE3055->setToNode(QString("JumpTimer"));
SoROUTE3055->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3055);

SoROUTE* SoROUTE3056 = new SoROUTE();
SoROUTE3056->setFromNode(QString("Stand_Touch"));
SoROUTE3056->setFromField(QString("touchTime"));
SoROUTE3056->setToNode(QString("KickTimer"));
SoROUTE3056->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3056);

SoROUTE* SoROUTE3057 = new SoROUTE();
SoROUTE3057->setFromNode(QString("Stand_Touch"));
SoROUTE3057->setFromField(QString("touchTime"));
SoROUTE3057->setToNode(QString("StopTimer"));
SoROUTE3057->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3057);

SoROUTE* SoROUTE3058 = new SoROUTE();
SoROUTE3058->setFromNode(QString("Stand_Touch"));
SoROUTE3058->setFromField(QString("touchTime"));
SoROUTE3058->setToNode(QString("StandTimer"));
SoROUTE3058->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3058);

SoROUTE* SoROUTE3059 = new SoROUTE();
SoROUTE3059->setFromNode(QString("Pitch_Touch"));
SoROUTE3059->setFromField(QString("touchTime"));
SoROUTE3059->setToNode(QString("StandTimer"));
SoROUTE3059->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3059);

SoROUTE* SoROUTE3060 = new SoROUTE();
SoROUTE3060->setFromNode(QString("Pitch_Touch"));
SoROUTE3060->setFromField(QString("touchTime"));
SoROUTE3060->setToNode(QString("YawTimer"));
SoROUTE3060->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3060);

SoROUTE* SoROUTE3061 = new SoROUTE();
SoROUTE3061->setFromNode(QString("Pitch_Touch"));
SoROUTE3061->setFromField(QString("touchTime"));
SoROUTE3061->setToNode(QString("RollTimer"));
SoROUTE3061->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3061);

SoROUTE* SoROUTE3062 = new SoROUTE();
SoROUTE3062->setFromNode(QString("Pitch_Touch"));
SoROUTE3062->setFromField(QString("touchTime"));
SoROUTE3062->setToNode(QString("WalkTimer"));
SoROUTE3062->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3062);

SoROUTE* SoROUTE3063 = new SoROUTE();
SoROUTE3063->setFromNode(QString("Pitch_Touch"));
SoROUTE3063->setFromField(QString("touchTime"));
SoROUTE3063->setToNode(QString("RunTimer"));
SoROUTE3063->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3063);

SoROUTE* SoROUTE3064 = new SoROUTE();
SoROUTE3064->setFromNode(QString("Pitch_Touch"));
SoROUTE3064->setFromField(QString("touchTime"));
SoROUTE3064->setToNode(QString("JumpTimer"));
SoROUTE3064->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3064);

SoROUTE* SoROUTE3065 = new SoROUTE();
SoROUTE3065->setFromNode(QString("Pitch_Touch"));
SoROUTE3065->setFromField(QString("touchTime"));
SoROUTE3065->setToNode(QString("KickTimer"));
SoROUTE3065->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3065);

SoROUTE* SoROUTE3066 = new SoROUTE();
SoROUTE3066->setFromNode(QString("Pitch_Touch"));
SoROUTE3066->setFromField(QString("touchTime"));
SoROUTE3066->setToNode(QString("StopTimer"));
SoROUTE3066->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3066);

SoROUTE* SoROUTE3067 = new SoROUTE();
SoROUTE3067->setFromNode(QString("Pitch_Touch"));
SoROUTE3067->setFromField(QString("touchTime"));
SoROUTE3067->setToNode(QString("PitchTimer"));
SoROUTE3067->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3067);

SoROUTE* SoROUTE3068 = new SoROUTE();
SoROUTE3068->setFromNode(QString("Yaw_Touch"));
SoROUTE3068->setFromField(QString("touchTime"));
SoROUTE3068->setToNode(QString("StandTimer"));
SoROUTE3068->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3068);

SoROUTE* SoROUTE3069 = new SoROUTE();
SoROUTE3069->setFromNode(QString("Yaw_Touch"));
SoROUTE3069->setFromField(QString("touchTime"));
SoROUTE3069->setToNode(QString("PitchTimer"));
SoROUTE3069->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3069);

SoROUTE* SoROUTE3070 = new SoROUTE();
SoROUTE3070->setFromNode(QString("Yaw_Touch"));
SoROUTE3070->setFromField(QString("touchTime"));
SoROUTE3070->setToNode(QString("RollTimer"));
SoROUTE3070->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3070);

SoROUTE* SoROUTE3071 = new SoROUTE();
SoROUTE3071->setFromNode(QString("Yaw_Touch"));
SoROUTE3071->setFromField(QString("touchTime"));
SoROUTE3071->setToNode(QString("WalkTimer"));
SoROUTE3071->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3071);

SoROUTE* SoROUTE3072 = new SoROUTE();
SoROUTE3072->setFromNode(QString("Yaw_Touch"));
SoROUTE3072->setFromField(QString("touchTime"));
SoROUTE3072->setToNode(QString("RunTimer"));
SoROUTE3072->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3072);

SoROUTE* SoROUTE3073 = new SoROUTE();
SoROUTE3073->setFromNode(QString("Yaw_Touch"));
SoROUTE3073->setFromField(QString("touchTime"));
SoROUTE3073->setToNode(QString("JumpTimer"));
SoROUTE3073->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3073);

SoROUTE* SoROUTE3074 = new SoROUTE();
SoROUTE3074->setFromNode(QString("Yaw_Touch"));
SoROUTE3074->setFromField(QString("touchTime"));
SoROUTE3074->setToNode(QString("KickTimer"));
SoROUTE3074->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3074);

SoROUTE* SoROUTE3075 = new SoROUTE();
SoROUTE3075->setFromNode(QString("Yaw_Touch"));
SoROUTE3075->setFromField(QString("touchTime"));
SoROUTE3075->setToNode(QString("StopTimer"));
SoROUTE3075->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3075);

SoROUTE* SoROUTE3076 = new SoROUTE();
SoROUTE3076->setFromNode(QString("Yaw_Touch"));
SoROUTE3076->setFromField(QString("touchTime"));
SoROUTE3076->setToNode(QString("YawTimer"));
SoROUTE3076->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3076);

SoROUTE* SoROUTE3077 = new SoROUTE();
SoROUTE3077->setFromNode(QString("Walk_Touch"));
SoROUTE3077->setFromField(QString("touchTime"));
SoROUTE3077->setToNode(QString("StandTimer"));
SoROUTE3077->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3077);

SoROUTE* SoROUTE3078 = new SoROUTE();
SoROUTE3078->setFromNode(QString("Walk_Touch"));
SoROUTE3078->setFromField(QString("touchTime"));
SoROUTE3078->setToNode(QString("PitchTimer"));
SoROUTE3078->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3078);

SoROUTE* SoROUTE3079 = new SoROUTE();
SoROUTE3079->setFromNode(QString("Walk_Touch"));
SoROUTE3079->setFromField(QString("touchTime"));
SoROUTE3079->setToNode(QString("YawTimer"));
SoROUTE3079->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3079);

SoROUTE* SoROUTE3080 = new SoROUTE();
SoROUTE3080->setFromNode(QString("Walk_Touch"));
SoROUTE3080->setFromField(QString("touchTime"));
SoROUTE3080->setToNode(QString("RollTimer"));
SoROUTE3080->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3080);

SoROUTE* SoROUTE3081 = new SoROUTE();
SoROUTE3081->setFromNode(QString("Walk_Touch"));
SoROUTE3081->setFromField(QString("touchTime"));
SoROUTE3081->setToNode(QString("RunTimer"));
SoROUTE3081->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3081);

SoROUTE* SoROUTE3082 = new SoROUTE();
SoROUTE3082->setFromNode(QString("Walk_Touch"));
SoROUTE3082->setFromField(QString("touchTime"));
SoROUTE3082->setToNode(QString("JumpTimer"));
SoROUTE3082->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3082);

SoROUTE* SoROUTE3083 = new SoROUTE();
SoROUTE3083->setFromNode(QString("Walk_Touch"));
SoROUTE3083->setFromField(QString("touchTime"));
SoROUTE3083->setToNode(QString("KickTimer"));
SoROUTE3083->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3083);

SoROUTE* SoROUTE3084 = new SoROUTE();
SoROUTE3084->setFromNode(QString("Walk_Touch"));
SoROUTE3084->setFromField(QString("touchTime"));
SoROUTE3084->setToNode(QString("StopTimer"));
SoROUTE3084->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3084);

SoROUTE* SoROUTE3085 = new SoROUTE();
SoROUTE3085->setFromNode(QString("Walk_Touch"));
SoROUTE3085->setFromField(QString("touchTime"));
SoROUTE3085->setToNode(QString("WalkTimer"));
SoROUTE3085->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3085);

SoROUTE* SoROUTE3086 = new SoROUTE();
SoROUTE3086->setFromNode(QString("Roll_Touch"));
SoROUTE3086->setFromField(QString("touchTime"));
SoROUTE3086->setToNode(QString("StandTimer"));
SoROUTE3086->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3086);

SoROUTE* SoROUTE3087 = new SoROUTE();
SoROUTE3087->setFromNode(QString("Roll_Touch"));
SoROUTE3087->setFromField(QString("touchTime"));
SoROUTE3087->setToNode(QString("PitchTimer"));
SoROUTE3087->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3087);

SoROUTE* SoROUTE3088 = new SoROUTE();
SoROUTE3088->setFromNode(QString("Roll_Touch"));
SoROUTE3088->setFromField(QString("touchTime"));
SoROUTE3088->setToNode(QString("YawTimer"));
SoROUTE3088->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3088);

SoROUTE* SoROUTE3089 = new SoROUTE();
SoROUTE3089->setFromNode(QString("Roll_Touch"));
SoROUTE3089->setFromField(QString("touchTime"));
SoROUTE3089->setToNode(QString("WalkTimer"));
SoROUTE3089->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3089);

SoROUTE* SoROUTE3090 = new SoROUTE();
SoROUTE3090->setFromNode(QString("Roll_Touch"));
SoROUTE3090->setFromField(QString("touchTime"));
SoROUTE3090->setToNode(QString("RunTimer"));
SoROUTE3090->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3090);

SoROUTE* SoROUTE3091 = new SoROUTE();
SoROUTE3091->setFromNode(QString("Roll_Touch"));
SoROUTE3091->setFromField(QString("touchTime"));
SoROUTE3091->setToNode(QString("JumpTimer"));
SoROUTE3091->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3091);

SoROUTE* SoROUTE3092 = new SoROUTE();
SoROUTE3092->setFromNode(QString("Roll_Touch"));
SoROUTE3092->setFromField(QString("touchTime"));
SoROUTE3092->setToNode(QString("KickTimer"));
SoROUTE3092->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3092);

SoROUTE* SoROUTE3093 = new SoROUTE();
SoROUTE3093->setFromNode(QString("Roll_Touch"));
SoROUTE3093->setFromField(QString("touchTime"));
SoROUTE3093->setToNode(QString("StopTimer"));
SoROUTE3093->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3093);

SoROUTE* SoROUTE3094 = new SoROUTE();
SoROUTE3094->setFromNode(QString("Roll_Touch"));
SoROUTE3094->setFromField(QString("touchTime"));
SoROUTE3094->setToNode(QString("RollTimer"));
SoROUTE3094->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3094);

SoROUTE* SoROUTE3095 = new SoROUTE();
SoROUTE3095->setFromNode(QString("Run_Touch"));
SoROUTE3095->setFromField(QString("touchTime"));
SoROUTE3095->setToNode(QString("StandTimer"));
SoROUTE3095->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3095);

SoROUTE* SoROUTE3096 = new SoROUTE();
SoROUTE3096->setFromNode(QString("Run_Touch"));
SoROUTE3096->setFromField(QString("touchTime"));
SoROUTE3096->setToNode(QString("PitchTimer"));
SoROUTE3096->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3096);

SoROUTE* SoROUTE3097 = new SoROUTE();
SoROUTE3097->setFromNode(QString("Run_Touch"));
SoROUTE3097->setFromField(QString("touchTime"));
SoROUTE3097->setToNode(QString("YawTimer"));
SoROUTE3097->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3097);

SoROUTE* SoROUTE3098 = new SoROUTE();
SoROUTE3098->setFromNode(QString("Run_Touch"));
SoROUTE3098->setFromField(QString("touchTime"));
SoROUTE3098->setToNode(QString("RollTimer"));
SoROUTE3098->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3098);

SoROUTE* SoROUTE3099 = new SoROUTE();
SoROUTE3099->setFromNode(QString("Run_Touch"));
SoROUTE3099->setFromField(QString("touchTime"));
SoROUTE3099->setToNode(QString("WalkTimer"));
SoROUTE3099->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3099);

SoROUTE* SoROUTE3100 = new SoROUTE();
SoROUTE3100->setFromNode(QString("Run_Touch"));
SoROUTE3100->setFromField(QString("touchTime"));
SoROUTE3100->setToNode(QString("JumpTimer"));
SoROUTE3100->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3100);

SoROUTE* SoROUTE3101 = new SoROUTE();
SoROUTE3101->setFromNode(QString("Run_Touch"));
SoROUTE3101->setFromField(QString("touchTime"));
SoROUTE3101->setToNode(QString("KickTimer"));
SoROUTE3101->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3101);

SoROUTE* SoROUTE3102 = new SoROUTE();
SoROUTE3102->setFromNode(QString("Run_Touch"));
SoROUTE3102->setFromField(QString("touchTime"));
SoROUTE3102->setToNode(QString("StopTimer"));
SoROUTE3102->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3102);

SoROUTE* SoROUTE3103 = new SoROUTE();
SoROUTE3103->setFromNode(QString("Run_Touch"));
SoROUTE3103->setFromField(QString("touchTime"));
SoROUTE3103->setToNode(QString("RunTimer"));
SoROUTE3103->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3103);

SoROUTE* SoROUTE3104 = new SoROUTE();
SoROUTE3104->setFromNode(QString("Jump_Touch"));
SoROUTE3104->setFromField(QString("touchTime"));
SoROUTE3104->setToNode(QString("StandTimer"));
SoROUTE3104->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3104);

SoROUTE* SoROUTE3105 = new SoROUTE();
SoROUTE3105->setFromNode(QString("Jump_Touch"));
SoROUTE3105->setFromField(QString("touchTime"));
SoROUTE3105->setToNode(QString("PitchTimer"));
SoROUTE3105->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3105);

SoROUTE* SoROUTE3106 = new SoROUTE();
SoROUTE3106->setFromNode(QString("Jump_Touch"));
SoROUTE3106->setFromField(QString("touchTime"));
SoROUTE3106->setToNode(QString("YawTimer"));
SoROUTE3106->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3106);

SoROUTE* SoROUTE3107 = new SoROUTE();
SoROUTE3107->setFromNode(QString("Jump_Touch"));
SoROUTE3107->setFromField(QString("touchTime"));
SoROUTE3107->setToNode(QString("RollTimer"));
SoROUTE3107->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3107);

SoROUTE* SoROUTE3108 = new SoROUTE();
SoROUTE3108->setFromNode(QString("Jump_Touch"));
SoROUTE3108->setFromField(QString("touchTime"));
SoROUTE3108->setToNode(QString("WalkTimer"));
SoROUTE3108->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3108);

SoROUTE* SoROUTE3109 = new SoROUTE();
SoROUTE3109->setFromNode(QString("Jump_Touch"));
SoROUTE3109->setFromField(QString("touchTime"));
SoROUTE3109->setToNode(QString("RunTimer"));
SoROUTE3109->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3109);

SoROUTE* SoROUTE3110 = new SoROUTE();
SoROUTE3110->setFromNode(QString("Jump_Touch"));
SoROUTE3110->setFromField(QString("touchTime"));
SoROUTE3110->setToNode(QString("KickTimer"));
SoROUTE3110->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3110);

SoROUTE* SoROUTE3111 = new SoROUTE();
SoROUTE3111->setFromNode(QString("Jump_Touch"));
SoROUTE3111->setFromField(QString("touchTime"));
SoROUTE3111->setToNode(QString("StopTimer"));
SoROUTE3111->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3111);

SoROUTE* SoROUTE3112 = new SoROUTE();
SoROUTE3112->setFromNode(QString("Jump_Touch"));
SoROUTE3112->setFromField(QString("touchTime"));
SoROUTE3112->setToNode(QString("JumpTimer"));
SoROUTE3112->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3112);

SoROUTE* SoROUTE3113 = new SoROUTE();
SoROUTE3113->setFromNode(QString("Kick_Touch"));
SoROUTE3113->setFromField(QString("touchTime"));
SoROUTE3113->setToNode(QString("StandTimer"));
SoROUTE3113->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3113);

SoROUTE* SoROUTE3114 = new SoROUTE();
SoROUTE3114->setFromNode(QString("Kick_Touch"));
SoROUTE3114->setFromField(QString("touchTime"));
SoROUTE3114->setToNode(QString("PitchTimer"));
SoROUTE3114->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3114);

SoROUTE* SoROUTE3115 = new SoROUTE();
SoROUTE3115->setFromNode(QString("Kick_Touch"));
SoROUTE3115->setFromField(QString("touchTime"));
SoROUTE3115->setToNode(QString("YawTimer"));
SoROUTE3115->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3115);

SoROUTE* SoROUTE3116 = new SoROUTE();
SoROUTE3116->setFromNode(QString("Kick_Touch"));
SoROUTE3116->setFromField(QString("touchTime"));
SoROUTE3116->setToNode(QString("RollTimer"));
SoROUTE3116->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3116);

SoROUTE* SoROUTE3117 = new SoROUTE();
SoROUTE3117->setFromNode(QString("Kick_Touch"));
SoROUTE3117->setFromField(QString("touchTime"));
SoROUTE3117->setToNode(QString("WalkTimer"));
SoROUTE3117->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3117);

SoROUTE* SoROUTE3118 = new SoROUTE();
SoROUTE3118->setFromNode(QString("Kick_Touch"));
SoROUTE3118->setFromField(QString("touchTime"));
SoROUTE3118->setToNode(QString("RunTimer"));
SoROUTE3118->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3118);

SoROUTE* SoROUTE3119 = new SoROUTE();
SoROUTE3119->setFromNode(QString("Kick_Touch"));
SoROUTE3119->setFromField(QString("touchTime"));
SoROUTE3119->setToNode(QString("JumpTimer"));
SoROUTE3119->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3119);

SoROUTE* SoROUTE3120 = new SoROUTE();
SoROUTE3120->setFromNode(QString("Kick_Touch"));
SoROUTE3120->setFromField(QString("touchTime"));
SoROUTE3120->setToNode(QString("StopTimer"));
SoROUTE3120->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3120);

SoROUTE* SoROUTE3121 = new SoROUTE();
SoROUTE3121->setFromNode(QString("Kick_Touch"));
SoROUTE3121->setFromField(QString("touchTime"));
SoROUTE3121->setToNode(QString("KickTimer"));
SoROUTE3121->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3121);

SoROUTE* SoROUTE3122 = new SoROUTE();
SoROUTE3122->setFromNode(QString("Stop_Touch"));
SoROUTE3122->setFromField(QString("touchTime"));
SoROUTE3122->setToNode(QString("StandTimer"));
SoROUTE3122->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3122);

SoROUTE* SoROUTE3123 = new SoROUTE();
SoROUTE3123->setFromNode(QString("Stop_Touch"));
SoROUTE3123->setFromField(QString("touchTime"));
SoROUTE3123->setToNode(QString("PitchTimer"));
SoROUTE3123->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3123);

SoROUTE* SoROUTE3124 = new SoROUTE();
SoROUTE3124->setFromNode(QString("Stop_Touch"));
SoROUTE3124->setFromField(QString("touchTime"));
SoROUTE3124->setToNode(QString("YawTimer"));
SoROUTE3124->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3124);

SoROUTE* SoROUTE3125 = new SoROUTE();
SoROUTE3125->setFromNode(QString("Stop_Touch"));
SoROUTE3125->setFromField(QString("touchTime"));
SoROUTE3125->setToNode(QString("RollTimer"));
SoROUTE3125->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3125);

SoROUTE* SoROUTE3126 = new SoROUTE();
SoROUTE3126->setFromNode(QString("Stop_Touch"));
SoROUTE3126->setFromField(QString("touchTime"));
SoROUTE3126->setToNode(QString("WalkTimer"));
SoROUTE3126->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3126);

SoROUTE* SoROUTE3127 = new SoROUTE();
SoROUTE3127->setFromNode(QString("Stop_Touch"));
SoROUTE3127->setFromField(QString("touchTime"));
SoROUTE3127->setToNode(QString("RunTimer"));
SoROUTE3127->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3127);

SoROUTE* SoROUTE3128 = new SoROUTE();
SoROUTE3128->setFromNode(QString("Stop_Touch"));
SoROUTE3128->setFromField(QString("touchTime"));
SoROUTE3128->setToNode(QString("JumpTimer"));
SoROUTE3128->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3128);

SoROUTE* SoROUTE3129 = new SoROUTE();
SoROUTE3129->setFromNode(QString("Stop_Touch"));
SoROUTE3129->setFromField(QString("touchTime"));
SoROUTE3129->setToNode(QString("KickTimer"));
SoROUTE3129->setToField(QString("set_stopTime"));
SoNode29->addChild(*SoROUTE3129);

SoROUTE* SoROUTE3130 = new SoROUTE();
SoROUTE3130->setFromNode(QString("Stop_Touch"));
SoROUTE3130->setFromField(QString("touchTime"));
SoROUTE3130->setToNode(QString("StopTimer"));
SoROUTE3130->setToField(QString("set_startTime"));
SoNode29->addChild(*SoROUTE3130);

SoSceneManager0->setSceneGraph(*SoNode29);

return 0;
}
