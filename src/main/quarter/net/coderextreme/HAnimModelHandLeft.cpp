
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
Someta3->setContent(QString("HAnimModelHandLeft.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Left hand, using high-fidelity definitions for HAnim version 2.0"));
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
Someta8->setName(QString("TODO"));
Someta8->setContent(QString("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("Image"));
Someta9->setContent(QString("HAnimModelHandRightSegmentVisualizationError.png"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("error"));
Someta10->setContent(QString("not yet to scale, also relatively flat"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("warning"));
Someta11->setContent(QString("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("info"));
Someta12->setContent(QString("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("https://www.web3d.org/working-groups/humanoid-animation-HAnim"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("reference"));
Someta18->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("subject"));
Someta19->setContent(QString("X3D HAnim humanoid animation"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("TODO"));
Someta20->setContent(QString("Integrate and confirm Segment/Joint names, Viewpoints."));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("identifier"));
Someta21->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("generator"));
Someta22->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("license"));
Someta23->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta23);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode24 = new SoNode();
SoWorldInfo* SoWorldInfo25 = new SoWorldInfo();
SoWorldInfo25->setTitle(QString("HAnimModelHandLeft.x3d"));
SoNode24->addChild(*SoWorldInfo25);

SoHAnimHumanoid* SoHAnimHumanoid26 = new SoHAnimHumanoid();
SoHAnimHumanoid26->X3DNode::setName(QString("Hand_Left"));
SoHAnimHumanoid26->setDEF(QString("hanim_Hand_Left"));
SoHAnimHumanoid26->setLoa(4);
SoHAnimHumanoid26->setVersion(QString("2.0"));
//original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'
SoMetadataSet* SoMetadataSet27 = new SoMetadataSet();
SoMetadataSet27->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet27->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString28 = new SoMetadataString();
SoMetadataString28->X3DNode::setName(QString("authorName"));
SoMetadataString28->setValue(new QString[]{QString("Kwan-Hee YOO, Don Brutzman and Joe Williams")}, 1);
SoMetadataSet27->setValue((X3DNode *)&SoMetadataString28);

SoHAnimHumanoid26->setMetadata(*SoMetadataSet27);

SoHAnimJoint* SoHAnimJoint29 = new SoHAnimJoint();
SoHAnimJoint29->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint29->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint29->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint29->setLlimit(new float[]{0.0,0.0,0.0}, 3);
//Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model
SoHAnimJoint* SoHAnimJoint30 = new SoHAnimJoint();
SoHAnimJoint30->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint30->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint30->setDescription(QString("connection joint of hand to leg above"));
SoHAnimJoint30->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint30->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment31 = new SoHAnimSegment();
SoHAnimSegment31->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment31->setDEF(QString("hanim_l_carpal"));
SoTransform* SoTransform32 = new SoTransform();
SoShape* SoShape33 = new SoShape();
SoShape33->setDEF(QString("HAnimJointShape"));
SoSphere* SoSphere34 = new SoSphere();
SoSphere34->setRadius(0.025);
SoShape33->setGeometry(*SoSphere34);

SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoVRMLAppearance35->setDEF(QString("HAnimJointAppearanceBlue"));
SoMaterial* SoMaterial36 = new SoMaterial();
SoMaterial36->setDiffuseColor(new float[]{0.0,0.0,1.0});
SoVRMLAppearance35->addChild(*SoMaterial36);

SoShape33->addChild(*SoVRMLAppearance35);

SoTransform32->addChild(*SoShape33);

SoHAnimSegment31->addChild(*SoTransform32);

SoShape* SoShape37 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance38 = new SoVRMLAppearance();
SoMaterial* SoMaterial39 = new SoMaterial();
SoMaterial39->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance38->addChild(*SoMaterial39);

SoShape37->addChild(*SoVRMLAppearance38);

SoIndexedLineSet* SoIndexedLineSet40 = new SoIndexedLineSet();
SoIndexedLineSet40->setDEF(QString("RCToMC12"));
SoIndexedLineSet40->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate41 = new SoCoordinate();
SoCoordinate41->setPoint(new float[]{0.0,0.0,0.0,0.1,0.1,0.0}, 6);
SoIndexedLineSet40->setCoord(*SoCoordinate41);

SoShape37->setGeometry(*SoIndexedLineSet40);

SoHAnimSegment31->addChild(*SoShape37);

SoShape* SoShape42 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance43->addChild(*SoMaterial44);

SoShape42->addChild(*SoVRMLAppearance43);

SoIndexedLineSet* SoIndexedLineSet45 = new SoIndexedLineSet();
SoIndexedLineSet45->setDEF(QString("RCToMC3"));
SoIndexedLineSet45->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate46 = new SoCoordinate();
SoCoordinate46->setPoint(new float[]{0.0,0.0,0.0,0.0,0.07,0.0}, 6);
SoIndexedLineSet45->setCoord(*SoCoordinate46);

SoShape42->setGeometry(*SoIndexedLineSet45);

SoHAnimSegment31->addChild(*SoShape42);

SoShape* SoShape47 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance48 = new SoVRMLAppearance();
SoMaterial* SoMaterial49 = new SoMaterial();
SoMaterial49->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance48->addChild(*SoMaterial49);

SoShape47->addChild(*SoVRMLAppearance48);

SoIndexedLineSet* SoIndexedLineSet50 = new SoIndexedLineSet();
SoIndexedLineSet50->setDEF(QString("RCToMC45"));
SoIndexedLineSet50->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate51 = new SoCoordinate();
SoCoordinate51->setPoint(new float[]{0.0,0.0,0.0,-0.1,0.1,0.0}, 6);
SoIndexedLineSet50->setCoord(*SoCoordinate51);

SoShape47->setGeometry(*SoIndexedLineSet50);

SoHAnimSegment31->addChild(*SoShape47);

SoHAnimJoint30->addChildren(*SoHAnimSegment31);

//MC1
SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->X3DNode::setName(QString("l_midcarpal_1"));
SoHAnimJoint52->setDEF(QString("hanim_l_midcarpal_1"));
SoHAnimJoint52->setCenter(new float[]{0.14,0.09,0.0});
SoHAnimJoint52->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint52->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment53 = new SoHAnimSegment();
SoHAnimSegment53->X3DNode::setName(QString("l_trapezium"));
SoHAnimSegment53->setDEF(QString("hanim_l_trapezium"));
SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{0.14,0.09,0.0});
SoShape* SoShape55 = new SoShape();
SoShape55->setDEF(QString("HAnimNewJointShape"));
SoSphere* SoSphere56 = new SoSphere();
SoSphere56->setRadius(0.025);
SoShape55->setGeometry(*SoSphere56);

SoVRMLAppearance* SoVRMLAppearance57 = new SoVRMLAppearance();
SoVRMLAppearance57->setDEF(QString("HAnimJointAppearanceRed"));
SoMaterial* SoMaterial58 = new SoMaterial();
SoMaterial58->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance57->addChild(*SoMaterial58);

SoShape55->addChild(*SoVRMLAppearance57);

SoTransform54->addChild(*SoShape55);

SoHAnimSegment53->addChild(*SoTransform54);

SoShape* SoShape59 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance60 = new SoVRMLAppearance();
SoMaterial* SoMaterial61 = new SoMaterial();
SoMaterial61->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance60->addChild(*SoMaterial61);

SoShape59->addChild(*SoVRMLAppearance60);

SoIndexedLineSet* SoIndexedLineSet62 = new SoIndexedLineSet();
SoIndexedLineSet62->setDEF(QString("MC12toCMC1"));
SoIndexedLineSet62->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate63 = new SoCoordinate();
SoCoordinate63->setPoint(new float[]{0.1,0.1,0.0,0.2,0.15,0.0}, 6);
SoIndexedLineSet62->setCoord(*SoCoordinate63);

SoShape59->setGeometry(*SoIndexedLineSet62);

SoHAnimSegment53->addChild(*SoShape59);

SoShape* SoShape64 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance65 = new SoVRMLAppearance();
SoMaterial* SoMaterial66 = new SoMaterial();
SoMaterial66->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance65->addChild(*SoMaterial66);

SoShape64->addChild(*SoVRMLAppearance65);

SoIndexedLineSet* SoIndexedLineSet67 = new SoIndexedLineSet();
SoIndexedLineSet67->setDEF(QString("MC1toCMC1"));
SoIndexedLineSet67->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate68 = new SoCoordinate();
SoCoordinate68->setPoint(new float[]{0.1,0.1,0.0,0.1,0.2,0.0}, 6);
SoIndexedLineSet67->setCoord(*SoCoordinate68);

SoShape64->setGeometry(*SoIndexedLineSet67);

SoHAnimSegment53->addChild(*SoShape64);

SoHAnimJoint52->addChildren(*SoHAnimSegment53);

//thumb finger
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint69->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint69->setCenter(new float[]{0.2,0.15,0.0});
SoHAnimJoint69->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint69->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment70 = new SoHAnimSegment();
SoHAnimSegment70->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimSegment70->setDEF(QString("hanim_l_metacarpal_1"));
SoTransform* SoTransform71 = new SoTransform();
SoTransform71->setTranslation(new float[]{0.2,0.15,0.0});
SoShape* SoShape72 = new SoShape();
SoShape72->setUSE(QString("HAnimJointShape"));
SoTransform71->addChild(*SoShape72);

SoHAnimSegment70->addChild(*SoTransform71);

SoShape* SoShape73 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance74 = new SoVRMLAppearance();
SoMaterial* SoMaterial75 = new SoMaterial();
SoMaterial75->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance74->addChild(*SoMaterial75);

SoShape73->addChild(*SoVRMLAppearance74);

SoIndexedLineSet* SoIndexedLineSet76 = new SoIndexedLineSet();
SoIndexedLineSet76->setDEF(QString("CMC1toMCP1"));
SoIndexedLineSet76->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate77 = new SoCoordinate();
SoCoordinate77->setPoint(new float[]{0.2,0.15,0.0,0.3,0.3,0.0}, 6);
SoIndexedLineSet76->setCoord(*SoCoordinate77);

SoShape73->setGeometry(*SoIndexedLineSet76);

SoHAnimSegment70->addChild(*SoShape73);

SoHAnimJoint69->addChildren(*SoHAnimSegment70);

SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint78->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint78->setCenter(new float[]{0.3,0.3,0.0});
SoHAnimJoint78->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint78->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment79 = new SoHAnimSegment();
SoHAnimSegment79->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimSegment79->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoTransform* SoTransform80 = new SoTransform();
SoTransform80->setTranslation(new float[]{0.3,0.3,0.0});
SoShape* SoShape81 = new SoShape();
SoShape81->setUSE(QString("HAnimJointShape"));
SoTransform80->addChild(*SoShape81);

SoHAnimSegment79->addChild(*SoTransform80);

SoShape* SoShape82 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance83 = new SoVRMLAppearance();
SoMaterial* SoMaterial84 = new SoMaterial();
SoMaterial84->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance83->addChild(*SoMaterial84);

SoShape82->addChild(*SoVRMLAppearance83);

SoIndexedLineSet* SoIndexedLineSet85 = new SoIndexedLineSet();
SoIndexedLineSet85->setDEF(QString("MCP11toIP1"));
SoIndexedLineSet85->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate86 = new SoCoordinate();
SoCoordinate86->setPoint(new float[]{0.3,0.3,0.0,0.35,0.4,0.0}, 6);
SoIndexedLineSet85->setCoord(*SoCoordinate86);

SoShape82->setGeometry(*SoIndexedLineSet85);

SoHAnimSegment79->addChild(*SoShape82);

SoHAnimJoint78->addChildren(*SoHAnimSegment79);

SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint87->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint87->setCenter(new float[]{0.35,0.4,0.0});
SoHAnimJoint87->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint87->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment88 = new SoHAnimSegment();
SoHAnimSegment88->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSegment88->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoTransform* SoTransform89 = new SoTransform();
SoTransform89->setTranslation(new float[]{0.35,0.4,0.0});
SoShape* SoShape90 = new SoShape();
SoShape90->setUSE(QString("HAnimJointShape"));
SoTransform89->addChild(*SoShape90);

SoHAnimSegment88->addChild(*SoTransform89);

SoShape* SoShape91 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance92 = new SoVRMLAppearance();
SoMaterial* SoMaterial93 = new SoMaterial();
SoMaterial93->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance92->addChild(*SoMaterial93);

SoShape91->addChild(*SoVRMLAppearance92);

SoIndexedLineSet* SoIndexedLineSet94 = new SoIndexedLineSet();
SoIndexedLineSet94->setDEF(QString("fingertip_l_carpal_interphalangeal_1"));
SoIndexedLineSet94->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate95 = new SoCoordinate();
SoCoordinate95->setPoint(new float[]{0.35,0.4,0.0,0.36,0.45,0.0}, 6);
SoIndexedLineSet94->setCoord(*SoCoordinate95);

SoShape91->setGeometry(*SoIndexedLineSet94);

SoHAnimSegment88->addChild(*SoShape91);

SoHAnimJoint87->addChildren(*SoHAnimSegment88);

SoHAnimJoint78->addChildren(*SoHAnimJoint87);

SoHAnimJoint69->addChildren(*SoHAnimJoint78);

SoHAnimJoint52->addChildren(*SoHAnimJoint69);

SoHAnimJoint30->addChildren(*SoHAnimJoint52);

//MC2
SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->X3DNode::setName(QString("l_midcarpal_2"));
SoHAnimJoint96->setDEF(QString("hanim_l_midcarpal_2"));
SoHAnimJoint96->setCenter(new float[]{0.07,0.07,0.0});
SoHAnimJoint96->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint96->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment97 = new SoHAnimSegment();
SoHAnimSegment97->X3DNode::setName(QString("l_trapezoid"));
SoHAnimSegment97->setDEF(QString("hanim_l_trapezoid"));
SoTransform* SoTransform98 = new SoTransform();
SoTransform98->setTranslation(new float[]{0.07,0.07,0.0});
SoShape* SoShape99 = new SoShape();
SoShape99->setUSE(QString("HAnimNewJointShape"));
SoTransform98->addChild(*SoShape99);

SoHAnimSegment97->addChild(*SoTransform98);

SoShape* SoShape100 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance101 = new SoVRMLAppearance();
SoMaterial* SoMaterial102 = new SoMaterial();
SoMaterial102->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance101->addChild(*SoMaterial102);

SoShape100->addChild(*SoVRMLAppearance101);

SoIndexedLineSet* SoIndexedLineSet103 = new SoIndexedLineSet();
SoIndexedLineSet103->setDEF(QString("MC2toCMC2"));
SoIndexedLineSet103->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate104 = new SoCoordinate();
SoCoordinate104->setPoint(new float[]{-0.1,0.1,0.0,-0.1,0.2,0.0}, 6);
SoIndexedLineSet103->setCoord(*SoCoordinate104);

SoShape100->setGeometry(*SoIndexedLineSet103);

SoHAnimSegment97->addChild(*SoShape100);

SoHAnimJoint96->addChildren(*SoHAnimSegment97);

//index finger
SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint105->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint105->setCenter(new float[]{0.1,0.2,0.0});
SoHAnimJoint105->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint105->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment106 = new SoHAnimSegment();
SoHAnimSegment106->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimSegment106->setDEF(QString("hanim_l_metacarpal_2"));
SoTransform* SoTransform107 = new SoTransform();
SoTransform107->setTranslation(new float[]{0.1,0.2,0.0});
SoShape* SoShape108 = new SoShape();
SoShape108->setUSE(QString("HAnimJointShape"));
SoTransform107->addChild(*SoShape108);

SoHAnimSegment106->addChild(*SoTransform107);

SoShape* SoShape109 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance110 = new SoVRMLAppearance();
SoMaterial* SoMaterial111 = new SoMaterial();
SoMaterial111->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance110->addChild(*SoMaterial111);

SoShape109->addChild(*SoVRMLAppearance110);

SoIndexedLineSet* SoIndexedLineSet112 = new SoIndexedLineSet();
SoIndexedLineSet112->setDEF(QString("CMC2toMCP2"));
SoIndexedLineSet112->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate113 = new SoCoordinate();
SoCoordinate113->setPoint(new float[]{0.1,0.2,0.0,0.15,0.5,0.0}, 6);
SoIndexedLineSet112->setCoord(*SoCoordinate113);

SoShape109->setGeometry(*SoIndexedLineSet112);

SoHAnimSegment106->addChild(*SoShape109);

SoHAnimJoint105->addChildren(*SoHAnimSegment106);

SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint114->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint114->setCenter(new float[]{0.15,0.5,0.0});
SoHAnimJoint114->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint114->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment115 = new SoHAnimSegment();
SoHAnimSegment115->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimSegment115->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoTransform* SoTransform116 = new SoTransform();
SoTransform116->setTranslation(new float[]{0.15,0.5,0.0});
SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("HAnimJointShape"));
SoTransform116->addChild(*SoShape117);

SoHAnimSegment115->addChild(*SoTransform116);

SoShape* SoShape118 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance119 = new SoVRMLAppearance();
SoMaterial* SoMaterial120 = new SoMaterial();
SoMaterial120->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance119->addChild(*SoMaterial120);

SoShape118->addChild(*SoVRMLAppearance119);

SoIndexedLineSet* SoIndexedLineSet121 = new SoIndexedLineSet();
SoIndexedLineSet121->setDEF(QString("MCP2toPIP2"));
SoIndexedLineSet121->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate122 = new SoCoordinate();
SoCoordinate122->setPoint(new float[]{0.15,0.5,0.0,0.2,0.7,0.0}, 6);
SoIndexedLineSet121->setCoord(*SoCoordinate122);

SoShape118->setGeometry(*SoIndexedLineSet121);

SoHAnimSegment115->addChild(*SoShape118);

SoHAnimJoint114->addChildren(*SoHAnimSegment115);

SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint123->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint123->setCenter(new float[]{0.2,0.7,0.0});
SoHAnimJoint123->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint123->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment124 = new SoHAnimSegment();
SoHAnimSegment124->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimSegment124->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setTranslation(new float[]{0.2,0.7,0.0});
SoShape* SoShape126 = new SoShape();
SoShape126->setUSE(QString("HAnimJointShape"));
SoTransform125->addChild(*SoShape126);

SoHAnimSegment124->addChild(*SoTransform125);

SoShape* SoShape127 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance128 = new SoVRMLAppearance();
SoMaterial* SoMaterial129 = new SoMaterial();
SoMaterial129->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance128->addChild(*SoMaterial129);

SoShape127->addChild(*SoVRMLAppearance128);

SoIndexedLineSet* SoIndexedLineSet130 = new SoIndexedLineSet();
SoIndexedLineSet130->setDEF(QString("PIP2toDIP2"));
SoIndexedLineSet130->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate131 = new SoCoordinate();
SoCoordinate131->setPoint(new float[]{0.2,0.7,0.0,0.24,0.87,0.0}, 6);
SoIndexedLineSet130->setCoord(*SoCoordinate131);

SoShape127->setGeometry(*SoIndexedLineSet130);

SoHAnimSegment124->addChild(*SoShape127);

SoHAnimJoint123->addChildren(*SoHAnimSegment124);

SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint132->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint132->setCenter(new float[]{0.24,0.87,0.0});
SoHAnimJoint132->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint132->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment133 = new SoHAnimSegment();
SoHAnimSegment133->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSegment133->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setTranslation(new float[]{0.24,0.87,0.0});
SoShape* SoShape135 = new SoShape();
SoShape135->setUSE(QString("HAnimJointShape"));
SoTransform134->addChild(*SoShape135);

SoHAnimSegment133->addChild(*SoTransform134);

SoShape* SoShape136 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance137 = new SoVRMLAppearance();
SoMaterial* SoMaterial138 = new SoMaterial();
SoMaterial138->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance137->addChild(*SoMaterial138);

SoShape136->addChild(*SoVRMLAppearance137);

SoIndexedLineSet* SoIndexedLineSet139 = new SoIndexedLineSet();
SoIndexedLineSet139->setDEF(QString("fingertip_l_carpal_distal_interphalangeal_2"));
SoIndexedLineSet139->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate140 = new SoCoordinate();
SoCoordinate140->setPoint(new float[]{0.24,0.87,0.0,0.26,0.93,0.0}, 6);
SoIndexedLineSet139->setCoord(*SoCoordinate140);

SoShape136->setGeometry(*SoIndexedLineSet139);

SoHAnimSegment133->addChild(*SoShape136);

SoHAnimJoint132->addChildren(*SoHAnimSegment133);

SoHAnimJoint123->addChildren(*SoHAnimJoint132);

SoHAnimJoint114->addChildren(*SoHAnimJoint123);

SoHAnimJoint105->addChildren(*SoHAnimJoint114);

SoHAnimJoint96->addChildren(*SoHAnimJoint105);

SoHAnimJoint30->addChildren(*SoHAnimJoint96);

//MC3
SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->X3DNode::setName(QString("l_midcarpal_3"));
SoHAnimJoint141->setDEF(QString("hanim_l_midcarpal_3"));
SoHAnimJoint141->setCenter(new float[]{0.0,0.07,0.0});
SoHAnimJoint141->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint141->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment142 = new SoHAnimSegment();
SoHAnimSegment142->X3DNode::setName(QString("l_capitate"));
SoHAnimSegment142->setDEF(QString("hanim_l_capitate"));
SoTransform* SoTransform143 = new SoTransform();
SoTransform143->setTranslation(new float[]{0.0,0.07,0.0});
SoShape* SoShape144 = new SoShape();
SoShape144->setUSE(QString("HAnimNewJointShape"));
SoTransform143->addChild(*SoShape144);

SoHAnimSegment142->addChild(*SoTransform143);

SoShape* SoShape145 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance146 = new SoVRMLAppearance();
SoMaterial* SoMaterial147 = new SoMaterial();
SoMaterial147->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance146->addChild(*SoMaterial147);

SoShape145->addChild(*SoVRMLAppearance146);

SoIndexedLineSet* SoIndexedLineSet148 = new SoIndexedLineSet();
SoIndexedLineSet148->setDEF(QString("MC3toCMC3"));
SoIndexedLineSet148->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate149 = new SoCoordinate();
SoCoordinate149->setPoint(new float[]{0.0,0.07,0.0,0.0,0.2,0.0}, 6);
SoIndexedLineSet148->setCoord(*SoCoordinate149);

SoShape145->setGeometry(*SoIndexedLineSet148);

SoHAnimSegment142->addChild(*SoShape145);

SoHAnimJoint141->addChildren(*SoHAnimSegment142);

//Middle fingle
SoHAnimJoint* SoHAnimJoint150 = new SoHAnimJoint();
SoHAnimJoint150->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint150->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint150->setCenter(new float[]{0.0,0.2,0.0});
SoHAnimJoint150->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint150->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment151 = new SoHAnimSegment();
SoHAnimSegment151->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimSegment151->setDEF(QString("hanim_l_metacarpal_3"));
SoTransform* SoTransform152 = new SoTransform();
SoTransform152->setTranslation(new float[]{0.0,0.2,0.0});
SoShape* SoShape153 = new SoShape();
SoShape153->setUSE(QString("HAnimJointShape"));
SoTransform152->addChild(*SoShape153);

SoHAnimSegment151->addChild(*SoTransform152);

SoShape* SoShape154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance155 = new SoVRMLAppearance();
SoMaterial* SoMaterial156 = new SoMaterial();
SoMaterial156->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance155->addChild(*SoMaterial156);

SoShape154->addChild(*SoVRMLAppearance155);

SoIndexedLineSet* SoIndexedLineSet157 = new SoIndexedLineSet();
SoIndexedLineSet157->setDEF(QString("CMC3toMCP3"));
SoIndexedLineSet157->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate158 = new SoCoordinate();
SoCoordinate158->setPoint(new float[]{0.0,0.2,0.0,0.03,0.5,0.0}, 6);
SoIndexedLineSet157->setCoord(*SoCoordinate158);

SoShape154->setGeometry(*SoIndexedLineSet157);

SoHAnimSegment151->addChild(*SoShape154);

SoHAnimJoint150->addChildren(*SoHAnimSegment151);

SoHAnimJoint* SoHAnimJoint159 = new SoHAnimJoint();
SoHAnimJoint159->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint159->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint159->setCenter(new float[]{0.03,0.5,0.0});
SoHAnimJoint159->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint159->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment160 = new SoHAnimSegment();
SoHAnimSegment160->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimSegment160->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoTransform* SoTransform161 = new SoTransform();
SoTransform161->setTranslation(new float[]{0.03,0.5,0.0});
SoShape* SoShape162 = new SoShape();
SoShape162->setUSE(QString("HAnimJointShape"));
SoTransform161->addChild(*SoShape162);

SoHAnimSegment160->addChild(*SoTransform161);

SoShape* SoShape163 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance164 = new SoVRMLAppearance();
SoMaterial* SoMaterial165 = new SoMaterial();
SoMaterial165->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance164->addChild(*SoMaterial165);

SoShape163->addChild(*SoVRMLAppearance164);

SoIndexedLineSet* SoIndexedLineSet166 = new SoIndexedLineSet();
SoIndexedLineSet166->setDEF(QString("MCP3toPIP3"));
SoIndexedLineSet166->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate167 = new SoCoordinate();
SoCoordinate167->setPoint(new float[]{0.03,0.5,0.0,0.05,0.75,0.0}, 6);
SoIndexedLineSet166->setCoord(*SoCoordinate167);

SoShape163->setGeometry(*SoIndexedLineSet166);

SoHAnimSegment160->addChild(*SoShape163);

SoHAnimJoint159->addChildren(*SoHAnimSegment160);

SoHAnimJoint* SoHAnimJoint168 = new SoHAnimJoint();
SoHAnimJoint168->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint168->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint168->setCenter(new float[]{0.05,0.75,0.0});
SoHAnimJoint168->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint168->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment169 = new SoHAnimSegment();
SoHAnimSegment169->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimSegment169->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoTransform* SoTransform170 = new SoTransform();
SoTransform170->setTranslation(new float[]{0.05,0.75,0.0});
SoShape* SoShape171 = new SoShape();
SoShape171->setUSE(QString("HAnimJointShape"));
SoTransform170->addChild(*SoShape171);

SoHAnimSegment169->addChild(*SoTransform170);

SoShape* SoShape172 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance173 = new SoVRMLAppearance();
SoMaterial* SoMaterial174 = new SoMaterial();
SoMaterial174->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance173->addChild(*SoMaterial174);

SoShape172->addChild(*SoVRMLAppearance173);

SoIndexedLineSet* SoIndexedLineSet175 = new SoIndexedLineSet();
SoIndexedLineSet175->setDEF(QString("PIP3toDIP3"));
SoIndexedLineSet175->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate176 = new SoCoordinate();
SoCoordinate176->setPoint(new float[]{0.05,0.75,0.0,0.08,0.96,0.0}, 6);
SoIndexedLineSet175->setCoord(*SoCoordinate176);

SoShape172->setGeometry(*SoIndexedLineSet175);

SoHAnimSegment169->addChild(*SoShape172);

SoHAnimJoint168->addChildren(*SoHAnimSegment169);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint177->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint177->setCenter(new float[]{0.08,0.96,0.0});
SoHAnimJoint177->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint177->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment178 = new SoHAnimSegment();
SoHAnimSegment178->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSegment178->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoTransform* SoTransform179 = new SoTransform();
SoTransform179->setTranslation(new float[]{0.08,0.96,0.0});
SoShape* SoShape180 = new SoShape();
SoShape180->setUSE(QString("HAnimJointShape"));
SoTransform179->addChild(*SoShape180);

SoHAnimSegment178->addChild(*SoTransform179);

SoShape* SoShape181 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance182 = new SoVRMLAppearance();
SoMaterial* SoMaterial183 = new SoMaterial();
SoMaterial183->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance182->addChild(*SoMaterial183);

SoShape181->addChild(*SoVRMLAppearance182);

SoIndexedLineSet* SoIndexedLineSet184 = new SoIndexedLineSet();
SoIndexedLineSet184->setDEF(QString("fingertip_l_carpal_distal_interphalangeal_3"));
SoIndexedLineSet184->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate185 = new SoCoordinate();
SoCoordinate185->setPoint(new float[]{0.08,0.96,0.0,0.09,1.05,0.0}, 6);
SoIndexedLineSet184->setCoord(*SoCoordinate185);

SoShape181->setGeometry(*SoIndexedLineSet184);

SoHAnimSegment178->addChild(*SoShape181);

SoHAnimJoint177->addChildren(*SoHAnimSegment178);

SoHAnimJoint168->addChildren(*SoHAnimJoint177);

SoHAnimJoint159->addChildren(*SoHAnimJoint168);

SoHAnimJoint150->addChildren(*SoHAnimJoint159);

SoHAnimJoint141->addChildren(*SoHAnimJoint150);

SoHAnimJoint30->addChildren(*SoHAnimJoint141);

//MC45
SoHAnimJoint* SoHAnimJoint186 = new SoHAnimJoint();
SoHAnimJoint186->X3DNode::setName(QString("l_midcarpal_4_5"));
SoHAnimJoint186->setDEF(QString("hanim_l_midcarpal_4_5"));
SoHAnimJoint186->setCenter(new float[]{-0.1,0.1,0.0});
SoHAnimJoint186->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint186->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment187 = new SoHAnimSegment();
SoHAnimSegment187->X3DNode::setName(QString("l_hamate"));
SoHAnimSegment187->setDEF(QString("hanim_l_hamate"));
SoTransform* SoTransform188 = new SoTransform();
SoTransform188->setTranslation(new float[]{-0.1,0.1,0.0});
SoShape* SoShape189 = new SoShape();
SoShape189->setUSE(QString("HAnimNewJointShape"));
SoTransform188->addChild(*SoShape189);

SoHAnimSegment187->addChild(*SoTransform188);

SoShape* SoShape190 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance191 = new SoVRMLAppearance();
SoMaterial* SoMaterial192 = new SoMaterial();
SoMaterial192->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance191->addChild(*SoMaterial192);

SoShape190->addChild(*SoVRMLAppearance191);

SoIndexedLineSet* SoIndexedLineSet193 = new SoIndexedLineSet();
SoIndexedLineSet193->setDEF(QString("MC45toCMC4"));
SoIndexedLineSet193->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate194 = new SoCoordinate();
SoCoordinate194->setPoint(new float[]{-0.1,0.1,0.0,-0.1,0.2,0.0}, 6);
SoIndexedLineSet193->setCoord(*SoCoordinate194);

SoShape190->setGeometry(*SoIndexedLineSet193);

SoHAnimSegment187->addChild(*SoShape190);

SoShape* SoShape195 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance196 = new SoVRMLAppearance();
SoMaterial* SoMaterial197 = new SoMaterial();
SoMaterial197->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance196->addChild(*SoMaterial197);

SoShape195->addChild(*SoVRMLAppearance196);

SoIndexedLineSet* SoIndexedLineSet198 = new SoIndexedLineSet();
SoIndexedLineSet198->setDEF(QString("MC45toCMC5"));
SoIndexedLineSet198->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate199 = new SoCoordinate();
SoCoordinate199->setPoint(new float[]{-0.1,0.1,0.0,-0.15,0.17,0.0}, 6);
SoIndexedLineSet198->setCoord(*SoCoordinate199);

SoShape195->setGeometry(*SoIndexedLineSet198);

SoHAnimSegment187->addChild(*SoShape195);

SoHAnimJoint186->addChildren(*SoHAnimSegment187);

//ring finger
SoHAnimJoint* SoHAnimJoint200 = new SoHAnimJoint();
SoHAnimJoint200->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint200->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint200->setCenter(new float[]{-0.1,0.2,0.0});
SoHAnimJoint200->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint200->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment201 = new SoHAnimSegment();
SoHAnimSegment201->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimSegment201->setDEF(QString("hanim_l_metacarpal_4"));
SoTransform* SoTransform202 = new SoTransform();
SoTransform202->setTranslation(new float[]{-0.1,0.2,0.0});
SoShape* SoShape203 = new SoShape();
SoShape203->setUSE(QString("HAnimJointShape"));
SoTransform202->addChild(*SoShape203);

SoHAnimSegment201->addChild(*SoTransform202);

SoShape* SoShape204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance205 = new SoVRMLAppearance();
SoMaterial* SoMaterial206 = new SoMaterial();
SoMaterial206->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance205->addChild(*SoMaterial206);

SoShape204->addChild(*SoVRMLAppearance205);

SoIndexedLineSet* SoIndexedLineSet207 = new SoIndexedLineSet();
SoIndexedLineSet207->setDEF(QString("CMC4toMCP4"));
SoIndexedLineSet207->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate208 = new SoCoordinate();
SoCoordinate208->setPoint(new float[]{-0.1,0.2,0.0,-0.1,0.47,0.0}, 6);
SoIndexedLineSet207->setCoord(*SoCoordinate208);

SoShape204->setGeometry(*SoIndexedLineSet207);

SoHAnimSegment201->addChild(*SoShape204);

SoHAnimJoint200->addChildren(*SoHAnimSegment201);

SoHAnimJoint* SoHAnimJoint209 = new SoHAnimJoint();
SoHAnimJoint209->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint209->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint209->setCenter(new float[]{-0.1,0.47,0.0});
SoHAnimJoint209->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint209->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment210 = new SoHAnimSegment();
SoHAnimSegment210->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimSegment210->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoTransform* SoTransform211 = new SoTransform();
SoTransform211->setTranslation(new float[]{-0.1,0.47,0.0});
SoShape* SoShape212 = new SoShape();
SoShape212->setUSE(QString("HAnimJointShape"));
SoTransform211->addChild(*SoShape212);

SoHAnimSegment210->addChild(*SoTransform211);

SoShape* SoShape213 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance214 = new SoVRMLAppearance();
SoMaterial* SoMaterial215 = new SoMaterial();
SoMaterial215->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance214->addChild(*SoMaterial215);

SoShape213->addChild(*SoVRMLAppearance214);

SoIndexedLineSet* SoIndexedLineSet216 = new SoIndexedLineSet();
SoIndexedLineSet216->setDEF(QString("MCP4toPIP4"));
SoIndexedLineSet216->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate217 = new SoCoordinate();
SoCoordinate217->setPoint(new float[]{-0.1,0.47,0.0,-0.1,0.7,0.0}, 6);
SoIndexedLineSet216->setCoord(*SoCoordinate217);

SoShape213->setGeometry(*SoIndexedLineSet216);

SoHAnimSegment210->addChild(*SoShape213);

SoHAnimJoint209->addChildren(*SoHAnimSegment210);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint218->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint218->setCenter(new float[]{-0.1,0.7,0.0});
SoHAnimJoint218->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint218->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment219 = new SoHAnimSegment();
SoHAnimSegment219->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimSegment219->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setTranslation(new float[]{-0.1,0.7,0.0});
SoShape* SoShape221 = new SoShape();
SoShape221->setUSE(QString("HAnimJointShape"));
SoTransform220->addChild(*SoShape221);

SoHAnimSegment219->addChild(*SoTransform220);

SoShape* SoShape222 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance223 = new SoVRMLAppearance();
SoMaterial* SoMaterial224 = new SoMaterial();
SoMaterial224->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance223->addChild(*SoMaterial224);

SoShape222->addChild(*SoVRMLAppearance223);

SoIndexedLineSet* SoIndexedLineSet225 = new SoIndexedLineSet();
SoIndexedLineSet225->setDEF(QString("PIP4toDIP4"));
SoIndexedLineSet225->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate226 = new SoCoordinate();
SoCoordinate226->setPoint(new float[]{-0.1,0.7,0.0,-0.1,0.93,0.0}, 6);
SoIndexedLineSet225->setCoord(*SoCoordinate226);

SoShape222->setGeometry(*SoIndexedLineSet225);

SoHAnimSegment219->addChild(*SoShape222);

SoHAnimJoint218->addChildren(*SoHAnimSegment219);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint227->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint227->setCenter(new float[]{-0.1,0.93,0.0});
SoHAnimJoint227->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint227->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment228 = new SoHAnimSegment();
SoHAnimSegment228->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSegment228->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoTransform* SoTransform229 = new SoTransform();
SoTransform229->setTranslation(new float[]{-0.1,0.93,0.0});
SoShape* SoShape230 = new SoShape();
SoShape230->setUSE(QString("HAnimJointShape"));
SoTransform229->addChild(*SoShape230);

SoHAnimSegment228->addChild(*SoTransform229);

SoShape* SoShape231 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance232 = new SoVRMLAppearance();
SoMaterial* SoMaterial233 = new SoMaterial();
SoMaterial233->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance232->addChild(*SoMaterial233);

SoShape231->addChild(*SoVRMLAppearance232);

SoIndexedLineSet* SoIndexedLineSet234 = new SoIndexedLineSet();
SoIndexedLineSet234->setDEF(QString("fingertip_l_carpal_distal_interphalangeal_4"));
SoIndexedLineSet234->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate235 = new SoCoordinate();
SoCoordinate235->setPoint(new float[]{-0.1,0.93,0.0,-0.1,1.0,0.0}, 6);
SoIndexedLineSet234->setCoord(*SoCoordinate235);

SoShape231->setGeometry(*SoIndexedLineSet234);

SoHAnimSegment228->addChild(*SoShape231);

SoHAnimJoint227->addChildren(*SoHAnimSegment228);

SoHAnimJoint218->addChildren(*SoHAnimJoint227);

SoHAnimJoint209->addChildren(*SoHAnimJoint218);

SoHAnimJoint200->addChildren(*SoHAnimJoint209);

SoHAnimJoint186->addChildren(*SoHAnimJoint200);

//pinky finger
SoHAnimJoint* SoHAnimJoint236 = new SoHAnimJoint();
SoHAnimJoint236->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint236->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint236->setCenter(new float[]{-0.15,0.17,0.0});
SoHAnimJoint236->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint236->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment237 = new SoHAnimSegment();
SoHAnimSegment237->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimSegment237->setDEF(QString("hanim_l_metacarpal_5"));
SoTransform* SoTransform238 = new SoTransform();
SoTransform238->setTranslation(new float[]{-0.15,0.17,0.0});
SoShape* SoShape239 = new SoShape();
SoShape239->setUSE(QString("HAnimJointShape"));
SoTransform238->addChild(*SoShape239);

SoHAnimSegment237->addChild(*SoTransform238);

SoShape* SoShape240 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance241 = new SoVRMLAppearance();
SoMaterial* SoMaterial242 = new SoMaterial();
SoMaterial242->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance241->addChild(*SoMaterial242);

SoShape240->addChild(*SoVRMLAppearance241);

SoIndexedLineSet* SoIndexedLineSet243 = new SoIndexedLineSet();
SoIndexedLineSet243->setDEF(QString("CMC5toMCP5"));
SoIndexedLineSet243->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate244 = new SoCoordinate();
SoCoordinate244->setPoint(new float[]{-0.15,0.17,0.0,-0.2,0.4,0.0}, 6);
SoIndexedLineSet243->setCoord(*SoCoordinate244);

SoShape240->setGeometry(*SoIndexedLineSet243);

SoHAnimSegment237->addChild(*SoShape240);

SoHAnimJoint236->addChildren(*SoHAnimSegment237);

SoHAnimJoint* SoHAnimJoint245 = new SoHAnimJoint();
SoHAnimJoint245->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint245->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint245->setCenter(new float[]{-0.2,0.4,0.0});
SoHAnimJoint245->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint245->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment246 = new SoHAnimSegment();
SoHAnimSegment246->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimSegment246->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoTransform* SoTransform247 = new SoTransform();
SoTransform247->setTranslation(new float[]{-0.2,0.4,0.0});
SoShape* SoShape248 = new SoShape();
SoShape248->setUSE(QString("HAnimJointShape"));
SoTransform247->addChild(*SoShape248);

SoHAnimSegment246->addChild(*SoTransform247);

SoShape* SoShape249 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance250 = new SoVRMLAppearance();
SoMaterial* SoMaterial251 = new SoMaterial();
SoMaterial251->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance250->addChild(*SoMaterial251);

SoShape249->addChild(*SoVRMLAppearance250);

SoIndexedLineSet* SoIndexedLineSet252 = new SoIndexedLineSet();
SoIndexedLineSet252->setDEF(QString("MCP5toPIP5"));
SoIndexedLineSet252->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate253 = new SoCoordinate();
SoCoordinate253->setPoint(new float[]{-0.2,0.4,0.0,-0.23,0.63,0.0}, 6);
SoIndexedLineSet252->setCoord(*SoCoordinate253);

SoShape249->setGeometry(*SoIndexedLineSet252);

SoHAnimSegment246->addChild(*SoShape249);

SoHAnimJoint245->addChildren(*SoHAnimSegment246);

SoHAnimJoint* SoHAnimJoint254 = new SoHAnimJoint();
SoHAnimJoint254->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint254->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint254->setCenter(new float[]{-0.23,0.63,0.0});
SoHAnimJoint254->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint254->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment255 = new SoHAnimSegment();
SoHAnimSegment255->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimSegment255->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoTransform* SoTransform256 = new SoTransform();
SoTransform256->setTranslation(new float[]{-0.23,0.63,0.0});
SoShape* SoShape257 = new SoShape();
SoShape257->setUSE(QString("HAnimJointShape"));
SoTransform256->addChild(*SoShape257);

SoHAnimSegment255->addChild(*SoTransform256);

SoShape* SoShape258 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance259 = new SoVRMLAppearance();
SoMaterial* SoMaterial260 = new SoMaterial();
SoMaterial260->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance259->addChild(*SoMaterial260);

SoShape258->addChild(*SoVRMLAppearance259);

SoIndexedLineSet* SoIndexedLineSet261 = new SoIndexedLineSet();
SoIndexedLineSet261->setDEF(QString("PIP5toDIP5"));
SoIndexedLineSet261->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate262 = new SoCoordinate();
SoCoordinate262->setPoint(new float[]{-0.23,0.63,0.0,-0.25,0.79,0.0}, 6);
SoIndexedLineSet261->setCoord(*SoCoordinate262);

SoShape258->setGeometry(*SoIndexedLineSet261);

SoHAnimSegment255->addChild(*SoShape258);

SoHAnimJoint254->addChildren(*SoHAnimSegment255);

SoHAnimJoint* SoHAnimJoint263 = new SoHAnimJoint();
SoHAnimJoint263->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint263->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint263->setCenter(new float[]{-0.25,0.79,0.0});
SoHAnimJoint263->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint263->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment264 = new SoHAnimSegment();
SoHAnimSegment264->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSegment264->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoTransform* SoTransform265 = new SoTransform();
SoTransform265->setTranslation(new float[]{-0.25,0.79,0.0});
SoShape* SoShape266 = new SoShape();
SoShape266->setUSE(QString("HAnimJointShape"));
SoTransform265->addChild(*SoShape266);

SoHAnimSegment264->addChild(*SoTransform265);

SoShape* SoShape267 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance268 = new SoVRMLAppearance();
SoMaterial* SoMaterial269 = new SoMaterial();
SoMaterial269->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance268->addChild(*SoMaterial269);

SoShape267->addChild(*SoVRMLAppearance268);

SoIndexedLineSet* SoIndexedLineSet270 = new SoIndexedLineSet();
SoIndexedLineSet270->setDEF(QString("fingertip_l_carpal_distal_interphalangeal_5"));
SoIndexedLineSet270->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate271 = new SoCoordinate();
SoCoordinate271->setPoint(new float[]{-0.25,0.79,0.0,-0.26,0.85,0.0}, 6);
SoIndexedLineSet270->setCoord(*SoCoordinate271);

SoShape267->setGeometry(*SoIndexedLineSet270);

SoHAnimSegment264->addChild(*SoShape267);

SoHAnimJoint263->addChildren(*SoHAnimSegment264);

SoHAnimJoint254->addChildren(*SoHAnimJoint263);

SoHAnimJoint245->addChildren(*SoHAnimJoint254);

SoHAnimJoint236->addChildren(*SoHAnimJoint245);

SoHAnimJoint186->addChildren(*SoHAnimJoint236);

SoHAnimJoint30->addChildren(*SoHAnimJoint186);

SoHAnimJoint29->addChildren(*SoHAnimJoint30);

SoHAnimHumanoid26->setSkeleton(*SoHAnimJoint29);

SoHAnimJoint* SoHAnimJoint272 = new SoHAnimJoint();
SoHAnimJoint272->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint272);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint273);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint274);

