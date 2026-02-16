
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
Someta3->setContent(QString("HAnimModelHandRight.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Right hand using high-fidelity definitions for HAnim version 2.0"));
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
Someta21->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"));
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
SoWorldInfo25->setTitle(QString("HAnimModelHandRight.x3d"));
SoNode24->addChild(*SoWorldInfo25);

SoHAnimHumanoid* SoHAnimHumanoid26 = new SoHAnimHumanoid();
SoHAnimHumanoid26->X3DNode::setName(QString("Hand_Right"));
SoHAnimHumanoid26->setDEF(QString("hanim_Hand_Right"));
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
SoHAnimJoint30->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint30->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint30->setDescription(QString("connection joint of hand to leg above"));
SoHAnimJoint30->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint30->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment31 = new SoHAnimSegment();
SoHAnimSegment31->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment31->setDEF(QString("hanim_r_carpal"));
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
SoCoordinate41->setPoint(new float[]{0.0,0.0,0.0,-0.1,0.1,0.0}, 6);
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
SoCoordinate51->setPoint(new float[]{0.0,0.0,0.0,0.1,0.1,0.0}, 6);
SoIndexedLineSet50->setCoord(*SoCoordinate51);

SoShape47->setGeometry(*SoIndexedLineSet50);

SoHAnimSegment31->addChild(*SoShape47);

SoHAnimJoint30->addChildren(*SoHAnimSegment31);

//MC1
SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->X3DNode::setName(QString("r_midcarpal_1"));
SoHAnimJoint52->setDEF(QString("hanim_r_midcarpal_1"));
SoHAnimJoint52->setCenter(new float[]{-0.14,0.09,0.0});
SoHAnimJoint52->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint52->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment53 = new SoHAnimSegment();
SoHAnimSegment53->X3DNode::setName(QString("r_trapezium"));
SoHAnimSegment53->setDEF(QString("hanim_r_trapezium"));
SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{-0.14,0.09,0.0});
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
SoCoordinate63->setPoint(new float[]{-0.1,0.1,0.0,-0.2,0.15,0.0}, 6);
SoIndexedLineSet62->setCoord(*SoCoordinate63);

SoShape59->setGeometry(*SoIndexedLineSet62);

SoHAnimSegment53->addChild(*SoShape59);

SoHAnimJoint52->addChildren(*SoHAnimSegment53);

//thumb finger
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint64->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint64->setCenter(new float[]{-0.2,0.15,0.0});
SoHAnimJoint64->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint64->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment65 = new SoHAnimSegment();
SoHAnimSegment65->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimSegment65->setDEF(QString("hanim_r_metacarpal_1"));
SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setTranslation(new float[]{-0.2,0.15,0.0});
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
SoIndexedLineSet71->setDEF(QString("CMC1toMCP1xxx"));
SoIndexedLineSet71->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate72 = new SoCoordinate();
SoCoordinate72->setPoint(new float[]{-0.2,0.15,0.0,-0.3,0.3,0.0}, 6);
SoIndexedLineSet71->setCoord(*SoCoordinate72);

SoShape68->setGeometry(*SoIndexedLineSet71);

SoHAnimSegment65->addChild(*SoShape68);

SoHAnimJoint64->addChildren(*SoHAnimSegment65);

SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint73->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint73->setCenter(new float[]{-0.3,0.3,0.0});
SoHAnimJoint73->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint73->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment74 = new SoHAnimSegment();
SoHAnimSegment74->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimSegment74->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoTransform* SoTransform75 = new SoTransform();
SoTransform75->setTranslation(new float[]{-0.3,0.3,0.0});
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
SoIndexedLineSet80->setDEF(QString("MCP11toIP1"));
SoIndexedLineSet80->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate81 = new SoCoordinate();
SoCoordinate81->setPoint(new float[]{-0.3,0.3,0.0,-0.35,0.4,0.0}, 6);
SoIndexedLineSet80->setCoord(*SoCoordinate81);

