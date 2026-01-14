
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
Someta3->setContent(QString("NancyDiving.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Nancy having fun scuba diving!"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Tom Miller"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translator"));
Someta7->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("created"));
Someta8->setContent(QString("17 December 2001"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("modified"));
Someta9->setContent(QString("Tue, 09 Sep 2025 19:39:12 GMT"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("TODO"));
Someta10->setContent(QString("convert to HAnim 2.0"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("error"));
Someta11->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("hint"));
Someta12->setContent(QString("Default orientation along X axis (vice HAnim required Y axis) since diving posture is typically prone."));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("warning"));
Someta13->setContent(QString("problem with left arm animation"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("warning"));
Someta14->setContent(QString("Viewpoint nodes need to be made child nodes under HAnimHumanoid with containerField='viewpoints'."));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyDiving.x3d"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setSkyColor(new float[]{0.0,0.4,1.0}, 3);
SoBackground17->setGroundColor(new float[]{0.0,0.4,1.0}, 3);
SoNode16->addChild(*SoBackground17);

SoViewpoint* SoViewpoint18 = new SoViewpoint();
SoViewpoint18->setDEF(QString("DefaultViewpoint"));
SoViewpoint18->setDescription(QString("Nancy diving, view from right side"));
SoViewpoint18->setPosition(new float[]{0.0,0.0,3.0});
SoNode16->addChild(*SoViewpoint18);

SoGroup* SoGroup19 = new SoGroup();
SoGroup19->setDEF(QString("HighResolution"));
SoTransform* SoTransform20 = new SoTransform();
SoTransform20->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoTransform* SoTransform21 = new SoTransform();
SoTransform21->setRotation(new float[]{0.0,0.0,1.0,-1.57});
SoGroup* SoGroup22 = new SoGroup();
SoGroup22->setDEF(QString("Viewpoints"));
SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDescription(QString("Nancy diving, view from below"));
SoViewpoint23->setPosition(new float[]{0.0,0.0,4.0});
SoGroup22->addChild(*SoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDescription(QString("Nancy diving, view from ahead"));
SoViewpoint24->setPosition(new float[]{0.0,3.0,0.0});
SoViewpoint24->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGroup22->addChild(*SoViewpoint24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDescription(QString("Nancy diving, view from left side"));
SoViewpoint25->setPosition(new float[]{3.0,0.0,0.0});
SoViewpoint25->setOrientation(new float[]{-0.58,0.58,-0.58,2.09});
SoGroup22->addChild(*SoViewpoint25);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setTranslation(new float[]{0.0,-3.0,-0.8});
SoTransform26->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint* SoViewpoint27 = new SoViewpoint();
SoViewpoint27->setDescription(QString("Nancy diving view from behind"));
SoViewpoint27->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint27->setOrientation(new float[]{0.0,0.0,1.0,3.14});
SoTransform26->addChild(*SoViewpoint27);

SoGroup22->addChild(*SoTransform26);

SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDescription(QString("Nancy diving view from above"));
SoViewpoint28->setPosition(new float[]{0.0,0.0,-4.0});
SoViewpoint28->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoGroup22->addChild(*SoViewpoint28);

SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setTranslation(new float[]{0.0,0.45,-0.04});
SoTransform29->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint* SoViewpoint30 = new SoViewpoint();
SoViewpoint30->setDescription(QString("Nancy diving, view through her goggles"));
SoViewpoint30->setPosition(new float[]{0.0,0.0,0.0});
SoViewpoint30->setOrientation(new float[]{0.0,0.0,1.0,3.14});
SoTransform29->addChild(*SoViewpoint30);

SoGroup22->addChild(*SoTransform29);

SoTransform21->addChild(*SoGroup22);

SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setTranslation(new float[]{0.0,-1.0,0.0});
SoHAnimHumanoid* SoHAnimHumanoid32 = new SoHAnimHumanoid();
SoHAnimHumanoid32->setDEF(QString("hanim_Nancy"));
SoHAnimHumanoid32->X3DNode::setName(QString("Nancy"));
SoHAnimHumanoid32->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint33 = new SoHAnimJoint();
SoHAnimJoint33->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint33->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint33->setCenter(new float[]{-0.00405,0.855,-0.000113});
SoHAnimJoint* SoHAnimJoint34 = new SoHAnimJoint();
SoHAnimJoint34->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint34->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint34->setCenter(new float[]{0.0,1.01,-0.0204});
SoHAnimSegment* SoHAnimSegment35 = new SoHAnimSegment();
SoHAnimSegment35->setDEF(QString("hanim_pelvis"));
SoHAnimSegment35->X3DNode::setName(QString("pelvis"));
SoShape* SoShape36 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance37 = new SoVRMLAppearance();
SoMaterial* SoMaterial38 = new SoMaterial();
SoMaterial38->setDEF(QString("Pants_Color"));
SoMaterial38->setDiffuseColor(new float[]{0.0,0.0,0.502});
SoVRMLAppearance37->addChild(*SoMaterial38);

SoShape36->addChild(*SoVRMLAppearance37);

SoIndexedFaceSet* SoIndexedFaceSet39 = new SoIndexedFaceSet();
SoIndexedFaceSet39->setCreaseAngle(1.14);
SoIndexedFaceSet39->setCoordIndex(new int32_t[]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1}, 712);
SoCoordinate* SoCoordinate40 = new SoCoordinate();
SoCoordinate40->setPoint(new float[]{0.0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1.0,-0.0309,0.117,1.0,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0.0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0.0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1.0,-0.0309,-0.144,1.0,-0.011,-0.117,1.0,0.0164,-0.0314,0.999,0.0502,0.0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0.0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0.0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0.0,0.863,-0.00456,-0.166,0.862,-0.0459,0.0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0.0,0.839,-0.0217,0.0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0.0,0.831,-0.0626,-0.0599,0.812,-0.0545}, 273);
SoIndexedFaceSet39->setCoord(*SoCoordinate40);

SoShape36->setGeometry(*SoIndexedFaceSet39);

SoHAnimSegment35->addChild(*SoShape36);

SoHAnimJoint34->addChildren(*SoHAnimSegment35);

SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->setDEF(QString("hanim_l_hip"));
SoHAnimJoint41->X3DNode::setName(QString("l_hip"));
SoHAnimJoint41->setCenter(new float[]{0.122,0.888271,-0.0693267});
SoHAnimSegment* SoHAnimSegment42 = new SoHAnimSegment();
SoHAnimSegment42->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment42->X3DNode::setName(QString("l_thigh"));
SoShape* SoShape43 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance44 = new SoVRMLAppearance();
SoMaterial* SoMaterial45 = new SoMaterial();
SoMaterial45->setUSE(QString("Pants_Color"));
SoVRMLAppearance44->addChild(*SoMaterial45);

SoShape43->addChild(*SoVRMLAppearance44);

SoIndexedFaceSet* SoIndexedFaceSet46 = new SoIndexedFaceSet();
SoIndexedFaceSet46->setCreaseAngle(1.32);
SoIndexedFaceSet46->setCoordIndex(new int32_t[]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1}, 248);
SoCoordinate* SoCoordinate47 = new SoCoordinate();
SoCoordinate47->setPoint(new float[]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108}, 99);
SoIndexedFaceSet46->setCoord(*SoCoordinate47);

SoShape43->setGeometry(*SoIndexedFaceSet46);

SoHAnimSegment42->addChild(*SoShape43);

SoHAnimJoint41->addChildren(*SoHAnimSegment42);

SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->setDEF(QString("hanim_l_knee"));
SoHAnimJoint48->X3DNode::setName(QString("l_knee"));
SoHAnimJoint48->setCenter(new float[]{0.0738,0.517,-0.0284});
SoHAnimSegment* SoHAnimSegment49 = new SoHAnimSegment();
SoHAnimSegment49->setDEF(QString("hanim_l_calf"));
SoHAnimSegment49->X3DNode::setName(QString("l_calf"));
SoShape* SoShape50 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setUSE(QString("Pants_Color"));
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoIndexedFaceSet* SoIndexedFaceSet53 = new SoIndexedFaceSet();
SoIndexedFaceSet53->setCreaseAngle(1.57);
SoIndexedFaceSet53->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1}, 368);
SoCoordinate* SoCoordinate54 = new SoCoordinate();
SoCoordinate54->setPoint(new float[]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835}, 144);
SoIndexedFaceSet53->setCoord(*SoCoordinate54);

SoShape50->setGeometry(*SoIndexedFaceSet53);

SoHAnimSegment49->addChild(*SoShape50);

SoHAnimJoint48->addChildren(*SoHAnimSegment49);

SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->setDEF(QString("hanim_l_ankle"));
SoHAnimJoint55->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint55->setCenter(new float[]{0.0645,0.0719,-0.048});
SoHAnimSegment* SoHAnimSegment56 = new SoHAnimSegment();
SoHAnimSegment56->setDEF(QString("hanim_l_hindfoot"));
SoHAnimSegment56->X3DNode::setName(QString("l_hindfoot"));
SoShape* SoShape57 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance58 = new SoVRMLAppearance();
SoMaterial* SoMaterial59 = new SoMaterial();
SoMaterial59->setDEF(QString("Shoe_Color"));
SoMaterial59->setAmbientIntensity(0.25);
SoMaterial59->setDiffuseColor(new float[]{0.753,1.0,0.243});
SoVRMLAppearance58->addChild(*SoMaterial59);

SoShape57->addChild(*SoVRMLAppearance58);

SoIndexedFaceSet* SoIndexedFaceSet60 = new SoIndexedFaceSet();
SoIndexedFaceSet60->setCreaseAngle(1.57);
SoIndexedFaceSet60->setCoordIndex(new int32_t[]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1}, 392);
SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setPoint(new float[]{0.0529,0.0,-0.0923,0.0863,0.0,-0.0862,0.0727,0.0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0.0,-0.0594,0.1,0.0219,-0.0594,0.113,0.0,0.0645,0.113,0.0219,0.0645,0.112,0.0,0.117,0.112,0.0156,0.117,0.0701,0.0,0.146,0.0701,0.0156,0.146,0.0468,0.0,0.153,0.0468,0.0156,0.153,0.0215,0.0,0.146,0.0215,0.0156,0.146,0.0165,0.0,0.125,0.0165,0.0156,0.125,0.0211,0.0,0.0377,0.0211,0.0219,0.0377,0.0393,0.0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0.0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608}, 153);
SoIndexedFaceSet60->setCoord(*SoCoordinate61);

SoShape57->setGeometry(*SoIndexedFaceSet60);

SoHAnimSegment56->addChild(*SoShape57);

SoTransform* SoTransform62 = new SoTransform();
SoTransform62->setScale(new float[]{0.015,0.015,0.015});
SoTransform* SoTransform63 = new SoTransform();
SoTransform63->setTranslation(new float[]{6.0,-0.5,-7.5});
SoTransform63->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape64 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance65 = new SoVRMLAppearance();
SoMaterial* SoMaterial66 = new SoMaterial();
SoMaterial66->setDiffuseColor(new float[]{0.753,1.0,0.243});
SoVRMLAppearance65->addChild(*SoMaterial66);

SoShape64->addChild(*SoVRMLAppearance65);

SoExtrusion* SoExtrusion67 = new SoExtrusion();
SoExtrusion67->setDEF(QString("FinExtrusionLeft"));
SoExtrusion67->setCcw(false);
SoExtrusion67->setCreaseAngle(3.14);
SoExtrusion67->setCrossSection(new float[]{-1.0,0.0,-0.8,2.0,-0.7,3.0,0.0,5.2,0.7,3.0,0.8,2.0,1.0,0.0,0.8,-2.0,0.7,-3.0,0.0,-5.2,-0.7,-3.0,-0.8,-2.0,-1.0,0.0}, 26);
SoExtrusion67->setScale(new float[]{0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35}, 18);
SoExtrusion67->setSpine(new float[]{0.0,0.0,1.0,0.0,0.0,5.0,0.0,0.0,8.0,0.0,0.0,12.0,0.0,0.0,15.0,0.5,0.0,18.0,1.5,0.0,25.0,2.5,0.0,30.0,4.0,0.0,34.0}, 27);
SoShape64->setGeometry(*SoExtrusion67);

