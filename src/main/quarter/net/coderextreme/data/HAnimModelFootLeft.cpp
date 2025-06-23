
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
Someta3->setContent(QString("HAnimModelFootLeft.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Left foot, using high-fidelity definitions for HAnim version 2.0"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Kwan-Hee YOO, Don Brutzman and Joe Williams"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("26 January 2015"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("23 December 2021"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("warning"));
Someta8->setContent(QString("not yet to scale"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("warning"));
Someta9->setContent(QString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("info"));
Someta10->setContent(QString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("subject"));
Someta17->setContent(QString("X3D HAnim humanoid animation"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("TODO"));
Someta18->setContent(QString("Integrate and confirm Segment/Joint names, Viewpoints."));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("identifier"));
Someta19->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("generator"));
Someta20->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("license"));
Someta21->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta21);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode22 = new SoNode();
SoWorldInfo* SoWorldInfo23 = new SoWorldInfo();
SoWorldInfo23->setTitle(QString("HAnimModelFootLeft.x3d"));
SoNode22->addChild(*SoWorldInfo23);

SoHAnimHumanoid* SoHAnimHumanoid24 = new SoHAnimHumanoid();
SoHAnimHumanoid24->X3DNode::setName(QString("Foot_Left"));
SoHAnimHumanoid24->setDEF(QString("hanim_Foot_Left"));
SoHAnimHumanoid24->setLoa(4);
SoHAnimHumanoid24->setVersion(QString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
SoMetadataSet* SoMetadataSet25 = new SoMetadataSet();
SoMetadataSet25->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet25->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString26 = new SoMetadataString();
SoMetadataString26->X3DNode::setName(QString("authorName"));
SoMetadataString26->setValue(new QString[]{QString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
SoMetadataSet25->setValue((X3DNode *)&SoMetadataString26);

SoHAnimHumanoid24->setMetadata(*SoMetadataSet25);

SoHAnimJoint* SoHAnimJoint27 = new SoHAnimJoint();
SoHAnimJoint27->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint27->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint27->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint27->setLlimit(new float[]{0.0,0.0,0.0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
SoHAnimJoint* SoHAnimJoint28 = new SoHAnimJoint();
SoHAnimJoint28->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint28->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint28->setDescription(QString("connection joint of foot to leg above"));
SoHAnimJoint28->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint28->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment29 = new SoHAnimSegment();
SoHAnimSegment29->X3DNode::setName(QString("l_talus"));
SoHAnimSegment29->setDEF(QString("hanim_l_talus"));
SoTransform* SoTransform30 = new SoTransform();
SoShape* SoShape31 = new SoShape();
SoShape31->setDEF(QString("HAnimJointShape"));
SoSphere* SoSphere32 = new SoSphere();
SoSphere32->setRadius(0.025);
SoShape31->setGeometry(*SoSphere32);

SoVRMLAppearance* SoVRMLAppearance33 = new SoVRMLAppearance();
SoVRMLAppearance33->setDEF(QString("HAnimJointAppearance"));
SoMaterial* SoMaterial34 = new SoMaterial();
SoMaterial34->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance33->addChild(*SoMaterial34);

SoShape31->addChild(*SoVRMLAppearance33);

SoTransform30->addChild(*SoShape31);

SoHAnimSegment29->addChild(*SoTransform30);

SoShape* SoShape35 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance36 = new SoVRMLAppearance();
SoMaterial* SoMaterial37 = new SoMaterial();
SoMaterial37->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance36->addChild(*SoMaterial37);

SoShape35->addChild(*SoVRMLAppearance36);

SoIndexedLineSet* SoIndexedLineSet38 = new SoIndexedLineSet();
SoIndexedLineSet38->setDEF(QString("TCtoTCN"));
SoIndexedLineSet38->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate39 = new SoCoordinate();
SoCoordinate39->setPoint(new float[]{0.0,0.0,0.0,0.0,-0.3,0.0}, 6);
SoIndexedLineSet38->setCoord(*SoCoordinate39);

SoShape35->setGeometry(*SoIndexedLineSet38);

SoHAnimSegment29->addChild(*SoShape35);

SoShape* SoShape40 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance41 = new SoVRMLAppearance();
SoMaterial* SoMaterial42 = new SoMaterial();
SoMaterial42->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance41->addChild(*SoMaterial42);

SoShape40->addChild(*SoVRMLAppearance41);

SoIndexedLineSet* SoIndexedLineSet43 = new SoIndexedLineSet();
SoIndexedLineSet43->setDEF(QString("TCtoCC"));
SoIndexedLineSet43->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate44 = new SoCoordinate();
SoCoordinate44->setPoint(new float[]{0.0,0.0,0.0,0.2,0.3,0.0}, 6);
SoIndexedLineSet43->setCoord(*SoCoordinate44);

SoShape40->setGeometry(*SoIndexedLineSet43);

SoHAnimSegment29->addChild(*SoShape40);

SoHAnimJoint28->addChildren(*SoHAnimSegment29);

//TCN
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("l_talocalcaneonavicular"));
SoHAnimJoint45->setDEF(QString("hanim_l_talocalcaneonavicular"));
SoHAnimJoint45->setCenter(new float[]{0.0,-0.3,0.0});
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment46 = new SoHAnimSegment();
SoHAnimSegment46->X3DNode::setName(QString("l_navicular"));
SoHAnimSegment46->setDEF(QString("hanim_l_navicular"));
SoTransform* SoTransform47 = new SoTransform();
SoTransform47->setTranslation(new float[]{0.0,-0.3,0.0});
SoShape* SoShape48 = new SoShape();
SoShape48->setUSE(QString("HAnimJointShape"));
SoTransform47->addChild(*SoShape48);

SoHAnimSegment46->addChild(*SoTransform47);

SoShape* SoShape49 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance50 = new SoVRMLAppearance();
SoMaterial* SoMaterial51 = new SoMaterial();
SoMaterial51->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance50->addChild(*SoMaterial51);

SoShape49->addChild(*SoVRMLAppearance50);

SoIndexedLineSet* SoIndexedLineSet52 = new SoIndexedLineSet();
SoIndexedLineSet52->setDEF(QString("TCNtoCN1"));
SoIndexedLineSet52->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate53 = new SoCoordinate();
SoCoordinate53->setPoint(new float[]{0.0,-0.3,0.0,-0.1,-0.45,0.0}, 6);
SoIndexedLineSet52->setCoord(*SoCoordinate53);

SoShape49->setGeometry(*SoIndexedLineSet52);

SoHAnimSegment46->addChild(*SoShape49);

SoShape* SoShape54 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance55->addChild(*SoMaterial56);

SoShape54->addChild(*SoVRMLAppearance55);

SoIndexedLineSet* SoIndexedLineSet57 = new SoIndexedLineSet();
SoIndexedLineSet57->setDEF(QString("TCNtoCN2"));
SoIndexedLineSet57->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate58 = new SoCoordinate();
SoCoordinate58->setPoint(new float[]{0.0,-0.3,0.0,0.0,-0.45,0.0}, 6);
SoIndexedLineSet57->setCoord(*SoCoordinate58);

SoShape54->setGeometry(*SoIndexedLineSet57);

SoHAnimSegment46->addChild(*SoShape54);

SoShape* SoShape59 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance60 = new SoVRMLAppearance();
SoMaterial* SoMaterial61 = new SoMaterial();
SoMaterial61->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance60->addChild(*SoMaterial61);

SoShape59->addChild(*SoVRMLAppearance60);

SoIndexedLineSet* SoIndexedLineSet62 = new SoIndexedLineSet();
SoIndexedLineSet62->setDEF(QString("TCNtoCN3"));
SoIndexedLineSet62->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate63 = new SoCoordinate();
SoCoordinate63->setPoint(new float[]{0.0,-0.3,0.0,0.1,-0.4,0.0}, 6);
SoIndexedLineSet62->setCoord(*SoCoordinate63);

SoShape59->setGeometry(*SoIndexedLineSet62);

SoHAnimSegment46->addChild(*SoShape59);

SoHAnimJoint45->addChildren(*SoHAnimSegment46);

//CN1
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->X3DNode::setName(QString("l_cuneonavicular_1"));
SoHAnimJoint64->setDEF(QString("hanim_l_cuneonavicular_1"));
SoHAnimJoint64->setCenter(new float[]{-0.1,-0.45,0.0});
SoHAnimJoint64->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint64->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment65 = new SoHAnimSegment();
SoHAnimSegment65->X3DNode::setName(QString("l_cuneiform_1"));
SoHAnimSegment65->setDEF(QString("hanim_l_cuneiform_1"));
SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setTranslation(new float[]{-0.1,-0.45,0.0});
SoShape* SoShape67 = new SoShape();
SoShape67->setUSE(QString("HAnimJointShape"));
SoTransform66->addChild(*SoShape67);

SoHAnimSegment65->addChild(*SoTransform66);

SoShape* SoShape68 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance69 = new SoVRMLAppearance();
SoMaterial* SoMaterial70 = new SoMaterial();
SoMaterial70->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance69->addChild(*SoMaterial70);

SoShape68->addChild(*SoVRMLAppearance69);

SoIndexedLineSet* SoIndexedLineSet71 = new SoIndexedLineSet();
SoIndexedLineSet71->setDEF(QString("CN1toTMT1"));
SoIndexedLineSet71->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate72 = new SoCoordinate();
SoCoordinate72->setPoint(new float[]{-0.1,-0.45,0.0,-0.1,-0.6,0.0}, 6);
SoIndexedLineSet71->setCoord(*SoCoordinate72);

SoShape68->setGeometry(*SoIndexedLineSet71);

SoHAnimSegment65->addChild(*SoShape68);

SoHAnimJoint64->addChildren(*SoHAnimSegment65);

SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->X3DNode::setName(QString("l_tarsometatarsal_1"));
SoHAnimJoint73->setDEF(QString("hanim_l_tarsometatarsal_1"));
SoHAnimJoint73->setCenter(new float[]{-0.1,-0.6,0.0});
SoHAnimJoint73->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint73->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment74 = new SoHAnimSegment();
SoHAnimSegment74->X3DNode::setName(QString("l_metatarsal_1"));
SoHAnimSegment74->setDEF(QString("hanim_l_metatarsal_1"));
SoTransform* SoTransform75 = new SoTransform();
SoTransform75->setTranslation(new float[]{-0.1,-0.6,0.0});
SoShape* SoShape76 = new SoShape();
SoShape76->setUSE(QString("HAnimJointShape"));
SoTransform75->addChild(*SoShape76);

SoHAnimSegment74->addChild(*SoTransform75);

SoShape* SoShape77 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance78 = new SoVRMLAppearance();
SoMaterial* SoMaterial79 = new SoMaterial();
SoMaterial79->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance78->addChild(*SoMaterial79);

SoShape77->addChild(*SoVRMLAppearance78);

SoIndexedLineSet* SoIndexedLineSet80 = new SoIndexedLineSet();
SoIndexedLineSet80->setDEF(QString("TMT1toMTP1"));
SoIndexedLineSet80->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate81 = new SoCoordinate();
SoCoordinate81->setPoint(new float[]{-0.1,-0.6,0.0,-0.1,-0.9,0.0}, 6);
SoIndexedLineSet80->setCoord(*SoCoordinate81);

SoShape77->setGeometry(*SoIndexedLineSet80);

SoHAnimSegment74->addChild(*SoShape77);

SoHAnimJoint73->addChildren(*SoHAnimSegment74);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("l_metatarsophalangeal_1"));
SoHAnimJoint82->setDEF(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimJoint82->setCenter(new float[]{-0.1,-0.9,0.0});
SoHAnimJoint82->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint82->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment83 = new SoHAnimSegment();
SoHAnimSegment83->X3DNode::setName(QString("l_tarsal_proximal_phalanx_1"));
SoHAnimSegment83->setDEF(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setTranslation(new float[]{-0.1,-0.9,0.0});
SoShape* SoShape85 = new SoShape();
SoShape85->setUSE(QString("HAnimJointShape"));
SoTransform84->addChild(*SoShape85);

SoHAnimSegment83->addChild(*SoTransform84);

SoShape* SoShape86 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance87 = new SoVRMLAppearance();
SoMaterial* SoMaterial88 = new SoMaterial();
SoMaterial88->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance87->addChild(*SoMaterial88);

SoShape86->addChild(*SoVRMLAppearance87);

SoIndexedLineSet* SoIndexedLineSet89 = new SoIndexedLineSet();
SoIndexedLineSet89->setDEF(QString("MTP1toIP1"));
SoIndexedLineSet89->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate90 = new SoCoordinate();
SoCoordinate90->setPoint(new float[]{-0.1,-0.9,0.0,-0.1,-1.05,0.0}, 6);
SoIndexedLineSet89->setCoord(*SoCoordinate90);

SoShape86->setGeometry(*SoIndexedLineSet89);

SoHAnimSegment83->addChild(*SoShape86);

SoHAnimJoint82->addChildren(*SoHAnimSegment83);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("l_tarsal_interphalangeal_1"));
SoHAnimJoint91->setDEF(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimJoint91->setCenter(new float[]{-0.1,-1.05,0.0});
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment92 = new SoHAnimSegment();
SoHAnimSegment92->X3DNode::setName(QString("l_tarsal_distal_phalanx_1"));
SoHAnimSegment92->setDEF(QString("hanim_l_tarsal_distal_phalanx_1"));
SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setTranslation(new float[]{-0.1,-1.05,0.0});
SoShape* SoShape94 = new SoShape();
SoShape94->setUSE(QString("HAnimJointShape"));
SoTransform93->addChild(*SoShape94);

SoHAnimSegment92->addChild(*SoTransform93);

SoShape* SoShape95 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance96 = new SoVRMLAppearance();
SoMaterial* SoMaterial97 = new SoMaterial();
SoMaterial97->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance96->addChild(*SoMaterial97);

SoShape95->addChild(*SoVRMLAppearance96);

SoIndexedLineSet* SoIndexedLineSet98 = new SoIndexedLineSet();
SoIndexedLineSet98->setDEF(QString("tiptoe_l_tarsal_distal_interphalangeal_1"));
SoIndexedLineSet98->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate99 = new SoCoordinate();
SoCoordinate99->setPoint(new float[]{-0.1,-1.05,0.0,-0.1,-1.1,0.0}, 6);
SoIndexedLineSet98->setCoord(*SoCoordinate99);

SoShape95->setGeometry(*SoIndexedLineSet98);

SoHAnimSegment92->addChild(*SoShape95);

SoHAnimJoint91->addChildren(*SoHAnimSegment92);

SoHAnimJoint82->addChildren(*SoHAnimJoint91);

SoHAnimJoint73->addChildren(*SoHAnimJoint82);

SoHAnimJoint64->addChildren(*SoHAnimJoint73);

SoHAnimJoint45->addChildren(*SoHAnimJoint64);

//CN2
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->X3DNode::setName(QString("l_cuneonavicular_2"));
SoHAnimJoint100->setDEF(QString("hanim_l_cuneonavicular_2"));
SoHAnimJoint100->setCenter(new float[]{0.0,-0.45,0.0});
SoHAnimJoint100->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint100->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment101 = new SoHAnimSegment();
SoHAnimSegment101->X3DNode::setName(QString("l_cuneiform_2"));
SoHAnimSegment101->setDEF(QString("hanim_l_cuneiform_2"));
SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setTranslation(new float[]{0.0,-0.45,0.0});
SoShape* SoShape103 = new SoShape();
SoShape103->setUSE(QString("HAnimJointShape"));
SoTransform102->addChild(*SoShape103);

SoHAnimSegment101->addChild(*SoTransform102);

SoShape* SoShape104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance105 = new SoVRMLAppearance();
SoMaterial* SoMaterial106 = new SoMaterial();
SoMaterial106->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance105->addChild(*SoMaterial106);

SoShape104->addChild(*SoVRMLAppearance105);

SoIndexedLineSet* SoIndexedLineSet107 = new SoIndexedLineSet();
SoIndexedLineSet107->setDEF(QString("CN2toTMT2"));
SoIndexedLineSet107->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate108 = new SoCoordinate();
SoCoordinate108->setPoint(new float[]{0.0,-0.45,0.0,0.05,-0.6,0.0}, 6);
SoIndexedLineSet107->setCoord(*SoCoordinate108);

SoShape104->setGeometry(*SoIndexedLineSet107);

SoHAnimSegment101->addChild(*SoShape104);

SoHAnimJoint100->addChildren(*SoHAnimSegment101);

SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint109->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint109->setCenter(new float[]{0.05,-0.6,0.0});
SoHAnimJoint109->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint109->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment110 = new SoHAnimSegment();
SoHAnimSegment110->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimSegment110->setDEF(QString("hanim_l_metatarsal_2"));
SoTransform* SoTransform111 = new SoTransform();
SoTransform111->setTranslation(new float[]{0.05,-0.6,0.0});
SoShape* SoShape112 = new SoShape();
SoShape112->setUSE(QString("HAnimJointShape"));
SoTransform111->addChild(*SoShape112);

SoHAnimSegment110->addChild(*SoTransform111);

SoShape* SoShape113 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance114 = new SoVRMLAppearance();
SoMaterial* SoMaterial115 = new SoMaterial();
SoMaterial115->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance114->addChild(*SoMaterial115);

SoShape113->addChild(*SoVRMLAppearance114);

SoIndexedLineSet* SoIndexedLineSet116 = new SoIndexedLineSet();
SoIndexedLineSet116->setDEF(QString("TMT2toMTP2"));
SoIndexedLineSet116->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate117 = new SoCoordinate();
SoCoordinate117->setPoint(new float[]{0.05,-0.6,0.0,0.05,-0.9,0.0}, 6);
SoIndexedLineSet116->setCoord(*SoCoordinate117);

SoShape113->setGeometry(*SoIndexedLineSet116);

SoHAnimSegment110->addChild(*SoShape113);

SoHAnimJoint109->addChildren(*SoHAnimSegment110);

SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint118->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint118->setCenter(new float[]{0.05,-0.9,0.0});
SoHAnimJoint118->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint118->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment119 = new SoHAnimSegment();
SoHAnimSegment119->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment119->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform120 = new SoTransform();
SoTransform120->setTranslation(new float[]{0.05,-0.9,0.0});
SoShape* SoShape121 = new SoShape();
SoShape121->setUSE(QString("HAnimJointShape"));
SoTransform120->addChild(*SoShape121);

SoHAnimSegment119->addChild(*SoTransform120);

SoShape* SoShape122 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance123 = new SoVRMLAppearance();
SoMaterial* SoMaterial124 = new SoMaterial();
SoMaterial124->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance123->addChild(*SoMaterial124);

SoShape122->addChild(*SoVRMLAppearance123);

SoIndexedLineSet* SoIndexedLineSet125 = new SoIndexedLineSet();
SoIndexedLineSet125->setDEF(QString("MTP2toPIP2"));
SoIndexedLineSet125->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate126 = new SoCoordinate();
SoCoordinate126->setPoint(new float[]{0.05,-0.9,0.0,0.05,-1.05,0.0}, 6);
SoIndexedLineSet125->setCoord(*SoCoordinate126);

SoShape122->setGeometry(*SoIndexedLineSet125);

SoHAnimSegment119->addChild(*SoShape122);

SoHAnimJoint118->addChildren(*SoHAnimSegment119);

SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint127->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint127->setCenter(new float[]{0.05,-1.05,0.0});
SoHAnimJoint127->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint127->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment128 = new SoHAnimSegment();
SoHAnimSegment128->X3DNode::setName(QString("l_tarsal_middle_phalanx_2"));
SoHAnimSegment128->setDEF(QString("hanim_l_tarsal_middle_phalanx_2"));
SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setTranslation(new float[]{0.05,-1.05,0.0});
SoShape* SoShape130 = new SoShape();
SoShape130->setUSE(QString("HAnimJointShape"));
SoTransform129->addChild(*SoShape130);

SoHAnimSegment128->addChild(*SoTransform129);

SoShape* SoShape131 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance132 = new SoVRMLAppearance();
SoMaterial* SoMaterial133 = new SoMaterial();
SoMaterial133->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance132->addChild(*SoMaterial133);

SoShape131->addChild(*SoVRMLAppearance132);

SoIndexedLineSet* SoIndexedLineSet134 = new SoIndexedLineSet();
SoIndexedLineSet134->setDEF(QString("PIP2toDIP2"));
SoIndexedLineSet134->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate135 = new SoCoordinate();
SoCoordinate135->setPoint(new float[]{0.05,-1.05,0.0,0.05,-1.12,0.0}, 6);
SoIndexedLineSet134->setCoord(*SoCoordinate135);

SoShape131->setGeometry(*SoIndexedLineSet134);

SoHAnimSegment128->addChild(*SoShape131);

SoHAnimJoint127->addChildren(*SoHAnimSegment128);

SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint136->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint136->setCenter(new float[]{0.05,-1.12,0.0});
SoHAnimJoint136->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint136->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment137 = new SoHAnimSegment();
SoHAnimSegment137->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSegment137->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setTranslation(new float[]{0.05,-1.12,0.0});
SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("HAnimJointShape"));
SoTransform138->addChild(*SoShape139);

SoHAnimSegment137->addChild(*SoTransform138);

SoShape* SoShape140 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance141 = new SoVRMLAppearance();
SoMaterial* SoMaterial142 = new SoMaterial();
SoMaterial142->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance141->addChild(*SoMaterial142);

SoShape140->addChild(*SoVRMLAppearance141);

SoIndexedLineSet* SoIndexedLineSet143 = new SoIndexedLineSet();
SoIndexedLineSet143->setDEF(QString("tiptoe_l_tarsal_distal_phalanx_2"));
SoIndexedLineSet143->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate144 = new SoCoordinate();
SoCoordinate144->setPoint(new float[]{0.05,-1.12,0.0,0.05,-1.16,0.0}, 6);
SoIndexedLineSet143->setCoord(*SoCoordinate144);

SoShape140->setGeometry(*SoIndexedLineSet143);

SoHAnimSegment137->addChild(*SoShape140);

SoHAnimJoint136->addChildren(*SoHAnimSegment137);

SoHAnimJoint127->addChildren(*SoHAnimJoint136);

SoHAnimJoint118->addChildren(*SoHAnimJoint127);

SoHAnimJoint109->addChildren(*SoHAnimJoint118);

SoHAnimJoint100->addChildren(*SoHAnimJoint109);

SoHAnimJoint45->addChildren(*SoHAnimJoint100);

//CN3
SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->X3DNode::setName(QString("l_cuneonavicular_3"));
SoHAnimJoint145->setDEF(QString("hanim_l_cuneonavicular_3"));
SoHAnimJoint145->setCenter(new float[]{0.1,-0.4,0.0});
SoHAnimJoint145->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint145->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment146 = new SoHAnimSegment();
SoHAnimSegment146->X3DNode::setName(QString("l_cuneiform_3"));
SoHAnimSegment146->setDEF(QString("hanim_l_cuneiform_3"));
SoTransform* SoTransform147 = new SoTransform();
SoTransform147->setTranslation(new float[]{0.1,-0.4,0.0});
SoShape* SoShape148 = new SoShape();
SoShape148->setUSE(QString("HAnimJointShape"));
SoTransform147->addChild(*SoShape148);

SoHAnimSegment146->addChild(*SoTransform147);

SoShape* SoShape149 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance150 = new SoVRMLAppearance();
SoMaterial* SoMaterial151 = new SoMaterial();
SoMaterial151->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance150->addChild(*SoMaterial151);

SoShape149->addChild(*SoVRMLAppearance150);

SoIndexedLineSet* SoIndexedLineSet152 = new SoIndexedLineSet();
SoIndexedLineSet152->setDEF(QString("CN3toTMT3"));
SoIndexedLineSet152->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate153 = new SoCoordinate();
SoCoordinate153->setPoint(new float[]{0.1,-0.4,0.0,0.15,-0.6,0.0}, 6);
SoIndexedLineSet152->setCoord(*SoCoordinate153);

SoShape149->setGeometry(*SoIndexedLineSet152);

SoHAnimSegment146->addChild(*SoShape149);

SoHAnimJoint145->addChildren(*SoHAnimSegment146);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->X3DNode::setName(QString("l_tarsometatarsal_3"));
SoHAnimJoint154->setDEF(QString("hanim_l_tarsometatarsal_3"));
SoHAnimJoint154->setCenter(new float[]{0.15,-0.6,0.0});
SoHAnimJoint154->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint154->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment155 = new SoHAnimSegment();
SoHAnimSegment155->X3DNode::setName(QString("l_metatarsal_3"));
SoHAnimSegment155->setDEF(QString("hanim_l_metatarsal_3"));
SoTransform* SoTransform156 = new SoTransform();
SoTransform156->setTranslation(new float[]{0.15,-0.6,0.0});
SoShape* SoShape157 = new SoShape();
SoShape157->setUSE(QString("HAnimJointShape"));
SoTransform156->addChild(*SoShape157);

SoHAnimSegment155->addChild(*SoTransform156);

SoShape* SoShape158 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance159 = new SoVRMLAppearance();
SoMaterial* SoMaterial160 = new SoMaterial();
SoMaterial160->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance159->addChild(*SoMaterial160);

SoShape158->addChild(*SoVRMLAppearance159);

SoIndexedLineSet* SoIndexedLineSet161 = new SoIndexedLineSet();
SoIndexedLineSet161->setDEF(QString("TMT3toMTP3"));
SoIndexedLineSet161->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate162 = new SoCoordinate();
SoCoordinate162->setPoint(new float[]{0.15,-0.6,0.0,0.15,-0.9,0.0}, 6);
SoIndexedLineSet161->setCoord(*SoCoordinate162);

SoShape158->setGeometry(*SoIndexedLineSet161);

SoHAnimSegment155->addChild(*SoShape158);

SoHAnimJoint154->addChildren(*SoHAnimSegment155);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->X3DNode::setName(QString("l_metatarsophalangeal_3"));
SoHAnimJoint163->setDEF(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimJoint163->setCenter(new float[]{0.15,-0.9,0.0});
SoHAnimJoint163->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint163->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment164 = new SoHAnimSegment();
SoHAnimSegment164->X3DNode::setName(QString("l_tarsal_proximal_phalanx_3"));
SoHAnimSegment164->setDEF(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setTranslation(new float[]{0.15,-0.9,0.0});
SoShape* SoShape166 = new SoShape();
SoShape166->setUSE(QString("HAnimJointShape"));
SoTransform165->addChild(*SoShape166);

SoHAnimSegment164->addChild(*SoTransform165);

SoShape* SoShape167 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance168 = new SoVRMLAppearance();
SoMaterial* SoMaterial169 = new SoMaterial();
SoMaterial169->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance168->addChild(*SoMaterial169);

SoShape167->addChild(*SoVRMLAppearance168);

SoIndexedLineSet* SoIndexedLineSet170 = new SoIndexedLineSet();
SoIndexedLineSet170->setDEF(QString("MTP3toPIP3"));
SoIndexedLineSet170->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate171 = new SoCoordinate();
SoCoordinate171->setPoint(new float[]{0.15,-0.9,0.0,0.15,-1.05,0.0}, 6);
SoIndexedLineSet170->setCoord(*SoCoordinate171);

SoShape167->setGeometry(*SoIndexedLineSet170);

SoHAnimSegment164->addChild(*SoShape167);

SoHAnimJoint163->addChildren(*SoHAnimSegment164);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint172->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint172->setCenter(new float[]{0.15,-1.05,0.0});
SoHAnimJoint172->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint172->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment173 = new SoHAnimSegment();
SoHAnimSegment173->X3DNode::setName(QString("l_tarsal_middle_phalanx_3"));
SoHAnimSegment173->setDEF(QString("hanim_l_tarsal_middle_phalanx_3"));
SoTransform* SoTransform174 = new SoTransform();
SoTransform174->setTranslation(new float[]{0.15,-1.05,0.0});
SoShape* SoShape175 = new SoShape();
SoShape175->setUSE(QString("HAnimJointShape"));
SoTransform174->addChild(*SoShape175);

SoHAnimSegment173->addChild(*SoTransform174);

SoShape* SoShape176 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance177 = new SoVRMLAppearance();
SoMaterial* SoMaterial178 = new SoMaterial();
SoMaterial178->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance177->addChild(*SoMaterial178);

SoShape176->addChild(*SoVRMLAppearance177);

SoIndexedLineSet* SoIndexedLineSet179 = new SoIndexedLineSet();
SoIndexedLineSet179->setDEF(QString("PIP3toDIP3"));
SoIndexedLineSet179->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate180 = new SoCoordinate();
SoCoordinate180->setPoint(new float[]{0.15,-1.05,0.0,0.15,-1.13,0.0}, 6);
SoIndexedLineSet179->setCoord(*SoCoordinate180);

SoShape176->setGeometry(*SoIndexedLineSet179);

SoHAnimSegment173->addChild(*SoShape176);

SoHAnimJoint172->addChildren(*SoHAnimSegment173);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint181->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint181->setCenter(new float[]{0.15,-1.13,0.0});
SoHAnimJoint181->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint181->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment182 = new SoHAnimSegment();
SoHAnimSegment182->X3DNode::setName(QString("l_tarsal_distal_phalanx_3"));
SoHAnimSegment182->setDEF(QString("hanim_l_tarsal_distal_phalanx_3"));
SoTransform* SoTransform183 = new SoTransform();
SoTransform183->setTranslation(new float[]{0.15,-1.13,0.0});
SoShape* SoShape184 = new SoShape();
SoShape184->setUSE(QString("HAnimJointShape"));
SoTransform183->addChild(*SoShape184);

SoHAnimSegment182->addChild(*SoTransform183);

SoShape* SoShape185 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance186 = new SoVRMLAppearance();
SoMaterial* SoMaterial187 = new SoMaterial();
SoMaterial187->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance186->addChild(*SoMaterial187);

SoShape185->addChild(*SoVRMLAppearance186);

SoIndexedLineSet* SoIndexedLineSet188 = new SoIndexedLineSet();
SoIndexedLineSet188->setDEF(QString("tiptoe_l_tarsal_distal_interphalangeal_3"));
SoIndexedLineSet188->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate189 = new SoCoordinate();
SoCoordinate189->setPoint(new float[]{0.15,-1.13,0.0,0.15,-1.16,0.0}, 6);
SoIndexedLineSet188->setCoord(*SoCoordinate189);

SoShape185->setGeometry(*SoIndexedLineSet188);

SoHAnimSegment182->addChild(*SoShape185);

SoHAnimJoint181->addChildren(*SoHAnimSegment182);

SoHAnimJoint172->addChildren(*SoHAnimJoint181);

SoHAnimJoint163->addChildren(*SoHAnimJoint172);

SoHAnimJoint154->addChildren(*SoHAnimJoint163);

SoHAnimJoint145->addChildren(*SoHAnimJoint154);

SoHAnimJoint45->addChildren(*SoHAnimJoint145);

SoHAnimJoint28->addChildren(*SoHAnimJoint45);

//CC
SoHAnimJoint* SoHAnimJoint190 = new SoHAnimJoint();
SoHAnimJoint190->X3DNode::setName(QString("l_calcaneocuboid"));
SoHAnimJoint190->setDEF(QString("hanim_l_calcaneocuboid"));
SoHAnimJoint190->setCenter(new float[]{0.2,0.3,0.0});
SoHAnimJoint190->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint190->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment191 = new SoHAnimSegment();
SoHAnimSegment191->X3DNode::setName(QString("l_calcaneus"));
SoHAnimSegment191->setDEF(QString("hanim_l_calcaneus"));
SoTransform* SoTransform192 = new SoTransform();
SoTransform192->setTranslation(new float[]{0.2,0.3,0.0});
SoShape* SoShape193 = new SoShape();
SoShape193->setUSE(QString("HAnimJointShape"));
SoTransform192->addChild(*SoShape193);

SoHAnimSegment191->addChild(*SoTransform192);

SoShape* SoShape194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance195 = new SoVRMLAppearance();
SoMaterial* SoMaterial196 = new SoMaterial();
SoMaterial196->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance195->addChild(*SoMaterial196);

SoShape194->addChild(*SoVRMLAppearance195);

SoIndexedLineSet* SoIndexedLineSet197 = new SoIndexedLineSet();
SoIndexedLineSet197->setDEF(QString("CCtoTT"));
SoIndexedLineSet197->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate198 = new SoCoordinate();
SoCoordinate198->setPoint(new float[]{0.2,0.3,0.0,0.21,-0.3,0.0}, 6);
SoIndexedLineSet197->setCoord(*SoCoordinate198);

SoShape194->setGeometry(*SoIndexedLineSet197);

SoHAnimSegment191->addChild(*SoShape194);

SoHAnimJoint190->addChildren(*SoHAnimSegment191);

//TT
SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->X3DNode::setName(QString("l_transversetarsal"));
SoHAnimJoint199->setDEF(QString("hanim_l_transversetarsal"));
SoHAnimJoint199->setCenter(new float[]{0.21,-0.3,0.0});
SoHAnimJoint199->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint199->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment200 = new SoHAnimSegment();
SoHAnimSegment200->X3DNode::setName(QString("l_cuboid"));
SoHAnimSegment200->setDEF(QString("hanim_l_cuboid"));
SoTransform* SoTransform201 = new SoTransform();
SoTransform201->setTranslation(new float[]{0.21,-0.3,0.0});
SoShape* SoShape202 = new SoShape();
SoShape202->setUSE(QString("HAnimJointShape"));
SoTransform201->addChild(*SoShape202);

SoHAnimSegment200->addChild(*SoTransform201);

SoShape* SoShape203 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance204 = new SoVRMLAppearance();
SoMaterial* SoMaterial205 = new SoMaterial();
SoMaterial205->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance204->addChild(*SoMaterial205);

SoShape203->addChild(*SoVRMLAppearance204);

SoIndexedLineSet* SoIndexedLineSet206 = new SoIndexedLineSet();
SoIndexedLineSet206->setDEF(QString("TTtoTMT4"));
SoIndexedLineSet206->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate207 = new SoCoordinate();
SoCoordinate207->setPoint(new float[]{0.21,-0.3,0.0,0.25,-0.58,0.0}, 6);
SoIndexedLineSet206->setCoord(*SoCoordinate207);

SoShape203->setGeometry(*SoIndexedLineSet206);

SoHAnimSegment200->addChild(*SoShape203);

SoShape* SoShape208 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance209 = new SoVRMLAppearance();
SoMaterial* SoMaterial210 = new SoMaterial();
SoMaterial210->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance209->addChild(*SoMaterial210);

SoShape208->addChild(*SoVRMLAppearance209);

SoIndexedLineSet* SoIndexedLineSet211 = new SoIndexedLineSet();
SoIndexedLineSet211->setDEF(QString("TTtoTMT5"));
SoIndexedLineSet211->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate212 = new SoCoordinate();
SoCoordinate212->setPoint(new float[]{0.21,-0.3,0.0,0.33,-0.52,0.0}, 6);
SoIndexedLineSet211->setCoord(*SoCoordinate212);

SoShape208->setGeometry(*SoIndexedLineSet211);

SoHAnimSegment200->addChild(*SoShape208);

SoHAnimJoint199->addChildren(*SoHAnimSegment200);

//TMT4
SoHAnimJoint* SoHAnimJoint213 = new SoHAnimJoint();
SoHAnimJoint213->X3DNode::setName(QString("l_tarsometatarsal_4"));
SoHAnimJoint213->setDEF(QString("hanim_l_tarsometatarsal_4"));
SoHAnimJoint213->setCenter(new float[]{0.25,-0.58,0.0});
SoHAnimJoint213->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint213->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment214 = new SoHAnimSegment();
SoHAnimSegment214->X3DNode::setName(QString("l_metatarsal_4"));
SoHAnimSegment214->setDEF(QString("hanim_l_metatarsal_4"));
SoTransform* SoTransform215 = new SoTransform();
SoTransform215->setTranslation(new float[]{0.25,-0.58,0.0});
SoShape* SoShape216 = new SoShape();
SoShape216->setUSE(QString("HAnimJointShape"));
SoTransform215->addChild(*SoShape216);

SoHAnimSegment214->addChild(*SoTransform215);

SoShape* SoShape217 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance218 = new SoVRMLAppearance();
SoMaterial* SoMaterial219 = new SoMaterial();
SoMaterial219->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance218->addChild(*SoMaterial219);

SoShape217->addChild(*SoVRMLAppearance218);

SoIndexedLineSet* SoIndexedLineSet220 = new SoIndexedLineSet();
SoIndexedLineSet220->setDEF(QString("TMT4toMTP4"));
SoIndexedLineSet220->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate221 = new SoCoordinate();
SoCoordinate221->setPoint(new float[]{0.25,-0.58,0.0,0.25,-0.87,0.0}, 6);
SoIndexedLineSet220->setCoord(*SoCoordinate221);

SoShape217->setGeometry(*SoIndexedLineSet220);

SoHAnimSegment214->addChild(*SoShape217);

SoHAnimJoint213->addChildren(*SoHAnimSegment214);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->X3DNode::setName(QString("l_metatarsophalangeal_4"));
SoHAnimJoint222->setDEF(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimJoint222->setCenter(new float[]{0.25,-0.87,0.0});
SoHAnimJoint222->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint222->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment223 = new SoHAnimSegment();
SoHAnimSegment223->X3DNode::setName(QString("l_tarsal_proximal_phalanx_4"));
SoHAnimSegment223->setDEF(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoTransform* SoTransform224 = new SoTransform();
SoTransform224->setTranslation(new float[]{0.25,-0.87,0.0});
SoShape* SoShape225 = new SoShape();
SoShape225->setUSE(QString("HAnimJointShape"));
SoTransform224->addChild(*SoShape225);

SoHAnimSegment223->addChild(*SoTransform224);

SoShape* SoShape226 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance227 = new SoVRMLAppearance();
SoMaterial* SoMaterial228 = new SoMaterial();
SoMaterial228->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance227->addChild(*SoMaterial228);

SoShape226->addChild(*SoVRMLAppearance227);

SoIndexedLineSet* SoIndexedLineSet229 = new SoIndexedLineSet();
SoIndexedLineSet229->setDEF(QString("MTP4toPIP4"));
SoIndexedLineSet229->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate230 = new SoCoordinate();
SoCoordinate230->setPoint(new float[]{0.25,-0.87,0.0,0.25,-1.0,0.0}, 6);
SoIndexedLineSet229->setCoord(*SoCoordinate230);

SoShape226->setGeometry(*SoIndexedLineSet229);

SoHAnimSegment223->addChild(*SoShape226);

SoHAnimJoint222->addChildren(*SoHAnimSegment223);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint231->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint231->setCenter(new float[]{0.25,-1.0,0.0});
SoHAnimJoint231->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint231->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->X3DNode::setName(QString("l_tarsal_middle_phalanx_4"));
SoHAnimSegment232->setDEF(QString("hanim_l_tarsal_middle_phalanx_4"));
SoTransform* SoTransform233 = new SoTransform();
SoTransform233->setTranslation(new float[]{0.25,-1.0,0.0});
SoShape* SoShape234 = new SoShape();
SoShape234->setUSE(QString("HAnimJointShape"));
SoTransform233->addChild(*SoShape234);

SoHAnimSegment232->addChild(*SoTransform233);

SoShape* SoShape235 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance236 = new SoVRMLAppearance();
SoMaterial* SoMaterial237 = new SoMaterial();
SoMaterial237->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance236->addChild(*SoMaterial237);

SoShape235->addChild(*SoVRMLAppearance236);

SoIndexedLineSet* SoIndexedLineSet238 = new SoIndexedLineSet();
SoIndexedLineSet238->setDEF(QString("PIP4toDIP4"));
SoIndexedLineSet238->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate239 = new SoCoordinate();
SoCoordinate239->setPoint(new float[]{0.25,-1.0,0.0,0.25,-1.1,0.0}, 6);
SoIndexedLineSet238->setCoord(*SoCoordinate239);

SoShape235->setGeometry(*SoIndexedLineSet238);

SoHAnimSegment232->addChild(*SoShape235);

SoHAnimJoint231->addChildren(*SoHAnimSegment232);

SoHAnimJoint* SoHAnimJoint240 = new SoHAnimJoint();
SoHAnimJoint240->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint240->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint240->setCenter(new float[]{0.25,-1.1,0.0});
SoHAnimJoint240->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint240->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment241 = new SoHAnimSegment();
SoHAnimSegment241->X3DNode::setName(QString("l_tarsal_distal_phalanx_4"));
SoHAnimSegment241->setDEF(QString("hanim_l_tarsal_distal_phalanx_4"));
SoTransform* SoTransform242 = new SoTransform();
SoTransform242->setTranslation(new float[]{0.25,-1.1,0.0});
SoShape* SoShape243 = new SoShape();
SoShape243->setUSE(QString("HAnimJointShape"));
SoTransform242->addChild(*SoShape243);

SoHAnimSegment241->addChild(*SoTransform242);

SoShape* SoShape244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance245 = new SoVRMLAppearance();
SoMaterial* SoMaterial246 = new SoMaterial();
SoMaterial246->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance245->addChild(*SoMaterial246);

SoShape244->addChild(*SoVRMLAppearance245);

SoIndexedLineSet* SoIndexedLineSet247 = new SoIndexedLineSet();
SoIndexedLineSet247->setDEF(QString("tiptoe_l_tarsal_distal_interphalangeal_4"));
SoIndexedLineSet247->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate248 = new SoCoordinate();
SoCoordinate248->setPoint(new float[]{0.25,-1.1,0.0,0.25,-1.15,0.0}, 6);
SoIndexedLineSet247->setCoord(*SoCoordinate248);

SoShape244->setGeometry(*SoIndexedLineSet247);

SoHAnimSegment241->addChild(*SoShape244);

SoHAnimJoint240->addChildren(*SoHAnimSegment241);

SoHAnimJoint231->addChildren(*SoHAnimJoint240);

SoHAnimJoint222->addChildren(*SoHAnimJoint231);

SoHAnimJoint213->addChildren(*SoHAnimJoint222);

SoHAnimJoint199->addChildren(*SoHAnimJoint213);

//TMT5
SoHAnimJoint* SoHAnimJoint249 = new SoHAnimJoint();
SoHAnimJoint249->X3DNode::setName(QString("l_tarsometatarsal_5"));
SoHAnimJoint249->setDEF(QString("hanim_l_tarsometatarsal_5"));
SoHAnimJoint249->setCenter(new float[]{0.33,-0.52,0.0});
SoHAnimJoint249->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint249->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment250 = new SoHAnimSegment();
SoHAnimSegment250->X3DNode::setName(QString("l_metatarsal_5"));
SoHAnimSegment250->setDEF(QString("hanim_l_metatarsal_5"));
SoTransform* SoTransform251 = new SoTransform();
SoTransform251->setTranslation(new float[]{0.33,-0.52,0.0});
SoShape* SoShape252 = new SoShape();
SoShape252->setUSE(QString("HAnimJointShape"));
SoTransform251->addChild(*SoShape252);

SoHAnimSegment250->addChild(*SoTransform251);

SoShape* SoShape253 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance254 = new SoVRMLAppearance();
SoMaterial* SoMaterial255 = new SoMaterial();
SoMaterial255->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance254->addChild(*SoMaterial255);

SoShape253->addChild(*SoVRMLAppearance254);

SoIndexedLineSet* SoIndexedLineSet256 = new SoIndexedLineSet();
SoIndexedLineSet256->setDEF(QString("TMT5toMTP5"));
SoIndexedLineSet256->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate257 = new SoCoordinate();
SoCoordinate257->setPoint(new float[]{0.33,-0.52,0.0,0.34,-0.8,0.0}, 6);
SoIndexedLineSet256->setCoord(*SoCoordinate257);

SoShape253->setGeometry(*SoIndexedLineSet256);

SoHAnimSegment250->addChild(*SoShape253);

SoHAnimJoint249->addChildren(*SoHAnimSegment250);

SoHAnimJoint* SoHAnimJoint258 = new SoHAnimJoint();
SoHAnimJoint258->X3DNode::setName(QString("l_metatarsophalangeal_5"));
SoHAnimJoint258->setDEF(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimJoint258->setCenter(new float[]{0.34,-0.8,0.0});
SoHAnimJoint258->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint258->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment259 = new SoHAnimSegment();
SoHAnimSegment259->X3DNode::setName(QString("l_tarsal_proximal_phalanx_5"));
SoHAnimSegment259->setDEF(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setTranslation(new float[]{0.34,-0.8,0.0});
SoShape* SoShape261 = new SoShape();
SoShape261->setUSE(QString("HAnimJointShape"));
SoTransform260->addChild(*SoShape261);

SoHAnimSegment259->addChild(*SoTransform260);

SoShape* SoShape262 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance263 = new SoVRMLAppearance();
SoMaterial* SoMaterial264 = new SoMaterial();
SoMaterial264->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance263->addChild(*SoMaterial264);

SoShape262->addChild(*SoVRMLAppearance263);

SoIndexedLineSet* SoIndexedLineSet265 = new SoIndexedLineSet();
SoIndexedLineSet265->setDEF(QString("MTP5toPIP5"));
SoIndexedLineSet265->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate266 = new SoCoordinate();
SoCoordinate266->setPoint(new float[]{0.34,-0.8,0.0,0.34,-0.95,0.0}, 6);
SoIndexedLineSet265->setCoord(*SoCoordinate266);

SoShape262->setGeometry(*SoIndexedLineSet265);

SoHAnimSegment259->addChild(*SoShape262);

SoHAnimJoint258->addChildren(*SoHAnimSegment259);

SoHAnimJoint* SoHAnimJoint267 = new SoHAnimJoint();
SoHAnimJoint267->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint267->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint267->setCenter(new float[]{0.34,-0.95,0.0});
SoHAnimJoint267->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint267->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment268 = new SoHAnimSegment();
SoHAnimSegment268->X3DNode::setName(QString("l_tarsal_middle_phalanx_5"));
SoHAnimSegment268->setDEF(QString("hanim_l_tarsal_middle_phalanx_5"));
SoTransform* SoTransform269 = new SoTransform();
SoTransform269->setTranslation(new float[]{0.34,-0.95,0.0});
SoShape* SoShape270 = new SoShape();
SoShape270->setUSE(QString("HAnimJointShape"));
SoTransform269->addChild(*SoShape270);

SoHAnimSegment268->addChild(*SoTransform269);

SoShape* SoShape271 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance272 = new SoVRMLAppearance();
SoMaterial* SoMaterial273 = new SoMaterial();
SoMaterial273->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance272->addChild(*SoMaterial273);

SoShape271->addChild(*SoVRMLAppearance272);

SoIndexedLineSet* SoIndexedLineSet274 = new SoIndexedLineSet();
SoIndexedLineSet274->setDEF(QString("PIP5toDIP5"));
SoIndexedLineSet274->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate275 = new SoCoordinate();
SoCoordinate275->setPoint(new float[]{0.34,-0.95,0.0,0.34,-1.05,0.0}, 6);
SoIndexedLineSet274->setCoord(*SoCoordinate275);

SoShape271->setGeometry(*SoIndexedLineSet274);

SoHAnimSegment268->addChild(*SoShape271);

SoHAnimJoint267->addChildren(*SoHAnimSegment268);

SoHAnimJoint* SoHAnimJoint276 = new SoHAnimJoint();
SoHAnimJoint276->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint276->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint276->setCenter(new float[]{0.34,-1.05,0.0});
SoHAnimJoint276->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint276->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment277 = new SoHAnimSegment();
SoHAnimSegment277->X3DNode::setName(QString("l_tarsal_distal_phalanx_5"));
SoHAnimSegment277->setDEF(QString("hanim_l_tarsal_distal_phalanx_5"));
SoTransform* SoTransform278 = new SoTransform();
SoTransform278->setTranslation(new float[]{0.34,-1.05,0.0});
SoShape* SoShape279 = new SoShape();
SoShape279->setUSE(QString("HAnimJointShape"));
SoTransform278->addChild(*SoShape279);

SoHAnimSegment277->addChild(*SoTransform278);

SoShape* SoShape280 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance281 = new SoVRMLAppearance();
SoMaterial* SoMaterial282 = new SoMaterial();
SoMaterial282->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance281->addChild(*SoMaterial282);

SoShape280->addChild(*SoVRMLAppearance281);

SoIndexedLineSet* SoIndexedLineSet283 = new SoIndexedLineSet();
SoIndexedLineSet283->setDEF(QString("tiptoe_l_tarsal_distal_interphalangeal_5"));
SoIndexedLineSet283->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate284 = new SoCoordinate();
SoCoordinate284->setPoint(new float[]{0.34,-1.05,0.0,0.34,-1.08,0.0}, 6);
SoIndexedLineSet283->setCoord(*SoCoordinate284);

SoShape280->setGeometry(*SoIndexedLineSet283);

SoHAnimSegment277->addChild(*SoShape280);

SoHAnimJoint276->addChildren(*SoHAnimSegment277);

SoHAnimJoint267->addChildren(*SoHAnimJoint276);

SoHAnimJoint258->addChildren(*SoHAnimJoint267);

SoHAnimJoint249->addChildren(*SoHAnimJoint258);

SoHAnimJoint199->addChildren(*SoHAnimJoint249);

SoHAnimJoint190->addChildren(*SoHAnimJoint199);

SoHAnimJoint28->addChildren(*SoHAnimJoint190);

SoHAnimJoint27->addChildren(*SoHAnimJoint28);

SoHAnimHumanoid24->setSkeleton(*SoHAnimJoint27);

SoHAnimJoint* SoHAnimJoint285 = new SoHAnimJoint();
SoHAnimJoint285->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint285);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setUSE(QString("hanim_l_calcaneocuboid"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint286);

SoHAnimJoint* SoHAnimJoint287 = new SoHAnimJoint();
SoHAnimJoint287->setUSE(QString("hanim_l_cuneonavicular_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint287);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setUSE(QString("hanim_l_cuneonavicular_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint288);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->setUSE(QString("hanim_l_cuneonavicular_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint289);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->setUSE(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint290);

SoHAnimJoint* SoHAnimJoint291 = new SoHAnimJoint();
SoHAnimJoint291->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint291);

SoHAnimJoint* SoHAnimJoint292 = new SoHAnimJoint();
SoHAnimJoint292->setUSE(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint292);

SoHAnimJoint* SoHAnimJoint293 = new SoHAnimJoint();
SoHAnimJoint293->setUSE(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint293);

SoHAnimJoint* SoHAnimJoint294 = new SoHAnimJoint();
SoHAnimJoint294->setUSE(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint294);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setUSE(QString("hanim_l_talocalcaneonavicular"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint295);

SoHAnimJoint* SoHAnimJoint296 = new SoHAnimJoint();
SoHAnimJoint296->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint296);

SoHAnimJoint* SoHAnimJoint297 = new SoHAnimJoint();
SoHAnimJoint297->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint297);

SoHAnimJoint* SoHAnimJoint298 = new SoHAnimJoint();
SoHAnimJoint298->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint298);

SoHAnimJoint* SoHAnimJoint299 = new SoHAnimJoint();
SoHAnimJoint299->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint299);

SoHAnimJoint* SoHAnimJoint300 = new SoHAnimJoint();
SoHAnimJoint300->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint300);

SoHAnimJoint* SoHAnimJoint301 = new SoHAnimJoint();
SoHAnimJoint301->setUSE(QString("hanim_l_tarsal_interphalangeal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint301);

SoHAnimJoint* SoHAnimJoint302 = new SoHAnimJoint();
SoHAnimJoint302->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint302);

SoHAnimJoint* SoHAnimJoint303 = new SoHAnimJoint();
SoHAnimJoint303->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint303);

SoHAnimJoint* SoHAnimJoint304 = new SoHAnimJoint();
SoHAnimJoint304->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint304);

SoHAnimJoint* SoHAnimJoint305 = new SoHAnimJoint();
SoHAnimJoint305->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint305);

SoHAnimJoint* SoHAnimJoint306 = new SoHAnimJoint();
SoHAnimJoint306->setUSE(QString("hanim_l_tarsometatarsal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint306);

SoHAnimJoint* SoHAnimJoint307 = new SoHAnimJoint();
SoHAnimJoint307->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint307);

SoHAnimJoint* SoHAnimJoint308 = new SoHAnimJoint();
SoHAnimJoint308->setUSE(QString("hanim_l_tarsometatarsal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint308);

SoHAnimJoint* SoHAnimJoint309 = new SoHAnimJoint();
SoHAnimJoint309->setUSE(QString("hanim_l_tarsometatarsal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint309);

SoHAnimJoint* SoHAnimJoint310 = new SoHAnimJoint();
SoHAnimJoint310->setUSE(QString("hanim_l_tarsometatarsal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint310);

SoHAnimJoint* SoHAnimJoint311 = new SoHAnimJoint();
SoHAnimJoint311->setUSE(QString("hanim_l_transversetarsal"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint311);

SoHAnimSegment* SoHAnimSegment312 = new SoHAnimSegment();
SoHAnimSegment312->setUSE(QString("hanim_l_calcaneus"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment312);

SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setUSE(QString("hanim_l_cuboid"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment313);

SoHAnimSegment* SoHAnimSegment314 = new SoHAnimSegment();
SoHAnimSegment314->setUSE(QString("hanim_l_cuneiform_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment314);

SoHAnimSegment* SoHAnimSegment315 = new SoHAnimSegment();
SoHAnimSegment315->setUSE(QString("hanim_l_cuneiform_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment315);

SoHAnimSegment* SoHAnimSegment316 = new SoHAnimSegment();
SoHAnimSegment316->setUSE(QString("hanim_l_cuneiform_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment316);

SoHAnimSegment* SoHAnimSegment317 = new SoHAnimSegment();
SoHAnimSegment317->setUSE(QString("hanim_l_metatarsal_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment317);

SoHAnimSegment* SoHAnimSegment318 = new SoHAnimSegment();
SoHAnimSegment318->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment318);

SoHAnimSegment* SoHAnimSegment319 = new SoHAnimSegment();
SoHAnimSegment319->setUSE(QString("hanim_l_metatarsal_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment319);

SoHAnimSegment* SoHAnimSegment320 = new SoHAnimSegment();
SoHAnimSegment320->setUSE(QString("hanim_l_metatarsal_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment320);

SoHAnimSegment* SoHAnimSegment321 = new SoHAnimSegment();
SoHAnimSegment321->setUSE(QString("hanim_l_metatarsal_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment321);

SoHAnimSegment* SoHAnimSegment322 = new SoHAnimSegment();
SoHAnimSegment322->setUSE(QString("hanim_l_navicular"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment322);

SoHAnimSegment* SoHAnimSegment323 = new SoHAnimSegment();
SoHAnimSegment323->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment323);

SoHAnimSegment* SoHAnimSegment324 = new SoHAnimSegment();
SoHAnimSegment324->setUSE(QString("hanim_l_tarsal_distal_phalanx_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment324);

SoHAnimSegment* SoHAnimSegment325 = new SoHAnimSegment();
SoHAnimSegment325->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment325);

SoHAnimSegment* SoHAnimSegment326 = new SoHAnimSegment();
SoHAnimSegment326->setUSE(QString("hanim_l_tarsal_distal_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment326);

SoHAnimSegment* SoHAnimSegment327 = new SoHAnimSegment();
SoHAnimSegment327->setUSE(QString("hanim_l_tarsal_distal_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment327);

SoHAnimSegment* SoHAnimSegment328 = new SoHAnimSegment();
SoHAnimSegment328->setUSE(QString("hanim_l_tarsal_distal_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment328);

SoHAnimSegment* SoHAnimSegment329 = new SoHAnimSegment();
SoHAnimSegment329->setUSE(QString("hanim_l_tarsal_middle_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment329);

SoHAnimSegment* SoHAnimSegment330 = new SoHAnimSegment();
SoHAnimSegment330->setUSE(QString("hanim_l_tarsal_middle_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment330);

SoHAnimSegment* SoHAnimSegment331 = new SoHAnimSegment();
SoHAnimSegment331->setUSE(QString("hanim_l_tarsal_middle_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment331);

SoHAnimSegment* SoHAnimSegment332 = new SoHAnimSegment();
SoHAnimSegment332->setUSE(QString("hanim_l_tarsal_middle_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment332);

SoHAnimSegment* SoHAnimSegment333 = new SoHAnimSegment();
SoHAnimSegment333->setUSE(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment333);

SoHAnimSegment* SoHAnimSegment334 = new SoHAnimSegment();
SoHAnimSegment334->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment334);

SoHAnimSegment* SoHAnimSegment335 = new SoHAnimSegment();
SoHAnimSegment335->setUSE(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment335);

SoHAnimSegment* SoHAnimSegment336 = new SoHAnimSegment();
SoHAnimSegment336->setUSE(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment336);

SoHAnimSegment* SoHAnimSegment337 = new SoHAnimSegment();
SoHAnimSegment337->setUSE(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment337);

SoNode22->addChild(*SoHAnimHumanoid24);

SoSceneManager0->setSceneGraph(*SoNode22);

return 0;
}