SoShape77->setGeometry(*SoIndexedLineSet80);

SoHAnimSegment74->addChild(*SoShape77);

SoHAnimJoint73->addChildren(*SoHAnimSegment74);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint82->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint82->setCenter(new float[]{-0.35,0.4,0.0});
SoHAnimJoint82->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint82->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment83 = new SoHAnimSegment();
SoHAnimSegment83->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSegment83->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setTranslation(new float[]{-0.35,0.4,0.0});
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
SoIndexedLineSet89->setDEF(QString("fingertip_r_carpal_interphalangeal_1"));
SoIndexedLineSet89->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate90 = new SoCoordinate();
SoCoordinate90->setPoint(new float[]{-0.35,0.4,0.0,-0.36,0.45,0.0}, 6);
SoIndexedLineSet89->setCoord(*SoCoordinate90);

SoShape86->setGeometry(*SoIndexedLineSet89);

SoHAnimSegment83->addChild(*SoShape86);

SoHAnimJoint82->addChildren(*SoHAnimSegment83);

SoHAnimJoint73->addChildren(*SoHAnimJoint82);

SoHAnimJoint64->addChildren(*SoHAnimJoint73);

SoHAnimJoint52->addChildren(*SoHAnimJoint64);

SoHAnimJoint30->addChildren(*SoHAnimJoint52);

//MC2
SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("r_midcarpal_2"));
SoHAnimJoint91->setDEF(QString("hanim_r_midcarpal_2"));
SoHAnimJoint91->setCenter(new float[]{-0.07,0.07,0.0});
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment92 = new SoHAnimSegment();
SoHAnimSegment92->X3DNode::setName(QString("r_trapezoid"));
SoHAnimSegment92->setDEF(QString("hanim_r_trapezoid"));
SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setTranslation(new float[]{-0.07,0.07,0.0});
SoShape* SoShape94 = new SoShape();
SoShape94->setUSE(QString("HAnimNewJointShape"));
SoTransform93->addChild(*SoShape94);

SoHAnimSegment92->addChild(*SoTransform93);

SoShape* SoShape95 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance96 = new SoVRMLAppearance();
SoMaterial* SoMaterial97 = new SoMaterial();
SoMaterial97->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance96->addChild(*SoMaterial97);

SoShape95->addChild(*SoVRMLAppearance96);

SoIndexedLineSet* SoIndexedLineSet98 = new SoIndexedLineSet();
SoIndexedLineSet98->setDEF(QString("MC12toCMC2"));
SoIndexedLineSet98->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate99 = new SoCoordinate();
SoCoordinate99->setPoint(new float[]{-0.1,0.1,0.0,-0.1,0.2,0.0}, 6);
SoIndexedLineSet98->setCoord(*SoCoordinate99);

SoShape95->setGeometry(*SoIndexedLineSet98);

SoHAnimSegment92->addChild(*SoShape95);

SoHAnimJoint91->addChildren(*SoHAnimSegment92);

//index finger
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint100->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint100->setCenter(new float[]{-0.1,0.2,0.0});
SoHAnimJoint100->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint100->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment101 = new SoHAnimSegment();
SoHAnimSegment101->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimSegment101->setDEF(QString("hanim_r_metacarpal_2"));
SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setTranslation(new float[]{-0.1,0.2,0.0});
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
SoIndexedLineSet107->setDEF(QString("CMC2toMCP2"));
SoIndexedLineSet107->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate108 = new SoCoordinate();
SoCoordinate108->setPoint(new float[]{-0.1,0.2,0.0,-0.15,0.5,0.0}, 6);
SoIndexedLineSet107->setCoord(*SoCoordinate108);

SoShape104->setGeometry(*SoIndexedLineSet107);

SoHAnimSegment101->addChild(*SoShape104);

SoHAnimJoint100->addChildren(*SoHAnimSegment101);

SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint109->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint109->setCenter(new float[]{-0.15,0.5,0.0});
SoHAnimJoint109->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint109->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment110 = new SoHAnimSegment();
SoHAnimSegment110->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimSegment110->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoTransform* SoTransform111 = new SoTransform();
SoTransform111->setTranslation(new float[]{-0.15,0.5,0.0});
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
SoIndexedLineSet116->setDEF(QString("MCP2toPIP2"));
SoIndexedLineSet116->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate117 = new SoCoordinate();
SoCoordinate117->setPoint(new float[]{-0.15,0.5,0.0,-0.2,0.7,0.0}, 6);
SoIndexedLineSet116->setCoord(*SoCoordinate117);

SoShape113->setGeometry(*SoIndexedLineSet116);

SoHAnimSegment110->addChild(*SoShape113);

SoHAnimJoint109->addChildren(*SoHAnimSegment110);

SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint118->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint118->setCenter(new float[]{-0.2,0.7,0.0});
SoHAnimJoint118->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint118->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment119 = new SoHAnimSegment();
SoHAnimSegment119->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimSegment119->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoTransform* SoTransform120 = new SoTransform();
SoTransform120->setTranslation(new float[]{-0.2,0.7,0.0});
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
SoIndexedLineSet125->setDEF(QString("PIP2toDIP2"));
SoIndexedLineSet125->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate126 = new SoCoordinate();
SoCoordinate126->setPoint(new float[]{-0.2,0.7,0.0,-0.24,0.87,0.0}, 6);
SoIndexedLineSet125->setCoord(*SoCoordinate126);

SoShape122->setGeometry(*SoIndexedLineSet125);

SoHAnimSegment119->addChild(*SoShape122);

SoHAnimJoint118->addChildren(*SoHAnimSegment119);

SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint127->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint127->setCenter(new float[]{-0.24,0.87,0.0});
SoHAnimJoint127->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint127->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment128 = new SoHAnimSegment();
SoHAnimSegment128->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSegment128->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoTransform* SoTransform129 = new SoTransform();
SoTransform129->setTranslation(new float[]{-0.24,0.87,0.0});
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
SoIndexedLineSet134->setDEF(QString("fingertip_r_carpal_distal_interphalangeal_2"));
SoIndexedLineSet134->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate135 = new SoCoordinate();
SoCoordinate135->setPoint(new float[]{-0.24,0.87,0.0,-0.26,0.93,0.0}, 6);
SoIndexedLineSet134->setCoord(*SoCoordinate135);

SoShape131->setGeometry(*SoIndexedLineSet134);

SoHAnimSegment128->addChild(*SoShape131);

SoHAnimJoint127->addChildren(*SoHAnimSegment128);

SoHAnimJoint118->addChildren(*SoHAnimJoint127);

SoHAnimJoint109->addChildren(*SoHAnimJoint118);

SoHAnimJoint100->addChildren(*SoHAnimJoint109);

SoHAnimJoint91->addChildren(*SoHAnimJoint100);

SoHAnimJoint30->addChildren(*SoHAnimJoint91);

//MC3
SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->X3DNode::setName(QString("r_midcarpal_3"));
SoHAnimJoint136->setDEF(QString("hanim_r_midcarpal_3"));
SoHAnimJoint136->setCenter(new float[]{0.0,0.07,0.0});
SoHAnimJoint136->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint136->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment137 = new SoHAnimSegment();
SoHAnimSegment137->X3DNode::setName(QString("r_capitate"));
SoHAnimSegment137->setDEF(QString("hanim_r_capitate"));
SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setTranslation(new float[]{0.0,0.07,0.0});
SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("HAnimNewJointShape"));
SoTransform138->addChild(*SoShape139);

SoHAnimSegment137->addChild(*SoTransform138);

SoShape* SoShape140 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance141 = new SoVRMLAppearance();
SoMaterial* SoMaterial142 = new SoMaterial();
SoMaterial142->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance141->addChild(*SoMaterial142);

SoShape140->addChild(*SoVRMLAppearance141);

