
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
Socomponent2->setLevel(2);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("DesignPatternsApparelMedicalSkinLayers.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Design patterns for skin and apparel using HAnim2 standard in X3D4"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("creator"));
Someta7->setContent(QString("Dick Puk"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("created"));
Someta8->setContent(QString("23 December 2022"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("modified"));
Someta9->setContent(QString("2 July 2023"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("DesignPatternsApparelVariations.txt"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("warning"));
Someta14->setContent(QString("Under development. This template example does not produce renderable HAnim models."));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("license"));
Someta17->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta17);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode18 = new SoNode();
SoWorldInfo* SoWorldInfo19 = new SoWorldInfo();
SoWorldInfo19->setTitle(QString("HAnimHumanoid skin design patterns for apparel, medical"));
SoNode18->addChild(*SoWorldInfo19);

SoBackground* SoBackground20 = new SoBackground();
SoBackground20->setSkyColor(new float[]{0.0,0.6,0.6}, 3);
SoNode18->addChild(*SoBackground20);

SoGroup* SoGroup21 = new SoGroup();
SoGroup21->setDEF(QString("MultipleHumanoids"));
SoMetadataString* SoMetadataString22 = new SoMetadataString();
SoMetadataString22->X3DNode::setName(QString("HAnimArchitecture"));
SoMetadataString22->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"));
SoMetadataString22->setValue(new QString[]{QString("E.4 Multiple humanoids per file")}, 1);
SoGroup21->setMetadata(*SoMetadataString22);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid23 = new SoHAnimHumanoid();
SoHAnimHumanoid23->X3DNode::setName(QString("SimpleSkeleton"));
SoHAnimHumanoid23->setDEF(QString("a_SimpleSkeleton"));
SoHAnimHumanoid23->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint24 = new SoHAnimJoint();
SoHAnimJoint24->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint24->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint24->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment25 = new SoHAnimSegment();
SoHAnimSegment25->X3DNode::setName(QString("sacrum"));
SoShape* SoShape26 = new SoShape();
SoShape26->setDEF(QString("JointVisualization"));
SoHAnimSegment25->addChild(*SoShape26);

SoShape* SoShape27 = new SoShape();
SoShape27->setDEF(QString("SegmentVisualization"));
SoHAnimSegment25->addChild(*SoShape27);

SoHAnimSite* SoHAnimSite28 = new SoHAnimSite();
SoHAnimSite28->X3DNode::setName(QString("feature01_tip"));
SoHAnimSite28->setDEF(QString("a_feature01_tip"));
SoShape* SoShape29 = new SoShape();
SoShape29->setDEF(QString("SiteVisualization"));
SoHAnimSite28->addChild(*SoShape29);

SoHAnimSegment25->addChild(*SoHAnimSite28);

SoHAnimJoint24->addChildren(*SoHAnimSegment25);

SoHAnimHumanoid23->setSkeleton(*SoHAnimJoint24);

SoGroup21->addChild(*SoHAnimHumanoid23);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid30 = new SoHAnimHumanoid();
SoHAnimHumanoid30->X3DNode::setName(QString("SimpleSkeletonMesh"));
SoHAnimHumanoid30->setDEF(QString("b_SimpleSkeletonMesh"));
SoHAnimHumanoid30->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint31 = new SoHAnimJoint();
SoHAnimJoint31->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint31->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint31->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment32 = new SoHAnimSegment();
SoHAnimSegment32->X3DNode::setName(QString("sacrum"));
SoShape* SoShape33 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet34 = new SoIndexedFaceSet();
SoIndexedFaceSet34->setDEF(QString("SegmentBoneMesh"));
SoShape33->setGeometry(*SoIndexedFaceSet34);

SoHAnimSegment32->addChild(*SoShape33);

SoHAnimJoint31->addChildren(*SoHAnimSegment32);

SoHAnimHumanoid30->setSkeleton(*SoHAnimJoint31);

SoGroup21->addChild(*SoHAnimHumanoid30);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid35 = new SoHAnimHumanoid();
SoHAnimHumanoid35->X3DNode::setName(QString("SkinIndexedGeometry"));
SoHAnimHumanoid35->setDEF(QString("c_SkinIndexedGeometry"));
SoHAnimHumanoid35->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint36->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint36->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment37 = new SoHAnimSegment();
SoHAnimSegment37->X3DNode::setName(QString("sacrum"));
SoHAnimJoint36->addChildren(*SoHAnimSegment37);

SoHAnimHumanoid35->setSkeleton(*SoHAnimJoint36);

SoIndexedFaceSet* SoIndexedFaceSet38 = new SoIndexedFaceSet();
SoIndexedFaceSet38->setDEF(QString("SkinMeshIFS"));
SoHAnimHumanoid35->setSkin(*SoIndexedFaceSet38);

SoGroup21->addChild(*SoHAnimHumanoid35);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid39 = new SoHAnimHumanoid();
SoHAnimHumanoid39->X3DNode::setName(QString("SkinShapeIndexedGeometry"));
SoHAnimHumanoid39->setDEF(QString("d_SkinShapeIndexedGeometry"));
SoHAnimHumanoid39->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint40->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint40->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment41 = new SoHAnimSegment();
SoHAnimSegment41->X3DNode::setName(QString("sacrum"));
SoHAnimJoint40->addChildren(*SoHAnimSegment41);

SoHAnimHumanoid39->setSkeleton(*SoHAnimJoint40);

SoShape* SoShape42 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet43 = new SoIndexedFaceSet();
SoIndexedFaceSet43->setUSE(QString("SkinMeshIFS"));
SoShape42->setGeometry(*SoIndexedFaceSet43);

SoHAnimHumanoid39->setSkin(*SoShape42);

SoGroup21->addChild(*SoHAnimHumanoid39);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid44 = new SoHAnimHumanoid();
SoHAnimHumanoid44->X3DNode::setName(QString("SkinSwitchShapeIndexedGeometry"));
SoHAnimHumanoid44->setDEF(QString("e_SkinSwitchShapeIndexedGeometry"));
SoHAnimHumanoid44->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment46 = new SoHAnimSegment();
SoHAnimSegment46->X3DNode::setName(QString("sacrum"));
SoHAnimJoint45->addChildren(*SoHAnimSegment46);

SoHAnimHumanoid44->setSkeleton(*SoHAnimJoint45);

//TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>
SoShape* SoShape47 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet48 = new SoIndexedFaceSet();
SoIndexedFaceSet48->setDEF(QString("IndexedSkinMeshIFS"));
SoCoordinate* SoCoordinate49 = new SoCoordinate();
SoCoordinate49->setDEF(QString("SkinMeshCoordinate"));
SoIndexedFaceSet48->setCoord(*SoCoordinate49);

SoShape47->setGeometry(*SoIndexedFaceSet48);

SoHAnimHumanoid44->setSkin(*SoShape47);

SoGroup21->addChild(*SoHAnimHumanoid44);

//similarly for LOD
//==============================
SoHAnimHumanoid* SoHAnimHumanoid50 = new SoHAnimHumanoid();
SoHAnimHumanoid50->X3DNode::setName(QString("SynthesizedSkinShapeIndexedTwoPartGeometry"));
SoHAnimHumanoid50->setDEF(QString("f_SynthesizedSkinShapeIndexedTwoPartGeometry"));
SoHAnimHumanoid50->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint51->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint51->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment52 = new SoHAnimSegment();
SoHAnimSegment52->X3DNode::setName(QString("sacrum"));
SoHAnimJoint51->addChildren(*SoHAnimSegment52);

SoHAnimHumanoid50->setSkeleton(*SoHAnimJoint51);

SoShape* SoShape53 = new SoShape();
SoIndexedFaceSet* SoIndexedFaceSet54 = new SoIndexedFaceSet();
SoIndexedFaceSet54->setDEF(QString("TwoPartIndexedSkinMesh"));
SoCoordinate* SoCoordinate55 = new SoCoordinate();
SoCoordinate55->setDEF(QString("TwoPartSkinMesh"));
SoIndexedFaceSet54->setCoord(*SoCoordinate55);

SoShape53->setGeometry(*SoIndexedFaceSet54);

SoHAnimHumanoid50->setSkin(*SoShape53);

SoGroup21->addChild(*SoHAnimHumanoid50);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid56 = new SoHAnimHumanoid();
SoHAnimHumanoid56->X3DNode::setName(QString("ApparelSkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid56->setDEF(QString("g_ApparelSkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid56->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint57->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint57->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment58 = new SoHAnimSegment();
SoHAnimSegment58->X3DNode::setName(QString("sacrum"));
SoHAnimJoint57->addChildren(*SoHAnimSegment58);

SoHAnimHumanoid56->setSkeleton(*SoHAnimJoint57);

SoShape* SoShape59 = new SoShape();
SoHAnimHumanoid56->setSkin(*SoShape59);

//allow multiple Shape nodes with containerField='apparel', one for each layer of clothing
//TODO proposed for X3D4.1 <Shape containerField='apparel'/>
SoGroup21->addChild(*SoHAnimHumanoid56);

//==============================
SoHAnimHumanoid* SoHAnimHumanoid60 = new SoHAnimHumanoid();
SoHAnimHumanoid60->X3DNode::setName(QString("AnatomySkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid60->setDEF(QString("h_AnatomySkinIndexedGeometryMultipleShapes"));
SoHAnimHumanoid60->setVersion(QString("2.0"));
SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint61->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint61->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment62 = new SoHAnimSegment();
SoHAnimSegment62->X3DNode::setName(QString("sacrum"));
SoHAnimJoint61->addChildren(*SoHAnimSegment62);

SoHAnimHumanoid60->setSkeleton(*SoHAnimJoint61);

//allow multiple Shape nodes with containerField='skin', one for each layer of skin
SoShape* SoShape63 = new SoShape();
SoHAnimHumanoid60->setSkin(*SoShape63);

SoGroup21->addChild(*SoHAnimHumanoid60);

//==============================
SoNode18->addChild(*SoGroup21);

SoViewpoint* SoViewpoint64 = new SoViewpoint();
SoViewpoint64->setDEF(QString("ViewHelpText"));
SoViewpoint64->setDescription(QString("Select text to see website"));
SoViewpoint64->setPosition(new float[]{0.0,0.0,12.0});
SoNode18->addChild(*SoViewpoint64);

//Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip
SoAnchor* SoAnchor65 = new SoAnchor();
SoAnchor65->setDescription(QString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches"));
SoAnchor65->setParameter(new QString[]{QString("target=blank")}, 1);
SoAnchor65->setUrl(new QString[]{QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html")}, 1);
SoShape* SoShape66 = new SoShape();
//TODO adjust Text string and Box size, then set Material transparency='1'
SoText* SoText67 = new SoText();
SoText67->setString(new QString[]{QString("DesignPatternsApparelMedicalSkinLayers.x3d"), QString(""), QString("explores potential apparel approaches")}, 3);
SoFontStyle* SoFontStyle68 = new SoFontStyle();
SoFontStyle68->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle68->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle68->setSize(0.6);
SoFontStyle68->setStyle(QString("BOLD"));
SoText67->setFontStyle(*SoFontStyle68);

SoShape66->setGeometry(*SoText67);

SoVRMLAppearance* SoVRMLAppearance69 = new SoVRMLAppearance();
SoMaterial* SoMaterial70 = new SoMaterial();
SoMaterial70->setDiffuseColor(new float[]{0.9,0.9,0.9});
SoVRMLAppearance69->addChild(*SoMaterial70);

SoShape66->addChild(*SoVRMLAppearance69);

SoAnchor65->addChild(*SoShape66);

SoShape* SoShape71 = new SoShape();
//Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible.
SoBox* SoBox72 = new SoBox();
SoBox72->setSize(new float[]{11.0,2.0,0.001});
SoShape71->setGeometry(*SoBox72);

SoVRMLAppearance* SoVRMLAppearance73 = new SoVRMLAppearance();
SoMaterial* SoMaterial74 = new SoMaterial();
SoMaterial74->setTransparency(1);
SoVRMLAppearance73->addChild(*SoMaterial74);

SoShape71->addChild(*SoVRMLAppearance73);

SoAnchor65->addChild(*SoShape71);

SoNode18->addChild(*SoAnchor65);

SoSceneManager0->setSceneGraph(*SoNode18);

return 0;
}