SoTransform63->addChild(*SoShape64);

SoTransform62->addChild(*SoTransform63);

SoHAnimSegment56->addChild(*SoTransform62);

SoHAnimJoint55->addChildren(*SoHAnimSegment56);

SoHAnimJoint48->addChildren(*SoHAnimJoint55);

SoHAnimJoint41->addChildren(*SoHAnimJoint48);

SoHAnimJoint34->addChildren(*SoHAnimJoint41);

SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->setDEF(QString("hanim_r_hip"));
SoHAnimJoint68->X3DNode::setName(QString("r_hip"));
SoHAnimJoint68->setCenter(new float[]{-0.11,0.892362,-0.0732533});
SoHAnimSegment* SoHAnimSegment69 = new SoHAnimSegment();
SoHAnimSegment69->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment69->X3DNode::setName(QString("r_thigh"));
SoShape* SoShape70 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance71 = new SoVRMLAppearance();
SoMaterial* SoMaterial72 = new SoMaterial();
SoMaterial72->setUSE(QString("Pants_Color"));
SoVRMLAppearance71->addChild(*SoMaterial72);

SoShape70->addChild(*SoVRMLAppearance71);

SoIndexedFaceSet* SoIndexedFaceSet73 = new SoIndexedFaceSet();
SoIndexedFaceSet73->setCreaseAngle(1.61);
SoIndexedFaceSet73->setCoordIndex(new int32_t[]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1}, 240);
SoCoordinate* SoCoordinate74 = new SoCoordinate();
SoCoordinate74->setPoint(new float[]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018}, 96);
SoIndexedFaceSet73->setCoord(*SoCoordinate74);

SoShape70->setGeometry(*SoIndexedFaceSet73);

SoHAnimSegment69->addChild(*SoShape70);

SoHAnimJoint68->addChildren(*SoHAnimSegment69);

SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->setDEF(QString("hanim_r_knee"));
SoHAnimJoint75->X3DNode::setName(QString("r_knee"));
SoHAnimJoint75->setCenter(new float[]{-0.0699,0.51,-0.0166});
SoHAnimSegment* SoHAnimSegment76 = new SoHAnimSegment();
SoHAnimSegment76->setDEF(QString("hanim_r_calf"));
SoHAnimSegment76->X3DNode::setName(QString("r_calf"));
SoShape* SoShape77 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance78 = new SoVRMLAppearance();
SoMaterial* SoMaterial79 = new SoMaterial();
SoMaterial79->setUSE(QString("Pants_Color"));
SoVRMLAppearance78->addChild(*SoMaterial79);

SoShape77->addChild(*SoVRMLAppearance78);

SoIndexedFaceSet* SoIndexedFaceSet80 = new SoIndexedFaceSet();
SoIndexedFaceSet80->setCreaseAngle(1.57);
SoIndexedFaceSet80->setCoordIndex(new int32_t[]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1}, 368);
SoCoordinate* SoCoordinate81 = new SoCoordinate();
SoCoordinate81->setPoint(new float[]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375}, 144);
SoIndexedFaceSet80->setCoord(*SoCoordinate81);

SoShape77->setGeometry(*SoIndexedFaceSet80);

SoHAnimSegment76->addChild(*SoShape77);

SoHAnimJoint75->addChildren(*SoHAnimSegment76);

SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->setDEF(QString("hanim_r_ankle"));
SoHAnimJoint82->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint82->setCenter(new float[]{-0.064,0.0753,-0.0412});
SoHAnimSegment* SoHAnimSegment83 = new SoHAnimSegment();
SoHAnimSegment83->setDEF(QString("hanim_r_hindfoot"));
SoHAnimSegment83->X3DNode::setName(QString("r_hindfoot"));
SoShape* SoShape84 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance85 = new SoVRMLAppearance();
SoMaterial* SoMaterial86 = new SoMaterial();
SoMaterial86->setUSE(QString("Shoe_Color"));
SoVRMLAppearance85->addChild(*SoMaterial86);

SoShape84->addChild(*SoVRMLAppearance85);

SoIndexedFaceSet* SoIndexedFaceSet87 = new SoIndexedFaceSet();
SoIndexedFaceSet87->setCreaseAngle(1.57);
SoIndexedFaceSet87->setCoordIndex(new int32_t[]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1}, 392);
SoCoordinate* SoCoordinate88 = new SoCoordinate();
SoCoordinate88->setPoint(new float[]{-0.0727,0.0,-0.0994,-0.1,0.0,-0.0594,-0.0701,0.0,0.146,-0.0468,0.0,0.153,-0.0215,0.0,0.146,-0.0433,0.0,-0.0534,-0.0529,0.0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0.0,0.125,-0.112,0.0,0.117,-0.0165,0.0,0.0777,-0.0393,0.0,-0.0129,-0.108,0.0,-0.00479,-0.0863,0.0,-0.0862}, 153);
SoIndexedFaceSet87->setCoord(*SoCoordinate88);

SoShape84->setGeometry(*SoIndexedFaceSet87);

SoHAnimSegment83->addChild(*SoShape84);

SoTransform* SoTransform89 = new SoTransform();
SoTransform89->setScale(new float[]{0.015,0.015,0.015});
SoTransform* SoTransform90 = new SoTransform();
SoTransform90->setTranslation(new float[]{-5.0,-0.5,-7.5});
SoTransform90->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape91 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance92 = new SoVRMLAppearance();
SoMaterial* SoMaterial93 = new SoMaterial();
SoMaterial93->setDiffuseColor(new float[]{0.753,1.0,0.243});
SoVRMLAppearance92->addChild(*SoMaterial93);

SoShape91->addChild(*SoVRMLAppearance92);

SoExtrusion* SoExtrusion94 = new SoExtrusion();
SoExtrusion94->setDEF(QString("FinExtrusionRight"));
SoExtrusion94->setCcw(false);
SoExtrusion94->setCreaseAngle(3.14);
SoExtrusion94->setCrossSection(new float[]{-1.0,0.0,-0.8,2.0,-0.7,3.0,0.0,5.2,0.7,3.0,0.8,2.0,1.0,0.0,0.8,-2.0,0.7,-3.0,0.0,-5.2,-0.7,-3.0,-0.8,-2.0,-1.0,0.0}, 26);
SoExtrusion94->setScale(new float[]{0.25,0.25,0.5,0.75,0.5,1.2,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35,0.5,1.35}, 18);
SoExtrusion94->setSpine(new float[]{0.0,0.0,1.0,0.0,0.0,5.0,0.0,0.0,8.0,0.0,0.0,12.0,0.0,0.0,15.0,0.5,0.0,18.0,1.5,0.0,25.0,2.5,0.0,30.0,4.0,0.0,34.0}, 27);
SoShape91->setGeometry(*SoExtrusion94);

SoTransform90->addChild(*SoShape91);

SoTransform89->addChild(*SoTransform90);

SoHAnimSegment83->addChild(*SoTransform89);

SoHAnimJoint82->addChildren(*SoHAnimSegment83);

SoHAnimJoint75->addChildren(*SoHAnimJoint82);

SoHAnimJoint68->addChildren(*SoHAnimJoint75);

SoHAnimJoint34->addChildren(*SoHAnimJoint68);

SoHAnimJoint33->addChildren(*SoHAnimJoint34);

SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->setDEF(QString("hanim_vl1"));
SoHAnimJoint95->X3DNode::setName(QString("vl1"));
SoHAnimJoint95->setCenter(new float[]{-0.00405,1.07,-0.0275});
SoHAnimSegment* SoHAnimSegment96 = new SoHAnimSegment();
SoHAnimSegment96->setDEF(QString("hanim_l1"));
SoHAnimSegment96->X3DNode::setName(QString("l1"));
SoTransform* SoTransform97 = new SoTransform();
SoTransform97->setTranslation(new float[]{-0.00405,1.07,-0.0275});
SoTransform97->setScale(new float[]{1.05,1.05,1.05});
SoShape* SoShape98 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance99 = new SoVRMLAppearance();
SoMaterial* SoMaterial100 = new SoMaterial();
SoMaterial100->setDEF(QString("WetShirtColor"));
SoMaterial100->setAmbientIntensity(0.25);
SoMaterial100->setDiffuseColor(new float[]{0.0,0.0,0.502});
SoVRMLAppearance99->addChild(*SoMaterial100);

SoImageTexture* SoImageTexture101 = new SoImageTexture();
SoImageTexture101->setDEF(QString("small_logo_Tex"));
SoImageTexture101->setUrl(new QString[]{QString("small_logo.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif")}, 2);
SoVRMLAppearance99->addChild(*SoImageTexture101);

SoShape98->addChild(*SoVRMLAppearance99);

SoIndexedFaceSet* SoIndexedFaceSet102 = new SoIndexedFaceSet();
SoIndexedFaceSet102->setCreaseAngle(1.59);
SoIndexedFaceSet102->setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1}, 1234);
SoTextureCoordinate* SoTextureCoordinate103 = new SoTextureCoordinate();
SoTextureCoordinate103->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet102->setTexCoord(*SoTextureCoordinate103);

SoCoordinate* SoCoordinate104 = new SoCoordinate();
SoCoordinate104->setDEF(QString("pointValues"));
SoCoordinate104->setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
SoIndexedFaceSet102->setCoord(*SoCoordinate104);

SoShape98->setGeometry(*SoIndexedFaceSet102);

SoTransform97->addChild(*SoShape98);

SoHAnimSegment96->addChild(*SoTransform97);

SoTransform* SoTransform105 = new SoTransform();
SoTransform105->setTranslation(new float[]{-0.00405,1.07,-0.0275});
SoTransform105->setScale(new float[]{1.25,1.1,1.3});
SoGroup* SoGroup106 = new SoGroup();
SoTransform* SoTransform107 = new SoTransform();
SoTransform107->setTranslation(new float[]{0.0,-1.2,0.0});
SoShape* SoShape108 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance109 = new SoVRMLAppearance();
SoMaterial* SoMaterial110 = new SoMaterial();
SoMaterial110->setDEF(QString("BCLColor"));
SoMaterial110->setAmbientIntensity(0.25);
SoMaterial110->setDiffuseColor(new float[]{0.0588,0.0588,0.0588});
SoMaterial110->setShininess(0.5);
SoVRMLAppearance109->addChild(*SoMaterial110);

SoShape108->addChild(*SoVRMLAppearance109);

SoIndexedFaceSet* SoIndexedFaceSet111 = new SoIndexedFaceSet();
SoIndexedFaceSet111->setSolid(false);
SoIndexedFaceSet111->setCreaseAngle(1.59);
SoIndexedFaceSet111->setCoordIndex(new int32_t[]{4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1}, 772);
SoTextureCoordinate* SoTextureCoordinate112 = new SoTextureCoordinate();
SoTextureCoordinate112->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet111->setTexCoord(*SoTextureCoordinate112);

SoCoordinate* SoCoordinate113 = new SoCoordinate();
SoCoordinate113->setUSE(QString("pointValues"));
SoIndexedFaceSet111->setCoord(*SoCoordinate113);

SoShape108->setGeometry(*SoIndexedFaceSet111);

SoTransform107->addChild(*SoShape108);

SoGroup106->addChild(*SoTransform107);