SoIndexedLineSet* SoIndexedLineSet143 = new SoIndexedLineSet();
SoIndexedLineSet143->setDEF(QString("MC3toCMC3"));
SoIndexedLineSet143->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate144 = new SoCoordinate();
SoCoordinate144->setPoint(new float[]{0.0,0.07,0.0,0.0,0.2,0.0}, 6);
SoIndexedLineSet143->setCoord(*SoCoordinate144);

SoShape140->setGeometry(*SoIndexedLineSet143);

SoHAnimSegment137->addChild(*SoShape140);

SoHAnimJoint136->addChildren(*SoHAnimSegment137);

//Middle fingle
SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint145->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint145->setCenter(new float[]{0.0,0.2,0.0});
SoHAnimJoint145->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint145->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment146 = new SoHAnimSegment();
SoHAnimSegment146->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimSegment146->setDEF(QString("hanim_r_metacarpal_3"));
SoTransform* SoTransform147 = new SoTransform();
SoTransform147->setTranslation(new float[]{0.0,0.2,0.0});
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
SoIndexedLineSet152->setDEF(QString("CMC3toMCP3"));
SoIndexedLineSet152->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate153 = new SoCoordinate();
SoCoordinate153->setPoint(new float[]{0.0,0.2,0.0,-0.03,0.5,0.0}, 6);
SoIndexedLineSet152->setCoord(*SoCoordinate153);

SoShape149->setGeometry(*SoIndexedLineSet152);

SoHAnimSegment146->addChild(*SoShape149);

SoHAnimJoint145->addChildren(*SoHAnimSegment146);

SoHAnimJoint* SoHAnimJoint154 = new SoHAnimJoint();
SoHAnimJoint154->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint154->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint154->setCenter(new float[]{-0.03,0.5,0.0});
SoHAnimJoint154->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint154->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment155 = new SoHAnimSegment();
SoHAnimSegment155->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimSegment155->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoTransform* SoTransform156 = new SoTransform();
SoTransform156->setTranslation(new float[]{-0.03,0.5,0.0});
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
SoIndexedLineSet161->setDEF(QString("MCP3toPIP3"));
SoIndexedLineSet161->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate162 = new SoCoordinate();
SoCoordinate162->setPoint(new float[]{-0.03,0.5,0.0,-0.05,0.75,0.0}, 6);
SoIndexedLineSet161->setCoord(*SoCoordinate162);

SoShape158->setGeometry(*SoIndexedLineSet161);

SoHAnimSegment155->addChild(*SoShape158);

SoHAnimJoint154->addChildren(*SoHAnimSegment155);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint163->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint163->setCenter(new float[]{-0.05,0.75,0.0});
SoHAnimJoint163->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint163->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment164 = new SoHAnimSegment();
SoHAnimSegment164->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimSegment164->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setTranslation(new float[]{-0.05,0.75,0.0});
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
SoIndexedLineSet170->setDEF(QString("PIP3toDIP3"));
SoIndexedLineSet170->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate171 = new SoCoordinate();
SoCoordinate171->setPoint(new float[]{-0.05,0.75,0.0,-0.08,0.96,0.0}, 6);
SoIndexedLineSet170->setCoord(*SoCoordinate171);

SoShape167->setGeometry(*SoIndexedLineSet170);

SoHAnimSegment164->addChild(*SoShape167);

SoHAnimJoint163->addChildren(*SoHAnimSegment164);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint172->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint172->setCenter(new float[]{-0.08,0.96,0.0});
SoHAnimJoint172->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint172->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment173 = new SoHAnimSegment();
SoHAnimSegment173->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSegment173->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoTransform* SoTransform174 = new SoTransform();
SoTransform174->setTranslation(new float[]{-0.08,0.96,0.0});
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
SoIndexedLineSet179->setDEF(QString("fingertip_r_carpal_distal_interphalangeal_3"));
SoIndexedLineSet179->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate180 = new SoCoordinate();
SoCoordinate180->setPoint(new float[]{-0.08,0.96,0.0,-0.09,1.05,0.0}, 6);
SoIndexedLineSet179->setCoord(*SoCoordinate180);

