
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
Someta3->setContent(QString("KoreanCharacter08Da.x3d"));
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
Someta8->setContent(QString("23 December 2021"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("description"));
Someta9->setContent(QString("Articulated 3D game character designed with a general graphics tool, then converted into an X3D HAnim model."));
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
Someta13->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter08Da.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("3DS MAX, https://www.autodesk.com/products/autodesk-3ds-max/overview"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("generator"));
Someta15->setContent(QString("Suwon University HAnim Editor"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("Gnu Image Manipulation Program, https://www.gimp.org"));
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
SoWorldInfo20->setTitle(QString("KoreanCharacter08Da.x3d"));
SoNode19->addChild(*SoWorldInfo20);

SoNavigationInfo* SoNavigationInfo21 = new SoNavigationInfo();
SoNavigationInfo21->setSpeed(1.5);
SoNode19->addChild(*SoNavigationInfo21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoViewpoint22->setDescription(QString("Da"));
SoViewpoint22->setPosition(new float[]{0.0,1.0,3.0});
SoNode19->addChild(*SoViewpoint22);

SoHAnimHumanoid* SoHAnimHumanoid23 = new SoHAnimHumanoid();
SoHAnimHumanoid23->X3DNode::setName(QString("Da"));
SoHAnimHumanoid23->setDEF(QString("hanim_Da"));
SoHAnimHumanoid23->setScale(new float[]{0.0225,0.0225,0.0225});
SoHAnimHumanoid23->setVersion(QString("2.0"));
//original HAnimHumanoid info='\"authorName=Chul Hee Jung and Myeong Won Lee\" \"authorEmail=myeongwonlee@gmail.com\" \"creationDate=31 March 2011\" \"humanoidVersion=2.0\" \"gender=female\" \"height=1.5\"'
SoMetadataSet* SoMetadataSet24 = new SoMetadataSet();
SoMetadataSet24->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet24->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString25 = new SoMetadataString();
SoMetadataString25->X3DNode::setName(QString("authorName"));
SoMetadataString25->setValue(new QString[]{QString("Chul Hee Jung and Myeong Won Lee")}, 1);
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
SoHAnimJoint31->setCenter(new float[]{0.0,32.73,-1.981});
SoHAnimJoint31->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint31->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment32 = new SoHAnimSegment();
SoHAnimSegment32->X3DNode::setName(QString("sacrum"));
SoHAnimSegment32->setDEF(QString("hanim_sacrum"));
SoTransform* SoTransform33 = new SoTransform();
SoTransform33->setTranslation(new float[]{0.0,32.73,-1.981});
SoShape* SoShape34 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoMaterial* SoMaterial36 = new SoMaterial();
SoMaterial36->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance35->addChild(*SoMaterial36);

SoImageTexture* SoImageTexture37 = new SoImageTexture();
SoImageTexture37->setDEF(QString("DaTextureAtlas"));
SoImageTexture37->setUrl(new QString[]{QString("images/Da.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/images/Da.png")}, 2);
SoVRMLAppearance35->addChild(*SoImageTexture37);

SoShape34->addChild(*SoVRMLAppearance35);

SoIndexedFaceSet* SoIndexedFaceSet38 = new SoIndexedFaceSet();
SoIndexedFaceSet38->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,1,-1,10,2,1,-1,1,9,10,-1,11,3,2,-1,2,10,11,-1,12,4,3,-1,3,11,12,-1,13,5,4,-1,4,12,13,-1,14,6,5,-1,5,13,14,-1,15,7,6,-1,6,14,15,-1,16,8,7,-1,7,15,16,-1,9,1,8,-1,8,16,9,-1,18,10,9,-1,9,17,18,-1,19,11,10,-1,10,18,19,-1,20,12,11,-1,11,19,20,-1,21,13,12,-1,12,20,21,-1,22,14,13,-1,13,21,22,-1,23,15,14,-1,14,22,23,-1,24,16,15,-1,15,23,24,-1,17,9,16,-1,16,24,17,-1,25,18,17,-1,25,19,18,-1,25,20,19,-1,25,21,20,-1,25,22,21,-1,25,23,22,-1,25,24,23,-1,25,17,24,-1}, 192);
SoIndexedFaceSet38->setCreaseAngle(1.57);
SoIndexedFaceSet38->setTexCoordIndex(new int32_t[]{0,8,9,-1,1,9,10,-1,2,10,11,-1,3,11,12,-1,4,12,13,-1,5,13,14,-1,6,14,15,-1,7,15,16,-1,18,9,8,-1,8,17,18,-1,19,10,9,-1,9,18,19,-1,20,11,10,-1,10,19,20,-1,21,12,11,-1,11,20,21,-1,22,13,12,-1,12,21,22,-1,23,14,13,-1,13,22,23,-1,24,15,14,-1,14,23,24,-1,25,16,15,-1,15,24,25,-1,27,18,17,-1,17,26,27,-1,28,19,18,-1,18,27,28,-1,29,20,19,-1,19,28,29,-1,30,21,20,-1,20,29,30,-1,31,22,21,-1,21,30,31,-1,32,23,22,-1,22,31,32,-1,33,24,23,-1,23,32,33,-1,34,25,24,-1,24,33,34,-1,35,27,26,-1,36,28,27,-1,37,29,28,-1,38,30,29,-1,39,31,30,-1,40,32,31,-1,41,33,32,-1,42,34,33,-1}, 192);
SoCoordinate* SoCoordinate39 = new SoCoordinate();
SoCoordinate39->setPoint(new float[]{0.0,0.9993,0.0,0.0,0.7066,-0.7066,-0.4996,0.7066,-0.4996,-0.7066,0.7066,0.0,-0.4996,0.7066,0.4996,0.0,0.7066,0.7066,0.4996,0.7066,0.4996,0.7066,0.7066,0.0,0.4996,0.7066,-0.4996,0.0,0.0,-0.9993,-0.7066,0.0,-0.7066,-0.9993,0.0,0.0,-0.7066,0.0,0.7066,0.0,0.0,0.9993,0.7066,0.0,0.7066,0.9993,0.0,0.0,0.7066,0.0,-0.7066,0.0,-0.7066,-0.7066,-0.4996,-0.7066,-0.4996,-0.7066,-0.7066,0.0,-0.4996,-0.7066,0.4996,0.0,-0.7066,0.7066,0.4996,-0.7066,0.4996,0.7066,-0.7066,0.0,0.4996,-0.7066,-0.4996,0.0,-0.9993,0.0}, 78);
SoIndexedFaceSet38->setCoord(*SoCoordinate39);

SoTextureCoordinate* SoTextureCoordinate40 = new SoTextureCoordinate();
SoTextureCoordinate40->setPoint(new float[]{0.4985,0.2607,0.5056,0.2607,0.5126,0.2607,0.5196,0.2607,0.5267,0.2607,0.5337,0.2607,0.5408,0.2607,0.5478,0.2607,0.4985,0.2466,0.5056,0.2466,0.5126,0.2466,0.5196,0.2466,0.5267,0.2466,0.5337,0.2466,0.5408,0.2466,0.5478,0.2466,0.5548,0.2466,0.4985,0.2325,0.5056,0.2325,0.5126,0.2325,0.5196,0.2325,0.5267,0.2325,0.5337,0.2325,0.5408,0.2325,0.5478,0.2325,0.5548,0.2325,0.4985,0.2184,0.5056,0.2184,0.5126,0.2184,0.5196,0.2184,0.5267,0.2184,0.5337,0.2184,0.5408,0.2184,0.5478,0.2184,0.5548,0.2184,0.4985,0.2044,0.5056,0.2044,0.5126,0.2044,0.5196,0.2044,0.5267,0.2044,0.5337,0.2044,0.5408,0.2044}, 84);
SoIndexedFaceSet38->setTexCoord(*SoTextureCoordinate40);

SoShape34->setGeometry(*SoIndexedFaceSet38);

SoTransform33->addChild(*SoShape34);

SoHAnimSegment32->addChild(*SoTransform33);

SoHAnimJoint31->addChildren(*SoHAnimSegment32);

SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("l_hip"));
SoHAnimJoint41->setDEF(QString("hanim_l_hip"));
SoHAnimJoint41->setCenter(new float[]{3.18,31.25,-0.9491});
SoHAnimJoint41->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint41->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment42 = new SoHAnimSegment();
SoHAnimSegment42->X3DNode::setName(QString("l_thigh"));
SoHAnimSegment42->setDEF(QString("hanim_l_thigh"));
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setTranslation(new float[]{3.18,31.25,-0.9491});
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance45->addChild(*SoMaterial46);

SoImageTexture* SoImageTexture47 = new SoImageTexture();
SoImageTexture47->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance45->addChild(*SoImageTexture47);

SoShape44->addChild(*SoVRMLAppearance45);

SoIndexedFaceSet* SoIndexedFaceSet48 = new SoIndexedFaceSet();
SoIndexedFaceSet48->setCoordIndex(new int32_t[]{2,3,4,-1,4,5,6,-1,2,4,6,-1,6,7,8,-1,2,6,8,-1,2,8,0,-1,1,2,0,-1,40,43,1,-1,1,0,40,-1,43,44,2,-1,2,1,43,-1,44,45,3,-1,3,2,44,-1,45,46,4,-1,4,3,45,-1,46,41,5,-1,5,4,46,-1,41,42,6,-1,6,5,41,-1,42,48,7,-1,7,6,42,-1,48,49,8,-1,8,7,48,-1,49,40,0,-1,0,8,49,-1,9,10,16,-1,16,17,9,-1,10,11,18,-1,18,16,10,-1,11,36,37,-1,37,18,11,-1,12,13,20,-1,20,19,12,-1,13,14,21,-1,21,20,13,-1,15,22,21,-1,21,14,15,-1,9,17,22,-1,22,15,9,-1,16,29,35,-1,35,17,16,-1,30,29,16,-1,16,18,30,-1,31,39,37,-1,37,19,31,-1,32,31,19,-1,19,20,32,-1,33,32,20,-1,20,21,33,-1,22,34,33,-1,33,21,22,-1,17,35,34,-1,34,22,17,-1,24,42,41,-1,41,23,24,-1,48,42,24,-1,24,47,48,-1,43,40,38,-1,38,25,43,-1,26,44,43,-1,43,25,26,-1,27,45,44,-1,44,26,27,-1,28,46,45,-1,45,27,28,-1,23,41,46,-1,46,28,23,-1,29,24,23,-1,23,35,29,-1,47,24,29,-1,29,30,47,-1,25,38,39,-1,39,31,25,-1,26,25,31,-1,31,32,26,-1,27,26,32,-1,32,33,27,-1,34,28,27,-1,27,33,34,-1,35,23,28,-1,28,34,35,-1,37,36,12,-1,12,19,37,-1,39,30,18,-1,18,37,39,-1,38,47,30,-1,30,39,38,-1,47,38,40,-1,40,49,47,-1,49,48,47,-1,52,53,54,-1,54,55,56,-1,56,57,50,-1,54,56,50,-1,52,54,50,-1,51,52,50,-1,10,9,51,-1,51,50,10,-1,9,15,52,-1,52,51,9,-1,15,14,53,-1,53,52,15,-1,14,13,54,-1,54,53,14,-1,13,12,55,-1,55,54,13,-1,12,36,56,-1,56,55,12,-1,36,11,57,-1,57,56,36,-1,11,10,50,-1,50,57,11,-1}, 448);
SoIndexedFaceSet48->setCreaseAngle(1.57);
SoIndexedFaceSet48->setTexCoordIndex(new int32_t[]{2,3,4,-1,4,5,6,-1,2,4,6,-1,6,7,8,-1,2,6,8,-1,2,8,0,-1,1,2,0,-1,9,12,1,-1,1,0,9,-1,13,14,2,-1,2,1,13,-1,14,15,3,-1,3,2,14,-1,15,16,4,-1,4,3,15,-1,16,10,5,-1,5,4,16,-1,10,11,6,-1,6,5,10,-1,11,17,7,-1,7,6,11,-1,18,19,8,-1,8,7,18,-1,20,9,0,-1,0,8,20,-1,21,22,23,-1,23,24,21,-1,22,25,26,-1,26,23,22,-1,25,27,28,-1,28,26,25,-1,29,30,31,-1,31,32,29,-1,30,33,34,-1,34,31,30,-1,35,36,34,-1,34,33,35,-1,21,24,36,-1,36,35,21,-1,23,37,38,-1,38,24,23,-1,39,37,23,-1,23,26,39,-1,40,41,28,-1,28,53,40,-1,42,54,32,-1,32,31,42,-1,43,42,31,-1,31,34,43,-1,36,44,43,-1,43,34,36,-1,24,38,44,-1,44,36,24,-1,45,59,58,-1,58,46,45,-1,60,59,45,-1,45,56,60,-1,62,57,48,-1,48,47,62,-1,49,64,63,-1,63,55,49,-1,50,65,64,-1,64,49,50,-1,51,66,65,-1,65,50,51,-1,46,58,66,-1,66,51,46,-1,37,45,46,-1,46,38,37,-1,56,45,37,-1,37,39,56,-1,47,48,41,-1,41,40,47,-1,49,55,54,-1,54,42,49,-1,50,49,42,-1,42,43,50,-1,44,51,50,-1,50,43,44,-1,38,46,51,-1,51,44,38,-1,28,27,52,-1,52,53,28,-1,41,39,26,-1,26,28,41,-1,48,56,39,-1,39,41,48,-1,56,48,57,-1,57,61,56,-1,69,68,67,-1,72,73,74,-1,74,75,76,-1,76,77,70,-1,74,76,70,-1,72,74,70,-1,71,72,70,-1,22,21,71,-1,71,70,22,-1,21,35,72,-1,72,71,21,-1,35,33,73,-1,73,72,35,-1,33,30,74,-1,74,73,33,-1,30,29,75,-1,75,74,30,-1,52,27,76,-1,76,75,52,-1,27,25,77,-1,77,76,27,-1,25,22,70,-1,70,77,25,-1}, 448);
SoCoordinate* SoCoordinate49 = new SoCoordinate();
SoCoordinate49->setPoint(new float[]{-2.213,3.415,-1.432,-2.563,3.235,-0.044,-1.896,3.353,1.304,-0.2566,3.071,1.979,1.061,2.666,1.218,1.733,2.312,-0.0382,1.105,2.573,-1.55,-0.0841,2.894,-2.232,-1.033,3.07,-2.249,2.024,-14.23,-0.0084,1.105,-14.23,-1.033,0.2432,-14.23,-1.628,-1.544,-14.23,-0.0084,-0.958,-14.2,1.652,0.2432,-14.22,2.319,1.502,-14.17,1.712,1.254,-12.45,-1.41,1.95,-12.45,-0.0084,0.2427,-12.44,-2.045,-1.567,-12.45,-0.0084,-0.9137,-12.46,1.762,0.2427,-12.45,2.395,1.378,-12.47,1.687,2.546,-1.755,-0.0084,1.61,-1.638,-2.255,-2.471,-2.666,-0.0107,-1.873,-2.65,2.057,-0.0345,-2.462,3.088,1.694,-2.104,1.976,1.405,-8.209,-1.802,0.1104,-8.092,-2.569,-1.935,-8.892,-0.0084,-1.302,-8.974,1.866,0.1104,-8.922,2.658,1.57,-8.734,1.815,2.256,-8.478,-0.0084,-0.7153,-14.23,-1.033,-0.9827,-12.45,-1.368,-2.238,-2.425,-2.148,-1.544,-8.472,-1.802,-2.337,-1.248,-2.213,2.564,-0.1067,-0.0084,1.757,-0.2099,-2.414,-2.598,-1.583,-0.0084,-1.971,-1.132,2.138,-0.018,-0.5002,3.257,1.652,-0.15,2.0,-0.2311,-1.92,-3.327,0.3087,-0.559,-3.515,-0.8698,-0.924,-3.545,0.7809,-15.71,-0.9452,1.397,-15.71,-0.1162,1.08,-15.71,1.251,0.2583,-15.71,1.684,-0.5384,-15.71,1.201,-0.9046,-15.71,-0.1323,-0.3675,-15.71,-0.9437,0.238,-15.71,-1.355}, 174);
SoIndexedFaceSet48->setCoord(*SoCoordinate49);

SoTextureCoordinate* SoTextureCoordinate50 = new SoTextureCoordinate();
SoTextureCoordinate50->setPoint(new float[]{0.9323,0.8796,0.955,0.9007,0.8109,0.8829,0.8324,0.8719,0.8505,0.8713,0.8719,0.8723,0.9023,0.8773,0.9112,0.8772,0.922,0.8742,0.9323,0.8796,0.8719,0.8723,0.9023,0.8773,0.955,0.9007,0.7929,0.9027,0.8109,0.8829,0.8324,0.8719,0.8505,0.8713,0.9112,0.8772,0.9112,0.8772,0.922,0.8742,0.922,0.8742,0.8674,0.6509,0.8839,0.6494,0.8924,0.6779,0.8681,0.6767,0.8939,0.6493,0.9112,0.6761,0.9011,0.64,0.9277,0.6703,0.8255,0.6267,0.8368,0.6434,0.8121,0.6703,0.7869,0.6572,0.842,0.6491,0.8296,0.6745,0.8506,0.6493,0.8488,0.6758,0.9079,0.7498,0.87,0.745,0.9282,0.7486,0.9779,0.7341,0.9504,0.7433,0.7921,0.7337,0.8179,0.734,0.8447,0.7398,0.9056,0.8524,0.8721,0.8479,0.9822,0.8649,0.9552,0.8592,0.794,0.8537,0.82,0.8481,0.8471,0.8465,0.9073,0.6307,0.9433,0.6604,0.7593,0.7337,0.7655,0.8637,0.9289,0.8568,0.9323,0.8796,0.8719,0.8723,0.9023,0.8773,0.9112,0.8772,0.922,0.8742,0.955,0.9007,0.7929,0.9027,0.8109,0.8829,0.8324,0.8719,0.8505,0.8713,0.9289,0.8568,0.9112,0.8772,0.922,0.8742,0.8839,0.6494,0.8674,0.6509,0.8506,0.6493,0.842,0.6491,0.8368,0.6434,0.8255,0.6267,0.9011,0.64,0.8939,0.6493}, 156);
SoIndexedFaceSet48->setTexCoord(*SoTextureCoordinate50);

SoShape44->setGeometry(*SoIndexedFaceSet48);

SoTransform43->addChild(*SoShape44);

SoHAnimSegment42->addChild(*SoTransform43);

SoHAnimJoint41->addChildren(*SoHAnimSegment42);

SoHAnimJoint* SoHAnimJoint51 = new SoHAnimJoint();
SoHAnimJoint51->X3DNode::setName(QString("l_knee"));
SoHAnimJoint51->setDEF(QString("hanim_l_knee"));
SoHAnimJoint51->setCenter(new float[]{3.414,17.040001,-0.9556});
SoHAnimJoint51->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint51->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment52 = new SoHAnimSegment();
SoHAnimSegment52->X3DNode::setName(QString("l_calf"));
SoHAnimSegment52->setDEF(QString("hanim_l_calf"));
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{3.414,17.040001,-0.9556});
SoShape* SoShape54 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance55->addChild(*SoMaterial56);

SoImageTexture* SoImageTexture57 = new SoImageTexture();
SoImageTexture57->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance55->addChild(*SoImageTexture57);

SoShape54->addChild(*SoVRMLAppearance55);

SoIndexedFaceSet* SoIndexedFaceSet58 = new SoIndexedFaceSet();
SoIndexedFaceSet58->setCoordIndex(new int32_t[]{32,38,1,-1,1,0,32,-1,33,32,0,-1,0,2,33,-1,34,39,14,-1,14,3,34,-1,35,34,3,-1,3,4,35,-1,5,36,35,-1,35,4,5,-1,6,37,36,-1,36,5,6,-1,1,38,37,-1,37,6,1,-1,24,7,8,-1,8,25,24,-1,26,25,8,-1,8,9,26,-1,15,10,27,-1,27,31,15,-1,11,28,27,-1,27,10,11,-1,12,29,28,-1,28,11,12,-1,13,30,29,-1,29,12,13,-1,24,30,13,-1,13,7,24,-1,9,18,20,-1,20,15,9,-1,31,26,9,-1,9,15,31,-1,8,7,17,-1,17,16,8,-1,9,8,16,-1,16,18,9,-1,19,10,15,-1,15,20,19,-1,21,11,10,-1,10,19,21,-1,22,12,11,-1,11,21,22,-1,23,13,12,-1,12,22,23,-1,7,13,23,-1,23,17,7,-1,33,39,20,-1,20,18,33,-1,16,17,38,-1,38,32,16,-1,18,16,32,-1,32,33,18,-1,19,20,39,-1,39,34,19,-1,35,21,19,-1,19,34,35,-1,36,22,21,-1,21,35,36,-1,37,23,22,-1,22,36,37,-1,38,17,23,-1,23,37,38,-1,2,14,39,-1,39,33,2,-1,0,1,40,-1,1,6,40,-1,6,5,40,-1,5,4,40,-1,4,3,40,-1,3,14,40,-1,14,2,40,-1,2,0,40,-1,24,25,42,-1,42,41,24,-1,25,26,43,-1,43,42,25,-1,26,31,44,-1,44,43,26,-1,31,27,45,-1,45,44,31,-1,27,28,46,-1,46,45,27,-1,28,29,47,-1,47,46,28,-1,29,30,48,-1,48,47,29,-1,30,24,41,-1,41,48,30,-1,43,44,45,-1,45,46,47,-1,47,48,41,-1,45,47,41,-1,43,45,41,-1,42,43,41,-1}, 376);
SoIndexedFaceSet58->setCreaseAngle(1.57);
SoIndexedFaceSet58->setTexCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,5,1,0,-1,0,4,5,-1,7,8,9,-1,9,6,7,-1,11,7,6,-1,6,10,11,-1,12,13,11,-1,11,10,12,-1,14,15,13,-1,13,12,14,-1,3,2,15,-1,15,14,3,-1,18,19,16,-1,16,17,18,-1,21,17,16,-1,16,20,21,-1,24,25,22,-1,22,23,24,-1,26,27,22,-1,22,25,26,-1,28,29,27,-1,27,26,28,-1,30,31,29,-1,29,28,30,-1,18,31,30,-1,30,19,18,-1,20,32,33,-1,33,44,20,-1,43,21,20,-1,20,44,43,-1,16,19,35,-1,35,34,16,-1,20,16,34,-1,34,32,20,-1,36,25,24,-1,24,45,36,-1,37,26,25,-1,25,36,37,-1,38,28,26,-1,26,37,38,-1,39,30,28,-1,28,38,39,-1,19,30,39,-1,39,35,19,-1,5,41,33,-1,33,32,5,-1,34,35,2,-1,2,1,34,-1,32,34,1,-1,1,5,32,-1,36,45,8,-1,8,7,36,-1,11,37,36,-1,36,7,11,-1,13,38,37,-1,37,11,13,-1,15,39,38,-1,38,13,15,-1,2,35,39,-1,39,15,2,-1,4,42,41,-1,41,5,4,-1,0,3,40,-1,3,14,40,-1,14,12,40,-1,12,10,40,-1,10,6,40,-1,6,9,40,-1,42,4,40,-1,4,0,40,-1,18,17,47,-1,47,46,18,-1,17,21,48,-1,48,47,17,-1,21,43,49,-1,49,48,21,-1,23,22,50,-1,50,49,23,-1,22,27,51,-1,51,50,22,-1,27,29,52,-1,52,51,27,-1,29,31,53,-1,53,52,29,-1,31,18,46,-1,46,53,31,-1,48,49,50,-1,50,51,52,-1,52,53,46,-1,50,52,46,-1,48,50,46,-1,47,48,46,-1}, 376);
SoCoordinate* SoCoordinate59 = new SoCoordinate();
SoCoordinate59->setPoint(new float[]{0.6772,-12.59,-0.8455,1.122,-12.59,-0.0018,0.009,-12.59,-1.096,-1.026,-12.59,-0.0018,-0.604,-12.59,0.842,0.009,-12.59,1.196,0.6772,-12.59,0.842,1.697,-1.448,-0.0018,0.9307,-1.443,-1.147,0.009,-1.44,-1.835,-1.619,-1.448,-0.0018,-0.9447,-1.496,1.521,0.009,-1.513,2.101,1.063,-1.454,1.487,-0.604,-12.59,-0.8455,-1.035,-1.443,-1.165,1.046,-5.151,-1.186,1.665,-5.556,-0.0018,0.009,-4.957,-1.943,-1.472,-5.761,-0.0018,-0.9836,-5.363,-1.213,-0.8429,-5.942,1.259,0.009,-5.944,1.81,0.9757,-5.877,1.262,1.791,-0.0118,-0.0018,0.8718,-0.0118,-1.026,0.0095,-0.0118,-1.651,-1.777,-0.0118,-0.0018,-1.192,0.0146,1.658,0.0095,-0.0006,2.325,1.268,0.0444,1.718,-0.949,-0.0118,-1.026,0.785,-11.37,-0.968,0.009,-11.36,-1.383,-1.164,-11.41,-0.0018,-0.7001,-11.44,0.9904,0.009,-11.41,1.452,0.7602,-11.41,0.9913,1.305,-11.37,-0.0018,-0.6593,-11.43,-1.065,0.009,-12.78,-0.0018,1.28,1.466,0.0746,0.6343,1.466,-0.6311,-0.0009,1.466,-1.039,-0.7076,1.466,-0.6307,-1.279,1.466,0.0701,-0.8935,1.466,1.209,0.0062,1.466,1.652,0.9447,1.466,1.251}, 147);
SoIndexedFaceSet58->setCoord(*SoCoordinate59);

SoTextureCoordinate* SoTextureCoordinate60 = new SoTextureCoordinate();
SoTextureCoordinate60->setPoint(new float[]{0.8803,0.4005,0.8916,0.4184,0.8769,0.4226,0.8712,0.4055,0.8899,0.393,0.9065,0.4125,0.8327,0.3995,0.8182,0.4195,0.8033,0.4115,0.8255,0.3877,0.8438,0.4073,0.8361,0.4244,0.8487,0.4091,0.8471,0.4254,0.86,0.4061,0.8623,0.4237,0.9101,0.5733,0.9014,0.599,0.8859,0.5939,0.8913,0.5715,0.926,0.5758,0.9115,0.6008,0.8402,0.6091,0.8351,0.6188,0.8038,0.5929,0.8218,0.5846,0.8433,0.5761,0.8552,0.5988,0.8584,0.5722,0.8625,0.5922,0.8734,0.5718,0.8704,0.5929,0.9249,0.4799,0.9417,0.4724,0.9059,0.487,0.8846,0.4921,0.8055,0.4821,0.8287,0.4832,0.8463,0.4871,0.8654,0.4897,0.8588,0.3881,0.915,0.4056,0.891,0.3868,0.9186,0.615,0.9429,0.5818,0.7863,0.4837,0.8859,0.5939,0.9014,0.599,0.9115,0.6008,0.9186,0.615,0.8402,0.6091,0.8552,0.5988,0.8625,0.5922,0.8704,0.5929}, 108);
SoIndexedFaceSet58->setTexCoord(*SoTextureCoordinate60);

SoShape54->setGeometry(*SoIndexedFaceSet58);

SoTransform53->addChild(*SoShape54);

SoHAnimSegment52->addChild(*SoTransform53);

SoHAnimJoint51->addChildren(*SoHAnimSegment52);

SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint61->setDEF(QString("hanim_l_talocrural"));
SoHAnimJoint61->setCenter(new float[]{3.631,4.504,-0.7461});
SoHAnimJoint61->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint61->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment62 = new SoHAnimSegment();
SoHAnimSegment62->X3DNode::setName(QString("l_talus"));
SoHAnimSegment62->setDEF(QString("hanim_l_talus"));
SoTransform* SoTransform63 = new SoTransform();
SoTransform63->setTranslation(new float[]{3.631,4.504,-0.7461});
SoShape* SoShape64 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance65 = new SoVRMLAppearance();
SoMaterial* SoMaterial66 = new SoMaterial();
SoMaterial66->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance65->addChild(*SoMaterial66);

SoImageTexture* SoImageTexture67 = new SoImageTexture();
SoImageTexture67->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance65->addChild(*SoImageTexture67);

SoShape64->addChild(*SoVRMLAppearance65);

SoIndexedFaceSet* SoIndexedFaceSet68 = new SoIndexedFaceSet();
SoIndexedFaceSet68->setCoordIndex(new int32_t[]{0,1,19,-1,19,25,0,-1,2,20,19,-1,19,1,2,-1,3,21,20,-1,20,2,3,-1,4,22,21,-1,21,3,4,-1,0,25,24,-1,26,28,4,-1,4,3,26,-1,29,26,3,-1,3,2,29,-1,30,29,2,-1,2,1,30,-1,27,30,1,-1,1,0,27,-1,16,15,28,-1,28,26,16,-1,17,16,26,-1,26,29,17,-1,18,17,29,-1,29,30,18,-1,14,18,30,-1,30,27,14,-1,19,7,6,-1,6,25,19,-1,20,8,7,-1,7,19,20,-1,21,9,8,-1,8,20,21,-1,22,10,9,-1,9,21,22,-1,11,10,22,-1,22,23,11,-1,5,12,11,-1,11,23,5,-1,13,12,5,-1,5,24,13,-1,6,13,24,-1,24,25,6,-1,6,7,31,-1,7,8,31,-1,8,9,31,-1,9,10,31,-1,10,11,31,-1,11,12,31,-1,12,13,31,-1,13,6,31,-1,16,33,32,-1,32,15,16,-1,17,18,33,-1,33,16,17,-1,18,14,32,-1,32,33,18,-1,23,22,4,-1,35,36,37,-1,37,38,39,-1,39,40,41,-1,37,39,41,-1,41,42,43,-1,37,41,43,-1,35,37,43,-1,35,43,34,-1,5,23,35,-1,35,34,5,-1,23,4,36,-1,36,35,23,-1,4,28,37,-1,37,36,4,-1,28,15,38,-1,38,37,28,-1,15,32,39,-1,39,38,15,-1,32,14,40,-1,40,39,32,-1,14,27,41,-1,41,40,14,-1,27,0,42,-1,42,41,27,-1,0,24,43,-1,43,42,0,-1,24,5,34,-1,34,43,24,-1}, 336);
SoIndexedFaceSet68->setCreaseAngle(1.57);
SoIndexedFaceSet68->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,5,0,-1,3,4,2,-1,2,1,3,-1,1,2,4,-1,4,3,1,-1,0,5,2,-1,2,1,0,-1,0,5,13,-1,19,10,0,-1,0,1,19,-1,23,19,1,-1,1,3,23,-1,19,23,3,-1,3,1,19,-1,10,19,1,-1,1,0,10,-1,30,28,10,-1,10,19,30,-1,31,30,19,-1,19,23,31,-1,29,32,26,-1,26,25,29,-1,27,29,25,-1,25,24,27,-1,2,39,41,-1,41,5,2,-1,4,40,39,-1,39,2,4,-1,2,39,40,-1,40,4,2,-1,5,41,39,-1,39,2,5,-1,42,41,5,-1,5,13,42,-1,14,44,42,-1,42,13,14,-1,42,44,14,-1,14,13,42,-1,41,42,13,-1,13,5,41,-1,41,39,43,-1,39,40,43,-1,40,39,43,-1,39,41,43,-1,41,42,43,-1,42,44,43,-1,44,42,43,-1,42,41,43,-1,34,35,22,-1,22,8,34,-1,36,37,35,-1,35,34,36,-1,37,33,22,-1,22,35,37,-1,13,5,0,-1,16,17,18,-1,18,49,20,-1,20,21,18,-1,18,20,18,-1,18,17,16,-1,18,18,16,-1,16,18,16,-1,16,16,15,-1,14,13,46,-1,46,45,14,-1,13,0,47,-1,47,46,13,-1,0,10,48,-1,48,47,0,-1,11,12,49,-1,49,18,11,-1,6,7,20,-1,20,49,6,-1,9,38,51,-1,51,50,9,-1,12,11,18,-1,18,21,12,-1,10,0,47,-1,47,48,10,-1,0,13,46,-1,46,47,0,-1,13,14,45,-1,45,46,13,-1}, 336);
SoCoordinate* SoCoordinate69 = new SoCoordinate();
SoCoordinate69->setPoint(new float[]{1.841,-1.908,-0.0161,1.307,-2.033,-1.161,-0.1196,-2.03,-1.925,-1.25,-2.033,-1.167,-1.775,-2.041,0.1968,-0.0463,-0.6579,1.458,1.122,0.1952,-0.0374,0.6712,0.1856,-1.088,-0.1196,0.1211,-1.349,-0.9596,0.0475,-1.118,-1.364,0.0184,-0.0431,-0.9545,0.0396,0.5647,-0.1196,0.1094,1.036,0.6764,0.1777,0.5682,1.715,-4.504,-0.0426,-1.643,-4.504,-0.0426,-1.156,-4.504,-1.154,-0.1196,-4.504,-1.87,1.219,-4.504,-1.154,0.9699,-0.7703,-1.144,-0.1196,-0.8069,-1.731,-1.156,-0.9176,-1.144,-1.623,-0.8933,0.1659,-1.424,-0.8548,1.044,1.272,-0.715,0.8194,1.461,-0.7428,-0.042,-1.451,-3.493,-1.19,2.132,-3.609,-0.0745,-2.061,-3.611,-0.0842,-0.1196,-3.44,-1.941,1.513,-3.488,-1.19,-0.1196,0.4595,-0.0414,-0.1196,-4.504,-0.0426,-0.1196,-4.504,-1.154,-0.0144,-1.393,1.513,-1.198,-1.547,1.103,-1.512,-2.253,0.7636,-1.783,-3.743,0.5048,-1.465,-4.436,0.6071,-0.0938,-4.438,0.6133,1.591,-4.439,0.6193,1.906,-3.741,0.5362,1.633,-2.143,0.5649,1.127,-1.423,0.8897}, 132);
SoIndexedFaceSet68->setCoord(*SoCoordinate69);

SoTextureCoordinate* SoTextureCoordinate70 = new SoTextureCoordinate();
SoTextureCoordinate70->setPoint(new float[]{0.3073,0.3733,0.2855,0.3775,0.2892,0.3946,0.2565,0.3837,0.2667,0.4044,0.3127,0.3911,0.2725,0.2624,0.2707,0.2591,0.2565,0.2656,0.2782,0.255,0.3066,0.3545,0.2798,0.2632,0.2784,0.2616,0.3352,0.3928,0.3553,0.4119,0.2871,0.2631,0.2845,0.2634,0.2813,0.2643,0.2798,0.2632,0.2827,0.3624,0.2707,0.2591,0.267,0.2579,0.2601,0.2561,0.2519,0.3634,0.2675,0.2819,0.2613,0.2839,0.2533,0.2842,0.2683,0.2762,0.3096,0.3328,0.2602,0.2773,0.2784,0.337,0.2504,0.3407,0.2529,0.2783,0.2564,0.2466,0.2476,0.2629,0.2512,0.2562,0.2421,0.2563,0.2475,0.2495,0.2637,0.2183,0.2954,0.41,0.2848,0.42,0.3102,0.406,0.3249,0.4108,0.3094,0.4281,0.3357,0.4239,0.3553,0.4119,0.3352,0.3928,0.3073,0.3733,0.3066,0.3545,0.2784,0.2616,0.2782,0.255,0.2637,0.2183}, 104);
SoIndexedFaceSet68->setTexCoord(*SoTextureCoordinate70);

SoShape64->setGeometry(*SoIndexedFaceSet68);

SoTransform63->addChild(*SoShape64);

SoHAnimSegment62->addChild(*SoTransform63);

SoHAnimJoint61->addChildren(*SoHAnimSegment62);

SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint71->setDEF(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimJoint71->setCenter(new float[]{3.631,3.792,0.05479});
SoHAnimJoint71->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint71->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment72 = new SoHAnimSegment();
SoHAnimSegment72->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment72->setDEF(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform73 = new SoTransform();
SoTransform73->setTranslation(new float[]{3.631,3.792,0.05479});
SoShape* SoShape74 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance75 = new SoVRMLAppearance();
SoMaterial* SoMaterial76 = new SoMaterial();
SoMaterial76->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance75->addChild(*SoMaterial76);

SoImageTexture* SoImageTexture77 = new SoImageTexture();
SoImageTexture77->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance75->addChild(*SoImageTexture77);

SoShape74->addChild(*SoVRMLAppearance75);

SoIndexedFaceSet* SoIndexedFaceSet78 = new SoIndexedFaceSet();
SoIndexedFaceSet78->setCoordIndex(new int32_t[]{34,0,38,-1,0,6,35,-1,35,38,0,-1,35,6,1,-1,1,39,35,-1,3,4,37,-1,37,42,3,-1,23,40,33,-1,33,1,23,-1,24,30,17,-1,17,18,24,-1,31,24,18,-1,18,19,31,-1,41,25,0,-1,0,34,41,-1,2,36,40,-1,40,23,2,-1,21,20,30,-1,30,24,21,-1,22,21,24,-1,24,31,22,-1,37,4,25,-1,25,41,37,-1,8,9,3,-1,3,2,8,-1,9,10,4,-1,4,3,9,-1,5,26,23,-1,23,1,5,-1,27,7,0,-1,0,25,27,-1,26,8,2,-1,2,23,26,-1,10,27,25,-1,25,4,10,-1,11,28,26,-1,26,5,11,-1,29,13,7,-1,7,27,29,-1,14,15,9,-1,9,8,14,-1,28,14,8,-1,8,26,28,-1,16,29,27,-1,27,10,16,-1,15,16,10,-1,10,9,15,-1,18,17,11,-1,11,12,18,-1,17,30,28,-1,28,11,17,-1,19,18,12,-1,12,13,19,-1,31,19,13,-1,13,29,31,-1,20,21,15,-1,15,14,20,-1,30,20,14,-1,14,28,30,-1,22,31,29,-1,29,16,22,-1,21,22,16,-1,16,15,21,-1,36,2,3,-1,3,42,36,-1,7,32,6,-1,6,0,7,-1,6,32,5,-1,5,1,6,-1,13,12,32,-1,32,7,13,-1,5,32,12,-1,12,11,5,-1,39,1,33,-1,44,45,46,-1,46,47,48,-1,44,46,48,-1,49,50,51,-1,48,49,51,-1,44,48,51,-1,44,51,52,-1,44,52,43,-1,38,35,44,-1,44,43,38,-1,35,39,45,-1,45,44,35,-1,39,33,46,-1,46,45,39,-1,33,40,47,-1,47,46,33,-1,40,36,48,-1,48,47,40,-1,36,42,49,-1,49,48,36,-1,42,37,50,-1,50,49,42,-1,37,41,51,-1,51,50,37,-1,41,34,52,-1,52,51,41,-1,34,38,43,-1,43,52,34,-1}, 408);
SoIndexedFaceSet78->setCreaseAngle(1.57);
SoIndexedFaceSet78->setTexCoordIndex(new int32_t[]{30,3,35,-1,3,22,31,-1,31,35,3,-1,31,22,3,-1,3,35,31,-1,0,1,34,-1,34,37,0,-1,7,36,30,-1,30,3,7,-1,6,5,4,-1,4,2,6,-1,5,6,2,-1,2,4,5,-1,36,7,3,-1,3,30,36,-1,53,59,61,-1,61,49,53,-1,52,51,47,-1,47,48,52,-1,11,12,69,-1,69,68,11,-1,33,15,70,-1,70,73,33,-1,9,10,45,-1,45,50,9,-1,10,13,46,-1,46,45,10,-1,16,23,7,-1,7,3,16,-1,23,16,3,-1,3,7,23,-1,54,55,53,-1,53,49,54,-1,24,71,70,-1,70,15,24,-1,25,27,23,-1,23,16,25,-1,27,25,16,-1,16,23,27,-1,14,17,10,-1,10,9,14,-1,56,57,55,-1,55,54,56,-1,28,72,71,-1,71,24,28,-1,17,18,13,-1,13,10,17,-1,2,4,25,-1,25,26,2,-1,4,5,27,-1,27,25,4,-1,4,2,26,-1,26,25,4,-1,5,4,25,-1,25,27,5,-1,19,20,17,-1,17,14,19,-1,47,51,57,-1,57,56,47,-1,11,68,72,-1,72,28,11,-1,20,21,18,-1,18,17,20,-1,32,8,0,-1,0,37,32,-1,16,29,22,-1,22,3,16,-1,22,29,16,-1,16,3,22,-1,25,26,29,-1,29,16,25,-1,16,29,26,-1,26,25,16,-1,35,3,30,-1,64,63,65,-1,65,66,42,-1,64,65,42,-1,43,67,66,-1,42,43,66,-1,64,42,66,-1,64,66,65,-1,64,65,63,-1,35,31,39,-1,39,38,35,-1,31,35,38,-1,38,39,31,-1,35,30,40,-1,40,38,35,-1,30,36,41,-1,41,40,30,-1,61,59,42,-1,42,66,61,-1,58,62,43,-1,43,42,58,-1,62,60,67,-1,67,43,62,-1,33,73,74,-1,74,44,33,-1,36,30,40,-1,40,41,36,-1,30,35,38,-1,38,40,30,-1}, 408);
SoCoordinate* SoCoordinate79 = new SoCoordinate();
SoCoordinate79->setPoint(new float[]{-1.58,-1.105,0.8483,1.609,-0.9849,0.6977,1.609,-3.792,0.6078,-0.1196,-3.792,0.6078,-1.533,-3.792,0.6078,1.932,-1.571,1.892,-0.1196,-0.64,1.328,-1.887,-1.737,2.083,2.161,-3.792,1.854,-0.1196,-3.792,1.854,-2.067,-3.792,1.854,2.012,-2.105,3.145,-0.1196,-1.78,3.449,-1.942,-2.104,3.135,2.197,-3.792,3.105,-0.1196,-3.792,3.105,-2.147,-3.792,3.105,1.672,-2.757,4.374,-0.2477,-2.432,4.639,-1.759,-2.686,4.292,1.777,-3.792,4.488,-0.4437,-3.792,5.029,-1.884,-3.792,4.512,1.869,-3.111,0.5785,-0.4437,-3.205,5.149,-1.921,-3.111,0.5785,2.407,-3.288,1.854,-2.363,-3.288,1.854,2.337,-3.288,3.105,-2.407,-3.288,3.105,1.848,-3.288,4.652,-1.98,-3.288,4.534,-0.1196,-1.258,2.396,1.841,-1.196,-0.8169,-1.775,-1.329,-0.604,-0.0463,0.0542,0.6575,1.715,-3.792,-0.8435,-1.643,-3.792,-0.8435,-1.424,-0.1427,0.2436,1.272,-0.0029,0.0185,2.132,-2.896,-0.8753,-2.061,-2.899,-0.885,-0.1196,-3.792,-0.8435,-1.29,-0.0564,-0.712,-0.0804,0.1027,-0.3015,1.085,0.069,-0.9272,1.599,-1.001,-1.725,1.874,-2.613,-1.758,1.546,-3.337,-1.682,-0.1591,-3.336,-1.687,-1.551,-3.334,-1.692,-1.881,-2.614,-1.787,-1.609,-1.114,-1.525}, 159);
SoIndexedFaceSet78->setCoord(*SoCoordinate79);

SoTextureCoordinate* SoTextureCoordinate80 = new SoTextureCoordinate();
SoTextureCoordinate80->setPoint(new float[]{0.3109,0.2547,0.3018,0.2892,0.416,0.3757,0.3443,0.3733,0.4055,0.3535,0.4123,0.3444,0.4347,0.3611,0.3436,0.3472,0.2943,0.2204,0.3263,0.2346,0.3263,0.237,0.3478,0.2609,0.3553,0.2657,0.3264,0.2395,0.3278,0.2342,0.3283,0.26,0.3686,0.3612,0.328,0.2376,0.328,0.2398,0.3292,0.2346,0.3299,0.2374,0.3292,0.2394,0.3735,0.3991,0.3684,0.3388,0.3352,0.2593,0.3882,0.3563,0.397,0.3872,0.3885,0.336,0.3423,0.2596,0.3817,0.395,0.3073,0.3733,0.3553,0.4119,0.2637,0.2183,0.3196,0.2607,0.264,0.2919,0.3352,0.3928,0.3066,0.3545,0.2782,0.255,0.3352,0.3928,0.3553,0.4119,0.3073,0.3733,0.3066,0.3545,0.3251,0.2416,0.3233,0.2371,0.3071,0.2495,0.3252,0.237,0.3246,0.239,0.331,0.2422,0.3323,0.2432,0.327,0.2424,0.3242,0.2351,0.331,0.2416,0.3326,0.2426,0.3269,0.2414,0.3285,0.2419,0.3284,0.2413,0.3296,0.2417,0.3299,0.2413,0.3224,0.2349,0.3251,0.2416,0.3225,0.2392,0.3249,0.2428,0.3233,0.2371,0.3266,0.245,0.3277,0.2461,0.325,0.2439,0.3249,0.2428,0.3225,0.2392,0.3478,0.2639,0.3539,0.2685,0.3289,0.2647,0.3357,0.2624,0.3412,0.2616,0.3188,0.2667,0.3188,0.2667}, 150);
SoIndexedFaceSet78->setTexCoord(*SoTextureCoordinate80);

SoShape74->setGeometry(*SoIndexedFaceSet78);

SoTransform73->addChild(*SoShape74);

SoHAnimSegment72->addChild(*SoTransform73);

SoHAnimJoint71->addChildren(*SoHAnimSegment72);

SoHAnimJoint61->addChildren(*SoHAnimJoint71);

SoHAnimJoint51->addChildren(*SoHAnimJoint61);

SoHAnimJoint41->addChildren(*SoHAnimJoint51);

SoHAnimJoint31->addChildren(*SoHAnimJoint41);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("r_hip"));
SoHAnimJoint81->setDEF(QString("hanim_r_hip"));
SoHAnimJoint81->setCenter(new float[]{-3.18,31.25,-0.9491});
SoHAnimJoint81->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint81->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment82 = new SoHAnimSegment();
SoHAnimSegment82->X3DNode::setName(QString("r_thigh"));
SoHAnimSegment82->setDEF(QString("hanim_r_thigh"));
SoTransform* SoTransform83 = new SoTransform();
SoTransform83->setTranslation(new float[]{-3.18,31.25,-0.9491});
SoShape* SoShape84 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance85 = new SoVRMLAppearance();
SoMaterial* SoMaterial86 = new SoMaterial();
SoMaterial86->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance85->addChild(*SoMaterial86);

SoImageTexture* SoImageTexture87 = new SoImageTexture();
SoImageTexture87->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance85->addChild(*SoImageTexture87);

SoShape84->addChild(*SoVRMLAppearance85);

SoIndexedFaceSet* SoIndexedFaceSet88 = new SoIndexedFaceSet();
SoIndexedFaceSet88->setCoordIndex(new int32_t[]{8,7,6,-1,6,5,4,-1,4,3,2,-1,6,4,2,-1,8,6,2,-1,0,8,2,-1,1,0,2,-1,40,0,1,-1,1,43,40,-1,43,1,2,-1,2,44,43,-1,44,2,3,-1,3,45,44,-1,45,3,4,-1,4,46,45,-1,46,4,5,-1,5,41,46,-1,41,5,6,-1,6,42,41,-1,42,6,7,-1,7,48,42,-1,48,7,8,-1,8,49,48,-1,49,8,0,-1,0,40,49,-1,9,17,16,-1,16,10,9,-1,10,16,18,-1,18,11,10,-1,11,18,37,-1,37,36,11,-1,12,19,20,-1,20,13,12,-1,13,20,21,-1,21,14,13,-1,15,14,21,-1,21,22,15,-1,9,15,22,-1,22,17,9,-1,16,17,35,-1,35,29,16,-1,30,18,16,-1,16,29,30,-1,31,19,37,-1,37,39,31,-1,32,20,19,-1,19,31,32,-1,33,21,20,-1,20,32,33,-1,22,21,33,-1,33,34,22,-1,17,22,34,-1,34,35,17,-1,24,23,41,-1,41,42,24,-1,48,47,24,-1,24,42,48,-1,43,25,38,-1,38,40,43,-1,26,25,43,-1,43,44,26,-1,27,26,44,-1,44,45,27,-1,28,27,45,-1,45,46,28,-1,23,28,46,-1,46,41,23,-1,29,35,23,-1,23,24,29,-1,47,30,29,-1,29,24,47,-1,25,31,39,-1,39,38,25,-1,26,32,31,-1,31,25,26,-1,27,33,32,-1,32,26,27,-1,34,33,27,-1,27,28,34,-1,35,34,28,-1,28,23,35,-1,37,19,12,-1,12,36,37,-1,39,37,18,-1,18,30,39,-1,38,39,30,-1,30,47,38,-1,47,49,40,-1,40,38,47,-1,49,47,48,-1,50,57,56,-1,56,55,54,-1,50,56,54,-1,54,53,52,-1,50,54,52,-1,51,50,52,-1,10,50,51,-1,51,9,10,-1,9,51,52,-1,52,15,9,-1,15,52,53,-1,53,14,15,-1,14,53,54,-1,54,13,14,-1,13,54,55,-1,55,12,13,-1,12,55,56,-1,56,36,12,-1,36,56,57,-1,57,11,36,-1,11,57,50,-1,50,10,11,-1}, 448);
SoIndexedFaceSet88->setCreaseAngle(1.57);
SoIndexedFaceSet88->setTexCoordIndex(new int32_t[]{8,7,6,-1,6,5,4,-1,4,3,2,-1,6,4,2,-1,8,6,2,-1,0,8,2,-1,1,0,2,-1,9,0,1,-1,1,12,9,-1,13,1,2,-1,2,14,13,-1,14,2,3,-1,3,15,14,-1,15,3,4,-1,4,16,15,-1,16,4,5,-1,5,10,16,-1,10,5,6,-1,6,11,10,-1,11,6,7,-1,7,17,11,-1,18,7,8,-1,8,19,18,-1,20,8,0,-1,0,9,20,-1,21,24,23,-1,23,22,21,-1,22,23,26,-1,26,25,22,-1,25,26,28,-1,28,27,25,-1,29,32,31,-1,31,30,29,-1,30,31,34,-1,34,33,30,-1,35,33,34,-1,34,36,35,-1,21,35,36,-1,36,24,21,-1,23,24,38,-1,38,37,23,-1,39,26,23,-1,23,37,39,-1,40,53,28,-1,28,41,40,-1,42,31,32,-1,32,54,42,-1,43,34,31,-1,31,42,43,-1,36,34,43,-1,43,44,36,-1,24,36,44,-1,44,38,24,-1,45,46,58,-1,58,59,45,-1,60,56,45,-1,45,59,60,-1,62,47,48,-1,48,57,62,-1,49,55,63,-1,63,64,49,-1,50,49,64,-1,64,65,50,-1,51,50,65,-1,65,66,51,-1,46,51,66,-1,66,58,46,-1,37,38,46,-1,46,45,37,-1,56,39,37,-1,37,45,56,-1,47,40,41,-1,41,48,47,-1,49,42,54,-1,54,55,49,-1,50,43,42,-1,42,49,50,-1,44,43,50,-1,50,51,44,-1,38,44,51,-1,51,46,38,-1,28,53,52,-1,52,27,28,-1,41,28,26,-1,26,39,41,-1,48,41,39,-1,39,56,48,-1,56,61,57,-1,57,48,56,-1,69,67,68,-1,70,77,76,-1,76,75,74,-1,70,76,74,-1,74,73,72,-1,70,74,72,-1,71,70,72,-1,22,70,71,-1,71,21,22,-1,21,71,72,-1,72,35,21,-1,35,72,73,-1,73,33,35,-1,33,73,74,-1,74,30,33,-1,30,74,75,-1,75,29,30,-1,52,75,76,-1,76,27,52,-1,27,76,77,-1,77,25,27,-1,25,77,70,-1,70,22,25,-1}, 448);
SoCoordinate* SoCoordinate89 = new SoCoordinate();
SoCoordinate89->setPoint(new float[]{2.213,3.415,-1.432,2.563,3.235,-0.044,1.896,3.353,1.304,0.2566,3.071,1.979,-1.061,2.666,1.218,-1.733,2.312,-0.0382,-1.105,2.573,-1.55,0.0841,2.894,-2.232,1.033,3.07,-2.249,-2.024,-14.23,-0.0084,-1.105,-14.23,-1.033,-0.2432,-14.23,-1.628,1.544,-14.23,-0.0084,0.958,-14.2,1.652,-0.2432,-14.22,2.319,-1.502,-14.17,1.712,-1.254,-12.45,-1.41,-1.95,-12.45,-0.0084,-0.2427,-12.44,-2.045,1.567,-12.45,-0.0084,0.9137,-12.46,1.762,-0.2427,-12.45,2.395,-1.378,-12.47,1.687,-2.546,-1.755,-0.0084,-1.61,-1.638,-2.255,2.471,-2.666,-0.0107,1.873,-2.65,2.057,0.0345,-2.462,3.088,-1.694,-2.104,1.976,-1.405,-8.209,-1.802,-0.1104,-8.092,-2.569,1.935,-8.892,-0.0084,1.302,-8.974,1.866,-0.1104,-8.922,2.658,-1.57,-8.734,1.815,-2.256,-8.478,-0.0084,0.7153,-14.23,-1.033,0.9827,-12.45,-1.368,2.238,-2.425,-2.148,1.544,-8.472,-1.802,2.337,-1.248,-2.213,-2.564,-0.1067,-0.0084,-1.757,-0.2099,-2.414,2.598,-1.583,-0.0084,1.971,-1.132,2.138,0.018,-0.5002,3.257,-1.652,-0.15,2.0,0.2311,-1.92,-3.327,-0.3087,-0.559,-3.515,0.8698,-0.924,-3.545,-0.7809,-15.71,-0.9452,-1.397,-15.71,-0.1162,-1.08,-15.71,1.251,-0.2583,-15.71,1.684,0.5384,-15.71,1.201,0.9046,-15.71,-0.1323,0.3675,-15.71,-0.9437,-0.238,-15.71,-1.355}, 174);
SoIndexedFaceSet88->setCoord(*SoCoordinate89);

SoTextureCoordinate* SoTextureCoordinate90 = new SoTextureCoordinate();
SoTextureCoordinate90->setPoint(new float[]{0.9323,0.8796,0.955,0.9007,0.8109,0.8829,0.8324,0.8719,0.8505,0.8713,0.8719,0.8723,0.9023,0.8773,0.9112,0.8772,0.922,0.8742,0.9323,0.8796,0.8719,0.8723,0.9023,0.8773,0.955,0.9007,0.7929,0.9027,0.8109,0.8829,0.8324,0.8719,0.8505,0.8713,0.9112,0.8772,0.9112,0.8772,0.922,0.8742,0.922,0.8742,0.8674,0.6509,0.8839,0.6494,0.8924,0.6779,0.8681,0.6767,0.8939,0.6493,0.9112,0.6761,0.9011,0.64,0.9277,0.6703,0.8255,0.6267,0.8368,0.6434,0.8121,0.6703,0.7869,0.6572,0.842,0.6491,0.8296,0.6745,0.8506,0.6493,0.8488,0.6758,0.9079,0.7498,0.87,0.745,0.9282,0.7486,0.9779,0.7341,0.9504,0.7433,0.7921,0.7337,0.8179,0.734,0.8447,0.7398,0.9056,0.8524,0.8721,0.8479,0.9822,0.8649,0.9552,0.8592,0.794,0.8537,0.82,0.8481,0.8471,0.8465,0.9073,0.6307,0.9433,0.6604,0.7593,0.7337,0.7655,0.8637,0.9289,0.8568,0.9323,0.8796,0.8719,0.8723,0.9023,0.8773,0.9112,0.8772,0.922,0.8742,0.955,0.9007,0.7929,0.9027,0.8109,0.8829,0.8324,0.8719,0.8505,0.8713,0.9289,0.8568,0.9112,0.8772,0.922,0.8742,0.8839,0.6494,0.8674,0.6509,0.8506,0.6493,0.842,0.6491,0.8368,0.6434,0.8255,0.6267,0.9011,0.64,0.8939,0.6493}, 156);
SoIndexedFaceSet88->setTexCoord(*SoTextureCoordinate90);

SoShape84->setGeometry(*SoIndexedFaceSet88);

SoTransform83->addChild(*SoShape84);

SoHAnimSegment82->addChild(*SoTransform83);

SoHAnimJoint81->addChildren(*SoHAnimSegment82);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->X3DNode::setName(QString("r_knee"));
SoHAnimJoint91->setDEF(QString("hanim_r_knee"));
SoHAnimJoint91->setCenter(new float[]{-3.414,17.040001,-0.9556});
SoHAnimJoint91->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint91->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment92 = new SoHAnimSegment();
SoHAnimSegment92->X3DNode::setName(QString("r_calf"));
SoHAnimSegment92->setDEF(QString("hanim_r_calf"));
SoTransform* SoTransform93 = new SoTransform();
SoTransform93->setTranslation(new float[]{-3.414,17.040001,-0.9556});
SoShape* SoShape94 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance95 = new SoVRMLAppearance();
SoMaterial* SoMaterial96 = new SoMaterial();
SoMaterial96->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance95->addChild(*SoMaterial96);

SoImageTexture* SoImageTexture97 = new SoImageTexture();
SoImageTexture97->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance95->addChild(*SoImageTexture97);

SoShape94->addChild(*SoVRMLAppearance95);

SoIndexedFaceSet* SoIndexedFaceSet98 = new SoIndexedFaceSet();
SoIndexedFaceSet98->setCoordIndex(new int32_t[]{32,0,1,-1,1,38,32,-1,33,2,0,-1,0,32,33,-1,34,3,14,-1,14,39,34,-1,35,4,3,-1,3,34,35,-1,5,4,35,-1,35,36,5,-1,6,5,36,-1,36,37,6,-1,1,6,37,-1,37,38,1,-1,24,25,8,-1,8,7,24,-1,26,9,8,-1,8,25,26,-1,15,31,27,-1,27,10,15,-1,11,10,27,-1,27,28,11,-1,12,11,28,-1,28,29,12,-1,13,12,29,-1,29,30,13,-1,24,7,13,-1,13,30,24,-1,9,15,20,-1,20,18,9,-1,31,15,9,-1,9,26,31,-1,8,16,17,-1,17,7,8,-1,9,18,16,-1,16,8,9,-1,19,20,15,-1,15,10,19,-1,21,19,10,-1,10,11,21,-1,22,21,11,-1,11,12,22,-1,23,22,12,-1,12,13,23,-1,7,17,23,-1,23,13,7,-1,33,18,20,-1,20,39,33,-1,16,32,38,-1,38,17,16,-1,18,33,32,-1,32,16,18,-1,19,34,39,-1,39,20,19,-1,35,34,19,-1,19,21,35,-1,36,35,21,-1,21,22,36,-1,37,36,22,-1,22,23,37,-1,38,37,23,-1,23,17,38,-1,2,33,39,-1,39,14,2,-1,0,40,1,-1,1,40,6,-1,6,40,5,-1,5,40,4,-1,4,40,3,-1,3,40,14,-1,14,40,2,-1,2,40,0,-1,24,41,42,-1,42,25,24,-1,25,42,43,-1,43,26,25,-1,26,43,44,-1,44,31,26,-1,31,44,45,-1,45,27,31,-1,27,45,46,-1,46,28,27,-1,28,46,47,-1,47,29,28,-1,29,47,48,-1,48,30,29,-1,30,48,41,-1,41,24,30,-1,41,48,47,-1,47,46,45,-1,41,47,45,-1,45,44,43,-1,41,45,43,-1,42,41,43,-1}, 376);
SoIndexedFaceSet98->setCreaseAngle(1.57);
SoIndexedFaceSet98->setTexCoordIndex(new int32_t[]{1,0,3,-1,3,2,1,-1,5,4,0,-1,0,1,5,-1,7,6,9,-1,9,8,7,-1,11,10,6,-1,6,7,11,-1,12,10,11,-1,11,13,12,-1,14,12,13,-1,13,15,14,-1,3,14,15,-1,15,2,3,-1,18,17,16,-1,16,19,18,-1,21,20,16,-1,16,17,21,-1,24,23,22,-1,22,25,24,-1,26,25,22,-1,22,27,26,-1,28,26,27,-1,27,29,28,-1,30,28,29,-1,29,31,30,-1,18,19,30,-1,30,31,18,-1,20,44,33,-1,33,32,20,-1,43,44,20,-1,20,21,43,-1,16,34,35,-1,35,19,16,-1,20,32,34,-1,34,16,20,-1,36,45,24,-1,24,25,36,-1,37,36,25,-1,25,26,37,-1,38,37,26,-1,26,28,38,-1,39,38,28,-1,28,30,39,-1,19,35,39,-1,39,30,19,-1,5,32,33,-1,33,41,5,-1,34,1,2,-1,2,35,34,-1,32,5,1,-1,1,34,32,-1,36,7,8,-1,8,45,36,-1,11,7,36,-1,36,37,11,-1,13,11,37,-1,37,38,13,-1,15,13,38,-1,38,39,15,-1,2,15,39,-1,39,35,2,-1,4,5,41,-1,41,42,4,-1,0,40,3,-1,3,40,14,-1,14,40,12,-1,12,40,10,-1,10,40,6,-1,6,40,9,-1,42,40,4,-1,4,40,0,-1,18,46,47,-1,47,17,18,-1,17,47,48,-1,48,21,17,-1,21,48,49,-1,49,43,21,-1,23,49,50,-1,50,22,23,-1,22,50,51,-1,51,27,22,-1,27,51,52,-1,52,29,27,-1,29,52,53,-1,53,31,29,-1,31,53,46,-1,46,18,31,-1,46,53,52,-1,52,51,50,-1,46,52,50,-1,50,49,48,-1,46,50,48,-1,47,46,48,-1}, 376);
SoCoordinate* SoCoordinate99 = new SoCoordinate();
SoCoordinate99->setPoint(new float[]{-0.6772,-12.59,-0.8455,-1.122,-12.59,-0.0018,-0.009,-12.59,-1.096,1.026,-12.59,-0.0018,0.604,-12.59,0.842,-0.009,-12.59,1.196,-0.6772,-12.59,0.842,-1.697,-1.448,-0.0018,-0.9307,-1.443,-1.147,-0.009,-1.44,-1.835,1.619,-1.448,-0.0018,0.9447,-1.496,1.521,-0.009,-1.513,2.101,-1.063,-1.454,1.487,0.604,-12.59,-0.8455,1.035,-1.443,-1.165,-1.046,-5.151,-1.186,-1.665,-5.556,-0.0018,-0.009,-4.957,-1.943,1.472,-5.761,-0.0018,0.9836,-5.363,-1.213,0.8429,-5.942,1.259,-0.009,-5.944,1.81,-0.9757,-5.877,1.262,-1.791,-0.0118,-0.0018,-0.8718,-0.0118,-1.026,-0.0095,-0.0118,-1.651,1.777,-0.0118,-0.0018,1.192,0.0146,1.658,-0.0095,-0.0006,2.325,-1.268,0.0444,1.718,0.949,-0.0118,-1.026,-0.785,-11.37,-0.968,-0.009,-11.36,-1.383,1.164,-11.41,-0.0018,0.7001,-11.44,0.9904,-0.009,-11.41,1.452,-0.7602,-11.41,0.9913,-1.305,-11.37,-0.0018,0.6593,-11.43,-1.065,-0.009,-12.78,-0.0018,-1.28,1.466,0.0746,-0.6343,1.466,-0.6311,0.0009,1.466,-1.039,0.7076,1.466,-0.6307,1.279,1.466,0.0701,0.8935,1.466,1.209,-0.0062,1.466,1.652,-0.9447,1.466,1.251}, 147);
SoIndexedFaceSet98->setCoord(*SoCoordinate99);

SoTextureCoordinate* SoTextureCoordinate100 = new SoTextureCoordinate();
SoTextureCoordinate100->setPoint(new float[]{0.8803,0.4005,0.8916,0.4184,0.8769,0.4226,0.8712,0.4055,0.8899,0.393,0.9065,0.4125,0.8327,0.3995,0.8182,0.4195,0.8033,0.4115,0.8255,0.3877,0.8438,0.4073,0.8361,0.4244,0.8487,0.4091,0.8471,0.4254,0.86,0.4061,0.8623,0.4237,0.9101,0.5733,0.9014,0.599,0.8859,0.5939,0.8913,0.5715,0.926,0.5758,0.9115,0.6008,0.8402,0.6091,0.8351,0.6188,0.8038,0.5929,0.8218,0.5846,0.8433,0.5761,0.8552,0.5988,0.8584,0.5722,0.8625,0.5922,0.8734,0.5718,0.8704,0.5929,0.9249,0.4799,0.9417,0.4724,0.9059,0.487,0.8846,0.4921,0.8055,0.4821,0.8287,0.4832,0.8463,0.4871,0.8654,0.4897,0.8588,0.3881,0.915,0.4056,0.891,0.3868,0.9186,0.615,0.9429,0.5818,0.7863,0.4837,0.8859,0.5939,0.9014,0.599,0.9115,0.6008,0.9186,0.615,0.8402,0.6091,0.8552,0.5988,0.8625,0.5922,0.8704,0.5929}, 108);
SoIndexedFaceSet98->setTexCoord(*SoTextureCoordinate100);

SoShape94->setGeometry(*SoIndexedFaceSet98);

SoTransform93->addChild(*SoShape94);

SoHAnimSegment92->addChild(*SoTransform93);

SoHAnimJoint91->addChildren(*SoHAnimSegment92);

SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint101->setDEF(QString("hanim_r_talocrural"));
SoHAnimJoint101->setCenter(new float[]{-3.631,4.504,-0.7461});
SoHAnimJoint101->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint101->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment102 = new SoHAnimSegment();
SoHAnimSegment102->X3DNode::setName(QString("r_talus"));
SoHAnimSegment102->setDEF(QString("hanim_r_talus"));
SoTransform* SoTransform103 = new SoTransform();
SoTransform103->setTranslation(new float[]{-3.631,4.504,-0.7461});
SoShape* SoShape104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance105 = new SoVRMLAppearance();
SoMaterial* SoMaterial106 = new SoMaterial();
SoMaterial106->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance105->addChild(*SoMaterial106);

SoImageTexture* SoImageTexture107 = new SoImageTexture();
SoImageTexture107->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance105->addChild(*SoImageTexture107);

SoShape104->addChild(*SoVRMLAppearance105);

SoIndexedFaceSet* SoIndexedFaceSet108 = new SoIndexedFaceSet();
SoIndexedFaceSet108->setCoordIndex(new int32_t[]{0,25,19,-1,19,1,0,-1,2,1,19,-1,19,20,2,-1,3,2,20,-1,20,21,3,-1,4,3,21,-1,21,22,4,-1,0,24,25,-1,26,3,4,-1,4,28,26,-1,29,2,3,-1,3,26,29,-1,30,1,2,-1,2,29,30,-1,27,0,1,-1,1,30,27,-1,16,26,28,-1,28,15,16,-1,17,29,26,-1,26,16,17,-1,18,30,29,-1,29,17,18,-1,14,27,30,-1,30,18,14,-1,19,25,6,-1,6,7,19,-1,20,19,7,-1,7,8,20,-1,21,20,8,-1,8,9,21,-1,22,21,9,-1,9,10,22,-1,11,23,22,-1,22,10,11,-1,5,23,11,-1,11,12,5,-1,13,24,5,-1,5,12,13,-1,6,25,24,-1,24,13,6,-1,6,31,7,-1,7,31,8,-1,8,31,9,-1,9,31,10,-1,10,31,11,-1,11,31,12,-1,12,31,13,-1,13,31,6,-1,16,15,32,-1,32,33,16,-1,17,16,33,-1,33,18,17,-1,18,33,32,-1,32,14,18,-1,23,4,22,-1,35,34,43,-1,43,42,41,-1,41,40,39,-1,39,38,37,-1,41,39,37,-1,43,41,37,-1,35,43,37,-1,35,37,36,-1,5,34,35,-1,35,23,5,-1,23,35,36,-1,36,4,23,-1,4,36,37,-1,37,28,4,-1,28,37,38,-1,38,15,28,-1,15,38,39,-1,39,32,15,-1,32,39,40,-1,40,14,32,-1,14,40,41,-1,41,27,14,-1,27,41,42,-1,42,0,27,-1,0,42,43,-1,43,24,0,-1,24,43,34,-1,34,5,24,-1}, 336);
SoIndexedFaceSet108->setCreaseAngle(1.57);
SoIndexedFaceSet108->setTexCoordIndex(new int32_t[]{0,5,2,-1,2,1,0,-1,3,1,2,-1,2,4,3,-1,1,3,4,-1,4,2,1,-1,0,1,2,-1,2,5,0,-1,0,13,5,-1,19,1,0,-1,0,10,19,-1,23,3,1,-1,1,19,23,-1,19,1,3,-1,3,23,19,-1,10,0,1,-1,1,19,10,-1,30,19,10,-1,10,28,30,-1,31,23,19,-1,19,30,31,-1,29,25,26,-1,26,32,29,-1,27,24,25,-1,25,29,27,-1,2,5,41,-1,41,39,2,-1,4,2,39,-1,39,40,4,-1,2,4,40,-1,40,39,2,-1,5,2,39,-1,39,41,5,-1,42,13,5,-1,5,41,42,-1,14,13,42,-1,42,44,14,-1,42,13,14,-1,14,44,42,-1,41,5,13,-1,13,42,41,-1,41,43,39,-1,39,43,40,-1,40,43,39,-1,39,43,41,-1,41,43,42,-1,42,43,44,-1,44,43,42,-1,42,43,41,-1,34,8,22,-1,22,35,34,-1,36,34,35,-1,35,37,36,-1,37,35,22,-1,22,33,37,-1,13,0,5,-1,16,15,16,-1,16,17,18,-1,18,21,20,-1,20,49,18,-1,18,20,18,-1,16,18,18,-1,16,16,18,-1,16,18,17,-1,14,45,46,-1,46,13,14,-1,13,46,47,-1,47,0,13,-1,0,47,48,-1,48,10,0,-1,11,18,49,-1,49,12,11,-1,6,49,20,-1,20,7,6,-1,9,50,51,-1,51,38,9,-1,12,21,18,-1,18,11,12,-1,10,48,47,-1,47,0,10,-1,0,47,46,-1,46,13,0,-1,13,46,45,-1,45,14,13,-1}, 336);
SoCoordinate* SoCoordinate109 = new SoCoordinate();
SoCoordinate109->setPoint(new float[]{-1.841,-1.908,-0.0161,-1.307,-2.033,-1.161,0.1196,-2.03,-1.925,1.25,-2.033,-1.167,1.775,-2.041,0.1968,0.0463,-0.6579,1.458,-1.122,0.1952,-0.0374,-0.6712,0.1856,-1.088,0.1196,0.1211,-1.349,0.9596,0.0475,-1.118,1.364,0.0184,-0.0431,0.9545,0.0396,0.5647,0.1196,0.1094,1.036,-0.6764,0.1777,0.5682,-1.715,-4.504,-0.0426,1.643,-4.504,-0.0426,1.156,-4.504,-1.154,0.1196,-4.504,-1.87,-1.219,-4.504,-1.154,-0.9699,-0.7703,-1.144,0.1196,-0.8069,-1.731,1.156,-0.9176,-1.144,1.623,-0.8933,0.1659,1.424,-0.8548,1.044,-1.272,-0.715,0.8194,-1.461,-0.7428,-0.042,1.451,-3.493,-1.19,-2.132,-3.609,-0.0745,2.061,-3.611,-0.0842,0.1196,-3.44,-1.941,-1.513,-3.488,-1.19,0.1196,0.4595,-0.0414,0.1196,-4.504,-0.0426,0.1196,-4.504,-1.154,0.0144,-1.393,1.513,1.198,-1.547,1.103,1.512,-2.253,0.7636,1.783,-3.743,0.5048,1.465,-4.436,0.6071,0.0938,-4.438,0.6133,-1.591,-4.439,0.6193,-1.906,-3.741,0.5362,-1.633,-2.143,0.5649,-1.127,-1.423,0.8897}, 132);
SoIndexedFaceSet108->setCoord(*SoCoordinate109);

SoTextureCoordinate* SoTextureCoordinate110 = new SoTextureCoordinate();
SoTextureCoordinate110->setPoint(new float[]{0.3073,0.3733,0.2855,0.3775,0.2892,0.3946,0.2565,0.3837,0.2667,0.4044,0.3127,0.3911,0.2725,0.2624,0.2707,0.2591,0.2565,0.2656,0.2782,0.255,0.3066,0.3545,0.2798,0.2632,0.2784,0.2616,0.3352,0.3928,0.3553,0.4119,0.2871,0.2631,0.2845,0.2634,0.2813,0.2643,0.2798,0.2632,0.2827,0.3624,0.2707,0.2591,0.267,0.2579,0.2601,0.2561,0.2519,0.3634,0.2675,0.2819,0.2613,0.2839,0.2533,0.2842,0.2683,0.2762,0.3096,0.3328,0.2602,0.2773,0.2784,0.337,0.2504,0.3407,0.2529,0.2783,0.2564,0.2466,0.2476,0.2629,0.2512,0.2562,0.2421,0.2563,0.2475,0.2495,0.2637,0.2183,0.2954,0.41,0.2848,0.42,0.3102,0.406,0.3249,0.4108,0.3094,0.4281,0.3357,0.4239,0.3553,0.4119,0.3352,0.3928,0.3073,0.3733,0.3066,0.3545,0.2784,0.2616,0.2782,0.255,0.2637,0.2183}, 104);
SoIndexedFaceSet108->setTexCoord(*SoTextureCoordinate110);

SoShape104->setGeometry(*SoIndexedFaceSet108);

SoTransform103->addChild(*SoShape104);

SoHAnimSegment102->addChild(*SoTransform103);

SoHAnimJoint101->addChildren(*SoHAnimSegment102);

SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint111->setDEF(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimJoint111->setCenter(new float[]{-3.631,3.792,0.05479});
SoHAnimJoint111->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint111->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment112 = new SoHAnimSegment();
SoHAnimSegment112->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment112->setDEF(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform113 = new SoTransform();
SoTransform113->setTranslation(new float[]{-3.631,3.792,0.05479});
SoShape* SoShape114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance115 = new SoVRMLAppearance();
SoMaterial* SoMaterial116 = new SoMaterial();
SoMaterial116->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance115->addChild(*SoMaterial116);

SoImageTexture* SoImageTexture117 = new SoImageTexture();
SoImageTexture117->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance115->addChild(*SoImageTexture117);

SoShape114->addChild(*SoVRMLAppearance115);

SoIndexedFaceSet* SoIndexedFaceSet118 = new SoIndexedFaceSet();
SoIndexedFaceSet118->setCoordIndex(new int32_t[]{34,38,0,-1,0,38,35,-1,35,6,0,-1,35,39,1,-1,1,6,35,-1,3,42,37,-1,37,4,3,-1,23,1,33,-1,33,40,23,-1,24,18,17,-1,17,30,24,-1,31,19,18,-1,18,24,31,-1,41,34,0,-1,0,25,41,-1,2,23,40,-1,40,36,2,-1,21,24,30,-1,30,20,21,-1,22,31,24,-1,24,21,22,-1,37,41,25,-1,25,4,37,-1,8,2,3,-1,3,9,8,-1,9,3,4,-1,4,10,9,-1,5,1,23,-1,23,26,5,-1,27,25,0,-1,0,7,27,-1,26,23,2,-1,2,8,26,-1,10,4,25,-1,25,27,10,-1,11,5,26,-1,26,28,11,-1,29,27,7,-1,7,13,29,-1,14,8,9,-1,9,15,14,-1,28,26,8,-1,8,14,28,-1,16,10,27,-1,27,29,16,-1,15,9,10,-1,10,16,15,-1,18,12,11,-1,11,17,18,-1,17,11,28,-1,28,30,17,-1,19,13,12,-1,12,18,19,-1,31,29,13,-1,13,19,31,-1,20,14,15,-1,15,21,20,-1,30,28,14,-1,14,20,30,-1,22,16,29,-1,29,31,22,-1,21,15,16,-1,16,22,21,-1,36,42,3,-1,3,2,36,-1,7,0,6,-1,6,32,7,-1,6,1,5,-1,5,32,6,-1,13,7,32,-1,32,12,13,-1,5,11,12,-1,12,32,5,-1,39,33,1,-1,44,43,52,-1,44,52,51,-1,51,50,49,-1,51,49,48,-1,44,51,48,-1,48,47,46,-1,44,48,46,-1,44,46,45,-1,38,43,44,-1,44,35,38,-1,35,44,45,-1,45,39,35,-1,39,45,46,-1,46,33,39,-1,33,46,47,-1,47,40,33,-1,40,47,48,-1,48,36,40,-1,36,48,49,-1,49,42,36,-1,42,49,50,-1,50,37,42,-1,37,50,51,-1,51,41,37,-1,41,51,52,-1,52,34,41,-1,34,52,43,-1,43,38,34,-1}, 408);
SoIndexedFaceSet118->setCreaseAngle(1.57);
SoIndexedFaceSet118->setTexCoordIndex(new int32_t[]{30,35,3,-1,3,35,31,-1,31,22,3,-1,31,35,3,-1,3,22,31,-1,0,37,34,-1,34,1,0,-1,7,3,30,-1,30,36,7,-1,6,2,4,-1,4,5,6,-1,5,4,2,-1,2,6,5,-1,36,30,3,-1,3,7,36,-1,53,49,61,-1,61,59,53,-1,52,48,47,-1,47,51,52,-1,11,68,69,-1,69,12,11,-1,33,73,70,-1,70,15,33,-1,9,50,45,-1,45,10,9,-1,10,45,46,-1,46,13,10,-1,16,3,7,-1,7,23,16,-1,23,7,3,-1,3,16,23,-1,54,49,53,-1,53,55,54,-1,24,15,70,-1,70,71,24,-1,25,16,23,-1,23,27,25,-1,27,23,16,-1,16,25,27,-1,14,9,10,-1,10,17,14,-1,56,54,55,-1,55,57,56,-1,28,24,71,-1,71,72,28,-1,17,10,13,-1,13,18,17,-1,2,26,25,-1,25,4,2,-1,4,25,27,-1,27,5,4,-1,4,25,26,-1,26,2,4,-1,5,27,25,-1,25,4,5,-1,19,14,17,-1,17,20,19,-1,47,56,57,-1,57,51,47,-1,11,28,72,-1,72,68,11,-1,20,17,18,-1,18,21,20,-1,32,37,0,-1,0,8,32,-1,16,3,22,-1,22,29,16,-1,22,3,16,-1,16,29,22,-1,25,16,29,-1,29,26,25,-1,16,25,26,-1,26,29,16,-1,35,30,3,-1,64,63,65,-1,64,65,66,-1,66,67,43,-1,66,43,42,-1,64,66,42,-1,42,66,65,-1,64,42,65,-1,64,65,63,-1,35,38,39,-1,39,31,35,-1,31,39,38,-1,38,35,31,-1,35,38,40,-1,40,30,35,-1,30,40,41,-1,41,36,30,-1,61,66,42,-1,42,59,61,-1,58,42,43,-1,43,62,58,-1,62,43,67,-1,67,60,62,-1,33,44,74,-1,74,73,33,-1,36,41,40,-1,40,30,36,-1,30,40,38,-1,38,35,30,-1}, 408);
SoCoordinate* SoCoordinate119 = new SoCoordinate();
SoCoordinate119->setPoint(new float[]{1.58,-1.105,0.8483,-1.609,-0.9849,0.6977,-1.609,-3.792,0.6078,0.1196,-3.792,0.6078,1.533,-3.792,0.6078,-1.932,-1.571,1.892,0.1196,-0.64,1.328,1.887,-1.737,2.083,-2.161,-3.792,1.854,0.1196,-3.792,1.854,2.067,-3.792,1.854,-2.012,-2.105,3.145,0.1196,-1.78,3.449,1.942,-2.104,3.135,-2.197,-3.792,3.105,0.1196,-3.792,3.105,2.147,-3.792,3.105,-1.672,-2.757,4.374,0.2477,-2.432,4.639,1.759,-2.686,4.292,-1.777,-3.792,4.488,0.4437,-3.792,5.029,1.884,-3.792,4.512,-1.869,-3.111,0.5785,0.4437,-3.205,5.149,1.921,-3.111,0.5785,-2.407,-3.288,1.854,2.363,-3.288,1.854,-2.337,-3.288,3.105,2.407,-3.288,3.105,-1.848,-3.288,4.652,1.98,-3.288,4.534,0.1196,-1.258,2.396,-1.841,-1.196,-0.8169,1.775,-1.329,-0.604,0.0463,0.0542,0.6575,-1.715,-3.792,-0.8435,1.643,-3.792,-0.8435,1.424,-0.1427,0.2436,-1.272,-0.0029,0.0185,-2.132,-2.896,-0.8753,2.061,-2.899,-0.885,0.1196,-3.792,-0.8435,1.29,-0.0564,-0.712,0.0804,0.1027,-0.3015,-1.085,0.069,-0.9272,-1.599,-1.001,-1.725,-1.874,-2.613,-1.758,-1.546,-3.337,-1.682,0.1591,-3.336,-1.687,1.551,-3.334,-1.692,1.881,-2.614,-1.787,1.609,-1.114,-1.525}, 159);
SoIndexedFaceSet118->setCoord(*SoCoordinate119);

SoTextureCoordinate* SoTextureCoordinate120 = new SoTextureCoordinate();
SoTextureCoordinate120->setPoint(new float[]{0.3109,0.2547,0.3018,0.2892,0.416,0.3757,0.3443,0.3733,0.4055,0.3535,0.4123,0.3444,0.4347,0.3611,0.3436,0.3472,0.2943,0.2204,0.3263,0.2346,0.3263,0.237,0.3478,0.2609,0.3553,0.2657,0.3264,0.2395,0.3278,0.2342,0.3283,0.26,0.3686,0.3612,0.328,0.2376,0.328,0.2398,0.3292,0.2346,0.3299,0.2374,0.3292,0.2394,0.3735,0.3991,0.3684,0.3388,0.3352,0.2593,0.3882,0.3563,0.397,0.3872,0.3885,0.336,0.3423,0.2596,0.3817,0.395,0.3073,0.3733,0.3553,0.4119,0.2637,0.2183,0.3196,0.2607,0.264,0.2919,0.3352,0.3928,0.3066,0.3545,0.2782,0.255,0.3352,0.3928,0.3553,0.4119,0.3073,0.3733,0.3066,0.3545,0.3251,0.2416,0.3233,0.2371,0.3071,0.2495,0.3252,0.237,0.3246,0.239,0.331,0.2422,0.3323,0.2432,0.327,0.2424,0.3242,0.2351,0.331,0.2416,0.3326,0.2426,0.3269,0.2414,0.3285,0.2419,0.3284,0.2413,0.3296,0.2417,0.3299,0.2413,0.3224,0.2349,0.3251,0.2416,0.3225,0.2392,0.3249,0.2428,0.3233,0.2371,0.3266,0.245,0.3277,0.2461,0.325,0.2439,0.3249,0.2428,0.3225,0.2392,0.3478,0.2639,0.3539,0.2685,0.3289,0.2647,0.3357,0.2624,0.3412,0.2616,0.3188,0.2667,0.3188,0.2667}, 150);
SoIndexedFaceSet118->setTexCoord(*SoTextureCoordinate120);

SoShape114->setGeometry(*SoIndexedFaceSet118);

SoTransform113->addChild(*SoShape114);

SoHAnimSegment112->addChild(*SoTransform113);

SoHAnimJoint111->addChildren(*SoHAnimSegment112);

SoHAnimJoint101->addChildren(*SoHAnimJoint111);

SoHAnimJoint91->addChildren(*SoHAnimJoint101);

SoHAnimJoint81->addChildren(*SoHAnimJoint91);

SoHAnimJoint31->addChildren(*SoHAnimJoint81);

SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint121->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint121->setCenter(new float[]{0.0,29.620001,-1.431});
SoHAnimJoint121->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint121->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment122 = new SoHAnimSegment();
SoHAnimSegment122->X3DNode::setName(QString("pelvis"));
SoHAnimSegment122->setDEF(QString("hanim_pelvis"));
SoTransform* SoTransform123 = new SoTransform();
SoTransform123->setTranslation(new float[]{0.0,29.620001,-1.431});
SoShape* SoShape124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoMaterial* SoMaterial126 = new SoMaterial();
SoMaterial126->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance125->addChild(*SoMaterial126);

SoImageTexture* SoImageTexture127 = new SoImageTexture();
SoImageTexture127->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance125->addChild(*SoImageTexture127);

SoShape124->addChild(*SoVRMLAppearance125);

SoIndexedFaceSet* SoIndexedFaceSet128 = new SoIndexedFaceSet();
SoIndexedFaceSet128->setCoordIndex(new int32_t[]{12,0,6,-1,6,7,12,-1,11,23,45,-1,45,9,11,-1,21,4,2,-1,2,20,21,-1,13,5,3,-1,3,11,13,-1,17,18,6,-1,6,0,17,-1,14,7,6,-1,6,1,14,-1,15,35,24,-1,24,2,15,-1,19,60,37,-1,37,3,19,-1,12,8,4,-1,4,0,12,-1,16,22,5,-1,5,1,16,-1,13,11,9,-1,17,0,4,-1,4,21,17,-1,14,1,5,-1,5,13,14,-1,8,15,2,-1,2,4,8,-1,22,19,3,-1,3,5,22,-1,18,16,1,-1,1,6,18,-1,31,38,66,-1,66,26,31,-1,25,15,30,-1,28,12,7,-1,7,27,28,-1,29,8,12,-1,12,28,29,-1,15,8,29,-1,29,30,15,-1,32,9,31,-1,33,13,9,-1,9,32,33,-1,34,14,13,-1,13,33,34,-1,27,7,14,-1,14,34,27,-1,35,15,25,-1,25,39,35,-1,10,20,2,-1,2,24,10,-1,11,3,37,-1,37,23,11,-1,38,31,9,-1,9,45,38,-1,26,66,39,-1,39,25,26,-1,30,26,25,-1,18,17,36,-1,17,21,36,-1,21,20,36,-1,20,10,36,-1,60,19,36,-1,19,22,36,-1,22,16,36,-1,16,18,36,-1,30,29,28,-1,28,27,34,-1,34,33,32,-1,28,34,32,-1,30,28,32,-1,30,32,31,-1,26,30,31,-1,40,43,42,-1,42,41,40,-1,44,46,45,-1,45,23,44,-1,48,47,50,-1,50,49,48,-1,51,44,53,-1,53,52,51,-1,54,41,42,-1,42,55,54,-1,57,56,42,-1,42,43,57,-1,58,50,24,-1,24,35,58,-1,59,53,37,-1,37,60,59,-1,40,41,49,-1,49,61,40,-1,62,56,52,-1,52,63,62,-1,51,46,44,-1,54,48,49,-1,49,41,54,-1,57,51,52,-1,52,56,57,-1,61,49,50,-1,50,58,61,-1,63,52,53,-1,53,59,63,-1,55,42,56,-1,56,62,55,-1,65,64,66,-1,66,38,65,-1,67,68,58,-1,69,70,43,-1,43,40,69,-1,71,69,40,-1,40,61,71,-1,58,68,71,-1,71,61,58,-1,72,65,46,-1,73,72,46,-1,46,51,73,-1,74,73,51,-1,51,57,74,-1,70,74,57,-1,57,43,70,-1,35,39,67,-1,67,58,35,-1,10,24,50,-1,50,47,10,-1,44,23,37,-1,37,53,44,-1,38,45,46,-1,46,65,38,-1,64,67,39,-1,39,66,64,-1,68,67,64,-1,55,36,54,-1,54,36,48,-1,48,36,47,-1,47,36,10,-1,60,36,59,-1,59,36,63,-1,63,36,62,-1,62,36,55,-1,72,73,74,-1,74,70,69,-1,72,74,69,-1,69,71,68,-1,72,69,68,-1,65,72,68,-1,64,65,68,-1}, 584);
SoIndexedFaceSet128->setCreaseAngle(1.57);
SoIndexedFaceSet128->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,4,5,6,-1,6,7,4,-1,9,10,11,-1,11,8,9,-1,12,13,14,-1,14,4,12,-1,15,16,2,-1,2,1,15,-1,18,3,2,-1,2,17,18,-1,19,20,21,-1,21,11,19,-1,22,23,24,-1,24,14,22,-1,0,25,10,-1,10,1,0,-1,26,27,13,-1,13,17,26,-1,12,4,7,-1,15,1,10,-1,10,9,15,-1,18,17,13,-1,13,12,18,-1,25,19,11,-1,11,10,25,-1,27,22,14,-1,14,13,27,-1,16,26,17,-1,17,2,16,-1,29,38,30,-1,30,28,29,-1,40,19,31,-1,32,0,3,-1,3,33,32,-1,34,25,0,-1,0,32,34,-1,19,25,34,-1,34,31,19,-1,35,7,29,-1,36,12,7,-1,7,35,36,-1,37,18,12,-1,12,36,37,-1,33,3,18,-1,18,37,33,-1,20,19,40,-1,40,41,20,-1,39,8,11,-1,11,21,39,-1,4,14,24,-1,24,5,4,-1,38,29,7,-1,7,6,38,-1,28,30,41,-1,41,40,28,-1,31,28,40,-1,16,15,42,-1,15,9,42,-1,9,8,42,-1,8,39,42,-1,23,22,42,-1,22,27,42,-1,27,26,42,-1,26,16,42,-1,31,34,32,-1,32,33,37,-1,37,36,35,-1,32,37,35,-1,31,32,35,-1,31,35,29,-1,28,31,29,-1,43,46,45,-1,45,44,43,-1,47,50,49,-1,49,48,47,-1,52,51,54,-1,54,53,52,-1,55,47,57,-1,57,56,55,-1,58,44,45,-1,45,59,58,-1,61,60,45,-1,45,46,61,-1,62,54,64,-1,64,63,62,-1,65,57,67,-1,67,66,65,-1,43,44,53,-1,53,68,43,-1,69,60,56,-1,56,70,69,-1,55,50,47,-1,58,52,53,-1,53,44,58,-1,61,55,56,-1,56,60,61,-1,68,53,54,-1,54,62,68,-1,70,56,57,-1,57,65,70,-1,59,45,60,-1,60,69,59,-1,72,71,74,-1,74,73,72,-1,75,76,62,-1,77,78,46,-1,46,43,77,-1,79,77,43,-1,43,68,79,-1,62,76,79,-1,79,68,62,-1,80,72,50,-1,81,80,50,-1,50,55,81,-1,82,81,55,-1,55,61,82,-1,78,82,61,-1,61,46,78,-1,63,83,75,-1,75,62,63,-1,84,64,54,-1,54,51,84,-1,47,48,67,-1,67,57,47,-1,73,49,50,-1,50,72,73,-1,71,75,83,-1,83,74,71,-1,76,75,71,-1,59,85,58,-1,58,85,52,-1,52,85,51,-1,51,85,84,-1,66,85,65,-1,65,85,70,-1,70,85,69,-1,69,85,59,-1,80,81,82,-1,82,78,77,-1,80,82,77,-1,77,79,76,-1,80,77,76,-1,72,80,76,-1,71,72,76,-1}, 584);
SoCoordinate* SoCoordinate129 = new SoCoordinate();
SoCoordinate129->setPoint(new float[]{4.708,5.247,-2.04,4.436,5.275,2.684,1.045,4.38,-4.101,1.455,4.932,4.263,3.369,4.858,-3.647,3.109,5.122,4.071,5.453,5.388,0.4763,5.679,3.668,0.4763,3.592,2.884,-3.721,1.228,0.9806,2.753,0.0,6.939,-3.34,1.462,2.823,4.176,4.995,3.357,-2.197,3.097,3.005,4.091,4.778,3.365,2.651,1.397,2.537,-4.004,4.094,6.939,2.37,4.468,6.939,-1.743,5.018,6.939,0.4763,1.182,6.939,3.906,0.7664,6.939,-3.517,3.013,6.939,-3.122,2.824,6.939,3.682,0.0,2.646,4.237,0.0,4.189,-3.936,0.9075,0.8489,-3.091,0.8381,0.3792,-1.731,5.739,1.52,0.4735,4.932,1.417,-1.932,3.484,1.068,-3.033,2.305,0.7032,-3.064,0.5771,0.0447,0.3717,1.204,0.4952,2.62,3.157,1.127,3.739,4.827,1.477,2.482,0.0,2.581,-3.824,0.0,7.505,0.4787,0.0,4.844,4.344,0.0,-0.0417,0.3717,0.0,0.8576,-3.137,-4.995,3.357,-2.197,-4.708,5.247,-2.04,-5.453,5.388,0.4763,-5.679,3.668,0.4763,-1.462,2.823,4.176,0.0,0.8319,2.875,-1.228,0.9806,2.753,-0.7664,6.939,-3.517,-3.013,6.939,-3.122,-3.369,4.858,-3.647,-1.045,4.38,-4.101,-3.097,3.005,4.091,-3.109,5.122,4.071,-1.455,4.932,4.263,-4.468,6.939,-1.743,-5.018,6.939,0.4763,-4.436,5.275,2.684,-4.778,3.365,2.651,-1.397,2.537,-4.004,-1.182,6.939,3.906,0.0,6.939,4.008,-3.592,2.884,-3.721,-4.094,6.939,2.37,-2.824,6.939,3.682,-0.8381,0.3792,-1.731,-0.5771,0.0447,0.3717,0.0,0.3221,-1.688,-0.9075,0.8489,-3.091,-2.305,0.7032,-3.064,-4.932,1.417,-1.932,-5.739,1.52,0.4735,-3.484,1.068,-3.033,-1.204,0.4952,2.62,-3.157,1.127,3.739,-4.827,1.477,2.482}, 225);
SoIndexedFaceSet128->setCoord(*SoCoordinate129);

SoTextureCoordinate* SoTextureCoordinate130 = new SoTextureCoordinate();
SoTextureCoordinate130->setPoint(new float[]{0.5751,0.2385,0.5817,0.2593,0.5297,0.2685,0.5302,0.2531,0.4675,0.1943,0.4561,0.1765,0.493,0.1526,0.5029,0.1659,0.6476,0.2378,0.6188,0.2624,0.6071,0.2407,0.6314,0.2148,0.4776,0.2139,0.4649,0.2379,0.4466,0.218,0.582,0.2803,0.5317,0.2843,0.4884,0.2554,0.4952,0.2386,0.6092,0.1981,0.6214,0.1786,0.6425,0.2044,0.4311,0.2355,0.4187,0.2238,0.4328,0.2038,0.5916,0.2227,0.4821,0.2718,0.4517,0.2538,0.5711,0.169,0.54,0.1541,0.57,0.1459,0.584,0.185,0.567,0.2188,0.5323,0.2285,0.5788,0.2054,0.5111,0.167,0.4948,0.1964,0.5061,0.2192,0.5359,0.144,0.6567,0.2307,0.5901,0.1835,0.5957,0.1623,0.5353,0.2566,0.5751,0.2385,0.5817,0.2593,0.5297,0.2685,0.5302,0.2531,0.4675,0.1943,0.4561,0.1765,0.493,0.1526,0.5029,0.1659,0.6476,0.2378,0.6188,0.2624,0.6071,0.2407,0.6314,0.2148,0.4776,0.2139,0.4649,0.2379,0.4466,0.218,0.582,0.2803,0.5317,0.2843,0.4884,0.2554,0.4952,0.2386,0.6092,0.1981,0.6214,0.1786,0.6425,0.2044,0.4311,0.2355,0.4187,0.2238,0.4328,0.2038,0.5916,0.2227,0.4821,0.2718,0.4517,0.2538,0.5711,0.169,0.54,0.1541,0.5359,0.144,0.57,0.1459,0.5901,0.1835,0.584,0.185,0.567,0.2188,0.5323,0.2285,0.5788,0.2054,0.5111,0.167,0.4948,0.1964,0.5061,0.2192,0.5957,0.1623,0.6567,0.2307,0.5353,0.2566}, 172);
SoIndexedFaceSet128->setTexCoord(*SoTextureCoordinate130);

SoShape124->setGeometry(*SoIndexedFaceSet128);

SoTransform123->addChild(*SoShape124);

SoHAnimSegment122->addChild(*SoTransform123);

SoHAnimJoint121->addChildren(*SoHAnimSegment122);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint131->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint131->setCenter(new float[]{6.32,49.709999,-1.215});
SoHAnimJoint131->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint131->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment132 = new SoHAnimSegment();
SoHAnimSegment132->X3DNode::setName(QString("l_upperarm"));
SoHAnimSegment132->setDEF(QString("hanim_l_upperarm"));
SoTransform* SoTransform133 = new SoTransform();
SoTransform133->setTranslation(new float[]{6.32,49.709999,-1.215});
SoShape* SoShape134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance135 = new SoVRMLAppearance();
SoMaterial* SoMaterial136 = new SoMaterial();
SoMaterial136->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance135->addChild(*SoMaterial136);

SoImageTexture* SoImageTexture137 = new SoImageTexture();
SoImageTexture137->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance135->addChild(*SoImageTexture137);

SoShape134->addChild(*SoVRMLAppearance135);

SoIndexedFaceSet* SoIndexedFaceSet138 = new SoIndexedFaceSet();
SoIndexedFaceSet138->setCoordIndex(new int32_t[]{1,22,18,-1,18,2,1,-1,3,0,22,-1,22,1,3,-1,19,0,3,-1,3,4,19,-1,20,19,4,-1,4,5,20,-1,6,21,20,-1,20,5,6,-1,7,23,21,-1,21,6,7,-1,24,23,7,-1,7,8,24,-1,18,24,8,-1,8,2,18,-1,1,2,10,-1,10,9,1,-1,3,1,9,-1,9,11,3,-1,12,4,3,-1,3,11,12,-1,13,5,4,-1,4,12,13,-1,14,6,5,-1,5,13,14,-1,15,7,6,-1,6,14,15,-1,8,7,15,-1,15,16,8,-1,2,8,16,-1,16,10,2,-1,10,17,9,-1,9,17,11,-1,11,17,12,-1,12,17,13,-1,13,17,14,-1,14,17,15,-1,15,17,16,-1,16,17,10,-1,27,28,29,-1,29,30,31,-1,31,32,25,-1,29,31,25,-1,27,29,25,-1,26,27,25,-1,0,19,26,-1,26,25,0,-1,19,20,27,-1,27,26,19,-1,20,21,28,-1,28,27,20,-1,21,23,29,-1,29,28,21,-1,23,24,30,-1,30,29,23,-1,24,18,31,-1,31,30,24,-1,18,22,32,-1,32,31,18,-1,22,0,25,-1,25,32,22,-1}, 248);
SoIndexedFaceSet138->setCreaseAngle(1.57);
SoIndexedFaceSet138->setTexCoordIndex(new int32_t[]{9,0,1,-1,1,10,9,-1,11,2,0,-1,0,9,11,-1,3,2,11,-1,11,12,3,-1,4,3,12,-1,12,13,4,-1,14,5,4,-1,4,13,14,-1,15,6,5,-1,5,14,15,-1,8,7,17,-1,17,16,8,-1,1,8,16,-1,16,10,1,-1,9,10,19,-1,19,18,9,-1,11,9,18,-1,18,20,11,-1,21,12,11,-1,11,20,21,-1,22,13,12,-1,12,21,22,-1,23,14,13,-1,13,22,23,-1,24,15,14,-1,14,23,24,-1,16,17,26,-1,26,25,16,-1,10,16,25,-1,25,19,10,-1,19,27,18,-1,18,27,20,-1,20,27,21,-1,21,27,22,-1,22,27,23,-1,23,27,24,-1,26,27,25,-1,25,27,19,-1,30,31,32,-1,32,33,34,-1,34,35,28,-1,32,34,28,-1,30,32,28,-1,29,30,28,-1,2,3,29,-1,29,28,2,-1,3,4,30,-1,30,29,3,-1,4,5,31,-1,31,30,4,-1,5,6,32,-1,32,31,5,-1,7,8,33,-1,33,32,7,-1,8,1,34,-1,34,33,8,-1,1,0,35,-1,35,34,1,-1,0,2,28,-1,28,35,0,-1}, 248);
SoCoordinate* SoCoordinate139 = new SoCoordinate();
SoCoordinate139->setPoint(new float[]{1.579,-7.251,-0.1368,0.8267,-3.964,-1.274,0.128,-4.127,-1.538,1.398,-3.841,-0.0928,0.8148,-3.961,1.033,0.0962,-4.135,1.491,-0.6786,-4.25,1.162,-1.178,-4.312,0.0104,-0.6964,-4.263,-1.262,0.3338,0.8205,-1.217,-0.4556,-0.0372,-1.773,1.048,1.348,-0.0534,0.3358,0.8089,1.195,-0.4208,-0.0139,1.773,-1.033,-0.7003,1.49,-1.455,-1.43,0.0863,-1.091,-0.7318,-1.425,-0.722,0.6121,0.0125,0.3805,-7.446,-1.461,1.073,-7.329,0.8683,0.3719,-7.448,1.213,-0.3967,-7.578,0.8496,1.079,-7.328,-1.099,-0.8536,-7.662,-0.0937,-0.3541,-7.57,-1.121,1.295,-8.143,-0.1346,0.904,-8.202,0.6409,0.4207,-8.284,0.8789,-0.1246,-8.376,0.6209,-0.4703,-8.442,-0.0934,-0.0828,-8.369,-0.8906,0.4246,-8.283,-1.126,0.9105,-8.201,-0.8741}, 99);
SoIndexedFaceSet138->setCoord(*SoCoordinate139);

SoTextureCoordinate* SoTextureCoordinate140 = new SoTextureCoordinate();
SoTextureCoordinate140->setPoint(new float[]{0.1242,0.232,0.1329,0.2264,0.1089,0.234,0.0959,0.2328,0.0844,0.229,0.0746,0.2202,0.063,0.21,0.1539,0.2067,0.1416,0.2184,0.132,0.3,0.1468,0.2957,0.1102,0.3044,0.0882,0.3026,0.0722,0.2977,0.0604,0.2937,0.0382,0.2877,0.1612,0.2894,0.1834,0.2831,0.1419,0.3982,0.1642,0.3839,0.1121,0.4019,0.0756,0.3965,0.054,0.3836,0.0433,0.3749,0.0184,0.3603,0.1829,0.37,0.2085,0.3539,0.0991,0.3837,0.1089,0.234,0.0959,0.2328,0.0844,0.229,0.0746,0.2202,0.063,0.21,0.1416,0.2184,0.1329,0.2264,0.1242,0.232}, 72);
SoIndexedFaceSet138->setTexCoord(*SoTextureCoordinate140);

SoShape134->setGeometry(*SoIndexedFaceSet138);

SoTransform133->addChild(*SoShape134);

SoHAnimSegment132->addChild(*SoTransform133);

SoHAnimJoint131->addChildren(*SoHAnimSegment132);

SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint141->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint141->setCenter(new float[]{6.687,42.259998,-1.215});
SoHAnimJoint141->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint141->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment142 = new SoHAnimSegment();
SoHAnimSegment142->X3DNode::setName(QString("l_forearm"));
SoHAnimSegment142->setDEF(QString("hanim_l_forearm"));
SoTransform* SoTransform143 = new SoTransform();
SoTransform143->setTranslation(new float[]{6.687,42.259998,-1.215});
SoShape* SoShape144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance145 = new SoVRMLAppearance();
SoMaterial* SoMaterial146 = new SoMaterial();
SoMaterial146->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance145->addChild(*SoMaterial146);

SoImageTexture* SoImageTexture147 = new SoImageTexture();
SoImageTexture147->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance145->addChild(*SoImageTexture147);

SoShape144->addChild(*SoVRMLAppearance145);

SoIndexedFaceSet* SoIndexedFaceSet148 = new SoIndexedFaceSet();
SoIndexedFaceSet148->setCoordIndex(new int32_t[]{25,29,8,-1,8,9,25,-1,29,24,10,-1,10,8,29,-1,10,24,26,-1,26,11,10,-1,11,26,27,-1,27,12,11,-1,12,27,28,-1,28,13,12,-1,13,28,30,-1,30,14,13,-1,15,31,25,-1,25,9,15,-1,30,31,15,-1,15,14,30,-1,9,8,7,-1,7,0,9,-1,8,10,1,-1,1,7,8,-1,1,10,11,-1,11,4,1,-1,4,11,12,-1,12,5,4,-1,5,12,13,-1,13,6,5,-1,6,13,14,-1,14,2,6,-1,3,15,9,-1,9,0,3,-1,14,15,3,-1,3,2,14,-1,18,19,20,-1,20,21,22,-1,18,20,22,-1,22,23,16,-1,18,22,16,-1,17,18,16,-1,0,7,17,-1,17,16,0,-1,7,1,18,-1,18,17,7,-1,1,4,19,-1,19,18,1,-1,4,5,20,-1,20,19,4,-1,5,6,21,-1,21,20,5,-1,6,2,22,-1,22,21,6,-1,2,3,23,-1,23,22,2,-1,3,0,16,-1,16,23,3,-1,34,35,36,-1,36,37,38,-1,38,39,32,-1,36,38,32,-1,34,36,32,-1,33,34,32,-1,26,24,33,-1,33,32,26,-1,24,29,34,-1,34,33,24,-1,29,25,35,-1,35,34,29,-1,25,31,36,-1,36,35,25,-1,31,30,37,-1,37,36,31,-1,30,28,38,-1,38,37,30,-1,28,27,39,-1,39,38,28,-1,27,26,32,-1,32,39,27,-1}, 304);
SoIndexedFaceSet148->setCreaseAngle(1.57);
SoIndexedFaceSet148->setTexCoordIndex(new int32_t[]{27,31,9,-1,9,10,27,-1,31,26,11,-1,11,9,31,-1,11,26,28,-1,28,12,11,-1,12,28,29,-1,29,13,12,-1,13,29,30,-1,30,14,13,-1,14,30,32,-1,32,15,14,-1,17,34,27,-1,27,10,17,-1,33,34,17,-1,17,16,33,-1,10,9,0,-1,0,1,10,-1,9,11,2,-1,2,0,9,-1,2,11,12,-1,12,3,2,-1,3,12,13,-1,13,4,3,-1,4,13,14,-1,14,5,4,-1,5,14,15,-1,15,6,5,-1,7,17,10,-1,10,1,7,-1,16,17,7,-1,7,8,16,-1,20,21,22,-1,22,23,24,-1,20,22,24,-1,24,25,18,-1,20,24,18,-1,19,20,18,-1,1,0,19,-1,19,18,1,-1,0,2,20,-1,20,19,0,-1,2,3,21,-1,21,20,2,-1,3,4,22,-1,22,21,3,-1,4,5,23,-1,23,22,4,-1,5,6,24,-1,24,23,5,-1,8,7,25,-1,25,24,8,-1,7,1,18,-1,18,25,7,-1,37,38,39,-1,39,40,41,-1,41,42,35,-1,39,41,35,-1,37,39,35,-1,36,37,35,-1,28,26,36,-1,36,35,28,-1,26,31,37,-1,37,36,26,-1,31,27,38,-1,38,37,31,-1,27,34,39,-1,39,38,27,-1,34,33,40,-1,40,39,34,-1,32,30,41,-1,41,40,32,-1,30,29,42,-1,42,41,30,-1,29,28,35,-1,35,42,29,-1}, 304);
SoCoordinate* SoCoordinate149 = new SoCoordinate();
SoCoordinate149->setPoint(new float[]{0.5486,-8.283,-1.232,1.486,-8.077,-0.2413,-0.2605,-8.42,-0.2663,0.0305,-8.37,-0.9039,1.111,-8.152,0.3642,0.5486,-8.283,0.736,0.0305,-8.37,0.2518,1.111,-8.159,-1.009,0.9449,-4.216,-1.053,0.2854,-4.402,-1.332,1.334,-4.12,-0.2381,0.9449,-4.216,0.6011,0.2854,-4.402,0.9772,-0.3877,-4.599,0.5422,-0.7557,-4.691,-0.2466,-0.3601,-4.573,-0.983,0.5729,-7.851,-0.97,0.9444,-7.765,-0.8227,1.222,-7.702,-0.2549,0.9428,-7.759,0.1945,0.5738,-7.851,0.4395,0.2134,-7.907,0.1035,-0.0011,-7.942,-0.2775,0.2111,-7.907,-0.7414,1.211,0.1953,-0.1368,0.0126,0.0001,-1.461,0.7047,0.1171,0.8683,0.004,-0.0014,1.213,-0.7646,-0.1313,0.8496,0.7109,0.1181,-1.099,-1.222,-0.216,-0.0937,-0.722,-0.1241,-1.121,0.3903,0.9161,0.6722,0.7974,0.9737,-0.1352,0.3972,0.9172,-0.9048,-0.1047,0.837,-1.165,-0.6284,0.7533,-0.922,-1.032,0.6814,-0.0917,-0.6726,0.7463,0.6509,-0.1086,0.8364,0.9178}, 120);
SoIndexedFaceSet148->setCoord(*SoCoordinate149);

SoTextureCoordinate* SoTextureCoordinate150 = new SoTextureCoordinate();
SoTextureCoordinate150->setPoint(new float[]{0.1049,0.0541,0.1104,0.0527,0.0952,0.0578,0.0898,0.0572,0.0825,0.057,0.0728,0.056,0.0641,0.0533,0.1172,0.0539,0.1257,0.0501,0.1098,0.1053,0.1172,0.1034,0.0987,0.1077,0.0894,0.1077,0.0804,0.1075,0.0703,0.1076,0.059,0.1083,0.137,0.1041,0.1245,0.1045,0.1104,0.0527,0.1049,0.0541,0.0952,0.0578,0.0898,0.0572,0.0825,0.057,0.0728,0.056,0.0641,0.0533,0.1172,0.0539,0.1022,0.1576,0.124,0.1541,0.0889,0.1582,0.0782,0.1579,0.0679,0.1593,0.1147,0.1566,0.0539,0.1632,0.1484,0.1582,0.1318,0.1551,0.0889,0.1582,0.1022,0.1576,0.1147,0.1566,0.124,0.1541,0.1318,0.1551,0.1484,0.1582,0.0679,0.1593,0.0782,0.1579}, 86);
SoIndexedFaceSet148->setTexCoord(*SoTextureCoordinate150);

SoShape144->setGeometry(*SoIndexedFaceSet148);

SoTransform143->addChild(*SoShape144);

SoHAnimSegment142->addChild(*SoTransform143);

SoHAnimJoint141->addChildren(*SoHAnimSegment142);

SoHAnimJoint* SoHAnimJoint151 = new SoHAnimJoint();
SoHAnimJoint151->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint151->setDEF(QString("hanim_l_radiocarpal"));
SoHAnimJoint151->setCenter(new float[]{7.341,34.169998,-1.443});
SoHAnimJoint151->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint151->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment152 = new SoHAnimSegment();
SoHAnimSegment152->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment152->setDEF(QString("hanim_l_carpal"));
SoTransform* SoTransform153 = new SoTransform();
SoTransform153->setTranslation(new float[]{7.341,34.169998,-1.443});
SoShape* SoShape154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance155 = new SoVRMLAppearance();
SoMaterial* SoMaterial156 = new SoMaterial();
SoMaterial156->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance155->addChild(*SoMaterial156);

SoImageTexture* SoImageTexture157 = new SoImageTexture();
SoImageTexture157->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance155->addChild(*SoImageTexture157);

SoShape154->addChild(*SoVRMLAppearance155);

SoIndexedFaceSet* SoIndexedFaceSet158 = new SoIndexedFaceSet();
SoIndexedFaceSet158->setCoordIndex(new int32_t[]{14,17,18,-1,18,13,14,-1,12,19,20,-1,20,11,12,-1,4,8,6,-1,6,0,4,-1,10,21,22,-1,22,9,10,-1,16,18,17,-1,17,15,16,-1,2,6,8,-1,8,5,2,-1,13,20,19,-1,19,14,13,-1,3,5,8,-1,8,7,3,-1,15,22,21,-1,21,16,15,-1,8,4,1,-1,1,7,8,-1,2,5,17,-1,17,14,2,-1,18,32,28,-1,28,13,18,-1,12,0,6,-1,6,19,12,-1,20,35,24,-1,24,11,20,-1,10,26,36,-1,36,21,10,-1,22,7,1,-1,1,9,22,-1,30,32,18,-1,18,16,30,-1,17,5,3,-1,3,15,17,-1,28,35,20,-1,20,13,28,-1,19,6,2,-1,2,14,19,-1,3,7,22,-1,22,15,3,-1,21,36,30,-1,30,16,21,-1,28,32,33,-1,33,27,28,-1,24,35,34,-1,34,23,24,-1,25,37,36,-1,36,26,25,-1,30,29,33,-1,33,32,30,-1,31,23,34,-1,34,38,31,-1,29,37,38,-1,38,33,29,-1,28,27,34,-1,34,35,28,-1,29,30,36,-1,36,37,29,-1,27,33,38,-1,38,34,27,-1,31,38,37,-1,37,25,31,-1,67,44,43,-1,43,39,67,-1,40,46,45,-1,45,41,40,-1,42,39,43,-1,43,48,42,-1,47,55,41,-1,41,45,47,-1,42,48,46,-1,46,40,42,-1,9,1,50,-1,50,52,9,-1,4,0,49,-1,49,51,4,-1,11,24,54,-1,54,58,11,-1,1,4,51,-1,51,50,1,-1,10,9,52,-1,52,53,10,-1,26,10,53,-1,53,68,26,-1,0,12,70,-1,70,49,0,-1,31,25,61,-1,61,100,31,-1,25,26,68,-1,68,61,25,-1,24,23,95,-1,95,54,24,-1,23,31,100,-1,100,95,23,-1,95,96,54,-1,39,42,97,-1,97,96,39,-1,42,40,98,-1,98,97,42,-1,40,41,99,-1,99,98,40,-1,99,41,55,-1,55,100,99,-1,100,55,67,-1,67,95,100,-1,54,96,56,-1,56,58,54,-1,96,97,57,-1,57,56,96,-1,97,98,59,-1,59,57,97,-1,98,99,60,-1,60,59,98,-1,99,100,60,-1,52,50,63,-1,63,65,52,-1,51,49,62,-1,62,64,51,-1,50,51,64,-1,64,63,50,-1,53,52,65,-1,65,66,53,-1,70,71,62,-1,62,49,70,-1,68,69,60,-1,60,61,68,-1,72,73,65,-1,65,63,72,-1,73,74,66,-1,66,65,73,-1,81,69,66,-1,66,74,81,-1,75,76,59,-1,59,60,75,-1,76,77,57,-1,57,59,76,-1,77,78,56,-1,56,57,77,-1,82,71,56,-1,56,78,82,-1,79,80,64,-1,64,62,79,-1,80,72,63,-1,63,64,80,-1,55,47,44,-1,44,67,55,-1,95,67,39,-1,39,96,95,-1,68,53,66,-1,66,69,68,-1,75,60,69,-1,69,81,75,-1,100,61,60,-1,58,56,71,-1,71,70,58,-1,79,62,71,-1,71,82,79,-1,12,11,58,-1,58,70,12,-1,47,45,46,-1,46,48,47,-1,47,48,43,-1,43,44,47,-1,72,85,84,-1,84,73,72,-1,80,86,85,-1,85,72,80,-1,79,87,86,-1,86,80,79,-1,82,88,87,-1,87,79,82,-1,78,89,88,-1,88,82,78,-1,77,90,89,-1,89,78,77,-1,76,91,90,-1,90,77,76,-1,75,92,91,-1,91,76,75,-1,81,93,92,-1,92,75,81,-1,74,94,93,-1,93,81,74,-1,74,73,84,-1,84,94,74,-1,85,83,84,-1,86,83,85,-1,87,83,86,-1,88,83,87,-1,89,83,88,-1,90,83,89,-1,91,83,90,-1,92,83,91,-1,93,83,92,-1,94,83,93,-1,84,83,94,-1}, 792);
SoIndexedFaceSet158->setCreaseAngle(1.57);
SoIndexedFaceSet158->setTexCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,13,14,15,-1,15,12,13,-1,17,96,95,-1,95,16,17,-1,19,11,10,-1,10,18,19,-1,0,7,6,-1,6,1,0,-1,21,99,98,-1,98,20,21,-1,16,15,14,-1,14,17,16,-1,98,97,22,-1,22,20,98,-1,19,18,2,-1,2,1,19,-1,3,23,24,-1,24,0,3,-1,5,8,11,-1,11,6,5,-1,7,25,26,-1,26,4,7,-1,13,27,28,-1,28,14,13,-1,15,20,22,-1,22,12,15,-1,29,100,96,-1,96,17,29,-1,95,99,21,-1,21,16,95,-1,24,25,7,-1,7,0,24,-1,6,11,19,-1,19,1,6,-1,21,20,15,-1,15,16,21,-1,14,28,29,-1,29,17,14,-1,24,23,31,-1,31,30,24,-1,26,25,33,-1,33,32,26,-1,34,35,28,-1,28,27,34,-1,29,36,101,-1,101,100,29,-1,37,32,33,-1,33,39,37,-1,36,35,38,-1,38,101,36,-1,24,30,33,-1,33,25,24,-1,36,29,28,-1,28,35,36,-1,30,31,39,-1,39,33,30,-1,102,38,35,-1,35,34,102,-1,41,42,47,-1,47,40,41,-1,44,45,46,-1,46,43,44,-1,48,40,47,-1,47,53,48,-1,49,50,43,-1,43,46,49,-1,103,104,45,-1,45,44,103,-1,12,22,51,-1,51,52,12,-1,9,8,54,-1,54,55,9,-1,4,26,56,-1,56,59,4,-1,22,97,105,-1,105,51,22,-1,13,12,52,-1,52,57,13,-1,27,13,57,-1,57,58,27,-1,8,5,62,-1,62,54,8,-1,102,34,60,-1,60,61,102,-1,34,27,58,-1,58,60,34,-1,26,32,63,-1,63,56,26,-1,32,37,64,-1,64,63,32,-1,63,67,56,-1,40,48,127,-1,127,125,40,-1,103,44,128,-1,128,126,103,-1,44,43,129,-1,129,128,44,-1,129,43,50,-1,50,130,129,-1,131,73,41,-1,41,124,131,-1,56,67,74,-1,74,59,56,-1,67,68,76,-1,76,74,67,-1,106,65,69,-1,69,107,106,-1,65,66,70,-1,70,69,65,-1,66,61,70,-1,52,51,71,-1,71,72,52,-1,55,54,85,-1,85,86,55,-1,51,105,108,-1,108,71,51,-1,57,52,72,-1,72,75,57,-1,62,87,85,-1,85,54,62,-1,58,77,70,-1,70,60,58,-1,78,79,72,-1,72,71,78,-1,79,80,75,-1,75,72,79,-1,81,77,75,-1,75,80,81,-1,82,83,69,-1,69,70,82,-1,83,84,107,-1,107,69,83,-1,88,89,74,-1,74,76,88,-1,90,87,74,-1,74,89,90,-1,91,92,86,-1,86,85,91,-1,109,78,71,-1,71,108,109,-1,73,93,42,-1,42,41,73,-1,124,41,40,-1,40,125,124,-1,58,57,75,-1,75,77,58,-1,82,70,77,-1,77,81,82,-1,61,60,70,-1,59,74,87,-1,87,62,59,-1,91,85,87,-1,87,90,91,-1,5,4,59,-1,59,62,5,-1,49,46,45,-1,45,104,49,-1,93,53,47,-1,47,42,93,-1,78,112,111,-1,111,79,78,-1,109,113,112,-1,112,78,109,-1,91,115,114,-1,114,92,91,-1,90,116,115,-1,115,91,90,-1,89,117,116,-1,116,90,89,-1,88,118,117,-1,117,89,88,-1,83,120,119,-1,119,84,83,-1,82,121,120,-1,120,83,82,-1,81,122,121,-1,121,82,81,-1,80,123,122,-1,122,81,80,-1,80,79,111,-1,111,123,80,-1,112,110,111,-1,113,110,112,-1,115,94,114,-1,116,94,115,-1,117,94,116,-1,118,94,117,-1,120,110,119,-1,121,110,120,-1,122,110,121,-1,123,110,122,-1,111,110,123,-1}, 792);
SoCoordinate* SoCoordinate159 = new SoCoordinate();
SoCoordinate159->setPoint(new float[]{-0.0484,-2.669,-1.109,0.5122,-2.536,-1.211,0.0389,-3.633,-0.9447,0.3887,-3.753,-1.019,0.2345,-2.6,-1.283,0.1638,-3.794,-1.017,-0.0097,-3.197,-1.071,0.5439,-3.335,-1.193,0.2598,-3.267,-1.236,0.7593,-2.661,-0.6786,0.8727,-2.789,-0.0285,0.027,-2.955,-0.0639,0.0035,-2.833,-0.7125,0.2448,-4.088,-0.0434,0.1763,-3.945,-0.5948,0.6318,-4.095,-0.5705,0.6436,-4.232,-0.0154,0.4108,-4.136,-0.5685,0.4432,-4.282,-0.0213,0.0778,-3.4,-0.6804,0.1499,-3.521,-0.0474,0.8092,-3.775,-0.0027,0.7549,-3.656,-0.6552,-0.1145,-2.854,1.064,-0.0184,-2.931,0.5665,0.4652,-2.795,1.179,0.7695,-2.852,0.6593,-0.0912,-3.841,1.006,0.1328,-4.068,0.6052,0.2484,-3.879,1.085,0.5776,-4.178,0.6005,0.1741,-2.777,1.307,0.391,-4.211,0.5892,0.0222,-3.9,1.103,-0.0911,-3.456,1.078,0.0933,-3.543,0.5804,0.7321,-3.726,0.6506,0.398,-3.466,1.192,0.1303,-3.384,1.244,-0.6275,-1.818,1.199,-0.5455,-1.716,1.771,-0.1596,-1.86,1.723,-0.7564,-1.71,1.391,-0.7176,-2.41,1.495,-0.5088,-2.502,1.493,-0.4454,-2.494,1.856,-0.673,-2.397,1.84,-0.473,-2.597,1.729,-0.7943,-2.454,1.703,-0.1488,-1.898,-1.075,0.4772,-1.692,-1.126,0.1582,-1.743,-1.206,0.7034,-1.791,-0.6081,0.7947,-1.854,-0.0135,-0.271,-1.977,0.5803,-0.046,-1.962,1.525,-0.535,-0.7519,0.1207,-0.5847,-0.501,0.619,-0.2218,-2.022,-0.0712,-0.2651,-0.39,0.9595,0.3059,-0.5187,0.9004,0.4249,-1.7,1.165,-0.3218,-0.8135,-0.8924,0.3755,-0.7445,-0.9185,0.0375,-0.8231,-1.06,0.5692,-0.6704,-0.4588,0.6362,-0.6574,-0.0168,-0.3398,-2.013,1.232,0.7147,-1.78,0.6911,0.5559,-0.6254,0.574,-0.1664,-1.961,-0.6946,-0.3867,-0.8083,-0.483,0.2263,-0.0176,-0.602,0.4134,-0.0056,-0.3313,0.4772,-0.024,0.0197,0.2029,-0.0192,0.6487,-0.19,-0.1026,0.6875,-0.4637,-0.2014,0.4306,-0.4649,-0.2436,0.0672,-0.3571,-0.187,-0.6047,-0.085,-0.0795,-0.6916,0.3677,0.0022,0.4139,-0.4441,-0.2482,-0.2847,-0.073,0.7042,0.0189,0.3553,0.5674,-0.2789,0.1929,0.5039,-0.5229,-0.0913,0.5001,-0.6061,-0.3468,0.3753,-0.5281,-0.426,0.3319,-0.2365,-0.445,0.3505,0.0842,-0.4357,0.3809,0.4215,-0.1945,0.479,0.6494,0.1635,0.555,0.614,0.3158,0.5745,0.4038,0.4135,0.5506,0.0409,-0.3174,-1.934,1.03,-0.6016,-1.397,0.7368,-0.7178,-1.192,1.035,-0.4234,-1.114,1.502,0.0707,-1.244,1.455,0.1435,-1.576,1.365}, 303);
SoIndexedFaceSet158->setCoord(*SoCoordinate159);

