
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
SoSceneManager0->setProfile(QString("Full"));
SoSceneManager0->setVersion(QString("4.1"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("HAnimPoseExample.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("11 December 2025"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("14 December 2025"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("warning"));
Someta7->setContent(QString("under development for X3D 4.1"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("specificationSection"));
Someta8->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("specificationUrl"));
Someta9->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("specificationSection"));
Someta10->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("specificationUrl"));
Someta11->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("specificationSection"));
Someta12->setContent(QString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("specificationUrl"));
Someta13->setContent(QString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("identifier"));
Someta15->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("license"));
Someta16->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta16);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode17 = new SoNode();
SoWorldInfo* SoWorldInfo18 = new SoWorldInfo();
SoWorldInfo18->setDEF(QString("ModelInfo"));
SoWorldInfo18->setInfo(new QString[]{QString("Example scene for HAnimPose node")}, 1);
SoWorldInfo18->setTitle(QString("HAnimPoseExample.x3d"));
SoNode17->addChild(*SoWorldInfo18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setSkyColor(new float[]{0.8,0.8,1.0}, 3);
SoNode17->addChild(*SoBackground19);

SoNavigationInfo* SoNavigationInfo20 = new SoNavigationInfo();
SoNode17->addChild(*SoNavigationInfo20);

SoGroup* SoGroup21 = new SoGroup();
SoGroup21->setDEF(QString("HandleInlineLoading"));
//Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2
//Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun
SoInline* SoInline22 = new SoInline();
SoInline22->setDEF(QString("HumanoidInline"));
SoInline22->setDescription(QString("remote HAnimHumanoid for IMPORT"));
SoInline22->setUrl(new QString[]{QString("../Skin/JoeSkeletonSkinSite.x3d"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d")}, 2);
SoGroup21->addChild(*SoInline22);

//Note that the following importedDEF must match the EXPORT name found in remote file
SoIMPORT* SoIMPORT23 = new SoIMPORT();
SoIMPORT23->setAS(QString("HumanoidImported"));
SoIMPORT23->setImportedDEF(QString("JoeSkeletonSkinSite"));
SoIMPORT23->setInlineDEF(QString("HumanoidInline"));
SoGroup21->addChild(*SoIMPORT23);

SoLoadSensor* SoLoadSensor24 = new SoLoadSensor();
SoLoadSensor24->setDEF(QString("HumanoidInlineLoadSensor"));
SoLoadSensor24->setTimeOut(2);
SoInline* SoInline25 = new SoInline();
SoInline25->setUSE(QString("HumanoidInline"));
SoLoadSensor24->addChildren(SoInline25);

SoGroup21->addChild(*SoLoadSensor24);

SoNode17->addChild(*SoGroup21);

SoViewpoint* SoViewpoint26 = new SoViewpoint();
SoViewpoint26->setDescription(QString("HAnimPose for HumanoidInline IMPORT model"));
SoViewpoint26->setPosition(new float[]{0.0,1.0,4.0});
SoNode17->addChild(*SoViewpoint26);

//no longer required: including full model <HAnimHumanoid DEF='hanim_JinLOA1' loa='2' name='JinLOA1' scale='0.0225 0.0225 0.0225'> etc...
SoHAnimPose* SoHAnimPose27 = new SoHAnimPose();
SoHAnimPose27->X3DNode::setName(QString("T"));
SoHAnimPose27->setDEF(QString("T_Pose"));
SoHAnimPose27->setDescription(QString("arms stretched outward and level similar to letter T"));
SoHAnimPose27->setLoa(1);
SoHAnimPose27->setTransitionDuration(1.3);
SoMetadataString* SoMetadataString28 = new SoMetadataString();
SoMetadataString28->X3DNode::setName(QString("metadataTest"));
SoMetadataString28->setValue(new QString[]{QString("hello HAnimPose metadata")}, 1);
SoHAnimPose27->setMetadata(*SoMetadataString28);

//test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
SoHAnimJoint* SoHAnimJoint29 = new SoHAnimJoint();
SoHAnimJoint29->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint29->setDEF(QString("PoseJoint_l_shoulder_1"));
SoHAnimJoint29->setDescription(QString("left shoulder"));
SoHAnimJoint29->setRotation(new float[]{0.0,0.0,1.0,1.57});
SoHAnimJoint29->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint29->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose27->addChildren(*SoHAnimJoint29);

SoHAnimJoint* SoHAnimJoint30 = new SoHAnimJoint();
SoHAnimJoint30->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint30->setDEF(QString("PoseJoint_r_shoulder_1"));
SoHAnimJoint30->setDescription(QString("right shoulder"));
SoHAnimJoint30->setRotation(new float[]{0.0,0.0,-1.0,1.57});
SoHAnimJoint30->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint30->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose27->addChildren(*SoHAnimJoint30);

SoNode17->addChild(*SoHAnimPose27);

SoHAnimPose* SoHAnimPose31 = new SoHAnimPose();
SoHAnimPose31->X3DNode::setName(QString("A"));
SoHAnimPose31->setDEF(QString("A_Pose"));
SoHAnimPose31->setDescription(QString("arms stretched outward and downward similar to letter A"));
SoHAnimPose31->setLoa(1);
SoHAnimPose31->setTransitionDuration(1.2);
SoHAnimJoint* SoHAnimJoint32 = new SoHAnimJoint();
SoHAnimJoint32->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint32->setDEF(QString("PoseJoint_l_shoulder"));
SoHAnimJoint32->setDescription(QString("left shoulder"));
SoHAnimJoint32->setRotation(new float[]{0.0,0.0,1.0,0.5});
SoHAnimJoint32->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint32->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose31->addChildren(*SoHAnimJoint32);

SoHAnimJoint* SoHAnimJoint33 = new SoHAnimJoint();
SoHAnimJoint33->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint33->setDEF(QString("PoseJoint_r_shoulder"));
SoHAnimJoint33->setDescription(QString("right shoulder"));
SoHAnimJoint33->setRotation(new float[]{0.0,0.0,-1.0,0.5});
SoHAnimJoint33->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint33->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose31->addChildren(*SoHAnimJoint33);

SoNode17->addChild(*SoHAnimPose31);

SoHAnimPose* SoHAnimPose34 = new SoHAnimPose();
SoHAnimPose34->X3DNode::setName(QString("TouchDown"));
SoHAnimPose34->setDEF(QString("TouchDown_Pose"));
SoHAnimPose34->setDescription(QString("arms and legs stretched outward providing a TouchDown gesture"));
SoHAnimPose34->setLoa(1);
SoHAnimPose34->setTransitionDuration(1.2);
SoHAnimJoint* SoHAnimJoint35 = new SoHAnimJoint();
SoHAnimJoint35->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint35->setRotation(new float[]{0.0,1.0,0.0,-0.698132});
SoHAnimJoint35->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint35->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint35);

SoHAnimJoint* SoHAnimJoint36 = new SoHAnimJoint();
SoHAnimJoint36->X3DNode::setName(QString("l_hip"));
SoHAnimJoint36->setRotation(new float[]{-1.0,1.0,1.0,1.0});
SoHAnimJoint36->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint36->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint36);

SoHAnimJoint* SoHAnimJoint37 = new SoHAnimJoint();
SoHAnimJoint37->X3DNode::setName(QString("l_knee"));
SoHAnimJoint37->setRotation(new float[]{1.0,0.0,0.0,1.0});
SoHAnimJoint37->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint37->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint37);

SoHAnimJoint* SoHAnimJoint38 = new SoHAnimJoint();
SoHAnimJoint38->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint38->setRotation(new float[]{-0.2,0.0,0.1,0.225});
SoHAnimJoint38->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint38->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint38);

