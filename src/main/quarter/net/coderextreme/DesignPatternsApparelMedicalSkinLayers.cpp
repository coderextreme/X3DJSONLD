
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
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("DesignPatternsApparelMedicalSkinLayers.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Design patterns for skin and apparel using HAnim2 standard in X3D4"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Dick Puk"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("23 December 2022"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("2 July 2023"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("DesignPatternsApparelVariations.txt"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("warning"));
Someta13->setContent(QString("Under development. This template example does not produce renderable HAnim models."));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("identifier"));
Someta14->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("license"));
Someta16->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
SoWorldInfo* SoWorldInfo18 = new SoWorldInfo();
SoWorldInfo18->setTitle(QString("HAnimHumanoid skin design patterns for apparel, medical"));
SoNode17->addChild(*SoWorldInfo18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setSkyColor(new float[]{0.0,0.6,0.6}, 3);
SoNode17->addChild(*SoBackground19);

SoGroup* SoGroup20 = new SoGroup();
SoGroup20->setDEF(QString("MultipleHumanoids"));
SoMetadataString* SoMetadataString21 = new SoMetadataString();
SoMetadataString21->X3DNode::setName(QString("HAnimArchitecture"));
SoMetadataString21->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
SoMetadataString21->setValue(new QString[]{QString("E.4 Multiple humanoids per file")}, 1);
SoGroup20->setMetadata(*SoMetadataString21);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid22 = new SoHAnimHumanoid();
SoHAnimHumanoid22->X3DNode::setName(QString("SimpleSkeleton"));
SoHAnimHumanoid22->setDEF(QString("a_SimpleSkeleton"));
SoHAnimHumanoid22->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint23 = new SoHAnimJoint();
SoHAnimJoint23->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint23->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint23->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment24 = new SoHAnimSegment();
SoHAnimSegment24->X3DNode::setName(QString("sacrum"));
SoShape* SoShape25 = new SoShape();
SoShape25->setDEF(QString("JointVisualization"));
SoHAnimSegment24->addChild(*SoShape25);

SoShape* SoShape26 = new SoShape();
SoShape26->setDEF(QString("SegmentVisualization"));
SoHAnimSegment24->addChild(*SoShape26);

SoHAnimSite* SoHAnimSite27 = new SoHAnimSite();
SoHAnimSite27->X3DNode::setName(QString("feature01_tip"));
SoHAnimSite27->setDEF(QString("a_feature01_tip"));
SoShape* SoShape28 = new SoShape();
SoShape28->setDEF(QString("SiteVisualization"));
SoHAnimSite27->addChild(*SoShape28);

SoHAnimSegment24->addChild(*SoHAnimSite27);

SoHAnimJoint23->addChildren(*SoHAnimSegment24);

SoHAnimHumanoid22->setSkeleton(*SoHAnimJoint23);

SoGroup20->addChild(*SoHAnimHumanoid22);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid29 = new SoHAnimHumanoid();
SoHAnimHumanoid29->X3DNode::setName(QString("SimpleSkeletonMesh"));
SoHAnimHumanoid29->setDEF(QString("b_SimpleSkeletonMesh"));
SoHAnimHumanoid29->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint30 = new SoHAnimJoint();
SoHAnimJoint30->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint30->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint30->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment31 = new SoHAnimSegment();
SoHAnimSegment31->X3DNode::setName(QString("sacrum"));
SoShape* SoShape32 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet33 = new SoIndexedFaceSet();
SoIndexedFaceSet33->setDEF(QString("SegmentBoneMesh"));
SoShape32->setGeometry(*SoIndexedFaceSet33);

SoHAnimSegment31->addChild(*SoShape32);

SoHAnimJoint30->addChildren(*SoHAnimSegment31);

SoHAnimHumanoid29->setSkeleton(*SoHAnimJoint30);

SoGroup20->addChild(*SoHAnimHumanoid29);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid34 = new SoHAnimHumanoid();
SoHAnimHumanoid34->X3DNode::setName(QString("SkinIndexedGeometry"));
SoHAnimHumanoid34->setDEF(QString("c_SkinIndexedGeometry"));
SoHAnimHumanoid34->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint35 = new SoHAnimJoint();
SoHAnimJoint35->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint35->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint35->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment36 = new SoHAnimSegment();
SoHAnimSegment36->X3DNode::setName(QString("sacrum"));
SoHAnimJoint35->addChildren(*SoHAnimSegment36);

SoHAnimHumanoid34->setSkeleton(*SoHAnimJoint35);

SoIndexedFaceSet* SoIndexedFaceSet37 = new SoIndexedFaceSet();
SoIndexedFaceSet37->setDEF(QString("SkinMeshIFS"));
SoHAnimHumanoid34->setSkin(*SoIndexedFaceSet37);

SoGroup20->addChild(*SoHAnimHumanoid34);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid38 = new SoHAnimHumanoid();
SoHAnimHumanoid38->X3DNode::setName(QString("SkinShapeIndexedGeometry"));
SoHAnimHumanoid38->setDEF(QString("d_SkinShapeIndexedGeometry"));
SoHAnimHumanoid38->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint39->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint39->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment40 = new SoHAnimSegment();
SoHAnimSegment40->X3DNode::setName(QString("sacrum"));
SoHAnimJoint39->addChildren(*SoHAnimSegment40);

SoHAnimHumanoid38->setSkeleton(*SoHAnimJoint39);

SoShape* SoShape41 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet42 = new SoIndexedFaceSet();
SoIndexedFaceSet42->setUSE(QString("SkinMeshIFS"));
SoShape41->setGeometry(*SoIndexedFaceSet42);

SoHAnimHumanoid38->setSkin(*SoShape41);

SoGroup20->addChild(*SoHAnimHumanoid38);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid43 = new SoHAnimHumanoid();
SoHAnimHumanoid43->X3DNode::setName(QString("SkinSwitchShapeIndexedGeometry"));
SoHAnimHumanoid43->setDEF(QString("e_SkinSwitchShapeIndexedGeometry"));
SoHAnimHumanoid43->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint44->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint44->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment45 = new SoHAnimSegment();
SoHAnimSegment45->X3DNode::setName(QString("sacrum"));
SoHAnimJoint44->addChildren(*SoHAnimSegment45);

SoHAnimHumanoid43->setSkeleton(*SoHAnimJoint44);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
SoShape* SoShape46 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet47 = new SoIndexedFaceSet();
SoIndexedFaceSet47->setDEF(QString("IndexedSkinMeshIFS"));
SoCoordinate* SoCoordinate48 = new SoCoordinate();
SoCoordinate48->setDEF(QString("SkinMeshCoordinate"));
SoIndexedFaceSet47->setCoord(*SoCoordinate48);

SoShape46->setGeometry(*SoIndexedFaceSet47);

SoHAnimHumanoid43->setSkin(*SoShape46);

SoGroup20->addChild(*SoHAnimHumanoid43);

//similarly for LOD
//==============================
SoHAnimHumanoid* SoHAnimHumanoid49 = new SoHAnimHumanoid();
SoHAnimHumanoid49->X3DNode::setName(QString("SynthesizedSkinShapeIndexedTwoPartGeometry"));
SoHAnimHumanoid49->setDEF(QString("f_SynthesizedSkinShapeIndexedTwoPartGeometry"));
SoHAnimHumanoid49->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint50->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment51 = new SoHAnimSegment();
SoHAnimSegment51->X3DNode::setName(QString("sacrum"));
SoHAnimJoint50->addChildren(*SoHAnimSegment51);

SoHAnimHumanoid49->setSkeleton(*SoHAnimJoint50);

SoShape* SoShape52 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet53 = new SoIndexedFaceSet();
SoIndexedFaceSet53->setDEF(QString("TwoPartIndexedSkinMesh"));
SoCoordinate* SoCoordinate54 = new SoCoordinate();
SoCoordinate54->setDEF(QString("TwoPartSkinMesh"));
SoIndexedFaceSet53->setCoord(*SoCoordinate54);

SoShape52->setGeometry(*SoIndexedFaceSet53);

SoHAnimHumanoid49->setSkin(*SoShape52);

SoGroup20->addChild(*SoHAnimHumanoid49);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid55 = new SoHAnimHumanoid();
SoHAnimHumanoid55->X3DNode::setName(QString("ApparelSkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid55->setDEF(QString("g_ApparelSkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid55->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint56->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint56->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment57 = new SoHAnimSegment();
SoHAnimSegment57->X3DNode::setName(QString("sacrum"));
SoHAnimJoint56->addChildren(*SoHAnimSegment57);

SoHAnimHumanoid55->setSkeleton(*SoHAnimJoint56);

SoShape* SoShape58 = new SoShape();
SoHAnimHumanoid55->setSkin(*SoShape58);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
SoGroup20->addChild(*SoHAnimHumanoid55);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid59 = new SoHAnimHumanoid();
SoHAnimHumanoid59->X3DNode::setName(QString("AnatomySkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid59->setDEF(QString("h_AnatomySkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid59->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint60->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint60->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment61 = new SoHAnimSegment();
SoHAnimSegment61->X3DNode::setName(QString("sacrum"));
SoHAnimJoint60->addChildren(*SoHAnimSegment61);

SoHAnimHumanoid59->setSkeleton(*SoHAnimJoint60);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
SoShape* SoShape62 = new SoShape();
SoHAnimHumanoid59->setSkin(*SoShape62);

SoGroup20->addChild(*SoHAnimHumanoid59);

//==============================
SoNode17->addChild(*SoGroup20);

SoViewpoint* SoViewpoint63 = new SoViewpoint();
SoViewpoint63->setDEF(QString("ViewHelpText"));
SoViewpoint63->setDescription(QString("Select text to see website"));
SoViewpoint63->setPosition(new float[]{0.0,0.0,12.0});
SoNode17->addChild(*SoViewpoint63);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
SoAnchor* SoAnchor64 = new SoAnchor();
SoAnchor64->setDescription(QString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"));
SoAnchor64->setParameter(new QString[]{QString("target=blank")}, 1);
SoAnchor64->setUrl(new QString[]{QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")}, 1);
SoShape* SoShape65 = new SoShape();
//TODO adjust Text string and Box size, then set Material transparency='1'
SoText* SoText66 = new SoText();
SoText66->setString(new QString[]{QString("DesignPatternsApparelMedicalSkinLayers.x3d"), QString(""), QString("explores potential apparel approaches")}, 3);
SoFontStyle* SoFontStyle67 = new SoFontStyle();
SoFontStyle67->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle67->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle67->setSize(0.6);
SoFontStyle67->setStyle(QString("BOLD"));
SoText66->setFontStyle(*SoFontStyle67);

SoShape65->setGeometry(*SoText66);

SoVRMLAppearance* SoVRMLAppearance68 = new SoVRMLAppearance();
SoMaterial* SoMaterial69 = new SoMaterial();
SoMaterial69->setDiffuseColor(new float[]{0.9,0.9,0.9});
SoVRMLAppearance68->addChild(*SoMaterial69);

SoShape65->addChild(*SoVRMLAppearance68);

SoAnchor64->addChild(*SoShape65);

SoShape* SoShape70 = new SoShape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
SoBox* SoBox71 = new SoBox();
SoBox71->setSize(new float[]{11.0,2.0,0.001});
SoShape70->setGeometry(*SoBox71);

SoVRMLAppearance* SoVRMLAppearance72 = new SoVRMLAppearance();
SoMaterial* SoMaterial73 = new SoMaterial();
SoMaterial73->setTransparency(1);
SoVRMLAppearance72->addChild(*SoMaterial73);

SoShape70->addChild(*SoVRMLAppearance72);

SoAnchor64->addChild(*SoShape70);

SoNode17->addChild(*SoAnchor64);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}