SoShape176->setGeometry(*SoIndexedLineSet179);

SoHAnimSegment173->addChild(*SoShape176);

SoHAnimJoint172->addChildren(*SoHAnimSegment173);

SoHAnimJoint163->addChildren(*SoHAnimJoint172);

SoHAnimJoint154->addChildren(*SoHAnimJoint163);

SoHAnimJoint145->addChildren(*SoHAnimJoint154);

SoHAnimJoint136->addChildren(*SoHAnimJoint145);

SoHAnimJoint30->addChildren(*SoHAnimJoint136);

//MC4_5
SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->X3DNode::setName(QString("r_midcarpal_4_5"));
SoHAnimJoint181->setDEF(QString("hanim_r_midcarpal_4_5"));
SoHAnimJoint181->setCenter(new float[]{0.1,0.1,0.0});
SoHAnimJoint181->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint181->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment182 = new SoHAnimSegment();
SoHAnimSegment182->X3DNode::setName(QString("r_hamate"));
SoHAnimSegment182->setDEF(QString("hanim_r_hamate"));
SoTransform* SoTransform183 = new SoTransform();
SoTransform183->setTranslation(new float[]{0.1,0.1,0.0});
SoShape* SoShape184 = new SoShape();
SoShape184->setUSE(QString("HAnimNewJointShape"));
SoTransform183->addChild(*SoShape184);

SoHAnimSegment182->addChild(*SoTransform183);

SoShape* SoShape185 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance186 = new SoVRMLAppearance();
SoMaterial* SoMaterial187 = new SoMaterial();
SoMaterial187->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance186->addChild(*SoMaterial187);

SoShape185->addChild(*SoVRMLAppearance186);

SoIndexedLineSet* SoIndexedLineSet188 = new SoIndexedLineSet();
SoIndexedLineSet188->setDEF(QString("MC45toCMC4"));
SoIndexedLineSet188->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate189 = new SoCoordinate();
SoCoordinate189->setPoint(new float[]{0.1,0.1,0.0,0.1,0.2,0.0}, 6);
SoIndexedLineSet188->setCoord(*SoCoordinate189);

SoShape185->setGeometry(*SoIndexedLineSet188);

SoHAnimSegment182->addChild(*SoShape185);

SoShape* SoShape190 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance191 = new SoVRMLAppearance();
SoMaterial* SoMaterial192 = new SoMaterial();
SoMaterial192->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance191->addChild(*SoMaterial192);

SoShape190->addChild(*SoVRMLAppearance191);

SoIndexedLineSet* SoIndexedLineSet193 = new SoIndexedLineSet();
SoIndexedLineSet193->setDEF(QString("MC45toCMC5"));
SoIndexedLineSet193->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate194 = new SoCoordinate();
SoCoordinate194->setPoint(new float[]{0.1,0.1,0.0,0.15,0.17,0.0}, 6);
SoIndexedLineSet193->setCoord(*SoCoordinate194);

SoShape190->setGeometry(*SoIndexedLineSet193);

SoHAnimSegment182->addChild(*SoShape190);

SoHAnimJoint181->addChildren(*SoHAnimSegment182);

//ring finger
SoHAnimJoint* SoHAnimJoint195 = new SoHAnimJoint();
SoHAnimJoint195->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint195->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint195->setCenter(new float[]{0.1,0.2,0.0});
SoHAnimJoint195->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint195->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment196 = new SoHAnimSegment();
SoHAnimSegment196->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimSegment196->setDEF(QString("hanim_r_metacarpal_4"));
SoTransform* SoTransform197 = new SoTransform();
SoTransform197->setTranslation(new float[]{0.1,0.2,0.0});
SoShape* SoShape198 = new SoShape();
SoShape198->setUSE(QString("HAnimJointShape"));
SoTransform197->addChild(*SoShape198);