SoHAnimJoint* SoHAnimJoint39 = new SoHAnimJoint();
SoHAnimJoint39->X3DNode::setName(QString("r_hip"));
SoHAnimJoint39->setRotation(new float[]{-1.0,-1.0,-1.0,1.0});
SoHAnimJoint39->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint39->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint39);

SoHAnimJoint* SoHAnimJoint40 = new SoHAnimJoint();
SoHAnimJoint40->X3DNode::setName(QString("r_knee"));
SoHAnimJoint40->setRotation(new float[]{1.0,0.0,0.0,1.0});
SoHAnimJoint40->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint40->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint40);

SoHAnimJoint* SoHAnimJoint41 = new SoHAnimJoint();
SoHAnimJoint41->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint41->setRotation(new float[]{-0.2,0.0,0.1,0.25});
SoHAnimJoint41->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint41->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint41);

SoHAnimJoint* SoHAnimJoint42 = new SoHAnimJoint();
SoHAnimJoint42->X3DNode::setName(QString("vl5"));
SoHAnimJoint42->setRotation(new float[]{0.0,0.0,0.01,0.2});
SoHAnimJoint42->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint42->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint42);

SoHAnimJoint* SoHAnimJoint43 = new SoHAnimJoint();
SoHAnimJoint43->X3DNode::setName(QString("vt10"));
SoHAnimJoint43->setRotation(new float[]{0.0,0.0,0.01,0.1});
SoHAnimJoint43->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint43->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint43);

SoHAnimJoint* SoHAnimJoint44 = new SoHAnimJoint();
SoHAnimJoint44->X3DNode::setName(QString("vc4"));
SoHAnimJoint44->setRotation(new float[]{0.0,0.0,-0.01,0.15});
SoHAnimJoint44->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint44->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint44);

