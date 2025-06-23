
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
Someta3->setContent(QString("JinLOA4_6.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Jin Hoon Lee and Min Joo Lee"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("Chul Hee Jung and Myeong Won Lee"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("31 March 2011"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translated"));
Someta7->setContent(QString("1 November 2014"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("27 January 2023"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("description"));
Someta9->setContent(QString("Articulated 3D game character designed with a general graphics tool"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("KoreanCharacter00ReadMe.txt"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("KoreanCharactersIllustrated.pdf"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinLOA4.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("Suwon HAnim Converter"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("Gnu Image Manipulation Program, http://www.gimp.org"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("generator"));
Someta17->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("license"));
Someta18->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta18);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode19 = new SoNode();
SoWorldInfo* SoWorldInfo20 = new SoWorldInfo();
SoWorldInfo20->setTitle(QString("JinLOA4_6.x3d"));
SoNode19->addChild(*SoWorldInfo20);

SoNavigationInfo* SoNavigationInfo21 = new SoNavigationInfo();
SoNavigationInfo21->setSpeed(1.5);
SoNode19->addChild(*SoNavigationInfo21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoViewpoint22->setDescription(QString("JinLOA4"));
SoViewpoint22->setPosition(new float[]{0.0,1.0,3.0});
SoNode19->addChild(*SoViewpoint22);

SoHAnimHumanoid* SoHAnimHumanoid23 = new SoHAnimHumanoid();
SoHAnimHumanoid23->X3DNode::setName(QString("JinLOA4"));
SoHAnimHumanoid23->setDEF(QString("hanim_JinLOA4"));
SoHAnimHumanoid23->setLoa(4);
SoHAnimHumanoid23->setScale(new float[]{0.0225,0.0225,0.0225});
SoHAnimHumanoid23->setVersion(QString("2.0"));
SoMetadataSet* SoMetadataSet24 = new SoMetadataSet();
SoMetadataSet24->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet24->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString25 = new SoMetadataString();
SoMetadataString25->X3DNode::setName(QString("authorName"));
SoMetadataString25->setValue(new QString[]{QString("Jin Hoon Lee and Min Joo Lee, Chul Hee Jung and Myeong Won Lee")}, 1);
SoMetadataSet24->setValue((X3DNode *)&SoMetadataString25);

SoMetadataString* SoMetadataString26 = new SoMetadataString();
SoMetadataString26->X3DNode::setName(QString("authorEmail"));
SoMetadataString26->setValue(new QString[]{QString("myeongwonlee@gmail.com")}, 1);
SoMetadataSet24->setValue((X3DNode *)&SoMetadataString26);

SoMetadataString* SoMetadataString27 = new SoMetadataString();
SoMetadataString27->X3DNode::setName(QString("creationDate"));
SoMetadataString27->setValue(new QString[]{QString("31 March 2011")}, 1);
SoMetadataSet24->setValue((X3DNode *)&SoMetadataString27);

SoMetadataString* SoMetadataString28 = new SoMetadataString();
SoMetadataString28->X3DNode::setName(QString("gender"));
SoMetadataString28->setValue(new QString[]{QString("female")}, 1);
SoMetadataSet24->setValue((X3DNode *)&SoMetadataString28);

SoMetadataFloat* SoMetadataFloat29 = new SoMetadataFloat();
SoMetadataFloat29->X3DNode::setName(QString("height"));
SoMetadataFloat29->setValue(new float[]{1.5}, 1);
SoMetadataSet24->setValue((X3DNode *)&SoMetadataFloat29);

SoMetadataString* SoMetadataString30 = new SoMetadataString();
SoMetadataString30->X3DNode::setName(QString("humanoidVersion"));
SoMetadataString30->setValue(new QString[]{QString("2.0")}, 1);
SoMetadataSet24->setValue((X3DNode *)&SoMetadataString30);

SoHAnimHumanoid23->setMetadata(*SoMetadataSet24);

SoHAnimJoint* SoHAnimJoint31 = new SoHAnimJoint();
SoHAnimJoint31->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint31->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint31->setCenter(new float[]{0.0,36.709999,-0.7076});
SoHAnimJoint31->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint31->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment32 = new SoHAnimSegment();
SoHAnimSegment32->X3DNode::setName(QString("sacrum"));
SoHAnimSegment32->setDEF(QString("hanim_sacrum"));
SoTransform* SoTransform33 = new SoTransform();
SoTransform33->setTranslation(new float[]{0.0,36.709999,-0.7076});
SoShape* SoShape34 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoMaterial* SoMaterial36 = new SoMaterial();
SoMaterial36->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance35->addChild(*SoMaterial36);

SoImageTexture* SoImageTexture37 = new SoImageTexture();
SoImageTexture37->setDEF(QString("JinLOA4TextureAtlas"));
SoImageTexture37->setUrl(new QString[]{QString("images/Jin.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png")}, 2);
SoVRMLAppearance35->addChild(*SoImageTexture37);

SoShape34->addChild(*SoVRMLAppearance35);

SoIndexedFaceSet* SoIndexedFaceSet38 = new SoIndexedFaceSet();
SoIndexedFaceSet38->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoIndexedFaceSet38->setCreaseAngle(3.14159);
SoIndexedFaceSet38->setTexCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoCoordinate* SoCoordinate39 = new SoCoordinate();
SoCoordinate39->setPoint(new float[]{0.0,1.053,0.0273,0.0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.875,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0.0,0.9123,0.596,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.875,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0.0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.98,0.5267,-0.4285,-1.132,0.5267,0.0273,-0.98,0.5267,0.483,-0.5658,0.5267,0.6985,0.0,0.5267,0.8206,0.5658,0.5267,0.6985,0.98,0.5267,0.483,1.132,0.5267,0.0273,0.98,0.5267,-0.4285,0.5658,0.5267,-0.7621,0.0,0.0,-0.9616,-0.6534,0.0,-0.8206,-1.132,0.0,-0.4353,-1.307,0.0,0.0273,-1.132,0.0,0.5536,-0.6534,0.0,0.8206,0.0,0.0,0.9616,0.6534,0.0,0.8206,1.132,0.0,0.5536,1.307,0.0,0.0273,1.132,0.0,-0.4353,0.6534,0.0,-0.8206,0.0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.98,-0.5267,-0.3648,-1.132,-0.5267,0.0273,-0.98,-0.5267,0.483,-0.5658,-0.5267,0.6985,0.0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.98,-0.5267,0.483,1.132,-0.5267,0.0273,0.98,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0.0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.483,0.0,-0.9123,0.5536,0.3267,-0.9123,0.483,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0.0,-1.053,0.0273}, 186);
SoIndexedFaceSet38->setCoord(*SoCoordinate39);

SoTextureCoordinate* SoTextureCoordinate40 = new SoTextureCoordinate();
SoTextureCoordinate40->setPoint(new float[]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398}, 124);
SoIndexedFaceSet38->setTexCoord(*SoTextureCoordinate40);

SoShape34->setGeometry(*SoIndexedFaceSet38);

SoTransform33->addChild(*SoShape34);

SoHAnimSegment32->addChild(*SoTransform33);

SoHAnimJoint31->addChildren(*SoHAnimSegment32);

SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint41->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint41->setCenter(new float[]{0.0,31.43,-0.7076});
SoHAnimJoint41->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint41->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment42 = new SoHAnimSegment();
SoHAnimSegment42->X3DNode::setName(QString("pelvis"));
SoHAnimSegment42->setDEF(QString("hanim_pelvis"));
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setTranslation(new float[]{0.0,31.43,-0.7076});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance45->addChild(*SoMaterial46);

SoImageTexture* SoImageTexture47 = new SoImageTexture();
SoImageTexture47->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance45->addChild(*SoImageTexture47);

SoShape44->addChild(*SoVRMLAppearance45);

SoIndexedFaceSet* SoIndexedFaceSet48 = new SoIndexedFaceSet();
SoIndexedFaceSet48->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoIndexedFaceSet48->setCreaseAngle(3.14159);
SoIndexedFaceSet48->setTexCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoCoordinate* SoCoordinate49 = new SoCoordinate();
SoCoordinate49->setPoint(new float[]{0.0,10.79,0.1424,0.0,10.06,-2.825,-2.283,10.06,-2.428,-3.954,10.06,-1.948,-4.566,10.06,0.1424,-3.954,10.06,2.233,-2.283,10.06,2.712,0.0,10.06,3.11,2.283,10.06,2.712,3.954,10.06,2.233,4.566,10.06,0.1424,3.954,10.06,-1.948,2.283,10.06,-2.428,0.0,8.045,-4.614,-2.953,8.045,-3.977,-5.114,8.045,-2.236,-5.905,8.045,0.1424,-5.114,8.045,2.521,-2.953,8.045,3.645,0.0,8.045,4.282,2.953,8.045,3.645,5.114,8.045,2.521,5.905,8.045,0.1424,5.114,8.045,-2.236,2.953,8.045,-3.977,0.0,5.297,-5.018,-3.409,5.297,-4.282,-5.905,5.297,-2.272,-6.819,5.297,0.1424,-5.905,5.297,2.889,-3.409,5.297,4.282,0.0,5.297,5.018,3.409,5.297,4.282,5.905,5.297,2.889,6.819,5.297,0.1424,5.905,5.297,-2.272,3.409,5.297,-4.282,0.0,2.548,-4.282,-2.953,2.548,-3.645,-5.114,2.548,-1.904,-5.905,2.548,0.1424,-5.114,2.548,2.521,-2.953,2.548,3.645,0.0,2.548,4.282,2.953,2.548,3.645,5.114,2.548,2.521,5.905,2.548,0.1424,5.114,2.548,-1.904,2.953,2.548,-3.645,0.0,0.5362,-2.272,-1.705,0.5362,-1.904,-2.953,0.5362,-1.231,-3.409,0.5362,0.1424,-2.953,0.5362,1.516,-1.705,0.5362,2.521,0.0,0.5362,2.889,1.705,0.5362,2.521,2.953,0.5362,1.516,3.409,0.5362,0.1424,2.953,0.5362,-1.231,1.705,0.5362,-1.904,0.0,-0.2003,0.1424}, 186);
SoIndexedFaceSet48->setCoord(*SoCoordinate49);

SoTextureCoordinate* SoTextureCoordinate50 = new SoTextureCoordinate();
SoTextureCoordinate50->setPoint(new float[]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398}, 124);
SoIndexedFaceSet48->setTexCoord(*SoTextureCoordinate50);

SoShape44->setGeometry(*SoIndexedFaceSet48);

SoTransform43->addChild(*SoShape44);

SoHAnimSegment42->addChild(*SoTransform43);

SoHAnimJoint41->addChildren(*SoHAnimSegment42);

SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("l_hip"));
SoHAnimJoint51->setDEF(QString("hanim_l_hip"));
SoHAnimJoint51->setCenter(new float[]{4.207,36.740002,-0.8155});
SoHAnimJoint51->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint51->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment52 = new SoHAnimSegment();
SoHAnimSegment52->X3DNode::setName(QString("l_thigh"));
SoHAnimSegment52->setDEF(QString("hanim_l_thigh"));
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{4.207,36.740002,-0.8155});
SoShape* SoShape54 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance55->addChild(*SoMaterial56);

SoImageTexture* SoImageTexture57 = new SoImageTexture();
SoImageTexture57->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance55->addChild(*SoImageTexture57);

SoShape54->addChild(*SoVRMLAppearance55);

SoIndexedFaceSet* SoIndexedFaceSet58 = new SoIndexedFaceSet();
SoIndexedFaceSet58->setCoordIndex(new int32_t[]{47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1}, 488);
SoIndexedFaceSet58->setCreaseAngle(3.14159);
SoIndexedFaceSet58->setTexCoordIndex(new int32_t[]{5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1}, 488);
SoCoordinate* SoCoordinate59 = new SoCoordinate();
SoCoordinate59->setPoint(new float[]{2.96,-0.0706,0.0,1.643,-0.0706,3.209,-1.316,-0.0706,4.002,-3.367,-0.0706,1.781,-3.367,-0.0706,-1.781,-1.316,-0.0706,-4.002,1.643,-0.0706,-3.209,2.96,-3.82,0.0,1.643,-3.82,3.209,-1.316,-3.82,4.002,-3.367,-3.82,1.781,-3.367,-3.82,-1.781,-1.316,-3.82,-4.002,1.643,-3.82,-3.209,2.96,-10.32,0.0,1.643,-10.32,3.209,-1.316,-10.32,4.002,-3.367,-10.32,1.781,-3.367,-10.32,-1.781,-1.316,-10.32,-4.002,1.643,-10.32,-3.209,3.367,-16.94,0.0,1.897,-16.94,3.582,-1.407,-16.94,4.467,-3.355,-16.94,1.988,-3.355,-16.94,-1.988,-1.407,-16.94,-4.467,1.897,-16.94,-3.582,2.146,-8.794,0.0,1.136,-8.794,2.462,-1.135,-8.794,3.07,-2.633,-8.794,1.366,-2.633,-8.794,-1.366,-1.135,-8.794,-3.07,1.136,-8.794,-2.462,2.156,-15.25,0.0,1.225,-15.25,1.956,-0.8662,-15.25,2.439,-2.543,-15.25,1.085,-2.543,-15.25,-1.085,-0.8662,-15.25,-2.439,1.225,-15.25,-1.956,2.051,1.92,0.0,1.076,1.92,2.375,-1.114,1.92,2.961,-2.87,1.92,1.318,-2.87,1.92,-1.318,-1.114,1.92,-2.961,1.076,1.92,-2.375,1.842,-18.93,0.0,1.03,-18.93,1.873,-0.7965,-18.93,2.295,-2.261,-18.93,1.113,-2.261,-18.93,-0.9478,-0.7965,-18.93,-2.13,1.03,-18.93,-1.708,0.6277,-19.91,0.0,0.2723,-19.91,0.912,-0.5262,-19.91,1.096,-1.167,-19.91,0.5796,-1.167,-19.91,-0.4145,-0.5262,-19.91,-0.9313,0.2723,-19.91,-0.7469}, 189);
SoIndexedFaceSet58->setCoord(*SoCoordinate59);

SoTextureCoordinate* SoTextureCoordinate60 = new SoTextureCoordinate();
SoTextureCoordinate60->setPoint(new float[]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581}, 140);
SoIndexedFaceSet58->setTexCoord(*SoTextureCoordinate60);

SoShape54->setGeometry(*SoIndexedFaceSet58);

SoTransform53->addChild(*SoShape54);

SoHAnimSegment52->addChild(*SoTransform53);

SoHAnimJoint51->addChildren(*SoHAnimSegment52);

SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("l_knee"));
SoHAnimJoint61->setDEF(QString("hanim_l_knee"));
SoHAnimJoint61->setCenter(new float[]{4.116,18.17,-0.8639});
SoHAnimJoint61->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint61->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment62 = new SoHAnimSegment();
SoHAnimSegment62->X3DNode::setName(QString("l_calf"));
SoHAnimSegment62->setDEF(QString("hanim_l_calf"));
SoTransform* SoTransform63 = new SoTransform();
SoTransform63->setTranslation(new float[]{4.116,18.17,-0.8639});
SoShape* SoShape64 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance65 = new SoVRMLAppearance();
SoMaterial* SoMaterial66 = new SoMaterial();
SoMaterial66->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance65->addChild(*SoMaterial66);

SoImageTexture* SoImageTexture67 = new SoImageTexture();
SoImageTexture67->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance65->addChild(*SoImageTexture67);

SoShape64->addChild(*SoVRMLAppearance65);

SoIndexedFaceSet* SoIndexedFaceSet68 = new SoIndexedFaceSet();
SoIndexedFaceSet68->setCoordIndex(new int32_t[]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1}, 300);
SoIndexedFaceSet68->setCreaseAngle(3.14159);
SoIndexedFaceSet68->setTexCoordIndex(new int32_t[]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1}, 300);
SoCoordinate* SoCoordinate69 = new SoCoordinate();
SoCoordinate69->setPoint(new float[]{0.7186,0.9688,0.0234,0.3632,0.9688,0.9354,-0.4353,0.9688,1.12,-1.076,0.9688,0.603,-1.076,0.9688,-0.3911,-0.4353,0.9688,-0.9079,0.3632,0.9688,-0.7235,2.337,-4.613,0.0234,1.46,-3.622,2.019,1.236,-1.628,2.42,2.118,-1.912,0.0234,-0.8111,-3.622,2.567,-0.7468,-1.628,2.903,-2.254,-4.613,1.255,-2.337,-1.912,0.9793,-2.254,-5.383,-1.368,-2.337,-1.912,-0.9325,-0.8111,-5.383,-2.903,-0.7468,-1.912,-2.368,1.46,-5.383,-2.355,1.236,-1.912,-1.885,1.121,-0.0032,1.896,1.933,-0.0032,0.0234,-0.7056,-0.0032,2.318,-2.17,-0.0032,1.136,-2.17,-0.0032,-0.9244,-0.7056,-0.0032,-2.061,1.121,-0.0032,-1.64,1.607,-12.92,0.0032,0.9216,-12.91,1.565,-0.619,-12.91,1.951,-1.854,-12.92,0.8701,-1.854,-12.94,-0.9762,-0.619,-12.94,-1.742,0.9216,-12.94,-1.356,0.7072,-14.53,0.0239,0.3604,-14.53,0.814,-0.4188,-14.53,1.009,-1.044,-14.53,0.4624,-1.044,-14.54,-0.4714,-0.4188,-14.54,-0.8587,0.3604,-14.54,-0.6635}, 126);
SoIndexedFaceSet68->setCoord(*SoCoordinate69);

SoTextureCoordinate* SoTextureCoordinate70 = new SoTextureCoordinate();
SoTextureCoordinate70->setPoint(new float[]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9632,0.3942,0.9402,0.3943,0.8884,0.3943,0.8469,0.3942,0.8469,0.3941,0.8884,0.3941,0.9402,0.3941,0.9325,0.3742,0.9208,0.3742,0.8947,0.3742,0.8737,0.3742,0.8737,0.3741,0.8947,0.3741,0.9208,0.3741}, 84);
SoIndexedFaceSet68->setTexCoord(*SoTextureCoordinate70);

SoShape64->setGeometry(*SoIndexedFaceSet68);

SoTransform63->addChild(*SoShape64);

SoHAnimSegment62->addChild(*SoTransform63);

SoHAnimJoint61->addChildren(*SoHAnimSegment62);

SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint71->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint71->setCenter(new float[]{3.948,4.242,-0.4645});
SoHAnimJoint71->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint71->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment72 = new SoHAnimSegment();
SoHAnimSegment72->X3DNode::setName(QString("l_talus"));
SoHAnimSegment72->setDEF(QString("hanim_l_talus"));
SoTransform* SoTransform73 = new SoTransform();
SoTransform73->setTranslation(new float[]{3.948,4.242,-0.4645});
SoShape* SoShape74 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance75 = new SoVRMLAppearance();
SoMaterial* SoMaterial76 = new SoMaterial();
SoMaterial76->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance75->addChild(*SoMaterial76);

SoImageTexture* SoImageTexture77 = new SoImageTexture();
SoImageTexture77->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance75->addChild(*SoImageTexture77);

SoShape74->addChild(*SoVRMLAppearance75);

SoIndexedFaceSet* SoIndexedFaceSet78 = new SoIndexedFaceSet();
SoIndexedFaceSet78->setCoordIndex(new int32_t[]{13,34,21,-1,21,15,13,-1,9,20,21,-1,21,34,9,-1,0,2,14,-1,14,15,0,-1,30,3,16,-1,16,33,30,-1,3,4,25,-1,25,16,3,-1,22,5,18,-1,18,17,22,-1,5,6,29,-1,29,18,5,-1,6,27,19,-1,7,1,21,-1,21,20,7,-1,1,0,15,-1,15,21,1,-1,15,14,32,-1,32,13,15,-1,33,16,12,-1,12,11,33,-1,25,23,12,-1,12,16,25,-1,17,18,10,-1,10,24,17,-1,18,29,28,-1,28,10,18,-1,19,27,26,-1,26,8,19,-1,4,22,17,-1,17,25,4,-1,25,17,24,-1,24,23,25,-1,20,9,26,-1,26,27,20,-1,6,7,20,-1,20,27,6,-1,29,19,8,-1,8,28,29,-1,6,19,29,-1,1,31,0,-1,0,31,2,-1,31,3,30,-1,3,31,4,-1,4,31,22,-1,22,31,5,-1,5,31,6,-1,6,31,7,-1,7,31,1,-1,2,31,30,-1,14,2,30,-1,30,33,14,-1,32,14,33,-1,33,11,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,26,35,36,-1,36,8,26,-1,8,36,37,-1,37,28,8,-1,28,37,38,-1,38,10,28,-1,10,38,39,-1,39,24,10,-1,24,39,40,-1,40,23,24,-1,23,40,41,-1,41,12,23,-1,12,41,42,-1,42,11,12,-1,11,42,43,-1,43,32,11,-1,32,43,44,-1,44,13,32,-1,13,44,45,-1,45,34,13,-1,34,45,46,-1,46,9,34,-1,9,46,35,-1,35,26,9,-1}, 360);
SoIndexedFaceSet78->setCreaseAngle(3.14159);
SoIndexedFaceSet78->setTexCoordIndex(new int32_t[]{5,34,27,-1,27,12,5,-1,7,28,27,-1,27,34,7,-1,9,10,11,-1,11,12,9,-1,30,13,14,-1,14,33,30,-1,13,15,16,-1,16,14,13,-1,17,18,19,-1,19,20,17,-1,18,21,22,-1,22,19,18,-1,21,23,24,-1,25,26,27,-1,27,28,25,-1,26,9,12,-1,12,27,26,-1,12,11,32,-1,32,5,12,-1,33,14,4,-1,4,3,33,-1,16,8,4,-1,4,14,16,-1,20,19,2,-1,2,6,20,-1,19,22,29,-1,29,2,19,-1,24,23,1,-1,1,0,24,-1,15,17,20,-1,20,16,15,-1,16,20,6,-1,6,8,16,-1,28,7,1,-1,1,23,28,-1,21,25,28,-1,28,23,21,-1,22,24,0,-1,0,29,22,-1,21,24,22,-1,26,31,9,-1,9,31,10,-1,31,13,30,-1,13,31,15,-1,15,31,17,-1,17,31,18,-1,18,31,21,-1,21,31,25,-1,25,31,26,-1,10,31,30,-1,11,10,30,-1,30,33,11,-1,32,11,33,-1,33,3,32,-1,35,46,45,-1,45,44,43,-1,43,42,41,-1,41,40,39,-1,43,41,39,-1,45,43,39,-1,35,45,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,1,35,36,-1,36,0,1,-1,0,36,37,-1,37,29,0,-1,29,37,38,-1,38,2,29,-1,2,38,39,-1,39,6,2,-1,6,39,40,-1,40,8,6,-1,8,40,41,-1,41,4,8,-1,4,41,42,-1,42,3,4,-1,3,42,43,-1,43,32,3,-1,32,43,44,-1,44,5,32,-1,5,44,45,-1,45,34,5,-1,34,45,46,-1,46,7,34,-1,7,46,35,-1,35,1,7,-1}, 360);
SoCoordinate* SoCoordinate79 = new SoCoordinate();
SoCoordinate79->setPoint(new float[]{-0.8393,-0.0174,-1.188,-1.144,-0.1364,-0.2829,-0.3552,0.0498,-1.609,0.871,-0.0001,-1.186,1.125,-0.0898,-0.529,0.7565,-0.0703,0.5621,-0.053,-0.0302,0.8302,-0.7589,-0.0877,0.5643,-0.0732,-1.091,0.9897,-1.025,-1.308,0.5497,0.8955,-1.383,0.5769,0.2622,-1.481,-1.89,1.034,-1.351,-1.37,-1.019,-1.351,-1.414,-0.3452,-0.5115,-1.682,-0.9219,-0.5266,-1.26,0.7956,-0.4862,-1.244,1.31,-1.007,-0.0779,0.7172,-0.6496,0.5797,-0.0234,-0.5209,0.8613,-0.8111,-0.5742,0.5811,-1.266,-0.65,-0.3815,1.115,-0.1083,-0.0507,1.176,-1.652,-0.6627,1.158,-1.659,-0.1435,1.331,-0.9612,-0.5874,-0.5196,-1.198,0.8491,-0.3793,-0.5469,0.7717,0.4065,-1.235,0.8627,0.3849,-0.5846,0.771,0.2393,0.0558,-1.608,-0.037,0.336,-0.3208,-0.293,-1.478,-1.895,0.2103,-0.4984,-1.679,-1.331,-1.587,-0.3858,-0.4364,-2.025,0.6704,-0.0997,-1.904,0.7731,0.2642,-2.055,0.6792,0.6413,-2.205,0.4606,0.8623,-2.494,-0.1471,0.8786,-2.478,-0.6084,0.7666,-2.132,-1.193,0.1384,-2.273,-1.612,-0.2345,-2.279,-1.615,-0.8197,-2.156,-1.228,-1.09,-2.438,-0.3404,-0.8313,-2.145,0.4395}, 141);
SoIndexedFaceSet78->setCoord(*SoCoordinate79);

SoTextureCoordinate* SoTextureCoordinate80 = new SoTextureCoordinate();
SoTextureCoordinate80->setPoint(new float[]{0.227,0.1089,0.2217,0.1285,0.2533,0.0835,0.273,0.1232,0.2824,0.0941,0.2433,0.1632,0.2685,0.0797,0.2165,0.148,0.2759,0.0832,0.2428,0.156,0.2563,0.142,0.2584,0.1419,0.2431,0.1588,0.2715,0.1062,0.2761,0.1011,0.2698,0.09,0.2775,0.078,0.2629,0.0863,0.248,0.0935,0.2498,0.0895,0.2702,0.0748,0.2296,0.1148,0.2397,0.101,0.2249,0.1266,0.2295,0.1126,0.2207,0.1406,0.2252,0.1591,0.2245,0.1634,0.2202,0.1406,0.2407,0.0951,0.2662,0.1249,0.2599,0.1313,0.2623,0.1418,0.2691,0.1232,0.2231,0.166,0.2217,0.1285,0.227,0.1089,0.2407,0.0951,0.2533,0.0835,0.2685,0.0797,0.2759,0.0832,0.2824,0.0941,0.273,0.1232,0.2623,0.1418,0.2433,0.1632,0.2231,0.166,0.2165,0.148}, 94);
SoIndexedFaceSet78->setTexCoord(*SoTextureCoordinate80);

SoShape74->setGeometry(*SoIndexedFaceSet78);

SoTransform73->addChild(*SoShape74);

SoHAnimSegment72->addChild(*SoTransform73);

SoHAnimJoint71->addChildren(*SoHAnimSegment72);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("l_talocalcaneonavicular"));
SoHAnimJoint81->setDEF(QString("hanim_l_talocalcaneonavicular"));
SoHAnimJoint81->setCenter(new float[]{3.48,1.64,0.2162});
SoHAnimJoint81->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint81->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment82 = new SoHAnimSegment();
SoHAnimSegment82->X3DNode::setName(QString("l_navicular"));
SoHAnimSegment82->setDEF(QString("hanim_l_navicular"));
SoTransform* SoTransform83 = new SoTransform();
SoTransform83->setTranslation(new float[]{3.48,1.64,0.2162});
SoShape* SoShape84 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance85 = new SoVRMLAppearance();
SoMaterial* SoMaterial86 = new SoMaterial();
SoMaterial86->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance85->addChild(*SoMaterial86);

SoImageTexture* SoImageTexture87 = new SoImageTexture();
SoImageTexture87->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance85->addChild(*SoImageTexture87);

SoShape84->addChild(*SoVRMLAppearance85);

SoIndexedFaceSet* SoIndexedFaceSet88 = new SoIndexedFaceSet();
SoIndexedFaceSet88->setCoordIndex(new int32_t[]{7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1}, 352);
SoIndexedFaceSet88->setCreaseAngle(3.14159);
SoIndexedFaceSet88->setTexCoordIndex(new int32_t[]{7,12,11,-1,11,6,7,-1,1,2,18,-1,18,17,1,-1,12,7,5,-1,5,10,12,-1,2,6,11,-1,5,0,13,-1,13,10,5,-1,1,17,14,-1,14,3,1,-1,11,18,2,-1,4,8,16,-1,16,15,4,-1,8,9,16,-1,3,14,16,-1,16,9,3,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,20,19,28,-1,24,20,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,38,43,42,-1,42,39,38,-1,37,36,35,-1,37,35,34,-1,34,33,32,-1,37,34,32,-1,32,31,30,-1,37,32,30,-1,37,30,29,-1,1,19,20,-1,20,2,1,-1,2,20,21,-1,21,6,2,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,5,7,-1,5,23,24,-1,24,0,5,-1,38,45,44,-1,44,43,38,-1,4,25,26,-1,26,8,4,-1,8,26,27,-1,27,9,8,-1,9,27,28,-1,28,3,9,-1,3,28,19,-1,19,1,3,-1,10,29,30,-1,30,12,10,-1,12,30,31,-1,31,11,12,-1,11,31,32,-1,32,18,11,-1,18,32,33,-1,33,17,18,-1,17,33,34,-1,34,14,17,-1,14,34,35,-1,35,16,14,-1,16,35,36,-1,36,15,16,-1,42,41,40,-1,40,39,42,-1,13,37,29,-1,29,10,13,-1,0,38,39,-1,39,13,0,-1,13,39,40,-1,40,37,13,-1,37,40,41,-1,41,36,37,-1,36,41,42,-1,42,15,36,-1,15,42,43,-1,43,4,15,-1,4,43,44,-1,44,25,4,-1,25,44,45,-1,45,24,25,-1,24,45,38,-1,38,0,24,-1}, 352);
SoCoordinate* SoCoordinate89 = new SoCoordinate();
SoCoordinate89->setPoint(new float[]{0.8972,0.8045,0.6788,-0.6876,-1.034,0.429,-0.8213,0.0037,0.4098,-0.5423,-1.396,0.5699,0.8663,-1.47,0.683,0.3971,1.184,0.6443,-0.6772,0.6655,0.5173,-0.1187,1.052,0.7179,0.3868,-1.485,0.6432,-0.1381,-1.479,0.7246,0.394,1.511,0.309,-0.5576,1.294,-0.131,-0.0524,1.404,0.1684,0.8736,1.366,0.182,-0.6272,-1.476,-0.1356,0.89,-1.511,-0.1477,0.1521,-1.51,-0.0848,-0.7688,-1.064,-0.1614,-0.8972,-0.0133,-0.1652,-0.6077,-0.9851,0.7902,-0.7367,-0.2268,0.7715,-0.6074,0.227,0.877,-0.1008,0.4934,1.071,0.3446,0.5793,0.9883,0.7568,0.3427,1.012,0.728,-1.256,1.016,0.3573,-1.265,0.9905,-0.1551,-1.261,1.074,-0.4926,-1.208,0.9273,0.4349,1.327,-0.2949,0.049,1.235,-0.4281,-0.3331,1.155,-0.7124,-0.6313,0.0115,-0.7287,-0.5112,-0.976,-0.7205,-0.4265,-1.229,-0.6873,0.2055,-1.256,-0.651,0.7238,-1.253,-0.736,0.7084,1.253,-0.4372,1.285,0.6426,0.462,1.266,0.8934,0.1006,1.139,1.106,-0.2956,1.153,-1.137,-0.563,1.28,-1.327,-0.1294,1.261,-1.289,0.5282,1.182,-1.352,0.8393,1.206,0.2601,0.8352}, 138);
SoIndexedFaceSet88->setCoord(*SoCoordinate89);

SoTextureCoordinate* SoTextureCoordinate90 = new SoTextureCoordinate();
SoTextureCoordinate90->setPoint(new float[]{0.2314,0.0879,0.21,0.1541,0.2053,0.1595,0.2104,0.1443,0.2271,0.0958,0.2224,0.1067,0.2032,0.149,0.2132,0.1285,0.2197,0.1123,0.2163,0.1174,0.227,0.1089,0.2165,0.148,0.2217,0.1285,0.2407,0.0951,0.2178,0.1526,0.2363,0.0929,0.2213,0.1179,0.2171,0.1588,0.2129,0.1643,0.21,0.1541,0.2053,0.1595,0.2032,0.149,0.2132,0.1285,0.2224,0.1067,0.2314,0.0879,0.2271,0.0958,0.2197,0.1123,0.2163,0.1174,0.2104,0.1443,0.227,0.1089,0.2217,0.1285,0.2165,0.148,0.2129,0.1643,0.2171,0.1588,0.2178,0.1526,0.2213,0.1179,0.2363,0.0929,0.2407,0.0951,0.2314,0.0879,0.2407,0.0951,0.2407,0.0951,0.2363,0.0929,0.2363,0.0929,0.2271,0.0958,0.2271,0.0958,0.2314,0.0879}, 92);
SoIndexedFaceSet88->setTexCoord(*SoTextureCoordinate90);

SoShape84->setGeometry(*SoIndexedFaceSet88);

SoTransform83->addChild(*SoShape84);

SoHAnimSegment82->addChild(*SoTransform83);

SoHAnimJoint81->addChildren(*SoHAnimSegment82);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("l_cuneonavicular_1"));
SoHAnimJoint91->setDEF(QString("hanim_l_cuneonavicular_1"));
SoHAnimJoint91->setCenter(new float[]{2.994,1.427,0.8174});
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment92 = new SoHAnimSegment();
SoHAnimSegment92->X3DNode::setName(QString("l_cuneiform_1"));
SoHAnimSegment92->setDEF(QString("hanim_l_cuneiform_1"));
SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setTranslation(new float[]{2.994,1.427,0.8174});
SoShape* SoShape94 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance95 = new SoVRMLAppearance();
SoMaterial* SoMaterial96 = new SoMaterial();
SoMaterial96->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance95->addChild(*SoMaterial96);

SoImageTexture* SoImageTexture97 = new SoImageTexture();
SoImageTexture97->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance95->addChild(*SoImageTexture97);

SoShape94->addChild(*SoVRMLAppearance95);

SoIndexedFaceSet* SoIndexedFaceSet98 = new SoIndexedFaceSet();
SoIndexedFaceSet98->setCoordIndex(new int32_t[]{0,12,4,-1,1,0,6,-1,6,7,1,-1,10,12,0,-1,0,1,10,-1,1,2,11,-1,11,10,1,-1,8,3,2,-1,2,5,8,-1,11,2,13,-1,12,15,4,-1,9,6,0,-1,0,4,9,-1,1,7,5,-1,5,2,1,-1,3,14,13,-1,13,2,3,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,3,16,17,-1,17,14,3,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,4,15,-1,4,19,20,-1,20,9,4,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1}, 216);
SoIndexedFaceSet98->setCreaseAngle(3.14159);
SoIndexedFaceSet98->setTexCoordIndex(new int32_t[]{0,12,1,-1,2,0,6,-1,6,7,2,-1,10,12,0,-1,0,2,10,-1,2,3,11,-1,11,10,2,-1,8,4,3,-1,3,5,8,-1,11,3,13,-1,12,15,1,-1,9,6,0,-1,0,1,9,-1,2,7,5,-1,5,3,2,-1,4,14,13,-1,13,3,4,-1,24,23,22,-1,25,24,22,-1,28,25,22,-1,15,12,10,-1,10,11,13,-1,15,10,13,-1,14,15,13,-1,16,19,18,-1,18,17,16,-1,21,20,19,-1,19,16,21,-1,4,16,17,-1,17,14,4,-1,14,17,18,-1,18,15,14,-1,15,18,19,-1,19,1,15,-1,1,19,20,-1,20,9,1,-1,28,27,26,-1,26,25,28,-1,8,21,16,-1,16,4,8,-1,6,22,23,-1,23,7,6,-1,7,23,24,-1,24,5,7,-1,5,24,25,-1,25,8,5,-1,8,25,26,-1,26,21,8,-1,21,26,27,-1,27,20,21,-1,20,27,28,-1,28,9,20,-1,9,28,22,-1,22,6,9,-1}, 216);
SoCoordinate* SoCoordinate99 = new SoCoordinate();
SoCoordinate99->setPoint(new float[]{0.0007,-1.109,0.4253,-0.2643,-0.769,0.4516,-0.31,0.2508,0.3964,0.3018,0.9142,0.48,0.2988,-1.247,0.4693,-0.4654,0.1787,1.077,-0.3013,-1.107,1.108,-0.5181,-0.7521,1.038,0.2439,0.5544,1.187,0.2465,-1.253,1.201,-0.2008,-0.8201,-0.1723,-0.3345,0.2174,-0.1914,-0.0554,-1.183,-0.0314,-0.1904,0.8791,-0.084,0.3681,1.266,0.1166,0.3487,-1.266,0.1234,0.5607,0.81,0.4342,0.5963,0.9711,0.2685,0.5792,-1.134,0.2739,0.5494,-1.122,0.4935,0.506,-1.127,1.102,0.5033,0.4765,1.089,-0.2424,-0.982,1.47,-0.4192,-0.7263,1.408,-0.3724,0.0098,1.445,0.2492,0.2999,1.549,0.3973,0.2594,1.478,0.3998,-1.02,1.489,0.2312,-1.094,1.562}, 87);
SoIndexedFaceSet98->setCoord(*SoCoordinate99);

SoTextureCoordinate* SoTextureCoordinate100 = new SoTextureCoordinate();
SoTextureCoordinate100->setPoint(new float[]{0.2027,0.1355,0.2132,0.1171,0.1958,0.1447,0.1899,0.1499,0.2047,0.1286,0.1825,0.1473,0.1858,0.1369,0.1864,0.1452,0.1953,0.1244,0.2059,0.1148,0.21,0.1541,0.2053,0.1595,0.2104,0.1443,0.2032,0.149,0.2132,0.1285,0.2163,0.1174,0.2047,0.1286,0.2132,0.1285,0.2163,0.1174,0.2132,0.1171,0.2059,0.1148,0.1953,0.1244,0.1858,0.1369,0.1864,0.1452,0.1825,0.1473,0.1953,0.1244,0.1953,0.1244,0.2059,0.1148,0.2059,0.1148}, 58);
SoIndexedFaceSet98->setTexCoord(*SoTextureCoordinate100);

SoShape94->setGeometry(*SoIndexedFaceSet98);

SoTransform93->addChild(*SoShape94);

SoHAnimSegment92->addChild(*SoTransform93);

SoHAnimJoint91->addChildren(*SoHAnimSegment92);

SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->X3DNode::setName(QString("l_tarsometatarsal_1"));
SoHAnimJoint101->setDEF(QString("hanim_l_tarsometatarsal_1"));
SoHAnimJoint101->setCenter(new float[]{2.872,1.033,1.964});
SoHAnimJoint101->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint101->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment102 = new SoHAnimSegment();
SoHAnimSegment102->X3DNode::setName(QString("l_metatarsal_1"));
SoHAnimSegment102->setDEF(QString("hanim_l_metatarsal_1"));
SoTransform* SoTransform103 = new SoTransform();
SoTransform103->setTranslation(new float[]{2.872,1.033,1.964});
SoShape* SoShape104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance105 = new SoVRMLAppearance();
SoMaterial* SoMaterial106 = new SoMaterial();
SoMaterial106->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance105->addChild(*SoMaterial106);

SoImageTexture* SoImageTexture107 = new SoImageTexture();
SoImageTexture107->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance105->addChild(*SoImageTexture107);

SoShape104->addChild(*SoVRMLAppearance105);

SoIndexedFaceSet* SoIndexedFaceSet108 = new SoIndexedFaceSet();
SoIndexedFaceSet108->setCoordIndex(new int32_t[]{0,11,14,-1,5,7,2,-1,2,0,5,-1,1,10,9,-1,9,2,1,-1,15,8,20,-1,20,23,15,-1,3,4,19,-1,19,21,3,-1,13,4,10,-1,10,18,13,-1,12,1,6,-1,6,16,12,-1,6,1,2,-1,2,7,6,-1,5,0,14,-1,14,17,5,-1,10,4,3,-1,3,9,10,-1,9,11,0,-1,0,2,9,-1,10,1,12,-1,12,18,10,-1,8,11,9,-1,9,3,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,3,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,29,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1}, 360);
SoIndexedFaceSet108->setCreaseAngle(3.14159);
SoIndexedFaceSet108->setTexCoordIndex(new int32_t[]{1,11,14,-1,5,7,2,-1,2,1,5,-1,3,10,9,-1,9,2,3,-1,15,8,20,-1,20,23,15,-1,0,4,19,-1,19,21,0,-1,13,4,10,-1,10,18,13,-1,12,3,6,-1,6,16,12,-1,6,3,2,-1,2,7,6,-1,5,1,14,-1,14,17,5,-1,10,4,0,-1,0,9,10,-1,9,11,1,-1,1,2,9,-1,10,3,12,-1,12,18,10,-1,8,11,9,-1,9,0,8,-1,8,15,14,-1,14,11,8,-1,21,20,8,-1,8,0,21,-1,13,22,19,-1,19,4,13,-1,34,33,39,-1,34,39,36,-1,34,36,35,-1,42,41,40,-1,42,40,46,-1,45,42,46,-1,31,30,29,-1,29,32,31,-1,32,14,24,-1,24,29,28,-1,28,25,24,-1,25,28,27,-1,27,26,25,-1,18,24,25,-1,25,13,18,-1,13,25,26,-1,26,22,13,-1,45,44,43,-1,43,42,45,-1,23,27,28,-1,28,15,23,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,17,14,-1,39,38,37,-1,37,36,39,-1,16,31,32,-1,32,12,16,-1,12,32,24,-1,24,18,12,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,6,7,-1,6,35,36,-1,36,16,6,-1,16,36,37,-1,37,31,16,-1,31,37,38,-1,38,30,31,-1,30,38,39,-1,39,17,30,-1,17,39,33,-1,33,5,17,-1,21,40,41,-1,41,20,21,-1,20,41,42,-1,42,23,20,-1,23,42,43,-1,43,27,23,-1,27,43,44,-1,44,26,27,-1,26,44,45,-1,45,22,26,-1,22,45,46,-1,46,19,22,-1,19,46,40,-1,40,21,19,-1}, 360);
SoCoordinate* SoCoordinate109 = new SoCoordinate();
SoCoordinate109->setPoint(new float[]{-0.562,-0.9482,1.384,-0.6218,0.234,1.681,-0.7597,-0.537,1.629,-0.489,-0.3521,0.1795,-0.411,0.5415,0.3114,-0.5231,-0.8677,2.175,-0.5335,0.0824,2.208,-0.6227,-0.537,2.28,-0.2889,-0.7119,0.2522,-0.7121,-0.4572,1.055,-0.5707,0.3593,1.151,-0.5319,-0.9316,0.9896,0.3801,0.3685,1.628,0.3394,0.7871,0.4484,0.3842,-0.9482,1.527,0.3046,-0.8633,0.3382,0.4577,0.1663,2.193,0.4594,-0.868,2.156,0.3457,0.5783,1.066,-0.344,0.5726,-0.0702,-0.1799,-0.7129,-0.039,-0.3967,-0.3582,-0.1085,0.3653,0.9482,0.0401,0.3679,-0.8593,0.054,0.6136,0.3929,0.9908,0.6118,0.6022,0.3719,0.6079,0.6587,0.2275,0.617,-0.6662,0.2386,0.5774,-0.6674,0.3377,0.6534,-0.7513,1.513,0.7048,-0.6945,1.958,0.7047,0.029,1.984,0.6466,0.1836,1.552,-0.3548,-0.7559,2.4,-0.4377,-0.5059,2.486,-0.3635,-0.0376,2.427,0.4603,0.0258,2.414,0.6656,-0.078,2.241,0.6657,-0.6249,2.219,0.4618,-0.7561,2.383,-0.0182,-0.2985,-0.3352,0.1101,-0.5117,-0.2822,0.4889,-0.6114,-0.2535,0.5739,-0.5388,-0.1727,0.5662,0.5554,-0.1816,0.4934,0.669,-0.2851,0.0215,0.4249,-0.2986}, 141);
SoIndexedFaceSet108->setCoord(*SoCoordinate109);

SoTextureCoordinate* SoTextureCoordinate110 = new SoTextureCoordinate();
SoTextureCoordinate110->setPoint(new float[]{0.177,0.1457,0.1567,0.1378,0.1506,0.1431,0.1539,0.1386,0.1751,0.1447,0.1523,0.1336,0.1493,0.1348,0.1463,0.1377,0.1689,0.1382,0.1638,0.1444,0.1645,0.1416,0.1607,0.138,0.1731,0.1071,0.1859,0.1202,0.175,0.1048,0.1985,0.1126,0.1682,0.1025,0.1699,0.1017,0.1795,0.1136,0.1825,0.1473,0.1858,0.1369,0.1864,0.1452,0.1953,0.1244,0.2059,0.1148,0.1795,0.1136,0.1859,0.1202,0.1953,0.1244,0.2059,0.1148,0.1985,0.1126,0.175,0.1048,0.1699,0.1017,0.1682,0.1025,0.1731,0.1071,0.1523,0.1336,0.1463,0.1377,0.1493,0.1348,0.1682,0.1025,0.1682,0.1025,0.1699,0.1017,0.1699,0.1017,0.1864,0.1452,0.1858,0.1369,0.2059,0.1148,0.2059,0.1148,0.1953,0.1244,0.1953,0.1244,0.1825,0.1473}, 94);
SoIndexedFaceSet108->setTexCoord(*SoTextureCoordinate110);

SoShape104->setGeometry(*SoIndexedFaceSet108);

SoTransform103->addChild(*SoShape104);

SoHAnimSegment102->addChild(*SoTransform103);

SoHAnimJoint101->addChildren(*SoHAnimSegment102);

SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->X3DNode::setName(QString("l_metatarsophalangeal_1"));
SoHAnimJoint111->setDEF(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimJoint111->setCenter(new float[]{2.761,0.6411,4.161});
SoHAnimJoint111->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint111->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment112 = new SoHAnimSegment();
SoHAnimSegment112->X3DNode::setName(QString("l_tarsal_proximal_phalanx_1"));
SoHAnimSegment112->setDEF(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoTransform* SoTransform113 = new SoTransform();
SoTransform113->setTranslation(new float[]{2.761,0.6411,4.161});
SoShape* SoShape114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance115 = new SoVRMLAppearance();
SoMaterial* SoMaterial116 = new SoMaterial();
SoMaterial116->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance115->addChild(*SoMaterial116);

SoImageTexture* SoImageTexture117 = new SoImageTexture();
SoImageTexture117->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance115->addChild(*SoImageTexture117);

SoShape114->addChild(*SoVRMLAppearance115);

SoIndexedFaceSet* SoIndexedFaceSet118 = new SoIndexedFaceSet();
SoIndexedFaceSet118->setCoordIndex(new int32_t[]{9,16,17,-1,17,10,9,-1,11,8,2,-1,2,1,11,-1,7,3,2,-1,2,8,7,-1,7,13,4,-1,4,3,7,-1,12,5,4,-1,4,13,12,-1,5,12,0,-1,0,6,5,-1,0,11,1,-1,1,6,0,-1,14,15,19,-1,19,20,14,-1,14,10,17,-1,17,15,14,-1,9,21,18,-1,18,16,9,-1,7,8,9,-1,9,10,7,-1,8,11,21,-1,21,9,8,-1,12,13,14,-1,14,20,12,-1,13,7,10,-1,10,14,13,-1,11,22,21,-1,0,12,23,-1,23,24,0,-1,11,0,24,-1,24,22,11,-1,23,12,20,-1,37,42,41,-1,41,40,39,-1,37,41,39,-1,38,37,39,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,27,26,25,-1,28,27,25,-1,28,25,29,-1,35,31,30,-1,30,36,35,-1,17,25,26,-1,26,15,17,-1,15,26,27,-1,27,19,15,-1,19,27,28,-1,28,18,19,-1,18,28,29,-1,29,16,18,-1,16,29,25,-1,25,17,16,-1,19,30,31,-1,31,20,19,-1,20,31,32,-1,32,23,20,-1,23,32,33,-1,33,24,23,-1,24,33,34,-1,34,22,24,-1,22,34,35,-1,35,21,22,-1,21,35,36,-1,36,18,21,-1,18,36,30,-1,30,19,18,-1,2,37,38,-1,38,1,2,-1,1,38,39,-1,39,6,1,-1,6,39,40,-1,40,5,6,-1,5,40,41,-1,41,4,5,-1,4,41,42,-1,42,3,4,-1,3,42,37,-1,37,2,3,-1}, 328);
SoIndexedFaceSet118->setCreaseAngle(3.14159);
SoIndexedFaceSet118->setTexCoordIndex(new int32_t[]{2,28,29,-1,29,1,2,-1,11,13,4,-1,4,5,11,-1,10,6,4,-1,4,13,10,-1,10,12,7,-1,7,6,10,-1,14,8,7,-1,7,12,14,-1,8,14,3,-1,3,9,8,-1,3,11,5,-1,5,9,3,-1,0,27,31,-1,31,33,0,-1,0,1,29,-1,29,27,0,-1,2,35,30,-1,30,28,2,-1,15,16,17,-1,17,18,15,-1,16,19,34,-1,34,17,16,-1,20,21,22,-1,22,32,20,-1,21,23,24,-1,24,22,21,-1,19,36,34,-1,25,20,37,-1,37,39,25,-1,19,26,38,-1,38,36,19,-1,37,20,32,-1,52,57,56,-1,56,55,54,-1,52,56,54,-1,53,52,54,-1,50,49,48,-1,50,48,47,-1,46,50,47,-1,42,41,40,-1,43,42,40,-1,43,40,44,-1,50,46,45,-1,45,51,50,-1,29,40,41,-1,41,27,29,-1,27,41,42,-1,42,31,27,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,28,30,-1,28,44,40,-1,40,29,28,-1,31,45,46,-1,46,33,31,-1,32,46,47,-1,47,37,32,-1,37,47,48,-1,48,39,37,-1,38,48,49,-1,49,36,38,-1,36,49,50,-1,50,34,36,-1,35,50,51,-1,51,30,35,-1,30,51,45,-1,45,31,30,-1,4,52,53,-1,53,5,4,-1,5,53,54,-1,54,9,5,-1,9,54,55,-1,55,8,9,-1,8,55,56,-1,56,7,8,-1,7,56,57,-1,57,6,7,-1,6,57,52,-1,52,4,6,-1}, 328);
SoCoordinate* SoCoordinate119 = new SoCoordinate();
SoCoordinate119->setPoint(new float[]{0.5023,0.0206,0.5225,0.5069,0.3389,0.9722,-0.5239,0.3546,0.9857,-0.5823,-0.1222,0.9958,-0.5025,-0.5579,0.9554,0.5186,-0.5579,0.958,0.5816,-0.1339,0.9847,-0.5039,-0.0963,0.5275,-0.4495,0.4588,0.4262,-0.3875,0.4353,0.2405,-0.4682,-0.1454,0.2855,0.4437,0.4412,0.4574,0.4398,-0.4616,0.472,-0.4332,-0.4607,0.456,-0.3649,-0.4415,0.2162,-0.4121,-0.4761,-0.0214,-0.4225,0.4741,0.0111,-0.5118,-0.1454,0.0829,0.5687,0.5579,-0.0036,0.5704,-0.4763,-0.041,0.5628,-0.4412,0.2556,0.5641,0.4495,0.2541,0.5671,0.3479,0.4508,0.5823,-0.2729,0.4646,0.5691,0.0505,0.5098,-0.3979,-0.127,-0.1621,-0.3346,-0.3422,-0.2601,0.4303,-0.3427,-0.2664,0.429,0.4294,-0.2381,-0.3281,0.3657,-0.237,0.7564,-0.2649,-0.0329,0.752,-0.2445,0.139,0.7633,-0.147,0.2601,0.7556,0.0405,0.2863,0.7545,0.2128,0.2521,0.7527,0.2716,0.1381,0.7554,0.3345,-0.0112,-0.4054,0.215,1.213,0.3954,0.2028,1.201,0.4497,-0.1402,1.217,0.4063,-0.4314,1.193,-0.3905,-0.4313,1.189,-0.4468,-0.1239,1.226}, 129);
SoIndexedFaceSet118->setCoord(*SoCoordinate119);

SoTextureCoordinate* SoTextureCoordinate120 = new SoTextureCoordinate();
SoTextureCoordinate120->setPoint(new float[]{0.148,0.1294,0.142,0.1322,0.1446,0.131,0.1613,0.0957,0.1341,0.1263,0.1554,0.0919,0.1317,0.1272,0.1363,0.1268,0.1571,0.0927,0.1559,0.0889,0.1392,0.1292,0.16,0.0958,0.1443,0.128,0.1415,0.1284,0.1616,0.0962,0.1346,0.0953,0.1273,0.0961,0.126,0.0891,0.1339,0.0889,0.1175,0.0992,0.228,0.0809,0.2186,0.0857,0.2172,0.0848,0.2097,0.0859,0.2098,0.0901,0.2285,0.0738,0.1152,0.1058,0.1523,0.1336,0.1493,0.1348,0.1463,0.1377,0.1682,0.1025,0.1699,0.1017,0.2293,0.0837,0.1648,0.0986,0.112,0.093,0.1632,0.098,0.113,0.0993,0.2302,0.0796,0.1153,0.1053,0.2293,0.0736,0.1463,0.1377,0.1523,0.1336,0.1699,0.1017,0.1682,0.1025,0.1493,0.1348,0.1699,0.1017,0.1648,0.0986,0.2302,0.0796,0.2293,0.0736,0.113,0.0993,0.112,0.093,0.1682,0.1025,0.1341,0.1263,0.1554,0.0919,0.1559,0.0889,0.1571,0.0927,0.1363,0.1268,0.1317,0.1272}, 116);
SoIndexedFaceSet118->setTexCoord(*SoTextureCoordinate120);

SoShape114->setGeometry(*SoIndexedFaceSet118);

SoTransform113->addChild(*SoShape114);

SoHAnimSegment112->addChild(*SoTransform113);

SoHAnimJoint111->addChildren(*SoHAnimSegment112);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_1"));
SoHAnimJoint121->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_1"));
SoHAnimJoint121->setCenter(new float[]{2.761,0.5394,5.125});
SoHAnimJoint121->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint121->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment122 = new SoHAnimSegment();
SoHAnimSegment122->X3DNode::setName(QString("l_tarsal_distal_phalanx_1"));
SoHAnimSegment122->setDEF(QString("hanim_l_tarsal_distal_phalanx_1"));
SoTransform* SoTransform123 = new SoTransform();
SoTransform123->setTranslation(new float[]{2.761,0.5394,5.125});
SoShape* SoShape124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoMaterial* SoMaterial126 = new SoMaterial();
SoMaterial126->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance125->addChild(*SoMaterial126);

SoImageTexture* SoImageTexture127 = new SoImageTexture();
SoImageTexture127->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance125->addChild(*SoImageTexture127);

SoShape124->addChild(*SoVRMLAppearance125);

SoIndexedFaceSet* SoIndexedFaceSet128 = new SoIndexedFaceSet();
SoIndexedFaceSet128->setCoordIndex(new int32_t[]{3,4,5,-1,5,2,3,-1,1,2,5,-1,5,0,1,-1,1,0,6,-1,6,7,1,-1,8,2,1,-1,1,7,8,-1,3,2,8,-1,8,9,3,-1,10,4,3,-1,3,9,10,-1,11,5,4,-1,4,10,11,-1,0,5,11,-1,11,6,0,-1,7,6,12,-1,12,13,7,-1,14,8,7,-1,7,13,14,-1,9,8,14,-1,14,15,9,-1,16,10,9,-1,9,15,16,-1,17,11,10,-1,10,16,17,-1,6,11,17,-1,17,12,6,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,18,19,-1,19,13,12,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,22,-1,22,16,15,-1,16,22,23,-1,23,17,16,-1,17,23,18,-1,18,12,17,-1}, 176);
SoIndexedFaceSet128->setCreaseAngle(3.14159);
SoIndexedFaceSet128->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,13,14,15,-1,15,12,13,-1,8,3,5,-1,5,6,8,-1,0,3,8,-1,8,9,0,-1,10,1,0,-1,0,9,10,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,7,4,-1,12,15,16,-1,16,18,12,-1,20,8,6,-1,6,19,20,-1,9,8,20,-1,20,21,9,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,7,11,23,-1,23,17,7,-1,24,29,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,16,24,25,-1,25,18,16,-1,19,25,26,-1,26,20,19,-1,20,26,27,-1,27,21,20,-1,21,27,28,-1,28,22,21,-1,22,28,29,-1,29,23,22,-1,23,29,24,-1,24,17,23,-1}, 176);
SoCoordinate* SoCoordinate129 = new SoCoordinate();
SoCoordinate129->setPoint(new float[]{0.344,0.2722,0.7455,-0.3545,0.2852,0.7666,-0.348,-0.0873,0.9093,-0.3417,-0.3926,0.7211,0.334,-0.3926,0.6949,0.3526,-0.0873,0.8916,0.4743,0.3506,0.4051,-0.5124,0.3666,0.4046,-0.567,-0.0456,0.443,-0.5027,-0.442,0.3984,0.4707,-0.4405,0.4103,0.5568,-0.1692,0.4444,0.5073,0.4406,0.0082,-0.5236,0.4563,0.0218,-0.582,-0.0206,0.0319,-0.5021,-0.4563,-0.0085,0.5189,-0.4563,-0.0059,0.582,-0.0322,0.0208,0.3902,0.3124,-0.2366,-0.4061,0.3245,-0.2249,-0.4471,-0.0116,-0.2116,-0.3913,-0.3165,-0.2486,0.401,-0.3166,-0.2442,0.444,-0.028,-0.2206}, 72);
SoIndexedFaceSet128->setCoord(*SoCoordinate129);

SoTextureCoordinate* SoTextureCoordinate130 = new SoTextureCoordinate();
SoTextureCoordinate130->setPoint(new float[]{0.1287,0.113,0.1423,0.0921,0.1396,0.0889,0.1257,0.1107,0.1415,0.0903,0.1274,0.1123,0.1297,0.1214,0.15,0.0896,0.1273,0.1223,0.1313,0.1227,0.1521,0.0901,0.1498,0.0859,0.0527,0.151,0.0282,0.1325,0.0446,0.0894,0.0746,0.0899,0.1016,0.0977,0.1554,0.0919,0.0779,0.162,0.1341,0.1263,0.1317,0.1272,0.1363,0.1268,0.1571,0.0927,0.1559,0.0889,0.1554,0.0919,0.0779,0.162,0.1317,0.1272,0.1363,0.1268,0.1571,0.0927,0.1559,0.0889}, 60);
SoIndexedFaceSet128->setTexCoord(*SoTextureCoordinate130);

SoShape124->setGeometry(*SoIndexedFaceSet128);

SoTransform123->addChild(*SoShape124);

SoHAnimSegment122->addChild(*SoTransform123);

SoHAnimJoint121->addChildren(*SoHAnimSegment122);

SoHAnimJoint111->addChildren(*SoHAnimJoint121);

SoHAnimJoint101->addChildren(*SoHAnimJoint111);

SoHAnimJoint91->addChildren(*SoHAnimJoint101);

SoHAnimJoint81->addChildren(*SoHAnimJoint91);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->X3DNode::setName(QString("l_cuneonavicular_2"));
SoHAnimJoint131->setDEF(QString("hanim_l_cuneonavicular_2"));
SoHAnimJoint131->setCenter(new float[]{3.619,1.49,0.9523});
SoHAnimJoint131->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint131->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment132 = new SoHAnimSegment();
SoHAnimSegment132->X3DNode::setName(QString("l_cuneiform_2"));
SoHAnimSegment132->setDEF(QString("hanim_l_cuneiform_2"));
SoTransform* SoTransform133 = new SoTransform();
SoTransform133->setTranslation(new float[]{3.619,1.49,0.9523});
SoShape* SoShape134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance135 = new SoVRMLAppearance();
SoMaterial* SoMaterial136 = new SoMaterial();
SoMaterial136->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance135->addChild(*SoMaterial136);

SoImageTexture* SoImageTexture137 = new SoImageTexture();
SoImageTexture137->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance135->addChild(*SoImageTexture137);

SoShape134->addChild(*SoVRMLAppearance135);

SoIndexedFaceSet* SoIndexedFaceSet138 = new SoIndexedFaceSet();
SoIndexedFaceSet138->setCoordIndex(new int32_t[]{1,8,9,-1,9,4,1,-1,5,0,2,-1,2,7,5,-1,4,6,3,-1,3,1,4,-1,10,0,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,1,3,-1,1,19,20,-1,20,8,1,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,0,10,-1,0,22,23,-1,23,2,0,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1}, 304);
SoIndexedFaceSet138->setCreaseAngle(3.14159);
SoIndexedFaceSet138->setTexCoordIndex(new int32_t[]{0,8,9,-1,9,4,0,-1,5,1,2,-1,2,7,5,-1,4,6,3,-1,3,0,4,-1,10,1,5,-1,5,11,10,-1,32,37,36,-1,36,33,32,-1,24,29,28,-1,28,25,24,-1,19,18,23,-1,19,23,22,-1,19,22,21,-1,19,21,20,-1,13,12,17,-1,13,17,16,-1,13,16,15,-1,13,15,14,-1,9,12,13,-1,13,4,9,-1,4,13,14,-1,14,6,4,-1,24,31,30,-1,30,29,24,-1,7,15,16,-1,16,5,7,-1,5,16,17,-1,17,11,5,-1,36,35,34,-1,34,33,36,-1,3,18,19,-1,19,0,3,-1,0,19,20,-1,20,8,0,-1,32,39,38,-1,38,37,32,-1,10,21,22,-1,22,1,10,-1,1,22,23,-1,23,2,1,-1,28,27,26,-1,26,25,28,-1,6,24,25,-1,25,3,6,-1,3,25,26,-1,26,18,3,-1,18,26,27,-1,27,23,18,-1,23,27,28,-1,28,2,23,-1,2,28,29,-1,29,7,2,-1,7,29,30,-1,30,15,7,-1,15,30,31,-1,31,14,15,-1,14,31,24,-1,24,6,14,-1,8,32,33,-1,33,9,8,-1,9,33,34,-1,34,12,9,-1,12,34,35,-1,35,17,12,-1,17,35,36,-1,36,11,17,-1,11,36,37,-1,37,10,11,-1,10,37,38,-1,38,21,10,-1,21,38,39,-1,39,20,21,-1,20,39,32,-1,32,8,20,-1}, 304);
SoCoordinate* SoCoordinate139 = new SoCoordinate();
SoCoordinate139->setPoint(new float[]{0.2418,-1.317,0.3066,0.262,1.069,0.2707,0.2399,-1.332,0.7678,0.289,0.7461,0.7818,-0.3232,0.8508,0.3451,-0.3262,-1.31,0.3344,-0.3811,0.491,1.052,-0.3785,-1.316,1.066,0.2589,1.334,-0.0919,-0.2569,1.202,-0.0183,0.2486,-1.334,-0.0929,-0.2763,-1.329,-0.0115,-0.4937,0.6449,0.0794,-0.5389,0.5099,0.2504,-0.5914,0.2392,0.9077,-0.5883,-1.064,0.9201,-0.5488,-1.06,0.3077,-0.5121,-1.07,0.0848,0.5859,0.5666,0.674,0.5593,0.8214,0.2083,0.5574,0.9493,0.0064,0.5505,-1.093,0.0054,0.5421,-1.082,0.3015,0.5387,-1.092,0.6611,-0.2547,0.2976,1.364,0.3749,0.5415,1.082,0.4702,0.4247,1.049,0.4305,-0.9692,1.038,0.2863,-1.137,1.089,-0.2662,-1.123,1.4,-0.354,-0.9652,1.34,-0.3565,0.1187,1.33,0.2197,1.194,-0.369,-0.2078,1.085,-0.3024,-0.3907,0.6038,-0.2314,-0.408,-1.005,-0.2264,-0.2645,-1.199,-0.2846,0.2118,-1.203,-0.3608,0.4088,-1.011,-0.2965,0.4151,0.8882,-0.2956}, 120);
SoIndexedFaceSet138->setCoord(*SoCoordinate139);

SoTextureCoordinate* SoTextureCoordinate140 = new SoTextureCoordinate();
SoTextureCoordinate140->setPoint(new float[]{0.2179,0.1044,0.2186,0.1086,0.2128,0.1035,0.2098,0.0996,0.2047,0.1286,0.2132,0.1171,0.1953,0.1244,0.2059,0.1148,0.2224,0.1067,0.2132,0.1285,0.2197,0.1123,0.2163,0.1174,0.2132,0.1285,0.2047,0.1286,0.1953,0.1244,0.1953,0.1244,0.2132,0.1171,0.2163,0.1174,0.2098,0.0996,0.2179,0.1044,0.2224,0.1067,0.2224,0.1067,0.2186,0.1086,0.2128,0.1035,0.1953,0.1244,0.2098,0.0996,0.2098,0.0996,0.2128,0.1035,0.2098,0.0996,0.1953,0.1244,0.1953,0.1244,0.1953,0.1244,0.2224,0.1067,0.2132,0.1285,0.2132,0.1285,0.2163,0.1174,0.2132,0.1285,0.2224,0.1067,0.2224,0.1067,0.2224,0.1067}, 80);
SoIndexedFaceSet138->setTexCoord(*SoTextureCoordinate140);

SoShape134->setGeometry(*SoIndexedFaceSet138);

SoTransform133->addChild(*SoShape134);

SoHAnimSegment132->addChild(*SoTransform133);

SoHAnimJoint131->addChildren(*SoHAnimSegment132);

SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint141->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint141->setCenter(new float[]{3.564,1.16,1.825});
SoHAnimJoint141->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint141->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment142 = new SoHAnimSegment();
SoHAnimSegment142->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimSegment142->setDEF(QString("hanim_l_metatarsal_2"));
SoTransform* SoTransform143 = new SoTransform();
SoTransform143->setTranslation(new float[]{3.564,1.16,1.825});
SoShape* SoShape144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance145 = new SoVRMLAppearance();
SoMaterial* SoMaterial146 = new SoMaterial();
SoMaterial146->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance145->addChild(*SoMaterial146);

SoImageTexture* SoImageTexture147 = new SoImageTexture();
SoImageTexture147->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance145->addChild(*SoImageTexture147);

SoShape144->addChild(*SoVRMLAppearance145);

SoIndexedFaceSet* SoIndexedFaceSet148 = new SoIndexedFaceSet();
SoIndexedFaceSet148->setCoordIndex(new int32_t[]{12,15,7,-1,7,4,12,-1,0,8,9,-1,9,2,0,-1,1,10,11,-1,11,3,1,-1,5,0,2,-1,2,6,5,-1,8,1,3,-1,3,9,8,-1,14,13,12,-1,12,4,14,-1,18,17,13,-1,13,14,18,-1,42,39,38,-1,38,43,42,-1,46,51,50,-1,50,47,46,-1,29,35,34,-1,34,30,29,-1,19,26,25,-1,25,20,19,-1,28,27,26,-1,26,19,28,-1,21,24,23,-1,23,22,21,-1,37,36,35,-1,35,29,37,-1,30,34,31,-1,20,25,24,-1,24,21,20,-1,31,34,33,-1,33,32,31,-1,3,19,20,-1,20,9,3,-1,9,20,21,-1,21,2,9,-1,2,21,22,-1,22,6,2,-1,42,41,40,-1,40,39,42,-1,7,23,24,-1,24,4,7,-1,4,24,25,-1,25,16,4,-1,16,25,26,-1,26,14,16,-1,14,26,27,-1,27,18,14,-1,50,49,48,-1,48,47,50,-1,11,28,19,-1,19,3,11,-1,0,29,30,-1,30,8,0,-1,8,30,31,-1,31,1,8,-1,1,31,32,-1,32,10,1,-1,46,53,52,-1,52,51,46,-1,17,33,34,-1,34,13,17,-1,13,34,35,-1,35,12,13,-1,12,35,36,-1,36,15,12,-1,38,45,44,-1,44,43,38,-1,5,37,29,-1,29,0,5,-1,15,38,39,-1,39,7,15,-1,7,39,40,-1,40,23,7,-1,23,40,41,-1,41,22,23,-1,22,41,42,-1,42,6,22,-1,6,42,43,-1,43,5,6,-1,5,43,44,-1,44,37,5,-1,37,44,45,-1,45,36,37,-1,36,45,38,-1,38,15,36,-1,10,46,47,-1,47,11,10,-1,11,47,48,-1,48,28,11,-1,28,48,49,-1,49,27,28,-1,27,49,50,-1,50,18,27,-1,18,50,51,-1,51,17,18,-1,17,51,52,-1,52,33,17,-1,33,52,53,-1,53,32,33,-1,32,53,46,-1,46,10,32,-1}, 412);
SoIndexedFaceSet148->setCreaseAngle(3.14159);
SoIndexedFaceSet148->setTexCoordIndex(new int32_t[]{1,7,10,-1,10,0,1,-1,2,11,12,-1,12,3,2,-1,5,15,16,-1,16,6,5,-1,8,2,3,-1,3,9,8,-1,11,5,6,-1,6,12,11,-1,4,13,1,-1,1,0,4,-1,17,14,13,-1,13,4,17,-1,45,42,41,-1,41,46,45,-1,49,54,53,-1,53,50,49,-1,32,38,37,-1,37,33,32,-1,22,29,28,-1,28,23,22,-1,31,30,29,-1,29,22,31,-1,24,27,26,-1,26,25,24,-1,40,39,38,-1,38,32,40,-1,33,21,34,-1,23,28,27,-1,27,24,23,-1,34,37,36,-1,36,35,34,-1,6,22,23,-1,23,12,6,-1,12,23,24,-1,24,3,12,-1,3,24,25,-1,25,9,3,-1,45,44,43,-1,43,42,45,-1,10,26,27,-1,27,0,10,-1,20,27,28,-1,28,18,20,-1,18,28,29,-1,29,19,18,-1,4,29,30,-1,30,17,4,-1,53,52,51,-1,51,50,53,-1,16,31,22,-1,22,6,16,-1,2,32,33,-1,33,11,2,-1,11,33,34,-1,34,5,11,-1,5,34,35,-1,35,15,5,-1,49,56,55,-1,55,54,49,-1,14,36,37,-1,37,13,14,-1,13,37,38,-1,38,1,13,-1,1,38,39,-1,39,7,1,-1,41,48,47,-1,47,46,41,-1,8,40,32,-1,32,2,8,-1,7,41,42,-1,42,10,7,-1,10,42,43,-1,43,26,10,-1,26,43,44,-1,44,25,26,-1,25,44,45,-1,45,9,25,-1,9,45,46,-1,46,8,9,-1,8,46,47,-1,47,40,8,-1,40,47,48,-1,48,39,40,-1,39,48,41,-1,41,7,39,-1,15,49,50,-1,50,16,15,-1,16,50,51,-1,51,31,16,-1,31,51,52,-1,52,30,31,-1,30,52,53,-1,53,17,30,-1,17,53,54,-1,54,14,17,-1,14,54,55,-1,55,36,14,-1,36,55,56,-1,56,35,36,-1,35,56,49,-1,49,15,35,-1}, 412);
SoCoordinate* SoCoordinate149 = new SoCoordinate();
SoCoordinate149->setPoint(new float[]{0.376,0.2511,1.709,0.3357,0.7759,0.5398,-0.3119,0.2409,1.767,-0.3526,0.6595,0.5874,-0.3078,-1.076,1.666,0.3874,0.0522,2.259,-0.2343,0.0387,2.332,-0.2326,-0.9956,2.295,0.3451,0.5141,1.12,-0.3463,0.4507,1.205,0.3434,1.076,-0.0912,-0.3267,0.8206,0.1791,0.3294,-1.076,1.609,0.2875,-1.012,0.4679,-0.3874,-0.9909,0.4772,0.3851,-0.9944,2.223,-0.3874,-0.9909,0.4772,0.2943,-1.002,-0.1052,-0.3241,-0.9868,0.193,-0.5947,0.492,0.5352,-0.5929,0.2828,1.154,-0.5593,0.0734,1.716,-0.4991,-0.0854,2.16,-0.4989,-0.8372,2.132,-0.5532,-0.8961,1.67,-0.6306,-0.8125,0.499,-0.6285,-0.8121,0.4892,-0.587,-0.8107,0.3782,-0.5955,0.5581,0.3668,0.6024,0.1292,1.656,0.5716,0.3941,1.062,0.5635,0.6565,0.4802,0.5689,0.8722,0.0262,0.528,-0.8844,0.0143,0.522,-0.8924,0.4655,0.5629,-0.9551,1.597,0.6111,-0.8893,2.094,0.6095,-0.0402,2.124,0.3754,-0.8654,2.416,-0.1932,-0.8668,2.492,-0.3693,-0.7622,2.474,-0.3695,-0.1901,2.494,-0.1974,-0.1096,2.517,0.3791,-0.0968,2.442,0.5023,-0.1482,2.391,0.5036,-0.8058,2.368,0.2236,0.9197,-0.4593,-0.3621,0.6915,-0.1877,-0.5727,0.4882,-0.046,-0.565,-0.7245,-0.0357,-0.3891,-0.8422,-0.159,0.1716,-0.8563,-0.4501,0.3041,-0.7893,-0.3815,0.3412,0.8037,-0.3708}, 162);
SoIndexedFaceSet148->setCoord(*SoCoordinate149);

SoTextureCoordinate* SoTextureCoordinate150 = new SoTextureCoordinate();
SoTextureCoordinate150->setPoint(new float[]{0.175,0.1048,0.1833,0.0898,0.1856,0.0872,0.1731,0.1071,0.1985,0.1126,0.2017,0.0948,0.1859,0.1202,0.1801,0.0847,0.1811,0.0824,0.1682,0.1025,0.1699,0.1017,0.1937,0.091,0.1795,0.1136,0.2068,0.0986,0.2128,0.1035,0.2098,0.0996,0.1953,0.1244,0.2059,0.1148,0.1795,0.1136,0.1859,0.1202,0.1731,0.1071,0.2017,0.0948,0.1859,0.1202,0.1795,0.1136,0.1731,0.1071,0.1682,0.1025,0.1682,0.1025,0.1731,0.1071,0.1795,0.1136,0.1859,0.1202,0.1953,0.1244,0.1953,0.1244,0.1856,0.0872,0.1937,0.091,0.2017,0.0948,0.2098,0.0996,0.2098,0.0996,0.2017,0.0948,0.1856,0.0872,0.1811,0.0824,0.1811,0.0824,0.1811,0.0824,0.1682,0.1025,0.1682,0.1025,0.1682,0.1025,0.1682,0.1025,0.1811,0.0824,0.1811,0.0824,0.1811,0.0824,0.2098,0.0996,0.1953,0.1244,0.1953,0.1244,0.1953,0.1244,0.1953,0.1244,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996}, 114);
SoIndexedFaceSet148->setTexCoord(*SoTextureCoordinate150);

SoShape144->setGeometry(*SoIndexedFaceSet148);

SoTransform143->addChild(*SoShape144);

SoHAnimSegment142->addChild(*SoTransform143);

SoHAnimJoint141->addChildren(*SoHAnimSegment142);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint151->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint151->setCenter(new float[]{3.668,0.6656,4.348});
SoHAnimJoint151->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint151->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment152 = new SoHAnimSegment();
SoHAnimSegment152->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment152->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform153 = new SoTransform();
SoTransform153->setTranslation(new float[]{3.668,0.6656,4.348});
SoShape* SoShape154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance155 = new SoVRMLAppearance();
SoMaterial* SoMaterial156 = new SoMaterial();
SoMaterial156->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance155->addChild(*SoMaterial156);

SoImageTexture* SoImageTexture157 = new SoImageTexture();
SoImageTexture157->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance155->addChild(*SoImageTexture157);

SoShape154->addChild(*SoVRMLAppearance155);

SoIndexedFaceSet* SoIndexedFaceSet158 = new SoIndexedFaceSet();
SoIndexedFaceSet158->setCoordIndex(new int32_t[]{8,6,20,-1,20,18,8,-1,14,11,19,-1,19,21,14,-1,6,1,20,-1,19,11,15,-1,0,2,3,-1,3,14,0,-1,12,8,16,-1,16,17,12,-1,15,11,12,-1,12,17,15,-1,6,3,2,-1,2,1,6,-1,0,14,21,-1,16,8,18,-1,3,6,5,-1,5,4,3,-1,6,8,7,-1,7,5,6,-1,10,9,12,-1,12,11,10,-1,14,13,10,-1,10,11,14,-1,13,14,3,-1,3,4,13,-1,8,12,9,-1,9,7,8,-1,19,23,24,-1,24,21,19,-1,22,18,20,-1,20,25,22,-1,31,30,36,-1,31,36,35,-1,34,31,35,-1,5,7,9,-1,9,10,13,-1,5,9,13,-1,4,5,13,-1,29,28,27,-1,27,26,29,-1,37,43,42,-1,42,41,37,-1,31,34,33,-1,33,32,31,-1,41,40,39,-1,41,39,38,-1,37,41,38,-1,25,26,27,-1,27,22,25,-1,22,27,28,-1,28,23,22,-1,23,28,29,-1,29,24,23,-1,24,29,26,-1,26,25,24,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,23,19,-1,23,32,33,-1,33,22,23,-1,22,33,34,-1,34,18,22,-1,18,34,35,-1,35,16,18,-1,16,35,36,-1,36,17,16,-1,17,36,30,-1,30,15,17,-1,21,37,38,-1,38,0,21,-1,0,38,39,-1,39,2,0,-1,2,39,40,-1,40,1,2,-1,1,40,41,-1,41,20,1,-1,20,41,42,-1,42,25,20,-1,25,42,43,-1,43,24,25,-1,24,43,37,-1,37,21,24,-1}, 336);
SoIndexedFaceSet158->setCreaseAngle(3.14159);
SoIndexedFaceSet158->setTexCoordIndex(new int32_t[]{1,0,30,-1,30,24,1,-1,3,2,25,-1,25,31,3,-1,0,4,30,-1,25,2,26,-1,9,10,5,-1,5,3,9,-1,7,1,27,-1,27,28,7,-1,26,2,8,-1,8,29,26,-1,0,6,11,-1,11,4,0,-1,9,3,31,-1,27,1,24,-1,12,15,14,-1,14,13,12,-1,15,17,16,-1,16,14,15,-1,19,18,21,-1,21,20,19,-1,23,22,19,-1,19,20,23,-1,22,23,12,-1,12,13,22,-1,17,21,18,-1,18,16,17,-1,35,37,38,-1,38,34,35,-1,36,32,33,-1,33,39,36,-1,45,44,50,-1,45,50,49,-1,48,45,49,-1,14,16,18,-1,18,19,22,-1,14,18,22,-1,13,14,22,-1,43,42,41,-1,41,40,43,-1,51,57,56,-1,56,55,51,-1,45,48,47,-1,47,46,45,-1,55,54,53,-1,55,53,52,-1,51,55,52,-1,39,40,41,-1,41,36,39,-1,36,41,42,-1,42,37,36,-1,37,42,43,-1,43,38,37,-1,38,43,40,-1,40,39,38,-1,26,44,45,-1,45,25,26,-1,35,45,46,-1,46,37,35,-1,37,46,47,-1,47,36,37,-1,36,47,48,-1,48,32,36,-1,24,48,49,-1,49,27,24,-1,27,49,50,-1,50,28,27,-1,29,50,44,-1,44,26,29,-1,31,51,52,-1,52,9,31,-1,9,52,53,-1,53,10,9,-1,11,53,54,-1,54,4,11,-1,4,54,55,-1,55,30,4,-1,33,55,56,-1,56,39,33,-1,39,56,57,-1,57,38,39,-1,38,57,51,-1,51,34,38,-1}, 336);
SoCoordinate* SoCoordinate159 = new SoCoordinate();
SoCoordinate159->setPoint(new float[]{-0.3393,0.3234,0.264,-0.3241,-0.2974,0.2778,-0.3373,0.026,0.323,-0.2778,-0.0393,0.3227,-0.2424,-0.183,0.7679,-0.1972,-0.5469,0.7512,-0.2409,-0.4436,0.2718,0.2712,-0.5414,0.6896,0.2313,-0.4503,0.2153,0.3295,-0.1296,0.7058,0.2745,0.3527,0.6921,0.2339,0.4182,0.2093,0.3003,-0.075,0.2531,-0.204,0.3657,0.7504,-0.2252,0.4123,0.2599,0.3372,0.3253,0.1752,0.3386,-0.3128,0.1812,0.3436,0.0018,0.2359,0.2944,-0.4678,-0.021,0.3035,0.4187,-0.0402,-0.3436,-0.4656,0.0689,-0.3423,0.425,0.0673,0.2817,-0.4996,-0.2995,0.2839,0.5469,-0.2638,-0.3377,0.5334,-0.1904,-0.336,-0.5008,-0.2278,-0.2473,-0.3729,-0.4869,0.1345,-0.3721,-0.5309,0.1362,0.4342,-0.5035,-0.2486,0.4258,-0.4578,0.5241,0.2491,-0.0133,0.5013,0.3226,-0.1835,0.4932,0.3669,-0.2606,0.4932,-0.3819,-0.2863,0.4923,-0.3672,-0.1575,0.5259,-0.2546,-0.0109,0.5286,-0.0001,0.0336,-0.554,0.3222,-0.0429,-0.5543,0.2475,0.1018,-0.5536,0.0219,0.1466,-0.5407,-0.2386,0.1101,-0.5571,-0.3586,-0.0389,-0.5501,-0.3746,-0.1733,-0.5517,0.3659,-0.1465}, 132);
SoIndexedFaceSet158->setCoord(*SoCoordinate159);

SoTextureCoordinate* SoTextureCoordinate160 = new SoTextureCoordinate();
SoTextureCoordinate160->setPoint(new float[]{0.2327,0.0796,0.2439,0.0803,0.2062,0.05,0.2147,0.0491,0.2302,0.0796,0.2205,0.0532,0.2301,0.0734,0.2486,0.0743,0.2013,0.0552,0.2187,0.0481,0.221,0.0541,0.2293,0.0736,0.1746,0.075,0.1709,0.0678,0.1706,0.0686,0.1745,0.076,0.1824,0.0523,0.1886,0.0572,0.183,0.0511,0.1834,0.0508,0.1882,0.0556,0.1885,0.0566,0.1716,0.0676,0.1748,0.0736,0.2444,0.0847,0.2027,0.042,0.2022,0.0485,0.2464,0.0799,0.2486,0.0741,0.2011,0.0554,0.2293,0.0837,0.2177,0.0418,0.1769,0.0796,0.1648,0.0986,0.1632,0.098,0.1766,0.0777,0.1801,0.0847,0.1811,0.0824,0.1682,0.1025,0.1699,0.1017,0.1699,0.1017,0.1801,0.0847,0.1811,0.0824,0.1682,0.1025,0.2022,0.0485,0.2027,0.042,0.1811,0.0824,0.1801,0.0847,0.1769,0.0796,0.2464,0.0799,0.2486,0.0741,0.1632,0.098,0.2187,0.0481,0.221,0.0541,0.2302,0.0796,0.2293,0.0837,0.1699,0.1017,0.1682,0.1025}, 116);
SoIndexedFaceSet158->setTexCoord(*SoTextureCoordinate160);

SoShape154->setGeometry(*SoIndexedFaceSet158);

SoTransform153->addChild(*SoShape154);

SoHAnimSegment152->addChild(*SoTransform153);

SoHAnimJoint151->addChildren(*SoHAnimSegment152);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint161->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint161->setCenter(new float[]{3.747,0.5621,5.067});
SoHAnimJoint161->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint161->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment162 = new SoHAnimSegment();
SoHAnimSegment162->X3DNode::setName(QString("l_tarsal_middle_phalanx_2"));
SoHAnimSegment162->setDEF(QString("hanim_l_tarsal_middle_phalanx_2"));
SoTransform* SoTransform163 = new SoTransform();
SoTransform163->setTranslation(new float[]{3.747,0.5621,5.067});
SoShape* SoShape164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance165 = new SoVRMLAppearance();
SoMaterial* SoMaterial166 = new SoMaterial();
SoMaterial166->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance165->addChild(*SoMaterial166);

SoImageTexture* SoImageTexture167 = new SoImageTexture();
SoImageTexture167->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance165->addChild(*SoImageTexture167);

SoShape164->addChild(*SoVRMLAppearance165);

SoIndexedFaceSet* SoIndexedFaceSet168 = new SoIndexedFaceSet();
SoIndexedFaceSet168->setCoordIndex(new int32_t[]{0,1,6,-1,6,7,0,-1,2,0,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,1,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1}, 176);
SoIndexedFaceSet168->setCreaseAngle(3.14159);
SoIndexedFaceSet168->setTexCoordIndex(new int32_t[]{0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,5,6,-1,6,12,14,-1,8,1,7,-1,7,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,7,1,-1,5,24,25,-1,25,6,5,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1}, 176);
SoCoordinate* SoCoordinate169 = new SoCoordinate();
SoCoordinate169->setPoint(new float[]{-0.3183,-0.4691,0.449,-0.3467,-0.0977,0.4619,0.3028,-0.4691,0.3802,0.3467,-0.0977,0.3792,0.2958,0.1955,0.3815,-0.2928,0.2184,0.4522,-0.3214,-0.0796,0.049,-0.2763,-0.4435,0.0323,0.1921,-0.4379,-0.0293,0.2505,-0.0262,-0.0131,0.1955,0.4562,-0.0268,-0.2831,0.4691,0.0315,-0.2728,-0.0774,-0.1826,-0.237,-0.3678,-0.1982,0.1011,-0.3637,-0.2446,0.1496,-0.025,-0.2272,0.1027,0.3833,-0.2419,-0.2402,0.3926,-0.1995,-0.1636,-0.3203,0.5822,-0.1797,-0.1053,0.5929,-0.1512,0.0631,0.5854,0.1873,0.0499,0.5442,0.214,-0.1025,0.5454,0.1882,-0.3203,0.5451}, 72);
SoIndexedFaceSet168->setCoord(*SoCoordinate169);

SoTextureCoordinate* SoTextureCoordinate170 = new SoTextureCoordinate();
SoTextureCoordinate170->setPoint(new float[]{0.1653,0.0654,0.1636,0.063,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1293,0.0261,0.0949,0.0775,0.1651,0.0639,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1291,0.0918,0.1834,0.0508,0.1554,0.0532,0.1716,0.0676,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1834,0.0508,0.1554,0.0532,0.1653,0.0654,0.1636,0.063,0.1651,0.0639,0.0949,0.0775,0.1792,0.0409,0.1795,0.0453}, 56);
SoIndexedFaceSet168->setTexCoord(*SoTextureCoordinate170);

SoShape164->setGeometry(*SoIndexedFaceSet168);

SoTransform163->addChild(*SoShape164);

SoHAnimSegment162->addChild(*SoTransform163);

SoHAnimJoint161->addChildren(*SoHAnimSegment162);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint171->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint171->setCenter(new float[]{3.747,0.4367,5.486});
SoHAnimJoint171->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint171->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment172 = new SoHAnimSegment();
SoHAnimSegment172->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSegment172->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoTransform* SoTransform173 = new SoTransform();
SoTransform173->setTranslation(new float[]{3.747,0.4367,5.486});
SoShape* SoShape174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance175 = new SoVRMLAppearance();
SoMaterial* SoMaterial176 = new SoMaterial();
SoMaterial176->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance175->addChild(*SoMaterial176);

SoImageTexture* SoImageTexture177 = new SoImageTexture();
SoImageTexture177->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance175->addChild(*SoImageTexture177);

SoShape174->addChild(*SoVRMLAppearance175);

SoIndexedFaceSet* SoIndexedFaceSet178 = new SoIndexedFaceSet();
SoIndexedFaceSet178->setCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,7,-1,7,6,0,-1,3,0,6,-1,6,8,3,-1,9,2,3,-1,3,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1}, 128);
SoIndexedFaceSet178->setCreaseAngle(3.14159);
SoIndexedFaceSet178->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,5,1,2,-1,2,4,5,-1,0,1,9,-1,9,8,0,-1,3,0,8,-1,8,10,3,-1,11,2,3,-1,3,10,11,-1,4,2,11,-1,11,12,4,-1,14,7,6,-1,6,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1}, 128);
SoCoordinate* SoCoordinate179 = new SoCoordinate();
SoCoordinate179->setPoint(new float[]{-0.2128,-0.2652,0.3261,-0.2081,-0.028,0.4176,0.2913,-0.028,0.3571,0.2272,-0.2652,0.2666,0.2609,0.2185,0.2973,-0.1985,0.2313,0.3646,-0.3183,-0.3438,0.0295,-0.3467,0.0277,0.0425,0.3028,-0.3438,-0.0392,0.3467,0.0277,-0.0402,0.2958,0.3209,-0.0379,-0.2928,0.3438,0.0327,-0.2562,0.0235,-0.1565,-0.2371,-0.2306,-0.1677,0.182,-0.2306,-0.2127,0.2123,0.0256,-0.2127,0.1796,0.2132,-0.2131,-0.2214,0.2288,-0.1645}, 54);
SoIndexedFaceSet178->setCoord(*SoCoordinate179);

SoTextureCoordinate* SoTextureCoordinate180 = new SoTextureCoordinate();
SoTextureCoordinate180->setPoint(new float[]{0.1643,0.0579,0.1638,0.0538,0.174,0.0396,0.1747,0.0423,0.1756,0.0403,0.1632,0.0573,0.066,0.0493,0.0915,0.0082,0.1653,0.0654,0.1636,0.063,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.0949,0.0775,0.1293,0.0261,0.1651,0.0639,0.1636,0.063,0.1653,0.0654,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1293,0.0261}, 44);
SoIndexedFaceSet178->setTexCoord(*SoTextureCoordinate180);

SoShape174->setGeometry(*SoIndexedFaceSet178);

SoTransform173->addChild(*SoShape174);

SoHAnimSegment172->addChild(*SoTransform173);

SoHAnimJoint171->addChildren(*SoHAnimSegment172);

SoHAnimJoint161->addChildren(*SoHAnimJoint171);

SoHAnimJoint151->addChildren(*SoHAnimJoint161);

SoHAnimJoint141->addChildren(*SoHAnimJoint151);

SoHAnimJoint131->addChildren(*SoHAnimJoint141);

SoHAnimJoint81->addChildren(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->X3DNode::setName(QString("l_cuneonavicular_3"));
SoHAnimJoint181->setDEF(QString("hanim_l_cuneonavicular_3"));
SoHAnimJoint181->setCenter(new float[]{4.132,1.484,0.8808});
SoHAnimJoint181->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint181->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment182 = new SoHAnimSegment();
SoHAnimSegment182->X3DNode::setName(QString("l_cuneiform_3"));
SoHAnimSegment182->setDEF(QString("hanim_l_cuneiform_3"));
SoTransform* SoTransform183 = new SoTransform();
SoTransform183->setTranslation(new float[]{4.132,1.484,0.8808});
SoShape* SoShape184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance185 = new SoVRMLAppearance();
SoMaterial* SoMaterial186 = new SoMaterial();
SoMaterial186->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance185->addChild(*SoMaterial186);

SoImageTexture* SoImageTexture187 = new SoImageTexture();
SoImageTexture187->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance185->addChild(*SoImageTexture187);

SoShape184->addChild(*SoVRMLAppearance185);

SoIndexedFaceSet* SoIndexedFaceSet188 = new SoIndexedFaceSet();
SoIndexedFaceSet188->setCoordIndex(new int32_t[]{4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,7,9,-1,9,8,4,-1,20,25,24,-1,24,21,20,-1,12,11,10,-1,10,13,12,-1,18,17,14,-1,14,19,18,-1,15,14,17,-1,17,16,15,-1,0,10,11,-1,11,4,0,-1,4,11,12,-1,12,7,4,-1,7,12,13,-1,13,1,7,-1,24,23,22,-1,22,21,24,-1,3,14,15,-1,15,6,3,-1,20,27,26,-1,26,25,20,-1,5,16,17,-1,17,2,5,-1,2,17,18,-1,18,9,2,-1,9,18,19,-1,19,8,9,-1,8,19,14,-1,14,3,8,-1,6,20,21,-1,21,0,6,-1,0,21,22,-1,22,10,0,-1,10,22,23,-1,23,13,10,-1,13,23,24,-1,24,1,13,-1,1,24,25,-1,25,5,1,-1,5,25,26,-1,26,16,5,-1,16,26,27,-1,27,15,16,-1,15,27,20,-1,20,6,15,-1}, 208);
SoIndexedFaceSet188->setCreaseAngle(3.14159);
SoIndexedFaceSet188->setTexCoordIndex(new int32_t[]{4,3,6,-1,6,0,4,-1,4,8,3,-1,5,2,7,-1,7,1,5,-1,2,9,7,-1,4,11,10,-1,10,8,4,-1,22,27,26,-1,26,23,22,-1,14,13,12,-1,12,15,14,-1,20,19,16,-1,16,21,20,-1,17,16,19,-1,19,18,17,-1,0,12,13,-1,13,4,0,-1,4,13,14,-1,14,11,4,-1,7,14,15,-1,15,1,7,-1,26,25,24,-1,24,23,26,-1,3,16,17,-1,17,6,3,-1,22,29,28,-1,28,27,22,-1,5,18,19,-1,19,2,5,-1,2,19,20,-1,20,9,2,-1,10,20,21,-1,21,8,10,-1,8,21,16,-1,16,3,8,-1,6,22,23,-1,23,0,6,-1,0,23,24,-1,24,12,0,-1,12,24,25,-1,25,15,12,-1,15,25,26,-1,26,1,15,-1,1,26,27,-1,27,5,1,-1,5,27,28,-1,28,18,5,-1,18,28,29,-1,29,17,18,-1,17,29,22,-1,22,6,17,-1}, 208);
SoCoordinate* SoCoordinate189 = new SoCoordinate();
SoCoordinate189->setPoint(new float[]{0.3141,0.6132,0.8819,0.2408,-1.34,0.8742,-0.2719,-1.312,0.3782,-0.2517,1.075,0.3423,0.2453,0.9604,0.0142,-0.2738,-1.326,0.8393,-0.2247,0.7517,0.8534,0.2144,-1.314,0.0184,-0.2548,1.34,-0.0203,-0.2651,-1.329,-0.0214,0.5551,0.398,0.7409,0.4991,0.6279,0.1249,0.4757,-1.204,0.1283,0.4872,-1.221,0.7343,-0.4782,0.9895,0.2862,-0.4537,0.6961,0.7506,-0.5001,-1.215,0.7378,-0.4955,-1.204,0.381,-0.4895,-1.216,0.0879,-0.4811,1.134,0.0888,-0.2293,0.4659,1.208,0.2844,0.3497,1.239,0.4589,0.1843,1.144,0.3966,-1.12,1.138,0.222,-1.185,1.237,-0.2534,-1.174,1.199,-0.4036,-1.109,1.132,-0.3609,0.4374,1.144}, 84);
SoIndexedFaceSet188->setCoord(*SoCoordinate189);

SoTextureCoordinate* SoTextureCoordinate190 = new SoTextureCoordinate();
SoTextureCoordinate190->setPoint(new float[]{0.2226,0.0828,0.2197,0.0903,0.2186,0.1086,0.2179,0.1044,0.2314,0.0879,0.2128,0.1035,0.2098,0.0996,0.2271,0.0958,0.2224,0.1067,0.2197,0.1123,0.2224,0.1067,0.2314,0.0879,0.2226,0.0828,0.2314,0.0879,0.2314,0.0879,0.2197,0.0903,0.2179,0.1044,0.2098,0.0996,0.2098,0.0996,0.2186,0.1086,0.2197,0.1123,0.2224,0.1067,0.2098,0.0996,0.2226,0.0828,0.2226,0.0828,0.2197,0.0903,0.2226,0.0828,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996}, 60);
SoIndexedFaceSet188->setTexCoord(*SoTextureCoordinate190);

SoShape184->setGeometry(*SoIndexedFaceSet188);

SoTransform183->addChild(*SoShape184);

SoHAnimSegment182->addChild(*SoTransform183);

SoHAnimJoint181->addChildren(*SoHAnimSegment182);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->X3DNode::setName(QString("l_tarsometatarsal_3"));
SoHAnimJoint191->setDEF(QString("hanim_l_tarsometatarsal_3"));
SoHAnimJoint191->setCenter(new float[]{4.204,1.16,1.751});
SoHAnimJoint191->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint191->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment192 = new SoHAnimSegment();
SoHAnimSegment192->X3DNode::setName(QString("l_metatarsal_3"));
SoHAnimSegment192->setDEF(QString("hanim_l_metatarsal_3"));
SoTransform* SoTransform193 = new SoTransform();
SoTransform193->setTranslation(new float[]{4.204,1.16,1.751});
SoShape* SoShape194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance195 = new SoVRMLAppearance();
SoMaterial* SoMaterial196 = new SoMaterial();
SoMaterial196->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance195->addChild(*SoMaterial196);

SoImageTexture* SoImageTexture197 = new SoImageTexture();
SoImageTexture197->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance195->addChild(*SoImageTexture197);

SoShape194->addChild(*SoVRMLAppearance195);

SoIndexedFaceSet* SoIndexedFaceSet198 = new SoIndexedFaceSet();
SoIndexedFaceSet198->setCoordIndex(new int32_t[]{15,3,13,-1,13,12,15,-1,10,2,0,-1,0,7,10,-1,9,6,14,-1,14,1,9,-1,3,10,7,-1,7,13,3,-1,12,16,5,-1,5,15,12,-1,6,9,17,-1,17,8,6,-1,17,4,11,-1,11,8,17,-1,27,31,28,-1,34,33,32,-1,32,35,34,-1,28,31,30,-1,30,29,28,-1,35,32,31,-1,31,27,35,-1,23,20,24,-1,22,21,20,-1,20,23,22,-1,25,19,18,-1,18,26,25,-1,24,20,19,-1,19,25,24,-1,1,18,19,-1,19,9,1,-1,9,19,20,-1,20,17,9,-1,17,20,21,-1,21,4,17,-1,48,47,46,-1,46,45,48,-1,5,22,23,-1,23,15,5,-1,15,23,24,-1,24,3,15,-1,3,24,25,-1,25,10,3,-1,10,25,26,-1,26,2,10,-1,40,39,38,-1,38,37,40,-1,13,27,28,-1,28,12,13,-1,12,28,29,-1,29,16,12,-1,44,51,50,-1,50,49,44,-1,11,30,31,-1,31,8,11,-1,8,31,32,-1,32,6,8,-1,6,32,33,-1,33,14,6,-1,36,43,42,-1,42,41,36,-1,0,34,35,-1,35,7,0,-1,7,35,27,-1,27,13,7,-1,37,36,41,-1,41,40,37,-1,48,45,44,-1,44,49,48,-1,14,36,37,-1,37,1,14,-1,1,37,38,-1,38,18,1,-1,18,38,39,-1,39,26,18,-1,26,39,40,-1,40,2,26,-1,2,40,41,-1,41,0,2,-1,0,41,42,-1,42,34,0,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,14,33,-1,16,44,45,-1,45,5,16,-1,5,45,46,-1,46,22,5,-1,22,46,47,-1,47,21,22,-1,21,47,48,-1,48,4,21,-1,4,48,49,-1,49,11,4,-1,11,49,50,-1,50,30,11,-1,30,50,51,-1,51,29,30,-1,29,51,44,-1,44,16,29,-1}, 400);
SoIndexedFaceSet198->setCreaseAngle(3.14159);
SoIndexedFaceSet198->setTexCoordIndex(new int32_t[]{25,3,16,-1,16,7,25,-1,12,2,0,-1,0,9,12,-1,22,18,20,-1,20,1,22,-1,13,23,19,-1,19,17,13,-1,15,26,5,-1,5,24,15,-1,8,11,28,-1,28,21,8,-1,14,4,6,-1,6,10,14,-1,43,27,45,-1,54,53,51,-1,51,55,54,-1,46,50,48,-1,48,47,46,-1,56,52,49,-1,49,44,56,-1,36,28,38,-1,35,34,33,-1,33,37,35,-1,40,30,29,-1,29,42,40,-1,39,32,31,-1,31,41,39,-1,1,29,30,-1,30,22,1,-1,11,31,32,-1,32,28,11,-1,14,33,34,-1,34,4,14,-1,70,69,68,-1,68,67,70,-1,5,35,37,-1,37,24,5,-1,25,36,38,-1,38,3,25,-1,13,39,41,-1,41,23,13,-1,12,40,42,-1,42,2,12,-1,62,61,60,-1,60,58,62,-1,16,43,45,-1,45,7,16,-1,15,46,47,-1,47,26,15,-1,66,74,73,-1,73,71,66,-1,6,48,50,-1,50,10,6,-1,21,49,52,-1,52,8,21,-1,18,51,53,-1,53,20,18,-1,57,65,64,-1,64,63,57,-1,0,54,55,-1,55,9,0,-1,19,56,44,-1,44,17,19,-1,59,57,63,-1,63,62,59,-1,70,67,66,-1,66,72,70,-1,20,57,59,-1,59,1,20,-1,1,58,60,-1,60,29,1,-1,29,60,61,-1,61,42,29,-1,42,61,62,-1,62,2,42,-1,2,62,63,-1,63,0,2,-1,0,63,64,-1,64,54,0,-1,54,64,65,-1,65,53,54,-1,53,65,57,-1,57,20,53,-1,26,66,67,-1,67,5,26,-1,5,67,68,-1,68,35,5,-1,35,68,69,-1,69,34,35,-1,34,69,70,-1,70,4,34,-1,4,70,72,-1,72,6,4,-1,6,71,73,-1,73,48,6,-1,48,73,74,-1,74,47,48,-1,47,74,66,-1,66,26,47,-1}, 400);
SoCoordinate* SoCoordinate199 = new SoCoordinate();
SoCoordinate199->setPoint(new float[]{0.3514,0.0088,2.189,-0.2551,-0.9944,2.297,-0.2528,0.0522,2.333,-0.2951,0.5141,1.194,-0.3459,-1.002,-0.0312,-0.2968,1.076,-0.0171,0.236,-1.076,1.597,0.2984,0.2146,1.686,0.2182,-1.032,0.4559,-0.3108,-1.076,1.683,-0.2642,0.2511,1.783,0.1688,-1.016,0.0037,0.2567,0.7002,0.5242,0.2664,0.4574,1.105,0.3555,-0.9951,2.147,-0.3045,0.7759,0.6139,0.2421,0.9373,0.0114,-0.3527,-1.012,0.5419,-0.4555,-0.9034,2.208,-0.5053,-0.9726,1.685,-0.5463,-0.9098,0.5513,-0.5402,-0.9013,0.0735,-0.4975,0.9256,0.0859,-0.5034,0.6915,0.5785,-0.495,0.4292,1.16,-0.4642,0.1647,1.753,-0.4562,-0.0112,2.238,0.4671,0.3356,0.9778,0.4564,0.5794,0.3947,0.4508,0.735,0.0575,0.3868,-0.8992,0.0513,0.4273,-0.911,0.3814,0.4427,-0.9545,1.511,0.5425,-0.8904,1.948,0.5341,-0.0799,1.982,0.4962,0.0926,1.56,0.404,-0.8727,2.327,-0.1714,-0.8722,2.472,-0.2831,-0.8318,2.473,-0.2837,-0.1125,2.497,-0.1794,-0.0912,2.498,0.3948,-0.1313,2.362,0.515,-0.1786,2.318,0.5218,-0.8172,2.291,0.1845,0.8454,-0.2358,-0.2895,0.9675,-0.2731,-0.4148,0.8711,-0.2009,-0.4547,-0.8346,-0.2124,-0.3314,-0.8987,-0.2789,0.1384,-0.9111,-0.2399,0.2817,-0.8344,-0.2087,0.3416,0.6936,-0.203}, 156);
SoIndexedFaceSet198->setCoord(*SoCoordinate199);

SoTextureCoordinate* SoTextureCoordinate200 = new SoTextureCoordinate();
SoTextureCoordinate200->setPoint(new float[]{0.195,0.0629,0.1801,0.0847,0.1811,0.0824,0.1937,0.091,0.2128,0.1035,0.2098,0.0996,0.2197,0.0903,0.2138,0.0778,0.1989,0.0701,0.1984,0.068,0.2129,0.0844,0.1833,0.0898,0.1856,0.0872,0.1937,0.091,0.2068,0.0986,0.2138,0.0778,0.2061,0.0729,0.2061,0.0729,0.1989,0.0701,0.1984,0.068,0.1952,0.0651,0.2129,0.0844,0.1833,0.0898,0.1856,0.0872,0.2017,0.0948,0.2017,0.0948,0.2226,0.0828,0.2138,0.0778,0.1937,0.091,0.1811,0.0824,0.1856,0.0872,0.1856,0.0872,0.1937,0.091,0.2017,0.0948,0.2098,0.0996,0.2098,0.0996,0.2017,0.0948,0.2017,0.0948,0.1937,0.091,0.1937,0.091,0.1856,0.0872,0.1856,0.0872,0.1811,0.0824,0.2061,0.0729,0.2061,0.0729,0.2138,0.0778,0.2138,0.0778,0.2226,0.0828,0.2226,0.0828,0.2138,0.0778,0.2138,0.0778,0.1984,0.068,0.1984,0.068,0.195,0.0629,0.195,0.0629,0.1984,0.068,0.1984,0.068,0.195,0.0629,0.1811,0.0824,0.1801,0.0847,0.1811,0.0824,0.1811,0.0824,0.1811,0.0824,0.195,0.0629,0.195,0.0629,0.195,0.0629,0.2226,0.0828,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996,0.2226,0.0828,0.2197,0.0903,0.2226,0.0828,0.2226,0.0828}, 150);
SoIndexedFaceSet198->setTexCoord(*SoTextureCoordinate200);

SoShape194->setGeometry(*SoIndexedFaceSet198);

SoTransform193->addChild(*SoShape194);

SoHAnimSegment192->addChild(*SoTransform193);

SoHAnimJoint191->addChildren(*SoHAnimSegment192);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->X3DNode::setName(QString("l_metatarsophalangeal_3"));
SoHAnimJoint201->setDEF(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimJoint201->setCenter(new float[]{4.288,0.6692,4.241});
SoHAnimJoint201->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint201->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment202 = new SoHAnimSegment();
SoHAnimSegment202->X3DNode::setName(QString("l_tarsal_proximal_phalanx_3"));
SoHAnimSegment202->setDEF(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoTransform* SoTransform203 = new SoTransform();
SoTransform203->setTranslation(new float[]{4.288,0.6692,4.241});
SoShape* SoShape204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance205 = new SoVRMLAppearance();
SoMaterial* SoMaterial206 = new SoMaterial();
SoMaterial206->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance205->addChild(*SoMaterial206);

SoImageTexture* SoImageTexture207 = new SoImageTexture();
SoImageTexture207->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance205->addChild(*SoImageTexture207);

SoShape204->addChild(*SoVRMLAppearance205);

SoIndexedFaceSet* SoIndexedFaceSet208 = new SoIndexedFaceSet();
SoIndexedFaceSet208->setCoordIndex(new int32_t[]{13,7,1,-1,1,0,13,-1,7,9,2,-1,2,1,7,-1,4,3,14,-1,14,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,13,-1,13,0,5,-1,23,19,15,-1,15,17,23,-1,16,20,24,-1,24,18,16,-1,9,7,19,-1,19,23,9,-1,8,6,24,-1,24,20,8,-1,7,11,19,-1,24,6,21,-1,10,12,13,-1,13,8,10,-1,14,9,25,-1,25,22,14,-1,21,6,14,-1,14,22,21,-1,7,13,12,-1,12,11,7,-1,10,8,20,-1,25,9,23,-1,9,14,3,-1,3,2,9,-1,1,2,3,-1,3,4,5,-1,1,3,5,-1,0,1,5,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,41,37,43,-1,43,42,41,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,41,40,39,-1,37,41,39,-1,37,39,38,-1,15,26,27,-1,27,17,15,-1,17,27,28,-1,28,18,17,-1,18,28,29,-1,29,16,18,-1,16,29,26,-1,26,15,16,-1,17,30,31,-1,31,23,17,-1,23,31,32,-1,32,25,23,-1,25,32,33,-1,33,22,25,-1,22,33,34,-1,34,21,22,-1,21,34,35,-1,35,24,21,-1,24,35,36,-1,36,18,24,-1,18,36,30,-1,30,17,18,-1,20,37,38,-1,38,10,20,-1,10,38,39,-1,39,12,10,-1,12,39,40,-1,40,11,12,-1,11,40,41,-1,41,19,11,-1,19,41,42,-1,42,15,19,-1,15,42,43,-1,43,16,15,-1,16,43,37,-1,37,20,16,-1}, 336);
SoIndexedFaceSet208->setCreaseAngle(3.14159);
SoIndexedFaceSet208->setTexCoordIndex(new int32_t[]{22,7,0,-1,0,1,22,-1,7,9,2,-1,2,0,7,-1,4,3,23,-1,23,6,4,-1,8,5,4,-1,4,6,8,-1,5,8,22,-1,22,1,5,-1,36,29,24,-1,24,26,36,-1,25,31,38,-1,38,27,25,-1,11,10,28,-1,28,35,11,-1,13,12,37,-1,37,30,13,-1,10,15,28,-1,37,12,32,-1,14,20,16,-1,16,13,14,-1,18,11,39,-1,39,33,18,-1,32,12,19,-1,19,34,32,-1,10,17,21,-1,21,15,10,-1,14,13,30,-1,39,11,35,-1,9,23,3,-1,3,2,9,-1,0,2,3,-1,3,4,5,-1,0,3,5,-1,1,0,5,-1,49,48,47,-1,49,47,46,-1,45,49,46,-1,55,51,57,-1,57,56,55,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,55,54,53,-1,51,55,53,-1,51,53,52,-1,24,40,41,-1,41,26,24,-1,26,41,42,-1,42,27,26,-1,27,42,43,-1,43,25,27,-1,25,43,40,-1,40,24,25,-1,26,44,45,-1,45,36,26,-1,35,45,46,-1,46,39,35,-1,39,46,47,-1,47,33,39,-1,34,47,48,-1,48,32,34,-1,32,48,49,-1,49,37,32,-1,38,49,50,-1,50,27,38,-1,27,50,44,-1,44,26,27,-1,30,51,52,-1,52,14,30,-1,14,52,53,-1,53,20,14,-1,21,53,54,-1,54,15,21,-1,15,54,55,-1,55,28,15,-1,29,55,56,-1,56,24,29,-1,24,56,57,-1,57,25,24,-1,25,57,51,-1,51,31,25,-1}, 336);
SoCoordinate* SoCoordinate209 = new SoCoordinate();
SoCoordinate209->setPoint(new float[]{-0.1594,-0.1332,0.7353,-0.1083,-0.5433,0.705,0.2948,-0.537,0.6162,0.3607,-0.1332,0.6075,0.3179,0.2847,0.6096,-0.1134,0.2976,0.7106,0.2307,0.3831,0.1658,-0.1687,-0.4707,0.2753,-0.1683,0.3967,0.266,0.2141,-0.4772,0.1676,-0.2828,0.3217,0.2825,-0.2814,-0.3164,0.2886,-0.2764,-0.0018,0.3432,-0.2194,-0.0661,0.3461,0.2983,-0.0994,0.2248,-0.3383,-0.5032,-0.1922,-0.3361,0.5433,-0.1564,0.2723,-0.5039,-0.3421,0.2682,0.4999,-0.3003,-0.3256,-0.4714,0.0864,-0.3165,0.4151,0.0671,0.3314,0.3308,0.1403,0.3388,-0.0098,0.2061,0.2976,-0.4701,-0.0746,0.2868,0.3935,-0.0986,0.3268,-0.4338,0.1421,-0.2714,-0.3691,-0.4482,0.0939,-0.3695,-0.5391,0.091,0.3914,-0.5067,-0.2699,0.4174,-0.422,0.4721,-0.2654,-0.2843,0.4847,-0.2485,-0.151,0.4993,-0.2304,-0.0429,0.5052,-0.0191,-0.011,0.5015,0.1507,-0.0438,0.4793,0.182,-0.1629,0.47,0.235,-0.2634,-0.4981,0.3267,-0.001,-0.4733,0.2524,0.1707,-0.4685,-0.002,0.2185,-0.4718,-0.2559,0.1742,-0.5063,-0.3741,0.0202,-0.5105,-0.3938,-0.1519,-0.5097,0.3977,-0.1248}, 132);
SoIndexedFaceSet208->setCoord(*SoCoordinate209);

SoTextureCoordinate* SoTextureCoordinate210 = new SoTextureCoordinate();
SoTextureCoordinate210->setPoint(new float[]{0.1706,0.0686,0.1709,0.0678,0.1824,0.0523,0.183,0.0511,0.1834,0.0508,0.1716,0.0676,0.1882,0.0556,0.1745,0.076,0.1748,0.0736,0.1886,0.0572,0.2327,0.0796,0.2439,0.0803,0.2076,0.0485,0.2162,0.0476,0.2201,0.0466,0.2302,0.0796,0.2219,0.0517,0.2301,0.0734,0.2486,0.0743,0.2027,0.0537,0.2224,0.0526,0.2293,0.0736,0.1746,0.075,0.1885,0.0566,0.1801,0.0847,0.1811,0.0824,0.1952,0.0651,0.195,0.0629,0.2293,0.0837,0.1769,0.0796,0.2191,0.0403,0.1766,0.0777,0.2037,0.047,0.2486,0.0741,0.2026,0.0539,0.2444,0.0847,0.1915,0.0602,0.2041,0.0405,0.1915,0.0578,0.2464,0.0799,0.1801,0.0847,0.1952,0.0651,0.195,0.0629,0.1811,0.0824,0.1952,0.0651,0.1915,0.0602,0.2464,0.0799,0.2486,0.0741,0.2037,0.047,0.2041,0.0405,0.195,0.0629,0.1766,0.0777,0.2201,0.0466,0.2224,0.0526,0.2302,0.0796,0.2293,0.0837,0.1801,0.0847,0.1811,0.0824}, 116);
SoIndexedFaceSet208->setTexCoord(*SoTextureCoordinate210);

SoShape204->setGeometry(*SoIndexedFaceSet208);

SoTransform203->addChild(*SoShape204);

SoHAnimSegment202->addChild(*SoTransform203);

SoHAnimJoint201->addChildren(*SoHAnimSegment202);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint211->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint211->setCenter(new float[]{4.394,0.5299,4.91});
SoHAnimJoint211->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint211->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment212 = new SoHAnimSegment();
SoHAnimSegment212->X3DNode::setName(QString("l_tarsal_middle_phalanx_3"));
SoHAnimSegment212->setDEF(QString("hanim_l_tarsal_middle_phalanx_3"));
SoTransform* SoTransform213 = new SoTransform();
SoTransform213->setTranslation(new float[]{4.394,0.5299,4.91});
SoShape* SoShape214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance215 = new SoVRMLAppearance();
SoMaterial* SoMaterial216 = new SoMaterial();
SoMaterial216->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance215->addChild(*SoMaterial216);

SoImageTexture* SoImageTexture217 = new SoImageTexture();
SoImageTexture217->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance215->addChild(*SoImageTexture217);

SoShape214->addChild(*SoVRMLAppearance215);

SoIndexedFaceSet* SoIndexedFaceSet218 = new SoIndexedFaceSet();
SoIndexedFaceSet218->setCoordIndex(new int32_t[]{1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1}, 176);
SoIndexedFaceSet218->setCreaseAngle(3.14159);
SoIndexedFaceSet218->setTexCoordIndex(new int32_t[]{0,1,8,-1,8,9,0,-1,2,0,9,-1,9,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,13,4,-1,14,6,7,-1,7,12,14,-1,8,1,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,13,11,-1,12,20,21,-1,21,14,12,-1,15,21,16,-1,16,8,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1}, 176);
SoCoordinate* SoCoordinate219 = new SoCoordinate();
SoCoordinate219->setPoint(new float[]{-0.2639,-0.0654,0.4775,-0.2294,-0.4369,0.4537,0.3569,-0.4369,0.3314,0.4011,-0.0654,0.3295,0.356,0.2278,0.3349,-0.2178,0.2506,0.4454,-0.266,0.0061,0.0655,-0.2149,-0.404,0.0352,0.1882,-0.3977,-0.0536,0.2542,0.0061,-0.0624,0.2113,0.424,-0.0602,-0.22,0.4369,0.0407,-0.2241,0.0073,-0.12,-0.1856,-0.309,-0.1472,0.0609,-0.3052,-0.1988,0.1126,0.0092,-0.2043,0.0789,0.3331,-0.2044,-0.1892,0.3412,-0.1423,-0.0664,-0.2871,0.5717,-0.0852,-0.0696,0.5924,-0.0631,0.0962,0.5657,0.261,0.0833,0.5084,0.2846,-0.0679,0.5073,0.2579,-0.2871,0.5052}, 72);
SoIndexedFaceSet218->setCoord(*SoCoordinate219);

SoTextureCoordinate* SoTextureCoordinate220 = new SoTextureCoordinate();
SoTextureCoordinate220->setPoint(new float[]{0.1653,0.0654,0.1636,0.063,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1651,0.0639,0.1293,0.0261,0.0949,0.0775,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1291,0.0918,0.1834,0.0508,0.1554,0.0532,0.1716,0.0676,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1834,0.0508,0.1554,0.0532,0.1653,0.0654,0.1636,0.063,0.1651,0.0639,0.0949,0.0775,0.1792,0.0409,0.1795,0.0453}, 56);
SoIndexedFaceSet218->setTexCoord(*SoTextureCoordinate220);

SoShape214->setGeometry(*SoIndexedFaceSet218);

SoTransform213->addChild(*SoShape214);

SoHAnimSegment212->addChild(*SoTransform213);

SoHAnimJoint211->addChildren(*SoHAnimSegment212);

SoHAnimJoint* SoHAnimJoint221 = new SoHAnimJoint();
SoHAnimJoint221->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint221->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimJoint221->setCenter(new float[]{4.463,0.4367,5.32});
SoHAnimJoint221->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint221->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment222 = new SoHAnimSegment();
SoHAnimSegment222->X3DNode::setName(QString("l_tarsal_distal_phalanx_3"));
SoHAnimSegment222->setDEF(QString("hanim_l_tarsal_distal_phalanx_3"));
SoTransform* SoTransform223 = new SoTransform();
SoTransform223->setTranslation(new float[]{4.463,0.4367,5.32});
SoShape* SoShape224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance225 = new SoVRMLAppearance();
SoMaterial* SoMaterial226 = new SoMaterial();
SoMaterial226->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance225->addChild(*SoMaterial226);

SoImageTexture* SoImageTexture227 = new SoImageTexture();
SoImageTexture227->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance225->addChild(*SoImageTexture227);

SoShape224->addChild(*SoVRMLAppearance225);

SoIndexedFaceSet* SoIndexedFaceSet228 = new SoIndexedFaceSet();
SoIndexedFaceSet228->setCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,6,0,5,-1,5,11,6,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1}, 128);
SoIndexedFaceSet228->setCreaseAngle(3.14159);
SoIndexedFaceSet228->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,8,-1,8,9,0,-1,1,0,9,-1,9,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,8,3,5,-1,5,15,8,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,8,15,-1}, 128);
SoCoordinate* SoCoordinate229 = new SoCoordinate();
SoCoordinate229->setPoint(new float[]{-0.1552,-0.028,0.3818,-0.166,-0.2652,0.2973,0.2126,-0.2652,0.2123,0.2749,-0.028,0.2919,0.2441,0.2185,0.2385,-0.1507,0.2313,0.332,-0.3325,0.0277,0.0683,-0.298,-0.3438,0.0445,0.2883,-0.3438,-0.0778,0.3325,0.0277,-0.0797,0.2874,0.3209,-0.0743,-0.2864,0.3438,0.0362,-0.2608,0.0241,-0.1382,-0.2381,-0.2318,-0.1597,0.1517,-0.2318,-0.2401,0.1828,0.0254,-0.239,0.1538,0.2121,-0.2369,-0.2327,0.2275,-0.1663}, 54);
SoIndexedFaceSet228->setCoord(*SoCoordinate229);

SoTextureCoordinate* SoTextureCoordinate230 = new SoTextureCoordinate();
SoTextureCoordinate230->setPoint(new float[]{0.1643,0.0579,0.1747,0.0423,0.174,0.0396,0.1638,0.0538,0.1756,0.0403,0.1632,0.0573,0.0915,0.0082,0.066,0.0493,0.1636,0.063,0.1653,0.0654,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.0949,0.0775,0.1293,0.0261,0.1651,0.0639,0.1636,0.063,0.1653,0.0654,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1293,0.0261}, 44);
SoIndexedFaceSet228->setTexCoord(*SoTextureCoordinate230);

SoShape224->setGeometry(*SoIndexedFaceSet228);

SoTransform223->addChild(*SoShape224);

SoHAnimSegment222->addChild(*SoTransform223);

SoHAnimJoint221->addChildren(*SoHAnimSegment222);

SoHAnimJoint211->addChildren(*SoHAnimJoint221);

SoHAnimJoint201->addChildren(*SoHAnimJoint211);

SoHAnimJoint191->addChildren(*SoHAnimJoint201);

SoHAnimJoint181->addChildren(*SoHAnimJoint191);

SoHAnimJoint81->addChildren(*SoHAnimJoint181);

SoHAnimJoint71->addChildren(*SoHAnimJoint81);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->X3DNode::setName(QString("l_calcaneocuboid"));
SoHAnimJoint231->setDEF(QString("hanim_l_calcaneocuboid"));
SoHAnimJoint231->setCenter(new float[]{3.96,2.577,-1.154});
SoHAnimJoint231->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint231->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->X3DNode::setName(QString("l_calcaneus"));
SoHAnimSegment232->setDEF(QString("hanim_l_calcaneus"));
SoTransform* SoTransform233 = new SoTransform();
SoTransform233->setTranslation(new float[]{3.96,2.577,-1.154});
SoShape* SoShape234 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance235 = new SoVRMLAppearance();
SoMaterial* SoMaterial236 = new SoMaterial();
SoMaterial236->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance235->addChild(*SoMaterial236);

SoImageTexture* SoImageTexture237 = new SoImageTexture();
SoImageTexture237->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance235->addChild(*SoImageTexture237);

SoShape234->addChild(*SoVRMLAppearance235);

SoIndexedFaceSet* SoIndexedFaceSet238 = new SoIndexedFaceSet();
SoIndexedFaceSet238->setCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1}, 464);
SoIndexedFaceSet238->setCreaseAngle(3.14159);
SoIndexedFaceSet238->setTexCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,4,7,19,-1,19,18,4,-1,0,3,9,-1,9,8,0,-1,10,11,3,-1,3,2,10,-1,12,13,7,-1,7,6,12,-1,13,20,19,-1,19,7,13,-1,25,9,14,-1,14,26,25,-1,3,11,14,-1,14,9,3,-1,15,16,11,-1,11,10,15,-1,13,17,21,-1,21,20,13,-1,11,16,14,-1,4,18,23,-1,23,5,4,-1,14,37,38,-1,34,35,16,-1,16,15,34,-1,17,36,39,-1,39,21,17,-1,17,13,12,-1,35,37,14,-1,14,16,35,-1,5,27,30,-1,30,6,5,-1,18,1,22,-1,22,23,18,-1,2,1,18,-1,18,19,2,-1,10,2,19,-1,19,20,10,-1,15,10,20,-1,20,21,15,-1,34,15,21,-1,21,39,34,-1,22,1,0,-1,0,8,22,-1,25,24,8,-1,8,9,25,-1,14,38,33,-1,33,26,14,-1,23,29,27,-1,27,5,23,-1,22,28,29,-1,29,23,22,-1,8,24,28,-1,28,22,8,-1,30,31,12,-1,12,6,30,-1,32,40,12,-1,12,31,32,-1,40,36,17,-1,17,12,40,-1,44,43,42,-1,42,41,49,-1,44,42,49,-1,49,48,47,-1,44,49,47,-1,45,44,47,-1,46,45,47,-1,55,54,53,-1,53,52,51,-1,55,53,51,-1,50,55,51,-1,55,50,59,-1,59,56,55,-1,56,59,58,-1,58,57,56,-1,34,41,42,-1,42,35,34,-1,35,42,43,-1,43,37,35,-1,37,43,44,-1,44,38,37,-1,38,44,45,-1,45,33,38,-1,33,45,46,-1,46,32,33,-1,32,46,47,-1,47,40,32,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,39,36,-1,39,49,41,-1,41,34,39,-1,25,50,51,-1,51,24,25,-1,24,51,52,-1,52,28,24,-1,28,52,53,-1,53,29,28,-1,29,53,54,-1,54,27,29,-1,27,54,55,-1,55,30,27,-1,30,55,56,-1,56,31,30,-1,31,56,57,-1,57,32,31,-1,32,57,58,-1,58,33,32,-1,33,58,59,-1,59,26,33,-1,26,59,50,-1,50,25,26,-1}, 464);
SoCoordinate* SoCoordinate239 = new SoCoordinate();
SoCoordinate239->setPoint(new float[]{0.9985,-2.493,-0.8739,0.3444,-2.493,-1.345,0.3385,-2.074,-1.537,1.107,-2.074,-1.019,-0.8502,-2.493,-0.9093,-1.215,-2.492,0.3485,-1.284,-2.074,0.3263,-0.9715,-2.074,-1.057,1.246,-2.492,0.3485,1.327,-2.074,0.3263,0.3384,-1.169,-1.658,1.174,-1.133,-1.133,-1.418,-0.9912,0.3376,-1.047,-1.181,-1.171,1.416,-1.1,0.3376,0.2948,-0.4644,-1.456,1.098,-0.4755,-0.9255,-1.039,-0.4898,-0.9709,-0.2136,-2.493,-1.352,-0.2242,-2.074,-1.543,-0.2315,-1.181,-1.664,-0.2693,-0.4684,-1.462,0.3014,-2.492,0.3485,-0.4242,-2.492,0.3485,1.298,-2.423,1.123,1.418,-2.067,1.103,1.397,-1.134,1.091,-1.106,-2.413,1.234,0.4108,-2.448,1.222,-0.327,-2.447,1.285,-1.248,-2.001,1.208,-1.376,-0.9503,1.205,-1.037,0.3568,1.239,0.8834,0.2818,1.266,0.2501,0.1842,-1.201,1.022,0.3141,-0.6813,-1.031,0.3141,-0.7249,1.164,0.0132,0.0265,1.146,0.0057,0.5457,-0.3051,0.1866,-1.206,-1.343,0.0781,0.3033,0.1992,0.7353,-0.8819,0.8414,0.867,-0.4508,0.9581,0.5635,0.1424,0.9423,0.5539,0.597,0.7475,0.8221,1.135,-0.8525,0.8859,1.112,-1.089,0.6115,0.3971,-0.8201,0.8534,-0.4873,-0.2191,0.7329,-0.8852,1.268,-1.998,1.433,1.191,-2.206,1.429,0.4157,-2.224,1.523,-0.3142,-2.223,1.586,-0.982,-2.198,1.531,-1.083,-1.928,1.525,-1.205,-1.01,1.526,-0.9056,0.0435,1.552,0.7799,-0.0171,1.583,1.248,-1.195,1.42}, 180);
SoIndexedFaceSet238->setCoord(*SoCoordinate239);

SoTextureCoordinate* SoTextureCoordinate240 = new SoTextureCoordinate();
SoTextureCoordinate240->setPoint(new float[]{0.2845,0.0964,0.2768,0.1211,0.2792,0.1228,0.2886,0.0939,0.2493,0.1586,0.2252,0.161,0.2241,0.1634,0.2489,0.1638,0.2727,0.0786,0.2746,0.076,0.2809,0.1238,0.2914,0.0926,0.2206,0.1691,0.249,0.1672,0.2762,0.0729,0.2769,0.1234,0.2869,0.0933,0.2461,0.1652,0.2661,0.1399,0.2685,0.1417,0.27,0.1429,0.2661,0.1424,0.24,0.098,0.2266,0.1229,0.2628,0.0703,0.2665,0.0671,0.2664,0.0668,0.2178,0.1526,0.2363,0.0929,0.2213,0.1179,0.2171,0.1588,0.2129,0.1643,0.2165,0.148,0.2533,0.0835,0.273,0.1232,0.2824,0.0941,0.2433,0.1632,0.2759,0.0832,0.2685,0.0797,0.2623,0.1418,0.2231,0.166,0.273,0.1232,0.2824,0.0941,0.2759,0.0832,0.2685,0.0797,0.2533,0.0835,0.2165,0.148,0.2231,0.166,0.2433,0.1632,0.2623,0.1418,0.2665,0.0671,0.2628,0.0703,0.2363,0.0929,0.2213,0.1179,0.2178,0.1526,0.2171,0.1588,0.2129,0.1643,0.2165,0.148,0.2533,0.0835,0.2664,0.0668}, 120);
SoIndexedFaceSet238->setTexCoord(*SoTextureCoordinate240);

SoShape234->setGeometry(*SoIndexedFaceSet238);

SoTransform233->addChild(*SoShape234);

SoHAnimSegment232->addChild(*SoTransform233);

SoHAnimJoint231->addChildren(*SoHAnimSegment232);

SoHAnimJoint* SoHAnimJoint241 = new SoHAnimJoint();
SoHAnimJoint241->X3DNode::setName(QString("l_transversetarsal"));
SoHAnimJoint241->setDEF(QString("hanim_l_transversetarsal"));
SoHAnimJoint241->setCenter(new float[]{4.917,1.568,0.09285});
SoHAnimJoint241->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint241->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment242 = new SoHAnimSegment();
SoHAnimSegment242->X3DNode::setName(QString("l_cuboid"));
SoHAnimSegment242->setDEF(QString("hanim_l_cuboid"));
SoTransform* SoTransform243 = new SoTransform();
SoTransform243->setTranslation(new float[]{4.917,1.568,0.09285});
SoShape* SoShape244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance245 = new SoVRMLAppearance();
SoMaterial* SoMaterial246 = new SoMaterial();
SoMaterial246->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance245->addChild(*SoMaterial246);

SoImageTexture* SoImageTexture247 = new SoImageTexture();
SoImageTexture247->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance245->addChild(*SoImageTexture247);

SoShape244->addChild(*SoVRMLAppearance245);

SoIndexedFaceSet* SoIndexedFaceSet248 = new SoIndexedFaceSet();
SoIndexedFaceSet248->setCoordIndex(new int32_t[]{1,0,16,-1,16,17,1,-1,3,0,5,-1,5,8,3,-1,6,1,2,-1,2,7,6,-1,2,10,4,-1,18,10,2,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,2,-1,2,4,9,-1,8,15,14,-1,14,3,8,-1,3,19,16,-1,16,0,3,-1,14,19,3,-1,1,17,18,-1,18,2,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1}, 328);
SoIndexedFaceSet248->setCreaseAngle(3.14159);
SoIndexedFaceSet248->setTexCoordIndex(new int32_t[]{1,0,16,-1,16,17,1,-1,2,0,5,-1,5,8,2,-1,6,1,3,-1,3,7,6,-1,3,10,4,-1,18,10,3,-1,4,12,13,-1,13,9,4,-1,11,12,4,-1,4,10,11,-1,6,5,0,-1,0,1,6,-1,9,7,3,-1,3,4,9,-1,8,15,14,-1,14,2,8,-1,2,19,16,-1,16,0,2,-1,14,19,2,-1,1,17,18,-1,18,3,1,-1,27,26,33,-1,33,32,31,-1,27,33,31,-1,30,27,31,-1,21,20,25,-1,25,24,21,-1,35,34,42,-1,36,35,42,-1,42,41,40,-1,36,42,40,-1,39,36,40,-1,22,21,24,-1,24,23,22,-1,11,20,21,-1,21,12,11,-1,12,21,22,-1,22,13,12,-1,39,38,37,-1,37,36,39,-1,15,23,24,-1,24,14,15,-1,14,24,25,-1,25,19,14,-1,30,29,28,-1,28,27,30,-1,10,26,27,-1,27,11,10,-1,11,27,28,-1,28,20,11,-1,20,28,29,-1,29,25,20,-1,25,29,30,-1,30,19,25,-1,19,30,31,-1,31,16,19,-1,16,31,32,-1,32,17,16,-1,17,32,33,-1,33,18,17,-1,18,33,26,-1,26,10,18,-1,5,34,35,-1,35,8,5,-1,8,35,36,-1,36,15,8,-1,15,36,37,-1,37,23,15,-1,23,37,38,-1,38,22,23,-1,22,38,39,-1,39,13,22,-1,13,39,40,-1,40,9,13,-1,9,40,41,-1,41,7,9,-1,7,41,42,-1,42,6,7,-1,6,42,34,-1,34,5,6,-1}, 328);
SoCoordinate* SoCoordinate249 = new SoCoordinate();
SoCoordinate249->setPoint(new float[]{0.3927,-1.345,0.6502,0.5513,-1.052,0.467,0.4205,-0.159,0.5973,-0.212,-1.391,0.7994,-0.0207,0.5191,0.7402,0.62,-1.389,1.36,0.7814,-1.064,1.28,0.629,-0.2544,1.366,0.0531,-1.438,1.517,0.0856,0.2092,1.533,-0.0741,1.291,0.0195,-0.563,1.439,0.3053,-0.5395,0.8768,0.8021,-0.4707,0.5296,1.67,-0.5704,-1.398,0.8063,-0.544,-1.423,1.662,0.3405,-1.414,-0.124,0.4606,-1.058,-0.1434,0.4397,-0.1251,-0.1558,-0.5467,-1.439,-0.0243,-0.9941,0.9843,0.4637,-0.9743,0.7175,0.6996,-0.9157,0.4028,1.487,-0.9807,-1.215,1.481,-0.9974,-1.195,0.8178,-0.9758,-1.225,0.2106,-0.3762,1.179,-0.4448,-0.695,1.276,-0.2292,-1.005,0.9499,-0.116,-0.988,-1.072,-0.3476,-0.6823,-1.225,-0.5215,0.0476,-1.206,-0.5746,0.1183,-0.9956,-0.5875,0.0976,-0.1248,-0.6032,0.555,-1.35,1.795,0.0949,-1.389,1.923,-0.4583,-1.376,2.08,-0.7563,-1.099,1.955,-0.702,0.2537,1.96,-0.45,0.166,2.097,0.0298,-0.1076,1.961,0.5117,-0.5116,1.812,0.6379,-1.177,1.735}, 129);
SoIndexedFaceSet248->setCoord(*SoCoordinate249);

SoTextureCoordinate* SoTextureCoordinate250 = new SoTextureCoordinate();
SoTextureCoordinate250->setPoint(new float[]{0.2528,0.0622,0.2585,0.0581,0.2383,0.0796,0.2566,0.0607,0.243,0.0749,0.2469,0.052,0.2512,0.047,0.2484,0.051,0.2292,0.0691,0.2342,0.0682,0.2533,0.0835,0.2407,0.0951,0.2314,0.0879,0.2226,0.0828,0.2271,0.0958,0.2197,0.0903,0.2628,0.0703,0.2665,0.0671,0.2664,0.0668,0.2363,0.0929,0.2407,0.0951,0.2314,0.0879,0.2226,0.0828,0.2197,0.0903,0.2271,0.0958,0.2363,0.0929,0.2533,0.0835,0.2407,0.0951,0.2407,0.0951,0.2363,0.0929,0.2363,0.0929,0.2628,0.0703,0.2665,0.0671,0.2664,0.0668,0.2469,0.052,0.2292,0.0691,0.2197,0.0903,0.2197,0.0903,0.2226,0.0828,0.2226,0.0828,0.2342,0.0682,0.2484,0.051,0.2512,0.047}, 86);
SoIndexedFaceSet248->setTexCoord(*SoTextureCoordinate250);

SoShape244->setGeometry(*SoIndexedFaceSet248);

SoTransform243->addChild(*SoShape244);

SoHAnimSegment242->addChild(*SoTransform243);

SoHAnimJoint241->addChildren(*SoHAnimSegment242);

SoHAnimJoint* SoHAnimJoint251 = new SoHAnimJoint();
SoHAnimJoint251->X3DNode::setName(QString("l_tarsometatarsal_4"));
SoHAnimJoint251->setDEF(QString("hanim_l_tarsometatarsal_4"));
SoHAnimJoint251->setCenter(new float[]{4.733,1.091,1.708});
SoHAnimJoint251->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint251->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment252 = new SoHAnimSegment();
SoHAnimSegment252->X3DNode::setName(QString("l_metatarsal_4"));
SoHAnimSegment252->setDEF(QString("hanim_l_metatarsal_4"));
SoTransform* SoTransform253 = new SoTransform();
SoTransform253->setTranslation(new float[]{4.733,1.091,1.708});
SoShape* SoShape254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance255 = new SoVRMLAppearance();
SoMaterial* SoMaterial256 = new SoMaterial();
SoMaterial256->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance255->addChild(*SoMaterial256);

SoImageTexture* SoImageTexture257 = new SoImageTexture();
SoImageTexture257->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance255->addChild(*SoImageTexture257);

SoShape254->addChild(*SoVRMLAppearance255);

SoIndexedFaceSet* SoIndexedFaceSet258 = new SoIndexedFaceSet();
SoIndexedFaceSet258->setCoordIndex(new int32_t[]{11,16,17,-1,17,13,11,-1,10,14,16,-1,16,11,10,-1,5,7,3,-1,3,1,5,-1,0,4,6,-1,6,2,0,-1,14,10,12,-1,12,15,14,-1,7,4,0,-1,0,3,7,-1,8,9,5,-1,5,1,8,-1,40,37,36,-1,36,41,40,-1,48,45,44,-1,44,49,48,-1,27,31,28,-1,28,31,30,-1,30,29,28,-1,34,33,32,-1,32,35,34,-1,35,32,31,-1,31,27,35,-1,18,24,19,-1,26,25,24,-1,24,18,26,-1,20,23,22,-1,22,21,20,-1,19,24,23,-1,23,20,19,-1,5,18,19,-1,19,7,5,-1,7,19,20,-1,20,4,7,-1,4,20,21,-1,21,6,4,-1,40,39,38,-1,38,37,40,-1,15,22,23,-1,23,14,15,-1,14,23,24,-1,24,16,14,-1,16,24,25,-1,25,17,16,-1,44,51,50,-1,50,49,44,-1,9,26,18,-1,18,5,9,-1,3,27,28,-1,28,1,3,-1,1,28,29,-1,29,8,1,-1,48,47,46,-1,46,45,48,-1,13,30,31,-1,31,11,13,-1,11,31,32,-1,32,10,11,-1,10,32,33,-1,33,12,10,-1,36,43,42,-1,42,41,36,-1,2,34,35,-1,35,0,2,-1,0,35,27,-1,27,3,0,-1,12,36,37,-1,37,15,12,-1,15,37,38,-1,38,22,15,-1,22,38,39,-1,39,21,22,-1,21,39,40,-1,40,6,21,-1,6,40,41,-1,41,2,6,-1,2,41,42,-1,42,34,2,-1,34,42,43,-1,43,33,34,-1,33,43,36,-1,36,12,33,-1,17,44,45,-1,45,13,17,-1,13,45,46,-1,46,30,13,-1,30,46,47,-1,47,29,30,-1,29,47,48,-1,48,8,29,-1,8,48,49,-1,49,9,8,-1,9,49,50,-1,50,26,9,-1,26,50,51,-1,51,25,26,-1,25,51,44,-1,44,17,25,-1}, 400);
SoIndexedFaceSet258->setCreaseAngle(3.14159);
SoIndexedFaceSet258->setTexCoordIndex(new int32_t[]{5,16,17,-1,17,13,5,-1,2,7,16,-1,16,5,2,-1,9,12,6,-1,6,1,9,-1,0,8,11,-1,11,4,0,-1,7,2,3,-1,3,10,7,-1,12,8,0,-1,0,6,12,-1,14,15,9,-1,9,1,14,-1,42,39,38,-1,38,43,42,-1,50,47,46,-1,46,51,50,-1,29,18,30,-1,30,33,32,-1,32,31,30,-1,36,35,34,-1,34,37,36,-1,37,34,33,-1,33,29,37,-1,20,19,21,-1,28,27,26,-1,26,20,28,-1,22,25,24,-1,24,23,22,-1,21,26,25,-1,25,22,21,-1,9,20,21,-1,21,12,9,-1,12,21,22,-1,22,8,12,-1,8,22,23,-1,23,11,8,-1,42,41,40,-1,40,39,42,-1,10,24,25,-1,25,7,10,-1,7,25,26,-1,26,16,7,-1,16,26,27,-1,27,17,16,-1,46,53,52,-1,52,51,46,-1,15,28,20,-1,20,9,15,-1,6,29,30,-1,30,1,6,-1,1,30,31,-1,31,14,1,-1,50,49,48,-1,48,47,50,-1,13,32,33,-1,33,5,13,-1,5,33,34,-1,34,2,5,-1,2,34,35,-1,35,3,2,-1,38,45,44,-1,44,43,38,-1,4,36,37,-1,37,0,4,-1,0,37,29,-1,29,6,0,-1,3,38,39,-1,39,10,3,-1,10,39,40,-1,40,24,10,-1,24,40,41,-1,41,23,24,-1,23,41,42,-1,42,11,23,-1,11,42,43,-1,43,4,11,-1,4,43,44,-1,44,36,4,-1,36,44,45,-1,45,35,36,-1,35,45,38,-1,38,3,35,-1,17,46,47,-1,47,13,17,-1,13,47,48,-1,48,32,13,-1,32,48,49,-1,49,31,32,-1,31,49,50,-1,50,14,31,-1,14,50,51,-1,51,15,14,-1,15,51,52,-1,52,28,15,-1,28,52,53,-1,53,27,28,-1,27,53,46,-1,46,17,27,-1}, 400);
SoCoordinate* SoCoordinate259 = new SoCoordinate();
SoCoordinate259->setPoint(new float[]{0.43,0.2032,1.608,0.3411,0.4771,0.4203,0.411,0.0139,2.079,0.4023,0.3367,1.016,-0.2305,0.2838,1.729,-0.2723,0.7695,0.5671,-0.1775,0.078,2.232,-0.2625,0.5267,1.148,0.2694,0.6861,-0.0829,-0.2869,1.007,0.0542,0.3368,-1.007,1.41,0.2972,-0.9844,0.3484,0.4433,-0.8849,2.036,0.2369,-0.9615,-0.0987,-0.2929,-1.007,1.64,-0.1734,-0.9258,2.19,-0.3108,-0.9625,0.4987,-0.3602,-0.9465,0.0466,-0.5224,0.6131,0.5138,-0.5113,0.369,1.098,-0.4835,0.1258,1.68,-0.4517,-0.0328,2.07,-0.4416,-0.7633,2.038,-0.5332,-0.8205,1.648,-0.5476,-0.7772,0.5234,-0.5844,-0.7671,0.2439,-0.5243,0.735,0.2495,0.6251,0.1523,0.8741,0.5638,0.2829,0.284,0.5136,0.4134,-0.0498,0.4878,-0.815,-0.0625,0.5332,-0.8303,0.2548,0.5714,-0.8502,1.274,0.6659,-0.7584,1.777,0.6293,-0.1071,1.81,0.6528,0.0321,1.441,0.4534,-0.7489,2.227,-0.1154,-0.7865,2.387,-0.2893,-0.6899,2.374,-0.2972,-0.1417,2.398,-0.1301,-0.0829,2.414,0.4167,-0.1408,2.263,0.5514,-0.2089,2.135,0.5785,-0.6808,2.111,-0.4067,-0.7963,-0.3118,0.1321,-0.8098,-0.4434,0.2751,-0.7197,-0.4419,0.2976,0.3522,-0.4308,0.1123,0.5657,-0.4267,-0.366,0.8403,-0.3164,-0.4968,0.6732,-0.1797,-0.5511,-0.6808,-0.1849}, 156);
SoIndexedFaceSet258->setCoord(*SoCoordinate259);

SoTextureCoordinate* SoTextureCoordinate260 = new SoTextureCoordinate();
SoTextureCoordinate260->setPoint(new float[]{0.2117,0.0481,0.2254,0.0615,0.2142,0.0508,0.2102,0.0461,0.2083,0.0443,0.2202,0.0585,0.2186,0.0548,0.1989,0.0701,0.1984,0.068,0.2138,0.0778,0.1952,0.0651,0.195,0.0629,0.2061,0.0729,0.2292,0.0691,0.2342,0.0682,0.2226,0.0828,0.2129,0.0844,0.2197,0.0903,0.2254,0.0615,0.2061,0.0729,0.2138,0.0778,0.2061,0.0729,0.1984,0.068,0.195,0.0629,0.195,0.0629,0.1984,0.068,0.2061,0.0729,0.2226,0.0828,0.2226,0.0828,0.2186,0.0548,0.2254,0.0615,0.2342,0.0682,0.2342,0.0682,0.2254,0.0615,0.2117,0.0481,0.2083,0.0443,0.2083,0.0443,0.2117,0.0481,0.2083,0.0443,0.195,0.0629,0.195,0.0629,0.195,0.0629,0.195,0.0629,0.2083,0.0443,0.2083,0.0443,0.2083,0.0443,0.2226,0.0828,0.2342,0.0682,0.2342,0.0682,0.2342,0.0682,0.2342,0.0682,0.2226,0.0828,0.2226,0.0828,0.2226,0.0828}, 108);
SoIndexedFaceSet258->setTexCoord(*SoTextureCoordinate260);

SoShape254->setGeometry(*SoIndexedFaceSet258);

SoTransform253->addChild(*SoShape254);

SoHAnimSegment252->addChild(*SoTransform253);

SoHAnimJoint251->addChildren(*SoHAnimSegment252);

SoHAnimJoint* SoHAnimJoint261 = new SoHAnimJoint();
SoHAnimJoint261->X3DNode::setName(QString("l_metatarsophalangeal_4"));
SoHAnimJoint261->setDEF(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimJoint261->setCenter(new float[]{4.883,0.6379,4.052});
SoHAnimJoint261->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint261->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment262 = new SoHAnimSegment();
SoHAnimSegment262->X3DNode::setName(QString("l_tarsal_proximal_phalanx_4"));
SoHAnimSegment262->setDEF(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoTransform* SoTransform263 = new SoTransform();
SoTransform263->setTranslation(new float[]{4.883,0.6379,4.052});
SoShape* SoShape264 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance265 = new SoVRMLAppearance();
SoMaterial* SoMaterial266 = new SoMaterial();
SoMaterial266->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance265->addChild(*SoMaterial266);

SoImageTexture* SoImageTexture267 = new SoImageTexture();
SoImageTexture267->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance265->addChild(*SoImageTexture267);

SoShape264->addChild(*SoVRMLAppearance265);

SoIndexedFaceSet* SoIndexedFaceSet268 = new SoIndexedFaceSet();
SoIndexedFaceSet268->setCoordIndex(new int32_t[]{13,10,1,-1,1,2,13,-1,10,8,3,-1,3,1,10,-1,3,8,0,-1,0,4,3,-1,0,9,5,-1,5,4,0,-1,7,6,5,-1,5,9,7,-1,6,7,13,-1,13,2,6,-1,22,14,18,-1,18,17,22,-1,20,15,21,-1,21,19,20,-1,9,21,15,-1,15,7,9,-1,10,16,14,-1,8,10,14,-1,14,22,8,-1,21,9,23,-1,11,12,13,-1,13,7,11,-1,0,8,24,-1,24,25,0,-1,16,10,13,-1,13,12,16,-1,23,9,0,-1,0,25,23,-1,11,7,15,-1,24,8,22,-1,35,34,33,-1,31,35,33,-1,31,33,32,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,37,40,39,-1,39,38,37,-1,28,27,26,-1,26,29,28,-1,35,31,30,-1,30,36,35,-1,37,43,42,-1,40,37,42,-1,40,42,41,-1,18,26,27,-1,27,17,18,-1,17,27,28,-1,28,19,17,-1,19,28,29,-1,29,20,19,-1,20,29,26,-1,26,18,20,-1,17,30,31,-1,31,22,17,-1,22,31,32,-1,32,24,22,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,23,25,-1,23,34,35,-1,35,21,23,-1,21,35,36,-1,36,19,21,-1,19,36,30,-1,30,17,19,-1,14,37,38,-1,38,18,14,-1,18,38,39,-1,39,20,18,-1,20,39,40,-1,40,15,20,-1,15,40,41,-1,41,11,15,-1,11,41,42,-1,42,12,11,-1,12,42,43,-1,43,16,12,-1,16,43,37,-1,37,14,16,-1}, 336);
SoIndexedFaceSet268->setCreaseAngle(3.14159);
SoIndexedFaceSet268->setTexCoordIndex(new int32_t[]{27,10,1,-1,1,2,27,-1,10,11,3,-1,3,1,10,-1,3,11,0,-1,0,4,3,-1,0,12,5,-1,5,4,0,-1,9,6,5,-1,5,12,9,-1,6,9,27,-1,27,2,6,-1,35,7,29,-1,29,28,35,-1,31,8,33,-1,33,30,31,-1,15,32,16,-1,16,14,15,-1,17,18,13,-1,19,17,13,-1,13,34,19,-1,32,15,36,-1,20,21,22,-1,22,14,20,-1,23,19,37,-1,37,38,23,-1,18,17,25,-1,25,24,18,-1,36,15,26,-1,26,39,36,-1,20,14,16,-1,37,19,34,-1,49,48,47,-1,45,49,47,-1,45,47,46,-1,1,3,4,-1,4,5,6,-1,1,4,6,-1,2,1,6,-1,51,54,53,-1,53,52,51,-1,42,41,40,-1,40,43,42,-1,49,45,44,-1,44,50,49,-1,51,57,56,-1,54,51,56,-1,54,56,55,-1,29,40,41,-1,41,28,29,-1,28,41,42,-1,42,30,28,-1,30,42,43,-1,43,31,30,-1,31,43,40,-1,40,29,31,-1,28,44,45,-1,45,35,28,-1,34,45,46,-1,46,37,34,-1,37,46,47,-1,47,38,37,-1,39,47,48,-1,48,36,39,-1,36,48,49,-1,49,32,36,-1,33,49,50,-1,50,30,33,-1,30,50,44,-1,44,28,30,-1,7,51,52,-1,52,29,7,-1,29,52,53,-1,53,31,29,-1,31,53,54,-1,54,8,31,-1,16,54,55,-1,55,20,16,-1,20,55,56,-1,56,21,20,-1,24,56,57,-1,57,18,24,-1,18,57,51,-1,51,13,18,-1}, 336);
SoCoordinate* SoCoordinate269 = new SoCoordinate();
SoCoordinate269->setPoint(new float[]{0.3278,-0.057,0.1883,-0.0525,-0.5059,0.7169,-0.1097,-0.1019,0.7273,0.3613,-0.5312,0.6151,0.4078,-0.1019,0.5996,0.3711,0.3174,0.6207,-0.072,0.3613,0.7233,-0.167,0.3917,0.3145,0.2644,-0.4262,0.1511,0.2709,0.3574,0.152,-0.1661,-0.4211,0.2992,-0.2641,0.3621,0.329,-0.2567,0.0215,0.3948,-0.1987,-0.0648,0.3873,-0.2979,-0.4388,0.1141,-0.3087,0.4248,0.0901,-0.2687,-0.4025,0.3308,0.2935,-0.4317,-0.3075,-0.3232,-0.4726,-0.1534,0.2611,0.4671,-0.2648,-0.3273,0.5312,-0.1116,0.3082,0.3589,-0.1241,0.3082,-0.3803,-0.1229,0.3514,0.3217,0.1064,0.3527,-0.414,0.1117,0.3662,-0.0844,0.1549,-0.2703,-0.3363,-0.4209,0.1122,-0.3109,-0.516,0.0877,0.3691,-0.484,-0.2733,0.4085,-0.3896,0.5115,-0.288,-0.3108,0.5065,-0.2701,-0.2438,0.5667,-0.2929,-0.0861,0.5748,-0.0815,-0.058,0.5609,0.2313,-0.0969,0.5027,0.2605,-0.2789,0.4848,0.2657,-0.2832,-0.5105,-0.3286,0.0612,-0.5235,-0.3455,-0.0729,-0.526,0.3481,-0.044,-0.5229,0.3183,0.0128,-0.4893,0.27,0.1966,-0.4847,0.0183,0.2454,-0.4943,-0.306,0.1964}, 132);
SoIndexedFaceSet268->setCoord(*SoCoordinate269);

SoTextureCoordinate* SoTextureCoordinate270 = new SoTextureCoordinate();
SoTextureCoordinate270->setPoint(new float[]{0.2033,0.0375,0.1866,0.0487,0.186,0.0472,0.1969,0.0343,0.1963,0.0328,0.1973,0.0341,0.1873,0.048,0.1915,0.0602,0.1915,0.0578,0.1897,0.0535,0.1888,0.0569,0.2031,0.037,0.2012,0.0381,0.2444,0.0847,0.2208,0.06,0.2111,0.0557,0.2254,0.054,0.2483,0.0809,0.2464,0.0799,0.2587,0.0865,0.225,0.0604,0.2239,0.0673,0.2238,0.0671,0.267,0.0845,0.2486,0.0741,0.2486,0.074,0.2049,0.059,0.1896,0.055,0.2102,0.0461,0.1952,0.0651,0.2083,0.0443,0.195,0.0629,0.2109,0.0476,0.2048,0.0404,0.2576,0.0911,0.2063,0.0414,0.2083,0.0537,0.2612,0.0869,0.2671,0.0842,0.2047,0.0593,0.1952,0.0651,0.2102,0.0461,0.2083,0.0443,0.195,0.0629,0.2102,0.0461,0.2063,0.0414,0.2612,0.0869,0.2671,0.0842,0.2083,0.0537,0.2109,0.0476,0.2083,0.0443,0.2444,0.0847,0.1952,0.0651,0.195,0.0629,0.1915,0.0578,0.225,0.0604,0.2239,0.0673,0.2464,0.0799}, 116);
SoIndexedFaceSet268->setTexCoord(*SoTextureCoordinate270);

SoShape264->setGeometry(*SoIndexedFaceSet268);

SoTransform263->addChild(*SoShape264);

SoHAnimSegment262->addChild(*SoTransform263);

SoHAnimJoint261->addChildren(*SoHAnimSegment262);

SoHAnimJoint* SoHAnimJoint271 = new SoHAnimJoint();
SoHAnimJoint271->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint271->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint271->setCenter(new float[]{5.074,0.5442,4.725});
SoHAnimJoint271->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint271->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment272 = new SoHAnimSegment();
SoHAnimSegment272->X3DNode::setName(QString("l_tarsal_middle_phalanx_4"));
SoHAnimSegment272->setDEF(QString("hanim_l_tarsal_middle_phalanx_4"));
SoTransform* SoTransform273 = new SoTransform();
SoTransform273->setTranslation(new float[]{5.074,0.5442,4.725});
SoShape* SoShape274 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance275 = new SoVRMLAppearance();
SoMaterial* SoMaterial276 = new SoMaterial();
SoMaterial276->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance275->addChild(*SoMaterial276);

SoImageTexture* SoImageTexture277 = new SoImageTexture();
SoImageTexture277->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance275->addChild(*SoImageTexture277);

SoShape274->addChild(*SoVRMLAppearance275);

SoIndexedFaceSet* SoIndexedFaceSet278 = new SoIndexedFaceSet();
SoIndexedFaceSet278->setCoordIndex(new int32_t[]{0,1,7,-1,7,6,0,-1,2,0,6,-1,6,8,2,-1,9,3,2,-1,2,8,9,-1,4,3,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,1,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1}, 176);
SoIndexedFaceSet278->setCreaseAngle(3.14159);
SoIndexedFaceSet278->setTexCoordIndex(new int32_t[]{0,1,9,-1,9,8,0,-1,2,0,8,-1,8,10,2,-1,11,3,2,-1,2,10,11,-1,4,3,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,1,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1,22,27,26,-1,26,25,24,-1,22,26,24,-1,23,22,24,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,5,1,-1,6,24,25,-1,25,7,6,-1,4,25,26,-1,26,3,4,-1,3,26,27,-1,27,2,3,-1,2,27,22,-1,22,0,2,-1}, 176);
SoCoordinate* SoCoordinate279 = new SoCoordinate();
SoCoordinate279->setPoint(new float[]{-0.2219,-0.455,0.3874,-0.2704,-0.0797,0.4109,0.2847,-0.455,0.2749,0.3388,-0.0797,0.2793,0.3015,0.1733,0.2582,-0.2248,0.1994,0.3929,-0.243,-0.4122,0.0438,-0.3003,-0.0082,0.0541,0.1707,-0.4375,-0.0581,0.2172,-0.0082,-0.0735,0.1805,0.4111,-0.0525,-0.2626,0.455,0.0501,-0.2483,-0.0038,-0.1702,-0.2041,-0.3133,-0.1768,0.0337,-0.3279,-0.2359,0.0682,-0.0062,-0.2491,0.0403,0.318,-0.2307,-0.2198,0.3438,-0.1726,-0.0622,-0.3044,0.5037,-0.0897,-0.0812,0.5234,-0.0698,0.0446,0.5123,0.208,0.0308,0.465,0.2246,-0.0777,0.4585,0.1903,-0.3044,0.4486}, 72);
SoIndexedFaceSet278->setCoord(*SoCoordinate279);

SoTextureCoordinate* SoTextureCoordinate280 = new SoTextureCoordinate();
SoTextureCoordinate280->setPoint(new float[]{0.1822,0.0458,0.1809,0.0434,0.1953,0.0282,0.1948,0.024,0.1933,0.0293,0.1816,0.0411,0.1287,0.0243,0.0943,0.0785,0.1866,0.0487,0.186,0.0472,0.1969,0.0343,0.1963,0.0328,0.1973,0.0341,0.1322,0.09,0.157,0.0552,0.1873,0.048,0.186,0.0472,0.1866,0.0487,0.1969,0.0343,0.1963,0.0328,0.1973,0.0341,0.157,0.0552,0.1822,0.0458,0.1809,0.0434,0.1816,0.0411,0.0943,0.0785,0.1948,0.024,0.1953,0.0282}, 56);
SoIndexedFaceSet278->setTexCoord(*SoTextureCoordinate280);

SoShape274->setGeometry(*SoIndexedFaceSet278);

SoTransform273->addChild(*SoShape274);

SoHAnimSegment272->addChild(*SoTransform273);

SoHAnimJoint271->addChildren(*SoHAnimSegment272);

SoHAnimJoint* SoHAnimJoint281 = new SoHAnimJoint();
SoHAnimJoint281->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint281->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimJoint281->setCenter(new float[]{5.141,0.4164,5.053});
SoHAnimJoint281->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint281->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment282 = new SoHAnimSegment();
SoHAnimSegment282->X3DNode::setName(QString("l_tarsal_distal_phalanx_4"));
SoHAnimSegment282->setDEF(QString("hanim_l_tarsal_distal_phalanx_4"));
SoTransform* SoTransform283 = new SoTransform();
SoTransform283->setTranslation(new float[]{5.141,0.4164,5.053});
SoShape* SoShape284 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance285 = new SoVRMLAppearance();
SoMaterial* SoMaterial286 = new SoMaterial();
SoMaterial286->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance285->addChild(*SoMaterial286);

SoImageTexture* SoImageTexture287 = new SoImageTexture();
SoImageTexture287->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance285->addChild(*SoImageTexture287);

SoShape284->addChild(*SoVRMLAppearance285);

SoIndexedFaceSet* SoIndexedFaceSet288 = new SoIndexedFaceSet();
SoIndexedFaceSet288->setCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,7,-1,7,6,0,-1,1,0,6,-1,6,8,1,-1,9,2,1,-1,1,8,9,-1,4,2,9,-1,9,10,4,-1,11,5,4,-1,4,10,11,-1,7,3,5,-1,5,11,7,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,7,12,13,-1,13,6,7,-1,6,13,14,-1,14,8,6,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,7,11,-1}, 128);
SoIndexedFaceSet288->setCreaseAngle(3.14159);
SoIndexedFaceSet288->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,3,2,-1,2,4,5,-1,0,3,9,-1,9,8,0,-1,1,0,8,-1,8,10,1,-1,11,2,1,-1,1,10,11,-1,4,2,11,-1,11,12,4,-1,14,6,7,-1,7,13,14,-1,9,3,5,-1,5,15,9,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,9,16,17,-1,17,8,9,-1,8,17,18,-1,18,10,8,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,12,11,-1,13,20,21,-1,21,14,13,-1,15,21,16,-1,16,9,15,-1}, 128);
SoCoordinate* SoCoordinate289 = new SoCoordinate();
SoCoordinate289->setPoint(new float[]{-0.1526,-0.2418,0.2583,0.1598,-0.2418,0.1838,0.1914,0.016,0.2684,-0.1691,0.016,0.3383,0.1611,0.1898,0.2029,-0.1447,0.2049,0.275,-0.2895,-0.3272,0.0593,-0.338,0.0481,0.0828,0.2171,-0.3272,-0.0532,0.2712,0.0481,-0.0488,0.2339,0.301,-0.0699,-0.2924,0.3272,0.0648,-0.2684,0.045,-0.1247,-0.2357,-0.2162,-0.1453,0.0803,-0.2162,-0.2148,0.1196,0.0476,-0.2063,0.0957,0.1923,-0.2297,-0.2421,0.2091,-0.1375}, 54);
SoIndexedFaceSet288->setCoord(*SoCoordinate289);

SoTextureCoordinate* SoTextureCoordinate290 = new SoTextureCoordinate();
SoTextureCoordinate290->setPoint(new float[]{0.1831,0.0355,0.1904,0.0263,0.1901,0.0243,0.1819,0.0351,0.1913,0.0249,0.182,0.0368,0.088,0.0133,0.0677,0.0461,0.1822,0.0458,0.1809,0.0434,0.1953,0.0282,0.1948,0.024,0.1933,0.0293,0.0943,0.0785,0.1287,0.0243,0.1816,0.0411,0.1809,0.0434,0.1822,0.0458,0.1953,0.0282,0.1948,0.024,0.1933,0.0293,0.1287,0.0243}, 44);
SoIndexedFaceSet288->setTexCoord(*SoTextureCoordinate290);

SoShape284->setGeometry(*SoIndexedFaceSet288);

SoTransform283->addChild(*SoShape284);

SoHAnimSegment282->addChild(*SoTransform283);

SoHAnimJoint281->addChildren(*SoHAnimSegment282);

SoHAnimJoint271->addChildren(*SoHAnimJoint281);

SoHAnimJoint261->addChildren(*SoHAnimJoint271);

SoHAnimJoint251->addChildren(*SoHAnimJoint261);

SoHAnimJoint241->addChildren(*SoHAnimJoint251);

SoHAnimJoint* SoHAnimJoint291 = new SoHAnimJoint();
SoHAnimJoint291->X3DNode::setName(QString("l_tarsometatarsal_5"));
SoHAnimJoint291->setDEF(QString("hanim_l_tarsometatarsal_5"));
SoHAnimJoint291->setCenter(new float[]{5.37,0.9309,1.544});
SoHAnimJoint291->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint291->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment292 = new SoHAnimSegment();
SoHAnimSegment292->X3DNode::setName(QString("l_metatarsal_5"));
SoHAnimSegment292->setDEF(QString("hanim_l_metatarsal_5"));
SoTransform* SoTransform293 = new SoTransform();
SoTransform293->setTranslation(new float[]{5.37,0.9309,1.544});
SoShape* SoShape294 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance295 = new SoVRMLAppearance();
SoMaterial* SoMaterial296 = new SoMaterial();
SoMaterial296->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance295->addChild(*SoMaterial296);

SoImageTexture* SoImageTexture297 = new SoImageTexture();
SoImageTexture297->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance295->addChild(*SoImageTexture297);

SoShape294->addChild(*SoVRMLAppearance295);

SoIndexedFaceSet* SoIndexedFaceSet298 = new SoIndexedFaceSet();
SoIndexedFaceSet298->setCoordIndex(new int32_t[]{0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,23,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1}, 352);
SoIndexedFaceSet298->setCreaseAngle(3.14159);
SoIndexedFaceSet298->setTexCoordIndex(new int32_t[]{0,10,1,-1,2,9,17,-1,17,12,2,-1,6,14,11,-1,11,0,6,-1,2,8,7,-1,7,1,2,-1,3,18,19,-1,19,4,3,-1,13,5,20,-1,20,22,13,-1,5,9,10,-1,10,4,5,-1,6,0,1,-1,1,7,6,-1,8,2,12,-1,12,15,8,-1,9,5,13,-1,13,17,9,-1,0,11,16,-1,16,3,0,-1,9,2,1,-1,1,10,9,-1,3,4,10,-1,10,0,3,-1,16,21,18,-1,18,3,16,-1,19,20,5,-1,5,4,19,-1,35,34,33,-1,36,35,33,-1,32,36,33,-1,27,26,25,-1,25,24,27,-1,41,40,39,-1,41,39,45,-1,44,41,45,-1,28,11,29,-1,28,27,24,-1,24,23,28,-1,29,23,31,-1,31,30,29,-1,11,23,24,-1,24,16,11,-1,16,24,25,-1,25,21,16,-1,32,38,37,-1,37,36,32,-1,22,26,27,-1,27,13,22,-1,13,27,28,-1,28,17,13,-1,17,28,29,-1,29,12,17,-1,12,29,30,-1,30,15,12,-1,44,43,42,-1,42,41,44,-1,14,31,23,-1,23,11,14,-1,21,32,33,-1,33,18,21,-1,18,33,34,-1,34,19,18,-1,19,34,35,-1,35,20,19,-1,20,35,36,-1,36,22,20,-1,22,36,37,-1,37,26,22,-1,26,37,38,-1,38,25,26,-1,25,38,32,-1,32,21,25,-1,7,39,40,-1,40,6,7,-1,6,40,41,-1,41,14,6,-1,14,41,42,-1,42,31,14,-1,31,42,43,-1,43,30,31,-1,30,43,44,-1,44,15,30,-1,15,44,45,-1,45,8,15,-1,8,45,39,-1,39,7,8,-1}, 352);
SoCoordinate* SoCoordinate299 = new SoCoordinate();
SoCoordinate299->setPoint(new float[]{0.3306,-0.8463,1.144,0.5928,-0.4351,1.443,0.453,0.1964,1.556,0.3168,-0.7816,0.375,0.4901,-0.4351,0.3998,0.3189,0.3175,0.4396,0.3613,-0.7553,2.007,0.5238,-0.4351,1.966,0.4304,0.0633,2.009,0.3979,0.2569,1.048,0.5415,-0.4351,0.9212,-0.2997,-0.8463,1.575,-0.2064,0.3634,1.773,-0.2954,0.6373,0.5845,-0.1931,-0.7247,2.2,-0.2255,0.1741,2.243,-0.3393,-0.8242,0.5125,-0.2342,0.4968,1.18,0.1673,-0.7522,-0.0918,0.3287,-0.4266,-0.171,0.1763,0.3828,-0.0859,-0.3996,-0.8013,0.0654,-0.3671,0.8463,0.0812,-0.5368,-0.6501,1.58,-0.5743,-0.6285,0.5402,-0.6111,-0.6148,0.2736,-0.5885,0.5776,0.2852,-0.5498,0.4676,0.5498,-0.4891,0.3238,1.161,-0.4604,0.1935,1.738,-0.4855,0.0596,2.072,-0.4467,-0.5603,2.042,-0.5171,-0.6818,-0.2412,-0.0362,-0.6408,-0.3566,0.0783,-0.4046,-0.4223,-0.0584,0.3254,-0.3431,-0.5171,0.7097,-0.2325,-0.6459,0.5317,-0.0795,-0.6663,-0.5485,-0.09,0.3834,-0.4628,2.152,0.275,-0.654,2.178,-0.1853,-0.6314,2.365,-0.3686,-0.526,2.255,-0.3984,-0.1094,2.279,-0.2347,-0.0432,2.397,0.3129,-0.1268,2.183}, 138);
SoIndexedFaceSet298->setCoord(*SoCoordinate299);

SoTextureCoordinate* SoTextureCoordinate300 = new SoTextureCoordinate();
SoTextureCoordinate300->setPoint(new float[]{0.2299,0.0317,0.2316,0.0247,0.2265,0.0269,0.241,0.0419,0.244,0.0359,0.2401,0.0413,0.2245,0.0286,0.226,0.0221,0.2232,0.0245,0.2333,0.0341,0.2378,0.0303,0.2142,0.0508,0.2117,0.0481,0.2254,0.0615,0.2102,0.0461,0.2083,0.0443,0.2202,0.0585,0.2186,0.0548,0.2469,0.052,0.2512,0.047,0.2484,0.051,0.2292,0.0691,0.2342,0.0682,0.2142,0.0508,0.2202,0.0585,0.2292,0.0691,0.2342,0.0682,0.2254,0.0615,0.2186,0.0548,0.2117,0.0481,0.2083,0.0443,0.2102,0.0461,0.2292,0.0691,0.2469,0.052,0.2512,0.047,0.2484,0.051,0.2342,0.0682,0.2342,0.0682,0.2292,0.0691,0.226,0.0221,0.2245,0.0286,0.2102,0.0461,0.2102,0.0461,0.2083,0.0443,0.2083,0.0443,0.2232,0.0245}, 92);
SoIndexedFaceSet298->setTexCoord(*SoTextureCoordinate300);

SoShape294->setGeometry(*SoIndexedFaceSet298);

SoTransform293->addChild(*SoShape294);

SoHAnimSegment292->addChild(*SoTransform293);

SoHAnimJoint291->addChildren(*SoHAnimSegment292);

SoHAnimJoint* SoHAnimJoint301 = new SoHAnimJoint();
SoHAnimJoint301->X3DNode::setName(QString("l_metatarsophalangeal_5"));
SoHAnimJoint301->setDEF(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimJoint301->setCenter(new float[]{5.514,0.6076,3.847});
SoHAnimJoint301->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint301->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment302 = new SoHAnimSegment();
SoHAnimSegment302->X3DNode::setName(QString("l_tarsal_proximal_phalanx_5"));
SoHAnimSegment302->setDEF(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoTransform* SoTransform303 = new SoTransform();
SoTransform303->setTranslation(new float[]{5.514,0.6076,3.847});
SoShape* SoShape304 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance305 = new SoVRMLAppearance();
SoMaterial* SoMaterial306 = new SoMaterial();
SoMaterial306->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance305->addChild(*SoMaterial306);

SoImageTexture* SoImageTexture307 = new SoImageTexture();
SoImageTexture307->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance305->addChild(*SoImageTexture307);

SoShape304->addChild(*SoVRMLAppearance305);

SoIndexedFaceSet* SoIndexedFaceSet308 = new SoIndexedFaceSet();
SoIndexedFaceSet308->setCoordIndex(new int32_t[]{2,10,11,-1,11,3,2,-1,0,12,14,-1,14,5,0,-1,2,6,13,-1,13,10,2,-1,0,3,11,-1,11,12,0,-1,15,16,0,-1,0,5,15,-1,17,1,2,-1,2,3,17,-1,16,17,3,-1,3,0,16,-1,2,1,4,-1,4,6,2,-1,6,4,8,-1,7,9,18,-1,18,15,7,-1,8,4,18,-1,18,9,8,-1,7,15,5,-1,1,17,20,-1,20,19,1,-1,17,16,21,-1,21,20,17,-1,16,15,22,-1,22,21,16,-1,22,15,18,-1,18,23,22,-1,23,18,4,-1,4,24,23,-1,24,4,1,-1,1,19,24,-1,27,26,25,-1,28,27,25,-1,29,28,25,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,19,20,24,-1,30,33,32,-1,32,31,30,-1,30,36,35,-1,33,30,35,-1,33,35,34,-1,10,25,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,14,12,-1,14,28,29,-1,29,13,14,-1,13,29,25,-1,25,10,13,-1,6,30,31,-1,31,13,6,-1,13,31,32,-1,32,14,13,-1,14,32,33,-1,33,5,14,-1,5,33,34,-1,34,7,5,-1,7,34,35,-1,35,9,7,-1,9,35,36,-1,36,8,9,-1,8,36,30,-1,30,6,8,-1}, 280);
SoIndexedFaceSet308->setCreaseAngle(3.14159);
SoIndexedFaceSet308->setTexCoordIndex(new int32_t[]{0,23,24,-1,24,1,0,-1,3,25,27,-1,27,2,3,-1,0,4,26,-1,26,23,0,-1,3,1,24,-1,24,25,3,-1,5,6,7,-1,7,8,5,-1,9,10,11,-1,11,12,9,-1,6,13,14,-1,14,7,6,-1,11,10,17,-1,17,15,11,-1,15,17,18,-1,16,19,20,-1,20,5,16,-1,18,17,22,-1,22,21,18,-1,16,5,8,-1,31,30,35,-1,35,34,31,-1,30,29,36,-1,36,35,30,-1,29,28,37,-1,37,36,29,-1,37,28,33,-1,33,38,37,-1,38,33,32,-1,32,39,38,-1,39,32,31,-1,31,34,39,-1,42,41,40,-1,43,42,40,-1,44,43,40,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,34,35,39,-1,45,48,47,-1,47,46,45,-1,45,51,50,-1,48,45,50,-1,48,50,49,-1,23,40,41,-1,41,24,23,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,27,25,-1,27,43,44,-1,44,26,27,-1,26,44,40,-1,40,23,26,-1,4,45,46,-1,46,26,4,-1,26,46,47,-1,47,27,26,-1,27,47,48,-1,48,2,27,-1,8,48,49,-1,49,16,8,-1,16,49,50,-1,50,19,16,-1,21,50,51,-1,51,18,21,-1,18,51,45,-1,45,15,18,-1}, 280);
SoCoordinate* SoCoordinate309 = new SoCoordinate();
SoCoordinate309->setPoint(new float[]{0.2741,0.2687,-0.0725,0.2213,-0.4838,0.1708,0.2231,-0.4049,-0.097,0.3378,-0.1118,-0.0803,-0.1824,-0.3801,0.2853,-0.3221,0.3892,0.0803,-0.3221,-0.35,0.0816,-0.2789,0.352,0.3109,-0.2776,-0.3837,0.3162,-0.2642,-0.0541,0.3594,0.2176,-0.432,-0.2962,0.3801,-0.1118,-0.3374,0.2867,0.3866,-0.2941,-0.3368,-0.4014,-0.103,-0.3692,0.4974,-0.0603,-0.1862,0.3618,0.2861,0.2525,0.289,0.1702,0.3123,-0.0885,0.1981,-0.2184,-0.0456,0.3555,0.2559,-0.4974,0.2967,0.3388,-0.1325,0.3045,0.2868,0.2213,0.2956,-0.1724,0.2818,0.3981,-0.201,-0.1,0.4458,-0.1472,-0.4199,0.395,0.0738,-0.2949,-0.4949,0.1801,-0.0859,-0.5211,0.1104,0.284,-0.4899,-0.3045,0.3558,-0.3464,-0.282,-0.2747,-0.3769,-0.4986,-0.2481,0.0473,-0.4945,-0.2765,-0.0632,-0.5194,0.3282,-0.0342,-0.4997,0.2837,0.029,-0.469,0.2558,0.2138,-0.4531,-0.0475,0.2504,-0.4632,-0.2715,0.2213}, 111);
SoIndexedFaceSet308->setCoord(*SoCoordinate309);

SoTextureCoordinate* SoTextureCoordinate310 = new SoTextureCoordinate();
SoTextureCoordinate310->setPoint(new float[]{0.2192,0.0256,0.2205,0.0195,0.2048,0.0404,0.2199,0.022,0.2063,0.0414,0.2047,0.0523,0.1956,0.0462,0.1979,0.0386,0.2109,0.0476,0.277,0.1031,0.2673,0.0987,0.263,0.1,0.2744,0.109,0.1892,0.0439,0.1911,0.0375,0.2576,0.0911,0.2083,0.0537,0.263,0.0893,0.2612,0.0869,0.2047,0.0593,0.2048,0.0593,0.2671,0.0842,0.2673,0.0839,0.2245,0.0286,0.226,0.0221,0.2232,0.0245,0.2102,0.0461,0.2083,0.0443,0.2039,0.0358,0.2152,0.0224,0.2154,0.0203,0.2126,0.0258,0.2034,0.0366,0.2033,0.0375,0.2114,0.0219,0.2132,0.0168,0.2123,0.0196,0.1999,0.0356,0.201,0.0349,0.2011,0.0354,0.2245,0.0286,0.226,0.0221,0.2232,0.0245,0.2083,0.0443,0.2102,0.0461,0.2576,0.0911,0.2102,0.0461,0.2083,0.0443,0.2048,0.0404,0.2083,0.0537,0.2047,0.0593,0.2612,0.0869}, 104);
SoIndexedFaceSet308->setTexCoord(*SoTextureCoordinate310);

SoShape304->setGeometry(*SoIndexedFaceSet308);

SoTransform303->addChild(*SoShape304);

SoHAnimSegment302->addChild(*SoTransform303);

SoHAnimJoint301->addChildren(*SoHAnimSegment302);

SoHAnimJoint* SoHAnimJoint311 = new SoHAnimJoint();
SoHAnimJoint311->X3DNode::setName(QString("l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint311->setDEF(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint311->setCenter(new float[]{5.617,0.4825,4.184});
SoHAnimJoint311->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint311->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment312 = new SoHAnimSegment();
SoHAnimSegment312->X3DNode::setName(QString("l_tarsal_middle_phalanx_5"));
SoHAnimSegment312->setDEF(QString("hanim_l_tarsal_middle_phalanx_5"));
SoTransform* SoTransform313 = new SoTransform();
SoTransform313->setTranslation(new float[]{5.617,0.4825,4.184});
SoShape* SoShape314 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance315 = new SoVRMLAppearance();
SoMaterial* SoMaterial316 = new SoMaterial();
SoMaterial316->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance315->addChild(*SoMaterial316);

SoImageTexture* SoImageTexture317 = new SoImageTexture();
SoImageTexture317->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance315->addChild(*SoImageTexture317);

SoShape314->addChild(*SoVRMLAppearance315);

SoIndexedFaceSet* SoIndexedFaceSet318 = new SoIndexedFaceSet();
SoIndexedFaceSet318->setCoordIndex(new int32_t[]{6,7,1,-1,1,0,6,-1,7,8,2,-1,2,1,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,0,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,5,0,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,1,2,-1}, 176);
SoIndexedFaceSet318->setCreaseAngle(3.14159);
SoIndexedFaceSet318->setTexCoordIndex(new int32_t[]{6,7,0,-1,0,1,6,-1,7,8,2,-1,2,0,7,-1,8,9,3,-1,3,2,8,-1,3,9,10,-1,10,4,3,-1,4,10,11,-1,11,5,4,-1,5,11,6,-1,6,1,5,-1,18,23,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,5,1,-1,5,20,21,-1,21,4,5,-1,4,21,22,-1,22,3,4,-1,3,22,23,-1,23,2,3,-1,2,23,18,-1,18,0,2,-1}, 176);
SoCoordinate* SoCoordinate319 = new SoCoordinate();
SoCoordinate319->setPoint(new float[]{0.2408,-0.4069,0.2803,0.3104,-0.1317,0.2682,0.2708,0.1735,0.2787,-0.2317,0.2031,0.3777,-0.2679,-0.1354,0.3997,-0.1895,-0.4021,0.3653,0.1525,-0.3723,-0.0403,0.2354,-0.0074,-0.0325,0.1833,0.3464,-0.0414,-0.2758,0.4069,0.0611,-0.3045,0.025,0.1088,-0.2506,-0.2948,0.058,0.0394,-0.2528,-0.1664,0.0981,-0.0034,-0.1527,0.0588,0.2544,-0.1647,-0.223,0.2914,-0.1062,-0.2396,0.03,-0.0614,-0.202,-0.2065,-0.1082,0.193,-0.1236,0.4464,0.1591,-0.2569,0.4517,-0.0503,-0.2545,0.4894,-0.0876,-0.122,0.5141,-0.0715,0.0448,0.4955,0.173,0.0304,0.4518}, 72);
SoIndexedFaceSet318->setCoord(*SoCoordinate319);

SoTextureCoordinate* SoTextureCoordinate320 = new SoTextureCoordinate();
SoTextureCoordinate320->setPoint(new float[]{0.2109,0.0133,0.2102,0.0181,0.2093,0.0169,0.1959,0.0354,0.1986,0.0324,0.1989,0.0342,0.2114,0.0219,0.2132,0.0168,0.2123,0.0196,0.1999,0.0356,0.201,0.0349,0.2011,0.0354,0.2114,0.0219,0.2132,0.0168,0.2123,0.0196,0.1999,0.0356,0.201,0.0349,0.2011,0.0354,0.2109,0.0133,0.2102,0.0181,0.1989,0.0342,0.1986,0.0324,0.1959,0.0354,0.2093,0.0169}, 48);
SoIndexedFaceSet318->setTexCoord(*SoTextureCoordinate320);

SoShape314->setGeometry(*SoIndexedFaceSet318);

SoTransform313->addChild(*SoShape314);

SoHAnimSegment312->addChild(*SoTransform313);

SoHAnimJoint311->addChildren(*SoHAnimSegment312);

SoHAnimJoint* SoHAnimJoint321 = new SoHAnimJoint();
SoHAnimJoint321->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint321->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimJoint321->setCenter(new float[]{5.657,0.3806,4.528});
SoHAnimJoint321->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint321->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment322 = new SoHAnimSegment();
SoHAnimSegment322->X3DNode::setName(QString("l_tarsal_distal_phalanx_5"));
SoHAnimSegment322->setDEF(QString("hanim_l_tarsal_distal_phalanx_5"));
SoTransform* SoTransform323 = new SoTransform();
SoTransform323->setTranslation(new float[]{5.657,0.3806,4.528});
SoShape* SoShape324 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance325 = new SoVRMLAppearance();
SoMaterial* SoMaterial326 = new SoMaterial();
SoMaterial326->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance325->addChild(*SoMaterial326);

SoImageTexture* SoImageTexture327 = new SoImageTexture();
SoImageTexture327->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance325->addChild(*SoImageTexture327);

SoShape324->addChild(*SoVRMLAppearance325);

SoIndexedFaceSet* SoIndexedFaceSet328 = new SoIndexedFaceSet();
SoIndexedFaceSet328->setCoordIndex(new int32_t[]{2,3,4,-1,4,1,2,-1,0,1,4,-1,4,5,0,-1,7,1,0,-1,0,6,7,-1,2,1,7,-1,7,8,2,-1,9,3,2,-1,2,8,9,-1,10,4,3,-1,3,9,10,-1,5,4,10,-1,10,11,5,-1,0,5,11,-1,11,6,0,-1,12,17,16,-1,16,15,14,-1,12,16,14,-1,13,12,14,-1,6,12,13,-1,13,7,6,-1,7,13,14,-1,14,8,7,-1,8,14,15,-1,15,9,8,-1,9,15,16,-1,16,10,9,-1,10,16,17,-1,17,11,10,-1,11,17,12,-1,12,6,11,-1}, 128);
SoIndexedFaceSet328->setCreaseAngle(3.14159);
SoIndexedFaceSet328->setTexCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,5,0,3,-1,3,4,5,-1,9,0,5,-1,5,8,9,-1,1,0,9,-1,9,10,1,-1,12,6,7,-1,7,11,12,-1,14,3,2,-1,2,13,14,-1,4,3,14,-1,14,15,4,-1,5,4,15,-1,15,8,5,-1,16,21,20,-1,20,19,18,-1,16,20,18,-1,17,16,18,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,11,18,19,-1,19,12,11,-1,13,19,20,-1,20,14,13,-1,14,20,21,-1,21,15,14,-1,15,21,16,-1,16,8,15,-1}, 128);
SoCoordinate* SoCoordinate329 = new SoCoordinate();
SoCoordinate329->setPoint(new float[]{0.1245,-0.2998,0.2013,0.2172,-0.0402,0.2894,0.168,0.1871,0.2347,-0.1198,0.2033,0.2971,-0.1153,-0.0329,0.3526,-0.1253,-0.2998,0.2469,0.2006,-0.305,-0.0635,0.2702,-0.0298,-0.0756,0.2307,0.2754,-0.0651,-0.2719,0.305,0.0339,-0.3081,-0.0335,0.0559,-0.2297,-0.3002,0.0215,0.0767,-0.1908,-0.2275,0.1195,-0.022,-0.2346,0.0946,0.1698,-0.2279,-0.2144,0.188,-0.1703,-0.2355,-0.0217,-0.1508,-0.1879,-0.1878,-0.178}, 54);
SoIndexedFaceSet328->setCoord(*SoCoordinate329);

SoTextureCoordinate* SoTextureCoordinate330 = new SoTextureCoordinate();
SoTextureCoordinate330->setPoint(new float[]{0.2048,0.0135,0.2053,0.0142,0.1964,0.026,0.1976,0.0232,0.1977,0.0271,0.2052,0.017,0.0639,0.0523,0.0903,0.0107,0.2102,0.0181,0.2109,0.0133,0.2093,0.0169,0.1317,0.0215,0.0951,0.0836,0.1959,0.0354,0.1986,0.0324,0.1989,0.0342,0.2102,0.0181,0.2109,0.0133,0.2093,0.0169,0.0951,0.0836,0.1986,0.0324,0.1989,0.0342}, 44);
SoIndexedFaceSet328->setTexCoord(*SoTextureCoordinate330);

SoShape324->setGeometry(*SoIndexedFaceSet328);

SoTransform323->addChild(*SoShape324);

SoHAnimSegment322->addChild(*SoTransform323);

SoHAnimJoint321->addChildren(*SoHAnimSegment322);

SoHAnimJoint311->addChildren(*SoHAnimJoint321);

SoHAnimJoint301->addChildren(*SoHAnimJoint311);

SoHAnimJoint291->addChildren(*SoHAnimJoint301);

SoHAnimJoint241->addChildren(*SoHAnimJoint291);

SoHAnimJoint231->addChildren(*SoHAnimJoint241);

SoHAnimJoint71->addChildren(*SoHAnimJoint231);

SoHAnimJoint61->addChildren(*SoHAnimJoint71);

SoHAnimJoint51->addChildren(*SoHAnimJoint61);

SoHAnimJoint41->addChildren(*SoHAnimJoint51);

SoHAnimJoint* SoHAnimJoint331 = new SoHAnimJoint();
SoHAnimJoint331->X3DNode::setName(QString("r_hip"));
SoHAnimJoint331->setDEF(QString("hanim_r_hip"));
SoHAnimJoint331->setCenter(new float[]{-4.207,36.740002,-0.8155});
SoHAnimJoint331->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint331->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment332 = new SoHAnimSegment();
SoHAnimSegment332->X3DNode::setName(QString("r_thigh"));
SoHAnimSegment332->setDEF(QString("hanim_r_thigh"));
SoTransform* SoTransform333 = new SoTransform();
SoTransform333->setTranslation(new float[]{-4.207,36.740002,-0.8155});
SoShape* SoShape334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance335 = new SoVRMLAppearance();
SoMaterial* SoMaterial336 = new SoMaterial();
SoMaterial336->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance335->addChild(*SoMaterial336);

SoImageTexture* SoImageTexture337 = new SoImageTexture();
SoImageTexture337->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance335->addChild(*SoImageTexture337);

SoShape334->addChild(*SoVRMLAppearance335);

SoIndexedFaceSet* SoIndexedFaceSet338 = new SoIndexedFaceSet();
SoIndexedFaceSet338->setCoordIndex(new int32_t[]{43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1}, 488);
SoIndexedFaceSet338->setCreaseAngle(3.14159);
SoIndexedFaceSet338->setTexCoordIndex(new int32_t[]{0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1}, 488);
SoCoordinate* SoCoordinate339 = new SoCoordinate();
SoCoordinate339->setPoint(new float[]{-2.96,-0.0706,0.0,-1.643,-0.0706,3.209,1.316,-0.0706,4.002,3.367,-0.0706,1.781,3.367,-0.0706,-1.781,1.316,-0.0706,-4.002,-1.643,-0.0706,-3.209,-2.96,-3.82,0.0,-1.643,-3.82,3.209,1.316,-3.82,4.002,3.367,-3.82,1.781,3.367,-3.82,-1.781,1.316,-3.82,-4.002,-1.643,-3.82,-3.209,-2.96,-10.32,0.0,-1.643,-10.32,3.209,1.316,-10.32,4.002,3.367,-10.32,1.781,3.367,-10.32,-1.781,1.316,-10.32,-4.002,-1.643,-10.32,-3.209,-3.367,-16.94,0.0,-1.897,-16.94,3.582,1.407,-16.94,4.467,3.355,-16.94,1.988,3.355,-16.94,-1.988,1.407,-16.94,-4.467,-1.897,-16.94,-3.582,-2.146,-8.794,0.0,-1.136,-8.794,2.462,1.135,-8.794,3.07,2.633,-8.794,1.366,2.633,-8.794,-1.366,1.135,-8.794,-3.07,-1.136,-8.794,-2.462,-2.156,-15.25,0.0,-1.225,-15.25,1.956,0.8662,-15.25,2.439,2.543,-15.25,1.085,2.543,-15.25,-1.085,0.8662,-15.25,-2.439,-1.225,-15.25,-1.956,-2.051,1.92,0.0,-1.076,1.92,2.375,1.114,1.92,2.961,2.87,1.92,1.318,2.87,1.92,-1.318,1.114,1.92,-2.961,-1.076,1.92,-2.375,-1.842,-18.93,0.0,-1.03,-18.93,1.873,0.7965,-18.93,2.295,2.261,-18.93,1.113,2.261,-18.93,-0.9478,0.7965,-18.93,-2.13,-1.03,-18.93,-1.708,-0.6277,-19.91,0.0,-0.2723,-19.91,0.912,0.5262,-19.91,1.096,1.167,-19.91,0.5796,1.167,-19.91,-0.4145,0.5262,-19.91,-0.9313,-0.2723,-19.91,-0.7469}, 189);
SoIndexedFaceSet338->setCoord(*SoCoordinate339);

SoTextureCoordinate* SoTextureCoordinate340 = new SoTextureCoordinate();
SoTextureCoordinate340->setPoint(new float[]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581}, 140);
SoIndexedFaceSet338->setTexCoord(*SoTextureCoordinate340);

SoShape334->setGeometry(*SoIndexedFaceSet338);

SoTransform333->addChild(*SoShape334);

SoHAnimSegment332->addChild(*SoTransform333);

SoHAnimJoint331->addChildren(*SoHAnimSegment332);

SoHAnimJoint* SoHAnimJoint341 = new SoHAnimJoint();
SoHAnimJoint341->X3DNode::setName(QString("r_knee"));
SoHAnimJoint341->setDEF(QString("hanim_r_knee"));
SoHAnimJoint341->setCenter(new float[]{-4.116,18.17,-0.8639});
SoHAnimJoint341->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint341->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment342 = new SoHAnimSegment();
SoHAnimSegment342->X3DNode::setName(QString("r_calf"));
SoHAnimSegment342->setDEF(QString("hanim_r_calf"));
SoTransform* SoTransform343 = new SoTransform();
SoTransform343->setTranslation(new float[]{-4.116,18.17,-0.8639});
SoShape* SoShape344 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance345 = new SoVRMLAppearance();
SoMaterial* SoMaterial346 = new SoMaterial();
SoMaterial346->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance345->addChild(*SoMaterial346);

SoImageTexture* SoImageTexture347 = new SoImageTexture();
SoImageTexture347->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance345->addChild(*SoImageTexture347);

SoShape344->addChild(*SoVRMLAppearance345);

SoIndexedFaceSet* SoIndexedFaceSet348 = new SoIndexedFaceSet();
SoIndexedFaceSet348->setCoordIndex(new int32_t[]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1}, 300);
SoIndexedFaceSet348->setCreaseAngle(3.14159);
SoIndexedFaceSet348->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1}, 300);
SoCoordinate* SoCoordinate349 = new SoCoordinate();
SoCoordinate349->setPoint(new float[]{-0.7186,0.9688,0.0234,-0.3632,0.9688,0.9354,0.4353,0.9688,1.12,1.076,0.9688,0.603,1.076,0.9688,-0.3911,0.4353,0.9688,-0.9079,-0.3632,0.9688,-0.7235,-2.337,-4.613,0.0234,-1.46,-3.622,2.019,-1.236,-1.628,2.42,-2.118,-1.912,0.0234,0.8111,-3.622,2.567,0.7468,-1.628,2.903,2.254,-4.613,1.255,2.337,-1.912,0.9793,2.254,-5.383,-1.368,2.337,-1.912,-0.9325,0.8111,-5.383,-2.903,0.7468,-1.912,-2.368,-1.46,-5.383,-2.355,-1.236,-1.912,-1.885,-1.121,-0.0032,1.896,-1.933,-0.0032,0.0234,0.7056,-0.0032,2.318,2.17,-0.0032,1.136,2.17,-0.0032,-0.9244,0.7056,-0.0032,-2.061,-1.121,-0.0032,-1.64,-1.607,-12.92,0.0032,-0.9216,-12.91,1.565,0.619,-12.91,1.951,1.854,-12.92,0.8701,1.854,-12.94,-0.9762,0.619,-12.94,-1.742,-0.9216,-12.94,-1.356,-0.7072,-14.53,0.0239,-0.3604,-14.53,0.814,0.4188,-14.53,1.009,1.044,-14.53,0.4624,1.044,-14.54,-0.4714,0.4188,-14.54,-0.8587,-0.3604,-14.54,-0.6635}, 126);
SoIndexedFaceSet348->setCoord(*SoCoordinate349);

SoTextureCoordinate* SoTextureCoordinate350 = new SoTextureCoordinate();
SoTextureCoordinate350->setPoint(new float[]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9632,0.3942,0.9402,0.3943,0.8884,0.3943,0.8469,0.3942,0.8469,0.3941,0.8884,0.3941,0.9402,0.3941,0.9325,0.3742,0.9208,0.3742,0.8947,0.3742,0.8737,0.3742,0.8737,0.3741,0.8947,0.3741,0.9208,0.3741}, 84);
SoIndexedFaceSet348->setTexCoord(*SoTextureCoordinate350);

SoShape344->setGeometry(*SoIndexedFaceSet348);

SoTransform343->addChild(*SoShape344);

SoHAnimSegment342->addChild(*SoTransform343);

SoHAnimJoint341->addChildren(*SoHAnimSegment342);

SoHAnimJoint* SoHAnimJoint351 = new SoHAnimJoint();
SoHAnimJoint351->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint351->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint351->setCenter(new float[]{-3.931,4.242,-0.4645});
SoHAnimJoint351->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint351->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment352 = new SoHAnimSegment();
SoHAnimSegment352->X3DNode::setName(QString("r_talus"));
SoHAnimSegment352->setDEF(QString("hanim_r_talus"));
SoTransform* SoTransform353 = new SoTransform();
SoTransform353->setTranslation(new float[]{-3.931,4.242,-0.4645});
SoShape* SoShape354 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance355 = new SoVRMLAppearance();
SoMaterial* SoMaterial356 = new SoMaterial();
SoMaterial356->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance355->addChild(*SoMaterial356);

SoImageTexture* SoImageTexture357 = new SoImageTexture();
SoImageTexture357->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance355->addChild(*SoImageTexture357);

SoShape354->addChild(*SoVRMLAppearance355);

SoIndexedFaceSet* SoIndexedFaceSet358 = new SoIndexedFaceSet();
SoIndexedFaceSet358->setCoordIndex(new int32_t[]{13,15,21,-1,21,34,13,-1,9,34,21,-1,21,20,9,-1,0,15,14,-1,14,2,0,-1,30,33,16,-1,16,3,30,-1,3,16,25,-1,25,4,3,-1,22,17,18,-1,18,5,22,-1,5,18,29,-1,29,6,5,-1,6,19,27,-1,7,20,21,-1,21,1,7,-1,1,21,15,-1,15,0,1,-1,15,13,32,-1,32,14,15,-1,33,11,12,-1,12,16,33,-1,25,16,12,-1,12,23,25,-1,17,24,10,-1,10,18,17,-1,18,10,28,-1,28,29,18,-1,19,8,26,-1,26,27,19,-1,4,25,17,-1,17,22,4,-1,25,23,24,-1,24,17,25,-1,20,27,26,-1,26,9,20,-1,6,27,20,-1,20,7,6,-1,29,28,8,-1,8,19,29,-1,6,29,19,-1,1,0,31,-1,0,2,31,-1,31,30,3,-1,3,4,31,-1,4,22,31,-1,22,5,31,-1,5,6,31,-1,6,7,31,-1,7,1,31,-1,2,30,31,-1,14,33,30,-1,30,2,14,-1,32,11,33,-1,33,14,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,26,8,36,-1,36,35,26,-1,8,28,37,-1,37,36,8,-1,28,10,38,-1,38,37,28,-1,10,24,39,-1,39,38,10,-1,24,23,40,-1,40,39,24,-1,23,12,41,-1,41,40,23,-1,12,11,42,-1,42,41,12,-1,11,32,43,-1,43,42,11,-1,32,13,44,-1,44,43,32,-1,13,34,45,-1,45,44,13,-1,34,9,46,-1,46,45,34,-1,9,26,35,-1,35,46,9,-1}, 360);
SoIndexedFaceSet358->setCreaseAngle(3.14159);
SoIndexedFaceSet358->setTexCoordIndex(new int32_t[]{5,12,27,-1,27,34,5,-1,7,34,27,-1,27,28,7,-1,9,12,11,-1,11,10,9,-1,30,33,14,-1,14,13,30,-1,13,14,16,-1,16,15,13,-1,17,20,19,-1,19,18,17,-1,18,19,22,-1,22,21,18,-1,21,24,23,-1,25,28,27,-1,27,26,25,-1,26,27,12,-1,12,9,26,-1,12,5,32,-1,32,11,12,-1,33,3,4,-1,4,14,33,-1,16,14,4,-1,4,8,16,-1,20,6,2,-1,2,19,20,-1,19,2,29,-1,29,22,19,-1,24,0,1,-1,1,23,24,-1,15,16,20,-1,20,17,15,-1,16,8,6,-1,6,20,16,-1,28,23,1,-1,1,7,28,-1,21,23,28,-1,28,25,21,-1,22,29,0,-1,0,24,22,-1,21,22,24,-1,26,9,31,-1,9,10,31,-1,31,30,13,-1,13,15,31,-1,15,17,31,-1,17,18,31,-1,18,21,31,-1,21,25,31,-1,25,26,31,-1,10,30,31,-1,11,33,30,-1,30,10,11,-1,32,3,33,-1,33,11,32,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,39,43,45,-1,45,46,35,-1,39,45,35,-1,37,39,35,-1,36,37,35,-1,1,0,36,-1,36,35,1,-1,0,29,37,-1,37,36,0,-1,29,2,38,-1,38,37,29,-1,2,6,39,-1,39,38,2,-1,6,8,40,-1,40,39,6,-1,8,4,41,-1,41,40,8,-1,4,3,42,-1,42,41,4,-1,3,32,43,-1,43,42,3,-1,32,5,44,-1,44,43,32,-1,5,34,45,-1,45,44,5,-1,34,7,46,-1,46,45,34,-1,7,1,35,-1,35,46,7,-1}, 360);
SoCoordinate* SoCoordinate359 = new SoCoordinate();
SoCoordinate359->setPoint(new float[]{0.8393,-0.0174,-1.188,1.144,-0.1364,-0.2829,0.3552,0.0498,-1.609,-0.871,-0.0001,-1.186,-1.125,-0.0898,-0.529,-0.7565,-0.0703,0.5621,0.053,-0.0302,0.8302,0.7589,-0.0877,0.5643,0.0732,-1.091,0.9897,1.025,-1.308,0.5497,-0.8955,-1.383,0.5769,-0.2622,-1.481,-1.89,-1.034,-1.351,-1.37,1.019,-1.351,-1.414,0.3452,-0.5115,-1.682,0.9219,-0.5266,-1.26,-0.7956,-0.4862,-1.244,-1.31,-1.007,-0.0779,-0.7172,-0.6496,0.5797,0.0234,-0.5209,0.8613,0.8111,-0.5742,0.5811,1.266,-0.65,-0.3815,-1.115,-0.1083,-0.0507,-1.176,-1.652,-0.6627,-1.158,-1.659,-0.1435,-1.331,-0.9612,-0.5874,0.5196,-1.198,0.8491,0.3793,-0.5469,0.7717,-0.4065,-1.235,0.8627,-0.3849,-0.5846,0.771,-0.2393,0.0558,-1.608,0.037,0.336,-0.3208,0.293,-1.478,-1.895,-0.2103,-0.4984,-1.679,1.331,-1.587,-0.3858,0.4364,-2.025,0.6704,0.0997,-1.904,0.7731,-0.2642,-2.055,0.6792,-0.6413,-2.205,0.4606,-0.8623,-2.494,-0.1471,-0.8786,-2.478,-0.6084,-0.7666,-2.132,-1.193,-0.1384,-2.273,-1.612,0.2345,-2.279,-1.615,0.8197,-2.156,-1.228,1.09,-2.438,-0.3404,0.8313,-2.145,0.4395}, 141);
SoIndexedFaceSet358->setCoord(*SoCoordinate359);

SoTextureCoordinate* SoTextureCoordinate360 = new SoTextureCoordinate();
SoTextureCoordinate360->setPoint(new float[]{0.227,0.1089,0.2217,0.1285,0.2533,0.0835,0.273,0.1232,0.2824,0.0941,0.2433,0.1632,0.2685,0.0797,0.2165,0.148,0.2759,0.0832,0.2428,0.156,0.2563,0.142,0.2584,0.1419,0.2431,0.1588,0.2715,0.1062,0.2761,0.1011,0.2698,0.09,0.2775,0.078,0.2629,0.0863,0.248,0.0935,0.2498,0.0895,0.2702,0.0748,0.2296,0.1148,0.2397,0.101,0.2249,0.1266,0.2295,0.1126,0.2207,0.1406,0.2252,0.1591,0.2245,0.1634,0.2202,0.1406,0.2407,0.0951,0.2662,0.1249,0.2599,0.1313,0.2623,0.1418,0.2691,0.1232,0.2231,0.166,0.2217,0.1285,0.227,0.1089,0.2407,0.0951,0.2533,0.0835,0.2685,0.0797,0.2759,0.0832,0.2824,0.0941,0.273,0.1232,0.2623,0.1418,0.2433,0.1632,0.2231,0.166,0.2165,0.148}, 94);
SoIndexedFaceSet358->setTexCoord(*SoTextureCoordinate360);

SoShape354->setGeometry(*SoIndexedFaceSet358);

SoTransform353->addChild(*SoShape354);

SoHAnimSegment352->addChild(*SoTransform353);

SoHAnimJoint351->addChildren(*SoHAnimSegment352);

SoHAnimJoint* SoHAnimJoint361 = new SoHAnimJoint();
SoHAnimJoint361->X3DNode::setName(QString("r_talocalcaneonavicular"));
SoHAnimJoint361->setDEF(QString("hanim_r_talocalcaneonavicular"));
SoHAnimJoint361->setCenter(new float[]{-3.464,1.64,0.2162});
SoHAnimJoint361->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint361->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment362 = new SoHAnimSegment();
SoHAnimSegment362->X3DNode::setName(QString("r_navicular"));
SoHAnimSegment362->setDEF(QString("hanim_r_navicular"));
SoTransform* SoTransform363 = new SoTransform();
SoTransform363->setTranslation(new float[]{-3.464,1.64,0.2162});
SoShape* SoShape364 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance365 = new SoVRMLAppearance();
SoMaterial* SoMaterial366 = new SoMaterial();
SoMaterial366->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance365->addChild(*SoMaterial366);

SoImageTexture* SoImageTexture367 = new SoImageTexture();
SoImageTexture367->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance365->addChild(*SoImageTexture367);

SoShape364->addChild(*SoVRMLAppearance365);

SoIndexedFaceSet* SoIndexedFaceSet368 = new SoIndexedFaceSet();
SoIndexedFaceSet368->setCoordIndex(new int32_t[]{7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1}, 352);
SoIndexedFaceSet368->setCreaseAngle(3.14159);
SoIndexedFaceSet368->setTexCoordIndex(new int32_t[]{7,6,11,-1,11,12,7,-1,1,17,18,-1,18,2,1,-1,12,10,5,-1,5,7,12,-1,2,11,6,-1,5,10,13,-1,13,0,5,-1,1,3,14,-1,14,17,1,-1,11,2,18,-1,4,15,16,-1,16,8,4,-1,8,16,9,-1,3,9,16,-1,16,14,3,-1,26,27,28,-1,28,19,20,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,28,20,24,-1,26,28,24,-1,25,26,24,-1,38,39,42,-1,42,43,38,-1,37,29,30,-1,30,31,32,-1,37,30,32,-1,32,33,34,-1,37,32,34,-1,37,34,35,-1,37,35,36,-1,1,2,20,-1,20,19,1,-1,2,6,21,-1,21,20,2,-1,6,7,22,-1,22,21,6,-1,7,5,23,-1,23,22,7,-1,5,0,24,-1,24,23,5,-1,38,43,44,-1,44,45,38,-1,4,8,26,-1,26,25,4,-1,8,9,27,-1,27,26,8,-1,9,3,28,-1,28,27,9,-1,3,1,19,-1,19,28,3,-1,10,12,30,-1,30,29,10,-1,12,11,31,-1,31,30,12,-1,11,18,32,-1,32,31,11,-1,18,17,33,-1,33,32,18,-1,17,14,34,-1,34,33,17,-1,14,16,35,-1,35,34,14,-1,16,15,36,-1,36,35,16,-1,42,39,40,-1,40,41,42,-1,13,10,29,-1,29,37,13,-1,0,13,39,-1,39,38,0,-1,13,37,40,-1,40,39,13,-1,37,36,41,-1,41,40,37,-1,36,15,42,-1,42,41,36,-1,15,4,43,-1,43,42,15,-1,4,25,44,-1,44,43,4,-1,25,24,45,-1,45,44,25,-1,24,0,38,-1,38,45,24,-1}, 352);
SoCoordinate* SoCoordinate369 = new SoCoordinate();
SoCoordinate369->setPoint(new float[]{-0.8972,0.8045,0.6788,0.6876,-1.034,0.429,0.8213,0.0037,0.4098,0.5423,-1.396,0.5699,-0.8663,-1.47,0.683,-0.3971,1.184,0.6443,0.6772,0.6655,0.5173,0.1187,1.052,0.7179,-0.3868,-1.485,0.6432,0.1381,-1.479,0.7246,-0.394,1.511,0.309,0.5576,1.294,-0.131,0.0524,1.404,0.1684,-0.8736,1.366,0.182,0.6272,-1.476,-0.1356,-0.89,-1.511,-0.1477,-0.1521,-1.51,-0.0848,0.7688,-1.064,-0.1614,0.8972,-0.0133,-0.1652,0.6077,-0.9851,0.7902,0.7367,-0.2268,0.7715,0.6074,0.227,0.877,0.1008,0.4934,1.071,-0.3446,0.5793,0.9883,-0.7568,0.3427,1.012,-0.728,-1.256,1.016,-0.3573,-1.265,0.9905,0.1551,-1.261,1.074,0.4926,-1.208,0.9273,-0.4349,1.327,-0.2949,-0.049,1.235,-0.4281,0.3331,1.155,-0.7124,0.6313,0.0115,-0.7287,0.5112,-0.976,-0.7205,0.4265,-1.229,-0.6873,-0.2055,-1.256,-0.651,-0.7238,-1.253,-0.736,-0.7084,1.253,-0.4372,-1.285,0.6426,0.462,-1.266,0.8934,0.1006,-1.139,1.106,-0.2956,-1.153,-1.137,-0.563,-1.28,-1.327,-0.1294,-1.261,-1.289,0.5282,-1.182,-1.352,0.8393,-1.206,0.2601,0.8352}, 138);
SoIndexedFaceSet368->setCoord(*SoCoordinate369);

SoTextureCoordinate* SoTextureCoordinate370 = new SoTextureCoordinate();
SoTextureCoordinate370->setPoint(new float[]{0.2314,0.0879,0.21,0.1541,0.2053,0.1595,0.2104,0.1443,0.2271,0.0958,0.2224,0.1067,0.2032,0.149,0.2132,0.1285,0.2197,0.1123,0.2163,0.1174,0.227,0.1089,0.2165,0.148,0.2217,0.1285,0.2407,0.0951,0.2178,0.1526,0.2363,0.0929,0.2213,0.1179,0.2171,0.1588,0.2129,0.1643,0.21,0.1541,0.2053,0.1595,0.2032,0.149,0.2132,0.1285,0.2224,0.1067,0.2314,0.0879,0.2271,0.0958,0.2197,0.1123,0.2163,0.1174,0.2104,0.1443,0.227,0.1089,0.2217,0.1285,0.2165,0.148,0.2129,0.1643,0.2171,0.1588,0.2178,0.1526,0.2213,0.1179,0.2363,0.0929,0.2407,0.0951,0.2314,0.0879,0.2407,0.0951,0.2407,0.0951,0.2363,0.0929,0.2363,0.0929,0.2271,0.0958,0.2271,0.0958,0.2314,0.0879}, 92);
SoIndexedFaceSet368->setTexCoord(*SoTextureCoordinate370);

SoShape364->setGeometry(*SoIndexedFaceSet368);

SoTransform363->addChild(*SoShape364);

SoHAnimSegment362->addChild(*SoTransform363);

SoHAnimJoint361->addChildren(*SoHAnimSegment362);

SoHAnimJoint* SoHAnimJoint371 = new SoHAnimJoint();
SoHAnimJoint371->X3DNode::setName(QString("r_cuneonavicular_1"));
SoHAnimJoint371->setDEF(QString("hanim_r_cuneonavicular_1"));
SoHAnimJoint371->setCenter(new float[]{-2.977,1.427,0.8174});
SoHAnimJoint371->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint371->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment372 = new SoHAnimSegment();
SoHAnimSegment372->X3DNode::setName(QString("r_cuneiform_1"));
SoHAnimSegment372->setDEF(QString("hanim_r_cuneiform_1"));
SoTransform* SoTransform373 = new SoTransform();
SoTransform373->setTranslation(new float[]{-2.977,1.427,0.8174});
SoShape* SoShape374 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance375 = new SoVRMLAppearance();
SoMaterial* SoMaterial376 = new SoMaterial();
SoMaterial376->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance375->addChild(*SoMaterial376);

SoImageTexture* SoImageTexture377 = new SoImageTexture();
SoImageTexture377->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance375->addChild(*SoImageTexture377);

SoShape374->addChild(*SoVRMLAppearance375);

SoIndexedFaceSet* SoIndexedFaceSet378 = new SoIndexedFaceSet();
SoIndexedFaceSet378->setCoordIndex(new int32_t[]{0,4,12,-1,1,7,6,-1,6,0,1,-1,10,1,0,-1,0,12,10,-1,1,10,11,-1,11,2,1,-1,8,5,2,-1,2,3,8,-1,11,13,2,-1,12,4,15,-1,9,4,0,-1,0,6,9,-1,1,2,5,-1,5,7,1,-1,3,2,13,-1,13,14,3,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,3,14,17,-1,17,16,3,-1,14,15,18,-1,18,17,14,-1,15,4,19,-1,19,18,15,-1,4,9,20,-1,20,19,4,-1,28,25,26,-1,26,27,28,-1,8,3,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1}, 216);
SoIndexedFaceSet378->setCreaseAngle(3.14159);
SoIndexedFaceSet378->setTexCoordIndex(new int32_t[]{0,1,12,-1,2,7,6,-1,6,0,2,-1,10,2,0,-1,0,12,10,-1,2,10,11,-1,11,3,2,-1,8,5,3,-1,3,4,8,-1,11,13,3,-1,12,1,15,-1,9,1,0,-1,0,6,9,-1,2,3,5,-1,5,7,2,-1,4,3,13,-1,13,14,4,-1,22,23,24,-1,22,24,25,-1,28,22,25,-1,13,11,10,-1,10,12,15,-1,13,10,15,-1,14,13,15,-1,16,17,18,-1,18,19,16,-1,21,16,19,-1,19,20,21,-1,4,14,17,-1,17,16,4,-1,14,15,18,-1,18,17,14,-1,15,1,19,-1,19,18,15,-1,1,9,20,-1,20,19,1,-1,28,25,26,-1,26,27,28,-1,8,4,16,-1,16,21,8,-1,6,7,23,-1,23,22,6,-1,7,5,24,-1,24,23,7,-1,5,8,25,-1,25,24,5,-1,8,21,26,-1,26,25,8,-1,21,20,27,-1,27,26,21,-1,20,9,28,-1,28,27,20,-1,9,6,22,-1,22,28,9,-1}, 216);
SoCoordinate* SoCoordinate379 = new SoCoordinate();
SoCoordinate379->setPoint(new float[]{-0.0007,-1.109,0.4253,0.2643,-0.769,0.4516,0.31,0.2508,0.3964,-0.3018,0.9142,0.48,-0.2988,-1.247,0.4693,0.4654,0.1787,1.077,0.3013,-1.107,1.108,0.5181,-0.7521,1.038,-0.2439,0.5544,1.187,-0.2465,-1.253,1.201,0.2008,-0.8201,-0.1723,0.3345,0.2174,-0.1914,0.0554,-1.183,-0.0314,0.1904,0.8791,-0.084,-0.3681,1.266,0.1166,-0.3487,-1.266,0.1234,-0.5607,0.81,0.4342,-0.5963,0.9711,0.2685,-0.5792,-1.134,0.2739,-0.5494,-1.122,0.4935,-0.506,-1.127,1.102,-0.5033,0.4765,1.089,0.2424,-0.982,1.47,0.4192,-0.7263,1.408,0.3724,0.0098,1.445,-0.2492,0.2999,1.549,-0.3973,0.2594,1.478,-0.3998,-1.02,1.489,-0.2312,-1.094,1.562}, 87);
SoIndexedFaceSet378->setCoord(*SoCoordinate379);

SoTextureCoordinate* SoTextureCoordinate380 = new SoTextureCoordinate();
SoTextureCoordinate380->setPoint(new float[]{0.2027,0.1355,0.2132,0.1171,0.1958,0.1447,0.1899,0.1499,0.2047,0.1286,0.1825,0.1473,0.1858,0.1369,0.1864,0.1452,0.1953,0.1244,0.2059,0.1148,0.21,0.1541,0.2053,0.1595,0.2104,0.1443,0.2032,0.149,0.2132,0.1285,0.2163,0.1174,0.2047,0.1286,0.2132,0.1285,0.2163,0.1174,0.2132,0.1171,0.2059,0.1148,0.1953,0.1244,0.1858,0.1369,0.1864,0.1452,0.1825,0.1473,0.1953,0.1244,0.1953,0.1244,0.2059,0.1148,0.2059,0.1148}, 58);
SoIndexedFaceSet378->setTexCoord(*SoTextureCoordinate380);

SoShape374->setGeometry(*SoIndexedFaceSet378);

SoTransform373->addChild(*SoShape374);

SoHAnimSegment372->addChild(*SoTransform373);

SoHAnimJoint371->addChildren(*SoHAnimSegment372);

SoHAnimJoint* SoHAnimJoint381 = new SoHAnimJoint();
SoHAnimJoint381->X3DNode::setName(QString("r_tarsometatarsal_1"));
SoHAnimJoint381->setDEF(QString("hanim_r_tarsometatarsal_1"));
SoHAnimJoint381->setCenter(new float[]{-2.856,1.033,1.964});
SoHAnimJoint381->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint381->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment382 = new SoHAnimSegment();
SoHAnimSegment382->X3DNode::setName(QString("r_metatarsal_1"));
SoHAnimSegment382->setDEF(QString("hanim_r_metatarsal_1"));
SoTransform* SoTransform383 = new SoTransform();
SoTransform383->setTranslation(new float[]{-2.856,1.033,1.964});
SoShape* SoShape384 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance385 = new SoVRMLAppearance();
SoMaterial* SoMaterial386 = new SoMaterial();
SoMaterial386->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance385->addChild(*SoMaterial386);

SoImageTexture* SoImageTexture387 = new SoImageTexture();
SoImageTexture387->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance385->addChild(*SoImageTexture387);

SoShape384->addChild(*SoVRMLAppearance385);

SoIndexedFaceSet* SoIndexedFaceSet388 = new SoIndexedFaceSet();
SoIndexedFaceSet388->setCoordIndex(new int32_t[]{0,14,11,-1,5,0,2,-1,2,7,5,-1,1,2,9,-1,9,10,1,-1,15,23,20,-1,20,8,15,-1,3,21,19,-1,19,4,3,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,1,12,-1,6,7,2,-1,2,1,6,-1,5,17,14,-1,14,0,5,-1,10,9,3,-1,3,4,10,-1,9,2,0,-1,0,11,9,-1,10,18,12,-1,12,1,10,-1,8,3,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,3,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,29,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1}, 360);
SoIndexedFaceSet388->setCreaseAngle(3.14159);
SoIndexedFaceSet388->setTexCoordIndex(new int32_t[]{1,14,11,-1,5,1,2,-1,2,7,5,-1,3,2,9,-1,9,10,3,-1,15,23,20,-1,20,8,15,-1,0,21,19,-1,19,4,0,-1,13,18,10,-1,10,4,13,-1,12,16,6,-1,6,3,12,-1,6,7,2,-1,2,3,6,-1,5,17,14,-1,14,1,5,-1,10,9,0,-1,0,4,10,-1,9,2,1,-1,1,11,9,-1,10,18,12,-1,12,3,10,-1,8,0,9,-1,9,11,8,-1,8,11,14,-1,14,15,8,-1,21,0,8,-1,8,20,21,-1,13,4,19,-1,19,22,13,-1,34,35,36,-1,34,36,39,-1,34,39,33,-1,40,41,42,-1,46,40,42,-1,45,46,42,-1,31,32,29,-1,29,30,31,-1,32,24,14,-1,24,25,28,-1,28,29,24,-1,25,26,27,-1,27,28,25,-1,18,13,25,-1,25,24,18,-1,13,22,26,-1,26,25,13,-1,45,42,43,-1,43,44,45,-1,23,15,28,-1,28,27,23,-1,15,14,29,-1,29,28,15,-1,14,17,30,-1,30,29,14,-1,39,36,37,-1,37,38,39,-1,16,12,32,-1,32,31,16,-1,12,18,24,-1,24,32,12,-1,5,7,34,-1,34,33,5,-1,7,6,35,-1,35,34,7,-1,6,16,36,-1,36,35,6,-1,16,31,37,-1,37,36,16,-1,31,30,38,-1,38,37,31,-1,30,17,39,-1,39,38,30,-1,17,5,33,-1,33,39,17,-1,21,20,41,-1,41,40,21,-1,20,23,42,-1,42,41,20,-1,23,27,43,-1,43,42,23,-1,27,26,44,-1,44,43,27,-1,26,22,45,-1,45,44,26,-1,22,19,46,-1,46,45,22,-1,19,21,40,-1,40,46,19,-1}, 360);
SoCoordinate* SoCoordinate389 = new SoCoordinate();
SoCoordinate389->setPoint(new float[]{0.562,-0.9482,1.384,0.6218,0.234,1.681,0.7597,-0.537,1.629,0.489,-0.3521,0.1795,0.411,0.5415,0.3114,0.5231,-0.8677,2.175,0.5335,0.0824,2.208,0.6227,-0.537,2.28,0.2889,-0.7119,0.2522,0.7121,-0.4572,1.055,0.5707,0.3593,1.151,0.5319,-0.9316,0.9896,-0.3801,0.3685,1.628,-0.3394,0.7871,0.4484,-0.3842,-0.9482,1.527,-0.3046,-0.8633,0.3382,-0.4577,0.1663,2.193,-0.4594,-0.868,2.156,-0.3457,0.5783,1.066,0.344,0.5726,-0.0702,0.1799,-0.7129,-0.039,0.3967,-0.3582,-0.1085,-0.3653,0.9482,0.0401,-0.3679,-0.8593,0.054,-0.6136,0.3929,0.9908,-0.6118,0.6022,0.3719,-0.6079,0.6587,0.2275,-0.617,-0.6662,0.2386,-0.5774,-0.6674,0.3377,-0.6534,-0.7513,1.513,-0.7048,-0.6945,1.958,-0.7047,0.029,1.984,-0.6466,0.1836,1.552,0.3548,-0.7559,2.4,0.4377,-0.5059,2.486,0.3635,-0.0376,2.427,-0.4603,0.0258,2.414,-0.6656,-0.078,2.241,-0.6657,-0.6249,2.219,-0.4618,-0.7561,2.383,0.0182,-0.2985,-0.3352,-0.1101,-0.5117,-0.2822,-0.4889,-0.6114,-0.2535,-0.5739,-0.5388,-0.1727,-0.5662,0.5554,-0.1816,-0.4934,0.669,-0.2851,-0.0215,0.4249,-0.2986}, 141);
SoIndexedFaceSet388->setCoord(*SoCoordinate389);

SoTextureCoordinate* SoTextureCoordinate390 = new SoTextureCoordinate();
SoTextureCoordinate390->setPoint(new float[]{0.177,0.1457,0.1567,0.1378,0.1506,0.1431,0.1539,0.1386,0.1751,0.1447,0.1523,0.1336,0.1493,0.1348,0.1463,0.1377,0.1689,0.1382,0.1638,0.1444,0.1645,0.1416,0.1607,0.138,0.1731,0.1071,0.1859,0.1202,0.175,0.1048,0.1985,0.1126,0.1682,0.1025,0.1699,0.1017,0.1795,0.1136,0.1825,0.1473,0.1858,0.1369,0.1864,0.1452,0.1953,0.1244,0.2059,0.1148,0.1795,0.1136,0.1859,0.1202,0.1953,0.1244,0.2059,0.1148,0.1985,0.1126,0.175,0.1048,0.1699,0.1017,0.1682,0.1025,0.1731,0.1071,0.1523,0.1336,0.1463,0.1377,0.1493,0.1348,0.1682,0.1025,0.1682,0.1025,0.1699,0.1017,0.1699,0.1017,0.1864,0.1452,0.1858,0.1369,0.2059,0.1148,0.2059,0.1148,0.1953,0.1244,0.1953,0.1244,0.1825,0.1473}, 94);
SoIndexedFaceSet388->setTexCoord(*SoTextureCoordinate390);

SoShape384->setGeometry(*SoIndexedFaceSet388);

SoTransform383->addChild(*SoShape384);

SoHAnimSegment382->addChild(*SoTransform383);

SoHAnimJoint381->addChildren(*SoHAnimSegment382);

SoHAnimJoint* SoHAnimJoint391 = new SoHAnimJoint();
SoHAnimJoint391->X3DNode::setName(QString("r_metatarsophalangeal_1"));
SoHAnimJoint391->setDEF(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimJoint391->setCenter(new float[]{-2.745,0.6411,4.161});
SoHAnimJoint391->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint391->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment392 = new SoHAnimSegment();
SoHAnimSegment392->X3DNode::setName(QString("r_tarsal_proximal_phalanx_1"));
SoHAnimSegment392->setDEF(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoTransform* SoTransform393 = new SoTransform();
SoTransform393->setTranslation(new float[]{-2.745,0.6411,4.161});
SoShape* SoShape394 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance395 = new SoVRMLAppearance();
SoMaterial* SoMaterial396 = new SoMaterial();
SoMaterial396->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance395->addChild(*SoMaterial396);

SoImageTexture* SoImageTexture397 = new SoImageTexture();
SoImageTexture397->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance395->addChild(*SoImageTexture397);

SoShape394->addChild(*SoVRMLAppearance395);

SoIndexedFaceSet* SoIndexedFaceSet398 = new SoIndexedFaceSet();
SoIndexedFaceSet398->setCoordIndex(new int32_t[]{9,10,17,-1,17,16,9,-1,11,1,2,-1,2,8,11,-1,7,8,2,-1,2,3,7,-1,7,3,4,-1,4,13,7,-1,12,13,4,-1,4,5,12,-1,5,6,0,-1,0,12,5,-1,0,6,1,-1,1,11,0,-1,14,20,19,-1,19,15,14,-1,14,15,17,-1,17,10,14,-1,9,16,18,-1,18,21,9,-1,7,10,9,-1,9,8,7,-1,8,9,21,-1,21,11,8,-1,12,20,14,-1,14,13,12,-1,13,14,10,-1,10,7,13,-1,11,21,22,-1,0,24,23,-1,23,12,0,-1,11,22,24,-1,24,0,11,-1,23,20,12,-1,39,40,41,-1,41,42,37,-1,39,41,37,-1,38,39,37,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,28,29,25,-1,25,26,27,-1,28,25,27,-1,35,36,30,-1,30,31,35,-1,17,15,26,-1,26,25,17,-1,15,19,27,-1,27,26,15,-1,19,18,28,-1,28,27,19,-1,18,16,29,-1,29,28,18,-1,16,17,25,-1,25,29,16,-1,19,20,31,-1,31,30,19,-1,20,23,32,-1,32,31,20,-1,23,24,33,-1,33,32,23,-1,24,22,34,-1,34,33,24,-1,22,21,35,-1,35,34,22,-1,21,18,36,-1,36,35,21,-1,18,19,30,-1,30,36,18,-1,2,1,38,-1,38,37,2,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,4,41,-1,41,40,5,-1,4,3,42,-1,42,41,4,-1,3,2,37,-1,37,42,3,-1}, 328);
SoIndexedFaceSet398->setCreaseAngle(3.14159);
SoIndexedFaceSet398->setTexCoordIndex(new int32_t[]{2,1,29,-1,29,28,2,-1,11,5,4,-1,4,13,11,-1,10,13,4,-1,4,6,10,-1,10,6,7,-1,7,12,10,-1,14,12,7,-1,7,8,14,-1,8,9,3,-1,3,14,8,-1,3,9,5,-1,5,11,3,-1,0,33,31,-1,31,27,0,-1,0,27,29,-1,29,1,0,-1,2,28,30,-1,30,35,2,-1,15,18,17,-1,17,16,15,-1,16,17,34,-1,34,19,16,-1,20,32,22,-1,22,21,20,-1,21,22,24,-1,24,23,21,-1,19,34,36,-1,25,39,37,-1,37,20,25,-1,19,36,38,-1,38,26,19,-1,37,32,20,-1,54,55,56,-1,56,57,52,-1,54,56,52,-1,53,54,52,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,43,44,40,-1,40,41,42,-1,43,40,42,-1,50,51,45,-1,45,46,50,-1,29,27,41,-1,41,40,29,-1,27,31,42,-1,42,41,27,-1,31,30,43,-1,43,42,31,-1,30,28,44,-1,44,43,30,-1,28,29,40,-1,40,44,28,-1,31,33,46,-1,46,45,31,-1,32,37,47,-1,47,46,32,-1,37,39,48,-1,48,47,37,-1,38,36,49,-1,49,48,38,-1,36,34,50,-1,50,49,36,-1,35,30,51,-1,51,50,35,-1,30,31,45,-1,45,51,30,-1,4,5,53,-1,53,52,4,-1,5,9,54,-1,54,53,5,-1,9,8,55,-1,55,54,9,-1,8,7,56,-1,56,55,8,-1,7,6,57,-1,57,56,7,-1,6,4,52,-1,52,57,6,-1}, 328);
SoCoordinate* SoCoordinate399 = new SoCoordinate();
SoCoordinate399->setPoint(new float[]{-0.5023,0.0206,0.5225,-0.5069,0.3389,0.9722,0.5239,0.3546,0.9857,0.5823,-0.1222,0.9958,0.5025,-0.5579,0.9554,-0.5186,-0.5579,0.958,-0.5816,-0.1339,0.9847,0.5039,-0.0963,0.5275,0.4495,0.4588,0.4262,0.3875,0.4353,0.2405,0.4682,-0.1454,0.2855,-0.4437,0.4412,0.4574,-0.4398,-0.4616,0.472,0.4332,-0.4607,0.456,0.3649,-0.4415,0.2162,0.4121,-0.4761,-0.0214,0.4225,0.4741,0.0111,0.5118,-0.1454,0.0829,-0.5687,0.5579,-0.0036,-0.5704,-0.4763,-0.041,-0.5628,-0.4412,0.2556,-0.5641,0.4495,0.2541,-0.5671,0.3479,0.4508,-0.5823,-0.2729,0.4646,-0.5691,0.0505,0.5098,0.3979,-0.127,-0.1621,0.3346,-0.3422,-0.2601,-0.4303,-0.3427,-0.2664,-0.429,0.4294,-0.2381,0.3281,0.3657,-0.237,-0.7564,-0.2649,-0.0329,-0.752,-0.2445,0.139,-0.7633,-0.147,0.2601,-0.7556,0.0405,0.2863,-0.7545,0.2128,0.2521,-0.7527,0.2716,0.1381,-0.7554,0.3345,-0.0112,0.4054,0.215,1.213,-0.3954,0.2028,1.201,-0.4497,-0.1402,1.217,-0.4063,-0.4314,1.193,0.3905,-0.4313,1.189,0.4468,-0.1239,1.226}, 129);
SoIndexedFaceSet398->setCoord(*SoCoordinate399);

SoTextureCoordinate* SoTextureCoordinate400 = new SoTextureCoordinate();
SoTextureCoordinate400->setPoint(new float[]{0.148,0.1294,0.142,0.1322,0.1446,0.131,0.1613,0.0957,0.1341,0.1263,0.1554,0.0919,0.1317,0.1272,0.1363,0.1268,0.1571,0.0927,0.1559,0.0889,0.1392,0.1292,0.16,0.0958,0.1443,0.128,0.1415,0.1284,0.1616,0.0962,0.1346,0.0953,0.1273,0.0961,0.126,0.0891,0.1339,0.0889,0.1175,0.0992,0.228,0.0809,0.2186,0.0857,0.2172,0.0848,0.2097,0.0859,0.2098,0.0901,0.2285,0.0738,0.1152,0.1058,0.1523,0.1336,0.1493,0.1348,0.1463,0.1377,0.1682,0.1025,0.1699,0.1017,0.2293,0.0837,0.1648,0.0986,0.112,0.093,0.1632,0.098,0.113,0.0993,0.2302,0.0796,0.1153,0.1053,0.2293,0.0736,0.1463,0.1377,0.1523,0.1336,0.1699,0.1017,0.1682,0.1025,0.1493,0.1348,0.1699,0.1017,0.1648,0.0986,0.2302,0.0796,0.2293,0.0736,0.113,0.0993,0.112,0.093,0.1682,0.1025,0.1341,0.1263,0.1554,0.0919,0.1559,0.0889,0.1571,0.0927,0.1363,0.1268,0.1317,0.1272}, 116);
SoIndexedFaceSet398->setTexCoord(*SoTextureCoordinate400);

SoShape394->setGeometry(*SoIndexedFaceSet398);

SoTransform393->addChild(*SoShape394);

SoHAnimSegment392->addChild(*SoTransform393);

SoHAnimJoint391->addChildren(*SoHAnimSegment392);

SoHAnimJoint* SoHAnimJoint401 = new SoHAnimJoint();
SoHAnimJoint401->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_1"));
SoHAnimJoint401->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_1"));
SoHAnimJoint401->setCenter(new float[]{-2.744,0.5394,5.125});
SoHAnimJoint401->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint401->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment402 = new SoHAnimSegment();
SoHAnimSegment402->X3DNode::setName(QString("r_tarsal_distal_phalanx_1"));
SoHAnimSegment402->setDEF(QString("hanim_r_tarsal_distal_phalanx_1"));
SoTransform* SoTransform403 = new SoTransform();
SoTransform403->setTranslation(new float[]{-2.744,0.5394,5.125});
SoShape* SoShape404 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance405 = new SoVRMLAppearance();
SoMaterial* SoMaterial406 = new SoMaterial();
SoMaterial406->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance405->addChild(*SoMaterial406);

SoImageTexture* SoImageTexture407 = new SoImageTexture();
SoImageTexture407->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance405->addChild(*SoImageTexture407);

SoShape404->addChild(*SoVRMLAppearance405);

SoIndexedFaceSet* SoIndexedFaceSet408 = new SoIndexedFaceSet();
SoIndexedFaceSet408->setCoordIndex(new int32_t[]{3,2,5,-1,5,4,3,-1,1,0,5,-1,5,2,1,-1,1,7,6,-1,6,0,1,-1,8,7,1,-1,1,2,8,-1,3,9,8,-1,8,2,3,-1,10,9,3,-1,3,4,10,-1,11,10,4,-1,4,5,11,-1,0,6,11,-1,11,5,0,-1,7,13,12,-1,12,6,7,-1,14,13,7,-1,7,8,14,-1,9,15,14,-1,14,8,9,-1,16,15,9,-1,9,10,16,-1,17,16,10,-1,10,11,17,-1,6,12,17,-1,17,11,6,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,12,13,19,-1,19,18,12,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,16,22,-1,22,21,15,-1,16,17,23,-1,23,22,16,-1,17,12,18,-1,18,23,17,-1}, 176);
SoIndexedFaceSet408->setCreaseAngle(3.14159);
SoIndexedFaceSet408->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,13,12,15,-1,15,14,13,-1,8,6,5,-1,5,3,8,-1,0,9,8,-1,8,3,0,-1,10,9,0,-1,0,1,10,-1,11,10,1,-1,1,2,11,-1,4,7,11,-1,11,2,4,-1,12,18,16,-1,16,15,12,-1,20,19,6,-1,6,8,20,-1,9,21,20,-1,20,8,9,-1,22,21,9,-1,9,10,22,-1,23,22,10,-1,10,11,23,-1,7,17,23,-1,23,11,7,-1,26,27,28,-1,28,29,24,-1,26,28,24,-1,25,26,24,-1,16,18,25,-1,25,24,16,-1,19,20,26,-1,26,25,19,-1,20,21,27,-1,27,26,20,-1,21,22,28,-1,28,27,21,-1,22,23,29,-1,29,28,22,-1,23,17,24,-1,24,29,23,-1}, 176);
SoCoordinate* SoCoordinate409 = new SoCoordinate();
SoCoordinate409->setPoint(new float[]{-0.344,0.2722,0.7455,0.3545,0.2852,0.7666,0.348,-0.0873,0.9093,0.3417,-0.3926,0.7211,-0.334,-0.3926,0.6949,-0.3526,-0.0873,0.8916,-0.4743,0.3506,0.4051,0.5124,0.3666,0.4046,0.567,-0.0456,0.443,0.5027,-0.442,0.3984,-0.4707,-0.4405,0.4103,-0.5568,-0.1692,0.4444,-0.5073,0.4406,0.0082,0.5236,0.4563,0.0218,0.582,-0.0206,0.0319,0.5021,-0.4563,-0.0085,-0.5189,-0.4563,-0.0059,-0.582,-0.0322,0.0208,-0.3902,0.3124,-0.2366,0.4061,0.3245,-0.2249,0.4471,-0.0116,-0.2116,0.3913,-0.3165,-0.2486,-0.401,-0.3166,-0.2442,-0.444,-0.028,-0.2206}, 72);
SoIndexedFaceSet408->setCoord(*SoCoordinate409);

SoTextureCoordinate* SoTextureCoordinate410 = new SoTextureCoordinate();
SoTextureCoordinate410->setPoint(new float[]{0.1287,0.113,0.1423,0.0921,0.1396,0.0889,0.1257,0.1107,0.1415,0.0903,0.1274,0.1123,0.1297,0.1214,0.15,0.0896,0.1273,0.1223,0.1313,0.1227,0.1521,0.0901,0.1498,0.0859,0.0527,0.151,0.0282,0.1325,0.0446,0.0894,0.0746,0.0899,0.1016,0.0977,0.1554,0.0919,0.0779,0.162,0.1341,0.1263,0.1317,0.1272,0.1363,0.1268,0.1571,0.0927,0.1559,0.0889,0.1554,0.0919,0.0779,0.162,0.1317,0.1272,0.1363,0.1268,0.1571,0.0927,0.1559,0.0889}, 60);
SoIndexedFaceSet408->setTexCoord(*SoTextureCoordinate410);

SoShape404->setGeometry(*SoIndexedFaceSet408);

SoTransform403->addChild(*SoShape404);

SoHAnimSegment402->addChild(*SoTransform403);

SoHAnimJoint401->addChildren(*SoHAnimSegment402);

SoHAnimJoint391->addChildren(*SoHAnimJoint401);

SoHAnimJoint381->addChildren(*SoHAnimJoint391);

SoHAnimJoint371->addChildren(*SoHAnimJoint381);

SoHAnimJoint361->addChildren(*SoHAnimJoint371);

SoHAnimJoint* SoHAnimJoint411 = new SoHAnimJoint();
SoHAnimJoint411->X3DNode::setName(QString("r_cuneonavicular_2"));
SoHAnimJoint411->setDEF(QString("hanim_r_cuneonavicular_2"));
SoHAnimJoint411->setCenter(new float[]{-3.602,1.49,0.9523});
SoHAnimJoint411->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint411->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment412 = new SoHAnimSegment();
SoHAnimSegment412->X3DNode::setName(QString("r_cuneiform_2"));
SoHAnimSegment412->setDEF(QString("hanim_r_cuneiform_2"));
SoTransform* SoTransform413 = new SoTransform();
SoTransform413->setTranslation(new float[]{-3.602,1.49,0.9523});
SoShape* SoShape414 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance415 = new SoVRMLAppearance();
SoMaterial* SoMaterial416 = new SoMaterial();
SoMaterial416->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance415->addChild(*SoMaterial416);

SoImageTexture* SoImageTexture417 = new SoImageTexture();
SoImageTexture417->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance415->addChild(*SoImageTexture417);

SoShape414->addChild(*SoVRMLAppearance415);

SoIndexedFaceSet* SoIndexedFaceSet418 = new SoIndexedFaceSet();
SoIndexedFaceSet418->setCoordIndex(new int32_t[]{1,4,9,-1,9,8,1,-1,5,7,2,-1,2,0,5,-1,4,1,3,-1,3,6,4,-1,10,11,5,-1,5,0,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,1,19,-1,19,18,3,-1,1,8,20,-1,20,19,1,-1,32,37,38,-1,38,39,32,-1,10,0,22,-1,22,21,10,-1,0,2,23,-1,23,22,0,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1}, 304);
SoIndexedFaceSet418->setCreaseAngle(3.14159);
SoIndexedFaceSet418->setTexCoordIndex(new int32_t[]{0,4,9,-1,9,8,0,-1,5,7,2,-1,2,1,5,-1,4,0,3,-1,3,6,4,-1,10,11,5,-1,5,1,10,-1,32,33,36,-1,36,37,32,-1,24,25,28,-1,28,29,24,-1,19,20,21,-1,19,21,22,-1,19,22,23,-1,19,23,18,-1,13,14,15,-1,13,15,16,-1,13,16,17,-1,13,17,12,-1,9,4,13,-1,13,12,9,-1,4,6,14,-1,14,13,4,-1,24,29,30,-1,30,31,24,-1,7,5,16,-1,16,15,7,-1,5,11,17,-1,17,16,5,-1,36,33,34,-1,34,35,36,-1,3,0,19,-1,19,18,3,-1,0,8,20,-1,20,19,0,-1,32,37,38,-1,38,39,32,-1,10,1,22,-1,22,21,10,-1,1,2,23,-1,23,22,1,-1,28,25,26,-1,26,27,28,-1,6,3,25,-1,25,24,6,-1,3,18,26,-1,26,25,3,-1,18,23,27,-1,27,26,18,-1,23,2,28,-1,28,27,23,-1,2,7,29,-1,29,28,2,-1,7,15,30,-1,30,29,7,-1,15,14,31,-1,31,30,15,-1,14,6,24,-1,24,31,14,-1,8,9,33,-1,33,32,8,-1,9,12,34,-1,34,33,9,-1,12,17,35,-1,35,34,12,-1,17,11,36,-1,36,35,17,-1,11,10,37,-1,37,36,11,-1,10,21,38,-1,38,37,10,-1,21,20,39,-1,39,38,21,-1,20,8,32,-1,32,39,20,-1}, 304);
SoCoordinate* SoCoordinate419 = new SoCoordinate();
SoCoordinate419->setPoint(new float[]{-0.2418,-1.317,0.3066,-0.262,1.069,0.2707,-0.2399,-1.332,0.7678,-0.289,0.7461,0.7818,0.3232,0.8508,0.3451,0.3262,-1.31,0.3344,0.3811,0.491,1.052,0.3785,-1.316,1.066,-0.2589,1.334,-0.0919,0.2569,1.202,-0.0183,-0.2486,-1.334,-0.0929,0.2763,-1.329,-0.0115,0.4937,0.6449,0.0794,0.5389,0.5099,0.2504,0.5914,0.2392,0.9077,0.5883,-1.064,0.9201,0.5488,-1.06,0.3077,0.5121,-1.07,0.0848,-0.5859,0.5666,0.674,-0.5593,0.8214,0.2083,-0.5574,0.9493,0.0064,-0.5505,-1.093,0.0054,-0.5421,-1.082,0.3015,-0.5387,-1.092,0.6611,0.2547,0.2976,1.364,-0.3749,0.5415,1.082,-0.4702,0.4247,1.049,-0.4305,-0.9692,1.038,-0.2863,-1.137,1.089,0.2662,-1.123,1.4,0.354,-0.9652,1.34,0.3565,0.1187,1.33,-0.2197,1.194,-0.369,0.2078,1.085,-0.3024,0.3907,0.6038,-0.2314,0.408,-1.005,-0.2264,0.2645,-1.199,-0.2846,-0.2118,-1.203,-0.3608,-0.4088,-1.011,-0.2965,-0.4151,0.8882,-0.2956}, 120);
SoIndexedFaceSet418->setCoord(*SoCoordinate419);

SoTextureCoordinate* SoTextureCoordinate420 = new SoTextureCoordinate();
SoTextureCoordinate420->setPoint(new float[]{0.2179,0.1044,0.2186,0.1086,0.2128,0.1035,0.2098,0.0996,0.2047,0.1286,0.2132,0.1171,0.1953,0.1244,0.2059,0.1148,0.2224,0.1067,0.2132,0.1285,0.2197,0.1123,0.2163,0.1174,0.2132,0.1285,0.2047,0.1286,0.1953,0.1244,0.1953,0.1244,0.2132,0.1171,0.2163,0.1174,0.2098,0.0996,0.2179,0.1044,0.2224,0.1067,0.2224,0.1067,0.2186,0.1086,0.2128,0.1035,0.1953,0.1244,0.2098,0.0996,0.2098,0.0996,0.2128,0.1035,0.2098,0.0996,0.1953,0.1244,0.1953,0.1244,0.1953,0.1244,0.2224,0.1067,0.2132,0.1285,0.2132,0.1285,0.2163,0.1174,0.2132,0.1285,0.2224,0.1067,0.2224,0.1067,0.2224,0.1067}, 80);
SoIndexedFaceSet418->setTexCoord(*SoTextureCoordinate420);

SoShape414->setGeometry(*SoIndexedFaceSet418);

SoTransform413->addChild(*SoShape414);

SoHAnimSegment412->addChild(*SoTransform413);

SoHAnimJoint411->addChildren(*SoHAnimSegment412);

SoHAnimJoint* SoHAnimJoint421 = new SoHAnimJoint();
SoHAnimJoint421->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint421->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint421->setCenter(new float[]{-3.548,1.16,1.825});
SoHAnimJoint421->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint421->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment422 = new SoHAnimSegment();
SoHAnimSegment422->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimSegment422->setDEF(QString("hanim_r_metatarsal_2"));
SoTransform* SoTransform423 = new SoTransform();
SoTransform423->setTranslation(new float[]{-3.548,1.16,1.825});
SoShape* SoShape424 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance425 = new SoVRMLAppearance();
SoMaterial* SoMaterial426 = new SoMaterial();
SoMaterial426->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance425->addChild(*SoMaterial426);

SoImageTexture* SoImageTexture427 = new SoImageTexture();
SoImageTexture427->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance425->addChild(*SoImageTexture427);

SoShape424->addChild(*SoVRMLAppearance425);

SoIndexedFaceSet* SoIndexedFaceSet428 = new SoIndexedFaceSet();
SoIndexedFaceSet428->setCoordIndex(new int32_t[]{12,4,7,-1,7,15,12,-1,0,2,9,-1,9,8,0,-1,1,3,11,-1,11,10,1,-1,5,6,2,-1,2,0,5,-1,8,9,3,-1,3,1,8,-1,14,4,12,-1,12,13,14,-1,18,14,13,-1,13,17,18,-1,42,43,38,-1,38,39,42,-1,46,47,50,-1,50,51,46,-1,29,30,34,-1,34,35,29,-1,19,20,25,-1,25,26,19,-1,28,19,26,-1,26,27,28,-1,21,22,23,-1,23,24,21,-1,37,29,35,-1,35,36,37,-1,30,31,34,-1,20,21,24,-1,24,25,20,-1,31,32,33,-1,33,34,31,-1,3,9,20,-1,20,19,3,-1,9,2,21,-1,21,20,9,-1,2,6,22,-1,22,21,2,-1,42,39,40,-1,40,41,42,-1,7,4,24,-1,24,23,7,-1,4,16,25,-1,25,24,4,-1,16,14,26,-1,26,25,16,-1,14,18,27,-1,27,26,14,-1,50,47,48,-1,48,49,50,-1,11,3,19,-1,19,28,11,-1,0,8,30,-1,30,29,0,-1,8,1,31,-1,31,30,8,-1,1,10,32,-1,32,31,1,-1,46,51,52,-1,52,53,46,-1,17,13,34,-1,34,33,17,-1,13,12,35,-1,35,34,13,-1,12,15,36,-1,36,35,12,-1,38,43,44,-1,44,45,38,-1,5,0,29,-1,29,37,5,-1,15,7,39,-1,39,38,15,-1,7,23,40,-1,40,39,7,-1,23,22,41,-1,41,40,23,-1,22,6,42,-1,42,41,22,-1,6,5,43,-1,43,42,6,-1,5,37,44,-1,44,43,5,-1,37,36,45,-1,45,44,37,-1,36,15,38,-1,38,45,36,-1,10,11,47,-1,47,46,10,-1,11,28,48,-1,48,47,11,-1,28,27,49,-1,49,48,28,-1,27,18,50,-1,50,49,27,-1,18,17,51,-1,51,50,18,-1,17,33,52,-1,52,51,17,-1,33,32,53,-1,53,52,33,-1,32,10,46,-1,46,53,32,-1}, 412);
SoIndexedFaceSet428->setCreaseAngle(3.14159);
SoIndexedFaceSet428->setTexCoordIndex(new int32_t[]{1,0,10,-1,10,7,1,-1,2,3,12,-1,12,11,2,-1,5,6,16,-1,16,15,5,-1,8,9,3,-1,3,2,8,-1,11,12,6,-1,6,5,11,-1,4,0,1,-1,1,13,4,-1,17,4,13,-1,13,14,17,-1,45,46,41,-1,41,42,45,-1,49,50,53,-1,53,54,49,-1,32,33,37,-1,37,38,32,-1,22,23,28,-1,28,29,22,-1,31,22,29,-1,29,30,31,-1,24,25,26,-1,26,27,24,-1,40,32,38,-1,38,39,40,-1,33,34,21,-1,23,24,27,-1,27,28,23,-1,34,35,36,-1,36,37,34,-1,6,12,23,-1,23,22,6,-1,12,3,24,-1,24,23,12,-1,3,9,25,-1,25,24,3,-1,45,42,43,-1,43,44,45,-1,10,0,27,-1,27,26,10,-1,20,18,28,-1,28,27,20,-1,18,19,29,-1,29,28,18,-1,4,17,30,-1,30,29,4,-1,53,50,51,-1,51,52,53,-1,16,6,22,-1,22,31,16,-1,2,11,33,-1,33,32,2,-1,11,5,34,-1,34,33,11,-1,5,15,35,-1,35,34,5,-1,49,54,55,-1,55,56,49,-1,14,13,37,-1,37,36,14,-1,13,1,38,-1,38,37,13,-1,1,7,39,-1,39,38,1,-1,41,46,47,-1,47,48,41,-1,8,2,32,-1,32,40,8,-1,7,10,42,-1,42,41,7,-1,10,26,43,-1,43,42,10,-1,26,25,44,-1,44,43,26,-1,25,9,45,-1,45,44,25,-1,9,8,46,-1,46,45,9,-1,8,40,47,-1,47,46,8,-1,40,39,48,-1,48,47,40,-1,39,7,41,-1,41,48,39,-1,15,16,50,-1,50,49,15,-1,16,31,51,-1,51,50,16,-1,31,30,52,-1,52,51,31,-1,30,17,53,-1,53,52,30,-1,17,14,54,-1,54,53,17,-1,14,36,55,-1,55,54,14,-1,36,35,56,-1,56,55,36,-1,35,15,49,-1,49,56,35,-1}, 412);
SoCoordinate* SoCoordinate429 = new SoCoordinate();
SoCoordinate429->setPoint(new float[]{-0.376,0.2511,1.709,-0.3357,0.7759,0.5398,0.3119,0.2409,1.767,0.3526,0.6595,0.5874,0.3078,-1.076,1.666,-0.3874,0.0522,2.259,0.2343,0.0387,2.332,0.2326,-0.9956,2.295,-0.3451,0.5141,1.12,0.3463,0.4507,1.205,-0.3434,1.076,-0.0912,0.3267,0.8206,0.1791,-0.3294,-1.076,1.609,-0.2875,-1.012,0.4679,0.3874,-0.9909,0.4772,-0.3851,-0.9944,2.223,0.3874,-0.9909,0.4772,-0.2943,-1.002,-0.1052,0.3241,-0.9868,0.193,0.5947,0.492,0.5352,0.5929,0.2828,1.154,0.5593,0.0734,1.716,0.4991,-0.0854,2.16,0.4989,-0.8372,2.132,0.5532,-0.8961,1.67,0.6306,-0.8125,0.499,0.6285,-0.8121,0.4892,0.587,-0.8107,0.3782,0.5955,0.5581,0.3668,-0.6024,0.1292,1.656,-0.5716,0.3941,1.062,-0.5635,0.6565,0.4802,-0.5689,0.8722,0.0262,-0.528,-0.8844,0.0143,-0.522,-0.8924,0.4655,-0.5629,-0.9551,1.597,-0.6111,-0.8893,2.094,-0.6095,-0.0402,2.124,-0.3754,-0.8654,2.416,0.1932,-0.8668,2.492,0.3693,-0.7622,2.474,0.3695,-0.1901,2.494,0.1974,-0.1096,2.517,-0.3791,-0.0968,2.442,-0.5023,-0.1482,2.391,-0.5036,-0.8058,2.368,-0.2236,0.9197,-0.4593,0.3621,0.6915,-0.1877,0.5727,0.4882,-0.046,0.565,-0.7245,-0.0357,0.3891,-0.8422,-0.159,-0.1716,-0.8563,-0.4501,-0.3041,-0.7893,-0.3815,-0.3412,0.8037,-0.3708}, 162);
SoIndexedFaceSet428->setCoord(*SoCoordinate429);

SoTextureCoordinate* SoTextureCoordinate430 = new SoTextureCoordinate();
SoTextureCoordinate430->setPoint(new float[]{0.175,0.1048,0.1833,0.0898,0.1856,0.0872,0.1731,0.1071,0.1985,0.1126,0.2017,0.0948,0.1859,0.1202,0.1801,0.0847,0.1811,0.0824,0.1682,0.1025,0.1699,0.1017,0.1937,0.091,0.1795,0.1136,0.2068,0.0986,0.2128,0.1035,0.2098,0.0996,0.1953,0.1244,0.2059,0.1148,0.1795,0.1136,0.1859,0.1202,0.1731,0.1071,0.2017,0.0948,0.1859,0.1202,0.1795,0.1136,0.1731,0.1071,0.1682,0.1025,0.1682,0.1025,0.1731,0.1071,0.1795,0.1136,0.1859,0.1202,0.1953,0.1244,0.1953,0.1244,0.1856,0.0872,0.1937,0.091,0.2017,0.0948,0.2098,0.0996,0.2098,0.0996,0.2017,0.0948,0.1856,0.0872,0.1811,0.0824,0.1811,0.0824,0.1811,0.0824,0.1682,0.1025,0.1682,0.1025,0.1682,0.1025,0.1682,0.1025,0.1811,0.0824,0.1811,0.0824,0.1811,0.0824,0.2098,0.0996,0.1953,0.1244,0.1953,0.1244,0.1953,0.1244,0.1953,0.1244,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996}, 114);
SoIndexedFaceSet428->setTexCoord(*SoTextureCoordinate430);

SoShape424->setGeometry(*SoIndexedFaceSet428);

SoTransform423->addChild(*SoShape424);

SoHAnimSegment422->addChild(*SoTransform423);

SoHAnimJoint421->addChildren(*SoHAnimSegment422);

SoHAnimJoint* SoHAnimJoint431 = new SoHAnimJoint();
SoHAnimJoint431->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint431->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint431->setCenter(new float[]{-3.651,0.6656,4.348});
SoHAnimJoint431->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint431->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment432 = new SoHAnimSegment();
SoHAnimSegment432->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment432->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform433 = new SoTransform();
SoTransform433->setTranslation(new float[]{-3.651,0.6656,4.348});
SoShape* SoShape434 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance435 = new SoVRMLAppearance();
SoMaterial* SoMaterial436 = new SoMaterial();
SoMaterial436->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance435->addChild(*SoMaterial436);

SoImageTexture* SoImageTexture437 = new SoImageTexture();
SoImageTexture437->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance435->addChild(*SoImageTexture437);

SoShape434->addChild(*SoVRMLAppearance435);

SoIndexedFaceSet* SoIndexedFaceSet438 = new SoIndexedFaceSet();
SoIndexedFaceSet438->setCoordIndex(new int32_t[]{8,18,20,-1,20,6,8,-1,14,21,19,-1,19,11,14,-1,6,20,1,-1,19,15,11,-1,0,14,3,-1,3,2,0,-1,12,17,16,-1,16,8,12,-1,15,17,12,-1,12,11,15,-1,6,1,2,-1,2,3,6,-1,0,21,14,-1,16,18,8,-1,3,4,5,-1,5,6,3,-1,6,5,7,-1,7,8,6,-1,10,11,12,-1,12,9,10,-1,14,11,10,-1,10,13,14,-1,13,4,3,-1,3,14,13,-1,8,7,9,-1,9,12,8,-1,19,21,24,-1,24,23,19,-1,22,25,20,-1,20,18,22,-1,36,30,31,-1,35,36,31,-1,34,35,31,-1,13,10,9,-1,9,7,5,-1,13,9,5,-1,4,13,5,-1,29,26,27,-1,27,28,29,-1,37,41,42,-1,42,43,37,-1,31,32,33,-1,33,34,31,-1,39,40,41,-1,38,39,41,-1,37,38,41,-1,25,22,27,-1,27,26,25,-1,22,23,28,-1,28,27,22,-1,23,24,29,-1,29,28,23,-1,24,25,26,-1,26,29,24,-1,15,19,31,-1,31,30,15,-1,19,23,32,-1,32,31,19,-1,23,22,33,-1,33,32,23,-1,22,18,34,-1,34,33,22,-1,18,16,35,-1,35,34,18,-1,16,17,36,-1,36,35,16,-1,17,15,30,-1,30,36,17,-1,21,0,38,-1,38,37,21,-1,0,2,39,-1,39,38,0,-1,2,1,40,-1,40,39,2,-1,1,20,41,-1,41,40,1,-1,20,25,42,-1,42,41,20,-1,25,24,43,-1,43,42,25,-1,24,21,37,-1,37,43,24,-1}, 336);
SoIndexedFaceSet438->setCreaseAngle(3.14159);
SoIndexedFaceSet438->setTexCoordIndex(new int32_t[]{1,24,30,-1,30,0,1,-1,3,31,25,-1,25,2,3,-1,0,30,4,-1,25,26,2,-1,9,3,5,-1,5,10,9,-1,7,28,27,-1,27,1,7,-1,26,29,8,-1,8,2,26,-1,0,4,11,-1,11,6,0,-1,9,31,3,-1,27,24,1,-1,12,13,14,-1,14,15,12,-1,15,14,16,-1,16,17,15,-1,19,20,21,-1,21,18,19,-1,23,20,19,-1,19,22,23,-1,22,13,12,-1,12,23,22,-1,17,16,18,-1,18,21,17,-1,35,34,38,-1,38,37,35,-1,36,39,33,-1,33,32,36,-1,50,44,45,-1,49,50,45,-1,48,49,45,-1,22,19,18,-1,18,16,14,-1,22,18,14,-1,13,22,14,-1,43,40,41,-1,41,42,43,-1,51,55,56,-1,56,57,51,-1,45,46,47,-1,47,48,45,-1,53,54,55,-1,52,53,55,-1,51,52,55,-1,39,36,41,-1,41,40,39,-1,36,37,42,-1,42,41,36,-1,37,38,43,-1,43,42,37,-1,38,39,40,-1,40,43,38,-1,26,25,45,-1,45,44,26,-1,35,37,46,-1,46,45,35,-1,37,36,47,-1,47,46,37,-1,36,32,48,-1,48,47,36,-1,24,27,49,-1,49,48,24,-1,27,28,50,-1,50,49,27,-1,29,26,44,-1,44,50,29,-1,31,9,52,-1,52,51,31,-1,9,10,53,-1,53,52,9,-1,11,4,54,-1,54,53,11,-1,4,30,55,-1,55,54,4,-1,33,39,56,-1,56,55,33,-1,39,38,57,-1,57,56,39,-1,38,34,51,-1,51,57,38,-1}, 336);
SoCoordinate* SoCoordinate439 = new SoCoordinate();
SoCoordinate439->setPoint(new float[]{0.3393,0.3234,0.264,0.3241,-0.2974,0.2778,0.3373,0.026,0.323,0.2778,-0.0393,0.3227,0.2424,-0.183,0.7679,0.1972,-0.5469,0.7512,0.2409,-0.4436,0.2718,-0.2712,-0.5414,0.6896,-0.2313,-0.4503,0.2153,-0.3295,-0.1296,0.7058,-0.2745,0.3527,0.6921,-0.2339,0.4182,0.2093,-0.3003,-0.075,0.2531,0.204,0.3657,0.7504,0.2252,0.4123,0.2599,-0.3372,0.3253,0.1752,-0.3386,-0.3128,0.1812,-0.3436,0.0018,0.2359,-0.2944,-0.4678,-0.021,-0.3035,0.4187,-0.0402,0.3436,-0.4656,0.0689,0.3423,0.425,0.0673,-0.2817,-0.4996,-0.2995,-0.2839,0.5469,-0.2638,0.3377,0.5334,-0.1904,0.336,-0.5008,-0.2278,0.2473,-0.3729,-0.4869,-0.1345,-0.3721,-0.5309,-0.1362,0.4342,-0.5035,0.2486,0.4258,-0.4578,-0.5241,0.2491,-0.0133,-0.5013,0.3226,-0.1835,-0.4932,0.3669,-0.2606,-0.4932,-0.3819,-0.2863,-0.4923,-0.3672,-0.1575,-0.5259,-0.2546,-0.0109,-0.5286,-0.0001,0.0336,0.554,0.3222,-0.0429,0.5543,0.2475,0.1018,0.5536,0.0219,0.1466,0.5407,-0.2386,0.1101,0.5571,-0.3586,-0.0389,0.5501,-0.3746,-0.1733,0.5517,0.3659,-0.1465}, 132);
SoIndexedFaceSet438->setCoord(*SoCoordinate439);

SoTextureCoordinate* SoTextureCoordinate440 = new SoTextureCoordinate();
SoTextureCoordinate440->setPoint(new float[]{0.2327,0.0796,0.2439,0.0803,0.2062,0.05,0.2147,0.0491,0.2302,0.0796,0.2205,0.0532,0.2301,0.0734,0.2486,0.0743,0.2013,0.0552,0.2187,0.0481,0.221,0.0541,0.2293,0.0736,0.1746,0.075,0.1709,0.0678,0.1706,0.0686,0.1745,0.076,0.1824,0.0523,0.1886,0.0572,0.183,0.0511,0.1834,0.0508,0.1882,0.0556,0.1885,0.0566,0.1716,0.0676,0.1748,0.0736,0.2444,0.0847,0.2027,0.042,0.2022,0.0485,0.2464,0.0799,0.2486,0.0741,0.2011,0.0554,0.2293,0.0837,0.2177,0.0418,0.1769,0.0796,0.1648,0.0986,0.1632,0.098,0.1766,0.0777,0.1801,0.0847,0.1811,0.0824,0.1682,0.1025,0.1699,0.1017,0.1699,0.1017,0.1801,0.0847,0.1811,0.0824,0.1682,0.1025,0.2022,0.0485,0.2027,0.042,0.1811,0.0824,0.1801,0.0847,0.1769,0.0796,0.2464,0.0799,0.2486,0.0741,0.1632,0.098,0.2187,0.0481,0.221,0.0541,0.2302,0.0796,0.2293,0.0837,0.1699,0.1017,0.1682,0.1025}, 116);
SoIndexedFaceSet438->setTexCoord(*SoTextureCoordinate440);

SoShape434->setGeometry(*SoIndexedFaceSet438);

SoTransform433->addChild(*SoShape434);

SoHAnimSegment432->addChild(*SoTransform433);

SoHAnimJoint431->addChildren(*SoHAnimSegment432);

SoHAnimJoint* SoHAnimJoint441 = new SoHAnimJoint();
SoHAnimJoint441->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint441->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimJoint441->setCenter(new float[]{-3.73,0.5621,5.067});
SoHAnimJoint441->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint441->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment442 = new SoHAnimSegment();
SoHAnimSegment442->X3DNode::setName(QString("r_tarsal_middle_phalanx_2"));
SoHAnimSegment442->setDEF(QString("hanim_r_tarsal_middle_phalanx_2"));
SoTransform* SoTransform443 = new SoTransform();
SoTransform443->setTranslation(new float[]{-3.73,0.5621,5.067});
SoShape* SoShape444 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance445 = new SoVRMLAppearance();
SoMaterial* SoMaterial446 = new SoMaterial();
SoMaterial446->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance445->addChild(*SoMaterial446);

SoImageTexture* SoImageTexture447 = new SoImageTexture();
SoImageTexture447->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance445->addChild(*SoImageTexture447);

SoShape444->addChild(*SoVRMLAppearance445);

SoIndexedFaceSet* SoIndexedFaceSet448 = new SoIndexedFaceSet();
SoIndexedFaceSet448->setCoordIndex(new int32_t[]{0,7,6,-1,6,1,0,-1,2,8,7,-1,7,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,1,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1}, 176);
SoIndexedFaceSet448->setCreaseAngle(3.14159);
SoIndexedFaceSet448->setTexCoordIndex(new int32_t[]{0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,6,-1,6,5,14,-1,8,15,7,-1,7,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,7,24,-1,24,23,1,-1,5,6,25,-1,25,24,5,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1}, 176);
SoCoordinate* SoCoordinate449 = new SoCoordinate();
SoCoordinate449->setPoint(new float[]{0.3183,-0.4691,0.449,0.3467,-0.0977,0.4619,-0.3028,-0.4691,0.3802,-0.3467,-0.0977,0.3792,-0.2958,0.1955,0.3815,0.2928,0.2184,0.4522,0.3214,-0.0796,0.049,0.2763,-0.4435,0.0323,-0.1921,-0.4379,-0.0293,-0.2505,-0.0262,-0.0131,-0.1955,0.4562,-0.0268,0.2831,0.4691,0.0315,0.2728,-0.0774,-0.1826,0.237,-0.3678,-0.1982,-0.1011,-0.3637,-0.2446,-0.1496,-0.025,-0.2272,-0.1027,0.3833,-0.2419,0.2402,0.3926,-0.1995,0.1636,-0.3203,0.5822,0.1797,-0.1053,0.5929,0.1512,0.0631,0.5854,-0.1873,0.0499,0.5442,-0.214,-0.1025,0.5454,-0.1882,-0.3203,0.5451}, 72);
SoIndexedFaceSet448->setCoord(*SoCoordinate449);

SoTextureCoordinate* SoTextureCoordinate450 = new SoTextureCoordinate();
SoTextureCoordinate450->setPoint(new float[]{0.1653,0.0654,0.1636,0.063,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1293,0.0261,0.0949,0.0775,0.1651,0.0639,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1291,0.0918,0.1834,0.0508,0.1554,0.0532,0.1716,0.0676,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1834,0.0508,0.1554,0.0532,0.1653,0.0654,0.1636,0.063,0.1651,0.0639,0.0949,0.0775,0.1792,0.0409,0.1795,0.0453}, 56);
SoIndexedFaceSet448->setTexCoord(*SoTextureCoordinate450);

SoShape444->setGeometry(*SoIndexedFaceSet448);

SoTransform443->addChild(*SoShape444);

SoHAnimSegment442->addChild(*SoTransform443);

SoHAnimJoint441->addChildren(*SoHAnimSegment442);

SoHAnimJoint* SoHAnimJoint451 = new SoHAnimJoint();
SoHAnimJoint451->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint451->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint451->setCenter(new float[]{-3.73,0.4367,5.486});
SoHAnimJoint451->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint451->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment452 = new SoHAnimSegment();
SoHAnimSegment452->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSegment452->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoTransform* SoTransform453 = new SoTransform();
SoTransform453->setTranslation(new float[]{-3.73,0.4367,5.486});
SoShape* SoShape454 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance455 = new SoVRMLAppearance();
SoMaterial* SoMaterial456 = new SoMaterial();
SoMaterial456->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance455->addChild(*SoMaterial456);

SoImageTexture* SoImageTexture457 = new SoImageTexture();
SoImageTexture457->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance455->addChild(*SoImageTexture457);

SoShape454->addChild(*SoVRMLAppearance455);

SoIndexedFaceSet* SoIndexedFaceSet458 = new SoIndexedFaceSet();
SoIndexedFaceSet458->setCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,6,7,-1,7,1,0,-1,3,8,6,-1,6,0,3,-1,9,8,3,-1,3,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1}, 128);
SoIndexedFaceSet458->setCreaseAngle(3.14159);
SoIndexedFaceSet458->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,4,2,-1,2,1,5,-1,0,8,9,-1,9,1,0,-1,3,10,8,-1,8,0,3,-1,11,10,3,-1,3,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,6,-1,6,7,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1}, 128);
SoCoordinate* SoCoordinate459 = new SoCoordinate();
SoCoordinate459->setPoint(new float[]{0.2128,-0.2652,0.3261,0.2081,-0.028,0.4176,-0.2913,-0.028,0.3571,-0.2272,-0.2652,0.2666,-0.2609,0.2185,0.2973,0.1985,0.2313,0.3646,0.3183,-0.3438,0.0295,0.3467,0.0277,0.0425,-0.3028,-0.3438,-0.0392,-0.3467,0.0277,-0.0402,-0.2958,0.3209,-0.0379,0.2928,0.3438,0.0327,0.2562,0.0235,-0.1565,0.2371,-0.2306,-0.1677,-0.182,-0.2306,-0.2127,-0.2123,0.0256,-0.2127,-0.1796,0.2132,-0.2131,0.2214,0.2288,-0.1645}, 54);
SoIndexedFaceSet458->setCoord(*SoCoordinate459);

SoTextureCoordinate* SoTextureCoordinate460 = new SoTextureCoordinate();
SoTextureCoordinate460->setPoint(new float[]{0.1643,0.0579,0.1638,0.0538,0.174,0.0396,0.1747,0.0423,0.1756,0.0403,0.1632,0.0573,0.066,0.0493,0.0915,0.0082,0.1653,0.0654,0.1636,0.063,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.0949,0.0775,0.1293,0.0261,0.1651,0.0639,0.1636,0.063,0.1653,0.0654,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1293,0.0261}, 44);
SoIndexedFaceSet458->setTexCoord(*SoTextureCoordinate460);

SoShape454->setGeometry(*SoIndexedFaceSet458);

SoTransform453->addChild(*SoShape454);

SoHAnimSegment452->addChild(*SoTransform453);

SoHAnimJoint451->addChildren(*SoHAnimSegment452);

SoHAnimJoint441->addChildren(*SoHAnimJoint451);

SoHAnimJoint431->addChildren(*SoHAnimJoint441);

SoHAnimJoint421->addChildren(*SoHAnimJoint431);

SoHAnimJoint411->addChildren(*SoHAnimJoint421);

SoHAnimJoint361->addChildren(*SoHAnimJoint411);

SoHAnimJoint* SoHAnimJoint461 = new SoHAnimJoint();
SoHAnimJoint461->X3DNode::setName(QString("r_cuneonavicular_3"));
SoHAnimJoint461->setDEF(QString("hanim_r_cuneonavicular_3"));
SoHAnimJoint461->setCenter(new float[]{-4.116,1.484,0.8808});
SoHAnimJoint461->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint461->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment462 = new SoHAnimSegment();
SoHAnimSegment462->X3DNode::setName(QString("r_cuneiform_3"));
SoHAnimSegment462->setDEF(QString("hanim_r_cuneiform_3"));
SoTransform* SoTransform463 = new SoTransform();
SoTransform463->setTranslation(new float[]{-4.116,1.484,0.8808});
SoShape* SoShape464 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance465 = new SoVRMLAppearance();
SoMaterial* SoMaterial466 = new SoMaterial();
SoMaterial466->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance465->addChild(*SoMaterial466);

SoImageTexture* SoImageTexture467 = new SoImageTexture();
SoImageTexture467->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance465->addChild(*SoImageTexture467);

SoShape464->addChild(*SoVRMLAppearance465);

SoIndexedFaceSet* SoIndexedFaceSet468 = new SoIndexedFaceSet();
SoIndexedFaceSet468->setCoordIndex(new int32_t[]{4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,9,-1,9,7,4,-1,20,21,24,-1,24,25,20,-1,12,13,10,-1,10,11,12,-1,18,19,14,-1,14,17,18,-1,15,16,17,-1,17,14,15,-1,0,4,11,-1,11,10,0,-1,4,7,12,-1,12,11,4,-1,7,1,13,-1,13,12,7,-1,24,21,22,-1,22,23,24,-1,3,6,15,-1,15,14,3,-1,20,25,26,-1,26,27,20,-1,5,2,17,-1,17,16,5,-1,2,9,18,-1,18,17,2,-1,9,8,19,-1,19,18,9,-1,8,3,14,-1,14,19,8,-1,6,0,21,-1,21,20,6,-1,0,10,22,-1,22,21,0,-1,10,13,23,-1,23,22,10,-1,13,1,24,-1,24,23,13,-1,1,5,25,-1,25,24,1,-1,5,16,26,-1,26,25,5,-1,16,15,27,-1,27,26,16,-1,15,6,20,-1,20,27,15,-1}, 208);
SoIndexedFaceSet468->setCreaseAngle(3.14159);
SoIndexedFaceSet468->setTexCoordIndex(new int32_t[]{4,0,6,-1,6,3,4,-1,4,3,8,-1,5,1,7,-1,7,2,5,-1,2,7,9,-1,4,8,10,-1,10,11,4,-1,22,23,26,-1,26,27,22,-1,14,15,12,-1,12,13,14,-1,20,21,16,-1,16,19,20,-1,17,18,19,-1,19,16,17,-1,0,4,13,-1,13,12,0,-1,4,11,14,-1,14,13,4,-1,7,1,15,-1,15,14,7,-1,26,23,24,-1,24,25,26,-1,3,6,17,-1,17,16,3,-1,22,27,28,-1,28,29,22,-1,5,2,19,-1,19,18,5,-1,2,9,20,-1,20,19,2,-1,10,8,21,-1,21,20,10,-1,8,3,16,-1,16,21,8,-1,6,0,23,-1,23,22,6,-1,0,12,24,-1,24,23,0,-1,12,15,25,-1,25,24,12,-1,15,1,26,-1,26,25,15,-1,1,5,27,-1,27,26,1,-1,5,18,28,-1,28,27,5,-1,18,17,29,-1,29,28,18,-1,17,6,22,-1,22,29,17,-1}, 208);
SoCoordinate* SoCoordinate469 = new SoCoordinate();
SoCoordinate469->setPoint(new float[]{-0.3141,0.6132,0.8819,-0.2408,-1.34,0.8742,0.2719,-1.312,0.3782,0.2517,1.075,0.3423,-0.2453,0.9604,0.0142,0.2738,-1.326,0.8393,0.2247,0.7517,0.8534,-0.2144,-1.314,0.0184,0.2548,1.34,-0.0203,0.2651,-1.329,-0.0214,-0.5551,0.398,0.7409,-0.4991,0.6279,0.1249,-0.4757,-1.204,0.1283,-0.4872,-1.221,0.7343,0.4782,0.9895,0.2862,0.4537,0.6961,0.7506,0.5001,-1.215,0.7378,0.4955,-1.204,0.381,0.4895,-1.216,0.0879,0.4811,1.134,0.0888,0.2293,0.4659,1.208,-0.2844,0.3497,1.239,-0.4589,0.1843,1.144,-0.3966,-1.12,1.138,-0.222,-1.185,1.237,0.2534,-1.174,1.199,0.4036,-1.109,1.132,0.3609,0.4374,1.144}, 84);
SoIndexedFaceSet468->setCoord(*SoCoordinate469);

SoTextureCoordinate* SoTextureCoordinate470 = new SoTextureCoordinate();
SoTextureCoordinate470->setPoint(new float[]{0.2226,0.0828,0.2197,0.0903,0.2186,0.1086,0.2179,0.1044,0.2314,0.0879,0.2128,0.1035,0.2098,0.0996,0.2271,0.0958,0.2224,0.1067,0.2197,0.1123,0.2224,0.1067,0.2314,0.0879,0.2226,0.0828,0.2314,0.0879,0.2314,0.0879,0.2197,0.0903,0.2179,0.1044,0.2098,0.0996,0.2098,0.0996,0.2186,0.1086,0.2197,0.1123,0.2224,0.1067,0.2098,0.0996,0.2226,0.0828,0.2226,0.0828,0.2197,0.0903,0.2226,0.0828,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996}, 60);
SoIndexedFaceSet468->setTexCoord(*SoTextureCoordinate470);

SoShape464->setGeometry(*SoIndexedFaceSet468);

SoTransform463->addChild(*SoShape464);

SoHAnimSegment462->addChild(*SoTransform463);

SoHAnimJoint461->addChildren(*SoHAnimSegment462);

SoHAnimJoint* SoHAnimJoint471 = new SoHAnimJoint();
SoHAnimJoint471->X3DNode::setName(QString("r_tarsometatarsal_3"));
SoHAnimJoint471->setDEF(QString("hanim_r_tarsometatarsal_3"));
SoHAnimJoint471->setCenter(new float[]{-4.188,1.16,1.751});
SoHAnimJoint471->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint471->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment472 = new SoHAnimSegment();
SoHAnimSegment472->X3DNode::setName(QString("r_metatarsal_3"));
SoHAnimSegment472->setDEF(QString("hanim_r_metatarsal_3"));
SoTransform* SoTransform473 = new SoTransform();
SoTransform473->setTranslation(new float[]{-4.188,1.16,1.751});
SoShape* SoShape474 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance475 = new SoVRMLAppearance();
SoMaterial* SoMaterial476 = new SoMaterial();
SoMaterial476->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance475->addChild(*SoMaterial476);

SoImageTexture* SoImageTexture477 = new SoImageTexture();
SoImageTexture477->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance475->addChild(*SoImageTexture477);

SoShape474->addChild(*SoVRMLAppearance475);

SoIndexedFaceSet* SoIndexedFaceSet478 = new SoIndexedFaceSet();
SoIndexedFaceSet478->setCoordIndex(new int32_t[]{15,12,13,-1,13,3,15,-1,10,7,0,-1,0,2,10,-1,9,1,14,-1,14,6,9,-1,3,13,7,-1,7,10,3,-1,12,15,5,-1,5,16,12,-1,6,8,17,-1,17,9,6,-1,17,8,11,-1,11,4,17,-1,27,28,31,-1,34,35,32,-1,32,33,34,-1,28,29,30,-1,30,31,28,-1,35,27,31,-1,31,32,35,-1,23,24,20,-1,22,23,20,-1,20,21,22,-1,25,26,18,-1,18,19,25,-1,24,25,19,-1,19,20,24,-1,1,9,19,-1,19,18,1,-1,9,17,20,-1,20,19,9,-1,17,4,21,-1,21,20,17,-1,48,45,46,-1,46,47,48,-1,5,15,23,-1,23,22,5,-1,15,3,24,-1,24,23,15,-1,3,10,25,-1,25,24,3,-1,10,2,26,-1,26,25,10,-1,40,37,38,-1,38,39,40,-1,13,12,28,-1,28,27,13,-1,12,16,29,-1,29,28,12,-1,44,49,50,-1,50,51,44,-1,11,8,31,-1,31,30,11,-1,8,6,32,-1,32,31,8,-1,6,14,33,-1,33,32,6,-1,36,41,42,-1,42,43,36,-1,0,7,35,-1,35,34,0,-1,7,13,27,-1,27,35,7,-1,37,40,41,-1,41,36,37,-1,48,49,44,-1,44,45,48,-1,14,1,37,-1,37,36,14,-1,1,18,38,-1,38,37,1,-1,18,26,39,-1,39,38,18,-1,26,2,40,-1,40,39,26,-1,2,0,41,-1,41,40,2,-1,0,34,42,-1,42,41,0,-1,34,33,43,-1,43,42,34,-1,33,14,36,-1,36,43,33,-1,16,5,45,-1,45,44,16,-1,5,22,46,-1,46,45,5,-1,22,21,47,-1,47,46,22,-1,21,4,48,-1,48,47,21,-1,4,11,49,-1,49,48,4,-1,11,30,50,-1,50,49,11,-1,30,29,51,-1,51,50,30,-1,29,16,44,-1,44,51,29,-1}, 400);
SoIndexedFaceSet478->setCreaseAngle(3.14159);
SoIndexedFaceSet478->setTexCoordIndex(new int32_t[]{25,7,16,-1,16,3,25,-1,12,9,0,-1,0,2,12,-1,22,1,20,-1,20,18,22,-1,13,17,19,-1,19,23,13,-1,15,24,5,-1,5,26,15,-1,8,21,28,-1,28,11,8,-1,14,10,6,-1,6,4,14,-1,43,45,27,-1,54,55,51,-1,51,53,54,-1,46,47,48,-1,48,50,46,-1,56,44,49,-1,49,52,56,-1,36,38,28,-1,35,37,33,-1,33,34,35,-1,40,42,29,-1,29,30,40,-1,39,41,31,-1,31,32,39,-1,1,22,30,-1,30,29,1,-1,11,28,32,-1,32,31,11,-1,14,4,34,-1,34,33,14,-1,70,67,68,-1,68,69,70,-1,5,24,37,-1,37,35,5,-1,25,3,38,-1,38,36,25,-1,13,23,41,-1,41,39,13,-1,12,2,42,-1,42,40,12,-1,62,58,60,-1,60,61,62,-1,16,7,45,-1,45,43,16,-1,15,26,47,-1,47,46,15,-1,66,71,73,-1,73,74,66,-1,6,10,50,-1,50,48,6,-1,21,8,52,-1,52,49,21,-1,18,20,53,-1,53,51,18,-1,57,63,64,-1,64,65,57,-1,0,9,55,-1,55,54,0,-1,19,17,44,-1,44,56,19,-1,59,62,63,-1,63,57,59,-1,70,72,66,-1,66,67,70,-1,20,1,59,-1,59,57,20,-1,1,29,60,-1,60,58,1,-1,29,42,61,-1,61,60,29,-1,42,2,62,-1,62,61,42,-1,2,0,63,-1,63,62,2,-1,0,54,64,-1,64,63,0,-1,54,53,65,-1,65,64,54,-1,53,20,57,-1,57,65,53,-1,26,5,67,-1,67,66,26,-1,5,35,68,-1,68,67,5,-1,35,34,69,-1,69,68,35,-1,34,4,70,-1,70,69,34,-1,4,6,72,-1,72,70,4,-1,6,48,73,-1,73,71,6,-1,48,47,74,-1,74,73,48,-1,47,26,66,-1,66,74,47,-1}, 400);
SoCoordinate* SoCoordinate479 = new SoCoordinate();
SoCoordinate479->setPoint(new float[]{-0.3514,0.0088,2.189,0.2551,-0.9944,2.297,0.2528,0.0522,2.333,0.2951,0.5141,1.194,0.3459,-1.002,-0.0312,0.2968,1.076,-0.0171,-0.236,-1.076,1.597,-0.2984,0.2146,1.686,-0.2182,-1.032,0.4559,0.3108,-1.076,1.683,0.2642,0.2511,1.783,-0.1688,-1.016,0.0037,-0.2567,0.7002,0.5242,-0.2664,0.4574,1.105,-0.3555,-0.9951,2.147,0.3045,0.7759,0.6139,-0.2421,0.9373,0.0114,0.3527,-1.012,0.5419,0.4555,-0.9034,2.208,0.5053,-0.9726,1.685,0.5463,-0.9098,0.5513,0.5402,-0.9013,0.0735,0.4975,0.9256,0.0859,0.5034,0.6915,0.5785,0.495,0.4292,1.16,0.4642,0.1647,1.753,0.4562,-0.0112,2.238,-0.4671,0.3356,0.9778,-0.4564,0.5794,0.3947,-0.4508,0.735,0.0575,-0.3868,-0.8992,0.0513,-0.4273,-0.911,0.3814,-0.4427,-0.9545,1.511,-0.5425,-0.8904,1.948,-0.5341,-0.0799,1.982,-0.4962,0.0926,1.56,-0.404,-0.8727,2.327,0.1714,-0.8722,2.472,0.2831,-0.8318,2.473,0.2837,-0.1125,2.497,0.1794,-0.0912,2.498,-0.3948,-0.1313,2.362,-0.515,-0.1786,2.318,-0.5218,-0.8172,2.291,-0.1845,0.8454,-0.2358,0.2895,0.9675,-0.2731,0.4148,0.8711,-0.2009,0.4547,-0.8346,-0.2124,0.3314,-0.8987,-0.2789,-0.1384,-0.9111,-0.2399,-0.2817,-0.8344,-0.2087,-0.3416,0.6936,-0.203}, 156);
SoIndexedFaceSet478->setCoord(*SoCoordinate479);

SoTextureCoordinate* SoTextureCoordinate480 = new SoTextureCoordinate();
SoTextureCoordinate480->setPoint(new float[]{0.195,0.0629,0.1801,0.0847,0.1811,0.0824,0.1937,0.091,0.2128,0.1035,0.2098,0.0996,0.2197,0.0903,0.2138,0.0778,0.1989,0.0701,0.1984,0.068,0.2129,0.0844,0.1833,0.0898,0.1856,0.0872,0.1937,0.091,0.2068,0.0986,0.2138,0.0778,0.2061,0.0729,0.2061,0.0729,0.1989,0.0701,0.1984,0.068,0.1952,0.0651,0.2129,0.0844,0.1833,0.0898,0.1856,0.0872,0.2017,0.0948,0.2017,0.0948,0.2226,0.0828,0.2138,0.0778,0.1937,0.091,0.1811,0.0824,0.1856,0.0872,0.1856,0.0872,0.1937,0.091,0.2017,0.0948,0.2098,0.0996,0.2098,0.0996,0.2017,0.0948,0.2017,0.0948,0.1937,0.091,0.1937,0.091,0.1856,0.0872,0.1856,0.0872,0.1811,0.0824,0.2061,0.0729,0.2061,0.0729,0.2138,0.0778,0.2138,0.0778,0.2226,0.0828,0.2226,0.0828,0.2138,0.0778,0.2138,0.0778,0.1984,0.068,0.1984,0.068,0.195,0.0629,0.195,0.0629,0.1984,0.068,0.1984,0.068,0.195,0.0629,0.1811,0.0824,0.1801,0.0847,0.1811,0.0824,0.1811,0.0824,0.1811,0.0824,0.195,0.0629,0.195,0.0629,0.195,0.0629,0.2226,0.0828,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996,0.2098,0.0996,0.2226,0.0828,0.2197,0.0903,0.2226,0.0828,0.2226,0.0828}, 150);
SoIndexedFaceSet478->setTexCoord(*SoTextureCoordinate480);

SoShape474->setGeometry(*SoIndexedFaceSet478);

SoTransform473->addChild(*SoShape474);

SoHAnimSegment472->addChild(*SoTransform473);

SoHAnimJoint471->addChildren(*SoHAnimSegment472);

SoHAnimJoint* SoHAnimJoint481 = new SoHAnimJoint();
SoHAnimJoint481->X3DNode::setName(QString("r_metatarsophalangeal_3"));
SoHAnimJoint481->setDEF(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimJoint481->setCenter(new float[]{-4.271,0.6692,4.241});
SoHAnimJoint481->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint481->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment482 = new SoHAnimSegment();
SoHAnimSegment482->X3DNode::setName(QString("r_tarsal_proximal_phalanx_3"));
SoHAnimSegment482->setDEF(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoTransform* SoTransform483 = new SoTransform();
SoTransform483->setTranslation(new float[]{-4.271,0.6692,4.241});
SoShape* SoShape484 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance485 = new SoVRMLAppearance();
SoMaterial* SoMaterial486 = new SoMaterial();
SoMaterial486->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance485->addChild(*SoMaterial486);

SoImageTexture* SoImageTexture487 = new SoImageTexture();
SoImageTexture487->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance485->addChild(*SoImageTexture487);

SoShape484->addChild(*SoVRMLAppearance485);

SoIndexedFaceSet* SoIndexedFaceSet488 = new SoIndexedFaceSet();
SoIndexedFaceSet488->setCoordIndex(new int32_t[]{13,0,1,-1,1,7,13,-1,7,1,2,-1,2,9,7,-1,4,6,14,-1,14,3,4,-1,8,6,4,-1,4,5,8,-1,5,0,13,-1,13,8,5,-1,23,17,15,-1,15,19,23,-1,16,18,24,-1,24,20,16,-1,9,23,19,-1,19,7,9,-1,8,20,24,-1,24,6,8,-1,7,19,11,-1,24,21,6,-1,10,8,13,-1,13,12,10,-1,14,22,25,-1,25,9,14,-1,21,22,14,-1,14,6,21,-1,7,11,12,-1,12,13,7,-1,10,20,8,-1,25,23,9,-1,9,2,3,-1,3,14,9,-1,5,4,3,-1,3,2,1,-1,5,3,1,-1,0,5,1,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,41,42,43,-1,43,37,41,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,15,17,27,-1,27,26,15,-1,17,18,28,-1,28,27,17,-1,18,16,29,-1,29,28,18,-1,16,15,26,-1,26,29,16,-1,17,23,31,-1,31,30,17,-1,23,25,32,-1,32,31,23,-1,25,22,33,-1,33,32,25,-1,22,21,34,-1,34,33,22,-1,21,24,35,-1,35,34,21,-1,24,18,36,-1,36,35,24,-1,18,17,30,-1,30,36,18,-1,20,10,38,-1,38,37,20,-1,10,12,39,-1,39,38,10,-1,12,11,40,-1,40,39,12,-1,11,19,41,-1,41,40,11,-1,19,15,42,-1,42,41,19,-1,15,16,43,-1,43,42,15,-1,16,20,37,-1,37,43,16,-1}, 336);
SoIndexedFaceSet488->setCreaseAngle(3.14159);
SoIndexedFaceSet488->setTexCoordIndex(new int32_t[]{22,1,0,-1,0,7,22,-1,7,0,2,-1,2,9,7,-1,4,6,23,-1,23,3,4,-1,8,6,4,-1,4,5,8,-1,5,1,22,-1,22,8,5,-1,36,26,24,-1,24,29,36,-1,25,27,38,-1,38,31,25,-1,11,35,28,-1,28,10,11,-1,13,30,37,-1,37,12,13,-1,10,28,15,-1,37,32,12,-1,14,13,16,-1,16,20,14,-1,18,33,39,-1,39,11,18,-1,32,34,19,-1,19,12,32,-1,10,15,21,-1,21,17,10,-1,14,30,13,-1,39,35,11,-1,9,2,3,-1,3,23,9,-1,5,4,3,-1,3,2,0,-1,5,3,0,-1,1,5,0,-1,47,48,49,-1,46,47,49,-1,45,46,49,-1,55,56,57,-1,57,51,55,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,24,26,41,-1,41,40,24,-1,26,27,42,-1,42,41,26,-1,27,25,43,-1,43,42,27,-1,25,24,40,-1,40,43,25,-1,26,36,45,-1,45,44,26,-1,35,39,46,-1,46,45,35,-1,39,33,47,-1,47,46,39,-1,34,32,48,-1,48,47,34,-1,32,37,49,-1,49,48,32,-1,38,27,50,-1,50,49,38,-1,27,26,44,-1,44,50,27,-1,30,14,52,-1,52,51,30,-1,14,20,53,-1,53,52,14,-1,21,15,54,-1,54,53,21,-1,15,28,55,-1,55,54,15,-1,29,24,56,-1,56,55,29,-1,24,25,57,-1,57,56,24,-1,25,31,51,-1,51,57,25,-1}, 336);
SoCoordinate* SoCoordinate489 = new SoCoordinate();
SoCoordinate489->setPoint(new float[]{0.1594,-0.1332,0.7353,0.1083,-0.5433,0.705,-0.2948,-0.537,0.6162,-0.3607,-0.1332,0.6075,-0.3179,0.2847,0.6096,0.1134,0.2976,0.7106,-0.2307,0.3831,0.1658,0.1687,-0.4707,0.2753,0.1683,0.3967,0.266,-0.2141,-0.4772,0.1676,0.2828,0.3217,0.2825,0.2814,-0.3164,0.2886,0.2764,-0.0018,0.3432,0.2194,-0.0661,0.3461,-0.2983,-0.0994,0.2248,0.3383,-0.5032,-0.1922,0.3361,0.5433,-0.1564,-0.2723,-0.5039,-0.3421,-0.2682,0.4999,-0.3003,0.3256,-0.4714,0.0864,0.3165,0.4151,0.0671,-0.3314,0.3308,0.1403,-0.3388,-0.0098,0.2061,-0.2976,-0.4701,-0.0746,-0.2868,0.3935,-0.0986,-0.3268,-0.4338,0.1421,0.2714,-0.3691,-0.4482,-0.0939,-0.3695,-0.5391,-0.091,0.3914,-0.5067,0.2699,0.4174,-0.422,-0.4721,-0.2654,-0.2843,-0.4847,-0.2485,-0.151,-0.4993,-0.2304,-0.0429,-0.5052,-0.0191,-0.011,-0.5015,0.1507,-0.0438,-0.4793,0.182,-0.1629,-0.47,0.235,-0.2634,0.4981,0.3267,-0.001,0.4733,0.2524,0.1707,0.4685,-0.002,0.2185,0.4718,-0.2559,0.1742,0.5063,-0.3741,0.0202,0.5105,-0.3938,-0.1519,0.5097,0.3977,-0.1248}, 132);
SoIndexedFaceSet488->setCoord(*SoCoordinate489);

SoTextureCoordinate* SoTextureCoordinate490 = new SoTextureCoordinate();
SoTextureCoordinate490->setPoint(new float[]{0.1706,0.0686,0.1709,0.0678,0.1824,0.0523,0.183,0.0511,0.1834,0.0508,0.1716,0.0676,0.1882,0.0556,0.1745,0.076,0.1748,0.0736,0.1886,0.0572,0.2327,0.0796,0.2439,0.0803,0.2076,0.0485,0.2162,0.0476,0.2201,0.0466,0.2302,0.0796,0.2219,0.0517,0.2301,0.0734,0.2486,0.0743,0.2027,0.0537,0.2224,0.0526,0.2293,0.0736,0.1746,0.075,0.1885,0.0566,0.1801,0.0847,0.1811,0.0824,0.1952,0.0651,0.195,0.0629,0.2293,0.0837,0.1769,0.0796,0.2191,0.0403,0.1766,0.0777,0.2037,0.047,0.2486,0.0741,0.2026,0.0539,0.2444,0.0847,0.1915,0.0602,0.2041,0.0405,0.1915,0.0578,0.2464,0.0799,0.1801,0.0847,0.1952,0.0651,0.195,0.0629,0.1811,0.0824,0.1952,0.0651,0.1915,0.0602,0.2464,0.0799,0.2486,0.0741,0.2037,0.047,0.2041,0.0405,0.195,0.0629,0.1766,0.0777,0.2201,0.0466,0.2224,0.0526,0.2302,0.0796,0.2293,0.0837,0.1801,0.0847,0.1811,0.0824}, 116);
SoIndexedFaceSet488->setTexCoord(*SoTextureCoordinate490);

SoShape484->setGeometry(*SoIndexedFaceSet488);

SoTransform483->addChild(*SoShape484);

SoHAnimSegment482->addChild(*SoTransform483);

SoHAnimJoint481->addChildren(*SoHAnimSegment482);

SoHAnimJoint* SoHAnimJoint491 = new SoHAnimJoint();
SoHAnimJoint491->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint491->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimJoint491->setCenter(new float[]{-4.378,0.5299,4.91});
SoHAnimJoint491->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint491->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment492 = new SoHAnimSegment();
SoHAnimSegment492->X3DNode::setName(QString("r_tarsal_middle_phalanx_3"));
SoHAnimSegment492->setDEF(QString("hanim_r_tarsal_middle_phalanx_3"));
SoTransform* SoTransform493 = new SoTransform();
SoTransform493->setTranslation(new float[]{-4.378,0.5299,4.91});
SoShape* SoShape494 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance495 = new SoVRMLAppearance();
SoMaterial* SoMaterial496 = new SoMaterial();
SoMaterial496->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance495->addChild(*SoMaterial496);

SoImageTexture* SoImageTexture497 = new SoImageTexture();
SoImageTexture497->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance495->addChild(*SoImageTexture497);

SoShape494->addChild(*SoVRMLAppearance495);

SoIndexedFaceSet* SoIndexedFaceSet498 = new SoIndexedFaceSet();
SoIndexedFaceSet498->setCoordIndex(new int32_t[]{1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1}, 176);
SoIndexedFaceSet498->setCreaseAngle(3.14159);
SoIndexedFaceSet498->setTexCoordIndex(new int32_t[]{0,9,8,-1,8,1,0,-1,2,10,9,-1,9,0,2,-1,11,10,2,-1,2,3,11,-1,4,13,11,-1,11,3,4,-1,14,12,7,-1,7,6,14,-1,8,15,5,-1,5,1,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,13,20,-1,20,19,11,-1,12,14,21,-1,21,20,12,-1,15,8,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1}, 176);
SoCoordinate* SoCoordinate499 = new SoCoordinate();
SoCoordinate499->setPoint(new float[]{0.2639,-0.0654,0.4775,0.2294,-0.4369,0.4537,-0.3569,-0.4369,0.3314,-0.4011,-0.0654,0.3295,-0.356,0.2278,0.3349,0.2178,0.2506,0.4454,0.266,0.0061,0.0655,0.2149,-0.404,0.0352,-0.1882,-0.3977,-0.0536,-0.2542,0.0061,-0.0624,-0.2113,0.424,-0.0602,0.22,0.4369,0.0407,0.2241,0.0073,-0.12,0.1856,-0.309,-0.1472,-0.0609,-0.3052,-0.1988,-0.1126,0.0092,-0.2043,-0.0789,0.3331,-0.2044,0.1892,0.3412,-0.1423,0.0664,-0.2871,0.5717,0.0852,-0.0696,0.5924,0.0631,0.0962,0.5657,-0.261,0.0833,0.5084,-0.2846,-0.0679,0.5073,-0.2579,-0.2871,0.5052}, 72);
SoIndexedFaceSet498->setCoord(*SoCoordinate499);

SoTextureCoordinate* SoTextureCoordinate500 = new SoTextureCoordinate();
SoTextureCoordinate500->setPoint(new float[]{0.1653,0.0654,0.1636,0.063,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1651,0.0639,0.1293,0.0261,0.0949,0.0775,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1291,0.0918,0.1834,0.0508,0.1554,0.0532,0.1716,0.0676,0.1709,0.0678,0.1706,0.0686,0.1824,0.0523,0.183,0.0511,0.1834,0.0508,0.1554,0.0532,0.1653,0.0654,0.1636,0.063,0.1651,0.0639,0.0949,0.0775,0.1792,0.0409,0.1795,0.0453}, 56);
SoIndexedFaceSet498->setTexCoord(*SoTextureCoordinate500);

SoShape494->setGeometry(*SoIndexedFaceSet498);

SoTransform493->addChild(*SoShape494);

SoHAnimSegment492->addChild(*SoTransform493);

SoHAnimJoint491->addChildren(*SoHAnimSegment492);

SoHAnimJoint* SoHAnimJoint501 = new SoHAnimJoint();
SoHAnimJoint501->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint501->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimJoint501->setCenter(new float[]{-4.446,0.4367,5.32});
SoHAnimJoint501->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint501->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment502 = new SoHAnimSegment();
SoHAnimSegment502->X3DNode::setName(QString("r_tarsal_distal_phalanx_3"));
SoHAnimSegment502->setDEF(QString("hanim_r_tarsal_distal_phalanx_3"));
SoTransform* SoTransform503 = new SoTransform();
SoTransform503->setTranslation(new float[]{-4.446,0.4367,5.32});
SoShape* SoShape504 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance505 = new SoVRMLAppearance();
SoMaterial* SoMaterial506 = new SoMaterial();
SoMaterial506->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance505->addChild(*SoMaterial506);

SoImageTexture* SoImageTexture507 = new SoImageTexture();
SoImageTexture507->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance505->addChild(*SoImageTexture507);

SoShape504->addChild(*SoVRMLAppearance505);

SoIndexedFaceSet* SoIndexedFaceSet508 = new SoIndexedFaceSet();
SoIndexedFaceSet508->setCoordIndex(new int32_t[]{1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,1,7,6,-1,6,0,1,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,6,11,5,-1,5,0,6,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1}, 128);
SoIndexedFaceSet508->setCreaseAngle(3.14159);
SoIndexedFaceSet508->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,9,8,-1,8,3,0,-1,1,10,9,-1,9,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,8,15,5,-1,5,3,8,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,8,16,-1,16,21,15,-1}, 128);
SoCoordinate* SoCoordinate509 = new SoCoordinate();
SoCoordinate509->setPoint(new float[]{0.1552,-0.028,0.3818,0.166,-0.2652,0.2973,-0.2126,-0.2652,0.2123,-0.2749,-0.028,0.2919,-0.2441,0.2185,0.2385,0.1507,0.2313,0.332,0.3325,0.0277,0.0683,0.298,-0.3438,0.0445,-0.2883,-0.3438,-0.0778,-0.3325,0.0277,-0.0797,-0.2874,0.3209,-0.0743,0.2864,0.3438,0.0362,0.2608,0.0241,-0.1382,0.2381,-0.2318,-0.1597,-0.1517,-0.2318,-0.2401,-0.1828,0.0254,-0.239,-0.1538,0.2121,-0.2369,0.2327,0.2275,-0.1663}, 54);
SoIndexedFaceSet508->setCoord(*SoCoordinate509);

SoTextureCoordinate* SoTextureCoordinate510 = new SoTextureCoordinate();
SoTextureCoordinate510->setPoint(new float[]{0.1643,0.0579,0.1747,0.0423,0.174,0.0396,0.1638,0.0538,0.1756,0.0403,0.1632,0.0573,0.0915,0.0082,0.066,0.0493,0.1636,0.063,0.1653,0.0654,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.0949,0.0775,0.1293,0.0261,0.1651,0.0639,0.1636,0.063,0.1653,0.0654,0.1795,0.0453,0.1792,0.0409,0.1786,0.0451,0.1293,0.0261}, 44);
SoIndexedFaceSet508->setTexCoord(*SoTextureCoordinate510);

SoShape504->setGeometry(*SoIndexedFaceSet508);

SoTransform503->addChild(*SoShape504);

SoHAnimSegment502->addChild(*SoTransform503);

SoHAnimJoint501->addChildren(*SoHAnimSegment502);

SoHAnimJoint491->addChildren(*SoHAnimJoint501);

SoHAnimJoint481->addChildren(*SoHAnimJoint491);

SoHAnimJoint471->addChildren(*SoHAnimJoint481);

SoHAnimJoint461->addChildren(*SoHAnimJoint471);

SoHAnimJoint361->addChildren(*SoHAnimJoint461);

SoHAnimJoint351->addChildren(*SoHAnimJoint361);

SoHAnimJoint* SoHAnimJoint511 = new SoHAnimJoint();
SoHAnimJoint511->X3DNode::setName(QString("r_calcaneocuboid"));
SoHAnimJoint511->setDEF(QString("hanim_r_calcaneocuboid"));
SoHAnimJoint511->setCenter(new float[]{-3.943,2.577,-1.154});
SoHAnimJoint511->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint511->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment512 = new SoHAnimSegment();
SoHAnimSegment512->X3DNode::setName(QString("r_calcaneus"));
SoHAnimSegment512->setDEF(QString("hanim_r_calcaneus"));
SoTransform* SoTransform513 = new SoTransform();
SoTransform513->setTranslation(new float[]{-3.943,2.577,-1.154});
SoShape* SoShape514 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance515 = new SoVRMLAppearance();
SoMaterial* SoMaterial516 = new SoMaterial();
SoMaterial516->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance515->addChild(*SoMaterial516);

SoImageTexture* SoImageTexture517 = new SoImageTexture();
SoImageTexture517->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance515->addChild(*SoImageTexture517);

SoShape514->addChild(*SoVRMLAppearance515);

SoIndexedFaceSet* SoIndexedFaceSet518 = new SoIndexedFaceSet();
SoIndexedFaceSet518->setCoordIndex(new int32_t[]{1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1}, 464);
SoIndexedFaceSet518->setCreaseAngle(3.14159);
SoIndexedFaceSet518->setTexCoordIndex(new int32_t[]{1,0,3,-1,3,2,1,-1,4,7,6,-1,6,5,4,-1,4,18,19,-1,19,7,4,-1,0,8,9,-1,9,3,0,-1,10,2,3,-1,3,11,10,-1,12,6,7,-1,7,13,12,-1,13,7,19,-1,19,20,13,-1,25,26,14,-1,14,9,25,-1,3,9,14,-1,14,11,3,-1,15,10,11,-1,11,16,15,-1,13,20,21,-1,21,17,13,-1,11,14,16,-1,4,5,23,-1,23,18,4,-1,14,38,37,-1,34,15,16,-1,16,35,34,-1,17,21,39,-1,39,36,17,-1,17,12,13,-1,35,16,14,-1,14,37,35,-1,5,6,30,-1,30,27,5,-1,18,23,22,-1,22,1,18,-1,2,19,18,-1,18,1,2,-1,10,20,19,-1,19,2,10,-1,15,21,20,-1,20,10,15,-1,34,39,21,-1,21,15,34,-1,22,8,0,-1,0,1,22,-1,25,9,8,-1,8,24,25,-1,14,26,33,-1,33,38,14,-1,23,5,27,-1,27,29,23,-1,22,23,29,-1,29,28,22,-1,8,22,28,-1,28,24,8,-1,30,6,12,-1,12,31,30,-1,32,31,12,-1,12,40,32,-1,40,12,17,-1,17,36,40,-1,47,48,49,-1,49,41,42,-1,42,43,44,-1,49,42,44,-1,47,49,44,-1,47,44,45,-1,46,47,45,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,50,51,55,-1,55,56,59,-1,59,50,55,-1,56,57,58,-1,58,59,56,-1,34,35,42,-1,42,41,34,-1,35,37,43,-1,43,42,35,-1,37,38,44,-1,44,43,37,-1,38,33,45,-1,45,44,38,-1,33,32,46,-1,46,45,33,-1,32,40,47,-1,47,46,32,-1,40,36,48,-1,48,47,40,-1,36,39,49,-1,49,48,36,-1,39,34,41,-1,41,49,39,-1,25,24,51,-1,51,50,25,-1,24,28,52,-1,52,51,24,-1,28,29,53,-1,53,52,28,-1,29,27,54,-1,54,53,29,-1,27,30,55,-1,55,54,27,-1,30,31,56,-1,56,55,30,-1,31,32,57,-1,57,56,31,-1,32,33,58,-1,58,57,32,-1,33,26,59,-1,59,58,33,-1,26,25,50,-1,50,59,26,-1}, 464);
SoCoordinate* SoCoordinate519 = new SoCoordinate();
SoCoordinate519->setPoint(new float[]{-0.9985,-2.493,-0.8739,-0.3444,-2.493,-1.345,-0.3385,-2.074,-1.537,-1.107,-2.074,-1.019,0.8502,-2.493,-0.9093,1.215,-2.492,0.3484,1.284,-2.074,0.3263,0.9715,-2.074,-1.057,-1.246,-2.492,0.3485,-1.327,-2.074,0.3263,-0.3384,-1.169,-1.658,-1.174,-1.133,-1.133,1.418,-0.9912,0.3376,1.047,-1.181,-1.171,-1.416,-1.1,0.3376,-0.2948,-0.4644,-1.456,-1.098,-0.4755,-0.9255,1.039,-0.4898,-0.9709,0.2136,-2.493,-1.352,0.2242,-2.074,-1.543,0.2315,-1.181,-1.664,0.2693,-0.4684,-1.462,-0.3014,-2.492,0.3485,0.4242,-2.492,0.3485,-1.298,-2.423,1.123,-1.418,-2.067,1.103,-1.397,-1.134,1.091,1.106,-2.413,1.234,-0.4108,-2.448,1.222,0.327,-2.447,1.285,1.248,-2.001,1.208,1.376,-0.9503,1.205,1.037,0.3568,1.239,-0.8834,0.2818,1.266,-0.2501,0.1842,-1.201,-1.022,0.3141,-0.6813,1.031,0.3141,-0.7249,-1.164,0.0132,0.0265,-1.146,0.0057,0.5457,0.3051,0.1866,-1.206,1.343,0.0781,0.3033,-0.1992,0.7353,-0.8819,-0.8414,0.867,-0.4508,-0.9581,0.5635,0.1424,-0.9423,0.5539,0.597,-0.7475,0.8221,1.135,0.8525,0.8859,1.112,1.089,0.6115,0.3971,0.8201,0.8534,-0.4873,0.2191,0.7329,-0.8852,-1.268,-1.998,1.433,-1.191,-2.206,1.429,-0.4157,-2.224,1.523,0.3142,-2.223,1.586,0.982,-2.198,1.531,1.083,-1.928,1.525,1.205,-1.01,1.526,0.9056,0.0435,1.552,-0.7799,-0.0171,1.583,-1.248,-1.195,1.42}, 180);
SoIndexedFaceSet518->setCoord(*SoCoordinate519);

SoTextureCoordinate* SoTextureCoordinate520 = new SoTextureCoordinate();
SoTextureCoordinate520->setPoint(new float[]{0.2845,0.0964,0.2768,0.1211,0.2792,0.1228,0.2886,0.0939,0.2493,0.1586,0.2252,0.161,0.2241,0.1634,0.2489,0.1638,0.2727,0.0786,0.2746,0.076,0.2809,0.1238,0.2914,0.0926,0.2206,0.1691,0.249,0.1672,0.2762,0.0729,0.2769,0.1234,0.2869,0.0933,0.2461,0.1652,0.2661,0.1399,0.2685,0.1417,0.27,0.1429,0.2661,0.1424,0.24,0.098,0.2266,0.1229,0.2628,0.0703,0.2665,0.0671,0.2664,0.0668,0.2178,0.1526,0.2363,0.0929,0.2213,0.1179,0.2171,0.1588,0.2129,0.1643,0.2165,0.148,0.2533,0.0835,0.273,0.1232,0.2824,0.0941,0.2433,0.1632,0.2759,0.0832,0.2685,0.0797,0.2623,0.1418,0.2231,0.166,0.273,0.1232,0.2824,0.0941,0.2759,0.0832,0.2685,0.0797,0.2533,0.0835,0.2165,0.148,0.2231,0.166,0.2433,0.1632,0.2623,0.1418,0.2665,0.0671,0.2628,0.0703,0.2363,0.0929,0.2213,0.1179,0.2178,0.1526,0.2171,0.1588,0.2129,0.1643,0.2165,0.148,0.2533,0.0835,0.2664,0.0668}, 120);
SoIndexedFaceSet518->setTexCoord(*SoTextureCoordinate520);

SoShape514->setGeometry(*SoIndexedFaceSet518);

SoTransform513->addChild(*SoShape514);

SoHAnimSegment512->addChild(*SoTransform513);

SoHAnimJoint511->addChildren(*SoHAnimSegment512);

SoHAnimJoint* SoHAnimJoint521 = new SoHAnimJoint();
SoHAnimJoint521->X3DNode::setName(QString("r_transversetarsal"));
SoHAnimJoint521->setDEF(QString("hanim_r_transversetarsal"));
SoHAnimJoint521->setCenter(new float[]{-4.901,1.568,0.09285});
SoHAnimJoint521->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint521->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment522 = new SoHAnimSegment();
SoHAnimSegment522->X3DNode::setName(QString("r_cuboid"));
SoHAnimSegment522->setDEF(QString("hanim_r_cuboid"));
SoTransform* SoTransform523 = new SoTransform();
SoTransform523->setTranslation(new float[]{-4.901,1.568,0.09285});
SoShape* SoShape524 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance525 = new SoVRMLAppearance();
SoMaterial* SoMaterial526 = new SoMaterial();
SoMaterial526->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance525->addChild(*SoMaterial526);

SoImageTexture* SoImageTexture527 = new SoImageTexture();
SoImageTexture527->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance525->addChild(*SoImageTexture527);

SoShape524->addChild(*SoVRMLAppearance525);

SoIndexedFaceSet* SoIndexedFaceSet528 = new SoIndexedFaceSet();
SoIndexedFaceSet528->setCoordIndex(new int32_t[]{1,17,16,-1,16,0,1,-1,3,8,5,-1,5,0,3,-1,6,7,2,-1,2,1,6,-1,2,4,10,-1,18,2,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,2,-1,2,7,9,-1,8,3,14,-1,14,15,8,-1,3,0,16,-1,16,19,3,-1,14,3,19,-1,1,2,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1}, 328);
SoIndexedFaceSet528->setCreaseAngle(3.14159);
SoIndexedFaceSet528->setTexCoordIndex(new int32_t[]{1,17,16,-1,16,0,1,-1,2,8,5,-1,5,0,2,-1,6,7,3,-1,3,1,6,-1,3,4,10,-1,18,3,10,-1,4,9,13,-1,13,12,4,-1,11,10,4,-1,4,12,11,-1,6,1,0,-1,0,5,6,-1,9,4,3,-1,3,7,9,-1,8,2,14,-1,14,15,8,-1,2,0,16,-1,16,19,2,-1,14,2,19,-1,1,3,18,-1,18,17,1,-1,31,32,33,-1,33,26,27,-1,31,33,27,-1,30,31,27,-1,21,24,25,-1,25,20,21,-1,40,41,42,-1,42,34,35,-1,42,35,36,-1,40,42,36,-1,39,40,36,-1,22,23,24,-1,24,21,22,-1,11,12,21,-1,21,20,11,-1,12,13,22,-1,22,21,12,-1,39,36,37,-1,37,38,39,-1,15,14,24,-1,24,23,15,-1,14,19,25,-1,25,24,14,-1,30,27,28,-1,28,29,30,-1,10,11,27,-1,27,26,10,-1,11,20,28,-1,28,27,11,-1,20,25,29,-1,29,28,20,-1,25,19,30,-1,30,29,25,-1,19,16,31,-1,31,30,19,-1,16,17,32,-1,32,31,16,-1,17,18,33,-1,33,32,17,-1,18,10,26,-1,26,33,18,-1,5,8,35,-1,35,34,5,-1,8,15,36,-1,36,35,8,-1,15,23,37,-1,37,36,15,-1,23,22,38,-1,38,37,23,-1,22,13,39,-1,39,38,22,-1,13,9,40,-1,40,39,13,-1,9,7,41,-1,41,40,9,-1,7,6,42,-1,42,41,7,-1,6,5,34,-1,34,42,6,-1}, 328);
SoCoordinate* SoCoordinate529 = new SoCoordinate();
SoCoordinate529->setPoint(new float[]{-0.3927,-1.345,0.6502,-0.5513,-1.052,0.467,-0.4205,-0.159,0.5973,0.212,-1.391,0.7994,0.0207,0.5191,0.7402,-0.62,-1.389,1.36,-0.7814,-1.064,1.28,-0.629,-0.2544,1.366,-0.0531,-1.438,1.517,-0.0856,0.2092,1.533,0.0741,1.291,0.0195,0.563,1.439,0.3053,0.5395,0.8768,0.8021,0.4707,0.5296,1.67,0.5704,-1.398,0.8063,0.544,-1.423,1.662,-0.3405,-1.414,-0.124,-0.4606,-1.058,-0.1434,-0.4397,-0.1251,-0.1558,0.5467,-1.439,-0.0243,0.9941,0.9843,0.4637,0.9743,0.7175,0.6996,0.9157,0.4028,1.487,0.9807,-1.215,1.481,0.9974,-1.195,0.8178,0.9758,-1.225,0.2106,0.3762,1.179,-0.4448,0.695,1.276,-0.2292,1.005,0.9499,-0.116,0.988,-1.072,-0.3476,0.6823,-1.225,-0.5215,-0.0476,-1.206,-0.5746,-0.1183,-0.9956,-0.5875,-0.0976,-0.1248,-0.6032,-0.555,-1.35,1.795,-0.0949,-1.389,1.923,0.4583,-1.376,2.08,0.7563,-1.099,1.955,0.702,0.2537,1.96,0.45,0.166,2.097,-0.0298,-0.1076,1.961,-0.5117,-0.5116,1.812,-0.6379,-1.177,1.735}, 129);
SoIndexedFaceSet528->setCoord(*SoCoordinate529);

SoTextureCoordinate* SoTextureCoordinate530 = new SoTextureCoordinate();
SoTextureCoordinate530->setPoint(new float[]{0.2528,0.0622,0.2585,0.0581,0.2383,0.0796,0.2566,0.0607,0.243,0.0749,0.2469,0.052,0.2512,0.047,0.2484,0.051,0.2292,0.0691,0.2342,0.0682,0.2533,0.0835,0.2407,0.0951,0.2314,0.0879,0.2226,0.0828,0.2271,0.0958,0.2197,0.0903,0.2628,0.0703,0.2665,0.0671,0.2664,0.0668,0.2363,0.0929,0.2407,0.0951,0.2314,0.0879,0.2226,0.0828,0.2197,0.0903,0.2271,0.0958,0.2363,0.0929,0.2533,0.0835,0.2407,0.0951,0.2407,0.0951,0.2363,0.0929,0.2363,0.0929,0.2628,0.0703,0.2665,0.0671,0.2664,0.0668,0.2469,0.052,0.2292,0.0691,0.2197,0.0903,0.2197,0.0903,0.2226,0.0828,0.2226,0.0828,0.2342,0.0682,0.2484,0.051,0.2512,0.047}, 86);
SoIndexedFaceSet528->setTexCoord(*SoTextureCoordinate530);

SoShape524->setGeometry(*SoIndexedFaceSet528);

SoTransform523->addChild(*SoShape524);

SoHAnimSegment522->addChild(*SoTransform523);

SoHAnimJoint521->addChildren(*SoHAnimSegment522);

SoHAnimJoint* SoHAnimJoint531 = new SoHAnimJoint();
SoHAnimJoint531->X3DNode::setName(QString("r_tarsometatarsal_4"));
SoHAnimJoint531->setDEF(QString("hanim_r_tarsometatarsal_4"));
SoHAnimJoint531->setCenter(new float[]{-4.717,1.091,1.708});
SoHAnimJoint531->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint531->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment532 = new SoHAnimSegment();
SoHAnimSegment532->X3DNode::setName(QString("r_metatarsal_4"));
SoHAnimSegment532->setDEF(QString("hanim_r_metatarsal_4"));
SoTransform* SoTransform533 = new SoTransform();
SoTransform533->setTranslation(new float[]{-4.717,1.091,1.708});
SoShape* SoShape534 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance535 = new SoVRMLAppearance();
SoMaterial* SoMaterial536 = new SoMaterial();
SoMaterial536->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance535->addChild(*SoMaterial536);

SoImageTexture* SoImageTexture537 = new SoImageTexture();
SoImageTexture537->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance535->addChild(*SoImageTexture537);

SoShape534->addChild(*SoVRMLAppearance535);

SoIndexedFaceSet* SoIndexedFaceSet538 = new SoIndexedFaceSet();
SoIndexedFaceSet538->setCoordIndex(new int32_t[]{11,13,17,-1,17,16,11,-1,10,11,16,-1,16,14,10,-1,5,1,3,-1,3,7,5,-1,0,2,6,-1,6,4,0,-1,14,15,12,-1,12,10,14,-1,7,3,0,-1,0,4,7,-1,8,1,5,-1,5,9,8,-1,40,41,36,-1,36,37,40,-1,48,49,44,-1,44,45,48,-1,27,28,31,-1,28,29,30,-1,30,31,28,-1,34,35,32,-1,32,33,34,-1,35,27,31,-1,31,32,35,-1,18,19,24,-1,26,18,24,-1,24,25,26,-1,20,21,22,-1,22,23,20,-1,19,20,23,-1,23,24,19,-1,5,7,19,-1,19,18,5,-1,7,4,20,-1,20,19,7,-1,4,6,21,-1,21,20,4,-1,40,37,38,-1,38,39,40,-1,15,14,23,-1,23,22,15,-1,14,16,24,-1,24,23,14,-1,16,17,25,-1,25,24,16,-1,44,49,50,-1,50,51,44,-1,9,5,18,-1,18,26,9,-1,3,1,28,-1,28,27,3,-1,1,8,29,-1,29,28,1,-1,48,45,46,-1,46,47,48,-1,13,11,31,-1,31,30,13,-1,11,10,32,-1,32,31,11,-1,10,12,33,-1,33,32,10,-1,36,41,42,-1,42,43,36,-1,2,0,35,-1,35,34,2,-1,0,3,27,-1,27,35,0,-1,12,15,37,-1,37,36,12,-1,15,22,38,-1,38,37,15,-1,22,21,39,-1,39,38,22,-1,21,6,40,-1,40,39,21,-1,6,2,41,-1,41,40,6,-1,2,34,42,-1,42,41,2,-1,34,33,43,-1,43,42,34,-1,33,12,36,-1,36,43,33,-1,17,13,45,-1,45,44,17,-1,13,30,46,-1,46,45,13,-1,30,29,47,-1,47,46,30,-1,29,8,48,-1,48,47,29,-1,8,9,49,-1,49,48,8,-1,9,26,50,-1,50,49,9,-1,26,25,51,-1,51,50,26,-1,25,17,44,-1,44,51,25,-1}, 400);
SoIndexedFaceSet538->setCreaseAngle(3.14159);
SoIndexedFaceSet538->setTexCoordIndex(new int32_t[]{5,13,17,-1,17,16,5,-1,2,5,16,-1,16,7,2,-1,9,1,6,-1,6,12,9,-1,0,4,11,-1,11,8,0,-1,7,10,3,-1,3,2,7,-1,12,6,0,-1,0,8,12,-1,14,1,9,-1,9,15,14,-1,42,43,38,-1,38,39,42,-1,50,51,46,-1,46,47,50,-1,29,30,18,-1,30,31,32,-1,32,33,30,-1,36,37,34,-1,34,35,36,-1,37,29,33,-1,33,34,37,-1,20,21,19,-1,28,20,26,-1,26,27,28,-1,22,23,24,-1,24,25,22,-1,21,22,25,-1,25,26,21,-1,9,12,21,-1,21,20,9,-1,12,8,22,-1,22,21,12,-1,8,11,23,-1,23,22,8,-1,42,39,40,-1,40,41,42,-1,10,7,25,-1,25,24,10,-1,7,16,26,-1,26,25,7,-1,16,17,27,-1,27,26,16,-1,46,51,52,-1,52,53,46,-1,15,9,20,-1,20,28,15,-1,6,1,30,-1,30,29,6,-1,1,14,31,-1,31,30,1,-1,50,47,48,-1,48,49,50,-1,13,5,33,-1,33,32,13,-1,5,2,34,-1,34,33,5,-1,2,3,35,-1,35,34,2,-1,38,43,44,-1,44,45,38,-1,4,0,37,-1,37,36,4,-1,0,6,29,-1,29,37,0,-1,3,10,39,-1,39,38,3,-1,10,24,40,-1,40,39,10,-1,24,23,41,-1,41,40,24,-1,23,11,42,-1,42,41,23,-1,11,4,43,-1,43,42,11,-1,4,36,44,-1,44,43,4,-1,36,35,45,-1,45,44,36,-1,35,3,38,-1,38,45,35,-1,17,13,47,-1,47,46,17,-1,13,32,48,-1,48,47,13,-1,32,31,49,-1,49,48,32,-1,31,14,50,-1,50,49,31,-1,14,15,51,-1,51,50,14,-1,15,28,52,-1,52,51,15,-1,28,27,53,-1,53,52,28,-1,27,17,46,-1,46,53,27,-1}, 400);
SoCoordinate* SoCoordinate539 = new SoCoordinate();
SoCoordinate539->setPoint(new float[]{-0.43,0.2032,1.608,-0.3411,0.4771,0.4203,-0.411,0.0139,2.079,-0.4023,0.3367,1.016,0.2305,0.2838,1.729,0.2723,0.7695,0.5671,0.1775,0.078,2.232,0.2625,0.5267,1.148,-0.2694,0.6861,-0.0829,0.2869,1.007,0.0543,-0.3368,-1.007,1.41,-0.2972,-0.9844,0.3484,-0.4433,-0.8849,2.036,-0.2369,-0.9615,-0.0987,0.2929,-1.007,1.64,0.1734,-0.9258,2.19,0.3108,-0.9625,0.4987,0.3602,-0.9465,0.0466,0.5224,0.6131,0.5138,0.5113,0.369,1.098,0.4835,0.1258,1.68,0.4517,-0.0328,2.07,0.4416,-0.7633,2.038,0.5332,-0.8205,1.648,0.5476,-0.7772,0.5234,0.5844,-0.7671,0.2439,0.5243,0.735,0.2495,-0.6251,0.1523,0.8741,-0.5638,0.2829,0.284,-0.5136,0.4134,-0.0498,-0.4878,-0.815,-0.0625,-0.5332,-0.8303,0.2548,-0.5714,-0.8502,1.274,-0.6659,-0.7584,1.777,-0.6293,-0.1071,1.81,-0.6528,0.0321,1.441,-0.4534,-0.7489,2.227,0.1154,-0.7865,2.387,0.2893,-0.6899,2.374,0.2972,-0.1417,2.398,0.1301,-0.0829,2.414,-0.4167,-0.1408,2.263,-0.5514,-0.2089,2.135,-0.5785,-0.6808,2.111,0.4067,-0.7963,-0.3118,-0.1321,-0.8098,-0.4434,-0.2751,-0.7197,-0.4419,-0.2976,0.3522,-0.4308,-0.1123,0.5657,-0.4267,0.366,0.8403,-0.3164,0.4968,0.6732,-0.1797,0.5511,-0.6808,-0.1849}, 156);
SoIndexedFaceSet538->setCoord(*SoCoordinate539);

SoTextureCoordinate* SoTextureCoordinate540 = new SoTextureCoordinate();
SoTextureCoordinate540->setPoint(new float[]{0.2117,0.0481,0.2254,0.0615,0.2142,0.0508,0.2102,0.0461,0.2083,0.0443,0.2202,0.0585,0.2186,0.0548,0.1989,0.0701,0.1984,0.068,0.2138,0.0778,0.1952,0.0651,0.195,0.0629,0.2061,0.0729,0.2292,0.0691,0.2342,0.0682,0.2226,0.0828,0.2129,0.0844,0.2197,0.0903,0.2254,0.0615,0.2061,0.0729,0.2138,0.0778,0.2061,0.0729,0.1984,0.068,0.195,0.0629,0.195,0.0629,0.1984,0.068,0.2061,0.0729,0.2226,0.0828,0.2226,0.0828,0.2186,0.0548,0.2254,0.0615,0.2342,0.0682,0.2342,0.0682,0.2254,0.0615,0.2117,0.0481,0.2083,0.0443,0.2083,0.0443,0.2117,0.0481,0.2083,0.0443,0.195,0.0629,0.195,0.0629,0.195,0.0629,0.195,0.0629,0.2083,0.0443,0.2083,0.0443,0.2083,0.0443,0.2226,0.0828,0.2342,0.0682,0.2342,0.0682,0.2342,0.0682,0.2342,0.0682,0.2226,0.0828,0.2226,0.0828,0.2226,0.0828}, 108);
SoIndexedFaceSet538->setTexCoord(*SoTextureCoordinate540);

SoShape534->setGeometry(*SoIndexedFaceSet538);

SoTransform533->addChild(*SoShape534);

SoHAnimSegment532->addChild(*SoTransform533);

SoHAnimJoint531->addChildren(*SoHAnimSegment532);

SoHAnimJoint* SoHAnimJoint541 = new SoHAnimJoint();
SoHAnimJoint541->X3DNode::setName(QString("r_metatarsophalangeal_4"));
SoHAnimJoint541->setDEF(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimJoint541->setCenter(new float[]{-4.867,0.6379,4.052});
SoHAnimJoint541->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint541->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment542 = new SoHAnimSegment();
SoHAnimSegment542->X3DNode::setName(QString("r_tarsal_proximal_phalanx_4"));
SoHAnimSegment542->setDEF(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoTransform* SoTransform543 = new SoTransform();
SoTransform543->setTranslation(new float[]{-4.867,0.6379,4.052});
SoShape* SoShape544 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance545 = new SoVRMLAppearance();
SoMaterial* SoMaterial546 = new SoMaterial();
SoMaterial546->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance545->addChild(*SoMaterial546);

SoImageTexture* SoImageTexture547 = new SoImageTexture();
SoImageTexture547->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance545->addChild(*SoImageTexture547);

SoShape544->addChild(*SoVRMLAppearance545);

SoIndexedFaceSet* SoIndexedFaceSet548 = new SoIndexedFaceSet();
SoIndexedFaceSet548->setCoordIndex(new int32_t[]{13,2,1,-1,1,10,13,-1,10,1,3,-1,3,8,10,-1,3,4,0,-1,0,8,3,-1,0,4,5,-1,5,9,0,-1,7,9,5,-1,5,6,7,-1,6,2,13,-1,13,7,6,-1,22,17,18,-1,18,14,22,-1,20,19,21,-1,21,15,20,-1,9,7,15,-1,15,21,9,-1,10,14,16,-1,8,22,14,-1,14,10,8,-1,21,23,9,-1,11,7,13,-1,13,12,11,-1,0,25,24,-1,24,8,0,-1,16,12,13,-1,13,10,16,-1,23,25,0,-1,0,9,23,-1,11,15,7,-1,24,22,8,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,37,38,39,-1,39,40,37,-1,28,29,26,-1,26,27,28,-1,35,36,30,-1,30,31,35,-1,40,41,42,-1,42,43,37,-1,40,42,37,-1,18,17,27,-1,27,26,18,-1,17,19,28,-1,28,27,17,-1,19,20,29,-1,29,28,19,-1,20,18,26,-1,26,29,20,-1,17,22,31,-1,31,30,17,-1,22,24,32,-1,32,31,22,-1,24,25,33,-1,33,32,24,-1,25,23,34,-1,34,33,25,-1,23,21,35,-1,35,34,23,-1,21,19,36,-1,36,35,21,-1,19,17,30,-1,30,36,19,-1,14,18,38,-1,38,37,14,-1,18,20,39,-1,39,38,18,-1,20,15,40,-1,40,39,20,-1,15,11,41,-1,41,40,15,-1,11,12,42,-1,42,41,11,-1,12,16,43,-1,43,42,12,-1,16,14,37,-1,37,43,16,-1}, 336);
SoIndexedFaceSet548->setCreaseAngle(3.14159);
SoIndexedFaceSet548->setTexCoordIndex(new int32_t[]{27,2,1,-1,1,10,27,-1,10,1,3,-1,3,11,10,-1,3,4,0,-1,0,11,3,-1,0,4,5,-1,5,12,0,-1,9,12,5,-1,5,6,9,-1,6,2,27,-1,27,9,6,-1,35,28,29,-1,29,7,35,-1,31,30,33,-1,33,8,31,-1,15,14,16,-1,16,32,15,-1,17,13,18,-1,19,34,13,-1,13,17,19,-1,32,36,15,-1,20,14,22,-1,22,21,20,-1,23,38,37,-1,37,19,23,-1,18,24,25,-1,25,17,18,-1,36,39,26,-1,26,15,36,-1,20,16,14,-1,37,34,19,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,6,5,4,-1,4,3,1,-1,6,4,1,-1,2,6,1,-1,51,52,53,-1,53,54,51,-1,42,43,40,-1,40,41,42,-1,49,50,44,-1,44,45,49,-1,54,55,56,-1,56,57,51,-1,54,56,51,-1,29,28,41,-1,41,40,29,-1,28,30,42,-1,42,41,28,-1,30,31,43,-1,43,42,30,-1,31,29,40,-1,40,43,31,-1,28,35,45,-1,45,44,28,-1,34,37,46,-1,46,45,34,-1,37,38,47,-1,47,46,37,-1,39,36,48,-1,48,47,39,-1,36,32,49,-1,49,48,36,-1,33,30,50,-1,50,49,33,-1,30,28,44,-1,44,50,30,-1,7,29,52,-1,52,51,7,-1,29,31,53,-1,53,52,29,-1,31,8,54,-1,54,53,31,-1,16,20,55,-1,55,54,16,-1,20,21,56,-1,56,55,20,-1,24,18,57,-1,57,56,24,-1,18,13,51,-1,51,57,18,-1}, 336);
SoCoordinate* SoCoordinate549 = new SoCoordinate();
SoCoordinate549->setPoint(new float[]{-0.3278,-0.057,0.1883,0.0525,-0.5059,0.7169,0.1097,-0.1019,0.7273,-0.3613,-0.5312,0.6151,-0.4078,-0.1019,0.5996,-0.3711,0.3174,0.6207,0.072,0.3613,0.7233,0.167,0.3917,0.3145,-0.2644,-0.4262,0.1511,-0.2709,0.3574,0.152,0.1661,-0.4211,0.2992,0.2641,0.3621,0.329,0.2567,0.0215,0.3948,0.1987,-0.0648,0.3873,0.2979,-0.4388,0.1141,0.3087,0.4248,0.0901,0.2687,-0.4025,0.3308,-0.2935,-0.4317,-0.3075,0.3232,-0.4726,-0.1534,-0.2611,0.4671,-0.2648,0.3273,0.5312,-0.1116,-0.3082,0.3589,-0.1241,-0.3082,-0.3803,-0.1229,-0.3514,0.3217,0.1064,-0.3527,-0.414,0.1117,-0.3662,-0.0844,0.1549,0.2703,-0.3363,-0.4209,-0.1122,-0.3109,-0.516,-0.0877,0.3691,-0.484,0.2733,0.4085,-0.3896,-0.5115,-0.288,-0.3108,-0.5065,-0.2701,-0.2438,-0.5667,-0.2929,-0.0861,-0.5748,-0.0815,-0.058,-0.5609,0.2313,-0.0969,-0.5027,0.2605,-0.2789,-0.4848,0.2657,-0.2832,0.5105,-0.3286,0.0612,0.5235,-0.3455,-0.0729,0.526,0.3481,-0.044,0.5229,0.3183,0.0128,0.4893,0.27,0.1966,0.4847,0.0183,0.2454,0.4943,-0.306,0.1964}, 132);
SoIndexedFaceSet548->setCoord(*SoCoordinate549);

SoTextureCoordinate* SoTextureCoordinate550 = new SoTextureCoordinate();
SoTextureCoordinate550->setPoint(new float[]{0.2033,0.0375,0.1866,0.0487,0.186,0.0472,0.1969,0.0343,0.1963,0.0328,0.1973,0.0341,0.1873,0.048,0.1915,0.0602,0.1915,0.0578,0.1897,0.0535,0.1888,0.0569,0.2031,0.037,0.2012,0.0381,0.2444,0.0847,0.2208,0.06,0.2111,0.0557,0.2254,0.054,0.2483,0.0809,0.2464,0.0799,0.2587,0.0865,0.225,0.0604,0.2239,0.0673,0.2238,0.0671,0.267,0.0845,0.2486,0.0741,0.2486,0.074,0.2049,0.059,0.1896,0.055,0.2102,0.0461,0.1952,0.0651,0.2083,0.0443,0.195,0.0629,0.2109,0.0476,0.2048,0.0404,0.2576,0.0911,0.2063,0.0414,0.2083,0.0537,0.2612,0.0869,0.2671,0.0842,0.2047,0.0593,0.1952,0.0651,0.2102,0.0461,0.2083,0.0443,0.195,0.0629,0.2102,0.0461,0.2063,0.0414,0.2612,0.0869,0.2671,0.0842,0.2083,0.0537,0.2109,0.0476,0.2083,0.0443,0.2444,0.0847,0.1952,0.0651,0.195,0.0629,0.1915,0.0578,0.225,0.0604,0.2239,0.0673,0.2464,0.0799}, 116);
SoIndexedFaceSet548->setTexCoord(*SoTextureCoordinate550);

SoShape544->setGeometry(*SoIndexedFaceSet548);

SoTransform543->addChild(*SoShape544);

SoHAnimSegment542->addChild(*SoTransform543);

SoHAnimJoint541->addChildren(*SoHAnimSegment542);

SoHAnimJoint* SoHAnimJoint551 = new SoHAnimJoint();
SoHAnimJoint551->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint551->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimJoint551->setCenter(new float[]{-5.057,0.5442,4.725});
SoHAnimJoint551->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint551->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment552 = new SoHAnimSegment();
SoHAnimSegment552->X3DNode::setName(QString("r_tarsal_middle_phalanx_4"));
SoHAnimSegment552->setDEF(QString("hanim_r_tarsal_middle_phalanx_4"));
SoTransform* SoTransform553 = new SoTransform();
SoTransform553->setTranslation(new float[]{-5.057,0.5442,4.725});
SoShape* SoShape554 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance555 = new SoVRMLAppearance();
SoMaterial* SoMaterial556 = new SoMaterial();
SoMaterial556->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance555->addChild(*SoMaterial556);

SoImageTexture* SoImageTexture557 = new SoImageTexture();
SoImageTexture557->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance555->addChild(*SoImageTexture557);

SoShape554->addChild(*SoVRMLAppearance555);

SoIndexedFaceSet* SoIndexedFaceSet558 = new SoIndexedFaceSet();
SoIndexedFaceSet558->setCoordIndex(new int32_t[]{0,6,7,-1,7,1,0,-1,2,8,6,-1,6,0,2,-1,9,8,2,-1,2,3,9,-1,4,10,9,-1,9,3,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,1,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1}, 176);
SoIndexedFaceSet558->setCreaseAngle(3.14159);
SoIndexedFaceSet558->setTexCoordIndex(new int32_t[]{0,8,9,-1,9,1,0,-1,2,10,8,-1,8,0,2,-1,11,10,2,-1,2,3,11,-1,4,12,11,-1,11,3,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,1,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1,24,25,26,-1,26,27,22,-1,24,26,22,-1,23,24,22,-1,0,1,23,-1,23,22,0,-1,1,5,24,-1,24,23,1,-1,6,7,25,-1,25,24,6,-1,4,3,26,-1,26,25,4,-1,3,2,27,-1,27,26,3,-1,2,0,22,-1,22,27,2,-1}, 176);
SoCoordinate* SoCoordinate559 = new SoCoordinate();
SoCoordinate559->setPoint(new float[]{0.2219,-0.455,0.3874,0.2704,-0.0797,0.4109,-0.2847,-0.455,0.2749,-0.3388,-0.0797,0.2793,-0.3015,0.1733,0.2582,0.2248,0.1994,0.3929,0.243,-0.4122,0.0438,0.3003,-0.0082,0.0541,-0.1707,-0.4375,-0.0581,-0.2172,-0.0082,-0.0735,-0.1805,0.4111,-0.0525,0.2626,0.455,0.0501,0.2483,-0.0038,-0.1702,0.2041,-0.3133,-0.1768,-0.0337,-0.3279,-0.2359,-0.0682,-0.0062,-0.2491,-0.0403,0.318,-0.2307,0.2198,0.3438,-0.1726,0.0622,-0.3044,0.5037,0.0897,-0.0812,0.5234,0.0698,0.0446,0.5123,-0.208,0.0308,0.465,-0.2246,-0.0777,0.4585,-0.1903,-0.3044,0.4486}, 72);
SoIndexedFaceSet558->setCoord(*SoCoordinate559);

SoTextureCoordinate* SoTextureCoordinate560 = new SoTextureCoordinate();
SoTextureCoordinate560->setPoint(new float[]{0.1822,0.0458,0.1809,0.0434,0.1953,0.0282,0.1948,0.024,0.1933,0.0293,0.1816,0.0411,0.1287,0.0243,0.0943,0.0785,0.1866,0.0487,0.186,0.0472,0.1969,0.0343,0.1963,0.0328,0.1973,0.0341,0.1322,0.09,0.157,0.0552,0.1873,0.048,0.186,0.0472,0.1866,0.0487,0.1969,0.0343,0.1963,0.0328,0.1973,0.0341,0.157,0.0552,0.1822,0.0458,0.1809,0.0434,0.1816,0.0411,0.0943,0.0785,0.1948,0.024,0.1953,0.0282}, 56);
SoIndexedFaceSet558->setTexCoord(*SoTextureCoordinate560);

SoShape554->setGeometry(*SoIndexedFaceSet558);

SoTransform553->addChild(*SoShape554);

SoHAnimSegment552->addChild(*SoTransform553);

SoHAnimJoint551->addChildren(*SoHAnimSegment552);

SoHAnimJoint* SoHAnimJoint561 = new SoHAnimJoint();
SoHAnimJoint561->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint561->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimJoint561->setCenter(new float[]{-5.125,0.4164,5.053});
SoHAnimJoint561->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint561->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment562 = new SoHAnimSegment();
SoHAnimSegment562->X3DNode::setName(QString("r_tarsal_distal_phalanx_4"));
SoHAnimSegment562->setDEF(QString("hanim_r_tarsal_distal_phalanx_4"));
SoTransform* SoTransform563 = new SoTransform();
SoTransform563->setTranslation(new float[]{-5.125,0.4164,5.053});
SoShape* SoShape564 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance565 = new SoVRMLAppearance();
SoMaterial* SoMaterial566 = new SoMaterial();
SoMaterial566->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance565->addChild(*SoMaterial566);

SoImageTexture* SoImageTexture567 = new SoImageTexture();
SoImageTexture567->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance565->addChild(*SoImageTexture567);

SoShape564->addChild(*SoVRMLAppearance565);

SoIndexedFaceSet* SoIndexedFaceSet568 = new SoIndexedFaceSet();
SoIndexedFaceSet568->setCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,6,7,-1,7,3,0,-1,1,8,6,-1,6,0,1,-1,9,8,1,-1,1,2,9,-1,4,10,9,-1,9,2,4,-1,11,10,4,-1,4,5,11,-1,7,11,5,-1,5,3,7,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,7,6,13,-1,13,12,7,-1,6,8,14,-1,14,13,6,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,7,12,-1,12,17,11,-1}, 128);
SoIndexedFaceSet568->setCreaseAngle(3.14159);
SoIndexedFaceSet568->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,5,4,2,-1,2,3,5,-1,0,8,9,-1,9,3,0,-1,1,10,8,-1,8,0,1,-1,11,10,1,-1,1,2,11,-1,4,12,11,-1,11,2,4,-1,14,13,7,-1,7,6,14,-1,9,15,5,-1,5,3,9,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,9,8,17,-1,17,16,9,-1,8,10,18,-1,18,17,8,-1,10,11,19,-1,19,18,10,-1,11,12,20,-1,20,19,11,-1,13,14,21,-1,21,20,13,-1,15,9,16,-1,16,21,15,-1}, 128);
SoCoordinate* SoCoordinate569 = new SoCoordinate();
SoCoordinate569->setPoint(new float[]{0.1526,-0.2418,0.2583,-0.1598,-0.2418,0.1838,-0.1914,0.016,0.2684,0.1691,0.016,0.3383,-0.1611,0.1898,0.2029,0.1447,0.2049,0.275,0.2895,-0.3272,0.0593,0.338,0.0481,0.0828,-0.2171,-0.3272,-0.0532,-0.2712,0.0481,-0.0488,-0.2339,0.301,-0.0699,0.2924,0.3272,0.0648,0.2684,0.045,-0.1247,0.2357,-0.2162,-0.1453,-0.0803,-0.2162,-0.2148,-0.1196,0.0476,-0.2063,-0.0957,0.1923,-0.2297,0.2421,0.2091,-0.1375}, 54);
SoIndexedFaceSet568->setCoord(*SoCoordinate569);

SoTextureCoordinate* SoTextureCoordinate570 = new SoTextureCoordinate();
SoTextureCoordinate570->setPoint(new float[]{0.1831,0.0355,0.1904,0.0263,0.1901,0.0243,0.1819,0.0351,0.1913,0.0249,0.182,0.0368,0.088,0.0133,0.0677,0.0461,0.1822,0.0458,0.1809,0.0434,0.1953,0.0282,0.1948,0.024,0.1933,0.0293,0.0943,0.0785,0.1287,0.0243,0.1816,0.0411,0.1809,0.0434,0.1822,0.0458,0.1953,0.0282,0.1948,0.024,0.1933,0.0293,0.1287,0.0243}, 44);
SoIndexedFaceSet568->setTexCoord(*SoTextureCoordinate570);

SoShape564->setGeometry(*SoIndexedFaceSet568);

SoTransform563->addChild(*SoShape564);

SoHAnimSegment562->addChild(*SoTransform563);

SoHAnimJoint561->addChildren(*SoHAnimSegment562);

SoHAnimJoint551->addChildren(*SoHAnimJoint561);

SoHAnimJoint541->addChildren(*SoHAnimJoint551);

SoHAnimJoint531->addChildren(*SoHAnimJoint541);

SoHAnimJoint521->addChildren(*SoHAnimJoint531);

SoHAnimJoint* SoHAnimJoint571 = new SoHAnimJoint();
SoHAnimJoint571->X3DNode::setName(QString("r_tarsometatarsal_5"));
SoHAnimJoint571->setDEF(QString("hanim_r_tarsometatarsal_5"));
SoHAnimJoint571->setCenter(new float[]{-5.353,0.9309,1.544});
SoHAnimJoint571->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint571->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment572 = new SoHAnimSegment();
SoHAnimSegment572->X3DNode::setName(QString("r_metatarsal_5"));
SoHAnimSegment572->setDEF(QString("hanim_r_metatarsal_5"));
SoTransform* SoTransform573 = new SoTransform();
SoTransform573->setTranslation(new float[]{-5.353,0.9309,1.544});
SoShape* SoShape574 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance575 = new SoVRMLAppearance();
SoMaterial* SoMaterial576 = new SoMaterial();
SoMaterial576->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance575->addChild(*SoMaterial576);

SoImageTexture* SoImageTexture577 = new SoImageTexture();
SoImageTexture577->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance575->addChild(*SoImageTexture577);

SoShape574->addChild(*SoVRMLAppearance575);

SoIndexedFaceSet* SoIndexedFaceSet578 = new SoIndexedFaceSet();
SoIndexedFaceSet578->setCoordIndex(new int32_t[]{0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,23,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1}, 352);
SoIndexedFaceSet578->setCreaseAngle(3.14159);
SoIndexedFaceSet578->setTexCoordIndex(new int32_t[]{0,1,10,-1,2,12,17,-1,17,9,2,-1,6,0,11,-1,11,14,6,-1,2,1,7,-1,7,8,2,-1,3,4,19,-1,19,18,3,-1,13,22,20,-1,20,5,13,-1,5,4,10,-1,10,9,5,-1,6,7,1,-1,1,0,6,-1,8,15,12,-1,12,2,8,-1,9,17,13,-1,13,5,9,-1,0,3,16,-1,16,11,0,-1,9,10,1,-1,1,2,9,-1,3,0,10,-1,10,4,3,-1,16,3,18,-1,18,21,16,-1,19,4,5,-1,5,20,19,-1,33,34,35,-1,33,35,36,-1,32,33,36,-1,27,24,25,-1,25,26,27,-1,39,40,41,-1,45,39,41,-1,44,45,41,-1,28,29,11,-1,28,23,24,-1,24,27,28,-1,29,30,31,-1,31,23,29,-1,11,16,24,-1,24,23,11,-1,16,21,25,-1,25,24,16,-1,32,36,37,-1,37,38,32,-1,22,13,27,-1,27,26,22,-1,13,17,28,-1,28,27,13,-1,17,12,29,-1,29,28,17,-1,12,15,30,-1,30,29,12,-1,44,41,42,-1,42,43,44,-1,14,11,23,-1,23,31,14,-1,21,18,33,-1,33,32,21,-1,18,19,34,-1,34,33,18,-1,19,20,35,-1,35,34,19,-1,20,22,36,-1,36,35,20,-1,22,26,37,-1,37,36,22,-1,26,25,38,-1,38,37,26,-1,25,21,32,-1,32,38,25,-1,7,6,40,-1,40,39,7,-1,6,14,41,-1,41,40,6,-1,14,31,42,-1,42,41,14,-1,31,30,43,-1,43,42,31,-1,30,15,44,-1,44,43,30,-1,15,8,45,-1,45,44,15,-1,8,7,39,-1,39,45,8,-1}, 352);
SoCoordinate* SoCoordinate579 = new SoCoordinate();
SoCoordinate579->setPoint(new float[]{-0.3306,-0.8463,1.144,-0.5928,-0.4351,1.443,-0.453,0.1964,1.556,-0.3168,-0.7816,0.375,-0.4901,-0.4351,0.3998,-0.3189,0.3175,0.4396,-0.3613,-0.7553,2.007,-0.5238,-0.4351,1.966,-0.4304,0.0633,2.009,-0.3979,0.2569,1.048,-0.5415,-0.4351,0.9212,0.2997,-0.8463,1.575,0.2064,0.3634,1.773,0.2954,0.6373,0.5845,0.1931,-0.7247,2.2,0.2255,0.1741,2.243,0.3393,-0.8242,0.5125,0.2342,0.4968,1.18,-0.1673,-0.7522,-0.0918,-0.3287,-0.4266,-0.171,-0.1763,0.3828,-0.0859,0.3996,-0.8013,0.0654,0.3671,0.8463,0.0812,0.5368,-0.6501,1.58,0.5743,-0.6285,0.5402,0.6111,-0.6148,0.2736,0.5885,0.5776,0.2852,0.5498,0.4676,0.5498,0.4891,0.3238,1.161,0.4604,0.1935,1.738,0.4855,0.0596,2.072,0.4467,-0.5603,2.042,0.5171,-0.6818,-0.2412,0.0362,-0.6408,-0.3566,-0.0783,-0.4046,-0.4223,0.0584,0.3254,-0.3431,0.5171,0.7097,-0.2325,0.6459,0.5317,-0.0795,0.6663,-0.5485,-0.09,-0.3834,-0.4628,2.152,-0.275,-0.654,2.178,0.1853,-0.6314,2.365,0.3686,-0.526,2.255,0.3984,-0.1094,2.279,0.2347,-0.0432,2.397,-0.3129,-0.1268,2.183}, 138);
SoIndexedFaceSet578->setCoord(*SoCoordinate579);

SoTextureCoordinate* SoTextureCoordinate580 = new SoTextureCoordinate();
SoTextureCoordinate580->setPoint(new float[]{0.2299,0.0317,0.2316,0.0247,0.2265,0.0269,0.241,0.0419,0.244,0.0359,0.2401,0.0413,0.2245,0.0286,0.226,0.0221,0.2232,0.0245,0.2333,0.0341,0.2378,0.0303,0.2142,0.0508,0.2117,0.0481,0.2254,0.0615,0.2102,0.0461,0.2083,0.0443,0.2202,0.0585,0.2186,0.0548,0.2469,0.052,0.2512,0.047,0.2484,0.051,0.2292,0.0691,0.2342,0.0682,0.2142,0.0508,0.2202,0.0585,0.2292,0.0691,0.2342,0.0682,0.2254,0.0615,0.2186,0.0548,0.2117,0.0481,0.2083,0.0443,0.2102,0.0461,0.2292,0.0691,0.2469,0.052,0.2512,0.047,0.2484,0.051,0.2342,0.0682,0.2342,0.0682,0.2292,0.0691,0.226,0.0221,0.2245,0.0286,0.2102,0.0461,0.2102,0.0461,0.2083,0.0443,0.2083,0.0443,0.2232,0.0245}, 92);
SoIndexedFaceSet578->setTexCoord(*SoTextureCoordinate580);

SoShape574->setGeometry(*SoIndexedFaceSet578);

SoTransform573->addChild(*SoShape574);

SoHAnimSegment572->addChild(*SoTransform573);

SoHAnimJoint571->addChildren(*SoHAnimSegment572);

SoHAnimJoint* SoHAnimJoint581 = new SoHAnimJoint();
SoHAnimJoint581->X3DNode::setName(QString("r_metatarsophalangeal_5"));
SoHAnimJoint581->setDEF(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimJoint581->setCenter(new float[]{-5.497,0.6076,3.847});
SoHAnimJoint581->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint581->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment582 = new SoHAnimSegment();
SoHAnimSegment582->X3DNode::setName(QString("r_tarsal_proximal_phalanx_5"));
SoHAnimSegment582->setDEF(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoTransform* SoTransform583 = new SoTransform();
SoTransform583->setTranslation(new float[]{-5.497,0.6076,3.847});
SoShape* SoShape584 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance585 = new SoVRMLAppearance();
SoMaterial* SoMaterial586 = new SoMaterial();
SoMaterial586->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance585->addChild(*SoMaterial586);

SoImageTexture* SoImageTexture587 = new SoImageTexture();
SoImageTexture587->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance585->addChild(*SoImageTexture587);

SoShape584->addChild(*SoVRMLAppearance585);

SoIndexedFaceSet* SoIndexedFaceSet588 = new SoIndexedFaceSet();
SoIndexedFaceSet588->setCoordIndex(new int32_t[]{2,3,11,-1,11,10,2,-1,0,5,14,-1,14,12,0,-1,2,10,13,-1,13,6,2,-1,0,12,11,-1,11,3,0,-1,15,5,0,-1,0,16,15,-1,17,3,2,-1,2,1,17,-1,16,0,3,-1,3,17,16,-1,2,6,4,-1,4,1,2,-1,6,8,4,-1,7,15,18,-1,18,9,7,-1,8,9,18,-1,18,4,8,-1,7,5,15,-1,1,19,20,-1,20,17,1,-1,17,20,21,-1,21,16,17,-1,16,21,22,-1,22,15,16,-1,22,23,18,-1,18,15,22,-1,23,24,4,-1,4,18,23,-1,24,19,1,-1,1,4,24,-1,25,26,27,-1,25,27,28,-1,29,25,28,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,19,24,20,-1,30,31,32,-1,32,33,30,-1,33,34,35,-1,35,36,30,-1,33,35,30,-1,10,11,26,-1,26,25,10,-1,11,12,27,-1,27,26,11,-1,12,14,28,-1,28,27,12,-1,14,13,29,-1,29,28,14,-1,13,10,25,-1,25,29,13,-1,6,13,31,-1,31,30,6,-1,13,14,32,-1,32,31,13,-1,14,5,33,-1,33,32,14,-1,5,7,34,-1,34,33,5,-1,7,9,35,-1,35,34,7,-1,9,8,36,-1,36,35,9,-1,8,6,30,-1,30,36,8,-1}, 280);
SoIndexedFaceSet588->setCreaseAngle(3.14159);
SoIndexedFaceSet588->setTexCoordIndex(new int32_t[]{0,1,24,-1,24,23,0,-1,3,2,27,-1,27,25,3,-1,0,23,26,-1,26,4,0,-1,3,25,24,-1,24,1,3,-1,5,8,7,-1,7,6,5,-1,9,12,11,-1,11,10,9,-1,6,7,14,-1,14,13,6,-1,11,15,17,-1,17,10,11,-1,15,18,17,-1,16,5,20,-1,20,19,16,-1,18,21,22,-1,22,17,18,-1,16,8,5,-1,31,34,35,-1,35,30,31,-1,30,35,36,-1,36,29,30,-1,29,36,37,-1,37,28,29,-1,37,38,33,-1,33,28,37,-1,38,39,32,-1,32,33,38,-1,39,34,31,-1,31,32,39,-1,40,41,42,-1,40,42,43,-1,44,40,43,-1,39,38,37,-1,37,36,35,-1,39,37,35,-1,34,39,35,-1,45,46,47,-1,47,48,45,-1,48,49,50,-1,50,51,45,-1,48,50,45,-1,23,24,41,-1,41,40,23,-1,24,25,42,-1,42,41,24,-1,25,27,43,-1,43,42,25,-1,27,26,44,-1,44,43,27,-1,26,23,40,-1,40,44,26,-1,4,26,46,-1,46,45,4,-1,26,27,47,-1,47,46,26,-1,27,2,48,-1,48,47,27,-1,8,16,49,-1,49,48,8,-1,16,19,50,-1,50,49,16,-1,21,18,51,-1,51,50,21,-1,18,15,45,-1,45,51,18,-1}, 280);
SoCoordinate* SoCoordinate589 = new SoCoordinate();
SoCoordinate589->setPoint(new float[]{-0.2741,0.2687,-0.0725,-0.2213,-0.4838,0.1708,-0.2231,-0.4049,-0.097,-0.3378,-0.1118,-0.0803,0.1824,-0.3801,0.2853,0.3221,0.3892,0.0803,0.3221,-0.35,0.0816,0.2789,0.352,0.3109,0.2776,-0.3837,0.3162,0.2642,-0.0541,0.3594,-0.2176,-0.432,-0.2962,-0.3801,-0.1118,-0.3374,-0.2867,0.3866,-0.2941,0.3368,-0.4014,-0.103,0.3692,0.4974,-0.0603,0.1862,0.3618,0.2861,-0.2525,0.289,0.1702,-0.3123,-0.0885,0.1981,0.2184,-0.0456,0.3555,-0.2559,-0.4974,0.2967,-0.3388,-0.1325,0.3045,-0.2868,0.2213,0.2956,0.1724,0.2818,0.3981,0.201,-0.1,0.4458,0.1472,-0.4199,0.395,-0.0738,-0.2949,-0.4949,-0.1801,-0.0859,-0.5211,-0.1104,0.284,-0.4899,0.3045,0.3558,-0.3464,0.282,-0.2747,-0.3769,0.4986,-0.2481,0.0473,0.4945,-0.2765,-0.0632,0.5194,0.3282,-0.0342,0.4997,0.2837,0.029,0.469,0.2558,0.2138,0.4531,-0.0475,0.2504,0.4632,-0.2715,0.2213}, 111);
SoIndexedFaceSet588->setCoord(*SoCoordinate589);

SoTextureCoordinate* SoTextureCoordinate590 = new SoTextureCoordinate();
SoTextureCoordinate590->setPoint(new float[]{0.2192,0.0256,0.2205,0.0195,0.2048,0.0404,0.2199,0.022,0.2063,0.0414,0.2047,0.0523,0.1956,0.0462,0.1979,0.0386,0.2109,0.0476,0.277,0.1031,0.2673,0.0987,0.263,0.1,0.2744,0.109,0.1892,0.0439,0.1911,0.0375,0.2576,0.0911,0.2083,0.0537,0.263,0.0893,0.2612,0.0869,0.2047,0.0593,0.2048,0.0593,0.2671,0.0842,0.2673,0.0839,0.2245,0.0286,0.226,0.0221,0.2232,0.0245,0.2102,0.0461,0.2083,0.0443,0.2039,0.0358,0.2152,0.0224,0.2154,0.0203,0.2126,0.0258,0.2034,0.0366,0.2033,0.0375,0.2114,0.0219,0.2132,0.0168,0.2123,0.0196,0.1999,0.0356,0.201,0.0349,0.2011,0.0354,0.2245,0.0286,0.226,0.0221,0.2232,0.0245,0.2083,0.0443,0.2102,0.0461,0.2576,0.0911,0.2102,0.0461,0.2083,0.0443,0.2048,0.0404,0.2083,0.0537,0.2047,0.0593,0.2612,0.0869}, 104);
SoIndexedFaceSet588->setTexCoord(*SoTextureCoordinate590);

SoShape584->setGeometry(*SoIndexedFaceSet588);

SoTransform583->addChild(*SoShape584);

SoHAnimSegment582->addChild(*SoTransform583);

SoHAnimJoint581->addChildren(*SoHAnimSegment582);

SoHAnimJoint* SoHAnimJoint591 = new SoHAnimJoint();
SoHAnimJoint591->X3DNode::setName(QString("r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint591->setDEF(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimJoint591->setCenter(new float[]{-5.6,0.4825,4.184});
SoHAnimJoint591->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint591->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment592 = new SoHAnimSegment();
SoHAnimSegment592->X3DNode::setName(QString("r_tarsal_middle_phalanx_5"));
SoHAnimSegment592->setDEF(QString("hanim_r_tarsal_middle_phalanx_5"));
SoTransform* SoTransform593 = new SoTransform();
SoTransform593->setTranslation(new float[]{-5.6,0.4825,4.184});
SoShape* SoShape594 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance595 = new SoVRMLAppearance();
SoMaterial* SoMaterial596 = new SoMaterial();
SoMaterial596->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance595->addChild(*SoMaterial596);

SoImageTexture* SoImageTexture597 = new SoImageTexture();
SoImageTexture597->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance595->addChild(*SoImageTexture597);

SoShape594->addChild(*SoVRMLAppearance595);

SoIndexedFaceSet* SoIndexedFaceSet598 = new SoIndexedFaceSet();
SoIndexedFaceSet598->setCoordIndex(new int32_t[]{6,0,1,-1,1,7,6,-1,7,1,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,0,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,1,0,19,-1,19,18,1,-1,0,5,20,-1,20,19,0,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,1,18,-1,18,23,2,-1}, 176);
SoIndexedFaceSet598->setCreaseAngle(3.14159);
SoIndexedFaceSet598->setTexCoordIndex(new int32_t[]{6,1,0,-1,0,7,6,-1,7,0,2,-1,2,8,7,-1,8,2,3,-1,3,9,8,-1,3,4,10,-1,10,9,3,-1,4,5,11,-1,11,10,4,-1,5,1,6,-1,6,11,5,-1,20,21,22,-1,22,23,18,-1,20,22,18,-1,19,20,18,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1,0,1,19,-1,19,18,0,-1,1,5,20,-1,20,19,1,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,18,-1,18,23,2,-1}, 176);
SoCoordinate* SoCoordinate599 = new SoCoordinate();
SoCoordinate599->setPoint(new float[]{-0.2408,-0.4069,0.2803,-0.3104,-0.1317,0.2682,-0.2708,0.1735,0.2787,0.2317,0.2031,0.3777,0.2679,-0.1354,0.3997,0.1895,-0.4021,0.3653,-0.1525,-0.3723,-0.0403,-0.2354,-0.0074,-0.0325,-0.1833,0.3464,-0.0414,0.2758,0.4069,0.0611,0.3045,0.025,0.1088,0.2506,-0.2948,0.058,-0.0394,-0.2528,-0.1664,-0.0981,-0.0034,-0.1527,-0.0588,0.2544,-0.1647,0.223,0.2914,-0.1062,0.2396,0.03,-0.0614,0.202,-0.2065,-0.1082,-0.193,-0.1236,0.4464,-0.1591,-0.2569,0.4517,0.0503,-0.2545,0.4894,0.0876,-0.122,0.5141,0.0715,0.0448,0.4955,-0.173,0.0304,0.4518}, 72);
SoIndexedFaceSet598->setCoord(*SoCoordinate599);

SoTextureCoordinate* SoTextureCoordinate600 = new SoTextureCoordinate();
SoTextureCoordinate600->setPoint(new float[]{0.2109,0.0133,0.2102,0.0181,0.2093,0.0169,0.1959,0.0354,0.1986,0.0324,0.1989,0.0342,0.2114,0.0219,0.2132,0.0168,0.2123,0.0196,0.1999,0.0356,0.201,0.0349,0.2011,0.0354,0.2114,0.0219,0.2132,0.0168,0.2123,0.0196,0.1999,0.0356,0.201,0.0349,0.2011,0.0354,0.2109,0.0133,0.2102,0.0181,0.1989,0.0342,0.1986,0.0324,0.1959,0.0354,0.2093,0.0169}, 48);
SoIndexedFaceSet598->setTexCoord(*SoTextureCoordinate600);

SoShape594->setGeometry(*SoIndexedFaceSet598);

SoTransform593->addChild(*SoShape594);

SoHAnimSegment592->addChild(*SoTransform593);

SoHAnimJoint591->addChildren(*SoHAnimSegment592);

SoHAnimJoint* SoHAnimJoint601 = new SoHAnimJoint();
SoHAnimJoint601->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint601->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimJoint601->setCenter(new float[]{-5.641,0.3806,4.528});
SoHAnimJoint601->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint601->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment602 = new SoHAnimSegment();
SoHAnimSegment602->X3DNode::setName(QString("r_tarsal_distal_phalanx_5"));
SoHAnimSegment602->setDEF(QString("hanim_r_tarsal_distal_phalanx_5"));
SoTransform* SoTransform603 = new SoTransform();
SoTransform603->setTranslation(new float[]{-5.641,0.3806,4.528});
SoShape* SoShape604 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance605 = new SoVRMLAppearance();
SoMaterial* SoMaterial606 = new SoMaterial();
SoMaterial606->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance605->addChild(*SoMaterial606);

SoImageTexture* SoImageTexture607 = new SoImageTexture();
SoImageTexture607->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance605->addChild(*SoImageTexture607);

SoShape604->addChild(*SoVRMLAppearance605);

SoIndexedFaceSet* SoIndexedFaceSet608 = new SoIndexedFaceSet();
SoIndexedFaceSet608->setCoordIndex(new int32_t[]{2,1,4,-1,4,3,2,-1,0,5,4,-1,4,1,0,-1,7,6,0,-1,0,1,7,-1,2,8,7,-1,7,1,2,-1,9,8,2,-1,2,3,9,-1,10,9,3,-1,3,4,10,-1,5,11,10,-1,10,4,5,-1,0,6,11,-1,11,5,0,-1,14,15,16,-1,16,17,12,-1,14,16,12,-1,13,14,12,-1,6,7,13,-1,13,12,6,-1,7,8,14,-1,14,13,7,-1,8,9,15,-1,15,14,8,-1,9,10,16,-1,16,15,9,-1,10,11,17,-1,17,16,10,-1,11,6,12,-1,12,17,11,-1}, 128);
SoIndexedFaceSet608->setCreaseAngle(3.14159);
SoIndexedFaceSet608->setTexCoordIndex(new int32_t[]{1,0,3,-1,3,2,1,-1,5,4,3,-1,3,0,5,-1,9,8,5,-1,5,0,9,-1,1,10,9,-1,9,0,1,-1,12,11,7,-1,7,6,12,-1,14,13,2,-1,2,3,14,-1,4,15,14,-1,14,3,4,-1,5,8,15,-1,15,4,5,-1,18,19,20,-1,20,21,16,-1,18,20,16,-1,17,18,16,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,11,12,19,-1,19,18,11,-1,13,14,20,-1,20,19,13,-1,14,15,21,-1,21,20,14,-1,15,8,16,-1,16,21,15,-1}, 128);
SoCoordinate* SoCoordinate609 = new SoCoordinate();
SoCoordinate609->setPoint(new float[]{-0.1245,-0.2998,0.2013,-0.2172,-0.0402,0.2894,-0.168,0.1871,0.2347,0.1198,0.2033,0.2971,0.1153,-0.0329,0.3526,0.1253,-0.2998,0.2469,-0.2006,-0.305,-0.0635,-0.2702,-0.0298,-0.0756,-0.2307,0.2754,-0.0651,0.2719,0.305,0.0339,0.3081,-0.0335,0.0559,0.2297,-0.3002,0.0215,-0.0767,-0.1908,-0.2275,-0.1195,-0.022,-0.2346,-0.0946,0.1698,-0.2279,0.2144,0.188,-0.1703,0.2355,-0.0217,-0.1508,0.1879,-0.1878,-0.178}, 54);
SoIndexedFaceSet608->setCoord(*SoCoordinate609);

SoTextureCoordinate* SoTextureCoordinate610 = new SoTextureCoordinate();
SoTextureCoordinate610->setPoint(new float[]{0.2048,0.0135,0.2053,0.0142,0.1964,0.026,0.1976,0.0232,0.1977,0.0271,0.2052,0.017,0.0639,0.0523,0.0903,0.0107,0.2102,0.0181,0.2109,0.0133,0.2093,0.0169,0.1317,0.0215,0.0951,0.0836,0.1959,0.0354,0.1986,0.0324,0.1989,0.0342,0.2102,0.0181,0.2109,0.0133,0.2093,0.0169,0.0951,0.0836,0.1986,0.0324,0.1989,0.0342}, 44);
SoIndexedFaceSet608->setTexCoord(*SoTextureCoordinate610);

SoShape604->setGeometry(*SoIndexedFaceSet608);

SoTransform603->addChild(*SoShape604);

SoHAnimSegment602->addChild(*SoTransform603);

SoHAnimJoint601->addChildren(*SoHAnimSegment602);

SoHAnimJoint591->addChildren(*SoHAnimJoint601);

SoHAnimJoint581->addChildren(*SoHAnimJoint591);

SoHAnimJoint571->addChildren(*SoHAnimJoint581);

SoHAnimJoint521->addChildren(*SoHAnimJoint571);

SoHAnimJoint511->addChildren(*SoHAnimJoint521);

SoHAnimJoint351->addChildren(*SoHAnimJoint511);

SoHAnimJoint341->addChildren(*SoHAnimJoint351);

SoHAnimJoint331->addChildren(*SoHAnimJoint341);

SoHAnimJoint41->addChildren(*SoHAnimJoint331);

SoHAnimJoint* SoHAnimJoint611 = new SoHAnimJoint();
SoHAnimJoint611->X3DNode::setName(QString("vl5"));
SoHAnimJoint611->setDEF(QString("hanim_vl5"));
SoHAnimJoint611->setCenter(new float[]{0.0,41.130001,-0.6117});
SoHAnimJoint611->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint611->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment612 = new SoHAnimSegment();
SoHAnimSegment612->X3DNode::setName(QString("l5"));
SoHAnimSegment612->setDEF(QString("hanim_l5"));
SoTransform* SoTransform613 = new SoTransform();
SoTransform613->setTranslation(new float[]{0.0,41.130001,-0.6117});
SoShape* SoShape614 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance615 = new SoVRMLAppearance();
SoMaterial* SoMaterial616 = new SoMaterial();
SoMaterial616->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance615->addChild(*SoMaterial616);

SoImageTexture* SoImageTexture617 = new SoImageTexture();
SoImageTexture617->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance615->addChild(*SoImageTexture617);

SoShape614->addChild(*SoVRMLAppearance615);

SoIndexedFaceSet* SoIndexedFaceSet618 = new SoIndexedFaceSet();
SoIndexedFaceSet618->setCoordIndex(new int32_t[]{0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1}, 320);
SoIndexedFaceSet618->setCreaseAngle(3.14159);
SoIndexedFaceSet618->setTexCoordIndex(new int32_t[]{1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1}, 320);
SoCoordinate* SoCoordinate619 = new SoCoordinate();
SoCoordinate619->setPoint(new float[]{4.178,1.114,3.711,5.76,1.15,1.754,1.52,0.9575,-3.918,3.95,0.9672,-2.776,5.309,1.072,-0.9797,3.789,0.0396,2.969,5.166,0.0713,1.445,1.593,-0.0798,-2.916,3.6,-0.0573,-2.087,4.841,-0.0103,-0.6841,1.635,1.083,4.322,1.595,0.0009,3.405,0.0,0.0009,3.405,0.0,1.083,4.322,-1.595,0.0009,3.405,-3.789,0.0396,2.969,-4.178,1.114,3.711,-1.635,1.083,4.322,-5.166,0.0713,1.445,-5.76,1.15,1.754,-3.6,-0.0573,-2.087,-1.593,-0.0798,-2.916,-1.52,0.9575,-3.918,-3.95,0.9672,-2.776,-4.841,-0.0103,-0.6841,-5.309,1.072,-0.9797,0.0,-0.0798,-2.916,0.0,0.9575,-3.918,1.609,1.473,4.099,4.053,1.473,3.512,5.524,1.473,1.692,5.098,1.473,-0.8893,3.806,1.473,-2.528,1.47,1.473,-3.626,0.0,1.473,-3.626,-1.47,1.473,-3.626,-3.806,1.473,-2.528,-5.098,1.473,-0.8893,-5.524,1.473,1.692,-4.053,1.473,3.512,-1.609,1.473,4.099,0.0,1.473,4.099}, 126);
SoIndexedFaceSet618->setCoord(*SoCoordinate619);

SoTextureCoordinate* SoTextureCoordinate620 = new SoTextureCoordinate();
SoTextureCoordinate620->setPoint(new float[]{0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.227,0.2131,0.3536,0.2151,0.1879,0.2143,0.3553,0.2398,0.3555,0.2151,0.3557,0.2401,0.3545,0.2151,0.3536,0.2151,0.019,0.2349,0.0206,0.2122,0.0206,0.2122,0.1067,0.2154,0.1011,0.241,0.019,0.2349,0.1463,0.2162,0.1445,0.2419,0.227,0.2131,0.3536,0.2151,0.3561,0.2404,0.2369,0.2375,0.1879,0.2143,0.1927,0.24,0.3553,0.2398,0.3555,0.2151,0.3545,0.2151,0.3557,0.2401,0.0206,0.2122,0.019,0.2349,0.3536,0.2151,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419,0.1011,0.241,0.019,0.2349,0.019,0.2349}, 104);
SoIndexedFaceSet618->setTexCoord(*SoTextureCoordinate620);

SoShape614->setGeometry(*SoIndexedFaceSet618);

SoTransform613->addChild(*SoShape614);

SoHAnimSegment612->addChild(*SoTransform613);

SoHAnimJoint611->addChildren(*SoHAnimSegment612);

SoHAnimJoint* SoHAnimJoint621 = new SoHAnimJoint();
SoHAnimJoint621->X3DNode::setName(QString("vl4"));
SoHAnimJoint621->setDEF(QString("hanim_vl4"));
SoHAnimJoint621->setCenter(new float[]{0.0,42.209999,-0.6117});
SoHAnimJoint621->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint621->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment622 = new SoHAnimSegment();
SoHAnimSegment622->X3DNode::setName(QString("l4"));
SoHAnimSegment622->setDEF(QString("hanim_l4"));
SoTransform* SoTransform623 = new SoTransform();
SoTransform623->setTranslation(new float[]{0.0,42.209999,-0.6117});
SoShape* SoShape624 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance625 = new SoVRMLAppearance();
SoMaterial* SoMaterial626 = new SoMaterial();
SoMaterial626->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance625->addChild(*SoMaterial626);

SoImageTexture* SoImageTexture627 = new SoImageTexture();
SoImageTexture627->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance625->addChild(*SoImageTexture627);

SoShape624->addChild(*SoVRMLAppearance625);

SoIndexedFaceSet* SoIndexedFaceSet628 = new SoIndexedFaceSet();
SoIndexedFaceSet628->setCoordIndex(new int32_t[]{11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1}, 432);
SoIndexedFaceSet628->setCreaseAngle(3.14159);
SoIndexedFaceSet628->setTexCoordIndex(new int32_t[]{15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1}, 432);
SoCoordinate* SoCoordinate629 = new SoCoordinate();
SoCoordinate629->setPoint(new float[]{4.026,0.7465,3.365,5.556,0.7644,1.615,1.443,0.6683,-3.473,1.519,0.7312,3.919,3.83,0.6731,-2.414,5.148,0.7257,-0.8425,4.178,0.0328,3.711,5.76,0.0687,1.754,1.52,-0.1236,-3.918,3.95,-0.1138,-2.776,5.309,-0.0087,-0.9797,1.635,0.0023,4.322,0.0,-0.1236,-3.918,-1.635,0.0023,4.322,-4.178,0.0328,3.711,-4.026,0.7465,3.365,-1.519,0.7312,3.919,-5.76,0.0687,1.754,-5.556,0.7644,1.615,-3.95,-0.1138,-2.776,-1.52,-0.1236,-3.918,-1.443,0.6683,-3.473,-3.83,0.6731,-2.414,-5.309,-0.0087,-0.9797,-5.148,0.7257,-0.8425,0.0,0.0023,4.322,0.0,0.7312,3.919,0.0,0.6683,-3.473,1.493,1.061,3.676,3.895,1.061,3.145,5.297,1.061,1.541,4.918,1.061,-0.7369,3.68,1.061,-2.214,1.392,1.061,-3.23,0.0,1.061,-3.23,-1.392,1.061,-3.23,-3.68,1.061,-2.214,-4.918,1.061,-0.7369,-5.297,1.061,1.541,-3.895,1.061,3.145,-1.493,1.061,3.676,0.0,1.061,3.676,3.857,-0.461,3.349,1.533,-0.461,3.907,0.0,-0.461,3.907,-1.533,-0.461,3.907,-3.857,-0.461,3.349,-5.251,-0.461,1.624,-4.847,-0.461,-0.8254,-3.619,-0.461,-2.448,-1.398,-0.461,-3.492,0.0,-0.461,-3.492,1.398,-0.461,-3.492,3.619,-0.461,-2.448,4.847,-0.461,-0.8254,5.251,-0.461,1.624}, 168);
SoIndexedFaceSet628->setCoord(*SoCoordinate629);

SoTextureCoordinate* SoTextureCoordinate630 = new SoTextureCoordinate();
SoTextureCoordinate630->setPoint(new float[]{0.1026,0.2616,0.1481,0.2604,0.3503,0.2575,0.3578,0.2568,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.1011,0.241,0.1445,0.2419,0.3553,0.2398,0.3561,0.2404,0.2369,0.2375,0.1927,0.24,0.019,0.2349,0.3557,0.2401,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1026,0.2616,0.0179,0.2574,0.1445,0.2419,0.1481,0.2604,0.2369,0.2375,0.3561,0.2404,0.3503,0.2575,0.2289,0.2559,0.1927,0.24,0.1884,0.2584,0.019,0.2349,0.0186,0.2582,0.3578,0.2568,0.3553,0.2398,0.3557,0.2401,0.3542,0.2515,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.1011,0.241,0.019,0.2349,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419}, 128);
SoIndexedFaceSet628->setTexCoord(*SoTextureCoordinate630);

SoShape624->setGeometry(*SoIndexedFaceSet628);

SoTransform623->addChild(*SoShape624);

SoHAnimSegment622->addChild(*SoTransform623);

SoHAnimJoint621->addChildren(*SoHAnimSegment622);

SoHAnimJoint* SoHAnimJoint631 = new SoHAnimJoint();
SoHAnimJoint631->X3DNode::setName(QString("vl3"));
SoHAnimJoint631->setDEF(QString("hanim_vl3"));
SoHAnimJoint631->setCenter(new float[]{0.0,42.93,-0.6117});
SoHAnimJoint631->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint631->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment632 = new SoHAnimSegment();
SoHAnimSegment632->X3DNode::setName(QString("l3"));
SoHAnimSegment632->setDEF(QString("hanim_l3"));
SoTransform* SoTransform633 = new SoTransform();
SoTransform633->setTranslation(new float[]{0.0,42.93,-0.6117});
SoShape* SoShape634 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance635 = new SoVRMLAppearance();
SoMaterial* SoMaterial636 = new SoMaterial();
SoMaterial636->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance635->addChild(*SoMaterial636);

SoImageTexture* SoImageTexture637 = new SoImageTexture();
SoImageTexture637->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance635->addChild(*SoImageTexture637);

SoShape634->addChild(*SoVRMLAppearance635);

SoIndexedFaceSet* SoIndexedFaceSet638 = new SoIndexedFaceSet();
SoIndexedFaceSet638->setCoordIndex(new int32_t[]{1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1}, 432);
SoIndexedFaceSet638->setCreaseAngle(3.14159);
SoIndexedFaceSet638->setTexCoordIndex(new int32_t[]{4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1}, 432);
SoCoordinate* SoCoordinate639 = new SoCoordinate();
SoCoordinate639->setPoint(new float[]{3.874,0.7332,3.02,1.367,0.7332,-3.028,3.71,0.7332,-2.051,4.987,0.7332,-0.7054,1.404,0.7332,3.517,5.353,0.7332,1.475,4.026,0.0196,3.365,5.556,0.0375,1.615,1.443,-0.0586,-3.473,1.519,0.0043,3.919,3.83,-0.0538,-2.414,5.148,-0.0012,-0.8425,0.0,0.0043,3.919,-1.367,0.7332,-3.028,-1.443,-0.0586,-3.473,0.0,-0.0586,-3.473,0.0,0.7332,-3.028,-4.026,0.0196,3.365,-3.874,0.7332,3.02,-1.404,0.7332,3.517,-1.519,0.0043,3.919,-5.556,0.0375,1.615,-5.353,0.7332,1.475,-3.71,0.7332,-2.051,-3.83,-0.0538,-2.414,-4.987,0.7332,-0.7054,-5.148,-0.0012,-0.8425,0.0,0.7332,3.517,1.366,1.112,3.286,3.726,1.112,2.811,5.078,1.112,1.398,4.742,1.112,-0.6029,3.55,1.112,-1.86,1.311,1.112,-2.794,0.0,1.112,-2.794,-1.311,1.112,-2.794,-3.55,1.112,-1.86,-4.742,1.112,-0.6029,-5.078,1.112,1.398,-3.726,1.112,2.811,-1.366,1.112,3.286,0.0,1.112,3.286,3.87,-0.3411,3.153,1.478,-0.3411,3.682,0.0,-0.3411,3.682,-1.478,-0.3411,3.682,-3.87,-0.3411,3.153,-5.28,-0.3411,1.54,-4.9,-0.3411,-0.7446,-3.661,-0.3411,-2.221,-1.384,-0.3411,-3.233,0.0,-0.3411,-3.233,1.384,-0.3411,-3.233,3.661,-0.3411,-2.221,4.9,-0.3411,-0.7446,5.28,-0.3411,1.54}, 168);
SoIndexedFaceSet638->setCoord(*SoCoordinate639);

SoTextureCoordinate* SoTextureCoordinate640 = new SoTextureCoordinate();
SoTextureCoordinate640->setPoint(new float[]{0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.3444,0.2746,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.3527,0.263,0.0181,0.2816,0.1026,0.2616,0.1481,0.2604,0.3578,0.2568,0.3503,0.2575,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.3604,0.2737,0.3578,0.2568,0.3542,0.2515,0.3527,0.263,0.1026,0.2616,0.1041,0.2822,0.0168,0.2798,0.0179,0.2574,0.1481,0.2604,0.1518,0.2789,0.3503,0.2575,0.3444,0.2746,0.221,0.2742,0.2289,0.2559,0.1842,0.2768,0.1884,0.2584,0.0181,0.2816,0.0186,0.2582,0.0168,0.2798,0.1041,0.2822,0.1518,0.2789,0.1842,0.2768,0.221,0.2742,0.3444,0.2746,0.3527,0.263,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.1518,0.2789,0.1041,0.2822,0.0168,0.2798,0.0181,0.2816,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604}, 128);
SoIndexedFaceSet638->setTexCoord(*SoTextureCoordinate640);

SoShape634->setGeometry(*SoIndexedFaceSet638);

SoTransform633->addChild(*SoShape634);

SoHAnimSegment632->addChild(*SoTransform633);

SoHAnimJoint631->addChildren(*SoHAnimSegment632);

SoHAnimJoint* SoHAnimJoint641 = new SoHAnimJoint();
SoHAnimJoint641->X3DNode::setName(QString("vl2"));
SoHAnimJoint641->setDEF(QString("hanim_vl2"));
SoHAnimJoint641->setCenter(new float[]{0.0,43.66,-0.6117});
SoHAnimJoint641->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint641->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment642 = new SoHAnimSegment();
SoHAnimSegment642->X3DNode::setName(QString("l2"));
SoHAnimSegment642->setDEF(QString("hanim_l2"));
SoTransform* SoTransform643 = new SoTransform();
SoTransform643->setTranslation(new float[]{0.0,43.66,-0.6117});
SoShape* SoShape644 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance645 = new SoVRMLAppearance();
SoMaterial* SoMaterial646 = new SoMaterial();
SoMaterial646->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance645->addChild(*SoMaterial646);

SoImageTexture* SoImageTexture647 = new SoImageTexture();
SoImageTexture647->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance645->addChild(*SoImageTexture647);

SoShape644->addChild(*SoVRMLAppearance645);

SoIndexedFaceSet* SoIndexedFaceSet648 = new SoIndexedFaceSet();
SoIndexedFaceSet648->setCoordIndex(new int32_t[]{3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1}, 432);
SoIndexedFaceSet648->setCreaseAngle(3.14159);
SoIndexedFaceSet648->setTexCoordIndex(new int32_t[]{6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1}, 432);
SoCoordinate* SoCoordinate649 = new SoCoordinate();
SoCoordinate649->setPoint(new float[]{3.71,0.777,2.648,4.818,0.777,-0.5615,5.128,0.777,1.321,1.293,0.777,-2.595,3.593,0.777,-1.696,1.281,0.777,3.092,3.874,0.0063,3.02,1.367,0.0063,-3.028,3.71,0.0063,-2.051,4.987,0.0063,-0.7054,1.404,0.0063,3.517,5.353,0.0063,1.475,-1.293,0.777,-2.595,-1.367,0.0063,-3.028,0.0,0.0063,-3.028,0.0,0.777,-2.595,-3.874,0.0063,3.02,-3.71,0.777,2.648,-1.281,0.777,3.092,-1.404,0.0063,3.517,-5.353,0.0063,1.475,-5.128,0.777,1.321,-3.593,0.777,-1.696,-3.71,0.0063,-2.051,-4.818,0.777,-0.5615,-4.987,0.0063,-0.7054,0.0,0.777,3.092,0.0,0.0063,3.517,1.261,1.231,2.872,3.606,1.231,2.442,4.891,1.231,1.241,4.612,1.231,-0.451,3.473,1.231,-1.506,1.251,1.231,-2.375,0.0,1.231,-2.375,-1.251,1.231,-2.375,-3.473,1.231,-1.506,-4.612,1.231,-0.451,-4.891,1.231,1.241,-3.606,1.231,2.442,-1.261,1.231,2.872,0.0,1.231,2.872,3.853,-0.3735,2.877,1.415,-0.3735,3.367,0.0,-0.3735,3.367,-1.415,-0.3735,3.367,-3.853,-0.3735,2.877,-5.24,-0.3735,1.428,-4.895,-0.3735,-0.6254,-3.668,-0.3735,-1.919,-1.354,-0.3735,-2.884,0.0,-0.3735,-2.884,1.354,-0.3735,-2.884,3.668,-0.3735,-1.919,4.895,-0.3735,-0.6254,5.24,-0.3735,1.428}, 168);
SoIndexedFaceSet648->setCoord(*SoCoordinate649);

SoTextureCoordinate* SoTextureCoordinate650 = new SoTextureCoordinate();
SoTextureCoordinate650->setPoint(new float[]{0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.3633,0.2922,0.3627,0.2922,0.0177,0.3051,0.1055,0.2814,0.3697,0.2711,0.3605,0.2757,0.2204,0.275,0.1853,0.2768,0.024,0.2813,0.1448,0.2785,0.3603,0.2745,0.0155,0.2778,0.3633,0.2922,0.3697,0.2711,0.3603,0.2745,0.3627,0.2922,0.1055,0.2814,0.0982,0.302,0.0177,0.3051,0.024,0.2813,0.1448,0.2785,0.1487,0.2975,0.3605,0.2757,0.3621,0.2922,0.2175,0.2944,0.2204,0.275,0.1849,0.2961,0.1853,0.2768,0.0177,0.3051,0.0155,0.2778,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.1055,0.2814,0.024,0.2813,0.0155,0.2778,0.024,0.2813,0.1055,0.2814,0.1448,0.2785,0.1853,0.2768,0.2204,0.275,0.3605,0.2757,0.3603,0.2745,0.3697,0.2711,0.2204,0.275,0.1853,0.2768,0.1448,0.2785}, 128);
SoIndexedFaceSet648->setTexCoord(*SoTextureCoordinate650);

SoShape644->setGeometry(*SoIndexedFaceSet648);

SoTransform643->addChild(*SoShape644);

SoHAnimSegment642->addChild(*SoTransform643);

SoHAnimJoint641->addChildren(*SoHAnimSegment642);

SoHAnimJoint* SoHAnimJoint651 = new SoHAnimJoint();
SoHAnimJoint651->X3DNode::setName(QString("vl1"));
SoHAnimJoint651->setDEF(QString("hanim_vl1"));
SoHAnimJoint651->setCenter(new float[]{0.0,44.43,-0.6117});
SoHAnimJoint651->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint651->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment652 = new SoHAnimSegment();
SoHAnimSegment652->X3DNode::setName(QString("l1"));
SoHAnimSegment652->setDEF(QString("hanim_l1"));
SoTransform* SoTransform653 = new SoTransform();
SoTransform653->setTranslation(new float[]{0.0,44.43,-0.6117});
SoShape* SoShape654 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance655 = new SoVRMLAppearance();
SoMaterial* SoMaterial656 = new SoMaterial();
SoMaterial656->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance655->addChild(*SoMaterial656);

SoImageTexture* SoImageTexture657 = new SoImageTexture();
SoImageTexture657->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance655->addChild(*SoImageTexture657);

SoShape654->addChild(*SoVRMLAppearance655);

SoIndexedFaceSet* SoIndexedFaceSet658 = new SoIndexedFaceSet();
SoIndexedFaceSet658->setCoordIndex(new int32_t[]{7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1}, 432);
SoIndexedFaceSet658->setCreaseAngle(3.14159);
SoIndexedFaceSet658->setTexCoordIndex(new int32_t[]{9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1}, 432);
SoCoordinate* SoCoordinate659 = new SoCoordinate();
SoCoordinate659->setPoint(new float[]{3.702,1.056,2.588,1.286,1.056,3.04,5.104,1.056,1.294,1.363,1.056,-2.529,3.588,1.056,-1.686,4.805,1.056,-0.5256,0.0,1.056,3.04,3.71,0.0128,2.648,4.818,0.0128,-0.5615,0.0,0.0128,3.092,0.0,0.0128,-2.595,5.128,0.0128,1.321,1.293,0.0128,-2.595,3.593,0.0128,-1.696,1.281,0.0128,3.092,-1.281,0.0128,3.092,-3.71,0.0128,2.648,-3.702,1.056,2.588,-1.286,1.056,3.04,-5.128,0.0128,1.321,-5.104,1.056,1.294,-3.593,0.0128,-1.696,-1.293,0.0128,-2.595,-1.363,1.056,-2.529,-3.588,1.056,-1.686,-4.818,0.0128,-0.5615,-4.805,1.056,-0.5256,0.0,1.056,-2.529,1.266,1.5,2.82,3.599,1.5,2.383,4.867,1.5,1.212,4.6,1.5,-0.4169,3.469,1.5,-1.496,1.323,1.5,-2.308,0.0,1.5,-2.309,-1.323,1.5,-2.308,-3.469,1.5,-1.496,-4.6,1.5,-0.4169,-4.867,1.5,1.212,-3.599,1.5,2.383,-1.266,1.5,2.82,0.0,1.5,2.82,3.606,-0.3662,2.442,1.261,-0.3662,2.872,0.0,-0.3662,2.872,-1.261,-0.3662,2.872,-3.606,-0.3662,2.442,-4.891,-0.3662,1.241,-4.612,-0.3662,-0.451,-3.473,-0.3662,-1.506,-1.251,-0.3662,-2.375,0.0,-0.3662,-2.375,1.251,-0.3662,-2.375,3.473,-0.3662,-1.506,4.612,-0.3662,-0.451,4.891,-0.3662,1.241}, 168);
SoIndexedFaceSet658->setCoord(*SoCoordinate659);

SoTextureCoordinate* SoTextureCoordinate660 = new SoTextureCoordinate();
SoTextureCoordinate660->setPoint(new float[]{0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3615,0.3195,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.0982,0.302,0.1849,0.2961,0.0177,0.3051,0.3627,0.2922,0.1487,0.2975,0.3633,0.2922,0.3621,0.2922,0.2175,0.2944,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.0943,0.3233,0.0192,0.3251,0.1487,0.2975,0.1489,0.3212,0.2175,0.2944,0.3621,0.2922,0.3615,0.3195,0.2175,0.3185,0.1849,0.2961,0.1844,0.32,0.0177,0.3051,0.0192,0.3251,0.3631,0.318,0.3633,0.2922,0.3627,0.2922,0.3623,0.3188,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975}, 128);
SoIndexedFaceSet658->setTexCoord(*SoTextureCoordinate660);

SoShape654->setGeometry(*SoIndexedFaceSet658);

SoTransform653->addChild(*SoShape654);

SoHAnimSegment652->addChild(*SoTransform653);

SoHAnimJoint651->addChildren(*SoHAnimSegment652);

SoHAnimJoint* SoHAnimJoint661 = new SoHAnimJoint();
SoHAnimJoint661->X3DNode::setName(QString("vt12"));
SoHAnimJoint661->setDEF(QString("hanim_vt12"));
SoHAnimJoint661->setCenter(new float[]{0.0,45.470001,-0.6117});
SoHAnimJoint661->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint661->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment662 = new SoHAnimSegment();
SoHAnimSegment662->X3DNode::setName(QString("t12"));
SoHAnimSegment662->setDEF(QString("hanim_t12"));
SoTransform* SoTransform663 = new SoTransform();
SoTransform663->setTranslation(new float[]{0.0,45.470001,-0.6117});
SoShape* SoShape664 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance665 = new SoVRMLAppearance();
SoMaterial* SoMaterial666 = new SoMaterial();
SoMaterial666->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance665->addChild(*SoMaterial666);

SoImageTexture* SoImageTexture667 = new SoImageTexture();
SoImageTexture667->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance665->addChild(*SoImageTexture667);

SoShape664->addChild(*SoVRMLAppearance665);

SoIndexedFaceSet* SoIndexedFaceSet668 = new SoIndexedFaceSet();
SoIndexedFaceSet668->setCoordIndex(new int32_t[]{4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1}, 432);
SoIndexedFaceSet668->setCreaseAngle(3.14159);
SoIndexedFaceSet668->setTexCoordIndex(new int32_t[]{5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1}, 432);
SoCoordinate* SoCoordinate669 = new SoCoordinate();
SoCoordinate669->setPoint(new float[]{3.695,1.054,2.529,5.081,1.054,1.266,1.292,1.054,2.988,1.434,1.054,-2.463,3.584,1.054,-1.677,4.793,1.054,-0.4897,3.702,0.0104,2.588,1.286,0.0104,3.04,5.104,0.0104,1.294,1.363,0.0104,-2.529,3.588,0.0104,-1.686,4.805,0.0104,-0.5256,0.0,0.0104,3.04,-3.584,1.054,-1.677,-4.793,1.054,-0.4897,-4.805,0.0104,-0.5256,-3.588,0.0104,-1.686,0.0,1.054,-2.464,-1.434,1.054,-2.463,-1.363,0.0104,-2.529,0.0,0.0104,-2.529,-3.702,0.0104,2.588,-3.695,1.054,2.529,-1.292,1.054,2.988,-1.286,0.0104,3.04,-5.104,0.0104,1.294,-5.081,1.054,1.266,0.0,1.054,2.988,1.276,1.452,2.823,3.618,1.452,2.375,4.904,1.452,1.204,4.639,1.452,-0.4096,3.494,1.452,-1.534,1.405,1.452,-2.298,0.0,1.452,-2.298,-1.405,1.452,-2.298,-3.494,1.452,-1.534,-4.639,1.452,-0.4096,-4.904,1.452,1.204,-3.618,1.452,2.375,-1.276,1.452,2.823,0.0,1.452,2.823,3.625,-0.4686,2.435,1.271,-0.4686,2.875,0.0,-0.4686,2.875,-1.271,-0.4686,2.875,-3.625,-0.4686,2.435,-4.927,-0.4686,1.233,-4.651,-0.4686,-0.4442,-3.499,-0.4686,-1.544,-1.333,-0.4686,-2.364,0.0,-0.4686,-2.364,1.333,-0.4686,-2.364,3.499,-0.4686,-1.544,4.651,-0.4686,-0.4442,4.927,-0.4686,1.233}, 168);
SoIndexedFaceSet668->setCoord(*SoCoordinate669);

SoTextureCoordinate* SoTextureCoordinate670 = new SoTextureCoordinate();
SoTextureCoordinate670->setPoint(new float[]{0.0903,0.3446,0.1491,0.3449,0.0206,0.3452,0.3608,0.3469,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.3619,0.3454,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3631,0.318,0.3615,0.3195,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.2175,0.3427,0.1838,0.3438,0.1844,0.32,0.2175,0.3185,0.3619,0.3454,0.3629,0.3439,0.3631,0.318,0.3623,0.3188,0.0943,0.3233,0.0903,0.3446,0.0206,0.3452,0.0192,0.3251,0.1489,0.3212,0.1491,0.3449,0.3615,0.3195,0.3608,0.3469,0.0206,0.3452,0.0192,0.3251,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212}, 128);
SoIndexedFaceSet668->setTexCoord(*SoTextureCoordinate670);

SoShape664->setGeometry(*SoIndexedFaceSet668);

SoTransform663->addChild(*SoShape664);

SoHAnimSegment662->addChild(*SoTransform663);

SoHAnimJoint661->addChildren(*SoHAnimSegment662);

SoHAnimJoint* SoHAnimJoint671 = new SoHAnimJoint();
SoHAnimJoint671->X3DNode::setName(QString("vt11"));
SoHAnimJoint671->setDEF(QString("hanim_vt11"));
SoHAnimJoint671->setCenter(new float[]{0.0,46.52,-0.6117});
SoHAnimJoint671->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint671->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment672 = new SoHAnimSegment();
SoHAnimSegment672->X3DNode::setName(QString("t11"));
SoHAnimSegment672->setDEF(QString("hanim_t11"));
SoTransform* SoTransform673 = new SoTransform();
SoTransform673->setTranslation(new float[]{0.0,46.52,-0.6117});
SoShape* SoShape674 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance675 = new SoVRMLAppearance();
SoMaterial* SoMaterial676 = new SoMaterial();
SoMaterial676->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance675->addChild(*SoMaterial676);

SoImageTexture* SoImageTexture677 = new SoImageTexture();
SoImageTexture677->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance675->addChild(*SoImageTexture677);

SoShape674->addChild(*SoVRMLAppearance675);

SoIndexedFaceSet* SoIndexedFaceSet678 = new SoIndexedFaceSet();
SoIndexedFaceSet678->setCoordIndex(new int32_t[]{4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1}, 448);
SoIndexedFaceSet678->setCreaseAngle(3.14159);
SoIndexedFaceSet678->setTexCoordIndex(new int32_t[]{6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1}, 448);
SoCoordinate* SoCoordinate679 = new SoCoordinate();
SoCoordinate679->setPoint(new float[]{3.695,0.0098,2.529,5.081,0.0098,1.266,1.292,0.0098,2.988,1.434,0.0098,-2.463,3.584,0.0098,-1.677,4.793,0.0098,-0.4897,1.292,0.0098,2.988,0.0,0.0098,2.988,3.86,0.776,2.936,5.361,0.776,1.276,1.588,0.776,-2.498,1.36,0.776,3.192,3.752,0.776,-1.776,4.97,0.776,-0.6037,0.0,0.776,3.192,-3.584,0.0098,-1.677,-1.434,0.0098,-2.463,-1.588,0.776,-2.498,-3.752,0.776,-1.776,-4.793,0.0098,-0.4897,-4.97,0.776,-0.6037,-5.081,0.0098,1.266,-5.361,0.776,1.276,-1.292,0.0098,2.988,-1.36,0.776,3.192,-3.695,0.0098,2.529,-1.292,0.0098,2.988,-3.86,0.776,2.936,0.0,0.0098,-2.464,0.0,0.776,-2.506,3.599,-0.4771,2.338,1.272,-0.4771,2.783,0.0,-0.4771,2.783,-1.272,-0.4771,2.783,-3.599,-0.4771,2.338,-4.861,-0.4771,1.189,-4.602,-0.4771,-0.3904,-3.472,-0.4771,-1.499,-1.398,-0.4771,-2.258,0.0,-0.4771,-2.259,1.398,-0.4771,-2.258,3.472,-0.4771,-1.499,4.602,-0.4771,-0.3904,4.861,-0.4771,1.189,3.643,1.099,-1.596,1.555,1.099,-2.294,0.0,1.099,-2.302,-1.555,1.099,-2.294,-3.643,1.099,-1.596,-4.782,1.099,-0.4999,-5.14,1.099,1.216,-3.76,1.099,2.74,-1.35,1.099,2.987,0.0,1.099,2.987,1.35,1.099,2.987,3.76,1.099,2.74,5.14,1.099,1.216,4.782,1.099,-0.4999}, 174);
SoIndexedFaceSet678->setCoord(*SoCoordinate679);

SoTextureCoordinate* SoTextureCoordinate680 = new SoTextureCoordinate();
SoTextureCoordinate680->setPoint(new float[]{0.0206,0.3452,0.0903,0.3446,0.0903,0.3446,0.1491,0.3449,0.3629,0.3439,0.3608,0.3469,0.2175,0.3427,0.1838,0.3438,0.0206,0.3452,0.3619,0.3454,0.0206,0.3452,0.089,0.3604,0.1508,0.3559,0.3623,0.3532,0.3588,0.3561,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.2175,0.3427,0.3608,0.3469,0.3588,0.3561,0.2188,0.3538,0.1838,0.3438,0.1874,0.3541,0.1491,0.3449,0.1508,0.3559,0.0206,0.3452,0.0206,0.3452,0.0232,0.3561,0.0232,0.3546,0.0903,0.3446,0.0206,0.3452,0.0903,0.3446,0.089,0.3604,0.3623,0.3532,0.3629,0.3439,0.3619,0.3454,0.3608,0.3537,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541}, 136);
SoIndexedFaceSet678->setTexCoord(*SoTextureCoordinate680);

SoShape674->setGeometry(*SoIndexedFaceSet678);

SoTransform673->addChild(*SoShape674);

SoHAnimSegment672->addChild(*SoTransform673);

SoHAnimJoint671->addChildren(*SoHAnimSegment672);

SoHAnimJoint* SoHAnimJoint681 = new SoHAnimJoint();
SoHAnimJoint681->X3DNode::setName(QString("vt10"));
SoHAnimJoint681->setDEF(QString("hanim_vt10"));
SoHAnimJoint681->setCenter(new float[]{0.0,47.279999,-0.6127});
SoHAnimJoint681->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint681->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment682 = new SoHAnimSegment();
SoHAnimSegment682->X3DNode::setName(QString("t10"));
SoHAnimSegment682->setDEF(QString("hanim_t10"));
SoTransform* SoTransform683 = new SoTransform();
SoTransform683->setTranslation(new float[]{0.0,47.279999,-0.6127});
SoShape* SoShape684 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance685 = new SoVRMLAppearance();
SoMaterial* SoMaterial686 = new SoMaterial();
SoMaterial686->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance685->addChild(*SoMaterial686);

SoImageTexture* SoImageTexture687 = new SoImageTexture();
SoImageTexture687->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance685->addChild(*SoImageTexture687);

SoShape684->addChild(*SoVRMLAppearance685);

SoIndexedFaceSet* SoIndexedFaceSet688 = new SoIndexedFaceSet();
SoIndexedFaceSet688->setCoordIndex(new int32_t[]{11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1}, 432);
SoIndexedFaceSet688->setCreaseAngle(3.14159);
SoIndexedFaceSet688->setTexCoordIndex(new int32_t[]{15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1}, 432);
SoCoordinate* SoCoordinate689 = new SoCoordinate();
SoCoordinate689->setPoint(new float[]{3.86,0.0118,2.936,5.361,0.0118,1.276,1.588,0.0118,-2.498,1.36,0.0118,3.192,3.752,0.0118,-1.776,4.97,0.0118,-0.6037,1.418,0.6583,3.362,3.892,0.6583,-1.86,5.121,0.6583,-0.6992,3.987,0.6583,3.259,5.601,0.6583,1.285,1.717,0.6583,-2.528,0.0,0.6583,3.363,-1.588,0.0118,-2.498,-1.717,0.6583,-2.528,-3.892,0.6583,-1.86,-3.752,0.0118,-1.776,-5.121,0.6583,-0.6992,-4.97,0.0118,-0.6037,-5.601,0.6583,1.285,-5.361,0.0118,1.276,-1.36,0.0118,3.192,-1.418,0.6583,3.362,0.0,0.0118,3.192,-3.86,0.0118,2.936,-3.987,0.6583,3.259,0.0,0.0118,-2.506,0.0,0.6583,-2.543,1.558,-0.2996,-2.316,3.655,-0.2996,-1.616,4.803,-0.2996,-0.5114,5.164,-0.2996,1.223,3.771,-0.2996,2.762,1.351,-0.2996,3.01,0.0,-0.2996,3.01,-1.351,-0.2996,3.01,-3.771,-0.2996,2.762,-5.164,-0.2996,1.223,-4.803,-0.2996,-0.5114,-3.655,-0.2996,-1.616,-1.558,-0.2996,-2.316,0.0,-0.2996,-2.324,1.415,0.9368,3.18,3.898,0.9368,3.08,5.402,0.9368,1.24,4.956,0.9368,-0.6038,3.798,0.9368,-1.698,1.689,0.9368,-2.346,0.0,0.9368,-2.361,-1.689,0.9368,-2.346,-3.798,0.9368,-1.698,-4.956,0.9368,-0.6038,-5.402,0.9368,1.24,-3.898,0.9368,3.08,-1.415,0.9368,3.18,0.0,0.9368,3.18}, 168);
SoIndexedFaceSet688->setCoord(*SoCoordinate689);

SoTextureCoordinate* SoTextureCoordinate690 = new SoTextureCoordinate();
SoTextureCoordinate690->setPoint(new float[]{0.089,0.3604,0.1508,0.3559,0.3588,0.3561,0.3623,0.3532,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.3588,0.3561,0.3589,0.3648,0.2207,0.3633,0.2188,0.3538,0.1922,0.3628,0.1874,0.3541,0.1489,0.3665,0.1508,0.3559,0.0232,0.3561,0.0245,0.3617,0.0254,0.3626,0.0232,0.3546,0.089,0.3604,0.0859,0.3657,0.3617,0.3609,0.3623,0.3532,0.3608,0.3537,0.3616,0.3609,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626}, 128);
SoIndexedFaceSet688->setTexCoord(*SoTextureCoordinate690);

SoShape684->setGeometry(*SoIndexedFaceSet688);

SoTransform683->addChild(*SoShape684);

SoHAnimSegment682->addChild(*SoTransform683);

SoHAnimJoint681->addChildren(*SoHAnimSegment682);

SoHAnimJoint* SoHAnimJoint691 = new SoHAnimJoint();
SoHAnimJoint691->X3DNode::setName(QString("vt9"));
SoHAnimJoint691->setDEF(QString("hanim_vt9"));
SoHAnimJoint691->setCenter(new float[]{0.0,47.93,-0.6117});
SoHAnimJoint691->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint691->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment692 = new SoHAnimSegment();
SoHAnimSegment692->X3DNode::setName(QString("t9"));
SoHAnimSegment692->setDEF(QString("hanim_t9"));
SoTransform* SoTransform693 = new SoTransform();
SoTransform693->setTranslation(new float[]{0.0,47.93,-0.6117});
SoShape* SoShape694 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance695 = new SoVRMLAppearance();
SoMaterial* SoMaterial696 = new SoMaterial();
SoMaterial696->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance695->addChild(*SoMaterial696);

SoImageTexture* SoImageTexture697 = new SoImageTexture();
SoImageTexture697->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance695->addChild(*SoImageTexture697);

SoShape694->addChild(*SoVRMLAppearance695);

SoIndexedFaceSet* SoIndexedFaceSet698 = new SoIndexedFaceSet();
SoIndexedFaceSet698->setCoordIndex(new int32_t[]{7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1}, 432);
SoIndexedFaceSet698->setCreaseAngle(3.14159);
SoIndexedFaceSet698->setTexCoordIndex(new int32_t[]{9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1}, 432);
SoCoordinate* SoCoordinate699 = new SoCoordinate();
SoCoordinate699->setPoint(new float[]{1.418,0.0059,3.362,3.892,0.0059,-1.86,5.121,0.0059,-0.6992,3.987,0.0059,3.259,5.601,0.0059,1.285,1.717,0.0059,-2.528,0.0,0.0059,3.363,1.476,0.6524,3.533,4.033,0.6524,-1.943,5.271,0.6524,-0.7947,4.115,0.6524,3.582,5.84,0.6524,1.295,1.845,0.6524,-2.558,0.0,0.6524,3.533,-1.476,0.6524,3.533,-1.418,0.0059,3.362,-3.987,0.0059,3.259,-4.115,0.6524,3.582,-1.845,0.6524,-2.558,-1.717,0.0059,-2.528,0.0,0.0059,-2.543,0.0,0.6524,-2.58,-5.601,0.0059,1.285,-5.84,0.6524,1.295,-4.033,0.6524,-1.943,-3.892,0.0059,-1.86,-5.271,0.6524,-0.7947,-5.121,0.0059,-0.6992,3.895,-0.2838,3.074,1.415,-0.2838,3.173,0.0,-0.2838,3.173,-1.415,-0.2838,3.173,-3.895,-0.2838,3.074,-5.395,-0.2838,1.239,-4.95,-0.2838,-0.6002,-3.794,-0.2838,-1.692,-1.688,-0.2838,-2.339,0.0,-0.2838,-2.354,1.688,-0.2838,-2.339,3.794,-0.2838,-1.692,4.95,-0.2838,-0.6002,5.395,-0.2838,1.239,3.937,0.9744,-1.774,1.818,0.9744,-2.369,0.0,0.9744,-2.391,-1.818,0.9744,-2.369,-3.937,0.9744,-1.774,-5.103,0.9744,-0.6928,-5.633,0.9744,1.255,-4.022,0.9744,3.391,-1.478,0.9744,3.344,0.0,0.9744,3.344,1.478,0.9744,3.344,4.022,0.9744,3.391,5.633,0.9744,1.255,5.103,0.9744,-0.6928}, 168);
SoIndexedFaceSet698->setCoord(*SoCoordinate699);

SoTextureCoordinate* SoTextureCoordinate700 = new SoTextureCoordinate();
SoTextureCoordinate700->setPoint(new float[]{0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.0258,0.3672,0.2227,0.3728,0.1969,0.3716,0.0826,0.3711,0.1469,0.377,0.3589,0.3735,0.3612,0.3687,0.0276,0.3706,0.3625,0.3682,0.0258,0.3672,0.0245,0.3617,0.0859,0.3657,0.0826,0.3711,0.3612,0.3687,0.3617,0.3609,0.3616,0.3609,0.3625,0.3682,0.1489,0.3665,0.1469,0.377,0.3589,0.3648,0.3589,0.3735,0.2227,0.3728,0.2207,0.3633,0.1969,0.3716,0.1922,0.3628,0.0276,0.3706,0.0254,0.3626,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.2227,0.3728,0.3589,0.3735,0.3625,0.3682,0.3612,0.3687,0.2227,0.3728,0.1969,0.3716,0.1469,0.377,0.0826,0.3711,0.0258,0.3672,0.0276,0.3706,0.0258,0.3672,0.0826,0.3711,0.1469,0.377,0.1969,0.3716}, 128);
SoIndexedFaceSet698->setTexCoord(*SoTextureCoordinate700);

SoShape694->setGeometry(*SoIndexedFaceSet698);

SoTransform693->addChild(*SoShape694);

SoHAnimSegment692->addChild(*SoTransform693);

SoHAnimJoint691->addChildren(*SoHAnimSegment692);

SoHAnimJoint* SoHAnimJoint701 = new SoHAnimJoint();
SoHAnimJoint701->X3DNode::setName(QString("vt8"));
SoHAnimJoint701->setDEF(QString("hanim_vt8"));
SoHAnimJoint701->setCenter(new float[]{0.0,48.580002,-0.6117});
SoHAnimJoint701->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint701->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment702 = new SoHAnimSegment();
SoHAnimSegment702->X3DNode::setName(QString("t8"));
SoHAnimSegment702->setDEF(QString("hanim_t8"));
SoTransform* SoTransform703 = new SoTransform();
SoTransform703->setTranslation(new float[]{0.0,48.580002,-0.6117});
SoShape* SoShape704 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance705 = new SoVRMLAppearance();
SoMaterial* SoMaterial706 = new SoMaterial();
SoMaterial706->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance705->addChild(*SoMaterial706);

SoImageTexture* SoImageTexture707 = new SoImageTexture();
SoImageTexture707->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance705->addChild(*SoImageTexture707);

SoShape704->addChild(*SoVRMLAppearance705);

SoIndexedFaceSet* SoIndexedFaceSet708 = new SoIndexedFaceSet();
SoIndexedFaceSet708->setCoordIndex(new int32_t[]{4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1}, 432);
SoIndexedFaceSet708->setCreaseAngle(3.14159);
SoIndexedFaceSet708->setTexCoordIndex(new int32_t[]{1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1}, 432);
SoCoordinate* SoCoordinate709 = new SoCoordinate();
SoCoordinate709->setPoint(new float[]{1.476,0.0001,3.533,4.033,0.0001,-1.943,5.271,0.0001,-0.7947,4.234,0.6936,3.898,1.538,0.6936,3.713,6.114,0.7245,1.306,1.987,0.7245,-2.592,4.188,0.7245,-2.037,5.442,0.7245,-0.9006,4.115,0.0001,3.582,5.84,0.0001,1.295,1.845,0.0001,-2.558,0.0,0.6936,3.713,-1.538,0.6936,3.713,-1.476,0.0001,3.533,-4.115,0.0001,3.582,-4.234,0.6936,3.898,-1.987,0.7245,-2.592,-1.845,0.0001,-2.558,0.0,0.0001,-2.58,0.0,0.7245,-2.622,-5.84,0.0001,1.295,-6.114,0.7245,1.306,-4.188,0.7245,-2.037,-4.033,0.0001,-1.943,-5.442,0.7245,-0.9006,-5.271,0.0001,-0.7947,0.0,0.0001,3.533,1.82,-0.2993,-2.38,3.943,-0.2993,-1.784,5.113,-0.2993,-0.6987,5.646,-0.2993,1.257,4.027,-0.2993,3.403,1.478,-0.2993,3.355,0.0,-0.2993,3.355,-1.478,-0.2993,3.355,-4.027,-0.2993,3.403,-5.646,-0.2993,1.257,-5.113,-0.2993,-0.6987,-3.943,-0.2993,-1.784,-1.82,-0.2993,-2.38,0.0,-0.2993,-2.402,0.0,1.036,3.535,1.544,1.036,3.534,4.148,1.036,3.713,5.917,1.036,1.273,5.286,1.036,-0.8017,4.102,1.036,-1.875,1.963,1.036,-2.414,0.0,1.036,-2.444,-1.963,1.036,-2.414,-4.102,1.036,-1.875,-5.286,1.036,-0.8017,-5.917,1.036,1.273,-4.148,1.036,3.713,-1.544,1.036,3.534}, 168);
SoIndexedFaceSet708->setCoord(*SoCoordinate709);

SoTextureCoordinate* SoTextureCoordinate710 = new SoTextureCoordinate();
SoTextureCoordinate710->setPoint(new float[]{0.0908,0.3999,0.0325,0.3879,0.0306,0.3835,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0802,0.3883,0.1575,0.3746,0.3637,0.3704,0.356,0.3713,0.3581,0.3683,0.0256,0.3731,0.0261,0.363,0.2218,0.3729,0.1941,0.3712,0.0325,0.3879,0.0256,0.3731,0.0802,0.3883,0.0908,0.3999,0.3589,0.3783,0.3637,0.3704,0.3581,0.3683,0.3561,0.3769,0.1575,0.3746,0.1568,0.3845,0.356,0.3713,0.3535,0.3812,0.2214,0.3832,0.2218,0.3729,0.1952,0.3809,0.1941,0.3712,0.0306,0.3835,0.0261,0.363,0.3637,0.3704,0.2218,0.3729,0.1941,0.3712,0.1575,0.3746,0.0802,0.3883,0.0256,0.3731,0.0261,0.363,0.0256,0.3731,0.0802,0.3883,0.1575,0.3746,0.1941,0.3712,0.2218,0.3729,0.356,0.3713,0.3581,0.3683,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999,0.0325,0.3879}, 128);
SoIndexedFaceSet708->setTexCoord(*SoTextureCoordinate710);

SoShape704->setGeometry(*SoIndexedFaceSet708);

SoTransform703->addChild(*SoShape704);

SoHAnimSegment702->addChild(*SoTransform703);

SoHAnimJoint701->addChildren(*SoHAnimSegment702);

SoHAnimJoint* SoHAnimJoint711 = new SoHAnimJoint();
SoHAnimJoint711->X3DNode::setName(QString("vt7"));
SoHAnimJoint711->setDEF(QString("hanim_vt7"));
SoHAnimJoint711->setCenter(new float[]{0.0,49.279999,-0.6117});
SoHAnimJoint711->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint711->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment712 = new SoHAnimSegment();
SoHAnimSegment712->X3DNode::setName(QString("t7"));
SoHAnimSegment712->setDEF(QString("hanim_t7"));
SoTransform* SoTransform713 = new SoTransform();
SoTransform713->setTranslation(new float[]{0.0,49.279999,-0.6117});
SoShape* SoShape714 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance715 = new SoVRMLAppearance();
SoMaterial* SoMaterial716 = new SoMaterial();
SoMaterial716->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance715->addChild(*SoMaterial716);

SoImageTexture* SoImageTexture717 = new SoImageTexture();
SoImageTexture717->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance715->addChild(*SoImageTexture717);

SoShape714->addChild(*SoVRMLAppearance715);

SoIndexedFaceSet* SoIndexedFaceSet718 = new SoIndexedFaceSet();
SoIndexedFaceSet718->setCoordIndex(new int32_t[]{0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1}, 432);
SoIndexedFaceSet718->setCreaseAngle(3.14159);
SoIndexedFaceSet718->setTexCoordIndex(new int32_t[]{3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1}, 432);
SoCoordinate* SoCoordinate719 = new SoCoordinate();
SoCoordinate719->setPoint(new float[]{6.285,0.5819,1.319,2.062,0.5819,-2.618,4.101,0.5819,3.729,4.29,0.5819,-2.105,5.572,0.5819,-0.9516,1.585,0.5819,3.822,4.234,0.0006,3.898,1.538,0.0006,3.713,6.114,0.0315,1.306,1.987,0.0315,-2.592,4.188,0.0315,-2.037,5.442,0.0315,-0.9006,-6.114,0.0315,1.306,-6.285,0.5819,1.319,-4.101,0.5819,3.729,-4.234,0.0006,3.898,-2.062,0.5819,-2.618,-1.987,0.0315,-2.592,0.0,0.0315,-2.622,0.0,0.5819,-2.665,-1.538,0.0006,3.713,-1.585,0.5819,3.822,0.0,0.5819,3.826,0.0,0.0006,3.713,-4.29,0.5819,-2.105,-4.188,0.0315,-2.037,-5.572,0.5819,-0.9516,-5.442,0.0315,-0.9006,2.035,0.9259,-2.406,0.0,0.9259,-2.453,-2.035,0.9259,-2.406,-4.189,0.9259,-1.911,-5.387,0.9259,-0.8326,-6.046,0.9259,1.267,-4.004,0.9259,3.52,-1.581,0.9259,3.609,0.0,0.9259,3.614,1.581,0.9259,3.609,4.004,0.9259,3.52,6.046,0.9259,1.267,5.387,0.9259,-0.8326,4.189,0.9259,-1.911,1.524,-0.369,3.422,0.0,-0.369,3.422,-1.524,-0.369,3.422,-4.074,-0.369,3.594,-5.798,-0.369,1.248,-5.183,-0.369,-0.7464,-4.029,-0.369,-1.779,-1.931,-0.369,-2.301,0.0,-0.369,-2.33,1.931,-0.369,-2.301,4.029,-0.369,-1.779,5.183,-0.369,-0.7464,5.798,-0.369,1.248,4.074,-0.369,3.594}, 168);
SoIndexedFaceSet718->setCoord(*SoCoordinate719);

SoTextureCoordinate* SoTextureCoordinate720 = new SoTextureCoordinate();
SoTextureCoordinate720->setPoint(new float[]{0.0437,0.4075,0.2185,0.3912,0.3484,0.3944,0.1518,0.3905,0.1902,0.3894,0.3503,0.3879,0.3505,0.3886,0.0427,0.408,0.0961,0.4138,0.0908,0.3999,0.0325,0.3879,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0306,0.3835,0.1568,0.3845,0.1518,0.3905,0.0961,0.4138,0.0908,0.3999,0.3503,0.3879,0.3589,0.3783,0.3561,0.3769,0.3505,0.3886,0.0325,0.3879,0.0437,0.4075,0.0427,0.408,0.0306,0.3835,0.3535,0.3812,0.3484,0.3944,0.2185,0.3912,0.2214,0.3832,0.1902,0.3894,0.1952,0.3809,0.3484,0.3944,0.3505,0.3886,0.3503,0.3879,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.0325,0.3879,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999}, 128);
SoIndexedFaceSet718->setTexCoord(*SoTextureCoordinate720);

SoShape714->setGeometry(*SoIndexedFaceSet718);

SoTransform713->addChild(*SoShape714);

SoHAnimSegment712->addChild(*SoTransform713);

SoHAnimJoint711->addChildren(*SoHAnimSegment712);

SoHAnimJoint* SoHAnimJoint721 = new SoHAnimJoint();
SoHAnimJoint721->X3DNode::setName(QString("vt6"));
SoHAnimJoint721->setDEF(QString("hanim_vt6"));
SoHAnimJoint721->setCenter(new float[]{0.0,49.849998,-0.6117});
SoHAnimJoint721->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint721->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment722 = new SoHAnimSegment();
SoHAnimSegment722->X3DNode::setName(QString("t6"));
SoHAnimSegment722->setDEF(QString("hanim_t6"));
SoTransform* SoTransform723 = new SoTransform();
SoTransform723->setTranslation(new float[]{0.0,49.849998,-0.6117});
SoShape* SoShape724 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance725 = new SoVRMLAppearance();
SoMaterial* SoMaterial726 = new SoMaterial();
SoMaterial726->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance725->addChild(*SoMaterial726);

SoImageTexture* SoImageTexture727 = new SoImageTexture();
SoImageTexture727->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance725->addChild(*SoImageTexture727);

SoShape724->addChild(*SoVRMLAppearance725);

SoIndexedFaceSet* SoIndexedFaceSet728 = new SoIndexedFaceSet();
SoIndexedFaceSet728->setCoordIndex(new int32_t[]{12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1}, 432);
SoIndexedFaceSet728->setCreaseAngle(3.14159);
SoIndexedFaceSet728->setTexCoordIndex(new int32_t[]{17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1}, 432);
SoCoordinate* SoCoordinate729 = new SoCoordinate();
SoCoordinate729->setPoint(new float[]{1.937,0.6896,-2.644,6.192,0.6897,1.374,5.738,0.6897,-0.7614,1.615,0.6897,3.729,4.273,0.6897,-2.169,3.945,0.6897,3.53,6.285,0.0041,1.319,2.062,0.0041,-2.618,0.0,0.0041,3.826,4.101,0.0041,3.729,4.29,0.0041,-2.105,5.572,0.0041,-0.9516,1.585,0.0041,3.822,-1.585,0.0041,3.822,-4.101,0.0041,3.729,-3.945,0.6897,3.53,-1.615,0.6897,3.729,-5.572,0.0041,-0.9516,-5.738,0.6897,-0.7614,-6.192,0.6897,1.374,-6.285,0.0041,1.319,-1.937,0.6896,-2.644,-2.062,0.0041,-2.618,0.0,0.0041,-2.665,0.0,0.6896,-2.735,0.0,0.6897,3.756,-4.29,0.0041,-2.105,-4.273,0.6897,-2.169,1.603,1.033,3.489,3.84,1.033,3.298,5.929,1.033,1.293,5.518,1.033,-0.6393,4.157,1.033,-1.947,1.907,1.033,-2.405,0.0,1.033,-2.494,-1.907,1.033,-2.405,-4.157,1.033,-1.947,-5.518,1.033,-0.6393,-5.929,1.033,1.293,-3.84,1.033,3.298,-1.603,1.033,3.489,0.0,1.033,3.516,0.0,-0.2313,-2.425,2.032,-0.2313,-2.378,4.176,-0.2313,-1.885,5.362,-0.2313,-0.8168,6.015,-0.2313,1.26,3.991,-0.2313,3.492,1.581,-0.2313,3.581,0.0,-0.2313,3.586,-1.581,-0.2313,3.581,-3.991,-0.2313,3.492,-6.015,-0.2313,1.26,-5.362,-0.2313,-0.8168,-4.176,-0.2313,-1.885,-2.032,-0.2313,-2.378}, 168);
SoIndexedFaceSet728->setCoord(*SoCoordinate729);

SoTextureCoordinate* SoTextureCoordinate730 = new SoTextureCoordinate();
SoTextureCoordinate730->setPoint(new float[]{0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.1518,0.3905,0.3506,0.3865,0.3484,0.3944,0.0427,0.408,0.0961,0.4138,0.3437,0.3934,0.2185,0.3912,0.1902,0.3894,0.0437,0.4075,0.0437,0.4075,0.0961,0.4138,0.1008,0.4259,0.055,0.4216,0.1902,0.3894,0.1843,0.4071,0.1528,0.4078,0.1518,0.3905,0.3364,0.4029,0.3506,0.3865,0.3437,0.3934,0.3325,0.4068,0.0482,0.4185,0.0427,0.408,0.2185,0.3912,0.221,0.4256,0.3484,0.3944,0.3061,0.4256,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.3437,0.3934,0.3506,0.3865,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.3484,0.3944}, 128);
SoIndexedFaceSet728->setTexCoord(*SoTextureCoordinate730);

SoShape724->setGeometry(*SoIndexedFaceSet728);

SoTransform723->addChild(*SoShape724);

SoHAnimSegment722->addChild(*SoTransform723);

SoHAnimJoint721->addChildren(*SoHAnimSegment722);

SoHAnimJoint* SoHAnimJoint731 = new SoHAnimJoint();
SoHAnimJoint731->X3DNode::setName(QString("vt5"));
SoHAnimJoint731->setDEF(QString("hanim_vt5"));
SoHAnimJoint731->setCenter(new float[]{0.0,50.540001,-0.6117});
SoHAnimJoint731->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint731->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment732 = new SoHAnimSegment();
SoHAnimSegment732->X3DNode::setName(QString("t5"));
SoHAnimSegment732->setDEF(QString("hanim_t5"));
SoTransform* SoTransform733 = new SoTransform();
SoTransform733->setTranslation(new float[]{0.0,50.540001,-0.6117});
SoShape* SoShape734 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance735 = new SoVRMLAppearance();
SoMaterial* SoMaterial736 = new SoMaterial();
SoMaterial736->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance735->addChild(*SoMaterial736);

SoImageTexture* SoImageTexture737 = new SoImageTexture();
SoImageTexture737->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance735->addChild(*SoImageTexture737);

SoShape734->addChild(*SoVRMLAppearance735);

SoIndexedFaceSet* SoIndexedFaceSet738 = new SoIndexedFaceSet();
SoIndexedFaceSet738->setCoordIndex(new int32_t[]{0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1}, 432);
SoIndexedFaceSet738->setCreaseAngle(3.14159);
SoIndexedFaceSet738->setTexCoordIndex(new int32_t[]{5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1}, 432);
SoCoordinate* SoCoordinate739 = new SoCoordinate();
SoCoordinate739->setPoint(new float[]{1.811,0.6855,-2.67,5.903,0.6856,-0.5713,3.788,0.6856,3.331,1.646,0.6856,3.637,4.256,0.6856,-2.233,6.098,0.6856,1.429,1.937,0.0,-2.644,6.192,0.0001,1.374,5.738,0.0001,-0.7614,1.615,0.0001,3.729,0.0,0.0001,3.756,4.273,0.0001,-2.169,3.945,0.0001,3.53,0.0,0.6855,-2.804,-1.811,0.6855,-2.67,-1.937,0.0,-2.644,0.0,0.0,-2.735,0.0,0.6856,3.687,-1.615,0.0001,3.729,-1.646,0.6856,3.637,-3.788,0.6856,3.331,-3.945,0.0001,3.53,-6.192,0.0001,1.374,-6.098,0.6856,1.429,-5.903,0.6856,-0.5713,-5.738,0.0001,-0.7614,-4.273,0.0001,-2.169,-4.256,0.6856,-2.233,1.621,1.052,3.355,3.67,1.052,3.062,5.802,1.052,1.306,5.631,1.052,-0.4437,4.118,1.052,-1.97,1.776,1.052,-2.389,0.0,1.052,-2.52,-1.776,1.052,-2.389,-4.118,1.052,-1.97,-5.631,1.052,-0.4437,-5.802,1.052,1.306,-3.67,1.052,3.062,-1.621,1.052,3.355,0.0,1.052,3.404,3.821,-0.3346,3.256,1.601,-0.3346,3.447,0.0,-0.3346,3.474,-1.601,-0.3346,3.447,-3.821,-0.3346,3.256,-5.882,-0.3346,1.279,-5.479,-0.3346,-0.6177,-4.136,-0.3346,-1.908,-1.902,-0.3347,-2.363,0.0,-0.3347,-2.451,1.902,-0.3347,-2.363,4.136,-0.3346,-1.908,5.479,-0.3346,-0.6177,5.882,-0.3346,1.279}, 168);
SoIndexedFaceSet738->setCoord(*SoCoordinate739);

SoTextureCoordinate* SoTextureCoordinate740 = new SoTextureCoordinate();
SoTextureCoordinate740->setPoint(new float[]{0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.1538,0.4251,0.1784,0.4249,0.3223,0.4192,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.3214,0.4203,0.3223,0.4192,0.3364,0.4029,0.3325,0.4068,0.0537,0.4289,0.0482,0.4185,0.055,0.4216,0.0663,0.4356,0.1055,0.438,0.1008,0.4259,0.1528,0.4078,0.1538,0.4251,0.1784,0.4249,0.1843,0.4071,0.221,0.4256,0.2236,0.46,0.3061,0.4256,0.2638,0.4568,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078}, 128);
SoIndexedFaceSet738->setTexCoord(*SoTextureCoordinate740);

SoShape734->setGeometry(*SoIndexedFaceSet738);

SoTransform733->addChild(*SoShape734);

SoHAnimSegment732->addChild(*SoTransform733);

SoHAnimJoint731->addChildren(*SoHAnimSegment732);

SoHAnimJoint* SoHAnimJoint741 = new SoHAnimJoint();
SoHAnimJoint741->X3DNode::setName(QString("vt4"));
SoHAnimJoint741->setDEF(QString("hanim_vt4"));
SoHAnimJoint741->setCenter(new float[]{0.0,51.220001,-0.6117});
SoHAnimJoint741->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint741->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment742 = new SoHAnimSegment();
SoHAnimSegment742->X3DNode::setName(QString("t4"));
SoHAnimSegment742->setDEF(QString("hanim_t4"));
SoTransform* SoTransform743 = new SoTransform();
SoTransform743->setTranslation(new float[]{0.0,51.220001,-0.6117});
SoShape* SoShape744 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance745 = new SoVRMLAppearance();
SoMaterial* SoMaterial746 = new SoMaterial();
SoMaterial746->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance745->addChild(*SoMaterial746);

SoImageTexture* SoImageTexture747 = new SoImageTexture();
SoImageTexture747->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance745->addChild(*SoImageTexture747);

SoShape744->addChild(*SoVRMLAppearance745);

SoIndexedFaceSet* SoIndexedFaceSet748 = new SoIndexedFaceSet();
SoIndexedFaceSet748->setCoordIndex(new int32_t[]{2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1}, 464);
SoIndexedFaceSet748->setCreaseAngle(3.14159);
SoIndexedFaceSet748->setTexCoordIndex(new int32_t[]{3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1}, 464);
SoCoordinate* SoCoordinate749 = new SoCoordinate();
SoCoordinate749->setPoint(new float[]{1.681,0.822,3.528,5.775,0.849,-0.9043,5.825,0.7894,1.521,3.585,0.9022,3.073,1.811,0.849,-2.505,4.284,0.849,-2.108,4.617,0.849,-2.072,1.811,0.0128,-2.67,5.903,0.0129,-0.5713,3.788,0.0129,3.331,1.646,0.0129,3.637,4.256,0.0129,-2.233,6.098,0.0129,1.429,-6.098,0.0129,1.429,-5.825,0.7894,1.521,-3.585,0.9022,3.073,-3.788,0.0129,3.331,-1.681,0.822,3.528,-1.646,0.0129,3.637,-1.811,0.0128,-2.67,0.0,0.0128,-2.804,0.0,0.849,-2.639,-1.811,0.849,-2.505,-4.256,0.0129,-2.233,-4.284,0.849,-2.108,0.0,0.822,3.616,0.0,0.0129,3.687,-4.617,0.849,-2.072,-5.775,0.849,-0.9043,-5.903,0.0129,-0.5713,3.461,1.375,2.795,5.523,1.375,1.367,5.479,1.375,-0.7788,4.48,1.375,-1.787,4.244,1.375,-1.812,1.776,1.375,-2.209,0.0,1.375,-2.34,-1.776,1.375,-2.209,-4.244,1.375,-1.812,-4.48,1.375,-1.787,-5.479,1.375,-0.7788,-5.523,1.375,1.367,-3.461,1.375,2.795,-1.638,1.375,3.231,0.0,1.375,3.317,1.638,1.375,3.231,3.663,-0.3222,3.047,1.62,-0.3222,3.339,0.0,-0.3222,3.388,-1.62,-0.3222,3.339,-3.663,-0.3222,3.047,-5.786,-0.3222,1.299,-5.616,-0.3222,-0.4366,-4.111,-0.3222,-1.955,-1.774,-0.3222,-2.373,0.0,-0.3222,-2.505,1.774,-0.3222,-2.373,4.111,-0.3222,-1.955,5.616,-0.3222,-0.4366,5.786,-0.3222,1.299}, 180);
SoIndexedFaceSet748->setCoord(*SoCoordinate749);

SoTextureCoordinate* SoTextureCoordinate750 = new SoTextureCoordinate();
SoTextureCoordinate750->setPoint(new float[]{0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.2633,0.457,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.3223,0.4192,0.2638,0.4568,0.1784,0.4249,0.1784,0.4249,0.1055,0.438,0.0663,0.4356,0.2236,0.46,0.3214,0.4203,0.1538,0.4251,0.0537,0.4289,0.1538,0.4251,0.1504,0.4433,0.1107,0.4532,0.1055,0.438,0.0777,0.4495,0.0663,0.4356,0.3223,0.4192,0.3214,0.4203,0.3214,0.4203,0.3222,0.4193,0.2236,0.46,0.2638,0.4568,0.2633,0.457,0.2198,0.4731,0.0639,0.4488,0.0537,0.4289,0.2144,0.4674,0.1846,0.4438,0.1784,0.4249,0.1784,0.4249,0.1107,0.4532,0.1504,0.4433,0.1846,0.4438,0.2144,0.4674,0.2198,0.4731,0.2633,0.457,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.0777,0.4495,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251}, 140);
SoIndexedFaceSet748->setTexCoord(*SoTextureCoordinate750);

SoShape744->setGeometry(*SoIndexedFaceSet748);

SoTransform743->addChild(*SoShape744);

SoHAnimSegment742->addChild(*SoTransform743);

SoHAnimJoint741->addChildren(*SoHAnimSegment742);

SoHAnimJoint* SoHAnimJoint751 = new SoHAnimJoint();
SoHAnimJoint751->X3DNode::setName(QString("vt3"));
SoHAnimJoint751->setDEF(QString("hanim_vt3"));
SoHAnimJoint751->setCenter(new float[]{0.0,52.040001,-0.6117});
SoHAnimJoint751->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint751->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment752 = new SoHAnimSegment();
SoHAnimSegment752->X3DNode::setName(QString("t3"));
SoHAnimSegment752->setDEF(QString("hanim_t3"));
SoTransform* SoTransform753 = new SoTransform();
SoTransform753->setTranslation(new float[]{0.0,52.040001,-0.6117});
SoShape* SoShape754 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance755 = new SoVRMLAppearance();
SoMaterial* SoMaterial756 = new SoMaterial();
SoMaterial756->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance755->addChild(*SoMaterial756);

SoImageTexture* SoImageTexture757 = new SoImageTexture();
SoImageTexture757->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance755->addChild(*SoImageTexture757);

SoShape754->addChild(*SoVRMLAppearance755);

SoIndexedFaceSet* SoIndexedFaceSet758 = new SoIndexedFaceSet();
SoIndexedFaceSet758->setCoordIndex(new int32_t[]{16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1}, 448);
SoIndexedFaceSet758->setCreaseAngle(3.14159);
SoIndexedFaceSet758->setTexCoordIndex(new int32_t[]{2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1}, 448);
SoCoordinate* SoCoordinate759 = new SoCoordinate();
SoCoordinate759->setPoint(new float[]{1.713,0.7435,3.428,5.378,1.242,1.672,4.324,1.242,-1.927,5.141,1.242,-1.839,5.589,1.242,-1.387,3.32,1.242,2.736,1.811,1.242,-2.266,1.593,1.064,4.098,1.681,0.002,3.528,5.775,0.029,-0.9043,5.825,-0.0306,1.521,3.585,0.0822,3.073,1.811,0.029,-2.505,4.284,0.029,-2.108,4.617,0.029,-2.072,0.0,0.002,3.616,0.0,0.3874,4.121,0.0,0.029,-2.639,0.0,1.242,-2.4,5.018,1.668,-1.583,4.292,1.668,-1.661,1.783,1.668,-2.0,1.521,1.668,3.814,3.175,1.668,2.51,5.121,1.668,1.504,5.314,1.668,-1.285,5.669,-0.44,1.408,3.545,-0.44,2.879,1.676,-0.44,3.326,0.0,-0.44,3.413,1.817,-0.44,-2.289,4.335,-0.44,-1.884,4.586,-0.44,-1.857,5.623,-0.44,-0.8114,-1.713,0.7435,3.428,-1.593,1.064,4.098,-1.681,0.002,3.528,-5.825,-0.0306,1.521,-5.378,1.242,1.672,-3.32,1.242,2.736,-3.585,0.0822,3.073,-1.811,1.242,-2.266,-1.811,0.029,-2.505,-5.141,1.242,-1.839,-4.617,0.029,-2.072,-4.284,0.029,-2.108,-4.324,1.242,-1.927,-5.589,1.242,-1.387,-5.775,0.029,-0.9043,0.0,1.15,3.82,-4.292,1.668,-1.661,-5.018,1.668,-1.583,-1.783,1.668,-2.0,0.0,1.668,-2.132,-3.175,1.668,2.51,-1.521,1.668,3.814,-5.121,1.668,1.504,-5.314,1.668,-1.285,-3.545,-0.44,2.879,-5.669,-0.44,1.408,-1.676,-0.44,3.326,-1.817,-0.44,-2.289,0.0,-0.44,-2.423,-4.335,-0.44,-1.884,-4.586,-0.44,-1.857,-5.623,-0.44,-0.8114}, 198);
SoIndexedFaceSet758->setCoord(*SoCoordinate759);

SoTextureCoordinate* SoTextureCoordinate760 = new SoTextureCoordinate();
SoTextureCoordinate760->setPoint(new float[]{0.0763,0.4945,0.0877,0.4617,0.0525,0.4715,0.0399,0.5407,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.3222,0.4193,0.2633,0.457,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.2035,0.4795,0.2169,0.492,0.2635,0.4569,0.3214,0.4203,0.0763,0.4945,0.1178,0.4708,0.1491,0.4682,0.1915,0.4696,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.0639,0.4488,0.0877,0.4617,0.0763,0.4945,0.0525,0.4715,0.0777,0.4495,0.1504,0.4433,0.1491,0.4682,0.1178,0.4708,0.1107,0.4532,0.3214,0.4203,0.3214,0.4203,0.3223,0.4193,0.3222,0.4193,0.2035,0.4795,0.2144,0.4674,0.2198,0.4731,0.2169,0.492,0.1915,0.4696,0.1846,0.4438,0.2633,0.457,0.2635,0.4569,0.0399,0.5407,0.2169,0.492,0.2035,0.4795,0.2635,0.4569,0.3214,0.4203,0.1178,0.4708,0.0763,0.4945,0.1491,0.4682,0.1915,0.4696,0.1107,0.4532,0.1504,0.4433,0.0777,0.4495,0.0639,0.4488,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438}, 156);
SoIndexedFaceSet758->setTexCoord(*SoTextureCoordinate760);

SoShape754->setGeometry(*SoIndexedFaceSet758);

SoTransform753->addChild(*SoShape754);

SoHAnimSegment752->addChild(*SoTransform753);

SoHAnimJoint751->addChildren(*SoHAnimSegment752);

SoHAnimJoint* SoHAnimJoint761 = new SoHAnimJoint();
SoHAnimJoint761->X3DNode::setName(QString("vt2"));
SoHAnimJoint761->setDEF(QString("hanim_vt2"));
SoHAnimJoint761->setCenter(new float[]{0.0,53.139999,-0.6127});
SoHAnimJoint761->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint761->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment762 = new SoHAnimSegment();
SoHAnimSegment762->X3DNode::setName(QString("t2"));
SoHAnimSegment762->setDEF(QString("hanim_t2"));
SoTransform* SoTransform763 = new SoTransform();
SoTransform763->setTranslation(new float[]{0.0,53.139999,-0.6127});
SoShape* SoShape764 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance765 = new SoVRMLAppearance();
SoMaterial* SoMaterial766 = new SoMaterial();
SoMaterial766->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance765->addChild(*SoMaterial766);

SoImageTexture* SoImageTexture767 = new SoImageTexture();
SoImageTexture767->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance765->addChild(*SoImageTexture767);

SoShape764->addChild(*SoVRMLAppearance765);

SoIndexedFaceSet* SoIndexedFaceSet768 = new SoIndexedFaceSet();
SoIndexedFaceSet768->setCoordIndex(new int32_t[]{1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1}, 440);
SoIndexedFaceSet768->setCreaseAngle(3.14159);
SoIndexedFaceSet768->setTexCoordIndex(new int32_t[]{0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1}, 440);
SoCoordinate* SoCoordinate769 = new SoCoordinate();
SoCoordinate769->setPoint(new float[]{3.131,0.4823,3.66,1.373,0.5334,3.428,1.38,0.5334,3.897,0.0,0.9032,-2.25,0.0,-0.0071,3.661,2.043,1.067,3.089,5.086,0.9718,1.771,2.245,1.223,3.581,1.811,0.9032,-2.116,5.472,0.9071,-1.692,4.349,0.906,-1.813,3.805,1.161,2.723,1.182,1.067,2.765,5.378,0.1425,1.672,4.324,0.1425,-1.927,5.141,0.1425,-1.839,5.589,0.1425,-1.387,3.32,0.1425,2.736,1.811,0.1425,-2.266,1.593,-0.036,4.098,0.0,0.0508,3.82,0.0,0.1425,-2.4,4.884,1.323,1.266,4.971,1.271,-1.4,4.325,1.271,-1.641,1.791,1.268,-1.912,4.298,-0.4521,-1.715,5.043,-0.4521,-1.635,5.369,-0.4521,-1.306,5.173,-0.4521,1.538,3.204,-0.4521,2.555,1.535,-0.4521,2.956,1.789,-0.4521,-2.054,-1.373,0.5334,3.428,-2.043,1.067,3.089,-1.182,1.067,2.765,-1.593,-0.036,4.098,-3.131,0.4823,3.66,-2.245,1.223,3.581,-1.38,0.5334,3.897,-3.805,1.161,2.723,-3.32,0.1425,2.736,-5.086,0.9718,1.771,-4.349,0.906,-1.813,-5.472,0.9071,-1.692,-5.141,0.1425,-1.839,-4.324,0.1425,-1.927,-5.589,0.1425,-1.387,-1.811,0.1425,-2.266,-1.811,0.9032,-2.116,-5.378,0.1425,1.672,0.0,1.067,2.596,-4.971,1.271,-1.4,-4.884,1.323,1.266,-4.325,1.271,-1.641,-1.791,1.268,-1.912,0.0,1.268,-2.03,-5.043,-0.4521,-1.635,-4.298,-0.4521,-1.715,-5.369,-0.4521,-1.306,-5.173,-0.4521,1.538,-3.204,-0.4521,2.555,-1.535,-0.4521,2.956,0.0,-0.4521,3.603,-1.789,-0.4521,-2.054,0.0,-0.4521,-2.186}, 198);
SoIndexedFaceSet768->setCoord(*SoCoordinate769);

SoTextureCoordinate* SoTextureCoordinate770 = new SoTextureCoordinate();
SoTextureCoordinate770->setPoint(new float[]{0.4473,0.6921,0.4449,0.6914,0.4513,0.6918,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.0786,0.5849,0.0516,0.5759,0.1474,0.4856,0.1963,0.4863,0.0346,0.5664,0.3214,0.4203,0.3223,0.4192,0.2638,0.4568,0.2146,0.5039,0.1227,0.5144,0.4468,0.6898,0.4495,0.6881,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0763,0.4945,0.0399,0.5407,0.1474,0.4856,0.1963,0.4863,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3214,0.4203,0.3223,0.4193,0.4473,0.6921,0.4449,0.6914,0.4468,0.6898,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1227,0.5144,0.0786,0.5849,0.0516,0.5759,0.1178,0.4708,0.1474,0.4856,0.0346,0.5664,0.0399,0.5407,0.2146,0.5039,0.1963,0.4863,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.2635,0.4569,0.2638,0.4568,0.1491,0.4682,0.3214,0.4203,0.3214,0.4203,0.3223,0.4192,0.3223,0.4193,0.4495,0.6881,0.4513,0.6918,0.1963,0.4863,0.1474,0.4856,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3223,0.4193,0.3214,0.4203}, 168);
SoIndexedFaceSet768->setTexCoord(*SoTextureCoordinate770);

SoShape764->setGeometry(*SoIndexedFaceSet768);

SoTransform763->addChild(*SoShape764);

SoHAnimSegment762->addChild(*SoTransform763);

SoHAnimJoint761->addChildren(*SoHAnimSegment762);

SoHAnimJoint* SoHAnimJoint771 = new SoHAnimJoint();
SoHAnimJoint771->X3DNode::setName(QString("vt1"));
SoHAnimJoint771->setDEF(QString("hanim_vt1"));
SoHAnimJoint771->setCenter(new float[]{0.0,54.200001,-0.6117});
SoHAnimJoint771->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint771->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment772 = new SoHAnimSegment();
SoHAnimSegment772->X3DNode::setName(QString("t1"));
SoHAnimSegment772->setDEF(QString("hanim_t1"));
SoTransform* SoTransform773 = new SoTransform();
SoTransform773->setTranslation(new float[]{0.0,54.200001,-0.6117});
SoShape* SoShape774 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance775 = new SoVRMLAppearance();
SoMaterial* SoMaterial776 = new SoMaterial();
SoMaterial776->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance775->addChild(*SoMaterial776);

SoImageTexture* SoImageTexture777 = new SoImageTexture();
SoImageTexture777->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance775->addChild(*SoImageTexture777);

SoShape774->addChild(*SoVRMLAppearance775);

SoIndexedFaceSet* SoIndexedFaceSet778 = new SoIndexedFaceSet();
SoIndexedFaceSet778->setCoordIndex(new int32_t[]{1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1}, 720);
SoIndexedFaceSet778->setCreaseAngle(3.14159);
SoIndexedFaceSet778->setTexCoordIndex(new int32_t[]{14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1}, 720);
SoCoordinate* SoCoordinate779 = new SoCoordinate();
SoCoordinate779->setPoint(new float[]{1.47,1.71,-1.15,2.016,1.688,0.0414,2.914,1.242,0.0931,3.187,0.3754,1.303,0.7806,1.128,1.368,1.573,1.389,0.8702,2.043,0.0045,3.089,2.245,0.1604,3.581,5.472,-0.1553,-1.692,3.805,0.0984,2.723,1.182,0.0045,2.765,0.0,0.0045,2.596,0.0,1.333,-0.0527,2.599,2.142,-1.646,0.9629,2.166,-3.392,2.035,2.193,-3.055,3.439,2.077,0.1272,3.953,1.215,-2.467,5.073,1.55,0.1272,4.655,0.2739,-2.02,1.032,-0.6843,-4.667,0.0,-0.6754,-4.802,2.39,-0.2981,-4.154,1.677,-4.028,-3.387,4.12,-2.512,-3.272,0.0,-3.532,-2.804,0.0,1.519,-1.61,2.982,1.02,1.941,4.42,0.7184,1.865,5.602,0.5099,-0.0537,1.811,-3.383,-2.67,1.811,-0.1592,-2.116,1.833,-2.424,-2.283,4.241,-2.424,-2.283,4.225,-0.1553,-1.692,0.6928,1.497,-1.503,-2.914,1.242,0.0931,-2.016,1.688,0.0414,-1.573,1.389,0.8702,-2.043,0.0045,3.089,-2.245,0.1604,3.581,-2.982,1.02,1.941,-0.7806,1.128,1.368,0.0,1.119,1.49,-1.182,0.0045,2.765,-0.6928,1.497,-1.503,-5.602,0.5099,-0.0537,-3.805,0.0984,2.723,-0.9629,2.166,-3.392,0.0,2.143,-3.557,-2.035,2.193,-3.055,-1.47,1.71,-1.15,-5.073,1.55,0.1272,-4.655,0.2739,-2.02,-3.953,1.215,-2.467,-3.439,2.077,0.1272,-4.42,0.7184,1.865,-2.599,2.142,-1.646,-3.187,0.3754,1.303,-5.472,-0.1553,-1.692,-1.677,-4.028,-3.387,0.0,-4.35,-3.506,-1.032,-0.6843,-4.667,-4.12,-2.512,-3.272,-2.39,-0.2981,-4.154,-1.811,-3.383,-2.67,-4.241,-2.424,-2.283,-1.811,-0.1592,-2.116,0.0,-0.1592,-2.25,0.0,-2.424,-2.283,-1.833,-2.424,-2.283,-4.225,-0.1553,-1.692,5.086,-0.0906,1.771,-5.086,-0.0906,1.771,2.337,-0.4422,3.448,2.182,-0.4422,3.182,1.228,-0.4422,2.736,0.0,-0.4422,2.56,-1.228,-0.4422,2.736,-2.182,-0.4422,3.182,-2.337,-0.4422,3.448,-3.706,-0.4422,2.653,-4.913,-0.4422,1.734,-5.268,-0.4422,-1.51,-4.209,-0.4422,-1.51,-1.789,-0.4422,-1.935,0.0,-0.4422,-2.068,1.789,-0.4422,-1.935,4.209,-0.4422,-1.51,5.268,-0.4422,-1.51,4.913,-0.4422,1.734,3.706,-0.4422,2.653}, 276);
SoIndexedFaceSet778->setCoord(*SoCoordinate779);

SoTextureCoordinate* SoTextureCoordinate780 = new SoTextureCoordinate();
SoTextureCoordinate780->setPoint(new float[]{0.4416,0.6747,0.4535,0.6485,0.4483,0.6438,0.4499,0.6371,0.4594,0.6763,0.4399,0.6472,0.4645,0.6783,0.4385,0.6236,0.4279,0.6258,0.1412,0.5207,0.1108,0.5655,0.1073,0.5839,0.1708,0.4854,0.4376,0.6345,0.4528,0.6648,0.4548,0.6714,0.4459,0.6652,0.4669,0.6678,0.0786,0.5849,0.4476,0.6884,0.1474,0.4856,0.0865,0.5614,0.1963,0.4863,0.1227,0.5144,0.4539,0.6879,0.4621,0.6889,0.2661,0.5914,0.3505,0.5919,0.241,0.592,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.2067,0.5908,0.2708,0.4736,0.347,0.4317,0.3616,0.5328,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.3477,0.431,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3477,0.431,0.3511,0.5932,0.3206,0.4193,0.2505,0.5754,0.3554,0.5911,0.2112,0.5805,0.1632,0.5887,0.1073,0.5839,0.1474,0.4856,0.1108,0.5655,0.1412,0.5207,0.1708,0.4854,0.1963,0.4863,0.3223,0.4192,0.2638,0.4568,0.3206,0.4193,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.2252,0.4828,0.4337,0.6239,0.4689,0.6806,0.4689,0.6702,0.4627,0.667,0.4583,0.6722,0.4578,0.6906,0.1073,0.5839,0.0786,0.5849,0.0865,0.5614,0.1108,0.5655,0.4514,0.6379,0.4463,0.6454,0.4498,0.6514,0.4521,0.6748,0.4466,0.6744,0.4444,0.685,0.4523,0.6875,0.4395,0.6457,0.4393,0.633,0.4295,0.6275,0.4284,0.6322,0.4488,0.6639,0.1708,0.4854,0.1412,0.5207,0.1227,0.5144,0.1963,0.4863,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.1412,0.5207,0.1108,0.5655,0.2067,0.5908,0.1632,0.5887,0.1073,0.5839,0.1708,0.4854,0.1963,0.4863,0.1474,0.4856,0.3477,0.431,0.347,0.4317,0.3616,0.5328,0.3623,0.5333,0.238,0.493,0.2708,0.4736,0.2733,0.5359,0.249,0.5451,0.3505,0.5919,0.3511,0.5932,0.3623,0.5333,0.3223,0.4192,0.3206,0.4193,0.3477,0.431,0.2252,0.4828,0.2638,0.4568,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.1963,0.4863,0.3206,0.4193,0.1474,0.4856,0.4323,0.622,0.0865,0.5614,0.0786,0.5849,0.4539,0.6879,0.4621,0.6889,0.4523,0.6875,0.4578,0.6906,0.0865,0.5614,0.1227,0.5144,0.1474,0.4856,0.1474,0.4856,0.1227,0.5144,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1999,0.4849,0.1421,0.507,0.1227,0.5144}, 304);
SoIndexedFaceSet778->setTexCoord(*SoTextureCoordinate780);

SoShape774->setGeometry(*SoIndexedFaceSet778);

SoTransform773->addChild(*SoShape774);

SoHAnimSegment772->addChild(*SoTransform773);

SoHAnimJoint771->addChildren(*SoHAnimSegment772);

SoHAnimJoint* SoHAnimJoint781 = new SoHAnimJoint();
SoHAnimJoint781->X3DNode::setName(QString("vc7"));
SoHAnimJoint781->setDEF(QString("hanim_vc7"));
SoHAnimJoint781->setCenter(new float[]{0.0,55.349998,-0.6695});
SoHAnimJoint781->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint781->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment782 = new SoHAnimSegment();
SoHAnimSegment782->X3DNode::setName(QString("c7"));
SoHAnimSegment782->setDEF(QString("hanim_c7"));
SoTransform* SoTransform783 = new SoTransform();
SoTransform783->setTranslation(new float[]{0.0,55.349998,-0.6695});
SoShape* SoShape784 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance785 = new SoVRMLAppearance();
SoMaterial* SoMaterial786 = new SoMaterial();
SoMaterial786->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance785->addChild(*SoMaterial786);

SoImageTexture* SoImageTexture787 = new SoImageTexture();
SoImageTexture787->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance785->addChild(*SoImageTexture787);

SoShape784->addChild(*SoVRMLAppearance785);

SoIndexedFaceSet* SoIndexedFaceSet788 = new SoIndexedFaceSet();
SoIndexedFaceSet788->setCoordIndex(new int32_t[]{5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1}, 368);
SoIndexedFaceSet788->setCreaseAngle(3.14159);
SoIndexedFaceSet788->setTexCoordIndex(new int32_t[]{5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1}, 368);
SoCoordinate* SoCoordinate789 = new SoCoordinate();
SoCoordinate789->setPoint(new float[]{0.5369,0.1071,-1.124,0.0,0.1694,-1.195,1.139,0.1756,-0.8504,1.562,0.1474,0.0729,1.219,-0.0249,0.7152,0.0,-0.3558,1.195,0.605,-0.345,1.101,-0.5369,0.1071,-1.124,-1.139,0.1755,-0.8504,-1.562,0.1474,0.0729,-1.219,-0.0249,0.7153,-0.605,-0.345,1.101,0.0,-0.711,-1.028,0.4943,-0.7203,-0.9649,0.999,-0.7546,-0.733,1.342,-0.8648,0.0135,1.076,-0.9372,0.5038,0.5328,-0.9856,0.832,0.0,-0.9977,0.9139,-0.5328,-0.9856,0.832,-1.076,-0.9372,0.5038,-1.342,-0.8648,0.0136,-0.999,-0.7546,-0.733,-0.4943,-0.7203,-0.9649,0.5369,0.5357,-1.124,1.139,0.5357,-0.8504,1.562,0.5357,0.0729,1.219,0.5357,0.7153,0.0,0.5357,1.195,-0.605,0.5357,1.101,-1.139,0.5357,-0.8504,-1.562,0.5357,0.0729,0.0,0.5357,-1.195,0.605,0.5357,1.101,-0.5369,0.5357,-1.124,-1.219,0.5357,0.7153,0.4947,0.7335,-0.9348,0.0,0.7335,-1.0,-0.4947,0.7335,-0.9348,-1.008,0.7335,-0.7016,-1.361,0.7335,0.069,-1.091,0.7335,0.5735,-0.5462,0.7335,0.9162,0.0,0.7335,1.001,0.5462,0.7335,0.9162,1.091,0.7335,0.5735,1.361,0.7335,0.0689,1.008,0.7335,-0.7016}, 144);
SoIndexedFaceSet788->setCoord(*SoCoordinate789);

SoTextureCoordinate* SoTextureCoordinate790 = new SoTextureCoordinate();
SoTextureCoordinate790->setPoint(new float[]{0.3995,0.6285,0.3906,0.6293,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.3906,0.6224,0.4006,0.6225,0.3818,0.6285,0.3719,0.632,0.3649,0.6316,0.3706,0.6267,0.3807,0.6225,0.3906,0.6293,0.3995,0.6285,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.4006,0.6225,0.3906,0.6224,0.3807,0.6225,0.3706,0.6267,0.3649,0.6316,0.3719,0.632,0.3818,0.6285,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6534,0.3906,0.6538,0.3818,0.6534,0.3719,0.6549,0.3649,0.6547,0.3706,0.6527,0.3807,0.6518,0.3906,0.6475,0.4006,0.6518,0.4107,0.6527,0.4164,0.6547,0.4094,0.6549}, 96);
SoIndexedFaceSet788->setTexCoord(*SoTextureCoordinate790);

SoShape784->setGeometry(*SoIndexedFaceSet788);

SoTransform783->addChild(*SoShape784);

SoHAnimSegment782->addChild(*SoTransform783);

SoHAnimJoint781->addChildren(*SoHAnimSegment782);

SoHAnimJoint* SoHAnimJoint791 = new SoHAnimJoint();
SoHAnimJoint791->X3DNode::setName(QString("vc6"));
SoHAnimJoint791->setDEF(QString("hanim_vc6"));
SoHAnimJoint791->setCenter(new float[]{0.0,55.889999,-0.6695});
SoHAnimJoint791->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint791->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment792 = new SoHAnimSegment();
SoHAnimSegment792->X3DNode::setName(QString("c6"));
SoHAnimSegment792->setDEF(QString("hanim_c6"));
SoTransform* SoTransform793 = new SoTransform();
SoTransform793->setTranslation(new float[]{0.0,55.889999,-0.6695});
SoShape* SoShape794 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance795 = new SoVRMLAppearance();
SoMaterial* SoMaterial796 = new SoMaterial();
SoMaterial796->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance795->addChild(*SoMaterial796);

SoImageTexture* SoImageTexture797 = new SoImageTexture();
SoImageTexture797->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance795->addChild(*SoImageTexture797);

SoShape794->addChild(*SoVRMLAppearance795);

SoIndexedFaceSet* SoIndexedFaceSet798 = new SoIndexedFaceSet();
SoIndexedFaceSet798->setCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet798->setCreaseAngle(3.14159);
SoIndexedFaceSet798->setTexCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoCoordinate* SoCoordinate799 = new SoCoordinate();
SoCoordinate799->setPoint(new float[]{0.5369,0.5581,-1.124,1.139,0.5581,-0.8504,1.562,0.5581,0.0729,1.219,0.5581,0.7153,0.0,0.5581,1.195,-0.605,0.5581,1.101,-1.139,0.5581,-0.8504,-1.562,0.5581,0.0729,0.0,0.5581,-1.195,0.605,0.5581,1.101,-0.5369,0.5581,-1.124,-1.219,0.5581,0.7153,0.5369,0.0038,-1.124,1.139,0.0038,-0.8504,1.562,0.0038,0.0729,1.219,0.0038,0.7153,0.0,0.0038,1.195,-0.605,0.0038,1.101,-1.139,0.0038,-0.8504,-1.562,0.0038,0.0729,0.0,0.0038,-1.195,0.605,0.0038,1.101,-0.5369,0.0038,-1.124,-1.219,0.0038,0.7153,0.4947,0.756,-0.9348,0.0,0.756,-1.0,-0.4947,0.756,-0.9348,-1.008,0.756,-0.7016,-1.361,0.756,0.069,-1.091,0.756,0.5735,-0.5462,0.756,0.9162,0.0,0.756,1.001,0.5462,0.756,0.9162,1.091,0.756,0.5735,1.361,0.756,0.069,1.008,0.756,-0.7016,0.0,-0.2355,-1.0,0.4947,-0.2355,-0.9348,1.008,-0.2355,-0.7016,1.361,-0.2355,0.0689,1.091,-0.2355,0.5735,0.5462,-0.2355,0.9162,0.0,-0.2355,1.001,-0.5462,-0.2355,0.9162,-1.091,-0.2355,0.5735,-1.361,-0.2355,0.069,-1.008,-0.2355,-0.7016,-0.4947,-0.2355,-0.9348}, 144);
SoIndexedFaceSet798->setCoord(*SoCoordinate799);

SoTextureCoordinate* SoTextureCoordinate800 = new SoTextureCoordinate();
SoTextureCoordinate800->setPoint(new float[]{0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6565,0.3906,0.6568,0.3818,0.6565,0.3719,0.6578,0.3649,0.6576,0.3706,0.6559,0.3807,0.6555,0.3906,0.6507,0.4006,0.6555,0.4107,0.6559,0.4164,0.6576,0.4094,0.6578,0.3906,0.6538,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.4006,0.6518,0.3906,0.6475,0.3807,0.6518,0.3706,0.6527,0.3649,0.6547,0.3719,0.6549,0.3818,0.6534}, 96);
SoIndexedFaceSet798->setTexCoord(*SoTextureCoordinate800);

SoShape794->setGeometry(*SoIndexedFaceSet798);

SoTransform793->addChild(*SoShape794);

SoHAnimSegment792->addChild(*SoTransform793);

SoHAnimJoint791->addChildren(*SoHAnimSegment792);

SoHAnimJoint* SoHAnimJoint801 = new SoHAnimJoint();
SoHAnimJoint801->X3DNode::setName(QString("vc5"));
SoHAnimJoint801->setDEF(QString("hanim_vc5"));
SoHAnimJoint801->setCenter(new float[]{0.0,56.439999,-0.6695});
SoHAnimJoint801->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint801->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment802 = new SoHAnimSegment();
SoHAnimSegment802->X3DNode::setName(QString("c5"));
SoHAnimSegment802->setDEF(QString("hanim_c5"));
SoTransform* SoTransform803 = new SoTransform();
SoTransform803->setTranslation(new float[]{0.0,56.439999,-0.6695});
SoShape* SoShape804 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance805 = new SoVRMLAppearance();
SoMaterial* SoMaterial806 = new SoMaterial();
SoMaterial806->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance805->addChild(*SoMaterial806);

SoImageTexture* SoImageTexture807 = new SoImageTexture();
SoImageTexture807->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance805->addChild(*SoImageTexture807);

SoShape804->addChild(*SoVRMLAppearance805);

SoIndexedFaceSet* SoIndexedFaceSet808 = new SoIndexedFaceSet();
SoIndexedFaceSet808->setCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet808->setCreaseAngle(3.14159);
SoIndexedFaceSet808->setTexCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoCoordinate* SoCoordinate809 = new SoCoordinate();
SoCoordinate809->setPoint(new float[]{0.5369,0.5456,-1.124,1.139,0.5456,-0.8504,1.562,0.5456,0.0729,1.219,0.5456,0.7153,0.0,0.5456,1.195,-0.605,0.5456,1.101,-1.139,0.5456,-0.8504,-1.562,0.5456,0.0729,0.0,0.5456,-1.195,0.605,0.5456,1.101,-0.5369,0.5456,-1.124,-1.219,0.5456,0.7153,0.5369,0.0012,-1.124,1.139,0.0012,-0.8504,1.562,0.0012,0.0729,1.219,0.0012,0.7153,0.0,0.0012,1.195,-0.605,0.0012,1.101,-1.139,0.0012,-0.8504,-1.562,0.0012,0.0729,0.0,0.0012,-1.195,0.605,0.0012,1.101,-0.5369,0.0012,-1.124,-1.219,0.0012,0.7153,0.4947,0.7434,-0.9348,0.0,0.7434,-1.0,-0.4947,0.7434,-0.9348,-1.008,0.7434,-0.7016,-1.361,0.7434,0.069,-1.091,0.7434,0.5735,-0.5462,0.7434,0.9162,0.0,0.7434,1.001,0.5462,0.7434,0.9162,1.091,0.7434,0.5735,1.361,0.7434,0.069,1.008,0.7434,-0.7016,0.0,-0.2282,-1.0,0.4947,-0.2282,-0.9348,1.008,-0.2282,-0.7016,1.361,-0.2282,0.069,1.091,-0.2282,0.5735,0.5462,-0.2282,0.9162,0.0,-0.2282,1.001,-0.5462,-0.2282,0.9162,-1.091,-0.2282,0.5735,-1.361,-0.2282,0.069,-1.008,-0.2282,-0.7016,-0.4947,-0.2282,-0.9348}, 144);
SoIndexedFaceSet808->setCoord(*SoCoordinate809);

SoTextureCoordinate* SoTextureCoordinate810 = new SoTextureCoordinate();
SoTextureCoordinate810->setPoint(new float[]{0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6596,0.3906,0.6599,0.3818,0.6596,0.3719,0.6606,0.3649,0.6605,0.3706,0.6591,0.3807,0.6592,0.3906,0.6538,0.4006,0.6592,0.4107,0.6591,0.4164,0.6605,0.4094,0.6606,0.3906,0.6568,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.4006,0.6555,0.3906,0.6507,0.3807,0.6555,0.3706,0.6559,0.3649,0.6576,0.3719,0.6578,0.3818,0.6565}, 96);
SoIndexedFaceSet808->setTexCoord(*SoTextureCoordinate810);

SoShape804->setGeometry(*SoIndexedFaceSet808);

SoTransform803->addChild(*SoShape804);

SoHAnimSegment802->addChild(*SoTransform803);

SoHAnimJoint801->addChildren(*SoHAnimSegment802);

SoHAnimJoint* SoHAnimJoint811 = new SoHAnimJoint();
SoHAnimJoint811->X3DNode::setName(QString("vc4"));
SoHAnimJoint811->setDEF(QString("hanim_vc4"));
SoHAnimJoint811->setCenter(new float[]{0.0,56.990002,-0.6695});
SoHAnimJoint811->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint811->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment812 = new SoHAnimSegment();
SoHAnimSegment812->X3DNode::setName(QString("c4"));
SoHAnimSegment812->setDEF(QString("hanim_c4"));
SoTransform* SoTransform813 = new SoTransform();
SoTransform813->setTranslation(new float[]{0.0,56.990002,-0.6695});
SoShape* SoShape814 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance815 = new SoVRMLAppearance();
SoMaterial* SoMaterial816 = new SoMaterial();
SoMaterial816->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance815->addChild(*SoMaterial816);

SoImageTexture* SoImageTexture817 = new SoImageTexture();
SoImageTexture817->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance815->addChild(*SoImageTexture817);

SoShape814->addChild(*SoVRMLAppearance815);

SoIndexedFaceSet* SoIndexedFaceSet818 = new SoIndexedFaceSet();
SoIndexedFaceSet818->setCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet818->setCreaseAngle(3.14159);
SoIndexedFaceSet818->setTexCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoCoordinate* SoCoordinate819 = new SoCoordinate();
SoCoordinate819->setPoint(new float[]{0.5369,0.5776,-1.124,1.139,0.5776,-0.8504,1.562,0.5776,0.0729,1.219,0.5776,0.7153,0.0,0.5776,1.195,-0.605,0.5776,1.101,-1.139,0.5776,-0.8504,-1.562,0.5776,0.0729,0.0,0.5776,-1.195,0.605,0.5776,1.101,-0.5369,0.5776,-1.124,-1.219,0.5776,0.7153,0.5369,0.0017,-1.124,1.139,0.0017,-0.8504,1.562,0.0017,0.0729,1.219,0.0017,0.7153,0.0,0.0017,1.195,-0.605,0.0017,1.101,-1.139,0.0017,-0.8504,-1.562,0.0017,0.0729,0.0,0.0017,-1.195,0.605,0.0017,1.101,-0.5369,0.0017,-1.124,-1.219,0.0017,0.7153,0.4947,0.7754,-0.9348,0.0,0.7754,-1.0,-0.4947,0.7754,-0.9348,-1.008,0.7754,-0.7016,-1.361,0.7754,0.069,-1.091,0.7754,0.5735,-0.5462,0.7754,0.9162,0.0,0.7754,1.001,0.5462,0.7754,0.9162,1.091,0.7754,0.5735,1.361,0.7754,0.069,1.008,0.7754,-0.7016,0.0,-0.2388,-1.0,0.4947,-0.2388,-0.9348,1.008,-0.2388,-0.7016,1.361,-0.2388,0.069,1.091,-0.2388,0.5735,0.5462,-0.2388,0.9162,0.0,-0.2388,1.001,-0.5462,-0.2388,0.9162,-1.091,-0.2388,0.5735,-1.361,-0.2388,0.069,-1.008,-0.2388,-0.7016,-0.4947,-0.2388,-0.9348}, 144);
SoIndexedFaceSet818->setCoord(*SoCoordinate819);

SoTextureCoordinate* SoTextureCoordinate820 = new SoTextureCoordinate();
SoTextureCoordinate820->setPoint(new float[]{0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6628,0.3906,0.6629,0.3818,0.6628,0.3719,0.6635,0.3649,0.6634,0.3706,0.6624,0.3807,0.6628,0.3906,0.657,0.4006,0.6628,0.4107,0.6624,0.4164,0.6634,0.4094,0.6635,0.3906,0.6599,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.4006,0.6592,0.3906,0.6538,0.3807,0.6592,0.3706,0.6591,0.3649,0.6605,0.3719,0.6606,0.3818,0.6596}, 96);
SoIndexedFaceSet818->setTexCoord(*SoTextureCoordinate820);

SoShape814->setGeometry(*SoIndexedFaceSet818);

SoTransform813->addChild(*SoShape814);

SoHAnimSegment812->addChild(*SoTransform813);

SoHAnimJoint811->addChildren(*SoHAnimSegment812);

SoHAnimJoint* SoHAnimJoint821 = new SoHAnimJoint();
SoHAnimJoint821->X3DNode::setName(QString("vc3"));
SoHAnimJoint821->setDEF(QString("hanim_vc3"));
SoHAnimJoint821->setCenter(new float[]{0.0,57.560001,-0.6695});
SoHAnimJoint821->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint821->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment822 = new SoHAnimSegment();
SoHAnimSegment822->X3DNode::setName(QString("c3"));
SoHAnimSegment822->setDEF(QString("hanim_c3"));
SoTransform* SoTransform823 = new SoTransform();
SoTransform823->setTranslation(new float[]{0.0,57.560001,-0.6695});
SoShape* SoShape824 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance825 = new SoVRMLAppearance();
SoMaterial* SoMaterial826 = new SoMaterial();
SoMaterial826->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance825->addChild(*SoMaterial826);

SoImageTexture* SoImageTexture827 = new SoImageTexture();
SoImageTexture827->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance825->addChild(*SoImageTexture827);

SoShape824->addChild(*SoVRMLAppearance825);

SoIndexedFaceSet* SoIndexedFaceSet828 = new SoIndexedFaceSet();
SoIndexedFaceSet828->setCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet828->setCreaseAngle(3.14159);
SoIndexedFaceSet828->setTexCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoCoordinate* SoCoordinate829 = new SoCoordinate();
SoCoordinate829->setPoint(new float[]{0.5369,0.5152,-1.124,1.139,0.5152,-0.8504,1.562,0.5152,0.0729,1.219,0.5152,0.7153,0.0,0.5152,1.195,-0.605,0.5152,1.101,-1.139,0.5152,-0.8504,-1.562,0.5152,0.0729,0.0,0.5152,-1.195,0.605,0.5152,1.101,-0.5369,0.5152,-1.124,-1.219,0.5152,0.7153,0.5369,0.0015,-1.124,1.139,0.0015,-0.8504,1.562,0.0015,0.0729,1.219,0.0015,0.7153,0.0,0.0015,1.195,-0.605,0.0015,1.101,-1.139,0.0015,-0.8504,-1.562,0.0015,0.0729,0.0,0.0015,-1.195,0.605,0.0015,1.101,-0.5369,0.0015,-1.124,-1.219,0.0015,0.7153,0.4947,0.7138,-0.9348,0.0,0.7138,-1.0,-0.4947,0.7138,-0.9348,-1.008,0.7138,-0.7016,-1.361,0.7138,0.069,-1.091,0.7138,0.5735,-0.5462,0.7138,0.9162,0.0,0.7138,1.001,0.5462,0.7138,0.9162,1.091,0.7138,0.5735,1.361,0.7138,0.069,1.008,0.7138,-0.7016,0.0,-0.2398,-1.0,0.4947,-0.2398,-0.9348,1.008,-0.2398,-0.7016,1.361,-0.2398,0.069,1.091,-0.2398,0.5735,0.5462,-0.2398,0.9162,0.0,-0.2398,1.001,-0.5462,-0.2398,0.9162,-1.091,-0.2398,0.5735,-1.361,-0.2398,0.069,-1.008,-0.2398,-0.7016,-0.4947,-0.2398,-0.9348}, 144);
SoIndexedFaceSet828->setCoord(*SoCoordinate829);

SoTextureCoordinate* SoTextureCoordinate830 = new SoTextureCoordinate();
SoTextureCoordinate830->setPoint(new float[]{0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6659,0.3906,0.666,0.3818,0.6659,0.3719,0.6664,0.3649,0.6663,0.3706,0.6656,0.3807,0.6665,0.3906,0.6601,0.4006,0.6665,0.4107,0.6656,0.4164,0.6663,0.4094,0.6664,0.3906,0.6629,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.4006,0.6628,0.3906,0.657,0.3807,0.6628,0.3706,0.6624,0.3649,0.6634,0.3719,0.6635,0.3818,0.6628}, 96);
SoIndexedFaceSet828->setTexCoord(*SoTextureCoordinate830);

SoShape824->setGeometry(*SoIndexedFaceSet828);

SoTransform823->addChild(*SoShape824);

SoHAnimSegment822->addChild(*SoTransform823);

SoHAnimJoint821->addChildren(*SoHAnimSegment822);

SoHAnimJoint* SoHAnimJoint831 = new SoHAnimJoint();
SoHAnimJoint831->X3DNode::setName(QString("vc2"));
SoHAnimJoint831->setDEF(QString("hanim_vc2"));
SoHAnimJoint831->setCenter(new float[]{0.0,58.080002,-0.6695});
SoHAnimJoint831->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint831->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment832 = new SoHAnimSegment();
SoHAnimSegment832->X3DNode::setName(QString("c2"));
SoHAnimSegment832->setDEF(QString("hanim_c2"));
SoTransform* SoTransform833 = new SoTransform();
SoTransform833->setTranslation(new float[]{0.0,58.080002,-0.6695});
SoShape* SoShape834 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance835 = new SoVRMLAppearance();
SoMaterial* SoMaterial836 = new SoMaterial();
SoMaterial836->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance835->addChild(*SoMaterial836);

SoImageTexture* SoImageTexture837 = new SoImageTexture();
SoImageTexture837->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance835->addChild(*SoImageTexture837);

SoShape834->addChild(*SoVRMLAppearance835);

SoIndexedFaceSet* SoIndexedFaceSet838 = new SoIndexedFaceSet();
SoIndexedFaceSet838->setCoordIndex(new int32_t[]{14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1}, 368);
SoIndexedFaceSet838->setCreaseAngle(3.14159);
SoIndexedFaceSet838->setTexCoordIndex(new int32_t[]{14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1}, 368);
SoCoordinate* SoCoordinate839 = new SoCoordinate();
SoCoordinate839->setPoint(new float[]{0.5369,0.5216,-1.124,0.0,0.5216,-1.195,1.139,0.5216,-0.8504,1.562,0.5216,0.073,1.219,0.5216,0.7153,0.605,0.5216,1.101,0.0,0.5216,1.195,-0.5369,0.5216,-1.124,-1.139,0.5216,-0.8504,-1.562,0.5216,0.0729,-1.219,0.5216,0.7153,-0.605,0.5216,1.101,0.4798,0.7591,-0.9247,0.0,0.7591,-0.9883,-0.4798,0.7591,-0.9247,-0.9844,0.7591,-0.6953,-1.333,0.7591,0.066,-1.064,0.7591,0.5706,-0.5317,0.7591,0.9052,0.0,0.7591,0.9877,0.5317,0.7591,0.9052,1.064,0.7591,0.5706,1.333,0.7591,0.066,0.9844,0.7591,-0.6953,0.5369,0.0018,-1.124,1.139,0.0018,-0.8504,1.562,0.0018,0.073,1.219,0.0018,0.7153,0.0,0.0018,1.195,-0.605,0.0018,1.101,-1.139,0.0018,-0.8504,-1.562,0.0018,0.0729,0.0,0.0018,-1.195,0.605,0.0018,1.101,-0.5369,0.0018,-1.124,-1.219,0.0018,0.7153,0.0,-0.2146,-1.0,0.4947,-0.2146,-0.9348,1.008,-0.2146,-0.7016,1.361,-0.2146,0.069,1.091,-0.2146,0.5735,0.5462,-0.2146,0.9162,0.0,-0.2146,1.001,-0.5462,-0.2146,0.9162,-1.091,-0.2146,0.5735,-1.361,-0.2146,0.069,-1.008,-0.2146,-0.7016,-0.4947,-0.2146,-0.9348}, 144);
SoIndexedFaceSet838->setCoord(*SoCoordinate839);

SoTextureCoordinate* SoTextureCoordinate840 = new SoTextureCoordinate();
SoTextureCoordinate840->setPoint(new float[]{0.3995,0.6721,0.3906,0.6721,0.4094,0.6721,0.4164,0.6721,0.4107,0.6721,0.4006,0.6738,0.3906,0.6664,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3995,0.6721,0.3906,0.6721,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3906,0.6664,0.4006,0.6738,0.4107,0.6721,0.4164,0.6721,0.4094,0.6721,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3906,0.669,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.4006,0.6702,0.3906,0.6632,0.3807,0.6702,0.3706,0.6689,0.3649,0.6692,0.3719,0.6692,0.3818,0.669}, 96);
SoIndexedFaceSet838->setTexCoord(*SoTextureCoordinate840);

SoShape834->setGeometry(*SoIndexedFaceSet838);

SoTransform833->addChild(*SoShape834);

SoHAnimSegment832->addChild(*SoTransform833);

SoHAnimJoint831->addChildren(*SoHAnimSegment832);

SoHAnimJoint* SoHAnimJoint841 = new SoHAnimJoint();
SoHAnimJoint841->X3DNode::setName(QString("vc1"));
SoHAnimJoint841->setDEF(QString("hanim_vc1"));
SoHAnimJoint841->setCenter(new float[]{0.0,58.599998,-0.6695});
SoHAnimJoint841->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint841->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment842 = new SoHAnimSegment();
SoHAnimSegment842->X3DNode::setName(QString("c1"));
SoHAnimSegment842->setDEF(QString("hanim_c1"));
SoTransform* SoTransform843 = new SoTransform();
SoTransform843->setTranslation(new float[]{0.0,58.599998,-0.6695});
SoShape* SoShape844 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance845 = new SoVRMLAppearance();
SoMaterial* SoMaterial846 = new SoMaterial();
SoMaterial846->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance845->addChild(*SoMaterial846);

SoImageTexture* SoImageTexture847 = new SoImageTexture();
SoImageTexture847->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance845->addChild(*SoImageTexture847);

SoShape844->addChild(*SoVRMLAppearance845);

SoIndexedFaceSet* SoIndexedFaceSet848 = new SoIndexedFaceSet();
SoIndexedFaceSet848->setCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet848->setCreaseAngle(3.14159);
SoIndexedFaceSet848->setTexCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoCoordinate* SoCoordinate849 = new SoCoordinate();
SoCoordinate849->setPoint(new float[]{0.5369,0.5724,-1.124,1.139,0.5724,-0.8504,1.562,0.5724,0.073,1.219,0.5724,0.7153,0.0,0.5724,1.195,-0.605,0.5724,1.101,-1.139,0.5724,-0.8504,-1.562,0.5724,0.0729,0.0,0.5724,-1.195,0.605,0.5724,1.101,-0.5369,0.5724,-1.124,-1.219,0.5724,0.7153,0.5369,0.0022,-1.124,1.139,0.0022,-0.8504,1.562,0.0022,0.0729,1.219,0.0022,0.7153,0.0,0.0022,1.195,-0.605,0.0022,1.101,-1.139,0.0022,-0.8504,-1.562,0.0022,0.0729,0.0,0.0022,-1.195,0.605,0.0022,1.101,-0.5369,0.0022,-1.124,-1.219,0.0022,0.7153,0.4947,0.7703,-0.9348,0.0,0.7703,-1.0,-0.4947,0.7703,-0.9348,-1.008,0.7703,-0.7016,-1.361,0.7703,0.069,-1.091,0.7703,0.5735,-0.5462,0.7703,0.9162,0.0,0.7703,1.001,0.5462,0.7703,0.9162,1.091,0.7703,0.5735,1.361,0.7703,0.069,1.008,0.7703,-0.7016,0.0,-0.2078,-1.0,0.4947,-0.2078,-0.9348,1.008,-0.2078,-0.7016,1.361,-0.2078,0.069,1.091,-0.2078,0.5735,0.5462,-0.2078,0.9162,0.0,-0.2078,1.001,-0.5462,-0.2078,0.9162,-1.091,-0.2078,0.5735,-1.361,-0.2078,0.069,-1.008,-0.2078,-0.7016,-0.4947,-0.2078,-0.9348}, 144);
SoIndexedFaceSet848->setCoord(*SoCoordinate849);

SoTextureCoordinate* SoTextureCoordinate850 = new SoTextureCoordinate();
SoTextureCoordinate850->setPoint(new float[]{0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.669,0.3906,0.669,0.3818,0.669,0.3719,0.6692,0.3649,0.6692,0.3706,0.6689,0.3807,0.6702,0.3906,0.6632,0.4006,0.6702,0.4107,0.6689,0.4164,0.6692,0.4094,0.6692,0.3906,0.666,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.4006,0.6665,0.3906,0.6601,0.3807,0.6665,0.3706,0.6656,0.3649,0.6663,0.3719,0.6664,0.3818,0.6659}, 96);
SoIndexedFaceSet848->setTexCoord(*SoTextureCoordinate850);

SoShape844->setGeometry(*SoIndexedFaceSet848);

SoTransform843->addChild(*SoShape844);

SoHAnimSegment842->addChild(*SoTransform843);

SoHAnimJoint841->addChildren(*SoHAnimSegment842);

SoHAnimJoint* SoHAnimJoint851 = new SoHAnimJoint();
SoHAnimJoint851->X3DNode::setName(QString("skullbase"));
SoHAnimJoint851->setDEF(QString("hanim_skullbase"));
SoHAnimJoint851->setCenter(new float[]{0.0,58.34,-0.6863});
SoHAnimJoint851->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint851->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment852 = new SoHAnimSegment();
SoHAnimSegment852->X3DNode::setName(QString("skull"));
SoHAnimSegment852->setDEF(QString("hanim_skull"));
SoTransform* SoTransform853 = new SoTransform();
SoTransform853->setTranslation(new float[]{0.0,58.34,-0.6863});
SoShape* SoShape854 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance855 = new SoVRMLAppearance();
SoMaterial* SoMaterial856 = new SoMaterial();
SoMaterial856->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance855->addChild(*SoMaterial856);

SoImageTexture* SoImageTexture857 = new SoImageTexture();
SoImageTexture857->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance855->addChild(*SoImageTexture857);

SoShape854->addChild(*SoVRMLAppearance855);

SoIndexedFaceSet* SoIndexedFaceSet858 = new SoIndexedFaceSet();
SoIndexedFaceSet858->setCoordIndex(new int32_t[]{51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1}, 2480);
SoIndexedFaceSet858->setCreaseAngle(3.14159);
SoIndexedFaceSet858->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1}, 2480);
SoCoordinate* SoCoordinate859 = new SoCoordinate();
SoCoordinate859->setPoint(new float[]{2.596,3.055,-7.113,5.82,3.915,-2.239,3.712,1.225,-2.29,3.261,1.453,-4.252,5.658,2.599,-1.983,1.82,1.289,-5.164,2.395,4.95,6.346,0.7761,4.912,6.883,4.408,9.203,3.673,0.0,11.25,5.65,2.225,10.89,5.304,5.962,4.414,1.165,4.041,0.8383,3.523,1.972,9.601,6.357,2.537,7.001,6.362,3.694,6.649,5.287,0.4475,7.341,7.362,4.843,6.188,3.431,3.886,6.593,4.951,3.681,5.194,5.001,3.826,5.001,4.664,3.284,2.472,4.49,4.543,4.124,3.499,3.859,3.861,4.364,4.575,3.792,4.006,5.065,1.183,1.247,4.863,1.73,2.37,5.256,2.695,2.024,5.549,5.532,2.714,5.161,2.035,2.722,5.442,3.878,2.887,6.111,4.389,0.2634,4.062,5.868,4.221,6.007,7.856,-0.5637,7.021,1.661,-0.9157,6.568,4.855,-0.7308,6.326,4.691,-1.55,6.23,0.8303,-3.441,4.977,5.364,-5.673,6.326,4.656,-2.95,4.216,3.427,-5.131,3.522,5.818,-7.166,3.424,1.86,-7.278,2.479,7.925,-6.757,1.927,1.981,-8.89,5.584,7.691,-2.78,5.853,7.683,-1.772,5.181,8.476,2.104,3.038,10.79,4.444,5.123,3.032,-5.304,5.664,8.061,0.8754,4.721,7.925,-5.258,2.479,5.82,-7.483,5.595,7.63,-2.141,1.173,1.832,-6.114,3.978,2.324,-4.64,2.917,-0.9285,-7.31,3.323,2.08,-5.371,1.968,-1.561,-5.013,4.713,2.444,-3.477,4.42,-0.2924,-4.477,1.411,0.5541,-3.484,2.275,0.8807,-3.763,0.9407,0.7103,-4.537,3.818,1.729,-3.139,4.664,1.866,-1.436,3.657,9.188,4.96,1.559,7.266,7.008,2.791,5.041,6.017,2.479,12.6,2.191,0.0,12.77,-3.073,2.479,13.01,-0.5905,2.479,12.47,-3.073,2.479,11.8,3.665,4.738,11.13,-0.5905,4.581,10.59,1.893,4.776,9.342,-4.254,4.651,10.94,-2.696,2.479,10.58,-5.873,5.038,2.087,0.2634,5.351,2.269,0.2568,5.575,4.993,0.4877,5.759,4.313,-0.6689,5.672,3.119,-0.6884,4.617,3.919,1.981,2.507,0.2122,3.467,1.252,-0.7037,3.753,2.181,1.29,4.703,1.083,-0.2065,4.531,4.006,4.226,3.45,3.843,3.486,3.474,0.2615,3.949,5.823,2.043,5.094,5.803,1.599,4.225,5.429,2.175,4.422,5.292,1.061,2.841,5.24,3.345,2.806,3.987,2.647,2.75,4.481,3.082,3.581,4.206,1.044,3.885,5.454,1.356,3.642,5.241,3.227,3.707,4.111,3.028,4.567,4.683,2.472,2.023,4.722,0.9194,2.354,5.382,3.515,2.199,3.631,3.685,4.225,3.891,0.1458,1.141,5.967,0.4592,1.442,5.549,3.443,1.22,3.201,1.972,6.686,5.769,3.551,6.468,4.66,1.125,6.641,6.224,2.799,0.2961,1.981,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,4.342,2.994,2.484,1.972,10.18,5.298,3.829,8.081,4.078,4.754,5.519,2.97,2.795,3.568,4.497,1.835,3.587,5.011,4.074,1.813,1.489,4.073,1.537,-0.251,4.798,4.414,1.165,0.4079,0.7711,5.733,0.2244,0.7989,5.843,1.184,0.5011,4.895,0.2244,0.5907,5.545,2.091,-0.0943,-1.629,0.4475,7.341,7.362,0.7761,4.912,6.883,0.4475,7.341,7.362,4.734,2.295,-0.478,3.712,1.225,-2.29,5.658,2.599,-1.983,0.513,6.698,7.119,5.054,4.389,0.2634,3.561,1.081,-1.554,2.09,4.432,3.699,1.621,4.356,4.123,1.332,4.202,4.217,1.07,3.93,4.244,1.254,3.737,4.129,1.514,3.69,3.988,2.035,3.658,3.658,2.202,3.647,3.455,2.276,3.737,3.378,2.499,4.118,3.181,0.0,2.738,-7.551,0.0,4.192,6.16,0.0,7.925,-7.347,0.0,0.1375,-3.592,0.0,-0.9435,-6.54,0.0,-0.6349,1.532,0.5806,0.4168,3.813,0.1288,0.4247,4.012,0.5566,-0.2209,3.55,0.0,6.577,6.529,0.0,-1.299,4.283,0.0,0.7989,5.843,0.2132,0.5713,5.365,0.5926,3.49,5.582,0.9241,3.763,5.471,3.843,5.112,4.093,1.112,4.786,6.09,3.261,5.262,4.816,1.327,4.522,5.859,2.089,4.758,5.599,3.171,4.95,4.784,0.646,4.262,6.112,0.0,5.519,-7.965,0.0,9.74,6.859,0.0,7.548,7.405,0.0,2.998,5.872,0.0,1.753,6.811,0.0,0.5907,5.545,0.7426,4.743,6.135,-3.522,5.818,-7.166,-2.479,7.925,-6.757,-4.721,7.925,-5.258,-4.977,5.364,-5.673,-2.479,5.82,-7.483,-5.123,3.032,-5.304,-3.424,1.86,-7.278,-1.927,1.981,-8.89,0.0,3.753,-8.454,-2.479,10.58,-5.873,-4.776,9.342,-4.254,0.0,10.91,-6.064,-1.972,9.601,6.357,-2.225,10.89,5.304,-2.479,11.8,3.665,0.0,12.19,4.069,-5.962,4.414,1.165,-5.664,8.061,0.8754,-5.256,2.695,2.024,-0.4475,7.341,7.362,-1.559,7.266,7.008,-2.537,7.001,6.362,-2.791,5.041,6.017,-3.694,6.649,5.287,-0.7761,4.912,6.883,-2.395,4.95,6.346,-0.513,6.698,7.119,-0.4475,7.341,7.362,-0.7761,4.912,6.883,-0.4475,7.341,7.362,-3.886,6.593,4.951,-3.681,5.194,5.001,-3.826,5.001,4.664,-4.062,5.868,4.221,-4.843,6.188,3.431,-4.408,9.203,3.673,-3.657,9.188,4.96,-4.575,3.792,4.006,-3.859,3.861,4.364,-3.284,2.472,4.49,-4.543,4.124,3.499,-5.065,1.183,1.247,-6.111,4.389,0.2634,-5.549,5.532,2.714,-5.442,3.878,2.887,-5.161,2.035,2.722,-4.041,0.8383,3.523,-4.863,1.73,2.37,-5.82,3.915,-2.239,-7.021,1.661,-0.9157,-6.326,4.691,-1.55,-6.568,4.855,-0.7308,-4.216,3.427,-5.131,-6.23,0.8303,-3.441,-6.326,4.656,-2.95,-2.596,3.055,-7.113,-5.584,7.691,-2.78,-4.651,10.94,-2.696,-5.595,7.63,-2.141,-5.853,7.683,-1.772,-6.007,7.856,-0.5637,-4.738,11.13,-0.5905,-5.181,8.476,2.104,-4.581,10.59,1.893,-3.038,10.79,4.444,-1.173,1.832,-6.114,0.0,1.035,-6.031,0.0,0.1227,-8.281,-2.917,-0.9285,-7.31,-3.978,2.324,-4.64,-3.323,2.08,-5.371,-3.261,1.453,-4.252,-2.275,0.8807,-3.763,-1.82,1.289,-5.164,-1.968,-1.561,-5.013,-3.818,1.729,-3.139,-3.712,1.225,-2.29,-1.411,0.5541,-3.484,-4.42,-0.2924,-4.477,-4.713,2.444,-3.477,-5.658,2.599,-1.983,-0.9407,0.7103,-4.537,-4.734,2.295,-0.478,-4.664,1.866,-1.436,-2.479,12.6,2.191,0.0,12.89,2.191,-2.479,13.01,-0.5905,-2.479,12.47,-3.073,0.0,13.3,-0.5905,-3.561,1.081,-1.554,-4.073,1.537,-0.251,-2.799,0.2961,1.981,-5.038,2.087,0.2634,-4.074,1.813,1.489,-5.351,2.269,0.2568,-5.054,4.389,0.2634,-4.798,4.414,1.165,-5.575,4.993,0.4877,-5.759,4.313,-0.6689,-5.672,3.119,-0.6884,-4.617,3.919,1.981,-4.342,2.994,2.484,-4.754,5.519,2.97,-3.443,1.22,3.201,-1.438,-0.7799,2.92,-2.098,-0.0622,0.3894,-1.125,6.641,6.224,-1.972,10.18,5.298,0.0,9.837,5.8,-2.091,-0.0943,-1.629,-1.972,6.686,5.769,-3.551,6.468,4.66,-2.507,0.2122,3.467,-1.252,-0.7037,3.753,-0.2244,0.7989,5.843,-0.1458,1.141,5.967,0.0,1.141,5.968,-0.4079,0.7711,5.733,-0.4592,1.442,5.549,-2.181,1.29,4.703,-1.184,0.5011,4.895,-2.472,2.023,4.722,-0.9194,2.354,5.382,0.0,-1.065,3.009,0.0,-1.23,3.575,-3.515,2.199,3.631,-1.083,-0.2065,4.531,0.0,2.206,6.446,-0.646,4.262,6.112,0.0,3.949,5.823,-0.2615,3.949,5.823,-1.061,2.841,5.24,-0.5926,3.49,5.582,0.0,4.73,6.243,-0.7426,4.743,6.135,-3.843,3.486,3.474,-4.006,4.226,3.45,-2.175,4.422,5.292,-2.089,4.758,5.599,-1.327,4.522,5.859,-1.599,4.225,5.429,-3.345,2.806,3.987,-2.647,2.75,4.481,-2.795,3.568,4.497,-1.835,3.587,5.011,-3.082,3.581,4.206,-1.356,3.642,5.241,-0.9241,3.763,5.471,-1.044,3.885,5.454,-3.227,3.707,4.111,-2.043,5.094,5.803,-3.685,4.225,3.891,-1.112,4.786,6.09,-3.829,8.081,4.078,-3.843,5.112,4.093,-3.261,5.262,4.816,-5.658,2.599,-1.983,-3.712,1.225,-2.29,-0.2244,0.5907,5.545,-3.028,4.567,4.683,-1.621,4.356,4.123,-2.09,4.432,3.699,-1.332,4.202,4.217,-1.07,3.93,4.244,-1.254,3.737,4.129,-1.514,3.69,3.988,-2.035,3.658,3.658,-2.202,3.647,3.455,-2.276,3.737,3.378,-2.499,4.118,3.181,-0.5806,0.4168,3.813,-0.5566,-0.2209,3.55,-0.2132,0.5713,5.365,-0.1288,0.4247,4.012,0.0,0.5723,5.368,0.0,0.4306,4.006,0.0,-0.2612,3.286,-3.171,4.95,4.784}, 1068);
SoIndexedFaceSet858->setCoord(*SoCoordinate859);

SoTextureCoordinate* SoTextureCoordinate860 = new SoTextureCoordinate();
SoTextureCoordinate860->setPoint(new float[]{0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.7576,0.779,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.637,0.4385,0.639,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.652,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2934,0.905,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.626,0.3051,0.6166,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.696,0.2636,0.664,0.3484,0.6888,0.3007,0.651,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.2441,0.7326,0.2441,0.7109,0.2441,0.7705,0.2441,0.816,0.2466,0.8272,0.2826,0.8198,0.263,0.8101,0.3011,0.7644,0.4294,0.848,0.295,0.8569,0.4229,0.7906,0.445,0.8342,0.3273,0.8725,0.3401,0.8443,0.4194,0.891,0.3844,0.8819,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.2864,0.8094,0.3065,0.7969,0.4051,0.8004,0.4267,0.8291,0.3243,0.8795,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4658,0.6252,0.465,0.6281,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.4156,0.6279,0.3783,0.625,0.3984,0.649,0.4325,0.6718,0.4443,0.6446,0.428,0.6022,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.4215,0.6174,0.6418,0.6585,0.6441,0.671,0.6214,0.6731,0.616,0.6731,0.6418,0.6585,0.623,0.6494,0.6418,0.6585,0.6441,0.671,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.616,0.6731,0.6214,0.6731,0.2441,0.6529,0.314,0.8296,0.3898,0.85,0.2746,0.7881,0.2889,0.7981,0.4442,0.8857,0.2745,0.8415,0.3079,0.8417,0.3393,0.8544,0.3891,0.8542,0.2699,0.8521,0.246,0.853,0.4715,0.8911,0.9421,0.8701,0.9509,0.8981,0.9175,0.8974,0.924,0.8702,0.9824,0.8682,0.9824,0.8971,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7553,0.8982,0.7616,0.9147,0.7343,0.9169,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8324,0.8647,0.8348,0.9045,0.8187,0.8433,0.74,0.8745,0.7497,0.8755,0.761,0.8768,0.7647,0.8593,0.777,0.8787,0.7438,0.8546,0.7596,0.8565,0.7372,0.8736,0.7343,0.8756,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7821,0.8667,0.7875,0.8787,0.8011,0.8823,0.7952,0.9076,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.8107,0.8538,0.8058,0.8252,0.786,0.7876,0.8096,0.8166,0.8767,0.8622,0.8589,0.7975,0.8669,0.8674,0.8568,0.8668,0.9208,0.8549,0.8792,0.7991,0.9139,0.8636,0.8835,0.8633,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7208,0.8401,0.7279,0.8339,0.7338,0.8385,0.7338,0.7727,0.7338,0.7681,0.7397,0.7767,0.7192,0.8201,0.7139,0.8364,0.7171,0.8352,0.7127,0.8419,0.7175,0.832,0.7224,0.8292,0.7247,0.8312,0.7239,0.8169,0.7146,0.8334,0.7452,0.772,0.753,0.7762,0.7152,0.8309,0.7409,0.7703,0.7502,0.7748,0.756,0.7661,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7338,0.8254,0.7291,0.8283,0.7267,0.8275,0.7338,0.7628,0.7385,0.7711,0.7338,0.7682,0.7338,0.82,0.7437,0.7597,0.7484,0.7629,0.7429,0.774,0.7505,0.778,0.7116,0.8233,0.763,0.7872,0.7576,0.779,0.7622,0.7806,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4514,0.6319,0.4421,0.6351,0.4263,0.6263,0.4385,0.639,0.4298,0.637,0.4385,0.6403,0.4385,0.6553,0.4321,0.6555,0.4369,0.6596,0.4451,0.6548,0.4452,0.6463,0.4263,0.652,0.4227,0.6454,0.4193,0.6633,0.4176,0.6328,0.4196,0.6187,0.4376,0.6237,0.2441,0.9417,0.2934,0.905,0.3384,0.9887,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2441,0.6653,0.2548,0.6653,0.2511,0.6816,0.2441,0.6816,0.2636,0.664,0.2661,0.696,0.3484,0.6888,0.3007,0.651,0.3623,0.7239,0.2881,0.7397,0.4215,0.6174,0.4295,0.6197,0.4151,0.6155,0.4116,0.6201,0.4518,0.7703,0.4123,0.7323,0.4088,0.6855,0.364,0.6372,0.2959,0.626,0.3051,0.6166,0.2441,0.7326,0.2441,0.7705,0.2441,0.7109,0.2745,0.8415,0.2466,0.8272,0.2441,0.816,0.263,0.8101,0.3011,0.7644,0.2746,0.7881,0.246,0.853,0.2699,0.8521,0.4229,0.7906,0.445,0.8342,0.3401,0.8443,0.3393,0.8544,0.3079,0.8417,0.314,0.8296,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.3065,0.7969,0.2889,0.7981,0.2826,0.8198,0.2864,0.8094,0.4051,0.8004,0.3243,0.8795,0.4267,0.8291,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4715,0.8911,0.4658,0.6252,0.465,0.6281,0.4194,0.891,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.3984,0.649,0.3783,0.625,0.4156,0.6279,0.4325,0.6718,0.428,0.6022,0.4443,0.6446,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.3898,0.85,0.6418,0.6585,0.6441,0.671,0.6441,0.671,0.6418,0.6585,0.6214,0.6731,0.6214,0.6731,0.616,0.6731,0.616,0.6731,0.623,0.6494,0.6418,0.6585,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.2441,0.6529,0.3891,0.8542,0.4294,0.848,0.4442,0.8857,0.295,0.8569,0.3273,0.8725,0.3844,0.8819}, 972);
SoIndexedFaceSet858->setTexCoord(*SoTextureCoordinate860);

SoShape854->setGeometry(*SoIndexedFaceSet858);

SoTransform853->addChild(*SoShape854);

SoHAnimSegment852->addChild(*SoTransform853);

SoHAnimJoint851->addChildren(*SoHAnimSegment852);

SoHAnimJoint* SoHAnimJoint861 = new SoHAnimJoint();
SoHAnimJoint861->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint861->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint861->setCenter(new float[]{2.245,63.299999,1.464});
SoHAnimJoint861->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint861->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment862 = new SoHAnimSegment();
SoHAnimSegment862->X3DNode::setName(QString("l_eyelid"));
SoHAnimSegment862->setDEF(QString("hanim_l_eyelid"));
SoTransform* SoTransform863 = new SoTransform();
SoTransform863->setTranslation(new float[]{2.245,63.299999,1.464});
SoShape* SoShape864 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance865 = new SoVRMLAppearance();
SoMaterial* SoMaterial866 = new SoMaterial();
SoMaterial866->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance865->addChild(*SoMaterial866);

SoImageTexture* SoImageTexture867 = new SoImageTexture();
SoImageTexture867->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance865->addChild(*SoImageTexture867);

SoShape864->addChild(*SoVRMLAppearance865);

SoIndexedFaceSet* SoIndexedFaceSet868 = new SoIndexedFaceSet();
SoIndexedFaceSet868->setCoordIndex(new int32_t[]{0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1}, 168);
SoIndexedFaceSet868->setCreaseAngle(3.14159);
SoIndexedFaceSet868->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1}, 168);
SoCoordinate* SoCoordinate869 = new SoCoordinate();
SoCoordinate869->setPoint(new float[]{0.7812,0.9459,2.423,-0.0916,1.221,3.035,-0.6939,1.091,3.272,-1.201,0.7156,3.402,1.44,0.2291,1.879,0.5651,-0.165,2.791,-0.0316,0.0152,3.145,-0.5556,0.2361,3.321,-0.9123,0.4339,3.372,1.238,0.0487,2.08,1.125,0.602,2.151,0.8496,-0.1779,2.483,0.6573,0.8425,2.258,-0.1708,0.9799,2.786,-0.7043,0.8814,3.009,-1.214,0.6498,3.288,1.382,0.2083,1.843,0.5305,-0.2135,2.728,-0.061,-0.0537,3.021,-0.5907,0.1786,3.224,-0.9336,0.3766,3.273,1.226,0.0107,2.001,1.011,0.5271,2.053,0.8046,-0.2044,2.445,0.7041,0.3289,2.599,-0.0583,0.6255,3.144,-0.5943,0.5965,3.311,0.9909,0.1875,2.335}, 84);
SoIndexedFaceSet868->setCoord(*SoCoordinate869);

SoTextureCoordinate* SoTextureCoordinate870 = new SoTextureCoordinate();
SoTextureCoordinate870->setPoint(new float[]{0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603}, 56);
SoIndexedFaceSet868->setTexCoord(*SoTextureCoordinate870);

SoShape864->setGeometry(*SoIndexedFaceSet868);

SoTransform863->addChild(*SoShape864);

SoHAnimSegment862->addChild(*SoTransform863);

SoHAnimJoint861->addChildren(*SoHAnimSegment862);

SoHAnimJoint851->addChildren(*SoHAnimJoint861);

SoHAnimJoint* SoHAnimJoint871 = new SoHAnimJoint();
SoHAnimJoint871->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint871->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint871->setCenter(new float[]{-2.245,63.299999,1.464});
SoHAnimJoint871->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint871->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment872 = new SoHAnimSegment();
SoHAnimSegment872->X3DNode::setName(QString("r_eyelid"));
SoHAnimSegment872->setDEF(QString("hanim_r_eyelid"));
SoTransform* SoTransform873 = new SoTransform();
SoTransform873->setTranslation(new float[]{-2.245,63.299999,1.464});
SoShape* SoShape874 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance875 = new SoVRMLAppearance();
SoMaterial* SoMaterial876 = new SoMaterial();
SoMaterial876->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance875->addChild(*SoMaterial876);

SoImageTexture* SoImageTexture877 = new SoImageTexture();
SoImageTexture877->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance875->addChild(*SoImageTexture877);

SoShape874->addChild(*SoVRMLAppearance875);

SoIndexedFaceSet* SoIndexedFaceSet878 = new SoIndexedFaceSet();
SoIndexedFaceSet878->setCoordIndex(new int32_t[]{0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1}, 168);
SoIndexedFaceSet878->setCreaseAngle(3.14159);
SoIndexedFaceSet878->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1}, 168);
SoCoordinate* SoCoordinate879 = new SoCoordinate();
SoCoordinate879->setPoint(new float[]{-0.7812,0.9459,2.423,0.0916,1.221,3.035,0.6939,1.091,3.272,1.201,0.7156,3.402,-1.44,0.2291,1.879,-0.5651,-0.165,2.791,0.0316,0.0152,3.145,0.5556,0.2361,3.321,0.9123,0.4339,3.372,-1.238,0.0487,2.08,-1.125,0.602,2.151,-0.8496,-0.1779,2.483,-0.6573,0.8425,2.258,0.1708,0.9799,2.786,0.7043,0.8814,3.009,1.214,0.6498,3.288,-1.382,0.2083,1.843,-0.5305,-0.2135,2.728,0.061,-0.0537,3.021,0.5907,0.1786,3.224,0.9336,0.3766,3.273,-1.226,0.0107,2.001,-1.011,0.5271,2.053,-0.8046,-0.2044,2.445,-0.7041,0.3289,2.599,0.0583,0.6255,3.144,0.5943,0.5965,3.311,-0.9909,0.1875,2.335}, 84);
SoIndexedFaceSet878->setCoord(*SoCoordinate879);

SoTextureCoordinate* SoTextureCoordinate880 = new SoTextureCoordinate();
SoTextureCoordinate880->setPoint(new float[]{0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603}, 56);
SoIndexedFaceSet878->setTexCoord(*SoTextureCoordinate880);

SoShape874->setGeometry(*SoIndexedFaceSet878);

SoTransform873->addChild(*SoShape874);

SoHAnimSegment872->addChild(*SoTransform873);

SoHAnimJoint871->addChildren(*SoHAnimSegment872);

SoHAnimJoint851->addChildren(*SoHAnimJoint871);

SoHAnimJoint* SoHAnimJoint881 = new SoHAnimJoint();
SoHAnimJoint881->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint881->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint881->setCenter(new float[]{2.139,62.439999,3.691});
SoHAnimJoint881->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint881->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment882 = new SoHAnimSegment();
SoHAnimSegment882->X3DNode::setName(QString("l_eyeball"));
SoHAnimSegment882->setDEF(QString("hanim_l_eyeball"));
SoTransform* SoTransform883 = new SoTransform();
SoTransform883->setTranslation(new float[]{2.139,62.439999,3.691});
SoShape* SoShape884 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance885 = new SoVRMLAppearance();
SoMaterial* SoMaterial886 = new SoMaterial();
SoMaterial886->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance885->addChild(*SoMaterial886);

SoImageTexture* SoImageTexture887 = new SoImageTexture();
SoImageTexture887->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance885->addChild(*SoImageTexture887);

SoShape884->addChild(*SoVRMLAppearance885);

SoIndexedFaceSet* SoIndexedFaceSet888 = new SoIndexedFaceSet();
SoIndexedFaceSet888->setCoordIndex(new int32_t[]{1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1}, 200);
SoIndexedFaceSet888->setCreaseAngle(3.14159);
SoIndexedFaceSet888->setTexCoordIndex(new int32_t[]{4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1}, 200);
SoCoordinate* SoCoordinate889 = new SoCoordinate();
SoCoordinate889->setPoint(new float[]{-0.5714,0.1308,1.022,0.0065,0.3275,0.8903,0.9254,-0.514,-0.1858,-1.127,-0.2093,1.04,-0.8123,-0.4527,0.8311,1.071,-0.3875,-0.2786,0.8656,0.4725,0.2913,1.531,0.131,-0.4935,0.6347,-0.5265,0.1025,-0.3305,-0.5079,0.6059,-0.9072,0.3038,0.6607,-0.2821,0.6036,0.4543,0.8055,-0.7341,-0.6018,-1.538,-0.196,0.7028,-1.179,-0.6703,0.471,0.9784,-0.5205,-0.7082,0.7686,0.7606,-0.1253,1.439,0.2188,-0.9066,0.4776,-0.7606,-0.3045,-0.6264,-0.7495,0.2298,-0.4184,0.4603,0.0509,0.5401,0.5849,-0.4428,1.071,0.2019,-1.042,0.7894,-0.2743,-0.8837,0.6127,-0.4156,-0.7848,0.3441,-0.4361,-0.5345,-0.763,-0.4066,-0.0392,-1.24,-0.3287,0.1376,-1.414,-0.1566,0.1789,-0.9737,0.2094,0.2088,0.2912,-0.0892,0.5676}, 93);
SoIndexedFaceSet888->setCoord(*SoCoordinate889);

SoTextureCoordinate* SoTextureCoordinate890 = new SoTextureCoordinate();
SoTextureCoordinate890->setPoint(new float[]{0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819}, 82);
SoIndexedFaceSet888->setTexCoord(*SoTextureCoordinate890);

SoShape884->setGeometry(*SoIndexedFaceSet888);

SoTransform883->addChild(*SoShape884);

SoHAnimSegment882->addChild(*SoTransform883);

SoHAnimJoint881->addChildren(*SoHAnimSegment882);

SoHAnimJoint851->addChildren(*SoHAnimJoint881);

SoHAnimJoint* SoHAnimJoint891 = new SoHAnimJoint();
SoHAnimJoint891->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint891->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint891->setCenter(new float[]{-2.139,62.439999,3.691});
SoHAnimJoint891->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint891->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment892 = new SoHAnimSegment();
SoHAnimSegment892->X3DNode::setName(QString("r_eyeball"));
SoHAnimSegment892->setDEF(QString("hanim_r_eyeball"));
SoTransform* SoTransform893 = new SoTransform();
SoTransform893->setTranslation(new float[]{-2.139,62.439999,3.691});
SoShape* SoShape894 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance895 = new SoVRMLAppearance();
SoMaterial* SoMaterial896 = new SoMaterial();
SoMaterial896->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance895->addChild(*SoMaterial896);

SoImageTexture* SoImageTexture897 = new SoImageTexture();
SoImageTexture897->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance895->addChild(*SoImageTexture897);

SoShape894->addChild(*SoVRMLAppearance895);

SoIndexedFaceSet* SoIndexedFaceSet898 = new SoIndexedFaceSet();
SoIndexedFaceSet898->setCoordIndex(new int32_t[]{1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1}, 200);
SoIndexedFaceSet898->setCreaseAngle(3.14159);
SoIndexedFaceSet898->setTexCoordIndex(new int32_t[]{4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1}, 200);
SoCoordinate* SoCoordinate899 = new SoCoordinate();
SoCoordinate899->setPoint(new float[]{0.5714,0.1308,1.022,-0.0065,0.3275,0.8903,-0.9254,-0.514,-0.1858,1.127,-0.2093,1.04,0.8123,-0.4527,0.8311,-1.071,-0.3875,-0.2786,-0.8656,0.4725,0.2913,-1.531,0.131,-0.4935,-0.6347,-0.5265,0.1025,0.3305,-0.5079,0.6059,0.9072,0.3038,0.6607,0.2821,0.6036,0.4543,-0.8055,-0.7341,-0.6018,1.538,-0.196,0.7028,1.179,-0.6703,0.471,-0.9784,-0.5205,-0.7082,-0.7686,0.7606,-0.1254,-1.439,0.2188,-0.9066,-0.4776,-0.7606,-0.3045,0.6264,-0.7495,0.2298,0.4184,0.4603,0.0509,-0.5401,0.5849,-0.4428,-1.071,0.2019,-1.042,-0.7894,-0.2743,-0.8837,-0.6127,-0.4156,-0.7848,-0.3441,-0.4361,-0.5345,0.763,-0.4066,-0.0392,1.24,-0.3287,0.1376,1.414,-0.1566,0.1789,0.9737,0.2094,0.2088,-0.2912,-0.0892,0.5676}, 93);
SoIndexedFaceSet898->setCoord(*SoCoordinate899);

SoTextureCoordinate* SoTextureCoordinate900 = new SoTextureCoordinate();
SoTextureCoordinate900->setPoint(new float[]{0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819}, 82);
SoIndexedFaceSet898->setTexCoord(*SoTextureCoordinate900);

SoShape894->setGeometry(*SoIndexedFaceSet898);

SoTransform893->addChild(*SoShape894);

SoHAnimSegment892->addChild(*SoTransform893);

SoHAnimJoint891->addChildren(*SoHAnimSegment892);

SoHAnimJoint851->addChildren(*SoHAnimJoint891);

SoHAnimJoint* SoHAnimJoint901 = new SoHAnimJoint();
SoHAnimJoint901->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint901->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint901->setCenter(new float[]{0.9666,62.84,4.753});
SoHAnimJoint901->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint901->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment902 = new SoHAnimSegment();
SoHAnimSegment902->X3DNode::setName(QString("l_eyebrow"));
SoHAnimSegment902->setDEF(QString("hanim_l_eyebrow"));
SoTransform* SoTransform903 = new SoTransform();
SoTransform903->setTranslation(new float[]{0.9666,62.84,4.753});
SoShape* SoShape904 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance905 = new SoVRMLAppearance();
SoMaterial* SoMaterial906 = new SoMaterial();
SoMaterial906->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance905->addChild(*SoMaterial906);

SoImageTexture* SoImageTexture907 = new SoImageTexture();
SoImageTexture907->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance905->addChild(*SoImageTexture907);

SoShape904->addChild(*SoVRMLAppearance905);

SoIndexedFaceSet* SoIndexedFaceSet908 = new SoIndexedFaceSet();
SoIndexedFaceSet908->setCoordIndex(new int32_t[]{2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1}, 136);
SoIndexedFaceSet908->setCreaseAngle(3.14159);
SoIndexedFaceSet908->setTexCoordIndex(new int32_t[]{0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1}, 136);
SoCoordinate* SoCoordinate909 = new SoCoordinate();
SoCoordinate909->setPoint(new float[]{-0.3218,-0.2298,0.7043,1.083,0.5974,0.3796,1.096,0.4225,0.3238,2.278,0.6308,-0.5919,2.889,0.6602,-1.322,0.1489,0.2892,0.6667,2.301,0.7666,-0.6065,1.117,0.2554,0.2024,2.208,0.4503,-0.6419,-0.2543,-0.2957,0.5866,2.872,0.5692,-1.343,-0.2774,-0.216,0.4476,1.079,0.5765,0.1724,2.807,0.6568,-1.386,0.1761,0.2697,0.4332,2.269,0.7395,-0.7309,1.111,0.2424,0.0098,2.17,0.434,-0.7637,-0.2034,-0.285,0.3399,2.78,0.5442,-1.406,0.2769,0.1224,0.5591,0.3788,-0.0007,0.4194,0.3389,-0.0414,0.2053}, 69);
SoIndexedFaceSet908->setCoord(*SoCoordinate909);

SoTextureCoordinate* SoTextureCoordinate910 = new SoTextureCoordinate();
SoTextureCoordinate910->setPoint(new float[]{0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417}, 46);
SoIndexedFaceSet908->setTexCoord(*SoTextureCoordinate910);

SoShape904->setGeometry(*SoIndexedFaceSet908);

SoTransform903->addChild(*SoShape904);

SoHAnimSegment902->addChild(*SoTransform903);

SoHAnimJoint901->addChildren(*SoHAnimSegment902);

SoHAnimJoint851->addChildren(*SoHAnimJoint901);

SoHAnimJoint* SoHAnimJoint911 = new SoHAnimJoint();
SoHAnimJoint911->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint911->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint911->setCenter(new float[]{-0.9666,62.84,4.753});
SoHAnimJoint911->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint911->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment912 = new SoHAnimSegment();
SoHAnimSegment912->X3DNode::setName(QString("r_eyebrow"));
SoHAnimSegment912->setDEF(QString("hanim_r_eyebrow"));
SoTransform* SoTransform913 = new SoTransform();
SoTransform913->setTranslation(new float[]{-0.9666,62.84,4.753});
SoShape* SoShape914 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance915 = new SoVRMLAppearance();
SoMaterial* SoMaterial916 = new SoMaterial();
SoMaterial916->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance915->addChild(*SoMaterial916);

SoImageTexture* SoImageTexture917 = new SoImageTexture();
SoImageTexture917->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance915->addChild(*SoImageTexture917);

SoShape914->addChild(*SoVRMLAppearance915);

SoIndexedFaceSet* SoIndexedFaceSet918 = new SoIndexedFaceSet();
SoIndexedFaceSet918->setCoordIndex(new int32_t[]{2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1}, 136);
SoIndexedFaceSet918->setCreaseAngle(3.14159);
SoIndexedFaceSet918->setTexCoordIndex(new int32_t[]{0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1}, 136);
SoCoordinate* SoCoordinate919 = new SoCoordinate();
SoCoordinate919->setPoint(new float[]{0.3218,-0.2298,0.7043,-1.083,0.5974,0.3796,-1.096,0.4225,0.3238,-2.278,0.6308,-0.5919,-2.889,0.6602,-1.322,-0.1489,0.2892,0.6667,-2.301,0.7666,-0.6065,-1.117,0.2554,0.2024,-2.208,0.4503,-0.6419,0.2543,-0.2957,0.5866,-2.872,0.5692,-1.343,0.2774,-0.216,0.4476,-1.079,0.5765,0.1724,-2.807,0.6568,-1.386,-0.1761,0.2697,0.4332,-2.269,0.7395,-0.7309,-1.111,0.2424,0.0098,-2.17,0.434,-0.7637,0.2034,-0.285,0.3399,-2.78,0.5442,-1.406,-0.2769,0.1224,0.5591,-0.3788,-0.0007,0.4194,-0.3389,-0.0414,0.2053}, 69);
SoIndexedFaceSet918->setCoord(*SoCoordinate919);

SoTextureCoordinate* SoTextureCoordinate920 = new SoTextureCoordinate();
SoTextureCoordinate920->setPoint(new float[]{0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417}, 46);
SoIndexedFaceSet918->setTexCoord(*SoTextureCoordinate920);

SoShape914->setGeometry(*SoIndexedFaceSet918);

SoTransform913->addChild(*SoShape914);

SoHAnimSegment912->addChild(*SoTransform913);

SoHAnimJoint911->addChildren(*SoHAnimSegment912);

SoHAnimJoint851->addChildren(*SoHAnimJoint911);

SoHAnimJoint* SoHAnimJoint921 = new SoHAnimJoint();
SoHAnimJoint921->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint921->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint921->setCenter(new float[]{0.0,58.349998,0.6835});
SoHAnimJoint921->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint921->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment922 = new SoHAnimSegment();
SoHAnimSegment922->X3DNode::setName(QString("jaw"));
SoHAnimSegment922->setDEF(QString("hanim_jaw"));
SoTransform* SoTransform923 = new SoTransform();
SoTransform923->setTranslation(new float[]{0.0,58.349998,0.6835});
SoShape* SoShape924 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance925 = new SoVRMLAppearance();
SoMaterial* SoMaterial926 = new SoMaterial();
SoMaterial926->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance925->addChild(*SoMaterial926);

SoImageTexture* SoImageTexture927 = new SoImageTexture();
SoImageTexture927->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance925->addChild(*SoImageTexture927);

SoShape924->addChild(*SoVRMLAppearance925);

SoIndexedFaceSet* SoIndexedFaceSet928 = new SoIndexedFaceSet();
SoIndexedFaceSet928->setCoordIndex(new int32_t[]{0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1}, 168);
SoIndexedFaceSet928->setCreaseAngle(3.14159);
SoIndexedFaceSet928->setTexCoordIndex(new int32_t[]{0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1}, 168);
SoCoordinate* SoCoordinate929 = new SoCoordinate();
SoCoordinate929->setPoint(new float[]{0.0,-1.317,2.914,1.252,-0.7221,2.383,1.083,-0.2249,3.164,0.2244,0.5712,4.007,1.184,0.4815,3.532,0.2244,1.038,1.387,1.073,1.14,1.338,0.2244,0.6336,3.483,1.09,0.6458,3.144,1.93,0.1375,0.7069,1.991,0.7184,0.9789,-1.083,-0.2249,3.164,0.0,-0.2295,3.585,0.0,0.1459,4.012,-0.2244,0.5712,4.007,0.0,0.5712,4.007,-1.184,0.4815,3.532,-1.252,-0.7221,2.383,0.0,-0.2922,0.9103,-1.93,0.1375,0.7069,-1.991,0.7184,0.9789,-1.073,1.14,1.338,-1.09,0.6458,3.144,-0.2244,0.6336,3.483,0.0,0.6336,3.483,-0.2244,1.038,1.387,0.0,0.9359,1.424}, 81);
SoIndexedFaceSet928->setCoord(*SoCoordinate929);

SoTextureCoordinate* SoTextureCoordinate930 = new SoTextureCoordinate();
SoTextureCoordinate930->setPoint(new float[]{0.2448,0.6067,0.3051,0.6166,0.2959,0.6259,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3007,0.651,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3051,0.6166,0.3007,0.651,0.3007,0.651,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166}, 84);
SoIndexedFaceSet928->setTexCoord(*SoTextureCoordinate930);

SoShape924->setGeometry(*SoIndexedFaceSet928);

SoTransform923->addChild(*SoShape924);

SoHAnimSegment922->addChild(*SoTransform923);

SoHAnimJoint921->addChildren(*SoHAnimSegment922);

SoHAnimJoint851->addChildren(*SoHAnimJoint921);

SoHAnimJoint841->addChildren(*SoHAnimJoint851);

SoHAnimJoint831->addChildren(*SoHAnimJoint841);

SoHAnimJoint821->addChildren(*SoHAnimJoint831);

SoHAnimJoint811->addChildren(*SoHAnimJoint821);

SoHAnimJoint801->addChildren(*SoHAnimJoint811);

SoHAnimJoint791->addChildren(*SoHAnimJoint801);

SoHAnimJoint781->addChildren(*SoHAnimJoint791);

SoHAnimJoint771->addChildren(*SoHAnimJoint781);

SoHAnimJoint* SoHAnimJoint931 = new SoHAnimJoint();
SoHAnimJoint931->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint931->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint931->setCenter(new float[]{1.71,53.720001,-0.6127});
SoHAnimJoint931->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint931->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment932 = new SoHAnimSegment();
SoHAnimSegment932->X3DNode::setName(QString("l_clavicle"));
SoHAnimSegment932->setDEF(QString("hanim_l_clavicle"));
SoTransform* SoTransform933 = new SoTransform();
SoTransform933->setTranslation(new float[]{1.71,53.720001,-0.6127});
SoShape* SoShape934 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance935 = new SoVRMLAppearance();
SoMaterial* SoMaterial936 = new SoMaterial();
SoMaterial936->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance935->addChild(*SoMaterial936);

SoImageTexture* SoImageTexture937 = new SoImageTexture();
SoImageTexture937->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance935->addChild(*SoImageTexture937);

SoShape934->addChild(*SoVRMLAppearance935);

SoIndexedFaceSet* SoIndexedFaceSet938 = new SoIndexedFaceSet();
SoIndexedFaceSet938->setCoordIndex(new int32_t[]{9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1}, 104);
SoIndexedFaceSet938->setCreaseAngle(3.14159);
SoIndexedFaceSet938->setTexCoordIndex(new int32_t[]{9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1}, 104);
SoCoordinate* SoCoordinate939 = new SoCoordinate();
SoCoordinate939->setPoint(new float[]{4.99,0.104,-0.8644,5.073,0.4993,0.047,4.706,0.1695,1.198,4.631,-1.819,1.104,4.586,-1.648,-0.1248,3.376,0.3884,1.771,3.891,0.989,-0.0537,4.193,-2.49,-0.5713,4.388,-2.49,1.429,3.761,0.3238,-1.692,-0.1237,0.6312,-0.1883,-0.1237,0.3007,-0.9426,-0.1237,-1.418,-0.2577,-0.1237,-1.392,0.6264,-0.1237,0.2586,0.8179}, 45);
SoIndexedFaceSet938->setCoord(*SoCoordinate939);

SoTextureCoordinate* SoTextureCoordinate940 = new SoTextureCoordinate();
SoTextureCoordinate940->setPoint(new float[]{0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926}, 30);
SoIndexedFaceSet938->setTexCoord(*SoTextureCoordinate940);

SoShape934->setGeometry(*SoIndexedFaceSet938);

SoTransform933->addChild(*SoShape934);

SoHAnimSegment932->addChild(*SoTransform933);

SoHAnimJoint931->addChildren(*SoHAnimSegment932);

SoHAnimJoint* SoHAnimJoint941 = new SoHAnimJoint();
SoHAnimJoint941->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint941->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint941->setCenter(new float[]{5.464,52.970001,-0.5732});
SoHAnimJoint941->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint941->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment942 = new SoHAnimSegment();
SoHAnimSegment942->X3DNode::setName(QString("l_scapula"));
SoHAnimSegment942->setDEF(QString("hanim_l_scapula"));
SoTransform* SoTransform943 = new SoTransform();
SoTransform943->setTranslation(new float[]{5.464,52.970001,-0.5732});
SoShape* SoShape944 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance945 = new SoVRMLAppearance();
SoMaterial* SoMaterial946 = new SoMaterial();
SoMaterial946->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance945->addChild(*SoMaterial946);

SoImageTexture* SoImageTexture947 = new SoImageTexture();
SoImageTexture947->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance945->addChild(*SoImageTexture947);

SoShape944->addChild(*SoVRMLAppearance945);

SoIndexedFaceSet* SoIndexedFaceSet948 = new SoIndexedFaceSet();
SoIndexedFaceSet948->setCoordIndex(new int32_t[]{5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1}, 112);
SoIndexedFaceSet948->setCreaseAngle(3.14159);
SoIndexedFaceSet948->setTexCoordIndex(new int32_t[]{5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1}, 112);
SoCoordinate* SoCoordinate949 = new SoCoordinate();
SoCoordinate949->setPoint(new float[]{1.935,1.466,-0.0932,1.515,0.6492,-1.732,1.534,0.7105,1.619,-0.3782,1.139,1.732,0.1374,1.74,-0.0932,0.0076,1.074,-1.731,0.8341,-1.572,1.39,0.4391,-1.74,-0.6109,0.8275,-1.58,-0.6098,0.6342,-1.74,1.389,-1.237,1.407,-0.0712,-1.547,0.8515,-1.142,-0.7525,-1.603,-0.4744,-0.7511,-1.595,1.16,-1.51,1.034,1.296,-1.59,-0.0185,0.1351}, 48);
SoIndexedFaceSet948->setCoord(*SoCoordinate949);

SoTextureCoordinate* SoTextureCoordinate950 = new SoTextureCoordinate();
SoTextureCoordinate950->setPoint(new float[]{0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618}, 40);
SoIndexedFaceSet948->setTexCoord(*SoTextureCoordinate950);

SoShape944->setGeometry(*SoIndexedFaceSet948);

SoTransform943->addChild(*SoShape944);

SoHAnimSegment942->addChild(*SoTransform943);

SoHAnimJoint941->addChildren(*SoHAnimSegment942);

SoHAnimJoint* SoHAnimJoint951 = new SoHAnimJoint();
SoHAnimJoint951->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint951->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint951->setCenter(new float[]{7.336,52.380001,-0.1452});
SoHAnimJoint951->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint951->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment952 = new SoHAnimSegment();
SoHAnimSegment952->X3DNode::setName(QString("l_upperarm"));
SoHAnimSegment952->setDEF(QString("hanim_l_upperarm"));
SoTransform* SoTransform953 = new SoTransform();
SoTransform953->setTranslation(new float[]{7.336,52.380001,-0.1452});
SoShape* SoShape954 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance955 = new SoVRMLAppearance();
SoMaterial* SoMaterial956 = new SoMaterial();
SoMaterial956->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance955->addChild(*SoMaterial956);

SoImageTexture* SoImageTexture957 = new SoImageTexture();
SoImageTexture957->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance955->addChild(*SoImageTexture957);

SoShape954->addChild(*SoVRMLAppearance955);

SoIndexedFaceSet* SoIndexedFaceSet958 = new SoIndexedFaceSet();
SoIndexedFaceSet958->setCoordIndex(new int32_t[]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,40,-1,40,41,26,-1,27,26,41,-1,41,42,27,-1,28,27,42,-1,42,43,28,-1,29,28,43,-1,43,44,29,-1,25,29,44,-1,44,40,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1}, 304);
SoIndexedFaceSet958->setCreaseAngle(3.14159);
SoIndexedFaceSet958->setTexCoordIndex(new int32_t[]{2,0,1,-1,3,2,1,-1,55,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,49,35,36,-1,48,49,36,-1,37,48,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,38,39,56,-1,56,57,38,-1,40,50,58,-1,58,59,40,-1,41,40,59,-1,59,60,41,-1,42,41,60,-1,60,61,42,-1,39,42,61,-1,61,56,39,-1,43,44,39,-1,39,38,43,-1,45,52,51,-1,51,40,45,-1,46,45,40,-1,40,41,46,-1,47,46,41,-1,41,42,47,-1,44,47,42,-1,42,39,44,-1,34,33,44,-1,44,43,34,-1,35,54,53,-1,53,45,35,-1,36,35,45,-1,45,46,36,-1,37,36,46,-1,46,47,37,-1,33,37,47,-1,47,44,33,-1}, 304);
SoCoordinate* SoCoordinate959 = new SoCoordinate();
SoCoordinate959->setPoint(new float[]{1.164,1.767,-1.68,2.32,1.756,0.0337,1.047,1.768,1.663,-0.895,1.785,0.9556,-0.8229,1.784,-1.11,1.382,0.4997,-2.31,2.978,0.4855,0.057,1.221,0.5011,2.307,-1.462,0.525,1.33,-1.362,0.5241,-1.523,1.36,-2.014,-2.31,2.956,-2.028,0.057,1.198,-2.012,2.307,-1.484,-1.988,1.33,-1.384,-1.989,-1.523,1.398,-3.089,-2.442,3.087,-3.104,0.0619,1.228,-3.087,2.442,-1.61,-3.062,1.409,-1.505,-3.063,-1.61,0.8845,-1.238,-1.939,2.105,-1.248,-0.4543,1.473,-1.243,1.629,-0.1375,-1.229,1.432,-0.5011,-1.225,-0.7734,0.9027,-7.045,-1.569,2.17,-7.056,-0.378,1.514,-7.051,1.293,-0.1588,-7.036,1.135,-0.5365,-7.032,-0.634,0.9066,-11.1,-1.511,2.127,-11.11,-0.3651,1.495,-11.1,1.243,-0.1154,-11.09,1.091,-0.4791,-11.08,-0.6115,0.852,-11.65,-0.8985,1.567,-11.65,-0.2267,1.197,-11.65,0.716,0.2531,-11.64,0.6268,0.0399,-11.64,-0.3711,0.8845,-1.238,-1.939,2.105,-1.248,-0.4543,1.473,-1.243,1.629,-0.1375,-1.229,1.432,-0.5011,-1.225,-0.7734}, 135);
SoIndexedFaceSet958->setCoord(*SoCoordinate959);

SoTextureCoordinate* SoTextureCoordinate960 = new SoTextureCoordinate();
SoTextureCoordinate960->setPoint(new float[]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.9467,0.4943,0.9572,0.4943,0.9099,0.4943,0.9193,0.4943,0.9332,0.4943,0.9567,0.4691,0.9455,0.4691,0.9105,0.4691,0.9205,0.4691,0.9332,0.4691,0.9567,0.4913,0.9458,0.4913,0.9102,0.4913,0.9203,0.4913,0.9334,0.4913,0.8898,0.4943,0.9003,0.4943,0.8997,0.4691,0.8997,0.4691,0.8998,0.4913,0.8998,0.4913,0.9003,0.4943,0.3481,0.2114,0.9448,0.4374,0.9561,0.4374,0.8991,0.4374,0.9117,0.4374,0.9198,0.4374,0.9341,0.4374}, 124);
SoIndexedFaceSet958->setTexCoord(*SoTextureCoordinate960);

SoShape954->setGeometry(*SoIndexedFaceSet958);

SoTransform953->addChild(*SoShape954);

SoHAnimSegment952->addChild(*SoTransform953);

SoHAnimJoint951->addChildren(*SoHAnimSegment952);

SoHAnimJoint* SoHAnimJoint961 = new SoHAnimJoint();
SoHAnimJoint961->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint961->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint961->setCenter(new float[]{8.093,41.279999,-0.2502});
SoHAnimJoint961->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint961->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment962 = new SoHAnimSegment();
SoHAnimSegment962->X3DNode::setName(QString("l_forearm"));
SoHAnimSegment962->setDEF(QString("hanim_l_forearm"));
SoTransform* SoTransform963 = new SoTransform();
SoTransform963->setTranslation(new float[]{8.093,41.279999,-0.2502});
SoShape* SoShape964 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance965 = new SoVRMLAppearance();
SoMaterial* SoMaterial966 = new SoMaterial();
SoMaterial966->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance965->addChild(*SoMaterial966);

SoImageTexture* SoImageTexture967 = new SoImageTexture();
SoImageTexture967->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance965->addChild(*SoImageTexture967);

SoShape964->addChild(*SoVRMLAppearance965);

SoIndexedFaceSet* SoIndexedFaceSet968 = new SoIndexedFaceSet();
SoIndexedFaceSet968->setCoordIndex(new int32_t[]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1}, 184);
SoIndexedFaceSet968->setCreaseAngle(3.14159);
SoIndexedFaceSet968->setTexCoordIndex(new int32_t[]{2,3,4,-1,1,2,4,-1,0,1,4,-1,4,3,5,-1,5,6,4,-1,3,2,7,-1,7,5,3,-1,2,1,8,-1,8,7,2,-1,1,0,9,-1,9,8,1,-1,0,4,6,-1,6,9,0,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,11,16,-1,16,19,14,-1,22,23,24,-1,21,22,24,-1,20,21,24,-1,22,21,16,-1,16,15,22,-1,23,22,15,-1,15,17,23,-1,24,23,17,-1,17,18,24,-1,20,24,18,-1,18,19,20,-1,21,20,19,-1,19,16,21,-1}, 184);
SoCoordinate* SoCoordinate969 = new SoCoordinate();
SoCoordinate969->setPoint(new float[]{0.215,0.3047,-1.152,1.155,0.2966,-0.2588,0.6199,0.3013,1.04,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.625,1.472,-0.8561,-0.4271,0.7164,-0.8496,1.625,-1.079,-0.8342,1.482,-1.433,-0.8312,-0.6588,0.1328,-3.5,-1.607,1.551,-3.513,-0.4225,0.781,-2.925,1.61,-1.136,-2.909,1.468,-1.551,-3.486,-0.6519,0.0592,-8.713,-1.437,1.093,-8.722,-0.1279,0.5047,-8.716,1.51,-0.8932,-8.704,1.377,-1.169,-8.702,-0.3428,0.0092,-9.336,-0.8855,0.7154,-9.342,0.0084,0.3135,-9.339,1.043,-0.6412,-9.331,0.9519,-0.8292,-9.329,-0.1383}, 75);
SoIndexedFaceSet968->setCoord(*SoCoordinate969);

SoTextureCoordinate* SoTextureCoordinate970 = new SoTextureCoordinate();
SoTextureCoordinate970->setPoint(new float[]{0.8857,0.572,0.9344,0.572,0.9377,0.5719,0.8909,0.5718,0.8588,0.5719,0.8849,0.5578,0.8418,0.558,0.9588,0.5579,0.9536,0.5581,0.8765,0.5581,0.885,0.5257,0.8424,0.5258,0.9582,0.5328,0.9531,0.533,0.8768,0.526,0.8957,0.4625,0.8485,0.4627,0.9546,0.4626,0.9498,0.4628,0.8879,0.4628,0.8953,0.4552,0.8684,0.4551,0.9006,0.455,0.9378,0.4551,0.9345,0.4552}, 50);
SoIndexedFaceSet968->setTexCoord(*SoTextureCoordinate970);

SoShape964->setGeometry(*SoIndexedFaceSet968);

SoTransform963->addChild(*SoShape964);

SoHAnimSegment962->addChild(*SoTransform963);

SoHAnimJoint961->addChildren(*SoHAnimSegment962);

SoHAnimJoint* SoHAnimJoint971 = new SoHAnimJoint();
SoHAnimJoint971->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint971->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint971->setCenter(new float[]{8.086,32.189999,-0.2233});
SoHAnimJoint971->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint971->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment972 = new SoHAnimSegment();
SoHAnimSegment972->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment972->setDEF(QString("hanim_l_carpal"));
SoTransform* SoTransform973 = new SoTransform();
SoTransform973->setTranslation(new float[]{8.086,32.189999,-0.2233});
SoShape* SoShape974 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance975 = new SoVRMLAppearance();
SoMaterial* SoMaterial976 = new SoMaterial();
SoMaterial976->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance975->addChild(*SoMaterial976);

SoImageTexture* SoImageTexture977 = new SoImageTexture();
SoImageTexture977->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance975->addChild(*SoImageTexture977);

SoShape974->addChild(*SoVRMLAppearance975);

SoIndexedFaceSet* SoIndexedFaceSet978 = new SoIndexedFaceSet();
SoIndexedFaceSet978->setCoordIndex(new int32_t[]{0,1,12,-1,12,11,0,-1,1,2,13,-1,13,12,1,-1,2,17,10,-1,10,13,2,-1,3,4,8,-1,8,16,3,-1,5,19,21,-1,21,20,5,-1,6,14,15,-1,15,18,6,-1,6,7,9,-1,9,14,6,-1,7,0,11,-1,11,9,7,-1,15,19,5,-1,5,18,15,-1,10,17,3,-1,3,16,10,-1,4,20,21,-1,21,8,4,-1,0,22,1,-1,1,22,2,-1,2,22,17,-1,17,22,3,-1,3,22,4,-1,4,22,20,-1,20,22,5,-1,5,22,18,-1,18,22,6,-1,6,22,7,-1,7,22,0,-1,16,23,24,-1,24,10,16,-1,10,24,25,-1,25,13,10,-1,13,25,26,-1,26,12,13,-1,12,26,27,-1,27,11,12,-1,11,27,28,-1,28,9,11,-1,9,28,29,-1,29,14,9,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,19,15,-1,19,31,32,-1,32,21,19,-1,21,32,33,-1,33,8,21,-1,8,33,23,-1,23,16,8,-1,23,34,24,-1,24,34,25,-1,25,34,26,-1,26,34,27,-1,27,34,28,-1,28,34,29,-1,29,34,30,-1,30,34,31,-1,31,34,32,-1,32,34,33,-1,33,34,23,-1}, 264);
SoIndexedFaceSet978->setCreaseAngle(3.14159);
SoIndexedFaceSet978->setTexCoordIndex(new int32_t[]{2,1,0,-1,0,3,2,-1,1,5,4,-1,4,0,1,-1,5,6,7,-1,7,4,5,-1,10,9,8,-1,8,11,10,-1,12,15,38,-1,38,37,12,-1,17,16,19,-1,19,18,17,-1,17,21,20,-1,20,16,17,-1,21,35,36,-1,36,20,21,-1,19,15,12,-1,12,18,19,-1,7,6,10,-1,10,11,7,-1,9,13,14,-1,14,8,9,-1,2,22,1,-1,1,22,5,-1,5,22,6,-1,6,22,10,-1,10,22,9,-1,9,22,13,-1,37,39,12,-1,12,39,18,-1,18,39,17,-1,17,39,21,-1,21,39,35,-1,11,24,23,-1,23,7,11,-1,7,23,25,-1,25,4,7,-1,4,25,26,-1,26,0,4,-1,0,26,27,-1,27,3,0,-1,36,40,28,-1,28,20,36,-1,20,28,29,-1,29,16,20,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,15,19,-1,15,31,41,-1,41,38,15,-1,14,32,33,-1,33,8,14,-1,8,33,24,-1,24,11,8,-1,24,34,23,-1,23,34,25,-1,25,34,26,-1,26,34,27,-1,40,42,28,-1,28,42,29,-1,29,42,30,-1,30,42,31,-1,31,42,41,-1,32,34,33,-1,33,34,24,-1}, 264);
SoCoordinate* SoCoordinate979 = new SoCoordinate();
SoCoordinate979->setPoint(new float[]{0.0718,0.1105,-1.01,0.5108,0.0965,-0.79,0.6808,0.1049,-0.212,0.5475,0.1209,0.7178,0.2978,0.1182,1.102,-0.5959,0.1061,0.734,-0.6714,0.0918,-0.2167,-0.4399,0.0876,-0.7804,0.3749,-0.7899,1.333,-0.4677,-0.8492,-0.9914,0.6527,-0.6995,0.3258,0.0476,-0.832,-1.286,0.5788,-0.8489,-0.9909,0.6835,-0.6804,-0.3282,-0.6279,-0.6805,-0.3268,-0.6351,-0.6994,0.3349,0.5385,-0.8096,0.8587,0.6721,0.1026,0.2306,-0.6716,0.0989,0.2384,-0.5705,-0.8097,0.8599,-0.3,0.1135,1.081,-0.3211,-0.7905,1.299,0.0594,0.3233,-0.0086,0.4051,-1.1,0.8323,0.5152,-0.9892,0.322,0.5452,-0.9698,-0.3815,0.4503,-1.137,-1.027,0.0399,-1.141,-1.188,-0.3455,-1.137,-1.033,-0.4906,-0.9699,-0.3741,-0.4977,-0.989,0.341,-0.4908,-1.1,0.8359,-0.2387,-1.082,1.197,0.1823,-1.082,1.223,-0.0391,-1.269,-0.0735}, 105);
SoIndexedFaceSet978->setCoord(*SoCoordinate979);

SoTextureCoordinate* SoTextureCoordinate980 = new SoTextureCoordinate();
SoTextureCoordinate980->setPoint(new float[]{0.7729,0.0334,0.7695,0.0151,0.7598,0.0161,0.7624,0.0345,0.791,0.0281,0.7896,0.0131,0.8111,0.0113,0.813,0.0266,0.8476,0.0256,0.8461,0.0079,0.8312,0.0091,0.8327,0.0273,0.9162,0.2899,0.8453,0.0081,0.8466,0.0257,0.9122,0.2724,0.9531,0.2644,0.9573,0.2786,0.936,0.2844,0.9315,0.2698,0.9706,0.2558,0.9766,0.2733,0.8032,0.0047,0.8134,0.033,0.8325,0.0338,0.792,0.0345,0.7756,0.0396,0.7675,0.0404,0.9666,0.2503,0.9509,0.2584,0.9297,0.2636,0.9113,0.266,0.8439,0.0324,0.8447,0.0323,0.8081,0.0397,0.986,0.2708,0.9803,0.2531,0.9032,0.2936,0.8989,0.2764,0.9452,0.2896,0.9743,0.2482,0.9004,0.2693,0.9343,0.2559}, 86);
SoIndexedFaceSet978->setTexCoord(*SoTextureCoordinate980);

SoShape974->setGeometry(*SoIndexedFaceSet978);

SoTransform973->addChild(*SoShape974);

SoHAnimSegment972->addChild(*SoTransform973);

SoHAnimJoint971->addChildren(*SoHAnimSegment972);

SoHAnimJoint* SoHAnimJoint981 = new SoHAnimJoint();
SoHAnimJoint981->X3DNode::setName(QString("l_midcarpal_1"));
SoHAnimJoint981->setDEF(QString("hanim_l_midcarpal_1"));
SoHAnimJoint981->setCenter(new float[]{8.057,31.379999,0.859});
SoHAnimJoint981->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint981->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment982 = new SoHAnimSegment();
SoHAnimSegment982->X3DNode::setName(QString("l_trapezium"));
SoHAnimSegment982->setDEF(QString("hanim_l_trapezium"));
SoTransform* SoTransform983 = new SoTransform();
SoTransform983->setTranslation(new float[]{8.057,31.379999,0.859});
SoShape* SoShape984 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance985 = new SoVRMLAppearance();
SoMaterial* SoMaterial986 = new SoMaterial();
SoMaterial986->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance985->addChild(*SoMaterial986);

SoImageTexture* SoImageTexture987 = new SoImageTexture();
SoImageTexture987->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance985->addChild(*SoImageTexture987);

SoShape984->addChild(*SoVRMLAppearance985);

SoIndexedFaceSet* SoIndexedFaceSet988 = new SoIndexedFaceSet();
SoIndexedFaceSet988->setCoordIndex(new int32_t[]{6,5,3,-1,3,0,6,-1,5,8,2,-1,2,3,5,-1,1,4,7,-1,2,8,7,-1,7,4,2,-1,14,17,16,-1,16,15,14,-1,9,13,10,-1,10,13,12,-1,12,11,10,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,2,4,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,0,3,-1,6,14,15,-1,15,5,6,-1,5,15,16,-1,16,8,5,-1,8,16,17,-1,17,7,8,-1,20,21,22,-1,22,23,24,-1,24,25,18,-1,22,24,18,-1,20,22,18,-1,19,20,18,-1,6,0,19,-1,19,18,6,-1,0,13,20,-1,20,19,0,-1,13,9,21,-1,21,20,13,-1,9,1,22,-1,22,21,9,-1,1,7,23,-1,23,22,1,-1,7,17,24,-1,24,23,7,-1,17,14,25,-1,25,24,17,-1,14,6,18,-1,18,25,14,-1}, 192);
SoIndexedFaceSet988->setCreaseAngle(3.14159);
SoIndexedFaceSet988->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,7,8,6,-1,18,19,6,-1,6,8,18,-1,21,12,23,-1,23,22,21,-1,9,10,15,-1,15,10,17,-1,17,16,15,-1,7,20,24,-1,24,8,7,-1,8,24,25,-1,25,18,8,-1,4,16,17,-1,17,2,4,-1,2,17,10,-1,10,1,2,-1,0,11,13,-1,13,3,0,-1,3,13,14,-1,14,5,3,-1,19,23,12,-1,12,6,19,-1,28,29,30,-1,30,31,32,-1,32,33,26,-1,30,32,26,-1,28,30,26,-1,27,28,26,-1,0,1,27,-1,27,26,0,-1,1,10,28,-1,28,27,1,-1,10,9,29,-1,29,28,10,-1,20,7,30,-1,30,29,20,-1,7,6,31,-1,31,30,7,-1,6,12,32,-1,32,31,6,-1,12,21,33,-1,33,32,12,-1,11,0,26,-1,26,33,11,-1}, 192);
SoCoordinate* SoCoordinate989 = new SoCoordinate();
SoCoordinate989->setPoint(new float[]{0.7053,-0.7802,-0.0997,-0.6389,-0.7802,-0.0997,-0.3989,-0.4974,0.6093,0.4483,-0.4983,0.6785,-0.509,-0.6051,0.3711,0.4043,0.0139,0.2509,0.568,-0.0058,-0.2235,-0.5411,-0.0059,-0.2224,-0.2917,0.0133,0.2166,-0.4859,-0.9548,-0.0464,-0.5165,-0.9346,0.2403,-0.3483,-0.7384,0.5986,0.361,-0.6613,0.6657,0.567,-0.9676,-0.068,0.4266,0.2991,-0.277,0.207,0.313,0.1078,-0.2037,0.3127,0.0824,-0.4523,0.2971,-0.2735,0.5103,-0.0352,-0.2979,0.6419,-0.7776,-0.1796,0.5366,-0.9203,-0.1557,-0.4581,-0.908,-0.1342,-0.5765,-0.7738,-0.1806,-0.4825,-0.0296,-0.298,-0.4075,0.2265,-0.341,0.3881,0.2283,-0.3443}, 78);
SoIndexedFaceSet988->setCoord(*SoCoordinate989);

SoTextureCoordinate* SoTextureCoordinate990 = new SoTextureCoordinate();
SoTextureCoordinate990->setPoint(new float[]{0.8327,0.0273,0.8381,0.0441,0.8625,0.0344,0.8476,0.0256,0.8625,0.0359,0.8466,0.0257,0.9122,0.2724,0.904,0.2568,0.8948,0.2599,0.8401,0.0478,0.8395,0.0482,0.8319,0.0206,0.9141,0.2788,0.844,0.0192,0.8432,0.0193,0.8491,0.0466,0.8611,0.0409,0.8611,0.0397,0.8814,0.2691,0.8989,0.2764,0.9014,0.2535,0.9142,0.2789,0.9026,0.2823,0.9033,0.2821,0.8928,0.2563,0.8819,0.264,0.8327,0.0273,0.8381,0.0441,0.8395,0.0482,0.8401,0.0478,0.904,0.2568,0.9122,0.2724,0.9141,0.2788,0.9142,0.2789}, 68);
SoIndexedFaceSet988->setTexCoord(*SoTextureCoordinate990);

SoShape984->setGeometry(*SoIndexedFaceSet988);

SoTransform983->addChild(*SoShape984);

SoHAnimSegment982->addChild(*SoTransform983);

SoHAnimJoint981->addChildren(*SoHAnimSegment982);

SoHAnimJoint* SoHAnimJoint991 = new SoHAnimJoint();
SoHAnimJoint991->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint991->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint991->setCenter(new float[]{8.022,30.780001,1.155});
SoHAnimJoint991->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint991->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment992 = new SoHAnimSegment();
SoHAnimSegment992->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimSegment992->setDEF(QString("hanim_l_metacarpal_1"));
SoTransform* SoTransform993 = new SoTransform();
SoTransform993->setTranslation(new float[]{8.022,30.780001,1.155});
SoShape* SoShape994 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance995 = new SoVRMLAppearance();
SoMaterial* SoMaterial996 = new SoMaterial();
SoMaterial996->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance995->addChild(*SoMaterial996);

SoImageTexture* SoImageTexture997 = new SoImageTexture();
SoImageTexture997->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance995->addChild(*SoImageTexture997);

SoShape994->addChild(*SoVRMLAppearance995);

SoIndexedFaceSet* SoIndexedFaceSet998 = new SoIndexedFaceSet();
SoIndexedFaceSet998->setCoordIndex(new int32_t[]{1,2,9,-1,9,8,1,-1,8,10,0,-1,0,1,8,-1,2,3,6,-1,6,9,2,-1,0,10,7,-1,7,4,0,-1,5,6,3,-1,22,21,25,-1,22,25,24,-1,23,22,24,-1,19,18,17,-1,17,20,19,-1,13,12,11,-1,11,14,13,-1,14,11,16,-1,16,15,14,-1,3,11,12,-1,12,5,3,-1,5,12,13,-1,13,4,5,-1,4,13,14,-1,14,0,4,-1,0,14,15,-1,15,1,0,-1,1,15,16,-1,16,2,1,-1,2,16,11,-1,11,3,2,-1,7,17,18,-1,18,4,7,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,6,5,-1,6,20,17,-1,17,7,6,-1,10,21,22,-1,22,7,10,-1,7,22,23,-1,23,6,7,-1,6,23,24,-1,24,9,6,-1,9,24,25,-1,25,8,9,-1,8,25,21,-1,21,10,8,-1}, 192);
SoIndexedFaceSet998->setCreaseAngle(3.14159);
SoIndexedFaceSet998->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,27,4,28,-1,28,26,27,-1,3,6,7,-1,7,2,3,-1,28,4,30,-1,30,29,28,-1,10,7,6,-1,15,14,13,-1,15,13,12,-1,11,15,12,-1,16,19,18,-1,18,17,16,-1,20,23,22,-1,22,21,20,-1,21,22,25,-1,25,24,21,-1,6,22,23,-1,23,10,6,-1,10,23,20,-1,20,8,10,-1,8,20,21,-1,21,5,8,-1,5,21,24,-1,24,0,5,-1,0,24,25,-1,25,3,0,-1,3,25,22,-1,22,6,3,-1,30,34,35,-1,35,29,30,-1,8,19,16,-1,16,10,8,-1,10,16,17,-1,17,7,10,-1,7,17,18,-1,18,9,7,-1,4,32,33,-1,33,30,4,-1,9,15,11,-1,11,7,9,-1,7,11,12,-1,12,2,7,-1,2,12,13,-1,13,1,2,-1,27,31,32,-1,32,4,27,-1}, 192);
SoCoordinate* SoCoordinate999 = new SoCoordinate();
SoCoordinate999->setPoint(new float[]{-0.5751,-0.8119,0.3729,-0.302,-0.6141,0.6443,0.3814,-0.5011,0.7438,0.716,-0.9041,0.1581,-0.366,-1.245,-0.0839,0.8186,-0.9968,-0.0288,0.7398,-0.1792,-0.3959,-0.6043,-0.1792,-0.3959,-0.3644,0.1036,0.3132,0.4829,0.1027,0.3823,-0.4744,-0.0041,0.0749,0.3732,-1.179,0.3002,0.3531,-1.244,0.2233,-0.2445,-1.314,0.124,-0.452,-1.179,0.3706,-0.2104,-0.955,0.6578,0.2066,-0.8325,0.7941,-0.4224,-0.2513,-0.5443,-0.2417,-1.271,-0.2781,0.6108,-1.052,-0.2554,0.5836,-0.2515,-0.5446,-0.3922,0.0827,-0.0195,-0.505,-0.0166,-0.2776,0.5161,-0.0391,-0.2686,0.3757,0.1717,0.2582,-0.1802,0.1719,0.215}, 78);
SoIndexedFaceSet998->setCoord(*SoCoordinate999);

SoTextureCoordinate* SoTextureCoordinate1000 = new SoTextureCoordinate();
SoTextureCoordinate1000->setPoint(new float[]{0.8819,0.0483,0.8625,0.0359,0.8625,0.0344,0.8786,0.0507,0.8948,0.2599,0.867,0.0598,0.857,0.0621,0.8381,0.0441,0.8533,0.0697,0.8381,0.0441,0.8503,0.0646,0.8419,0.0407,0.8588,0.0334,0.8588,0.0347,0.8467,0.0405,0.8415,0.0402,0.8445,0.0658,0.8331,0.0451,0.8331,0.0451,0.8468,0.0705,0.8593,0.0711,0.8712,0.0644,0.8626,0.068,0.8607,0.0696,0.877,0.0609,0.8798,0.0581,0.8632,0.2548,0.8814,0.2691,0.8729,0.2464,0.8847,0.2342,0.904,0.2568,0.8853,0.2697,0.8962,0.2618,0.9014,0.2613,0.9088,0.2549,0.8909,0.2323}, 72);
SoIndexedFaceSet998->setTexCoord(*SoTextureCoordinate1000);

SoShape994->setGeometry(*SoIndexedFaceSet998);

SoTransform993->addChild(*SoShape994);

SoHAnimSegment992->addChild(*SoTransform993);

SoHAnimJoint991->addChildren(*SoHAnimSegment992);

SoHAnimJoint* SoHAnimJoint1001 = new SoHAnimJoint();
SoHAnimJoint1001->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint1001->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint1001->setCenter(new float[]{8.046,29.9,1.59});
SoHAnimJoint1001->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1001->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1002 = new SoHAnimSegment();
SoHAnimSegment1002->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimSegment1002->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoTransform* SoTransform1003 = new SoTransform();
SoTransform1003->setTranslation(new float[]{8.046,29.9,1.59});
SoShape* SoShape1004 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1005 = new SoVRMLAppearance();
SoMaterial* SoMaterial1006 = new SoMaterial();
SoMaterial1006->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1005->addChild(*SoMaterial1006);

SoImageTexture* SoImageTexture1007 = new SoImageTexture();
SoImageTexture1007->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1005->addChild(*SoImageTexture1007);

SoShape1004->addChild(*SoVRMLAppearance1005);

SoIndexedFaceSet* SoIndexedFaceSet1008 = new SoIndexedFaceSet();
SoIndexedFaceSet1008->setCoordIndex(new int32_t[]{5,0,6,-1,7,13,14,-1,14,3,7,-1,5,10,17,-1,17,0,5,-1,4,9,10,-1,10,5,4,-1,3,14,9,-1,9,4,3,-1,0,17,19,-1,19,1,0,-1,1,19,13,-1,13,7,1,-1,1,2,0,-1,0,2,8,-1,8,6,0,-1,9,12,11,-1,11,10,9,-1,13,16,15,-1,15,14,13,-1,10,11,18,-1,18,17,10,-1,19,20,16,-1,16,13,19,-1,17,18,20,-1,20,19,17,-1,14,15,12,-1,12,9,14,-1,15,16,20,-1,20,12,15,-1,11,12,20,-1,20,18,11,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,8,21,22,-1,22,6,8,-1,6,22,23,-1,23,5,6,-1,5,23,24,-1,24,4,5,-1,4,24,25,-1,25,3,4,-1,3,25,26,-1,26,7,3,-1,27,32,31,-1,31,30,27,-1,7,27,28,-1,28,1,7,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,8,2,-1,8,30,31,-1,31,21,8,-1,21,31,32,-1,32,26,21,-1,26,32,27,-1,27,7,26,-1}, 248);
SoIndexedFaceSet1008->setCreaseAngle(3.14159);
SoIndexedFaceSet1008->setTexCoordIndex(new int32_t[]{0,2,1,-1,36,35,34,-1,34,33,36,-1,0,8,7,-1,7,2,0,-1,10,9,8,-1,8,0,10,-1,33,34,37,-1,37,38,33,-1,2,7,12,-1,12,11,2,-1,39,40,35,-1,35,36,39,-1,11,13,2,-1,2,13,14,-1,14,1,2,-1,9,16,15,-1,15,8,9,-1,5,18,17,-1,17,4,5,-1,8,15,19,-1,19,7,8,-1,12,20,18,-1,18,5,12,-1,7,19,20,-1,20,12,7,-1,4,17,16,-1,16,9,4,-1,17,18,20,-1,20,16,17,-1,15,16,20,-1,20,19,15,-1,26,25,24,-1,24,23,22,-1,26,24,22,-1,21,26,22,-1,28,27,30,-1,30,29,28,-1,14,21,22,-1,22,1,14,-1,1,22,23,-1,23,0,1,-1,0,23,24,-1,24,10,0,-1,10,24,25,-1,25,3,10,-1,33,41,42,-1,42,36,33,-1,27,32,31,-1,31,30,27,-1,6,27,28,-1,28,11,6,-1,11,28,29,-1,29,13,11,-1,13,29,30,-1,30,14,13,-1,14,30,31,-1,31,21,14,-1,21,31,32,-1,32,26,21,-1,42,44,43,-1,43,36,42,-1}, 248);
SoCoordinate* SoCoordinate1009 = new SoCoordinate();
SoCoordinate1009->setPoint(new float[]{0.648,-0.1572,-0.1816,0.2215,-0.4696,-0.3727,0.7293,-0.3514,-0.3769,-0.5989,0.0674,-0.062,-0.3258,0.2652,0.2094,0.3575,0.3782,0.3089,0.6921,-0.0248,-0.2768,-0.3898,-0.3658,-0.5188,0.7948,-0.1175,-0.4637,-0.2134,-0.6161,0.8058,0.3101,-0.4028,0.7384,0.1954,-0.8397,0.9419,-0.1104,-0.9591,0.8926,-0.2493,-1.151,0.2193,-0.5111,-0.832,0.6281,-0.3686,-0.981,0.7131,-0.1898,-1.227,0.383,0.5399,-0.798,0.2786,0.4043,-1.127,0.5533,0.1346,-1.116,0.1902,0.1035,-1.254,0.4943,0.437,0.1054,-0.572,0.4429,0.1652,-0.5023,0.1619,0.4787,-0.0154,-0.2164,0.398,-0.0699,-0.3666,0.2424,-0.317,-0.2404,0.0654,-0.5934,-0.2919,-0.3931,-0.7578,0.1692,-0.5049,-0.6608,0.5909,-0.3962,-0.6566,0.6389,-0.2511,-0.7092,0.4111,-0.0844,-0.8017,-0.1733,-0.1282,-0.8504}, 99);
SoIndexedFaceSet1008->setCoord(*SoCoordinate1009);

SoTextureCoordinate* SoTextureCoordinate1010 = new SoTextureCoordinate();
SoTextureCoordinate1010->setPoint(new float[]{0.8786,0.0507,0.857,0.0621,0.8601,0.0649,0.867,0.0598,0.8887,0.0786,0.8747,0.0865,0.8533,0.0697,0.876,0.0783,0.893,0.0688,0.8992,0.0702,0.8819,0.0483,0.8561,0.0728,0.8736,0.0851,0.8532,0.0697,0.8503,0.0646,0.8986,0.0785,0.897,0.0809,0.8914,0.0813,0.8802,0.0861,0.8841,0.0856,0.8821,0.0883,0.8487,0.0595,0.8509,0.0581,0.8683,0.0489,0.868,0.0507,0.8608,0.0544,0.8505,0.0603,0.8455,0.0706,0.8468,0.073,0.8455,0.0707,0.8437,0.0676,0.8416,0.0639,0.8422,0.0648,0.8729,0.2464,0.8482,0.2317,0.8612,0.2211,0.8847,0.2342,0.8433,0.2381,0.8632,0.2548,0.8814,0.2316,0.8625,0.2222,0.8799,0.2506,0.8891,0.243,0.8922,0.232,0.8964,0.2371}, 90);
SoIndexedFaceSet1008->setTexCoord(*SoTextureCoordinate1010);

SoShape1004->setGeometry(*SoIndexedFaceSet1008);

SoTransform1003->addChild(*SoShape1004);

SoHAnimSegment1002->addChild(*SoTransform1003);

SoHAnimJoint1001->addChildren(*SoHAnimSegment1002);

SoHAnimJoint* SoHAnimJoint1011 = new SoHAnimJoint();
SoHAnimJoint1011->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint1011->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint1011->setCenter(new float[]{8.118,29.07,2.207});
SoHAnimJoint1011->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1011->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1012 = new SoHAnimSegment();
SoHAnimSegment1012->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSegment1012->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoTransform* SoTransform1013 = new SoTransform();
SoTransform1013->setTranslation(new float[]{8.118,29.07,2.207});
SoShape* SoShape1014 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1015 = new SoVRMLAppearance();
SoMaterial* SoMaterial1016 = new SoMaterial();
SoMaterial1016->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1015->addChild(*SoMaterial1016);

SoImageTexture* SoImageTexture1017 = new SoImageTexture();
SoImageTexture1017->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1015->addChild(*SoImageTexture1017);

SoShape1014->addChild(*SoVRMLAppearance1015);

SoIndexedFaceSet* SoIndexedFaceSet1018 = new SoIndexedFaceSet();
SoIndexedFaceSet1018->setCoordIndex(new int32_t[]{0,11,28,-1,28,29,0,-1,32,1,17,-1,17,2,32,-1,4,17,1,-1,1,3,4,-1,11,5,31,-1,31,28,11,-1,29,32,2,-1,2,0,29,-1,4,3,31,-1,31,5,4,-1,23,1,32,-1,24,31,3,-1,24,3,1,-1,1,23,24,-1,4,8,7,-1,7,6,4,-1,5,11,10,-1,10,9,5,-1,4,5,9,-1,9,8,4,-1,10,12,14,-1,14,13,10,-1,2,17,16,-1,16,15,2,-1,0,2,15,-1,15,12,0,-1,8,9,18,-1,18,7,8,-1,18,9,10,-1,10,13,18,-1,6,19,21,-1,21,20,6,-1,22,14,21,-1,21,19,22,-1,17,6,20,-1,20,16,17,-1,6,17,4,-1,11,0,12,-1,12,10,11,-1,13,14,22,-1,6,7,18,-1,18,19,6,-1,18,13,22,-1,22,19,18,-1,16,20,21,-1,21,15,16,-1,21,14,12,-1,12,15,21,-1,24,23,26,-1,26,25,24,-1,28,27,30,-1,30,29,28,-1,27,25,26,-1,26,30,27,-1,24,25,27,-1,27,31,24,-1,32,30,26,-1,26,23,32,-1,30,32,29,-1,28,31,27,-1}, 248);
SoIndexedFaceSet1018->setCreaseAngle(3.14159);
SoIndexedFaceSet1018->setTexCoordIndex(new int32_t[]{3,2,34,-1,34,33,3,-1,4,7,6,-1,6,5,4,-1,9,6,7,-1,7,8,9,-1,2,38,37,-1,37,34,2,-1,33,35,36,-1,36,3,33,-1,9,8,10,-1,10,11,9,-1,12,7,4,-1,13,10,8,-1,13,8,7,-1,7,12,13,-1,9,16,15,-1,15,14,9,-1,38,2,18,-1,18,39,38,-1,9,11,17,-1,17,16,9,-1,18,19,21,-1,21,20,18,-1,5,6,23,-1,23,22,5,-1,3,36,40,-1,40,19,3,-1,16,17,24,-1,24,15,16,-1,41,39,18,-1,18,20,41,-1,14,25,27,-1,27,26,14,-1,28,21,43,-1,43,42,28,-1,6,14,26,-1,26,23,6,-1,14,6,9,-1,2,3,19,-1,19,18,2,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,41,20,28,-1,28,42,41,-1,23,26,27,-1,27,22,23,-1,43,21,19,-1,19,40,43,-1,13,12,30,-1,30,29,13,-1,1,31,32,-1,32,0,1,-1,31,29,30,-1,30,32,31,-1,13,29,31,-1,31,10,13,-1,4,32,30,-1,30,12,4,-1,32,4,0,-1,1,10,31,-1}, 248);
SoCoordinate* SoCoordinate1019 = new SoCoordinate();
SoCoordinate1019->setPoint(new float[]{-0.3337,-0.7896,-0.0218,0.4001,-0.2756,-0.0935,0.007,-0.7974,-0.0081,0.1798,0.0821,0.3404,0.0929,-0.4091,0.5794,-0.2993,-0.3965,0.5693,0.1153,-0.9089,0.6039,0.0672,-0.8379,0.6779,-0.01,-0.7103,0.7249,-0.2924,-0.7333,0.742,-0.4924,-0.785,0.5516,-0.5321,-0.5261,0.3643,-0.3318,-1.035,0.1941,-0.4237,-0.9358,0.5457,-0.334,-1.054,0.3651,-0.0387,-1.061,0.2343,0.1633,-0.9486,0.3874,0.2892,-0.673,0.1983,-0.2076,-0.9481,0.6916,-0.1404,-1.048,0.5886,0.1515,-0.9429,0.5128,-0.0911,-1.101,0.4569,-0.3732,-1.009,0.4629,0.468,0.0378,-0.3382,0.2382,0.433,0.1216,-0.0212,0.4536,-0.0258,0.2254,0.0652,-0.4619,-0.4366,0.3569,-0.1582,-0.583,0.0038,0.0113,-0.3212,-0.3156,-0.3975,-0.19,-0.0315,-0.5942,-0.2852,0.2197,0.189,0.0627,-0.2806,-0.4266}, 99);
SoIndexedFaceSet1018->setCoord(*SoCoordinate1019);

SoTextureCoordinate* SoTextureCoordinate1020 = new SoTextureCoordinate();
SoTextureCoordinate1020->setPoint(new float[]{0.8747,0.0865,0.8887,0.0786,0.8299,0.2203,0.8424,0.2111,0.8736,0.0851,0.8939,0.0989,0.8978,0.0975,0.8834,0.0852,0.8992,0.0766,0.9092,0.0888,0.8992,0.0702,0.9115,0.0859,0.876,0.0783,0.893,0.0688,0.9109,0.102,0.9135,0.0996,0.9144,0.0973,0.9172,0.0962,0.8241,0.2146,0.8338,0.2074,0.8247,0.2116,0.8291,0.2083,0.9028,0.1054,0.9046,0.1032,0.9153,0.1012,0.9125,0.1038,0.9081,0.1033,0.9082,0.1057,0.8266,0.2097,0.8885,0.0681,0.8723,0.0776,0.8843,0.0701,0.8696,0.0781,0.8612,0.2211,0.8482,0.2317,0.8625,0.2222,0.8417,0.2109,0.8433,0.2381,0.8245,0.2237,0.8192,0.2167,0.8322,0.2071,0.8195,0.2131,0.8224,0.2103,0.8256,0.2083}, 88);
SoIndexedFaceSet1018->setTexCoord(*SoTextureCoordinate1020);

SoShape1014->setGeometry(*SoIndexedFaceSet1018);

SoTransform1013->addChild(*SoShape1014);

SoHAnimSegment1012->addChild(*SoTransform1013);

SoHAnimJoint1011->addChildren(*SoHAnimSegment1012);

SoHAnimJoint1001->addChildren(*SoHAnimJoint1011);

SoHAnimJoint991->addChildren(*SoHAnimJoint1001);

SoHAnimJoint981->addChildren(*SoHAnimJoint991);

SoHAnimJoint971->addChildren(*SoHAnimJoint981);

SoHAnimJoint* SoHAnimJoint1021 = new SoHAnimJoint();
SoHAnimJoint1021->X3DNode::setName(QString("l_midcarpal_2"));
SoHAnimJoint1021->setDEF(QString("hanim_l_midcarpal_2"));
SoHAnimJoint1021->setCenter(new float[]{8.057,31.42,0.3741});
SoHAnimJoint1021->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1021->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1022 = new SoHAnimSegment();
SoHAnimSegment1022->X3DNode::setName(QString("l_trapezoid"));
SoHAnimSegment1022->setDEF(QString("hanim_l_trapezoid"));
SoTransform* SoTransform1023 = new SoTransform();
SoTransform1023->setTranslation(new float[]{8.057,31.42,0.3741});
SoShape* SoShape1024 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1025 = new SoVRMLAppearance();
SoMaterial* SoMaterial1026 = new SoMaterial();
SoMaterial1026->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1025->addChild(*SoMaterial1026);

SoImageTexture* SoImageTexture1027 = new SoImageTexture();
SoImageTexture1027->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1025->addChild(*SoImageTexture1027);

SoShape1024->addChild(*SoVRMLAppearance1025);

SoIndexedFaceSet* SoIndexedFaceSet1028 = new SoIndexedFaceSet();
SoIndexedFaceSet1028->setCoordIndex(new int32_t[]{14,12,1,-1,1,2,14,-1,0,13,15,-1,15,3,0,-1,11,10,9,-1,9,8,11,-1,4,5,17,-1,17,16,4,-1,18,6,7,-1,7,19,18,-1,0,4,16,-1,16,13,0,-1,12,17,5,-1,5,1,12,-1,1,5,4,-1,4,0,1,-1,2,6,18,-1,18,14,2,-1,15,19,7,-1,7,3,15,-1,3,7,6,-1,6,2,3,-1,3,8,9,-1,9,0,3,-1,0,9,10,-1,10,1,0,-1,1,10,11,-1,11,2,1,-1,2,11,8,-1,8,3,2,-1,22,23,24,-1,24,25,26,-1,26,27,20,-1,24,26,20,-1,22,24,20,-1,21,22,20,-1,12,14,21,-1,21,20,12,-1,14,18,22,-1,22,21,14,-1,18,19,23,-1,23,22,18,-1,19,15,24,-1,24,23,19,-1,15,13,25,-1,25,24,15,-1,13,16,26,-1,26,25,13,-1,16,17,27,-1,27,26,16,-1,17,12,20,-1,20,27,17,-1}, 208);
SoIndexedFaceSet1028->setCreaseAngle(3.14159);
SoIndexedFaceSet1028->setTexCoordIndex(new int32_t[]{21,19,1,-1,1,0,21,-1,12,20,22,-1,22,13,12,-1,5,4,7,-1,7,6,5,-1,8,9,25,-1,25,23,8,-1,26,17,18,-1,18,28,26,-1,12,16,24,-1,24,20,12,-1,19,25,9,-1,9,1,19,-1,1,9,8,-1,8,2,1,-1,0,10,27,-1,27,21,0,-1,22,28,18,-1,18,13,22,-1,3,11,10,-1,10,0,3,-1,13,14,15,-1,15,12,13,-1,2,7,4,-1,4,1,2,-1,1,4,5,-1,5,0,1,-1,0,5,6,-1,6,3,0,-1,31,32,33,-1,33,34,35,-1,35,36,29,-1,33,35,29,-1,31,33,29,-1,30,31,29,-1,19,21,30,-1,30,29,19,-1,21,27,31,-1,31,30,21,-1,26,28,32,-1,32,31,26,-1,28,22,33,-1,33,32,28,-1,22,20,34,-1,34,33,22,-1,20,24,35,-1,35,34,20,-1,23,25,36,-1,36,35,23,-1,25,19,29,-1,29,36,25,-1}, 208);
SoCoordinate* SoCoordinate1029 = new SoCoordinate();
SoCoordinate1029->setPoint(new float[]{-0.6358,-0.9379,-0.2307,0.7821,-0.9379,-0.2307,0.6822,0.0629,-0.2716,-0.6057,0.0629,-0.2624,-0.5204,-1.104,-0.2257,0.6304,-1.104,-0.2257,0.5127,0.3713,-0.2927,-0.4578,0.3716,-0.2865,-0.5269,-0.0048,-0.3422,-0.5894,-0.8616,-0.3044,0.6897,-0.8616,-0.3038,0.6041,-0.0048,-0.3509,0.7053,-0.8216,0.3852,-0.6389,-0.8216,0.3852,0.568,-0.0472,0.2614,-0.5411,-0.0473,0.2625,-0.4859,-0.9962,0.4385,0.567,-1.009,0.4169,0.4266,0.2577,0.2079,-0.4523,0.2557,0.2115,0.6134,-0.7544,0.4412,0.4945,-0.0839,0.334,0.3721,0.1802,0.2877,-0.3891,0.1785,0.2907,-0.4659,-0.0839,0.335,-0.5506,-0.7544,0.4412,-0.4182,-0.9056,0.4873,0.4937,-0.9167,0.4687}, 84);
SoIndexedFaceSet1028->setCoord(*SoCoordinate1029);

SoTextureCoordinate* SoTextureCoordinate1030 = new SoTextureCoordinate();
SoTextureCoordinate1030->setPoint(new float[]{0.813,0.0266,0.8136,0.0488,0.8136,0.0488,0.8133,0.0266,0.8111,0.0474,0.8105,0.0283,0.8108,0.0283,0.8111,0.0474,0.8141,0.0525,0.8141,0.0525,0.8123,0.0198,0.8125,0.0198,0.9273,0.2479,0.9315,0.2698,0.9337,0.2676,0.9301,0.2489,0.9262,0.2444,0.9337,0.2762,0.9335,0.2763,0.8381,0.0441,0.904,0.2568,0.8327,0.0273,0.9122,0.2724,0.8401,0.0478,0.9014,0.2535,0.8395,0.0482,0.9142,0.2789,0.8319,0.0206,0.9141,0.2788,0.8381,0.0441,0.8327,0.0273,0.8319,0.0206,0.9141,0.2788,0.9122,0.2724,0.904,0.2568,0.9014,0.2535,0.8395,0.0482}, 74);
SoIndexedFaceSet1028->setTexCoord(*SoTextureCoordinate1030);

SoShape1024->setGeometry(*SoIndexedFaceSet1028);

SoTransform1023->addChild(*SoShape1024);

SoHAnimSegment1022->addChild(*SoTransform1023);

SoHAnimJoint1021->addChildren(*SoHAnimSegment1022);

SoHAnimJoint* SoHAnimJoint1031 = new SoHAnimJoint();
SoHAnimJoint1031->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint1031->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint1031->setCenter(new float[]{8.057,30.559999,0.4324});
SoHAnimJoint1031->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1031->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1032 = new SoHAnimSegment();
SoHAnimSegment1032->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimSegment1032->setDEF(QString("hanim_l_metacarpal_2"));
SoTransform* SoTransform1033 = new SoTransform();
SoTransform1033->setTranslation(new float[]{8.057,30.559999,0.4324});
SoShape* SoShape1034 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1035 = new SoVRMLAppearance();
SoMaterial* SoMaterial1036 = new SoMaterial();
SoMaterial1036->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1035->addChild(*SoMaterial1036);

SoImageTexture* SoImageTexture1037 = new SoImageTexture();
SoImageTexture1037->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1035->addChild(*SoImageTexture1037);

SoShape1034->addChild(*SoVRMLAppearance1035);

SoIndexedFaceSet* SoIndexedFaceSet1038 = new SoIndexedFaceSet();
SoIndexedFaceSet1038->setCoordIndex(new int32_t[]{0,3,8,-1,8,1,0,-1,5,7,3,-1,3,0,5,-1,10,2,4,-1,4,6,10,-1,2,1,8,-1,8,4,2,-1,14,11,6,-1,6,4,14,-1,8,3,17,-1,17,16,8,-1,9,7,12,-1,12,13,9,-1,15,4,8,-1,8,16,15,-1,15,14,4,-1,9,18,17,-1,17,3,9,-1,9,13,18,-1,25,31,30,-1,25,30,27,-1,26,25,27,-1,22,21,20,-1,20,19,22,-1,41,40,39,-1,39,38,41,-1,32,37,36,-1,33,32,36,-1,34,33,36,-1,35,34,36,-1,23,22,19,-1,19,24,23,-1,6,19,20,-1,20,10,6,-1,30,29,28,-1,28,27,30,-1,5,21,22,-1,22,7,5,-1,7,22,23,-1,23,12,7,-1,12,23,24,-1,24,11,12,-1,11,24,19,-1,19,6,11,-1,1,25,26,-1,26,0,1,-1,0,26,27,-1,27,5,0,-1,5,27,28,-1,28,21,5,-1,21,28,29,-1,29,20,21,-1,20,29,30,-1,30,10,20,-1,10,30,31,-1,31,2,10,-1,2,31,25,-1,25,1,2,-1,16,32,33,-1,33,15,16,-1,15,33,34,-1,34,14,15,-1,14,34,35,-1,35,13,14,-1,13,35,36,-1,36,18,13,-1,18,36,37,-1,37,17,18,-1,17,37,32,-1,32,16,17,-1,14,38,39,-1,39,11,14,-1,11,39,40,-1,40,12,11,-1,12,40,41,-1,41,13,12,-1,13,41,38,-1,38,14,13,-1,9,3,7,-1}, 320);
SoIndexedFaceSet1038->setCreaseAngle(3.14159);
SoIndexedFaceSet1038->setTexCoordIndex(new int32_t[]{3,2,1,-1,1,0,3,-1,5,4,2,-1,2,3,5,-1,44,46,8,-1,8,45,44,-1,46,42,43,-1,43,8,46,-1,47,48,45,-1,45,8,47,-1,1,2,13,-1,13,12,1,-1,16,4,15,-1,15,14,16,-1,50,8,43,-1,43,49,50,-1,50,47,8,-1,16,18,13,-1,13,2,16,-1,16,14,18,-1,23,22,21,-1,23,21,20,-1,19,23,20,-1,25,24,27,-1,27,26,25,-1,29,28,31,-1,31,30,29,-1,35,34,33,-1,36,35,33,-1,37,36,33,-1,32,37,33,-1,38,25,26,-1,26,39,38,-1,7,26,27,-1,27,6,7,-1,21,41,40,-1,40,20,21,-1,5,24,25,-1,25,4,5,-1,4,25,38,-1,38,15,4,-1,15,38,39,-1,39,11,15,-1,48,56,51,-1,51,45,48,-1,0,23,19,-1,19,3,0,-1,3,19,20,-1,20,5,3,-1,5,20,40,-1,40,24,5,-1,24,40,41,-1,41,27,24,-1,27,41,21,-1,21,6,27,-1,6,21,22,-1,22,9,6,-1,9,22,23,-1,23,0,9,-1,12,35,36,-1,36,17,12,-1,50,54,55,-1,55,47,50,-1,10,37,32,-1,32,14,10,-1,14,32,33,-1,33,18,14,-1,18,33,34,-1,34,13,18,-1,13,34,35,-1,35,12,13,-1,47,52,53,-1,53,48,47,-1,11,31,28,-1,28,15,11,-1,15,28,29,-1,29,14,15,-1,14,29,30,-1,30,10,14,-1,16,2,4,-1}, 320);
SoCoordinate* SoCoordinate1039 = new SoCoordinate();
SoCoordinate1039->setPoint(new float[]{0.5385,-2.162,0.5011,0.0659,-2.156,0.6401,-0.3587,-2.162,0.5027,0.6132,-1.327,0.533,-0.4742,-1.326,0.5432,0.6023,-2.207,-0.1881,-0.5344,-1.295,-0.2212,0.7168,-1.295,-0.2212,0.0891,-1.429,0.7147,0.8645,-0.8313,0.4987,-0.3914,-2.207,-0.1881,-0.6358,-0.0769,-0.289,0.7821,-0.0769,-0.289,0.7053,0.0393,0.3269,-0.6389,0.0393,0.3269,-0.4005,-1.027,0.6389,0.2108,-1.13,0.785,0.7186,-1.012,0.7808,0.7841,-0.7783,0.694,-0.4207,-1.297,-0.341,-0.2918,-2.186,-0.2634,0.5068,-2.186,-0.2634,0.6022,-1.304,-0.3405,0.6628,-0.0829,-0.4027,-0.5467,-0.0829,-0.4027,0.0673,-2.335,0.5792,0.3957,-2.338,0.4716,0.4585,-2.364,-0.1616,0.4618,-2.271,-0.2352,-0.2461,-2.271,-0.2352,-0.3144,-2.364,-0.1611,-0.2879,-2.338,0.4752,0.1576,-0.941,0.901,-0.2884,-0.8565,0.7851,-0.469,0.0593,0.5095,0.5883,0.0595,0.5091,0.5527,-0.689,0.8149,0.541,-0.8603,0.8815,-0.506,0.13,0.2038,-0.5335,0.0511,-0.194,0.6336,0.0511,-0.194,0.5814,0.13,0.2038}, 126);
SoIndexedFaceSet1038->setCoord(*SoCoordinate1039);

SoTextureCoordinate* SoTextureCoordinate1040 = new SoTextureCoordinate();
SoTextureCoordinate1040->setPoint(new float[]{0.8514,0.0953,0.8526,0.0788,0.846,0.0768,0.8466,0.0958,0.8195,0.0808,0.8225,0.0994,0.8225,0.0994,0.8195,0.0808,0.8903,0.2261,0.8467,0.0958,0.8381,0.0441,0.8136,0.0488,0.8561,0.0728,0.8532,0.0697,0.8381,0.0441,0.8136,0.0488,0.8436,0.0662,0.8533,0.0697,0.8503,0.0646,0.8461,0.0998,0.8248,0.1027,0.8248,0.1027,0.8462,0.0997,0.8498,0.0994,0.8184,0.0977,0.8157,0.0811,0.8157,0.0809,0.8184,0.0977,0.8165,0.0457,0.8341,0.0424,0.8341,0.0424,0.8165,0.0457,0.844,0.0417,0.8554,0.0622,0.8575,0.0659,0.8594,0.0677,0.8574,0.0658,0.844,0.0417,0.8099,0.0493,0.8099,0.0493,0.82,0.101,0.82,0.101,0.8821,0.2087,0.8838,0.2252,0.9098,0.1997,0.916,0.2175,0.8866,0.2074,0.904,0.2568,0.9273,0.2479,0.8814,0.2316,0.8847,0.2342,0.9197,0.2166,0.9083,0.2577,0.925,0.2515,0.8813,0.2388,0.8986,0.2602,0.931,0.2468}, 114);
SoIndexedFaceSet1038->setTexCoord(*SoTextureCoordinate1040);

SoShape1034->setGeometry(*SoIndexedFaceSet1038);

SoTransform1033->addChild(*SoShape1034);

SoHAnimSegment1032->addChild(*SoTransform1033);

SoHAnimJoint1031->addChildren(*SoHAnimSegment1032);

SoHAnimJoint* SoHAnimJoint1041 = new SoHAnimJoint();
SoHAnimJoint1041->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint1041->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint1041->setCenter(new float[]{8.166,28.32,0.67});
SoHAnimJoint1041->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1041->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1042 = new SoHAnimSegment();
SoHAnimSegment1042->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimSegment1042->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoTransform* SoTransform1043 = new SoTransform();
SoTransform1043->setTranslation(new float[]{8.166,28.32,0.67});
SoShape* SoShape1044 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1045 = new SoVRMLAppearance();
SoMaterial* SoMaterial1046 = new SoMaterial();
SoMaterial1046->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1045->addChild(*SoMaterial1046);

SoImageTexture* SoImageTexture1047 = new SoImageTexture();
SoImageTexture1047->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1045->addChild(*SoImageTexture1047);

SoShape1044->addChild(*SoVRMLAppearance1045);

SoIndexedFaceSet* SoIndexedFaceSet1048 = new SoIndexedFaceSet();
SoIndexedFaceSet1048->setCoordIndex(new int32_t[]{4,5,18,-1,18,19,4,-1,5,6,21,-1,21,18,5,-1,7,8,20,-1,20,25,7,-1,8,4,19,-1,19,20,8,-1,6,22,21,-1,1,10,8,-1,8,7,1,-1,6,5,11,-1,11,2,6,-1,5,4,0,-1,0,11,5,-1,4,8,10,-1,10,0,4,-1,1,7,9,-1,9,3,1,-1,9,6,2,-1,2,3,9,-1,9,7,23,-1,23,24,9,-1,6,9,24,-1,24,22,6,-1,23,7,25,-1,0,17,15,-1,15,11,0,-1,1,12,14,-1,14,10,1,-1,11,15,13,-1,13,2,11,-1,3,16,12,-1,12,1,3,-1,2,13,16,-1,16,3,2,-1,10,14,17,-1,17,0,10,-1,14,12,16,-1,16,17,14,-1,15,17,16,-1,16,13,15,-1,28,27,26,-1,29,28,26,-1,30,29,26,-1,18,26,27,-1,27,19,18,-1,19,27,28,-1,28,20,19,-1,20,28,29,-1,29,25,20,-1,36,35,34,-1,36,34,33,-1,33,32,31,-1,33,31,37,-1,36,33,37,-1,21,30,26,-1,26,18,21,-1,24,31,32,-1,32,22,24,-1,22,32,33,-1,33,21,22,-1,21,33,34,-1,34,30,21,-1,30,34,35,-1,35,29,30,-1,29,35,36,-1,36,25,29,-1,25,36,37,-1,37,23,25,-1,23,37,31,-1,31,24,23,-1}, 288);
SoIndexedFaceSet1048->setCreaseAngle(3.14159);
SoIndexedFaceSet1048->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,3,5,4,-1,4,2,3,-1,6,9,41,-1,41,40,6,-1,9,38,39,-1,39,41,9,-1,5,10,4,-1,11,12,9,-1,9,6,11,-1,5,3,14,-1,14,13,5,-1,3,0,15,-1,15,14,3,-1,38,9,12,-1,12,42,38,-1,11,6,44,-1,44,43,11,-1,17,5,13,-1,13,16,17,-1,44,6,46,-1,46,45,44,-1,5,17,18,-1,18,10,5,-1,46,6,40,-1,15,21,20,-1,20,14,15,-1,11,23,22,-1,22,12,11,-1,14,20,24,-1,24,13,14,-1,43,48,23,-1,23,11,43,-1,13,24,25,-1,25,16,13,-1,12,22,47,-1,47,42,12,-1,22,23,48,-1,48,47,22,-1,20,21,25,-1,25,24,20,-1,29,28,27,-1,30,29,27,-1,26,30,27,-1,2,27,28,-1,28,1,2,-1,1,28,29,-1,29,8,1,-1,8,29,30,-1,30,7,8,-1,31,37,36,-1,31,36,35,-1,35,34,33,-1,35,33,32,-1,31,35,32,-1,4,26,27,-1,27,2,4,-1,18,33,34,-1,34,10,18,-1,10,34,35,-1,35,4,10,-1,4,35,36,-1,36,26,4,-1,26,36,37,-1,37,30,26,-1,30,37,31,-1,31,7,30,-1,7,31,32,-1,32,19,7,-1,19,32,33,-1,33,18,19,-1}, 288);
SoCoordinate* SoCoordinate1049 = new SoCoordinate();
SoCoordinate1049->setPoint(new float[]{-0.1159,-1.372,0.3131,-0.5161,-1.341,-0.3172,0.3299,-1.236,-0.3162,-0.1159,-1.364,-0.424,-0.0588,-0.15,0.3785,0.3848,-0.1567,0.2488,0.4338,-0.1885,-0.322,-0.4674,-0.1885,-0.3215,-0.4674,-0.1567,0.2488,-0.0588,-0.3302,-0.406,-0.5161,-1.346,0.1932,0.3299,-1.242,0.1943,-0.4415,-1.509,-0.285,0.1699,-1.592,-0.3152,-0.4415,-1.514,0.1582,0.1699,-1.597,0.188,-0.117,-1.623,-0.3164,-0.117,-1.628,0.1968,0.4291,0.0832,0.2635,-0.0434,0.0888,0.4025,-0.4681,0.0832,0.2651,0.493,0.0378,-0.4257,0.4088,-0.1918,-0.4243,-0.4674,-0.1918,-0.4243,-0.0588,-0.3316,-0.4184,-0.5007,0.0378,-0.4257,0.2815,0.3454,0.172,-0.0577,0.3598,0.3191,-0.3828,0.3458,0.1744,-0.3964,0.327,-0.4021,0.3405,0.3271,-0.4009,-0.0578,-0.2883,-0.4475,0.3757,-0.1509,-0.4548,0.4553,0.0544,-0.4548,0.3138,0.3194,-0.4725,-0.365,0.3193,-0.4736,-0.4578,0.0532,-0.4547,-0.4287,-0.1537,-0.4547}, 114);
SoIndexedFaceSet1048->setCoord(*SoCoordinate1049);

SoTextureCoordinate* SoTextureCoordinate1050 = new SoTextureCoordinate();
SoTextureCoordinate1050->setPoint(new float[]{0.8511,0.1006,0.8514,0.0953,0.8466,0.0958,0.8466,0.1011,0.8225,0.0994,0.8283,0.1035,0.9023,0.1969,0.8225,0.0994,0.8467,0.0958,0.8857,0.2021,0.8231,0.1042,0.8931,0.1724,0.8782,0.1769,0.8338,0.1268,0.8493,0.125,0.8543,0.1273,0.8302,0.1302,0.8258,0.1072,0.8236,0.1075,0.8231,0.1042,0.8504,0.1328,0.8508,0.1334,0.8781,0.1731,0.8909,0.1692,0.8352,0.1346,0.8353,0.1353,0.8228,0.0929,0.844,0.0896,0.8482,0.0889,0.8441,0.0896,0.8228,0.0929,0.8203,0.0995,0.8207,0.1038,0.8212,0.1068,0.8207,0.1037,0.8203,0.0995,0.8206,0.0933,0.8205,0.0933,0.8815,0.2034,0.8821,0.2087,0.9098,0.1997,0.8866,0.2074,0.8737,0.1777,0.8969,0.1707,0.9052,0.1925,0.9074,0.1918,0.9084,0.195,0.876,0.171,0.891,0.1665}, 98);
SoIndexedFaceSet1048->setTexCoord(*SoTextureCoordinate1050);

SoShape1044->setGeometry(*SoIndexedFaceSet1048);

SoTransform1043->addChild(*SoShape1044);

SoHAnimSegment1042->addChild(*SoTransform1043);

SoHAnimJoint1041->addChildren(*SoHAnimSegment1042);

SoHAnimJoint* SoHAnimJoint1051 = new SoHAnimJoint();
SoHAnimJoint1051->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1051->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1051->setCenter(new float[]{8.076,26.969999,0.6304});
SoHAnimJoint1051->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1051->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1052 = new SoHAnimSegment();
SoHAnimSegment1052->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimSegment1052->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoTransform* SoTransform1053 = new SoTransform();
SoTransform1053->setTranslation(new float[]{8.076,26.969999,0.6304});
SoShape* SoShape1054 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1055 = new SoVRMLAppearance();
SoMaterial* SoMaterial1056 = new SoMaterial();
SoMaterial1056->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1055->addChild(*SoMaterial1056);

SoImageTexture* SoImageTexture1057 = new SoImageTexture();
SoImageTexture1057->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1055->addChild(*SoImageTexture1057);

SoShape1054->addChild(*SoVRMLAppearance1055);

SoIndexedFaceSet* SoIndexedFaceSet1058 = new SoIndexedFaceSet();
SoIndexedFaceSet1058->setCoordIndex(new int32_t[]{1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1}, 176);
SoIndexedFaceSet1058->setCreaseAngle(3.14159);
SoIndexedFaceSet1058->setTexCoordIndex(new int32_t[]{3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1}, 176);
SoCoordinate* SoCoordinate1059 = new SoCoordinate();
SoCoordinate1059->setPoint(new float[]{-0.0842,-1.127,-0.361,-0.4247,-1.116,0.201,0.2936,-1.004,0.2104,0.3843,-0.1994,0.2307,0.3843,-0.1941,-0.2798,-0.4256,0.0112,-0.2777,0.4203,0.1156,-0.2766,-0.4256,0.0059,0.2328,0.4203,0.1104,0.2338,-0.2414,0.2045,-0.2757,-0.2414,0.1992,0.2347,0.1761,0.1887,0.2346,0.1761,0.194,-0.2758,-0.0255,-0.0122,-0.3845,-0.0255,-0.0204,0.3527,-0.0839,-1.135,0.3208,0.1687,-1.353,0.1876,-0.075,-1.39,0.1958,-0.4249,-1.111,-0.2542,-0.3563,-1.282,0.16,-0.3564,-1.278,-0.2161,0.2934,-0.9988,-0.2626,0.1685,-1.348,-0.2441,-0.0752,-1.386,-0.2452}, 72);
SoIndexedFaceSet1058->setCoord(*SoCoordinate1059);

SoTextureCoordinate* SoTextureCoordinate1060 = new SoTextureCoordinate();
SoTextureCoordinate1060->setPoint(new float[]{0.8782,0.1769,0.8543,0.1273,0.8574,0.1518,0.8703,0.1535,0.8493,0.125,0.8504,0.1318,0.8846,0.1491,0.8931,0.1724,0.8349,0.1336,0.8379,0.1515,0.8533,0.1496,0.8338,0.1268,0.8302,0.1302,0.8351,0.1545,0.849,0.1233,0.8336,0.1251,0.849,0.123,0.8335,0.1249,0.8539,0.1573,0.8543,0.1579,0.8703,0.1496,0.8822,0.146,0.8398,0.159,0.8399,0.1597,0.8737,0.1777,0.8664,0.1541,0.8969,0.1707,0.8878,0.1476,0.8796,0.181,0.8945,0.1764,0.8684,0.1475,0.8822,0.1433}, 64);
SoIndexedFaceSet1058->setTexCoord(*SoTextureCoordinate1060);

SoShape1054->setGeometry(*SoIndexedFaceSet1058);

SoTransform1053->addChild(*SoShape1054);

SoHAnimSegment1052->addChild(*SoTransform1053);

SoHAnimJoint1051->addChildren(*SoHAnimSegment1052);

SoHAnimJoint* SoHAnimJoint1061 = new SoHAnimJoint();
SoHAnimJoint1061->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1061->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint1061->setCenter(new float[]{8.03,25.85,0.5949});
SoHAnimJoint1061->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1061->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1062 = new SoHAnimSegment();
SoHAnimSegment1062->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSegment1062->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoTransform* SoTransform1063 = new SoTransform();
SoTransform1063->setTranslation(new float[]{8.03,25.85,0.5949});
SoShape* SoShape1064 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1065 = new SoVRMLAppearance();
SoMaterial* SoMaterial1066 = new SoMaterial();
SoMaterial1066->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1065->addChild(*SoMaterial1066);

SoImageTexture* SoImageTexture1067 = new SoImageTexture();
SoImageTexture1067->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1065->addChild(*SoImageTexture1067);

SoShape1064->addChild(*SoVRMLAppearance1065);

SoIndexedFaceSet* SoIndexedFaceSet1068 = new SoIndexedFaceSet();
SoIndexedFaceSet1068->setCoordIndex(new int32_t[]{0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1}, 248);
SoIndexedFaceSet1068->setCreaseAngle(3.14159);
SoIndexedFaceSet1068->setTexCoordIndex(new int32_t[]{0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1}, 248);
SoCoordinate* SoCoordinate1069 = new SoCoordinate();
SoCoordinate1069->setPoint(new float[]{0.3152,-0.145,0.2433,0.315,-0.1398,-0.2298,0.2422,-0.5055,0.2184,0.242,-0.5007,-0.2162,-0.3547,-0.4741,0.238,-0.0817,-0.4944,0.3202,-0.3549,-0.4688,-0.2341,-0.082,-0.4873,-0.3192,0.1332,-0.7789,0.1945,0.1331,-0.7746,-0.1993,-0.3575,-0.7605,0.19,-0.1196,-0.7912,0.2759,-0.3577,-0.7563,-0.187,-0.1199,-0.785,-0.2787,0.1657,-0.8631,-0.0043,-0.3212,-0.8627,-0.0041,-0.1205,-0.9246,-0.0048,0.1615,-0.846,0.1047,-0.3253,-0.8401,-0.0952,-0.1076,-0.8953,0.1399,0.1615,-0.845,-0.1068,-0.3253,-0.8413,0.0926,-0.1075,-0.8974,-0.1391,-0.3791,0.003,0.2365,0.339,0.1201,-0.2271,0.3392,0.1148,0.2459,0.1312,0.198,0.2297,0.131,0.2029,-0.2085,-0.2273,0.2003,0.2299,-0.3793,0.008,-0.2188,-0.2274,0.2051,-0.2084,-0.0363,-0.0157,0.3561,-0.0366,-0.0081,-0.3256}, 99);
SoIndexedFaceSet1068->setCoord(*SoCoordinate1069);

SoTextureCoordinate* SoTextureCoordinate1070 = new SoTextureCoordinate();
SoTextureCoordinate1070->setPoint(new float[]{0.8542,0.1553,0.8574,0.1518,0.8533,0.1496,0.8379,0.1515,0.8351,0.1545,0.8388,0.1572,0.8414,0.1663,0.8547,0.1647,0.8578,0.1639,0.8665,0.142,0.8703,0.1535,0.8804,0.1378,0.8846,0.1491,0.8382,0.1663,0.8495,0.1759,0.8523,0.1752,0.8544,0.1737,0.8566,0.1736,0.8658,0.1324,0.8753,0.1296,0.8677,0.1303,0.8725,0.1289,0.842,0.1753,0.8441,0.175,0.8533,0.1759,0.8496,0.1769,0.8467,0.1759,0.846,0.1768,0.87,0.1292,0.8525,0.1477,0.8382,0.1495,0.8525,0.1475,0.8381,0.1492,0.8664,0.1541,0.8878,0.1476,0.8639,0.1422,0.8827,0.1365,0.8634,0.1325,0.8774,0.1283,0.8662,0.1297,0.8697,0.1281,0.8732,0.1275,0.872,0.1575,0.8858,0.1533}, 88);
SoIndexedFaceSet1068->setTexCoord(*SoTextureCoordinate1070);

SoShape1064->setGeometry(*SoIndexedFaceSet1068);

SoTransform1063->addChild(*SoShape1064);

SoHAnimSegment1062->addChild(*SoTransform1063);

SoHAnimJoint1061->addChildren(*SoHAnimSegment1062);

SoHAnimJoint1051->addChildren(*SoHAnimJoint1061);

SoHAnimJoint1041->addChildren(*SoHAnimJoint1051);

SoHAnimJoint1031->addChildren(*SoHAnimJoint1041);

SoHAnimJoint1021->addChildren(*SoHAnimJoint1031);

SoHAnimJoint971->addChildren(*SoHAnimJoint1021);

SoHAnimJoint* SoHAnimJoint1071 = new SoHAnimJoint();
SoHAnimJoint1071->X3DNode::setName(QString("l_midcarpal_3"));
SoHAnimJoint1071->setDEF(QString("hanim_l_midcarpal_3"));
SoHAnimJoint1071->setCenter(new float[]{8.048,31.49,-0.2132});
SoHAnimJoint1071->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1071->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1072 = new SoHAnimSegment();
SoHAnimSegment1072->X3DNode::setName(QString("l_capitate"));
SoHAnimSegment1072->setDEF(QString("hanim_l_capitate"));
SoTransform* SoTransform1073 = new SoTransform();
SoTransform1073->setTranslation(new float[]{8.048,31.49,-0.2132});
SoShape* SoShape1074 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1075 = new SoVRMLAppearance();
SoMaterial* SoMaterial1076 = new SoMaterial();
SoMaterial1076->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1075->addChild(*SoMaterial1076);

SoImageTexture* SoImageTexture1077 = new SoImageTexture();
SoImageTexture1077->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1075->addChild(*SoImageTexture1077);

SoShape1074->addChild(*SoVRMLAppearance1075);

SoIndexedFaceSet* SoIndexedFaceSet1078 = new SoIndexedFaceSet();
SoIndexedFaceSet1078->setCoordIndex(new int32_t[]{5,6,4,-1,4,1,5,-1,7,0,3,-1,3,2,7,-1,8,11,10,-1,10,9,8,-1,12,15,14,-1,14,13,12,-1,1,8,9,-1,9,5,1,-1,5,9,10,-1,10,7,5,-1,7,10,11,-1,11,0,7,-1,0,11,8,-1,8,1,0,-1,6,12,13,-1,13,4,6,-1,4,13,14,-1,14,3,4,-1,3,14,15,-1,15,2,3,-1,2,15,12,-1,12,6,2,-1,22,21,20,-1,20,23,22,-1,18,17,16,-1,16,19,18,-1,5,16,17,-1,17,6,5,-1,6,17,18,-1,18,2,6,-1,2,18,19,-1,19,7,2,-1,7,19,16,-1,16,5,7,-1,0,20,21,-1,21,3,0,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,1,4,-1,1,23,20,-1,20,0,1,-1}, 176);
SoIndexedFaceSet1078->setCreaseAngle(3.14159);
SoIndexedFaceSet1078->setTexCoordIndex(new int32_t[]{24,0,26,-1,26,25,24,-1,4,7,6,-1,6,5,4,-1,8,11,10,-1,10,9,8,-1,12,32,31,-1,31,30,12,-1,25,28,29,-1,29,24,25,-1,1,9,10,-1,10,4,1,-1,4,10,11,-1,11,7,4,-1,7,11,8,-1,8,2,7,-1,0,12,30,-1,30,26,0,-1,3,13,14,-1,14,6,3,-1,6,14,15,-1,15,5,6,-1,27,32,12,-1,12,0,27,-1,17,16,19,-1,19,18,17,-1,35,20,37,-1,37,36,35,-1,24,37,20,-1,20,0,24,-1,0,20,35,-1,35,27,0,-1,5,21,22,-1,22,4,5,-1,4,22,23,-1,23,1,4,-1,7,19,16,-1,16,6,7,-1,6,16,17,-1,17,3,6,-1,26,33,34,-1,34,25,26,-1,2,18,19,-1,19,7,2,-1}, 176);
SoCoordinate* SoCoordinate1079 = new SoCoordinate();
SoCoordinate1079->setPoint(new float[]{0.7943,-1.006,-0.3306,-0.648,-1.004,-0.3307,0.6905,-0.0005,0.3157,0.7213,0.0186,-0.3382,-0.5902,0.0185,-0.3369,-0.6274,-1.001,0.3565,-0.5973,-0.0004,0.3249,0.7905,-1.001,0.3565,-0.5435,-1.162,-0.3389,-0.5303,-1.172,0.3664,0.6431,-1.172,0.3664,0.6456,-1.164,-0.3388,-0.4499,0.3085,0.3015,-0.4451,0.3167,-0.2743,0.5697,0.3168,-0.2752,0.5495,0.3084,0.2952,-0.5852,-0.9387,0.4693,-0.5221,-0.0738,0.4318,0.6176,-0.0739,0.4231,0.704,-0.9387,0.4698,0.7043,-0.9311,-0.4245,0.6416,-0.0507,-0.4488,-0.5127,-0.0508,-0.4475,-0.5993,-0.929,-0.4247}, 72);
SoIndexedFaceSet1078->setCoord(*SoCoordinate1079);

SoTextureCoordinate* SoTextureCoordinate1080 = new SoTextureCoordinate();
SoTextureCoordinate1080->setPoint(new float[]{0.9315,0.2698,0.8136,0.0488,0.7924,0.0507,0.7911,0.0281,0.8136,0.0488,0.813,0.0266,0.791,0.0281,0.7924,0.0508,0.7924,0.0543,0.8143,0.0526,0.8143,0.0526,0.7924,0.0543,0.9335,0.2763,0.7903,0.0215,0.7903,0.0215,0.8123,0.0198,0.7875,0.03,0.7875,0.03,0.7887,0.0494,0.7887,0.0495,0.9277,0.2691,0.8167,0.0279,0.8173,0.0471,0.8173,0.0471,0.9273,0.2479,0.9479,0.2423,0.9531,0.2644,0.9318,0.2697,0.9473,0.2389,0.926,0.2443,0.955,0.2707,0.9551,0.2707,0.9337,0.2763,0.9563,0.262,0.9518,0.243,0.928,0.269,0.924,0.2502,0.9241,0.2502}, 76);
SoIndexedFaceSet1078->setTexCoord(*SoTextureCoordinate1080);

SoShape1074->setGeometry(*SoIndexedFaceSet1078);

SoTransform1073->addChild(*SoShape1074);

SoHAnimSegment1072->addChild(*SoTransform1073);

SoHAnimJoint1071->addChildren(*SoHAnimSegment1072);

SoHAnimJoint* SoHAnimJoint1081 = new SoHAnimJoint();
SoHAnimJoint1081->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint1081->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint1081->setCenter(new float[]{8.048,30.48,-0.2779});
SoHAnimJoint1081->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1081->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1082 = new SoHAnimSegment();
SoHAnimSegment1082->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimSegment1082->setDEF(QString("hanim_l_metacarpal_3"));
SoTransform* SoTransform1083 = new SoTransform();
SoTransform1083->setTranslation(new float[]{8.048,30.48,-0.2779});
SoShape* SoShape1084 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1085 = new SoVRMLAppearance();
SoMaterial* SoMaterial1086 = new SoMaterial();
SoMaterial1086->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1085->addChild(*SoMaterial1086);

SoImageTexture* SoImageTexture1087 = new SoImageTexture();
SoImageTexture1087->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1085->addChild(*SoImageTexture1087);

SoShape1084->addChild(*SoVRMLAppearance1085);

SoIndexedFaceSet* SoIndexedFaceSet1088 = new SoIndexedFaceSet();
SoIndexedFaceSet1088->setCoordIndex(new int32_t[]{0,8,6,-1,6,3,0,-1,10,5,1,-1,1,7,10,-1,2,9,7,-1,7,1,2,-1,8,0,4,-1,4,11,8,-1,14,13,12,-1,12,15,14,-1,34,33,32,-1,32,35,34,-1,25,24,29,-1,29,28,25,-1,17,20,19,-1,19,18,17,-1,25,28,27,-1,27,26,25,-1,20,17,16,-1,16,21,20,-1,6,12,13,-1,13,3,6,-1,24,31,30,-1,30,29,24,-1,2,14,15,-1,15,9,2,-1,16,23,22,-1,22,21,16,-1,9,16,17,-1,17,7,9,-1,7,17,18,-1,18,10,7,-1,10,18,19,-1,19,11,10,-1,11,19,20,-1,20,8,11,-1,8,20,21,-1,21,6,8,-1,6,21,22,-1,22,12,6,-1,12,22,23,-1,23,15,12,-1,15,23,16,-1,16,9,15,-1,3,24,25,-1,25,0,3,-1,0,25,26,-1,26,4,0,-1,4,26,27,-1,27,5,4,-1,5,27,28,-1,28,1,5,-1,1,28,29,-1,29,2,1,-1,2,29,30,-1,30,14,2,-1,14,30,31,-1,31,13,14,-1,13,31,24,-1,24,3,13,-1,10,32,33,-1,33,5,10,-1,5,33,34,-1,34,4,5,-1,4,34,35,-1,35,11,4,-1,11,35,32,-1,32,10,11,-1}, 272);
SoIndexedFaceSet1088->setCreaseAngle(3.14159);
SoIndexedFaceSet1088->setTexCoordIndex(new int32_t[]{2,1,0,-1,0,3,2,-1,39,38,37,-1,37,36,39,-1,40,41,36,-1,36,37,40,-1,1,2,11,-1,11,10,1,-1,12,15,14,-1,14,13,12,-1,43,46,45,-1,45,44,43,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,14,15,-1,15,3,0,-1,23,33,32,-1,32,22,23,-1,8,12,13,-1,13,9,8,-1,31,35,34,-1,34,30,31,-1,9,31,24,-1,24,4,9,-1,36,48,49,-1,49,39,36,-1,7,25,26,-1,26,10,7,-1,10,26,27,-1,27,1,10,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,14,0,-1,14,34,35,-1,35,13,14,-1,13,35,31,-1,31,9,13,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,11,2,-1,42,52,53,-1,53,38,42,-1,38,53,47,-1,47,37,38,-1,5,21,22,-1,22,8,5,-1,8,22,32,-1,32,12,8,-1,12,32,33,-1,33,15,12,-1,15,33,23,-1,23,3,15,-1,39,45,46,-1,46,38,39,-1,6,19,16,-1,16,11,6,-1,11,16,17,-1,17,10,11,-1,10,17,18,-1,18,7,10,-1}, 272);
SoCoordinate* SoCoordinate1089 = new SoCoordinate();
SoCoordinate1089->setPoint(new float[]{0.7345,-1.173,-0.2591,-0.52,-1.173,-0.2591,-0.3873,-2.115,-0.2835,0.6104,-2.115,-0.2835,0.7943,-0.0032,-0.2659,-0.648,-0.0008,-0.266,0.6106,-2.129,0.5221,-0.5261,-1.217,0.489,0.7252,-1.217,0.489,-0.3831,-2.129,0.5221,-0.6274,0.0017,0.4213,0.7905,0.0017,0.4213,0.5317,-2.284,0.4916,0.5316,-2.289,-0.2329,-0.3003,-2.289,-0.2329,-0.2967,-2.284,0.4916,-0.2822,-2.101,0.59,-0.4237,-1.207,0.6426,-0.5516,0.0221,0.5729,0.683,0.0221,0.5729,0.6219,-1.213,0.6429,0.5169,-2.102,0.59,0.4634,-2.2,0.572,-0.2282,-2.2,0.572,0.5108,-2.08,-0.3752,0.622,-1.178,-0.3875,0.6765,0.0078,-0.3867,-0.5551,0.0098,-0.3868,-0.4091,-1.172,-0.3877,-0.2813,-2.079,-0.3753,-0.2267,-2.197,-0.3441,0.4567,-2.197,-0.3441,-0.5375,0.1089,0.2867,-0.55,0.1079,-0.1665,0.661,0.1057,-0.1664,0.6586,0.1092,0.2867}, 108);
SoIndexedFaceSet1088->setCoord(*SoCoordinate1089);

SoTextureCoordinate* SoTextureCoordinate1090 = new SoTextureCoordinate();
SoTextureCoordinate1090->setPoint(new float[]{0.8225,0.0994,0.8195,0.0808,0.7938,0.0824,0.7939,0.1016,0.8195,0.0808,0.7938,0.0824,0.7924,0.0507,0.8136,0.0488,0.7939,0.1016,0.8225,0.0994,0.8136,0.0488,0.7924,0.0508,0.7964,0.1053,0.8205,0.103,0.8205,0.103,0.7964,0.1053,0.796,0.0481,0.809,0.0468,0.809,0.0469,0.796,0.048,0.7888,0.0827,0.7888,0.0826,0.7886,0.1011,0.7887,0.1011,0.8243,0.0799,0.8186,0.0479,0.8186,0.0479,0.8243,0.0801,0.7878,0.051,0.7878,0.0509,0.8275,0.0984,0.8275,0.0983,0.7902,0.1036,0.7902,0.1036,0.8264,0.1006,0.8264,0.1006,0.916,0.2175,0.941,0.2114,0.9479,0.2423,0.9273,0.2479,0.9376,0.1925,0.9098,0.1997,0.9479,0.2423,0.9448,0.2456,0.9323,0.249,0.9323,0.249,0.9448,0.2456,0.9459,0.2103,0.9115,0.2191,0.9226,0.2496,0.9226,0.2496,0.9114,0.219,0.9524,0.2413,0.9524,0.2414}, 108);
SoIndexedFaceSet1088->setTexCoord(*SoTextureCoordinate1090);

SoShape1084->setGeometry(*SoIndexedFaceSet1088);

SoTransform1083->addChild(*SoShape1084);

SoHAnimSegment1082->addChild(*SoTransform1083);

SoHAnimJoint1081->addChildren(*SoHAnimSegment1082);

SoHAnimJoint* SoHAnimJoint1091 = new SoHAnimJoint();
SoHAnimJoint1091->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint1091->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint1091->setCenter(new float[]{8.164,28.219999,-0.1741});
SoHAnimJoint1091->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1091->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1092 = new SoHAnimSegment();
SoHAnimSegment1092->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimSegment1092->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoTransform* SoTransform1093 = new SoTransform();
SoTransform1093->setTranslation(new float[]{8.164,28.219999,-0.1741});
SoShape* SoShape1094 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1095 = new SoVRMLAppearance();
SoMaterial* SoMaterial1096 = new SoMaterial();
SoMaterial1096->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1095->addChild(*SoMaterial1096);

SoImageTexture* SoImageTexture1097 = new SoImageTexture();
SoImageTexture1097->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1095->addChild(*SoImageTexture1097);

SoShape1094->addChild(*SoVRMLAppearance1095);

SoIndexedFaceSet* SoIndexedFaceSet1098 = new SoIndexedFaceSet();
SoIndexedFaceSet1098->setCoordIndex(new int32_t[]{3,4,26,-1,26,21,3,-1,5,6,27,-1,27,25,5,-1,4,23,26,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,24,-1,24,22,7,-1,4,7,22,-1,22,23,4,-1,24,5,25,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,21,18,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,20,19,-1,19,6,16,-1,3,18,20,-1,20,16,3,-1,19,27,6,-1,31,30,29,-1,29,28,31,-1,26,28,29,-1,29,21,26,-1,38,37,36,-1,38,36,35,-1,35,34,33,-1,35,33,32,-1,38,35,32,-1,27,30,31,-1,31,25,27,-1,44,43,42,-1,44,42,41,-1,41,40,39,-1,44,41,39,-1,44,39,45,-1,18,32,33,-1,33,20,18,-1,20,33,34,-1,34,19,20,-1,19,34,35,-1,35,27,19,-1,27,35,36,-1,36,30,27,-1,30,36,37,-1,37,29,30,-1,29,37,38,-1,38,21,29,-1,21,38,32,-1,32,18,21,-1,22,39,40,-1,40,23,22,-1,23,40,41,-1,41,26,23,-1,26,41,42,-1,42,28,26,-1,28,42,43,-1,43,31,28,-1,31,43,44,-1,44,25,31,-1,25,44,45,-1,45,24,25,-1,24,45,39,-1,39,22,24,-1}, 352);
SoIndexedFaceSet1098->setCreaseAngle(3.14159);
SoIndexedFaceSet1098->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1}, 352);
SoCoordinate* SoCoordinate1099 = new SoCoordinate();
SoCoordinate1099->setPoint(new float[]{-0.5139,-1.411,-0.2221,0.332,-1.294,-0.2251,-0.1138,-1.44,-0.347,0.4109,-0.0964,0.3132,0.4109,-0.0905,-0.2649,-0.4653,-0.0905,-0.2649,-0.4653,-0.0964,0.3132,-0.0567,-0.238,-0.3659,-0.4394,-1.599,-0.1832,0.172,-1.692,-0.2102,-0.4394,-1.593,0.2229,0.172,-1.686,0.2561,-0.1148,-1.727,-0.2101,-0.1148,-1.721,0.2661,-0.5139,-1.404,0.2513,-0.1138,-1.43,0.3905,-0.0567,-0.2387,0.4126,0.332,-1.287,0.2483,0.4109,-0.0974,0.4198,-0.4653,-0.0974,0.4198,-0.0567,-0.2372,0.4256,0.4951,0.1322,0.4183,-0.0567,-0.2357,-0.3789,0.4109,-0.0983,-0.3758,-0.4653,-0.0983,-0.3758,-0.5029,0.1462,-0.3874,0.4949,0.1462,-0.3874,-0.4986,0.1322,0.4183,0.3331,0.4155,-0.3612,0.3333,0.417,0.3717,-0.3998,0.417,0.3717,-0.4035,0.4155,-0.3612,0.3889,-0.0506,0.451,-0.0558,-0.1916,0.4554,-0.4401,-0.052,0.451,-0.4709,0.1519,0.4501,-0.3792,0.4207,0.4493,0.3158,0.4207,0.4493,0.4731,0.1521,0.4501,-0.0556,-0.1849,-0.4078,0.3711,-0.0605,-0.4181,0.4488,0.1472,-0.4248,0.3032,0.412,-0.4254,-0.367,0.412,-0.4254,-0.4521,0.1476,-0.4248,-0.4197,-0.0633,-0.4181}, 138);
SoIndexedFaceSet1098->setCoord(*SoCoordinate1099);

SoTextureCoordinate* SoTextureCoordinate1100 = new SoTextureCoordinate();
SoTextureCoordinate1100->setPoint(new float[]{0.8168,0.105,0.8225,0.0994,0.7939,0.1016,0.7996,0.1065,0.9311,0.1887,0.7939,0.1016,0.8225,0.0994,0.9145,0.1932,0.794,0.107,0.9232,0.1611,0.908,0.1649,0.8025,0.1324,0.818,0.1313,0.7986,0.1359,0.7957,0.11,0.7939,0.1101,0.794,0.107,0.8228,0.1342,0.8186,0.1401,0.819,0.1409,0.9081,0.1606,0.921,0.1574,0.8033,0.1412,0.8033,0.142,0.8231,0.1042,0.8212,0.1078,0.8231,0.1042,0.8236,0.1075,0.7948,0.0956,0.8206,0.0932,0.8206,0.0932,0.7948,0.0956,0.8249,0.0987,0.8253,0.1032,0.8258,0.1063,0.8253,0.1032,0.8249,0.0987,0.823,0.0929,0.823,0.0929,0.7917,0.1017,0.7916,0.1064,0.7918,0.1091,0.7916,0.1063,0.7917,0.1017,0.7927,0.0957,0.7927,0.0957,0.9376,0.1925,0.9098,0.1997,0.927,0.1595,0.9344,0.1846,0.9361,0.1842,0.9366,0.1872,0.9035,0.1654,0.9061,0.1582,0.9213,0.1544,0.9096,0.1911,0.9084,0.195,0.9074,0.1918}, 116);
SoIndexedFaceSet1098->setTexCoord(*SoTextureCoordinate1100);

SoShape1094->setGeometry(*SoIndexedFaceSet1098);

SoTransform1093->addChild(*SoShape1094);

SoHAnimSegment1092->addChild(*SoTransform1093);

SoHAnimJoint1091->addChildren(*SoHAnimSegment1092);

SoHAnimJoint* SoHAnimJoint1101 = new SoHAnimJoint();
SoHAnimJoint1101->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1101->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1101->setCenter(new float[]{8.076,26.809999,-0.1572});
SoHAnimJoint1101->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1101->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1102 = new SoHAnimSegment();
SoHAnimSegment1102->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimSegment1102->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoTransform* SoTransform1103 = new SoTransform();
SoTransform1103->setTranslation(new float[]{8.076,26.809999,-0.1572});
SoShape* SoShape1104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1105 = new SoVRMLAppearance();
SoMaterial* SoMaterial1106 = new SoMaterial();
SoMaterial1106->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1105->addChild(*SoMaterial1106);

SoImageTexture* SoImageTexture1107 = new SoImageTexture();
SoImageTexture1107->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1105->addChild(*SoImageTexture1107);

SoShape1104->addChild(*SoVRMLAppearance1105);

SoIndexedFaceSet* SoIndexedFaceSet1108 = new SoIndexedFaceSet();
SoIndexedFaceSet1108->setCoordIndex(new int32_t[]{1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1}, 176);
SoIndexedFaceSet1108->setCreaseAngle(3.14159);
SoIndexedFaceSet1108->setTexCoordIndex(new int32_t[]{3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1}, 176);
SoCoordinate* SoCoordinate1109 = new SoCoordinate();
SoCoordinate1109->setPoint(new float[]{-0.0742,-1.244,-0.3277,-0.4153,-1.216,0.2336,0.3026,-1.092,0.2392,0.3843,-0.2231,0.2405,0.3843,-0.2294,-0.2329,-0.4256,0.0008,-0.2389,0.4203,0.1179,-0.242,-0.4256,0.0071,0.2345,0.4203,0.1243,0.2314,-0.2414,0.2175,-0.2446,-0.2414,0.2239,0.2288,0.1761,0.2121,0.2291,0.1761,0.2057,-0.2443,-0.0255,-0.0287,-0.3639,-0.0255,-0.0188,0.3737,-0.0745,-1.235,0.3544,0.1793,-1.484,0.2301,-0.0653,-1.497,0.2372,-0.4151,-1.222,-0.2219,-0.3461,-1.403,0.1992,-0.3459,-1.408,-0.177,0.3028,-1.098,-0.234,0.1795,-1.49,-0.2018,-0.0641,-1.531,-0.2017}, 72);
SoIndexedFaceSet1108->setCoord(*SoCoordinate1109);

SoTextureCoordinate* SoTextureCoordinate1110 = new SoTextureCoordinate();
SoTextureCoordinate1110->setPoint(new float[]{0.908,0.1649,0.8228,0.1342,0.8238,0.1612,0.9018,0.1387,0.818,0.1313,0.8186,0.139,0.9163,0.135,0.9232,0.1611,0.8031,0.1401,0.8044,0.1596,0.8199,0.1584,0.8025,0.1324,0.7986,0.1359,0.8014,0.1628,0.8179,0.1294,0.8023,0.1305,0.8179,0.1291,0.8023,0.1302,0.8199,0.1671,0.8202,0.1672,0.902,0.1343,0.914,0.1313,0.8058,0.1681,0.8058,0.1689,0.9035,0.1654,0.8978,0.139,0.927,0.1595,0.9196,0.1336,0.9092,0.1696,0.9243,0.1658,0.9003,0.1324,0.9142,0.1283}, 64);
SoIndexedFaceSet1108->setTexCoord(*SoTextureCoordinate1110);

SoShape1104->setGeometry(*SoIndexedFaceSet1108);

SoTransform1103->addChild(*SoShape1104);

SoHAnimSegment1102->addChild(*SoTransform1103);

SoHAnimJoint1101->addChildren(*SoHAnimSegment1102);

SoHAnimJoint* SoHAnimJoint1111 = new SoHAnimJoint();
SoHAnimJoint1111->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1111->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint1111->setCenter(new float[]{8.03,25.57,-0.1671});
SoHAnimJoint1111->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1111->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1112 = new SoHAnimSegment();
SoHAnimSegment1112->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSegment1112->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoTransform* SoTransform1113 = new SoTransform();
SoTransform1113->setTranslation(new float[]{8.03,25.57,-0.1671});
SoShape* SoShape1114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1115 = new SoVRMLAppearance();
SoMaterial* SoMaterial1116 = new SoMaterial();
SoMaterial1116->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1115->addChild(*SoMaterial1116);

SoImageTexture* SoImageTexture1117 = new SoImageTexture();
SoImageTexture1117->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1115->addChild(*SoImageTexture1117);

SoShape1114->addChild(*SoVRMLAppearance1115);

SoIndexedFaceSet* SoIndexedFaceSet1118 = new SoIndexedFaceSet();
SoIndexedFaceSet1118->setCoordIndex(new int32_t[]{0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1}, 248);
SoIndexedFaceSet1118->setCreaseAngle(3.14159);
SoIndexedFaceSet1118->setTexCoordIndex(new int32_t[]{0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1}, 248);
SoCoordinate* SoCoordinate1119 = new SoCoordinate();
SoCoordinate1119->setPoint(new float[]{0.3088,-0.1396,0.2568,0.309,-0.146,-0.2166,0.2521,-0.4949,0.2523,0.2525,-0.5053,-0.1929,-0.3444,-0.4714,0.2712,-0.0718,-0.4844,0.3472,-0.344,-0.4826,-0.2124,-0.0712,-0.4992,-0.2979,0.1267,-0.8325,0.2296,0.1271,-0.8423,-0.17,-0.3449,-0.8222,0.2244,-0.1082,-0.8209,0.3006,-0.3446,-0.8316,-0.1582,-0.1077,-0.8339,-0.24,0.1586,-0.9,0.0299,-0.3093,-0.9026,0.0297,-0.1093,-0.9463,0.0305,0.1544,-0.884,0.14,-0.3132,-0.8892,-0.0631,-0.0963,-0.9202,0.1766,0.1546,-0.8902,-0.0746,-0.3134,-0.8839,0.1274,-0.0959,-0.9309,-0.1063,-0.3697,0.028,0.2435,0.3484,0.1453,-0.2241,0.3482,0.1516,0.2492,0.1398,0.245,0.2295,0.14,0.2392,-0.2089,-0.2187,0.2486,0.2292,-0.3695,0.022,-0.212,-0.2185,0.2427,-0.2093,-0.0269,0.0093,0.3642,-0.0266,0.0001,-0.3179}, 99);
SoIndexedFaceSet1118->setCoord(*SoCoordinate1119);

SoTextureCoordinate* SoTextureCoordinate1120 = new SoTextureCoordinate();
SoTextureCoordinate1120->setPoint(new float[]{0.8204,0.1649,0.8238,0.1612,0.8199,0.1584,0.8044,0.1596,0.8014,0.1628,0.8049,0.166,0.807,0.1802,0.8204,0.1792,0.8232,0.1783,0.8982,0.1238,0.9018,0.1387,0.9123,0.1202,0.9163,0.135,0.8038,0.18,0.8141,0.1881,0.8169,0.1876,0.8192,0.1861,0.8213,0.1861,0.8983,0.1142,0.9079,0.1117,0.9004,0.112,0.9052,0.1108,0.8067,0.1872,0.8088,0.1869,0.8179,0.1883,0.8142,0.1891,0.8114,0.188,0.8106,0.1889,0.9027,0.111,0.8192,0.1563,0.8048,0.1573,0.8192,0.156,0.8048,0.1571,0.8978,0.139,0.9196,0.1336,0.8956,0.1239,0.9147,0.119,0.8959,0.1141,0.9101,0.1105,0.8989,0.1113,0.9025,0.1098,0.906,0.1094,0.9033,0.1433,0.9173,0.1398}, 88);
SoIndexedFaceSet1118->setTexCoord(*SoTextureCoordinate1120);

SoShape1114->setGeometry(*SoIndexedFaceSet1118);

SoTransform1113->addChild(*SoShape1114);

SoHAnimSegment1112->addChild(*SoTransform1113);

SoHAnimJoint1111->addChildren(*SoHAnimSegment1112);

SoHAnimJoint1101->addChildren(*SoHAnimJoint1111);

SoHAnimJoint1091->addChildren(*SoHAnimJoint1101);

SoHAnimJoint1081->addChildren(*SoHAnimJoint1091);

SoHAnimJoint1071->addChildren(*SoHAnimJoint1081);

SoHAnimJoint971->addChildren(*SoHAnimJoint1071);

SoHAnimJoint* SoHAnimJoint1121 = new SoHAnimJoint();
SoHAnimJoint1121->X3DNode::setName(QString("l_midcarpal_4_5"));
SoHAnimJoint1121->setDEF(QString("hanim_l_midcarpal_4_5"));
SoHAnimJoint1121->setCenter(new float[]{8.048,31.370001,-1.144});
SoHAnimJoint1121->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1121->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1122 = new SoHAnimSegment();
SoHAnimSegment1122->X3DNode::setName(QString("l_hamate"));
SoHAnimSegment1122->setDEF(QString("hanim_l_hamate"));
SoTransform* SoTransform1123 = new SoTransform();
SoTransform1123->setTranslation(new float[]{8.048,31.370001,-1.144});
SoShape* SoShape1124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1125 = new SoVRMLAppearance();
SoMaterial* SoMaterial1126 = new SoMaterial();
SoMaterial1126->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1125->addChild(*SoMaterial1126);

SoImageTexture* SoImageTexture1127 = new SoImageTexture();
SoImageTexture1127->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1125->addChild(*SoImageTexture1127);

SoShape1124->addChild(*SoVRMLAppearance1125);

SoIndexedFaceSet* SoIndexedFaceSet1128 = new SoIndexedFaceSet();
SoIndexedFaceSet1128->setCoordIndex(new int32_t[]{6,7,4,-1,4,3,6,-1,7,8,9,-1,9,0,7,-1,11,5,1,-1,1,2,11,-1,5,6,3,-1,3,1,5,-1,2,10,11,-1,4,7,0,-1,17,16,15,-1,17,15,14,-1,13,17,14,-1,20,22,21,-1,27,26,25,-1,25,24,27,-1,17,13,12,-1,12,18,17,-1,23,22,20,-1,20,19,23,-1,9,12,13,-1,13,0,9,-1,0,13,14,-1,14,4,0,-1,4,14,15,-1,15,3,4,-1,3,15,16,-1,16,1,3,-1,1,16,17,-1,17,2,1,-1,2,17,18,-1,18,10,2,-1,10,18,12,-1,12,9,10,-1,11,19,20,-1,20,5,11,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,7,6,-1,7,22,23,-1,23,8,7,-1,8,23,19,-1,19,11,8,-1,8,24,25,-1,25,9,8,-1,9,25,26,-1,26,10,9,-1,10,26,27,-1,27,11,10,-1,11,27,24,-1,24,8,11,-1}, 208);
SoIndexedFaceSet1128->setCreaseAngle(3.14159);
SoIndexedFaceSet1128->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,3,6,5,-1,5,4,3,-1,7,10,9,-1,9,8,7,-1,10,28,29,-1,29,9,10,-1,8,11,7,-1,2,3,4,-1,16,15,14,-1,16,14,13,-1,12,16,13,-1,35,37,36,-1,23,22,39,-1,39,38,23,-1,16,12,25,-1,25,24,16,-1,26,19,17,-1,17,27,26,-1,5,25,12,-1,12,4,5,-1,4,12,13,-1,13,2,4,-1,2,13,14,-1,14,1,2,-1,29,32,33,-1,33,9,29,-1,9,33,34,-1,34,8,9,-1,8,34,40,-1,40,11,8,-1,11,40,41,-1,41,30,11,-1,7,43,35,-1,35,10,7,-1,10,35,36,-1,36,28,10,-1,0,18,19,-1,19,3,0,-1,3,19,26,-1,26,6,3,-1,31,42,43,-1,43,7,31,-1,6,20,21,-1,21,5,6,-1,30,39,22,-1,22,11,30,-1,11,22,23,-1,23,7,11,-1,7,23,38,-1,38,31,7,-1}, 208);
SoCoordinate* SoCoordinate1129 = new SoCoordinate();
SoCoordinate1129->setPoint(new float[]{0.7573,-0.8348,-0.0837,-0.4564,-0.7476,-0.5366,-0.6059,-0.8342,-0.0839,0.0802,-0.7042,-0.6722,0.5794,-0.751,-0.5355,-0.4299,-0.0336,-0.0706,0.0854,-0.0164,-0.3649,0.6165,-0.0333,-0.0701,0.7213,0.1352,0.5926,0.7943,-0.8895,0.6002,-0.648,-0.8871,0.6001,-0.5902,0.1351,0.5939,0.6385,-1.05,0.5965,0.6101,-1.017,-0.0884,0.4568,-0.9463,-0.4747,0.0724,-0.9059,-0.5792,-0.3357,-0.9442,-0.4714,-0.4637,-1.017,-0.0877,-0.5294,-1.048,0.5964,-0.4096,0.4323,0.6564,-0.2986,0.2698,-0.012,0.0779,0.2847,-0.2247,0.4802,0.269,-0.0066,0.5535,0.4329,0.6554,0.6285,0.0491,0.6714,0.6895,-0.8073,0.6712,-0.5838,-0.8052,0.6711,-0.4997,0.049,0.6726}, 84);
SoIndexedFaceSet1128->setCoord(*SoCoordinate1129);

SoTextureCoordinate* SoTextureCoordinate1130 = new SoTextureCoordinate();
SoTextureCoordinate1130->setPoint(new float[]{0.7624,0.0345,0.7525,0.0502,0.7571,0.0508,0.7729,0.0334,0.7734,0.0512,0.7924,0.0508,0.791,0.0281,0.9531,0.2644,0.9665,0.2386,0.9827,0.2362,0.9706,0.2558,0.9479,0.2423,0.7736,0.0553,0.7595,0.0549,0.7559,0.0544,0.7596,0.0549,0.7736,0.0553,0.7721,0.0268,0.7644,0.0276,0.7723,0.0268,0.7938,0.0298,0.795,0.0487,0.9457,0.2448,0.9501,0.2632,0.7926,0.0543,0.7926,0.0544,0.7903,0.0215,0.7903,0.0215,0.9803,0.2531,0.9874,0.236,0.9479,0.2423,0.9532,0.2644,0.9832,0.2324,0.9795,0.2325,0.9656,0.2346,0.9721,0.2624,0.9795,0.2602,0.9719,0.2625,0.9502,0.2632,0.9457,0.2447,0.9471,0.2389,0.9471,0.2388,0.9551,0.2707,0.955,0.2707}, 88);
SoIndexedFaceSet1128->setTexCoord(*SoTextureCoordinate1130);

SoShape1124->setGeometry(*SoIndexedFaceSet1128);

SoTransform1123->addChild(*SoShape1124);

SoHAnimSegment1122->addChild(*SoTransform1123);

SoHAnimJoint1121->addChildren(*SoHAnimSegment1122);

SoHAnimJoint* SoHAnimJoint1131 = new SoHAnimJoint();
SoHAnimJoint1131->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint1131->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint1131->setCenter(new float[]{8.048,30.5,-0.8853});
SoHAnimJoint1131->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1131->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1132 = new SoHAnimSegment();
SoHAnimSegment1132->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimSegment1132->setDEF(QString("hanim_l_metacarpal_4"));
SoTransform* SoTransform1133 = new SoTransform();
SoTransform1133->setTranslation(new float[]{8.048,30.5,-0.8853});
SoShape* SoShape1134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1135 = new SoVRMLAppearance();
SoMaterial* SoMaterial1136 = new SoMaterial();
SoMaterial1136->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1135->addChild(*SoMaterial1136);

SoImageTexture* SoImageTexture1137 = new SoImageTexture();
SoImageTexture1137->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1135->addChild(*SoImageTexture1137);

SoShape1134->addChild(*SoVRMLAppearance1135);

SoIndexedFaceSet* SoIndexedFaceSet1138 = new SoIndexedFaceSet();
SoIndexedFaceSet1138->setCoordIndex(new int32_t[]{9,2,0,-1,0,6,9,-1,6,0,4,-1,4,10,6,-1,7,1,3,-1,3,8,7,-1,7,11,5,-1,5,1,7,-1,12,15,14,-1,14,13,12,-1,34,33,32,-1,32,35,34,-1,17,16,21,-1,21,20,17,-1,29,24,31,-1,31,30,29,-1,17,20,19,-1,19,18,17,-1,24,29,28,-1,28,25,24,-1,9,12,13,-1,13,2,9,-1,16,23,22,-1,22,21,16,-1,3,14,15,-1,15,8,3,-1,28,27,26,-1,26,25,28,-1,2,16,17,-1,17,0,2,-1,0,17,18,-1,18,4,0,-1,4,18,19,-1,19,5,4,-1,5,19,20,-1,20,1,5,-1,1,20,21,-1,21,3,1,-1,3,21,22,-1,22,14,3,-1,14,22,23,-1,23,13,14,-1,13,23,16,-1,16,2,13,-1,6,24,25,-1,25,9,6,-1,9,25,26,-1,26,12,9,-1,12,26,27,-1,27,15,12,-1,15,27,28,-1,28,8,15,-1,8,28,29,-1,29,7,8,-1,7,29,30,-1,30,11,7,-1,11,30,31,-1,31,10,11,-1,10,31,24,-1,24,6,10,-1,4,32,33,-1,33,10,4,-1,10,33,34,-1,34,11,10,-1,11,34,35,-1,35,5,11,-1,5,35,32,-1,32,4,5,-1}, 272);
SoIndexedFaceSet1138->setCreaseAngle(3.14159);
SoIndexedFaceSet1138->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,1,2,5,-1,5,4,1,-1,38,9,40,-1,40,39,38,-1,38,42,41,-1,41,9,38,-1,12,15,14,-1,14,13,12,-1,16,45,44,-1,44,43,16,-1,20,23,22,-1,22,21,20,-1,48,51,50,-1,50,49,48,-1,20,21,29,-1,29,28,20,-1,27,24,31,-1,31,30,27,-1,0,12,13,-1,13,3,0,-1,23,33,32,-1,32,22,23,-1,8,14,15,-1,15,7,8,-1,31,35,34,-1,34,30,31,-1,3,23,20,-1,20,2,3,-1,2,20,28,-1,28,5,2,-1,37,52,53,-1,53,41,37,-1,41,53,46,-1,46,9,41,-1,9,46,47,-1,47,40,9,-1,8,22,32,-1,32,14,8,-1,14,32,33,-1,33,13,14,-1,13,33,23,-1,23,3,13,-1,1,27,30,-1,30,0,1,-1,0,30,34,-1,34,12,0,-1,12,34,35,-1,35,15,12,-1,15,35,31,-1,31,7,15,-1,7,31,24,-1,24,6,7,-1,38,48,49,-1,49,42,38,-1,11,25,26,-1,26,4,11,-1,4,26,27,-1,27,1,4,-1,5,18,19,-1,19,4,5,-1,36,45,16,-1,16,42,36,-1,42,16,43,-1,43,41,42,-1,10,17,18,-1,18,5,10,-1}, 272);
SoCoordinate* SoCoordinate1139 = new SoCoordinate();
SoCoordinate1139->setPoint(new float[]{0.6701,-1.109,-0.381,-0.5002,-1.109,-0.381,0.5854,-2.053,-0.382,-0.3852,-2.055,-0.3819,0.7573,0.0375,-0.3424,-0.6059,0.038,-0.3427,0.7345,-1.187,0.3483,-0.52,-1.187,0.3483,-0.3873,-2.129,0.3239,0.6104,-2.129,0.3239,0.7943,-0.0173,0.3415,-0.648,-0.0149,0.3414,0.5243,-2.308,0.28,0.497,-2.261,-0.3321,-0.2939,-2.263,-0.3318,-0.2957,-2.308,0.28,0.4894,-2.031,-0.4703,0.5729,-1.093,-0.5036,0.6547,0.0614,-0.4454,-0.4956,0.0619,-0.4456,-0.4036,-1.089,-0.5034,-0.2898,-2.031,-0.4702,-0.2275,-2.181,-0.4572,0.4297,-2.18,-0.4575,0.6305,-1.198,0.4843,0.5217,-2.087,0.416,0.4533,-2.218,0.3849,-0.2266,-2.218,0.3849,-0.2933,-2.087,0.416,-0.4181,-1.194,0.4842,-0.5616,-0.0205,0.464,0.6844,-0.0225,0.4641,0.6316,0.1344,-0.2698,0.6522,0.1035,0.257,-0.5315,0.1057,0.257,-0.4839,0.1347,-0.27}, 108);
SoIndexedFaceSet1138->setCoord(*SoCoordinate1139);

SoTextureCoordinate* SoTextureCoordinate1140 = new SoTextureCoordinate();
SoTextureCoordinate1140->setPoint(new float[]{0.7939,0.1016,0.7938,0.0824,0.7694,0.0827,0.766,0.1014,0.7924,0.0508,0.7734,0.0512,0.7938,0.0824,0.7939,0.1016,0.766,0.1015,0.965,0.2069,0.7734,0.0512,0.7924,0.0507,0.7909,0.1057,0.7677,0.1056,0.7677,0.1057,0.7909,0.1057,0.9517,0.2441,0.7765,0.0488,0.7765,0.0488,0.789,0.0484,0.7643,0.0825,0.7643,0.0824,0.7614,0.1009,0.7614,0.1009,0.7991,0.0823,0.7971,0.0505,0.7971,0.0505,0.7991,0.0824,0.7688,0.0511,0.7688,0.0511,0.7994,0.1003,0.7994,0.1003,0.7625,0.1038,0.7625,0.1038,0.7972,0.1034,0.7972,0.1034,0.9479,0.2423,0.9665,0.2385,0.941,0.2114,0.9376,0.1925,0.9651,0.1878,0.9665,0.2386,0.9479,0.2423,0.9639,0.2415,0.9639,0.2415,0.9517,0.244,0.9701,0.2063,0.9698,0.1875,0.9358,0.2124,0.9433,0.2434,0.9433,0.2434,0.9358,0.2123,0.9711,0.2379,0.9711,0.2379}, 108);
SoIndexedFaceSet1138->setTexCoord(*SoTextureCoordinate1140);

SoShape1134->setGeometry(*SoIndexedFaceSet1138);

SoTransform1133->addChild(*SoShape1134);

SoHAnimSegment1132->addChild(*SoTransform1133);

SoHAnimJoint1131->addChildren(*SoHAnimSegment1132);

SoHAnimJoint* SoHAnimJoint1141 = new SoHAnimJoint();
SoHAnimJoint1141->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint1141->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint1141->setCenter(new float[]{8.164,28.18,-0.9529});
SoHAnimJoint1141->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1141->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1142 = new SoHAnimSegment();
SoHAnimSegment1142->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimSegment1142->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoTransform* SoTransform1143 = new SoTransform();
SoTransform1143->setTranslation(new float[]{8.164,28.18,-0.9529});
SoShape* SoShape1144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1145 = new SoVRMLAppearance();
SoMaterial* SoMaterial1146 = new SoMaterial();
SoMaterial1146->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1145->addChild(*SoMaterial1146);

SoImageTexture* SoImageTexture1147 = new SoImageTexture();
SoImageTexture1147->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1145->addChild(*SoImageTexture1147);

SoShape1144->addChild(*SoVRMLAppearance1145);

SoIndexedFaceSet* SoIndexedFaceSet1148 = new SoIndexedFaceSet();
SoIndexedFaceSet1148->setCoordIndex(new int32_t[]{3,4,22,-1,22,23,3,-1,5,6,31,-1,31,32,5,-1,4,44,22,-1,0,14,6,-1,6,5,0,-1,4,3,17,-1,17,1,4,-1,0,5,7,-1,7,2,0,-1,7,4,1,-1,1,2,7,-1,7,5,45,-1,45,43,7,-1,4,7,43,-1,43,44,4,-1,45,5,32,-1,15,13,11,-1,11,17,15,-1,0,8,10,-1,10,14,0,-1,17,11,9,-1,9,1,17,-1,2,12,8,-1,8,0,2,-1,1,9,12,-1,12,2,1,-1,14,10,13,-1,13,15,14,-1,10,8,12,-1,12,13,10,-1,11,13,12,-1,12,9,11,-1,3,23,40,-1,14,15,16,-1,16,6,14,-1,16,15,17,-1,17,3,16,-1,16,41,42,-1,42,6,16,-1,3,40,41,-1,41,16,3,-1,42,31,6,-1,21,20,19,-1,19,18,21,-1,22,18,19,-1,19,23,22,-1,24,30,29,-1,24,29,28,-1,28,27,26,-1,28,26,25,-1,24,28,25,-1,31,20,21,-1,21,32,31,-1,33,39,38,-1,33,38,37,-1,37,36,35,-1,33,37,35,-1,33,35,34,-1,40,25,26,-1,26,41,40,-1,41,26,27,-1,27,42,41,-1,42,27,28,-1,28,31,42,-1,31,28,29,-1,29,20,31,-1,20,29,30,-1,30,19,20,-1,19,30,24,-1,24,23,19,-1,23,24,25,-1,25,40,23,-1,43,35,36,-1,36,44,43,-1,44,36,37,-1,37,22,44,-1,22,37,38,-1,38,18,22,-1,18,38,39,-1,39,21,18,-1,21,39,33,-1,33,32,21,-1,32,33,34,-1,34,45,32,-1,45,34,35,-1,35,43,45,-1}, 352);
SoIndexedFaceSet1148->setCreaseAngle(3.14159);
SoIndexedFaceSet1148->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,7,47,-1,47,46,4,-1,3,8,2,-1,9,10,7,-1,7,4,9,-1,3,0,12,-1,12,11,3,-1,9,4,49,-1,49,48,9,-1,14,3,11,-1,11,13,14,-1,49,4,51,-1,51,50,49,-1,3,14,15,-1,15,8,3,-1,51,4,46,-1,17,19,18,-1,18,12,17,-1,9,21,20,-1,20,10,9,-1,12,18,22,-1,22,11,12,-1,48,54,21,-1,21,9,48,-1,11,22,23,-1,23,13,11,-1,10,20,53,-1,53,52,10,-1,20,21,54,-1,54,53,20,-1,18,19,23,-1,23,22,18,-1,0,1,24,-1,10,52,55,-1,55,7,10,-1,25,17,12,-1,12,0,25,-1,55,57,56,-1,56,7,55,-1,0,24,27,-1,27,25,0,-1,56,47,7,-1,31,30,29,-1,29,28,31,-1,2,28,29,-1,29,1,2,-1,32,38,37,-1,32,37,36,-1,36,35,34,-1,36,34,33,-1,32,36,33,-1,6,30,31,-1,31,5,6,-1,39,45,44,-1,39,44,43,-1,43,42,41,-1,39,43,41,-1,39,41,40,-1,24,33,34,-1,34,27,24,-1,27,34,35,-1,35,26,27,-1,26,35,36,-1,36,6,26,-1,6,36,37,-1,37,30,6,-1,30,37,38,-1,38,29,30,-1,29,38,32,-1,32,1,29,-1,1,32,33,-1,33,24,1,-1,15,41,42,-1,42,8,15,-1,8,42,43,-1,43,2,8,-1,2,43,44,-1,44,28,2,-1,28,44,45,-1,45,31,28,-1,31,45,39,-1,39,5,31,-1,5,39,40,-1,40,16,5,-1,16,40,41,-1,41,15,16,-1}, 352);
SoCoordinate* SoCoordinate1149 = new SoCoordinate();
SoCoordinate1149->setPoint(new float[]{-0.5138,-1.2,-0.1973,0.3321,-1.094,-0.2008,-0.1137,-1.228,-0.3178,0.411,-0.0395,0.2967,0.4111,0.0046,-0.2029,-0.4652,0.0046,-0.2029,-0.4652,-0.0395,0.2967,-0.0566,-0.1,-0.3284,-0.4393,-1.371,-0.1653,0.1722,-1.457,-0.1917,-0.4393,-1.361,0.2347,0.1722,-1.444,0.2676,-0.1147,-1.489,-0.1915,-0.1147,-1.476,0.2775,-0.5138,-1.189,0.26,-0.1137,-1.211,0.3945,-0.0566,-0.1878,0.3836,0.3321,-1.083,0.2565,0.3332,0.5222,-0.2966,0.3334,0.4616,0.3736,-0.3997,0.4616,0.3736,-0.4034,0.5222,-0.2966,0.47,0.2688,-0.3145,0.495,0.1933,0.3915,0.4732,0.206,0.4381,0.389,0.0041,0.442,-0.0557,-0.1381,0.4291,-0.44,0.0026,0.4421,-0.4708,0.2058,0.4382,-0.3791,0.4624,0.4513,0.3159,0.4624,0.4513,-0.5028,0.1933,0.3915,-0.5007,0.2672,-0.3143,-0.452,0.2987,-0.3662,-0.4196,0.0626,-0.374,-0.0554,-0.0537,-0.3484,0.3712,0.0655,-0.3743,0.4489,0.2983,-0.3662,0.3034,0.5285,-0.3426,-0.3668,0.5285,-0.3426,0.411,-0.0513,0.403,-0.0566,-0.1886,0.3999,-0.4652,-0.0513,0.403,-0.0596,-0.0984,-0.3396,0.3993,0.0128,-0.3296,-0.4652,0.0128,-0.3296}, 138);
SoIndexedFaceSet1148->setCoord(*SoCoordinate1149);

SoTextureCoordinate* SoTextureCoordinate1150 = new SoTextureCoordinate();
SoTextureCoordinate1150->setPoint(new float[]{0.7878,0.1071,0.7939,0.1016,0.766,0.1014,0.7709,0.1068,0.9594,0.1833,0.766,0.1015,0.7939,0.1016,0.9426,0.186,0.7648,0.1066,0.9545,0.1568,0.9398,0.1599,0.771,0.1315,0.7861,0.131,0.767,0.1345,0.7667,0.1094,0.7644,0.1092,0.7648,0.1066,0.7904,0.1338,0.786,0.139,0.7863,0.1397,0.9402,0.1559,0.9531,0.1532,0.7709,0.1396,0.7709,0.1403,0.794,0.107,0.7917,0.1102,0.794,0.107,0.7939,0.1101,0.7675,0.0958,0.7934,0.0956,0.7934,0.0956,0.7675,0.0958,0.7967,0.1011,0.7964,0.1056,0.7964,0.1088,0.7964,0.1057,0.7967,0.1011,0.7958,0.0955,0.7958,0.0955,0.7633,0.1008,0.7625,0.1056,0.7622,0.1084,0.7625,0.1055,0.7633,0.1008,0.765,0.0957,0.765,0.0957,0.9651,0.1878,0.9376,0.1925,0.9583,0.1554,0.963,0.1801,0.9654,0.1799,0.9654,0.1826,0.9354,0.1602,0.9385,0.1536,0.9536,0.1504,0.9383,0.1837,0.9366,0.1872,0.9361,0.1842}, 116);
SoIndexedFaceSet1148->setTexCoord(*SoTextureCoordinate1150);

SoShape1144->setGeometry(*SoIndexedFaceSet1148);

SoTransform1143->addChild(*SoShape1144);

SoHAnimSegment1142->addChild(*SoTransform1143);

SoHAnimJoint1141->addChildren(*SoHAnimSegment1142);

SoHAnimJoint* SoHAnimJoint1151 = new SoHAnimJoint();
SoHAnimJoint1151->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1151->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1151->setCenter(new float[]{8.076,26.959999,-0.9176});
SoHAnimJoint1151->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1151->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1152 = new SoHAnimSegment();
SoHAnimSegment1152->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimSegment1152->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoTransform* SoTransform1153 = new SoTransform();
SoTransform1153->setTranslation(new float[]{8.076,26.959999,-0.9176});
SoShape* SoShape1154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1155 = new SoVRMLAppearance();
SoMaterial* SoMaterial1156 = new SoMaterial();
SoMaterial1156->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1155->addChild(*SoMaterial1156);

SoImageTexture* SoImageTexture1157 = new SoImageTexture();
SoImageTexture1157->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1155->addChild(*SoImageTexture1157);

SoShape1154->addChild(*SoVRMLAppearance1155);

SoIndexedFaceSet* SoIndexedFaceSet1158 = new SoIndexedFaceSet();
SoIndexedFaceSet1158->setCoordIndex(new int32_t[]{1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1}, 176);
SoIndexedFaceSet1158->setCreaseAngle(3.14159);
SoIndexedFaceSet1158->setTexCoordIndex(new int32_t[]{3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1}, 176);
SoCoordinate* SoCoordinate1159 = new SoCoordinate();
SoCoordinate1159->setPoint(new float[]{-0.0823,-1.173,-0.2984,-0.4234,-1.145,0.233,0.2949,-1.031,0.2378,0.3843,-0.1818,0.2296,0.3843,-0.1915,-0.2186,-0.4256,0.0168,-0.2326,0.4203,0.1233,-0.236,-0.4256,0.0279,0.2247,0.4203,0.1344,0.2212,-0.2414,0.2148,-0.2328,-0.2414,0.2245,0.2154,0.1761,0.2138,0.2158,0.1761,0.2041,-0.2324,-0.0255,-0.0114,-0.3531,-0.0255,0.0059,0.3593,-0.0827,-1.161,0.3475,0.1702,-1.388,0.2311,-0.0744,-1.4,0.2378,-0.4231,-1.153,-0.1983,-0.3548,-1.316,0.2013,-0.3546,-1.322,-0.1549,0.2952,-1.04,-0.2103,0.1705,-1.395,-0.1779,-0.0732,-1.433,-0.1776}, 72);
SoIndexedFaceSet1158->setCoord(*SoCoordinate1159);

SoTextureCoordinate* SoTextureCoordinate1160 = new SoTextureCoordinate();
SoTextureCoordinate1160->setPoint(new float[]{0.9398,0.1599,0.7904,0.1338,0.7888,0.1598,0.9363,0.1341,0.7861,0.131,0.7859,0.138,0.9502,0.1313,0.9545,0.1568,0.7712,0.1385,0.7707,0.1575,0.7854,0.1571,0.771,0.1315,0.767,0.1345,0.7676,0.1604,0.786,0.1292,0.7713,0.1297,0.786,0.129,0.7713,0.1294,0.7847,0.165,0.7849,0.1652,0.9369,0.1301,0.9483,0.1278,0.7712,0.1654,0.7712,0.1661,0.9354,0.1602,0.9325,0.1343,0.9583,0.1554,0.9533,0.1301,0.9406,0.1642,0.9551,0.1612,0.9355,0.1283,0.9488,0.1251}, 64);
SoIndexedFaceSet1158->setTexCoord(*SoTextureCoordinate1160);

SoShape1154->setGeometry(*SoIndexedFaceSet1158);

SoTransform1153->addChild(*SoShape1154);

SoHAnimSegment1152->addChild(*SoTransform1153);

SoHAnimJoint1151->addChildren(*SoHAnimSegment1152);

SoHAnimJoint* SoHAnimJoint1161 = new SoHAnimJoint();
SoHAnimJoint1161->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1161->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint1161->setCenter(new float[]{8.03,25.809999,-0.879});
SoHAnimJoint1161->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1161->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1162 = new SoHAnimSegment();
SoHAnimSegment1162->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSegment1162->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoTransform* SoTransform1163 = new SoTransform();
SoTransform1163->setTranslation(new float[]{8.03,25.809999,-0.879});
SoShape* SoShape1164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1165 = new SoVRMLAppearance();
SoMaterial* SoMaterial1166 = new SoMaterial();
SoMaterial1166->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1165->addChild(*SoMaterial1166);

SoImageTexture* SoImageTexture1167 = new SoImageTexture();
SoImageTexture1167->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1165->addChild(*SoImageTexture1167);

SoShape1164->addChild(*SoVRMLAppearance1165);

SoIndexedFaceSet* SoIndexedFaceSet1168 = new SoIndexedFaceSet();
SoIndexedFaceSet1168->setCoordIndex(new int32_t[]{0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1}, 248);
SoIndexedFaceSet1168->setCreaseAngle(3.14159);
SoIndexedFaceSet1168->setTexCoordIndex(new int32_t[]{0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1}, 248);
SoCoordinate* SoCoordinate1169 = new SoCoordinate();
SoCoordinate1169->setPoint(new float[]{0.3166,-0.1433,0.2079,0.3169,-0.1519,-0.2403,0.2442,-0.5193,0.1944,0.2444,-0.5269,-0.2171,-0.3527,-0.4861,0.211,-0.0799,-0.5048,0.29,-0.3524,-0.4944,-0.236,-0.0795,-0.516,-0.3155,0.1361,-0.8158,0.1702,0.1363,-0.8223,-0.1824,-0.3546,-0.7984,0.165,-0.1169,-0.8256,0.2434,-0.3544,-0.8046,-0.1727,-0.1165,-0.8348,-0.2533,0.1687,-0.903,-0.0042,-0.3182,-0.9029,-0.0045,-0.1176,-0.9628,-0.0024,0.1644,-0.8834,0.0927,-0.3222,-0.8834,-0.0869,-0.1048,-0.9305,0.1259,0.1646,-0.8882,-0.0967,-0.3224,-0.8794,0.0812,-0.1044,-0.9401,-0.1237,-0.3778,0.0076,0.1944,0.3408,0.113,-0.2488,0.3405,0.1215,0.1993,0.1324,0.2059,0.1802,0.1327,0.198,-0.2349,-0.2261,0.2084,0.1799,-0.3775,-0.0006,-0.2368,-0.2258,0.2005,-0.2353,-0.0351,-0.0081,0.3088,-0.0347,-0.0204,-0.3369}, 99);
SoIndexedFaceSet1168->setCoord(*SoCoordinate1169);

SoTextureCoordinate* SoTextureCoordinate1170 = new SoTextureCoordinate();
SoTextureCoordinate1170->setPoint(new float[]{0.7853,0.163,0.7888,0.1598,0.7854,0.1571,0.7707,0.1575,0.7676,0.1604,0.7706,0.1634,0.7714,0.1739,0.7841,0.1736,0.787,0.1731,0.9344,0.121,0.9363,0.1341,0.9479,0.1182,0.9502,0.1313,0.7684,0.1736,0.7774,0.1846,0.7801,0.1842,0.7824,0.1828,0.7844,0.1829,0.9351,0.111,0.9443,0.1091,0.9372,0.109,0.9418,0.1081,0.7705,0.1833,0.7725,0.1831,0.781,0.1849,0.7774,0.1856,0.7748,0.1843,0.774,0.1852,0.9395,0.1081,0.7849,0.1552,0.7712,0.1555,0.7849,0.1549,0.7712,0.1553,0.9325,0.1343,0.9533,0.1301,0.9319,0.1209,0.9502,0.1172,0.9329,0.1108,0.9464,0.108,0.9358,0.1082,0.9393,0.1069,0.9427,0.1067,0.9372,0.1384,0.9506,0.1357}, 88);
SoIndexedFaceSet1168->setTexCoord(*SoTextureCoordinate1170);

SoShape1164->setGeometry(*SoIndexedFaceSet1168);

SoTransform1163->addChild(*SoShape1164);

SoHAnimSegment1162->addChild(*SoTransform1163);

SoHAnimJoint1161->addChildren(*SoHAnimSegment1162);

SoHAnimJoint1151->addChildren(*SoHAnimJoint1161);

SoHAnimJoint1141->addChildren(*SoHAnimJoint1151);

SoHAnimJoint1131->addChildren(*SoHAnimJoint1141);

SoHAnimJoint1121->addChildren(*SoHAnimJoint1131);

SoHAnimJoint971->addChildren(*SoHAnimJoint1121);

SoHAnimJoint* SoHAnimJoint1171 = new SoHAnimJoint();
SoHAnimJoint1171->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint1171->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint1171->setCenter(new float[]{8.073,30.59,-1.457});
SoHAnimJoint1171->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1171->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1172 = new SoHAnimSegment();
SoHAnimSegment1172->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimSegment1172->setDEF(QString("hanim_l_metacarpal_5"));
SoTransform* SoTransform1173 = new SoTransform();
SoTransform1173->setTranslation(new float[]{8.073,30.59,-1.457});
SoShape* SoShape1174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1175 = new SoVRMLAppearance();
SoMaterial* SoMaterial1176 = new SoMaterial();
SoMaterial1176->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1175->addChild(*SoMaterial1176);

SoImageTexture* SoImageTexture1177 = new SoImageTexture();
SoImageTexture1177->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1175->addChild(*SoImageTexture1177);

SoShape1174->addChild(*SoVRMLAppearance1175);

SoIndexedFaceSet* SoIndexedFaceSet1178 = new SoIndexedFaceSet();
SoIndexedFaceSet1178->setCoordIndex(new int32_t[]{11,3,0,-1,0,9,11,-1,5,4,1,-1,1,2,5,-1,3,5,2,-1,2,0,3,-1,9,0,8,-1,8,13,9,-1,2,1,6,-1,6,7,2,-1,6,1,10,-1,10,14,6,-1,1,4,12,-1,12,10,1,-1,0,2,7,-1,7,8,0,-1,25,20,27,-1,27,26,25,-1,18,17,16,-1,19,18,16,-1,15,19,16,-1,32,31,30,-1,32,30,29,-1,28,32,29,-1,11,15,16,-1,16,3,11,-1,3,16,17,-1,17,5,3,-1,5,17,18,-1,18,4,5,-1,4,18,19,-1,19,12,4,-1,24,23,22,-1,22,21,24,-1,20,25,24,-1,24,21,20,-1,9,20,21,-1,21,11,9,-1,11,21,22,-1,22,15,11,-1,15,22,23,-1,23,19,15,-1,19,23,24,-1,24,12,19,-1,12,24,25,-1,25,10,12,-1,10,25,26,-1,26,14,10,-1,14,26,27,-1,27,13,14,-1,13,27,20,-1,20,9,13,-1,14,28,29,-1,29,6,14,-1,6,29,30,-1,30,7,6,-1,7,30,31,-1,31,8,7,-1,8,31,32,-1,32,13,8,-1,13,32,28,-1,28,14,13,-1}, 248);
SoIndexedFaceSet1178->setCreaseAngle(3.14159);
SoIndexedFaceSet1178->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,33,35,6,-1,6,34,33,-1,3,4,5,-1,5,2,3,-1,1,2,9,-1,9,8,1,-1,34,6,11,-1,11,37,34,-1,11,6,38,-1,38,12,11,-1,6,35,39,-1,39,38,6,-1,2,5,10,-1,10,9,2,-1,40,42,41,-1,41,16,40,-1,22,21,20,-1,23,22,20,-1,19,23,20,-1,45,44,43,-1,45,43,25,-1,24,45,25,-1,0,19,20,-1,20,3,0,-1,3,20,21,-1,21,4,3,-1,4,21,22,-1,22,7,4,-1,7,22,23,-1,23,14,7,-1,29,32,31,-1,31,30,29,-1,18,15,29,-1,29,30,18,-1,1,18,30,-1,30,0,1,-1,0,30,31,-1,31,19,0,-1,19,31,32,-1,32,23,19,-1,23,32,29,-1,29,14,23,-1,14,29,15,-1,15,13,14,-1,38,40,16,-1,16,12,38,-1,12,16,41,-1,41,36,12,-1,8,17,18,-1,18,1,8,-1,12,24,25,-1,25,11,12,-1,11,25,43,-1,43,37,11,-1,10,26,27,-1,27,9,10,-1,9,27,28,-1,28,8,9,-1,36,45,24,-1,24,12,36,-1}, 248);
SoCoordinate* SoCoordinate1179 = new SoCoordinate();
SoCoordinate1179->setPoint(new float[]{0.5437,-1.115,-0.3876,-0.4574,-1.115,-0.3875,0.0391,-1.055,-0.5375,0.5003,-2.035,-0.4225,-0.3976,-2.035,-0.4225,0.0194,-2.01,-0.5522,-0.4806,0.0289,-0.2234,0.0559,0.0724,-0.359,0.5551,0.0256,-0.2224,0.6458,-1.204,0.1909,-0.5245,-1.204,0.1909,0.5611,-2.149,0.1899,-0.4095,-2.15,0.19,0.733,-0.0582,0.2295,-0.6302,-0.0576,0.2292,0.4048,-2.339,0.1195,0.3316,-2.225,-0.3174,0.0208,-2.205,-0.4092,-0.2611,-2.224,-0.3218,-0.2696,-2.34,0.1198,0.5486,-1.22,0.3281,0.4658,-2.148,0.2836,0.3509,-2.289,0.2567,-0.2127,-2.29,0.257,-0.3146,-2.15,0.283,-0.4279,-1.216,0.3283,-0.5199,-0.0723,0.3338,0.6304,-0.0728,0.334,-0.4381,0.0771,0.139,-0.358,0.1199,-0.1192,0.0563,0.1597,-0.2281,0.4414,0.1179,-0.1236,0.5384,0.0772,0.1392}, 99);
SoIndexedFaceSet1178->setCoord(*SoCoordinate1179);

SoTextureCoordinate* SoTextureCoordinate1180 = new SoTextureCoordinate();
SoTextureCoordinate1180->setPoint(new float[]{0.766,0.1014,0.7694,0.0827,0.748,0.0813,0.7455,0.0995,0.7415,0.0989,0.7435,0.0798,0.9864,0.2045,0.7455,0.0995,0.7734,0.0512,0.7571,0.0508,0.7525,0.0502,0.9827,0.2362,0.9665,0.2386,0.7694,0.0827,0.766,0.1015,0.774,0.0829,0.9619,0.2395,0.7782,0.0512,0.774,0.083,0.7619,0.1052,0.7474,0.1039,0.7446,0.1034,0.7473,0.1038,0.7619,0.1052,0.9712,0.2404,0.9799,0.239,0.7566,0.0479,0.7602,0.0485,0.7691,0.0486,0.771,0.1015,0.771,0.1014,0.768,0.1042,0.768,0.1042,0.9897,0.1861,0.991,0.2053,0.9856,0.1862,0.9665,0.2385,0.9874,0.236,0.965,0.2069,0.9651,0.1878,0.9604,0.2075,0.9619,0.2395,0.9604,0.2074,0.9836,0.239,0.98,0.239,0.9712,0.2404}, 92);
SoIndexedFaceSet1178->setTexCoord(*SoTextureCoordinate1180);

SoShape1174->setGeometry(*SoIndexedFaceSet1178);

SoTransform1173->addChild(*SoShape1174);

SoHAnimSegment1172->addChild(*SoTransform1173);

SoHAnimJoint1171->addChildren(*SoHAnimSegment1172);

SoHAnimJoint* SoHAnimJoint1181 = new SoHAnimJoint();
SoHAnimJoint1181->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint1181->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint1181->setCenter(new float[]{8.148,28.360001,-1.647});
SoHAnimJoint1181->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1181->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1182 = new SoHAnimSegment();
SoHAnimSegment1182->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimSegment1182->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoTransform* SoTransform1183 = new SoTransform();
SoTransform1183->setTranslation(new float[]{8.148,28.360001,-1.647});
SoShape* SoShape1184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1185 = new SoVRMLAppearance();
SoMaterial* SoMaterial1186 = new SoMaterial();
SoMaterial1186->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1185->addChild(*SoMaterial1186);

SoImageTexture* SoImageTexture1187 = new SoImageTexture();
SoImageTexture1187->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1185->addChild(*SoImageTexture1187);

SoShape1184->addChild(*SoVRMLAppearance1185);

SoIndexedFaceSet* SoIndexedFaceSet1188 = new SoIndexedFaceSet();
SoIndexedFaceSet1188->setCoordIndex(new int32_t[]{10,8,6,-1,6,11,10,-1,0,3,5,-1,5,9,0,-1,11,6,4,-1,4,1,11,-1,2,7,3,-1,3,0,2,-1,1,4,7,-1,7,2,1,-1,9,5,8,-1,8,10,9,-1,5,3,7,-1,7,8,5,-1,6,8,7,-1,7,4,6,-1,17,13,1,-1,1,2,17,-1,14,15,26,-1,26,25,14,-1,0,9,15,-1,15,14,0,-1,13,12,11,-1,11,1,13,-1,2,0,14,-1,14,17,2,-1,12,34,36,-1,9,10,16,-1,16,15,9,-1,16,10,11,-1,11,12,16,-1,16,35,37,-1,37,15,16,-1,12,36,35,-1,35,16,12,-1,37,26,15,-1,12,13,23,-1,23,34,12,-1,13,17,24,-1,24,23,13,-1,17,14,25,-1,25,24,17,-1,19,20,21,-1,19,21,22,-1,18,19,22,-1,23,24,20,-1,20,19,23,-1,24,25,21,-1,21,20,24,-1,25,26,22,-1,22,21,25,-1,29,30,31,-1,28,29,31,-1,27,28,31,-1,27,31,32,-1,27,32,33,-1,34,23,19,-1,19,18,34,-1,35,36,30,-1,30,29,35,-1,36,34,31,-1,31,30,36,-1,34,18,32,-1,32,31,34,-1,18,22,33,-1,33,32,18,-1,22,26,27,-1,27,33,22,-1,26,37,28,-1,28,27,26,-1,37,35,29,-1,29,28,37,-1}, 288);
SoIndexedFaceSet1188->setCreaseAngle(3.14159);
SoIndexedFaceSet1188->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,7,6,-1,6,5,4,-1,1,2,9,-1,9,8,1,-1,40,41,7,-1,7,4,40,-1,8,9,11,-1,11,10,8,-1,5,6,39,-1,39,38,5,-1,6,7,41,-1,41,39,6,-1,2,3,11,-1,11,9,2,-1,12,13,8,-1,8,10,12,-1,14,17,44,-1,44,43,14,-1,4,5,17,-1,17,14,4,-1,13,18,1,-1,1,8,13,-1,40,4,14,-1,14,42,40,-1,18,20,19,-1,5,38,45,-1,45,17,5,-1,21,0,1,-1,1,18,21,-1,45,47,46,-1,46,17,45,-1,18,19,23,-1,23,21,18,-1,46,44,17,-1,18,13,24,-1,24,20,18,-1,13,12,25,-1,25,24,13,-1,42,14,43,-1,43,48,42,-1,30,29,28,-1,30,28,27,-1,26,30,27,-1,24,25,29,-1,29,30,24,-1,25,15,28,-1,28,29,25,-1,15,16,27,-1,27,28,15,-1,36,35,34,-1,37,36,34,-1,31,37,34,-1,31,34,33,-1,31,33,32,-1,20,24,30,-1,30,26,20,-1,23,19,35,-1,35,36,23,-1,19,20,34,-1,34,35,19,-1,20,26,33,-1,33,34,20,-1,26,27,32,-1,32,33,26,-1,27,16,31,-1,31,32,27,-1,16,22,37,-1,37,31,16,-1,22,23,36,-1,36,37,22,-1}, 288);
SoCoordinate* SoCoordinate1189 = new SoCoordinate();
SoCoordinate1189->setPoint(new float[]{-0.4642,-0.7495,-0.198,0.3252,-0.6614,-0.2139,-0.1225,-0.7652,-0.3144,-0.3819,-0.8842,-0.1714,0.1725,-0.9506,-0.2008,-0.3815,-0.8908,0.17,0.1732,-0.9591,0.196,-0.1212,-0.9744,-0.2024,-0.1212,-0.9799,0.1724,-0.4638,-0.7583,0.2054,-0.0985,-0.7824,0.3322,0.3257,-0.6667,0.2084,0.3886,-0.1527,0.2568,0.3804,-0.0337,-0.2228,-0.4441,-0.0337,-0.2228,-0.4467,-0.1527,0.2568,-0.0472,-0.285,0.3442,-0.0564,-0.0045,-0.3471,0.3248,0.3476,0.3745,0.2574,0.4555,-0.1484,-0.0759,0.4741,-0.2587,-0.3915,0.4551,-0.1427,-0.395,0.3464,0.3802,0.4245,0.194,-0.2327,-0.0564,0.2188,-0.3624,-0.4734,0.194,-0.2327,-0.4853,0.0785,0.3798,-0.4534,0.1007,0.43,-0.4249,-0.1391,0.4083,-0.0362,-0.2455,0.3725,0.3609,-0.1363,0.4097,0.4385,0.1031,0.4238,0.2998,0.3409,0.4133,-0.3633,0.3398,0.4186,0.4853,0.08,0.3796,-0.0442,-0.2871,0.3545,0.4146,-0.1759,0.3644,-0.4498,-0.1759,0.3644}, 114);
SoIndexedFaceSet1188->setCoord(*SoCoordinate1189);

SoTextureCoordinate* SoTextureCoordinate1190 = new SoTextureCoordinate();
SoTextureCoordinate1190->setPoint(new float[]{0.7578,0.1276,0.7543,0.1247,0.753,0.131,0.7531,0.1316,0.9854,0.1598,0.9725,0.1615,0.9734,0.1584,0.9844,0.1569,0.7413,0.123,0.7403,0.1293,0.7378,0.1249,0.7401,0.1299,0.7405,0.104,0.7443,0.1047,0.9859,0.1809,0.7455,0.0995,0.766,0.1015,0.9713,0.1822,0.7589,0.1059,0.7648,0.1066,0.766,0.1014,0.7622,0.1091,0.7648,0.1066,0.7644,0.1092,0.7455,0.0995,0.7415,0.0989,0.7664,0.0954,0.7667,0.0954,0.7485,0.0932,0.7449,0.0928,0.7484,0.0932,0.7683,0.1016,0.7686,0.0957,0.7683,0.0956,0.7679,0.1015,0.7671,0.1055,0.7666,0.1084,0.7674,0.1056,0.9687,0.1615,0.9723,0.1564,0.9888,0.1589,0.9852,0.1547,0.9898,0.1809,0.9856,0.1862,0.9651,0.1878,0.9675,0.1796,0.9654,0.1826,0.9654,0.1799,0.9897,0.1861}, 98);
SoIndexedFaceSet1188->setTexCoord(*SoTextureCoordinate1190);

SoShape1184->setGeometry(*SoIndexedFaceSet1188);

SoTransform1183->addChild(*SoShape1184);

SoHAnimSegment1182->addChild(*SoTransform1183);

SoHAnimJoint1181->addChildren(*SoHAnimSegment1182);

SoHAnimJoint* SoHAnimJoint1191 = new SoHAnimJoint();
SoHAnimJoint1191->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1191->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1191->setCenter(new float[]{8.074,27.6,-1.651});
SoHAnimJoint1191->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1191->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1192 = new SoHAnimSegment();
SoHAnimSegment1192->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimSegment1192->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoTransform* SoTransform1193 = new SoTransform();
SoTransform1193->setTranslation(new float[]{8.074,27.6,-1.651});
SoShape* SoShape1194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1195 = new SoVRMLAppearance();
SoMaterial* SoMaterial1196 = new SoMaterial();
SoMaterial1196->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1195->addChild(*SoMaterial1196);

SoImageTexture* SoImageTexture1197 = new SoImageTexture();
SoImageTexture1197->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1195->addChild(*SoImageTexture1197);

SoShape1194->addChild(*SoVRMLAppearance1195);

SoIndexedFaceSet* SoIndexedFaceSet1198 = new SoIndexedFaceSet();
SoIndexedFaceSet1198->setCoordIndex(new int32_t[]{1,15,14,-1,14,7,1,-1,8,14,3,-1,1,7,5,-1,5,18,1,-1,3,2,21,-1,21,4,3,-1,6,8,3,-1,3,4,6,-1,6,4,13,-1,0,18,5,-1,5,13,0,-1,13,4,21,-1,21,0,13,-1,2,3,14,-1,14,15,2,-1,8,6,12,-1,12,11,8,-1,7,10,9,-1,9,5,7,-1,10,11,12,-1,12,9,10,-1,8,11,10,-1,10,14,8,-1,13,9,12,-1,12,6,13,-1,9,13,5,-1,7,14,10,-1,15,17,16,-1,16,2,15,-1,18,20,19,-1,19,1,18,-1,2,16,22,-1,22,21,2,-1,0,23,20,-1,20,18,0,-1,21,22,23,-1,23,0,21,-1,1,19,17,-1,17,15,1,-1,19,20,23,-1,23,17,19,-1,16,17,23,-1,23,22,16,-1}, 176);
SoIndexedFaceSet1198->setCreaseAngle(3.14159);
SoIndexedFaceSet1198->setTexCoordIndex(new int32_t[]{3,25,24,-1,24,0,3,-1,4,1,5,-1,3,0,7,-1,7,6,3,-1,5,10,9,-1,9,8,5,-1,11,4,5,-1,5,8,11,-1,11,8,12,-1,27,6,7,-1,7,26,27,-1,12,8,9,-1,9,13,12,-1,10,5,1,-1,1,2,10,-1,4,11,15,-1,15,14,4,-1,0,28,29,-1,29,7,0,-1,16,14,15,-1,15,17,16,-1,4,14,16,-1,16,1,4,-1,12,17,15,-1,15,11,12,-1,29,26,7,-1,0,24,28,-1,2,19,18,-1,18,10,2,-1,6,21,20,-1,20,3,6,-1,10,18,22,-1,22,9,10,-1,27,31,21,-1,21,6,27,-1,9,22,23,-1,23,13,9,-1,3,20,30,-1,30,25,3,-1,20,21,31,-1,31,30,20,-1,18,19,23,-1,23,22,18,-1}, 176);
SoCoordinate* SoCoordinate1199 = new SoCoordinate();
SoCoordinate1199->setPoint(new float[]{-0.0741,-0.8302,-0.2909,-0.4065,-0.7938,0.2106,0.2852,-0.7166,0.2155,0.3712,-0.1511,0.2041,0.3704,-0.1424,-0.1993,-0.39,0.0139,-0.1936,0.3995,0.102,-0.2097,-0.3896,0.0051,0.2098,0.3999,0.0967,0.2127,-0.2215,0.1643,-0.2071,-0.2211,0.159,0.2152,0.1513,0.144,0.2149,0.1509,0.1492,-0.2074,-0.0482,-0.0018,-0.31,-0.0243,-0.0191,0.3367,-0.0741,-0.8107,0.3219,0.1923,-0.9968,0.2082,0.0494,-1.016,0.2148,-0.4065,-0.8068,-0.1935,-0.3533,-0.9288,0.1795,-0.3325,-0.9376,-0.1473,0.2865,-0.7301,-0.2049,0.1934,-1.008,-0.1699,0.0523,-1.023,-0.1696}, 72);
SoIndexedFaceSet1198->setCoord(*SoCoordinate1199);

SoTextureCoordinate* SoTextureCoordinate1200 = new SoTextureCoordinate();
SoTextureCoordinate1200->setPoint(new float[]{0.9725,0.1615,0.7578,0.1276,0.7541,0.1444,0.9727,0.1441,0.7543,0.1247,0.7533,0.1302,0.9851,0.1424,0.9854,0.1598,0.7404,0.1285,0.7384,0.1404,0.7513,0.1418,0.7413,0.123,0.7378,0.1249,0.7355,0.1424,0.7545,0.1231,0.7416,0.1216,0.7546,0.1229,0.7417,0.1214,0.7496,0.1479,0.7498,0.1481,0.9738,0.1409,0.9839,0.1396,0.738,0.1467,0.7381,0.1469,0.9687,0.1616,0.9694,0.1441,0.9888,0.1589,0.988,0.1416,0.9725,0.165,0.9854,0.1633,0.9728,0.1395,0.9846,0.1375}, 64);
SoIndexedFaceSet1198->setTexCoord(*SoTextureCoordinate1200);

SoShape1194->setGeometry(*SoIndexedFaceSet1198);

SoTransform1193->addChild(*SoShape1194);

SoHAnimSegment1192->addChild(*SoTransform1193);

SoHAnimJoint1191->addChildren(*SoHAnimSegment1192);

SoHAnimJoint* SoHAnimJoint1201 = new SoHAnimJoint();
SoHAnimJoint1201->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1201->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint1201->setCenter(new float[]{8.036,26.77,-1.643});
SoHAnimJoint1201->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1201->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1202 = new SoHAnimSegment();
SoHAnimSegment1202->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSegment1202->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoTransform* SoTransform1203 = new SoTransform();
SoTransform1203->setTranslation(new float[]{8.036,26.77,-1.643});
SoShape* SoShape1204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1205 = new SoVRMLAppearance();
SoMaterial* SoMaterial1206 = new SoMaterial();
SoMaterial1206->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1205->addChild(*SoMaterial1206);

SoImageTexture* SoImageTexture1207 = new SoImageTexture();
SoImageTexture1207->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1205->addChild(*SoImageTexture1207);

SoShape1204->addChild(*SoVRMLAppearance1205);

SoIndexedFaceSet* SoIndexedFaceSet1208 = new SoIndexedFaceSet();
SoIndexedFaceSet1208->setCoordIndex(new int32_t[]{0,25,31,-1,24,1,32,-1,1,0,2,-1,2,3,1,-1,31,23,4,-1,4,5,31,-1,0,31,5,-1,5,2,0,-1,23,29,6,-1,6,4,23,-1,32,1,3,-1,3,7,32,-1,29,32,7,-1,7,6,29,-1,2,8,17,-1,17,14,2,-1,5,4,10,-1,10,11,5,-1,2,5,11,-1,11,8,2,-1,10,12,18,-1,18,21,10,-1,7,3,9,-1,9,13,7,-1,6,7,13,-1,13,12,6,-1,8,11,19,-1,19,17,8,-1,19,11,10,-1,10,21,19,-1,25,0,1,-1,1,24,25,-1,14,16,22,-1,22,20,14,-1,15,18,22,-1,22,16,15,-1,3,14,20,-1,20,9,3,-1,14,3,2,-1,4,6,12,-1,12,10,4,-1,21,18,15,-1,14,17,19,-1,19,16,14,-1,19,21,15,-1,15,16,19,-1,9,20,22,-1,22,13,9,-1,22,18,12,-1,12,13,22,-1,25,24,27,-1,27,26,25,-1,23,28,30,-1,30,29,23,-1,28,26,27,-1,27,30,28,-1,25,26,28,-1,28,31,25,-1,32,30,27,-1,27,24,32,-1,30,32,29,-1,23,31,28,-1}, 248);
SoIndexedFaceSet1208->setCreaseAngle(3.14159);
SoIndexedFaceSet1208->setTexCoordIndex(new int32_t[]{0,2,1,-1,3,5,4,-1,5,0,7,-1,7,6,5,-1,33,10,9,-1,9,35,33,-1,0,1,8,-1,8,7,0,-1,10,12,11,-1,11,9,10,-1,4,5,6,-1,6,13,4,-1,12,34,36,-1,36,11,12,-1,7,16,15,-1,15,14,7,-1,35,9,18,-1,18,37,35,-1,7,8,17,-1,17,16,7,-1,18,19,21,-1,21,20,18,-1,13,6,23,-1,23,22,13,-1,11,36,38,-1,38,19,11,-1,16,17,24,-1,24,15,16,-1,39,37,18,-1,18,20,39,-1,2,0,5,-1,5,3,2,-1,14,25,27,-1,27,26,14,-1,28,21,41,-1,41,40,28,-1,6,14,26,-1,26,23,6,-1,14,6,7,-1,9,11,19,-1,19,18,9,-1,20,21,28,-1,14,15,24,-1,24,25,14,-1,39,20,28,-1,28,40,39,-1,23,26,27,-1,27,22,23,-1,41,21,19,-1,19,38,41,-1,2,3,30,-1,30,29,2,-1,10,42,43,-1,43,12,10,-1,31,29,30,-1,30,32,31,-1,2,29,31,-1,31,1,2,-1,4,32,30,-1,30,3,4,-1,43,34,12,-1,10,33,42,-1}, 248);
SoCoordinate* SoCoordinate1209 = new SoCoordinate();
SoCoordinate1209->setPoint(new float[]{0.3162,-0.096,0.2149,0.3173,-0.1084,-0.2014,0.2869,-0.4777,0.206,0.2893,-0.4895,-0.1842,-0.356,-0.4937,0.2218,-0.0434,-0.4877,0.2966,-0.3534,-0.5065,-0.2021,-0.0399,-0.5052,-0.2775,0.2353,-0.7717,0.1879,0.2379,-0.7821,-0.1539,-0.3642,-0.8042,0.183,-0.07,-0.801,0.2589,-0.3616,-0.8141,-0.1443,-0.0662,-0.8155,-0.2226,0.2582,-0.8386,0.0187,-0.3003,-0.8841,0.0184,-0.0496,-0.9109,0.0203,0.2493,-0.8224,0.1126,-0.3082,-0.8707,-0.0614,-0.0381,-0.8827,0.1448,0.251,-0.829,-0.0709,-0.3096,-0.8651,0.1015,-0.0353,-0.8939,-0.0972,-0.366,0.0343,0.2021,0.3269,0.0982,-0.2135,0.3256,0.1116,0.207,0.1179,0.1798,0.1886,0.1179,0.1673,-0.1998,-0.2301,0.1882,0.1883,-0.366,0.0213,-0.202,-0.2301,0.1757,-0.2001,-0.032,0.0176,0.3133,-0.032,-0.0019,-0.2994}, 99);
SoIndexedFaceSet1208->setCoord(*SoCoordinate1209);

SoTextureCoordinate* SoTextureCoordinate1210 = new SoTextureCoordinate();
SoTextureCoordinate1210->setPoint(new float[]{0.7505,0.1465,0.7541,0.1444,0.7513,0.1418,0.7384,0.1404,0.7355,0.1424,0.7377,0.1451,0.7372,0.1554,0.7483,0.1563,0.7507,0.1564,0.9726,0.1318,0.9727,0.1441,0.9847,0.1302,0.9851,0.1424,0.7347,0.1548,0.7409,0.1641,0.7434,0.1641,0.7455,0.1632,0.7469,0.164,0.9746,0.124,0.9828,0.1229,0.9766,0.1225,0.9807,0.1219,0.7351,0.1625,0.7369,0.1626,0.7443,0.165,0.7408,0.1649,0.7387,0.1637,0.7379,0.1643,0.9788,0.1219,0.7512,0.1402,0.7392,0.1389,0.7512,0.14,0.7393,0.1388,0.9694,0.1441,0.988,0.1416,0.9705,0.1317,0.9868,0.1295,0.9727,0.1237,0.9848,0.1221,0.9756,0.1218,0.9787,0.1209,0.9817,0.1209,0.973,0.1475,0.9849,0.146}, 88);
SoIndexedFaceSet1208->setTexCoord(*SoTextureCoordinate1210);

SoShape1204->setGeometry(*SoIndexedFaceSet1208);

SoTransform1203->addChild(*SoShape1204);

SoHAnimSegment1202->addChild(*SoTransform1203);

SoHAnimJoint1201->addChildren(*SoHAnimSegment1202);

SoHAnimJoint1191->addChildren(*SoHAnimJoint1201);

SoHAnimJoint1181->addChildren(*SoHAnimJoint1191);

SoHAnimJoint1171->addChildren(*SoHAnimJoint1181);

SoHAnimJoint971->addChildren(*SoHAnimJoint1171);

SoHAnimJoint961->addChildren(*SoHAnimJoint971);

SoHAnimJoint951->addChildren(*SoHAnimJoint961);

SoHAnimJoint941->addChildren(*SoHAnimJoint951);

SoHAnimJoint931->addChildren(*SoHAnimJoint941);

SoHAnimJoint771->addChildren(*SoHAnimJoint931);

SoHAnimJoint* SoHAnimJoint1211 = new SoHAnimJoint();
SoHAnimJoint1211->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint1211->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint1211->setCenter(new float[]{-1.71,53.720001,-0.6127});
SoHAnimJoint1211->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1211->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1212 = new SoHAnimSegment();
SoHAnimSegment1212->X3DNode::setName(QString("r_clavicle"));
SoHAnimSegment1212->setDEF(QString("hanim_r_clavicle"));
SoTransform* SoTransform1213 = new SoTransform();
SoTransform1213->setTranslation(new float[]{-1.71,53.720001,-0.6127});
SoShape* SoShape1214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1215 = new SoVRMLAppearance();
SoMaterial* SoMaterial1216 = new SoMaterial();
SoMaterial1216->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1215->addChild(*SoMaterial1216);

SoImageTexture* SoImageTexture1217 = new SoImageTexture();
SoImageTexture1217->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1215->addChild(*SoImageTexture1217);

SoShape1214->addChild(*SoVRMLAppearance1215);

SoIndexedFaceSet* SoIndexedFaceSet1218 = new SoIndexedFaceSet();
SoIndexedFaceSet1218->setCoordIndex(new int32_t[]{9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1}, 104);
SoIndexedFaceSet1218->setCreaseAngle(3.14159);
SoIndexedFaceSet1218->setTexCoordIndex(new int32_t[]{9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1}, 104);
SoCoordinate* SoCoordinate1219 = new SoCoordinate();
SoCoordinate1219->setPoint(new float[]{-4.99,0.104,-0.8644,-5.073,0.4993,0.047,-4.706,0.1695,1.198,-4.631,-1.819,1.104,-4.586,-1.648,-0.1248,-3.376,0.3884,1.771,-3.891,0.989,-0.0537,-4.193,-2.49,-0.5713,-4.388,-2.49,1.429,-3.761,0.3238,-1.692,0.1237,0.6312,-0.1883,0.1237,0.3007,-0.9426,0.1237,-1.418,-0.2577,0.1237,-1.392,0.6264,0.1237,0.2586,0.8179}, 45);
SoIndexedFaceSet1218->setCoord(*SoCoordinate1219);

SoTextureCoordinate* SoTextureCoordinate1220 = new SoTextureCoordinate();
SoTextureCoordinate1220->setPoint(new float[]{0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926}, 30);
SoIndexedFaceSet1218->setTexCoord(*SoTextureCoordinate1220);

SoShape1214->setGeometry(*SoIndexedFaceSet1218);

SoTransform1213->addChild(*SoShape1214);

SoHAnimSegment1212->addChild(*SoTransform1213);

SoHAnimJoint1211->addChildren(*SoHAnimSegment1212);

SoHAnimJoint* SoHAnimJoint1221 = new SoHAnimJoint();
SoHAnimJoint1221->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint1221->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint1221->setCenter(new float[]{-5.464,52.970001,-0.5732});
SoHAnimJoint1221->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1221->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1222 = new SoHAnimSegment();
SoHAnimSegment1222->X3DNode::setName(QString("r_scapula"));
SoHAnimSegment1222->setDEF(QString("hanim_r_scapula"));
SoTransform* SoTransform1223 = new SoTransform();
SoTransform1223->setTranslation(new float[]{-5.464,52.970001,-0.5732});
SoShape* SoShape1224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1225 = new SoVRMLAppearance();
SoMaterial* SoMaterial1226 = new SoMaterial();
SoMaterial1226->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1225->addChild(*SoMaterial1226);

SoImageTexture* SoImageTexture1227 = new SoImageTexture();
SoImageTexture1227->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1225->addChild(*SoImageTexture1227);

SoShape1224->addChild(*SoVRMLAppearance1225);

SoIndexedFaceSet* SoIndexedFaceSet1228 = new SoIndexedFaceSet();
SoIndexedFaceSet1228->setCoordIndex(new int32_t[]{5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1}, 112);
SoIndexedFaceSet1228->setCreaseAngle(3.14159);
SoIndexedFaceSet1228->setTexCoordIndex(new int32_t[]{5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1}, 112);
SoCoordinate* SoCoordinate1229 = new SoCoordinate();
SoCoordinate1229->setPoint(new float[]{-1.935,1.466,-0.0932,-1.515,0.6492,-1.732,-1.534,0.7105,1.619,0.3782,1.139,1.732,-0.1374,1.74,-0.0932,-0.0076,1.074,-1.731,-0.8341,-1.572,1.39,-0.4391,-1.74,-0.6109,-0.8275,-1.58,-0.6098,-0.6342,-1.74,1.389,1.237,1.407,-0.0712,1.547,0.8515,-1.142,0.7525,-1.603,-0.4744,0.7511,-1.595,1.16,1.51,1.034,1.296,1.59,-0.0185,0.1351}, 48);
SoIndexedFaceSet1228->setCoord(*SoCoordinate1229);

SoTextureCoordinate* SoTextureCoordinate1230 = new SoTextureCoordinate();
SoTextureCoordinate1230->setPoint(new float[]{0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618}, 40);
SoIndexedFaceSet1228->setTexCoord(*SoTextureCoordinate1230);

SoShape1224->setGeometry(*SoIndexedFaceSet1228);

SoTransform1223->addChild(*SoShape1224);

SoHAnimSegment1222->addChild(*SoTransform1223);

SoHAnimJoint1221->addChildren(*SoHAnimSegment1222);

SoHAnimJoint* SoHAnimJoint1231 = new SoHAnimJoint();
SoHAnimJoint1231->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint1231->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint1231->setCenter(new float[]{-7.32,52.380001,-0.1452});
SoHAnimJoint1231->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1231->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1232 = new SoHAnimSegment();
SoHAnimSegment1232->X3DNode::setName(QString("r_upperarm"));
SoHAnimSegment1232->setDEF(QString("hanim_r_upperarm"));
SoTransform* SoTransform1233 = new SoTransform();
SoTransform1233->setTranslation(new float[]{-7.32,52.380001,-0.1452});
SoShape* SoShape1234 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1235 = new SoVRMLAppearance();
SoMaterial* SoMaterial1236 = new SoMaterial();
SoMaterial1236->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1235->addChild(*SoMaterial1236);

SoImageTexture* SoImageTexture1237 = new SoImageTexture();
SoImageTexture1237->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1235->addChild(*SoImageTexture1237);

SoShape1234->addChild(*SoVRMLAppearance1235);

SoIndexedFaceSet* SoIndexedFaceSet1238 = new SoIndexedFaceSet();
SoIndexedFaceSet1238->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,41,40,-1,40,25,26,-1,27,42,41,-1,41,26,27,-1,28,43,42,-1,42,27,28,-1,29,44,43,-1,43,28,29,-1,25,40,44,-1,44,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1}, 304);
SoIndexedFaceSet1238->setCreaseAngle(3.14159);
SoIndexedFaceSet1238->setTexCoordIndex(new int32_t[]{1,0,2,-1,1,2,3,-1,55,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,49,-1,36,49,48,-1,37,36,48,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,38,57,56,-1,56,39,38,-1,40,59,58,-1,58,50,40,-1,41,60,59,-1,59,40,41,-1,42,61,60,-1,60,41,42,-1,39,56,61,-1,61,42,39,-1,43,38,39,-1,39,44,43,-1,45,40,51,-1,51,52,45,-1,46,41,40,-1,40,45,46,-1,47,42,41,-1,41,46,47,-1,44,39,42,-1,42,47,44,-1,34,43,44,-1,44,33,34,-1,35,45,53,-1,53,54,35,-1,36,46,45,-1,45,35,36,-1,37,47,46,-1,46,36,37,-1,33,44,47,-1,47,37,33,-1}, 304);
SoCoordinate* SoCoordinate1239 = new SoCoordinate();
SoCoordinate1239->setPoint(new float[]{-1.164,1.767,-1.68,-2.32,1.756,0.0337,-1.047,1.768,1.663,0.895,1.785,0.9556,0.8229,1.784,-1.11,-1.382,0.4997,-2.31,-2.978,0.4855,0.057,-1.221,0.5011,2.307,1.462,0.525,1.33,1.362,0.5241,-1.523,-1.36,-2.014,-2.31,-2.956,-2.028,0.057,-1.198,-2.012,2.307,1.484,-1.988,1.33,1.384,-1.989,-1.523,-1.398,-3.089,-2.442,-3.087,-3.104,0.0619,-1.228,-3.087,2.442,1.61,-3.062,1.409,1.505,-3.063,-1.61,-0.8845,-1.238,-1.939,-2.105,-1.248,-0.4543,-1.473,-1.243,1.629,0.1375,-1.229,1.432,0.5011,-1.225,-0.7734,-0.9027,-7.045,-1.569,-2.17,-7.056,-0.378,-1.514,-7.051,1.293,0.1588,-7.036,1.135,0.5365,-7.032,-0.634,-0.9066,-11.1,-1.511,-2.127,-11.11,-0.3651,-1.495,-11.1,1.243,0.1154,-11.09,1.091,0.4791,-11.08,-0.6115,-0.852,-11.65,-0.8985,-1.567,-11.65,-0.2267,-1.197,-11.65,0.716,-0.2531,-11.64,0.6268,-0.0399,-11.64,-0.3711,-0.8845,-1.238,-1.939,-2.105,-1.248,-0.4543,-1.473,-1.243,1.629,0.1375,-1.229,1.432,0.5011,-1.225,-0.7734}, 135);
SoIndexedFaceSet1238->setCoord(*SoCoordinate1239);

SoTextureCoordinate* SoTextureCoordinate1240 = new SoTextureCoordinate();
SoTextureCoordinate1240->setPoint(new float[]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.9467,0.4943,0.9572,0.4943,0.9099,0.4943,0.9193,0.4943,0.9332,0.4943,0.9567,0.4691,0.9455,0.4691,0.9105,0.4691,0.9205,0.4691,0.9332,0.4691,0.9567,0.4913,0.9458,0.4913,0.9102,0.4913,0.9203,0.4913,0.9334,0.4913,0.8898,0.4943,0.9003,0.4943,0.8997,0.4691,0.8997,0.4691,0.8998,0.4913,0.8998,0.4913,0.9003,0.4943,0.3481,0.2114,0.9448,0.4374,0.9561,0.4374,0.8991,0.4374,0.9117,0.4374,0.9198,0.4374,0.9341,0.4374}, 124);
SoIndexedFaceSet1238->setTexCoord(*SoTextureCoordinate1240);

SoShape1234->setGeometry(*SoIndexedFaceSet1238);

SoTransform1233->addChild(*SoShape1234);

SoHAnimSegment1232->addChild(*SoTransform1233);

SoHAnimJoint1231->addChildren(*SoHAnimSegment1232);

SoHAnimJoint* SoHAnimJoint1241 = new SoHAnimJoint();
SoHAnimJoint1241->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint1241->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint1241->setCenter(new float[]{-8.077,41.279999,-0.2502});
SoHAnimJoint1241->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1241->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1242 = new SoHAnimSegment();
SoHAnimSegment1242->X3DNode::setName(QString("r_forearm"));
SoHAnimSegment1242->setDEF(QString("hanim_r_forearm"));
SoTransform* SoTransform1243 = new SoTransform();
SoTransform1243->setTranslation(new float[]{-8.077,41.279999,-0.2502});
SoShape* SoShape1244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1245 = new SoVRMLAppearance();
SoMaterial* SoMaterial1246 = new SoMaterial();
SoMaterial1246->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1245->addChild(*SoMaterial1246);

SoImageTexture* SoImageTexture1247 = new SoImageTexture();
SoImageTexture1247->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1245->addChild(*SoImageTexture1247);

SoShape1244->addChild(*SoVRMLAppearance1245);

SoIndexedFaceSet* SoIndexedFaceSet1248 = new SoIndexedFaceSet();
SoIndexedFaceSet1248->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1}, 184);
SoIndexedFaceSet1248->setCreaseAngle(3.14159);
SoIndexedFaceSet1248->setTexCoordIndex(new int32_t[]{4,3,2,-1,4,2,1,-1,0,4,1,-1,4,6,5,-1,5,3,4,-1,3,5,7,-1,7,2,3,-1,2,7,8,-1,8,1,2,-1,1,8,9,-1,9,0,1,-1,0,9,6,-1,6,4,0,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,16,-1,16,11,14,-1,24,23,22,-1,24,22,21,-1,20,24,21,-1,22,15,16,-1,16,21,22,-1,23,17,15,-1,15,22,23,-1,24,18,17,-1,17,23,24,-1,20,19,18,-1,18,24,20,-1,21,16,19,-1,19,20,21,-1}, 184);
SoCoordinate* SoCoordinate1249 = new SoCoordinate();
SoCoordinate1249->setPoint(new float[]{-0.215,0.3047,-1.152,-1.155,0.2966,-0.2588,-0.6199,0.3013,1.04,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.625,-1.472,-0.8561,-0.4271,-0.7164,-0.8496,1.625,1.079,-0.8342,1.482,1.433,-0.8312,-0.6588,-0.1328,-3.5,-1.607,-1.551,-3.513,-0.4225,-0.781,-2.925,1.61,1.136,-2.909,1.468,1.551,-3.486,-0.6519,-0.0592,-8.713,-1.437,-1.093,-8.722,-0.1279,-0.5047,-8.716,1.51,0.8932,-8.704,1.377,1.169,-8.702,-0.3428,-0.0092,-9.336,-0.8855,-0.7154,-9.342,0.0084,-0.3135,-9.339,1.043,0.6412,-9.331,0.9519,0.8292,-9.329,-0.1383}, 75);
SoIndexedFaceSet1248->setCoord(*SoCoordinate1249);

SoTextureCoordinate* SoTextureCoordinate1250 = new SoTextureCoordinate();
SoTextureCoordinate1250->setPoint(new float[]{0.8857,0.572,0.9344,0.572,0.9377,0.5719,0.8909,0.5718,0.8588,0.5719,0.8849,0.5578,0.8418,0.558,0.9588,0.5579,0.9536,0.5581,0.8765,0.5581,0.885,0.5257,0.8424,0.5258,0.9582,0.5328,0.9531,0.533,0.8768,0.526,0.8957,0.4625,0.8485,0.4627,0.9546,0.4626,0.9498,0.4628,0.8879,0.4628,0.8953,0.4552,0.8684,0.4551,0.9006,0.455,0.9378,0.4551,0.9345,0.4552}, 50);
SoIndexedFaceSet1248->setTexCoord(*SoTextureCoordinate1250);

SoShape1244->setGeometry(*SoIndexedFaceSet1248);

SoTransform1243->addChild(*SoShape1244);

SoHAnimSegment1242->addChild(*SoTransform1243);

SoHAnimJoint1241->addChildren(*SoHAnimSegment1242);

SoHAnimJoint* SoHAnimJoint1251 = new SoHAnimJoint();
SoHAnimJoint1251->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint1251->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint1251->setCenter(new float[]{-8.07,32.189999,-0.2232});
SoHAnimJoint1251->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1251->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1252 = new SoHAnimSegment();
SoHAnimSegment1252->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment1252->setDEF(QString("hanim_r_carpal"));
SoTransform* SoTransform1253 = new SoTransform();
SoTransform1253->setTranslation(new float[]{-8.07,32.189999,-0.2232});
SoShape* SoShape1254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1255 = new SoVRMLAppearance();
SoMaterial* SoMaterial1256 = new SoMaterial();
SoMaterial1256->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1255->addChild(*SoMaterial1256);

SoImageTexture* SoImageTexture1257 = new SoImageTexture();
SoImageTexture1257->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1255->addChild(*SoImageTexture1257);

SoShape1254->addChild(*SoVRMLAppearance1255);

SoIndexedFaceSet* SoIndexedFaceSet1258 = new SoIndexedFaceSet();
SoIndexedFaceSet1258->setCoordIndex(new int32_t[]{0,11,12,-1,12,1,0,-1,1,12,13,-1,13,2,1,-1,2,13,10,-1,10,17,2,-1,3,16,8,-1,8,4,3,-1,5,20,21,-1,21,19,5,-1,6,18,15,-1,15,14,6,-1,6,14,9,-1,9,7,6,-1,7,9,11,-1,11,0,7,-1,15,18,5,-1,5,19,15,-1,10,16,3,-1,3,17,10,-1,4,8,21,-1,21,20,4,-1,0,1,22,-1,1,2,22,-1,2,17,22,-1,17,3,22,-1,3,4,22,-1,4,20,22,-1,20,5,22,-1,5,18,22,-1,18,6,22,-1,6,7,22,-1,7,0,22,-1,16,10,24,-1,24,23,16,-1,10,13,25,-1,25,24,10,-1,13,12,26,-1,26,25,13,-1,12,11,27,-1,27,26,12,-1,11,9,28,-1,28,27,11,-1,9,14,29,-1,29,28,9,-1,14,15,30,-1,30,29,14,-1,15,19,31,-1,31,30,15,-1,19,21,32,-1,32,31,19,-1,21,8,33,-1,33,32,21,-1,8,16,23,-1,23,33,8,-1,23,24,34,-1,24,25,34,-1,25,26,34,-1,26,27,34,-1,27,28,34,-1,28,29,34,-1,29,30,34,-1,30,31,34,-1,31,32,34,-1,32,33,34,-1,33,23,34,-1}, 264);
SoIndexedFaceSet1258->setCreaseAngle(3.14159);
SoIndexedFaceSet1258->setTexCoordIndex(new int32_t[]{2,3,0,-1,0,1,2,-1,1,0,4,-1,4,5,1,-1,5,4,7,-1,7,6,5,-1,10,11,8,-1,8,9,10,-1,12,37,38,-1,38,15,12,-1,17,18,19,-1,19,16,17,-1,17,16,20,-1,20,21,17,-1,21,20,36,-1,36,35,21,-1,19,18,12,-1,12,15,19,-1,7,11,10,-1,10,6,7,-1,9,8,14,-1,14,13,9,-1,2,1,22,-1,1,5,22,-1,5,6,22,-1,6,10,22,-1,10,9,22,-1,9,13,22,-1,37,12,39,-1,12,18,39,-1,18,17,39,-1,17,21,39,-1,21,35,39,-1,11,7,23,-1,23,24,11,-1,7,4,25,-1,25,23,7,-1,4,0,26,-1,26,25,4,-1,0,3,27,-1,27,26,0,-1,36,20,28,-1,28,40,36,-1,20,16,29,-1,29,28,20,-1,16,19,30,-1,30,29,16,-1,19,15,31,-1,31,30,19,-1,15,38,41,-1,41,31,15,-1,14,8,33,-1,33,32,14,-1,8,11,24,-1,24,33,8,-1,24,23,34,-1,23,25,34,-1,25,26,34,-1,26,27,34,-1,40,28,42,-1,28,29,42,-1,29,30,42,-1,30,31,42,-1,31,41,42,-1,32,33,34,-1,33,24,34,-1}, 264);
SoCoordinate* SoCoordinate1259 = new SoCoordinate();
SoCoordinate1259->setPoint(new float[]{-0.0718,0.1105,-1.01,-0.5108,0.0965,-0.79,-0.6808,0.1049,-0.212,-0.5475,0.1209,0.7178,-0.2978,0.1182,1.102,0.5959,0.1061,0.734,0.6714,0.0918,-0.2167,0.4399,0.0876,-0.7804,-0.3749,-0.7899,1.333,0.4677,-0.8492,-0.9914,-0.6527,-0.6995,0.3258,-0.0476,-0.832,-1.286,-0.5788,-0.8489,-0.9909,-0.6835,-0.6804,-0.3282,0.6279,-0.6805,-0.3268,0.6351,-0.6994,0.3349,-0.5385,-0.8096,0.8587,-0.6721,0.1026,0.2306,0.6716,0.0989,0.2384,0.5705,-0.8097,0.8599,0.3,0.1135,1.081,0.3211,-0.7905,1.299,-0.0594,0.3233,-0.0086,-0.4051,-1.1,0.8323,-0.5152,-0.9892,0.322,-0.5452,-0.9698,-0.3815,-0.4503,-1.137,-1.027,-0.0399,-1.141,-1.188,0.3455,-1.137,-1.033,0.4906,-0.9699,-0.3741,0.4977,-0.989,0.341,0.4908,-1.1,0.8359,0.2387,-1.082,1.197,-0.1823,-1.082,1.223,0.0391,-1.269,-0.0735}, 105);
SoIndexedFaceSet1258->setCoord(*SoCoordinate1259);

SoTextureCoordinate* SoTextureCoordinate1260 = new SoTextureCoordinate();
SoTextureCoordinate1260->setPoint(new float[]{0.7729,0.0334,0.7695,0.0151,0.7598,0.0161,0.7624,0.0345,0.791,0.0281,0.7896,0.0131,0.8111,0.0113,0.813,0.0266,0.8476,0.0256,0.8461,0.0079,0.8312,0.0091,0.8327,0.0273,0.9162,0.2899,0.8453,0.0081,0.8466,0.0257,0.9122,0.2724,0.9531,0.2644,0.9573,0.2786,0.936,0.2844,0.9315,0.2698,0.9706,0.2558,0.9766,0.2733,0.8032,0.0047,0.8134,0.033,0.8325,0.0338,0.792,0.0345,0.7756,0.0396,0.7675,0.0404,0.9666,0.2503,0.9509,0.2584,0.9297,0.2636,0.9113,0.266,0.8439,0.0324,0.8447,0.0323,0.8081,0.0397,0.986,0.2708,0.9803,0.2531,0.9032,0.2936,0.8989,0.2764,0.9452,0.2896,0.9743,0.2482,0.9004,0.2693,0.9343,0.2559}, 86);
SoIndexedFaceSet1258->setTexCoord(*SoTextureCoordinate1260);

SoShape1254->setGeometry(*SoIndexedFaceSet1258);

SoTransform1253->addChild(*SoShape1254);

SoHAnimSegment1252->addChild(*SoTransform1253);

SoHAnimJoint1251->addChildren(*SoHAnimSegment1252);

SoHAnimJoint* SoHAnimJoint1261 = new SoHAnimJoint();
SoHAnimJoint1261->X3DNode::setName(QString("r_midcarpal_1"));
SoHAnimJoint1261->setDEF(QString("hanim_r_midcarpal_1"));
SoHAnimJoint1261->setCenter(new float[]{-8.043,31.379999,0.859});
SoHAnimJoint1261->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1261->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1262 = new SoHAnimSegment();
SoHAnimSegment1262->X3DNode::setName(QString("r_trapezium"));
SoHAnimSegment1262->setDEF(QString("hanim_r_trapezium"));
SoTransform* SoTransform1263 = new SoTransform();
SoTransform1263->setTranslation(new float[]{-8.043,31.379999,0.859});
SoShape* SoShape1264 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1265 = new SoVRMLAppearance();
SoMaterial* SoMaterial1266 = new SoMaterial();
SoMaterial1266->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1265->addChild(*SoMaterial1266);

SoImageTexture* SoImageTexture1267 = new SoImageTexture();
SoImageTexture1267->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1265->addChild(*SoImageTexture1267);

SoShape1264->addChild(*SoVRMLAppearance1265);

SoIndexedFaceSet* SoIndexedFaceSet1268 = new SoIndexedFaceSet();
SoIndexedFaceSet1268->setCoordIndex(new int32_t[]{6,0,3,-1,3,5,6,-1,5,3,2,-1,2,8,5,-1,1,7,4,-1,2,7,8,-1,7,2,4,-1,14,15,16,-1,16,17,14,-1,9,10,13,-1,10,11,12,-1,12,13,10,-1,1,4,10,-1,10,9,1,-1,4,2,11,-1,11,10,4,-1,2,3,12,-1,12,11,2,-1,3,0,13,-1,13,12,3,-1,6,5,15,-1,15,14,6,-1,5,8,16,-1,16,15,5,-1,8,7,17,-1,17,16,8,-1,18,25,24,-1,24,23,22,-1,18,24,22,-1,22,21,20,-1,18,22,20,-1,19,18,20,-1,6,18,19,-1,19,0,6,-1,0,19,20,-1,20,13,0,-1,13,20,21,-1,21,9,13,-1,9,21,22,-1,22,1,9,-1,1,22,23,-1,23,7,1,-1,7,23,24,-1,24,17,7,-1,17,24,25,-1,25,14,17,-1,14,25,18,-1,18,6,14,-1}, 192);
SoIndexedFaceSet1268->setCreaseAngle(3.14159);
SoIndexedFaceSet1268->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,7,6,8,-1,18,6,19,-1,6,18,8,-1,21,22,23,-1,23,12,21,-1,9,15,10,-1,15,16,17,-1,17,10,15,-1,7,8,24,-1,24,20,7,-1,8,18,25,-1,25,24,8,-1,4,2,17,-1,17,16,4,-1,2,1,10,-1,10,17,2,-1,0,3,13,-1,13,11,0,-1,3,5,14,-1,14,13,3,-1,19,6,12,-1,12,23,19,-1,26,33,32,-1,32,31,30,-1,26,32,30,-1,30,29,28,-1,26,30,28,-1,27,26,28,-1,0,26,27,-1,27,1,0,-1,1,27,28,-1,28,10,1,-1,10,28,29,-1,29,9,10,-1,20,29,30,-1,30,7,20,-1,7,30,31,-1,31,6,7,-1,6,31,32,-1,32,12,6,-1,12,32,33,-1,33,21,12,-1,11,33,26,-1,26,0,11,-1}, 192);
SoCoordinate* SoCoordinate1269 = new SoCoordinate();
SoCoordinate1269->setPoint(new float[]{-0.7053,-0.7802,-0.0997,0.6389,-0.7802,-0.0997,0.3989,-0.4974,0.6093,-0.4483,-0.4983,0.6785,0.509,-0.6051,0.3711,-0.4043,0.0139,0.2509,-0.568,-0.0058,-0.2235,0.5411,-0.0059,-0.2224,0.2917,0.0133,0.2166,0.4859,-0.9548,-0.0464,0.5165,-0.9346,0.2403,0.3483,-0.7384,0.5986,-0.361,-0.6613,0.6657,-0.567,-0.9676,-0.068,-0.4266,0.2991,-0.277,-0.207,0.313,0.1078,0.2037,0.3127,0.0824,0.4523,0.2971,-0.2735,-0.5103,-0.0352,-0.2979,-0.6419,-0.7776,-0.1796,-0.5366,-0.9203,-0.1557,0.4581,-0.908,-0.1342,0.5765,-0.7738,-0.1806,0.4825,-0.0296,-0.298,0.4075,0.2265,-0.341,-0.3881,0.2283,-0.3443}, 78);
SoIndexedFaceSet1268->setCoord(*SoCoordinate1269);

SoTextureCoordinate* SoTextureCoordinate1270 = new SoTextureCoordinate();
SoTextureCoordinate1270->setPoint(new float[]{0.8327,0.0273,0.8381,0.0441,0.8625,0.0344,0.8476,0.0256,0.8625,0.0359,0.8466,0.0257,0.9122,0.2724,0.904,0.2568,0.8948,0.2599,0.8401,0.0478,0.8395,0.0482,0.8319,0.0206,0.9141,0.2788,0.844,0.0192,0.8432,0.0193,0.8491,0.0466,0.8611,0.0409,0.8611,0.0397,0.8814,0.2691,0.8989,0.2764,0.9014,0.2535,0.9142,0.2789,0.9026,0.2823,0.9033,0.2821,0.8928,0.2563,0.8819,0.264,0.8327,0.0273,0.8381,0.0441,0.8395,0.0482,0.8401,0.0478,0.904,0.2568,0.9122,0.2724,0.9141,0.2788,0.9142,0.2789}, 68);
SoIndexedFaceSet1268->setTexCoord(*SoTextureCoordinate1270);

SoShape1264->setGeometry(*SoIndexedFaceSet1268);

SoTransform1263->addChild(*SoShape1264);

SoHAnimSegment1262->addChild(*SoTransform1263);

SoHAnimJoint1261->addChildren(*SoHAnimSegment1262);

SoHAnimJoint* SoHAnimJoint1271 = new SoHAnimJoint();
SoHAnimJoint1271->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint1271->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint1271->setCenter(new float[]{-8.006,30.780001,1.155});
SoHAnimJoint1271->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1271->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1272 = new SoHAnimSegment();
SoHAnimSegment1272->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimSegment1272->setDEF(QString("hanim_r_metacarpal_1"));
SoTransform* SoTransform1273 = new SoTransform();
SoTransform1273->setTranslation(new float[]{-8.006,30.780001,1.155});
SoShape* SoShape1274 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1275 = new SoVRMLAppearance();
SoMaterial* SoMaterial1276 = new SoMaterial();
SoMaterial1276->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1275->addChild(*SoMaterial1276);

SoImageTexture* SoImageTexture1277 = new SoImageTexture();
SoImageTexture1277->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1275->addChild(*SoImageTexture1277);

SoShape1274->addChild(*SoVRMLAppearance1275);

SoIndexedFaceSet* SoIndexedFaceSet1278 = new SoIndexedFaceSet();
SoIndexedFaceSet1278->setCoordIndex(new int32_t[]{1,8,9,-1,9,2,1,-1,8,1,0,-1,0,10,8,-1,2,9,6,-1,6,3,2,-1,0,4,7,-1,7,10,0,-1,5,3,6,-1,25,21,22,-1,24,25,22,-1,23,24,22,-1,19,20,17,-1,17,18,19,-1,13,14,11,-1,11,12,13,-1,14,15,16,-1,16,11,14,-1,3,5,12,-1,12,11,3,-1,5,4,13,-1,13,12,5,-1,4,0,14,-1,14,13,4,-1,0,1,15,-1,15,14,0,-1,1,2,16,-1,16,15,1,-1,2,3,11,-1,11,16,2,-1,7,4,18,-1,18,17,7,-1,4,5,19,-1,19,18,4,-1,5,6,20,-1,20,19,5,-1,6,7,17,-1,17,20,6,-1,10,7,22,-1,22,21,10,-1,7,6,23,-1,23,22,7,-1,6,9,24,-1,24,23,6,-1,9,8,25,-1,25,24,9,-1,8,10,21,-1,21,25,8,-1}, 192);
SoIndexedFaceSet1278->setCreaseAngle(3.14159);
SoIndexedFaceSet1278->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,27,26,28,-1,28,4,27,-1,3,2,7,-1,7,6,3,-1,28,29,30,-1,30,4,28,-1,10,6,7,-1,13,14,15,-1,12,13,15,-1,11,12,15,-1,16,17,18,-1,18,19,16,-1,20,21,22,-1,22,23,20,-1,21,24,25,-1,25,22,21,-1,6,10,23,-1,23,22,6,-1,10,8,20,-1,20,23,10,-1,8,5,21,-1,21,20,8,-1,5,0,24,-1,24,21,5,-1,0,3,25,-1,25,24,0,-1,3,6,22,-1,22,25,3,-1,30,29,35,-1,35,34,30,-1,8,10,16,-1,16,19,8,-1,10,7,17,-1,17,16,10,-1,7,9,18,-1,18,17,7,-1,4,30,33,-1,33,32,4,-1,9,7,11,-1,11,15,9,-1,7,2,12,-1,12,11,7,-1,2,1,13,-1,13,12,2,-1,27,4,32,-1,32,31,27,-1}, 192);
SoCoordinate* SoCoordinate1279 = new SoCoordinate();
SoCoordinate1279->setPoint(new float[]{0.5751,-0.8119,0.3729,0.302,-0.6141,0.6443,-0.3814,-0.5011,0.7438,-0.716,-0.9041,0.1581,0.366,-1.245,-0.0839,-0.8186,-0.9968,-0.0288,-0.7398,-0.1792,-0.3959,0.6043,-0.1792,-0.3959,0.3644,0.1036,0.3132,-0.4829,0.1027,0.3823,0.4744,-0.0041,0.0749,-0.3732,-1.179,0.3002,-0.3531,-1.244,0.2233,0.2445,-1.314,0.124,0.452,-1.179,0.3706,0.2104,-0.955,0.6578,-0.2066,-0.8325,0.7941,0.4224,-0.2513,-0.5443,0.2417,-1.271,-0.2781,-0.6108,-1.052,-0.2554,-0.5836,-0.2515,-0.5446,0.3922,0.0827,-0.0195,0.505,-0.0166,-0.2776,-0.5161,-0.0391,-0.2686,-0.3757,0.1717,0.2582,0.1802,0.1719,0.215}, 78);
SoIndexedFaceSet1278->setCoord(*SoCoordinate1279);

SoTextureCoordinate* SoTextureCoordinate1280 = new SoTextureCoordinate();
SoTextureCoordinate1280->setPoint(new float[]{0.8819,0.0483,0.8625,0.0359,0.8625,0.0344,0.8786,0.0507,0.8948,0.2599,0.867,0.0598,0.857,0.0621,0.8381,0.0441,0.8533,0.0697,0.8381,0.0441,0.8503,0.0646,0.8419,0.0407,0.8588,0.0334,0.8588,0.0347,0.8467,0.0405,0.8415,0.0402,0.8445,0.0658,0.8331,0.0451,0.8331,0.0451,0.8468,0.0705,0.8593,0.0711,0.8712,0.0644,0.8626,0.068,0.8607,0.0696,0.877,0.0609,0.8798,0.0581,0.8632,0.2548,0.8814,0.2691,0.8729,0.2464,0.8847,0.2342,0.904,0.2568,0.8853,0.2697,0.8962,0.2618,0.9014,0.2613,0.9088,0.2549,0.8909,0.2323}, 72);
SoIndexedFaceSet1278->setTexCoord(*SoTextureCoordinate1280);

SoShape1274->setGeometry(*SoIndexedFaceSet1278);

SoTransform1273->addChild(*SoShape1274);

SoHAnimSegment1272->addChild(*SoTransform1273);

SoHAnimJoint1271->addChildren(*SoHAnimSegment1272);

SoHAnimJoint* SoHAnimJoint1281 = new SoHAnimJoint();
SoHAnimJoint1281->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint1281->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint1281->setCenter(new float[]{-8.029,29.9,1.59});
SoHAnimJoint1281->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1281->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1282 = new SoHAnimSegment();
SoHAnimSegment1282->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimSegment1282->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoTransform* SoTransform1283 = new SoTransform();
SoTransform1283->setTranslation(new float[]{-8.029,29.9,1.59});
SoShape* SoShape1284 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1285 = new SoVRMLAppearance();
SoMaterial* SoMaterial1286 = new SoMaterial();
SoMaterial1286->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1285->addChild(*SoMaterial1286);

SoImageTexture* SoImageTexture1287 = new SoImageTexture();
SoImageTexture1287->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1285->addChild(*SoImageTexture1287);

SoShape1284->addChild(*SoVRMLAppearance1285);

SoIndexedFaceSet* SoIndexedFaceSet1288 = new SoIndexedFaceSet();
SoIndexedFaceSet1288->setCoordIndex(new int32_t[]{5,6,0,-1,7,3,14,-1,14,13,7,-1,5,0,17,-1,17,10,5,-1,4,5,10,-1,10,9,4,-1,3,4,9,-1,9,14,3,-1,0,1,19,-1,19,17,0,-1,1,7,13,-1,13,19,1,-1,1,0,2,-1,0,6,8,-1,8,2,0,-1,9,10,11,-1,11,12,9,-1,13,14,15,-1,15,16,13,-1,10,17,18,-1,18,11,10,-1,19,13,16,-1,16,20,19,-1,17,19,20,-1,20,18,17,-1,14,9,12,-1,12,15,14,-1,15,12,20,-1,20,16,15,-1,11,18,20,-1,20,12,11,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,8,6,22,-1,22,21,8,-1,6,5,23,-1,23,22,6,-1,5,4,24,-1,24,23,5,-1,4,3,25,-1,25,24,4,-1,3,7,26,-1,26,25,3,-1,27,30,31,-1,31,32,27,-1,7,1,28,-1,28,27,7,-1,1,2,29,-1,29,28,1,-1,2,8,30,-1,30,29,2,-1,8,21,31,-1,31,30,8,-1,21,26,32,-1,32,31,21,-1,26,7,27,-1,27,32,26,-1}, 248);
SoIndexedFaceSet1288->setCreaseAngle(3.14159);
SoIndexedFaceSet1288->setTexCoordIndex(new int32_t[]{0,1,2,-1,36,33,34,-1,34,35,36,-1,0,2,7,-1,7,8,0,-1,10,0,8,-1,8,9,10,-1,33,38,37,-1,37,34,33,-1,2,11,12,-1,12,7,2,-1,39,36,35,-1,35,40,39,-1,11,2,13,-1,2,1,14,-1,14,13,2,-1,9,8,15,-1,15,16,9,-1,5,4,17,-1,17,18,5,-1,8,7,19,-1,19,15,8,-1,12,5,18,-1,18,20,12,-1,7,12,20,-1,20,19,7,-1,4,9,16,-1,16,17,4,-1,17,16,20,-1,20,18,17,-1,15,19,20,-1,20,16,15,-1,22,23,24,-1,24,25,26,-1,22,24,26,-1,21,22,26,-1,28,29,30,-1,30,27,28,-1,14,1,22,-1,22,21,14,-1,1,0,23,-1,23,22,1,-1,0,10,24,-1,24,23,0,-1,10,3,25,-1,25,24,10,-1,33,36,42,-1,42,41,33,-1,27,30,31,-1,31,32,27,-1,6,11,28,-1,28,27,6,-1,11,13,29,-1,29,28,11,-1,13,14,30,-1,30,29,13,-1,14,21,31,-1,31,30,14,-1,21,26,32,-1,32,31,21,-1,42,36,43,-1,43,44,42,-1}, 248);
SoCoordinate* SoCoordinate1289 = new SoCoordinate();
SoCoordinate1289->setPoint(new float[]{-0.648,-0.1572,-0.1816,-0.2215,-0.4696,-0.3727,-0.7293,-0.3514,-0.3769,0.5989,0.0674,-0.062,0.3258,0.2652,0.2094,-0.3575,0.3782,0.3089,-0.6921,-0.0248,-0.2768,0.3898,-0.3658,-0.5188,-0.7948,-0.1175,-0.4637,0.2134,-0.6161,0.8058,-0.3101,-0.4028,0.7384,-0.1954,-0.8397,0.9419,0.1104,-0.9591,0.8926,0.2493,-1.151,0.2193,0.5111,-0.832,0.6281,0.3686,-0.981,0.7131,0.1898,-1.227,0.383,-0.5399,-0.798,0.2786,-0.4043,-1.127,0.5533,-0.1346,-1.116,0.1902,-0.1035,-1.254,0.4943,-0.437,0.1054,-0.572,-0.4429,0.1652,-0.5023,-0.1619,0.4787,-0.0154,0.2164,0.398,-0.0699,0.3666,0.2424,-0.317,0.2404,0.0654,-0.5934,0.2919,-0.3931,-0.7578,-0.1692,-0.5049,-0.6608,-0.5909,-0.3962,-0.6566,-0.6389,-0.2511,-0.7092,-0.4111,-0.0844,-0.8017,0.1733,-0.1282,-0.8504}, 99);
SoIndexedFaceSet1288->setCoord(*SoCoordinate1289);

SoTextureCoordinate* SoTextureCoordinate1290 = new SoTextureCoordinate();
SoTextureCoordinate1290->setPoint(new float[]{0.8786,0.0507,0.857,0.0621,0.8601,0.0649,0.867,0.0598,0.8887,0.0786,0.8747,0.0865,0.8533,0.0697,0.876,0.0783,0.893,0.0688,0.8992,0.0702,0.8819,0.0483,0.8561,0.0728,0.8736,0.0851,0.8532,0.0697,0.8503,0.0646,0.8986,0.0785,0.897,0.0809,0.8914,0.0813,0.8802,0.0861,0.8841,0.0856,0.8821,0.0883,0.8487,0.0595,0.8509,0.0581,0.8683,0.0489,0.868,0.0507,0.8608,0.0544,0.8505,0.0603,0.8455,0.0706,0.8468,0.073,0.8455,0.0707,0.8437,0.0676,0.8416,0.0639,0.8422,0.0648,0.8729,0.2464,0.8482,0.2317,0.8612,0.2211,0.8847,0.2342,0.8433,0.2381,0.8632,0.2548,0.8814,0.2316,0.8625,0.2222,0.8799,0.2506,0.8891,0.243,0.8922,0.232}, 88);
SoIndexedFaceSet1288->setTexCoord(*SoTextureCoordinate1290);

SoShape1284->setGeometry(*SoIndexedFaceSet1288);

SoTransform1283->addChild(*SoShape1284);

SoHAnimSegment1282->addChild(*SoTransform1283);

SoHAnimJoint1281->addChildren(*SoHAnimSegment1282);

SoHAnimJoint* SoHAnimJoint1291 = new SoHAnimJoint();
SoHAnimJoint1291->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint1291->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint1291->setCenter(new float[]{-8.101,29.07,2.207});
SoHAnimJoint1291->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1291->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1292 = new SoHAnimSegment();
SoHAnimSegment1292->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSegment1292->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoTransform* SoTransform1293 = new SoTransform();
SoTransform1293->setTranslation(new float[]{-8.101,29.07,2.207});
SoShape* SoShape1294 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1295 = new SoVRMLAppearance();
SoMaterial* SoMaterial1296 = new SoMaterial();
SoMaterial1296->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1295->addChild(*SoMaterial1296);

SoImageTexture* SoImageTexture1297 = new SoImageTexture();
SoImageTexture1297->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1295->addChild(*SoImageTexture1297);

SoShape1294->addChild(*SoVRMLAppearance1295);

SoIndexedFaceSet* SoIndexedFaceSet1298 = new SoIndexedFaceSet();
SoIndexedFaceSet1298->setCoordIndex(new int32_t[]{0,29,28,-1,28,11,0,-1,32,2,17,-1,17,1,32,-1,4,3,1,-1,1,17,4,-1,11,28,31,-1,31,5,11,-1,29,0,2,-1,2,32,29,-1,4,5,31,-1,31,3,4,-1,23,32,1,-1,24,3,31,-1,24,23,1,-1,1,3,24,-1,4,6,7,-1,7,8,4,-1,5,9,10,-1,10,11,5,-1,4,8,9,-1,9,5,4,-1,10,13,14,-1,14,12,10,-1,2,15,16,-1,16,17,2,-1,0,12,15,-1,15,2,0,-1,8,7,18,-1,18,9,8,-1,18,13,10,-1,10,9,18,-1,6,20,21,-1,21,19,6,-1,22,19,21,-1,21,14,22,-1,17,16,20,-1,20,6,17,-1,6,4,17,-1,11,10,12,-1,12,0,11,-1,13,22,14,-1,6,19,18,-1,18,7,6,-1,18,19,22,-1,22,13,18,-1,16,15,21,-1,21,20,16,-1,21,15,12,-1,12,14,21,-1,24,25,26,-1,26,23,24,-1,28,29,30,-1,30,27,28,-1,27,30,26,-1,26,25,27,-1,24,31,27,-1,27,25,24,-1,32,23,26,-1,26,30,32,-1,30,29,32,-1,28,27,31,-1}, 248);
SoIndexedFaceSet1298->setCreaseAngle(3.14159);
SoIndexedFaceSet1298->setTexCoordIndex(new int32_t[]{3,33,34,-1,34,2,3,-1,4,5,6,-1,6,7,4,-1,9,8,7,-1,7,6,9,-1,2,34,37,-1,37,38,2,-1,33,3,36,-1,36,35,33,-1,9,11,10,-1,10,8,9,-1,12,4,7,-1,13,8,10,-1,13,12,7,-1,7,8,13,-1,9,14,15,-1,15,16,9,-1,38,39,18,-1,18,2,38,-1,9,16,17,-1,17,11,9,-1,18,20,21,-1,21,19,18,-1,5,22,23,-1,23,6,5,-1,3,19,40,-1,40,36,3,-1,16,15,24,-1,24,17,16,-1,41,20,18,-1,18,39,41,-1,14,26,27,-1,27,25,14,-1,28,42,43,-1,43,21,28,-1,6,23,26,-1,26,14,6,-1,14,9,6,-1,2,18,19,-1,19,3,2,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,41,42,28,-1,28,20,41,-1,23,22,27,-1,27,26,23,-1,43,40,19,-1,19,21,43,-1,13,29,30,-1,30,12,13,-1,1,0,32,-1,32,31,1,-1,31,32,30,-1,30,29,31,-1,13,10,31,-1,31,29,13,-1,4,12,30,-1,30,32,4,-1,32,0,4,-1,1,31,10,-1}, 248);
SoCoordinate* SoCoordinate1299 = new SoCoordinate();
SoCoordinate1299->setPoint(new float[]{0.3337,-0.7896,-0.0218,-0.4001,-0.2756,-0.0935,-0.007,-0.7974,-0.0081,-0.1798,0.0821,0.3404,-0.0929,-0.4091,0.5794,0.2993,-0.3965,0.5693,-0.1153,-0.9089,0.6039,-0.0672,-0.8379,0.6779,0.01,-0.7103,0.7249,0.2924,-0.7333,0.742,0.4924,-0.785,0.5516,0.5321,-0.5261,0.3643,0.3318,-1.035,0.1941,0.4237,-0.9358,0.5457,0.334,-1.054,0.3651,0.0387,-1.061,0.2343,-0.1633,-0.9486,0.3874,-0.2892,-0.673,0.1983,0.2076,-0.9481,0.6916,0.1404,-1.048,0.5886,-0.1515,-0.9429,0.5128,0.0911,-1.101,0.4569,0.3732,-1.009,0.4629,-0.468,0.0378,-0.3382,-0.2382,0.433,0.1216,0.0212,0.4536,-0.0258,-0.2254,0.0652,-0.4619,0.4366,0.3569,-0.1582,0.583,0.0038,0.0113,0.3212,-0.3156,-0.3975,0.19,-0.0315,-0.5942,0.2852,0.2197,0.189,-0.0627,-0.2806,-0.4266}, 99);
SoIndexedFaceSet1298->setCoord(*SoCoordinate1299);

SoTextureCoordinate* SoTextureCoordinate1300 = new SoTextureCoordinate();
SoTextureCoordinate1300->setPoint(new float[]{0.8747,0.0865,0.8887,0.0786,0.8299,0.2203,0.8424,0.2111,0.8736,0.0851,0.8939,0.0989,0.8978,0.0975,0.8834,0.0852,0.8992,0.0766,0.9092,0.0888,0.8992,0.0702,0.9115,0.0859,0.876,0.0783,0.893,0.0688,0.9109,0.102,0.9135,0.0996,0.9144,0.0973,0.9172,0.0962,0.8241,0.2146,0.8338,0.2074,0.8247,0.2116,0.8291,0.2083,0.9028,0.1054,0.9046,0.1032,0.9153,0.1012,0.9125,0.1038,0.9081,0.1033,0.9082,0.1057,0.8266,0.2097,0.8885,0.0681,0.8723,0.0776,0.8843,0.0701,0.8696,0.0781,0.8612,0.2211,0.8482,0.2317,0.8625,0.2222,0.8417,0.2109,0.8433,0.2381,0.8245,0.2237,0.8192,0.2167,0.8322,0.2071,0.8195,0.2131,0.8224,0.2103,0.8256,0.2083}, 88);
SoIndexedFaceSet1298->setTexCoord(*SoTextureCoordinate1300);

SoShape1294->setGeometry(*SoIndexedFaceSet1298);

SoTransform1293->addChild(*SoShape1294);

SoHAnimSegment1292->addChild(*SoTransform1293);

SoHAnimJoint1291->addChildren(*SoHAnimSegment1292);

SoHAnimJoint1281->addChildren(*SoHAnimJoint1291);

SoHAnimJoint1271->addChildren(*SoHAnimJoint1281);

SoHAnimJoint1261->addChildren(*SoHAnimJoint1271);

SoHAnimJoint1251->addChildren(*SoHAnimJoint1261);

SoHAnimJoint* SoHAnimJoint1301 = new SoHAnimJoint();
SoHAnimJoint1301->X3DNode::setName(QString("r_midcarpal_2"));
SoHAnimJoint1301->setDEF(QString("hanim_r_midcarpal_2"));
SoHAnimJoint1301->setCenter(new float[]{-8.043,31.42,0.3741});
SoHAnimJoint1301->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1301->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1302 = new SoHAnimSegment();
SoHAnimSegment1302->X3DNode::setName(QString("r_trapezoid"));
SoHAnimSegment1302->setDEF(QString("hanim_r_trapezoid"));
SoTransform* SoTransform1303 = new SoTransform();
SoTransform1303->setTranslation(new float[]{-8.043,31.42,0.3741});
SoShape* SoShape1304 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1305 = new SoVRMLAppearance();
SoMaterial* SoMaterial1306 = new SoMaterial();
SoMaterial1306->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1305->addChild(*SoMaterial1306);

SoImageTexture* SoImageTexture1307 = new SoImageTexture();
SoImageTexture1307->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1305->addChild(*SoImageTexture1307);

SoShape1304->addChild(*SoVRMLAppearance1305);

SoIndexedFaceSet* SoIndexedFaceSet1308 = new SoIndexedFaceSet();
SoIndexedFaceSet1308->setCoordIndex(new int32_t[]{14,2,1,-1,1,12,14,-1,0,3,15,-1,15,13,0,-1,11,8,9,-1,9,10,11,-1,4,16,17,-1,17,5,4,-1,18,19,7,-1,7,6,18,-1,0,13,16,-1,16,4,0,-1,12,1,5,-1,5,17,12,-1,1,0,4,-1,4,5,1,-1,2,14,18,-1,18,6,2,-1,15,3,7,-1,7,19,15,-1,3,2,6,-1,6,7,3,-1,3,0,9,-1,9,8,3,-1,0,1,10,-1,10,9,0,-1,1,2,11,-1,11,10,1,-1,2,3,8,-1,8,11,2,-1,20,27,26,-1,26,25,24,-1,20,26,24,-1,24,23,22,-1,20,24,22,-1,21,20,22,-1,12,20,21,-1,21,14,12,-1,14,21,22,-1,22,18,14,-1,18,22,23,-1,23,19,18,-1,19,23,24,-1,24,15,19,-1,15,24,25,-1,25,13,15,-1,13,25,26,-1,26,16,13,-1,16,26,27,-1,27,17,16,-1,17,27,20,-1,20,12,17,-1}, 208);
SoIndexedFaceSet1308->setCreaseAngle(3.14159);
SoIndexedFaceSet1308->setTexCoordIndex(new int32_t[]{21,0,1,-1,1,19,21,-1,12,13,22,-1,22,20,12,-1,5,6,7,-1,7,4,5,-1,8,23,25,-1,25,9,8,-1,26,28,18,-1,18,17,26,-1,12,20,24,-1,24,16,12,-1,19,1,9,-1,9,25,19,-1,1,2,8,-1,8,9,1,-1,0,21,27,-1,27,10,0,-1,22,13,18,-1,18,28,22,-1,3,0,10,-1,10,11,3,-1,13,12,15,-1,15,14,13,-1,2,1,4,-1,4,7,2,-1,1,0,5,-1,5,4,1,-1,0,3,6,-1,6,5,0,-1,29,36,35,-1,35,34,33,-1,29,35,33,-1,33,32,31,-1,29,33,31,-1,30,29,31,-1,19,29,30,-1,30,21,19,-1,21,30,31,-1,31,27,21,-1,26,31,32,-1,32,28,26,-1,28,32,33,-1,33,22,28,-1,22,33,34,-1,34,20,22,-1,20,34,35,-1,35,24,20,-1,23,35,36,-1,36,25,23,-1,25,36,29,-1,29,19,25,-1}, 208);
SoCoordinate* SoCoordinate1309 = new SoCoordinate();
SoCoordinate1309->setPoint(new float[]{0.6358,-0.9379,-0.2307,-0.7821,-0.9379,-0.2307,-0.6822,0.0629,-0.2716,0.6057,0.0629,-0.2624,0.5204,-1.104,-0.2257,-0.6304,-1.104,-0.2257,-0.5127,0.3713,-0.2927,0.4578,0.3716,-0.2865,0.5269,-0.0048,-0.3422,0.5894,-0.8616,-0.3044,-0.6897,-0.8616,-0.3038,-0.6041,-0.0048,-0.3509,-0.7053,-0.8216,0.3852,0.6389,-0.8216,0.3852,-0.568,-0.0472,0.2614,0.5411,-0.0473,0.2625,0.4859,-0.9962,0.4385,-0.567,-1.009,0.4169,-0.4266,0.2577,0.2079,0.4523,0.2557,0.2115,-0.6134,-0.7544,0.4412,-0.4945,-0.0839,0.334,-0.3721,0.1802,0.2877,0.3891,0.1785,0.2907,0.4659,-0.0839,0.335,0.5506,-0.7544,0.4412,0.4182,-0.9056,0.4873,-0.4937,-0.9167,0.4687}, 84);
SoIndexedFaceSet1308->setCoord(*SoCoordinate1309);

SoTextureCoordinate* SoTextureCoordinate1310 = new SoTextureCoordinate();
SoTextureCoordinate1310->setPoint(new float[]{0.813,0.0266,0.8136,0.0488,0.8136,0.0488,0.8133,0.0266,0.8111,0.0474,0.8105,0.0283,0.8108,0.0283,0.8111,0.0474,0.8141,0.0525,0.8141,0.0525,0.8123,0.0198,0.8125,0.0198,0.9273,0.2479,0.9315,0.2698,0.9337,0.2676,0.9301,0.2489,0.9262,0.2444,0.9337,0.2762,0.9335,0.2763,0.8381,0.0441,0.904,0.2568,0.8327,0.0273,0.9122,0.2724,0.8401,0.0478,0.9014,0.2535,0.8395,0.0482,0.9142,0.2789,0.8319,0.0206,0.9141,0.2788,0.8381,0.0441,0.8327,0.0273,0.8319,0.0206,0.9141,0.2788,0.9122,0.2724,0.904,0.2568,0.9014,0.2535,0.8395,0.0482}, 74);
SoIndexedFaceSet1308->setTexCoord(*SoTextureCoordinate1310);

SoShape1304->setGeometry(*SoIndexedFaceSet1308);

SoTransform1303->addChild(*SoShape1304);

SoHAnimSegment1302->addChild(*SoTransform1303);

SoHAnimJoint1301->addChildren(*SoHAnimSegment1302);

SoHAnimJoint* SoHAnimJoint1311 = new SoHAnimJoint();
SoHAnimJoint1311->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint1311->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint1311->setCenter(new float[]{-8.04,30.559999,0.4324});
SoHAnimJoint1311->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1311->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1312 = new SoHAnimSegment();
SoHAnimSegment1312->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimSegment1312->setDEF(QString("hanim_r_metacarpal_2"));
SoTransform* SoTransform1313 = new SoTransform();
SoTransform1313->setTranslation(new float[]{-8.04,30.559999,0.4324});
SoShape* SoShape1314 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1315 = new SoVRMLAppearance();
SoMaterial* SoMaterial1316 = new SoMaterial();
SoMaterial1316->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1315->addChild(*SoMaterial1316);

SoImageTexture* SoImageTexture1317 = new SoImageTexture();
SoImageTexture1317->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1315->addChild(*SoImageTexture1317);

SoShape1314->addChild(*SoVRMLAppearance1315);

SoIndexedFaceSet* SoIndexedFaceSet1318 = new SoIndexedFaceSet();
SoIndexedFaceSet1318->setCoordIndex(new int32_t[]{0,1,8,-1,8,3,0,-1,5,0,3,-1,3,7,5,-1,10,6,4,-1,4,2,10,-1,2,4,8,-1,8,1,2,-1,14,4,6,-1,6,11,14,-1,8,16,17,-1,17,3,8,-1,9,13,12,-1,12,7,9,-1,15,16,8,-1,8,4,15,-1,15,4,14,-1,9,3,17,-1,17,18,9,-1,9,18,13,-1,30,31,25,-1,27,30,25,-1,26,27,25,-1,22,19,20,-1,20,21,22,-1,41,38,39,-1,39,40,41,-1,36,37,32,-1,36,32,33,-1,36,33,34,-1,35,36,34,-1,23,24,19,-1,19,22,23,-1,6,10,20,-1,20,19,6,-1,30,27,28,-1,28,29,30,-1,5,7,22,-1,22,21,5,-1,7,12,23,-1,23,22,7,-1,12,11,24,-1,24,23,12,-1,11,6,19,-1,19,24,11,-1,1,0,26,-1,26,25,1,-1,0,5,27,-1,27,26,0,-1,5,21,28,-1,28,27,5,-1,21,20,29,-1,29,28,21,-1,20,10,30,-1,30,29,20,-1,10,2,31,-1,31,30,10,-1,2,1,25,-1,25,31,2,-1,16,15,33,-1,33,32,16,-1,15,14,34,-1,34,33,15,-1,14,13,35,-1,35,34,14,-1,13,18,36,-1,36,35,13,-1,18,17,37,-1,37,36,18,-1,17,16,32,-1,32,37,17,-1,14,11,39,-1,39,38,14,-1,11,12,40,-1,40,39,11,-1,12,13,41,-1,41,40,12,-1,13,14,38,-1,38,41,13,-1,9,7,3,-1}, 320);
SoIndexedFaceSet1318->setCreaseAngle(3.14159);
SoIndexedFaceSet1318->setTexCoordIndex(new int32_t[]{3,0,1,-1,1,2,3,-1,5,3,2,-1,2,4,5,-1,44,45,8,-1,8,46,44,-1,46,8,43,-1,43,42,46,-1,47,8,45,-1,45,48,47,-1,1,12,13,-1,13,2,1,-1,16,14,15,-1,15,4,16,-1,50,49,43,-1,43,8,50,-1,50,8,47,-1,16,2,13,-1,13,18,16,-1,16,18,14,-1,21,22,23,-1,20,21,23,-1,19,20,23,-1,25,26,27,-1,27,24,25,-1,29,30,31,-1,31,28,29,-1,33,34,35,-1,33,35,36,-1,33,36,37,-1,32,33,37,-1,38,39,26,-1,26,25,38,-1,7,6,27,-1,27,26,7,-1,21,20,40,-1,40,41,21,-1,5,4,25,-1,25,24,5,-1,4,15,38,-1,38,25,4,-1,15,11,39,-1,39,38,15,-1,48,45,51,-1,51,56,48,-1,0,3,19,-1,19,23,0,-1,3,5,20,-1,20,19,3,-1,5,24,40,-1,40,20,5,-1,24,27,41,-1,41,40,24,-1,27,6,21,-1,21,41,27,-1,6,9,22,-1,22,21,6,-1,9,0,23,-1,23,22,9,-1,12,17,36,-1,36,35,12,-1,50,47,55,-1,55,54,50,-1,10,14,32,-1,32,37,10,-1,14,18,33,-1,33,32,14,-1,18,13,34,-1,34,33,18,-1,13,12,35,-1,35,34,13,-1,47,48,53,-1,53,52,47,-1,11,15,28,-1,28,31,11,-1,15,14,29,-1,29,28,15,-1,14,10,30,-1,30,29,14,-1,16,4,2,-1}, 320);
SoCoordinate* SoCoordinate1319 = new SoCoordinate();
SoCoordinate1319->setPoint(new float[]{-0.5385,-2.162,0.5011,-0.0659,-2.156,0.6401,0.3587,-2.162,0.5027,-0.6132,-1.327,0.533,0.4742,-1.326,0.5432,-0.6023,-2.207,-0.1881,0.5344,-1.295,-0.2212,-0.7168,-1.295,-0.2212,-0.0891,-1.429,0.7147,-0.8645,-0.8313,0.4987,0.3914,-2.207,-0.1881,0.6358,-0.0769,-0.289,-0.7821,-0.0769,-0.289,-0.7053,0.0393,0.3269,0.6389,0.0393,0.3269,0.4005,-1.027,0.6389,-0.2108,-1.13,0.785,-0.7186,-1.012,0.7808,-0.7841,-0.7783,0.694,0.4207,-1.297,-0.341,0.2918,-2.186,-0.2634,-0.5068,-2.186,-0.2634,-0.6022,-1.304,-0.3405,-0.6628,-0.0829,-0.4027,0.5467,-0.0829,-0.4027,-0.0673,-2.335,0.5792,-0.3957,-2.338,0.4716,-0.4585,-2.364,-0.1616,-0.4618,-2.271,-0.2352,0.2461,-2.271,-0.2352,0.3144,-2.364,-0.1611,0.2879,-2.338,0.4752,-0.1576,-0.941,0.901,0.2884,-0.8565,0.7851,0.469,0.0593,0.5095,-0.5883,0.0595,0.5091,-0.5527,-0.689,0.8149,-0.541,-0.8603,0.8815,0.506,0.13,0.2038,0.5335,0.0511,-0.194,-0.6336,0.0511,-0.194,-0.5814,0.13,0.2038}, 126);
SoIndexedFaceSet1318->setCoord(*SoCoordinate1319);

SoTextureCoordinate* SoTextureCoordinate1320 = new SoTextureCoordinate();
SoTextureCoordinate1320->setPoint(new float[]{0.8514,0.0953,0.8526,0.0788,0.846,0.0768,0.8466,0.0958,0.8195,0.0808,0.8225,0.0994,0.8225,0.0994,0.8195,0.0808,0.8903,0.2261,0.8467,0.0958,0.8381,0.0441,0.8136,0.0488,0.8561,0.0728,0.8532,0.0697,0.8381,0.0441,0.8136,0.0488,0.8436,0.0662,0.8533,0.0697,0.8503,0.0646,0.8461,0.0998,0.8248,0.1027,0.8248,0.1027,0.8462,0.0997,0.8498,0.0994,0.8184,0.0977,0.8157,0.0811,0.8157,0.0809,0.8184,0.0977,0.8165,0.0457,0.8341,0.0424,0.8341,0.0424,0.8165,0.0457,0.844,0.0417,0.8554,0.0622,0.8575,0.0659,0.8594,0.0677,0.8574,0.0658,0.844,0.0417,0.8099,0.0493,0.8099,0.0493,0.82,0.101,0.82,0.101,0.8821,0.2087,0.8838,0.2252,0.9098,0.1997,0.916,0.2175,0.8866,0.2074,0.904,0.2568,0.9273,0.2479,0.8814,0.2316,0.8847,0.2342,0.9197,0.2166,0.9083,0.2577,0.925,0.2515,0.8813,0.2388,0.8986,0.2602,0.931,0.2468}, 114);
SoIndexedFaceSet1318->setTexCoord(*SoTextureCoordinate1320);

SoShape1314->setGeometry(*SoIndexedFaceSet1318);

SoTransform1313->addChild(*SoShape1314);

SoHAnimSegment1312->addChild(*SoTransform1313);

SoHAnimJoint1311->addChildren(*SoHAnimSegment1312);

SoHAnimJoint* SoHAnimJoint1321 = new SoHAnimJoint();
SoHAnimJoint1321->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint1321->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint1321->setCenter(new float[]{-8.149,28.32,0.67});
SoHAnimJoint1321->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1321->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1322 = new SoHAnimSegment();
SoHAnimSegment1322->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimSegment1322->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoTransform* SoTransform1323 = new SoTransform();
SoTransform1323->setTranslation(new float[]{-8.149,28.32,0.67});
SoShape* SoShape1324 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1325 = new SoVRMLAppearance();
SoMaterial* SoMaterial1326 = new SoMaterial();
SoMaterial1326->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1325->addChild(*SoMaterial1326);

SoImageTexture* SoImageTexture1327 = new SoImageTexture();
SoImageTexture1327->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1325->addChild(*SoImageTexture1327);

SoShape1324->addChild(*SoVRMLAppearance1325);

SoIndexedFaceSet* SoIndexedFaceSet1328 = new SoIndexedFaceSet();
SoIndexedFaceSet1328->setCoordIndex(new int32_t[]{4,19,18,-1,18,5,4,-1,5,18,21,-1,21,6,5,-1,7,25,20,-1,20,8,7,-1,8,20,19,-1,19,4,8,-1,6,21,22,-1,1,7,8,-1,8,10,1,-1,6,2,11,-1,11,5,6,-1,5,11,0,-1,0,4,5,-1,4,0,10,-1,10,8,4,-1,1,3,9,-1,9,7,1,-1,9,3,2,-1,2,6,9,-1,9,24,23,-1,23,7,9,-1,6,22,24,-1,24,9,6,-1,23,25,7,-1,0,11,15,-1,15,17,0,-1,1,10,14,-1,14,12,1,-1,11,2,13,-1,13,15,11,-1,3,1,12,-1,12,16,3,-1,2,3,16,-1,16,13,2,-1,10,0,17,-1,17,14,10,-1,14,17,16,-1,16,12,14,-1,15,13,16,-1,16,17,15,-1,26,27,28,-1,26,28,29,-1,30,26,29,-1,18,19,27,-1,27,26,18,-1,19,20,28,-1,28,27,19,-1,20,25,29,-1,29,28,20,-1,31,32,33,-1,37,31,33,-1,36,37,33,-1,36,33,34,-1,36,34,35,-1,21,18,26,-1,26,30,21,-1,24,22,32,-1,32,31,24,-1,22,21,33,-1,33,32,22,-1,21,30,34,-1,34,33,21,-1,30,29,35,-1,35,34,30,-1,29,25,36,-1,36,35,29,-1,25,23,37,-1,37,36,25,-1,23,24,31,-1,31,37,23,-1}, 288);
SoIndexedFaceSet1328->setCreaseAngle(3.14159);
SoIndexedFaceSet1328->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,3,2,4,-1,4,5,3,-1,6,40,41,-1,41,9,6,-1,9,41,39,-1,39,38,9,-1,5,4,10,-1,11,6,9,-1,9,12,11,-1,5,13,14,-1,14,3,5,-1,3,14,15,-1,15,0,3,-1,38,42,12,-1,12,9,38,-1,11,43,44,-1,44,6,11,-1,17,16,13,-1,13,5,17,-1,44,45,46,-1,46,6,44,-1,5,10,18,-1,18,17,5,-1,46,40,6,-1,15,14,20,-1,20,21,15,-1,11,12,22,-1,22,23,11,-1,14,13,24,-1,24,20,14,-1,43,11,23,-1,23,48,43,-1,13,16,25,-1,25,24,13,-1,12,42,47,-1,47,22,12,-1,22,47,48,-1,48,23,22,-1,20,24,25,-1,25,21,20,-1,27,28,29,-1,27,29,30,-1,26,27,30,-1,2,1,28,-1,28,27,2,-1,1,8,29,-1,29,28,1,-1,8,7,30,-1,30,29,8,-1,33,34,35,-1,32,33,35,-1,31,32,35,-1,31,35,36,-1,31,36,37,-1,4,2,27,-1,27,26,4,-1,18,10,34,-1,34,33,18,-1,10,4,35,-1,35,34,10,-1,4,26,36,-1,36,35,4,-1,26,30,37,-1,37,36,26,-1,30,7,31,-1,31,37,30,-1,7,19,32,-1,32,31,7,-1,19,18,33,-1,33,32,19,-1}, 288);
SoCoordinate* SoCoordinate1329 = new SoCoordinate();
SoCoordinate1329->setPoint(new float[]{0.1159,-1.372,0.3131,0.5161,-1.341,-0.3172,-0.3299,-1.236,-0.3162,0.1159,-1.364,-0.424,0.0588,-0.15,0.3785,-0.3848,-0.1567,0.2488,-0.4338,-0.1885,-0.322,0.4674,-0.1885,-0.3215,0.4674,-0.1567,0.2488,0.0588,-0.3302,-0.406,0.5161,-1.346,0.1932,-0.3299,-1.242,0.1943,0.4415,-1.509,-0.285,-0.1699,-1.592,-0.3152,0.4415,-1.514,0.1582,-0.1699,-1.597,0.188,0.117,-1.623,-0.3164,0.117,-1.628,0.1968,-0.4291,0.0832,0.2635,0.0434,0.0888,0.4025,0.4681,0.0832,0.2651,-0.493,0.0378,-0.4257,-0.4088,-0.1918,-0.4243,0.4674,-0.1918,-0.4243,0.0588,-0.3316,-0.4184,0.5007,0.0378,-0.4257,-0.2815,0.3454,0.172,0.0577,0.3598,0.3191,0.3828,0.3458,0.1744,0.3964,0.327,-0.4021,-0.3405,0.3271,-0.4009,0.0578,-0.2883,-0.4475,-0.3757,-0.1509,-0.4548,-0.4553,0.0544,-0.4548,-0.3138,0.3194,-0.4725,0.365,0.3193,-0.4736,0.4578,0.0532,-0.4547,0.4287,-0.1537,-0.4547}, 114);
SoIndexedFaceSet1328->setCoord(*SoCoordinate1329);

SoTextureCoordinate* SoTextureCoordinate1330 = new SoTextureCoordinate();
SoTextureCoordinate1330->setPoint(new float[]{0.8511,0.1006,0.8514,0.0953,0.8466,0.0958,0.8466,0.1011,0.8225,0.0994,0.8283,0.1035,0.9023,0.1969,0.8225,0.0994,0.8467,0.0958,0.8857,0.2021,0.8231,0.1042,0.8931,0.1724,0.8782,0.1769,0.8338,0.1268,0.8493,0.125,0.8543,0.1273,0.8302,0.1302,0.8258,0.1072,0.8236,0.1075,0.8231,0.1042,0.8504,0.1328,0.8508,0.1334,0.8781,0.1731,0.8909,0.1692,0.8352,0.1346,0.8353,0.1353,0.8228,0.0929,0.844,0.0896,0.8482,0.0889,0.8441,0.0896,0.8228,0.0929,0.8203,0.0995,0.8207,0.1038,0.8212,0.1068,0.8207,0.1037,0.8203,0.0995,0.8206,0.0933,0.8205,0.0933,0.8815,0.2034,0.8821,0.2087,0.9098,0.1997,0.8866,0.2074,0.8737,0.1777,0.8969,0.1707,0.9052,0.1925,0.9074,0.1918,0.9084,0.195,0.876,0.171,0.891,0.1665}, 98);
SoIndexedFaceSet1328->setTexCoord(*SoTextureCoordinate1330);

SoShape1324->setGeometry(*SoIndexedFaceSet1328);

SoTransform1323->addChild(*SoShape1324);

SoHAnimSegment1322->addChild(*SoTransform1323);

SoHAnimJoint1321->addChildren(*SoHAnimSegment1322);

SoHAnimJoint* SoHAnimJoint1331 = new SoHAnimJoint();
SoHAnimJoint1331->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1331->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1331->setCenter(new float[]{-8.059,26.969999,0.6304});
SoHAnimJoint1331->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1331->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1332 = new SoHAnimSegment();
SoHAnimSegment1332->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimSegment1332->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoTransform* SoTransform1333 = new SoTransform();
SoTransform1333->setTranslation(new float[]{-8.059,26.969999,0.6304});
SoShape* SoShape1334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1335 = new SoVRMLAppearance();
SoMaterial* SoMaterial1336 = new SoMaterial();
SoMaterial1336->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1335->addChild(*SoMaterial1336);

SoImageTexture* SoImageTexture1337 = new SoImageTexture();
SoImageTexture1337->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1335->addChild(*SoImageTexture1337);

SoShape1334->addChild(*SoVRMLAppearance1335);

SoIndexedFaceSet* SoIndexedFaceSet1338 = new SoIndexedFaceSet();
SoIndexedFaceSet1338->setCoordIndex(new int32_t[]{1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1}, 176);
SoIndexedFaceSet1338->setCreaseAngle(3.14159);
SoIndexedFaceSet1338->setTexCoordIndex(new int32_t[]{3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1}, 176);
SoCoordinate* SoCoordinate1339 = new SoCoordinate();
SoCoordinate1339->setPoint(new float[]{0.0842,-1.127,-0.3611,0.4247,-1.116,0.201,-0.2936,-1.004,0.2104,-0.3843,-0.1994,0.2307,-0.3843,-0.1941,-0.2798,0.4256,0.0112,-0.2777,-0.4203,0.1156,-0.2766,0.4256,0.0059,0.2328,-0.4203,0.1104,0.2338,0.2414,0.2045,-0.2757,0.2414,0.1992,0.2347,-0.1761,0.1887,0.2346,-0.1761,0.194,-0.2758,0.0255,-0.0122,-0.3845,0.0255,-0.0204,0.3527,0.0839,-1.135,0.3208,-0.1687,-1.353,0.1876,0.075,-1.39,0.1958,0.4249,-1.111,-0.2542,0.3563,-1.282,0.16,0.3564,-1.278,-0.2161,-0.2934,-0.9988,-0.2626,-0.1685,-1.348,-0.2441,0.0752,-1.386,-0.2452}, 72);
SoIndexedFaceSet1338->setCoord(*SoCoordinate1339);

SoTextureCoordinate* SoTextureCoordinate1340 = new SoTextureCoordinate();
SoTextureCoordinate1340->setPoint(new float[]{0.8782,0.1769,0.8543,0.1273,0.8574,0.1518,0.8703,0.1535,0.8493,0.125,0.8504,0.1318,0.8846,0.1491,0.8931,0.1724,0.8349,0.1336,0.8379,0.1515,0.8533,0.1496,0.8338,0.1268,0.8302,0.1302,0.8351,0.1545,0.849,0.1233,0.8336,0.1251,0.849,0.123,0.8335,0.1249,0.8539,0.1573,0.8543,0.1579,0.8703,0.1496,0.8822,0.146,0.8398,0.159,0.8399,0.1597,0.8737,0.1777,0.8664,0.1541,0.8969,0.1707,0.8878,0.1476,0.8796,0.181,0.8945,0.1764,0.8684,0.1475,0.8822,0.1433}, 64);
SoIndexedFaceSet1338->setTexCoord(*SoTextureCoordinate1340);

SoShape1334->setGeometry(*SoIndexedFaceSet1338);

SoTransform1333->addChild(*SoShape1334);

SoHAnimSegment1332->addChild(*SoTransform1333);

SoHAnimJoint1331->addChildren(*SoHAnimSegment1332);

SoHAnimJoint* SoHAnimJoint1341 = new SoHAnimJoint();
SoHAnimJoint1341->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1341->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1341->setCenter(new float[]{-8.013,25.85,0.5949});
SoHAnimJoint1341->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1341->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1342 = new SoHAnimSegment();
SoHAnimSegment1342->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSegment1342->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoTransform* SoTransform1343 = new SoTransform();
SoTransform1343->setTranslation(new float[]{-8.013,25.85,0.5949});
SoShape* SoShape1344 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1345 = new SoVRMLAppearance();
SoMaterial* SoMaterial1346 = new SoMaterial();
SoMaterial1346->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1345->addChild(*SoMaterial1346);

SoImageTexture* SoImageTexture1347 = new SoImageTexture();
SoImageTexture1347->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1345->addChild(*SoImageTexture1347);

SoShape1344->addChild(*SoVRMLAppearance1345);

SoIndexedFaceSet* SoIndexedFaceSet1348 = new SoIndexedFaceSet();
SoIndexedFaceSet1348->setCoordIndex(new int32_t[]{0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1}, 248);
SoIndexedFaceSet1348->setCreaseAngle(3.14159);
SoIndexedFaceSet1348->setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1}, 248);
SoCoordinate* SoCoordinate1349 = new SoCoordinate();
SoCoordinate1349->setPoint(new float[]{-0.3152,-0.145,0.2433,-0.315,-0.1398,-0.2298,-0.2422,-0.5055,0.2184,-0.242,-0.5007,-0.2162,0.3547,-0.4741,0.238,0.0817,-0.4944,0.3202,0.3549,-0.4688,-0.2341,0.082,-0.4873,-0.3192,-0.1332,-0.7789,0.1945,-0.1331,-0.7746,-0.1993,0.3575,-0.7605,0.19,0.1196,-0.7912,0.2759,0.3577,-0.7563,-0.187,0.1199,-0.785,-0.2787,-0.1657,-0.8631,-0.0043,0.3212,-0.8627,-0.0041,0.1205,-0.9246,-0.0048,-0.1615,-0.846,0.1047,0.3253,-0.8401,-0.0952,0.1076,-0.8953,0.1399,-0.1615,-0.845,-0.1068,0.3253,-0.8413,0.0926,0.1075,-0.8974,-0.1391,0.3791,0.003,0.2365,-0.339,0.1201,-0.2271,-0.3392,0.1148,0.2459,-0.1312,0.198,0.2297,-0.131,0.2029,-0.2085,0.2273,0.2003,0.2299,0.3793,0.008,-0.2188,0.2274,0.2051,-0.2084,0.0363,-0.0157,0.3561,0.0366,-0.0081,-0.3256}, 99);
SoIndexedFaceSet1348->setCoord(*SoCoordinate1349);

SoTextureCoordinate* SoTextureCoordinate1350 = new SoTextureCoordinate();
SoTextureCoordinate1350->setPoint(new float[]{0.8542,0.1553,0.8574,0.1518,0.8533,0.1496,0.8379,0.1515,0.8351,0.1545,0.8388,0.1572,0.8414,0.1663,0.8547,0.1647,0.8578,0.1639,0.8665,0.142,0.8703,0.1535,0.8804,0.1378,0.8846,0.1491,0.8382,0.1663,0.8495,0.1759,0.8523,0.1752,0.8544,0.1737,0.8566,0.1736,0.8658,0.1324,0.8753,0.1296,0.8677,0.1303,0.8725,0.1289,0.842,0.1753,0.8441,0.175,0.8533,0.1759,0.8496,0.1769,0.8467,0.1759,0.846,0.1768,0.87,0.1292,0.8525,0.1477,0.8382,0.1495,0.8525,0.1475,0.8381,0.1492,0.8664,0.1541,0.8878,0.1476,0.8639,0.1422,0.8827,0.1365,0.8634,0.1325,0.8774,0.1283,0.8662,0.1297,0.8697,0.1281,0.8732,0.1275,0.872,0.1575,0.8858,0.1533}, 88);
SoIndexedFaceSet1348->setTexCoord(*SoTextureCoordinate1350);

SoShape1344->setGeometry(*SoIndexedFaceSet1348);

SoTransform1343->addChild(*SoShape1344);

SoHAnimSegment1342->addChild(*SoTransform1343);

SoHAnimJoint1341->addChildren(*SoHAnimSegment1342);

SoHAnimJoint1331->addChildren(*SoHAnimJoint1341);

SoHAnimJoint1321->addChildren(*SoHAnimJoint1331);

SoHAnimJoint1311->addChildren(*SoHAnimJoint1321);

SoHAnimJoint1301->addChildren(*SoHAnimJoint1311);

SoHAnimJoint1251->addChildren(*SoHAnimJoint1301);

SoHAnimJoint* SoHAnimJoint1351 = new SoHAnimJoint();
SoHAnimJoint1351->X3DNode::setName(QString("r_midcarpal_3"));
SoHAnimJoint1351->setDEF(QString("hanim_r_midcarpal_3"));
SoHAnimJoint1351->setCenter(new float[]{-8.032,31.49,-0.2132});
SoHAnimJoint1351->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1351->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1352 = new SoHAnimSegment();
SoHAnimSegment1352->X3DNode::setName(QString("r_capitate"));
SoHAnimSegment1352->setDEF(QString("hanim_r_capitate"));
SoTransform* SoTransform1353 = new SoTransform();
SoTransform1353->setTranslation(new float[]{-8.032,31.49,-0.2132});
SoShape* SoShape1354 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1355 = new SoVRMLAppearance();
SoMaterial* SoMaterial1356 = new SoMaterial();
SoMaterial1356->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1355->addChild(*SoMaterial1356);

SoImageTexture* SoImageTexture1357 = new SoImageTexture();
SoImageTexture1357->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1355->addChild(*SoImageTexture1357);

SoShape1354->addChild(*SoVRMLAppearance1355);

SoIndexedFaceSet* SoIndexedFaceSet1358 = new SoIndexedFaceSet();
SoIndexedFaceSet1358->setCoordIndex(new int32_t[]{5,1,4,-1,4,6,5,-1,7,2,3,-1,3,0,7,-1,8,9,10,-1,10,11,8,-1,12,13,14,-1,14,15,12,-1,1,5,9,-1,9,8,1,-1,5,7,10,-1,10,9,5,-1,7,0,11,-1,11,10,7,-1,0,1,8,-1,8,11,0,-1,6,4,13,-1,13,12,6,-1,4,3,14,-1,14,13,4,-1,3,2,15,-1,15,14,3,-1,2,6,12,-1,12,15,2,-1,22,23,20,-1,20,21,22,-1,18,19,16,-1,16,17,18,-1,5,6,17,-1,17,16,5,-1,6,2,18,-1,18,17,6,-1,2,7,19,-1,19,18,2,-1,7,5,16,-1,16,19,7,-1,0,3,21,-1,21,20,0,-1,3,4,22,-1,22,21,3,-1,4,1,23,-1,23,22,4,-1,1,0,20,-1,20,23,1,-1}, 176);
SoIndexedFaceSet1358->setCreaseAngle(3.14159);
SoIndexedFaceSet1358->setTexCoordIndex(new int32_t[]{24,25,26,-1,26,0,24,-1,4,5,6,-1,6,7,4,-1,8,9,10,-1,10,11,8,-1,12,30,31,-1,31,32,12,-1,25,24,29,-1,29,28,25,-1,1,4,10,-1,10,9,1,-1,4,7,11,-1,11,10,4,-1,7,2,8,-1,8,11,7,-1,0,26,30,-1,30,12,0,-1,3,6,14,-1,14,13,3,-1,6,5,15,-1,15,14,6,-1,27,0,12,-1,12,32,27,-1,17,18,19,-1,19,16,17,-1,35,36,37,-1,37,20,35,-1,24,0,20,-1,20,37,24,-1,0,27,35,-1,35,20,0,-1,5,4,22,-1,22,21,5,-1,4,1,23,-1,23,22,4,-1,7,6,16,-1,16,19,7,-1,6,3,17,-1,17,16,6,-1,26,25,34,-1,34,33,26,-1,2,7,19,-1,19,18,2,-1}, 176);
SoCoordinate* SoCoordinate1359 = new SoCoordinate();
SoCoordinate1359->setPoint(new float[]{-0.7943,-1.006,-0.3306,0.648,-1.004,-0.3307,-0.6905,-0.0005,0.3157,-0.7213,0.0186,-0.3382,0.5902,0.0185,-0.3369,0.6274,-1.001,0.3565,0.5973,-0.0004,0.3249,-0.7905,-1.001,0.3565,0.5435,-1.162,-0.3389,0.5303,-1.172,0.3664,-0.6431,-1.172,0.3664,-0.6456,-1.164,-0.3388,0.4499,0.3085,0.3015,0.4451,0.3167,-0.2743,-0.5697,0.3168,-0.2752,-0.5495,0.3084,0.2952,0.5852,-0.9387,0.4693,0.5221,-0.0739,0.4318,-0.6176,-0.0739,0.4231,-0.704,-0.9387,0.4698,-0.7043,-0.9311,-0.4245,-0.6416,-0.0507,-0.4488,0.5127,-0.0508,-0.4475,0.5993,-0.929,-0.4247}, 72);
SoIndexedFaceSet1358->setCoord(*SoCoordinate1359);

SoTextureCoordinate* SoTextureCoordinate1360 = new SoTextureCoordinate();
SoTextureCoordinate1360->setPoint(new float[]{0.9315,0.2698,0.8136,0.0488,0.7924,0.0507,0.7911,0.0281,0.8136,0.0488,0.813,0.0266,0.791,0.0281,0.7924,0.0508,0.7924,0.0543,0.8143,0.0526,0.8143,0.0526,0.7924,0.0543,0.9335,0.2763,0.7903,0.0215,0.7903,0.0215,0.8123,0.0198,0.7875,0.03,0.7875,0.03,0.7887,0.0494,0.7887,0.0495,0.9277,0.2691,0.8167,0.0279,0.8173,0.0471,0.8173,0.0471,0.9273,0.2479,0.9479,0.2423,0.9531,0.2644,0.9318,0.2697,0.9473,0.2389,0.926,0.2443,0.955,0.2707,0.9551,0.2707,0.9337,0.2763,0.9563,0.262,0.9518,0.243,0.928,0.269,0.924,0.2502,0.9241,0.2502}, 76);
SoIndexedFaceSet1358->setTexCoord(*SoTextureCoordinate1360);

SoShape1354->setGeometry(*SoIndexedFaceSet1358);

SoTransform1353->addChild(*SoShape1354);

SoHAnimSegment1352->addChild(*SoTransform1353);

SoHAnimJoint1351->addChildren(*SoHAnimSegment1352);

SoHAnimJoint* SoHAnimJoint1361 = new SoHAnimJoint();
SoHAnimJoint1361->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint1361->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint1361->setCenter(new float[]{-8.032,30.48,-0.2779});
SoHAnimJoint1361->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1361->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1362 = new SoHAnimSegment();
SoHAnimSegment1362->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimSegment1362->setDEF(QString("hanim_r_metacarpal_3"));
SoTransform* SoTransform1363 = new SoTransform();
SoTransform1363->setTranslation(new float[]{-8.032,30.48,-0.2779});
SoShape* SoShape1364 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1365 = new SoVRMLAppearance();
SoMaterial* SoMaterial1366 = new SoMaterial();
SoMaterial1366->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1365->addChild(*SoMaterial1366);

SoImageTexture* SoImageTexture1367 = new SoImageTexture();
SoImageTexture1367->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1365->addChild(*SoImageTexture1367);

SoShape1364->addChild(*SoVRMLAppearance1365);

SoIndexedFaceSet* SoIndexedFaceSet1368 = new SoIndexedFaceSet();
SoIndexedFaceSet1368->setCoordIndex(new int32_t[]{0,3,6,-1,6,8,0,-1,10,7,1,-1,1,5,10,-1,2,1,7,-1,7,9,2,-1,8,11,4,-1,4,0,8,-1,14,15,12,-1,12,13,14,-1,34,35,32,-1,32,33,34,-1,25,28,29,-1,29,24,25,-1,17,18,19,-1,19,20,17,-1,25,26,27,-1,27,28,25,-1,20,21,16,-1,16,17,20,-1,6,3,13,-1,13,12,6,-1,24,29,30,-1,30,31,24,-1,2,9,15,-1,15,14,2,-1,16,21,22,-1,22,23,16,-1,9,7,17,-1,17,16,9,-1,7,10,18,-1,18,17,7,-1,10,11,19,-1,19,18,10,-1,11,8,20,-1,20,19,11,-1,8,6,21,-1,21,20,8,-1,6,12,22,-1,22,21,6,-1,12,15,23,-1,23,22,12,-1,15,9,16,-1,16,23,15,-1,3,0,25,-1,25,24,3,-1,0,4,26,-1,26,25,0,-1,4,5,27,-1,27,26,4,-1,5,1,28,-1,28,27,5,-1,1,2,29,-1,29,28,1,-1,2,14,30,-1,30,29,2,-1,14,13,31,-1,31,30,14,-1,13,3,24,-1,24,31,13,-1,10,5,33,-1,33,32,10,-1,5,4,34,-1,34,33,5,-1,4,11,35,-1,35,34,4,-1,11,10,32,-1,32,35,11,-1}, 272);
SoIndexedFaceSet1368->setCreaseAngle(3.14159);
SoIndexedFaceSet1368->setTexCoordIndex(new int32_t[]{2,3,0,-1,0,1,2,-1,39,36,37,-1,37,38,39,-1,40,37,36,-1,36,41,40,-1,1,10,11,-1,11,2,1,-1,12,13,14,-1,14,15,12,-1,43,44,45,-1,45,46,43,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,15,-1,15,14,0,-1,23,22,32,-1,32,33,23,-1,8,9,13,-1,13,12,8,-1,31,30,34,-1,34,35,31,-1,9,4,24,-1,24,31,9,-1,36,39,49,-1,49,48,36,-1,7,10,26,-1,26,25,7,-1,10,1,27,-1,27,26,10,-1,1,0,30,-1,30,27,1,-1,0,14,34,-1,34,30,0,-1,14,13,35,-1,35,34,14,-1,13,9,31,-1,31,35,13,-1,3,2,20,-1,20,23,3,-1,2,11,28,-1,28,20,2,-1,42,38,53,-1,53,52,42,-1,38,37,47,-1,47,53,38,-1,5,8,22,-1,22,21,5,-1,8,12,32,-1,32,22,8,-1,12,15,33,-1,33,32,12,-1,15,3,23,-1,23,33,15,-1,39,38,46,-1,46,45,39,-1,6,11,16,-1,16,19,6,-1,11,10,17,-1,17,16,11,-1,10,7,18,-1,18,17,10,-1}, 272);
SoCoordinate* SoCoordinate1369 = new SoCoordinate();
SoCoordinate1369->setPoint(new float[]{-0.7345,-1.173,-0.2591,0.52,-1.173,-0.2591,0.3873,-2.115,-0.2835,-0.6104,-2.115,-0.2835,-0.7943,-0.0032,-0.2659,0.648,-0.0008,-0.266,-0.6106,-2.129,0.5221,0.5261,-1.217,0.489,-0.7252,-1.217,0.489,0.3831,-2.129,0.5221,0.6274,0.0017,0.4213,-0.7905,0.0017,0.4213,-0.5317,-2.284,0.4916,-0.5316,-2.289,-0.2329,0.3003,-2.289,-0.2329,0.2967,-2.284,0.4916,0.2822,-2.101,0.59,0.4237,-1.207,0.6426,0.5516,0.0221,0.5729,-0.683,0.0221,0.5729,-0.6219,-1.213,0.6429,-0.5169,-2.102,0.59,-0.4634,-2.2,0.572,0.2282,-2.2,0.572,-0.5108,-2.08,-0.3752,-0.622,-1.178,-0.3875,-0.6765,0.0078,-0.3867,0.5551,0.0098,-0.3868,0.4091,-1.172,-0.3877,0.2813,-2.079,-0.3753,0.2267,-2.197,-0.3441,-0.4567,-2.197,-0.3441,0.5375,0.1089,0.2867,0.55,0.1079,-0.1665,-0.661,0.1057,-0.1664,-0.6586,0.1092,0.2867}, 108);
SoIndexedFaceSet1368->setCoord(*SoCoordinate1369);

SoTextureCoordinate* SoTextureCoordinate1370 = new SoTextureCoordinate();
SoTextureCoordinate1370->setPoint(new float[]{0.8225,0.0994,0.8195,0.0808,0.7938,0.0824,0.7939,0.1016,0.8195,0.0808,0.7938,0.0824,0.7924,0.0507,0.8136,0.0488,0.7939,0.1016,0.8225,0.0994,0.8136,0.0488,0.7924,0.0508,0.7964,0.1053,0.8205,0.103,0.8205,0.103,0.7964,0.1053,0.796,0.0481,0.809,0.0468,0.809,0.0469,0.796,0.048,0.7888,0.0827,0.7888,0.0826,0.7886,0.1011,0.7887,0.1011,0.8243,0.0799,0.8186,0.0479,0.8186,0.0479,0.8243,0.0801,0.7878,0.051,0.7878,0.0509,0.8275,0.0984,0.8275,0.0983,0.7902,0.1036,0.7902,0.1036,0.8264,0.1006,0.8264,0.1006,0.916,0.2175,0.941,0.2114,0.9479,0.2423,0.9273,0.2479,0.9376,0.1925,0.9098,0.1997,0.9479,0.2423,0.9448,0.2456,0.9323,0.249,0.9323,0.249,0.9448,0.2456,0.9459,0.2103,0.9115,0.2191,0.9226,0.2496,0.9226,0.2496,0.9114,0.219,0.9524,0.2413,0.9524,0.2414}, 108);
SoIndexedFaceSet1368->setTexCoord(*SoTextureCoordinate1370);

SoShape1364->setGeometry(*SoIndexedFaceSet1368);

SoTransform1363->addChild(*SoShape1364);

SoHAnimSegment1362->addChild(*SoTransform1363);

SoHAnimJoint1361->addChildren(*SoHAnimSegment1362);

SoHAnimJoint* SoHAnimJoint1371 = new SoHAnimJoint();
SoHAnimJoint1371->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint1371->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint1371->setCenter(new float[]{-8.147,28.219999,-0.1741});
SoHAnimJoint1371->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1371->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1372 = new SoHAnimSegment();
SoHAnimSegment1372->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimSegment1372->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoTransform* SoTransform1373 = new SoTransform();
SoTransform1373->setTranslation(new float[]{-8.147,28.219999,-0.1741});
SoShape* SoShape1374 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1375 = new SoVRMLAppearance();
SoMaterial* SoMaterial1376 = new SoMaterial();
SoMaterial1376->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1375->addChild(*SoMaterial1376);

SoImageTexture* SoImageTexture1377 = new SoImageTexture();
SoImageTexture1377->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1375->addChild(*SoImageTexture1377);

SoShape1374->addChild(*SoVRMLAppearance1375);

SoIndexedFaceSet* SoIndexedFaceSet1378 = new SoIndexedFaceSet();
SoIndexedFaceSet1378->setCoordIndex(new int32_t[]{3,21,26,-1,26,4,3,-1,5,25,27,-1,27,6,5,-1,4,26,23,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,22,24,-1,24,5,7,-1,4,23,22,-1,22,7,4,-1,24,25,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,18,21,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,19,-1,19,20,16,-1,3,16,20,-1,20,18,3,-1,19,6,27,-1,31,28,29,-1,29,30,31,-1,26,21,29,-1,29,28,26,-1,33,34,35,-1,32,33,35,-1,38,32,35,-1,38,35,36,-1,38,36,37,-1,27,25,31,-1,31,30,27,-1,44,45,39,-1,39,40,41,-1,44,39,41,-1,44,41,42,-1,44,42,43,-1,18,20,33,-1,33,32,18,-1,20,19,34,-1,34,33,20,-1,19,27,35,-1,35,34,19,-1,27,30,36,-1,36,35,27,-1,30,29,37,-1,37,36,30,-1,29,21,38,-1,38,37,29,-1,21,18,32,-1,32,38,21,-1,22,23,40,-1,40,39,22,-1,23,26,41,-1,41,40,23,-1,26,28,42,-1,42,41,26,-1,28,31,43,-1,43,42,28,-1,31,25,44,-1,44,43,31,-1,25,24,45,-1,45,44,25,-1,24,22,39,-1,39,45,24,-1}, 352);
SoIndexedFaceSet1378->setCreaseAngle(3.14159);
SoIndexedFaceSet1378->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1}, 352);
SoCoordinate* SoCoordinate1379 = new SoCoordinate();
SoCoordinate1379->setPoint(new float[]{0.5139,-1.411,-0.2221,-0.332,-1.294,-0.2251,0.1138,-1.44,-0.347,-0.4109,-0.0964,0.3132,-0.4109,-0.0905,-0.2649,0.4653,-0.0905,-0.2649,0.4653,-0.0964,0.3132,0.0567,-0.238,-0.3659,0.4394,-1.599,-0.1832,-0.172,-1.692,-0.2102,0.4394,-1.593,0.2229,-0.172,-1.686,0.2561,0.1148,-1.727,-0.2101,0.1148,-1.721,0.2661,0.5139,-1.404,0.2513,0.1138,-1.43,0.3905,0.0567,-0.2387,0.4126,-0.332,-1.287,0.2483,-0.4109,-0.0974,0.4198,0.4653,-0.0974,0.4198,0.0567,-0.2372,0.4256,-0.4951,0.1322,0.4183,0.0567,-0.2357,-0.3789,-0.4109,-0.0983,-0.3758,0.4653,-0.0983,-0.3758,0.5029,0.1462,-0.3874,-0.4949,0.1462,-0.3874,0.4986,0.1322,0.4183,-0.3331,0.4155,-0.3612,-0.3333,0.417,0.3717,0.3998,0.417,0.3717,0.4035,0.4155,-0.3612,-0.3889,-0.0506,0.451,0.0558,-0.1916,0.4554,0.4401,-0.052,0.451,0.4709,0.1519,0.4501,0.3792,0.4207,0.4493,-0.3158,0.4207,0.4493,-0.4731,0.1521,0.4501,0.0556,-0.1849,-0.4078,-0.3711,-0.0605,-0.4181,-0.4488,0.1472,-0.4248,-0.3032,0.412,-0.4254,0.367,0.412,-0.4254,0.4521,0.1476,-0.4248,0.4197,-0.0633,-0.4181}, 138);
SoIndexedFaceSet1378->setCoord(*SoCoordinate1379);

SoTextureCoordinate* SoTextureCoordinate1380 = new SoTextureCoordinate();
SoTextureCoordinate1380->setPoint(new float[]{0.8168,0.105,0.8225,0.0994,0.7939,0.1016,0.7996,0.1065,0.9311,0.1887,0.7939,0.1016,0.8225,0.0994,0.9145,0.1932,0.794,0.107,0.9232,0.1611,0.908,0.1649,0.8025,0.1324,0.818,0.1313,0.7986,0.1359,0.7957,0.11,0.7939,0.1101,0.794,0.107,0.8228,0.1342,0.8186,0.1401,0.819,0.1409,0.9081,0.1606,0.921,0.1574,0.8033,0.1412,0.8033,0.142,0.8231,0.1042,0.8212,0.1078,0.8231,0.1042,0.8236,0.1075,0.7948,0.0956,0.8206,0.0932,0.8206,0.0932,0.7948,0.0956,0.8249,0.0987,0.8253,0.1032,0.8258,0.1063,0.8253,0.1032,0.8249,0.0987,0.823,0.0929,0.823,0.0929,0.7917,0.1017,0.7916,0.1064,0.7918,0.1091,0.7916,0.1063,0.7917,0.1017,0.7927,0.0957,0.7927,0.0957,0.9376,0.1925,0.9098,0.1997,0.927,0.1595,0.9344,0.1846,0.9361,0.1842,0.9366,0.1872,0.9035,0.1654,0.9061,0.1582,0.9213,0.1544,0.9096,0.1911,0.9084,0.195,0.9074,0.1918}, 116);
SoIndexedFaceSet1378->setTexCoord(*SoTextureCoordinate1380);

SoShape1374->setGeometry(*SoIndexedFaceSet1378);

SoTransform1373->addChild(*SoShape1374);

SoHAnimSegment1372->addChild(*SoTransform1373);

SoHAnimJoint1371->addChildren(*SoHAnimSegment1372);

SoHAnimJoint* SoHAnimJoint1381 = new SoHAnimJoint();
SoHAnimJoint1381->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1381->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1381->setCenter(new float[]{-8.059,26.809999,-0.1572});
SoHAnimJoint1381->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1381->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1382 = new SoHAnimSegment();
SoHAnimSegment1382->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimSegment1382->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoTransform* SoTransform1383 = new SoTransform();
SoTransform1383->setTranslation(new float[]{-8.059,26.809999,-0.1572});
SoShape* SoShape1384 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1385 = new SoVRMLAppearance();
SoMaterial* SoMaterial1386 = new SoMaterial();
SoMaterial1386->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1385->addChild(*SoMaterial1386);

SoImageTexture* SoImageTexture1387 = new SoImageTexture();
SoImageTexture1387->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1385->addChild(*SoImageTexture1387);

SoShape1384->addChild(*SoVRMLAppearance1385);

SoIndexedFaceSet* SoIndexedFaceSet1388 = new SoIndexedFaceSet();
SoIndexedFaceSet1388->setCoordIndex(new int32_t[]{1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1}, 176);
SoIndexedFaceSet1388->setCreaseAngle(3.14159);
SoIndexedFaceSet1388->setTexCoordIndex(new int32_t[]{3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1}, 176);
SoCoordinate* SoCoordinate1389 = new SoCoordinate();
SoCoordinate1389->setPoint(new float[]{0.0742,-1.244,-0.3277,0.4153,-1.216,0.2336,-0.3026,-1.092,0.2392,-0.3843,-0.2231,0.2405,-0.3843,-0.2294,-0.2329,0.4256,0.0008,-0.2389,-0.4203,0.1179,-0.242,0.4256,0.0071,0.2345,-0.4203,0.1243,0.2314,0.2414,0.2175,-0.2446,0.2414,0.2239,0.2288,-0.1761,0.2121,0.2291,-0.1761,0.2057,-0.2443,0.0255,-0.0287,-0.3639,0.0255,-0.0188,0.3737,0.0745,-1.235,0.3544,-0.1793,-1.484,0.2301,0.0653,-1.497,0.2372,0.4151,-1.222,-0.2219,0.3461,-1.403,0.1992,0.3459,-1.408,-0.177,-0.3028,-1.098,-0.234,-0.1795,-1.49,-0.2018,0.0641,-1.531,-0.2017}, 72);
SoIndexedFaceSet1388->setCoord(*SoCoordinate1389);

SoTextureCoordinate* SoTextureCoordinate1390 = new SoTextureCoordinate();
SoTextureCoordinate1390->setPoint(new float[]{0.908,0.1649,0.8228,0.1342,0.8238,0.1612,0.9018,0.1387,0.818,0.1313,0.8186,0.139,0.9163,0.135,0.9232,0.1611,0.8031,0.1401,0.8044,0.1596,0.8199,0.1584,0.8025,0.1324,0.7986,0.1359,0.8014,0.1628,0.8179,0.1294,0.8023,0.1305,0.8179,0.1291,0.8023,0.1302,0.8199,0.1671,0.8202,0.1672,0.902,0.1343,0.914,0.1313,0.8058,0.1681,0.8058,0.1689,0.9035,0.1654,0.8978,0.139,0.927,0.1595,0.9196,0.1336,0.9092,0.1696,0.9243,0.1658,0.9003,0.1324,0.9142,0.1283}, 64);
SoIndexedFaceSet1388->setTexCoord(*SoTextureCoordinate1390);

SoShape1384->setGeometry(*SoIndexedFaceSet1388);

SoTransform1383->addChild(*SoShape1384);

SoHAnimSegment1382->addChild(*SoTransform1383);

SoHAnimJoint1381->addChildren(*SoHAnimSegment1382);

SoHAnimJoint* SoHAnimJoint1391 = new SoHAnimJoint();
SoHAnimJoint1391->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1391->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1391->setCenter(new float[]{-8.013,25.57,-0.1671});
SoHAnimJoint1391->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1391->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1392 = new SoHAnimSegment();
SoHAnimSegment1392->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSegment1392->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoTransform* SoTransform1393 = new SoTransform();
SoTransform1393->setTranslation(new float[]{-8.013,25.57,-0.1671});
SoShape* SoShape1394 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1395 = new SoVRMLAppearance();
SoMaterial* SoMaterial1396 = new SoMaterial();
SoMaterial1396->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1395->addChild(*SoMaterial1396);

SoImageTexture* SoImageTexture1397 = new SoImageTexture();
SoImageTexture1397->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1395->addChild(*SoImageTexture1397);

SoShape1394->addChild(*SoVRMLAppearance1395);

SoIndexedFaceSet* SoIndexedFaceSet1398 = new SoIndexedFaceSet();
SoIndexedFaceSet1398->setCoordIndex(new int32_t[]{0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1}, 248);
SoIndexedFaceSet1398->setCreaseAngle(3.14159);
SoIndexedFaceSet1398->setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1}, 248);
SoCoordinate* SoCoordinate1399 = new SoCoordinate();
SoCoordinate1399->setPoint(new float[]{-0.3088,-0.1396,0.2568,-0.309,-0.146,-0.2166,-0.2521,-0.4949,0.2523,-0.2525,-0.5053,-0.1929,0.3444,-0.4714,0.2712,0.0718,-0.4844,0.3472,0.344,-0.4826,-0.2124,0.0712,-0.4992,-0.2979,-0.1267,-0.8325,0.2296,-0.1271,-0.8423,-0.17,0.3449,-0.8222,0.2244,0.1082,-0.8209,0.3006,0.3446,-0.8316,-0.1582,0.1077,-0.8339,-0.24,-0.1586,-0.9,0.0299,0.3093,-0.9026,0.0297,0.1093,-0.9463,0.0305,-0.1544,-0.884,0.14,0.3132,-0.8892,-0.0631,0.0963,-0.9202,0.1766,-0.1546,-0.8902,-0.0746,0.3134,-0.8839,0.1274,0.0959,-0.9309,-0.1063,0.3697,0.028,0.2435,-0.3484,0.1453,-0.2241,-0.3482,0.1516,0.2492,-0.1398,0.245,0.2295,-0.14,0.2392,-0.2089,0.2187,0.2486,0.2292,0.3695,0.022,-0.212,0.2185,0.2427,-0.2093,0.0269,0.0093,0.3642,0.0266,0.0001,-0.3179}, 99);
SoIndexedFaceSet1398->setCoord(*SoCoordinate1399);

SoTextureCoordinate* SoTextureCoordinate1400 = new SoTextureCoordinate();
SoTextureCoordinate1400->setPoint(new float[]{0.8204,0.1649,0.8238,0.1612,0.8199,0.1584,0.8044,0.1596,0.8014,0.1628,0.8049,0.166,0.807,0.1802,0.8204,0.1792,0.8232,0.1783,0.8982,0.1238,0.9018,0.1387,0.9123,0.1202,0.9163,0.135,0.8038,0.18,0.8141,0.1881,0.8169,0.1876,0.8192,0.1861,0.8213,0.1861,0.8983,0.1142,0.9079,0.1117,0.9004,0.112,0.9052,0.1108,0.8067,0.1872,0.8088,0.1869,0.8179,0.1883,0.8142,0.1891,0.8114,0.188,0.8106,0.1889,0.9027,0.111,0.8192,0.1563,0.8048,0.1573,0.8192,0.156,0.8048,0.1571,0.8978,0.139,0.9196,0.1336,0.8956,0.1239,0.9147,0.119,0.8959,0.1141,0.9101,0.1105,0.8989,0.1113,0.9025,0.1098,0.906,0.1094,0.9033,0.1433,0.9173,0.1398}, 88);
SoIndexedFaceSet1398->setTexCoord(*SoTextureCoordinate1400);

SoShape1394->setGeometry(*SoIndexedFaceSet1398);

SoTransform1393->addChild(*SoShape1394);

SoHAnimSegment1392->addChild(*SoTransform1393);

SoHAnimJoint1391->addChildren(*SoHAnimSegment1392);

SoHAnimJoint1381->addChildren(*SoHAnimJoint1391);

SoHAnimJoint1371->addChildren(*SoHAnimJoint1381);

SoHAnimJoint1361->addChildren(*SoHAnimJoint1371);

SoHAnimJoint1351->addChildren(*SoHAnimJoint1361);

SoHAnimJoint1251->addChildren(*SoHAnimJoint1351);

SoHAnimJoint* SoHAnimJoint1401 = new SoHAnimJoint();
SoHAnimJoint1401->X3DNode::setName(QString("r_midcarpal_4_5"));
SoHAnimJoint1401->setDEF(QString("hanim_r_midcarpal_4_5"));
SoHAnimJoint1401->setCenter(new float[]{-8.032,31.370001,-1.144});
SoHAnimJoint1401->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1401->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1402 = new SoHAnimSegment();
SoHAnimSegment1402->X3DNode::setName(QString("r_hamate"));
SoHAnimSegment1402->setDEF(QString("hanim_r_hamate"));
SoTransform* SoTransform1403 = new SoTransform();
SoTransform1403->setTranslation(new float[]{-8.032,31.370001,-1.144});
SoShape* SoShape1404 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1405 = new SoVRMLAppearance();
SoMaterial* SoMaterial1406 = new SoMaterial();
SoMaterial1406->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1405->addChild(*SoMaterial1406);

SoImageTexture* SoImageTexture1407 = new SoImageTexture();
SoImageTexture1407->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1405->addChild(*SoImageTexture1407);

SoShape1404->addChild(*SoVRMLAppearance1405);

SoIndexedFaceSet* SoIndexedFaceSet1408 = new SoIndexedFaceSet();
SoIndexedFaceSet1408->setCoordIndex(new int32_t[]{6,3,4,-1,4,7,6,-1,7,0,9,-1,9,8,7,-1,11,2,1,-1,1,5,11,-1,5,1,3,-1,3,6,5,-1,2,11,10,-1,4,0,7,-1,15,16,17,-1,14,15,17,-1,13,14,17,-1,20,21,22,-1,27,24,25,-1,25,26,27,-1,17,18,12,-1,12,13,17,-1,23,19,20,-1,20,22,23,-1,9,0,13,-1,13,12,9,-1,0,4,14,-1,14,13,0,-1,4,3,15,-1,15,14,4,-1,3,1,16,-1,16,15,3,-1,1,2,17,-1,17,16,1,-1,2,10,18,-1,18,17,2,-1,10,9,12,-1,12,18,10,-1,11,5,20,-1,20,19,11,-1,5,6,21,-1,21,20,5,-1,6,7,22,-1,22,21,6,-1,7,8,23,-1,23,22,7,-1,8,11,19,-1,19,23,8,-1,8,9,25,-1,25,24,8,-1,9,10,26,-1,26,25,9,-1,10,11,27,-1,27,26,10,-1,11,8,24,-1,24,27,11,-1}, 208);
SoIndexedFaceSet1408->setCreaseAngle(3.14159);
SoIndexedFaceSet1408->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,3,4,5,-1,5,6,3,-1,7,8,9,-1,9,10,7,-1,10,9,29,-1,29,28,10,-1,8,7,11,-1,2,4,3,-1,14,15,16,-1,13,14,16,-1,12,13,16,-1,35,36,37,-1,23,38,39,-1,39,22,23,-1,16,24,25,-1,25,12,16,-1,26,27,17,-1,17,19,26,-1,5,4,12,-1,12,25,5,-1,4,2,13,-1,13,12,4,-1,2,1,14,-1,14,13,2,-1,29,9,33,-1,33,32,29,-1,9,8,34,-1,34,33,9,-1,8,11,40,-1,40,34,8,-1,11,30,41,-1,41,40,11,-1,7,10,35,-1,35,43,7,-1,10,28,36,-1,36,35,10,-1,0,3,19,-1,19,18,0,-1,3,6,26,-1,26,19,3,-1,31,7,43,-1,43,42,31,-1,6,5,21,-1,21,20,6,-1,30,11,22,-1,22,39,30,-1,11,7,23,-1,23,22,11,-1,7,31,38,-1,38,23,7,-1}, 208);
SoCoordinate* SoCoordinate1409 = new SoCoordinate();
SoCoordinate1409->setPoint(new float[]{-0.7573,-0.8348,-0.0837,0.4564,-0.7476,-0.5366,0.6059,-0.8342,-0.0839,-0.0802,-0.7042,-0.6722,-0.5794,-0.751,-0.5355,0.4299,-0.0336,-0.0706,-0.0854,-0.0164,-0.3649,-0.6165,-0.0333,-0.0701,-0.7213,0.1352,0.5926,-0.7943,-0.8895,0.6002,0.648,-0.8871,0.6001,0.5902,0.1351,0.5939,-0.6385,-1.05,0.5965,-0.6101,-1.017,-0.0884,-0.4568,-0.9463,-0.4747,-0.0724,-0.9059,-0.5792,0.3357,-0.9442,-0.4714,0.4637,-1.017,-0.0877,0.5294,-1.048,0.5964,0.4096,0.4323,0.6564,0.2986,0.2698,-0.012,-0.0779,0.2847,-0.2247,-0.4802,0.269,-0.0066,-0.5535,0.4329,0.6554,-0.6285,0.0491,0.6714,-0.6895,-0.8073,0.6712,0.5838,-0.8052,0.6711,0.4997,0.049,0.6726}, 84);
SoIndexedFaceSet1408->setCoord(*SoCoordinate1409);

SoTextureCoordinate* SoTextureCoordinate1410 = new SoTextureCoordinate();
SoTextureCoordinate1410->setPoint(new float[]{0.7624,0.0345,0.7525,0.0502,0.7571,0.0508,0.7729,0.0334,0.7734,0.0512,0.7924,0.0508,0.791,0.0281,0.9531,0.2644,0.9665,0.2386,0.9827,0.2362,0.9706,0.2558,0.9479,0.2423,0.7736,0.0553,0.7595,0.0549,0.7559,0.0544,0.7596,0.0549,0.7736,0.0553,0.7721,0.0268,0.7644,0.0276,0.7723,0.0268,0.7938,0.0298,0.795,0.0487,0.9457,0.2448,0.9501,0.2632,0.7926,0.0543,0.7926,0.0544,0.7903,0.0215,0.7903,0.0215,0.9803,0.2531,0.9874,0.236,0.9479,0.2423,0.9532,0.2644,0.9832,0.2324,0.9795,0.2325,0.9656,0.2346,0.9721,0.2624,0.9795,0.2602,0.9719,0.2625,0.9502,0.2632,0.9457,0.2447,0.9471,0.2389,0.9471,0.2388,0.9551,0.2707,0.955,0.2707}, 88);
SoIndexedFaceSet1408->setTexCoord(*SoTextureCoordinate1410);

SoShape1404->setGeometry(*SoIndexedFaceSet1408);

SoTransform1403->addChild(*SoShape1404);

SoHAnimSegment1402->addChild(*SoTransform1403);

SoHAnimJoint1401->addChildren(*SoHAnimSegment1402);

SoHAnimJoint* SoHAnimJoint1411 = new SoHAnimJoint();
SoHAnimJoint1411->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint1411->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint1411->setCenter(new float[]{-8.032,30.5,-0.8853});
SoHAnimJoint1411->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1411->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1412 = new SoHAnimSegment();
SoHAnimSegment1412->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimSegment1412->setDEF(QString("hanim_r_metacarpal_4"));
SoTransform* SoTransform1413 = new SoTransform();
SoTransform1413->setTranslation(new float[]{-8.032,30.5,-0.8853});
SoShape* SoShape1414 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1415 = new SoVRMLAppearance();
SoMaterial* SoMaterial1416 = new SoMaterial();
SoMaterial1416->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1415->addChild(*SoMaterial1416);

SoImageTexture* SoImageTexture1417 = new SoImageTexture();
SoImageTexture1417->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1415->addChild(*SoImageTexture1417);

SoShape1414->addChild(*SoVRMLAppearance1415);

SoIndexedFaceSet* SoIndexedFaceSet1418 = new SoIndexedFaceSet();
SoIndexedFaceSet1418->setCoordIndex(new int32_t[]{9,6,0,-1,0,2,9,-1,6,10,4,-1,4,0,6,-1,7,8,3,-1,3,1,7,-1,7,1,5,-1,5,11,7,-1,12,13,14,-1,14,15,12,-1,34,35,32,-1,32,33,34,-1,17,20,21,-1,21,16,17,-1,29,30,31,-1,31,24,29,-1,17,18,19,-1,19,20,17,-1,24,25,28,-1,28,29,24,-1,9,2,13,-1,13,12,9,-1,16,21,22,-1,22,23,16,-1,3,8,15,-1,15,14,3,-1,28,25,26,-1,26,27,28,-1,2,0,17,-1,17,16,2,-1,0,4,18,-1,18,17,0,-1,4,5,19,-1,19,18,4,-1,5,1,20,-1,20,19,5,-1,1,3,21,-1,21,20,1,-1,3,14,22,-1,22,21,3,-1,14,13,23,-1,23,22,14,-1,13,2,16,-1,16,23,13,-1,6,9,25,-1,25,24,6,-1,9,12,26,-1,26,25,9,-1,12,15,27,-1,27,26,12,-1,15,8,28,-1,28,27,15,-1,8,7,29,-1,29,28,8,-1,7,11,30,-1,30,29,7,-1,11,10,31,-1,31,30,11,-1,10,6,24,-1,24,31,10,-1,4,10,33,-1,33,32,4,-1,10,11,34,-1,34,33,10,-1,11,5,35,-1,35,34,11,-1,5,4,32,-1,32,35,5,-1}, 272);
SoIndexedFaceSet1418->setCreaseAngle(3.14159);
SoIndexedFaceSet1418->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,1,4,5,-1,5,2,1,-1,38,39,40,-1,40,9,38,-1,38,9,41,-1,41,42,38,-1,12,13,14,-1,14,15,12,-1,16,43,44,-1,44,45,16,-1,20,21,22,-1,22,23,20,-1,48,49,50,-1,50,51,48,-1,20,28,29,-1,29,21,20,-1,27,30,31,-1,31,24,27,-1,0,3,13,-1,13,12,0,-1,23,22,32,-1,32,33,23,-1,8,7,15,-1,15,14,8,-1,31,30,34,-1,34,35,31,-1,3,2,20,-1,20,23,3,-1,2,5,28,-1,28,20,2,-1,37,41,53,-1,53,52,37,-1,41,9,46,-1,46,53,41,-1,9,40,47,-1,47,46,9,-1,8,14,32,-1,32,22,8,-1,14,13,33,-1,33,32,14,-1,13,3,23,-1,23,33,13,-1,1,0,30,-1,30,27,1,-1,0,12,34,-1,34,30,0,-1,12,15,35,-1,35,34,12,-1,15,7,31,-1,31,35,15,-1,7,6,24,-1,24,31,7,-1,38,42,49,-1,49,48,38,-1,11,4,26,-1,26,25,11,-1,4,1,27,-1,27,26,4,-1,5,4,19,-1,19,18,5,-1,36,42,16,-1,16,45,36,-1,42,41,43,-1,43,16,42,-1,10,5,18,-1,18,17,10,-1}, 272);
SoCoordinate* SoCoordinate1419 = new SoCoordinate();
SoCoordinate1419->setPoint(new float[]{-0.6701,-1.109,-0.381,0.5002,-1.109,-0.381,-0.5854,-2.053,-0.382,0.3852,-2.055,-0.3819,-0.7573,0.0375,-0.3424,0.6059,0.038,-0.3427,-0.7345,-1.187,0.3483,0.52,-1.187,0.3483,0.3873,-2.129,0.3239,-0.6104,-2.129,0.3239,-0.7943,-0.0173,0.3415,0.648,-0.0149,0.3414,-0.5243,-2.308,0.28,-0.497,-2.261,-0.3321,0.2939,-2.263,-0.3318,0.2957,-2.308,0.28,-0.4894,-2.031,-0.4703,-0.5729,-1.093,-0.5036,-0.6547,0.0614,-0.4454,0.4956,0.0619,-0.4456,0.4036,-1.089,-0.5034,0.2898,-2.031,-0.4702,0.2275,-2.181,-0.4572,-0.4297,-2.18,-0.4575,-0.6305,-1.198,0.4843,-0.5217,-2.087,0.416,-0.4533,-2.218,0.3849,0.2266,-2.218,0.3849,0.2933,-2.087,0.416,0.4181,-1.194,0.4842,0.5616,-0.0205,0.464,-0.6844,-0.0225,0.4641,-0.6316,0.1344,-0.2698,-0.6522,0.1035,0.257,0.5315,0.1057,0.257,0.4839,0.1347,-0.27}, 108);
SoIndexedFaceSet1418->setCoord(*SoCoordinate1419);

SoTextureCoordinate* SoTextureCoordinate1420 = new SoTextureCoordinate();
SoTextureCoordinate1420->setPoint(new float[]{0.7939,0.1016,0.7938,0.0824,0.7694,0.0827,0.766,0.1014,0.7924,0.0508,0.7734,0.0512,0.7938,0.0824,0.7939,0.1016,0.766,0.1015,0.965,0.2069,0.7734,0.0512,0.7924,0.0507,0.7909,0.1057,0.7677,0.1056,0.7677,0.1057,0.7909,0.1057,0.9517,0.2441,0.7765,0.0488,0.7765,0.0488,0.789,0.0484,0.7643,0.0825,0.7643,0.0824,0.7614,0.1009,0.7614,0.1009,0.7991,0.0823,0.7971,0.0505,0.7971,0.0505,0.7991,0.0824,0.7688,0.0511,0.7688,0.0511,0.7994,0.1003,0.7994,0.1003,0.7625,0.1038,0.7625,0.1038,0.7972,0.1034,0.7972,0.1034,0.9479,0.2423,0.9665,0.2385,0.941,0.2114,0.9376,0.1925,0.9651,0.1878,0.9665,0.2386,0.9479,0.2423,0.9639,0.2415,0.9639,0.2415,0.9517,0.244,0.9701,0.2063,0.9698,0.1875,0.9358,0.2124,0.9433,0.2434,0.9433,0.2434,0.9358,0.2123,0.9711,0.2379,0.9711,0.2379}, 108);
SoIndexedFaceSet1418->setTexCoord(*SoTextureCoordinate1420);

SoShape1414->setGeometry(*SoIndexedFaceSet1418);

SoTransform1413->addChild(*SoShape1414);

SoHAnimSegment1412->addChild(*SoTransform1413);

SoHAnimJoint1411->addChildren(*SoHAnimSegment1412);

SoHAnimJoint* SoHAnimJoint1421 = new SoHAnimJoint();
SoHAnimJoint1421->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint1421->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint1421->setCenter(new float[]{-8.147,28.18,-0.9529});
SoHAnimJoint1421->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1421->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1422 = new SoHAnimSegment();
SoHAnimSegment1422->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimSegment1422->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoTransform* SoTransform1423 = new SoTransform();
SoTransform1423->setTranslation(new float[]{-8.147,28.18,-0.9529});
SoShape* SoShape1424 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1425 = new SoVRMLAppearance();
SoMaterial* SoMaterial1426 = new SoMaterial();
SoMaterial1426->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1425->addChild(*SoMaterial1426);

SoImageTexture* SoImageTexture1427 = new SoImageTexture();
SoImageTexture1427->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1425->addChild(*SoImageTexture1427);

SoShape1424->addChild(*SoVRMLAppearance1425);

SoIndexedFaceSet* SoIndexedFaceSet1428 = new SoIndexedFaceSet();
SoIndexedFaceSet1428->setCoordIndex(new int32_t[]{3,23,22,-1,22,4,3,-1,5,32,31,-1,31,6,5,-1,4,22,44,-1,0,5,6,-1,6,14,0,-1,4,1,17,-1,17,3,4,-1,0,2,7,-1,7,5,0,-1,7,2,1,-1,1,4,7,-1,7,43,45,-1,45,5,7,-1,4,44,43,-1,43,7,4,-1,45,32,5,-1,15,17,11,-1,11,13,15,-1,0,14,10,-1,10,8,0,-1,17,1,9,-1,9,11,17,-1,2,0,8,-1,8,12,2,-1,1,2,12,-1,12,9,1,-1,14,15,13,-1,13,10,14,-1,10,13,12,-1,12,8,10,-1,11,9,12,-1,12,13,11,-1,3,40,23,-1,14,6,16,-1,16,15,14,-1,16,3,17,-1,17,15,16,-1,16,6,42,-1,42,41,16,-1,3,16,41,-1,41,40,3,-1,42,6,31,-1,21,18,19,-1,19,20,21,-1,22,23,19,-1,19,18,22,-1,26,27,28,-1,25,26,28,-1,24,25,28,-1,24,28,29,-1,24,29,30,-1,31,32,21,-1,21,20,31,-1,33,34,35,-1,35,36,37,-1,33,35,37,-1,33,37,38,-1,33,38,39,-1,40,41,26,-1,26,25,40,-1,41,42,27,-1,27,26,41,-1,42,31,28,-1,28,27,42,-1,31,20,29,-1,29,28,31,-1,20,19,30,-1,30,29,20,-1,19,23,24,-1,24,30,19,-1,23,40,25,-1,25,24,23,-1,43,44,36,-1,36,35,43,-1,44,22,37,-1,37,36,44,-1,22,18,38,-1,38,37,22,-1,18,21,39,-1,39,38,18,-1,21,32,33,-1,33,39,21,-1,32,45,34,-1,34,33,32,-1,45,43,35,-1,35,34,45,-1}, 352);
SoIndexedFaceSet1428->setCreaseAngle(3.14159);
SoIndexedFaceSet1428->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,46,47,-1,47,7,4,-1,3,2,8,-1,9,4,7,-1,7,10,9,-1,3,11,12,-1,12,0,3,-1,9,48,49,-1,49,4,9,-1,14,13,11,-1,11,3,14,-1,49,50,51,-1,51,4,49,-1,3,8,15,-1,15,14,3,-1,51,46,4,-1,17,12,18,-1,18,19,17,-1,9,10,20,-1,20,21,9,-1,12,11,22,-1,22,18,12,-1,48,9,21,-1,21,54,48,-1,11,13,23,-1,23,22,11,-1,10,52,53,-1,53,20,10,-1,20,53,54,-1,54,21,20,-1,18,22,23,-1,23,19,18,-1,0,24,1,-1,10,7,55,-1,55,52,10,-1,25,0,12,-1,12,17,25,-1,55,7,56,-1,56,57,55,-1,0,25,27,-1,27,24,0,-1,56,7,47,-1,31,28,29,-1,29,30,31,-1,2,1,29,-1,29,28,2,-1,34,35,36,-1,33,34,36,-1,32,33,36,-1,32,36,37,-1,32,37,38,-1,6,5,31,-1,31,30,6,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,39,43,44,-1,39,44,45,-1,24,27,34,-1,34,33,24,-1,27,26,35,-1,35,34,27,-1,26,6,36,-1,36,35,26,-1,6,30,37,-1,37,36,6,-1,30,29,38,-1,38,37,30,-1,29,1,32,-1,32,38,29,-1,1,24,33,-1,33,32,1,-1,15,8,42,-1,42,41,15,-1,8,2,43,-1,43,42,8,-1,2,28,44,-1,44,43,2,-1,28,31,45,-1,45,44,28,-1,31,5,39,-1,39,45,31,-1,5,16,40,-1,40,39,5,-1,16,15,41,-1,41,40,16,-1}, 352);
SoCoordinate* SoCoordinate1429 = new SoCoordinate();
SoCoordinate1429->setPoint(new float[]{0.5138,-1.2,-0.1973,-0.3321,-1.094,-0.2008,0.1137,-1.228,-0.3178,-0.411,-0.0395,0.2967,-0.4111,0.0046,-0.2029,0.4652,0.0046,-0.2029,0.4652,-0.0395,0.2967,0.0566,-0.1,-0.3284,0.4393,-1.371,-0.1653,-0.1722,-1.457,-0.1917,0.4393,-1.361,0.2347,-0.1722,-1.444,0.2676,0.1147,-1.489,-0.1915,0.1147,-1.476,0.2775,0.5138,-1.189,0.26,0.1137,-1.211,0.3945,0.0566,-0.1878,0.3836,-0.3321,-1.083,0.2565,-0.3332,0.5222,-0.2966,-0.3334,0.4616,0.3736,0.3997,0.4616,0.3736,0.4034,0.5222,-0.2966,-0.47,0.2688,-0.3145,-0.495,0.1933,0.3915,-0.4732,0.206,0.4381,-0.389,0.0041,0.442,0.0557,-0.1381,0.4291,0.44,0.0026,0.4421,0.4708,0.2058,0.4382,0.3791,0.4624,0.4513,-0.3159,0.4624,0.4513,0.5028,0.1933,0.3915,0.5007,0.2672,-0.3143,0.452,0.2987,-0.3662,0.4196,0.0626,-0.374,0.0554,-0.0537,-0.3484,-0.3712,0.0655,-0.3743,-0.4489,0.2983,-0.3662,-0.3034,0.5285,-0.3426,0.3668,0.5285,-0.3426,-0.411,-0.0513,0.403,0.0566,-0.1886,0.3999,0.4652,-0.0513,0.403,0.0596,-0.0984,-0.3396,-0.3993,0.0128,-0.3296,0.4652,0.0128,-0.3296}, 138);
SoIndexedFaceSet1428->setCoord(*SoCoordinate1429);

SoTextureCoordinate* SoTextureCoordinate1430 = new SoTextureCoordinate();
SoTextureCoordinate1430->setPoint(new float[]{0.7878,0.1071,0.7939,0.1016,0.766,0.1014,0.7709,0.1068,0.9594,0.1833,0.766,0.1015,0.7939,0.1016,0.9426,0.186,0.7648,0.1066,0.9545,0.1568,0.9398,0.1599,0.771,0.1315,0.7861,0.131,0.767,0.1345,0.7667,0.1094,0.7644,0.1092,0.7648,0.1066,0.7904,0.1338,0.786,0.139,0.7863,0.1397,0.9402,0.1559,0.9531,0.1532,0.7709,0.1396,0.7709,0.1403,0.794,0.107,0.7917,0.1102,0.794,0.107,0.7939,0.1101,0.7675,0.0958,0.7934,0.0956,0.7934,0.0956,0.7675,0.0958,0.7967,0.1011,0.7964,0.1056,0.7964,0.1088,0.7964,0.1057,0.7967,0.1011,0.7958,0.0955,0.7958,0.0955,0.7633,0.1008,0.7625,0.1056,0.7622,0.1084,0.7625,0.1055,0.7633,0.1008,0.765,0.0957,0.765,0.0957,0.9651,0.1878,0.9376,0.1925,0.9583,0.1554,0.963,0.1801,0.9654,0.1799,0.9654,0.1826,0.9354,0.1602,0.9385,0.1536,0.9536,0.1504,0.9383,0.1837,0.9366,0.1872,0.9361,0.1842}, 116);
SoIndexedFaceSet1428->setTexCoord(*SoTextureCoordinate1430);

SoShape1424->setGeometry(*SoIndexedFaceSet1428);

SoTransform1423->addChild(*SoShape1424);

SoHAnimSegment1422->addChild(*SoTransform1423);

SoHAnimJoint1421->addChildren(*SoHAnimSegment1422);

SoHAnimJoint* SoHAnimJoint1431 = new SoHAnimJoint();
SoHAnimJoint1431->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1431->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1431->setCenter(new float[]{-8.059,26.959999,-0.9176});
SoHAnimJoint1431->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1431->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1432 = new SoHAnimSegment();
SoHAnimSegment1432->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimSegment1432->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoTransform* SoTransform1433 = new SoTransform();
SoTransform1433->setTranslation(new float[]{-8.059,26.959999,-0.9176});
SoShape* SoShape1434 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1435 = new SoVRMLAppearance();
SoMaterial* SoMaterial1436 = new SoMaterial();
SoMaterial1436->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1435->addChild(*SoMaterial1436);

SoImageTexture* SoImageTexture1437 = new SoImageTexture();
SoImageTexture1437->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1435->addChild(*SoImageTexture1437);

SoShape1434->addChild(*SoVRMLAppearance1435);

SoIndexedFaceSet* SoIndexedFaceSet1438 = new SoIndexedFaceSet();
SoIndexedFaceSet1438->setCoordIndex(new int32_t[]{1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1}, 176);
SoIndexedFaceSet1438->setCreaseAngle(3.14159);
SoIndexedFaceSet1438->setTexCoordIndex(new int32_t[]{3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1}, 176);
SoCoordinate* SoCoordinate1439 = new SoCoordinate();
SoCoordinate1439->setPoint(new float[]{0.0823,-1.173,-0.2984,0.4234,-1.145,0.233,-0.2949,-1.031,0.2378,-0.3843,-0.1818,0.2296,-0.3843,-0.1915,-0.2186,0.4256,0.0168,-0.2326,-0.4203,0.1233,-0.236,0.4256,0.0279,0.2247,-0.4203,0.1344,0.2212,0.2414,0.2148,-0.2328,0.2414,0.2245,0.2154,-0.1761,0.2138,0.2158,-0.1761,0.2041,-0.2324,0.0255,-0.0114,-0.3531,0.0255,0.0059,0.3593,0.0827,-1.161,0.3475,-0.1702,-1.388,0.2311,0.0744,-1.4,0.2378,0.4231,-1.153,-0.1983,0.3548,-1.316,0.2013,0.3546,-1.322,-0.1549,-0.2952,-1.04,-0.2103,-0.1705,-1.395,-0.1779,0.0732,-1.433,-0.1776}, 72);
SoIndexedFaceSet1438->setCoord(*SoCoordinate1439);

SoTextureCoordinate* SoTextureCoordinate1440 = new SoTextureCoordinate();
SoTextureCoordinate1440->setPoint(new float[]{0.9398,0.1599,0.7904,0.1338,0.7888,0.1598,0.9363,0.1341,0.7861,0.131,0.7859,0.138,0.9502,0.1313,0.9545,0.1568,0.7712,0.1385,0.7707,0.1575,0.7854,0.1571,0.771,0.1315,0.767,0.1345,0.7676,0.1604,0.786,0.1292,0.7713,0.1297,0.786,0.129,0.7713,0.1294,0.7847,0.165,0.7849,0.1652,0.9369,0.1301,0.9483,0.1278,0.7712,0.1654,0.7712,0.1661,0.9354,0.1602,0.9325,0.1343,0.9583,0.1554,0.9533,0.1301,0.9406,0.1642,0.9551,0.1612,0.9355,0.1283,0.9488,0.1251}, 64);
SoIndexedFaceSet1438->setTexCoord(*SoTextureCoordinate1440);

SoShape1434->setGeometry(*SoIndexedFaceSet1438);

SoTransform1433->addChild(*SoShape1434);

SoHAnimSegment1432->addChild(*SoTransform1433);

SoHAnimJoint1431->addChildren(*SoHAnimSegment1432);

SoHAnimJoint* SoHAnimJoint1441 = new SoHAnimJoint();
SoHAnimJoint1441->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1441->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1441->setCenter(new float[]{-8.013,25.809999,-0.879});
SoHAnimJoint1441->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1441->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1442 = new SoHAnimSegment();
SoHAnimSegment1442->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSegment1442->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoTransform* SoTransform1443 = new SoTransform();
SoTransform1443->setTranslation(new float[]{-8.013,25.809999,-0.879});
SoShape* SoShape1444 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1445 = new SoVRMLAppearance();
SoMaterial* SoMaterial1446 = new SoMaterial();
SoMaterial1446->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1445->addChild(*SoMaterial1446);

SoImageTexture* SoImageTexture1447 = new SoImageTexture();
SoImageTexture1447->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1445->addChild(*SoImageTexture1447);

SoShape1444->addChild(*SoVRMLAppearance1445);

SoIndexedFaceSet* SoIndexedFaceSet1448 = new SoIndexedFaceSet();
SoIndexedFaceSet1448->setCoordIndex(new int32_t[]{0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1}, 248);
SoIndexedFaceSet1448->setCreaseAngle(3.14159);
SoIndexedFaceSet1448->setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1}, 248);
SoCoordinate* SoCoordinate1449 = new SoCoordinate();
SoCoordinate1449->setPoint(new float[]{-0.3166,-0.1433,0.2079,-0.3169,-0.1519,-0.2403,-0.2442,-0.5193,0.1944,-0.2444,-0.5269,-0.2171,0.3527,-0.4861,0.211,0.0799,-0.5048,0.29,0.3524,-0.4944,-0.236,0.0795,-0.516,-0.3155,-0.1361,-0.8158,0.1702,-0.1363,-0.8223,-0.1824,0.3546,-0.7984,0.165,0.1169,-0.8256,0.2434,0.3544,-0.8046,-0.1727,0.1165,-0.8348,-0.2533,-0.1687,-0.903,-0.0042,0.3182,-0.9029,-0.0045,0.1176,-0.9628,-0.0024,-0.1644,-0.8834,0.0927,0.3222,-0.8834,-0.0869,0.1048,-0.9305,0.1259,-0.1646,-0.8882,-0.0967,0.3224,-0.8794,0.0812,0.1044,-0.9401,-0.1237,0.3778,0.0076,0.1944,-0.3408,0.113,-0.2488,-0.3405,0.1215,0.1993,-0.1324,0.2059,0.1802,-0.1327,0.198,-0.2349,0.2261,0.2084,0.1799,0.3775,-0.0006,-0.2368,0.2258,0.2005,-0.2353,0.0351,-0.0081,0.3088,0.0347,-0.0204,-0.3369}, 99);
SoIndexedFaceSet1448->setCoord(*SoCoordinate1449);

SoTextureCoordinate* SoTextureCoordinate1450 = new SoTextureCoordinate();
SoTextureCoordinate1450->setPoint(new float[]{0.7853,0.163,0.7888,0.1598,0.7854,0.1571,0.7707,0.1575,0.7676,0.1604,0.7706,0.1634,0.7714,0.1739,0.7841,0.1736,0.787,0.1731,0.9344,0.121,0.9363,0.1341,0.9479,0.1182,0.9502,0.1313,0.7684,0.1736,0.7774,0.1846,0.7801,0.1842,0.7824,0.1828,0.7844,0.1829,0.9351,0.111,0.9443,0.1091,0.9372,0.109,0.9418,0.1081,0.7705,0.1833,0.7725,0.1831,0.781,0.1849,0.7774,0.1856,0.7748,0.1843,0.774,0.1852,0.9395,0.1081,0.7849,0.1552,0.7712,0.1555,0.7849,0.1549,0.7712,0.1553,0.9325,0.1343,0.9533,0.1301,0.9319,0.1209,0.9502,0.1172,0.9329,0.1108,0.9464,0.108,0.9358,0.1082,0.9393,0.1069,0.9427,0.1067,0.9372,0.1384,0.9506,0.1357}, 88);
SoIndexedFaceSet1448->setTexCoord(*SoTextureCoordinate1450);

SoShape1444->setGeometry(*SoIndexedFaceSet1448);

SoTransform1443->addChild(*SoShape1444);

SoHAnimSegment1442->addChild(*SoTransform1443);

SoHAnimJoint1441->addChildren(*SoHAnimSegment1442);

SoHAnimJoint1431->addChildren(*SoHAnimJoint1441);

SoHAnimJoint1421->addChildren(*SoHAnimJoint1431);

SoHAnimJoint1411->addChildren(*SoHAnimJoint1421);

SoHAnimJoint1401->addChildren(*SoHAnimJoint1411);

SoHAnimJoint1251->addChildren(*SoHAnimJoint1401);

SoHAnimJoint* SoHAnimJoint1451 = new SoHAnimJoint();
SoHAnimJoint1451->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint1451->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint1451->setCenter(new float[]{-8.056,30.59,-1.457});
SoHAnimJoint1451->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1451->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1452 = new SoHAnimSegment();
SoHAnimSegment1452->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimSegment1452->setDEF(QString("hanim_r_metacarpal_5"));
SoTransform* SoTransform1453 = new SoTransform();
SoTransform1453->setTranslation(new float[]{-8.056,30.59,-1.457});
SoShape* SoShape1454 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1455 = new SoVRMLAppearance();
SoMaterial* SoMaterial1456 = new SoMaterial();
SoMaterial1456->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1455->addChild(*SoMaterial1456);

SoImageTexture* SoImageTexture1457 = new SoImageTexture();
SoImageTexture1457->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1455->addChild(*SoImageTexture1457);

SoShape1454->addChild(*SoVRMLAppearance1455);

SoIndexedFaceSet* SoIndexedFaceSet1458 = new SoIndexedFaceSet();
SoIndexedFaceSet1458->setCoordIndex(new int32_t[]{11,9,0,-1,0,3,11,-1,5,2,1,-1,1,4,5,-1,3,0,2,-1,2,5,3,-1,9,13,8,-1,8,0,9,-1,2,7,6,-1,6,1,2,-1,6,14,10,-1,10,1,6,-1,1,10,12,-1,12,4,1,-1,0,8,7,-1,7,2,0,-1,25,26,27,-1,27,20,25,-1,16,17,18,-1,16,18,19,-1,15,16,19,-1,30,31,32,-1,29,30,32,-1,28,29,32,-1,11,3,16,-1,16,15,11,-1,3,5,17,-1,17,16,3,-1,5,4,18,-1,18,17,5,-1,4,12,19,-1,19,18,4,-1,24,21,22,-1,22,23,24,-1,20,21,24,-1,24,25,20,-1,9,11,21,-1,21,20,9,-1,11,15,22,-1,22,21,11,-1,15,19,23,-1,23,22,15,-1,19,12,24,-1,24,23,19,-1,12,10,25,-1,25,24,12,-1,10,14,26,-1,26,25,10,-1,14,13,27,-1,27,26,14,-1,13,9,20,-1,20,27,13,-1,14,6,29,-1,29,28,14,-1,6,7,30,-1,30,29,6,-1,7,8,31,-1,31,30,7,-1,8,13,32,-1,32,31,8,-1,13,14,28,-1,28,32,13,-1}, 248);
SoIndexedFaceSet1458->setCreaseAngle(3.14159);
SoIndexedFaceSet1458->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,33,34,6,-1,6,35,33,-1,3,2,5,-1,5,4,3,-1,1,8,9,-1,9,2,1,-1,34,37,11,-1,11,6,34,-1,11,12,38,-1,38,6,11,-1,6,38,39,-1,39,35,6,-1,2,9,10,-1,10,5,2,-1,40,16,41,-1,41,42,40,-1,20,21,22,-1,20,22,23,-1,19,20,23,-1,43,44,45,-1,25,43,45,-1,24,25,45,-1,0,3,20,-1,20,19,0,-1,3,4,21,-1,21,20,3,-1,4,7,22,-1,22,21,4,-1,7,14,23,-1,23,22,7,-1,29,30,31,-1,31,32,29,-1,18,30,29,-1,29,15,18,-1,1,0,30,-1,30,18,1,-1,0,19,31,-1,31,30,0,-1,19,23,32,-1,32,31,19,-1,23,14,29,-1,29,32,23,-1,14,13,15,-1,15,29,14,-1,38,12,16,-1,16,40,38,-1,12,36,41,-1,41,16,12,-1,8,1,18,-1,18,17,8,-1,12,11,25,-1,25,24,12,-1,11,37,43,-1,43,25,11,-1,10,9,27,-1,27,26,10,-1,9,8,28,-1,28,27,9,-1,36,12,24,-1,24,45,36,-1}, 248);
SoCoordinate* SoCoordinate1459 = new SoCoordinate();
SoCoordinate1459->setPoint(new float[]{-0.5437,-1.115,-0.3876,0.4574,-1.115,-0.3875,-0.0391,-1.055,-0.5375,-0.5003,-2.035,-0.4225,0.3976,-2.035,-0.4225,-0.0194,-2.01,-0.5522,0.4806,0.0289,-0.2234,-0.0559,0.0724,-0.359,-0.5551,0.0256,-0.2224,-0.6458,-1.204,0.1909,0.5245,-1.204,0.1909,-0.5611,-2.149,0.1899,0.4095,-2.15,0.19,-0.733,-0.0582,0.2295,0.6302,-0.0576,0.2292,-0.4048,-2.339,0.1195,-0.3316,-2.225,-0.3174,-0.0208,-2.205,-0.4092,0.2611,-2.224,-0.3218,0.2696,-2.34,0.1198,-0.5486,-1.22,0.3281,-0.4658,-2.148,0.2836,-0.3509,-2.289,0.2567,0.2127,-2.29,0.257,0.3146,-2.15,0.283,0.4279,-1.216,0.3283,0.5199,-0.0723,0.3338,-0.6304,-0.0728,0.334,0.4381,0.0771,0.139,0.358,0.1199,-0.1192,-0.0563,0.1597,-0.2281,-0.4414,0.1179,-0.1236,-0.5384,0.0772,0.1392}, 99);
SoIndexedFaceSet1458->setCoord(*SoCoordinate1459);

SoTextureCoordinate* SoTextureCoordinate1460 = new SoTextureCoordinate();
SoTextureCoordinate1460->setPoint(new float[]{0.766,0.1014,0.7694,0.0827,0.748,0.0813,0.7455,0.0995,0.7415,0.0989,0.7435,0.0798,0.9864,0.2045,0.7455,0.0995,0.7734,0.0512,0.7571,0.0508,0.7525,0.0502,0.9827,0.2362,0.9665,0.2386,0.7694,0.0827,0.766,0.1015,0.774,0.0829,0.9619,0.2395,0.7782,0.0512,0.774,0.083,0.7619,0.1052,0.7474,0.1039,0.7446,0.1034,0.7473,0.1038,0.7619,0.1052,0.9712,0.2404,0.9799,0.239,0.7566,0.0479,0.7602,0.0485,0.7691,0.0486,0.771,0.1015,0.771,0.1014,0.768,0.1042,0.768,0.1042,0.9897,0.1861,0.991,0.2053,0.9856,0.1862,0.9665,0.2385,0.9874,0.236,0.965,0.2069,0.9651,0.1878,0.9604,0.2075,0.9619,0.2395,0.9604,0.2074,0.9836,0.239,0.98,0.239,0.9712,0.2404}, 92);
SoIndexedFaceSet1458->setTexCoord(*SoTextureCoordinate1460);

SoShape1454->setGeometry(*SoIndexedFaceSet1458);

SoTransform1453->addChild(*SoShape1454);

SoHAnimSegment1452->addChild(*SoTransform1453);

SoHAnimJoint1451->addChildren(*SoHAnimSegment1452);

SoHAnimJoint* SoHAnimJoint1461 = new SoHAnimJoint();
SoHAnimJoint1461->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint1461->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint1461->setCenter(new float[]{-8.132,28.360001,-1.647});
SoHAnimJoint1461->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1461->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1462 = new SoHAnimSegment();
SoHAnimSegment1462->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimSegment1462->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoTransform* SoTransform1463 = new SoTransform();
SoTransform1463->setTranslation(new float[]{-8.132,28.360001,-1.647});
SoShape* SoShape1464 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1465 = new SoVRMLAppearance();
SoMaterial* SoMaterial1466 = new SoMaterial();
SoMaterial1466->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1465->addChild(*SoMaterial1466);

SoImageTexture* SoImageTexture1467 = new SoImageTexture();
SoImageTexture1467->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1465->addChild(*SoImageTexture1467);

SoShape1464->addChild(*SoVRMLAppearance1465);

SoIndexedFaceSet* SoIndexedFaceSet1468 = new SoIndexedFaceSet();
SoIndexedFaceSet1468->setCoordIndex(new int32_t[]{10,11,6,-1,6,8,10,-1,0,9,5,-1,5,3,0,-1,11,1,4,-1,4,6,11,-1,2,0,3,-1,3,7,2,-1,1,2,7,-1,7,4,1,-1,9,10,8,-1,8,5,9,-1,5,8,7,-1,7,3,5,-1,6,4,7,-1,7,8,6,-1,17,2,1,-1,1,13,17,-1,14,25,26,-1,26,15,14,-1,0,14,15,-1,15,9,0,-1,13,1,11,-1,11,12,13,-1,2,17,14,-1,14,0,2,-1,12,36,34,-1,9,15,16,-1,16,10,9,-1,16,12,11,-1,11,10,16,-1,16,15,37,-1,37,35,16,-1,12,16,35,-1,35,36,12,-1,37,15,26,-1,12,34,23,-1,23,13,12,-1,13,23,24,-1,24,17,13,-1,17,24,25,-1,25,14,17,-1,21,20,19,-1,22,21,19,-1,18,22,19,-1,23,19,20,-1,20,24,23,-1,24,20,21,-1,21,25,24,-1,25,21,22,-1,22,26,25,-1,27,33,32,-1,27,32,31,-1,31,30,29,-1,31,29,28,-1,27,31,28,-1,34,18,19,-1,19,23,34,-1,35,29,30,-1,30,36,35,-1,36,30,31,-1,31,34,36,-1,34,31,32,-1,32,18,34,-1,18,32,33,-1,33,22,18,-1,22,33,27,-1,27,26,22,-1,26,27,28,-1,28,37,26,-1,37,28,29,-1,29,35,37,-1}, 288);
SoIndexedFaceSet1468->setCreaseAngle(3.14159);
SoIndexedFaceSet1468->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,1,8,9,-1,9,2,1,-1,40,4,7,-1,7,41,40,-1,8,10,11,-1,11,9,8,-1,5,38,39,-1,39,6,5,-1,6,39,41,-1,41,7,6,-1,2,9,11,-1,11,3,2,-1,12,10,8,-1,8,13,12,-1,14,43,44,-1,44,17,14,-1,4,14,17,-1,17,5,4,-1,13,8,1,-1,1,18,13,-1,40,42,14,-1,14,4,40,-1,18,19,20,-1,5,17,45,-1,45,38,5,-1,21,18,1,-1,1,0,21,-1,45,17,46,-1,46,47,45,-1,18,21,23,-1,23,19,18,-1,46,17,44,-1,18,20,24,-1,24,13,18,-1,13,24,25,-1,25,12,13,-1,42,48,43,-1,43,14,42,-1,28,29,30,-1,27,28,30,-1,26,27,30,-1,24,30,29,-1,29,25,24,-1,25,29,28,-1,28,15,25,-1,15,28,27,-1,27,16,15,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,34,36,37,-1,31,34,37,-1,20,26,30,-1,30,24,20,-1,23,36,35,-1,35,19,23,-1,19,35,34,-1,34,20,19,-1,20,34,33,-1,33,26,20,-1,26,33,32,-1,32,27,26,-1,27,32,31,-1,31,16,27,-1,16,31,37,-1,37,22,16,-1,22,37,36,-1,36,23,22,-1}, 288);
SoCoordinate* SoCoordinate1469 = new SoCoordinate();
SoCoordinate1469->setPoint(new float[]{0.4642,-0.7495,-0.198,-0.3252,-0.6614,-0.2139,0.1225,-0.7652,-0.3144,0.3819,-0.8842,-0.1714,-0.1725,-0.9506,-0.2008,0.3815,-0.8908,0.17,-0.1732,-0.9591,0.196,0.1212,-0.9744,-0.2024,0.1212,-0.9799,0.1724,0.4638,-0.7583,0.2054,0.0985,-0.7824,0.3322,-0.3257,-0.6667,0.2084,-0.3886,-0.1527,0.2568,-0.3804,-0.0337,-0.2228,0.4441,-0.0337,-0.2228,0.4467,-0.1527,0.2568,0.0472,-0.285,0.3442,0.0564,-0.0045,-0.3471,-0.3248,0.3476,0.3745,-0.2574,0.4555,-0.1484,0.0759,0.4741,-0.2587,0.3915,0.4551,-0.1427,0.395,0.3464,0.3802,-0.4245,0.194,-0.2327,0.0564,0.2188,-0.3624,0.4734,0.194,-0.2327,0.4853,0.0785,0.3798,0.4534,0.1007,0.43,0.4249,-0.1391,0.4083,0.0362,-0.2455,0.3725,-0.3609,-0.1363,0.4097,-0.4385,0.1031,0.4238,-0.2998,0.3409,0.4133,0.3633,0.3398,0.4186,-0.4853,0.08,0.3796,0.0442,-0.2871,0.3545,-0.4146,-0.1759,0.3644,0.4498,-0.1759,0.3644}, 114);
SoIndexedFaceSet1468->setCoord(*SoCoordinate1469);

SoTextureCoordinate* SoTextureCoordinate1470 = new SoTextureCoordinate();
SoTextureCoordinate1470->setPoint(new float[]{0.7578,0.1276,0.7543,0.1247,0.753,0.131,0.7531,0.1316,0.9854,0.1598,0.9725,0.1615,0.9734,0.1584,0.9844,0.1569,0.7413,0.123,0.7403,0.1293,0.7378,0.1249,0.7401,0.1299,0.7405,0.104,0.7443,0.1047,0.9859,0.1809,0.7455,0.0995,0.766,0.1015,0.9713,0.1822,0.7589,0.1059,0.7648,0.1066,0.766,0.1014,0.7622,0.1091,0.7648,0.1066,0.7644,0.1092,0.7455,0.0995,0.7415,0.0989,0.7664,0.0954,0.7667,0.0954,0.7485,0.0932,0.7449,0.0928,0.7484,0.0932,0.7683,0.1016,0.7686,0.0957,0.7683,0.0956,0.7679,0.1015,0.7671,0.1055,0.7666,0.1084,0.7674,0.1056,0.9687,0.1615,0.9723,0.1564,0.9888,0.1589,0.9852,0.1547,0.9898,0.1809,0.9856,0.1862,0.9651,0.1878,0.9675,0.1796,0.9654,0.1826,0.9654,0.1799,0.9897,0.1861}, 98);
SoIndexedFaceSet1468->setTexCoord(*SoTextureCoordinate1470);

SoShape1464->setGeometry(*SoIndexedFaceSet1468);

SoTransform1463->addChild(*SoShape1464);

SoHAnimSegment1462->addChild(*SoTransform1463);

SoHAnimJoint1461->addChildren(*SoHAnimSegment1462);

SoHAnimJoint* SoHAnimJoint1471 = new SoHAnimJoint();
SoHAnimJoint1471->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1471->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1471->setCenter(new float[]{-8.058,27.6,-1.651});
SoHAnimJoint1471->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1471->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1472 = new SoHAnimSegment();
SoHAnimSegment1472->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimSegment1472->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoTransform* SoTransform1473 = new SoTransform();
SoTransform1473->setTranslation(new float[]{-8.058,27.6,-1.651});
SoShape* SoShape1474 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1475 = new SoVRMLAppearance();
SoMaterial* SoMaterial1476 = new SoMaterial();
SoMaterial1476->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1475->addChild(*SoMaterial1476);

SoImageTexture* SoImageTexture1477 = new SoImageTexture();
SoImageTexture1477->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1475->addChild(*SoImageTexture1477);

SoShape1474->addChild(*SoVRMLAppearance1475);

SoIndexedFaceSet* SoIndexedFaceSet1478 = new SoIndexedFaceSet();
SoIndexedFaceSet1478->setCoordIndex(new int32_t[]{1,7,14,-1,14,15,1,-1,8,3,14,-1,1,18,5,-1,5,7,1,-1,3,4,21,-1,21,2,3,-1,6,4,3,-1,3,8,6,-1,6,13,4,-1,0,13,5,-1,5,18,0,-1,13,0,21,-1,21,4,13,-1,2,15,14,-1,14,3,2,-1,8,11,12,-1,12,6,8,-1,7,5,9,-1,9,10,7,-1,10,9,12,-1,12,11,10,-1,8,14,10,-1,10,11,8,-1,13,6,12,-1,12,9,13,-1,9,5,13,-1,7,10,14,-1,15,2,16,-1,16,17,15,-1,18,1,19,-1,19,20,18,-1,2,21,22,-1,22,16,2,-1,0,18,20,-1,20,23,0,-1,21,0,23,-1,23,22,21,-1,1,15,17,-1,17,19,1,-1,19,17,23,-1,23,20,19,-1,16,22,23,-1,23,17,16,-1}, 176);
SoIndexedFaceSet1478->setCreaseAngle(3.14159);
SoIndexedFaceSet1478->setTexCoordIndex(new int32_t[]{3,0,24,-1,24,25,3,-1,4,5,1,-1,3,6,7,-1,7,0,3,-1,5,8,9,-1,9,10,5,-1,11,8,5,-1,5,4,11,-1,11,12,8,-1,27,26,7,-1,7,6,27,-1,12,13,9,-1,9,8,12,-1,10,2,1,-1,1,5,10,-1,4,14,15,-1,15,11,4,-1,0,7,29,-1,29,28,0,-1,16,17,15,-1,15,14,16,-1,4,1,16,-1,16,14,4,-1,12,11,15,-1,15,17,12,-1,29,7,26,-1,0,28,24,-1,2,10,18,-1,18,19,2,-1,6,3,20,-1,20,21,6,-1,10,9,22,-1,22,18,10,-1,27,6,21,-1,21,31,27,-1,9,13,23,-1,23,22,9,-1,3,25,30,-1,30,20,3,-1,20,30,31,-1,31,21,20,-1,18,22,23,-1,23,19,18,-1}, 176);
SoCoordinate* SoCoordinate1479 = new SoCoordinate();
SoCoordinate1479->setPoint(new float[]{0.0741,-0.8302,-0.2909,0.4065,-0.7938,0.2106,-0.2852,-0.7166,0.2155,-0.3712,-0.1511,0.2041,-0.3704,-0.1424,-0.1993,0.39,0.0139,-0.1936,-0.3995,0.102,-0.2097,0.3896,0.0051,0.2098,-0.3999,0.0967,0.2127,0.2215,0.1643,-0.2071,0.2211,0.159,0.2152,-0.1513,0.144,0.2149,-0.1509,0.1492,-0.2074,0.0482,-0.0018,-0.31,0.0243,-0.0191,0.3367,0.0741,-0.8107,0.3219,-0.1923,-0.9968,0.2082,-0.0494,-1.016,0.2148,0.4065,-0.8068,-0.1935,0.3533,-0.9288,0.1795,0.3325,-0.9376,-0.1473,-0.2865,-0.7301,-0.2049,-0.1934,-1.008,-0.1699,-0.0523,-1.023,-0.1696}, 72);
SoIndexedFaceSet1478->setCoord(*SoCoordinate1479);

SoTextureCoordinate* SoTextureCoordinate1480 = new SoTextureCoordinate();
SoTextureCoordinate1480->setPoint(new float[]{0.9725,0.1615,0.7578,0.1276,0.7541,0.1444,0.9727,0.1441,0.7543,0.1247,0.7533,0.1302,0.9851,0.1424,0.9854,0.1598,0.7404,0.1285,0.7384,0.1404,0.7513,0.1418,0.7413,0.123,0.7378,0.1249,0.7355,0.1424,0.7545,0.1231,0.7416,0.1216,0.7546,0.1229,0.7417,0.1214,0.7496,0.1479,0.7498,0.1481,0.9738,0.1409,0.9839,0.1396,0.738,0.1467,0.7381,0.1469,0.9687,0.1616,0.9694,0.1441,0.9888,0.1589,0.988,0.1416,0.9725,0.165,0.9854,0.1633,0.9728,0.1395,0.9846,0.1375}, 64);
SoIndexedFaceSet1478->setTexCoord(*SoTextureCoordinate1480);

SoShape1474->setGeometry(*SoIndexedFaceSet1478);

SoTransform1473->addChild(*SoShape1474);

SoHAnimSegment1472->addChild(*SoTransform1473);

SoHAnimJoint1471->addChildren(*SoHAnimSegment1472);

SoHAnimJoint* SoHAnimJoint1481 = new SoHAnimJoint();
SoHAnimJoint1481->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1481->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1481->setCenter(new float[]{-8.02,26.77,-1.643});
SoHAnimJoint1481->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint1481->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment1482 = new SoHAnimSegment();
SoHAnimSegment1482->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSegment1482->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoTransform* SoTransform1483 = new SoTransform();
SoTransform1483->setTranslation(new float[]{-8.02,26.77,-1.643});
SoShape* SoShape1484 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1485 = new SoVRMLAppearance();
SoMaterial* SoMaterial1486 = new SoMaterial();
SoMaterial1486->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance1485->addChild(*SoMaterial1486);

SoImageTexture* SoImageTexture1487 = new SoImageTexture();
SoImageTexture1487->setUSE(QString("JinLOA4TextureAtlas"));
SoVRMLAppearance1485->addChild(*SoImageTexture1487);

SoShape1484->addChild(*SoVRMLAppearance1485);

SoIndexedFaceSet* SoIndexedFaceSet1488 = new SoIndexedFaceSet();
SoIndexedFaceSet1488->setCoordIndex(new int32_t[]{0,31,25,-1,24,32,1,-1,1,3,2,-1,2,0,1,-1,31,5,4,-1,4,23,31,-1,0,2,5,-1,5,31,0,-1,23,4,6,-1,6,29,23,-1,32,7,3,-1,3,1,32,-1,29,6,7,-1,7,32,29,-1,2,14,17,-1,17,8,2,-1,5,11,10,-1,10,4,5,-1,2,8,11,-1,11,5,2,-1,10,21,18,-1,18,12,10,-1,7,13,9,-1,9,3,7,-1,6,12,13,-1,13,7,6,-1,8,17,19,-1,19,11,8,-1,19,21,10,-1,10,11,19,-1,25,24,1,-1,1,0,25,-1,14,20,22,-1,22,16,14,-1,15,16,22,-1,22,18,15,-1,3,9,20,-1,20,14,3,-1,14,2,3,-1,4,10,12,-1,12,6,4,-1,21,15,18,-1,14,16,19,-1,19,17,14,-1,19,16,15,-1,15,21,19,-1,9,13,22,-1,22,20,9,-1,22,13,12,-1,12,18,22,-1,25,26,27,-1,27,24,25,-1,23,29,30,-1,30,28,23,-1,28,30,27,-1,27,26,28,-1,25,31,28,-1,28,26,25,-1,32,24,27,-1,27,30,32,-1,30,29,32,-1,23,28,31,-1}, 248);
SoIndexedFaceSet1488->setCreaseAngle(3.14159);
SoIndexedFaceSet1488->setTexCoordIndex(new int32_t[]{0,1,2,-1,3,4,5,-1,5,6,7,-1,7,0,5,-1,33,35,9,-1,9,10,33,-1,0,7,8,-1,8,1,0,-1,10,9,11,-1,11,12,10,-1,4,13,6,-1,6,5,4,-1,12,11,36,-1,36,34,12,-1,7,14,15,-1,15,16,7,-1,35,37,18,-1,18,9,35,-1,7,16,17,-1,17,8,7,-1,18,20,21,-1,21,19,18,-1,13,22,23,-1,23,6,13,-1,11,19,38,-1,38,36,11,-1,16,15,24,-1,24,17,16,-1,39,20,18,-1,18,37,39,-1,2,3,5,-1,5,0,2,-1,14,26,27,-1,27,25,14,-1,28,40,41,-1,41,21,28,-1,6,23,26,-1,26,14,6,-1,14,7,6,-1,9,18,19,-1,19,11,9,-1,20,28,21,-1,14,25,24,-1,24,15,14,-1,39,40,28,-1,28,20,39,-1,23,22,27,-1,27,26,23,-1,41,38,19,-1,19,21,41,-1,2,29,30,-1,30,3,2,-1,10,12,43,-1,43,42,10,-1,31,32,30,-1,30,29,31,-1,2,1,31,-1,31,29,2,-1,4,3,30,-1,30,32,4,-1,43,12,34,-1,10,42,33,-1}, 248);
SoCoordinate* SoCoordinate1489 = new SoCoordinate();
SoCoordinate1489->setPoint(new float[]{-0.3162,-0.096,0.2149,-0.3173,-0.1084,-0.2014,-0.2869,-0.4777,0.206,-0.2893,-0.4895,-0.1842,0.356,-0.4937,0.2218,0.0434,-0.4877,0.2966,0.3534,-0.5065,-0.2021,0.0399,-0.5052,-0.2775,-0.2353,-0.7717,0.1879,-0.2379,-0.7821,-0.1539,0.3642,-0.8042,0.183,0.07,-0.801,0.2589,0.3616,-0.8141,-0.1443,0.0662,-0.8155,-0.2226,-0.2582,-0.8386,0.0187,0.3003,-0.8841,0.0184,0.0496,-0.9109,0.0203,-0.2493,-0.8224,0.1126,0.3082,-0.8707,-0.0614,0.0381,-0.8827,0.1448,-0.251,-0.829,-0.0709,0.3096,-0.8651,0.1015,0.0353,-0.8939,-0.0972,0.366,0.0343,0.2021,-0.3269,0.0982,-0.2135,-0.3256,0.1116,0.207,-0.1179,0.1798,0.1886,-0.1179,0.1673,-0.1998,0.2301,0.1882,0.1883,0.366,0.0213,-0.202,0.2301,0.1757,-0.2001,0.032,0.0176,0.3133,0.032,-0.0019,-0.2994}, 99);
SoIndexedFaceSet1488->setCoord(*SoCoordinate1489);

SoTextureCoordinate* SoTextureCoordinate1490 = new SoTextureCoordinate();
SoTextureCoordinate1490->setPoint(new float[]{0.7505,0.1465,0.7541,0.1444,0.7513,0.1418,0.7384,0.1404,0.7355,0.1424,0.7377,0.1451,0.7372,0.1554,0.7483,0.1563,0.7507,0.1564,0.9726,0.1318,0.9727,0.1441,0.9847,0.1302,0.9851,0.1424,0.7347,0.1548,0.7409,0.1641,0.7434,0.1641,0.7455,0.1632,0.7469,0.164,0.9746,0.124,0.9828,0.1229,0.9766,0.1225,0.9807,0.1219,0.7351,0.1625,0.7369,0.1626,0.7443,0.165,0.7408,0.1649,0.7387,0.1637,0.7379,0.1643,0.9788,0.1219,0.7512,0.1402,0.7392,0.1389,0.7512,0.14,0.7393,0.1388,0.9694,0.1441,0.988,0.1416,0.9705,0.1317,0.9868,0.1295,0.9727,0.1237,0.9848,0.1221,0.9756,0.1218,0.9787,0.1209,0.9817,0.1209,0.973,0.1475,0.9849,0.146}, 88);
SoIndexedFaceSet1488->setTexCoord(*SoTextureCoordinate1490);

SoShape1484->setGeometry(*SoIndexedFaceSet1488);

SoTransform1483->addChild(*SoShape1484);

SoHAnimSegment1482->addChild(*SoTransform1483);

SoHAnimJoint1481->addChildren(*SoHAnimSegment1482);

SoHAnimJoint1471->addChildren(*SoHAnimJoint1481);

SoHAnimJoint1461->addChildren(*SoHAnimJoint1471);

SoHAnimJoint1451->addChildren(*SoHAnimJoint1461);

SoHAnimJoint1251->addChildren(*SoHAnimJoint1451);

SoHAnimJoint1241->addChildren(*SoHAnimJoint1251);

SoHAnimJoint1231->addChildren(*SoHAnimJoint1241);

SoHAnimJoint1221->addChildren(*SoHAnimJoint1231);

SoHAnimJoint1211->addChildren(*SoHAnimJoint1221);

SoHAnimJoint771->addChildren(*SoHAnimJoint1211);

SoHAnimJoint761->addChildren(*SoHAnimJoint771);

SoHAnimJoint751->addChildren(*SoHAnimJoint761);

SoHAnimJoint741->addChildren(*SoHAnimJoint751);

SoHAnimJoint731->addChildren(*SoHAnimJoint741);

SoHAnimJoint721->addChildren(*SoHAnimJoint731);

SoHAnimJoint711->addChildren(*SoHAnimJoint721);

SoHAnimJoint701->addChildren(*SoHAnimJoint711);

SoHAnimJoint691->addChildren(*SoHAnimJoint701);

SoHAnimJoint681->addChildren(*SoHAnimJoint691);

SoHAnimJoint671->addChildren(*SoHAnimJoint681);

SoHAnimJoint661->addChildren(*SoHAnimJoint671);

SoHAnimJoint651->addChildren(*SoHAnimJoint661);

SoHAnimJoint641->addChildren(*SoHAnimJoint651);

SoHAnimJoint631->addChildren(*SoHAnimJoint641);

SoHAnimJoint621->addChildren(*SoHAnimJoint631);

SoHAnimJoint611->addChildren(*SoHAnimJoint621);

SoHAnimJoint41->addChildren(*SoHAnimJoint611);

SoHAnimJoint31->addChildren(*SoHAnimJoint41);

SoHAnimHumanoid23->setSkeleton(*SoHAnimJoint31);

SoHAnimJoint* SoHAnimJoint1491 = new SoHAnimJoint();
SoHAnimJoint1491->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1491);

SoHAnimJoint* SoHAnimJoint1492 = new SoHAnimJoint();
SoHAnimJoint1492->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1492);

SoHAnimJoint* SoHAnimJoint1493 = new SoHAnimJoint();
SoHAnimJoint1493->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1493);

SoHAnimJoint* SoHAnimJoint1494 = new SoHAnimJoint();
SoHAnimJoint1494->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1494);

SoHAnimJoint* SoHAnimJoint1495 = new SoHAnimJoint();
SoHAnimJoint1495->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1495);

SoHAnimJoint* SoHAnimJoint1496 = new SoHAnimJoint();
SoHAnimJoint1496->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1496);

SoHAnimJoint* SoHAnimJoint1497 = new SoHAnimJoint();
SoHAnimJoint1497->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1497);

SoHAnimJoint* SoHAnimJoint1498 = new SoHAnimJoint();
SoHAnimJoint1498->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1498);

SoHAnimJoint* SoHAnimJoint1499 = new SoHAnimJoint();
SoHAnimJoint1499->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1499);

SoHAnimJoint* SoHAnimJoint1500 = new SoHAnimJoint();
SoHAnimJoint1500->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1500);

SoHAnimJoint* SoHAnimJoint1501 = new SoHAnimJoint();
SoHAnimJoint1501->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1501);

SoHAnimJoint* SoHAnimJoint1502 = new SoHAnimJoint();
SoHAnimJoint1502->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1502);

SoHAnimJoint* SoHAnimJoint1503 = new SoHAnimJoint();
SoHAnimJoint1503->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1503);

SoHAnimJoint* SoHAnimJoint1504 = new SoHAnimJoint();
SoHAnimJoint1504->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1504);

SoHAnimJoint* SoHAnimJoint1505 = new SoHAnimJoint();
SoHAnimJoint1505->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1505);

SoHAnimJoint* SoHAnimJoint1506 = new SoHAnimJoint();
SoHAnimJoint1506->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1506);

SoHAnimJoint* SoHAnimJoint1507 = new SoHAnimJoint();
SoHAnimJoint1507->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1507);

SoHAnimJoint* SoHAnimJoint1508 = new SoHAnimJoint();
SoHAnimJoint1508->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1508);

SoHAnimJoint* SoHAnimJoint1509 = new SoHAnimJoint();
SoHAnimJoint1509->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1509);

SoHAnimJoint* SoHAnimJoint1510 = new SoHAnimJoint();
SoHAnimJoint1510->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1510);

SoHAnimJoint* SoHAnimJoint1511 = new SoHAnimJoint();
SoHAnimJoint1511->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1511);

SoHAnimJoint* SoHAnimJoint1512 = new SoHAnimJoint();
SoHAnimJoint1512->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1512);

SoHAnimJoint* SoHAnimJoint1513 = new SoHAnimJoint();
SoHAnimJoint1513->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1513);

SoHAnimJoint* SoHAnimJoint1514 = new SoHAnimJoint();
SoHAnimJoint1514->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1514);

SoHAnimJoint* SoHAnimJoint1515 = new SoHAnimJoint();
SoHAnimJoint1515->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1515);

SoHAnimJoint* SoHAnimJoint1516 = new SoHAnimJoint();
SoHAnimJoint1516->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1516);

SoHAnimJoint* SoHAnimJoint1517 = new SoHAnimJoint();
SoHAnimJoint1517->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1517);

SoHAnimJoint* SoHAnimJoint1518 = new SoHAnimJoint();
SoHAnimJoint1518->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1518);

SoHAnimJoint* SoHAnimJoint1519 = new SoHAnimJoint();
SoHAnimJoint1519->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1519);

SoHAnimJoint* SoHAnimJoint1520 = new SoHAnimJoint();
SoHAnimJoint1520->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1520);

SoHAnimJoint* SoHAnimJoint1521 = new SoHAnimJoint();
SoHAnimJoint1521->setUSE(QString("hanim_l_calcaneocuboid"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1521);

SoHAnimJoint* SoHAnimJoint1522 = new SoHAnimJoint();
SoHAnimJoint1522->setUSE(QString("hanim_r_calcaneocuboid"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1522);

SoHAnimJoint* SoHAnimJoint1523 = new SoHAnimJoint();
SoHAnimJoint1523->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1523);

SoHAnimJoint* SoHAnimJoint1524 = new SoHAnimJoint();
SoHAnimJoint1524->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1524);

SoHAnimJoint* SoHAnimJoint1525 = new SoHAnimJoint();
SoHAnimJoint1525->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1525);

SoHAnimJoint* SoHAnimJoint1526 = new SoHAnimJoint();
SoHAnimJoint1526->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1526);

SoHAnimJoint* SoHAnimJoint1527 = new SoHAnimJoint();
SoHAnimJoint1527->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1527);

SoHAnimJoint* SoHAnimJoint1528 = new SoHAnimJoint();
SoHAnimJoint1528->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1528);

SoHAnimJoint* SoHAnimJoint1529 = new SoHAnimJoint();
SoHAnimJoint1529->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1529);

SoHAnimJoint* SoHAnimJoint1530 = new SoHAnimJoint();
SoHAnimJoint1530->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1530);

SoHAnimJoint* SoHAnimJoint1531 = new SoHAnimJoint();
SoHAnimJoint1531->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1531);

SoHAnimJoint* SoHAnimJoint1532 = new SoHAnimJoint();
SoHAnimJoint1532->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1532);

SoHAnimJoint* SoHAnimJoint1533 = new SoHAnimJoint();
SoHAnimJoint1533->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1533);

SoHAnimJoint* SoHAnimJoint1534 = new SoHAnimJoint();
SoHAnimJoint1534->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1534);

SoHAnimJoint* SoHAnimJoint1535 = new SoHAnimJoint();
SoHAnimJoint1535->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1535);

SoHAnimJoint* SoHAnimJoint1536 = new SoHAnimJoint();
SoHAnimJoint1536->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1536);

SoHAnimJoint* SoHAnimJoint1537 = new SoHAnimJoint();
SoHAnimJoint1537->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1537);

SoHAnimJoint* SoHAnimJoint1538 = new SoHAnimJoint();
SoHAnimJoint1538->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1538);

SoHAnimJoint* SoHAnimJoint1539 = new SoHAnimJoint();
SoHAnimJoint1539->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1539);

SoHAnimJoint* SoHAnimJoint1540 = new SoHAnimJoint();
SoHAnimJoint1540->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1540);

SoHAnimJoint* SoHAnimJoint1541 = new SoHAnimJoint();
SoHAnimJoint1541->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1541);

SoHAnimJoint* SoHAnimJoint1542 = new SoHAnimJoint();
SoHAnimJoint1542->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1542);

SoHAnimJoint* SoHAnimJoint1543 = new SoHAnimJoint();
SoHAnimJoint1543->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1543);

SoHAnimJoint* SoHAnimJoint1544 = new SoHAnimJoint();
SoHAnimJoint1544->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1544);

SoHAnimJoint* SoHAnimJoint1545 = new SoHAnimJoint();
SoHAnimJoint1545->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1545);

SoHAnimJoint* SoHAnimJoint1546 = new SoHAnimJoint();
SoHAnimJoint1546->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1546);

SoHAnimJoint* SoHAnimJoint1547 = new SoHAnimJoint();
SoHAnimJoint1547->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1547);

SoHAnimJoint* SoHAnimJoint1548 = new SoHAnimJoint();
SoHAnimJoint1548->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1548);

SoHAnimJoint* SoHAnimJoint1549 = new SoHAnimJoint();
SoHAnimJoint1549->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1549);

SoHAnimJoint* SoHAnimJoint1550 = new SoHAnimJoint();
SoHAnimJoint1550->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1550);

SoHAnimJoint* SoHAnimJoint1551 = new SoHAnimJoint();
SoHAnimJoint1551->setUSE(QString("hanim_l_cuneonavicular_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1551);

SoHAnimJoint* SoHAnimJoint1552 = new SoHAnimJoint();
SoHAnimJoint1552->setUSE(QString("hanim_r_cuneonavicular_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1552);

SoHAnimJoint* SoHAnimJoint1553 = new SoHAnimJoint();
SoHAnimJoint1553->setUSE(QString("hanim_l_cuneonavicular_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1553);

SoHAnimJoint* SoHAnimJoint1554 = new SoHAnimJoint();
SoHAnimJoint1554->setUSE(QString("hanim_r_cuneonavicular_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1554);

SoHAnimJoint* SoHAnimJoint1555 = new SoHAnimJoint();
SoHAnimJoint1555->setUSE(QString("hanim_l_cuneonavicular_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1555);

SoHAnimJoint* SoHAnimJoint1556 = new SoHAnimJoint();
SoHAnimJoint1556->setUSE(QString("hanim_r_cuneonavicular_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1556);

SoHAnimJoint* SoHAnimJoint1557 = new SoHAnimJoint();
SoHAnimJoint1557->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1557);

SoHAnimJoint* SoHAnimJoint1558 = new SoHAnimJoint();
SoHAnimJoint1558->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1558);

SoHAnimJoint* SoHAnimJoint1559 = new SoHAnimJoint();
SoHAnimJoint1559->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1559);

SoHAnimJoint* SoHAnimJoint1560 = new SoHAnimJoint();
SoHAnimJoint1560->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1560);

SoHAnimJoint* SoHAnimJoint1561 = new SoHAnimJoint();
SoHAnimJoint1561->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1561);

SoHAnimJoint* SoHAnimJoint1562 = new SoHAnimJoint();
SoHAnimJoint1562->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1562);

SoHAnimJoint* SoHAnimJoint1563 = new SoHAnimJoint();
SoHAnimJoint1563->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1563);

SoHAnimJoint* SoHAnimJoint1564 = new SoHAnimJoint();
SoHAnimJoint1564->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1564);

SoHAnimJoint* SoHAnimJoint1565 = new SoHAnimJoint();
SoHAnimJoint1565->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1565);

SoHAnimJoint* SoHAnimJoint1566 = new SoHAnimJoint();
SoHAnimJoint1566->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1566);

SoHAnimJoint* SoHAnimJoint1567 = new SoHAnimJoint();
SoHAnimJoint1567->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1567);

SoHAnimJoint* SoHAnimJoint1568 = new SoHAnimJoint();
SoHAnimJoint1568->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1568);

SoHAnimJoint* SoHAnimJoint1569 = new SoHAnimJoint();
SoHAnimJoint1569->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1569);

SoHAnimJoint* SoHAnimJoint1570 = new SoHAnimJoint();
SoHAnimJoint1570->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1570);

SoHAnimJoint* SoHAnimJoint1571 = new SoHAnimJoint();
SoHAnimJoint1571->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1571);

SoHAnimJoint* SoHAnimJoint1572 = new SoHAnimJoint();
SoHAnimJoint1572->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1572);

SoHAnimJoint* SoHAnimJoint1573 = new SoHAnimJoint();
SoHAnimJoint1573->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1573);

SoHAnimJoint* SoHAnimJoint1574 = new SoHAnimJoint();
SoHAnimJoint1574->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1574);

SoHAnimJoint* SoHAnimJoint1575 = new SoHAnimJoint();
SoHAnimJoint1575->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1575);

SoHAnimJoint* SoHAnimJoint1576 = new SoHAnimJoint();
SoHAnimJoint1576->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1576);

SoHAnimJoint* SoHAnimJoint1577 = new SoHAnimJoint();
SoHAnimJoint1577->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1577);

SoHAnimJoint* SoHAnimJoint1578 = new SoHAnimJoint();
SoHAnimJoint1578->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1578);

SoHAnimJoint* SoHAnimJoint1579 = new SoHAnimJoint();
SoHAnimJoint1579->setUSE(QString("hanim_l_metatarsophalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1579);

SoHAnimJoint* SoHAnimJoint1580 = new SoHAnimJoint();
SoHAnimJoint1580->setUSE(QString("hanim_r_metatarsophalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1580);

SoHAnimJoint* SoHAnimJoint1581 = new SoHAnimJoint();
SoHAnimJoint1581->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1581);

SoHAnimJoint* SoHAnimJoint1582 = new SoHAnimJoint();
SoHAnimJoint1582->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1582);

SoHAnimJoint* SoHAnimJoint1583 = new SoHAnimJoint();
SoHAnimJoint1583->setUSE(QString("hanim_l_metatarsophalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1583);

SoHAnimJoint* SoHAnimJoint1584 = new SoHAnimJoint();
SoHAnimJoint1584->setUSE(QString("hanim_r_metatarsophalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1584);

SoHAnimJoint* SoHAnimJoint1585 = new SoHAnimJoint();
SoHAnimJoint1585->setUSE(QString("hanim_l_metatarsophalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1585);

SoHAnimJoint* SoHAnimJoint1586 = new SoHAnimJoint();
SoHAnimJoint1586->setUSE(QString("hanim_r_metatarsophalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1586);

SoHAnimJoint* SoHAnimJoint1587 = new SoHAnimJoint();
SoHAnimJoint1587->setUSE(QString("hanim_l_metatarsophalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1587);

SoHAnimJoint* SoHAnimJoint1588 = new SoHAnimJoint();
SoHAnimJoint1588->setUSE(QString("hanim_r_metatarsophalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1588);

SoHAnimJoint* SoHAnimJoint1589 = new SoHAnimJoint();
SoHAnimJoint1589->setUSE(QString("hanim_l_midcarpal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1589);

SoHAnimJoint* SoHAnimJoint1590 = new SoHAnimJoint();
SoHAnimJoint1590->setUSE(QString("hanim_r_midcarpal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1590);

SoHAnimJoint* SoHAnimJoint1591 = new SoHAnimJoint();
SoHAnimJoint1591->setUSE(QString("hanim_l_midcarpal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1591);

SoHAnimJoint* SoHAnimJoint1592 = new SoHAnimJoint();
SoHAnimJoint1592->setUSE(QString("hanim_r_midcarpal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1592);

SoHAnimJoint* SoHAnimJoint1593 = new SoHAnimJoint();
SoHAnimJoint1593->setUSE(QString("hanim_l_midcarpal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1593);

SoHAnimJoint* SoHAnimJoint1594 = new SoHAnimJoint();
SoHAnimJoint1594->setUSE(QString("hanim_r_midcarpal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1594);

SoHAnimJoint* SoHAnimJoint1595 = new SoHAnimJoint();
SoHAnimJoint1595->setUSE(QString("hanim_l_midcarpal_4_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1595);

SoHAnimJoint* SoHAnimJoint1596 = new SoHAnimJoint();
SoHAnimJoint1596->setUSE(QString("hanim_r_midcarpal_4_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1596);

SoHAnimJoint* SoHAnimJoint1597 = new SoHAnimJoint();
SoHAnimJoint1597->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1597);

SoHAnimJoint* SoHAnimJoint1598 = new SoHAnimJoint();
SoHAnimJoint1598->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1598);

SoHAnimJoint* SoHAnimJoint1599 = new SoHAnimJoint();
SoHAnimJoint1599->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1599);

SoHAnimJoint* SoHAnimJoint1600 = new SoHAnimJoint();
SoHAnimJoint1600->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1600);

SoHAnimJoint* SoHAnimJoint1601 = new SoHAnimJoint();
SoHAnimJoint1601->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1601);

SoHAnimJoint* SoHAnimJoint1602 = new SoHAnimJoint();
SoHAnimJoint1602->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1602);

SoHAnimJoint* SoHAnimJoint1603 = new SoHAnimJoint();
SoHAnimJoint1603->setUSE(QString("hanim_l_talocalcaneonavicular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1603);

SoHAnimJoint* SoHAnimJoint1604 = new SoHAnimJoint();
SoHAnimJoint1604->setUSE(QString("hanim_r_talocalcaneonavicular"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1604);

SoHAnimJoint* SoHAnimJoint1605 = new SoHAnimJoint();
SoHAnimJoint1605->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1605);

SoHAnimJoint* SoHAnimJoint1606 = new SoHAnimJoint();
SoHAnimJoint1606->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1606);

SoHAnimJoint* SoHAnimJoint1607 = new SoHAnimJoint();
SoHAnimJoint1607->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1607);

SoHAnimJoint* SoHAnimJoint1608 = new SoHAnimJoint();
SoHAnimJoint1608->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1608);

SoHAnimJoint* SoHAnimJoint1609 = new SoHAnimJoint();
SoHAnimJoint1609->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1609);

SoHAnimJoint* SoHAnimJoint1610 = new SoHAnimJoint();
SoHAnimJoint1610->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1610);

SoHAnimJoint* SoHAnimJoint1611 = new SoHAnimJoint();
SoHAnimJoint1611->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1611);

SoHAnimJoint* SoHAnimJoint1612 = new SoHAnimJoint();
SoHAnimJoint1612->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1612);

SoHAnimJoint* SoHAnimJoint1613 = new SoHAnimJoint();
SoHAnimJoint1613->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1613);

SoHAnimJoint* SoHAnimJoint1614 = new SoHAnimJoint();
SoHAnimJoint1614->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1614);

SoHAnimJoint* SoHAnimJoint1615 = new SoHAnimJoint();
SoHAnimJoint1615->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1615);

SoHAnimJoint* SoHAnimJoint1616 = new SoHAnimJoint();
SoHAnimJoint1616->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1616);

SoHAnimJoint* SoHAnimJoint1617 = new SoHAnimJoint();
SoHAnimJoint1617->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1617);

SoHAnimJoint* SoHAnimJoint1618 = new SoHAnimJoint();
SoHAnimJoint1618->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1618);

SoHAnimJoint* SoHAnimJoint1619 = new SoHAnimJoint();
SoHAnimJoint1619->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1619);

SoHAnimJoint* SoHAnimJoint1620 = new SoHAnimJoint();
SoHAnimJoint1620->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1620);

SoHAnimJoint* SoHAnimJoint1621 = new SoHAnimJoint();
SoHAnimJoint1621->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1621);

SoHAnimJoint* SoHAnimJoint1622 = new SoHAnimJoint();
SoHAnimJoint1622->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1622);

SoHAnimJoint* SoHAnimJoint1623 = new SoHAnimJoint();
SoHAnimJoint1623->setUSE(QString("hanim_l_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1623);

SoHAnimJoint* SoHAnimJoint1624 = new SoHAnimJoint();
SoHAnimJoint1624->setUSE(QString("hanim_r_tarsal_proximal_interphalangeal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1624);

SoHAnimJoint* SoHAnimJoint1625 = new SoHAnimJoint();
SoHAnimJoint1625->setUSE(QString("hanim_l_tarsometatarsal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1625);

SoHAnimJoint* SoHAnimJoint1626 = new SoHAnimJoint();
SoHAnimJoint1626->setUSE(QString("hanim_r_tarsometatarsal_1"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1626);

SoHAnimJoint* SoHAnimJoint1627 = new SoHAnimJoint();
SoHAnimJoint1627->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1627);

SoHAnimJoint* SoHAnimJoint1628 = new SoHAnimJoint();
SoHAnimJoint1628->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1628);

SoHAnimJoint* SoHAnimJoint1629 = new SoHAnimJoint();
SoHAnimJoint1629->setUSE(QString("hanim_l_tarsometatarsal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1629);

SoHAnimJoint* SoHAnimJoint1630 = new SoHAnimJoint();
SoHAnimJoint1630->setUSE(QString("hanim_r_tarsometatarsal_3"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1630);

SoHAnimJoint* SoHAnimJoint1631 = new SoHAnimJoint();
SoHAnimJoint1631->setUSE(QString("hanim_l_tarsometatarsal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1631);

SoHAnimJoint* SoHAnimJoint1632 = new SoHAnimJoint();
SoHAnimJoint1632->setUSE(QString("hanim_r_tarsometatarsal_4"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1632);

SoHAnimJoint* SoHAnimJoint1633 = new SoHAnimJoint();
SoHAnimJoint1633->setUSE(QString("hanim_l_tarsometatarsal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1633);

SoHAnimJoint* SoHAnimJoint1634 = new SoHAnimJoint();
SoHAnimJoint1634->setUSE(QString("hanim_r_tarsometatarsal_5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1634);

SoHAnimJoint* SoHAnimJoint1635 = new SoHAnimJoint();
SoHAnimJoint1635->setUSE(QString("hanim_l_transversetarsal"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1635);

SoHAnimJoint* SoHAnimJoint1636 = new SoHAnimJoint();
SoHAnimJoint1636->setUSE(QString("hanim_r_transversetarsal"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint1636);

SoHAnimSegment* SoHAnimSegment1637 = new SoHAnimSegment();
SoHAnimSegment1637->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1637);

SoHAnimSegment* SoHAnimSegment1638 = new SoHAnimSegment();
SoHAnimSegment1638->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1638);

SoHAnimSegment* SoHAnimSegment1639 = new SoHAnimSegment();
SoHAnimSegment1639->setUSE(QString("hanim_l5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1639);

SoHAnimSegment* SoHAnimSegment1640 = new SoHAnimSegment();
SoHAnimSegment1640->setUSE(QString("hanim_l4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1640);

SoHAnimSegment* SoHAnimSegment1641 = new SoHAnimSegment();
SoHAnimSegment1641->setUSE(QString("hanim_l3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1641);

SoHAnimSegment* SoHAnimSegment1642 = new SoHAnimSegment();
SoHAnimSegment1642->setUSE(QString("hanim_l2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1642);

SoHAnimSegment* SoHAnimSegment1643 = new SoHAnimSegment();
SoHAnimSegment1643->setUSE(QString("hanim_l1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1643);

SoHAnimSegment* SoHAnimSegment1644 = new SoHAnimSegment();
SoHAnimSegment1644->setUSE(QString("hanim_t12"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1644);

SoHAnimSegment* SoHAnimSegment1645 = new SoHAnimSegment();
SoHAnimSegment1645->setUSE(QString("hanim_t11"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1645);

SoHAnimSegment* SoHAnimSegment1646 = new SoHAnimSegment();
SoHAnimSegment1646->setUSE(QString("hanim_t10"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1646);

SoHAnimSegment* SoHAnimSegment1647 = new SoHAnimSegment();
SoHAnimSegment1647->setUSE(QString("hanim_t9"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1647);

SoHAnimSegment* SoHAnimSegment1648 = new SoHAnimSegment();
SoHAnimSegment1648->setUSE(QString("hanim_t8"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1648);

SoHAnimSegment* SoHAnimSegment1649 = new SoHAnimSegment();
SoHAnimSegment1649->setUSE(QString("hanim_t7"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1649);

SoHAnimSegment* SoHAnimSegment1650 = new SoHAnimSegment();
SoHAnimSegment1650->setUSE(QString("hanim_t6"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1650);

SoHAnimSegment* SoHAnimSegment1651 = new SoHAnimSegment();
SoHAnimSegment1651->setUSE(QString("hanim_t5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1651);

SoHAnimSegment* SoHAnimSegment1652 = new SoHAnimSegment();
SoHAnimSegment1652->setUSE(QString("hanim_t4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1652);

SoHAnimSegment* SoHAnimSegment1653 = new SoHAnimSegment();
SoHAnimSegment1653->setUSE(QString("hanim_t3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1653);

SoHAnimSegment* SoHAnimSegment1654 = new SoHAnimSegment();
SoHAnimSegment1654->setUSE(QString("hanim_t2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1654);

SoHAnimSegment* SoHAnimSegment1655 = new SoHAnimSegment();
SoHAnimSegment1655->setUSE(QString("hanim_t1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1655);

SoHAnimSegment* SoHAnimSegment1656 = new SoHAnimSegment();
SoHAnimSegment1656->setUSE(QString("hanim_c7"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1656);

SoHAnimSegment* SoHAnimSegment1657 = new SoHAnimSegment();
SoHAnimSegment1657->setUSE(QString("hanim_c6"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1657);

SoHAnimSegment* SoHAnimSegment1658 = new SoHAnimSegment();
SoHAnimSegment1658->setUSE(QString("hanim_c5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1658);

SoHAnimSegment* SoHAnimSegment1659 = new SoHAnimSegment();
SoHAnimSegment1659->setUSE(QString("hanim_c4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1659);

SoHAnimSegment* SoHAnimSegment1660 = new SoHAnimSegment();
SoHAnimSegment1660->setUSE(QString("hanim_c3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1660);

SoHAnimSegment* SoHAnimSegment1661 = new SoHAnimSegment();
SoHAnimSegment1661->setUSE(QString("hanim_c2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1661);

SoHAnimSegment* SoHAnimSegment1662 = new SoHAnimSegment();
SoHAnimSegment1662->setUSE(QString("hanim_c1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1662);

SoHAnimSegment* SoHAnimSegment1663 = new SoHAnimSegment();
SoHAnimSegment1663->setUSE(QString("hanim_skull"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1663);

SoHAnimSegment* SoHAnimSegment1664 = new SoHAnimSegment();
SoHAnimSegment1664->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1664);

SoHAnimSegment* SoHAnimSegment1665 = new SoHAnimSegment();
SoHAnimSegment1665->setUSE(QString("hanim_l_calcaneus"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1665);

SoHAnimSegment* SoHAnimSegment1666 = new SoHAnimSegment();
SoHAnimSegment1666->setUSE(QString("hanim_r_calcaneus"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1666);

SoHAnimSegment* SoHAnimSegment1667 = new SoHAnimSegment();
SoHAnimSegment1667->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1667);

SoHAnimSegment* SoHAnimSegment1668 = new SoHAnimSegment();
SoHAnimSegment1668->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1668);

SoHAnimSegment* SoHAnimSegment1669 = new SoHAnimSegment();
SoHAnimSegment1669->setUSE(QString("hanim_l_capitate"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1669);

SoHAnimSegment* SoHAnimSegment1670 = new SoHAnimSegment();
SoHAnimSegment1670->setUSE(QString("hanim_r_capitate"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1670);

SoHAnimSegment* SoHAnimSegment1671 = new SoHAnimSegment();
SoHAnimSegment1671->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1671);

SoHAnimSegment* SoHAnimSegment1672 = new SoHAnimSegment();
SoHAnimSegment1672->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1672);

SoHAnimSegment* SoHAnimSegment1673 = new SoHAnimSegment();
SoHAnimSegment1673->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1673);

SoHAnimSegment* SoHAnimSegment1674 = new SoHAnimSegment();
SoHAnimSegment1674->setUSE(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1674);

SoHAnimSegment* SoHAnimSegment1675 = new SoHAnimSegment();
SoHAnimSegment1675->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1675);

SoHAnimSegment* SoHAnimSegment1676 = new SoHAnimSegment();
SoHAnimSegment1676->setUSE(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1676);

SoHAnimSegment* SoHAnimSegment1677 = new SoHAnimSegment();
SoHAnimSegment1677->setUSE(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1677);

SoHAnimSegment* SoHAnimSegment1678 = new SoHAnimSegment();
SoHAnimSegment1678->setUSE(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1678);

SoHAnimSegment* SoHAnimSegment1679 = new SoHAnimSegment();
SoHAnimSegment1679->setUSE(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1679);

SoHAnimSegment* SoHAnimSegment1680 = new SoHAnimSegment();
SoHAnimSegment1680->setUSE(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1680);

SoHAnimSegment* SoHAnimSegment1681 = new SoHAnimSegment();
SoHAnimSegment1681->setUSE(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1681);

SoHAnimSegment* SoHAnimSegment1682 = new SoHAnimSegment();
SoHAnimSegment1682->setUSE(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1682);

SoHAnimSegment* SoHAnimSegment1683 = new SoHAnimSegment();
SoHAnimSegment1683->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1683);

SoHAnimSegment* SoHAnimSegment1684 = new SoHAnimSegment();
SoHAnimSegment1684->setUSE(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1684);

SoHAnimSegment* SoHAnimSegment1685 = new SoHAnimSegment();
SoHAnimSegment1685->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1685);

SoHAnimSegment* SoHAnimSegment1686 = new SoHAnimSegment();
SoHAnimSegment1686->setUSE(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1686);

SoHAnimSegment* SoHAnimSegment1687 = new SoHAnimSegment();
SoHAnimSegment1687->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1687);

SoHAnimSegment* SoHAnimSegment1688 = new SoHAnimSegment();
SoHAnimSegment1688->setUSE(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1688);

SoHAnimSegment* SoHAnimSegment1689 = new SoHAnimSegment();
SoHAnimSegment1689->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1689);

SoHAnimSegment* SoHAnimSegment1690 = new SoHAnimSegment();
SoHAnimSegment1690->setUSE(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1690);

SoHAnimSegment* SoHAnimSegment1691 = new SoHAnimSegment();
SoHAnimSegment1691->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1691);

SoHAnimSegment* SoHAnimSegment1692 = new SoHAnimSegment();
SoHAnimSegment1692->setUSE(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1692);

SoHAnimSegment* SoHAnimSegment1693 = new SoHAnimSegment();
SoHAnimSegment1693->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1693);

SoHAnimSegment* SoHAnimSegment1694 = new SoHAnimSegment();
SoHAnimSegment1694->setUSE(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1694);

SoHAnimSegment* SoHAnimSegment1695 = new SoHAnimSegment();
SoHAnimSegment1695->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1695);

SoHAnimSegment* SoHAnimSegment1696 = new SoHAnimSegment();
SoHAnimSegment1696->setUSE(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1696);

SoHAnimSegment* SoHAnimSegment1697 = new SoHAnimSegment();
SoHAnimSegment1697->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1697);

SoHAnimSegment* SoHAnimSegment1698 = new SoHAnimSegment();
SoHAnimSegment1698->setUSE(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1698);

SoHAnimSegment* SoHAnimSegment1699 = new SoHAnimSegment();
SoHAnimSegment1699->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1699);

SoHAnimSegment* SoHAnimSegment1700 = new SoHAnimSegment();
SoHAnimSegment1700->setUSE(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1700);

SoHAnimSegment* SoHAnimSegment1701 = new SoHAnimSegment();
SoHAnimSegment1701->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1701);

SoHAnimSegment* SoHAnimSegment1702 = new SoHAnimSegment();
SoHAnimSegment1702->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1702);

SoHAnimSegment* SoHAnimSegment1703 = new SoHAnimSegment();
SoHAnimSegment1703->setUSE(QString("hanim_l_cuboid"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1703);

SoHAnimSegment* SoHAnimSegment1704 = new SoHAnimSegment();
SoHAnimSegment1704->setUSE(QString("hanim_r_cuboid"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1704);

SoHAnimSegment* SoHAnimSegment1705 = new SoHAnimSegment();
SoHAnimSegment1705->setUSE(QString("hanim_l_cuneiform_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1705);

SoHAnimSegment* SoHAnimSegment1706 = new SoHAnimSegment();
SoHAnimSegment1706->setUSE(QString("hanim_r_cuneiform_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1706);

SoHAnimSegment* SoHAnimSegment1707 = new SoHAnimSegment();
SoHAnimSegment1707->setUSE(QString("hanim_l_cuneiform_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1707);

SoHAnimSegment* SoHAnimSegment1708 = new SoHAnimSegment();
SoHAnimSegment1708->setUSE(QString("hanim_r_cuneiform_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1708);

SoHAnimSegment* SoHAnimSegment1709 = new SoHAnimSegment();
SoHAnimSegment1709->setUSE(QString("hanim_l_cuneiform_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1709);

SoHAnimSegment* SoHAnimSegment1710 = new SoHAnimSegment();
SoHAnimSegment1710->setUSE(QString("hanim_r_cuneiform_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1710);

SoHAnimSegment* SoHAnimSegment1711 = new SoHAnimSegment();
SoHAnimSegment1711->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1711);

SoHAnimSegment* SoHAnimSegment1712 = new SoHAnimSegment();
SoHAnimSegment1712->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1712);

SoHAnimSegment* SoHAnimSegment1713 = new SoHAnimSegment();
SoHAnimSegment1713->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1713);

SoHAnimSegment* SoHAnimSegment1714 = new SoHAnimSegment();
SoHAnimSegment1714->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1714);

SoHAnimSegment* SoHAnimSegment1715 = new SoHAnimSegment();
SoHAnimSegment1715->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1715);

SoHAnimSegment* SoHAnimSegment1716 = new SoHAnimSegment();
SoHAnimSegment1716->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1716);

SoHAnimSegment* SoHAnimSegment1717 = new SoHAnimSegment();
SoHAnimSegment1717->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1717);

SoHAnimSegment* SoHAnimSegment1718 = new SoHAnimSegment();
SoHAnimSegment1718->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1718);

SoHAnimSegment* SoHAnimSegment1719 = new SoHAnimSegment();
SoHAnimSegment1719->setUSE(QString("hanim_l_hamate"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1719);

SoHAnimSegment* SoHAnimSegment1720 = new SoHAnimSegment();
SoHAnimSegment1720->setUSE(QString("hanim_r_hamate"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1720);

SoHAnimSegment* SoHAnimSegment1721 = new SoHAnimSegment();
SoHAnimSegment1721->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1721);

SoHAnimSegment* SoHAnimSegment1722 = new SoHAnimSegment();
SoHAnimSegment1722->setUSE(QString("hanim_r_metacarpal_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1722);

SoHAnimSegment* SoHAnimSegment1723 = new SoHAnimSegment();
SoHAnimSegment1723->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1723);

SoHAnimSegment* SoHAnimSegment1724 = new SoHAnimSegment();
SoHAnimSegment1724->setUSE(QString("hanim_r_metacarpal_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1724);

SoHAnimSegment* SoHAnimSegment1725 = new SoHAnimSegment();
SoHAnimSegment1725->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1725);

SoHAnimSegment* SoHAnimSegment1726 = new SoHAnimSegment();
SoHAnimSegment1726->setUSE(QString("hanim_r_metacarpal_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1726);

SoHAnimSegment* SoHAnimSegment1727 = new SoHAnimSegment();
SoHAnimSegment1727->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1727);

SoHAnimSegment* SoHAnimSegment1728 = new SoHAnimSegment();
SoHAnimSegment1728->setUSE(QString("hanim_r_metacarpal_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1728);

SoHAnimSegment* SoHAnimSegment1729 = new SoHAnimSegment();
SoHAnimSegment1729->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1729);

SoHAnimSegment* SoHAnimSegment1730 = new SoHAnimSegment();
SoHAnimSegment1730->setUSE(QString("hanim_r_metacarpal_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1730);

SoHAnimSegment* SoHAnimSegment1731 = new SoHAnimSegment();
SoHAnimSegment1731->setUSE(QString("hanim_l_metatarsal_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1731);

SoHAnimSegment* SoHAnimSegment1732 = new SoHAnimSegment();
SoHAnimSegment1732->setUSE(QString("hanim_r_metatarsal_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1732);

SoHAnimSegment* SoHAnimSegment1733 = new SoHAnimSegment();
SoHAnimSegment1733->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1733);

SoHAnimSegment* SoHAnimSegment1734 = new SoHAnimSegment();
SoHAnimSegment1734->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1734);

SoHAnimSegment* SoHAnimSegment1735 = new SoHAnimSegment();
SoHAnimSegment1735->setUSE(QString("hanim_l_metatarsal_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1735);

SoHAnimSegment* SoHAnimSegment1736 = new SoHAnimSegment();
SoHAnimSegment1736->setUSE(QString("hanim_r_metatarsal_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1736);

SoHAnimSegment* SoHAnimSegment1737 = new SoHAnimSegment();
SoHAnimSegment1737->setUSE(QString("hanim_l_metatarsal_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1737);

SoHAnimSegment* SoHAnimSegment1738 = new SoHAnimSegment();
SoHAnimSegment1738->setUSE(QString("hanim_r_metatarsal_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1738);

SoHAnimSegment* SoHAnimSegment1739 = new SoHAnimSegment();
SoHAnimSegment1739->setUSE(QString("hanim_l_metatarsal_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1739);

SoHAnimSegment* SoHAnimSegment1740 = new SoHAnimSegment();
SoHAnimSegment1740->setUSE(QString("hanim_r_metatarsal_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1740);

SoHAnimSegment* SoHAnimSegment1741 = new SoHAnimSegment();
SoHAnimSegment1741->setUSE(QString("hanim_l_navicular"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1741);

SoHAnimSegment* SoHAnimSegment1742 = new SoHAnimSegment();
SoHAnimSegment1742->setUSE(QString("hanim_r_navicular"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1742);

SoHAnimSegment* SoHAnimSegment1743 = new SoHAnimSegment();
SoHAnimSegment1743->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1743);

SoHAnimSegment* SoHAnimSegment1744 = new SoHAnimSegment();
SoHAnimSegment1744->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1744);

SoHAnimSegment* SoHAnimSegment1745 = new SoHAnimSegment();
SoHAnimSegment1745->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1745);

SoHAnimSegment* SoHAnimSegment1746 = new SoHAnimSegment();
SoHAnimSegment1746->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1746);

SoHAnimSegment* SoHAnimSegment1747 = new SoHAnimSegment();
SoHAnimSegment1747->setUSE(QString("hanim_l_tarsal_distal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1747);

SoHAnimSegment* SoHAnimSegment1748 = new SoHAnimSegment();
SoHAnimSegment1748->setUSE(QString("hanim_r_tarsal_distal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1748);

SoHAnimSegment* SoHAnimSegment1749 = new SoHAnimSegment();
SoHAnimSegment1749->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1749);

SoHAnimSegment* SoHAnimSegment1750 = new SoHAnimSegment();
SoHAnimSegment1750->setUSE(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1750);

SoHAnimSegment* SoHAnimSegment1751 = new SoHAnimSegment();
SoHAnimSegment1751->setUSE(QString("hanim_l_tarsal_distal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1751);

SoHAnimSegment* SoHAnimSegment1752 = new SoHAnimSegment();
SoHAnimSegment1752->setUSE(QString("hanim_r_tarsal_distal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1752);

SoHAnimSegment* SoHAnimSegment1753 = new SoHAnimSegment();
SoHAnimSegment1753->setUSE(QString("hanim_l_tarsal_distal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1753);

SoHAnimSegment* SoHAnimSegment1754 = new SoHAnimSegment();
SoHAnimSegment1754->setUSE(QString("hanim_r_tarsal_distal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1754);

SoHAnimSegment* SoHAnimSegment1755 = new SoHAnimSegment();
SoHAnimSegment1755->setUSE(QString("hanim_l_tarsal_distal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1755);

SoHAnimSegment* SoHAnimSegment1756 = new SoHAnimSegment();
SoHAnimSegment1756->setUSE(QString("hanim_r_tarsal_distal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1756);

SoHAnimSegment* SoHAnimSegment1757 = new SoHAnimSegment();
SoHAnimSegment1757->setUSE(QString("hanim_l_tarsal_middle_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1757);

SoHAnimSegment* SoHAnimSegment1758 = new SoHAnimSegment();
SoHAnimSegment1758->setUSE(QString("hanim_r_tarsal_middle_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1758);

SoHAnimSegment* SoHAnimSegment1759 = new SoHAnimSegment();
SoHAnimSegment1759->setUSE(QString("hanim_l_tarsal_middle_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1759);

SoHAnimSegment* SoHAnimSegment1760 = new SoHAnimSegment();
SoHAnimSegment1760->setUSE(QString("hanim_r_tarsal_middle_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1760);

SoHAnimSegment* SoHAnimSegment1761 = new SoHAnimSegment();
SoHAnimSegment1761->setUSE(QString("hanim_l_tarsal_middle_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1761);

SoHAnimSegment* SoHAnimSegment1762 = new SoHAnimSegment();
SoHAnimSegment1762->setUSE(QString("hanim_r_tarsal_middle_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1762);

SoHAnimSegment* SoHAnimSegment1763 = new SoHAnimSegment();
SoHAnimSegment1763->setUSE(QString("hanim_l_tarsal_middle_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1763);

SoHAnimSegment* SoHAnimSegment1764 = new SoHAnimSegment();
SoHAnimSegment1764->setUSE(QString("hanim_r_tarsal_middle_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1764);

SoHAnimSegment* SoHAnimSegment1765 = new SoHAnimSegment();
SoHAnimSegment1765->setUSE(QString("hanim_l_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1765);

SoHAnimSegment* SoHAnimSegment1766 = new SoHAnimSegment();
SoHAnimSegment1766->setUSE(QString("hanim_r_tarsal_proximal_phalanx_1"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1766);

SoHAnimSegment* SoHAnimSegment1767 = new SoHAnimSegment();
SoHAnimSegment1767->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1767);

SoHAnimSegment* SoHAnimSegment1768 = new SoHAnimSegment();
SoHAnimSegment1768->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1768);

SoHAnimSegment* SoHAnimSegment1769 = new SoHAnimSegment();
SoHAnimSegment1769->setUSE(QString("hanim_l_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1769);

SoHAnimSegment* SoHAnimSegment1770 = new SoHAnimSegment();
SoHAnimSegment1770->setUSE(QString("hanim_r_tarsal_proximal_phalanx_3"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1770);

SoHAnimSegment* SoHAnimSegment1771 = new SoHAnimSegment();
SoHAnimSegment1771->setUSE(QString("hanim_l_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1771);

SoHAnimSegment* SoHAnimSegment1772 = new SoHAnimSegment();
SoHAnimSegment1772->setUSE(QString("hanim_r_tarsal_proximal_phalanx_4"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1772);

SoHAnimSegment* SoHAnimSegment1773 = new SoHAnimSegment();
SoHAnimSegment1773->setUSE(QString("hanim_l_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1773);

SoHAnimSegment* SoHAnimSegment1774 = new SoHAnimSegment();
SoHAnimSegment1774->setUSE(QString("hanim_r_tarsal_proximal_phalanx_5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1774);

SoHAnimSegment* SoHAnimSegment1775 = new SoHAnimSegment();
SoHAnimSegment1775->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1775);

SoHAnimSegment* SoHAnimSegment1776 = new SoHAnimSegment();
SoHAnimSegment1776->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1776);

SoHAnimSegment* SoHAnimSegment1777 = new SoHAnimSegment();
SoHAnimSegment1777->setUSE(QString("hanim_l_trapezium"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1777);

SoHAnimSegment* SoHAnimSegment1778 = new SoHAnimSegment();
SoHAnimSegment1778->setUSE(QString("hanim_r_trapezium"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1778);

SoHAnimSegment* SoHAnimSegment1779 = new SoHAnimSegment();
SoHAnimSegment1779->setUSE(QString("hanim_l_trapezoid"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1779);

SoHAnimSegment* SoHAnimSegment1780 = new SoHAnimSegment();
SoHAnimSegment1780->setUSE(QString("hanim_r_trapezoid"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1780);

SoHAnimSegment* SoHAnimSegment1781 = new SoHAnimSegment();
SoHAnimSegment1781->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1781);

SoHAnimSegment* SoHAnimSegment1782 = new SoHAnimSegment();
SoHAnimSegment1782->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment1782);

SoNode19->addChild(*SoHAnimHumanoid23);

SoSceneManager0->setSceneGraph(*SoNode19);

return 0;
}