SoHAnimSegment196->addChild(*SoTransform197);

SoShape* SoShape199 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance200 = new SoVRMLAppearance();
SoMaterial* SoMaterial201 = new SoMaterial();
SoMaterial201->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance200->addChild(*SoMaterial201);

SoShape199->addChild(*SoVRMLAppearance200);

SoIndexedLineSet* SoIndexedLineSet202 = new SoIndexedLineSet();
SoIndexedLineSet202->setDEF(QString("CMC4toMCP4"));
SoIndexedLineSet202->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate203 = new SoCoordinate();
SoCoordinate203->setPoint(new float[]{0.1,0.2,0.0,0.1,0.47,0.0}, 6);
SoIndexedLineSet202->setCoord(*SoCoordinate203);

SoShape199->setGeometry(*SoIndexedLineSet202);

SoHAnimSegment196->addChild(*SoShape199);

SoHAnimJoint195->addChildren(*SoHAnimSegment196);

SoHAnimJoint* SoHAnimJoint204 = new SoHAnimJoint();
SoHAnimJoint204->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint204->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint204->setCenter(new float[]{0.1,0.47,0.0});
SoHAnimJoint204->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint204->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment205 = new SoHAnimSegment();
SoHAnimSegment205->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimSegment205->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoTransform* SoTransform206 = new SoTransform();
SoTransform206->setTranslation(new float[]{0.1,0.47,0.0});
SoShape* SoShape207 = new SoShape();
SoShape207->setUSE(QString("HAnimJointShape"));
SoTransform206->addChild(*SoShape207);

SoHAnimSegment205->addChild(*SoTransform206);

SoShape* SoShape208 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance209 = new SoVRMLAppearance();
SoMaterial* SoMaterial210 = new SoMaterial();
SoMaterial210->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance209->addChild(*SoMaterial210);

SoShape208->addChild(*SoVRMLAppearance209);

SoIndexedLineSet* SoIndexedLineSet211 = new SoIndexedLineSet();
SoIndexedLineSet211->setDEF(QString("MCP4toPIP4"));
SoIndexedLineSet211->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate212 = new SoCoordinate();
SoCoordinate212->setPoint(new float[]{0.1,0.47,0.0,0.1,0.7,0.0}, 6);
SoIndexedLineSet211->setCoord(*SoCoordinate212);

SoShape208->setGeometry(*SoIndexedLineSet211);

SoHAnimSegment205->addChild(*SoShape208);

SoHAnimJoint204->addChildren(*SoHAnimSegment205);

SoHAnimJoint* SoHAnimJoint213 = new SoHAnimJoint();
SoHAnimJoint213->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint213->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint213->setCenter(new float[]{0.1,0.7,0.0});
SoHAnimJoint213->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint213->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment214 = new SoHAnimSegment();
SoHAnimSegment214->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimSegment214->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoTransform* SoTransform215 = new SoTransform();
SoTransform215->setTranslation(new float[]{0.1,0.7,0.0});
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
SoIndexedLineSet220->setDEF(QString("PIP4toDIP4"));
SoIndexedLineSet220->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate221 = new SoCoordinate();
SoCoordinate221->setPoint(new float[]{0.1,0.7,0.0,0.1,0.93,0.0}, 6);
SoIndexedLineSet220->setCoord(*SoCoordinate221);

SoShape217->setGeometry(*SoIndexedLineSet220);

SoHAnimSegment214->addChild(*SoShape217);

SoHAnimJoint213->addChildren(*SoHAnimSegment214);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint222->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint222->setCenter(new float[]{0.1,0.93,0.0});
SoHAnimJoint222->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint222->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment223 = new SoHAnimSegment();
SoHAnimSegment223->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSegment223->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoTransform* SoTransform224 = new SoTransform();
SoTransform224->setTranslation(new float[]{0.1,0.93,0.0});
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
SoIndexedLineSet229->setDEF(QString("fingertip_r_carpal_distal_interphalangeal_4"));
SoIndexedLineSet229->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate230 = new SoCoordinate();
SoCoordinate230->setPoint(new float[]{0.1,0.93,0.0,0.1,1.0,0.0}, 6);
SoIndexedLineSet229->setCoord(*SoCoordinate230);