SoHAnimJoint* SoHAnimJoint45 = new SoHAnimJoint();
SoHAnimJoint45->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint45->setRotation(new float[]{-1.0,0.5,1.0,2.0});
SoHAnimJoint45->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint45->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint45);

SoHAnimJoint* SoHAnimJoint46 = new SoHAnimJoint();
SoHAnimJoint46->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint46->setRotation(new float[]{-1.0,0.0,0.0,1.0});
SoHAnimJoint46->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint46->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint46);

SoHAnimJoint* SoHAnimJoint47 = new SoHAnimJoint();
SoHAnimJoint47->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint47->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint47->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint47);

SoHAnimJoint* SoHAnimJoint48 = new SoHAnimJoint();
SoHAnimJoint48->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint48->setRotation(new float[]{-1.0,-0.5,-1.0,2.6});
SoHAnimJoint48->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint48->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint48);

SoHAnimJoint* SoHAnimJoint49 = new SoHAnimJoint();
SoHAnimJoint49->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint49->setRotation(new float[]{-1.0,0.0,0.0,1.0});
SoHAnimJoint49->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint49->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint49);

SoHAnimJoint* SoHAnimJoint50 = new SoHAnimJoint();
SoHAnimJoint50->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint50->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint50->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose34->addChildren(*SoHAnimJoint50);

SoNode17->addChild(*SoHAnimPose34);

SoHAnimPose* SoHAnimPose51 = new SoHAnimPose();
SoHAnimPose51->X3DNode::setName(QString("I"));
SoHAnimPose51->setDEF(QString("I_Pose"));
SoHAnimPose51->setDescription(QString("arms and legs straight down default binding pose for baseline Humanoid"));
SoHAnimPose51->setLoa(1);
SoHAnimPose51->setTransitionDuration(1.5);
//not defining any poseJoint HAnimJoint nodes equals the default \"I\" pose
SoNode17->addChild(*SoHAnimPose51);

SoHAnimPose* SoHAnimPose52 = new SoHAnimPose();
SoHAnimPose52->X3DNode::setName(QString("H"));
SoHAnimPose52->setDEF(QString("H_Pose"));
SoHAnimPose52->setDescription(QString("TODO experimental pose not yet implemented"));
SoHAnimPose52->setEnabled(false);
SoHAnimPose52->setTransitionDuration(1.4);
SoHAnimPose52->setLoa(-1);
//TODO define poseJoint HAnimJoint nodes
SoNode17->addChild(*SoHAnimPose52);

SoHAnimPose* SoHAnimPose53 = new SoHAnimPose();
SoHAnimPose53->X3DNode::setName(QString("FaceLeft"));
SoHAnimPose53->setDEF(QString("FaceLeft_Pose"));
SoHAnimPose53->setDescription(QString("Only modify humanoid_root Joint node to face left"));
SoHAnimPose53->setLoa(0);
SoHAnimPose53->setTransitionDuration(1.1);
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint54->setDEF(QString("FaceLeft_humanoid_root"));
SoHAnimJoint54->setDescription(QString("Only rotate the model"));
SoHAnimJoint54->setRotation(new float[]{0.0,1.0,0.0,1.570796});
SoHAnimJoint54->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint54->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose53->addChildren(*SoHAnimJoint54);

SoNode17->addChild(*SoHAnimPose53);

SoHAnimPose* SoHAnimPose55 = new SoHAnimPose();
SoHAnimPose55->X3DNode::setName(QString("FaceRight"));
SoHAnimPose55->setDEF(QString("FaceRight_Pose"));
SoHAnimPose55->setDescription(QString("Only modify humanoid_root Joint node to face right"));
SoHAnimPose55->setLoa(0);
SoHAnimPose55->setTransitionDuration(1.1);
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint56->setDEF(QString("FaceRight_humanoid_root"));
SoHAnimJoint56->setDescription(QString("Only rotate the model"));
SoHAnimJoint56->setRotation(new float[]{0.0,1.0,0.0,-1.570796});
SoHAnimJoint56->setUlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimJoint56->setLlimit(new float[]{0.0,0.0,0.0}, 3);
SoHAnimPose55->addChildren(*SoHAnimJoint56);

SoNode17->addChild(*SoHAnimPose55);

SoGroup* SoGroup57 = new SoGroup();
SoGroup57->setDEF(QString("InterfaceButtonsGroup"));
SoTransform* SoTransform58 = new SoTransform();
SoTransform58->setDEF(QString("DisplayHeader"));
SoTransform58->setTranslation(new float[]{0.0,2.0,0.0});
SoShape* SoShape59 = new SoShape();
SoText* SoText60 = new SoText();
SoText60->setString(new QString[]{QString("HAnimPosePrototype example implementation")}, 1);
SoFontStyle* SoFontStyle61 = new SoFontStyle();
SoFontStyle61->setDEF(QString("HeaderFont"));
SoFontStyle61->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle61->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle61->setSize(0.15);
SoFontStyle61->setStyle(QString("BOLD"));
SoText60->setFontStyle(*SoFontStyle61);

