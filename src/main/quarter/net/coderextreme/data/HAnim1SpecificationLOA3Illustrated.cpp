
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
Someta3->setContent(QString("HAnimSpecificationLOA3Illustrated.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("reference"));
Someta5->setContent(QString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("reference"));
Someta6->setContent(QString("HAnimSpecificationLOA3Invisible.x3d"));
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
Someta20->setContent(QString("HAnimSpecificationLOA3Illustrated.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("HAnimSpecificationLOA3IllustratedLeftSide.png"));
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
Someta25->setName(QString("TODO"));
Someta25->setContent(QString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("TODO"));
Someta26->setContent(QString("insert MetadataInteger nodes indicating LOA for each Joint and Segment"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("warning"));
Someta27->setContent(QString("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("translator"));
Someta28->setContent(QString("Don Brutzman and Joe Williams"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("generator"));
Someta29->setContent(QString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("generator"));
Someta30->setContent(QString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta30);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode31 = new SoNode();
SoBackground* SoBackground32 = new SoBackground();
SoBackground32->setSkyColor(new float[]{0.3,0.3,0.3}, 3);
SoNode31->addChild(*SoBackground32);

SoNavigationInfo* SoNavigationInfo33 = new SoNavigationInfo();
SoNode31->addChild(*SoNavigationInfo33);

SoGroup* SoGroup34 = new SoGroup();
SoGroup34->setDEF(QString("Original_WorldInfo"));
SoWorldInfo* SoWorldInfo35 = new SoWorldInfo();
SoWorldInfo35->setTitle(QString("HANIM 200x Default Joint Centers, LOA3"));
SoWorldInfo35->setInfo(new QString[]{QString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")}, 1);
SoGroup34->addChild(*SoWorldInfo35);

SoNode31->addChild(*SoGroup34);

SoViewpoint* SoViewpoint36 = new SoViewpoint();
SoViewpoint36->setDescription(QString("Humanoid LOA 3 Front"));
SoViewpoint36->setPosition(new float[]{0.0,0.4,4.0});
SoViewpoint36->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint36);

SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDescription(QString("Humanoid LOA 3 Front Close"));
SoViewpoint37->setPosition(new float[]{0.0,0.8,2.0});
SoViewpoint37->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint37);

SoViewpoint* SoViewpoint38 = new SoViewpoint();
SoViewpoint38->setDescription(QString("Humanoid LOA 3 Front Closer"));
SoViewpoint38->setPosition(new float[]{0.0,1.2,1.0});
SoViewpoint38->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint38);

SoViewpoint* SoViewpoint39 = new SoViewpoint();
SoViewpoint39->setDescription(QString("Humanoid LOA 3 Front Face"));
SoViewpoint39->setPosition(new float[]{0.0,1.63,1.0});
SoViewpoint39->setCenterOfRotation(new float[]{0.0,1.5,0.0016});
SoNode31->addChild(*SoViewpoint39);

SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("Humanoid LOA 3 Right Side"));
SoViewpoint40->setPosition(new float[]{2.6,0.8,0.0});
SoViewpoint40->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint40->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint40);

SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDescription(QString("Humanoid LOA 3 Right Side Close"));
SoViewpoint41->setPosition(new float[]{1.0,0.8,0.5});
SoViewpoint41->setOrientation(new float[]{0.0,1.0,0.0,1.2});
SoViewpoint41->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint41);

SoViewpoint* SoViewpoint42 = new SoViewpoint();
SoViewpoint42->setDescription(QString("Humanoid LOA 3 Left Side Close"));
SoViewpoint42->setPosition(new float[]{-1.0,0.8,0.5});
SoViewpoint42->setOrientation(new float[]{0.0,1.0,0.0,-1.2});
SoViewpoint42->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint42);

SoViewpoint* SoViewpoint43 = new SoViewpoint();
SoViewpoint43->setDescription(QString("Humanoid LOA 3 Left Side"));
SoViewpoint43->setPosition(new float[]{-2.6,0.8,0.0});
SoViewpoint43->setOrientation(new float[]{0.0,1.0,0.0,-1.5708});
SoViewpoint43->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint43);

SoViewpoint* SoViewpoint44 = new SoViewpoint();
SoViewpoint44->setDescription(QString("Humanoid LOA 3 Top"));
SoViewpoint44->setPosition(new float[]{0.0,3.5,0.0});
SoViewpoint44->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint44->setCenterOfRotation(new float[]{0.0,0.9149,0.0016});
SoNode31->addChild(*SoViewpoint44);

SoHAnimHumanoid* SoHAnimHumanoid45 = new SoHAnimHumanoid();
SoHAnimHumanoid45->setDEF(QString("hanim_humanoid"));
SoHAnimHumanoid45->X3DNode::setName(QString("humanoid"));
SoHAnimHumanoid45->setInfo(new QString[]{QString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), QString("authorEmail=HAnim@web3D.org"), QString("copyright=none"), QString("creationDate=12 May 1999"), QString("usageRestrictions=none"), QString("humanoidVersion=2.0"), QString("height=1.7504")}, 7);
SoHAnimHumanoid45->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint46->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint46->setCenter(new float[]{0.0,0.824,0.0277});
SoHAnimSegment* SoHAnimSegment47 = new SoHAnimSegment();
SoHAnimSegment47->setDEF(QString("hanim_sacrum"));
SoHAnimSegment47->X3DNode::setName(QString("sacrum"));
SoTouchSensor* SoTouchSensor48 = new SoTouchSensor();
SoTouchSensor48->setDescription(QString("HAnimJoint HumanoidRoot, HAnimSegment sacrum"));
SoHAnimSegment47->addChild(*SoTouchSensor48);

SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setTranslation(new float[]{0.0,0.824,0.0277});
SoShape* SoShape50 = new SoShape();
SoShape50->setDEF(QString("HAnimJointShape"));
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoVRMLAppearance51->setDEF(QString("HAnimJointAppearance"));
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setDiffuseColor(new float[]{1.0,0.5,0.0});
SoMaterial52->setTransparency(0.5);
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoSphere* SoSphere53 = new SoSphere();
SoSphere53->setRadius(0.006);
SoShape50->setGeometry(*SoSphere53);

SoTransform49->addChild(*SoShape50);

SoHAnimSegment47->addChild(*SoTransform49);

SoShape* SoShape54 = new SoShape();
SoLineSet* SoLineSet55 = new SoLineSet();
SoLineSet55->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA56 = new SoColorRGBA();
SoColorRGBA56->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA56->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet55->addChild(*SoColorRGBA56);

SoCoordinate* SoCoordinate57 = new SoCoordinate();
SoCoordinate57->setPoint(new float[]{0.0,0.824,0.0277,0.0,0.9149,0.0016}, 6);
SoLineSet55->setCoord(*SoCoordinate57);

SoShape54->setGeometry(*SoLineSet55);

SoHAnimSegment47->addChild(*SoShape54);

SoShape* SoShape58 = new SoShape();
SoLineSet* SoLineSet59 = new SoLineSet();
SoLineSet59->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA60 = new SoColorRGBA();
SoColorRGBA60->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet59->addChild(*SoColorRGBA60);

SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setPoint(new float[]{0.0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
SoLineSet59->setCoord(*SoCoordinate61);

SoShape58->setGeometry(*SoLineSet59);

SoHAnimSegment47->addChild(*SoShape58);

SoHAnimJoint46->addChildren(*SoHAnimSegment47);

SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint62->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint62->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment63 = new SoHAnimSegment();
SoHAnimSegment63->setDEF(QString("hanim_pelvis"));
SoHAnimSegment63->X3DNode::setName(QString("pelvis"));
SoTouchSensor* SoTouchSensor64 = new SoTouchSensor();
SoTouchSensor64->setDescription(QString("HAnimJoint sacroiliac, HAnimSegment pelvis"));
SoHAnimSegment63->addChild(*SoTouchSensor64);

SoTransform* SoTransform65 = new SoTransform();
SoTransform65->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape66 = new SoShape();
SoShape66->setUSE(QString("HAnimJointShape"));
SoTransform65->addChild(*SoShape66);

SoHAnimSegment63->addChild(*SoTransform65);

SoShape* SoShape67 = new SoShape();
SoLineSet* SoLineSet68 = new SoLineSet();
SoLineSet68->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA69 = new SoColorRGBA();
SoColorRGBA69->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet68->addChild(*SoColorRGBA69);

SoCoordinate* SoCoordinate70 = new SoCoordinate();
SoCoordinate70->setPoint(new float[]{0.0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
SoLineSet68->setCoord(*SoCoordinate70);

SoShape67->setGeometry(*SoLineSet68);

SoHAnimSegment63->addChild(*SoShape67);

SoShape* SoShape71 = new SoShape();
SoLineSet* SoLineSet72 = new SoLineSet();
SoLineSet72->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA73 = new SoColorRGBA();
SoColorRGBA73->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet72->addChild(*SoColorRGBA73);

SoCoordinate* SoCoordinate74 = new SoCoordinate();
SoCoordinate74->setPoint(new float[]{0.0,0.9149,0.0016,-0.0961,0.9124,-0.0001}, 6);
SoLineSet72->setCoord(*SoCoordinate74);

SoShape71->setGeometry(*SoLineSet72);

SoHAnimSegment63->addChild(*SoShape71);

SoShape* SoShape75 = new SoShape();
SoLineSet* SoLineSet76 = new SoLineSet();
SoLineSet76->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA77 = new SoColorRGBA();
SoColorRGBA77->setDEF(QString("HAnimSiteLineColorRGBA"));
SoColorRGBA77->setColor(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.1}, 8);
SoLineSet76->addChild(*SoColorRGBA77);

SoCoordinate* SoCoordinate78 = new SoCoordinate();
SoCoordinate78->setPoint(new float[]{0.0,0.9149,0.0016,-0.1525,1.0628,0.0035}, 6);
SoLineSet76->setCoord(*SoCoordinate78);

SoShape75->setGeometry(*SoLineSet76);

SoHAnimSegment63->addChild(*SoShape75);

SoShape* SoShape79 = new SoShape();
SoLineSet* SoLineSet80 = new SoLineSet();
SoLineSet80->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA81 = new SoColorRGBA();
SoColorRGBA81->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet80->addChild(*SoColorRGBA81);

SoCoordinate* SoCoordinate82 = new SoCoordinate();
SoCoordinate82->setPoint(new float[]{0.0,0.9149,0.0016,-0.1689,0.8419,0.0352}, 6);
SoLineSet80->setCoord(*SoCoordinate82);

SoShape79->setGeometry(*SoLineSet80);

SoHAnimSegment63->addChild(*SoShape79);

SoShape* SoShape83 = new SoShape();
SoLineSet* SoLineSet84 = new SoLineSet();
SoLineSet84->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA85 = new SoColorRGBA();
SoColorRGBA85->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet84->addChild(*SoColorRGBA85);

SoCoordinate* SoCoordinate86 = new SoCoordinate();
SoCoordinate86->setPoint(new float[]{0.0,0.9149,0.0016,0.1612,1.0537,0.0008}, 6);
SoLineSet84->setCoord(*SoCoordinate86);

SoShape83->setGeometry(*SoLineSet84);

SoHAnimSegment63->addChild(*SoShape83);

SoShape* SoShape87 = new SoShape();
SoLineSet* SoLineSet88 = new SoLineSet();
SoLineSet88->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA89 = new SoColorRGBA();
SoColorRGBA89->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet88->addChild(*SoColorRGBA89);

SoCoordinate* SoCoordinate90 = new SoCoordinate();
SoCoordinate90->setPoint(new float[]{0.0,0.9149,0.0016,0.1677,0.8336,0.0303}, 6);
SoLineSet88->setCoord(*SoCoordinate90);

SoShape87->setGeometry(*SoLineSet88);

SoHAnimSegment63->addChild(*SoShape87);

SoShape* SoShape91 = new SoShape();
SoLineSet* SoLineSet92 = new SoLineSet();
SoLineSet92->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA93 = new SoColorRGBA();
SoColorRGBA93->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet92->addChild(*SoColorRGBA93);

SoCoordinate* SoCoordinate94 = new SoCoordinate();
SoCoordinate94->setPoint(new float[]{0.0,0.9149,0.0016,-0.0887,1.0021,0.1112}, 6);
SoLineSet92->setCoord(*SoCoordinate94);

SoShape91->setGeometry(*SoLineSet92);

SoHAnimSegment63->addChild(*SoShape91);

SoShape* SoShape95 = new SoShape();
SoLineSet* SoLineSet96 = new SoLineSet();
SoLineSet96->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA97 = new SoColorRGBA();
SoColorRGBA97->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet96->addChild(*SoColorRGBA97);

SoCoordinate* SoCoordinate98 = new SoCoordinate();
SoCoordinate98->setPoint(new float[]{0.0,0.9149,0.0016,0.0925,0.9983,0.1052}, 6);
SoLineSet96->setCoord(*SoCoordinate98);

SoShape95->setGeometry(*SoLineSet96);

SoHAnimSegment63->addChild(*SoShape95);

SoShape* SoShape99 = new SoShape();
SoLineSet* SoLineSet100 = new SoLineSet();
SoLineSet100->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA101 = new SoColorRGBA();
SoColorRGBA101->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet100->addChild(*SoColorRGBA101);

SoCoordinate* SoCoordinate102 = new SoCoordinate();
SoCoordinate102->setPoint(new float[]{0.0,0.9149,0.0016,-0.0716,1.019,-0.1138}, 6);
SoLineSet100->setCoord(*SoCoordinate102);

SoShape99->setGeometry(*SoLineSet100);

SoHAnimSegment63->addChild(*SoShape99);

SoShape* SoShape103 = new SoShape();
SoLineSet* SoLineSet104 = new SoLineSet();
SoLineSet104->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA105 = new SoColorRGBA();
SoColorRGBA105->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet104->addChild(*SoColorRGBA105);

SoCoordinate* SoCoordinate106 = new SoCoordinate();
SoCoordinate106->setPoint(new float[]{0.0,0.9149,0.0016,0.0774,1.019,-0.1151}, 6);
SoLineSet104->setCoord(*SoCoordinate106);

SoShape103->setGeometry(*SoLineSet104);

SoHAnimSegment63->addChild(*SoShape103);

SoShape* SoShape107 = new SoShape();
SoLineSet* SoLineSet108 = new SoLineSet();
SoLineSet108->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA109 = new SoColorRGBA();
SoColorRGBA109->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet108->addChild(*SoColorRGBA109);

SoCoordinate* SoCoordinate110 = new SoCoordinate();
SoCoordinate110->setPoint(new float[]{0.0,0.9149,0.0016,0.0034,0.8266,0.0257}, 6);
SoLineSet108->setCoord(*SoCoordinate110);

SoShape107->setGeometry(*SoLineSet108);

SoHAnimSegment63->addChild(*SoShape107);

SoHAnimSite* SoHAnimSite111 = new SoHAnimSite();
SoHAnimSite111->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite111->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite111->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoTouchSensor* SoTouchSensor112 = new SoTouchSensor();
SoTouchSensor112->setDescription(QString("HAnimSite r_iliocristale"));
SoHAnimSite111->addChild(*SoTouchSensor112);

SoShape* SoShape113 = new SoShape();
SoShape113->setDEF(QString("HAnimSiteShape"));
SoVRMLAppearance* SoVRMLAppearance114 = new SoVRMLAppearance();
SoMaterial* SoMaterial115 = new SoMaterial();
SoMaterial115->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance114->addChild(*SoMaterial115);

SoShape113->addChild(*SoVRMLAppearance114);

SoIndexedFaceSet* SoIndexedFaceSet116 = new SoIndexedFaceSet();
SoIndexedFaceSet116->setDEF(QString("DiamondIFS"));
SoIndexedFaceSet116->setSolid(false);
SoIndexedFaceSet116->setCreaseAngle(0.5);
SoIndexedFaceSet116->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate117 = new SoCoordinate();
SoCoordinate117->setPoint(new float[]{0.0,0.008,0.0,-0.008,0.0,0.0,0.0,0.0,0.008,0.008,0.0,0.0,0.0,0.0,-0.008,0.0,-0.008,0.0}, 18);
SoIndexedFaceSet116->setCoord(*SoCoordinate117);

SoShape113->setGeometry(*SoIndexedFaceSet116);

SoHAnimSite111->addChild(*SoShape113);

SoHAnimSegment63->addChild(*SoHAnimSite111);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite118->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite118->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoTouchSensor* SoTouchSensor119 = new SoTouchSensor();
SoTouchSensor119->setDescription(QString("HAnimSite r_trochanterion"));
SoHAnimSite118->addChild(*SoTouchSensor119);

SoShape* SoShape120 = new SoShape();
SoShape120->setUSE(QString("HAnimSiteShape"));
SoHAnimSite118->addChild(*SoShape120);

SoHAnimSegment63->addChild(*SoHAnimSite118);

SoHAnimSite* SoHAnimSite121 = new SoHAnimSite();
SoHAnimSite121->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite121->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite121->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoTouchSensor* SoTouchSensor122 = new SoTouchSensor();
SoTouchSensor122->setDescription(QString("HAnimSite l_iliocristale"));
SoHAnimSite121->addChild(*SoTouchSensor122);

SoShape* SoShape123 = new SoShape();
SoShape123->setUSE(QString("HAnimSiteShape"));
SoHAnimSite121->addChild(*SoShape123);

SoHAnimSegment63->addChild(*SoHAnimSite121);

SoHAnimSite* SoHAnimSite124 = new SoHAnimSite();
SoHAnimSite124->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite124->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite124->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoTouchSensor* SoTouchSensor125 = new SoTouchSensor();
SoTouchSensor125->setDescription(QString("HAnimSite l_trochanterion"));
SoHAnimSite124->addChild(*SoTouchSensor125);

SoShape* SoShape126 = new SoShape();
SoShape126->setUSE(QString("HAnimSiteShape"));
SoHAnimSite124->addChild(*SoShape126);

SoHAnimSegment63->addChild(*SoHAnimSite124);

SoHAnimSite* SoHAnimSite127 = new SoHAnimSite();
SoHAnimSite127->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite127->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite127->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoTouchSensor* SoTouchSensor128 = new SoTouchSensor();
SoTouchSensor128->setDescription(QString("HAnimSite r_asis"));
SoHAnimSite127->addChild(*SoTouchSensor128);

SoShape* SoShape129 = new SoShape();
SoShape129->setUSE(QString("HAnimSiteShape"));
SoHAnimSite127->addChild(*SoShape129);

SoHAnimSegment63->addChild(*SoHAnimSite127);

SoHAnimSite* SoHAnimSite130 = new SoHAnimSite();
SoHAnimSite130->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite130->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite130->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoTouchSensor* SoTouchSensor131 = new SoTouchSensor();
SoTouchSensor131->setDescription(QString("HAnimSite l_asis"));
SoHAnimSite130->addChild(*SoTouchSensor131);

SoShape* SoShape132 = new SoShape();
SoShape132->setUSE(QString("HAnimSiteShape"));
SoHAnimSite130->addChild(*SoShape132);

SoHAnimSegment63->addChild(*SoHAnimSite130);

SoHAnimSite* SoHAnimSite133 = new SoHAnimSite();
SoHAnimSite133->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite133->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite133->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoTouchSensor* SoTouchSensor134 = new SoTouchSensor();
SoTouchSensor134->setDescription(QString("HAnimSite r_psis"));
SoHAnimSite133->addChild(*SoTouchSensor134);

SoShape* SoShape135 = new SoShape();
SoShape135->setUSE(QString("HAnimSiteShape"));
SoHAnimSite133->addChild(*SoShape135);

SoHAnimSegment63->addChild(*SoHAnimSite133);

SoHAnimSite* SoHAnimSite136 = new SoHAnimSite();
SoHAnimSite136->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite136->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite136->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoTouchSensor* SoTouchSensor137 = new SoTouchSensor();
SoTouchSensor137->setDescription(QString("HAnimSite l_psis"));
SoHAnimSite136->addChild(*SoTouchSensor137);

SoShape* SoShape138 = new SoShape();
SoShape138->setUSE(QString("HAnimSiteShape"));
SoHAnimSite136->addChild(*SoShape138);

SoHAnimSegment63->addChild(*SoHAnimSite136);

SoHAnimSite* SoHAnimSite139 = new SoHAnimSite();
SoHAnimSite139->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite139->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite139->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoTouchSensor* SoTouchSensor140 = new SoTouchSensor();
SoTouchSensor140->setDescription(QString("HAnimSite crotch"));
SoHAnimSite139->addChild(*SoTouchSensor140);

SoShape* SoShape141 = new SoShape();
SoShape141->setUSE(QString("HAnimSiteShape"));
SoHAnimSite139->addChild(*SoShape141);

SoHAnimSegment63->addChild(*SoHAnimSite139);

SoHAnimJoint62->addChildren(*SoHAnimSegment63);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setDEF(QString("hanim_l_hip"));
SoHAnimJoint142->X3DNode::setName(QString("l_hip"));
SoHAnimJoint142->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment143 = new SoHAnimSegment();
SoHAnimSegment143->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment143->X3DNode::setName(QString("l_thigh"));
SoTouchSensor* SoTouchSensor144 = new SoTouchSensor();
SoTouchSensor144->setDescription(QString("HAnimJoint l_hip, HAnimSegment l_thigh"));
SoHAnimSegment143->addChild(*SoTouchSensor144);

SoTransform* SoTransform145 = new SoTransform();
SoTransform145->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoShape* SoShape146 = new SoShape();
SoShape146->setUSE(QString("HAnimJointShape"));
SoTransform145->addChild(*SoShape146);

SoHAnimSegment143->addChild(*SoTransform145);

SoShape* SoShape147 = new SoShape();
SoLineSet* SoLineSet148 = new SoLineSet();
SoLineSet148->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA149 = new SoColorRGBA();
SoColorRGBA149->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet148->addChild(*SoColorRGBA149);

SoCoordinate* SoCoordinate150 = new SoCoordinate();
SoCoordinate150->setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
SoLineSet148->setCoord(*SoCoordinate150);

SoShape147->setGeometry(*SoLineSet148);

SoHAnimSegment143->addChild(*SoShape147);

SoShape* SoShape151 = new SoShape();
SoLineSet* SoLineSet152 = new SoLineSet();
SoLineSet152->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA153 = new SoColorRGBA();
SoColorRGBA153->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet152->addChild(*SoColorRGBA153);

SoCoordinate* SoCoordinate154 = new SoCoordinate();
SoCoordinate154->setPoint(new float[]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309}, 6);
SoLineSet152->setCoord(*SoCoordinate154);

SoShape151->setGeometry(*SoLineSet152);

SoHAnimSegment143->addChild(*SoShape151);

SoShape* SoShape155 = new SoShape();
SoLineSet* SoLineSet156 = new SoLineSet();
SoLineSet156->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA157 = new SoColorRGBA();
SoColorRGBA157->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet156->addChild(*SoColorRGBA157);

SoCoordinate* SoCoordinate158 = new SoCoordinate();
SoCoordinate158->setPoint(new float[]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297}, 6);
SoLineSet156->setCoord(*SoCoordinate158);

SoShape155->setGeometry(*SoLineSet156);

SoHAnimSegment143->addChild(*SoShape155);

SoShape* SoShape159 = new SoShape();
SoLineSet* SoLineSet160 = new SoLineSet();
SoLineSet160->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA161 = new SoColorRGBA();
SoColorRGBA161->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet160->addChild(*SoColorRGBA161);

SoCoordinate* SoCoordinate162 = new SoCoordinate();
SoCoordinate162->setPoint(new float[]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303}, 6);
SoLineSet160->setCoord(*SoCoordinate162);

SoShape159->setGeometry(*SoLineSet160);

SoHAnimSegment143->addChild(*SoShape159);

SoHAnimSite* SoHAnimSite163 = new SoHAnimSite();
SoHAnimSite163->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite163->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite163->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoTouchSensor* SoTouchSensor164 = new SoTouchSensor();
SoTouchSensor164->setDescription(QString("HAnimSite l_knee_crease"));
SoHAnimSite163->addChild(*SoTouchSensor164);

SoShape* SoShape165 = new SoShape();
SoShape165->setUSE(QString("HAnimSiteShape"));
SoHAnimSite163->addChild(*SoShape165);

SoHAnimSegment143->addChild(*SoHAnimSite163);

SoHAnimSite* SoHAnimSite166 = new SoHAnimSite();
SoHAnimSite166->setDEF(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimSite166->X3DNode::setName(QString("l_femoral_lateral_epicn_pt"));
SoHAnimSite166->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoTouchSensor* SoTouchSensor167 = new SoTouchSensor();
SoTouchSensor167->setDescription(QString("HAnimSite l_femoral_lateral_epicn"));
SoHAnimSite166->addChild(*SoTouchSensor167);

SoShape* SoShape168 = new SoShape();
SoShape168->setUSE(QString("HAnimSiteShape"));
SoHAnimSite166->addChild(*SoShape168);

SoHAnimSegment143->addChild(*SoHAnimSite166);

SoHAnimSite* SoHAnimSite169 = new SoHAnimSite();
SoHAnimSite169->setDEF(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimSite169->X3DNode::setName(QString("l_femoral_medial_epicn_pt"));
SoHAnimSite169->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoTouchSensor* SoTouchSensor170 = new SoTouchSensor();
SoTouchSensor170->setDescription(QString("HAnimSite l_femoral_medial_epicn"));
SoHAnimSite169->addChild(*SoTouchSensor170);

SoShape* SoShape171 = new SoShape();
SoShape171->setUSE(QString("HAnimSiteShape"));
SoHAnimSite169->addChild(*SoShape171);

SoHAnimSegment143->addChild(*SoHAnimSite169);

SoHAnimJoint142->addChildren(*SoHAnimSegment143);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setDEF(QString("hanim_l_knee"));
SoHAnimJoint172->X3DNode::setName(QString("l_knee"));
SoHAnimJoint172->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment173 = new SoHAnimSegment();
SoHAnimSegment173->setDEF(QString("hanim_l_calf"));
SoHAnimSegment173->X3DNode::setName(QString("l_calf"));
SoTouchSensor* SoTouchSensor174 = new SoTouchSensor();
SoTouchSensor174->setDescription(QString("HAnimJoint l_knee, HAnimSegment l_calf"));
SoHAnimSegment173->addChild(*SoTouchSensor174);

SoTransform* SoTransform175 = new SoTransform();
SoTransform175->setTranslation(new float[]{0.104,0.4867,0.0308});
SoShape* SoShape176 = new SoShape();
SoShape176->setUSE(QString("HAnimJointShape"));
SoTransform175->addChild(*SoShape176);

SoHAnimSegment173->addChild(*SoTransform175);

SoShape* SoShape177 = new SoShape();
SoLineSet* SoLineSet178 = new SoLineSet();
SoLineSet178->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA179 = new SoColorRGBA();
SoColorRGBA179->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet178->addChild(*SoColorRGBA179);

SoCoordinate* SoCoordinate180 = new SoCoordinate();
SoCoordinate180->setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
SoLineSet178->setCoord(*SoCoordinate180);

SoShape177->setGeometry(*SoLineSet178);

SoHAnimSegment173->addChild(*SoShape177);

SoHAnimJoint172->addChildren(*SoHAnimSegment173);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->setDEF(QString("hanim_l_ankle"));
SoHAnimJoint181->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint181->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment182 = new SoHAnimSegment();
SoHAnimSegment182->setDEF(QString("hanim_l_hindfoot"));
SoHAnimSegment182->X3DNode::setName(QString("l_hindfoot"));
SoTouchSensor* SoTouchSensor183 = new SoTouchSensor();
SoTouchSensor183->setDescription(QString("HAnimJoint l_ankle, HAnimSegment l_hindfoot"));
SoHAnimSegment182->addChild(*SoTouchSensor183);

SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setTranslation(new float[]{0.1101,0.0656,-0.0736});
SoShape* SoShape185 = new SoShape();
SoShape185->setUSE(QString("HAnimJointShape"));
SoTransform184->addChild(*SoShape185);

SoHAnimSegment182->addChild(*SoTransform184);

SoShape* SoShape186 = new SoShape();
SoLineSet* SoLineSet187 = new SoLineSet();
SoLineSet187->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA188 = new SoColorRGBA();
SoColorRGBA188->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet187->addChild(*SoColorRGBA188);

SoCoordinate* SoCoordinate189 = new SoCoordinate();
SoCoordinate189->setPoint(new float[]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368}, 6);
SoLineSet187->setCoord(*SoCoordinate189);

SoShape186->setGeometry(*SoLineSet187);

SoHAnimSegment182->addChild(*SoShape186);

SoShape* SoShape190 = new SoShape();
SoLineSet* SoLineSet191 = new SoLineSet();
SoLineSet191->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA192 = new SoColorRGBA();
SoColorRGBA192->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet191->addChild(*SoColorRGBA192);

SoCoordinate* SoCoordinate193 = new SoCoordinate();
SoCoordinate193->setPoint(new float[]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032}, 6);
SoLineSet191->setCoord(*SoCoordinate193);

SoShape190->setGeometry(*SoLineSet191);

SoHAnimSegment182->addChild(*SoShape190);

SoShape* SoShape194 = new SoShape();
SoLineSet* SoLineSet195 = new SoLineSet();
SoLineSet195->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA196 = new SoColorRGBA();
SoColorRGBA196->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet195->addChild(*SoColorRGBA196);

SoCoordinate* SoCoordinate197 = new SoCoordinate();
SoCoordinate197->setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881}, 6);
SoLineSet195->setCoord(*SoCoordinate197);

SoShape194->setGeometry(*SoLineSet195);

SoHAnimSegment182->addChild(*SoShape194);

SoShape* SoShape198 = new SoShape();
SoLineSet* SoLineSet199 = new SoLineSet();
SoLineSet199->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA200 = new SoColorRGBA();
SoColorRGBA200->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet199->addChild(*SoColorRGBA200);

SoCoordinate* SoCoordinate201 = new SoCoordinate();
SoCoordinate201->setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943}, 6);
SoLineSet199->setCoord(*SoCoordinate201);

SoShape198->setGeometry(*SoLineSet199);

SoHAnimSegment182->addChild(*SoShape198);

SoShape* SoShape202 = new SoShape();
SoLineSet* SoLineSet203 = new SoLineSet();
SoLineSet203->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA204 = new SoColorRGBA();
SoColorRGBA204->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet203->addChild(*SoColorRGBA204);

SoCoordinate* SoCoordinate205 = new SoCoordinate();
SoCoordinate205->setPoint(new float[]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171}, 6);
SoLineSet203->setCoord(*SoCoordinate205);

SoShape202->setGeometry(*SoLineSet203);

SoHAnimSegment182->addChild(*SoShape202);

SoHAnimSite* SoHAnimSite206 = new SoHAnimSite();
SoHAnimSite206->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite206->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite206->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoTouchSensor* SoTouchSensor207 = new SoTouchSensor();
SoTouchSensor207->setDescription(QString("HAnimSite l_lateral_malleolus"));
SoHAnimSite206->addChild(*SoTouchSensor207);

SoShape* SoShape208 = new SoShape();
SoShape208->setUSE(QString("HAnimSiteShape"));
SoHAnimSite206->addChild(*SoShape208);

SoHAnimSegment182->addChild(*SoHAnimSite206);

SoHAnimSite* SoHAnimSite209 = new SoHAnimSite();
SoHAnimSite209->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite209->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite209->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoTouchSensor* SoTouchSensor210 = new SoTouchSensor();
SoTouchSensor210->setDescription(QString("HAnimSite l_medial_malleolus"));
SoHAnimSite209->addChild(*SoTouchSensor210);

SoShape* SoShape211 = new SoShape();
SoShape211->setUSE(QString("HAnimSiteShape"));
SoHAnimSite209->addChild(*SoShape211);

SoHAnimSegment182->addChild(*SoHAnimSite209);

SoHAnimSite* SoHAnimSite212 = new SoHAnimSite();
SoHAnimSite212->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite212->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite212->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoTouchSensor* SoTouchSensor213 = new SoTouchSensor();
SoTouchSensor213->setDescription(QString("HAnimSite l_sphyrion"));
SoHAnimSite212->addChild(*SoTouchSensor213);

SoShape* SoShape214 = new SoShape();
SoShape214->setUSE(QString("HAnimSiteShape"));
SoHAnimSite212->addChild(*SoShape214);

SoHAnimSegment182->addChild(*SoHAnimSite212);

SoHAnimSite* SoHAnimSite215 = new SoHAnimSite();
SoHAnimSite215->setDEF(QString("hanim_l_calcaneous_post_pt"));
SoHAnimSite215->X3DNode::setName(QString("l_calcaneous_post_pt"));
SoHAnimSite215->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoTouchSensor* SoTouchSensor216 = new SoTouchSensor();
SoTouchSensor216->setDescription(QString("HAnimSite l_calcaneous_post"));
SoHAnimSite215->addChild(*SoTouchSensor216);

SoShape* SoShape217 = new SoShape();
SoShape217->setUSE(QString("HAnimSiteShape"));
SoHAnimSite215->addChild(*SoShape217);

SoHAnimSegment182->addChild(*SoHAnimSite215);

SoHAnimJoint181->addChildren(*SoHAnimSegment182);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setDEF(QString("hanim_l_subtalar"));
SoHAnimJoint218->X3DNode::setName(QString("l_subtalar"));
SoHAnimJoint218->setCenter(new float[]{0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment219 = new SoHAnimSegment();
SoHAnimSegment219->setDEF(QString("hanim_l_midproximal"));
SoHAnimSegment219->X3DNode::setName(QString("l_midproximal"));
SoTouchSensor* SoTouchSensor220 = new SoTouchSensor();
SoTouchSensor220->setDescription(QString("HAnimJoint l_subtalar, HAnimSegment l_midproximal"));
SoHAnimSegment219->addChild(*SoTouchSensor220);

SoTransform* SoTransform221 = new SoTransform();
SoTransform221->setTranslation(new float[]{0.1086,0.0001,-0.0368});
SoShape* SoShape222 = new SoShape();
SoShape222->setUSE(QString("HAnimJointShape"));
SoTransform221->addChild(*SoShape222);

SoHAnimSegment219->addChild(*SoTransform221);

SoShape* SoShape223 = new SoShape();
SoLineSet* SoLineSet224 = new SoLineSet();
SoLineSet224->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA225 = new SoColorRGBA();
SoColorRGBA225->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet224->addChild(*SoColorRGBA225);

SoCoordinate* SoCoordinate226 = new SoCoordinate();
SoCoordinate226->setPoint(new float[]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368}, 6);
SoLineSet224->setCoord(*SoCoordinate226);

SoShape223->setGeometry(*SoLineSet224);

SoHAnimSegment219->addChild(*SoShape223);

SoHAnimJoint218->addChildren(*SoHAnimSegment219);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setDEF(QString("hanim_l_midtarsal"));
SoHAnimJoint227->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint227->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment228 = new SoHAnimSegment();
SoHAnimSegment228->setDEF(QString("hanim_l_middistal"));
SoHAnimSegment228->X3DNode::setName(QString("l_middistal"));
SoTouchSensor* SoTouchSensor229 = new SoTouchSensor();
SoTouchSensor229->setDescription(QString("HAnimJoint l_midtarsal, HAnimSegment l_middistal"));
SoHAnimSegment228->addChild(*SoTouchSensor229);

SoTransform* SoTransform230 = new SoTransform();
SoTransform230->setTranslation(new float[]{0.1086,0.0001,0.0368});
SoShape* SoShape231 = new SoShape();
SoShape231->setUSE(QString("HAnimJointShape"));
SoTransform230->addChild(*SoShape231);

SoHAnimSegment228->addChild(*SoTransform230);

SoShape* SoShape232 = new SoShape();
SoLineSet* SoLineSet233 = new SoLineSet();
SoLineSet233->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA234 = new SoColorRGBA();
SoColorRGBA234->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet233->addChild(*SoColorRGBA234);

SoCoordinate* SoCoordinate235 = new SoCoordinate();
SoCoordinate235->setPoint(new float[]{0.1086,0.0001,0.0368,0.1086,0.0,0.0762}, 6);
SoLineSet233->setCoord(*SoCoordinate235);

SoShape232->setGeometry(*SoLineSet233);

SoHAnimSegment228->addChild(*SoShape232);

SoShape* SoShape236 = new SoShape();
SoLineSet* SoLineSet237 = new SoLineSet();
SoLineSet237->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA238 = new SoColorRGBA();
SoColorRGBA238->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet237->addChild(*SoColorRGBA238);

SoCoordinate* SoCoordinate239 = new SoCoordinate();
SoCoordinate239->setPoint(new float[]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106}, 6);
SoLineSet237->setCoord(*SoCoordinate239);

SoShape236->setGeometry(*SoLineSet237);

SoHAnimSegment228->addChild(*SoShape236);

SoHAnimSite* SoHAnimSite240 = new SoHAnimSite();
SoHAnimSite240->setDEF(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimSite240->X3DNode::setName(QString("l_metatarsal_pha1_pt"));
SoHAnimSite240->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoTouchSensor* SoTouchSensor241 = new SoTouchSensor();
SoTouchSensor241->setDescription(QString("HAnimSite l_metatarsal_pha1"));
SoHAnimSite240->addChild(*SoTouchSensor241);

SoShape* SoShape242 = new SoShape();
SoShape242->setUSE(QString("HAnimSiteShape"));
SoHAnimSite240->addChild(*SoShape242);

SoHAnimSegment228->addChild(*SoHAnimSite240);

SoHAnimJoint227->addChildren(*SoHAnimSegment228);

SoHAnimJoint* SoHAnimJoint243 = new SoHAnimJoint();
SoHAnimJoint243->setDEF(QString("hanim_l_metatarsal"));
SoHAnimJoint243->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint243->setCenter(new float[]{0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment244 = new SoHAnimSegment();
SoHAnimSegment244->setDEF(QString("hanim_l_forefoot"));
SoHAnimSegment244->X3DNode::setName(QString("l_forefoot"));
SoTouchSensor* SoTouchSensor245 = new SoTouchSensor();
SoTouchSensor245->setDescription(QString("HAnimJoint l_metatarsal, HAnimSegment l_forefoot"));
SoHAnimSegment244->addChild(*SoTouchSensor245);

SoTransform* SoTransform246 = new SoTransform();
SoTransform246->setTranslation(new float[]{0.1086,0.0,0.0762});
SoShape* SoShape247 = new SoShape();
SoShape247->setUSE(QString("HAnimJointShape"));
SoTransform246->addChild(*SoShape247);

SoHAnimSegment244->addChild(*SoTransform246);

SoShape* SoShape248 = new SoShape();
SoLineSet* SoLineSet249 = new SoLineSet();
SoLineSet249->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA250 = new SoColorRGBA();
SoColorRGBA250->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet249->addChild(*SoColorRGBA250);

SoCoordinate* SoCoordinate251 = new SoCoordinate();
SoCoordinate251->setPoint(new float[]{0.1086,0.0,0.0762,0.1354,0.0016,0.1476}, 6);
SoLineSet249->setCoord(*SoCoordinate251);

SoShape248->setGeometry(*SoLineSet249);

SoHAnimSegment244->addChild(*SoShape248);

SoShape* SoShape252 = new SoShape();
SoLineSet* SoLineSet253 = new SoLineSet();
SoLineSet253->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA254 = new SoColorRGBA();
SoColorRGBA254->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet253->addChild(*SoColorRGBA254);

SoCoordinate* SoCoordinate255 = new SoCoordinate();
SoCoordinate255->setPoint(new float[]{0.1086,0.0,0.0762,0.1825,0.007,0.0928}, 6);
SoLineSet253->setCoord(*SoCoordinate255);

SoShape252->setGeometry(*SoLineSet253);

SoHAnimSegment244->addChild(*SoShape252);

SoShape* SoShape256 = new SoShape();
SoLineSet* SoLineSet257 = new SoLineSet();
SoLineSet257->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA258 = new SoColorRGBA();
SoColorRGBA258->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet257->addChild(*SoColorRGBA258);

SoCoordinate* SoCoordinate259 = new SoCoordinate();
SoCoordinate259->setPoint(new float[]{0.1086,0.0,0.0762,0.1195,0.0079,0.1433}, 6);
SoLineSet257->setCoord(*SoCoordinate259);

SoShape256->setGeometry(*SoLineSet257);

SoHAnimSegment244->addChild(*SoShape256);

SoHAnimSite* SoHAnimSite260 = new SoHAnimSite();
SoHAnimSite260->setDEF(QString("hanim_l_forefoot_tip"));
SoHAnimSite260->X3DNode::setName(QString("l_forefoot_tip"));
SoHAnimSite260->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoTouchSensor* SoTouchSensor261 = new SoTouchSensor();
SoTouchSensor261->setDescription(QString("HAnimSite l_forefoot_tip"));
SoHAnimSite260->addChild(*SoTouchSensor261);

SoShape* SoShape262 = new SoShape();
SoShape262->setUSE(QString("HAnimSiteShape"));
SoHAnimSite260->addChild(*SoShape262);

SoHAnimSegment244->addChild(*SoHAnimSite260);

SoHAnimSite* SoHAnimSite263 = new SoHAnimSite();
SoHAnimSite263->setDEF(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimSite263->X3DNode::setName(QString("l_metatarsal_pha5_pt"));
SoHAnimSite263->setTranslation(new float[]{0.1825,0.007,0.0928});
SoTouchSensor* SoTouchSensor264 = new SoTouchSensor();
SoTouchSensor264->setDescription(QString("HAnimSite l_metatarsal_pha5"));
SoHAnimSite263->addChild(*SoTouchSensor264);

SoShape* SoShape265 = new SoShape();
SoShape265->setUSE(QString("HAnimSiteShape"));
SoHAnimSite263->addChild(*SoShape265);

SoHAnimSegment244->addChild(*SoHAnimSite263);

SoHAnimSite* SoHAnimSite266 = new SoHAnimSite();
SoHAnimSite266->setDEF(QString("hanim_l_digit2_pt"));
SoHAnimSite266->X3DNode::setName(QString("l_digit2_pt"));
SoHAnimSite266->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoTouchSensor* SoTouchSensor267 = new SoTouchSensor();
SoTouchSensor267->setDescription(QString("HAnimSite l_digit2"));
SoHAnimSite266->addChild(*SoTouchSensor267);

SoShape* SoShape268 = new SoShape();
SoShape268->setUSE(QString("HAnimSiteShape"));
SoHAnimSite266->addChild(*SoShape268);

SoHAnimSegment244->addChild(*SoHAnimSite266);

SoHAnimJoint243->addChildren(*SoHAnimSegment244);

SoHAnimJoint227->addChildren(*SoHAnimJoint243);

SoHAnimJoint218->addChildren(*SoHAnimJoint227);

SoHAnimJoint181->addChildren(*SoHAnimJoint218);

SoHAnimJoint172->addChildren(*SoHAnimJoint181);

SoHAnimJoint142->addChildren(*SoHAnimJoint172);

SoHAnimJoint62->addChildren(*SoHAnimJoint142);

SoHAnimJoint* SoHAnimJoint269 = new SoHAnimJoint();
SoHAnimJoint269->setDEF(QString("hanim_r_hip"));
SoHAnimJoint269->X3DNode::setName(QString("r_hip"));
SoHAnimJoint269->setCenter(new float[]{-0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment270 = new SoHAnimSegment();
SoHAnimSegment270->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment270->X3DNode::setName(QString("r_thigh"));
SoTouchSensor* SoTouchSensor271 = new SoTouchSensor();
SoTouchSensor271->setDescription(QString("HAnimJoint r_hip, HAnimSegment r_thigh"));
SoHAnimSegment270->addChild(*SoTouchSensor271);

SoTransform* SoTransform272 = new SoTransform();
SoTransform272->setTranslation(new float[]{-0.0961,0.9124,-0.0001});
SoShape* SoShape273 = new SoShape();
SoShape273->setUSE(QString("HAnimJointShape"));
SoTransform272->addChild(*SoShape273);

SoHAnimSegment270->addChild(*SoTransform272);

SoShape* SoShape274 = new SoShape();
SoLineSet* SoLineSet275 = new SoLineSet();
SoLineSet275->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA276 = new SoColorRGBA();
SoColorRGBA276->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet275->addChild(*SoColorRGBA276);

SoCoordinate* SoCoordinate277 = new SoCoordinate();
SoCoordinate277->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308}, 6);
SoLineSet275->setCoord(*SoCoordinate277);

SoShape274->setGeometry(*SoLineSet275);

SoHAnimSegment270->addChild(*SoShape274);

SoShape* SoShape278 = new SoShape();
SoLineSet* SoLineSet279 = new SoLineSet();
SoLineSet279->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA280 = new SoColorRGBA();
SoColorRGBA280->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet279->addChild(*SoColorRGBA280);

SoCoordinate* SoCoordinate281 = new SoCoordinate();
SoCoordinate281->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326}, 6);
SoLineSet279->setCoord(*SoCoordinate281);

SoShape278->setGeometry(*SoLineSet279);

SoHAnimSegment270->addChild(*SoShape278);

SoShape* SoShape282 = new SoShape();
SoLineSet* SoLineSet283 = new SoLineSet();
SoLineSet283->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA284 = new SoColorRGBA();
SoColorRGBA284->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet283->addChild(*SoColorRGBA284);

SoCoordinate* SoCoordinate285 = new SoCoordinate();
SoCoordinate285->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031}, 6);
SoLineSet283->setCoord(*SoCoordinate285);

SoShape282->setGeometry(*SoLineSet283);

SoHAnimSegment270->addChild(*SoShape282);

SoShape* SoShape286 = new SoShape();
SoLineSet* SoLineSet287 = new SoLineSet();
SoLineSet287->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA288 = new SoColorRGBA();
SoColorRGBA288->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet287->addChild(*SoColorRGBA288);

SoCoordinate* SoCoordinate289 = new SoCoordinate();
SoCoordinate289->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289}, 6);
SoLineSet287->setCoord(*SoCoordinate289);

SoShape286->setGeometry(*SoLineSet287);

SoHAnimSegment270->addChild(*SoShape286);

SoHAnimSite* SoHAnimSite290 = new SoHAnimSite();
SoHAnimSite290->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite290->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite290->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoTouchSensor* SoTouchSensor291 = new SoTouchSensor();
SoTouchSensor291->setDescription(QString("HAnimSite r_knee_crease"));
SoHAnimSite290->addChild(*SoTouchSensor291);

SoShape* SoShape292 = new SoShape();
SoShape292->setUSE(QString("HAnimSiteShape"));
SoHAnimSite290->addChild(*SoShape292);

SoHAnimSegment270->addChild(*SoHAnimSite290);

SoHAnimSite* SoHAnimSite293 = new SoHAnimSite();
SoHAnimSite293->setDEF(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimSite293->X3DNode::setName(QString("r_femoral_lateral_epicn_pt"));
SoHAnimSite293->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoTouchSensor* SoTouchSensor294 = new SoTouchSensor();
SoTouchSensor294->setDescription(QString("HAnimSite r_femoral_lateral_epicn"));
SoHAnimSite293->addChild(*SoTouchSensor294);

SoShape* SoShape295 = new SoShape();
SoShape295->setUSE(QString("HAnimSiteShape"));
SoHAnimSite293->addChild(*SoShape295);

SoHAnimSegment270->addChild(*SoHAnimSite293);

SoHAnimSite* SoHAnimSite296 = new SoHAnimSite();
SoHAnimSite296->setDEF(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimSite296->X3DNode::setName(QString("r_femoral_medial_epicn_pt"));
SoHAnimSite296->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoTouchSensor* SoTouchSensor297 = new SoTouchSensor();
SoTouchSensor297->setDescription(QString("HAnimSite r_femoral_medial_epicn"));
SoHAnimSite296->addChild(*SoTouchSensor297);

SoShape* SoShape298 = new SoShape();
SoShape298->setUSE(QString("HAnimSiteShape"));
SoHAnimSite296->addChild(*SoShape298);

SoHAnimSegment270->addChild(*SoHAnimSite296);

SoHAnimJoint269->addChildren(*SoHAnimSegment270);

SoHAnimJoint* SoHAnimJoint299 = new SoHAnimJoint();
SoHAnimJoint299->setDEF(QString("hanim_r_knee"));
SoHAnimJoint299->X3DNode::setName(QString("r_knee"));
SoHAnimJoint299->setCenter(new float[]{-0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment300 = new SoHAnimSegment();
SoHAnimSegment300->setDEF(QString("hanim_r_calf"));
SoHAnimSegment300->X3DNode::setName(QString("r_calf"));
SoTouchSensor* SoTouchSensor301 = new SoTouchSensor();
SoTouchSensor301->setDescription(QString("HAnimJoint r_knee, HAnimSegment r_calf"));
SoHAnimSegment300->addChild(*SoTouchSensor301);

SoTransform* SoTransform302 = new SoTransform();
SoTransform302->setTranslation(new float[]{-0.104,0.4867,0.0308});
SoShape* SoShape303 = new SoShape();
SoShape303->setUSE(QString("HAnimJointShape"));
SoTransform302->addChild(*SoShape303);

SoHAnimSegment300->addChild(*SoTransform302);

SoShape* SoShape304 = new SoShape();
SoLineSet* SoLineSet305 = new SoLineSet();
SoLineSet305->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA306 = new SoColorRGBA();
SoColorRGBA306->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet305->addChild(*SoColorRGBA306);

SoCoordinate* SoCoordinate307 = new SoCoordinate();
SoCoordinate307->setPoint(new float[]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736}, 6);
SoLineSet305->setCoord(*SoCoordinate307);

SoShape304->setGeometry(*SoLineSet305);

SoHAnimSegment300->addChild(*SoShape304);

SoHAnimJoint299->addChildren(*SoHAnimSegment300);

SoHAnimJoint* SoHAnimJoint308 = new SoHAnimJoint();
SoHAnimJoint308->setDEF(QString("hanim_r_ankle"));
SoHAnimJoint308->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint308->setCenter(new float[]{-0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment309 = new SoHAnimSegment();
SoHAnimSegment309->setDEF(QString("hanim_r_hindfoot"));
SoHAnimSegment309->X3DNode::setName(QString("r_hindfoot"));
SoTouchSensor* SoTouchSensor310 = new SoTouchSensor();
SoTouchSensor310->setDescription(QString("HAnimJoint r_ankle, HAnimSegment r_hindfoot"));
SoHAnimSegment309->addChild(*SoTouchSensor310);

SoTransform* SoTransform311 = new SoTransform();
SoTransform311->setTranslation(new float[]{-0.1101,0.0656,-0.0736});
SoShape* SoShape312 = new SoShape();
SoShape312->setUSE(QString("HAnimJointShape"));
SoTransform311->addChild(*SoShape312);

SoHAnimSegment309->addChild(*SoTransform311);

SoShape* SoShape313 = new SoShape();
SoLineSet* SoLineSet314 = new SoLineSet();
SoLineSet314->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA315 = new SoColorRGBA();
SoColorRGBA315->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet314->addChild(*SoColorRGBA315);

SoCoordinate* SoCoordinate316 = new SoCoordinate();
SoCoordinate316->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368}, 6);
SoLineSet314->setCoord(*SoCoordinate316);

SoShape313->setGeometry(*SoLineSet314);

SoHAnimSegment309->addChild(*SoShape313);

SoShape* SoShape317 = new SoShape();
SoLineSet* SoLineSet318 = new SoLineSet();
SoLineSet318->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA319 = new SoColorRGBA();
SoColorRGBA319->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet318->addChild(*SoColorRGBA319);

SoCoordinate* SoCoordinate320 = new SoCoordinate();
SoCoordinate320->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075}, 6);
SoLineSet318->setCoord(*SoCoordinate320);

SoShape317->setGeometry(*SoLineSet318);

SoHAnimSegment309->addChild(*SoShape317);

SoShape* SoShape321 = new SoShape();
SoLineSet* SoLineSet322 = new SoLineSet();
SoLineSet322->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA323 = new SoColorRGBA();
SoColorRGBA323->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet322->addChild(*SoColorRGBA323);

SoCoordinate* SoCoordinate324 = new SoCoordinate();
SoCoordinate324->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928}, 6);
SoLineSet322->setCoord(*SoCoordinate324);

SoShape321->setGeometry(*SoLineSet322);

SoHAnimSegment309->addChild(*SoShape321);

SoShape* SoShape325 = new SoShape();
SoLineSet* SoLineSet326 = new SoLineSet();
SoLineSet326->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA327 = new SoColorRGBA();
SoColorRGBA327->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet326->addChild(*SoColorRGBA327);

SoCoordinate* SoCoordinate328 = new SoCoordinate();
SoCoordinate328->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002}, 6);
SoLineSet326->setCoord(*SoCoordinate328);

SoShape325->setGeometry(*SoLineSet326);

SoHAnimSegment309->addChild(*SoShape325);

SoShape* SoShape329 = new SoShape();
SoLineSet* SoLineSet330 = new SoLineSet();
SoLineSet330->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA331 = new SoColorRGBA();
SoColorRGBA331->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet330->addChild(*SoColorRGBA331);

SoCoordinate* SoCoordinate332 = new SoCoordinate();
SoCoordinate332->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221}, 6);
SoLineSet330->setCoord(*SoCoordinate332);

SoShape329->setGeometry(*SoLineSet330);

SoHAnimSegment309->addChild(*SoShape329);

SoHAnimSite* SoHAnimSite333 = new SoHAnimSite();
SoHAnimSite333->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite333->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite333->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoTouchSensor* SoTouchSensor334 = new SoTouchSensor();
SoTouchSensor334->setDescription(QString("HAnimSite r_lateral_malleolus"));
SoHAnimSite333->addChild(*SoTouchSensor334);

SoShape* SoShape335 = new SoShape();
SoShape335->setUSE(QString("HAnimSiteShape"));
SoHAnimSite333->addChild(*SoShape335);

SoHAnimSegment309->addChild(*SoHAnimSite333);

SoHAnimSite* SoHAnimSite336 = new SoHAnimSite();
SoHAnimSite336->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite336->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite336->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoTouchSensor* SoTouchSensor337 = new SoTouchSensor();
SoTouchSensor337->setDescription(QString("HAnimSite r_medial_malleolus"));
SoHAnimSite336->addChild(*SoTouchSensor337);

SoShape* SoShape338 = new SoShape();
SoShape338->setUSE(QString("HAnimSiteShape"));
SoHAnimSite336->addChild(*SoShape338);

SoHAnimSegment309->addChild(*SoHAnimSite336);

SoHAnimSite* SoHAnimSite339 = new SoHAnimSite();
SoHAnimSite339->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite339->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite339->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoTouchSensor* SoTouchSensor340 = new SoTouchSensor();
SoTouchSensor340->setDescription(QString("HAnimSite r_sphyrion"));
SoHAnimSite339->addChild(*SoTouchSensor340);

SoShape* SoShape341 = new SoShape();
SoShape341->setUSE(QString("HAnimSiteShape"));
SoHAnimSite339->addChild(*SoShape341);

SoHAnimSegment309->addChild(*SoHAnimSite339);

SoHAnimSite* SoHAnimSite342 = new SoHAnimSite();
SoHAnimSite342->setDEF(QString("hanim_r_calcaneous_post_pt"));
SoHAnimSite342->X3DNode::setName(QString("r_calcaneous_post_pt"));
SoHAnimSite342->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoTouchSensor* SoTouchSensor343 = new SoTouchSensor();
SoTouchSensor343->setDescription(QString("HAnimSite r_calcaneous_post"));
SoHAnimSite342->addChild(*SoTouchSensor343);

SoShape* SoShape344 = new SoShape();
SoShape344->setUSE(QString("HAnimSiteShape"));
SoHAnimSite342->addChild(*SoShape344);

SoHAnimSegment309->addChild(*SoHAnimSite342);

SoHAnimJoint308->addChildren(*SoHAnimSegment309);

SoHAnimJoint* SoHAnimJoint345 = new SoHAnimJoint();
SoHAnimJoint345->setDEF(QString("hanim_r_subtalar"));
SoHAnimJoint345->X3DNode::setName(QString("r_subtalar"));
SoHAnimJoint345->setCenter(new float[]{-0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment346 = new SoHAnimSegment();
SoHAnimSegment346->setDEF(QString("hanim_r_midproximal"));
SoHAnimSegment346->X3DNode::setName(QString("r_midproximal"));
SoTouchSensor* SoTouchSensor347 = new SoTouchSensor();
SoTouchSensor347->setDescription(QString("HAnimJoint r_subtalar, HAnimSegment r_midproximal"));
SoHAnimSegment346->addChild(*SoTouchSensor347);

SoTransform* SoTransform348 = new SoTransform();
SoTransform348->setTranslation(new float[]{-0.1086,0.0001,-0.0368});
SoShape* SoShape349 = new SoShape();
SoShape349->setUSE(QString("HAnimJointShape"));
SoTransform348->addChild(*SoShape349);

SoHAnimSegment346->addChild(*SoTransform348);

SoShape* SoShape350 = new SoShape();
SoLineSet* SoLineSet351 = new SoLineSet();
SoLineSet351->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA352 = new SoColorRGBA();
SoColorRGBA352->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet351->addChild(*SoColorRGBA352);

SoCoordinate* SoCoordinate353 = new SoCoordinate();
SoCoordinate353->setPoint(new float[]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368}, 6);
SoLineSet351->setCoord(*SoCoordinate353);

SoShape350->setGeometry(*SoLineSet351);

SoHAnimSegment346->addChild(*SoShape350);

SoHAnimJoint345->addChildren(*SoHAnimSegment346);

SoHAnimJoint* SoHAnimJoint354 = new SoHAnimJoint();
SoHAnimJoint354->setDEF(QString("hanim_r_midtarsal"));
SoHAnimJoint354->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint354->setCenter(new float[]{-0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment355 = new SoHAnimSegment();
SoHAnimSegment355->setDEF(QString("hanim_r_middistal"));
SoHAnimSegment355->X3DNode::setName(QString("r_middistal"));
SoTouchSensor* SoTouchSensor356 = new SoTouchSensor();
SoTouchSensor356->setDescription(QString("HAnimJoint r_midtarsal, HAnimSegment r_middistal"));
SoHAnimSegment355->addChild(*SoTouchSensor356);

SoTransform* SoTransform357 = new SoTransform();
SoTransform357->setTranslation(new float[]{-0.1086,0.0001,0.0368});
SoShape* SoShape358 = new SoShape();
SoShape358->setUSE(QString("HAnimJointShape"));
SoTransform357->addChild(*SoShape358);

SoHAnimSegment355->addChild(*SoTransform357);

SoShape* SoShape359 = new SoShape();
SoLineSet* SoLineSet360 = new SoLineSet();
SoLineSet360->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA361 = new SoColorRGBA();
SoColorRGBA361->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet360->addChild(*SoColorRGBA361);

SoCoordinate* SoCoordinate362 = new SoCoordinate();
SoCoordinate362->setPoint(new float[]{-0.1086,0.0001,0.0368,-0.1086,0.0,0.0762}, 6);
SoLineSet360->setCoord(*SoCoordinate362);

SoShape359->setGeometry(*SoLineSet360);

SoHAnimSegment355->addChild(*SoShape359);

SoShape* SoShape363 = new SoShape();
SoLineSet* SoLineSet364 = new SoLineSet();
SoLineSet364->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA365 = new SoColorRGBA();
SoColorRGBA365->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet364->addChild(*SoColorRGBA365);

SoCoordinate* SoCoordinate366 = new SoCoordinate();
SoCoordinate366->setPoint(new float[]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127}, 6);
SoLineSet364->setCoord(*SoCoordinate366);

SoShape363->setGeometry(*SoLineSet364);

SoHAnimSegment355->addChild(*SoShape363);

SoHAnimSite* SoHAnimSite367 = new SoHAnimSite();
SoHAnimSite367->setDEF(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimSite367->X3DNode::setName(QString("r_metatarsal_pha1_pt"));
SoHAnimSite367->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoTouchSensor* SoTouchSensor368 = new SoTouchSensor();
SoTouchSensor368->setDescription(QString("HAnimSite r_metatarsal_pha1"));
SoHAnimSite367->addChild(*SoTouchSensor368);

SoShape* SoShape369 = new SoShape();
SoShape369->setUSE(QString("HAnimSiteShape"));
SoHAnimSite367->addChild(*SoShape369);

SoHAnimSegment355->addChild(*SoHAnimSite367);

SoHAnimJoint354->addChildren(*SoHAnimSegment355);

SoHAnimJoint* SoHAnimJoint370 = new SoHAnimJoint();
SoHAnimJoint370->setDEF(QString("hanim_r_metatarsal"));
SoHAnimJoint370->X3DNode::setName(QString("r_metatarsal"));
SoHAnimJoint370->setCenter(new float[]{-0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment371 = new SoHAnimSegment();
SoHAnimSegment371->setDEF(QString("hanim_r_forefoot"));
SoHAnimSegment371->X3DNode::setName(QString("r_forefoot"));
SoTouchSensor* SoTouchSensor372 = new SoTouchSensor();
SoTouchSensor372->setDescription(QString("HAnimJoint r_metatarsal, HAnimSegment r_forefoot"));
SoHAnimSegment371->addChild(*SoTouchSensor372);

SoTransform* SoTransform373 = new SoTransform();
SoTransform373->setTranslation(new float[]{-0.1086,0.0,0.0762});
SoShape* SoShape374 = new SoShape();
SoShape374->setUSE(QString("HAnimJointShape"));
SoTransform373->addChild(*SoShape374);

SoHAnimSegment371->addChild(*SoTransform373);

SoShape* SoShape375 = new SoShape();
SoLineSet* SoLineSet376 = new SoLineSet();
SoLineSet376->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA377 = new SoColorRGBA();
SoColorRGBA377->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet376->addChild(*SoColorRGBA377);

SoCoordinate* SoCoordinate378 = new SoCoordinate();
SoCoordinate378->setPoint(new float[]{-0.1086,0.0,0.0762,-0.1043,0.0227,0.145}, 6);
SoLineSet376->setCoord(*SoCoordinate378);

SoShape375->setGeometry(*SoLineSet376);

SoHAnimSegment371->addChild(*SoShape375);

SoShape* SoShape379 = new SoShape();
SoLineSet* SoLineSet380 = new SoLineSet();
SoLineSet380->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA381 = new SoColorRGBA();
SoColorRGBA381->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet380->addChild(*SoColorRGBA381);

SoCoordinate* SoCoordinate382 = new SoCoordinate();
SoCoordinate382->setPoint(new float[]{-0.1086,0.0,0.0762,-0.1523,0.0166,0.0895}, 6);
SoLineSet380->setCoord(*SoCoordinate382);

SoShape379->setGeometry(*SoLineSet380);

SoHAnimSegment371->addChild(*SoShape379);

SoShape* SoShape383 = new SoShape();
SoLineSet* SoLineSet384 = new SoLineSet();
SoLineSet384->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA385 = new SoColorRGBA();
SoColorRGBA385->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet384->addChild(*SoColorRGBA385);

SoCoordinate* SoCoordinate386 = new SoCoordinate();
SoCoordinate386->setPoint(new float[]{-0.1086,0.0,0.0762,-0.0883,0.0134,0.1383}, 6);
SoLineSet384->setCoord(*SoCoordinate386);

SoShape383->setGeometry(*SoLineSet384);

SoHAnimSegment371->addChild(*SoShape383);

SoHAnimSite* SoHAnimSite387 = new SoHAnimSite();
SoHAnimSite387->setDEF(QString("hanim_r_forefoot_tip"));
SoHAnimSite387->X3DNode::setName(QString("r_forefoot_tip"));
SoHAnimSite387->setTranslation(new float[]{-0.1043,0.0227,0.145});
SoTouchSensor* SoTouchSensor388 = new SoTouchSensor();
SoTouchSensor388->setDescription(QString("HAnimSite r_forefoot_tip"));
SoHAnimSite387->addChild(*SoTouchSensor388);

SoShape* SoShape389 = new SoShape();
SoShape389->setUSE(QString("HAnimSiteShape"));
SoHAnimSite387->addChild(*SoShape389);

SoHAnimSegment371->addChild(*SoHAnimSite387);

SoHAnimSite* SoHAnimSite390 = new SoHAnimSite();
SoHAnimSite390->setDEF(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimSite390->X3DNode::setName(QString("r_metatarsal_pha5_pt"));
SoHAnimSite390->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoTouchSensor* SoTouchSensor391 = new SoTouchSensor();
SoTouchSensor391->setDescription(QString("HAnimSite r_metatarsal_pha5"));
SoHAnimSite390->addChild(*SoTouchSensor391);

SoShape* SoShape392 = new SoShape();
SoShape392->setUSE(QString("HAnimSiteShape"));
SoHAnimSite390->addChild(*SoShape392);

SoHAnimSegment371->addChild(*SoHAnimSite390);

SoHAnimSite* SoHAnimSite393 = new SoHAnimSite();
SoHAnimSite393->setDEF(QString("hanim_r_digit2_pt"));
SoHAnimSite393->X3DNode::setName(QString("r_digit2_pt"));
SoHAnimSite393->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoTouchSensor* SoTouchSensor394 = new SoTouchSensor();
SoTouchSensor394->setDescription(QString("HAnimSite r_digit2"));
SoHAnimSite393->addChild(*SoTouchSensor394);

SoShape* SoShape395 = new SoShape();
SoShape395->setUSE(QString("HAnimSiteShape"));
SoHAnimSite393->addChild(*SoShape395);

SoHAnimSegment371->addChild(*SoHAnimSite393);

SoHAnimJoint370->addChildren(*SoHAnimSegment371);

SoHAnimJoint354->addChildren(*SoHAnimJoint370);

SoHAnimJoint345->addChildren(*SoHAnimJoint354);

SoHAnimJoint308->addChildren(*SoHAnimJoint345);

SoHAnimJoint299->addChildren(*SoHAnimJoint308);

SoHAnimJoint269->addChildren(*SoHAnimJoint299);

SoHAnimJoint62->addChildren(*SoHAnimJoint269);

SoHAnimJoint46->addChildren(*SoHAnimJoint62);

SoHAnimJoint* SoHAnimJoint396 = new SoHAnimJoint();
SoHAnimJoint396->setDEF(QString("hanim_vl5"));
SoHAnimJoint396->X3DNode::setName(QString("vl5"));
SoHAnimJoint396->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimSegment* SoHAnimSegment397 = new SoHAnimSegment();
SoHAnimSegment397->setDEF(QString("hanim_l5"));
SoHAnimSegment397->X3DNode::setName(QString("l5"));
SoTouchSensor* SoTouchSensor398 = new SoTouchSensor();
SoTouchSensor398->setDescription(QString("HAnimJoint vl5, HAnimSegment l5"));
SoHAnimSegment397->addChild(*SoTouchSensor398);

SoTransform* SoTransform399 = new SoTransform();
SoTransform399->setTranslation(new float[]{0.0028,1.0568,-0.0776});
SoShape* SoShape400 = new SoShape();
SoShape400->setUSE(QString("HAnimJointShape"));
SoTransform399->addChild(*SoShape400);

SoHAnimSegment397->addChild(*SoTransform399);

SoShape* SoShape401 = new SoShape();
SoLineSet* SoLineSet402 = new SoLineSet();
SoLineSet402->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA403 = new SoColorRGBA();
SoColorRGBA403->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet402->addChild(*SoColorRGBA403);

SoCoordinate* SoCoordinate404 = new SoCoordinate();
SoCoordinate404->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
SoLineSet402->setCoord(*SoCoordinate404);

SoShape401->setGeometry(*SoLineSet402);

SoHAnimSegment397->addChild(*SoShape401);

SoShape* SoShape405 = new SoShape();
SoLineSet* SoLineSet406 = new SoLineSet();
SoLineSet406->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA407 = new SoColorRGBA();
SoColorRGBA407->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet406->addChild(*SoColorRGBA407);

SoCoordinate* SoCoordinate408 = new SoCoordinate();
SoCoordinate408->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0,1.0915,-0.1091}, 6);
SoLineSet406->setCoord(*SoCoordinate408);

SoShape405->setGeometry(*SoLineSet406);

SoHAnimSegment397->addChild(*SoShape405);

SoShape* SoShape409 = new SoShape();
SoLineSet* SoLineSet410 = new SoLineSet();
SoLineSet410->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA411 = new SoColorRGBA();
SoColorRGBA411->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet410->addChild(*SoColorRGBA411);

SoCoordinate* SoCoordinate412 = new SoCoordinate();
SoCoordinate412->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017}, 6);
SoLineSet410->setCoord(*SoCoordinate412);

SoShape409->setGeometry(*SoLineSet410);

SoHAnimSegment397->addChild(*SoShape409);

SoHAnimSite* SoHAnimSite413 = new SoHAnimSite();
SoHAnimSite413->setDEF(QString("hanim_waist_preferred_post_pt"));
SoHAnimSite413->X3DNode::setName(QString("waist_preferred_post_pt"));
SoHAnimSite413->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoTouchSensor* SoTouchSensor414 = new SoTouchSensor();
SoTouchSensor414->setDescription(QString("HAnimSite waist_preferred_post"));
SoHAnimSite413->addChild(*SoTouchSensor414);

SoShape* SoShape415 = new SoShape();
SoShape415->setUSE(QString("HAnimSiteShape"));
SoHAnimSite413->addChild(*SoShape415);

SoHAnimSegment397->addChild(*SoHAnimSite413);

SoHAnimSite* SoHAnimSite416 = new SoHAnimSite();
SoHAnimSite416->setDEF(QString("hanim_navel_pt"));
SoHAnimSite416->X3DNode::setName(QString("navel_pt"));
SoHAnimSite416->setTranslation(new float[]{0.0069,1.0966,0.1017});
SoTouchSensor* SoTouchSensor417 = new SoTouchSensor();
SoTouchSensor417->setDescription(QString("HAnimSite navel"));
SoHAnimSite416->addChild(*SoTouchSensor417);

SoShape* SoShape418 = new SoShape();
SoShape418->setUSE(QString("HAnimSiteShape"));
SoHAnimSite416->addChild(*SoShape418);

SoHAnimSegment397->addChild(*SoHAnimSite416);

SoHAnimJoint396->addChildren(*SoHAnimSegment397);

SoHAnimJoint* SoHAnimJoint419 = new SoHAnimJoint();
SoHAnimJoint419->setDEF(QString("hanim_vl4"));
SoHAnimJoint419->X3DNode::setName(QString("vl4"));
SoHAnimJoint419->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimSegment* SoHAnimSegment420 = new SoHAnimSegment();
SoHAnimSegment420->setDEF(QString("hanim_l4"));
SoHAnimSegment420->X3DNode::setName(QString("l4"));
SoTouchSensor* SoTouchSensor421 = new SoTouchSensor();
SoTouchSensor421->setDescription(QString("HAnimJoint vl4, HAnimSegment l4"));
SoHAnimSegment420->addChild(*SoTouchSensor421);

SoTransform* SoTransform422 = new SoTransform();
SoTransform422->setTranslation(new float[]{0.0035,1.0925,-0.0787});
SoShape* SoShape423 = new SoShape();
SoShape423->setUSE(QString("HAnimJointShape"));
SoTransform422->addChild(*SoShape423);

SoHAnimSegment420->addChild(*SoTransform422);

SoShape* SoShape424 = new SoShape();
SoLineSet* SoLineSet425 = new SoLineSet();
SoLineSet425->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA426 = new SoColorRGBA();
SoColorRGBA426->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet425->addChild(*SoColorRGBA426);

SoCoordinate* SoCoordinate427 = new SoCoordinate();
SoCoordinate427->setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
SoLineSet425->setCoord(*SoCoordinate427);

SoShape424->setGeometry(*SoLineSet425);

SoHAnimSegment420->addChild(*SoShape424);

SoHAnimJoint419->addChildren(*SoHAnimSegment420);

SoHAnimJoint* SoHAnimJoint428 = new SoHAnimJoint();
SoHAnimJoint428->setDEF(QString("hanim_vl3"));
SoHAnimJoint428->X3DNode::setName(QString("vl3"));
SoHAnimJoint428->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimSegment* SoHAnimSegment429 = new SoHAnimSegment();
SoHAnimSegment429->setDEF(QString("hanim_l3"));
SoHAnimSegment429->X3DNode::setName(QString("l3"));
SoTouchSensor* SoTouchSensor430 = new SoTouchSensor();
SoTouchSensor430->setDescription(QString("HAnimJoint vl3, HAnimSegment l3"));
SoHAnimSegment429->addChild(*SoTouchSensor430);

SoTransform* SoTransform431 = new SoTransform();
SoTransform431->setTranslation(new float[]{0.0041,1.1276,-0.0796});
SoShape* SoShape432 = new SoShape();
SoShape432->setUSE(QString("HAnimJointShape"));
SoTransform431->addChild(*SoShape432);

SoHAnimSegment429->addChild(*SoTransform431);

SoShape* SoShape433 = new SoShape();
SoLineSet* SoLineSet434 = new SoLineSet();
SoLineSet434->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA435 = new SoColorRGBA();
SoColorRGBA435->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet434->addChild(*SoColorRGBA435);

SoCoordinate* SoCoordinate436 = new SoCoordinate();
SoCoordinate436->setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
SoLineSet434->setCoord(*SoCoordinate436);

SoShape433->setGeometry(*SoLineSet434);

SoHAnimSegment429->addChild(*SoShape433);

SoHAnimJoint428->addChildren(*SoHAnimSegment429);

SoHAnimJoint* SoHAnimJoint437 = new SoHAnimJoint();
SoHAnimJoint437->setDEF(QString("hanim_vl2"));
SoHAnimJoint437->X3DNode::setName(QString("vl2"));
SoHAnimJoint437->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimSegment* SoHAnimSegment438 = new SoHAnimSegment();
SoHAnimSegment438->setDEF(QString("hanim_l2"));
SoHAnimSegment438->X3DNode::setName(QString("l2"));
SoTouchSensor* SoTouchSensor439 = new SoTouchSensor();
SoTouchSensor439->setDescription(QString("HAnimJoint vl2, HAnimSegment l2"));
SoHAnimSegment438->addChild(*SoTouchSensor439);

SoTransform* SoTransform440 = new SoTransform();
SoTransform440->setTranslation(new float[]{0.0045,1.1546,-0.08});
SoShape* SoShape441 = new SoShape();
SoShape441->setUSE(QString("HAnimJointShape"));
SoTransform440->addChild(*SoShape441);

SoHAnimSegment438->addChild(*SoTransform440);

SoShape* SoShape442 = new SoShape();
SoLineSet* SoLineSet443 = new SoLineSet();
SoLineSet443->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA444 = new SoColorRGBA();
SoColorRGBA444->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet443->addChild(*SoColorRGBA444);

SoCoordinate* SoCoordinate445 = new SoCoordinate();
SoCoordinate445->setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
SoLineSet443->setCoord(*SoCoordinate445);

SoShape442->setGeometry(*SoLineSet443);

SoHAnimSegment438->addChild(*SoShape442);

SoShape* SoShape446 = new SoShape();
SoLineSet* SoLineSet447 = new SoLineSet();
SoLineSet447->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA448 = new SoColorRGBA();
SoColorRGBA448->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet447->addChild(*SoColorRGBA448);

SoCoordinate* SoCoordinate449 = new SoCoordinate();
SoCoordinate449->setPoint(new float[]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016}, 6);
SoLineSet447->setCoord(*SoCoordinate449);

SoShape446->setGeometry(*SoLineSet447);

SoHAnimSegment438->addChild(*SoShape446);

SoShape* SoShape450 = new SoShape();
SoLineSet* SoLineSet451 = new SoLineSet();
SoLineSet451->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA452 = new SoColorRGBA();
SoColorRGBA452->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet451->addChild(*SoColorRGBA452);

SoCoordinate* SoCoordinate453 = new SoCoordinate();
SoCoordinate453->setPoint(new float[]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992}, 6);
SoLineSet451->setCoord(*SoCoordinate453);

SoShape450->setGeometry(*SoLineSet451);

SoHAnimSegment438->addChild(*SoShape450);

SoShape* SoShape454 = new SoShape();
SoLineSet* SoLineSet455 = new SoLineSet();
SoLineSet455->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA456 = new SoColorRGBA();
SoColorRGBA456->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet455->addChild(*SoColorRGBA456);

SoCoordinate* SoCoordinate457 = new SoCoordinate();
SoCoordinate457->setPoint(new float[]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113}, 6);
SoLineSet455->setCoord(*SoCoordinate457);

SoShape454->setGeometry(*SoLineSet455);

SoHAnimSegment438->addChild(*SoShape454);

SoHAnimSite* SoHAnimSite458 = new SoHAnimSite();
SoHAnimSite458->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite458->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite458->setTranslation(new float[]{-0.0711,1.1941,0.1016});
SoTouchSensor* SoTouchSensor459 = new SoTouchSensor();
SoTouchSensor459->setDescription(QString("HAnimSite r_rib10"));
SoHAnimSite458->addChild(*SoTouchSensor459);

SoShape* SoShape460 = new SoShape();
SoShape460->setUSE(QString("HAnimSiteShape"));
SoHAnimSite458->addChild(*SoShape460);

SoHAnimSegment438->addChild(*SoHAnimSite458);

SoHAnimSite* SoHAnimSite461 = new SoHAnimSite();
SoHAnimSite461->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite461->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite461->setTranslation(new float[]{0.0871,1.1925,0.0992});
SoTouchSensor* SoTouchSensor462 = new SoTouchSensor();
SoTouchSensor462->setDescription(QString("HAnimSite l_rib10"));
SoHAnimSite461->addChild(*SoTouchSensor462);

SoShape* SoShape463 = new SoShape();
SoShape463->setUSE(QString("HAnimSiteShape"));
SoHAnimSite461->addChild(*SoShape463);

SoHAnimSegment438->addChild(*SoHAnimSite461);

SoHAnimSite* SoHAnimSite464 = new SoHAnimSite();
SoHAnimSite464->setDEF(QString("hanim_rib10_midspine_pt"));
SoHAnimSite464->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite464->setTranslation(new float[]{0.0049,1.1908,-0.1113});
SoTouchSensor* SoTouchSensor465 = new SoTouchSensor();
SoTouchSensor465->setDescription(QString("HAnimSite rib10_midspine"));
SoHAnimSite464->addChild(*SoTouchSensor465);

SoShape* SoShape466 = new SoShape();
SoShape466->setUSE(QString("HAnimSiteShape"));
SoHAnimSite464->addChild(*SoShape466);

SoHAnimSegment438->addChild(*SoHAnimSite464);

SoHAnimJoint437->addChildren(*SoHAnimSegment438);

SoHAnimJoint* SoHAnimJoint467 = new SoHAnimJoint();
SoHAnimJoint467->setDEF(QString("hanim_vl1"));
SoHAnimJoint467->X3DNode::setName(QString("vl1"));
SoHAnimJoint467->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimSegment* SoHAnimSegment468 = new SoHAnimSegment();
SoHAnimSegment468->setDEF(QString("hanim_l1"));
SoHAnimSegment468->X3DNode::setName(QString("l1"));
SoTouchSensor* SoTouchSensor469 = new SoTouchSensor();
SoTouchSensor469->setDescription(QString("HAnimJoint vl1, HAnimSegment l1"));
SoHAnimSegment468->addChild(*SoTouchSensor469);

SoTransform* SoTransform470 = new SoTransform();
SoTransform470->setTranslation(new float[]{0.0048,1.1912,-0.0805});
SoShape* SoShape471 = new SoShape();
SoShape471->setUSE(QString("HAnimJointShape"));
SoTransform470->addChild(*SoShape471);

SoHAnimSegment468->addChild(*SoTransform470);

SoShape* SoShape472 = new SoShape();
SoLineSet* SoLineSet473 = new SoLineSet();
SoLineSet473->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA474 = new SoColorRGBA();
SoColorRGBA474->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet473->addChild(*SoColorRGBA474);

SoCoordinate* SoCoordinate475 = new SoCoordinate();
SoCoordinate475->setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
SoLineSet473->setCoord(*SoCoordinate475);

SoShape472->setGeometry(*SoLineSet473);

SoHAnimSegment468->addChild(*SoShape472);

SoHAnimJoint467->addChildren(*SoHAnimSegment468);

SoHAnimJoint* SoHAnimJoint476 = new SoHAnimJoint();
SoHAnimJoint476->setDEF(QString("hanim_vt12"));
SoHAnimJoint476->X3DNode::setName(QString("vt12"));
SoHAnimJoint476->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimSegment* SoHAnimSegment477 = new SoHAnimSegment();
SoHAnimSegment477->setDEF(QString("hanim_t12"));
SoHAnimSegment477->X3DNode::setName(QString("t12"));
SoTouchSensor* SoTouchSensor478 = new SoTouchSensor();
SoTouchSensor478->setDescription(QString("HAnimJoint vt12, HAnimSegment t12"));
SoHAnimSegment477->addChild(*SoTouchSensor478);

SoTransform* SoTransform479 = new SoTransform();
SoTransform479->setTranslation(new float[]{0.0051,1.2278,-0.0808});
SoShape* SoShape480 = new SoShape();
SoShape480->setUSE(QString("HAnimJointShape"));
SoTransform479->addChild(*SoShape480);

SoHAnimSegment477->addChild(*SoTransform479);

SoShape* SoShape481 = new SoShape();
SoLineSet* SoLineSet482 = new SoLineSet();
SoLineSet482->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA483 = new SoColorRGBA();
SoColorRGBA483->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet482->addChild(*SoColorRGBA483);

SoCoordinate* SoCoordinate484 = new SoCoordinate();
SoCoordinate484->setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
SoLineSet482->setCoord(*SoCoordinate484);

SoShape481->setGeometry(*SoLineSet482);

SoHAnimSegment477->addChild(*SoShape481);

SoHAnimJoint476->addChildren(*SoHAnimSegment477);

SoHAnimJoint* SoHAnimJoint485 = new SoHAnimJoint();
SoHAnimJoint485->setDEF(QString("hanim_vt11"));
SoHAnimJoint485->X3DNode::setName(QString("vt11"));
SoHAnimJoint485->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment486 = new SoHAnimSegment();
SoHAnimSegment486->setDEF(QString("hanim_t11"));
SoHAnimSegment486->X3DNode::setName(QString("t11"));
SoTouchSensor* SoTouchSensor487 = new SoTouchSensor();
SoTouchSensor487->setDescription(QString("HAnimJoint vt11, HAnimSegment t11"));
SoHAnimSegment486->addChild(*SoTouchSensor487);

SoTransform* SoTransform488 = new SoTransform();
SoTransform488->setTranslation(new float[]{0.0053,1.2679,-0.081});
SoShape* SoShape489 = new SoShape();
SoShape489->setUSE(QString("HAnimJointShape"));
SoTransform488->addChild(*SoShape489);

SoHAnimSegment486->addChild(*SoTransform488);

SoShape* SoShape490 = new SoShape();
SoLineSet* SoLineSet491 = new SoLineSet();
SoLineSet491->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA492 = new SoColorRGBA();
SoColorRGBA492->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet491->addChild(*SoColorRGBA492);

SoCoordinate* SoCoordinate493 = new SoCoordinate();
SoCoordinate493->setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
SoLineSet491->setCoord(*SoCoordinate493);

SoShape490->setGeometry(*SoLineSet491);

SoHAnimSegment486->addChild(*SoShape490);

SoHAnimJoint485->addChildren(*SoHAnimSegment486);

SoHAnimJoint* SoHAnimJoint494 = new SoHAnimJoint();
SoHAnimJoint494->setDEF(QString("hanim_vt10"));
SoHAnimJoint494->X3DNode::setName(QString("vt10"));
SoHAnimJoint494->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimSegment* SoHAnimSegment495 = new SoHAnimSegment();
SoHAnimSegment495->setDEF(QString("hanim_t10"));
SoHAnimSegment495->X3DNode::setName(QString("t10"));
SoTouchSensor* SoTouchSensor496 = new SoTouchSensor();
SoTouchSensor496->setDescription(QString("HAnimJoint vt10, HAnimSegment t10"));
SoHAnimSegment495->addChild(*SoTouchSensor496);

SoTransform* SoTransform497 = new SoTransform();
SoTransform497->setTranslation(new float[]{0.0056,1.2848,-0.0822});
SoShape* SoShape498 = new SoShape();
SoShape498->setUSE(QString("HAnimJointShape"));
SoTransform497->addChild(*SoShape498);

SoHAnimSegment495->addChild(*SoTransform497);

SoShape* SoShape499 = new SoShape();
SoLineSet* SoLineSet500 = new SoLineSet();
SoLineSet500->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA501 = new SoColorRGBA();
SoColorRGBA501->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet500->addChild(*SoColorRGBA501);

SoCoordinate* SoCoordinate502 = new SoCoordinate();
SoCoordinate502->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
SoLineSet500->setCoord(*SoCoordinate502);

SoShape499->setGeometry(*SoLineSet500);

SoHAnimSegment495->addChild(*SoShape499);

SoShape* SoShape503 = new SoShape();
SoLineSet* SoLineSet504 = new SoLineSet();
SoLineSet504->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA505 = new SoColorRGBA();
SoColorRGBA505->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet504->addChild(*SoColorRGBA505);

SoCoordinate* SoCoordinate506 = new SoCoordinate();
SoCoordinate506->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147}, 6);
SoLineSet504->setCoord(*SoCoordinate506);

SoShape503->setGeometry(*SoLineSet504);

SoHAnimSegment495->addChild(*SoShape503);

SoHAnimSite* SoHAnimSite507 = new SoHAnimSite();
SoHAnimSite507->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite507->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite507->setTranslation(new float[]{0.0085,1.2995,0.1147});
SoTouchSensor* SoTouchSensor508 = new SoTouchSensor();
SoTouchSensor508->setDescription(QString("HAnimSite substernale"));
SoHAnimSite507->addChild(*SoTouchSensor508);

SoShape* SoShape509 = new SoShape();
SoShape509->setUSE(QString("HAnimSiteShape"));
SoHAnimSite507->addChild(*SoShape509);

SoHAnimSegment495->addChild(*SoHAnimSite507);

SoHAnimJoint494->addChildren(*SoHAnimSegment495);

SoHAnimJoint* SoHAnimJoint510 = new SoHAnimJoint();
SoHAnimJoint510->setDEF(QString("hanim_vt9"));
SoHAnimJoint510->X3DNode::setName(QString("vt9"));
SoHAnimJoint510->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimSegment* SoHAnimSegment511 = new SoHAnimSegment();
SoHAnimSegment511->setDEF(QString("hanim_t9"));
SoHAnimSegment511->X3DNode::setName(QString("t9"));
SoTouchSensor* SoTouchSensor512 = new SoTouchSensor();
SoTouchSensor512->setDescription(QString("HAnimJoint vt9, HAnimSegment t9"));
SoHAnimSegment511->addChild(*SoTouchSensor512);

SoTransform* SoTransform513 = new SoTransform();
SoTransform513->setTranslation(new float[]{0.0057,1.3126,-0.0838});
SoShape* SoShape514 = new SoShape();
SoShape514->setUSE(QString("HAnimJointShape"));
SoTransform513->addChild(*SoShape514);

SoHAnimSegment511->addChild(*SoTransform513);

SoShape* SoShape515 = new SoShape();
SoLineSet* SoLineSet516 = new SoLineSet();
SoLineSet516->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA517 = new SoColorRGBA();
SoColorRGBA517->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet516->addChild(*SoColorRGBA517);

SoCoordinate* SoCoordinate518 = new SoCoordinate();
SoCoordinate518->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
SoLineSet516->setCoord(*SoCoordinate518);

SoShape515->setGeometry(*SoLineSet516);

SoHAnimSegment511->addChild(*SoShape515);

SoShape* SoShape519 = new SoShape();
SoLineSet* SoLineSet520 = new SoLineSet();
SoLineSet520->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA521 = new SoColorRGBA();
SoColorRGBA521->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet520->addChild(*SoColorRGBA521);

SoCoordinate* SoCoordinate522 = new SoCoordinate();
SoCoordinate522->setPoint(new float[]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217}, 6);
SoLineSet520->setCoord(*SoCoordinate522);

SoShape519->setGeometry(*SoLineSet520);

SoHAnimSegment511->addChild(*SoShape519);

SoShape* SoShape523 = new SoShape();
SoLineSet* SoLineSet524 = new SoLineSet();
SoLineSet524->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA525 = new SoColorRGBA();
SoColorRGBA525->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet524->addChild(*SoColorRGBA525);

SoCoordinate* SoCoordinate526 = new SoCoordinate();
SoCoordinate526->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192}, 6);
SoLineSet524->setCoord(*SoCoordinate526);

SoShape523->setGeometry(*SoLineSet524);

SoHAnimSegment511->addChild(*SoShape523);

SoHAnimSite* SoHAnimSite527 = new SoHAnimSite();
SoHAnimSite527->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite527->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite527->setTranslation(new float[]{-0.0736,1.3385,0.1217});
SoTouchSensor* SoTouchSensor528 = new SoTouchSensor();
SoTouchSensor528->setDescription(QString("HAnimSite r_thelion"));
SoHAnimSite527->addChild(*SoTouchSensor528);

SoShape* SoShape529 = new SoShape();
SoShape529->setUSE(QString("HAnimSiteShape"));
SoHAnimSite527->addChild(*SoShape529);

SoHAnimSegment511->addChild(*SoHAnimSite527);

SoHAnimSite* SoHAnimSite530 = new SoHAnimSite();
SoHAnimSite530->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite530->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite530->setTranslation(new float[]{0.0918,1.3382,0.1192});
SoTouchSensor* SoTouchSensor531 = new SoTouchSensor();
SoTouchSensor531->setDescription(QString("HAnimSite l_thelion"));
SoHAnimSite530->addChild(*SoTouchSensor531);

SoShape* SoShape532 = new SoShape();
SoShape532->setUSE(QString("HAnimSiteShape"));
SoHAnimSite530->addChild(*SoShape532);

SoHAnimSegment511->addChild(*SoHAnimSite530);

SoHAnimJoint510->addChildren(*SoHAnimSegment511);

SoHAnimJoint* SoHAnimJoint533 = new SoHAnimJoint();
SoHAnimJoint533->setDEF(QString("hanim_vt8"));
SoHAnimJoint533->X3DNode::setName(QString("vt8"));
SoHAnimJoint533->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimSegment* SoHAnimSegment534 = new SoHAnimSegment();
SoHAnimSegment534->setDEF(QString("hanim_t8"));
SoHAnimSegment534->X3DNode::setName(QString("t8"));
SoTouchSensor* SoTouchSensor535 = new SoTouchSensor();
SoTouchSensor535->setDescription(QString("HAnimJoint vt8, HAnimSegment t8"));
SoHAnimSegment534->addChild(*SoTouchSensor535);

SoTransform* SoTransform536 = new SoTransform();
SoTransform536->setTranslation(new float[]{0.0057,1.3382,-0.0845});
SoShape* SoShape537 = new SoShape();
SoShape537->setUSE(QString("HAnimJointShape"));
SoTransform536->addChild(*SoShape537);

SoHAnimSegment534->addChild(*SoTransform536);

SoShape* SoShape538 = new SoShape();
SoLineSet* SoLineSet539 = new SoLineSet();
SoLineSet539->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA540 = new SoColorRGBA();
SoColorRGBA540->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet539->addChild(*SoColorRGBA540);

SoCoordinate* SoCoordinate541 = new SoCoordinate();
SoCoordinate541->setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
SoLineSet539->setCoord(*SoCoordinate541);

SoShape538->setGeometry(*SoLineSet539);

SoHAnimSegment534->addChild(*SoShape538);

SoHAnimJoint533->addChildren(*SoHAnimSegment534);

SoHAnimJoint* SoHAnimJoint542 = new SoHAnimJoint();
SoHAnimJoint542->setDEF(QString("hanim_vt7"));
SoHAnimJoint542->X3DNode::setName(QString("vt7"));
SoHAnimJoint542->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimSegment* SoHAnimSegment543 = new SoHAnimSegment();
SoHAnimSegment543->setDEF(QString("hanim_t7"));
SoHAnimSegment543->X3DNode::setName(QString("t7"));
SoTouchSensor* SoTouchSensor544 = new SoTouchSensor();
SoTouchSensor544->setDescription(QString("HAnimJoint vt7, HAnimSegment t7"));
SoHAnimSegment543->addChild(*SoTouchSensor544);

SoTransform* SoTransform545 = new SoTransform();
SoTransform545->setTranslation(new float[]{0.0058,1.3625,-0.0833});
SoShape* SoShape546 = new SoShape();
SoShape546->setUSE(QString("HAnimJointShape"));
SoTransform545->addChild(*SoShape546);

SoHAnimSegment543->addChild(*SoTransform545);

SoShape* SoShape547 = new SoShape();
SoLineSet* SoLineSet548 = new SoLineSet();
SoLineSet548->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA549 = new SoColorRGBA();
SoColorRGBA549->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet548->addChild(*SoColorRGBA549);

SoCoordinate* SoCoordinate550 = new SoCoordinate();
SoCoordinate550->setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
SoLineSet548->setCoord(*SoCoordinate550);

SoShape547->setGeometry(*SoLineSet548);

SoHAnimSegment543->addChild(*SoShape547);

SoHAnimJoint542->addChildren(*SoHAnimSegment543);

SoHAnimJoint* SoHAnimJoint551 = new SoHAnimJoint();
SoHAnimJoint551->setDEF(QString("hanim_vt6"));
SoHAnimJoint551->X3DNode::setName(QString("vt6"));
SoHAnimJoint551->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimSegment* SoHAnimSegment552 = new SoHAnimSegment();
SoHAnimSegment552->setDEF(QString("hanim_t6"));
SoHAnimSegment552->X3DNode::setName(QString("t6"));
SoTouchSensor* SoTouchSensor553 = new SoTouchSensor();
SoTouchSensor553->setDescription(QString("HAnimJoint vt6, HAnimSegment t6"));
SoHAnimSegment552->addChild(*SoTouchSensor553);

SoTransform* SoTransform554 = new SoTransform();
SoTransform554->setTranslation(new float[]{0.0059,1.3866,-0.08});
SoShape* SoShape555 = new SoShape();
SoShape555->setUSE(QString("HAnimJointShape"));
SoTransform554->addChild(*SoShape555);

SoHAnimSegment552->addChild(*SoTransform554);

SoShape* SoShape556 = new SoShape();
SoLineSet* SoLineSet557 = new SoLineSet();
SoLineSet557->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA558 = new SoColorRGBA();
SoColorRGBA558->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet557->addChild(*SoColorRGBA558);

SoCoordinate* SoCoordinate559 = new SoCoordinate();
SoCoordinate559->setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
SoLineSet557->setCoord(*SoCoordinate559);

SoShape556->setGeometry(*SoLineSet557);

SoHAnimSegment552->addChild(*SoShape556);

SoHAnimJoint551->addChildren(*SoHAnimSegment552);

SoHAnimJoint* SoHAnimJoint560 = new SoHAnimJoint();
SoHAnimJoint560->setDEF(QString("hanim_vt5"));
SoHAnimJoint560->X3DNode::setName(QString("vt5"));
SoHAnimJoint560->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimSegment* SoHAnimSegment561 = new SoHAnimSegment();
SoHAnimSegment561->setDEF(QString("hanim_t5"));
SoHAnimSegment561->X3DNode::setName(QString("t5"));
SoTouchSensor* SoTouchSensor562 = new SoTouchSensor();
SoTouchSensor562->setDescription(QString("HAnimJoint vt5, HAnimSegment t5"));
SoHAnimSegment561->addChild(*SoTouchSensor562);

SoTransform* SoTransform563 = new SoTransform();
SoTransform563->setTranslation(new float[]{0.006,1.4102,-0.0745});
SoShape* SoShape564 = new SoShape();
SoShape564->setUSE(QString("HAnimJointShape"));
SoTransform563->addChild(*SoShape564);

SoHAnimSegment561->addChild(*SoTransform563);

SoShape* SoShape565 = new SoShape();
SoLineSet* SoLineSet566 = new SoLineSet();
SoLineSet566->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA567 = new SoColorRGBA();
SoColorRGBA567->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet566->addChild(*SoColorRGBA567);

SoCoordinate* SoCoordinate568 = new SoCoordinate();
SoCoordinate568->setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
SoLineSet566->setCoord(*SoCoordinate568);

SoShape565->setGeometry(*SoLineSet566);

SoHAnimSegment561->addChild(*SoShape565);

SoHAnimJoint560->addChildren(*SoHAnimSegment561);

SoHAnimJoint* SoHAnimJoint569 = new SoHAnimJoint();
SoHAnimJoint569->setDEF(QString("hanim_vt4"));
SoHAnimJoint569->X3DNode::setName(QString("vt4"));
SoHAnimJoint569->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimSegment* SoHAnimSegment570 = new SoHAnimSegment();
SoHAnimSegment570->setDEF(QString("hanim_t4"));
SoHAnimSegment570->X3DNode::setName(QString("t4"));
SoTouchSensor* SoTouchSensor571 = new SoTouchSensor();
SoTouchSensor571->setDescription(QString("HAnimJoint vt4, HAnimSegment t4"));
SoHAnimSegment570->addChild(*SoTouchSensor571);

SoTransform* SoTransform572 = new SoTransform();
SoTransform572->setTranslation(new float[]{0.0061,1.432,-0.0675});
SoShape* SoShape573 = new SoShape();
SoShape573->setUSE(QString("HAnimJointShape"));
SoTransform572->addChild(*SoShape573);

SoHAnimSegment570->addChild(*SoTransform572);

SoShape* SoShape574 = new SoShape();
SoLineSet* SoLineSet575 = new SoLineSet();
SoLineSet575->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA576 = new SoColorRGBA();
SoColorRGBA576->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet575->addChild(*SoColorRGBA576);

SoCoordinate* SoCoordinate577 = new SoCoordinate();
SoCoordinate577->setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
SoLineSet575->setCoord(*SoCoordinate577);

SoShape574->setGeometry(*SoLineSet575);

SoHAnimSegment570->addChild(*SoShape574);

SoHAnimJoint569->addChildren(*SoHAnimSegment570);

SoHAnimJoint* SoHAnimJoint578 = new SoHAnimJoint();
SoHAnimJoint578->setDEF(QString("hanim_vt3"));
SoHAnimJoint578->X3DNode::setName(QString("vt3"));
SoHAnimJoint578->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimSegment* SoHAnimSegment579 = new SoHAnimSegment();
SoHAnimSegment579->setDEF(QString("hanim_t3"));
SoHAnimSegment579->X3DNode::setName(QString("t3"));
SoTouchSensor* SoTouchSensor580 = new SoTouchSensor();
SoTouchSensor580->setDescription(QString("HAnimJoint vt3, HAnimSegment t3"));
SoHAnimSegment579->addChild(*SoTouchSensor580);

SoTransform* SoTransform581 = new SoTransform();
SoTransform581->setTranslation(new float[]{0.0062,1.4583,-0.057});
SoShape* SoShape582 = new SoShape();
SoShape582->setUSE(QString("HAnimJointShape"));
SoTransform581->addChild(*SoShape582);

SoHAnimSegment579->addChild(*SoTransform581);

SoShape* SoShape583 = new SoShape();
SoLineSet* SoLineSet584 = new SoLineSet();
SoLineSet584->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA585 = new SoColorRGBA();
SoColorRGBA585->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet584->addChild(*SoColorRGBA585);

SoCoordinate* SoCoordinate586 = new SoCoordinate();
SoCoordinate586->setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
SoLineSet584->setCoord(*SoCoordinate586);

SoShape583->setGeometry(*SoLineSet584);

SoHAnimSegment579->addChild(*SoShape583);

SoHAnimJoint578->addChildren(*SoHAnimSegment579);

SoHAnimJoint* SoHAnimJoint587 = new SoHAnimJoint();
SoHAnimJoint587->setDEF(QString("hanim_vt2"));
SoHAnimJoint587->X3DNode::setName(QString("vt2"));
SoHAnimJoint587->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimSegment* SoHAnimSegment588 = new SoHAnimSegment();
SoHAnimSegment588->setDEF(QString("hanim_t2"));
SoHAnimSegment588->X3DNode::setName(QString("t2"));
SoTouchSensor* SoTouchSensor589 = new SoTouchSensor();
SoTouchSensor589->setDescription(QString("HAnimJoint vt2, HAnimSegment t2"));
SoHAnimSegment588->addChild(*SoTouchSensor589);

SoTransform* SoTransform590 = new SoTransform();
SoTransform590->setTranslation(new float[]{0.0063,1.4761,-0.0484});
SoShape* SoShape591 = new SoShape();
SoShape591->setUSE(QString("HAnimJointShape"));
SoTransform590->addChild(*SoShape591);

SoHAnimSegment588->addChild(*SoTransform590);

SoShape* SoShape592 = new SoShape();
SoLineSet* SoLineSet593 = new SoLineSet();
SoLineSet593->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA594 = new SoColorRGBA();
SoColorRGBA594->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet593->addChild(*SoColorRGBA594);

SoCoordinate* SoCoordinate595 = new SoCoordinate();
SoCoordinate595->setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
SoLineSet593->setCoord(*SoCoordinate595);

SoShape592->setGeometry(*SoLineSet593);

SoHAnimSegment588->addChild(*SoShape592);

SoHAnimJoint587->addChildren(*SoHAnimSegment588);

SoHAnimJoint* SoHAnimJoint596 = new SoHAnimJoint();
SoHAnimJoint596->setDEF(QString("hanim_vt1"));
SoHAnimJoint596->X3DNode::setName(QString("vt1"));
SoHAnimJoint596->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimSegment* SoHAnimSegment597 = new SoHAnimSegment();
SoHAnimSegment597->setDEF(QString("hanim_t1"));
SoHAnimSegment597->X3DNode::setName(QString("t1"));
SoTouchSensor* SoTouchSensor598 = new SoTouchSensor();
SoTouchSensor598->setDescription(QString("HAnimJoint vt1, HAnimSegment t1"));
SoHAnimSegment597->addChild(*SoTouchSensor598);

SoTransform* SoTransform599 = new SoTransform();
SoTransform599->setTranslation(new float[]{0.0065,1.4951,-0.0387});
SoShape* SoShape600 = new SoShape();
SoShape600->setUSE(QString("HAnimJointShape"));
SoTransform599->addChild(*SoShape600);

SoHAnimSegment597->addChild(*SoTransform599);

SoShape* SoShape601 = new SoShape();
SoLineSet* SoLineSet602 = new SoLineSet();
SoLineSet602->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA603 = new SoColorRGBA();
SoColorRGBA603->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet602->addChild(*SoColorRGBA603);

SoCoordinate* SoCoordinate604 = new SoCoordinate();
SoCoordinate604->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
SoLineSet602->setCoord(*SoCoordinate604);

SoShape601->setGeometry(*SoLineSet602);

SoHAnimSegment597->addChild(*SoShape601);

SoShape* SoShape605 = new SoShape();
SoLineSet* SoLineSet606 = new SoLineSet();
SoLineSet606->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA607 = new SoColorRGBA();
SoColorRGBA607->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet606->addChild(*SoColorRGBA607);

SoCoordinate* SoCoordinate608 = new SoCoordinate();
SoCoordinate608->setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
SoLineSet606->setCoord(*SoCoordinate608);

SoShape605->setGeometry(*SoLineSet606);

SoHAnimSegment597->addChild(*SoShape605);

SoShape* SoShape609 = new SoShape();
SoLineSet* SoLineSet610 = new SoLineSet();
SoLineSet610->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA611 = new SoColorRGBA();
SoColorRGBA611->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet610->addChild(*SoColorRGBA611);

SoCoordinate* SoCoordinate612 = new SoCoordinate();
SoCoordinate612->setPoint(new float[]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353}, 6);
SoLineSet610->setCoord(*SoCoordinate612);

SoShape609->setGeometry(*SoLineSet610);

SoHAnimSegment597->addChild(*SoShape609);

SoShape* SoShape613 = new SoShape();
SoLineSet* SoLineSet614 = new SoLineSet();
SoLineSet614->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA615 = new SoColorRGBA();
SoColorRGBA615->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet614->addChild(*SoColorRGBA615);

SoCoordinate* SoCoordinate616 = new SoCoordinate();
SoCoordinate616->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551}, 6);
SoLineSet614->setCoord(*SoCoordinate616);

SoShape613->setGeometry(*SoLineSet614);

SoHAnimSegment597->addChild(*SoShape613);

SoShape* SoShape617 = new SoShape();
SoLineSet* SoLineSet618 = new SoLineSet();
SoLineSet618->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA619 = new SoColorRGBA();
SoColorRGBA619->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet618->addChild(*SoColorRGBA619);

SoCoordinate* SoCoordinate620 = new SoCoordinate();
SoCoordinate620->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815}, 6);
SoLineSet618->setCoord(*SoCoordinate620);

SoShape617->setGeometry(*SoLineSet618);

SoHAnimSegment597->addChild(*SoShape617);

SoHAnimSite* SoHAnimSite621 = new SoHAnimSite();
SoHAnimSite621->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite621->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite621->setTranslation(new float[]{0.0084,1.4714,0.0551});
SoTouchSensor* SoTouchSensor622 = new SoTouchSensor();
SoTouchSensor622->setDescription(QString("HAnimSite suprasternale"));
SoHAnimSite621->addChild(*SoTouchSensor622);

SoShape* SoShape623 = new SoShape();
SoShape623->setUSE(QString("HAnimSiteShape"));
SoHAnimSite621->addChild(*SoShape623);

SoHAnimSegment597->addChild(*SoHAnimSite621);

SoHAnimSite* SoHAnimSite624 = new SoHAnimSite();
SoHAnimSite624->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite624->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite624->setTranslation(new float[]{0.0064,1.52,-0.0815});
SoTouchSensor* SoTouchSensor625 = new SoTouchSensor();
SoTouchSensor625->setDescription(QString("HAnimSite cervicale"));
SoHAnimSite624->addChild(*SoTouchSensor625);

SoShape* SoShape626 = new SoShape();
SoShape626->setUSE(QString("HAnimSiteShape"));
SoHAnimSite624->addChild(*SoShape626);

SoHAnimSegment597->addChild(*SoHAnimSite624);

SoHAnimJoint596->addChildren(*SoHAnimSegment597);

SoHAnimJoint* SoHAnimJoint627 = new SoHAnimJoint();
SoHAnimJoint627->setDEF(QString("hanim_vc7"));
SoHAnimJoint627->X3DNode::setName(QString("vc7"));
SoHAnimJoint627->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimSegment* SoHAnimSegment628 = new SoHAnimSegment();
SoHAnimSegment628->setDEF(QString("hanim_c7"));
SoHAnimSegment628->X3DNode::setName(QString("c7"));
SoTouchSensor* SoTouchSensor629 = new SoTouchSensor();
SoTouchSensor629->setDescription(QString("HAnimJoint vc7, HAnimSegment c7"));
SoHAnimSegment628->addChild(*SoTouchSensor629);

SoTransform* SoTransform630 = new SoTransform();
SoTransform630->setTranslation(new float[]{0.0066,1.5132,-0.0301});
SoShape* SoShape631 = new SoShape();
SoShape631->setUSE(QString("HAnimJointShape"));
SoTransform630->addChild(*SoShape631);

SoHAnimSegment628->addChild(*SoTransform630);

SoShape* SoShape632 = new SoShape();
SoLineSet* SoLineSet633 = new SoLineSet();
SoLineSet633->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA634 = new SoColorRGBA();
SoColorRGBA634->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet633->addChild(*SoColorRGBA634);

SoCoordinate* SoCoordinate635 = new SoCoordinate();
SoCoordinate635->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
SoLineSet633->setCoord(*SoCoordinate635);

SoShape632->setGeometry(*SoLineSet633);

SoHAnimSegment628->addChild(*SoShape632);

SoShape* SoShape636 = new SoShape();
SoLineSet* SoLineSet637 = new SoLineSet();
SoLineSet637->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA638 = new SoColorRGBA();
SoColorRGBA638->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet637->addChild(*SoColorRGBA638);

SoCoordinate* SoCoordinate639 = new SoCoordinate();
SoCoordinate639->setPoint(new float[]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022}, 6);
SoLineSet637->setCoord(*SoCoordinate639);

SoShape636->setGeometry(*SoLineSet637);

SoHAnimSegment628->addChild(*SoShape636);

SoShape* SoShape640 = new SoShape();
SoLineSet* SoLineSet641 = new SoLineSet();
SoLineSet641->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA642 = new SoColorRGBA();
SoColorRGBA642->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet641->addChild(*SoColorRGBA642);

SoCoordinate* SoCoordinate643 = new SoCoordinate();
SoCoordinate643->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038}, 6);
SoLineSet641->setCoord(*SoCoordinate643);

SoShape640->setGeometry(*SoLineSet641);

SoHAnimSegment628->addChild(*SoShape640);

SoHAnimSite* SoHAnimSite644 = new SoHAnimSite();
SoHAnimSite644->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite644->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite644->setTranslation(new float[]{-0.0419,1.5149,-0.022});
SoTouchSensor* SoTouchSensor645 = new SoTouchSensor();
SoTouchSensor645->setDescription(QString("HAnimSite r_neck_base"));
SoHAnimSite644->addChild(*SoTouchSensor645);

SoShape* SoShape646 = new SoShape();
SoShape646->setUSE(QString("HAnimSiteShape"));
SoHAnimSite644->addChild(*SoShape646);

SoHAnimSegment628->addChild(*SoHAnimSite644);

SoHAnimSite* SoHAnimSite647 = new SoHAnimSite();
SoHAnimSite647->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite647->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite647->setTranslation(new float[]{0.0646,1.5141,-0.038});
SoTouchSensor* SoTouchSensor648 = new SoTouchSensor();
SoTouchSensor648->setDescription(QString("HAnimSite l_neck_base"));
SoHAnimSite647->addChild(*SoTouchSensor648);

SoShape* SoShape649 = new SoShape();
SoShape649->setUSE(QString("HAnimSiteShape"));
SoHAnimSite647->addChild(*SoShape649);

SoHAnimSegment628->addChild(*SoHAnimSite647);

SoHAnimJoint627->addChildren(*SoHAnimSegment628);

SoHAnimJoint* SoHAnimJoint650 = new SoHAnimJoint();
SoHAnimJoint650->setDEF(QString("hanim_vc6"));
SoHAnimJoint650->X3DNode::setName(QString("vc6"));
SoHAnimJoint650->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimSegment* SoHAnimSegment651 = new SoHAnimSegment();
SoHAnimSegment651->setDEF(QString("hanim_c6"));
SoHAnimSegment651->X3DNode::setName(QString("c6"));
SoTouchSensor* SoTouchSensor652 = new SoTouchSensor();
SoTouchSensor652->setDescription(QString("HAnimJoint vc6, HAnimSegment c6"));
SoHAnimSegment651->addChild(*SoTouchSensor652);

SoTransform* SoTransform653 = new SoTransform();
SoTransform653->setTranslation(new float[]{0.0066,1.5357,-0.0143});
SoShape* SoShape654 = new SoShape();
SoShape654->setUSE(QString("HAnimJointShape"));
SoTransform653->addChild(*SoShape654);

SoHAnimSegment651->addChild(*SoTransform653);

SoShape* SoShape655 = new SoShape();
SoLineSet* SoLineSet656 = new SoLineSet();
SoLineSet656->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA657 = new SoColorRGBA();
SoColorRGBA657->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet656->addChild(*SoColorRGBA657);

SoCoordinate* SoCoordinate658 = new SoCoordinate();
SoCoordinate658->setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
SoLineSet656->setCoord(*SoCoordinate658);

SoShape655->setGeometry(*SoLineSet656);

SoHAnimSegment651->addChild(*SoShape655);

SoHAnimJoint650->addChildren(*SoHAnimSegment651);

SoHAnimJoint* SoHAnimJoint659 = new SoHAnimJoint();
SoHAnimJoint659->setDEF(QString("hanim_vc5"));
SoHAnimJoint659->X3DNode::setName(QString("vc5"));
SoHAnimJoint659->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimSegment* SoHAnimSegment660 = new SoHAnimSegment();
SoHAnimSegment660->setDEF(QString("hanim_c5"));
SoHAnimSegment660->X3DNode::setName(QString("c5"));
SoTouchSensor* SoTouchSensor661 = new SoTouchSensor();
SoTouchSensor661->setDescription(QString("HAnimJoint vc5, HAnimSegment c5"));
SoHAnimSegment660->addChild(*SoTouchSensor661);

SoTransform* SoTransform662 = new SoTransform();
SoTransform662->setTranslation(new float[]{0.0066,1.552,-0.0082});
SoShape* SoShape663 = new SoShape();
SoShape663->setUSE(QString("HAnimJointShape"));
SoTransform662->addChild(*SoShape663);

SoHAnimSegment660->addChild(*SoTransform662);

SoShape* SoShape664 = new SoShape();
SoLineSet* SoLineSet665 = new SoLineSet();
SoLineSet665->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA666 = new SoColorRGBA();
SoColorRGBA666->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet665->addChild(*SoColorRGBA666);

SoCoordinate* SoCoordinate667 = new SoCoordinate();
SoCoordinate667->setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
SoLineSet665->setCoord(*SoCoordinate667);

SoShape664->setGeometry(*SoLineSet665);

SoHAnimSegment660->addChild(*SoShape664);

SoHAnimJoint659->addChildren(*SoHAnimSegment660);

SoHAnimJoint* SoHAnimJoint668 = new SoHAnimJoint();
SoHAnimJoint668->setDEF(QString("hanim_vc4"));
SoHAnimJoint668->X3DNode::setName(QString("vc4"));
SoHAnimJoint668->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimSegment* SoHAnimSegment669 = new SoHAnimSegment();
SoHAnimSegment669->setDEF(QString("hanim_c4"));
SoHAnimSegment669->X3DNode::setName(QString("c4"));
SoTouchSensor* SoTouchSensor670 = new SoTouchSensor();
SoTouchSensor670->setDescription(QString("HAnimJoint vc4, HAnimSegment c4"));
SoHAnimSegment669->addChild(*SoTouchSensor670);

SoTransform* SoTransform671 = new SoTransform();
SoTransform671->setTranslation(new float[]{0.0066,1.5662,-0.0084});
SoShape* SoShape672 = new SoShape();
SoShape672->setUSE(QString("HAnimJointShape"));
SoTransform671->addChild(*SoShape672);

SoHAnimSegment669->addChild(*SoTransform671);

SoShape* SoShape673 = new SoShape();
SoLineSet* SoLineSet674 = new SoLineSet();
SoLineSet674->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA675 = new SoColorRGBA();
SoColorRGBA675->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet674->addChild(*SoColorRGBA675);

SoCoordinate* SoCoordinate676 = new SoCoordinate();
SoCoordinate676->setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
SoLineSet674->setCoord(*SoCoordinate676);

SoShape673->setGeometry(*SoLineSet674);

SoHAnimSegment669->addChild(*SoShape673);

SoHAnimJoint668->addChildren(*SoHAnimSegment669);

SoHAnimJoint* SoHAnimJoint677 = new SoHAnimJoint();
SoHAnimJoint677->setDEF(QString("hanim_vc3"));
SoHAnimJoint677->X3DNode::setName(QString("vc3"));
SoHAnimJoint677->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimSegment* SoHAnimSegment678 = new SoHAnimSegment();
SoHAnimSegment678->setDEF(QString("hanim_c3"));
SoHAnimSegment678->X3DNode::setName(QString("c3"));
SoTouchSensor* SoTouchSensor679 = new SoTouchSensor();
SoTouchSensor679->setDescription(QString("HAnimJoint vc3, HAnimSegment c3"));
SoHAnimSegment678->addChild(*SoTouchSensor679);

SoTransform* SoTransform680 = new SoTransform();
SoTransform680->setTranslation(new float[]{0.0066,1.58,-0.0103});
SoShape* SoShape681 = new SoShape();
SoShape681->setUSE(QString("HAnimJointShape"));
SoTransform680->addChild(*SoShape681);

SoHAnimSegment678->addChild(*SoTransform680);

SoShape* SoShape682 = new SoShape();
SoLineSet* SoLineSet683 = new SoLineSet();
SoLineSet683->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA684 = new SoColorRGBA();
SoColorRGBA684->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet683->addChild(*SoColorRGBA684);

SoCoordinate* SoCoordinate685 = new SoCoordinate();
SoCoordinate685->setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
SoLineSet683->setCoord(*SoCoordinate685);

SoShape682->setGeometry(*SoLineSet683);

SoHAnimSegment678->addChild(*SoShape682);

SoHAnimJoint677->addChildren(*SoHAnimSegment678);

SoHAnimJoint* SoHAnimJoint686 = new SoHAnimJoint();
SoHAnimJoint686->setDEF(QString("hanim_vc2"));
SoHAnimJoint686->X3DNode::setName(QString("vc2"));
SoHAnimJoint686->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimSegment* SoHAnimSegment687 = new SoHAnimSegment();
SoHAnimSegment687->setDEF(QString("hanim_c2"));
SoHAnimSegment687->X3DNode::setName(QString("c2"));
SoTouchSensor* SoTouchSensor688 = new SoTouchSensor();
SoTouchSensor688->setDescription(QString("HAnimJoint vc2, HAnimSegment c2"));
SoHAnimSegment687->addChild(*SoTouchSensor688);

SoTransform* SoTransform689 = new SoTransform();
SoTransform689->setTranslation(new float[]{0.0066,1.5928,-0.0103});
SoShape* SoShape690 = new SoShape();
SoShape690->setUSE(QString("HAnimJointShape"));
SoTransform689->addChild(*SoShape690);

SoHAnimSegment687->addChild(*SoTransform689);

SoShape* SoShape691 = new SoShape();
SoLineSet* SoLineSet692 = new SoLineSet();
SoLineSet692->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA693 = new SoColorRGBA();
SoColorRGBA693->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet692->addChild(*SoColorRGBA693);

SoCoordinate* SoCoordinate694 = new SoCoordinate();
SoCoordinate694->setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
SoLineSet692->setCoord(*SoCoordinate694);

SoShape691->setGeometry(*SoLineSet692);

SoHAnimSegment687->addChild(*SoShape691);

SoHAnimJoint686->addChildren(*SoHAnimSegment687);

SoHAnimJoint* SoHAnimJoint695 = new SoHAnimJoint();
SoHAnimJoint695->setDEF(QString("hanim_vc1"));
SoHAnimJoint695->X3DNode::setName(QString("vc1"));
SoHAnimJoint695->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimSegment* SoHAnimSegment696 = new SoHAnimSegment();
SoHAnimSegment696->setDEF(QString("hanim_c1"));
SoHAnimSegment696->X3DNode::setName(QString("c1"));
SoTouchSensor* SoTouchSensor697 = new SoTouchSensor();
SoTouchSensor697->setDescription(QString("HAnimJoint vc1, HAnimSegment c1"));
SoHAnimSegment696->addChild(*SoTouchSensor697);

SoTransform* SoTransform698 = new SoTransform();
SoTransform698->setTranslation(new float[]{0.0066,1.6144,-0.0034});
SoShape* SoShape699 = new SoShape();
SoShape699->setUSE(QString("HAnimJointShape"));
SoTransform698->addChild(*SoShape699);

SoHAnimSegment696->addChild(*SoTransform698);

SoShape* SoShape700 = new SoShape();
SoLineSet* SoLineSet701 = new SoLineSet();
SoLineSet701->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA702 = new SoColorRGBA();
SoColorRGBA702->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet701->addChild(*SoColorRGBA702);

SoCoordinate* SoCoordinate703 = new SoCoordinate();
SoCoordinate703->setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
SoLineSet701->setCoord(*SoCoordinate703);

SoShape700->setGeometry(*SoLineSet701);

SoHAnimSegment696->addChild(*SoShape700);

SoHAnimJoint695->addChildren(*SoHAnimSegment696);

SoHAnimJoint* SoHAnimJoint704 = new SoHAnimJoint();
SoHAnimJoint704->setDEF(QString("hanim_skullbase"));
SoHAnimJoint704->X3DNode::setName(QString("skullbase"));
SoHAnimJoint704->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment705 = new SoHAnimSegment();
SoHAnimSegment705->setDEF(QString("hanim_skull"));
SoHAnimSegment705->X3DNode::setName(QString("skull"));
SoTouchSensor* SoTouchSensor706 = new SoTouchSensor();
SoTouchSensor706->setDescription(QString("HAnimJoint skullbase, HAnimSegment skull"));
SoHAnimSegment705->addChild(*SoTouchSensor706);

SoTransform* SoTransform707 = new SoTransform();
SoTransform707->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoShape* SoShape708 = new SoShape();
SoShape708->setUSE(QString("HAnimJointShape"));
SoTransform707->addChild(*SoShape708);

SoHAnimSegment705->addChild(*SoTransform707);

SoShape* SoShape709 = new SoShape();
SoLineSet* SoLineSet710 = new SoLineSet();
SoLineSet710->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA711 = new SoColorRGBA();
SoColorRGBA711->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet710->addChild(*SoColorRGBA711);

SoCoordinate* SoCoordinate712 = new SoCoordinate();
SoCoordinate712->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
SoLineSet710->setCoord(*SoCoordinate712);

SoShape709->setGeometry(*SoLineSet710);

SoHAnimSegment705->addChild(*SoShape709);

SoShape* SoShape713 = new SoShape();
SoLineSet* SoLineSet714 = new SoLineSet();
SoLineSet714->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA715 = new SoColorRGBA();
SoColorRGBA715->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet714->addChild(*SoColorRGBA715);

SoCoordinate* SoCoordinate716 = new SoCoordinate();
SoCoordinate716->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
SoLineSet714->setCoord(*SoCoordinate716);

SoShape713->setGeometry(*SoLineSet714);

SoHAnimSegment705->addChild(*SoShape713);

SoShape* SoShape717 = new SoShape();
SoLineSet* SoLineSet718 = new SoLineSet();
SoLineSet718->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA719 = new SoColorRGBA();
SoColorRGBA719->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet718->addChild(*SoColorRGBA719);

SoCoordinate* SoCoordinate720 = new SoCoordinate();
SoCoordinate720->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506}, 6);
SoLineSet718->setCoord(*SoCoordinate720);

SoShape717->setGeometry(*SoLineSet718);

SoHAnimSegment705->addChild(*SoShape717);

SoShape* SoShape721 = new SoShape();
SoLineSet* SoLineSet722 = new SoLineSet();
SoLineSet722->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA723 = new SoColorRGBA();
SoColorRGBA723->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet722->addChild(*SoColorRGBA723);

SoCoordinate* SoCoordinate724 = new SoCoordinate();
SoCoordinate724->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
SoLineSet722->setCoord(*SoCoordinate724);

SoShape721->setGeometry(*SoLineSet722);

SoHAnimSegment705->addChild(*SoShape721);

SoShape* SoShape725 = new SoShape();
SoLineSet* SoLineSet726 = new SoLineSet();
SoLineSet726->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA727 = new SoColorRGBA();
SoColorRGBA727->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet726->addChild(*SoColorRGBA727);

SoCoordinate* SoCoordinate728 = new SoCoordinate();
SoCoordinate728->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
SoLineSet726->setCoord(*SoCoordinate728);

SoShape725->setGeometry(*SoLineSet726);

SoHAnimSegment705->addChild(*SoShape725);

SoShape* SoShape729 = new SoShape();
SoLineSet* SoLineSet730 = new SoLineSet();
SoLineSet730->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA731 = new SoColorRGBA();
SoColorRGBA731->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet730->addChild(*SoColorRGBA731);

SoCoordinate* SoCoordinate732 = new SoCoordinate();
SoCoordinate732->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506}, 6);
SoLineSet730->setCoord(*SoCoordinate732);

SoShape729->setGeometry(*SoLineSet730);

SoHAnimSegment705->addChild(*SoShape729);

SoShape* SoShape733 = new SoShape();
SoLineSet* SoLineSet734 = new SoLineSet();
SoLineSet734->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA735 = new SoColorRGBA();
SoColorRGBA735->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet734->addChild(*SoColorRGBA735);

SoCoordinate* SoCoordinate736 = new SoCoordinate();
SoCoordinate736->setPoint(new float[]{0.0044,1.6209,0.0236,0.0,1.63,0.015}, 6);
SoLineSet734->setCoord(*SoCoordinate736);

SoShape733->setGeometry(*SoLineSet734);

SoHAnimSegment705->addChild(*SoShape733);

SoShape* SoShape737 = new SoShape();
SoLineSet* SoLineSet738 = new SoLineSet();
SoLineSet738->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA739 = new SoColorRGBA();
SoColorRGBA739->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet738->addChild(*SoColorRGBA739);

SoCoordinate* SoCoordinate740 = new SoCoordinate();
SoCoordinate740->setPoint(new float[]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055}, 6);
SoLineSet738->setCoord(*SoCoordinate740);

SoShape737->setGeometry(*SoLineSet738);

SoHAnimSegment705->addChild(*SoShape737);

SoShape* SoShape741 = new SoShape();
SoLineSet* SoLineSet742 = new SoLineSet();
SoLineSet742->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA743 = new SoColorRGBA();
SoColorRGBA743->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet742->addChild(*SoColorRGBA743);

SoCoordinate* SoCoordinate744 = new SoCoordinate();
SoCoordinate744->setPoint(new float[]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852}, 6);
SoLineSet742->setCoord(*SoCoordinate744);

SoShape741->setGeometry(*SoLineSet742);

SoHAnimSegment705->addChild(*SoShape741);

SoShape* SoShape745 = new SoShape();
SoLineSet* SoLineSet746 = new SoLineSet();
SoLineSet746->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA747 = new SoColorRGBA();
SoColorRGBA747->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet746->addChild(*SoColorRGBA747);

SoCoordinate* SoCoordinate748 = new SoCoordinate();
SoCoordinate748->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752}, 6);
SoLineSet746->setCoord(*SoCoordinate748);

SoShape745->setGeometry(*SoLineSet746);

SoHAnimSegment705->addChild(*SoShape745);

SoShape* SoShape749 = new SoShape();
SoLineSet* SoLineSet750 = new SoLineSet();
SoLineSet750->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA751 = new SoColorRGBA();
SoColorRGBA751->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet750->addChild(*SoColorRGBA751);

SoCoordinate* SoCoordinate752 = new SoCoordinate();
SoCoordinate752->setPoint(new float[]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752}, 6);
SoLineSet750->setCoord(*SoCoordinate752);

SoShape749->setGeometry(*SoLineSet750);

SoHAnimSegment705->addChild(*SoShape749);

SoShape* SoShape753 = new SoShape();
SoLineSet* SoLineSet754 = new SoLineSet();
SoLineSet754->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA755 = new SoColorRGBA();
SoColorRGBA755->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet754->addChild(*SoColorRGBA755);

SoCoordinate* SoCoordinate756 = new SoCoordinate();
SoCoordinate756->setPoint(new float[]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805}, 6);
SoLineSet754->setCoord(*SoCoordinate756);

SoShape753->setGeometry(*SoLineSet754);

SoHAnimSegment705->addChild(*SoShape753);

SoShape* SoShape757 = new SoShape();
SoLineSet* SoLineSet758 = new SoLineSet();
SoLineSet758->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA759 = new SoColorRGBA();
SoColorRGBA759->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet758->addChild(*SoColorRGBA759);

SoCoordinate* SoCoordinate760 = new SoCoordinate();
SoCoordinate760->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302}, 6);
SoLineSet758->setCoord(*SoCoordinate760);

SoShape757->setGeometry(*SoLineSet758);

SoHAnimSegment705->addChild(*SoShape757);

SoShape* SoShape761 = new SoShape();
SoLineSet* SoLineSet762 = new SoLineSet();
SoLineSet762->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA763 = new SoColorRGBA();
SoColorRGBA763->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet762->addChild(*SoColorRGBA763);

SoCoordinate* SoCoordinate764 = new SoCoordinate();
SoCoordinate764->setPoint(new float[]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347}, 6);
SoLineSet762->setCoord(*SoCoordinate764);

SoShape761->setGeometry(*SoLineSet762);

SoHAnimSegment705->addChild(*SoShape761);

SoShape* SoShape765 = new SoShape();
SoLineSet* SoLineSet766 = new SoLineSet();
SoLineSet766->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA767 = new SoColorRGBA();
SoColorRGBA767->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet766->addChild(*SoColorRGBA767);

SoCoordinate* SoCoordinate768 = new SoCoordinate();
SoCoordinate768->setPoint(new float[]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282}, 6);
SoLineSet766->setCoord(*SoCoordinate768);

SoShape765->setGeometry(*SoLineSet766);

SoHAnimSegment705->addChild(*SoShape765);

SoShape* SoShape769 = new SoShape();
SoLineSet* SoLineSet770 = new SoLineSet();
SoLineSet770->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA771 = new SoColorRGBA();
SoColorRGBA771->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet770->addChild(*SoColorRGBA771);

SoCoordinate* SoCoordinate772 = new SoCoordinate();
SoCoordinate772->setPoint(new float[]{0.0044,1.6209,0.0236,0.0631,1.553,0.033}, 6);
SoLineSet770->setCoord(*SoCoordinate772);

SoShape769->setGeometry(*SoLineSet770);

SoHAnimSegment705->addChild(*SoShape769);

SoShape* SoShape773 = new SoShape();
SoLineSet* SoLineSet774 = new SoLineSet();
SoLineSet774->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA775 = new SoColorRGBA();
SoColorRGBA775->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet774->addChild(*SoColorRGBA775);

SoCoordinate* SoCoordinate776 = new SoCoordinate();
SoCoordinate776->setPoint(new float[]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796}, 6);
SoLineSet774->setCoord(*SoCoordinate776);

SoShape773->setGeometry(*SoLineSet774);

SoHAnimSegment705->addChild(*SoShape773);

SoHAnimSite* SoHAnimSite777 = new SoHAnimSite();
SoHAnimSite777->setDEF(QString("hanim_skull_tip"));
SoHAnimSite777->X3DNode::setName(QString("skull_tip"));
SoHAnimSite777->setTranslation(new float[]{0.005,1.7504,0.0055});
SoTouchSensor* SoTouchSensor778 = new SoTouchSensor();
SoTouchSensor778->setDescription(QString("HAnimSite skull_tip"));
SoHAnimSite777->addChild(*SoTouchSensor778);

SoShape* SoShape779 = new SoShape();
SoShape779->setUSE(QString("HAnimSiteShape"));
SoHAnimSite777->addChild(*SoShape779);

SoHAnimSegment705->addChild(*SoHAnimSite777);

SoHAnimSite* SoHAnimSite780 = new SoHAnimSite();
SoHAnimSite780->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite780->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite780->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoTouchSensor* SoTouchSensor781 = new SoTouchSensor();
SoTouchSensor781->setDescription(QString("HAnimSite sellion"));
SoHAnimSite780->addChild(*SoTouchSensor781);

SoShape* SoShape782 = new SoShape();
SoShape782->setUSE(QString("HAnimSiteShape"));
SoHAnimSite780->addChild(*SoShape782);

SoHAnimSegment705->addChild(*SoHAnimSite780);

SoHAnimSite* SoHAnimSite783 = new SoHAnimSite();
SoHAnimSite783->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite783->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite783->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoTouchSensor* SoTouchSensor784 = new SoTouchSensor();
SoTouchSensor784->setDescription(QString("HAnimSite r_infraorbitale"));
SoHAnimSite783->addChild(*SoTouchSensor784);

SoShape* SoShape785 = new SoShape();
SoShape785->setUSE(QString("HAnimSiteShape"));
SoHAnimSite783->addChild(*SoShape785);

SoHAnimSegment705->addChild(*SoHAnimSite783);

SoHAnimSite* SoHAnimSite786 = new SoHAnimSite();
SoHAnimSite786->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite786->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite786->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoTouchSensor* SoTouchSensor787 = new SoTouchSensor();
SoTouchSensor787->setDescription(QString("HAnimSite l_infraorbitale"));
SoHAnimSite786->addChild(*SoTouchSensor787);

SoShape* SoShape788 = new SoShape();
SoShape788->setUSE(QString("HAnimSiteShape"));
SoHAnimSite786->addChild(*SoShape788);

SoHAnimSegment705->addChild(*SoHAnimSite786);

SoHAnimSite* SoHAnimSite789 = new SoHAnimSite();
SoHAnimSite789->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite789->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite789->setTranslation(new float[]{0.0061,1.541,0.0805});
SoTouchSensor* SoTouchSensor790 = new SoTouchSensor();
SoTouchSensor790->setDescription(QString("HAnimSite supramenton"));
SoHAnimSite789->addChild(*SoTouchSensor790);

SoShape* SoShape791 = new SoShape();
SoShape791->setUSE(QString("HAnimSiteShape"));
SoHAnimSite789->addChild(*SoShape791);

SoHAnimSegment705->addChild(*SoHAnimSite789);

SoHAnimSite* SoHAnimSite792 = new SoHAnimSite();
SoHAnimSite792->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite792->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite792->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoTouchSensor* SoTouchSensor793 = new SoTouchSensor();
SoTouchSensor793->setDescription(QString("HAnimSite r_tragion"));
SoHAnimSite792->addChild(*SoTouchSensor793);

SoShape* SoShape794 = new SoShape();
SoShape794->setUSE(QString("HAnimSiteShape"));
SoHAnimSite792->addChild(*SoShape794);

SoHAnimSegment705->addChild(*SoHAnimSite792);

SoHAnimSite* SoHAnimSite795 = new SoHAnimSite();
SoHAnimSite795->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite795->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite795->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoTouchSensor* SoTouchSensor796 = new SoTouchSensor();
SoTouchSensor796->setDescription(QString("HAnimSite r_gonion"));
SoHAnimSite795->addChild(*SoTouchSensor796);

SoShape* SoShape797 = new SoShape();
SoShape797->setUSE(QString("HAnimSiteShape"));
SoHAnimSite795->addChild(*SoShape797);

SoHAnimSegment705->addChild(*SoHAnimSite795);

SoHAnimSite* SoHAnimSite798 = new SoHAnimSite();
SoHAnimSite798->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite798->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite798->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoTouchSensor* SoTouchSensor799 = new SoTouchSensor();
SoTouchSensor799->setDescription(QString("HAnimSite l_tragion"));
SoHAnimSite798->addChild(*SoTouchSensor799);

SoShape* SoShape800 = new SoShape();
SoShape800->setUSE(QString("HAnimSiteShape"));
SoHAnimSite798->addChild(*SoShape800);

SoHAnimSegment705->addChild(*SoHAnimSite798);

SoHAnimSite* SoHAnimSite801 = new SoHAnimSite();
SoHAnimSite801->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite801->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite801->setTranslation(new float[]{0.0631,1.553,0.033});
SoTouchSensor* SoTouchSensor802 = new SoTouchSensor();
SoTouchSensor802->setDescription(QString("HAnimSite l_gonion"));
SoHAnimSite801->addChild(*SoTouchSensor802);

SoShape* SoShape803 = new SoShape();
SoShape803->setUSE(QString("HAnimSiteShape"));
SoHAnimSite801->addChild(*SoShape803);

SoHAnimSegment705->addChild(*SoHAnimSite801);

SoHAnimSite* SoHAnimSite804 = new SoHAnimSite();
SoHAnimSite804->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite804->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite804->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoTouchSensor* SoTouchSensor805 = new SoTouchSensor();
SoTouchSensor805->setDescription(QString("HAnimSite nuchale"));
SoHAnimSite804->addChild(*SoTouchSensor805);

SoShape* SoShape806 = new SoShape();
SoShape806->setUSE(QString("HAnimSiteShape"));
SoHAnimSite804->addChild(*SoShape806);

SoHAnimSegment705->addChild(*SoHAnimSite804);

SoHAnimJoint704->addChildren(*SoHAnimSegment705);

SoHAnimJoint* SoHAnimJoint807 = new SoHAnimJoint();
SoHAnimJoint807->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint807->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint807->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment808 = new SoHAnimSegment();
SoHAnimSegment808->setDEF(QString("hanim_l_eyeball"));
SoHAnimSegment808->X3DNode::setName(QString("l_eyeball"));
SoTouchSensor* SoTouchSensor809 = new SoTouchSensor();
SoTouchSensor809->setDescription(QString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"));
SoHAnimSegment808->addChild(*SoTouchSensor809);

SoTransform* SoTransform810 = new SoTransform();
SoTransform810->setTranslation(new float[]{0.0336,1.6332,0.0502});
SoShape* SoShape811 = new SoShape();
SoShape811->setUSE(QString("HAnimJointShape"));
SoTransform810->addChild(*SoShape811);

SoHAnimSegment808->addChild(*SoTransform810);

SoShape* SoShape812 = new SoShape();
SoLineSet* SoLineSet813 = new SoLineSet();
SoLineSet813->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA814 = new SoColorRGBA();
SoColorRGBA814->setDEF(QString("HAnimSiteViewpointLineColorRGBA"));
SoColorRGBA814->setColor(new float[]{0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.1}, 8);
SoLineSet813->addChild(*SoColorRGBA814);

SoCoordinate* SoCoordinate815 = new SoCoordinate();
SoCoordinate815->setPoint(new float[]{0.0336,1.6332,0.0502,0.034,1.64,0.05}, 6);
SoLineSet813->setCoord(*SoCoordinate815);

SoShape812->setGeometry(*SoLineSet813);

SoHAnimSegment808->addChild(*SoShape812);

SoHAnimSite* SoHAnimSite816 = new SoHAnimSite();
SoHAnimSite816->setDEF(QString("hanim_l_eyeball_site_view"));
SoHAnimSite816->X3DNode::setName(QString("l_eyeball_site_view"));
SoHAnimSite816->setTranslation(new float[]{0.034,1.64,0.05});
SoTouchSensor* SoTouchSensor817 = new SoTouchSensor();
SoTouchSensor817->setDescription(QString("HAnimSite l_eyeball_site_view"));
SoHAnimSite816->addChild(*SoTouchSensor817);

SoShape* SoShape818 = new SoShape();
SoShape818->setUSE(QString("HAnimSiteShape"));
SoHAnimSite816->addChild(*SoShape818);

SoViewpoint* SoViewpoint819 = new SoViewpoint();
SoViewpoint819->setDEF(QString("hanim_l_eyeball_site_viewpoint"));
SoViewpoint819->setDescription(QString("l_eyeball_site_viewpoint looking forward"));
SoViewpoint819->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint819->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite816->addChild(*SoViewpoint819);

SoAnchor* SoAnchor820 = new SoAnchor();
SoAnchor820->setDescription(QString("HAnimSite hanim_l_eyeball_site_view Viewpoint"));
SoAnchor820->setUrl(new QString[]{QString("#hanim_l_eyeball_site_viewpoint")}, 1);
SoLOD* SoLOD821 = new SoLOD();
SoLOD821->setForceTransitions(true);
SoLOD821->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo822 = new SoWorldInfo();
SoWorldInfo822->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD821->addChildren(*SoWorldInfo822);

SoShape* SoShape823 = new SoShape();
SoShape823->setDEF(QString("HAnimSiteViewpointShape"));
SoVRMLAppearance* SoVRMLAppearance824 = new SoVRMLAppearance();
SoMaterial* SoMaterial825 = new SoMaterial();
SoMaterial825->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoMaterial825->setTransparency(0.6);
SoVRMLAppearance824->addChild(*SoMaterial825);

SoShape823->addChild(*SoVRMLAppearance824);

SoIndexedFaceSet* SoIndexedFaceSet826 = new SoIndexedFaceSet();
SoIndexedFaceSet826->setDEF(QString("SiteViewpointDiamondIFS"));
SoIndexedFaceSet826->setCreaseAngle(0.5);
SoIndexedFaceSet826->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate827 = new SoCoordinate();
SoCoordinate827->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet826->setCoord(*SoCoordinate827);

SoShape823->setGeometry(*SoIndexedFaceSet826);

SoLOD821->addChildren(SoShape823);

SoAnchor820->addChild(*SoLOD821);

SoHAnimSite816->addChild(SoAnchor820);

SoHAnimSegment808->addChild(*SoHAnimSite816);

SoHAnimJoint807->addChildren(*SoHAnimSegment808);

SoHAnimJoint704->addChildren(*SoHAnimJoint807);

SoHAnimJoint* SoHAnimJoint828 = new SoHAnimJoint();
SoHAnimJoint828->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint828->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint828->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment829 = new SoHAnimSegment();
SoHAnimSegment829->setDEF(QString("hanim_l_eyelid"));
SoHAnimSegment829->X3DNode::setName(QString("l_eyelid"));
SoTouchSensor* SoTouchSensor830 = new SoTouchSensor();
SoTouchSensor830->setDescription(QString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"));
SoHAnimSegment829->addChild(*SoTouchSensor830);

SoTransform* SoTransform831 = new SoTransform();
SoTransform831->setTranslation(new float[]{0.0336,1.6332,0.0502});
SoShape* SoShape832 = new SoShape();
SoShape832->setUSE(QString("HAnimJointShape"));
SoTransform831->addChild(*SoShape832);

SoHAnimSegment829->addChild(*SoTransform831);

SoHAnimJoint828->addChildren(*SoHAnimSegment829);

SoHAnimJoint704->addChildren(*SoHAnimJoint828);

SoHAnimJoint* SoHAnimJoint833 = new SoHAnimJoint();
SoHAnimJoint833->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint833->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint833->setCenter(new float[]{0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment834 = new SoHAnimSegment();
SoHAnimSegment834->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSegment834->X3DNode::setName(QString("l_eyebrow"));
SoTouchSensor* SoTouchSensor835 = new SoTouchSensor();
SoTouchSensor835->setDescription(QString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"));
SoHAnimSegment834->addChild(*SoTouchSensor835);

SoTransform* SoTransform836 = new SoTransform();
SoTransform836->setTranslation(new float[]{0.0336,1.635,0.0506});
SoShape* SoShape837 = new SoShape();
SoShape837->setUSE(QString("HAnimJointShape"));
SoTransform836->addChild(*SoShape837);

SoHAnimSegment834->addChild(*SoTransform836);

SoHAnimJoint833->addChildren(*SoHAnimSegment834);

SoHAnimJoint704->addChildren(*SoHAnimJoint833);

SoHAnimJoint* SoHAnimJoint838 = new SoHAnimJoint();
SoHAnimJoint838->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint838->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint838->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment839 = new SoHAnimSegment();
SoHAnimSegment839->setDEF(QString("hanim_r_eyeball"));
SoHAnimSegment839->X3DNode::setName(QString("r_eyeball"));
SoTouchSensor* SoTouchSensor840 = new SoTouchSensor();
SoTouchSensor840->setDescription(QString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"));
SoHAnimSegment839->addChild(*SoTouchSensor840);

SoTransform* SoTransform841 = new SoTransform();
SoTransform841->setTranslation(new float[]{-0.0336,1.6332,0.0502});
SoShape* SoShape842 = new SoShape();
SoShape842->setUSE(QString("HAnimJointShape"));
SoTransform841->addChild(*SoShape842);

SoHAnimSegment839->addChild(*SoTransform841);

SoShape* SoShape843 = new SoShape();
SoLineSet* SoLineSet844 = new SoLineSet();
SoLineSet844->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA845 = new SoColorRGBA();
SoColorRGBA845->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet844->addChild(*SoColorRGBA845);

SoCoordinate* SoCoordinate846 = new SoCoordinate();
SoCoordinate846->setPoint(new float[]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05}, 6);
SoLineSet844->setCoord(*SoCoordinate846);

SoShape843->setGeometry(*SoLineSet844);

SoHAnimSegment839->addChild(*SoShape843);

SoHAnimSite* SoHAnimSite847 = new SoHAnimSite();
SoHAnimSite847->setDEF(QString("hanim_r_eyeball_site_view"));
SoHAnimSite847->X3DNode::setName(QString("r_eyeball_site_view"));
SoHAnimSite847->setTranslation(new float[]{-0.034,1.64,0.05});
SoTouchSensor* SoTouchSensor848 = new SoTouchSensor();
SoTouchSensor848->setDescription(QString("HAnimSite r_eyeball_site_view"));
SoHAnimSite847->addChild(*SoTouchSensor848);

SoShape* SoShape849 = new SoShape();
SoShape849->setUSE(QString("HAnimSiteShape"));
SoHAnimSite847->addChild(*SoShape849);

SoViewpoint* SoViewpoint850 = new SoViewpoint();
SoViewpoint850->setDEF(QString("hanim_r_eyeball_site_viewpoint"));
SoViewpoint850->setDescription(QString("r_eyeball_site_viewpoint looking forward"));
SoViewpoint850->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint850->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite847->addChild(*SoViewpoint850);

SoAnchor* SoAnchor851 = new SoAnchor();
SoAnchor851->setDescription(QString("HAnimSite hanim_r_eyeball_site_view Viewpoint"));
SoAnchor851->setUrl(new QString[]{QString("#hanim_r_eyeball_site_viewpoint")}, 1);
SoLOD* SoLOD852 = new SoLOD();
SoLOD852->setForceTransitions(true);
SoLOD852->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo853 = new SoWorldInfo();
SoWorldInfo853->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD852->addChildren(*SoWorldInfo853);

SoShape* SoShape854 = new SoShape();
SoShape854->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD852->addChildren(SoShape854);

SoAnchor851->addChild(*SoLOD852);

SoHAnimSite847->addChild(SoAnchor851);

SoHAnimSegment839->addChild(*SoHAnimSite847);

SoHAnimJoint838->addChildren(*SoHAnimSegment839);

SoHAnimJoint704->addChildren(*SoHAnimJoint838);

SoHAnimJoint* SoHAnimJoint855 = new SoHAnimJoint();
SoHAnimJoint855->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint855->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint855->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment856 = new SoHAnimSegment();
SoHAnimSegment856->setDEF(QString("hanim_r_eyelid"));
SoHAnimSegment856->X3DNode::setName(QString("r_eyelid"));
SoTouchSensor* SoTouchSensor857 = new SoTouchSensor();
SoTouchSensor857->setDescription(QString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"));
SoHAnimSegment856->addChild(*SoTouchSensor857);

SoTransform* SoTransform858 = new SoTransform();
SoTransform858->setTranslation(new float[]{-0.0336,1.6332,0.0502});
SoShape* SoShape859 = new SoShape();
SoShape859->setUSE(QString("HAnimJointShape"));
SoTransform858->addChild(*SoShape859);

SoHAnimSegment856->addChild(*SoTransform858);

SoHAnimJoint855->addChildren(*SoHAnimSegment856);

SoHAnimJoint704->addChildren(*SoHAnimJoint855);

SoHAnimJoint* SoHAnimJoint860 = new SoHAnimJoint();
SoHAnimJoint860->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint860->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint860->setCenter(new float[]{-0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment861 = new SoHAnimSegment();
SoHAnimSegment861->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSegment861->X3DNode::setName(QString("r_eyebrow"));
SoTouchSensor* SoTouchSensor862 = new SoTouchSensor();
SoTouchSensor862->setDescription(QString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"));
SoHAnimSegment861->addChild(*SoTouchSensor862);

SoTransform* SoTransform863 = new SoTransform();
SoTransform863->setTranslation(new float[]{-0.0336,1.635,0.0506});
SoShape* SoShape864 = new SoShape();
SoShape864->setUSE(QString("HAnimJointShape"));
SoTransform863->addChild(*SoShape864);

SoHAnimSegment861->addChild(*SoTransform863);

SoHAnimJoint860->addChildren(*SoHAnimSegment861);

SoHAnimJoint704->addChildren(*SoHAnimJoint860);

SoHAnimJoint* SoHAnimJoint865 = new SoHAnimJoint();
SoHAnimJoint865->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint865->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint865->setCenter(new float[]{0.0,1.63,0.015});
SoHAnimSegment* SoHAnimSegment866 = new SoHAnimSegment();
SoHAnimSegment866->setDEF(QString("hanim_jaw"));
SoHAnimSegment866->X3DNode::setName(QString("jaw"));
SoTouchSensor* SoTouchSensor867 = new SoTouchSensor();
SoTouchSensor867->setDescription(QString("HAnimJoint temporomandibular, HAnimSegment jaw"));
SoHAnimSegment866->addChild(*SoTouchSensor867);

SoTransform* SoTransform868 = new SoTransform();
SoTransform868->setTranslation(new float[]{0.0,1.63,0.015});
SoShape* SoShape869 = new SoShape();
SoShape869->setUSE(QString("HAnimJointShape"));
SoTransform868->addChild(*SoShape869);

SoHAnimSegment866->addChild(*SoTransform868);

SoShape* SoShape870 = new SoShape();
SoLineSet* SoLineSet871 = new SoLineSet();
SoLineSet871->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA872 = new SoColorRGBA();
SoColorRGBA872->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet871->addChild(*SoColorRGBA872);

SoCoordinate* SoCoordinate873 = new SoCoordinate();
SoCoordinate873->setPoint(new float[]{0.0,1.63,0.015,0.045,1.63,0.0}, 6);
SoLineSet871->setCoord(*SoCoordinate873);

SoShape870->setGeometry(*SoLineSet871);

SoHAnimSegment866->addChild(*SoShape870);

SoShape* SoShape874 = new SoShape();
SoLineSet* SoLineSet875 = new SoLineSet();
SoLineSet875->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA876 = new SoColorRGBA();
SoColorRGBA876->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet875->addChild(*SoColorRGBA876);

SoCoordinate* SoCoordinate877 = new SoCoordinate();
SoCoordinate877->setPoint(new float[]{0.0,1.63,0.015,-0.045,1.63,0.0}, 6);
SoLineSet875->setCoord(*SoCoordinate877);

SoShape874->setGeometry(*SoLineSet875);

SoHAnimSegment866->addChild(*SoShape874);

SoHAnimSite* SoHAnimSite878 = new SoHAnimSite();
SoHAnimSite878->setDEF(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimSite878->X3DNode::setName(QString("temporomandibular_l_site_pt"));
SoHAnimSite878->setTranslation(new float[]{0.045,1.63,0.0});
SoTouchSensor* SoTouchSensor879 = new SoTouchSensor();
SoTouchSensor879->setDescription(QString("HAnimSite temporomandibular_l_site"));
SoHAnimSite878->addChild(*SoTouchSensor879);

SoShape* SoShape880 = new SoShape();
SoShape880->setUSE(QString("HAnimSiteShape"));
SoHAnimSite878->addChild(*SoShape880);

SoHAnimSegment866->addChild(*SoHAnimSite878);

SoHAnimSite* SoHAnimSite881 = new SoHAnimSite();
SoHAnimSite881->setDEF(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimSite881->X3DNode::setName(QString("temporomandibular_r_site_pt"));
SoHAnimSite881->setTranslation(new float[]{-0.045,1.63,0.0});
SoTouchSensor* SoTouchSensor882 = new SoTouchSensor();
SoTouchSensor882->setDescription(QString("HAnimSite temporomandibular_r_site"));
SoHAnimSite881->addChild(*SoTouchSensor882);

SoShape* SoShape883 = new SoShape();
SoShape883->setUSE(QString("HAnimSiteShape"));
SoHAnimSite881->addChild(*SoShape883);

SoHAnimSegment866->addChild(*SoHAnimSite881);

SoHAnimJoint865->addChildren(*SoHAnimSegment866);

SoHAnimJoint704->addChildren(*SoHAnimJoint865);

SoHAnimJoint695->addChildren(*SoHAnimJoint704);

SoHAnimJoint686->addChildren(*SoHAnimJoint695);

SoHAnimJoint677->addChildren(*SoHAnimJoint686);

SoHAnimJoint668->addChildren(*SoHAnimJoint677);

SoHAnimJoint659->addChildren(*SoHAnimJoint668);

SoHAnimJoint650->addChildren(*SoHAnimJoint659);

SoHAnimJoint627->addChildren(*SoHAnimJoint650);

SoHAnimJoint596->addChildren(*SoHAnimJoint627);

SoHAnimJoint* SoHAnimJoint884 = new SoHAnimJoint();
SoHAnimJoint884->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint884->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint884->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment885 = new SoHAnimSegment();
SoHAnimSegment885->setDEF(QString("hanim_l_clavicle"));
SoHAnimSegment885->X3DNode::setName(QString("l_clavicle"));
SoTouchSensor* SoTouchSensor886 = new SoTouchSensor();
SoTouchSensor886->setDescription(QString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"));
SoHAnimSegment885->addChild(*SoTouchSensor886);

SoTransform* SoTransform887 = new SoTransform();
SoTransform887->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoShape* SoShape888 = new SoShape();
SoShape888->setUSE(QString("HAnimJointShape"));
SoTransform887->addChild(*SoShape888);

SoHAnimSegment885->addChild(*SoTransform887);

SoShape* SoShape889 = new SoShape();
SoLineSet* SoLineSet890 = new SoLineSet();
SoLineSet890->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA891 = new SoColorRGBA();
SoColorRGBA891->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet890->addChild(*SoColorRGBA891);

SoCoordinate* SoCoordinate892 = new SoCoordinate();
SoCoordinate892->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoLineSet890->setCoord(*SoCoordinate892);

SoShape889->setGeometry(*SoLineSet890);

SoHAnimSegment885->addChild(*SoShape889);

SoShape* SoShape893 = new SoShape();
SoLineSet* SoLineSet894 = new SoLineSet();
SoLineSet894->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA895 = new SoColorRGBA();
SoColorRGBA895->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet894->addChild(*SoColorRGBA895);

SoCoordinate* SoCoordinate896 = new SoCoordinate();
SoCoordinate896->setPoint(new float[]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394}, 6);
SoLineSet894->setCoord(*SoCoordinate896);

SoShape893->setGeometry(*SoLineSet894);

SoHAnimSegment885->addChild(*SoShape893);

SoShape* SoShape897 = new SoShape();
SoLineSet* SoLineSet898 = new SoLineSet();
SoLineSet898->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA899 = new SoColorRGBA();
SoColorRGBA899->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet898->addChild(*SoColorRGBA899);

SoCoordinate* SoCoordinate900 = new SoCoordinate();
SoCoordinate900->setPoint(new float[]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049}, 6);
SoLineSet898->setCoord(*SoCoordinate900);

SoShape897->setGeometry(*SoLineSet898);

SoHAnimSegment885->addChild(*SoShape897);

SoShape* SoShape901 = new SoShape();
SoLineSet* SoLineSet902 = new SoLineSet();
SoLineSet902->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA903 = new SoColorRGBA();
SoColorRGBA903->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet902->addChild(*SoColorRGBA903);

SoCoordinate* SoCoordinate904 = new SoCoordinate();
SoCoordinate904->setPoint(new float[]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075}, 6);
SoLineSet902->setCoord(*SoCoordinate904);

SoShape901->setGeometry(*SoLineSet902);

SoHAnimSegment885->addChild(*SoShape901);

SoShape* SoShape905 = new SoShape();
SoLineSet* SoLineSet906 = new SoLineSet();
SoLineSet906->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA907 = new SoColorRGBA();
SoColorRGBA907->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet906->addChild(*SoColorRGBA907);

SoCoordinate* SoCoordinate908 = new SoCoordinate();
SoCoordinate908->setPoint(new float[]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875}, 6);
SoLineSet906->setCoord(*SoCoordinate908);

SoShape905->setGeometry(*SoLineSet906);

SoHAnimSegment885->addChild(*SoShape905);

SoHAnimSite* SoHAnimSite909 = new SoHAnimSite();
SoHAnimSite909->setDEF(QString("hanim_l_clavicale_pt"));
SoHAnimSite909->X3DNode::setName(QString("l_clavicale_pt"));
SoHAnimSite909->setTranslation(new float[]{0.0271,1.4943,0.0394});
SoTouchSensor* SoTouchSensor910 = new SoTouchSensor();
SoTouchSensor910->setDescription(QString("HAnimSite l_clavicale"));
SoHAnimSite909->addChild(*SoTouchSensor910);

SoShape* SoShape911 = new SoShape();
SoShape911->setUSE(QString("HAnimSiteShape"));
SoHAnimSite909->addChild(*SoShape911);

SoHAnimSegment885->addChild(*SoHAnimSite909);

SoHAnimSite* SoHAnimSite912 = new SoHAnimSite();
SoHAnimSite912->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite912->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite912->setTranslation(new float[]{0.2032,1.476,-0.049});
SoTouchSensor* SoTouchSensor913 = new SoTouchSensor();
SoTouchSensor913->setDescription(QString("HAnimSite l_acromion"));
SoHAnimSite912->addChild(*SoTouchSensor913);

SoShape* SoShape914 = new SoShape();
SoShape914->setUSE(QString("HAnimSiteShape"));
SoHAnimSite912->addChild(*SoShape914);

SoHAnimSegment885->addChild(*SoHAnimSite912);

SoHAnimSite* SoHAnimSite915 = new SoHAnimSite();
SoHAnimSite915->setDEF(QString("hanim_l_axilla_ant_pt"));
SoHAnimSite915->X3DNode::setName(QString("l_axilla_ant_pt"));
SoHAnimSite915->setTranslation(new float[]{0.1777,1.4065,-0.0075});
SoTouchSensor* SoTouchSensor916 = new SoTouchSensor();
SoTouchSensor916->setDescription(QString("HAnimSite l_axilla_ant"));
SoHAnimSite915->addChild(*SoTouchSensor916);

SoShape* SoShape917 = new SoShape();
SoShape917->setUSE(QString("HAnimSiteShape"));
SoHAnimSite915->addChild(*SoShape917);

SoHAnimSegment885->addChild(*SoHAnimSite915);

SoHAnimSite* SoHAnimSite918 = new SoHAnimSite();
SoHAnimSite918->setDEF(QString("hanim_l_axilla_post_pt"));
SoHAnimSite918->X3DNode::setName(QString("l_axilla_post_pt"));
SoHAnimSite918->setTranslation(new float[]{0.1706,1.4072,-0.0875});
SoTouchSensor* SoTouchSensor919 = new SoTouchSensor();
SoTouchSensor919->setDescription(QString("HAnimSite l_axilla_post"));
SoHAnimSite918->addChild(*SoTouchSensor919);

SoShape* SoShape920 = new SoShape();
SoShape920->setUSE(QString("HAnimSiteShape"));
SoHAnimSite918->addChild(*SoShape920);

SoHAnimSegment885->addChild(*SoHAnimSite918);

SoHAnimJoint884->addChildren(*SoHAnimSegment885);

SoHAnimJoint* SoHAnimJoint921 = new SoHAnimJoint();
SoHAnimJoint921->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint921->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint921->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment922 = new SoHAnimSegment();
SoHAnimSegment922->setDEF(QString("hanim_l_scapula"));
SoHAnimSegment922->X3DNode::setName(QString("l_scapula"));
SoTouchSensor* SoTouchSensor923 = new SoTouchSensor();
SoTouchSensor923->setDescription(QString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"));
SoHAnimSegment922->addChild(*SoTouchSensor923);

SoTransform* SoTransform924 = new SoTransform();
SoTransform924->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoShape* SoShape925 = new SoShape();
SoShape925->setUSE(QString("HAnimJointShape"));
SoTransform924->addChild(*SoShape925);

SoHAnimSegment922->addChild(*SoTransform924);

SoShape* SoShape926 = new SoShape();
SoLineSet* SoLineSet927 = new SoLineSet();
SoLineSet927->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA928 = new SoColorRGBA();
SoColorRGBA928->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet927->addChild(*SoColorRGBA928);

SoCoordinate* SoCoordinate929 = new SoCoordinate();
SoCoordinate929->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
SoLineSet927->setCoord(*SoCoordinate929);

SoShape926->setGeometry(*SoLineSet927);

SoHAnimSegment922->addChild(*SoShape926);

SoHAnimJoint921->addChildren(*SoHAnimSegment922);

SoHAnimJoint* SoHAnimJoint930 = new SoHAnimJoint();
SoHAnimJoint930->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint930->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint930->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment931 = new SoHAnimSegment();
SoHAnimSegment931->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment931->X3DNode::setName(QString("l_upperarm"));
SoTouchSensor* SoTouchSensor932 = new SoTouchSensor();
SoTouchSensor932->setDescription(QString("HAnimJoint l_shoulder, HAnimSegment l_upperarm"));
SoHAnimSegment931->addChild(*SoTouchSensor932);

SoTransform* SoTransform933 = new SoTransform();
SoTransform933->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoShape* SoShape934 = new SoShape();
SoShape934->setUSE(QString("HAnimJointShape"));
SoTransform933->addChild(*SoShape934);

SoHAnimSegment931->addChild(*SoTransform933);

SoShape* SoShape935 = new SoShape();
SoLineSet* SoLineSet936 = new SoLineSet();
SoLineSet936->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA937 = new SoColorRGBA();
SoColorRGBA937->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet936->addChild(*SoColorRGBA937);

SoCoordinate* SoCoordinate938 = new SoCoordinate();
SoCoordinate938->setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
SoLineSet936->setCoord(*SoCoordinate938);

SoShape935->setGeometry(*SoLineSet936);

SoHAnimSegment931->addChild(*SoShape935);

SoShape* SoShape939 = new SoShape();
SoLineSet* SoLineSet940 = new SoLineSet();
SoLineSet940->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA941 = new SoColorRGBA();
SoColorRGBA941->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet940->addChild(*SoColorRGBA941);

SoCoordinate* SoCoordinate942 = new SoCoordinate();
SoCoordinate942->setPoint(new float[]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11}, 6);
SoLineSet940->setCoord(*SoCoordinate942);

SoShape939->setGeometry(*SoLineSet940);

SoHAnimSegment931->addChild(*SoShape939);

SoHAnimSite* SoHAnimSite943 = new SoHAnimSite();
SoHAnimSite943->setDEF(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimSite943->X3DNode::setName(QString("l_humeral_lateral_epicn_pt"));
SoHAnimSite943->setTranslation(new float[]{0.228,1.1482,-0.11});
SoTouchSensor* SoTouchSensor944 = new SoTouchSensor();
SoTouchSensor944->setDescription(QString("HAnimSite l_humeral_lateral_epicn"));
SoHAnimSite943->addChild(*SoTouchSensor944);

SoShape* SoShape945 = new SoShape();
SoShape945->setUSE(QString("HAnimSiteShape"));
SoHAnimSite943->addChild(*SoShape945);

SoHAnimSegment931->addChild(*SoHAnimSite943);

SoHAnimJoint930->addChildren(*SoHAnimSegment931);

SoHAnimJoint* SoHAnimJoint946 = new SoHAnimJoint();
SoHAnimJoint946->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint946->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint946->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment947 = new SoHAnimSegment();
SoHAnimSegment947->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment947->X3DNode::setName(QString("l_forearm"));
SoTouchSensor* SoTouchSensor948 = new SoTouchSensor();
SoTouchSensor948->setDescription(QString("HAnimJoint l_elbow, HAnimSegment l_forearm"));
SoHAnimSegment947->addChild(*SoTouchSensor948);

SoTransform* SoTransform949 = new SoTransform();
SoTransform949->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoShape* SoShape950 = new SoShape();
SoShape950->setUSE(QString("HAnimJointShape"));
SoTransform949->addChild(*SoShape950);

SoHAnimSegment947->addChild(*SoTransform949);

SoShape* SoShape951 = new SoShape();
SoLineSet* SoLineSet952 = new SoLineSet();
SoLineSet952->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA953 = new SoColorRGBA();
SoColorRGBA953->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet952->addChild(*SoColorRGBA953);

SoCoordinate* SoCoordinate954 = new SoCoordinate();
SoCoordinate954->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
SoLineSet952->setCoord(*SoCoordinate954);

SoShape951->setGeometry(*SoLineSet952);

SoHAnimSegment947->addChild(*SoShape951);

SoShape* SoShape955 = new SoShape();
SoLineSet* SoLineSet956 = new SoLineSet();
SoLineSet956->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA957 = new SoColorRGBA();
SoColorRGBA957->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet956->addChild(*SoColorRGBA957);

SoCoordinate* SoCoordinate958 = new SoCoordinate();
SoCoordinate958->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415}, 6);
SoLineSet956->setCoord(*SoCoordinate958);

SoShape955->setGeometry(*SoLineSet956);

SoHAnimSegment947->addChild(*SoShape955);

SoShape* SoShape959 = new SoShape();
SoLineSet* SoLineSet960 = new SoLineSet();
SoLineSet960->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA961 = new SoColorRGBA();
SoColorRGBA961->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet960->addChild(*SoColorRGBA961);

SoCoordinate* SoCoordinate962 = new SoCoordinate();
SoCoordinate962->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123}, 6);
SoLineSet960->setCoord(*SoCoordinate962);

SoShape959->setGeometry(*SoLineSet960);

SoHAnimSegment947->addChild(*SoShape959);

SoShape* SoShape963 = new SoShape();
SoLineSet* SoLineSet964 = new SoLineSet();
SoLineSet964->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA965 = new SoColorRGBA();
SoColorRGBA965->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet964->addChild(*SoColorRGBA965);

SoCoordinate* SoCoordinate966 = new SoCoordinate();
SoCoordinate966->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113}, 6);
SoLineSet964->setCoord(*SoCoordinate966);

SoShape963->setGeometry(*SoLineSet964);

SoHAnimSegment947->addChild(*SoShape963);

SoShape* SoShape967 = new SoShape();
SoLineSet* SoLineSet968 = new SoLineSet();
SoLineSet968->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA969 = new SoColorRGBA();
SoColorRGBA969->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet968->addChild(*SoColorRGBA969);

SoCoordinate* SoCoordinate970 = new SoCoordinate();
SoCoordinate970->setPoint(new float[]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167}, 6);
SoLineSet968->setCoord(*SoCoordinate970);

SoShape967->setGeometry(*SoLineSet968);

SoHAnimSegment947->addChild(*SoShape967);

SoHAnimSite* SoHAnimSite971 = new SoHAnimSite();
SoHAnimSite971->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite971->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite971->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoTouchSensor* SoTouchSensor972 = new SoTouchSensor();
SoTouchSensor972->setDescription(QString("HAnimSite l_radial_styloid"));
SoHAnimSite971->addChild(*SoTouchSensor972);

SoShape* SoShape973 = new SoShape();
SoShape973->setUSE(QString("HAnimSiteShape"));
SoHAnimSite971->addChild(*SoShape973);

SoHAnimSegment947->addChild(*SoHAnimSite971);

SoHAnimSite* SoHAnimSite974 = new SoHAnimSite();
SoHAnimSite974->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite974->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite974->setTranslation(new float[]{0.1962,1.1375,-0.1123});
SoTouchSensor* SoTouchSensor975 = new SoTouchSensor();
SoTouchSensor975->setDescription(QString("HAnimSite l_olecranon"));
SoHAnimSite974->addChild(*SoTouchSensor975);

SoShape* SoShape976 = new SoShape();
SoShape976->setUSE(QString("HAnimSiteShape"));
SoHAnimSite974->addChild(*SoShape976);

SoHAnimSegment947->addChild(*SoHAnimSite974);

SoHAnimSite* SoHAnimSite977 = new SoHAnimSite();
SoHAnimSite977->setDEF(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimSite977->X3DNode::setName(QString("l_humeral_medial_epicn_pt"));
SoHAnimSite977->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoTouchSensor* SoTouchSensor978 = new SoTouchSensor();
SoTouchSensor978->setDescription(QString("HAnimSite l_humeral_medial_epicn"));
SoHAnimSite977->addChild(*SoTouchSensor978);

SoShape* SoShape979 = new SoShape();
SoShape979->setUSE(QString("HAnimSiteShape"));
SoHAnimSite977->addChild(*SoShape979);

SoHAnimSegment947->addChild(*SoHAnimSite977);

SoHAnimSite* SoHAnimSite980 = new SoHAnimSite();
SoHAnimSite980->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite980->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite980->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoTouchSensor* SoTouchSensor981 = new SoTouchSensor();
SoTouchSensor981->setDescription(QString("HAnimSite l_radiale"));
SoHAnimSite980->addChild(*SoTouchSensor981);

SoShape* SoShape982 = new SoShape();
SoShape982->setUSE(QString("HAnimSiteShape"));
SoHAnimSite980->addChild(*SoShape982);

SoHAnimSegment947->addChild(*SoHAnimSite980);

SoHAnimJoint946->addChildren(*SoHAnimSegment947);

SoHAnimJoint* SoHAnimJoint983 = new SoHAnimJoint();
SoHAnimJoint983->setDEF(QString("hanim_l_wrist"));
SoHAnimJoint983->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint983->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment984 = new SoHAnimSegment();
SoHAnimSegment984->setDEF(QString("hanim_l_hand"));
SoHAnimSegment984->X3DNode::setName(QString("l_hand"));
SoTouchSensor* SoTouchSensor985 = new SoTouchSensor();
SoTouchSensor985->setDescription(QString("HAnimJoint l_wrist, HAnimSegment l_hand"));
SoHAnimSegment984->addChild(*SoTouchSensor985);

SoTransform* SoTransform986 = new SoTransform();
SoTransform986->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoShape* SoShape987 = new SoShape();
SoShape987->setUSE(QString("HAnimJointShape"));
SoTransform986->addChild(*SoShape987);

SoHAnimSegment984->addChild(*SoTransform986);

SoShape* SoShape988 = new SoShape();
SoLineSet* SoLineSet989 = new SoLineSet();
SoLineSet989->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA990 = new SoColorRGBA();
SoColorRGBA990->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet989->addChild(*SoColorRGBA990);

SoCoordinate* SoCoordinate991 = new SoCoordinate();
SoCoordinate991->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
SoLineSet989->setCoord(*SoCoordinate991);

SoShape988->setGeometry(*SoLineSet989);

SoHAnimSegment984->addChild(*SoShape988);

SoShape* SoShape992 = new SoShape();
SoLineSet* SoLineSet993 = new SoLineSet();
SoLineSet993->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA994 = new SoColorRGBA();
SoColorRGBA994->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet993->addChild(*SoColorRGBA994);

SoCoordinate* SoCoordinate995 = new SoCoordinate();
SoCoordinate995->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
SoLineSet993->setCoord(*SoCoordinate995);

SoShape992->setGeometry(*SoLineSet993);

SoHAnimSegment984->addChild(*SoShape992);

SoShape* SoShape996 = new SoShape();
SoLineSet* SoLineSet997 = new SoLineSet();
SoLineSet997->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA998 = new SoColorRGBA();
SoColorRGBA998->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet997->addChild(*SoColorRGBA998);

SoCoordinate* SoCoordinate999 = new SoCoordinate();
SoCoordinate999->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
SoLineSet997->setCoord(*SoCoordinate999);

SoShape996->setGeometry(*SoLineSet997);

SoHAnimSegment984->addChild(*SoShape996);

SoShape* SoShape1000 = new SoShape();
SoLineSet* SoLineSet1001 = new SoLineSet();
SoLineSet1001->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1002 = new SoColorRGBA();
SoColorRGBA1002->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1001->addChild(*SoColorRGBA1002);

SoCoordinate* SoCoordinate1003 = new SoCoordinate();
SoCoordinate1003->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
SoLineSet1001->setCoord(*SoCoordinate1003);

SoShape1000->setGeometry(*SoLineSet1001);

SoHAnimSegment984->addChild(*SoShape1000);

SoShape* SoShape1004 = new SoShape();
SoLineSet* SoLineSet1005 = new SoLineSet();
SoLineSet1005->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1006 = new SoColorRGBA();
SoColorRGBA1006->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1005->addChild(*SoColorRGBA1006);

SoCoordinate* SoCoordinate1007 = new SoCoordinate();
SoCoordinate1007->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
SoLineSet1005->setCoord(*SoCoordinate1007);

SoShape1004->setGeometry(*SoLineSet1005);

SoHAnimSegment984->addChild(*SoShape1004);

SoShape* SoShape1008 = new SoShape();
SoLineSet* SoLineSet1009 = new SoLineSet();
SoLineSet1009->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1010 = new SoColorRGBA();
SoColorRGBA1010->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1009->addChild(*SoColorRGBA1010);

SoCoordinate* SoCoordinate1011 = new SoCoordinate();
SoCoordinate1011->setPoint(new float[]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237}, 6);
SoLineSet1009->setCoord(*SoCoordinate1011);

SoShape1008->setGeometry(*SoLineSet1009);

SoHAnimSegment984->addChild(*SoShape1008);

SoShape* SoShape1012 = new SoShape();
SoLineSet* SoLineSet1013 = new SoLineSet();
SoLineSet1013->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1014 = new SoColorRGBA();
SoColorRGBA1014->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1013->addChild(*SoColorRGBA1014);

SoCoordinate* SoCoordinate1015 = new SoCoordinate();
SoCoordinate1015->setPoint(new float[]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648}, 6);
SoLineSet1013->setCoord(*SoCoordinate1015);

SoShape1012->setGeometry(*SoLineSet1013);

SoHAnimSegment984->addChild(*SoShape1012);

SoShape* SoShape1016 = new SoShape();
SoLineSet* SoLineSet1017 = new SoLineSet();
SoLineSet1017->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1018 = new SoColorRGBA();
SoColorRGBA1018->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1017->addChild(*SoColorRGBA1018);

SoCoordinate* SoCoordinate1019 = new SoCoordinate();
SoCoordinate1019->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122}, 6);
SoLineSet1017->setCoord(*SoCoordinate1019);

SoShape1016->setGeometry(*SoLineSet1017);

SoHAnimSegment984->addChild(*SoShape1016);

SoShape* SoShape1020 = new SoShape();
SoLineSet* SoLineSet1021 = new SoLineSet();
SoLineSet1021->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1022 = new SoColorRGBA();
SoColorRGBA1022->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet1021->addChild(*SoColorRGBA1022);

SoCoordinate* SoCoordinate1023 = new SoCoordinate();
SoCoordinate1023->setPoint(new float[]{0.1984,0.8663,-0.0583,0.3,0.75,0.45}, 6);
SoLineSet1021->setCoord(*SoCoordinate1023);

SoShape1020->setGeometry(*SoLineSet1021);

SoHAnimSegment984->addChild(*SoShape1020);

SoHAnimSite* SoHAnimSite1024 = new SoHAnimSite();
SoHAnimSite1024->setDEF(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimSite1024->X3DNode::setName(QString("l_metacarpal_pha2_pt"));
SoHAnimSite1024->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoTouchSensor* SoTouchSensor1025 = new SoTouchSensor();
SoTouchSensor1025->setDescription(QString("HAnimSite l_metacarpal_pha2"));
SoHAnimSite1024->addChild(*SoTouchSensor1025);

SoShape* SoShape1026 = new SoShape();
SoShape1026->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1024->addChild(*SoShape1026);

SoHAnimSegment984->addChild(*SoHAnimSite1024);

SoHAnimSite* SoHAnimSite1027 = new SoHAnimSite();
SoHAnimSite1027->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite1027->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite1027->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoTouchSensor* SoTouchSensor1028 = new SoTouchSensor();
SoTouchSensor1028->setDescription(QString("HAnimSite l_ulnar_styloid"));
SoHAnimSite1027->addChild(*SoTouchSensor1028);

SoShape* SoShape1029 = new SoShape();
SoShape1029->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1027->addChild(*SoShape1029);

SoHAnimSegment984->addChild(*SoHAnimSite1027);

SoHAnimSite* SoHAnimSite1030 = new SoHAnimSite();
SoHAnimSite1030->setDEF(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimSite1030->X3DNode::setName(QString("l_metacarpal_pha5_pt"));
SoHAnimSite1030->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoTouchSensor* SoTouchSensor1031 = new SoTouchSensor();
SoTouchSensor1031->setDescription(QString("HAnimSite l_metacarpal_pha5"));
SoHAnimSite1030->addChild(*SoTouchSensor1031);

SoShape* SoShape1032 = new SoShape();
SoShape1032->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1030->addChild(*SoShape1032);

SoHAnimSegment984->addChild(*SoHAnimSite1030);

SoHAnimSite* SoHAnimSite1033 = new SoHAnimSite();
SoHAnimSite1033->setDEF(QString("hanim_l_hand_front_view"));
SoHAnimSite1033->X3DNode::setName(QString("l_hand_front_view"));
SoHAnimSite1033->setTranslation(new float[]{0.3,0.75,0.45});
SoTouchSensor* SoTouchSensor1034 = new SoTouchSensor();
SoTouchSensor1034->setDescription(QString("HAnimSite l_hand_front_view"));
SoHAnimSite1033->addChild(*SoTouchSensor1034);

SoShape* SoShape1035 = new SoShape();
SoShape1035->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1033->addChild(*SoShape1035);

SoViewpoint* SoViewpoint1036 = new SoViewpoint();
SoViewpoint1036->setDEF(QString("hanim_l_hand_front_viewpoint"));
SoViewpoint1036->setDescription(QString("left hand front"));
SoViewpoint1036->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1036->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite1033->addChild(*SoViewpoint1036);

SoAnchor* SoAnchor1037 = new SoAnchor();
SoAnchor1037->setDescription(QString("HAnimSite hanim_l_hand_front_view Viewpoint"));
SoAnchor1037->setUrl(new QString[]{QString("#hanim_l_hand_front_viewpoint")}, 1);
SoLOD* SoLOD1038 = new SoLOD();
SoLOD1038->setForceTransitions(true);
SoLOD1038->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1039 = new SoWorldInfo();
SoWorldInfo1039->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1038->addChildren(*SoWorldInfo1039);

SoShape* SoShape1040 = new SoShape();
SoShape1040->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1038->addChildren(SoShape1040);

SoAnchor1037->addChild(*SoLOD1038);

SoHAnimSite1033->addChild(SoAnchor1037);

SoHAnimSegment984->addChild(*SoHAnimSite1033);

SoHAnimJoint983->addChildren(*SoHAnimSegment984);

SoHAnimJoint* SoHAnimJoint1041 = new SoHAnimJoint();
SoHAnimJoint1041->setDEF(QString("hanim_l_thumb1"));
SoHAnimJoint1041->X3DNode::setName(QString("l_thumb1"));
SoHAnimJoint1041->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment1042 = new SoHAnimSegment();
SoHAnimSegment1042->setDEF(QString("hanim_l_thumb_metacarpal"));
SoHAnimSegment1042->X3DNode::setName(QString("l_thumb_metacarpal"));
SoTouchSensor* SoTouchSensor1043 = new SoTouchSensor();
SoTouchSensor1043->setDescription(QString("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal"));
SoHAnimSegment1042->addChild(*SoTouchSensor1043);

SoTransform* SoTransform1044 = new SoTransform();
SoTransform1044->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape1045 = new SoShape();
SoShape1045->setUSE(QString("HAnimJointShape"));
SoTransform1044->addChild(*SoShape1045);

SoHAnimSegment1042->addChild(*SoTransform1044);

SoShape* SoShape1046 = new SoShape();
SoLineSet* SoLineSet1047 = new SoLineSet();
SoLineSet1047->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1048 = new SoColorRGBA();
SoColorRGBA1048->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1047->addChild(*SoColorRGBA1048);

SoCoordinate* SoCoordinate1049 = new SoCoordinate();
SoCoordinate1049->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoLineSet1047->setCoord(*SoCoordinate1049);

SoShape1046->setGeometry(*SoLineSet1047);

SoHAnimSegment1042->addChild(*SoShape1046);

SoHAnimJoint1041->addChildren(*SoHAnimSegment1042);

SoHAnimJoint* SoHAnimJoint1050 = new SoHAnimJoint();
SoHAnimJoint1050->setDEF(QString("hanim_l_thumb2"));
SoHAnimJoint1050->X3DNode::setName(QString("l_thumb2"));
SoHAnimJoint1050->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment1051 = new SoHAnimSegment();
SoHAnimSegment1051->setDEF(QString("hanim_l_thumb_proximal"));
SoHAnimSegment1051->X3DNode::setName(QString("l_thumb_proximal"));
SoTouchSensor* SoTouchSensor1052 = new SoTouchSensor();
SoTouchSensor1052->setDescription(QString("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal"));
SoHAnimSegment1051->addChild(*SoTouchSensor1052);

SoTransform* SoTransform1053 = new SoTransform();
SoTransform1053->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape1054 = new SoShape();
SoShape1054->setUSE(QString("HAnimJointShape"));
SoTransform1053->addChild(*SoShape1054);

SoHAnimSegment1051->addChild(*SoTransform1053);

SoShape* SoShape1055 = new SoShape();
SoLineSet* SoLineSet1056 = new SoLineSet();
SoLineSet1056->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1057 = new SoColorRGBA();
SoColorRGBA1057->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1056->addChild(*SoColorRGBA1057);

SoCoordinate* SoCoordinate1058 = new SoCoordinate();
SoCoordinate1058->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoLineSet1056->setCoord(*SoCoordinate1058);

SoShape1055->setGeometry(*SoLineSet1056);

SoHAnimSegment1051->addChild(*SoShape1055);

SoHAnimJoint1050->addChildren(*SoHAnimSegment1051);

SoHAnimJoint* SoHAnimJoint1059 = new SoHAnimJoint();
SoHAnimJoint1059->setDEF(QString("hanim_l_thumb3"));
SoHAnimJoint1059->X3DNode::setName(QString("l_thumb3"));
SoHAnimJoint1059->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment1060 = new SoHAnimSegment();
SoHAnimSegment1060->setDEF(QString("hanim_l_thumb_distal"));
SoHAnimSegment1060->X3DNode::setName(QString("l_thumb_distal"));
SoTouchSensor* SoTouchSensor1061 = new SoTouchSensor();
SoTouchSensor1061->setDescription(QString("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal"));
SoHAnimSegment1060->addChild(*SoTouchSensor1061);

SoTransform* SoTransform1062 = new SoTransform();
SoTransform1062->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape1063 = new SoShape();
SoShape1063->setUSE(QString("HAnimJointShape"));
SoTransform1062->addChild(*SoShape1063);

SoHAnimSegment1060->addChild(*SoTransform1062);

SoShape* SoShape1064 = new SoShape();
SoLineSet* SoLineSet1065 = new SoLineSet();
SoLineSet1065->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1066 = new SoColorRGBA();
SoColorRGBA1066->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1065->addChild(*SoColorRGBA1066);

SoCoordinate* SoCoordinate1067 = new SoCoordinate();
SoCoordinate1067->setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
SoLineSet1065->setCoord(*SoCoordinate1067);

SoShape1064->setGeometry(*SoLineSet1065);

SoHAnimSegment1060->addChild(*SoShape1064);

SoHAnimSite* SoHAnimSite1068 = new SoHAnimSite();
SoHAnimSite1068->setDEF(QString("hanim_l_thumb_distal_tip"));
SoHAnimSite1068->X3DNode::setName(QString("l_thumb_distal_tip"));
SoHAnimSite1068->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoTouchSensor* SoTouchSensor1069 = new SoTouchSensor();
SoTouchSensor1069->setDescription(QString("HAnimSite l_thumb_distal_tip"));
SoHAnimSite1068->addChild(*SoTouchSensor1069);

SoShape* SoShape1070 = new SoShape();
SoShape1070->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1068->addChild(*SoShape1070);

SoHAnimSegment1060->addChild(*SoHAnimSite1068);

SoHAnimJoint1059->addChildren(*SoHAnimSegment1060);

SoHAnimJoint1050->addChildren(*SoHAnimJoint1059);

SoHAnimJoint1041->addChildren(*SoHAnimJoint1050);

SoHAnimJoint983->addChildren(*SoHAnimJoint1041);

SoHAnimJoint* SoHAnimJoint1071 = new SoHAnimJoint();
SoHAnimJoint1071->setDEF(QString("hanim_l_index0"));
SoHAnimJoint1071->X3DNode::setName(QString("l_index0"));
SoHAnimJoint1071->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment1072 = new SoHAnimSegment();
SoHAnimSegment1072->setDEF(QString("hanim_l_index_metacarpal"));
SoHAnimSegment1072->X3DNode::setName(QString("l_index_metacarpal"));
SoTouchSensor* SoTouchSensor1073 = new SoTouchSensor();
SoTouchSensor1073->setDescription(QString("HAnimJoint l_index0, HAnimSegment l_index_metacarpal"));
SoHAnimSegment1072->addChild(*SoTouchSensor1073);

SoTransform* SoTransform1074 = new SoTransform();
SoTransform1074->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape1075 = new SoShape();
SoShape1075->setUSE(QString("HAnimJointShape"));
SoTransform1074->addChild(*SoShape1075);

SoHAnimSegment1072->addChild(*SoTransform1074);

SoShape* SoShape1076 = new SoShape();
SoLineSet* SoLineSet1077 = new SoLineSet();
SoLineSet1077->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1078 = new SoColorRGBA();
SoColorRGBA1078->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1077->addChild(*SoColorRGBA1078);

SoCoordinate* SoCoordinate1079 = new SoCoordinate();
SoCoordinate1079->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoLineSet1077->setCoord(*SoCoordinate1079);

SoShape1076->setGeometry(*SoLineSet1077);

SoHAnimSegment1072->addChild(*SoShape1076);

SoHAnimJoint1071->addChildren(*SoHAnimSegment1072);

SoHAnimJoint* SoHAnimJoint1080 = new SoHAnimJoint();
SoHAnimJoint1080->setDEF(QString("hanim_l_index1"));
SoHAnimJoint1080->X3DNode::setName(QString("l_index1"));
SoHAnimJoint1080->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment1081 = new SoHAnimSegment();
SoHAnimSegment1081->setDEF(QString("hanim_l_index_proximal"));
SoHAnimSegment1081->X3DNode::setName(QString("l_index_proximal"));
SoTouchSensor* SoTouchSensor1082 = new SoTouchSensor();
SoTouchSensor1082->setDescription(QString("HAnimJoint l_index1, HAnimSegment l_index_proximal"));
SoHAnimSegment1081->addChild(*SoTouchSensor1082);

SoTransform* SoTransform1083 = new SoTransform();
SoTransform1083->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape1084 = new SoShape();
SoShape1084->setUSE(QString("HAnimJointShape"));
SoTransform1083->addChild(*SoShape1084);

SoHAnimSegment1081->addChild(*SoTransform1083);

SoShape* SoShape1085 = new SoShape();
SoLineSet* SoLineSet1086 = new SoLineSet();
SoLineSet1086->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1087 = new SoColorRGBA();
SoColorRGBA1087->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1086->addChild(*SoColorRGBA1087);

SoCoordinate* SoCoordinate1088 = new SoCoordinate();
SoCoordinate1088->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoLineSet1086->setCoord(*SoCoordinate1088);

SoShape1085->setGeometry(*SoLineSet1086);

SoHAnimSegment1081->addChild(*SoShape1085);

SoHAnimJoint1080->addChildren(*SoHAnimSegment1081);

SoHAnimJoint* SoHAnimJoint1089 = new SoHAnimJoint();
SoHAnimJoint1089->setDEF(QString("hanim_l_index2"));
SoHAnimJoint1089->X3DNode::setName(QString("l_index2"));
SoHAnimJoint1089->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment1090 = new SoHAnimSegment();
SoHAnimSegment1090->setDEF(QString("hanim_l_index_middle"));
SoHAnimSegment1090->X3DNode::setName(QString("l_index_middle"));
SoTouchSensor* SoTouchSensor1091 = new SoTouchSensor();
SoTouchSensor1091->setDescription(QString("HAnimJoint l_index2, HAnimSegment l_index_middle"));
SoHAnimSegment1090->addChild(*SoTouchSensor1091);

SoTransform* SoTransform1092 = new SoTransform();
SoTransform1092->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape1093 = new SoShape();
SoShape1093->setUSE(QString("HAnimJointShape"));
SoTransform1092->addChild(*SoShape1093);

SoHAnimSegment1090->addChild(*SoTransform1092);

SoShape* SoShape1094 = new SoShape();
SoLineSet* SoLineSet1095 = new SoLineSet();
SoLineSet1095->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1096 = new SoColorRGBA();
SoColorRGBA1096->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1095->addChild(*SoColorRGBA1096);

SoCoordinate* SoCoordinate1097 = new SoCoordinate();
SoCoordinate1097->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoLineSet1095->setCoord(*SoCoordinate1097);

SoShape1094->setGeometry(*SoLineSet1095);

SoHAnimSegment1090->addChild(*SoShape1094);

SoHAnimJoint1089->addChildren(*SoHAnimSegment1090);

SoHAnimJoint* SoHAnimJoint1098 = new SoHAnimJoint();
SoHAnimJoint1098->setDEF(QString("hanim_l_index3"));
SoHAnimJoint1098->X3DNode::setName(QString("l_index3"));
SoHAnimJoint1098->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment1099 = new SoHAnimSegment();
SoHAnimSegment1099->setDEF(QString("hanim_l_index_distal"));
SoHAnimSegment1099->X3DNode::setName(QString("l_index_distal"));
SoTouchSensor* SoTouchSensor1100 = new SoTouchSensor();
SoTouchSensor1100->setDescription(QString("HAnimJoint l_index3, HAnimSegment l_index_distal"));
SoHAnimSegment1099->addChild(*SoTouchSensor1100);

SoTransform* SoTransform1101 = new SoTransform();
SoTransform1101->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape1102 = new SoShape();
SoShape1102->setUSE(QString("HAnimJointShape"));
SoTransform1101->addChild(*SoShape1102);

SoHAnimSegment1099->addChild(*SoTransform1101);

SoShape* SoShape1103 = new SoShape();
SoLineSet* SoLineSet1104 = new SoLineSet();
SoLineSet1104->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1105 = new SoColorRGBA();
SoColorRGBA1105->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1104->addChild(*SoColorRGBA1105);

SoCoordinate* SoCoordinate1106 = new SoCoordinate();
SoCoordinate1106->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
SoLineSet1104->setCoord(*SoCoordinate1106);

SoShape1103->setGeometry(*SoLineSet1104);

SoHAnimSegment1099->addChild(*SoShape1103);

SoShape* SoShape1107 = new SoShape();
SoLineSet* SoLineSet1108 = new SoLineSet();
SoLineSet1108->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1109 = new SoColorRGBA();
SoColorRGBA1109->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1108->addChild(*SoColorRGBA1109);

SoCoordinate* SoCoordinate1110 = new SoCoordinate();
SoCoordinate1110->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482}, 6);
SoLineSet1108->setCoord(*SoCoordinate1110);

SoShape1107->setGeometry(*SoLineSet1108);

SoHAnimSegment1099->addChild(*SoShape1107);

SoHAnimSite* SoHAnimSite1111 = new SoHAnimSite();
SoHAnimSite1111->setDEF(QString("hanim_l_index_distal_tip"));
SoHAnimSite1111->X3DNode::setName(QString("l_index_distal_tip"));
SoHAnimSite1111->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoTouchSensor* SoTouchSensor1112 = new SoTouchSensor();
SoTouchSensor1112->setDescription(QString("HAnimSite l_index_distal_tip"));
SoHAnimSite1111->addChild(*SoTouchSensor1112);

SoShape* SoShape1113 = new SoShape();
SoShape1113->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1111->addChild(*SoShape1113);

SoHAnimSegment1099->addChild(*SoHAnimSite1111);

SoHAnimSite* SoHAnimSite1114 = new SoHAnimSite();
SoHAnimSite1114->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite1114->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite1114->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoTouchSensor* SoTouchSensor1115 = new SoTouchSensor();
SoTouchSensor1115->setDescription(QString("HAnimSite l_dactylion"));
SoHAnimSite1114->addChild(*SoTouchSensor1115);

SoShape* SoShape1116 = new SoShape();
SoShape1116->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1114->addChild(*SoShape1116);

SoHAnimSegment1099->addChild(*SoHAnimSite1114);

SoHAnimJoint1098->addChildren(*SoHAnimSegment1099);

SoHAnimJoint1089->addChildren(*SoHAnimJoint1098);

SoHAnimJoint1080->addChildren(*SoHAnimJoint1089);

SoHAnimJoint1071->addChildren(*SoHAnimJoint1080);

SoHAnimJoint983->addChildren(*SoHAnimJoint1071);

SoHAnimJoint* SoHAnimJoint1117 = new SoHAnimJoint();
SoHAnimJoint1117->setDEF(QString("hanim_l_middle0"));
SoHAnimJoint1117->X3DNode::setName(QString("l_middle0"));
SoHAnimJoint1117->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment1118 = new SoHAnimSegment();
SoHAnimSegment1118->setDEF(QString("hanim_l_middle_metacarpal"));
SoHAnimSegment1118->X3DNode::setName(QString("l_middle_metacarpal"));
SoTouchSensor* SoTouchSensor1119 = new SoTouchSensor();
SoTouchSensor1119->setDescription(QString("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal"));
SoHAnimSegment1118->addChild(*SoTouchSensor1119);

SoTransform* SoTransform1120 = new SoTransform();
SoTransform1120->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoShape* SoShape1121 = new SoShape();
SoShape1121->setUSE(QString("HAnimJointShape"));
SoTransform1120->addChild(*SoShape1121);

SoHAnimSegment1118->addChild(*SoTransform1120);

SoShape* SoShape1122 = new SoShape();
SoLineSet* SoLineSet1123 = new SoLineSet();
SoLineSet1123->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1124 = new SoColorRGBA();
SoColorRGBA1124->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1123->addChild(*SoColorRGBA1124);

SoCoordinate* SoCoordinate1125 = new SoCoordinate();
SoCoordinate1125->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoLineSet1123->setCoord(*SoCoordinate1125);

SoShape1122->setGeometry(*SoLineSet1123);

SoHAnimSegment1118->addChild(*SoShape1122);

SoHAnimJoint1117->addChildren(*SoHAnimSegment1118);

SoHAnimJoint* SoHAnimJoint1126 = new SoHAnimJoint();
SoHAnimJoint1126->setDEF(QString("hanim_l_middle1"));
SoHAnimJoint1126->X3DNode::setName(QString("l_middle1"));
SoHAnimJoint1126->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment1127 = new SoHAnimSegment();
SoHAnimSegment1127->setDEF(QString("hanim_l_middle_proximal"));
SoHAnimSegment1127->X3DNode::setName(QString("l_middle_proximal"));
SoTouchSensor* SoTouchSensor1128 = new SoTouchSensor();
SoTouchSensor1128->setDescription(QString("HAnimJoint l_middle1, HAnimSegment l_middle_proximal"));
SoHAnimSegment1127->addChild(*SoTouchSensor1128);

SoTransform* SoTransform1129 = new SoTransform();
SoTransform1129->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoShape* SoShape1130 = new SoShape();
SoShape1130->setUSE(QString("HAnimJointShape"));
SoTransform1129->addChild(*SoShape1130);

SoHAnimSegment1127->addChild(*SoTransform1129);

SoShape* SoShape1131 = new SoShape();
SoLineSet* SoLineSet1132 = new SoLineSet();
SoLineSet1132->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1133 = new SoColorRGBA();
SoColorRGBA1133->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1132->addChild(*SoColorRGBA1133);

SoCoordinate* SoCoordinate1134 = new SoCoordinate();
SoCoordinate1134->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoLineSet1132->setCoord(*SoCoordinate1134);

SoShape1131->setGeometry(*SoLineSet1132);

SoHAnimSegment1127->addChild(*SoShape1131);

SoHAnimJoint1126->addChildren(*SoHAnimSegment1127);

SoHAnimJoint* SoHAnimJoint1135 = new SoHAnimJoint();
SoHAnimJoint1135->setDEF(QString("hanim_l_middle2"));
SoHAnimJoint1135->X3DNode::setName(QString("l_middle2"));
SoHAnimJoint1135->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment1136 = new SoHAnimSegment();
SoHAnimSegment1136->setDEF(QString("hanim_l_middle_middle"));
SoHAnimSegment1136->X3DNode::setName(QString("l_middle_middle"));
SoTouchSensor* SoTouchSensor1137 = new SoTouchSensor();
SoTouchSensor1137->setDescription(QString("HAnimJoint l_middle2, HAnimSegment l_middle_middle"));
SoHAnimSegment1136->addChild(*SoTouchSensor1137);

SoTransform* SoTransform1138 = new SoTransform();
SoTransform1138->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoShape* SoShape1139 = new SoShape();
SoShape1139->setUSE(QString("HAnimJointShape"));
SoTransform1138->addChild(*SoShape1139);

SoHAnimSegment1136->addChild(*SoTransform1138);

SoShape* SoShape1140 = new SoShape();
SoLineSet* SoLineSet1141 = new SoLineSet();
SoLineSet1141->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1142 = new SoColorRGBA();
SoColorRGBA1142->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1141->addChild(*SoColorRGBA1142);

SoCoordinate* SoCoordinate1143 = new SoCoordinate();
SoCoordinate1143->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoLineSet1141->setCoord(*SoCoordinate1143);

SoShape1140->setGeometry(*SoLineSet1141);

SoHAnimSegment1136->addChild(*SoShape1140);

SoHAnimJoint1135->addChildren(*SoHAnimSegment1136);

SoHAnimJoint* SoHAnimJoint1144 = new SoHAnimJoint();
SoHAnimJoint1144->setDEF(QString("hanim_l_middle3"));
SoHAnimJoint1144->X3DNode::setName(QString("l_middle3"));
SoHAnimJoint1144->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment1145 = new SoHAnimSegment();
SoHAnimSegment1145->setDEF(QString("hanim_l_middle_distal"));
SoHAnimSegment1145->X3DNode::setName(QString("l_middle_distal"));
SoTouchSensor* SoTouchSensor1146 = new SoTouchSensor();
SoTouchSensor1146->setDescription(QString("HAnimJoint l_middle3, HAnimSegment l_middle_distal"));
SoHAnimSegment1145->addChild(*SoTouchSensor1146);

SoTransform* SoTransform1147 = new SoTransform();
SoTransform1147->setTranslation(new float[]{0.2026,0.7011,-0.0494});
SoShape* SoShape1148 = new SoShape();
SoShape1148->setUSE(QString("HAnimJointShape"));
SoTransform1147->addChild(*SoShape1148);

SoHAnimSegment1145->addChild(*SoTransform1147);

SoShape* SoShape1149 = new SoShape();
SoLineSet* SoLineSet1150 = new SoLineSet();
SoLineSet1150->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1151 = new SoColorRGBA();
SoColorRGBA1151->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1150->addChild(*SoColorRGBA1151);

SoCoordinate* SoCoordinate1152 = new SoCoordinate();
SoCoordinate1152->setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
SoLineSet1150->setCoord(*SoCoordinate1152);

SoShape1149->setGeometry(*SoLineSet1150);

SoHAnimSegment1145->addChild(*SoShape1149);

SoHAnimSite* SoHAnimSite1153 = new SoHAnimSite();
SoHAnimSite1153->setDEF(QString("hanim_l_middle_distal_tip"));
SoHAnimSite1153->X3DNode::setName(QString("l_middle_distal_tip"));
SoHAnimSite1153->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoTouchSensor* SoTouchSensor1154 = new SoTouchSensor();
SoTouchSensor1154->setDescription(QString("HAnimSite l_middle_distal_tip"));
SoHAnimSite1153->addChild(*SoTouchSensor1154);

SoShape* SoShape1155 = new SoShape();
SoShape1155->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1153->addChild(*SoShape1155);

SoHAnimSegment1145->addChild(*SoHAnimSite1153);

SoHAnimJoint1144->addChildren(*SoHAnimSegment1145);

SoHAnimJoint1135->addChildren(*SoHAnimJoint1144);

SoHAnimJoint1126->addChildren(*SoHAnimJoint1135);

SoHAnimJoint1117->addChildren(*SoHAnimJoint1126);

SoHAnimJoint983->addChildren(*SoHAnimJoint1117);

SoHAnimJoint* SoHAnimJoint1156 = new SoHAnimJoint();
SoHAnimJoint1156->setDEF(QString("hanim_l_ring0"));
SoHAnimJoint1156->X3DNode::setName(QString("l_ring0"));
SoHAnimJoint1156->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment1157 = new SoHAnimSegment();
SoHAnimSegment1157->setDEF(QString("hanim_l_ring_metacarpal"));
SoHAnimSegment1157->X3DNode::setName(QString("l_ring_metacarpal"));
SoTouchSensor* SoTouchSensor1158 = new SoTouchSensor();
SoTouchSensor1158->setDescription(QString("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal"));
SoHAnimSegment1157->addChild(*SoTouchSensor1158);

SoTransform* SoTransform1159 = new SoTransform();
SoTransform1159->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoShape* SoShape1160 = new SoShape();
SoShape1160->setUSE(QString("HAnimJointShape"));
SoTransform1159->addChild(*SoShape1160);

SoHAnimSegment1157->addChild(*SoTransform1159);

SoShape* SoShape1161 = new SoShape();
SoLineSet* SoLineSet1162 = new SoLineSet();
SoLineSet1162->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1163 = new SoColorRGBA();
SoColorRGBA1163->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1162->addChild(*SoColorRGBA1163);

SoCoordinate* SoCoordinate1164 = new SoCoordinate();
SoCoordinate1164->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoLineSet1162->setCoord(*SoCoordinate1164);

SoShape1161->setGeometry(*SoLineSet1162);

SoHAnimSegment1157->addChild(*SoShape1161);

SoHAnimJoint1156->addChildren(*SoHAnimSegment1157);

SoHAnimJoint* SoHAnimJoint1165 = new SoHAnimJoint();
SoHAnimJoint1165->setDEF(QString("hanim_l_ring1"));
SoHAnimJoint1165->X3DNode::setName(QString("l_ring1"));
SoHAnimJoint1165->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment1166 = new SoHAnimSegment();
SoHAnimSegment1166->setDEF(QString("hanim_l_ring_proximal"));
SoHAnimSegment1166->X3DNode::setName(QString("l_ring_proximal"));
SoTouchSensor* SoTouchSensor1167 = new SoTouchSensor();
SoTouchSensor1167->setDescription(QString("HAnimJoint l_ring1, HAnimSegment l_ring_proximal"));
SoHAnimSegment1166->addChild(*SoTouchSensor1167);

SoTransform* SoTransform1168 = new SoTransform();
SoTransform1168->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoShape* SoShape1169 = new SoShape();
SoShape1169->setUSE(QString("HAnimJointShape"));
SoTransform1168->addChild(*SoShape1169);

SoHAnimSegment1166->addChild(*SoTransform1168);

SoShape* SoShape1170 = new SoShape();
SoLineSet* SoLineSet1171 = new SoLineSet();
SoLineSet1171->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1172 = new SoColorRGBA();
SoColorRGBA1172->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1171->addChild(*SoColorRGBA1172);

SoCoordinate* SoCoordinate1173 = new SoCoordinate();
SoCoordinate1173->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoLineSet1171->setCoord(*SoCoordinate1173);

SoShape1170->setGeometry(*SoLineSet1171);

SoHAnimSegment1166->addChild(*SoShape1170);

SoHAnimJoint1165->addChildren(*SoHAnimSegment1166);

SoHAnimJoint* SoHAnimJoint1174 = new SoHAnimJoint();
SoHAnimJoint1174->setDEF(QString("hanim_l_ring2"));
SoHAnimJoint1174->X3DNode::setName(QString("l_ring2"));
SoHAnimJoint1174->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment1175 = new SoHAnimSegment();
SoHAnimSegment1175->setDEF(QString("hanim_l_ring_middle"));
SoHAnimSegment1175->X3DNode::setName(QString("l_ring_middle"));
SoTouchSensor* SoTouchSensor1176 = new SoTouchSensor();
SoTouchSensor1176->setDescription(QString("HAnimJoint l_ring2, HAnimSegment l_ring_middle"));
SoHAnimSegment1175->addChild(*SoTouchSensor1176);

SoTransform* SoTransform1177 = new SoTransform();
SoTransform1177->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoShape* SoShape1178 = new SoShape();
SoShape1178->setUSE(QString("HAnimJointShape"));
SoTransform1177->addChild(*SoShape1178);

SoHAnimSegment1175->addChild(*SoTransform1177);

SoShape* SoShape1179 = new SoShape();
SoLineSet* SoLineSet1180 = new SoLineSet();
SoLineSet1180->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1181 = new SoColorRGBA();
SoColorRGBA1181->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1180->addChild(*SoColorRGBA1181);

SoCoordinate* SoCoordinate1182 = new SoCoordinate();
SoCoordinate1182->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoLineSet1180->setCoord(*SoCoordinate1182);

SoShape1179->setGeometry(*SoLineSet1180);

SoHAnimSegment1175->addChild(*SoShape1179);

SoHAnimJoint1174->addChildren(*SoHAnimSegment1175);

SoHAnimJoint* SoHAnimJoint1183 = new SoHAnimJoint();
SoHAnimJoint1183->setDEF(QString("hanim_l_ring3"));
SoHAnimJoint1183->X3DNode::setName(QString("l_ring3"));
SoHAnimJoint1183->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment1184 = new SoHAnimSegment();
SoHAnimSegment1184->setDEF(QString("hanim_l_ring_distal"));
SoHAnimSegment1184->X3DNode::setName(QString("l_ring_distal"));
SoTouchSensor* SoTouchSensor1185 = new SoTouchSensor();
SoTouchSensor1185->setDescription(QString("HAnimJoint l_ring3, HAnimSegment l_ring_distal"));
SoHAnimSegment1184->addChild(*SoTouchSensor1185);

SoTransform* SoTransform1186 = new SoTransform();
SoTransform1186->setTranslation(new float[]{0.1983,0.7045,-0.0767});
SoShape* SoShape1187 = new SoShape();
SoShape1187->setUSE(QString("HAnimJointShape"));
SoTransform1186->addChild(*SoShape1187);

SoHAnimSegment1184->addChild(*SoTransform1186);

SoShape* SoShape1188 = new SoShape();
SoLineSet* SoLineSet1189 = new SoLineSet();
SoLineSet1189->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1190 = new SoColorRGBA();
SoColorRGBA1190->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1189->addChild(*SoColorRGBA1190);

SoCoordinate* SoCoordinate1191 = new SoCoordinate();
SoCoordinate1191->setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
SoLineSet1189->setCoord(*SoCoordinate1191);

SoShape1188->setGeometry(*SoLineSet1189);

SoHAnimSegment1184->addChild(*SoShape1188);

SoHAnimSite* SoHAnimSite1192 = new SoHAnimSite();
SoHAnimSite1192->setDEF(QString("hanim_l_ring_distal_tip"));
SoHAnimSite1192->X3DNode::setName(QString("l_ring_distal_tip"));
SoHAnimSite1192->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoTouchSensor* SoTouchSensor1193 = new SoTouchSensor();
SoTouchSensor1193->setDescription(QString("HAnimSite l_ring_distal_tip"));
SoHAnimSite1192->addChild(*SoTouchSensor1193);

SoShape* SoShape1194 = new SoShape();
SoShape1194->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1192->addChild(*SoShape1194);

SoHAnimSegment1184->addChild(*SoHAnimSite1192);

SoHAnimJoint1183->addChildren(*SoHAnimSegment1184);

SoHAnimJoint1174->addChildren(*SoHAnimJoint1183);

SoHAnimJoint1165->addChildren(*SoHAnimJoint1174);

SoHAnimJoint1156->addChildren(*SoHAnimJoint1165);

SoHAnimJoint983->addChildren(*SoHAnimJoint1156);

SoHAnimJoint* SoHAnimJoint1195 = new SoHAnimJoint();
SoHAnimJoint1195->setDEF(QString("hanim_l_pinky0"));
SoHAnimJoint1195->X3DNode::setName(QString("l_pinky0"));
SoHAnimJoint1195->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment1196 = new SoHAnimSegment();
SoHAnimSegment1196->setDEF(QString("hanim_l_pinky_metacarpal"));
SoHAnimSegment1196->X3DNode::setName(QString("l_pinky_metacarpal"));
SoTouchSensor* SoTouchSensor1197 = new SoTouchSensor();
SoTouchSensor1197->setDescription(QString("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal"));
SoHAnimSegment1196->addChild(*SoTouchSensor1197);

SoTransform* SoTransform1198 = new SoTransform();
SoTransform1198->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoShape* SoShape1199 = new SoShape();
SoShape1199->setUSE(QString("HAnimJointShape"));
SoTransform1198->addChild(*SoShape1199);

SoHAnimSegment1196->addChild(*SoTransform1198);

SoShape* SoShape1200 = new SoShape();
SoLineSet* SoLineSet1201 = new SoLineSet();
SoLineSet1201->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1202 = new SoColorRGBA();
SoColorRGBA1202->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1201->addChild(*SoColorRGBA1202);

SoCoordinate* SoCoordinate1203 = new SoCoordinate();
SoCoordinate1203->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoLineSet1201->setCoord(*SoCoordinate1203);

SoShape1200->setGeometry(*SoLineSet1201);

SoHAnimSegment1196->addChild(*SoShape1200);

SoHAnimJoint1195->addChildren(*SoHAnimSegment1196);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->setDEF(QString("hanim_l_pinky1"));
SoHAnimJoint1204->X3DNode::setName(QString("l_pinky1"));
SoHAnimJoint1204->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment1205 = new SoHAnimSegment();
SoHAnimSegment1205->setDEF(QString("hanim_l_pinky_proximal"));
SoHAnimSegment1205->X3DNode::setName(QString("l_pinky_proximal"));
SoTouchSensor* SoTouchSensor1206 = new SoTouchSensor();
SoTouchSensor1206->setDescription(QString("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal"));
SoHAnimSegment1205->addChild(*SoTouchSensor1206);

SoTransform* SoTransform1207 = new SoTransform();
SoTransform1207->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoShape* SoShape1208 = new SoShape();
SoShape1208->setUSE(QString("HAnimJointShape"));
SoTransform1207->addChild(*SoShape1208);

SoHAnimSegment1205->addChild(*SoTransform1207);

SoShape* SoShape1209 = new SoShape();
SoLineSet* SoLineSet1210 = new SoLineSet();
SoLineSet1210->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1211 = new SoColorRGBA();
SoColorRGBA1211->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1210->addChild(*SoColorRGBA1211);

SoCoordinate* SoCoordinate1212 = new SoCoordinate();
SoCoordinate1212->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoLineSet1210->setCoord(*SoCoordinate1212);

SoShape1209->setGeometry(*SoLineSet1210);

SoHAnimSegment1205->addChild(*SoShape1209);

SoHAnimJoint1204->addChildren(*SoHAnimSegment1205);

SoHAnimJoint* SoHAnimJoint1213 = new SoHAnimJoint();
SoHAnimJoint1213->setDEF(QString("hanim_l_pinky2"));
SoHAnimJoint1213->X3DNode::setName(QString("l_pinky2"));
SoHAnimJoint1213->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment1214 = new SoHAnimSegment();
SoHAnimSegment1214->setDEF(QString("hanim_l_pinky_middle"));
SoHAnimSegment1214->X3DNode::setName(QString("l_pinky_middle"));
SoTouchSensor* SoTouchSensor1215 = new SoTouchSensor();
SoTouchSensor1215->setDescription(QString("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle"));
SoHAnimSegment1214->addChild(*SoTouchSensor1215);

SoTransform* SoTransform1216 = new SoTransform();
SoTransform1216->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoShape* SoShape1217 = new SoShape();
SoShape1217->setUSE(QString("HAnimJointShape"));
SoTransform1216->addChild(*SoShape1217);

SoHAnimSegment1214->addChild(*SoTransform1216);

SoShape* SoShape1218 = new SoShape();
SoLineSet* SoLineSet1219 = new SoLineSet();
SoLineSet1219->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1220 = new SoColorRGBA();
SoColorRGBA1220->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1219->addChild(*SoColorRGBA1220);

SoCoordinate* SoCoordinate1221 = new SoCoordinate();
SoCoordinate1221->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoLineSet1219->setCoord(*SoCoordinate1221);

SoShape1218->setGeometry(*SoLineSet1219);

SoHAnimSegment1214->addChild(*SoShape1218);

SoHAnimJoint1213->addChildren(*SoHAnimSegment1214);

SoHAnimJoint* SoHAnimJoint1222 = new SoHAnimJoint();
SoHAnimJoint1222->setDEF(QString("hanim_l_pinky3"));
SoHAnimJoint1222->X3DNode::setName(QString("l_pinky3"));
SoHAnimJoint1222->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment1223 = new SoHAnimSegment();
SoHAnimSegment1223->setDEF(QString("hanim_l_pinky_distal"));
SoHAnimSegment1223->X3DNode::setName(QString("l_pinky_distal"));
SoTouchSensor* SoTouchSensor1224 = new SoTouchSensor();
SoTouchSensor1224->setDescription(QString("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal"));
SoHAnimSegment1223->addChild(*SoTouchSensor1224);

SoTransform* SoTransform1225 = new SoTransform();
SoTransform1225->setTranslation(new float[]{0.1948,0.7277,-0.1017});
SoShape* SoShape1226 = new SoShape();
SoShape1226->setUSE(QString("HAnimJointShape"));
SoTransform1225->addChild(*SoShape1226);

SoHAnimSegment1223->addChild(*SoTransform1225);

SoShape* SoShape1227 = new SoShape();
SoLineSet* SoLineSet1228 = new SoLineSet();
SoLineSet1228->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1229 = new SoColorRGBA();
SoColorRGBA1229->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1228->addChild(*SoColorRGBA1229);

SoCoordinate* SoCoordinate1230 = new SoCoordinate();
SoCoordinate1230->setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
SoLineSet1228->setCoord(*SoCoordinate1230);

SoShape1227->setGeometry(*SoLineSet1228);

SoHAnimSegment1223->addChild(*SoShape1227);

SoHAnimSite* SoHAnimSite1231 = new SoHAnimSite();
SoHAnimSite1231->setDEF(QString("hanim_l_pinky_distal_tip"));
SoHAnimSite1231->X3DNode::setName(QString("l_pinky_distal_tip"));
SoHAnimSite1231->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoTouchSensor* SoTouchSensor1232 = new SoTouchSensor();
SoTouchSensor1232->setDescription(QString("HAnimSite l_pinky_distal_tip"));
SoHAnimSite1231->addChild(*SoTouchSensor1232);

SoShape* SoShape1233 = new SoShape();
SoShape1233->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1231->addChild(*SoShape1233);

SoHAnimSegment1223->addChild(*SoHAnimSite1231);

SoHAnimJoint1222->addChildren(*SoHAnimSegment1223);

SoHAnimJoint1213->addChildren(*SoHAnimJoint1222);

SoHAnimJoint1204->addChildren(*SoHAnimJoint1213);

SoHAnimJoint1195->addChildren(*SoHAnimJoint1204);

SoHAnimJoint983->addChildren(*SoHAnimJoint1195);

SoHAnimJoint946->addChildren(*SoHAnimJoint983);

SoHAnimJoint930->addChildren(*SoHAnimJoint946);

SoHAnimJoint921->addChildren(*SoHAnimJoint930);

SoHAnimJoint884->addChildren(*SoHAnimJoint921);

SoHAnimJoint596->addChildren(*SoHAnimJoint884);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint1234->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint1234->setCenter(new float[]{-0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment1235 = new SoHAnimSegment();
SoHAnimSegment1235->setDEF(QString("hanim_r_clavicle"));
SoHAnimSegment1235->X3DNode::setName(QString("r_clavicle"));
SoTouchSensor* SoTouchSensor1236 = new SoTouchSensor();
SoTouchSensor1236->setDescription(QString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"));
SoHAnimSegment1235->addChild(*SoTouchSensor1236);

SoTransform* SoTransform1237 = new SoTransform();
SoTransform1237->setTranslation(new float[]{-0.082,1.4488,-0.0353});
SoShape* SoShape1238 = new SoShape();
SoShape1238->setUSE(QString("HAnimJointShape"));
SoTransform1237->addChild(*SoShape1238);

SoHAnimSegment1235->addChild(*SoTransform1237);

SoShape* SoShape1239 = new SoShape();
SoLineSet* SoLineSet1240 = new SoLineSet();
SoLineSet1240->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1241 = new SoColorRGBA();
SoColorRGBA1241->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1240->addChild(*SoColorRGBA1241);

SoCoordinate* SoCoordinate1242 = new SoCoordinate();
SoCoordinate1242->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424}, 6);
SoLineSet1240->setCoord(*SoCoordinate1242);

SoShape1239->setGeometry(*SoLineSet1240);

SoHAnimSegment1235->addChild(*SoShape1239);

SoShape* SoShape1243 = new SoShape();
SoLineSet* SoLineSet1244 = new SoLineSet();
SoLineSet1244->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1245 = new SoColorRGBA();
SoColorRGBA1245->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1244->addChild(*SoColorRGBA1245);

SoCoordinate* SoCoordinate1246 = new SoCoordinate();
SoCoordinate1246->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04}, 6);
SoLineSet1244->setCoord(*SoCoordinate1246);

SoShape1243->setGeometry(*SoLineSet1244);

SoHAnimSegment1235->addChild(*SoShape1243);

SoShape* SoShape1247 = new SoShape();
SoLineSet* SoLineSet1248 = new SoLineSet();
SoLineSet1248->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1249 = new SoColorRGBA();
SoColorRGBA1249->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1248->addChild(*SoColorRGBA1249);

SoCoordinate* SoCoordinate1250 = new SoCoordinate();
SoCoordinate1250->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431}, 6);
SoLineSet1248->setCoord(*SoCoordinate1250);

SoShape1247->setGeometry(*SoLineSet1248);

SoHAnimSegment1235->addChild(*SoShape1247);

SoShape* SoShape1251 = new SoShape();
SoLineSet* SoLineSet1252 = new SoLineSet();
SoLineSet1252->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1253 = new SoColorRGBA();
SoColorRGBA1253->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1252->addChild(*SoColorRGBA1253);

SoCoordinate* SoCoordinate1254 = new SoCoordinate();
SoCoordinate1254->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031}, 6);
SoLineSet1252->setCoord(*SoCoordinate1254);

SoShape1251->setGeometry(*SoLineSet1252);

SoHAnimSegment1235->addChild(*SoShape1251);

SoShape* SoShape1255 = new SoShape();
SoLineSet* SoLineSet1256 = new SoLineSet();
SoLineSet1256->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1257 = new SoColorRGBA();
SoColorRGBA1257->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1256->addChild(*SoColorRGBA1257);

SoCoordinate* SoCoordinate1258 = new SoCoordinate();
SoCoordinate1258->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826}, 6);
SoLineSet1256->setCoord(*SoCoordinate1258);

SoShape1255->setGeometry(*SoLineSet1256);

SoHAnimSegment1235->addChild(*SoShape1255);

SoHAnimSite* SoHAnimSite1259 = new SoHAnimSite();
SoHAnimSite1259->setDEF(QString("hanim_r_clavicale_pt"));
SoHAnimSite1259->X3DNode::setName(QString("r_clavicale_pt"));
SoHAnimSite1259->setTranslation(new float[]{-0.0115,1.4943,0.04});
SoTouchSensor* SoTouchSensor1260 = new SoTouchSensor();
SoTouchSensor1260->setDescription(QString("HAnimSite r_clavicale"));
SoHAnimSite1259->addChild(*SoTouchSensor1260);

SoShape* SoShape1261 = new SoShape();
SoShape1261->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1259->addChild(*SoShape1261);

SoHAnimSegment1235->addChild(*SoHAnimSite1259);

SoHAnimSite* SoHAnimSite1262 = new SoHAnimSite();
SoHAnimSite1262->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite1262->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite1262->setTranslation(new float[]{-0.1905,1.4791,-0.0431});
SoTouchSensor* SoTouchSensor1263 = new SoTouchSensor();
SoTouchSensor1263->setDescription(QString("HAnimSite r_acromion"));
SoHAnimSite1262->addChild(*SoTouchSensor1263);

SoShape* SoShape1264 = new SoShape();
SoShape1264->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1262->addChild(*SoShape1264);

SoHAnimSegment1235->addChild(*SoHAnimSite1262);

SoHAnimSite* SoHAnimSite1265 = new SoHAnimSite();
SoHAnimSite1265->setDEF(QString("hanim_r_axilla_ant_pt"));
SoHAnimSite1265->X3DNode::setName(QString("r_axilla_ant_pt"));
SoHAnimSite1265->setTranslation(new float[]{-0.1626,1.4072,-0.0031});
SoTouchSensor* SoTouchSensor1266 = new SoTouchSensor();
SoTouchSensor1266->setDescription(QString("HAnimSite r_axilla_ant"));
SoHAnimSite1265->addChild(*SoTouchSensor1266);

SoShape* SoShape1267 = new SoShape();
SoShape1267->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1265->addChild(*SoShape1267);

SoHAnimSegment1235->addChild(*SoHAnimSite1265);

SoHAnimSite* SoHAnimSite1268 = new SoHAnimSite();
SoHAnimSite1268->setDEF(QString("hanim_r_axilla_post_pt"));
SoHAnimSite1268->X3DNode::setName(QString("r_axilla_post_pt"));
SoHAnimSite1268->setTranslation(new float[]{-0.1603,1.4098,-0.0826});
SoTouchSensor* SoTouchSensor1269 = new SoTouchSensor();
SoTouchSensor1269->setDescription(QString("HAnimSite r_axilla_post"));
SoHAnimSite1268->addChild(*SoTouchSensor1269);

SoShape* SoShape1270 = new SoShape();
SoShape1270->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1268->addChild(*SoShape1270);

SoHAnimSegment1235->addChild(*SoHAnimSite1268);

SoHAnimJoint1234->addChildren(*SoHAnimSegment1235);

SoHAnimJoint* SoHAnimJoint1271 = new SoHAnimJoint();
SoHAnimJoint1271->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint1271->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint1271->setCenter(new float[]{-0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment1272 = new SoHAnimSegment();
SoHAnimSegment1272->setDEF(QString("hanim_r_scapula"));
SoHAnimSegment1272->X3DNode::setName(QString("r_scapula"));
SoTouchSensor* SoTouchSensor1273 = new SoTouchSensor();
SoTouchSensor1273->setDescription(QString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"));
SoHAnimSegment1272->addChild(*SoTouchSensor1273);

SoTransform* SoTransform1274 = new SoTransform();
SoTransform1274->setTranslation(new float[]{-0.0962,1.4269,-0.0424});
SoShape* SoShape1275 = new SoShape();
SoShape1275->setUSE(QString("HAnimJointShape"));
SoTransform1274->addChild(*SoShape1275);

SoHAnimSegment1272->addChild(*SoTransform1274);

SoShape* SoShape1276 = new SoShape();
SoLineSet* SoLineSet1277 = new SoLineSet();
SoLineSet1277->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1278 = new SoColorRGBA();
SoColorRGBA1278->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1277->addChild(*SoColorRGBA1278);

SoCoordinate* SoCoordinate1279 = new SoCoordinate();
SoCoordinate1279->setPoint(new float[]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387}, 6);
SoLineSet1277->setCoord(*SoCoordinate1279);

SoShape1276->setGeometry(*SoLineSet1277);

SoHAnimSegment1272->addChild(*SoShape1276);

SoHAnimJoint1271->addChildren(*SoHAnimSegment1272);

SoHAnimJoint* SoHAnimJoint1280 = new SoHAnimJoint();
SoHAnimJoint1280->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint1280->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint1280->setCenter(new float[]{-0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment1281 = new SoHAnimSegment();
SoHAnimSegment1281->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment1281->X3DNode::setName(QString("r_upperarm"));
SoTouchSensor* SoTouchSensor1282 = new SoTouchSensor();
SoTouchSensor1282->setDescription(QString("HAnimJoint r_shoulder, HAnimSegment r_upperarm"));
SoHAnimSegment1281->addChild(*SoTouchSensor1282);

SoTransform* SoTransform1283 = new SoTransform();
SoTransform1283->setTranslation(new float[]{-0.2029,1.4376,-0.0387});
SoShape* SoShape1284 = new SoShape();
SoShape1284->setUSE(QString("HAnimJointShape"));
SoTransform1283->addChild(*SoShape1284);

SoHAnimSegment1281->addChild(*SoTransform1283);

SoShape* SoShape1285 = new SoShape();
SoLineSet* SoLineSet1286 = new SoLineSet();
SoLineSet1286->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1287 = new SoColorRGBA();
SoColorRGBA1287->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1286->addChild(*SoColorRGBA1287);

SoCoordinate* SoCoordinate1288 = new SoCoordinate();
SoCoordinate1288->setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682}, 6);
SoLineSet1286->setCoord(*SoCoordinate1288);

SoShape1285->setGeometry(*SoLineSet1286);

SoHAnimSegment1281->addChild(*SoShape1285);

SoShape* SoShape1289 = new SoShape();
SoLineSet* SoLineSet1290 = new SoLineSet();
SoLineSet1290->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1291 = new SoColorRGBA();
SoColorRGBA1291->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1290->addChild(*SoColorRGBA1291);

SoCoordinate* SoCoordinate1292 = new SoCoordinate();
SoCoordinate1292->setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033}, 6);
SoLineSet1290->setCoord(*SoCoordinate1292);

SoShape1289->setGeometry(*SoLineSet1290);

SoHAnimSegment1281->addChild(*SoShape1289);

SoHAnimSite* SoHAnimSite1293 = new SoHAnimSite();
SoHAnimSite1293->setDEF(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimSite1293->X3DNode::setName(QString("r_humeral_lateral_epicn_pt"));
SoHAnimSite1293->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoTouchSensor* SoTouchSensor1294 = new SoTouchSensor();
SoTouchSensor1294->setDescription(QString("HAnimSite r_humeral_lateral_epicn"));
SoHAnimSite1293->addChild(*SoTouchSensor1294);

SoShape* SoShape1295 = new SoShape();
SoShape1295->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1293->addChild(*SoShape1295);

SoHAnimSegment1281->addChild(*SoHAnimSite1293);

SoHAnimJoint1280->addChildren(*SoHAnimSegment1281);

SoHAnimJoint* SoHAnimJoint1296 = new SoHAnimJoint();
SoHAnimJoint1296->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint1296->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint1296->setCenter(new float[]{-0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment1297 = new SoHAnimSegment();
SoHAnimSegment1297->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment1297->X3DNode::setName(QString("r_forearm"));
SoTouchSensor* SoTouchSensor1298 = new SoTouchSensor();
SoTouchSensor1298->setDescription(QString("HAnimJoint r_elbow, HAnimSegment r_forearm"));
SoHAnimSegment1297->addChild(*SoTouchSensor1298);

SoTransform* SoTransform1299 = new SoTransform();
SoTransform1299->setTranslation(new float[]{-0.2014,1.1357,-0.0682});
SoShape* SoShape1300 = new SoShape();
SoShape1300->setUSE(QString("HAnimJointShape"));
SoTransform1299->addChild(*SoShape1300);

SoHAnimSegment1297->addChild(*SoTransform1299);

SoShape* SoShape1301 = new SoShape();
SoLineSet* SoLineSet1302 = new SoLineSet();
SoLineSet1302->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1303 = new SoColorRGBA();
SoColorRGBA1303->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1302->addChild(*SoColorRGBA1303);

SoCoordinate* SoCoordinate1304 = new SoCoordinate();
SoCoordinate1304->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583}, 6);
SoLineSet1302->setCoord(*SoCoordinate1304);

SoShape1301->setGeometry(*SoLineSet1302);

SoHAnimSegment1297->addChild(*SoShape1301);

SoShape* SoShape1305 = new SoShape();
SoLineSet* SoLineSet1306 = new SoLineSet();
SoLineSet1306->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1307 = new SoColorRGBA();
SoColorRGBA1307->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1306->addChild(*SoColorRGBA1307);

SoCoordinate* SoCoordinate1308 = new SoCoordinate();
SoCoordinate1308->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036}, 6);
SoLineSet1306->setCoord(*SoCoordinate1308);

SoShape1305->setGeometry(*SoLineSet1306);

SoHAnimSegment1297->addChild(*SoShape1305);

SoShape* SoShape1309 = new SoShape();
SoLineSet* SoLineSet1310 = new SoLineSet();
SoLineSet1310->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1311 = new SoColorRGBA();
SoColorRGBA1311->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1310->addChild(*SoColorRGBA1311);

SoCoordinate* SoCoordinate1312 = new SoCoordinate();
SoCoordinate1312->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065}, 6);
SoLineSet1310->setCoord(*SoCoordinate1312);

SoShape1309->setGeometry(*SoLineSet1310);

SoHAnimSegment1297->addChild(*SoShape1309);

SoShape* SoShape1313 = new SoShape();
SoLineSet* SoLineSet1314 = new SoLineSet();
SoLineSet1314->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1315 = new SoColorRGBA();
SoColorRGBA1315->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1314->addChild(*SoColorRGBA1315);

SoCoordinate* SoCoordinate1316 = new SoCoordinate();
SoCoordinate1316->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062}, 6);
SoLineSet1314->setCoord(*SoCoordinate1316);

SoShape1313->setGeometry(*SoLineSet1314);

SoHAnimSegment1297->addChild(*SoShape1313);

SoShape* SoShape1317 = new SoShape();
SoLineSet* SoLineSet1318 = new SoLineSet();
SoLineSet1318->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1319 = new SoColorRGBA();
SoColorRGBA1319->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1318->addChild(*SoColorRGBA1319);

SoCoordinate* SoCoordinate1320 = new SoCoordinate();
SoCoordinate1320->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091}, 6);
SoLineSet1318->setCoord(*SoCoordinate1320);

SoShape1317->setGeometry(*SoLineSet1318);

SoHAnimSegment1297->addChild(*SoShape1317);

SoHAnimSite* SoHAnimSite1321 = new SoHAnimSite();
SoHAnimSite1321->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite1321->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite1321->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoTouchSensor* SoTouchSensor1322 = new SoTouchSensor();
SoTouchSensor1322->setDescription(QString("HAnimSite r_radial_styloid"));
SoHAnimSite1321->addChild(*SoTouchSensor1322);

SoShape* SoShape1323 = new SoShape();
SoShape1323->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1321->addChild(*SoShape1323);

SoHAnimSegment1297->addChild(*SoHAnimSite1321);

SoHAnimSite* SoHAnimSite1324 = new SoHAnimSite();
SoHAnimSite1324->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite1324->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite1324->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoTouchSensor* SoTouchSensor1325 = new SoTouchSensor();
SoTouchSensor1325->setDescription(QString("HAnimSite r_olecranon"));
SoHAnimSite1324->addChild(*SoTouchSensor1325);

SoShape* SoShape1326 = new SoShape();
SoShape1326->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1324->addChild(*SoShape1326);

SoHAnimSegment1297->addChild(*SoHAnimSite1324);

SoHAnimSite* SoHAnimSite1327 = new SoHAnimSite();
SoHAnimSite1327->setDEF(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimSite1327->X3DNode::setName(QString("r_humeral_medial_epicn_pt"));
SoHAnimSite1327->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoTouchSensor* SoTouchSensor1328 = new SoTouchSensor();
SoTouchSensor1328->setDescription(QString("HAnimSite r_humeral_medial_epicn"));
SoHAnimSite1327->addChild(*SoTouchSensor1328);

SoShape* SoShape1329 = new SoShape();
SoShape1329->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1327->addChild(*SoShape1329);

SoHAnimSegment1297->addChild(*SoHAnimSite1327);

SoHAnimSite* SoHAnimSite1330 = new SoHAnimSite();
SoHAnimSite1330->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite1330->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite1330->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoTouchSensor* SoTouchSensor1331 = new SoTouchSensor();
SoTouchSensor1331->setDescription(QString("HAnimSite r_radiale"));
SoHAnimSite1330->addChild(*SoTouchSensor1331);

SoShape* SoShape1332 = new SoShape();
SoShape1332->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1330->addChild(*SoShape1332);

SoHAnimSegment1297->addChild(*SoHAnimSite1330);

SoHAnimJoint1296->addChildren(*SoHAnimSegment1297);

SoHAnimJoint* SoHAnimJoint1333 = new SoHAnimJoint();
SoHAnimJoint1333->setDEF(QString("hanim_r_wrist"));
SoHAnimJoint1333->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint1333->setCenter(new float[]{-0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment1334 = new SoHAnimSegment();
SoHAnimSegment1334->setDEF(QString("hanim_r_hand"));
SoHAnimSegment1334->X3DNode::setName(QString("r_hand"));
SoTouchSensor* SoTouchSensor1335 = new SoTouchSensor();
SoTouchSensor1335->setDescription(QString("HAnimJoint r_wrist, HAnimSegment r_hand"));
SoHAnimSegment1334->addChild(*SoTouchSensor1335);

SoTransform* SoTransform1336 = new SoTransform();
SoTransform1336->setTranslation(new float[]{-0.1984,0.8663,-0.0583});
SoShape* SoShape1337 = new SoShape();
SoShape1337->setUSE(QString("HAnimJointShape"));
SoTransform1336->addChild(*SoShape1337);

SoHAnimSegment1334->addChild(*SoTransform1336);

SoShape* SoShape1338 = new SoShape();
SoLineSet* SoLineSet1339 = new SoLineSet();
SoLineSet1339->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1340 = new SoColorRGBA();
SoColorRGBA1340->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1339->addChild(*SoColorRGBA1340);

SoCoordinate* SoCoordinate1341 = new SoCoordinate();
SoCoordinate1341->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534}, 6);
SoLineSet1339->setCoord(*SoCoordinate1341);

SoShape1338->setGeometry(*SoLineSet1339);

SoHAnimSegment1334->addChild(*SoShape1338);

SoShape* SoShape1342 = new SoShape();
SoLineSet* SoLineSet1343 = new SoLineSet();
SoLineSet1343->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1344 = new SoColorRGBA();
SoColorRGBA1344->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1343->addChild(*SoColorRGBA1344);

SoCoordinate* SoCoordinate1345 = new SoCoordinate();
SoCoordinate1345->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028}, 6);
SoLineSet1343->setCoord(*SoCoordinate1345);

SoShape1342->setGeometry(*SoLineSet1343);

SoHAnimSegment1334->addChild(*SoShape1342);

SoShape* SoShape1346 = new SoShape();
SoLineSet* SoLineSet1347 = new SoLineSet();
SoLineSet1347->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1348 = new SoColorRGBA();
SoColorRGBA1348->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1347->addChild(*SoColorRGBA1348);

SoCoordinate* SoCoordinate1349 = new SoCoordinate();
SoCoordinate1349->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053}, 6);
SoLineSet1347->setCoord(*SoCoordinate1349);

SoShape1346->setGeometry(*SoLineSet1347);

SoHAnimSegment1334->addChild(*SoShape1346);

SoShape* SoShape1350 = new SoShape();
SoLineSet* SoLineSet1351 = new SoLineSet();
SoLineSet1351->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1352 = new SoColorRGBA();
SoColorRGBA1352->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1351->addChild(*SoColorRGBA1352);

SoCoordinate* SoCoordinate1353 = new SoCoordinate();
SoCoordinate1353->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794}, 6);
SoLineSet1351->setCoord(*SoCoordinate1353);

SoShape1350->setGeometry(*SoLineSet1351);

SoHAnimSegment1334->addChild(*SoShape1350);

SoShape* SoShape1354 = new SoShape();
SoLineSet* SoLineSet1355 = new SoLineSet();
SoLineSet1355->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1356 = new SoColorRGBA();
SoColorRGBA1356->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1355->addChild(*SoColorRGBA1356);

SoCoordinate* SoCoordinate1357 = new SoCoordinate();
SoCoordinate1357->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036}, 6);
SoLineSet1355->setCoord(*SoCoordinate1357);

SoShape1354->setGeometry(*SoLineSet1355);

SoHAnimSegment1334->addChild(*SoShape1354);

SoShape* SoShape1358 = new SoShape();
SoLineSet* SoLineSet1359 = new SoLineSet();
SoLineSet1359->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1360 = new SoColorRGBA();
SoColorRGBA1360->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1359->addChild(*SoColorRGBA1360);

SoCoordinate* SoCoordinate1361 = new SoCoordinate();
SoCoordinate1361->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177}, 6);
SoLineSet1359->setCoord(*SoCoordinate1361);

SoShape1358->setGeometry(*SoLineSet1359);

SoHAnimSegment1334->addChild(*SoShape1358);

SoShape* SoShape1362 = new SoShape();
SoLineSet* SoLineSet1363 = new SoLineSet();
SoLineSet1363->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1364 = new SoColorRGBA();
SoColorRGBA1364->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1363->addChild(*SoColorRGBA1364);

SoCoordinate* SoCoordinate1365 = new SoCoordinate();
SoCoordinate1365->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584}, 6);
SoLineSet1363->setCoord(*SoCoordinate1365);

SoShape1362->setGeometry(*SoLineSet1363);

SoHAnimSegment1334->addChild(*SoShape1362);

SoShape* SoShape1366 = new SoShape();
SoLineSet* SoLineSet1367 = new SoLineSet();
SoLineSet1367->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1368 = new SoColorRGBA();
SoColorRGBA1368->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1367->addChild(*SoColorRGBA1368);

SoCoordinate* SoCoordinate1369 = new SoCoordinate();
SoCoordinate1369->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064}, 6);
SoLineSet1367->setCoord(*SoCoordinate1369);

SoShape1366->setGeometry(*SoLineSet1367);

SoHAnimSegment1334->addChild(*SoShape1366);

SoShape* SoShape1370 = new SoShape();
SoLineSet* SoLineSet1371 = new SoLineSet();
SoLineSet1371->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1372 = new SoColorRGBA();
SoColorRGBA1372->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet1371->addChild(*SoColorRGBA1372);

SoCoordinate* SoCoordinate1373 = new SoCoordinate();
SoCoordinate1373->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45}, 6);
SoLineSet1371->setCoord(*SoCoordinate1373);

SoShape1370->setGeometry(*SoLineSet1371);

SoHAnimSegment1334->addChild(*SoShape1370);

SoHAnimSite* SoHAnimSite1374 = new SoHAnimSite();
SoHAnimSite1374->setDEF(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimSite1374->X3DNode::setName(QString("r_metacarpal_pha2_pt"));
SoHAnimSite1374->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoTouchSensor* SoTouchSensor1375 = new SoTouchSensor();
SoTouchSensor1375->setDescription(QString("HAnimSite r_metacarpal_pha2"));
SoHAnimSite1374->addChild(*SoTouchSensor1375);

SoShape* SoShape1376 = new SoShape();
SoShape1376->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1374->addChild(*SoShape1376);

SoHAnimSegment1334->addChild(*SoHAnimSite1374);

SoHAnimSite* SoHAnimSite1377 = new SoHAnimSite();
SoHAnimSite1377->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite1377->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite1377->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoTouchSensor* SoTouchSensor1378 = new SoTouchSensor();
SoTouchSensor1378->setDescription(QString("HAnimSite r_ulnar_styloid"));
SoHAnimSite1377->addChild(*SoTouchSensor1378);

SoShape* SoShape1379 = new SoShape();
SoShape1379->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1377->addChild(*SoShape1379);

SoHAnimSegment1334->addChild(*SoHAnimSite1377);

SoHAnimSite* SoHAnimSite1380 = new SoHAnimSite();
SoHAnimSite1380->setDEF(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimSite1380->X3DNode::setName(QString("r_metacarpal_pha5_pt"));
SoHAnimSite1380->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoTouchSensor* SoTouchSensor1381 = new SoTouchSensor();
SoTouchSensor1381->setDescription(QString("HAnimSite r_metacarpal_pha5"));
SoHAnimSite1380->addChild(*SoTouchSensor1381);

SoShape* SoShape1382 = new SoShape();
SoShape1382->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1380->addChild(*SoShape1382);

SoHAnimSegment1334->addChild(*SoHAnimSite1380);

SoHAnimSite* SoHAnimSite1383 = new SoHAnimSite();
SoHAnimSite1383->setDEF(QString("hanim_r_hand_front_view"));
SoHAnimSite1383->X3DNode::setName(QString("r_hand_front_view"));
SoHAnimSite1383->setTranslation(new float[]{-0.3,0.75,0.45});
SoTouchSensor* SoTouchSensor1384 = new SoTouchSensor();
SoTouchSensor1384->setDescription(QString("HAnimSite r_hand_front_view"));
SoHAnimSite1383->addChild(*SoTouchSensor1384);

SoShape* SoShape1385 = new SoShape();
SoShape1385->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1383->addChild(*SoShape1385);

SoViewpoint* SoViewpoint1386 = new SoViewpoint();
SoViewpoint1386->setDEF(QString("hanim_r_hand_front_viewpoint"));
SoViewpoint1386->setDescription(QString("right hand front"));
SoViewpoint1386->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1386->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite1383->addChild(*SoViewpoint1386);

SoAnchor* SoAnchor1387 = new SoAnchor();
SoAnchor1387->setDescription(QString("HAnimSite hanim_r_hand_front_view Viewpoint"));
SoAnchor1387->setUrl(new QString[]{QString("#hanim_r_hand_front_viewpoint")}, 1);
SoLOD* SoLOD1388 = new SoLOD();
SoLOD1388->setForceTransitions(true);
SoLOD1388->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1389 = new SoWorldInfo();
SoWorldInfo1389->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1388->addChildren(*SoWorldInfo1389);

SoShape* SoShape1390 = new SoShape();
SoShape1390->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1388->addChildren(SoShape1390);

SoAnchor1387->addChild(*SoLOD1388);

SoHAnimSite1383->addChild(SoAnchor1387);

SoHAnimSegment1334->addChild(*SoHAnimSite1383);

SoHAnimJoint1333->addChildren(*SoHAnimSegment1334);

SoHAnimJoint* SoHAnimJoint1391 = new SoHAnimJoint();
SoHAnimJoint1391->setDEF(QString("hanim_r_thumb1"));
SoHAnimJoint1391->X3DNode::setName(QString("r_thumb1"));
SoHAnimJoint1391->setCenter(new float[]{-0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment1392 = new SoHAnimSegment();
SoHAnimSegment1392->setDEF(QString("hanim_r_thumb_metacarpal"));
SoHAnimSegment1392->X3DNode::setName(QString("r_thumb_metacarpal"));
SoTouchSensor* SoTouchSensor1393 = new SoTouchSensor();
SoTouchSensor1393->setDescription(QString("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal"));
SoHAnimSegment1392->addChild(*SoTouchSensor1393);

SoTransform* SoTransform1394 = new SoTransform();
SoTransform1394->setTranslation(new float[]{-0.1924,0.8472,-0.0534});
SoShape* SoShape1395 = new SoShape();
SoShape1395->setUSE(QString("HAnimJointShape"));
SoTransform1394->addChild(*SoShape1395);

SoHAnimSegment1392->addChild(*SoTransform1394);

SoShape* SoShape1396 = new SoShape();
SoLineSet* SoLineSet1397 = new SoLineSet();
SoLineSet1397->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1398 = new SoColorRGBA();
SoColorRGBA1398->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1397->addChild(*SoColorRGBA1398);

SoCoordinate* SoCoordinate1399 = new SoCoordinate();
SoCoordinate1399->setPoint(new float[]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246}, 6);
SoLineSet1397->setCoord(*SoCoordinate1399);

SoShape1396->setGeometry(*SoLineSet1397);

SoHAnimSegment1392->addChild(*SoShape1396);

SoHAnimJoint1391->addChildren(*SoHAnimSegment1392);

SoHAnimJoint* SoHAnimJoint1400 = new SoHAnimJoint();
SoHAnimJoint1400->setDEF(QString("hanim_r_thumb2"));
SoHAnimJoint1400->X3DNode::setName(QString("r_thumb2"));
SoHAnimJoint1400->setCenter(new float[]{-0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment1401 = new SoHAnimSegment();
SoHAnimSegment1401->setDEF(QString("hanim_r_thumb_proximal"));
SoHAnimSegment1401->X3DNode::setName(QString("r_thumb_proximal"));
SoTouchSensor* SoTouchSensor1402 = new SoTouchSensor();
SoTouchSensor1402->setDescription(QString("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal"));
SoHAnimSegment1401->addChild(*SoTouchSensor1402);

SoTransform* SoTransform1403 = new SoTransform();
SoTransform1403->setTranslation(new float[]{-0.1951,0.8226,0.0246});
SoShape* SoShape1404 = new SoShape();
SoShape1404->setUSE(QString("HAnimJointShape"));
SoTransform1403->addChild(*SoShape1404);

SoHAnimSegment1401->addChild(*SoTransform1403);

SoShape* SoShape1405 = new SoShape();
SoLineSet* SoLineSet1406 = new SoLineSet();
SoLineSet1406->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1407 = new SoColorRGBA();
SoColorRGBA1407->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1406->addChild(*SoColorRGBA1407);

SoCoordinate* SoCoordinate1408 = new SoCoordinate();
SoCoordinate1408->setPoint(new float[]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464}, 6);
SoLineSet1406->setCoord(*SoCoordinate1408);

SoShape1405->setGeometry(*SoLineSet1406);

SoHAnimSegment1401->addChild(*SoShape1405);

SoHAnimJoint1400->addChildren(*SoHAnimSegment1401);

SoHAnimJoint* SoHAnimJoint1409 = new SoHAnimJoint();
SoHAnimJoint1409->setDEF(QString("hanim_r_thumb3"));
SoHAnimJoint1409->X3DNode::setName(QString("r_thumb3"));
SoHAnimJoint1409->setCenter(new float[]{-0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment1410 = new SoHAnimSegment();
SoHAnimSegment1410->setDEF(QString("hanim_r_thumb_distal"));
SoHAnimSegment1410->X3DNode::setName(QString("r_thumb_distal"));
SoTouchSensor* SoTouchSensor1411 = new SoTouchSensor();
SoTouchSensor1411->setDescription(QString("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal"));
SoHAnimSegment1410->addChild(*SoTouchSensor1411);

SoTransform* SoTransform1412 = new SoTransform();
SoTransform1412->setTranslation(new float[]{-0.1955,0.8159,0.0464});
SoShape* SoShape1413 = new SoShape();
SoShape1413->setUSE(QString("HAnimJointShape"));
SoTransform1412->addChild(*SoShape1413);

SoHAnimSegment1410->addChild(*SoTransform1412);

SoShape* SoShape1414 = new SoShape();
SoLineSet* SoLineSet1415 = new SoLineSet();
SoLineSet1415->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1416 = new SoColorRGBA();
SoColorRGBA1416->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1415->addChild(*SoColorRGBA1416);

SoCoordinate* SoCoordinate1417 = new SoCoordinate();
SoCoordinate1417->setPoint(new float[]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082}, 6);
SoLineSet1415->setCoord(*SoCoordinate1417);

SoShape1414->setGeometry(*SoLineSet1415);

SoHAnimSegment1410->addChild(*SoShape1414);

SoHAnimSite* SoHAnimSite1418 = new SoHAnimSite();
SoHAnimSite1418->setDEF(QString("hanim_r_thumb_distal_tip"));
SoHAnimSite1418->X3DNode::setName(QString("r_thumb_distal_tip"));
SoHAnimSite1418->setTranslation(new float[]{-0.1869,0.809,0.082});
SoTouchSensor* SoTouchSensor1419 = new SoTouchSensor();
SoTouchSensor1419->setDescription(QString("HAnimSite r_thumb_distal_tip"));
SoHAnimSite1418->addChild(*SoTouchSensor1419);

SoShape* SoShape1420 = new SoShape();
SoShape1420->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1418->addChild(*SoShape1420);

SoHAnimSegment1410->addChild(*SoHAnimSite1418);

SoHAnimJoint1409->addChildren(*SoHAnimSegment1410);

SoHAnimJoint1400->addChildren(*SoHAnimJoint1409);

SoHAnimJoint1391->addChildren(*SoHAnimJoint1400);

SoHAnimJoint1333->addChildren(*SoHAnimJoint1391);

SoHAnimJoint* SoHAnimJoint1421 = new SoHAnimJoint();
SoHAnimJoint1421->setDEF(QString("hanim_r_index0"));
SoHAnimJoint1421->X3DNode::setName(QString("r_index0"));
SoHAnimJoint1421->setCenter(new float[]{-0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment1422 = new SoHAnimSegment();
SoHAnimSegment1422->setDEF(QString("hanim_r_index_metacarpal"));
SoHAnimSegment1422->X3DNode::setName(QString("r_index_metacarpal"));
SoTouchSensor* SoTouchSensor1423 = new SoTouchSensor();
SoTouchSensor1423->setDescription(QString("HAnimJoint r_index0, HAnimSegment r_index_metacarpal"));
SoHAnimSegment1422->addChild(*SoTouchSensor1423);

SoTransform* SoTransform1424 = new SoTransform();
SoTransform1424->setTranslation(new float[]{-0.1983,0.8024,-0.028});
SoShape* SoShape1425 = new SoShape();
SoShape1425->setUSE(QString("HAnimJointShape"));
SoTransform1424->addChild(*SoShape1425);

SoHAnimSegment1422->addChild(*SoTransform1424);

SoShape* SoShape1426 = new SoShape();
SoLineSet* SoLineSet1427 = new SoLineSet();
SoLineSet1427->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1428 = new SoColorRGBA();
SoColorRGBA1428->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1427->addChild(*SoColorRGBA1428);

SoCoordinate* SoCoordinate1429 = new SoCoordinate();
SoCoordinate1429->setPoint(new float[]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028}, 6);
SoLineSet1427->setCoord(*SoCoordinate1429);

SoShape1426->setGeometry(*SoLineSet1427);

SoHAnimSegment1422->addChild(*SoShape1426);

SoHAnimJoint1421->addChildren(*SoHAnimSegment1422);

SoHAnimJoint* SoHAnimJoint1430 = new SoHAnimJoint();
SoHAnimJoint1430->setDEF(QString("hanim_r_index1"));
SoHAnimJoint1430->X3DNode::setName(QString("r_index1"));
SoHAnimJoint1430->setCenter(new float[]{-0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment1431 = new SoHAnimSegment();
SoHAnimSegment1431->setDEF(QString("hanim_r_index_proximal"));
SoHAnimSegment1431->X3DNode::setName(QString("r_index_proximal"));
SoTouchSensor* SoTouchSensor1432 = new SoTouchSensor();
SoTouchSensor1432->setDescription(QString("HAnimJoint r_index1, HAnimSegment r_index_proximal"));
SoHAnimSegment1431->addChild(*SoTouchSensor1432);

SoTransform* SoTransform1433 = new SoTransform();
SoTransform1433->setTranslation(new float[]{-0.1983,0.7815,-0.028});
SoShape* SoShape1434 = new SoShape();
SoShape1434->setUSE(QString("HAnimJointShape"));
SoTransform1433->addChild(*SoShape1434);

SoHAnimSegment1431->addChild(*SoTransform1433);

SoShape* SoShape1435 = new SoShape();
SoLineSet* SoLineSet1436 = new SoLineSet();
SoLineSet1436->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1437 = new SoColorRGBA();
SoColorRGBA1437->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1436->addChild(*SoColorRGBA1437);

SoCoordinate* SoCoordinate1438 = new SoCoordinate();
SoCoordinate1438->setPoint(new float[]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248}, 6);
SoLineSet1436->setCoord(*SoCoordinate1438);

SoShape1435->setGeometry(*SoLineSet1436);

SoHAnimSegment1431->addChild(*SoShape1435);

SoHAnimJoint1430->addChildren(*SoHAnimSegment1431);

SoHAnimJoint* SoHAnimJoint1439 = new SoHAnimJoint();
SoHAnimJoint1439->setDEF(QString("hanim_r_index2"));
SoHAnimJoint1439->X3DNode::setName(QString("r_index2"));
SoHAnimJoint1439->setCenter(new float[]{-0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment1440 = new SoHAnimSegment();
SoHAnimSegment1440->setDEF(QString("hanim_r_index_middle"));
SoHAnimSegment1440->X3DNode::setName(QString("r_index_middle"));
SoTouchSensor* SoTouchSensor1441 = new SoTouchSensor();
SoTouchSensor1441->setDescription(QString("HAnimJoint r_index2, HAnimSegment r_index_middle"));
SoHAnimSegment1440->addChild(*SoTouchSensor1441);

SoTransform* SoTransform1442 = new SoTransform();
SoTransform1442->setTranslation(new float[]{-0.2017,0.7363,-0.0248});
SoShape* SoShape1443 = new SoShape();
SoShape1443->setUSE(QString("HAnimJointShape"));
SoTransform1442->addChild(*SoShape1443);

SoHAnimSegment1440->addChild(*SoTransform1442);

SoShape* SoShape1444 = new SoShape();
SoLineSet* SoLineSet1445 = new SoLineSet();
SoLineSet1445->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1446 = new SoColorRGBA();
SoColorRGBA1446->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1445->addChild(*SoColorRGBA1446);

SoCoordinate* SoCoordinate1447 = new SoCoordinate();
SoCoordinate1447->setPoint(new float[]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236}, 6);
SoLineSet1445->setCoord(*SoCoordinate1447);

SoShape1444->setGeometry(*SoLineSet1445);

SoHAnimSegment1440->addChild(*SoShape1444);

SoHAnimJoint1439->addChildren(*SoHAnimSegment1440);

SoHAnimJoint* SoHAnimJoint1448 = new SoHAnimJoint();
SoHAnimJoint1448->setDEF(QString("hanim_r_index3"));
SoHAnimJoint1448->X3DNode::setName(QString("r_index3"));
SoHAnimJoint1448->setCenter(new float[]{-0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment1449 = new SoHAnimSegment();
SoHAnimSegment1449->setDEF(QString("hanim_r_index_distal"));
SoHAnimSegment1449->X3DNode::setName(QString("r_index_distal"));
SoTouchSensor* SoTouchSensor1450 = new SoTouchSensor();
SoTouchSensor1450->setDescription(QString("HAnimJoint r_index3, HAnimSegment r_index_distal"));
SoHAnimSegment1449->addChild(*SoTouchSensor1450);

SoTransform* SoTransform1451 = new SoTransform();
SoTransform1451->setTranslation(new float[]{-0.2028,0.7139,-0.0236});
SoShape* SoShape1452 = new SoShape();
SoShape1452->setUSE(QString("HAnimJointShape"));
SoTransform1451->addChild(*SoShape1452);

SoHAnimSegment1449->addChild(*SoTransform1451);

SoShape* SoShape1453 = new SoShape();
SoLineSet* SoLineSet1454 = new SoLineSet();
SoLineSet1454->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1455 = new SoColorRGBA();
SoColorRGBA1455->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1454->addChild(*SoColorRGBA1455);

SoCoordinate* SoCoordinate1456 = new SoCoordinate();
SoCoordinate1456->setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018}, 6);
SoLineSet1454->setCoord(*SoCoordinate1456);

SoShape1453->setGeometry(*SoLineSet1454);

SoHAnimSegment1449->addChild(*SoShape1453);

SoShape* SoShape1457 = new SoShape();
SoLineSet* SoLineSet1458 = new SoLineSet();
SoLineSet1458->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1459 = new SoColorRGBA();
SoColorRGBA1459->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1458->addChild(*SoColorRGBA1459);

SoCoordinate* SoCoordinate1460 = new SoCoordinate();
SoCoordinate1460->setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423}, 6);
SoLineSet1458->setCoord(*SoCoordinate1460);

SoShape1457->setGeometry(*SoLineSet1458);

SoHAnimSegment1449->addChild(*SoShape1457);

SoHAnimSite* SoHAnimSite1461 = new SoHAnimSite();
SoHAnimSite1461->setDEF(QString("hanim_r_index_distal_tip"));
SoHAnimSite1461->X3DNode::setName(QString("r_index_distal_tip"));
SoHAnimSite1461->setTranslation(new float[]{-0.198,0.6883,-0.018});
SoTouchSensor* SoTouchSensor1462 = new SoTouchSensor();
SoTouchSensor1462->setDescription(QString("HAnimSite r_index_distal_tip"));
SoHAnimSite1461->addChild(*SoTouchSensor1462);

SoShape* SoShape1463 = new SoShape();
SoShape1463->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1461->addChild(*SoShape1463);

SoHAnimSegment1449->addChild(*SoHAnimSite1461);

SoHAnimSite* SoHAnimSite1464 = new SoHAnimSite();
SoHAnimSite1464->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite1464->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite1464->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoTouchSensor* SoTouchSensor1465 = new SoTouchSensor();
SoTouchSensor1465->setDescription(QString("HAnimSite r_dactylion"));
SoHAnimSite1464->addChild(*SoTouchSensor1465);

SoShape* SoShape1466 = new SoShape();
SoShape1466->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1464->addChild(*SoShape1466);

SoHAnimSegment1449->addChild(*SoHAnimSite1464);

SoHAnimJoint1448->addChildren(*SoHAnimSegment1449);

SoHAnimJoint1439->addChildren(*SoHAnimJoint1448);

SoHAnimJoint1430->addChildren(*SoHAnimJoint1439);

SoHAnimJoint1421->addChildren(*SoHAnimJoint1430);

SoHAnimJoint1333->addChildren(*SoHAnimJoint1421);

SoHAnimJoint* SoHAnimJoint1467 = new SoHAnimJoint();
SoHAnimJoint1467->setDEF(QString("hanim_r_middle0"));
SoHAnimJoint1467->X3DNode::setName(QString("r_middle0"));
SoHAnimJoint1467->setCenter(new float[]{-0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment1468 = new SoHAnimSegment();
SoHAnimSegment1468->setDEF(QString("hanim_r_middle_metacarpal"));
SoHAnimSegment1468->X3DNode::setName(QString("r_middle_metacarpal"));
SoTouchSensor* SoTouchSensor1469 = new SoTouchSensor();
SoTouchSensor1469->setDescription(QString("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal"));
SoHAnimSegment1468->addChild(*SoTouchSensor1469);

SoTransform* SoTransform1470 = new SoTransform();
SoTransform1470->setTranslation(new float[]{-0.1987,0.8029,-0.053});
SoShape* SoShape1471 = new SoShape();
SoShape1471->setUSE(QString("HAnimJointShape"));
SoTransform1470->addChild(*SoShape1471);

SoHAnimSegment1468->addChild(*SoTransform1470);

SoShape* SoShape1472 = new SoShape();
SoLineSet* SoLineSet1473 = new SoLineSet();
SoLineSet1473->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1474 = new SoColorRGBA();
SoColorRGBA1474->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1473->addChild(*SoColorRGBA1474);

SoCoordinate* SoCoordinate1475 = new SoCoordinate();
SoCoordinate1475->setPoint(new float[]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053}, 6);
SoLineSet1473->setCoord(*SoCoordinate1475);

SoShape1472->setGeometry(*SoLineSet1473);

SoHAnimSegment1468->addChild(*SoShape1472);

SoHAnimJoint1467->addChildren(*SoHAnimSegment1468);

SoHAnimJoint* SoHAnimJoint1476 = new SoHAnimJoint();
SoHAnimJoint1476->setDEF(QString("hanim_r_middle1"));
SoHAnimJoint1476->X3DNode::setName(QString("r_middle1"));
SoHAnimJoint1476->setCenter(new float[]{-0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment1477 = new SoHAnimSegment();
SoHAnimSegment1477->setDEF(QString("hanim_r_middle_proximal"));
SoHAnimSegment1477->X3DNode::setName(QString("r_middle_proximal"));
SoTouchSensor* SoTouchSensor1478 = new SoTouchSensor();
SoTouchSensor1478->setDescription(QString("HAnimJoint r_middle1, HAnimSegment r_middle_proximal"));
SoHAnimSegment1477->addChild(*SoTouchSensor1478);

SoTransform* SoTransform1479 = new SoTransform();
SoTransform1479->setTranslation(new float[]{-0.1987,0.7818,-0.053});
SoShape* SoShape1480 = new SoShape();
SoShape1480->setUSE(QString("HAnimJointShape"));
SoTransform1479->addChild(*SoShape1480);

SoHAnimSegment1477->addChild(*SoTransform1479);

SoShape* SoShape1481 = new SoShape();
SoLineSet* SoLineSet1482 = new SoLineSet();
SoLineSet1482->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1483 = new SoColorRGBA();
SoColorRGBA1483->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1482->addChild(*SoColorRGBA1483);

SoCoordinate* SoCoordinate1484 = new SoCoordinate();
SoCoordinate1484->setPoint(new float[]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503}, 6);
SoLineSet1482->setCoord(*SoCoordinate1484);

SoShape1481->setGeometry(*SoLineSet1482);

SoHAnimSegment1477->addChild(*SoShape1481);

SoHAnimJoint1476->addChildren(*SoHAnimSegment1477);

SoHAnimJoint* SoHAnimJoint1485 = new SoHAnimJoint();
SoHAnimJoint1485->setDEF(QString("hanim_r_middle2"));
SoHAnimJoint1485->X3DNode::setName(QString("r_middle2"));
SoHAnimJoint1485->setCenter(new float[]{-0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment1486 = new SoHAnimSegment();
SoHAnimSegment1486->setDEF(QString("hanim_r_middle_middle"));
SoHAnimSegment1486->X3DNode::setName(QString("r_middle_middle"));
SoTouchSensor* SoTouchSensor1487 = new SoTouchSensor();
SoTouchSensor1487->setDescription(QString("HAnimJoint r_middle2, HAnimSegment r_middle_middle"));
SoHAnimSegment1486->addChild(*SoTouchSensor1487);

SoTransform* SoTransform1488 = new SoTransform();
SoTransform1488->setTranslation(new float[]{-0.2013,0.7273,-0.0503});
SoShape* SoShape1489 = new SoShape();
SoShape1489->setUSE(QString("HAnimJointShape"));
SoTransform1488->addChild(*SoShape1489);

SoHAnimSegment1486->addChild(*SoTransform1488);

SoShape* SoShape1490 = new SoShape();
SoLineSet* SoLineSet1491 = new SoLineSet();
SoLineSet1491->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1492 = new SoColorRGBA();
SoColorRGBA1492->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1491->addChild(*SoColorRGBA1492);

SoCoordinate* SoCoordinate1493 = new SoCoordinate();
SoCoordinate1493->setPoint(new float[]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494}, 6);
SoLineSet1491->setCoord(*SoCoordinate1493);

SoShape1490->setGeometry(*SoLineSet1491);

SoHAnimSegment1486->addChild(*SoShape1490);

SoHAnimJoint1485->addChildren(*SoHAnimSegment1486);

SoHAnimJoint* SoHAnimJoint1494 = new SoHAnimJoint();
SoHAnimJoint1494->setDEF(QString("hanim_r_middle3"));
SoHAnimJoint1494->X3DNode::setName(QString("r_middle3"));
SoHAnimJoint1494->setCenter(new float[]{-0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment1495 = new SoHAnimSegment();
SoHAnimSegment1495->setDEF(QString("hanim_r_middle_distal"));
SoHAnimSegment1495->X3DNode::setName(QString("r_middle_distal"));
SoTouchSensor* SoTouchSensor1496 = new SoTouchSensor();
SoTouchSensor1496->setDescription(QString("HAnimJoint r_middle3, HAnimSegment r_middle_distal"));
SoHAnimSegment1495->addChild(*SoTouchSensor1496);

SoTransform* SoTransform1497 = new SoTransform();
SoTransform1497->setTranslation(new float[]{-0.2026,0.7011,-0.0494});
SoShape* SoShape1498 = new SoShape();
SoShape1498->setUSE(QString("HAnimJointShape"));
SoTransform1497->addChild(*SoShape1498);

SoHAnimSegment1495->addChild(*SoTransform1497);

SoShape* SoShape1499 = new SoShape();
SoLineSet* SoLineSet1500 = new SoLineSet();
SoLineSet1500->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1501 = new SoColorRGBA();
SoColorRGBA1501->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1500->addChild(*SoColorRGBA1501);

SoCoordinate* SoCoordinate1502 = new SoCoordinate();
SoCoordinate1502->setPoint(new float[]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427}, 6);
SoLineSet1500->setCoord(*SoCoordinate1502);

SoShape1499->setGeometry(*SoLineSet1500);

SoHAnimSegment1495->addChild(*SoShape1499);

SoHAnimSite* SoHAnimSite1503 = new SoHAnimSite();
SoHAnimSite1503->setDEF(QString("hanim_r_middle_distal_tip"));
SoHAnimSite1503->X3DNode::setName(QString("r_middle_distal_tip"));
SoHAnimSite1503->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoTouchSensor* SoTouchSensor1504 = new SoTouchSensor();
SoTouchSensor1504->setDescription(QString("HAnimSite r_middle_distal_tip"));
SoHAnimSite1503->addChild(*SoTouchSensor1504);

SoShape* SoShape1505 = new SoShape();
SoShape1505->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1503->addChild(*SoShape1505);

SoHAnimSegment1495->addChild(*SoHAnimSite1503);

SoHAnimJoint1494->addChildren(*SoHAnimSegment1495);

SoHAnimJoint1485->addChildren(*SoHAnimJoint1494);

SoHAnimJoint1476->addChildren(*SoHAnimJoint1485);

SoHAnimJoint1467->addChildren(*SoHAnimJoint1476);

SoHAnimJoint1333->addChildren(*SoHAnimJoint1467);

SoHAnimJoint* SoHAnimJoint1506 = new SoHAnimJoint();
SoHAnimJoint1506->setDEF(QString("hanim_r_ring0"));
SoHAnimJoint1506->X3DNode::setName(QString("r_ring0"));
SoHAnimJoint1506->setCenter(new float[]{-0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment1507 = new SoHAnimSegment();
SoHAnimSegment1507->setDEF(QString("hanim_r_ring_metacarpal"));
SoHAnimSegment1507->X3DNode::setName(QString("r_ring_metacarpal"));
SoTouchSensor* SoTouchSensor1508 = new SoTouchSensor();
SoTouchSensor1508->setDescription(QString("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal"));
SoHAnimSegment1507->addChild(*SoTouchSensor1508);

SoTransform* SoTransform1509 = new SoTransform();
SoTransform1509->setTranslation(new float[]{-0.1956,0.8019,-0.0794});
SoShape* SoShape1510 = new SoShape();
SoShape1510->setUSE(QString("HAnimJointShape"));
SoTransform1509->addChild(*SoShape1510);

SoHAnimSegment1507->addChild(*SoTransform1509);

SoShape* SoShape1511 = new SoShape();
SoLineSet* SoLineSet1512 = new SoLineSet();
SoLineSet1512->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1513 = new SoColorRGBA();
SoColorRGBA1513->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1512->addChild(*SoColorRGBA1513);

SoCoordinate* SoCoordinate1514 = new SoCoordinate();
SoCoordinate1514->setPoint(new float[]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794}, 6);
SoLineSet1512->setCoord(*SoCoordinate1514);

SoShape1511->setGeometry(*SoLineSet1512);

SoHAnimSegment1507->addChild(*SoShape1511);

SoHAnimJoint1506->addChildren(*SoHAnimSegment1507);

SoHAnimJoint* SoHAnimJoint1515 = new SoHAnimJoint();
SoHAnimJoint1515->setDEF(QString("hanim_r_ring1"));
SoHAnimJoint1515->X3DNode::setName(QString("r_ring1"));
SoHAnimJoint1515->setCenter(new float[]{-0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment1516 = new SoHAnimSegment();
SoHAnimSegment1516->setDEF(QString("hanim_r_ring_proximal"));
SoHAnimSegment1516->X3DNode::setName(QString("r_ring_proximal"));
SoTouchSensor* SoTouchSensor1517 = new SoTouchSensor();
SoTouchSensor1517->setDescription(QString("HAnimJoint r_ring1, HAnimSegment r_ring_proximal"));
SoHAnimSegment1516->addChild(*SoTouchSensor1517);

SoTransform* SoTransform1518 = new SoTransform();
SoTransform1518->setTranslation(new float[]{-0.1956,0.7815,-0.0794});
SoShape* SoShape1519 = new SoShape();
SoShape1519->setUSE(QString("HAnimJointShape"));
SoTransform1518->addChild(*SoShape1519);

SoHAnimSegment1516->addChild(*SoTransform1518);

SoShape* SoShape1520 = new SoShape();
SoLineSet* SoLineSet1521 = new SoLineSet();
SoLineSet1521->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1522 = new SoColorRGBA();
SoColorRGBA1522->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1521->addChild(*SoColorRGBA1522);

SoCoordinate* SoCoordinate1523 = new SoCoordinate();
SoCoordinate1523->setPoint(new float[]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777}, 6);
SoLineSet1521->setCoord(*SoCoordinate1523);

SoShape1520->setGeometry(*SoLineSet1521);

SoHAnimSegment1516->addChild(*SoShape1520);

SoHAnimJoint1515->addChildren(*SoHAnimSegment1516);

SoHAnimJoint* SoHAnimJoint1524 = new SoHAnimJoint();
SoHAnimJoint1524->setDEF(QString("hanim_r_ring2"));
SoHAnimJoint1524->X3DNode::setName(QString("r_ring2"));
SoHAnimJoint1524->setCenter(new float[]{-0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment1525 = new SoHAnimSegment();
SoHAnimSegment1525->setDEF(QString("hanim_r_ring_middle"));
SoHAnimSegment1525->X3DNode::setName(QString("r_ring_middle"));
SoTouchSensor* SoTouchSensor1526 = new SoTouchSensor();
SoTouchSensor1526->setDescription(QString("HAnimJoint r_ring2, HAnimSegment r_ring_middle"));
SoHAnimSegment1525->addChild(*SoTouchSensor1526);

SoTransform* SoTransform1527 = new SoTransform();
SoTransform1527->setTranslation(new float[]{-0.1973,0.7287,-0.0777});
SoShape* SoShape1528 = new SoShape();
SoShape1528->setUSE(QString("HAnimJointShape"));
SoTransform1527->addChild(*SoShape1528);

SoHAnimSegment1525->addChild(*SoTransform1527);

SoShape* SoShape1529 = new SoShape();
SoLineSet* SoLineSet1530 = new SoLineSet();
SoLineSet1530->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1531 = new SoColorRGBA();
SoColorRGBA1531->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1530->addChild(*SoColorRGBA1531);

SoCoordinate* SoCoordinate1532 = new SoCoordinate();
SoCoordinate1532->setPoint(new float[]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767}, 6);
SoLineSet1530->setCoord(*SoCoordinate1532);

SoShape1529->setGeometry(*SoLineSet1530);

SoHAnimSegment1525->addChild(*SoShape1529);

SoHAnimJoint1524->addChildren(*SoHAnimSegment1525);

SoHAnimJoint* SoHAnimJoint1533 = new SoHAnimJoint();
SoHAnimJoint1533->setDEF(QString("hanim_r_ring3"));
SoHAnimJoint1533->X3DNode::setName(QString("r_ring3"));
SoHAnimJoint1533->setCenter(new float[]{-0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment1534 = new SoHAnimSegment();
SoHAnimSegment1534->setDEF(QString("hanim_r_ring_distal"));
SoHAnimSegment1534->X3DNode::setName(QString("r_ring_distal"));
SoTouchSensor* SoTouchSensor1535 = new SoTouchSensor();
SoTouchSensor1535->setDescription(QString("HAnimJoint r_ring3, HAnimSegment r_ring_distal"));
SoHAnimSegment1534->addChild(*SoTouchSensor1535);

SoTransform* SoTransform1536 = new SoTransform();
SoTransform1536->setTranslation(new float[]{-0.1983,0.7045,-0.0767});
SoShape* SoShape1537 = new SoShape();
SoShape1537->setUSE(QString("HAnimJointShape"));
SoTransform1536->addChild(*SoShape1537);

SoHAnimSegment1534->addChild(*SoTransform1536);

SoShape* SoShape1538 = new SoShape();
SoLineSet* SoLineSet1539 = new SoLineSet();
SoLineSet1539->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1540 = new SoColorRGBA();
SoColorRGBA1540->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1539->addChild(*SoColorRGBA1540);

SoCoordinate* SoCoordinate1541 = new SoCoordinate();
SoCoordinate1541->setPoint(new float[]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693}, 6);
SoLineSet1539->setCoord(*SoCoordinate1541);

SoShape1538->setGeometry(*SoLineSet1539);

SoHAnimSegment1534->addChild(*SoShape1538);

SoHAnimSite* SoHAnimSite1542 = new SoHAnimSite();
SoHAnimSite1542->setDEF(QString("hanim_r_ring_distal_tip"));
SoHAnimSite1542->X3DNode::setName(QString("r_ring_distal_tip"));
SoHAnimSite1542->setTranslation(new float[]{-0.1934,0.6778,-0.0693});
SoTouchSensor* SoTouchSensor1543 = new SoTouchSensor();
SoTouchSensor1543->setDescription(QString("HAnimSite r_ring_distal_tip"));
SoHAnimSite1542->addChild(*SoTouchSensor1543);

SoShape* SoShape1544 = new SoShape();
SoShape1544->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1542->addChild(*SoShape1544);

SoHAnimSegment1534->addChild(*SoHAnimSite1542);

SoHAnimJoint1533->addChildren(*SoHAnimSegment1534);

SoHAnimJoint1524->addChildren(*SoHAnimJoint1533);

SoHAnimJoint1515->addChildren(*SoHAnimJoint1524);

SoHAnimJoint1506->addChildren(*SoHAnimJoint1515);

SoHAnimJoint1333->addChildren(*SoHAnimJoint1506);

SoHAnimJoint* SoHAnimJoint1545 = new SoHAnimJoint();
SoHAnimJoint1545->setDEF(QString("hanim_r_pinky0"));
SoHAnimJoint1545->X3DNode::setName(QString("r_pinky0"));
SoHAnimJoint1545->setCenter(new float[]{-0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment1546 = new SoHAnimSegment();
SoHAnimSegment1546->setDEF(QString("hanim_r_pinky_metacarpal"));
SoHAnimSegment1546->X3DNode::setName(QString("r_pinky_metacarpal"));
SoTouchSensor* SoTouchSensor1547 = new SoTouchSensor();
SoTouchSensor1547->setDescription(QString("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal"));
SoHAnimSegment1546->addChild(*SoTouchSensor1547);

SoTransform* SoTransform1548 = new SoTransform();
SoTransform1548->setTranslation(new float[]{-0.1925,0.8066,-0.1036});
SoShape* SoShape1549 = new SoShape();
SoShape1549->setUSE(QString("HAnimJointShape"));
SoTransform1548->addChild(*SoShape1549);

SoHAnimSegment1546->addChild(*SoTransform1548);

SoShape* SoShape1550 = new SoShape();
SoLineSet* SoLineSet1551 = new SoLineSet();
SoLineSet1551->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1552 = new SoColorRGBA();
SoColorRGBA1552->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1551->addChild(*SoColorRGBA1552);

SoCoordinate* SoCoordinate1553 = new SoCoordinate();
SoCoordinate1553->setPoint(new float[]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036}, 6);
SoLineSet1551->setCoord(*SoCoordinate1553);

SoShape1550->setGeometry(*SoLineSet1551);

SoHAnimSegment1546->addChild(*SoShape1550);

SoHAnimJoint1545->addChildren(*SoHAnimSegment1546);

SoHAnimJoint* SoHAnimJoint1554 = new SoHAnimJoint();
SoHAnimJoint1554->setDEF(QString("hanim_r_pinky1"));
SoHAnimJoint1554->X3DNode::setName(QString("r_pinky1"));
SoHAnimJoint1554->setCenter(new float[]{-0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment1555 = new SoHAnimSegment();
SoHAnimSegment1555->setDEF(QString("hanim_r_pinky_proximal"));
SoHAnimSegment1555->X3DNode::setName(QString("r_pinky_proximal"));
SoTouchSensor* SoTouchSensor1556 = new SoTouchSensor();
SoTouchSensor1556->setDescription(QString("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal"));
SoHAnimSegment1555->addChild(*SoTouchSensor1556);

SoTransform* SoTransform1557 = new SoTransform();
SoTransform1557->setTranslation(new float[]{-0.1925,0.7866,-0.1036});
SoShape* SoShape1558 = new SoShape();
SoShape1558->setUSE(QString("HAnimJointShape"));
SoTransform1557->addChild(*SoShape1558);

SoHAnimSegment1555->addChild(*SoTransform1557);

SoShape* SoShape1559 = new SoShape();
SoLineSet* SoLineSet1560 = new SoLineSet();
SoLineSet1560->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1561 = new SoColorRGBA();
SoColorRGBA1561->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1560->addChild(*SoColorRGBA1561);

SoCoordinate* SoCoordinate1562 = new SoCoordinate();
SoCoordinate1562->setPoint(new float[]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024}, 6);
SoLineSet1560->setCoord(*SoCoordinate1562);

SoShape1559->setGeometry(*SoLineSet1560);

SoHAnimSegment1555->addChild(*SoShape1559);

SoHAnimJoint1554->addChildren(*SoHAnimSegment1555);

SoHAnimJoint* SoHAnimJoint1563 = new SoHAnimJoint();
SoHAnimJoint1563->setDEF(QString("hanim_r_pinky2"));
SoHAnimJoint1563->X3DNode::setName(QString("r_pinky2"));
SoHAnimJoint1563->setCenter(new float[]{-0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment1564 = new SoHAnimSegment();
SoHAnimSegment1564->setDEF(QString("hanim_r_pinky_middle"));
SoHAnimSegment1564->X3DNode::setName(QString("r_pinky_middle"));
SoTouchSensor* SoTouchSensor1565 = new SoTouchSensor();
SoTouchSensor1565->setDescription(QString("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle"));
SoHAnimSegment1564->addChild(*SoTouchSensor1565);

SoTransform* SoTransform1566 = new SoTransform();
SoTransform1566->setTranslation(new float[]{-0.1938,0.7452,-0.1024});
SoShape* SoShape1567 = new SoShape();
SoShape1567->setUSE(QString("HAnimJointShape"));
SoTransform1566->addChild(*SoShape1567);

SoHAnimSegment1564->addChild(*SoTransform1566);

SoShape* SoShape1568 = new SoShape();
SoLineSet* SoLineSet1569 = new SoLineSet();
SoLineSet1569->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1570 = new SoColorRGBA();
SoColorRGBA1570->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1569->addChild(*SoColorRGBA1570);

SoCoordinate* SoCoordinate1571 = new SoCoordinate();
SoCoordinate1571->setPoint(new float[]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017}, 6);
SoLineSet1569->setCoord(*SoCoordinate1571);

SoShape1568->setGeometry(*SoLineSet1569);

SoHAnimSegment1564->addChild(*SoShape1568);

SoHAnimJoint1563->addChildren(*SoHAnimSegment1564);

SoHAnimJoint* SoHAnimJoint1572 = new SoHAnimJoint();
SoHAnimJoint1572->setDEF(QString("hanim_r_pinky3"));
SoHAnimJoint1572->X3DNode::setName(QString("r_pinky3"));
SoHAnimJoint1572->setCenter(new float[]{-0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment1573 = new SoHAnimSegment();
SoHAnimSegment1573->setDEF(QString("hanim_r_pinky_distal"));
SoHAnimSegment1573->X3DNode::setName(QString("r_pinky_distal"));
SoTouchSensor* SoTouchSensor1574 = new SoTouchSensor();
SoTouchSensor1574->setDescription(QString("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal"));
SoHAnimSegment1573->addChild(*SoTouchSensor1574);

SoTransform* SoTransform1575 = new SoTransform();
SoTransform1575->setTranslation(new float[]{-0.1948,0.7277,-0.1017});
SoShape* SoShape1576 = new SoShape();
SoShape1576->setUSE(QString("HAnimJointShape"));
SoTransform1575->addChild(*SoShape1576);

SoHAnimSegment1573->addChild(*SoTransform1575);

SoShape* SoShape1577 = new SoShape();
SoLineSet* SoLineSet1578 = new SoLineSet();
SoLineSet1578->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1579 = new SoColorRGBA();
SoColorRGBA1579->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1578->addChild(*SoColorRGBA1579);

SoCoordinate* SoCoordinate1580 = new SoCoordinate();
SoCoordinate1580->setPoint(new float[]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949}, 6);
SoLineSet1578->setCoord(*SoCoordinate1580);

SoShape1577->setGeometry(*SoLineSet1578);

SoHAnimSegment1573->addChild(*SoShape1577);

SoHAnimSite* SoHAnimSite1581 = new SoHAnimSite();
SoHAnimSite1581->setDEF(QString("hanim_r_pinky_distal_tip"));
SoHAnimSite1581->X3DNode::setName(QString("r_pinky_distal_tip"));
SoHAnimSite1581->setTranslation(new float[]{-0.1938,0.7035,-0.0949});
SoTouchSensor* SoTouchSensor1582 = new SoTouchSensor();
SoTouchSensor1582->setDescription(QString("HAnimSite r_pinky_distal_tip"));
SoHAnimSite1581->addChild(*SoTouchSensor1582);

SoShape* SoShape1583 = new SoShape();
SoShape1583->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1581->addChild(*SoShape1583);

SoHAnimSegment1573->addChild(*SoHAnimSite1581);

SoHAnimJoint1572->addChildren(*SoHAnimSegment1573);

SoHAnimJoint1563->addChildren(*SoHAnimJoint1572);

SoHAnimJoint1554->addChildren(*SoHAnimJoint1563);

SoHAnimJoint1545->addChildren(*SoHAnimJoint1554);

SoHAnimJoint1333->addChildren(*SoHAnimJoint1545);

SoHAnimJoint1296->addChildren(*SoHAnimJoint1333);

SoHAnimJoint1280->addChildren(*SoHAnimJoint1296);

SoHAnimJoint1271->addChildren(*SoHAnimJoint1280);

SoHAnimJoint1234->addChildren(*SoHAnimJoint1271);

SoHAnimJoint596->addChildren(*SoHAnimJoint1234);

SoHAnimJoint587->addChildren(*SoHAnimJoint596);

SoHAnimJoint578->addChildren(*SoHAnimJoint587);

SoHAnimJoint569->addChildren(*SoHAnimJoint578);

SoHAnimJoint560->addChildren(*SoHAnimJoint569);

SoHAnimJoint551->addChildren(*SoHAnimJoint560);

SoHAnimJoint542->addChildren(*SoHAnimJoint551);

SoHAnimJoint533->addChildren(*SoHAnimJoint542);

SoHAnimJoint510->addChildren(*SoHAnimJoint533);

SoHAnimJoint494->addChildren(*SoHAnimJoint510);

SoHAnimJoint485->addChildren(*SoHAnimJoint494);

SoHAnimJoint476->addChildren(*SoHAnimJoint485);

SoHAnimJoint467->addChildren(*SoHAnimJoint476);

SoHAnimJoint437->addChildren(*SoHAnimJoint467);

SoHAnimJoint428->addChildren(*SoHAnimJoint437);

SoHAnimJoint419->addChildren(*SoHAnimJoint428);

SoHAnimJoint396->addChildren(*SoHAnimJoint419);

SoHAnimJoint46->addChildren(*SoHAnimJoint396);

SoHAnimHumanoid45->setSkeleton(*SoHAnimJoint46);

SoHAnimJoint* SoHAnimJoint1584 = new SoHAnimJoint();
SoHAnimJoint1584->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1584);

SoHAnimJoint* SoHAnimJoint1585 = new SoHAnimJoint();
SoHAnimJoint1585->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1585);

SoHAnimJoint* SoHAnimJoint1586 = new SoHAnimJoint();
SoHAnimJoint1586->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1586);

SoHAnimJoint* SoHAnimJoint1587 = new SoHAnimJoint();
SoHAnimJoint1587->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1587);

SoHAnimJoint* SoHAnimJoint1588 = new SoHAnimJoint();
SoHAnimJoint1588->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1588);

SoHAnimJoint* SoHAnimJoint1589 = new SoHAnimJoint();
SoHAnimJoint1589->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1589);

SoHAnimJoint* SoHAnimJoint1590 = new SoHAnimJoint();
SoHAnimJoint1590->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1590);

SoHAnimJoint* SoHAnimJoint1591 = new SoHAnimJoint();
SoHAnimJoint1591->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1591);

SoHAnimJoint* SoHAnimJoint1592 = new SoHAnimJoint();
SoHAnimJoint1592->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1592);

SoHAnimJoint* SoHAnimJoint1593 = new SoHAnimJoint();
SoHAnimJoint1593->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1593);

SoHAnimJoint* SoHAnimJoint1594 = new SoHAnimJoint();
SoHAnimJoint1594->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1594);

SoHAnimJoint* SoHAnimJoint1595 = new SoHAnimJoint();
SoHAnimJoint1595->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1595);

SoHAnimJoint* SoHAnimJoint1596 = new SoHAnimJoint();
SoHAnimJoint1596->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1596);

SoHAnimJoint* SoHAnimJoint1597 = new SoHAnimJoint();
SoHAnimJoint1597->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1597);

SoHAnimJoint* SoHAnimJoint1598 = new SoHAnimJoint();
SoHAnimJoint1598->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1598);

SoHAnimJoint* SoHAnimJoint1599 = new SoHAnimJoint();
SoHAnimJoint1599->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1599);

SoHAnimJoint* SoHAnimJoint1600 = new SoHAnimJoint();
SoHAnimJoint1600->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1600);

SoHAnimJoint* SoHAnimJoint1601 = new SoHAnimJoint();
SoHAnimJoint1601->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1601);

SoHAnimJoint* SoHAnimJoint1602 = new SoHAnimJoint();
SoHAnimJoint1602->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1602);

SoHAnimJoint* SoHAnimJoint1603 = new SoHAnimJoint();
SoHAnimJoint1603->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1603);

SoHAnimJoint* SoHAnimJoint1604 = new SoHAnimJoint();
SoHAnimJoint1604->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1604);

SoHAnimJoint* SoHAnimJoint1605 = new SoHAnimJoint();
SoHAnimJoint1605->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1605);

SoHAnimJoint* SoHAnimJoint1606 = new SoHAnimJoint();
SoHAnimJoint1606->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1606);

SoHAnimJoint* SoHAnimJoint1607 = new SoHAnimJoint();
SoHAnimJoint1607->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1607);

SoHAnimJoint* SoHAnimJoint1608 = new SoHAnimJoint();
SoHAnimJoint1608->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1608);

SoHAnimJoint* SoHAnimJoint1609 = new SoHAnimJoint();
SoHAnimJoint1609->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1609);

SoHAnimJoint* SoHAnimJoint1610 = new SoHAnimJoint();
SoHAnimJoint1610->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1610);

SoHAnimJoint* SoHAnimJoint1611 = new SoHAnimJoint();
SoHAnimJoint1611->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1611);

SoHAnimJoint* SoHAnimJoint1612 = new SoHAnimJoint();
SoHAnimJoint1612->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1612);

SoHAnimJoint* SoHAnimJoint1613 = new SoHAnimJoint();
SoHAnimJoint1613->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1613);

SoHAnimJoint* SoHAnimJoint1614 = new SoHAnimJoint();
SoHAnimJoint1614->setUSE(QString("hanim_l_ankle"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1614);

SoHAnimJoint* SoHAnimJoint1615 = new SoHAnimJoint();
SoHAnimJoint1615->setUSE(QString("hanim_r_ankle"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1615);

SoHAnimJoint* SoHAnimJoint1616 = new SoHAnimJoint();
SoHAnimJoint1616->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1616);

SoHAnimJoint* SoHAnimJoint1617 = new SoHAnimJoint();
SoHAnimJoint1617->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1617);

SoHAnimJoint* SoHAnimJoint1618 = new SoHAnimJoint();
SoHAnimJoint1618->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1618);

SoHAnimJoint* SoHAnimJoint1619 = new SoHAnimJoint();
SoHAnimJoint1619->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1619);

SoHAnimJoint* SoHAnimJoint1620 = new SoHAnimJoint();
SoHAnimJoint1620->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1620);

SoHAnimJoint* SoHAnimJoint1621 = new SoHAnimJoint();
SoHAnimJoint1621->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1621);

SoHAnimJoint* SoHAnimJoint1622 = new SoHAnimJoint();
SoHAnimJoint1622->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1622);

SoHAnimJoint* SoHAnimJoint1623 = new SoHAnimJoint();
SoHAnimJoint1623->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1623);

SoHAnimJoint* SoHAnimJoint1624 = new SoHAnimJoint();
SoHAnimJoint1624->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1624);

SoHAnimJoint* SoHAnimJoint1625 = new SoHAnimJoint();
SoHAnimJoint1625->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1625);

SoHAnimJoint* SoHAnimJoint1626 = new SoHAnimJoint();
SoHAnimJoint1626->setUSE(QString("hanim_l_index0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1626);

SoHAnimJoint* SoHAnimJoint1627 = new SoHAnimJoint();
SoHAnimJoint1627->setUSE(QString("hanim_r_index0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1627);

SoHAnimJoint* SoHAnimJoint1628 = new SoHAnimJoint();
SoHAnimJoint1628->setUSE(QString("hanim_l_index1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1628);

SoHAnimJoint* SoHAnimJoint1629 = new SoHAnimJoint();
SoHAnimJoint1629->setUSE(QString("hanim_r_index1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1629);

SoHAnimJoint* SoHAnimJoint1630 = new SoHAnimJoint();
SoHAnimJoint1630->setUSE(QString("hanim_l_index2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1630);

SoHAnimJoint* SoHAnimJoint1631 = new SoHAnimJoint();
SoHAnimJoint1631->setUSE(QString("hanim_r_index2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1631);

SoHAnimJoint* SoHAnimJoint1632 = new SoHAnimJoint();
SoHAnimJoint1632->setUSE(QString("hanim_l_index3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1632);

SoHAnimJoint* SoHAnimJoint1633 = new SoHAnimJoint();
SoHAnimJoint1633->setUSE(QString("hanim_r_index3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1633);

SoHAnimJoint* SoHAnimJoint1634 = new SoHAnimJoint();
SoHAnimJoint1634->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1634);

SoHAnimJoint* SoHAnimJoint1635 = new SoHAnimJoint();
SoHAnimJoint1635->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1635);

SoHAnimJoint* SoHAnimJoint1636 = new SoHAnimJoint();
SoHAnimJoint1636->setUSE(QString("hanim_l_metatarsal"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1636);

SoHAnimJoint* SoHAnimJoint1637 = new SoHAnimJoint();
SoHAnimJoint1637->setUSE(QString("hanim_r_metatarsal"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1637);

SoHAnimJoint* SoHAnimJoint1638 = new SoHAnimJoint();
SoHAnimJoint1638->setUSE(QString("hanim_l_middle0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1638);

SoHAnimJoint* SoHAnimJoint1639 = new SoHAnimJoint();
SoHAnimJoint1639->setUSE(QString("hanim_r_middle0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1639);

SoHAnimJoint* SoHAnimJoint1640 = new SoHAnimJoint();
SoHAnimJoint1640->setUSE(QString("hanim_l_middle1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1640);

SoHAnimJoint* SoHAnimJoint1641 = new SoHAnimJoint();
SoHAnimJoint1641->setUSE(QString("hanim_r_middle1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1641);

SoHAnimJoint* SoHAnimJoint1642 = new SoHAnimJoint();
SoHAnimJoint1642->setUSE(QString("hanim_l_middle2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1642);

SoHAnimJoint* SoHAnimJoint1643 = new SoHAnimJoint();
SoHAnimJoint1643->setUSE(QString("hanim_r_middle2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1643);

SoHAnimJoint* SoHAnimJoint1644 = new SoHAnimJoint();
SoHAnimJoint1644->setUSE(QString("hanim_l_middle3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1644);

SoHAnimJoint* SoHAnimJoint1645 = new SoHAnimJoint();
SoHAnimJoint1645->setUSE(QString("hanim_r_middle3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1645);

SoHAnimJoint* SoHAnimJoint1646 = new SoHAnimJoint();
SoHAnimJoint1646->setUSE(QString("hanim_l_midtarsal"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1646);

SoHAnimJoint* SoHAnimJoint1647 = new SoHAnimJoint();
SoHAnimJoint1647->setUSE(QString("hanim_r_midtarsal"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1647);

SoHAnimJoint* SoHAnimJoint1648 = new SoHAnimJoint();
SoHAnimJoint1648->setUSE(QString("hanim_l_pinky0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1648);

SoHAnimJoint* SoHAnimJoint1649 = new SoHAnimJoint();
SoHAnimJoint1649->setUSE(QString("hanim_r_pinky0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1649);

SoHAnimJoint* SoHAnimJoint1650 = new SoHAnimJoint();
SoHAnimJoint1650->setUSE(QString("hanim_l_pinky1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1650);

SoHAnimJoint* SoHAnimJoint1651 = new SoHAnimJoint();
SoHAnimJoint1651->setUSE(QString("hanim_r_pinky1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1651);

SoHAnimJoint* SoHAnimJoint1652 = new SoHAnimJoint();
SoHAnimJoint1652->setUSE(QString("hanim_l_pinky2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1652);

SoHAnimJoint* SoHAnimJoint1653 = new SoHAnimJoint();
SoHAnimJoint1653->setUSE(QString("hanim_r_pinky2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1653);

SoHAnimJoint* SoHAnimJoint1654 = new SoHAnimJoint();
SoHAnimJoint1654->setUSE(QString("hanim_l_pinky3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1654);

SoHAnimJoint* SoHAnimJoint1655 = new SoHAnimJoint();
SoHAnimJoint1655->setUSE(QString("hanim_r_pinky3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1655);

SoHAnimJoint* SoHAnimJoint1656 = new SoHAnimJoint();
SoHAnimJoint1656->setUSE(QString("hanim_l_ring0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1656);

SoHAnimJoint* SoHAnimJoint1657 = new SoHAnimJoint();
SoHAnimJoint1657->setUSE(QString("hanim_r_ring0"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1657);

SoHAnimJoint* SoHAnimJoint1658 = new SoHAnimJoint();
SoHAnimJoint1658->setUSE(QString("hanim_l_ring1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1658);

SoHAnimJoint* SoHAnimJoint1659 = new SoHAnimJoint();
SoHAnimJoint1659->setUSE(QString("hanim_r_ring1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1659);

SoHAnimJoint* SoHAnimJoint1660 = new SoHAnimJoint();
SoHAnimJoint1660->setUSE(QString("hanim_l_ring2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1660);

SoHAnimJoint* SoHAnimJoint1661 = new SoHAnimJoint();
SoHAnimJoint1661->setUSE(QString("hanim_r_ring2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1661);

SoHAnimJoint* SoHAnimJoint1662 = new SoHAnimJoint();
SoHAnimJoint1662->setUSE(QString("hanim_l_ring3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1662);

SoHAnimJoint* SoHAnimJoint1663 = new SoHAnimJoint();
SoHAnimJoint1663->setUSE(QString("hanim_r_ring3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1663);

SoHAnimJoint* SoHAnimJoint1664 = new SoHAnimJoint();
SoHAnimJoint1664->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1664);

SoHAnimJoint* SoHAnimJoint1665 = new SoHAnimJoint();
SoHAnimJoint1665->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1665);

SoHAnimJoint* SoHAnimJoint1666 = new SoHAnimJoint();
SoHAnimJoint1666->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1666);

SoHAnimJoint* SoHAnimJoint1667 = new SoHAnimJoint();
SoHAnimJoint1667->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1667);

SoHAnimJoint* SoHAnimJoint1668 = new SoHAnimJoint();
SoHAnimJoint1668->setUSE(QString("hanim_l_subtalar"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1668);

SoHAnimJoint* SoHAnimJoint1669 = new SoHAnimJoint();
SoHAnimJoint1669->setUSE(QString("hanim_r_subtalar"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1669);

SoHAnimJoint* SoHAnimJoint1670 = new SoHAnimJoint();
SoHAnimJoint1670->setUSE(QString("hanim_l_thumb1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1670);

SoHAnimJoint* SoHAnimJoint1671 = new SoHAnimJoint();
SoHAnimJoint1671->setUSE(QString("hanim_r_thumb1"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1671);

SoHAnimJoint* SoHAnimJoint1672 = new SoHAnimJoint();
SoHAnimJoint1672->setUSE(QString("hanim_l_thumb2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1672);

SoHAnimJoint* SoHAnimJoint1673 = new SoHAnimJoint();
SoHAnimJoint1673->setUSE(QString("hanim_r_thumb2"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1673);

SoHAnimJoint* SoHAnimJoint1674 = new SoHAnimJoint();
SoHAnimJoint1674->setUSE(QString("hanim_l_thumb3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1674);

SoHAnimJoint* SoHAnimJoint1675 = new SoHAnimJoint();
SoHAnimJoint1675->setUSE(QString("hanim_r_thumb3"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1675);

SoHAnimJoint* SoHAnimJoint1676 = new SoHAnimJoint();
SoHAnimJoint1676->setUSE(QString("hanim_l_wrist"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1676);

SoHAnimJoint* SoHAnimJoint1677 = new SoHAnimJoint();
SoHAnimJoint1677->setUSE(QString("hanim_r_wrist"));
SoHAnimHumanoid45->setJoints(*SoHAnimJoint1677);

SoHAnimSegment* SoHAnimSegment1678 = new SoHAnimSegment();
SoHAnimSegment1678->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1678);

SoHAnimSegment* SoHAnimSegment1679 = new SoHAnimSegment();
SoHAnimSegment1679->setUSE(QString("hanim_skull"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1679);

SoHAnimSegment* SoHAnimSegment1680 = new SoHAnimSegment();
SoHAnimSegment1680->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1680);

SoHAnimSegment* SoHAnimSegment1681 = new SoHAnimSegment();
SoHAnimSegment1681->setUSE(QString("hanim_c1"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1681);

SoHAnimSegment* SoHAnimSegment1682 = new SoHAnimSegment();
SoHAnimSegment1682->setUSE(QString("hanim_c2"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1682);

SoHAnimSegment* SoHAnimSegment1683 = new SoHAnimSegment();
SoHAnimSegment1683->setUSE(QString("hanim_c3"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1683);

SoHAnimSegment* SoHAnimSegment1684 = new SoHAnimSegment();
SoHAnimSegment1684->setUSE(QString("hanim_c4"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1684);

SoHAnimSegment* SoHAnimSegment1685 = new SoHAnimSegment();
SoHAnimSegment1685->setUSE(QString("hanim_c5"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1685);

SoHAnimSegment* SoHAnimSegment1686 = new SoHAnimSegment();
SoHAnimSegment1686->setUSE(QString("hanim_c6"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1686);

SoHAnimSegment* SoHAnimSegment1687 = new SoHAnimSegment();
SoHAnimSegment1687->setUSE(QString("hanim_c7"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1687);

SoHAnimSegment* SoHAnimSegment1688 = new SoHAnimSegment();
SoHAnimSegment1688->setUSE(QString("hanim_t1"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1688);

SoHAnimSegment* SoHAnimSegment1689 = new SoHAnimSegment();
SoHAnimSegment1689->setUSE(QString("hanim_t2"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1689);

SoHAnimSegment* SoHAnimSegment1690 = new SoHAnimSegment();
SoHAnimSegment1690->setUSE(QString("hanim_t3"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1690);

SoHAnimSegment* SoHAnimSegment1691 = new SoHAnimSegment();
SoHAnimSegment1691->setUSE(QString("hanim_t4"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1691);

SoHAnimSegment* SoHAnimSegment1692 = new SoHAnimSegment();
SoHAnimSegment1692->setUSE(QString("hanim_t5"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1692);

SoHAnimSegment* SoHAnimSegment1693 = new SoHAnimSegment();
SoHAnimSegment1693->setUSE(QString("hanim_t6"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1693);

SoHAnimSegment* SoHAnimSegment1694 = new SoHAnimSegment();
SoHAnimSegment1694->setUSE(QString("hanim_t7"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1694);

SoHAnimSegment* SoHAnimSegment1695 = new SoHAnimSegment();
SoHAnimSegment1695->setUSE(QString("hanim_t8"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1695);

SoHAnimSegment* SoHAnimSegment1696 = new SoHAnimSegment();
SoHAnimSegment1696->setUSE(QString("hanim_t9"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1696);

SoHAnimSegment* SoHAnimSegment1697 = new SoHAnimSegment();
SoHAnimSegment1697->setUSE(QString("hanim_t10"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1697);

SoHAnimSegment* SoHAnimSegment1698 = new SoHAnimSegment();
SoHAnimSegment1698->setUSE(QString("hanim_t11"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1698);

SoHAnimSegment* SoHAnimSegment1699 = new SoHAnimSegment();
SoHAnimSegment1699->setUSE(QString("hanim_t12"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1699);

SoHAnimSegment* SoHAnimSegment1700 = new SoHAnimSegment();
SoHAnimSegment1700->setUSE(QString("hanim_l1"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1700);

SoHAnimSegment* SoHAnimSegment1701 = new SoHAnimSegment();
SoHAnimSegment1701->setUSE(QString("hanim_l2"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1701);

SoHAnimSegment* SoHAnimSegment1702 = new SoHAnimSegment();
SoHAnimSegment1702->setUSE(QString("hanim_l3"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1702);

SoHAnimSegment* SoHAnimSegment1703 = new SoHAnimSegment();
SoHAnimSegment1703->setUSE(QString("hanim_l4"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1703);

SoHAnimSegment* SoHAnimSegment1704 = new SoHAnimSegment();
SoHAnimSegment1704->setUSE(QString("hanim_l5"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1704);

SoHAnimSegment* SoHAnimSegment1705 = new SoHAnimSegment();
SoHAnimSegment1705->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1705);

SoHAnimSegment* SoHAnimSegment1706 = new SoHAnimSegment();
SoHAnimSegment1706->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1706);

SoHAnimSegment* SoHAnimSegment1707 = new SoHAnimSegment();
SoHAnimSegment1707->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1707);

SoHAnimSegment* SoHAnimSegment1708 = new SoHAnimSegment();
SoHAnimSegment1708->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1708);

SoHAnimSegment* SoHAnimSegment1709 = new SoHAnimSegment();
SoHAnimSegment1709->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1709);

SoHAnimSegment* SoHAnimSegment1710 = new SoHAnimSegment();
SoHAnimSegment1710->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1710);

SoHAnimSegment* SoHAnimSegment1711 = new SoHAnimSegment();
SoHAnimSegment1711->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1711);

SoHAnimSegment* SoHAnimSegment1712 = new SoHAnimSegment();
SoHAnimSegment1712->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1712);

SoHAnimSegment* SoHAnimSegment1713 = new SoHAnimSegment();
SoHAnimSegment1713->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1713);

SoHAnimSegment* SoHAnimSegment1714 = new SoHAnimSegment();
SoHAnimSegment1714->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1714);

SoHAnimSegment* SoHAnimSegment1715 = new SoHAnimSegment();
SoHAnimSegment1715->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1715);

SoHAnimSegment* SoHAnimSegment1716 = new SoHAnimSegment();
SoHAnimSegment1716->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1716);

SoHAnimSegment* SoHAnimSegment1717 = new SoHAnimSegment();
SoHAnimSegment1717->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1717);

SoHAnimSegment* SoHAnimSegment1718 = new SoHAnimSegment();
SoHAnimSegment1718->setUSE(QString("hanim_l_forefoot"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1718);

SoHAnimSegment* SoHAnimSegment1719 = new SoHAnimSegment();
SoHAnimSegment1719->setUSE(QString("hanim_r_forefoot"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1719);

SoHAnimSegment* SoHAnimSegment1720 = new SoHAnimSegment();
SoHAnimSegment1720->setUSE(QString("hanim_l_hand"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1720);

SoHAnimSegment* SoHAnimSegment1721 = new SoHAnimSegment();
SoHAnimSegment1721->setUSE(QString("hanim_r_hand"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1721);

SoHAnimSegment* SoHAnimSegment1722 = new SoHAnimSegment();
SoHAnimSegment1722->setUSE(QString("hanim_l_hindfoot"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1722);

SoHAnimSegment* SoHAnimSegment1723 = new SoHAnimSegment();
SoHAnimSegment1723->setUSE(QString("hanim_r_hindfoot"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1723);

SoHAnimSegment* SoHAnimSegment1724 = new SoHAnimSegment();
SoHAnimSegment1724->setUSE(QString("hanim_l_index_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1724);

SoHAnimSegment* SoHAnimSegment1725 = new SoHAnimSegment();
SoHAnimSegment1725->setUSE(QString("hanim_r_index_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1725);

SoHAnimSegment* SoHAnimSegment1726 = new SoHAnimSegment();
SoHAnimSegment1726->setUSE(QString("hanim_l_index_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1726);

SoHAnimSegment* SoHAnimSegment1727 = new SoHAnimSegment();
SoHAnimSegment1727->setUSE(QString("hanim_r_index_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1727);

SoHAnimSegment* SoHAnimSegment1728 = new SoHAnimSegment();
SoHAnimSegment1728->setUSE(QString("hanim_l_index_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1728);

SoHAnimSegment* SoHAnimSegment1729 = new SoHAnimSegment();
SoHAnimSegment1729->setUSE(QString("hanim_r_index_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1729);

SoHAnimSegment* SoHAnimSegment1730 = new SoHAnimSegment();
SoHAnimSegment1730->setUSE(QString("hanim_l_index_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1730);

SoHAnimSegment* SoHAnimSegment1731 = new SoHAnimSegment();
SoHAnimSegment1731->setUSE(QString("hanim_r_index_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1731);

SoHAnimSegment* SoHAnimSegment1732 = new SoHAnimSegment();
SoHAnimSegment1732->setUSE(QString("hanim_l_middistal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1732);

SoHAnimSegment* SoHAnimSegment1733 = new SoHAnimSegment();
SoHAnimSegment1733->setUSE(QString("hanim_r_middistal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1733);

SoHAnimSegment* SoHAnimSegment1734 = new SoHAnimSegment();
SoHAnimSegment1734->setUSE(QString("hanim_l_middle_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1734);

SoHAnimSegment* SoHAnimSegment1735 = new SoHAnimSegment();
SoHAnimSegment1735->setUSE(QString("hanim_r_middle_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1735);

SoHAnimSegment* SoHAnimSegment1736 = new SoHAnimSegment();
SoHAnimSegment1736->setUSE(QString("hanim_l_middle_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1736);

SoHAnimSegment* SoHAnimSegment1737 = new SoHAnimSegment();
SoHAnimSegment1737->setUSE(QString("hanim_r_middle_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1737);

SoHAnimSegment* SoHAnimSegment1738 = new SoHAnimSegment();
SoHAnimSegment1738->setUSE(QString("hanim_l_middle_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1738);

SoHAnimSegment* SoHAnimSegment1739 = new SoHAnimSegment();
SoHAnimSegment1739->setUSE(QString("hanim_r_middle_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1739);

SoHAnimSegment* SoHAnimSegment1740 = new SoHAnimSegment();
SoHAnimSegment1740->setUSE(QString("hanim_l_middle_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1740);

SoHAnimSegment* SoHAnimSegment1741 = new SoHAnimSegment();
SoHAnimSegment1741->setUSE(QString("hanim_r_middle_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1741);

SoHAnimSegment* SoHAnimSegment1742 = new SoHAnimSegment();
SoHAnimSegment1742->setUSE(QString("hanim_l_midproximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1742);

SoHAnimSegment* SoHAnimSegment1743 = new SoHAnimSegment();
SoHAnimSegment1743->setUSE(QString("hanim_r_midproximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1743);

SoHAnimSegment* SoHAnimSegment1744 = new SoHAnimSegment();
SoHAnimSegment1744->setUSE(QString("hanim_l_pinky_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1744);

SoHAnimSegment* SoHAnimSegment1745 = new SoHAnimSegment();
SoHAnimSegment1745->setUSE(QString("hanim_r_pinky_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1745);

SoHAnimSegment* SoHAnimSegment1746 = new SoHAnimSegment();
SoHAnimSegment1746->setUSE(QString("hanim_l_pinky_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1746);

SoHAnimSegment* SoHAnimSegment1747 = new SoHAnimSegment();
SoHAnimSegment1747->setUSE(QString("hanim_r_pinky_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1747);

SoHAnimSegment* SoHAnimSegment1748 = new SoHAnimSegment();
SoHAnimSegment1748->setUSE(QString("hanim_l_pinky_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1748);

SoHAnimSegment* SoHAnimSegment1749 = new SoHAnimSegment();
SoHAnimSegment1749->setUSE(QString("hanim_r_pinky_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1749);

SoHAnimSegment* SoHAnimSegment1750 = new SoHAnimSegment();
SoHAnimSegment1750->setUSE(QString("hanim_l_pinky_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1750);

SoHAnimSegment* SoHAnimSegment1751 = new SoHAnimSegment();
SoHAnimSegment1751->setUSE(QString("hanim_r_pinky_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1751);

SoHAnimSegment* SoHAnimSegment1752 = new SoHAnimSegment();
SoHAnimSegment1752->setUSE(QString("hanim_l_ring_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1752);

SoHAnimSegment* SoHAnimSegment1753 = new SoHAnimSegment();
SoHAnimSegment1753->setUSE(QString("hanim_r_ring_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1753);

SoHAnimSegment* SoHAnimSegment1754 = new SoHAnimSegment();
SoHAnimSegment1754->setUSE(QString("hanim_l_ring_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1754);

SoHAnimSegment* SoHAnimSegment1755 = new SoHAnimSegment();
SoHAnimSegment1755->setUSE(QString("hanim_r_ring_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1755);

SoHAnimSegment* SoHAnimSegment1756 = new SoHAnimSegment();
SoHAnimSegment1756->setUSE(QString("hanim_l_ring_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1756);

SoHAnimSegment* SoHAnimSegment1757 = new SoHAnimSegment();
SoHAnimSegment1757->setUSE(QString("hanim_r_ring_middle"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1757);

SoHAnimSegment* SoHAnimSegment1758 = new SoHAnimSegment();
SoHAnimSegment1758->setUSE(QString("hanim_l_ring_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1758);

SoHAnimSegment* SoHAnimSegment1759 = new SoHAnimSegment();
SoHAnimSegment1759->setUSE(QString("hanim_r_ring_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1759);

SoHAnimSegment* SoHAnimSegment1760 = new SoHAnimSegment();
SoHAnimSegment1760->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1760);

SoHAnimSegment* SoHAnimSegment1761 = new SoHAnimSegment();
SoHAnimSegment1761->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1761);

SoHAnimSegment* SoHAnimSegment1762 = new SoHAnimSegment();
SoHAnimSegment1762->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1762);

SoHAnimSegment* SoHAnimSegment1763 = new SoHAnimSegment();
SoHAnimSegment1763->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1763);

SoHAnimSegment* SoHAnimSegment1764 = new SoHAnimSegment();
SoHAnimSegment1764->setUSE(QString("hanim_l_thumb_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1764);

SoHAnimSegment* SoHAnimSegment1765 = new SoHAnimSegment();
SoHAnimSegment1765->setUSE(QString("hanim_r_thumb_distal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1765);

SoHAnimSegment* SoHAnimSegment1766 = new SoHAnimSegment();
SoHAnimSegment1766->setUSE(QString("hanim_l_thumb_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1766);

SoHAnimSegment* SoHAnimSegment1767 = new SoHAnimSegment();
SoHAnimSegment1767->setUSE(QString("hanim_r_thumb_metacarpal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1767);

SoHAnimSegment* SoHAnimSegment1768 = new SoHAnimSegment();
SoHAnimSegment1768->setUSE(QString("hanim_l_thumb_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1768);

SoHAnimSegment* SoHAnimSegment1769 = new SoHAnimSegment();
SoHAnimSegment1769->setUSE(QString("hanim_r_thumb_proximal"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1769);

SoHAnimSegment* SoHAnimSegment1770 = new SoHAnimSegment();
SoHAnimSegment1770->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1770);

SoHAnimSegment* SoHAnimSegment1771 = new SoHAnimSegment();
SoHAnimSegment1771->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid45->setSegments(*SoHAnimSegment1771);

SoHAnimSite* SoHAnimSite1772 = new SoHAnimSite();
SoHAnimSite1772->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1772);

SoHAnimSite* SoHAnimSite1773 = new SoHAnimSite();
SoHAnimSite1773->setUSE(QString("hanim_skull_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1773);

SoHAnimSite* SoHAnimSite1774 = new SoHAnimSite();
SoHAnimSite1774->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1774);

SoHAnimSite* SoHAnimSite1775 = new SoHAnimSite();
SoHAnimSite1775->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1775);

SoHAnimSite* SoHAnimSite1776 = new SoHAnimSite();
SoHAnimSite1776->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1776);

SoHAnimSite* SoHAnimSite1777 = new SoHAnimSite();
SoHAnimSite1777->setUSE(QString("hanim_suprasternale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1777);

SoHAnimSite* SoHAnimSite1778 = new SoHAnimSite();
SoHAnimSite1778->setUSE(QString("hanim_cervicale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1778);

SoHAnimSite* SoHAnimSite1779 = new SoHAnimSite();
SoHAnimSite1779->setUSE(QString("hanim_substernale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1779);

SoHAnimSite* SoHAnimSite1780 = new SoHAnimSite();
SoHAnimSite1780->setUSE(QString("hanim_rib10_midspine_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1780);

SoHAnimSite* SoHAnimSite1781 = new SoHAnimSite();
SoHAnimSite1781->setUSE(QString("hanim_waist_preferred_post_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1781);

SoHAnimSite* SoHAnimSite1782 = new SoHAnimSite();
SoHAnimSite1782->setUSE(QString("hanim_navel_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1782);

SoHAnimSite* SoHAnimSite1783 = new SoHAnimSite();
SoHAnimSite1783->setUSE(QString("hanim_l_acromion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1783);

SoHAnimSite* SoHAnimSite1784 = new SoHAnimSite();
SoHAnimSite1784->setUSE(QString("hanim_r_acromion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1784);

SoHAnimSite* SoHAnimSite1785 = new SoHAnimSite();
SoHAnimSite1785->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1785);

SoHAnimSite* SoHAnimSite1786 = new SoHAnimSite();
SoHAnimSite1786->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1786);

SoHAnimSite* SoHAnimSite1787 = new SoHAnimSite();
SoHAnimSite1787->setUSE(QString("hanim_l_axilla_ant_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1787);

SoHAnimSite* SoHAnimSite1788 = new SoHAnimSite();
SoHAnimSite1788->setUSE(QString("hanim_r_axilla_ant_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1788);

SoHAnimSite* SoHAnimSite1789 = new SoHAnimSite();
SoHAnimSite1789->setUSE(QString("hanim_l_axilla_post_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1789);

SoHAnimSite* SoHAnimSite1790 = new SoHAnimSite();
SoHAnimSite1790->setUSE(QString("hanim_r_axilla_post_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1790);

SoHAnimSite* SoHAnimSite1791 = new SoHAnimSite();
SoHAnimSite1791->setUSE(QString("hanim_l_calcaneous_post_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1791);

SoHAnimSite* SoHAnimSite1792 = new SoHAnimSite();
SoHAnimSite1792->setUSE(QString("hanim_r_calcaneous_post_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1792);

SoHAnimSite* SoHAnimSite1793 = new SoHAnimSite();
SoHAnimSite1793->setUSE(QString("hanim_l_clavicale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1793);

SoHAnimSite* SoHAnimSite1794 = new SoHAnimSite();
SoHAnimSite1794->setUSE(QString("hanim_r_clavicale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1794);

SoHAnimSite* SoHAnimSite1795 = new SoHAnimSite();
SoHAnimSite1795->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1795);

SoHAnimSite* SoHAnimSite1796 = new SoHAnimSite();
SoHAnimSite1796->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1796);

SoHAnimSite* SoHAnimSite1797 = new SoHAnimSite();
SoHAnimSite1797->setUSE(QString("hanim_l_digit2_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1797);

SoHAnimSite* SoHAnimSite1798 = new SoHAnimSite();
SoHAnimSite1798->setUSE(QString("hanim_r_digit2_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1798);

SoHAnimSite* SoHAnimSite1799 = new SoHAnimSite();
SoHAnimSite1799->setUSE(QString("hanim_l_femoral_lateral_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1799);

SoHAnimSite* SoHAnimSite1800 = new SoHAnimSite();
SoHAnimSite1800->setUSE(QString("hanim_r_femoral_lateral_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1800);

SoHAnimSite* SoHAnimSite1801 = new SoHAnimSite();
SoHAnimSite1801->setUSE(QString("hanim_l_femoral_medial_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1801);

SoHAnimSite* SoHAnimSite1802 = new SoHAnimSite();
SoHAnimSite1802->setUSE(QString("hanim_r_femoral_medial_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1802);

SoHAnimSite* SoHAnimSite1803 = new SoHAnimSite();
SoHAnimSite1803->setUSE(QString("hanim_l_forefoot_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1803);

SoHAnimSite* SoHAnimSite1804 = new SoHAnimSite();
SoHAnimSite1804->setUSE(QString("hanim_r_forefoot_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1804);

SoHAnimSite* SoHAnimSite1805 = new SoHAnimSite();
SoHAnimSite1805->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1805);

SoHAnimSite* SoHAnimSite1806 = new SoHAnimSite();
SoHAnimSite1806->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1806);

SoHAnimSite* SoHAnimSite1807 = new SoHAnimSite();
SoHAnimSite1807->setUSE(QString("hanim_l_humeral_lateral_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1807);

SoHAnimSite* SoHAnimSite1808 = new SoHAnimSite();
SoHAnimSite1808->setUSE(QString("hanim_r_humeral_lateral_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1808);

SoHAnimSite* SoHAnimSite1809 = new SoHAnimSite();
SoHAnimSite1809->setUSE(QString("hanim_l_humeral_medial_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1809);

SoHAnimSite* SoHAnimSite1810 = new SoHAnimSite();
SoHAnimSite1810->setUSE(QString("hanim_r_humeral_medial_epicn_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1810);

SoHAnimSite* SoHAnimSite1811 = new SoHAnimSite();
SoHAnimSite1811->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1811);

SoHAnimSite* SoHAnimSite1812 = new SoHAnimSite();
SoHAnimSite1812->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1812);

SoHAnimSite* SoHAnimSite1813 = new SoHAnimSite();
SoHAnimSite1813->setUSE(QString("hanim_l_index_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1813);

SoHAnimSite* SoHAnimSite1814 = new SoHAnimSite();
SoHAnimSite1814->setUSE(QString("hanim_r_index_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1814);

SoHAnimSite* SoHAnimSite1815 = new SoHAnimSite();
SoHAnimSite1815->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1815);

SoHAnimSite* SoHAnimSite1816 = new SoHAnimSite();
SoHAnimSite1816->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1816);

SoHAnimSite* SoHAnimSite1817 = new SoHAnimSite();
SoHAnimSite1817->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1817);

SoHAnimSite* SoHAnimSite1818 = new SoHAnimSite();
SoHAnimSite1818->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1818);

SoHAnimSite* SoHAnimSite1819 = new SoHAnimSite();
SoHAnimSite1819->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1819);

SoHAnimSite* SoHAnimSite1820 = new SoHAnimSite();
SoHAnimSite1820->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1820);

SoHAnimSite* SoHAnimSite1821 = new SoHAnimSite();
SoHAnimSite1821->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1821);

SoHAnimSite* SoHAnimSite1822 = new SoHAnimSite();
SoHAnimSite1822->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1822);

SoHAnimSite* SoHAnimSite1823 = new SoHAnimSite();
SoHAnimSite1823->setUSE(QString("hanim_l_metacarpal_pha2_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1823);

SoHAnimSite* SoHAnimSite1824 = new SoHAnimSite();
SoHAnimSite1824->setUSE(QString("hanim_r_metacarpal_pha2_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1824);

SoHAnimSite* SoHAnimSite1825 = new SoHAnimSite();
SoHAnimSite1825->setUSE(QString("hanim_l_metacarpal_pha5_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1825);

SoHAnimSite* SoHAnimSite1826 = new SoHAnimSite();
SoHAnimSite1826->setUSE(QString("hanim_r_metacarpal_pha5_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1826);

SoHAnimSite* SoHAnimSite1827 = new SoHAnimSite();
SoHAnimSite1827->setUSE(QString("hanim_l_metatarsal_pha1_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1827);

SoHAnimSite* SoHAnimSite1828 = new SoHAnimSite();
SoHAnimSite1828->setUSE(QString("hanim_r_metatarsal_pha1_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1828);

SoHAnimSite* SoHAnimSite1829 = new SoHAnimSite();
SoHAnimSite1829->setUSE(QString("hanim_l_metatarsal_pha5_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1829);

SoHAnimSite* SoHAnimSite1830 = new SoHAnimSite();
SoHAnimSite1830->setUSE(QString("hanim_r_metatarsal_pha5_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1830);

SoHAnimSite* SoHAnimSite1831 = new SoHAnimSite();
SoHAnimSite1831->setUSE(QString("hanim_l_middle_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1831);

SoHAnimSite* SoHAnimSite1832 = new SoHAnimSite();
SoHAnimSite1832->setUSE(QString("hanim_r_middle_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1832);

SoHAnimSite* SoHAnimSite1833 = new SoHAnimSite();
SoHAnimSite1833->setUSE(QString("hanim_r_neck_base_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1833);

SoHAnimSite* SoHAnimSite1834 = new SoHAnimSite();
SoHAnimSite1834->setUSE(QString("hanim_l_neck_base_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1834);

SoHAnimSite* SoHAnimSite1835 = new SoHAnimSite();
SoHAnimSite1835->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1835);

SoHAnimSite* SoHAnimSite1836 = new SoHAnimSite();
SoHAnimSite1836->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1836);

SoHAnimSite* SoHAnimSite1837 = new SoHAnimSite();
SoHAnimSite1837->setUSE(QString("hanim_l_pinky_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1837);

SoHAnimSite* SoHAnimSite1838 = new SoHAnimSite();
SoHAnimSite1838->setUSE(QString("hanim_r_pinky_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1838);

SoHAnimSite* SoHAnimSite1839 = new SoHAnimSite();
SoHAnimSite1839->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1839);

SoHAnimSite* SoHAnimSite1840 = new SoHAnimSite();
SoHAnimSite1840->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1840);

SoHAnimSite* SoHAnimSite1841 = new SoHAnimSite();
SoHAnimSite1841->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1841);

SoHAnimSite* SoHAnimSite1842 = new SoHAnimSite();
SoHAnimSite1842->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1842);

SoHAnimSite* SoHAnimSite1843 = new SoHAnimSite();
SoHAnimSite1843->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1843);

SoHAnimSite* SoHAnimSite1844 = new SoHAnimSite();
SoHAnimSite1844->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1844);

SoHAnimSite* SoHAnimSite1845 = new SoHAnimSite();
SoHAnimSite1845->setUSE(QString("hanim_r_rib10_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1845);

SoHAnimSite* SoHAnimSite1846 = new SoHAnimSite();
SoHAnimSite1846->setUSE(QString("hanim_l_rib10_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1846);

SoHAnimSite* SoHAnimSite1847 = new SoHAnimSite();
SoHAnimSite1847->setUSE(QString("hanim_l_ring_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1847);

SoHAnimSite* SoHAnimSite1848 = new SoHAnimSite();
SoHAnimSite1848->setUSE(QString("hanim_r_ring_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1848);

SoHAnimSite* SoHAnimSite1849 = new SoHAnimSite();
SoHAnimSite1849->setUSE(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1849);

SoHAnimSite* SoHAnimSite1850 = new SoHAnimSite();
SoHAnimSite1850->setUSE(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1850);

SoHAnimSite* SoHAnimSite1851 = new SoHAnimSite();
SoHAnimSite1851->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1851);

SoHAnimSite* SoHAnimSite1852 = new SoHAnimSite();
SoHAnimSite1852->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1852);

SoHAnimSite* SoHAnimSite1853 = new SoHAnimSite();
SoHAnimSite1853->setUSE(QString("hanim_r_thelion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1853);

SoHAnimSite* SoHAnimSite1854 = new SoHAnimSite();
SoHAnimSite1854->setUSE(QString("hanim_l_thelion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1854);

SoHAnimSite* SoHAnimSite1855 = new SoHAnimSite();
SoHAnimSite1855->setUSE(QString("hanim_l_thumb_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1855);

SoHAnimSite* SoHAnimSite1856 = new SoHAnimSite();
SoHAnimSite1856->setUSE(QString("hanim_r_thumb_distal_tip"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1856);

SoHAnimSite* SoHAnimSite1857 = new SoHAnimSite();
SoHAnimSite1857->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1857);

SoHAnimSite* SoHAnimSite1858 = new SoHAnimSite();
SoHAnimSite1858->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1858);

SoHAnimSite* SoHAnimSite1859 = new SoHAnimSite();
SoHAnimSite1859->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1859);

SoHAnimSite* SoHAnimSite1860 = new SoHAnimSite();
SoHAnimSite1860->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1860);

SoHAnimSite* SoHAnimSite1861 = new SoHAnimSite();
SoHAnimSite1861->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1861);

SoHAnimSite* SoHAnimSite1862 = new SoHAnimSite();
SoHAnimSite1862->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1862);

SoHAnimSite* SoHAnimSite1863 = new SoHAnimSite();
SoHAnimSite1863->setDEF(QString("hanim_l_inclined_view"));
SoHAnimSite1863->X3DNode::setName(QString("l_inclined_view"));
SoHAnimSite1863->setTranslation(new float[]{1.62,1.05,2.06});
SoHAnimSite1863->setRotation(new float[]{-0.113,0.993,0.0347,0.671});
SoTouchSensor* SoTouchSensor1864 = new SoTouchSensor();
SoTouchSensor1864->setDescription(QString("HAnimSite l_inclined_view"));
SoHAnimSite1863->addChild(*SoTouchSensor1864);

SoShape* SoShape1865 = new SoShape();
SoShape1865->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1863->addChild(*SoShape1865);

SoViewpoint* SoViewpoint1866 = new SoViewpoint();
SoViewpoint1866->setDEF(QString("hanim_l_inclined_viewpoint"));
SoViewpoint1866->setDescription(QString("left inclined"));
SoViewpoint1866->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite1863->addChild(*SoViewpoint1866);

SoAnchor* SoAnchor1867 = new SoAnchor();
SoAnchor1867->setDescription(QString("HAnimSite hanim_l_inclined_view Viewpoint"));
SoAnchor1867->setUrl(new QString[]{QString("#hanim_l_inclined_viewpoint")}, 1);
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

SoHAnimSite1863->addChild(SoAnchor1867);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1863);

SoHAnimSite* SoHAnimSite1871 = new SoHAnimSite();
SoHAnimSite1871->setDEF(QString("hanim_r_inclined_view"));
SoHAnimSite1871->X3DNode::setName(QString("r_inclined_view"));
SoHAnimSite1871->setTranslation(new float[]{-1.62,1.05,2.06});
SoHAnimSite1871->setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
SoTouchSensor* SoTouchSensor1872 = new SoTouchSensor();
SoTouchSensor1872->setDescription(QString("HAnimSite r_inclined_view"));
SoHAnimSite1871->addChild(*SoTouchSensor1872);

SoShape* SoShape1873 = new SoShape();
SoShape1873->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1871->addChild(*SoShape1873);

SoViewpoint* SoViewpoint1874 = new SoViewpoint();
SoViewpoint1874->setDEF(QString("hanim_r_inclined_viewpoint"));
SoViewpoint1874->setDescription(QString("right inclined"));
SoViewpoint1874->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1874->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1871->addChild(*SoViewpoint1874);

SoAnchor* SoAnchor1875 = new SoAnchor();
SoAnchor1875->setDescription(QString("HAnimSite hanim_r_inclined_view Viewpoint"));
SoAnchor1875->setUrl(new QString[]{QString("#hanim_r_inclined_viewpoint")}, 1);
SoLOD* SoLOD1876 = new SoLOD();
SoLOD1876->setForceTransitions(true);
SoLOD1876->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1877 = new SoWorldInfo();
SoWorldInfo1877->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1876->addChildren(*SoWorldInfo1877);

SoShape* SoShape1878 = new SoShape();
SoShape1878->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1876->addChildren(SoShape1878);

SoAnchor1875->addChild(*SoLOD1876);

SoHAnimSite1871->addChild(SoAnchor1875);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1871);

SoHAnimSite* SoHAnimSite1879 = new SoHAnimSite();
SoHAnimSite1879->setDEF(QString("hanim_front_view"));
SoHAnimSite1879->X3DNode::setName(QString("front_view"));
SoHAnimSite1879->setTranslation(new float[]{0.0,0.85,2.58});
SoTouchSensor* SoTouchSensor1880 = new SoTouchSensor();
SoTouchSensor1880->setDescription(QString("HAnimSite front_view"));
SoHAnimSite1879->addChild(*SoTouchSensor1880);

SoShape* SoShape1881 = new SoShape();
SoShape1881->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1879->addChild(*SoShape1881);

SoViewpoint* SoViewpoint1882 = new SoViewpoint();
SoViewpoint1882->setDEF(QString("hanim_front_viewpoint"));
SoViewpoint1882->setDescription(QString("front"));
SoViewpoint1882->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1882->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1879->addChild(*SoViewpoint1882);

SoAnchor* SoAnchor1883 = new SoAnchor();
SoAnchor1883->setDescription(QString("HAnimSite hanim_front_view Viewpoint"));
SoAnchor1883->setUrl(new QString[]{QString("#hanim_front_viewpoint")}, 1);
SoLOD* SoLOD1884 = new SoLOD();
SoLOD1884->setForceTransitions(true);
SoLOD1884->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1885 = new SoWorldInfo();
SoWorldInfo1885->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1884->addChildren(*SoWorldInfo1885);

SoShape* SoShape1886 = new SoShape();
SoShape1886->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1884->addChildren(SoShape1886);

SoAnchor1883->addChild(*SoLOD1884);

SoHAnimSite1879->addChild(SoAnchor1883);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1879);

SoHAnimSite* SoHAnimSite1887 = new SoHAnimSite();
SoHAnimSite1887->setDEF(QString("hanim_back_view"));
SoHAnimSite1887->X3DNode::setName(QString("back_view"));
SoHAnimSite1887->setTranslation(new float[]{0.0,0.85,-2.58});
SoHAnimSite1887->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoTouchSensor* SoTouchSensor1888 = new SoTouchSensor();
SoTouchSensor1888->setDescription(QString("HAnimSite back_view"));
SoHAnimSite1887->addChild(*SoTouchSensor1888);

SoShape* SoShape1889 = new SoShape();
SoShape1889->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1887->addChild(*SoShape1889);

SoViewpoint* SoViewpoint1890 = new SoViewpoint();
SoViewpoint1890->setDEF(QString("hanim_back_viewpoint"));
SoViewpoint1890->setDescription(QString("back"));
SoViewpoint1890->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1890->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1887->addChild(*SoViewpoint1890);

SoAnchor* SoAnchor1891 = new SoAnchor();
SoAnchor1891->setDescription(QString("HAnimSite hanim_back_view Viewpoint"));
SoAnchor1891->setUrl(new QString[]{QString("#hanim_back_viewpoint")}, 1);
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

SoHAnimSite1887->addChild(SoAnchor1891);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1887);

SoHAnimSite* SoHAnimSite1895 = new SoHAnimSite();
SoHAnimSite1895->setDEF(QString("hanim_l_side_view"));
SoHAnimSite1895->X3DNode::setName(QString("l_side_view"));
SoHAnimSite1895->setTranslation(new float[]{2.6,0.854,0.0});
SoHAnimSite1895->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoTouchSensor* SoTouchSensor1896 = new SoTouchSensor();
SoTouchSensor1896->setDescription(QString("HAnimSite l_side_view"));
SoHAnimSite1895->addChild(*SoTouchSensor1896);

SoShape* SoShape1897 = new SoShape();
SoShape1897->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1895->addChild(*SoShape1897);

SoViewpoint* SoViewpoint1898 = new SoViewpoint();
SoViewpoint1898->setDEF(QString("hanim_l_side_viewpoint"));
SoViewpoint1898->setDescription(QString("left side"));
SoViewpoint1898->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1898->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1895->addChild(*SoViewpoint1898);

SoAnchor* SoAnchor1899 = new SoAnchor();
SoAnchor1899->setDescription(QString("HAnimSite hanim_l_side_view Viewpoint"));
SoAnchor1899->setUrl(new QString[]{QString("#hanim_l_side_viewpoint")}, 1);
SoLOD* SoLOD1900 = new SoLOD();
SoLOD1900->setForceTransitions(true);
SoLOD1900->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1901 = new SoWorldInfo();
SoWorldInfo1901->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1900->addChildren(*SoWorldInfo1901);

SoShape* SoShape1902 = new SoShape();
SoShape1902->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1900->addChildren(SoShape1902);

SoAnchor1899->addChild(*SoLOD1900);

SoHAnimSite1895->addChild(SoAnchor1899);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1895);

SoHAnimSite* SoHAnimSite1903 = new SoHAnimSite();
SoHAnimSite1903->setDEF(QString("hanim_Top_view"));
SoHAnimSite1903->X3DNode::setName(QString("Top_view"));
SoHAnimSite1903->setTranslation(new float[]{0.0,3.5,0.0});
SoHAnimSite1903->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoTouchSensor* SoTouchSensor1904 = new SoTouchSensor();
SoTouchSensor1904->setDescription(QString("HAnimSite Top_view"));
SoHAnimSite1903->addChild(*SoTouchSensor1904);

SoShape* SoShape1905 = new SoShape();
SoShape1905->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1903->addChild(*SoShape1905);

SoViewpoint* SoViewpoint1906 = new SoViewpoint();
SoViewpoint1906->setDEF(QString("hanim_Top_viewpoint"));
SoViewpoint1906->setDescription(QString("Top"));
SoViewpoint1906->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1906->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1903->addChild(*SoViewpoint1906);

SoAnchor* SoAnchor1907 = new SoAnchor();
SoAnchor1907->setDescription(QString("HAnimSite hanim_Top_view Viewpoint"));
SoAnchor1907->setUrl(new QString[]{QString("#hanim_Top_viewpoint")}, 1);
SoLOD* SoLOD1908 = new SoLOD();
SoLOD1908->setForceTransitions(true);
SoLOD1908->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1909 = new SoWorldInfo();
SoWorldInfo1909->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1908->addChildren(*SoWorldInfo1909);

SoShape* SoShape1910 = new SoShape();
SoShape1910->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1908->addChildren(SoShape1910);

SoAnchor1907->addChild(*SoLOD1908);

SoHAnimSite1903->addChild(SoAnchor1907);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1903);

SoHAnimSite* SoHAnimSite1911 = new SoHAnimSite();
SoHAnimSite1911->setDEF(QString("hanim_front_close_view"));
SoHAnimSite1911->X3DNode::setName(QString("front_close_view"));
SoHAnimSite1911->setTranslation(new float[]{0.0,0.854,1.575});
SoTouchSensor* SoTouchSensor1912 = new SoTouchSensor();
SoTouchSensor1912->setDescription(QString("HAnimSite front_close_view"));
SoHAnimSite1911->addChild(*SoTouchSensor1912);

SoShape* SoShape1913 = new SoShape();
SoShape1913->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1911->addChild(*SoShape1913);

SoViewpoint* SoViewpoint1914 = new SoViewpoint();
SoViewpoint1914->setDEF(QString("hanim_front_close_viewpoint"));
SoViewpoint1914->setDescription(QString("front close"));
SoViewpoint1914->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1914->setCenterOfRotation(new float[]{0.0,0.0,1.575});
SoHAnimSite1911->addChild(*SoViewpoint1914);

SoAnchor* SoAnchor1915 = new SoAnchor();
SoAnchor1915->setDescription(QString("HAnimSite hanim_front_close_view Viewpoint"));
SoAnchor1915->setUrl(new QString[]{QString("#hanim_front_close_viewpoint")}, 1);
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

SoHAnimSite1911->addChild(SoAnchor1915);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1911);

SoHAnimSite* SoHAnimSite1919 = new SoHAnimSite();
SoHAnimSite1919->setDEF(QString("hanim_side_close_view"));
SoHAnimSite1919->X3DNode::setName(QString("side_close_view"));
SoHAnimSite1919->setTranslation(new float[]{1.56,0.854,0.0});
SoHAnimSite1919->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoTouchSensor* SoTouchSensor1920 = new SoTouchSensor();
SoTouchSensor1920->setDescription(QString("HAnimSite side_close_view"));
SoHAnimSite1919->addChild(*SoTouchSensor1920);

SoShape* SoShape1921 = new SoShape();
SoShape1921->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1919->addChild(*SoShape1921);

SoViewpoint* SoViewpoint1922 = new SoViewpoint();
SoViewpoint1922->setDEF(QString("hanim_side_close_viewpoint"));
SoViewpoint1922->setDescription(QString("side close"));
SoViewpoint1922->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1922->setCenterOfRotation(new float[]{1.6,0.0,0.0});
SoHAnimSite1919->addChild(*SoViewpoint1922);

SoAnchor* SoAnchor1923 = new SoAnchor();
SoAnchor1923->setDescription(QString("HAnimSite hanim_side_close_view Viewpoint"));
SoAnchor1923->setUrl(new QString[]{QString("#hanim_side_close_viewpoint")}, 1);
SoLOD* SoLOD1924 = new SoLOD();
SoLOD1924->setForceTransitions(true);
SoLOD1924->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1925 = new SoWorldInfo();
SoWorldInfo1925->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1924->addChildren(*SoWorldInfo1925);

SoShape* SoShape1926 = new SoShape();
SoShape1926->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1924->addChildren(SoShape1926);

SoAnchor1923->addChild(*SoLOD1924);

SoHAnimSite1919->addChild(SoAnchor1923);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1919);

SoHAnimSite* SoHAnimSite1927 = new SoHAnimSite();
SoHAnimSite1927->setDEF(QString("hanim_head_front_close_view"));
SoHAnimSite1927->X3DNode::setName(QString("head_front_close_view"));
SoHAnimSite1927->setTranslation(new float[]{0.0,1.5,1.0});
SoTouchSensor* SoTouchSensor1928 = new SoTouchSensor();
SoTouchSensor1928->setDescription(QString("HAnimSite head_front_close_view"));
SoHAnimSite1927->addChild(*SoTouchSensor1928);

SoShape* SoShape1929 = new SoShape();
SoShape1929->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1927->addChild(*SoShape1929);

SoViewpoint* SoViewpoint1930 = new SoViewpoint();
SoViewpoint1930->setDEF(QString("hanim_head_front_close_viewpoint"));
SoViewpoint1930->setDescription(QString("head front close"));
SoViewpoint1930->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1930->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1927->addChild(*SoViewpoint1930);

SoAnchor* SoAnchor1931 = new SoAnchor();
SoAnchor1931->setDescription(QString("HAnimSite hanim_head_front_close_view Viewpoint"));
SoAnchor1931->setUrl(new QString[]{QString("#hanim_head_front_close_viewpoint")}, 1);
SoLOD* SoLOD1932 = new SoLOD();
SoLOD1932->setForceTransitions(true);
SoLOD1932->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1933 = new SoWorldInfo();
SoWorldInfo1933->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1932->addChildren(*SoWorldInfo1933);

SoShape* SoShape1934 = new SoShape();
SoShape1934->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1932->addChildren(SoShape1934);

SoAnchor1931->addChild(*SoLOD1932);

SoHAnimSite1927->addChild(SoAnchor1931);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1927);

SoHAnimSite* SoHAnimSite1935 = new SoHAnimSite();
SoHAnimSite1935->setDEF(QString("hanim_chest_front_close_view"));
SoHAnimSite1935->X3DNode::setName(QString("chest_front_close_view"));
SoHAnimSite1935->setTranslation(new float[]{0.0,1.2,1.0});
SoTouchSensor* SoTouchSensor1936 = new SoTouchSensor();
SoTouchSensor1936->setDescription(QString("HAnimSite chest_front_close_view"));
SoHAnimSite1935->addChild(*SoTouchSensor1936);

SoShape* SoShape1937 = new SoShape();
SoShape1937->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1935->addChild(*SoShape1937);

SoViewpoint* SoViewpoint1938 = new SoViewpoint();
SoViewpoint1938->setDEF(QString("hanim_chest_front_close_viewpoint"));
SoViewpoint1938->setDescription(QString("chest front close"));
SoViewpoint1938->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1938->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1935->addChild(*SoViewpoint1938);

SoAnchor* SoAnchor1939 = new SoAnchor();
SoAnchor1939->setDescription(QString("HAnimSite hanim_chest_front_close_view Viewpoint"));
SoAnchor1939->setUrl(new QString[]{QString("#hanim_chest_front_close_viewpoint")}, 1);
SoLOD* SoLOD1940 = new SoLOD();
SoLOD1940->setForceTransitions(true);
SoLOD1940->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1941 = new SoWorldInfo();
SoWorldInfo1941->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1940->addChildren(*SoWorldInfo1941);

SoShape* SoShape1942 = new SoShape();
SoShape1942->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1940->addChildren(SoShape1942);

SoAnchor1939->addChild(*SoLOD1940);

SoHAnimSite1935->addChild(SoAnchor1939);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1935);

SoHAnimSite* SoHAnimSite1943 = new SoHAnimSite();
SoHAnimSite1943->setDEF(QString("hanim_pelvis_front_close_view"));
SoHAnimSite1943->X3DNode::setName(QString("pelvis_front_close_view"));
SoHAnimSite1943->setTranslation(new float[]{0.0,0.8,1.0});
SoTouchSensor* SoTouchSensor1944 = new SoTouchSensor();
SoTouchSensor1944->setDescription(QString("HAnimSite pelvis_front_close_view"));
SoHAnimSite1943->addChild(*SoTouchSensor1944);

SoShape* SoShape1945 = new SoShape();
SoShape1945->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1943->addChild(*SoShape1945);

SoViewpoint* SoViewpoint1946 = new SoViewpoint();
SoViewpoint1946->setDEF(QString("hanim_pelvis_front_close_viewpoint"));
SoViewpoint1946->setDescription(QString("pelvis front close"));
SoViewpoint1946->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1946->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1943->addChild(*SoViewpoint1946);

SoAnchor* SoAnchor1947 = new SoAnchor();
SoAnchor1947->setDescription(QString("HAnimSite hanim_pelvis_front_close_view Viewpoint"));
SoAnchor1947->setUrl(new QString[]{QString("#hanim_pelvis_front_close_viewpoint")}, 1);
SoLOD* SoLOD1948 = new SoLOD();
SoLOD1948->setForceTransitions(true);
SoLOD1948->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1949 = new SoWorldInfo();
SoWorldInfo1949->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1948->addChildren(*SoWorldInfo1949);

SoShape* SoShape1950 = new SoShape();
SoShape1950->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1948->addChildren(SoShape1950);

SoAnchor1947->addChild(*SoLOD1948);

SoHAnimSite1943->addChild(SoAnchor1947);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1943);

SoHAnimSite* SoHAnimSite1951 = new SoHAnimSite();
SoHAnimSite1951->setDEF(QString("hanim_knees_front_close_view"));
SoHAnimSite1951->X3DNode::setName(QString("knees_front_close_view"));
SoHAnimSite1951->setTranslation(new float[]{0.0,0.4,1.0});
SoTouchSensor* SoTouchSensor1952 = new SoTouchSensor();
SoTouchSensor1952->setDescription(QString("HAnimSite knees_front_close_view"));
SoHAnimSite1951->addChild(*SoTouchSensor1952);

SoShape* SoShape1953 = new SoShape();
SoShape1953->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1951->addChild(*SoShape1953);

SoViewpoint* SoViewpoint1954 = new SoViewpoint();
SoViewpoint1954->setDEF(QString("hanim_knees_front_close_viewpoint"));
SoViewpoint1954->setDescription(QString("knees front close"));
SoViewpoint1954->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1954->setCenterOfRotation(new float[]{0.0,0.4,0.0});
SoHAnimSite1951->addChild(*SoViewpoint1954);

SoAnchor* SoAnchor1955 = new SoAnchor();
SoAnchor1955->setDescription(QString("HAnimSite hanim_knees_front_close_view Viewpoint"));
SoAnchor1955->setUrl(new QString[]{QString("#hanim_knees_front_close_viewpoint")}, 1);
SoLOD* SoLOD1956 = new SoLOD();
SoLOD1956->setForceTransitions(true);
SoLOD1956->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1957 = new SoWorldInfo();
SoWorldInfo1957->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1956->addChildren(*SoWorldInfo1957);

SoShape* SoShape1958 = new SoShape();
SoShape1958->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1956->addChildren(SoShape1958);

SoAnchor1955->addChild(*SoLOD1956);

SoHAnimSite1951->addChild(SoAnchor1955);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1951);

SoHAnimSite* SoHAnimSite1959 = new SoHAnimSite();
SoHAnimSite1959->setDEF(QString("hanim_feet_front_close_view"));
SoHAnimSite1959->X3DNode::setName(QString("feet_front_close_view"));
SoHAnimSite1959->setTranslation(new float[]{0.0,0.0,1.0});
SoTouchSensor* SoTouchSensor1960 = new SoTouchSensor();
SoTouchSensor1960->setDescription(QString("HAnimSite feet_front_close_view"));
SoHAnimSite1959->addChild(*SoTouchSensor1960);

SoShape* SoShape1961 = new SoShape();
SoShape1961->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1959->addChild(*SoShape1961);

SoViewpoint* SoViewpoint1962 = new SoViewpoint();
SoViewpoint1962->setDEF(QString("hanim_feet_front_close_viewpoint"));
SoViewpoint1962->setDescription(QString("feet front close"));
SoViewpoint1962->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite1959->addChild(*SoViewpoint1962);

SoAnchor* SoAnchor1963 = new SoAnchor();
SoAnchor1963->setDescription(QString("HAnimSite hanim_feet_front_close_view Viewpoint"));
SoAnchor1963->setUrl(new QString[]{QString("#hanim_feet_front_close_viewpoint")}, 1);
SoLOD* SoLOD1964 = new SoLOD();
SoLOD1964->setForceTransitions(true);
SoLOD1964->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1965 = new SoWorldInfo();
SoWorldInfo1965->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1964->addChildren(*SoWorldInfo1965);

SoShape* SoShape1966 = new SoShape();
SoShape1966->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1964->addChildren(SoShape1966);

SoAnchor1963->addChild(*SoLOD1964);

SoHAnimSite1959->addChild(SoAnchor1963);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1959);

SoHAnimSite* SoHAnimSite1967 = new SoHAnimSite();
SoHAnimSite1967->setDEF(QString("hanim_eye_level_view"));
SoHAnimSite1967->X3DNode::setName(QString("eye_level_view"));
SoHAnimSite1967->setTranslation(new float[]{0.0,1.6332,0.0502});
SoTouchSensor* SoTouchSensor1968 = new SoTouchSensor();
SoTouchSensor1968->setDescription(QString("HAnimSite eye_level_view"));
SoHAnimSite1967->addChild(*SoTouchSensor1968);

SoShape* SoShape1969 = new SoShape();
SoShape1969->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1967->addChild(*SoShape1969);

SoViewpoint* SoViewpoint1970 = new SoViewpoint();
SoViewpoint1970->setDEF(QString("hanim_eye_level_viewpoint"));
SoViewpoint1970->setDescription(QString("eye level looking forward"));
SoViewpoint1970->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1970->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite1967->addChild(*SoViewpoint1970);

SoAnchor* SoAnchor1971 = new SoAnchor();
SoAnchor1971->setDescription(QString("HAnimSite hanim_eye_level_view Viewpoint"));
SoAnchor1971->setUrl(new QString[]{QString("#hanim_eye_level_viewpoint")}, 1);
SoLOD* SoLOD1972 = new SoLOD();
SoLOD1972->setForceTransitions(true);
SoLOD1972->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1973 = new SoWorldInfo();
SoWorldInfo1973->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1972->addChildren(*SoWorldInfo1973);

SoShape* SoShape1974 = new SoShape();
SoShape1974->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1972->addChildren(SoShape1974);

SoAnchor1971->addChild(*SoLOD1972);

SoHAnimSite1967->addChild(SoAnchor1971);

SoHAnimHumanoid45->setViewpoints(*SoHAnimSite1967);

SoHAnimSite* SoHAnimSite1975 = new SoHAnimSite();
SoHAnimSite1975->setUSE(QString("hanim_l_eyeball_site_view"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1975);

SoHAnimSite* SoHAnimSite1976 = new SoHAnimSite();
SoHAnimSite1976->setUSE(QString("hanim_r_eyeball_site_view"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1976);

SoHAnimSite* SoHAnimSite1977 = new SoHAnimSite();
SoHAnimSite1977->setUSE(QString("hanim_l_hand_front_view"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1977);

SoHAnimSite* SoHAnimSite1978 = new SoHAnimSite();
SoHAnimSite1978->setUSE(QString("hanim_r_hand_front_view"));
SoHAnimHumanoid45->setSites(*SoHAnimSite1978);

SoNode31->addChild(*SoHAnimHumanoid45);

SoSceneManager0->setSceneGraph(*SoNode31);

return 0;
}
