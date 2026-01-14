
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
Someta3->setContent(QString("JinOriginalLOA3.x3d"));
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
Someta8->setContent(QString("Mon, 15 Sep 2025 05:20:33 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("description"));
Someta9->setContent(QString("Original version of articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("warning"));
Someta10->setContent(QString("All length values are rescaled from inches to meters, not compatible with other typical motion animation behavior libraries which are based in meters."));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("KoreanCharacter00ReadMe.txt"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("KoreanCharacterHumanMotion_Infotech2014_140706.pdf"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("KoreanCharactersIllustrated.pdf"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("JinLOA3.x3d"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("[h-anim] Rescaling HAnim Jin models, preserving originals in Legacy directory https://web3d.org/mailman/private/h-anim_web3d.org/2024-February/002317.html"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("identifier"));
Someta16->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JinOriginalLOA3.x3d"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("generator"));
Someta17->setContent(QString("3DS MAX, http://www.autodesk.com/products/autodesk-3ds-max/overview"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("generator"));
Someta18->setContent(QString("Suwon HAnim Converter"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("generator"));
Someta19->setContent(QString("Gnu Image Manipulation Program, http://www.gimp.org"));
Sohead1->addMeta(*Someta19);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode20 = new SoNode();
SoWorldInfo* SoWorldInfo21 = new SoWorldInfo();
SoWorldInfo21->setTitle(QString("JinOriginalLOA3.x3d"));
SoNode20->addChild(*SoWorldInfo21);

SoNavigationInfo* SoNavigationInfo22 = new SoNavigationInfo();
SoNavigationInfo22->setSpeed(1.5);
SoNode20->addChild(*SoNavigationInfo22);

SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDescription(QString("JinLOA3"));
SoViewpoint23->setPosition(new float[]{0.0,1.0,3.0});
SoViewpoint23->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode20->addChild(*SoViewpoint23);

SoHAnimHumanoid* SoHAnimHumanoid24 = new SoHAnimHumanoid();
SoHAnimHumanoid24->setDEF(QString("hanim_JinLOA3"));
SoHAnimHumanoid24->X3DNode::setName(QString("JinLOA3"));
SoHAnimHumanoid24->setLoa(3);
SoHAnimHumanoid24->setScale(new float[]{0.0225,0.0225,0.0225});
SoMetadataSet* SoMetadataSet25 = new SoMetadataSet();
SoMetadataSet25->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet25->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString26 = new SoMetadataString();
SoMetadataString26->X3DNode::setName(QString("authorName"));
SoMetadataSet25->setValue((X3DNode *)&SoMetadataString26);

SoMetadataString* SoMetadataString27 = new SoMetadataString();
SoMetadataString27->X3DNode::setName(QString("authorEmail"));
SoMetadataSet25->setValue((X3DNode *)&SoMetadataString27);

SoMetadataString* SoMetadataString28 = new SoMetadataString();
SoMetadataString28->X3DNode::setName(QString("creationDate"));
SoMetadataSet25->setValue((X3DNode *)&SoMetadataString28);

SoMetadataString* SoMetadataString29 = new SoMetadataString();
SoMetadataString29->X3DNode::setName(QString("gender"));
SoMetadataSet25->setValue((X3DNode *)&SoMetadataString29);

SoMetadataFloat* SoMetadataFloat30 = new SoMetadataFloat();
SoMetadataFloat30->X3DNode::setName(QString("height"));
SoMetadataFloat30->setValue(new float[]{1.5}, 1);
SoMetadataSet25->setValue((X3DNode *)&SoMetadataFloat30);

SoMetadataString* SoMetadataString31 = new SoMetadataString();
SoMetadataString31->X3DNode::setName(QString("humanoidVersion"));
SoMetadataString31->setValue(new QString[]{QString("2.0")}, 1);
SoMetadataSet25->setValue((X3DNode *)&SoMetadataString31);

SoHAnimHumanoid24->setMetadata(*SoMetadataSet25);

SoHAnimJoint* SoHAnimJoint32 = new SoHAnimJoint();
SoHAnimJoint32->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint32->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint32->setCenter(new float[]{0.0,35.8,-0.7076});
SoHAnimSegment* SoHAnimSegment33 = new SoHAnimSegment();
SoHAnimSegment33->setDEF(QString("hanim_sacrum"));
SoHAnimSegment33->X3DNode::setName(QString("sacrum"));
SoTransform* SoTransform34 = new SoTransform();
SoTransform34->setTranslation(new float[]{0.0,35.8,-0.7076});
SoShape* SoShape35 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance36 = new SoVRMLAppearance();
SoMaterial* SoMaterial37 = new SoMaterial();
SoMaterial37->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance36->addChild(*SoMaterial37);

SoImageTexture* SoImageTexture38 = new SoImageTexture();
SoImageTexture38->setDEF(QString("JinLOA3TextureAtlas"));
SoImageTexture38->setUrl(new QString[]{QString("images/Jin.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Jin.png")}, 2);
SoVRMLAppearance36->addChild(*SoImageTexture38);

SoShape35->addChild(*SoVRMLAppearance36);

SoIndexedFaceSet* SoIndexedFaceSet39 = new SoIndexedFaceSet();
SoIndexedFaceSet39->setCreaseAngle(3.14159);
SoIndexedFaceSet39->setTexCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoIndexedFaceSet39->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoTextureCoordinate* SoTextureCoordinate40 = new SoTextureCoordinate();
SoTextureCoordinate40->setPoint(new float[]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398}, 124);
SoIndexedFaceSet39->setTexCoord(*SoTextureCoordinate40);

SoCoordinate* SoCoordinate41 = new SoCoordinate();
SoCoordinate41->setPoint(new float[]{0.0,1.053,0.0273,0.0,0.9123,-0.5414,-0.4375,0.9123,-0.4652,-0.7578,0.9123,-0.3733,-0.875,0.9123,0.0273,-0.7578,0.9123,0.4279,-0.4375,0.9123,0.5198,0.0,0.9123,0.596,0.4375,0.9123,0.5198,0.7578,0.9123,0.4279,0.875,0.9123,0.0273,0.7578,0.9123,-0.3733,0.4375,0.9123,-0.4652,0.0,0.5267,-0.8842,-0.5658,0.5267,-0.7621,-0.98,0.5267,-0.4285,-1.132,0.5267,0.0273,-0.98,0.5267,0.483,-0.5658,0.5267,0.6985,0.0,0.5267,0.8206,0.5658,0.5267,0.6985,0.98,0.5267,0.483,1.132,0.5267,0.0273,0.98,0.5267,-0.4285,0.5658,0.5267,-0.7621,0.0,0.0,-0.9616,-0.6534,0.0,-0.8206,-1.132,0.0,-0.4353,-1.307,0.0,0.0273,-1.132,0.0,0.5536,-0.6534,0.0,0.8206,0.0,0.0,0.9616,0.6534,0.0,0.8206,1.132,0.0,0.5536,1.307,0.0,0.0273,1.132,0.0,-0.4353,0.6534,0.0,-0.8206,0.0,-0.5267,-0.8206,-0.5658,-0.5267,-0.6985,-0.98,-0.5267,-0.3648,-1.132,-0.5267,0.0273,-0.98,-0.5267,0.483,-0.5658,-0.5267,0.6985,0.0,-0.5267,0.8206,0.5658,-0.5267,0.6985,0.98,-0.5267,0.483,1.132,-0.5267,0.0273,0.98,-0.5267,-0.3648,0.5658,-0.5267,-0.6985,0.0,-0.9123,-0.4353,-0.3267,-0.9123,-0.3648,-0.5658,-0.9123,-0.2358,-0.6534,-0.9123,0.0273,-0.5658,-0.9123,0.2904,-0.3267,-0.9123,0.483,0.0,-0.9123,0.5536,0.3267,-0.9123,0.483,0.5658,-0.9123,0.2904,0.6534,-0.9123,0.0273,0.5658,-0.9123,-0.2358,0.3267,-0.9123,-0.3648,0.0,-1.053,0.0273}, 186);
SoIndexedFaceSet39->setCoord(*SoCoordinate41);

SoShape35->setGeometry(*SoIndexedFaceSet39);

SoTransform34->addChild(*SoShape35);

SoHAnimSegment33->addChild(*SoTransform34);

SoHAnimJoint32->addChildren(*SoHAnimSegment33);

SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint42->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint42->setCenter(new float[]{0.0,30.53,-0.7076});
SoHAnimSegment* SoHAnimSegment43 = new SoHAnimSegment();
SoHAnimSegment43->setDEF(QString("hanim_pelvis"));
SoHAnimSegment43->X3DNode::setName(QString("pelvis"));
SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setTranslation(new float[]{0.0,30.53,-0.7076});
SoShape* SoShape45 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance46 = new SoVRMLAppearance();
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance46->addChild(*SoMaterial47);

SoImageTexture* SoImageTexture48 = new SoImageTexture();
SoImageTexture48->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance46->addChild(*SoImageTexture48);

SoShape45->addChild(*SoVRMLAppearance46);

SoIndexedFaceSet* SoIndexedFaceSet49 = new SoIndexedFaceSet();
SoIndexedFaceSet49->setCreaseAngle(3.14159);
SoIndexedFaceSet49->setTexCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoIndexedFaceSet49->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,14,2,1,-1,1,13,14,-1,15,3,2,-1,2,14,15,-1,16,4,3,-1,3,15,16,-1,17,5,4,-1,4,16,17,-1,18,6,5,-1,5,17,18,-1,19,7,6,-1,6,18,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,23,11,10,-1,10,22,23,-1,24,12,11,-1,11,23,24,-1,13,1,12,-1,12,24,13,-1,26,14,13,-1,13,25,26,-1,27,15,14,-1,14,26,27,-1,28,16,15,-1,15,27,28,-1,29,17,16,-1,16,28,29,-1,30,18,17,-1,17,29,30,-1,31,19,18,-1,18,30,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,34,22,21,-1,21,33,34,-1,35,23,22,-1,22,34,35,-1,36,24,23,-1,23,35,36,-1,25,13,24,-1,24,36,25,-1,38,26,25,-1,25,37,38,-1,39,27,26,-1,26,38,39,-1,40,28,27,-1,27,39,40,-1,41,29,28,-1,28,40,41,-1,42,30,29,-1,29,41,42,-1,43,31,30,-1,30,42,43,-1,44,32,31,-1,31,43,44,-1,45,33,32,-1,32,44,45,-1,46,34,33,-1,33,45,46,-1,47,35,34,-1,34,46,47,-1,48,36,35,-1,35,47,48,-1,37,25,36,-1,36,48,37,-1,50,38,37,-1,37,49,50,-1,51,39,38,-1,38,50,51,-1,52,40,39,-1,39,51,52,-1,53,41,40,-1,40,52,53,-1,54,42,41,-1,41,53,54,-1,55,43,42,-1,42,54,55,-1,56,44,43,-1,43,55,56,-1,57,45,44,-1,44,56,57,-1,58,46,45,-1,45,57,58,-1,59,47,46,-1,46,58,59,-1,60,48,47,-1,47,59,60,-1,49,37,48,-1,48,60,49,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1}, 480);
SoTextureCoordinate* SoTextureCoordinate50 = new SoTextureCoordinate();
SoTextureCoordinate50->setPoint(new float[]{0.6211,0.5754,0.7851,0.572,0.7614,0.572,0.6907,0.5698,0.62,0.5698,0.6158,0.5702,0.5451,0.5702,0.4167,0.5698,0.5451,0.5702,0.6158,0.5702,0.62,0.5698,0.6907,0.5698,0.7614,0.572,0.8036,0.5346,0.7761,0.5346,0.6989,0.4838,0.6219,0.4428,0.6154,0.4438,0.5492,0.4639,0.4166,0.5346,0.5492,0.4639,0.6154,0.4438,0.6219,0.4428,0.6989,0.4838,0.7761,0.5346,0.7912,0.4044,0.7635,0.4044,0.7042,0.3925,0.6194,0.3907,0.6148,0.3907,0.545,0.3974,0.4163,0.4938,0.545,0.3974,0.6148,0.3907,0.6194,0.3907,0.7042,0.3925,0.7635,0.4044,0.795,0.3772,0.7662,0.3772,0.6945,0.3645,0.6236,0.3695,0.616,0.3695,0.5438,0.378,0.416,0.453,0.5438,0.378,0.616,0.3695,0.6236,0.3695,0.6945,0.3645,0.7662,0.3772,0.7887,0.3451,0.7635,0.3451,0.698,0.3508,0.6262,0.3508,0.6297,0.3503,0.5389,0.3503,0.4181,0.3884,0.5389,0.3503,0.6297,0.3503,0.6262,0.3508,0.698,0.3508,0.7635,0.3451,0.6237,0.3398}, 124);
SoIndexedFaceSet49->setTexCoord(*SoTextureCoordinate50);

SoCoordinate* SoCoordinate51 = new SoCoordinate();
SoCoordinate51->setPoint(new float[]{0.0,10.79,0.1424,0.0,10.06,-2.825,-2.283,10.06,-2.428,-3.954,10.06,-1.948,-4.566,10.06,0.1424,-3.954,10.06,2.233,-2.283,10.06,2.712,0.0,10.06,3.11,2.283,10.06,2.712,3.954,10.06,2.233,4.566,10.06,0.1424,3.954,10.06,-1.948,2.283,10.06,-2.428,0.0,8.045,-4.614,-2.953,8.045,-3.977,-5.114,8.045,-2.236,-5.905,8.045,0.1424,-5.114,8.045,2.521,-2.953,8.045,3.645,0.0,8.045,4.282,2.953,8.045,3.645,5.114,8.045,2.521,5.905,8.045,0.1424,5.114,8.045,-2.236,2.953,8.045,-3.977,0.0,5.297,-5.018,-3.409,5.297,-4.282,-5.905,5.297,-2.272,-6.819,5.297,0.1424,-5.905,5.297,2.889,-3.409,5.297,4.282,0.0,5.297,5.018,3.409,5.297,4.282,5.905,5.297,2.889,6.819,5.297,0.1424,5.905,5.297,-2.272,3.409,5.297,-4.282,0.0,2.548,-4.282,-2.953,2.548,-3.645,-5.114,2.548,-1.904,-5.905,2.548,0.1424,-5.114,2.548,2.521,-2.953,2.548,3.645,0.0,2.548,4.282,2.953,2.548,3.645,5.114,2.548,2.521,5.905,2.548,0.1424,5.114,2.548,-1.904,2.953,2.548,-3.645,0.0,0.5362,-2.272,-1.705,0.5362,-1.904,-2.953,0.5362,-1.231,-3.409,0.5362,0.1424,-2.953,0.5362,1.516,-1.705,0.5362,2.521,0.0,0.5362,2.889,1.705,0.5362,2.521,2.953,0.5362,1.516,3.409,0.5362,0.1424,2.953,0.5362,-1.231,1.705,0.5362,-1.904,0.0,-0.2003,0.1424}, 186);
SoIndexedFaceSet49->setCoord(*SoCoordinate51);

SoShape45->setGeometry(*SoIndexedFaceSet49);

SoTransform44->addChild(*SoShape45);

SoHAnimSegment43->addChild(*SoTransform44);

SoHAnimJoint42->addChildren(*SoHAnimSegment43);

SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->setDEF(QString("hanim_l_hip"));
SoHAnimJoint52->X3DNode::setName(QString("l_hip"));
SoHAnimJoint52->setCenter(new float[]{4.207,35.83,-0.8155});
SoHAnimSegment* SoHAnimSegment53 = new SoHAnimSegment();
SoHAnimSegment53->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment53->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setTranslation(new float[]{4.207,35.83,-0.8155});
SoShape* SoShape55 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance56 = new SoVRMLAppearance();
SoMaterial* SoMaterial57 = new SoMaterial();
SoMaterial57->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance56->addChild(*SoMaterial57);

SoImageTexture* SoImageTexture58 = new SoImageTexture();
SoImageTexture58->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance56->addChild(*SoImageTexture58);

SoShape55->addChild(*SoVRMLAppearance56);

SoIndexedFaceSet* SoIndexedFaceSet59 = new SoIndexedFaceSet();
SoIndexedFaceSet59->setCreaseAngle(3.14159);
SoIndexedFaceSet59->setTexCoordIndex(new int32_t[]{5,4,3,-1,3,2,0,-1,3,0,1,-1,5,3,1,-1,6,5,1,-1,7,10,8,-1,8,9,7,-1,10,12,11,-1,11,8,10,-1,12,14,13,-1,13,11,12,-1,14,16,15,-1,15,13,14,-1,16,18,17,-1,17,15,16,-1,18,20,19,-1,19,17,18,-1,20,7,9,-1,9,19,20,-1,9,8,21,-1,21,22,9,-1,8,11,23,-1,23,21,8,-1,11,13,24,-1,24,23,11,-1,13,15,25,-1,25,24,13,-1,15,17,26,-1,26,25,15,-1,17,19,27,-1,27,26,17,-1,19,9,22,-1,22,27,19,-1,22,21,28,-1,28,29,22,-1,21,23,30,-1,30,28,21,-1,23,24,31,-1,31,30,23,-1,24,25,32,-1,32,31,24,-1,25,26,33,-1,33,32,25,-1,26,27,34,-1,34,33,26,-1,27,22,29,-1,29,34,27,-1,42,43,44,-1,44,45,46,-1,44,46,47,-1,42,44,47,-1,48,42,47,-1,35,36,29,-1,29,28,35,-1,37,35,28,-1,28,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,36,41,34,-1,34,29,36,-1,51,52,49,-1,49,50,51,-1,54,51,50,-1,50,53,54,-1,56,54,53,-1,53,55,56,-1,58,56,55,-1,55,57,58,-1,60,58,57,-1,57,59,60,-1,62,60,59,-1,59,61,62,-1,52,62,61,-1,61,49,52,-1,1,0,10,-1,10,7,1,-1,0,2,12,-1,12,10,0,-1,2,3,14,-1,14,12,2,-1,3,4,16,-1,16,14,3,-1,4,5,18,-1,18,16,4,-1,5,6,20,-1,20,18,5,-1,6,1,7,-1,7,20,6,-1,63,64,52,-1,52,51,63,-1,65,63,51,-1,51,54,65,-1,66,65,54,-1,54,56,66,-1,67,66,56,-1,56,58,67,-1,68,67,58,-1,58,60,68,-1,69,68,60,-1,60,62,69,-1,64,69,62,-1,62,52,64,-1,43,42,64,-1,64,63,43,-1,44,43,63,-1,63,65,44,-1,45,44,65,-1,65,66,45,-1,46,45,66,-1,66,67,46,-1,47,46,67,-1,67,68,47,-1,48,47,68,-1,68,69,48,-1,42,48,69,-1,69,64,42,-1}, 488);
SoIndexedFaceSet59->setCoordIndex(new int32_t[]{47,46,45,-1,45,44,43,-1,45,43,42,-1,47,45,42,-1,48,47,42,-1,0,1,8,-1,8,7,0,-1,1,2,9,-1,9,8,1,-1,2,3,10,-1,10,9,2,-1,3,4,11,-1,11,10,3,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,0,7,-1,7,13,6,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,12,19,-1,19,18,11,-1,12,13,20,-1,20,19,12,-1,13,7,14,-1,14,20,13,-1,14,15,22,-1,22,21,14,-1,15,16,23,-1,23,22,15,-1,16,17,24,-1,24,23,16,-1,17,18,25,-1,25,24,17,-1,18,19,26,-1,26,25,18,-1,19,20,27,-1,27,26,19,-1,20,14,21,-1,21,27,20,-1,56,57,58,-1,58,59,60,-1,58,60,61,-1,56,58,61,-1,62,56,61,-1,29,28,21,-1,21,22,29,-1,30,29,22,-1,22,23,30,-1,31,30,23,-1,23,24,31,-1,32,31,24,-1,24,25,32,-1,33,32,25,-1,25,26,33,-1,34,33,26,-1,26,27,34,-1,28,34,27,-1,27,21,28,-1,36,35,28,-1,28,29,36,-1,37,36,29,-1,29,30,37,-1,38,37,30,-1,30,31,38,-1,39,38,31,-1,31,32,39,-1,40,39,32,-1,32,33,40,-1,41,40,33,-1,33,34,41,-1,35,41,34,-1,34,28,35,-1,42,43,1,-1,1,0,42,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,47,5,-1,5,4,46,-1,47,48,6,-1,6,5,47,-1,48,42,0,-1,0,6,48,-1,50,49,35,-1,35,36,50,-1,51,50,36,-1,36,37,51,-1,52,51,37,-1,37,38,52,-1,53,52,38,-1,38,39,53,-1,54,53,39,-1,39,40,54,-1,55,54,40,-1,40,41,55,-1,49,55,41,-1,41,35,49,-1,57,56,49,-1,49,50,57,-1,58,57,50,-1,50,51,58,-1,59,58,51,-1,51,52,59,-1,60,59,52,-1,52,53,60,-1,61,60,53,-1,53,54,61,-1,62,61,54,-1,54,55,62,-1,56,62,55,-1,55,49,56,-1}, 488);
SoTextureCoordinate* SoTextureCoordinate60 = new SoTextureCoordinate();
SoTextureCoordinate60->setPoint(new float[]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581}, 140);
SoIndexedFaceSet59->setTexCoord(*SoTextureCoordinate60);

SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setPoint(new float[]{2.96,-0.0706,0.0,1.643,-0.0706,3.209,-1.316,-0.0706,4.002,-3.367,-0.0706,1.781,-3.367,-0.0706,-1.781,-1.316,-0.0706,-4.002,1.643,-0.0706,-3.209,2.96,-3.82,0.0,1.643,-3.82,3.209,-1.316,-3.82,4.002,-3.367,-3.82,1.781,-3.367,-3.82,-1.781,-1.316,-3.82,-4.002,1.643,-3.82,-3.209,2.96,-10.32,0.0,1.643,-10.32,3.209,-1.316,-10.32,4.002,-3.367,-10.32,1.781,-3.367,-10.32,-1.781,-1.316,-10.32,-4.002,1.643,-10.32,-3.209,3.367,-16.94,0.0,1.897,-16.94,3.582,-1.407,-16.94,4.467,-3.355,-16.94,1.988,-3.355,-16.94,-1.988,-1.407,-16.94,-4.467,1.897,-16.94,-3.582,2.146,-8.794,0.0,1.136,-8.794,2.462,-1.135,-8.794,3.07,-2.633,-8.794,1.366,-2.633,-8.794,-1.366,-1.135,-8.794,-3.07,1.136,-8.794,-2.462,2.156,-15.25,0.0,1.225,-15.25,1.956,-0.8662,-15.25,2.439,-2.543,-15.25,1.085,-2.543,-15.25,-1.085,-0.8662,-15.25,-2.439,1.225,-15.25,-1.956,2.051,1.92,0.0,1.076,1.92,2.375,-1.114,1.92,2.961,-2.87,1.92,1.318,-2.87,1.92,-1.318,-1.114,1.92,-2.961,1.076,1.92,-2.375,1.842,-18.93,0.0,1.03,-18.93,1.873,-0.7965,-18.93,2.295,-2.261,-18.93,1.113,-2.261,-18.93,-0.9478,-0.7965,-18.93,-2.13,1.03,-18.93,-1.708,0.6277,-19.91,0.0,0.2723,-19.91,0.912,-0.5262,-19.91,1.096,-1.167,-19.91,0.5796,-1.167,-19.91,-0.4145,-0.5262,-19.91,-0.9313,0.2723,-19.91,-0.7469}, 189);
SoIndexedFaceSet59->setCoord(*SoCoordinate61);

SoShape55->setGeometry(*SoIndexedFaceSet59);

SoTransform54->addChild(*SoShape55);

SoHAnimSegment53->addChild(*SoTransform54);

SoHAnimJoint52->addChildren(*SoHAnimSegment53);

SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->setDEF(QString("hanim_l_knee"));
SoHAnimJoint62->X3DNode::setName(QString("l_knee"));
SoHAnimJoint62->setCenter(new float[]{4.116,17.26,-0.8639});
SoHAnimSegment* SoHAnimSegment63 = new SoHAnimSegment();
SoHAnimSegment63->setDEF(QString("hanim_l_calf"));
SoHAnimSegment63->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform64 = new SoTransform();
SoTransform64->setTranslation(new float[]{4.116,17.26,-0.8639});
SoShape* SoShape65 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance66 = new SoVRMLAppearance();
SoMaterial* SoMaterial67 = new SoMaterial();
SoMaterial67->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance66->addChild(*SoMaterial67);

SoImageTexture* SoImageTexture68 = new SoImageTexture();
SoImageTexture68->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance66->addChild(*SoImageTexture68);

SoShape65->addChild(*SoVRMLAppearance66);

SoIndexedFaceSet* SoIndexedFaceSet69 = new SoIndexedFaceSet();
SoIndexedFaceSet69->setCreaseAngle(3.14159);
SoIndexedFaceSet69->setTexCoordIndex(new int32_t[]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1}, 300);
SoIndexedFaceSet69->setCoordIndex(new int32_t[]{4,3,2,-1,5,4,2,-1,2,1,0,-1,5,2,0,-1,6,5,0,-1,9,8,7,-1,7,10,9,-1,12,11,8,-1,8,9,12,-1,14,13,11,-1,11,12,14,-1,16,15,13,-1,13,14,16,-1,18,17,15,-1,15,16,18,-1,20,19,17,-1,17,18,20,-1,10,7,19,-1,19,20,10,-1,21,9,10,-1,10,22,21,-1,23,12,9,-1,9,21,23,-1,24,14,12,-1,12,23,24,-1,25,16,14,-1,14,24,25,-1,26,18,16,-1,16,25,26,-1,27,20,18,-1,18,26,27,-1,22,10,20,-1,20,27,22,-1,1,21,22,-1,22,0,1,-1,2,23,21,-1,21,1,2,-1,3,24,23,-1,23,2,3,-1,4,25,24,-1,24,3,4,-1,5,26,25,-1,25,4,5,-1,6,27,26,-1,26,5,6,-1,0,22,27,-1,27,6,0,-1,8,29,28,-1,28,7,8,-1,11,30,29,-1,29,8,11,-1,13,31,30,-1,30,11,13,-1,15,32,31,-1,31,13,15,-1,17,33,32,-1,32,15,17,-1,19,34,33,-1,33,17,19,-1,7,28,34,-1,34,19,7,-1,29,36,35,-1,35,28,29,-1,30,37,36,-1,36,29,30,-1,31,38,37,-1,37,30,31,-1,32,39,38,-1,38,31,32,-1,33,40,39,-1,39,32,33,-1,34,41,40,-1,40,33,34,-1,28,35,41,-1,41,34,28,-1}, 300);
SoTextureCoordinate* SoTextureCoordinate70 = new SoTextureCoordinate();
SoTextureCoordinate70->setPoint(new float[]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243}, 84);
SoIndexedFaceSet69->setTexCoord(*SoTextureCoordinate70);

SoCoordinate* SoCoordinate71 = new SoCoordinate();
SoCoordinate71->setPoint(new float[]{0.7186,0.9688,0.0234,0.3632,0.9688,0.9354,-0.4353,0.9688,1.12,-1.076,0.9688,0.603,-1.076,0.9688,-0.3911,-0.4353,0.9688,-0.9079,0.3632,0.9688,-0.7235,2.337,-4.613,0.0234,1.46,-3.622,2.019,1.236,-1.628,2.42,2.118,-1.912,0.0234,-0.8111,-3.622,2.567,-0.7468,-1.628,2.903,-2.254,-4.613,1.255,-2.337,-1.912,0.9793,-2.254,-5.383,-1.368,-2.337,-1.912,-0.9325,-0.8111,-5.383,-2.903,-0.7468,-1.912,-2.368,1.46,-5.383,-2.355,1.236,-1.912,-1.885,1.121,-0.0032,1.896,1.933,-0.0032,0.0234,-0.7056,-0.0032,2.318,-2.17,-0.0032,1.136,-2.17,-0.0032,-0.9244,-0.7056,-0.0032,-2.061,1.121,-0.0032,-1.64,1.607,-12.92,0.0032,0.9216,-12.91,1.565,-0.619,-12.91,1.951,-1.854,-12.92,0.8701,-1.854,-12.94,-0.9762,-0.619,-12.94,-1.742,0.9216,-12.94,-1.356,0.7072,-14.53,0.0239,0.3604,-14.53,0.814,-0.4188,-14.53,1.009,-1.044,-14.53,0.4624,-1.044,-14.54,-0.4714,-0.4188,-14.54,-0.8587,0.3604,-14.54,-0.6635}, 126);
SoIndexedFaceSet69->setCoord(*SoCoordinate71);

SoShape65->setGeometry(*SoIndexedFaceSet69);

SoTransform64->addChild(*SoShape65);

SoHAnimSegment63->addChild(*SoTransform64);

SoHAnimJoint62->addChildren(*SoHAnimSegment63);

SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint72->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint72->setCenter(new float[]{3.854,3.939,-0.7038});
SoHAnimSegment* SoHAnimSegment73 = new SoHAnimSegment();
SoHAnimSegment73->setDEF(QString("hanim_l_talus"));
SoHAnimSegment73->X3DNode::setName(QString("l_talus"));
SoTransform* SoTransform74 = new SoTransform();
SoTransform74->setTranslation(new float[]{3.854,3.939,-0.7038});
SoShape* SoShape75 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance76 = new SoVRMLAppearance();
SoMaterial* SoMaterial77 = new SoMaterial();
SoMaterial77->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance76->addChild(*SoMaterial77);

SoImageTexture* SoImageTexture78 = new SoImageTexture();
SoImageTexture78->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance76->addChild(*SoImageTexture78);

SoShape75->addChild(*SoVRMLAppearance76);

SoIndexedFaceSet* SoIndexedFaceSet79 = new SoIndexedFaceSet();
SoIndexedFaceSet79->setCreaseAngle(3.14159);
SoIndexedFaceSet79->setTexCoordIndex(new int32_t[]{1,14,18,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,14,1,3,-1,3,6,14,-1,19,2,0,-1,0,16,19,-1,0,1,17,-1,17,16,0,-1,17,1,18,-1,7,23,15,-1,9,8,11,-1,11,10,9,-1,7,9,10,-1,10,12,7,-1,12,10,11,-1,11,13,12,-1,15,8,9,-1,9,7,15,-1,20,21,12,-1,12,13,20,-1,12,21,22,-1,22,7,12,-1,22,23,7,-1,26,27,28,-1,28,29,30,-1,30,31,24,-1,28,30,24,-1,26,28,24,-1,25,26,24,-1,19,16,25,-1,25,24,19,-1,16,17,26,-1,26,25,16,-1,17,18,27,-1,27,26,17,-1,18,14,28,-1,28,27,18,-1,15,23,29,-1,29,28,15,-1,23,22,30,-1,30,29,23,-1,22,21,31,-1,31,30,22,-1,21,20,24,-1,24,31,21,-1}, 200);
SoIndexedFaceSet79->setCoordIndex(new int32_t[]{1,11,14,-1,3,4,5,-1,5,6,3,-1,1,0,4,-1,4,3,1,-1,0,2,5,-1,5,4,0,-1,11,1,3,-1,3,6,11,-1,15,2,0,-1,0,12,15,-1,0,1,13,-1,13,12,0,-1,13,1,14,-1,7,18,11,-1,8,6,5,-1,5,9,8,-1,7,8,9,-1,9,10,7,-1,10,9,5,-1,5,2,10,-1,11,6,8,-1,8,7,11,-1,15,16,10,-1,10,2,15,-1,10,16,17,-1,17,7,10,-1,17,18,7,-1,21,22,23,-1,23,24,25,-1,25,26,19,-1,23,25,19,-1,21,23,19,-1,20,21,19,-1,15,12,20,-1,20,19,15,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,11,23,-1,23,22,14,-1,11,18,24,-1,24,23,11,-1,18,17,25,-1,25,24,18,-1,17,16,26,-1,26,25,17,-1,16,15,19,-1,19,26,16,-1}, 200);
SoTextureCoordinate* SoTextureCoordinate80 = new SoTextureCoordinate();
SoTextureCoordinate80->setPoint(new float[]{0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398}, 64);
SoIndexedFaceSet79->setTexCoord(*SoTextureCoordinate80);

SoCoordinate* SoCoordinate81 = new SoCoordinate();
SoCoordinate81->setPoint(new float[]{0.9768,-0.0192,-1.681,1.657,-0.0192,0.4309,0.0,-0.0192,-1.681,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0.0,0.7316,-1.463,0.0,0.7316,1.471,-1.657,-0.0192,0.4309,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,-0.9768,-0.0192,-1.681,0.0,-0.0192,1.75,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0.0,-0.6007,-2.046,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0.0,-1.207,-1.841,1.023,-1.207,-1.841,1.913,-1.223,0.5161,1.601,-0.9325,1.406,0.0,-0.6582,1.708,-1.601,-0.9325,1.406,-1.913,-1.223,0.5161,-1.023,-1.207,-1.841}, 81);
SoIndexedFaceSet79->setCoord(*SoCoordinate81);

SoShape75->setGeometry(*SoIndexedFaceSet79);

SoTransform74->addChild(*SoShape75);

SoHAnimSegment73->addChild(*SoTransform74);

SoHAnimJoint72->addChildren(*SoHAnimSegment73);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->setDEF(QString("hanim_l_tarsometatarsal_2"));
SoHAnimJoint82->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint82->setCenter(new float[]{3.854,3.336,-1.514});
SoHAnimSegment* SoHAnimSegment83 = new SoHAnimSegment();
SoHAnimSegment83->setDEF(QString("hanim_l_metatarsal_2"));
SoHAnimSegment83->X3DNode::setName(QString("l_metatarsal_2"));
SoTransform* SoTransform84 = new SoTransform();
SoTransform84->setTranslation(new float[]{3.854,3.336,-1.514});
SoShape* SoShape85 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance86 = new SoVRMLAppearance();
SoMaterial* SoMaterial87 = new SoMaterial();
SoMaterial87->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance86->addChild(*SoMaterial87);

SoImageTexture* SoImageTexture88 = new SoImageTexture();
SoImageTexture88->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance86->addChild(*SoImageTexture88);

SoShape85->addChild(*SoVRMLAppearance86);

SoIndexedFaceSet* SoIndexedFaceSet89 = new SoIndexedFaceSet();
SoIndexedFaceSet89->setCreaseAngle(3.14159);
SoIndexedFaceSet89->setTexCoordIndex(new int32_t[]{2,6,5,-1,5,0,2,-1,14,0,5,-1,5,16,14,-1,3,2,0,-1,0,1,3,-1,15,1,0,-1,0,14,15,-1,1,15,21,-1,21,4,1,-1,8,7,10,-1,10,9,8,-1,17,18,10,-1,10,7,17,-1,12,11,7,-1,7,8,12,-1,19,17,7,-1,7,11,19,-1,11,13,20,-1,20,19,11,-1,23,24,25,-1,23,25,26,-1,23,26,22,-1,30,31,32,-1,33,27,28,-1,32,33,28,-1,30,32,28,-1,30,28,29,-1,5,6,23,-1,23,22,5,-1,9,10,24,-1,24,23,9,-1,10,18,25,-1,25,24,10,-1,18,16,26,-1,26,25,18,-1,16,5,22,-1,22,26,16,-1,15,14,28,-1,28,27,15,-1,14,16,29,-1,29,28,14,-1,16,18,30,-1,30,29,16,-1,18,17,31,-1,31,30,18,-1,17,19,32,-1,32,31,17,-1,19,20,33,-1,33,32,19,-1,21,15,27,-1,27,33,21,-1}, 208);
SoIndexedFaceSet89->setCoordIndex(new int32_t[]{6,4,3,-1,3,0,6,-1,9,0,3,-1,3,11,9,-1,2,6,0,-1,0,1,2,-1,10,1,0,-1,0,9,10,-1,1,10,15,-1,15,2,1,-1,6,5,7,-1,7,4,6,-1,12,13,7,-1,7,5,12,-1,2,8,5,-1,5,6,2,-1,14,12,5,-1,5,8,14,-1,8,2,15,-1,15,14,8,-1,17,18,19,-1,17,19,20,-1,17,20,16,-1,24,25,26,-1,27,21,22,-1,26,27,22,-1,24,26,22,-1,24,22,23,-1,3,4,17,-1,17,16,3,-1,4,7,18,-1,18,17,4,-1,7,13,19,-1,19,18,7,-1,13,11,20,-1,20,19,13,-1,11,3,16,-1,16,20,11,-1,10,9,22,-1,22,21,10,-1,9,11,23,-1,23,22,9,-1,11,13,24,-1,24,23,11,-1,13,12,25,-1,25,24,13,-1,12,14,26,-1,26,25,12,-1,14,15,27,-1,27,26,14,-1,15,10,21,-1,21,27,15,-1}, 208);
SoTextureCoordinate* SoTextureCoordinate90 = new SoTextureCoordinate();
SoTextureCoordinate90->setPoint(new float[]{0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186}, 68);
SoIndexedFaceSet89->setTexCoord(*SoTextureCoordinate90);

SoCoordinate* SoCoordinate91 = new SoCoordinate();
SoCoordinate91->setPoint(new float[]{1.409,-1.322,-2.067,1.409,-3.344,-0.8708,0.0,-3.344,-0.8708,1.109,0.0027,-1.236,0.0,0.0027,-1.236,-1.409,-1.322,-2.067,0.0,-1.322,-2.067,-1.109,0.0027,-1.236,-1.409,-3.344,-0.8708,2.927,-1.322,1.241,2.089,-3.344,1.241,2.045,0.0027,1.241,-2.927,-1.322,1.241,-2.045,0.0027,1.241,-2.089,-3.344,1.241,0.0,-3.344,1.241,0.9442,0.2881,-0.8816,0.0,0.2881,-0.8816,-0.9442,0.2881,-0.8816,-1.7,0.2881,1.12,1.7,0.2881,1.12,1.86,-3.19,2.175,2.541,-1.36,2.175,1.861,-0.3398,2.175,-1.861,-0.3398,2.175,-2.541,-1.36,2.175,-1.86,-3.19,2.175,0.0,-3.19,2.175}, 84);
SoIndexedFaceSet89->setCoord(*SoCoordinate91);

SoShape85->setGeometry(*SoIndexedFaceSet89);

SoTransform84->addChild(*SoShape85);

SoHAnimSegment83->addChild(*SoTransform84);

SoHAnimJoint82->addChildren(*SoHAnimSegment83);

SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint92->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint92->setCenter(new float[]{3.854,3.64,0.7402});
SoHAnimSegment* SoHAnimSegment93 = new SoHAnimSegment();
SoHAnimSegment93->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimSegment93->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform94 = new SoTransform();
SoTransform94->setTranslation(new float[]{3.854,3.64,0.7402});
SoShape* SoShape95 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance96 = new SoVRMLAppearance();
SoMaterial* SoMaterial97 = new SoMaterial();
SoMaterial97->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance96->addChild(*SoMaterial97);

SoImageTexture* SoImageTexture98 = new SoImageTexture();
SoImageTexture98->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance96->addChild(*SoImageTexture98);

SoShape95->addChild(*SoVRMLAppearance96);

SoIndexedFaceSet* SoIndexedFaceSet99 = new SoIndexedFaceSet();
SoIndexedFaceSet99->setCreaseAngle(3.14159);
SoIndexedFaceSet99->setTexCoordIndex(new int32_t[]{4,5,12,-1,4,12,13,-1,0,4,13,-1,1,0,13,-1,13,14,1,-1,1,14,19,-1,19,3,1,-1,2,21,12,-1,12,5,2,-1,15,10,7,-1,16,15,7,-1,6,16,7,-1,8,17,16,-1,16,6,8,-1,8,11,18,-1,18,17,8,-1,9,10,15,-1,15,20,9,-1,24,25,26,-1,24,26,27,-1,24,27,28,-1,23,24,28,-1,23,28,22,-1,30,31,32,-1,32,33,34,-1,30,32,34,-1,30,34,35,-1,30,35,36,-1,30,36,29,-1,0,1,23,-1,23,22,0,-1,1,3,24,-1,24,23,1,-1,11,8,25,-1,25,24,11,-1,8,6,26,-1,26,25,8,-1,6,7,27,-1,27,26,6,-1,7,4,28,-1,28,27,7,-1,4,0,22,-1,22,28,4,-1,13,12,30,-1,30,29,13,-1,12,21,31,-1,31,30,12,-1,20,15,32,-1,32,31,20,-1,15,16,33,-1,33,32,15,-1,16,17,34,-1,34,33,16,-1,17,18,35,-1,35,34,17,-1,19,14,36,-1,36,35,19,-1,14,13,29,-1,29,36,14,-1,7,10,9,-1,4,7,9,-1,5,4,9,-1}, 248);
SoIndexedFaceSet99->setCoordIndex(new int32_t[]{3,4,10,-1,3,10,11,-1,0,3,11,-1,1,0,11,-1,11,12,1,-1,1,12,16,-1,16,9,1,-1,2,17,10,-1,10,4,2,-1,13,8,6,-1,14,13,6,-1,5,14,6,-1,7,15,14,-1,14,5,7,-1,7,9,16,-1,16,15,7,-1,2,8,13,-1,13,17,2,-1,20,21,22,-1,20,22,23,-1,20,23,24,-1,19,20,24,-1,19,24,18,-1,26,27,28,-1,28,29,30,-1,26,28,30,-1,26,30,31,-1,26,31,32,-1,26,32,25,-1,0,1,19,-1,19,18,0,-1,1,9,20,-1,20,19,1,-1,9,7,21,-1,21,20,9,-1,7,5,22,-1,22,21,7,-1,5,6,23,-1,23,22,5,-1,6,3,24,-1,24,23,6,-1,3,0,18,-1,18,24,3,-1,11,10,26,-1,26,25,11,-1,10,17,27,-1,27,26,10,-1,17,13,28,-1,28,27,17,-1,13,14,29,-1,29,28,13,-1,14,15,30,-1,30,29,14,-1,15,16,31,-1,31,30,15,-1,16,12,32,-1,32,31,16,-1,12,11,25,-1,25,32,12,-1,6,8,2,-1,3,6,2,-1,4,3,2,-1}, 248);
SoTextureCoordinate* SoTextureCoordinate100 = new SoTextureCoordinate();
SoTextureCoordinate100->setPoint(new float[]{0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.4607,0.0558,0.464,0.1246,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166}, 74);
SoIndexedFaceSet99->setTexCoord(*SoTextureCoordinate100);

SoCoordinate* SoCoordinate101 = new SoCoordinate();
SoCoordinate101->setPoint(new float[]{2.927,-1.627,-1.013,2.089,-3.648,-1.013,0.0,0.2797,0.3064,2.045,-0.3017,-1.013,1.695,0.0029,-0.0151,-2.927,-1.627,-1.013,-2.045,-0.3017,-1.013,-2.089,-3.648,-1.013,-1.695,0.0029,-0.0151,0.0,-3.648,-1.013,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,0.0,-3.648,0.9192,0.0,-0.0274,1.661,2.405,-1.656,-1.915,1.75,-2.942,-1.915,0.0,-2.942,-1.915,-1.75,-2.942,-1.915,-2.405,-1.656,-1.915,-1.742,-0.5681,-1.915,1.742,-0.5681,-1.915,2.393,-1.966,1.567,1.583,-0.608,1.784,0.0,-0.3446,2.283,-1.583,-0.608,1.784,-2.393,-1.966,1.567,-1.955,-3.469,1.601,0.0,-3.469,1.601,1.955,-3.469,1.601}, 99);
SoIndexedFaceSet99->setCoord(*SoCoordinate101);

SoShape95->setGeometry(*SoIndexedFaceSet99);

SoTransform94->addChild(*SoShape95);

SoHAnimSegment93->addChild(*SoTransform94);

SoHAnimJoint92->addChildren(*SoHAnimSegment93);

SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->setDEF(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint102->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint102->setCenter(new float[]{3.854,1.956,1.682});
SoHAnimSegment* SoHAnimSegment103 = new SoHAnimSegment();
SoHAnimSegment103->setDEF(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimSegment103->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoTransform* SoTransform104 = new SoTransform();
SoTransform104->setTranslation(new float[]{3.854,1.956,1.682});
SoShape* SoShape105 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance106 = new SoVRMLAppearance();
SoMaterial* SoMaterial107 = new SoMaterial();
SoMaterial107->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance106->addChild(*SoMaterial107);

SoImageTexture* SoImageTexture108 = new SoImageTexture();
SoImageTexture108->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance106->addChild(*SoImageTexture108);

SoShape105->addChild(*SoVRMLAppearance106);

SoIndexedFaceSet* SoIndexedFaceSet109 = new SoIndexedFaceSet();
SoIndexedFaceSet109->setCreaseAngle(3.14159);
SoIndexedFaceSet109->setTexCoordIndex(new int32_t[]{1,3,2,-1,2,0,1,-1,4,5,3,-1,3,1,4,-1,5,4,6,-1,2,3,8,-1,8,7,2,-1,8,3,5,-1,5,9,8,-1,9,5,6,-1,6,10,9,-1,11,0,2,-1,2,7,11,-1,12,15,14,-1,14,13,12,-1,16,12,13,-1,13,17,16,-1,17,21,16,-1,14,18,19,-1,19,13,14,-1,19,20,17,-1,17,13,19,-1,20,22,21,-1,21,17,20,-1,23,18,14,-1,14,15,23,-1,25,26,27,-1,27,28,29,-1,29,30,31,-1,27,29,31,-1,25,27,31,-1,25,31,24,-1,7,8,25,-1,25,24,7,-1,8,9,26,-1,26,25,8,-1,9,10,27,-1,27,26,9,-1,22,20,28,-1,28,27,22,-1,20,19,29,-1,29,28,20,-1,19,18,30,-1,30,29,19,-1,18,23,31,-1,31,30,18,-1,11,7,24,-1,24,31,11,-1}, 192);
SoIndexedFaceSet109->setCoordIndex(new int32_t[]{3,1,0,-1,0,4,3,-1,10,2,1,-1,1,3,10,-1,2,10,15,-1,0,1,6,-1,6,5,0,-1,6,1,2,-1,2,7,6,-1,7,2,15,-1,15,16,7,-1,17,4,0,-1,0,5,17,-1,3,4,9,-1,9,8,3,-1,10,3,8,-1,8,11,10,-1,11,15,10,-1,9,12,13,-1,13,8,9,-1,13,14,11,-1,11,8,13,-1,14,16,15,-1,15,11,14,-1,17,12,9,-1,9,4,17,-1,19,20,21,-1,21,22,23,-1,23,24,25,-1,21,23,25,-1,19,21,25,-1,19,25,18,-1,5,6,19,-1,19,18,5,-1,6,7,20,-1,20,19,6,-1,7,16,21,-1,21,20,7,-1,16,14,22,-1,22,21,16,-1,14,13,23,-1,23,22,14,-1,13,12,24,-1,24,23,13,-1,12,17,25,-1,25,24,12,-1,17,5,18,-1,18,25,17,-1}, 192);
SoTextureCoordinate* SoTextureCoordinate110 = new SoTextureCoordinate();
SoTextureCoordinate110->setPoint(new float[]{0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166,0.4607,0.0558,0.464,0.1246,0.4868,0.1432}, 64);
SoIndexedFaceSet109->setTexCoord(*SoTextureCoordinate110);

SoCoordinate* SoCoordinate111 = new SoCoordinate();
SoCoordinate111->setPoint(new float[]{1.784,1.036,1.39,2.216,-0.5826,3.202,2.216,-1.964,2.834,0.0,-0.5826,4.521,0.0,1.138,3.008,1.74,1.362,0.2166,2.661,-0.1823,-0.0226,2.14,-1.964,-0.0226,-2.216,-0.5826,3.202,-1.784,1.036,1.39,0.0,-1.964,4.154,-2.216,-1.964,2.834,-1.74,1.362,0.2166,-2.661,-0.1823,-0.0226,-2.14,-1.964,-0.0226,0.0,-1.964,2.834,0.0,-1.964,-0.0226,0.0,1.657,0.7196,1.601,1.243,-0.4207,2.424,-0.1368,-0.64,1.977,-1.746,-0.61,0.0,-1.746,-0.61,-1.977,-1.746,-0.61,-2.424,-0.1368,-0.64,-1.601,1.243,-0.4207,0.0,1.51,0.0788}, 78);
SoIndexedFaceSet109->setCoord(*SoCoordinate111);

SoShape105->setGeometry(*SoIndexedFaceSet109);

SoTransform104->addChild(*SoShape105);

SoHAnimSegment103->addChild(*SoTransform104);

SoHAnimJoint102->addChildren(*SoHAnimSegment103);

SoHAnimJoint92->addChildren(*SoHAnimJoint102);

SoHAnimJoint82->addChildren(*SoHAnimJoint92);

SoHAnimJoint72->addChildren(*SoHAnimJoint82);

SoHAnimJoint62->addChildren(*SoHAnimJoint72);

SoHAnimJoint52->addChildren(*SoHAnimJoint62);

SoHAnimJoint42->addChildren(*SoHAnimJoint52);

SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->setDEF(QString("hanim_r_hip"));
SoHAnimJoint112->X3DNode::setName(QString("r_hip"));
SoHAnimJoint112->setCenter(new float[]{-4.207,35.83,-0.8155});
SoHAnimSegment* SoHAnimSegment113 = new SoHAnimSegment();
SoHAnimSegment113->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment113->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform114 = new SoTransform();
SoTransform114->setTranslation(new float[]{-4.207,35.83,-0.8155});
SoShape* SoShape115 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance116 = new SoVRMLAppearance();
SoMaterial* SoMaterial117 = new SoMaterial();
SoMaterial117->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance116->addChild(*SoMaterial117);

SoImageTexture* SoImageTexture118 = new SoImageTexture();
SoImageTexture118->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance116->addChild(*SoImageTexture118);

SoShape115->addChild(*SoVRMLAppearance116);

SoIndexedFaceSet* SoIndexedFaceSet119 = new SoIndexedFaceSet();
SoIndexedFaceSet119->setCreaseAngle(3.14159);
SoIndexedFaceSet119->setTexCoordIndex(new int32_t[]{0,2,3,-1,1,0,3,-1,3,4,5,-1,1,3,5,-1,6,1,5,-1,7,9,8,-1,8,10,7,-1,10,8,11,-1,11,12,10,-1,12,11,13,-1,13,14,12,-1,14,13,15,-1,15,16,14,-1,16,15,17,-1,17,18,16,-1,18,17,19,-1,19,20,18,-1,20,19,9,-1,9,7,20,-1,9,22,21,-1,21,8,9,-1,8,21,23,-1,23,11,8,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,15,13,-1,15,25,26,-1,26,17,15,-1,17,26,27,-1,27,19,17,-1,19,27,22,-1,22,9,19,-1,22,29,28,-1,28,21,22,-1,21,28,30,-1,30,23,21,-1,23,30,31,-1,31,24,23,-1,24,31,32,-1,32,25,24,-1,25,32,33,-1,33,26,25,-1,26,33,34,-1,34,27,26,-1,27,34,29,-1,29,22,27,-1,46,45,44,-1,47,46,44,-1,44,43,42,-1,47,44,42,-1,48,47,42,-1,35,28,29,-1,29,36,35,-1,37,30,28,-1,28,35,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,36,29,34,-1,34,41,36,-1,51,50,49,-1,49,52,51,-1,54,53,50,-1,50,51,54,-1,56,55,53,-1,53,54,56,-1,58,57,55,-1,55,56,58,-1,60,59,57,-1,57,58,60,-1,62,61,59,-1,59,60,62,-1,52,49,61,-1,61,62,52,-1,1,7,10,-1,10,0,1,-1,0,10,12,-1,12,2,0,-1,2,12,14,-1,14,3,2,-1,3,14,16,-1,16,4,3,-1,4,16,18,-1,18,5,4,-1,5,18,20,-1,20,6,5,-1,6,20,7,-1,7,1,6,-1,63,51,52,-1,52,64,63,-1,65,54,51,-1,51,63,65,-1,66,56,54,-1,54,65,66,-1,67,58,56,-1,56,66,67,-1,68,60,58,-1,58,67,68,-1,69,62,60,-1,60,68,69,-1,64,52,62,-1,62,69,64,-1,43,63,64,-1,64,42,43,-1,44,65,63,-1,63,43,44,-1,45,66,65,-1,65,44,45,-1,46,67,66,-1,66,45,46,-1,47,68,67,-1,67,46,47,-1,48,69,68,-1,68,47,48,-1,42,64,69,-1,69,48,42,-1}, 488);
SoIndexedFaceSet119->setCoordIndex(new int32_t[]{43,44,45,-1,42,43,45,-1,45,46,47,-1,42,45,47,-1,48,42,47,-1,0,7,8,-1,8,1,0,-1,1,8,9,-1,9,2,1,-1,2,9,10,-1,10,3,2,-1,3,10,11,-1,11,4,3,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,7,-1,7,0,6,-1,7,14,15,-1,15,8,7,-1,8,15,16,-1,16,9,8,-1,9,16,17,-1,17,10,9,-1,10,17,18,-1,18,11,10,-1,11,18,19,-1,19,12,11,-1,12,19,20,-1,20,13,12,-1,13,20,14,-1,14,7,13,-1,14,21,22,-1,22,15,14,-1,15,22,23,-1,23,16,15,-1,16,23,24,-1,24,17,16,-1,17,24,25,-1,25,18,17,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,20,19,-1,20,27,21,-1,21,14,20,-1,60,59,58,-1,61,60,58,-1,58,57,56,-1,61,58,56,-1,62,61,56,-1,29,22,21,-1,21,28,29,-1,30,23,22,-1,22,29,30,-1,31,24,23,-1,23,30,31,-1,32,25,24,-1,24,31,32,-1,33,26,25,-1,25,32,33,-1,34,27,26,-1,26,33,34,-1,28,21,27,-1,27,34,28,-1,36,29,28,-1,28,35,36,-1,37,30,29,-1,29,36,37,-1,38,31,30,-1,30,37,38,-1,39,32,31,-1,31,38,39,-1,40,33,32,-1,32,39,40,-1,41,34,33,-1,33,40,41,-1,35,28,34,-1,34,41,35,-1,42,0,1,-1,1,43,42,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,47,46,-1,47,5,6,-1,6,48,47,-1,48,6,0,-1,0,42,48,-1,50,36,35,-1,35,49,50,-1,51,37,36,-1,36,50,51,-1,52,38,37,-1,37,51,52,-1,53,39,38,-1,38,52,53,-1,54,40,39,-1,39,53,54,-1,55,41,40,-1,40,54,55,-1,49,35,41,-1,41,55,49,-1,57,50,49,-1,49,56,57,-1,58,51,50,-1,50,57,58,-1,59,52,51,-1,51,58,59,-1,60,53,52,-1,52,59,60,-1,61,54,53,-1,53,60,61,-1,62,55,54,-1,54,61,62,-1,56,49,55,-1,55,62,56,-1}, 488);
SoTextureCoordinate* SoTextureCoordinate120 = new SoTextureCoordinate();
SoTextureCoordinate120->setPoint(new float[]{0.719,0.5576,0.6284,0.5576,0.7414,0.5576,0.6787,0.5576,0.5781,0.5576,0.5154,0.5576,0.5378,0.5576,0.6284,0.5029,0.7509,0.3997,0.6284,0.3997,0.7509,0.5029,0.7811,0.3997,0.7811,0.5029,0.6964,0.3997,0.6964,0.5029,0.5604,0.3997,0.5604,0.5029,0.4756,0.3997,0.4756,0.5029,0.5059,0.3997,0.5059,0.5029,0.7509,0.3197,0.6284,0.3197,0.7811,0.3197,0.6964,0.3197,0.5604,0.3197,0.4756,0.3197,0.5059,0.3197,0.7651,0.2166,0.6284,0.2166,0.7989,0.2166,0.7043,0.2166,0.5525,0.2166,0.4579,0.2166,0.4917,0.2166,0.7224,0.263,0.6284,0.263,0.7456,0.263,0.6805,0.263,0.5762,0.263,0.5112,0.263,0.5344,0.263,0.8705,0.5452,0.8705,0.5383,0.8705,0.5369,0.8705,0.5408,0.8705,0.5483,0.8705,0.5522,0.8705,0.5509,0.917,0.5452,0.917,0.5266,0.89,0.5304,0.89,0.5452,0.917,0.522,0.89,0.5268,0.917,0.5349,0.89,0.537,0.917,0.5555,0.89,0.5534,0.917,0.5684,0.89,0.5636,0.917,0.5638,0.89,0.56,0.8746,0.531,0.8746,0.5452,0.8746,0.5279,0.8746,0.5368,0.8746,0.5524,0.8746,0.5613,0.8746,0.5581}, 140);
SoIndexedFaceSet119->setTexCoord(*SoTextureCoordinate120);

SoCoordinate* SoCoordinate121 = new SoCoordinate();
SoCoordinate121->setPoint(new float[]{-2.96,-0.0706,0.0,-1.643,-0.0706,3.209,1.316,-0.0706,4.002,3.367,-0.0706,1.781,3.367,-0.0706,-1.781,1.316,-0.0706,-4.002,-1.643,-0.0706,-3.209,-2.96,-3.82,0.0,-1.643,-3.82,3.209,1.316,-3.82,4.002,3.367,-3.82,1.781,3.367,-3.82,-1.781,1.316,-3.82,-4.002,-1.643,-3.82,-3.209,-2.96,-10.32,0.0,-1.643,-10.32,3.209,1.316,-10.32,4.002,3.367,-10.32,1.781,3.367,-10.32,-1.781,1.316,-10.32,-4.002,-1.643,-10.32,-3.209,-3.367,-16.94,0.0,-1.897,-16.94,3.582,1.407,-16.94,4.467,3.355,-16.94,1.988,3.355,-16.94,-1.988,1.407,-16.94,-4.467,-1.897,-16.94,-3.582,-2.146,-8.794,0.0,-1.136,-8.794,2.462,1.135,-8.794,3.07,2.633,-8.794,1.366,2.633,-8.794,-1.366,1.135,-8.794,-3.07,-1.136,-8.794,-2.462,-2.156,-15.25,0.0,-1.225,-15.25,1.956,0.8662,-15.25,2.439,2.543,-15.25,1.085,2.543,-15.25,-1.085,0.8662,-15.25,-2.439,-1.225,-15.25,-1.956,-2.051,1.92,0.0,-1.076,1.92,2.375,1.114,1.92,2.961,2.87,1.92,1.318,2.87,1.92,-1.318,1.114,1.92,-2.961,-1.076,1.92,-2.375,-1.842,-18.93,0.0,-1.03,-18.93,1.873,0.7965,-18.93,2.295,2.261,-18.93,1.113,2.261,-18.93,-0.9478,0.7965,-18.93,-2.13,-1.03,-18.93,-1.708,-0.6277,-19.91,0.0,-0.2723,-19.91,0.912,0.5262,-19.91,1.096,1.167,-19.91,0.5796,1.167,-19.91,-0.4145,0.5262,-19.91,-0.9313,-0.2723,-19.91,-0.7469}, 189);
SoIndexedFaceSet119->setCoord(*SoCoordinate121);

SoShape115->setGeometry(*SoIndexedFaceSet119);

SoTransform114->addChild(*SoShape115);

SoHAnimSegment113->addChild(*SoTransform114);

SoHAnimJoint112->addChildren(*SoHAnimSegment113);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("hanim_r_knee"));
SoHAnimJoint122->X3DNode::setName(QString("r_knee"));
SoHAnimJoint122->setCenter(new float[]{-4.116,17.26,-0.8639});
SoHAnimSegment* SoHAnimSegment123 = new SoHAnimSegment();
SoHAnimSegment123->setDEF(QString("hanim_r_calf"));
SoHAnimSegment123->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setTranslation(new float[]{-4.116,17.26,-0.8639});
SoShape* SoShape125 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance126 = new SoVRMLAppearance();
SoMaterial* SoMaterial127 = new SoMaterial();
SoMaterial127->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance126->addChild(*SoMaterial127);

SoImageTexture* SoImageTexture128 = new SoImageTexture();
SoImageTexture128->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance126->addChild(*SoImageTexture128);

SoShape125->addChild(*SoVRMLAppearance126);

SoIndexedFaceSet* SoIndexedFaceSet129 = new SoIndexedFaceSet();
SoIndexedFaceSet129->setCreaseAngle(3.14159);
SoIndexedFaceSet129->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1}, 300);
SoIndexedFaceSet129->setCoordIndex(new int32_t[]{0,1,2,-1,2,3,4,-1,2,4,5,-1,0,2,5,-1,6,0,5,-1,9,10,7,-1,7,8,9,-1,12,9,8,-1,8,11,12,-1,14,12,11,-1,11,13,14,-1,16,14,13,-1,13,15,16,-1,18,16,15,-1,15,17,18,-1,20,18,17,-1,17,19,20,-1,10,20,19,-1,19,7,10,-1,21,22,10,-1,10,9,21,-1,23,21,9,-1,9,12,23,-1,24,23,12,-1,12,14,24,-1,25,24,14,-1,14,16,25,-1,26,25,16,-1,16,18,26,-1,27,26,18,-1,18,20,27,-1,22,27,20,-1,20,10,22,-1,1,0,22,-1,22,21,1,-1,2,1,21,-1,21,23,2,-1,3,2,23,-1,23,24,3,-1,4,3,24,-1,24,25,4,-1,5,4,25,-1,25,26,5,-1,6,5,26,-1,26,27,6,-1,0,6,27,-1,27,22,0,-1,8,7,28,-1,28,29,8,-1,11,8,29,-1,29,30,11,-1,13,11,30,-1,30,31,13,-1,15,13,31,-1,31,32,15,-1,17,15,32,-1,32,33,17,-1,19,17,33,-1,33,34,19,-1,7,19,34,-1,34,28,7,-1,29,28,35,-1,35,36,29,-1,30,29,36,-1,36,37,30,-1,31,30,37,-1,37,38,31,-1,32,31,38,-1,38,39,32,-1,33,32,39,-1,39,40,33,-1,34,33,40,-1,40,41,34,-1,28,34,41,-1,41,35,28,-1}, 300);
SoTextureCoordinate* SoTextureCoordinate130 = new SoTextureCoordinate();
SoTextureCoordinate130->setPoint(new float[]{0.9309,0.5848,0.919,0.5848,0.8921,0.5848,0.8706,0.5848,0.8706,0.5848,0.8921,0.5848,0.919,0.5848,0.9845,0.5321,0.955,0.5475,0.9491,0.5599,0.9788,0.5571,0.8787,0.5475,0.8825,0.5599,0.8302,0.5321,0.8291,0.5571,0.8302,0.52,0.8291,0.5571,0.8787,0.52,0.8825,0.5571,0.955,0.52,0.9491,0.5571,0.9444,0.5755,0.9717,0.5755,0.8831,0.5755,0.8339,0.5755,0.8339,0.5755,0.8831,0.5755,0.9444,0.5755,0.9679,0.2444,0.9449,0.2445,0.8931,0.2445,0.8516,0.2444,0.8516,0.2442,0.8931,0.2442,0.9449,0.2442,0.9372,0.2243,0.9255,0.2244,0.8993,0.2244,0.8783,0.2243,0.8783,0.2243,0.8993,0.2243,0.9255,0.2243}, 84);
SoIndexedFaceSet129->setTexCoord(*SoTextureCoordinate130);

SoCoordinate* SoCoordinate131 = new SoCoordinate();
SoCoordinate131->setPoint(new float[]{-0.7186,0.9688,0.0234,-0.3632,0.9688,0.9354,0.4353,0.9688,1.12,1.076,0.9688,0.603,1.076,0.9688,-0.3911,0.4353,0.9688,-0.9079,-0.3632,0.9688,-0.7235,-2.337,-4.613,0.0234,-1.46,-3.622,2.019,-1.236,-1.628,2.42,-2.118,-1.912,0.0234,0.8111,-3.622,2.567,0.7468,-1.628,2.903,2.254,-4.613,1.255,2.337,-1.912,0.9793,2.254,-5.383,-1.368,2.337,-1.912,-0.9325,0.8111,-5.383,-2.903,0.7468,-1.912,-2.368,-1.46,-5.383,-2.355,-1.236,-1.912,-1.885,-1.121,-0.0032,1.896,-1.933,-0.0032,0.0234,0.7056,-0.0032,2.318,2.17,-0.0032,1.136,2.17,-0.0032,-0.9244,0.7056,-0.0032,-2.061,-1.121,-0.0032,-1.64,-1.607,-12.92,0.0032,-0.9216,-12.91,1.565,0.619,-12.91,1.951,1.854,-12.92,0.8701,1.854,-12.94,-0.9762,0.619,-12.94,-1.742,-0.9216,-12.94,-1.356,-0.7072,-14.53,0.0239,-0.3604,-14.53,0.814,0.4188,-14.53,1.009,1.044,-14.53,0.4624,1.044,-14.54,-0.4714,0.4188,-14.54,-0.8587,-0.3604,-14.54,-0.6635}, 126);
SoIndexedFaceSet129->setCoord(*SoCoordinate131);

SoShape125->setGeometry(*SoIndexedFaceSet129);

SoTransform124->addChild(*SoShape125);

SoHAnimSegment123->addChild(*SoTransform124);

SoHAnimJoint122->addChildren(*SoHAnimSegment123);

SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint132->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint132->setCenter(new float[]{-3.854,3.939,-0.7038});
SoHAnimSegment* SoHAnimSegment133 = new SoHAnimSegment();
SoHAnimSegment133->setDEF(QString("hanim_r_talus"));
SoHAnimSegment133->X3DNode::setName(QString("r_talus"));
SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setTranslation(new float[]{-3.854,3.939,-0.7038});
SoShape* SoShape135 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance136 = new SoVRMLAppearance();
SoMaterial* SoMaterial137 = new SoMaterial();
SoMaterial137->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance136->addChild(*SoMaterial137);

SoImageTexture* SoImageTexture138 = new SoImageTexture();
SoImageTexture138->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance136->addChild(*SoImageTexture138);

SoShape135->addChild(*SoVRMLAppearance136);

SoIndexedFaceSet* SoIndexedFaceSet139 = new SoIndexedFaceSet();
SoIndexedFaceSet139->setCreaseAngle(3.14159);
SoIndexedFaceSet139->setTexCoordIndex(new int32_t[]{1,18,14,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,14,6,3,-1,3,1,14,-1,19,16,0,-1,0,2,19,-1,0,16,17,-1,17,1,0,-1,17,18,1,-1,7,15,23,-1,9,10,11,-1,11,8,9,-1,7,12,10,-1,10,9,7,-1,12,13,11,-1,11,10,12,-1,15,7,9,-1,9,8,15,-1,20,13,12,-1,12,21,20,-1,12,7,22,-1,22,21,12,-1,22,7,23,-1,24,31,30,-1,30,29,28,-1,24,30,28,-1,28,27,26,-1,24,28,26,-1,25,24,26,-1,19,24,25,-1,25,16,19,-1,16,25,26,-1,26,17,16,-1,17,26,27,-1,27,18,17,-1,18,27,28,-1,28,14,18,-1,15,28,29,-1,29,23,15,-1,23,29,30,-1,30,22,23,-1,22,30,31,-1,31,21,22,-1,21,31,24,-1,24,20,21,-1}, 200);
SoIndexedFaceSet139->setCoordIndex(new int32_t[]{1,14,11,-1,3,6,5,-1,5,4,3,-1,1,3,4,-1,4,0,1,-1,0,4,5,-1,5,2,0,-1,11,6,3,-1,3,1,11,-1,15,12,0,-1,0,2,15,-1,0,12,13,-1,13,1,0,-1,13,14,1,-1,7,11,18,-1,8,9,5,-1,5,6,8,-1,7,10,9,-1,9,8,7,-1,10,2,5,-1,5,9,10,-1,11,7,8,-1,8,6,11,-1,15,2,10,-1,10,16,15,-1,10,7,17,-1,17,16,10,-1,17,7,18,-1,19,26,25,-1,25,24,23,-1,19,25,23,-1,23,22,21,-1,19,23,21,-1,20,19,21,-1,15,19,20,-1,20,12,15,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,11,14,-1,11,23,24,-1,24,18,11,-1,18,24,25,-1,25,17,18,-1,17,25,26,-1,26,16,17,-1,16,26,19,-1,19,15,16,-1}, 200);
SoTextureCoordinate* SoTextureCoordinate140 = new SoTextureCoordinate();
SoTextureCoordinate140->setPoint(new float[]{0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4216,0.1651,0.4637,0.1714,0.4216,0.1651,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.3819,0.171,0.4637,0.1714,0.4637,0.1714,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4394,0.1472,0.4637,0.1714,0.4394,0.1472,0.4244,0.1312,0.3861,0.1398}, 64);
SoIndexedFaceSet139->setTexCoord(*SoTextureCoordinate140);

SoCoordinate* SoCoordinate141 = new SoCoordinate();
SoCoordinate141->setPoint(new float[]{-0.9768,-0.0192,-1.681,-1.657,-0.0192,0.4309,0.0,-0.0192,-1.681,-1.403,0.7316,0.354,-0.8174,0.7316,-1.463,0.0,0.7316,-1.463,0.0,0.7316,1.471,1.657,-0.0192,0.4309,1.403,0.7316,0.354,0.8174,0.7316,-1.463,0.9768,-0.0192,-1.681,0.0,-0.0192,1.75,-1.109,-0.6007,-2.046,-2.045,-0.6007,0.4309,-1.695,-0.296,1.429,0.0,-0.6007,-2.046,1.109,-0.6007,-2.046,2.045,-0.6007,0.4309,1.695,-0.296,1.429,0.0,-1.207,-1.841,-1.023,-1.207,-1.841,-1.913,-1.223,0.5161,-1.601,-0.9325,1.406,0.0,-0.6582,1.708,1.601,-0.9325,1.406,1.913,-1.223,0.5161,1.023,-1.207,-1.841}, 81);
SoIndexedFaceSet139->setCoord(*SoCoordinate141);

SoShape135->setGeometry(*SoIndexedFaceSet139);

SoTransform134->addChild(*SoShape135);

SoHAnimSegment133->addChild(*SoTransform134);

SoHAnimJoint132->addChildren(*SoHAnimSegment133);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setDEF(QString("hanim_r_tarsometatarsal_2"));
SoHAnimJoint142->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint142->setCenter(new float[]{-3.854,3.336,-1.514});
SoHAnimSegment* SoHAnimSegment143 = new SoHAnimSegment();
SoHAnimSegment143->setDEF(QString("hanim_r_metatarsal_2"));
SoHAnimSegment143->X3DNode::setName(QString("r_metatarsal_2"));
SoTransform* SoTransform144 = new SoTransform();
SoTransform144->setTranslation(new float[]{-3.854,3.336,-1.514});
SoShape* SoShape145 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance146 = new SoVRMLAppearance();
SoMaterial* SoMaterial147 = new SoMaterial();
SoMaterial147->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance146->addChild(*SoMaterial147);

SoImageTexture* SoImageTexture148 = new SoImageTexture();
SoImageTexture148->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance146->addChild(*SoImageTexture148);

SoShape145->addChild(*SoVRMLAppearance146);

SoIndexedFaceSet* SoIndexedFaceSet149 = new SoIndexedFaceSet();
SoIndexedFaceSet149->setCreaseAngle(3.14159);
SoIndexedFaceSet149->setTexCoordIndex(new int32_t[]{2,0,5,-1,5,6,2,-1,14,16,5,-1,5,0,14,-1,3,1,0,-1,0,2,3,-1,15,14,0,-1,0,1,15,-1,1,4,21,-1,21,15,1,-1,8,9,10,-1,10,7,8,-1,17,7,10,-1,10,18,17,-1,12,8,7,-1,7,11,12,-1,19,11,7,-1,7,17,19,-1,11,19,20,-1,20,13,11,-1,23,22,26,-1,23,26,25,-1,23,25,24,-1,30,29,28,-1,28,27,33,-1,28,33,32,-1,30,28,32,-1,30,32,31,-1,5,22,23,-1,23,6,5,-1,9,23,24,-1,24,10,9,-1,10,24,25,-1,25,18,10,-1,18,25,26,-1,26,16,18,-1,16,26,22,-1,22,5,16,-1,15,27,28,-1,28,14,15,-1,14,28,29,-1,29,16,14,-1,16,29,30,-1,30,18,16,-1,18,30,31,-1,31,17,18,-1,17,31,32,-1,32,19,17,-1,19,32,33,-1,33,20,19,-1,21,33,27,-1,27,15,21,-1}, 208);
SoIndexedFaceSet149->setCoordIndex(new int32_t[]{6,0,3,-1,3,4,6,-1,9,11,3,-1,3,0,9,-1,2,1,0,-1,0,6,2,-1,10,9,0,-1,0,1,10,-1,1,2,15,-1,15,10,1,-1,6,4,7,-1,7,5,6,-1,12,5,7,-1,7,13,12,-1,2,6,5,-1,5,8,2,-1,14,8,5,-1,5,12,14,-1,8,14,15,-1,15,2,8,-1,17,16,20,-1,17,20,19,-1,17,19,18,-1,24,23,22,-1,22,21,27,-1,22,27,26,-1,24,22,26,-1,24,26,25,-1,3,16,17,-1,17,4,3,-1,4,17,18,-1,18,7,4,-1,7,18,19,-1,19,13,7,-1,13,19,20,-1,20,11,13,-1,11,20,16,-1,16,3,11,-1,10,21,22,-1,22,9,10,-1,9,22,23,-1,23,11,9,-1,11,23,24,-1,24,13,11,-1,13,24,25,-1,25,12,13,-1,12,25,26,-1,26,14,12,-1,14,26,27,-1,27,15,14,-1,15,27,21,-1,21,10,15,-1}, 208);
SoTextureCoordinate* SoTextureCoordinate150 = new SoTextureCoordinate();
SoTextureCoordinate150->setPoint(new float[]{0.3873,0.0706,0.3871,0.0221,0.3873,0.0706,0.3871,0.0221,0.3871,0.0221,0.3861,0.1398,0.3836,0.1404,0.3873,0.0706,0.3873,0.0706,0.3836,0.1404,0.3861,0.1398,0.3871,0.0221,0.3871,0.0221,0.3871,0.0221,0.433,0.0595,0.4411,0.0186,0.4244,0.1312,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.3861,0.1398,0.3836,0.1404,0.3861,0.1398,0.4244,0.1312,0.4244,0.1312,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.433,0.0595,0.4411,0.0186,0.4411,0.0186}, 68);
SoIndexedFaceSet149->setTexCoord(*SoTextureCoordinate150);

SoCoordinate* SoCoordinate151 = new SoCoordinate();
SoCoordinate151->setPoint(new float[]{-1.409,-1.322,-2.067,-1.409,-3.344,-0.8708,0.0,-3.344,-0.8708,-1.109,0.0027,-1.236,0.0,0.0027,-1.236,1.409,-1.322,-2.067,0.0,-1.322,-2.067,1.109,0.0027,-1.236,1.409,-3.344,-0.8708,-2.927,-1.322,1.241,-2.089,-3.344,1.241,-2.045,0.0027,1.241,2.927,-1.322,1.241,2.045,0.0027,1.241,2.089,-3.344,1.241,0.0,-3.344,1.241,-0.9442,0.2881,-0.8816,0.0,0.2881,-0.8816,0.9442,0.2881,-0.8816,1.7,0.2881,1.12,-1.7,0.2881,1.12,-1.86,-3.19,2.175,-2.541,-1.36,2.175,-1.861,-0.3398,2.175,1.861,-0.3398,2.175,2.541,-1.36,2.175,1.86,-3.19,2.175,0.0,-3.19,2.175}, 84);
SoIndexedFaceSet149->setCoord(*SoCoordinate151);

SoShape145->setGeometry(*SoIndexedFaceSet149);

SoTransform144->addChild(*SoShape145);

SoHAnimSegment143->addChild(*SoTransform144);

SoHAnimJoint142->addChildren(*SoHAnimSegment143);

SoHAnimJoint* SoHAnimJoint152 = new SoHAnimJoint();
SoHAnimJoint152->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint152->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint152->setCenter(new float[]{-3.854,3.64,0.7402});
SoHAnimSegment* SoHAnimSegment153 = new SoHAnimSegment();
SoHAnimSegment153->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimSegment153->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform154 = new SoTransform();
SoTransform154->setTranslation(new float[]{-3.854,3.64,0.7402});
SoShape* SoShape155 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance156 = new SoVRMLAppearance();
SoMaterial* SoMaterial157 = new SoMaterial();
SoMaterial157->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance156->addChild(*SoMaterial157);

SoImageTexture* SoImageTexture158 = new SoImageTexture();
SoImageTexture158->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance156->addChild(*SoImageTexture158);

SoShape155->addChild(*SoVRMLAppearance156);

SoIndexedFaceSet* SoIndexedFaceSet159 = new SoIndexedFaceSet();
SoIndexedFaceSet159->setCreaseAngle(3.14159);
SoIndexedFaceSet159->setTexCoordIndex(new int32_t[]{12,5,4,-1,13,12,4,-1,0,13,4,-1,1,14,13,-1,13,0,1,-1,1,3,19,-1,19,14,1,-1,2,5,12,-1,12,21,2,-1,7,10,15,-1,7,15,16,-1,6,7,16,-1,8,6,16,-1,16,17,8,-1,8,17,18,-1,18,11,8,-1,9,20,15,-1,15,10,9,-1,23,22,28,-1,26,25,24,-1,27,26,24,-1,28,27,24,-1,23,28,24,-1,30,29,36,-1,30,36,35,-1,30,35,34,-1,34,33,32,-1,30,34,32,-1,30,32,31,-1,0,22,23,-1,23,1,0,-1,1,23,24,-1,24,3,1,-1,11,24,25,-1,25,8,11,-1,8,25,26,-1,26,6,8,-1,6,26,27,-1,27,7,6,-1,7,27,28,-1,28,4,7,-1,4,28,22,-1,22,0,4,-1,13,29,30,-1,30,12,13,-1,12,30,31,-1,31,21,12,-1,20,31,32,-1,32,15,20,-1,15,32,33,-1,33,16,15,-1,16,33,34,-1,34,17,16,-1,17,34,35,-1,35,18,17,-1,19,35,36,-1,36,14,19,-1,14,36,29,-1,29,13,14,-1,9,10,7,-1,9,7,4,-1,5,9,4,-1}, 248);
SoIndexedFaceSet159->setCoordIndex(new int32_t[]{10,4,3,-1,11,10,3,-1,0,11,3,-1,1,12,11,-1,11,0,1,-1,1,9,16,-1,16,12,1,-1,2,4,10,-1,10,17,2,-1,6,8,13,-1,6,13,14,-1,5,6,14,-1,7,5,14,-1,14,15,7,-1,7,15,16,-1,16,9,7,-1,2,17,13,-1,13,8,2,-1,19,18,24,-1,22,21,20,-1,23,22,20,-1,24,23,20,-1,19,24,20,-1,26,25,32,-1,26,32,31,-1,26,31,30,-1,30,29,28,-1,26,30,28,-1,26,28,27,-1,0,18,19,-1,19,1,0,-1,1,19,20,-1,20,9,1,-1,9,20,21,-1,21,7,9,-1,7,21,22,-1,22,5,7,-1,5,22,23,-1,23,6,5,-1,6,23,24,-1,24,3,6,-1,3,24,18,-1,18,0,3,-1,11,25,26,-1,26,10,11,-1,10,26,27,-1,27,17,10,-1,17,27,28,-1,28,13,17,-1,13,28,29,-1,29,14,13,-1,14,29,30,-1,30,15,14,-1,15,30,31,-1,31,16,15,-1,16,31,32,-1,32,12,16,-1,12,32,25,-1,25,11,12,-1,2,8,6,-1,2,6,3,-1,4,2,3,-1}, 248);
SoTextureCoordinate* SoTextureCoordinate160 = new SoTextureCoordinate();
SoTextureCoordinate160->setPoint(new float[]{0.433,0.0595,0.4411,0.0186,0.4637,0.1714,0.4411,0.0186,0.4244,0.1312,0.4394,0.1472,0.433,0.0595,0.4244,0.1312,0.4411,0.0186,0.4637,0.1714,0.4394,0.1472,0.4411,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4949,0.0186,0.4868,0.1432,0.4868,0.1432,0.433,0.0595,0.4411,0.0186,0.4411,0.0186,0.4411,0.0186,0.433,0.0595,0.4244,0.1312,0.4244,0.1312,0.4607,0.0558,0.464,0.1246,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166}, 74);
SoIndexedFaceSet159->setTexCoord(*SoTextureCoordinate160);

SoCoordinate* SoCoordinate161 = new SoCoordinate();
SoCoordinate161->setPoint(new float[]{-2.927,-1.627,-1.013,-2.089,-3.648,-1.013,0.0,0.2797,0.3064,-2.045,-0.3017,-1.013,-1.695,0.0029,-0.0151,2.927,-1.627,-1.013,2.045,-0.3017,-1.013,2.089,-3.648,-1.013,1.695,0.0029,-0.0151,0.0,-3.648,-1.013,-1.74,-0.3226,1.158,-2.661,-1.866,0.9192,-2.14,-3.648,0.9192,1.74,-0.3226,1.158,2.661,-1.866,0.9192,2.14,-3.648,0.9192,0.0,-3.648,0.9192,0.0,-0.0274,1.661,-2.405,-1.656,-1.915,-1.75,-2.942,-1.915,0.0,-2.942,-1.915,1.75,-2.942,-1.915,2.405,-1.656,-1.915,1.742,-0.5681,-1.915,-1.742,-0.5681,-1.915,-2.393,-1.966,1.567,-1.583,-0.608,1.784,0.0,-0.3446,2.283,1.583,-0.608,1.784,2.393,-1.966,1.567,1.955,-3.469,1.601,0.0,-3.469,1.601,-1.955,-3.469,1.601}, 99);
SoIndexedFaceSet159->setCoord(*SoCoordinate161);

SoShape155->setGeometry(*SoIndexedFaceSet159);

SoTransform154->addChild(*SoShape155);

SoHAnimSegment153->addChild(*SoTransform154);

SoHAnimJoint152->addChildren(*SoHAnimSegment153);

SoHAnimJoint* SoHAnimJoint162 = new SoHAnimJoint();
SoHAnimJoint162->setDEF(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint162->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint162->setCenter(new float[]{-3.854,1.956,1.682});
SoHAnimSegment* SoHAnimSegment163 = new SoHAnimSegment();
SoHAnimSegment163->setDEF(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimSegment163->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoTransform* SoTransform164 = new SoTransform();
SoTransform164->setTranslation(new float[]{-3.854,1.956,1.682});
SoShape* SoShape165 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance166 = new SoVRMLAppearance();
SoMaterial* SoMaterial167 = new SoMaterial();
SoMaterial167->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance166->addChild(*SoMaterial167);

SoImageTexture* SoImageTexture168 = new SoImageTexture();
SoImageTexture168->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance166->addChild(*SoImageTexture168);

SoShape165->addChild(*SoVRMLAppearance166);

SoIndexedFaceSet* SoIndexedFaceSet169 = new SoIndexedFaceSet();
SoIndexedFaceSet169->setCreaseAngle(3.14159);
SoIndexedFaceSet169->setTexCoordIndex(new int32_t[]{1,0,2,-1,2,3,1,-1,4,1,3,-1,3,5,4,-1,5,6,4,-1,2,7,8,-1,8,3,2,-1,8,9,5,-1,5,3,8,-1,9,10,6,-1,6,5,9,-1,11,7,2,-1,2,0,11,-1,12,13,14,-1,14,15,12,-1,16,17,13,-1,13,12,16,-1,17,16,21,-1,14,13,19,-1,19,18,14,-1,19,13,17,-1,17,20,19,-1,20,17,21,-1,21,22,20,-1,23,15,14,-1,14,18,23,-1,25,24,31,-1,31,30,29,-1,29,28,27,-1,31,29,27,-1,25,31,27,-1,25,27,26,-1,7,24,25,-1,25,8,7,-1,8,25,26,-1,26,9,8,-1,9,26,27,-1,27,10,9,-1,22,27,28,-1,28,20,22,-1,20,28,29,-1,29,19,20,-1,19,29,30,-1,30,18,19,-1,18,30,31,-1,31,23,18,-1,11,31,24,-1,24,7,11,-1}, 192);
SoIndexedFaceSet169->setCoordIndex(new int32_t[]{3,4,0,-1,0,1,3,-1,10,3,1,-1,1,2,10,-1,2,15,10,-1,0,5,6,-1,6,1,0,-1,6,7,2,-1,2,1,6,-1,7,16,15,-1,15,2,7,-1,17,5,0,-1,0,4,17,-1,3,8,9,-1,9,4,3,-1,10,11,8,-1,8,3,10,-1,11,10,15,-1,9,8,13,-1,13,12,9,-1,13,8,11,-1,11,14,13,-1,14,11,15,-1,15,16,14,-1,17,4,9,-1,9,12,17,-1,19,18,25,-1,25,24,23,-1,23,22,21,-1,25,23,21,-1,19,25,21,-1,19,21,20,-1,5,18,19,-1,19,6,5,-1,6,19,20,-1,20,7,6,-1,7,20,21,-1,21,16,7,-1,16,21,22,-1,22,14,16,-1,14,22,23,-1,23,13,14,-1,13,23,24,-1,24,12,13,-1,12,24,25,-1,25,17,12,-1,17,25,18,-1,18,5,17,-1}, 192);
SoTextureCoordinate* SoTextureCoordinate170 = new SoTextureCoordinate();
SoTextureCoordinate170->setPoint(new float[]{0.532,0.098,0.5645,0.0707,0.4885,0.102,0.5026,0.044,0.5945,0.0186,0.5487,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4868,0.1432,0.5645,0.0707,0.5026,0.044,0.4885,0.102,0.532,0.098,0.5945,0.0186,0.5487,0.0186,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.5487,0.0186,0.4949,0.0186,0.4868,0.1432,0.464,0.1246,0.4607,0.0558,0.4904,0.0166,0.4949,0.0186,0.4904,0.0166,0.4607,0.0558,0.464,0.1246,0.4868,0.1432}, 64);
SoIndexedFaceSet169->setTexCoord(*SoTextureCoordinate170);

SoCoordinate* SoCoordinate171 = new SoCoordinate();
SoCoordinate171->setPoint(new float[]{-1.784,1.036,1.39,-2.216,-0.5826,3.202,-2.216,-1.964,2.834,0.0,-0.5826,4.521,0.0,1.138,3.008,-1.74,1.362,0.2166,-2.661,-0.1823,-0.0226,-2.14,-1.964,-0.0226,2.216,-0.5826,3.202,1.784,1.036,1.39,0.0,-1.964,4.154,2.216,-1.964,2.834,1.74,1.362,0.2166,2.661,-0.1823,-0.0226,2.14,-1.964,-0.0226,0.0,-1.964,2.834,0.0,-1.964,-0.0226,0.0,1.657,0.7196,-1.601,1.243,-0.4207,-2.424,-0.1368,-0.64,-1.977,-1.746,-0.61,0.0,-1.746,-0.61,1.977,-1.746,-0.61,2.424,-0.1368,-0.64,1.601,1.243,-0.4207,0.0,1.51,0.0788}, 78);
SoIndexedFaceSet169->setCoord(*SoCoordinate171);

SoShape165->setGeometry(*SoIndexedFaceSet169);

SoTransform164->addChild(*SoShape165);

SoHAnimSegment163->addChild(*SoTransform164);

SoHAnimJoint162->addChildren(*SoHAnimSegment163);

SoHAnimJoint152->addChildren(*SoHAnimJoint162);

SoHAnimJoint142->addChildren(*SoHAnimJoint152);

SoHAnimJoint132->addChildren(*SoHAnimJoint142);

SoHAnimJoint122->addChildren(*SoHAnimJoint132);

SoHAnimJoint112->addChildren(*SoHAnimJoint122);

SoHAnimJoint42->addChildren(*SoHAnimJoint112);

SoHAnimJoint32->addChildren(*SoHAnimJoint42);

SoHAnimJoint* SoHAnimJoint172 = new SoHAnimJoint();
SoHAnimJoint172->setDEF(QString("hanim_vl5"));
SoHAnimJoint172->X3DNode::setName(QString("vl5"));
SoHAnimJoint172->setCenter(new float[]{0.0,40.22,-0.6117});
SoHAnimSegment* SoHAnimSegment173 = new SoHAnimSegment();
SoHAnimSegment173->setDEF(QString("hanim_l5"));
SoHAnimSegment173->X3DNode::setName(QString("l5"));
SoTransform* SoTransform174 = new SoTransform();
SoTransform174->setTranslation(new float[]{0.0,40.22,-0.6117});
SoShape* SoShape175 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance176 = new SoVRMLAppearance();
SoMaterial* SoMaterial177 = new SoMaterial();
SoMaterial177->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance176->addChild(*SoMaterial177);

SoImageTexture* SoImageTexture178 = new SoImageTexture();
SoImageTexture178->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance176->addChild(*SoImageTexture178);

SoShape175->addChild(*SoVRMLAppearance176);

SoIndexedFaceSet* SoIndexedFaceSet179 = new SoIndexedFaceSet();
SoIndexedFaceSet179->setCreaseAngle(3.14159);
SoIndexedFaceSet179->setTexCoordIndex(new int32_t[]{1,0,6,-1,6,7,1,-1,2,1,7,-1,7,8,2,-1,4,3,9,-1,9,10,4,-1,3,5,11,-1,11,9,3,-1,5,2,8,-1,8,11,5,-1,12,13,15,-1,15,14,12,-1,9,7,6,-1,6,10,9,-1,11,8,7,-1,7,9,11,-1,6,0,17,-1,17,18,6,-1,10,6,18,-1,18,16,10,-1,21,20,19,-1,19,22,21,-1,24,23,20,-1,20,21,24,-1,27,26,25,-1,25,28,27,-1,28,25,29,-1,29,30,28,-1,30,29,23,-1,23,24,30,-1,31,34,33,-1,33,32,31,-1,25,26,19,-1,19,20,25,-1,29,25,20,-1,20,23,29,-1,19,35,36,-1,36,22,19,-1,26,37,35,-1,35,19,26,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,43,46,50,-1,39,43,50,-1,39,50,51,-1,39,51,38,-1,0,1,39,-1,39,38,0,-1,1,2,40,-1,40,39,1,-1,2,5,41,-1,41,40,2,-1,5,3,42,-1,42,41,5,-1,3,4,43,-1,43,42,3,-1,12,14,44,-1,44,43,12,-1,34,31,45,-1,45,44,34,-1,27,28,46,-1,46,45,27,-1,28,30,47,-1,47,46,28,-1,30,24,48,-1,48,47,30,-1,24,21,49,-1,49,48,24,-1,21,22,50,-1,50,49,21,-1,22,36,51,-1,51,50,22,-1,17,0,38,-1,38,51,17,-1}, 320);
SoIndexedFaceSet179->setCoordIndex(new int32_t[]{0,10,11,-1,11,5,0,-1,1,0,5,-1,5,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,1,6,-1,6,9,4,-1,2,7,26,-1,26,27,2,-1,8,5,11,-1,11,7,8,-1,9,6,5,-1,5,8,9,-1,11,10,13,-1,13,12,11,-1,7,11,12,-1,12,26,7,-1,16,15,14,-1,14,17,16,-1,19,18,15,-1,15,16,19,-1,22,21,20,-1,20,23,22,-1,23,20,24,-1,24,25,23,-1,25,24,18,-1,18,19,25,-1,22,27,26,-1,26,21,22,-1,20,21,14,-1,14,15,20,-1,24,20,15,-1,15,18,24,-1,14,12,13,-1,13,17,14,-1,21,26,12,-1,12,14,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,10,0,29,-1,29,28,10,-1,0,1,30,-1,30,29,0,-1,1,4,31,-1,31,30,1,-1,4,3,32,-1,32,31,4,-1,3,2,33,-1,33,32,3,-1,2,27,34,-1,34,33,2,-1,27,22,35,-1,35,34,27,-1,22,23,36,-1,36,35,22,-1,23,25,37,-1,37,36,23,-1,25,19,38,-1,38,37,25,-1,19,16,39,-1,39,38,19,-1,16,17,40,-1,40,39,16,-1,17,13,41,-1,41,40,17,-1,13,10,28,-1,28,41,13,-1}, 320);
SoTextureCoordinate* SoTextureCoordinate180 = new SoTextureCoordinate();
SoTextureCoordinate180->setPoint(new float[]{0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.2369,0.2375,0.3561,0.2404,0.1927,0.24,0.0206,0.2122,0.1067,0.2154,0.1463,0.2162,0.227,0.2131,0.3536,0.2151,0.1879,0.2143,0.3553,0.2398,0.3555,0.2151,0.3557,0.2401,0.3545,0.2151,0.3536,0.2151,0.019,0.2349,0.0206,0.2122,0.0206,0.2122,0.1067,0.2154,0.1011,0.241,0.019,0.2349,0.1463,0.2162,0.1445,0.2419,0.227,0.2131,0.3536,0.2151,0.3561,0.2404,0.2369,0.2375,0.1879,0.2143,0.1927,0.24,0.3553,0.2398,0.3555,0.2151,0.3545,0.2151,0.3557,0.2401,0.0206,0.2122,0.019,0.2349,0.3536,0.2151,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419,0.1011,0.241,0.019,0.2349,0.019,0.2349}, 104);
SoIndexedFaceSet179->setTexCoord(*SoTextureCoordinate180);

SoCoordinate* SoCoordinate181 = new SoCoordinate();
SoCoordinate181->setPoint(new float[]{4.178,1.114,3.711,5.76,1.15,1.754,1.52,0.9575,-3.918,3.95,0.9672,-2.776,5.309,1.072,-0.9797,3.789,0.0396,2.969,5.166,0.0713,1.445,1.593,-0.0798,-2.916,3.6,-0.0573,-2.087,4.841,-0.0103,-0.6841,1.635,1.083,4.322,1.595,0.0009,3.405,0.0,0.0009,3.405,0.0,1.083,4.322,-1.595,0.0009,3.405,-3.789,0.0396,2.969,-4.178,1.114,3.711,-1.635,1.083,4.322,-5.166,0.0713,1.445,-5.76,1.15,1.754,-3.6,-0.0573,-2.087,-1.593,-0.0798,-2.916,-1.52,0.9575,-3.918,-3.95,0.9672,-2.776,-4.841,-0.0103,-0.6841,-5.309,1.072,-0.9797,0.0,-0.0798,-2.916,0.0,0.9575,-3.918,1.609,1.473,4.099,4.053,1.473,3.512,5.524,1.473,1.692,5.098,1.473,-0.8893,3.806,1.473,-2.528,1.47,1.473,-3.626,0.0,1.473,-3.626,-1.47,1.473,-3.626,-3.806,1.473,-2.528,-5.098,1.473,-0.8893,-5.524,1.473,1.692,-4.053,1.473,3.512,-1.609,1.473,4.099,0.0,1.473,4.099}, 126);
SoIndexedFaceSet179->setCoord(*SoCoordinate181);

SoShape175->setGeometry(*SoIndexedFaceSet179);

SoTransform174->addChild(*SoShape175);

SoHAnimSegment173->addChild(*SoTransform174);

SoHAnimJoint172->addChildren(*SoHAnimSegment173);

SoHAnimJoint* SoHAnimJoint182 = new SoHAnimJoint();
SoHAnimJoint182->setDEF(QString("hanim_vl4"));
SoHAnimJoint182->X3DNode::setName(QString("vl4"));
SoHAnimJoint182->setCenter(new float[]{0.0,41.3,-0.6117});
SoHAnimSegment* SoHAnimSegment183 = new SoHAnimSegment();
SoHAnimSegment183->setDEF(QString("hanim_l4"));
SoHAnimSegment183->X3DNode::setName(QString("l4"));
SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setTranslation(new float[]{0.0,41.3,-0.6117});
SoShape* SoShape185 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance186 = new SoVRMLAppearance();
SoMaterial* SoMaterial187 = new SoMaterial();
SoMaterial187->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance186->addChild(*SoMaterial187);

SoImageTexture* SoImageTexture188 = new SoImageTexture();
SoImageTexture188->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance186->addChild(*SoImageTexture188);

SoShape185->addChild(*SoVRMLAppearance186);

SoIndexedFaceSet* SoIndexedFaceSet189 = new SoIndexedFaceSet();
SoIndexedFaceSet189->setCreaseAngle(3.14159);
SoIndexedFaceSet189->setTexCoordIndex(new int32_t[]{15,9,0,-1,0,4,15,-1,10,1,0,-1,0,9,10,-1,13,12,2,-1,2,5,13,-1,14,13,5,-1,5,6,14,-1,14,6,1,-1,1,10,14,-1,17,15,4,-1,4,7,17,-1,3,11,16,-1,16,8,3,-1,18,21,20,-1,20,19,18,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,29,27,-1,27,24,28,-1,28,22,23,-1,23,29,28,-1,30,31,21,-1,21,18,30,-1,32,35,34,-1,34,33,32,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,2,41,-1,41,40,5,-1,3,8,42,-1,42,41,3,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,7,4,36,-1,36,49,7,-1,9,15,51,-1,51,50,9,-1,15,17,52,-1,52,51,15,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,16,11,60,-1,60,59,16,-1,12,13,61,-1,61,60,12,-1,13,14,62,-1,62,61,13,-1,14,10,63,-1,63,62,14,-1,10,9,50,-1,50,63,10,-1}, 432);
SoIndexedFaceSet189->setCoordIndex(new int32_t[]{11,6,0,-1,0,3,11,-1,7,1,0,-1,0,6,7,-1,9,8,2,-1,2,4,9,-1,10,9,4,-1,4,5,10,-1,10,5,1,-1,1,7,10,-1,25,11,3,-1,3,26,25,-1,2,8,12,-1,12,27,2,-1,13,16,15,-1,15,14,13,-1,17,14,15,-1,15,18,17,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,23,17,18,-1,18,24,23,-1,25,26,16,-1,16,13,25,-1,21,27,12,-1,12,20,21,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,2,33,-1,33,32,4,-1,2,27,34,-1,34,33,2,-1,27,21,35,-1,35,34,27,-1,21,22,36,-1,36,35,21,-1,22,24,37,-1,37,36,22,-1,24,18,38,-1,38,37,24,-1,18,15,39,-1,39,38,18,-1,15,16,40,-1,40,39,15,-1,16,26,41,-1,41,40,16,-1,26,3,28,-1,28,41,26,-1,6,11,43,-1,43,42,6,-1,11,25,44,-1,44,43,11,-1,25,13,45,-1,45,44,25,-1,13,14,46,-1,46,45,13,-1,14,17,47,-1,47,46,14,-1,17,23,48,-1,48,47,17,-1,23,19,49,-1,49,48,23,-1,19,20,50,-1,50,49,19,-1,20,12,51,-1,51,50,20,-1,12,8,52,-1,52,51,12,-1,8,9,53,-1,53,52,8,-1,9,10,54,-1,54,53,9,-1,10,7,55,-1,55,54,10,-1,7,6,42,-1,42,55,7,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate190 = new SoTextureCoordinate();
SoTextureCoordinate190->setPoint(new float[]{0.1026,0.2616,0.1481,0.2604,0.3503,0.2575,0.3578,0.2568,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.1011,0.241,0.1445,0.2419,0.3553,0.2398,0.3561,0.2404,0.2369,0.2375,0.1927,0.24,0.019,0.2349,0.3557,0.2401,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1026,0.2616,0.0179,0.2574,0.1445,0.2419,0.1481,0.2604,0.2369,0.2375,0.3561,0.2404,0.3503,0.2575,0.2289,0.2559,0.1927,0.24,0.1884,0.2584,0.019,0.2349,0.0186,0.2582,0.3578,0.2568,0.3553,0.2398,0.3557,0.2401,0.3542,0.2515,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.1011,0.241,0.019,0.2349,0.019,0.2349,0.019,0.2349,0.1011,0.241,0.1445,0.2419,0.1927,0.24,0.2369,0.2375,0.3561,0.2404,0.3557,0.2401,0.3553,0.2398,0.2369,0.2375,0.1927,0.24,0.1445,0.2419}, 128);
SoIndexedFaceSet189->setTexCoord(*SoTextureCoordinate190);

SoCoordinate* SoCoordinate191 = new SoCoordinate();
SoCoordinate191->setPoint(new float[]{4.026,0.7465,3.365,5.556,0.7644,1.615,1.443,0.6683,-3.473,1.519,0.7312,3.919,3.83,0.6731,-2.414,5.148,0.7257,-0.8425,4.178,0.0328,3.711,5.76,0.0687,1.754,1.52,-0.1236,-3.918,3.95,-0.1138,-2.776,5.309,-0.0087,-0.9797,1.635,0.0023,4.322,0.0,-0.1236,-3.918,-1.635,0.0023,4.322,-4.178,0.0328,3.711,-4.026,0.7465,3.365,-1.519,0.7312,3.919,-5.76,0.0687,1.754,-5.556,0.7644,1.615,-3.95,-0.1138,-2.776,-1.52,-0.1236,-3.918,-1.443,0.6683,-3.473,-3.83,0.6731,-2.414,-5.309,-0.0087,-0.9797,-5.148,0.7257,-0.8425,0.0,0.0023,4.322,0.0,0.7312,3.919,0.0,0.6683,-3.473,1.493,1.061,3.676,3.895,1.061,3.145,5.297,1.061,1.541,4.918,1.061,-0.7369,3.68,1.061,-2.214,1.392,1.061,-3.23,0.0,1.061,-3.23,-1.392,1.061,-3.23,-3.68,1.061,-2.214,-4.918,1.061,-0.7369,-5.297,1.061,1.541,-3.895,1.061,3.145,-1.493,1.061,3.676,0.0,1.061,3.676,3.857,-0.461,3.349,1.533,-0.461,3.907,0.0,-0.461,3.907,-1.533,-0.461,3.907,-3.857,-0.461,3.349,-5.251,-0.461,1.624,-4.847,-0.461,-0.8254,-3.619,-0.461,-2.448,-1.398,-0.461,-3.492,0.0,-0.461,-3.492,1.398,-0.461,-3.492,3.619,-0.461,-2.448,4.847,-0.461,-0.8254,5.251,-0.461,1.624}, 168);
SoIndexedFaceSet189->setCoord(*SoCoordinate191);

SoShape185->setGeometry(*SoIndexedFaceSet189);

SoTransform184->addChild(*SoShape185);

SoHAnimSegment183->addChild(*SoTransform184);

SoHAnimJoint182->addChildren(*SoHAnimSegment183);

SoHAnimJoint* SoHAnimJoint192 = new SoHAnimJoint();
SoHAnimJoint192->setDEF(QString("hanim_vl3"));
SoHAnimJoint192->X3DNode::setName(QString("vl3"));
SoHAnimJoint192->setCenter(new float[]{0.0,42.03,-0.6117});
SoHAnimSegment* SoHAnimSegment193 = new SoHAnimSegment();
SoHAnimSegment193->setDEF(QString("hanim_l3"));
SoHAnimSegment193->X3DNode::setName(QString("l3"));
SoTransform* SoTransform194 = new SoTransform();
SoTransform194->setTranslation(new float[]{0.0,42.03,-0.6117});
SoShape* SoShape195 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance196 = new SoVRMLAppearance();
SoMaterial* SoMaterial197 = new SoMaterial();
SoMaterial197->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance196->addChild(*SoMaterial197);

SoImageTexture* SoImageTexture198 = new SoImageTexture();
SoImageTexture198->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance196->addChild(*SoImageTexture198);

SoShape195->addChild(*SoVRMLAppearance196);

SoIndexedFaceSet* SoIndexedFaceSet199 = new SoIndexedFaceSet();
SoIndexedFaceSet199->setCreaseAngle(3.14159);
SoIndexedFaceSet199->setTexCoordIndex(new int32_t[]{4,11,17,-1,17,7,4,-1,0,1,13,-1,13,9,0,-1,10,2,0,-1,0,9,10,-1,3,5,14,-1,14,12,3,-1,5,6,15,-1,15,14,5,-1,15,6,2,-1,2,10,15,-1,1,8,16,-1,16,13,1,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,1,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,16,52,-1,52,51,13,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,17,11,60,-1,60,59,17,-1,12,14,61,-1,61,60,12,-1,14,15,62,-1,62,61,14,-1,15,10,63,-1,63,62,15,-1,10,9,50,-1,50,63,10,-1}, 432);
SoIndexedFaceSet199->setCoordIndex(new int32_t[]{1,8,15,-1,15,16,1,-1,0,4,9,-1,9,6,0,-1,7,5,0,-1,0,6,7,-1,1,2,10,-1,10,8,1,-1,2,3,11,-1,11,10,2,-1,11,3,5,-1,5,7,11,-1,4,27,12,-1,12,9,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,17,18,-1,18,22,21,-1,13,14,24,-1,24,23,13,-1,23,24,26,-1,26,25,23,-1,26,21,22,-1,22,25,26,-1,19,20,12,-1,12,27,19,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,4,0,29,-1,29,28,4,-1,0,5,30,-1,30,29,0,-1,5,3,31,-1,31,30,5,-1,3,2,32,-1,32,31,3,-1,2,1,33,-1,33,32,2,-1,1,16,34,-1,34,33,1,-1,16,13,35,-1,35,34,16,-1,13,23,36,-1,36,35,13,-1,23,25,37,-1,37,36,23,-1,25,22,38,-1,38,37,25,-1,22,18,39,-1,39,38,22,-1,18,19,40,-1,40,39,18,-1,19,27,41,-1,41,40,19,-1,27,4,28,-1,28,41,27,-1,6,9,43,-1,43,42,6,-1,9,12,44,-1,44,43,9,-1,12,20,45,-1,45,44,12,-1,20,17,46,-1,46,45,20,-1,17,21,47,-1,47,46,17,-1,21,26,48,-1,48,47,21,-1,26,24,49,-1,49,48,26,-1,24,14,50,-1,50,49,24,-1,14,15,51,-1,51,50,14,-1,15,8,52,-1,52,51,15,-1,8,10,53,-1,53,52,8,-1,10,11,54,-1,54,53,10,-1,11,7,55,-1,55,54,11,-1,7,6,42,-1,42,55,7,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate200 = new SoTextureCoordinate();
SoTextureCoordinate200->setPoint(new float[]{0.1041,0.2822,0.0168,0.2798,0.1518,0.2789,0.3444,0.2746,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.3527,0.263,0.0181,0.2816,0.1026,0.2616,0.1481,0.2604,0.3578,0.2568,0.3503,0.2575,0.0179,0.2574,0.2289,0.2559,0.1884,0.2584,0.0186,0.2582,0.3542,0.2515,0.3604,0.2737,0.3578,0.2568,0.3542,0.2515,0.3527,0.263,0.1026,0.2616,0.1041,0.2822,0.0168,0.2798,0.0179,0.2574,0.1481,0.2604,0.1518,0.2789,0.3503,0.2575,0.3444,0.2746,0.221,0.2742,0.2289,0.2559,0.1842,0.2768,0.1884,0.2584,0.0181,0.2816,0.0186,0.2582,0.0168,0.2798,0.1041,0.2822,0.1518,0.2789,0.1842,0.2768,0.221,0.2742,0.3444,0.2746,0.3527,0.263,0.3604,0.2737,0.221,0.2742,0.1842,0.2768,0.1518,0.2789,0.1041,0.2822,0.0168,0.2798,0.0181,0.2816,0.1026,0.2616,0.0179,0.2574,0.0186,0.2582,0.0179,0.2574,0.1026,0.2616,0.1481,0.2604,0.1884,0.2584,0.2289,0.2559,0.3503,0.2575,0.3542,0.2515,0.3578,0.2568,0.2289,0.2559,0.1884,0.2584,0.1481,0.2604}, 128);
SoIndexedFaceSet199->setTexCoord(*SoTextureCoordinate200);

SoCoordinate* SoCoordinate201 = new SoCoordinate();
SoCoordinate201->setPoint(new float[]{3.874,0.7332,3.02,1.367,0.7332,-3.028,3.71,0.7332,-2.051,4.987,0.7332,-0.7054,1.404,0.7332,3.517,5.353,0.7332,1.475,4.026,0.0196,3.365,5.556,0.0375,1.615,1.443,-0.0586,-3.473,1.519,0.0043,3.919,3.83,-0.0538,-2.414,5.148,-0.0012,-0.8425,0.0,0.0043,3.919,-1.367,0.7332,-3.028,-1.443,-0.0586,-3.473,0.0,-0.0586,-3.473,0.0,0.7332,-3.028,-4.026,0.0196,3.365,-3.874,0.7332,3.02,-1.404,0.7332,3.517,-1.519,0.0043,3.919,-5.556,0.0375,1.615,-5.353,0.7332,1.475,-3.71,0.7332,-2.051,-3.83,-0.0538,-2.414,-4.987,0.7332,-0.7054,-5.148,-0.0012,-0.8425,0.0,0.7332,3.517,1.366,1.112,3.286,3.726,1.112,2.811,5.078,1.112,1.398,4.742,1.112,-0.6029,3.55,1.112,-1.86,1.311,1.112,-2.794,0.0,1.112,-2.794,-1.311,1.112,-2.794,-3.55,1.112,-1.86,-4.742,1.112,-0.6029,-5.078,1.112,1.398,-3.726,1.112,2.811,-1.366,1.112,3.286,0.0,1.112,3.286,3.87,-0.3411,3.153,1.478,-0.3411,3.682,0.0,-0.3411,3.682,-1.478,-0.3411,3.682,-3.87,-0.3411,3.153,-5.28,-0.3411,1.54,-4.9,-0.3411,-0.7446,-3.661,-0.3411,-2.221,-1.384,-0.3411,-3.233,0.0,-0.3411,-3.233,1.384,-0.3411,-3.233,3.661,-0.3411,-2.221,4.9,-0.3411,-0.7446,5.28,-0.3411,1.54}, 168);
SoIndexedFaceSet199->setCoord(*SoCoordinate201);

SoShape195->setGeometry(*SoIndexedFaceSet199);

SoTransform194->addChild(*SoShape195);

SoHAnimSegment193->addChild(*SoTransform194);

SoHAnimJoint192->addChildren(*SoHAnimSegment193);

SoHAnimJoint* SoHAnimJoint202 = new SoHAnimJoint();
SoHAnimJoint202->setDEF(QString("hanim_vl2"));
SoHAnimJoint202->X3DNode::setName(QString("vl2"));
SoHAnimJoint202->setCenter(new float[]{0.0,42.76,-0.6117});
SoHAnimSegment* SoHAnimSegment203 = new SoHAnimSegment();
SoHAnimSegment203->setDEF(QString("hanim_l2"));
SoHAnimSegment203->X3DNode::setName(QString("l2"));
SoTransform* SoTransform204 = new SoTransform();
SoTransform204->setTranslation(new float[]{0.0,42.76,-0.6117});
SoShape* SoShape205 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance206 = new SoVRMLAppearance();
SoMaterial* SoMaterial207 = new SoMaterial();
SoMaterial207->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance206->addChild(*SoMaterial207);

SoImageTexture* SoImageTexture208 = new SoImageTexture();
SoImageTexture208->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance206->addChild(*SoImageTexture208);

SoShape205->addChild(*SoVRMLAppearance206);

SoIndexedFaceSet* SoIndexedFaceSet209 = new SoIndexedFaceSet();
SoIndexedFaceSet209->setCreaseAngle(3.14159);
SoIndexedFaceSet209->setTexCoordIndex(new int32_t[]{6,10,16,-1,16,7,6,-1,1,0,14,-1,14,9,1,-1,15,2,1,-1,1,9,15,-1,4,3,12,-1,12,11,4,-1,3,5,13,-1,13,12,3,-1,13,5,2,-1,2,15,13,-1,0,8,17,-1,17,14,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,22,23,-1,23,27,26,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,33,26,27,-1,27,32,33,-1,24,25,35,-1,35,34,24,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,52,54,56,-1,56,57,58,-1,56,58,59,-1,59,60,61,-1,61,62,63,-1,59,61,63,-1,56,59,63,-1,52,56,63,-1,51,52,63,-1,51,63,50,-1,0,1,37,-1,37,36,0,-1,1,2,38,-1,38,37,1,-1,2,5,39,-1,39,38,2,-1,5,3,40,-1,40,39,5,-1,3,4,41,-1,41,40,3,-1,6,7,42,-1,42,41,6,-1,21,18,43,-1,43,42,21,-1,29,30,44,-1,44,43,29,-1,30,32,45,-1,45,44,30,-1,32,27,46,-1,46,45,32,-1,27,23,47,-1,47,46,27,-1,23,24,48,-1,48,47,23,-1,24,34,49,-1,49,48,24,-1,8,0,36,-1,36,49,8,-1,9,14,51,-1,51,50,9,-1,14,17,52,-1,52,51,14,-1,35,25,53,-1,53,52,35,-1,25,22,54,-1,54,53,25,-1,22,26,55,-1,55,54,22,-1,26,33,56,-1,56,55,26,-1,33,31,57,-1,57,56,33,-1,31,28,58,-1,58,57,31,-1,19,20,59,-1,59,58,19,-1,16,10,60,-1,60,59,16,-1,11,12,61,-1,61,60,11,-1,12,13,62,-1,62,61,12,-1,13,15,63,-1,63,62,13,-1,15,9,50,-1,50,63,15,-1}, 432);
SoIndexedFaceSet209->setCoordIndex(new int32_t[]{3,7,14,-1,14,15,3,-1,0,5,10,-1,10,6,0,-1,11,2,0,-1,0,6,11,-1,3,4,8,-1,8,7,3,-1,4,1,9,-1,9,8,4,-1,9,1,2,-1,2,11,9,-1,5,26,27,-1,27,10,5,-1,12,15,14,-1,14,13,12,-1,17,16,19,-1,19,18,17,-1,20,16,17,-1,17,21,20,-1,12,13,23,-1,23,22,12,-1,22,23,25,-1,25,24,22,-1,25,20,21,-1,21,24,25,-1,18,19,27,-1,27,26,18,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,48,50,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,48,51,55,-1,44,48,55,-1,43,44,55,-1,43,55,42,-1,5,0,29,-1,29,28,5,-1,0,2,30,-1,30,29,0,-1,2,1,31,-1,31,30,2,-1,1,4,32,-1,32,31,1,-1,4,3,33,-1,33,32,4,-1,3,15,34,-1,34,33,3,-1,15,12,35,-1,35,34,15,-1,12,22,36,-1,36,35,12,-1,22,24,37,-1,37,36,22,-1,24,21,38,-1,38,37,24,-1,21,17,39,-1,39,38,21,-1,17,18,40,-1,40,39,17,-1,18,26,41,-1,41,40,18,-1,26,5,28,-1,28,41,26,-1,6,10,43,-1,43,42,6,-1,10,27,44,-1,44,43,10,-1,27,19,45,-1,45,44,27,-1,19,16,46,-1,46,45,19,-1,16,20,47,-1,47,46,16,-1,20,25,48,-1,48,47,20,-1,25,23,49,-1,49,48,25,-1,23,13,50,-1,50,49,23,-1,13,14,51,-1,51,50,13,-1,14,7,52,-1,52,51,14,-1,7,8,53,-1,53,52,7,-1,8,9,54,-1,54,53,8,-1,9,11,55,-1,55,54,9,-1,11,6,42,-1,42,55,11,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate210 = new SoTextureCoordinate();
SoTextureCoordinate210->setPoint(new float[]{0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.2175,0.2944,0.3621,0.2922,0.1849,0.2961,0.3633,0.2922,0.3627,0.2922,0.0177,0.3051,0.1055,0.2814,0.3697,0.2711,0.3605,0.2757,0.2204,0.275,0.1853,0.2768,0.024,0.2813,0.1448,0.2785,0.3603,0.2745,0.0155,0.2778,0.3633,0.2922,0.3697,0.2711,0.3603,0.2745,0.3627,0.2922,0.1055,0.2814,0.0982,0.302,0.0177,0.3051,0.024,0.2813,0.1448,0.2785,0.1487,0.2975,0.3605,0.2757,0.3621,0.2922,0.2175,0.2944,0.2204,0.275,0.1849,0.2961,0.1853,0.2768,0.0177,0.3051,0.0155,0.2778,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.1055,0.2814,0.024,0.2813,0.0155,0.2778,0.024,0.2813,0.1055,0.2814,0.1448,0.2785,0.1853,0.2768,0.2204,0.275,0.3605,0.2757,0.3603,0.2745,0.3697,0.2711,0.2204,0.275,0.1853,0.2768,0.1448,0.2785}, 128);
SoIndexedFaceSet209->setTexCoord(*SoTextureCoordinate210);

SoCoordinate* SoCoordinate211 = new SoCoordinate();
SoCoordinate211->setPoint(new float[]{3.71,0.777,2.648,4.818,0.777,-0.5615,5.128,0.777,1.321,1.293,0.777,-2.595,3.593,0.777,-1.696,1.281,0.777,3.092,3.874,0.0063,3.02,1.367,0.0063,-3.028,3.71,0.0063,-2.051,4.987,0.0063,-0.7054,1.404,0.0063,3.517,5.353,0.0063,1.475,-1.293,0.777,-2.595,-1.367,0.0063,-3.028,0.0,0.0063,-3.028,0.0,0.777,-2.595,-3.874,0.0063,3.02,-3.71,0.777,2.648,-1.281,0.777,3.092,-1.404,0.0063,3.517,-5.353,0.0063,1.475,-5.128,0.777,1.321,-3.593,0.777,-1.696,-3.71,0.0063,-2.051,-4.818,0.777,-0.5615,-4.987,0.0063,-0.7054,0.0,0.777,3.092,0.0,0.0063,3.517,1.261,1.231,2.872,3.606,1.231,2.442,4.891,1.231,1.241,4.612,1.231,-0.451,3.473,1.231,-1.506,1.251,1.231,-2.375,0.0,1.231,-2.375,-1.251,1.231,-2.375,-3.473,1.231,-1.506,-4.612,1.231,-0.451,-4.891,1.231,1.241,-3.606,1.231,2.442,-1.261,1.231,2.872,0.0,1.231,2.872,3.853,-0.3735,2.877,1.415,-0.3735,3.367,0.0,-0.3735,3.367,-1.415,-0.3735,3.367,-3.853,-0.3735,2.877,-5.24,-0.3735,1.428,-4.895,-0.3735,-0.6254,-3.668,-0.3735,-1.919,-1.354,-0.3735,-2.884,0.0,-0.3735,-2.884,1.354,-0.3735,-2.884,3.668,-0.3735,-1.919,4.895,-0.3735,-0.6254,5.24,-0.3735,1.428}, 168);
SoIndexedFaceSet209->setCoord(*SoCoordinate211);

SoShape205->setGeometry(*SoIndexedFaceSet209);

SoTransform204->addChild(*SoShape205);

SoHAnimSegment203->addChild(*SoTransform204);

SoHAnimJoint202->addChildren(*SoHAnimSegment203);

SoHAnimJoint* SoHAnimJoint212 = new SoHAnimJoint();
SoHAnimJoint212->setDEF(QString("hanim_vl1"));
SoHAnimJoint212->X3DNode::setName(QString("vl1"));
SoHAnimJoint212->setCenter(new float[]{0.0,43.52,-0.6117});
SoHAnimSegment* SoHAnimSegment213 = new SoHAnimSegment();
SoHAnimSegment213->setDEF(QString("hanim_l1"));
SoHAnimSegment213->X3DNode::setName(QString("l1"));
SoTransform* SoTransform214 = new SoTransform();
SoTransform214->setTranslation(new float[]{0.0,43.52,-0.6117});
SoShape* SoShape215 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance216 = new SoVRMLAppearance();
SoMaterial* SoMaterial217 = new SoMaterial();
SoMaterial217->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance216->addChild(*SoMaterial217);

SoImageTexture* SoImageTexture218 = new SoImageTexture();
SoImageTexture218->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance216->addChild(*SoImageTexture218);

SoShape215->addChild(*SoVRMLAppearance216);

SoIndexedFaceSet* SoIndexedFaceSet219 = new SoIndexedFaceSet();
SoIndexedFaceSet219->setCreaseAngle(3.14159);
SoIndexedFaceSet219->setTexCoordIndex(new int32_t[]{9,0,1,-1,1,17,9,-1,13,2,0,-1,0,9,13,-1,16,15,3,-1,3,5,16,-1,10,6,2,-1,2,13,10,-1,17,1,8,-1,8,11,17,-1,10,16,5,-1,5,6,10,-1,14,12,7,-1,7,4,14,-1,19,18,21,-1,21,20,19,-1,22,19,20,-1,20,23,22,-1,24,27,26,-1,26,25,24,-1,28,22,23,-1,23,29,28,-1,18,30,31,-1,31,21,18,-1,28,29,27,-1,27,24,28,-1,33,32,35,-1,35,34,33,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,1,0,37,-1,37,36,1,-1,0,2,38,-1,38,37,0,-1,2,6,39,-1,39,38,2,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,35,32,43,-1,43,42,35,-1,26,27,44,-1,44,43,26,-1,27,29,45,-1,45,44,27,-1,29,23,46,-1,46,45,29,-1,23,20,47,-1,47,46,23,-1,20,21,48,-1,48,47,20,-1,21,31,49,-1,49,48,21,-1,8,1,36,-1,36,49,8,-1,9,17,51,-1,51,50,9,-1,17,11,52,-1,52,51,17,-1,30,18,53,-1,53,52,30,-1,18,19,54,-1,54,53,18,-1,19,22,55,-1,55,54,19,-1,22,28,56,-1,56,55,22,-1,28,24,57,-1,57,56,28,-1,24,25,58,-1,58,57,24,-1,33,34,59,-1,59,58,33,-1,12,14,60,-1,60,59,12,-1,15,16,61,-1,61,60,15,-1,16,10,62,-1,62,61,16,-1,10,13,63,-1,63,62,10,-1,13,9,50,-1,50,63,13,-1}, 432);
SoIndexedFaceSet219->setCoordIndex(new int32_t[]{7,0,1,-1,1,14,7,-1,11,2,0,-1,0,7,11,-1,13,12,3,-1,3,4,13,-1,8,5,2,-1,2,11,8,-1,14,1,6,-1,6,9,14,-1,8,13,4,-1,4,5,8,-1,12,10,27,-1,27,3,12,-1,16,15,18,-1,18,17,16,-1,19,16,17,-1,17,20,19,-1,21,24,23,-1,23,22,21,-1,25,19,20,-1,20,26,25,-1,15,9,6,-1,6,18,15,-1,25,26,24,-1,24,21,25,-1,22,23,27,-1,27,10,22,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,1,0,29,-1,29,28,1,-1,0,2,30,-1,30,29,0,-1,2,5,31,-1,31,30,2,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,27,34,-1,34,33,3,-1,27,23,35,-1,35,34,27,-1,23,24,36,-1,36,35,23,-1,24,26,37,-1,37,36,24,-1,26,20,38,-1,38,37,26,-1,20,17,39,-1,39,38,20,-1,17,18,40,-1,40,39,17,-1,18,6,41,-1,41,40,18,-1,6,1,28,-1,28,41,6,-1,7,14,43,-1,43,42,7,-1,14,9,44,-1,44,43,14,-1,9,15,45,-1,45,44,9,-1,15,16,46,-1,46,45,15,-1,16,19,47,-1,47,46,16,-1,19,25,48,-1,48,47,19,-1,25,21,49,-1,49,48,25,-1,21,22,50,-1,50,49,21,-1,22,10,51,-1,51,50,22,-1,10,12,52,-1,52,51,10,-1,12,13,53,-1,53,52,12,-1,13,8,54,-1,54,53,13,-1,8,11,55,-1,55,54,8,-1,11,7,42,-1,42,55,11,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate220 = new SoTextureCoordinate();
SoTextureCoordinate220->setPoint(new float[]{0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3615,0.3195,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.0982,0.302,0.1849,0.2961,0.0177,0.3051,0.3627,0.2922,0.1487,0.2975,0.3633,0.2922,0.3621,0.2922,0.2175,0.2944,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.0943,0.3233,0.0192,0.3251,0.1487,0.2975,0.1489,0.3212,0.2175,0.2944,0.3621,0.2922,0.3615,0.3195,0.2175,0.3185,0.1849,0.2961,0.1844,0.32,0.0177,0.3051,0.0192,0.3251,0.3631,0.318,0.3633,0.2922,0.3627,0.2922,0.3623,0.3188,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0982,0.302,0.0177,0.3051,0.0177,0.3051,0.0177,0.3051,0.0982,0.302,0.1487,0.2975,0.1849,0.2961,0.2175,0.2944,0.3621,0.2922,0.3627,0.2922,0.3633,0.2922,0.2175,0.2944,0.1849,0.2961,0.1487,0.2975}, 128);
SoIndexedFaceSet219->setTexCoord(*SoTextureCoordinate220);

SoCoordinate* SoCoordinate221 = new SoCoordinate();
SoCoordinate221->setPoint(new float[]{3.702,1.056,2.588,1.286,1.056,3.04,5.104,1.056,1.294,1.363,1.056,-2.529,3.588,1.056,-1.686,4.805,1.056,-0.5256,0.0,1.056,3.04,3.71,0.0128,2.648,4.818,0.0128,-0.5615,0.0,0.0128,3.092,0.0,0.0128,-2.595,5.128,0.0128,1.321,1.293,0.0128,-2.595,3.593,0.0128,-1.696,1.281,0.0128,3.092,-1.281,0.0128,3.092,-3.71,0.0128,2.648,-3.702,1.056,2.588,-1.286,1.056,3.04,-5.128,0.0128,1.321,-5.104,1.056,1.294,-3.593,0.0128,-1.696,-1.293,0.0128,-2.595,-1.363,1.056,-2.529,-3.588,1.056,-1.686,-4.818,0.0128,-0.5615,-4.805,1.056,-0.5256,0.0,1.056,-2.529,1.266,1.5,2.82,3.599,1.5,2.383,4.867,1.5,1.212,4.6,1.5,-0.4169,3.469,1.5,-1.496,1.323,1.5,-2.308,0.0,1.5,-2.309,-1.323,1.5,-2.308,-3.469,1.5,-1.496,-4.6,1.5,-0.4169,-4.867,1.5,1.212,-3.599,1.5,2.383,-1.266,1.5,2.82,0.0,1.5,2.82,3.606,-0.3662,2.442,1.261,-0.3662,2.872,0.0,-0.3662,2.872,-1.261,-0.3662,2.872,-3.606,-0.3662,2.442,-4.891,-0.3662,1.241,-4.612,-0.3662,-0.451,-3.473,-0.3662,-1.506,-1.251,-0.3662,-2.375,0.0,-0.3662,-2.375,1.251,-0.3662,-2.375,3.473,-0.3662,-1.506,4.612,-0.3662,-0.451,4.891,-0.3662,1.241}, 168);
SoIndexedFaceSet219->setCoord(*SoCoordinate221);

SoShape215->setGeometry(*SoIndexedFaceSet219);

SoTransform214->addChild(*SoShape215);

SoHAnimSegment213->addChild(*SoTransform214);

SoHAnimJoint212->addChildren(*SoHAnimSegment213);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setDEF(QString("hanim_vt12"));
SoHAnimJoint222->X3DNode::setName(QString("vt12"));
SoHAnimJoint222->setCenter(new float[]{0.0,44.57,-0.6117});
SoHAnimSegment* SoHAnimSegment223 = new SoHAnimSegment();
SoHAnimSegment223->setDEF(QString("hanim_t12"));
SoHAnimSegment223->X3DNode::setName(QString("t12"));
SoTransform* SoTransform224 = new SoTransform();
SoTransform224->setTranslation(new float[]{0.0,44.57,-0.6117});
SoShape* SoShape225 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance226 = new SoVRMLAppearance();
SoMaterial* SoMaterial227 = new SoMaterial();
SoMaterial227->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance226->addChild(*SoMaterial227);

SoImageTexture* SoImageTexture228 = new SoImageTexture();
SoImageTexture228->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance226->addChild(*SoImageTexture228);

SoShape225->addChild(*SoVRMLAppearance226);

SoIndexedFaceSet* SoIndexedFaceSet229 = new SoIndexedFaceSet();
SoIndexedFaceSet229->setCreaseAngle(3.14159);
SoIndexedFaceSet229->setTexCoordIndex(new int32_t[]{5,6,15,-1,15,14,5,-1,7,4,12,-1,12,16,7,-1,9,0,2,-1,2,10,9,-1,11,1,0,-1,0,9,11,-1,3,5,14,-1,14,13,3,-1,6,1,11,-1,11,15,6,-1,2,8,17,-1,17,10,2,-1,18,21,20,-1,20,19,18,-1,22,25,24,-1,24,23,22,-1,26,29,28,-1,28,27,26,-1,30,26,27,-1,27,31,30,-1,33,32,21,-1,21,18,33,-1,19,20,30,-1,30,31,19,-1,28,29,35,-1,35,34,28,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,52,53,54,-1,51,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,51,54,62,-1,51,62,63,-1,51,63,50,-1,2,0,37,-1,37,36,2,-1,0,1,38,-1,38,37,0,-1,1,6,39,-1,39,38,1,-1,6,5,40,-1,40,39,6,-1,5,3,41,-1,41,40,5,-1,4,7,42,-1,42,41,4,-1,22,23,43,-1,43,42,22,-1,33,18,44,-1,44,43,33,-1,18,19,45,-1,45,44,18,-1,19,31,46,-1,46,45,19,-1,31,27,47,-1,47,46,31,-1,27,28,48,-1,48,47,27,-1,28,34,49,-1,49,48,28,-1,8,2,36,-1,36,49,8,-1,9,10,51,-1,51,50,9,-1,10,17,52,-1,52,51,10,-1,35,29,53,-1,53,52,35,-1,29,26,54,-1,54,53,29,-1,26,30,55,-1,55,54,26,-1,30,20,56,-1,56,55,30,-1,20,21,57,-1,57,56,20,-1,21,32,58,-1,58,57,21,-1,24,25,59,-1,59,58,24,-1,16,12,60,-1,60,59,16,-1,13,14,61,-1,61,60,13,-1,14,15,62,-1,62,61,14,-1,15,11,63,-1,63,62,15,-1,11,9,50,-1,50,63,11,-1}, 432);
SoIndexedFaceSet229->setCoordIndex(new int32_t[]{4,5,11,-1,11,10,4,-1,17,3,9,-1,9,20,17,-1,6,0,2,-1,2,7,6,-1,8,1,0,-1,0,6,8,-1,3,4,10,-1,10,9,3,-1,5,1,8,-1,8,11,5,-1,2,27,12,-1,12,7,2,-1,13,16,15,-1,15,14,13,-1,17,20,19,-1,19,18,17,-1,21,24,23,-1,23,22,21,-1,25,21,22,-1,22,26,25,-1,18,19,16,-1,16,13,18,-1,14,15,25,-1,25,26,14,-1,23,24,12,-1,12,27,23,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,44,45,46,-1,43,44,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,43,46,54,-1,43,54,55,-1,43,55,42,-1,2,0,29,-1,29,28,2,-1,0,1,30,-1,30,29,0,-1,1,5,31,-1,31,30,1,-1,5,4,32,-1,32,31,5,-1,4,3,33,-1,33,32,4,-1,3,17,34,-1,34,33,3,-1,17,18,35,-1,35,34,17,-1,18,13,36,-1,36,35,18,-1,13,14,37,-1,37,36,13,-1,14,26,38,-1,38,37,14,-1,26,22,39,-1,39,38,26,-1,22,23,40,-1,40,39,22,-1,23,27,41,-1,41,40,23,-1,27,2,28,-1,28,41,27,-1,6,7,43,-1,43,42,6,-1,7,12,44,-1,44,43,7,-1,12,24,45,-1,45,44,12,-1,24,21,46,-1,46,45,24,-1,21,25,47,-1,47,46,21,-1,25,15,48,-1,48,47,25,-1,15,16,49,-1,49,48,15,-1,16,19,50,-1,50,49,16,-1,19,20,51,-1,51,50,19,-1,20,9,52,-1,52,51,20,-1,9,10,53,-1,53,52,9,-1,10,11,54,-1,54,53,10,-1,11,8,55,-1,55,54,11,-1,8,6,42,-1,42,55,8,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate230 = new SoTextureCoordinate();
SoTextureCoordinate230->setPoint(new float[]{0.0903,0.3446,0.1491,0.3449,0.0206,0.3452,0.3608,0.3469,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.3619,0.3454,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.1489,0.3212,0.3631,0.318,0.3615,0.3195,0.2175,0.3185,0.1844,0.32,0.3623,0.3188,0.0192,0.3251,0.2175,0.3427,0.1838,0.3438,0.1844,0.32,0.2175,0.3185,0.3619,0.3454,0.3629,0.3439,0.3631,0.318,0.3623,0.3188,0.0943,0.3233,0.0903,0.3446,0.0206,0.3452,0.0192,0.3251,0.1489,0.3212,0.1491,0.3449,0.3615,0.3195,0.3608,0.3469,0.0206,0.3452,0.0192,0.3251,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0943,0.3233,0.0192,0.3251,0.0192,0.3251,0.0192,0.3251,0.0943,0.3233,0.1489,0.3212,0.1844,0.32,0.2175,0.3185,0.3615,0.3195,0.3623,0.3188,0.3631,0.318,0.2175,0.3185,0.1844,0.32,0.1489,0.3212}, 128);
SoIndexedFaceSet229->setTexCoord(*SoTextureCoordinate230);

SoCoordinate* SoCoordinate231 = new SoCoordinate();
SoCoordinate231->setPoint(new float[]{3.695,1.054,2.529,5.081,1.054,1.266,1.292,1.054,2.988,1.434,1.054,-2.463,3.584,1.054,-1.677,4.793,1.054,-0.4897,3.702,0.0104,2.588,1.286,0.0104,3.04,5.104,0.0104,1.294,1.363,0.0104,-2.529,3.588,0.0104,-1.686,4.805,0.0104,-0.5256,0.0,0.0104,3.04,-3.584,1.054,-1.677,-4.793,1.054,-0.4897,-4.805,0.0104,-0.5256,-3.588,0.0104,-1.686,0.0,1.054,-2.464,-1.434,1.054,-2.463,-1.363,0.0104,-2.529,0.0,0.0104,-2.529,-3.702,0.0104,2.588,-3.695,1.054,2.529,-1.292,1.054,2.988,-1.286,0.0104,3.04,-5.104,0.0104,1.294,-5.081,1.054,1.266,0.0,1.054,2.988,1.276,1.452,2.823,3.618,1.452,2.375,4.904,1.452,1.204,4.639,1.452,-0.4096,3.494,1.452,-1.534,1.405,1.452,-2.298,0.0,1.452,-2.298,-1.405,1.452,-2.298,-3.494,1.452,-1.534,-4.639,1.452,-0.4096,-4.904,1.452,1.204,-3.618,1.452,2.375,-1.276,1.452,2.823,0.0,1.452,2.823,3.625,-0.4686,2.435,1.271,-0.4686,2.875,0.0,-0.4686,2.875,-1.271,-0.4686,2.875,-3.625,-0.4686,2.435,-4.927,-0.4686,1.233,-4.651,-0.4686,-0.4442,-3.499,-0.4686,-1.544,-1.333,-0.4686,-2.364,0.0,-0.4686,-2.364,1.333,-0.4686,-2.364,3.499,-0.4686,-1.544,4.651,-0.4686,-0.4442,4.927,-0.4686,1.233}, 168);
SoIndexedFaceSet229->setCoord(*SoCoordinate231);

SoShape225->setGeometry(*SoIndexedFaceSet229);

SoTransform224->addChild(*SoShape225);

SoHAnimSegment223->addChild(*SoTransform224);

SoHAnimJoint222->addChildren(*SoHAnimSegment223);

SoHAnimJoint* SoHAnimJoint232 = new SoHAnimJoint();
SoHAnimJoint232->setDEF(QString("hanim_vt11"));
SoHAnimJoint232->X3DNode::setName(QString("vt11"));
SoHAnimJoint232->setCenter(new float[]{0.0,45.61,-0.6117});
SoHAnimSegment* SoHAnimSegment233 = new SoHAnimSegment();
SoHAnimSegment233->setDEF(QString("hanim_t11"));
SoHAnimSegment233->X3DNode::setName(QString("t11"));
SoTransform* SoTransform234 = new SoTransform();
SoTransform234->setTranslation(new float[]{0.0,45.61,-0.6117});
SoShape* SoShape235 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance236 = new SoVRMLAppearance();
SoMaterial* SoMaterial237 = new SoMaterial();
SoMaterial237->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance236->addChild(*SoMaterial237);

SoImageTexture* SoImageTexture238 = new SoImageTexture();
SoImageTexture238->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance236->addChild(*SoImageTexture238);

SoShape235->addChild(*SoVRMLAppearance236);

SoIndexedFaceSet* SoIndexedFaceSet239 = new SoIndexedFaceSet();
SoIndexedFaceSet239->setCreaseAngle(3.14159);
SoIndexedFaceSet239->setTexCoordIndex(new int32_t[]{6,5,14,-1,14,16,6,-1,7,6,16,-1,16,17,7,-1,7,17,12,-1,12,3,7,-1,8,15,18,-1,18,10,8,-1,10,0,1,-1,1,8,10,-1,15,8,2,-1,2,11,15,-1,4,9,19,-1,19,13,4,-1,11,2,3,-1,3,12,11,-1,20,23,22,-1,22,21,20,-1,24,25,23,-1,23,20,24,-1,24,26,27,-1,27,25,24,-1,29,28,31,-1,31,30,29,-1,28,29,32,-1,32,33,28,-1,30,35,34,-1,34,29,30,-1,37,36,39,-1,39,38,37,-1,35,27,26,-1,26,34,35,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,44,48,52,-1,41,44,52,-1,41,52,53,-1,41,53,40,-1,55,56,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,61,62,63,-1,63,64,65,-1,61,63,65,-1,57,61,65,-1,65,66,67,-1,57,65,67,-1,55,57,67,-1,55,67,54,-1,1,0,41,-1,41,40,1,-1,0,10,42,-1,42,41,0,-1,28,33,43,-1,43,42,28,-1,33,32,44,-1,44,43,33,-1,34,26,45,-1,45,44,34,-1,26,24,46,-1,46,45,26,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,37,38,49,-1,49,48,37,-1,9,4,50,-1,50,49,9,-1,5,6,51,-1,51,50,5,-1,6,7,52,-1,52,51,6,-1,7,3,53,-1,53,52,7,-1,3,2,40,-1,40,53,3,-1,16,14,55,-1,55,54,16,-1,13,19,56,-1,56,55,13,-1,39,36,57,-1,57,56,39,-1,22,23,58,-1,58,57,22,-1,23,25,59,-1,59,58,23,-1,25,27,60,-1,60,59,25,-1,27,35,61,-1,61,60,27,-1,35,30,62,-1,62,61,35,-1,30,31,63,-1,63,62,30,-1,18,15,64,-1,64,63,18,-1,15,11,65,-1,65,64,15,-1,11,12,66,-1,66,65,11,-1,12,17,67,-1,67,66,12,-1,17,16,54,-1,54,67,17,-1}, 448);
SoIndexedFaceSet239->setCoordIndex(new int32_t[]{4,3,10,-1,10,12,4,-1,5,4,12,-1,12,13,5,-1,5,13,9,-1,9,1,5,-1,6,11,14,-1,14,7,6,-1,7,2,0,-1,0,6,7,-1,11,6,0,-1,0,8,11,-1,3,28,29,-1,29,10,3,-1,8,0,1,-1,1,9,8,-1,15,18,17,-1,17,16,15,-1,19,20,18,-1,18,15,19,-1,19,21,22,-1,22,20,19,-1,23,7,14,-1,14,24,23,-1,7,23,25,-1,25,26,7,-1,24,27,25,-1,25,23,24,-1,16,17,29,-1,29,28,16,-1,27,22,21,-1,21,25,27,-1,32,33,34,-1,31,32,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,34,38,42,-1,31,34,42,-1,31,42,43,-1,31,43,30,-1,45,46,47,-1,47,48,49,-1,49,50,51,-1,47,49,51,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,47,51,55,-1,55,56,57,-1,47,55,57,-1,45,47,57,-1,45,57,44,-1,0,2,31,-1,31,30,0,-1,2,7,32,-1,32,31,2,-1,7,26,33,-1,33,32,7,-1,26,25,34,-1,34,33,26,-1,25,21,35,-1,35,34,25,-1,21,19,36,-1,36,35,21,-1,19,15,37,-1,37,36,19,-1,15,16,38,-1,38,37,15,-1,16,28,39,-1,39,38,16,-1,28,3,40,-1,40,39,28,-1,3,4,41,-1,41,40,3,-1,4,5,42,-1,42,41,4,-1,5,1,43,-1,43,42,5,-1,1,0,30,-1,30,43,1,-1,12,10,45,-1,45,44,12,-1,10,29,46,-1,46,45,10,-1,29,17,47,-1,47,46,29,-1,17,18,48,-1,48,47,17,-1,18,20,49,-1,49,48,18,-1,20,22,50,-1,50,49,20,-1,22,27,51,-1,51,50,22,-1,27,24,52,-1,52,51,27,-1,24,14,53,-1,53,52,24,-1,14,11,54,-1,54,53,14,-1,11,8,55,-1,55,54,11,-1,8,9,56,-1,56,55,8,-1,9,13,57,-1,57,56,9,-1,13,12,44,-1,44,57,13,-1}, 448);
SoTextureCoordinate* SoTextureCoordinate240 = new SoTextureCoordinate();
SoTextureCoordinate240->setPoint(new float[]{0.0206,0.3452,0.0903,0.3446,0.0903,0.3446,0.1491,0.3449,0.3629,0.3439,0.3608,0.3469,0.2175,0.3427,0.1838,0.3438,0.0206,0.3452,0.3619,0.3454,0.0206,0.3452,0.089,0.3604,0.1508,0.3559,0.3623,0.3532,0.3588,0.3561,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.2175,0.3427,0.3608,0.3469,0.3588,0.3561,0.2188,0.3538,0.1838,0.3438,0.1874,0.3541,0.1491,0.3449,0.1508,0.3559,0.0206,0.3452,0.0206,0.3452,0.0232,0.3561,0.0232,0.3546,0.0903,0.3446,0.0206,0.3452,0.0903,0.3446,0.089,0.3604,0.3623,0.3532,0.3629,0.3439,0.3619,0.3454,0.3608,0.3537,0.0903,0.3446,0.0206,0.3452,0.0206,0.3452,0.0206,0.3452,0.0903,0.3446,0.1491,0.3449,0.1838,0.3438,0.2175,0.3427,0.3608,0.3469,0.3619,0.3454,0.3629,0.3439,0.2175,0.3427,0.1838,0.3438,0.1491,0.3449,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541}, 136);
SoIndexedFaceSet239->setTexCoord(*SoTextureCoordinate240);

SoCoordinate* SoCoordinate241 = new SoCoordinate();
SoCoordinate241->setPoint(new float[]{3.695,0.0098,2.529,5.081,0.0098,1.266,1.292,0.0098,2.988,1.434,0.0098,-2.463,3.584,0.0098,-1.677,4.793,0.0098,-0.4897,1.292,0.0098,2.988,0.0,0.0098,2.988,3.86,0.776,2.936,5.361,0.776,1.276,1.588,0.776,-2.498,1.36,0.776,3.192,3.752,0.776,-1.776,4.97,0.776,-0.6037,0.0,0.776,3.192,-3.584,0.0098,-1.677,-1.434,0.0098,-2.463,-1.588,0.776,-2.498,-3.752,0.776,-1.776,-4.793,0.0098,-0.4897,-4.97,0.776,-0.6037,-5.081,0.0098,1.266,-5.361,0.776,1.276,-1.292,0.0098,2.988,-1.36,0.776,3.192,-3.695,0.0098,2.529,-1.292,0.0098,2.988,-3.86,0.776,2.936,0.0,0.0098,-2.464,0.0,0.776,-2.506,3.599,-0.4771,2.338,1.272,-0.4771,2.783,0.0,-0.4771,2.783,-1.272,-0.4771,2.783,-3.599,-0.4771,2.338,-4.861,-0.4771,1.189,-4.602,-0.4771,-0.3904,-3.472,-0.4771,-1.499,-1.398,-0.4771,-2.258,0.0,-0.4771,-2.259,1.398,-0.4771,-2.258,3.472,-0.4771,-1.499,4.602,-0.4771,-0.3904,4.861,-0.4771,1.189,3.643,1.099,-1.596,1.555,1.099,-2.294,0.0,1.099,-2.302,-1.555,1.099,-2.294,-3.643,1.099,-1.596,-4.782,1.099,-0.4999,-5.14,1.099,1.216,-3.76,1.099,2.74,-1.35,1.099,2.987,0.0,1.099,2.987,1.35,1.099,2.987,3.76,1.099,2.74,5.14,1.099,1.216,4.782,1.099,-0.4999}, 174);
SoIndexedFaceSet239->setCoord(*SoCoordinate241);

SoShape235->setGeometry(*SoIndexedFaceSet239);

SoTransform234->addChild(*SoShape235);

SoHAnimSegment233->addChild(*SoTransform234);

SoHAnimJoint232->addChildren(*SoHAnimSegment233);

SoHAnimJoint* SoHAnimJoint242 = new SoHAnimJoint();
SoHAnimJoint242->setDEF(QString("hanim_vt10"));
SoHAnimJoint242->X3DNode::setName(QString("vt10"));
SoHAnimJoint242->setCenter(new float[]{0.0,46.37,-0.6127});
SoHAnimSegment* SoHAnimSegment243 = new SoHAnimSegment();
SoHAnimSegment243->setDEF(QString("hanim_t10"));
SoHAnimSegment243->X3DNode::setName(QString("t10"));
SoTransform* SoTransform244 = new SoTransform();
SoTransform244->setTranslation(new float[]{0.0,46.37,-0.6127});
SoShape* SoShape245 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance246 = new SoVRMLAppearance();
SoMaterial* SoMaterial247 = new SoMaterial();
SoMaterial247->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance246->addChild(*SoMaterial247);

SoImageTexture* SoImageTexture248 = new SoImageTexture();
SoImageTexture248->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance246->addChild(*SoImageTexture248);

SoShape245->addChild(*SoVRMLAppearance246);

SoIndexedFaceSet* SoIndexedFaceSet249 = new SoIndexedFaceSet();
SoIndexedFaceSet249->setCreaseAngle(3.14159);
SoIndexedFaceSet249->setTexCoordIndex(new int32_t[]{15,10,5,-1,5,2,15,-1,10,11,6,-1,6,5,10,-1,11,14,1,-1,1,6,11,-1,4,9,17,-1,17,7,4,-1,9,4,0,-1,0,13,9,-1,3,8,12,-1,12,16,3,-1,0,1,14,-1,14,13,0,-1,19,18,21,-1,21,20,19,-1,20,21,23,-1,23,22,20,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,27,31,30,-1,30,26,27,-1,33,32,35,-1,35,34,33,-1,30,31,24,-1,24,25,30,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,42,43,44,-1,41,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,37,41,48,-1,37,48,49,-1,37,49,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,2,5,37,-1,37,36,2,-1,5,6,38,-1,38,37,5,-1,6,1,39,-1,39,38,6,-1,1,0,40,-1,40,39,1,-1,0,4,41,-1,41,40,0,-1,4,7,42,-1,42,41,4,-1,29,26,43,-1,43,42,29,-1,26,30,44,-1,44,43,26,-1,30,25,45,-1,45,44,30,-1,25,23,46,-1,46,45,25,-1,23,21,47,-1,47,46,23,-1,21,18,48,-1,48,47,21,-1,33,34,49,-1,49,48,33,-1,8,3,36,-1,36,49,8,-1,9,13,51,-1,51,50,9,-1,13,14,52,-1,52,51,13,-1,14,11,53,-1,53,52,14,-1,11,10,54,-1,54,53,11,-1,10,15,55,-1,55,54,10,-1,16,12,56,-1,56,55,16,-1,35,32,57,-1,57,56,35,-1,19,20,58,-1,58,57,19,-1,20,22,59,-1,59,58,20,-1,22,24,60,-1,60,59,22,-1,24,31,61,-1,61,60,24,-1,31,27,62,-1,62,61,31,-1,27,28,63,-1,63,62,27,-1,17,9,50,-1,50,63,17,-1}, 432);
SoIndexedFaceSet249->setCoordIndex(new int32_t[]{11,7,4,-1,4,2,11,-1,7,8,5,-1,5,4,7,-1,8,10,1,-1,1,5,8,-1,3,6,12,-1,12,23,3,-1,6,3,0,-1,0,9,6,-1,2,26,27,-1,27,11,2,-1,0,1,10,-1,10,9,0,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,17,18,20,-1,20,19,17,-1,21,23,12,-1,12,22,21,-1,22,25,24,-1,24,21,22,-1,13,14,27,-1,27,26,13,-1,24,25,19,-1,19,20,24,-1,29,30,31,-1,31,32,33,-1,29,31,33,-1,34,35,36,-1,33,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,33,36,40,-1,29,33,40,-1,29,40,41,-1,29,41,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,2,4,29,-1,29,28,2,-1,4,5,30,-1,30,29,4,-1,5,1,31,-1,31,30,5,-1,1,0,32,-1,32,31,1,-1,0,3,33,-1,33,32,0,-1,3,23,34,-1,34,33,3,-1,23,21,35,-1,35,34,23,-1,21,24,36,-1,36,35,21,-1,24,20,37,-1,37,36,24,-1,20,18,38,-1,38,37,20,-1,18,16,39,-1,39,38,18,-1,16,13,40,-1,40,39,16,-1,13,26,41,-1,41,40,13,-1,26,2,28,-1,28,41,26,-1,6,9,43,-1,43,42,6,-1,9,10,44,-1,44,43,9,-1,10,8,45,-1,45,44,10,-1,8,7,46,-1,46,45,8,-1,7,11,47,-1,47,46,7,-1,11,27,48,-1,48,47,11,-1,27,14,49,-1,49,48,27,-1,14,15,50,-1,50,49,14,-1,15,17,51,-1,51,50,15,-1,17,19,52,-1,52,51,17,-1,19,25,53,-1,53,52,19,-1,25,22,54,-1,54,53,25,-1,22,12,55,-1,55,54,22,-1,12,6,42,-1,42,55,12,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate250 = new SoTextureCoordinate();
SoTextureCoordinate250->setPoint(new float[]{0.089,0.3604,0.1508,0.3559,0.3588,0.3561,0.3623,0.3532,0.0232,0.3561,0.2188,0.3538,0.1874,0.3541,0.0232,0.3546,0.3608,0.3537,0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.3588,0.3561,0.3589,0.3648,0.2207,0.3633,0.2188,0.3538,0.1922,0.3628,0.1874,0.3541,0.1489,0.3665,0.1508,0.3559,0.0232,0.3561,0.0245,0.3617,0.0254,0.3626,0.0232,0.3546,0.089,0.3604,0.0859,0.3657,0.3617,0.3609,0.3623,0.3532,0.3608,0.3537,0.3616,0.3609,0.3623,0.3532,0.2188,0.3538,0.1874,0.3541,0.1508,0.3559,0.089,0.3604,0.0232,0.3561,0.0232,0.3546,0.0232,0.3561,0.089,0.3604,0.1508,0.3559,0.1874,0.3541,0.2188,0.3538,0.3588,0.3561,0.3608,0.3537,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626}, 128);
SoIndexedFaceSet249->setTexCoord(*SoTextureCoordinate250);

SoCoordinate* SoCoordinate251 = new SoCoordinate();
SoCoordinate251->setPoint(new float[]{3.86,0.0118,2.936,5.361,0.0118,1.276,1.588,0.0118,-2.498,1.36,0.0118,3.192,3.752,0.0118,-1.776,4.97,0.0118,-0.6037,1.418,0.6583,3.362,3.892,0.6583,-1.86,5.121,0.6583,-0.6992,3.987,0.6583,3.259,5.601,0.6583,1.285,1.717,0.6583,-2.528,0.0,0.6583,3.363,-1.588,0.0118,-2.498,-1.717,0.6583,-2.528,-3.892,0.6583,-1.86,-3.752,0.0118,-1.776,-5.121,0.6583,-0.6992,-4.97,0.0118,-0.6037,-5.601,0.6583,1.285,-5.361,0.0118,1.276,-1.36,0.0118,3.192,-1.418,0.6583,3.362,0.0,0.0118,3.192,-3.86,0.0118,2.936,-3.987,0.6583,3.259,0.0,0.0118,-2.506,0.0,0.6583,-2.543,1.558,-0.2996,-2.316,3.655,-0.2996,-1.616,4.803,-0.2996,-0.5114,5.164,-0.2996,1.223,3.771,-0.2996,2.762,1.351,-0.2996,3.01,0.0,-0.2996,3.01,-1.351,-0.2996,3.01,-3.771,-0.2996,2.762,-5.164,-0.2996,1.223,-4.803,-0.2996,-0.5114,-3.655,-0.2996,-1.616,-1.558,-0.2996,-2.316,0.0,-0.2996,-2.324,1.415,0.9368,3.18,3.898,0.9368,3.08,5.402,0.9368,1.24,4.956,0.9368,-0.6038,3.798,0.9368,-1.698,1.689,0.9368,-2.346,0.0,0.9368,-2.361,-1.689,0.9368,-2.346,-3.798,0.9368,-1.698,-4.956,0.9368,-0.6038,-5.402,0.9368,1.24,-3.898,0.9368,3.08,-1.415,0.9368,3.18,0.0,0.9368,3.18}, 168);
SoIndexedFaceSet249->setCoord(*SoCoordinate251);

SoShape245->setGeometry(*SoIndexedFaceSet249);

SoTransform244->addChild(*SoShape245);

SoHAnimSegment243->addChild(*SoTransform244);

SoHAnimJoint242->addChildren(*SoHAnimSegment243);

SoHAnimJoint* SoHAnimJoint252 = new SoHAnimJoint();
SoHAnimJoint252->setDEF(QString("hanim_vt9"));
SoHAnimJoint252->X3DNode::setName(QString("vt9"));
SoHAnimJoint252->setCenter(new float[]{0.0,47.03,-0.6117});
SoHAnimSegment* SoHAnimSegment253 = new SoHAnimSegment();
SoHAnimSegment253->setDEF(QString("hanim_t9"));
SoHAnimSegment253->X3DNode::setName(QString("t9"));
SoTransform* SoTransform254 = new SoTransform();
SoTransform254->setTranslation(new float[]{0.0,47.03,-0.6117});
SoShape* SoShape255 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance256 = new SoVRMLAppearance();
SoMaterial* SoMaterial257 = new SoMaterial();
SoMaterial257->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance256->addChild(*SoMaterial257);

SoImageTexture* SoImageTexture258 = new SoImageTexture();
SoImageTexture258->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance256->addChild(*SoImageTexture258);

SoShape255->addChild(*SoVRMLAppearance256);

SoIndexedFaceSet* SoIndexedFaceSet259 = new SoIndexedFaceSet();
SoIndexedFaceSet259->setCreaseAngle(3.14159);
SoIndexedFaceSet259->setTexCoordIndex(new int32_t[]{9,0,4,-1,4,12,9,-1,7,3,17,-1,17,15,7,-1,4,5,13,-1,13,12,4,-1,14,10,1,-1,1,6,14,-1,10,11,2,-1,2,1,10,-1,11,13,5,-1,5,2,11,-1,0,9,16,-1,16,8,0,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,51,52,53,-1,53,54,55,-1,51,53,55,-1,55,56,57,-1,55,57,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,55,58,62,-1,51,55,62,-1,51,62,63,-1,51,63,50,-1,4,0,37,-1,37,36,4,-1,0,8,38,-1,38,37,0,-1,35,19,39,-1,39,38,35,-1,19,20,40,-1,40,39,19,-1,20,26,41,-1,41,40,20,-1,26,33,42,-1,42,41,26,-1,33,31,43,-1,43,42,33,-1,31,28,44,-1,44,43,31,-1,23,24,45,-1,45,44,23,-1,3,7,46,-1,46,45,3,-1,6,1,47,-1,47,46,6,-1,1,2,48,-1,48,47,1,-1,2,5,49,-1,49,48,2,-1,5,4,36,-1,36,49,5,-1,10,14,51,-1,51,50,10,-1,15,17,52,-1,52,51,15,-1,25,22,53,-1,53,52,25,-1,29,30,54,-1,54,53,29,-1,30,32,55,-1,55,54,30,-1,32,27,56,-1,56,55,32,-1,27,21,57,-1,57,56,27,-1,21,18,58,-1,58,57,21,-1,18,34,59,-1,59,58,18,-1,16,9,60,-1,60,59,16,-1,9,12,61,-1,61,60,9,-1,12,13,62,-1,62,61,12,-1,13,11,63,-1,63,62,13,-1,11,10,50,-1,50,63,11,-1}, 432);
SoIndexedFaceSet259->setCoordIndex(new int32_t[]{7,0,3,-1,3,10,7,-1,5,20,21,-1,21,12,5,-1,3,4,11,-1,11,10,3,-1,12,8,1,-1,1,5,12,-1,8,9,2,-1,2,1,8,-1,9,11,4,-1,4,2,9,-1,0,7,13,-1,13,6,0,-1,14,17,16,-1,16,15,14,-1,19,18,21,-1,21,20,19,-1,16,17,23,-1,23,22,16,-1,18,19,25,-1,25,24,18,-1,24,25,27,-1,27,26,24,-1,26,27,22,-1,22,23,26,-1,15,6,13,-1,13,14,15,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,47,48,49,-1,47,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,47,50,54,-1,43,47,54,-1,43,54,55,-1,43,55,42,-1,3,0,29,-1,29,28,3,-1,0,6,30,-1,30,29,0,-1,6,15,31,-1,31,30,6,-1,15,16,32,-1,32,31,15,-1,16,22,33,-1,33,32,16,-1,22,27,34,-1,34,33,22,-1,27,25,35,-1,35,34,27,-1,25,19,36,-1,36,35,25,-1,19,20,37,-1,37,36,19,-1,20,5,38,-1,38,37,20,-1,5,1,39,-1,39,38,5,-1,1,2,40,-1,40,39,1,-1,2,4,41,-1,41,40,2,-1,4,3,28,-1,28,41,4,-1,8,12,43,-1,43,42,8,-1,12,21,44,-1,44,43,12,-1,21,18,45,-1,45,44,21,-1,18,24,46,-1,46,45,18,-1,24,26,47,-1,47,46,24,-1,26,23,48,-1,48,47,26,-1,23,17,49,-1,49,48,23,-1,17,14,50,-1,50,49,17,-1,14,13,51,-1,51,50,14,-1,13,7,52,-1,52,51,13,-1,7,10,53,-1,53,52,7,-1,10,11,54,-1,54,53,10,-1,11,9,55,-1,55,54,11,-1,9,8,42,-1,42,55,9,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate260 = new SoTextureCoordinate();
SoTextureCoordinate260->setPoint(new float[]{0.0245,0.3617,0.2207,0.3633,0.1922,0.3628,0.3616,0.3609,0.0859,0.3657,0.1489,0.3665,0.3589,0.3648,0.3617,0.3609,0.0254,0.3626,0.0258,0.3672,0.2227,0.3728,0.1969,0.3716,0.0826,0.3711,0.1469,0.377,0.3589,0.3735,0.3612,0.3687,0.0276,0.3706,0.3625,0.3682,0.0258,0.3672,0.0245,0.3617,0.0859,0.3657,0.0826,0.3711,0.3612,0.3687,0.3617,0.3609,0.3616,0.3609,0.3625,0.3682,0.1489,0.3665,0.1469,0.377,0.3589,0.3648,0.3589,0.3735,0.2227,0.3728,0.2207,0.3633,0.1969,0.3716,0.1922,0.3628,0.0276,0.3706,0.0254,0.3626,0.0859,0.3657,0.0245,0.3617,0.0254,0.3626,0.0245,0.3617,0.0859,0.3657,0.1489,0.3665,0.1922,0.3628,0.2207,0.3633,0.3589,0.3648,0.3616,0.3609,0.3617,0.3609,0.2207,0.3633,0.1922,0.3628,0.1489,0.3665,0.2227,0.3728,0.3589,0.3735,0.3625,0.3682,0.3612,0.3687,0.2227,0.3728,0.1969,0.3716,0.1469,0.377,0.0826,0.3711,0.0258,0.3672,0.0276,0.3706,0.0258,0.3672,0.0826,0.3711,0.1469,0.377,0.1969,0.3716}, 128);
SoIndexedFaceSet259->setTexCoord(*SoTextureCoordinate260);

SoCoordinate* SoCoordinate261 = new SoCoordinate();
SoCoordinate261->setPoint(new float[]{1.418,0.0059,3.362,3.892,0.0059,-1.86,5.121,0.0059,-0.6992,3.987,0.0059,3.259,5.601,0.0059,1.285,1.717,0.0059,-2.528,0.0,0.0059,3.363,1.476,0.6524,3.533,4.033,0.6524,-1.943,5.271,0.6524,-0.7947,4.115,0.6524,3.582,5.84,0.6524,1.295,1.845,0.6524,-2.558,0.0,0.6524,3.533,-1.476,0.6524,3.533,-1.418,0.0059,3.362,-3.987,0.0059,3.259,-4.115,0.6524,3.582,-1.845,0.6524,-2.558,-1.717,0.0059,-2.528,0.0,0.0059,-2.543,0.0,0.6524,-2.58,-5.601,0.0059,1.285,-5.84,0.6524,1.295,-4.033,0.6524,-1.943,-3.892,0.0059,-1.86,-5.271,0.6524,-0.7947,-5.121,0.0059,-0.6992,3.895,-0.2838,3.074,1.415,-0.2838,3.173,0.0,-0.2838,3.173,-1.415,-0.2838,3.173,-3.895,-0.2838,3.074,-5.395,-0.2838,1.239,-4.95,-0.2838,-0.6002,-3.794,-0.2838,-1.692,-1.688,-0.2838,-2.339,0.0,-0.2838,-2.354,1.688,-0.2838,-2.339,3.794,-0.2838,-1.692,4.95,-0.2838,-0.6002,5.395,-0.2838,1.239,3.937,0.9744,-1.774,1.818,0.9744,-2.369,0.0,0.9744,-2.391,-1.818,0.9744,-2.369,-3.937,0.9744,-1.774,-5.103,0.9744,-0.6928,-5.633,0.9744,1.255,-4.022,0.9744,3.391,-1.478,0.9744,3.344,0.0,0.9744,3.344,1.478,0.9744,3.344,4.022,0.9744,3.391,5.633,0.9744,1.255,5.103,0.9744,-0.6928}, 168);
SoIndexedFaceSet259->setCoord(*SoCoordinate261);

SoShape255->setGeometry(*SoIndexedFaceSet259);

SoTransform254->addChild(*SoShape255);

SoHAnimSegment253->addChild(*SoTransform254);

SoHAnimJoint252->addChildren(*SoHAnimSegment253);

SoHAnimJoint* SoHAnimJoint262 = new SoHAnimJoint();
SoHAnimJoint262->setDEF(QString("hanim_vt8"));
SoHAnimJoint262->X3DNode::setName(QString("vt8"));
SoHAnimJoint262->setCenter(new float[]{0.0,47.68,-0.6117});
SoHAnimSegment* SoHAnimSegment263 = new SoHAnimSegment();
SoHAnimSegment263->setDEF(QString("hanim_t8"));
SoHAnimSegment263->X3DNode::setName(QString("t8"));
SoTransform* SoTransform264 = new SoTransform();
SoTransform264->setTranslation(new float[]{0.0,47.68,-0.6117});
SoShape* SoShape265 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance266 = new SoVRMLAppearance();
SoMaterial* SoMaterial267 = new SoMaterial();
SoMaterial267->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance266->addChild(*SoMaterial267);

SoImageTexture* SoImageTexture268 = new SoImageTexture();
SoImageTexture268->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance266->addChild(*SoImageTexture268);

SoShape265->addChild(*SoVRMLAppearance266);

SoIndexedFaceSet* SoIndexedFaceSet269 = new SoIndexedFaceSet();
SoIndexedFaceSet269->setCreaseAngle(3.14159);
SoIndexedFaceSet269->setTexCoordIndex(new int32_t[]{1,14,9,-1,9,0,1,-1,11,13,8,-1,8,5,11,-1,9,10,3,-1,3,0,9,-1,4,6,16,-1,16,12,4,-1,6,7,17,-1,17,16,6,-1,7,3,10,-1,10,17,7,-1,14,1,2,-1,2,15,14,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,20,21,27,-1,27,26,20,-1,29,28,31,-1,31,30,29,-1,30,31,33,-1,33,32,30,-1,32,33,26,-1,26,27,32,-1,19,35,34,-1,34,18,19,-1,37,38,39,-1,39,40,41,-1,41,42,43,-1,39,41,43,-1,43,44,45,-1,45,46,47,-1,43,45,47,-1,39,43,47,-1,47,48,49,-1,39,47,49,-1,37,39,49,-1,37,49,36,-1,51,52,53,-1,53,54,55,-1,55,56,57,-1,53,55,57,-1,57,58,59,-1,59,60,61,-1,57,59,61,-1,53,57,61,-1,61,62,63,-1,53,61,63,-1,51,53,63,-1,51,63,50,-1,12,16,37,-1,37,36,12,-1,16,17,38,-1,38,37,16,-1,17,10,39,-1,39,38,17,-1,10,9,40,-1,40,39,10,-1,9,14,41,-1,41,40,9,-1,14,15,42,-1,42,41,14,-1,35,19,43,-1,43,42,35,-1,19,20,44,-1,44,43,19,-1,20,26,45,-1,45,44,20,-1,26,33,46,-1,46,45,26,-1,33,31,47,-1,47,46,33,-1,31,28,48,-1,48,47,31,-1,23,24,49,-1,49,48,23,-1,13,11,36,-1,36,49,13,-1,2,1,51,-1,51,50,2,-1,1,0,52,-1,52,51,1,-1,0,3,53,-1,53,52,0,-1,3,7,54,-1,54,53,3,-1,7,6,55,-1,55,54,7,-1,6,4,56,-1,56,55,6,-1,5,8,57,-1,57,56,5,-1,25,22,58,-1,58,57,25,-1,29,30,59,-1,59,58,29,-1,30,32,60,-1,60,59,30,-1,32,27,61,-1,61,60,32,-1,27,21,62,-1,62,61,27,-1,21,18,63,-1,63,62,21,-1,18,34,50,-1,50,63,18,-1}, 432);
SoIndexedFaceSet269->setCoordIndex(new int32_t[]{4,0,9,-1,9,3,4,-1,11,19,20,-1,20,6,11,-1,9,10,5,-1,5,3,9,-1,6,7,1,-1,1,11,6,-1,7,8,2,-1,2,1,7,-1,8,5,10,-1,10,2,8,-1,0,4,12,-1,12,27,0,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,15,16,22,-1,22,21,15,-1,17,18,24,-1,24,23,17,-1,23,24,26,-1,26,25,23,-1,25,26,21,-1,21,22,25,-1,14,27,12,-1,12,13,14,-1,29,30,31,-1,31,32,33,-1,33,34,35,-1,31,33,35,-1,35,36,37,-1,37,38,39,-1,35,37,39,-1,31,35,39,-1,39,40,41,-1,31,39,41,-1,29,31,41,-1,29,41,28,-1,43,44,45,-1,45,46,47,-1,47,48,49,-1,45,47,49,-1,49,50,51,-1,51,52,53,-1,49,51,53,-1,45,49,53,-1,53,54,55,-1,45,53,55,-1,43,45,55,-1,43,55,42,-1,11,1,29,-1,29,28,11,-1,1,2,30,-1,30,29,1,-1,2,10,31,-1,31,30,2,-1,10,9,32,-1,32,31,10,-1,9,0,33,-1,33,32,9,-1,0,27,34,-1,34,33,0,-1,27,14,35,-1,35,34,27,-1,14,15,36,-1,36,35,14,-1,15,21,37,-1,37,36,15,-1,21,26,38,-1,38,37,21,-1,26,24,39,-1,39,38,26,-1,24,18,40,-1,40,39,24,-1,18,19,41,-1,41,40,18,-1,19,11,28,-1,28,41,19,-1,12,4,43,-1,43,42,12,-1,4,3,44,-1,44,43,4,-1,3,5,45,-1,45,44,3,-1,5,8,46,-1,46,45,5,-1,8,7,47,-1,47,46,8,-1,7,6,48,-1,48,47,7,-1,6,20,49,-1,49,48,6,-1,20,17,50,-1,50,49,20,-1,17,23,51,-1,51,50,17,-1,23,25,52,-1,52,51,23,-1,25,22,53,-1,53,52,25,-1,22,16,54,-1,54,53,22,-1,16,13,55,-1,55,54,16,-1,13,12,42,-1,42,55,13,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate270 = new SoTextureCoordinate();
SoTextureCoordinate270->setPoint(new float[]{0.0908,0.3999,0.0325,0.3879,0.0306,0.3835,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0802,0.3883,0.1575,0.3746,0.3637,0.3704,0.356,0.3713,0.3581,0.3683,0.0256,0.3731,0.0261,0.363,0.2218,0.3729,0.1941,0.3712,0.0325,0.3879,0.0256,0.3731,0.0802,0.3883,0.0908,0.3999,0.3589,0.3783,0.3637,0.3704,0.3581,0.3683,0.3561,0.3769,0.1575,0.3746,0.1568,0.3845,0.356,0.3713,0.3535,0.3812,0.2214,0.3832,0.2218,0.3729,0.1952,0.3809,0.1941,0.3712,0.0306,0.3835,0.0261,0.363,0.3637,0.3704,0.2218,0.3729,0.1941,0.3712,0.1575,0.3746,0.0802,0.3883,0.0256,0.3731,0.0261,0.363,0.0256,0.3731,0.0802,0.3883,0.1575,0.3746,0.1941,0.3712,0.2218,0.3729,0.356,0.3713,0.3581,0.3683,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999,0.0325,0.3879}, 128);
SoIndexedFaceSet269->setTexCoord(*SoTextureCoordinate270);

SoCoordinate* SoCoordinate271 = new SoCoordinate();
SoCoordinate271->setPoint(new float[]{1.476,0.0001,3.533,4.033,0.0001,-1.943,5.271,0.0001,-0.7947,4.234,0.6936,3.898,1.538,0.6936,3.713,6.114,0.7245,1.306,1.987,0.7245,-2.592,4.188,0.7245,-2.037,5.442,0.7245,-0.9006,4.115,0.0001,3.582,5.84,0.0001,1.295,1.845,0.0001,-2.558,0.0,0.6936,3.713,-1.538,0.6936,3.713,-1.476,0.0001,3.533,-4.115,0.0001,3.582,-4.234,0.6936,3.898,-1.987,0.7245,-2.592,-1.845,0.0001,-2.558,0.0,0.0001,-2.58,0.0,0.7245,-2.622,-5.84,0.0001,1.295,-6.114,0.7245,1.306,-4.188,0.7245,-2.037,-4.033,0.0001,-1.943,-5.442,0.7245,-0.9006,-5.271,0.0001,-0.7947,0.0,0.0001,3.533,1.82,-0.2993,-2.38,3.943,-0.2993,-1.784,5.113,-0.2993,-0.6987,5.646,-0.2993,1.257,4.027,-0.2993,3.403,1.478,-0.2993,3.355,0.0,-0.2993,3.355,-1.478,-0.2993,3.355,-4.027,-0.2993,3.403,-5.646,-0.2993,1.257,-5.113,-0.2993,-0.6987,-3.943,-0.2993,-1.784,-1.82,-0.2993,-2.38,0.0,-0.2993,-2.402,0.0,1.036,3.535,1.544,1.036,3.534,4.148,1.036,3.713,5.917,1.036,1.273,5.286,1.036,-0.8017,4.102,1.036,-1.875,1.963,1.036,-2.414,0.0,1.036,-2.444,-1.963,1.036,-2.414,-4.102,1.036,-1.875,-5.286,1.036,-0.8017,-5.917,1.036,1.273,-4.148,1.036,3.713,-1.544,1.036,3.534}, 168);
SoIndexedFaceSet269->setCoord(*SoCoordinate271);

SoShape265->setGeometry(*SoIndexedFaceSet269);

SoTransform264->addChild(*SoShape265);

SoHAnimSegment263->addChild(*SoTransform264);

SoHAnimJoint262->addChildren(*SoHAnimSegment263);

SoHAnimJoint* SoHAnimJoint272 = new SoHAnimJoint();
SoHAnimJoint272->setDEF(QString("hanim_vt7"));
SoHAnimJoint272->X3DNode::setName(QString("vt7"));
SoHAnimJoint272->setCenter(new float[]{0.0,48.37,-0.6117});
SoHAnimSegment* SoHAnimSegment273 = new SoHAnimSegment();
SoHAnimSegment273->setDEF(QString("hanim_t7"));
SoHAnimSegment273->X3DNode::setName(QString("t7"));
SoTransform* SoTransform274 = new SoTransform();
SoTransform274->setTranslation(new float[]{0.0,48.37,-0.6117});
SoShape* SoShape275 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance276 = new SoVRMLAppearance();
SoMaterial* SoMaterial277 = new SoMaterial();
SoMaterial277->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance276->addChild(*SoMaterial277);

SoImageTexture* SoImageTexture278 = new SoImageTexture();
SoImageTexture278->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance276->addChild(*SoImageTexture278);

SoShape275->addChild(*SoVRMLAppearance276);

SoIndexedFaceSet* SoIndexedFaceSet279 = new SoIndexedFaceSet();
SoIndexedFaceSet279->setCreaseAngle(3.14159);
SoIndexedFaceSet279->setTexCoordIndex(new int32_t[]{3,8,9,-1,9,11,3,-1,13,16,6,-1,6,5,13,-1,10,0,7,-1,7,17,10,-1,2,1,14,-1,14,12,2,-1,1,4,15,-1,15,14,1,-1,4,3,11,-1,11,15,4,-1,0,10,9,-1,9,8,0,-1,19,18,21,-1,21,20,19,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,31,30,33,-1,33,32,31,-1,32,33,35,-1,35,34,32,-1,34,35,18,-1,18,19,34,-1,27,20,21,-1,21,26,27,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,54,58,62,-1,62,63,50,-1,54,62,50,-1,52,54,50,-1,51,52,50,-1,5,6,37,-1,37,36,5,-1,25,22,38,-1,38,37,25,-1,31,32,39,-1,39,38,31,-1,32,34,40,-1,40,39,32,-1,34,19,41,-1,41,40,34,-1,19,20,42,-1,42,41,19,-1,20,27,43,-1,43,42,20,-1,27,28,44,-1,44,43,27,-1,7,0,45,-1,45,44,7,-1,0,8,46,-1,46,45,0,-1,8,3,47,-1,47,46,8,-1,3,4,48,-1,48,47,3,-1,4,1,49,-1,49,48,4,-1,1,2,36,-1,36,49,1,-1,10,17,51,-1,51,50,10,-1,29,26,52,-1,52,51,29,-1,26,21,53,-1,53,52,26,-1,21,18,54,-1,54,53,21,-1,18,35,55,-1,55,54,18,-1,35,33,56,-1,56,55,35,-1,33,30,57,-1,57,56,33,-1,23,24,58,-1,58,57,23,-1,16,13,59,-1,59,58,16,-1,12,14,60,-1,60,59,12,-1,14,15,61,-1,61,60,14,-1,15,11,62,-1,62,61,15,-1,11,9,63,-1,63,62,11,-1,9,10,50,-1,50,63,9,-1}, 432);
SoIndexedFaceSet279->setCoordIndex(new int32_t[]{0,2,6,-1,6,8,0,-1,9,18,19,-1,19,1,9,-1,7,5,22,-1,22,23,7,-1,1,3,10,-1,10,9,1,-1,3,4,11,-1,11,10,3,-1,4,0,8,-1,8,11,4,-1,5,7,6,-1,6,2,5,-1,13,12,15,-1,15,14,13,-1,17,16,19,-1,19,18,17,-1,20,23,22,-1,22,21,20,-1,16,17,25,-1,25,24,16,-1,24,25,27,-1,27,26,24,-1,26,27,12,-1,12,13,26,-1,21,14,15,-1,15,20,21,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,46,50,54,-1,54,55,42,-1,46,54,42,-1,44,46,42,-1,43,44,42,-1,1,19,29,-1,29,28,1,-1,19,16,30,-1,30,29,19,-1,16,24,31,-1,31,30,16,-1,24,26,32,-1,32,31,24,-1,26,13,33,-1,33,32,26,-1,13,14,34,-1,34,33,13,-1,14,21,35,-1,35,34,14,-1,21,22,36,-1,36,35,21,-1,22,5,37,-1,37,36,22,-1,5,2,38,-1,38,37,5,-1,2,0,39,-1,39,38,2,-1,0,4,40,-1,40,39,0,-1,4,3,41,-1,41,40,4,-1,3,1,28,-1,28,41,3,-1,7,23,43,-1,43,42,7,-1,23,20,44,-1,44,43,23,-1,20,15,45,-1,45,44,20,-1,15,12,46,-1,46,45,15,-1,12,27,47,-1,47,46,12,-1,27,25,48,-1,48,47,27,-1,25,17,49,-1,49,48,25,-1,17,18,50,-1,50,49,17,-1,18,9,51,-1,51,50,18,-1,9,10,52,-1,52,51,9,-1,10,11,53,-1,53,52,10,-1,11,8,54,-1,54,53,11,-1,8,6,55,-1,55,54,8,-1,6,7,42,-1,42,55,6,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate280 = new SoTextureCoordinate();
SoTextureCoordinate280->setPoint(new float[]{0.0437,0.4075,0.2185,0.3912,0.3484,0.3944,0.1518,0.3905,0.1902,0.3894,0.3503,0.3879,0.3505,0.3886,0.0427,0.408,0.0961,0.4138,0.0908,0.3999,0.0325,0.3879,0.1568,0.3845,0.3535,0.3812,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.3561,0.3769,0.0306,0.3835,0.1568,0.3845,0.1518,0.3905,0.0961,0.4138,0.0908,0.3999,0.3503,0.3879,0.3589,0.3783,0.3561,0.3769,0.3505,0.3886,0.0325,0.3879,0.0437,0.4075,0.0427,0.408,0.0306,0.3835,0.3535,0.3812,0.3484,0.3944,0.2185,0.3912,0.2214,0.3832,0.1902,0.3894,0.1952,0.3809,0.3484,0.3944,0.3505,0.3886,0.3503,0.3879,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.0325,0.3879,0.0306,0.3835,0.0325,0.3879,0.0908,0.3999,0.1568,0.3845,0.1952,0.3809,0.2214,0.3832,0.3535,0.3812,0.3561,0.3769,0.3589,0.3783,0.2214,0.3832,0.1952,0.3809,0.1568,0.3845,0.0908,0.3999}, 128);
SoIndexedFaceSet279->setTexCoord(*SoTextureCoordinate280);

SoCoordinate* SoCoordinate281 = new SoCoordinate();
SoCoordinate281->setPoint(new float[]{6.285,0.5819,1.319,2.062,0.5819,-2.618,4.101,0.5819,3.729,4.29,0.5819,-2.105,5.572,0.5819,-0.9516,1.585,0.5819,3.822,4.234,0.0006,3.898,1.538,0.0006,3.713,6.114,0.0315,1.306,1.987,0.0315,-2.592,4.188,0.0315,-2.037,5.442,0.0315,-0.9006,-6.114,0.0315,1.306,-6.285,0.5819,1.319,-4.101,0.5819,3.729,-4.234,0.0006,3.898,-2.062,0.5819,-2.618,-1.987,0.0315,-2.592,0.0,0.0315,-2.622,0.0,0.5819,-2.665,-1.538,0.0006,3.713,-1.585,0.5819,3.822,0.0,0.5819,3.826,0.0,0.0006,3.713,-4.29,0.5819,-2.105,-4.188,0.0315,-2.037,-5.572,0.5819,-0.9516,-5.442,0.0315,-0.9006,2.035,0.9259,-2.406,0.0,0.9259,-2.453,-2.035,0.9259,-2.406,-4.189,0.9259,-1.911,-5.387,0.9259,-0.8326,-6.046,0.9259,1.267,-4.004,0.9259,3.52,-1.581,0.9259,3.609,0.0,0.9259,3.614,1.581,0.9259,3.609,4.004,0.9259,3.52,6.046,0.9259,1.267,5.387,0.9259,-0.8326,4.189,0.9259,-1.911,1.524,-0.369,3.422,0.0,-0.369,3.422,-1.524,-0.369,3.422,-4.074,-0.369,3.594,-5.798,-0.369,1.248,-5.183,-0.369,-0.7464,-4.029,-0.369,-1.779,-1.931,-0.369,-2.301,0.0,-0.369,-2.33,1.931,-0.369,-2.301,4.029,-0.369,-1.779,5.183,-0.369,-0.7464,5.798,-0.369,1.248,4.074,-0.369,3.594}, 168);
SoIndexedFaceSet279->setCoord(*SoCoordinate281);

SoShape275->setGeometry(*SoIndexedFaceSet279);

SoTransform274->addChild(*SoShape275);

SoHAnimSegment273->addChild(*SoTransform274);

SoHAnimJoint272->addChildren(*SoHAnimSegment273);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->setDEF(QString("hanim_vt6"));
SoHAnimJoint282->X3DNode::setName(QString("vt6"));
SoHAnimJoint282->setCenter(new float[]{0.0,48.95,-0.6117});
SoHAnimSegment* SoHAnimSegment283 = new SoHAnimSegment();
SoHAnimSegment283->setDEF(QString("hanim_t6"));
SoHAnimSegment283->X3DNode::setName(QString("t6"));
SoTransform* SoTransform284 = new SoTransform();
SoTransform284->setTranslation(new float[]{0.0,48.95,-0.6117});
SoShape* SoShape285 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance286 = new SoVRMLAppearance();
SoMaterial* SoMaterial287 = new SoMaterial();
SoMaterial287->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance286->addChild(*SoMaterial287);

SoImageTexture* SoImageTexture288 = new SoImageTexture();
SoImageTexture288->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance286->addChild(*SoImageTexture288);

SoShape285->addChild(*SoVRMLAppearance286);

SoIndexedFaceSet* SoIndexedFaceSet289 = new SoIndexedFaceSet();
SoIndexedFaceSet289->setCreaseAngle(3.14159);
SoIndexedFaceSet289->setTexCoordIndex(new int32_t[]{17,13,8,-1,8,4,17,-1,3,2,9,-1,9,16,3,-1,1,10,14,-1,14,5,1,-1,6,12,17,-1,17,4,6,-1,13,9,2,-1,2,8,13,-1,16,15,7,-1,7,3,16,-1,7,15,11,-1,11,0,7,-1,18,21,20,-1,20,19,18,-1,23,22,25,-1,25,24,23,-1,26,29,28,-1,28,27,26,-1,30,21,18,-1,18,31,30,-1,19,20,24,-1,24,25,19,-1,22,23,33,-1,33,32,22,-1,33,35,34,-1,34,32,33,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,4,8,37,-1,37,36,4,-1,8,2,38,-1,38,37,8,-1,2,3,39,-1,39,38,2,-1,3,7,40,-1,40,39,3,-1,7,0,41,-1,41,40,7,-1,1,5,42,-1,42,41,1,-1,29,26,43,-1,43,42,29,-1,35,33,44,-1,44,43,35,-1,33,23,45,-1,45,44,33,-1,23,24,46,-1,46,45,23,-1,24,20,47,-1,47,46,24,-1,20,21,48,-1,48,47,20,-1,21,30,49,-1,49,48,21,-1,6,4,36,-1,36,49,6,-1,14,10,51,-1,51,50,14,-1,11,15,52,-1,52,51,11,-1,15,16,53,-1,53,52,15,-1,16,9,54,-1,54,53,16,-1,9,13,55,-1,55,54,9,-1,13,17,56,-1,56,55,13,-1,17,12,57,-1,57,56,17,-1,31,18,58,-1,58,57,31,-1,18,19,59,-1,59,58,18,-1,19,25,60,-1,60,59,19,-1,25,22,61,-1,61,60,25,-1,22,32,62,-1,62,61,22,-1,32,34,63,-1,63,62,32,-1,27,28,50,-1,50,63,27,-1}, 432);
SoIndexedFaceSet289->setCoordIndex(new int32_t[]{12,9,5,-1,5,3,12,-1,2,1,6,-1,6,11,2,-1,0,7,23,-1,23,24,0,-1,25,8,12,-1,12,3,25,-1,9,6,1,-1,1,5,9,-1,11,10,4,-1,4,2,11,-1,4,10,7,-1,7,0,4,-1,13,16,15,-1,15,14,13,-1,18,17,20,-1,20,19,18,-1,21,24,23,-1,23,22,21,-1,25,16,13,-1,13,8,25,-1,14,15,19,-1,19,20,14,-1,17,18,27,-1,27,26,17,-1,27,21,22,-1,22,26,27,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,5,29,-1,29,28,3,-1,5,1,30,-1,30,29,5,-1,1,2,31,-1,31,30,1,-1,2,4,32,-1,32,31,2,-1,4,0,33,-1,33,32,4,-1,0,24,34,-1,34,33,0,-1,24,21,35,-1,35,34,24,-1,21,27,36,-1,36,35,21,-1,27,18,37,-1,37,36,27,-1,18,19,38,-1,38,37,18,-1,19,15,39,-1,39,38,19,-1,15,16,40,-1,40,39,15,-1,16,25,41,-1,41,40,16,-1,25,3,28,-1,28,41,25,-1,23,7,43,-1,43,42,23,-1,7,10,44,-1,44,43,7,-1,10,11,45,-1,45,44,10,-1,11,6,46,-1,46,45,11,-1,6,9,47,-1,47,46,6,-1,9,12,48,-1,48,47,9,-1,12,8,49,-1,49,48,12,-1,8,13,50,-1,50,49,8,-1,13,14,51,-1,51,50,13,-1,14,20,52,-1,52,51,14,-1,20,17,53,-1,53,52,20,-1,17,26,54,-1,54,53,17,-1,26,22,55,-1,55,54,26,-1,22,23,42,-1,42,55,22,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate290 = new SoTextureCoordinate();
SoTextureCoordinate290->setPoint(new float[]{0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.1518,0.3905,0.3506,0.3865,0.3484,0.3944,0.0427,0.408,0.0961,0.4138,0.3437,0.3934,0.2185,0.3912,0.1902,0.3894,0.0437,0.4075,0.0437,0.4075,0.0961,0.4138,0.1008,0.4259,0.055,0.4216,0.1902,0.3894,0.1843,0.4071,0.1528,0.4078,0.1518,0.3905,0.3364,0.4029,0.3506,0.3865,0.3437,0.3934,0.3325,0.4068,0.0482,0.4185,0.0427,0.408,0.2185,0.3912,0.221,0.4256,0.3484,0.3944,0.3061,0.4256,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.3437,0.3934,0.3506,0.3865,0.2185,0.3912,0.1902,0.3894,0.1518,0.3905,0.0961,0.4138,0.0437,0.4075,0.0427,0.408,0.0437,0.4075,0.0961,0.4138,0.1518,0.3905,0.1902,0.3894,0.2185,0.3912,0.3484,0.3944}, 128);
SoIndexedFaceSet289->setTexCoord(*SoTextureCoordinate290);

SoCoordinate* SoCoordinate291 = new SoCoordinate();
SoCoordinate291->setPoint(new float[]{1.937,0.6896,-2.644,6.192,0.6897,1.374,5.738,0.6897,-0.7614,1.615,0.6897,3.729,4.273,0.6897,-2.169,3.945,0.6897,3.53,6.285,0.0041,1.319,2.062,0.0041,-2.618,0.0,0.0041,3.826,4.101,0.0041,3.729,4.29,0.0041,-2.105,5.572,0.0041,-0.9516,1.585,0.0041,3.822,-1.585,0.0041,3.822,-4.101,0.0041,3.729,-3.945,0.6897,3.53,-1.615,0.6897,3.729,-5.572,0.0041,-0.9516,-5.738,0.6897,-0.7614,-6.192,0.6897,1.374,-6.285,0.0041,1.319,-1.937,0.6896,-2.644,-2.062,0.0041,-2.618,0.0,0.0041,-2.665,0.0,0.6896,-2.735,0.0,0.6897,3.756,-4.29,0.0041,-2.105,-4.273,0.6897,-2.169,1.603,1.033,3.489,3.84,1.033,3.298,5.929,1.033,1.293,5.518,1.033,-0.6393,4.157,1.033,-1.947,1.907,1.033,-2.405,0.0,1.033,-2.494,-1.907,1.033,-2.405,-4.157,1.033,-1.947,-5.518,1.033,-0.6393,-5.929,1.033,1.293,-3.84,1.033,3.298,-1.603,1.033,3.489,0.0,1.033,3.516,0.0,-0.2313,-2.425,2.032,-0.2313,-2.378,4.176,-0.2313,-1.885,5.362,-0.2313,-0.8168,6.015,-0.2313,1.26,3.991,-0.2313,3.492,1.581,-0.2313,3.581,0.0,-0.2313,3.586,-1.581,-0.2313,3.581,-3.991,-0.2313,3.492,-6.015,-0.2313,1.26,-5.362,-0.2313,-0.8168,-4.176,-0.2313,-1.885,-2.032,-0.2313,-2.378}, 168);
SoIndexedFaceSet289->setCoord(*SoCoordinate291);

SoShape285->setGeometry(*SoIndexedFaceSet289);

SoTransform284->addChild(*SoShape285);

SoHAnimSegment283->addChild(*SoTransform284);

SoHAnimJoint282->addChildren(*SoHAnimSegment283);

SoHAnimJoint* SoHAnimJoint292 = new SoHAnimJoint();
SoHAnimJoint292->setDEF(QString("hanim_vt5"));
SoHAnimJoint292->X3DNode::setName(QString("vt5"));
SoHAnimJoint292->setCenter(new float[]{0.0,49.64,-0.6117});
SoHAnimSegment* SoHAnimSegment293 = new SoHAnimSegment();
SoHAnimSegment293->setDEF(QString("hanim_t5"));
SoHAnimSegment293->X3DNode::setName(QString("t5"));
SoTransform* SoTransform294 = new SoTransform();
SoTransform294->setTranslation(new float[]{0.0,49.64,-0.6117});
SoShape* SoShape295 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance296 = new SoVRMLAppearance();
SoMaterial* SoMaterial297 = new SoMaterial();
SoMaterial297->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance296->addChild(*SoMaterial297);

SoImageTexture* SoImageTexture298 = new SoImageTexture();
SoImageTexture298->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance296->addChild(*SoImageTexture298);

SoShape295->addChild(*SoVRMLAppearance296);

SoIndexedFaceSet* SoIndexedFaceSet299 = new SoIndexedFaceSet();
SoIndexedFaceSet299->setCreaseAngle(3.14159);
SoIndexedFaceSet299->setTexCoordIndex(new int32_t[]{5,10,14,-1,14,2,5,-1,8,15,13,-1,13,7,8,-1,17,11,3,-1,3,6,17,-1,12,16,0,-1,0,4,12,-1,0,16,9,-1,9,1,0,-1,6,7,13,-1,13,17,6,-1,4,3,11,-1,11,12,4,-1,19,18,21,-1,21,20,19,-1,22,25,24,-1,24,23,22,-1,27,26,29,-1,29,28,27,-1,31,30,33,-1,33,32,31,-1,33,35,34,-1,34,32,33,-1,26,27,24,-1,24,25,26,-1,30,31,28,-1,28,29,30,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,48,49,36,-1,44,48,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,52,53,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,60,-1,60,61,62,-1,58,60,62,-1,62,63,50,-1,58,62,50,-1,54,58,50,-1,52,54,50,-1,51,52,50,-1,7,6,37,-1,37,36,7,-1,6,3,38,-1,38,37,6,-1,3,4,39,-1,39,38,3,-1,4,0,40,-1,40,39,4,-1,0,1,41,-1,41,40,0,-1,5,2,42,-1,42,41,5,-1,18,19,43,-1,43,42,18,-1,35,33,44,-1,44,43,35,-1,33,30,45,-1,45,44,33,-1,30,29,46,-1,46,45,30,-1,29,26,47,-1,47,46,29,-1,26,25,48,-1,48,47,26,-1,25,22,49,-1,49,48,25,-1,8,7,36,-1,36,49,8,-1,17,13,51,-1,51,50,17,-1,13,15,52,-1,52,51,13,-1,23,24,53,-1,53,52,23,-1,24,27,54,-1,54,53,24,-1,27,28,55,-1,55,54,27,-1,28,31,56,-1,56,55,28,-1,31,32,57,-1,57,56,31,-1,32,34,58,-1,58,57,32,-1,20,21,59,-1,59,58,20,-1,14,10,60,-1,60,59,14,-1,9,16,61,-1,61,60,9,-1,16,12,62,-1,62,61,16,-1,12,11,63,-1,63,62,12,-1,11,17,50,-1,50,63,11,-1}, 432);
SoIndexedFaceSet299->setCoordIndex(new int32_t[]{0,6,16,-1,16,13,0,-1,17,10,9,-1,9,3,17,-1,12,7,5,-1,5,2,12,-1,8,11,4,-1,4,1,8,-1,4,11,6,-1,6,0,4,-1,2,3,9,-1,9,12,2,-1,1,5,7,-1,7,8,1,-1,14,13,16,-1,16,15,14,-1,17,19,18,-1,18,10,17,-1,21,20,23,-1,23,22,21,-1,25,24,27,-1,27,26,25,-1,27,14,15,-1,15,26,27,-1,20,21,18,-1,18,19,20,-1,24,25,22,-1,22,23,24,-1,30,31,32,-1,32,33,34,-1,34,35,36,-1,32,34,36,-1,36,37,38,-1,38,39,40,-1,36,38,40,-1,40,41,28,-1,36,40,28,-1,32,36,28,-1,30,32,28,-1,29,30,28,-1,44,45,46,-1,46,47,48,-1,48,49,50,-1,46,48,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,42,-1,50,54,42,-1,46,50,42,-1,44,46,42,-1,43,44,42,-1,3,2,29,-1,29,28,3,-1,2,5,30,-1,30,29,2,-1,5,1,31,-1,31,30,5,-1,1,4,32,-1,32,31,1,-1,4,0,33,-1,33,32,4,-1,0,13,34,-1,34,33,0,-1,13,14,35,-1,35,34,13,-1,14,27,36,-1,36,35,14,-1,27,24,37,-1,37,36,27,-1,24,23,38,-1,38,37,24,-1,23,20,39,-1,39,38,23,-1,20,19,40,-1,40,39,20,-1,19,17,41,-1,41,40,19,-1,17,3,28,-1,28,41,17,-1,12,9,43,-1,43,42,12,-1,9,10,44,-1,44,43,9,-1,10,18,45,-1,45,44,10,-1,18,21,46,-1,46,45,18,-1,21,22,47,-1,47,46,21,-1,22,25,48,-1,48,47,22,-1,25,26,49,-1,49,48,25,-1,26,15,50,-1,50,49,26,-1,15,16,51,-1,51,50,15,-1,16,6,52,-1,52,51,16,-1,6,11,53,-1,53,52,6,-1,11,8,54,-1,54,53,11,-1,8,7,55,-1,55,54,8,-1,7,12,42,-1,42,55,7,-1}, 432);
SoTextureCoordinate* SoTextureCoordinate300 = new SoTextureCoordinate();
SoTextureCoordinate300->setPoint(new float[]{0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.1538,0.4251,0.1784,0.4249,0.3223,0.4192,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.3061,0.4256,0.3364,0.4029,0.1528,0.4078,0.1843,0.4071,0.055,0.4216,0.3325,0.4068,0.0482,0.4185,0.221,0.4256,0.1008,0.4259,0.3214,0.4203,0.3223,0.4192,0.3364,0.4029,0.3325,0.4068,0.0537,0.4289,0.0482,0.4185,0.055,0.4216,0.0663,0.4356,0.1055,0.438,0.1008,0.4259,0.1528,0.4078,0.1538,0.4251,0.1784,0.4249,0.1843,0.4071,0.221,0.4256,0.2236,0.46,0.3061,0.4256,0.2638,0.4568,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.1008,0.4259,0.055,0.4216,0.0482,0.4185,0.055,0.4216,0.1008,0.4259,0.1528,0.4078,0.1843,0.4071,0.221,0.4256,0.3061,0.4256,0.3325,0.4068,0.3364,0.4029,0.221,0.4256,0.1843,0.4071,0.1528,0.4078}, 128);
SoIndexedFaceSet299->setTexCoord(*SoTextureCoordinate300);

SoCoordinate* SoCoordinate301 = new SoCoordinate();
SoCoordinate301->setPoint(new float[]{1.811,0.6855,-2.67,5.903,0.6856,-0.5713,3.788,0.6856,3.331,1.646,0.6856,3.637,4.256,0.6856,-2.233,6.098,0.6856,1.429,1.937,0.0,-2.644,6.192,0.0001,1.374,5.738,0.0001,-0.7614,1.615,0.0001,3.729,0.0,0.0001,3.756,4.273,0.0001,-2.169,3.945,0.0001,3.53,0.0,0.6855,-2.804,-1.811,0.6855,-2.67,-1.937,0.0,-2.644,0.0,0.0,-2.735,0.0,0.6856,3.687,-1.615,0.0001,3.729,-1.646,0.6856,3.637,-3.788,0.6856,3.331,-3.945,0.0001,3.53,-6.192,0.0001,1.374,-6.098,0.6856,1.429,-5.903,0.6856,-0.5713,-5.738,0.0001,-0.7614,-4.273,0.0001,-2.169,-4.256,0.6856,-2.233,1.621,1.052,3.355,3.67,1.052,3.062,5.802,1.052,1.306,5.631,1.052,-0.4437,4.118,1.052,-1.97,1.776,1.052,-2.389,0.0,1.052,-2.52,-1.776,1.052,-2.389,-4.118,1.052,-1.97,-5.631,1.052,-0.4437,-5.802,1.052,1.306,-3.67,1.052,3.062,-1.621,1.052,3.355,0.0,1.052,3.404,3.821,-0.3346,3.256,1.601,-0.3346,3.447,0.0,-0.3346,3.474,-1.601,-0.3346,3.447,-3.821,-0.3346,3.256,-5.882,-0.3346,1.279,-5.479,-0.3346,-0.6177,-4.136,-0.3346,-1.908,-1.902,-0.3347,-2.363,0.0,-0.3347,-2.451,1.902,-0.3347,-2.363,4.136,-0.3346,-1.908,5.479,-0.3346,-0.6177,5.882,-0.3346,1.279}, 168);
SoIndexedFaceSet299->setCoord(*SoCoordinate301);

SoShape295->setGeometry(*SoIndexedFaceSet299);

SoTransform294->addChild(*SoShape295);

SoHAnimSegment293->addChild(*SoTransform294);

SoHAnimJoint292->addChildren(*SoHAnimSegment293);

SoHAnimJoint* SoHAnimJoint302 = new SoHAnimJoint();
SoHAnimJoint302->setDEF(QString("hanim_vt4"));
SoHAnimJoint302->X3DNode::setName(QString("vt4"));
SoHAnimJoint302->setCenter(new float[]{0.0,50.31,-0.6117});
SoHAnimSegment* SoHAnimSegment303 = new SoHAnimSegment();
SoHAnimSegment303->setDEF(QString("hanim_t4"));
SoHAnimSegment303->X3DNode::setName(QString("t4"));
SoTransform* SoTransform304 = new SoTransform();
SoTransform304->setTranslation(new float[]{0.0,50.31,-0.6117});
SoShape* SoShape305 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance306 = new SoVRMLAppearance();
SoMaterial* SoMaterial307 = new SoMaterial();
SoMaterial307->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance306->addChild(*SoMaterial307);

SoImageTexture* SoImageTexture308 = new SoImageTexture();
SoImageTexture308->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance306->addChild(*SoImageTexture308);

SoShape305->addChild(*SoVRMLAppearance306);

SoIndexedFaceSet* SoIndexedFaceSet309 = new SoIndexedFaceSet();
SoIndexedFaceSet309->setCreaseAngle(3.14159);
SoIndexedFaceSet309->setTexCoordIndex(new int32_t[]{3,4,14,-1,14,18,3,-1,4,1,15,-1,15,14,4,-1,10,17,7,-1,7,6,10,-1,16,11,5,-1,5,8,16,-1,0,19,15,-1,15,1,0,-1,9,16,8,-1,16,9,2,-1,2,12,16,-1,3,18,13,-1,13,2,3,-1,21,20,23,-1,23,22,21,-1,22,23,25,-1,25,24,22,-1,26,29,28,-1,28,27,26,-1,30,33,32,-1,32,31,30,-1,34,24,25,-1,25,35,34,-1,36,33,30,-1,30,38,37,-1,37,36,30,-1,21,37,39,-1,39,20,21,-1,41,42,43,-1,41,43,44,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,41,44,48,-1,48,49,50,-1,50,51,52,-1,48,50,52,-1,41,48,52,-1,52,53,54,-1,41,52,54,-1,41,54,55,-1,41,55,40,-1,58,59,60,-1,60,61,62,-1,62,63,64,-1,60,62,64,-1,64,65,66,-1,66,67,68,-1,64,66,68,-1,68,69,56,-1,64,68,56,-1,60,64,56,-1,58,60,56,-1,57,58,56,-1,4,3,41,-1,41,40,4,-1,3,2,42,-1,42,41,3,-1,2,9,43,-1,43,42,2,-1,9,8,44,-1,44,43,9,-1,8,5,45,-1,45,44,8,-1,6,7,46,-1,46,45,6,-1,28,29,47,-1,47,46,28,-1,32,33,48,-1,48,47,32,-1,33,36,49,-1,49,48,33,-1,36,37,50,-1,50,49,36,-1,37,21,51,-1,51,50,37,-1,21,22,52,-1,52,51,21,-1,22,24,53,-1,53,52,22,-1,24,34,54,-1,54,53,24,-1,0,1,55,-1,55,54,0,-1,1,4,40,-1,40,55,1,-1,14,15,57,-1,57,56,14,-1,15,19,58,-1,58,57,15,-1,35,25,59,-1,59,58,35,-1,25,23,60,-1,60,59,25,-1,23,20,61,-1,61,60,23,-1,20,39,62,-1,62,61,20,-1,38,30,63,-1,63,62,38,-1,30,31,64,-1,64,63,30,-1,26,27,65,-1,65,64,26,-1,17,10,66,-1,66,65,17,-1,11,16,67,-1,67,66,11,-1,16,12,68,-1,68,67,16,-1,13,18,69,-1,69,68,13,-1,18,14,56,-1,56,69,18,-1}, 464);
SoIndexedFaceSet309->setCoordIndex(new int32_t[]{2,3,9,-1,9,12,2,-1,3,0,10,-1,10,9,3,-1,7,20,21,-1,21,4,7,-1,11,7,4,-1,4,5,11,-1,25,26,10,-1,10,0,25,-1,6,11,5,-1,11,6,1,-1,1,8,11,-1,2,12,8,-1,8,1,2,-1,14,13,16,-1,16,15,14,-1,15,16,18,-1,18,17,15,-1,19,22,21,-1,21,20,19,-1,23,24,22,-1,22,19,23,-1,25,17,18,-1,18,26,25,-1,27,24,23,-1,23,29,28,-1,28,27,23,-1,14,28,29,-1,29,13,14,-1,31,32,33,-1,31,33,34,-1,34,35,36,-1,36,37,38,-1,34,36,38,-1,31,34,38,-1,38,39,40,-1,40,41,42,-1,38,40,42,-1,31,38,42,-1,42,43,44,-1,31,42,44,-1,31,44,45,-1,31,45,30,-1,48,49,50,-1,50,51,52,-1,52,53,54,-1,50,52,54,-1,54,55,56,-1,56,57,58,-1,54,56,58,-1,58,59,46,-1,54,58,46,-1,50,54,46,-1,48,50,46,-1,47,48,46,-1,3,2,31,-1,31,30,3,-1,2,1,32,-1,32,31,2,-1,1,6,33,-1,33,32,1,-1,6,5,34,-1,34,33,6,-1,5,4,35,-1,35,34,5,-1,4,21,36,-1,36,35,4,-1,21,22,37,-1,37,36,21,-1,22,24,38,-1,38,37,22,-1,24,27,39,-1,39,38,24,-1,27,28,40,-1,40,39,27,-1,28,14,41,-1,41,40,28,-1,14,15,42,-1,42,41,14,-1,15,17,43,-1,43,42,15,-1,17,25,44,-1,44,43,17,-1,25,0,45,-1,45,44,25,-1,0,3,30,-1,30,45,0,-1,9,10,47,-1,47,46,9,-1,10,26,48,-1,48,47,10,-1,26,18,49,-1,49,48,26,-1,18,16,50,-1,50,49,18,-1,16,13,51,-1,51,50,16,-1,13,29,52,-1,52,51,13,-1,29,23,53,-1,53,52,29,-1,23,19,54,-1,54,53,23,-1,19,20,55,-1,55,54,19,-1,20,7,56,-1,56,55,20,-1,7,11,57,-1,57,56,7,-1,11,8,58,-1,58,57,11,-1,8,12,59,-1,59,58,8,-1,12,9,46,-1,46,59,12,-1}, 464);
SoTextureCoordinate* SoTextureCoordinate310 = new SoTextureCoordinate();
SoTextureCoordinate310->setPoint(new float[]{0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.2633,0.457,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.3223,0.4192,0.2638,0.4568,0.1784,0.4249,0.1784,0.4249,0.1055,0.438,0.0663,0.4356,0.2236,0.46,0.3214,0.4203,0.1538,0.4251,0.0537,0.4289,0.1538,0.4251,0.1504,0.4433,0.1107,0.4532,0.1055,0.438,0.0777,0.4495,0.0663,0.4356,0.3223,0.4192,0.3214,0.4203,0.3214,0.4203,0.3222,0.4193,0.2236,0.46,0.2638,0.4568,0.2633,0.457,0.2198,0.4731,0.0639,0.4488,0.0537,0.4289,0.2144,0.4674,0.1846,0.4438,0.1784,0.4249,0.1784,0.4249,0.1107,0.4532,0.1504,0.4433,0.1846,0.4438,0.2144,0.4674,0.2198,0.4731,0.2633,0.457,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.0777,0.4495,0.1055,0.438,0.0663,0.4356,0.0537,0.4289,0.0663,0.4356,0.1055,0.438,0.1538,0.4251,0.1784,0.4249,0.2236,0.46,0.2638,0.4568,0.3214,0.4203,0.3223,0.4192,0.2236,0.46,0.1784,0.4249,0.1538,0.4251}, 140);
SoIndexedFaceSet309->setTexCoord(*SoTextureCoordinate310);

SoCoordinate* SoCoordinate311 = new SoCoordinate();
SoCoordinate311->setPoint(new float[]{1.681,0.822,3.528,5.775,0.849,-0.9043,5.825,0.7894,1.521,3.585,0.9022,3.073,1.811,0.849,-2.505,4.284,0.849,-2.108,4.617,0.849,-2.072,1.811,0.0128,-2.67,5.903,0.0129,-0.5713,3.788,0.0129,3.331,1.646,0.0129,3.637,4.256,0.0129,-2.233,6.098,0.0129,1.429,-6.098,0.0129,1.429,-5.825,0.7894,1.521,-3.585,0.9022,3.073,-3.788,0.0129,3.331,-1.681,0.822,3.528,-1.646,0.0129,3.637,-1.811,0.0128,-2.67,0.0,0.0128,-2.804,0.0,0.849,-2.639,-1.811,0.849,-2.505,-4.256,0.0129,-2.233,-4.284,0.849,-2.108,0.0,0.822,3.616,0.0,0.0129,3.687,-4.617,0.849,-2.072,-5.775,0.849,-0.9043,-5.903,0.0129,-0.5713,3.461,1.375,2.795,5.523,1.375,1.367,5.479,1.375,-0.7788,4.48,1.375,-1.787,4.244,1.375,-1.812,1.776,1.375,-2.209,0.0,1.375,-2.34,-1.776,1.375,-2.209,-4.244,1.375,-1.812,-4.48,1.375,-1.787,-5.479,1.375,-0.7788,-5.523,1.375,1.367,-3.461,1.375,2.795,-1.638,1.375,3.231,0.0,1.375,3.317,1.638,1.375,3.231,3.663,-0.3222,3.047,1.62,-0.3222,3.339,0.0,-0.3222,3.388,-1.62,-0.3222,3.339,-3.663,-0.3222,3.047,-5.786,-0.3222,1.299,-5.616,-0.3222,-0.4366,-4.111,-0.3222,-1.955,-1.774,-0.3222,-2.373,0.0,-0.3222,-2.505,1.774,-0.3222,-2.373,4.111,-0.3222,-1.955,5.616,-0.3222,-0.4366,5.786,-0.3222,1.299}, 180);
SoIndexedFaceSet309->setCoord(*SoCoordinate311);

SoShape305->setGeometry(*SoIndexedFaceSet309);

SoTransform304->addChild(*SoShape305);

SoHAnimSegment303->addChild(*SoTransform304);

SoHAnimJoint302->addChildren(*SoHAnimSegment303);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setDEF(QString("hanim_vt3"));
SoHAnimJoint312->X3DNode::setName(QString("vt3"));
SoHAnimJoint312->setCenter(new float[]{0.0,51.13,-0.6117});
SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setDEF(QString("hanim_t3"));
SoHAnimSegment313->X3DNode::setName(QString("t3"));
SoTransform* SoTransform314 = new SoTransform();
SoTransform314->setTranslation(new float[]{0.0,51.13,-0.6117});
SoShape* SoShape315 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance316 = new SoVRMLAppearance();
SoMaterial* SoMaterial317 = new SoMaterial();
SoMaterial317->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance316->addChild(*SoMaterial317);

SoImageTexture* SoImageTexture318 = new SoImageTexture();
SoImageTexture318->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance316->addChild(*SoImageTexture318);

SoShape315->addChild(*SoVRMLAppearance316);

SoIndexedFaceSet* SoIndexedFaceSet319 = new SoIndexedFaceSet();
SoIndexedFaceSet319->setCreaseAngle(3.14159);
SoIndexedFaceSet319->setTexCoordIndex(new int32_t[]{2,12,1,-1,1,0,2,-1,1,12,13,-1,4,8,16,-1,16,15,4,-1,11,10,17,-1,17,19,11,-1,21,20,5,-1,5,6,21,-1,14,21,6,-1,6,7,14,-1,16,8,1,-1,1,13,16,-1,20,18,9,-1,9,5,20,-1,3,2,0,-1,0,1,8,-1,4,15,14,-1,14,7,4,-1,6,5,23,-1,23,22,6,-1,5,9,24,-1,24,23,5,-1,10,11,25,-1,25,24,10,-1,0,8,27,-1,27,26,0,-1,8,4,28,-1,28,27,8,-1,4,7,29,-1,29,28,4,-1,7,6,22,-1,22,29,7,-1,15,16,31,-1,31,30,15,-1,16,13,32,-1,32,31,16,-1,13,12,33,-1,33,32,13,-1,19,17,35,-1,35,34,19,-1,18,20,36,-1,36,35,18,-1,20,21,37,-1,37,36,20,-1,21,14,38,-1,38,37,21,-1,14,15,30,-1,30,38,14,-1,42,41,40,-1,40,39,42,-1,40,43,39,-1,45,44,47,-1,47,46,45,-1,49,48,51,-1,51,50,49,-1,53,52,55,-1,55,54,53,-1,57,56,52,-1,52,53,57,-1,47,43,40,-1,40,46,47,-1,54,55,59,-1,59,58,54,-1,60,41,42,-1,41,46,40,-1,45,56,57,-1,57,44,45,-1,52,62,61,-1,61,55,52,-1,55,61,63,-1,63,59,55,-1,50,63,64,-1,64,49,50,-1,41,66,65,-1,65,46,41,-1,46,65,67,-1,67,45,46,-1,45,67,68,-1,68,56,45,-1,56,68,62,-1,62,52,56,-1,44,70,69,-1,69,47,44,-1,47,69,71,-1,71,43,47,-1,43,71,72,-1,72,39,43,-1,48,74,73,-1,73,51,48,-1,58,73,75,-1,75,54,58,-1,54,75,76,-1,76,53,54,-1,53,76,77,-1,77,57,53,-1,57,77,70,-1,70,44,57,-1,31,32,33,-1,33,71,69,-1,69,70,77,-1,33,69,77,-1,77,76,75,-1,75,73,74,-1,77,75,74,-1,74,35,36,-1,36,37,38,-1,74,36,38,-1,77,74,38,-1,33,77,38,-1,31,33,38,-1,31,38,30,-1}, 448);
SoIndexedFaceSet319->setCoordIndex(new int32_t[]{16,15,0,-1,0,7,16,-1,0,15,8,-1,1,5,11,-1,11,10,1,-1,18,6,12,-1,12,17,18,-1,14,13,2,-1,2,3,14,-1,9,14,3,-1,3,4,9,-1,11,5,0,-1,0,8,11,-1,13,12,6,-1,6,2,13,-1,49,16,7,-1,7,0,5,-1,1,10,9,-1,9,4,1,-1,3,2,20,-1,20,19,3,-1,2,6,21,-1,21,20,2,-1,6,18,53,-1,53,21,6,-1,7,5,23,-1,23,22,7,-1,5,1,24,-1,24,23,5,-1,1,4,25,-1,25,24,1,-1,4,3,19,-1,19,25,4,-1,10,11,27,-1,27,26,10,-1,11,8,28,-1,28,27,11,-1,8,15,29,-1,29,28,8,-1,17,12,30,-1,30,62,17,-1,12,13,31,-1,31,30,12,-1,13,14,32,-1,32,31,13,-1,14,9,33,-1,33,32,14,-1,9,10,26,-1,26,33,9,-1,16,35,34,-1,34,15,16,-1,34,36,15,-1,38,37,40,-1,40,39,38,-1,18,17,42,-1,42,41,18,-1,44,43,46,-1,46,45,44,-1,48,47,43,-1,43,44,48,-1,40,36,34,-1,34,39,40,-1,45,46,41,-1,41,42,45,-1,49,35,16,-1,35,39,34,-1,38,47,48,-1,48,37,38,-1,43,51,50,-1,50,46,43,-1,46,50,52,-1,52,41,46,-1,41,52,53,-1,53,18,41,-1,35,55,54,-1,54,39,35,-1,39,54,56,-1,56,38,39,-1,38,56,57,-1,57,47,38,-1,47,57,51,-1,51,43,47,-1,37,59,58,-1,58,40,37,-1,40,58,60,-1,60,36,40,-1,36,60,29,-1,29,15,36,-1,17,62,61,-1,61,42,17,-1,42,61,63,-1,63,45,42,-1,45,63,64,-1,64,44,45,-1,44,64,65,-1,65,48,44,-1,48,65,59,-1,59,37,48,-1,27,28,29,-1,29,60,58,-1,58,59,65,-1,29,58,65,-1,65,64,63,-1,63,61,62,-1,65,63,62,-1,62,30,31,-1,31,32,33,-1,62,31,33,-1,65,62,33,-1,29,65,33,-1,27,29,33,-1,27,33,26,-1}, 448);
SoTextureCoordinate* SoTextureCoordinate320 = new SoTextureCoordinate();
SoTextureCoordinate320->setPoint(new float[]{0.0763,0.4945,0.0877,0.4617,0.0525,0.4715,0.0399,0.5407,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0639,0.4488,0.0777,0.4495,0.1846,0.4438,0.1504,0.4433,0.1107,0.4532,0.3222,0.4193,0.2633,0.457,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.2035,0.4795,0.2169,0.492,0.2635,0.4569,0.3214,0.4203,0.0763,0.4945,0.1178,0.4708,0.1491,0.4682,0.1915,0.4696,0.1504,0.4433,0.1107,0.4532,0.0777,0.4495,0.0639,0.4488,0.3214,0.4203,0.3222,0.4193,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438,0.0639,0.4488,0.0877,0.4617,0.0763,0.4945,0.0525,0.4715,0.0777,0.4495,0.1504,0.4433,0.1491,0.4682,0.1178,0.4708,0.1107,0.4532,0.3214,0.4203,0.3214,0.4203,0.3223,0.4193,0.3222,0.4193,0.2035,0.4795,0.2144,0.4674,0.2198,0.4731,0.2169,0.492,0.1915,0.4696,0.1846,0.4438,0.2633,0.457,0.2635,0.4569,0.0399,0.5407,0.2169,0.492,0.2035,0.4795,0.2635,0.4569,0.3214,0.4203,0.1178,0.4708,0.0763,0.4945,0.1491,0.4682,0.1915,0.4696,0.1107,0.4532,0.1504,0.4433,0.0777,0.4495,0.0639,0.4488,0.3222,0.4193,0.3214,0.4203,0.2198,0.4731,0.2144,0.4674,0.1846,0.4438}, 156);
SoIndexedFaceSet319->setTexCoord(*SoTextureCoordinate320);

SoCoordinate* SoCoordinate321 = new SoCoordinate();
SoCoordinate321->setPoint(new float[]{1.713,0.7435,3.428,5.378,1.242,1.672,4.324,1.242,-1.927,5.141,1.242,-1.839,5.589,1.242,-1.387,3.32,1.242,2.736,1.811,1.242,-2.266,1.593,1.064,4.098,1.681,0.002,3.528,5.775,0.029,-0.9043,5.825,-0.0306,1.521,3.585,0.0822,3.073,1.811,0.029,-2.505,4.284,0.029,-2.108,4.617,0.029,-2.072,0.0,0.002,3.616,0.0,0.3874,4.121,0.0,0.029,-2.639,0.0,1.242,-2.4,5.018,1.668,-1.583,4.292,1.668,-1.661,1.783,1.668,-2.0,1.521,1.668,3.814,3.175,1.668,2.51,5.121,1.668,1.504,5.314,1.668,-1.285,5.669,-0.44,1.408,3.545,-0.44,2.879,1.676,-0.44,3.326,0.0,-0.44,3.413,1.817,-0.44,-2.289,4.335,-0.44,-1.884,4.586,-0.44,-1.857,5.623,-0.44,-0.8114,-1.713,0.7435,3.428,-1.593,1.064,4.098,-1.681,0.002,3.528,-5.825,-0.0306,1.521,-5.378,1.242,1.672,-3.32,1.242,2.736,-3.585,0.0822,3.073,-1.811,1.242,-2.266,-1.811,0.029,-2.505,-5.141,1.242,-1.839,-4.617,0.029,-2.072,-4.284,0.029,-2.108,-4.324,1.242,-1.927,-5.589,1.242,-1.387,-5.775,0.029,-0.9043,0.0,1.15,3.82,-4.292,1.668,-1.661,-5.018,1.668,-1.583,-1.783,1.668,-2.0,0.0,1.668,-2.132,-3.175,1.668,2.51,-1.521,1.668,3.814,-5.121,1.668,1.504,-5.314,1.668,-1.285,-3.545,-0.44,2.879,-5.669,-0.44,1.408,-1.676,-0.44,3.326,-1.817,-0.44,-2.289,0.0,-0.44,-2.423,-4.335,-0.44,-1.884,-4.586,-0.44,-1.857,-5.623,-0.44,-0.8114}, 198);
SoIndexedFaceSet319->setCoord(*SoCoordinate321);

SoShape315->setGeometry(*SoIndexedFaceSet319);

SoTransform314->addChild(*SoShape315);

SoHAnimSegment313->addChild(*SoTransform314);

SoHAnimJoint312->addChildren(*SoHAnimSegment313);

SoHAnimJoint* SoHAnimJoint322 = new SoHAnimJoint();
SoHAnimJoint322->setDEF(QString("hanim_vt2"));
SoHAnimJoint322->X3DNode::setName(QString("vt2"));
SoHAnimJoint322->setCenter(new float[]{0.0,52.23,-0.6127});
SoHAnimSegment* SoHAnimSegment323 = new SoHAnimSegment();
SoHAnimSegment323->setDEF(QString("hanim_t2"));
SoHAnimSegment323->X3DNode::setName(QString("t2"));
SoTransform* SoTransform324 = new SoTransform();
SoTransform324->setTranslation(new float[]{0.0,52.23,-0.6127});
SoShape* SoShape325 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance326 = new SoVRMLAppearance();
SoMaterial* SoMaterial327 = new SoMaterial();
SoMaterial327->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance326->addChild(*SoMaterial327);

SoImageTexture* SoImageTexture328 = new SoImageTexture();
SoImageTexture328->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance326->addChild(*SoImageTexture328);

SoShape325->addChild(*SoVRMLAppearance326);

SoIndexedFaceSet* SoIndexedFaceSet329 = new SoIndexedFaceSet();
SoIndexedFaceSet329->setCreaseAngle(3.14159);
SoIndexedFaceSet329->setTexCoordIndex(new int32_t[]{0,1,16,-1,4,5,26,-1,26,3,4,-1,3,15,4,-1,5,4,6,-1,6,7,5,-1,22,3,26,-1,3,22,8,-1,8,15,3,-1,27,5,7,-1,7,10,27,-1,5,27,26,-1,14,9,20,-1,20,19,14,-1,9,21,20,-1,13,14,19,-1,19,23,13,-1,18,8,22,-1,11,12,24,-1,24,25,11,-1,17,2,0,-1,0,16,17,-1,8,18,21,-1,21,9,8,-1,8,9,29,-1,29,28,8,-1,9,14,30,-1,30,29,9,-1,14,13,31,-1,31,30,14,-1,12,11,32,-1,32,31,12,-1,19,20,34,-1,34,33,19,-1,20,21,35,-1,35,34,20,-1,21,18,36,-1,36,35,21,-1,18,22,37,-1,37,36,18,-1,22,26,38,-1,38,37,22,-1,26,27,39,-1,39,38,26,-1,25,24,41,-1,41,40,25,-1,23,19,33,-1,33,41,23,-1,42,44,43,-1,47,46,45,-1,45,48,47,-1,46,47,49,-1,48,51,50,-1,50,47,48,-1,52,45,46,-1,46,49,53,-1,53,52,46,-1,55,54,51,-1,51,48,55,-1,48,45,55,-1,56,59,58,-1,58,57,56,-1,57,58,60,-1,62,61,59,-1,59,56,62,-1,63,52,53,-1,65,64,67,-1,67,66,65,-1,68,44,42,-1,42,69,68,-1,53,57,60,-1,60,63,53,-1,53,71,70,-1,70,57,53,-1,57,70,72,-1,72,56,57,-1,56,72,73,-1,73,62,56,-1,66,73,74,-1,74,65,66,-1,59,76,75,-1,75,58,59,-1,58,75,77,-1,77,60,58,-1,60,77,78,-1,78,63,60,-1,63,78,79,-1,79,52,63,-1,52,79,80,-1,80,45,52,-1,45,80,81,-1,81,55,45,-1,64,83,82,-1,82,67,64,-1,61,82,76,-1,76,59,61,-1,35,36,37,-1,38,39,80,-1,37,38,80,-1,80,79,78,-1,78,77,75,-1,80,78,75,-1,80,75,76,-1,76,82,83,-1,83,41,33,-1,76,83,33,-1,80,76,33,-1,37,80,33,-1,35,37,33,-1,34,35,33,-1}, 440);
SoIndexedFaceSet329->setCoordIndex(new int32_t[]{1,5,12,-1,7,2,19,-1,19,0,7,-1,0,11,7,-1,2,7,5,-1,5,1,2,-1,17,0,19,-1,0,17,6,-1,6,11,0,-1,20,2,1,-1,1,4,20,-1,2,20,19,-1,10,9,15,-1,15,14,10,-1,9,16,15,-1,8,10,14,-1,14,18,8,-1,13,6,17,-1,3,8,18,-1,18,21,3,-1,51,4,1,-1,1,12,51,-1,6,13,16,-1,16,9,6,-1,6,9,23,-1,23,22,6,-1,9,10,24,-1,24,23,9,-1,10,8,25,-1,25,24,10,-1,8,3,56,-1,56,25,8,-1,14,15,27,-1,27,26,14,-1,15,16,28,-1,28,27,15,-1,16,13,29,-1,29,28,16,-1,13,17,30,-1,30,29,13,-1,17,19,31,-1,31,30,17,-1,19,20,63,-1,63,31,19,-1,21,18,32,-1,32,65,21,-1,18,14,26,-1,26,32,18,-1,33,35,34,-1,38,37,36,-1,36,39,38,-1,37,38,40,-1,39,33,34,-1,34,38,39,-1,41,36,37,-1,37,40,42,-1,42,41,37,-1,20,4,33,-1,33,39,20,-1,39,36,20,-1,43,46,45,-1,45,44,43,-1,44,45,47,-1,49,48,46,-1,46,43,49,-1,50,41,42,-1,3,21,48,-1,48,49,3,-1,51,35,33,-1,33,4,51,-1,42,44,47,-1,47,50,42,-1,42,53,52,-1,52,44,42,-1,44,52,54,-1,54,43,44,-1,43,54,55,-1,55,49,43,-1,49,55,56,-1,56,3,49,-1,46,58,57,-1,57,45,46,-1,45,57,59,-1,59,47,45,-1,47,59,60,-1,60,50,47,-1,50,60,61,-1,61,41,50,-1,41,61,62,-1,62,36,41,-1,36,62,63,-1,63,20,36,-1,21,65,64,-1,64,48,21,-1,48,64,58,-1,58,46,48,-1,28,29,30,-1,31,63,62,-1,30,31,62,-1,62,61,60,-1,60,59,57,-1,62,60,57,-1,62,57,58,-1,58,64,65,-1,65,32,26,-1,58,65,26,-1,62,58,26,-1,30,62,26,-1,28,30,26,-1,27,28,26,-1}, 440);
SoTextureCoordinate* SoTextureCoordinate330 = new SoTextureCoordinate();
SoTextureCoordinate330->setPoint(new float[]{0.4473,0.6921,0.4449,0.6914,0.4513,0.6918,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.0786,0.5849,0.0516,0.5759,0.1474,0.4856,0.1963,0.4863,0.0346,0.5664,0.3214,0.4203,0.3223,0.4192,0.2638,0.4568,0.2146,0.5039,0.1227,0.5144,0.4468,0.6898,0.4495,0.6881,0.1491,0.4682,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1178,0.4708,0.2635,0.4569,0.3223,0.4193,0.3214,0.4203,0.0763,0.4945,0.0399,0.5407,0.1474,0.4856,0.1963,0.4863,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2169,0.492,0.2035,0.4795,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3214,0.4203,0.3223,0.4193,0.4473,0.6921,0.4449,0.6914,0.4468,0.6898,0.0763,0.4945,0.1025,0.5076,0.0865,0.5614,0.0652,0.5465,0.1227,0.5144,0.0786,0.5849,0.0516,0.5759,0.1178,0.4708,0.1474,0.4856,0.0346,0.5664,0.0399,0.5407,0.2146,0.5039,0.1963,0.4863,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.2635,0.4569,0.2638,0.4568,0.1491,0.4682,0.3214,0.4203,0.3214,0.4203,0.3223,0.4192,0.3223,0.4193,0.4495,0.6881,0.4513,0.6918,0.1963,0.4863,0.1474,0.4856,0.2146,0.5039,0.2638,0.4568,0.3214,0.4203,0.2035,0.4795,0.2169,0.492,0.1915,0.4696,0.1491,0.4682,0.1178,0.4708,0.0763,0.4945,0.0399,0.5407,0.3223,0.4193,0.3214,0.4203}, 168);
SoIndexedFaceSet329->setTexCoord(*SoTextureCoordinate330);

SoCoordinate* SoCoordinate331 = new SoCoordinate();
SoCoordinate331->setPoint(new float[]{3.131,0.4823,3.66,1.373,0.5334,3.428,1.38,0.5334,3.897,0.0,0.9032,-2.25,0.0,-0.0071,3.661,2.043,1.067,3.089,5.086,0.9718,1.771,2.245,1.223,3.581,1.811,0.9032,-2.116,5.472,0.9071,-1.692,4.349,0.906,-1.813,3.805,1.161,2.723,1.182,1.067,2.765,5.378,0.1425,1.672,4.324,0.1425,-1.927,5.141,0.1425,-1.839,5.589,0.1425,-1.387,3.32,0.1425,2.736,1.811,0.1425,-2.266,1.593,-0.036,4.098,0.0,0.0508,3.82,0.0,0.1425,-2.4,4.884,1.323,1.266,4.971,1.271,-1.4,4.325,1.271,-1.641,1.791,1.268,-1.912,4.298,-0.4521,-1.715,5.043,-0.4521,-1.635,5.369,-0.4521,-1.306,5.173,-0.4521,1.538,3.204,-0.4521,2.555,1.535,-0.4521,2.956,1.789,-0.4521,-2.054,-1.373,0.5334,3.428,-2.043,1.067,3.089,-1.182,1.067,2.765,-1.593,-0.036,4.098,-3.131,0.4823,3.66,-2.245,1.223,3.581,-1.38,0.5334,3.897,-3.805,1.161,2.723,-3.32,0.1425,2.736,-5.086,0.9718,1.771,-4.349,0.906,-1.813,-5.472,0.9071,-1.692,-5.141,0.1425,-1.839,-4.324,0.1425,-1.927,-5.589,0.1425,-1.387,-1.811,0.1425,-2.266,-1.811,0.9032,-2.116,-5.378,0.1425,1.672,0.0,1.067,2.596,-4.971,1.271,-1.4,-4.884,1.323,1.266,-4.325,1.271,-1.641,-1.791,1.268,-1.912,0.0,1.268,-2.03,-5.043,-0.4521,-1.635,-4.298,-0.4521,-1.715,-5.369,-0.4521,-1.306,-5.173,-0.4521,1.538,-3.204,-0.4521,2.555,-1.535,-0.4521,2.956,0.0,-0.4521,3.603,-1.789,-0.4521,-2.054,0.0,-0.4521,-2.186}, 198);
SoIndexedFaceSet329->setCoord(*SoCoordinate331);

SoShape325->setGeometry(*SoIndexedFaceSet329);

SoTransform324->addChild(*SoShape325);

SoHAnimSegment323->addChild(*SoTransform324);

SoHAnimJoint322->addChildren(*SoHAnimSegment323);

SoHAnimJoint* SoHAnimJoint332 = new SoHAnimJoint();
SoHAnimJoint332->setDEF(QString("hanim_vt1"));
SoHAnimJoint332->X3DNode::setName(QString("vt1"));
SoHAnimJoint332->setCenter(new float[]{0.0,53.29,-0.6117});
SoHAnimSegment* SoHAnimSegment333 = new SoHAnimSegment();
SoHAnimSegment333->setDEF(QString("hanim_t1"));
SoHAnimSegment333->X3DNode::setName(QString("t1"));
SoTransform* SoTransform334 = new SoTransform();
SoTransform334->setTranslation(new float[]{0.0,53.29,-0.6117});
SoShape* SoShape335 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance336 = new SoVRMLAppearance();
SoMaterial* SoMaterial337 = new SoMaterial();
SoMaterial337->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance336->addChild(*SoMaterial337);

SoImageTexture* SoImageTexture338 = new SoImageTexture();
SoImageTexture338->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance336->addChild(*SoImageTexture338);

SoShape335->addChild(*SoVRMLAppearance336);

SoIndexedFaceSet* SoIndexedFaceSet339 = new SoIndexedFaceSet();
SoIndexedFaceSet339->setCreaseAngle(3.14159);
SoIndexedFaceSet339->setTexCoordIndex(new int32_t[]{14,15,0,-1,0,16,14,-1,15,19,0,-1,21,10,11,-1,11,18,21,-1,5,2,1,-1,6,25,24,-1,24,4,6,-1,3,2,13,-1,2,5,13,-1,66,7,13,-1,6,4,17,-1,4,15,17,-1,20,9,23,-1,23,9,10,-1,10,21,23,-1,15,4,24,-1,24,19,15,-1,12,20,22,-1,48,47,26,-1,26,27,48,-1,47,49,28,-1,28,26,47,-1,31,32,29,-1,29,30,31,-1,32,53,54,-1,54,29,32,-1,33,50,32,-1,53,32,50,-1,50,51,53,-1,30,29,55,-1,55,56,30,-1,29,54,52,-1,52,55,29,-1,49,33,28,-1,36,41,40,-1,40,35,36,-1,37,39,38,-1,38,34,37,-1,39,31,30,-1,30,38,39,-1,42,36,43,-1,43,45,42,-1,39,37,26,-1,26,28,39,-1,28,31,39,-1,35,44,57,-1,57,46,35,-1,34,38,65,-1,65,58,34,-1,38,30,56,-1,56,65,38,-1,49,50,33,-1,28,33,31,-1,32,31,33,-1,62,63,64,-1,64,61,62,-1,57,65,64,-1,65,56,60,-1,65,60,61,-1,61,64,65,-1,64,63,59,-1,59,57,64,-1,13,8,66,-1,69,68,67,-1,67,70,69,-1,70,67,71,-1,74,73,72,-1,72,75,74,-1,76,78,77,-1,80,79,82,-1,82,81,80,-1,83,84,77,-1,77,84,76,-1,85,84,86,-1,80,87,79,-1,79,87,70,-1,132,90,89,-1,90,74,75,-1,75,89,90,-1,70,71,82,-1,82,79,70,-1,88,91,132,-1,94,93,92,-1,92,95,94,-1,95,92,96,-1,96,97,95,-1,100,99,98,-1,98,101,100,-1,101,98,102,-1,102,103,101,-1,104,101,105,-1,103,106,105,-1,105,101,103,-1,99,108,107,-1,107,98,99,-1,98,107,109,-1,109,102,98,-1,97,96,104,-1,112,111,110,-1,110,113,112,-1,116,115,114,-1,114,117,116,-1,117,114,99,-1,99,100,117,-1,120,119,118,-1,118,112,120,-1,117,96,92,-1,92,116,117,-1,96,117,100,-1,111,122,121,-1,121,123,111,-1,115,125,124,-1,124,114,115,-1,114,124,108,-1,108,99,114,-1,97,104,105,-1,96,100,104,-1,101,104,100,-1,127,126,129,-1,129,128,127,-1,121,129,124,-1,124,130,108,-1,124,129,126,-1,126,130,124,-1,129,121,131,-1,131,128,129,-1,84,85,133,-1,141,142,143,-1,141,143,144,-1,141,144,145,-1,145,146,147,-1,141,145,147,-1,148,149,150,-1,148,150,151,-1,147,148,151,-1,151,134,135,-1,151,135,136,-1,147,151,136,-1,147,136,137,-1,141,147,137,-1,141,137,138,-1,141,138,139,-1,141,139,140,-1,21,18,135,-1,135,134,21,-1,19,24,136,-1,136,135,19,-1,24,25,137,-1,137,136,24,-1,81,82,138,-1,138,137,81,-1,82,71,139,-1,139,138,82,-1,73,74,140,-1,140,139,73,-1,74,90,141,-1,141,140,74,-1,90,132,142,-1,142,141,90,-1,132,91,143,-1,143,142,132,-1,108,130,144,-1,144,143,108,-1,130,126,145,-1,145,144,130,-1,126,127,146,-1,146,145,126,-1,62,61,147,-1,147,146,62,-1,61,60,148,-1,148,147,61,-1,60,56,149,-1,149,148,60,-1,22,20,150,-1,150,149,22,-1,20,23,151,-1,151,150,20,-1,23,21,134,-1,134,151,23,-1}, 720);
SoIndexedFaceSet339->setCoordIndex(new int32_t[]{1,5,3,-1,3,2,1,-1,5,6,3,-1,7,27,3,-1,3,6,7,-1,0,1,2,-1,43,11,10,-1,10,4,43,-1,5,1,12,-1,1,0,12,-1,35,26,12,-1,43,4,12,-1,4,5,12,-1,72,28,9,-1,9,28,27,-1,27,7,9,-1,5,4,10,-1,10,6,5,-1,29,72,8,-1,26,35,14,-1,14,49,26,-1,35,0,15,-1,15,14,35,-1,17,16,18,-1,18,19,17,-1,16,27,28,-1,28,18,16,-1,13,2,16,-1,27,16,2,-1,2,3,27,-1,19,18,29,-1,29,8,19,-1,18,28,72,-1,72,29,18,-1,0,13,15,-1,21,20,23,-1,23,61,21,-1,20,22,24,-1,24,23,20,-1,22,17,19,-1,19,24,22,-1,20,21,49,-1,49,14,20,-1,22,20,14,-1,14,15,22,-1,15,17,22,-1,61,23,30,-1,30,25,61,-1,23,24,33,-1,33,30,23,-1,24,19,8,-1,8,33,24,-1,0,2,13,-1,15,13,17,-1,16,17,13,-1,68,69,32,-1,32,31,68,-1,30,33,32,-1,33,8,34,-1,33,34,31,-1,31,32,33,-1,32,69,25,-1,25,30,32,-1,12,0,35,-1,37,36,58,-1,58,38,37,-1,38,58,39,-1,40,39,58,-1,58,41,40,-1,51,36,37,-1,43,42,44,-1,44,11,43,-1,38,12,37,-1,37,12,51,-1,45,12,26,-1,43,12,42,-1,42,12,38,-1,73,47,56,-1,47,40,41,-1,41,56,47,-1,38,39,44,-1,44,42,38,-1,46,59,73,-1,26,49,48,-1,48,45,26,-1,45,48,50,-1,50,51,45,-1,54,53,52,-1,52,55,54,-1,55,52,56,-1,56,41,55,-1,57,55,36,-1,41,58,36,-1,36,55,41,-1,53,59,46,-1,46,52,53,-1,52,46,73,-1,73,56,52,-1,51,50,57,-1,21,61,60,-1,60,62,21,-1,62,60,63,-1,63,64,62,-1,64,63,53,-1,53,54,64,-1,62,48,49,-1,49,21,62,-1,64,50,48,-1,48,62,64,-1,50,64,54,-1,61,25,65,-1,65,60,61,-1,60,65,66,-1,66,63,60,-1,63,66,59,-1,59,53,63,-1,51,57,36,-1,50,54,57,-1,55,57,54,-1,68,67,70,-1,70,69,68,-1,65,70,66,-1,66,71,59,-1,66,70,67,-1,67,71,66,-1,70,65,25,-1,25,69,70,-1,12,45,51,-1,81,82,83,-1,81,83,84,-1,81,84,85,-1,85,86,87,-1,81,85,87,-1,88,89,90,-1,88,90,91,-1,87,88,91,-1,91,74,75,-1,91,75,76,-1,87,91,76,-1,87,76,77,-1,81,87,77,-1,81,77,78,-1,81,78,79,-1,81,79,80,-1,7,6,75,-1,75,74,7,-1,6,10,76,-1,76,75,6,-1,10,11,77,-1,77,76,10,-1,11,44,78,-1,78,77,11,-1,44,39,79,-1,79,78,44,-1,39,40,80,-1,80,79,39,-1,40,47,81,-1,81,80,40,-1,47,73,82,-1,82,81,47,-1,73,59,83,-1,83,82,73,-1,59,71,84,-1,84,83,59,-1,71,67,85,-1,85,84,71,-1,67,68,86,-1,86,85,67,-1,68,31,87,-1,87,86,68,-1,31,34,88,-1,88,87,31,-1,34,8,89,-1,89,88,34,-1,8,72,90,-1,90,89,8,-1,72,9,91,-1,91,90,72,-1,9,7,74,-1,74,91,9,-1}, 720);
SoTextureCoordinate* SoTextureCoordinate340 = new SoTextureCoordinate();
SoTextureCoordinate340->setPoint(new float[]{0.4416,0.6747,0.4535,0.6485,0.4483,0.6438,0.4499,0.6371,0.4594,0.6763,0.4399,0.6472,0.4645,0.6783,0.4385,0.6236,0.4279,0.6258,0.1412,0.5207,0.1108,0.5655,0.1073,0.5839,0.1708,0.4854,0.4376,0.6345,0.4528,0.6648,0.4548,0.6714,0.4459,0.6652,0.4669,0.6678,0.0786,0.5849,0.4476,0.6884,0.1474,0.4856,0.0865,0.5614,0.1963,0.4863,0.1227,0.5144,0.4539,0.6879,0.4621,0.6889,0.2661,0.5914,0.3505,0.5919,0.241,0.592,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.2067,0.5908,0.2708,0.4736,0.347,0.4317,0.3616,0.5328,0.2733,0.5359,0.238,0.493,0.249,0.5451,0.3477,0.431,0.3623,0.5333,0.3623,0.5333,0.3505,0.5919,0.3477,0.431,0.3511,0.5932,0.3206,0.4193,0.2505,0.5754,0.3554,0.5911,0.2112,0.5805,0.1632,0.5887,0.1073,0.5839,0.1474,0.4856,0.1108,0.5655,0.1412,0.5207,0.1708,0.4854,0.1963,0.4863,0.3223,0.4192,0.2638,0.4568,0.3206,0.4193,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.2252,0.4828,0.4337,0.6239,0.4689,0.6806,0.4689,0.6702,0.4627,0.667,0.4583,0.6722,0.4578,0.6906,0.1073,0.5839,0.0786,0.5849,0.0865,0.5614,0.1108,0.5655,0.4514,0.6379,0.4463,0.6454,0.4498,0.6514,0.4521,0.6748,0.4466,0.6744,0.4444,0.685,0.4523,0.6875,0.4395,0.6457,0.4393,0.633,0.4295,0.6275,0.4284,0.6322,0.4488,0.6639,0.1708,0.4854,0.1412,0.5207,0.1227,0.5144,0.1963,0.4863,0.2661,0.5914,0.3505,0.5919,0.3554,0.5911,0.2505,0.5754,0.241,0.592,0.2112,0.5805,0.1724,0.5255,0.2089,0.5196,0.2133,0.556,0.1645,0.5709,0.1412,0.5207,0.1108,0.5655,0.2067,0.5908,0.1632,0.5887,0.1073,0.5839,0.1708,0.4854,0.1963,0.4863,0.1474,0.4856,0.3477,0.431,0.347,0.4317,0.3616,0.5328,0.3623,0.5333,0.238,0.493,0.2708,0.4736,0.2733,0.5359,0.249,0.5451,0.3505,0.5919,0.3511,0.5932,0.3623,0.5333,0.3223,0.4192,0.3206,0.4193,0.3477,0.431,0.2252,0.4828,0.2638,0.4568,0.1963,0.4863,0.1963,0.4863,0.2252,0.4828,0.2252,0.4828,0.1963,0.4863,0.3206,0.4193,0.1474,0.4856,0.4323,0.622,0.0865,0.5614,0.0786,0.5849,0.4539,0.6879,0.4621,0.6889,0.4523,0.6875,0.4578,0.6906,0.0865,0.5614,0.1227,0.5144,0.1474,0.4856,0.1474,0.4856,0.1227,0.5144,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1963,0.4863,0.1999,0.4849,0.1421,0.507,0.1227,0.5144}, 304);
SoIndexedFaceSet339->setTexCoord(*SoTextureCoordinate340);

SoCoordinate* SoCoordinate341 = new SoCoordinate();
SoCoordinate341->setPoint(new float[]{1.47,1.71,-1.15,2.016,1.688,0.0414,2.914,1.242,0.0931,3.187,0.3754,1.303,0.7806,1.128,1.368,1.573,1.389,0.8702,2.043,0.0045,3.089,2.245,0.1604,3.581,5.472,-0.1553,-1.692,3.805,0.0984,2.723,1.182,0.0045,2.765,0.0,0.0045,2.596,0.0,1.333,-0.0527,2.599,2.142,-1.646,0.9629,2.166,-3.392,2.035,2.193,-3.055,3.439,2.077,0.1272,3.953,1.215,-2.467,5.073,1.55,0.1272,4.655,0.2739,-2.02,1.032,-0.6843,-4.667,0.0,-0.6754,-4.802,2.39,-0.2981,-4.154,1.677,-4.028,-3.387,4.12,-2.512,-3.272,0.0,-3.532,-2.804,0.0,1.519,-1.61,2.982,1.02,1.941,4.42,0.7184,1.865,5.602,0.5099,-0.0537,1.811,-3.383,-2.67,1.811,-0.1592,-2.116,1.833,-2.424,-2.283,4.241,-2.424,-2.283,4.225,-0.1553,-1.692,0.6928,1.497,-1.503,-2.914,1.242,0.0931,-2.016,1.688,0.0414,-1.573,1.389,0.8702,-2.043,0.0045,3.089,-2.245,0.1604,3.581,-2.982,1.02,1.941,-0.7806,1.128,1.368,0.0,1.119,1.49,-1.182,0.0045,2.765,-0.6928,1.497,-1.503,-5.602,0.5099,-0.0537,-3.805,0.0984,2.723,-0.9629,2.166,-3.392,0.0,2.143,-3.557,-2.035,2.193,-3.055,-1.47,1.71,-1.15,-5.073,1.55,0.1272,-4.655,0.2739,-2.02,-3.953,1.215,-2.467,-3.439,2.077,0.1272,-4.42,0.7184,1.865,-2.599,2.142,-1.646,-3.187,0.3754,1.303,-5.472,-0.1553,-1.692,-1.677,-4.028,-3.387,0.0,-4.35,-3.506,-1.032,-0.6843,-4.667,-4.12,-2.512,-3.272,-2.39,-0.2981,-4.154,-1.811,-3.383,-2.67,-4.241,-2.424,-2.283,-1.811,-0.1592,-2.116,0.0,-0.1592,-2.25,0.0,-2.424,-2.283,-1.833,-2.424,-2.283,-4.225,-0.1553,-1.692,5.086,-0.0906,1.771,-5.086,-0.0906,1.771,2.337,-0.4422,3.448,2.182,-0.4422,3.182,1.228,-0.4422,2.736,0.0,-0.4422,2.56,-1.228,-0.4422,2.736,-2.182,-0.4422,3.182,-2.337,-0.4422,3.448,-3.706,-0.4422,2.653,-4.913,-0.4422,1.734,-5.268,-0.4422,-1.51,-4.209,-0.4422,-1.51,-1.789,-0.4422,-1.935,0.0,-0.4422,-2.068,1.789,-0.4422,-1.935,4.209,-0.4422,-1.51,5.268,-0.4422,-1.51,4.913,-0.4422,1.734,3.706,-0.4422,2.653}, 276);
SoIndexedFaceSet339->setCoord(*SoCoordinate341);

SoShape335->setGeometry(*SoIndexedFaceSet339);

SoTransform334->addChild(*SoShape335);

SoHAnimSegment333->addChild(*SoTransform334);

SoHAnimJoint332->addChildren(*SoHAnimSegment333);

SoHAnimJoint* SoHAnimJoint342 = new SoHAnimJoint();
SoHAnimJoint342->setDEF(QString("hanim_vc7"));
SoHAnimJoint342->X3DNode::setName(QString("vc7"));
SoHAnimJoint342->setCenter(new float[]{0.0,54.45,-0.6695});
SoHAnimSegment* SoHAnimSegment343 = new SoHAnimSegment();
SoHAnimSegment343->setDEF(QString("hanim_c7"));
SoHAnimSegment343->X3DNode::setName(QString("c7"));
SoTransform* SoTransform344 = new SoTransform();
SoTransform344->setTranslation(new float[]{0.0,54.45,-0.6695});
SoShape* SoShape345 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance346 = new SoVRMLAppearance();
SoMaterial* SoMaterial347 = new SoMaterial();
SoMaterial347->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance346->addChild(*SoMaterial347);

SoImageTexture* SoImageTexture348 = new SoImageTexture();
SoImageTexture348->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance346->addChild(*SoImageTexture348);

SoShape345->addChild(*SoVRMLAppearance346);

SoIndexedFaceSet* SoIndexedFaceSet349 = new SoIndexedFaceSet();
SoIndexedFaceSet349->setCreaseAngle(3.14159);
SoIndexedFaceSet349->setTexCoordIndex(new int32_t[]{5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1}, 368);
SoIndexedFaceSet349->setCoordIndex(new int32_t[]{5,6,33,-1,33,28,5,-1,34,32,1,-1,1,7,34,-1,30,34,7,-1,7,8,30,-1,28,29,11,-1,11,5,28,-1,29,35,10,-1,10,11,29,-1,14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,1,0,13,-1,13,12,1,-1,0,2,14,-1,14,13,0,-1,2,3,15,-1,15,14,2,-1,3,4,16,-1,16,15,3,-1,4,6,17,-1,17,16,4,-1,6,5,18,-1,18,17,6,-1,5,11,19,-1,19,18,5,-1,11,10,20,-1,20,19,11,-1,10,9,21,-1,21,20,10,-1,9,8,22,-1,22,21,9,-1,8,7,23,-1,23,22,8,-1,7,1,12,-1,12,23,7,-1,0,1,32,-1,32,24,0,-1,2,0,24,-1,24,25,2,-1,3,2,25,-1,25,26,3,-1,4,3,26,-1,26,27,4,-1,6,4,27,-1,27,33,6,-1,8,9,31,-1,31,30,8,-1,9,10,35,-1,35,31,9,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,24,32,37,-1,37,36,24,-1,32,34,38,-1,38,37,32,-1,34,30,39,-1,39,38,34,-1,30,31,40,-1,40,39,30,-1,31,35,41,-1,41,40,31,-1,35,29,42,-1,42,41,35,-1,29,28,43,-1,43,42,29,-1,28,33,44,-1,44,43,28,-1,33,27,45,-1,45,44,33,-1,27,26,46,-1,46,45,27,-1,26,25,47,-1,47,46,26,-1,25,24,36,-1,36,47,25,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate350 = new SoTextureCoordinate();
SoTextureCoordinate350->setPoint(new float[]{0.3995,0.6285,0.3906,0.6293,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.3906,0.6224,0.4006,0.6225,0.3818,0.6285,0.3719,0.632,0.3649,0.6316,0.3706,0.6267,0.3807,0.6225,0.3906,0.6293,0.3995,0.6285,0.4094,0.632,0.4164,0.6316,0.4107,0.6267,0.4006,0.6225,0.3906,0.6224,0.3807,0.6225,0.3706,0.6267,0.3649,0.6316,0.3719,0.632,0.3818,0.6285,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6534,0.3906,0.6538,0.3818,0.6534,0.3719,0.6549,0.3649,0.6547,0.3706,0.6527,0.3807,0.6518,0.3906,0.6475,0.4006,0.6518,0.4107,0.6527,0.4164,0.6547,0.4094,0.6549}, 96);
SoIndexedFaceSet349->setTexCoord(*SoTextureCoordinate350);

SoCoordinate* SoCoordinate351 = new SoCoordinate();
SoCoordinate351->setPoint(new float[]{0.5369,0.1071,-1.124,0.0,0.1694,-1.195,1.139,0.1756,-0.8504,1.562,0.1474,0.0729,1.219,-0.0249,0.7152,0.0,-0.3558,1.195,0.605,-0.345,1.101,-0.5369,0.1071,-1.124,-1.139,0.1755,-0.8504,-1.562,0.1474,0.0729,-1.219,-0.0249,0.7153,-0.605,-0.345,1.101,0.0,-0.711,-1.028,0.4943,-0.7203,-0.9649,0.999,-0.7546,-0.733,1.342,-0.8648,0.0135,1.076,-0.9372,0.5038,0.5328,-0.9856,0.832,0.0,-0.9977,0.9139,-0.5328,-0.9856,0.832,-1.076,-0.9372,0.5038,-1.342,-0.8648,0.0136,-0.999,-0.7546,-0.733,-0.4943,-0.7203,-0.9649,0.5369,0.5357,-1.124,1.139,0.5357,-0.8504,1.562,0.5357,0.0729,1.219,0.5357,0.7153,0.0,0.5357,1.195,-0.605,0.5357,1.101,-1.139,0.5357,-0.8504,-1.562,0.5357,0.0729,0.0,0.5357,-1.195,0.605,0.5357,1.101,-0.5369,0.5357,-1.124,-1.219,0.5357,0.7153,0.4947,0.7335,-0.9348,0.0,0.7335,-1.0,-0.4947,0.7335,-0.9348,-1.008,0.7335,-0.7016,-1.361,0.7335,0.069,-1.091,0.7335,0.5735,-0.5462,0.7335,0.9162,0.0,0.7335,1.001,0.5462,0.7335,0.9162,1.091,0.7335,0.5735,1.361,0.7335,0.0689,1.008,0.7335,-0.7016}, 144);
SoIndexedFaceSet349->setCoord(*SoCoordinate351);

SoShape345->setGeometry(*SoIndexedFaceSet349);

SoTransform344->addChild(*SoShape345);

SoHAnimSegment343->addChild(*SoTransform344);

SoHAnimJoint342->addChildren(*SoHAnimSegment343);

SoHAnimJoint* SoHAnimJoint352 = new SoHAnimJoint();
SoHAnimJoint352->setDEF(QString("hanim_vc6"));
SoHAnimJoint352->X3DNode::setName(QString("vc6"));
SoHAnimJoint352->setCenter(new float[]{0.0,54.98,-0.6695});
SoHAnimSegment* SoHAnimSegment353 = new SoHAnimSegment();
SoHAnimSegment353->setDEF(QString("hanim_c6"));
SoHAnimSegment353->X3DNode::setName(QString("c6"));
SoTransform* SoTransform354 = new SoTransform();
SoTransform354->setTranslation(new float[]{0.0,54.98,-0.6695});
SoShape* SoShape355 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance356 = new SoVRMLAppearance();
SoMaterial* SoMaterial357 = new SoMaterial();
SoMaterial357->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance356->addChild(*SoMaterial357);

SoImageTexture* SoImageTexture358 = new SoImageTexture();
SoImageTexture358->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance356->addChild(*SoImageTexture358);

SoShape355->addChild(*SoVRMLAppearance356);

SoIndexedFaceSet* SoIndexedFaceSet359 = new SoIndexedFaceSet();
SoIndexedFaceSet359->setCreaseAngle(3.14159);
SoIndexedFaceSet359->setTexCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet359->setCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate360 = new SoTextureCoordinate();
SoTextureCoordinate360->setPoint(new float[]{0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.3906,0.6475,0.3807,0.6518,0.3719,0.6549,0.3649,0.6547,0.3906,0.6538,0.4006,0.6518,0.3818,0.6534,0.3706,0.6527,0.3995,0.6565,0.3906,0.6568,0.3818,0.6565,0.3719,0.6578,0.3649,0.6576,0.3706,0.6559,0.3807,0.6555,0.3906,0.6507,0.4006,0.6555,0.4107,0.6559,0.4164,0.6576,0.4094,0.6578,0.3906,0.6538,0.3995,0.6534,0.4094,0.6549,0.4164,0.6547,0.4107,0.6527,0.4006,0.6518,0.3906,0.6475,0.3807,0.6518,0.3706,0.6527,0.3649,0.6547,0.3719,0.6549,0.3818,0.6534}, 96);
SoIndexedFaceSet359->setTexCoord(*SoTextureCoordinate360);

SoCoordinate* SoCoordinate361 = new SoCoordinate();
SoCoordinate361->setPoint(new float[]{0.5369,0.5581,-1.124,1.139,0.5581,-0.8504,1.562,0.5581,0.0729,1.219,0.5581,0.7153,0.0,0.5581,1.195,-0.605,0.5581,1.101,-1.139,0.5581,-0.8504,-1.562,0.5581,0.0729,0.0,0.5581,-1.195,0.605,0.5581,1.101,-0.5369,0.5581,-1.124,-1.219,0.5581,0.7153,0.5369,0.0038,-1.124,1.139,0.0038,-0.8504,1.562,0.0038,0.0729,1.219,0.0038,0.7153,0.0,0.0038,1.195,-0.605,0.0038,1.101,-1.139,0.0038,-0.8504,-1.562,0.0038,0.0729,0.0,0.0038,-1.195,0.605,0.0038,1.101,-0.5369,0.0038,-1.124,-1.219,0.0038,0.7153,0.4947,0.756,-0.9348,0.0,0.756,-1.0,-0.4947,0.756,-0.9348,-1.008,0.756,-0.7016,-1.361,0.756,0.069,-1.091,0.756,0.5735,-0.5462,0.756,0.9162,0.0,0.756,1.001,0.5462,0.756,0.9162,1.091,0.756,0.5735,1.361,0.756,0.069,1.008,0.756,-0.7016,0.0,-0.2355,-1.0,0.4947,-0.2355,-0.9348,1.008,-0.2355,-0.7016,1.361,-0.2355,0.0689,1.091,-0.2355,0.5735,0.5462,-0.2355,0.9162,0.0,-0.2355,1.001,-0.5462,-0.2355,0.9162,-1.091,-0.2355,0.5735,-1.361,-0.2355,0.069,-1.008,-0.2355,-0.7016,-0.4947,-0.2355,-0.9348}, 144);
SoIndexedFaceSet359->setCoord(*SoCoordinate361);

SoShape355->setGeometry(*SoIndexedFaceSet359);

SoTransform354->addChild(*SoShape355);

SoHAnimSegment353->addChild(*SoTransform354);

SoHAnimJoint352->addChildren(*SoHAnimSegment353);

SoHAnimJoint* SoHAnimJoint362 = new SoHAnimJoint();
SoHAnimJoint362->setDEF(QString("hanim_vc5"));
SoHAnimJoint362->X3DNode::setName(QString("vc5"));
SoHAnimJoint362->setCenter(new float[]{0.0,55.54,-0.6695});
SoHAnimSegment* SoHAnimSegment363 = new SoHAnimSegment();
SoHAnimSegment363->setDEF(QString("hanim_c5"));
SoHAnimSegment363->X3DNode::setName(QString("c5"));
SoTransform* SoTransform364 = new SoTransform();
SoTransform364->setTranslation(new float[]{0.0,55.54,-0.6695});
SoShape* SoShape365 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance366 = new SoVRMLAppearance();
SoMaterial* SoMaterial367 = new SoMaterial();
SoMaterial367->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance366->addChild(*SoMaterial367);

SoImageTexture* SoImageTexture368 = new SoImageTexture();
SoImageTexture368->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance366->addChild(*SoImageTexture368);

SoShape365->addChild(*SoVRMLAppearance366);

SoIndexedFaceSet* SoIndexedFaceSet369 = new SoIndexedFaceSet();
SoIndexedFaceSet369->setCreaseAngle(3.14159);
SoIndexedFaceSet369->setTexCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet369->setCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,16,21,9,-1,9,4,16,-1,20,22,10,-1,10,8,20,-1,22,18,6,-1,6,10,22,-1,17,16,4,-1,4,5,17,-1,23,17,5,-1,5,11,23,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate370 = new SoTextureCoordinate();
SoTextureCoordinate370->setPoint(new float[]{0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.3906,0.6507,0.3807,0.6555,0.3719,0.6578,0.3649,0.6576,0.3906,0.6568,0.4006,0.6555,0.3818,0.6565,0.3706,0.6559,0.3995,0.6596,0.3906,0.6599,0.3818,0.6596,0.3719,0.6606,0.3649,0.6605,0.3706,0.6591,0.3807,0.6592,0.3906,0.6538,0.4006,0.6592,0.4107,0.6591,0.4164,0.6605,0.4094,0.6606,0.3906,0.6568,0.3995,0.6565,0.4094,0.6578,0.4164,0.6576,0.4107,0.6559,0.4006,0.6555,0.3906,0.6507,0.3807,0.6555,0.3706,0.6559,0.3649,0.6576,0.3719,0.6578,0.3818,0.6565}, 96);
SoIndexedFaceSet369->setTexCoord(*SoTextureCoordinate370);

SoCoordinate* SoCoordinate371 = new SoCoordinate();
SoCoordinate371->setPoint(new float[]{0.5369,0.5456,-1.124,1.139,0.5456,-0.8504,1.562,0.5456,0.0729,1.219,0.5456,0.7153,0.0,0.5456,1.195,-0.605,0.5456,1.101,-1.139,0.5456,-0.8504,-1.562,0.5456,0.0729,0.0,0.5456,-1.195,0.605,0.5456,1.101,-0.5369,0.5456,-1.124,-1.219,0.5456,0.7153,0.5369,0.0012,-1.124,1.139,0.0012,-0.8504,1.562,0.0012,0.0729,1.219,0.0012,0.7153,0.0,0.0012,1.195,-0.605,0.0012,1.101,-1.139,0.0012,-0.8504,-1.562,0.0012,0.0729,0.0,0.0012,-1.195,0.605,0.0012,1.101,-0.5369,0.0012,-1.124,-1.219,0.0012,0.7153,0.4947,0.7434,-0.9348,0.0,0.7434,-1.0,-0.4947,0.7434,-0.9348,-1.008,0.7434,-0.7016,-1.361,0.7434,0.069,-1.091,0.7434,0.5735,-0.5462,0.7434,0.9162,0.0,0.7434,1.001,0.5462,0.7434,0.9162,1.091,0.7434,0.5735,1.361,0.7434,0.069,1.008,0.7434,-0.7016,0.0,-0.2282,-1.0,0.4947,-0.2282,-0.9348,1.008,-0.2282,-0.7016,1.361,-0.2282,0.069,1.091,-0.2282,0.5735,0.5462,-0.2282,0.9162,0.0,-0.2282,1.001,-0.5462,-0.2282,0.9162,-1.091,-0.2282,0.5735,-1.361,-0.2282,0.069,-1.008,-0.2282,-0.7016,-0.4947,-0.2282,-0.9348}, 144);
SoIndexedFaceSet369->setCoord(*SoCoordinate371);

SoShape365->setGeometry(*SoIndexedFaceSet369);

SoTransform364->addChild(*SoShape365);

SoHAnimSegment363->addChild(*SoTransform364);

SoHAnimJoint362->addChildren(*SoHAnimSegment363);

SoHAnimJoint* SoHAnimJoint372 = new SoHAnimJoint();
SoHAnimJoint372->setDEF(QString("hanim_vc4"));
SoHAnimJoint372->X3DNode::setName(QString("vc4"));
SoHAnimJoint372->setCenter(new float[]{0.0,56.08,-0.6695});
SoHAnimSegment* SoHAnimSegment373 = new SoHAnimSegment();
SoHAnimSegment373->setDEF(QString("hanim_c4"));
SoHAnimSegment373->X3DNode::setName(QString("c4"));
SoTransform* SoTransform374 = new SoTransform();
SoTransform374->setTranslation(new float[]{0.0,56.08,-0.6695});
SoShape* SoShape375 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance376 = new SoVRMLAppearance();
SoMaterial* SoMaterial377 = new SoMaterial();
SoMaterial377->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance376->addChild(*SoMaterial377);

SoImageTexture* SoImageTexture378 = new SoImageTexture();
SoImageTexture378->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance376->addChild(*SoImageTexture378);

SoShape375->addChild(*SoVRMLAppearance376);

SoIndexedFaceSet* SoIndexedFaceSet379 = new SoIndexedFaceSet();
SoIndexedFaceSet379->setCreaseAngle(3.14159);
SoIndexedFaceSet379->setTexCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet379->setCoordIndex(new int32_t[]{12,20,8,-1,8,0,12,-1,13,12,0,-1,0,1,13,-1,14,13,1,-1,1,2,14,-1,15,14,2,-1,2,3,15,-1,21,15,3,-1,3,9,21,-1,18,19,7,-1,7,6,18,-1,19,23,11,-1,11,7,19,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate380 = new SoTextureCoordinate();
SoTextureCoordinate380->setPoint(new float[]{0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.3906,0.6538,0.3807,0.6592,0.3719,0.6606,0.3649,0.6605,0.3906,0.6599,0.4006,0.6592,0.3818,0.6596,0.3706,0.6591,0.3995,0.6628,0.3906,0.6629,0.3818,0.6628,0.3719,0.6635,0.3649,0.6634,0.3706,0.6624,0.3807,0.6628,0.3906,0.657,0.4006,0.6628,0.4107,0.6624,0.4164,0.6634,0.4094,0.6635,0.3906,0.6599,0.3995,0.6596,0.4094,0.6606,0.4164,0.6605,0.4107,0.6591,0.4006,0.6592,0.3906,0.6538,0.3807,0.6592,0.3706,0.6591,0.3649,0.6605,0.3719,0.6606,0.3818,0.6596}, 96);
SoIndexedFaceSet379->setTexCoord(*SoTextureCoordinate380);

SoCoordinate* SoCoordinate381 = new SoCoordinate();
SoCoordinate381->setPoint(new float[]{0.5369,0.5776,-1.124,1.139,0.5776,-0.8504,1.562,0.5776,0.0729,1.219,0.5776,0.7153,0.0,0.5776,1.195,-0.605,0.5776,1.101,-1.139,0.5776,-0.8504,-1.562,0.5776,0.0729,0.0,0.5776,-1.195,0.605,0.5776,1.101,-0.5369,0.5776,-1.124,-1.219,0.5776,0.7153,0.5369,0.0017,-1.124,1.139,0.0017,-0.8504,1.562,0.0017,0.0729,1.219,0.0017,0.7153,0.0,0.0017,1.195,-0.605,0.0017,1.101,-1.139,0.0017,-0.8504,-1.562,0.0017,0.0729,0.0,0.0017,-1.195,0.605,0.0017,1.101,-0.5369,0.0017,-1.124,-1.219,0.0017,0.7153,0.4947,0.7754,-0.9348,0.0,0.7754,-1.0,-0.4947,0.7754,-0.9348,-1.008,0.7754,-0.7016,-1.361,0.7754,0.069,-1.091,0.7754,0.5735,-0.5462,0.7754,0.9162,0.0,0.7754,1.001,0.5462,0.7754,0.9162,1.091,0.7754,0.5735,1.361,0.7754,0.069,1.008,0.7754,-0.7016,0.0,-0.2388,-1.0,0.4947,-0.2388,-0.9348,1.008,-0.2388,-0.7016,1.361,-0.2388,0.069,1.091,-0.2388,0.5735,0.5462,-0.2388,0.9162,0.0,-0.2388,1.001,-0.5462,-0.2388,0.9162,-1.091,-0.2388,0.5735,-1.361,-0.2388,0.069,-1.008,-0.2388,-0.7016,-0.4947,-0.2388,-0.9348}, 144);
SoIndexedFaceSet379->setCoord(*SoCoordinate381);

SoShape375->setGeometry(*SoIndexedFaceSet379);

SoTransform374->addChild(*SoShape375);

SoHAnimSegment373->addChild(*SoTransform374);

SoHAnimJoint372->addChildren(*SoHAnimSegment373);

SoHAnimJoint* SoHAnimJoint382 = new SoHAnimJoint();
SoHAnimJoint382->setDEF(QString("hanim_vc3"));
SoHAnimJoint382->X3DNode::setName(QString("vc3"));
SoHAnimJoint382->setCenter(new float[]{0.0,56.66,-0.6695});
SoHAnimSegment* SoHAnimSegment383 = new SoHAnimSegment();
SoHAnimSegment383->setDEF(QString("hanim_c3"));
SoHAnimSegment383->X3DNode::setName(QString("c3"));
SoTransform* SoTransform384 = new SoTransform();
SoTransform384->setTranslation(new float[]{0.0,56.66,-0.6695});
SoShape* SoShape385 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance386 = new SoVRMLAppearance();
SoMaterial* SoMaterial387 = new SoMaterial();
SoMaterial387->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance386->addChild(*SoMaterial387);

SoImageTexture* SoImageTexture388 = new SoImageTexture();
SoImageTexture388->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance386->addChild(*SoImageTexture388);

SoShape385->addChild(*SoVRMLAppearance386);

SoIndexedFaceSet* SoIndexedFaceSet389 = new SoIndexedFaceSet();
SoIndexedFaceSet389->setCreaseAngle(3.14159);
SoIndexedFaceSet389->setTexCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet389->setCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate390 = new SoTextureCoordinate();
SoTextureCoordinate390->setPoint(new float[]{0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.3906,0.657,0.3807,0.6628,0.3719,0.6635,0.3649,0.6634,0.3906,0.6629,0.4006,0.6628,0.3818,0.6628,0.3706,0.6624,0.3995,0.6659,0.3906,0.666,0.3818,0.6659,0.3719,0.6664,0.3649,0.6663,0.3706,0.6656,0.3807,0.6665,0.3906,0.6601,0.4006,0.6665,0.4107,0.6656,0.4164,0.6663,0.4094,0.6664,0.3906,0.6629,0.3995,0.6628,0.4094,0.6635,0.4164,0.6634,0.4107,0.6624,0.4006,0.6628,0.3906,0.657,0.3807,0.6628,0.3706,0.6624,0.3649,0.6634,0.3719,0.6635,0.3818,0.6628}, 96);
SoIndexedFaceSet389->setTexCoord(*SoTextureCoordinate390);

SoCoordinate* SoCoordinate391 = new SoCoordinate();
SoCoordinate391->setPoint(new float[]{0.5369,0.5152,-1.124,1.139,0.5152,-0.8504,1.562,0.5152,0.0729,1.219,0.5152,0.7153,0.0,0.5152,1.195,-0.605,0.5152,1.101,-1.139,0.5152,-0.8504,-1.562,0.5152,0.0729,0.0,0.5152,-1.195,0.605,0.5152,1.101,-0.5369,0.5152,-1.124,-1.219,0.5152,0.7153,0.5369,0.0015,-1.124,1.139,0.0015,-0.8504,1.562,0.0015,0.0729,1.219,0.0015,0.7153,0.0,0.0015,1.195,-0.605,0.0015,1.101,-1.139,0.0015,-0.8504,-1.562,0.0015,0.0729,0.0,0.0015,-1.195,0.605,0.0015,1.101,-0.5369,0.0015,-1.124,-1.219,0.0015,0.7153,0.4947,0.7138,-0.9348,0.0,0.7138,-1.0,-0.4947,0.7138,-0.9348,-1.008,0.7138,-0.7016,-1.361,0.7138,0.069,-1.091,0.7138,0.5735,-0.5462,0.7138,0.9162,0.0,0.7138,1.001,0.5462,0.7138,0.9162,1.091,0.7138,0.5735,1.361,0.7138,0.069,1.008,0.7138,-0.7016,0.0,-0.2398,-1.0,0.4947,-0.2398,-0.9348,1.008,-0.2398,-0.7016,1.361,-0.2398,0.069,1.091,-0.2398,0.5735,0.5462,-0.2398,0.9162,0.0,-0.2398,1.001,-0.5462,-0.2398,0.9162,-1.091,-0.2398,0.5735,-1.361,-0.2398,0.069,-1.008,-0.2398,-0.7016,-0.4947,-0.2398,-0.9348}, 144);
SoIndexedFaceSet389->setCoord(*SoCoordinate391);

SoShape385->setGeometry(*SoIndexedFaceSet389);

SoTransform384->addChild(*SoShape385);

SoHAnimSegment383->addChild(*SoTransform384);

SoHAnimJoint382->addChildren(*SoHAnimSegment383);

SoHAnimJoint* SoHAnimJoint392 = new SoHAnimJoint();
SoHAnimJoint392->setDEF(QString("hanim_vc2"));
SoHAnimJoint392->X3DNode::setName(QString("vc2"));
SoHAnimJoint392->setCenter(new float[]{0.0,57.17,-0.6695});
SoHAnimSegment* SoHAnimSegment393 = new SoHAnimSegment();
SoHAnimSegment393->setDEF(QString("hanim_c2"));
SoHAnimSegment393->X3DNode::setName(QString("c2"));
SoTransform* SoTransform394 = new SoTransform();
SoTransform394->setTranslation(new float[]{0.0,57.17,-0.6695});
SoShape* SoShape395 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance396 = new SoVRMLAppearance();
SoMaterial* SoMaterial397 = new SoMaterial();
SoMaterial397->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance396->addChild(*SoMaterial397);

SoImageTexture* SoImageTexture398 = new SoImageTexture();
SoImageTexture398->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance396->addChild(*SoImageTexture398);

SoShape395->addChild(*SoVRMLAppearance396);

SoIndexedFaceSet* SoIndexedFaceSet399 = new SoIndexedFaceSet();
SoIndexedFaceSet399->setCreaseAngle(3.14159);
SoIndexedFaceSet399->setTexCoordIndex(new int32_t[]{14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1}, 368);
SoIndexedFaceSet399->setCoordIndex(new int32_t[]{14,15,16,-1,16,17,18,-1,18,19,20,-1,16,18,20,-1,20,21,22,-1,22,23,12,-1,20,22,12,-1,16,20,12,-1,14,16,12,-1,13,14,12,-1,0,1,13,-1,13,12,0,-1,1,7,14,-1,14,13,1,-1,7,8,15,-1,15,14,7,-1,8,9,16,-1,16,15,8,-1,9,10,17,-1,17,16,9,-1,10,11,18,-1,18,17,10,-1,11,6,19,-1,19,18,11,-1,6,5,20,-1,20,19,6,-1,5,4,21,-1,21,20,5,-1,4,3,22,-1,22,21,4,-1,3,2,23,-1,23,22,3,-1,2,0,12,-1,12,23,2,-1,1,0,24,-1,24,32,1,-1,0,2,25,-1,25,24,0,-1,2,3,26,-1,26,25,2,-1,3,4,27,-1,27,26,3,-1,4,5,33,-1,33,27,4,-1,9,8,30,-1,30,31,9,-1,10,9,31,-1,31,35,10,-1,5,6,28,-1,28,33,5,-1,7,1,32,-1,32,34,7,-1,8,7,34,-1,34,30,8,-1,6,11,29,-1,29,28,6,-1,11,10,35,-1,35,29,11,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,32,24,37,-1,37,36,32,-1,24,25,38,-1,38,37,24,-1,25,26,39,-1,39,38,25,-1,26,27,40,-1,40,39,26,-1,27,33,41,-1,41,40,27,-1,33,28,42,-1,42,41,33,-1,28,29,43,-1,43,42,28,-1,29,35,44,-1,44,43,29,-1,35,31,45,-1,45,44,35,-1,31,30,46,-1,46,45,31,-1,30,34,47,-1,47,46,30,-1,34,32,36,-1,36,47,34,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate400 = new SoTextureCoordinate();
SoTextureCoordinate400->setPoint(new float[]{0.3995,0.6721,0.3906,0.6721,0.4094,0.6721,0.4164,0.6721,0.4107,0.6721,0.4006,0.6738,0.3906,0.6664,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3995,0.6721,0.3906,0.6721,0.3818,0.6721,0.3719,0.6721,0.3649,0.6721,0.3706,0.6721,0.3807,0.6738,0.3906,0.6664,0.4006,0.6738,0.4107,0.6721,0.4164,0.6721,0.4094,0.6721,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3906,0.669,0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.4006,0.6702,0.3906,0.6632,0.3807,0.6702,0.3706,0.6689,0.3649,0.6692,0.3719,0.6692,0.3818,0.669}, 96);
SoIndexedFaceSet399->setTexCoord(*SoTextureCoordinate400);

SoCoordinate* SoCoordinate401 = new SoCoordinate();
SoCoordinate401->setPoint(new float[]{0.5369,0.5216,-1.124,0.0,0.5216,-1.195,1.139,0.5216,-0.8504,1.562,0.5216,0.073,1.219,0.5216,0.7153,0.605,0.5216,1.101,0.0,0.5216,1.195,-0.5369,0.5216,-1.124,-1.139,0.5216,-0.8504,-1.562,0.5216,0.0729,-1.219,0.5216,0.7153,-0.605,0.5216,1.101,0.4798,0.7591,-0.9247,0.0,0.7591,-0.9883,-0.4798,0.7591,-0.9247,-0.9844,0.7591,-0.6953,-1.333,0.7591,0.066,-1.064,0.7591,0.5706,-0.5317,0.7591,0.9052,0.0,0.7591,0.9877,0.5317,0.7591,0.9052,1.064,0.7591,0.5706,1.333,0.7591,0.066,0.9844,0.7591,-0.6953,0.5369,0.0018,-1.124,1.139,0.0018,-0.8504,1.562,0.0018,0.073,1.219,0.0018,0.7153,0.0,0.0018,1.195,-0.605,0.0018,1.101,-1.139,0.0018,-0.8504,-1.562,0.0018,0.0729,0.0,0.0018,-1.195,0.605,0.0018,1.101,-0.5369,0.0018,-1.124,-1.219,0.0018,0.7153,0.0,-0.2146,-1.0,0.4947,-0.2146,-0.9348,1.008,-0.2146,-0.7016,1.361,-0.2146,0.069,1.091,-0.2146,0.5735,0.5462,-0.2146,0.9162,0.0,-0.2146,1.001,-0.5462,-0.2146,0.9162,-1.091,-0.2146,0.5735,-1.361,-0.2146,0.069,-1.008,-0.2146,-0.7016,-0.4947,-0.2146,-0.9348}, 144);
SoIndexedFaceSet399->setCoord(*SoCoordinate401);

SoShape395->setGeometry(*SoIndexedFaceSet399);

SoTransform394->addChild(*SoShape395);

SoHAnimSegment393->addChild(*SoTransform394);

SoHAnimJoint392->addChildren(*SoHAnimSegment393);

SoHAnimJoint* SoHAnimJoint402 = new SoHAnimJoint();
SoHAnimJoint402->setDEF(QString("hanim_vc1"));
SoHAnimJoint402->X3DNode::setName(QString("vc1"));
SoHAnimJoint402->setCenter(new float[]{0.0,57.69,-0.6695});
SoHAnimSegment* SoHAnimSegment403 = new SoHAnimSegment();
SoHAnimSegment403->setDEF(QString("hanim_c1"));
SoHAnimSegment403->X3DNode::setName(QString("c1"));
SoTransform* SoTransform404 = new SoTransform();
SoTransform404->setTranslation(new float[]{0.0,57.69,-0.6695});
SoShape* SoShape405 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance406 = new SoVRMLAppearance();
SoMaterial* SoMaterial407 = new SoMaterial();
SoMaterial407->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance406->addChild(*SoMaterial407);

SoImageTexture* SoImageTexture408 = new SoImageTexture();
SoImageTexture408->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance406->addChild(*SoImageTexture408);

SoShape405->addChild(*SoVRMLAppearance406);

SoIndexedFaceSet* SoIndexedFaceSet409 = new SoIndexedFaceSet();
SoIndexedFaceSet409->setCreaseAngle(3.14159);
SoIndexedFaceSet409->setTexCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoIndexedFaceSet409->setCoordIndex(new int32_t[]{8,0,12,-1,12,20,8,-1,0,1,13,-1,13,12,0,-1,1,2,14,-1,14,13,1,-1,2,3,15,-1,15,14,2,-1,3,9,21,-1,21,15,3,-1,7,6,18,-1,18,19,7,-1,11,7,19,-1,19,23,11,-1,9,4,16,-1,16,21,9,-1,10,8,20,-1,20,22,10,-1,6,10,22,-1,22,18,6,-1,4,5,17,-1,17,16,4,-1,5,11,23,-1,23,17,5,-1,26,27,28,-1,28,29,30,-1,30,31,32,-1,28,30,32,-1,32,33,34,-1,34,35,24,-1,32,34,24,-1,28,32,24,-1,26,28,24,-1,25,26,24,-1,38,39,40,-1,40,41,42,-1,42,43,44,-1,40,42,44,-1,44,45,46,-1,46,47,36,-1,44,46,36,-1,40,44,36,-1,38,40,36,-1,37,38,36,-1,0,8,25,-1,25,24,0,-1,8,10,26,-1,26,25,8,-1,10,6,27,-1,27,26,10,-1,6,7,28,-1,28,27,6,-1,7,11,29,-1,29,28,7,-1,11,5,30,-1,30,29,11,-1,5,4,31,-1,31,30,5,-1,4,9,32,-1,32,31,4,-1,9,3,33,-1,33,32,9,-1,3,2,34,-1,34,33,3,-1,2,1,35,-1,35,34,2,-1,1,0,24,-1,24,35,1,-1,20,12,37,-1,37,36,20,-1,12,13,38,-1,38,37,12,-1,13,14,39,-1,39,38,13,-1,14,15,40,-1,40,39,14,-1,15,21,41,-1,41,40,15,-1,21,16,42,-1,42,41,21,-1,16,17,43,-1,43,42,16,-1,17,23,44,-1,44,43,17,-1,23,19,45,-1,45,44,23,-1,19,18,46,-1,46,45,19,-1,18,22,47,-1,47,46,18,-1,22,20,36,-1,36,47,22,-1}, 368);
SoTextureCoordinate* SoTextureCoordinate410 = new SoTextureCoordinate();
SoTextureCoordinate410->setPoint(new float[]{0.3995,0.669,0.4094,0.6692,0.4164,0.6692,0.4107,0.6689,0.3906,0.6632,0.3807,0.6702,0.3719,0.6692,0.3649,0.6692,0.3906,0.669,0.4006,0.6702,0.3818,0.669,0.3706,0.6689,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.3906,0.6601,0.3807,0.6665,0.3719,0.6664,0.3649,0.6663,0.3906,0.666,0.4006,0.6665,0.3818,0.6659,0.3706,0.6656,0.3995,0.669,0.3906,0.669,0.3818,0.669,0.3719,0.6692,0.3649,0.6692,0.3706,0.6689,0.3807,0.6702,0.3906,0.6632,0.4006,0.6702,0.4107,0.6689,0.4164,0.6692,0.4094,0.6692,0.3906,0.666,0.3995,0.6659,0.4094,0.6664,0.4164,0.6663,0.4107,0.6656,0.4006,0.6665,0.3906,0.6601,0.3807,0.6665,0.3706,0.6656,0.3649,0.6663,0.3719,0.6664,0.3818,0.6659}, 96);
SoIndexedFaceSet409->setTexCoord(*SoTextureCoordinate410);

SoCoordinate* SoCoordinate411 = new SoCoordinate();
SoCoordinate411->setPoint(new float[]{0.5369,0.5724,-1.124,1.139,0.5724,-0.8504,1.562,0.5724,0.073,1.219,0.5724,0.7153,0.0,0.5724,1.195,-0.605,0.5724,1.101,-1.139,0.5724,-0.8504,-1.562,0.5724,0.0729,0.0,0.5724,-1.195,0.605,0.5724,1.101,-0.5369,0.5724,-1.124,-1.219,0.5724,0.7153,0.5369,0.0022,-1.124,1.139,0.0022,-0.8504,1.562,0.0022,0.0729,1.219,0.0022,0.7153,0.0,0.0022,1.195,-0.605,0.0022,1.101,-1.139,0.0022,-0.8504,-1.562,0.0022,0.0729,0.0,0.0022,-1.195,0.605,0.0022,1.101,-0.5369,0.0022,-1.124,-1.219,0.0022,0.7153,0.4947,0.7703,-0.9348,0.0,0.7703,-1.0,-0.4947,0.7703,-0.9348,-1.008,0.7703,-0.7016,-1.361,0.7703,0.069,-1.091,0.7703,0.5735,-0.5462,0.7703,0.9162,0.0,0.7703,1.001,0.5462,0.7703,0.9162,1.091,0.7703,0.5735,1.361,0.7703,0.069,1.008,0.7703,-0.7016,0.0,-0.2078,-1.0,0.4947,-0.2078,-0.9348,1.008,-0.2078,-0.7016,1.361,-0.2078,0.069,1.091,-0.2078,0.5735,0.5462,-0.2078,0.9162,0.0,-0.2078,1.001,-0.5462,-0.2078,0.9162,-1.091,-0.2078,0.5735,-1.361,-0.2078,0.069,-1.008,-0.2078,-0.7016,-0.4947,-0.2078,-0.9348}, 144);
SoIndexedFaceSet409->setCoord(*SoCoordinate411);

SoShape405->setGeometry(*SoIndexedFaceSet409);

SoTransform404->addChild(*SoShape405);

SoHAnimSegment403->addChild(*SoTransform404);

SoHAnimJoint402->addChildren(*SoHAnimSegment403);

SoHAnimJoint* SoHAnimJoint412 = new SoHAnimJoint();
SoHAnimJoint412->setDEF(QString("hanim_skullbase"));
SoHAnimJoint412->X3DNode::setName(QString("skullbase"));
SoHAnimJoint412->setCenter(new float[]{0.0,57.43,-0.6863});
SoHAnimSegment* SoHAnimSegment413 = new SoHAnimSegment();
SoHAnimSegment413->setDEF(QString("hanim_skull"));
SoHAnimSegment413->X3DNode::setName(QString("skull"));
SoTransform* SoTransform414 = new SoTransform();
SoTransform414->setTranslation(new float[]{0.0,57.43,-0.6863});
SoShape* SoShape415 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance416 = new SoVRMLAppearance();
SoMaterial* SoMaterial417 = new SoMaterial();
SoMaterial417->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance416->addChild(*SoMaterial417);

SoImageTexture* SoImageTexture418 = new SoImageTexture();
SoImageTexture418->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance416->addChild(*SoImageTexture418);

SoShape415->addChild(*SoVRMLAppearance416);

SoIndexedFaceSet* SoIndexedFaceSet419 = new SoIndexedFaceSet();
SoIndexedFaceSet419->setCreaseAngle(3.14159);
SoIndexedFaceSet419->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,1,6,5,-1,5,4,1,-1,7,8,2,-1,2,3,7,-1,9,10,5,-1,5,6,9,-1,11,12,0,-1,0,1,11,-1,13,11,1,-1,1,4,13,-1,14,17,16,-1,16,15,14,-1,18,19,14,-1,14,15,18,-1,22,21,20,-1,23,16,17,-1,16,25,24,-1,27,26,24,-1,29,28,25,-1,16,23,25,-1,29,25,23,-1,31,17,30,-1,29,23,32,-1,33,32,31,-1,33,31,30,-1,27,35,34,-1,34,26,27,-1,37,36,34,-1,39,38,36,-1,26,40,16,-1,16,24,26,-1,36,42,41,-1,41,39,36,-1,43,41,42,-1,43,44,41,-1,41,44,39,-1,20,45,22,-1,45,46,22,-1,44,47,39,-1,20,49,50,-1,48,51,50,-1,51,20,50,-1,20,47,49,-1,49,47,44,-1,28,24,25,-1,53,52,46,-1,52,55,54,-1,52,54,46,-1,52,53,55,-1,7,57,53,-1,53,56,7,-1,58,57,7,-1,7,59,58,-1,57,58,53,-1,8,7,56,-1,56,60,8,-1,9,6,60,-1,10,9,60,-1,60,61,10,-1,0,12,62,-1,62,12,63,-1,64,62,63,-1,53,58,62,-1,62,64,53,-1,62,58,59,-1,59,0,62,-1,64,63,65,-1,63,67,66,-1,66,65,63,-1,53,64,65,-1,65,55,53,-1,65,66,54,-1,54,55,65,-1,67,21,66,-1,38,39,68,-1,22,46,21,-1,54,66,21,-1,46,54,21,-1,21,67,69,-1,68,69,38,-1,20,21,47,-1,47,21,68,-1,47,68,39,-1,69,18,70,-1,70,18,15,-1,40,70,15,-1,15,16,40,-1,69,71,38,-1,71,69,70,-1,38,71,34,-1,34,36,38,-1,26,34,71,-1,68,21,69,-1,2,6,1,-1,8,60,2,-1,60,6,2,-1,74,73,72,-1,77,76,75,-1,74,78,73,-1,74,81,80,-1,80,79,74,-1,82,79,80,-1,74,79,78,-1,82,84,83,-1,83,84,85,-1,82,86,84,-1,87,90,89,-1,89,88,87,-1,92,91,88,-1,80,81,93,-1,88,91,94,-1,86,93,95,-1,72,73,96,-1,83,79,82,-1,73,83,97,-1,100,99,98,-1,103,102,101,-1,99,83,85,-1,104,97,99,-1,97,83,99,-1,105,90,102,-1,105,89,90,-1,107,106,75,-1,107,108,106,-1,109,82,80,-1,109,80,93,-1,112,111,110,-1,93,81,113,-1,93,113,95,-1,114,110,111,-1,115,114,111,-1,87,86,116,-1,86,95,116,-1,18,69,117,-1,118,19,18,-1,18,117,118,-1,117,69,67,-1,67,119,117,-1,119,67,63,-1,63,120,119,-1,117,119,121,-1,121,118,117,-1,120,122,121,-1,121,119,120,-1,11,120,63,-1,63,12,11,-1,13,122,120,-1,120,11,13,-1,125,124,123,-1,127,126,124,-1,126,127,128,-1,131,130,129,-1,131,129,132,-1,131,132,133,-1,133,127,131,-1,127,133,128,-1,135,134,126,-1,130,135,126,-1,135,136,134,-1,124,126,123,-1,123,126,137,-1,138,125,123,-1,123,139,138,-1,140,143,142,-1,142,141,140,-1,126,134,137,-1,127,124,144,-1,144,124,125,-1,144,131,127,-1,145,125,138,-1,146,140,141,-1,147,140,146,-1,148,144,125,-1,137,149,123,-1,150,123,149,-1,153,156,155,-1,155,154,153,-1,153,154,158,-1,158,157,153,-1,158,160,159,-1,159,157,158,-1,157,159,162,-1,162,161,157,-1,139,215,164,-1,164,138,139,-1,163,139,150,-1,150,165,163,-1,139,123,150,-1,168,167,166,-1,166,167,159,-1,169,151,152,-1,166,159,169,-1,161,172,170,-1,170,157,161,-1,170,171,157,-1,167,162,159,-1,173,176,236,-1,236,174,173,-1,172,161,177,-1,177,233,172,-1,241,174,236,-1,236,240,241,-1,168,180,167,-1,181,180,168,-1,183,238,237,-1,237,231,183,-1,167,180,186,-1,187,177,161,-1,161,162,187,-1,188,189,177,-1,177,187,188,-1,167,186,187,-1,187,162,167,-1,188,187,186,-1,186,190,188,-1,189,192,177,-1,234,176,233,-1,231,175,191,-1,190,186,180,-1,180,193,190,-1,191,234,192,-1,146,141,195,-1,193,180,181,-1,181,194,193,-1,195,141,196,-1,196,240,236,-1,171,156,153,-1,153,157,171,-1,197,181,168,-1,198,147,242,-1,198,140,147,-1,199,125,145,-1,148,125,200,-1,200,125,199,-1,159,160,151,-1,151,169,159,-1,130,136,135,-1,242,147,184,-1,147,201,184,-1,147,146,201,-1,195,201,146,-1,144,202,131,-1,144,148,202,-1,155,204,203,-1,203,154,155,-1,154,203,160,-1,160,158,154,-1,205,208,207,-1,207,206,205,-1,209,208,205,-1,205,210,209,-1,213,214,211,-1,211,212,213,-1,191,191,192,-1,192,192,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,191,191,191,-1,192,192,191,-1,191,191,192,-1,189,189,192,-1,192,192,189,-1,188,188,189,-1,189,189,188,-1,190,190,188,-1,188,188,190,-1,193,193,190,-1,190,190,193,-1,194,194,193,-1,193,193,194,-1,194,232,232,-1,232,194,194,-1,139,163,215,-1,222,223,217,-1,217,216,222,-1,223,229,218,-1,218,217,223,-1,228,219,218,-1,218,229,228,-1,218,219,221,-1,217,218,221,-1,217,221,220,-1,224,225,226,-1,226,225,227,-1,227,230,226,-1,238,183,232,-1,232,239,238,-1,175,231,237,-1,239,232,194,-1,194,178,239,-1,175,176,191,-1,191,176,234,-1,192,234,233,-1,233,177,192,-1,176,173,172,-1,172,233,176,-1,178,194,181,-1,184,235,242,-1,196,236,179,-1,195,196,179,-1,179,182,195,-1,201,195,182,-1,182,185,201,-1,184,201,185,-1,196,141,240,-1,240,141,142,-1,142,241,240,-1,245,244,243,-1,243,246,245,-1,244,248,247,-1,247,249,244,-1,250,246,243,-1,243,251,250,-1,252,249,247,-1,247,253,252,-1,254,244,245,-1,245,255,254,-1,256,248,244,-1,244,254,256,-1,259,258,257,-1,257,260,259,-1,261,258,259,-1,259,262,261,-1,263,265,264,-1,266,260,257,-1,257,268,267,-1,269,268,270,-1,271,267,272,-1,257,267,266,-1,271,266,267,-1,273,274,260,-1,271,275,266,-1,276,273,275,-1,276,274,273,-1,269,270,277,-1,277,278,269,-1,279,277,280,-1,281,280,282,-1,270,268,257,-1,257,283,270,-1,280,281,284,-1,284,285,280,-1,286,285,284,-1,286,284,287,-1,284,281,287,-1,265,263,288,-1,288,263,289,-1,287,281,290,-1,265,292,291,-1,293,292,294,-1,294,292,265,-1,265,291,290,-1,291,287,290,-1,272,267,268,-1,295,289,296,-1,296,298,297,-1,296,289,298,-1,296,297,295,-1,250,299,295,-1,295,300,250,-1,302,301,250,-1,250,300,302,-1,300,295,302,-1,251,303,299,-1,299,250,251,-1,252,303,249,-1,253,304,303,-1,303,252,253,-1,245,305,255,-1,305,306,255,-1,307,306,305,-1,295,307,305,-1,305,302,295,-1,305,245,301,-1,301,302,305,-1,307,308,306,-1,306,308,309,-1,309,310,306,-1,295,297,308,-1,308,307,295,-1,308,297,298,-1,298,309,308,-1,310,309,264,-1,282,311,281,-1,263,264,289,-1,298,264,309,-1,289,264,298,-1,264,312,310,-1,311,282,312,-1,265,290,264,-1,290,311,264,-1,290,281,311,-1,312,313,261,-1,313,258,261,-1,283,257,258,-1,258,313,283,-1,312,282,314,-1,314,313,312,-1,282,280,277,-1,277,314,282,-1,270,314,277,-1,311,312,264,-1,243,244,249,-1,251,243,303,-1,303,243,249,-1,315,317,316,-1,318,320,319,-1,315,316,321,-1,315,323,322,-1,322,324,315,-1,325,322,323,-1,315,321,323,-1,325,327,326,-1,327,328,326,-1,325,326,329,-1,332,331,330,-1,330,333,332,-1,334,331,335,-1,322,336,324,-1,331,337,335,-1,329,338,336,-1,317,339,316,-1,327,325,323,-1,316,340,327,-1,341,343,342,-1,344,346,345,-1,342,328,327,-1,347,342,340,-1,340,342,327,-1,348,345,333,-1,348,333,330,-1,349,320,350,-1,349,350,351,-1,352,322,325,-1,352,336,322,-1,353,355,354,-1,336,356,324,-1,336,338,356,-1,357,354,355,-1,358,354,357,-1,332,359,329,-1,329,359,338,-1,261,360,312,-1,361,360,261,-1,261,262,361,-1,360,362,310,-1,310,312,360,-1,362,363,306,-1,306,310,362,-1,360,361,364,-1,364,362,360,-1,363,362,364,-1,364,365,363,-1,254,255,306,-1,306,363,254,-1,256,254,363,-1,363,365,256,-1,366,368,367,-1,369,367,370,-1,370,371,369,-1,372,374,373,-1,372,375,374,-1,372,369,376,-1,376,375,372,-1,369,371,376,-1,377,370,378,-1,373,370,377,-1,377,378,379,-1,367,368,370,-1,368,380,370,-1,382,381,368,-1,368,366,382,-1,385,384,383,-1,383,386,385,-1,370,380,378,-1,369,387,367,-1,387,366,367,-1,387,369,372,-1,388,382,366,-1,389,384,385,-1,390,389,385,-1,391,366,387,-1,380,368,392,-1,393,392,368,-1,396,395,394,-1,394,397,396,-1,396,399,398,-1,398,395,396,-1,398,399,400,-1,400,401,398,-1,399,403,402,-1,402,400,399,-1,381,382,405,-1,405,404,381,-1,406,407,393,-1,393,381,406,-1,381,393,368,-1,408,410,409,-1,410,400,409,-1,411,413,412,-1,410,411,400,-1,403,399,414,-1,414,415,403,-1,414,399,416,-1,409,400,402,-1,419,418,417,-1,417,420,419,-1,415,422,421,-1,421,403,415,-1,423,424,417,-1,417,418,423,-1,408,409,425,-1,426,408,425,-1,427,430,429,-1,429,428,427,-1,409,431,425,-1,432,402,403,-1,403,421,432,-1,433,432,421,-1,421,434,433,-1,409,402,432,-1,432,431,409,-1,433,435,431,-1,431,432,433,-1,434,421,436,-1,437,422,420,-1,430,439,438,-1,435,440,425,-1,425,431,435,-1,439,436,437,-1,389,441,384,-1,440,442,426,-1,426,425,440,-1,441,443,384,-1,443,417,424,-1,416,396,397,-1,396,416,399,-1,444,408,426,-1,445,446,390,-1,445,390,385,-1,447,388,366,-1,391,448,366,-1,448,447,366,-1,400,411,412,-1,412,401,400,-1,373,377,379,-1,446,449,390,-1,390,449,450,-1,390,450,389,-1,441,389,450,-1,387,372,451,-1,387,451,391,-1,394,395,452,-1,452,453,394,-1,395,398,401,-1,401,452,395,-1,456,455,454,-1,454,457,456,-1,459,458,456,-1,456,457,459,-1,462,461,460,-1,460,463,462,-1,439,436,436,-1,436,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,439,439,439,-1,436,439,439,-1,439,436,436,-1,434,436,436,-1,436,434,434,-1,433,434,434,-1,434,433,433,-1,435,433,433,-1,433,435,435,-1,440,435,435,-1,435,440,440,-1,442,440,440,-1,440,442,442,-1,442,442,464,-1,464,464,442,-1,381,404,406,-1,465,468,467,-1,467,466,465,-1,466,467,470,-1,470,469,466,-1,471,469,470,-1,470,472,471,-1,467,474,473,-1,473,472,470,-1,467,473,470,-1,475,477,476,-1,477,479,478,-1,478,476,477,-1,428,480,464,-1,464,427,428,-1,438,429,430,-1,480,481,442,-1,442,464,480,-1,438,439,420,-1,439,437,420,-1,436,421,422,-1,422,437,436,-1,420,422,415,-1,415,419,420,-1,481,426,442,-1,449,446,482,-1,443,483,417,-1,441,484,483,-1,483,443,441,-1,450,485,484,-1,484,441,450,-1,449,485,450,-1,443,424,384,-1,424,423,383,-1,383,384,424,-1}, 2480);
SoIndexedFaceSet419->setCoordIndex(new int32_t[]{51,38,41,-1,41,43,51,-1,43,52,171,-1,171,151,43,-1,49,42,41,-1,41,38,49,-1,44,186,171,-1,171,52,44,-1,78,76,51,-1,51,43,78,-1,189,78,43,-1,43,151,189,-1,9,172,13,-1,13,10,9,-1,73,193,9,-1,9,10,73,-1,11,50,27,-1,16,13,172,-1,13,67,14,-1,68,15,14,-1,7,6,67,-1,13,16,67,-1,7,67,16,-1,16,172,173,-1,7,16,136,-1,7,136,130,-1,131,132,173,-1,68,19,18,-1,18,15,68,-1,20,32,18,-1,17,8,32,-1,15,66,13,-1,13,14,15,-1,32,23,24,-1,24,17,32,-1,21,24,23,-1,21,22,24,-1,24,22,17,-1,27,25,11,-1,25,31,11,-1,22,28,17,-1,27,30,29,-1,12,26,29,-1,26,27,29,-1,27,28,30,-1,30,28,22,-1,6,14,67,-1,1,34,31,-1,34,36,35,-1,34,35,31,-1,34,1,36,-1,49,37,1,-1,1,40,49,-1,39,37,49,-1,49,38,39,-1,37,39,1,-1,42,49,40,-1,40,0,42,-1,44,52,0,-1,186,44,0,-1,0,149,186,-1,51,76,45,-1,45,76,77,-1,53,45,77,-1,1,39,45,-1,45,53,1,-1,45,39,38,-1,38,51,45,-1,53,77,46,-1,77,74,33,-1,33,46,77,-1,1,53,46,-1,46,36,1,-1,46,33,35,-1,35,36,46,-1,74,50,33,-1,8,17,47,-1,11,31,50,-1,35,33,50,-1,31,35,50,-1,50,74,75,-1,47,75,8,-1,27,50,28,-1,28,50,47,-1,28,47,17,-1,75,73,48,-1,48,73,10,-1,66,48,10,-1,10,13,66,-1,75,66,8,-1,66,75,48,-1,8,66,18,-1,18,32,8,-1,15,18,66,-1,47,50,75,-1,41,52,43,-1,42,0,41,-1,0,52,41,-1,0,54,149,-1,244,245,54,-1,0,56,54,-1,0,40,55,-1,55,57,0,-1,3,57,55,-1,0,57,56,-1,3,62,5,-1,5,62,58,-1,3,64,62,-1,2,61,62,-1,62,64,2,-1,3,60,64,-1,55,40,59,-1,64,60,59,-1,64,59,135,-1,149,54,245,-1,5,57,3,-1,54,5,244,-1,152,63,61,-1,153,63,152,-1,63,5,58,-1,153,244,63,-1,244,5,63,-1,58,61,63,-1,58,62,61,-1,56,5,54,-1,56,57,5,-1,60,3,55,-1,60,55,59,-1,1,133,135,-1,59,40,1,-1,59,1,135,-1,65,135,133,-1,2,65,133,-1,2,64,65,-1,64,135,65,-1,73,75,69,-1,263,193,73,-1,73,69,263,-1,69,75,74,-1,74,71,69,-1,71,74,77,-1,77,72,71,-1,69,71,266,-1,266,263,69,-1,72,70,266,-1,266,71,72,-1,78,72,77,-1,77,76,78,-1,189,70,72,-1,72,78,189,-1,138,123,113,-1,79,122,123,-1,122,79,80,-1,137,124,81,-1,137,81,82,-1,137,82,83,-1,83,79,137,-1,79,83,80,-1,84,116,122,-1,124,84,122,-1,84,119,116,-1,123,122,113,-1,113,122,109,-1,115,138,113,-1,113,114,115,-1,117,286,158,-1,158,112,117,-1,122,116,109,-1,79,123,133,-1,133,123,138,-1,133,137,79,-1,129,138,115,-1,110,117,112,-1,111,117,110,-1,2,133,138,-1,109,85,113,-1,86,113,85,-1,107,294,160,-1,160,126,107,-1,107,126,125,-1,125,108,107,-1,125,127,87,-1,87,108,125,-1,108,87,103,-1,103,104,108,-1,114,301,154,-1,154,115,114,-1,302,114,86,-1,86,159,302,-1,114,113,86,-1,116,105,109,-1,109,105,87,-1,85,88,86,-1,109,87,85,-1,104,174,305,-1,305,108,104,-1,305,175,108,-1,105,103,87,-1,307,91,170,-1,170,150,307,-1,174,104,95,-1,95,162,174,-1,311,150,170,-1,170,177,311,-1,116,90,105,-1,89,90,116,-1,94,168,167,-1,167,93,94,-1,105,90,96,-1,97,95,104,-1,104,103,97,-1,120,121,95,-1,95,97,120,-1,105,96,97,-1,97,103,105,-1,120,97,96,-1,96,98,120,-1,121,100,95,-1,163,91,162,-1,93,170,99,-1,98,96,90,-1,90,101,98,-1,99,163,100,-1,110,112,92,-1,101,90,89,-1,89,106,101,-1,92,112,165,-1,165,177,170,-1,175,294,107,-1,107,108,175,-1,119,89,116,-1,118,111,119,-1,118,117,111,-1,152,138,129,-1,2,138,61,-1,61,138,152,-1,87,127,88,-1,88,85,87,-1,124,119,84,-1,119,111,164,-1,111,166,164,-1,111,110,166,-1,92,166,110,-1,133,4,137,-1,133,134,4,-1,160,176,128,-1,128,126,160,-1,126,128,127,-1,127,125,126,-1,80,81,124,-1,124,122,80,-1,82,81,80,-1,80,83,82,-1,129,115,154,-1,154,152,129,-1,94,140,139,-1,139,102,94,-1,93,141,140,-1,140,94,93,-1,99,142,141,-1,141,93,99,-1,100,143,142,-1,142,99,100,-1,121,144,143,-1,143,100,121,-1,120,145,144,-1,144,121,120,-1,98,146,145,-1,145,120,98,-1,101,147,146,-1,146,98,101,-1,106,148,147,-1,147,101,106,-1,106,102,139,-1,139,148,106,-1,114,302,301,-1,88,127,155,-1,155,157,88,-1,127,161,156,-1,156,155,127,-1,352,353,156,-1,156,161,352,-1,156,353,354,-1,155,156,354,-1,155,354,157,-1,127,128,161,-1,161,128,176,-1,176,352,161,-1,168,94,102,-1,102,169,168,-1,170,93,167,-1,169,102,106,-1,106,164,169,-1,170,91,99,-1,99,91,163,-1,100,163,162,-1,162,95,100,-1,91,307,174,-1,174,162,91,-1,164,106,89,-1,164,89,119,-1,165,170,167,-1,92,165,167,-1,167,168,92,-1,166,92,168,-1,168,169,166,-1,164,166,169,-1,165,112,177,-1,177,112,158,-1,158,311,177,-1,180,179,178,-1,178,181,180,-1,179,151,171,-1,171,182,179,-1,183,181,178,-1,178,184,183,-1,185,182,171,-1,171,186,185,-1,187,179,180,-1,180,188,187,-1,189,151,179,-1,179,187,189,-1,9,191,190,-1,190,172,9,-1,192,191,9,-1,9,193,192,-1,194,196,195,-1,197,172,190,-1,190,199,198,-1,200,199,201,-1,202,198,203,-1,190,198,197,-1,202,197,198,-1,197,173,172,-1,202,204,197,-1,202,205,204,-1,206,173,207,-1,200,201,208,-1,208,209,200,-1,210,208,211,-1,212,211,213,-1,201,199,190,-1,190,214,201,-1,211,212,215,-1,215,216,211,-1,217,216,215,-1,217,215,218,-1,215,212,218,-1,196,194,219,-1,219,194,220,-1,218,212,221,-1,196,223,222,-1,224,223,225,-1,225,223,196,-1,196,222,221,-1,222,218,221,-1,203,198,199,-1,226,220,227,-1,227,229,228,-1,227,220,229,-1,227,228,226,-1,183,230,226,-1,226,231,183,-1,232,181,183,-1,183,231,232,-1,231,226,232,-1,184,233,230,-1,230,183,184,-1,185,233,182,-1,186,149,233,-1,233,185,186,-1,180,234,188,-1,234,235,188,-1,236,235,234,-1,226,236,234,-1,234,232,226,-1,234,180,181,-1,181,232,234,-1,236,237,235,-1,235,237,238,-1,238,239,235,-1,226,228,237,-1,237,236,226,-1,237,228,229,-1,229,238,237,-1,239,238,195,-1,213,240,212,-1,194,195,220,-1,229,195,238,-1,220,195,229,-1,195,241,239,-1,240,213,241,-1,196,221,195,-1,221,240,195,-1,221,212,240,-1,241,242,192,-1,242,191,192,-1,214,190,191,-1,191,242,214,-1,241,213,214,-1,214,242,241,-1,213,211,208,-1,208,214,213,-1,201,214,208,-1,240,241,195,-1,178,179,182,-1,184,178,233,-1,233,178,182,-1,233,149,243,-1,244,243,245,-1,233,243,246,-1,233,248,247,-1,247,230,233,-1,249,247,248,-1,233,246,248,-1,249,251,250,-1,251,252,250,-1,249,250,253,-1,254,253,250,-1,250,255,254,-1,249,253,256,-1,247,257,230,-1,253,257,256,-1,253,258,257,-1,149,245,243,-1,251,249,248,-1,243,244,251,-1,152,255,259,-1,153,152,259,-1,259,252,251,-1,153,259,244,-1,244,259,251,-1,252,259,255,-1,252,255,250,-1,246,243,251,-1,246,251,248,-1,256,247,249,-1,256,257,247,-1,226,258,260,-1,257,226,230,-1,257,258,226,-1,261,260,258,-1,254,260,261,-1,254,261,253,-1,253,261,258,-1,192,262,241,-1,263,262,192,-1,192,193,263,-1,262,264,239,-1,239,241,262,-1,264,265,235,-1,235,239,264,-1,262,263,266,-1,266,264,262,-1,265,264,266,-1,266,70,265,-1,187,188,235,-1,235,265,187,-1,189,187,265,-1,265,70,189,-1,267,269,268,-1,270,268,271,-1,271,272,270,-1,273,275,274,-1,273,276,275,-1,273,270,277,-1,277,276,273,-1,270,272,277,-1,278,271,279,-1,274,271,278,-1,278,279,280,-1,268,269,271,-1,269,281,271,-1,283,282,269,-1,269,267,283,-1,285,284,158,-1,158,286,285,-1,271,281,279,-1,270,260,268,-1,260,267,268,-1,260,270,273,-1,287,283,267,-1,288,284,285,-1,289,288,285,-1,254,267,260,-1,281,269,290,-1,291,290,269,-1,293,292,160,-1,160,294,293,-1,293,296,295,-1,295,292,293,-1,295,296,297,-1,297,298,295,-1,296,300,299,-1,299,297,296,-1,282,283,154,-1,154,301,282,-1,302,159,291,-1,291,282,302,-1,282,291,269,-1,279,281,303,-1,281,297,303,-1,290,291,304,-1,281,290,297,-1,300,296,305,-1,305,174,300,-1,305,296,175,-1,303,297,299,-1,307,150,306,-1,306,308,307,-1,174,310,309,-1,309,300,174,-1,311,312,306,-1,306,150,311,-1,279,303,313,-1,314,279,313,-1,315,318,317,-1,317,316,315,-1,303,319,313,-1,320,299,300,-1,300,309,320,-1,321,320,309,-1,309,322,321,-1,303,299,320,-1,320,319,303,-1,321,323,319,-1,319,320,321,-1,322,309,324,-1,325,310,308,-1,318,326,306,-1,323,327,313,-1,313,319,323,-1,326,324,325,-1,288,328,284,-1,327,329,314,-1,314,313,327,-1,328,330,284,-1,330,306,312,-1,175,293,294,-1,293,175,296,-1,280,279,314,-1,331,280,289,-1,331,289,285,-1,152,287,267,-1,254,255,267,-1,255,152,267,-1,297,290,304,-1,304,298,297,-1,274,278,280,-1,280,332,289,-1,289,332,333,-1,289,333,288,-1,328,288,333,-1,260,273,334,-1,260,334,335,-1,160,292,336,-1,336,176,160,-1,292,295,298,-1,298,336,292,-1,272,271,274,-1,274,275,272,-1,276,277,272,-1,272,275,276,-1,287,152,154,-1,154,283,287,-1,315,337,339,-1,339,338,315,-1,318,315,338,-1,338,340,318,-1,326,318,340,-1,340,341,326,-1,324,326,341,-1,341,342,324,-1,322,324,342,-1,342,343,322,-1,321,322,343,-1,343,344,321,-1,323,321,344,-1,344,345,323,-1,327,323,345,-1,345,346,327,-1,329,327,346,-1,346,347,329,-1,329,347,339,-1,339,337,329,-1,282,301,302,-1,304,349,348,-1,348,298,304,-1,298,348,351,-1,351,350,298,-1,352,350,351,-1,351,353,352,-1,348,349,354,-1,354,353,351,-1,348,354,351,-1,298,350,336,-1,350,352,176,-1,176,336,350,-1,316,355,337,-1,337,315,316,-1,306,317,318,-1,355,332,329,-1,329,337,355,-1,306,326,308,-1,326,325,308,-1,324,309,310,-1,310,325,324,-1,308,310,174,-1,174,307,308,-1,332,314,329,-1,332,280,314,-1,330,317,306,-1,328,316,317,-1,317,330,328,-1,333,355,316,-1,316,328,333,-1,332,355,333,-1,330,312,284,-1,312,311,158,-1,158,284,312,-1}, 2480);
SoTextureCoordinate* SoTextureCoordinate420 = new SoTextureCoordinate();
SoTextureCoordinate420->setPoint(new float[]{0.9175,0.8974,0.9509,0.8981,0.9421,0.8701,0.924,0.8702,0.9824,0.8971,0.9824,0.8682,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7343,0.9169,0.7616,0.9147,0.7553,0.8982,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8187,0.8433,0.8348,0.9045,0.8324,0.8647,0.74,0.8745,0.761,0.8768,0.7497,0.8755,0.777,0.8787,0.7647,0.8593,0.7596,0.8565,0.7438,0.8546,0.7343,0.8756,0.7372,0.8736,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7875,0.8787,0.7821,0.8667,0.7952,0.9076,0.8011,0.8823,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.786,0.7876,0.8107,0.8538,0.8058,0.8252,0.8096,0.8166,0.8589,0.7975,0.8767,0.8622,0.8568,0.8668,0.8669,0.8674,0.9208,0.8549,0.8792,0.7991,0.8835,0.8633,0.9139,0.8636,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7338,0.8385,0.7279,0.8339,0.7208,0.8401,0.7397,0.7767,0.7338,0.7681,0.7338,0.7727,0.7192,0.8201,0.7171,0.8352,0.7139,0.8364,0.7127,0.8419,0.7175,0.832,0.7247,0.8312,0.7224,0.8292,0.7239,0.8169,0.7146,0.8334,0.7152,0.8309,0.753,0.7762,0.7452,0.772,0.7409,0.7703,0.756,0.7661,0.7502,0.7748,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7267,0.8275,0.7291,0.8283,0.7338,0.8254,0.7338,0.7682,0.7385,0.7711,0.7338,0.7628,0.7338,0.82,0.7437,0.7597,0.7429,0.774,0.7484,0.7629,0.7505,0.778,0.7116,0.8233,0.7622,0.7806,0.7576,0.779,0.763,0.7872,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4263,0.6263,0.4421,0.6351,0.4514,0.6319,0.4298,0.637,0.4385,0.639,0.4385,0.6403,0.4369,0.6596,0.4321,0.6555,0.4385,0.6553,0.4451,0.6548,0.4452,0.6463,0.4227,0.6454,0.4263,0.652,0.4193,0.6633,0.4176,0.6328,0.4376,0.6237,0.4196,0.6187,0.3384,0.9887,0.2934,0.905,0.2441,0.9417,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2959,0.626,0.3051,0.6166,0.2511,0.6816,0.2548,0.6653,0.2441,0.6653,0.2441,0.6816,0.2661,0.696,0.2636,0.664,0.3484,0.6888,0.3007,0.651,0.2881,0.7397,0.3623,0.7239,0.4151,0.6155,0.4295,0.6197,0.4116,0.6201,0.4088,0.6855,0.4123,0.7323,0.4518,0.7703,0.364,0.6372,0.2441,0.7326,0.2441,0.7109,0.2441,0.7705,0.2441,0.816,0.2466,0.8272,0.2826,0.8198,0.263,0.8101,0.3011,0.7644,0.4294,0.848,0.295,0.8569,0.4229,0.7906,0.445,0.8342,0.3273,0.8725,0.3401,0.8443,0.4194,0.891,0.3844,0.8819,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.2864,0.8094,0.3065,0.7969,0.4051,0.8004,0.4267,0.8291,0.3243,0.8795,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4658,0.6252,0.465,0.6281,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.4156,0.6279,0.3783,0.625,0.3984,0.649,0.4325,0.6718,0.4443,0.6446,0.428,0.6022,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.4215,0.6174,0.6418,0.6585,0.6441,0.671,0.6214,0.6731,0.616,0.6731,0.6418,0.6585,0.623,0.6494,0.6418,0.6585,0.6441,0.671,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.616,0.6731,0.6214,0.6731,0.2441,0.6529,0.314,0.8296,0.3898,0.85,0.2746,0.7881,0.2889,0.7981,0.4442,0.8857,0.2745,0.8415,0.3079,0.8417,0.3393,0.8544,0.3891,0.8542,0.2699,0.8521,0.246,0.853,0.4715,0.8911,0.9421,0.8701,0.9509,0.8981,0.9175,0.8974,0.924,0.8702,0.9824,0.8682,0.9824,0.8971,0.9541,0.8718,0.9147,0.8129,0.9437,0.8153,0.9638,0.8095,0.9824,0.809,0.9461,0.923,0.9071,0.9135,0.9824,0.9287,0.7553,0.8982,0.7616,0.9147,0.7343,0.9169,0.7343,0.8968,0.7739,0.9327,0.7343,0.9365,0.8324,0.8647,0.8348,0.9045,0.8187,0.8433,0.74,0.8745,0.7497,0.8755,0.761,0.8768,0.7647,0.8593,0.777,0.8787,0.7438,0.8546,0.7596,0.8565,0.7372,0.8736,0.7343,0.8756,0.7394,0.8706,0.7405,0.8536,0.7808,0.8802,0.7786,0.8666,0.7821,0.8667,0.7875,0.8787,0.8011,0.8823,0.7952,0.9076,0.7745,0.9003,0.7939,0.8518,0.7845,0.8549,0.7731,0.8049,0.7979,0.8609,0.8185,0.8054,0.8439,0.8655,0.8131,0.8741,0.8107,0.8538,0.8058,0.8252,0.786,0.7876,0.8096,0.8166,0.8767,0.8622,0.8589,0.7975,0.8669,0.8674,0.8568,0.8668,0.9208,0.8549,0.8792,0.7991,0.9139,0.8636,0.8835,0.8633,0.9513,0.84,0.9824,0.8358,0.8845,0.9021,0.888,0.931,0.8761,0.9036,0.8705,0.9018,0.8544,0.902,0.8538,0.9345,0.8173,0.9068,0.8156,0.9257,0.7753,0.9186,0.7832,0.9041,0.7208,0.8401,0.7279,0.8339,0.7338,0.8385,0.7338,0.7727,0.7338,0.7681,0.7397,0.7767,0.7192,0.8201,0.7139,0.8364,0.7171,0.8352,0.7127,0.8419,0.7175,0.832,0.7224,0.8292,0.7247,0.8312,0.7239,0.8169,0.7146,0.8334,0.7452,0.772,0.753,0.7762,0.7152,0.8309,0.7409,0.7703,0.7502,0.7748,0.756,0.7661,0.7102,0.837,0.7574,0.7798,0.7054,0.8378,0.7338,0.8253,0.7338,0.8299,0.7338,0.8254,0.7291,0.8283,0.7267,0.8275,0.7338,0.7628,0.7385,0.7711,0.7338,0.7682,0.7338,0.82,0.7437,0.7597,0.7484,0.7629,0.7429,0.774,0.7505,0.778,0.7116,0.8233,0.763,0.7872,0.7576,0.779,0.7622,0.7806,0.7046,0.8444,0.7572,0.7769,0.7524,0.7737,0.7104,0.8341,0.7881,0.9479,0.7343,0.9577,0.8497,0.9637,0.9158,0.9539,0.7343,0.9872,0.9824,0.9663,0.4514,0.6319,0.4421,0.6351,0.4263,0.6263,0.4385,0.639,0.4298,0.637,0.4385,0.6403,0.4385,0.6553,0.4321,0.6555,0.4369,0.6596,0.4451,0.6548,0.4452,0.6463,0.4263,0.652,0.4227,0.6454,0.4193,0.6633,0.4176,0.6328,0.4196,0.6187,0.4376,0.6237,0.2441,0.9417,0.2934,0.905,0.3384,0.9887,0.2441,0.9723,0.4437,0.6405,0.4519,0.6235,0.3367,0.9059,0.4034,0.9073,0.4566,0.6329,0.4157,0.6257,0.4137,0.6192,0.2441,0.6653,0.2548,0.6653,0.2511,0.6816,0.2441,0.6816,0.2636,0.664,0.2661,0.696,0.3484,0.6888,0.3007,0.651,0.3623,0.7239,0.2881,0.7397,0.4215,0.6174,0.4295,0.6197,0.4151,0.6155,0.4116,0.6201,0.4518,0.7703,0.4123,0.7323,0.4088,0.6855,0.364,0.6372,0.2959,0.626,0.3051,0.6166,0.2441,0.7326,0.2441,0.7705,0.2441,0.7109,0.2745,0.8415,0.2466,0.8272,0.2441,0.816,0.263,0.8101,0.3011,0.7644,0.2746,0.7881,0.246,0.853,0.2699,0.8521,0.4229,0.7906,0.445,0.8342,0.3401,0.8443,0.3393,0.8544,0.3079,0.8417,0.314,0.8296,0.3962,0.7639,0.3654,0.758,0.3664,0.7923,0.3312,0.7931,0.3858,0.7947,0.3065,0.7969,0.2889,0.7981,0.2826,0.8198,0.2864,0.8094,0.4051,0.8004,0.3243,0.8795,0.4267,0.8291,0.293,0.8645,0.4715,0.8911,0.431,0.9594,0.4715,0.8911,0.4658,0.6252,0.465,0.6281,0.4194,0.891,0.3862,0.8876,0.4544,0.6426,0.2548,0.6553,0.2441,0.6553,0.3984,0.649,0.3783,0.625,0.4156,0.6279,0.4325,0.6718,0.428,0.6022,0.4443,0.6446,0.4445,0.6357,0.4021,0.656,0.4052,0.6271,0.4253,0.6199,0.3898,0.85,0.6418,0.6585,0.6441,0.671,0.6441,0.671,0.6418,0.6585,0.6214,0.6731,0.6214,0.6731,0.616,0.6731,0.616,0.6731,0.623,0.6494,0.6418,0.6585,0.3003,0.6509,0.2548,0.6558,0.2549,0.6531,0.2441,0.6558,0.2441,0.6529,0.3891,0.8542,0.4294,0.848,0.4442,0.8857,0.295,0.8569,0.3273,0.8725,0.3844,0.8819}, 972);
SoIndexedFaceSet419->setTexCoord(*SoTextureCoordinate420);

SoCoordinate* SoCoordinate421 = new SoCoordinate();
SoCoordinate421->setPoint(new float[]{2.596,3.055,-7.113,5.82,3.915,-2.239,3.712,1.225,-2.29,3.261,1.453,-4.252,5.658,2.599,-1.983,1.82,1.289,-5.164,2.395,4.95,6.346,0.7761,4.912,6.883,4.408,9.203,3.673,0.0,11.25,5.65,2.225,10.89,5.304,5.962,4.414,1.165,4.041,0.8383,3.523,1.972,9.601,6.357,2.537,7.001,6.362,3.694,6.649,5.287,0.4475,7.341,7.362,4.843,6.188,3.431,3.886,6.593,4.951,3.681,5.194,5.001,3.826,5.001,4.664,3.284,2.472,4.49,4.543,4.124,3.499,3.859,3.861,4.364,4.575,3.792,4.006,5.065,1.183,1.247,4.863,1.73,2.37,5.256,2.695,2.024,5.549,5.532,2.714,5.161,2.035,2.722,5.442,3.878,2.887,6.111,4.389,0.2634,4.062,5.868,4.221,6.007,7.856,-0.5637,7.021,1.661,-0.9157,6.568,4.855,-0.7308,6.326,4.691,-1.55,6.23,0.8303,-3.441,4.977,5.364,-5.673,6.326,4.656,-2.95,4.216,3.427,-5.131,3.522,5.818,-7.166,3.424,1.86,-7.278,2.479,7.925,-6.757,1.927,1.981,-8.89,5.584,7.691,-2.78,5.853,7.683,-1.772,5.181,8.476,2.104,3.038,10.79,4.444,5.123,3.032,-5.304,5.664,8.061,0.8754,4.721,7.925,-5.258,2.479,5.82,-7.483,5.595,7.63,-2.141,1.173,1.832,-6.114,3.978,2.324,-4.64,2.917,-0.9285,-7.31,3.323,2.08,-5.371,1.968,-1.561,-5.013,4.713,2.444,-3.477,4.42,-0.2924,-4.477,1.411,0.5541,-3.484,2.275,0.8807,-3.763,0.9407,0.7103,-4.537,3.818,1.729,-3.139,4.664,1.866,-1.436,3.657,9.188,4.96,1.559,7.266,7.008,2.791,5.041,6.017,2.479,12.6,2.191,0.0,12.77,-3.073,2.479,13.01,-0.5905,2.479,12.47,-3.073,2.479,11.8,3.665,4.738,11.13,-0.5905,4.581,10.59,1.893,4.776,9.342,-4.254,4.651,10.94,-2.696,2.479,10.58,-5.873,5.038,2.087,0.2634,5.351,2.269,0.2568,5.575,4.993,0.4877,5.759,4.313,-0.6689,5.672,3.119,-0.6884,4.617,3.919,1.981,2.507,0.2122,3.467,1.252,-0.7037,3.753,2.181,1.29,4.703,1.083,-0.2065,4.531,4.006,4.226,3.45,3.843,3.486,3.474,0.2615,3.949,5.823,2.043,5.094,5.803,1.599,4.225,5.429,2.175,4.422,5.292,1.061,2.841,5.24,3.345,2.806,3.987,2.647,2.75,4.481,3.082,3.581,4.206,1.044,3.885,5.454,1.356,3.642,5.241,3.227,3.707,4.111,3.028,4.567,4.683,2.472,2.023,4.722,0.9194,2.354,5.382,3.515,2.199,3.631,3.685,4.225,3.891,0.1458,1.141,5.967,0.4592,1.442,5.549,3.443,1.22,3.201,1.972,6.686,5.769,3.551,6.468,4.66,1.125,6.641,6.224,2.799,0.2961,1.981,1.438,-0.7799,2.92,2.098,-0.0622,0.3894,4.342,2.994,2.484,1.972,10.18,5.298,3.829,8.081,4.078,4.754,5.519,2.97,2.795,3.568,4.497,1.835,3.587,5.011,4.074,1.813,1.489,4.073,1.537,-0.251,4.798,4.414,1.165,0.4079,0.7711,5.733,0.2244,0.7989,5.843,1.184,0.5011,4.895,0.2244,0.5907,5.545,2.091,-0.0943,-1.629,0.4475,7.341,7.362,0.7761,4.912,6.883,0.4475,7.341,7.362,4.734,2.295,-0.478,3.712,1.225,-2.29,5.658,2.599,-1.983,0.513,6.698,7.119,5.054,4.389,0.2634,3.561,1.081,-1.554,2.09,4.432,3.699,1.621,4.356,4.123,1.332,4.202,4.217,1.07,3.93,4.244,1.254,3.737,4.129,1.514,3.69,3.988,2.035,3.658,3.658,2.202,3.647,3.455,2.276,3.737,3.378,2.499,4.118,3.181,0.0,2.738,-7.551,0.0,4.192,6.16,0.0,7.925,-7.347,0.0,0.1375,-3.592,0.0,-0.9435,-6.54,0.0,-0.6349,1.532,0.5806,0.4168,3.813,0.1288,0.4247,4.012,0.5566,-0.2209,3.55,0.0,6.577,6.529,0.0,-1.299,4.283,0.0,0.7989,5.843,0.2132,0.5713,5.365,0.5926,3.49,5.582,0.9241,3.763,5.471,3.843,5.112,4.093,1.112,4.786,6.09,3.261,5.262,4.816,1.327,4.522,5.859,2.089,4.758,5.599,3.171,4.95,4.784,0.646,4.262,6.112,0.0,5.519,-7.965,0.0,9.74,6.859,0.0,7.548,7.405,0.0,2.998,5.872,0.0,1.753,6.811,0.0,0.5907,5.545,0.7426,4.743,6.135,-3.522,5.818,-7.166,-2.479,7.925,-6.757,-4.721,7.925,-5.258,-4.977,5.364,-5.673,-2.479,5.82,-7.483,-5.123,3.032,-5.304,-3.424,1.86,-7.278,-1.927,1.981,-8.89,0.0,3.753,-8.454,-2.479,10.58,-5.873,-4.776,9.342,-4.254,0.0,10.91,-6.064,-1.972,9.601,6.357,-2.225,10.89,5.304,-2.479,11.8,3.665,0.0,12.19,4.069,-5.962,4.414,1.165,-5.664,8.061,0.8754,-5.256,2.695,2.024,-0.4475,7.341,7.362,-1.559,7.266,7.008,-2.537,7.001,6.362,-2.791,5.041,6.017,-3.694,6.649,5.287,-0.7761,4.912,6.883,-2.395,4.95,6.346,-0.513,6.698,7.119,-0.4475,7.341,7.362,-0.7761,4.912,6.883,-0.4475,7.341,7.362,-3.886,6.593,4.951,-3.681,5.194,5.001,-3.826,5.001,4.664,-4.062,5.868,4.221,-4.843,6.188,3.431,-4.408,9.203,3.673,-3.657,9.188,4.96,-4.575,3.792,4.006,-3.859,3.861,4.364,-3.284,2.472,4.49,-4.543,4.124,3.499,-5.065,1.183,1.247,-6.111,4.389,0.2634,-5.549,5.532,2.714,-5.442,3.878,2.887,-5.161,2.035,2.722,-4.041,0.8383,3.523,-4.863,1.73,2.37,-5.82,3.915,-2.239,-7.021,1.661,-0.9157,-6.326,4.691,-1.55,-6.568,4.855,-0.7308,-4.216,3.427,-5.131,-6.23,0.8303,-3.441,-6.326,4.656,-2.95,-2.596,3.055,-7.113,-5.584,7.691,-2.78,-4.651,10.94,-2.696,-5.595,7.63,-2.141,-5.853,7.683,-1.772,-6.007,7.856,-0.5637,-4.738,11.13,-0.5905,-5.181,8.476,2.104,-4.581,10.59,1.893,-3.038,10.79,4.444,-1.173,1.832,-6.114,0.0,1.035,-6.031,0.0,0.1227,-8.281,-2.917,-0.9285,-7.31,-3.978,2.324,-4.64,-3.323,2.08,-5.371,-3.261,1.453,-4.252,-2.275,0.8807,-3.763,-1.82,1.289,-5.164,-1.968,-1.561,-5.013,-3.818,1.729,-3.139,-3.712,1.225,-2.29,-1.411,0.5541,-3.484,-4.42,-0.2924,-4.477,-4.713,2.444,-3.477,-5.658,2.599,-1.983,-0.9407,0.7103,-4.537,-4.734,2.295,-0.478,-4.664,1.866,-1.436,-2.479,12.6,2.191,0.0,12.89,2.191,-2.479,13.01,-0.5905,-2.479,12.47,-3.073,0.0,13.3,-0.5905,-3.561,1.081,-1.554,-4.073,1.537,-0.251,-2.799,0.2961,1.981,-5.038,2.087,0.2634,-4.074,1.813,1.489,-5.351,2.269,0.2568,-5.054,4.389,0.2634,-4.798,4.414,1.165,-5.575,4.993,0.4877,-5.759,4.313,-0.6689,-5.672,3.119,-0.6884,-4.617,3.919,1.981,-4.342,2.994,2.484,-4.754,5.519,2.97,-3.443,1.22,3.201,-1.438,-0.7799,2.92,-2.098,-0.0622,0.3894,-1.125,6.641,6.224,-1.972,10.18,5.298,0.0,9.837,5.8,-2.091,-0.0943,-1.629,-1.972,6.686,5.769,-3.551,6.468,4.66,-2.507,0.2122,3.467,-1.252,-0.7037,3.753,-0.2244,0.7989,5.843,-0.1458,1.141,5.967,0.0,1.141,5.968,-0.4079,0.7711,5.733,-0.4592,1.442,5.549,-2.181,1.29,4.703,-1.184,0.5011,4.895,-2.472,2.023,4.722,-0.9194,2.354,5.382,0.0,-1.065,3.009,0.0,-1.23,3.575,-3.515,2.199,3.631,-1.083,-0.2065,4.531,0.0,2.206,6.446,-0.646,4.262,6.112,0.0,3.949,5.823,-0.2615,3.949,5.823,-1.061,2.841,5.24,-0.5926,3.49,5.582,0.0,4.73,6.243,-0.7426,4.743,6.135,-3.843,3.486,3.474,-4.006,4.226,3.45,-2.175,4.422,5.292,-2.089,4.758,5.599,-1.327,4.522,5.859,-1.599,4.225,5.429,-3.345,2.806,3.987,-2.647,2.75,4.481,-2.795,3.568,4.497,-1.835,3.587,5.011,-3.082,3.581,4.206,-1.356,3.642,5.241,-0.9241,3.763,5.471,-1.044,3.885,5.454,-3.227,3.707,4.111,-2.043,5.094,5.803,-3.685,4.225,3.891,-1.112,4.786,6.09,-3.829,8.081,4.078,-3.843,5.112,4.093,-3.261,5.262,4.816,-5.658,2.599,-1.983,-3.712,1.225,-2.29,-0.2244,0.5907,5.545,-3.028,4.567,4.683,-1.621,4.356,4.123,-2.09,4.432,3.699,-1.332,4.202,4.217,-1.07,3.93,4.244,-1.254,3.737,4.129,-1.514,3.69,3.988,-2.035,3.658,3.658,-2.202,3.647,3.455,-2.276,3.737,3.378,-2.499,4.118,3.181,-0.5806,0.4168,3.813,-0.5566,-0.2209,3.55,-0.2132,0.5713,5.365,-0.1288,0.4247,4.012,0.0,0.5723,5.368,0.0,0.4306,4.006,0.0,-0.2612,3.286,-3.171,4.95,4.784}, 1068);
SoIndexedFaceSet419->setCoord(*SoCoordinate421);

SoShape415->setGeometry(*SoIndexedFaceSet419);

SoTransform414->addChild(*SoShape415);

SoHAnimSegment413->addChild(*SoTransform414);

SoHAnimJoint412->addChildren(*SoHAnimSegment413);

SoHAnimJoint* SoHAnimJoint422 = new SoHAnimJoint();
SoHAnimJoint422->setDEF(QString("hanim_l_eyelid_joint"));
SoHAnimJoint422->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint422->setCenter(new float[]{2.245,62.4,1.464});
SoHAnimSegment* SoHAnimSegment423 = new SoHAnimSegment();
SoHAnimSegment423->setDEF(QString("hanim_l_eyelid"));
SoHAnimSegment423->X3DNode::setName(QString("l_eyelid"));
SoTransform* SoTransform424 = new SoTransform();
SoTransform424->setTranslation(new float[]{2.245,62.4,1.464});
SoTransform424->setRotation(new float[]{1.0,0.0,0.0,-0.5236});
SoShape* SoShape425 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance426 = new SoVRMLAppearance();
SoMaterial* SoMaterial427 = new SoMaterial();
SoMaterial427->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance426->addChild(*SoMaterial427);

SoImageTexture* SoImageTexture428 = new SoImageTexture();
SoImageTexture428->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance426->addChild(*SoImageTexture428);

SoShape425->addChild(*SoVRMLAppearance426);

SoIndexedFaceSet* SoIndexedFaceSet429 = new SoIndexedFaceSet();
SoIndexedFaceSet429->setCreaseAngle(3.14159);
SoIndexedFaceSet429->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,4,6,7,-1,7,5,4,-1,9,10,11,-1,11,8,9,-1,9,0,3,-1,3,10,9,-1,1,0,12,-1,12,13,1,-1,4,1,13,-1,13,14,4,-1,6,4,14,-1,14,15,6,-1,9,8,16,-1,16,17,9,-1,18,19,20,-1,20,21,18,-1,19,22,23,-1,23,20,19,-1,22,7,24,-1,24,23,22,-1,11,25,26,-1,26,27,11,-1,7,6,15,-1,15,24,7,-1,8,11,27,-1,27,16,8,-1,0,9,17,-1,17,12,0,-1,25,18,21,-1,21,26,25,-1,19,18,3,-1,3,2,19,-1,22,19,2,-1,2,5,22,-1,18,25,10,-1,10,3,18,-1,10,25,11,-1,7,22,5,-1}, 168);
SoIndexedFaceSet429->setCoordIndex(new int32_t[]{0,1,25,-1,25,24,0,-1,2,26,25,-1,25,1,2,-1,2,3,8,-1,8,26,2,-1,10,27,9,-1,9,4,10,-1,10,0,24,-1,24,27,10,-1,1,0,12,-1,12,13,1,-1,2,1,13,-1,13,14,2,-1,3,2,14,-1,14,15,3,-1,10,4,16,-1,16,22,10,-1,5,6,18,-1,18,17,5,-1,6,7,19,-1,19,18,6,-1,7,8,20,-1,20,19,7,-1,9,11,23,-1,23,21,9,-1,8,3,15,-1,15,20,8,-1,4,9,21,-1,21,16,4,-1,0,10,22,-1,22,12,0,-1,11,5,17,-1,17,23,11,-1,6,5,24,-1,24,25,6,-1,7,6,25,-1,25,26,7,-1,5,11,27,-1,27,24,5,-1,27,11,9,-1,8,7,26,-1}, 168);
SoTextureCoordinate* SoTextureCoordinate430 = new SoTextureCoordinate();
SoTextureCoordinate430->setPoint(new float[]{0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603}, 56);
SoIndexedFaceSet429->setTexCoord(*SoTextureCoordinate430);

SoCoordinate* SoCoordinate431 = new SoCoordinate();
SoCoordinate431->setPoint(new float[]{0.7812,-0.3922,2.571,-0.0916,-0.4605,3.239,-0.6939,-0.6908,3.379,-1.201,-1.081,3.304,1.44,-0.7409,1.741,0.5651,-1.538,2.334,-0.0316,-1.56,2.732,-0.5556,-1.456,2.994,-0.9123,-1.31,3.138,1.238,-0.9979,1.826,1.125,-0.5541,2.164,0.8496,-1.396,2.061,0.6573,-0.3994,2.377,-0.1708,-0.5443,2.903,-0.7043,-0.7411,3.046,-1.214,-1.081,3.172,1.382,-0.7409,1.7,0.5305,-1.549,2.255,-0.061,-1.557,2.59,-0.5907,-1.457,2.881,-0.9336,-1.31,3.023,1.226,-0.991,1.738,1.011,-0.5701,2.042,0.8046,-1.4,2.015,0.7041,-1.015,2.416,-0.0583,-1.031,3.036,-0.5943,-1.139,3.166,0.9909,-1.005,2.116}, 84);
SoIndexedFaceSet429->setCoord(*SoCoordinate431);

SoShape425->setGeometry(*SoIndexedFaceSet429);

SoTransform424->addChild(*SoShape425);

SoHAnimSegment423->addChild(*SoTransform424);

SoHAnimJoint422->addChildren(*SoHAnimSegment423);

SoHAnimJoint412->addChildren(*SoHAnimJoint422);

SoHAnimJoint* SoHAnimJoint432 = new SoHAnimJoint();
SoHAnimJoint432->setDEF(QString("hanim_r_eyelid_joint"));
SoHAnimJoint432->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint432->setCenter(new float[]{-2.245,62.4,1.464});
SoHAnimSegment* SoHAnimSegment433 = new SoHAnimSegment();
SoHAnimSegment433->setDEF(QString("hanim_r_eyelid"));
SoHAnimSegment433->X3DNode::setName(QString("r_eyelid"));
SoTransform* SoTransform434 = new SoTransform();
SoTransform434->setTranslation(new float[]{-2.245,62.4,1.464});
SoTransform434->setRotation(new float[]{1.0,0.0,0.0,-0.5236});
SoShape* SoShape435 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance436 = new SoVRMLAppearance();
SoMaterial* SoMaterial437 = new SoMaterial();
SoMaterial437->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance436->addChild(*SoMaterial437);

SoImageTexture* SoImageTexture438 = new SoImageTexture();
SoImageTexture438->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance436->addChild(*SoImageTexture438);

SoShape435->addChild(*SoVRMLAppearance436);

SoIndexedFaceSet* SoIndexedFaceSet439 = new SoIndexedFaceSet();
SoIndexedFaceSet439->setCreaseAngle(3.14159);
SoIndexedFaceSet439->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,1,2,-1,2,5,4,-1,4,5,7,-1,7,6,4,-1,9,8,11,-1,11,10,9,-1,9,10,3,-1,3,0,9,-1,1,13,12,-1,12,0,1,-1,4,14,13,-1,13,1,4,-1,6,15,14,-1,14,4,6,-1,9,17,16,-1,16,8,9,-1,18,21,20,-1,20,19,18,-1,19,20,23,-1,23,22,19,-1,22,23,24,-1,24,7,22,-1,11,27,26,-1,26,25,11,-1,7,24,15,-1,15,6,7,-1,8,16,27,-1,27,11,8,-1,0,12,17,-1,17,9,0,-1,25,26,21,-1,21,18,25,-1,19,2,3,-1,3,18,19,-1,22,5,2,-1,2,19,22,-1,18,3,10,-1,10,25,18,-1,10,11,25,-1,7,5,22,-1}, 168);
SoIndexedFaceSet439->setCoordIndex(new int32_t[]{0,24,25,-1,25,1,0,-1,2,1,25,-1,25,26,2,-1,2,26,8,-1,8,3,2,-1,10,4,9,-1,9,27,10,-1,10,27,24,-1,24,0,10,-1,1,13,12,-1,12,0,1,-1,2,14,13,-1,13,1,2,-1,3,15,14,-1,14,2,3,-1,10,22,16,-1,16,4,10,-1,5,17,18,-1,18,6,5,-1,6,18,19,-1,19,7,6,-1,7,19,20,-1,20,8,7,-1,9,21,23,-1,23,11,9,-1,8,20,15,-1,15,3,8,-1,4,16,21,-1,21,9,4,-1,0,12,22,-1,22,10,0,-1,11,23,17,-1,17,5,11,-1,6,25,24,-1,24,5,6,-1,7,26,25,-1,25,6,7,-1,5,24,27,-1,27,11,5,-1,27,9,11,-1,8,26,7,-1}, 168);
SoTextureCoordinate* SoTextureCoordinate440 = new SoTextureCoordinate();
SoTextureCoordinate440->setPoint(new float[]{0.3562,0.7836,0.3424,0.7815,0.3432,0.7614,0.3553,0.7628,0.3328,0.7723,0.3344,0.7557,0.3248,0.7567,0.3294,0.7475,0.3666,0.7703,0.3614,0.7771,0.3598,0.7618,0.364,0.76,0.3542,0.784,0.3411,0.7782,0.3327,0.7703,0.3246,0.7567,0.3657,0.7703,0.3598,0.7771,0.3534,0.7431,0.3436,0.742,0.3428,0.7423,0.3522,0.7429,0.335,0.743,0.3345,0.743,0.3291,0.7475,0.3576,0.7438,0.3566,0.7438,0.3632,0.7603}, 56);
SoIndexedFaceSet439->setTexCoord(*SoTextureCoordinate440);

SoCoordinate* SoCoordinate441 = new SoCoordinate();
SoCoordinate441->setPoint(new float[]{-0.7812,-0.3922,2.571,0.0916,-0.4605,3.239,0.6939,-0.6908,3.379,1.201,-1.081,3.304,-1.44,-0.7409,1.741,-0.5651,-1.538,2.334,0.0316,-1.56,2.732,0.5556,-1.456,2.994,0.9123,-1.31,3.138,-1.238,-0.9979,1.826,-1.125,-0.5541,2.164,-0.8496,-1.396,2.061,-0.6573,-0.3994,2.377,0.1708,-0.5443,2.903,0.7043,-0.7411,3.046,1.214,-1.081,3.172,-1.382,-0.7409,1.7,-0.5305,-1.549,2.255,0.061,-1.557,2.59,0.5907,-1.457,2.881,0.9336,-1.31,3.023,-1.226,-0.991,1.738,-1.011,-0.5701,2.042,-0.8046,-1.4,2.015,-0.7041,-1.015,2.416,0.0583,-1.031,3.036,0.5943,-1.139,3.166,-0.9909,-1.005,2.116}, 84);
SoIndexedFaceSet439->setCoord(*SoCoordinate441);

SoShape435->setGeometry(*SoIndexedFaceSet439);

SoTransform434->addChild(*SoShape435);

SoHAnimSegment433->addChild(*SoTransform434);

SoHAnimJoint432->addChildren(*SoHAnimSegment433);

SoHAnimJoint412->addChildren(*SoHAnimJoint432);

SoHAnimJoint* SoHAnimJoint442 = new SoHAnimJoint();
SoHAnimJoint442->setDEF(QString("hanim_l_eyeball_joint"));
SoHAnimJoint442->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint442->setCenter(new float[]{2.139,61.53,3.691});
SoHAnimSegment* SoHAnimSegment443 = new SoHAnimSegment();
SoHAnimSegment443->setDEF(QString("hanim_l_eyeball"));
SoHAnimSegment443->X3DNode::setName(QString("l_eyeball"));
SoTransform* SoTransform444 = new SoTransform();
SoTransform444->setTranslation(new float[]{2.139,61.53,3.691});
SoShape* SoShape445 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance446 = new SoVRMLAppearance();
SoMaterial* SoMaterial447 = new SoMaterial();
SoMaterial447->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance446->addChild(*SoMaterial447);

SoImageTexture* SoImageTexture448 = new SoImageTexture();
SoImageTexture448->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance446->addChild(*SoImageTexture448);

SoShape445->addChild(*SoVRMLAppearance446);

SoIndexedFaceSet* SoIndexedFaceSet449 = new SoIndexedFaceSet();
SoIndexedFaceSet449->setCreaseAngle(3.14159);
SoIndexedFaceSet449->setTexCoordIndex(new int32_t[]{4,9,13,-1,13,14,4,-1,3,4,14,-1,14,15,3,-1,11,12,16,-1,16,17,11,-1,5,11,17,-1,17,18,5,-1,6,3,15,-1,15,6,6,-1,12,7,19,-1,19,16,12,-1,8,5,18,-1,18,20,8,-1,7,6,21,-1,21,19,7,-1,9,10,22,-1,22,13,9,-1,10,8,20,-1,20,22,10,-1,14,13,24,-1,24,23,14,-1,13,22,25,-1,25,24,13,-1,22,20,26,-1,26,25,22,-1,20,18,27,-1,27,26,20,-1,18,17,28,-1,28,27,18,-1,17,16,29,-1,29,28,17,-1,16,19,30,-1,30,29,16,-1,19,21,31,-1,31,30,19,-1,6,15,32,-1,32,31,6,-1,15,14,23,-1,23,32,15,-1,36,1,40,-1,1,0,40,-1,0,33,40,-1,33,34,40,-1,34,39,40,-1,39,38,40,-1,38,2,40,-1,2,35,40,-1,35,37,40,-1,37,36,40,-1}, 200);
SoIndexedFaceSet449->setCoordIndex(new int32_t[]{1,6,16,-1,16,11,1,-1,0,1,11,-1,11,10,0,-1,8,9,19,-1,19,18,8,-1,2,8,18,-1,18,12,2,-1,3,0,10,-1,10,13,3,-1,9,4,14,-1,14,19,9,-1,5,2,12,-1,12,15,5,-1,4,3,13,-1,13,14,4,-1,6,7,17,-1,17,16,6,-1,7,5,15,-1,15,17,7,-1,11,16,21,-1,21,20,11,-1,16,17,22,-1,22,21,16,-1,17,15,23,-1,23,22,17,-1,15,12,24,-1,24,23,15,-1,12,18,25,-1,25,24,12,-1,18,19,26,-1,26,25,18,-1,19,14,27,-1,27,26,19,-1,14,13,28,-1,28,27,14,-1,13,10,29,-1,29,28,13,-1,10,11,20,-1,20,29,10,-1,6,1,30,-1,1,0,30,-1,0,3,30,-1,3,4,30,-1,4,9,30,-1,9,8,30,-1,8,2,30,-1,2,5,30,-1,5,7,30,-1,7,6,30,-1}, 200);
SoTextureCoordinate* SoTextureCoordinate450 = new SoTextureCoordinate();
SoTextureCoordinate450->setPoint(new float[]{0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819}, 82);
SoIndexedFaceSet449->setTexCoord(*SoTextureCoordinate450);

SoCoordinate* SoCoordinate451 = new SoCoordinate();
SoCoordinate451->setPoint(new float[]{-0.5714,0.1308,1.022,0.0065,0.3275,0.8903,0.9254,-0.514,-0.1858,-1.127,-0.2093,1.04,-0.8123,-0.4527,0.8311,1.071,-0.3875,-0.2786,0.8656,0.4725,0.2913,1.531,0.131,-0.4935,0.6347,-0.5265,0.1025,-0.3305,-0.5079,0.6059,-0.9072,0.3038,0.6607,-0.2821,0.6036,0.4543,0.8055,-0.7341,-0.6018,-1.538,-0.196,0.7028,-1.179,-0.6703,0.471,0.9784,-0.5205,-0.7082,0.7686,0.7606,-0.1253,1.439,0.2188,-0.9066,0.4776,-0.7606,-0.3045,-0.6264,-0.7495,0.2298,-0.4184,0.4603,0.0509,0.5401,0.5849,-0.4428,1.071,0.2019,-1.042,0.7894,-0.2743,-0.8837,0.6127,-0.4156,-0.7848,0.3441,-0.4361,-0.5345,-0.763,-0.4066,-0.0392,-1.24,-0.3287,0.1376,-1.414,-0.1566,0.1789,-0.9737,0.2094,0.2088,0.2912,-0.0892,0.5676}, 93);
SoIndexedFaceSet449->setCoord(*SoCoordinate451);

SoShape445->setGeometry(*SoIndexedFaceSet449);

SoTransform444->addChild(*SoShape445);

SoHAnimSegment443->addChild(*SoTransform444);

SoHAnimJoint442->addChildren(*SoHAnimSegment443);

SoHAnimJoint412->addChildren(*SoHAnimJoint442);

SoHAnimJoint* SoHAnimJoint452 = new SoHAnimJoint();
SoHAnimJoint452->setDEF(QString("hanim_r_eyeball_joint"));
SoHAnimJoint452->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint452->setCenter(new float[]{-2.139,61.53,3.691});
SoHAnimSegment* SoHAnimSegment453 = new SoHAnimSegment();
SoHAnimSegment453->setDEF(QString("hanim_r_eyeball"));
SoHAnimSegment453->X3DNode::setName(QString("r_eyeball"));
SoTransform* SoTransform454 = new SoTransform();
SoTransform454->setTranslation(new float[]{-2.139,61.53,3.691});
SoShape* SoShape455 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance456 = new SoVRMLAppearance();
SoMaterial* SoMaterial457 = new SoMaterial();
SoMaterial457->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance456->addChild(*SoMaterial457);

SoImageTexture* SoImageTexture458 = new SoImageTexture();
SoImageTexture458->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance456->addChild(*SoImageTexture458);

SoShape455->addChild(*SoVRMLAppearance456);

SoIndexedFaceSet* SoIndexedFaceSet459 = new SoIndexedFaceSet();
SoIndexedFaceSet459->setCreaseAngle(3.14159);
SoIndexedFaceSet459->setTexCoordIndex(new int32_t[]{4,14,13,-1,13,9,4,-1,3,15,14,-1,14,4,3,-1,11,17,16,-1,16,12,11,-1,5,18,17,-1,17,11,5,-1,6,6,15,-1,15,3,6,-1,12,16,19,-1,19,7,12,-1,8,20,18,-1,18,5,8,-1,7,19,21,-1,21,6,7,-1,9,13,22,-1,22,10,9,-1,10,22,20,-1,20,8,10,-1,14,23,24,-1,24,13,14,-1,13,24,25,-1,25,22,13,-1,22,25,26,-1,26,20,22,-1,20,26,27,-1,27,18,20,-1,18,27,28,-1,28,17,18,-1,17,28,29,-1,29,16,17,-1,16,29,30,-1,30,19,16,-1,19,30,31,-1,31,21,19,-1,6,31,32,-1,32,15,6,-1,15,32,23,-1,23,14,15,-1,36,40,1,-1,1,40,0,-1,0,40,33,-1,33,40,34,-1,34,40,39,-1,39,40,38,-1,38,40,2,-1,2,40,35,-1,35,40,37,-1,37,40,36,-1}, 200);
SoIndexedFaceSet459->setCoordIndex(new int32_t[]{1,11,16,-1,16,6,1,-1,0,10,11,-1,11,1,0,-1,8,18,19,-1,19,9,8,-1,2,12,18,-1,18,8,2,-1,3,13,10,-1,10,0,3,-1,9,19,14,-1,14,4,9,-1,5,15,12,-1,12,2,5,-1,4,14,13,-1,13,3,4,-1,6,16,17,-1,17,7,6,-1,7,17,15,-1,15,5,7,-1,11,20,21,-1,21,16,11,-1,16,21,22,-1,22,17,16,-1,17,22,23,-1,23,15,17,-1,15,23,24,-1,24,12,15,-1,12,24,25,-1,25,18,12,-1,18,25,26,-1,26,19,18,-1,19,26,27,-1,27,14,19,-1,14,27,28,-1,28,13,14,-1,13,28,29,-1,29,10,13,-1,10,29,20,-1,20,11,10,-1,6,30,1,-1,1,30,0,-1,0,30,3,-1,3,30,4,-1,4,30,9,-1,9,30,8,-1,8,30,2,-1,2,30,5,-1,5,30,7,-1,7,30,6,-1}, 200);
SoTextureCoordinate* SoTextureCoordinate460 = new SoTextureCoordinate();
SoTextureCoordinate460->setPoint(new float[]{0.3217,0.8278,0.3482,0.8386,0.3916,0.7984,0.3206,0.8292,0.3482,0.8386,0.3916,0.7984,0.2977,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7987,0.3868,0.8428,0.3482,0.8386,0.3206,0.8292,0.3319,0.7987,0.3778,0.7978,0.3916,0.7984,0.309,0.8013,0.3985,0.8029,0.2977,0.8092,0.4182,0.8263,0.3482,0.8386,0.3868,0.8428,0.4182,0.8265,0.3985,0.8044,0.3916,0.7984,0.3778,0.7978,0.3319,0.7987,0.309,0.8013,0.2977,0.8092,0.3206,0.8292,0.2978,0.8092,0.309,0.8013,0.3985,0.8044,0.3868,0.8428,0.4182,0.8265,0.3778,0.7978,0.3319,0.7986,0.3567,0.819}, 82);
SoIndexedFaceSet459->setTexCoord(*SoTextureCoordinate460);

SoCoordinate* SoCoordinate461 = new SoCoordinate();
SoCoordinate461->setPoint(new float[]{0.5714,0.1308,1.022,-0.0065,0.3275,0.8903,-0.9254,-0.514,-0.1858,1.127,-0.2093,1.04,0.8123,-0.4527,0.8311,-1.071,-0.3875,-0.2786,-0.8656,0.4725,0.2913,-1.531,0.131,-0.4935,-0.6347,-0.5265,0.1025,0.3305,-0.5079,0.6059,0.9072,0.3038,0.6607,0.2821,0.6036,0.4543,-0.8055,-0.7341,-0.6018,1.538,-0.196,0.7028,1.179,-0.6703,0.471,-0.9784,-0.5205,-0.7082,-0.7686,0.7606,-0.1254,-1.439,0.2188,-0.9066,-0.4776,-0.7606,-0.3045,0.6264,-0.7495,0.2298,0.4184,0.4603,0.0509,-0.5401,0.5849,-0.4428,-1.071,0.2019,-1.042,-0.7894,-0.2743,-0.8837,-0.6127,-0.4156,-0.7848,-0.3441,-0.4361,-0.5345,0.763,-0.4066,-0.0392,1.24,-0.3287,0.1376,1.414,-0.1566,0.1789,0.9737,0.2094,0.2088,-0.2912,-0.0892,0.5676}, 93);
SoIndexedFaceSet459->setCoord(*SoCoordinate461);

SoShape455->setGeometry(*SoIndexedFaceSet459);

SoTransform454->addChild(*SoShape455);

SoHAnimSegment453->addChild(*SoTransform454);

SoHAnimJoint452->addChildren(*SoHAnimSegment453);

SoHAnimJoint412->addChildren(*SoHAnimJoint452);

SoHAnimJoint* SoHAnimJoint462 = new SoHAnimJoint();
SoHAnimJoint462->setDEF(QString("hanim_l_eyebrow_joint"));
SoHAnimJoint462->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint462->setCenter(new float[]{0.9666,61.93,4.753});
SoHAnimSegment* SoHAnimSegment463 = new SoHAnimSegment();
SoHAnimSegment463->setDEF(QString("hanim_l_eyebrow"));
SoHAnimSegment463->X3DNode::setName(QString("l_eyebrow"));
SoTransform* SoTransform464 = new SoTransform();
SoTransform464->setTranslation(new float[]{0.9666,61.93,4.753});
SoShape* SoShape465 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance466 = new SoVRMLAppearance();
SoMaterial* SoMaterial467 = new SoMaterial();
SoMaterial467->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance466->addChild(*SoMaterial467);

SoImageTexture* SoImageTexture468 = new SoImageTexture();
SoImageTexture468->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance466->addChild(*SoImageTexture468);

SoShape465->addChild(*SoVRMLAppearance466);

SoIndexedFaceSet* SoIndexedFaceSet469 = new SoIndexedFaceSet();
SoIndexedFaceSet469->setCreaseAngle(3.14159);
SoIndexedFaceSet469->setTexCoordIndex(new int32_t[]{0,20,21,-1,21,7,0,-1,3,1,8,-1,8,10,3,-1,1,0,7,-1,7,8,1,-1,0,4,5,-1,5,20,0,-1,3,6,1,-1,1,6,4,-1,4,0,1,-1,5,4,11,-1,11,12,5,-1,2,5,12,-1,12,14,2,-1,6,3,15,-1,15,16,6,-1,4,6,16,-1,16,11,4,-1,8,7,13,-1,13,17,8,-1,21,22,13,-1,13,7,21,-1,9,2,14,-1,14,18,9,-1,3,10,19,-1,19,15,3,-1,10,8,17,-1,17,19,10,-1,20,2,9,-1,9,21,20,-1,5,2,20,-1,21,9,18,-1,18,22,21,-1}, 136);
SoIndexedFaceSet469->setCoordIndex(new int32_t[]{2,20,21,-1,21,7,2,-1,4,3,8,-1,8,10,4,-1,3,2,7,-1,7,8,3,-1,2,1,5,-1,5,20,2,-1,4,6,3,-1,3,6,1,-1,1,2,3,-1,5,1,12,-1,12,14,5,-1,0,5,14,-1,14,11,0,-1,6,4,13,-1,13,15,6,-1,1,6,15,-1,15,12,1,-1,8,7,16,-1,16,17,8,-1,21,22,16,-1,16,7,21,-1,9,0,11,-1,11,18,9,-1,4,10,19,-1,19,13,4,-1,10,8,17,-1,17,19,10,-1,20,0,9,-1,9,21,20,-1,5,0,20,-1,21,9,18,-1,18,22,21,-1}, 136);
SoTextureCoordinate* SoTextureCoordinate470 = new SoTextureCoordinate();
SoTextureCoordinate470->setPoint(new float[]{0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417}, 46);
SoIndexedFaceSet469->setTexCoord(*SoTextureCoordinate470);

SoCoordinate* SoCoordinate471 = new SoCoordinate();
SoCoordinate471->setPoint(new float[]{-0.3218,-0.2298,0.7043,1.083,0.5974,0.3796,1.096,0.4225,0.3238,2.278,0.6308,-0.5919,2.889,0.6602,-1.322,0.1489,0.2892,0.6667,2.301,0.7666,-0.6065,1.117,0.2554,0.2024,2.208,0.4503,-0.6419,-0.2543,-0.2957,0.5866,2.872,0.5692,-1.343,-0.2774,-0.216,0.4476,1.079,0.5765,0.1724,2.807,0.6568,-1.386,0.1761,0.2697,0.4332,2.269,0.7395,-0.7309,1.111,0.2424,0.0098,2.17,0.434,-0.7637,-0.2034,-0.285,0.3399,2.78,0.5442,-1.406,0.2769,0.1224,0.5591,0.3788,-0.0007,0.4194,0.3389,-0.0414,0.2053}, 69);
SoIndexedFaceSet469->setCoord(*SoCoordinate471);

SoShape465->setGeometry(*SoIndexedFaceSet469);

SoTransform464->addChild(*SoShape465);

SoHAnimSegment463->addChild(*SoTransform464);

SoHAnimJoint462->addChildren(*SoHAnimSegment463);

SoHAnimJoint412->addChildren(*SoHAnimJoint462);

SoHAnimJoint* SoHAnimJoint472 = new SoHAnimJoint();
SoHAnimJoint472->setDEF(QString("hanim_r_eyebrow_joint"));
SoHAnimJoint472->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint472->setCenter(new float[]{-0.9666,61.93,4.753});
SoHAnimSegment* SoHAnimSegment473 = new SoHAnimSegment();
SoHAnimSegment473->setDEF(QString("hanim_r_eyebrow"));
SoHAnimSegment473->X3DNode::setName(QString("r_eyebrow"));
SoTransform* SoTransform474 = new SoTransform();
SoTransform474->setTranslation(new float[]{-0.9666,61.93,4.753});
SoShape* SoShape475 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance476 = new SoVRMLAppearance();
SoMaterial* SoMaterial477 = new SoMaterial();
SoMaterial477->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance476->addChild(*SoMaterial477);

SoImageTexture* SoImageTexture478 = new SoImageTexture();
SoImageTexture478->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance476->addChild(*SoImageTexture478);

SoShape475->addChild(*SoVRMLAppearance476);

SoIndexedFaceSet* SoIndexedFaceSet479 = new SoIndexedFaceSet();
SoIndexedFaceSet479->setCreaseAngle(3.14159);
SoIndexedFaceSet479->setTexCoordIndex(new int32_t[]{0,7,21,-1,21,20,0,-1,3,10,8,-1,8,1,3,-1,1,8,7,-1,7,0,1,-1,0,20,5,-1,5,4,0,-1,3,1,6,-1,1,0,4,-1,4,6,1,-1,5,12,11,-1,11,4,5,-1,2,14,12,-1,12,5,2,-1,6,16,15,-1,15,3,6,-1,4,11,16,-1,16,6,4,-1,8,17,13,-1,13,7,8,-1,21,7,13,-1,13,22,21,-1,9,18,14,-1,14,2,9,-1,3,15,19,-1,19,10,3,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,2,20,-1,5,20,2,-1,21,22,18,-1,18,9,21,-1}, 136);
SoIndexedFaceSet479->setCoordIndex(new int32_t[]{2,7,21,-1,21,20,2,-1,4,10,8,-1,8,3,4,-1,3,8,7,-1,7,2,3,-1,2,20,5,-1,5,1,2,-1,4,3,6,-1,3,2,1,-1,1,6,3,-1,5,14,12,-1,12,1,5,-1,0,11,14,-1,14,5,0,-1,6,15,13,-1,13,4,6,-1,1,12,15,-1,15,6,1,-1,8,17,16,-1,16,7,8,-1,21,7,16,-1,16,22,21,-1,9,18,11,-1,11,0,9,-1,4,13,19,-1,19,10,4,-1,10,19,17,-1,17,8,10,-1,20,21,9,-1,9,0,20,-1,5,20,0,-1,21,22,18,-1,18,9,21,-1}, 136);
SoTextureCoordinate* SoTextureCoordinate480 = new SoTextureCoordinate();
SoTextureCoordinate480->setPoint(new float[]{0.344,0.8611,0.3991,0.8726,0.2757,0.8301,0.4299,0.8749,0.3424,0.8703,0.297,0.8558,0.4,0.8788,0.3445,0.8554,0.397,0.8649,0.2794,0.8281,0.4294,0.8703,0.3456,0.8724,0.3008,0.857,0.3469,0.8565,0.2795,0.829,0.4293,0.8745,0.3996,0.8793,0.3963,0.8659,0.2847,0.831,0.4284,0.8697,0.3046,0.8466,0.3082,0.8407,0.3105,0.8417}, 46);
SoIndexedFaceSet479->setTexCoord(*SoTextureCoordinate480);

SoCoordinate* SoCoordinate481 = new SoCoordinate();
SoCoordinate481->setPoint(new float[]{0.3218,-0.2298,0.7043,-1.083,0.5974,0.3796,-1.096,0.4225,0.3238,-2.278,0.6308,-0.5919,-2.889,0.6602,-1.322,-0.1489,0.2892,0.6667,-2.301,0.7666,-0.6065,-1.117,0.2554,0.2024,-2.208,0.4503,-0.6419,0.2543,-0.2957,0.5866,-2.872,0.5692,-1.343,0.2774,-0.216,0.4476,-1.079,0.5765,0.1724,-2.807,0.6568,-1.386,-0.1761,0.2697,0.4332,-2.269,0.7395,-0.7309,-1.111,0.2424,0.0098,-2.17,0.434,-0.7637,0.2034,-0.285,0.3399,-2.78,0.5442,-1.406,-0.2769,0.1224,0.5591,-0.3788,-0.0007,0.4194,-0.3389,-0.0414,0.2053}, 69);
SoIndexedFaceSet479->setCoord(*SoCoordinate481);

SoShape475->setGeometry(*SoIndexedFaceSet479);

SoTransform474->addChild(*SoShape475);

SoHAnimSegment473->addChild(*SoTransform474);

SoHAnimJoint472->addChildren(*SoHAnimSegment473);

SoHAnimJoint412->addChildren(*SoHAnimJoint472);

SoHAnimJoint* SoHAnimJoint482 = new SoHAnimJoint();
SoHAnimJoint482->setDEF(QString("hanim_temporomandibular"));
SoHAnimJoint482->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint482->setCenter(new float[]{0.0,57.45,0.6835});
SoHAnimSegment* SoHAnimSegment483 = new SoHAnimSegment();
SoHAnimSegment483->setDEF(QString("hanim_jaw"));
SoHAnimSegment483->X3DNode::setName(QString("jaw"));
SoTransform* SoTransform484 = new SoTransform();
SoTransform484->setTranslation(new float[]{0.0,57.45,0.6835});
SoShape* SoShape485 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance486 = new SoVRMLAppearance();
SoMaterial* SoMaterial487 = new SoMaterial();
SoMaterial487->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance486->addChild(*SoMaterial487);

SoImageTexture* SoImageTexture488 = new SoImageTexture();
SoImageTexture488->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance486->addChild(*SoImageTexture488);

SoShape485->addChild(*SoVRMLAppearance486);

SoIndexedFaceSet* SoIndexedFaceSet489 = new SoIndexedFaceSet();
SoIndexedFaceSet489->setCreaseAngle(3.14159);
SoIndexedFaceSet489->setTexCoordIndex(new int32_t[]{0,2,3,-1,4,5,6,-1,5,4,7,-1,7,4,3,-1,7,3,2,-1,1,0,0,-1,0,8,1,-1,7,2,2,-1,2,9,16,-1,7,2,16,-1,5,13,14,-1,14,6,5,-1,7,15,13,-1,13,5,7,-1,11,12,17,-1,17,10,11,-1,18,19,11,-1,11,10,18,-1,0,20,2,-1,2,20,21,-1,21,2,2,-1,0,22,2,-1,23,25,24,-1,24,26,23,-1,26,22,23,-1,26,2,22,-1,27,28,0,-1,0,0,27,-1,30,29,2,-1,26,30,2,-1,26,2,2,-1,24,25,32,-1,32,31,24,-1,26,24,31,-1,31,33,26,-1,35,34,37,-1,37,36,35,-1,38,34,35,-1,35,39,38,-1,0,2,40,-1,2,2,41,-1,41,40,2,-1}, 168);
SoIndexedFaceSet489->setCoordIndex(new int32_t[]{0,2,12,-1,13,3,15,-1,3,13,4,-1,4,13,12,-1,4,12,2,-1,1,0,18,-1,18,9,1,-1,4,2,10,-1,10,6,8,-1,4,10,8,-1,3,7,24,-1,24,15,3,-1,4,8,7,-1,7,3,4,-1,5,26,24,-1,24,7,5,-1,8,6,5,-1,5,7,8,-1,0,1,2,-1,2,1,9,-1,9,10,2,-1,0,12,11,-1,13,15,14,-1,14,16,13,-1,16,12,13,-1,16,11,12,-1,17,19,18,-1,18,0,17,-1,22,21,20,-1,16,22,20,-1,16,20,11,-1,14,15,24,-1,24,23,14,-1,16,14,23,-1,23,22,16,-1,25,23,24,-1,24,26,25,-1,22,23,25,-1,25,21,22,-1,0,11,17,-1,11,20,19,-1,19,17,11,-1}, 168);
SoTextureCoordinate* SoTextureCoordinate490 = new SoTextureCoordinate();
SoTextureCoordinate490->setPoint(new float[]{0.2448,0.6067,0.3051,0.6166,0.2959,0.6259,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3007,0.651,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166,0.2442,0.6234,0.2438,0.6465,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.3051,0.6166,0.3051,0.6166,0.3007,0.651,0.3007,0.651,0.2546,0.6556,0.2439,0.6556,0.3007,0.651,0.6104,0.6278,0.6104,0.661,0.6021,0.661,0.6021,0.6278,0.6425,0.6334,0.6294,0.6619,0.3051,0.6166,0.3051,0.6166}, 84);
SoIndexedFaceSet489->setTexCoord(*SoTextureCoordinate490);

SoCoordinate* SoCoordinate491 = new SoCoordinate();
SoCoordinate491->setPoint(new float[]{0.0,-1.317,2.914,1.252,-0.7221,2.383,1.083,-0.2249,3.164,0.2244,0.5712,4.007,1.184,0.4815,3.532,0.2244,1.038,1.387,1.073,1.14,1.338,0.2244,0.6336,3.483,1.09,0.6458,3.144,1.93,0.1375,0.7069,1.991,0.7184,0.9789,-1.083,-0.2249,3.164,0.0,-0.2295,3.585,0.0,0.1459,4.012,-0.2244,0.5712,4.007,0.0,0.5712,4.007,-1.184,0.4815,3.532,-1.252,-0.7221,2.383,0.0,-0.2922,0.9103,-1.93,0.1375,0.7069,-1.991,0.7184,0.9789,-1.073,1.14,1.338,-1.09,0.6458,3.144,-0.2244,0.6336,3.483,0.0,0.6336,3.483,-0.2244,1.038,1.387,0.0,0.9359,1.424}, 81);
SoIndexedFaceSet489->setCoord(*SoCoordinate491);

SoShape485->setGeometry(*SoIndexedFaceSet489);

SoTransform484->addChild(*SoShape485);

SoHAnimSegment483->addChild(*SoTransform484);

SoHAnimJoint482->addChildren(*SoHAnimSegment483);

SoHAnimJoint412->addChildren(*SoHAnimJoint482);

SoHAnimJoint402->addChildren(*SoHAnimJoint412);

SoHAnimJoint392->addChildren(*SoHAnimJoint402);

SoHAnimJoint382->addChildren(*SoHAnimJoint392);

SoHAnimJoint372->addChildren(*SoHAnimJoint382);

SoHAnimJoint362->addChildren(*SoHAnimJoint372);

SoHAnimJoint352->addChildren(*SoHAnimJoint362);

SoHAnimJoint342->addChildren(*SoHAnimJoint352);

SoHAnimJoint332->addChildren(*SoHAnimJoint342);

SoHAnimJoint* SoHAnimJoint492 = new SoHAnimJoint();
SoHAnimJoint492->setDEF(QString("hanim_l_sternoclavicular"));
SoHAnimJoint492->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint492->setCenter(new float[]{1.71,52.82,-0.6127});
SoHAnimSegment* SoHAnimSegment493 = new SoHAnimSegment();
SoHAnimSegment493->setDEF(QString("hanim_l_clavicle"));
SoHAnimSegment493->X3DNode::setName(QString("l_clavicle"));
SoTransform* SoTransform494 = new SoTransform();
SoTransform494->setTranslation(new float[]{1.71,52.82,-0.6127});
SoShape* SoShape495 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance496 = new SoVRMLAppearance();
SoMaterial* SoMaterial497 = new SoMaterial();
SoMaterial497->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance496->addChild(*SoMaterial497);

SoImageTexture* SoImageTexture498 = new SoImageTexture();
SoImageTexture498->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance496->addChild(*SoImageTexture498);

SoShape495->addChild(*SoVRMLAppearance496);

SoIndexedFaceSet* SoIndexedFaceSet499 = new SoIndexedFaceSet();
SoIndexedFaceSet499->setCreaseAngle(3.14159);
SoIndexedFaceSet499->setTexCoordIndex(new int32_t[]{9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1}, 104);
SoIndexedFaceSet499->setCoordIndex(new int32_t[]{9,6,1,-1,1,0,9,-1,6,5,2,-1,2,1,6,-1,8,3,2,-1,2,5,8,-1,8,7,4,-1,4,3,8,-1,9,0,4,-1,4,7,9,-1,2,3,4,-1,2,4,0,-1,1,2,0,-1,13,14,10,-1,12,13,10,-1,11,12,10,-1,6,9,11,-1,11,10,6,-1,9,7,12,-1,12,11,9,-1,7,8,13,-1,13,12,7,-1,8,5,14,-1,14,13,8,-1,5,6,10,-1,10,14,5,-1}, 104);
SoTextureCoordinate* SoTextureCoordinate500 = new SoTextureCoordinate();
SoTextureCoordinate500->setPoint(new float[]{0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926}, 30);
SoIndexedFaceSet499->setTexCoord(*SoTextureCoordinate500);

SoCoordinate* SoCoordinate501 = new SoCoordinate();
SoCoordinate501->setPoint(new float[]{4.99,0.104,-0.8644,5.073,0.4993,0.047,4.706,0.1695,1.198,4.631,-1.819,1.104,4.586,-1.648,-0.1248,3.376,0.3884,1.771,3.891,0.989,-0.0537,4.193,-2.49,-0.5713,4.388,-2.49,1.429,3.761,0.3238,-1.692,-0.1237,0.6312,-0.1883,-0.1237,0.3007,-0.9426,-0.1237,-1.418,-0.2577,-0.1237,-1.392,0.6264,-0.1237,0.2586,0.8179}, 45);
SoIndexedFaceSet499->setCoord(*SoCoordinate501);

SoShape495->setGeometry(*SoIndexedFaceSet499);

SoTransform494->addChild(*SoShape495);

SoHAnimSegment493->addChild(*SoTransform494);

SoHAnimJoint492->addChildren(*SoHAnimSegment493);

SoHAnimJoint* SoHAnimJoint502 = new SoHAnimJoint();
SoHAnimJoint502->setDEF(QString("hanim_l_acromioclavicular"));
SoHAnimJoint502->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint502->setCenter(new float[]{5.464,52.06,-0.5732});
SoHAnimSegment* SoHAnimSegment503 = new SoHAnimSegment();
SoHAnimSegment503->setDEF(QString("hanim_l_scapula"));
SoHAnimSegment503->X3DNode::setName(QString("l_scapula"));
SoTransform* SoTransform504 = new SoTransform();
SoTransform504->setTranslation(new float[]{5.464,52.06,-0.5732});
SoShape* SoShape505 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance506 = new SoVRMLAppearance();
SoMaterial* SoMaterial507 = new SoMaterial();
SoMaterial507->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance506->addChild(*SoMaterial507);

SoImageTexture* SoImageTexture508 = new SoImageTexture();
SoImageTexture508->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance506->addChild(*SoImageTexture508);

SoShape505->addChild(*SoVRMLAppearance506);

SoIndexedFaceSet* SoIndexedFaceSet509 = new SoIndexedFaceSet();
SoIndexedFaceSet509->setCreaseAngle(3.14159);
SoIndexedFaceSet509->setTexCoordIndex(new int32_t[]{5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,8,6,-1,6,2,3,-1,9,5,1,-1,1,7,9,-1,6,7,0,-1,0,2,6,-1,0,7,1,-1,12,13,11,-1,11,10,12,-1,4,5,15,-1,15,14,4,-1,5,9,16,-1,16,15,5,-1,13,12,17,-1,17,16,13,-1,8,3,18,-1,18,17,8,-1,3,4,14,-1,14,18,3,-1,14,15,19,-1,15,16,19,-1,16,17,19,-1,17,18,19,-1,18,14,19,-1}, 112);
SoIndexedFaceSet509->setCoordIndex(new int32_t[]{5,4,0,-1,0,1,5,-1,4,3,2,-1,2,0,4,-1,3,9,6,-1,6,2,3,-1,7,5,1,-1,1,8,7,-1,6,8,0,-1,0,2,6,-1,0,8,1,-1,9,7,8,-1,8,6,9,-1,4,5,11,-1,11,10,4,-1,5,7,12,-1,12,11,5,-1,7,9,13,-1,13,12,7,-1,9,3,14,-1,14,13,9,-1,3,4,10,-1,10,14,3,-1,10,11,15,-1,11,12,15,-1,12,13,15,-1,13,14,15,-1,14,10,15,-1}, 112);
SoTextureCoordinate* SoTextureCoordinate510 = new SoTextureCoordinate();
SoTextureCoordinate510->setPoint(new float[]{0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618}, 40);
SoIndexedFaceSet509->setTexCoord(*SoTextureCoordinate510);

SoCoordinate* SoCoordinate511 = new SoCoordinate();
SoCoordinate511->setPoint(new float[]{1.935,1.466,-0.0932,1.515,0.6492,-1.732,1.534,0.7105,1.619,-0.3782,1.139,1.732,0.1374,1.74,-0.0932,0.0076,1.074,-1.731,0.8341,-1.572,1.39,0.4391,-1.74,-0.6109,0.8275,-1.58,-0.6098,0.6342,-1.74,1.389,-1.237,1.407,-0.0712,-1.547,0.8515,-1.142,-0.7525,-1.603,-0.4744,-0.7511,-1.595,1.16,-1.51,1.034,1.296,-1.59,-0.0185,0.1351}, 48);
SoIndexedFaceSet509->setCoord(*SoCoordinate511);

SoShape505->setGeometry(*SoIndexedFaceSet509);

SoTransform504->addChild(*SoShape505);

SoHAnimSegment503->addChild(*SoTransform504);

SoHAnimJoint502->addChildren(*SoHAnimSegment503);

SoHAnimJoint* SoHAnimJoint512 = new SoHAnimJoint();
SoHAnimJoint512->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint512->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint512->setCenter(new float[]{7.336,51.48,-0.1452});
SoHAnimSegment* SoHAnimSegment513 = new SoHAnimSegment();
SoHAnimSegment513->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment513->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform514 = new SoTransform();
SoTransform514->setTranslation(new float[]{7.336,51.48,-0.1452});
SoShape* SoShape515 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance516 = new SoVRMLAppearance();
SoMaterial* SoMaterial517 = new SoMaterial();
SoMaterial517->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance516->addChild(*SoMaterial517);

SoImageTexture* SoImageTexture518 = new SoImageTexture();
SoImageTexture518->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance516->addChild(*SoImageTexture518);

SoShape515->addChild(*SoVRMLAppearance516);

SoIndexedFaceSet* SoIndexedFaceSet519 = new SoIndexedFaceSet();
SoIndexedFaceSet519->setCreaseAngle(3.14159);
SoIndexedFaceSet519->setTexCoordIndex(new int32_t[]{2,0,1,-1,3,2,1,-1,61,3,1,-1,1,0,5,-1,5,6,1,-1,0,2,7,-1,7,5,0,-1,2,3,8,-1,8,7,2,-1,25,4,9,-1,9,26,25,-1,4,1,6,-1,6,9,4,-1,6,5,10,-1,10,11,6,-1,5,7,12,-1,12,10,5,-1,7,8,13,-1,13,12,7,-1,27,9,14,-1,14,28,27,-1,9,6,11,-1,11,14,9,-1,11,10,15,-1,15,16,11,-1,10,12,17,-1,17,15,10,-1,12,13,18,-1,18,17,12,-1,29,14,19,-1,19,30,29,-1,14,11,16,-1,16,19,14,-1,54,35,36,-1,53,54,36,-1,37,53,36,-1,20,21,16,-1,16,15,20,-1,22,20,15,-1,15,17,22,-1,23,22,17,-1,17,18,23,-1,24,32,31,-1,31,19,24,-1,21,24,19,-1,19,16,21,-1,40,41,38,-1,38,39,40,-1,43,56,55,-1,55,42,43,-1,45,43,42,-1,42,44,45,-1,47,45,44,-1,44,46,47,-1,41,47,46,-1,46,38,41,-1,48,49,41,-1,41,40,48,-1,50,58,57,-1,57,43,50,-1,51,50,43,-1,43,45,51,-1,52,51,45,-1,45,47,52,-1,49,52,47,-1,47,41,49,-1,34,33,49,-1,49,48,34,-1,35,60,59,-1,59,50,35,-1,36,35,50,-1,50,51,36,-1,37,36,51,-1,51,52,37,-1,33,37,52,-1,52,49,33,-1}, 304);
SoIndexedFaceSet519->setCoordIndex(new int32_t[]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,36,37,38,-1,35,36,38,-1,39,35,38,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1,26,25,20,-1,20,21,26,-1,27,26,21,-1,21,22,27,-1,28,27,22,-1,22,23,28,-1,29,28,23,-1,23,24,29,-1,25,29,24,-1,24,20,25,-1,31,30,25,-1,25,26,31,-1,32,31,26,-1,26,27,32,-1,33,32,27,-1,27,28,33,-1,34,33,28,-1,28,29,34,-1,30,34,29,-1,29,25,30,-1,36,35,30,-1,30,31,36,-1,37,36,31,-1,31,32,37,-1,38,37,32,-1,32,33,38,-1,39,38,33,-1,33,34,39,-1,35,39,34,-1,34,30,35,-1}, 304);
SoTextureCoordinate* SoTextureCoordinate520 = new SoTextureCoordinate();
SoTextureCoordinate520->setPoint(new float[]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114}, 124);
SoIndexedFaceSet519->setTexCoord(*SoTextureCoordinate520);

SoCoordinate* SoCoordinate521 = new SoCoordinate();
SoCoordinate521->setPoint(new float[]{1.164,1.767,-1.68,2.32,1.756,0.0337,1.047,1.768,1.663,-0.895,1.785,0.9556,-0.8229,1.784,-1.11,1.382,0.4997,-2.31,2.978,0.4855,0.057,1.221,0.5011,2.307,-1.462,0.525,1.33,-1.362,0.5241,-1.523,1.36,-2.014,-2.31,2.956,-2.028,0.057,1.198,-2.012,2.307,-1.484,-1.988,1.33,-1.384,-1.989,-1.523,1.398,-3.089,-2.442,3.087,-3.104,0.0619,1.228,-3.087,2.442,-1.61,-3.062,1.409,-1.505,-3.063,-1.61,0.8845,-1.238,-1.939,2.105,-1.248,-0.4543,1.473,-1.243,1.629,-0.1375,-1.229,1.432,-0.5011,-1.225,-0.7734,0.9027,-7.045,-1.569,2.17,-7.056,-0.378,1.514,-7.051,1.293,-0.1588,-7.036,1.135,-0.5365,-7.032,-0.634,0.9066,-11.1,-1.511,2.127,-11.11,-0.3651,1.495,-11.1,1.243,-0.1154,-11.09,1.091,-0.4791,-11.08,-0.6115,0.852,-11.65,-0.8985,1.567,-11.65,-0.2267,1.197,-11.65,0.716,0.2531,-11.64,0.6268,0.0399,-11.64,-0.3711}, 120);
SoIndexedFaceSet519->setCoord(*SoCoordinate521);

SoShape515->setGeometry(*SoIndexedFaceSet519);

SoTransform514->addChild(*SoShape515);

SoHAnimSegment513->addChild(*SoTransform514);

SoHAnimJoint512->addChildren(*SoHAnimSegment513);

SoHAnimJoint* SoHAnimJoint522 = new SoHAnimJoint();
SoHAnimJoint522->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint522->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint522->setCenter(new float[]{8.093,40.38,-0.2502});
SoHAnimSegment* SoHAnimSegment523 = new SoHAnimSegment();
SoHAnimSegment523->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment523->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform524 = new SoTransform();
SoTransform524->setTranslation(new float[]{8.093,40.38,-0.2502});
SoShape* SoShape525 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance526 = new SoVRMLAppearance();
SoMaterial* SoMaterial527 = new SoMaterial();
SoMaterial527->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance526->addChild(*SoMaterial527);

SoImageTexture* SoImageTexture528 = new SoImageTexture();
SoImageTexture528->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance526->addChild(*SoImageTexture528);

SoShape525->addChild(*SoVRMLAppearance526);

SoIndexedFaceSet* SoIndexedFaceSet529 = new SoIndexedFaceSet();
SoIndexedFaceSet529->setCreaseAngle(3.14159);
SoIndexedFaceSet529->setTexCoordIndex(new int32_t[]{2,25,26,-1,3,2,26,-1,4,3,26,-1,0,1,6,-1,6,5,0,-1,27,2,7,-1,7,28,27,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,29,7,12,-1,12,30,29,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,31,12,17,-1,17,32,31,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,34,22,23,-1,33,34,23,-1,24,33,23,-1,21,20,15,-1,15,16,21,-1,22,36,35,-1,35,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1}, 184);
SoIndexedFaceSet529->setCoordIndex(new int32_t[]{2,1,0,-1,3,2,0,-1,4,3,0,-1,0,1,6,-1,6,5,0,-1,1,2,7,-1,7,6,1,-1,2,3,8,-1,8,7,2,-1,3,4,9,-1,9,8,3,-1,4,0,5,-1,5,9,4,-1,5,6,11,-1,11,10,5,-1,6,7,12,-1,12,11,6,-1,7,8,13,-1,13,12,7,-1,8,9,14,-1,14,13,8,-1,9,5,10,-1,10,14,9,-1,10,11,16,-1,16,15,10,-1,11,12,17,-1,17,16,11,-1,12,13,18,-1,18,17,12,-1,13,14,19,-1,19,18,13,-1,14,10,15,-1,15,19,14,-1,21,22,23,-1,20,21,23,-1,24,20,23,-1,21,20,15,-1,15,16,21,-1,22,21,16,-1,16,17,22,-1,23,22,17,-1,17,18,23,-1,24,23,18,-1,18,19,24,-1,20,24,19,-1,19,15,20,-1}, 184);
SoTextureCoordinate* SoTextureCoordinate530 = new SoTextureCoordinate();
SoTextureCoordinate530->setPoint(new float[]{0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674}, 74);
SoIndexedFaceSet529->setTexCoord(*SoTextureCoordinate530);

SoCoordinate* SoCoordinate531 = new SoCoordinate();
SoCoordinate531->setPoint(new float[]{0.215,0.3047,-1.152,1.155,0.2966,-0.2588,0.6199,0.3013,1.04,-0.6505,0.3122,0.9491,-0.9008,0.3143,-0.4054,0.1442,-0.8448,-1.625,1.472,-0.8561,-0.4271,0.7164,-0.8496,1.625,-1.079,-0.8342,1.482,-1.433,-0.8312,-0.6588,0.1328,-3.5,-1.607,1.551,-3.513,-0.4225,0.781,-2.925,1.61,-1.136,-2.909,1.468,-1.551,-3.486,-0.6519,0.0592,-8.713,-1.437,1.093,-8.722,-0.1279,0.5047,-8.716,1.51,-0.8932,-8.704,1.377,-1.169,-8.702,-0.3428,0.0092,-9.336,-0.8855,0.7154,-9.342,0.0084,0.3135,-9.339,1.043,-0.6412,-9.331,0.9519,-0.8292,-9.329,-0.1383}, 75);
SoIndexedFaceSet529->setCoord(*SoCoordinate531);

SoShape525->setGeometry(*SoIndexedFaceSet529);

SoTransform524->addChild(*SoShape525);

SoHAnimSegment523->addChild(*SoTransform524);

SoHAnimJoint522->addChildren(*SoHAnimSegment523);

SoHAnimJoint* SoHAnimJoint532 = new SoHAnimJoint();
SoHAnimJoint532->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint532->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint532->setCenter(new float[]{7.899,31.43,-0.3809});
SoHAnimSegment* SoHAnimSegment533 = new SoHAnimSegment();
SoHAnimSegment533->setDEF(QString("hanim_l_carpal"));
SoHAnimSegment533->X3DNode::setName(QString("l_carpal"));
SoTransform* SoTransform534 = new SoTransform();
SoTransform534->setTranslation(new float[]{7.899,31.43,-0.3809});
SoShape* SoShape535 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance536 = new SoVRMLAppearance();
SoMaterial* SoMaterial537 = new SoMaterial();
SoMaterial537->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance536->addChild(*SoMaterial537);

SoImageTexture* SoImageTexture538 = new SoImageTexture();
SoImageTexture538->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance536->addChild(*SoImageTexture538);

SoShape535->addChild(*SoVRMLAppearance536);

SoIndexedFaceSet* SoIndexedFaceSet539 = new SoIndexedFaceSet();
SoIndexedFaceSet539->setCreaseAngle(3.14159);
SoIndexedFaceSet539->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,6,-1,8,9,10,-1,10,7,8,-1,12,13,14,-1,14,11,12,-1,14,13,15,-1,15,16,14,-1,17,18,11,-1,11,14,17,-1,20,21,22,-1,22,19,20,-1,23,24,25,-1,7,26,27,-1,20,17,14,-1,14,16,20,-1,28,24,29,-1,29,30,28,-1,21,31,32,-1,32,22,21,-1,33,26,10,-1,10,34,33,-1,35,36,31,-1,31,21,35,-1,32,37,38,-1,38,22,32,-1,39,31,36,-1,36,15,39,-1,39,25,24,-1,24,28,39,-1,40,41,3,-1,3,2,40,-1,42,27,18,-1,19,43,27,-1,27,42,19,-1,44,7,43,-1,43,38,44,-1,45,6,29,-1,29,23,45,-1,20,16,35,-1,35,21,20,-1,29,8,30,-1,30,37,32,-1,32,28,30,-1,31,39,28,-1,28,32,31,-1,7,44,46,-1,46,8,7,-1,36,35,16,-1,16,15,36,-1,15,13,25,-1,25,39,15,-1,25,13,12,-1,12,23,25,-1,20,19,42,-1,42,17,20,-1,17,42,18,-1,47,45,48,-1,48,49,47,-1,23,50,48,-1,48,45,23,-1,23,12,51,-1,51,50,23,-1,12,11,52,-1,52,51,12,-1,18,53,52,-1,52,11,18,-1,18,47,49,-1,49,53,18,-1,46,44,38,-1,38,37,46,-1,22,38,43,-1,43,19,22,-1,30,8,46,-1,46,37,30,-1,33,4,54,-1,54,26,33,-1,29,24,23,-1,33,34,5,-1,5,4,33,-1,47,18,54,-1,54,4,47,-1,5,9,29,-1,29,9,8,-1,5,34,9,-1,1,0,49,-1,49,48,1,-1,50,2,1,-1,1,48,50,-1,40,2,50,-1,50,51,40,-1,41,40,51,-1,51,52,41,-1,53,3,41,-1,41,52,53,-1,0,3,53,-1,53,49,0,-1,18,27,54,-1,54,27,26,-1,10,26,7,-1,10,9,34,-1,6,5,29,-1,4,6,45,-1,45,47,4,-1,27,43,7,-1}, 424);
SoIndexedFaceSet539->setCoordIndex(new int32_t[]{36,37,38,-1,38,41,36,-1,44,45,54,-1,31,4,53,-1,53,30,31,-1,6,10,11,-1,11,7,6,-1,11,10,33,-1,33,32,11,-1,34,24,7,-1,7,11,34,-1,13,17,15,-1,15,27,13,-1,25,22,35,-1,30,5,20,-1,13,34,11,-1,11,32,13,-1,23,22,28,-1,28,29,23,-1,17,16,14,-1,14,15,17,-1,18,5,53,-1,53,19,18,-1,9,8,16,-1,16,17,9,-1,14,42,43,-1,43,15,14,-1,21,16,8,-1,8,33,21,-1,21,35,22,-1,22,23,21,-1,39,40,41,-1,41,38,39,-1,26,20,24,-1,27,12,20,-1,20,26,27,-1,3,30,12,-1,12,43,3,-1,0,54,28,-1,28,25,0,-1,13,32,9,-1,9,17,13,-1,28,31,29,-1,29,42,14,-1,14,23,29,-1,16,21,23,-1,23,14,16,-1,30,3,2,-1,2,31,30,-1,8,9,32,-1,32,33,8,-1,33,10,35,-1,35,21,33,-1,35,10,6,-1,6,25,35,-1,13,27,26,-1,26,34,13,-1,34,26,24,-1,1,0,47,-1,47,46,1,-1,25,48,47,-1,47,0,25,-1,25,6,49,-1,49,48,25,-1,6,7,50,-1,50,49,6,-1,24,51,50,-1,50,7,24,-1,24,1,46,-1,46,51,24,-1,2,3,43,-1,43,42,2,-1,15,43,12,-1,12,27,15,-1,29,31,2,-1,2,42,29,-1,18,44,52,-1,52,5,18,-1,28,22,25,-1,18,19,45,-1,45,44,18,-1,1,24,52,-1,52,44,1,-1,45,4,28,-1,28,4,31,-1,45,19,4,-1,37,36,46,-1,46,47,37,-1,48,38,37,-1,37,47,48,-1,39,38,48,-1,48,49,39,-1,40,39,49,-1,49,50,40,-1,51,41,40,-1,40,50,51,-1,36,41,51,-1,51,46,36,-1,24,20,52,-1,52,20,5,-1,53,5,30,-1,53,4,19,-1,54,45,28,-1,44,54,0,-1,0,1,44,-1,20,12,30,-1}, 424);
SoTextureCoordinate* SoTextureCoordinate540 = new SoTextureCoordinate();
SoTextureCoordinate540->setPoint(new float[]{0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628}, 110);
SoIndexedFaceSet539->setTexCoord(*SoTextureCoordinate540);

SoCoordinate* SoCoordinate541 = new SoCoordinate();
SoCoordinate541->setPoint(new float[]{0.615,-0.6885,1.418,-0.2519,-0.7698,1.606,0.894,-4.14,1.405,0.2357,-4.221,1.472,0.7106,-2.848,1.537,-0.2913,-2.795,1.561,0.3511,-0.9723,-1.085,-0.332,-1.036,-1.083,0.6255,-3.82,-1.576,0.076,-3.93,-1.587,0.5517,-2.055,-1.417,-0.1089,-2.163,-1.46,0.0149,-3.564,0.866,-0.0687,-3.436,-0.8707,0.9147,-4.192,-0.1153,0.2445,-4.253,-0.1554,0.7883,-4.028,-0.9461,0.1878,-4.111,-0.9619,-0.1749,-2.558,2.351,0.5105,-2.795,2.344,-0.1613,-2.264,1.005,0.8473,-3.286,-0.8304,0.9399,-2.17,-0.0115,0.979,-3.369,-0.052,-0.4715,-0.9186,0.2017,0.7286,-0.8328,0.1541,-0.1459,-2.365,0.1498,-0.0501,-3.575,-0.0433,0.969,-2.127,0.9718,0.9825,-3.348,0.8866,0.0909,-3.383,1.556,0.8371,-3.169,1.547,0.041,-3.318,-1.568,0.5921,-3.194,-1.578,-0.2264,-2.304,-0.7602,0.8375,-2.137,-0.8044,-0.2818,0.1713,1.187,0.2277,0.2301,1.179,0.2277,0.4881,0.2572,0.1331,0.2707,-0.6889,-0.3764,0.2118,-0.6809,-0.4614,0.4054,0.2565,0.9242,-4.241,0.7847,0.2647,-4.324,0.8047,-0.3043,-1.534,2.164,0.8425,-1.789,2.123,-0.201,-0.4603,1.254,0.3856,-0.405,1.248,0.4965,-0.283,0.2553,0.2563,-0.4079,-0.7647,-0.3314,-0.4586,-0.758,-0.3822,-0.3913,0.2697,-0.4485,-1.891,1.52,0.3893,-2.936,1.555,0.7623,-1.12,1.731}, 165);
SoIndexedFaceSet539->setCoord(*SoCoordinate541);

SoShape535->setGeometry(*SoIndexedFaceSet539);

SoTransform534->addChild(*SoShape535);

SoHAnimSegment533->addChild(*SoTransform534);

SoHAnimJoint532->addChildren(*SoHAnimSegment533);

SoHAnimJoint* SoHAnimJoint542 = new SoHAnimJoint();
SoHAnimJoint542->setDEF(QString("hanim_l_carpometacarpal_1"));
SoHAnimJoint542->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint542->setCenter(new float[]{8.205,29.6,1.302});
SoHAnimSegment* SoHAnimSegment543 = new SoHAnimSegment();
SoHAnimSegment543->setDEF(QString("hanim_l_metacarpal_1"));
SoHAnimSegment543->X3DNode::setName(QString("l_metacarpal_1"));
SoTransform* SoTransform544 = new SoTransform();
SoTransform544->setTranslation(new float[]{8.205,29.6,1.302});
SoShape* SoShape545 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance546 = new SoVRMLAppearance();
SoMaterial* SoMaterial547 = new SoMaterial();
SoMaterial547->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance546->addChild(*SoMaterial547);

SoImageTexture* SoImageTexture548 = new SoImageTexture();
SoImageTexture548->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance546->addChild(*SoImageTexture548);

SoShape545->addChild(*SoVRMLAppearance546);

SoIndexedFaceSet* SoIndexedFaceSet549 = new SoIndexedFaceSet();
SoIndexedFaceSet549->setCreaseAngle(3.14159);
SoIndexedFaceSet549->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet549->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate550 = new SoTextureCoordinate();
SoTextureCoordinate550->setPoint(new float[]{0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648}, 74);
SoIndexedFaceSet549->setTexCoord(*SoTextureCoordinate550);

SoCoordinate* SoCoordinate551 = new SoCoordinate();
SoCoordinate551->setPoint(new float[]{-0.375,-0.9214,0.322,-0.212,-1.009,0.0858,-0.1385,-0.9095,0.5036,0.0245,-0.9973,0.2674,-0.533,-0.8014,0.1471,-0.4779,-0.7267,0.4605,-0.2413,-0.7148,0.6421,0.0584,-0.7717,0.6012,0.2213,-0.8595,0.365,0.1662,-0.9342,0.0516,-0.0704,-0.9461,-0.13,-0.3701,-0.8892,-0.0891,-0.4847,-0.0791,-0.0791,-0.4228,0.0048,0.2724,-0.1414,0.0189,0.4885,0.1948,-0.0449,0.4426,0.3887,-0.1493,0.1616,0.3268,-0.2331,-0.1899,0.0453,-0.2473,-0.406,-0.2908,-0.1835,-0.3601,-0.5058,0.0372,-0.1235,-0.4385,0.1283,0.2586,-0.1325,0.1437,0.4936,0.233,0.0743,0.4437,0.4438,-0.0392,0.1381,0.3765,-0.1303,-0.244,0.0705,-0.1457,-0.479,-0.2949,-0.0763,-0.4291,-0.3497,0.1392,-0.1192,-0.3021,0.2036,0.1511,-0.0857,0.2145,0.3172,0.1727,0.1654,0.2819,0.3218,0.0852,0.0659,0.2742,0.0207,-0.2044,0.0578,0.0098,-0.3705,-0.2006,0.0589,-0.3352,-0.0069,0.159,-0.0407}, 111);
SoIndexedFaceSet549->setCoord(*SoCoordinate551);

SoShape545->setGeometry(*SoIndexedFaceSet549);

SoTransform544->addChild(*SoShape545);

SoHAnimSegment543->addChild(*SoTransform544);

SoHAnimJoint542->addChildren(*SoHAnimSegment543);

SoHAnimJoint* SoHAnimJoint552 = new SoHAnimJoint();
SoHAnimJoint552->setDEF(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimJoint552->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint552->setCenter(new float[]{8.08,28.73,1.55});
SoHAnimSegment* SoHAnimSegment553 = new SoHAnimSegment();
SoHAnimSegment553->setDEF(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimSegment553->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoTransform* SoTransform554 = new SoTransform();
SoTransform554->setTranslation(new float[]{8.08,28.73,1.55});
SoShape* SoShape555 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance556 = new SoVRMLAppearance();
SoMaterial* SoMaterial557 = new SoMaterial();
SoMaterial557->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance556->addChild(*SoMaterial557);

SoImageTexture* SoImageTexture558 = new SoImageTexture();
SoImageTexture558->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance556->addChild(*SoImageTexture558);

SoShape555->addChild(*SoVRMLAppearance556);

SoIndexedFaceSet* SoIndexedFaceSet559 = new SoIndexedFaceSet();
SoIndexedFaceSet559->setCreaseAngle(3.14159);
SoIndexedFaceSet559->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet559->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate560 = new SoTextureCoordinate();
SoTextureCoordinate560->setPoint(new float[]{0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566}, 74);
SoIndexedFaceSet559->setTexCoord(*SoTextureCoordinate560);

SoCoordinate* SoCoordinate561 = new SoCoordinate();
SoCoordinate561->setPoint(new float[]{-0.5258,-1.001,0.2196,-0.3901,-1.074,0.023,-0.3376,-1.029,0.3799,-0.2019,-1.102,0.1833,-0.6244,-0.8415,0.0751,-0.585,-0.8078,0.3428,-0.3968,-0.8361,0.503,-0.1539,-0.912,0.4758,-0.0182,-0.985,0.2792,-0.0576,-1.019,0.0115,-0.2458,-0.9905,-0.1487,-0.4887,-0.9145,-0.1215,-0.4357,-0.0607,-0.0712,-0.3915,-0.0229,0.229,-0.1676,-0.0565,0.4196,0.1048,-0.1417,0.3891,0.2662,-0.2286,0.1552,0.222,-0.2663,-0.1451,-0.0018,-0.2328,-0.3357,-0.2743,-0.1476,-0.3051,-0.4293,0.0682,-0.1026,-0.3812,0.1092,0.2242,-0.1376,0.0727,0.4317,0.1589,-0.02,0.3984,0.3346,-0.1146,0.1438,0.2865,-0.1556,-0.1829,0.0429,-0.1191,-0.3904,-0.2536,-0.0264,-0.3572,-0.2801,0.1629,-0.0879,-0.2461,0.1919,0.1432,-0.0738,0.1661,0.2899,0.1359,0.1005,0.2664,0.2601,0.0337,0.0864,0.2261,0.0046,-0.1447,0.0538,0.0304,-0.2914,-0.1558,0.096,-0.2679,0.0055,0.1486,-0.0096}, 111);
SoIndexedFaceSet559->setCoord(*SoCoordinate561);

SoShape555->setGeometry(*SoIndexedFaceSet559);

SoTransform554->addChild(*SoShape555);

SoHAnimSegment553->addChild(*SoTransform554);

SoHAnimJoint552->addChildren(*SoHAnimSegment553);

SoHAnimJoint* SoHAnimJoint562 = new SoHAnimJoint();
SoHAnimJoint562->setDEF(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimJoint562->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint562->setCenter(new float[]{7.832,27.85,1.735});
SoHAnimSegment* SoHAnimSegment563 = new SoHAnimSegment();
SoHAnimSegment563->setDEF(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimSegment563->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoTransform* SoTransform564 = new SoTransform();
SoTransform564->setTranslation(new float[]{7.832,27.85,1.735});
SoShape* SoShape565 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance566 = new SoVRMLAppearance();
SoMaterial* SoMaterial567 = new SoMaterial();
SoMaterial567->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance566->addChild(*SoMaterial567);

SoImageTexture* SoImageTexture568 = new SoImageTexture();
SoImageTexture568->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance566->addChild(*SoImageTexture568);

SoShape565->addChild(*SoVRMLAppearance566);

SoIndexedFaceSet* SoIndexedFaceSet569 = new SoIndexedFaceSet();
SoIndexedFaceSet569->setCreaseAngle(3.14159);
SoIndexedFaceSet569->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet569->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate570 = new SoTextureCoordinate();
SoTextureCoordinate570->setPoint(new float[]{0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648}, 58);
SoIndexedFaceSet569->setTexCoord(*SoTextureCoordinate570);

SoCoordinate* SoCoordinate571 = new SoCoordinate();
SoCoordinate571->setPoint(new float[]{-0.5817,-0.8003,0.0727,-0.4584,-0.8658,-0.106,-0.4372,-0.8552,0.2109,-0.314,-0.9207,0.0322,-0.6359,-0.6464,-0.0377,-0.62,-0.6384,0.2,-0.4756,-0.6933,0.3382,-0.2748,-0.7836,0.3078,-0.1516,-0.8492,0.1291,-0.1675,-0.8572,-0.1085,-0.3119,-0.8023,-0.2467,-0.5127,-0.712,-0.2163,-0.374,-0.0036,-0.0838,-0.3562,0.0054,0.1827,-0.1843,-0.0599,0.3471,0.0408,-0.1612,0.313,0.1875,-0.2392,0.1004,0.1697,-0.2482,-0.1661,-0.0022,-0.1829,-0.3305,-0.2274,-0.0816,-0.2964,-0.2142,0.1671,-0.0744,-0.2005,0.174,0.1306,-0.0683,0.1238,0.257,0.1048,0.0459,0.2308,0.2176,-0.0141,0.0673,0.2039,-0.021,-0.1376,0.0717,0.0292,-0.264,-0.1014,0.1072,-0.2378,0.0214,0.1175,-0.006}, 87);
SoIndexedFaceSet569->setCoord(*SoCoordinate571);

SoShape565->setGeometry(*SoIndexedFaceSet569);

SoTransform564->addChild(*SoShape565);

SoHAnimSegment563->addChild(*SoTransform564);

SoHAnimJoint562->addChildren(*SoHAnimSegment563);

SoHAnimJoint552->addChildren(*SoHAnimJoint562);

SoHAnimJoint542->addChildren(*SoHAnimJoint552);

SoHAnimJoint532->addChildren(*SoHAnimJoint542);

SoHAnimJoint* SoHAnimJoint572 = new SoHAnimJoint();
SoHAnimJoint572->setDEF(QString("hanim_l_carpometacarpal_2"));
SoHAnimJoint572->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint572->setCenter(new float[]{8.376,28.55,0.5997});
SoHAnimSegment* SoHAnimSegment573 = new SoHAnimSegment();
SoHAnimSegment573->setDEF(QString("hanim_l_metacarpal_2"));
SoHAnimSegment573->X3DNode::setName(QString("l_metacarpal_2"));
SoTransform* SoTransform574 = new SoTransform();
SoTransform574->setTranslation(new float[]{8.376,28.55,0.5997});
SoShape* SoShape575 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance576 = new SoVRMLAppearance();
SoMaterial* SoMaterial577 = new SoMaterial();
SoMaterial577->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance576->addChild(*SoMaterial577);

SoImageTexture* SoImageTexture578 = new SoImageTexture();
SoImageTexture578->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance576->addChild(*SoImageTexture578);

SoShape575->addChild(*SoVRMLAppearance576);

SoIndexedFaceSet* SoIndexedFaceSet579 = new SoIndexedFaceSet();
SoIndexedFaceSet579->setCreaseAngle(3.14159);
SoIndexedFaceSet579->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet579->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate580 = new SoTextureCoordinate();
SoTextureCoordinate580->setPoint(new float[]{0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533}, 74);
SoIndexedFaceSet579->setTexCoord(*SoTextureCoordinate580);

SoCoordinate* SoCoordinate581 = new SoCoordinate();
SoCoordinate581->setPoint(new float[]{-0.0229,-1.485,0.1659,-0.0277,-1.493,-0.0662,0.2213,-1.467,0.1625,0.2166,-1.475,-0.0696,-0.2194,-1.321,0.162,-0.0326,-1.302,0.3335,0.2116,-1.284,0.3301,0.3912,-1.276,0.1535,0.3864,-1.284,-0.0786,0.1997,-1.303,-0.2501,-0.0446,-1.321,-0.2467,-0.2242,-1.329,-0.0701,-0.3384,-0.3382,0.1488,-0.1289,-0.3166,0.3412,0.1617,-0.2951,0.3371,0.3631,-0.2862,0.139,0.3574,-0.2953,-0.1371,0.148,-0.3169,-0.3295,-0.1426,-0.3384,-0.3254,-0.3441,-0.3473,-0.1273,-0.3796,-0.1843,0.1553,-0.1523,-0.1608,0.364,0.1629,-0.1375,0.3596,0.3814,-0.1279,0.1446,0.3753,-0.1377,-0.1549,0.148,-0.1611,-0.3636,-0.1672,-0.1845,-0.3592,-0.3858,-0.1941,-0.1442,-0.2808,-0.0217,0.1042,-0.1201,-0.0051,0.2518,0.1029,0.0114,0.2486,0.2574,0.0182,0.0967,0.253,0.0113,-0.1151,0.0923,-0.0053,-0.2627,-0.1306,-0.0218,-0.2596,-0.2851,-0.0286,-0.1076,-0.0187,0.0593,-0.0078}, 111);
SoIndexedFaceSet579->setCoord(*SoCoordinate581);

SoShape575->setGeometry(*SoIndexedFaceSet579);

SoTransform574->addChild(*SoShape575);

SoHAnimSegment573->addChild(*SoTransform574);

SoHAnimJoint572->addChildren(*SoHAnimSegment573);

SoHAnimJoint* SoHAnimJoint582 = new SoHAnimJoint();
SoHAnimJoint582->setDEF(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimJoint582->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint582->setCenter(new float[]{8.52,27.24,0.6551});
SoHAnimSegment* SoHAnimSegment583 = new SoHAnimSegment();
SoHAnimSegment583->setDEF(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimSegment583->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoTransform* SoTransform584 = new SoTransform();
SoTransform584->setTranslation(new float[]{8.52,27.24,0.6551});
SoShape* SoShape585 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance586 = new SoVRMLAppearance();
SoMaterial* SoMaterial587 = new SoMaterial();
SoMaterial587->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance586->addChild(*SoMaterial587);

SoImageTexture* SoImageTexture588 = new SoImageTexture();
SoImageTexture588->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance586->addChild(*SoImageTexture588);

SoShape585->addChild(*SoVRMLAppearance586);

SoIndexedFaceSet* SoIndexedFaceSet589 = new SoIndexedFaceSet();
SoIndexedFaceSet589->setCreaseAngle(3.14159);
SoIndexedFaceSet589->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet589->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate590 = new SoTextureCoordinate();
SoTextureCoordinate590->setPoint(new float[]{0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412}, 74);
SoIndexedFaceSet589->setTexCoord(*SoTextureCoordinate590);

SoCoordinate* SoCoordinate591 = new SoCoordinate();
SoCoordinate591->setPoint(new float[]{-0.2499,-1.331,0.1644,-0.2541,-1.339,-0.0655,-0.0349,-1.351,0.1633,-0.0391,-1.359,-0.0666,-0.3958,-1.152,0.159,-0.2314,-1.162,0.3307,-0.0165,-1.182,0.3296,0.1416,-1.203,0.1563,0.1374,-1.21,-0.0736,-0.0269,-1.201,-0.2453,-0.2419,-1.181,-0.2442,-0.4,-1.16,-0.0709,-0.3504,-0.2375,0.1465,-0.166,-0.2482,0.3391,0.0897,-0.2722,0.3377,0.267,-0.2955,0.1434,0.2621,-0.3044,-0.1302,0.0777,-0.2937,-0.3227,-0.1781,-0.2697,-0.3214,-0.3554,-0.2464,-0.127,-0.3661,-0.0905,0.1542,-0.1642,-0.1021,0.365,0.1159,-0.1284,0.3636,0.3101,-0.1539,0.1508,0.3046,-0.1637,-0.1488,0.1027,-0.152,-0.3596,-0.1774,-0.1258,-0.3581,-0.3715,-0.1003,-0.1453,-0.2544,0.0426,0.1044,-0.1117,0.0344,0.2535,0.0864,0.0158,0.2525,0.2237,-0.0022,0.102,0.2198,-0.0091,-0.1098,0.077,-0.0009,-0.2589,-0.121,0.0177,-0.2579,-0.2583,0.0357,-0.1074,-0.0117,0.0763,-0.005}, 111);
SoIndexedFaceSet589->setCoord(*SoCoordinate591);

SoShape585->setGeometry(*SoIndexedFaceSet589);

SoTransform584->addChild(*SoShape585);

SoHAnimSegment583->addChild(*SoTransform584);

SoHAnimJoint582->addChildren(*SoHAnimSegment583);

SoHAnimJoint* SoHAnimJoint592 = new SoHAnimJoint();
SoHAnimJoint592->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint592->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint592->setCenter(new float[]{8.45,26.1,0.6956});
SoHAnimSegment* SoHAnimSegment593 = new SoHAnimSegment();
SoHAnimSegment593->setDEF(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimSegment593->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoTransform* SoTransform594 = new SoTransform();
SoTransform594->setTranslation(new float[]{8.45,26.1,0.6956});
SoShape* SoShape595 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance596 = new SoVRMLAppearance();
SoMaterial* SoMaterial597 = new SoMaterial();
SoMaterial597->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance596->addChild(*SoMaterial597);

SoImageTexture* SoImageTexture598 = new SoImageTexture();
SoImageTexture598->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance596->addChild(*SoImageTexture598);

SoShape595->addChild(*SoVRMLAppearance596);

SoIndexedFaceSet* SoIndexedFaceSet599 = new SoIndexedFaceSet();
SoIndexedFaceSet599->setCreaseAngle(3.14159);
SoIndexedFaceSet599->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet599->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate600 = new SoTextureCoordinate();
SoTextureCoordinate600->setPoint(new float[]{0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313}, 58);
SoIndexedFaceSet599->setTexCoord(*SoTextureCoordinate600);

SoCoordinate* SoCoordinate601 = new SoCoordinate();
SoCoordinate601->setPoint(new float[]{-0.4479,-1.125,0.1554,-0.4519,-1.132,-0.0632,-0.2499,-1.18,0.1557,-0.2539,-1.187,-0.0629,-0.5544,-0.9319,0.1491,-0.4029,-0.9674,0.3134,-0.2049,-1.022,0.3137,-0.0594,-1.068,0.1499,-0.0634,-1.075,-0.0687,-0.2149,-1.04,-0.2329,-0.4129,-0.9852,-0.2333,-0.5584,-0.939,-0.0695,-0.3333,-0.0803,0.1251,-0.1781,-0.1166,0.2933,0.037,-0.1758,0.2937,0.186,-0.2231,0.1259,0.1817,-0.2308,-0.1116,0.0265,-0.1945,-0.2799,-0.1886,-0.1353,-0.2802,-0.3376,-0.088,-0.1125,-0.2019,0.1709,0.088,-0.0815,0.1427,0.2185,0.0854,0.0967,0.2188,0.2011,0.06,0.0887,0.1977,0.054,-0.0957,0.0773,0.0822,-0.2262,-0.0896,0.1281,-0.2265,-0.2053,0.1648,-0.0963,0.0132,0.1679,-0.006}, 87);
SoIndexedFaceSet599->setCoord(*SoCoordinate601);

SoShape595->setGeometry(*SoIndexedFaceSet599);

SoTransform594->addChild(*SoShape595);

SoHAnimSegment593->addChild(*SoTransform594);

SoHAnimJoint592->addChildren(*SoHAnimSegment593);

SoHAnimJoint* SoHAnimJoint602 = new SoHAnimJoint();
SoHAnimJoint602->setDEF(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint602->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint602->setCenter(new float[]{8.192,25.17,0.7315});
SoHAnimSegment* SoHAnimSegment603 = new SoHAnimSegment();
SoHAnimSegment603->setDEF(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimSegment603->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoTransform* SoTransform604 = new SoTransform();
SoTransform604->setTranslation(new float[]{8.192,25.17,0.7315});
SoShape* SoShape605 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance606 = new SoVRMLAppearance();
SoMaterial* SoMaterial607 = new SoMaterial();
SoMaterial607->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance606->addChild(*SoMaterial607);

SoImageTexture* SoImageTexture608 = new SoImageTexture();
SoImageTexture608->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance606->addChild(*SoImageTexture608);

SoShape605->addChild(*SoVRMLAppearance606);

SoIndexedFaceSet* SoIndexedFaceSet609 = new SoIndexedFaceSet();
SoIndexedFaceSet609->setCreaseAngle(3.14159);
SoIndexedFaceSet609->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet609->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate610 = new SoTextureCoordinate();
SoTextureCoordinate610->setPoint(new float[]{0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218}, 58);
SoIndexedFaceSet609->setTexCoord(*SoTextureCoordinate610);

SoCoordinate* SoCoordinate611 = new SoCoordinate();
SoCoordinate611->setPoint(new float[]{-0.6187,-1.071,0.1411,-0.6221,-1.077,-0.0485,-0.4578,-1.147,0.1426,-0.4613,-1.153,-0.047,-0.6714,-0.8704,0.1341,-0.5482,-0.923,0.2774,-0.3873,-0.9993,0.2789,-0.2693,-1.061,0.1378,-0.2727,-1.067,-0.0518,-0.396,-1.015,-0.1951,-0.5568,-0.9385,-0.1966,-0.6749,-0.8765,-0.0555,-0.3236,-0.0612,0.1191,-0.1854,-0.1202,0.2799,0.006,-0.211,0.2816,0.1384,-0.2805,0.1233,0.1343,-0.2879,-0.1023,-0.004,-0.2288,-0.263,-0.1953,-0.138,-0.2647,-0.3277,-0.0685,-0.1065,-0.2135,0.0836,0.0963,-0.0945,0.035,0.233,0.0723,-0.0325,0.2317,0.1865,-0.0807,0.0968,0.1843,-0.0816,-0.0912,0.0691,-0.0336,-0.2249,-0.0937,0.0356,-0.2277,-0.2116,0.0844,-0.0958,0.0314,0.0875,-0.0035}, 87);
SoIndexedFaceSet609->setCoord(*SoCoordinate611);

SoShape605->setGeometry(*SoIndexedFaceSet609);

SoTransform604->addChild(*SoShape605);

SoHAnimSegment603->addChild(*SoTransform604);

SoHAnimJoint602->addChildren(*SoHAnimSegment603);

SoHAnimJoint592->addChildren(*SoHAnimJoint602);

SoHAnimJoint582->addChildren(*SoHAnimJoint592);

SoHAnimJoint572->addChildren(*SoHAnimJoint582);

SoHAnimJoint532->addChildren(*SoHAnimJoint572);

SoHAnimJoint* SoHAnimJoint612 = new SoHAnimJoint();
SoHAnimJoint612->setDEF(QString("hanim_l_carpometacarpal_3"));
SoHAnimJoint612->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint612->setCenter(new float[]{8.344,28.65,-0.194});
SoHAnimSegment* SoHAnimSegment613 = new SoHAnimSegment();
SoHAnimSegment613->setDEF(QString("hanim_l_metacarpal_3"));
SoHAnimSegment613->X3DNode::setName(QString("l_metacarpal_3"));
SoTransform* SoTransform614 = new SoTransform();
SoTransform614->setTranslation(new float[]{8.344,28.65,-0.194});
SoShape* SoShape615 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance616 = new SoVRMLAppearance();
SoMaterial* SoMaterial617 = new SoMaterial();
SoMaterial617->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance616->addChild(*SoMaterial617);

SoImageTexture* SoImageTexture618 = new SoImageTexture();
SoImageTexture618->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance616->addChild(*SoImageTexture618);

SoShape615->addChild(*SoVRMLAppearance616);

SoIndexedFaceSet* SoIndexedFaceSet619 = new SoIndexedFaceSet();
SoIndexedFaceSet619->setCreaseAngle(3.14159);
SoIndexedFaceSet619->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet619->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate620 = new SoTextureCoordinate();
SoTextureCoordinate620->setPoint(new float[]{0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537}, 74);
SoIndexedFaceSet619->setTexCoord(*SoTextureCoordinate620);

SoCoordinate* SoCoordinate621 = new SoCoordinate();
SoCoordinate621->setPoint(new float[]{0.0157,-1.601,0.0972,0.0217,-1.599,-0.1348,0.2598,-1.581,0.1076,0.2658,-1.578,-0.1245,-0.183,-1.427,0.091,-0.0045,-1.414,0.2728,0.2395,-1.393,0.2832,0.4271,-1.376,0.1169,0.4331,-1.374,-0.1151,0.2546,-1.387,-0.2969,0.0105,-1.408,-0.3073,-0.177,-1.425,-0.1411,-0.3164,-0.3793,0.1197,-0.1161,-0.3643,0.3236,0.1742,-0.3403,0.3359,0.3846,-0.3213,0.1495,0.3918,-0.3185,-0.1266,0.1915,-0.3335,-0.3306,-0.0988,-0.3575,-0.3429,-0.3092,-0.3765,-0.1564,-0.3602,-0.2157,0.1315,-0.143,-0.1995,0.3527,0.172,-0.1734,0.3661,0.4003,-0.1528,0.1638,0.408,-0.1498,-0.1357,0.1908,-0.166,-0.357,-0.1242,-0.1921,-0.3703,-0.3524,-0.2126,-0.168,-0.2615,-0.0399,0.0937,-0.1079,-0.0284,0.2501,0.1148,-0.01,0.2596,0.2762,0.0046,0.1165,0.2817,0.0068,-0.0952,0.1281,-0.0047,-0.2517,-0.0946,-0.0232,-0.2611,-0.256,-0.0377,-0.1181,0.0044,0.0523,-0.0002}, 111);
SoIndexedFaceSet619->setCoord(*SoCoordinate621);

SoShape615->setGeometry(*SoIndexedFaceSet619);

SoTransform614->addChild(*SoShape615);

SoHAnimSegment613->addChild(*SoTransform614);

SoHAnimJoint612->addChildren(*SoHAnimSegment613);

SoHAnimJoint* SoHAnimJoint622 = new SoHAnimJoint();
SoHAnimJoint622->setDEF(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimJoint622->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint622->setCenter(new float[]{8.52,27.26,-0.1959});
SoHAnimSegment* SoHAnimSegment623 = new SoHAnimSegment();
SoHAnimSegment623->setDEF(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimSegment623->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoTransform* SoTransform624 = new SoTransform();
SoTransform624->setTranslation(new float[]{8.52,27.26,-0.1959});
SoShape* SoShape625 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance626 = new SoVRMLAppearance();
SoMaterial* SoMaterial627 = new SoMaterial();
SoMaterial627->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance626->addChild(*SoMaterial627);

SoImageTexture* SoImageTexture628 = new SoImageTexture();
SoImageTexture628->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance626->addChild(*SoImageTexture628);

SoShape625->addChild(*SoVRMLAppearance626);

SoIndexedFaceSet* SoIndexedFaceSet629 = new SoIndexedFaceSet();
SoIndexedFaceSet629->setCreaseAngle(3.14159);
SoIndexedFaceSet629->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet629->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate630 = new SoTextureCoordinate();
SoTextureCoordinate630->setPoint(new float[]{0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407}, 74);
SoIndexedFaceSet629->setTexCoord(*SoTextureCoordinate630);

SoCoordinate* SoCoordinate631 = new SoCoordinate();
SoCoordinate631->setPoint(new float[]{-0.2259,-1.448,0.0923,-0.2194,-1.446,-0.1376,-0.0106,-1.469,0.1016,-0.0041,-1.467,-0.1283,-0.3742,-1.258,0.088,-0.2177,-1.275,0.2673,-0.0024,-1.296,0.2766,0.1639,-1.31,0.1112,0.1704,-1.307,-0.1187,0.0138,-1.29,-0.2981,-0.2014,-1.269,-0.3073,-0.3677,-1.255,-0.1419,-0.3422,-0.2825,0.1227,-0.1666,-0.302,0.3239,0.0895,-0.3267,0.3349,0.2761,-0.3422,0.1493,0.2838,-0.3394,-0.1242,0.1082,-0.3199,-0.3253,-0.1479,-0.2952,-0.3364,-0.3345,-0.2797,-0.1508,-0.3605,-0.1263,0.1367,-0.1681,-0.1476,0.357,0.1123,-0.1747,0.3691,0.3166,-0.1917,0.1659,0.3251,-0.1886,-0.1336,0.1327,-0.1672,-0.3539,-0.1477,-0.1401,-0.366,-0.352,-0.1232,-0.1627,-0.2486,0.0181,0.0994,-0.1126,0.003,0.2552,0.0857,-0.0161,0.2638,0.2302,-0.0281,0.1201,0.2362,-0.0259,-0.0917,0.1002,-0.0108,-0.2475,-0.0981,0.0083,-0.256,-0.2426,0.0203,-0.1123,-0.0014,0.0597,0.0048}, 111);
SoIndexedFaceSet629->setCoord(*SoCoordinate631);

SoShape625->setGeometry(*SoIndexedFaceSet629);

SoTransform624->addChild(*SoShape625);

SoHAnimSegment623->addChild(*SoTransform624);

SoHAnimJoint622->addChildren(*SoHAnimSegment623);

SoHAnimJoint* SoHAnimJoint632 = new SoHAnimJoint();
SoHAnimJoint632->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint632->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint632->setCenter(new float[]{8.477,26.07,-0.2214});
SoHAnimSegment* SoHAnimSegment633 = new SoHAnimSegment();
SoHAnimSegment633->setDEF(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimSegment633->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoTransform* SoTransform634 = new SoTransform();
SoTransform634->setTranslation(new float[]{8.477,26.07,-0.2214});
SoShape* SoShape635 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance636 = new SoVRMLAppearance();
SoMaterial* SoMaterial637 = new SoMaterial();
SoMaterial637->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance636->addChild(*SoMaterial637);

SoImageTexture* SoImageTexture638 = new SoImageTexture();
SoImageTexture638->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance636->addChild(*SoImageTexture638);

SoShape635->addChild(*SoVRMLAppearance636);

SoIndexedFaceSet* SoIndexedFaceSet639 = new SoIndexedFaceSet();
SoIndexedFaceSet639->setCreaseAngle(3.14159);
SoIndexedFaceSet639->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet639->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate640 = new SoTextureCoordinate();
SoTextureCoordinate640->setPoint(new float[]{0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301}, 58);
SoIndexedFaceSet639->setTexCoord(*SoTextureCoordinate640);

SoCoordinate* SoCoordinate641 = new SoCoordinate();
SoCoordinate641->setPoint(new float[]{-0.4389,-1.268,0.089,-0.4327,-1.265,-0.1296,-0.2401,-1.325,0.0971,-0.234,-1.323,-0.1215,-0.5481,-1.062,0.0865,-0.4036,-1.106,0.2566,-0.2049,-1.164,0.2647,-0.0512,-1.205,0.1068,-0.045,-1.203,-0.1118,-0.1894,-1.158,-0.2818,-0.3882,-1.101,-0.2899,-0.5419,-1.059,-0.132,-0.3388,-0.1526,0.1159,-0.1909,-0.1984,0.2901,0.025,-0.2608,0.2989,0.1825,-0.3032,0.1372,0.1892,-0.3008,-0.1003,0.0412,-0.2549,-0.2744,-0.1747,-0.1925,-0.2833,-0.3321,-0.1501,-0.1216,-0.2096,0.117,0.0982,-0.0948,0.0814,0.2333,0.0727,0.033,0.2402,0.1949,0.0001,0.1147,0.2001,0.002,-0.0696,0.0853,0.0376,-0.2048,-0.0823,0.086,-0.2116,-0.2044,0.1189,-0.0861,0.0097,0.1188,0.0156}, 87);
SoIndexedFaceSet639->setCoord(*SoCoordinate641);

SoShape635->setGeometry(*SoIndexedFaceSet639);

SoTransform634->addChild(*SoShape635);

SoHAnimSegment633->addChild(*SoTransform634);

SoHAnimJoint632->addChildren(*SoHAnimSegment633);

SoHAnimJoint* SoHAnimJoint642 = new SoHAnimJoint();
SoHAnimJoint642->setDEF(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint642->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint642->setCenter(new float[]{8.25,25.03,-0.2187});
SoHAnimSegment* SoHAnimSegment643 = new SoHAnimSegment();
SoHAnimSegment643->setDEF(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimSegment643->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoTransform* SoTransform644 = new SoTransform();
SoTransform644->setTranslation(new float[]{8.25,25.03,-0.2187});
SoShape* SoShape645 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance646 = new SoVRMLAppearance();
SoMaterial* SoMaterial647 = new SoMaterial();
SoMaterial647->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance646->addChild(*SoMaterial647);

SoImageTexture* SoImageTexture648 = new SoImageTexture();
SoImageTexture648->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance646->addChild(*SoImageTexture648);

SoShape645->addChild(*SoVRMLAppearance646);

SoIndexedFaceSet* SoIndexedFaceSet649 = new SoIndexedFaceSet();
SoIndexedFaceSet649->setCreaseAngle(3.14159);
SoIndexedFaceSet649->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet649->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate650 = new SoTextureCoordinate();
SoTextureCoordinate650->setPoint(new float[]{0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199}, 58);
SoIndexedFaceSet649->setTexCoord(*SoTextureCoordinate650);

SoCoordinate* SoCoordinate651 = new SoCoordinate();
SoCoordinate651->setPoint(new float[]{-0.631,-1.169,0.0421,-0.6256,-1.167,-0.1475,-0.4691,-1.25,0.0483,-0.4637,-1.248,-0.1413,-0.6864,-0.9557,0.0421,-0.569,-1.018,0.1889,-0.4071,-1.099,0.1951,-0.2817,-1.158,0.0576,-0.2763,-1.156,-0.1319,-0.3937,-1.094,-0.2788,-0.5556,-1.013,-0.285,-0.681,-0.9537,-0.1474,-0.3504,-0.0919,0.0851,-0.2187,-0.1616,0.2498,-0.026,-0.2579,0.2572,0.1147,-0.3243,0.1029,0.121,-0.322,-0.1226,-0.0106,-0.2523,-0.2873,-0.2033,-0.156,-0.2946,-0.344,-0.0896,-0.1404,-0.2414,0.0637,0.0753,-0.128,0.0061,0.2155,0.0399,-0.0652,0.2197,0.161,-0.1101,0.0888,0.1675,-0.1027,-0.0988,0.0577,-0.0458,-0.2359,-0.106,0.0275,-0.2439,-0.2307,0.0733,-0.1162,0.0079,0.0731,-0.0112}, 87);
SoIndexedFaceSet649->setCoord(*SoCoordinate651);

SoShape645->setGeometry(*SoIndexedFaceSet649);

SoTransform644->addChild(*SoShape645);

SoHAnimSegment643->addChild(*SoTransform644);

SoHAnimJoint642->addChildren(*SoHAnimSegment643);

SoHAnimJoint632->addChildren(*SoHAnimJoint642);

SoHAnimJoint622->addChildren(*SoHAnimJoint632);

SoHAnimJoint612->addChildren(*SoHAnimJoint622);

SoHAnimJoint532->addChildren(*SoHAnimJoint612);

SoHAnimJoint* SoHAnimJoint652 = new SoHAnimJoint();
SoHAnimJoint652->setDEF(QString("hanim_l_carpometacarpal_4"));
SoHAnimJoint652->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint652->setCenter(new float[]{8.339,28.57,-0.9243});
SoHAnimSegment* SoHAnimSegment653 = new SoHAnimSegment();
SoHAnimSegment653->setDEF(QString("hanim_l_metacarpal_4"));
SoHAnimSegment653->X3DNode::setName(QString("l_metacarpal_4"));
SoTransform* SoTransform654 = new SoTransform();
SoTransform654->setTranslation(new float[]{8.339,28.57,-0.9243});
SoShape* SoShape655 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance656 = new SoVRMLAppearance();
SoMaterial* SoMaterial657 = new SoMaterial();
SoMaterial657->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance656->addChild(*SoMaterial657);

SoImageTexture* SoImageTexture658 = new SoImageTexture();
SoImageTexture658->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance656->addChild(*SoImageTexture658);

SoShape655->addChild(*SoVRMLAppearance656);

SoIndexedFaceSet* SoIndexedFaceSet659 = new SoIndexedFaceSet();
SoIndexedFaceSet659->setCreaseAngle(3.14159);
SoIndexedFaceSet659->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet659->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate660 = new SoTextureCoordinate();
SoTextureCoordinate660->setPoint(new float[]{0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539}, 74);
SoIndexedFaceSet659->setTexCoord(*SoTextureCoordinate660);

SoCoordinate* SoCoordinate661 = new SoCoordinate();
SoCoordinate661->setPoint(new float[]{-0.014,-1.366,0.0295,-0.0298,-1.354,-0.1885,0.2211,-1.344,0.0143,0.2053,-1.332,-0.2037,-0.205,-1.209,0.0528,-0.0169,-1.202,0.2049,0.2182,-1.181,0.1897,0.3826,-1.156,0.0148,0.3668,-1.144,-0.2032,0.1787,-1.151,-0.3553,-0.0564,-1.172,-0.3401,-0.2209,-1.197,-0.1652,-0.3293,-0.2545,0.1423,-0.1183,-0.2468,0.3129,0.1614,-0.2216,0.2949,0.3458,-0.1936,0.0987,0.327,-0.1793,-0.1607,0.116,-0.187,-0.3313,-0.1637,-0.2122,-0.3132,-0.3482,-0.2402,-0.117,-0.3702,-0.1061,0.1656,-0.1412,-0.0977,0.3507,0.1622,-0.0704,0.3311,0.3623,-0.04,0.1183,0.3419,-0.0245,-0.1631,0.1129,-0.0329,-0.3482,-0.1905,-0.0602,-0.3286,-0.3906,-0.0905,-0.1158,-0.2788,0.0575,0.1279,-0.1169,0.0634,0.2588,0.0976,0.0827,0.2449,0.2391,0.1042,0.0944,0.2247,0.1152,-0.1045,0.0628,0.1093,-0.2354,-0.1518,0.0899,-0.2215,-0.2933,0.0685,-0.0711,-0.0325,0.1491,0.016}, 111);
SoIndexedFaceSet659->setCoord(*SoCoordinate661);

SoShape655->setGeometry(*SoIndexedFaceSet659);

SoTransform654->addChild(*SoShape655);

SoHAnimSegment653->addChild(*SoTransform654);

SoHAnimJoint652->addChildren(*SoHAnimSegment653);

SoHAnimJoint* SoHAnimJoint662 = new SoHAnimJoint();
SoHAnimJoint662->setDEF(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimJoint662->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint662->setCenter(new float[]{8.428,27.3,-0.9985});
SoHAnimSegment* SoHAnimSegment663 = new SoHAnimSegment();
SoHAnimSegment663->setDEF(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimSegment663->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoTransform* SoTransform664 = new SoTransform();
SoTransform664->setTranslation(new float[]{8.428,27.3,-0.9985});
SoShape* SoShape665 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance666 = new SoVRMLAppearance();
SoMaterial* SoMaterial667 = new SoMaterial();
SoMaterial667->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance666->addChild(*SoMaterial667);

SoImageTexture* SoImageTexture668 = new SoImageTexture();
SoImageTexture668->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance666->addChild(*SoImageTexture668);

SoShape665->addChild(*SoVRMLAppearance666);

SoIndexedFaceSet* SoIndexedFaceSet669 = new SoIndexedFaceSet();
SoIndexedFaceSet669->setCreaseAngle(3.14159);
SoIndexedFaceSet669->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet669->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate670 = new SoTextureCoordinate();
SoTextureCoordinate670->setPoint(new float[]{0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418}, 74);
SoIndexedFaceSet669->setTexCoord(*SoTextureCoordinate670);

SoCoordinate* SoCoordinate671 = new SoCoordinate();
SoCoordinate671->setPoint(new float[]{-0.1847,-1.253,0.0467,-0.1998,-1.241,-0.1693,0.0227,-1.271,0.0316,0.0076,-1.259,-0.1844,-0.3279,-1.08,0.0673,-0.161,-1.102,0.2179,0.0464,-1.12,0.2028,0.1906,-1.124,0.0295,0.1754,-1.112,-0.1865,0.0085,-1.09,-0.3372,-0.1989,-1.072,-0.3221,-0.3431,-1.068,-0.1487,-0.2967,-0.1902,0.1418,-0.1095,-0.215,0.3108,0.1373,-0.2358,0.2929,0.299,-0.2404,0.0984,0.281,-0.2262,-0.1586,0.0938,-0.2014,-0.3276,-0.153,-0.1807,-0.3096,-0.3147,-0.176,-0.1151,-0.3133,-0.0482,0.1642,-0.1083,-0.0753,0.3493,0.1619,-0.0981,0.3296,0.339,-0.1032,0.1167,0.3192,-0.0876,-0.1647,0.1142,-0.0605,-0.3498,-0.156,-0.0377,-0.3301,-0.3331,-0.0327,-0.1172,-0.2099,0.0863,0.1241,-0.0649,0.0671,0.255,0.1261,0.051,0.2411,0.2514,0.0474,0.0905,0.2374,0.0585,-0.1085,0.0924,0.0776,-0.2393,-0.0986,0.0937,-0.2254,-0.2239,0.0973,-0.0749,0.0182,0.1305,0.0112}, 111);
SoIndexedFaceSet669->setCoord(*SoCoordinate671);

SoShape665->setGeometry(*SoIndexedFaceSet669);

SoTransform664->addChild(*SoShape665);

SoHAnimSegment663->addChild(*SoTransform664);

SoHAnimJoint662->addChildren(*SoHAnimSegment663);

SoHAnimJoint* SoHAnimJoint672 = new SoHAnimJoint();
SoHAnimJoint672->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint672->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint672->setCenter(new float[]{8.428,26.29,-1.034});
SoHAnimSegment* SoHAnimSegment673 = new SoHAnimSegment();
SoHAnimSegment673->setDEF(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimSegment673->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoTransform* SoTransform674 = new SoTransform();
SoTransform674->setTranslation(new float[]{8.428,26.29,-1.034});
SoShape* SoShape675 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance676 = new SoVRMLAppearance();
SoMaterial* SoMaterial677 = new SoMaterial();
SoMaterial677->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance676->addChild(*SoMaterial677);

SoImageTexture* SoImageTexture678 = new SoImageTexture();
SoImageTexture678->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance676->addChild(*SoImageTexture678);

SoShape675->addChild(*SoVRMLAppearance676);

SoIndexedFaceSet* SoIndexedFaceSet679 = new SoIndexedFaceSet();
SoIndexedFaceSet679->setCreaseAngle(3.14159);
SoIndexedFaceSet679->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet679->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate680 = new SoTextureCoordinate();
SoTextureCoordinate680->setPoint(new float[]{0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323}, 58);
SoIndexedFaceSet679->setTexCoord(*SoTextureCoordinate680);

SoCoordinate* SoCoordinate681 = new SoCoordinate();
SoCoordinate681->setPoint(new float[]{-0.412,-1.137,0.0335,-0.4261,-1.125,-0.1679,-0.2243,-1.187,0.0176,-0.2385,-1.176,-0.1838,-0.5153,-0.9493,0.0522,-0.3639,-0.9958,0.1913,-0.1762,-1.047,0.1754,-0.0461,-1.076,0.0125,-0.0602,-1.065,-0.1888,-0.2116,-1.019,-0.3279,-0.3992,-0.9679,-0.312,-0.5294,-0.9381,-0.1491,-0.3178,-0.1177,0.1,-0.1627,-0.1653,0.2425,0.0412,-0.2206,0.2252,0.1745,-0.2511,0.0583,0.1591,-0.239,-0.1604,0.0041,-0.1914,-0.3029,-0.1998,-0.1361,-0.2856,-0.3331,-0.1056,-0.1188,-0.1985,0.1307,0.0829,-0.0782,0.0937,0.1934,0.08,0.0508,0.18,0.1835,0.0271,0.0505,0.1716,0.0365,-0.1192,0.0513,0.0735,-0.2298,-0.1069,0.1164,-0.2164,-0.2104,0.1401,-0.0869,0.0002,0.1379,-0.0157}, 87);
SoIndexedFaceSet679->setCoord(*SoCoordinate681);

SoShape675->setGeometry(*SoIndexedFaceSet679);

SoTransform674->addChild(*SoShape675);

SoHAnimSegment673->addChild(*SoTransform674);

SoHAnimJoint672->addChildren(*SoHAnimSegment673);

SoHAnimJoint* SoHAnimJoint682 = new SoHAnimJoint();
SoHAnimJoint682->setDEF(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint682->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint682->setCenter(new float[]{8.192,25.31,-1.124});
SoHAnimSegment* SoHAnimSegment683 = new SoHAnimSegment();
SoHAnimSegment683->setDEF(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimSegment683->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoTransform* SoTransform684 = new SoTransform();
SoTransform684->setTranslation(new float[]{8.192,25.31,-1.124});
SoShape* SoShape685 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance686 = new SoVRMLAppearance();
SoMaterial* SoMaterial687 = new SoMaterial();
SoMaterial687->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance686->addChild(*SoMaterial687);

SoImageTexture* SoImageTexture688 = new SoImageTexture();
SoImageTexture688->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance686->addChild(*SoImageTexture688);

SoShape685->addChild(*SoVRMLAppearance686);

SoIndexedFaceSet* SoIndexedFaceSet689 = new SoIndexedFaceSet();
SoIndexedFaceSet689->setCreaseAngle(3.14159);
SoIndexedFaceSet689->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet689->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate690 = new SoTextureCoordinate();
SoTextureCoordinate690->setPoint(new float[]{0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232}, 58);
SoIndexedFaceSet689->setTexCoord(*SoTextureCoordinate690);

SoCoordinate* SoCoordinate691 = new SoCoordinate();
SoCoordinate691->setPoint(new float[]{-0.5436,-1.006,0.082,-0.5559,-0.9964,-0.0922,-0.3911,-1.079,0.0671,-0.4033,-1.069,-0.1071,-0.596,-0.8116,0.0978,-0.4725,-0.8732,0.2172,-0.3199,-0.9458,0.2024,-0.2147,-0.9931,0.0605,-0.2269,-0.9834,-0.1137,-0.3505,-0.9218,-0.2332,-0.503,-0.8491,-0.2183,-0.6083,-0.8019,-0.0765,-0.2786,-0.0205,0.1427,-0.14,-0.0896,0.2768,0.0415,-0.176,0.2591,0.1596,-0.229,0.1,0.1451,-0.2175,-0.1073,0.0064,-0.1484,-0.2413,-0.1751,-0.062,-0.2236,-0.2931,-0.009,-0.0645,-0.1776,0.1232,0.1297,-0.0583,0.0659,0.2438,0.0996,0.0023,0.2269,0.2013,-0.0322,0.0923,0.1903,-0.0176,-0.08,0.0748,0.0389,-0.1916,-0.0796,0.1047,-0.1786,-0.185,0.14,-0.0465,0.0484,0.1379,0.025}, 87);
SoIndexedFaceSet689->setCoord(*SoCoordinate691);

SoShape685->setGeometry(*SoIndexedFaceSet689);

SoTransform684->addChild(*SoShape685);

SoHAnimSegment683->addChild(*SoTransform684);

SoHAnimJoint682->addChildren(*SoHAnimSegment683);

SoHAnimJoint672->addChildren(*SoHAnimJoint682);

SoHAnimJoint662->addChildren(*SoHAnimJoint672);

SoHAnimJoint652->addChildren(*SoHAnimJoint662);

SoHAnimJoint532->addChildren(*SoHAnimJoint652);

SoHAnimJoint* SoHAnimJoint692 = new SoHAnimJoint();
SoHAnimJoint692->setDEF(QString("hanim_l_carpometacarpal_5"));
SoHAnimJoint692->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint692->setCenter(new float[]{8.197,28.37,-1.528});
SoHAnimSegment* SoHAnimSegment693 = new SoHAnimSegment();
SoHAnimSegment693->setDEF(QString("hanim_l_metacarpal_5"));
SoHAnimSegment693->X3DNode::setName(QString("l_metacarpal_5"));
SoTransform* SoTransform694 = new SoTransform();
SoTransform694->setTranslation(new float[]{8.197,28.37,-1.528});
SoShape* SoShape695 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance696 = new SoVRMLAppearance();
SoMaterial* SoMaterial697 = new SoMaterial();
SoMaterial697->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance696->addChild(*SoMaterial697);

SoImageTexture* SoImageTexture698 = new SoImageTexture();
SoImageTexture698->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance696->addChild(*SoImageTexture698);

SoShape695->addChild(*SoVRMLAppearance696);

SoIndexedFaceSet* SoIndexedFaceSet699 = new SoIndexedFaceSet();
SoIndexedFaceSet699->setCreaseAngle(3.14159);
SoIndexedFaceSet699->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet699->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate700 = new SoTextureCoordinate();
SoTextureCoordinate700->setPoint(new float[]{0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653}, 74);
SoIndexedFaceSet699->setTexCoord(*SoTextureCoordinate700);

SoCoordinate* SoCoordinate701 = new SoCoordinate();
SoCoordinate701->setPoint(new float[]{0.0463,-0.9645,-0.0622,0.0267,-0.942,-0.253,0.2519,-0.9328,-0.0794,0.2324,-0.9103,-0.2702,-0.1254,-0.8655,-0.031,0.0435,-0.8586,0.0992,0.2492,-0.8269,0.082,0.3888,-0.7862,-0.074,0.3693,-0.7638,-0.2648,0.2004,-0.7707,-0.395,-0.0053,-0.8024,-0.3779,-0.1449,-0.843,-0.2218,-0.2585,-0.1911,0.0918,-0.069,-0.1834,0.2379,0.1757,-0.1456,0.2175,0.3323,-0.1,0.0425,0.309,-0.0733,-0.1846,0.1196,-0.0811,-0.3307,-0.1251,-0.1188,-0.3102,-0.2817,-0.1644,-0.1352,-0.2978,-0.0883,0.1196,-0.0923,-0.0799,0.2781,0.1732,-0.0389,0.2559,0.343,0.0105,0.066,0.3178,0.0395,-0.1803,0.1123,0.0311,-0.3387,-0.1532,-0.0098,-0.3166,-0.3231,-0.0593,-0.1267,-0.223,0.0382,0.0917,-0.0776,0.0442,0.2038,0.1101,0.0732,0.1881,0.2302,0.1081,0.0539,0.2124,0.1286,-0.1203,0.0671,0.1227,-0.2324,-0.1207,0.0937,-0.2167,-0.2408,0.0588,-0.0824,-0.0116,0.1281,-0.0076}, 111);
SoIndexedFaceSet699->setCoord(*SoCoordinate701);

SoShape695->setGeometry(*SoIndexedFaceSet699);

SoTransform694->addChild(*SoShape695);

SoHAnimSegment693->addChild(*SoTransform694);

SoHAnimJoint692->addChildren(*SoHAnimSegment693);

SoHAnimJoint* SoHAnimJoint702 = new SoHAnimJoint();
SoHAnimJoint702->setDEF(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimJoint702->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint702->setCenter(new float[]{8.334,27.5,-1.701});
SoHAnimSegment* SoHAnimSegment703 = new SoHAnimSegment();
SoHAnimSegment703->setDEF(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimSegment703->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoTransform* SoTransform704 = new SoTransform();
SoTransform704->setTranslation(new float[]{8.334,27.5,-1.701});
SoShape* SoShape705 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance706 = new SoVRMLAppearance();
SoMaterial* SoMaterial707 = new SoMaterial();
SoMaterial707->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance706->addChild(*SoMaterial707);

SoImageTexture* SoImageTexture708 = new SoImageTexture();
SoImageTexture708->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance706->addChild(*SoImageTexture708);

SoShape705->addChild(*SoVRMLAppearance706);

SoIndexedFaceSet* SoIndexedFaceSet709 = new SoIndexedFaceSet();
SoIndexedFaceSet709->setCreaseAngle(3.14159);
SoIndexedFaceSet709->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,21,20,28,-1,28,29,21,-1,20,22,30,-1,30,28,20,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,21,29,-1,29,35,27,-1,36,29,28,-1,36,28,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,29,-1}, 280);
SoIndexedFaceSet709->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,20,21,29,-1,29,28,20,-1,21,22,30,-1,30,29,21,-1,22,23,31,-1,31,30,22,-1,23,24,32,-1,32,31,23,-1,24,25,33,-1,33,32,24,-1,25,26,34,-1,34,33,25,-1,26,27,35,-1,35,34,26,-1,27,20,28,-1,28,35,27,-1,36,28,29,-1,36,29,30,-1,36,30,31,-1,36,31,32,-1,36,32,33,-1,36,33,34,-1,36,34,35,-1,36,35,28,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate710 = new SoTextureCoordinate();
SoTextureCoordinate710->setPoint(new float[]{0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444}, 74);
SoIndexedFaceSet709->setTexCoord(*SoTextureCoordinate710);

SoCoordinate* SoCoordinate711 = new SoCoordinate();
SoCoordinate711->setPoint(new float[]{-0.1298,-0.9343,0.012,-0.1487,-0.912,-0.1771,0.0526,-0.9323,-0.0063,0.0337,-0.91,-0.1954,-0.2599,-0.8204,0.0405,-0.1089,-0.8356,0.1686,0.0735,-0.8336,0.1504,0.1961,-0.8154,-0.0051,0.1772,-0.793,-0.1942,0.0262,-0.7778,-0.3224,-0.1562,-0.7798,-0.3041,-0.2788,-0.7981,-0.1486,-0.2549,-0.1812,0.1442,-0.0856,-0.1983,0.2879,0.1314,-0.1959,0.2662,0.269,-0.1755,0.0918,0.2465,-0.1489,-0.1332,0.0771,-0.1318,-0.2769,-0.1399,-0.1342,-0.2552,-0.2774,-0.1547,-0.0808,-0.2729,-0.0814,0.1704,-0.0874,-0.1001,0.3278,0.1502,-0.0975,0.304,0.3008,-0.0751,0.113,0.2762,-0.046,-0.1333,0.0907,-0.0273,-0.2907,-0.1469,-0.0299,-0.2669,-0.2975,-0.0523,-0.0759,-0.1866,0.0252,0.139,-0.0555,0.012,0.2502,0.1126,0.0138,0.2334,0.2191,0.0297,0.0984,0.2016,0.0502,-0.0758,0.0705,0.0635,-0.1871,-0.0975,0.0616,-0.1703,-0.204,0.0458,-0.0352,0.0099,0.0797,0.0369}, 111);
SoIndexedFaceSet709->setCoord(*SoCoordinate711);

SoShape705->setGeometry(*SoIndexedFaceSet709);

SoTransform704->addChild(*SoShape705);

SoHAnimSegment703->addChild(*SoTransform704);

SoHAnimJoint702->addChildren(*SoHAnimSegment703);

SoHAnimJoint* SoHAnimJoint712 = new SoHAnimJoint();
SoHAnimJoint712->setDEF(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint712->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint712->setCenter(new float[]{8.338,26.78,-1.768});
SoHAnimSegment* SoHAnimSegment713 = new SoHAnimSegment();
SoHAnimSegment713->setDEF(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimSegment713->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoTransform* SoTransform714 = new SoTransform();
SoTransform714->setTranslation(new float[]{8.338,26.78,-1.768});
SoShape* SoShape715 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance716 = new SoVRMLAppearance();
SoMaterial* SoMaterial717 = new SoMaterial();
SoMaterial717->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance716->addChild(*SoMaterial717);

SoImageTexture* SoImageTexture718 = new SoImageTexture();
SoImageTexture718->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance716->addChild(*SoImageTexture718);

SoShape715->addChild(*SoVRMLAppearance716);

SoIndexedFaceSet* SoIndexedFaceSet719 = new SoIndexedFaceSet();
SoIndexedFaceSet719->setCreaseAngle(3.14159);
SoIndexedFaceSet719->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet719->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate720 = new SoTextureCoordinate();
SoTextureCoordinate720->setPoint(new float[]{0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376}, 58);
SoIndexedFaceSet719->setTexCoord(*SoTextureCoordinate720);

SoCoordinate* SoCoordinate721 = new SoCoordinate();
SoCoordinate721->setPoint(new float[]{-0.3103,-0.8684,0.0017,-0.3279,-0.8476,-0.1746,-0.1444,-0.8917,-0.0183,-0.162,-0.8709,-0.1946,-0.4057,-0.7413,0.0284,-0.268,-0.7744,0.1456,-0.1021,-0.7977,0.1256,0.0092,-0.7996,-0.0215,-0.0085,-0.7788,-0.1978,-0.1461,-0.7457,-0.315,-0.3121,-0.7224,-0.295,-0.4234,-0.7205,-0.1478,-0.2537,-0.1316,0.1027,-0.1126,-0.1655,0.2227,0.0677,-0.1909,0.201,0.1817,-0.1928,0.0502,0.1625,-0.1702,-0.1412,0.0215,-0.1363,-0.2613,-0.1588,-0.1109,-0.2396,-0.2728,-0.109,-0.0888,-0.156,0.0566,0.096,-0.0465,0.0303,0.1892,0.0934,0.0106,0.1723,0.1818,0.0091,0.0553,0.1669,0.0266,-0.0933,0.0575,0.0529,-0.1864,-0.0824,0.0726,-0.1696,-0.1709,0.0741,-0.0526,0.016,0.0815,0.0057}, 87);
SoIndexedFaceSet719->setCoord(*SoCoordinate721);

SoShape715->setGeometry(*SoIndexedFaceSet719);

SoTransform714->addChild(*SoShape715);

SoHAnimSegment713->addChild(*SoTransform714);

SoHAnimJoint712->addChildren(*SoHAnimSegment713);

SoHAnimJoint* SoHAnimJoint722 = new SoHAnimJoint();
SoHAnimJoint722->setDEF(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint722->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint722->setCenter(new float[]{8.153,26.04,-1.886});
SoHAnimSegment* SoHAnimSegment723 = new SoHAnimSegment();
SoHAnimSegment723->setDEF(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimSegment723->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoTransform* SoTransform724 = new SoTransform();
SoTransform724->setTranslation(new float[]{8.153,26.04,-1.886});
SoShape* SoShape725 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance726 = new SoVRMLAppearance();
SoMaterial* SoMaterial727 = new SoMaterial();
SoMaterial727->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance726->addChild(*SoMaterial727);

SoImageTexture* SoImageTexture728 = new SoImageTexture();
SoImageTexture728->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance726->addChild(*SoImageTexture728);

SoShape725->addChild(*SoVRMLAppearance726);

SoIndexedFaceSet* SoIndexedFaceSet729 = new SoIndexedFaceSet();
SoIndexedFaceSet729->setCreaseAngle(3.14159);
SoIndexedFaceSet729->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,0,4,5,-1,0,3,6,-1,6,4,0,-1,3,7,6,-1,3,2,8,-1,8,7,3,-1,2,9,8,-1,2,1,10,-1,10,9,2,-1,1,11,10,-1,1,0,5,-1,5,11,1,-1,5,4,12,-1,12,13,5,-1,4,6,14,-1,14,12,4,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,5,13,-1,13,19,11,-1,13,12,20,-1,20,21,13,-1,12,14,22,-1,22,20,12,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,13,21,-1,21,27,19,-1,28,21,20,-1,28,20,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,21,-1}, 216);
SoIndexedFaceSet729->setCoordIndex(new int32_t[]{0,1,3,-1,3,2,0,-1,0,5,4,-1,0,2,6,-1,6,5,0,-1,2,7,6,-1,2,3,8,-1,8,7,2,-1,3,9,8,-1,3,1,10,-1,10,9,3,-1,1,11,10,-1,1,0,4,-1,4,11,1,-1,4,5,13,-1,13,12,4,-1,5,6,14,-1,14,13,5,-1,6,7,15,-1,15,14,6,-1,7,8,16,-1,16,15,7,-1,8,9,17,-1,17,16,8,-1,9,10,18,-1,18,17,9,-1,10,11,19,-1,19,18,10,-1,11,4,12,-1,12,19,11,-1,12,13,21,-1,21,20,12,-1,13,14,22,-1,22,21,13,-1,14,15,23,-1,23,22,14,-1,15,16,24,-1,24,23,15,-1,16,17,25,-1,25,24,16,-1,17,18,26,-1,26,25,17,-1,18,19,27,-1,27,26,18,-1,19,12,20,-1,20,27,19,-1,28,20,21,-1,28,21,22,-1,28,22,23,-1,28,23,24,-1,28,24,25,-1,28,25,26,-1,28,26,27,-1,28,27,20,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate730 = new SoTextureCoordinate();
SoTextureCoordinate730->setPoint(new float[]{0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309}, 58);
SoIndexedFaceSet729->setTexCoord(*SoTextureCoordinate730);

SoCoordinate* SoCoordinate731 = new SoCoordinate();
SoCoordinate731->setPoint(new float[]{-0.4265,-0.7665,0.0531,-0.4417,-0.7485,-0.0994,-0.2908,-0.8079,0.0337,-0.306,-0.7899,-0.1188,-0.4775,-0.6307,0.0765,-0.3642,-0.6752,0.1764,-0.2285,-0.7166,0.157,-0.1382,-0.7341,0.0281,-0.1534,-0.7161,-0.1244,-0.2667,-0.6716,-0.2242,-0.4024,-0.6302,-0.2049,-0.4927,-0.6127,-0.076,-0.2189,-0.0422,0.1441,-0.0919,-0.0921,0.2561,0.0696,-0.1414,0.2331,0.1709,-0.161,0.0886,0.1528,-0.1396,-0.0929,0.0258,-0.0897,-0.2049,-0.1357,-0.0404,-0.1819,-0.2371,-0.0207,-0.0373,-0.1344,0.069,0.1368,-0.0252,0.0277,0.2322,0.1149,-0.0067,0.2114,0.202,-0.0158,0.0895,0.1878,0.0058,-0.0611,0.082,0.0466,-0.1545,-0.0552,0.083,-0.137,-0.1456,0.0926,-0.0171,0.0613,0.1015,0.0409}, 87);
SoIndexedFaceSet729->setCoord(*SoCoordinate731);

SoShape725->setGeometry(*SoIndexedFaceSet729);

SoTransform724->addChild(*SoShape725);

SoHAnimSegment723->addChild(*SoTransform724);

SoHAnimJoint722->addChildren(*SoHAnimSegment723);

SoHAnimJoint712->addChildren(*SoHAnimJoint722);

SoHAnimJoint702->addChildren(*SoHAnimJoint712);

SoHAnimJoint692->addChildren(*SoHAnimJoint702);

SoHAnimJoint532->addChildren(*SoHAnimJoint692);

SoHAnimJoint522->addChildren(*SoHAnimJoint532);

SoHAnimJoint512->addChildren(*SoHAnimJoint522);

SoHAnimJoint502->addChildren(*SoHAnimJoint512);

SoHAnimJoint492->addChildren(*SoHAnimJoint502);

SoHAnimJoint332->addChildren(*SoHAnimJoint492);

SoHAnimJoint* SoHAnimJoint732 = new SoHAnimJoint();
SoHAnimJoint732->setDEF(QString("hanim_r_sternoclavicular"));
SoHAnimJoint732->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint732->setCenter(new float[]{-1.71,52.82,-0.6127});
SoHAnimSegment* SoHAnimSegment733 = new SoHAnimSegment();
SoHAnimSegment733->setDEF(QString("hanim_r_clavicle"));
SoHAnimSegment733->X3DNode::setName(QString("r_clavicle"));
SoTransform* SoTransform734 = new SoTransform();
SoTransform734->setTranslation(new float[]{-1.71,52.82,-0.6127});
SoShape* SoShape735 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance736 = new SoVRMLAppearance();
SoMaterial* SoMaterial737 = new SoMaterial();
SoMaterial737->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance736->addChild(*SoMaterial737);

SoImageTexture* SoImageTexture738 = new SoImageTexture();
SoImageTexture738->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance736->addChild(*SoImageTexture738);

SoShape735->addChild(*SoVRMLAppearance736);

SoIndexedFaceSet* SoIndexedFaceSet739 = new SoIndexedFaceSet();
SoIndexedFaceSet739->setCreaseAngle(3.14159);
SoIndexedFaceSet739->setTexCoordIndex(new int32_t[]{9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1}, 104);
SoIndexedFaceSet739->setCoordIndex(new int32_t[]{9,0,1,-1,1,6,9,-1,6,1,2,-1,2,5,6,-1,8,5,2,-1,2,3,8,-1,8,3,4,-1,4,7,8,-1,9,7,4,-1,4,0,9,-1,4,3,2,-1,0,4,2,-1,1,0,2,-1,10,14,13,-1,10,13,12,-1,11,10,12,-1,6,10,11,-1,11,9,6,-1,9,11,12,-1,12,7,9,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,5,8,-1,5,14,10,-1,10,6,5,-1}, 104);
SoTextureCoordinate* SoTextureCoordinate740 = new SoTextureCoordinate();
SoTextureCoordinate740->setPoint(new float[]{0.1911,0.4797,0.171,0.4832,0.1497,0.4806,0.1519,0.4334,0.1831,0.4416,0.1474,0.4856,0.1708,0.4854,0.1784,0.4249,0.1538,0.4251,0.1963,0.4863,0.19,0.5091,0.1847,0.499,0.172,0.4382,0.1568,0.4457,0.1409,0.4926}, 30);
SoIndexedFaceSet739->setTexCoord(*SoTextureCoordinate740);

SoCoordinate* SoCoordinate741 = new SoCoordinate();
SoCoordinate741->setPoint(new float[]{-4.99,0.104,-0.8644,-5.073,0.4993,0.047,-4.706,0.1695,1.198,-4.631,-1.819,1.104,-4.586,-1.648,-0.1248,-3.376,0.3884,1.771,-3.891,0.989,-0.0537,-4.193,-2.49,-0.5713,-4.388,-2.49,1.429,-3.761,0.3238,-1.692,0.1237,0.6312,-0.1883,0.1237,0.3007,-0.9426,0.1237,-1.418,-0.2577,0.1237,-1.392,0.6264,0.1237,0.2586,0.8179}, 45);
SoIndexedFaceSet739->setCoord(*SoCoordinate741);

SoShape735->setGeometry(*SoIndexedFaceSet739);

SoTransform734->addChild(*SoShape735);

SoHAnimSegment733->addChild(*SoTransform734);

SoHAnimJoint732->addChildren(*SoHAnimSegment733);

SoHAnimJoint* SoHAnimJoint742 = new SoHAnimJoint();
SoHAnimJoint742->setDEF(QString("hanim_r_acromioclavicular"));
SoHAnimJoint742->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint742->setCenter(new float[]{-5.464,52.06,-0.5732});
SoHAnimSegment* SoHAnimSegment743 = new SoHAnimSegment();
SoHAnimSegment743->setDEF(QString("hanim_r_scapula"));
SoHAnimSegment743->X3DNode::setName(QString("r_scapula"));
SoTransform* SoTransform744 = new SoTransform();
SoTransform744->setTranslation(new float[]{-5.464,52.06,-0.5732});
SoShape* SoShape745 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance746 = new SoVRMLAppearance();
SoMaterial* SoMaterial747 = new SoMaterial();
SoMaterial747->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance746->addChild(*SoMaterial747);

SoImageTexture* SoImageTexture748 = new SoImageTexture();
SoImageTexture748->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance746->addChild(*SoImageTexture748);

SoShape745->addChild(*SoVRMLAppearance746);

SoIndexedFaceSet* SoIndexedFaceSet749 = new SoIndexedFaceSet();
SoIndexedFaceSet749->setCreaseAngle(3.14159);
SoIndexedFaceSet749->setTexCoordIndex(new int32_t[]{5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,8,3,-1,9,7,1,-1,1,5,9,-1,6,2,0,-1,0,7,6,-1,0,1,7,-1,12,10,11,-1,11,13,12,-1,4,14,15,-1,15,5,4,-1,5,15,16,-1,16,9,5,-1,13,16,17,-1,17,12,13,-1,8,17,18,-1,18,3,8,-1,3,18,14,-1,14,4,3,-1,14,19,15,-1,15,19,16,-1,16,19,17,-1,17,19,18,-1,18,19,14,-1}, 112);
SoIndexedFaceSet749->setCoordIndex(new int32_t[]{5,1,0,-1,0,4,5,-1,4,0,2,-1,2,3,4,-1,3,2,6,-1,6,9,3,-1,7,8,1,-1,1,5,7,-1,6,2,0,-1,0,8,6,-1,0,1,8,-1,9,6,8,-1,8,7,9,-1,4,10,11,-1,11,5,4,-1,5,11,12,-1,12,7,5,-1,7,12,13,-1,13,9,7,-1,9,13,14,-1,14,3,9,-1,3,14,10,-1,10,4,3,-1,10,15,11,-1,11,15,12,-1,12,15,13,-1,13,15,14,-1,14,15,10,-1}, 112);
SoTextureCoordinate* SoTextureCoordinate750 = new SoTextureCoordinate();
SoTextureCoordinate750->setPoint(new float[]{0.1715,0.4655,0.1797,0.4646,0.1569,0.4642,0.1474,0.4856,0.1708,0.4854,0.1963,0.4863,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1544,0.4288,0.1782,0.4286,0.1538,0.4251,0.1784,0.4249,0.1703,0.4865,0.1895,0.487,0.1761,0.4271,0.1552,0.4287,0.1491,0.4835,0.1671,0.4618}, 40);
SoIndexedFaceSet749->setTexCoord(*SoTextureCoordinate750);

SoCoordinate* SoCoordinate751 = new SoCoordinate();
SoCoordinate751->setPoint(new float[]{-1.935,1.466,-0.0932,-1.515,0.6492,-1.732,-1.534,0.7105,1.619,0.3782,1.139,1.732,-0.1374,1.74,-0.0932,-0.0076,1.074,-1.731,-0.8341,-1.572,1.39,-0.4391,-1.74,-0.6109,-0.8275,-1.58,-0.6098,-0.6342,-1.74,1.389,1.237,1.407,-0.0712,1.547,0.8515,-1.142,0.7525,-1.603,-0.4744,0.7511,-1.595,1.16,1.51,1.034,1.296,1.59,-0.0185,0.1351}, 48);
SoIndexedFaceSet749->setCoord(*SoCoordinate751);

SoShape745->setGeometry(*SoIndexedFaceSet749);

SoTransform744->addChild(*SoShape745);

SoHAnimSegment743->addChild(*SoTransform744);

SoHAnimJoint742->addChildren(*SoHAnimSegment743);

SoHAnimJoint* SoHAnimJoint752 = new SoHAnimJoint();
SoHAnimJoint752->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint752->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint752->setCenter(new float[]{-7.336,51.48,-0.1452});
SoHAnimSegment* SoHAnimSegment753 = new SoHAnimSegment();
SoHAnimSegment753->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment753->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform754 = new SoTransform();
SoTransform754->setTranslation(new float[]{-7.336,51.48,-0.1452});
SoShape* SoShape755 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance756 = new SoVRMLAppearance();
SoMaterial* SoMaterial757 = new SoMaterial();
SoMaterial757->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance756->addChild(*SoMaterial757);

SoImageTexture* SoImageTexture758 = new SoImageTexture();
SoImageTexture758->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance756->addChild(*SoImageTexture758);

SoShape755->addChild(*SoVRMLAppearance756);

SoIndexedFaceSet* SoIndexedFaceSet759 = new SoIndexedFaceSet();
SoIndexedFaceSet759->setCreaseAngle(3.14159);
SoIndexedFaceSet759->setTexCoordIndex(new int32_t[]{1,0,2,-1,1,2,3,-1,61,1,3,-1,1,6,5,-1,5,0,1,-1,0,5,7,-1,7,2,0,-1,2,7,8,-1,8,3,2,-1,25,26,9,-1,9,4,25,-1,4,9,6,-1,6,1,4,-1,6,11,10,-1,10,5,6,-1,5,10,12,-1,12,7,5,-1,7,12,13,-1,13,8,7,-1,27,28,14,-1,14,9,27,-1,9,14,11,-1,11,6,9,-1,11,16,15,-1,15,10,11,-1,10,15,17,-1,17,12,10,-1,12,17,18,-1,18,13,12,-1,29,30,19,-1,19,14,29,-1,14,19,16,-1,16,11,14,-1,36,35,54,-1,36,54,53,-1,37,36,53,-1,20,15,16,-1,16,21,20,-1,22,17,15,-1,15,20,22,-1,23,18,17,-1,17,22,23,-1,24,19,31,-1,31,32,24,-1,21,16,19,-1,19,24,21,-1,40,39,38,-1,38,41,40,-1,43,42,55,-1,55,56,43,-1,45,44,42,-1,42,43,45,-1,47,46,44,-1,44,45,47,-1,41,38,46,-1,46,47,41,-1,48,40,41,-1,41,49,48,-1,50,43,57,-1,57,58,50,-1,51,45,43,-1,43,50,51,-1,52,47,45,-1,45,51,52,-1,49,41,47,-1,47,52,49,-1,34,48,49,-1,49,33,34,-1,35,50,59,-1,59,60,35,-1,36,51,50,-1,50,35,36,-1,37,52,51,-1,51,36,37,-1,33,49,52,-1,52,37,33,-1}, 304);
SoIndexedFaceSet759->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,38,37,36,-1,38,36,35,-1,39,38,35,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1,26,21,20,-1,20,25,26,-1,27,22,21,-1,21,26,27,-1,28,23,22,-1,22,27,28,-1,29,24,23,-1,23,28,29,-1,25,20,24,-1,24,29,25,-1,31,26,25,-1,25,30,31,-1,32,27,26,-1,26,31,32,-1,33,28,27,-1,27,32,33,-1,34,29,28,-1,28,33,34,-1,30,25,29,-1,29,34,30,-1,36,31,30,-1,30,35,36,-1,37,32,31,-1,31,36,37,-1,38,33,32,-1,32,37,38,-1,39,34,33,-1,33,38,39,-1,35,30,34,-1,34,39,35,-1}, 304);
SoTextureCoordinate* SoTextureCoordinate760 = new SoTextureCoordinate();
SoTextureCoordinate760->setPoint(new float[]{0.2986,0.2114,0.2726,0.2114,0.3201,0.2114,0.3415,0.2114,0.2466,0.2114,0.2979,0.2417,0.2726,0.2417,0.3197,0.2417,0.3418,0.2417,0.2473,0.2417,0.2979,0.3018,0.2726,0.3018,0.3197,0.3018,0.3418,0.3018,0.2473,0.3018,0.2978,0.3276,0.2726,0.3276,0.3197,0.3276,0.3419,0.3276,0.2474,0.3276,0.2932,0.2834,0.2689,0.2834,0.316,0.2834,0.3322,0.2834,0.245,0.2834,0.2251,0.2114,0.2255,0.2417,0.2255,0.2417,0.2255,0.3018,0.2255,0.3018,0.2255,0.3276,0.2255,0.3276,0.2159,0.2834,0.4315,0.6736,0.442,0.6736,0.3947,0.6736,0.4041,0.6736,0.418,0.6736,0.4296,0.6167,0.4409,0.6167,0.4415,0.6485,0.4303,0.6485,0.3965,0.6167,0.3953,0.6485,0.4047,0.6167,0.4053,0.6485,0.4189,0.6167,0.418,0.6485,0.4415,0.6706,0.4306,0.6706,0.395,0.6706,0.4051,0.6706,0.4182,0.6706,0.3746,0.6736,0.3851,0.6736,0.384,0.6167,0.3845,0.6485,0.3845,0.6485,0.3846,0.6706,0.3846,0.6706,0.3851,0.6736,0.3481,0.2114}, 124);
SoIndexedFaceSet759->setTexCoord(*SoTextureCoordinate760);

SoCoordinate* SoCoordinate761 = new SoCoordinate();
SoCoordinate761->setPoint(new float[]{-1.164,1.767,-1.68,-2.32,1.756,0.0337,-1.047,1.768,1.663,0.895,1.785,0.9556,0.8229,1.784,-1.11,-1.382,0.4997,-2.31,-2.978,0.4855,0.057,-1.221,0.5011,2.307,1.462,0.525,1.33,1.362,0.5241,-1.523,-1.36,-2.014,-2.31,-2.956,-2.028,0.057,-1.198,-2.012,2.307,1.484,-1.988,1.33,1.384,-1.989,-1.523,-1.398,-3.089,-2.442,-3.087,-3.104,0.0619,-1.228,-3.087,2.442,1.61,-3.062,1.409,1.505,-3.063,-1.61,-0.8845,-1.238,-1.939,-2.105,-1.248,-0.4543,-1.473,-1.243,1.629,0.1375,-1.229,1.432,0.5011,-1.225,-0.7734,-0.9027,-7.045,-1.569,-2.17,-7.056,-0.378,-1.514,-7.051,1.293,0.1588,-7.036,1.135,0.5365,-7.032,-0.634,-0.9066,-11.1,-1.511,-2.127,-11.11,-0.3651,-1.495,-11.1,1.243,0.1154,-11.09,1.091,0.4791,-11.08,-0.6115,-0.852,-11.65,-0.8985,-1.567,-11.65,-0.2267,-1.197,-11.65,0.716,-0.2531,-11.64,0.6268,-0.0399,-11.64,-0.3711}, 120);
SoIndexedFaceSet759->setCoord(*SoCoordinate761);

SoShape755->setGeometry(*SoIndexedFaceSet759);

SoTransform754->addChild(*SoShape755);

SoHAnimSegment753->addChild(*SoTransform754);

SoHAnimJoint752->addChildren(*SoHAnimSegment753);

SoHAnimJoint* SoHAnimJoint762 = new SoHAnimJoint();
SoHAnimJoint762->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint762->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint762->setCenter(new float[]{-8.093,40.38,-0.2502});
SoHAnimSegment* SoHAnimSegment763 = new SoHAnimSegment();
SoHAnimSegment763->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment763->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform764 = new SoTransform();
SoTransform764->setTranslation(new float[]{-8.093,40.38,-0.2502});
SoShape* SoShape765 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance766 = new SoVRMLAppearance();
SoMaterial* SoMaterial767 = new SoMaterial();
SoMaterial767->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance766->addChild(*SoMaterial767);

SoImageTexture* SoImageTexture768 = new SoImageTexture();
SoImageTexture768->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance766->addChild(*SoImageTexture768);

SoShape765->addChild(*SoVRMLAppearance766);

SoIndexedFaceSet* SoIndexedFaceSet769 = new SoIndexedFaceSet();
SoIndexedFaceSet769->setCreaseAngle(3.14159);
SoIndexedFaceSet769->setTexCoordIndex(new int32_t[]{26,25,2,-1,26,2,3,-1,4,26,3,-1,0,5,6,-1,6,1,0,-1,27,28,7,-1,7,2,27,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,29,30,12,-1,12,7,29,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,31,32,17,-1,17,12,31,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,34,-1,23,34,33,-1,24,23,33,-1,21,16,15,-1,15,20,21,-1,22,17,35,-1,35,36,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1}, 184);
SoIndexedFaceSet769->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,4,0,3,-1,0,5,6,-1,6,1,0,-1,1,6,7,-1,7,2,1,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,9,4,3,-1,4,9,5,-1,5,0,4,-1,5,10,11,-1,11,6,5,-1,6,11,12,-1,12,7,6,-1,7,12,13,-1,13,8,7,-1,8,13,14,-1,14,9,8,-1,9,14,10,-1,10,5,9,-1,10,15,16,-1,16,11,10,-1,11,16,17,-1,17,12,11,-1,12,17,18,-1,18,13,12,-1,13,18,19,-1,19,14,13,-1,14,19,15,-1,15,10,14,-1,23,22,21,-1,23,21,20,-1,24,23,20,-1,21,16,15,-1,15,20,21,-1,22,17,16,-1,16,21,22,-1,23,18,17,-1,17,22,23,-1,24,19,18,-1,18,23,24,-1,20,15,19,-1,19,24,20,-1}, 184);
SoTextureCoordinate* SoTextureCoordinate770 = new SoTextureCoordinate();
SoTextureCoordinate770->setPoint(new float[]{0.4222,0.6201,0.4327,0.6201,0.3884,0.6201,0.3987,0.6201,0.4103,0.6201,0.4213,0.6265,0.4321,0.6265,0.3894,0.6265,0.399,0.6265,0.4105,0.6265,0.4214,0.6413,0.4323,0.6413,0.389,0.6381,0.3992,0.6381,0.4103,0.6413,0.4213,0.6705,0.4336,0.6705,0.3899,0.6705,0.3981,0.6705,0.4094,0.6705,0.4215,0.674,0.4346,0.674,0.3899,0.674,0.398,0.674,0.4083,0.674,0.3787,0.6201,0.3682,0.6201,0.3787,0.6201,0.3782,0.6265,0.3782,0.6265,0.3783,0.6413,0.3783,0.6413,0.3796,0.6705,0.3676,0.674,0.3806,0.674,0.3796,0.6705,0.3806,0.674}, 74);
SoIndexedFaceSet769->setTexCoord(*SoTextureCoordinate770);

SoCoordinate* SoCoordinate771 = new SoCoordinate();
SoCoordinate771->setPoint(new float[]{-0.215,0.3047,-1.152,-1.155,0.2966,-0.2588,-0.6199,0.3013,1.04,0.6505,0.3122,0.9491,0.9008,0.3143,-0.4054,-0.1442,-0.8448,-1.625,-1.472,-0.8561,-0.4271,-0.7164,-0.8496,1.625,1.079,-0.8342,1.482,1.433,-0.8312,-0.6588,-0.1328,-3.5,-1.607,-1.551,-3.513,-0.4225,-0.781,-2.925,1.61,1.136,-2.909,1.468,1.551,-3.486,-0.6519,-0.0592,-8.713,-1.437,-1.093,-8.722,-0.1279,-0.5047,-8.716,1.51,0.8932,-8.704,1.377,1.169,-8.702,-0.3428,-0.0092,-9.336,-0.8855,-0.7154,-9.342,0.0084,-0.3135,-9.339,1.043,0.6412,-9.331,0.9519,0.8292,-9.329,-0.1383}, 75);
SoIndexedFaceSet769->setCoord(*SoCoordinate771);

SoShape765->setGeometry(*SoIndexedFaceSet769);

SoTransform764->addChild(*SoShape765);

SoHAnimSegment763->addChild(*SoTransform764);

SoHAnimJoint762->addChildren(*SoHAnimSegment763);

SoHAnimJoint* SoHAnimJoint772 = new SoHAnimJoint();
SoHAnimJoint772->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint772->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint772->setCenter(new float[]{-7.899,31.43,-0.3809});
SoHAnimSegment* SoHAnimSegment773 = new SoHAnimSegment();
SoHAnimSegment773->setDEF(QString("hanim_r_carpal"));
SoHAnimSegment773->X3DNode::setName(QString("r_carpal"));
SoTransform* SoTransform774 = new SoTransform();
SoTransform774->setTranslation(new float[]{-7.899,31.43,-0.3809});
SoShape* SoShape775 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance776 = new SoVRMLAppearance();
SoMaterial* SoMaterial777 = new SoMaterial();
SoMaterial777->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance776->addChild(*SoMaterial777);

SoImageTexture* SoImageTexture778 = new SoImageTexture();
SoImageTexture778->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance776->addChild(*SoImageTexture778);

SoShape775->addChild(*SoVRMLAppearance776);

SoIndexedFaceSet* SoIndexedFaceSet779 = new SoIndexedFaceSet();
SoIndexedFaceSet779->setCreaseAngle(3.14159);
SoIndexedFaceSet779->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,4,6,5,-1,8,7,10,-1,10,9,8,-1,12,11,14,-1,14,13,12,-1,14,16,15,-1,15,13,14,-1,17,14,11,-1,11,18,17,-1,20,19,22,-1,22,21,20,-1,23,25,24,-1,7,27,26,-1,20,16,14,-1,14,17,20,-1,28,30,29,-1,29,24,28,-1,21,22,32,-1,32,31,21,-1,33,34,10,-1,10,26,33,-1,35,21,31,-1,31,36,35,-1,32,22,38,-1,38,37,32,-1,39,15,36,-1,36,31,39,-1,39,28,24,-1,24,25,39,-1,40,2,3,-1,3,41,40,-1,42,18,27,-1,19,42,27,-1,27,43,19,-1,44,38,43,-1,43,7,44,-1,45,23,29,-1,29,6,45,-1,20,21,35,-1,35,16,20,-1,29,30,8,-1,30,28,32,-1,32,37,30,-1,31,32,28,-1,28,39,31,-1,7,8,46,-1,46,44,7,-1,36,15,16,-1,16,35,36,-1,15,39,25,-1,25,13,15,-1,25,23,12,-1,12,13,25,-1,20,17,42,-1,42,19,20,-1,17,18,42,-1,47,49,48,-1,48,45,47,-1,23,45,48,-1,48,50,23,-1,23,50,51,-1,51,12,23,-1,12,51,52,-1,52,11,12,-1,18,11,52,-1,52,53,18,-1,18,53,49,-1,49,47,18,-1,46,37,38,-1,38,44,46,-1,22,19,43,-1,43,38,22,-1,30,37,46,-1,46,8,30,-1,33,26,54,-1,54,4,33,-1,29,23,24,-1,33,4,5,-1,5,34,33,-1,47,4,54,-1,54,18,47,-1,5,29,9,-1,29,8,9,-1,5,9,34,-1,1,48,49,-1,49,0,1,-1,50,48,1,-1,1,2,50,-1,40,51,50,-1,50,2,40,-1,41,52,51,-1,51,40,41,-1,53,52,41,-1,41,3,53,-1,0,49,53,-1,53,3,0,-1,18,54,27,-1,54,26,27,-1,10,7,26,-1,10,34,9,-1,6,29,5,-1,4,47,45,-1,45,6,4,-1,27,7,43,-1}, 424);
SoIndexedFaceSet779->setCoordIndex(new int32_t[]{36,41,38,-1,38,37,36,-1,44,54,45,-1,31,30,53,-1,53,4,31,-1,6,7,11,-1,11,10,6,-1,11,32,33,-1,33,10,11,-1,34,11,7,-1,7,24,34,-1,13,27,15,-1,15,17,13,-1,25,35,22,-1,30,20,5,-1,13,32,11,-1,11,34,13,-1,23,29,28,-1,28,22,23,-1,17,15,14,-1,14,16,17,-1,18,19,53,-1,53,5,18,-1,9,17,16,-1,16,8,9,-1,14,15,43,-1,43,42,14,-1,21,33,8,-1,8,16,21,-1,21,23,22,-1,22,35,21,-1,39,38,41,-1,41,40,39,-1,26,24,20,-1,27,26,20,-1,20,12,27,-1,3,43,12,-1,12,30,3,-1,0,25,28,-1,28,54,0,-1,13,17,9,-1,9,32,13,-1,28,29,31,-1,29,23,14,-1,14,42,29,-1,16,14,23,-1,23,21,16,-1,30,31,2,-1,2,3,30,-1,8,33,32,-1,32,9,8,-1,33,21,35,-1,35,10,33,-1,35,25,6,-1,6,10,35,-1,13,34,26,-1,26,27,13,-1,34,24,26,-1,1,46,47,-1,47,0,1,-1,25,0,47,-1,47,48,25,-1,25,48,49,-1,49,6,25,-1,6,49,50,-1,50,7,6,-1,24,7,50,-1,50,51,24,-1,24,51,46,-1,46,1,24,-1,2,42,43,-1,43,3,2,-1,15,27,12,-1,12,43,15,-1,29,42,2,-1,2,31,29,-1,18,5,52,-1,52,44,18,-1,28,25,22,-1,18,44,45,-1,45,19,18,-1,1,44,52,-1,52,24,1,-1,45,28,4,-1,28,31,4,-1,45,4,19,-1,37,47,46,-1,46,36,37,-1,48,47,37,-1,37,38,48,-1,39,49,48,-1,48,38,39,-1,40,50,49,-1,49,39,40,-1,51,50,40,-1,40,41,51,-1,36,46,51,-1,51,41,36,-1,24,52,20,-1,52,5,20,-1,53,30,5,-1,53,19,4,-1,54,28,45,-1,44,1,0,-1,0,54,44,-1,20,30,12,-1}, 424);
SoTextureCoordinate* SoTextureCoordinate780 = new SoTextureCoordinate();
SoTextureCoordinate780->setPoint(new float[]{0.4538,0.6821,0.4536,0.6827,0.4366,0.6851,0.4365,0.6843,0.4719,0.6661,0.4711,0.6637,0.4639,0.67,0.4606,0.6487,0.4605,0.6507,0.4603,0.6538,0.4606,0.6529,0.4117,0.6708,0.4117,0.6714,0.4055,0.6612,0.4047,0.6602,0.4025,0.6505,0.4027,0.6493,0.4177,0.6589,0.4355,0.6719,0.431,0.6469,0.4157,0.6482,0.414,0.6419,0.4289,0.6406,0.4346,0.6727,0.4316,0.6601,0.4169,0.6604,0.4607,0.6543,0.4504,0.6593,0.4308,0.6489,0.4498,0.6605,0.4482,0.6491,0.4143,0.6427,0.4297,0.6411,0.4754,0.6565,0.4752,0.6543,0.4024,0.6436,0.4026,0.6446,0.4463,0.6407,0.4467,0.6399,0.4164,0.6496,0.419,0.6831,0.4192,0.6825,0.4346,0.6583,0.4478,0.647,0.4591,0.6409,0.4581,0.6741,0.4578,0.6416,0.4616,0.6733,0.4549,0.6767,0.455,0.6762,0.4365,0.6779,0.4176,0.6767,0.4177,0.6762,0.4368,0.6768,0.46,0.6628}, 110);
SoIndexedFaceSet779->setTexCoord(*SoTextureCoordinate780);

SoCoordinate* SoCoordinate781 = new SoCoordinate();
SoCoordinate781->setPoint(new float[]{-0.615,-0.6885,1.418,0.2519,-0.7698,1.606,-0.894,-4.14,1.405,-0.2357,-4.221,1.472,-0.7106,-2.848,1.537,0.2913,-2.795,1.561,-0.3511,-0.9723,-1.085,0.332,-1.036,-1.083,-0.6255,-3.82,-1.576,-0.076,-3.93,-1.587,-0.5517,-2.055,-1.417,0.1089,-2.163,-1.46,-0.0149,-3.564,0.866,0.0687,-3.436,-0.8707,-0.9147,-4.192,-0.1153,-0.2445,-4.253,-0.1554,-0.7883,-4.028,-0.9461,-0.1878,-4.111,-0.9619,0.1749,-2.558,2.351,-0.5105,-2.795,2.344,0.1613,-2.264,1.005,-0.8473,-3.286,-0.8304,-0.9399,-2.17,-0.0115,-0.979,-3.369,-0.052,0.4715,-0.9186,0.2017,-0.7286,-0.8328,0.1541,0.1459,-2.365,0.1498,0.0501,-3.575,-0.0433,-0.969,-2.127,0.9718,-0.9825,-3.348,0.8866,-0.0909,-3.383,1.556,-0.8371,-3.169,1.547,-0.041,-3.318,-1.568,-0.5921,-3.194,-1.578,0.2264,-2.304,-0.7602,-0.8375,-2.137,-0.8044,0.2818,0.1713,1.187,-0.2277,0.2301,1.179,-0.2277,0.4881,0.2572,-0.1331,0.2707,-0.6889,0.3764,0.2118,-0.6809,0.4614,0.4054,0.2565,-0.9242,-4.241,0.7847,-0.2647,-4.324,0.8047,0.3043,-1.534,2.164,-0.8425,-1.789,2.123,0.201,-0.4603,1.254,-0.3856,-0.405,1.248,-0.4965,-0.283,0.2553,-0.2563,-0.4079,-0.7647,0.3314,-0.4586,-0.758,0.3822,-0.3913,0.2697,0.4485,-1.891,1.52,-0.3893,-2.936,1.555,-0.7623,-1.12,1.731}, 165);
SoIndexedFaceSet779->setCoord(*SoCoordinate781);

SoShape775->setGeometry(*SoIndexedFaceSet779);

SoTransform774->addChild(*SoShape775);

SoHAnimSegment773->addChild(*SoTransform774);

SoHAnimJoint772->addChildren(*SoHAnimSegment773);

SoHAnimJoint* SoHAnimJoint782 = new SoHAnimJoint();
SoHAnimJoint782->setDEF(QString("hanim_r_carpometacarpal_1"));
SoHAnimJoint782->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint782->setCenter(new float[]{-8.205,29.6,1.302});
SoHAnimSegment* SoHAnimSegment783 = new SoHAnimSegment();
SoHAnimSegment783->setDEF(QString("hanim_r_metacarpal_1"));
SoHAnimSegment783->X3DNode::setName(QString("r_metacarpal_1"));
SoTransform* SoTransform784 = new SoTransform();
SoTransform784->setTranslation(new float[]{-8.205,29.6,1.302});
SoShape* SoShape785 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance786 = new SoVRMLAppearance();
SoMaterial* SoMaterial787 = new SoMaterial();
SoMaterial787->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance786->addChild(*SoMaterial787);

SoImageTexture* SoImageTexture788 = new SoImageTexture();
SoImageTexture788->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance786->addChild(*SoImageTexture788);

SoShape785->addChild(*SoVRMLAppearance786);

SoIndexedFaceSet* SoIndexedFaceSet789 = new SoIndexedFaceSet();
SoIndexedFaceSet789->setCreaseAngle(3.14159);
SoIndexedFaceSet789->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet789->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate790 = new SoTextureCoordinate();
SoTextureCoordinate790->setPoint(new float[]{0.469,0.6546,0.4646,0.6538,0.4679,0.6539,0.4723,0.6548,0.4715,0.6565,0.4657,0.6558,0.4749,0.6566,0.4741,0.6561,0.4697,0.6552,0.4639,0.6545,0.4606,0.6544,0.4613,0.655,0.468,0.6634,0.4615,0.6626,0.472,0.6635,0.4712,0.6629,0.466,0.6619,0.4595,0.6611,0.4555,0.661,0.4563,0.6616,0.4678,0.6645,0.4607,0.6637,0.4721,0.6647,0.4712,0.664,0.4655,0.6629,0.4585,0.6621,0.4541,0.6619,0.455,0.6626,0.4658,0.6652,0.4608,0.6646,0.4689,0.6653,0.4682,0.6649,0.4642,0.6641,0.4592,0.6635,0.4561,0.6634,0.4568,0.6639,0.4622,0.6648}, 74);
SoIndexedFaceSet789->setTexCoord(*SoTextureCoordinate790);

SoCoordinate* SoCoordinate791 = new SoCoordinate();
SoCoordinate791->setPoint(new float[]{0.375,-0.9214,0.322,0.212,-1.009,0.0858,0.1385,-0.9095,0.5036,-0.0245,-0.9973,0.2674,0.533,-0.8014,0.1471,0.4779,-0.7267,0.4605,0.2413,-0.7148,0.6421,-0.0584,-0.7717,0.6012,-0.2213,-0.8595,0.365,-0.1662,-0.9342,0.0516,0.0704,-0.9461,-0.13,0.3701,-0.8892,-0.0891,0.4847,-0.0791,-0.0791,0.4228,0.0048,0.2724,0.1414,0.0189,0.4885,-0.1948,-0.0449,0.4426,-0.3887,-0.1493,0.1616,-0.3268,-0.2331,-0.1899,-0.0453,-0.2473,-0.406,0.2908,-0.1835,-0.3601,0.5058,0.0372,-0.1235,0.4385,0.1283,0.2586,0.1325,0.1437,0.4936,-0.233,0.0743,0.4437,-0.4438,-0.0392,0.1381,-0.3765,-0.1303,-0.244,-0.0705,-0.1457,-0.479,0.2949,-0.0763,-0.4291,0.3497,0.1392,-0.1192,0.3021,0.2036,0.1511,0.0857,0.2145,0.3172,-0.1727,0.1654,0.2819,-0.3218,0.0852,0.0659,-0.2742,0.0207,-0.2044,-0.0578,0.0098,-0.3705,0.2006,0.0589,-0.3352,0.0069,0.159,-0.0407}, 111);
SoIndexedFaceSet789->setCoord(*SoCoordinate791);

SoShape785->setGeometry(*SoIndexedFaceSet789);

SoTransform784->addChild(*SoShape785);

SoHAnimSegment783->addChild(*SoTransform784);

SoHAnimJoint782->addChildren(*SoHAnimSegment783);

SoHAnimJoint* SoHAnimJoint792 = new SoHAnimJoint();
SoHAnimJoint792->setDEF(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimJoint792->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint792->setCenter(new float[]{-8.08,28.73,1.55});
SoHAnimSegment* SoHAnimSegment793 = new SoHAnimSegment();
SoHAnimSegment793->setDEF(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimSegment793->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoTransform* SoTransform794 = new SoTransform();
SoTransform794->setTranslation(new float[]{-8.08,28.73,1.55});
SoShape* SoShape795 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance796 = new SoVRMLAppearance();
SoMaterial* SoMaterial797 = new SoMaterial();
SoMaterial797->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance796->addChild(*SoMaterial797);

SoImageTexture* SoImageTexture798 = new SoImageTexture();
SoImageTexture798->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance796->addChild(*SoImageTexture798);

SoShape795->addChild(*SoVRMLAppearance796);

SoIndexedFaceSet* SoIndexedFaceSet799 = new SoIndexedFaceSet();
SoIndexedFaceSet799->setCreaseAngle(3.14159);
SoIndexedFaceSet799->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet799->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate800 = new SoTextureCoordinate();
SoTextureCoordinate800->setPoint(new float[]{0.4716,0.6458,0.468,0.6451,0.471,0.6448,0.4746,0.6455,0.4739,0.6476,0.469,0.6473,0.4769,0.6473,0.4764,0.6466,0.4727,0.6459,0.4678,0.6456,0.4648,0.6459,0.4653,0.6466,0.4718,0.655,0.4662,0.6546,0.4753,0.6546,0.4748,0.6538,0.4704,0.653,0.4649,0.6527,0.4613,0.653,0.4619,0.6538,0.4717,0.6562,0.4657,0.6558,0.4756,0.6559,0.475,0.655,0.4702,0.6541,0.4642,0.6537,0.4603,0.654,0.4609,0.6549,0.4702,0.657,0.4659,0.6567,0.4729,0.6567,0.4725,0.6561,0.4692,0.6555,0.4649,0.6552,0.4622,0.6555,0.4626,0.6561,0.4674,0.6566}, 74);
SoIndexedFaceSet799->setTexCoord(*SoTextureCoordinate800);

SoCoordinate* SoCoordinate801 = new SoCoordinate();
SoCoordinate801->setPoint(new float[]{0.5258,-1.001,0.2196,0.3901,-1.074,0.023,0.3376,-1.029,0.3799,0.2019,-1.102,0.1833,0.6244,-0.8415,0.0751,0.585,-0.8078,0.3428,0.3968,-0.8361,0.503,0.1539,-0.912,0.4758,0.0182,-0.985,0.2792,0.0576,-1.019,0.0115,0.2458,-0.9905,-0.1487,0.4887,-0.9145,-0.1215,0.4357,-0.0607,-0.0712,0.3915,-0.0229,0.229,0.1676,-0.0565,0.4196,-0.1048,-0.1417,0.3891,-0.2662,-0.2286,0.1552,-0.222,-0.2663,-0.1451,0.0018,-0.2328,-0.3357,0.2743,-0.1476,-0.3051,0.4293,0.0682,-0.1026,0.3812,0.1092,0.2242,0.1376,0.0727,0.4317,-0.1589,-0.02,0.3984,-0.3346,-0.1146,0.1438,-0.2865,-0.1556,-0.1829,-0.0429,-0.1191,-0.3904,0.2536,-0.0264,-0.3572,0.2801,0.1629,-0.0879,0.2461,0.1919,0.1432,0.0738,0.1661,0.2899,-0.1359,0.1005,0.2664,-0.2601,0.0337,0.0864,-0.2261,0.0046,-0.1447,-0.0538,0.0304,-0.2914,0.1558,0.096,-0.2679,-0.0055,0.1486,-0.0096}, 111);
SoIndexedFaceSet799->setCoord(*SoCoordinate801);

SoShape795->setGeometry(*SoIndexedFaceSet799);

SoTransform794->addChild(*SoShape795);

SoHAnimSegment793->addChild(*SoTransform794);

SoHAnimJoint792->addChildren(*SoHAnimSegment793);

SoHAnimJoint* SoHAnimJoint802 = new SoHAnimJoint();
SoHAnimJoint802->setDEF(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimJoint802->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint802->setCenter(new float[]{-7.832,27.85,1.735});
SoHAnimSegment* SoHAnimSegment803 = new SoHAnimSegment();
SoHAnimSegment803->setDEF(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimSegment803->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoTransform* SoTransform804 = new SoTransform();
SoTransform804->setTranslation(new float[]{-7.832,27.85,1.735});
SoShape* SoShape805 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance806 = new SoVRMLAppearance();
SoMaterial* SoMaterial807 = new SoMaterial();
SoMaterial807->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance806->addChild(*SoMaterial807);

SoImageTexture* SoImageTexture808 = new SoImageTexture();
SoImageTexture808->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance806->addChild(*SoImageTexture808);

SoShape805->addChild(*SoVRMLAppearance806);

SoIndexedFaceSet* SoIndexedFaceSet809 = new SoIndexedFaceSet();
SoIndexedFaceSet809->setCreaseAngle(3.14159);
SoIndexedFaceSet809->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet809->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate810 = new SoTextureCoordinate();
SoTextureCoordinate810->setPoint(new float[]{0.4723,0.6394,0.469,0.6388,0.4716,0.6383,0.4749,0.6389,0.4747,0.6409,0.4703,0.6408,0.4773,0.6404,0.4767,0.6395,0.4734,0.6389,0.469,0.6389,0.4664,0.6394,0.467,0.6402,0.4744,0.647,0.4694,0.6469,0.4774,0.6463,0.4768,0.6454,0.4729,0.6447,0.4679,0.6446,0.4649,0.6452,0.4655,0.6461,0.4734,0.6485,0.4696,0.6485,0.4758,0.6481,0.4753,0.6473,0.4722,0.6468,0.4684,0.6467,0.4661,0.6472,0.4666,0.6479,0.4709,0.648}, 58);
SoIndexedFaceSet809->setTexCoord(*SoTextureCoordinate810);

SoCoordinate* SoCoordinate811 = new SoCoordinate();
SoCoordinate811->setPoint(new float[]{0.5817,-0.8003,0.0727,0.4584,-0.8658,-0.106,0.4372,-0.8552,0.2109,0.314,-0.9207,0.0322,0.6359,-0.6464,-0.0377,0.62,-0.6384,0.2,0.4756,-0.6933,0.3382,0.2748,-0.7836,0.3078,0.1516,-0.8492,0.1291,0.1675,-0.8572,-0.1085,0.3119,-0.8023,-0.2467,0.5127,-0.712,-0.2163,0.374,-0.0036,-0.0838,0.3562,0.0054,0.1827,0.1843,-0.0599,0.3471,-0.0408,-0.1612,0.313,-0.1875,-0.2392,0.1004,-0.1697,-0.2482,-0.1661,0.0022,-0.1829,-0.3305,0.2274,-0.0816,-0.2964,0.2142,0.1671,-0.0744,0.2005,0.174,0.1306,0.0683,0.1238,0.257,-0.1048,0.0459,0.2308,-0.2176,-0.0141,0.0673,-0.2039,-0.021,-0.1376,-0.0717,0.0292,-0.264,0.1014,0.1072,-0.2378,-0.0214,0.1175,-0.006}, 87);
SoIndexedFaceSet809->setCoord(*SoCoordinate811);

SoShape805->setGeometry(*SoIndexedFaceSet809);

SoTransform804->addChild(*SoShape805);

SoHAnimSegment803->addChild(*SoTransform804);

SoHAnimJoint802->addChildren(*SoHAnimSegment803);

SoHAnimJoint792->addChildren(*SoHAnimJoint802);

SoHAnimJoint782->addChildren(*SoHAnimJoint792);

SoHAnimJoint772->addChildren(*SoHAnimJoint782);

SoHAnimJoint* SoHAnimJoint812 = new SoHAnimJoint();
SoHAnimJoint812->setDEF(QString("hanim_r_carpometacarpal_2"));
SoHAnimJoint812->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint812->setCenter(new float[]{-8.376,28.55,0.5997});
SoHAnimSegment* SoHAnimSegment813 = new SoHAnimSegment();
SoHAnimSegment813->setDEF(QString("hanim_r_metacarpal_2"));
SoHAnimSegment813->X3DNode::setName(QString("r_metacarpal_2"));
SoTransform* SoTransform814 = new SoTransform();
SoTransform814->setTranslation(new float[]{-8.376,28.55,0.5997});
SoShape* SoShape815 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance816 = new SoVRMLAppearance();
SoMaterial* SoMaterial817 = new SoMaterial();
SoMaterial817->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance816->addChild(*SoMaterial817);

SoImageTexture* SoImageTexture818 = new SoImageTexture();
SoImageTexture818->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance816->addChild(*SoImageTexture818);

SoShape815->addChild(*SoVRMLAppearance816);

SoIndexedFaceSet* SoIndexedFaceSet819 = new SoIndexedFaceSet();
SoIndexedFaceSet819->setCreaseAngle(3.14159);
SoIndexedFaceSet819->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet819->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate820 = new SoTextureCoordinate();
SoTextureCoordinate820->setPoint(new float[]{0.453,0.6387,0.4487,0.6387,0.4487,0.6388,0.453,0.6389,0.4561,0.6405,0.453,0.6403,0.4561,0.6406,0.4528,0.6407,0.4485,0.6406,0.4453,0.6405,0.4454,0.6403,0.4487,0.6402,0.4563,0.6497,0.4527,0.6495,0.4562,0.6499,0.4525,0.65,0.4474,0.6499,0.4439,0.6497,0.4439,0.6495,0.4476,0.6494,0.4567,0.6512,0.4528,0.651,0.4566,0.6514,0.4526,0.6515,0.4471,0.6514,0.4432,0.6512,0.4433,0.651,0.4473,0.6509,0.4546,0.6527,0.4519,0.6525,0.4546,0.6528,0.4518,0.6529,0.4478,0.6528,0.4451,0.6527,0.4452,0.6525,0.448,0.6524,0.4498,0.6533}, 74);
SoIndexedFaceSet819->setTexCoord(*SoTextureCoordinate820);

SoCoordinate* SoCoordinate821 = new SoCoordinate();
SoCoordinate821->setPoint(new float[]{0.0229,-1.485,0.1659,0.0277,-1.493,-0.0662,-0.2213,-1.467,0.1625,-0.2166,-1.475,-0.0696,0.2194,-1.321,0.162,0.0326,-1.302,0.3335,-0.2116,-1.284,0.3301,-0.3912,-1.276,0.1535,-0.3864,-1.284,-0.0786,-0.1997,-1.303,-0.2501,0.0446,-1.321,-0.2467,0.2242,-1.329,-0.0701,0.3384,-0.3382,0.1488,0.1289,-0.3166,0.3412,-0.1617,-0.2951,0.3371,-0.3631,-0.2862,0.139,-0.3574,-0.2953,-0.1371,-0.148,-0.3169,-0.3295,0.1426,-0.3384,-0.3254,0.3441,-0.3473,-0.1273,0.3796,-0.1843,0.1553,0.1523,-0.1608,0.364,-0.1629,-0.1375,0.3596,-0.3814,-0.1279,0.1446,-0.3753,-0.1377,-0.1549,-0.148,-0.1611,-0.3636,0.1672,-0.1845,-0.3592,0.3858,-0.1941,-0.1442,0.2808,-0.0217,0.1042,0.1201,-0.0051,0.2518,-0.1029,0.0114,0.2486,-0.2574,0.0182,0.0967,-0.253,0.0113,-0.1151,-0.0923,-0.0053,-0.2627,0.1306,-0.0218,-0.2596,0.2851,-0.0286,-0.1076,0.0187,0.0593,-0.0078}, 111);
SoIndexedFaceSet819->setCoord(*SoCoordinate821);

SoShape815->setGeometry(*SoIndexedFaceSet819);

SoTransform814->addChild(*SoShape815);

SoHAnimSegment813->addChild(*SoTransform814);

SoHAnimJoint812->addChildren(*SoHAnimSegment813);

SoHAnimJoint* SoHAnimJoint822 = new SoHAnimJoint();
SoHAnimJoint822->setDEF(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimJoint822->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint822->setCenter(new float[]{-8.52,27.24,0.6551});
SoHAnimSegment* SoHAnimSegment823 = new SoHAnimSegment();
SoHAnimSegment823->setDEF(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimSegment823->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoTransform* SoTransform824 = new SoTransform();
SoTransform824->setTranslation(new float[]{-8.52,27.24,0.6551});
SoShape* SoShape825 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance826 = new SoVRMLAppearance();
SoMaterial* SoMaterial827 = new SoMaterial();
SoMaterial827->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance826->addChild(*SoMaterial827);

SoImageTexture* SoImageTexture828 = new SoImageTexture();
SoImageTexture828->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance826->addChild(*SoImageTexture828);

SoShape825->addChild(*SoVRMLAppearance826);

SoIndexedFaceSet* SoIndexedFaceSet829 = new SoIndexedFaceSet();
SoIndexedFaceSet829->setCreaseAngle(3.14159);
SoIndexedFaceSet829->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet829->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate830 = new SoTextureCoordinate();
SoTextureCoordinate830->setPoint(new float[]{0.454,0.6279,0.4498,0.6279,0.4498,0.6277,0.454,0.6277,0.4571,0.6295,0.4539,0.6296,0.4571,0.6293,0.4539,0.6291,0.4496,0.6291,0.4464,0.6292,0.4465,0.6294,0.4497,0.6295,0.4573,0.6381,0.4537,0.6382,0.4572,0.6379,0.4536,0.6377,0.4486,0.6376,0.445,0.6377,0.445,0.6379,0.4486,0.6381,0.4578,0.6395,0.4538,0.6396,0.4577,0.6392,0.4538,0.639,0.4482,0.6389,0.4443,0.639,0.4444,0.6393,0.4483,0.6395,0.4557,0.6408,0.4529,0.6408,0.4557,0.6406,0.4529,0.6404,0.449,0.6404,0.4462,0.6404,0.4462,0.6406,0.449,0.6408,0.4509,0.6412}, 74);
SoIndexedFaceSet829->setTexCoord(*SoTextureCoordinate830);

SoCoordinate* SoCoordinate831 = new SoCoordinate();
SoCoordinate831->setPoint(new float[]{0.2499,-1.331,0.1644,0.2541,-1.339,-0.0655,0.0349,-1.351,0.1633,0.0391,-1.359,-0.0666,0.3958,-1.152,0.159,0.2314,-1.162,0.3307,0.0165,-1.182,0.3296,-0.1416,-1.203,0.1563,-0.1374,-1.21,-0.0736,0.0269,-1.201,-0.2453,0.2419,-1.181,-0.2442,0.4,-1.16,-0.0709,0.3504,-0.2375,0.1465,0.166,-0.2482,0.3391,-0.0897,-0.2722,0.3377,-0.267,-0.2955,0.1434,-0.2621,-0.3044,-0.1302,-0.0777,-0.2937,-0.3227,0.1781,-0.2697,-0.3214,0.3554,-0.2464,-0.127,0.3661,-0.0905,0.1542,0.1642,-0.1021,0.365,-0.1159,-0.1284,0.3636,-0.3101,-0.1539,0.1508,-0.3046,-0.1637,-0.1488,-0.1027,-0.152,-0.3596,0.1774,-0.1258,-0.3581,0.3715,-0.1003,-0.1453,0.2544,0.0426,0.1044,0.1117,0.0344,0.2535,-0.0864,0.0158,0.2525,-0.2237,-0.0022,0.102,-0.2198,-0.0091,-0.1098,-0.077,-0.0009,-0.2589,0.121,0.0177,-0.2579,0.2583,0.0357,-0.1074,0.0117,0.0763,-0.005}, 111);
SoIndexedFaceSet829->setCoord(*SoCoordinate831);

SoShape825->setGeometry(*SoIndexedFaceSet829);

SoTransform824->addChild(*SoShape825);

SoHAnimSegment823->addChild(*SoTransform824);

SoHAnimJoint822->addChildren(*SoHAnimSegment823);

SoHAnimJoint* SoHAnimJoint832 = new SoHAnimJoint();
SoHAnimJoint832->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint832->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint832->setCenter(new float[]{-8.45,26.1,0.6956});
SoHAnimSegment* SoHAnimSegment833 = new SoHAnimSegment();
SoHAnimSegment833->setDEF(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimSegment833->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoTransform* SoTransform834 = new SoTransform();
SoTransform834->setTranslation(new float[]{-8.45,26.1,0.6956});
SoShape* SoShape835 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance836 = new SoVRMLAppearance();
SoMaterial* SoMaterial837 = new SoMaterial();
SoMaterial837->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance836->addChild(*SoMaterial837);

SoImageTexture* SoImageTexture838 = new SoImageTexture();
SoImageTexture838->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance836->addChild(*SoImageTexture838);

SoShape835->addChild(*SoVRMLAppearance836);

SoIndexedFaceSet* SoIndexedFaceSet839 = new SoIndexedFaceSet();
SoIndexedFaceSet839->setCreaseAngle(3.14159);
SoIndexedFaceSet839->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet839->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate840 = new SoTextureCoordinate();
SoTextureCoordinate840->setPoint(new float[]{0.4546,0.6191,0.4506,0.619,0.4506,0.6185,0.4546,0.6186,0.4575,0.6206,0.4545,0.6209,0.4576,0.6201,0.4545,0.6196,0.4505,0.6196,0.4474,0.6199,0.4474,0.6204,0.4505,0.6209,0.4572,0.6286,0.4541,0.6289,0.4572,0.628,0.4541,0.6276,0.4497,0.6275,0.4466,0.6279,0.4465,0.6284,0.4497,0.6289,0.4558,0.631,0.4534,0.6313,0.4558,0.6306,0.4534,0.6302,0.45,0.6302,0.4475,0.6305,0.4475,0.6309,0.45,0.6312,0.4516,0.6313}, 58);
SoIndexedFaceSet839->setTexCoord(*SoTextureCoordinate840);

SoCoordinate* SoCoordinate841 = new SoCoordinate();
SoCoordinate841->setPoint(new float[]{0.4479,-1.125,0.1554,0.4519,-1.132,-0.0632,0.2499,-1.18,0.1557,0.2539,-1.187,-0.0629,0.5544,-0.9319,0.1491,0.4029,-0.9674,0.3134,0.2049,-1.022,0.3137,0.0594,-1.068,0.1499,0.0634,-1.075,-0.0687,0.2149,-1.04,-0.2329,0.4129,-0.9852,-0.2333,0.5584,-0.939,-0.0695,0.3333,-0.0803,0.1251,0.1781,-0.1166,0.2933,-0.037,-0.1758,0.2937,-0.186,-0.2231,0.1259,-0.1817,-0.2308,-0.1116,-0.0265,-0.1945,-0.2799,0.1886,-0.1353,-0.2802,0.3376,-0.088,-0.1125,0.2019,0.1709,0.088,0.0815,0.1427,0.2185,-0.0854,0.0967,0.2188,-0.2011,0.06,0.0887,-0.1977,0.054,-0.0957,-0.0773,0.0822,-0.2262,0.0896,0.1281,-0.2265,0.2053,0.1648,-0.0963,-0.0132,0.1679,-0.006}, 87);
SoIndexedFaceSet839->setCoord(*SoCoordinate841);

SoShape835->setGeometry(*SoIndexedFaceSet839);

SoTransform834->addChild(*SoShape835);

SoHAnimSegment833->addChild(*SoTransform834);

SoHAnimJoint832->addChildren(*SoHAnimSegment833);

SoHAnimJoint* SoHAnimJoint842 = new SoHAnimJoint();
SoHAnimJoint842->setDEF(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint842->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint842->setCenter(new float[]{-8.192,25.17,0.7315});
SoHAnimSegment* SoHAnimSegment843 = new SoHAnimSegment();
SoHAnimSegment843->setDEF(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimSegment843->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoTransform* SoTransform844 = new SoTransform();
SoTransform844->setTranslation(new float[]{-8.192,25.17,0.7315});
SoShape* SoShape845 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance846 = new SoVRMLAppearance();
SoMaterial* SoMaterial847 = new SoMaterial();
SoMaterial847->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance846->addChild(*SoMaterial847);

SoImageTexture* SoImageTexture848 = new SoImageTexture();
SoImageTexture848->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance846->addChild(*SoImageTexture848);

SoShape845->addChild(*SoVRMLAppearance846);

SoIndexedFaceSet* SoIndexedFaceSet849 = new SoIndexedFaceSet();
SoIndexedFaceSet849->setCreaseAngle(3.14159);
SoIndexedFaceSet849->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet849->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate850 = new SoTextureCoordinate();
SoTextureCoordinate850->setPoint(new float[]{0.455,0.6109,0.4515,0.6108,0.4515,0.6101,0.455,0.6102,0.4575,0.6123,0.4549,0.6128,0.4576,0.6116,0.455,0.611,0.4514,0.6109,0.4488,0.6114,0.4488,0.6121,0.4514,0.6127,0.4576,0.6198,0.4546,0.6204,0.4576,0.619,0.4547,0.6183,0.4505,0.6182,0.4475,0.6188,0.4475,0.6197,0.4504,0.6203,0.4567,0.6213,0.4542,0.6217,0.4567,0.6206,0.4542,0.6202,0.4507,0.6202,0.4482,0.6206,0.4482,0.6213,0.4506,0.6217,0.4523,0.6218}, 58);
SoIndexedFaceSet849->setTexCoord(*SoTextureCoordinate850);

SoCoordinate* SoCoordinate851 = new SoCoordinate();
SoCoordinate851->setPoint(new float[]{0.6187,-1.071,0.1411,0.6221,-1.077,-0.0485,0.4578,-1.147,0.1426,0.4613,-1.153,-0.047,0.6714,-0.8704,0.1341,0.5482,-0.923,0.2774,0.3873,-0.9993,0.2789,0.2693,-1.061,0.1378,0.2727,-1.067,-0.0518,0.396,-1.015,-0.1951,0.5568,-0.9385,-0.1966,0.6749,-0.8765,-0.0555,0.3236,-0.0612,0.1191,0.1854,-0.1202,0.2799,-0.006,-0.211,0.2816,-0.1384,-0.2805,0.1233,-0.1343,-0.2879,-0.1023,0.004,-0.2288,-0.263,0.1953,-0.138,-0.2647,0.3277,-0.0685,-0.1065,0.2135,0.0836,0.0963,0.0945,0.035,0.233,-0.0723,-0.0325,0.2317,-0.1865,-0.0807,0.0968,-0.1843,-0.0816,-0.0912,-0.0691,-0.0336,-0.2249,0.0937,0.0356,-0.2277,0.2116,0.0844,-0.0958,-0.0314,0.0875,-0.0035}, 87);
SoIndexedFaceSet849->setCoord(*SoCoordinate851);

SoShape845->setGeometry(*SoIndexedFaceSet849);

SoTransform844->addChild(*SoShape845);

SoHAnimSegment843->addChild(*SoTransform844);

SoHAnimJoint842->addChildren(*SoHAnimSegment843);

SoHAnimJoint832->addChildren(*SoHAnimJoint842);

SoHAnimJoint822->addChildren(*SoHAnimJoint832);

SoHAnimJoint812->addChildren(*SoHAnimJoint822);

SoHAnimJoint772->addChildren(*SoHAnimJoint812);

SoHAnimJoint* SoHAnimJoint852 = new SoHAnimJoint();
SoHAnimJoint852->setDEF(QString("hanim_r_carpometacarpal_3"));
SoHAnimJoint852->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint852->setCenter(new float[]{-8.344,28.65,-0.194});
SoHAnimSegment* SoHAnimSegment853 = new SoHAnimSegment();
SoHAnimSegment853->setDEF(QString("hanim_r_metacarpal_3"));
SoHAnimSegment853->X3DNode::setName(QString("r_metacarpal_3"));
SoTransform* SoTransform854 = new SoTransform();
SoTransform854->setTranslation(new float[]{-8.344,28.65,-0.194});
SoShape* SoShape855 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance856 = new SoVRMLAppearance();
SoMaterial* SoMaterial857 = new SoMaterial();
SoMaterial857->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance856->addChild(*SoMaterial857);

SoImageTexture* SoImageTexture858 = new SoImageTexture();
SoImageTexture858->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance856->addChild(*SoImageTexture858);

SoShape855->addChild(*SoVRMLAppearance856);

SoIndexedFaceSet* SoIndexedFaceSet859 = new SoIndexedFaceSet();
SoIndexedFaceSet859->setCreaseAngle(3.14159);
SoIndexedFaceSet859->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet859->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate860 = new SoTextureCoordinate();
SoTextureCoordinate860->setPoint(new float[]{0.4371,0.6382,0.4328,0.6382,0.4329,0.6384,0.4372,0.6384,0.4403,0.64,0.4369,0.6398,0.4405,0.6401,0.4374,0.6403,0.4331,0.6403,0.4298,0.6402,0.4296,0.64,0.4326,0.6398,0.4413,0.6498,0.4375,0.6497,0.4415,0.65,0.438,0.6502,0.4329,0.6502,0.4291,0.6501,0.4289,0.6499,0.4324,0.6497,0.4418,0.6514,0.4377,0.6512,0.442,0.6516,0.4383,0.6518,0.4327,0.6518,0.4286,0.6517,0.4284,0.6514,0.4321,0.6512,0.4399,0.653,0.437,0.6529,0.4401,0.6531,0.4374,0.6533,0.4335,0.6533,0.4306,0.6532,0.4304,0.653,0.4331,0.6529,0.4352,0.6537}, 74);
SoIndexedFaceSet859->setTexCoord(*SoTextureCoordinate860);

SoCoordinate* SoCoordinate861 = new SoCoordinate();
SoCoordinate861->setPoint(new float[]{-0.0157,-1.601,0.0972,-0.0217,-1.599,-0.1348,-0.2598,-1.581,0.1076,-0.2658,-1.578,-0.1245,0.183,-1.427,0.091,0.0045,-1.414,0.2728,-0.2395,-1.393,0.2832,-0.4271,-1.376,0.1169,-0.4331,-1.374,-0.1151,-0.2546,-1.387,-0.2969,-0.0105,-1.408,-0.3073,0.177,-1.425,-0.1411,0.3164,-0.3793,0.1197,0.1161,-0.3643,0.3236,-0.1742,-0.3403,0.3359,-0.3846,-0.3213,0.1495,-0.3918,-0.3185,-0.1266,-0.1915,-0.3335,-0.3306,0.0988,-0.3575,-0.3429,0.3092,-0.3765,-0.1564,0.3602,-0.2157,0.1315,0.143,-0.1995,0.3527,-0.172,-0.1734,0.3661,-0.4003,-0.1528,0.1638,-0.408,-0.1498,-0.1357,-0.1908,-0.166,-0.357,0.1242,-0.1921,-0.3703,0.3524,-0.2126,-0.168,0.2615,-0.0399,0.0937,0.1079,-0.0284,0.2501,-0.1148,-0.01,0.2596,-0.2762,0.0046,0.1165,-0.2817,0.0068,-0.0952,-0.1281,-0.0047,-0.2517,0.0946,-0.0232,-0.2611,0.256,-0.0377,-0.1181,-0.0044,0.0523,-0.0002}, 111);
SoIndexedFaceSet859->setCoord(*SoCoordinate861);

SoShape855->setGeometry(*SoIndexedFaceSet859);

SoTransform854->addChild(*SoShape855);

SoHAnimSegment853->addChild(*SoTransform854);

SoHAnimJoint852->addChildren(*SoHAnimSegment853);

SoHAnimJoint* SoHAnimJoint862 = new SoHAnimJoint();
SoHAnimJoint862->setDEF(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimJoint862->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint862->setCenter(new float[]{-8.52,27.26,-0.1959});
SoHAnimSegment* SoHAnimSegment863 = new SoHAnimSegment();
SoHAnimSegment863->setDEF(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimSegment863->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoTransform* SoTransform864 = new SoTransform();
SoTransform864->setTranslation(new float[]{-8.52,27.26,-0.1959});
SoShape* SoShape865 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance866 = new SoVRMLAppearance();
SoMaterial* SoMaterial867 = new SoMaterial();
SoMaterial867->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance866->addChild(*SoMaterial867);

SoImageTexture* SoImageTexture868 = new SoImageTexture();
SoImageTexture868->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance866->addChild(*SoImageTexture868);

SoShape865->addChild(*SoVRMLAppearance866);

SoIndexedFaceSet* SoIndexedFaceSet869 = new SoIndexedFaceSet();
SoIndexedFaceSet869->setCreaseAngle(3.14159);
SoIndexedFaceSet869->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet869->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate870 = new SoTextureCoordinate();
SoTextureCoordinate870->setPoint(new float[]{0.4369,0.6266,0.4327,0.6266,0.4328,0.6264,0.4371,0.6264,0.4402,0.6282,0.4368,0.6283,0.4403,0.628,0.4373,0.6279,0.433,0.6279,0.4297,0.628,0.4295,0.6282,0.4326,0.6284,0.4412,0.6373,0.4375,0.6375,0.4414,0.6371,0.438,0.637,0.4329,0.637,0.4292,0.6372,0.429,0.6374,0.4324,0.6375,0.4418,0.6388,0.4378,0.639,0.4421,0.6385,0.4383,0.6384,0.4327,0.6384,0.4287,0.6386,0.4284,0.6389,0.4322,0.639,0.4399,0.6402,0.4371,0.6403,0.4401,0.64,0.4374,0.6399,0.4335,0.6399,0.4306,0.6401,0.4305,0.6402,0.4331,0.6404,0.4353,0.6407}, 74);
SoIndexedFaceSet869->setTexCoord(*SoTextureCoordinate870);

SoCoordinate* SoCoordinate871 = new SoCoordinate();
SoCoordinate871->setPoint(new float[]{0.2259,-1.448,0.0923,0.2194,-1.446,-0.1376,0.0106,-1.469,0.1016,0.0041,-1.467,-0.1283,0.3742,-1.258,0.088,0.2177,-1.275,0.2673,0.0024,-1.296,0.2766,-0.1639,-1.31,0.1112,-0.1704,-1.307,-0.1187,-0.0138,-1.29,-0.2981,0.2014,-1.269,-0.3073,0.3677,-1.255,-0.1419,0.3422,-0.2825,0.1227,0.1666,-0.302,0.3239,-0.0895,-0.3267,0.3349,-0.2761,-0.3422,0.1493,-0.2838,-0.3394,-0.1242,-0.1082,-0.3199,-0.3253,0.1479,-0.2952,-0.3364,0.3345,-0.2797,-0.1508,0.3605,-0.1263,0.1367,0.1681,-0.1476,0.357,-0.1123,-0.1747,0.3691,-0.3166,-0.1917,0.1659,-0.3251,-0.1886,-0.1336,-0.1327,-0.1672,-0.3539,0.1477,-0.1401,-0.366,0.352,-0.1232,-0.1627,0.2486,0.0181,0.0994,0.1126,0.003,0.2552,-0.0857,-0.0161,0.2638,-0.2302,-0.0281,0.1201,-0.2362,-0.0259,-0.0917,-0.1002,-0.0108,-0.2475,0.0981,0.0083,-0.256,0.2426,0.0203,-0.1123,0.0014,0.0597,0.0048}, 111);
SoIndexedFaceSet869->setCoord(*SoCoordinate871);

SoShape865->setGeometry(*SoIndexedFaceSet869);

SoTransform864->addChild(*SoShape865);

SoHAnimSegment863->addChild(*SoTransform864);

SoHAnimJoint862->addChildren(*SoHAnimSegment863);

SoHAnimJoint* SoHAnimJoint872 = new SoHAnimJoint();
SoHAnimJoint872->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint872->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint872->setCenter(new float[]{-8.477,26.07,-0.2214});
SoHAnimSegment* SoHAnimSegment873 = new SoHAnimSegment();
SoHAnimSegment873->setDEF(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimSegment873->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoTransform* SoTransform874 = new SoTransform();
SoTransform874->setTranslation(new float[]{-8.477,26.07,-0.2214});
SoShape* SoShape875 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance876 = new SoVRMLAppearance();
SoMaterial* SoMaterial877 = new SoMaterial();
SoMaterial877->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance876->addChild(*SoMaterial877);

SoImageTexture* SoImageTexture878 = new SoImageTexture();
SoImageTexture878->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance876->addChild(*SoImageTexture878);

SoShape875->addChild(*SoVRMLAppearance876);

SoIndexedFaceSet* SoIndexedFaceSet879 = new SoIndexedFaceSet();
SoIndexedFaceSet879->setCreaseAngle(3.14159);
SoIndexedFaceSet879->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet879->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate880 = new SoTextureCoordinate();
SoTextureCoordinate880->setPoint(new float[]{0.4364,0.617,0.4323,0.6171,0.4325,0.6165,0.4365,0.6165,0.4395,0.6186,0.4363,0.619,0.4397,0.618,0.4367,0.6176,0.4327,0.6176,0.4295,0.6181,0.4294,0.6186,0.4323,0.619,0.4401,0.6271,0.4369,0.6275,0.4403,0.6265,0.4373,0.6261,0.4329,0.6261,0.4297,0.6266,0.4295,0.6271,0.4325,0.6275,0.4391,0.6297,0.4366,0.6301,0.4392,0.6293,0.4369,0.629,0.4335,0.629,0.431,0.6293,0.4308,0.6298,0.4331,0.6301,0.435,0.6301}, 58);
SoIndexedFaceSet879->setTexCoord(*SoTextureCoordinate880);

SoCoordinate* SoCoordinate881 = new SoCoordinate();
SoCoordinate881->setPoint(new float[]{0.4389,-1.268,0.089,0.4327,-1.265,-0.1296,0.2401,-1.325,0.0971,0.234,-1.323,-0.1215,0.5481,-1.062,0.0865,0.4036,-1.106,0.2566,0.2049,-1.164,0.2647,0.0512,-1.205,0.1068,0.045,-1.203,-0.1118,0.1894,-1.158,-0.2818,0.3882,-1.101,-0.2899,0.5419,-1.059,-0.132,0.3388,-0.1526,0.1159,0.1909,-0.1984,0.2901,-0.025,-0.2608,0.2989,-0.1825,-0.3032,0.1372,-0.1892,-0.3008,-0.1003,-0.0412,-0.2549,-0.2744,0.1747,-0.1925,-0.2833,0.3321,-0.1501,-0.1216,0.2096,0.117,0.0982,0.0948,0.0814,0.2333,-0.0727,0.033,0.2402,-0.1949,0.0001,0.1147,-0.2001,0.002,-0.0696,-0.0853,0.0376,-0.2048,0.0823,0.086,-0.2116,0.2044,0.1189,-0.0861,-0.0097,0.1188,0.0156}, 87);
SoIndexedFaceSet879->setCoord(*SoCoordinate881);

SoShape875->setGeometry(*SoIndexedFaceSet879);

SoTransform874->addChild(*SoShape875);

SoHAnimSegment873->addChild(*SoTransform874);

SoHAnimJoint872->addChildren(*SoHAnimSegment873);

SoHAnimJoint* SoHAnimJoint882 = new SoHAnimJoint();
SoHAnimJoint882->setDEF(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint882->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint882->setCenter(new float[]{-8.25,25.03,-0.2187});
SoHAnimSegment* SoHAnimSegment883 = new SoHAnimSegment();
SoHAnimSegment883->setDEF(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimSegment883->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoTransform* SoTransform884 = new SoTransform();
SoTransform884->setTranslation(new float[]{-8.25,25.03,-0.2187});
SoShape* SoShape885 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance886 = new SoVRMLAppearance();
SoMaterial* SoMaterial887 = new SoMaterial();
SoMaterial887->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance886->addChild(*SoMaterial887);

SoImageTexture* SoImageTexture888 = new SoImageTexture();
SoImageTexture888->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance886->addChild(*SoImageTexture888);

SoShape885->addChild(*SoVRMLAppearance886);

SoIndexedFaceSet* SoIndexedFaceSet889 = new SoIndexedFaceSet();
SoIndexedFaceSet889->setCreaseAngle(3.14159);
SoIndexedFaceSet889->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet889->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate890 = new SoTextureCoordinate();
SoTextureCoordinate890->setPoint(new float[]{0.4356,0.6082,0.4321,0.6082,0.4322,0.6074,0.4357,0.6074,0.4383,0.6096,0.4356,0.6102,0.4384,0.6088,0.4359,0.6083,0.4324,0.6083,0.4296,0.6089,0.4295,0.6096,0.4321,0.6102,0.4394,0.6176,0.4364,0.6183,0.4396,0.6167,0.4367,0.6161,0.4325,0.6161,0.4295,0.6168,0.4293,0.6177,0.4322,0.6183,0.4388,0.6192,0.4362,0.6198,0.4389,0.6186,0.4364,0.6181,0.433,0.6182,0.4304,0.6187,0.4303,0.6194,0.4326,0.6199,0.4346,0.6199}, 58);
SoIndexedFaceSet889->setTexCoord(*SoTextureCoordinate890);

SoCoordinate* SoCoordinate891 = new SoCoordinate();
SoCoordinate891->setPoint(new float[]{0.631,-1.169,0.0421,0.6256,-1.167,-0.1475,0.4691,-1.25,0.0483,0.4637,-1.248,-0.1413,0.6864,-0.9557,0.0421,0.569,-1.018,0.1889,0.4071,-1.099,0.1951,0.2817,-1.158,0.0576,0.2763,-1.156,-0.1319,0.3937,-1.094,-0.2788,0.5556,-1.013,-0.285,0.681,-0.9537,-0.1474,0.3504,-0.0919,0.0851,0.2187,-0.1616,0.2498,0.026,-0.2579,0.2572,-0.1147,-0.3243,0.1029,-0.121,-0.322,-0.1226,0.0106,-0.2523,-0.2873,0.2033,-0.156,-0.2946,0.344,-0.0896,-0.1404,0.2414,0.0637,0.0753,0.128,0.0061,0.2155,-0.0399,-0.0652,0.2197,-0.161,-0.1101,0.0888,-0.1675,-0.1027,-0.0988,-0.0577,-0.0458,-0.2359,0.106,0.0275,-0.2439,0.2307,0.0733,-0.1162,-0.0079,0.0731,-0.0112}, 87);
SoIndexedFaceSet889->setCoord(*SoCoordinate891);

SoShape885->setGeometry(*SoIndexedFaceSet889);

SoTransform884->addChild(*SoShape885);

SoHAnimSegment883->addChild(*SoTransform884);

SoHAnimJoint882->addChildren(*SoHAnimSegment883);

SoHAnimJoint872->addChildren(*SoHAnimJoint882);

SoHAnimJoint862->addChildren(*SoHAnimJoint872);

SoHAnimJoint852->addChildren(*SoHAnimJoint862);

SoHAnimJoint772->addChildren(*SoHAnimJoint852);

SoHAnimJoint* SoHAnimJoint892 = new SoHAnimJoint();
SoHAnimJoint892->setDEF(QString("hanim_r_carpometacarpal_4"));
SoHAnimJoint892->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint892->setCenter(new float[]{-8.339,28.57,-0.9243});
SoHAnimSegment* SoHAnimSegment893 = new SoHAnimSegment();
SoHAnimSegment893->setDEF(QString("hanim_r_metacarpal_4"));
SoHAnimSegment893->X3DNode::setName(QString("r_metacarpal_4"));
SoTransform* SoTransform894 = new SoTransform();
SoTransform894->setTranslation(new float[]{-8.339,28.57,-0.9243});
SoShape* SoShape895 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance896 = new SoVRMLAppearance();
SoMaterial* SoMaterial897 = new SoMaterial();
SoMaterial897->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance896->addChild(*SoMaterial897);

SoImageTexture* SoImageTexture898 = new SoImageTexture();
SoImageTexture898->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance896->addChild(*SoImageTexture898);

SoShape895->addChild(*SoVRMLAppearance896);

SoIndexedFaceSet* SoIndexedFaceSet899 = new SoIndexedFaceSet();
SoIndexedFaceSet899->setCreaseAngle(3.14159);
SoIndexedFaceSet899->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet899->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate900 = new SoTextureCoordinate();
SoTextureCoordinate900->setPoint(new float[]{0.4223,0.6397,0.4182,0.6398,0.4179,0.64,0.422,0.6399,0.4255,0.6412,0.4227,0.6412,0.4252,0.6414,0.422,0.6417,0.418,0.6418,0.4151,0.6417,0.4154,0.6415,0.4187,0.6413,0.4275,0.6502,0.4244,0.6501,0.4272,0.6504,0.4235,0.6507,0.4187,0.6508,0.4156,0.6508,0.4159,0.6505,0.4196,0.6503,0.4282,0.6516,0.4248,0.6515,0.4279,0.6519,0.4239,0.6522,0.4187,0.6523,0.4153,0.6522,0.4156,0.652,0.4196,0.6517,0.4265,0.6531,0.4241,0.6531,0.4263,0.6533,0.4235,0.6535,0.4198,0.6536,0.4174,0.6536,0.4176,0.6534,0.4204,0.6532,0.422,0.6539}, 74);
SoIndexedFaceSet899->setTexCoord(*SoTextureCoordinate900);

SoCoordinate* SoCoordinate901 = new SoCoordinate();
SoCoordinate901->setPoint(new float[]{0.014,-1.366,0.0295,0.0298,-1.354,-0.1885,-0.2211,-1.344,0.0143,-0.2053,-1.332,-0.2037,0.205,-1.209,0.0528,0.0169,-1.202,0.2049,-0.2182,-1.181,0.1897,-0.3826,-1.156,0.0148,-0.3668,-1.144,-0.2032,-0.1787,-1.151,-0.3553,0.0564,-1.172,-0.3401,0.2209,-1.197,-0.1652,0.3293,-0.2545,0.1423,0.1183,-0.2468,0.3129,-0.1614,-0.2216,0.2949,-0.3458,-0.1936,0.0987,-0.327,-0.1793,-0.1607,-0.116,-0.187,-0.3313,0.1637,-0.2122,-0.3132,0.3482,-0.2402,-0.117,0.3702,-0.1061,0.1656,0.1412,-0.0977,0.3507,-0.1622,-0.0704,0.3311,-0.3623,-0.04,0.1183,-0.3419,-0.0245,-0.1631,-0.1129,-0.0329,-0.3482,0.1905,-0.0602,-0.3286,0.3906,-0.0905,-0.1158,0.2788,0.0575,0.1279,0.1169,0.0634,0.2588,-0.0976,0.0827,0.2449,-0.2391,0.1042,0.0944,-0.2247,0.1152,-0.1045,-0.0628,0.1093,-0.2354,0.1518,0.0899,-0.2215,0.2933,0.0685,-0.0711,0.0325,0.1491,0.016}, 111);
SoIndexedFaceSet899->setCoord(*SoCoordinate901);

SoShape895->setGeometry(*SoIndexedFaceSet899);

SoTransform894->addChild(*SoShape895);

SoHAnimSegment893->addChild(*SoTransform894);

SoHAnimJoint892->addChildren(*SoHAnimSegment893);

SoHAnimJoint* SoHAnimJoint902 = new SoHAnimJoint();
SoHAnimJoint902->setDEF(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimJoint902->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint902->setCenter(new float[]{-8.428,27.3,-0.9985});
SoHAnimSegment* SoHAnimSegment903 = new SoHAnimSegment();
SoHAnimSegment903->setDEF(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimSegment903->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoTransform* SoTransform904 = new SoTransform();
SoTransform904->setTranslation(new float[]{-8.428,27.3,-0.9985});
SoShape* SoShape905 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance906 = new SoVRMLAppearance();
SoMaterial* SoMaterial907 = new SoMaterial();
SoMaterial907->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance906->addChild(*SoMaterial907);

SoImageTexture* SoImageTexture908 = new SoImageTexture();
SoImageTexture908->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance906->addChild(*SoImageTexture908);

SoShape905->addChild(*SoVRMLAppearance906);

SoIndexedFaceSet* SoIndexedFaceSet909 = new SoIndexedFaceSet();
SoIndexedFaceSet909->setCreaseAngle(3.14159);
SoIndexedFaceSet909->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet909->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate910 = new SoTextureCoordinate();
SoTextureCoordinate910->setPoint(new float[]{0.4212,0.6288,0.4172,0.6289,0.4169,0.6288,0.4209,0.6287,0.4244,0.6302,0.4216,0.6304,0.4241,0.6301,0.4209,0.63,0.4169,0.6301,0.4141,0.6304,0.4144,0.6305,0.4176,0.6306,0.4261,0.6386,0.423,0.6388,0.4258,0.6384,0.4222,0.6383,0.4174,0.6385,0.4143,0.6387,0.4146,0.6389,0.4182,0.6389,0.4268,0.6399,0.4234,0.6401,0.4265,0.6397,0.4225,0.6396,0.4173,0.6398,0.4139,0.64,0.4142,0.6402,0.4182,0.6403,0.4251,0.6412,0.4226,0.6414,0.4248,0.6411,0.422,0.641,0.4183,0.6411,0.4159,0.6413,0.4162,0.6415,0.419,0.6415,0.4206,0.6418}, 74);
SoIndexedFaceSet909->setTexCoord(*SoTextureCoordinate910);

SoCoordinate* SoCoordinate911 = new SoCoordinate();
SoCoordinate911->setPoint(new float[]{0.1847,-1.253,0.0467,0.1998,-1.241,-0.1693,-0.0227,-1.271,0.0316,-0.0076,-1.259,-0.1844,0.3279,-1.08,0.0673,0.161,-1.102,0.2179,-0.0464,-1.12,0.2028,-0.1906,-1.124,0.0295,-0.1754,-1.112,-0.1865,-0.0085,-1.09,-0.3372,0.1989,-1.072,-0.3221,0.3431,-1.068,-0.1487,0.2967,-0.1902,0.1418,0.1095,-0.215,0.3108,-0.1373,-0.2358,0.2929,-0.299,-0.2404,0.0984,-0.281,-0.2262,-0.1586,-0.0938,-0.2014,-0.3276,0.153,-0.1807,-0.3096,0.3147,-0.176,-0.1151,0.3133,-0.0482,0.1642,0.1083,-0.0753,0.3493,-0.1619,-0.0981,0.3296,-0.339,-0.1032,0.1167,-0.3192,-0.0876,-0.1647,-0.1142,-0.0605,-0.3498,0.156,-0.0377,-0.3301,0.3331,-0.0327,-0.1172,0.2099,0.0863,0.1241,0.0649,0.0671,0.255,-0.1261,0.051,0.2411,-0.2514,0.0474,0.0905,-0.2374,0.0585,-0.1085,-0.0924,0.0776,-0.2393,0.0986,0.0937,-0.2254,0.2239,0.0973,-0.0749,-0.0182,0.1305,0.0112}, 111);
SoIndexedFaceSet909->setCoord(*SoCoordinate911);

SoShape905->setGeometry(*SoIndexedFaceSet909);

SoTransform904->addChild(*SoShape905);

SoHAnimSegment903->addChild(*SoTransform904);

SoHAnimJoint902->addChildren(*SoHAnimSegment903);

SoHAnimJoint* SoHAnimJoint912 = new SoHAnimJoint();
SoHAnimJoint912->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint912->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint912->setCenter(new float[]{-8.428,26.29,-1.034});
SoHAnimSegment* SoHAnimSegment913 = new SoHAnimSegment();
SoHAnimSegment913->setDEF(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimSegment913->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoTransform* SoTransform914 = new SoTransform();
SoTransform914->setTranslation(new float[]{-8.428,26.29,-1.034});
SoShape* SoShape915 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance916 = new SoVRMLAppearance();
SoMaterial* SoMaterial917 = new SoMaterial();
SoMaterial917->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance916->addChild(*SoMaterial917);

SoImageTexture* SoImageTexture918 = new SoImageTexture();
SoImageTexture918->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance916->addChild(*SoImageTexture918);

SoShape915->addChild(*SoVRMLAppearance916);

SoIndexedFaceSet* SoIndexedFaceSet919 = new SoIndexedFaceSet();
SoIndexedFaceSet919->setCreaseAngle(3.14159);
SoIndexedFaceSet919->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet919->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate920 = new SoTextureCoordinate();
SoTextureCoordinate920->setPoint(new float[]{0.4203,0.6204,0.4166,0.6205,0.4163,0.62,0.42,0.6199,0.4232,0.6217,0.4207,0.6221,0.4229,0.6212,0.4199,0.6209,0.4162,0.621,0.4136,0.6215,0.4139,0.622,0.4169,0.6222,0.4242,0.6295,0.4215,0.6299,0.4239,0.629,0.4208,0.6287,0.4167,0.6288,0.4141,0.6293,0.4144,0.6298,0.4175,0.6301,0.4233,0.6319,0.4212,0.6323,0.423,0.6315,0.4206,0.6313,0.4175,0.6314,0.4154,0.6317,0.4157,0.6321,0.4181,0.6324,0.4194,0.6323}, 58);
SoIndexedFaceSet919->setTexCoord(*SoTextureCoordinate920);

SoCoordinate* SoCoordinate921 = new SoCoordinate();
SoCoordinate921->setPoint(new float[]{0.412,-1.137,0.0335,0.4261,-1.125,-0.1679,0.2243,-1.187,0.0176,0.2385,-1.176,-0.1838,0.5153,-0.9493,0.0522,0.3639,-0.9958,0.1913,0.1762,-1.047,0.1754,0.0461,-1.076,0.0125,0.0602,-1.065,-0.1888,0.2116,-1.019,-0.3279,0.3992,-0.9679,-0.312,0.5294,-0.9381,-0.1491,0.3178,-0.1177,0.1,0.1627,-0.1653,0.2425,-0.0412,-0.2206,0.2252,-0.1745,-0.2511,0.0583,-0.1591,-0.239,-0.1604,-0.0041,-0.1914,-0.3029,0.1998,-0.1361,-0.2856,0.3331,-0.1056,-0.1188,0.1985,0.1307,0.0829,0.0782,0.0937,0.1934,-0.08,0.0508,0.18,-0.1835,0.0271,0.0505,-0.1716,0.0365,-0.1192,-0.0513,0.0735,-0.2298,0.1069,0.1164,-0.2164,0.2104,0.1401,-0.0869,-0.0002,0.1379,-0.0157}, 87);
SoIndexedFaceSet919->setCoord(*SoCoordinate921);

SoShape915->setGeometry(*SoIndexedFaceSet919);

SoTransform914->addChild(*SoShape915);

SoHAnimSegment913->addChild(*SoTransform914);

SoHAnimJoint912->addChildren(*SoHAnimSegment913);

SoHAnimJoint* SoHAnimJoint922 = new SoHAnimJoint();
SoHAnimJoint922->setDEF(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint922->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint922->setCenter(new float[]{-8.192,25.31,-1.124});
SoHAnimSegment* SoHAnimSegment923 = new SoHAnimSegment();
SoHAnimSegment923->setDEF(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimSegment923->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoTransform* SoTransform924 = new SoTransform();
SoTransform924->setTranslation(new float[]{-8.192,25.31,-1.124});
SoShape* SoShape925 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance926 = new SoVRMLAppearance();
SoMaterial* SoMaterial927 = new SoMaterial();
SoMaterial927->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance926->addChild(*SoMaterial927);

SoImageTexture* SoImageTexture928 = new SoImageTexture();
SoImageTexture928->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance926->addChild(*SoImageTexture928);

SoShape925->addChild(*SoVRMLAppearance926);

SoIndexedFaceSet* SoIndexedFaceSet929 = new SoIndexedFaceSet();
SoIndexedFaceSet929->setCreaseAngle(3.14159);
SoIndexedFaceSet929->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet929->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate930 = new SoTextureCoordinate();
SoTextureCoordinate930->setPoint(new float[]{0.4195,0.6124,0.4163,0.6125,0.416,0.6118,0.4193,0.6117,0.422,0.6137,0.4198,0.6143,0.4218,0.613,0.4191,0.6126,0.4159,0.6126,0.4137,0.6132,0.414,0.6139,0.4166,0.6143,0.4231,0.621,0.4207,0.6217,0.4228,0.6202,0.4199,0.6197,0.416,0.6198,0.4135,0.6205,0.4139,0.6213,0.4168,0.6218,0.4225,0.6225,0.4204,0.623,0.4222,0.6219,0.4197,0.6216,0.4165,0.6217,0.4145,0.6223,0.4147,0.6229,0.4172,0.6232,0.4185,0.6232}, 58);
SoIndexedFaceSet929->setTexCoord(*SoTextureCoordinate930);

SoCoordinate* SoCoordinate931 = new SoCoordinate();
SoCoordinate931->setPoint(new float[]{0.5436,-1.006,0.082,0.5559,-0.9964,-0.0922,0.3911,-1.079,0.0671,0.4033,-1.069,-0.1071,0.596,-0.8116,0.0978,0.4725,-0.8732,0.2172,0.3199,-0.9458,0.2024,0.2147,-0.9931,0.0605,0.2269,-0.9834,-0.1137,0.3505,-0.9218,-0.2332,0.503,-0.8491,-0.2183,0.6083,-0.8019,-0.0765,0.2786,-0.0205,0.1427,0.14,-0.0896,0.2768,-0.0415,-0.176,0.2591,-0.1596,-0.229,0.1,-0.1451,-0.2175,-0.1073,-0.0064,-0.1484,-0.2413,0.1751,-0.062,-0.2236,0.2931,-0.009,-0.0645,0.1776,0.1232,0.1297,0.0583,0.0659,0.2438,-0.0996,0.0023,0.2269,-0.2013,-0.0322,0.0923,-0.1903,-0.0176,-0.08,-0.0748,0.0389,-0.1916,0.0796,0.1047,-0.1786,0.185,0.14,-0.0465,-0.0484,0.1379,0.025}, 87);
SoIndexedFaceSet929->setCoord(*SoCoordinate931);

SoShape925->setGeometry(*SoIndexedFaceSet929);

SoTransform924->addChild(*SoShape925);

SoHAnimSegment923->addChild(*SoTransform924);

SoHAnimJoint922->addChildren(*SoHAnimSegment923);

SoHAnimJoint912->addChildren(*SoHAnimJoint922);

SoHAnimJoint902->addChildren(*SoHAnimJoint912);

SoHAnimJoint892->addChildren(*SoHAnimJoint902);

SoHAnimJoint772->addChildren(*SoHAnimJoint892);

SoHAnimJoint* SoHAnimJoint932 = new SoHAnimJoint();
SoHAnimJoint932->setDEF(QString("hanim_r_carpometacarpal_5"));
SoHAnimJoint932->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint932->setCenter(new float[]{-8.197,28.37,-1.528});
SoHAnimSegment* SoHAnimSegment933 = new SoHAnimSegment();
SoHAnimSegment933->setDEF(QString("hanim_r_metacarpal_5"));
SoHAnimSegment933->X3DNode::setName(QString("r_metacarpal_5"));
SoTransform* SoTransform934 = new SoTransform();
SoTransform934->setTranslation(new float[]{-8.197,28.37,-1.528});
SoShape* SoShape935 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance936 = new SoVRMLAppearance();
SoMaterial* SoMaterial937 = new SoMaterial();
SoMaterial937->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance936->addChild(*SoMaterial937);

SoImageTexture* SoImageTexture938 = new SoImageTexture();
SoImageTexture938->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance936->addChild(*SoImageTexture938);

SoShape935->addChild(*SoVRMLAppearance936);

SoIndexedFaceSet* SoIndexedFaceSet939 = new SoIndexedFaceSet();
SoIndexedFaceSet939->setCreaseAngle(3.14159);
SoIndexedFaceSet939->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet939->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate940 = new SoTextureCoordinate();
SoTextureCoordinate940->setPoint(new float[]{0.4094,0.6427,0.4058,0.6429,0.4055,0.6432,0.4091,0.643,0.4124,0.6437,0.41,0.6437,0.412,0.644,0.4092,0.6444,0.4056,0.6446,0.4032,0.6445,0.4035,0.6443,0.4064,0.6439,0.4149,0.6501,0.4122,0.65,0.4146,0.6504,0.4113,0.6509,0.4071,0.6511,0.4044,0.651,0.4048,0.6507,0.408,0.6502,0.4157,0.651,0.4127,0.651,0.4153,0.6514,0.4118,0.6519,0.4072,0.6522,0.4043,0.6521,0.4047,0.6517,0.4082,0.6512,0.4143,0.6522,0.4122,0.6522,0.414,0.6525,0.4115,0.6528,0.4083,0.653,0.4062,0.6529,0.4065,0.6527,0.409,0.6523,0.4104,0.653}, 74);
SoIndexedFaceSet939->setTexCoord(*SoTextureCoordinate940);

SoCoordinate* SoCoordinate941 = new SoCoordinate();
SoCoordinate941->setPoint(new float[]{-0.0463,-0.9645,-0.0622,-0.0267,-0.942,-0.253,-0.2519,-0.9328,-0.0794,-0.2324,-0.9103,-0.2702,0.1254,-0.8655,-0.031,-0.0435,-0.8586,0.0992,-0.2492,-0.8269,0.082,-0.3888,-0.7862,-0.074,-0.3693,-0.7638,-0.2648,-0.2004,-0.7707,-0.395,0.0053,-0.8024,-0.3779,0.1449,-0.843,-0.2218,0.2585,-0.1911,0.0918,0.069,-0.1834,0.2379,-0.1757,-0.1456,0.2175,-0.3323,-0.1,0.0425,-0.309,-0.0733,-0.1846,-0.1196,-0.0811,-0.3307,0.1251,-0.1188,-0.3102,0.2817,-0.1644,-0.1352,0.2978,-0.0883,0.1196,0.0923,-0.0799,0.2781,-0.1732,-0.0389,0.2559,-0.343,0.0105,0.066,-0.3178,0.0395,-0.1803,-0.1123,0.0311,-0.3387,0.1532,-0.0098,-0.3166,0.3231,-0.0593,-0.1267,0.223,0.0382,0.0917,0.0776,0.0442,0.2038,-0.1101,0.0732,0.1881,-0.2302,0.1081,0.0539,-0.2124,0.1286,-0.1203,-0.0671,0.1227,-0.2324,0.1207,0.0937,-0.2167,0.2408,0.0588,-0.0824,0.0116,0.1281,-0.0076}, 111);
SoIndexedFaceSet939->setCoord(*SoCoordinate941);

SoShape935->setGeometry(*SoIndexedFaceSet939);

SoTransform934->addChild(*SoShape935);

SoHAnimSegment933->addChild(*SoTransform934);

SoHAnimJoint932->addChildren(*SoHAnimSegment933);

SoHAnimJoint* SoHAnimJoint942 = new SoHAnimJoint();
SoHAnimJoint942->setDEF(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimJoint942->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint942->setCenter(new float[]{-8.334,27.5,-1.701});
SoHAnimSegment* SoHAnimSegment943 = new SoHAnimSegment();
SoHAnimSegment943->setDEF(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimSegment943->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoTransform* SoTransform944 = new SoTransform();
SoTransform944->setTranslation(new float[]{-8.334,27.5,-1.701});
SoShape* SoShape945 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance946 = new SoVRMLAppearance();
SoMaterial* SoMaterial947 = new SoMaterial();
SoMaterial947->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance946->addChild(*SoMaterial947);

SoImageTexture* SoImageTexture948 = new SoImageTexture();
SoImageTexture948->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance946->addChild(*SoImageTexture948);

SoShape945->addChild(*SoVRMLAppearance946);

SoIndexedFaceSet* SoIndexedFaceSet949 = new SoIndexedFaceSet();
SoIndexedFaceSet949->setCreaseAngle(3.14159);
SoIndexedFaceSet949->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,21,29,28,-1,28,20,21,-1,20,28,30,-1,30,22,20,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,29,-1,29,21,27,-1,36,28,29,-1,36,30,28,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,29,35,-1}, 280);
SoIndexedFaceSet949->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,20,28,29,-1,29,21,20,-1,21,29,30,-1,30,22,21,-1,22,30,31,-1,31,23,22,-1,23,31,32,-1,32,24,23,-1,24,32,33,-1,33,25,24,-1,25,33,34,-1,34,26,25,-1,26,34,35,-1,35,27,26,-1,27,35,28,-1,28,20,27,-1,36,29,28,-1,36,30,29,-1,36,31,30,-1,36,32,31,-1,36,33,32,-1,36,34,33,-1,36,35,34,-1,36,28,35,-1}, 280);
SoTextureCoordinate* SoTextureCoordinate950 = new SoTextureCoordinate();
SoTextureCoordinate950->setPoint(new float[]{0.4075,0.6349,0.404,0.6351,0.4037,0.6351,0.4072,0.6349,0.4104,0.6358,0.4081,0.6359,0.4101,0.6358,0.4072,0.636,0.4037,0.6362,0.4013,0.6363,0.4017,0.6363,0.4046,0.6362,0.4127,0.6418,0.41,0.6419,0.4123,0.6418,0.409,0.642,0.4048,0.6423,0.4022,0.6424,0.4026,0.6424,0.4058,0.6422,0.4134,0.6427,0.4105,0.6429,0.413,0.6427,0.4094,0.6429,0.4048,0.6432,0.4019,0.6434,0.4024,0.6434,0.4059,0.6432,0.412,0.6438,0.4099,0.6439,0.4116,0.6438,0.4091,0.6439,0.4059,0.6441,0.4038,0.6442,0.4042,0.6442,0.4067,0.6441,0.408,0.6444}, 74);
SoIndexedFaceSet949->setTexCoord(*SoTextureCoordinate950);

SoCoordinate* SoCoordinate951 = new SoCoordinate();
SoCoordinate951->setPoint(new float[]{0.1298,-0.9343,0.012,0.1487,-0.912,-0.1771,-0.0526,-0.9323,-0.0063,-0.0337,-0.91,-0.1954,0.2599,-0.8204,0.0405,0.1089,-0.8356,0.1686,-0.0735,-0.8336,0.1504,-0.1961,-0.8154,-0.0051,-0.1772,-0.793,-0.1942,-0.0262,-0.7778,-0.3224,0.1562,-0.7798,-0.3041,0.2788,-0.7981,-0.1486,0.2549,-0.1812,0.1442,0.0856,-0.1983,0.2879,-0.1314,-0.1959,0.2662,-0.269,-0.1755,0.0918,-0.2465,-0.1489,-0.1332,-0.0771,-0.1318,-0.2769,0.1399,-0.1342,-0.2552,0.2774,-0.1547,-0.0808,0.2729,-0.0814,0.1704,0.0874,-0.1001,0.3278,-0.1502,-0.0975,0.304,-0.3008,-0.0751,0.113,-0.2762,-0.046,-0.1333,-0.0907,-0.0273,-0.2907,0.1469,-0.0299,-0.2669,0.2975,-0.0523,-0.0759,0.1866,0.0252,0.139,0.0555,0.012,0.2502,-0.1126,0.0138,0.2334,-0.2191,0.0297,0.0984,-0.2016,0.0502,-0.0758,-0.0705,0.0635,-0.1871,0.0975,0.0616,-0.1703,0.204,0.0458,-0.0352,-0.0099,0.0797,0.0369}, 111);
SoIndexedFaceSet949->setCoord(*SoCoordinate951);

SoShape945->setGeometry(*SoIndexedFaceSet949);

SoTransform944->addChild(*SoShape945);

SoHAnimSegment943->addChild(*SoTransform944);

SoHAnimJoint942->addChildren(*SoHAnimSegment943);

SoHAnimJoint* SoHAnimJoint952 = new SoHAnimJoint();
SoHAnimJoint952->setDEF(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint952->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint952->setCenter(new float[]{-8.338,26.78,-1.768});
SoHAnimSegment* SoHAnimSegment953 = new SoHAnimSegment();
SoHAnimSegment953->setDEF(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimSegment953->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoTransform* SoTransform954 = new SoTransform();
SoTransform954->setTranslation(new float[]{-8.338,26.78,-1.768});
SoShape* SoShape955 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance956 = new SoVRMLAppearance();
SoMaterial* SoMaterial957 = new SoMaterial();
SoMaterial957->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance956->addChild(*SoMaterial957);

SoImageTexture* SoImageTexture958 = new SoImageTexture();
SoImageTexture958->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance956->addChild(*SoImageTexture958);

SoShape955->addChild(*SoVRMLAppearance956);

SoIndexedFaceSet* SoIndexedFaceSet959 = new SoIndexedFaceSet();
SoIndexedFaceSet959->setCreaseAngle(3.14159);
SoIndexedFaceSet959->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet959->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate960 = new SoTextureCoordinate();
SoTextureCoordinate960->setPoint(new float[]{0.4061,0.6287,0.4028,0.6289,0.4025,0.6286,0.4057,0.6284,0.4088,0.6296,0.4066,0.6299,0.4084,0.6293,0.4057,0.6293,0.4024,0.6295,0.4002,0.6298,0.4006,0.63,0.4033,0.6301,0.4102,0.6353,0.408,0.6356,0.4098,0.635,0.407,0.635,0.4035,0.6352,0.4012,0.6355,0.4016,0.6358,0.4044,0.6358,0.4096,0.6371,0.4079,0.6374,0.4093,0.6369,0.4071,0.6369,0.4043,0.6371,0.4026,0.6373,0.4029,0.6375,0.4051,0.6375,0.4062,0.6376}, 58);
SoIndexedFaceSet959->setTexCoord(*SoTextureCoordinate960);

SoCoordinate* SoCoordinate961 = new SoCoordinate();
SoCoordinate961->setPoint(new float[]{0.3103,-0.8684,0.0017,0.3279,-0.8476,-0.1746,0.1444,-0.8917,-0.0183,0.162,-0.8709,-0.1946,0.4057,-0.7413,0.0284,0.268,-0.7744,0.1456,0.1021,-0.7977,0.1256,-0.0092,-0.7996,-0.0215,0.0085,-0.7788,-0.1978,0.1461,-0.7457,-0.315,0.3121,-0.7224,-0.295,0.4234,-0.7205,-0.1478,0.2537,-0.1316,0.1027,0.1126,-0.1655,0.2227,-0.0677,-0.1909,0.201,-0.1817,-0.1928,0.0502,-0.1625,-0.1702,-0.1412,-0.0215,-0.1363,-0.2613,0.1588,-0.1109,-0.2396,0.2728,-0.109,-0.0888,0.156,0.0566,0.096,0.0465,0.0303,0.1892,-0.0934,0.0106,0.1723,-0.1818,0.0091,0.0553,-0.1669,0.0266,-0.0933,-0.0575,0.0529,-0.1864,0.0824,0.0726,-0.1696,0.1709,0.0741,-0.0526,-0.016,0.0815,0.0057}, 87);
SoIndexedFaceSet959->setCoord(*SoCoordinate961);

SoShape955->setGeometry(*SoIndexedFaceSet959);

SoTransform954->addChild(*SoShape955);

SoHAnimSegment953->addChild(*SoTransform954);

SoHAnimJoint952->addChildren(*SoHAnimSegment953);

SoHAnimJoint* SoHAnimJoint962 = new SoHAnimJoint();
SoHAnimJoint962->setDEF(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint962->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint962->setCenter(new float[]{-8.153,26.04,-1.886});
SoHAnimSegment* SoHAnimSegment963 = new SoHAnimSegment();
SoHAnimSegment963->setDEF(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimSegment963->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoTransform* SoTransform964 = new SoTransform();
SoTransform964->setTranslation(new float[]{-8.153,26.04,-1.886});
SoShape* SoShape965 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance966 = new SoVRMLAppearance();
SoMaterial* SoMaterial967 = new SoMaterial();
SoMaterial967->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance966->addChild(*SoMaterial967);

SoImageTexture* SoImageTexture968 = new SoImageTexture();
SoImageTexture968->setUSE(QString("JinLOA3TextureAtlas"));
SoVRMLAppearance966->addChild(*SoImageTexture968);

SoShape965->addChild(*SoVRMLAppearance966);

SoIndexedFaceSet* SoIndexedFaceSet969 = new SoIndexedFaceSet();
SoIndexedFaceSet969->setCreaseAngle(3.14159);
SoIndexedFaceSet969->setTexCoordIndex(new int32_t[]{0,3,2,-1,2,1,0,-1,0,5,4,-1,0,4,6,-1,6,3,0,-1,3,6,7,-1,3,7,8,-1,8,2,3,-1,2,8,9,-1,2,9,10,-1,10,1,2,-1,1,10,11,-1,1,11,5,-1,5,0,1,-1,5,13,12,-1,12,4,5,-1,4,12,14,-1,14,6,4,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,13,-1,13,5,11,-1,13,21,20,-1,20,12,13,-1,12,20,22,-1,22,14,12,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,21,-1,21,13,19,-1,28,20,21,-1,28,22,20,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,21,27,-1}, 216);
SoIndexedFaceSet969->setCoordIndex(new int32_t[]{0,2,3,-1,3,1,0,-1,0,4,5,-1,0,5,6,-1,6,2,0,-1,2,6,7,-1,2,7,8,-1,8,3,2,-1,3,8,9,-1,3,9,10,-1,10,1,3,-1,1,10,11,-1,1,11,4,-1,4,0,1,-1,4,12,13,-1,13,5,4,-1,5,13,14,-1,14,6,5,-1,6,14,15,-1,15,7,6,-1,7,15,16,-1,16,8,7,-1,8,16,17,-1,17,9,8,-1,9,17,18,-1,18,10,9,-1,10,18,19,-1,19,11,10,-1,11,19,12,-1,12,4,11,-1,12,20,21,-1,21,13,12,-1,13,21,22,-1,22,14,13,-1,14,22,23,-1,23,15,14,-1,15,23,24,-1,24,16,15,-1,16,24,25,-1,25,17,16,-1,17,25,26,-1,26,18,17,-1,18,26,27,-1,27,19,18,-1,19,27,20,-1,20,12,19,-1,28,21,20,-1,28,22,21,-1,28,23,22,-1,28,24,23,-1,28,25,24,-1,28,26,25,-1,28,27,26,-1,28,20,27,-1}, 216);
SoTextureCoordinate* SoTextureCoordinate970 = new SoTextureCoordinate();
SoTextureCoordinate970->setPoint(new float[]{0.4049,0.6227,0.4021,0.6229,0.4017,0.6225,0.4045,0.6223,0.4072,0.6236,0.4053,0.624,0.4068,0.6232,0.4044,0.623,0.4016,0.6232,0.3997,0.6236,0.4001,0.624,0.4025,0.6242,0.4086,0.6291,0.4066,0.6295,0.4082,0.6286,0.4055,0.6284,0.4022,0.6286,0.4001,0.6291,0.4005,0.6296,0.4032,0.6297,0.4082,0.6302,0.4064,0.6306,0.4078,0.6299,0.4056,0.6298,0.4028,0.63,0.401,0.6304,0.4014,0.6307,0.4036,0.6308,0.4047,0.6309}, 58);
SoIndexedFaceSet969->setTexCoord(*SoTextureCoordinate970);

SoCoordinate* SoCoordinate971 = new SoCoordinate();
SoCoordinate971->setPoint(new float[]{0.4265,-0.7665,0.0531,0.4417,-0.7485,-0.0994,0.2908,-0.8079,0.0337,0.306,-0.7899,-0.1188,0.4775,-0.6307,0.0765,0.3642,-0.6752,0.1764,0.2285,-0.7166,0.157,0.1382,-0.7341,0.0281,0.1534,-0.7161,-0.1244,0.2667,-0.6716,-0.2242,0.4024,-0.6302,-0.2049,0.4927,-0.6127,-0.076,0.2189,-0.0422,0.1441,0.0919,-0.0921,0.2561,-0.0696,-0.1414,0.2331,-0.1709,-0.161,0.0886,-0.1528,-0.1396,-0.0929,-0.0258,-0.0897,-0.2049,0.1357,-0.0404,-0.1819,0.2371,-0.0207,-0.0373,0.1344,0.069,0.1368,0.0252,0.0277,0.2322,-0.1149,-0.0067,0.2114,-0.202,-0.0158,0.0895,-0.1878,0.0058,-0.0611,-0.082,0.0466,-0.1545,0.0552,0.083,-0.137,0.1456,0.0926,-0.0171,-0.0613,0.1015,0.0409}, 87);
SoIndexedFaceSet969->setCoord(*SoCoordinate971);

SoShape965->setGeometry(*SoIndexedFaceSet969);

SoTransform964->addChild(*SoShape965);

SoHAnimSegment963->addChild(*SoTransform964);

SoHAnimJoint962->addChildren(*SoHAnimSegment963);

SoHAnimJoint952->addChildren(*SoHAnimJoint962);

SoHAnimJoint942->addChildren(*SoHAnimJoint952);

SoHAnimJoint932->addChildren(*SoHAnimJoint942);

SoHAnimJoint772->addChildren(*SoHAnimJoint932);

SoHAnimJoint762->addChildren(*SoHAnimJoint772);

SoHAnimJoint752->addChildren(*SoHAnimJoint762);

SoHAnimJoint742->addChildren(*SoHAnimJoint752);

SoHAnimJoint732->addChildren(*SoHAnimJoint742);

SoHAnimJoint332->addChildren(*SoHAnimJoint732);

SoHAnimJoint322->addChildren(*SoHAnimJoint332);

SoHAnimJoint312->addChildren(*SoHAnimJoint322);

SoHAnimJoint302->addChildren(*SoHAnimJoint312);

SoHAnimJoint292->addChildren(*SoHAnimJoint302);

SoHAnimJoint282->addChildren(*SoHAnimJoint292);

SoHAnimJoint272->addChildren(*SoHAnimJoint282);

SoHAnimJoint262->addChildren(*SoHAnimJoint272);

SoHAnimJoint252->addChildren(*SoHAnimJoint262);

SoHAnimJoint242->addChildren(*SoHAnimJoint252);

SoHAnimJoint232->addChildren(*SoHAnimJoint242);

SoHAnimJoint222->addChildren(*SoHAnimJoint232);

SoHAnimJoint212->addChildren(*SoHAnimJoint222);

SoHAnimJoint202->addChildren(*SoHAnimJoint212);

SoHAnimJoint192->addChildren(*SoHAnimJoint202);

SoHAnimJoint182->addChildren(*SoHAnimJoint192);

SoHAnimJoint172->addChildren(*SoHAnimJoint182);

SoHAnimJoint32->addChildren(*SoHAnimJoint172);

SoHAnimHumanoid24->setSkeleton(*SoHAnimJoint32);

SoHAnimJoint* SoHAnimJoint972 = new SoHAnimJoint();
SoHAnimJoint972->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint972);

SoHAnimJoint* SoHAnimJoint973 = new SoHAnimJoint();
SoHAnimJoint973->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint973);

SoHAnimJoint* SoHAnimJoint974 = new SoHAnimJoint();
SoHAnimJoint974->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint974);

SoHAnimJoint* SoHAnimJoint975 = new SoHAnimJoint();
SoHAnimJoint975->setUSE(QString("hanim_vl4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint975);

SoHAnimJoint* SoHAnimJoint976 = new SoHAnimJoint();
SoHAnimJoint976->setUSE(QString("hanim_vl3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint976);

SoHAnimJoint* SoHAnimJoint977 = new SoHAnimJoint();
SoHAnimJoint977->setUSE(QString("hanim_vl2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint977);

SoHAnimJoint* SoHAnimJoint978 = new SoHAnimJoint();
SoHAnimJoint978->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint978);

SoHAnimJoint* SoHAnimJoint979 = new SoHAnimJoint();
SoHAnimJoint979->setUSE(QString("hanim_vt12"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint979);

SoHAnimJoint* SoHAnimJoint980 = new SoHAnimJoint();
SoHAnimJoint980->setUSE(QString("hanim_vt11"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint980);

SoHAnimJoint* SoHAnimJoint981 = new SoHAnimJoint();
SoHAnimJoint981->setUSE(QString("hanim_vt10"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint981);

SoHAnimJoint* SoHAnimJoint982 = new SoHAnimJoint();
SoHAnimJoint982->setUSE(QString("hanim_vt9"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint982);

SoHAnimJoint* SoHAnimJoint983 = new SoHAnimJoint();
SoHAnimJoint983->setUSE(QString("hanim_vt8"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint983);

SoHAnimJoint* SoHAnimJoint984 = new SoHAnimJoint();
SoHAnimJoint984->setUSE(QString("hanim_vt7"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint984);

SoHAnimJoint* SoHAnimJoint985 = new SoHAnimJoint();
SoHAnimJoint985->setUSE(QString("hanim_vt6"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint985);

SoHAnimJoint* SoHAnimJoint986 = new SoHAnimJoint();
SoHAnimJoint986->setUSE(QString("hanim_vt5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint986);

SoHAnimJoint* SoHAnimJoint987 = new SoHAnimJoint();
SoHAnimJoint987->setUSE(QString("hanim_vt4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint987);

SoHAnimJoint* SoHAnimJoint988 = new SoHAnimJoint();
SoHAnimJoint988->setUSE(QString("hanim_vt3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint988);

SoHAnimJoint* SoHAnimJoint989 = new SoHAnimJoint();
SoHAnimJoint989->setUSE(QString("hanim_vt2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint989);

SoHAnimJoint* SoHAnimJoint990 = new SoHAnimJoint();
SoHAnimJoint990->setUSE(QString("hanim_vt1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint990);

SoHAnimJoint* SoHAnimJoint991 = new SoHAnimJoint();
SoHAnimJoint991->setUSE(QString("hanim_vc7"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint991);

SoHAnimJoint* SoHAnimJoint992 = new SoHAnimJoint();
SoHAnimJoint992->setUSE(QString("hanim_vc6"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint992);

SoHAnimJoint* SoHAnimJoint993 = new SoHAnimJoint();
SoHAnimJoint993->setUSE(QString("hanim_vc5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint993);

SoHAnimJoint* SoHAnimJoint994 = new SoHAnimJoint();
SoHAnimJoint994->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint994);

SoHAnimJoint* SoHAnimJoint995 = new SoHAnimJoint();
SoHAnimJoint995->setUSE(QString("hanim_vc3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint995);

SoHAnimJoint* SoHAnimJoint996 = new SoHAnimJoint();
SoHAnimJoint996->setUSE(QString("hanim_vc2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint996);

SoHAnimJoint* SoHAnimJoint997 = new SoHAnimJoint();
SoHAnimJoint997->setUSE(QString("hanim_vc1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint997);

SoHAnimJoint* SoHAnimJoint998 = new SoHAnimJoint();
SoHAnimJoint998->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint998);

SoHAnimJoint* SoHAnimJoint999 = new SoHAnimJoint();
SoHAnimJoint999->setUSE(QString("hanim_temporomandibular"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint999);

SoHAnimJoint* SoHAnimJoint1000 = new SoHAnimJoint();
SoHAnimJoint1000->setUSE(QString("hanim_l_acromioclavicular"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1000);

SoHAnimJoint* SoHAnimJoint1001 = new SoHAnimJoint();
SoHAnimJoint1001->setUSE(QString("hanim_r_acromioclavicular"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1001);

SoHAnimJoint* SoHAnimJoint1002 = new SoHAnimJoint();
SoHAnimJoint1002->setUSE(QString("hanim_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1002);

SoHAnimJoint* SoHAnimJoint1003 = new SoHAnimJoint();
SoHAnimJoint1003->setUSE(QString("hanim_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1003);

SoHAnimJoint* SoHAnimJoint1004 = new SoHAnimJoint();
SoHAnimJoint1004->setUSE(QString("hanim_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1004);

SoHAnimJoint* SoHAnimJoint1005 = new SoHAnimJoint();
SoHAnimJoint1005->setUSE(QString("hanim_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1005);

SoHAnimJoint* SoHAnimJoint1006 = new SoHAnimJoint();
SoHAnimJoint1006->setUSE(QString("hanim_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1006);

SoHAnimJoint* SoHAnimJoint1007 = new SoHAnimJoint();
SoHAnimJoint1007->setUSE(QString("hanim_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1007);

SoHAnimJoint* SoHAnimJoint1008 = new SoHAnimJoint();
SoHAnimJoint1008->setUSE(QString("hanim_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1008);

SoHAnimJoint* SoHAnimJoint1009 = new SoHAnimJoint();
SoHAnimJoint1009->setUSE(QString("hanim_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1009);

SoHAnimJoint* SoHAnimJoint1010 = new SoHAnimJoint();
SoHAnimJoint1010->setUSE(QString("hanim_l_carpal_interphalangeal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1010);

SoHAnimJoint* SoHAnimJoint1011 = new SoHAnimJoint();
SoHAnimJoint1011->setUSE(QString("hanim_r_carpal_interphalangeal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1011);

SoHAnimJoint* SoHAnimJoint1012 = new SoHAnimJoint();
SoHAnimJoint1012->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1012);

SoHAnimJoint* SoHAnimJoint1013 = new SoHAnimJoint();
SoHAnimJoint1013->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1013);

SoHAnimJoint* SoHAnimJoint1014 = new SoHAnimJoint();
SoHAnimJoint1014->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1014);

SoHAnimJoint* SoHAnimJoint1015 = new SoHAnimJoint();
SoHAnimJoint1015->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1015);

SoHAnimJoint* SoHAnimJoint1016 = new SoHAnimJoint();
SoHAnimJoint1016->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1016);

SoHAnimJoint* SoHAnimJoint1017 = new SoHAnimJoint();
SoHAnimJoint1017->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1017);

SoHAnimJoint* SoHAnimJoint1018 = new SoHAnimJoint();
SoHAnimJoint1018->setUSE(QString("hanim_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1018);

SoHAnimJoint* SoHAnimJoint1019 = new SoHAnimJoint();
SoHAnimJoint1019->setUSE(QString("hanim_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1019);

SoHAnimJoint* SoHAnimJoint1020 = new SoHAnimJoint();
SoHAnimJoint1020->setUSE(QString("hanim_l_carpometacarpal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1020);

SoHAnimJoint* SoHAnimJoint1021 = new SoHAnimJoint();
SoHAnimJoint1021->setUSE(QString("hanim_r_carpometacarpal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1021);

SoHAnimJoint* SoHAnimJoint1022 = new SoHAnimJoint();
SoHAnimJoint1022->setUSE(QString("hanim_l_carpometacarpal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1022);

SoHAnimJoint* SoHAnimJoint1023 = new SoHAnimJoint();
SoHAnimJoint1023->setUSE(QString("hanim_r_carpometacarpal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1023);

SoHAnimJoint* SoHAnimJoint1024 = new SoHAnimJoint();
SoHAnimJoint1024->setUSE(QString("hanim_l_carpometacarpal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1024);

SoHAnimJoint* SoHAnimJoint1025 = new SoHAnimJoint();
SoHAnimJoint1025->setUSE(QString("hanim_r_carpometacarpal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1025);

SoHAnimJoint* SoHAnimJoint1026 = new SoHAnimJoint();
SoHAnimJoint1026->setUSE(QString("hanim_l_carpometacarpal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1026);

SoHAnimJoint* SoHAnimJoint1027 = new SoHAnimJoint();
SoHAnimJoint1027->setUSE(QString("hanim_r_carpometacarpal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1027);

SoHAnimJoint* SoHAnimJoint1028 = new SoHAnimJoint();
SoHAnimJoint1028->setUSE(QString("hanim_l_carpometacarpal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1028);

SoHAnimJoint* SoHAnimJoint1029 = new SoHAnimJoint();
SoHAnimJoint1029->setUSE(QString("hanim_r_carpometacarpal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1029);

SoHAnimJoint* SoHAnimJoint1030 = new SoHAnimJoint();
SoHAnimJoint1030->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1030);

SoHAnimJoint* SoHAnimJoint1031 = new SoHAnimJoint();
SoHAnimJoint1031->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1031);

SoHAnimJoint* SoHAnimJoint1032 = new SoHAnimJoint();
SoHAnimJoint1032->setUSE(QString("hanim_l_eyeball_joint"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1032);

SoHAnimJoint* SoHAnimJoint1033 = new SoHAnimJoint();
SoHAnimJoint1033->setUSE(QString("hanim_r_eyeball_joint"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1033);

SoHAnimJoint* SoHAnimJoint1034 = new SoHAnimJoint();
SoHAnimJoint1034->setUSE(QString("hanim_l_eyebrow_joint"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1034);

SoHAnimJoint* SoHAnimJoint1035 = new SoHAnimJoint();
SoHAnimJoint1035->setUSE(QString("hanim_r_eyebrow_joint"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1035);

SoHAnimJoint* SoHAnimJoint1036 = new SoHAnimJoint();
SoHAnimJoint1036->setUSE(QString("hanim_l_eyelid_joint"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1036);

SoHAnimJoint* SoHAnimJoint1037 = new SoHAnimJoint();
SoHAnimJoint1037->setUSE(QString("hanim_r_eyelid_joint"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1037);

SoHAnimJoint* SoHAnimJoint1038 = new SoHAnimJoint();
SoHAnimJoint1038->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1038);

SoHAnimJoint* SoHAnimJoint1039 = new SoHAnimJoint();
SoHAnimJoint1039->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1039);

SoHAnimJoint* SoHAnimJoint1040 = new SoHAnimJoint();
SoHAnimJoint1040->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1040);

SoHAnimJoint* SoHAnimJoint1041 = new SoHAnimJoint();
SoHAnimJoint1041->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1041);

SoHAnimJoint* SoHAnimJoint1042 = new SoHAnimJoint();
SoHAnimJoint1042->setUSE(QString("hanim_l_metacarpophalangeal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1042);

SoHAnimJoint* SoHAnimJoint1043 = new SoHAnimJoint();
SoHAnimJoint1043->setUSE(QString("hanim_r_metacarpophalangeal_1"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1043);

SoHAnimJoint* SoHAnimJoint1044 = new SoHAnimJoint();
SoHAnimJoint1044->setUSE(QString("hanim_l_metacarpophalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1044);

SoHAnimJoint* SoHAnimJoint1045 = new SoHAnimJoint();
SoHAnimJoint1045->setUSE(QString("hanim_r_metacarpophalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1045);

SoHAnimJoint* SoHAnimJoint1046 = new SoHAnimJoint();
SoHAnimJoint1046->setUSE(QString("hanim_l_metacarpophalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1046);

SoHAnimJoint* SoHAnimJoint1047 = new SoHAnimJoint();
SoHAnimJoint1047->setUSE(QString("hanim_r_metacarpophalangeal_3"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1047);

SoHAnimJoint* SoHAnimJoint1048 = new SoHAnimJoint();
SoHAnimJoint1048->setUSE(QString("hanim_l_metacarpophalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1048);

SoHAnimJoint* SoHAnimJoint1049 = new SoHAnimJoint();
SoHAnimJoint1049->setUSE(QString("hanim_r_metacarpophalangeal_4"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1049);

SoHAnimJoint* SoHAnimJoint1050 = new SoHAnimJoint();
SoHAnimJoint1050->setUSE(QString("hanim_l_metacarpophalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1050);

SoHAnimJoint* SoHAnimJoint1051 = new SoHAnimJoint();
SoHAnimJoint1051->setUSE(QString("hanim_r_metacarpophalangeal_5"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1051);

SoHAnimJoint* SoHAnimJoint1052 = new SoHAnimJoint();
SoHAnimJoint1052->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1052);

SoHAnimJoint* SoHAnimJoint1053 = new SoHAnimJoint();
SoHAnimJoint1053->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1053);

SoHAnimJoint* SoHAnimJoint1054 = new SoHAnimJoint();
SoHAnimJoint1054->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1054);

SoHAnimJoint* SoHAnimJoint1055 = new SoHAnimJoint();
SoHAnimJoint1055->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1055);

SoHAnimJoint* SoHAnimJoint1056 = new SoHAnimJoint();
SoHAnimJoint1056->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1056);

SoHAnimJoint* SoHAnimJoint1057 = new SoHAnimJoint();
SoHAnimJoint1057->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1057);

SoHAnimJoint* SoHAnimJoint1058 = new SoHAnimJoint();
SoHAnimJoint1058->setUSE(QString("hanim_l_sternoclavicular"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1058);

SoHAnimJoint* SoHAnimJoint1059 = new SoHAnimJoint();
SoHAnimJoint1059->setUSE(QString("hanim_r_sternoclavicular"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1059);

SoHAnimJoint* SoHAnimJoint1060 = new SoHAnimJoint();
SoHAnimJoint1060->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1060);

SoHAnimJoint* SoHAnimJoint1061 = new SoHAnimJoint();
SoHAnimJoint1061->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1061);

SoHAnimJoint* SoHAnimJoint1062 = new SoHAnimJoint();
SoHAnimJoint1062->setUSE(QString("hanim_l_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1062);

SoHAnimJoint* SoHAnimJoint1063 = new SoHAnimJoint();
SoHAnimJoint1063->setUSE(QString("hanim_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1063);

SoHAnimJoint* SoHAnimJoint1064 = new SoHAnimJoint();
SoHAnimJoint1064->setUSE(QString("hanim_l_tarsometatarsal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1064);

SoHAnimJoint* SoHAnimJoint1065 = new SoHAnimJoint();
SoHAnimJoint1065->setUSE(QString("hanim_r_tarsometatarsal_2"));
SoHAnimHumanoid24->setJoints(*SoHAnimJoint1065);

SoHAnimSegment* SoHAnimSegment1066 = new SoHAnimSegment();
SoHAnimSegment1066->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1066);

SoHAnimSegment* SoHAnimSegment1067 = new SoHAnimSegment();
SoHAnimSegment1067->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1067);

SoHAnimSegment* SoHAnimSegment1068 = new SoHAnimSegment();
SoHAnimSegment1068->setUSE(QString("hanim_l5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1068);

SoHAnimSegment* SoHAnimSegment1069 = new SoHAnimSegment();
SoHAnimSegment1069->setUSE(QString("hanim_l4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1069);

SoHAnimSegment* SoHAnimSegment1070 = new SoHAnimSegment();
SoHAnimSegment1070->setUSE(QString("hanim_l3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1070);

SoHAnimSegment* SoHAnimSegment1071 = new SoHAnimSegment();
SoHAnimSegment1071->setUSE(QString("hanim_l2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1071);

SoHAnimSegment* SoHAnimSegment1072 = new SoHAnimSegment();
SoHAnimSegment1072->setUSE(QString("hanim_l1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1072);

SoHAnimSegment* SoHAnimSegment1073 = new SoHAnimSegment();
SoHAnimSegment1073->setUSE(QString("hanim_t12"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1073);

SoHAnimSegment* SoHAnimSegment1074 = new SoHAnimSegment();
SoHAnimSegment1074->setUSE(QString("hanim_t11"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1074);

SoHAnimSegment* SoHAnimSegment1075 = new SoHAnimSegment();
SoHAnimSegment1075->setUSE(QString("hanim_t10"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1075);

SoHAnimSegment* SoHAnimSegment1076 = new SoHAnimSegment();
SoHAnimSegment1076->setUSE(QString("hanim_t9"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1076);

SoHAnimSegment* SoHAnimSegment1077 = new SoHAnimSegment();
SoHAnimSegment1077->setUSE(QString("hanim_t8"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1077);

SoHAnimSegment* SoHAnimSegment1078 = new SoHAnimSegment();
SoHAnimSegment1078->setUSE(QString("hanim_t7"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1078);

SoHAnimSegment* SoHAnimSegment1079 = new SoHAnimSegment();
SoHAnimSegment1079->setUSE(QString("hanim_t6"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1079);

SoHAnimSegment* SoHAnimSegment1080 = new SoHAnimSegment();
SoHAnimSegment1080->setUSE(QString("hanim_t5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1080);

SoHAnimSegment* SoHAnimSegment1081 = new SoHAnimSegment();
SoHAnimSegment1081->setUSE(QString("hanim_t4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1081);

SoHAnimSegment* SoHAnimSegment1082 = new SoHAnimSegment();
SoHAnimSegment1082->setUSE(QString("hanim_t3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1082);

SoHAnimSegment* SoHAnimSegment1083 = new SoHAnimSegment();
SoHAnimSegment1083->setUSE(QString("hanim_t2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1083);

SoHAnimSegment* SoHAnimSegment1084 = new SoHAnimSegment();
SoHAnimSegment1084->setUSE(QString("hanim_t1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1084);

SoHAnimSegment* SoHAnimSegment1085 = new SoHAnimSegment();
SoHAnimSegment1085->setUSE(QString("hanim_c7"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1085);

SoHAnimSegment* SoHAnimSegment1086 = new SoHAnimSegment();
SoHAnimSegment1086->setUSE(QString("hanim_c6"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1086);

SoHAnimSegment* SoHAnimSegment1087 = new SoHAnimSegment();
SoHAnimSegment1087->setUSE(QString("hanim_c5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1087);

SoHAnimSegment* SoHAnimSegment1088 = new SoHAnimSegment();
SoHAnimSegment1088->setUSE(QString("hanim_c4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1088);

SoHAnimSegment* SoHAnimSegment1089 = new SoHAnimSegment();
SoHAnimSegment1089->setUSE(QString("hanim_c3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1089);

SoHAnimSegment* SoHAnimSegment1090 = new SoHAnimSegment();
SoHAnimSegment1090->setUSE(QString("hanim_c2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1090);

SoHAnimSegment* SoHAnimSegment1091 = new SoHAnimSegment();
SoHAnimSegment1091->setUSE(QString("hanim_c1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1091);

SoHAnimSegment* SoHAnimSegment1092 = new SoHAnimSegment();
SoHAnimSegment1092->setUSE(QString("hanim_skull"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1092);

SoHAnimSegment* SoHAnimSegment1093 = new SoHAnimSegment();
SoHAnimSegment1093->setUSE(QString("hanim_jaw"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1093);

SoHAnimSegment* SoHAnimSegment1094 = new SoHAnimSegment();
SoHAnimSegment1094->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1094);

SoHAnimSegment* SoHAnimSegment1095 = new SoHAnimSegment();
SoHAnimSegment1095->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1095);

SoHAnimSegment* SoHAnimSegment1096 = new SoHAnimSegment();
SoHAnimSegment1096->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1096);

SoHAnimSegment* SoHAnimSegment1097 = new SoHAnimSegment();
SoHAnimSegment1097->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1097);

SoHAnimSegment* SoHAnimSegment1098 = new SoHAnimSegment();
SoHAnimSegment1098->setUSE(QString("hanim_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1098);

SoHAnimSegment* SoHAnimSegment1099 = new SoHAnimSegment();
SoHAnimSegment1099->setUSE(QString("hanim_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1099);

SoHAnimSegment* SoHAnimSegment1100 = new SoHAnimSegment();
SoHAnimSegment1100->setUSE(QString("hanim_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1100);

SoHAnimSegment* SoHAnimSegment1101 = new SoHAnimSegment();
SoHAnimSegment1101->setUSE(QString("hanim_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1101);

SoHAnimSegment* SoHAnimSegment1102 = new SoHAnimSegment();
SoHAnimSegment1102->setUSE(QString("hanim_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1102);

SoHAnimSegment* SoHAnimSegment1103 = new SoHAnimSegment();
SoHAnimSegment1103->setUSE(QString("hanim_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1103);

SoHAnimSegment* SoHAnimSegment1104 = new SoHAnimSegment();
SoHAnimSegment1104->setUSE(QString("hanim_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1104);

SoHAnimSegment* SoHAnimSegment1105 = new SoHAnimSegment();
SoHAnimSegment1105->setUSE(QString("hanim_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1105);

SoHAnimSegment* SoHAnimSegment1106 = new SoHAnimSegment();
SoHAnimSegment1106->setUSE(QString("hanim_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1106);

SoHAnimSegment* SoHAnimSegment1107 = new SoHAnimSegment();
SoHAnimSegment1107->setUSE(QString("hanim_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1107);

SoHAnimSegment* SoHAnimSegment1108 = new SoHAnimSegment();
SoHAnimSegment1108->setUSE(QString("hanim_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1108);

SoHAnimSegment* SoHAnimSegment1109 = new SoHAnimSegment();
SoHAnimSegment1109->setUSE(QString("hanim_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1109);

SoHAnimSegment* SoHAnimSegment1110 = new SoHAnimSegment();
SoHAnimSegment1110->setUSE(QString("hanim_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1110);

SoHAnimSegment* SoHAnimSegment1111 = new SoHAnimSegment();
SoHAnimSegment1111->setUSE(QString("hanim_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1111);

SoHAnimSegment* SoHAnimSegment1112 = new SoHAnimSegment();
SoHAnimSegment1112->setUSE(QString("hanim_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1112);

SoHAnimSegment* SoHAnimSegment1113 = new SoHAnimSegment();
SoHAnimSegment1113->setUSE(QString("hanim_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1113);

SoHAnimSegment* SoHAnimSegment1114 = new SoHAnimSegment();
SoHAnimSegment1114->setUSE(QString("hanim_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1114);

SoHAnimSegment* SoHAnimSegment1115 = new SoHAnimSegment();
SoHAnimSegment1115->setUSE(QString("hanim_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1115);

SoHAnimSegment* SoHAnimSegment1116 = new SoHAnimSegment();
SoHAnimSegment1116->setUSE(QString("hanim_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1116);

SoHAnimSegment* SoHAnimSegment1117 = new SoHAnimSegment();
SoHAnimSegment1117->setUSE(QString("hanim_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1117);

SoHAnimSegment* SoHAnimSegment1118 = new SoHAnimSegment();
SoHAnimSegment1118->setUSE(QString("hanim_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1118);

SoHAnimSegment* SoHAnimSegment1119 = new SoHAnimSegment();
SoHAnimSegment1119->setUSE(QString("hanim_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1119);

SoHAnimSegment* SoHAnimSegment1120 = new SoHAnimSegment();
SoHAnimSegment1120->setUSE(QString("hanim_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1120);

SoHAnimSegment* SoHAnimSegment1121 = new SoHAnimSegment();
SoHAnimSegment1121->setUSE(QString("hanim_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1121);

SoHAnimSegment* SoHAnimSegment1122 = new SoHAnimSegment();
SoHAnimSegment1122->setUSE(QString("hanim_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1122);

SoHAnimSegment* SoHAnimSegment1123 = new SoHAnimSegment();
SoHAnimSegment1123->setUSE(QString("hanim_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1123);

SoHAnimSegment* SoHAnimSegment1124 = new SoHAnimSegment();
SoHAnimSegment1124->setUSE(QString("hanim_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1124);

SoHAnimSegment* SoHAnimSegment1125 = new SoHAnimSegment();
SoHAnimSegment1125->setUSE(QString("hanim_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1125);

SoHAnimSegment* SoHAnimSegment1126 = new SoHAnimSegment();
SoHAnimSegment1126->setUSE(QString("hanim_l_clavicle"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1126);

SoHAnimSegment* SoHAnimSegment1127 = new SoHAnimSegment();
SoHAnimSegment1127->setUSE(QString("hanim_r_clavicle"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1127);

SoHAnimSegment* SoHAnimSegment1128 = new SoHAnimSegment();
SoHAnimSegment1128->setUSE(QString("hanim_l_eyeball"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1128);

SoHAnimSegment* SoHAnimSegment1129 = new SoHAnimSegment();
SoHAnimSegment1129->setUSE(QString("hanim_r_eyeball"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1129);

SoHAnimSegment* SoHAnimSegment1130 = new SoHAnimSegment();
SoHAnimSegment1130->setUSE(QString("hanim_l_eyebrow"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1130);

SoHAnimSegment* SoHAnimSegment1131 = new SoHAnimSegment();
SoHAnimSegment1131->setUSE(QString("hanim_r_eyebrow"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1131);

SoHAnimSegment* SoHAnimSegment1132 = new SoHAnimSegment();
SoHAnimSegment1132->setUSE(QString("hanim_l_eyelid"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1132);

SoHAnimSegment* SoHAnimSegment1133 = new SoHAnimSegment();
SoHAnimSegment1133->setUSE(QString("hanim_r_eyelid"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1133);

SoHAnimSegment* SoHAnimSegment1134 = new SoHAnimSegment();
SoHAnimSegment1134->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1134);

SoHAnimSegment* SoHAnimSegment1135 = new SoHAnimSegment();
SoHAnimSegment1135->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1135);

SoHAnimSegment* SoHAnimSegment1136 = new SoHAnimSegment();
SoHAnimSegment1136->setUSE(QString("hanim_l_metacarpal_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1136);

SoHAnimSegment* SoHAnimSegment1137 = new SoHAnimSegment();
SoHAnimSegment1137->setUSE(QString("hanim_r_metacarpal_1"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1137);

SoHAnimSegment* SoHAnimSegment1138 = new SoHAnimSegment();
SoHAnimSegment1138->setUSE(QString("hanim_l_metacarpal_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1138);

SoHAnimSegment* SoHAnimSegment1139 = new SoHAnimSegment();
SoHAnimSegment1139->setUSE(QString("hanim_r_metacarpal_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1139);

SoHAnimSegment* SoHAnimSegment1140 = new SoHAnimSegment();
SoHAnimSegment1140->setUSE(QString("hanim_l_metacarpal_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1140);

SoHAnimSegment* SoHAnimSegment1141 = new SoHAnimSegment();
SoHAnimSegment1141->setUSE(QString("hanim_r_metacarpal_3"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1141);

SoHAnimSegment* SoHAnimSegment1142 = new SoHAnimSegment();
SoHAnimSegment1142->setUSE(QString("hanim_l_metacarpal_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1142);

SoHAnimSegment* SoHAnimSegment1143 = new SoHAnimSegment();
SoHAnimSegment1143->setUSE(QString("hanim_r_metacarpal_4"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1143);

SoHAnimSegment* SoHAnimSegment1144 = new SoHAnimSegment();
SoHAnimSegment1144->setUSE(QString("hanim_l_metacarpal_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1144);

SoHAnimSegment* SoHAnimSegment1145 = new SoHAnimSegment();
SoHAnimSegment1145->setUSE(QString("hanim_r_metacarpal_5"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1145);

SoHAnimSegment* SoHAnimSegment1146 = new SoHAnimSegment();
SoHAnimSegment1146->setUSE(QString("hanim_r_metatarsal_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1146);

SoHAnimSegment* SoHAnimSegment1147 = new SoHAnimSegment();
SoHAnimSegment1147->setUSE(QString("hanim_l_metatarsal_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1147);

SoHAnimSegment* SoHAnimSegment1148 = new SoHAnimSegment();
SoHAnimSegment1148->setUSE(QString("hanim_l_scapula"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1148);

SoHAnimSegment* SoHAnimSegment1149 = new SoHAnimSegment();
SoHAnimSegment1149->setUSE(QString("hanim_r_scapula"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1149);

SoHAnimSegment* SoHAnimSegment1150 = new SoHAnimSegment();
SoHAnimSegment1150->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1150);

SoHAnimSegment* SoHAnimSegment1151 = new SoHAnimSegment();
SoHAnimSegment1151->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1151);

SoHAnimSegment* SoHAnimSegment1152 = new SoHAnimSegment();
SoHAnimSegment1152->setUSE(QString("hanim_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1152);

SoHAnimSegment* SoHAnimSegment1153 = new SoHAnimSegment();
SoHAnimSegment1153->setUSE(QString("hanim_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1153);

SoHAnimSegment* SoHAnimSegment1154 = new SoHAnimSegment();
SoHAnimSegment1154->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1154);

SoHAnimSegment* SoHAnimSegment1155 = new SoHAnimSegment();
SoHAnimSegment1155->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1155);

SoHAnimSegment* SoHAnimSegment1156 = new SoHAnimSegment();
SoHAnimSegment1156->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1156);

SoHAnimSegment* SoHAnimSegment1157 = new SoHAnimSegment();
SoHAnimSegment1157->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1157);

SoHAnimSegment* SoHAnimSegment1158 = new SoHAnimSegment();
SoHAnimSegment1158->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1158);

SoHAnimSegment* SoHAnimSegment1159 = new SoHAnimSegment();
SoHAnimSegment1159->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid24->setSegments(*SoHAnimSegment1159);

SoNode20->addChild(*SoHAnimHumanoid24);

SoSceneManager0->setSceneGraph(*SoNode20);

return 0;
}