SoShape59->setGeometry(*SoText60);

SoVRMLAppearance* SoVRMLAppearance62 = new SoVRMLAppearance();
SoVRMLAppearance62->setDEF(QString("PoseTextAppearance"));
SoMaterial* SoMaterial63 = new SoMaterial();
SoMaterial63->setDiffuseColor(new float[]{0.1,0.5,0.3});
SoVRMLAppearance62->addChild(*SoMaterial63);

SoShape59->addChild(*SoVRMLAppearance62);

SoTransform58->addChild(*SoShape59);

SoGroup57->addChild(*SoTransform58);

SoTransform* SoTransform64 = new SoTransform();
SoTransform64->setDEF(QString("T_PoseInterface"));
SoTransform64->setTranslation(new float[]{-1.5,1.5,0.0});
SoShape* SoShape65 = new SoShape();
SoText* SoText66 = new SoText();
SoText66->setString(new QString[]{QString("\"T\" Pose")}, 1);
SoFontStyle* SoFontStyle67 = new SoFontStyle();
SoFontStyle67->setDEF(QString("SharedFont"));
SoFontStyle67->setFamily(new QString[]{QString("SANS")}, 1);
SoFontStyle67->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle67->setSize(0.1);
SoFontStyle67->setStyle(QString("BOLD"));
SoText66->setFontStyle(*SoFontStyle67);

SoShape65->setGeometry(*SoText66);

SoVRMLAppearance* SoVRMLAppearance68 = new SoVRMLAppearance();
SoVRMLAppearance68->setUSE(QString("PoseTextAppearance"));
SoShape65->addChild(*SoVRMLAppearance68);

SoTransform64->addChild(*SoShape65);

SoShape* SoShape69 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance70 = new SoVRMLAppearance();
SoVRMLAppearance70->setDEF(QString("TransparentAppearance"));
SoMaterial* SoMaterial71 = new SoMaterial();
SoMaterial71->setTransparency(0.8);
SoVRMLAppearance70->addChild(*SoMaterial71);

SoShape69->addChild(*SoVRMLAppearance70);

SoBox* SoBox72 = new SoBox();
SoBox72->setSize(new float[]{0.45,0.2,0.001});
SoShape69->setGeometry(*SoBox72);

SoTransform64->addChild(*SoShape69);

SoTouchSensor* SoTouchSensor73 = new SoTouchSensor();
SoTouchSensor73->setDEF(QString("T_PoseTouchSensor"));
SoTouchSensor73->setDescription(QString("select to move shoulders to \"T\" pose, leave other joints unchanged"));
SoTransform64->addChild(*SoTouchSensor73);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromField(QString("isActive"));
SoROUTE74->setFromNode(QString("T_PoseTouchSensor"));
SoROUTE74->setToField(QString("commencePose"));
SoROUTE74->setToNode(QString("T_Pose"));
SoTransform64->addChild(*SoROUTE74);

SoGroup57->addChild(*SoTransform64);

SoTransform* SoTransform75 = new SoTransform();
SoTransform75->setDEF(QString("A_PoseInterface"));
SoTransform75->setTranslation(new float[]{-1.5,1.0,0.0});
SoShape* SoShape76 = new SoShape();
SoText* SoText77 = new SoText();
SoText77->setString(new QString[]{QString("\"A\" Pose")}, 1);
SoFontStyle* SoFontStyle78 = new SoFontStyle();
SoFontStyle78->setUSE(QString("SharedFont"));
SoText77->setFontStyle(*SoFontStyle78);

SoShape76->setGeometry(*SoText77);

SoVRMLAppearance* SoVRMLAppearance79 = new SoVRMLAppearance();
SoVRMLAppearance79->setUSE(QString("PoseTextAppearance"));
SoShape76->addChild(*SoVRMLAppearance79);

SoTransform75->addChild(*SoShape76);

SoShape* SoShape80 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance81 = new SoVRMLAppearance();
SoVRMLAppearance81->setUSE(QString("TransparentAppearance"));
SoShape80->addChild(*SoVRMLAppearance81);

SoBox* SoBox82 = new SoBox();
SoBox82->setSize(new float[]{0.45,0.2,0.001});
SoShape80->setGeometry(*SoBox82);

SoTransform75->addChild(*SoShape80);

SoTouchSensor* SoTouchSensor83 = new SoTouchSensor();
SoTouchSensor83->setDEF(QString("A_PoseTouchSensor"));
SoTouchSensor83->setDescription(QString("select to move shoulders to \"A\" pose, leave other joints unchanged"));
SoTransform75->addChild(*SoTouchSensor83);