SoHAnimJoint* SoHAnimJoint275 = new SoHAnimJoint();
SoHAnimJoint275->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint275);

SoHAnimJoint* SoHAnimJoint276 = new SoHAnimJoint();
SoHAnimJoint276->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint276);

SoHAnimJoint* SoHAnimJoint277 = new SoHAnimJoint();
SoHAnimJoint277->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint277);

SoHAnimJoint* SoHAnimJoint278 = new SoHAnimJoint();
SoHAnimJoint278->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint278);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint279);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint280);

SoHAnimJoint* SoHAnimJoint281 = new SoHAnimJoint();
SoHAnimJoint281->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint281);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint282);

SoHAnimJoint* SoHAnimJoint283 = new SoHAnimJoint();
SoHAnimJoint283->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint283);

SoHAnimJoint* SoHAnimJoint284 = new SoHAnimJoint();
SoHAnimJoint284->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint284);

SoHAnimJoint* SoHAnimJoint285 = new SoHAnimJoint();
SoHAnimJoint285->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint285);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint286);

SoHAnimJoint* SoHAnimJoint287 = new SoHAnimJoint();
SoHAnimJoint287->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint287);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint288);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint289);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint290);

SoHAnimJoint* SoHAnimJoint291 = new SoHAnimJoint();
SoHAnimJoint291->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint291);

