
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
Someta3->setContent(QString("NancyStandShootRifleM24.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Canonical HAnim 1.1 specification example, using native X3D tags instead of ProtoDeclaration/ExternProtoDeclaration and ProtoInstance."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Etsuko Lippi"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("4 January 2002"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Tue, 09 Sep 2025 19:39:13 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("TODO"));
Someta8->setContent(QString("convert to HAnim 2.0"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("error"));
Someta9->setContent(QString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("warning"));
Someta10->setContent(QString("ProtoBody missing content"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("warning"));
Someta11->setContent(QString("Numerous QA warnings need to be corrected"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("warning"));
Someta12->setContent(QString("LOA1_ShootAnimation ought to be moved out as a separate prototype."));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("identifier"));
Someta13->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/NancyStandShootRifleM24.x3d"));
Sohead1->addMeta(*Someta13);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode14 = new SoNode();
SoExternProtoDeclare* SoExternProtoDeclare15 = new SoExternProtoDeclare();
SoExternProtoDeclare15->setName(QString("RifleM24"));
SoExternProtoDeclare15->setAppinfo(QString("Rifle M24"));
SoExternProtoDeclare15->setUrl(new QString[]{QString("../../Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24"), QString("https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.x3d#RifleM24"), QString("../../Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24"), QString("https://savage.nps.edu/Savage/Weapons/SmallArms/RifleM24Prototype.wrl#RifleM24")}, 4);
Sofield* Sofield16 = new Sofield();
Sofield16->setAccessType(QString("inputOnly"));
Sofield16->setType(QString("SFBool"));
Sofield16->setName(QString("trigger"));
Sofield16->setAppinfo(QString("input true to fire"));
SoExternProtoDeclare15->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setAccessType(QString("outputOnly"));
Sofield17->setType(QString("SFBool"));
Sofield17->setName(QString("fire"));
Sofield17->setAppinfo(QString("output true when fired"));
SoExternProtoDeclare15->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setAccessType(QString("inputOnly"));
Sofield18->setType(QString("SFTime"));
Sofield18->setName(QString("animationStartTime"));
Sofield18->setAppinfo(QString("trigger animation"));
SoExternProtoDeclare15->addChild(*Sofield18);

SoNode14->addChild(*SoExternProtoDeclare15);

SoProtoDeclare* SoProtoDeclare19 = new SoProtoDeclare();
SoProtoDeclare19->setName(QString("LOA1_ShootAnimation"));
SoProtoInterface* SoProtoInterface20 = new SoProtoInterface();
Sofield* Sofield21 = new Sofield();
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("SFTime"));
Sofield21->setName(QString("cycleInterval"));
Sofield21->setValue(QString("0.00999999977648258"));
SoProtoInterface20->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setType(QString("SFBool"));
Sofield22->setName(QString("enabled"));
Sofield22->setValue(QString("true"));
SoProtoInterface20->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFBool"));
Sofield23->setName(QString("loop"));
Sofield23->setValue(QString("true"));
SoProtoInterface20->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFTime"));
Sofield24->setName(QString("startTime"));
Sofield24->setValue(QString("0"));
SoProtoInterface20->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setType(QString("SFTime"));
Sofield25->setName(QString("stopTime"));
SoProtoInterface20->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setAccessType(QString("outputOnly"));
Sofield26->setType(QString("SFFloat"));
Sofield26->setName(QString("fraction_changed"));
SoProtoInterface20->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setAccessType(QString("outputOnly"));
Sofield27->setType(QString("SFBool"));
Sofield27->setName(QString("isActive"));
SoProtoInterface20->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setAccessType(QString("outputOnly"));
Sofield28->setType(QString("SFVec3f"));
Sofield28->setName(QString("HumanoidRoot_translation_changed"));
SoProtoInterface20->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setAccessType(QString("outputOnly"));
Sofield29->setType(QString("SFRotation"));
Sofield29->setName(QString("HumanoidRoot_rotation_changed"));
SoProtoInterface20->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setAccessType(QString("outputOnly"));
Sofield30->setType(QString("SFRotation"));
Sofield30->setName(QString("lower_body_rotation_changed"));
SoProtoInterface20->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setAccessType(QString("outputOnly"));
Sofield31->setType(QString("SFRotation"));
Sofield31->setName(QString("l_hip_rotation_changed"));
SoProtoInterface20->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setAccessType(QString("outputOnly"));
Sofield32->setType(QString("SFRotation"));
Sofield32->setName(QString("l_knee_rotation_changed"));
SoProtoInterface20->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setAccessType(QString("outputOnly"));
Sofield33->setType(QString("SFRotation"));
Sofield33->setName(QString("l_ankle_rotation_changed"));
SoProtoInterface20->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setAccessType(QString("outputOnly"));
Sofield34->setType(QString("SFRotation"));
Sofield34->setName(QString("l_midtarsal_rotation_changed"));
SoProtoInterface20->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setAccessType(QString("outputOnly"));
Sofield35->setType(QString("SFRotation"));
Sofield35->setName(QString("r_hip_rotation_changed"));
SoProtoInterface20->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setAccessType(QString("outputOnly"));
Sofield36->setType(QString("SFRotation"));
Sofield36->setName(QString("r_knee_rotation_changed"));
SoProtoInterface20->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setAccessType(QString("outputOnly"));
Sofield37->setType(QString("SFRotation"));
Sofield37->setName(QString("r_ankle_rotation_changed"));
SoProtoInterface20->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setAccessType(QString("outputOnly"));
Sofield38->setType(QString("SFRotation"));
Sofield38->setName(QString("r_midtarsal_rotation_changed"));
SoProtoInterface20->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setAccessType(QString("outputOnly"));
Sofield39->setType(QString("SFRotation"));
Sofield39->setName(QString("vl5_rotation_changed"));
SoProtoInterface20->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setAccessType(QString("outputOnly"));
Sofield40->setType(QString("SFRotation"));
Sofield40->setName(QString("skullbase_rotation_changed"));
SoProtoInterface20->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setAccessType(QString("outputOnly"));
Sofield41->setType(QString("SFRotation"));
Sofield41->setName(QString("l_shoulder_rotation_changed"));
SoProtoInterface20->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setAccessType(QString("outputOnly"));
Sofield42->setType(QString("SFRotation"));
Sofield42->setName(QString("l_elbow_rotation_changed"));
SoProtoInterface20->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setAccessType(QString("outputOnly"));
Sofield43->setType(QString("SFRotation"));
Sofield43->setName(QString("l_wrist_rotation_changed"));
SoProtoInterface20->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("SFRotation"));
Sofield44->setName(QString("r_shoulder_rotation_changed"));
SoProtoInterface20->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setAccessType(QString("outputOnly"));
Sofield45->setType(QString("SFRotation"));
Sofield45->setName(QString("r_elbow_rotation_changed"));
SoProtoInterface20->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setAccessType(QString("outputOnly"));
Sofield46->setType(QString("SFRotation"));
Sofield46->setName(QString("r_wrist_rotation_changed"));
SoProtoInterface20->addChild(*Sofield46);

SoProtoDeclare19->addChild(*SoProtoInterface20);

SoProtoBody* SoProtoBody47 = new SoProtoBody();
SoGroup* SoGroup48 = new SoGroup();
SoGroup48->setDEF(QString("ErrorLostContentCheckVersionControl"));
SoProtoBody47->addChild(*SoGroup48);

SoProtoDeclare19->addChild(*SoProtoBody47);

SoNode14->addChild(*SoProtoDeclare19);

SoBackground* SoBackground49 = new SoBackground();
SoBackground49->setSkyColor(new float[]{0.6,0.6,0.6}, 3);
SoNode14->addChild(*SoBackground49);

SoViewpoint* SoViewpoint50 = new SoViewpoint();
SoViewpoint50->setDescription(QString("Nancy Rifle Shooting Position"));
SoViewpoint50->setPosition(new float[]{0.0,0.9,2.7});
SoNode14->addChild(*SoViewpoint50);

SoViewpoint* SoViewpoint51 = new SoViewpoint();
SoViewpoint51->setDescription(QString("Nancy Side Viewpoint"));
SoViewpoint51->setPosition(new float[]{-2.7,0.9,0.4});
SoViewpoint51->setOrientation(new float[]{0.0,-1.0,0.0,1.4925});
SoNode14->addChild(*SoViewpoint51);

SoViewpoint* SoViewpoint52 = new SoViewpoint();
SoViewpoint52->setDescription(QString("Nancy Above Viewpoint"));
SoViewpoint52->setPosition(new float[]{0.1,4.1,-0.2});
SoViewpoint52->setOrientation(new float[]{0.954,0.244,0.172,4.6369});
SoNode14->addChild(*SoViewpoint52);

SoLOD* SoLOD53 = new SoLOD();
SoLOD53->setRange(new float[]{50.0,100.0}, 2);
SoGroup* SoGroup54 = new SoGroup();
SoGroup54->setDEF(QString("Viewpoint"));
SoGroup* SoGroup55 = new SoGroup();
SoGroup55->setDEF(QString("HighResolution"));
SoTransform* SoTransform56 = new SoTransform();
SoHAnimHumanoid* SoHAnimHumanoid57 = new SoHAnimHumanoid();
SoHAnimHumanoid57->setDEF(QString("hanim_Nancy"));
SoHAnimHumanoid57->X3DNode::setName(QString("Nancy"));
SoHAnimHumanoid57->setVersion(QString("1.0"));
SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->setDEF(QString("hanim_humanoid_root"));
SoHAnimJoint58->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint58->setCenter(new float[]{-0.00405,0.855,-0.000113});
SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->setDEF(QString("hanim_sacroiliac"));
SoHAnimJoint59->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint59->setCenter(new float[]{0.0,1.01,-0.0204});
SoHAnimSegment* SoHAnimSegment60 = new SoHAnimSegment();
SoHAnimSegment60->setDEF(QString("hanim_pelvis"));
SoHAnimSegment60->X3DNode::setName(QString("pelvis"));
SoShape* SoShape61 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance62 = new SoVRMLAppearance();
SoMaterial* SoMaterial63 = new SoMaterial();
SoMaterial63->setDEF(QString("Pants_Color"));
SoMaterial63->setAmbientIntensity(0.25);
SoMaterial63->setDiffuseColor(new float[]{0.054,0.233,0.39});
SoVRMLAppearance62->addChild(*SoMaterial63);

SoImageTexture* SoImageTexture64 = new SoImageTexture();
SoImageTexture64->setDEF(QString("camo"));
SoImageTexture64->setUrl(new QString[]{QString("greenCamo.jpg"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/greenCamo.jpg")}, 2);
SoImageTexture64->setRepeatS(false);
SoImageTexture64->setRepeatT(false);
SoVRMLAppearance62->addChild(*SoImageTexture64);

SoShape61->addChild(*SoVRMLAppearance62);

SoIndexedFaceSet* SoIndexedFaceSet65 = new SoIndexedFaceSet();
SoIndexedFaceSet65->setCreaseAngle(1.14);
SoIndexedFaceSet65->setCoordIndex(new int32_t[]{0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1}, 712);
SoCoordinate* SoCoordinate66 = new SoCoordinate();
SoCoordinate66->setPoint(new float[]{0.0,1.06,0.0218,0.0561,1.07,0.00726,0.0851,1.07,-0.0115,0.104,1.07,-0.0497,0.0851,1.07,-0.0851,0.032,1.06,-0.0985,0.0873,1.04,0.0078,0.033,1.04,0.0395,0.123,1.05,-0.0405,0.0609,1.02,-0.106,0.0894,0.996,-0.106,0.143,1.0,-0.0309,0.117,1.0,0.0164,0.0314,0.999,0.0502,0.0314,0.96,-0.13,0.156,0.966,-0.0405,0.156,0.968,-0.00724,0.0341,0.954,0.0513,0.115,0.96,-0.0916,0.121,0.926,0.0352,0.0357,0.92,0.0497,0.0314,0.91,-0.146,0.0991,0.91,-0.131,0.169,0.883,-0.0448,0.169,0.885,-0.00939,0.123,0.873,0.0384,0.0926,0.872,0.047,0.0325,0.873,0.0287,0.0293,0.866,-0.142,0.102,0.869,-0.131,0.129,0.868,-0.103,0.0314,0.84,-0.125,0.101,0.844,-0.122,0.133,0.846,-0.0878,0.0653,0.835,0.0132,0.0615,0.824,-0.111,0.0985,0.823,-0.101,0.132,0.826,-0.0448,0.0609,0.821,-0.0158,0.0599,0.812,-0.0545,0.0,1.08,-0.0266,-0.0561,1.07,0.00726,-0.0851,1.07,-0.0115,-0.104,1.07,-0.0497,-0.0851,1.07,-0.0851,-0.032,1.06,-0.0985,-0.0873,1.04,0.0078,-0.033,1.04,0.0395,-0.123,1.05,-0.0405,-0.0609,1.02,-0.106,0.0,1.02,-0.108,-0.0894,0.996,-0.106,-0.143,1.0,-0.0309,-0.144,1.0,-0.011,-0.117,1.0,0.0164,-0.0314,0.999,0.0502,0.0,0.961,-0.123,-0.0314,0.96,-0.13,-0.156,0.966,-0.0405,-0.156,0.968,-0.00724,-0.0341,0.954,0.0513,-0.115,0.96,-0.0916,-0.121,0.926,0.0352,-0.0357,0.92,0.0497,0.0,0.91,-0.127,-0.0314,0.91,-0.146,-0.0991,0.91,-0.131,-0.167,0.911,-0.0448,-0.167,0.912,-0.00671,0.0,0.883,-0.129,-0.123,0.873,0.0384,-0.0926,0.872,0.047,-0.0325,0.873,0.0287,-0.0293,0.866,-0.142,-0.102,0.869,-0.131,-0.129,0.868,-0.103,-0.166,0.863,-0.0148,0.0,0.863,-0.00456,-0.166,0.862,-0.0459,0.0,0.858,-0.1,-0.0314,0.84,-0.125,-0.101,0.844,-0.122,-0.0653,0.835,0.0132,0.0,0.839,-0.0217,0.0,0.835,-0.0867,-0.0615,0.824,-0.111,-0.0985,0.823,-0.101,-0.132,0.826,-0.0448,-0.0609,0.821,-0.0158,0.0,0.831,-0.0626,-0.0599,0.812,-0.0545}, 273);
SoIndexedFaceSet65->setCoord(*SoCoordinate66);

SoShape61->setGeometry(*SoIndexedFaceSet65);

SoHAnimSegment60->addChild(*SoShape61);

SoHAnimJoint59->addChildren(*SoHAnimSegment60);

SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->setDEF(QString("hanim_l_hip"));
SoHAnimJoint67->X3DNode::setName(QString("l_hip"));
SoHAnimJoint67->setCenter(new float[]{0.122,0.888271,-0.0693267});
SoHAnimSegment* SoHAnimSegment68 = new SoHAnimSegment();
SoHAnimSegment68->setDEF(QString("hanim_l_thigh"));
SoHAnimSegment68->X3DNode::setName(QString("l_thigh"));
SoShape* SoShape69 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance70 = new SoVRMLAppearance();
SoMaterial* SoMaterial71 = new SoMaterial();
SoMaterial71->setUSE(QString("Pants_Color"));
SoVRMLAppearance70->addChild(*SoMaterial71);

SoImageTexture* SoImageTexture72 = new SoImageTexture();
SoImageTexture72->setUSE(QString("camo"));
SoVRMLAppearance70->addChild(*SoImageTexture72);

SoShape69->addChild(*SoVRMLAppearance70);

SoIndexedFaceSet* SoIndexedFaceSet73 = new SoIndexedFaceSet();
SoIndexedFaceSet73->setCreaseAngle(1.32);
SoIndexedFaceSet73->setCoordIndex(new int32_t[]{0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1}, 248);
SoCoordinate* SoCoordinate74 = new SoCoordinate();
SoCoordinate74->setPoint(new float[]{0.0969,0.804,-0.0486,0.101,0.876,0.0336,0.17,0.894,-0.00778,0.17,0.891,-0.076,0.124,0.858,-0.129,0.076,0.843,-0.143,0.025,0.819,-0.0889,0.0507,0.847,0.0196,0.00349,0.826,-0.0287,0.0991,0.808,0.0406,0.161,0.814,-0.00187,0.165,0.808,-0.0755,0.122,0.788,-0.126,0.00993,0.762,-0.0937,0.00993,0.762,-0.0309,0.0491,0.777,0.0185,0.0755,0.766,-0.139,0.13,0.597,-0.00618,0.132,0.6,-0.0593,0.108,0.603,-0.105,0.0722,0.601,-0.118,0.0314,0.59,-0.0953,0.0239,0.566,-0.0427,0.047,0.566,0.0051,0.0878,0.581,0.0217,0.114,0.499,-0.0132,0.116,0.488,-0.061,0.103,0.567,-0.0991,0.0362,0.557,-0.0926,0.025,0.486,-0.047,0.0507,0.497,-0.00188,0.0862,0.513,0.018,0.0733,0.579,-0.108}, 99);
SoIndexedFaceSet73->setCoord(*SoCoordinate74);

SoShape69->setGeometry(*SoIndexedFaceSet73);

SoHAnimSegment68->addChild(*SoShape69);

SoHAnimJoint67->addChildren(*SoHAnimSegment68);

SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->setDEF(QString("hanim_l_knee"));
SoHAnimJoint75->X3DNode::setName(QString("l_knee"));
SoHAnimJoint75->setCenter(new float[]{0.0738,0.517,-0.0284});
SoHAnimSegment* SoHAnimSegment76 = new SoHAnimSegment();
SoHAnimSegment76->setDEF(QString("hanim_l_calf"));
SoHAnimSegment76->X3DNode::setName(QString("l_calf"));
SoShape* SoShape77 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance78 = new SoVRMLAppearance();
SoMaterial* SoMaterial79 = new SoMaterial();
SoMaterial79->setUSE(QString("Pants_Color"));
SoVRMLAppearance78->addChild(*SoMaterial79);

SoImageTexture* SoImageTexture80 = new SoImageTexture();
SoImageTexture80->setUSE(QString("camo"));
SoVRMLAppearance78->addChild(*SoImageTexture80);

SoShape77->addChild(*SoVRMLAppearance78);

SoIndexedFaceSet* SoIndexedFaceSet81 = new SoIndexedFaceSet();
SoIndexedFaceSet81->setCreaseAngle(1.57);
SoIndexedFaceSet81->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1}, 368);
SoCoordinate* SoCoordinate82 = new SoCoordinate();
SoCoordinate82->setPoint(new float[]{0.0883,0.532,-0.00349,0.0609,0.533,-0.00833,0.0814,0.55,-0.0395,0.0529,0.536,-0.0368,0.0577,0.544,-0.0577,0.0722,0.546,-0.0717,0.0975,0.54,-0.0647,0.105,0.539,-0.0438,0.104,0.539,-0.0223,0.0862,0.506,0.0158,0.101,0.51,-0.0798,0.0706,0.51,-0.101,0.0406,0.513,-0.0744,0.0368,0.51,-0.0357,0.0556,0.506,-0.000272,0.117,0.508,-0.0169,0.0878,0.361,-0.0126,0.123,0.363,-0.04,0.123,0.363,-0.0663,0.107,0.367,-0.107,0.0588,0.365,-0.122,0.0228,0.358,-0.0926,0.0239,0.358,-0.0475,0.0497,0.358,-0.0234,0.118,0.311,-0.0411,0.118,0.309,-0.0685,0.105,0.31,-0.108,0.0572,0.308,-0.123,0.0201,0.309,-0.0937,0.0191,0.311,-0.0508,0.0475,0.307,-0.0282,0.0883,0.309,-0.018,0.0959,0.124,-0.04,0.0905,0.12,-0.0647,0.0738,0.117,-0.0814,0.0373,0.121,-0.0636,0.0416,0.124,-0.0416,0.0744,0.13,-0.0212,0.0561,0.13,-0.0245,0.0529,0.121,-0.0873,0.0948,0.0897,-0.0368,0.0916,0.0779,-0.0604,0.0717,0.0854,-0.0765,0.0406,0.0918,-0.0626,0.0384,0.0881,-0.0363,0.054,0.0972,-0.0175,0.0765,0.11,-0.0169,0.0486,0.0999,-0.0835}, 144);
SoIndexedFaceSet81->setCoord(*SoCoordinate82);

SoShape77->setGeometry(*SoIndexedFaceSet81);

SoHAnimSegment76->addChild(*SoShape77);

SoHAnimJoint75->addChildren(*SoHAnimSegment76);

SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->setDEF(QString("hanim_l_ankle"));
SoHAnimJoint83->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint83->setCenter(new float[]{0.0645,0.0719,-0.048});
SoHAnimSegment* SoHAnimSegment84 = new SoHAnimSegment();
SoHAnimSegment84->setDEF(QString("hanim_l_hindfoot"));
SoHAnimSegment84->X3DNode::setName(QString("l_hindfoot"));
SoShape* SoShape85 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance86 = new SoVRMLAppearance();
SoMaterial* SoMaterial87 = new SoMaterial();
SoMaterial87->setDEF(QString("Shoe_Color"));
SoMaterial87->setAmbientIntensity(0.25);
SoMaterial87->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoVRMLAppearance86->addChild(*SoMaterial87);

SoShape85->addChild(*SoVRMLAppearance86);

SoIndexedFaceSet* SoIndexedFaceSet88 = new SoIndexedFaceSet();
SoIndexedFaceSet88->setCreaseAngle(1.57);
SoIndexedFaceSet88->setCoordIndex(new int32_t[]{2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1}, 392);
SoCoordinate* SoCoordinate89 = new SoCoordinate();
SoCoordinate89->setPoint(new float[]{0.0529,0.0,-0.0923,0.0863,0.0,-0.0862,0.0727,0.0,-0.0994,0.0863,0.0219,-0.0862,0.0727,0.0219,-0.0994,0.1,0.0,-0.0594,0.1,0.0219,-0.0594,0.113,0.0,0.0645,0.113,0.0219,0.0645,0.112,0.0,0.117,0.112,0.0156,0.117,0.0701,0.0,0.146,0.0701,0.0156,0.146,0.0468,0.0,0.153,0.0468,0.0156,0.153,0.0215,0.0,0.146,0.0215,0.0156,0.146,0.0165,0.0,0.125,0.0165,0.0156,0.125,0.0211,0.0,0.0377,0.0211,0.0219,0.0377,0.0393,0.0,-0.0129,0.0393,0.0219,-0.0129,0.0433,0.0,-0.0534,0.0433,0.0219,-0.0534,0.0529,0.0219,-0.0923,0.0305,0.0253,0.0938,0.0505,0.0253,0.099,0.0854,0.0253,0.0834,0.102,0.0253,0.0707,0.0568,0.0573,-0.0918,0.0492,0.0573,-0.0497,0.0435,0.0573,-0.0225,0.0442,0.0573,0.0235,0.0623,0.0573,0.0366,0.0911,0.0573,0.0159,0.0962,0.0573,-0.0121,0.0911,0.0573,-0.0482,0.0758,0.0573,-0.0899,0.0676,0.0573,-0.0962,0.0578,0.0953,-0.0896,0.0489,0.0953,-0.0757,0.0447,0.0953,-0.0432,0.0451,0.0953,-0.0128,0.0624,0.0953,-0.00466,0.0857,0.0953,-0.0134,0.0953,0.0953,-0.038,0.0843,0.0953,-0.0803,0.0761,0.0953,-0.0889,0.0682,0.0953,-0.0929,0.0675,0.13,-0.0608}, 153);
SoIndexedFaceSet88->setCoord(*SoCoordinate89);

SoShape85->setGeometry(*SoIndexedFaceSet88);

SoHAnimSegment84->addChild(*SoShape85);

SoHAnimJoint83->addChildren(*SoHAnimSegment84);

SoHAnimJoint75->addChildren(*SoHAnimJoint83);

SoHAnimJoint67->addChildren(*SoHAnimJoint75);

SoHAnimJoint59->addChildren(*SoHAnimJoint67);

SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->setDEF(QString("hanim_r_hip"));
SoHAnimJoint90->X3DNode::setName(QString("r_hip"));
SoHAnimJoint90->setCenter(new float[]{-0.11,0.892362,-0.0732533});
SoHAnimSegment* SoHAnimSegment91 = new SoHAnimSegment();
SoHAnimSegment91->setDEF(QString("hanim_r_thigh"));
SoHAnimSegment91->X3DNode::setName(QString("r_thigh"));
SoShape* SoShape92 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance93 = new SoVRMLAppearance();
SoMaterial* SoMaterial94 = new SoMaterial();
SoMaterial94->setUSE(QString("Pants_Color"));
SoVRMLAppearance93->addChild(*SoMaterial94);

SoImageTexture* SoImageTexture95 = new SoImageTexture();
SoImageTexture95->setUSE(QString("camo"));
SoVRMLAppearance93->addChild(*SoImageTexture95);

SoShape92->addChild(*SoVRMLAppearance93);

SoIndexedFaceSet* SoIndexedFaceSet96 = new SoIndexedFaceSet();
SoIndexedFaceSet96->setCreaseAngle(1.61);
SoIndexedFaceSet96->setCoordIndex(new int32_t[]{5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1}, 240);
SoCoordinate* SoCoordinate97 = new SoCoordinate();
SoCoordinate97->setPoint(new float[]{-0.0969,0.804,-0.0486,-0.101,0.876,0.0336,-0.17,0.894,-0.00778,-0.17,0.891,-0.076,-0.124,0.858,-0.129,-0.076,0.843,-0.143,-0.025,0.819,-0.0889,-0.0507,0.847,0.0196,-0.00349,0.826,-0.0287,-0.0991,0.808,0.0406,-0.161,0.814,-0.00187,-0.165,0.808,-0.0755,-0.122,0.788,-0.126,-0.00993,0.762,-0.0937,-0.00993,0.762,-0.0309,-0.0491,0.777,0.0185,-0.0755,0.766,-0.139,-0.13,0.597,-0.00618,-0.132,0.6,-0.0593,-0.108,0.603,-0.105,-0.0722,0.601,-0.118,-0.0314,0.59,-0.0953,-0.0239,0.566,-0.0427,-0.047,0.566,0.0051,-0.0878,0.581,0.0217,-0.114,0.499,-0.0132,-0.116,0.488,-0.061,-0.103,0.567,-0.0991,-0.0362,0.557,-0.0926,-0.025,0.486,-0.047,-0.0507,0.497,-0.00188,-0.0862,0.513,0.018}, 96);
SoIndexedFaceSet96->setCoord(*SoCoordinate97);

SoShape92->setGeometry(*SoIndexedFaceSet96);

SoHAnimSegment91->addChild(*SoShape92);

SoHAnimJoint90->addChildren(*SoHAnimSegment91);

SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->setDEF(QString("hanim_r_knee"));
SoHAnimJoint98->X3DNode::setName(QString("r_knee"));
SoHAnimJoint98->setCenter(new float[]{-0.0699,0.51,-0.0166});
SoHAnimSegment* SoHAnimSegment99 = new SoHAnimSegment();
SoHAnimSegment99->setDEF(QString("hanim_r_calf"));
SoHAnimSegment99->X3DNode::setName(QString("r_calf"));
SoShape* SoShape100 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance101 = new SoVRMLAppearance();
SoMaterial* SoMaterial102 = new SoMaterial();
SoMaterial102->setUSE(QString("Pants_Color"));
SoVRMLAppearance101->addChild(*SoMaterial102);

SoImageTexture* SoImageTexture103 = new SoImageTexture();
SoImageTexture103->setUSE(QString("camo"));
SoVRMLAppearance101->addChild(*SoImageTexture103);

SoShape100->addChild(*SoVRMLAppearance101);

SoIndexedFaceSet* SoIndexedFaceSet104 = new SoIndexedFaceSet();
SoIndexedFaceSet104->setCreaseAngle(1.57);
SoIndexedFaceSet104->setCoordIndex(new int32_t[]{14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1}, 368);
SoCoordinate* SoCoordinate105 = new SoCoordinate();
SoCoordinate105->setPoint(new float[]{-0.123,0.363,-0.0663,-0.123,0.363,-0.04,-0.118,0.309,-0.0685,-0.118,0.311,-0.0411,-0.117,0.508,-0.0169,-0.107,0.367,-0.107,-0.105,0.539,-0.0438,-0.105,0.31,-0.108,-0.104,0.539,-0.0223,-0.101,0.51,-0.0798,-0.0975,0.54,-0.0647,-0.0948,0.0897,-0.0368,-0.0916,0.0779,-0.0604,-0.0905,0.12,-0.0647,-0.0883,0.532,-0.00349,-0.0883,0.309,-0.018,-0.0878,0.361,-0.0126,-0.0862,0.506,0.0158,-0.0814,0.55,-0.0395,-0.0765,0.11,-0.0169,-0.0744,0.13,-0.0212,-0.0738,0.117,-0.0814,-0.0722,0.546,-0.0717,-0.0717,0.0854,-0.0765,-0.0706,0.51,-0.101,-0.0609,0.533,-0.00833,-0.0588,0.365,-0.122,-0.0577,0.544,-0.0577,-0.0572,0.308,-0.123,-0.0561,0.13,-0.0245,-0.0556,0.506,-0.000272,-0.054,0.0972,-0.0175,-0.0529,0.536,-0.0368,-0.0529,0.121,-0.0873,-0.0497,0.358,-0.0234,-0.0486,0.0999,-0.0835,-0.0475,0.307,-0.0282,-0.0416,0.124,-0.0416,-0.0406,0.0918,-0.0626,-0.0406,0.513,-0.0744,-0.0384,0.0881,-0.0363,-0.0373,0.121,-0.0636,-0.0368,0.51,-0.0357,-0.0239,0.358,-0.0475,-0.0228,0.358,-0.0926,-0.0201,0.309,-0.0937,-0.0191,0.311,-0.0508,-0.0985,0.125,-0.0375}, 144);
SoIndexedFaceSet104->setCoord(*SoCoordinate105);

SoShape100->setGeometry(*SoIndexedFaceSet104);

SoHAnimSegment99->addChild(*SoShape100);

SoHAnimJoint98->addChildren(*SoHAnimSegment99);

SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->setDEF(QString("hanim_r_ankle"));
SoHAnimJoint106->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint106->setCenter(new float[]{-0.064,0.0753,-0.0412});
SoHAnimSegment* SoHAnimSegment107 = new SoHAnimSegment();
SoHAnimSegment107->setDEF(QString("hanim_r_hindfoot"));
SoHAnimSegment107->X3DNode::setName(QString("r_hindfoot"));
SoShape* SoShape108 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance109 = new SoVRMLAppearance();
SoMaterial* SoMaterial110 = new SoMaterial();
SoMaterial110->setUSE(QString("Shoe_Color"));
SoVRMLAppearance109->addChild(*SoMaterial110);

SoShape108->addChild(*SoVRMLAppearance109);

SoIndexedFaceSet* SoIndexedFaceSet111 = new SoIndexedFaceSet();
SoIndexedFaceSet111->setCreaseAngle(1.57);
SoIndexedFaceSet111->setCoordIndex(new int32_t[]{6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1}, 392);
SoCoordinate* SoCoordinate112 = new SoCoordinate();
SoCoordinate112->setPoint(new float[]{-0.0727,0.0,-0.0994,-0.1,0.0,-0.0594,-0.0701,0.0,0.146,-0.0468,0.0,0.153,-0.0215,0.0,0.146,-0.0433,0.0,-0.0534,-0.0529,0.0,-0.0923,-0.0727,0.0219,-0.0994,-0.0863,0.0219,-0.0862,-0.1,0.0219,-0.0594,-0.108,0.0219,-0.00479,-0.112,0.0156,0.117,-0.0701,0.0156,0.146,-0.0468,0.0156,0.153,-0.0215,0.0156,0.146,-0.0165,0.017,0.0777,-0.0433,0.0219,-0.0534,-0.0529,0.0219,-0.0923,-0.0445,0.0273,-0.0189,-0.0265,0.0253,0.0549,-0.0305,0.0253,0.0938,-0.069,0.0253,0.0938,-0.102,0.0253,0.0707,-0.0568,0.0573,-0.0918,-0.0492,0.0573,-0.0497,-0.0424,0.0573,-0.00142,-0.0478,0.0573,0.0341,-0.0623,0.0573,0.0366,-0.0864,0.0573,0.0245,-0.0962,0.0573,-0.0121,-0.0845,0.0573,-0.0764,-0.0758,0.0573,-0.0899,-0.0676,0.0573,-0.0962,-0.0578,0.0953,-0.0896,-0.0489,0.0953,-0.0757,-0.0459,0.0953,-0.0615,-0.0435,0.0953,-0.0292,-0.0485,0.0953,-0.00582,-0.0624,0.0953,-0.00466,-0.0857,0.0953,-0.0134,-0.0953,0.0953,-0.038,-0.0843,0.0953,-0.0803,-0.0761,0.0953,-0.0889,-0.0682,0.0953,-0.0929,-0.0675,0.13,-0.0608,-0.0165,0.0,0.125,-0.112,0.0,0.117,-0.0165,0.0,0.0777,-0.0393,0.0,-0.0129,-0.108,0.0,-0.00479,-0.0863,0.0,-0.0862}, 153);
SoIndexedFaceSet111->setCoord(*SoCoordinate112);

SoShape108->setGeometry(*SoIndexedFaceSet111);

SoHAnimSegment107->addChild(*SoShape108);

SoHAnimJoint106->addChildren(*SoHAnimSegment107);

SoHAnimJoint98->addChildren(*SoHAnimJoint106);

SoHAnimJoint90->addChildren(*SoHAnimJoint98);

SoHAnimJoint59->addChildren(*SoHAnimJoint90);

SoHAnimJoint58->addChildren(*SoHAnimJoint59);

SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->setDEF(QString("hanim_vl1"));
SoHAnimJoint113->X3DNode::setName(QString("vl1"));
SoHAnimJoint113->setCenter(new float[]{-0.00405,1.07,-0.0275});
SoHAnimSegment* SoHAnimSegment114 = new SoHAnimSegment();
SoHAnimSegment114->setDEF(QString("hanim_l1"));
SoHAnimSegment114->X3DNode::setName(QString("l1"));
SoTransform* SoTransform115 = new SoTransform();
SoGroup* SoGroup116 = new SoGroup();
SoTransform* SoTransform117 = new SoTransform();
SoTransform117->setTranslation(new float[]{0.0,-0.12,0.0});
SoTransform117->setScale(new float[]{1.1,1.1,1.1});
SoShape* SoShape118 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance119 = new SoVRMLAppearance();
SoMaterial* SoMaterial120 = new SoMaterial();
SoMaterial120->setDEF(QString("JacketColor"));
SoMaterial120->setDiffuseColor(new float[]{0.01,0.28,0.01});
SoVRMLAppearance119->addChild(*SoMaterial120);

SoShape118->addChild(*SoVRMLAppearance119);

SoIndexedFaceSet* SoIndexedFaceSet121 = new SoIndexedFaceSet();
SoIndexedFaceSet121->setCreaseAngle(1.59);
SoIndexedFaceSet121->setCoordIndex(new int32_t[]{4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1}, 772);
SoTextureCoordinate* SoTextureCoordinate122 = new SoTextureCoordinate();
SoTextureCoordinate122->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet121->setTexCoord(*SoTextureCoordinate122);

SoCoordinate* SoCoordinate123 = new SoCoordinate();
SoCoordinate123->setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
SoIndexedFaceSet121->setCoord(*SoCoordinate123);

SoShape118->setGeometry(*SoIndexedFaceSet121);

SoTransform117->addChild(*SoShape118);

SoGroup116->addChild(*SoTransform117);

SoTransform115->addChild(*SoGroup116);

SoHAnimSegment114->addChild(*SoTransform115);

SoShape* SoShape124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoMaterial* SoMaterial126 = new SoMaterial();
SoMaterial126->setDEF(QString("Shirt_Color"));
SoMaterial126->setAmbientIntensity(0.25);
SoMaterial126->setDiffuseColor(new float[]{0.6,0.0745,0.1137});
SoVRMLAppearance125->addChild(*SoMaterial126);

SoImageTexture* SoImageTexture127 = new SoImageTexture();
SoImageTexture127->setDEF(QString("small_logo_Tex"));
SoImageTexture127->setUrl(new QString[]{QString("small_logo.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/small_logo.gif")}, 2);
SoVRMLAppearance125->addChild(*SoImageTexture127);

SoShape124->addChild(*SoVRMLAppearance125);

SoIndexedFaceSet* SoIndexedFaceSet128 = new SoIndexedFaceSet();
SoIndexedFaceSet128->setCreaseAngle(1.59);
SoIndexedFaceSet128->setCoordIndex(new int32_t[]{0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1}, 1234);
SoTextureCoordinate* SoTextureCoordinate129 = new SoTextureCoordinate();
SoTextureCoordinate129->setPoint(new float[]{0.1611,-0.02056,0.9468,-0.02056,0.9739,0.9344,-0.137,1.094,0.1973,0.6424,0.2231,0.04876,0.5054,0.2466,0.5054,0.5929,0.8135,0.6424,0.6282,0.1972,0.7876,0.04876,0.5054,-0.05018,0.6282,-0.05018,0.5054,0.8403,0.7989,1.038,0.5054,1.038,0.8248,0.7908,0.186,0.7908,0.2118,1.038,0.6427,0.7908,-0.01977,0.5929,-0.03324,0.7908,1.044,0.7908,1.031,0.5929,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 356);
SoIndexedFaceSet128->setTexCoord(*SoTextureCoordinate129);

SoCoordinate* SoCoordinate130 = new SoCoordinate();
SoCoordinate130->setPoint(new float[]{0.043,1.25,0.0614,0.101,1.25,0.0614,0.103,1.31,0.0195,0.021,1.32,0.0276,0.0572,1.27,-0.153,0.0524,1.15,-0.134,0.0,1.19,-0.14,0.0,1.26,-0.147,-0.0572,1.27,-0.153,-0.0228,1.18,-0.14,-0.0524,1.15,-0.134,0.0,1.13,-0.126,-0.0228,1.13,-0.124,0.0,1.31,-0.146,-0.0545,1.35,-0.138,0.0,1.35,-0.136,-0.0593,1.3,-0.151,0.0593,1.3,-0.151,0.0545,1.35,-0.138,-0.0255,1.3,-0.146,0.0975,1.26,-0.15,0.1,1.3,-0.148,-0.1,1.3,-0.148,-0.0975,1.26,-0.15,-0.117,1.41,-0.0395,-0.0674,1.45,-0.0314,-0.0926,1.41,-0.0937,-0.124,1.4,-0.0706,-0.0583,1.44,-0.0615,-0.0228,1.46,-0.0872,-0.0534,1.42,-0.112,-0.0228,1.42,0.00351,-0.0593,1.43,-0.0185,-0.0787,1.39,-0.00293,-0.112,1.4,-0.0131,-0.164,1.39,-0.0373,-0.0153,1.39,0.0159,-0.0953,1.35,-0.136,-0.0545,1.35,-0.138,-0.139,1.34,0.00297,-0.137,1.34,-0.0368,0.0,1.35,-0.136,-0.156,1.35,-0.0915,-0.132,1.29,-0.127,-0.1,1.3,-0.148,-0.0418,1.35,0.0168,-0.013,1.37,0.0167,-0.151,1.28,-0.0878,-0.136,1.32,-0.0406,-0.124,1.26,-0.125,-0.0975,1.26,-0.15,0.00228,1.37,0.0167,-0.00959,1.32,0.0276,-0.0918,1.31,0.0195,-0.141,1.25,-0.0744,-0.0316,1.25,0.0614,-0.00261,1.25,0.0458,-0.0611,1.25,0.0668,-0.0896,1.25,0.0614,-0.126,1.24,0.012,-0.126,1.22,0.0141,-0.129,1.17,-0.0523,-0.115,1.16,-0.105,-0.0851,1.18,-0.134,-0.0524,1.15,-0.134,-0.083,1.13,-0.122,-0.117,1.15,-0.018,-0.11,1.1,-0.0846,-0.0808,1.1,-0.111,-0.0228,1.13,-0.124,-0.0524,1.1,-0.119,0.0,1.13,-0.126,-0.0228,1.1,-0.116,-0.0563,1.15,0.0377,-0.00476,1.18,0.0458,-0.0343,1.18,0.0485,-0.0966,1.15,-0.00413,-0.12,1.1,-0.0373,-0.121,1.07,-0.0356,-0.106,1.07,-0.0711,-0.0475,1.06,-0.105,0.0,1.08,0.0556,-0.0787,1.08,0.0347,-0.103,1.08,0.00296,-0.0975,1.01,-0.0873,-0.134,0.998,-0.0314,-0.0475,1.02,-0.109,-0.0325,1.02,0.0529,0.0,1.02,0.0422,-0.0975,1.02,0.0132,0.0926,1.41,-0.0937,0.0674,1.45,-0.0314,0.117,1.41,-0.0395,0.124,1.4,-0.0706,0.0583,1.44,-0.0615,0.0534,1.42,-0.112,0.0228,1.46,-0.0872,0.0,1.4,-0.112,0.0787,1.39,-0.00293,0.0593,1.43,-0.0185,0.0228,1.42,0.00351,0.112,1.4,-0.0131,0.164,1.39,-0.0373,0.0153,1.39,0.0159,0.0953,1.35,-0.136,0.0545,1.35,-0.138,0.139,1.34,0.00297,0.156,1.35,-0.0915,0.132,1.29,-0.127,0.151,1.28,-0.0878,0.1,1.3,-0.148,0.137,1.34,-0.0368,0.147,1.32,-0.0406,0.124,1.26,-0.125,0.0975,1.26,-0.15,0.021,1.32,0.0276,0.0532,1.35,0.0168,0.103,1.31,0.0195,0.135,1.29,-0.0406,0.141,1.25,-0.0744,0.132,1.18,-0.083,0.134,1.19,-0.0572,0.014,1.25,0.0458,0.043,1.25,0.0614,0.101,1.25,0.0614,0.138,1.24,0.012,0.065,1.23,0.0743,0.115,1.16,-0.105,0.0851,1.18,-0.134,0.0524,1.15,-0.134,0.043,1.2,0.0641,0.127,1.14,-0.0427,0.083,1.13,-0.122,0.0162,1.18,0.0458,0.0457,1.18,0.0485,0.117,1.15,-0.018,0.11,1.1,-0.0846,0.0808,1.1,-0.111,0.0524,1.1,-0.119,0.0228,1.1,-0.116,0.108,1.15,-0.00413,0.12,1.1,-0.0373,0.121,1.07,-0.0356,0.106,1.07,-0.0711,0.0475,1.06,-0.105,0.0787,1.08,0.0347,0.0844,1.15,0.0297,0.103,1.08,0.00296,0.0,1.07,-0.11,0.0975,1.01,-0.0873,0.134,0.998,-0.0475,0.0475,1.02,-0.109,0.0325,1.02,0.0529,0.0975,1.02,0.0132,0.0,1.02,-0.117,0.0,1.44,-0.0389,0.0,1.01,-0.0259,-0.104,1.19,0.0423,-0.0778,1.19,0.0642,-0.078,1.19,0.0644,-0.0493,1.2,0.0664,-0.0281,1.22,0.0587,-0.104,1.2,0.0568,-0.0484,1.21,0.0692,-0.0549,1.21,0.0708,-0.0806,1.21,0.0713,-0.0852,1.21,0.0703,0.116,1.19,0.043,0.114,1.21,0.0572,0.0967,1.21,0.0701,0.11,1.19,0.0502,0.093,1.19,0.0622,0.0832,1.19,0.0662,0.0863,1.21,0.0728,0.0154,1.21,0.0458,-0.00393,1.21,0.0458,-0.0145,1.2,0.0512,0.0534,1.35,0.0168}, 534);
SoIndexedFaceSet128->setCoord(*SoCoordinate130);

SoShape124->setGeometry(*SoIndexedFaceSet128);

SoHAnimSegment114->addChild(*SoShape124);

SoHAnimJoint113->addChildren(*SoHAnimSegment114);

SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->setDEF(QString("hanim_l_shoulder"));
SoHAnimJoint131->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint131->setCenter(new float[]{0.167,1.36,-0.0518});
SoHAnimSegment* SoHAnimSegment132 = new SoHAnimSegment();
SoHAnimSegment132->setDEF(QString("hanim_l_upperarm"));
SoHAnimSegment132->X3DNode::setName(QString("l_upperarm"));
SoTransform* SoTransform133 = new SoTransform();
SoTransform133->setDEF(QString("l_upperarm_adjust"));
SoTransform133->setTranslation(new float[]{0.167,1.36,-0.0518});
SoTransform133->setRotation(new float[]{1.0,0.0,0.0,0.119});
SoTransform133->setCenter(new float[]{0.182,1.22,-0.047});
SoShape* SoShape134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance135 = new SoVRMLAppearance();
SoMaterial* SoMaterial136 = new SoMaterial();
SoMaterial136->setDEF(QString("Skin_Color"));
SoMaterial136->setAmbientIntensity(0.25);
SoMaterial136->setDiffuseColor(new float[]{0.749,0.601,0.462});
SoVRMLAppearance135->addChild(*SoMaterial136);

SoShape134->addChild(*SoVRMLAppearance135);

SoIndexedFaceSet* SoIndexedFaceSet137 = new SoIndexedFaceSet();
SoIndexedFaceSet137->setCreaseAngle(1.65);
SoIndexedFaceSet137->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1}, 160);
SoCoordinate* SoCoordinate138 = new SoCoordinate();
SoCoordinate138->setPoint(new float[]{0.174,1.37,-0.0625,0.185,1.38,-0.0395,0.156,1.39,-0.0464,0.174,1.37,-0.0158,0.154,1.37,-0.0185,0.157,1.38,-0.0733,0.182,1.33,-0.0728,0.151,1.33,-0.0937,0.15,1.34,-0.000787,0.185,1.33,-0.00025,0.201,1.33,-0.0411,0.189,1.26,-0.0808,0.155,1.26,-0.0867,0.151,1.26,-0.000789,0.19,1.26,-0.00401,0.209,1.26,-0.0427,0.141,1.26,-0.0421,0.203,1.08,-0.0744,0.162,1.05,-0.0561,0.169,1.08,-0.00885,0.208,1.07,-0.00133,0.221,1.08,-0.0352}, 66);
SoIndexedFaceSet137->setCoord(*SoCoordinate138);

SoShape134->setGeometry(*SoIndexedFaceSet137);

SoTransform133->addChild(*SoShape134);

SoHAnimSegment132->addChild(*SoTransform133);

SoHAnimJoint131->addChildren(*SoHAnimSegment132);

SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->setDEF(QString("hanim_l_elbow"));
SoHAnimJoint139->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint139->setCenter(new float[]{0.196,1.07,-0.0518});
SoHAnimSegment* SoHAnimSegment140 = new SoHAnimSegment();
SoHAnimSegment140->setDEF(QString("hanim_l_forearm"));
SoHAnimSegment140->X3DNode::setName(QString("l_forearm"));
SoTransform* SoTransform141 = new SoTransform();
SoTransform141->setDEF(QString("l_forearm_adjust"));
SoTransform141->setTranslation(new float[]{0.196,1.07,-0.0518});
SoTransform141->setRotation(new float[]{-1.0,0.0,0.0,0.1});
SoTransform141->setCenter(new float[]{0.198,0.961,-0.0405});
SoShape* SoShape142 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance143 = new SoVRMLAppearance();
SoMaterial* SoMaterial144 = new SoMaterial();
SoMaterial144->setUSE(QString("Skin_Color"));
SoVRMLAppearance143->addChild(*SoMaterial144);

SoShape142->addChild(*SoVRMLAppearance143);

SoIndexedFaceSet* SoIndexedFaceSet145 = new SoIndexedFaceSet();
SoIndexedFaceSet145->setCreaseAngle(1.75);
SoIndexedFaceSet145->setCoordIndex(new int32_t[]{2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1}, 136);
SoCoordinate* SoCoordinate146 = new SoCoordinate();
SoCoordinate146->setPoint(new float[]{0.177,1.09,-0.0609,0.202,1.1,-0.0566,0.189,1.1,-0.0395,0.213,1.1,-0.025,0.203,1.1,-0.0158,0.182,1.09,-0.00563,0.167,1.09,-0.0325,0.176,1.08,-0.0781,0.16,1.06,-0.0373,0.214,1.07,-0.00402,0.228,1.07,-0.0319,0.208,1.08,-0.0765,0.179,1.07,-0.00294,0.21,0.818,-0.0615,0.201,0.82,-0.0405,0.205,0.819,-0.00832,0.224,0.818,-0.00778,0.237,0.82,-0.0282,0.231,0.819,-0.0609}, 57);
SoIndexedFaceSet145->setCoord(*SoCoordinate146);

SoShape142->setGeometry(*SoIndexedFaceSet145);

SoTransform141->addChild(*SoShape142);

SoHAnimSegment140->addChild(*SoTransform141);

SoHAnimJoint139->addChildren(*SoHAnimSegment140);

SoHAnimJoint* SoHAnimJoint147 = new SoHAnimJoint();
SoHAnimJoint147->setDEF(QString("hanim_l_wrist"));
SoHAnimJoint147->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint147->setCenter(new float[]{0.213,0.811,-0.0338});
SoHAnimSegment* SoHAnimSegment148 = new SoHAnimSegment();
SoHAnimSegment148->setDEF(QString("hanim_l_hand"));
SoHAnimSegment148->X3DNode::setName(QString("l_hand"));
SoTransform* SoTransform149 = new SoTransform();
SoTransform149->setDEF(QString("l_hand_adjust"));
SoTransform149->setTranslation(new float[]{0.213,0.811,-0.0338});
SoTransform149->setRotation(new float[]{-0.06361,-0.9967,0.04988,1.333});
SoTransform149->setCenter(new float[]{0.213,0.811,-0.0338});
SoShape* SoShape150 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance151 = new SoVRMLAppearance();
SoMaterial* SoMaterial152 = new SoMaterial();
SoMaterial152->setUSE(QString("Skin_Color"));
SoVRMLAppearance151->addChild(*SoMaterial152);

SoShape150->addChild(*SoVRMLAppearance151);

SoIndexedFaceSet* SoIndexedFaceSet153 = new SoIndexedFaceSet();
SoIndexedFaceSet153->setCreaseAngle(1.48);
SoIndexedFaceSet153->setCoordIndex(new int32_t[]{2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1}, 368);
SoCoordinate* SoCoordinate154 = new SoCoordinate();
SoCoordinate154->setPoint(new float[]{0.211,0.828,-0.0434,0.194,0.81,-0.0445,0.237,0.82,-0.0425,0.236,0.82,-0.0237,0.194,0.81,-0.0254,0.21,0.828,-0.0247,0.252,0.801,-0.0424,0.252,0.801,-0.0231,0.269,0.765,-0.0426,0.268,0.765,-0.0225,0.273,0.732,-0.0395,0.272,0.732,-0.0223,0.27,0.704,-0.0342,0.27,0.704,-0.0224,0.262,0.703,-0.0345,0.261,0.703,-0.0227,0.256,0.717,-0.0389,0.256,0.717,-0.023,0.255,0.738,-0.0408,0.255,0.738,-0.023,0.251,0.734,-0.0406,0.251,0.734,-0.0232,0.251,0.692,-0.0232,0.248,0.657,-0.0233,0.24,0.645,-0.0236,0.226,0.637,-0.0241,0.213,0.639,-0.0246,0.197,0.652,-0.0253,0.188,0.669,-0.0256,0.184,0.697,-0.0258,0.183,0.73,-0.0258,0.187,0.77,-0.0257,0.244,0.696,-0.0375,0.244,0.692,-0.0372,0.242,0.661,-0.0345,0.241,0.658,-0.0343,0.241,0.656,-0.0341,0.231,0.646,-0.0336,0.206,0.65,-0.0349,0.218,0.644,-0.034,0.205,0.652,-0.0352,0.198,0.667,-0.0367,0.195,0.691,-0.039,0.194,0.696,-0.0395,0.193,0.725,-0.042,0.193,0.731,-0.0425,0.197,0.765,-0.0449,0.197,0.77,-0.0453}, 144);
SoIndexedFaceSet153->setCoord(*SoCoordinate154);

SoShape150->setGeometry(*SoIndexedFaceSet153);

SoTransform149->addChild(*SoShape150);

SoHAnimSegment148->addChild(*SoTransform149);

SoHAnimJoint147->addChildren(*SoHAnimSegment148);

SoHAnimJoint139->addChildren(*SoHAnimJoint147);

SoHAnimJoint131->addChildren(*SoHAnimJoint139);

SoHAnimJoint113->addChildren(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint155 = new SoHAnimJoint();
SoHAnimJoint155->setDEF(QString("hanim_r_shoulder"));
SoHAnimJoint155->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint155->setCenter(new float[]{-0.167,1.36,-0.0458});
SoHAnimSegment* SoHAnimSegment156 = new SoHAnimSegment();
SoHAnimSegment156->setDEF(QString("hanim_r_upperarm"));
SoHAnimSegment156->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform157 = new SoTransform();
SoTransform157->setDEF(QString("r_upperarm_adjust"));
SoTransform157->setTranslation(new float[]{-0.167,1.36,-0.0458});
SoTransform157->setRotation(new float[]{1.0,0.0,0.0,0.0836});
SoTransform157->setCenter(new float[]{-0.182,1.22,-0.047});
SoShape* SoShape158 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance159 = new SoVRMLAppearance();
SoMaterial* SoMaterial160 = new SoMaterial();
SoMaterial160->setUSE(QString("Skin_Color"));
SoVRMLAppearance159->addChild(*SoMaterial160);

SoShape158->addChild(*SoVRMLAppearance159);

SoIndexedFaceSet* SoIndexedFaceSet161 = new SoIndexedFaceSet();
SoIndexedFaceSet161->setCreaseAngle(1.53);
SoIndexedFaceSet161->setCoordIndex(new int32_t[]{14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1}, 208);
SoCoordinate* SoCoordinate162 = new SoCoordinate();
SoCoordinate162->setPoint(new float[]{-0.221,1.08,-0.0352,-0.214,1.14,-0.0405,-0.209,1.26,-0.0427,-0.208,1.07,-0.00133,-0.203,1.08,-0.0744,-0.201,1.33,-0.0411,-0.198,1.14,-0.0024,-0.198,1.13,-0.076,-0.19,1.26,-0.00401,-0.189,1.26,-0.0808,-0.185,1.38,-0.0395,-0.185,1.33,-0.00025,-0.182,1.33,-0.0728,-0.174,1.37,-0.0158,-0.174,1.37,-0.0625,-0.169,1.08,-0.00885,-0.167,1.13,-0.0744,-0.162,1.05,-0.0561,-0.16,1.13,-0.000793,-0.157,1.38,-0.0733,-0.156,1.39,-0.0464,-0.155,1.26,-0.0867,-0.154,1.37,-0.0185,-0.151,1.26,-0.000789,-0.151,1.33,-0.0937,-0.15,1.34,-0.000787,-0.15,1.13,-0.0411,-0.141,1.26,-0.0421}, 84);
SoIndexedFaceSet161->setCoord(*SoCoordinate162);

SoShape158->setGeometry(*SoIndexedFaceSet161);

SoTransform157->addChild(*SoShape158);

SoHAnimSegment156->addChild(*SoTransform157);

SoHAnimJoint155->addChildren(*SoHAnimSegment156);

SoHAnimJoint* SoHAnimJoint163 = new SoHAnimJoint();
SoHAnimJoint163->setDEF(QString("hanim_r_elbow"));
SoHAnimJoint163->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint163->setCenter(new float[]{-0.192,1.07,-0.0498});
SoHAnimSegment* SoHAnimSegment164 = new SoHAnimSegment();
SoHAnimSegment164->setDEF(QString("hanim_r_forearm"));
SoHAnimSegment164->X3DNode::setName(QString("r_forearm"));
SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setDEF(QString("r_forearm_adjust"));
SoTransform165->setTranslation(new float[]{-0.192,1.07,-0.0498});
SoTransform165->setRotation(new float[]{-1.0,0.0,0.0,0.1254});
SoTransform165->setCenter(new float[]{-0.198,0.961,-0.0397});
SoShape* SoShape166 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance167 = new SoVRMLAppearance();
SoMaterial* SoMaterial168 = new SoMaterial();
SoMaterial168->setUSE(QString("Skin_Color"));
SoVRMLAppearance167->addChild(*SoMaterial168);

SoShape166->addChild(*SoVRMLAppearance167);

SoIndexedFaceSet* SoIndexedFaceSet169 = new SoIndexedFaceSet();
SoIndexedFaceSet169->setCreaseAngle(1.73);
SoIndexedFaceSet169->setCoordIndex(new int32_t[]{20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1}, 184);
SoCoordinate* SoCoordinate170 = new SoCoordinate();
SoCoordinate170->setPoint(new float[]{-0.237,0.82,-0.0282,-0.235,1.02,-0.033,-0.231,0.819,-0.0609,-0.228,1.07,-0.0319,-0.224,0.818,-0.00778,-0.221,1.01,-0.0744,-0.218,1.01,-0.00133,-0.214,1.07,-0.00402,-0.213,1.1,-0.025,-0.21,0.818,-0.0615,-0.208,1.08,-0.0765,-0.205,0.819,-0.00832,-0.203,1.1,-0.0158,-0.202,1.1,-0.0566,-0.201,0.82,-0.0405,-0.189,1.1,-0.0395,-0.183,1.01,-0.00831,-0.183,1.01,-0.0781,-0.182,1.09,-0.00563,-0.179,1.07,-0.00294,-0.177,1.09,-0.0609,-0.176,1.08,-0.0781,-0.167,1.09,-0.0325,-0.166,1.0,-0.0405,-0.16,1.06,-0.0373}, 75);
SoIndexedFaceSet169->setCoord(*SoCoordinate170);

SoShape166->setGeometry(*SoIndexedFaceSet169);

SoTransform165->addChild(*SoShape166);

SoHAnimSegment164->addChild(*SoTransform165);

SoHAnimJoint163->addChildren(*SoHAnimSegment164);

SoHAnimJoint* SoHAnimJoint171 = new SoHAnimJoint();
SoHAnimJoint171->setDEF(QString("hanim_r_wrist"));
SoHAnimJoint171->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint171->setCenter(new float[]{-0.217,0.811,-0.0338});
SoHAnimSegment* SoHAnimSegment172 = new SoHAnimSegment();
SoHAnimSegment172->setDEF(QString("hanim_r_hand"));
SoHAnimSegment172->X3DNode::setName(QString("r_hand"));
SoGroup* SoGroup173 = new SoGroup();
SoTransform* SoTransform174 = new SoTransform();
SoTransform174->setDEF(QString("r_hand_adjust"));
SoTransform174->setRotation(new float[]{-0.09024,0.994,-0.0624,1.216});
SoTransform174->setCenter(new float[]{-0.217,0.811,-0.0338});
SoShape* SoShape175 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance176 = new SoVRMLAppearance();
SoMaterial* SoMaterial177 = new SoMaterial();
SoMaterial177->setUSE(QString("Skin_Color"));
SoVRMLAppearance176->addChild(*SoMaterial177);

SoShape175->addChild(*SoVRMLAppearance176);

SoIndexedFaceSet* SoIndexedFaceSet178 = new SoIndexedFaceSet();
SoIndexedFaceSet178->setCreaseAngle(1.57);
SoIndexedFaceSet178->setCoordIndex(new int32_t[]{10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1}, 368);
SoCoordinate* SoCoordinate179 = new SoCoordinate();
SoCoordinate179->setPoint(new float[]{-0.237,0.82,-0.0425,-0.252,0.801,-0.0424,-0.269,0.765,-0.0426,-0.273,0.732,-0.0395,-0.27,0.704,-0.0342,-0.262,0.703,-0.0345,-0.256,0.717,-0.0389,-0.255,0.738,-0.0408,-0.251,0.734,-0.0406,-0.194,0.81,-0.0445,-0.211,0.828,-0.0434,-0.236,0.82,-0.0237,-0.252,0.801,-0.0231,-0.268,0.765,-0.0225,-0.272,0.732,-0.0223,-0.27,0.704,-0.0224,-0.261,0.703,-0.0227,-0.256,0.717,-0.023,-0.255,0.738,-0.023,-0.251,0.734,-0.0232,-0.251,0.692,-0.0232,-0.248,0.657,-0.0233,-0.24,0.645,-0.0236,-0.226,0.637,-0.0241,-0.213,0.639,-0.0246,-0.197,0.652,-0.0253,-0.188,0.669,-0.0256,-0.184,0.697,-0.0258,-0.183,0.73,-0.0258,-0.187,0.77,-0.0257,-0.194,0.81,-0.0254,-0.21,0.828,-0.0247,-0.221,0.641,-0.0336,-0.21,0.65,-0.0348,-0.206,0.652,-0.0352,-0.198,0.667,-0.0368,-0.193,0.692,-0.0392,-0.192,0.696,-0.0396,-0.231,0.646,-0.0336,-0.238,0.656,-0.0342,-0.24,0.658,-0.0344,-0.24,0.662,-0.0347,-0.243,0.692,-0.0372,-0.243,0.696,-0.0376,-0.192,0.725,-0.0421,-0.192,0.73,-0.0426,-0.195,0.766,-0.0451,-0.196,0.77,-0.0454}, 144);
SoIndexedFaceSet178->setCoord(*SoCoordinate179);

SoShape175->setGeometry(*SoIndexedFaceSet178);

SoTransform174->addChild(*SoShape175);

SoGroup173->addChild(*SoTransform174);

SoTransform* SoTransform180 = new SoTransform();
SoTransform180->setRotation(new float[]{0.0,0.0,1.0,-2.7});
SoTransform180->setScale(new float[]{0.1,0.1,0.1});
SoTransform180->setCenter(new float[]{-0.8,0.45,0.1});
SoTransform* SoTransform181 = new SoTransform();
SoTransform181->setTranslation(new float[]{-0.7,0.0,0.0});
SoTransform181->setRotation(new float[]{1.0,0.0,0.0,1.57});
SoProtoInstance* SoProtoInstance182 = new SoProtoInstance();
SoProtoInstance182->setDEF(QString("rifleM24"));
SoProtoInstance182->setName(QString("RifleM24"));
SoTransform181->addChild(*SoProtoInstance182);

SoScript* SoScript183 = new SoScript();
SoScript183->setDEF(QString("FireScript"));
Sofield* Sofield184 = new Sofield();
Sofield184->setAccessType(QString("outputOnly"));
Sofield184->setType(QString("SFBool"));
Sofield184->setName(QString("fire"));
SoScript183->addChild(*Sofield184);

Sofield* Sofield185 = new Sofield();
Sofield185->setAccessType(QString("inputOnly"));
Sofield185->setType(QString("SFBool"));
Sofield185->setName(QString("enabled"));
SoScript183->addChild(*Sofield185);


//SoScript183->setSourceCode(QString("ecmascript:")+
//_T("function enabled (value, timeStamp)")+
//_T("{")+
//_T("        //print ('enabled value =' + value);")+
//_T("        if (value == true)")+
//_T("           fire = value;")+
//_T("}"));
SoTransform181->addChild(*SoScript183);

SoTouchSensor* SoTouchSensor186 = new SoTouchSensor();
SoTouchSensor186->setDEF(QString("FireTouchSensor"));
SoTouchSensor186->setDescription(QString("click for shoot rifle"));
SoTransform181->addChild(*SoTouchSensor186);

SoTransform180->addChild(*SoTransform181);

SoGroup173->addChild(*SoTransform180);

SoHAnimSegment172->addChild(*SoGroup173);

SoHAnimJoint171->addChildren(*SoHAnimSegment172);

SoHAnimJoint163->addChildren(*SoHAnimJoint171);

SoHAnimJoint155->addChildren(*SoHAnimJoint163);

SoHAnimJoint113->addChildren(*SoHAnimJoint155);

SoHAnimJoint* SoHAnimJoint187 = new SoHAnimJoint();
SoHAnimJoint187->setDEF(QString("hanim_vc4"));
SoHAnimJoint187->X3DNode::setName(QString("vc4"));
SoHAnimJoint187->setCenter(new float[]{0.0,1.43,-0.0458});
SoHAnimSegment* SoHAnimSegment188 = new SoHAnimSegment();
SoHAnimSegment188->setDEF(QString("hanim_c4"));
SoHAnimSegment188->X3DNode::setName(QString("c4"));
SoShape* SoShape189 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance190 = new SoVRMLAppearance();
SoMaterial* SoMaterial191 = new SoMaterial();
SoMaterial191->setUSE(QString("Skin_Color"));
SoVRMLAppearance190->addChild(*SoMaterial191);

SoShape189->addChild(*SoVRMLAppearance190);

SoIndexedFaceSet* SoIndexedFaceSet192 = new SoIndexedFaceSet();
SoIndexedFaceSet192->setDEF(QString("neck"));
SoIndexedFaceSet192->setCreaseAngle(1.91);
SoIndexedFaceSet192->setCoordIndex(new int32_t[]{6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1}, 112);
SoCoordinate* SoCoordinate193 = new SoCoordinate();
SoCoordinate193->setPoint(new float[]{0.0105,1.54,-0.1,0.0357,1.54,-0.0685,0.0382,1.55,-0.0474,0.0105,1.55,-0.0204,0.0373,1.4,-0.0593,0.0577,1.4,-0.0266,0.0158,1.4,0.00512,0.0132,1.41,-0.0824,-0.0158,1.4,0.00512,-0.0577,1.4,-0.0266,-0.0382,1.55,-0.0474,-0.0105,1.55,-0.0204,-0.0373,1.4,-0.0593,-0.0357,1.54,-0.0685,-0.0132,1.41,-0.0824,-0.0105,1.54,-0.1}, 48);
SoIndexedFaceSet192->setCoord(*SoCoordinate193);

SoShape189->setGeometry(*SoIndexedFaceSet192);

SoHAnimSegment188->addChild(*SoShape189);

SoHAnimJoint187->addChildren(*SoHAnimSegment188);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->setDEF(QString("hanim_skullbase"));
SoHAnimJoint194->X3DNode::setName(QString("skullbase"));
SoHAnimJoint194->setCenter(new float[]{0.0,1.54,-0.0409});
SoHAnimSegment* SoHAnimSegment195 = new SoHAnimSegment();
SoHAnimSegment195->setDEF(QString("hanim_skull"));
SoHAnimSegment195->X3DNode::setName(QString("skull"));
SoGroup* SoGroup196 = new SoGroup();
SoTransform* SoTransform197 = new SoTransform();
SoTransform197->setDEF(QString("helmet"));
SoTransform197->setTranslation(new float[]{0.0,1.6,-0.05});
SoTransform197->setScale(new float[]{0.105,0.135,0.125});
SoShape* SoShape198 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance199 = new SoVRMLAppearance();
SoMaterial* SoMaterial200 = new SoMaterial();
SoVRMLAppearance199->addChild(*SoMaterial200);

SoImageTexture* SoImageTexture201 = new SoImageTexture();
SoImageTexture201->setUSE(QString("camo"));
SoVRMLAppearance199->addChild(*SoImageTexture201);

SoShape198->addChild(*SoVRMLAppearance199);

SoIndexedFaceSet* SoIndexedFaceSet202 = new SoIndexedFaceSet();
SoIndexedFaceSet202->setSolid(false);
SoIndexedFaceSet202->setCreaseAngle(0.1);
SoIndexedFaceSet202->setCoordIndex(new int32_t[]{0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1}, 1040);
SoCoordinate* SoCoordinate203 = new SoCoordinate();
SoCoordinate203->setPoint(new float[]{0.5257,0.0,0.8507,0.3477,0.0,0.9376,0.4636,0.1875,0.866,0.1227,0.0,0.9924,0.2531,0.2047,0.9455,0.368,0.397,0.8408,-0.1227,0.0,0.9924,0.0,0.2116,0.9773,0.1308,0.4233,0.8965,0.2453,0.5955,0.765,-0.3477,0.0,0.9376,-0.2531,0.2047,0.9455,-0.1308,0.4233,0.8965,0.0,0.6142,0.7891,0.1159,0.7501,0.6511,-0.5257,0.0,0.8507,-0.4636,0.1875,0.866,-0.368,0.397,0.8408,-0.2453,0.5955,0.765,-0.1159,0.7501,0.6511,0.0,0.8507,0.5257,0.8507,0.5257,0.0,0.866,0.4636,0.1875,0.7501,0.6511,0.1159,0.8408,0.368,0.397,0.7408,0.5844,0.3313,0.5955,0.765,0.2453,0.765,0.2453,0.5955,0.6849,0.4732,0.5541,0.5541,0.6849,0.4732,0.397,0.8408,0.368,0.6511,0.1159,0.7501,0.5844,0.3313,0.7408,0.4732,0.5541,0.6849,0.3313,0.7408,0.5844,0.1875,0.866,0.4636,0.9376,0.3477,0.0,0.9924,0.1227,0.0,0.9455,0.2531,0.2047,0.9924,0.0,0.0,0.9773,0.0,0.2116,0.8965,0.1308,0.4233,0.8965,0.0,0.4233,0.7891,0.0,0.6142,0.6511,0.0,0.7501,-0.6511,0.1159,0.7501,-0.765,0.2453,0.5955,-0.5844,0.3313,0.7408,-0.8408,0.368,0.397,-0.6849,0.4732,0.5541,-0.4732,0.5541,0.6849,-0.866,0.4636,0.1875,-0.7408,0.5844,0.3313,-0.5541,0.6849,0.4732,-0.3313,0.7408,0.5844,-0.8507,0.5257,0.0,-0.7501,0.6511,0.1159,-0.5955,0.765,0.2453,-0.397,0.8408,0.368,-0.1875,0.866,0.4636,-0.6511,0.0,0.7501,-0.7891,0.0,0.6142,-0.8965,0.0,0.4233,-0.8965,0.1308,0.4233,-0.9773,0.0,0.2116,-0.9455,0.2531,0.2047,-0.9924,0.0,0.0,-0.9924,0.1227,0.0,-0.9376,0.3477,0.0,-0.7501,0.6511,-0.1159,-0.5955,0.765,-0.2453,-0.6142,0.7891,0.0,-0.397,0.8408,-0.368,-0.4233,0.8965,-0.1308,-0.4233,0.8965,0.1308,-0.1875,0.866,-0.4636,-0.2047,0.9455,-0.2531,-0.2116,0.9773,0.0,-0.2047,0.9455,0.2531,0.0,0.8507,-0.5257,0.0,0.9376,-0.3477,0.0,0.9924,-0.1227,0.0,0.9924,0.1227,0.0,0.9376,0.3477,-0.866,0.4636,-0.1875,-0.8408,0.368,-0.397,-0.7408,0.5844,-0.3313,-0.765,0.2453,-0.5955,-0.6849,0.4732,-0.5541,-0.5541,0.6849,-0.4732,-0.6511,0.1159,-0.7501,-0.5844,0.3313,-0.7408,-0.4732,0.5541,-0.6849,-0.3313,0.7408,-0.5844,-0.5257,0.0,-0.8507,-0.4636,0.1875,-0.866,-0.368,0.397,-0.8408,-0.2453,0.5955,-0.765,-0.1159,0.7501,-0.6511,0.1875,0.866,-0.4636,0.397,0.8408,-0.368,0.2047,0.9455,-0.2531,0.5955,0.765,-0.2453,0.4233,0.8965,-0.1308,0.2116,0.9773,0.0,0.7501,0.6511,-0.1159,0.6142,0.7891,0.0,0.4233,0.8965,0.1308,0.2047,0.9455,0.2531,0.1159,0.7501,-0.6511,0.2453,0.5955,-0.765,0.3313,0.7408,-0.5844,0.368,0.397,-0.8408,0.4732,0.5541,-0.6849,0.5541,0.6849,-0.4732,0.4636,0.1875,-0.866,0.5844,0.3313,-0.7408,0.6849,0.4732,-0.5541,0.7408,0.5844,-0.3313,0.5257,0.0,-0.8507,0.6511,0.1159,-0.7501,0.765,0.2453,-0.5955,0.8408,0.368,-0.397,0.866,0.4636,-0.1875,0.3477,0.0,-0.9376,0.1227,0.0,-0.9924,-0.1227,0.0,-0.9924,-0.3477,0.0,-0.9376,0.2531,0.2047,-0.9455,0.1308,0.4233,-0.8965,0.0,0.2116,-0.9773,0.0,0.6142,-0.7891,-0.1308,0.4233,-0.8965,-0.2531,0.2047,-0.9455,0.6511,0.0,-0.7501,0.9773,0.0,-0.2116,0.8965,0.0,-0.4233,0.9455,0.2531,-0.2047,0.8965,0.1308,-0.4233,0.7891,0.0,-0.6142,-0.6511,0.0,-0.7501,-0.7891,0.0,-0.6142,-0.8965,0.1308,-0.4233,-0.8965,0.0,-0.4233,-0.9455,0.2531,-0.2047,-0.9773,0.0,-0.2116}, 438);
SoIndexedFaceSet202->setCoord(*SoCoordinate203);

SoShape198->setGeometry(*SoIndexedFaceSet202);

SoTransform197->addChild(*SoShape198);

SoGroup196->addChild(*SoTransform197);

SoTransform* SoTransform204 = new SoTransform();
SoTransform204->setDEF(QString("helmetBelt"));
SoTransform204->setTranslation(new float[]{0.0,1.61,0.0});
SoTransform204->setScale(new float[]{3.0,3.5,3.0});
SoShape* SoShape205 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance206 = new SoVRMLAppearance();
SoVRMLAppearance206->setDEF(QString("BeltColor"));
SoMaterial* SoMaterial207 = new SoMaterial();
SoMaterial207->setUSE(QString("JacketColor"));
SoVRMLAppearance206->addChild(*SoMaterial207);

SoShape205->addChild(*SoVRMLAppearance206);

SoExtrusion* SoExtrusion208 = new SoExtrusion();
SoExtrusion208->setCreaseAngle(1.57);
SoExtrusion208->setCrossSection(new float[]{0.0,0.006,0.001,0.0057,0.001,-0.0057,0.0,-0.006,-0.001,-0.0057,-0.001,0.0057,0.0,0.006}, 14);
SoExtrusion208->setSpine(new float[]{-0.03,0.0,0.0,-0.022,-0.015,0.0,-0.017,-0.03,0.0,-0.009,-0.037,0.0,0.0,-0.037,0.0,0.009,-0.037,0.0,0.017,-0.03,0.0,0.022,-0.015,0.0,0.03,0.0,0.0}, 27);
SoShape205->setGeometry(*SoExtrusion208);

SoTransform204->addChild(*SoShape205);

SoGroup196->addChild(*SoTransform204);

SoShape* SoShape209 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance210 = new SoVRMLAppearance();
SoMaterial* SoMaterial211 = new SoMaterial();
SoMaterial211->setUSE(QString("Skin_Color"));
SoVRMLAppearance210->addChild(*SoMaterial211);

SoShape209->addChild(*SoVRMLAppearance210);

SoIndexedFaceSet* SoIndexedFaceSet212 = new SoIndexedFaceSet();
SoIndexedFaceSet212->setDEF(QString("headIFS"));
SoIndexedFaceSet212->setCreaseAngle(0.7854);
SoIndexedFaceSet212->setColorIndex(new int[]{1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1,3,3,3,-1}, 1640);
SoIndexedFaceSet212->setCoordIndex(new int32_t[]{48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1,156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1}, 1640);
SoColor* SoColor213 = new SoColor();
SoColor213->setColor(new float[]{0.749,0.601,0.462,0.1735,0.2602,0.749,0.6364,0.133,0.1526,0.4545,0.2759,0.1902}, 12);
SoIndexedFaceSet212->setColor(*SoColor213);

SoCoordinate* SoCoordinate214 = new SoCoordinate();
SoCoordinate214->setDEF(QString("Face"));
SoCoordinate214->setPoint(new float[]{0.0,1.708,-0.0435,0.0,1.655,0.04322,0.0,1.486,0.02335,0.0,1.694,0.007789,0.0,1.631,0.051,0.0,1.524,-0.102,0.04,1.51,-0.07278,0.04029,1.514,-0.08254,0.03528,1.502,-0.05013,0.03479,1.517,-0.09269,0.0116,1.494,0.03382,0.01946,1.52,0.03421,0.02204,1.494,0.0272,0.02734,1.498,0.02215,0.02788,1.528,0.03084,0.0338,1.503,0.0124,0.04008,1.509,0.002821,0.05122,1.518,-0.02784,0.05867,1.544,-0.03316,0.06433,1.563,-0.03678,0.06732,1.583,-0.03683,0.06769,1.617,-0.03436,0.06641,1.637,-0.03046,0.06818,1.637,-0.04285,0.06308,1.666,-0.04036,0.05305,1.685,-0.03987,0.03136,1.7,-0.0413,0.02919,1.688,0.0091,0.05272,1.674,-0.001657,0.06061,1.66,-0.0101,0.05254,1.541,-0.01363,0.04099,1.527,0.008832,0.03528,1.524,0.02097,0.05792,1.557,-0.004307,0.04413,1.539,0.0149,0.03746,1.539,0.02656,0.003407,1.524,0.04155,0.01481,1.526,0.03912,0.005112,1.532,0.04358,0.02438,1.542,0.03578,0.02636,1.55,0.03808,0.006135,1.55,0.0545,0.0,1.559,0.05502,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06194,1.6,0.002668,0.01489,1.583,0.04109,0.05282,1.569,0.02821,0.05767,1.58,0.0184,0.04643,1.625,0.03705,0.0264,1.628,0.04807,0.0556,1.609,0.02579,0.05467,1.599,0.02153,0.05316,1.589,0.0207,0.03603,1.58,0.03536,0.04597,1.586,0.02904,0.02106,1.592,0.03748,0.03428,1.595,0.03294,0.06808,1.617,-0.06112,0.06714,1.564,-0.07003,0.06993,1.594,-0.08238,0.05324,1.536,-0.05922,0.04904,1.521,-0.05132,0.04758,1.514,-0.03107,0.03539,1.503,-0.00093,0.02999,1.498,0.006194,0.02308,1.492,0.01628,0.01772,1.488,0.02135,0.01378,1.488,0.02484,0.04349,1.512,-0.03987,0.02308,1.499,-0.02088,0.0,1.487,-0.018,0.04795,1.531,-0.08973,0.05739,1.555,-0.0982,0.06815,1.622,-0.107,0.06872,1.655,-0.08466,0.05233,1.678,-0.09642,0.05334,1.631,-0.1239,0.05011,1.581,-0.1193,0.04359,1.551,-0.1067,0.03839,1.528,-0.09652,0.03399,1.636,-0.1304,0.03224,1.685,-0.1024,0.0,1.557,-0.1126,0.01864,1.566,0.04105,0.0249,1.58,0.0387,0.02735,1.596,0.03552,0.04317,1.564,0.03643,0.01246,1.577,0.04276,0.04354,1.59,0.02822,0.04557,1.601,0.03652,0.0291,1.603,0.04274,0.01856,1.6,0.04349,0.0,1.579,0.04893,0.01064,1.558,0.04476,0.005501,1.578,0.04574,0.01405,1.531,0.04152,0.01037,1.544,0.04266,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01824,1.55,0.04063,-0.0249,1.58,0.0387,-0.04354,1.59,0.02822,-0.0291,1.603,0.04274,-0.04317,1.564,0.03643,-0.04597,1.586,0.02904,-0.05316,1.589,0.0207,-0.01824,1.55,0.04063,-0.01246,1.577,0.04276,-0.006135,1.55,0.0545,-0.01037,1.544,0.04266,-0.02636,1.55,0.03808,-0.03428,1.595,0.03294,-0.02735,1.596,0.03552,-0.03603,1.58,0.03536,-0.05282,1.569,0.02821,-0.05767,1.58,0.0184,-0.01864,1.566,0.04105,-0.01489,1.583,0.04109,-0.0556,1.609,0.02579,-0.04557,1.601,0.03652,-0.02106,1.592,0.03748,-0.01856,1.6,0.04349,-0.005501,1.578,0.04574,-0.01064,1.558,0.04476,0.0,1.592,0.04694,-0.06182,1.614,0.008199,-0.05467,1.599,0.02153,-0.06194,1.6,0.002668,-0.05792,1.557,-0.004307,-0.04413,1.539,0.0149,-0.03746,1.539,0.02656,-0.04099,1.527,0.008832,-0.03528,1.524,0.02097,-0.02788,1.528,0.03084,0.0,1.53,0.04236,-0.005112,1.532,0.04358,-0.01481,1.526,0.03912,-0.01946,1.52,0.03421,0.0,1.495,0.0348,-0.0116,1.494,0.03382,-0.02734,1.498,0.02215,-0.0338,1.503,0.0124,-0.01772,1.488,0.02135,-0.02308,1.492,0.01628,-0.02999,1.498,0.006194,-0.01405,1.531,0.04152,-0.003407,1.524,0.04155,-0.02204,1.494,0.0272,-0.00797,1.515,0.03774,-0.02438,1.542,0.03578,0.0,1.543,0.04432,0.0,1.555,0.05692,0.02295,1.492,-0.02694,0.007322,1.489,-0.01677,-0.05254,1.541,-0.01363,-0.04008,1.509,0.002821,-0.05122,1.518,-0.02784,-0.03539,1.503,-0.00093,-0.01378,1.488,0.02484,-0.02308,1.499,-0.02088,-0.04349,1.512,-0.03987,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.05856,1.63,0.01803,-0.04847,1.643,0.02895,-0.04643,1.625,0.03705,-0.02958,1.651,0.03965,-0.0264,1.628,0.04807,-0.02919,1.688,0.0091,-0.05272,1.674,-0.001657,-0.06641,1.637,-0.03046,-0.06061,1.66,-0.0101,-0.03136,1.7,-0.0413,-0.05305,1.685,-0.03987,-0.06308,1.666,-0.04036,-0.06818,1.637,-0.04285,-0.06808,1.617,-0.06112,-0.06993,1.594,-0.08238,-0.06714,1.564,-0.07003,-0.05324,1.536,-0.05922,-0.04904,1.521,-0.05132,-0.04795,1.531,-0.08973,-0.05739,1.555,-0.0982,-0.06815,1.622,-0.107,-0.06872,1.655,-0.08466,-0.05233,1.678,-0.09642,-0.03224,1.685,-0.1024,0.0,1.69,-0.1047,0.0,1.64,-0.1342,-0.05334,1.631,-0.1239,-0.05011,1.581,-0.1193,-0.04359,1.551,-0.1067,-0.03839,1.528,-0.09652,-0.03528,1.502,-0.05013,-0.04,1.51,-0.07278,-0.04029,1.514,-0.08254,-0.03479,1.517,-0.09269,-0.02295,1.492,-0.02694,-0.007322,1.489,-0.01677,0.0,1.588,-0.1329,-0.03399,1.636,-0.1304,-0.04758,1.514,-0.03107,-0.03428,1.595,0.03294,-0.02106,1.592,0.03748,-0.02735,1.596,0.03552,-0.0249,1.58,0.0387,-0.01489,1.583,0.04109,-0.04597,1.586,0.02904,-0.04354,1.59,0.02822,-0.03603,1.58,0.03536,-0.05856,1.63,0.01803,-0.06182,1.614,0.008199,-0.02788,1.528,0.03084,-0.005112,1.532,0.04358,-0.01405,1.531,0.04152,-0.00797,1.515,0.03774,-0.01946,1.52,0.03421,-0.05867,1.544,-0.03316,-0.06433,1.563,-0.03678,-0.06732,1.583,-0.03683,-0.06769,1.617,-0.03436,-0.04847,1.643,0.02895,-0.02958,1.651,0.03965,-0.05324,1.536,-0.05922,-0.04795,1.531,-0.08973,-0.03839,1.528,-0.09652,0.02106,1.592,0.03748,0.01489,1.583,0.04109,0.0249,1.58,0.0387,0.03603,1.58,0.03536,0.04354,1.59,0.02822,0.03428,1.595,0.03294,0.02735,1.596,0.03552,0.02788,1.528,0.03084,0.01405,1.531,0.04152,0.0,1.53,0.04236,0.0,1.515,0.03836,0.00797,1.515,0.03774,0.01946,1.52,0.03421,0.005112,1.532,0.04358,0.0,1.655,0.04322,0.02958,1.651,0.03965,0.04847,1.643,0.02895,0.05856,1.63,0.01803,0.06182,1.614,0.008199,0.06769,1.617,-0.03436,0.06732,1.583,-0.03683,0.06433,1.563,-0.03678,0.05867,1.544,-0.03316,0.05324,1.536,-0.05922,0.04795,1.531,-0.08973,0.03839,1.528,-0.09652,0.0,1.524,-0.102}, 774);
SoIndexedFaceSet212->setCoord(*SoCoordinate214);

SoShape209->setGeometry(*SoIndexedFaceSet212);

SoGroup196->addChild(*SoShape209);

SoHAnimSegment195->addChild(*SoGroup196);

SoHAnimJoint194->addChildren(*SoHAnimSegment195);

SoHAnimJoint187->addChildren(*SoHAnimJoint194);

SoHAnimJoint113->addChildren(*SoHAnimJoint187);

SoHAnimJoint58->addChildren(*SoHAnimJoint113);

SoHAnimHumanoid57->setSkeleton(*SoHAnimJoint58);

SoHAnimJoint* SoHAnimJoint215 = new SoHAnimJoint();
SoHAnimJoint215->setUSE(QString("hanim_humanoid_root"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint215);

SoHAnimJoint* SoHAnimJoint216 = new SoHAnimJoint();
SoHAnimJoint216->setUSE(QString("hanim_sacroiliac"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint216);

SoHAnimJoint* SoHAnimJoint217 = new SoHAnimJoint();
SoHAnimJoint217->setUSE(QString("hanim_vl1"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint217);

SoHAnimJoint* SoHAnimJoint218 = new SoHAnimJoint();
SoHAnimJoint218->setUSE(QString("hanim_vc4"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint218);

SoHAnimJoint* SoHAnimJoint219 = new SoHAnimJoint();
SoHAnimJoint219->setUSE(QString("hanim_skullbase"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint219);

SoHAnimJoint* SoHAnimJoint220 = new SoHAnimJoint();
SoHAnimJoint220->setUSE(QString("hanim_l_ankle"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint220);

SoHAnimJoint* SoHAnimJoint221 = new SoHAnimJoint();
SoHAnimJoint221->setUSE(QString("hanim_r_ankle"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint221);

SoHAnimJoint* SoHAnimJoint222 = new SoHAnimJoint();
SoHAnimJoint222->setUSE(QString("hanim_l_elbow"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint222);

SoHAnimJoint* SoHAnimJoint223 = new SoHAnimJoint();
SoHAnimJoint223->setUSE(QString("hanim_r_elbow"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint223);

SoHAnimJoint* SoHAnimJoint224 = new SoHAnimJoint();
SoHAnimJoint224->setUSE(QString("hanim_l_hip"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint224);

SoHAnimJoint* SoHAnimJoint225 = new SoHAnimJoint();
SoHAnimJoint225->setUSE(QString("hanim_r_hip"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint225);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->setUSE(QString("hanim_l_knee"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint226);

SoHAnimJoint* SoHAnimJoint227 = new SoHAnimJoint();
SoHAnimJoint227->setUSE(QString("hanim_r_knee"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint227);

SoHAnimJoint* SoHAnimJoint228 = new SoHAnimJoint();
SoHAnimJoint228->setUSE(QString("hanim_l_shoulder"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint228);

SoHAnimJoint* SoHAnimJoint229 = new SoHAnimJoint();
SoHAnimJoint229->setUSE(QString("hanim_r_shoulder"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint229);

SoHAnimJoint* SoHAnimJoint230 = new SoHAnimJoint();
SoHAnimJoint230->setUSE(QString("hanim_l_wrist"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint230);

SoHAnimJoint* SoHAnimJoint231 = new SoHAnimJoint();
SoHAnimJoint231->setUSE(QString("hanim_r_wrist"));
SoHAnimHumanoid57->setJoints(*SoHAnimJoint231);

SoHAnimSegment* SoHAnimSegment232 = new SoHAnimSegment();
SoHAnimSegment232->setUSE(QString("hanim_pelvis"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment232);

SoHAnimSegment* SoHAnimSegment233 = new SoHAnimSegment();
SoHAnimSegment233->setUSE(QString("hanim_l1"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment233);

SoHAnimSegment* SoHAnimSegment234 = new SoHAnimSegment();
SoHAnimSegment234->setUSE(QString("hanim_c4"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment234);

SoHAnimSegment* SoHAnimSegment235 = new SoHAnimSegment();
SoHAnimSegment235->setUSE(QString("hanim_skull"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment235);

SoHAnimSegment* SoHAnimSegment236 = new SoHAnimSegment();
SoHAnimSegment236->setUSE(QString("hanim_l_calf"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment236);

SoHAnimSegment* SoHAnimSegment237 = new SoHAnimSegment();
SoHAnimSegment237->setUSE(QString("hanim_r_calf"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment237);

SoHAnimSegment* SoHAnimSegment238 = new SoHAnimSegment();
SoHAnimSegment238->setUSE(QString("hanim_l_forearm"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment238);

SoHAnimSegment* SoHAnimSegment239 = new SoHAnimSegment();
SoHAnimSegment239->setUSE(QString("hanim_r_forearm"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment239);

SoHAnimSegment* SoHAnimSegment240 = new SoHAnimSegment();
SoHAnimSegment240->setUSE(QString("hanim_l_hand"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment240);

SoHAnimSegment* SoHAnimSegment241 = new SoHAnimSegment();
SoHAnimSegment241->setUSE(QString("hanim_r_hand"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment241);

SoHAnimSegment* SoHAnimSegment242 = new SoHAnimSegment();
SoHAnimSegment242->setUSE(QString("hanim_l_hindfoot"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment242);

SoHAnimSegment* SoHAnimSegment243 = new SoHAnimSegment();
SoHAnimSegment243->setUSE(QString("hanim_r_hindfoot"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment243);

SoHAnimSegment* SoHAnimSegment244 = new SoHAnimSegment();
SoHAnimSegment244->setUSE(QString("hanim_l_thigh"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment244);

SoHAnimSegment* SoHAnimSegment245 = new SoHAnimSegment();
SoHAnimSegment245->setUSE(QString("hanim_r_thigh"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment245);

SoHAnimSegment* SoHAnimSegment246 = new SoHAnimSegment();
SoHAnimSegment246->setUSE(QString("hanim_l_upperarm"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment246);

SoHAnimSegment* SoHAnimSegment247 = new SoHAnimSegment();
SoHAnimSegment247->setUSE(QString("hanim_r_upperarm"));
SoHAnimHumanoid57->setSegments(*SoHAnimSegment247);

SoTransform56->addChild(*SoHAnimHumanoid57);

SoGroup55->addChild(*SoTransform56);

SoProtoInstance* SoProtoInstance248 = new SoProtoInstance();
SoProtoInstance248->setName(QString("LOA1_ShootAnimation"));
SoGroup55->addChild(*SoProtoInstance248);

SoTimeSensor* SoTimeSensor249 = new SoTimeSensor();
SoTimeSensor249->setDEF(QString("TIMER"));
SoTimeSensor249->setCycleInterval(4);
SoGroup55->addChild(*SoTimeSensor249);

SoGroup54->addChild(*SoGroup55);

SoLOD53->addChildren(*SoGroup54);

SoTransform* SoTransform250 = new SoTransform();
SoLOD53->addChildren(*SoTransform250);

SoTransform* SoTransform251 = new SoTransform();
SoTransform251->setTranslation(new float[]{0.0,1.0,0.0});
SoShape* SoShape252 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance253 = new SoVRMLAppearance();
SoMaterial* SoMaterial254 = new SoMaterial();
SoMaterial254->setDiffuseColor(new float[]{0.1,0.4,0.1});
SoVRMLAppearance253->addChild(*SoMaterial254);

SoShape252->addChild(*SoVRMLAppearance253);

SoBox* SoBox255 = new SoBox();
SoBox255->setSize(new float[]{0.5,2.0,0.3});
SoShape252->setGeometry(*SoBox255);

SoTransform251->addChild(*SoShape252);

SoLOD53->addChildren(*SoTransform251);

SoNode14->addChild(*SoLOD53);

SoNavigationInfo* SoNavigationInfo256 = new SoNavigationInfo();
SoNavigationInfo256->setType(new QString[]{QString("EXAMINE")}, 1);
SoNavigationInfo256->setAvatarSize(new float[]{0.15,1.53,0.75}, 3);
SoNavigationInfo256->setSpeed(0.5);
SoNode14->addChild(*SoNavigationInfo256);

SoWorldInfo* SoWorldInfo257 = new SoWorldInfo();
SoWorldInfo257->setTitle(QString("Nancy - an HAnim compliant avatar by 3Name3D"));
SoWorldInfo257->setInfo(new QString[]{QString("Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc.")}, 1);
SoNode14->addChild(*SoWorldInfo257);

SoGroup* SoGroup258 = new SoGroup();
SoProximitySensor* SoProximitySensor259 = new SoProximitySensor();
SoProximitySensor259->setDEF(QString("TriggerProximitySensor"));
SoProximitySensor259->setSize(new float[]{50.0,50.0,50.0});
SoGroup258->addChild(*SoProximitySensor259);

SoPositionInterpolator* SoPositionInterpolator260 = new SoPositionInterpolator();
SoPositionInterpolator260->setDEF(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoPositionInterpolator260->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator260->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoGroup258->addChild(*SoPositionInterpolator260);

SoOrientationInterpolator* SoOrientationInterpolator261 = new SoOrientationInterpolator();
SoOrientationInterpolator261->setDEF(QString("HUMANOIDROOT_ANIMATOR"));
SoOrientationInterpolator261->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator261->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator261);

SoOrientationInterpolator* SoOrientationInterpolator262 = new SoOrientationInterpolator();
SoOrientationInterpolator262->setDEF(QString("SACROILIAC_ANIMATOR"));
SoOrientationInterpolator262->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator262->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator262);

SoOrientationInterpolator* SoOrientationInterpolator263 = new SoOrientationInterpolator();
SoOrientationInterpolator263->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator263->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator263->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.4}, 8);
SoGroup258->addChild(*SoOrientationInterpolator263);

SoOrientationInterpolator* SoOrientationInterpolator264 = new SoOrientationInterpolator();
SoOrientationInterpolator264->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator264->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator264->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.15,0.99,0.09,1.06}, 8);
SoGroup258->addChild(*SoOrientationInterpolator264);

SoOrientationInterpolator* SoOrientationInterpolator265 = new SoOrientationInterpolator();
SoOrientationInterpolator265->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator265->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator265->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.2}, 8);
SoGroup258->addChild(*SoOrientationInterpolator265);

SoOrientationInterpolator* SoOrientationInterpolator266 = new SoOrientationInterpolator();
SoOrientationInterpolator266->setDEF(QString("L_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator266->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator266->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator266);

SoOrientationInterpolator* SoOrientationInterpolator267 = new SoOrientationInterpolator();
SoOrientationInterpolator267->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator267->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator267->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.2}, 8);
SoGroup258->addChild(*SoOrientationInterpolator267);

SoOrientationInterpolator* SoOrientationInterpolator268 = new SoOrientationInterpolator();
SoOrientationInterpolator268->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator268->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator268->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator268);

SoOrientationInterpolator* SoOrientationInterpolator269 = new SoOrientationInterpolator();
SoOrientationInterpolator269->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator269->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator269->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator269);

SoOrientationInterpolator* SoOrientationInterpolator270 = new SoOrientationInterpolator();
SoOrientationInterpolator270->setDEF(QString("R_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator270->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator270->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator270);

SoOrientationInterpolator* SoOrientationInterpolator271 = new SoOrientationInterpolator();
SoOrientationInterpolator271->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator271->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator271->setKeyValue(new float[]{0.0,1.0,0.0,-0.4,0.0,1.0,0.0,-1.0}, 8);
SoGroup258->addChild(*SoOrientationInterpolator271);

SoOrientationInterpolator* SoOrientationInterpolator272 = new SoOrientationInterpolator();
SoOrientationInterpolator272->setDEF(QString("SKULLBASE_ANIMATOR"));
SoOrientationInterpolator272->setKey(new float[]{0.0,0.1,0.5,0.7,1.0}, 5);
SoOrientationInterpolator272->setKeyValue(new float[]{0.0,1.0,0.0,0.2,0.0,1.0,0.0,0.3,0.0,1.0,0.0,0.4,0.0,1.0,0.0,0.9,0.47,0.85,0.23,1.04}, 20);
SoGroup258->addChild(*SoOrientationInterpolator272);

SoOrientationInterpolator* SoOrientationInterpolator273 = new SoOrientationInterpolator();
SoOrientationInterpolator273->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator273->setKey(new float[]{0.0,0.08,0.8,1.0}, 4);
SoOrientationInterpolator273->setKeyValue(new float[]{-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.95,-0.08,-0.31,0.55,-0.84,0.23,0.49,1.01}, 16);
SoGroup258->addChild(*SoOrientationInterpolator273);

SoOrientationInterpolator* SoOrientationInterpolator274 = new SoOrientationInterpolator();
SoOrientationInterpolator274->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator274->setKey(new float[]{0.0,0.3,0.4,0.45,1.0}, 5);
SoOrientationInterpolator274->setKeyValue(new float[]{0.0,0.0,1.0,-0.4,0.0,0.0,1.0,-0.4,0.0,0.0,1.0,-0.4,0.0,0.0,1.0,-0.4,1.0,0.0,0.0,-1.65}, 20);
SoGroup258->addChild(*SoOrientationInterpolator274);

SoOrientationInterpolator* SoOrientationInterpolator275 = new SoOrientationInterpolator();
SoOrientationInterpolator275->setDEF(QString("L_WRIST_ANIMATOR"));
SoOrientationInterpolator275->setKey(new float[]{0.0,0.3,1.0}, 3);
SoOrientationInterpolator275->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.25,0.32,0.92,1.4}, 12);
SoGroup258->addChild(*SoOrientationInterpolator275);

SoOrientationInterpolator* SoOrientationInterpolator276 = new SoOrientationInterpolator();
SoOrientationInterpolator276->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator276->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator276->setKeyValue(new float[]{1.0,0.0,0.0,-0.3,1.0,0.0,0.0,-0.45,1.0,0.0,0.0,-0.5,1.0,0.0,0.0,-0.55,1.0,0.0,0.0,-0.6,1.0,0.0,0.0,-0.65,1.0,0.0,0.0,-0.9,1.0,0.0,0.0,-1.0,1.0,0.0,0.0,-1.0,1.0,0.0,0.0,-1.2,1.0,0.0,0.0,-1.6}, 44);
SoGroup258->addChild(*SoOrientationInterpolator276);

SoOrientationInterpolator* SoOrientationInterpolator277 = new SoOrientationInterpolator();
SoOrientationInterpolator277->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator277->setKey(new float[]{0.0,0.1,0.2,0.5,0.6,0.7,0.8,1.0}, 8);
SoOrientationInterpolator277->setKeyValue(new float[]{0.0,0.0,1.0,0.5,0.0,0.0,1.0,0.55,0.0,0.0,1.0,0.75,0.0,0.0,1.0,0.8,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.15,0.0,0.0,1.0,1.3,0.0,0.0,1.0,2.27}, 32);
SoGroup258->addChild(*SoOrientationInterpolator277);

SoOrientationInterpolator* SoOrientationInterpolator278 = new SoOrientationInterpolator();
SoOrientationInterpolator278->setDEF(QString("R_WRIST_ANIMATOR"));
SoOrientationInterpolator278->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator278->setKeyValue(new float[]{1.0,0.0,0.0,-0.79,0.22,0.48,-0.85,1.71}, 8);
SoGroup258->addChild(*SoOrientationInterpolator278);

SoNode14->addChild(*SoGroup258);

SoROUTE* SoROUTE279 = new SoROUTE();
SoROUTE279->setFromNode(QString("FireTouchSensor"));
SoROUTE279->setFromField(QString("isOver"));
SoROUTE279->setToNode(QString("FireScript"));
SoROUTE279->setToField(QString("enabled"));
SoNode14->addChild(*SoROUTE279);

SoROUTE* SoROUTE280 = new SoROUTE();
SoROUTE280->setFromNode(QString("FireTouchSensor"));
SoROUTE280->setFromField(QString("touchTime"));
SoROUTE280->setToNode(QString("rifleM24"));
SoROUTE280->setToField(QString("animationStartTime"));
SoNode14->addChild(*SoROUTE280);

SoROUTE* SoROUTE281 = new SoROUTE();
SoROUTE281->setFromNode(QString("FireScript"));
SoROUTE281->setFromField(QString("fire"));
SoROUTE281->setToNode(QString("rifleM24"));
SoROUTE281->setToField(QString("trigger"));
SoNode14->addChild(*SoROUTE281);

SoROUTE* SoROUTE282 = new SoROUTE();
SoROUTE282->setFromNode(QString("TriggerProximitySensor"));
SoROUTE282->setFromField(QString("enterTime"));
SoROUTE282->setToNode(QString("TIMER"));
SoROUTE282->setToField(QString("set_startTime"));
SoNode14->addChild(*SoROUTE282);

SoROUTE* SoROUTE283 = new SoROUTE();
SoROUTE283->setFromNode(QString("TIMER"));
SoROUTE283->setFromField(QString("fraction_changed"));
SoROUTE283->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoROUTE283->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE283);

SoROUTE* SoROUTE284 = new SoROUTE();
SoROUTE284->setFromNode(QString("TIMER"));
SoROUTE284->setFromField(QString("fraction_changed"));
SoROUTE284->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoROUTE284->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE284);

SoROUTE* SoROUTE285 = new SoROUTE();
SoROUTE285->setFromNode(QString("TIMER"));
SoROUTE285->setFromField(QString("fraction_changed"));
SoROUTE285->setToNode(QString("SACROILIAC_ANIMATOR"));
SoROUTE285->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE285);

SoROUTE* SoROUTE286 = new SoROUTE();
SoROUTE286->setFromNode(QString("TIMER"));
SoROUTE286->setFromField(QString("fraction_changed"));
SoROUTE286->setToNode(QString("L_HIP_ANIMATOR"));
SoROUTE286->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE286);

SoROUTE* SoROUTE287 = new SoROUTE();
SoROUTE287->setFromNode(QString("TIMER"));
SoROUTE287->setFromField(QString("fraction_changed"));
SoROUTE287->setToNode(QString("L_KNEE_ANIMATOR"));
SoROUTE287->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE287);

SoROUTE* SoROUTE288 = new SoROUTE();
SoROUTE288->setFromNode(QString("TIMER"));
SoROUTE288->setFromField(QString("fraction_changed"));
SoROUTE288->setToNode(QString("L_ANKLE_ANIMATOR"));
SoROUTE288->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE288);

SoROUTE* SoROUTE289 = new SoROUTE();
SoROUTE289->setFromNode(QString("TIMER"));
SoROUTE289->setFromField(QString("fraction_changed"));
SoROUTE289->setToNode(QString("L_MIDTARSAL_ANIMATOR"));
SoROUTE289->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE289);

SoROUTE* SoROUTE290 = new SoROUTE();
SoROUTE290->setFromNode(QString("TIMER"));
SoROUTE290->setFromField(QString("fraction_changed"));
SoROUTE290->setToNode(QString("R_HIP_ANIMATOR"));
SoROUTE290->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE290);

SoROUTE* SoROUTE291 = new SoROUTE();
SoROUTE291->setFromNode(QString("TIMER"));
SoROUTE291->setFromField(QString("fraction_changed"));
SoROUTE291->setToNode(QString("R_KNEE_ANIMATOR"));
SoROUTE291->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE291);

SoROUTE* SoROUTE292 = new SoROUTE();
SoROUTE292->setFromNode(QString("TIMER"));
SoROUTE292->setFromField(QString("fraction_changed"));
SoROUTE292->setToNode(QString("R_ANKLE_ANIMATOR"));
SoROUTE292->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE292);

SoROUTE* SoROUTE293 = new SoROUTE();
SoROUTE293->setFromNode(QString("TIMER"));
SoROUTE293->setFromField(QString("fraction_changed"));
SoROUTE293->setToNode(QString("R_MIDTARSAL_ANIMATOR"));
SoROUTE293->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE293);

SoROUTE* SoROUTE294 = new SoROUTE();
SoROUTE294->setFromNode(QString("TIMER"));
SoROUTE294->setFromField(QString("fraction_changed"));
SoROUTE294->setToNode(QString("VL5_ANIMATOR"));
SoROUTE294->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE294);

SoROUTE* SoROUTE295 = new SoROUTE();
SoROUTE295->setFromNode(QString("TIMER"));
SoROUTE295->setFromField(QString("fraction_changed"));
SoROUTE295->setToNode(QString("SKULLBASE_ANIMATOR"));
SoROUTE295->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE295);

SoROUTE* SoROUTE296 = new SoROUTE();
SoROUTE296->setFromNode(QString("TIMER"));
SoROUTE296->setFromField(QString("fraction_changed"));
SoROUTE296->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoROUTE296->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE296);

SoROUTE* SoROUTE297 = new SoROUTE();
SoROUTE297->setFromNode(QString("TIMER"));
SoROUTE297->setFromField(QString("fraction_changed"));
SoROUTE297->setToNode(QString("L_ELBOW_ANIMATOR"));
SoROUTE297->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE297);

SoROUTE* SoROUTE298 = new SoROUTE();
SoROUTE298->setFromNode(QString("TIMER"));
SoROUTE298->setFromField(QString("fraction_changed"));
SoROUTE298->setToNode(QString("L_WRIST_ANIMATOR"));
SoROUTE298->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE298);

SoROUTE* SoROUTE299 = new SoROUTE();
SoROUTE299->setFromNode(QString("TIMER"));
SoROUTE299->setFromField(QString("fraction_changed"));
SoROUTE299->setToNode(QString("R_SHOULDER_ANIMATOR"));
SoROUTE299->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE299);

SoROUTE* SoROUTE300 = new SoROUTE();
SoROUTE300->setFromNode(QString("TIMER"));
SoROUTE300->setFromField(QString("fraction_changed"));
SoROUTE300->setToNode(QString("R_ELBOW_ANIMATOR"));
SoROUTE300->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE300);

SoROUTE* SoROUTE301 = new SoROUTE();
SoROUTE301->setFromNode(QString("TIMER"));
SoROUTE301->setFromField(QString("fraction_changed"));
SoROUTE301->setToNode(QString("R_WRIST_ANIMATOR"));
SoROUTE301->setToField(QString("set_fraction"));
SoNode14->addChild(*SoROUTE301);

SoROUTE* SoROUTE302 = new SoROUTE();
SoROUTE302->setFromNode(QString("R_ANKLE_ANIMATOR"));
SoROUTE302->setFromField(QString("value_changed"));
SoROUTE302->setToNode(QString("hanim_r_ankle"));
SoROUTE302->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE302);

SoROUTE* SoROUTE303 = new SoROUTE();
SoROUTE303->setFromNode(QString("R_KNEE_ANIMATOR"));
SoROUTE303->setFromField(QString("value_changed"));
SoROUTE303->setToNode(QString("hanim_r_knee"));
SoROUTE303->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE303);

SoROUTE* SoROUTE304 = new SoROUTE();
SoROUTE304->setFromNode(QString("R_HIP_ANIMATOR"));
SoROUTE304->setFromField(QString("value_changed"));
SoROUTE304->setToNode(QString("hanim_r_hip"));
SoROUTE304->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE304);

SoROUTE* SoROUTE305 = new SoROUTE();
SoROUTE305->setFromNode(QString("L_ANKLE_ANIMATOR"));
SoROUTE305->setFromField(QString("value_changed"));
SoROUTE305->setToNode(QString("hanim_l_ankle"));
SoROUTE305->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE305);

SoROUTE* SoROUTE306 = new SoROUTE();
SoROUTE306->setFromNode(QString("L_KNEE_ANIMATOR"));
SoROUTE306->setFromField(QString("value_changed"));
SoROUTE306->setToNode(QString("hanim_l_knee"));
SoROUTE306->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE306);

SoROUTE* SoROUTE307 = new SoROUTE();
SoROUTE307->setFromNode(QString("L_HIP_ANIMATOR"));
SoROUTE307->setFromField(QString("value_changed"));
SoROUTE307->setToNode(QString("hanim_l_hip"));
SoROUTE307->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE307);

SoROUTE* SoROUTE308 = new SoROUTE();
SoROUTE308->setFromNode(QString("VL5_ANIMATOR"));
SoROUTE308->setFromField(QString("value_changed"));
SoROUTE308->setToNode(QString("hanim_sacroiliac"));
SoROUTE308->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE308);