SoROUTE* SoROUTE84 = new SoROUTE();
SoROUTE84->setFromField(QString("isActive"));
SoROUTE84->setFromNode(QString("A_PoseTouchSensor"));
SoROUTE84->setToField(QString("commencePose"));
SoROUTE84->setToNode(QString("A_Pose"));
SoTransform75->addChild(*SoROUTE84);

SoGroup57->addChild(*SoTransform75);

SoTransform* SoTransform85 = new SoTransform();
SoTransform85->setDEF(QString("TouchDown_PoseInterface"));
SoTransform85->setTranslation(new float[]{-1.5,0.5,0.0});
SoShape* SoShape86 = new SoShape();
SoText* SoText87 = new SoText();
SoText87->setString(new QString[]{QString("TouchDown Pose")}, 1);
SoFontStyle* SoFontStyle88 = new SoFontStyle();
SoFontStyle88->setUSE(QString("SharedFont"));
SoText87->setFontStyle(*SoFontStyle88);

SoShape86->setGeometry(*SoText87);

SoVRMLAppearance* SoVRMLAppearance89 = new SoVRMLAppearance();
SoVRMLAppearance89->setUSE(QString("PoseTextAppearance"));
SoShape86->addChild(*SoVRMLAppearance89);

SoTransform85->addChild(*SoShape86);

SoShape* SoShape90 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance91 = new SoVRMLAppearance();
SoVRMLAppearance91->setUSE(QString("TransparentAppearance"));
SoShape90->addChild(*SoVRMLAppearance91);

SoBox* SoBox92 = new SoBox();
SoBox92->setSize(new float[]{0.85,0.2,0.001});
SoShape90->setGeometry(*SoBox92);

SoTransform85->addChild(*SoShape90);

SoTouchSensor* SoTouchSensor93 = new SoTouchSensor();
SoTouchSensor93->setDEF(QString("TouchDown_PoseTouchSensor"));
SoTouchSensor93->setDescription(QString("select to transition all joints to TouchDown pose"));
SoTransform85->addChild(*SoTouchSensor93);

SoROUTE* SoROUTE94 = new SoROUTE();
SoROUTE94->setFromField(QString("isActive"));
SoROUTE94->setFromNode(QString("TouchDown_PoseTouchSensor"));
SoROUTE94->setToField(QString("commencePose"));
SoROUTE94->setToNode(QString("TouchDown_Pose"));
SoTransform85->addChild(*SoROUTE94);

SoGroup57->addChild(*SoTransform85);

SoTransform* SoTransform95 = new SoTransform();
SoTransform95->setDEF(QString("I_PoseInterface"));
SoTransform95->setTranslation(new float[]{-1.5,0.0,0.0});
SoShape* SoShape96 = new SoShape();
SoText* SoText97 = new SoText();
SoText97->setString(new QString[]{QString("\"I\" Pose")}, 1);
SoFontStyle* SoFontStyle98 = new SoFontStyle();
SoFontStyle98->setUSE(QString("SharedFont"));
SoText97->setFontStyle(*SoFontStyle98);

SoShape96->setGeometry(*SoText97);

SoVRMLAppearance* SoVRMLAppearance99 = new SoVRMLAppearance();
SoVRMLAppearance99->setUSE(QString("PoseTextAppearance"));
SoShape96->addChild(*SoVRMLAppearance99);

SoTransform95->addChild(*SoShape96);

SoShape* SoShape100 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance101 = new SoVRMLAppearance();
SoVRMLAppearance101->setUSE(QString("TransparentAppearance"));
SoShape100->addChild(*SoVRMLAppearance101);

SoBox* SoBox102 = new SoBox();
SoBox102->setSize(new float[]{0.45,0.2,0.001});
SoShape100->setGeometry(*SoBox102);

SoTransform95->addChild(*SoShape100);

SoTouchSensor* SoTouchSensor103 = new SoTouchSensor();
SoTouchSensor103->setDEF(QString("I_PoseTouchSensor"));
SoTouchSensor103->setDescription(QString("select to transition all joints to \"I\" pose"));
SoTransform95->addChild(*SoTouchSensor103);

SoROUTE* SoROUTE104 = new SoROUTE();
SoROUTE104->setFromField(QString("isActive"));
SoROUTE104->setFromNode(QString("I_PoseTouchSensor"));
SoROUTE104->setToField(QString("commencePose"));
SoROUTE104->setToNode(QString("I_Pose"));
SoTransform95->addChild(*SoROUTE104);

SoGroup57->addChild(*SoTransform95);