SoHAnimJoint* SoHAnimJoint292 = new SoHAnimJoint();
SoHAnimJoint292->setUSE(QString("hanim_l_midcarpal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint292);

SoHAnimJoint* SoHAnimJoint293 = new SoHAnimJoint();
SoHAnimJoint293->setUSE(QString("hanim_l_midcarpal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint293);

SoHAnimJoint* SoHAnimJoint294 = new SoHAnimJoint();
SoHAnimJoint294->setUSE(QString("hanim_l_midcarpal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint294);

SoHAnimJoint* SoHAnimJoint295 = new SoHAnimJoint();
SoHAnimJoint295->setUSE(QString("hanim_l_midcarpal_4_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint295);

SoHAnimJoint* SoHAnimJoint296 = new SoHAnimJoint();
SoHAnimJoint296->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint296);

SoHAnimSegment* SoHAnimSegment297 = new SoHAnimSegment();
SoHAnimSegment297->setUSE(QString("hanim_l_capitate"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment297);

SoHAnimSegment* SoHAnimSegment298 = new SoHAnimSegment();
SoHAnimSegment298->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment298);

SoHAnimSegment* SoHAnimSegment299 = new SoHAnimSegment();
SoHAnimSegment299->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment299);

SoHAnimSegment* SoHAnimSegment300 = new SoHAnimSegment();
SoHAnimSegment300->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment300);

SoHAnimSegment* SoHAnimSegment301 = new SoHAnimSegment();
SoHAnimSegment301->setUSE(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment301);

SoHAnimSegment* SoHAnimSegment302 = new SoHAnimSegment();
SoHAnimSegment302->setUSE(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment302);

SoHAnimSegment* SoHAnimSegment303 = new SoHAnimSegment();
SoHAnimSegment303->setUSE(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment303);

SoHAnimSegment* SoHAnimSegment304 = new SoHAnimSegment();
SoHAnimSegment304->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment304);

SoHAnimSegment* SoHAnimSegment305 = new SoHAnimSegment();
SoHAnimSegment305->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment305);

SoHAnimSegment* SoHAnimSegment306 = new SoHAnimSegment();
SoHAnimSegment306->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment306);

SoHAnimSegment* SoHAnimSegment307 = new SoHAnimSegment();
SoHAnimSegment307->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment307);

SoHAnimSegment* SoHAnimSegment308 = new SoHAnimSegment();
SoHAnimSegment308->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment308);