SoTextureCoordinate* SoTextureCoordinate160 = new SoTextureCoordinate();
SoTextureCoordinate160->setPoint(new float[]{0.205,0.0658,0.1911,0.0707,0.1929,0.0623,0.2056,0.0584,0.204,0.0979,0.1894,0.0993,0.192,0.0812,0.2042,0.0782,0.1776,0.102,0.1691,0.1049,0.1722,0.0826,0.1792,0.0874,0.3576,0.0677,0.343,0.0677,0.3369,0.0378,0.3508,0.0394,0.3485,0.0301,0.3351,0.0289,0.1792,0.0721,0.1812,0.0788,0.3676,0.0436,0.3644,0.0343,0.3736,0.0676,0.2203,0.0605,0.2197,0.0666,0.2201,0.078,0.219,0.1006,0.3267,0.0697,0.3206,0.0416,0.3198,0.0314,0.2336,0.0701,0.2372,0.0664,0.237,0.1032,0.2337,0.0796,0.3092,0.0748,0.3062,0.0477,0.3048,0.0377,0.2463,0.1043,0.2993,0.0488,0.2421,0.0791,0.2419,0.1525,0.245,0.146,0.2625,0.1471,0.2867,0.1169,0.2863,0.1262,0.2719,0.1174,0.2719,0.1139,0.2586,0.1504,0.2416,0.1569,0.2696,0.112,0.2872,0.1121,0.3743,0.0911,0.3595,0.0892,0.2607,0.1541,0.1763,0.1313,0.1685,0.1288,0.2183,0.1225,0.3466,0.0922,0.3303,0.0955,0.2026,0.1199,0.3166,0.1021,0.3105,0.1115,0.1871,0.1227,0.2339,0.1345,0.2426,0.131,0.3089,0.1341,0.3091,0.123,0.2198,0.1467,0.2215,0.1552,0.3263,0.1386,0.3306,0.13,0.3736,0.1115,0.3601,0.1093,0.2498,0.1434,0.2005,0.1594,0.3526,0.1164,0.2108,0.1652,0.34,0.1206,0.3704,0.1321,0.3627,0.1306,0.356,0.1306,0.3496,0.1334,0.3443,0.1351,0.3407,0.1419,0.3435,0.1517,0.1768,0.1527,0.1675,0.1496,0.1846,0.1543,0.1988,0.1786,0.1926,0.1765,0.186,0.1735,0.1794,0.1722,0.174,0.1741,0.2658,0.1458,0.1866,0.1875,0.3498,0.025,0.3342,0.0242,0.3818,0.0652,0.3741,0.0425,0.3678,0.0299,0.3176,0.0272,0.3004,0.0345,0.3029,0.0766,0.2847,0.135,0.2695,0.1219,0.3863,0.0903,0.3064,0.1439,0.3237,0.1509,0.3852,0.1126,0.3751,0.1362,0.3572,0.1421,0.36,0.1363,0.3638,0.1371,0.3662,0.1391,0.1803,0.1808,0.183,0.1798,0.1863,0.1805,0.1896,0.182,0.1927,0.183,0.3504,0.1469,0.349,0.142,0.3508,0.1386,0.3534,0.1377,0.3566,0.1363,0.2339,0.1345,0.2198,0.1467,0.3064,0.1439,0.2215,0.1552,0.3089,0.1341,0.3091,0.123,0.3105,0.1115,0.2426,0.131}, 264);
SoIndexedFaceSet158->setTexCoord(*SoTextureCoordinate160);