SoTransform* SoTransform114 = new SoTransform();
SoTransform114->setTranslation(new float[]{0.13,0.22,-0.1});
SoTransform114->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoTransform114->setScale(new float[]{2.0,1.5,1.5});
SoTransform* SoTransform115 = new SoTransform();
SoTransform115->setRotation(new float[]{1.0,0.0,0.0,1.4});
SoShape* SoShape116 = new SoShape();
SoShape116->setDEF(QString("BCLSnorkelPad"));
SoVRMLAppearance* SoVRMLAppearance117 = new SoVRMLAppearance();
SoMaterial* SoMaterial118 = new SoMaterial();
SoMaterial118->setUSE(QString("BCLColor"));
SoVRMLAppearance117->addChild(*SoMaterial118);

SoShape116->addChild(*SoVRMLAppearance117);

SoExtrusion* SoExtrusion119 = new SoExtrusion();
SoExtrusion119->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013}, 18);
SoExtrusion119->setSpine(new float[]{-0.03,0.01,0.0,-0.005,0.04,0.0,0.0,0.06,0.0,-0.01,0.075,0.0}, 12);
SoShape116->setGeometry(*SoExtrusion119);

SoTransform115->addChild(*SoShape116);

SoTransform114->addChild(*SoTransform115);

SoGroup106->addChild(*SoTransform114);

SoTransform* SoTransform120 = new SoTransform();
SoTransform120->setTranslation(new float[]{0.07,0.08,0.125});
SoTransform120->setRotation(new float[]{-1.0,0.0,0.0,0.8});
SoShape* SoShape121 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance122 = new SoVRMLAppearance();
SoMaterial* SoMaterial123 = new SoMaterial();
SoMaterial123->setDEF(QString("BCLSnorkel"));
SoMaterial123->setDiffuseColor(new float[]{0.25,0.25,0.25});
SoMaterial123->setShininess(0.5);
SoMaterial123->setTransparency(0.1);
SoVRMLAppearance122->addChild(*SoMaterial123);

SoShape121->addChild(*SoVRMLAppearance122);

SoExtrusion* SoExtrusion124 = new SoExtrusion();
SoExtrusion124->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion124->setScale(new float[]{0.8,0.8,1.0,1.0}, 4);
SoExtrusion124->setSpine(new float[]{0.03,0.03,-0.05,0.05,0.2,0.0}, 6);
SoShape121->setGeometry(*SoExtrusion124);

SoTransform120->addChild(*SoShape121);

SoGroup106->addChild(*SoTransform120);

SoGroup* SoGroup125 = new SoGroup();
SoGroup125->setDEF(QString("buckle"));
SoTransform* SoTransform126 = new SoTransform();
SoTransform126->setTranslation(new float[]{-0.08,0.1,0.029});
SoTransform126->setRotation(new float[]{-1.0,0.0,0.0,0.68});
SoShape* SoShape127 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance128 = new SoVRMLAppearance();
SoVRMLAppearance128->setDEF(QString("buckleHolder"));
SoMaterial* SoMaterial129 = new SoMaterial();
SoMaterial129->setDiffuseColor(new float[]{0.25,0.25,0.25});
SoVRMLAppearance128->addChild(*SoMaterial129);

SoShape127->addChild(*SoVRMLAppearance128);

SoBox* SoBox130 = new SoBox();
SoBox130->setSize(new float[]{0.03,0.03,0.005});
SoShape127->setGeometry(*SoBox130);

SoTransform126->addChild(*SoShape127);

SoGroup125->addChild(*SoTransform126);

SoTransform* SoTransform131 = new SoTransform();
SoTransform131->setTranslation(new float[]{0.03,0.1,0.027});
SoTransform131->setRotation(new float[]{-1.0,0.0,0.0,0.68});
SoShape* SoShape132 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance133 = new SoVRMLAppearance();
SoVRMLAppearance133->setUSE(QString("buckleHolder"));
SoShape132->addChild(*SoVRMLAppearance133);

SoBox* SoBox134 = new SoBox();
SoBox134->setSize(new float[]{0.15,0.03,0.001});
SoShape132->setGeometry(*SoBox134);

SoTransform131->addChild(*SoShape132);

SoGroup125->addChild(*SoTransform131);

SoTransform* SoTransform135 = new SoTransform();
SoTransform135->setTranslation(new float[]{-0.045,0.1,0.028});
SoTransform135->setRotation(new float[]{-1.0,0.0,0.0,0.68});
SoShape* SoShape136 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance137 = new SoVRMLAppearance();
SoVRMLAppearance137->setDEF(QString("pin"));
SoMaterial* SoMaterial138 = new SoMaterial();
SoVRMLAppearance137->addChild(*SoMaterial138);

SoShape136->addChild(*SoVRMLAppearance137);

SoBox* SoBox139 = new SoBox();
SoBox139->setSize(new float[]{0.02,0.028,0.005});
SoShape136->setGeometry(*SoBox139);

SoTransform135->addChild(*SoShape136);

SoGroup125->addChild(*SoTransform135);

SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setTranslation(new float[]{-0.06,0.1,0.029});
SoTransform140->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape141 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance142 = new SoVRMLAppearance();
SoVRMLAppearance142->setUSE(QString("pin"));
SoShape141->addChild(*SoVRMLAppearance142);

SoCylinder* SoCylinder143 = new SoCylinder();
SoCylinder143->setHeight(0.02);
SoCylinder143->setRadius(0.0024);
SoShape141->setGeometry(*SoCylinder143);

SoTransform140->addChild(*SoShape141);

SoGroup125->addChild(*SoTransform140);

SoTransform* SoTransform144 = new SoTransform();
SoTransform144->setTranslation(new float[]{-0.06,0.109,0.0217});
SoTransform144->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape145 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance146 = new SoVRMLAppearance();
SoVRMLAppearance146->setUSE(QString("pin"));
SoShape145->addChild(*SoVRMLAppearance146);

SoCylinder* SoCylinder147 = new SoCylinder();
SoCylinder147->setHeight(0.02);
SoCylinder147->setRadius(0.0024);
SoShape145->setGeometry(*SoCylinder147);

SoTransform144->addChild(*SoShape145);

SoGroup125->addChild(*SoTransform144);

SoTransform* SoTransform148 = new SoTransform();
SoTransform148->setTranslation(new float[]{-0.06,0.091,0.036});
SoTransform148->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoShape* SoShape149 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance150 = new SoVRMLAppearance();
SoVRMLAppearance150->setUSE(QString("pin"));
SoShape149->addChild(*SoVRMLAppearance150);

SoCylinder* SoCylinder151 = new SoCylinder();
SoCylinder151->setHeight(0.02);
SoCylinder151->setRadius(0.0024);
SoShape149->setGeometry(*SoCylinder151);

SoTransform148->addChild(*SoShape149);

SoGroup125->addChild(*SoTransform148);

SoGroup106->addChild(*SoGroup125);

SoGroup* SoGroup152 = new SoGroup();
SoGroup152->setDEF(QString("buckleBelt"));
SoTransform* SoTransform153 = new SoTransform();
SoTransform153->setTranslation(new float[]{-0.07,-0.12,0.038});
SoTransform153->setRotation(new float[]{0.0,1.0,0.0,-0.68});
SoShape* SoShape154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance155 = new SoVRMLAppearance();
SoVRMLAppearance155->setUSE(QString("buckleHolder"));
SoShape154->addChild(*SoVRMLAppearance155);

SoBox* SoBox156 = new SoBox();
SoBox156->setSize(new float[]{0.04,0.1,0.005});
SoShape154->setGeometry(*SoBox156);

SoTransform153->addChild(*SoShape154);

SoGroup152->addChild(*SoTransform153);

SoTransform* SoTransform157 = new SoTransform();
SoTransform157->setTranslation(new float[]{0.005,-0.12,0.053});
SoShape* SoShape158 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance159 = new SoVRMLAppearance();
SoVRMLAppearance159->setUSE(QString("buckleHolder"));
SoShape158->addChild(*SoVRMLAppearance159);

SoBox* SoBox160 = new SoBox();
SoBox160->setSize(new float[]{0.12,0.11,0.001});
SoShape158->setGeometry(*SoBox160);

SoTransform157->addChild(*SoShape158);

SoGroup152->addChild(*SoTransform157);

SoTransform* SoTransform161 = new SoTransform();
SoTransform161->setTranslation(new float[]{0.075,-0.12,0.038});
SoTransform161->setRotation(new float[]{0.0,1.0,0.0,0.68});
SoShape* SoShape162 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance163 = new SoVRMLAppearance();
SoVRMLAppearance163->setUSE(QString("buckleHolder"));
SoShape162->addChild(*SoVRMLAppearance163);

SoBox* SoBox164 = new SoBox();
SoBox164->setSize(new float[]{0.04,0.1,0.005});
SoShape162->setGeometry(*SoBox164);

SoTransform161->addChild(*SoShape162);

SoGroup152->addChild(*SoTransform161);

SoGroup106->addChild(*SoGroup152);

SoTransform105->addChild(*SoGroup106);

SoHAnimSegment96->addChild(*SoTransform105);

SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setDEF(QString("ScubaTank"));
SoTransform165->setTranslation(new float[]{-0.00405,1.07,-0.0275});
SoTransform165->setRotation(new float[]{0.0,1.0,0.0,3.14});
SoTransform165->setScale(new float[]{0.8,0.8,0.8});
SoInline* SoInline166 = new SoInline();
SoInline166->setGlobal(true);
SoInline166->setUrl(new QString[]{QString("ScubaTank.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"), QString("ScubaTank.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.wrl")}, 4);
SoTransform165->addChild(*SoInline166);

SoHAnimSegment96->addChild(*SoTransform165);

SoHAnimJoint95->addChildren(*SoHAnimSegment96);

SoHAnimJoint* SoHAnimJoint167 = new SoHAnimJoint();
SoHAnimJoint167->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint167->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint167->setCenter(new float[]{0.167,1.36,-0.0518});
SoHAnimSegment* SoHAnimSegment168 = new SoHAnimSegment();
SoHAnimSegment168->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment168->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform169 = new SoTransform();
SoTransform169->setDEF(QString("l_upperarm_adjust"));
SoTransform169->setTranslation(new float[]{0.167,1.36,-0.0518});
SoTransform169->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform169->setCenter(new float[]{0.182,1.22,-0.047});
SoShape* SoShape170 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance171 = new SoVRMLAppearance();
SoMaterial* SoMaterial172 = new SoMaterial();
SoMaterial172->setUSE(QString("WetShirtColor"));
SoVRMLAppearance171->addChild(*SoMaterial172);

SoShape170->addChild(*SoVRMLAppearance171);

SoIndexedFaceSet* SoIndexedFaceSet173 = new SoIndexedFaceSet();
SoIndexedFaceSet173->setCreaseAngle(1.65);
SoIndexedFaceSet173->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1}, 160);
SoCoordinate* SoCoordinate174 = new SoCoordinate();
SoCoordinate174->setPoint(new float[]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}, 66);
SoIndexedFaceSet173->setCoord(*SoCoordinate174);

SoShape170->setGeometry(*SoIndexedFaceSet173);

SoTransform169->addChild(*SoShape170);

SoHAnimSegment168->addChild(*SoTransform169);

SoHAnimJoint167->addChildren(*SoHAnimSegment168);

SoHAnimJoint* SoHAnimJoint175 = new SoHAnimJoint();
SoHAnimJoint175->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint175->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint175->setCenter(new float[]{0.196,1.07,-0.0518});
SoHAnimSegment* SoHAnimSegment176 = new SoHAnimSegment();
SoHAnimSegment176->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment176->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform177 = new SoTransform();
SoTransform177->setDEF(QString("l_forearm_adjust"));
SoTransform177->setTranslation(new float[]{0.196,1.07,-0.0518});
SoTransform177->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform177->setCenter(new float[]{0.198,0.961,-0.0405});
SoShape* SoShape178 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance179 = new SoVRMLAppearance();
SoMaterial* SoMaterial180 = new SoMaterial();
SoMaterial180->setUSE(QString("WetShirtColor"));
SoVRMLAppearance179->addChild(*SoMaterial180);