SoShape226->setGeometry(*SoIndexedLineSet229);

SoHAnimSegment223->addChild(*SoShape226);

SoHAnimJoint222->addChildren(*SoHAnimSegment223);

SoHAnimJoint213->addChildren(*SoHAnimJoint222);

SoHAnimJoint204->addChildren(*SoHAnimJoint213);

SoHAnimJoint195->addChildren(*SoHAnimJoint204);

SoHAnimJoint181->addChildren(*SoHAnimJoint195);

//pinky finger
SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint231->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint231->setCenter(new float[]{0.15,0.17,0.0});
SoHAnimJoint231->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint231->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimSegment232->setDEF(QString("hanim_r_metacarpal_5"));
SoTransform* SoTransform233 = new SoTransform();
SoTransform233->setTranslation(new float[]{0.15,0.17,0.0});
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
SoIndexedLineSet238->setDEF(QString("CMC5toMCP5"));
SoIndexedLineSet238->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate239 = new SoCoordinate();
SoCoordinate239->setPoint(new float[]{0.15,0.17,0.0,0.2,0.4,0.0}, 6);
SoIndexedLineSet238->setCoord(*SoCoordinate239);

SoShape235->setGeometry(*SoIndexedLineSet238);

SoHAnimSegment232->addChild(*SoShape235);

SoHAnimJoint231->addChildren(*SoHAnimSegment232);

SoHAnimJoint* SoHAnimJoint240 = new SoHAnimJoint();
SoHAnimJoint240->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint240->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint240->setCenter(new float[]{0.2,0.4,0.0});
SoHAnimJoint240->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint240->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment241 = new SoHAnimSegment();
SoHAnimSegment241->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimSegment241->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoTransform* SoTransform242 = new SoTransform();
SoTransform242->setTranslation(new float[]{0.2,0.4,0.0});
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
SoIndexedLineSet247->setDEF(QString("MCP5toPIP5"));
SoIndexedLineSet247->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate248 = new SoCoordinate();
SoCoordinate248->setPoint(new float[]{0.2,0.4,0.0,0.23,0.63,0.0}, 6);
SoIndexedLineSet247->setCoord(*SoCoordinate248);

SoShape244->setGeometry(*SoIndexedLineSet247);

SoHAnimSegment241->addChild(*SoShape244);

SoHAnimJoint240->addChildren(*SoHAnimSegment241);

SoHAnimJoint* SoHAnimJoint249 = new SoHAnimJoint();
SoHAnimJoint249->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint249->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint249->setCenter(new float[]{0.23,0.63,0.0});
SoHAnimJoint249->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint249->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment250 = new SoHAnimSegment();
SoHAnimSegment250->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimSegment250->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoTransform* SoTransform251 = new SoTransform();
SoTransform251->setTranslation(new float[]{0.23,0.63,0.0});
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
SoIndexedLineSet256->setDEF(QString("PIP5toDIP5"));
SoIndexedLineSet256->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate257 = new SoCoordinate();
SoCoordinate257->setPoint(new float[]{0.23,0.63,0.0,0.25,0.79,0.0}, 6);
SoIndexedLineSet256->setCoord(*SoCoordinate257);

SoShape253->setGeometry(*SoIndexedLineSet256);

SoHAnimSegment250->addChild(*SoShape253);

SoHAnimJoint249->addChildren(*SoHAnimSegment250);