SoShape154->setGeometry(*SoIndexedFaceSet158);

SoTransform153->addChild(*SoShape154);

SoHAnimSegment152->addChild(*SoTransform153);

SoHAnimJoint151->addChildren(*SoHAnimSegment152);

SoHAnimJoint141->addChildren(*SoHAnimJoint151);

SoHAnimJoint131->addChildren(*SoHAnimJoint141);

SoHAnimJoint121->addChildren(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint161 = new SoHAnimJoint();
SoHAnimJoint161->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint161->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint161->setCenter(new float[]{-6.32,49.709999,-1.215});
SoHAnimJoint161->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint161->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment162 = new SoHAnimSegment();
SoHAnimSegment162->X3DNode::setName(QString("r_upperarm"));
SoHAnimSegment162->setDEF(QString("hanim_r_upperarm"));
SoTransform* SoTransform163 = new SoTransform();
SoTransform163->setTranslation(new float[]{-6.32,49.709999,-1.215});
SoShape* SoShape164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance165 = new SoVRMLAppearance();
SoMaterial* SoMaterial166 = new SoMaterial();
SoMaterial166->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance165->addChild(*SoMaterial166);

SoImageTexture* SoImageTexture167 = new SoImageTexture();
SoImageTexture167->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance165->addChild(*SoImageTexture167);

SoShape164->addChild(*SoVRMLAppearance165);

SoIndexedFaceSet* SoIndexedFaceSet168 = new SoIndexedFaceSet();
SoIndexedFaceSet168->setCoordIndex(new int32_t[]{1,2,18,-1,18,22,1,-1,3,1,22,-1,22,0,3,-1,19,4,3,-1,3,0,19,-1,20,5,4,-1,4,19,20,-1,6,5,20,-1,20,21,6,-1,7,6,21,-1,21,23,7,-1,24,8,7,-1,7,23,24,-1,18,2,8,-1,8,24,18,-1,1,9,10,-1,10,2,1,-1,3,11,9,-1,9,1,3,-1,12,11,3,-1,3,4,12,-1,13,12,4,-1,4,5,13,-1,14,13,5,-1,5,6,14,-1,15,14,6,-1,6,7,15,-1,8,16,15,-1,15,7,8,-1,2,10,16,-1,16,8,2,-1,10,9,17,-1,9,11,17,-1,11,12,17,-1,12,13,17,-1,13,14,17,-1,14,15,17,-1,15,16,17,-1,16,10,17,-1,25,32,31,-1,31,30,29,-1,25,31,29,-1,29,28,27,-1,25,29,27,-1,26,25,27,-1,0,25,26,-1,26,19,0,-1,19,26,27,-1,27,20,19,-1,20,27,28,-1,28,21,20,-1,21,28,29,-1,29,23,21,-1,23,29,30,-1,30,24,23,-1,24,30,31,-1,31,18,24,-1,18,31,32,-1,32,22,18,-1,22,32,25,-1,25,0,22,-1}, 248);
SoIndexedFaceSet168->setCreaseAngle(1.57);
SoIndexedFaceSet168->setTexCoordIndex(new int32_t[]{9,10,1,-1,1,0,9,-1,11,9,0,-1,0,2,11,-1,3,12,11,-1,11,2,3,-1,4,13,12,-1,12,3,4,-1,14,13,4,-1,4,5,14,-1,15,14,5,-1,5,6,15,-1,8,16,17,-1,17,7,8,-1,1,10,16,-1,16,8,1,-1,9,18,19,-1,19,10,9,-1,11,20,18,-1,18,9,11,-1,21,20,11,-1,11,12,21,-1,22,21,12,-1,12,13,22,-1,23,22,13,-1,13,14,23,-1,24,23,14,-1,14,15,24,-1,16,25,26,-1,26,17,16,-1,10,19,25,-1,25,16,10,-1,19,18,27,-1,18,20,27,-1,20,21,27,-1,21,22,27,-1,22,23,27,-1,23,24,27,-1,26,25,27,-1,25,19,27,-1,28,35,34,-1,34,33,32,-1,28,34,32,-1,32,31,30,-1,28,32,30,-1,29,28,30,-1,2,28,29,-1,29,3,2,-1,3,29,30,-1,30,4,3,-1,4,30,31,-1,31,5,4,-1,5,31,32,-1,32,6,5,-1,7,32,33,-1,33,8,7,-1,8,33,34,-1,34,1,8,-1,1,34,35,-1,35,0,1,-1,0,35,28,-1,28,2,0,-1}, 248);
SoCoordinate* SoCoordinate169 = new SoCoordinate();
SoCoordinate169->setPoint(new float[]{-1.579,-7.251,-0.1368,-0.8267,-3.964,-1.274,-0.128,-4.127,-1.538,-1.398,-3.841,-0.0928,-0.8148,-3.961,1.033,-0.0962,-4.135,1.491,0.6786,-4.25,1.162,1.178,-4.312,0.0104,0.6964,-4.263,-1.262,-0.3338,0.8205,-1.217,0.4556,-0.0372,-1.773,-1.048,1.348,-0.0534,-0.3358,0.8089,1.195,0.4208,-0.0139,1.773,1.033,-0.7003,1.49,1.455,-1.43,0.0863,1.091,-0.7318,-1.425,0.722,0.6121,0.0125,-0.3805,-7.446,-1.461,-1.073,-7.329,0.8683,-0.3719,-7.448,1.213,0.3967,-7.578,0.8496,-1.079,-7.328,-1.099,0.8536,-7.662,-0.0937,0.3541,-7.57,-1.121,-1.295,-8.143,-0.1346,-0.904,-8.202,0.6409,-0.4207,-8.284,0.8789,0.1246,-8.376,0.6209,0.4703,-8.442,-0.0934,0.0828,-8.369,-0.8906,-0.4246,-8.283,-1.126,-0.9105,-8.201,-0.8741}, 99);
SoIndexedFaceSet168->setCoord(*SoCoordinate169);

SoTextureCoordinate* SoTextureCoordinate170 = new SoTextureCoordinate();
SoTextureCoordinate170->setPoint(new float[]{0.1242,0.232,0.1329,0.2264,0.1089,0.234,0.0959,0.2328,0.0844,0.229,0.0746,0.2202,0.063,0.21,0.1539,0.2067,0.1416,0.2184,0.132,0.3,0.1468,0.2957,0.1102,0.3044,0.0882,0.3026,0.0722,0.2977,0.0604,0.2937,0.0382,0.2877,0.1612,0.2894,0.1834,0.2831,0.1419,0.3982,0.1642,0.3839,0.1121,0.4019,0.0756,0.3965,0.054,0.3836,0.0433,0.3749,0.0184,0.3603,0.1829,0.37,0.2085,0.3539,0.0991,0.3837,0.1089,0.234,0.0959,0.2328,0.0844,0.229,0.0746,0.2202,0.063,0.21,0.1416,0.2184,0.1329,0.2264,0.1242,0.232}, 72);
SoIndexedFaceSet168->setTexCoord(*SoTextureCoordinate170);

SoShape164->setGeometry(*SoIndexedFaceSet168);

SoTransform163->addChild(*SoShape164);

SoHAnimSegment162->addChild(*SoTransform163);

SoHAnimJoint161->addChildren(*SoHAnimSegment162);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint171->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint171->setCenter(new float[]{-6.687,42.259998,-1.215});
SoHAnimJoint171->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint171->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment172 = new SoHAnimSegment();
SoHAnimSegment172->X3DNode::setName(QString("r_forearm"));
SoHAnimSegment172->setDEF(QString("hanim_r_forearm"));
SoTransform* SoTransform173 = new SoTransform();
SoTransform173->setTranslation(new float[]{-6.687,42.259998,-1.215});
SoShape* SoShape174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance175 = new SoVRMLAppearance();
SoMaterial* SoMaterial176 = new SoMaterial();
SoMaterial176->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance175->addChild(*SoMaterial176);

SoImageTexture* SoImageTexture177 = new SoImageTexture();
SoImageTexture177->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance175->addChild(*SoImageTexture177);

SoShape174->addChild(*SoVRMLAppearance175);

SoIndexedFaceSet* SoIndexedFaceSet178 = new SoIndexedFaceSet();
SoIndexedFaceSet178->setCoordIndex(new int32_t[]{25,9,8,-1,8,29,25,-1,29,8,10,-1,10,24,29,-1,10,11,26,-1,26,24,10,-1,11,12,27,-1,27,26,11,-1,12,13,28,-1,28,27,12,-1,13,14,30,-1,30,28,13,-1,15,9,25,-1,25,31,15,-1,30,14,15,-1,15,31,30,-1,9,0,7,-1,7,8,9,-1,8,7,1,-1,1,10,8,-1,1,4,11,-1,11,10,1,-1,4,5,12,-1,12,11,4,-1,5,6,13,-1,13,12,5,-1,6,2,14,-1,14,13,6,-1,3,0,9,-1,9,15,3,-1,14,2,3,-1,3,15,14,-1,16,23,22,-1,22,21,20,-1,20,19,18,-1,22,20,18,-1,16,22,18,-1,17,16,18,-1,0,16,17,-1,17,7,0,-1,7,17,18,-1,18,1,7,-1,1,18,19,-1,19,4,1,-1,4,19,20,-1,20,5,4,-1,5,20,21,-1,21,6,5,-1,6,21,22,-1,22,2,6,-1,2,22,23,-1,23,3,2,-1,3,23,16,-1,16,0,3,-1,32,39,38,-1,38,37,36,-1,32,38,36,-1,36,35,34,-1,32,36,34,-1,33,32,34,-1,26,32,33,-1,33,24,26,-1,24,33,34,-1,34,29,24,-1,29,34,35,-1,35,25,29,-1,25,35,36,-1,36,31,25,-1,31,36,37,-1,37,30,31,-1,30,37,38,-1,38,28,30,-1,28,38,39,-1,39,27,28,-1,27,39,32,-1,32,26,27,-1}, 304);
SoIndexedFaceSet178->setCreaseAngle(1.57);
SoIndexedFaceSet178->setTexCoordIndex(new int32_t[]{27,10,9,-1,9,31,27,-1,31,9,11,-1,11,26,31,-1,11,12,28,-1,28,26,11,-1,12,13,29,-1,29,28,12,-1,13,14,30,-1,30,29,13,-1,14,15,32,-1,32,30,14,-1,17,10,27,-1,27,34,17,-1,33,16,17,-1,17,34,33,-1,10,1,0,-1,0,9,10,-1,9,0,2,-1,2,11,9,-1,2,3,12,-1,12,11,2,-1,3,4,13,-1,13,12,3,-1,4,5,14,-1,14,13,4,-1,5,6,15,-1,15,14,5,-1,7,1,10,-1,10,17,7,-1,16,8,7,-1,7,17,16,-1,18,25,24,-1,24,23,22,-1,22,21,20,-1,24,22,20,-1,18,24,20,-1,19,18,20,-1,1,18,19,-1,19,0,1,-1,0,19,20,-1,20,2,0,-1,2,20,21,-1,21,3,2,-1,3,21,22,-1,22,4,3,-1,4,22,23,-1,23,5,4,-1,5,23,24,-1,24,6,5,-1,8,24,25,-1,25,7,8,-1,7,25,18,-1,18,1,7,-1,35,42,41,-1,41,40,39,-1,35,41,39,-1,39,38,37,-1,35,39,37,-1,36,35,37,-1,28,35,36,-1,36,26,28,-1,26,36,37,-1,37,31,26,-1,31,37,38,-1,38,27,31,-1,27,38,39,-1,39,34,27,-1,34,39,40,-1,40,33,34,-1,32,40,41,-1,41,30,32,-1,30,41,42,-1,42,29,30,-1,29,42,35,-1,35,28,29,-1}, 304);
SoCoordinate* SoCoordinate179 = new SoCoordinate();
SoCoordinate179->setPoint(new float[]{-0.5486,-8.283,-1.232,-1.486,-8.077,-0.2413,0.2605,-8.42,-0.2663,-0.0305,-8.37,-0.9039,-1.111,-8.152,0.3642,-0.5486,-8.283,0.736,-0.0305,-8.37,0.2518,-1.111,-8.159,-1.009,-0.9449,-4.216,-1.053,-0.2854,-4.402,-1.332,-1.334,-4.12,-0.2381,-0.9449,-4.216,0.6011,-0.2854,-4.402,0.9772,0.3877,-4.599,0.5422,0.7557,-4.691,-0.2466,0.3601,-4.573,-0.983,-0.5729,-7.851,-0.97,-0.9444,-7.765,-0.8227,-1.222,-7.702,-0.2549,-0.9428,-7.759,0.1945,-0.5738,-7.851,0.4395,-0.2134,-7.907,0.1035,0.0011,-7.942,-0.2774,-0.2111,-7.907,-0.7414,-1.211,0.1953,-0.1368,-0.0126,0.0001,-1.461,-0.7047,0.1171,0.8683,-0.004,-0.0014,1.213,0.7646,-0.1313,0.8496,-0.7109,0.1181,-1.099,1.222,-0.216,-0.0937,0.722,-0.1241,-1.121,-0.3903,0.9161,0.6722,-0.7974,0.9737,-0.1352,-0.3972,0.9172,-0.9048,0.1047,0.837,-1.165,0.6284,0.7533,-0.922,1.032,0.6814,-0.0917,0.6726,0.7463,0.6509,0.1086,0.8364,0.9178}, 120);
SoIndexedFaceSet178->setCoord(*SoCoordinate179);

SoTextureCoordinate* SoTextureCoordinate180 = new SoTextureCoordinate();
SoTextureCoordinate180->setPoint(new float[]{0.1049,0.0541,0.1104,0.0527,0.0952,0.0578,0.0898,0.0572,0.0825,0.057,0.0728,0.056,0.0641,0.0533,0.1172,0.0539,0.1257,0.0501,0.1098,0.1053,0.1172,0.1034,0.0987,0.1077,0.0894,0.1077,0.0804,0.1075,0.0703,0.1076,0.059,0.1083,0.137,0.1041,0.1245,0.1045,0.1104,0.0527,0.1049,0.0541,0.0952,0.0578,0.0898,0.0572,0.0825,0.057,0.0728,0.056,0.0641,0.0533,0.1172,0.0539,0.1022,0.1576,0.124,0.1541,0.0889,0.1582,0.0782,0.1579,0.0679,0.1593,0.1147,0.1566,0.0539,0.1632,0.1484,0.1582,0.1318,0.1551,0.0889,0.1582,0.1022,0.1576,0.1147,0.1566,0.124,0.1541,0.1318,0.1551,0.1484,0.1582,0.0679,0.1593,0.0782,0.1579}, 86);
SoIndexedFaceSet178->setTexCoord(*SoTextureCoordinate180);

SoShape174->setGeometry(*SoIndexedFaceSet178);

SoTransform173->addChild(*SoShape174);

SoHAnimSegment172->addChild(*SoTransform173);

SoHAnimJoint171->addChildren(*SoHAnimSegment172);

SoHAnimJoint* SoHAnimJoint181 = new SoHAnimJoint();
SoHAnimJoint181->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint181->setDEF(QString("hanim_r_radiocarpal"));
SoHAnimJoint181->setCenter(new float[]{-7.341,34.169998,-1.443});
SoHAnimJoint181->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint181->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment182 = new SoHAnimSegment();
SoHAnimSegment182->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment182->setDEF(QString("hanim_r_carpal"));
SoTransform* SoTransform183 = new SoTransform();
SoTransform183->setTranslation(new float[]{-7.341,34.169998,-1.443});
SoShape* SoShape184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance185 = new SoVRMLAppearance();
SoMaterial* SoMaterial186 = new SoMaterial();
SoMaterial186->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance185->addChild(*SoMaterial186);

SoImageTexture* SoImageTexture187 = new SoImageTexture();
SoImageTexture187->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance185->addChild(*SoImageTexture187);

SoShape184->addChild(*SoVRMLAppearance185);

SoIndexedFaceSet* SoIndexedFaceSet188 = new SoIndexedFaceSet();
SoIndexedFaceSet188->setCoordIndex(new int32_t[]{14,13,18,-1,18,17,14,-1,12,11,20,-1,20,19,12,-1,4,0,6,-1,6,8,4,-1,10,9,22,-1,22,21,10,-1,16,15,17,-1,17,18,16,-1,2,5,8,-1,8,6,2,-1,13,14,19,-1,19,20,13,-1,3,7,8,-1,8,5,3,-1,15,16,21,-1,21,22,15,-1,8,7,1,-1,1,4,8,-1,2,14,17,-1,17,5,2,-1,18,13,28,-1,28,32,18,-1,12,19,6,-1,6,0,12,-1,20,11,24,-1,24,35,20,-1,10,21,36,-1,36,26,10,-1,22,9,1,-1,1,7,22,-1,30,16,18,-1,18,32,30,-1,17,15,3,-1,3,5,17,-1,28,13,20,-1,20,35,28,-1,19,14,2,-1,2,6,19,-1,3,15,22,-1,22,7,3,-1,21,16,30,-1,30,36,21,-1,28,27,33,-1,33,32,28,-1,24,23,34,-1,34,35,24,-1,25,26,36,-1,36,37,25,-1,30,32,33,-1,33,29,30,-1,31,38,34,-1,34,23,31,-1,29,33,38,-1,38,37,29,-1,28,35,34,-1,34,27,28,-1,29,37,36,-1,36,30,29,-1,27,34,38,-1,38,33,27,-1,31,25,37,-1,37,38,31,-1,67,39,43,-1,43,44,67,-1,40,41,45,-1,45,46,40,-1,42,48,43,-1,43,39,42,-1,47,45,41,-1,41,55,47,-1,42,40,46,-1,46,48,42,-1,9,52,50,-1,50,1,9,-1,4,51,49,-1,49,0,4,-1,11,58,54,-1,54,24,11,-1,1,50,51,-1,51,4,1,-1,10,53,52,-1,52,9,10,-1,26,68,53,-1,53,10,26,-1,0,49,70,-1,70,12,0,-1,31,100,61,-1,61,25,31,-1,25,61,68,-1,68,26,25,-1,24,54,95,-1,95,23,24,-1,23,95,100,-1,100,31,23,-1,95,54,96,-1,39,96,97,-1,97,42,39,-1,42,97,98,-1,98,40,42,-1,40,98,99,-1,99,41,40,-1,99,100,55,-1,55,41,99,-1,100,95,67,-1,67,55,100,-1,54,58,56,-1,56,96,54,-1,96,56,57,-1,57,97,96,-1,97,57,59,-1,59,98,97,-1,98,59,60,-1,60,99,98,-1,99,60,100,-1,52,65,63,-1,63,50,52,-1,51,64,62,-1,62,49,51,-1,50,63,64,-1,64,51,50,-1,53,66,65,-1,65,52,53,-1,70,49,62,-1,62,71,70,-1,68,61,60,-1,60,69,68,-1,72,63,65,-1,65,73,72,-1,73,65,66,-1,66,74,73,-1,81,74,66,-1,66,69,81,-1,75,60,59,-1,59,76,75,-1,76,59,57,-1,57,77,76,-1,77,57,56,-1,56,78,77,-1,82,78,56,-1,56,71,82,-1,79,62,64,-1,64,80,79,-1,80,64,63,-1,63,72,80,-1,55,67,44,-1,44,47,55,-1,95,96,39,-1,39,67,95,-1,68,69,66,-1,66,53,68,-1,75,81,69,-1,69,60,75,-1,100,60,61,-1,58,70,71,-1,71,56,58,-1,79,82,71,-1,71,62,79,-1,12,70,58,-1,58,11,12,-1,47,48,46,-1,46,45,47,-1,47,44,43,-1,43,48,47,-1,72,73,84,-1,84,85,72,-1,80,72,85,-1,85,86,80,-1,79,80,86,-1,86,87,79,-1,82,79,87,-1,87,88,82,-1,78,82,88,-1,88,89,78,-1,77,78,89,-1,89,90,77,-1,76,77,90,-1,90,91,76,-1,75,76,91,-1,91,92,75,-1,81,75,92,-1,92,93,81,-1,74,81,93,-1,93,94,74,-1,74,94,84,-1,84,73,74,-1,85,84,83,-1,86,85,83,-1,87,86,83,-1,88,87,83,-1,89,88,83,-1,90,89,83,-1,91,90,83,-1,92,91,83,-1,93,92,83,-1,94,93,83,-1,84,94,83,-1}, 792);
SoIndexedFaceSet188->setCreaseAngle(1.57);
SoIndexedFaceSet188->setTexCoordIndex(new int32_t[]{1,0,3,-1,3,2,1,-1,5,4,7,-1,7,6,5,-1,9,8,11,-1,11,10,9,-1,13,12,15,-1,15,14,13,-1,17,16,95,-1,95,96,17,-1,19,18,10,-1,10,11,19,-1,0,1,6,-1,6,7,0,-1,21,20,98,-1,98,99,21,-1,16,17,14,-1,14,15,16,-1,98,20,22,-1,22,97,98,-1,19,1,2,-1,2,18,19,-1,3,0,24,-1,24,23,3,-1,5,6,11,-1,11,8,5,-1,7,4,26,-1,26,25,7,-1,13,14,28,-1,28,27,13,-1,15,12,22,-1,22,20,15,-1,29,17,96,-1,96,100,29,-1,95,16,21,-1,21,99,95,-1,24,0,7,-1,7,25,24,-1,6,1,19,-1,19,11,6,-1,21,16,15,-1,15,20,21,-1,14,17,29,-1,29,28,14,-1,24,30,31,-1,31,23,24,-1,26,32,33,-1,33,25,26,-1,34,27,28,-1,28,35,34,-1,29,100,101,-1,101,36,29,-1,37,39,33,-1,33,32,37,-1,36,101,38,-1,38,35,36,-1,24,25,33,-1,33,30,24,-1,36,35,28,-1,28,29,36,-1,30,33,39,-1,39,31,30,-1,102,34,35,-1,35,38,102,-1,41,40,47,-1,47,42,41,-1,44,43,46,-1,46,45,44,-1,48,53,47,-1,47,40,48,-1,49,46,43,-1,43,50,49,-1,103,44,45,-1,45,104,103,-1,12,52,51,-1,51,22,12,-1,9,55,54,-1,54,8,9,-1,4,59,56,-1,56,26,4,-1,22,51,105,-1,105,97,22,-1,13,57,52,-1,52,12,13,-1,27,58,57,-1,57,13,27,-1,8,54,62,-1,62,5,8,-1,102,61,60,-1,60,34,102,-1,34,60,58,-1,58,27,34,-1,26,56,63,-1,63,32,26,-1,32,63,64,-1,64,37,32,-1,63,56,67,-1,40,125,127,-1,127,48,40,-1,103,126,128,-1,128,44,103,-1,44,128,129,-1,129,43,44,-1,129,130,50,-1,50,43,129,-1,131,124,41,-1,41,73,131,-1,56,59,74,-1,74,67,56,-1,67,74,76,-1,76,68,67,-1,106,107,69,-1,69,65,106,-1,65,69,70,-1,70,66,65,-1,66,70,61,-1,52,72,71,-1,71,51,52,-1,55,86,85,-1,85,54,55,-1,51,71,108,-1,108,105,51,-1,57,75,72,-1,72,52,57,-1,62,54,85,-1,85,87,62,-1,58,60,70,-1,70,77,58,-1,78,71,72,-1,72,79,78,-1,79,72,75,-1,75,80,79,-1,81,80,75,-1,75,77,81,-1,82,70,69,-1,69,83,82,-1,83,69,107,-1,107,84,83,-1,88,76,74,-1,74,89,88,-1,90,89,74,-1,74,87,90,-1,91,85,86,-1,86,92,91,-1,109,108,71,-1,71,78,109,-1,73,41,42,-1,42,93,73,-1,124,125,40,-1,40,41,124,-1,58,77,75,-1,75,57,58,-1,82,81,77,-1,77,70,82,-1,61,70,60,-1,59,62,87,-1,87,74,59,-1,91,90,87,-1,87,85,91,-1,5,62,59,-1,59,4,5,-1,49,104,45,-1,45,46,49,-1,93,42,47,-1,47,53,93,-1,78,79,111,-1,111,112,78,-1,109,78,112,-1,112,113,109,-1,91,92,114,-1,114,115,91,-1,90,91,115,-1,115,116,90,-1,89,90,116,-1,116,117,89,-1,88,89,117,-1,117,118,88,-1,83,84,119,-1,119,120,83,-1,82,83,120,-1,120,121,82,-1,81,82,121,-1,121,122,81,-1,80,81,122,-1,122,123,80,-1,80,123,111,-1,111,79,80,-1,112,111,110,-1,113,112,110,-1,115,114,94,-1,116,115,94,-1,117,116,94,-1,118,117,94,-1,120,119,110,-1,121,120,110,-1,122,121,110,-1,123,122,110,-1,111,123,110,-1}, 792);
SoCoordinate* SoCoordinate189 = new SoCoordinate();
SoCoordinate189->setPoint(new float[]{0.0484,-2.669,-1.109,-0.5122,-2.536,-1.211,-0.0389,-3.633,-0.9447,-0.3887,-3.753,-1.019,-0.2345,-2.6,-1.283,-0.1638,-3.794,-1.017,0.0097,-3.197,-1.071,-0.5439,-3.335,-1.193,-0.2598,-3.267,-1.236,-0.7593,-2.661,-0.6786,-0.8727,-2.789,-0.0285,-0.027,-2.955,-0.0639,-0.0035,-2.833,-0.7125,-0.2448,-4.088,-0.0434,-0.1763,-3.945,-0.5948,-0.6318,-4.095,-0.5705,-0.6436,-4.232,-0.0154,-0.4108,-4.136,-0.5685,-0.4432,-4.282,-0.0213,-0.0778,-3.4,-0.6804,-0.1499,-3.521,-0.0474,-0.8092,-3.775,-0.0027,-0.7549,-3.656,-0.6552,0.1145,-2.854,1.064,0.0184,-2.931,0.5665,-0.4652,-2.795,1.179,-0.7695,-2.852,0.6593,0.0912,-3.841,1.006,-0.1328,-4.068,0.6052,-0.2484,-3.879,1.085,-0.5776,-4.178,0.6005,-0.1741,-2.777,1.307,-0.391,-4.211,0.5892,-0.0222,-3.9,1.103,0.0911,-3.456,1.078,-0.0933,-3.543,0.5804,-0.7321,-3.726,0.6506,-0.398,-3.466,1.192,-0.1303,-3.384,1.244,0.6275,-1.818,1.199,0.5455,-1.716,1.771,0.1596,-1.86,1.723,0.7564,-1.71,1.391,0.7176,-2.41,1.495,0.5088,-2.502,1.493,0.4454,-2.494,1.856,0.673,-2.397,1.84,0.473,-2.597,1.729,0.7943,-2.454,1.703,0.1488,-1.898,-1.075,-0.4772,-1.692,-1.126,-0.1582,-1.743,-1.206,-0.7034,-1.791,-0.6081,-0.7947,-1.854,-0.0135,0.271,-1.977,0.5803,0.046,-1.962,1.525,0.535,-0.7519,0.1207,0.5847,-0.501,0.619,0.2218,-2.022,-0.0712,0.2651,-0.39,0.9595,-0.3059,-0.5187,0.9004,-0.4249,-1.7,1.165,0.3218,-0.8135,-0.8924,-0.3755,-0.7445,-0.9185,-0.0375,-0.8231,-1.06,-0.5692,-0.6704,-0.4588,-0.6362,-0.6574,-0.0168,0.3398,-2.013,1.232,-0.7147,-1.78,0.6911,-0.5559,-0.6254,0.574,0.1664,-1.961,-0.6946,0.3867,-0.8083,-0.483,-0.2263,-0.0176,-0.602,-0.4134,-0.0056,-0.3313,-0.4772,-0.024,0.0197,-0.2029,-0.0192,0.6487,0.19,-0.1026,0.6875,0.4637,-0.2014,0.4306,0.4649,-0.2436,0.0672,0.3571,-0.187,-0.6047,0.085,-0.0795,-0.6916,-0.3677,0.0022,0.4139,0.4441,-0.2482,-0.2847,0.073,0.7042,0.0189,-0.3553,0.5674,-0.2789,-0.1929,0.5039,-0.5229,0.0913,0.5001,-0.6061,0.3468,0.3753,-0.5281,0.426,0.3319,-0.2365,0.445,0.3505,0.0842,0.4357,0.3809,0.4215,0.1945,0.479,0.6494,-0.1635,0.555,0.614,-0.3158,0.5745,0.4038,-0.4135,0.5506,0.0409,0.3174,-1.934,1.03,0.6016,-1.397,0.7368,0.7178,-1.192,1.035,0.4234,-1.114,1.502,-0.0707,-1.244,1.455,-0.1435,-1.576,1.365}, 303);
SoIndexedFaceSet188->setCoord(*SoCoordinate189);

SoTextureCoordinate* SoTextureCoordinate190 = new SoTextureCoordinate();
SoTextureCoordinate190->setPoint(new float[]{0.205,0.0658,0.1911,0.0707,0.1929,0.0623,0.2056,0.0584,0.204,0.0979,0.1894,0.0993,0.192,0.0812,0.2042,0.0782,0.1776,0.102,0.1691,0.1049,0.1722,0.0826,0.1792,0.0874,0.3576,0.0677,0.343,0.0677,0.3369,0.0378,0.3508,0.0394,0.3485,0.0301,0.3351,0.0289,0.1792,0.0721,0.1812,0.0788,0.3676,0.0436,0.3644,0.0343,0.3736,0.0676,0.2203,0.0605,0.2197,0.0666,0.2201,0.078,0.219,0.1006,0.3267,0.0697,0.3206,0.0416,0.3198,0.0314,0.2336,0.0701,0.2372,0.0664,0.237,0.1032,0.2337,0.0796,0.3092,0.0748,0.3062,0.0477,0.3048,0.0377,0.2463,0.1043,0.2993,0.0488,0.2421,0.0791,0.2419,0.1525,0.245,0.146,0.2625,0.1471,0.2867,0.1169,0.2863,0.1262,0.2719,0.1174,0.2719,0.1139,0.2586,0.1504,0.2416,0.1569,0.2696,0.112,0.2872,0.1121,0.3743,0.0911,0.3595,0.0892,0.2607,0.1541,0.1763,0.1313,0.1685,0.1288,0.2183,0.1225,0.3466,0.0922,0.3303,0.0955,0.2026,0.1199,0.3166,0.1021,0.3105,0.1115,0.1871,0.1227,0.2339,0.1345,0.2426,0.131,0.3089,0.1341,0.3091,0.123,0.2198,0.1467,0.2215,0.1552,0.3263,0.1386,0.3306,0.13,0.3736,0.1115,0.3601,0.1093,0.2498,0.1434,0.2005,0.1594,0.3526,0.1164,0.2108,0.1652,0.34,0.1206,0.3704,0.1321,0.3627,0.1306,0.356,0.1306,0.3496,0.1334,0.3443,0.1351,0.3407,0.1419,0.3435,0.1517,0.1768,0.1527,0.1675,0.1496,0.1846,0.1543,0.1988,0.1786,0.1926,0.1765,0.186,0.1735,0.1794,0.1722,0.174,0.1741,0.2658,0.1458,0.1866,0.1875,0.3498,0.025,0.3342,0.0242,0.3818,0.0652,0.3741,0.0425,0.3678,0.0299,0.3176,0.0272,0.3004,0.0345,0.3029,0.0766,0.2847,0.135,0.2695,0.1219,0.3863,0.0903,0.3064,0.1439,0.3237,0.1509,0.3852,0.1126,0.3751,0.1362,0.3572,0.1421,0.36,0.1363,0.3638,0.1371,0.3662,0.1391,0.1803,0.1808,0.183,0.1798,0.1863,0.1805,0.1896,0.182,0.1927,0.183,0.3504,0.1469,0.349,0.142,0.3508,0.1386,0.3534,0.1377,0.3566,0.1363,0.2339,0.1345,0.2198,0.1467,0.3064,0.1439,0.2215,0.1552,0.3089,0.1341,0.3091,0.123,0.3105,0.1115,0.2426,0.131}, 264);
SoIndexedFaceSet188->setTexCoord(*SoTextureCoordinate190);

SoShape184->setGeometry(*SoIndexedFaceSet188);

SoTransform183->addChild(*SoShape184);

SoHAnimSegment182->addChild(*SoTransform183);

SoHAnimJoint181->addChildren(*SoHAnimSegment182);

SoHAnimJoint171->addChildren(*SoHAnimJoint181);

SoHAnimJoint161->addChildren(*SoHAnimJoint171);

SoHAnimJoint121->addChildren(*SoHAnimJoint161);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->X3DNode::setName(QString("vl5"));
SoHAnimJoint191->setDEF(QString("hanim_vl5"));
SoHAnimJoint191->setCenter(new float[]{0.0,36.869999,-1.035});
SoHAnimJoint191->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint191->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment192 = new SoHAnimSegment();
SoHAnimSegment192->X3DNode::setName(QString("l5"));
SoHAnimSegment192->setDEF(QString("hanim_l5"));
SoTransform* SoTransform193 = new SoTransform();
SoTransform193->setTranslation(new float[]{0.0,36.869999,-1.035});
SoShape* SoShape194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance195 = new SoVRMLAppearance();
SoMaterial* SoMaterial196 = new SoMaterial();
SoMaterial196->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance195->addChild(*SoMaterial196);

SoImageTexture* SoImageTexture197 = new SoImageTexture();
SoImageTexture197->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance195->addChild(*SoImageTexture197);

SoShape194->addChild(*SoVRMLAppearance195);

SoIndexedFaceSet* SoIndexedFaceSet198 = new SoIndexedFaceSet();
SoIndexedFaceSet198->setCoordIndex(new int32_t[]{32,6,7,-1,7,33,32,-1,51,52,5,-1,5,0,51,-1,38,20,19,-1,19,37,38,-1,41,42,6,-1,6,75,41,-1,11,83,84,-1,84,12,11,-1,7,39,40,-1,40,4,7,-1,36,18,20,-1,20,38,36,-1,32,31,29,-1,29,6,32,-1,34,33,7,-1,7,4,34,-1,17,8,53,-1,53,54,17,-1,16,24,25,-1,25,11,16,-1,12,9,16,-1,16,11,12,-1,84,88,58,-1,58,12,84,-1,280,281,13,-1,13,58,280,-1,13,14,15,-1,15,9,13,-1,10,26,24,-1,24,16,10,-1,9,15,10,-1,10,16,9,-1,12,58,13,-1,13,9,12,-1,76,78,172,-1,172,169,76,-1,77,292,293,-1,293,171,77,-1,81,80,166,-1,166,167,81,-1,82,79,168,-1,168,170,82,-1,10,15,17,-1,14,303,304,-1,304,8,14,-1,20,5,3,-1,3,19,20,-1,18,0,5,-1,5,20,18,-1,19,3,174,-1,174,91,19,-1,4,30,35,-1,35,34,4,-1,15,14,8,-1,8,17,15,-1,10,17,1,-1,1,26,10,-1,36,23,21,-1,21,18,36,-1,22,0,18,-1,18,21,22,-1,56,55,22,-1,22,1,56,-1,21,24,26,-1,26,22,21,-1,1,22,26,-1,27,37,89,-1,89,175,27,-1,29,38,37,-1,37,27,29,-1,4,2,28,-1,28,30,4,-1,31,36,38,-1,38,29,31,-1,28,2,86,-1,86,85,28,-1,19,91,89,-1,89,37,19,-1,68,69,45,-1,45,44,68,-1,46,70,325,-1,325,326,46,-1,43,71,72,-1,72,49,43,-1,48,47,73,-1,73,74,48,-1,45,69,71,-1,71,43,45,-1,44,48,74,-1,74,68,44,-1,49,72,70,-1,70,46,49,-1,50,2,4,-1,4,40,50,-1,42,39,7,-1,7,6,42,-1,76,79,52,-1,52,51,76,-1,77,80,54,-1,54,53,77,-1,0,22,55,-1,55,51,0,-1,8,304,336,-1,336,53,8,-1,1,17,54,-1,54,56,1,-1,57,3,5,-1,5,52,57,-1,56,81,78,-1,78,55,56,-1,57,82,92,-1,92,60,57,-1,33,150,149,-1,149,32,33,-1,34,151,150,-1,150,33,34,-1,35,152,151,-1,151,34,35,-1,25,153,152,-1,152,35,25,-1,156,164,161,-1,161,153,156,-1,156,154,162,-1,162,164,156,-1,31,155,154,-1,154,36,31,-1,31,32,149,-1,149,155,31,-1,41,75,350,-1,350,349,41,-1,3,57,60,-1,60,174,3,-1,86,87,353,-1,353,351,86,-1,303,14,13,-1,13,281,303,-1,47,176,165,-1,165,73,47,-1,68,61,62,-1,62,69,68,-1,70,63,357,-1,357,325,70,-1,71,64,65,-1,65,72,71,-1,73,66,67,-1,67,74,73,-1,69,62,64,-1,64,71,69,-1,74,67,61,-1,61,68,74,-1,72,65,63,-1,63,70,72,-1,66,73,165,-1,165,90,66,-1,75,27,175,-1,175,350,75,-1,29,27,75,-1,75,6,29,-1,169,168,79,-1,79,76,169,-1,171,166,80,-1,80,77,171,-1,81,167,172,-1,172,78,81,-1,82,170,173,-1,173,92,82,-1,51,55,78,-1,78,76,51,-1,53,336,292,-1,292,77,53,-1,56,54,80,-1,80,81,56,-1,57,52,79,-1,79,82,57,-1,83,30,28,-1,28,84,83,-1,84,28,85,-1,85,88,84,-1,351,362,85,-1,85,86,351,-1,2,50,87,-1,87,86,2,-1,362,363,88,-1,88,85,362,-1,363,280,58,-1,58,88,363,-1,25,24,21,-1,21,23,25,-1,25,35,30,-1,30,83,25,-1,83,11,25,-1,93,94,102,-1,102,101,93,-1,94,95,103,-1,103,102,94,-1,95,96,104,-1,104,103,95,-1,96,97,105,-1,105,104,96,-1,97,98,106,-1,106,105,97,-1,98,99,107,-1,107,106,98,-1,99,100,108,-1,108,107,99,-1,100,93,101,-1,101,108,100,-1,101,102,110,-1,110,109,101,-1,102,103,111,-1,111,110,102,-1,103,104,112,-1,112,111,103,-1,104,105,113,-1,113,112,104,-1,105,106,114,-1,114,113,105,-1,106,107,115,-1,115,114,106,-1,107,108,116,-1,116,115,107,-1,108,101,109,-1,109,116,108,-1,109,110,118,-1,118,117,109,-1,110,111,119,-1,119,118,110,-1,111,112,120,-1,120,119,111,-1,112,113,121,-1,121,120,112,-1,113,114,122,-1,122,121,113,-1,114,115,123,-1,123,122,114,-1,115,116,124,-1,124,123,115,-1,116,109,117,-1,117,124,116,-1,117,118,126,-1,126,125,117,-1,118,119,127,-1,127,126,118,-1,119,120,128,-1,128,127,119,-1,120,121,129,-1,129,128,120,-1,121,122,130,-1,130,129,121,-1,122,123,131,-1,131,130,122,-1,123,124,132,-1,132,131,123,-1,124,117,125,-1,125,132,124,-1,125,126,141,-1,141,142,125,-1,126,127,143,-1,143,141,126,-1,128,144,143,-1,143,127,128,-1,129,145,144,-1,144,128,129,-1,130,146,145,-1,145,129,130,-1,131,147,146,-1,146,130,131,-1,131,132,148,-1,148,147,131,-1,132,125,142,-1,142,148,132,-1,99,98,97,-1,97,96,95,-1,95,94,93,-1,97,95,93,-1,99,97,93,-1,100,99,93,-1,134,135,136,-1,136,137,138,-1,138,139,140,-1,136,138,140,-1,134,136,140,-1,133,134,140,-1,134,133,142,-1,142,141,134,-1,135,134,141,-1,141,143,135,-1,144,136,135,-1,135,143,144,-1,145,137,136,-1,136,144,145,-1,146,138,137,-1,137,145,146,-1,147,139,138,-1,138,146,147,-1,140,139,147,-1,147,148,140,-1,133,140,148,-1,148,142,133,-1,150,158,157,-1,157,149,150,-1,151,159,158,-1,158,150,151,-1,152,160,159,-1,159,151,152,-1,153,161,160,-1,160,152,153,-1,155,163,162,-1,162,154,155,-1,155,149,157,-1,157,163,155,-1,23,156,153,-1,153,25,23,-1,23,36,154,-1,154,156,23,-1,164,59,161,-1,162,59,164,-1,158,59,157,-1,159,59,158,-1,160,59,159,-1,161,59,160,-1,163,59,162,-1,157,59,163,-1,62,61,169,-1,169,172,62,-1,357,63,171,-1,171,293,357,-1,65,64,167,-1,167,166,65,-1,67,66,170,-1,170,168,67,-1,61,67,168,-1,168,169,61,-1,63,65,166,-1,166,171,63,-1,167,64,62,-1,62,172,167,-1,66,90,173,-1,173,170,66,-1,177,178,182,-1,182,186,177,-1,178,179,183,-1,183,182,178,-1,179,432,433,-1,433,183,179,-1,181,185,184,-1,184,180,181,-1,177,186,185,-1,185,181,177,-1,187,191,186,-1,186,182,187,-1,188,187,182,-1,182,183,188,-1,189,442,443,-1,443,184,189,-1,189,184,185,-1,185,190,189,-1,190,185,186,-1,186,191,190,-1,193,192,191,-1,191,187,193,-1,194,193,187,-1,187,188,194,-1,190,196,195,-1,195,189,190,-1,191,192,196,-1,196,190,191,-1,180,184,443,-1,443,198,180,-1,197,188,183,-1,183,433,197,-1,194,188,197,-1,197,450,194,-1,189,195,451,-1,451,442,189,-1,200,199,192,-1,192,193,200,-1,203,200,193,-1,193,194,203,-1,196,202,201,-1,201,195,196,-1,192,199,202,-1,202,196,192,-1,195,201,457,-1,457,451,195,-1,203,194,450,-1,450,458,203,-1,40,39,199,-1,199,200,40,-1,50,40,200,-1,200,203,50,-1,42,41,201,-1,201,202,42,-1,39,42,202,-1,202,199,39,-1,87,50,203,-1,203,458,87,-1,41,349,457,-1,457,201,41,-1,353,87,458,-1,206,238,239,-1,239,204,206,-1,209,206,204,-1,204,208,209,-1,206,209,210,-1,206,210,211,-1,206,211,212,-1,212,240,238,-1,238,206,212,-1,207,213,214,-1,207,214,215,-1,207,215,216,-1,217,205,207,-1,207,216,217,-1,219,209,208,-1,208,218,219,-1,220,210,209,-1,209,219,220,-1,221,211,210,-1,210,220,221,-1,222,212,211,-1,211,221,222,-1,222,241,240,-1,240,212,222,-1,224,214,213,-1,213,223,224,-1,225,215,214,-1,214,224,225,-1,226,216,215,-1,215,225,226,-1,227,217,216,-1,216,226,227,-1,229,219,218,-1,218,228,229,-1,230,220,219,-1,219,229,230,-1,231,221,220,-1,220,230,231,-1,232,222,221,-1,221,231,232,-1,232,242,241,-1,241,222,232,-1,234,224,223,-1,223,233,234,-1,235,225,224,-1,224,234,235,-1,236,226,225,-1,225,235,236,-1,237,227,226,-1,226,236,237,-1,207,205,239,-1,239,238,207,-1,213,207,238,-1,238,240,213,-1,223,213,240,-1,240,241,223,-1,233,223,241,-1,241,242,233,-1,243,246,245,-1,245,244,243,-1,248,247,250,-1,250,249,248,-1,252,251,254,-1,254,253,252,-1,255,257,244,-1,244,256,255,-1,259,258,261,-1,261,260,259,-1,245,262,264,-1,264,263,245,-1,265,252,253,-1,253,266,265,-1,243,244,268,-1,268,267,243,-1,269,262,245,-1,245,246,269,-1,270,273,272,-1,272,271,270,-1,274,259,276,-1,276,275,274,-1,258,259,274,-1,274,277,258,-1,261,258,279,-1,279,278,261,-1,280,279,282,-1,282,281,280,-1,282,277,284,-1,284,283,282,-1,285,274,275,-1,275,286,285,-1,277,274,285,-1,285,284,277,-1,258,277,282,-1,282,279,258,-1,287,290,289,-1,289,288,287,-1,291,294,293,-1,293,292,291,-1,295,298,297,-1,297,296,295,-1,299,302,301,-1,301,300,299,-1,285,270,284,-1,283,271,304,-1,304,303,283,-1,253,254,305,-1,305,250,253,-1,266,253,250,-1,250,247,266,-1,254,91,174,-1,174,305,254,-1,262,269,307,-1,307,306,262,-1,284,270,271,-1,271,283,284,-1,285,286,308,-1,308,270,285,-1,265,266,310,-1,310,309,265,-1,311,310,266,-1,266,247,311,-1,312,308,311,-1,311,313,312,-1,310,311,286,-1,286,275,310,-1,308,286,311,-1,314,175,89,-1,89,251,314,-1,268,314,251,-1,251,252,268,-1,262,306,316,-1,316,315,262,-1,267,268,252,-1,252,265,267,-1,316,318,317,-1,317,315,316,-1,254,251,89,-1,89,91,254,-1,320,319,322,-1,322,321,320,-1,323,326,325,-1,325,324,323,-1,327,330,329,-1,329,328,327,-1,331,334,333,-1,333,332,331,-1,322,327,328,-1,328,321,322,-1,319,320,334,-1,334,331,319,-1,330,323,324,-1,324,329,330,-1,335,264,262,-1,262,315,335,-1,256,244,245,-1,245,263,256,-1,287,248,249,-1,249,300,287,-1,291,272,273,-1,273,296,291,-1,247,248,313,-1,313,311,247,-1,271,272,336,-1,336,304,271,-1,308,312,273,-1,273,270,308,-1,337,249,250,-1,250,305,337,-1,312,313,288,-1,288,295,312,-1,337,60,92,-1,92,299,337,-1,246,243,339,-1,339,338,246,-1,269,246,338,-1,338,340,269,-1,307,269,340,-1,340,341,307,-1,276,307,341,-1,341,342,276,-1,343,342,345,-1,345,344,343,-1,343,344,347,-1,347,346,343,-1,267,265,346,-1,346,348,267,-1,267,348,339,-1,339,243,267,-1,255,349,350,-1,350,257,255,-1,305,174,60,-1,60,337,305,-1,317,351,353,-1,353,352,317,-1,303,281,282,-1,282,283,303,-1,332,333,165,-1,165,176,332,-1,320,321,355,-1,355,354,320,-1,324,325,357,-1,357,356,324,-1,328,329,359,-1,359,358,328,-1,333,334,361,-1,361,360,333,-1,321,328,358,-1,358,355,321,-1,334,320,354,-1,354,361,334,-1,329,324,356,-1,356,359,329,-1,360,90,165,-1,165,333,360,-1,257,350,175,-1,175,314,257,-1,268,244,257,-1,257,314,268,-1,290,287,300,-1,300,301,290,-1,294,291,296,-1,296,297,294,-1,295,288,289,-1,289,298,295,-1,299,92,173,-1,173,302,299,-1,248,287,288,-1,288,313,248,-1,272,291,292,-1,292,336,272,-1,312,295,296,-1,296,273,312,-1,337,299,300,-1,300,249,337,-1,260,261,316,-1,316,306,260,-1,261,278,318,-1,318,316,261,-1,351,317,318,-1,318,362,351,-1,315,317,352,-1,352,335,315,-1,362,318,278,-1,278,363,362,-1,363,278,279,-1,279,280,363,-1,276,309,310,-1,310,275,276,-1,276,260,306,-1,306,307,276,-1,260,276,259,-1,364,367,366,-1,366,365,364,-1,365,366,369,-1,369,368,365,-1,368,369,371,-1,371,370,368,-1,370,371,373,-1,373,372,370,-1,372,373,375,-1,375,374,372,-1,374,375,377,-1,377,376,374,-1,376,377,379,-1,379,378,376,-1,378,379,367,-1,367,364,378,-1,367,381,380,-1,380,366,367,-1,366,380,382,-1,382,369,366,-1,369,382,383,-1,383,371,369,-1,371,383,384,-1,384,373,371,-1,373,384,385,-1,385,375,373,-1,375,385,386,-1,386,377,375,-1,377,386,387,-1,387,379,377,-1,379,387,381,-1,381,367,379,-1,381,389,388,-1,388,380,381,-1,380,388,390,-1,390,382,380,-1,382,390,391,-1,391,383,382,-1,383,391,392,-1,392,384,383,-1,384,392,393,-1,393,385,384,-1,385,393,394,-1,394,386,385,-1,386,394,395,-1,395,387,386,-1,387,395,389,-1,389,381,387,-1,389,397,396,-1,396,388,389,-1,388,396,398,-1,398,390,388,-1,390,398,399,-1,399,391,390,-1,391,399,400,-1,400,392,391,-1,392,400,401,-1,401,393,392,-1,393,401,402,-1,402,394,393,-1,394,402,403,-1,403,395,394,-1,395,403,397,-1,397,389,395,-1,397,405,404,-1,404,396,397,-1,396,404,406,-1,406,398,396,-1,399,398,406,-1,406,407,399,-1,400,399,407,-1,407,408,400,-1,401,400,408,-1,408,409,401,-1,402,401,409,-1,409,410,402,-1,402,410,411,-1,411,403,402,-1,403,411,405,-1,405,397,403,-1,364,365,368,-1,368,370,372,-1,364,368,372,-1,372,374,376,-1,364,372,376,-1,378,364,376,-1,419,418,417,-1,417,416,415,-1,419,417,415,-1,415,414,413,-1,419,415,413,-1,412,419,413,-1,413,404,405,-1,405,412,413,-1,414,406,404,-1,404,413,414,-1,407,406,414,-1,414,415,407,-1,408,407,415,-1,415,416,408,-1,409,408,416,-1,416,417,409,-1,410,409,417,-1,417,418,410,-1,419,411,410,-1,410,418,419,-1,412,405,411,-1,411,419,412,-1,338,339,421,-1,421,420,338,-1,340,338,420,-1,420,422,340,-1,341,340,422,-1,422,423,341,-1,342,341,423,-1,423,345,342,-1,348,346,347,-1,347,424,348,-1,348,424,421,-1,421,339,348,-1,309,276,342,-1,342,343,309,-1,309,343,346,-1,346,265,309,-1,344,345,425,-1,347,344,425,-1,420,421,425,-1,422,420,425,-1,423,422,425,-1,345,423,425,-1,424,347,425,-1,421,424,425,-1,355,289,290,-1,290,354,355,-1,357,293,294,-1,294,356,357,-1,359,297,298,-1,298,358,359,-1,361,301,302,-1,302,360,361,-1,354,290,301,-1,301,361,354,-1,356,294,297,-1,297,359,356,-1,298,289,355,-1,355,358,298,-1,360,302,173,-1,173,90,360,-1,426,429,428,-1,428,427,426,-1,427,428,431,-1,431,430,427,-1,430,431,433,-1,433,432,430,-1,435,434,437,-1,437,436,435,-1,426,435,436,-1,436,429,426,-1,438,428,429,-1,429,439,438,-1,440,431,428,-1,428,438,440,-1,441,437,443,-1,443,442,441,-1,441,444,436,-1,436,437,441,-1,444,439,429,-1,429,436,444,-1,445,438,439,-1,439,446,445,-1,447,440,438,-1,438,445,447,-1,444,441,449,-1,449,448,444,-1,439,444,448,-1,448,446,439,-1,434,198,443,-1,443,437,434,-1,197,433,431,-1,431,440,197,-1,447,450,197,-1,197,440,447,-1,441,442,451,-1,451,449,441,-1,452,445,446,-1,446,453,452,-1,454,447,445,-1,445,452,454,-1,448,449,456,-1,456,455,448,-1,446,448,455,-1,455,453,446,-1,449,451,457,-1,457,456,449,-1,454,458,450,-1,450,447,454,-1,264,452,453,-1,453,263,264,-1,335,454,452,-1,452,264,335,-1,256,455,456,-1,456,255,256,-1,263,453,455,-1,455,256,263,-1,352,458,454,-1,454,335,352,-1,255,456,457,-1,457,349,255,-1,353,458,352,-1,460,459,462,-1,462,461,460,-1,464,463,459,-1,459,460,464,-1,460,465,464,-1,460,466,465,-1,460,467,466,-1,467,460,461,-1,461,468,467,-1,469,471,470,-1,469,472,471,-1,469,473,472,-1,474,473,469,-1,469,475,474,-1,477,476,463,-1,463,464,477,-1,478,477,464,-1,464,465,478,-1,479,478,465,-1,465,466,479,-1,480,479,466,-1,466,467,480,-1,480,467,468,-1,468,481,480,-1,483,482,470,-1,470,471,483,-1,484,483,471,-1,471,472,484,-1,485,484,472,-1,472,473,485,-1,486,485,473,-1,473,474,486,-1,488,487,476,-1,476,477,488,-1,489,488,477,-1,477,478,489,-1,490,489,478,-1,478,479,490,-1,491,490,479,-1,479,480,491,-1,491,480,481,-1,481,492,491,-1,494,493,482,-1,482,483,494,-1,495,494,483,-1,483,484,495,-1,496,495,484,-1,484,485,496,-1,497,496,485,-1,485,486,497,-1,469,461,462,-1,462,475,469,-1,470,468,461,-1,461,469,470,-1,482,481,468,-1,468,470,482,-1,493,492,481,-1,481,482,493,-1}, 3680);
SoIndexedFaceSet198->setCreaseAngle(1.57);
SoIndexedFaceSet198->setTexCoordIndex(new int32_t[]{0,1,2,-1,2,3,0,-1,5,6,7,-1,7,4,5,-1,9,10,11,-1,11,8,9,-1,12,13,1,-1,1,14,12,-1,16,17,18,-1,18,15,16,-1,20,21,26,-1,26,19,20,-1,22,23,10,-1,10,9,22,-1,0,24,25,-1,25,1,0,-1,27,3,20,-1,20,19,27,-1,28,29,30,-1,30,31,28,-1,32,33,34,-1,34,16,32,-1,15,35,32,-1,32,16,15,-1,18,36,37,-1,37,15,18,-1,38,39,40,-1,40,37,38,-1,40,41,42,-1,42,35,40,-1,45,46,33,-1,33,32,45,-1,35,42,45,-1,45,32,35,-1,15,37,40,-1,40,35,15,-1,88,104,192,-1,192,189,88,-1,103,111,193,-1,193,191,103,-1,107,105,186,-1,186,187,107,-1,93,89,188,-1,188,190,93,-1,45,42,28,-1,41,56,57,-1,57,29,41,-1,10,7,53,-1,53,11,10,-1,23,4,7,-1,7,10,23,-1,11,53,54,-1,54,55,11,-1,19,58,62,-1,62,27,19,-1,42,41,29,-1,29,28,42,-1,45,28,63,-1,63,46,45,-1,22,59,60,-1,60,23,22,-1,61,4,23,-1,23,60,61,-1,67,68,61,-1,61,63,67,-1,60,33,46,-1,46,61,60,-1,63,61,46,-1,64,8,65,-1,65,66,64,-1,25,9,8,-1,8,64,25,-1,19,73,74,-1,74,58,19,-1,24,22,9,-1,9,25,24,-1,74,73,75,-1,75,76,74,-1,11,55,65,-1,65,8,11,-1,70,71,72,-1,72,69,70,-1,77,78,79,-1,79,80,77,-1,85,87,90,-1,90,91,85,-1,81,82,83,-1,83,84,81,-1,72,71,87,-1,87,85,72,-1,69,81,84,-1,84,70,69,-1,91,90,78,-1,78,77,91,-1,99,73,19,-1,19,26,99,-1,13,86,2,-1,2,1,13,-1,88,89,6,-1,6,5,88,-1,103,105,31,-1,31,30,103,-1,4,61,68,-1,68,5,4,-1,29,57,106,-1,106,30,29,-1,63,28,31,-1,31,67,63,-1,92,53,7,-1,7,6,92,-1,67,107,104,-1,104,68,67,-1,92,93,94,-1,94,95,92,-1,3,171,170,-1,170,0,3,-1,27,172,171,-1,171,3,27,-1,62,173,172,-1,172,27,62,-1,34,174,173,-1,173,62,34,-1,177,185,182,-1,182,174,177,-1,177,175,183,-1,183,185,177,-1,24,176,175,-1,175,22,24,-1,24,0,170,-1,170,176,24,-1,12,14,98,-1,98,97,12,-1,53,92,95,-1,95,54,53,-1,75,109,110,-1,110,108,75,-1,56,41,40,-1,40,39,56,-1,82,100,101,-1,101,83,82,-1,70,44,43,-1,43,71,70,-1,78,48,47,-1,47,79,78,-1,87,52,51,-1,51,90,87,-1,83,50,49,-1,49,84,83,-1,71,43,52,-1,52,87,71,-1,84,49,44,-1,44,70,84,-1,90,51,48,-1,48,78,90,-1,50,83,101,-1,101,102,50,-1,14,64,66,-1,66,98,14,-1,25,64,14,-1,14,1,25,-1,189,188,89,-1,89,88,189,-1,191,186,105,-1,105,103,191,-1,107,187,192,-1,192,104,107,-1,93,190,194,-1,194,94,93,-1,5,68,104,-1,104,88,5,-1,30,106,111,-1,111,103,30,-1,67,31,105,-1,105,107,67,-1,92,6,89,-1,89,93,92,-1,17,58,74,-1,74,18,17,-1,18,74,76,-1,76,36,18,-1,108,112,76,-1,76,75,108,-1,73,99,109,-1,109,75,73,-1,112,113,36,-1,36,76,112,-1,113,38,37,-1,37,36,113,-1,34,33,60,-1,60,59,34,-1,34,62,58,-1,58,17,34,-1,17,16,34,-1,114,115,116,-1,116,117,114,-1,115,118,119,-1,119,116,115,-1,118,120,121,-1,121,119,118,-1,120,122,123,-1,123,121,120,-1,122,124,125,-1,125,123,122,-1,124,126,127,-1,127,125,124,-1,126,128,129,-1,129,127,126,-1,128,114,117,-1,117,129,128,-1,117,116,130,-1,130,131,117,-1,116,119,132,-1,132,130,116,-1,119,121,133,-1,133,132,119,-1,121,123,134,-1,134,133,121,-1,123,125,135,-1,135,134,123,-1,125,127,136,-1,136,135,125,-1,127,129,137,-1,137,136,127,-1,129,117,131,-1,131,137,129,-1,131,130,138,-1,138,139,131,-1,130,132,140,-1,140,138,130,-1,132,133,141,-1,141,140,132,-1,133,134,142,-1,142,141,133,-1,134,135,143,-1,143,142,134,-1,135,136,144,-1,144,143,135,-1,136,137,145,-1,145,144,136,-1,137,131,139,-1,139,145,137,-1,139,138,146,-1,146,147,139,-1,138,140,148,-1,148,146,138,-1,140,141,149,-1,149,148,140,-1,141,142,150,-1,150,149,141,-1,142,143,151,-1,151,150,142,-1,143,144,152,-1,152,151,143,-1,144,145,153,-1,153,152,144,-1,145,139,147,-1,147,153,145,-1,147,146,154,-1,154,155,147,-1,146,148,156,-1,156,154,146,-1,149,157,156,-1,156,148,149,-1,150,158,157,-1,157,149,150,-1,151,159,158,-1,158,150,151,-1,152,160,159,-1,159,151,152,-1,152,153,161,-1,161,160,152,-1,153,147,155,-1,155,161,153,-1,126,124,122,-1,122,120,118,-1,118,115,114,-1,122,118,114,-1,126,122,114,-1,128,126,114,-1,163,164,165,-1,165,166,167,-1,167,168,169,-1,165,167,169,-1,163,165,169,-1,162,163,169,-1,163,162,155,-1,155,154,163,-1,164,163,154,-1,154,156,164,-1,157,165,164,-1,164,156,157,-1,158,166,165,-1,165,157,158,-1,159,167,166,-1,166,158,159,-1,160,168,167,-1,167,159,160,-1,169,168,160,-1,160,161,169,-1,162,169,161,-1,161,155,162,-1,171,179,178,-1,178,170,171,-1,172,180,179,-1,179,171,172,-1,173,181,180,-1,180,172,173,-1,174,182,181,-1,181,173,174,-1,176,184,183,-1,183,175,176,-1,176,170,178,-1,178,184,176,-1,59,177,174,-1,174,34,59,-1,59,22,175,-1,175,177,59,-1,185,96,182,-1,183,96,185,-1,179,96,178,-1,180,96,179,-1,181,96,180,-1,182,96,181,-1,184,96,183,-1,178,96,184,-1,43,44,189,-1,189,192,43,-1,47,48,191,-1,191,193,47,-1,51,52,187,-1,187,186,51,-1,49,50,190,-1,190,188,49,-1,44,49,188,-1,188,189,44,-1,48,51,186,-1,186,191,48,-1,187,52,43,-1,43,192,187,-1,50,102,194,-1,194,190,50,-1,195,196,197,-1,197,198,195,-1,196,199,200,-1,200,197,196,-1,199,201,202,-1,202,200,199,-1,204,205,206,-1,206,203,204,-1,195,198,205,-1,205,204,195,-1,207,208,198,-1,198,197,207,-1,209,207,197,-1,197,200,209,-1,210,211,212,-1,212,206,210,-1,210,206,205,-1,205,213,210,-1,213,205,198,-1,198,208,213,-1,214,215,208,-1,208,207,214,-1,216,214,207,-1,207,209,216,-1,213,217,218,-1,218,210,213,-1,208,215,217,-1,217,213,208,-1,203,206,212,-1,212,219,203,-1,220,209,200,-1,200,202,220,-1,216,209,220,-1,220,221,216,-1,210,218,222,-1,222,211,210,-1,223,224,215,-1,215,214,223,-1,225,223,214,-1,214,216,225,-1,217,226,227,-1,227,218,217,-1,215,224,226,-1,226,217,215,-1,218,227,228,-1,228,222,218,-1,225,216,221,-1,221,229,225,-1,26,21,230,-1,230,231,26,-1,99,26,231,-1,231,232,99,-1,13,12,233,-1,233,234,13,-1,86,13,234,-1,234,235,86,-1,109,99,232,-1,232,236,109,-1,12,97,237,-1,237,233,12,-1,110,109,236,-1,240,272,273,-1,273,238,240,-1,243,240,238,-1,238,242,243,-1,240,243,244,-1,240,244,245,-1,240,245,246,-1,246,274,272,-1,272,240,246,-1,241,247,248,-1,241,248,249,-1,241,249,250,-1,251,239,241,-1,241,250,251,-1,253,243,242,-1,242,252,253,-1,254,244,243,-1,243,253,254,-1,255,245,244,-1,244,254,255,-1,256,246,245,-1,245,255,256,-1,256,275,274,-1,274,246,256,-1,258,248,247,-1,247,257,258,-1,259,249,248,-1,248,258,259,-1,260,250,249,-1,249,259,260,-1,261,251,250,-1,250,260,261,-1,263,253,252,-1,252,262,263,-1,264,254,253,-1,253,263,264,-1,265,255,254,-1,254,264,265,-1,266,256,255,-1,255,265,266,-1,266,276,275,-1,275,256,266,-1,268,258,257,-1,257,267,268,-1,269,259,258,-1,258,268,269,-1,270,260,259,-1,259,269,270,-1,271,261,260,-1,260,270,271,-1,241,239,273,-1,273,272,241,-1,247,241,272,-1,272,274,247,-1,257,247,274,-1,274,275,257,-1,267,257,275,-1,275,276,267,-1,277,280,279,-1,279,278,277,-1,282,281,284,-1,284,283,282,-1,286,285,288,-1,288,287,286,-1,289,291,278,-1,278,290,289,-1,293,292,295,-1,295,294,293,-1,297,296,299,-1,299,298,297,-1,300,286,287,-1,287,301,300,-1,277,278,303,-1,303,302,277,-1,304,296,297,-1,297,280,304,-1,305,308,307,-1,307,306,305,-1,309,293,311,-1,311,310,309,-1,292,293,309,-1,309,312,292,-1,295,292,314,-1,314,313,295,-1,315,314,317,-1,317,316,315,-1,317,312,319,-1,319,318,317,-1,320,309,310,-1,310,321,320,-1,312,309,320,-1,320,319,312,-1,292,312,317,-1,317,314,292,-1,322,325,324,-1,324,323,322,-1,326,329,328,-1,328,327,326,-1,330,333,332,-1,332,331,330,-1,334,337,336,-1,336,335,334,-1,320,305,319,-1,318,306,339,-1,339,338,318,-1,287,288,340,-1,340,284,287,-1,301,287,284,-1,284,281,301,-1,288,342,341,-1,341,340,288,-1,296,304,344,-1,344,343,296,-1,319,305,306,-1,306,318,319,-1,320,321,345,-1,345,305,320,-1,300,301,347,-1,347,346,300,-1,348,347,301,-1,301,281,348,-1,349,345,348,-1,348,350,349,-1,347,348,321,-1,321,310,347,-1,345,321,348,-1,351,353,352,-1,352,285,351,-1,303,351,285,-1,285,286,303,-1,296,343,355,-1,355,354,296,-1,302,303,286,-1,286,300,302,-1,355,357,356,-1,356,354,355,-1,288,285,352,-1,352,342,288,-1,359,358,361,-1,361,360,359,-1,362,365,364,-1,364,363,362,-1,366,369,368,-1,368,367,366,-1,370,373,372,-1,372,371,370,-1,361,366,367,-1,367,360,361,-1,358,359,373,-1,373,370,358,-1,369,362,363,-1,363,368,369,-1,374,299,296,-1,296,354,374,-1,290,278,279,-1,279,375,290,-1,322,282,283,-1,283,335,322,-1,326,307,308,-1,308,331,326,-1,281,282,350,-1,350,348,281,-1,306,307,376,-1,376,339,306,-1,345,349,308,-1,308,305,345,-1,377,283,284,-1,284,340,377,-1,349,350,323,-1,323,330,349,-1,377,379,378,-1,378,334,377,-1,280,277,381,-1,381,380,280,-1,304,280,380,-1,380,382,304,-1,344,304,382,-1,382,383,344,-1,311,344,383,-1,383,384,311,-1,385,384,387,-1,387,386,385,-1,385,386,389,-1,389,388,385,-1,302,300,388,-1,388,390,302,-1,302,390,381,-1,381,277,302,-1,289,391,392,-1,392,291,289,-1,340,341,379,-1,379,377,340,-1,356,393,395,-1,395,394,356,-1,338,316,317,-1,317,318,338,-1,371,372,397,-1,397,396,371,-1,359,360,399,-1,399,398,359,-1,363,364,401,-1,401,400,363,-1,367,368,403,-1,403,402,367,-1,372,373,405,-1,405,404,372,-1,360,367,402,-1,402,399,360,-1,373,359,398,-1,398,405,373,-1,368,363,400,-1,400,403,368,-1,404,406,397,-1,397,372,404,-1,291,392,353,-1,353,351,291,-1,303,278,291,-1,291,351,303,-1,325,322,335,-1,335,336,325,-1,329,326,331,-1,331,332,329,-1,330,323,324,-1,324,333,330,-1,334,378,407,-1,407,337,334,-1,282,322,323,-1,323,350,282,-1,307,326,327,-1,327,376,307,-1,349,330,331,-1,331,308,349,-1,377,334,335,-1,335,283,377,-1,294,295,355,-1,355,343,294,-1,295,313,357,-1,357,355,295,-1,393,356,357,-1,357,408,393,-1,354,356,394,-1,394,374,354,-1,408,357,313,-1,313,409,408,-1,409,313,314,-1,314,315,409,-1,311,346,347,-1,347,310,311,-1,311,294,343,-1,343,344,311,-1,294,311,293,-1,410,413,412,-1,412,411,410,-1,411,412,415,-1,415,414,411,-1,414,415,417,-1,417,416,414,-1,416,417,419,-1,419,418,416,-1,418,419,421,-1,421,420,418,-1,420,421,423,-1,423,422,420,-1,422,423,425,-1,425,424,422,-1,424,425,413,-1,413,410,424,-1,413,427,426,-1,426,412,413,-1,412,426,428,-1,428,415,412,-1,415,428,429,-1,429,417,415,-1,417,429,430,-1,430,419,417,-1,419,430,431,-1,431,421,419,-1,421,431,432,-1,432,423,421,-1,423,432,433,-1,433,425,423,-1,425,433,427,-1,427,413,425,-1,427,435,434,-1,434,426,427,-1,426,434,436,-1,436,428,426,-1,428,436,437,-1,437,429,428,-1,429,437,438,-1,438,430,429,-1,430,438,439,-1,439,431,430,-1,431,439,440,-1,440,432,431,-1,432,440,441,-1,441,433,432,-1,433,441,435,-1,435,427,433,-1,435,443,442,-1,442,434,435,-1,434,442,444,-1,444,436,434,-1,436,444,445,-1,445,437,436,-1,437,445,446,-1,446,438,437,-1,438,446,447,-1,447,439,438,-1,439,447,448,-1,448,440,439,-1,440,448,449,-1,449,441,440,-1,441,449,443,-1,443,435,441,-1,443,451,450,-1,450,442,443,-1,442,450,452,-1,452,444,442,-1,445,444,452,-1,452,453,445,-1,446,445,453,-1,453,454,446,-1,447,446,454,-1,454,455,447,-1,448,447,455,-1,455,456,448,-1,448,456,457,-1,457,449,448,-1,449,457,451,-1,451,443,449,-1,410,411,414,-1,414,416,418,-1,410,414,418,-1,418,420,422,-1,410,418,422,-1,424,410,422,-1,465,464,463,-1,463,462,461,-1,465,463,461,-1,461,460,459,-1,465,461,459,-1,458,465,459,-1,459,450,451,-1,451,458,459,-1,460,452,450,-1,450,459,460,-1,453,452,460,-1,460,461,453,-1,454,453,461,-1,461,462,454,-1,455,454,462,-1,462,463,455,-1,456,455,463,-1,463,464,456,-1,465,457,456,-1,456,464,465,-1,458,451,457,-1,457,465,458,-1,380,381,467,-1,467,466,380,-1,382,380,466,-1,466,468,382,-1,383,382,468,-1,468,469,383,-1,384,383,469,-1,469,387,384,-1,390,388,389,-1,389,470,390,-1,390,470,467,-1,467,381,390,-1,346,311,384,-1,384,385,346,-1,346,385,388,-1,388,300,346,-1,386,387,471,-1,389,386,471,-1,466,467,471,-1,468,466,471,-1,469,468,471,-1,387,469,471,-1,470,389,471,-1,467,470,471,-1,399,324,325,-1,325,398,399,-1,401,328,329,-1,329,400,401,-1,403,332,333,-1,333,402,403,-1,405,336,337,-1,337,404,405,-1,398,325,336,-1,336,405,398,-1,400,329,332,-1,332,403,400,-1,333,324,399,-1,399,402,333,-1,404,337,407,-1,407,406,404,-1,472,475,474,-1,474,473,472,-1,473,474,477,-1,477,476,473,-1,476,477,479,-1,479,478,476,-1,481,480,483,-1,483,482,481,-1,472,481,482,-1,482,475,472,-1,484,474,475,-1,475,485,484,-1,486,477,474,-1,474,484,486,-1,487,483,489,-1,489,488,487,-1,487,490,482,-1,482,483,487,-1,490,485,475,-1,475,482,490,-1,491,484,485,-1,485,492,491,-1,493,486,484,-1,484,491,493,-1,490,487,495,-1,495,494,490,-1,485,490,494,-1,494,492,485,-1,480,496,489,-1,489,483,480,-1,497,479,477,-1,477,486,497,-1,493,498,497,-1,497,486,493,-1,487,488,499,-1,499,495,487,-1,500,491,492,-1,492,501,500,-1,502,493,491,-1,491,500,502,-1,494,495,504,-1,504,503,494,-1,492,494,503,-1,503,501,492,-1,495,499,505,-1,505,504,495,-1,502,506,498,-1,498,493,502,-1,299,508,507,-1,507,298,299,-1,374,509,508,-1,508,299,374,-1,290,511,510,-1,510,289,290,-1,375,512,511,-1,511,290,375,-1,394,513,509,-1,509,374,394,-1,289,510,514,-1,514,391,289,-1,395,513,394,-1,516,515,518,-1,518,517,516,-1,520,519,515,-1,515,516,520,-1,516,521,520,-1,516,522,521,-1,516,523,522,-1,523,516,517,-1,517,524,523,-1,525,527,526,-1,525,528,527,-1,525,529,528,-1,530,529,525,-1,525,531,530,-1,533,532,519,-1,519,520,533,-1,534,533,520,-1,520,521,534,-1,535,534,521,-1,521,522,535,-1,536,535,522,-1,522,523,536,-1,536,523,524,-1,524,537,536,-1,539,538,526,-1,526,527,539,-1,540,539,527,-1,527,528,540,-1,541,540,528,-1,528,529,541,-1,542,541,529,-1,529,530,542,-1,544,543,532,-1,532,533,544,-1,545,544,533,-1,533,534,545,-1,546,545,534,-1,534,535,546,-1,547,546,535,-1,535,536,547,-1,547,536,537,-1,537,548,547,-1,550,549,538,-1,538,539,550,-1,551,550,539,-1,539,540,551,-1,552,551,540,-1,540,541,552,-1,553,552,541,-1,541,542,553,-1,525,517,518,-1,518,531,525,-1,526,524,517,-1,517,525,526,-1,538,537,524,-1,524,526,538,-1,549,548,537,-1,537,538,549,-1}, 3680);
SoCoordinate* SoCoordinate199 = new SoCoordinate();
SoCoordinate199->setPoint(new float[]{4.277,7.826,-2.023,3.736,7.524,2.038,1.964,13.63,1.831,1.171,7.822,-3.721,3.003,13.86,1.74,3.119,7.829,-3.386,3.599,14.88,-2.272,3.454,15.35,-0.2906,1.141,7.594,3.509,1.702,9.869,3.989,3.104,8.5,3.517,3.557,10.99,3.415,1.717,10.91,3.759,0.5679,9.683,3.766,0.746,8.455,3.729,1.941,8.411,3.737,3.498,9.915,3.61,2.545,7.576,3.29,4.399,9.141,-2.001,1.21,9.103,-3.685,3.142,9.12,-3.277,4.551,9.164,-0.0527,4.433,7.914,0.067,4.91,10.83,-0.2461,4.394,9.468,2.207,4.656,11.16,1.887,4.131,8.379,2.353,1.446,12.67,-3.483,1.966,12.51,2.721,3.572,12.75,-2.924,3.321,12.71,2.487,4.848,12.68,-2.238,5.062,14.31,-1.872,5.078,14.93,-0.2367,4.838,14.02,1.338,4.688,12.64,1.776,4.71,11.15,-1.805,1.324,11.04,-3.639,3.37,11.05,-3.145,2.782,15.39,-0.3671,2.369,14.83,0.4814,1.361,15.42,-2.398,2.416,15.53,-1.622,4.941,-1.602,2.267,5.071,-1.626,-2.412,5.525,-1.601,-0.0724,1.747,-1.67,3.844,1.495,-1.716,-4.445,3.571,-1.635,-4.009,3.511,-1.64,3.452,1.568,14.39,1.006,4.692,4.579,-2.112,3.28,4.466,-3.45,1.411,4.307,3.841,2.952,4.401,3.501,4.794,4.548,0.0209,4.27,4.487,2.173,1.248,4.431,-3.754,0.6396,10.67,3.595,6.326,12.2,-0.2397,0.0,4.4,-3.86,5.503,-0.6837,-2.468,5.798,-0.6529,0.0268,1.765,-0.797,4.325,5.23,-0.7329,2.447,3.772,-0.7961,3.716,1.41,-0.8547,-4.579,3.841,-0.7156,-4.176,5.29,-1.205,-2.527,5.62,-1.161,-0.0088,1.811,-1.28,4.296,5.089,-1.222,2.429,3.695,-1.265,3.681,1.358,-1.259,-4.679,3.635,-1.162,-4.234,1.432,14.75,-2.914,4.99,2.825,-2.225,1.575,2.532,3.984,5.127,2.818,-0.0142,3.467,2.614,-3.616,3.311,2.661,3.635,4.619,2.754,2.275,1.337,2.561,-3.972,3.524,11.67,3.075,1.791,11.59,3.387,0.6798,12.27,2.667,0.6343,13.35,1.902,0.5623,13.97,1.446,0.6742,11.49,3.209,0.0,11.07,-3.736,0.0,-0.8819,-4.655,0.0,9.116,-3.69,0.0,2.569,-4.094,2.909,15.27,-0.277,2.873,15.35,-0.2816,2.788,15.39,-0.295,2.703,15.35,-0.3093,2.668,15.27,-0.3162,2.703,15.18,-0.3117,2.788,15.14,-0.2983,2.873,15.18,-0.284,2.94,14.98,0.5179,2.907,15.06,0.5455,2.824,15.11,0.5456,2.738,15.08,0.5182,2.701,15.0,0.4793,2.733,14.92,0.4517,2.817,14.88,0.4516,2.902,14.9,0.4791,2.765,14.26,1.497,2.735,14.34,1.544,2.653,14.38,1.553,2.567,14.37,1.518,2.528,14.3,1.459,2.558,14.22,1.412,2.64,14.18,1.404,2.726,14.19,1.439,2.48,13.32,2.286,2.451,13.38,2.363,2.372,13.43,2.384,2.29,13.44,2.337,2.253,13.4,2.25,2.282,13.34,2.173,2.361,13.29,2.151,2.443,13.28,2.198,2.085,12.43,3.076,2.044,12.49,3.151,1.958,12.51,2.932,1.876,12.51,3.123,1.847,12.47,3.037,1.887,12.41,2.962,1.974,12.38,2.942,2.056,12.38,2.989,2.092,9.948,3.978,2.038,9.973,4.066,1.946,9.975,4.092,1.869,9.954,4.039,1.853,9.922,3.938,1.907,9.897,3.85,1.999,9.895,3.824,2.075,9.916,3.877,1.886,11.36,3.79,1.943,11.33,3.71,1.794,11.36,3.812,1.72,11.33,3.763,1.708,11.28,3.671,1.766,11.25,3.591,1.858,11.25,3.569,1.932,11.28,3.618,6.608,13.65,-1.345,7.294,14.2,-0.2222,6.573,13.64,1.031,5.797,12.79,1.58,5.349,11.61,1.181,5.293,11.61,-1.62,5.827,12.78,-1.917,5.261,11.17,-0.2445,6.66,12.96,-1.238,7.349,13.27,-0.2452,6.54,12.99,0.9578,6.044,12.43,0.9867,5.531,11.59,0.8431,5.545,11.56,-1.188,6.06,12.43,-1.497,5.429,11.24,-0.258,0.0,-1.249,-4.745,3.634,0.3583,3.78,4.989,0.4341,2.41,3.702,0.3726,-3.896,5.36,0.4945,-2.37,1.392,0.2768,-4.311,1.692,0.2913,4.193,5.556,0.5063,0.0063,0.0,0.2782,-4.386,0.0,7.79,-3.74,0.0,12.62,-3.652,0.0,-1.775,-4.491,1.301,18.16,-0.4263,1.268,18.03,0.209,0.9337,17.93,0.7814,0.5284,18.32,-1.291,1.048,18.26,-0.9761,1.481,17.31,0.2671,1.124,17.1,0.9138,0.6391,17.6,-1.541,1.157,17.55,-1.146,1.576,17.46,-0.5341,1.382,16.52,0.0833,1.005,16.35,0.6672,0.6304,16.7,-1.556,1.094,16.69,-1.214,1.585,16.64,-0.5766,2.023,15.71,-0.6784,1.64,15.45,0.0824,0.9391,15.3,0.736,0.7964,15.88,-1.825,1.34,15.81,-1.364,0.0,16.2,1.074,0.0,18.35,-1.421,3.047,15.22,-0.4634,2.537,14.57,0.521,1.217,14.89,-2.474,2.259,14.71,-1.829,1.465,13.74,1.144,2.849,3.065,4.415,4.155,3.106,3.721,3.016,1.332,4.622,4.321,1.372,3.928,2.377,3.025,4.447,2.543,1.292,4.654,2.625,0.9648,4.666,2.789,0.7287,4.62,2.989,0.6466,4.529,4.294,0.6874,3.835,4.477,0.7814,3.722,4.595,1.026,3.619,4.614,1.356,3.553,4.448,3.09,3.346,1.85,2.94,4.128,2.016,1.207,4.335,2.16,0.6404,4.356,2.443,0.2314,4.276,2.789,0.0893,4.118,4.095,0.1301,3.424,4.412,0.2929,3.229,4.615,0.717,3.051,4.649,1.289,2.935,4.483,3.022,2.729,1.412,2.833,3.544,1.578,1.099,3.75,1.744,0.4453,3.774,2.07,-0.0269,3.682,2.47,-0.191,3.5,3.776,-0.1502,2.806,4.142,0.0378,2.581,4.376,0.5275,2.374,4.416,1.188,2.242,4.25,2.921,2.035,3.844,1.353,4.267,3.678,3.086,4.06,3.85,0.5869,4.181,3.65,0.0296,3.771,3.331,-0.2507,3.152,-5.062,14.31,-1.872,-3.599,14.88,-2.272,-3.454,15.35,-0.2906,-5.078,14.93,-0.2367,-4.277,7.826,-2.023,-4.692,4.579,-2.112,-3.28,4.466,-3.45,-3.119,7.829,-3.386,-1.324,11.04,-3.639,-3.37,11.05,-3.145,-3.142,9.12,-3.277,-1.21,9.103,-3.685,-1.361,15.42,-2.398,-2.416,15.53,-1.622,-1.432,14.75,-2.914,-1.717,10.91,3.759,-3.557,10.99,3.415,-3.524,11.67,3.075,-1.791,11.59,3.387,-3.003,13.86,1.74,-2.782,15.39,-0.3671,-2.369,14.83,0.4814,-4.71,11.15,-1.805,-4.399,9.141,-2.001,-4.848,12.68,-2.238,-3.572,12.75,-2.924,-4.838,14.02,1.338,-2.545,7.576,3.29,-1.141,7.594,3.509,-1.411,4.307,3.841,-2.952,4.401,3.501,-3.498,9.915,3.61,-4.394,9.468,2.207,-4.656,11.16,1.887,-1.702,9.869,3.989,-0.6742,11.49,3.209,-0.6396,10.67,3.595,0.0,10.48,3.267,0.0,9.64,3.449,-0.5679,9.683,3.766,-0.746,8.455,3.729,-1.941,8.411,3.737,-3.104,8.5,3.517,-4.131,8.379,2.353,-4.99,2.825,-2.225,-5.127,2.818,-0.0142,-5.556,0.5063,0.0063,-5.36,0.4945,-2.37,-1.575,2.532,3.984,0.0,2.527,4.058,0.0,0.2984,4.281,-1.692,0.2913,4.193,-4.619,2.754,2.275,-3.311,2.661,3.635,-3.634,0.3583,3.78,-4.989,0.4341,2.41,-1.337,2.561,-3.972,-3.467,2.614,-3.616,-3.702,0.3726,-3.896,-1.392,0.2768,-4.311,0.0,8.539,3.632,0.0,7.599,3.532,-1.171,7.822,-3.721,-3.321,12.71,2.487,-4.688,12.64,1.776,-3.736,7.524,2.038,-4.91,10.83,-0.2461,-4.551,9.164,-0.0527,-4.433,7.914,0.067,-4.27,4.487,2.173,-4.794,4.548,0.0209,-1.446,12.67,-3.483,-1.964,13.63,1.831,-1.966,12.51,2.721,-0.6343,13.35,1.902,-0.6798,12.27,2.667,-5.071,-1.626,-2.412,-5.29,-1.205,-2.527,-5.62,-1.161,-0.0088,-5.525,-1.601,-0.0724,-1.747,-1.67,3.844,-1.811,-1.28,4.296,0.0,-1.258,4.416,0.0,-1.679,3.965,-4.941,-1.602,2.267,-5.089,-1.222,2.429,-3.695,-1.265,3.681,-3.511,-1.64,3.452,-3.571,-1.635,-4.009,-1.495,-1.716,-4.445,-1.358,-1.259,-4.679,-3.635,-1.162,-4.234,-1.568,14.39,1.006,0.0,4.302,3.879,-1.248,4.431,-3.754,-7.294,14.2,-0.2222,-6.608,13.65,-1.345,-6.573,13.64,1.031,-5.797,12.79,1.58,-5.349,11.61,1.181,-5.261,11.17,-0.2445,-5.429,11.24,-0.258,-5.531,11.59,0.8431,-5.293,11.61,-1.62,-5.545,11.56,-1.188,-5.827,12.78,-1.917,0.0,15.42,-2.558,0.0,14.71,-3.094,0.0,13.2,2.034,-0.5623,13.97,1.446,0.0,13.93,1.542,-5.503,-0.6837,-2.468,-5.798,-0.6529,0.0268,-1.765,-0.797,4.325,0.0,-0.7697,4.388,-5.23,-0.7329,2.447,-3.772,-0.7961,3.716,-1.41,-0.8547,-4.579,-3.841,-0.7156,-4.176,0.0,12.16,2.583,0.0,11.29,3.014,-2.909,15.27,-0.277,-2.873,15.35,-0.2816,-2.907,15.06,0.5455,-2.94,14.98,0.5179,-2.788,15.39,-0.295,-2.824,15.11,0.5456,-2.703,15.35,-0.3093,-2.738,15.08,0.5182,-2.668,15.27,-0.3162,-2.701,15.0,0.4793,-2.703,15.18,-0.3117,-2.733,14.92,0.4517,-2.788,15.14,-0.2983,-2.817,14.88,0.4516,-2.873,15.18,-0.284,-2.902,14.9,0.4791,-2.735,14.34,1.544,-2.765,14.26,1.497,-2.653,14.38,1.553,-2.567,14.37,1.518,-2.528,14.3,1.459,-2.558,14.22,1.412,-2.64,14.18,1.404,-2.726,14.19,1.439,-2.451,13.38,2.363,-2.48,13.32,2.286,-2.372,13.43,2.384,-2.29,13.44,2.337,-2.253,13.4,2.25,-2.282,13.34,2.173,-2.361,13.29,2.151,-2.443,13.28,2.198,-2.044,12.49,3.151,-2.085,12.43,3.076,-1.958,12.51,2.932,-1.876,12.51,3.123,-1.847,12.47,3.037,-1.887,12.41,2.962,-1.974,12.38,2.942,-2.056,12.38,2.989,-1.886,11.36,3.79,-1.943,11.33,3.71,-1.794,11.36,3.812,-1.72,11.33,3.763,-1.708,11.28,3.671,-1.766,11.25,3.591,-1.858,11.25,3.569,-1.932,11.28,3.618,-2.092,9.948,3.978,-2.038,9.973,4.066,-1.946,9.975,4.092,-1.869,9.954,4.039,-1.853,9.922,3.938,-1.907,9.897,3.85,-1.999,9.895,3.824,-2.075,9.916,3.877,-7.349,13.27,-0.2452,-6.66,12.96,-1.238,-6.54,12.99,0.9578,-6.044,12.43,0.9867,-6.06,12.43,-1.497,-6.326,12.2,-0.2397,-1.301,18.16,-0.4263,-1.268,18.03,0.209,-1.481,17.31,0.2671,-1.576,17.46,-0.5341,-0.9337,17.93,0.7814,-1.124,17.1,0.9138,0.0,17.83,1.309,0.0,16.9,1.422,-0.5284,18.32,-1.291,-1.048,18.26,-0.9761,-1.157,17.55,-1.146,-0.6391,17.6,-1.541,-1.382,16.52,0.0833,-1.585,16.64,-0.5766,-1.005,16.35,0.6672,-0.6304,16.7,-1.556,0.0,16.69,-1.677,0.0,17.6,-1.638,-1.094,16.69,-1.214,-1.64,15.45,0.0824,-2.023,15.71,-0.6784,-0.9391,15.3,0.736,-1.34,15.81,-1.364,-0.7964,15.88,-1.825,0.0,15.16,1.061,0.0,15.9,-1.97,-2.537,14.57,0.521,-3.047,15.22,-0.4634,-1.465,13.74,1.144,-2.259,14.71,-1.829,-1.217,14.89,-2.474,0.0,14.89,-2.767,0.0,13.59,1.455,-2.849,3.065,4.415,-3.016,1.332,4.622,-3.844,1.353,4.267,-3.678,3.086,4.06,-2.377,3.025,4.447,-2.543,1.292,4.654,-2.625,0.9648,4.666,-2.789,0.7287,4.62,-2.989,0.6466,4.529,-3.85,0.5869,4.181,-4.321,1.372,3.928,-4.294,0.6874,3.835,-4.477,0.7814,3.722,-4.595,1.026,3.619,-4.614,1.356,3.553,-4.448,3.09,3.346,-4.155,3.106,3.721,-1.85,2.94,4.128,-2.016,1.207,4.335,-2.16,0.6404,4.356,-2.443,0.2314,4.276,-2.789,0.0893,4.118,-3.65,0.0296,3.771,-4.095,0.1301,3.424,-4.412,0.2929,3.229,-4.615,0.717,3.051,-4.649,1.289,2.935,-4.483,3.022,2.729,-1.412,2.833,3.544,-1.578,1.099,3.75,-1.744,0.4453,3.774,-2.07,-0.0269,3.682,-2.47,-0.191,3.5,-3.331,-0.2507,3.152,-3.776,-0.1502,2.806,-4.142,0.0378,2.581,-4.376,0.5275,2.374,-4.416,1.188,2.242,-4.25,2.921,2.035}, 1494);
SoIndexedFaceSet198->setCoord(*SoCoordinate199);

SoTextureCoordinate* SoTextureCoordinate200 = new SoTextureCoordinate();
SoTextureCoordinate200->setPoint(new float[]{0.6541,0.6778,0.6761,0.6928,0.6519,0.7145,0.6265,0.6918,0.6663,0.5748,0.6686,0.5197,0.7026,0.5159,0.7018,0.5763,0.7269,0.6359,0.6917,0.6301,0.697,0.598,0.7307,0.5999,0.7068,0.7157,0.6825,0.7174,0.7119,0.6999,0.534,0.6289,0.5649,0.6264,0.5679,0.6398,0.5389,0.6409,0.5691,0.6766,0.5939,0.7116,0.5845,0.7196,0.6535,0.6301,0.664,0.5969,0.6575,0.6535,0.6856,0.6576,0.5681,0.7046,0.5952,0.6672,0.552,0.5735,0.5263,0.5752,0.5259,0.5218,0.5472,0.5207,0.5627,0.6111,0.5889,0.6031,0.5886,0.6254,0.5337,0.6113,0.5198,0.6413,0.5171,0.6265,0.5048,0.6262,0.5042,0.6101,0.5149,0.6098,0.5188,0.5896,0.5389,0.5881,0.6182,0.3321,0.6657,0.3322,0.5584,0.5897,0.5828,0.589,0.4732,0.3353,0.503,0.3338,0.7047,0.3273,0.7432,0.3237,0.5422,0.332,0.5767,0.3319,0.7322,0.5792,0.7521,0.5797,0.7513,0.6003,0.506,0.591,0.5064,0.576,0.5681,0.6541,0.6253,0.6127,0.6291,0.5947,0.6271,0.5743,0.5871,0.6488,0.584,0.5712,0.7214,0.6626,0.7493,0.6376,0.7455,0.6662,0.5824,0.5229,0.6278,0.5246,0.6652,0.3118,0.6662,0.3244,0.6185,0.3222,0.6188,0.3105,0.5513,0.6777,0.5454,0.6552,0.528,0.6787,0.5233,0.657,0.5032,0.3134,0.501,0.3251,0.4727,0.326,0.473,0.3134,0.7033,0.3074,0.7386,0.3054,0.7425,0.316,0.7041,0.3189,0.5739,0.3121,0.6629,0.7161,0.5745,0.3232,0.6668,0.4523,0.7035,0.4461,0.5409,0.323,0.5412,0.3131,0.7346,0.5168,0.7423,0.4474,0.763,0.4518,0.7551,0.5222,0.6176,0.6563,0.7317,0.7159,0.7356,0.7045,0.5497,0.6974,0.7638,0.3032,0.7648,0.3142,0.7654,0.3221,0.5197,0.4562,0.6245,0.4572,0.5507,0.4545,0.5013,0.5241,0.583,0.4547,0.5165,0.678,0.5298,0.6914,0.5195,0.6906,0.4921,0.4585,0.5115,0.6588,0.5077,0.6418,0.4698,0.743,0.4689,0.7432,0.4698,0.722,0.4707,0.7227,0.4665,0.7435,0.4675,0.722,0.4642,0.7439,0.4651,0.7228,0.4632,0.7441,0.4641,0.7238,0.4642,0.7439,0.465,0.7245,0.4665,0.7435,0.4673,0.7245,0.4689,0.7432,0.4697,0.7238,0.465,0.6947,0.4659,0.6959,0.4628,0.6945,0.4604,0.6954,0.4593,0.697,0.4602,0.6982,0.4624,0.6984,0.4648,0.6975,0.4572,0.6722,0.458,0.6742,0.455,0.6716,0.4528,0.6729,0.4517,0.6752,0.4525,0.6773,0.4547,0.6779,0.457,0.6766,0.446,0.6505,0.4471,0.6525,0.4436,0.6564,0.4413,0.6512,0.4405,0.6536,0.4416,0.6556,0.444,0.6561,0.4463,0.6548,0.4416,0.6328,0.4432,0.6349,0.439,0.6322,0.437,0.6335,0.4367,0.6359,0.4383,0.6381,0.4408,0.6387,0.4428,0.6374,0.4473,0.6271,0.4458,0.6247,0.4432,0.6241,0.4411,0.6255,0.4407,0.6282,0.4422,0.6306,0.4447,0.6313,0.4468,0.6298,0.6375,0.671,0.6195,0.6801,0.5992,0.664,0.5927,0.6514,0.5921,0.6299,0.6486,0.6337,0.6522,0.6528,0.6231,0.6183,0.6276,0.6636,0.6186,0.6682,0.6084,0.6602,0.607,0.6548,0.6087,0.649,0.6274,0.6481,0.6287,0.6557,0.6194,0.6426,0.5465,0.3933,0.5799,0.3933,0.7041,0.3867,0.6663,0.3922,0.7427,0.3855,0.5113,0.395,0.6213,0.3946,0.4826,0.3969,0.7642,0.3869,0.0894,0.5347,0.0741,0.5347,0.0735,0.5092,0.0883,0.5109,0.0487,0.5282,0.0577,0.5054,0.0296,0.516,0.0446,0.5002,0.1273,0.533,0.104,0.536,0.1027,0.5117,0.1148,0.5127,0.0778,0.4925,0.0911,0.494,0.0618,0.4901,0.1152,0.5002,0.1256,0.5028,0.1268,0.5105,0.105,0.4966,0.0786,0.4744,0.0945,0.4791,0.0644,0.4726,0.1083,0.4805,0.1195,0.4848,0.1395,0.5292,0.0492,0.4884,0.0455,0.4743,0.1321,0.4908,0.079,0.4506,0.0954,0.4539,0.0615,0.4503,0.1154,0.4501,0.1348,0.4597,0.1514,0.473,0.0369,0.4546,0.5845,0.7196,0.5681,0.7046,0.5497,0.6974,0.7068,0.7157,0.6825,0.7174,0.6629,0.7161,0.5298,0.6914,0.7317,0.7159,0.1807,0.4425,0.2018,0.4805,0.2135,0.4243,0.2346,0.4623,0.1746,0.4313,0.2074,0.4131,0.2144,0.4112,0.2212,0.4127,0.226,0.4174,0.247,0.4554,0.2485,0.4619,0.2462,0.4685,0.2408,0.4734,0.208,0.4916,0.17,0.4232,0.2029,0.405,0.2151,0.4016,0.2269,0.4043,0.2351,0.4123,0.2562,0.4503,0.2586,0.4616,0.2546,0.473,0.2453,0.4816,0.2125,0.4998,0.1684,0.4202,0.2012,0.402,0.2153,0.3981,0.2289,0.4012,0.2384,0.4105,0.2595,0.4485,0.2623,0.4615,0.2577,0.4747,0.247,0.4846,0.2142,0.5027,0.2241,0.4433,0.1913,0.4615,0.2365,0.4364,0.2456,0.4313,0.249,0.4295,0.6541,0.6778,0.6761,0.6928,0.6519,0.7145,0.6265,0.6918,0.6663,0.5748,0.6686,0.5197,0.7026,0.5159,0.7018,0.5763,0.7269,0.6359,0.6917,0.6301,0.697,0.598,0.7307,0.5999,0.7068,0.7157,0.6825,0.7174,0.7119,0.6999,0.534,0.6289,0.5649,0.6264,0.5679,0.6398,0.5389,0.6409,0.5691,0.6766,0.5939,0.7116,0.5845,0.7196,0.5681,0.7046,0.6535,0.6301,0.664,0.5969,0.6575,0.6535,0.6856,0.6576,0.5952,0.6672,0.552,0.5735,0.5263,0.5752,0.5259,0.5218,0.5472,0.5207,0.5627,0.6111,0.5889,0.6031,0.5886,0.6254,0.5337,0.6113,0.5198,0.6413,0.5171,0.6265,0.5048,0.6262,0.5042,0.6101,0.5149,0.6098,0.5188,0.5896,0.5389,0.5881,0.5584,0.5897,0.5828,0.589,0.6668,0.4523,0.6245,0.4572,0.6213,0.3946,0.6663,0.3922,0.5197,0.4562,0.4921,0.4585,0.4826,0.3969,0.5113,0.395,0.583,0.4547,0.5507,0.4545,0.5465,0.3933,0.5799,0.3933,0.7423,0.4474,0.7035,0.4461,0.7041,0.3867,0.7427,0.3855,0.506,0.591,0.5064,0.576,0.7322,0.5792,0.7521,0.5797,0.7513,0.6003,0.5681,0.6541,0.5871,0.6488,0.584,0.5712,0.6253,0.6127,0.6291,0.5947,0.6271,0.5743,0.5824,0.5229,0.6278,0.5246,0.7214,0.6626,0.7493,0.6376,0.7455,0.6662,0.5513,0.6777,0.5454,0.6552,0.528,0.6787,0.5233,0.657,0.6652,0.3118,0.6662,0.3244,0.6185,0.3222,0.6188,0.3105,0.5032,0.3134,0.501,0.3251,0.4727,0.326,0.473,0.3134,0.5739,0.3121,0.5745,0.3232,0.5409,0.323,0.5412,0.3131,0.7033,0.3074,0.7386,0.3054,0.7425,0.316,0.7041,0.3189,0.5497,0.6974,0.6629,0.7161,0.5013,0.5241,0.7346,0.5168,0.763,0.4518,0.7551,0.5222,0.6195,0.6801,0.6375,0.671,0.5992,0.664,0.5927,0.6514,0.5921,0.6299,0.6231,0.6183,0.6194,0.6426,0.6087,0.649,0.6486,0.6337,0.6274,0.6481,0.6522,0.6528,0.7317,0.7159,0.7356,0.7045,0.5165,0.678,0.5298,0.6914,0.5195,0.6906,0.7638,0.3032,0.7648,0.3142,0.6657,0.3322,0.6182,0.3321,0.503,0.3338,0.4732,0.3353,0.5767,0.3319,0.5422,0.332,0.7432,0.3237,0.7047,0.3273,0.7654,0.3221,0.7642,0.3869,0.5115,0.6588,0.5077,0.6418,0.4698,0.743,0.4689,0.7432,0.4698,0.722,0.4707,0.7227,0.4665,0.7435,0.4675,0.722,0.4642,0.7439,0.4651,0.7228,0.4632,0.7441,0.4641,0.7238,0.4642,0.7439,0.465,0.7245,0.4665,0.7435,0.4673,0.7245,0.4689,0.7432,0.4697,0.7238,0.465,0.6947,0.4659,0.6959,0.4628,0.6945,0.4604,0.6954,0.4593,0.697,0.4602,0.6982,0.4624,0.6984,0.4648,0.6975,0.4572,0.6722,0.458,0.6742,0.455,0.6716,0.4528,0.6729,0.4517,0.6752,0.4525,0.6773,0.4547,0.6779,0.457,0.6766,0.446,0.6505,0.4471,0.6525,0.4436,0.6564,0.4413,0.6512,0.4405,0.6536,0.4416,0.6556,0.444,0.6561,0.4463,0.6548,0.4416,0.6328,0.4432,0.6349,0.439,0.6322,0.437,0.6335,0.4367,0.6359,0.4383,0.6381,0.4408,0.6387,0.4428,0.6374,0.4473,0.6271,0.4458,0.6247,0.4432,0.6241,0.4411,0.6255,0.4407,0.6282,0.4422,0.6306,0.4447,0.6313,0.4468,0.6298,0.6186,0.6682,0.6276,0.6636,0.6084,0.6602,0.607,0.6548,0.6287,0.6557,0.6176,0.6563,0.0894,0.5347,0.0741,0.5347,0.0735,0.5092,0.0883,0.5109,0.0487,0.5282,0.0577,0.5054,0.0296,0.516,0.0446,0.5002,0.1273,0.533,0.104,0.536,0.1027,0.5117,0.1148,0.5127,0.0778,0.4925,0.0911,0.494,0.0618,0.4901,0.1152,0.5002,0.1256,0.5028,0.1268,0.5105,0.105,0.4966,0.0786,0.4744,0.0945,0.4791,0.0644,0.4726,0.1083,0.4805,0.1195,0.4848,0.1395,0.5292,0.0492,0.4884,0.0455,0.4743,0.1321,0.4908,0.079,0.4506,0.0954,0.4539,0.0615,0.4503,0.1154,0.4501,0.1348,0.4597,0.1514,0.473,0.0369,0.4546,0.5845,0.7196,0.5681,0.7046,0.5497,0.6974,0.7068,0.7157,0.6825,0.7174,0.6629,0.7161,0.5298,0.6914,0.7317,0.7159,0.1807,0.4425,0.2135,0.4243,0.2241,0.4433,0.1913,0.4615,0.1746,0.4313,0.2074,0.4131,0.2144,0.4112,0.2212,0.4127,0.226,0.4174,0.2365,0.4364,0.2346,0.4623,0.247,0.4554,0.2485,0.4619,0.2462,0.4685,0.2408,0.4734,0.208,0.4916,0.2018,0.4805,0.17,0.4232,0.2029,0.405,0.2151,0.4016,0.2269,0.4043,0.2351,0.4123,0.2456,0.4313,0.2562,0.4503,0.2586,0.4616,0.2546,0.473,0.2453,0.4816,0.2125,0.4998,0.1684,0.4202,0.2012,0.402,0.2153,0.3981,0.2289,0.4012,0.2384,0.4105,0.249,0.4295,0.2595,0.4485,0.2623,0.4615,0.2577,0.4747,0.247,0.4846,0.2142,0.5027}, 1108);
SoIndexedFaceSet198->setTexCoord(*SoTextureCoordinate200);

SoShape194->setGeometry(*SoIndexedFaceSet198);

SoTransform193->addChild(*SoShape194);

SoHAnimSegment192->addChild(*SoTransform193);

SoHAnimJoint191->addChildren(*SoHAnimSegment192);

SoHAnimJoint* SoHAnimJoint201 = new SoHAnimJoint();
SoHAnimJoint201->X3DNode::setName(QString("skullbase"));
SoHAnimJoint201->setDEF(QString("hanim_skullbase"));
SoHAnimJoint201->setCenter(new float[]{0.0,53.98,-1.219});
SoHAnimJoint201->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint201->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimSegment* SoHAnimSegment202 = new SoHAnimSegment();
SoHAnimSegment202->X3DNode::setName(QString("skull"));
SoHAnimSegment202->setDEF(QString("hanim_skull"));
SoTransform* SoTransform203 = new SoTransform();
SoTransform203->setTranslation(new float[]{0.0,53.98,-1.219});
SoShape* SoShape204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance205 = new SoVRMLAppearance();
SoMaterial* SoMaterial206 = new SoMaterial();
SoMaterial206->setDiffuseColor(new float[]{0.588,0.588,0.588});
SoVRMLAppearance205->addChild(*SoMaterial206);

SoImageTexture* SoImageTexture207 = new SoImageTexture();
SoImageTexture207->setUSE(QString("DaTextureAtlas"));
SoVRMLAppearance205->addChild(*SoImageTexture207);

SoShape204->addChild(*SoVRMLAppearance205);

SoIndexedFaceSet* SoIndexedFaceSet208 = new SoIndexedFaceSet();
SoIndexedFaceSet208->setCoordIndex(new int32_t[]{39,40,17,-1,17,8,39,-1,9,7,16,-1,16,14,9,-1,10,15,16,-1,16,7,10,-1,9,14,48,-1,48,33,9,-1,21,23,15,-1,15,10,21,-1,20,41,42,-1,42,6,20,-1,13,68,69,-1,69,8,13,-1,9,31,12,-1,12,7,9,-1,7,12,11,-1,11,10,7,-1,17,23,21,-1,21,8,17,-1,26,24,30,-1,30,0,26,-1,27,5,30,-1,30,24,27,-1,25,80,81,-1,81,5,25,-1,13,8,21,-1,21,22,13,-1,43,84,68,-1,68,13,43,-1,2,1,44,-1,44,32,2,-1,44,42,11,-1,11,12,44,-1,69,89,39,-1,39,8,69,-1,23,17,25,-1,25,29,23,-1,14,26,28,-1,28,48,14,-1,0,92,93,-1,93,36,0,-1,35,28,26,-1,36,35,26,-1,0,36,26,-1,3,43,41,-1,41,20,3,-1,10,11,22,-1,22,21,10,-1,30,97,92,-1,92,0,30,-1,5,81,97,-1,97,30,5,-1,26,14,16,-1,16,24,26,-1,24,16,15,-1,15,27,24,-1,27,15,23,-1,23,29,27,-1,19,18,38,-1,38,37,19,-1,28,35,38,-1,38,18,28,-1,4,2,32,-1,31,9,33,-1,33,34,31,-1,32,31,34,-1,34,4,32,-1,5,27,29,-1,29,25,5,-1,104,105,40,-1,40,39,104,-1,40,105,106,-1,41,22,11,-1,11,42,41,-1,3,107,84,-1,84,43,3,-1,1,6,42,-1,42,44,1,-1,13,22,41,-1,41,43,13,-1,12,31,32,-1,32,44,12,-1,19,37,46,-1,46,45,19,-1,108,17,40,-1,40,106,108,-1,25,17,108,-1,108,80,25,-1,104,39,89,-1,28,18,47,-1,47,48,28,-1,50,49,52,-1,52,51,50,-1,53,56,55,-1,55,54,53,-1,57,54,55,-1,55,58,57,-1,53,60,59,-1,59,56,53,-1,61,57,58,-1,58,62,61,-1,64,63,66,-1,66,65,64,-1,67,49,69,-1,69,68,67,-1,53,54,71,-1,71,70,53,-1,54,57,72,-1,72,71,54,-1,52,49,61,-1,61,62,52,-1,73,76,75,-1,75,74,73,-1,77,74,75,-1,75,78,77,-1,79,78,81,-1,81,80,79,-1,67,82,61,-1,61,49,67,-1,83,67,68,-1,68,84,83,-1,86,85,88,-1,88,87,86,-1,88,71,72,-1,72,66,88,-1,69,49,50,-1,50,89,69,-1,62,90,79,-1,79,52,62,-1,56,59,91,-1,91,73,56,-1,76,94,93,-1,93,92,76,-1,73,91,95,-1,73,95,94,-1,76,73,94,-1,96,64,65,-1,65,83,96,-1,57,61,82,-1,82,72,57,-1,75,76,92,-1,92,97,75,-1,78,75,97,-1,97,81,78,-1,73,74,55,-1,55,56,73,-1,74,77,58,-1,58,55,74,-1,77,90,62,-1,62,58,77,-1,98,101,100,-1,100,99,98,-1,91,99,100,-1,100,95,91,-1,102,85,86,-1,70,103,60,-1,60,53,70,-1,85,102,103,-1,103,70,85,-1,78,79,90,-1,90,77,78,-1,104,50,51,-1,51,105,104,-1,51,106,105,-1,65,66,72,-1,72,82,65,-1,96,83,84,-1,84,107,96,-1,87,88,66,-1,66,63,87,-1,67,83,65,-1,65,82,67,-1,71,88,85,-1,85,70,71,-1,98,45,46,-1,46,101,98,-1,108,106,51,-1,51,52,108,-1,79,80,108,-1,108,52,79,-1,104,89,50,-1,91,59,109,-1,109,99,91,-1,110,119,120,-1,120,111,110,-1,112,121,119,-1,119,110,112,-1,110,111,114,-1,114,113,110,-1,112,110,113,-1,113,115,112,-1,113,114,123,-1,123,122,113,-1,115,113,122,-1,122,124,115,-1,117,116,122,-1,122,123,117,-1,118,128,154,-1,154,124,118,-1,116,118,124,-1,124,122,116,-1,114,111,120,-1,120,123,114,-1,123,120,138,-1,138,117,123,-1,120,119,125,-1,125,138,120,-1,157,158,126,-1,126,121,157,-1,119,121,126,-1,126,125,119,-1,121,112,129,-1,129,157,121,-1,112,115,127,-1,127,129,112,-1,115,124,154,-1,154,127,115,-1,134,135,194,-1,194,117,134,-1,130,131,132,-1,132,133,130,-1,131,130,193,-1,193,136,131,-1,133,132,166,-1,166,165,133,-1,134,136,193,-1,193,135,134,-1,134,117,138,-1,138,137,134,-1,142,141,140,-1,140,139,142,-1,143,142,139,-1,139,144,143,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,146,149,148,-1,148,145,146,-1,147,150,149,-1,149,146,147,-1,151,148,149,-1,149,152,151,-1,153,150,154,-1,154,128,153,-1,152,149,150,-1,150,153,152,-1,145,148,140,-1,140,141,145,-1,148,151,155,-1,155,140,148,-1,140,155,156,-1,156,139,140,-1,157,144,159,-1,159,158,157,-1,139,156,159,-1,159,144,139,-1,144,157,129,-1,129,143,144,-1,143,129,127,-1,127,147,143,-1,147,127,154,-1,154,150,147,-1,160,151,196,-1,196,195,160,-1,197,198,162,-1,162,161,197,-1,161,163,164,-1,164,197,161,-1,198,165,166,-1,166,162,198,-1,160,195,164,-1,164,163,160,-1,160,167,155,-1,155,151,160,-1,172,169,170,-1,170,171,172,-1,173,175,177,-1,177,178,173,-1,130,171,168,-1,168,193,130,-1,172,133,165,-1,165,179,172,-1,133,172,171,-1,171,130,133,-1,171,170,176,-1,176,168,171,-1,170,169,175,-1,175,176,170,-1,169,172,179,-1,179,180,169,-1,174,194,135,-1,174,168,192,-1,169,180,177,-1,177,175,169,-1,175,173,176,-1,181,164,195,-1,195,182,181,-1,187,186,185,-1,185,184,187,-1,188,178,177,-1,177,189,188,-1,197,164,181,-1,181,186,197,-1,187,179,165,-1,165,198,187,-1,198,197,186,-1,186,187,198,-1,186,181,190,-1,190,185,186,-1,185,190,189,-1,189,184,185,-1,184,180,179,-1,179,187,184,-1,182,195,196,-1,196,183,182,-1,181,182,191,-1,191,190,181,-1,184,189,177,-1,177,180,184,-1,188,189,190,-1,190,191,188,-1,191,182,183,-1,174,135,193,-1,193,168,174,-1,192,168,176,-1,199,206,204,-1,204,203,199,-1,202,204,206,-1,206,205,202,-1,202,205,283,-1,283,267,202,-1,208,268,283,-1,283,205,208,-1,220,214,232,-1,232,219,220,-1,221,222,223,-1,202,267,230,-1,230,227,202,-1,203,204,229,-1,229,228,203,-1,217,215,233,-1,233,269,217,-1,220,219,223,-1,223,222,220,-1,215,214,297,-1,297,233,215,-1,216,217,269,-1,269,270,216,-1,297,214,220,-1,220,299,297,-1,222,221,226,-1,226,300,222,-1,299,220,222,-1,222,300,299,-1,229,227,224,-1,224,223,229,-1,216,270,271,-1,271,218,216,-1,221,224,272,-1,272,226,221,-1,208,205,206,-1,206,207,208,-1,207,206,199,-1,199,211,207,-1,212,209,201,-1,201,200,212,-1,218,225,209,-1,209,216,218,-1,209,225,210,-1,210,201,209,-1,201,210,211,-1,211,199,201,-1,217,216,209,-1,209,212,217,-1,199,203,200,-1,200,201,199,-1,272,224,227,-1,227,230,272,-1,229,223,219,-1,219,228,229,-1,204,202,227,-1,227,229,204,-1,203,228,213,-1,213,200,203,-1,215,217,212,-1,212,231,215,-1,212,200,213,-1,213,231,212,-1,213,228,219,-1,219,232,213,-1,214,215,231,-1,231,232,214,-1,232,231,213,-1,268,208,234,-1,234,314,268,-1,208,207,235,-1,235,234,208,-1,207,211,236,-1,236,235,207,-1,211,210,237,-1,237,236,211,-1,210,225,238,-1,238,237,210,-1,225,218,239,-1,239,238,225,-1,218,271,320,-1,320,239,218,-1,223,224,221,-1,273,321,241,-1,273,241,242,-1,273,242,243,-1,273,243,244,-1,273,244,245,-1,273,245,240,-1,247,241,321,-1,321,327,247,-1,248,242,241,-1,241,247,248,-1,249,243,242,-1,242,248,249,-1,250,244,243,-1,243,249,250,-1,251,245,244,-1,244,250,251,-1,246,240,245,-1,245,251,246,-1,252,247,327,-1,327,274,252,-1,253,248,247,-1,247,252,253,-1,254,249,248,-1,248,253,254,-1,255,250,249,-1,249,254,255,-1,256,251,250,-1,250,255,256,-1,338,246,251,-1,251,256,338,-1,257,252,274,-1,274,275,257,-1,258,253,252,-1,252,257,258,-1,259,254,253,-1,253,258,259,-1,260,255,254,-1,254,259,260,-1,261,256,255,-1,255,260,261,-1,344,338,256,-1,256,261,344,-1,262,257,275,-1,275,276,262,-1,263,258,257,-1,257,262,263,-1,264,259,258,-1,258,263,264,-1,265,260,259,-1,259,264,265,-1,266,261,260,-1,260,265,266,-1,350,344,261,-1,261,266,350,-1,351,262,276,-1,351,263,262,-1,351,264,263,-1,351,265,264,-1,351,266,265,-1,351,350,266,-1,277,280,279,-1,279,278,277,-1,282,281,278,-1,278,279,282,-1,282,267,283,-1,283,281,282,-1,284,281,283,-1,283,268,284,-1,286,285,288,-1,288,287,286,-1,289,291,290,-1,282,292,230,-1,230,267,282,-1,280,294,293,-1,293,279,280,-1,295,269,233,-1,233,296,295,-1,286,290,291,-1,291,285,286,-1,296,233,297,-1,297,287,296,-1,298,270,269,-1,269,295,298,-1,297,299,286,-1,286,287,297,-1,290,300,226,-1,226,289,290,-1,299,300,290,-1,290,286,299,-1,293,291,301,-1,301,292,293,-1,298,302,271,-1,271,270,298,-1,289,226,272,-1,272,301,289,-1,284,303,278,-1,278,281,284,-1,303,304,277,-1,277,278,303,-1,305,308,307,-1,307,306,305,-1,302,298,306,-1,306,309,302,-1,306,307,310,-1,310,309,306,-1,307,277,304,-1,304,310,307,-1,295,305,306,-1,306,298,295,-1,277,307,308,-1,308,280,277,-1,272,230,292,-1,292,301,272,-1,293,294,285,-1,285,291,293,-1,279,293,292,-1,292,282,279,-1,280,308,311,-1,311,294,280,-1,296,312,305,-1,305,295,296,-1,305,312,311,-1,311,308,305,-1,311,288,285,-1,285,294,311,-1,287,288,312,-1,312,296,287,-1,288,311,312,-1,268,314,313,-1,313,284,268,-1,284,313,315,-1,315,303,284,-1,303,315,316,-1,316,304,303,-1,304,316,317,-1,317,310,304,-1,310,317,318,-1,318,309,310,-1,309,318,319,-1,319,302,309,-1,302,319,320,-1,320,271,302,-1,291,289,301,-1,273,322,321,-1,273,323,322,-1,273,324,323,-1,273,325,324,-1,273,326,325,-1,273,240,326,-1,328,327,321,-1,321,322,328,-1,329,328,322,-1,322,323,329,-1,330,329,323,-1,323,324,330,-1,331,330,324,-1,324,325,331,-1,332,331,325,-1,325,326,332,-1,246,332,326,-1,326,240,246,-1,333,274,327,-1,327,328,333,-1,334,333,328,-1,328,329,334,-1,335,334,329,-1,329,330,335,-1,336,335,330,-1,330,331,336,-1,337,336,331,-1,331,332,337,-1,338,337,332,-1,332,246,338,-1,339,275,274,-1,274,333,339,-1,340,339,333,-1,333,334,340,-1,341,340,334,-1,334,335,341,-1,342,341,335,-1,335,336,342,-1,343,342,336,-1,336,337,343,-1,344,343,337,-1,337,338,344,-1,345,276,275,-1,275,339,345,-1,346,345,339,-1,339,340,346,-1,347,346,340,-1,340,341,347,-1,348,347,341,-1,341,342,348,-1,349,348,342,-1,342,343,349,-1,350,349,343,-1,343,344,350,-1,351,276,345,-1,351,345,346,-1,351,346,347,-1,351,347,348,-1,351,348,349,-1,351,349,350,-1}, 2452);
SoIndexedFaceSet208->setCreaseAngle(1.57);
SoIndexedFaceSet208->setTexCoordIndex(new int32_t[]{1,2,3,-1,3,0,1,-1,4,5,6,-1,6,7,4,-1,8,9,6,-1,6,5,8,-1,4,7,10,-1,10,11,4,-1,12,13,9,-1,9,8,12,-1,15,16,17,-1,17,14,15,-1,18,47,59,-1,59,0,18,-1,4,19,20,-1,20,5,4,-1,5,20,21,-1,21,8,5,-1,3,13,12,-1,12,0,3,-1,22,23,24,-1,24,25,22,-1,26,27,24,-1,24,23,26,-1,28,48,55,-1,55,27,28,-1,18,0,12,-1,12,29,18,-1,30,53,47,-1,47,18,30,-1,32,33,34,-1,34,31,32,-1,34,17,21,-1,21,20,34,-1,59,61,1,-1,1,0,59,-1,13,3,28,-1,28,35,13,-1,7,22,36,-1,36,10,7,-1,25,49,57,-1,57,39,25,-1,40,36,22,-1,39,40,22,-1,25,39,22,-1,41,30,16,-1,16,15,41,-1,8,21,29,-1,29,12,8,-1,24,56,49,-1,49,25,24,-1,27,55,56,-1,56,24,27,-1,22,7,6,-1,6,23,22,-1,23,6,9,-1,9,26,23,-1,26,9,13,-1,13,35,26,-1,38,37,42,-1,42,43,38,-1,36,40,42,-1,42,37,36,-1,44,32,31,-1,19,4,11,-1,11,45,19,-1,31,19,45,-1,45,44,31,-1,27,26,35,-1,35,28,27,-1,51,58,2,-1,2,1,51,-1,2,58,52,-1,16,29,21,-1,21,17,16,-1,41,46,53,-1,53,30,41,-1,33,14,17,-1,17,34,33,-1,18,29,16,-1,16,30,18,-1,20,19,31,-1,31,34,20,-1,38,43,50,-1,50,54,38,-1,60,3,2,-1,2,52,60,-1,28,3,60,-1,60,48,28,-1,51,1,61,-1,36,37,62,-1,62,63,36,-1,65,64,67,-1,67,66,65,-1,68,71,70,-1,70,69,68,-1,72,69,70,-1,70,73,72,-1,68,75,74,-1,74,71,68,-1,76,72,73,-1,73,77,76,-1,79,78,81,-1,81,80,79,-1,82,64,84,-1,84,83,82,-1,68,69,86,-1,86,85,68,-1,69,72,87,-1,87,86,69,-1,67,64,76,-1,76,77,67,-1,88,91,90,-1,90,89,88,-1,92,89,90,-1,90,93,92,-1,94,93,96,-1,96,95,94,-1,82,97,76,-1,76,64,82,-1,98,82,83,-1,83,99,98,-1,101,100,103,-1,103,102,101,-1,103,86,87,-1,87,81,103,-1,84,64,65,-1,65,104,84,-1,77,105,94,-1,94,67,77,-1,71,74,106,-1,106,88,71,-1,91,109,108,-1,108,107,91,-1,88,106,110,-1,88,110,109,-1,91,88,109,-1,111,79,80,-1,80,98,111,-1,72,76,97,-1,97,87,72,-1,90,91,107,-1,107,112,90,-1,93,90,112,-1,112,96,93,-1,88,89,70,-1,70,71,88,-1,89,92,73,-1,73,70,89,-1,92,105,77,-1,77,73,92,-1,113,116,115,-1,115,114,113,-1,106,114,115,-1,115,110,106,-1,117,100,101,-1,85,118,75,-1,75,68,85,-1,100,117,118,-1,118,85,100,-1,93,94,105,-1,105,92,93,-1,119,65,66,-1,66,120,119,-1,66,121,120,-1,80,81,87,-1,87,97,80,-1,111,98,99,-1,99,122,111,-1,102,103,81,-1,81,78,102,-1,82,98,80,-1,80,97,82,-1,86,103,100,-1,100,85,86,-1,113,124,123,-1,123,116,113,-1,125,121,66,-1,66,67,125,-1,94,95,125,-1,125,67,94,-1,119,104,65,-1,106,127,126,-1,126,114,106,-1,130,128,129,-1,129,131,130,-1,133,132,128,-1,128,130,133,-1,130,131,134,-1,134,135,130,-1,133,130,135,-1,135,136,133,-1,135,134,141,-1,141,140,135,-1,136,135,140,-1,140,142,136,-1,137,138,140,-1,140,141,137,-1,139,152,153,-1,153,142,139,-1,138,139,142,-1,142,140,138,-1,134,131,143,-1,143,144,134,-1,144,143,145,-1,145,146,144,-1,129,128,147,-1,147,148,129,-1,154,155,149,-1,149,132,154,-1,128,132,149,-1,149,147,128,-1,132,133,150,-1,150,154,132,-1,133,136,151,-1,151,150,133,-1,136,142,153,-1,153,151,136,-1,157,158,159,-1,159,156,157,-1,161,162,163,-1,163,164,161,-1,162,161,160,-1,160,167,162,-1,164,163,166,-1,166,165,164,-1,157,167,160,-1,160,158,157,-1,157,156,168,-1,168,169,157,-1,173,172,171,-1,171,170,173,-1,174,173,170,-1,170,175,174,-1,173,177,176,-1,176,172,173,-1,174,178,177,-1,177,173,174,-1,177,180,179,-1,179,176,177,-1,178,181,180,-1,180,177,178,-1,182,179,180,-1,180,183,182,-1,184,181,186,-1,186,185,184,-1,183,180,181,-1,181,184,183,-1,176,188,187,-1,187,172,176,-1,188,190,189,-1,189,187,188,-1,171,192,191,-1,191,170,171,-1,193,175,195,-1,195,194,193,-1,170,191,195,-1,195,175,170,-1,175,193,196,-1,196,174,175,-1,174,196,197,-1,197,178,174,-1,178,197,186,-1,186,181,178,-1,199,198,201,-1,201,200,199,-1,202,205,204,-1,204,203,202,-1,203,206,207,-1,207,202,203,-1,205,208,209,-1,209,204,205,-1,199,200,207,-1,207,206,199,-1,199,211,210,-1,210,198,199,-1,216,213,214,-1,214,215,216,-1,217,218,219,-1,219,220,217,-1,239,215,212,-1,212,237,239,-1,216,240,247,-1,247,221,216,-1,240,216,215,-1,215,239,240,-1,215,214,222,-1,222,212,215,-1,214,213,218,-1,218,222,214,-1,213,216,221,-1,221,223,213,-1,224,238,241,-1,224,212,225,-1,213,223,219,-1,219,218,213,-1,218,217,222,-1,227,244,242,-1,242,226,227,-1,229,230,231,-1,231,228,229,-1,232,220,219,-1,219,233,232,-1,245,244,227,-1,227,230,245,-1,229,221,247,-1,247,246,229,-1,246,245,230,-1,230,229,246,-1,230,227,234,-1,234,231,230,-1,231,234,233,-1,233,228,231,-1,228,223,221,-1,221,229,228,-1,226,242,243,-1,243,235,226,-1,227,226,236,-1,236,234,227,-1,228,233,219,-1,219,223,228,-1,232,233,234,-1,234,236,232,-1,236,226,235,-1,224,241,237,-1,237,212,224,-1,225,212,222,-1,248,256,254,-1,254,253,248,-1,251,254,256,-1,256,255,251,-1,251,255,259,-1,259,252,251,-1,257,258,259,-1,259,255,257,-1,270,265,292,-1,292,269,270,-1,271,272,273,-1,251,252,290,-1,290,287,251,-1,253,254,289,-1,289,288,253,-1,268,266,276,-1,276,277,268,-1,270,269,273,-1,273,272,270,-1,266,265,280,-1,280,276,266,-1,267,268,277,-1,277,281,267,-1,280,265,270,-1,270,282,280,-1,272,271,284,-1,284,283,272,-1,282,270,272,-1,272,283,282,-1,289,287,274,-1,274,273,289,-1,267,281,286,-1,286,279,267,-1,271,274,275,-1,275,284,271,-1,257,255,256,-1,256,262,257,-1,262,256,248,-1,248,285,262,-1,263,260,250,-1,250,249,263,-1,279,278,260,-1,260,267,279,-1,260,278,261,-1,261,250,260,-1,250,261,285,-1,285,248,250,-1,268,267,260,-1,260,263,268,-1,248,253,249,-1,249,250,248,-1,275,274,287,-1,287,290,275,-1,289,273,269,-1,269,288,289,-1,254,251,287,-1,287,289,254,-1,253,288,264,-1,264,249,253,-1,266,268,263,-1,263,291,266,-1,263,249,264,-1,264,291,263,-1,264,288,269,-1,269,292,264,-1,265,266,291,-1,291,292,265,-1,292,291,264,-1,258,257,294,-1,294,293,258,-1,257,262,295,-1,295,294,257,-1,262,285,296,-1,296,295,262,-1,285,261,297,-1,297,296,285,-1,261,278,298,-1,298,297,261,-1,278,279,299,-1,299,298,278,-1,279,286,300,-1,300,299,279,-1,273,274,271,-1,301,302,303,-1,301,303,304,-1,301,304,305,-1,301,305,306,-1,301,306,307,-1,301,307,308,-1,310,303,302,-1,302,309,310,-1,311,304,303,-1,303,310,311,-1,312,305,304,-1,304,311,312,-1,313,306,305,-1,305,312,313,-1,314,307,306,-1,306,313,314,-1,315,308,307,-1,307,314,315,-1,317,310,309,-1,309,316,317,-1,318,311,310,-1,310,317,318,-1,319,312,311,-1,311,318,319,-1,320,313,312,-1,312,319,320,-1,321,314,313,-1,313,320,321,-1,322,315,314,-1,314,321,322,-1,324,317,316,-1,316,323,324,-1,325,318,317,-1,317,324,325,-1,326,319,318,-1,318,325,326,-1,327,320,319,-1,319,326,327,-1,328,321,320,-1,320,327,328,-1,329,322,321,-1,321,328,329,-1,331,324,323,-1,323,330,331,-1,332,325,324,-1,324,331,332,-1,333,326,325,-1,325,332,333,-1,334,327,326,-1,326,333,334,-1,335,328,327,-1,327,334,335,-1,336,329,328,-1,328,335,336,-1,337,331,330,-1,337,332,331,-1,337,333,332,-1,337,334,333,-1,337,335,334,-1,337,336,335,-1,338,341,340,-1,340,339,338,-1,343,342,339,-1,339,340,343,-1,343,344,345,-1,345,342,343,-1,346,342,345,-1,345,347,346,-1,349,348,351,-1,351,350,349,-1,352,354,353,-1,343,356,355,-1,355,344,343,-1,341,358,357,-1,357,340,341,-1,359,362,361,-1,361,360,359,-1,349,353,354,-1,354,348,349,-1,360,361,363,-1,363,350,360,-1,365,364,362,-1,362,359,365,-1,363,366,349,-1,349,350,363,-1,353,367,368,-1,368,352,353,-1,366,367,353,-1,353,349,366,-1,357,354,369,-1,369,356,357,-1,365,370,371,-1,371,364,365,-1,352,368,372,-1,372,369,352,-1,346,373,339,-1,339,342,346,-1,373,374,338,-1,338,339,373,-1,375,378,377,-1,377,376,375,-1,370,365,376,-1,376,379,370,-1,376,377,380,-1,380,379,376,-1,377,338,374,-1,374,380,377,-1,359,375,376,-1,376,365,359,-1,338,377,378,-1,378,341,338,-1,372,355,356,-1,356,369,372,-1,357,358,348,-1,348,354,357,-1,340,357,356,-1,356,343,340,-1,341,378,381,-1,381,358,341,-1,360,382,375,-1,375,359,360,-1,375,382,381,-1,381,378,375,-1,381,351,348,-1,348,358,381,-1,350,351,382,-1,382,360,350,-1,351,381,382,-1,347,384,383,-1,383,346,347,-1,346,383,385,-1,385,373,346,-1,373,385,386,-1,386,374,373,-1,374,386,387,-1,387,380,374,-1,380,387,388,-1,388,379,380,-1,379,388,389,-1,389,370,379,-1,370,389,390,-1,390,371,370,-1,354,352,369,-1,391,393,392,-1,391,394,393,-1,391,395,394,-1,391,396,395,-1,391,397,396,-1,391,398,397,-1,400,399,392,-1,392,393,400,-1,401,400,393,-1,393,394,401,-1,402,401,394,-1,394,395,402,-1,403,402,395,-1,395,396,403,-1,404,403,396,-1,396,397,404,-1,405,404,397,-1,397,398,405,-1,407,406,399,-1,399,400,407,-1,408,407,400,-1,400,401,408,-1,409,408,401,-1,401,402,409,-1,410,409,402,-1,402,403,410,-1,411,410,403,-1,403,404,411,-1,412,411,404,-1,404,405,412,-1,414,413,406,-1,406,407,414,-1,415,414,407,-1,407,408,415,-1,416,415,408,-1,408,409,416,-1,417,416,409,-1,409,410,417,-1,418,417,410,-1,410,411,418,-1,419,418,411,-1,411,412,419,-1,421,420,413,-1,413,414,421,-1,422,421,414,-1,414,415,422,-1,423,422,415,-1,415,416,423,-1,424,423,416,-1,416,417,424,-1,425,424,417,-1,417,418,425,-1,426,425,418,-1,418,419,426,-1,427,420,421,-1,427,421,422,-1,427,422,423,-1,427,423,424,-1,427,424,425,-1,427,425,426,-1}, 2452);
SoCoordinate* SoCoordinate209 = new SoCoordinate();
SoCoordinate209->setPoint(new float[]{1.347,-0.451,2.233,4.628,6.949,2.849,4.722,6.218,0.6474,1.261,7.645,6.098,4.721,6.216,0.6388,1.167,0.0593,4.651,3.818,7.274,4.804,4.031,2.66,2.757,0.9545,3.01,5.723,4.104,2.689,1.468,3.284,2.92,4.595,3.676,4.156,4.731,4.295,3.948,2.805,0.8864,4.096,5.634,3.699,1.708,1.553,2.958,1.733,4.611,3.636,1.69,2.775,0.9615,2.101,5.868,1.938,0.5483,-1.673,0.8166,0.699,-2.343,2.737,7.542,5.461,2.119,2.964,5.227,2.397,4.125,5.169,1.921,1.908,5.259,2.485,0.423,3.241,0.8325,1.089,5.606,2.535,0.4128,1.812,2.103,0.6668,4.658,2.5,0.4559,-0.0601,1.423,1.295,5.285,1.352,-0.3835,3.744,4.446,3.839,1.447,4.715,4.964,1.604,4.198,2.871,-0.5614,4.617,4.064,-0.4436,1.189,-0.2955,0.1951,0.8412,-0.507,0.9623,0.4259,-0.1153,-1.289,1.104,-0.1534,-0.6998,0.436,2.439,6.258,0.4089,2.098,6.335,2.651,5.631,5.415,3.844,5.449,4.926,1.176,5.74,5.972,4.616,5.285,2.821,0.0,0.7175,-2.497,0.0,-0.1175,-1.377,3.074,1.863,-2.101,3.655,1.774,-0.5777,-0.9545,3.01,5.723,-0.436,2.439,6.258,-0.4089,2.098,6.335,-0.9615,2.101,5.868,-4.104,2.689,1.468,-4.031,2.66,2.757,-3.636,1.69,2.775,-3.699,1.708,1.553,-3.284,2.92,4.595,-2.958,1.733,4.611,-3.655,1.774,-0.5777,-4.198,2.871,-0.5614,-2.119,2.964,5.227,-1.921,1.908,5.259,-3.818,7.274,4.804,-2.737,7.542,5.461,-2.651,5.631,5.415,-3.844,5.449,4.926,-0.8864,4.096,5.634,0.0,4.021,5.992,0.0,3.156,6.097,-4.446,3.839,1.447,-4.295,3.948,2.805,-3.676,4.156,4.731,-2.535,0.4128,1.812,-2.485,0.423,3.241,-1.352,-0.3835,3.744,-1.347,-0.451,2.233,-2.103,0.6668,4.658,-1.167,0.0593,4.651,-0.8325,1.089,5.606,0.0,0.9462,5.722,0.0,-0.2405,4.778,-2.397,4.125,5.169,-1.176,5.74,5.972,0.0,5.76,6.279,-4.715,4.964,1.604,-4.722,6.218,0.6474,-4.628,6.949,2.849,-4.616,5.285,2.821,0.0,2.492,6.441,-1.423,1.295,5.285,-2.5,0.4559,-0.0601,0.0,-0.679,2.5,0.0,-0.6709,1.23,-0.8412,-0.507,0.9623,-1.189,-0.2955,0.1951,-1.261,7.645,6.098,0.0,-0.6266,4.038,-0.8166,0.699,-2.343,-1.938,0.5483,-1.673,-1.104,-0.1534,-0.6998,-0.4259,-0.1153,-1.289,-4.721,6.216,0.6388,-4.617,4.064,-0.4436,0.0,2.25,6.59,0.0,2.223,6.599,0.0,1.928,6.427,0.0,7.682,6.351,0.0,1.548,6.056,-3.074,1.863,-2.101,2.515,0.0567,-1.724,3.116,0.1642,-0.0862,1.197,0.0172,-2.576,2.313,-0.1743,-1.313,2.844,-0.0617,0.6026,1.017,-0.2137,-2.141,2.313,3.881,-1.313,4.691,3.858,0.694,1.017,3.932,-2.141,2.727,0.8574,-2.145,3.609,0.8154,-0.1959,1.393,0.8849,-3.079,2.313,0.8051,-1.313,3.467,0.8154,0.6474,1.017,0.8002,-2.141,2.955,2.018,-2.499,1.466,2.077,-3.384,0.0,-0.2179,-2.407,0.0,3.928,-2.407,0.0,0.013,-2.878,3.993,8.848,3.33,4.169,9.461,1.118,2.616,10.88,1.153,2.343,10.51,3.623,5.143,5.153,0.7479,4.83,4.806,2.669,5.243,6.594,0.8329,4.885,5.192,-0.4901,4.661,3.499,-0.4907,-2.727,0.8574,-2.145,-3.609,0.8154,-0.1959,-3.116,0.1642,-0.0862,-2.515,0.0567,-1.724,-1.197,0.0172,-2.576,-1.393,0.8849,-3.079,-2.844,-0.0617,0.6026,-2.313,-0.1743,-1.313,-1.017,-0.2137,-2.141,-3.467,0.8154,0.6474,-2.313,0.8051,-1.313,-1.017,0.8002,-2.141,-4.665,3.858,0.694,-2.313,3.881,-1.313,-1.017,3.932,-2.141,0.0,0.796,-2.407,-4.661,3.499,-0.4907,-2.955,2.018,-2.499,0.0,0.9434,-3.395,0.0,2.135,-3.709,-1.466,2.077,-3.384,-5.143,5.153,0.7479,-4.169,9.461,1.118,-2.616,10.88,1.153,-5.243,6.594,0.8329,-4.97,6.396,2.895,0.0,11.14,3.751,0.0,11.56,1.166,-4.885,5.192,-0.4901,4.373,5.977,4.846,1.445,7.811,6.204,2.658,7.168,5.823,3.573,7.81,5.042,1.764,9.067,5.313,1.13,5.113,6.272,4.054,4.396,4.649,1.353,6.061,6.45,2.53,5.776,5.838,-0.0423,5.813,6.684,-0.1479,4.81,6.515,0.0,9.678,5.365,-0.0209,8.106,6.433,-4.201,5.977,4.846,-4.176,4.518,4.444,-4.062,3.723,3.936,-1.53,7.811,6.204,-2.636,7.168,5.823,-3.628,7.81,5.042,-1.849,9.067,5.313,-1.753,4.463,6.241,-1.675,5.614,6.47,-2.999,5.638,5.677,-3.195,4.24,5.557,3.344,4.844,5.174,4.978,6.396,2.895,4.446,3.86,2.618,-4.857,4.806,2.669,-4.576,3.83,2.624,-3.993,8.848,3.33,-2.343,10.51,3.623,5.01,3.731,0.1406,5.496,6.833,1.852,5.27,5.229,2.998,2.221,4.094,-4.86,5.128,5.726,-0.6174,4.074,4.682,-3.332,2.068,2.268,-4.211,3.965,2.67,-2.693,3.688,0.9418,-1.942,1.736,0.6038,-3.374,4.529,6.731,5.074,4.648,4.179,4.238,4.509,2.071,1.014,4.815,8.276,3.851,5.172,8.637,0.7876,2.586,11.54,1.059,2.779,11.0,3.491,2.334,8.188,6.341,2.687,9.834,5.2,2.0,6.813,6.506,3.96,9.975,-1.425,2.659,11.19,-1.274,1.167,10.49,-5.662,1.987,11.14,-3.85,3.414,9.136,-3.568,1.817,8.376,-5.181,4.065,5.747,5.263,0.0,10.73,-6.383,2.197,6.392,-5.027,4.853,7.736,-1.238,3.99,6.837,-3.576,0.0,6.185,-5.428,4.709,9.654,2.787,4.171,10.54,0.9377,0.0,11.52,3.612,1.479,0.5426,-3.026,3.424,0.8784,-1.742,4.212,1.889,1.14,4.344,3.942,4.297,3.751,5.336,5.265,1.863,6.322,6.374,0.0,12.29,-8.721,0.4456,13.39,-7.476,0.7717,13.18,-7.72,0.8911,12.88,-8.053,0.7717,12.59,-8.387,0.4456,12.37,-8.631,0.0,11.37,-8.776,0.7717,13.28,-6.62,1.337,12.91,-7.043,1.543,12.39,-7.621,1.337,11.88,-8.199,0.7717,11.51,-8.622,0.8911,12.75,-5.875,1.543,12.32,-6.363,1.782,11.73,-7.03,1.543,11.14,-7.697,0.8911,10.7,-8.186,0.7717,11.95,-5.439,1.337,11.57,-5.862,1.543,11.06,-6.439,1.337,10.55,-7.017,0.7717,10.17,-7.44,0.4456,11.08,-5.429,0.7717,10.87,-5.673,0.8911,10.57,-6.007,0.7717,10.28,-6.341,0.4456,10.06,-6.585,0.0,3.91,-5.207,0.0,0.5571,-3.852,0.0,10.23,5.374,0.0,8.516,6.595,0.0,7.179,6.8,0.0,8.083,-5.553,0.0,13.06,-8.212,0.0,12.91,-5.696,0.0,12.08,-5.284,0.0,11.16,-5.34,-5.01,3.731,0.1406,-3.965,2.67,-2.693,-4.074,4.682,-3.332,-5.128,5.726,-0.6174,-2.068,2.268,-4.211,-2.221,4.094,-4.86,0.0,2.219,-4.634,-1.736,0.6038,-3.374,-3.96,9.975,-1.425,-2.659,11.19,-1.274,-2.586,11.54,1.059,-4.171,10.54,0.9377,-1.167,10.49,-5.662,-1.987,11.14,-3.85,-3.414,9.136,-3.568,-2.197,6.392,-5.027,-3.99,6.837,-3.576,-4.853,7.736,-1.238,-2.687,9.834,5.2,-2.779,11.0,3.491,0.0,12.08,1.157,-2.334,8.188,6.341,0.0,11.78,-1.08,0.0,11.68,-3.791,-1.817,8.376,-5.181,-2.0,6.813,6.506,-3.688,0.9418,-1.942,-4.509,2.071,1.014,-4.815,8.276,3.851,-4.529,6.731,5.074,-5.27,5.229,2.998,-5.496,6.833,1.852,-4.065,5.747,5.263,-4.648,4.179,4.238,-5.172,8.637,0.7876,-4.709,9.654,2.787,-1.479,0.5426,-3.026,0.0,0.5182,-3.38,-3.424,0.8784,-1.742,-4.212,1.889,1.14,-4.344,3.942,4.297,-3.751,5.336,5.265,-1.863,6.322,6.374,0.0,6.681,6.643,0.0,13.47,-7.386,-0.4456,13.39,-7.476,-0.7717,13.18,-7.72,-0.8911,12.88,-8.053,-0.7717,12.59,-8.387,-0.4456,12.37,-8.631,0.0,13.42,-6.465,-0.7717,13.28,-6.62,-1.337,12.91,-7.043,-1.543,12.39,-7.621,-1.337,11.88,-8.199,-0.7717,11.51,-8.622,-0.8911,12.75,-5.875,-1.543,12.32,-6.363,-1.782,11.73,-7.03,-1.543,11.14,-7.697,-0.8911,10.7,-8.186,0.0,10.55,-8.364,-0.7717,11.95,-5.439,-1.337,11.57,-5.862,-1.543,11.06,-6.439,-1.337,10.55,-7.017,-0.7717,10.17,-7.44,0.0,10.04,-7.595,-0.4456,11.08,-5.429,-0.7717,10.87,-5.673,-0.8911,10.57,-6.007,-0.7717,10.28,-6.341,-0.4456,10.06,-6.585,0.0,9.981,-6.674,0.0,10.39,-5.849}, 1056);
SoIndexedFaceSet208->setCoord(*SoCoordinate209);

SoTextureCoordinate* SoTextureCoordinate210 = new SoTextureCoordinate();
SoTextureCoordinate210->setPoint(new float[]{0.0714,0.7634,0.0438,0.7489,0.0432,0.7344,0.071,0.7309,0.3314,0.7261,0.2498,0.753,0.2361,0.7162,0.3067,0.6925,0.1815,0.7717,0.1711,0.7262,0.3712,0.6404,0.3987,0.7199,0.1256,0.768,0.1218,0.7289,0.2067,0.9489,0.1485,0.9512,0.1438,0.8779,0.1986,0.8711,0.0676,0.8097,0.3568,0.7726,0.2644,0.803,0.1935,0.8207,0.2599,0.6327,0.1854,0.6646,0.1444,0.6271,0.1972,0.5951,0.143,0.6803,0.1158,0.6442,0.0817,0.6803,0.1358,0.8157,0.0747,0.8797,0.3481,0.823,0.368,0.8682,0.2893,0.934,0.2757,0.8544,0.1065,0.6948,0.3067,0.5966,0.3679,0.5476,0.39,0.5117,0.2432,0.5483,0.2764,0.5481,0.0773,0.9478,0.3045,0.54,0.3258,0.5018,0.3707,0.8663,0.418,0.7731,0.0206,0.9439,0.0268,0.8055,0.0498,0.6614,0.1577,0.5496,0.3316,0.4816,0.0224,0.7388,0.027,0.723,0.0238,0.8661,0.3936,0.4762,0.0773,0.6149,0.1039,0.5852,0.2005,0.5262,0.0225,0.7367,0.0269,0.7687,0.0358,0.7033,0.0234,0.7507,0.3679,0.5476,0.3067,0.5966,0.0714,0.7634,0.0438,0.7489,0.0432,0.7344,0.071,0.7309,0.3314,0.7261,0.2498,0.753,0.2361,0.7162,0.3067,0.6925,0.1815,0.7717,0.1711,0.7262,0.3712,0.6404,0.3987,0.7199,0.1256,0.768,0.1218,0.7289,0.2067,0.9489,0.1485,0.9512,0.1438,0.8779,0.1986,0.8711,0.0676,0.8097,0.0268,0.8055,0.0269,0.7687,0.3568,0.7726,0.2644,0.803,0.1935,0.8207,0.2599,0.6327,0.1854,0.6646,0.1444,0.6271,0.1972,0.5951,0.143,0.6803,0.1158,0.6442,0.0817,0.6803,0.0498,0.6614,0.0773,0.6149,0.1358,0.8157,0.0747,0.8797,0.0238,0.8661,0.3481,0.823,0.368,0.8682,0.2893,0.934,0.2757,0.8544,0.0234,0.7507,0.1065,0.6948,0.3067,0.5966,0.1577,0.5496,0.2005,0.5262,0.2432,0.5483,0.2764,0.5481,0.0773,0.9478,0.1039,0.5852,0.39,0.5117,0.3679,0.5476,0.3045,0.54,0.3258,0.5018,0.3707,0.8663,0.418,0.7731,0.0224,0.7388,0.0225,0.7367,0.027,0.723,0.0206,0.9439,0.3316,0.4816,0.3936,0.4762,0.0358,0.7033,0.3679,0.5476,0.3067,0.5966,0.8934,0.2713,0.9305,0.2712,0.9059,0.2338,0.9348,0.2356,0.8628,0.2683,0.8847,0.2317,0.9348,0.2356,0.9059,0.2338,0.8847,0.2317,0.9348,0.2356,0.9059,0.2338,0.8847,0.2317,0.9059,0.2338,0.9348,0.2356,0.8847,0.2317,0.9348,0.2356,0.9348,0.2356,0.9348,0.2356,0.9348,0.2356,0.8934,0.2713,0.9305,0.2712,0.8628,0.2683,0.8636,0.2296,0.8636,0.2296,0.8636,0.2296,0.8636,0.2296,0.8322,0.2652,0.8322,0.2652,0.9168,0.0808,0.8993,0.1056,0.8759,0.0803,0.888,0.0632,0.8379,0.1147,0.8144,0.1331,0.8378,0.1668,0.8072,0.1847,0.7911,0.1453,0.7456,0.1529,0.7468,0.1968,0.8841,0.1249,0.9168,0.0808,0.8993,0.1056,0.8934,0.2713,0.9305,0.2712,0.9348,0.2356,0.9059,0.2338,0.8847,0.2317,0.8628,0.2683,0.9348,0.2356,0.9059,0.2338,0.8847,0.2317,0.9348,0.2356,0.9059,0.2338,0.8847,0.2317,0.9348,0.2356,0.9059,0.2338,0.8847,0.2317,0.8636,0.2296,0.8636,0.2296,0.9348,0.2356,0.9348,0.2356,0.9348,0.2356,0.9348,0.2356,0.8934,0.2713,0.9305,0.2712,0.8322,0.2652,0.8322,0.2652,0.8628,0.2683,0.8636,0.2296,0.8636,0.2296,0.9168,0.0808,0.8993,0.1056,0.8759,0.0803,0.888,0.0632,0.8144,0.1331,0.8378,0.1668,0.8072,0.1847,0.7911,0.1453,0.8841,0.1249,0.8379,0.1147,0.7456,0.1529,0.7468,0.1968,0.9168,0.0808,0.8993,0.1056,0.8188,0.0815,0.7709,0.0832,0.7923,0.0858,0.7979,0.1034,0.7785,0.1104,0.7662,0.0373,0.7703,0.06,0.7403,0.0555,0.7379,0.0282,0.7444,0.117,0.7979,0.0586,0.7432,0.0852,0.8458,0.0493,0.8235,0.0467,0.6353,0.0614,0.6546,0.0821,0.7148,0.0869,0.71,0.1144,0.6743,0.1018,0.6921,0.0855,0.6978,0.0293,0.7058,0.0571,0.6789,0.0652,0.6204,0.048,0.6594,0.0352,0.8379,0.1147,0.888,0.0632,0.8144,0.1331,0.7911,0.1453,0.8759,0.0803,0.6114,0.0855,0.5975,0.0597,0.6271,0.108,0.6559,0.1272,0.6998,0.1495,0.7456,0.1529,0.5828,0.7987,0.547,0.844,0.5346,0.8122,0.6713,0.8344,0.7091,0.8309,0.5862,0.8382,0.6343,0.835,0.6688,0.7954,0.6364,0.796,0.6636,0.7584,0.6908,0.7532,0.7046,0.7902,0.4948,0.8341,0.5157,0.7891,0.6249,0.764,0.5074,0.8645,0.553,0.8788,0.5355,0.9333,0.4974,0.9188,0.4517,0.8634,0.472,0.8958,0.581,0.9118,0.5747,0.9393,0.656,0.949,0.6192,0.948,0.6192,0.9082,0.6599,0.9101,0.6916,0.9144,0.478,0.9587,0.443,0.9277,0.4841,0.8194,0.4476,0.8432,0.5258,0.9789,0.4177,0.8838,0.5713,0.984,0.6235,0.9793,0.6725,0.9619,0.5695,0.7661,0.4127,0.8533,0.6656,0.8753,0.5901,0.8705,0.629,0.8721,0.7033,0.8783,0.5186,0.8891,0.5424,0.9106,0.6842,0.7412,0.6577,0.7467,0.6207,0.755,0.565,0.7597,0.5118,0.7838,0.4814,0.8125,0.4473,0.8352,0.4142,0.8403,0.2705,0.4135,0.2852,0.4209,0.2836,0.4194,0.2792,0.4156,0.2733,0.4103,0.2673,0.4051,0.263,0.4012,0.2614,0.3998,0.3016,0.4199,0.2988,0.4174,0.2913,0.4107,0.281,0.4016,0.2707,0.3925,0.2632,0.3859,0.2604,0.3834,0.3153,0.4108,0.3121,0.408,0.3034,0.4003,0.2915,0.3898,0.2796,0.3792,0.2709,0.3715,0.2677,0.3687,0.3226,0.3961,0.3198,0.3937,0.3123,0.387,0.302,0.3779,0.2917,0.3688,0.2842,0.3621,0.2814,0.3597,0.3216,0.3797,0.32,0.3783,0.3157,0.3744,0.3097,0.3692,0.3038,0.3639,0.2994,0.3601,0.2978,0.3587,0.3125,0.366,0.5828,0.7987,0.6364,0.796,0.6343,0.835,0.5862,0.8382,0.6688,0.7954,0.6713,0.8344,0.7091,0.8309,0.7046,0.7902,0.6636,0.7584,0.6908,0.7532,0.581,0.9118,0.5747,0.9393,0.5355,0.9333,0.5424,0.9106,0.656,0.949,0.6192,0.948,0.6192,0.9082,0.7033,0.8783,0.6656,0.8753,0.629,0.8721,0.5901,0.8705,0.472,0.8958,0.4974,0.9188,0.478,0.9587,0.443,0.9277,0.5258,0.9789,0.4177,0.8838,0.4517,0.8634,0.5713,0.984,0.6235,0.9793,0.6725,0.9619,0.6599,0.9101,0.4476,0.8432,0.4127,0.8533,0.6916,0.9144,0.6249,0.764,0.5695,0.7661,0.5074,0.8645,0.4948,0.8341,0.5346,0.8122,0.547,0.844,0.4841,0.8194,0.5157,0.7891,0.553,0.8788,0.5186,0.8891,0.6577,0.7467,0.6842,0.7412,0.6207,0.755,0.565,0.7597,0.5118,0.7838,0.4814,0.8125,0.4473,0.8352,0.4142,0.8403,0.2705,0.4135,0.2852,0.4209,0.2836,0.4194,0.2792,0.4156,0.2733,0.4103,0.2673,0.4051,0.263,0.4012,0.2614,0.3998,0.3016,0.4199,0.2988,0.4174,0.2913,0.4107,0.281,0.4016,0.2707,0.3925,0.2632,0.3859,0.2604,0.3834,0.3153,0.4108,0.3121,0.408,0.3034,0.4003,0.2915,0.3898,0.2796,0.3792,0.2709,0.3715,0.2677,0.3687,0.3226,0.3961,0.3198,0.3937,0.3123,0.387,0.302,0.3779,0.2917,0.3688,0.2842,0.3621,0.2814,0.3597,0.3216,0.3797,0.32,0.3783,0.3157,0.3744,0.3097,0.3692,0.3038,0.3639,0.2994,0.3601,0.2978,0.3587,0.3125,0.366}, 856);
SoIndexedFaceSet208->setTexCoord(*SoTextureCoordinate210);

SoShape204->setGeometry(*SoIndexedFaceSet208);

SoTransform203->addChild(*SoShape204);

SoHAnimSegment202->addChild(*SoTransform203);

SoHAnimJoint201->addChildren(*SoHAnimSegment202);

SoHAnimJoint191->addChildren(*SoHAnimJoint201);

SoHAnimJoint121->addChildren(*SoHAnimJoint191);

SoHAnimJoint31->addChildren(*SoHAnimJoint121);

SoHAnimHumanoid23->setSkeleton(*SoHAnimJoint31);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint211);

