
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
Someta3->setContent(QString("HAnim2SpecificationLOA3Illustrated.x3d"));
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
Someta6->setContent(QString("HAnim2SpecificationLOA3Invisible.x3d"));
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
Someta16->setContent(QString("18 February 2021"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("modified"));
Someta17->setContent(QString("Mon, 15 Sep 2025 05:20:09 GMT"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("creator"));
Someta18->setContent(QString("Don Brutzman"));
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
SoTouchSensor* SoTouchSensor52 = new SoTouchSensor();
SoTouchSensor52->setDescription(QString("HAnimJoint humanoid_root, HAnimSegment sacrum"));
SoHAnimSegment51->addChild(*SoTouchSensor52);

SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{0.0,0.824,0.0277});
SoShape* SoShape54 = new SoShape();
SoShape54->setDEF(QString("HAnimJointShape"));
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoVRMLAppearance55->setDEF(QString("HAnimJointAppearance"));
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setDiffuseColor(new float[]{1.0,0.5,0.0});
SoMaterial56->setTransparency(0.5);
SoVRMLAppearance55->addChild(*SoMaterial56);

SoShape54->addChild(*SoVRMLAppearance55);

SoSphere* SoSphere57 = new SoSphere();
SoSphere57->setRadius(0.006);
SoShape54->setGeometry(*SoSphere57);

SoTransform53->addChild(*SoShape54);

SoHAnimSegment51->addChild(*SoTransform53);

SoShape* SoShape58 = new SoShape();
SoLineSet* SoLineSet59 = new SoLineSet();
SoLineSet59->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA60 = new SoColorRGBA();
SoColorRGBA60->setDEF(QString("HAnimSegmentLineColorRGBA"));
SoColorRGBA60->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet59->addChild(*SoColorRGBA60);

SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setPoint(new float[]{0.0,0.824,0.0277,0.0,0.9149,0.0016}, 6);
SoLineSet59->setCoord(*SoCoordinate61);

SoShape58->setGeometry(*SoLineSet59);

SoHAnimSegment51->addChild(*SoShape58);

SoShape* SoShape62 = new SoShape();
SoLineSet* SoLineSet63 = new SoLineSet();
SoLineSet63->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA64 = new SoColorRGBA();
SoColorRGBA64->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet63->addChild(*SoColorRGBA64);

SoCoordinate* SoCoordinate65 = new SoCoordinate();
SoCoordinate65->setPoint(new float[]{0.0,0.824,0.0277,0.0028,1.0568,-0.0776}, 6);
SoLineSet63->setCoord(*SoCoordinate65);

SoShape62->setGeometry(*SoLineSet63);

SoHAnimSegment51->addChild(*SoShape62);

SoHAnimJoint50->addChildren(*SoHAnimSegment51);

SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint66->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint66->setCenter(new float[]{0.0,0.9149,0.0016});
SoHAnimSegment* SoHAnimSegment67 = new SoHAnimSegment();
SoHAnimSegment67->setDEF(QString("hanim_pelvis"));
SoHAnimSegment67->X3DNode::setName(QString("pelvis"));
SoTouchSensor* SoTouchSensor68 = new SoTouchSensor();
SoTouchSensor68->setDescription(QString("HAnimJoint sacroiliac, HAnimSegment pelvis"));
SoHAnimSegment67->addChild(*SoTouchSensor68);

SoTransform* SoTransform69 = new SoTransform();
SoTransform69->setTranslation(new float[]{0.0,0.9149,0.0016});
SoShape* SoShape70 = new SoShape();
SoShape70->setUSE(QString("HAnimJointShape"));
SoTransform69->addChild(*SoShape70);

SoHAnimSegment67->addChild(*SoTransform69);

SoShape* SoShape71 = new SoShape();
SoLineSet* SoLineSet72 = new SoLineSet();
SoLineSet72->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA73 = new SoColorRGBA();
SoColorRGBA73->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet72->addChild(*SoColorRGBA73);

SoCoordinate* SoCoordinate74 = new SoCoordinate();
SoCoordinate74->setPoint(new float[]{0.0,0.9149,0.0016,0.0961,0.9124,-0.0001}, 6);
SoLineSet72->setCoord(*SoCoordinate74);

SoShape71->setGeometry(*SoLineSet72);

SoHAnimSegment67->addChild(*SoShape71);

SoShape* SoShape75 = new SoShape();
SoLineSet* SoLineSet76 = new SoLineSet();
SoLineSet76->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA77 = new SoColorRGBA();
SoColorRGBA77->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet76->addChild(*SoColorRGBA77);

SoCoordinate* SoCoordinate78 = new SoCoordinate();
SoCoordinate78->setPoint(new float[]{0.0,0.9149,0.0016,-0.0961,0.9124,-0.0001}, 6);
SoLineSet76->setCoord(*SoCoordinate78);

SoShape75->setGeometry(*SoLineSet76);

SoHAnimSegment67->addChild(*SoShape75);

SoShape* SoShape79 = new SoShape();
SoLineSet* SoLineSet80 = new SoLineSet();
SoLineSet80->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA81 = new SoColorRGBA();
SoColorRGBA81->setDEF(QString("HAnimSiteLineColorRGBA"));
SoColorRGBA81->setColor(new float[]{1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.1}, 8);
SoLineSet80->addChild(*SoColorRGBA81);

SoCoordinate* SoCoordinate82 = new SoCoordinate();
SoCoordinate82->setPoint(new float[]{0.0,0.9149,0.0016,-0.1525,1.0628,0.0035}, 6);
SoLineSet80->setCoord(*SoCoordinate82);

SoShape79->setGeometry(*SoLineSet80);

SoHAnimSegment67->addChild(*SoShape79);

SoShape* SoShape83 = new SoShape();
SoLineSet* SoLineSet84 = new SoLineSet();
SoLineSet84->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA85 = new SoColorRGBA();
SoColorRGBA85->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet84->addChild(*SoColorRGBA85);

SoCoordinate* SoCoordinate86 = new SoCoordinate();
SoCoordinate86->setPoint(new float[]{0.0,0.9149,0.0016,-0.1689,0.8419,0.0352}, 6);
SoLineSet84->setCoord(*SoCoordinate86);

SoShape83->setGeometry(*SoLineSet84);

SoHAnimSegment67->addChild(*SoShape83);

SoShape* SoShape87 = new SoShape();
SoLineSet* SoLineSet88 = new SoLineSet();
SoLineSet88->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA89 = new SoColorRGBA();
SoColorRGBA89->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet88->addChild(*SoColorRGBA89);

SoCoordinate* SoCoordinate90 = new SoCoordinate();
SoCoordinate90->setPoint(new float[]{0.0,0.9149,0.0016,0.1612,1.0537,0.0008}, 6);
SoLineSet88->setCoord(*SoCoordinate90);

SoShape87->setGeometry(*SoLineSet88);

SoHAnimSegment67->addChild(*SoShape87);

SoShape* SoShape91 = new SoShape();
SoLineSet* SoLineSet92 = new SoLineSet();
SoLineSet92->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA93 = new SoColorRGBA();
SoColorRGBA93->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet92->addChild(*SoColorRGBA93);

SoCoordinate* SoCoordinate94 = new SoCoordinate();
SoCoordinate94->setPoint(new float[]{0.0,0.9149,0.0016,0.1677,0.8336,0.0303}, 6);
SoLineSet92->setCoord(*SoCoordinate94);

SoShape91->setGeometry(*SoLineSet92);

SoHAnimSegment67->addChild(*SoShape91);

SoShape* SoShape95 = new SoShape();
SoLineSet* SoLineSet96 = new SoLineSet();
SoLineSet96->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA97 = new SoColorRGBA();
SoColorRGBA97->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet96->addChild(*SoColorRGBA97);

SoCoordinate* SoCoordinate98 = new SoCoordinate();
SoCoordinate98->setPoint(new float[]{0.0,0.9149,0.0016,-0.0887,1.0021,0.1112}, 6);
SoLineSet96->setCoord(*SoCoordinate98);

SoShape95->setGeometry(*SoLineSet96);

SoHAnimSegment67->addChild(*SoShape95);

SoShape* SoShape99 = new SoShape();
SoLineSet* SoLineSet100 = new SoLineSet();
SoLineSet100->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA101 = new SoColorRGBA();
SoColorRGBA101->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet100->addChild(*SoColorRGBA101);

SoCoordinate* SoCoordinate102 = new SoCoordinate();
SoCoordinate102->setPoint(new float[]{0.0,0.9149,0.0016,0.0925,0.9983,0.1052}, 6);
SoLineSet100->setCoord(*SoCoordinate102);

SoShape99->setGeometry(*SoLineSet100);

SoHAnimSegment67->addChild(*SoShape99);

SoShape* SoShape103 = new SoShape();
SoLineSet* SoLineSet104 = new SoLineSet();
SoLineSet104->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA105 = new SoColorRGBA();
SoColorRGBA105->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet104->addChild(*SoColorRGBA105);

SoCoordinate* SoCoordinate106 = new SoCoordinate();
SoCoordinate106->setPoint(new float[]{0.0,0.9149,0.0016,-0.0716,1.019,-0.1138}, 6);
SoLineSet104->setCoord(*SoCoordinate106);

SoShape103->setGeometry(*SoLineSet104);

SoHAnimSegment67->addChild(*SoShape103);

SoShape* SoShape107 = new SoShape();
SoLineSet* SoLineSet108 = new SoLineSet();
SoLineSet108->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA109 = new SoColorRGBA();
SoColorRGBA109->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet108->addChild(*SoColorRGBA109);

SoCoordinate* SoCoordinate110 = new SoCoordinate();
SoCoordinate110->setPoint(new float[]{0.0,0.9149,0.0016,0.0774,1.019,-0.1151}, 6);
SoLineSet108->setCoord(*SoCoordinate110);

SoShape107->setGeometry(*SoLineSet108);

SoHAnimSegment67->addChild(*SoShape107);

SoShape* SoShape111 = new SoShape();
SoLineSet* SoLineSet112 = new SoLineSet();
SoLineSet112->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA113 = new SoColorRGBA();
SoColorRGBA113->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet112->addChild(*SoColorRGBA113);

SoCoordinate* SoCoordinate114 = new SoCoordinate();
SoCoordinate114->setPoint(new float[]{0.0,0.9149,0.0016,0.0034,0.8266,0.0257}, 6);
SoLineSet112->setCoord(*SoCoordinate114);

SoShape111->setGeometry(*SoLineSet112);

SoHAnimSegment67->addChild(*SoShape111);

SoHAnimSite* SoHAnimSite115 = new SoHAnimSite();
SoHAnimSite115->setDEF(QString("hanim_r_iliocristale_pt"));
SoHAnimSite115->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite115->setTranslation(new float[]{-0.1525,1.0628,0.0035});
SoTouchSensor* SoTouchSensor116 = new SoTouchSensor();
SoTouchSensor116->setDescription(QString("HAnimSite r_iliocristale_pt"));
SoHAnimSite115->addChild(*SoTouchSensor116);

SoShape* SoShape117 = new SoShape();
SoShape117->setDEF(QString("HAnimSiteShape"));
SoVRMLAppearance* SoVRMLAppearance118 = new SoVRMLAppearance();
SoMaterial* SoMaterial119 = new SoMaterial();
SoMaterial119->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance118->addChild(*SoMaterial119);

SoShape117->addChild(*SoVRMLAppearance118);

SoIndexedFaceSet* SoIndexedFaceSet120 = new SoIndexedFaceSet();
SoIndexedFaceSet120->setDEF(QString("DiamondIFS"));
SoIndexedFaceSet120->setSolid(false);
SoIndexedFaceSet120->setCreaseAngle(0.5);
SoIndexedFaceSet120->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate121 = new SoCoordinate();
SoCoordinate121->setPoint(new float[]{0.0,0.008,0.0,-0.008,0.0,0.0,0.0,0.0,0.008,0.008,0.0,0.0,0.0,0.0,-0.008,0.0,-0.008,0.0}, 18);
SoIndexedFaceSet120->setCoord(*SoCoordinate121);

SoShape117->setGeometry(*SoIndexedFaceSet120);

SoHAnimSite115->addChild(*SoShape117);

SoHAnimSegment67->addChild(*SoHAnimSite115);

SoHAnimSite* SoHAnimSite122 = new SoHAnimSite();
SoHAnimSite122->setDEF(QString("hanim_r_trochanterion_pt"));
SoHAnimSite122->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite122->setTranslation(new float[]{-0.1689,0.8419,0.0352});
SoTouchSensor* SoTouchSensor123 = new SoTouchSensor();
SoTouchSensor123->setDescription(QString("HAnimSite r_trochanterion_pt"));
SoHAnimSite122->addChild(*SoTouchSensor123);

SoShape* SoShape124 = new SoShape();
SoShape124->setUSE(QString("HAnimSiteShape"));
SoHAnimSite122->addChild(*SoShape124);

SoHAnimSegment67->addChild(*SoHAnimSite122);

SoHAnimSite* SoHAnimSite125 = new SoHAnimSite();
SoHAnimSite125->setDEF(QString("hanim_l_iliocristale_pt"));
SoHAnimSite125->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite125->setTranslation(new float[]{0.1612,1.0537,0.0008});
SoTouchSensor* SoTouchSensor126 = new SoTouchSensor();
SoTouchSensor126->setDescription(QString("HAnimSite l_iliocristale_pt"));
SoHAnimSite125->addChild(*SoTouchSensor126);

SoShape* SoShape127 = new SoShape();
SoShape127->setUSE(QString("HAnimSiteShape"));
SoHAnimSite125->addChild(*SoShape127);

SoHAnimSegment67->addChild(*SoHAnimSite125);

SoHAnimSite* SoHAnimSite128 = new SoHAnimSite();
SoHAnimSite128->setDEF(QString("hanim_l_trochanterion_pt"));
SoHAnimSite128->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite128->setTranslation(new float[]{0.1677,0.8336,0.0303});
SoTouchSensor* SoTouchSensor129 = new SoTouchSensor();
SoTouchSensor129->setDescription(QString("HAnimSite l_trochanterion_pt"));
SoHAnimSite128->addChild(*SoTouchSensor129);

SoShape* SoShape130 = new SoShape();
SoShape130->setUSE(QString("HAnimSiteShape"));
SoHAnimSite128->addChild(*SoShape130);

SoHAnimSegment67->addChild(*SoHAnimSite128);

SoHAnimSite* SoHAnimSite131 = new SoHAnimSite();
SoHAnimSite131->setDEF(QString("hanim_r_asis_pt"));
SoHAnimSite131->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite131->setTranslation(new float[]{-0.0887,1.0021,0.1112});
SoTouchSensor* SoTouchSensor132 = new SoTouchSensor();
SoTouchSensor132->setDescription(QString("HAnimSite r_asis_pt"));
SoHAnimSite131->addChild(*SoTouchSensor132);

SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("HAnimSiteShape"));
SoHAnimSite131->addChild(*SoShape133);

SoHAnimSegment67->addChild(*SoHAnimSite131);

SoHAnimSite* SoHAnimSite134 = new SoHAnimSite();
SoHAnimSite134->setDEF(QString("hanim_l_asis_pt"));
SoHAnimSite134->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite134->setTranslation(new float[]{0.0925,0.9983,0.1052});
SoTouchSensor* SoTouchSensor135 = new SoTouchSensor();
SoTouchSensor135->setDescription(QString("HAnimSite l_asis_pt"));
SoHAnimSite134->addChild(*SoTouchSensor135);

SoShape* SoShape136 = new SoShape();
SoShape136->setUSE(QString("HAnimSiteShape"));
SoHAnimSite134->addChild(*SoShape136);

SoHAnimSegment67->addChild(*SoHAnimSite134);

SoHAnimSite* SoHAnimSite137 = new SoHAnimSite();
SoHAnimSite137->setDEF(QString("hanim_r_psis_pt"));
SoHAnimSite137->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite137->setTranslation(new float[]{-0.0716,1.019,-0.1138});
SoTouchSensor* SoTouchSensor138 = new SoTouchSensor();
SoTouchSensor138->setDescription(QString("HAnimSite r_psis_pt"));
SoHAnimSite137->addChild(*SoTouchSensor138);

SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("HAnimSiteShape"));
SoHAnimSite137->addChild(*SoShape139);

SoHAnimSegment67->addChild(*SoHAnimSite137);

SoHAnimSite* SoHAnimSite140 = new SoHAnimSite();
SoHAnimSite140->setDEF(QString("hanim_l_psis_pt"));
SoHAnimSite140->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite140->setTranslation(new float[]{0.0774,1.019,-0.1151});
SoTouchSensor* SoTouchSensor141 = new SoTouchSensor();
SoTouchSensor141->setDescription(QString("HAnimSite l_psis_pt"));
SoHAnimSite140->addChild(*SoTouchSensor141);

SoShape* SoShape142 = new SoShape();
SoShape142->setUSE(QString("HAnimSiteShape"));
SoHAnimSite140->addChild(*SoShape142);

SoHAnimSegment67->addChild(*SoHAnimSite140);

SoHAnimSite* SoHAnimSite143 = new SoHAnimSite();
SoHAnimSite143->setDEF(QString("hanim_crotch_pt"));
SoHAnimSite143->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite143->setTranslation(new float[]{0.0034,0.8266,0.0257});
SoTouchSensor* SoTouchSensor144 = new SoTouchSensor();
SoTouchSensor144->setDescription(QString("HAnimSite crotch_pt"));
SoHAnimSite143->addChild(*SoTouchSensor144);

SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("HAnimSiteShape"));
SoHAnimSite143->addChild(*SoShape145);

SoHAnimSegment67->addChild(*SoHAnimSite143);

SoHAnimJoint66->addChildren(*SoHAnimSegment67);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->setDEF(QString("hanim_l_hip"));
SoHAnimJoint146->X3DNode::setName(QString("l_hip"));
SoHAnimJoint146->setCenter(new float[]{0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment147 = new SoHAnimSegment();
SoHAnimSegment147->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment147->X3DNode::setName(QString("l_thigh"));
SoTouchSensor* SoTouchSensor148 = new SoTouchSensor();
SoTouchSensor148->setDescription(QString("HAnimJoint l_hip, HAnimSegment l_thigh"));
SoHAnimSegment147->addChild(*SoTouchSensor148);

SoTransform* SoTransform149 = new SoTransform();
SoTransform149->setTranslation(new float[]{0.0961,0.9124,-0.0001});
SoShape* SoShape150 = new SoShape();
SoShape150->setUSE(QString("HAnimJointShape"));
SoTransform149->addChild(*SoShape150);

SoHAnimSegment147->addChild(*SoTransform149);

SoShape* SoShape151 = new SoShape();
SoLineSet* SoLineSet152 = new SoLineSet();
SoLineSet152->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA153 = new SoColorRGBA();
SoColorRGBA153->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet152->addChild(*SoColorRGBA153);

SoCoordinate* SoCoordinate154 = new SoCoordinate();
SoCoordinate154->setPoint(new float[]{0.0961,0.9124,-0.0001,0.104,0.4867,0.0308}, 6);
SoLineSet152->setCoord(*SoCoordinate154);

SoShape151->setGeometry(*SoLineSet152);

SoHAnimSegment147->addChild(*SoShape151);

SoShape* SoShape155 = new SoShape();
SoLineSet* SoLineSet156 = new SoLineSet();
SoLineSet156->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA157 = new SoColorRGBA();
SoColorRGBA157->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet156->addChild(*SoColorRGBA157);

SoCoordinate* SoCoordinate158 = new SoCoordinate();
SoCoordinate158->setPoint(new float[]{0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309}, 6);
SoLineSet156->setCoord(*SoCoordinate158);

SoShape155->setGeometry(*SoLineSet156);

SoHAnimSegment147->addChild(*SoShape155);

SoShape* SoShape159 = new SoShape();
SoLineSet* SoLineSet160 = new SoLineSet();
SoLineSet160->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA161 = new SoColorRGBA();
SoColorRGBA161->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet160->addChild(*SoColorRGBA161);

SoCoordinate* SoCoordinate162 = new SoCoordinate();
SoCoordinate162->setPoint(new float[]{0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297}, 6);
SoLineSet160->setCoord(*SoCoordinate162);

SoShape159->setGeometry(*SoLineSet160);

SoHAnimSegment147->addChild(*SoShape159);

SoShape* SoShape163 = new SoShape();
SoLineSet* SoLineSet164 = new SoLineSet();
SoLineSet164->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA165 = new SoColorRGBA();
SoColorRGBA165->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet164->addChild(*SoColorRGBA165);

SoCoordinate* SoCoordinate166 = new SoCoordinate();
SoCoordinate166->setPoint(new float[]{0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303}, 6);
SoLineSet164->setCoord(*SoCoordinate166);

SoShape163->setGeometry(*SoLineSet164);

SoHAnimSegment147->addChild(*SoShape163);

SoHAnimSite* SoHAnimSite167 = new SoHAnimSite();
SoHAnimSite167->setDEF(QString("hanim_l_knee_crease_pt"));
SoHAnimSite167->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite167->setTranslation(new float[]{0.0993,0.4881,-0.0309});
SoTouchSensor* SoTouchSensor168 = new SoTouchSensor();
SoTouchSensor168->setDescription(QString("HAnimSite l_knee_crease_pt"));
SoHAnimSite167->addChild(*SoTouchSensor168);

SoShape* SoShape169 = new SoShape();
SoShape169->setUSE(QString("HAnimSiteShape"));
SoHAnimSite167->addChild(*SoShape169);

SoHAnimSegment147->addChild(*SoHAnimSite167);

SoHAnimSite* SoHAnimSite170 = new SoHAnimSite();
SoHAnimSite170->setDEF(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite170->X3DNode::setName(QString("l_femoral_lateral_epicondyle_pt"));
SoHAnimSite170->setTranslation(new float[]{0.1598,0.4967,0.0297});
SoTouchSensor* SoTouchSensor171 = new SoTouchSensor();
SoTouchSensor171->setDescription(QString("HAnimSite l_femoral_lateral_epicn_pt"));
SoHAnimSite170->addChild(*SoTouchSensor171);

SoShape* SoShape172 = new SoShape();
SoShape172->setUSE(QString("HAnimSiteShape"));
SoHAnimSite170->addChild(*SoShape172);

SoHAnimSegment147->addChild(*SoHAnimSite170);

SoHAnimSite* SoHAnimSite173 = new SoHAnimSite();
SoHAnimSite173->setDEF(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimSite173->X3DNode::setName(QString("l_femoral_medial_epicondyle_pt"));
SoHAnimSite173->setTranslation(new float[]{0.0398,0.4946,0.0303});
SoTouchSensor* SoTouchSensor174 = new SoTouchSensor();
SoTouchSensor174->setDescription(QString("HAnimSite l_femoral_medial_epicn_pt"));
SoHAnimSite173->addChild(*SoTouchSensor174);

SoShape* SoShape175 = new SoShape();
SoShape175->setUSE(QString("HAnimSiteShape"));
SoHAnimSite173->addChild(*SoShape175);

SoHAnimSegment147->addChild(*SoHAnimSite173);

SoHAnimJoint146->addChildren(*SoHAnimSegment147);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setDEF(QString("hanim_l_knee"));
SoHAnimJoint176->X3DNode::setName(QString("l_knee"));
SoHAnimJoint176->setCenter(new float[]{0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment177 = new SoHAnimSegment();
SoHAnimSegment177->setDEF(QString("hanim_l_calf"));
SoHAnimSegment177->X3DNode::setName(QString("l_calf"));
SoTouchSensor* SoTouchSensor178 = new SoTouchSensor();
SoTouchSensor178->setDescription(QString("HAnimJoint l_knee, HAnimSegment l_calf"));
SoHAnimSegment177->addChild(*SoTouchSensor178);

SoTransform* SoTransform179 = new SoTransform();
SoTransform179->setTranslation(new float[]{0.104,0.4867,0.0308});
SoShape* SoShape180 = new SoShape();
SoShape180->setUSE(QString("HAnimJointShape"));
SoTransform179->addChild(*SoShape180);

SoHAnimSegment177->addChild(*SoTransform179);

SoShape* SoShape181 = new SoShape();
SoLineSet* SoLineSet182 = new SoLineSet();
SoLineSet182->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA183 = new SoColorRGBA();
SoColorRGBA183->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet182->addChild(*SoColorRGBA183);

SoCoordinate* SoCoordinate184 = new SoCoordinate();
SoCoordinate184->setPoint(new float[]{0.104,0.4867,0.0308,0.1101,0.0656,-0.0736}, 6);
SoLineSet182->setCoord(*SoCoordinate184);

SoShape181->setGeometry(*SoLineSet182);

SoHAnimSegment177->addChild(*SoShape181);

SoHAnimJoint176->addChildren(*SoHAnimSegment177);

SoHAnimJoint* SoHAnimJoint185 = new SoHAnimJoint();
SoHAnimJoint185->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint185->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint185->setCenter(new float[]{0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment186 = new SoHAnimSegment();
SoHAnimSegment186->setDEF(QString("hanim_l_talus"));
SoHAnimSegment186->X3DNode::setName(QString("l_talus"));
SoTouchSensor* SoTouchSensor187 = new SoTouchSensor();
SoTouchSensor187->setDescription(QString("HAnimJoint l_talocrural, HAnimSegment l_talus"));
SoHAnimSegment186->addChild(*SoTouchSensor187);

SoTransform* SoTransform188 = new SoTransform();
SoTransform188->setTranslation(new float[]{0.1101,0.0656,-0.0736});
SoShape* SoShape189 = new SoShape();
SoShape189->setUSE(QString("HAnimJointShape"));
SoTransform188->addChild(*SoShape189);

SoHAnimSegment186->addChild(*SoTransform188);

SoShape* SoShape190 = new SoShape();
SoLineSet* SoLineSet191 = new SoLineSet();
SoLineSet191->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA192 = new SoColorRGBA();
SoColorRGBA192->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet191->addChild(*SoColorRGBA192);

SoCoordinate* SoCoordinate193 = new SoCoordinate();
SoCoordinate193->setPoint(new float[]{0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368}, 6);
SoLineSet191->setCoord(*SoCoordinate193);

SoShape190->setGeometry(*SoLineSet191);

SoHAnimSegment186->addChild(*SoShape190);

SoShape* SoShape194 = new SoShape();
SoLineSet* SoLineSet195 = new SoLineSet();
SoLineSet195->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA196 = new SoColorRGBA();
SoColorRGBA196->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet195->addChild(*SoColorRGBA196);

SoCoordinate* SoCoordinate197 = new SoCoordinate();
SoCoordinate197->setPoint(new float[]{0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032}, 6);
SoLineSet195->setCoord(*SoCoordinate197);

SoShape194->setGeometry(*SoLineSet195);

SoHAnimSegment186->addChild(*SoShape194);

SoShape* SoShape198 = new SoShape();
SoLineSet* SoLineSet199 = new SoLineSet();
SoLineSet199->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA200 = new SoColorRGBA();
SoColorRGBA200->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet199->addChild(*SoColorRGBA200);

SoCoordinate* SoCoordinate201 = new SoCoordinate();
SoCoordinate201->setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881}, 6);
SoLineSet199->setCoord(*SoCoordinate201);

SoShape198->setGeometry(*SoLineSet199);

SoHAnimSegment186->addChild(*SoShape198);

SoShape* SoShape202 = new SoShape();
SoLineSet* SoLineSet203 = new SoLineSet();
SoLineSet203->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA204 = new SoColorRGBA();
SoColorRGBA204->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet203->addChild(*SoColorRGBA204);

SoCoordinate* SoCoordinate205 = new SoCoordinate();
SoCoordinate205->setPoint(new float[]{0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943}, 6);
SoLineSet203->setCoord(*SoCoordinate205);

SoShape202->setGeometry(*SoLineSet203);

SoHAnimSegment186->addChild(*SoShape202);

SoShape* SoShape206 = new SoShape();
SoLineSet* SoLineSet207 = new SoLineSet();
SoLineSet207->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA208 = new SoColorRGBA();
SoColorRGBA208->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet207->addChild(*SoColorRGBA208);

SoCoordinate* SoCoordinate209 = new SoCoordinate();
SoCoordinate209->setPoint(new float[]{0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171}, 6);
SoLineSet207->setCoord(*SoCoordinate209);

SoShape206->setGeometry(*SoLineSet207);

SoHAnimSegment186->addChild(*SoShape206);

SoHAnimSite* SoHAnimSite210 = new SoHAnimSite();
SoHAnimSite210->setDEF(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimSite210->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite210->setTranslation(new float[]{0.1308,0.0597,-0.1032});
SoTouchSensor* SoTouchSensor211 = new SoTouchSensor();
SoTouchSensor211->setDescription(QString("HAnimSite l_lateral_malleolus_pt"));
SoHAnimSite210->addChild(*SoTouchSensor211);

SoShape* SoShape212 = new SoShape();
SoShape212->setUSE(QString("HAnimSiteShape"));
SoHAnimSite210->addChild(*SoShape212);

SoHAnimSegment186->addChild(*SoHAnimSite210);

SoHAnimSite* SoHAnimSite213 = new SoHAnimSite();
SoHAnimSite213->setDEF(QString("hanim_l_medial_malleolus_pt"));
SoHAnimSite213->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite213->setTranslation(new float[]{0.089,0.0716,-0.0881});
SoTouchSensor* SoTouchSensor214 = new SoTouchSensor();
SoTouchSensor214->setDescription(QString("HAnimSite l_medial_malleolus_pt"));
SoHAnimSite213->addChild(*SoTouchSensor214);

SoShape* SoShape215 = new SoShape();
SoShape215->setUSE(QString("HAnimSiteShape"));
SoHAnimSite213->addChild(*SoShape215);

SoHAnimSegment186->addChild(*SoHAnimSite213);

SoHAnimSite* SoHAnimSite216 = new SoHAnimSite();
SoHAnimSite216->setDEF(QString("hanim_l_sphyrion_pt"));
SoHAnimSite216->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite216->setTranslation(new float[]{0.089,0.0575,-0.0943});
SoTouchSensor* SoTouchSensor217 = new SoTouchSensor();
SoTouchSensor217->setDescription(QString("HAnimSite l_sphyrion_pt"));
SoHAnimSite216->addChild(*SoTouchSensor217);

SoShape* SoShape218 = new SoShape();
SoShape218->setUSE(QString("HAnimSiteShape"));
SoHAnimSite216->addChild(*SoShape218);

SoHAnimSegment186->addChild(*SoHAnimSite216);

SoHAnimSite* SoHAnimSite219 = new SoHAnimSite();
SoHAnimSite219->setDEF(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimSite219->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite219->setTranslation(new float[]{0.0974,0.0259,-0.1171});
SoTouchSensor* SoTouchSensor220 = new SoTouchSensor();
SoTouchSensor220->setDescription(QString("HAnimSite l_calcaneous_post_pt"));
SoHAnimSite219->addChild(*SoTouchSensor220);

SoShape* SoShape221 = new SoShape();
SoShape221->setUSE(QString("HAnimSiteShape"));
SoHAnimSite219->addChild(*SoShape221);

SoHAnimSegment186->addChild(*SoHAnimSite219);

SoHAnimJoint185->addChildren(*SoHAnimSegment186);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint222->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint222->setCenter(new float[]{0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment223 = new SoHAnimSegment();
SoHAnimSegment223->setDEF(QString("hanim_l_metatarsal_2"));
SoHAnimSegment223->X3DNode::setName(QString("l_metatarsal_2"));
SoTouchSensor* SoTouchSensor224 = new SoTouchSensor();
SoTouchSensor224->setDescription(QString("HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2"));
SoHAnimSegment223->addChild(*SoTouchSensor224);

SoTransform* SoTransform225 = new SoTransform();
SoTransform225->setTranslation(new float[]{0.1086,0.0001,-0.0368});
SoShape* SoShape226 = new SoShape();
SoShape226->setUSE(QString("HAnimJointShape"));
SoTransform225->addChild(*SoShape226);

SoHAnimSegment223->addChild(*SoTransform225);

SoShape* SoShape227 = new SoShape();
SoLineSet* SoLineSet228 = new SoLineSet();
SoLineSet228->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA229 = new SoColorRGBA();
SoColorRGBA229->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet228->addChild(*SoColorRGBA229);

SoCoordinate* SoCoordinate230 = new SoCoordinate();
SoCoordinate230->setPoint(new float[]{0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368}, 6);
SoLineSet228->setCoord(*SoCoordinate230);

SoShape227->setGeometry(*SoLineSet228);

SoHAnimSegment223->addChild(*SoShape227);

SoHAnimJoint222->addChildren(*SoHAnimSegment223);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint231->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint231->setCenter(new float[]{0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment232->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor233 = new SoTouchSensor();
SoTouchSensor233->setDescription(QString("HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2"));
SoHAnimSegment232->addChild(*SoTouchSensor233);

SoTransform* SoTransform234 = new SoTransform();
SoTransform234->setTranslation(new float[]{0.1086,0.0001,0.0368});
SoShape* SoShape235 = new SoShape();
SoShape235->setUSE(QString("HAnimJointShape"));
SoTransform234->addChild(*SoShape235);

SoHAnimSegment232->addChild(*SoTransform234);

SoShape* SoShape236 = new SoShape();
SoLineSet* SoLineSet237 = new SoLineSet();
SoLineSet237->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA238 = new SoColorRGBA();
SoColorRGBA238->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet237->addChild(*SoColorRGBA238);

SoCoordinate* SoCoordinate239 = new SoCoordinate();
SoCoordinate239->setPoint(new float[]{0.1086,0.0001,0.0368,0.1086,0.0,0.0762}, 6);
SoLineSet237->setCoord(*SoCoordinate239);

SoShape236->setGeometry(*SoLineSet237);

SoHAnimSegment232->addChild(*SoShape236);

SoShape* SoShape240 = new SoShape();
SoLineSet* SoLineSet241 = new SoLineSet();
SoLineSet241->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA242 = new SoColorRGBA();
SoColorRGBA242->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet241->addChild(*SoColorRGBA242);

SoCoordinate* SoCoordinate243 = new SoCoordinate();
SoCoordinate243->setPoint(new float[]{0.1086,0.0001,0.0368,0.0816,0.0232,0.0106}, 6);
SoLineSet241->setCoord(*SoCoordinate243);

SoShape240->setGeometry(*SoLineSet241);

SoHAnimSegment232->addChild(*SoShape240);

SoHAnimSite* SoHAnimSite244 = new SoHAnimSite();
SoHAnimSite244->setDEF(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimSite244->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite244->setTranslation(new float[]{0.0816,0.0232,0.0106});
SoTouchSensor* SoTouchSensor245 = new SoTouchSensor();
SoTouchSensor245->setDescription(QString("HAnimSite l_metatarsal_pha1_pt"));
SoHAnimSite244->addChild(*SoTouchSensor245);

SoShape* SoShape246 = new SoShape();
SoShape246->setUSE(QString("HAnimSiteShape"));
SoHAnimSite244->addChild(*SoShape246);

SoHAnimSegment232->addChild(*SoHAnimSite244);

SoHAnimJoint231->addChildren(*SoHAnimSegment232);

SoHAnimJoint* SoHAnimJoint247 = new SoHAnimJoint();
SoHAnimJoint247->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint247->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint247->setCenter(new float[]{0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment248 = new SoHAnimSegment();
SoHAnimSegment248->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimSegment248->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor249 = new SoTouchSensor();
SoTouchSensor249->setDescription(QString("HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2"));
SoHAnimSegment248->addChild(*SoTouchSensor249);

SoTransform* SoTransform250 = new SoTransform();
SoTransform250->setTranslation(new float[]{0.1086,0.0,0.0762});
SoShape* SoShape251 = new SoShape();
SoShape251->setUSE(QString("HAnimJointShape"));
SoTransform250->addChild(*SoShape251);

SoHAnimSegment248->addChild(*SoTransform250);

SoShape* SoShape252 = new SoShape();
SoLineSet* SoLineSet253 = new SoLineSet();
SoLineSet253->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA254 = new SoColorRGBA();
SoColorRGBA254->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet253->addChild(*SoColorRGBA254);

SoCoordinate* SoCoordinate255 = new SoCoordinate();
SoCoordinate255->setPoint(new float[]{0.1086,0.0,0.0762,0.1354,0.0016,0.1476}, 6);
SoLineSet253->setCoord(*SoCoordinate255);

SoShape252->setGeometry(*SoLineSet253);

SoHAnimSegment248->addChild(*SoShape252);

SoShape* SoShape256 = new SoShape();
SoLineSet* SoLineSet257 = new SoLineSet();
SoLineSet257->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA258 = new SoColorRGBA();
SoColorRGBA258->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet257->addChild(*SoColorRGBA258);

SoCoordinate* SoCoordinate259 = new SoCoordinate();
SoCoordinate259->setPoint(new float[]{0.1086,0.0,0.0762,0.1825,0.007,0.0928}, 6);
SoLineSet257->setCoord(*SoCoordinate259);

SoShape256->setGeometry(*SoLineSet257);

SoHAnimSegment248->addChild(*SoShape256);

SoShape* SoShape260 = new SoShape();
SoLineSet* SoLineSet261 = new SoLineSet();
SoLineSet261->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA262 = new SoColorRGBA();
SoColorRGBA262->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet261->addChild(*SoColorRGBA262);

SoCoordinate* SoCoordinate263 = new SoCoordinate();
SoCoordinate263->setPoint(new float[]{0.1086,0.0,0.0762,0.1195,0.0079,0.1433}, 6);
SoLineSet261->setCoord(*SoCoordinate263);

SoShape260->setGeometry(*SoLineSet261);

SoHAnimSegment248->addChild(*SoShape260);

SoHAnimSite* SoHAnimSite264 = new SoHAnimSite();
SoHAnimSite264->setDEF(QString("hanim_l_forefoot_tip_pt"));
SoHAnimSite264->X3DNode::setName(QString("l_forefoot_tip_pt"));
SoHAnimSite264->setTranslation(new float[]{0.1354,0.0016,0.1476});
SoTouchSensor* SoTouchSensor265 = new SoTouchSensor();
SoTouchSensor265->setDescription(QString("HAnimSite l_forefoot_tip"));
SoHAnimSite264->addChild(*SoTouchSensor265);

SoShape* SoShape266 = new SoShape();
SoShape266->setUSE(QString("HAnimSiteShape"));
SoHAnimSite264->addChild(*SoShape266);

SoHAnimSegment248->addChild(*SoHAnimSite264);

SoHAnimSite* SoHAnimSite267 = new SoHAnimSite();
SoHAnimSite267->setDEF(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimSite267->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite267->setTranslation(new float[]{0.1825,0.007,0.0928});
SoTouchSensor* SoTouchSensor268 = new SoTouchSensor();
SoTouchSensor268->setDescription(QString("HAnimSite l_metatarsal_pha5_pt"));
SoHAnimSite267->addChild(*SoTouchSensor268);

SoShape* SoShape269 = new SoShape();
SoShape269->setUSE(QString("HAnimSiteShape"));
SoHAnimSite267->addChild(*SoShape269);

SoHAnimSegment248->addChild(*SoHAnimSite267);

SoHAnimSite* SoHAnimSite270 = new SoHAnimSite();
SoHAnimSite270->setDEF(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite270->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite270->setTranslation(new float[]{0.1195,0.0079,0.1433});
SoTouchSensor* SoTouchSensor271 = new SoTouchSensor();
SoTouchSensor271->setDescription(QString("HAnimSite l_digit2_pt"));
SoHAnimSite270->addChild(*SoTouchSensor271);

SoShape* SoShape272 = new SoShape();
SoShape272->setUSE(QString("HAnimSiteShape"));
SoHAnimSite270->addChild(*SoShape272);

SoHAnimSegment248->addChild(*SoHAnimSite270);

SoHAnimJoint247->addChildren(*SoHAnimSegment248);

SoHAnimJoint231->addChildren(*SoHAnimJoint247);

SoHAnimJoint222->addChildren(*SoHAnimJoint231);

SoHAnimJoint185->addChildren(*SoHAnimJoint222);

SoHAnimJoint176->addChildren(*SoHAnimJoint185);

SoHAnimJoint146->addChildren(*SoHAnimJoint176);

SoHAnimJoint66->addChildren(*SoHAnimJoint146);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setDEF(QString("hanim_r_hip"));
SoHAnimJoint273->X3DNode::setName(QString("r_hip"));
SoHAnimJoint273->setCenter(new float[]{-0.0961,0.9124,-0.0001});
SoHAnimSegment* SoHAnimSegment274 = new SoHAnimSegment();
SoHAnimSegment274->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment274->X3DNode::setName(QString("r_thigh"));
SoTouchSensor* SoTouchSensor275 = new SoTouchSensor();
SoTouchSensor275->setDescription(QString("HAnimJoint r_hip, HAnimSegment r_thigh"));
SoHAnimSegment274->addChild(*SoTouchSensor275);

SoTransform* SoTransform276 = new SoTransform();
SoTransform276->setTranslation(new float[]{-0.0961,0.9124,-0.0001});
SoShape* SoShape277 = new SoShape();
SoShape277->setUSE(QString("HAnimJointShape"));
SoTransform276->addChild(*SoShape277);

SoHAnimSegment274->addChild(*SoTransform276);

SoShape* SoShape278 = new SoShape();
SoLineSet* SoLineSet279 = new SoLineSet();
SoLineSet279->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA280 = new SoColorRGBA();
SoColorRGBA280->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet279->addChild(*SoColorRGBA280);

SoCoordinate* SoCoordinate281 = new SoCoordinate();
SoCoordinate281->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308}, 6);
SoLineSet279->setCoord(*SoCoordinate281);

SoShape278->setGeometry(*SoLineSet279);

SoHAnimSegment274->addChild(*SoShape278);

SoShape* SoShape282 = new SoShape();
SoLineSet* SoLineSet283 = new SoLineSet();
SoLineSet283->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA284 = new SoColorRGBA();
SoColorRGBA284->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet283->addChild(*SoColorRGBA284);

SoCoordinate* SoCoordinate285 = new SoCoordinate();
SoCoordinate285->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326}, 6);
SoLineSet283->setCoord(*SoCoordinate285);

SoShape282->setGeometry(*SoLineSet283);

SoHAnimSegment274->addChild(*SoShape282);

SoShape* SoShape286 = new SoShape();
SoLineSet* SoLineSet287 = new SoLineSet();
SoLineSet287->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA288 = new SoColorRGBA();
SoColorRGBA288->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet287->addChild(*SoColorRGBA288);

SoCoordinate* SoCoordinate289 = new SoCoordinate();
SoCoordinate289->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031}, 6);
SoLineSet287->setCoord(*SoCoordinate289);

SoShape286->setGeometry(*SoLineSet287);

SoHAnimSegment274->addChild(*SoShape286);

SoShape* SoShape290 = new SoShape();
SoLineSet* SoLineSet291 = new SoLineSet();
SoLineSet291->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA292 = new SoColorRGBA();
SoColorRGBA292->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet291->addChild(*SoColorRGBA292);

SoCoordinate* SoCoordinate293 = new SoCoordinate();
SoCoordinate293->setPoint(new float[]{-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289}, 6);
SoLineSet291->setCoord(*SoCoordinate293);

SoShape290->setGeometry(*SoLineSet291);

SoHAnimSegment274->addChild(*SoShape290);

SoHAnimSite* SoHAnimSite294 = new SoHAnimSite();
SoHAnimSite294->setDEF(QString("hanim_r_knee_crease_pt"));
SoHAnimSite294->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite294->setTranslation(new float[]{-0.0825,0.4932,-0.0326});
SoTouchSensor* SoTouchSensor295 = new SoTouchSensor();
SoTouchSensor295->setDescription(QString("HAnimSite r_knee_crease_pt"));
SoHAnimSite294->addChild(*SoTouchSensor295);

SoShape* SoShape296 = new SoShape();
SoShape296->setUSE(QString("HAnimSiteShape"));
SoHAnimSite294->addChild(*SoShape296);

SoHAnimSegment274->addChild(*SoHAnimSite294);

SoHAnimSite* SoHAnimSite297 = new SoHAnimSite();
SoHAnimSite297->setDEF(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite297->X3DNode::setName(QString("r_femoral_lateral_epicondyle_pt"));
SoHAnimSite297->setTranslation(new float[]{-0.1421,0.4992,0.031});
SoTouchSensor* SoTouchSensor298 = new SoTouchSensor();
SoTouchSensor298->setDescription(QString("HAnimSite r_femoral_lateral_epicn_pt"));
SoHAnimSite297->addChild(*SoTouchSensor298);

SoShape* SoShape299 = new SoShape();
SoShape299->setUSE(QString("HAnimSiteShape"));
SoHAnimSite297->addChild(*SoShape299);

SoHAnimSegment274->addChild(*SoHAnimSite297);

SoHAnimSite* SoHAnimSite300 = new SoHAnimSite();
SoHAnimSite300->setDEF(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimSite300->X3DNode::setName(QString("r_femoral_medial_epicondyle_pt"));
SoHAnimSite300->setTranslation(new float[]{-0.0221,0.5014,0.0289});
SoTouchSensor* SoTouchSensor301 = new SoTouchSensor();
SoTouchSensor301->setDescription(QString("HAnimSite r_femoral_medial_epicn_pt"));
SoHAnimSite300->addChild(*SoTouchSensor301);

SoShape* SoShape302 = new SoShape();
SoShape302->setUSE(QString("HAnimSiteShape"));
SoHAnimSite300->addChild(*SoShape302);

SoHAnimSegment274->addChild(*SoHAnimSite300);

SoHAnimJoint273->addChildren(*SoHAnimSegment274);

SoHAnimJoint* SoHAnimJoint303 = new SoHAnimJoint();
SoHAnimJoint303->setDEF(QString("hanim_r_knee"));
SoHAnimJoint303->X3DNode::setName(QString("r_knee"));
SoHAnimJoint303->setCenter(new float[]{-0.104,0.4867,0.0308});
SoHAnimSegment* SoHAnimSegment304 = new SoHAnimSegment();
SoHAnimSegment304->setDEF(QString("hanim_r_calf"));
SoHAnimSegment304->X3DNode::setName(QString("r_calf"));
SoTouchSensor* SoTouchSensor305 = new SoTouchSensor();
SoTouchSensor305->setDescription(QString("HAnimJoint r_knee, HAnimSegment r_calf"));
SoHAnimSegment304->addChild(*SoTouchSensor305);

SoTransform* SoTransform306 = new SoTransform();
SoTransform306->setTranslation(new float[]{-0.104,0.4867,0.0308});
SoShape* SoShape307 = new SoShape();
SoShape307->setUSE(QString("HAnimJointShape"));
SoTransform306->addChild(*SoShape307);

SoHAnimSegment304->addChild(*SoTransform306);

SoShape* SoShape308 = new SoShape();
SoLineSet* SoLineSet309 = new SoLineSet();
SoLineSet309->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA310 = new SoColorRGBA();
SoColorRGBA310->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet309->addChild(*SoColorRGBA310);

SoCoordinate* SoCoordinate311 = new SoCoordinate();
SoCoordinate311->setPoint(new float[]{-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736}, 6);
SoLineSet309->setCoord(*SoCoordinate311);

SoShape308->setGeometry(*SoLineSet309);

SoHAnimSegment304->addChild(*SoShape308);

SoHAnimJoint303->addChildren(*SoHAnimSegment304);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint312->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint312->setCenter(new float[]{-0.1101,0.0656,-0.0736});
SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setDEF(QString("hanim_r_talus"));
SoHAnimSegment313->X3DNode::setName(QString("r_talus"));
SoTouchSensor* SoTouchSensor314 = new SoTouchSensor();
SoTouchSensor314->setDescription(QString("HAnimJoint r_talocrural, HAnimSegment r_talus"));
SoHAnimSegment313->addChild(*SoTouchSensor314);

SoTransform* SoTransform315 = new SoTransform();
SoTransform315->setTranslation(new float[]{-0.1101,0.0656,-0.0736});
SoShape* SoShape316 = new SoShape();
SoShape316->setUSE(QString("HAnimJointShape"));
SoTransform315->addChild(*SoShape316);

SoHAnimSegment313->addChild(*SoTransform315);

SoShape* SoShape317 = new SoShape();
SoLineSet* SoLineSet318 = new SoLineSet();
SoLineSet318->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA319 = new SoColorRGBA();
SoColorRGBA319->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet318->addChild(*SoColorRGBA319);

SoCoordinate* SoCoordinate320 = new SoCoordinate();
SoCoordinate320->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368}, 6);
SoLineSet318->setCoord(*SoCoordinate320);

SoShape317->setGeometry(*SoLineSet318);

SoHAnimSegment313->addChild(*SoShape317);

SoShape* SoShape321 = new SoShape();
SoLineSet* SoLineSet322 = new SoLineSet();
SoLineSet322->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA323 = new SoColorRGBA();
SoColorRGBA323->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet322->addChild(*SoColorRGBA323);

SoCoordinate* SoCoordinate324 = new SoCoordinate();
SoCoordinate324->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075}, 6);
SoLineSet322->setCoord(*SoCoordinate324);

SoShape321->setGeometry(*SoLineSet322);

SoHAnimSegment313->addChild(*SoShape321);

SoShape* SoShape325 = new SoShape();
SoLineSet* SoLineSet326 = new SoLineSet();
SoLineSet326->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA327 = new SoColorRGBA();
SoColorRGBA327->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet326->addChild(*SoColorRGBA327);

SoCoordinate* SoCoordinate328 = new SoCoordinate();
SoCoordinate328->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928}, 6);
SoLineSet326->setCoord(*SoCoordinate328);

SoShape325->setGeometry(*SoLineSet326);

SoHAnimSegment313->addChild(*SoShape325);

SoShape* SoShape329 = new SoShape();
SoLineSet* SoLineSet330 = new SoLineSet();
SoLineSet330->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA331 = new SoColorRGBA();
SoColorRGBA331->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet330->addChild(*SoColorRGBA331);

SoCoordinate* SoCoordinate332 = new SoCoordinate();
SoCoordinate332->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002}, 6);
SoLineSet330->setCoord(*SoCoordinate332);

SoShape329->setGeometry(*SoLineSet330);

SoHAnimSegment313->addChild(*SoShape329);

SoShape* SoShape333 = new SoShape();
SoLineSet* SoLineSet334 = new SoLineSet();
SoLineSet334->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA335 = new SoColorRGBA();
SoColorRGBA335->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet334->addChild(*SoColorRGBA335);

SoCoordinate* SoCoordinate336 = new SoCoordinate();
SoCoordinate336->setPoint(new float[]{-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221}, 6);
SoLineSet334->setCoord(*SoCoordinate336);

SoShape333->setGeometry(*SoLineSet334);

SoHAnimSegment313->addChild(*SoShape333);

SoHAnimSite* SoHAnimSite337 = new SoHAnimSite();
SoHAnimSite337->setDEF(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimSite337->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite337->setTranslation(new float[]{-0.1006,0.0658,-0.1075});
SoTouchSensor* SoTouchSensor338 = new SoTouchSensor();
SoTouchSensor338->setDescription(QString("HAnimSite r_lateral_malleolus_pt"));
SoHAnimSite337->addChild(*SoTouchSensor338);

SoShape* SoShape339 = new SoShape();
SoShape339->setUSE(QString("HAnimSiteShape"));
SoHAnimSite337->addChild(*SoShape339);

SoHAnimSegment313->addChild(*SoHAnimSite337);

SoHAnimSite* SoHAnimSite340 = new SoHAnimSite();
SoHAnimSite340->setDEF(QString("hanim_r_medial_malleolus_pt"));
SoHAnimSite340->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite340->setTranslation(new float[]{-0.0591,0.076,-0.0928});
SoTouchSensor* SoTouchSensor341 = new SoTouchSensor();
SoTouchSensor341->setDescription(QString("HAnimSite r_medial_malleolus_pt"));
SoHAnimSite340->addChild(*SoTouchSensor341);

SoShape* SoShape342 = new SoShape();
SoShape342->setUSE(QString("HAnimSiteShape"));
SoHAnimSite340->addChild(*SoShape342);

SoHAnimSegment313->addChild(*SoHAnimSite340);

SoHAnimSite* SoHAnimSite343 = new SoHAnimSite();
SoHAnimSite343->setDEF(QString("hanim_r_sphyrion_pt"));
SoHAnimSite343->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite343->setTranslation(new float[]{-0.0603,0.061,-0.1002});
SoTouchSensor* SoTouchSensor344 = new SoTouchSensor();
SoTouchSensor344->setDescription(QString("HAnimSite r_sphyrion_pt"));
SoHAnimSite343->addChild(*SoTouchSensor344);

SoShape* SoShape345 = new SoShape();
SoShape345->setUSE(QString("HAnimSiteShape"));
SoHAnimSite343->addChild(*SoShape345);

SoHAnimSegment313->addChild(*SoHAnimSite343);

SoHAnimSite* SoHAnimSite346 = new SoHAnimSite();
SoHAnimSite346->setDEF(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimSite346->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite346->setTranslation(new float[]{-0.0692,0.0297,-0.1221});
SoTouchSensor* SoTouchSensor347 = new SoTouchSensor();
SoTouchSensor347->setDescription(QString("HAnimSite r_calcaneous_post_pt"));
SoHAnimSite346->addChild(*SoTouchSensor347);

SoShape* SoShape348 = new SoShape();
SoShape348->setUSE(QString("HAnimSiteShape"));
SoHAnimSite346->addChild(*SoShape348);

SoHAnimSegment313->addChild(*SoHAnimSite346);

SoHAnimJoint312->addChildren(*SoHAnimSegment313);

SoHAnimJoint* SoHAnimJoint349 = new SoHAnimJoint();
SoHAnimJoint349->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint349->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint349->setCenter(new float[]{-0.1086,0.0001,-0.0368});
SoHAnimSegment* SoHAnimSegment350 = new SoHAnimSegment();
SoHAnimSegment350->setDEF(QString("hanim_r_metatarsal_2"));
SoHAnimSegment350->X3DNode::setName(QString("r_metatarsal_2"));
SoTouchSensor* SoTouchSensor351 = new SoTouchSensor();
SoTouchSensor351->setDescription(QString("HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2"));
SoHAnimSegment350->addChild(*SoTouchSensor351);

SoTransform* SoTransform352 = new SoTransform();
SoTransform352->setTranslation(new float[]{-0.1086,0.0001,-0.0368});
SoShape* SoShape353 = new SoShape();
SoShape353->setUSE(QString("HAnimJointShape"));
SoTransform352->addChild(*SoShape353);

SoHAnimSegment350->addChild(*SoTransform352);

SoShape* SoShape354 = new SoShape();
SoLineSet* SoLineSet355 = new SoLineSet();
SoLineSet355->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA356 = new SoColorRGBA();
SoColorRGBA356->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet355->addChild(*SoColorRGBA356);

SoCoordinate* SoCoordinate357 = new SoCoordinate();
SoCoordinate357->setPoint(new float[]{-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368}, 6);
SoLineSet355->setCoord(*SoCoordinate357);

SoShape354->setGeometry(*SoLineSet355);

SoHAnimSegment350->addChild(*SoShape354);

SoHAnimJoint349->addChildren(*SoHAnimSegment350);

SoHAnimJoint* SoHAnimJoint358 = new SoHAnimJoint();
SoHAnimJoint358->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint358->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint358->setCenter(new float[]{-0.1086,0.0001,0.0368});
SoHAnimSegment* SoHAnimSegment359 = new SoHAnimSegment();
SoHAnimSegment359->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment359->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor360 = new SoTouchSensor();
SoTouchSensor360->setDescription(QString("HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2"));
SoHAnimSegment359->addChild(*SoTouchSensor360);

SoTransform* SoTransform361 = new SoTransform();
SoTransform361->setTranslation(new float[]{-0.1086,0.0001,0.0368});
SoShape* SoShape362 = new SoShape();
SoShape362->setUSE(QString("HAnimJointShape"));
SoTransform361->addChild(*SoShape362);

SoHAnimSegment359->addChild(*SoTransform361);

SoShape* SoShape363 = new SoShape();
SoLineSet* SoLineSet364 = new SoLineSet();
SoLineSet364->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA365 = new SoColorRGBA();
SoColorRGBA365->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet364->addChild(*SoColorRGBA365);

SoCoordinate* SoCoordinate366 = new SoCoordinate();
SoCoordinate366->setPoint(new float[]{-0.1086,0.0001,0.0368,-0.1086,0.0,0.0762}, 6);
SoLineSet364->setCoord(*SoCoordinate366);

SoShape363->setGeometry(*SoLineSet364);

SoHAnimSegment359->addChild(*SoShape363);

SoShape* SoShape367 = new SoShape();
SoLineSet* SoLineSet368 = new SoLineSet();
SoLineSet368->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA369 = new SoColorRGBA();
SoColorRGBA369->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet368->addChild(*SoColorRGBA369);

SoCoordinate* SoCoordinate370 = new SoCoordinate();
SoCoordinate370->setPoint(new float[]{-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127}, 6);
SoLineSet368->setCoord(*SoCoordinate370);

SoShape367->setGeometry(*SoLineSet368);

SoHAnimSegment359->addChild(*SoShape367);

SoHAnimSite* SoHAnimSite371 = new SoHAnimSite();
SoHAnimSite371->setDEF(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimSite371->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite371->setTranslation(new float[]{-0.0521,0.026,0.0127});
SoTouchSensor* SoTouchSensor372 = new SoTouchSensor();
SoTouchSensor372->setDescription(QString("HAnimSite r_metatarsal_pha1_pt"));
SoHAnimSite371->addChild(*SoTouchSensor372);

SoShape* SoShape373 = new SoShape();
SoShape373->setUSE(QString("HAnimSiteShape"));
SoHAnimSite371->addChild(*SoShape373);

SoHAnimSegment359->addChild(*SoHAnimSite371);

SoHAnimJoint358->addChildren(*SoHAnimSegment359);

SoHAnimJoint* SoHAnimJoint374 = new SoHAnimJoint();
SoHAnimJoint374->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint374->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint374->setCenter(new float[]{-0.1086,0.0,0.0762});
SoHAnimSegment* SoHAnimSegment375 = new SoHAnimSegment();
SoHAnimSegment375->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimSegment375->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor376 = new SoTouchSensor();
SoTouchSensor376->setDescription(QString("HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2"));
SoHAnimSegment375->addChild(*SoTouchSensor376);

SoTransform* SoTransform377 = new SoTransform();
SoTransform377->setTranslation(new float[]{-0.1086,0.0,0.0762});
SoShape* SoShape378 = new SoShape();
SoShape378->setUSE(QString("HAnimJointShape"));
SoTransform377->addChild(*SoShape378);

SoHAnimSegment375->addChild(*SoTransform377);

SoShape* SoShape379 = new SoShape();
SoLineSet* SoLineSet380 = new SoLineSet();
SoLineSet380->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA381 = new SoColorRGBA();
SoColorRGBA381->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet380->addChild(*SoColorRGBA381);

SoCoordinate* SoCoordinate382 = new SoCoordinate();
SoCoordinate382->setPoint(new float[]{-0.1086,0.0,0.0762,-0.1043,0.0227,0.145}, 6);
SoLineSet380->setCoord(*SoCoordinate382);

SoShape379->setGeometry(*SoLineSet380);

SoHAnimSegment375->addChild(*SoShape379);

SoShape* SoShape383 = new SoShape();
SoLineSet* SoLineSet384 = new SoLineSet();
SoLineSet384->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA385 = new SoColorRGBA();
SoColorRGBA385->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet384->addChild(*SoColorRGBA385);

SoCoordinate* SoCoordinate386 = new SoCoordinate();
SoCoordinate386->setPoint(new float[]{-0.1086,0.0,0.0762,-0.1523,0.0166,0.0895}, 6);
SoLineSet384->setCoord(*SoCoordinate386);

SoShape383->setGeometry(*SoLineSet384);

SoHAnimSegment375->addChild(*SoShape383);

SoShape* SoShape387 = new SoShape();
SoLineSet* SoLineSet388 = new SoLineSet();
SoLineSet388->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA389 = new SoColorRGBA();
SoColorRGBA389->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet388->addChild(*SoColorRGBA389);

SoCoordinate* SoCoordinate390 = new SoCoordinate();
SoCoordinate390->setPoint(new float[]{-0.1086,0.0,0.0762,-0.0883,0.0134,0.1383}, 6);
SoLineSet388->setCoord(*SoCoordinate390);

SoShape387->setGeometry(*SoLineSet388);

SoHAnimSegment375->addChild(*SoShape387);

SoHAnimSite* SoHAnimSite391 = new SoHAnimSite();
SoHAnimSite391->setDEF(QString("hanim_r_forefoot_tip_pt"));
SoHAnimSite391->X3DNode::setName(QString("r_forefoot_tip_pt"));
SoHAnimSite391->setTranslation(new float[]{-0.1043,0.0227,0.145});
SoTouchSensor* SoTouchSensor392 = new SoTouchSensor();
SoTouchSensor392->setDescription(QString("HAnimSite r_forefoot_tip"));
SoHAnimSite391->addChild(*SoTouchSensor392);

SoShape* SoShape393 = new SoShape();
SoShape393->setUSE(QString("HAnimSiteShape"));
SoHAnimSite391->addChild(*SoShape393);

SoHAnimSegment375->addChild(*SoHAnimSite391);

SoHAnimSite* SoHAnimSite394 = new SoHAnimSite();
SoHAnimSite394->setDEF(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimSite394->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite394->setTranslation(new float[]{-0.1523,0.0166,0.0895});
SoTouchSensor* SoTouchSensor395 = new SoTouchSensor();
SoTouchSensor395->setDescription(QString("HAnimSite r_metatarsal_pha5_pt"));
SoHAnimSite394->addChild(*SoTouchSensor395);

SoShape* SoShape396 = new SoShape();
SoShape396->setUSE(QString("HAnimSiteShape"));
SoHAnimSite394->addChild(*SoShape396);

SoHAnimSegment375->addChild(*SoHAnimSite394);

SoHAnimSite* SoHAnimSite397 = new SoHAnimSite();
SoHAnimSite397->setDEF(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite397->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite397->setTranslation(new float[]{-0.0883,0.0134,0.1383});
SoTouchSensor* SoTouchSensor398 = new SoTouchSensor();
SoTouchSensor398->setDescription(QString("HAnimSite r_digit2_pt"));
SoHAnimSite397->addChild(*SoTouchSensor398);

SoShape* SoShape399 = new SoShape();
SoShape399->setUSE(QString("HAnimSiteShape"));
SoHAnimSite397->addChild(*SoShape399);

SoHAnimSegment375->addChild(*SoHAnimSite397);

SoHAnimJoint374->addChildren(*SoHAnimSegment375);

SoHAnimJoint358->addChildren(*SoHAnimJoint374);

SoHAnimJoint349->addChildren(*SoHAnimJoint358);

SoHAnimJoint312->addChildren(*SoHAnimJoint349);

SoHAnimJoint303->addChildren(*SoHAnimJoint312);

SoHAnimJoint273->addChildren(*SoHAnimJoint303);

SoHAnimJoint66->addChildren(*SoHAnimJoint273);

SoHAnimJoint50->addChildren(*SoHAnimJoint66);

SoHAnimJoint* SoHAnimJoint400 = new SoHAnimJoint();
SoHAnimJoint400->setDEF(QString("hanim_vl5"));
SoHAnimJoint400->X3DNode::setName(QString("vl5"));
SoHAnimJoint400->setCenter(new float[]{0.0028,1.0568,-0.0776});
SoHAnimSegment* SoHAnimSegment401 = new SoHAnimSegment();
SoHAnimSegment401->setDEF(QString("hanim_l5"));
SoHAnimSegment401->X3DNode::setName(QString("l5"));
SoTouchSensor* SoTouchSensor402 = new SoTouchSensor();
SoTouchSensor402->setDescription(QString("HAnimJoint vl5, HAnimSegment l5"));
SoHAnimSegment401->addChild(*SoTouchSensor402);

SoTransform* SoTransform403 = new SoTransform();
SoTransform403->setTranslation(new float[]{0.0028,1.0568,-0.0776});
SoShape* SoShape404 = new SoShape();
SoShape404->setUSE(QString("HAnimJointShape"));
SoTransform403->addChild(*SoShape404);

SoHAnimSegment401->addChild(*SoTransform403);

SoShape* SoShape405 = new SoShape();
SoLineSet* SoLineSet406 = new SoLineSet();
SoLineSet406->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA407 = new SoColorRGBA();
SoColorRGBA407->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet406->addChild(*SoColorRGBA407);

SoCoordinate* SoCoordinate408 = new SoCoordinate();
SoCoordinate408->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787}, 6);
SoLineSet406->setCoord(*SoCoordinate408);

SoShape405->setGeometry(*SoLineSet406);

SoHAnimSegment401->addChild(*SoShape405);

SoShape* SoShape409 = new SoShape();
SoLineSet* SoLineSet410 = new SoLineSet();
SoLineSet410->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA411 = new SoColorRGBA();
SoColorRGBA411->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet410->addChild(*SoColorRGBA411);

SoCoordinate* SoCoordinate412 = new SoCoordinate();
SoCoordinate412->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0,1.0915,-0.1091}, 6);
SoLineSet410->setCoord(*SoCoordinate412);

SoShape409->setGeometry(*SoLineSet410);

SoHAnimSegment401->addChild(*SoShape409);

SoShape* SoShape413 = new SoShape();
SoLineSet* SoLineSet414 = new SoLineSet();
SoLineSet414->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA415 = new SoColorRGBA();
SoColorRGBA415->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet414->addChild(*SoColorRGBA415);

SoCoordinate* SoCoordinate416 = new SoCoordinate();
SoCoordinate416->setPoint(new float[]{0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017}, 6);
SoLineSet414->setCoord(*SoCoordinate416);

SoShape413->setGeometry(*SoLineSet414);

SoHAnimSegment401->addChild(*SoShape413);

SoHAnimSite* SoHAnimSite417 = new SoHAnimSite();
SoHAnimSite417->setDEF(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimSite417->X3DNode::setName(QString("waist_preferred_posterior_pt"));
SoHAnimSite417->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoTouchSensor* SoTouchSensor418 = new SoTouchSensor();
SoTouchSensor418->setDescription(QString("HAnimSite waist_preferred_post_pt"));
SoHAnimSite417->addChild(*SoTouchSensor418);

SoShape* SoShape419 = new SoShape();
SoShape419->setUSE(QString("HAnimSiteShape"));
SoHAnimSite417->addChild(*SoShape419);

SoHAnimSegment401->addChild(*SoHAnimSite417);

SoHAnimSite* SoHAnimSite420 = new SoHAnimSite();
SoHAnimSite420->setDEF(QString("hanim_navel_pt"));
SoHAnimSite420->X3DNode::setName(QString("navel_pt"));
SoHAnimSite420->setTranslation(new float[]{0.0069,1.0966,0.1017});
SoTouchSensor* SoTouchSensor421 = new SoTouchSensor();
SoTouchSensor421->setDescription(QString("HAnimSite navel_pt"));
SoHAnimSite420->addChild(*SoTouchSensor421);

SoShape* SoShape422 = new SoShape();
SoShape422->setUSE(QString("HAnimSiteShape"));
SoHAnimSite420->addChild(*SoShape422);

SoHAnimSegment401->addChild(*SoHAnimSite420);

SoHAnimJoint400->addChildren(*SoHAnimSegment401);

SoHAnimJoint* SoHAnimJoint423 = new SoHAnimJoint();
SoHAnimJoint423->setDEF(QString("hanim_vl4"));
SoHAnimJoint423->X3DNode::setName(QString("vl4"));
SoHAnimJoint423->setCenter(new float[]{0.0035,1.0925,-0.0787});
SoHAnimSegment* SoHAnimSegment424 = new SoHAnimSegment();
SoHAnimSegment424->setDEF(QString("hanim_l4"));
SoHAnimSegment424->X3DNode::setName(QString("l4"));
SoTouchSensor* SoTouchSensor425 = new SoTouchSensor();
SoTouchSensor425->setDescription(QString("HAnimJoint vl4, HAnimSegment l4"));
SoHAnimSegment424->addChild(*SoTouchSensor425);

SoTransform* SoTransform426 = new SoTransform();
SoTransform426->setTranslation(new float[]{0.0035,1.0925,-0.0787});
SoShape* SoShape427 = new SoShape();
SoShape427->setUSE(QString("HAnimJointShape"));
SoTransform426->addChild(*SoShape427);

SoHAnimSegment424->addChild(*SoTransform426);

SoShape* SoShape428 = new SoShape();
SoLineSet* SoLineSet429 = new SoLineSet();
SoLineSet429->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA430 = new SoColorRGBA();
SoColorRGBA430->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet429->addChild(*SoColorRGBA430);

SoCoordinate* SoCoordinate431 = new SoCoordinate();
SoCoordinate431->setPoint(new float[]{0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796}, 6);
SoLineSet429->setCoord(*SoCoordinate431);

SoShape428->setGeometry(*SoLineSet429);

SoHAnimSegment424->addChild(*SoShape428);

SoHAnimJoint423->addChildren(*SoHAnimSegment424);

SoHAnimJoint* SoHAnimJoint432 = new SoHAnimJoint();
SoHAnimJoint432->setDEF(QString("hanim_vl3"));
SoHAnimJoint432->X3DNode::setName(QString("vl3"));
SoHAnimJoint432->setCenter(new float[]{0.0041,1.1276,-0.0796});
SoHAnimSegment* SoHAnimSegment433 = new SoHAnimSegment();
SoHAnimSegment433->setDEF(QString("hanim_l3"));
SoHAnimSegment433->X3DNode::setName(QString("l3"));
SoTouchSensor* SoTouchSensor434 = new SoTouchSensor();
SoTouchSensor434->setDescription(QString("HAnimJoint vl3, HAnimSegment l3"));
SoHAnimSegment433->addChild(*SoTouchSensor434);

SoTransform* SoTransform435 = new SoTransform();
SoTransform435->setTranslation(new float[]{0.0041,1.1276,-0.0796});
SoShape* SoShape436 = new SoShape();
SoShape436->setUSE(QString("HAnimJointShape"));
SoTransform435->addChild(*SoShape436);

SoHAnimSegment433->addChild(*SoTransform435);

SoShape* SoShape437 = new SoShape();
SoLineSet* SoLineSet438 = new SoLineSet();
SoLineSet438->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA439 = new SoColorRGBA();
SoColorRGBA439->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet438->addChild(*SoColorRGBA439);

SoCoordinate* SoCoordinate440 = new SoCoordinate();
SoCoordinate440->setPoint(new float[]{0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08}, 6);
SoLineSet438->setCoord(*SoCoordinate440);

SoShape437->setGeometry(*SoLineSet438);

SoHAnimSegment433->addChild(*SoShape437);

SoHAnimJoint432->addChildren(*SoHAnimSegment433);

SoHAnimJoint* SoHAnimJoint441 = new SoHAnimJoint();
SoHAnimJoint441->setDEF(QString("hanim_vl2"));
SoHAnimJoint441->X3DNode::setName(QString("vl2"));
SoHAnimJoint441->setCenter(new float[]{0.0045,1.1546,-0.08});
SoHAnimSegment* SoHAnimSegment442 = new SoHAnimSegment();
SoHAnimSegment442->setDEF(QString("hanim_l2"));
SoHAnimSegment442->X3DNode::setName(QString("l2"));
SoTouchSensor* SoTouchSensor443 = new SoTouchSensor();
SoTouchSensor443->setDescription(QString("HAnimJoint vl2, HAnimSegment l2"));
SoHAnimSegment442->addChild(*SoTouchSensor443);

SoTransform* SoTransform444 = new SoTransform();
SoTransform444->setTranslation(new float[]{0.0045,1.1546,-0.08});
SoShape* SoShape445 = new SoShape();
SoShape445->setUSE(QString("HAnimJointShape"));
SoTransform444->addChild(*SoShape445);

SoHAnimSegment442->addChild(*SoTransform444);

SoShape* SoShape446 = new SoShape();
SoLineSet* SoLineSet447 = new SoLineSet();
SoLineSet447->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA448 = new SoColorRGBA();
SoColorRGBA448->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet447->addChild(*SoColorRGBA448);

SoCoordinate* SoCoordinate449 = new SoCoordinate();
SoCoordinate449->setPoint(new float[]{0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805}, 6);
SoLineSet447->setCoord(*SoCoordinate449);

SoShape446->setGeometry(*SoLineSet447);

SoHAnimSegment442->addChild(*SoShape446);

SoShape* SoShape450 = new SoShape();
SoLineSet* SoLineSet451 = new SoLineSet();
SoLineSet451->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA452 = new SoColorRGBA();
SoColorRGBA452->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet451->addChild(*SoColorRGBA452);

SoCoordinate* SoCoordinate453 = new SoCoordinate();
SoCoordinate453->setPoint(new float[]{0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016}, 6);
SoLineSet451->setCoord(*SoCoordinate453);

SoShape450->setGeometry(*SoLineSet451);

SoHAnimSegment442->addChild(*SoShape450);

SoShape* SoShape454 = new SoShape();
SoLineSet* SoLineSet455 = new SoLineSet();
SoLineSet455->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA456 = new SoColorRGBA();
SoColorRGBA456->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet455->addChild(*SoColorRGBA456);

SoCoordinate* SoCoordinate457 = new SoCoordinate();
SoCoordinate457->setPoint(new float[]{0.0045,1.1546,-0.08,0.0871,1.1925,0.0992}, 6);
SoLineSet455->setCoord(*SoCoordinate457);

SoShape454->setGeometry(*SoLineSet455);

SoHAnimSegment442->addChild(*SoShape454);

SoShape* SoShape458 = new SoShape();
SoLineSet* SoLineSet459 = new SoLineSet();
SoLineSet459->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA460 = new SoColorRGBA();
SoColorRGBA460->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet459->addChild(*SoColorRGBA460);

SoCoordinate* SoCoordinate461 = new SoCoordinate();
SoCoordinate461->setPoint(new float[]{0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113}, 6);
SoLineSet459->setCoord(*SoCoordinate461);

SoShape458->setGeometry(*SoLineSet459);

SoHAnimSegment442->addChild(*SoShape458);

SoHAnimSite* SoHAnimSite462 = new SoHAnimSite();
SoHAnimSite462->setDEF(QString("hanim_r_rib10_pt"));
SoHAnimSite462->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite462->setTranslation(new float[]{-0.0711,1.1941,0.1016});
SoTouchSensor* SoTouchSensor463 = new SoTouchSensor();
SoTouchSensor463->setDescription(QString("HAnimSite r_rib10_pt"));
SoHAnimSite462->addChild(*SoTouchSensor463);

SoShape* SoShape464 = new SoShape();
SoShape464->setUSE(QString("HAnimSiteShape"));
SoHAnimSite462->addChild(*SoShape464);

SoHAnimSegment442->addChild(*SoHAnimSite462);

SoHAnimSite* SoHAnimSite465 = new SoHAnimSite();
SoHAnimSite465->setDEF(QString("hanim_l_rib10_pt"));
SoHAnimSite465->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite465->setTranslation(new float[]{0.0871,1.1925,0.0992});
SoTouchSensor* SoTouchSensor466 = new SoTouchSensor();
SoTouchSensor466->setDescription(QString("HAnimSite l_rib10_pt"));
SoHAnimSite465->addChild(*SoTouchSensor466);

SoShape* SoShape467 = new SoShape();
SoShape467->setUSE(QString("HAnimSiteShape"));
SoHAnimSite465->addChild(*SoShape467);

SoHAnimSegment442->addChild(*SoHAnimSite465);

SoHAnimSite* SoHAnimSite468 = new SoHAnimSite();
SoHAnimSite468->setDEF(QString("hanim_rib10_midspine_pt"));
SoHAnimSite468->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite468->setTranslation(new float[]{0.0049,1.1908,-0.1113});
SoTouchSensor* SoTouchSensor469 = new SoTouchSensor();
SoTouchSensor469->setDescription(QString("HAnimSite rib10_midspine_pt"));
SoHAnimSite468->addChild(*SoTouchSensor469);

SoShape* SoShape470 = new SoShape();
SoShape470->setUSE(QString("HAnimSiteShape"));
SoHAnimSite468->addChild(*SoShape470);

SoHAnimSegment442->addChild(*SoHAnimSite468);

SoHAnimJoint441->addChildren(*SoHAnimSegment442);

SoHAnimJoint* SoHAnimJoint471 = new SoHAnimJoint();
SoHAnimJoint471->setDEF(QString("hanim_vl1"));
SoHAnimJoint471->X3DNode::setName(QString("vl1"));
SoHAnimJoint471->setCenter(new float[]{0.0048,1.1912,-0.0805});
SoHAnimSegment* SoHAnimSegment472 = new SoHAnimSegment();
SoHAnimSegment472->setDEF(QString("hanim_l1"));
SoHAnimSegment472->X3DNode::setName(QString("l1"));
SoTouchSensor* SoTouchSensor473 = new SoTouchSensor();
SoTouchSensor473->setDescription(QString("HAnimJoint vl1, HAnimSegment l1"));
SoHAnimSegment472->addChild(*SoTouchSensor473);

SoTransform* SoTransform474 = new SoTransform();
SoTransform474->setTranslation(new float[]{0.0048,1.1912,-0.0805});
SoShape* SoShape475 = new SoShape();
SoShape475->setUSE(QString("HAnimJointShape"));
SoTransform474->addChild(*SoShape475);

SoHAnimSegment472->addChild(*SoTransform474);

SoShape* SoShape476 = new SoShape();
SoLineSet* SoLineSet477 = new SoLineSet();
SoLineSet477->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA478 = new SoColorRGBA();
SoColorRGBA478->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet477->addChild(*SoColorRGBA478);

SoCoordinate* SoCoordinate479 = new SoCoordinate();
SoCoordinate479->setPoint(new float[]{0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808}, 6);
SoLineSet477->setCoord(*SoCoordinate479);

SoShape476->setGeometry(*SoLineSet477);

SoHAnimSegment472->addChild(*SoShape476);

SoHAnimJoint471->addChildren(*SoHAnimSegment472);

SoHAnimJoint* SoHAnimJoint480 = new SoHAnimJoint();
SoHAnimJoint480->setDEF(QString("hanim_vt12"));
SoHAnimJoint480->X3DNode::setName(QString("vt12"));
SoHAnimJoint480->setCenter(new float[]{0.0051,1.2278,-0.0808});
SoHAnimSegment* SoHAnimSegment481 = new SoHAnimSegment();
SoHAnimSegment481->setDEF(QString("hanim_t12"));
SoHAnimSegment481->X3DNode::setName(QString("t12"));
SoTouchSensor* SoTouchSensor482 = new SoTouchSensor();
SoTouchSensor482->setDescription(QString("HAnimJoint vt12, HAnimSegment t12"));
SoHAnimSegment481->addChild(*SoTouchSensor482);

SoTransform* SoTransform483 = new SoTransform();
SoTransform483->setTranslation(new float[]{0.0051,1.2278,-0.0808});
SoShape* SoShape484 = new SoShape();
SoShape484->setUSE(QString("HAnimJointShape"));
SoTransform483->addChild(*SoShape484);

SoHAnimSegment481->addChild(*SoTransform483);

SoShape* SoShape485 = new SoShape();
SoLineSet* SoLineSet486 = new SoLineSet();
SoLineSet486->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA487 = new SoColorRGBA();
SoColorRGBA487->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet486->addChild(*SoColorRGBA487);

SoCoordinate* SoCoordinate488 = new SoCoordinate();
SoCoordinate488->setPoint(new float[]{0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081}, 6);
SoLineSet486->setCoord(*SoCoordinate488);

SoShape485->setGeometry(*SoLineSet486);

SoHAnimSegment481->addChild(*SoShape485);

SoHAnimJoint480->addChildren(*SoHAnimSegment481);

SoHAnimJoint* SoHAnimJoint489 = new SoHAnimJoint();
SoHAnimJoint489->setDEF(QString("hanim_vt11"));
SoHAnimJoint489->X3DNode::setName(QString("vt11"));
SoHAnimJoint489->setCenter(new float[]{0.0053,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment490 = new SoHAnimSegment();
SoHAnimSegment490->setDEF(QString("hanim_t11"));
SoHAnimSegment490->X3DNode::setName(QString("t11"));
SoTouchSensor* SoTouchSensor491 = new SoTouchSensor();
SoTouchSensor491->setDescription(QString("HAnimJoint vt11, HAnimSegment t11"));
SoHAnimSegment490->addChild(*SoTouchSensor491);

SoTransform* SoTransform492 = new SoTransform();
SoTransform492->setTranslation(new float[]{0.0053,1.2679,-0.081});
SoShape* SoShape493 = new SoShape();
SoShape493->setUSE(QString("HAnimJointShape"));
SoTransform492->addChild(*SoShape493);

SoHAnimSegment490->addChild(*SoTransform492);

SoShape* SoShape494 = new SoShape();
SoLineSet* SoLineSet495 = new SoLineSet();
SoLineSet495->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA496 = new SoColorRGBA();
SoColorRGBA496->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet495->addChild(*SoColorRGBA496);

SoCoordinate* SoCoordinate497 = new SoCoordinate();
SoCoordinate497->setPoint(new float[]{0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822}, 6);
SoLineSet495->setCoord(*SoCoordinate497);

SoShape494->setGeometry(*SoLineSet495);

SoHAnimSegment490->addChild(*SoShape494);

SoHAnimJoint489->addChildren(*SoHAnimSegment490);

SoHAnimJoint* SoHAnimJoint498 = new SoHAnimJoint();
SoHAnimJoint498->setDEF(QString("hanim_vt10"));
SoHAnimJoint498->X3DNode::setName(QString("vt10"));
SoHAnimJoint498->setCenter(new float[]{0.0056,1.2848,-0.0822});
SoHAnimSegment* SoHAnimSegment499 = new SoHAnimSegment();
SoHAnimSegment499->setDEF(QString("hanim_t10"));
SoHAnimSegment499->X3DNode::setName(QString("t10"));
SoTouchSensor* SoTouchSensor500 = new SoTouchSensor();
SoTouchSensor500->setDescription(QString("HAnimJoint vt10, HAnimSegment t10"));
SoHAnimSegment499->addChild(*SoTouchSensor500);

SoTransform* SoTransform501 = new SoTransform();
SoTransform501->setTranslation(new float[]{0.0056,1.2848,-0.0822});
SoShape* SoShape502 = new SoShape();
SoShape502->setUSE(QString("HAnimJointShape"));
SoTransform501->addChild(*SoShape502);

SoHAnimSegment499->addChild(*SoTransform501);

SoShape* SoShape503 = new SoShape();
SoLineSet* SoLineSet504 = new SoLineSet();
SoLineSet504->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA505 = new SoColorRGBA();
SoColorRGBA505->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet504->addChild(*SoColorRGBA505);

SoCoordinate* SoCoordinate506 = new SoCoordinate();
SoCoordinate506->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838}, 6);
SoLineSet504->setCoord(*SoCoordinate506);

SoShape503->setGeometry(*SoLineSet504);

SoHAnimSegment499->addChild(*SoShape503);

SoShape* SoShape507 = new SoShape();
SoLineSet* SoLineSet508 = new SoLineSet();
SoLineSet508->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA509 = new SoColorRGBA();
SoColorRGBA509->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet508->addChild(*SoColorRGBA509);

SoCoordinate* SoCoordinate510 = new SoCoordinate();
SoCoordinate510->setPoint(new float[]{0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147}, 6);
SoLineSet508->setCoord(*SoCoordinate510);

SoShape507->setGeometry(*SoLineSet508);

SoHAnimSegment499->addChild(*SoShape507);

SoHAnimSite* SoHAnimSite511 = new SoHAnimSite();
SoHAnimSite511->setDEF(QString("hanim_substernale_pt"));
SoHAnimSite511->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite511->setTranslation(new float[]{0.0085,1.2995,0.1147});
SoTouchSensor* SoTouchSensor512 = new SoTouchSensor();
SoTouchSensor512->setDescription(QString("HAnimSite substernale_pt"));
SoHAnimSite511->addChild(*SoTouchSensor512);

SoShape* SoShape513 = new SoShape();
SoShape513->setUSE(QString("HAnimSiteShape"));
SoHAnimSite511->addChild(*SoShape513);

SoHAnimSegment499->addChild(*SoHAnimSite511);

SoHAnimJoint498->addChildren(*SoHAnimSegment499);

SoHAnimJoint* SoHAnimJoint514 = new SoHAnimJoint();
SoHAnimJoint514->setDEF(QString("hanim_vt9"));
SoHAnimJoint514->X3DNode::setName(QString("vt9"));
SoHAnimJoint514->setCenter(new float[]{0.0057,1.3126,-0.0838});
SoHAnimSegment* SoHAnimSegment515 = new SoHAnimSegment();
SoHAnimSegment515->setDEF(QString("hanim_t9"));
SoHAnimSegment515->X3DNode::setName(QString("t9"));
SoTouchSensor* SoTouchSensor516 = new SoTouchSensor();
SoTouchSensor516->setDescription(QString("HAnimJoint vt9, HAnimSegment t9"));
SoHAnimSegment515->addChild(*SoTouchSensor516);

SoTransform* SoTransform517 = new SoTransform();
SoTransform517->setTranslation(new float[]{0.0057,1.3126,-0.0838});
SoShape* SoShape518 = new SoShape();
SoShape518->setUSE(QString("HAnimJointShape"));
SoTransform517->addChild(*SoShape518);

SoHAnimSegment515->addChild(*SoTransform517);

SoShape* SoShape519 = new SoShape();
SoLineSet* SoLineSet520 = new SoLineSet();
SoLineSet520->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA521 = new SoColorRGBA();
SoColorRGBA521->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet520->addChild(*SoColorRGBA521);

SoCoordinate* SoCoordinate522 = new SoCoordinate();
SoCoordinate522->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845}, 6);
SoLineSet520->setCoord(*SoCoordinate522);

SoShape519->setGeometry(*SoLineSet520);

SoHAnimSegment515->addChild(*SoShape519);

SoShape* SoShape523 = new SoShape();
SoLineSet* SoLineSet524 = new SoLineSet();
SoLineSet524->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA525 = new SoColorRGBA();
SoColorRGBA525->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet524->addChild(*SoColorRGBA525);

SoCoordinate* SoCoordinate526 = new SoCoordinate();
SoCoordinate526->setPoint(new float[]{0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217}, 6);
SoLineSet524->setCoord(*SoCoordinate526);

SoShape523->setGeometry(*SoLineSet524);

SoHAnimSegment515->addChild(*SoShape523);

SoShape* SoShape527 = new SoShape();
SoLineSet* SoLineSet528 = new SoLineSet();
SoLineSet528->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA529 = new SoColorRGBA();
SoColorRGBA529->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet528->addChild(*SoColorRGBA529);

SoCoordinate* SoCoordinate530 = new SoCoordinate();
SoCoordinate530->setPoint(new float[]{0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192}, 6);
SoLineSet528->setCoord(*SoCoordinate530);

SoShape527->setGeometry(*SoLineSet528);

SoHAnimSegment515->addChild(*SoShape527);

SoHAnimSite* SoHAnimSite531 = new SoHAnimSite();
SoHAnimSite531->setDEF(QString("hanim_r_thelion_pt"));
SoHAnimSite531->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite531->setTranslation(new float[]{-0.0736,1.3385,0.1217});
SoTouchSensor* SoTouchSensor532 = new SoTouchSensor();
SoTouchSensor532->setDescription(QString("HAnimSite r_thelion_pt"));
SoHAnimSite531->addChild(*SoTouchSensor532);

SoShape* SoShape533 = new SoShape();
SoShape533->setUSE(QString("HAnimSiteShape"));
SoHAnimSite531->addChild(*SoShape533);

SoHAnimSegment515->addChild(*SoHAnimSite531);

SoHAnimSite* SoHAnimSite534 = new SoHAnimSite();
SoHAnimSite534->setDEF(QString("hanim_l_thelion_pt"));
SoHAnimSite534->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite534->setTranslation(new float[]{0.0918,1.3382,0.1192});
SoTouchSensor* SoTouchSensor535 = new SoTouchSensor();
SoTouchSensor535->setDescription(QString("HAnimSite l_thelion_pt"));
SoHAnimSite534->addChild(*SoTouchSensor535);

SoShape* SoShape536 = new SoShape();
SoShape536->setUSE(QString("HAnimSiteShape"));
SoHAnimSite534->addChild(*SoShape536);

SoHAnimSegment515->addChild(*SoHAnimSite534);

SoHAnimJoint514->addChildren(*SoHAnimSegment515);

SoHAnimJoint* SoHAnimJoint537 = new SoHAnimJoint();
SoHAnimJoint537->setDEF(QString("hanim_vt8"));
SoHAnimJoint537->X3DNode::setName(QString("vt8"));
SoHAnimJoint537->setCenter(new float[]{0.0057,1.3382,-0.0845});
SoHAnimSegment* SoHAnimSegment538 = new SoHAnimSegment();
SoHAnimSegment538->setDEF(QString("hanim_t8"));
SoHAnimSegment538->X3DNode::setName(QString("t8"));
SoTouchSensor* SoTouchSensor539 = new SoTouchSensor();
SoTouchSensor539->setDescription(QString("HAnimJoint vt8, HAnimSegment t8"));
SoHAnimSegment538->addChild(*SoTouchSensor539);

SoTransform* SoTransform540 = new SoTransform();
SoTransform540->setTranslation(new float[]{0.0057,1.3382,-0.0845});
SoShape* SoShape541 = new SoShape();
SoShape541->setUSE(QString("HAnimJointShape"));
SoTransform540->addChild(*SoShape541);

SoHAnimSegment538->addChild(*SoTransform540);

SoShape* SoShape542 = new SoShape();
SoLineSet* SoLineSet543 = new SoLineSet();
SoLineSet543->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA544 = new SoColorRGBA();
SoColorRGBA544->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet543->addChild(*SoColorRGBA544);

SoCoordinate* SoCoordinate545 = new SoCoordinate();
SoCoordinate545->setPoint(new float[]{0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833}, 6);
SoLineSet543->setCoord(*SoCoordinate545);

SoShape542->setGeometry(*SoLineSet543);

SoHAnimSegment538->addChild(*SoShape542);

SoHAnimJoint537->addChildren(*SoHAnimSegment538);

SoHAnimJoint* SoHAnimJoint546 = new SoHAnimJoint();
SoHAnimJoint546->setDEF(QString("hanim_vt7"));
SoHAnimJoint546->X3DNode::setName(QString("vt7"));
SoHAnimJoint546->setCenter(new float[]{0.0058,1.3625,-0.0833});
SoHAnimSegment* SoHAnimSegment547 = new SoHAnimSegment();
SoHAnimSegment547->setDEF(QString("hanim_t7"));
SoHAnimSegment547->X3DNode::setName(QString("t7"));
SoTouchSensor* SoTouchSensor548 = new SoTouchSensor();
SoTouchSensor548->setDescription(QString("HAnimJoint vt7, HAnimSegment t7"));
SoHAnimSegment547->addChild(*SoTouchSensor548);

SoTransform* SoTransform549 = new SoTransform();
SoTransform549->setTranslation(new float[]{0.0058,1.3625,-0.0833});
SoShape* SoShape550 = new SoShape();
SoShape550->setUSE(QString("HAnimJointShape"));
SoTransform549->addChild(*SoShape550);

SoHAnimSegment547->addChild(*SoTransform549);

SoShape* SoShape551 = new SoShape();
SoLineSet* SoLineSet552 = new SoLineSet();
SoLineSet552->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA553 = new SoColorRGBA();
SoColorRGBA553->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet552->addChild(*SoColorRGBA553);

SoCoordinate* SoCoordinate554 = new SoCoordinate();
SoCoordinate554->setPoint(new float[]{0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08}, 6);
SoLineSet552->setCoord(*SoCoordinate554);

SoShape551->setGeometry(*SoLineSet552);

SoHAnimSegment547->addChild(*SoShape551);

SoHAnimJoint546->addChildren(*SoHAnimSegment547);

SoHAnimJoint* SoHAnimJoint555 = new SoHAnimJoint();
SoHAnimJoint555->setDEF(QString("hanim_vt6"));
SoHAnimJoint555->X3DNode::setName(QString("vt6"));
SoHAnimJoint555->setCenter(new float[]{0.0059,1.3866,-0.08});
SoHAnimSegment* SoHAnimSegment556 = new SoHAnimSegment();
SoHAnimSegment556->setDEF(QString("hanim_t6"));
SoHAnimSegment556->X3DNode::setName(QString("t6"));
SoTouchSensor* SoTouchSensor557 = new SoTouchSensor();
SoTouchSensor557->setDescription(QString("HAnimJoint vt6, HAnimSegment t6"));
SoHAnimSegment556->addChild(*SoTouchSensor557);

SoTransform* SoTransform558 = new SoTransform();
SoTransform558->setTranslation(new float[]{0.0059,1.3866,-0.08});
SoShape* SoShape559 = new SoShape();
SoShape559->setUSE(QString("HAnimJointShape"));
SoTransform558->addChild(*SoShape559);

SoHAnimSegment556->addChild(*SoTransform558);

SoShape* SoShape560 = new SoShape();
SoLineSet* SoLineSet561 = new SoLineSet();
SoLineSet561->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA562 = new SoColorRGBA();
SoColorRGBA562->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet561->addChild(*SoColorRGBA562);

SoCoordinate* SoCoordinate563 = new SoCoordinate();
SoCoordinate563->setPoint(new float[]{0.0059,1.3866,-0.08,0.006,1.4102,-0.0745}, 6);
SoLineSet561->setCoord(*SoCoordinate563);

SoShape560->setGeometry(*SoLineSet561);

SoHAnimSegment556->addChild(*SoShape560);

SoHAnimJoint555->addChildren(*SoHAnimSegment556);

SoHAnimJoint* SoHAnimJoint564 = new SoHAnimJoint();
SoHAnimJoint564->setDEF(QString("hanim_vt5"));
SoHAnimJoint564->X3DNode::setName(QString("vt5"));
SoHAnimJoint564->setCenter(new float[]{0.006,1.4102,-0.0745});
SoHAnimSegment* SoHAnimSegment565 = new SoHAnimSegment();
SoHAnimSegment565->setDEF(QString("hanim_t5"));
SoHAnimSegment565->X3DNode::setName(QString("t5"));
SoTouchSensor* SoTouchSensor566 = new SoTouchSensor();
SoTouchSensor566->setDescription(QString("HAnimJoint vt5, HAnimSegment t5"));
SoHAnimSegment565->addChild(*SoTouchSensor566);

SoTransform* SoTransform567 = new SoTransform();
SoTransform567->setTranslation(new float[]{0.006,1.4102,-0.0745});
SoShape* SoShape568 = new SoShape();
SoShape568->setUSE(QString("HAnimJointShape"));
SoTransform567->addChild(*SoShape568);

SoHAnimSegment565->addChild(*SoTransform567);

SoShape* SoShape569 = new SoShape();
SoLineSet* SoLineSet570 = new SoLineSet();
SoLineSet570->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA571 = new SoColorRGBA();
SoColorRGBA571->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet570->addChild(*SoColorRGBA571);

SoCoordinate* SoCoordinate572 = new SoCoordinate();
SoCoordinate572->setPoint(new float[]{0.006,1.4102,-0.0745,0.0061,1.432,-0.0675}, 6);
SoLineSet570->setCoord(*SoCoordinate572);

SoShape569->setGeometry(*SoLineSet570);

SoHAnimSegment565->addChild(*SoShape569);

SoHAnimJoint564->addChildren(*SoHAnimSegment565);

SoHAnimJoint* SoHAnimJoint573 = new SoHAnimJoint();
SoHAnimJoint573->setDEF(QString("hanim_vt4"));
SoHAnimJoint573->X3DNode::setName(QString("vt4"));
SoHAnimJoint573->setCenter(new float[]{0.0061,1.432,-0.0675});
SoHAnimSegment* SoHAnimSegment574 = new SoHAnimSegment();
SoHAnimSegment574->setDEF(QString("hanim_t4"));
SoHAnimSegment574->X3DNode::setName(QString("t4"));
SoTouchSensor* SoTouchSensor575 = new SoTouchSensor();
SoTouchSensor575->setDescription(QString("HAnimJoint vt4, HAnimSegment t4"));
SoHAnimSegment574->addChild(*SoTouchSensor575);

SoTransform* SoTransform576 = new SoTransform();
SoTransform576->setTranslation(new float[]{0.0061,1.432,-0.0675});
SoShape* SoShape577 = new SoShape();
SoShape577->setUSE(QString("HAnimJointShape"));
SoTransform576->addChild(*SoShape577);

SoHAnimSegment574->addChild(*SoTransform576);

SoShape* SoShape578 = new SoShape();
SoLineSet* SoLineSet579 = new SoLineSet();
SoLineSet579->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA580 = new SoColorRGBA();
SoColorRGBA580->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet579->addChild(*SoColorRGBA580);

SoCoordinate* SoCoordinate581 = new SoCoordinate();
SoCoordinate581->setPoint(new float[]{0.0061,1.432,-0.0675,0.0062,1.4583,-0.057}, 6);
SoLineSet579->setCoord(*SoCoordinate581);

SoShape578->setGeometry(*SoLineSet579);

SoHAnimSegment574->addChild(*SoShape578);

SoHAnimJoint573->addChildren(*SoHAnimSegment574);

SoHAnimJoint* SoHAnimJoint582 = new SoHAnimJoint();
SoHAnimJoint582->setDEF(QString("hanim_vt3"));
SoHAnimJoint582->X3DNode::setName(QString("vt3"));
SoHAnimJoint582->setCenter(new float[]{0.0062,1.4583,-0.057});
SoHAnimSegment* SoHAnimSegment583 = new SoHAnimSegment();
SoHAnimSegment583->setDEF(QString("hanim_t3"));
SoHAnimSegment583->X3DNode::setName(QString("t3"));
SoTouchSensor* SoTouchSensor584 = new SoTouchSensor();
SoTouchSensor584->setDescription(QString("HAnimJoint vt3, HAnimSegment t3"));
SoHAnimSegment583->addChild(*SoTouchSensor584);

SoTransform* SoTransform585 = new SoTransform();
SoTransform585->setTranslation(new float[]{0.0062,1.4583,-0.057});
SoShape* SoShape586 = new SoShape();
SoShape586->setUSE(QString("HAnimJointShape"));
SoTransform585->addChild(*SoShape586);

SoHAnimSegment583->addChild(*SoTransform585);

SoShape* SoShape587 = new SoShape();
SoLineSet* SoLineSet588 = new SoLineSet();
SoLineSet588->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA589 = new SoColorRGBA();
SoColorRGBA589->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet588->addChild(*SoColorRGBA589);

SoCoordinate* SoCoordinate590 = new SoCoordinate();
SoCoordinate590->setPoint(new float[]{0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484}, 6);
SoLineSet588->setCoord(*SoCoordinate590);

SoShape587->setGeometry(*SoLineSet588);

SoHAnimSegment583->addChild(*SoShape587);

SoHAnimJoint582->addChildren(*SoHAnimSegment583);

SoHAnimJoint* SoHAnimJoint591 = new SoHAnimJoint();
SoHAnimJoint591->setDEF(QString("hanim_vt2"));
SoHAnimJoint591->X3DNode::setName(QString("vt2"));
SoHAnimJoint591->setCenter(new float[]{0.0063,1.4761,-0.0484});
SoHAnimSegment* SoHAnimSegment592 = new SoHAnimSegment();
SoHAnimSegment592->setDEF(QString("hanim_t2"));
SoHAnimSegment592->X3DNode::setName(QString("t2"));
SoTouchSensor* SoTouchSensor593 = new SoTouchSensor();
SoTouchSensor593->setDescription(QString("HAnimJoint vt2, HAnimSegment t2"));
SoHAnimSegment592->addChild(*SoTouchSensor593);

SoTransform* SoTransform594 = new SoTransform();
SoTransform594->setTranslation(new float[]{0.0063,1.4761,-0.0484});
SoShape* SoShape595 = new SoShape();
SoShape595->setUSE(QString("HAnimJointShape"));
SoTransform594->addChild(*SoShape595);

SoHAnimSegment592->addChild(*SoTransform594);

SoShape* SoShape596 = new SoShape();
SoLineSet* SoLineSet597 = new SoLineSet();
SoLineSet597->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA598 = new SoColorRGBA();
SoColorRGBA598->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet597->addChild(*SoColorRGBA598);

SoCoordinate* SoCoordinate599 = new SoCoordinate();
SoCoordinate599->setPoint(new float[]{0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387}, 6);
SoLineSet597->setCoord(*SoCoordinate599);

SoShape596->setGeometry(*SoLineSet597);

SoHAnimSegment592->addChild(*SoShape596);

SoHAnimJoint591->addChildren(*SoHAnimSegment592);

SoHAnimJoint* SoHAnimJoint600 = new SoHAnimJoint();
SoHAnimJoint600->setDEF(QString("hanim_vt1"));
SoHAnimJoint600->X3DNode::setName(QString("vt1"));
SoHAnimJoint600->setCenter(new float[]{0.0065,1.4951,-0.0387});
SoHAnimSegment* SoHAnimSegment601 = new SoHAnimSegment();
SoHAnimSegment601->setDEF(QString("hanim_t1"));
SoHAnimSegment601->X3DNode::setName(QString("t1"));
SoTouchSensor* SoTouchSensor602 = new SoTouchSensor();
SoTouchSensor602->setDescription(QString("HAnimJoint vt1, HAnimSegment t1"));
SoHAnimSegment601->addChild(*SoTouchSensor602);

SoTransform* SoTransform603 = new SoTransform();
SoTransform603->setTranslation(new float[]{0.0065,1.4951,-0.0387});
SoShape* SoShape604 = new SoShape();
SoShape604->setUSE(QString("HAnimJointShape"));
SoTransform603->addChild(*SoShape604);

SoHAnimSegment601->addChild(*SoTransform603);

SoShape* SoShape605 = new SoShape();
SoLineSet* SoLineSet606 = new SoLineSet();
SoLineSet606->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA607 = new SoColorRGBA();
SoColorRGBA607->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet606->addChild(*SoColorRGBA607);

SoCoordinate* SoCoordinate608 = new SoCoordinate();
SoCoordinate608->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301}, 6);
SoLineSet606->setCoord(*SoCoordinate608);

SoShape605->setGeometry(*SoLineSet606);

SoHAnimSegment601->addChild(*SoShape605);

SoShape* SoShape609 = new SoShape();
SoLineSet* SoLineSet610 = new SoLineSet();
SoLineSet610->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA611 = new SoColorRGBA();
SoColorRGBA611->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet610->addChild(*SoColorRGBA611);

SoCoordinate* SoCoordinate612 = new SoCoordinate();
SoCoordinate612->setPoint(new float[]{0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353}, 6);
SoLineSet610->setCoord(*SoCoordinate612);

SoShape609->setGeometry(*SoLineSet610);

SoHAnimSegment601->addChild(*SoShape609);

SoShape* SoShape613 = new SoShape();
SoLineSet* SoLineSet614 = new SoLineSet();
SoLineSet614->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA615 = new SoColorRGBA();
SoColorRGBA615->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet614->addChild(*SoColorRGBA615);

SoCoordinate* SoCoordinate616 = new SoCoordinate();
SoCoordinate616->setPoint(new float[]{0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353}, 6);
SoLineSet614->setCoord(*SoCoordinate616);

SoShape613->setGeometry(*SoLineSet614);

SoHAnimSegment601->addChild(*SoShape613);

SoShape* SoShape617 = new SoShape();
SoLineSet* SoLineSet618 = new SoLineSet();
SoLineSet618->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA619 = new SoColorRGBA();
SoColorRGBA619->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet618->addChild(*SoColorRGBA619);

SoCoordinate* SoCoordinate620 = new SoCoordinate();
SoCoordinate620->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551}, 6);
SoLineSet618->setCoord(*SoCoordinate620);

SoShape617->setGeometry(*SoLineSet618);

SoHAnimSegment601->addChild(*SoShape617);

SoShape* SoShape621 = new SoShape();
SoLineSet* SoLineSet622 = new SoLineSet();
SoLineSet622->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA623 = new SoColorRGBA();
SoColorRGBA623->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet622->addChild(*SoColorRGBA623);

SoCoordinate* SoCoordinate624 = new SoCoordinate();
SoCoordinate624->setPoint(new float[]{0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815}, 6);
SoLineSet622->setCoord(*SoCoordinate624);

SoShape621->setGeometry(*SoLineSet622);

SoHAnimSegment601->addChild(*SoShape621);

SoHAnimSite* SoHAnimSite625 = new SoHAnimSite();
SoHAnimSite625->setDEF(QString("hanim_suprasternale_pt"));
SoHAnimSite625->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite625->setTranslation(new float[]{0.0084,1.4714,0.0551});
SoTouchSensor* SoTouchSensor626 = new SoTouchSensor();
SoTouchSensor626->setDescription(QString("HAnimSite suprasternale_pt"));
SoHAnimSite625->addChild(*SoTouchSensor626);

SoShape* SoShape627 = new SoShape();
SoShape627->setUSE(QString("HAnimSiteShape"));
SoHAnimSite625->addChild(*SoShape627);

SoHAnimSegment601->addChild(*SoHAnimSite625);

SoHAnimSite* SoHAnimSite628 = new SoHAnimSite();
SoHAnimSite628->setDEF(QString("hanim_cervicale_pt"));
SoHAnimSite628->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite628->setTranslation(new float[]{0.0064,1.52,-0.0815});
SoTouchSensor* SoTouchSensor629 = new SoTouchSensor();
SoTouchSensor629->setDescription(QString("HAnimSite cervicale_pt"));
SoHAnimSite628->addChild(*SoTouchSensor629);

SoShape* SoShape630 = new SoShape();
SoShape630->setUSE(QString("HAnimSiteShape"));
SoHAnimSite628->addChild(*SoShape630);

SoHAnimSegment601->addChild(*SoHAnimSite628);

SoHAnimJoint600->addChildren(*SoHAnimSegment601);

SoHAnimJoint* SoHAnimJoint631 = new SoHAnimJoint();
SoHAnimJoint631->setDEF(QString("hanim_vc7"));
SoHAnimJoint631->X3DNode::setName(QString("vc7"));
SoHAnimJoint631->setCenter(new float[]{0.0066,1.5132,-0.0301});
SoHAnimSegment* SoHAnimSegment632 = new SoHAnimSegment();
SoHAnimSegment632->setDEF(QString("hanim_c7"));
SoHAnimSegment632->X3DNode::setName(QString("c7"));
SoTouchSensor* SoTouchSensor633 = new SoTouchSensor();
SoTouchSensor633->setDescription(QString("HAnimJoint vc7, HAnimSegment c7"));
SoHAnimSegment632->addChild(*SoTouchSensor633);

SoTransform* SoTransform634 = new SoTransform();
SoTransform634->setTranslation(new float[]{0.0066,1.5132,-0.0301});
SoShape* SoShape635 = new SoShape();
SoShape635->setUSE(QString("HAnimJointShape"));
SoTransform634->addChild(*SoShape635);

SoHAnimSegment632->addChild(*SoTransform634);

SoShape* SoShape636 = new SoShape();
SoLineSet* SoLineSet637 = new SoLineSet();
SoLineSet637->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA638 = new SoColorRGBA();
SoColorRGBA638->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet637->addChild(*SoColorRGBA638);

SoCoordinate* SoCoordinate639 = new SoCoordinate();
SoCoordinate639->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143}, 6);
SoLineSet637->setCoord(*SoCoordinate639);

SoShape636->setGeometry(*SoLineSet637);

SoHAnimSegment632->addChild(*SoShape636);

SoShape* SoShape640 = new SoShape();
SoLineSet* SoLineSet641 = new SoLineSet();
SoLineSet641->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA642 = new SoColorRGBA();
SoColorRGBA642->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet641->addChild(*SoColorRGBA642);

SoCoordinate* SoCoordinate643 = new SoCoordinate();
SoCoordinate643->setPoint(new float[]{0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022}, 6);
SoLineSet641->setCoord(*SoCoordinate643);

SoShape640->setGeometry(*SoLineSet641);

SoHAnimSegment632->addChild(*SoShape640);

SoShape* SoShape644 = new SoShape();
SoLineSet* SoLineSet645 = new SoLineSet();
SoLineSet645->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA646 = new SoColorRGBA();
SoColorRGBA646->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet645->addChild(*SoColorRGBA646);

SoCoordinate* SoCoordinate647 = new SoCoordinate();
SoCoordinate647->setPoint(new float[]{0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038}, 6);
SoLineSet645->setCoord(*SoCoordinate647);

SoShape644->setGeometry(*SoLineSet645);

SoHAnimSegment632->addChild(*SoShape644);

SoHAnimSite* SoHAnimSite648 = new SoHAnimSite();
SoHAnimSite648->setDEF(QString("hanim_r_neck_base_pt"));
SoHAnimSite648->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite648->setTranslation(new float[]{-0.0419,1.5149,-0.022});
SoTouchSensor* SoTouchSensor649 = new SoTouchSensor();
SoTouchSensor649->setDescription(QString("HAnimSite r_neck_base_pt"));
SoHAnimSite648->addChild(*SoTouchSensor649);

SoShape* SoShape650 = new SoShape();
SoShape650->setUSE(QString("HAnimSiteShape"));
SoHAnimSite648->addChild(*SoShape650);

SoHAnimSegment632->addChild(*SoHAnimSite648);

SoHAnimSite* SoHAnimSite651 = new SoHAnimSite();
SoHAnimSite651->setDEF(QString("hanim_l_neck_base_pt"));
SoHAnimSite651->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite651->setTranslation(new float[]{0.0646,1.5141,-0.038});
SoTouchSensor* SoTouchSensor652 = new SoTouchSensor();
SoTouchSensor652->setDescription(QString("HAnimSite l_neck_base_pt"));
SoHAnimSite651->addChild(*SoTouchSensor652);

SoShape* SoShape653 = new SoShape();
SoShape653->setUSE(QString("HAnimSiteShape"));
SoHAnimSite651->addChild(*SoShape653);

SoHAnimSegment632->addChild(*SoHAnimSite651);

SoHAnimJoint631->addChildren(*SoHAnimSegment632);

SoHAnimJoint* SoHAnimJoint654 = new SoHAnimJoint();
SoHAnimJoint654->setDEF(QString("hanim_vc6"));
SoHAnimJoint654->X3DNode::setName(QString("vc6"));
SoHAnimJoint654->setCenter(new float[]{0.0066,1.5357,-0.0143});
SoHAnimSegment* SoHAnimSegment655 = new SoHAnimSegment();
SoHAnimSegment655->setDEF(QString("hanim_c6"));
SoHAnimSegment655->X3DNode::setName(QString("c6"));
SoTouchSensor* SoTouchSensor656 = new SoTouchSensor();
SoTouchSensor656->setDescription(QString("HAnimJoint vc6, HAnimSegment c6"));
SoHAnimSegment655->addChild(*SoTouchSensor656);

SoTransform* SoTransform657 = new SoTransform();
SoTransform657->setTranslation(new float[]{0.0066,1.5357,-0.0143});
SoShape* SoShape658 = new SoShape();
SoShape658->setUSE(QString("HAnimJointShape"));
SoTransform657->addChild(*SoShape658);

SoHAnimSegment655->addChild(*SoTransform657);

SoShape* SoShape659 = new SoShape();
SoLineSet* SoLineSet660 = new SoLineSet();
SoLineSet660->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA661 = new SoColorRGBA();
SoColorRGBA661->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet660->addChild(*SoColorRGBA661);

SoCoordinate* SoCoordinate662 = new SoCoordinate();
SoCoordinate662->setPoint(new float[]{0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082}, 6);
SoLineSet660->setCoord(*SoCoordinate662);

SoShape659->setGeometry(*SoLineSet660);

SoHAnimSegment655->addChild(*SoShape659);

SoHAnimJoint654->addChildren(*SoHAnimSegment655);

SoHAnimJoint* SoHAnimJoint663 = new SoHAnimJoint();
SoHAnimJoint663->setDEF(QString("hanim_vc5"));
SoHAnimJoint663->X3DNode::setName(QString("vc5"));
SoHAnimJoint663->setCenter(new float[]{0.0066,1.552,-0.0082});
SoHAnimSegment* SoHAnimSegment664 = new SoHAnimSegment();
SoHAnimSegment664->setDEF(QString("hanim_c5"));
SoHAnimSegment664->X3DNode::setName(QString("c5"));
SoTouchSensor* SoTouchSensor665 = new SoTouchSensor();
SoTouchSensor665->setDescription(QString("HAnimJoint vc5, HAnimSegment c5"));
SoHAnimSegment664->addChild(*SoTouchSensor665);

SoTransform* SoTransform666 = new SoTransform();
SoTransform666->setTranslation(new float[]{0.0066,1.552,-0.0082});
SoShape* SoShape667 = new SoShape();
SoShape667->setUSE(QString("HAnimJointShape"));
SoTransform666->addChild(*SoShape667);

SoHAnimSegment664->addChild(*SoTransform666);

SoShape* SoShape668 = new SoShape();
SoLineSet* SoLineSet669 = new SoLineSet();
SoLineSet669->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA670 = new SoColorRGBA();
SoColorRGBA670->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet669->addChild(*SoColorRGBA670);

SoCoordinate* SoCoordinate671 = new SoCoordinate();
SoCoordinate671->setPoint(new float[]{0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084}, 6);
SoLineSet669->setCoord(*SoCoordinate671);

SoShape668->setGeometry(*SoLineSet669);

SoHAnimSegment664->addChild(*SoShape668);

SoHAnimJoint663->addChildren(*SoHAnimSegment664);

SoHAnimJoint* SoHAnimJoint672 = new SoHAnimJoint();
SoHAnimJoint672->setDEF(QString("hanim_vc4"));
SoHAnimJoint672->X3DNode::setName(QString("vc4"));
SoHAnimJoint672->setCenter(new float[]{0.0066,1.5662,-0.0084});
SoHAnimSegment* SoHAnimSegment673 = new SoHAnimSegment();
SoHAnimSegment673->setDEF(QString("hanim_c4"));
SoHAnimSegment673->X3DNode::setName(QString("c4"));
SoTouchSensor* SoTouchSensor674 = new SoTouchSensor();
SoTouchSensor674->setDescription(QString("HAnimJoint vc4, HAnimSegment c4"));
SoHAnimSegment673->addChild(*SoTouchSensor674);

SoTransform* SoTransform675 = new SoTransform();
SoTransform675->setTranslation(new float[]{0.0066,1.5662,-0.0084});
SoShape* SoShape676 = new SoShape();
SoShape676->setUSE(QString("HAnimJointShape"));
SoTransform675->addChild(*SoShape676);

SoHAnimSegment673->addChild(*SoTransform675);

SoShape* SoShape677 = new SoShape();
SoLineSet* SoLineSet678 = new SoLineSet();
SoLineSet678->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA679 = new SoColorRGBA();
SoColorRGBA679->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet678->addChild(*SoColorRGBA679);

SoCoordinate* SoCoordinate680 = new SoCoordinate();
SoCoordinate680->setPoint(new float[]{0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103}, 6);
SoLineSet678->setCoord(*SoCoordinate680);

SoShape677->setGeometry(*SoLineSet678);

SoHAnimSegment673->addChild(*SoShape677);

SoHAnimJoint672->addChildren(*SoHAnimSegment673);

SoHAnimJoint* SoHAnimJoint681 = new SoHAnimJoint();
SoHAnimJoint681->setDEF(QString("hanim_vc3"));
SoHAnimJoint681->X3DNode::setName(QString("vc3"));
SoHAnimJoint681->setCenter(new float[]{0.0066,1.58,-0.0103});
SoHAnimSegment* SoHAnimSegment682 = new SoHAnimSegment();
SoHAnimSegment682->setDEF(QString("hanim_c3"));
SoHAnimSegment682->X3DNode::setName(QString("c3"));
SoTouchSensor* SoTouchSensor683 = new SoTouchSensor();
SoTouchSensor683->setDescription(QString("HAnimJoint vc3, HAnimSegment c3"));
SoHAnimSegment682->addChild(*SoTouchSensor683);

SoTransform* SoTransform684 = new SoTransform();
SoTransform684->setTranslation(new float[]{0.0066,1.58,-0.0103});
SoShape* SoShape685 = new SoShape();
SoShape685->setUSE(QString("HAnimJointShape"));
SoTransform684->addChild(*SoShape685);

SoHAnimSegment682->addChild(*SoTransform684);

SoShape* SoShape686 = new SoShape();
SoLineSet* SoLineSet687 = new SoLineSet();
SoLineSet687->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA688 = new SoColorRGBA();
SoColorRGBA688->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet687->addChild(*SoColorRGBA688);

SoCoordinate* SoCoordinate689 = new SoCoordinate();
SoCoordinate689->setPoint(new float[]{0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103}, 6);
SoLineSet687->setCoord(*SoCoordinate689);

SoShape686->setGeometry(*SoLineSet687);

SoHAnimSegment682->addChild(*SoShape686);

SoHAnimJoint681->addChildren(*SoHAnimSegment682);

SoHAnimJoint* SoHAnimJoint690 = new SoHAnimJoint();
SoHAnimJoint690->setDEF(QString("hanim_vc2"));
SoHAnimJoint690->X3DNode::setName(QString("vc2"));
SoHAnimJoint690->setCenter(new float[]{0.0066,1.5928,-0.0103});
SoHAnimSegment* SoHAnimSegment691 = new SoHAnimSegment();
SoHAnimSegment691->setDEF(QString("hanim_c2"));
SoHAnimSegment691->X3DNode::setName(QString("c2"));
SoTouchSensor* SoTouchSensor692 = new SoTouchSensor();
SoTouchSensor692->setDescription(QString("HAnimJoint vc2, HAnimSegment c2"));
SoHAnimSegment691->addChild(*SoTouchSensor692);

SoTransform* SoTransform693 = new SoTransform();
SoTransform693->setTranslation(new float[]{0.0066,1.5928,-0.0103});
SoShape* SoShape694 = new SoShape();
SoShape694->setUSE(QString("HAnimJointShape"));
SoTransform693->addChild(*SoShape694);

SoHAnimSegment691->addChild(*SoTransform693);

SoShape* SoShape695 = new SoShape();
SoLineSet* SoLineSet696 = new SoLineSet();
SoLineSet696->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA697 = new SoColorRGBA();
SoColorRGBA697->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet696->addChild(*SoColorRGBA697);

SoCoordinate* SoCoordinate698 = new SoCoordinate();
SoCoordinate698->setPoint(new float[]{0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034}, 6);
SoLineSet696->setCoord(*SoCoordinate698);

SoShape695->setGeometry(*SoLineSet696);

SoHAnimSegment691->addChild(*SoShape695);

SoHAnimJoint690->addChildren(*SoHAnimSegment691);

SoHAnimJoint* SoHAnimJoint699 = new SoHAnimJoint();
SoHAnimJoint699->setDEF(QString("hanim_vc1"));
SoHAnimJoint699->X3DNode::setName(QString("vc1"));
SoHAnimJoint699->setCenter(new float[]{0.0066,1.6144,-0.0034});
SoHAnimSegment* SoHAnimSegment700 = new SoHAnimSegment();
SoHAnimSegment700->setDEF(QString("hanim_c1"));
SoHAnimSegment700->X3DNode::setName(QString("c1"));
SoTouchSensor* SoTouchSensor701 = new SoTouchSensor();
SoTouchSensor701->setDescription(QString("HAnimJoint vc1, HAnimSegment c1"));
SoHAnimSegment700->addChild(*SoTouchSensor701);

SoTransform* SoTransform702 = new SoTransform();
SoTransform702->setTranslation(new float[]{0.0066,1.6144,-0.0034});
SoShape* SoShape703 = new SoShape();
SoShape703->setUSE(QString("HAnimJointShape"));
SoTransform702->addChild(*SoShape703);

SoHAnimSegment700->addChild(*SoTransform702);

SoShape* SoShape704 = new SoShape();
SoLineSet* SoLineSet705 = new SoLineSet();
SoLineSet705->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA706 = new SoColorRGBA();
SoColorRGBA706->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet705->addChild(*SoColorRGBA706);

SoCoordinate* SoCoordinate707 = new SoCoordinate();
SoCoordinate707->setPoint(new float[]{0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236}, 6);
SoLineSet705->setCoord(*SoCoordinate707);

SoShape704->setGeometry(*SoLineSet705);

SoHAnimSegment700->addChild(*SoShape704);

SoHAnimJoint699->addChildren(*SoHAnimSegment700);

SoHAnimJoint* SoHAnimJoint708 = new SoHAnimJoint();
SoHAnimJoint708->setDEF(QString("hanim_skullbase"));
SoHAnimJoint708->X3DNode::setName(QString("skullbase"));
SoHAnimJoint708->setCenter(new float[]{0.0044,1.6209,0.0236});
SoHAnimSegment* SoHAnimSegment709 = new SoHAnimSegment();
SoHAnimSegment709->setDEF(QString("hanim_skull"));
SoHAnimSegment709->X3DNode::setName(QString("skull"));
SoTouchSensor* SoTouchSensor710 = new SoTouchSensor();
SoTouchSensor710->setDescription(QString("HAnimJoint skullbase, HAnimSegment skull"));
SoHAnimSegment709->addChild(*SoTouchSensor710);

SoTransform* SoTransform711 = new SoTransform();
SoTransform711->setTranslation(new float[]{0.0044,1.6209,0.0236});
SoShape* SoShape712 = new SoShape();
SoShape712->setUSE(QString("HAnimJointShape"));
SoTransform711->addChild(*SoShape712);

SoHAnimSegment709->addChild(*SoTransform711);

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

SoHAnimSegment709->addChild(*SoShape713);

SoShape* SoShape717 = new SoShape();
SoLineSet* SoLineSet718 = new SoLineSet();
SoLineSet718->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA719 = new SoColorRGBA();
SoColorRGBA719->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet718->addChild(*SoColorRGBA719);

SoCoordinate* SoCoordinate720 = new SoCoordinate();
SoCoordinate720->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.6332,0.0502}, 6);
SoLineSet718->setCoord(*SoCoordinate720);

SoShape717->setGeometry(*SoLineSet718);

SoHAnimSegment709->addChild(*SoShape717);

SoShape* SoShape721 = new SoShape();
SoLineSet* SoLineSet722 = new SoLineSet();
SoLineSet722->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA723 = new SoColorRGBA();
SoColorRGBA723->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet722->addChild(*SoColorRGBA723);

SoCoordinate* SoCoordinate724 = new SoCoordinate();
SoCoordinate724->setPoint(new float[]{0.0044,1.6209,0.0236,0.0336,1.635,0.0506}, 6);
SoLineSet722->setCoord(*SoCoordinate724);

SoShape721->setGeometry(*SoLineSet722);

SoHAnimSegment709->addChild(*SoShape721);

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

SoHAnimSegment709->addChild(*SoShape725);

SoShape* SoShape729 = new SoShape();
SoLineSet* SoLineSet730 = new SoLineSet();
SoLineSet730->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA731 = new SoColorRGBA();
SoColorRGBA731->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet730->addChild(*SoColorRGBA731);

SoCoordinate* SoCoordinate732 = new SoCoordinate();
SoCoordinate732->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502}, 6);
SoLineSet730->setCoord(*SoCoordinate732);

SoShape729->setGeometry(*SoLineSet730);

SoHAnimSegment709->addChild(*SoShape729);

SoShape* SoShape733 = new SoShape();
SoLineSet* SoLineSet734 = new SoLineSet();
SoLineSet734->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA735 = new SoColorRGBA();
SoColorRGBA735->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet734->addChild(*SoColorRGBA735);

SoCoordinate* SoCoordinate736 = new SoCoordinate();
SoCoordinate736->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0336,1.635,0.0506}, 6);
SoLineSet734->setCoord(*SoCoordinate736);

SoShape733->setGeometry(*SoLineSet734);

SoHAnimSegment709->addChild(*SoShape733);

SoShape* SoShape737 = new SoShape();
SoLineSet* SoLineSet738 = new SoLineSet();
SoLineSet738->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA739 = new SoColorRGBA();
SoColorRGBA739->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet738->addChild(*SoColorRGBA739);

SoCoordinate* SoCoordinate740 = new SoCoordinate();
SoCoordinate740->setPoint(new float[]{0.0044,1.6209,0.0236,0.0,1.63,0.015}, 6);
SoLineSet738->setCoord(*SoCoordinate740);

SoShape737->setGeometry(*SoLineSet738);

SoHAnimSegment709->addChild(*SoShape737);

SoShape* SoShape741 = new SoShape();
SoLineSet* SoLineSet742 = new SoLineSet();
SoLineSet742->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA743 = new SoColorRGBA();
SoColorRGBA743->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet742->addChild(*SoColorRGBA743);

SoCoordinate* SoCoordinate744 = new SoCoordinate();
SoCoordinate744->setPoint(new float[]{0.0044,1.6209,0.0236,0.005,1.7504,0.0055}, 6);
SoLineSet742->setCoord(*SoCoordinate744);

SoShape741->setGeometry(*SoLineSet742);

SoHAnimSegment709->addChild(*SoShape741);

SoShape* SoShape745 = new SoShape();
SoLineSet* SoLineSet746 = new SoLineSet();
SoLineSet746->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA747 = new SoColorRGBA();
SoColorRGBA747->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet746->addChild(*SoColorRGBA747);

SoCoordinate* SoCoordinate748 = new SoCoordinate();
SoCoordinate748->setPoint(new float[]{0.0044,1.6209,0.0236,0.0058,1.6316,0.0852}, 6);
SoLineSet746->setCoord(*SoCoordinate748);

SoShape745->setGeometry(*SoLineSet746);

SoHAnimSegment709->addChild(*SoShape745);

SoShape* SoShape749 = new SoShape();
SoLineSet* SoLineSet750 = new SoLineSet();
SoLineSet750->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA751 = new SoColorRGBA();
SoColorRGBA751->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet750->addChild(*SoColorRGBA751);

SoCoordinate* SoCoordinate752 = new SoCoordinate();
SoCoordinate752->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752}, 6);
SoLineSet750->setCoord(*SoCoordinate752);

SoShape749->setGeometry(*SoLineSet750);

SoHAnimSegment709->addChild(*SoShape749);

SoShape* SoShape753 = new SoShape();
SoLineSet* SoLineSet754 = new SoLineSet();
SoLineSet754->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA755 = new SoColorRGBA();
SoColorRGBA755->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet754->addChild(*SoColorRGBA755);

SoCoordinate* SoCoordinate756 = new SoCoordinate();
SoCoordinate756->setPoint(new float[]{0.0044,1.6209,0.0236,0.0341,1.6171,0.0752}, 6);
SoLineSet754->setCoord(*SoCoordinate756);

SoShape753->setGeometry(*SoLineSet754);

SoHAnimSegment709->addChild(*SoShape753);

SoShape* SoShape757 = new SoShape();
SoLineSet* SoLineSet758 = new SoLineSet();
SoLineSet758->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA759 = new SoColorRGBA();
SoColorRGBA759->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet758->addChild(*SoColorRGBA759);

SoCoordinate* SoCoordinate760 = new SoCoordinate();
SoCoordinate760->setPoint(new float[]{0.0044,1.6209,0.0236,0.0061,1.541,0.0805}, 6);
SoLineSet758->setCoord(*SoCoordinate760);

SoShape757->setGeometry(*SoLineSet758);

SoHAnimSegment709->addChild(*SoShape757);

SoShape* SoShape761 = new SoShape();
SoLineSet* SoLineSet762 = new SoLineSet();
SoLineSet762->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA763 = new SoColorRGBA();
SoColorRGBA763->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet762->addChild(*SoColorRGBA763);

SoCoordinate* SoCoordinate764 = new SoCoordinate();
SoCoordinate764->setPoint(new float[]{0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302}, 6);
SoLineSet762->setCoord(*SoCoordinate764);

SoShape761->setGeometry(*SoLineSet762);

SoHAnimSegment709->addChild(*SoShape761);

SoShape* SoShape765 = new SoShape();
SoLineSet* SoLineSet766 = new SoLineSet();
SoLineSet766->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA767 = new SoColorRGBA();
SoColorRGBA767->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet766->addChild(*SoColorRGBA767);

SoCoordinate* SoCoordinate768 = new SoCoordinate();
SoCoordinate768->setPoint(new float[]{0.0044,1.6209,0.0236,-0.052,1.5529,0.0347}, 6);
SoLineSet766->setCoord(*SoCoordinate768);

SoShape765->setGeometry(*SoLineSet766);

SoHAnimSegment709->addChild(*SoShape765);

SoShape* SoShape769 = new SoShape();
SoLineSet* SoLineSet770 = new SoLineSet();
SoLineSet770->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA771 = new SoColorRGBA();
SoColorRGBA771->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet770->addChild(*SoColorRGBA771);

SoCoordinate* SoCoordinate772 = new SoCoordinate();
SoCoordinate772->setPoint(new float[]{0.0044,1.6209,0.0236,0.0739,1.6348,0.0282}, 6);
SoLineSet770->setCoord(*SoCoordinate772);

SoShape769->setGeometry(*SoLineSet770);

SoHAnimSegment709->addChild(*SoShape769);

SoShape* SoShape773 = new SoShape();
SoLineSet* SoLineSet774 = new SoLineSet();
SoLineSet774->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA775 = new SoColorRGBA();
SoColorRGBA775->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet774->addChild(*SoColorRGBA775);

SoCoordinate* SoCoordinate776 = new SoCoordinate();
SoCoordinate776->setPoint(new float[]{0.0044,1.6209,0.0236,0.0631,1.553,0.033}, 6);
SoLineSet774->setCoord(*SoCoordinate776);

SoShape773->setGeometry(*SoLineSet774);

SoHAnimSegment709->addChild(*SoShape773);

SoShape* SoShape777 = new SoShape();
SoLineSet* SoLineSet778 = new SoLineSet();
SoLineSet778->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA779 = new SoColorRGBA();
SoColorRGBA779->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet778->addChild(*SoColorRGBA779);

SoCoordinate* SoCoordinate780 = new SoCoordinate();
SoCoordinate780->setPoint(new float[]{0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796}, 6);
SoLineSet778->setCoord(*SoCoordinate780);

SoShape777->setGeometry(*SoLineSet778);

SoHAnimSegment709->addChild(*SoShape777);

SoHAnimSite* SoHAnimSite781 = new SoHAnimSite();
SoHAnimSite781->setDEF(QString("hanim_skull_vertex_pt"));
SoHAnimSite781->X3DNode::setName(QString("skull_vertex_pt"));
SoHAnimSite781->setTranslation(new float[]{0.005,1.7504,0.0055});
SoTouchSensor* SoTouchSensor782 = new SoTouchSensor();
SoTouchSensor782->setDescription(QString("HAnimSite skull_tip"));
SoHAnimSite781->addChild(*SoTouchSensor782);

SoShape* SoShape783 = new SoShape();
SoShape783->setUSE(QString("HAnimSiteShape"));
SoHAnimSite781->addChild(*SoShape783);

SoHAnimSegment709->addChild(*SoHAnimSite781);

SoHAnimSite* SoHAnimSite784 = new SoHAnimSite();
SoHAnimSite784->setDEF(QString("hanim_sellion_pt"));
SoHAnimSite784->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite784->setTranslation(new float[]{0.0058,1.6316,0.0852});
SoTouchSensor* SoTouchSensor785 = new SoTouchSensor();
SoTouchSensor785->setDescription(QString("HAnimSite sellion_pt"));
SoHAnimSite784->addChild(*SoTouchSensor785);

SoShape* SoShape786 = new SoShape();
SoShape786->setUSE(QString("HAnimSiteShape"));
SoHAnimSite784->addChild(*SoShape786);

SoHAnimSegment709->addChild(*SoHAnimSite784);

SoHAnimSite* SoHAnimSite787 = new SoHAnimSite();
SoHAnimSite787->setDEF(QString("hanim_r_infraorbitale_pt"));
SoHAnimSite787->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite787->setTranslation(new float[]{-0.0237,1.6171,0.0752});
SoTouchSensor* SoTouchSensor788 = new SoTouchSensor();
SoTouchSensor788->setDescription(QString("HAnimSite r_infraorbitale_pt"));
SoHAnimSite787->addChild(*SoTouchSensor788);

SoShape* SoShape789 = new SoShape();
SoShape789->setUSE(QString("HAnimSiteShape"));
SoHAnimSite787->addChild(*SoShape789);

SoHAnimSegment709->addChild(*SoHAnimSite787);

SoHAnimSite* SoHAnimSite790 = new SoHAnimSite();
SoHAnimSite790->setDEF(QString("hanim_l_infraorbitale_pt"));
SoHAnimSite790->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite790->setTranslation(new float[]{0.0341,1.6171,0.0752});
SoTouchSensor* SoTouchSensor791 = new SoTouchSensor();
SoTouchSensor791->setDescription(QString("HAnimSite l_infraorbitale_pt"));
SoHAnimSite790->addChild(*SoTouchSensor791);

SoShape* SoShape792 = new SoShape();
SoShape792->setUSE(QString("HAnimSiteShape"));
SoHAnimSite790->addChild(*SoShape792);

SoHAnimSegment709->addChild(*SoHAnimSite790);

SoHAnimSite* SoHAnimSite793 = new SoHAnimSite();
SoHAnimSite793->setDEF(QString("hanim_supramenton_pt"));
SoHAnimSite793->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite793->setTranslation(new float[]{0.0061,1.541,0.0805});
SoTouchSensor* SoTouchSensor794 = new SoTouchSensor();
SoTouchSensor794->setDescription(QString("HAnimSite supramenton_pt"));
SoHAnimSite793->addChild(*SoTouchSensor794);

SoShape* SoShape795 = new SoShape();
SoShape795->setUSE(QString("HAnimSiteShape"));
SoHAnimSite793->addChild(*SoShape795);

SoHAnimSegment709->addChild(*SoHAnimSite793);

SoHAnimSite* SoHAnimSite796 = new SoHAnimSite();
SoHAnimSite796->setDEF(QString("hanim_r_tragion_pt"));
SoHAnimSite796->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite796->setTranslation(new float[]{-0.0646,1.6347,0.0302});
SoTouchSensor* SoTouchSensor797 = new SoTouchSensor();
SoTouchSensor797->setDescription(QString("HAnimSite r_tragion_pt"));
SoHAnimSite796->addChild(*SoTouchSensor797);

SoShape* SoShape798 = new SoShape();
SoShape798->setUSE(QString("HAnimSiteShape"));
SoHAnimSite796->addChild(*SoShape798);

SoHAnimSegment709->addChild(*SoHAnimSite796);

SoHAnimSite* SoHAnimSite799 = new SoHAnimSite();
SoHAnimSite799->setDEF(QString("hanim_r_gonion_pt"));
SoHAnimSite799->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite799->setTranslation(new float[]{-0.052,1.5529,0.0347});
SoTouchSensor* SoTouchSensor800 = new SoTouchSensor();
SoTouchSensor800->setDescription(QString("HAnimSite r_gonion_pt"));
SoHAnimSite799->addChild(*SoTouchSensor800);

SoShape* SoShape801 = new SoShape();
SoShape801->setUSE(QString("HAnimSiteShape"));
SoHAnimSite799->addChild(*SoShape801);

SoHAnimSegment709->addChild(*SoHAnimSite799);

SoHAnimSite* SoHAnimSite802 = new SoHAnimSite();
SoHAnimSite802->setDEF(QString("hanim_l_tragion_pt"));
SoHAnimSite802->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite802->setTranslation(new float[]{0.0739,1.6348,0.0282});
SoTouchSensor* SoTouchSensor803 = new SoTouchSensor();
SoTouchSensor803->setDescription(QString("HAnimSite l_tragion_pt"));
SoHAnimSite802->addChild(*SoTouchSensor803);

SoShape* SoShape804 = new SoShape();
SoShape804->setUSE(QString("HAnimSiteShape"));
SoHAnimSite802->addChild(*SoShape804);

SoHAnimSegment709->addChild(*SoHAnimSite802);

SoHAnimSite* SoHAnimSite805 = new SoHAnimSite();
SoHAnimSite805->setDEF(QString("hanim_l_gonion_pt"));
SoHAnimSite805->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite805->setTranslation(new float[]{0.0631,1.553,0.033});
SoTouchSensor* SoTouchSensor806 = new SoTouchSensor();
SoTouchSensor806->setDescription(QString("HAnimSite l_gonion_pt"));
SoHAnimSite805->addChild(*SoTouchSensor806);

SoShape* SoShape807 = new SoShape();
SoShape807->setUSE(QString("HAnimSiteShape"));
SoHAnimSite805->addChild(*SoShape807);

SoHAnimSegment709->addChild(*SoHAnimSite805);

SoHAnimSite* SoHAnimSite808 = new SoHAnimSite();
SoHAnimSite808->setDEF(QString("hanim_nuchale_pt"));
SoHAnimSite808->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite808->setTranslation(new float[]{0.0039,1.5972,-0.0796});
SoTouchSensor* SoTouchSensor809 = new SoTouchSensor();
SoTouchSensor809->setDescription(QString("HAnimSite nuchale_pt"));
SoHAnimSite808->addChild(*SoTouchSensor809);

SoShape* SoShape810 = new SoShape();
SoShape810->setUSE(QString("HAnimSiteShape"));
SoHAnimSite808->addChild(*SoShape810);

SoHAnimSegment709->addChild(*SoHAnimSite808);

SoHAnimJoint708->addChildren(*SoHAnimSegment709);

SoHAnimJoint* SoHAnimJoint811 = new SoHAnimJoint();
SoHAnimJoint811->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint811->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint811->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment812 = new SoHAnimSegment();
SoHAnimSegment812->setDEF(QString("hanim_l_eyeball"));
SoHAnimSegment812->X3DNode::setName(QString("l_eyeball"));
SoTouchSensor* SoTouchSensor813 = new SoTouchSensor();
SoTouchSensor813->setDescription(QString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball"));
SoHAnimSegment812->addChild(*SoTouchSensor813);

SoTransform* SoTransform814 = new SoTransform();
SoTransform814->setTranslation(new float[]{0.0336,1.6332,0.0502});
SoShape* SoShape815 = new SoShape();
SoShape815->setUSE(QString("HAnimJointShape"));
SoTransform814->addChild(*SoShape815);

SoHAnimSegment812->addChild(*SoTransform814);

SoShape* SoShape816 = new SoShape();
SoLineSet* SoLineSet817 = new SoLineSet();
SoLineSet817->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA818 = new SoColorRGBA();
SoColorRGBA818->setDEF(QString("HAnimSiteViewpointLineColorRGBA"));
SoColorRGBA818->setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
SoLineSet817->addChild(*SoColorRGBA818);

SoCoordinate* SoCoordinate819 = new SoCoordinate();
SoCoordinate819->setPoint(new float[]{0.0336,1.6332,0.0502,0.034,1.64,0.05}, 6);
SoLineSet817->setCoord(*SoCoordinate819);

SoShape816->setGeometry(*SoLineSet817);

SoHAnimSegment812->addChild(*SoShape816);

SoHAnimSite* SoHAnimSite820 = new SoHAnimSite();
SoHAnimSite820->setDEF(QString("hanim_l_eyeball_site_view"));
SoHAnimSite820->X3DNode::setName(QString("l_eyeball_site_view"));
SoHAnimSite820->setTranslation(new float[]{0.034,1.64,0.05});
SoTouchSensor* SoTouchSensor821 = new SoTouchSensor();
SoTouchSensor821->setDescription(QString("HAnimSite l_eyeball_site_view"));
SoHAnimSite820->addChild(*SoTouchSensor821);

SoShape* SoShape822 = new SoShape();
SoShape822->setUSE(QString("HAnimSiteShape"));
SoHAnimSite820->addChild(*SoShape822);

SoViewpoint* SoViewpoint823 = new SoViewpoint();
SoViewpoint823->setDEF(QString("hanim_l_eyeball_site_viewpoint"));
SoViewpoint823->setDescription(QString("l_eyeball_site_viewpoint looking forward"));
SoViewpoint823->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint823->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite820->addChild(*SoViewpoint823);

SoAnchor* SoAnchor824 = new SoAnchor();
SoAnchor824->setDescription(QString("HAnimSite hanim_l_eyeball_site_view Viewpoint"));
SoAnchor824->setUrl(new QString[]{QString("#hanim_l_eyeball_site_viewpoint")}, 1);
SoLOD* SoLOD825 = new SoLOD();
SoLOD825->setForceTransitions(true);
SoLOD825->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo826 = new SoWorldInfo();
SoWorldInfo826->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD825->addChildren(*SoWorldInfo826);

SoShape* SoShape827 = new SoShape();
SoShape827->setDEF(QString("HAnimSiteViewpointShape"));
SoVRMLAppearance* SoVRMLAppearance828 = new SoVRMLAppearance();
SoMaterial* SoMaterial829 = new SoMaterial();
SoMaterial829->setDiffuseColor(new float[]{1.0,1.0,0.0});
SoMaterial829->setTransparency(0.3);
SoVRMLAppearance828->addChild(*SoMaterial829);

SoShape827->addChild(*SoVRMLAppearance828);

SoIndexedFaceSet* SoIndexedFaceSet830 = new SoIndexedFaceSet();
SoIndexedFaceSet830->setDEF(QString("SiteViewpointDiamondIFS"));
SoIndexedFaceSet830->setCreaseAngle(0.5);
SoIndexedFaceSet830->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate831 = new SoCoordinate();
SoCoordinate831->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet830->setCoord(*SoCoordinate831);

SoShape827->setGeometry(*SoIndexedFaceSet830);

SoLOD825->addChildren(SoShape827);

SoAnchor824->addChild(*SoLOD825);

SoHAnimSite820->addChild(SoAnchor824);

SoHAnimSegment812->addChild(*SoHAnimSite820);

SoHAnimJoint811->addChildren(*SoHAnimSegment812);

SoHAnimJoint708->addChildren(*SoHAnimJoint811);

SoHAnimJoint* SoHAnimJoint832 = new SoHAnimJoint();
SoHAnimJoint832->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint832->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint832->setCenter(new float[]{0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment833 = new SoHAnimSegment();
SoHAnimSegment833->setDEF(QString("hanim_l_eyelid"));
SoHAnimSegment833->X3DNode::setName(QString("l_eyelid"));
SoTouchSensor* SoTouchSensor834 = new SoTouchSensor();
SoTouchSensor834->setDescription(QString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid"));
SoHAnimSegment833->addChild(*SoTouchSensor834);

SoTransform* SoTransform835 = new SoTransform();
SoTransform835->setTranslation(new float[]{0.0336,1.6332,0.0502});
SoShape* SoShape836 = new SoShape();
SoShape836->setUSE(QString("HAnimJointShape"));
SoTransform835->addChild(*SoShape836);

SoHAnimSegment833->addChild(*SoTransform835);

SoHAnimJoint832->addChildren(*SoHAnimSegment833);

SoHAnimJoint708->addChildren(*SoHAnimJoint832);

SoHAnimJoint* SoHAnimJoint837 = new SoHAnimJoint();
SoHAnimJoint837->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint837->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint837->setCenter(new float[]{0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment838 = new SoHAnimSegment();
SoHAnimSegment838->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSegment838->X3DNode::setName(QString("l_eyebrow"));
SoTouchSensor* SoTouchSensor839 = new SoTouchSensor();
SoTouchSensor839->setDescription(QString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow"));
SoHAnimSegment838->addChild(*SoTouchSensor839);

SoTransform* SoTransform840 = new SoTransform();
SoTransform840->setTranslation(new float[]{0.0336,1.635,0.0506});
SoShape* SoShape841 = new SoShape();
SoShape841->setUSE(QString("HAnimJointShape"));
SoTransform840->addChild(*SoShape841);

SoHAnimSegment838->addChild(*SoTransform840);

SoHAnimJoint837->addChildren(*SoHAnimSegment838);

SoHAnimJoint708->addChildren(*SoHAnimJoint837);

SoHAnimJoint* SoHAnimJoint842 = new SoHAnimJoint();
SoHAnimJoint842->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint842->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint842->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment843 = new SoHAnimSegment();
SoHAnimSegment843->setDEF(QString("hanim_r_eyeball"));
SoHAnimSegment843->X3DNode::setName(QString("r_eyeball"));
SoTouchSensor* SoTouchSensor844 = new SoTouchSensor();
SoTouchSensor844->setDescription(QString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball"));
SoHAnimSegment843->addChild(*SoTouchSensor844);

SoTransform* SoTransform845 = new SoTransform();
SoTransform845->setTranslation(new float[]{-0.0336,1.6332,0.0502});
SoShape* SoShape846 = new SoShape();
SoShape846->setUSE(QString("HAnimJointShape"));
SoTransform845->addChild(*SoShape846);

SoHAnimSegment843->addChild(*SoTransform845);

SoShape* SoShape847 = new SoShape();
SoLineSet* SoLineSet848 = new SoLineSet();
SoLineSet848->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA849 = new SoColorRGBA();
SoColorRGBA849->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet848->addChild(*SoColorRGBA849);

SoCoordinate* SoCoordinate850 = new SoCoordinate();
SoCoordinate850->setPoint(new float[]{-0.0336,1.6332,0.0502,-0.034,1.64,0.05}, 6);
SoLineSet848->setCoord(*SoCoordinate850);

SoShape847->setGeometry(*SoLineSet848);

SoHAnimSegment843->addChild(*SoShape847);

SoHAnimSite* SoHAnimSite851 = new SoHAnimSite();
SoHAnimSite851->setDEF(QString("hanim_r_eyeball_site_view"));
SoHAnimSite851->X3DNode::setName(QString("r_eyeball_site_view"));
SoHAnimSite851->setTranslation(new float[]{-0.034,1.64,0.05});
SoTouchSensor* SoTouchSensor852 = new SoTouchSensor();
SoTouchSensor852->setDescription(QString("HAnimSite r_eyeball_site_view"));
SoHAnimSite851->addChild(*SoTouchSensor852);

SoShape* SoShape853 = new SoShape();
SoShape853->setUSE(QString("HAnimSiteShape"));
SoHAnimSite851->addChild(*SoShape853);

SoViewpoint* SoViewpoint854 = new SoViewpoint();
SoViewpoint854->setDEF(QString("hanim_r_eyeball_site_viewpoint"));
SoViewpoint854->setDescription(QString("r_eyeball_site_viewpoint looking forward"));
SoViewpoint854->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint854->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite851->addChild(*SoViewpoint854);

SoAnchor* SoAnchor855 = new SoAnchor();
SoAnchor855->setDescription(QString("HAnimSite hanim_r_eyeball_site_view Viewpoint"));
SoAnchor855->setUrl(new QString[]{QString("#hanim_r_eyeball_site_viewpoint")}, 1);
SoLOD* SoLOD856 = new SoLOD();
SoLOD856->setForceTransitions(true);
SoLOD856->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo857 = new SoWorldInfo();
SoWorldInfo857->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD856->addChildren(*SoWorldInfo857);

SoShape* SoShape858 = new SoShape();
SoShape858->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD856->addChildren(SoShape858);

SoAnchor855->addChild(*SoLOD856);

SoHAnimSite851->addChild(SoAnchor855);

SoHAnimSegment843->addChild(*SoHAnimSite851);

SoHAnimJoint842->addChildren(*SoHAnimSegment843);

SoHAnimJoint708->addChildren(*SoHAnimJoint842);

SoHAnimJoint* SoHAnimJoint859 = new SoHAnimJoint();
SoHAnimJoint859->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint859->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint859->setCenter(new float[]{-0.0336,1.6332,0.0502});
SoHAnimSegment* SoHAnimSegment860 = new SoHAnimSegment();
SoHAnimSegment860->setDEF(QString("hanim_r_eyelid"));
SoHAnimSegment860->X3DNode::setName(QString("r_eyelid"));
SoTouchSensor* SoTouchSensor861 = new SoTouchSensor();
SoTouchSensor861->setDescription(QString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid"));
SoHAnimSegment860->addChild(*SoTouchSensor861);

SoTransform* SoTransform862 = new SoTransform();
SoTransform862->setTranslation(new float[]{-0.0336,1.6332,0.0502});
SoShape* SoShape863 = new SoShape();
SoShape863->setUSE(QString("HAnimJointShape"));
SoTransform862->addChild(*SoShape863);

SoHAnimSegment860->addChild(*SoTransform862);

SoHAnimJoint859->addChildren(*SoHAnimSegment860);

SoHAnimJoint708->addChildren(*SoHAnimJoint859);

SoHAnimJoint* SoHAnimJoint864 = new SoHAnimJoint();
SoHAnimJoint864->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint864->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint864->setCenter(new float[]{-0.0336,1.635,0.0506});
SoHAnimSegment* SoHAnimSegment865 = new SoHAnimSegment();
SoHAnimSegment865->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSegment865->X3DNode::setName(QString("r_eyebrow"));
SoTouchSensor* SoTouchSensor866 = new SoTouchSensor();
SoTouchSensor866->setDescription(QString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow"));
SoHAnimSegment865->addChild(*SoTouchSensor866);

SoTransform* SoTransform867 = new SoTransform();
SoTransform867->setTranslation(new float[]{-0.0336,1.635,0.0506});
SoShape* SoShape868 = new SoShape();
SoShape868->setUSE(QString("HAnimJointShape"));
SoTransform867->addChild(*SoShape868);

SoHAnimSegment865->addChild(*SoTransform867);

SoHAnimJoint864->addChildren(*SoHAnimSegment865);

SoHAnimJoint708->addChildren(*SoHAnimJoint864);

SoHAnimJoint* SoHAnimJoint869 = new SoHAnimJoint();
SoHAnimJoint869->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint869->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint869->setCenter(new float[]{0.0,1.63,0.015});
SoHAnimSegment* SoHAnimSegment870 = new SoHAnimSegment();
SoHAnimSegment870->setDEF(QString("hanim_jaw"));
SoHAnimSegment870->X3DNode::setName(QString("jaw"));
SoTouchSensor* SoTouchSensor871 = new SoTouchSensor();
SoTouchSensor871->setDescription(QString("HAnimJoint temporomandibular, HAnimSegment jaw"));
SoHAnimSegment870->addChild(*SoTouchSensor871);

SoTransform* SoTransform872 = new SoTransform();
SoTransform872->setTranslation(new float[]{0.0,1.63,0.015});
SoShape* SoShape873 = new SoShape();
SoShape873->setUSE(QString("HAnimJointShape"));
SoTransform872->addChild(*SoShape873);

SoHAnimSegment870->addChild(*SoTransform872);

SoShape* SoShape874 = new SoShape();
SoLineSet* SoLineSet875 = new SoLineSet();
SoLineSet875->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA876 = new SoColorRGBA();
SoColorRGBA876->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet875->addChild(*SoColorRGBA876);

SoCoordinate* SoCoordinate877 = new SoCoordinate();
SoCoordinate877->setPoint(new float[]{0.0,1.63,0.015,0.045,1.63,0.0}, 6);
SoLineSet875->setCoord(*SoCoordinate877);

SoShape874->setGeometry(*SoLineSet875);

SoHAnimSegment870->addChild(*SoShape874);

SoShape* SoShape878 = new SoShape();
SoLineSet* SoLineSet879 = new SoLineSet();
SoLineSet879->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA880 = new SoColorRGBA();
SoColorRGBA880->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet879->addChild(*SoColorRGBA880);

SoCoordinate* SoCoordinate881 = new SoCoordinate();
SoCoordinate881->setPoint(new float[]{0.0,1.63,0.015,-0.045,1.63,0.0}, 6);
SoLineSet879->setCoord(*SoCoordinate881);

SoShape878->setGeometry(*SoLineSet879);

SoHAnimSegment870->addChild(*SoShape878);

SoHAnimSite* SoHAnimSite882 = new SoHAnimSite();
SoHAnimSite882->setDEF(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimSite882->X3DNode::setName(QString("temporomandibular_l_site_pt"));
SoHAnimSite882->setTranslation(new float[]{0.045,1.63,0.0});
SoTouchSensor* SoTouchSensor883 = new SoTouchSensor();
SoTouchSensor883->setDescription(QString("HAnimSite temporomandibular_l_site_pt"));
SoHAnimSite882->addChild(*SoTouchSensor883);

SoShape* SoShape884 = new SoShape();
SoShape884->setUSE(QString("HAnimSiteShape"));
SoHAnimSite882->addChild(*SoShape884);

SoHAnimSegment870->addChild(*SoHAnimSite882);

SoHAnimSite* SoHAnimSite885 = new SoHAnimSite();
SoHAnimSite885->setDEF(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimSite885->X3DNode::setName(QString("temporomandibular_r_site_pt"));
SoHAnimSite885->setTranslation(new float[]{-0.045,1.63,0.0});
SoTouchSensor* SoTouchSensor886 = new SoTouchSensor();
SoTouchSensor886->setDescription(QString("HAnimSite temporomandibular_r_site_pt"));
SoHAnimSite885->addChild(*SoTouchSensor886);

SoShape* SoShape887 = new SoShape();
SoShape887->setUSE(QString("HAnimSiteShape"));
SoHAnimSite885->addChild(*SoShape887);

SoHAnimSegment870->addChild(*SoHAnimSite885);

SoHAnimJoint869->addChildren(*SoHAnimSegment870);

SoHAnimJoint708->addChildren(*SoHAnimJoint869);

SoHAnimJoint699->addChildren(*SoHAnimJoint708);

SoHAnimJoint690->addChildren(*SoHAnimJoint699);

SoHAnimJoint681->addChildren(*SoHAnimJoint690);

SoHAnimJoint672->addChildren(*SoHAnimJoint681);

SoHAnimJoint663->addChildren(*SoHAnimJoint672);

SoHAnimJoint654->addChildren(*SoHAnimJoint663);

SoHAnimJoint631->addChildren(*SoHAnimJoint654);

SoHAnimJoint600->addChildren(*SoHAnimJoint631);

SoHAnimJoint* SoHAnimJoint888 = new SoHAnimJoint();
SoHAnimJoint888->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint888->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint888->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment889 = new SoHAnimSegment();
SoHAnimSegment889->setDEF(QString("hanim_l_clavicle"));
SoHAnimSegment889->X3DNode::setName(QString("l_clavicle"));
SoTouchSensor* SoTouchSensor890 = new SoTouchSensor();
SoTouchSensor890->setDescription(QString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle"));
SoHAnimSegment889->addChild(*SoTouchSensor890);

SoTransform* SoTransform891 = new SoTransform();
SoTransform891->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoShape* SoShape892 = new SoShape();
SoShape892->setUSE(QString("HAnimJointShape"));
SoTransform891->addChild(*SoShape892);

SoHAnimSegment889->addChild(*SoTransform891);

SoShape* SoShape893 = new SoShape();
SoLineSet* SoLineSet894 = new SoLineSet();
SoLineSet894->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA895 = new SoColorRGBA();
SoColorRGBA895->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet894->addChild(*SoColorRGBA895);

SoCoordinate* SoCoordinate896 = new SoCoordinate();
SoCoordinate896->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoLineSet894->setCoord(*SoCoordinate896);

SoShape893->setGeometry(*SoLineSet894);

SoHAnimSegment889->addChild(*SoShape893);

SoShape* SoShape897 = new SoShape();
SoLineSet* SoLineSet898 = new SoLineSet();
SoLineSet898->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA899 = new SoColorRGBA();
SoColorRGBA899->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet898->addChild(*SoColorRGBA899);

SoCoordinate* SoCoordinate900 = new SoCoordinate();
SoCoordinate900->setPoint(new float[]{0.082,1.4488,-0.0353,0.0271,1.4943,0.0394}, 6);
SoLineSet898->setCoord(*SoCoordinate900);

SoShape897->setGeometry(*SoLineSet898);

SoHAnimSegment889->addChild(*SoShape897);

SoShape* SoShape901 = new SoShape();
SoLineSet* SoLineSet902 = new SoLineSet();
SoLineSet902->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA903 = new SoColorRGBA();
SoColorRGBA903->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet902->addChild(*SoColorRGBA903);

SoCoordinate* SoCoordinate904 = new SoCoordinate();
SoCoordinate904->setPoint(new float[]{0.082,1.4488,-0.0353,0.2032,1.476,-0.049}, 6);
SoLineSet902->setCoord(*SoCoordinate904);

SoShape901->setGeometry(*SoLineSet902);

SoHAnimSegment889->addChild(*SoShape901);

SoShape* SoShape905 = new SoShape();
SoLineSet* SoLineSet906 = new SoLineSet();
SoLineSet906->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA907 = new SoColorRGBA();
SoColorRGBA907->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet906->addChild(*SoColorRGBA907);

SoCoordinate* SoCoordinate908 = new SoCoordinate();
SoCoordinate908->setPoint(new float[]{0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075}, 6);
SoLineSet906->setCoord(*SoCoordinate908);

SoShape905->setGeometry(*SoLineSet906);

SoHAnimSegment889->addChild(*SoShape905);

SoShape* SoShape909 = new SoShape();
SoLineSet* SoLineSet910 = new SoLineSet();
SoLineSet910->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA911 = new SoColorRGBA();
SoColorRGBA911->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet910->addChild(*SoColorRGBA911);

SoCoordinate* SoCoordinate912 = new SoCoordinate();
SoCoordinate912->setPoint(new float[]{0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875}, 6);
SoLineSet910->setCoord(*SoCoordinate912);

SoShape909->setGeometry(*SoLineSet910);

SoHAnimSegment889->addChild(*SoShape909);

SoHAnimSite* SoHAnimSite913 = new SoHAnimSite();
SoHAnimSite913->setDEF(QString("hanim_l_clavicle_pt"));
SoHAnimSite913->X3DNode::setName(QString("l_clavicle_pt"));
SoHAnimSite913->setTranslation(new float[]{0.0271,1.4943,0.0394});
SoTouchSensor* SoTouchSensor914 = new SoTouchSensor();
SoTouchSensor914->setDescription(QString("HAnimSite l_clavicale_pt"));
SoHAnimSite913->addChild(*SoTouchSensor914);

SoShape* SoShape915 = new SoShape();
SoShape915->setUSE(QString("HAnimSiteShape"));
SoHAnimSite913->addChild(*SoShape915);

SoHAnimSegment889->addChild(*SoHAnimSite913);

SoHAnimSite* SoHAnimSite916 = new SoHAnimSite();
SoHAnimSite916->setDEF(QString("hanim_l_acromion_pt"));
SoHAnimSite916->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite916->setTranslation(new float[]{0.2032,1.476,-0.049});
SoTouchSensor* SoTouchSensor917 = new SoTouchSensor();
SoTouchSensor917->setDescription(QString("HAnimSite l_acromion_pt"));
SoHAnimSite916->addChild(*SoTouchSensor917);

SoShape* SoShape918 = new SoShape();
SoShape918->setUSE(QString("HAnimSiteShape"));
SoHAnimSite916->addChild(*SoShape918);

SoHAnimSegment889->addChild(*SoHAnimSite916);

SoHAnimSite* SoHAnimSite919 = new SoHAnimSite();
SoHAnimSite919->setDEF(QString("hanim_l_axilla_proximal_pt"));
SoHAnimSite919->X3DNode::setName(QString("l_axilla_proximal_pt"));
SoHAnimSite919->setTranslation(new float[]{0.1777,1.4065,-0.0075});
SoTouchSensor* SoTouchSensor920 = new SoTouchSensor();
SoTouchSensor920->setDescription(QString("HAnimSite l_axilla_ant_pt"));
SoHAnimSite919->addChild(*SoTouchSensor920);

SoShape* SoShape921 = new SoShape();
SoShape921->setUSE(QString("HAnimSiteShape"));
SoHAnimSite919->addChild(*SoShape921);

SoHAnimSegment889->addChild(*SoHAnimSite919);

SoHAnimSite* SoHAnimSite922 = new SoHAnimSite();
SoHAnimSite922->setDEF(QString("hanim_l_axilla_distal_pt"));
SoHAnimSite922->X3DNode::setName(QString("l_axilla_distal_pt"));
SoHAnimSite922->setTranslation(new float[]{0.1706,1.4072,-0.0875});
SoTouchSensor* SoTouchSensor923 = new SoTouchSensor();
SoTouchSensor923->setDescription(QString("HAnimSite l_axilla_post_pt"));
SoHAnimSite922->addChild(*SoTouchSensor923);

SoShape* SoShape924 = new SoShape();
SoShape924->setUSE(QString("HAnimSiteShape"));
SoHAnimSite922->addChild(*SoShape924);

SoHAnimSegment889->addChild(*SoHAnimSite922);

SoHAnimJoint888->addChildren(*SoHAnimSegment889);

SoHAnimJoint* SoHAnimJoint925 = new SoHAnimJoint();
SoHAnimJoint925->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint925->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint925->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment926 = new SoHAnimSegment();
SoHAnimSegment926->setDEF(QString("hanim_l_scapula"));
SoHAnimSegment926->X3DNode::setName(QString("l_scapula"));
SoTouchSensor* SoTouchSensor927 = new SoTouchSensor();
SoTouchSensor927->setDescription(QString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula"));
SoHAnimSegment926->addChild(*SoTouchSensor927);

SoTransform* SoTransform928 = new SoTransform();
SoTransform928->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoShape* SoShape929 = new SoShape();
SoShape929->setUSE(QString("HAnimJointShape"));
SoTransform928->addChild(*SoShape929);

SoHAnimSegment926->addChild(*SoTransform928);

SoShape* SoShape930 = new SoShape();
SoLineSet* SoLineSet931 = new SoLineSet();
SoLineSet931->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA932 = new SoColorRGBA();
SoColorRGBA932->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet931->addChild(*SoColorRGBA932);

SoCoordinate* SoCoordinate933 = new SoCoordinate();
SoCoordinate933->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387}, 6);
SoLineSet931->setCoord(*SoCoordinate933);

SoShape930->setGeometry(*SoLineSet931);

SoHAnimSegment926->addChild(*SoShape930);

SoHAnimJoint925->addChildren(*SoHAnimSegment926);

SoHAnimJoint* SoHAnimJoint934 = new SoHAnimJoint();
SoHAnimJoint934->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint934->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint934->setCenter(new float[]{0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment935 = new SoHAnimSegment();
SoHAnimSegment935->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment935->X3DNode::setName(QString("l_upperarm"));
SoTouchSensor* SoTouchSensor936 = new SoTouchSensor();
SoTouchSensor936->setDescription(QString("HAnimJoint l_shoulder, HAnimSegment l_upperarm"));
SoHAnimSegment935->addChild(*SoTouchSensor936);

SoTransform* SoTransform937 = new SoTransform();
SoTransform937->setTranslation(new float[]{0.2029,1.4376,-0.0387});
SoShape* SoShape938 = new SoShape();
SoShape938->setUSE(QString("HAnimJointShape"));
SoTransform937->addChild(*SoShape938);

SoHAnimSegment935->addChild(*SoTransform937);

SoShape* SoShape939 = new SoShape();
SoLineSet* SoLineSet940 = new SoLineSet();
SoLineSet940->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA941 = new SoColorRGBA();
SoColorRGBA941->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet940->addChild(*SoColorRGBA941);

SoCoordinate* SoCoordinate942 = new SoCoordinate();
SoCoordinate942->setPoint(new float[]{0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682}, 6);
SoLineSet940->setCoord(*SoCoordinate942);

SoShape939->setGeometry(*SoLineSet940);

SoHAnimSegment935->addChild(*SoShape939);

SoShape* SoShape943 = new SoShape();
SoLineSet* SoLineSet944 = new SoLineSet();
SoLineSet944->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA945 = new SoColorRGBA();
SoColorRGBA945->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet944->addChild(*SoColorRGBA945);

SoCoordinate* SoCoordinate946 = new SoCoordinate();
SoCoordinate946->setPoint(new float[]{0.2029,1.4376,-0.0387,0.228,1.1482,-0.11}, 6);
SoLineSet944->setCoord(*SoCoordinate946);

SoShape943->setGeometry(*SoLineSet944);

SoHAnimSegment935->addChild(*SoShape943);

SoHAnimSite* SoHAnimSite947 = new SoHAnimSite();
SoHAnimSite947->setDEF(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite947->X3DNode::setName(QString("l_humeral_lateral_epicondyle_pt"));
SoHAnimSite947->setTranslation(new float[]{0.228,1.1482,-0.11});
SoTouchSensor* SoTouchSensor948 = new SoTouchSensor();
SoTouchSensor948->setDescription(QString("HAnimSite l_humeral_lateral_epicn_pt"));
SoHAnimSite947->addChild(*SoTouchSensor948);

SoShape* SoShape949 = new SoShape();
SoShape949->setUSE(QString("HAnimSiteShape"));
SoHAnimSite947->addChild(*SoShape949);

SoHAnimSegment935->addChild(*SoHAnimSite947);

SoHAnimJoint934->addChildren(*SoHAnimSegment935);

SoHAnimJoint* SoHAnimJoint950 = new SoHAnimJoint();
SoHAnimJoint950->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint950->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint950->setCenter(new float[]{0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment951 = new SoHAnimSegment();
SoHAnimSegment951->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment951->X3DNode::setName(QString("l_forearm"));
SoTouchSensor* SoTouchSensor952 = new SoTouchSensor();
SoTouchSensor952->setDescription(QString("HAnimJoint l_elbow, HAnimSegment l_forearm"));
SoHAnimSegment951->addChild(*SoTouchSensor952);

SoTransform* SoTransform953 = new SoTransform();
SoTransform953->setTranslation(new float[]{0.2014,1.1357,-0.0682});
SoShape* SoShape954 = new SoShape();
SoShape954->setUSE(QString("HAnimJointShape"));
SoTransform953->addChild(*SoShape954);

SoHAnimSegment951->addChild(*SoTransform953);

SoShape* SoShape955 = new SoShape();
SoLineSet* SoLineSet956 = new SoLineSet();
SoLineSet956->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA957 = new SoColorRGBA();
SoColorRGBA957->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet956->addChild(*SoColorRGBA957);

SoCoordinate* SoCoordinate958 = new SoCoordinate();
SoCoordinate958->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583}, 6);
SoLineSet956->setCoord(*SoCoordinate958);

SoShape955->setGeometry(*SoLineSet956);

SoHAnimSegment951->addChild(*SoShape955);

SoShape* SoShape959 = new SoShape();
SoLineSet* SoLineSet960 = new SoLineSet();
SoLineSet960->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA961 = new SoColorRGBA();
SoColorRGBA961->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet960->addChild(*SoColorRGBA961);

SoCoordinate* SoCoordinate962 = new SoCoordinate();
SoCoordinate962->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415}, 6);
SoLineSet960->setCoord(*SoCoordinate962);

SoShape959->setGeometry(*SoLineSet960);

SoHAnimSegment951->addChild(*SoShape959);

SoShape* SoShape963 = new SoShape();
SoLineSet* SoLineSet964 = new SoLineSet();
SoLineSet964->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA965 = new SoColorRGBA();
SoColorRGBA965->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet964->addChild(*SoColorRGBA965);

SoCoordinate* SoCoordinate966 = new SoCoordinate();
SoCoordinate966->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123}, 6);
SoLineSet964->setCoord(*SoCoordinate966);

SoShape963->setGeometry(*SoLineSet964);

SoHAnimSegment951->addChild(*SoShape963);

SoShape* SoShape967 = new SoShape();
SoLineSet* SoLineSet968 = new SoLineSet();
SoLineSet968->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA969 = new SoColorRGBA();
SoColorRGBA969->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet968->addChild(*SoColorRGBA969);

SoCoordinate* SoCoordinate970 = new SoCoordinate();
SoCoordinate970->setPoint(new float[]{0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113}, 6);
SoLineSet968->setCoord(*SoCoordinate970);

SoShape967->setGeometry(*SoLineSet968);

SoHAnimSegment951->addChild(*SoShape967);

SoShape* SoShape971 = new SoShape();
SoLineSet* SoLineSet972 = new SoLineSet();
SoLineSet972->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA973 = new SoColorRGBA();
SoColorRGBA973->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet972->addChild(*SoColorRGBA973);

SoCoordinate* SoCoordinate974 = new SoCoordinate();
SoCoordinate974->setPoint(new float[]{0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167}, 6);
SoLineSet972->setCoord(*SoCoordinate974);

SoShape971->setGeometry(*SoLineSet972);

SoHAnimSegment951->addChild(*SoShape971);

SoHAnimSite* SoHAnimSite975 = new SoHAnimSite();
SoHAnimSite975->setDEF(QString("hanim_l_radial_styloid_pt"));
SoHAnimSite975->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite975->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoTouchSensor* SoTouchSensor976 = new SoTouchSensor();
SoTouchSensor976->setDescription(QString("HAnimSite l_radial_styloid_pt"));
SoHAnimSite975->addChild(*SoTouchSensor976);

SoShape* SoShape977 = new SoShape();
SoShape977->setUSE(QString("HAnimSiteShape"));
SoHAnimSite975->addChild(*SoShape977);

SoHAnimSegment951->addChild(*SoHAnimSite975);

SoHAnimSite* SoHAnimSite978 = new SoHAnimSite();
SoHAnimSite978->setDEF(QString("hanim_l_olecranon_pt"));
SoHAnimSite978->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite978->setTranslation(new float[]{0.1962,1.1375,-0.1123});
SoTouchSensor* SoTouchSensor979 = new SoTouchSensor();
SoTouchSensor979->setDescription(QString("HAnimSite l_olecranon_pt"));
SoHAnimSite978->addChild(*SoTouchSensor979);

SoShape* SoShape980 = new SoShape();
SoShape980->setUSE(QString("HAnimSiteShape"));
SoHAnimSite978->addChild(*SoShape980);

SoHAnimSegment951->addChild(*SoHAnimSite978);

SoHAnimSite* SoHAnimSite981 = new SoHAnimSite();
SoHAnimSite981->setDEF(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimSite981->X3DNode::setName(QString("l_humeral_medial_epicondyle_pt"));
SoHAnimSite981->setTranslation(new float[]{0.1735,1.1272,-0.1113});
SoTouchSensor* SoTouchSensor982 = new SoTouchSensor();
SoTouchSensor982->setDescription(QString("HAnimSite l_humeral_medial_epicn_pt"));
SoHAnimSite981->addChild(*SoTouchSensor982);

SoShape* SoShape983 = new SoShape();
SoShape983->setUSE(QString("HAnimSiteShape"));
SoHAnimSite981->addChild(*SoShape983);

SoHAnimSegment951->addChild(*SoHAnimSite981);

SoHAnimSite* SoHAnimSite984 = new SoHAnimSite();
SoHAnimSite984->setDEF(QString("hanim_l_radiale_pt"));
SoHAnimSite984->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite984->setTranslation(new float[]{0.2182,1.1212,-0.1167});
SoTouchSensor* SoTouchSensor985 = new SoTouchSensor();
SoTouchSensor985->setDescription(QString("HAnimSite l_radiale_pt"));
SoHAnimSite984->addChild(*SoTouchSensor985);

SoShape* SoShape986 = new SoShape();
SoShape986->setUSE(QString("HAnimSiteShape"));
SoHAnimSite984->addChild(*SoShape986);

SoHAnimSegment951->addChild(*SoHAnimSite984);

SoHAnimJoint950->addChildren(*SoHAnimSegment951);

SoHAnimJoint* SoHAnimJoint987 = new SoHAnimJoint();
SoHAnimJoint987->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint987->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint987->setCenter(new float[]{0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment988 = new SoHAnimSegment();
SoHAnimSegment988->setDEF(QString("hanim_l_carpal"));
SoHAnimSegment988->X3DNode::setName(QString("l_carpal"));
SoTouchSensor* SoTouchSensor989 = new SoTouchSensor();
SoTouchSensor989->setDescription(QString("HAnimJoint l_radiocarpal, HAnimSegment l_carpal"));
SoHAnimSegment988->addChild(*SoTouchSensor989);

SoTransform* SoTransform990 = new SoTransform();
SoTransform990->setTranslation(new float[]{0.1984,0.8663,-0.0583});
SoShape* SoShape991 = new SoShape();
SoShape991->setUSE(QString("HAnimJointShape"));
SoTransform990->addChild(*SoShape991);

SoHAnimSegment988->addChild(*SoTransform990);

SoShape* SoShape992 = new SoShape();
SoLineSet* SoLineSet993 = new SoLineSet();
SoLineSet993->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA994 = new SoColorRGBA();
SoColorRGBA994->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet993->addChild(*SoColorRGBA994);

SoCoordinate* SoCoordinate995 = new SoCoordinate();
SoCoordinate995->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534}, 6);
SoLineSet993->setCoord(*SoCoordinate995);

SoShape992->setGeometry(*SoLineSet993);

SoHAnimSegment988->addChild(*SoShape992);

SoShape* SoShape996 = new SoShape();
SoLineSet* SoLineSet997 = new SoLineSet();
SoLineSet997->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA998 = new SoColorRGBA();
SoColorRGBA998->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet997->addChild(*SoColorRGBA998);

SoCoordinate* SoCoordinate999 = new SoCoordinate();
SoCoordinate999->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028}, 6);
SoLineSet997->setCoord(*SoCoordinate999);

SoShape996->setGeometry(*SoLineSet997);

SoHAnimSegment988->addChild(*SoShape996);

SoShape* SoShape1000 = new SoShape();
SoLineSet* SoLineSet1001 = new SoLineSet();
SoLineSet1001->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1002 = new SoColorRGBA();
SoColorRGBA1002->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1001->addChild(*SoColorRGBA1002);

SoCoordinate* SoCoordinate1003 = new SoCoordinate();
SoCoordinate1003->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053}, 6);
SoLineSet1001->setCoord(*SoCoordinate1003);

SoShape1000->setGeometry(*SoLineSet1001);

SoHAnimSegment988->addChild(*SoShape1000);

SoShape* SoShape1004 = new SoShape();
SoLineSet* SoLineSet1005 = new SoLineSet();
SoLineSet1005->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1006 = new SoColorRGBA();
SoColorRGBA1006->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1005->addChild(*SoColorRGBA1006);

SoCoordinate* SoCoordinate1007 = new SoCoordinate();
SoCoordinate1007->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794}, 6);
SoLineSet1005->setCoord(*SoCoordinate1007);

SoShape1004->setGeometry(*SoLineSet1005);

SoHAnimSegment988->addChild(*SoShape1004);

SoShape* SoShape1008 = new SoShape();
SoLineSet* SoLineSet1009 = new SoLineSet();
SoLineSet1009->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1010 = new SoColorRGBA();
SoColorRGBA1010->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1009->addChild(*SoColorRGBA1010);

SoCoordinate* SoCoordinate1011 = new SoCoordinate();
SoCoordinate1011->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036}, 6);
SoLineSet1009->setCoord(*SoCoordinate1011);

SoShape1008->setGeometry(*SoLineSet1009);

SoHAnimSegment988->addChild(*SoShape1008);

SoShape* SoShape1012 = new SoShape();
SoLineSet* SoLineSet1013 = new SoLineSet();
SoLineSet1013->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1014 = new SoColorRGBA();
SoColorRGBA1014->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1013->addChild(*SoColorRGBA1014);

SoCoordinate* SoCoordinate1015 = new SoCoordinate();
SoCoordinate1015->setPoint(new float[]{0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237}, 6);
SoLineSet1013->setCoord(*SoCoordinate1015);

SoShape1012->setGeometry(*SoLineSet1013);

SoHAnimSegment988->addChild(*SoShape1012);

SoShape* SoShape1016 = new SoShape();
SoLineSet* SoLineSet1017 = new SoLineSet();
SoLineSet1017->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1018 = new SoColorRGBA();
SoColorRGBA1018->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1017->addChild(*SoColorRGBA1018);

SoCoordinate* SoCoordinate1019 = new SoCoordinate();
SoCoordinate1019->setPoint(new float[]{0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648}, 6);
SoLineSet1017->setCoord(*SoCoordinate1019);

SoShape1016->setGeometry(*SoLineSet1017);

SoHAnimSegment988->addChild(*SoShape1016);

SoShape* SoShape1020 = new SoShape();
SoLineSet* SoLineSet1021 = new SoLineSet();
SoLineSet1021->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1022 = new SoColorRGBA();
SoColorRGBA1022->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1021->addChild(*SoColorRGBA1022);

SoCoordinate* SoCoordinate1023 = new SoCoordinate();
SoCoordinate1023->setPoint(new float[]{0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122}, 6);
SoLineSet1021->setCoord(*SoCoordinate1023);

SoShape1020->setGeometry(*SoLineSet1021);

SoHAnimSegment988->addChild(*SoShape1020);

SoShape* SoShape1024 = new SoShape();
SoLineSet* SoLineSet1025 = new SoLineSet();
SoLineSet1025->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1026 = new SoColorRGBA();
SoColorRGBA1026->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet1025->addChild(*SoColorRGBA1026);

SoCoordinate* SoCoordinate1027 = new SoCoordinate();
SoCoordinate1027->setPoint(new float[]{0.1984,0.8663,-0.0583,0.3,0.75,0.45}, 6);
SoLineSet1025->setCoord(*SoCoordinate1027);

SoShape1024->setGeometry(*SoLineSet1025);

SoHAnimSegment988->addChild(*SoShape1024);

SoHAnimSite* SoHAnimSite1028 = new SoHAnimSite();
SoHAnimSite1028->setDEF(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimSite1028->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite1028->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoTouchSensor* SoTouchSensor1029 = new SoTouchSensor();
SoTouchSensor1029->setDescription(QString("HAnimSite l_metacarpal_pha2_pt"));
SoHAnimSite1028->addChild(*SoTouchSensor1029);

SoShape* SoShape1030 = new SoShape();
SoShape1030->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1028->addChild(*SoShape1030);

SoHAnimSegment988->addChild(*SoHAnimSite1028);

SoHAnimSite* SoHAnimSite1031 = new SoHAnimSite();
SoHAnimSite1031->setDEF(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimSite1031->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite1031->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoTouchSensor* SoTouchSensor1032 = new SoTouchSensor();
SoTouchSensor1032->setDescription(QString("HAnimSite l_ulnar_styloid_pt"));
SoHAnimSite1031->addChild(*SoTouchSensor1032);

SoShape* SoShape1033 = new SoShape();
SoShape1033->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1031->addChild(*SoShape1033);

SoHAnimSegment988->addChild(*SoHAnimSite1031);

SoHAnimSite* SoHAnimSite1034 = new SoHAnimSite();
SoHAnimSite1034->setDEF(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimSite1034->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite1034->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoTouchSensor* SoTouchSensor1035 = new SoTouchSensor();
SoTouchSensor1035->setDescription(QString("HAnimSite l_metacarpal_pha5_pt"));
SoHAnimSite1034->addChild(*SoTouchSensor1035);

SoShape* SoShape1036 = new SoShape();
SoShape1036->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1034->addChild(*SoShape1036);

SoHAnimSegment988->addChild(*SoHAnimSite1034);

SoHAnimSite* SoHAnimSite1037 = new SoHAnimSite();
SoHAnimSite1037->setDEF(QString("hanim_l_hand_front_view"));
SoHAnimSite1037->X3DNode::setName(QString("l_hand_front_view"));
SoHAnimSite1037->setTranslation(new float[]{0.3,0.75,0.45});
SoTouchSensor* SoTouchSensor1038 = new SoTouchSensor();
SoTouchSensor1038->setDescription(QString("HAnimSite l_hand_front_view"));
SoHAnimSite1037->addChild(*SoTouchSensor1038);

SoShape* SoShape1039 = new SoShape();
SoShape1039->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1037->addChild(*SoShape1039);

SoViewpoint* SoViewpoint1040 = new SoViewpoint();
SoViewpoint1040->setDEF(QString("hanim_l_hand_front_viewpoint"));
SoViewpoint1040->setDescription(QString("left hand front"));
SoViewpoint1040->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1040->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite1037->addChild(*SoViewpoint1040);

SoAnchor* SoAnchor1041 = new SoAnchor();
SoAnchor1041->setDescription(QString("HAnimSite hanim_l_hand_front_view Viewpoint"));
SoAnchor1041->setUrl(new QString[]{QString("#hanim_l_hand_front_viewpoint")}, 1);
SoLOD* SoLOD1042 = new SoLOD();
SoLOD1042->setForceTransitions(true);
SoLOD1042->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1043 = new SoWorldInfo();
SoWorldInfo1043->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1042->addChildren(*SoWorldInfo1043);

SoShape* SoShape1044 = new SoShape();
SoShape1044->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1042->addChildren(SoShape1044);

SoAnchor1041->addChild(*SoLOD1042);

SoHAnimSite1037->addChild(SoAnchor1041);

SoHAnimSegment988->addChild(*SoHAnimSite1037);

SoHAnimJoint987->addChildren(*SoHAnimSegment988);

SoHAnimJoint* SoHAnimJoint1045 = new SoHAnimJoint();
SoHAnimJoint1045->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint1045->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint1045->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment1046 = new SoHAnimSegment();
SoHAnimSegment1046->setDEF(QString("hanim_l_metacarpal_1"));
SoHAnimSegment1046->X3DNode::setName(QString("l_metacarpal_1"));
SoTouchSensor* SoTouchSensor1047 = new SoTouchSensor();
SoTouchSensor1047->setDescription(QString("HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1"));
SoHAnimSegment1046->addChild(*SoTouchSensor1047);

SoTransform* SoTransform1048 = new SoTransform();
SoTransform1048->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape1049 = new SoShape();
SoShape1049->setUSE(QString("HAnimJointShape"));
SoTransform1048->addChild(*SoShape1049);

SoHAnimSegment1046->addChild(*SoTransform1048);

SoShape* SoShape1050 = new SoShape();
SoLineSet* SoLineSet1051 = new SoLineSet();
SoLineSet1051->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1052 = new SoColorRGBA();
SoColorRGBA1052->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1051->addChild(*SoColorRGBA1052);

SoCoordinate* SoCoordinate1053 = new SoCoordinate();
SoCoordinate1053->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoLineSet1051->setCoord(*SoCoordinate1053);

SoShape1050->setGeometry(*SoLineSet1051);

SoHAnimSegment1046->addChild(*SoShape1050);

SoHAnimJoint1045->addChildren(*SoHAnimSegment1046);

SoHAnimJoint* SoHAnimJoint1054 = new SoHAnimJoint();
SoHAnimJoint1054->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint1054->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint1054->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment1055 = new SoHAnimSegment();
SoHAnimSegment1055->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimSegment1055->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoTouchSensor* SoTouchSensor1056 = new SoTouchSensor();
SoTouchSensor1056->setDescription(QString("HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1"));
SoHAnimSegment1055->addChild(*SoTouchSensor1056);

SoTransform* SoTransform1057 = new SoTransform();
SoTransform1057->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape1058 = new SoShape();
SoShape1058->setUSE(QString("HAnimJointShape"));
SoTransform1057->addChild(*SoShape1058);

SoHAnimSegment1055->addChild(*SoTransform1057);

SoShape* SoShape1059 = new SoShape();
SoLineSet* SoLineSet1060 = new SoLineSet();
SoLineSet1060->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1061 = new SoColorRGBA();
SoColorRGBA1061->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1060->addChild(*SoColorRGBA1061);

SoCoordinate* SoCoordinate1062 = new SoCoordinate();
SoCoordinate1062->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoLineSet1060->setCoord(*SoCoordinate1062);

SoShape1059->setGeometry(*SoLineSet1060);

SoHAnimSegment1055->addChild(*SoShape1059);

SoHAnimJoint1054->addChildren(*SoHAnimSegment1055);

SoHAnimJoint* SoHAnimJoint1063 = new SoHAnimJoint();
SoHAnimJoint1063->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint1063->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint1063->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment1064 = new SoHAnimSegment();
SoHAnimSegment1064->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimSegment1064->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoTouchSensor* SoTouchSensor1065 = new SoTouchSensor();
SoTouchSensor1065->setDescription(QString("HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1"));
SoHAnimSegment1064->addChild(*SoTouchSensor1065);

SoTransform* SoTransform1066 = new SoTransform();
SoTransform1066->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape1067 = new SoShape();
SoShape1067->setUSE(QString("HAnimJointShape"));
SoTransform1066->addChild(*SoShape1067);

SoHAnimSegment1064->addChild(*SoTransform1066);

SoShape* SoShape1068 = new SoShape();
SoLineSet* SoLineSet1069 = new SoLineSet();
SoLineSet1069->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1070 = new SoColorRGBA();
SoColorRGBA1070->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1069->addChild(*SoColorRGBA1070);

SoCoordinate* SoCoordinate1071 = new SoCoordinate();
SoCoordinate1071->setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
SoLineSet1069->setCoord(*SoCoordinate1071);

SoShape1068->setGeometry(*SoLineSet1069);

SoHAnimSegment1064->addChild(*SoShape1068);

SoHAnimSite* SoHAnimSite1072 = new SoHAnimSite();
SoHAnimSite1072->setDEF(QString("hanim_l_carpal_distal_phalanx_1_pt"));
SoHAnimSite1072->X3DNode::setName(QString("l_carpal_distal_phalanx_1_pt"));
SoHAnimSite1072->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoTouchSensor* SoTouchSensor1073 = new SoTouchSensor();
SoTouchSensor1073->setDescription(QString("HAnimSite l_thumb_distal_tip"));
SoHAnimSite1072->addChild(*SoTouchSensor1073);

SoShape* SoShape1074 = new SoShape();
SoShape1074->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1072->addChild(*SoShape1074);

SoHAnimSegment1064->addChild(*SoHAnimSite1072);

SoHAnimJoint1063->addChildren(*SoHAnimSegment1064);

SoHAnimJoint1054->addChildren(*SoHAnimJoint1063);

SoHAnimJoint1045->addChildren(*SoHAnimJoint1054);

SoHAnimJoint987->addChildren(*SoHAnimJoint1045);

SoHAnimJoint* SoHAnimJoint1075 = new SoHAnimJoint();
SoHAnimJoint1075->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint1075->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint1075->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment1076 = new SoHAnimSegment();
SoHAnimSegment1076->setDEF(QString("hanim_l_metacarpal_2"));
SoHAnimSegment1076->X3DNode::setName(QString("l_metacarpal_2"));
SoTouchSensor* SoTouchSensor1077 = new SoTouchSensor();
SoTouchSensor1077->setDescription(QString("HAnimJoint l_index0, HAnimSegment l_metacarpal_2"));
SoHAnimSegment1076->addChild(*SoTouchSensor1077);

SoTransform* SoTransform1078 = new SoTransform();
SoTransform1078->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape1079 = new SoShape();
SoShape1079->setUSE(QString("HAnimJointShape"));
SoTransform1078->addChild(*SoShape1079);

SoHAnimSegment1076->addChild(*SoTransform1078);

SoShape* SoShape1080 = new SoShape();
SoLineSet* SoLineSet1081 = new SoLineSet();
SoLineSet1081->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1082 = new SoColorRGBA();
SoColorRGBA1082->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1081->addChild(*SoColorRGBA1082);

SoCoordinate* SoCoordinate1083 = new SoCoordinate();
SoCoordinate1083->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoLineSet1081->setCoord(*SoCoordinate1083);

SoShape1080->setGeometry(*SoLineSet1081);

SoHAnimSegment1076->addChild(*SoShape1080);

SoHAnimJoint1075->addChildren(*SoHAnimSegment1076);

SoHAnimJoint* SoHAnimJoint1084 = new SoHAnimJoint();
SoHAnimJoint1084->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint1084->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint1084->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment1085 = new SoHAnimSegment();
SoHAnimSegment1085->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimSegment1085->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor1086 = new SoTouchSensor();
SoTouchSensor1086->setDescription(QString("HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2"));
SoHAnimSegment1085->addChild(*SoTouchSensor1086);

SoTransform* SoTransform1087 = new SoTransform();
SoTransform1087->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape1088 = new SoShape();
SoShape1088->setUSE(QString("HAnimJointShape"));
SoTransform1087->addChild(*SoShape1088);

SoHAnimSegment1085->addChild(*SoTransform1087);

SoShape* SoShape1089 = new SoShape();
SoLineSet* SoLineSet1090 = new SoLineSet();
SoLineSet1090->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1091 = new SoColorRGBA();
SoColorRGBA1091->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1090->addChild(*SoColorRGBA1091);

SoCoordinate* SoCoordinate1092 = new SoCoordinate();
SoCoordinate1092->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoLineSet1090->setCoord(*SoCoordinate1092);

SoShape1089->setGeometry(*SoLineSet1090);

SoHAnimSegment1085->addChild(*SoShape1089);

SoHAnimJoint1084->addChildren(*SoHAnimSegment1085);

SoHAnimJoint* SoHAnimJoint1093 = new SoHAnimJoint();
SoHAnimJoint1093->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1093->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1093->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment1094 = new SoHAnimSegment();
SoHAnimSegment1094->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimSegment1094->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoTouchSensor* SoTouchSensor1095 = new SoTouchSensor();
SoTouchSensor1095->setDescription(QString("HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2"));
SoHAnimSegment1094->addChild(*SoTouchSensor1095);

SoTransform* SoTransform1096 = new SoTransform();
SoTransform1096->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape1097 = new SoShape();
SoShape1097->setUSE(QString("HAnimJointShape"));
SoTransform1096->addChild(*SoShape1097);

SoHAnimSegment1094->addChild(*SoTransform1096);

SoShape* SoShape1098 = new SoShape();
SoLineSet* SoLineSet1099 = new SoLineSet();
SoLineSet1099->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1100 = new SoColorRGBA();
SoColorRGBA1100->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1099->addChild(*SoColorRGBA1100);

SoCoordinate* SoCoordinate1101 = new SoCoordinate();
SoCoordinate1101->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoLineSet1099->setCoord(*SoCoordinate1101);

SoShape1098->setGeometry(*SoLineSet1099);

SoHAnimSegment1094->addChild(*SoShape1098);

SoHAnimJoint1093->addChildren(*SoHAnimSegment1094);

SoHAnimJoint* SoHAnimJoint1102 = new SoHAnimJoint();
SoHAnimJoint1102->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1102->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1102->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment1103 = new SoHAnimSegment();
SoHAnimSegment1103->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimSegment1103->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor1104 = new SoTouchSensor();
SoTouchSensor1104->setDescription(QString("HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2"));
SoHAnimSegment1103->addChild(*SoTouchSensor1104);

SoTransform* SoTransform1105 = new SoTransform();
SoTransform1105->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape1106 = new SoShape();
SoShape1106->setUSE(QString("HAnimJointShape"));
SoTransform1105->addChild(*SoShape1106);

SoHAnimSegment1103->addChild(*SoTransform1105);

SoShape* SoShape1107 = new SoShape();
SoLineSet* SoLineSet1108 = new SoLineSet();
SoLineSet1108->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1109 = new SoColorRGBA();
SoColorRGBA1109->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1108->addChild(*SoColorRGBA1109);

SoCoordinate* SoCoordinate1110 = new SoCoordinate();
SoCoordinate1110->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
SoLineSet1108->setCoord(*SoCoordinate1110);

SoShape1107->setGeometry(*SoLineSet1108);

SoHAnimSegment1103->addChild(*SoShape1107);

SoShape* SoShape1111 = new SoShape();
SoLineSet* SoLineSet1112 = new SoLineSet();
SoLineSet1112->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1113 = new SoColorRGBA();
SoColorRGBA1113->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1112->addChild(*SoColorRGBA1113);

SoCoordinate* SoCoordinate1114 = new SoCoordinate();
SoCoordinate1114->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482}, 6);
SoLineSet1112->setCoord(*SoCoordinate1114);

SoShape1111->setGeometry(*SoLineSet1112);

SoHAnimSegment1103->addChild(*SoShape1111);

SoHAnimSite* SoHAnimSite1115 = new SoHAnimSite();
SoHAnimSite1115->setDEF(QString("hanim_l_carpal_distal_phalanx_2_pt"));
SoHAnimSite1115->X3DNode::setName(QString("l_carpal_distal_phalanx_2_pt"));
SoHAnimSite1115->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoTouchSensor* SoTouchSensor1116 = new SoTouchSensor();
SoTouchSensor1116->setDescription(QString("HAnimSite l_index_distal_tip"));
SoHAnimSite1115->addChild(*SoTouchSensor1116);

SoShape* SoShape1117 = new SoShape();
SoShape1117->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1115->addChild(*SoShape1117);

SoHAnimSegment1103->addChild(*SoHAnimSite1115);

SoHAnimSite* SoHAnimSite1118 = new SoHAnimSite();
SoHAnimSite1118->setDEF(QString("hanim_l_dactylion_pt"));
SoHAnimSite1118->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite1118->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoTouchSensor* SoTouchSensor1119 = new SoTouchSensor();
SoTouchSensor1119->setDescription(QString("HAnimSite l_dactylion_pt"));
SoHAnimSite1118->addChild(*SoTouchSensor1119);

SoShape* SoShape1120 = new SoShape();
SoShape1120->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1118->addChild(*SoShape1120);

SoHAnimSegment1103->addChild(*SoHAnimSite1118);

SoHAnimJoint1102->addChildren(*SoHAnimSegment1103);

SoHAnimJoint1093->addChildren(*SoHAnimJoint1102);

SoHAnimJoint1084->addChildren(*SoHAnimJoint1093);

SoHAnimJoint1075->addChildren(*SoHAnimJoint1084);

SoHAnimJoint987->addChildren(*SoHAnimJoint1075);

SoHAnimJoint* SoHAnimJoint1121 = new SoHAnimJoint();
SoHAnimJoint1121->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint1121->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint1121->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment1122 = new SoHAnimSegment();
SoHAnimSegment1122->setDEF(QString("hanim_l_metacarpal_3"));
SoHAnimSegment1122->X3DNode::setName(QString("l_metacarpal_3"));
SoTouchSensor* SoTouchSensor1123 = new SoTouchSensor();
SoTouchSensor1123->setDescription(QString("HAnimJoint l_middle0, HAnimSegment l_metacarpal_3"));
SoHAnimSegment1122->addChild(*SoTouchSensor1123);

SoTransform* SoTransform1124 = new SoTransform();
SoTransform1124->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoShape* SoShape1125 = new SoShape();
SoShape1125->setUSE(QString("HAnimJointShape"));
SoTransform1124->addChild(*SoShape1125);

SoHAnimSegment1122->addChild(*SoTransform1124);

SoShape* SoShape1126 = new SoShape();
SoLineSet* SoLineSet1127 = new SoLineSet();
SoLineSet1127->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1128 = new SoColorRGBA();
SoColorRGBA1128->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1127->addChild(*SoColorRGBA1128);

SoCoordinate* SoCoordinate1129 = new SoCoordinate();
SoCoordinate1129->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoLineSet1127->setCoord(*SoCoordinate1129);

SoShape1126->setGeometry(*SoLineSet1127);

SoHAnimSegment1122->addChild(*SoShape1126);

SoHAnimJoint1121->addChildren(*SoHAnimSegment1122);

SoHAnimJoint* SoHAnimJoint1130 = new SoHAnimJoint();
SoHAnimJoint1130->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint1130->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint1130->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment1131 = new SoHAnimSegment();
SoHAnimSegment1131->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimSegment1131->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoTouchSensor* SoTouchSensor1132 = new SoTouchSensor();
SoTouchSensor1132->setDescription(QString("HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3"));
SoHAnimSegment1131->addChild(*SoTouchSensor1132);

SoTransform* SoTransform1133 = new SoTransform();
SoTransform1133->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoShape* SoShape1134 = new SoShape();
SoShape1134->setUSE(QString("HAnimJointShape"));
SoTransform1133->addChild(*SoShape1134);

SoHAnimSegment1131->addChild(*SoTransform1133);

SoShape* SoShape1135 = new SoShape();
SoLineSet* SoLineSet1136 = new SoLineSet();
SoLineSet1136->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1137 = new SoColorRGBA();
SoColorRGBA1137->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1136->addChild(*SoColorRGBA1137);

SoCoordinate* SoCoordinate1138 = new SoCoordinate();
SoCoordinate1138->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoLineSet1136->setCoord(*SoCoordinate1138);

SoShape1135->setGeometry(*SoLineSet1136);

SoHAnimSegment1131->addChild(*SoShape1135);

SoHAnimJoint1130->addChildren(*SoHAnimSegment1131);

SoHAnimJoint* SoHAnimJoint1139 = new SoHAnimJoint();
SoHAnimJoint1139->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1139->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1139->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment1140 = new SoHAnimSegment();
SoHAnimSegment1140->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimSegment1140->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoTouchSensor* SoTouchSensor1141 = new SoTouchSensor();
SoTouchSensor1141->setDescription(QString("HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3"));
SoHAnimSegment1140->addChild(*SoTouchSensor1141);

SoTransform* SoTransform1142 = new SoTransform();
SoTransform1142->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoShape* SoShape1143 = new SoShape();
SoShape1143->setUSE(QString("HAnimJointShape"));
SoTransform1142->addChild(*SoShape1143);

SoHAnimSegment1140->addChild(*SoTransform1142);

SoShape* SoShape1144 = new SoShape();
SoLineSet* SoLineSet1145 = new SoLineSet();
SoLineSet1145->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1146 = new SoColorRGBA();
SoColorRGBA1146->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1145->addChild(*SoColorRGBA1146);

SoCoordinate* SoCoordinate1147 = new SoCoordinate();
SoCoordinate1147->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoLineSet1145->setCoord(*SoCoordinate1147);

SoShape1144->setGeometry(*SoLineSet1145);

SoHAnimSegment1140->addChild(*SoShape1144);

SoHAnimJoint1139->addChildren(*SoHAnimSegment1140);

SoHAnimJoint* SoHAnimJoint1148 = new SoHAnimJoint();
SoHAnimJoint1148->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1148->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1148->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment1149 = new SoHAnimSegment();
SoHAnimSegment1149->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimSegment1149->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoTouchSensor* SoTouchSensor1150 = new SoTouchSensor();
SoTouchSensor1150->setDescription(QString("HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3"));
SoHAnimSegment1149->addChild(*SoTouchSensor1150);

SoTransform* SoTransform1151 = new SoTransform();
SoTransform1151->setTranslation(new float[]{0.2026,0.7011,-0.0494});
SoShape* SoShape1152 = new SoShape();
SoShape1152->setUSE(QString("HAnimJointShape"));
SoTransform1151->addChild(*SoShape1152);

SoHAnimSegment1149->addChild(*SoTransform1151);

SoShape* SoShape1153 = new SoShape();
SoLineSet* SoLineSet1154 = new SoLineSet();
SoLineSet1154->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1155 = new SoColorRGBA();
SoColorRGBA1155->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1154->addChild(*SoColorRGBA1155);

SoCoordinate* SoCoordinate1156 = new SoCoordinate();
SoCoordinate1156->setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
SoLineSet1154->setCoord(*SoCoordinate1156);

SoShape1153->setGeometry(*SoLineSet1154);

SoHAnimSegment1149->addChild(*SoShape1153);

SoHAnimSite* SoHAnimSite1157 = new SoHAnimSite();
SoHAnimSite1157->setDEF(QString("hanim_l_carpal_distal_phalanx_3_pt"));
SoHAnimSite1157->X3DNode::setName(QString("l_carpal_distal_phalanx_3_pt"));
SoHAnimSite1157->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoTouchSensor* SoTouchSensor1158 = new SoTouchSensor();
SoTouchSensor1158->setDescription(QString("HAnimSite l_middle_distal_tip"));
SoHAnimSite1157->addChild(*SoTouchSensor1158);

SoShape* SoShape1159 = new SoShape();
SoShape1159->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1157->addChild(*SoShape1159);

SoHAnimSegment1149->addChild(*SoHAnimSite1157);

SoHAnimJoint1148->addChildren(*SoHAnimSegment1149);

SoHAnimJoint1139->addChildren(*SoHAnimJoint1148);

SoHAnimJoint1130->addChildren(*SoHAnimJoint1139);

SoHAnimJoint1121->addChildren(*SoHAnimJoint1130);

SoHAnimJoint987->addChildren(*SoHAnimJoint1121);

SoHAnimJoint* SoHAnimJoint1160 = new SoHAnimJoint();
SoHAnimJoint1160->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint1160->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint1160->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment1161 = new SoHAnimSegment();
SoHAnimSegment1161->setDEF(QString("hanim_l_metacarpal_4"));
SoHAnimSegment1161->X3DNode::setName(QString("l_metacarpal_4"));
SoTouchSensor* SoTouchSensor1162 = new SoTouchSensor();
SoTouchSensor1162->setDescription(QString("HAnimJoint l_ring0, HAnimSegment l_metacarpal_4"));
SoHAnimSegment1161->addChild(*SoTouchSensor1162);

SoTransform* SoTransform1163 = new SoTransform();
SoTransform1163->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoShape* SoShape1164 = new SoShape();
SoShape1164->setUSE(QString("HAnimJointShape"));
SoTransform1163->addChild(*SoShape1164);

SoHAnimSegment1161->addChild(*SoTransform1163);

SoShape* SoShape1165 = new SoShape();
SoLineSet* SoLineSet1166 = new SoLineSet();
SoLineSet1166->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1167 = new SoColorRGBA();
SoColorRGBA1167->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1166->addChild(*SoColorRGBA1167);

SoCoordinate* SoCoordinate1168 = new SoCoordinate();
SoCoordinate1168->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoLineSet1166->setCoord(*SoCoordinate1168);

SoShape1165->setGeometry(*SoLineSet1166);

SoHAnimSegment1161->addChild(*SoShape1165);

SoHAnimJoint1160->addChildren(*SoHAnimSegment1161);

SoHAnimJoint* SoHAnimJoint1169 = new SoHAnimJoint();
SoHAnimJoint1169->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint1169->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint1169->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment1170 = new SoHAnimSegment();
SoHAnimSegment1170->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimSegment1170->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoTouchSensor* SoTouchSensor1171 = new SoTouchSensor();
SoTouchSensor1171->setDescription(QString("HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4"));
SoHAnimSegment1170->addChild(*SoTouchSensor1171);

SoTransform* SoTransform1172 = new SoTransform();
SoTransform1172->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoShape* SoShape1173 = new SoShape();
SoShape1173->setUSE(QString("HAnimJointShape"));
SoTransform1172->addChild(*SoShape1173);

SoHAnimSegment1170->addChild(*SoTransform1172);

SoShape* SoShape1174 = new SoShape();
SoLineSet* SoLineSet1175 = new SoLineSet();
SoLineSet1175->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1176 = new SoColorRGBA();
SoColorRGBA1176->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1175->addChild(*SoColorRGBA1176);

SoCoordinate* SoCoordinate1177 = new SoCoordinate();
SoCoordinate1177->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoLineSet1175->setCoord(*SoCoordinate1177);

SoShape1174->setGeometry(*SoLineSet1175);

SoHAnimSegment1170->addChild(*SoShape1174);

SoHAnimJoint1169->addChildren(*SoHAnimSegment1170);

SoHAnimJoint* SoHAnimJoint1178 = new SoHAnimJoint();
SoHAnimJoint1178->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1178->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1178->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment1179 = new SoHAnimSegment();
SoHAnimSegment1179->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimSegment1179->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoTouchSensor* SoTouchSensor1180 = new SoTouchSensor();
SoTouchSensor1180->setDescription(QString("HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4"));
SoHAnimSegment1179->addChild(*SoTouchSensor1180);

SoTransform* SoTransform1181 = new SoTransform();
SoTransform1181->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoShape* SoShape1182 = new SoShape();
SoShape1182->setUSE(QString("HAnimJointShape"));
SoTransform1181->addChild(*SoShape1182);

SoHAnimSegment1179->addChild(*SoTransform1181);

SoShape* SoShape1183 = new SoShape();
SoLineSet* SoLineSet1184 = new SoLineSet();
SoLineSet1184->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1185 = new SoColorRGBA();
SoColorRGBA1185->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1184->addChild(*SoColorRGBA1185);

SoCoordinate* SoCoordinate1186 = new SoCoordinate();
SoCoordinate1186->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoLineSet1184->setCoord(*SoCoordinate1186);

SoShape1183->setGeometry(*SoLineSet1184);

SoHAnimSegment1179->addChild(*SoShape1183);

SoHAnimJoint1178->addChildren(*SoHAnimSegment1179);

SoHAnimJoint* SoHAnimJoint1187 = new SoHAnimJoint();
SoHAnimJoint1187->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1187->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1187->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment1188 = new SoHAnimSegment();
SoHAnimSegment1188->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimSegment1188->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoTouchSensor* SoTouchSensor1189 = new SoTouchSensor();
SoTouchSensor1189->setDescription(QString("HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4"));
SoHAnimSegment1188->addChild(*SoTouchSensor1189);

SoTransform* SoTransform1190 = new SoTransform();
SoTransform1190->setTranslation(new float[]{0.1983,0.7045,-0.0767});
SoShape* SoShape1191 = new SoShape();
SoShape1191->setUSE(QString("HAnimJointShape"));
SoTransform1190->addChild(*SoShape1191);

SoHAnimSegment1188->addChild(*SoTransform1190);

SoShape* SoShape1192 = new SoShape();
SoLineSet* SoLineSet1193 = new SoLineSet();
SoLineSet1193->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1194 = new SoColorRGBA();
SoColorRGBA1194->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1193->addChild(*SoColorRGBA1194);

SoCoordinate* SoCoordinate1195 = new SoCoordinate();
SoCoordinate1195->setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
SoLineSet1193->setCoord(*SoCoordinate1195);

SoShape1192->setGeometry(*SoLineSet1193);

SoHAnimSegment1188->addChild(*SoShape1192);

SoHAnimSite* SoHAnimSite1196 = new SoHAnimSite();
SoHAnimSite1196->setDEF(QString("hanim_l_carpal_distal_phalanx_4_pt"));
SoHAnimSite1196->X3DNode::setName(QString("l_carpal_distal_phalanx_4_pt"));
SoHAnimSite1196->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoTouchSensor* SoTouchSensor1197 = new SoTouchSensor();
SoTouchSensor1197->setDescription(QString("HAnimSite l_ring_distal_tip"));
SoHAnimSite1196->addChild(*SoTouchSensor1197);

SoShape* SoShape1198 = new SoShape();
SoShape1198->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1196->addChild(*SoShape1198);

SoHAnimSegment1188->addChild(*SoHAnimSite1196);

SoHAnimJoint1187->addChildren(*SoHAnimSegment1188);

SoHAnimJoint1178->addChildren(*SoHAnimJoint1187);

SoHAnimJoint1169->addChildren(*SoHAnimJoint1178);

SoHAnimJoint1160->addChildren(*SoHAnimJoint1169);

SoHAnimJoint987->addChildren(*SoHAnimJoint1160);

SoHAnimJoint* SoHAnimJoint1199 = new SoHAnimJoint();
SoHAnimJoint1199->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint1199->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint1199->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment1200 = new SoHAnimSegment();
SoHAnimSegment1200->setDEF(QString("hanim_l_metacarpal_5"));
SoHAnimSegment1200->X3DNode::setName(QString("l_metacarpal_5"));
SoTouchSensor* SoTouchSensor1201 = new SoTouchSensor();
SoTouchSensor1201->setDescription(QString("HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5"));
SoHAnimSegment1200->addChild(*SoTouchSensor1201);

SoTransform* SoTransform1202 = new SoTransform();
SoTransform1202->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoShape* SoShape1203 = new SoShape();
SoShape1203->setUSE(QString("HAnimJointShape"));
SoTransform1202->addChild(*SoShape1203);

SoHAnimSegment1200->addChild(*SoTransform1202);

SoShape* SoShape1204 = new SoShape();
SoLineSet* SoLineSet1205 = new SoLineSet();
SoLineSet1205->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1206 = new SoColorRGBA();
SoColorRGBA1206->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1205->addChild(*SoColorRGBA1206);

SoCoordinate* SoCoordinate1207 = new SoCoordinate();
SoCoordinate1207->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoLineSet1205->setCoord(*SoCoordinate1207);

SoShape1204->setGeometry(*SoLineSet1205);

SoHAnimSegment1200->addChild(*SoShape1204);

SoHAnimJoint1199->addChildren(*SoHAnimSegment1200);

SoHAnimJoint* SoHAnimJoint1208 = new SoHAnimJoint();
SoHAnimJoint1208->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint1208->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint1208->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment1209 = new SoHAnimSegment();
SoHAnimSegment1209->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimSegment1209->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoTouchSensor* SoTouchSensor1210 = new SoTouchSensor();
SoTouchSensor1210->setDescription(QString("HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5"));
SoHAnimSegment1209->addChild(*SoTouchSensor1210);

SoTransform* SoTransform1211 = new SoTransform();
SoTransform1211->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoShape* SoShape1212 = new SoShape();
SoShape1212->setUSE(QString("HAnimJointShape"));
SoTransform1211->addChild(*SoShape1212);

SoHAnimSegment1209->addChild(*SoTransform1211);

SoShape* SoShape1213 = new SoShape();
SoLineSet* SoLineSet1214 = new SoLineSet();
SoLineSet1214->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1215 = new SoColorRGBA();
SoColorRGBA1215->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1214->addChild(*SoColorRGBA1215);

SoCoordinate* SoCoordinate1216 = new SoCoordinate();
SoCoordinate1216->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoLineSet1214->setCoord(*SoCoordinate1216);

SoShape1213->setGeometry(*SoLineSet1214);

SoHAnimSegment1209->addChild(*SoShape1213);

SoHAnimJoint1208->addChildren(*SoHAnimSegment1209);

SoHAnimJoint* SoHAnimJoint1217 = new SoHAnimJoint();
SoHAnimJoint1217->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1217->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1217->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment1218 = new SoHAnimSegment();
SoHAnimSegment1218->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimSegment1218->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoTouchSensor* SoTouchSensor1219 = new SoTouchSensor();
SoTouchSensor1219->setDescription(QString("HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5"));
SoHAnimSegment1218->addChild(*SoTouchSensor1219);

SoTransform* SoTransform1220 = new SoTransform();
SoTransform1220->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoShape* SoShape1221 = new SoShape();
SoShape1221->setUSE(QString("HAnimJointShape"));
SoTransform1220->addChild(*SoShape1221);

SoHAnimSegment1218->addChild(*SoTransform1220);

SoShape* SoShape1222 = new SoShape();
SoLineSet* SoLineSet1223 = new SoLineSet();
SoLineSet1223->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1224 = new SoColorRGBA();
SoColorRGBA1224->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1223->addChild(*SoColorRGBA1224);

SoCoordinate* SoCoordinate1225 = new SoCoordinate();
SoCoordinate1225->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoLineSet1223->setCoord(*SoCoordinate1225);

SoShape1222->setGeometry(*SoLineSet1223);

SoHAnimSegment1218->addChild(*SoShape1222);

SoHAnimJoint1217->addChildren(*SoHAnimSegment1218);

SoHAnimJoint* SoHAnimJoint1226 = new SoHAnimJoint();
SoHAnimJoint1226->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1226->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1226->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment1227 = new SoHAnimSegment();
SoHAnimSegment1227->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimSegment1227->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoTouchSensor* SoTouchSensor1228 = new SoTouchSensor();
SoTouchSensor1228->setDescription(QString("HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5"));
SoHAnimSegment1227->addChild(*SoTouchSensor1228);

SoTransform* SoTransform1229 = new SoTransform();
SoTransform1229->setTranslation(new float[]{0.1948,0.7277,-0.1017});
SoShape* SoShape1230 = new SoShape();
SoShape1230->setUSE(QString("HAnimJointShape"));
SoTransform1229->addChild(*SoShape1230);

SoHAnimSegment1227->addChild(*SoTransform1229);

SoShape* SoShape1231 = new SoShape();
SoLineSet* SoLineSet1232 = new SoLineSet();
SoLineSet1232->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1233 = new SoColorRGBA();
SoColorRGBA1233->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1232->addChild(*SoColorRGBA1233);

SoCoordinate* SoCoordinate1234 = new SoCoordinate();
SoCoordinate1234->setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
SoLineSet1232->setCoord(*SoCoordinate1234);

SoShape1231->setGeometry(*SoLineSet1232);

SoHAnimSegment1227->addChild(*SoShape1231);

SoHAnimSite* SoHAnimSite1235 = new SoHAnimSite();
SoHAnimSite1235->setDEF(QString("hanim_l_carpal_distal_phalanx_5_pt"));
SoHAnimSite1235->X3DNode::setName(QString("l_carpal_distal_phalanx_5_pt"));
SoHAnimSite1235->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoTouchSensor* SoTouchSensor1236 = new SoTouchSensor();
SoTouchSensor1236->setDescription(QString("HAnimSite l_pinky_distal_tip"));
SoHAnimSite1235->addChild(*SoTouchSensor1236);

SoShape* SoShape1237 = new SoShape();
SoShape1237->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1235->addChild(*SoShape1237);

SoHAnimSegment1227->addChild(*SoHAnimSite1235);

SoHAnimJoint1226->addChildren(*SoHAnimSegment1227);

SoHAnimJoint1217->addChildren(*SoHAnimJoint1226);

SoHAnimJoint1208->addChildren(*SoHAnimJoint1217);

SoHAnimJoint1199->addChildren(*SoHAnimJoint1208);

SoHAnimJoint987->addChildren(*SoHAnimJoint1199);

SoHAnimJoint950->addChildren(*SoHAnimJoint987);

SoHAnimJoint934->addChildren(*SoHAnimJoint950);

SoHAnimJoint925->addChildren(*SoHAnimJoint934);

SoHAnimJoint888->addChildren(*SoHAnimJoint925);

SoHAnimJoint600->addChildren(*SoHAnimJoint888);

SoHAnimJoint* SoHAnimJoint1238 = new SoHAnimJoint();
SoHAnimJoint1238->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint1238->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint1238->setCenter(new float[]{-0.082,1.4488,-0.0353});
SoHAnimSegment* SoHAnimSegment1239 = new SoHAnimSegment();
SoHAnimSegment1239->setDEF(QString("hanim_r_clavicle"));
SoHAnimSegment1239->X3DNode::setName(QString("r_clavicle"));
SoTouchSensor* SoTouchSensor1240 = new SoTouchSensor();
SoTouchSensor1240->setDescription(QString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle"));
SoHAnimSegment1239->addChild(*SoTouchSensor1240);

SoTransform* SoTransform1241 = new SoTransform();
SoTransform1241->setTranslation(new float[]{-0.082,1.4488,-0.0353});
SoShape* SoShape1242 = new SoShape();
SoShape1242->setUSE(QString("HAnimJointShape"));
SoTransform1241->addChild(*SoShape1242);

SoHAnimSegment1239->addChild(*SoTransform1241);

SoShape* SoShape1243 = new SoShape();
SoLineSet* SoLineSet1244 = new SoLineSet();
SoLineSet1244->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1245 = new SoColorRGBA();
SoColorRGBA1245->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1244->addChild(*SoColorRGBA1245);

SoCoordinate* SoCoordinate1246 = new SoCoordinate();
SoCoordinate1246->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424}, 6);
SoLineSet1244->setCoord(*SoCoordinate1246);

SoShape1243->setGeometry(*SoLineSet1244);

SoHAnimSegment1239->addChild(*SoShape1243);

SoShape* SoShape1247 = new SoShape();
SoLineSet* SoLineSet1248 = new SoLineSet();
SoLineSet1248->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1249 = new SoColorRGBA();
SoColorRGBA1249->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1248->addChild(*SoColorRGBA1249);

SoCoordinate* SoCoordinate1250 = new SoCoordinate();
SoCoordinate1250->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04}, 6);
SoLineSet1248->setCoord(*SoCoordinate1250);

SoShape1247->setGeometry(*SoLineSet1248);

SoHAnimSegment1239->addChild(*SoShape1247);

SoShape* SoShape1251 = new SoShape();
SoLineSet* SoLineSet1252 = new SoLineSet();
SoLineSet1252->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1253 = new SoColorRGBA();
SoColorRGBA1253->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1252->addChild(*SoColorRGBA1253);

SoCoordinate* SoCoordinate1254 = new SoCoordinate();
SoCoordinate1254->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431}, 6);
SoLineSet1252->setCoord(*SoCoordinate1254);

SoShape1251->setGeometry(*SoLineSet1252);

SoHAnimSegment1239->addChild(*SoShape1251);

SoShape* SoShape1255 = new SoShape();
SoLineSet* SoLineSet1256 = new SoLineSet();
SoLineSet1256->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1257 = new SoColorRGBA();
SoColorRGBA1257->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1256->addChild(*SoColorRGBA1257);

SoCoordinate* SoCoordinate1258 = new SoCoordinate();
SoCoordinate1258->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031}, 6);
SoLineSet1256->setCoord(*SoCoordinate1258);

SoShape1255->setGeometry(*SoLineSet1256);

SoHAnimSegment1239->addChild(*SoShape1255);

SoShape* SoShape1259 = new SoShape();
SoLineSet* SoLineSet1260 = new SoLineSet();
SoLineSet1260->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1261 = new SoColorRGBA();
SoColorRGBA1261->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1260->addChild(*SoColorRGBA1261);

SoCoordinate* SoCoordinate1262 = new SoCoordinate();
SoCoordinate1262->setPoint(new float[]{-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826}, 6);
SoLineSet1260->setCoord(*SoCoordinate1262);

SoShape1259->setGeometry(*SoLineSet1260);

SoHAnimSegment1239->addChild(*SoShape1259);

SoHAnimSite* SoHAnimSite1263 = new SoHAnimSite();
SoHAnimSite1263->setDEF(QString("hanim_r_clavicle_pt"));
SoHAnimSite1263->X3DNode::setName(QString("r_clavicle_pt"));
SoHAnimSite1263->setTranslation(new float[]{-0.0115,1.4943,0.04});
SoTouchSensor* SoTouchSensor1264 = new SoTouchSensor();
SoTouchSensor1264->setDescription(QString("HAnimSite r_clavicale_pt"));
SoHAnimSite1263->addChild(*SoTouchSensor1264);

SoShape* SoShape1265 = new SoShape();
SoShape1265->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1263->addChild(*SoShape1265);

SoHAnimSegment1239->addChild(*SoHAnimSite1263);

SoHAnimSite* SoHAnimSite1266 = new SoHAnimSite();
SoHAnimSite1266->setDEF(QString("hanim_r_acromion_pt"));
SoHAnimSite1266->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite1266->setTranslation(new float[]{-0.1905,1.4791,-0.0431});
SoTouchSensor* SoTouchSensor1267 = new SoTouchSensor();
SoTouchSensor1267->setDescription(QString("HAnimSite r_acromion_pt"));
SoHAnimSite1266->addChild(*SoTouchSensor1267);

SoShape* SoShape1268 = new SoShape();
SoShape1268->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1266->addChild(*SoShape1268);

SoHAnimSegment1239->addChild(*SoHAnimSite1266);

SoHAnimSite* SoHAnimSite1269 = new SoHAnimSite();
SoHAnimSite1269->setDEF(QString("hanim_r_axilla_proximal_pt"));
SoHAnimSite1269->X3DNode::setName(QString("r_axilla_proximal_pt"));
SoHAnimSite1269->setTranslation(new float[]{-0.1626,1.4072,-0.0031});
SoTouchSensor* SoTouchSensor1270 = new SoTouchSensor();
SoTouchSensor1270->setDescription(QString("HAnimSite r_axilla_ant_pt"));
SoHAnimSite1269->addChild(*SoTouchSensor1270);

SoShape* SoShape1271 = new SoShape();
SoShape1271->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1269->addChild(*SoShape1271);

SoHAnimSegment1239->addChild(*SoHAnimSite1269);

SoHAnimSite* SoHAnimSite1272 = new SoHAnimSite();
SoHAnimSite1272->setDEF(QString("hanim_r_axilla_distal_pt"));
SoHAnimSite1272->X3DNode::setName(QString("r_axilla_distal_pt"));
SoHAnimSite1272->setTranslation(new float[]{-0.1603,1.4098,-0.0826});
SoTouchSensor* SoTouchSensor1273 = new SoTouchSensor();
SoTouchSensor1273->setDescription(QString("HAnimSite r_axilla_post_pt"));
SoHAnimSite1272->addChild(*SoTouchSensor1273);

SoShape* SoShape1274 = new SoShape();
SoShape1274->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1272->addChild(*SoShape1274);

SoHAnimSegment1239->addChild(*SoHAnimSite1272);

SoHAnimJoint1238->addChildren(*SoHAnimSegment1239);

SoHAnimJoint* SoHAnimJoint1275 = new SoHAnimJoint();
SoHAnimJoint1275->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint1275->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint1275->setCenter(new float[]{-0.0962,1.4269,-0.0424});
SoHAnimSegment* SoHAnimSegment1276 = new SoHAnimSegment();
SoHAnimSegment1276->setDEF(QString("hanim_r_scapula"));
SoHAnimSegment1276->X3DNode::setName(QString("r_scapula"));
SoTouchSensor* SoTouchSensor1277 = new SoTouchSensor();
SoTouchSensor1277->setDescription(QString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula"));
SoHAnimSegment1276->addChild(*SoTouchSensor1277);

SoTransform* SoTransform1278 = new SoTransform();
SoTransform1278->setTranslation(new float[]{-0.0962,1.4269,-0.0424});
SoShape* SoShape1279 = new SoShape();
SoShape1279->setUSE(QString("HAnimJointShape"));
SoTransform1278->addChild(*SoShape1279);

SoHAnimSegment1276->addChild(*SoTransform1278);

SoShape* SoShape1280 = new SoShape();
SoLineSet* SoLineSet1281 = new SoLineSet();
SoLineSet1281->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1282 = new SoColorRGBA();
SoColorRGBA1282->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1281->addChild(*SoColorRGBA1282);

SoCoordinate* SoCoordinate1283 = new SoCoordinate();
SoCoordinate1283->setPoint(new float[]{-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387}, 6);
SoLineSet1281->setCoord(*SoCoordinate1283);

SoShape1280->setGeometry(*SoLineSet1281);

SoHAnimSegment1276->addChild(*SoShape1280);

SoHAnimJoint1275->addChildren(*SoHAnimSegment1276);

SoHAnimJoint* SoHAnimJoint1284 = new SoHAnimJoint();
SoHAnimJoint1284->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint1284->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint1284->setCenter(new float[]{-0.2029,1.4376,-0.0387});
SoHAnimSegment* SoHAnimSegment1285 = new SoHAnimSegment();
SoHAnimSegment1285->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment1285->X3DNode::setName(QString("r_upperarm"));
SoTouchSensor* SoTouchSensor1286 = new SoTouchSensor();
SoTouchSensor1286->setDescription(QString("HAnimJoint r_shoulder, HAnimSegment r_upperarm"));
SoHAnimSegment1285->addChild(*SoTouchSensor1286);

SoTransform* SoTransform1287 = new SoTransform();
SoTransform1287->setTranslation(new float[]{-0.2029,1.4376,-0.0387});
SoShape* SoShape1288 = new SoShape();
SoShape1288->setUSE(QString("HAnimJointShape"));
SoTransform1287->addChild(*SoShape1288);

SoHAnimSegment1285->addChild(*SoTransform1287);

SoShape* SoShape1289 = new SoShape();
SoLineSet* SoLineSet1290 = new SoLineSet();
SoLineSet1290->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1291 = new SoColorRGBA();
SoColorRGBA1291->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1290->addChild(*SoColorRGBA1291);

SoCoordinate* SoCoordinate1292 = new SoCoordinate();
SoCoordinate1292->setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682}, 6);
SoLineSet1290->setCoord(*SoCoordinate1292);

SoShape1289->setGeometry(*SoLineSet1290);

SoHAnimSegment1285->addChild(*SoShape1289);

SoShape* SoShape1293 = new SoShape();
SoLineSet* SoLineSet1294 = new SoLineSet();
SoLineSet1294->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1295 = new SoColorRGBA();
SoColorRGBA1295->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1294->addChild(*SoColorRGBA1295);

SoCoordinate* SoCoordinate1296 = new SoCoordinate();
SoCoordinate1296->setPoint(new float[]{-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033}, 6);
SoLineSet1294->setCoord(*SoCoordinate1296);

SoShape1293->setGeometry(*SoLineSet1294);

SoHAnimSegment1285->addChild(*SoShape1293);

SoHAnimSite* SoHAnimSite1297 = new SoHAnimSite();
SoHAnimSite1297->setDEF(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite1297->X3DNode::setName(QString("r_humeral_lateral_epicondyle_pt"));
SoHAnimSite1297->setTranslation(new float[]{-0.2224,1.1517,-0.1033});
SoTouchSensor* SoTouchSensor1298 = new SoTouchSensor();
SoTouchSensor1298->setDescription(QString("HAnimSite r_humeral_lateral_epicn_pt"));
SoHAnimSite1297->addChild(*SoTouchSensor1298);

SoShape* SoShape1299 = new SoShape();
SoShape1299->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1297->addChild(*SoShape1299);

SoHAnimSegment1285->addChild(*SoHAnimSite1297);

SoHAnimJoint1284->addChildren(*SoHAnimSegment1285);

SoHAnimJoint* SoHAnimJoint1300 = new SoHAnimJoint();
SoHAnimJoint1300->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint1300->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint1300->setCenter(new float[]{-0.2014,1.1357,-0.0682});
SoHAnimSegment* SoHAnimSegment1301 = new SoHAnimSegment();
SoHAnimSegment1301->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment1301->X3DNode::setName(QString("r_forearm"));
SoTouchSensor* SoTouchSensor1302 = new SoTouchSensor();
SoTouchSensor1302->setDescription(QString("HAnimJoint r_elbow, HAnimSegment r_forearm"));
SoHAnimSegment1301->addChild(*SoTouchSensor1302);

SoTransform* SoTransform1303 = new SoTransform();
SoTransform1303->setTranslation(new float[]{-0.2014,1.1357,-0.0682});
SoShape* SoShape1304 = new SoShape();
SoShape1304->setUSE(QString("HAnimJointShape"));
SoTransform1303->addChild(*SoShape1304);

SoHAnimSegment1301->addChild(*SoTransform1303);

SoShape* SoShape1305 = new SoShape();
SoLineSet* SoLineSet1306 = new SoLineSet();
SoLineSet1306->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1307 = new SoColorRGBA();
SoColorRGBA1307->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1306->addChild(*SoColorRGBA1307);

SoCoordinate* SoCoordinate1308 = new SoCoordinate();
SoCoordinate1308->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583}, 6);
SoLineSet1306->setCoord(*SoCoordinate1308);

SoShape1305->setGeometry(*SoLineSet1306);

SoHAnimSegment1301->addChild(*SoShape1305);

SoShape* SoShape1309 = new SoShape();
SoLineSet* SoLineSet1310 = new SoLineSet();
SoLineSet1310->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1311 = new SoColorRGBA();
SoColorRGBA1311->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1310->addChild(*SoColorRGBA1311);

SoCoordinate* SoCoordinate1312 = new SoCoordinate();
SoCoordinate1312->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036}, 6);
SoLineSet1310->setCoord(*SoCoordinate1312);

SoShape1309->setGeometry(*SoLineSet1310);

SoHAnimSegment1301->addChild(*SoShape1309);

SoShape* SoShape1313 = new SoShape();
SoLineSet* SoLineSet1314 = new SoLineSet();
SoLineSet1314->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1315 = new SoColorRGBA();
SoColorRGBA1315->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1314->addChild(*SoColorRGBA1315);

SoCoordinate* SoCoordinate1316 = new SoCoordinate();
SoCoordinate1316->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065}, 6);
SoLineSet1314->setCoord(*SoCoordinate1316);

SoShape1313->setGeometry(*SoLineSet1314);

SoHAnimSegment1301->addChild(*SoShape1313);

SoShape* SoShape1317 = new SoShape();
SoLineSet* SoLineSet1318 = new SoLineSet();
SoLineSet1318->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1319 = new SoColorRGBA();
SoColorRGBA1319->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1318->addChild(*SoColorRGBA1319);

SoCoordinate* SoCoordinate1320 = new SoCoordinate();
SoCoordinate1320->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062}, 6);
SoLineSet1318->setCoord(*SoCoordinate1320);

SoShape1317->setGeometry(*SoLineSet1318);

SoHAnimSegment1301->addChild(*SoShape1317);

SoShape* SoShape1321 = new SoShape();
SoLineSet* SoLineSet1322 = new SoLineSet();
SoLineSet1322->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1323 = new SoColorRGBA();
SoColorRGBA1323->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1322->addChild(*SoColorRGBA1323);

SoCoordinate* SoCoordinate1324 = new SoCoordinate();
SoCoordinate1324->setPoint(new float[]{-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091}, 6);
SoLineSet1322->setCoord(*SoCoordinate1324);

SoShape1321->setGeometry(*SoLineSet1322);

SoHAnimSegment1301->addChild(*SoShape1321);

SoHAnimSite* SoHAnimSite1325 = new SoHAnimSite();
SoHAnimSite1325->setDEF(QString("hanim_r_radial_styloid_pt"));
SoHAnimSite1325->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite1325->setTranslation(new float[]{-0.1884,0.8676,-0.036});
SoTouchSensor* SoTouchSensor1326 = new SoTouchSensor();
SoTouchSensor1326->setDescription(QString("HAnimSite r_radial_styloid_pt"));
SoHAnimSite1325->addChild(*SoTouchSensor1326);

SoShape* SoShape1327 = new SoShape();
SoShape1327->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1325->addChild(*SoShape1327);

SoHAnimSegment1301->addChild(*SoHAnimSite1325);

SoHAnimSite* SoHAnimSite1328 = new SoHAnimSite();
SoHAnimSite1328->setDEF(QString("hanim_r_olecranon_pt"));
SoHAnimSite1328->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite1328->setTranslation(new float[]{-0.1907,1.1405,-0.1065});
SoTouchSensor* SoTouchSensor1329 = new SoTouchSensor();
SoTouchSensor1329->setDescription(QString("HAnimSite r_olecranon_pt"));
SoHAnimSite1328->addChild(*SoTouchSensor1329);

SoShape* SoShape1330 = new SoShape();
SoShape1330->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1328->addChild(*SoShape1330);

SoHAnimSegment1301->addChild(*SoHAnimSite1328);

SoHAnimSite* SoHAnimSite1331 = new SoHAnimSite();
SoHAnimSite1331->setDEF(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimSite1331->X3DNode::setName(QString("r_humeral_medial_epicondyle_pt"));
SoHAnimSite1331->setTranslation(new float[]{-0.168,1.1298,-0.1062});
SoTouchSensor* SoTouchSensor1332 = new SoTouchSensor();
SoTouchSensor1332->setDescription(QString("HAnimSite r_humeral_medial_epicn_pt"));
SoHAnimSite1331->addChild(*SoTouchSensor1332);

SoShape* SoShape1333 = new SoShape();
SoShape1333->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1331->addChild(*SoShape1333);

SoHAnimSegment1301->addChild(*SoHAnimSite1331);

SoHAnimSite* SoHAnimSite1334 = new SoHAnimSite();
SoHAnimSite1334->setDEF(QString("hanim_r_radiale_pt"));
SoHAnimSite1334->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite1334->setTranslation(new float[]{-0.213,1.1305,-0.1091});
SoTouchSensor* SoTouchSensor1335 = new SoTouchSensor();
SoTouchSensor1335->setDescription(QString("HAnimSite r_radiale_pt"));
SoHAnimSite1334->addChild(*SoTouchSensor1335);

SoShape* SoShape1336 = new SoShape();
SoShape1336->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1334->addChild(*SoShape1336);

SoHAnimSegment1301->addChild(*SoHAnimSite1334);

SoHAnimJoint1300->addChildren(*SoHAnimSegment1301);

SoHAnimJoint* SoHAnimJoint1337 = new SoHAnimJoint();
SoHAnimJoint1337->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint1337->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint1337->setCenter(new float[]{-0.1984,0.8663,-0.0583});
SoHAnimSegment* SoHAnimSegment1338 = new SoHAnimSegment();
SoHAnimSegment1338->setDEF(QString("hanim_r_carpal"));
SoHAnimSegment1338->X3DNode::setName(QString("r_carpal"));
SoTouchSensor* SoTouchSensor1339 = new SoTouchSensor();
SoTouchSensor1339->setDescription(QString("HAnimJoint r_radiocarpal, HAnimSegment r_carpal"));
SoHAnimSegment1338->addChild(*SoTouchSensor1339);

SoTransform* SoTransform1340 = new SoTransform();
SoTransform1340->setTranslation(new float[]{-0.1984,0.8663,-0.0583});
SoShape* SoShape1341 = new SoShape();
SoShape1341->setUSE(QString("HAnimJointShape"));
SoTransform1340->addChild(*SoShape1341);

SoHAnimSegment1338->addChild(*SoTransform1340);

SoShape* SoShape1342 = new SoShape();
SoLineSet* SoLineSet1343 = new SoLineSet();
SoLineSet1343->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1344 = new SoColorRGBA();
SoColorRGBA1344->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1343->addChild(*SoColorRGBA1344);

SoCoordinate* SoCoordinate1345 = new SoCoordinate();
SoCoordinate1345->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534}, 6);
SoLineSet1343->setCoord(*SoCoordinate1345);

SoShape1342->setGeometry(*SoLineSet1343);

SoHAnimSegment1338->addChild(*SoShape1342);

SoShape* SoShape1346 = new SoShape();
SoLineSet* SoLineSet1347 = new SoLineSet();
SoLineSet1347->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1348 = new SoColorRGBA();
SoColorRGBA1348->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1347->addChild(*SoColorRGBA1348);

SoCoordinate* SoCoordinate1349 = new SoCoordinate();
SoCoordinate1349->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028}, 6);
SoLineSet1347->setCoord(*SoCoordinate1349);

SoShape1346->setGeometry(*SoLineSet1347);

SoHAnimSegment1338->addChild(*SoShape1346);

SoShape* SoShape1350 = new SoShape();
SoLineSet* SoLineSet1351 = new SoLineSet();
SoLineSet1351->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1352 = new SoColorRGBA();
SoColorRGBA1352->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1351->addChild(*SoColorRGBA1352);

SoCoordinate* SoCoordinate1353 = new SoCoordinate();
SoCoordinate1353->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053}, 6);
SoLineSet1351->setCoord(*SoCoordinate1353);

SoShape1350->setGeometry(*SoLineSet1351);

SoHAnimSegment1338->addChild(*SoShape1350);

SoShape* SoShape1354 = new SoShape();
SoLineSet* SoLineSet1355 = new SoLineSet();
SoLineSet1355->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1356 = new SoColorRGBA();
SoColorRGBA1356->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1355->addChild(*SoColorRGBA1356);

SoCoordinate* SoCoordinate1357 = new SoCoordinate();
SoCoordinate1357->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794}, 6);
SoLineSet1355->setCoord(*SoCoordinate1357);

SoShape1354->setGeometry(*SoLineSet1355);

SoHAnimSegment1338->addChild(*SoShape1354);

SoShape* SoShape1358 = new SoShape();
SoLineSet* SoLineSet1359 = new SoLineSet();
SoLineSet1359->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1360 = new SoColorRGBA();
SoColorRGBA1360->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1359->addChild(*SoColorRGBA1360);

SoCoordinate* SoCoordinate1361 = new SoCoordinate();
SoCoordinate1361->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036}, 6);
SoLineSet1359->setCoord(*SoCoordinate1361);

SoShape1358->setGeometry(*SoLineSet1359);

SoHAnimSegment1338->addChild(*SoShape1358);

SoShape* SoShape1362 = new SoShape();
SoLineSet* SoLineSet1363 = new SoLineSet();
SoLineSet1363->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1364 = new SoColorRGBA();
SoColorRGBA1364->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1363->addChild(*SoColorRGBA1364);

SoCoordinate* SoCoordinate1365 = new SoCoordinate();
SoCoordinate1365->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177}, 6);
SoLineSet1363->setCoord(*SoCoordinate1365);

SoShape1362->setGeometry(*SoLineSet1363);

SoHAnimSegment1338->addChild(*SoShape1362);

SoShape* SoShape1366 = new SoShape();
SoLineSet* SoLineSet1367 = new SoLineSet();
SoLineSet1367->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1368 = new SoColorRGBA();
SoColorRGBA1368->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1367->addChild(*SoColorRGBA1368);

SoCoordinate* SoCoordinate1369 = new SoCoordinate();
SoCoordinate1369->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584}, 6);
SoLineSet1367->setCoord(*SoCoordinate1369);

SoShape1366->setGeometry(*SoLineSet1367);

SoHAnimSegment1338->addChild(*SoShape1366);

SoShape* SoShape1370 = new SoShape();
SoLineSet* SoLineSet1371 = new SoLineSet();
SoLineSet1371->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1372 = new SoColorRGBA();
SoColorRGBA1372->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1371->addChild(*SoColorRGBA1372);

SoCoordinate* SoCoordinate1373 = new SoCoordinate();
SoCoordinate1373->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064}, 6);
SoLineSet1371->setCoord(*SoCoordinate1373);

SoShape1370->setGeometry(*SoLineSet1371);

SoHAnimSegment1338->addChild(*SoShape1370);

SoShape* SoShape1374 = new SoShape();
SoLineSet* SoLineSet1375 = new SoLineSet();
SoLineSet1375->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1376 = new SoColorRGBA();
SoColorRGBA1376->setUSE(QString("HAnimSiteViewpointLineColorRGBA"));
SoLineSet1375->addChild(*SoColorRGBA1376);

SoCoordinate* SoCoordinate1377 = new SoCoordinate();
SoCoordinate1377->setPoint(new float[]{-0.1984,0.8663,-0.0583,-0.3,0.75,0.45}, 6);
SoLineSet1375->setCoord(*SoCoordinate1377);

SoShape1374->setGeometry(*SoLineSet1375);

SoHAnimSegment1338->addChild(*SoShape1374);

SoHAnimSite* SoHAnimSite1378 = new SoHAnimSite();
SoHAnimSite1378->setDEF(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimSite1378->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite1378->setTranslation(new float[]{-0.1977,0.8169,-0.0177});
SoTouchSensor* SoTouchSensor1379 = new SoTouchSensor();
SoTouchSensor1379->setDescription(QString("HAnimSite r_metacarpal_pha2_pt"));
SoHAnimSite1378->addChild(*SoTouchSensor1379);

SoShape* SoShape1380 = new SoShape();
SoShape1380->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1378->addChild(*SoShape1380);

SoHAnimSegment1338->addChild(*SoHAnimSite1378);

SoHAnimSite* SoHAnimSite1381 = new SoHAnimSite();
SoHAnimSite1381->setDEF(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimSite1381->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite1381->setTranslation(new float[]{-0.2117,0.8562,-0.0584});
SoTouchSensor* SoTouchSensor1382 = new SoTouchSensor();
SoTouchSensor1382->setDescription(QString("HAnimSite r_ulnar_styloid_pt"));
SoHAnimSite1381->addChild(*SoTouchSensor1382);

SoShape* SoShape1383 = new SoShape();
SoShape1383->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1381->addChild(*SoShape1383);

SoHAnimSegment1338->addChild(*SoHAnimSite1381);

SoHAnimSite* SoHAnimSite1384 = new SoHAnimSite();
SoHAnimSite1384->setDEF(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimSite1384->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite1384->setTranslation(new float[]{-0.1929,0.789,-0.1064});
SoTouchSensor* SoTouchSensor1385 = new SoTouchSensor();
SoTouchSensor1385->setDescription(QString("HAnimSite r_metacarpal_pha5_pt"));
SoHAnimSite1384->addChild(*SoTouchSensor1385);

SoShape* SoShape1386 = new SoShape();
SoShape1386->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1384->addChild(*SoShape1386);

SoHAnimSegment1338->addChild(*SoHAnimSite1384);

SoHAnimSite* SoHAnimSite1387 = new SoHAnimSite();
SoHAnimSite1387->setDEF(QString("hanim_r_hand_front_view"));
SoHAnimSite1387->X3DNode::setName(QString("r_hand_front_view"));
SoHAnimSite1387->setTranslation(new float[]{-0.3,0.75,0.45});
SoTouchSensor* SoTouchSensor1388 = new SoTouchSensor();
SoTouchSensor1388->setDescription(QString("HAnimSite r_hand_front_view"));
SoHAnimSite1387->addChild(*SoTouchSensor1388);

SoShape* SoShape1389 = new SoShape();
SoShape1389->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1387->addChild(*SoShape1389);

SoViewpoint* SoViewpoint1390 = new SoViewpoint();
SoViewpoint1390->setDEF(QString("hanim_r_hand_front_viewpoint"));
SoViewpoint1390->setDescription(QString("right hand front"));
SoViewpoint1390->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1390->setCenterOfRotation(new float[]{0.0,0.7,0.0});
SoHAnimSite1387->addChild(*SoViewpoint1390);

SoAnchor* SoAnchor1391 = new SoAnchor();
SoAnchor1391->setDescription(QString("HAnimSite hanim_r_hand_front_view Viewpoint"));
SoAnchor1391->setUrl(new QString[]{QString("#hanim_r_hand_front_viewpoint")}, 1);
SoLOD* SoLOD1392 = new SoLOD();
SoLOD1392->setForceTransitions(true);
SoLOD1392->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1393 = new SoWorldInfo();
SoWorldInfo1393->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1392->addChildren(*SoWorldInfo1393);

SoShape* SoShape1394 = new SoShape();
SoShape1394->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1392->addChildren(SoShape1394);

SoAnchor1391->addChild(*SoLOD1392);

SoHAnimSite1387->addChild(SoAnchor1391);

SoHAnimSegment1338->addChild(*SoHAnimSite1387);

SoHAnimJoint1337->addChildren(*SoHAnimSegment1338);

SoHAnimJoint* SoHAnimJoint1395 = new SoHAnimJoint();
SoHAnimJoint1395->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint1395->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint1395->setCenter(new float[]{-0.1924,0.8472,-0.0534});
SoHAnimSegment* SoHAnimSegment1396 = new SoHAnimSegment();
SoHAnimSegment1396->setDEF(QString("hanim_r_metacarpal_1"));
SoHAnimSegment1396->X3DNode::setName(QString("r_metacarpal_1"));
SoTouchSensor* SoTouchSensor1397 = new SoTouchSensor();
SoTouchSensor1397->setDescription(QString("HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1"));
SoHAnimSegment1396->addChild(*SoTouchSensor1397);

SoTransform* SoTransform1398 = new SoTransform();
SoTransform1398->setTranslation(new float[]{-0.1924,0.8472,-0.0534});
SoShape* SoShape1399 = new SoShape();
SoShape1399->setUSE(QString("HAnimJointShape"));
SoTransform1398->addChild(*SoShape1399);

SoHAnimSegment1396->addChild(*SoTransform1398);

SoShape* SoShape1400 = new SoShape();
SoLineSet* SoLineSet1401 = new SoLineSet();
SoLineSet1401->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1402 = new SoColorRGBA();
SoColorRGBA1402->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1401->addChild(*SoColorRGBA1402);

SoCoordinate* SoCoordinate1403 = new SoCoordinate();
SoCoordinate1403->setPoint(new float[]{-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246}, 6);
SoLineSet1401->setCoord(*SoCoordinate1403);

SoShape1400->setGeometry(*SoLineSet1401);

SoHAnimSegment1396->addChild(*SoShape1400);

SoHAnimJoint1395->addChildren(*SoHAnimSegment1396);

SoHAnimJoint* SoHAnimJoint1404 = new SoHAnimJoint();
SoHAnimJoint1404->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint1404->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint1404->setCenter(new float[]{-0.1951,0.8226,0.0246});
SoHAnimSegment* SoHAnimSegment1405 = new SoHAnimSegment();
SoHAnimSegment1405->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimSegment1405->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoTouchSensor* SoTouchSensor1406 = new SoTouchSensor();
SoTouchSensor1406->setDescription(QString("HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1"));
SoHAnimSegment1405->addChild(*SoTouchSensor1406);

SoTransform* SoTransform1407 = new SoTransform();
SoTransform1407->setTranslation(new float[]{-0.1951,0.8226,0.0246});
SoShape* SoShape1408 = new SoShape();
SoShape1408->setUSE(QString("HAnimJointShape"));
SoTransform1407->addChild(*SoShape1408);

SoHAnimSegment1405->addChild(*SoTransform1407);

SoShape* SoShape1409 = new SoShape();
SoLineSet* SoLineSet1410 = new SoLineSet();
SoLineSet1410->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1411 = new SoColorRGBA();
SoColorRGBA1411->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1410->addChild(*SoColorRGBA1411);

SoCoordinate* SoCoordinate1412 = new SoCoordinate();
SoCoordinate1412->setPoint(new float[]{-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464}, 6);
SoLineSet1410->setCoord(*SoCoordinate1412);

SoShape1409->setGeometry(*SoLineSet1410);

SoHAnimSegment1405->addChild(*SoShape1409);

SoHAnimJoint1404->addChildren(*SoHAnimSegment1405);

SoHAnimJoint* SoHAnimJoint1413 = new SoHAnimJoint();
SoHAnimJoint1413->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint1413->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint1413->setCenter(new float[]{-0.1955,0.8159,0.0464});
SoHAnimSegment* SoHAnimSegment1414 = new SoHAnimSegment();
SoHAnimSegment1414->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimSegment1414->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoTouchSensor* SoTouchSensor1415 = new SoTouchSensor();
SoTouchSensor1415->setDescription(QString("HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1"));
SoHAnimSegment1414->addChild(*SoTouchSensor1415);

SoTransform* SoTransform1416 = new SoTransform();
SoTransform1416->setTranslation(new float[]{-0.1955,0.8159,0.0464});
SoShape* SoShape1417 = new SoShape();
SoShape1417->setUSE(QString("HAnimJointShape"));
SoTransform1416->addChild(*SoShape1417);

SoHAnimSegment1414->addChild(*SoTransform1416);

SoShape* SoShape1418 = new SoShape();
SoLineSet* SoLineSet1419 = new SoLineSet();
SoLineSet1419->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1420 = new SoColorRGBA();
SoColorRGBA1420->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1419->addChild(*SoColorRGBA1420);

SoCoordinate* SoCoordinate1421 = new SoCoordinate();
SoCoordinate1421->setPoint(new float[]{-0.1955,0.8159,0.0464,-0.1869,0.809,0.082}, 6);
SoLineSet1419->setCoord(*SoCoordinate1421);

SoShape1418->setGeometry(*SoLineSet1419);

SoHAnimSegment1414->addChild(*SoShape1418);

SoHAnimSite* SoHAnimSite1422 = new SoHAnimSite();
SoHAnimSite1422->setDEF(QString("hanim_r_carpal_distal_phalanx_1_pt"));
SoHAnimSite1422->X3DNode::setName(QString("r_carpal_distal_phalanx_1_pt"));
SoHAnimSite1422->setTranslation(new float[]{-0.1869,0.809,0.082});
SoTouchSensor* SoTouchSensor1423 = new SoTouchSensor();
SoTouchSensor1423->setDescription(QString("HAnimSite r_thumb_distal_tip"));
SoHAnimSite1422->addChild(*SoTouchSensor1423);

SoShape* SoShape1424 = new SoShape();
SoShape1424->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1422->addChild(*SoShape1424);

SoHAnimSegment1414->addChild(*SoHAnimSite1422);

SoHAnimJoint1413->addChildren(*SoHAnimSegment1414);

SoHAnimJoint1404->addChildren(*SoHAnimJoint1413);

SoHAnimJoint1395->addChildren(*SoHAnimJoint1404);

SoHAnimJoint1337->addChildren(*SoHAnimJoint1395);

SoHAnimJoint* SoHAnimJoint1425 = new SoHAnimJoint();
SoHAnimJoint1425->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint1425->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint1425->setCenter(new float[]{-0.1983,0.8024,-0.028});
SoHAnimSegment* SoHAnimSegment1426 = new SoHAnimSegment();
SoHAnimSegment1426->setDEF(QString("hanim_r_metacarpal_2"));
SoHAnimSegment1426->X3DNode::setName(QString("r_metacarpal_2"));
SoTouchSensor* SoTouchSensor1427 = new SoTouchSensor();
SoTouchSensor1427->setDescription(QString("HAnimJoint r_index0, HAnimSegment r_metacarpal_2"));
SoHAnimSegment1426->addChild(*SoTouchSensor1427);

SoTransform* SoTransform1428 = new SoTransform();
SoTransform1428->setTranslation(new float[]{-0.1983,0.8024,-0.028});
SoShape* SoShape1429 = new SoShape();
SoShape1429->setUSE(QString("HAnimJointShape"));
SoTransform1428->addChild(*SoShape1429);

SoHAnimSegment1426->addChild(*SoTransform1428);

SoShape* SoShape1430 = new SoShape();
SoLineSet* SoLineSet1431 = new SoLineSet();
SoLineSet1431->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1432 = new SoColorRGBA();
SoColorRGBA1432->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1431->addChild(*SoColorRGBA1432);

SoCoordinate* SoCoordinate1433 = new SoCoordinate();
SoCoordinate1433->setPoint(new float[]{-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028}, 6);
SoLineSet1431->setCoord(*SoCoordinate1433);

SoShape1430->setGeometry(*SoLineSet1431);

SoHAnimSegment1426->addChild(*SoShape1430);

SoHAnimJoint1425->addChildren(*SoHAnimSegment1426);

SoHAnimJoint* SoHAnimJoint1434 = new SoHAnimJoint();
SoHAnimJoint1434->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint1434->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint1434->setCenter(new float[]{-0.1983,0.7815,-0.028});
SoHAnimSegment* SoHAnimSegment1435 = new SoHAnimSegment();
SoHAnimSegment1435->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimSegment1435->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoTouchSensor* SoTouchSensor1436 = new SoTouchSensor();
SoTouchSensor1436->setDescription(QString("HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2"));
SoHAnimSegment1435->addChild(*SoTouchSensor1436);

SoTransform* SoTransform1437 = new SoTransform();
SoTransform1437->setTranslation(new float[]{-0.1983,0.7815,-0.028});
SoShape* SoShape1438 = new SoShape();
SoShape1438->setUSE(QString("HAnimJointShape"));
SoTransform1437->addChild(*SoShape1438);

SoHAnimSegment1435->addChild(*SoTransform1437);

SoShape* SoShape1439 = new SoShape();
SoLineSet* SoLineSet1440 = new SoLineSet();
SoLineSet1440->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1441 = new SoColorRGBA();
SoColorRGBA1441->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1440->addChild(*SoColorRGBA1441);

SoCoordinate* SoCoordinate1442 = new SoCoordinate();
SoCoordinate1442->setPoint(new float[]{-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248}, 6);
SoLineSet1440->setCoord(*SoCoordinate1442);

SoShape1439->setGeometry(*SoLineSet1440);

SoHAnimSegment1435->addChild(*SoShape1439);

SoHAnimJoint1434->addChildren(*SoHAnimSegment1435);

SoHAnimJoint* SoHAnimJoint1443 = new SoHAnimJoint();
SoHAnimJoint1443->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1443->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1443->setCenter(new float[]{-0.2017,0.7363,-0.0248});
SoHAnimSegment* SoHAnimSegment1444 = new SoHAnimSegment();
SoHAnimSegment1444->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimSegment1444->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoTouchSensor* SoTouchSensor1445 = new SoTouchSensor();
SoTouchSensor1445->setDescription(QString("HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2"));
SoHAnimSegment1444->addChild(*SoTouchSensor1445);

SoTransform* SoTransform1446 = new SoTransform();
SoTransform1446->setTranslation(new float[]{-0.2017,0.7363,-0.0248});
SoShape* SoShape1447 = new SoShape();
SoShape1447->setUSE(QString("HAnimJointShape"));
SoTransform1446->addChild(*SoShape1447);

SoHAnimSegment1444->addChild(*SoTransform1446);

SoShape* SoShape1448 = new SoShape();
SoLineSet* SoLineSet1449 = new SoLineSet();
SoLineSet1449->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1450 = new SoColorRGBA();
SoColorRGBA1450->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1449->addChild(*SoColorRGBA1450);

SoCoordinate* SoCoordinate1451 = new SoCoordinate();
SoCoordinate1451->setPoint(new float[]{-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236}, 6);
SoLineSet1449->setCoord(*SoCoordinate1451);

SoShape1448->setGeometry(*SoLineSet1449);

SoHAnimSegment1444->addChild(*SoShape1448);

SoHAnimJoint1443->addChildren(*SoHAnimSegment1444);

SoHAnimJoint* SoHAnimJoint1452 = new SoHAnimJoint();
SoHAnimJoint1452->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1452->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1452->setCenter(new float[]{-0.2028,0.7139,-0.0236});
SoHAnimSegment* SoHAnimSegment1453 = new SoHAnimSegment();
SoHAnimSegment1453->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimSegment1453->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoTouchSensor* SoTouchSensor1454 = new SoTouchSensor();
SoTouchSensor1454->setDescription(QString("HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2"));
SoHAnimSegment1453->addChild(*SoTouchSensor1454);

SoTransform* SoTransform1455 = new SoTransform();
SoTransform1455->setTranslation(new float[]{-0.2028,0.7139,-0.0236});
SoShape* SoShape1456 = new SoShape();
SoShape1456->setUSE(QString("HAnimJointShape"));
SoTransform1455->addChild(*SoShape1456);

SoHAnimSegment1453->addChild(*SoTransform1455);

SoShape* SoShape1457 = new SoShape();
SoLineSet* SoLineSet1458 = new SoLineSet();
SoLineSet1458->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1459 = new SoColorRGBA();
SoColorRGBA1459->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1458->addChild(*SoColorRGBA1459);

SoCoordinate* SoCoordinate1460 = new SoCoordinate();
SoCoordinate1460->setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018}, 6);
SoLineSet1458->setCoord(*SoCoordinate1460);

SoShape1457->setGeometry(*SoLineSet1458);

SoHAnimSegment1453->addChild(*SoShape1457);

SoShape* SoShape1461 = new SoShape();
SoLineSet* SoLineSet1462 = new SoLineSet();
SoLineSet1462->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1463 = new SoColorRGBA();
SoColorRGBA1463->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1462->addChild(*SoColorRGBA1463);

SoCoordinate* SoCoordinate1464 = new SoCoordinate();
SoCoordinate1464->setPoint(new float[]{-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423}, 6);
SoLineSet1462->setCoord(*SoCoordinate1464);

SoShape1461->setGeometry(*SoLineSet1462);

SoHAnimSegment1453->addChild(*SoShape1461);

SoHAnimSite* SoHAnimSite1465 = new SoHAnimSite();
SoHAnimSite1465->setDEF(QString("hanim_r_carpal_distal_phalanx_2_pt"));
SoHAnimSite1465->X3DNode::setName(QString("r_carpal_distal_phalanx_2_pt"));
SoHAnimSite1465->setTranslation(new float[]{-0.198,0.6883,-0.018});
SoTouchSensor* SoTouchSensor1466 = new SoTouchSensor();
SoTouchSensor1466->setDescription(QString("HAnimSite r_index_distal_tip"));
SoHAnimSite1465->addChild(*SoTouchSensor1466);

SoShape* SoShape1467 = new SoShape();
SoShape1467->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1465->addChild(*SoShape1467);

SoHAnimSegment1453->addChild(*SoHAnimSite1465);

SoHAnimSite* SoHAnimSite1468 = new SoHAnimSite();
SoHAnimSite1468->setDEF(QString("hanim_r_dactylion_pt"));
SoHAnimSite1468->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite1468->setTranslation(new float[]{-0.1941,0.6772,-0.0423});
SoTouchSensor* SoTouchSensor1469 = new SoTouchSensor();
SoTouchSensor1469->setDescription(QString("HAnimSite r_dactylion_pt"));
SoHAnimSite1468->addChild(*SoTouchSensor1469);

SoShape* SoShape1470 = new SoShape();
SoShape1470->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1468->addChild(*SoShape1470);

SoHAnimSegment1453->addChild(*SoHAnimSite1468);

SoHAnimJoint1452->addChildren(*SoHAnimSegment1453);

SoHAnimJoint1443->addChildren(*SoHAnimJoint1452);

SoHAnimJoint1434->addChildren(*SoHAnimJoint1443);

SoHAnimJoint1425->addChildren(*SoHAnimJoint1434);

SoHAnimJoint1337->addChildren(*SoHAnimJoint1425);

SoHAnimJoint* SoHAnimJoint1471 = new SoHAnimJoint();
SoHAnimJoint1471->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint1471->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint1471->setCenter(new float[]{-0.1987,0.8029,-0.053});
SoHAnimSegment* SoHAnimSegment1472 = new SoHAnimSegment();
SoHAnimSegment1472->setDEF(QString("hanim_r_metacarpal_3"));
SoHAnimSegment1472->X3DNode::setName(QString("r_metacarpal_3"));
SoTouchSensor* SoTouchSensor1473 = new SoTouchSensor();
SoTouchSensor1473->setDescription(QString("HAnimJoint r_middle0, HAnimSegment r_metacarpal_3"));
SoHAnimSegment1472->addChild(*SoTouchSensor1473);

SoTransform* SoTransform1474 = new SoTransform();
SoTransform1474->setTranslation(new float[]{-0.1987,0.8029,-0.053});
SoShape* SoShape1475 = new SoShape();
SoShape1475->setUSE(QString("HAnimJointShape"));
SoTransform1474->addChild(*SoShape1475);

SoHAnimSegment1472->addChild(*SoTransform1474);

SoShape* SoShape1476 = new SoShape();
SoLineSet* SoLineSet1477 = new SoLineSet();
SoLineSet1477->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1478 = new SoColorRGBA();
SoColorRGBA1478->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1477->addChild(*SoColorRGBA1478);

SoCoordinate* SoCoordinate1479 = new SoCoordinate();
SoCoordinate1479->setPoint(new float[]{-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053}, 6);
SoLineSet1477->setCoord(*SoCoordinate1479);

SoShape1476->setGeometry(*SoLineSet1477);

SoHAnimSegment1472->addChild(*SoShape1476);

SoHAnimJoint1471->addChildren(*SoHAnimSegment1472);

SoHAnimJoint* SoHAnimJoint1480 = new SoHAnimJoint();
SoHAnimJoint1480->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint1480->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint1480->setCenter(new float[]{-0.1987,0.7818,-0.053});
SoHAnimSegment* SoHAnimSegment1481 = new SoHAnimSegment();
SoHAnimSegment1481->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimSegment1481->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoTouchSensor* SoTouchSensor1482 = new SoTouchSensor();
SoTouchSensor1482->setDescription(QString("HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3"));
SoHAnimSegment1481->addChild(*SoTouchSensor1482);

SoTransform* SoTransform1483 = new SoTransform();
SoTransform1483->setTranslation(new float[]{-0.1987,0.7818,-0.053});
SoShape* SoShape1484 = new SoShape();
SoShape1484->setUSE(QString("HAnimJointShape"));
SoTransform1483->addChild(*SoShape1484);

SoHAnimSegment1481->addChild(*SoTransform1483);

SoShape* SoShape1485 = new SoShape();
SoLineSet* SoLineSet1486 = new SoLineSet();
SoLineSet1486->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1487 = new SoColorRGBA();
SoColorRGBA1487->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1486->addChild(*SoColorRGBA1487);

SoCoordinate* SoCoordinate1488 = new SoCoordinate();
SoCoordinate1488->setPoint(new float[]{-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503}, 6);
SoLineSet1486->setCoord(*SoCoordinate1488);

SoShape1485->setGeometry(*SoLineSet1486);

SoHAnimSegment1481->addChild(*SoShape1485);

SoHAnimJoint1480->addChildren(*SoHAnimSegment1481);

SoHAnimJoint* SoHAnimJoint1489 = new SoHAnimJoint();
SoHAnimJoint1489->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1489->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1489->setCenter(new float[]{-0.2013,0.7273,-0.0503});
SoHAnimSegment* SoHAnimSegment1490 = new SoHAnimSegment();
SoHAnimSegment1490->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimSegment1490->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoTouchSensor* SoTouchSensor1491 = new SoTouchSensor();
SoTouchSensor1491->setDescription(QString("HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3"));
SoHAnimSegment1490->addChild(*SoTouchSensor1491);

SoTransform* SoTransform1492 = new SoTransform();
SoTransform1492->setTranslation(new float[]{-0.2013,0.7273,-0.0503});
SoShape* SoShape1493 = new SoShape();
SoShape1493->setUSE(QString("HAnimJointShape"));
SoTransform1492->addChild(*SoShape1493);

SoHAnimSegment1490->addChild(*SoTransform1492);

SoShape* SoShape1494 = new SoShape();
SoLineSet* SoLineSet1495 = new SoLineSet();
SoLineSet1495->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1496 = new SoColorRGBA();
SoColorRGBA1496->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1495->addChild(*SoColorRGBA1496);

SoCoordinate* SoCoordinate1497 = new SoCoordinate();
SoCoordinate1497->setPoint(new float[]{-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494}, 6);
SoLineSet1495->setCoord(*SoCoordinate1497);

SoShape1494->setGeometry(*SoLineSet1495);

SoHAnimSegment1490->addChild(*SoShape1494);

SoHAnimJoint1489->addChildren(*SoHAnimSegment1490);

SoHAnimJoint* SoHAnimJoint1498 = new SoHAnimJoint();
SoHAnimJoint1498->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1498->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1498->setCenter(new float[]{-0.2026,0.7011,-0.0494});
SoHAnimSegment* SoHAnimSegment1499 = new SoHAnimSegment();
SoHAnimSegment1499->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimSegment1499->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoTouchSensor* SoTouchSensor1500 = new SoTouchSensor();
SoTouchSensor1500->setDescription(QString("HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3"));
SoHAnimSegment1499->addChild(*SoTouchSensor1500);

SoTransform* SoTransform1501 = new SoTransform();
SoTransform1501->setTranslation(new float[]{-0.2026,0.7011,-0.0494});
SoShape* SoShape1502 = new SoShape();
SoShape1502->setUSE(QString("HAnimJointShape"));
SoTransform1501->addChild(*SoShape1502);

SoHAnimSegment1499->addChild(*SoTransform1501);

SoShape* SoShape1503 = new SoShape();
SoLineSet* SoLineSet1504 = new SoLineSet();
SoLineSet1504->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1505 = new SoColorRGBA();
SoColorRGBA1505->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1504->addChild(*SoColorRGBA1505);

SoCoordinate* SoCoordinate1506 = new SoCoordinate();
SoCoordinate1506->setPoint(new float[]{-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427}, 6);
SoLineSet1504->setCoord(*SoCoordinate1506);

SoShape1503->setGeometry(*SoLineSet1504);

SoHAnimSegment1499->addChild(*SoShape1503);

SoHAnimSite* SoHAnimSite1507 = new SoHAnimSite();
SoHAnimSite1507->setDEF(QString("hanim_r_carpal_distal_phalanx_3_pt"));
SoHAnimSite1507->X3DNode::setName(QString("r_carpal_distal_phalanx_3_pt"));
SoHAnimSite1507->setTranslation(new float[]{-0.1969,0.6758,-0.0427});
SoTouchSensor* SoTouchSensor1508 = new SoTouchSensor();
SoTouchSensor1508->setDescription(QString("HAnimSite r_middle_distal_tip"));
SoHAnimSite1507->addChild(*SoTouchSensor1508);

SoShape* SoShape1509 = new SoShape();
SoShape1509->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1507->addChild(*SoShape1509);

SoHAnimSegment1499->addChild(*SoHAnimSite1507);

SoHAnimJoint1498->addChildren(*SoHAnimSegment1499);

SoHAnimJoint1489->addChildren(*SoHAnimJoint1498);

SoHAnimJoint1480->addChildren(*SoHAnimJoint1489);

SoHAnimJoint1471->addChildren(*SoHAnimJoint1480);

SoHAnimJoint1337->addChildren(*SoHAnimJoint1471);

SoHAnimJoint* SoHAnimJoint1510 = new SoHAnimJoint();
SoHAnimJoint1510->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint1510->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint1510->setCenter(new float[]{-0.1956,0.8019,-0.0794});
SoHAnimSegment* SoHAnimSegment1511 = new SoHAnimSegment();
SoHAnimSegment1511->setDEF(QString("hanim_r_metacarpal_4"));
SoHAnimSegment1511->X3DNode::setName(QString("r_metacarpal_4"));
SoTouchSensor* SoTouchSensor1512 = new SoTouchSensor();
SoTouchSensor1512->setDescription(QString("HAnimJoint r_ring0, HAnimSegment r_metacarpal_4"));
SoHAnimSegment1511->addChild(*SoTouchSensor1512);

SoTransform* SoTransform1513 = new SoTransform();
SoTransform1513->setTranslation(new float[]{-0.1956,0.8019,-0.0794});
SoShape* SoShape1514 = new SoShape();
SoShape1514->setUSE(QString("HAnimJointShape"));
SoTransform1513->addChild(*SoShape1514);

SoHAnimSegment1511->addChild(*SoTransform1513);

SoShape* SoShape1515 = new SoShape();
SoLineSet* SoLineSet1516 = new SoLineSet();
SoLineSet1516->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1517 = new SoColorRGBA();
SoColorRGBA1517->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1516->addChild(*SoColorRGBA1517);

SoCoordinate* SoCoordinate1518 = new SoCoordinate();
SoCoordinate1518->setPoint(new float[]{-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794}, 6);
SoLineSet1516->setCoord(*SoCoordinate1518);

SoShape1515->setGeometry(*SoLineSet1516);

SoHAnimSegment1511->addChild(*SoShape1515);

SoHAnimJoint1510->addChildren(*SoHAnimSegment1511);

SoHAnimJoint* SoHAnimJoint1519 = new SoHAnimJoint();
SoHAnimJoint1519->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint1519->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint1519->setCenter(new float[]{-0.1956,0.7815,-0.0794});
SoHAnimSegment* SoHAnimSegment1520 = new SoHAnimSegment();
SoHAnimSegment1520->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimSegment1520->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoTouchSensor* SoTouchSensor1521 = new SoTouchSensor();
SoTouchSensor1521->setDescription(QString("HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4"));
SoHAnimSegment1520->addChild(*SoTouchSensor1521);

SoTransform* SoTransform1522 = new SoTransform();
SoTransform1522->setTranslation(new float[]{-0.1956,0.7815,-0.0794});
SoShape* SoShape1523 = new SoShape();
SoShape1523->setUSE(QString("HAnimJointShape"));
SoTransform1522->addChild(*SoShape1523);

SoHAnimSegment1520->addChild(*SoTransform1522);

SoShape* SoShape1524 = new SoShape();
SoLineSet* SoLineSet1525 = new SoLineSet();
SoLineSet1525->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1526 = new SoColorRGBA();
SoColorRGBA1526->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1525->addChild(*SoColorRGBA1526);

SoCoordinate* SoCoordinate1527 = new SoCoordinate();
SoCoordinate1527->setPoint(new float[]{-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777}, 6);
SoLineSet1525->setCoord(*SoCoordinate1527);

SoShape1524->setGeometry(*SoLineSet1525);

SoHAnimSegment1520->addChild(*SoShape1524);

SoHAnimJoint1519->addChildren(*SoHAnimSegment1520);

SoHAnimJoint* SoHAnimJoint1528 = new SoHAnimJoint();
SoHAnimJoint1528->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1528->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1528->setCenter(new float[]{-0.1973,0.7287,-0.0777});
SoHAnimSegment* SoHAnimSegment1529 = new SoHAnimSegment();
SoHAnimSegment1529->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimSegment1529->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoTouchSensor* SoTouchSensor1530 = new SoTouchSensor();
SoTouchSensor1530->setDescription(QString("HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4"));
SoHAnimSegment1529->addChild(*SoTouchSensor1530);

SoTransform* SoTransform1531 = new SoTransform();
SoTransform1531->setTranslation(new float[]{-0.1973,0.7287,-0.0777});
SoShape* SoShape1532 = new SoShape();
SoShape1532->setUSE(QString("HAnimJointShape"));
SoTransform1531->addChild(*SoShape1532);

SoHAnimSegment1529->addChild(*SoTransform1531);

SoShape* SoShape1533 = new SoShape();
SoLineSet* SoLineSet1534 = new SoLineSet();
SoLineSet1534->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1535 = new SoColorRGBA();
SoColorRGBA1535->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1534->addChild(*SoColorRGBA1535);

SoCoordinate* SoCoordinate1536 = new SoCoordinate();
SoCoordinate1536->setPoint(new float[]{-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767}, 6);
SoLineSet1534->setCoord(*SoCoordinate1536);

SoShape1533->setGeometry(*SoLineSet1534);

SoHAnimSegment1529->addChild(*SoShape1533);

SoHAnimJoint1528->addChildren(*SoHAnimSegment1529);

SoHAnimJoint* SoHAnimJoint1537 = new SoHAnimJoint();
SoHAnimJoint1537->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1537->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1537->setCenter(new float[]{-0.1983,0.7045,-0.0767});
SoHAnimSegment* SoHAnimSegment1538 = new SoHAnimSegment();
SoHAnimSegment1538->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimSegment1538->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoTouchSensor* SoTouchSensor1539 = new SoTouchSensor();
SoTouchSensor1539->setDescription(QString("HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4"));
SoHAnimSegment1538->addChild(*SoTouchSensor1539);

SoTransform* SoTransform1540 = new SoTransform();
SoTransform1540->setTranslation(new float[]{-0.1983,0.7045,-0.0767});
SoShape* SoShape1541 = new SoShape();
SoShape1541->setUSE(QString("HAnimJointShape"));
SoTransform1540->addChild(*SoShape1541);

SoHAnimSegment1538->addChild(*SoTransform1540);

SoShape* SoShape1542 = new SoShape();
SoLineSet* SoLineSet1543 = new SoLineSet();
SoLineSet1543->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1544 = new SoColorRGBA();
SoColorRGBA1544->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1543->addChild(*SoColorRGBA1544);

SoCoordinate* SoCoordinate1545 = new SoCoordinate();
SoCoordinate1545->setPoint(new float[]{-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693}, 6);
SoLineSet1543->setCoord(*SoCoordinate1545);

SoShape1542->setGeometry(*SoLineSet1543);

SoHAnimSegment1538->addChild(*SoShape1542);

SoHAnimSite* SoHAnimSite1546 = new SoHAnimSite();
SoHAnimSite1546->setDEF(QString("hanim_r_carpal_distal_phalanx_4_pt"));
SoHAnimSite1546->X3DNode::setName(QString("r_carpal_distal_phalanx_4_pt"));
SoHAnimSite1546->setTranslation(new float[]{-0.1934,0.6778,-0.0693});
SoTouchSensor* SoTouchSensor1547 = new SoTouchSensor();
SoTouchSensor1547->setDescription(QString("HAnimSite r_ring_distal_tip"));
SoHAnimSite1546->addChild(*SoTouchSensor1547);

SoShape* SoShape1548 = new SoShape();
SoShape1548->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1546->addChild(*SoShape1548);

SoHAnimSegment1538->addChild(*SoHAnimSite1546);

SoHAnimJoint1537->addChildren(*SoHAnimSegment1538);

SoHAnimJoint1528->addChildren(*SoHAnimJoint1537);

SoHAnimJoint1519->addChildren(*SoHAnimJoint1528);

SoHAnimJoint1510->addChildren(*SoHAnimJoint1519);

SoHAnimJoint1337->addChildren(*SoHAnimJoint1510);

SoHAnimJoint* SoHAnimJoint1549 = new SoHAnimJoint();
SoHAnimJoint1549->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint1549->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint1549->setCenter(new float[]{-0.1925,0.8066,-0.1036});
SoHAnimSegment* SoHAnimSegment1550 = new SoHAnimSegment();
SoHAnimSegment1550->setDEF(QString("hanim_r_metacarpal_5"));
SoHAnimSegment1550->X3DNode::setName(QString("r_metacarpal_5"));
SoTouchSensor* SoTouchSensor1551 = new SoTouchSensor();
SoTouchSensor1551->setDescription(QString("HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5"));
SoHAnimSegment1550->addChild(*SoTouchSensor1551);

SoTransform* SoTransform1552 = new SoTransform();
SoTransform1552->setTranslation(new float[]{-0.1925,0.8066,-0.1036});
SoShape* SoShape1553 = new SoShape();
SoShape1553->setUSE(QString("HAnimJointShape"));
SoTransform1552->addChild(*SoShape1553);

SoHAnimSegment1550->addChild(*SoTransform1552);

SoShape* SoShape1554 = new SoShape();
SoLineSet* SoLineSet1555 = new SoLineSet();
SoLineSet1555->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1556 = new SoColorRGBA();
SoColorRGBA1556->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1555->addChild(*SoColorRGBA1556);

SoCoordinate* SoCoordinate1557 = new SoCoordinate();
SoCoordinate1557->setPoint(new float[]{-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036}, 6);
SoLineSet1555->setCoord(*SoCoordinate1557);

SoShape1554->setGeometry(*SoLineSet1555);

SoHAnimSegment1550->addChild(*SoShape1554);

SoHAnimJoint1549->addChildren(*SoHAnimSegment1550);

SoHAnimJoint* SoHAnimJoint1558 = new SoHAnimJoint();
SoHAnimJoint1558->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint1558->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint1558->setCenter(new float[]{-0.1925,0.7866,-0.1036});
SoHAnimSegment* SoHAnimSegment1559 = new SoHAnimSegment();
SoHAnimSegment1559->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimSegment1559->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoTouchSensor* SoTouchSensor1560 = new SoTouchSensor();
SoTouchSensor1560->setDescription(QString("HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5"));
SoHAnimSegment1559->addChild(*SoTouchSensor1560);

SoTransform* SoTransform1561 = new SoTransform();
SoTransform1561->setTranslation(new float[]{-0.1925,0.7866,-0.1036});
SoShape* SoShape1562 = new SoShape();
SoShape1562->setUSE(QString("HAnimJointShape"));
SoTransform1561->addChild(*SoShape1562);

SoHAnimSegment1559->addChild(*SoTransform1561);

SoShape* SoShape1563 = new SoShape();
SoLineSet* SoLineSet1564 = new SoLineSet();
SoLineSet1564->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1565 = new SoColorRGBA();
SoColorRGBA1565->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1564->addChild(*SoColorRGBA1565);

SoCoordinate* SoCoordinate1566 = new SoCoordinate();
SoCoordinate1566->setPoint(new float[]{-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024}, 6);
SoLineSet1564->setCoord(*SoCoordinate1566);

SoShape1563->setGeometry(*SoLineSet1564);

SoHAnimSegment1559->addChild(*SoShape1563);

SoHAnimJoint1558->addChildren(*SoHAnimSegment1559);

SoHAnimJoint* SoHAnimJoint1567 = new SoHAnimJoint();
SoHAnimJoint1567->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1567->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1567->setCenter(new float[]{-0.1938,0.7452,-0.1024});
SoHAnimSegment* SoHAnimSegment1568 = new SoHAnimSegment();
SoHAnimSegment1568->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimSegment1568->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoTouchSensor* SoTouchSensor1569 = new SoTouchSensor();
SoTouchSensor1569->setDescription(QString("HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5"));
SoHAnimSegment1568->addChild(*SoTouchSensor1569);

SoTransform* SoTransform1570 = new SoTransform();
SoTransform1570->setTranslation(new float[]{-0.1938,0.7452,-0.1024});
SoShape* SoShape1571 = new SoShape();
SoShape1571->setUSE(QString("HAnimJointShape"));
SoTransform1570->addChild(*SoShape1571);

SoHAnimSegment1568->addChild(*SoTransform1570);

SoShape* SoShape1572 = new SoShape();
SoLineSet* SoLineSet1573 = new SoLineSet();
SoLineSet1573->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1574 = new SoColorRGBA();
SoColorRGBA1574->setUSE(QString("HAnimSegmentLineColorRGBA"));
SoLineSet1573->addChild(*SoColorRGBA1574);

SoCoordinate* SoCoordinate1575 = new SoCoordinate();
SoCoordinate1575->setPoint(new float[]{-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017}, 6);
SoLineSet1573->setCoord(*SoCoordinate1575);

SoShape1572->setGeometry(*SoLineSet1573);

SoHAnimSegment1568->addChild(*SoShape1572);

SoHAnimJoint1567->addChildren(*SoHAnimSegment1568);

SoHAnimJoint* SoHAnimJoint1576 = new SoHAnimJoint();
SoHAnimJoint1576->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1576->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1576->setCenter(new float[]{-0.1948,0.7277,-0.1017});
SoHAnimSegment* SoHAnimSegment1577 = new SoHAnimSegment();
SoHAnimSegment1577->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimSegment1577->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoTouchSensor* SoTouchSensor1578 = new SoTouchSensor();
SoTouchSensor1578->setDescription(QString("HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5"));
SoHAnimSegment1577->addChild(*SoTouchSensor1578);

SoTransform* SoTransform1579 = new SoTransform();
SoTransform1579->setTranslation(new float[]{-0.1948,0.7277,-0.1017});
SoShape* SoShape1580 = new SoShape();
SoShape1580->setUSE(QString("HAnimJointShape"));
SoTransform1579->addChild(*SoShape1580);

SoHAnimSegment1577->addChild(*SoTransform1579);

SoShape* SoShape1581 = new SoShape();
SoLineSet* SoLineSet1582 = new SoLineSet();
SoLineSet1582->setVertexCount(new int32_t[]{2}, 1);
SoColorRGBA* SoColorRGBA1583 = new SoColorRGBA();
SoColorRGBA1583->setUSE(QString("HAnimSiteLineColorRGBA"));
SoLineSet1582->addChild(*SoColorRGBA1583);

SoCoordinate* SoCoordinate1584 = new SoCoordinate();
SoCoordinate1584->setPoint(new float[]{-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949}, 6);
SoLineSet1582->setCoord(*SoCoordinate1584);

SoShape1581->setGeometry(*SoLineSet1582);

SoHAnimSegment1577->addChild(*SoShape1581);

SoHAnimSite* SoHAnimSite1585 = new SoHAnimSite();
SoHAnimSite1585->setDEF(QString("hanim_r_carpal_distal_phalanx_5_pt"));
SoHAnimSite1585->X3DNode::setName(QString("r_carpal_distal_phalanx_5_pt"));
SoHAnimSite1585->setTranslation(new float[]{-0.1938,0.7035,-0.0949});
SoTouchSensor* SoTouchSensor1586 = new SoTouchSensor();
SoTouchSensor1586->setDescription(QString("HAnimSite r_pinky_distal_tip"));
SoHAnimSite1585->addChild(*SoTouchSensor1586);

SoShape* SoShape1587 = new SoShape();
SoShape1587->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1585->addChild(*SoShape1587);

SoHAnimSegment1577->addChild(*SoHAnimSite1585);

SoHAnimJoint1576->addChildren(*SoHAnimSegment1577);

SoHAnimJoint1567->addChildren(*SoHAnimJoint1576);

SoHAnimJoint1558->addChildren(*SoHAnimJoint1567);

SoHAnimJoint1549->addChildren(*SoHAnimJoint1558);

SoHAnimJoint1337->addChildren(*SoHAnimJoint1549);

SoHAnimJoint1300->addChildren(*SoHAnimJoint1337);

SoHAnimJoint1284->addChildren(*SoHAnimJoint1300);

SoHAnimJoint1275->addChildren(*SoHAnimJoint1284);

SoHAnimJoint1238->addChildren(*SoHAnimJoint1275);

SoHAnimJoint600->addChildren(*SoHAnimJoint1238);

SoHAnimJoint591->addChildren(*SoHAnimJoint600);

SoHAnimJoint582->addChildren(*SoHAnimJoint591);

SoHAnimJoint573->addChildren(*SoHAnimJoint582);

SoHAnimJoint564->addChildren(*SoHAnimJoint573);

SoHAnimJoint555->addChildren(*SoHAnimJoint564);

SoHAnimJoint546->addChildren(*SoHAnimJoint555);

SoHAnimJoint537->addChildren(*SoHAnimJoint546);

SoHAnimJoint514->addChildren(*SoHAnimJoint537);

SoHAnimJoint498->addChildren(*SoHAnimJoint514);

SoHAnimJoint489->addChildren(*SoHAnimJoint498);

SoHAnimJoint480->addChildren(*SoHAnimJoint489);

SoHAnimJoint471->addChildren(*SoHAnimJoint480);

SoHAnimJoint441->addChildren(*SoHAnimJoint471);

SoHAnimJoint432->addChildren(*SoHAnimJoint441);

SoHAnimJoint423->addChildren(*SoHAnimJoint432);

SoHAnimJoint400->addChildren(*SoHAnimJoint423);

SoHAnimJoint50->addChildren(*SoHAnimJoint400);

SoHAnimHumanoid41->setSkeleton(*SoHAnimJoint50);

SoHAnimJoint* SoHAnimJoint1588 = new SoHAnimJoint();
SoHAnimJoint1588->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1588);

SoHAnimJoint* SoHAnimJoint1589 = new SoHAnimJoint();
SoHAnimJoint1589->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1589);

SoHAnimJoint* SoHAnimJoint1590 = new SoHAnimJoint();
SoHAnimJoint1590->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1590);

SoHAnimJoint* SoHAnimJoint1591 = new SoHAnimJoint();
SoHAnimJoint1591->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1591);

SoHAnimJoint* SoHAnimJoint1592 = new SoHAnimJoint();
SoHAnimJoint1592->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1592);

SoHAnimJoint* SoHAnimJoint1593 = new SoHAnimJoint();
SoHAnimJoint1593->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1593);

SoHAnimJoint* SoHAnimJoint1594 = new SoHAnimJoint();
SoHAnimJoint1594->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1594);

SoHAnimJoint* SoHAnimJoint1595 = new SoHAnimJoint();
SoHAnimJoint1595->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1595);

SoHAnimJoint* SoHAnimJoint1596 = new SoHAnimJoint();
SoHAnimJoint1596->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1596);

SoHAnimJoint* SoHAnimJoint1597 = new SoHAnimJoint();
SoHAnimJoint1597->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1597);

SoHAnimJoint* SoHAnimJoint1598 = new SoHAnimJoint();
SoHAnimJoint1598->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1598);

SoHAnimJoint* SoHAnimJoint1599 = new SoHAnimJoint();
SoHAnimJoint1599->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1599);

SoHAnimJoint* SoHAnimJoint1600 = new SoHAnimJoint();
SoHAnimJoint1600->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1600);

SoHAnimJoint* SoHAnimJoint1601 = new SoHAnimJoint();
SoHAnimJoint1601->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1601);

SoHAnimJoint* SoHAnimJoint1602 = new SoHAnimJoint();
SoHAnimJoint1602->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1602);

SoHAnimJoint* SoHAnimJoint1603 = new SoHAnimJoint();
SoHAnimJoint1603->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1603);

SoHAnimJoint* SoHAnimJoint1604 = new SoHAnimJoint();
SoHAnimJoint1604->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1604);

SoHAnimJoint* SoHAnimJoint1605 = new SoHAnimJoint();
SoHAnimJoint1605->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1605);

SoHAnimJoint* SoHAnimJoint1606 = new SoHAnimJoint();
SoHAnimJoint1606->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1606);

SoHAnimJoint* SoHAnimJoint1607 = new SoHAnimJoint();
SoHAnimJoint1607->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1607);

SoHAnimJoint* SoHAnimJoint1608 = new SoHAnimJoint();
SoHAnimJoint1608->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1608);

SoHAnimJoint* SoHAnimJoint1609 = new SoHAnimJoint();
SoHAnimJoint1609->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1609);

SoHAnimJoint* SoHAnimJoint1610 = new SoHAnimJoint();
SoHAnimJoint1610->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1610);

SoHAnimJoint* SoHAnimJoint1611 = new SoHAnimJoint();
SoHAnimJoint1611->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1611);

SoHAnimJoint* SoHAnimJoint1612 = new SoHAnimJoint();
SoHAnimJoint1612->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1612);

SoHAnimJoint* SoHAnimJoint1613 = new SoHAnimJoint();
SoHAnimJoint1613->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1613);

SoHAnimJoint* SoHAnimJoint1614 = new SoHAnimJoint();
SoHAnimJoint1614->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1614);

SoHAnimJoint* SoHAnimJoint1615 = new SoHAnimJoint();
SoHAnimJoint1615->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1615);

SoHAnimJoint* SoHAnimJoint1616 = new SoHAnimJoint();
SoHAnimJoint1616->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1616);

SoHAnimJoint* SoHAnimJoint1617 = new SoHAnimJoint();
SoHAnimJoint1617->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1617);

SoHAnimJoint* SoHAnimJoint1618 = new SoHAnimJoint();
SoHAnimJoint1618->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1618);

SoHAnimJoint* SoHAnimJoint1619 = new SoHAnimJoint();
SoHAnimJoint1619->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1619);

SoHAnimJoint* SoHAnimJoint1620 = new SoHAnimJoint();
SoHAnimJoint1620->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1620);

SoHAnimJoint* SoHAnimJoint1621 = new SoHAnimJoint();
SoHAnimJoint1621->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1621);

SoHAnimJoint* SoHAnimJoint1622 = new SoHAnimJoint();
SoHAnimJoint1622->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1622);

SoHAnimJoint* SoHAnimJoint1623 = new SoHAnimJoint();
SoHAnimJoint1623->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1623);

SoHAnimJoint* SoHAnimJoint1624 = new SoHAnimJoint();
SoHAnimJoint1624->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1624);

SoHAnimJoint* SoHAnimJoint1625 = new SoHAnimJoint();
SoHAnimJoint1625->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1625);

SoHAnimJoint* SoHAnimJoint1626 = new SoHAnimJoint();
SoHAnimJoint1626->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1626);

SoHAnimJoint* SoHAnimJoint1627 = new SoHAnimJoint();
SoHAnimJoint1627->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1627);

SoHAnimJoint* SoHAnimJoint1628 = new SoHAnimJoint();
SoHAnimJoint1628->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1628);

SoHAnimJoint* SoHAnimJoint1629 = new SoHAnimJoint();
SoHAnimJoint1629->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1629);

SoHAnimJoint* SoHAnimJoint1630 = new SoHAnimJoint();
SoHAnimJoint1630->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1630);

SoHAnimJoint* SoHAnimJoint1631 = new SoHAnimJoint();
SoHAnimJoint1631->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1631);

SoHAnimJoint* SoHAnimJoint1632 = new SoHAnimJoint();
SoHAnimJoint1632->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1632);

SoHAnimJoint* SoHAnimJoint1633 = new SoHAnimJoint();
SoHAnimJoint1633->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1633);

SoHAnimJoint* SoHAnimJoint1634 = new SoHAnimJoint();
SoHAnimJoint1634->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1634);

SoHAnimJoint* SoHAnimJoint1635 = new SoHAnimJoint();
SoHAnimJoint1635->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1635);

SoHAnimJoint* SoHAnimJoint1636 = new SoHAnimJoint();
SoHAnimJoint1636->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1636);

SoHAnimJoint* SoHAnimJoint1637 = new SoHAnimJoint();
SoHAnimJoint1637->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1637);

SoHAnimJoint* SoHAnimJoint1638 = new SoHAnimJoint();
SoHAnimJoint1638->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1638);

SoHAnimJoint* SoHAnimJoint1639 = new SoHAnimJoint();
SoHAnimJoint1639->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1639);

SoHAnimJoint* SoHAnimJoint1640 = new SoHAnimJoint();
SoHAnimJoint1640->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1640);

SoHAnimJoint* SoHAnimJoint1641 = new SoHAnimJoint();
SoHAnimJoint1641->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1641);

SoHAnimJoint* SoHAnimJoint1642 = new SoHAnimJoint();
SoHAnimJoint1642->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1642);

SoHAnimJoint* SoHAnimJoint1643 = new SoHAnimJoint();
SoHAnimJoint1643->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1643);

SoHAnimJoint* SoHAnimJoint1644 = new SoHAnimJoint();
SoHAnimJoint1644->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1644);

SoHAnimJoint* SoHAnimJoint1645 = new SoHAnimJoint();
SoHAnimJoint1645->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1645);

SoHAnimJoint* SoHAnimJoint1646 = new SoHAnimJoint();
SoHAnimJoint1646->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1646);

SoHAnimJoint* SoHAnimJoint1647 = new SoHAnimJoint();
SoHAnimJoint1647->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1647);

SoHAnimJoint* SoHAnimJoint1648 = new SoHAnimJoint();
SoHAnimJoint1648->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1648);

SoHAnimJoint* SoHAnimJoint1649 = new SoHAnimJoint();
SoHAnimJoint1649->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1649);

SoHAnimJoint* SoHAnimJoint1650 = new SoHAnimJoint();
SoHAnimJoint1650->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1650);

SoHAnimJoint* SoHAnimJoint1651 = new SoHAnimJoint();
SoHAnimJoint1651->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1651);

SoHAnimJoint* SoHAnimJoint1652 = new SoHAnimJoint();
SoHAnimJoint1652->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1652);

SoHAnimJoint* SoHAnimJoint1653 = new SoHAnimJoint();
SoHAnimJoint1653->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1653);

SoHAnimJoint* SoHAnimJoint1654 = new SoHAnimJoint();
SoHAnimJoint1654->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1654);

SoHAnimJoint* SoHAnimJoint1655 = new SoHAnimJoint();
SoHAnimJoint1655->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1655);

SoHAnimJoint* SoHAnimJoint1656 = new SoHAnimJoint();
SoHAnimJoint1656->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1656);

SoHAnimJoint* SoHAnimJoint1657 = new SoHAnimJoint();
SoHAnimJoint1657->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1657);

SoHAnimJoint* SoHAnimJoint1658 = new SoHAnimJoint();
SoHAnimJoint1658->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1658);

SoHAnimJoint* SoHAnimJoint1659 = new SoHAnimJoint();
SoHAnimJoint1659->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1659);

SoHAnimJoint* SoHAnimJoint1660 = new SoHAnimJoint();
SoHAnimJoint1660->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1660);

SoHAnimJoint* SoHAnimJoint1661 = new SoHAnimJoint();
SoHAnimJoint1661->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1661);

SoHAnimJoint* SoHAnimJoint1662 = new SoHAnimJoint();
SoHAnimJoint1662->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1662);

SoHAnimJoint* SoHAnimJoint1663 = new SoHAnimJoint();
SoHAnimJoint1663->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1663);

SoHAnimJoint* SoHAnimJoint1664 = new SoHAnimJoint();
SoHAnimJoint1664->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1664);

SoHAnimJoint* SoHAnimJoint1665 = new SoHAnimJoint();
SoHAnimJoint1665->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1665);

SoHAnimJoint* SoHAnimJoint1666 = new SoHAnimJoint();
SoHAnimJoint1666->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1666);

SoHAnimJoint* SoHAnimJoint1667 = new SoHAnimJoint();
SoHAnimJoint1667->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1667);

SoHAnimJoint* SoHAnimJoint1668 = new SoHAnimJoint();
SoHAnimJoint1668->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1668);

SoHAnimJoint* SoHAnimJoint1669 = new SoHAnimJoint();
SoHAnimJoint1669->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1669);

SoHAnimJoint* SoHAnimJoint1670 = new SoHAnimJoint();
SoHAnimJoint1670->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1670);

SoHAnimJoint* SoHAnimJoint1671 = new SoHAnimJoint();
SoHAnimJoint1671->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1671);

SoHAnimJoint* SoHAnimJoint1672 = new SoHAnimJoint();
SoHAnimJoint1672->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1672);

SoHAnimJoint* SoHAnimJoint1673 = new SoHAnimJoint();
SoHAnimJoint1673->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1673);

SoHAnimJoint* SoHAnimJoint1674 = new SoHAnimJoint();
SoHAnimJoint1674->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1674);

SoHAnimJoint* SoHAnimJoint1675 = new SoHAnimJoint();
SoHAnimJoint1675->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1675);

SoHAnimJoint* SoHAnimJoint1676 = new SoHAnimJoint();
SoHAnimJoint1676->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1676);

SoHAnimJoint* SoHAnimJoint1677 = new SoHAnimJoint();
SoHAnimJoint1677->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1677);

SoHAnimJoint* SoHAnimJoint1678 = new SoHAnimJoint();
SoHAnimJoint1678->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1678);

SoHAnimJoint* SoHAnimJoint1679 = new SoHAnimJoint();
SoHAnimJoint1679->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1679);

SoHAnimJoint* SoHAnimJoint1680 = new SoHAnimJoint();
SoHAnimJoint1680->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1680);

SoHAnimJoint* SoHAnimJoint1681 = new SoHAnimJoint();
SoHAnimJoint1681->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid41->setJoints(*SoHAnimJoint1681);

SoHAnimSegment* SoHAnimSegment1682 = new SoHAnimSegment();
SoHAnimSegment1682->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1682);

SoHAnimSegment* SoHAnimSegment1683 = new SoHAnimSegment();
SoHAnimSegment1683->setUSE(QString("hanim_skull"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1683);

SoHAnimSegment* SoHAnimSegment1684 = new SoHAnimSegment();
SoHAnimSegment1684->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1684);

SoHAnimSegment* SoHAnimSegment1685 = new SoHAnimSegment();
SoHAnimSegment1685->setUSE(QString("hanim_c1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1685);

SoHAnimSegment* SoHAnimSegment1686 = new SoHAnimSegment();
SoHAnimSegment1686->setUSE(QString("hanim_c2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1686);

SoHAnimSegment* SoHAnimSegment1687 = new SoHAnimSegment();
SoHAnimSegment1687->setUSE(QString("hanim_c3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1687);

SoHAnimSegment* SoHAnimSegment1688 = new SoHAnimSegment();
SoHAnimSegment1688->setUSE(QString("hanim_c4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1688);

SoHAnimSegment* SoHAnimSegment1689 = new SoHAnimSegment();
SoHAnimSegment1689->setUSE(QString("hanim_c5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1689);

SoHAnimSegment* SoHAnimSegment1690 = new SoHAnimSegment();
SoHAnimSegment1690->setUSE(QString("hanim_c6"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1690);

SoHAnimSegment* SoHAnimSegment1691 = new SoHAnimSegment();
SoHAnimSegment1691->setUSE(QString("hanim_c7"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1691);

SoHAnimSegment* SoHAnimSegment1692 = new SoHAnimSegment();
SoHAnimSegment1692->setUSE(QString("hanim_t1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1692);

SoHAnimSegment* SoHAnimSegment1693 = new SoHAnimSegment();
SoHAnimSegment1693->setUSE(QString("hanim_t2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1693);

SoHAnimSegment* SoHAnimSegment1694 = new SoHAnimSegment();
SoHAnimSegment1694->setUSE(QString("hanim_t3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1694);

SoHAnimSegment* SoHAnimSegment1695 = new SoHAnimSegment();
SoHAnimSegment1695->setUSE(QString("hanim_t4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1695);

SoHAnimSegment* SoHAnimSegment1696 = new SoHAnimSegment();
SoHAnimSegment1696->setUSE(QString("hanim_t5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1696);

SoHAnimSegment* SoHAnimSegment1697 = new SoHAnimSegment();
SoHAnimSegment1697->setUSE(QString("hanim_t6"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1697);

SoHAnimSegment* SoHAnimSegment1698 = new SoHAnimSegment();
SoHAnimSegment1698->setUSE(QString("hanim_t7"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1698);

SoHAnimSegment* SoHAnimSegment1699 = new SoHAnimSegment();
SoHAnimSegment1699->setUSE(QString("hanim_t8"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1699);

SoHAnimSegment* SoHAnimSegment1700 = new SoHAnimSegment();
SoHAnimSegment1700->setUSE(QString("hanim_t9"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1700);

SoHAnimSegment* SoHAnimSegment1701 = new SoHAnimSegment();
SoHAnimSegment1701->setUSE(QString("hanim_t10"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1701);

SoHAnimSegment* SoHAnimSegment1702 = new SoHAnimSegment();
SoHAnimSegment1702->setUSE(QString("hanim_t11"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1702);

SoHAnimSegment* SoHAnimSegment1703 = new SoHAnimSegment();
SoHAnimSegment1703->setUSE(QString("hanim_t12"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1703);

SoHAnimSegment* SoHAnimSegment1704 = new SoHAnimSegment();
SoHAnimSegment1704->setUSE(QString("hanim_l1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1704);

SoHAnimSegment* SoHAnimSegment1705 = new SoHAnimSegment();
SoHAnimSegment1705->setUSE(QString("hanim_l2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1705);

SoHAnimSegment* SoHAnimSegment1706 = new SoHAnimSegment();
SoHAnimSegment1706->setUSE(QString("hanim_l3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1706);

SoHAnimSegment* SoHAnimSegment1707 = new SoHAnimSegment();
SoHAnimSegment1707->setUSE(QString("hanim_l4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1707);

SoHAnimSegment* SoHAnimSegment1708 = new SoHAnimSegment();
SoHAnimSegment1708->setUSE(QString("hanim_l5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1708);

SoHAnimSegment* SoHAnimSegment1709 = new SoHAnimSegment();
SoHAnimSegment1709->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1709);

SoHAnimSegment* SoHAnimSegment1710 = new SoHAnimSegment();
SoHAnimSegment1710->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1710);

SoHAnimSegment* SoHAnimSegment1711 = new SoHAnimSegment();
SoHAnimSegment1711->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1711);

SoHAnimSegment* SoHAnimSegment1712 = new SoHAnimSegment();
SoHAnimSegment1712->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1712);

SoHAnimSegment* SoHAnimSegment1713 = new SoHAnimSegment();
SoHAnimSegment1713->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1713);

SoHAnimSegment* SoHAnimSegment1714 = new SoHAnimSegment();
SoHAnimSegment1714->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1714);

SoHAnimSegment* SoHAnimSegment1715 = new SoHAnimSegment();
SoHAnimSegment1715->setUSE(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1715);

SoHAnimSegment* SoHAnimSegment1716 = new SoHAnimSegment();
SoHAnimSegment1716->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1716);

SoHAnimSegment* SoHAnimSegment1717 = new SoHAnimSegment();
SoHAnimSegment1717->setUSE(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1717);

SoHAnimSegment* SoHAnimSegment1718 = new SoHAnimSegment();
SoHAnimSegment1718->setUSE(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1718);

SoHAnimSegment* SoHAnimSegment1719 = new SoHAnimSegment();
SoHAnimSegment1719->setUSE(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1719);

SoHAnimSegment* SoHAnimSegment1720 = new SoHAnimSegment();
SoHAnimSegment1720->setUSE(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1720);

SoHAnimSegment* SoHAnimSegment1721 = new SoHAnimSegment();
SoHAnimSegment1721->setUSE(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1721);

SoHAnimSegment* SoHAnimSegment1722 = new SoHAnimSegment();
SoHAnimSegment1722->setUSE(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1722);

SoHAnimSegment* SoHAnimSegment1723 = new SoHAnimSegment();
SoHAnimSegment1723->setUSE(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1723);

SoHAnimSegment* SoHAnimSegment1724 = new SoHAnimSegment();
SoHAnimSegment1724->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1724);

SoHAnimSegment* SoHAnimSegment1725 = new SoHAnimSegment();
SoHAnimSegment1725->setUSE(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1725);

SoHAnimSegment* SoHAnimSegment1726 = new SoHAnimSegment();
SoHAnimSegment1726->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1726);

SoHAnimSegment* SoHAnimSegment1727 = new SoHAnimSegment();
SoHAnimSegment1727->setUSE(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1727);

SoHAnimSegment* SoHAnimSegment1728 = new SoHAnimSegment();
SoHAnimSegment1728->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1728);

SoHAnimSegment* SoHAnimSegment1729 = new SoHAnimSegment();
SoHAnimSegment1729->setUSE(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1729);

SoHAnimSegment* SoHAnimSegment1730 = new SoHAnimSegment();
SoHAnimSegment1730->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1730);

SoHAnimSegment* SoHAnimSegment1731 = new SoHAnimSegment();
SoHAnimSegment1731->setUSE(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1731);

SoHAnimSegment* SoHAnimSegment1732 = new SoHAnimSegment();
SoHAnimSegment1732->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1732);

SoHAnimSegment* SoHAnimSegment1733 = new SoHAnimSegment();
SoHAnimSegment1733->setUSE(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1733);

SoHAnimSegment* SoHAnimSegment1734 = new SoHAnimSegment();
SoHAnimSegment1734->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1734);

SoHAnimSegment* SoHAnimSegment1735 = new SoHAnimSegment();
SoHAnimSegment1735->setUSE(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1735);

SoHAnimSegment* SoHAnimSegment1736 = new SoHAnimSegment();
SoHAnimSegment1736->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1736);

SoHAnimSegment* SoHAnimSegment1737 = new SoHAnimSegment();
SoHAnimSegment1737->setUSE(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1737);

SoHAnimSegment* SoHAnimSegment1738 = new SoHAnimSegment();
SoHAnimSegment1738->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1738);

SoHAnimSegment* SoHAnimSegment1739 = new SoHAnimSegment();
SoHAnimSegment1739->setUSE(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1739);

SoHAnimSegment* SoHAnimSegment1740 = new SoHAnimSegment();
SoHAnimSegment1740->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1740);

SoHAnimSegment* SoHAnimSegment1741 = new SoHAnimSegment();
SoHAnimSegment1741->setUSE(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1741);

SoHAnimSegment* SoHAnimSegment1742 = new SoHAnimSegment();
SoHAnimSegment1742->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1742);

SoHAnimSegment* SoHAnimSegment1743 = new SoHAnimSegment();
SoHAnimSegment1743->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1743);

SoHAnimSegment* SoHAnimSegment1744 = new SoHAnimSegment();
SoHAnimSegment1744->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1744);

SoHAnimSegment* SoHAnimSegment1745 = new SoHAnimSegment();
SoHAnimSegment1745->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1745);

SoHAnimSegment* SoHAnimSegment1746 = new SoHAnimSegment();
SoHAnimSegment1746->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1746);

SoHAnimSegment* SoHAnimSegment1747 = new SoHAnimSegment();
SoHAnimSegment1747->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1747);

SoHAnimSegment* SoHAnimSegment1748 = new SoHAnimSegment();
SoHAnimSegment1748->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1748);

SoHAnimSegment* SoHAnimSegment1749 = new SoHAnimSegment();
SoHAnimSegment1749->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1749);

SoHAnimSegment* SoHAnimSegment1750 = new SoHAnimSegment();
SoHAnimSegment1750->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1750);

SoHAnimSegment* SoHAnimSegment1751 = new SoHAnimSegment();
SoHAnimSegment1751->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1751);

SoHAnimSegment* SoHAnimSegment1752 = new SoHAnimSegment();
SoHAnimSegment1752->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1752);

SoHAnimSegment* SoHAnimSegment1753 = new SoHAnimSegment();
SoHAnimSegment1753->setUSE(QString("hanim_r_metacarpal_1"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1753);

SoHAnimSegment* SoHAnimSegment1754 = new SoHAnimSegment();
SoHAnimSegment1754->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1754);

SoHAnimSegment* SoHAnimSegment1755 = new SoHAnimSegment();
SoHAnimSegment1755->setUSE(QString("hanim_r_metacarpal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1755);

SoHAnimSegment* SoHAnimSegment1756 = new SoHAnimSegment();
SoHAnimSegment1756->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1756);

SoHAnimSegment* SoHAnimSegment1757 = new SoHAnimSegment();
SoHAnimSegment1757->setUSE(QString("hanim_r_metacarpal_3"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1757);

SoHAnimSegment* SoHAnimSegment1758 = new SoHAnimSegment();
SoHAnimSegment1758->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1758);

SoHAnimSegment* SoHAnimSegment1759 = new SoHAnimSegment();
SoHAnimSegment1759->setUSE(QString("hanim_r_metacarpal_4"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1759);

SoHAnimSegment* SoHAnimSegment1760 = new SoHAnimSegment();
SoHAnimSegment1760->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1760);

SoHAnimSegment* SoHAnimSegment1761 = new SoHAnimSegment();
SoHAnimSegment1761->setUSE(QString("hanim_r_metacarpal_5"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1761);

SoHAnimSegment* SoHAnimSegment1762 = new SoHAnimSegment();
SoHAnimSegment1762->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1762);

SoHAnimSegment* SoHAnimSegment1763 = new SoHAnimSegment();
SoHAnimSegment1763->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1763);

SoHAnimSegment* SoHAnimSegment1764 = new SoHAnimSegment();
SoHAnimSegment1764->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1764);

SoHAnimSegment* SoHAnimSegment1765 = new SoHAnimSegment();
SoHAnimSegment1765->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1765);

SoHAnimSegment* SoHAnimSegment1766 = new SoHAnimSegment();
SoHAnimSegment1766->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1766);

SoHAnimSegment* SoHAnimSegment1767 = new SoHAnimSegment();
SoHAnimSegment1767->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1767);

SoHAnimSegment* SoHAnimSegment1768 = new SoHAnimSegment();
SoHAnimSegment1768->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1768);

SoHAnimSegment* SoHAnimSegment1769 = new SoHAnimSegment();
SoHAnimSegment1769->setUSE(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1769);

SoHAnimSegment* SoHAnimSegment1770 = new SoHAnimSegment();
SoHAnimSegment1770->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1770);

SoHAnimSegment* SoHAnimSegment1771 = new SoHAnimSegment();
SoHAnimSegment1771->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1771);

SoHAnimSegment* SoHAnimSegment1772 = new SoHAnimSegment();
SoHAnimSegment1772->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1772);

SoHAnimSegment* SoHAnimSegment1773 = new SoHAnimSegment();
SoHAnimSegment1773->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1773);

SoHAnimSegment* SoHAnimSegment1774 = new SoHAnimSegment();
SoHAnimSegment1774->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1774);

SoHAnimSegment* SoHAnimSegment1775 = new SoHAnimSegment();
SoHAnimSegment1775->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid41->setSegments(*SoHAnimSegment1775);

SoHAnimSite* SoHAnimSite1776 = new SoHAnimSite();
SoHAnimSite1776->setUSE(QString("hanim_crotch_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1776);

SoHAnimSite* SoHAnimSite1777 = new SoHAnimSite();
SoHAnimSite1777->setUSE(QString("hanim_skull_vertex_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1777);

SoHAnimSite* SoHAnimSite1778 = new SoHAnimSite();
SoHAnimSite1778->setUSE(QString("hanim_sellion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1778);

SoHAnimSite* SoHAnimSite1779 = new SoHAnimSite();
SoHAnimSite1779->setUSE(QString("hanim_supramenton_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1779);

SoHAnimSite* SoHAnimSite1780 = new SoHAnimSite();
SoHAnimSite1780->setUSE(QString("hanim_nuchale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1780);

SoHAnimSite* SoHAnimSite1781 = new SoHAnimSite();
SoHAnimSite1781->setUSE(QString("hanim_suprasternale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1781);

SoHAnimSite* SoHAnimSite1782 = new SoHAnimSite();
SoHAnimSite1782->setUSE(QString("hanim_cervicale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1782);

SoHAnimSite* SoHAnimSite1783 = new SoHAnimSite();
SoHAnimSite1783->setUSE(QString("hanim_substernale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1783);

SoHAnimSite* SoHAnimSite1784 = new SoHAnimSite();
SoHAnimSite1784->setUSE(QString("hanim_rib10_midspine_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1784);

SoHAnimSite* SoHAnimSite1785 = new SoHAnimSite();
SoHAnimSite1785->setUSE(QString("hanim_waist_preferred_posterior_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1785);

SoHAnimSite* SoHAnimSite1786 = new SoHAnimSite();
SoHAnimSite1786->setUSE(QString("hanim_navel_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1786);

SoHAnimSite* SoHAnimSite1787 = new SoHAnimSite();
SoHAnimSite1787->setUSE(QString("hanim_l_acromion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1787);

SoHAnimSite* SoHAnimSite1788 = new SoHAnimSite();
SoHAnimSite1788->setUSE(QString("hanim_r_acromion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1788);

SoHAnimSite* SoHAnimSite1789 = new SoHAnimSite();
SoHAnimSite1789->setUSE(QString("hanim_r_asis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1789);

SoHAnimSite* SoHAnimSite1790 = new SoHAnimSite();
SoHAnimSite1790->setUSE(QString("hanim_l_asis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1790);

SoHAnimSite* SoHAnimSite1791 = new SoHAnimSite();
SoHAnimSite1791->setUSE(QString("hanim_l_axilla_distal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1791);

SoHAnimSite* SoHAnimSite1792 = new SoHAnimSite();
SoHAnimSite1792->setUSE(QString("hanim_r_axilla_distal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1792);

SoHAnimSite* SoHAnimSite1793 = new SoHAnimSite();
SoHAnimSite1793->setUSE(QString("hanim_l_axilla_proximal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1793);

SoHAnimSite* SoHAnimSite1794 = new SoHAnimSite();
SoHAnimSite1794->setUSE(QString("hanim_r_axilla_proximal_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1794);

SoHAnimSite* SoHAnimSite1795 = new SoHAnimSite();
SoHAnimSite1795->setUSE(QString("hanim_l_calcaneus_posterior_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1795);

SoHAnimSite* SoHAnimSite1796 = new SoHAnimSite();
SoHAnimSite1796->setUSE(QString("hanim_r_calcaneus_posterior_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1796);

SoHAnimSite* SoHAnimSite1797 = new SoHAnimSite();
SoHAnimSite1797->setUSE(QString("hanim_l_carpal_distal_phalanx_1_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1797);

SoHAnimSite* SoHAnimSite1798 = new SoHAnimSite();
SoHAnimSite1798->setUSE(QString("hanim_r_carpal_distal_phalanx_1_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1798);

SoHAnimSite* SoHAnimSite1799 = new SoHAnimSite();
SoHAnimSite1799->setUSE(QString("hanim_l_carpal_distal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1799);

SoHAnimSite* SoHAnimSite1800 = new SoHAnimSite();
SoHAnimSite1800->setUSE(QString("hanim_r_carpal_distal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1800);

SoHAnimSite* SoHAnimSite1801 = new SoHAnimSite();
SoHAnimSite1801->setUSE(QString("hanim_l_carpal_distal_phalanx_3_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1801);

SoHAnimSite* SoHAnimSite1802 = new SoHAnimSite();
SoHAnimSite1802->setUSE(QString("hanim_r_carpal_distal_phalanx_3_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1802);

SoHAnimSite* SoHAnimSite1803 = new SoHAnimSite();
SoHAnimSite1803->setUSE(QString("hanim_l_carpal_distal_phalanx_4_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1803);

SoHAnimSite* SoHAnimSite1804 = new SoHAnimSite();
SoHAnimSite1804->setUSE(QString("hanim_r_carpal_distal_phalanx_4_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1804);

SoHAnimSite* SoHAnimSite1805 = new SoHAnimSite();
SoHAnimSite1805->setUSE(QString("hanim_l_carpal_distal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1805);

SoHAnimSite* SoHAnimSite1806 = new SoHAnimSite();
SoHAnimSite1806->setUSE(QString("hanim_r_carpal_distal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1806);

SoHAnimSite* SoHAnimSite1807 = new SoHAnimSite();
SoHAnimSite1807->setUSE(QString("hanim_l_clavicle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1807);

SoHAnimSite* SoHAnimSite1808 = new SoHAnimSite();
SoHAnimSite1808->setUSE(QString("hanim_r_clavicle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1808);

SoHAnimSite* SoHAnimSite1809 = new SoHAnimSite();
SoHAnimSite1809->setUSE(QString("hanim_l_dactylion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1809);

SoHAnimSite* SoHAnimSite1810 = new SoHAnimSite();
SoHAnimSite1810->setUSE(QString("hanim_r_dactylion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1810);

SoHAnimSite* SoHAnimSite1811 = new SoHAnimSite();
SoHAnimSite1811->setUSE(QString("hanim_l_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1811);

SoHAnimSite* SoHAnimSite1812 = new SoHAnimSite();
SoHAnimSite1812->setUSE(QString("hanim_r_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1812);

SoHAnimSite* SoHAnimSite1813 = new SoHAnimSite();
SoHAnimSite1813->setUSE(QString("hanim_l_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1813);

SoHAnimSite* SoHAnimSite1814 = new SoHAnimSite();
SoHAnimSite1814->setUSE(QString("hanim_r_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1814);

SoHAnimSite* SoHAnimSite1815 = new SoHAnimSite();
SoHAnimSite1815->setUSE(QString("hanim_l_forefoot_tip_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1815);

SoHAnimSite* SoHAnimSite1816 = new SoHAnimSite();
SoHAnimSite1816->setUSE(QString("hanim_r_forefoot_tip_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1816);

SoHAnimSite* SoHAnimSite1817 = new SoHAnimSite();
SoHAnimSite1817->setUSE(QString("hanim_r_gonion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1817);

SoHAnimSite* SoHAnimSite1818 = new SoHAnimSite();
SoHAnimSite1818->setUSE(QString("hanim_l_gonion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1818);

SoHAnimSite* SoHAnimSite1819 = new SoHAnimSite();
SoHAnimSite1819->setUSE(QString("hanim_l_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1819);

SoHAnimSite* SoHAnimSite1820 = new SoHAnimSite();
SoHAnimSite1820->setUSE(QString("hanim_r_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1820);

SoHAnimSite* SoHAnimSite1821 = new SoHAnimSite();
SoHAnimSite1821->setUSE(QString("hanim_l_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1821);

SoHAnimSite* SoHAnimSite1822 = new SoHAnimSite();
SoHAnimSite1822->setUSE(QString("hanim_r_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1822);

SoHAnimSite* SoHAnimSite1823 = new SoHAnimSite();
SoHAnimSite1823->setUSE(QString("hanim_r_iliocristale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1823);

SoHAnimSite* SoHAnimSite1824 = new SoHAnimSite();
SoHAnimSite1824->setUSE(QString("hanim_l_iliocristale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1824);

SoHAnimSite* SoHAnimSite1825 = new SoHAnimSite();
SoHAnimSite1825->setUSE(QString("hanim_r_infraorbitale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1825);

SoHAnimSite* SoHAnimSite1826 = new SoHAnimSite();
SoHAnimSite1826->setUSE(QString("hanim_l_infraorbitale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1826);

SoHAnimSite* SoHAnimSite1827 = new SoHAnimSite();
SoHAnimSite1827->setUSE(QString("hanim_l_knee_crease_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1827);

SoHAnimSite* SoHAnimSite1828 = new SoHAnimSite();
SoHAnimSite1828->setUSE(QString("hanim_r_knee_crease_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1828);

SoHAnimSite* SoHAnimSite1829 = new SoHAnimSite();
SoHAnimSite1829->setUSE(QString("hanim_l_lateral_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1829);

SoHAnimSite* SoHAnimSite1830 = new SoHAnimSite();
SoHAnimSite1830->setUSE(QString("hanim_r_lateral_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1830);

SoHAnimSite* SoHAnimSite1831 = new SoHAnimSite();
SoHAnimSite1831->setUSE(QString("hanim_l_medial_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1831);

SoHAnimSite* SoHAnimSite1832 = new SoHAnimSite();
SoHAnimSite1832->setUSE(QString("hanim_r_medial_malleolus_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1832);

SoHAnimSite* SoHAnimSite1833 = new SoHAnimSite();
SoHAnimSite1833->setUSE(QString("hanim_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1833);

SoHAnimSite* SoHAnimSite1834 = new SoHAnimSite();
SoHAnimSite1834->setUSE(QString("hanim_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1834);

SoHAnimSite* SoHAnimSite1835 = new SoHAnimSite();
SoHAnimSite1835->setUSE(QString("hanim_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1835);

SoHAnimSite* SoHAnimSite1836 = new SoHAnimSite();
SoHAnimSite1836->setUSE(QString("hanim_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1836);

SoHAnimSite* SoHAnimSite1837 = new SoHAnimSite();
SoHAnimSite1837->setUSE(QString("hanim_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1837);

SoHAnimSite* SoHAnimSite1838 = new SoHAnimSite();
SoHAnimSite1838->setUSE(QString("hanim_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1838);

SoHAnimSite* SoHAnimSite1839 = new SoHAnimSite();
SoHAnimSite1839->setUSE(QString("hanim_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1839);

SoHAnimSite* SoHAnimSite1840 = new SoHAnimSite();
SoHAnimSite1840->setUSE(QString("hanim_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1840);

SoHAnimSite* SoHAnimSite1841 = new SoHAnimSite();
SoHAnimSite1841->setUSE(QString("hanim_r_neck_base_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1841);

SoHAnimSite* SoHAnimSite1842 = new SoHAnimSite();
SoHAnimSite1842->setUSE(QString("hanim_l_neck_base_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1842);

SoHAnimSite* SoHAnimSite1843 = new SoHAnimSite();
SoHAnimSite1843->setUSE(QString("hanim_l_olecranon_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1843);

SoHAnimSite* SoHAnimSite1844 = new SoHAnimSite();
SoHAnimSite1844->setUSE(QString("hanim_r_olecranon_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1844);

SoHAnimSite* SoHAnimSite1845 = new SoHAnimSite();
SoHAnimSite1845->setUSE(QString("hanim_r_psis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1845);

SoHAnimSite* SoHAnimSite1846 = new SoHAnimSite();
SoHAnimSite1846->setUSE(QString("hanim_l_psis_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1846);

SoHAnimSite* SoHAnimSite1847 = new SoHAnimSite();
SoHAnimSite1847->setUSE(QString("hanim_l_radial_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1847);

SoHAnimSite* SoHAnimSite1848 = new SoHAnimSite();
SoHAnimSite1848->setUSE(QString("hanim_r_radial_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1848);

SoHAnimSite* SoHAnimSite1849 = new SoHAnimSite();
SoHAnimSite1849->setUSE(QString("hanim_l_radiale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1849);

SoHAnimSite* SoHAnimSite1850 = new SoHAnimSite();
SoHAnimSite1850->setUSE(QString("hanim_r_radiale_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1850);

SoHAnimSite* SoHAnimSite1851 = new SoHAnimSite();
SoHAnimSite1851->setUSE(QString("hanim_r_rib10_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1851);

SoHAnimSite* SoHAnimSite1852 = new SoHAnimSite();
SoHAnimSite1852->setUSE(QString("hanim_l_rib10_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1852);

SoHAnimSite* SoHAnimSite1853 = new SoHAnimSite();
SoHAnimSite1853->setUSE(QString("hanim_temporomandibular_l_site_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1853);

SoHAnimSite* SoHAnimSite1854 = new SoHAnimSite();
SoHAnimSite1854->setUSE(QString("hanim_temporomandibular_r_site_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1854);

SoHAnimSite* SoHAnimSite1855 = new SoHAnimSite();
SoHAnimSite1855->setUSE(QString("hanim_l_sphyrion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1855);

SoHAnimSite* SoHAnimSite1856 = new SoHAnimSite();
SoHAnimSite1856->setUSE(QString("hanim_r_sphyrion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1856);

SoHAnimSite* SoHAnimSite1857 = new SoHAnimSite();
SoHAnimSite1857->setUSE(QString("hanim_l_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1857);

SoHAnimSite* SoHAnimSite1858 = new SoHAnimSite();
SoHAnimSite1858->setUSE(QString("hanim_r_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1858);

SoHAnimSite* SoHAnimSite1859 = new SoHAnimSite();
SoHAnimSite1859->setUSE(QString("hanim_r_thelion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1859);

SoHAnimSite* SoHAnimSite1860 = new SoHAnimSite();
SoHAnimSite1860->setUSE(QString("hanim_l_thelion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1860);

SoHAnimSite* SoHAnimSite1861 = new SoHAnimSite();
SoHAnimSite1861->setUSE(QString("hanim_r_tragion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1861);

SoHAnimSite* SoHAnimSite1862 = new SoHAnimSite();
SoHAnimSite1862->setUSE(QString("hanim_l_tragion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1862);

SoHAnimSite* SoHAnimSite1863 = new SoHAnimSite();
SoHAnimSite1863->setUSE(QString("hanim_r_trochanterion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1863);

SoHAnimSite* SoHAnimSite1864 = new SoHAnimSite();
SoHAnimSite1864->setUSE(QString("hanim_l_trochanterion_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1864);

SoHAnimSite* SoHAnimSite1865 = new SoHAnimSite();
SoHAnimSite1865->setUSE(QString("hanim_l_ulnar_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1865);

SoHAnimSite* SoHAnimSite1866 = new SoHAnimSite();
SoHAnimSite1866->setUSE(QString("hanim_r_ulnar_styloid_pt"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1866);

SoHAnimSite* SoHAnimSite1867 = new SoHAnimSite();
SoHAnimSite1867->setDEF(QString("hanim_l_inclined_view"));
SoHAnimSite1867->X3DNode::setName(QString("l_inclined_view"));
SoHAnimSite1867->setTranslation(new float[]{1.62,1.05,2.06});
SoHAnimSite1867->setRotation(new float[]{-0.113,0.993,0.0347,0.671});
SoTouchSensor* SoTouchSensor1868 = new SoTouchSensor();
SoTouchSensor1868->setDescription(QString("HAnimSite l_inclined_view"));
SoHAnimSite1867->addChild(*SoTouchSensor1868);

SoShape* SoShape1869 = new SoShape();
SoShape1869->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1867->addChild(*SoShape1869);

SoViewpoint* SoViewpoint1870 = new SoViewpoint();
SoViewpoint1870->setDEF(QString("hanim_l_inclined_viewpoint"));
SoViewpoint1870->setDescription(QString("left inclined"));
SoViewpoint1870->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite1867->addChild(*SoViewpoint1870);

SoAnchor* SoAnchor1871 = new SoAnchor();
SoAnchor1871->setDescription(QString("HAnimSite hanim_l_inclined_view Viewpoint"));
SoAnchor1871->setUrl(new QString[]{QString("#hanim_l_inclined_viewpoint")}, 1);
SoLOD* SoLOD1872 = new SoLOD();
SoLOD1872->setForceTransitions(true);
SoLOD1872->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1873 = new SoWorldInfo();
SoWorldInfo1873->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1872->addChildren(*SoWorldInfo1873);

SoShape* SoShape1874 = new SoShape();
SoShape1874->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1872->addChildren(SoShape1874);

SoAnchor1871->addChild(*SoLOD1872);

SoHAnimSite1867->addChild(SoAnchor1871);

SoHAnimHumanoid41->setViewpoints(*SoHAnimSite1867);

SoHAnimSite* SoHAnimSite1875 = new SoHAnimSite();
SoHAnimSite1875->setDEF(QString("hanim_r_inclined_view"));
SoHAnimSite1875->X3DNode::setName(QString("r_inclined_view"));
SoHAnimSite1875->setTranslation(new float[]{-1.62,1.05,2.06});
SoHAnimSite1875->setRotation(new float[]{-0.113,-0.993,0.0347,0.671});
SoTouchSensor* SoTouchSensor1876 = new SoTouchSensor();
SoTouchSensor1876->setDescription(QString("HAnimSite r_inclined_view"));
SoHAnimSite1875->addChild(*SoTouchSensor1876);

SoShape* SoShape1877 = new SoShape();
SoShape1877->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1875->addChild(*SoShape1877);

SoViewpoint* SoViewpoint1878 = new SoViewpoint();
SoViewpoint1878->setDEF(QString("hanim_r_inclined_viewpoint"));
SoViewpoint1878->setDescription(QString("right inclined"));
SoViewpoint1878->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1878->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1875->addChild(*SoViewpoint1878);

SoAnchor* SoAnchor1879 = new SoAnchor();
SoAnchor1879->setDescription(QString("HAnimSite hanim_r_inclined_view Viewpoint"));
SoAnchor1879->setUrl(new QString[]{QString("#hanim_r_inclined_viewpoint")}, 1);
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

SoHAnimSite1875->addChild(SoAnchor1879);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1875);

SoHAnimSite* SoHAnimSite1883 = new SoHAnimSite();
SoHAnimSite1883->setDEF(QString("hanim_front_view"));
SoHAnimSite1883->X3DNode::setName(QString("front_view"));
SoHAnimSite1883->setTranslation(new float[]{0.0,0.85,2.58});
SoTouchSensor* SoTouchSensor1884 = new SoTouchSensor();
SoTouchSensor1884->setDescription(QString("HAnimSite front_view"));
SoHAnimSite1883->addChild(*SoTouchSensor1884);

SoShape* SoShape1885 = new SoShape();
SoShape1885->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1883->addChild(*SoShape1885);

SoViewpoint* SoViewpoint1886 = new SoViewpoint();
SoViewpoint1886->setDEF(QString("hanim_front_viewpoint"));
SoViewpoint1886->setDescription(QString("front"));
SoViewpoint1886->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1886->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1883->addChild(*SoViewpoint1886);

SoAnchor* SoAnchor1887 = new SoAnchor();
SoAnchor1887->setDescription(QString("HAnimSite hanim_front_view Viewpoint"));
SoAnchor1887->setUrl(new QString[]{QString("#hanim_front_viewpoint")}, 1);
SoLOD* SoLOD1888 = new SoLOD();
SoLOD1888->setForceTransitions(true);
SoLOD1888->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1889 = new SoWorldInfo();
SoWorldInfo1889->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1888->addChildren(*SoWorldInfo1889);

SoShape* SoShape1890 = new SoShape();
SoShape1890->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1888->addChildren(SoShape1890);

SoAnchor1887->addChild(*SoLOD1888);

SoHAnimSite1883->addChild(SoAnchor1887);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1883);

SoHAnimSite* SoHAnimSite1891 = new SoHAnimSite();
SoHAnimSite1891->setDEF(QString("hanim_back_view"));
SoHAnimSite1891->X3DNode::setName(QString("back_view"));
SoHAnimSite1891->setTranslation(new float[]{0.0,0.85,-2.58});
SoHAnimSite1891->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoTouchSensor* SoTouchSensor1892 = new SoTouchSensor();
SoTouchSensor1892->setDescription(QString("HAnimSite back_view"));
SoHAnimSite1891->addChild(*SoTouchSensor1892);

SoShape* SoShape1893 = new SoShape();
SoShape1893->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1891->addChild(*SoShape1893);

SoViewpoint* SoViewpoint1894 = new SoViewpoint();
SoViewpoint1894->setDEF(QString("hanim_back_viewpoint"));
SoViewpoint1894->setDescription(QString("back"));
SoViewpoint1894->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1894->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1891->addChild(*SoViewpoint1894);

SoAnchor* SoAnchor1895 = new SoAnchor();
SoAnchor1895->setDescription(QString("HAnimSite hanim_back_view Viewpoint"));
SoAnchor1895->setUrl(new QString[]{QString("#hanim_back_viewpoint")}, 1);
SoLOD* SoLOD1896 = new SoLOD();
SoLOD1896->setForceTransitions(true);
SoLOD1896->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1897 = new SoWorldInfo();
SoWorldInfo1897->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1896->addChildren(*SoWorldInfo1897);

SoShape* SoShape1898 = new SoShape();
SoShape1898->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1896->addChildren(SoShape1898);

SoAnchor1895->addChild(*SoLOD1896);

SoHAnimSite1891->addChild(SoAnchor1895);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1891);

SoHAnimSite* SoHAnimSite1899 = new SoHAnimSite();
SoHAnimSite1899->setDEF(QString("hanim_l_side_view"));
SoHAnimSite1899->X3DNode::setName(QString("l_side_view"));
SoHAnimSite1899->setTranslation(new float[]{2.6,0.854,0.0});
SoHAnimSite1899->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoTouchSensor* SoTouchSensor1900 = new SoTouchSensor();
SoTouchSensor1900->setDescription(QString("HAnimSite l_side_view"));
SoHAnimSite1899->addChild(*SoTouchSensor1900);

SoShape* SoShape1901 = new SoShape();
SoShape1901->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1899->addChild(*SoShape1901);

SoViewpoint* SoViewpoint1902 = new SoViewpoint();
SoViewpoint1902->setDEF(QString("hanim_l_side_viewpoint"));
SoViewpoint1902->setDescription(QString("left side"));
SoViewpoint1902->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1902->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1899->addChild(*SoViewpoint1902);

SoAnchor* SoAnchor1903 = new SoAnchor();
SoAnchor1903->setDescription(QString("HAnimSite hanim_l_side_view Viewpoint"));
SoAnchor1903->setUrl(new QString[]{QString("#hanim_l_side_viewpoint")}, 1);
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

SoHAnimSite1899->addChild(SoAnchor1903);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1899);

SoHAnimSite* SoHAnimSite1907 = new SoHAnimSite();
SoHAnimSite1907->setDEF(QString("hanim_Top_view"));
SoHAnimSite1907->X3DNode::setName(QString("Top_view"));
SoHAnimSite1907->setTranslation(new float[]{0.0,3.5,0.0});
SoHAnimSite1907->setRotation(new float[]{1.0,0.0,0.0,-1.57});
SoTouchSensor* SoTouchSensor1908 = new SoTouchSensor();
SoTouchSensor1908->setDescription(QString("HAnimSite Top_view"));
SoHAnimSite1907->addChild(*SoTouchSensor1908);

SoShape* SoShape1909 = new SoShape();
SoShape1909->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1907->addChild(*SoShape1909);

SoViewpoint* SoViewpoint1910 = new SoViewpoint();
SoViewpoint1910->setDEF(QString("hanim_Top_viewpoint"));
SoViewpoint1910->setDescription(QString("Top"));
SoViewpoint1910->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1910->setCenterOfRotation(new float[]{0.0,0.9,0.0});
SoHAnimSite1907->addChild(*SoViewpoint1910);

SoAnchor* SoAnchor1911 = new SoAnchor();
SoAnchor1911->setDescription(QString("HAnimSite hanim_Top_view Viewpoint"));
SoAnchor1911->setUrl(new QString[]{QString("#hanim_Top_viewpoint")}, 1);
SoLOD* SoLOD1912 = new SoLOD();
SoLOD1912->setForceTransitions(true);
SoLOD1912->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1913 = new SoWorldInfo();
SoWorldInfo1913->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1912->addChildren(*SoWorldInfo1913);

SoShape* SoShape1914 = new SoShape();
SoShape1914->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1912->addChildren(SoShape1914);

SoAnchor1911->addChild(*SoLOD1912);

SoHAnimSite1907->addChild(SoAnchor1911);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1907);

SoHAnimSite* SoHAnimSite1915 = new SoHAnimSite();
SoHAnimSite1915->setDEF(QString("hanim_front_close_view"));
SoHAnimSite1915->X3DNode::setName(QString("front_close_view"));
SoHAnimSite1915->setTranslation(new float[]{0.0,0.854,1.575});
SoTouchSensor* SoTouchSensor1916 = new SoTouchSensor();
SoTouchSensor1916->setDescription(QString("HAnimSite front_close_view"));
SoHAnimSite1915->addChild(*SoTouchSensor1916);

SoShape* SoShape1917 = new SoShape();
SoShape1917->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1915->addChild(*SoShape1917);

SoViewpoint* SoViewpoint1918 = new SoViewpoint();
SoViewpoint1918->setDEF(QString("hanim_front_close_viewpoint"));
SoViewpoint1918->setDescription(QString("front close"));
SoViewpoint1918->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1918->setCenterOfRotation(new float[]{0.0,0.0,1.575});
SoHAnimSite1915->addChild(*SoViewpoint1918);

SoAnchor* SoAnchor1919 = new SoAnchor();
SoAnchor1919->setDescription(QString("HAnimSite hanim_front_close_view Viewpoint"));
SoAnchor1919->setUrl(new QString[]{QString("#hanim_front_close_viewpoint")}, 1);
SoLOD* SoLOD1920 = new SoLOD();
SoLOD1920->setForceTransitions(true);
SoLOD1920->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1921 = new SoWorldInfo();
SoWorldInfo1921->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1920->addChildren(*SoWorldInfo1921);

SoShape* SoShape1922 = new SoShape();
SoShape1922->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1920->addChildren(SoShape1922);

SoAnchor1919->addChild(*SoLOD1920);

SoHAnimSite1915->addChild(SoAnchor1919);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1915);

SoHAnimSite* SoHAnimSite1923 = new SoHAnimSite();
SoHAnimSite1923->setDEF(QString("hanim_side_close_view"));
SoHAnimSite1923->X3DNode::setName(QString("side_close_view"));
SoHAnimSite1923->setTranslation(new float[]{1.56,0.854,0.0});
SoHAnimSite1923->setRotation(new float[]{0.0,1.0,0.0,1.5708});
SoTouchSensor* SoTouchSensor1924 = new SoTouchSensor();
SoTouchSensor1924->setDescription(QString("HAnimSite side_close_view"));
SoHAnimSite1923->addChild(*SoTouchSensor1924);

SoShape* SoShape1925 = new SoShape();
SoShape1925->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1923->addChild(*SoShape1925);

SoViewpoint* SoViewpoint1926 = new SoViewpoint();
SoViewpoint1926->setDEF(QString("hanim_side_close_viewpoint"));
SoViewpoint1926->setDescription(QString("side close"));
SoViewpoint1926->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1926->setCenterOfRotation(new float[]{1.6,0.0,0.0});
SoHAnimSite1923->addChild(*SoViewpoint1926);

SoAnchor* SoAnchor1927 = new SoAnchor();
SoAnchor1927->setDescription(QString("HAnimSite hanim_side_close_view Viewpoint"));
SoAnchor1927->setUrl(new QString[]{QString("#hanim_side_close_viewpoint")}, 1);
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

SoHAnimSite1923->addChild(SoAnchor1927);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1923);

SoHAnimSite* SoHAnimSite1931 = new SoHAnimSite();
SoHAnimSite1931->setDEF(QString("hanim_head_front_close_view"));
SoHAnimSite1931->X3DNode::setName(QString("head_front_close_view"));
SoHAnimSite1931->setTranslation(new float[]{0.0,1.5,1.0});
SoTouchSensor* SoTouchSensor1932 = new SoTouchSensor();
SoTouchSensor1932->setDescription(QString("HAnimSite head_front_close_view"));
SoHAnimSite1931->addChild(*SoTouchSensor1932);

SoShape* SoShape1933 = new SoShape();
SoShape1933->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1931->addChild(*SoShape1933);

SoViewpoint* SoViewpoint1934 = new SoViewpoint();
SoViewpoint1934->setDEF(QString("hanim_head_front_close_viewpoint"));
SoViewpoint1934->setDescription(QString("head front close"));
SoViewpoint1934->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1934->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1931->addChild(*SoViewpoint1934);

SoAnchor* SoAnchor1935 = new SoAnchor();
SoAnchor1935->setDescription(QString("HAnimSite hanim_head_front_close_view Viewpoint"));
SoAnchor1935->setUrl(new QString[]{QString("#hanim_head_front_close_viewpoint")}, 1);
SoLOD* SoLOD1936 = new SoLOD();
SoLOD1936->setForceTransitions(true);
SoLOD1936->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1937 = new SoWorldInfo();
SoWorldInfo1937->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1936->addChildren(*SoWorldInfo1937);

SoShape* SoShape1938 = new SoShape();
SoShape1938->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1936->addChildren(SoShape1938);

SoAnchor1935->addChild(*SoLOD1936);

SoHAnimSite1931->addChild(SoAnchor1935);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1931);

SoHAnimSite* SoHAnimSite1939 = new SoHAnimSite();
SoHAnimSite1939->setDEF(QString("hanim_chest_front_close_view"));
SoHAnimSite1939->X3DNode::setName(QString("chest_front_close_view"));
SoHAnimSite1939->setTranslation(new float[]{0.0,1.2,1.0});
SoTouchSensor* SoTouchSensor1940 = new SoTouchSensor();
SoTouchSensor1940->setDescription(QString("HAnimSite chest_front_close_view"));
SoHAnimSite1939->addChild(*SoTouchSensor1940);

SoShape* SoShape1941 = new SoShape();
SoShape1941->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1939->addChild(*SoShape1941);

SoViewpoint* SoViewpoint1942 = new SoViewpoint();
SoViewpoint1942->setDEF(QString("hanim_chest_front_close_viewpoint"));
SoViewpoint1942->setDescription(QString("chest front close"));
SoViewpoint1942->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1942->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1939->addChild(*SoViewpoint1942);

SoAnchor* SoAnchor1943 = new SoAnchor();
SoAnchor1943->setDescription(QString("HAnimSite hanim_chest_front_close_view Viewpoint"));
SoAnchor1943->setUrl(new QString[]{QString("#hanim_chest_front_close_viewpoint")}, 1);
SoLOD* SoLOD1944 = new SoLOD();
SoLOD1944->setForceTransitions(true);
SoLOD1944->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1945 = new SoWorldInfo();
SoWorldInfo1945->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1944->addChildren(*SoWorldInfo1945);

SoShape* SoShape1946 = new SoShape();
SoShape1946->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1944->addChildren(SoShape1946);

SoAnchor1943->addChild(*SoLOD1944);

SoHAnimSite1939->addChild(SoAnchor1943);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1939);

SoHAnimSite* SoHAnimSite1947 = new SoHAnimSite();
SoHAnimSite1947->setDEF(QString("hanim_pelvis_front_close_view"));
SoHAnimSite1947->X3DNode::setName(QString("pelvis_front_close_view"));
SoHAnimSite1947->setTranslation(new float[]{0.0,0.8,1.0});
SoTouchSensor* SoTouchSensor1948 = new SoTouchSensor();
SoTouchSensor1948->setDescription(QString("HAnimSite pelvis_front_close_view"));
SoHAnimSite1947->addChild(*SoTouchSensor1948);

SoShape* SoShape1949 = new SoShape();
SoShape1949->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1947->addChild(*SoShape1949);

SoViewpoint* SoViewpoint1950 = new SoViewpoint();
SoViewpoint1950->setDEF(QString("hanim_pelvis_front_close_viewpoint"));
SoViewpoint1950->setDescription(QString("pelvis front close"));
SoViewpoint1950->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1950->setCenterOfRotation(new float[]{0.0,0.0,1.0});
SoHAnimSite1947->addChild(*SoViewpoint1950);

SoAnchor* SoAnchor1951 = new SoAnchor();
SoAnchor1951->setDescription(QString("HAnimSite hanim_pelvis_front_close_view Viewpoint"));
SoAnchor1951->setUrl(new QString[]{QString("#hanim_pelvis_front_close_viewpoint")}, 1);
SoLOD* SoLOD1952 = new SoLOD();
SoLOD1952->setForceTransitions(true);
SoLOD1952->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1953 = new SoWorldInfo();
SoWorldInfo1953->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1952->addChildren(*SoWorldInfo1953);

SoShape* SoShape1954 = new SoShape();
SoShape1954->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1952->addChildren(SoShape1954);

SoAnchor1951->addChild(*SoLOD1952);

SoHAnimSite1947->addChild(SoAnchor1951);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1947);

SoHAnimSite* SoHAnimSite1955 = new SoHAnimSite();
SoHAnimSite1955->setDEF(QString("hanim_knees_front_close_view"));
SoHAnimSite1955->X3DNode::setName(QString("knees_front_close_view"));
SoHAnimSite1955->setTranslation(new float[]{0.0,0.4,1.0});
SoTouchSensor* SoTouchSensor1956 = new SoTouchSensor();
SoTouchSensor1956->setDescription(QString("HAnimSite knees_front_close_view"));
SoHAnimSite1955->addChild(*SoTouchSensor1956);

SoShape* SoShape1957 = new SoShape();
SoShape1957->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1955->addChild(*SoShape1957);

SoViewpoint* SoViewpoint1958 = new SoViewpoint();
SoViewpoint1958->setDEF(QString("hanim_knees_front_close_viewpoint"));
SoViewpoint1958->setDescription(QString("knees front close"));
SoViewpoint1958->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1958->setCenterOfRotation(new float[]{0.0,0.4,0.0});
SoHAnimSite1955->addChild(*SoViewpoint1958);

SoAnchor* SoAnchor1959 = new SoAnchor();
SoAnchor1959->setDescription(QString("HAnimSite hanim_knees_front_close_view Viewpoint"));
SoAnchor1959->setUrl(new QString[]{QString("#hanim_knees_front_close_viewpoint")}, 1);
SoLOD* SoLOD1960 = new SoLOD();
SoLOD1960->setForceTransitions(true);
SoLOD1960->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1961 = new SoWorldInfo();
SoWorldInfo1961->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1960->addChildren(*SoWorldInfo1961);

SoShape* SoShape1962 = new SoShape();
SoShape1962->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1960->addChildren(SoShape1962);

SoAnchor1959->addChild(*SoLOD1960);

SoHAnimSite1955->addChild(SoAnchor1959);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1955);

SoHAnimSite* SoHAnimSite1963 = new SoHAnimSite();
SoHAnimSite1963->setDEF(QString("hanim_feet_front_close_view"));
SoHAnimSite1963->X3DNode::setName(QString("feet_front_close_view"));
SoHAnimSite1963->setTranslation(new float[]{0.0,0.0,1.0});
SoTouchSensor* SoTouchSensor1964 = new SoTouchSensor();
SoTouchSensor1964->setDescription(QString("HAnimSite feet_front_close_view"));
SoHAnimSite1963->addChild(*SoTouchSensor1964);

SoShape* SoShape1965 = new SoShape();
SoShape1965->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1963->addChild(*SoShape1965);

SoViewpoint* SoViewpoint1966 = new SoViewpoint();
SoViewpoint1966->setDEF(QString("hanim_feet_front_close_viewpoint"));
SoViewpoint1966->setDescription(QString("feet front close"));
SoViewpoint1966->setPosition(new float[]{0.0,0.0,0.0});
SoHAnimSite1963->addChild(*SoViewpoint1966);

SoAnchor* SoAnchor1967 = new SoAnchor();
SoAnchor1967->setDescription(QString("HAnimSite hanim_feet_front_close_view Viewpoint"));
SoAnchor1967->setUrl(new QString[]{QString("#hanim_feet_front_close_viewpoint")}, 1);
SoLOD* SoLOD1968 = new SoLOD();
SoLOD1968->setForceTransitions(true);
SoLOD1968->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1969 = new SoWorldInfo();
SoWorldInfo1969->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1968->addChildren(*SoWorldInfo1969);

SoShape* SoShape1970 = new SoShape();
SoShape1970->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1968->addChildren(SoShape1970);

SoAnchor1967->addChild(*SoLOD1968);

SoHAnimSite1963->addChild(SoAnchor1967);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1963);

SoHAnimSite* SoHAnimSite1971 = new SoHAnimSite();
SoHAnimSite1971->setDEF(QString("hanim_eye_level_view"));
SoHAnimSite1971->X3DNode::setName(QString("eye_level_view"));
SoHAnimSite1971->setTranslation(new float[]{0.0,1.6332,0.0502});
SoTouchSensor* SoTouchSensor1972 = new SoTouchSensor();
SoTouchSensor1972->setDescription(QString("HAnimSite eye_level_view"));
SoHAnimSite1971->addChild(*SoTouchSensor1972);

SoShape* SoShape1973 = new SoShape();
SoShape1973->setUSE(QString("HAnimSiteShape"));
SoHAnimSite1971->addChild(*SoShape1973);

SoViewpoint* SoViewpoint1974 = new SoViewpoint();
SoViewpoint1974->setDEF(QString("hanim_eye_level_viewpoint"));
SoViewpoint1974->setDescription(QString("eye level looking forward"));
SoViewpoint1974->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint1974->setOrientation(new float[]{0.0,1.0,0.0,3.141593});
SoHAnimSite1971->addChild(*SoViewpoint1974);

SoAnchor* SoAnchor1975 = new SoAnchor();
SoAnchor1975->setDescription(QString("HAnimSite hanim_eye_level_view Viewpoint"));
SoAnchor1975->setUrl(new QString[]{QString("#hanim_eye_level_viewpoint")}, 1);
SoLOD* SoLOD1976 = new SoLOD();
SoLOD1976->setForceTransitions(true);
SoLOD1976->setRange(new float[]{0.04}, 1);
SoWorldInfo* SoWorldInfo1977 = new SoWorldInfo();
SoWorldInfo1977->setInfo(new QString[]{QString("hide diamond when close")}, 1);
SoLOD1976->addChildren(*SoWorldInfo1977);

SoShape* SoShape1978 = new SoShape();
SoShape1978->setUSE(QString("HAnimSiteViewpointShape"));
SoLOD1976->addChildren(SoShape1978);

SoAnchor1975->addChild(*SoLOD1976);

SoHAnimSite1971->addChild(SoAnchor1975);

SoHAnimHumanoid41->addViewpoints(*SoHAnimSite1971);

SoHAnimSite* SoHAnimSite1979 = new SoHAnimSite();
SoHAnimSite1979->setUSE(QString("hanim_l_eyeball_site_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1979);

SoHAnimSite* SoHAnimSite1980 = new SoHAnimSite();
SoHAnimSite1980->setUSE(QString("hanim_r_eyeball_site_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1980);

SoHAnimSite* SoHAnimSite1981 = new SoHAnimSite();
SoHAnimSite1981->setUSE(QString("hanim_l_hand_front_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1981);

SoHAnimSite* SoHAnimSite1982 = new SoHAnimSite();
SoHAnimSite1982->setUSE(QString("hanim_r_hand_front_view"));
SoHAnimHumanoid41->setSites(*SoHAnimSite1982);

SoNode27->addChild(*SoHAnimHumanoid41);

SoSceneManager0->setSceneGraph(*SoNode27);

return 0;
}