SoShape178->addChild(*SoVRMLAppearance179);

SoIndexedFaceSet* SoIndexedFaceSet181 = new SoIndexedFaceSet();
SoIndexedFaceSet181->setCreaseAngle(1.75);
SoIndexedFaceSet181->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1}, 136);
SoCoordinate* SoCoordinate182 = new SoCoordinate();
SoCoordinate182->setPoint(new float[]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}, 57);
SoIndexedFaceSet181->setCoord(*SoCoordinate182);

SoShape178->setGeometry(*SoIndexedFaceSet181);

SoTransform177->addChild(*SoShape178);

SoHAnimSegment176->addChild(*SoTransform177);

SoHAnimJoint175->addChildren(*SoHAnimSegment176);

SoHAnimJoint* SoHAnimJoint183 = new SoHAnimJoint();
SoHAnimJoint183->setDEF(QString("hanim_l_wrist"));
SoHAnimJoint183->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint183->setCenter(new float[]{0.213,0.811,-0.0338});
SoHAnimSegment* SoHAnimSegment184 = new SoHAnimSegment();
SoHAnimSegment184->setDEF(QString("hanim_l_hand"));
SoHAnimSegment184->X3DNode::setName(QString("l_hand"));
SoTransform* SoTransform185 = new SoTransform();
SoTransform185->setDEF(QString("l_hand_adjust"));
SoTransform185->setTranslation(new float[]{0.213,0.811,-0.0338});
SoTransform185->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform185->setCenter(new float[]{0.213,0.811,-0.0338});
SoShape* SoShape186 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance187 = new SoVRMLAppearance();
SoMaterial* SoMaterial188 = new SoMaterial();
SoMaterial188->setDEF(QString("Skin_Color"));
SoMaterial188->setAmbientIntensity(0.25);
SoMaterial188->setDiffuseColor(new float[]{0.749,0.601,0.462});
SoVRMLAppearance187->addChild(*SoMaterial188);

SoShape186->addChild(*SoVRMLAppearance187);

SoIndexedFaceSet* SoIndexedFaceSet189 = new SoIndexedFaceSet();
SoIndexedFaceSet189->setCreaseAngle(1.48);
SoIndexedFaceSet189->setCoordIndex(new int32_t[]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1}, 368);
SoCoordinate* SoCoordinate190 = new SoCoordinate();
SoCoordinate190->setPoint(new float[]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}, 144);
SoIndexedFaceSet189->setCoord(*SoCoordinate190);

SoShape186->setGeometry(*SoIndexedFaceSet189);

SoTransform185->addChild(*SoShape186);

SoHAnimSegment184->addChild(*SoTransform185);

SoHAnimJoint183->addChildren(*SoHAnimSegment184);

SoHAnimJoint175->addChildren(*SoHAnimJoint183);

SoHAnimJoint167->addChildren(*SoHAnimJoint175);

SoHAnimJoint95->addChildren(*SoHAnimJoint167);

SoHAnimJoint* SoHAnimJoint191 = new SoHAnimJoint();
SoHAnimJoint191->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint191->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint191->setCenter(new float[]{-0.167,1.36,-0.0458});
SoHAnimSegment* SoHAnimSegment192 = new SoHAnimSegment();
SoHAnimSegment192->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment192->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform193 = new SoTransform();
SoTransform193->setDEF(QString("r_upperarm_adjust"));
SoTransform193->setTranslation(new float[]{-0.167,1.36,-0.0458});
SoTransform193->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform193->setCenter(new float[]{-0.182,1.22,-0.047});
SoShape* SoShape194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance195 = new SoVRMLAppearance();
SoMaterial* SoMaterial196 = new SoMaterial();
SoMaterial196->setUSE(QString("WetShirtColor"));
SoVRMLAppearance195->addChild(*SoMaterial196);

SoShape194->addChild(*SoVRMLAppearance195);

SoIndexedFaceSet* SoIndexedFaceSet197 = new SoIndexedFaceSet();
SoIndexedFaceSet197->setCreaseAngle(1.53);
SoIndexedFaceSet197->setCoordIndex(new int32_t[]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1}, 208);
SoCoordinate* SoCoordinate198 = new SoCoordinate();
SoCoordinate198->setPoint(new float[]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}, 84);
SoIndexedFaceSet197->setCoord(*SoCoordinate198);

SoShape194->setGeometry(*SoIndexedFaceSet197);

SoTransform193->addChild(*SoShape194);

SoHAnimSegment192->addChild(*SoTransform193);

SoHAnimJoint191->addChildren(*SoHAnimSegment192);

SoHAnimJoint* SoHAnimJoint199 = new SoHAnimJoint();
SoHAnimJoint199->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint199->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint199->setCenter(new float[]{-0.192,1.07,-0.0498});
SoHAnimSegment* SoHAnimSegment200 = new SoHAnimSegment();
SoHAnimSegment200->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment200->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform201 = new SoTransform();
SoTransform201->setDEF(QString("r_forearm_adjust"));
SoTransform201->setTranslation(new float[]{-0.192,1.07,-0.0498});
SoTransform201->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform201->setCenter(new float[]{-0.198,0.961,-0.0397});
SoShape* SoShape202 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance203 = new SoVRMLAppearance();
SoMaterial* SoMaterial204 = new SoMaterial();
SoMaterial204->setUSE(QString("WetShirtColor"));
SoVRMLAppearance203->addChild(*SoMaterial204);

SoShape202->addChild(*SoVRMLAppearance203);

SoIndexedFaceSet* SoIndexedFaceSet205 = new SoIndexedFaceSet();
SoIndexedFaceSet205->setCreaseAngle(1.73);
SoIndexedFaceSet205->setCoordIndex(new int32_t[]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1}, 184);
SoCoordinate* SoCoordinate206 = new SoCoordinate();
SoCoordinate206->setPoint(new float[]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1.0,-0.0405,-0.16,1.06,-0.0373}, 75);
SoIndexedFaceSet205->setCoord(*SoCoordinate206);

SoShape202->setGeometry(*SoIndexedFaceSet205);

SoTransform201->addChild(*SoShape202);

SoHAnimSegment200->addChild(*SoTransform201);

SoHAnimJoint199->addChildren(*SoHAnimSegment200);

SoHAnimJoint* SoHAnimJoint207 = new SoHAnimJoint();
SoHAnimJoint207->setDEF(QString("hanim_r_wrist"));
SoHAnimJoint207->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint207->setCenter(new float[]{-0.217,0.811,-0.0338});
SoHAnimSegment* SoHAnimSegment208 = new SoHAnimSegment();
SoHAnimSegment208->setDEF(QString("hanim_r_hand"));
SoHAnimSegment208->X3DNode::setName(QString("r_hand"));
SoTransform* SoTransform209 = new SoTransform();
SoTransform209->setDEF(QString("r_hand_adjust"));
SoTransform209->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform209->setCenter(new float[]{-0.217,0.811,-0.0338});
SoShape* SoShape210 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance211 = new SoVRMLAppearance();
SoMaterial* SoMaterial212 = new SoMaterial();
SoMaterial212->setUSE(QString("Skin_Color"));
SoVRMLAppearance211->addChild(*SoMaterial212);

SoShape210->addChild(*SoVRMLAppearance211);

SoIndexedFaceSet* SoIndexedFaceSet213 = new SoIndexedFaceSet();
SoIndexedFaceSet213->setCreaseAngle(1.57);
SoIndexedFaceSet213->setCoordIndex(new int32_t[]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1}, 368);
SoCoordinate* SoCoordinate214 = new SoCoordinate();
SoCoordinate214->setPoint(new float[]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}, 144);
SoIndexedFaceSet213->setCoord(*SoCoordinate214);

SoShape210->setGeometry(*SoIndexedFaceSet213);

SoTransform209->addChild(*SoShape210);

SoHAnimSegment208->addChild(*SoTransform209);

SoHAnimJoint207->addChildren(*SoHAnimSegment208);

SoHAnimJoint199->addChildren(*SoHAnimJoint207);

SoHAnimJoint191->addChildren(*SoHAnimJoint199);

SoHAnimJoint95->addChildren(*SoHAnimJoint191);

SoHAnimJoint* SoHAnimJoint215 = new SoHAnimJoint();
SoHAnimJoint215->setDEF(QString("hanim_vc4"));
SoHAnimJoint215->X3DNode::setName(QString("vc4"));
SoHAnimJoint215->setCenter(new float[]{0.0,1.43,-0.0458});
SoHAnimSegment* SoHAnimSegment216 = new SoHAnimSegment();
SoHAnimSegment216->setDEF(QString("hanim_c4"));
SoHAnimSegment216->X3DNode::setName(QString("c4"));
SoShape* SoShape217 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance218 = new SoVRMLAppearance();
SoMaterial* SoMaterial219 = new SoMaterial();
SoMaterial219->setUSE(QString("WetShirtColor"));
SoVRMLAppearance218->addChild(*SoMaterial219);

SoShape217->addChild(*SoVRMLAppearance218);

SoIndexedFaceSet* SoIndexedFaceSet220 = new SoIndexedFaceSet();
SoIndexedFaceSet220->setDEF(QString("neck"));
SoIndexedFaceSet220->setCreaseAngle(1.91);
SoIndexedFaceSet220->setCoordIndex(new int32_t[]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1}, 112);
SoCoordinate* SoCoordinate221 = new SoCoordinate();
SoCoordinate221->setPoint(new float[]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1}, 48);
SoIndexedFaceSet220->setCoord(*SoCoordinate221);

SoShape217->setGeometry(*SoIndexedFaceSet220);

SoHAnimSegment216->addChild(*SoShape217);

SoHAnimJoint215->addChildren(*SoHAnimSegment216);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setDEF(QString("hanim_skullbase"));
SoHAnimJoint222->X3DNode::setName(QString("skullbase"));
SoHAnimJoint222->setCenter(new float[]{0.0,1.54,-0.0409});
SoHAnimSegment* SoHAnimSegment223 = new SoHAnimSegment();
SoHAnimSegment223->setDEF(QString("hanim_skull"));
SoHAnimSegment223->X3DNode::setName(QString("skull"));
SoShape* SoShape224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance225 = new SoVRMLAppearance();
SoMaterial* SoMaterial226 = new SoMaterial();
SoMaterial226->setUSE(QString("Skin_Color"));
SoVRMLAppearance225->addChild(*SoMaterial226);

SoShape224->addChild(*SoVRMLAppearance225);

SoIndexedFaceSet* SoIndexedFaceSet227 = new SoIndexedFaceSet();
SoIndexedFaceSet227->setDEF(QString("headIFS"));
SoIndexedFaceSet227->setColorIndex(new int[]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1}, 1640);
SoIndexedFaceSet227->setCoordIndex(new int32_t[]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1}, 1640);
SoColor* SoColor228 = new SoColor();
SoColor228->setColor(new float[]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902,0.0,0.0,0.502}, 15);
SoIndexedFaceSet227->setColor(*SoColor228);

SoCoordinate* SoCoordinate229 = new SoCoordinate();
SoCoordinate229->setDEF(QString("Face"));
SoCoordinate229->setPoint(new float[]{0.0,1.708,-0.0435,0.0,1.655,0.04322,0.0,1.486,0.02335,0.0,1.694,0.007789,0.0,1.631,0.051,0.0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0.0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0.0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0.0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0.0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0.0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0.0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0.0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0.0,1.543,0.04432,0.0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0.0,1.69,-0.1047,0.0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0.0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0.0,1.53,0.04236,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0.0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0.0,1.524,-0.102}, 774);
SoIndexedFaceSet227->setCoord(*SoCoordinate229);