SoROUTE* SoROUTE309 = new SoROUTE();
SoROUTE309->setFromNode(QString("R_WRIST_ANIMATOR"));
SoROUTE309->setFromField(QString("value_changed"));
SoROUTE309->setToNode(QString("r_hand_adjust"));
SoROUTE309->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE309);

SoROUTE* SoROUTE310 = new SoROUTE();
SoROUTE310->setFromNode(QString("R_ELBOW_ANIMATOR"));
SoROUTE310->setFromField(QString("value_changed"));
SoROUTE310->setToNode(QString("hanim_r_elbow"));
SoROUTE310->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE310);

SoROUTE* SoROUTE311 = new SoROUTE();
SoROUTE311->setFromNode(QString("R_SHOULDER_ANIMATOR"));
SoROUTE311->setFromField(QString("value_changed"));
SoROUTE311->setToNode(QString("hanim_r_shoulder"));
SoROUTE311->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE311);

SoROUTE* SoROUTE312 = new SoROUTE();
SoROUTE312->setFromNode(QString("L_WRIST_ANIMATOR"));
SoROUTE312->setFromField(QString("value_changed"));
SoROUTE312->setToNode(QString("hanim_l_wrist"));
SoROUTE312->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE312);

SoROUTE* SoROUTE313 = new SoROUTE();
SoROUTE313->setFromNode(QString("L_ELBOW_ANIMATOR"));
SoROUTE313->setFromField(QString("value_changed"));
SoROUTE313->setToNode(QString("hanim_l_elbow"));
SoROUTE313->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE313);

SoROUTE* SoROUTE314 = new SoROUTE();
SoROUTE314->setFromNode(QString("L_SHOULDER_ANIMATOR"));
SoROUTE314->setFromField(QString("value_changed"));
SoROUTE314->setToNode(QString("hanim_l_shoulder"));
SoROUTE314->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE314);

SoROUTE* SoROUTE315 = new SoROUTE();
SoROUTE315->setFromNode(QString("SKULLBASE_ANIMATOR"));
SoROUTE315->setFromField(QString("value_changed"));
SoROUTE315->setToNode(QString("hanim_skullbase"));
SoROUTE315->setToField(QString("set_rotation"));
SoNode14->addChild(*SoROUTE315);

SoSceneManager0->setSceneGraph(*SoNode14);

return 0;
}