SoHAnimJoint* SoHAnimJoint258 = new SoHAnimJoint();
SoHAnimJoint258->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint258->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint258->setCenter(new float[]{0.25,0.79,0.0});
SoHAnimJoint258->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint258->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment259 = new SoHAnimSegment();
SoHAnimSegment259->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSegment259->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setTranslation(new float[]{0.25,0.79,0.0});
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
SoIndexedLineSet265->setDEF(QString("fingertip_r_carpal_distal_interphalangeal_5"));
SoIndexedLineSet265->setCoordIndex(new int32_t[]{0,1}, 2);
SoCoordinate* SoCoordinate266 = new SoCoordinate();
SoCoordinate266->setPoint(new float[]{0.25,0.79,0.0,0.26,0.85,0.0}, 6);
SoIndexedLineSet265->setCoord(*SoCoordinate266);

SoShape262->setGeometry(*SoIndexedLineSet265);

SoHAnimSegment259->addChild(*SoShape262);

SoHAnimJoint258->addChildren(*SoHAnimSegment259);

SoHAnimJoint249->addChildren(*SoHAnimJoint258);

SoHAnimJoint240->addChildren(*SoHAnimJoint249);

SoHAnimJoint231->addChildren(*SoHAnimJoint240);

SoHAnimJoint181->addChildren(*SoHAnimJoint231);

SoHAnimJoint30->addChildren(*SoHAnimJoint181);

SoHAnimJoint29->addChildren(*SoHAnimJoint30);

SoHAnimHumanoid26->setSkeleton(*SoHAnimJoint29);

SoHAnimJoint* SoHAnimJoint267 = new SoHAnimJoint();
SoHAnimJoint267->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint267);

SoHAnimJoint* SoHAnimJoint268 = new SoHAnimJoint();
SoHAnimJoint268->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint268);

SoHAnimJoint* SoHAnimJoint269 = new SoHAnimJoint();
SoHAnimJoint269->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint269);

SoHAnimJoint* SoHAnimJoint270 = new SoHAnimJoint();
SoHAnimJoint270->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint270);

SoHAnimJoint* SoHAnimJoint271 = new SoHAnimJoint();
SoHAnimJoint271->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint271);

SoHAnimJoint* SoHAnimJoint272 = new SoHAnimJoint();
SoHAnimJoint272->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint272);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint273);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint274);

SoHAnimJoint* SoHAnimJoint275 = new SoHAnimJoint();
SoHAnimJoint275->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint275);

SoHAnimJoint* SoHAnimJoint276 = new SoHAnimJoint();
SoHAnimJoint276->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint276);

SoHAnimJoint* SoHAnimJoint277 = new SoHAnimJoint();
SoHAnimJoint277->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint277);

SoHAnimJoint* SoHAnimJoint278 = new SoHAnimJoint();
SoHAnimJoint278->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint278);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint279);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint280);

SoHAnimJoint* SoHAnimJoint281 = new SoHAnimJoint();
SoHAnimJoint281->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint281);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint282);

SoHAnimJoint* SoHAnimJoint283 = new SoHAnimJoint();
SoHAnimJoint283->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint283);

SoHAnimJoint* SoHAnimJoint284 = new SoHAnimJoint();
SoHAnimJoint284->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint284);

SoHAnimJoint* SoHAnimJoint285 = new SoHAnimJoint();
SoHAnimJoint285->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint285);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint286);

SoHAnimJoint* SoHAnimJoint287 = new SoHAnimJoint();
SoHAnimJoint287->setUSE(QString("hanim_r_midcarpal_1"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint287);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setUSE(QString("hanim_r_midcarpal_2"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint288);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->setUSE(QString("hanim_r_midcarpal_3"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint289);

SoHAnimJoint* SoHAnimJoint290 = new SoHAnimJoint();
SoHAnimJoint290->setUSE(QString("hanim_r_midcarpal_4_5"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint290);

SoHAnimJoint* SoHAnimJoint291 = new SoHAnimJoint();
SoHAnimJoint291->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid26->setJoints(*SoHAnimJoint291);

SoNode24->addChild(*SoHAnimHumanoid26);

SoSceneManager0->setSceneGraph(*SoNode24);

return 0;
}
