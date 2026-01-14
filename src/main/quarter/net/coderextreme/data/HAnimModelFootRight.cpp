
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
Someta3->setContent(QString("HAnimModelFootRight.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Right foot, using high-fidelity definitions for HAnim version 2.0"));
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
Someta9->setName(QString("TODO"));
Someta9->setContent(QString("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("TODO"));
Someta10->setContent(QString("Add links to figures"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("TODO"));
Someta11->setContent(QString("Add Viewpoints to enable inspection"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("info"));
Someta12->setContent(QString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("warning"));
Someta13->setContent(QString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("reference"));
Someta19->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("subject"));
Someta20->setContent(QString("X3D HAnim humanoid animation"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("TODO"));
Someta21->setContent(QString("Integrate and confirm Segment/Joint names, Viewpoints."));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("identifier"));
Someta22->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("generator"));
Someta23->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("license"));
Someta24->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta24);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode25 = new SoNode();
SoWorldInfo* SoWorldInfo26 = new SoWorldInfo();
SoWorldInfo26->setTitle(QString("HAnimModelFootRight.x3d"));
SoNode25->addChild(*SoWorldInfo26);

SoHAnimHumanoid* SoHAnimHumanoid27 = new SoHAnimHumanoid();
SoHAnimHumanoid27->X3DNode::setName(QString("Foot_Right"));
SoHAnimHumanoid27->setDEF(QString("hanim_Foot_Right"));
SoHAnimHumanoid27->setLoa(4);
SoHAnimHumanoid27->setVersion(QString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
SoMetadataSet* SoMetadataSet28 = new SoMetadataSet();
SoMetadataSet28->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet28->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString29 = new SoMetadataString();
SoMetadataString29->X3DNode::setName(QString("authorName"));
SoMetadataString29->setValue(new QString[]{QString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
SoMetadataSet28->setValue((X3DNode *)&SoMetadataString29);

SoHAnimHumanoid27->setMetadata(*SoMetadataSet28);

SoHAnimJoint* SoHAnimJoint30 = new SoHAnimJoint();
SoHAnimJoint30->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint30->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint30->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint30->setLlimit(new float[]{0.0,0.0,0.0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model
SoHAnimJoint* SoHAnimJoint31 = new SoHAnimJoint();
SoHAnimJoint31->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint31->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint31->setDescription(QString("connection joint of foot to leg above"));
SoHAnimJoint31->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint31->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment32 = new SoHAnimSegment();
SoHAnimSegment32->X3DNode::setName(QString("r_talus"));
SoHAnimSegment32->setDEF(QString("hanim_r_talus"));
SoTransform* SoTransform33 = new SoTransform();
SoShape* SoShape34 = new SoShape();
SoShape34->setDEF(QString("HAnimJointShape"));
SoSphere* SoSphere35 = new SoSphere();
SoSphere35->setRadius(0.025);
SoShape34->setGeometry(*SoSphere35);

SoVRMLAppearance* SoVRMLAppearance36 = new SoVRMLAppearance();
SoVRMLAppearance36->setDEF(QString("HAnimJointAppearance"));
SoMaterial* SoMaterial37 = new SoMaterial();
SoMaterial37->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance36->addChild(*SoMaterial37);

SoShape34->addChild(*SoVRMLAppearance36);

SoTransform33->addChild(*SoShape34);

SoHAnimSegment32->addChild(*SoTransform33);

SoShape* SoShape38 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance39 = new SoVRMLAppearance();
SoMaterial* SoMaterial40 = new SoMaterial();
SoMaterial40->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance39->addChild(*SoMaterial40);

SoShape38->addChild(*SoVRMLAppearance39);

SoIndexedLineSet* SoIndexedLineSet41 = new SoIndexedLineSet();
SoIndexedLineSet41->setDEF(QString("TCtoTCN"));
SoIndexedLineSet41->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate42 = new SoCoordinate();
SoCoordinate42->setPoint(new float[]{0.0,0.0,0.0,0.0,-0.3,0.0}, 6);
SoIndexedLineSet41->setCoord(*SoCoordinate42);

SoShape38->setGeometry(*SoIndexedLineSet41);

SoHAnimSegment32->addChild(*SoShape38);

SoShape* SoShape43 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoMaterial* SoMaterial45 = new SoMaterial();
SoMaterial45->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance44->addChild(*SoMaterial45);

SoShape43->addChild(*SoVRMLAppearance44);

SoIndexedLineSet* SoIndexedLineSet46 = new SoIndexedLineSet();
SoIndexedLineSet46->setDEF(QString("TCtoCC"));
SoIndexedLineSet46->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate47 = new SoCoordinate();
SoCoordinate47->setPoint(new float[]{0.0,0.0,0.0,-0.2,0.3,0.0}, 6);
SoIndexedLineSet46->setCoord(*SoCoordinate47);

SoShape43->setGeometry(*SoIndexedLineSet46);

SoHAnimSegment32->addChild(*SoShape43);

SoHAnimJoint31->addChildren(*SoHAnimSegment32);

//TCN
SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->X3DNode::setName(QString("r_talocalcaneonavicular"));
SoHAnimJoint48->setDEF(QString("hanim_r_talocalcaneonavicular"));
SoHAnimJoint48->setCenter(new float[]{0.0,-0.3,0.0});
SoHAnimJoint48->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint48->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment49 = new SoHAnimSegment();
SoHAnimSegment49->X3DNode::setName(QString("r_navicular"));
SoHAnimSegment49->setDEF(QString("hanim_r_navicular"));
SoTransform* SoTransform50 = new SoTransform();
SoTransform50->setTranslation(new float[]{0.0,-0.3,0.0});
SoShape* SoShape51 = new SoShape();
SoShape51->setUSE(QString("HAnimJointShape"));
SoTransform50->addChild(*SoShape51);

SoHAnimSegment49->addChild(*SoTransform50);

SoShape* SoShape52 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance53 = new SoVRMLAppearance();
SoMaterial* SoMaterial54 = new SoMaterial();
SoMaterial54->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance53->addChild(*SoMaterial54);

SoShape52->addChild(*SoVRMLAppearance53);

SoIndexedLineSet* SoIndexedLineSet55 = new SoIndexedLineSet();
SoIndexedLineSet55->setDEF(QString("TCNtoCN1"));
SoIndexedLineSet55->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate56 = new SoCoordinate();
SoCoordinate56->setPoint(new float[]{0.0,-0.3,0.0,0.1,-0.45,0.0}, 6);
SoIndexedLineSet55->setCoord(*SoCoordinate56);

SoShape52->setGeometry(*SoIndexedLineSet55);

SoHAnimSegment49->addChild(*SoShape52);

SoShape* SoShape57 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance58 = new SoVRMLAppearance();
SoMaterial* SoMaterial59 = new SoMaterial();
SoMaterial59->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance58->addChild(*SoMaterial59);

SoShape57->addChild(*SoVRMLAppearance58);

SoIndexedLineSet* SoIndexedLineSet60 = new SoIndexedLineSet();
SoIndexedLineSet60->setDEF(QString("TCNtoCN2"));
SoIndexedLineSet60->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setPoint(new float[]{0.0,-0.3,0.0,0.0,-0.45,0.0}, 6);
SoIndexedLineSet60->setCoord(*SoCoordinate61);

SoShape57->setGeometry(*SoIndexedLineSet60);

SoHAnimSegment49->addChild(*SoShape57);

SoShape* SoShape62 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance63 = new SoVRMLAppearance();
SoMaterial* SoMaterial64 = new SoMaterial();
SoMaterial64->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance63->addChild(*SoMaterial64);

SoShape62->addChild(*SoVRMLAppearance63);

SoIndexedLineSet* SoIndexedLineSet65 = new SoIndexedLineSet();
SoIndexedLineSet65->setDEF(QString("TCNtoCN3"));
SoIndexedLineSet65->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate66 = new SoCoordinate();
SoCoordinate66->setPoint(new float[]{0.0,-0.3,0.0,-0.1,-0.4,0.0}, 6);
SoIndexedLineSet65->setCoord(*SoCoordinate66);

SoShape62->setGeometry(*SoIndexedLineSet65);

SoHAnimSegment49->addChild(*SoShape62);

SoHAnimJoint48->addChildren(*SoHAnimSegment49);

//CN1
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->X3DNode::setName(QString("r_cuneonavicular_1"));
SoHAnimJoint67->setDEF(QString("hanim_r_cuneonavicular_1"));
SoHAnimJoint67->setCenter(new float[]{0.1,-0.45,0.0});
SoHAnimJoint67->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint67->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment68 = new SoHAnimSegment();
SoHAnimSegment68->X3DNode::setName(QString("r_cuneiform_1"));
SoHAnimSegment68->setDEF(QString("hanim_r_cuneiform_1"));
SoTransform* SoTransform69 = new SoTransform();
SoTransform69->setTranslation(new float[]{0.1,-0.45,0.0});
SoShape* SoShape70 = new SoShape();
SoShape70->setUSE(QString("HAnimJointShape"));
SoTransform69->addChild(*SoShape70);

SoHAnimSegment68->addChild(*SoTransform69);

SoShape* SoShape71 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance72 = new SoVRMLAppearance();
SoMaterial* SoMaterial73 = new SoMaterial();
SoMaterial73->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance72->addChild(*SoMaterial73);

SoShape71->addChild(*SoVRMLAppearance72);

SoIndexedLineSet* SoIndexedLineSet74 = new SoIndexedLineSet();
SoIndexedLineSet74->setDEF(QString("CN1toTMT1"));
SoIndexedLineSet74->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate75 = new SoCoordinate();
SoCoordinate75->setPoint(new float[]{0.1,-0.45,0.0,0.1,-0.6,0.0}, 6);
SoIndexedLineSet74->setCoord(*SoCoordinate75);

SoShape71->setGeometry(*SoIndexedLineSet74);

SoHAnimSegment68->addChild(*SoShape71);

SoHAnimJoint67->addChildren(*SoHAnimSegment68);

SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->X3DNode::setName(QString("r_tarsometatarsal_1"));
SoHAnimJoint76->setDEF(QString("hanim_r_tarsometatarsal_1"));
SoHAnimJoint76->setCenter(new float[]{0.1,-0.6,0.0});
SoHAnimJoint76->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint76->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment77 = new SoHAnimSegment();
SoHAnimSegment77->X3DNode::setName(QString("r_metatarsal_1"));
SoHAnimSegment77->setDEF(QString("hanim_r_metatarsal_1"));
SoTransform* SoTransform78 = new SoTransform();
SoTransform78->setTranslation(new float[]{0.1,-0.6,0.0});
SoShape* SoShape79 = new SoShape();
SoShape79->setUSE(QString("HAnimJointShape"));
SoTransform78->addChild(*SoShape79);

SoHAnimSegment77->addChild(*SoTransform78);

SoShape* SoShape80 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance81 = new SoVRMLAppearance();
SoMaterial* SoMaterial82 = new SoMaterial();
SoMaterial82->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance81->addChild(*SoMaterial82);

SoShape80->addChild(*SoVRMLAppearance81);

SoIndexedLineSet* SoIndexedLineSet83 = new SoIndexedLineSet();
SoIndexedLineSet83->setDEF(QString("TMT1toMTP1"));
SoIndexedLineSet83->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate84 = new SoCoordinate();
SoCoordinate84->setPoint(new float[]{0.1,-0.6,0.0,0.1,-0.9,0.0}, 6);
SoIndexedLineSet83->setCoord(*SoCoordinate84);

SoShape80->setGeometry(*SoIndexedLineSet83);

SoHAnimSegment77->addChild(*SoShape80);

SoHAnimJoint76->addChildren(*SoHAnimSegment77);

SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->X3DNode::setName(QString("r_metatarsophalangeal_1"));
SoHAnimJoint85->setDEF(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimJoint85->setCenter(new float[]{0.1,-0.9,0.0});
SoHAnimJoint85->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint85->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment86 = new SoHAnimSegment();
SoHAnimSegment86->X3DNode::setName(QString("r_tarsal_proximal_phalanx_1"));
SoHAnimSegment86->setDEF(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoTransform* SoTransform87 = new SoTransform();
SoTransform87->setTranslation(new float[]{0.1,-0.9,0.0});
SoShape* SoShape88 = new SoShape();
SoShape88->setUSE(QString("HAnimJointShape"));
SoTransform87->addChild(*SoShape88);

SoHAnimSegment86->addChild(*SoTransform87);

SoShape* SoShape89 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance90 = new SoVRMLAppearance();
SoMaterial* SoMaterial91 = new SoMaterial();
SoMaterial91->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance90->addChild(*SoMaterial91);

SoShape89->addChild(*SoVRMLAppearance90);

SoIndexedLineSet* SoIndexedLineSet92 = new SoIndexedLineSet();
SoIndexedLineSet92->setDEF(QString("MTP1toIP1"));
SoIndexedLineSet92->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate93 = new SoCoordinate();
SoCoordinate93->setPoint(new float[]{0.1,-0.9,0.0,0.1,-1.05,0.0}, 6);
SoIndexedLineSet92->setCoord(*SoCoordinate93);

SoShape89->setGeometry(*SoIndexedLineSet92);

SoHAnimSegment86->addChild(*SoShape89);

SoHAnimJoint85->addChildren(*SoHAnimSegment86);

SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->X3DNode::setName(QString("r_tarsal_interphalangeal_1"));
SoHAnimJoint94->setDEF(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimJoint94->setCenter(new float[]{0.1,-1.05,0.0});
SoHAnimJoint94->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint94->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment95 = new SoHAnimSegment();
SoHAnimSegment95->X3DNode::setName(QString("r_tarsal_distal_phalanx_1"));
SoHAnimSegment95->setDEF(QString("hanim_r_tarsal_distal_phalanx_1"));
SoTransform* SoTransform96 = new SoTransform();
SoTransform96->setTranslation(new float[]{0.1,-1.05,0.0});
SoShape* SoShape97 = new SoShape();
SoShape97->setUSE(QString("HAnimJointShape"));
SoTransform96->addChild(*SoShape97);

SoHAnimSegment95->addChild(*SoTransform96);

SoShape* SoShape98 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance99 = new SoVRMLAppearance();
SoMaterial* SoMaterial100 = new SoMaterial();
SoMaterial100->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance99->addChild(*SoMaterial100);

SoShape98->addChild(*SoVRMLAppearance99);

SoIndexedLineSet* SoIndexedLineSet101 = new SoIndexedLineSet();
SoIndexedLineSet101->setDEF(QString("tiptoe_r_interphalangeal_"));
SoIndexedLineSet101->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate102 = new SoCoordinate();
SoCoordinate102->setPoint(new float[]{0.1,-1.05,0.0,0.1,-1.1,0.0}, 6);
SoIndexedLineSet101->setCoord(*SoCoordinate102);

SoShape98->setGeometry(*SoIndexedLineSet101);

SoHAnimSegment95->addChild(*SoShape98);

SoHAnimJoint94->addChildren(*SoHAnimSegment95);

SoHAnimJoint85->addChildren(*SoHAnimJoint94);

SoHAnimJoint76->addChildren(*SoHAnimJoint85);

SoHAnimJoint67->addChildren(*SoHAnimJoint76);

SoHAnimJoint48->addChildren(*SoHAnimJoint67);

//CN2
SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->X3DNode::setName(QString("r_cuneonavicular_2"));
SoHAnimJoint103->setDEF(QString("hanim_r_cuneonavicular_2"));
SoHAnimJoint103->setCenter(new float[]{0.0,-0.45,0.0});
SoHAnimJoint103->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint103->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment104 = new SoHAnimSegment();
SoHAnimSegment104->X3DNode::setName(QString("r_cuneiform_2"));
SoHAnimSegment104->setDEF(QString("hanim_r_cuneiform_2"));
SoTransform* SoTransform105 = new SoTransform();
SoTransform105->setTranslation(new float[]{0.0,-0.45,0.0});
SoShape* SoShape106 = new SoShape();
SoShape106->setUSE(QString("HAnimJointShape"));
SoTransform105->addChild(*SoShape106);

SoHAnimSegment104->addChild(*SoTransform105);

SoShape* SoShape107 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance108 = new SoVRMLAppearance();
SoMaterial* SoMaterial109 = new SoMaterial();
SoMaterial109->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance108->addChild(*SoMaterial109);

SoShape107->addChild(*SoVRMLAppearance108);

SoIndexedLineSet* SoIndexedLineSet110 = new SoIndexedLineSet();
SoIndexedLineSet110->setDEF(QString("CN2toTMT2"));
SoIndexedLineSet110->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate111 = new SoCoordinate();
SoCoordinate111->setPoint(new float[]{0.0,-0.45,0.0,-0.05,-0.6,0.0}, 6);
SoIndexedLineSet110->setCoord(*SoCoordinate111);

SoShape107->setGeometry(*SoIndexedLineSet110);

SoHAnimSegment104->addChild(*SoShape107);

SoHAnimJoint103->addChildren(*SoHAnimSegment104);

SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint112->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint112->setCenter(new float[]{-0.05,-0.6,0.0});
SoHAnimJoint112->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint112->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment113 = new SoHAnimSegment();
SoHAnimSegment113->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimSegment113->setDEF(QString("hanim_r_metatarsal_2"));
SoTransform* SoTransform114 = new SoTransform();
SoTransform114->setTranslation(new float[]{-0.05,-0.6,0.0});
SoShape* SoShape115 = new SoShape();
SoShape115->setUSE(QString("HAnimJointShape"));
SoTransform114->addChild(*SoShape115);

SoHAnimSegment113->addChild(*SoTransform114);

SoShape* SoShape116 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance117 = new SoVRMLAppearance();
SoMaterial* SoMaterial118 = new SoMaterial();
SoMaterial118->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance117->addChild(*SoMaterial118);

SoShape116->addChild(*SoVRMLAppearance117);

SoIndexedLineSet* SoIndexedLineSet119 = new SoIndexedLineSet();
SoIndexedLineSet119->setDEF(QString("TMT2toMTP2"));
SoIndexedLineSet119->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate120 = new SoCoordinate();
SoCoordinate120->setPoint(new float[]{-0.05,-0.6,0.0,-0.05,-0.9,0.0}, 6);
SoIndexedLineSet119->setCoord(*SoCoordinate120);

SoShape116->setGeometry(*SoIndexedLineSet119);

SoHAnimSegment113->addChild(*SoShape116);

SoHAnimJoint112->addChildren(*SoHAnimSegment113);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint121->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint121->setCenter(new float[]{-0.05,-0.9,0.0});
SoHAnimJoint121->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint121->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment122 = new SoHAnimSegment();
SoHAnimSegment122->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment122->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform123 = new SoTransform();
SoTransform123->setTranslation(new float[]{-0.05,-0.9,0.0});
SoShape* SoShape124 = new SoShape();
SoShape124->setUSE(QString("HAnimJointShape"));
SoTransform123->addChild(*SoShape124);

SoHAnimSegment122->addChild(*SoTransform123);

SoShape* SoShape125 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance126 = new SoVRMLAppearance();
SoMaterial* SoMaterial127 = new SoMaterial();
SoMaterial127->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance126->addChild(*SoMaterial127);

SoShape125->addChild(*SoVRMLAppearance126);

SoIndexedLineSet* SoIndexedLineSet128 = new SoIndexedLineSet();
SoIndexedLineSet128->setDEF(QString("MTP2toPIP2"));
SoIndexedLineSet128->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate129 = new SoCoordinate();
SoCoordinate129->setPoint(new float[]{-0.05,-0.9,0.0,-0.05,-1.05,0.0}, 6);
SoIndexedLineSet128->setCoord(*SoCoordinate129);

SoShape125->setGeometry(*SoIndexedLineSet128);

SoHAnimSegment122->addChild(*SoShape125);

SoHAnimJoint121->addChildren(*SoHAnimSegment122);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint130->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint130->setCenter(new float[]{-0.05,-1.05,0.0});
SoHAnimJoint130->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint130->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment131 = new SoHAnimSegment();
SoHAnimSegment131->X3DNode::setName(QString("r_tarsal_middle_phalanx_2"));
SoHAnimSegment131->setDEF(QString("hanim_r_tarsal_middle_phalanx_2"));
SoTransform* SoTransform132 = new SoTransform();
SoTransform132->setTranslation(new float[]{-0.05,-1.05,0.0});
SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("HAnimJointShape"));
SoTransform132->addChild(*SoShape133);

SoHAnimSegment131->addChild(*SoTransform132);

SoShape* SoShape134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance135 = new SoVRMLAppearance();
SoMaterial* SoMaterial136 = new SoMaterial();
SoMaterial136->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance135->addChild(*SoMaterial136);

SoShape134->addChild(*SoVRMLAppearance135);

SoIndexedLineSet* SoIndexedLineSet137 = new SoIndexedLineSet();
SoIndexedLineSet137->setDEF(QString("PIP2toDIP2"));
SoIndexedLineSet137->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate138 = new SoCoordinate();
SoCoordinate138->setPoint(new float[]{-0.05,-1.05,0.0,-0.05,-1.12,0.0}, 6);
SoIndexedLineSet137->setCoord(*SoCoordinate138);

SoShape134->setGeometry(*SoIndexedLineSet137);

SoHAnimSegment131->addChild(*SoShape134);

SoHAnimJoint130->addChildren(*SoHAnimSegment131);

SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint139->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint139->setCenter(new float[]{-0.05,-1.12,0.0});
SoHAnimJoint139->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint139->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment140 = new SoHAnimSegment();
SoHAnimSegment140->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSegment140->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoTransform* SoTransform141 = new SoTransform();
SoTransform141->setTranslation(new float[]{-0.05,-1.12,0.0});
SoShape* SoShape142 = new SoShape();
SoShape142->setUSE(QString("HAnimJointShape"));
SoTransform141->addChild(*SoShape142);

SoHAnimSegment140->addChild(*SoTransform141);

SoShape* SoShape143 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance144 = new SoVRMLAppearance();
SoMaterial* SoMaterial145 = new SoMaterial();
SoMaterial145->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance144->addChild(*SoMaterial145);

SoShape143->addChild(*SoVRMLAppearance144);

SoIndexedLineSet* SoIndexedLineSet146 = new SoIndexedLineSet();
SoIndexedLineSet146->setDEF(QString("tiptoe_r_tarsal_distal_interphalangeal_2"));
SoIndexedLineSet146->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate147 = new SoCoordinate();
SoCoordinate147->setPoint(new float[]{-0.05,-1.12,0.0,-0.05,-1.16,0.0}, 6);
SoIndexedLineSet146->setCoord(*SoCoordinate147);

SoShape143->setGeometry(*SoIndexedLineSet146);

SoHAnimSegment140->addChild(*SoShape143);

SoHAnimJoint139->addChildren(*SoHAnimSegment140);

SoHAnimJoint130->addChildren(*SoHAnimJoint139);

SoHAnimJoint121->addChildren(*SoHAnimJoint130);

SoHAnimJoint112->addChildren(*SoHAnimJoint121);

SoHAnimJoint103->addChildren(*SoHAnimJoint112);

SoHAnimJoint48->addChildren(*SoHAnimJoint103);

//CN3
SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->X3DNode::setName(QString("r_cuneonavicular_3"));
SoHAnimJoint148->setDEF(QString("hanim_r_cuneonavicular_3"));
SoHAnimJoint148->setCenter(new float[]{-0.1,-0.4,0.0});
SoHAnimJoint148->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint148->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment149 = new SoHAnimSegment();
SoHAnimSegment149->X3DNode::setName(QString("r_cuneiform_3"));
SoHAnimSegment149->setDEF(QString("hanim_r_cuneiform_3"));
SoTransform* SoTransform150 = new SoTransform();
SoTransform150->setTranslation(new float[]{-0.1,-0.4,0.0});
SoShape* SoShape151 = new SoShape();
SoShape151->setUSE(QString("HAnimJointShape"));
SoTransform150->addChild(*SoShape151);

SoHAnimSegment149->addChild(*SoTransform150);

SoShape* SoShape152 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance153 = new SoVRMLAppearance();
SoMaterial* SoMaterial154 = new SoMaterial();
SoMaterial154->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance153->addChild(*SoMaterial154);

SoShape152->addChild(*SoVRMLAppearance153);

SoIndexedLineSet* SoIndexedLineSet155 = new SoIndexedLineSet();
SoIndexedLineSet155->setDEF(QString("CN3toTMT3"));
SoIndexedLineSet155->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate156 = new SoCoordinate();
SoCoordinate156->setPoint(new float[]{-0.1,-0.4,0.0,-0.15,-0.6,0.0}, 6);
SoIndexedLineSet155->setCoord(*SoCoordinate156);

SoShape152->setGeometry(*SoIndexedLineSet155);

SoHAnimSegment149->addChild(*SoShape152);

SoHAnimJoint148->addChildren(*SoHAnimSegment149);

SoHAnimJoint* SoHAnimJoint157 = new SoHAnimJoint();
SoHAnimJoint157->X3DNode::setName(QString("r_tarsometatarsal_3"));
SoHAnimJoint157->setDEF(QString("hanim_r_tarsometatarsal_3"));
SoHAnimJoint157->setCenter(new float[]{-0.15,-0.6,0.0});
SoHAnimJoint157->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint157->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment158 = new SoHAnimSegment();
SoHAnimSegment158->X3DNode::setName(QString("r_metatarsal_3"));
SoHAnimSegment158->setDEF(QString("hanim_r_metatarsal_3"));
SoTransform* SoTransform159 = new SoTransform();
SoTransform159->setTranslation(new float[]{-0.15,-0.6,0.0});
SoShape* SoShape160 = new SoShape();
SoShape160->setUSE(QString("HAnimJointShape"));
SoTransform159->addChild(*SoShape160);

SoHAnimSegment158->addChild(*SoTransform159);

SoShape* SoShape161 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance162 = new SoVRMLAppearance();
SoMaterial* SoMaterial163 = new SoMaterial();
SoMaterial163->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance162->addChild(*SoMaterial163);

SoShape161->addChild(*SoVRMLAppearance162);

SoIndexedLineSet* SoIndexedLineSet164 = new SoIndexedLineSet();
SoIndexedLineSet164->setDEF(QString("TMT3toMTP3"));
SoIndexedLineSet164->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate165 = new SoCoordinate();
SoCoordinate165->setPoint(new float[]{-0.15,-0.6,0.0,-0.15,-0.9,0.0}, 6);
SoIndexedLineSet164->setCoord(*SoCoordinate165);

SoShape161->setGeometry(*SoIndexedLineSet164);

SoHAnimSegment158->addChild(*SoShape161);

SoHAnimJoint157->addChildren(*SoHAnimSegment158);

SoHAnimJoint* SoHAnimJoint166 = new SoHAnimJoint();
SoHAnimJoint166->X3DNode::setName(QString("r_metatarsophalangeal_3"));
SoHAnimJoint166->setDEF(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimJoint166->setCenter(new float[]{-0.15,-0.9,0.0});
SoHAnimJoint166->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint166->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment167 = new SoHAnimSegment();
SoHAnimSegment167->X3DNode::setName(QString("r_tarsal_proximal_phalanx_3"));
SoHAnimSegment167->setDEF(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoTransform* SoTransform168 = new SoTransform();
SoTransform168->setTranslation(new float[]{-0.15,-0.9,0.0});
SoShape* SoShape169 = new SoShape();
SoShape169->setUSE(QString("HAnimJointShape"));
SoTransform168->addChild(*SoShape169);

SoHAnimSegment167->addChild(*SoTransform168);

SoShape* SoShape170 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance171 = new SoVRMLAppearance();
SoMaterial* SoMaterial172 = new SoMaterial();
SoMaterial172->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance171->addChild(*SoMaterial172);

SoShape170->addChild(*SoVRMLAppearance171);

SoIndexedLineSet* SoIndexedLineSet173 = new SoIndexedLineSet();
SoIndexedLineSet173->setDEF(QString("MTP3toPIP3"));
SoIndexedLineSet173->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate174 = new SoCoordinate();
SoCoordinate174->setPoint(new float[]{-0.15,-0.9,0.0,-0.15,-1.05,0.0}, 6);
SoIndexedLineSet173->setCoord(*SoCoordinate174);

SoShape170->setGeometry(*SoIndexedLineSet173);

SoHAnimSegment167->addChild(*SoShape170);

SoHAnimJoint166->addChildren(*SoHAnimSegment167);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint175->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint175->setCenter(new float[]{-0.15,-1.05,0.0});
SoHAnimJoint175->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint175->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment176 = new SoHAnimSegment();
SoHAnimSegment176->X3DNode::setName(QString("r_tarsal_middle_phalanx_3"));
SoHAnimSegment176->setDEF(QString("hanim_r_tarsal_middle_phalanx_3"));
SoTransform* SoTransform177 = new SoTransform();
SoTransform177->setTranslation(new float[]{-0.15,-1.05,0.0});
SoShape* SoShape178 = new SoShape();
SoShape178->setUSE(QString("HAnimJointShape"));
SoTransform177->addChild(*SoShape178);

SoHAnimSegment176->addChild(*SoTransform177);

SoShape* SoShape179 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance180 = new SoVRMLAppearance();
SoMaterial* SoMaterial181 = new SoMaterial();
SoMaterial181->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance180->addChild(*SoMaterial181);

SoShape179->addChild(*SoVRMLAppearance180);

SoIndexedLineSet* SoIndexedLineSet182 = new SoIndexedLineSet();
SoIndexedLineSet182->setDEF(QString("PIP3toDIP3"));
SoIndexedLineSet182->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate183 = new SoCoordinate();
SoCoordinate183->setPoint(new float[]{-0.15,-1.05,0.0,-0.15,-1.13,0.0}, 6);
SoIndexedLineSet182->setCoord(*SoCoordinate183);

SoShape179->setGeometry(*SoIndexedLineSet182);

SoHAnimSegment176->addChild(*SoShape179);

SoHAnimJoint175->addChildren(*SoHAnimSegment176);

SoHAnimJoint* SoHAnimJoint184 = new SoHAnimJoint();
SoHAnimJoint184->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint184->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint184->setCenter(new float[]{-0.15,-1.13,0.0});
SoHAnimJoint184->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint184->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment185 = new SoHAnimSegment();
SoHAnimSegment185->X3DNode::setName(QString("r_tarsal_distal_phalanx_3"));
SoHAnimSegment185->setDEF(QString("hanim_r_tarsal_distal_phalanx_3"));
SoTransform* SoTransform186 = new SoTransform();
SoTransform186->setTranslation(new float[]{-0.15,-1.13,0.0});
SoShape* SoShape187 = new SoShape();
SoShape187->setUSE(QString("HAnimJointShape"));
SoTransform186->addChild(*SoShape187);

SoHAnimSegment185->addChild(*SoTransform186);

SoShape* SoShape188 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance189 = new SoVRMLAppearance();
SoMaterial* SoMaterial190 = new SoMaterial();
SoMaterial190->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance189->addChild(*SoMaterial190);

SoShape188->addChild(*SoVRMLAppearance189);

SoIndexedLineSet* SoIndexedLineSet191 = new SoIndexedLineSet();
SoIndexedLineSet191->setDEF(QString("tiptoe_r_tarsal_distal_interphalangeal_3"));
SoIndexedLineSet191->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate192 = new SoCoordinate();
SoCoordinate192->setPoint(new float[]{-0.15,-1.13,0.0,-0.15,-1.16,0.0}, 6);
SoIndexedLineSet191->setCoord(*SoCoordinate192);

SoShape188->setGeometry(*SoIndexedLineSet191);

SoHAnimSegment185->addChild(*SoShape188);

SoHAnimJoint184->addChildren(*SoHAnimSegment185);

SoHAnimJoint175->addChildren(*SoHAnimJoint184);

SoHAnimJoint166->addChildren(*SoHAnimJoint175);

SoHAnimJoint157->addChildren(*SoHAnimJoint166);

SoHAnimJoint148->addChildren(*SoHAnimJoint157);

SoHAnimJoint48->addChildren(*SoHAnimJoint148);

SoHAnimJoint31->addChildren(*SoHAnimJoint48);

//CC
SoHAnimJoint* SoHAnimJoint193 = new SoHAnimJoint();
SoHAnimJoint193->X3DNode::setName(QString("r_calcaneocuboid"));
SoHAnimJoint193->setDEF(QString("hanim_r_calcaneocuboid"));
SoHAnimJoint193->setCenter(new float[]{-0.2,0.3,0.0});
SoHAnimJoint193->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint193->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment194 = new SoHAnimSegment();
SoHAnimSegment194->X3DNode::setName(QString("r_calcaneus"));
SoHAnimSegment194->setDEF(QString("hanim_r_calcaneus"));
SoTransform* SoTransform195 = new SoTransform();
SoTransform195->setTranslation(new float[]{-0.2,0.3,0.0});
SoShape* SoShape196 = new SoShape();
SoShape196->setUSE(QString("HAnimJointShape"));
SoTransform195->addChild(*SoShape196);

SoHAnimSegment194->addChild(*SoTransform195);

SoShape* SoShape197 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance198 = new SoVRMLAppearance();
SoMaterial* SoMaterial199 = new SoMaterial();
SoMaterial199->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance198->addChild(*SoMaterial199);

SoShape197->addChild(*SoVRMLAppearance198);

SoIndexedLineSet* SoIndexedLineSet200 = new SoIndexedLineSet();
SoIndexedLineSet200->setDEF(QString("CCtoTT"));
SoIndexedLineSet200->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate201 = new SoCoordinate();
SoCoordinate201->setPoint(new float[]{-0.2,0.3,0.0,-0.21,-0.3,0.0}, 6);
SoIndexedLineSet200->setCoord(*SoCoordinate201);

SoShape197->setGeometry(*SoIndexedLineSet200);

SoHAnimSegment194->addChild(*SoShape197);

SoHAnimJoint193->addChildren(*SoHAnimSegment194);

//TT
SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->X3DNode::setName(QString("r_transversetarsal"));
SoHAnimJoint202->setDEF(QString("hanim_r_transversetarsal"));
SoHAnimJoint202->setCenter(new float[]{-0.21,-0.3,0.0});
SoHAnimJoint202->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint202->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment203 = new SoHAnimSegment();
SoHAnimSegment203->X3DNode::setName(QString("r_cuboid"));
SoHAnimSegment203->setDEF(QString("hanim_r_cuboid"));
SoTransform* SoTransform204 = new SoTransform();
SoTransform204->setTranslation(new float[]{-0.21,-0.3,0.0});
SoShape* SoShape205 = new SoShape();
SoShape205->setUSE(QString("HAnimJointShape"));
SoTransform204->addChild(*SoShape205);

SoHAnimSegment203->addChild(*SoTransform204);

SoShape* SoShape206 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance207 = new SoVRMLAppearance();
SoMaterial* SoMaterial208 = new SoMaterial();
SoMaterial208->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance207->addChild(*SoMaterial208);

SoShape206->addChild(*SoVRMLAppearance207);

SoIndexedLineSet* SoIndexedLineSet209 = new SoIndexedLineSet();
SoIndexedLineSet209->setDEF(QString("TTtoTMT4"));
SoIndexedLineSet209->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate210 = new SoCoordinate();
SoCoordinate210->setPoint(new float[]{-0.21,-0.3,0.0,-0.25,-0.58,0.0}, 6);
SoIndexedLineSet209->setCoord(*SoCoordinate210);

SoShape206->setGeometry(*SoIndexedLineSet209);

SoHAnimSegment203->addChild(*SoShape206);

SoShape* SoShape211 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance212 = new SoVRMLAppearance();
SoMaterial* SoMaterial213 = new SoMaterial();
SoMaterial213->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance212->addChild(*SoMaterial213);

SoShape211->addChild(*SoVRMLAppearance212);

SoIndexedLineSet* SoIndexedLineSet214 = new SoIndexedLineSet();
SoIndexedLineSet214->setDEF(QString("TTtoTMT5"));
SoIndexedLineSet214->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate215 = new SoCoordinate();
SoCoordinate215->setPoint(new float[]{-0.21,-0.3,0.0,-0.33,-0.52,0.0}, 6);
SoIndexedLineSet214->setCoord(*SoCoordinate215);

SoShape211->setGeometry(*SoIndexedLineSet214);

SoHAnimSegment203->addChild(*SoShape211);

SoHAnimJoint202->addChildren(*SoHAnimSegment203);

//TMT4
SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->X3DNode::setName(QString("r_tarsometatarsal_4"));
SoHAnimJoint216->setDEF(QString("hanim_r_tarsometatarsal_4"));
SoHAnimJoint216->setCenter(new float[]{-0.25,-0.58,0.0});
SoHAnimJoint216->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint216->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment217 = new SoHAnimSegment();
SoHAnimSegment217->X3DNode::setName(QString("r_metatarsal_4"));
SoHAnimSegment217->setDEF(QString("hanim_r_metatarsal_4"));
SoTransform* SoTransform218 = new SoTransform();
SoTransform218->setTranslation(new float[]{-0.25,-0.58,0.0});
SoShape* SoShape219 = new SoShape();
SoShape219->setUSE(QString("HAnimJointShape"));
SoTransform218->addChild(*SoShape219);

SoHAnimSegment217->addChild(*SoTransform218);

SoShape* SoShape220 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance221 = new SoVRMLAppearance();
SoMaterial* SoMaterial222 = new SoMaterial();
SoMaterial222->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance221->addChild(*SoMaterial222);

SoShape220->addChild(*SoVRMLAppearance221);

SoIndexedLineSet* SoIndexedLineSet223 = new SoIndexedLineSet();
SoIndexedLineSet223->setDEF(QString("TMT4toMTP4"));
SoIndexedLineSet223->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate224 = new SoCoordinate();
SoCoordinate224->setPoint(new float[]{-0.25,-0.58,0.0,-0.25,-0.87,0.0}, 6);
SoIndexedLineSet223->setCoord(*SoCoordinate224);

SoShape220->setGeometry(*SoIndexedLineSet223);

SoHAnimSegment217->addChild(*SoShape220);

SoHAnimJoint216->addChildren(*SoHAnimSegment217);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->X3DNode::setName(QString("r_metatarsophalangeal_4"));
SoHAnimJoint225->setDEF(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimJoint225->setCenter(new float[]{-0.25,-0.87,0.0});
SoHAnimJoint225->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint225->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment226 = new SoHAnimSegment();
SoHAnimSegment226->X3DNode::setName(QString("r_tarsal_proximal_phalanx_4"));
SoHAnimSegment226->setDEF(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoTransform* SoTransform227 = new SoTransform();
SoTransform227->setTranslation(new float[]{-0.25,-0.87,0.0});
SoShape* SoShape228 = new SoShape();
SoShape228->setUSE(QString("HAnimJointShape"));
SoTransform227->addChild(*SoShape228);

SoHAnimSegment226->addChild(*SoTransform227);

SoShape* SoShape229 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance230 = new SoVRMLAppearance();
SoMaterial* SoMaterial231 = new SoMaterial();
SoMaterial231->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance230->addChild(*SoMaterial231);

SoShape229->addChild(*SoVRMLAppearance230);

SoIndexedLineSet* SoIndexedLineSet232 = new SoIndexedLineSet();
SoIndexedLineSet232->setDEF(QString("MTP4toPIP4"));
SoIndexedLineSet232->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate233 = new SoCoordinate();
SoCoordinate233->setPoint(new float[]{-0.25,-0.87,0.0,-0.25,-1.0,0.0}, 6);
SoIndexedLineSet232->setCoord(*SoCoordinate233);

SoShape229->setGeometry(*SoIndexedLineSet232);

SoHAnimSegment226->addChild(*SoShape229);

SoHAnimJoint225->addChildren(*SoHAnimSegment226);

SoHAnimJoint* SoHAnimJoint234 = new SoHAnimJoint();
SoHAnimJoint234->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint234->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint234->setCenter(new float[]{-0.25,-1.0,0.0});
SoHAnimJoint234->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint234->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment235 = new SoHAnimSegment();
SoHAnimSegment235->X3DNode::setName(QString("r_tarsal_middle_phalanx_4"));
SoHAnimSegment235->setDEF(QString("hanim_r_tarsal_middle_phalanx_4"));
SoTransform* SoTransform236 = new SoTransform();
SoTransform236->setTranslation(new float[]{-0.25,-1.0,0.0});
SoShape* SoShape237 = new SoShape();
SoShape237->setUSE(QString("HAnimJointShape"));
SoTransform236->addChild(*SoShape237);

SoHAnimSegment235->addChild(*SoTransform236);

SoShape* SoShape238 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance239 = new SoVRMLAppearance();
SoMaterial* SoMaterial240 = new SoMaterial();
SoMaterial240->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance239->addChild(*SoMaterial240);

SoShape238->addChild(*SoVRMLAppearance239);

SoIndexedLineSet* SoIndexedLineSet241 = new SoIndexedLineSet();
SoIndexedLineSet241->setDEF(QString("PIP4toDIP4"));
SoIndexedLineSet241->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate242 = new SoCoordinate();
SoCoordinate242->setPoint(new float[]{-0.25,-1.0,0.0,-0.25,-1.1,0.0}, 6);
SoIndexedLineSet241->setCoord(*SoCoordinate242);

SoShape238->setGeometry(*SoIndexedLineSet241);

SoHAnimSegment235->addChild(*SoShape238);

SoHAnimJoint234->addChildren(*SoHAnimSegment235);

SoHAnimJoint* SoHAnimJoint243 = new SoHAnimJoint();
SoHAnimJoint243->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint243->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint243->setCenter(new float[]{-0.25,-1.1,0.0});
SoHAnimJoint243->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint243->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment244 = new SoHAnimSegment();
SoHAnimSegment244->X3DNode::setName(QString("r_tarsal_distal_phalanx_4"));
SoHAnimSegment244->setDEF(QString("hanim_r_tarsal_distal_phalanx_4"));
SoTransform* SoTransform245 = new SoTransform();
SoTransform245->setTranslation(new float[]{-0.25,-1.1,0.0});
SoShape* SoShape246 = new SoShape();
SoShape246->setUSE(QString("HAnimJointShape"));
SoTransform245->addChild(*SoShape246);

SoHAnimSegment244->addChild(*SoTransform245);

SoShape* SoShape247 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance248 = new SoVRMLAppearance();
SoMaterial* SoMaterial249 = new SoMaterial();
SoMaterial249->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance248->addChild(*SoMaterial249);

SoShape247->addChild(*SoVRMLAppearance248);

SoIndexedLineSet* SoIndexedLineSet250 = new SoIndexedLineSet();
SoIndexedLineSet250->setDEF(QString("tiptoe_r_tarsal_distal_interphalangeal_4"));
SoIndexedLineSet250->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate251 = new SoCoordinate();
SoCoordinate251->setPoint(new float[]{-0.25,-1.1,0.0,-0.25,-1.15,0.0}, 6);
SoIndexedLineSet250->setCoord(*SoCoordinate251);

SoShape247->setGeometry(*SoIndexedLineSet250);

SoHAnimSegment244->addChild(*SoShape247);

SoHAnimJoint243->addChildren(*SoHAnimSegment244);

SoHAnimJoint234->addChildren(*SoHAnimJoint243);

SoHAnimJoint225->addChildren(*SoHAnimJoint234);

SoHAnimJoint216->addChildren(*SoHAnimJoint225);

SoHAnimJoint202->addChildren(*SoHAnimJoint216);

//TMT5
SoHAnimJoint* SoHAnimJoint252 = new SoHAnimJoint();
SoHAnimJoint252->X3DNode::setName(QString("r_tarsometatarsal_5"));
SoHAnimJoint252->setDEF(QString("hanim_r_tarsometatarsal_5"));
SoHAnimJoint252->setCenter(new float[]{-0.33,-0.52,0.0});
SoHAnimJoint252->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint252->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment253 = new SoHAnimSegment();
SoHAnimSegment253->X3DNode::setName(QString("r_metatarsal_5"));
SoHAnimSegment253->setDEF(QString("hanim_r_metatarsal_5"));
SoTransform* SoTransform254 = new SoTransform();
SoTransform254->setTranslation(new float[]{-0.33,-0.52,0.0});
SoShape* SoShape255 = new SoShape();
SoShape255->setUSE(QString("HAnimJointShape"));
SoTransform254->addChild(*SoShape255);

SoHAnimSegment253->addChild(*SoTransform254);

SoShape* SoShape256 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance257 = new SoVRMLAppearance();
SoMaterial* SoMaterial258 = new SoMaterial();
SoMaterial258->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance257->addChild(*SoMaterial258);

SoShape256->addChild(*SoVRMLAppearance257);

SoIndexedLineSet* SoIndexedLineSet259 = new SoIndexedLineSet();
SoIndexedLineSet259->setDEF(QString("TMT5toMTP5"));
SoIndexedLineSet259->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate260 = new SoCoordinate();
SoCoordinate260->setPoint(new float[]{-0.33,-0.52,0.0,-0.34,-0.8,0.0}, 6);
SoIndexedLineSet259->setCoord(*SoCoordinate260);

SoShape256->setGeometry(*SoIndexedLineSet259);

SoHAnimSegment253->addChild(*SoShape256);

SoHAnimJoint252->addChildren(*SoHAnimSegment253);

SoHAnimJoint* SoHAnimJoint261 = new SoHAnimJoint();
SoHAnimJoint261->X3DNode::setName(QString("r_metatarsophalangeal_5"));
SoHAnimJoint261->setDEF(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimJoint261->setCenter(new float[]{-0.34,-0.8,0.0});
SoHAnimJoint261->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint261->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment262 = new SoHAnimSegment();
SoHAnimSegment262->X3DNode::setName(QString("r_tarsal_proximal_phalanx_5"));
SoHAnimSegment262->setDEF(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoTransform* SoTransform263 = new SoTransform();
SoTransform263->setTranslation(new float[]{-0.34,-0.8,0.0});
SoShape* SoShape264 = new SoShape();
SoShape264->setUSE(QString("HAnimJointShape"));
SoTransform263->addChild(*SoShape264);

SoHAnimSegment262->addChild(*SoTransform263);

SoShape* SoShape265 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance266 = new SoVRMLAppearance();
SoMaterial* SoMaterial267 = new SoMaterial();
SoMaterial267->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance266->addChild(*SoMaterial267);

SoShape265->addChild(*SoVRMLAppearance266);

SoIndexedLineSet* SoIndexedLineSet268 = new SoIndexedLineSet();
SoIndexedLineSet268->setDEF(QString("MTP5toPIP5"));
SoIndexedLineSet268->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate269 = new SoCoordinate();
SoCoordinate269->setPoint(new float[]{-0.34,-0.8,0.0,-0.34,-0.95,0.0}, 6);
SoIndexedLineSet268->setCoord(*SoCoordinate269);

SoShape265->setGeometry(*SoIndexedLineSet268);

SoHAnimSegment262->addChild(*SoShape265);

SoHAnimJoint261->addChildren(*SoHAnimSegment262);

SoHAnimJoint* SoHAnimJoint270 = new SoHAnimJoint();
SoHAnimJoint270->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint270->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint270->setCenter(new float[]{-0.34,-0.95,0.0});
SoHAnimJoint270->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint270->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment271 = new SoHAnimSegment();
SoHAnimSegment271->X3DNode::setName(QString("r_tarsal_middle_phalanx_5"));
SoHAnimSegment271->setDEF(QString("hanim_r_tarsal_middle_phalanx_5"));
SoTransform* SoTransform272 = new SoTransform();
SoTransform272->setTranslation(new float[]{-0.34,-0.95,0.0});
SoShape* SoShape273 = new SoShape();
SoShape273->setUSE(QString("HAnimJointShape"));
SoTransform272->addChild(*SoShape273);

SoHAnimSegment271->addChild(*SoTransform272);

SoShape* SoShape274 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance275 = new SoVRMLAppearance();
SoMaterial* SoMaterial276 = new SoMaterial();
SoMaterial276->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance275->addChild(*SoMaterial276);

SoShape274->addChild(*SoVRMLAppearance275);

SoIndexedLineSet* SoIndexedLineSet277 = new SoIndexedLineSet();
SoIndexedLineSet277->setDEF(QString("PIP5toDIP5"));
SoIndexedLineSet277->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate278 = new SoCoordinate();
SoCoordinate278->setPoint(new float[]{-0.34,-0.95,0.0,-0.34,-1.05,0.0}, 6);
SoIndexedLineSet277->setCoord(*SoCoordinate278);

SoShape274->setGeometry(*SoIndexedLineSet277);

SoHAnimSegment271->addChild(*SoShape274);

SoHAnimJoint270->addChildren(*SoHAnimSegment271);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint279->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint279->setCenter(new float[]{-0.34,-1.05,0.0});
SoHAnimJoint279->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint279->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment280 = new SoHAnimSegment();
SoHAnimSegment280->X3DNode::setName(QString("r_tarsal_distal_phalanx_5"));
SoHAnimSegment280->setDEF(QString("hanim_r_tarsal_distal_phalanx_5"));
SoTransform* SoTransform281 = new SoTransform();
SoTransform281->setTranslation(new float[]{-0.34,-1.05,0.0});
SoShape* SoShape282 = new SoShape();
SoShape282->setUSE(QString("HAnimJointShape"));
SoTransform281->addChild(*SoShape282);

SoHAnimSegment280->addChild(*SoTransform281);

SoShape* SoShape283 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance284 = new SoVRMLAppearance();
SoMaterial* SoMaterial285 = new SoMaterial();
SoMaterial285->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance284->addChild(*SoMaterial285);

SoShape283->addChild(*SoVRMLAppearance284);

SoIndexedLineSet* SoIndexedLineSet286 = new SoIndexedLineSet();
SoIndexedLineSet286->setDEF(QString("tiptoe_r_tarsal_distal_interphalangeal_5"));
SoIndexedLineSet286->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate287 = new SoCoordinate();
SoCoordinate287->setPoint(new float[]{-0.34,-1.05,0.0,-0.34,-1.08,0.0}, 6);
SoIndexedLineSet286->setCoord(*SoCoordinate287);

SoShape283->setGeometry(*SoIndexedLineSet286);

SoHAnimSegment280->addChild(*SoShape283);

SoHAnimJoint279->addChildren(*SoHAnimSegment280);

SoHAnimJoint270->addChildren(*SoHAnimJoint279);

SoHAnimJoint261->addChildren(*SoHAnimJoint270);

SoHAnimJoint252->addChildren(*SoHAnimJoint261);

SoHAnimJoint202->addChildren(*SoHAnimJoint252);

SoHAnimJoint193->addChildren(*SoHAnimJoint202);

SoHAnimJoint31->addChildren(*SoHAnimJoint193);

SoHAnimJoint30->addChildren(*SoHAnimJoint31);

SoHAnimHumanoid27->setSkeleton(*SoHAnimJoint30);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint288);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->setUSE(QString("hanim_r_calcaneocuboid"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint289);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->setUSE(QString("hanim_r_cuneonavicular_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint290);

SoHAnimJoint* SoHAnimJoint291 = new SoHAnimJoint();
SoHAnimJoint291->setUSE(QString("hanim_r_cuneonavicular_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint291);

SoHAnimJoint* SoHAnimJoint292 = new SoHAnimJoint();
SoHAnimJoint292->setUSE(QString("hanim_r_cuneonavicular_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint292);

SoHAnimJoint* SoHAnimJoint293 = new SoHAnimJoint();
SoHAnimJoint293->setUSE(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint293);

SoHAnimJoint* SoHAnimJoint294 = new SoHAnimJoint();
SoHAnimJoint294->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint294);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setUSE(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint295);

SoHAnimJoint* SoHAnimJoint296 = new SoHAnimJoint();
SoHAnimJoint296->setUSE(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint296);

SoHAnimJoint* SoHAnimJoint297 = new SoHAnimJoint();
SoHAnimJoint297->setUSE(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint297);

SoHAnimJoint* SoHAnimJoint298 = new SoHAnimJoint();
SoHAnimJoint298->setUSE(QString("hanim_r_talocalcaneonavicular"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint298);

SoHAnimJoint* SoHAnimJoint299 = new SoHAnimJoint();
SoHAnimJoint299->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint299);

SoHAnimJoint* SoHAnimJoint300 = new SoHAnimJoint();
SoHAnimJoint300->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint300);

SoHAnimJoint* SoHAnimJoint301 = new SoHAnimJoint();
SoHAnimJoint301->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint301);

SoHAnimJoint* SoHAnimJoint302 = new SoHAnimJoint();
SoHAnimJoint302->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint302);

SoHAnimJoint* SoHAnimJoint303 = new SoHAnimJoint();
SoHAnimJoint303->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint303);

SoHAnimJoint* SoHAnimJoint304 = new SoHAnimJoint();
SoHAnimJoint304->setUSE(QString("hanim_r_tarsal_interphalangeal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint304);

SoHAnimJoint* SoHAnimJoint305 = new SoHAnimJoint();
SoHAnimJoint305->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint305);

SoHAnimJoint* SoHAnimJoint306 = new SoHAnimJoint();
SoHAnimJoint306->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint306);

SoHAnimJoint* SoHAnimJoint307 = new SoHAnimJoint();
SoHAnimJoint307->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint307);

SoHAnimJoint* SoHAnimJoint308 = new SoHAnimJoint();
SoHAnimJoint308->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint308);

SoHAnimJoint* SoHAnimJoint309 = new SoHAnimJoint();
SoHAnimJoint309->setUSE(QString("hanim_r_tarsometatarsal_1"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint309);

SoHAnimJoint* SoHAnimJoint310 = new SoHAnimJoint();
SoHAnimJoint310->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint310);

SoHAnimJoint* SoHAnimJoint311 = new SoHAnimJoint();
SoHAnimJoint311->setUSE(QString("hanim_r_tarsometatarsal_3"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint311);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setUSE(QString("hanim_r_tarsometatarsal_4"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint312);

SoHAnimJoint* SoHAnimJoint313 = new SoHAnimJoint();
SoHAnimJoint313->setUSE(QString("hanim_r_tarsometatarsal_5"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint313);

SoHAnimJoint* SoHAnimJoint314 = new SoHAnimJoint();
SoHAnimJoint314->setUSE(QString("hanim_r_transversetarsal"));
SoHAnimHumanoid27->setJoints(*SoHAnimJoint314);

SoHAnimSegment* SoHAnimSegment315 = new SoHAnimSegment();
SoHAnimSegment315->setUSE(QString("hanim_r_calcaneus"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment315);

SoHAnimSegment* SoHAnimSegment316 = new SoHAnimSegment();
SoHAnimSegment316->setUSE(QString("hanim_r_cuboid"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment316);

SoHAnimSegment* SoHAnimSegment317 = new SoHAnimSegment();
SoHAnimSegment317->setUSE(QString("hanim_r_cuneiform_1"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment317);

SoHAnimSegment* SoHAnimSegment318 = new SoHAnimSegment();
SoHAnimSegment318->setUSE(QString("hanim_r_cuneiform_2"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment318);

SoHAnimSegment* SoHAnimSegment319 = new SoHAnimSegment();
SoHAnimSegment319->setUSE(QString("hanim_r_cuneiform_3"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment319);

SoHAnimSegment* SoHAnimSegment320 = new SoHAnimSegment();
SoHAnimSegment320->setUSE(QString("hanim_r_metatarsal_1"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment320);

SoHAnimSegment* SoHAnimSegment321 = new SoHAnimSegment();
SoHAnimSegment321->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment321);

SoHAnimSegment* SoHAnimSegment322 = new SoHAnimSegment();
SoHAnimSegment322->setUSE(QString("hanim_r_metatarsal_3"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment322);

SoHAnimSegment* SoHAnimSegment323 = new SoHAnimSegment();
SoHAnimSegment323->setUSE(QString("hanim_r_metatarsal_4"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment323);

SoHAnimSegment* SoHAnimSegment324 = new SoHAnimSegment();
SoHAnimSegment324->setUSE(QString("hanim_r_metatarsal_5"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment324);

SoHAnimSegment* SoHAnimSegment325 = new SoHAnimSegment();
SoHAnimSegment325->setUSE(QString("hanim_r_navicular"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment325);

SoHAnimSegment* SoHAnimSegment326 = new SoHAnimSegment();
SoHAnimSegment326->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment326);

SoHAnimSegment* SoHAnimSegment327 = new SoHAnimSegment();
SoHAnimSegment327->setUSE(QString("hanim_r_tarsal_distal_phalanx_1"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment327);

SoHAnimSegment* SoHAnimSegment328 = new SoHAnimSegment();
SoHAnimSegment328->setUSE(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment328);

SoHAnimSegment* SoHAnimSegment329 = new SoHAnimSegment();
SoHAnimSegment329->setUSE(QString("hanim_r_tarsal_distal_phalanx_3"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment329);

SoHAnimSegment* SoHAnimSegment330 = new SoHAnimSegment();
SoHAnimSegment330->setUSE(QString("hanim_r_tarsal_distal_phalanx_4"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment330);

SoHAnimSegment* SoHAnimSegment331 = new SoHAnimSegment();
SoHAnimSegment331->setUSE(QString("hanim_r_tarsal_distal_phalanx_5"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment331);

SoHAnimSegment* SoHAnimSegment332 = new SoHAnimSegment();
SoHAnimSegment332->setUSE(QString("hanim_r_tarsal_middle_phalanx_2"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment332);

SoHAnimSegment* SoHAnimSegment333 = new SoHAnimSegment();
SoHAnimSegment333->setUSE(QString("hanim_r_tarsal_middle_phalanx_3"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment333);

SoHAnimSegment* SoHAnimSegment334 = new SoHAnimSegment();
SoHAnimSegment334->setUSE(QString("hanim_r_tarsal_middle_phalanx_4"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment334);

SoHAnimSegment* SoHAnimSegment335 = new SoHAnimSegment();
SoHAnimSegment335->setUSE(QString("hanim_r_tarsal_middle_phalanx_5"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment335);

SoHAnimSegment* SoHAnimSegment336 = new SoHAnimSegment();
SoHAnimSegment336->setUSE(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment336);

SoHAnimSegment* SoHAnimSegment337 = new SoHAnimSegment();
SoHAnimSegment337->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment337);

SoHAnimSegment* SoHAnimSegment338 = new SoHAnimSegment();
SoHAnimSegment338->setUSE(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment338);

SoHAnimSegment* SoHAnimSegment339 = new SoHAnimSegment();
SoHAnimSegment339->setUSE(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment339);

SoHAnimSegment* SoHAnimSegment340 = new SoHAnimSegment();
SoHAnimSegment340->setUSE(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid27->setSegments(*SoHAnimSegment340);

SoNode25->addChild(*SoHAnimHumanoid27);

SoSceneManager0->setSceneGraph(*SoNode25);

return 0;
}