SoHAnimSegment* SoHAnimSegment309 = new SoHAnimSegment();
SoHAnimSegment309->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment309);

SoHAnimSegment* SoHAnimSegment310 = new SoHAnimSegment();
SoHAnimSegment310->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment310);

SoHAnimSegment* SoHAnimSegment311 = new SoHAnimSegment();
SoHAnimSegment311->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment311);

SoHAnimSegment* SoHAnimSegment312 = new SoHAnimSegment();
SoHAnimSegment312->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment312);

SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setUSE(QString("hanim_l_hamate"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment313);

SoHAnimSegment* SoHAnimSegment314 = new SoHAnimSegment();
SoHAnimSegment314->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment314);

SoHAnimSegment* SoHAnimSegment315 = new SoHAnimSegment();
SoHAnimSegment315->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment315);

SoHAnimSegment* SoHAnimSegment316 = new SoHAnimSegment();
SoHAnimSegment316->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment316);

SoHAnimSegment* SoHAnimSegment317 = new SoHAnimSegment();
SoHAnimSegment317->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment317);

SoHAnimSegment* SoHAnimSegment318 = new SoHAnimSegment();
SoHAnimSegment318->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment318);

SoHAnimSegment* SoHAnimSegment319 = new SoHAnimSegment();
SoHAnimSegment319->setUSE(QString("hanim_l_trapezium"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment319);

SoHAnimSegment* SoHAnimSegment320 = new SoHAnimSegment();
SoHAnimSegment320->setUSE(QString("hanim_l_trapezoid"));
SoHAnimHumanoid26->setSegments(*SoHAnimSegment320);

SoNode24->addChild(*SoHAnimHumanoid26);

SoSceneManager0->setSceneGraph(*SoNode24);

return 0;
}