SoShape224->setGeometry(*SoIndexedFaceSet227);

SoHAnimSegment223->addChild(*SoShape224);

SoTransform* SoTransform230 = new SoTransform();
SoTransform230->setDEF(QString("maskAndSnorkel"));
SoTransform230->setTranslation(new float[]{0.0,1.54,-0.0409});
SoInline* SoInline231 = new SoInline();
SoInline231->setDEF(QString("MaskAndSnorkel"));
SoInline231->setGlobal(true);
SoInline231->setUrl(new QString[]{QString("MaskAndSnorkel.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"), QString("MaskAndSnorkel.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.wrl")}, 4);
SoTransform230->addChild(*SoInline231);

SoHAnimSegment223->addChild(*SoTransform230);

SoTransform* SoTransform232 = new SoTransform();
SoTransform232->setDEF(QString("mouthpiece"));
SoTransform232->setTranslation(new float[]{0.0,1.54,-0.0409});
SoTransform232->setRotation(new float[]{0.86,-0.58,-0.58,2.09});
SoTransform* SoTransform233 = new SoTransform();
SoTransform233->setTranslation(new float[]{0.0,0.0018,0.0});
SoShape* SoShape234 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance235 = new SoVRMLAppearance();
SoMaterial* SoMaterial236 = new SoMaterial();
SoMaterial236->setDEF(QString("gray"));
SoMaterial236->setAmbientIntensity(0.3);
SoMaterial236->setDiffuseColor(new float[]{0.9,0.9,0.89});
SoMaterial236->setSpecularColor(new float[]{0.5,0.5,0.5});
SoMaterial236->setShininess(0.1);
SoVRMLAppearance235->addChild(*SoMaterial236);

SoShape234->addChild(*SoVRMLAppearance235);

SoCylinder* SoCylinder237 = new SoCylinder();
SoCylinder237->setHeight(0.006);
SoCylinder237->setRadius(0.015);
SoShape234->setGeometry(*SoCylinder237);

SoTransform233->addChild(*SoShape234);

SoTransform232->addChild(*SoTransform233);

SoTransform* SoTransform238 = new SoTransform();
SoShape* SoShape239 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance240 = new SoVRMLAppearance();
SoMaterial* SoMaterial241 = new SoMaterial();
SoMaterial241->setDEF(QString("black"));
SoMaterial241->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance240->addChild(*SoMaterial241);

SoShape239->addChild(*SoVRMLAppearance240);

SoCone* SoCone242 = new SoCone();
SoCone242->setHeight(0.01);
SoCone242->setBottomRadius(0.03);
SoShape239->setGeometry(*SoCone242);

SoTransform238->addChild(*SoShape239);

SoTransform232->addChild(*SoTransform238);

SoTransform* SoTransform243 = new SoTransform();
SoTransform243->setTranslation(new float[]{0.0,-0.015,0.0});
SoShape* SoShape244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance245 = new SoVRMLAppearance();
SoMaterial* SoMaterial246 = new SoMaterial();
SoMaterial246->setUSE(QString("black"));
SoVRMLAppearance245->addChild(*SoMaterial246);

SoShape244->addChild(*SoVRMLAppearance245);

SoCylinder* SoCylinder247 = new SoCylinder();
SoCylinder247->setHeight(0.02);
SoCylinder247->setRadius(0.03);
SoShape244->setGeometry(*SoCylinder247);

SoTransform243->addChild(*SoShape244);

SoTransform232->addChild(*SoTransform243);

SoTransform* SoTransform248 = new SoTransform();
SoTransform248->setTranslation(new float[]{0.0,-0.025,0.0});
SoShape* SoShape249 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance250 = new SoVRMLAppearance();
SoMaterial* SoMaterial251 = new SoMaterial();
SoMaterial251->setUSE(QString("black"));
SoVRMLAppearance250->addChild(*SoMaterial251);

SoShape249->addChild(*SoVRMLAppearance250);

SoCylinder* SoCylinder252 = new SoCylinder();
SoCylinder252->setHeight(0.02);
SoCylinder252->setRadius(0.015);
SoShape249->setGeometry(*SoCylinder252);

SoTransform248->addChild(*SoShape249);

SoTransform232->addChild(*SoTransform248);

SoTransform* SoTransform253 = new SoTransform();
SoTransform253->setTranslation(new float[]{0.0,-0.04,0.0});
SoTransform253->setRotation(new float[]{0.0,0.0,1.0,0.9});
SoShape* SoShape254 = new SoShape();
SoShape254->setDEF(QString("mouthpiecePlastic"));
SoVRMLAppearance* SoVRMLAppearance255 = new SoVRMLAppearance();
SoMaterial* SoMaterial256 = new SoMaterial();
SoMaterial256->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial256->setEmissiveColor(new float[]{1.0,1.0,1.0});
SoVRMLAppearance255->addChild(*SoMaterial256);

SoShape254->addChild(*SoVRMLAppearance255);

SoBox* SoBox257 = new SoBox();
SoBox257->setSize(new float[]{0.002,0.03,0.018});
SoShape254->setGeometry(*SoBox257);

SoTransform253->addChild(*SoShape254);

SoTransform232->addChild(*SoTransform253);

SoTransform* SoTransform258 = new SoTransform();
SoTransform258->setTranslation(new float[]{0.0,-0.04,0.0});
SoTransform258->setRotation(new float[]{0.0,0.0,1.0,-0.9});
SoShape* SoShape259 = new SoShape();
SoShape259->setUSE(QString("mouthpiecePlastic"));
SoTransform258->addChild(*SoShape259);

SoTransform232->addChild(*SoTransform258);

SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setTranslation(new float[]{0.0,-0.015,0.03});
SoTransform260->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoShape* SoShape261 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance262 = new SoVRMLAppearance();
SoMaterial* SoMaterial263 = new SoMaterial();
SoMaterial263->setUSE(QString("gray"));
SoVRMLAppearance262->addChild(*SoMaterial263);

SoShape261->addChild(*SoVRMLAppearance262);

SoCylinder* SoCylinder264 = new SoCylinder();
SoCylinder264->setHeight(0.02);
SoCylinder264->setRadius(0.0075);
SoShape261->setGeometry(*SoCylinder264);

SoTransform260->addChild(*SoShape261);

SoTransform232->addChild(*SoTransform260);

SoTransform* SoTransform265 = new SoTransform();
SoTransform265->setDEF(QString("airTube"));
SoTransform265->setTranslation(new float[]{0.0,-0.02,0.055});
SoTransform265->setRotation(new float[]{0.0,1.0,0.0,1.57});
SoTransform265->setScale(new float[]{0.7,0.7,0.7});
SoTransform* SoTransform266 = new SoTransform();
SoTransform266->setRotation(new float[]{-0.21,0.21,-0.95,4.67});
SoShape* SoShape267 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance268 = new SoVRMLAppearance();
SoMaterial* SoMaterial269 = new SoMaterial();
SoMaterial269->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance268->addChild(*SoMaterial269);

SoShape267->addChild(*SoVRMLAppearance268);

SoExtrusion* SoExtrusion270 = new SoExtrusion();
SoExtrusion270->setCrossSection(new float[]{0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.0,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.0,0.013,-0.00494,-0.01196,-0.00923,-0.00923,-0.01196,-0.00494,-0.013,0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.0,0.013}, 34);
SoExtrusion270->setSpine(new float[]{0.005,-0.03,0.0,-0.01,0.02,0.0,-0.03,0.08,0.0,-0.05,0.14,0.0,-0.08,0.19,0.0,-0.1,0.22,0.0,-0.12,0.25,0.0,-0.15,0.27,0.0,-0.18,0.28,0.0,-0.21,0.29,0.0,-0.26,0.28,0.0,-0.28,0.26,0.0,-0.305,0.23,0.0,-0.32,0.2,0.0,-0.34,0.16,0.0,-0.35,0.12,0.0,-0.37,0.04,0.0,-0.385,0.0,0.0,-0.39,-0.07,0.0}, 57);
SoShape267->setGeometry(*SoExtrusion270);

SoTransform266->addChild(*SoShape267);

SoTransform265->addChild(*SoTransform266);

SoTransform232->addChild(*SoTransform265);

SoHAnimSegment223->addChild(*SoTransform232);

SoTransform* SoTransform271 = new SoTransform();
SoTransform271->setDEF(QString("Bubbles"));
SoTransform271->setTranslation(new float[]{0.0,1.54,-0.0409});
SoTransform271->setScale(new float[]{0.35,0.35,0.35});
SoInline* SoInline272 = new SoInline();
SoInline272->setDEF(QString("bubbles"));
SoInline272->setGlobal(true);
SoInline272->setUrl(new QString[]{QString("Bubbles.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"), QString("Bubbles.wrl"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.wrl")}, 4);
SoTransform271->addChild(*SoInline272);

SoHAnimSegment223->addChild(*SoTransform271);

SoHAnimJoint222->addChildren(*SoHAnimSegment223);

SoHAnimJoint215->addChildren(*SoHAnimJoint222);

SoHAnimJoint95->addChildren(*SoHAnimJoint215);

SoHAnimJoint33->addChildren(*SoHAnimJoint95);

SoHAnimHumanoid32->setSkeleton(*SoHAnimJoint33);

SoHAnimJoint* SoHAnimJoint273 = new SoHAnimJoint();
SoHAnimJoint273->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint273);

SoHAnimJoint* SoHAnimJoint274 = new SoHAnimJoint();
SoHAnimJoint274->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint274);

SoHAnimJoint* SoHAnimJoint275 = new SoHAnimJoint();
SoHAnimJoint275->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint275);

SoHAnimJoint* SoHAnimJoint276 = new SoHAnimJoint();
SoHAnimJoint276->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint276);

SoHAnimJoint* SoHAnimJoint277 = new SoHAnimJoint();
SoHAnimJoint277->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint277);

SoHAnimJoint* SoHAnimJoint278 = new SoHAnimJoint();
SoHAnimJoint278->setUSE(QString("hanim_l_ankle"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint278);

SoHAnimJoint* SoHAnimJoint279 = new SoHAnimJoint();
SoHAnimJoint279->setUSE(QString("hanim_r_ankle"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint279);

SoHAnimJoint* SoHAnimJoint280 = new SoHAnimJoint();
SoHAnimJoint280->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint280);

SoHAnimJoint* SoHAnimJoint281 = new SoHAnimJoint();
SoHAnimJoint281->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint281);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint282);

SoHAnimJoint* SoHAnimJoint283 = new SoHAnimJoint();
SoHAnimJoint283->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint283);

SoHAnimJoint* SoHAnimJoint284 = new SoHAnimJoint();
SoHAnimJoint284->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint284);

SoHAnimJoint* SoHAnimJoint285 = new SoHAnimJoint();
SoHAnimJoint285->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint285);

SoHAnimJoint* SoHAnimJoint286 = new SoHAnimJoint();
SoHAnimJoint286->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint286);

SoHAnimJoint* SoHAnimJoint287 = new SoHAnimJoint();
SoHAnimJoint287->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint287);

SoHAnimJoint* SoHAnimJoint288 = new SoHAnimJoint();
SoHAnimJoint288->setUSE(QString("hanim_l_wrist"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint288);

SoHAnimJoint* SoHAnimJoint289 = new SoHAnimJoint();
SoHAnimJoint289->setUSE(QString("hanim_r_wrist"));
SoHAnimHumanoid32->setJoints(*SoHAnimJoint289);

SoHAnimSegment* SoHAnimSegment290 = new SoHAnimSegment();
SoHAnimSegment290->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment290);