SoTransform* SoTransform105 = new SoTransform();
SoTransform105->setDEF(QString("FaceLeftPoseInterface"));
SoTransform105->setTranslation(new float[]{1.5,1.5,0.0});
SoShape* SoShape106 = new SoShape();
SoText* SoText107 = new SoText();
SoText107->setString(new QString[]{QString("Face Left Pose")}, 1);
SoFontStyle* SoFontStyle108 = new SoFontStyle();
SoFontStyle108->setUSE(QString("SharedFont"));
SoText107->setFontStyle(*SoFontStyle108);

SoShape106->setGeometry(*SoText107);

SoVRMLAppearance* SoVRMLAppearance109 = new SoVRMLAppearance();
SoVRMLAppearance109->setUSE(QString("PoseTextAppearance"));
SoShape106->addChild(*SoVRMLAppearance109);

SoTransform105->addChild(*SoShape106);

SoShape* SoShape110 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance111 = new SoVRMLAppearance();
SoVRMLAppearance111->setUSE(QString("TransparentAppearance"));
SoShape110->addChild(*SoVRMLAppearance111);

SoBox* SoBox112 = new SoBox();
SoBox112->setSize(new float[]{0.9,0.2,0.001});
SoShape110->setGeometry(*SoBox112);

SoTransform105->addChild(*SoShape110);

SoTouchSensor* SoTouchSensor113 = new SoTouchSensor();
SoTouchSensor113->setDEF(QString("FaceLeftTouchSensor"));
SoTouchSensor113->setDescription(QString("select to rotate body and Face Left, leave other joints unchanged"));
SoTransform105->addChild(*SoTouchSensor113);

SoROUTE* SoROUTE114 = new SoROUTE();
SoROUTE114->setFromField(QString("isActive"));
SoROUTE114->setFromNode(QString("FaceLeftTouchSensor"));
SoROUTE114->setToField(QString("commencePose"));
SoROUTE114->setToNode(QString("FaceLeft_Pose"));
SoTransform105->addChild(*SoROUTE114);

SoGroup57->addChild(*SoTransform105);

SoTransform* SoTransform115 = new SoTransform();
SoTransform115->setDEF(QString("FaceRightPoseInterface"));
SoTransform115->setTranslation(new float[]{1.5,1.0,0.0});
SoShape* SoShape116 = new SoShape();
SoText* SoText117 = new SoText();
SoText117->setString(new QString[]{QString("Face Right Pose")}, 1);
SoFontStyle* SoFontStyle118 = new SoFontStyle();
SoFontStyle118->setUSE(QString("SharedFont"));
SoText117->setFontStyle(*SoFontStyle118);

SoShape116->setGeometry(*SoText117);

SoVRMLAppearance* SoVRMLAppearance119 = new SoVRMLAppearance();
SoVRMLAppearance119->setUSE(QString("PoseTextAppearance"));
SoShape116->addChild(*SoVRMLAppearance119);

SoTransform115->addChild(*SoShape116);

SoShape* SoShape120 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance121 = new SoVRMLAppearance();
SoVRMLAppearance121->setUSE(QString("TransparentAppearance"));
SoShape120->addChild(*SoVRMLAppearance121);

SoBox* SoBox122 = new SoBox();
SoBox122->setSize(new float[]{0.9,0.2,0.001});
SoShape120->setGeometry(*SoBox122);

SoTransform115->addChild(*SoShape120);

SoTouchSensor* SoTouchSensor123 = new SoTouchSensor();
SoTouchSensor123->setDEF(QString("FaceRightTouchSensor"));
SoTouchSensor123->setDescription(QString("select to rotate body and Face Right, leave other joints unchanged"));
SoTransform115->addChild(*SoTouchSensor123);

SoROUTE* SoROUTE124 = new SoROUTE();
SoROUTE124->setFromField(QString("isActive"));
SoROUTE124->setFromNode(QString("FaceRightTouchSensor"));
SoROUTE124->setToField(QString("commencePose"));
SoROUTE124->setToNode(QString("FaceRight_Pose"));
SoTransform115->addChild(*SoROUTE124);

SoGroup57->addChild(*SoTransform115);

SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setDEF(QString("AnimatePosesInterface"));
SoTransform125->setTranslation(new float[]{1.5,0.5,0.0});
SoShape* SoShape126 = new SoShape();
SoText* SoText127 = new SoText();
SoText127->setString(new QString[]{QString("Direct animation"), QString("to, from \"I\" Pose")}, 2);
SoFontStyle* SoFontStyle128 = new SoFontStyle();
SoFontStyle128->setUSE(QString("SharedFont"));
SoText127->setFontStyle(*SoFontStyle128);

SoShape126->setGeometry(*SoText127);