SoHAnimJoint* SoHAnimJoint212 = new SoHAnimJoint();
SoHAnimJoint212->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint212);

SoHAnimJoint* SoHAnimJoint213 = new SoHAnimJoint();
SoHAnimJoint213->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint213);

SoHAnimJoint* SoHAnimJoint214 = new SoHAnimJoint();
SoHAnimJoint214->setUSE(QString("hanim_vl5"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint214);

SoHAnimJoint* SoHAnimJoint215 = new SoHAnimJoint();
SoHAnimJoint215->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint215);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint216);

SoHAnimJoint* SoHAnimJoint217 = new SoHAnimJoint();
SoHAnimJoint217->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint217);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint218);

SoHAnimJoint* SoHAnimJoint219 = new SoHAnimJoint();
SoHAnimJoint219->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint219);

SoHAnimJoint* SoHAnimJoint220 = new SoHAnimJoint();
SoHAnimJoint220->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint220);

SoHAnimJoint* SoHAnimJoint221 = new SoHAnimJoint();
SoHAnimJoint221->setUSE(QString("hanim_l_metatarsophalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint221);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setUSE(QString("hanim_r_metatarsophalangeal_2"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint222);

SoHAnimJoint* SoHAnimJoint223 = new SoHAnimJoint();
SoHAnimJoint223->setUSE(QString("hanim_l_radiocarpal"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint223);

SoHAnimJoint* SoHAnimJoint224 = new SoHAnimJoint();
SoHAnimJoint224->setUSE(QString("hanim_r_radiocarpal"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint224);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setUSE(QString("hanim_l_talocrural"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint227);

SoHAnimJoint* SoHAnimJoint228 = new SoHAnimJoint();
SoHAnimJoint228->setUSE(QString("hanim_r_talocrural"));
SoHAnimHumanoid23->setJoints(*SoHAnimJoint228);

SoHAnimSegment* SoHAnimSegment229 = new SoHAnimSegment();
SoHAnimSegment229->setUSE(QString("hanim_l5"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment229);

SoHAnimSegment* SoHAnimSegment230 = new SoHAnimSegment();
SoHAnimSegment230->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment230);

SoHAnimSegment* SoHAnimSegment231 = new SoHAnimSegment();
SoHAnimSegment231->setUSE(QString("hanim_sacrum"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment231);

SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->setUSE(QString("hanim_skull"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment232);

SoHAnimSegment* SoHAnimSegment233 = new SoHAnimSegment();
SoHAnimSegment233->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment233);

SoHAnimSegment* SoHAnimSegment234 = new SoHAnimSegment();
SoHAnimSegment234->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment234);

SoHAnimSegment* SoHAnimSegment235 = new SoHAnimSegment();
SoHAnimSegment235->setUSE(QString("hanim_l_carpal"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment235);

SoHAnimSegment* SoHAnimSegment236 = new SoHAnimSegment();
SoHAnimSegment236->setUSE(QString("hanim_r_carpal"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment236);

SoHAnimSegment* SoHAnimSegment237 = new SoHAnimSegment();
SoHAnimSegment237->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment237);

SoHAnimSegment* SoHAnimSegment238 = new SoHAnimSegment();
SoHAnimSegment238->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment238);

SoHAnimSegment* SoHAnimSegment239 = new SoHAnimSegment();
SoHAnimSegment239->setUSE(QString("hanim_l_talus"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment239);

SoHAnimSegment* SoHAnimSegment240 = new SoHAnimSegment();
SoHAnimSegment240->setUSE(QString("hanim_r_talus"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment240);

SoHAnimSegment* SoHAnimSegment241 = new SoHAnimSegment();
SoHAnimSegment241->setUSE(QString("hanim_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment241);

SoHAnimSegment* SoHAnimSegment242 = new SoHAnimSegment();
SoHAnimSegment242->setUSE(QString("hanim_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment242);

SoHAnimSegment* SoHAnimSegment243 = new SoHAnimSegment();
SoHAnimSegment243->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment243);

SoHAnimSegment* SoHAnimSegment244 = new SoHAnimSegment();
SoHAnimSegment244->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment244);

SoHAnimSegment* SoHAnimSegment245 = new SoHAnimSegment();
SoHAnimSegment245->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment245);

SoHAnimSegment* SoHAnimSegment246 = new SoHAnimSegment();
SoHAnimSegment246->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid23->setSegments(*SoHAnimSegment246);

SoNode19->addChild(*SoHAnimHumanoid23);

SoSceneManager0->setSceneGraph(*SoNode19);

return 0;
}