SoHAnimSegment* SoHAnimSegment291 = new SoHAnimSegment();
SoHAnimSegment291->setUSE(QString("hanim_l1"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment291);

SoHAnimSegment* SoHAnimSegment292 = new SoHAnimSegment();
SoHAnimSegment292->setUSE(QString("hanim_c4"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment292);

SoHAnimSegment* SoHAnimSegment293 = new SoHAnimSegment();
SoHAnimSegment293->setUSE(QString("hanim_skull"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment293);

SoHAnimSegment* SoHAnimSegment294 = new SoHAnimSegment();
SoHAnimSegment294->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment294);

SoHAnimSegment* SoHAnimSegment295 = new SoHAnimSegment();
SoHAnimSegment295->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment295);

SoHAnimSegment* SoHAnimSegment296 = new SoHAnimSegment();
SoHAnimSegment296->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment296);

SoHAnimSegment* SoHAnimSegment297 = new SoHAnimSegment();
SoHAnimSegment297->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment297);

SoHAnimSegment* SoHAnimSegment298 = new SoHAnimSegment();
SoHAnimSegment298->setUSE(QString("hanim_l_hand"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment298);

SoHAnimSegment* SoHAnimSegment299 = new SoHAnimSegment();
SoHAnimSegment299->setUSE(QString("hanim_r_hand"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment299);

SoHAnimSegment* SoHAnimSegment300 = new SoHAnimSegment();
SoHAnimSegment300->setUSE(QString("hanim_l_hindfoot"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment300);

SoHAnimSegment* SoHAnimSegment301 = new SoHAnimSegment();
SoHAnimSegment301->setUSE(QString("hanim_r_hindfoot"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment301);

SoHAnimSegment* SoHAnimSegment302 = new SoHAnimSegment();
SoHAnimSegment302->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment302);

SoHAnimSegment* SoHAnimSegment303 = new SoHAnimSegment();
SoHAnimSegment303->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment303);

SoHAnimSegment* SoHAnimSegment304 = new SoHAnimSegment();
SoHAnimSegment304->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment304);

SoHAnimSegment* SoHAnimSegment305 = new SoHAnimSegment();
SoHAnimSegment305->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid32->setSegments(*SoHAnimSegment305);

SoTransform31->addChild(*SoHAnimHumanoid32);

SoTransform21->addChild(*SoTransform31);

SoTransform20->addChild(*SoTransform21);

SoGroup19->addChild(*SoTransform20);

SoNode16->addChild(*SoGroup19);

SoScript* SoScript306 = new SoScript();
SoScript306->setDEF(QString("finWarpScript"));
Sofield* Sofield307 = new Sofield();
Sofield307->setAccessType(QString("inputOnly"));
Sofield307->setType(QString("SFRotation"));
Sofield307->setName(QString("set_rotationLeft"));
SoScript306->addChild(*Sofield307);

Sofield* Sofield308 = new Sofield();
Sofield308->setAccessType(QString("inputOnly"));
Sofield308->setType(QString("SFRotation"));
Sofield308->setName(QString("set_rotationRight"));
SoScript306->addChild(*Sofield308);

Sofield* Sofield309 = new Sofield();
Sofield309->setAccessType(QString("outputOnly"));
Sofield309->setType(QString("SFBool"));
Sofield309->setName(QString("finWarpLeft"));
SoScript306->addChild(*Sofield309);

Sofield* Sofield310 = new Sofield();
Sofield310->setAccessType(QString("outputOnly"));
Sofield310->setType(QString("SFBool"));
Sofield310->setName(QString("finWarpRight"));
SoScript306->addChild(*Sofield310);


//SoScript306->setSourceCode(QString("ecmascript:")+
//_T("function set_rotationLeft(rotationValue, timeStamp)")+
//_T("{")+
//_T("	if (rotationValue[0] <= 0)")+
//_T("	{")+
//_T("		finWarpLeft = false;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpLeft = true;")+
//_T("	}")+
//_T("//	print ('Left  rotationValue[0] ' + rotationValue[0] + ', finWarpLeft=' + finWarpLeft);")+
//_T("}")+
//_T("function set_rotationRight(rotationValue, timeStamp)")+
//_T("{")+
//_T("	if (rotationValue[0] <= 0)")+
//_T("	{")+
//_T("		finWarpRight = false;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpRight = true;")+
//_T("	}")+
//_T("//	print ('Right rotationValue[0] ' + rotationValue[0] + ', finWarpRight=' + finWarpRight);")+
//_T("}"));
SoNode16->addChild(*SoScript306);

SoProximitySensor* SoProximitySensor311 = new SoProximitySensor();
SoProximitySensor311->setDEF(QString("FinTriggerProximitySensor"));
SoProximitySensor311->setSize(new float[]{15.0,15.0,15.0});
SoNode16->addChild(*SoProximitySensor311);

SoTimeSensor* SoTimeSensor312 = new SoTimeSensor();
SoTimeSensor312->setDEF(QString("FinClock"));
SoTimeSensor312->setCycleInterval(7);
SoTimeSensor312->setLoop(true);
SoNode16->addChild(*SoTimeSensor312);

SoGroup* SoGroup313 = new SoGroup();
SoScript* SoScript314 = new SoScript();
SoScript314->setDEF(QString("FinScript"));
Sofield* Sofield315 = new Sofield();
Sofield315->setAccessType(QString("outputOnly"));
Sofield315->setType(QString("MFVec3f"));
Sofield315->setName(QString("keyValueRight"));
SoScript314->addChild(*Sofield315);

Sofield* Sofield316 = new Sofield();
Sofield316->setAccessType(QString("outputOnly"));
Sofield316->setType(QString("MFVec3f"));
Sofield316->setName(QString("keyValueLeft"));
SoScript314->addChild(*Sofield316);

Sofield* Sofield317 = new Sofield();
Sofield317->setAccessType(QString("inputOnly"));
Sofield317->setType(QString("SFFloat"));
Sofield317->setName(QString("set_fraction"));
SoScript314->addChild(*Sofield317);

Sofield* Sofield318 = new Sofield();
Sofield318->setAccessType(QString("inputOnly"));
Sofield318->setType(QString("SFBool"));
Sofield318->setName(QString("finL"));
SoScript314->addChild(*Sofield318);

Sofield* Sofield319 = new Sofield();
Sofield319->setAccessType(QString("inputOnly"));
Sofield319->setType(QString("SFBool"));
Sofield319->setName(QString("finR"));
SoScript314->addChild(*Sofield319);

Sofield* Sofield320 = new Sofield();
Sofield320->setAccessType(QString("initializeOnly"));
Sofield320->setType(QString("SFInt32"));
Sofield320->setName(QString("finWarpL"));
SoScript314->addChild(*Sofield320);

Sofield* Sofield321 = new Sofield();
Sofield321->setAccessType(QString("initializeOnly"));
Sofield321->setType(QString("SFInt32"));
Sofield321->setName(QString("finWarpR"));
SoScript314->addChild(*Sofield321);

Sofield* Sofield322 = new Sofield();
Sofield322->setAccessType(QString("initializeOnly"));
Sofield322->setType(QString("SFBool"));
Sofield322->setName(QString("traceEnabled"));
SoScript314->addChild(*Sofield322);


//SoScript314->setSourceCode(QString("ecmascript:")+
//_T("function finL(value, timeStamp)")+
//_T("{")+
//_T("	if (value == 0)")+
//_T("	{")+
//_T("		finWarpL = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpL = 1;")+
//_T("	}")+
//_T("	//print ('finWarpL' + finWarpL);")+
//_T("}")+
//_T("function finR(value, timeStamp)")+
//_T("{")+
//_T("	if (value == 0)")+
//_T("	{")+
//_T("		finWarpR = 0;")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		finWarpR = 1;")+
//_T("	}")+
//_T("	//print ('finWarpR' + finWarpR);")+
//_T("}")+
//_T("function finMove(fraction, timeStamp)")+
//_T(" {")+
//_T("	if (finWarpL == 1)")+
//_T("	{")+
//_T("		// level 3 (warp outside) Left")+
//_T("		kVL7 = new SFVec3f(1.25, 0, 25);")+
//_T("		kVL8 = new SFVec3f(2.5, 0, 30);")+
//_T(" 		kVL9 = new SFVec3f(3.25, 0, 34);")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		// level -2 (warp inside) Left")+
//_T("		kVL7 = new SFVec3f(-1.25, 0, 25);")+
//_T("		kVL8 = new SFVec3f(-2.5, 0, 30);")+
//_T(" 		kVL9 = new SFVec3f(-3.25, 0, 34);")+
//_T("	}")+
//_T("	if (finWarpR == 0)")+
//_T("	{")+
//_T("		// level  1 (warp outside ) Right")+
//_T("		kVR7 = new SFVec3f(1.25, 0, 25);")+
//_T("		kVR8 = new SFVec3f(2.5, 0, 30);")+
//_T(" 		kVR9 = new SFVec3f(3.25, 0, 34);")+
//_T("	}")+
//_T("	else")+
//_T("	{")+
//_T("		// level  -2 ( warp inside) Right")+
//_T("		kVR7 = new SFVec3f(-1.25, 0, 25);")+
//_T("		kVR8 = new SFVec3f(-2.5, 0, 30);")+
//_T(" 		kVR9 = new SFVec3f(-3.25, 0, 34);")+
//_T("	}")+
//_T("	// Left Fin (fixed spine)")+
//_T("	kVL1 = new SFVec3f(0, 0, 1);")+
//_T("	kVL2 = new SFVec3f(0, 0, 5);")+
//_T("	kVL3 = new SFVec3f(0, 0, 8);")+
//_T("	kVL4 = new SFVec3f(0, 0, 12);")+
//_T("	kVL5 = new SFVec3f(0, 0, 15);")+
//_T("	kVL6 = new SFVec3f(0, 0, 18);")+
//_T("	keyValueLeft = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);")+
//_T("	// Right Fin (fixed spine)")+
//_T("	kVR1 = new SFVec3f(0, 0, 1);")+
//_T("	kVR2 = new SFVec3f(0, 0, 5);")+
//_T("	kVR3 = new SFVec3f(0, 0, 8);")+
//_T("	kVR4 = new SFVec3f(0, 0, 12);")+
//_T("	kVR5 = new SFVec3f(0, 0, 15);")+
//_T("	kVR6 = new SFVec3f(0, 0, 18);")+
//_T("	keyValueRight = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);")+
//_T("	//tracePrint ('keyValueLeft =' + keyValueLeft);")+
//_T("	//tracePrint ('keyValueRight=' + keyValueRight);")+
//_T("}")+
//_T("function set_fraction (value, timeStamp)")+
//_T("{")+
//_T("	finMove(value);")+
//_T("	//tracePrint('time fraction =' + value);")+
//_T("}")+
//_T("function tracePrint (outputString)")+
//_T("{")+
//_T("	if (traceEnabled) Browser.println ('[Fin Move]' + outputString);")+
//_T("}"));
SoGroup313->addChild(*SoScript314);

SoNode16->addChild(*SoGroup313);

SoNavigationInfo* SoNavigationInfo323 = new SoNavigationInfo();
SoNavigationInfo323->setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
SoNavigationInfo323->setSpeed(0.5);
SoNode16->addChild(*SoNavigationInfo323);

SoWorldInfo* SoWorldInfo324 = new SoWorldInfo();
SoWorldInfo324->setTitle(QString("Nancy - an HAnim compliant avatar by 3Name3D"));
SoWorldInfo324->setInfo(new QString[]{QString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")}, 1);
SoNode16->addChild(*SoWorldInfo324);

SoGroup* SoGroup325 = new SoGroup();
SoGroup325->setDEF(QString("Animations"));
SoGroup* SoGroup326 = new SoGroup();
SoGroup326->setDEF(QString("Dive_Animation"));
SoOrientationInterpolator* SoOrientationInterpolator327 = new SoOrientationInterpolator();
SoOrientationInterpolator327->setDEF(QString("r_ankle_RotationInterpolator_BasicDive"));
SoOrientationInterpolator327->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator327->setKeyValue(new float[]{1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8001,1.0,0.0,0.0,0.8509,1.0,0.0,0.0,0.86001}, 44);
SoGroup326->addChild(*SoOrientationInterpolator327);

SoOrientationInterpolator* SoOrientationInterpolator328 = new SoOrientationInterpolator();
SoOrientationInterpolator328->setDEF(QString("r_knee_RotationInterpolator_BasicDive"));
SoOrientationInterpolator328->setKey(new float[]{0.0,0.125,0.2083,0.375,0.5,0.6667,0.9167,1.0}, 8);
SoOrientationInterpolator328->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.09354,1.0,0.0,0.0,0.08558,1.0,0.0,0.0,0.8573}, 32);
SoGroup326->addChild(*SoOrientationInterpolator328);

SoOrientationInterpolator* SoOrientationInterpolator329 = new SoOrientationInterpolator();
SoOrientationInterpolator329->setDEF(QString("r_hip_RotationInterpolator_BasicDive"));
SoOrientationInterpolator329->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.5,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator329->setKeyValue(new float[]{-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1.0,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9131,-0.06243,-0.403,0.3361,1.0,0.0,0.0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481}, 32);
SoGroup326->addChild(*SoOrientationInterpolator329);

SoOrientationInterpolator* SoOrientationInterpolator330 = new SoOrientationInterpolator();
SoOrientationInterpolator330->setDEF(QString("l_ankle_RotationInterpolator_BasicDive"));
SoOrientationInterpolator330->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1.0}, 11);
SoOrientationInterpolator330->setKeyValue(new float[]{1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001,1.0,0.0,0.0,0.6509,1.0,0.0,0.0,0.6001}, 44);
SoGroup326->addChild(*SoOrientationInterpolator330);