SoVRMLAppearance* SoVRMLAppearance129 = new SoVRMLAppearance();
SoVRMLAppearance129->setDEF(QString("AnimationTextAppearance"));
SoMaterial* SoMaterial130 = new SoMaterial();
SoMaterial130->setDiffuseColor(new float[]{0.1,0.2,0.3});
SoVRMLAppearance129->addChild(*SoMaterial130);

SoShape126->addChild(*SoVRMLAppearance129);

SoTransform125->addChild(*SoShape126);

SoShape* SoShape131 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance132 = new SoVRMLAppearance();
SoVRMLAppearance132->setUSE(QString("TransparentAppearance"));
SoShape131->addChild(*SoVRMLAppearance132);

SoBox* SoBox133 = new SoBox();
SoBox133->setSize(new float[]{0.9,0.25,0.001});
SoShape131->setGeometry(*SoBox133);

SoTransform125->addChild(*SoShape131);

SoTouchSensor* SoTouchSensor134 = new SoTouchSensor();
SoTouchSensor134->setDEF(QString("AnimatePosesTouchSensor"));
SoTouchSensor134->setDescription(QString("select to animate current pose to \"I\" pose, then back to original pose, using TimeSensor events"));
SoTransform125->addChild(*SoTouchSensor134);

//cycleInterval=4 also hard-coded in script execution message
SoTimeSensor* SoTimeSensor135 = new SoTimeSensor();
SoTimeSensor135->setDEF(QString("AnimatePosesClock"));
SoTimeSensor135->setCycleInterval(4);
SoTimeSensor135->setDescription(QString("directly animate several poses"));
SoTransform125->addChild(*SoTimeSensor135);

SoScalarInterpolator* SoScalarInterpolator136 = new SoScalarInterpolator();
SoScalarInterpolator136->setDEF(QString("AnimatePosesLoopInterpolator"));
SoScalarInterpolator136->setKey(new float[]{0.0,0.05,0.45,0.55,0.95,1.0}, 6);
SoScalarInterpolator136->setKeyValue(new float[]{0.0,0.0,1.0,1.0,0.0,0.0}, 6);
SoTransform125->addChild(*SoScalarInterpolator136);

SoROUTE* SoROUTE137 = new SoROUTE();
SoROUTE137->setFromField(QString("touchTime"));
SoROUTE137->setFromNode(QString("AnimatePosesTouchSensor"));
SoROUTE137->setToField(QString("startTime"));
SoROUTE137->setToNode(QString("AnimatePosesClock"));
SoTransform125->addChild(*SoROUTE137);

SoROUTE* SoROUTE138 = new SoROUTE();
SoROUTE138->setFromField(QString("fraction_changed"));
SoROUTE138->setFromNode(QString("AnimatePosesClock"));
SoROUTE138->setToField(QString("set_fraction"));
SoROUTE138->setToNode(QString("AnimatePosesLoopInterpolator"));
SoTransform125->addChild(*SoROUTE138);

SoROUTE* SoROUTE139 = new SoROUTE();
SoROUTE139->setFromField(QString("value_changed"));
SoROUTE139->setFromNode(QString("AnimatePosesLoopInterpolator"));
SoROUTE139->setToField(QString("set_fraction"));
SoROUTE139->setToNode(QString("I_Pose"));
SoTransform125->addChild(*SoROUTE139);

SoGroup57->addChild(*SoTransform125);

SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setDEF(QString("ResetDefaultPoseInterface"));
SoTransform140->setTranslation(new float[]{1.5,0.0,0.0});
SoShape* SoShape141 = new SoShape();
SoText* SoText142 = new SoText();
SoText142->setString(new QString[]{QString("Reset All Joints"), QString("to Default \"I\" Pose")}, 2);
SoFontStyle* SoFontStyle143 = new SoFontStyle();
SoFontStyle143->setUSE(QString("SharedFont"));
SoText142->setFontStyle(*SoFontStyle143);

SoShape141->setGeometry(*SoText142);

SoVRMLAppearance* SoVRMLAppearance144 = new SoVRMLAppearance();
SoVRMLAppearance144->setUSE(QString("AnimationTextAppearance"));
SoShape141->addChild(*SoVRMLAppearance144);

SoTransform140->addChild(*SoShape141);

SoShape* SoShape145 = new SoShape();
//Selectable Text transparent Box for easy user selection
SoVRMLAppearance* SoVRMLAppearance146 = new SoVRMLAppearance();
SoVRMLAppearance146->setUSE(QString("TransparentAppearance"));
SoShape145->addChild(*SoVRMLAppearance146);

SoBox* SoBox147 = new SoBox();
SoBox147->setSize(new float[]{0.9,0.25,0.001});
SoShape145->setGeometry(*SoBox147);

SoTransform140->addChild(*SoShape145);