SoOrientationInterpolator* SoOrientationInterpolator331 = new SoOrientationInterpolator();
SoOrientationInterpolator331->setDEF(QString("l_knee_RotationInterpolator_BasicDive"));
SoOrientationInterpolator331->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator331->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.08678,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.09961,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoGroup326->addChild(*SoOrientationInterpolator331);

SoOrientationInterpolator* SoOrientationInterpolator332 = new SoOrientationInterpolator();
SoOrientationInterpolator332->setDEF(QString("l_hip_RotationInterpolator_BasicDive"));
SoOrientationInterpolator332->setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
SoOrientationInterpolator332->setKeyValue(new float[]{-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-1.0,0.0,0.0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865}, 28);
SoGroup326->addChild(*SoOrientationInterpolator332);

SoOrientationInterpolator* SoOrientationInterpolator333 = new SoOrientationInterpolator();
SoOrientationInterpolator333->setDEF(QString("lower_body_RotationInterpolator_BasicDive"));
SoOrientationInterpolator333->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator333->setKeyValue(new float[]{0.0,0.0,-1.0,0.1056,0.0,0.0,1.0,0.09018,0.0,0.0,-1.0,0.1056}, 12);
SoGroup326->addChild(*SoOrientationInterpolator333);

SoOrientationInterpolator* SoOrientationInterpolator334 = new SoOrientationInterpolator();
SoOrientationInterpolator334->setDEF(QString("r_wrist_RotationInterpolator_BasicDive"));
SoOrientationInterpolator334->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator334->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0.0,1.0,0.0,0.497349,0.0,0.0,1.0,0.0}, 24);
SoGroup326->addChild(*SoOrientationInterpolator334);

SoOrientationInterpolator* SoOrientationInterpolator335 = new SoOrientationInterpolator();
SoOrientationInterpolator335->setDEF(QString("r_elbow_RotationInterpolator_BasicDive"));
SoOrientationInterpolator335->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator335->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.04151,-1.0,0.0,0.0,0.5855,-1.0,0.0,0.0,0.5852,0.0,0.0,1.0,0.0}, 24);
SoGroup326->addChild(*SoOrientationInterpolator335);

SoOrientationInterpolator* SoOrientationInterpolator336 = new SoOrientationInterpolator();
SoOrientationInterpolator336->setDEF(QString("r_shoulder_RotationInterpolator_BasicDive"));
SoOrientationInterpolator336->setKey(new float[]{0.0,0.45,0.64,0.76,0.88,1.0}, 6);
SoOrientationInterpolator336->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.9992,0.02042,0.03558,7.2,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0.0,0.0,1.0,0.0}, 24);
SoGroup326->addChild(*SoOrientationInterpolator336);

SoOrientationInterpolator* SoOrientationInterpolator337 = new SoOrientationInterpolator();
SoOrientationInterpolator337->setDEF(QString("l_wrist_RotationInterpolator_BasicDive"));
SoOrientationInterpolator337->setKey(new float[]{0.0,0.32,0.64,0.88,1.0}, 5);
SoOrientationInterpolator337->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.067,0.98,-0.128,4.15,0.0,0.0,1.0,0.0}, 20);
SoGroup326->addChild(*SoOrientationInterpolator337);

SoOrientationInterpolator* SoOrientationInterpolator338 = new SoOrientationInterpolator();
SoOrientationInterpolator338->setDEF(QString("l_elbow_RotationInterpolator_BasicDive"));
SoOrientationInterpolator338->setKey(new float[]{0.0,0.28,0.32,0.64,0.76,1.0}, 6);
SoOrientationInterpolator338->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.1229,-1.0,0.0,0.0,0.5976,-1.0,0.0,0.0,0.3917,0.0,0.0,1.0,0.0}, 24);
SoGroup326->addChild(*SoOrientationInterpolator338);

SoOrientationInterpolator* SoOrientationInterpolator339 = new SoOrientationInterpolator();
SoOrientationInterpolator339->setDEF(QString("l_shoulder_RotationInterpolator_BasicDive"));
SoOrientationInterpolator339->setKey(new float[]{0.0,0.25,0.375,0.6667,0.7917,0.9167,1.0}, 7);
SoOrientationInterpolator339->setKeyValue(new float[]{0.0,0.0,1.0,0.1,0.0,0.0,1.0,0.2,0.0,0.0,1.0,0.2,0.86,0.25,0.42,0.5,0.86,0.25,0.42,0.8,0.86,0.25,0.42,0.4,0.86,0.25,0.42,0.2}, 28);
SoGroup326->addChild(*SoOrientationInterpolator339);

SoOrientationInterpolator* SoOrientationInterpolator340 = new SoOrientationInterpolator();
SoOrientationInterpolator340->setDEF(QString("head_RotationInterpolator_BasicDive"));
SoOrientationInterpolator340->setKey(new float[]{0.0,0.28,0.3,0.32,0.4,0.45,0.6,0.65,0.7,0.75,0.85,0.9,0.95,1.0}, 14);
SoOrientationInterpolator340->setKeyValue(new float[]{-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,1.0,-1.0,0.0,0.0,0.999,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.99,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,0.9,-1.0,0.0,0.0,1.0}, 56);
SoGroup326->addChild(*SoOrientationInterpolator340);

SoOrientationInterpolator* SoOrientationInterpolator341 = new SoOrientationInterpolator();
SoOrientationInterpolator341->setDEF(QString("neck_RotationInterpolator_BasicDive"));
SoOrientationInterpolator341->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator341->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup326->addChild(*SoOrientationInterpolator341);

SoOrientationInterpolator* SoOrientationInterpolator342 = new SoOrientationInterpolator();
SoOrientationInterpolator342->setDEF(QString("upper_body_RotationInterpolator_BasicDive"));
SoOrientationInterpolator342->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator342->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoGroup326->addChild(*SoOrientationInterpolator342);

SoOrientationInterpolator* SoOrientationInterpolator343 = new SoOrientationInterpolator();
SoOrientationInterpolator343->setDEF(QString("whole_body_RotationInterpolator_BasicDive"));
SoOrientationInterpolator343->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator343->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup326->addChild(*SoOrientationInterpolator343);

SoPositionInterpolator* SoPositionInterpolator344 = new SoPositionInterpolator();
SoPositionInterpolator344->setDEF(QString("whole_body_TranslationInterpolator_BasicDive"));
SoPositionInterpolator344->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator344->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoGroup326->addChild(*SoPositionInterpolator344);

SoTimeSensor* SoTimeSensor345 = new SoTimeSensor();
SoTimeSensor345->setDEF(QString("Dive_Time"));
SoTimeSensor345->setCycleInterval(7);
SoTimeSensor345->setLoop(true);
SoTimeSensor345->setStartTime(-1);
SoGroup326->addChild(*SoTimeSensor345);

SoProximitySensor* SoProximitySensor346 = new SoProximitySensor();
SoProximitySensor346->setDEF(QString("TriggerProximitySensor"));
SoProximitySensor346->setSize(new float[]{50.0,50.0,50.0});
SoGroup326->addChild(*SoProximitySensor346);

SoGroup325->addChild(*SoGroup326);

SoNode16->addChild(*SoGroup325);

SoROUTE* SoROUTE347 = new SoROUTE();
SoROUTE347->setFromNode(QString("finWarpScript"));
SoROUTE347->setFromField(QString("finWarpLeft"));
SoROUTE347->setToNode(QString("FinScript"));
SoROUTE347->setToField(QString("finL"));
SoNode16->addChild(*SoROUTE347);

SoROUTE* SoROUTE348 = new SoROUTE();
SoROUTE348->setFromNode(QString("finWarpScript"));
SoROUTE348->setFromField(QString("finWarpRight"));
SoROUTE348->setToNode(QString("FinScript"));
SoROUTE348->setToField(QString("finR"));
SoNode16->addChild(*SoROUTE348);

SoROUTE* SoROUTE349 = new SoROUTE();
SoROUTE349->setFromNode(QString("FinTriggerProximitySensor"));
SoROUTE349->setFromField(QString("isActive"));
SoROUTE349->setToNode(QString("FinClock"));
SoROUTE349->setToField(QString("set_enabled"));
SoNode16->addChild(*SoROUTE349);

SoROUTE* SoROUTE350 = new SoROUTE();
SoROUTE350->setFromNode(QString("FinClock"));
SoROUTE350->setFromField(QString("fraction_changed"));
SoROUTE350->setToNode(QString("FinScript"));
SoROUTE350->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE350);

SoROUTE* SoROUTE351 = new SoROUTE();
SoROUTE351->setFromNode(QString("FinScript"));
SoROUTE351->setFromField(QString("keyValueRight"));
SoROUTE351->setToNode(QString("FinExtrusionRight"));
SoROUTE351->setToField(QString("set_spine"));
SoNode16->addChild(*SoROUTE351);

SoROUTE* SoROUTE352 = new SoROUTE();
SoROUTE352->setFromNode(QString("FinScript"));
SoROUTE352->setFromField(QString("keyValueLeft"));
SoROUTE352->setToNode(QString("FinExtrusionLeft"));
SoROUTE352->setToField(QString("set_spine"));
SoNode16->addChild(*SoROUTE352);

SoROUTE* SoROUTE353 = new SoROUTE();
SoROUTE353->setFromNode(QString("TriggerProximitySensor"));
SoROUTE353->setFromField(QString("enterTime"));
SoROUTE353->setToNode(QString("Dive_Time"));
SoROUTE353->setToField(QString("set_startTime"));
SoNode16->addChild(*SoROUTE353);

SoROUTE* SoROUTE354 = new SoROUTE();
SoROUTE354->setFromNode(QString("Dive_Time"));
SoROUTE354->setFromField(QString("fraction_changed"));
SoROUTE354->setToNode(QString("r_ankle_RotationInterpolator_BasicDive"));
SoROUTE354->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE354);

SoROUTE* SoROUTE355 = new SoROUTE();
SoROUTE355->setFromNode(QString("Dive_Time"));
SoROUTE355->setFromField(QString("fraction_changed"));
SoROUTE355->setToNode(QString("r_knee_RotationInterpolator_BasicDive"));
SoROUTE355->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE355);

SoROUTE* SoROUTE356 = new SoROUTE();
SoROUTE356->setFromNode(QString("Dive_Time"));
SoROUTE356->setFromField(QString("fraction_changed"));
SoROUTE356->setToNode(QString("r_hip_RotationInterpolator_BasicDive"));
SoROUTE356->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE356);

SoROUTE* SoROUTE357 = new SoROUTE();
SoROUTE357->setFromNode(QString("Dive_Time"));
SoROUTE357->setFromField(QString("fraction_changed"));
SoROUTE357->setToNode(QString("l_ankle_RotationInterpolator_BasicDive"));
SoROUTE357->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE357);

SoROUTE* SoROUTE358 = new SoROUTE();
SoROUTE358->setFromNode(QString("Dive_Time"));
SoROUTE358->setFromField(QString("fraction_changed"));
SoROUTE358->setToNode(QString("l_knee_RotationInterpolator_BasicDive"));
SoROUTE358->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE358);

SoROUTE* SoROUTE359 = new SoROUTE();
SoROUTE359->setFromNode(QString("Dive_Time"));
SoROUTE359->setFromField(QString("fraction_changed"));
SoROUTE359->setToNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE359->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE359);

SoROUTE* SoROUTE360 = new SoROUTE();
SoROUTE360->setFromNode(QString("Dive_Time"));
SoROUTE360->setFromField(QString("fraction_changed"));
SoROUTE360->setToNode(QString("lower_body_RotationInterpolator_BasicDive"));
SoROUTE360->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE360);

SoROUTE* SoROUTE361 = new SoROUTE();
SoROUTE361->setFromNode(QString("Dive_Time"));
SoROUTE361->setFromField(QString("fraction_changed"));
SoROUTE361->setToNode(QString("head_RotationInterpolator_BasicDive"));
SoROUTE361->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE361);

SoROUTE* SoROUTE362 = new SoROUTE();
SoROUTE362->setFromNode(QString("Dive_Time"));
SoROUTE362->setFromField(QString("fraction_changed"));
SoROUTE362->setToNode(QString("neck_RotationInterpolator_BasicDive"));
SoROUTE362->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE362);

SoROUTE* SoROUTE363 = new SoROUTE();
SoROUTE363->setFromNode(QString("Dive_Time"));
SoROUTE363->setFromField(QString("fraction_changed"));
SoROUTE363->setToNode(QString("upper_body_RotationInterpolator_BasicDive"));
SoROUTE363->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE363);

SoROUTE* SoROUTE364 = new SoROUTE();
SoROUTE364->setFromNode(QString("Dive_Time"));
SoROUTE364->setFromField(QString("fraction_changed"));
SoROUTE364->setToNode(QString("whole_body_RotationInterpolator_BasicDive"));
SoROUTE364->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE364);

SoROUTE* SoROUTE365 = new SoROUTE();
SoROUTE365->setFromNode(QString("Dive_Time"));
SoROUTE365->setFromField(QString("fraction_changed"));
SoROUTE365->setToNode(QString("whole_body_TranslationInterpolator_BasicDive"));
SoROUTE365->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE365);

SoROUTE* SoROUTE366 = new SoROUTE();
SoROUTE366->setFromNode(QString("r_ankle_RotationInterpolator_BasicDive"));
SoROUTE366->setFromField(QString("value_changed"));
SoROUTE366->setToNode(QString("hanim_r_ankle"));
SoROUTE366->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE366);

SoROUTE* SoROUTE367 = new SoROUTE();
SoROUTE367->setFromNode(QString("r_knee_RotationInterpolator_BasicDive"));
SoROUTE367->setFromField(QString("value_changed"));
SoROUTE367->setToNode(QString("hanim_r_knee"));
SoROUTE367->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE367);

SoROUTE* SoROUTE368 = new SoROUTE();
SoROUTE368->setFromNode(QString("r_hip_RotationInterpolator_BasicDive"));
SoROUTE368->setFromField(QString("value_changed"));
SoROUTE368->setToNode(QString("hanim_r_hip"));
SoROUTE368->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE368);

SoROUTE* SoROUTE369 = new SoROUTE();
SoROUTE369->setFromNode(QString("l_ankle_RotationInterpolator_BasicDive"));
SoROUTE369->setFromField(QString("value_changed"));
SoROUTE369->setToNode(QString("hanim_l_ankle"));
SoROUTE369->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE369);

SoROUTE* SoROUTE370 = new SoROUTE();
SoROUTE370->setFromNode(QString("l_knee_RotationInterpolator_BasicDive"));
SoROUTE370->setFromField(QString("value_changed"));
SoROUTE370->setToNode(QString("hanim_l_knee"));
SoROUTE370->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE370);

SoROUTE* SoROUTE371 = new SoROUTE();
SoROUTE371->setFromNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE371->setFromField(QString("value_changed"));
SoROUTE371->setToNode(QString("finWarpScript"));
SoROUTE371->setToField(QString("set_rotationLeft"));
SoNode16->addChild(*SoROUTE371);

SoROUTE* SoROUTE372 = new SoROUTE();
SoROUTE372->setFromNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE372->setFromField(QString("value_changed"));
SoROUTE372->setToNode(QString("finWarpScript"));
SoROUTE372->setToField(QString("set_rotationRight"));
SoNode16->addChild(*SoROUTE372);

SoROUTE* SoROUTE373 = new SoROUTE();
SoROUTE373->setFromNode(QString("l_hip_RotationInterpolator_BasicDive"));
SoROUTE373->setFromField(QString("value_changed"));
SoROUTE373->setToNode(QString("hanim_l_hip"));
SoROUTE373->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE373);

SoROUTE* SoROUTE374 = new SoROUTE();
SoROUTE374->setFromNode(QString("lower_body_RotationInterpolator_BasicDive"));
SoROUTE374->setFromField(QString("value_changed"));
SoROUTE374->setToNode(QString("hanim_sacroiliac"));
SoROUTE374->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE374);

SoROUTE* SoROUTE375 = new SoROUTE();
SoROUTE375->setFromNode(QString("head_RotationInterpolator_BasicDive"));
SoROUTE375->setFromField(QString("value_changed"));
SoROUTE375->setToNode(QString("hanim_skullbase"));
SoROUTE375->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE375);

SoROUTE* SoROUTE376 = new SoROUTE();
SoROUTE376->setFromNode(QString("neck_RotationInterpolator_BasicDive"));
SoROUTE376->setFromField(QString("value_changed"));
SoROUTE376->setToNode(QString("hanim_vc4"));
SoROUTE376->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE376);

SoROUTE* SoROUTE377 = new SoROUTE();
SoROUTE377->setFromNode(QString("upper_body_RotationInterpolator_BasicDive"));
SoROUTE377->setFromField(QString("value_changed"));
SoROUTE377->setToNode(QString("hanim_vl1"));
SoROUTE377->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE377);

SoROUTE* SoROUTE378 = new SoROUTE();
SoROUTE378->setFromNode(QString("whole_body_RotationInterpolator_BasicDive"));
SoROUTE378->setFromField(QString("value_changed"));
SoROUTE378->setToNode(QString("hanim_humanoid_root"));
SoROUTE378->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE378);

SoROUTE* SoROUTE379 = new SoROUTE();
SoROUTE379->setFromNode(QString("whole_body_TranslationInterpolator_BasicDive"));
SoROUTE379->setFromField(QString("value_changed"));
SoROUTE379->setToNode(QString("hanim_humanoid_root"));
SoROUTE379->setToField(QString("set_translation"));
SoNode16->addChild(*SoROUTE379);

SoROUTE* SoROUTE380 = new SoROUTE();
SoROUTE380->setFromNode(QString("Dive_Time"));
SoROUTE380->setFromField(QString("fraction_changed"));
SoROUTE380->setToNode(QString("r_wrist_RotationInterpolator_BasicDive"));
SoROUTE380->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE380);

SoROUTE* SoROUTE381 = new SoROUTE();
SoROUTE381->setFromNode(QString("Dive_Time"));
SoROUTE381->setFromField(QString("fraction_changed"));
SoROUTE381->setToNode(QString("r_elbow_RotationInterpolator_BasicDive"));
SoROUTE381->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE381);

SoROUTE* SoROUTE382 = new SoROUTE();
SoROUTE382->setFromNode(QString("Dive_Time"));
SoROUTE382->setFromField(QString("fraction_changed"));
SoROUTE382->setToNode(QString("r_shoulder_RotationInterpolator_BasicDive"));
SoROUTE382->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE382);

SoROUTE* SoROUTE383 = new SoROUTE();
SoROUTE383->setFromNode(QString("Dive_Time"));
SoROUTE383->setFromField(QString("fraction_changed"));
SoROUTE383->setToNode(QString("l_wrist_RotationInterpolator_BasicDive"));
SoROUTE383->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE383);

SoROUTE* SoROUTE384 = new SoROUTE();
SoROUTE384->setFromNode(QString("Dive_Time"));
SoROUTE384->setFromField(QString("fraction_changed"));
SoROUTE384->setToNode(QString("l_elbow_RotationInterpolator_BasicDive"));
SoROUTE384->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE384);

SoROUTE* SoROUTE385 = new SoROUTE();
SoROUTE385->setFromNode(QString("Dive_Time"));
SoROUTE385->setFromField(QString("fraction_changed"));
SoROUTE385->setToNode(QString("l_shoulder_RotationInterpolator_BasicDive"));
SoROUTE385->setToField(QString("set_fraction"));
SoNode16->addChild(*SoROUTE385);

SoROUTE* SoROUTE386 = new SoROUTE();
SoROUTE386->setFromNode(QString("r_wrist_RotationInterpolator_BasicDive"));
SoROUTE386->setFromField(QString("value_changed"));
SoROUTE386->setToNode(QString("hanim_r_wrist"));
SoROUTE386->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE386);

SoROUTE* SoROUTE387 = new SoROUTE();
SoROUTE387->setFromNode(QString("r_elbow_RotationInterpolator_BasicDive"));
SoROUTE387->setFromField(QString("value_changed"));
SoROUTE387->setToNode(QString("hanim_r_elbow"));
SoROUTE387->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE387);

SoROUTE* SoROUTE388 = new SoROUTE();
SoROUTE388->setFromNode(QString("r_shoulder_RotationInterpolator_BasicDive"));
SoROUTE388->setFromField(QString("value_changed"));
SoROUTE388->setToNode(QString("hanim_r_shoulder"));
SoROUTE388->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE388);

SoROUTE* SoROUTE389 = new SoROUTE();
SoROUTE389->setFromNode(QString("l_wrist_RotationInterpolator_BasicDive"));
SoROUTE389->setFromField(QString("value_changed"));
SoROUTE389->setToNode(QString("hanim_l_wrist"));
SoROUTE389->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE389);

SoROUTE* SoROUTE390 = new SoROUTE();
SoROUTE390->setFromNode(QString("l_elbow_RotationInterpolator_BasicDive"));
SoROUTE390->setFromField(QString("value_changed"));
SoROUTE390->setToNode(QString("hanim_l_elbow"));
SoROUTE390->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE390);

SoROUTE* SoROUTE391 = new SoROUTE();
SoROUTE391->setFromNode(QString("l_shoulder_RotationInterpolator_BasicDive"));
SoROUTE391->setFromField(QString("value_changed"));
SoROUTE391->setToNode(QString("hanim_l_shoulder"));
SoROUTE391->setToField(QString("set_rotation"));
SoNode16->addChild(*SoROUTE391);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}