SoTouchSensor* SoTouchSensor148 = new SoTouchSensor();
SoTouchSensor148->setDEF(QString("ResetPoseTouchSensor"));
SoTouchSensor148->setDescription(QString("select to immediately Rezero All Joints (to default \"I\" Pose) by sending resetAllJoints event"));
SoTransform140->addChild(*SoTouchSensor148);

SoROUTE* SoROUTE149 = new SoROUTE();
SoROUTE149->setFromField(QString("isActive"));
SoROUTE149->setFromNode(QString("ResetPoseTouchSensor"));
SoROUTE149->setToField(QString("resetAllJoints"));
SoROUTE149->setToNode(QString("FaceLeft_Pose"));
SoTransform140->addChild(*SoROUTE149);

SoGroup57->addChild(*SoTransform140);

SoNode17->addChild(*SoGroup57);

SoGroup* SoGroup150 = new SoGroup();
SoGroup150->setDEF(QString("HandleInlineLoadsensorRouting"));
SoROUTE* SoROUTE151 = new SoROUTE();
SoROUTE151->setFromField(QString("isLoaded"));
SoROUTE151->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE151->setToField(QString("isLoaded"));
SoROUTE151->setToNode(QString("A_Pose"));
SoGroup150->addChild(*SoROUTE151);

SoROUTE* SoROUTE152 = new SoROUTE();
SoROUTE152->setFromField(QString("isLoaded"));
SoROUTE152->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE152->setToField(QString("isLoaded"));
SoROUTE152->setToNode(QString("H_Pose"));
SoGroup150->addChild(*SoROUTE152);

SoROUTE* SoROUTE153 = new SoROUTE();
SoROUTE153->setFromField(QString("isLoaded"));
SoROUTE153->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE153->setToField(QString("isLoaded"));
SoROUTE153->setToNode(QString("I_Pose"));
SoGroup150->addChild(*SoROUTE153);

SoROUTE* SoROUTE154 = new SoROUTE();
SoROUTE154->setFromField(QString("isLoaded"));
SoROUTE154->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE154->setToField(QString("isLoaded"));
SoROUTE154->setToNode(QString("T_Pose"));
SoGroup150->addChild(*SoROUTE154);

SoROUTE* SoROUTE155 = new SoROUTE();
SoROUTE155->setFromField(QString("isLoaded"));
SoROUTE155->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE155->setToField(QString("isLoaded"));
SoROUTE155->setToNode(QString("FaceLeft_Pose"));
SoGroup150->addChild(*SoROUTE155);

SoROUTE* SoROUTE156 = new SoROUTE();
SoROUTE156->setFromField(QString("isLoaded"));
SoROUTE156->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE156->setToField(QString("isLoaded"));
SoROUTE156->setToNode(QString("FaceRight_Pose"));
SoGroup150->addChild(*SoROUTE156);

SoROUTE* SoROUTE157 = new SoROUTE();
SoROUTE157->setFromField(QString("isLoaded"));
SoROUTE157->setFromNode(QString("HumanoidInlineLoadSensor"));
SoROUTE157->setToField(QString("isLoaded"));
SoROUTE157->setToNode(QString("TouchDown_Pose"));
SoGroup150->addChild(*SoROUTE157);

SoNode17->addChild(*SoGroup150);

SoHAnimHumanoid* SoHAnimHumanoid158 = new SoHAnimHumanoid();
SoHAnimHumanoid158->X3DNode::setName(QString("HumanoidStub"));
SoHAnimHumanoid158->setInfo(new QString[]{QString("humanoidVersion=2.0")}, 1);
SoHAnimHumanoid158->setVersion(QString("2.0"));
SoHAnimPose* SoHAnimPose159 = new SoHAnimPose();
SoHAnimPose159->setUSE(QString("A_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose159);

SoHAnimPose* SoHAnimPose160 = new SoHAnimPose();
SoHAnimPose160->setUSE(QString("T_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose160);

SoHAnimPose* SoHAnimPose161 = new SoHAnimPose();
SoHAnimPose161->setUSE(QString("I_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose161);

SoHAnimPose* SoHAnimPose162 = new SoHAnimPose();
SoHAnimPose162->setUSE(QString("H_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose162);

SoHAnimPose* SoHAnimPose163 = new SoHAnimPose();
SoHAnimPose163->setUSE(QString("FaceLeft_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose163);

SoHAnimPose* SoHAnimPose164 = new SoHAnimPose();
SoHAnimPose164->setUSE(QString("FaceRight_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose164);

SoHAnimPose* SoHAnimPose165 = new SoHAnimPose();
SoHAnimPose165->setUSE(QString("TouchDown_Pose"));
SoHAnimHumanoid158->setPoses(SoHAnimPose165);

SoNode17->addChild(*SoHAnimHumanoid158);

SoSceneManager0->setSceneGraph(*SoNode17);

return 0;
}
