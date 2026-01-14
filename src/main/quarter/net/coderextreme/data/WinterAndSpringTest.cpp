
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
Someta3->setContent(QString("WinterAndSpringTest.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("1 May 2023"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:21:02 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("identifier"));
Someta11->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoWorldInfo* SoWorldInfo13 = new SoWorldInfo();
SoWorldInfo13->setTitle(QString("X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations"));
SoWorldInfo13->setInfo(new QString[]{QString("X3D Humanoid LOA3 skeleton plus others"), QString("Lots points")}, 2);
SoNode12->addChild(*SoWorldInfo13);

SoNavigationInfo* SoNavigationInfo14 = new SoNavigationInfo();
SoNavigationInfo14->setDEF(QString("Start_NavigationInfo"));
SoNode12->addChild(*SoNavigationInfo14);

SoViewpoint* SoViewpoint15 = new SoViewpoint();
SoViewpoint15->setDescription(QString("Male"));
SoViewpoint15->setPosition(new float[]{0.0,1.0,-2.0});
SoViewpoint15->setCenterOfRotation(new float[]{0.0,1.0,0.0});
SoNode12->addChild(*SoViewpoint15);

SoBackground* SoBackground16 = new SoBackground();
SoBackground16->setDEF(QString("gray_Background"));
SoNode12->addChild(*SoBackground16);

SoBackground* SoBackground17 = new SoBackground();
SoBackground17->setDEF(QString("dark_gray_Background"));
SoNode12->addChild(*SoBackground17);

SoBackground* SoBackground18 = new SoBackground();
SoBackground18->setDEF(QString("black_Background"));
SoNode12->addChild(*SoBackground18);

SoBackground* SoBackground19 = new SoBackground();
SoBackground19->setDEF(QString("blue_Background"));
SoNode12->addChild(*SoBackground19);

SoSpotLight* SoSpotLight20 = new SoSpotLight();
SoSpotLight20->setDEF(QString("light1"));
SoSpotLight20->setColor(new float[]{0.8,0.8,1.0});
SoSpotLight20->setAmbientIntensity(0.7);
SoSpotLight20->setLocation(new float[]{0.0,3.0,3.0});
SoSpotLight20->setDirection(new float[]{0.0,0.0,0.0});
SoSpotLight20->setRadius(10);
SoSpotLight20->setBeamWidth(1.5);
SoSpotLight20->setCutOffAngle(0.6);
SoNode12->addChild(*SoSpotLight20);

SoPointLight* SoPointLight21 = new SoPointLight();
SoPointLight21->setDEF(QString("light2"));
SoPointLight21->setColor(new float[]{0.8,0.8,1.0});
SoPointLight21->setAmbientIntensity(0.7);
SoPointLight21->setLocation(new float[]{0.0,10.0,-7.0});
SoNode12->addChild(*SoPointLight21);

SoViewpoint* SoViewpoint22 = new SoViewpoint();
SoViewpoint22->setDEF(QString("Scene_InclinedView"));
SoViewpoint22->setDescription(QString("Scene_Inclined View"));
SoViewpoint22->setPosition(new float[]{1.62,1.05,3.06});
SoViewpoint22->setOrientation(new float[]{-0.113,0.993,0.0347,0.671});
SoViewpoint22->setCenterOfRotation(new float[]{0.0,0.85,0.0});
SoNode12->addChild(*SoViewpoint22);

SoViewpoint* SoViewpoint23 = new SoViewpoint();
SoViewpoint23->setDEF(QString("Scene_IFrontView"));
SoViewpoint23->setDescription(QString("Scene_Front View"));
SoViewpoint23->setPosition(new float[]{0.0,0.8,2.58});
SoViewpoint23->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode12->addChild(*SoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDEF(QString("Scene_OldMan_ISideView"));
SoViewpoint24->setDescription(QString("Scene_Side View"));
SoViewpoint24->setPosition(new float[]{-2.6,1.5,1.0});
SoViewpoint24->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint24->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode12->addChild(*SoViewpoint24);

SoViewpoint* SoViewpoint25 = new SoViewpoint();
SoViewpoint25->setDEF(QString("Scene_ISideView"));
SoViewpoint25->setDescription(QString("Scene_Side View"));
SoViewpoint25->setPosition(new float[]{-5.0,1.5,1.0});
SoViewpoint25->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint25->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode12->addChild(*SoViewpoint25);

SoViewpoint* SoViewpoint26 = new SoViewpoint();
SoViewpoint26->setDEF(QString("Scene_Full_ISideView"));
SoViewpoint26->setDescription(QString("Scene_Side View"));
SoViewpoint26->setPosition(new float[]{-10.0,1.5,1.0});
SoViewpoint26->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint26->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode12->addChild(*SoViewpoint26);

SoViewpoint* SoViewpoint27 = new SoViewpoint();
SoViewpoint27->setDEF(QString("Scene_OneBush_ISideView"));
SoViewpoint27->setDescription(QString("Scene_Side View"));
SoViewpoint27->setPosition(new float[]{-20.0,1.5,1.0});
SoViewpoint27->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint27->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode12->addChild(*SoViewpoint27);

SoViewpoint* SoViewpoint28 = new SoViewpoint();
SoViewpoint28->setDEF(QString("Scene_TwoBush_ISideView"));
SoViewpoint28->setDescription(QString("Scene_Side View"));
SoViewpoint28->setPosition(new float[]{-10.0,1.5,1.0});
SoViewpoint28->setOrientation(new float[]{0.0,1.0,0.0,1.5708});
SoViewpoint28->setCenterOfRotation(new float[]{0.0,0.8,0.0});
SoNode12->addChild(*SoViewpoint28);

SoViewpoint* SoViewpoint29 = new SoViewpoint();
SoViewpoint29->setDEF(QString("Scene_BackView"));
SoViewpoint29->setDescription(QString("Scene_Back View"));
SoViewpoint29->setPosition(new float[]{0.0,1.5,-5.0});
SoViewpoint29->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint29->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoNode12->addChild(*SoViewpoint29);

SoViewpoint* SoViewpoint30 = new SoViewpoint();
SoViewpoint30->setDEF(QString("Scene_OldMan_BackView"));
SoViewpoint30->setDescription(QString("Scene_Back View"));
SoViewpoint30->setPosition(new float[]{0.0,1.5,-2.5});
SoViewpoint30->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint30->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoNode12->addChild(*SoViewpoint30);

SoViewpoint* SoViewpoint31 = new SoViewpoint();
SoViewpoint31->setDEF(QString("Scene_Full_BackView"));
SoViewpoint31->setDescription(QString("Scene_Back View"));
SoViewpoint31->setPosition(new float[]{0.0,1.5,-20.0});
SoViewpoint31->setOrientation(new float[]{0.0,1.0,15.0,3.14});
SoViewpoint31->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoNode12->addChild(*SoViewpoint31);

SoViewpoint* SoViewpoint32 = new SoViewpoint();
SoViewpoint32->setDEF(QString("Scene_TopView"));
SoViewpoint32->setDescription(QString("Scene_Top View"));
SoViewpoint32->setPosition(new float[]{0.0,3.5,0.0});
SoViewpoint32->setOrientation(new float[]{1.0,0.0,0.0,-1.5708});
SoViewpoint32->setCenterOfRotation(new float[]{0.0,1.5,0.0});
SoNode12->addChild(*SoViewpoint32);

SoGroup* SoGroup33 = new SoGroup();
SoGroup33->setDEF(QString("OldMan_Humanoid"));
SoHAnimHumanoid* SoHAnimHumanoid34 = new SoHAnimHumanoid();
SoHAnimHumanoid34->setDEF(QString("OldMan"));
SoHAnimHumanoid34->X3DNode::setName(QString("Walk"));
SoHAnimHumanoid34->setLoa(3);
SoMetadataSet* SoMetadataSet35 = new SoMetadataSet();
SoMetadataSet35->X3DNode::setName(QString("warnings"));
SoMetadataSet35->X3DNode::setReference(QString("HAnim"));
SoMetadataString* SoMetadataString36 = new SoMetadataString();
SoMetadataString36->X3DNode::setName(QString("SymmetricalLeftRight"));
SoMetadataString36->X3DNode::setReference(QString("correction options: ignore, warn, average, left, right, largest, smallest"));
SoMetadataString36->setValue(new QString[]{QString("ignore")}, 1);
SoMetadataSet35->setValue((X3DNode *)&SoMetadataString36);

SoHAnimHumanoid34->setMetadata(*SoMetadataSet35);

SoHAnimJoint* SoHAnimJoint37 = new SoHAnimJoint();
SoHAnimJoint37->setDEF(QString("OldMan_humanoid_root"));
SoHAnimJoint37->X3DNode::setName(QString("humanoid_root"));
SoHAnimSegment* SoHAnimSegment38 = new SoHAnimSegment();
SoHAnimSegment38->setDEF(QString("OldMan_sacrum"));
SoHAnimSegment38->X3DNode::setName(QString("sacrum"));
SoHAnimSite* SoHAnimSite39 = new SoHAnimSite();
SoHAnimSite39->setDEF(QString("OldMan_RootBack_view"));
SoHAnimSite39->X3DNode::setName(QString("RootBack_view"));
SoTransform* SoTransform40 = new SoTransform();
SoTransform40->setDEF(QString("hanimcordsys"));
SoTransform40->setScale(new float[]{0.175,0.175,0.175});
SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDEF(QString("ViewBodyRootAxes"));
SoViewpoint41->setDescription(QString("Joe_HAnim Root HAnimSite Coordinate Axes View"));
SoTransform40->addChild(*SoViewpoint41);

SoShape* SoShape42 = new SoShape();
SoShape42->setDEF(QString("AxisLinesShape"));
SoIndexedLineSet* SoIndexedLineSet43 = new SoIndexedLineSet();
SoIndexedLineSet43->setColorPerVertex(false);
SoIndexedLineSet43->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet43->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoColor* SoColor44 = new SoColor();
SoColor44->setColor(new float[]{1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet43->setColor(*SoColor44);

SoCoordinate* SoCoordinate45 = new SoCoordinate();
SoCoordinate45->setPoint(new float[]{0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 12);
SoIndexedLineSet43->setCoord(*SoCoordinate45);

SoShape42->setGeometry(*SoIndexedLineSet43);

SoTransform40->addChild(*SoShape42);

SoShape* SoShape46 = new SoShape();
SoShape46->setDEF(QString("OldMan_Shape"));
SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoVRMLAppearance47->setDEF(QString("OldMan_skin_Appearance"));
SoMaterial* SoMaterial48 = new SoMaterial();
SoMaterial48->setDEF(QString("OldMan_skin_Material"));
SoMaterial48->setDiffuseColor(new float[]{0.3,0.3,0.6});
SoMaterial48->setEmissiveColor(new float[]{0.3,0.3,0.6});
SoVRMLAppearance47->addChild(*SoMaterial48);

SoImageTexture* SoImageTexture49 = new SoImageTexture();
SoImageTexture49->setDEF(QString("OldManSkinImageTexture"));
SoImageTexture49->setUrl(new QString[]{QString("OldManBodyTexture29.png"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png")}, 2);
SoVRMLAppearance47->addChild(*SoImageTexture49);

SoTextureTransform* SoTextureTransform50 = new SoTextureTransform();
SoTextureTransform50->setDEF(QString("KickTextureTransform"));
SoVRMLAppearance47->setTextureTransform(SoTextureTransform50);

SoShape46->addChild(*SoVRMLAppearance47);

SoIndexedFaceSet* SoIndexedFaceSet51 = new SoIndexedFaceSet();
SoIndexedFaceSet51->setDEF(QString("OldMan_skin_IndexedFaceSet"));
SoShape46->setGeometry(*SoIndexedFaceSet51);

SoTransform40->addChild(*SoShape46);

SoHAnimSite39->addChild(*SoTransform40);

SoHAnimSegment38->addChild(*SoHAnimSite39);

SoHAnimJoint37->addChildren(*SoHAnimSegment38);

SoHAnimJoint* SoHAnimJoint52 = new SoHAnimJoint();
SoHAnimJoint52->setDEF(QString("OldMan_sacroiliac"));
SoHAnimJoint52->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint* SoHAnimJoint53 = new SoHAnimJoint();
SoHAnimJoint53->setDEF(QString("OldMan_l_hip"));
SoHAnimJoint53->X3DNode::setName(QString("l_hip"));
SoHAnimJoint* SoHAnimJoint54 = new SoHAnimJoint();
SoHAnimJoint54->setDEF(QString("OldMan_l_knee"));
SoHAnimJoint54->X3DNode::setName(QString("l_knee"));
SoHAnimJoint* SoHAnimJoint55 = new SoHAnimJoint();
SoHAnimJoint55->setDEF(QString("OldMan_l_talocrural"));
SoHAnimJoint55->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint* SoHAnimJoint56 = new SoHAnimJoint();
SoHAnimJoint56->setDEF(QString("Joe_l_tarsometatarsal_2"));
SoHAnimJoint56->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint* SoHAnimJoint57 = new SoHAnimJoint();
SoHAnimJoint57->setDEF(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimJoint57->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint* SoHAnimJoint58 = new SoHAnimJoint();
SoHAnimJoint58->setDEF(QString("Joe_l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint58->X3DNode::setName(QString("l_tarsal_distal_interphalangeal_2"));
SoHAnimJoint58->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint57->addChildren(*SoHAnimJoint58);

SoHAnimJoint56->addChildren(*SoHAnimJoint57);

SoHAnimJoint55->addChildren(*SoHAnimJoint56);

SoHAnimJoint54->addChildren(*SoHAnimJoint55);

SoHAnimJoint53->addChildren(*SoHAnimJoint54);

SoHAnimJoint* SoHAnimJoint59 = new SoHAnimJoint();
SoHAnimJoint59->setDEF(QString("OldMan_r_hip"));
SoHAnimJoint59->X3DNode::setName(QString("l_hip"));
SoHAnimJoint* SoHAnimJoint60 = new SoHAnimJoint();
SoHAnimJoint60->setDEF(QString("OldMan_r_knee"));
SoHAnimJoint60->X3DNode::setName(QString("l_knee"));
SoHAnimJoint59->addChildren(*SoHAnimJoint60);

SoHAnimJoint* SoHAnimJoint61 = new SoHAnimJoint();
SoHAnimJoint61->setDEF(QString("OldMan_r_talocrural"));
SoHAnimJoint61->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint* SoHAnimJoint62 = new SoHAnimJoint();
SoHAnimJoint62->setDEF(QString("Joe_r_tarsometatarsal_2"));
SoHAnimJoint62->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint62->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint62->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint62->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimJoint* SoHAnimJoint63 = new SoHAnimJoint();
SoHAnimJoint63->setDEF(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimJoint63->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint63->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint63->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint63->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimJoint* SoHAnimJoint64 = new SoHAnimJoint();
SoHAnimJoint64->setDEF(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint64->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint64->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint64->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint64->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimJoint63->addChildren(*SoHAnimJoint64);

SoHAnimJoint62->addChildren(*SoHAnimJoint63);

SoHAnimJoint61->addChildren(*SoHAnimJoint62);

SoHAnimJoint59->addChildren(*SoHAnimJoint61);

SoHAnimJoint53->addChildren(*SoHAnimJoint59);

SoHAnimJoint52->addChildren(*SoHAnimJoint53);

SoHAnimJoint* SoHAnimJoint65 = new SoHAnimJoint();
SoHAnimJoint65->setDEF(QString("OldMan_vl5"));
SoHAnimJoint65->X3DNode::setName(QString("vl5"));
SoHAnimJoint* SoHAnimJoint66 = new SoHAnimJoint();
SoHAnimJoint66->setDEF(QString("MeshName_vl4"));
SoHAnimJoint66->X3DNode::setName(QString("vl4"));
SoHAnimJoint* SoHAnimJoint67 = new SoHAnimJoint();
SoHAnimJoint67->setDEF(QString("OldMan_vl3"));
SoHAnimJoint67->X3DNode::setName(QString("vl3"));
SoHAnimJoint* SoHAnimJoint68 = new SoHAnimJoint();
SoHAnimJoint68->setDEF(QString("MeshName_vl2"));
SoHAnimJoint68->X3DNode::setName(QString("vl2"));
SoHAnimJoint* SoHAnimJoint69 = new SoHAnimJoint();
SoHAnimJoint69->setDEF(QString("OldMan_vl1"));
SoHAnimJoint69->X3DNode::setName(QString("vl1"));
SoHAnimJoint* SoHAnimJoint70 = new SoHAnimJoint();
SoHAnimJoint70->setDEF(QString("MeshName_vt12"));
SoHAnimJoint70->X3DNode::setName(QString("vt12"));
SoHAnimJoint* SoHAnimJoint71 = new SoHAnimJoint();
SoHAnimJoint71->setDEF(QString("OldMan_vt11"));
SoHAnimJoint71->X3DNode::setName(QString("vt11"));
SoHAnimJoint* SoHAnimJoint72 = new SoHAnimJoint();
SoHAnimJoint72->setDEF(QString("MeshName_vt10"));
SoHAnimJoint72->X3DNode::setName(QString("vt10"));
SoHAnimJoint* SoHAnimJoint73 = new SoHAnimJoint();
SoHAnimJoint73->setDEF(QString("MeshName_vt9"));
SoHAnimJoint73->X3DNode::setName(QString("vt9"));
SoHAnimJoint* SoHAnimJoint74 = new SoHAnimJoint();
SoHAnimJoint74->setDEF(QString("MeshName_vt8"));
SoHAnimJoint74->X3DNode::setName(QString("vt8"));
SoHAnimJoint* SoHAnimJoint75 = new SoHAnimJoint();
SoHAnimJoint75->setDEF(QString("OldMan_vt7"));
SoHAnimJoint75->X3DNode::setName(QString("vt7"));
SoHAnimJoint* SoHAnimJoint76 = new SoHAnimJoint();
SoHAnimJoint76->setDEF(QString("MeshName_vt6"));
SoHAnimJoint76->X3DNode::setName(QString("vt6"));
SoHAnimJoint* SoHAnimJoint77 = new SoHAnimJoint();
SoHAnimJoint77->setDEF(QString("MeshName_vt5"));
SoHAnimJoint77->X3DNode::setName(QString("vt5"));
SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->setDEF(QString("OldMan_vt4"));
SoHAnimJoint78->X3DNode::setName(QString("vt4"));
SoHAnimJoint* SoHAnimJoint79 = new SoHAnimJoint();
SoHAnimJoint79->setDEF(QString("MeshName_vt3"));
SoHAnimJoint79->X3DNode::setName(QString("vt3"));
SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->setDEF(QString("OldMan_vt2"));
SoHAnimJoint80->X3DNode::setName(QString("vt2"));
SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->setDEF(QString("MeshName_vt1"));
SoHAnimJoint81->X3DNode::setName(QString("vt1"));
SoHAnimJoint* SoHAnimJoint82 = new SoHAnimJoint();
SoHAnimJoint82->setDEF(QString("OldMan_vc7"));
SoHAnimJoint82->X3DNode::setName(QString("vc7"));
SoHAnimJoint* SoHAnimJoint83 = new SoHAnimJoint();
SoHAnimJoint83->setDEF(QString("MeshName_vc6"));
SoHAnimJoint83->X3DNode::setName(QString("vc6"));
SoHAnimJoint* SoHAnimJoint84 = new SoHAnimJoint();
SoHAnimJoint84->setDEF(QString("MeshName_vc5"));
SoHAnimJoint84->X3DNode::setName(QString("vc5"));
SoHAnimJoint* SoHAnimJoint85 = new SoHAnimJoint();
SoHAnimJoint85->setDEF(QString("OldMan_vc4"));
SoHAnimJoint85->X3DNode::setName(QString("vc4"));
SoHAnimJoint* SoHAnimJoint86 = new SoHAnimJoint();
SoHAnimJoint86->setDEF(QString("MeshName_vc3"));
SoHAnimJoint86->X3DNode::setName(QString("vc3"));
SoHAnimJoint* SoHAnimJoint87 = new SoHAnimJoint();
SoHAnimJoint87->setDEF(QString("MeshName_vc2"));
SoHAnimJoint87->X3DNode::setName(QString("vc2"));
SoHAnimJoint* SoHAnimJoint88 = new SoHAnimJoint();
SoHAnimJoint88->setDEF(QString("OldMan_vc1"));
SoHAnimJoint88->X3DNode::setName(QString("vc1"));
SoHAnimJoint* SoHAnimJoint89 = new SoHAnimJoint();
SoHAnimJoint89->setDEF(QString("OldMan_skullbase"));
SoHAnimJoint89->X3DNode::setName(QString("skullbase"));
SoHAnimDisplacer* SoHAnimDisplacer90 = new SoHAnimDisplacer();
SoHAnimDisplacer90->setDEF(QString("Joe_skull_tip_raiser_action"));
SoHAnimDisplacer90->X3DNode::setName(QString("skull_tip_raiser_action"));
SoHAnimDisplacer90->setCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimDisplacer90->setDisplacements(new float[]{0.0,0.15,0.0,0.0,0.0,0.15,-0.1,0.0,0.15,0.1,0.0,0.05,0.0,-0.02,0.05,-0.15,0.0,0.0,-0.05,0.0,0.0,0.15,0.0,0.0,0.05,0.0,0.0,0.0,0.0,-0.15}, 30);
SoHAnimJoint89->setDisplacers(SoHAnimDisplacer90);

SoHAnimJoint* SoHAnimJoint91 = new SoHAnimJoint();
SoHAnimJoint91->setDEF(QString("OldMan_l_eyelid_joint"));
SoHAnimJoint91->X3DNode::setName(QString("l_eyelid_joint"));
SoHAnimJoint89->addChildren(*SoHAnimJoint91);

SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("OldMan_l_eyeball_joint"));
SoHAnimJoint92->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint89->addChildren(*SoHAnimJoint92);

SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->setDEF(QString("OldMan_l_eyebrow_joint"));
SoHAnimJoint93->X3DNode::setName(QString("l_eyebrow_joint"));
SoHAnimJoint89->addChildren(*SoHAnimJoint93);

SoHAnimJoint* SoHAnimJoint94 = new SoHAnimJoint();
SoHAnimJoint94->setDEF(QString("OldMan_r_eyelid_joint"));
SoHAnimJoint94->X3DNode::setName(QString("r_eyelid_joint"));
SoHAnimJoint89->addChildren(*SoHAnimJoint94);

SoHAnimJoint* SoHAnimJoint95 = new SoHAnimJoint();
SoHAnimJoint95->setDEF(QString("OldMan_r_eyeball_joint"));
SoHAnimJoint95->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint89->addChildren(*SoHAnimJoint95);

SoHAnimJoint* SoHAnimJoint96 = new SoHAnimJoint();
SoHAnimJoint96->setDEF(QString("OldMan_r_eyebrow_joint"));
SoHAnimJoint96->X3DNode::setName(QString("r_eyebrow_joint"));
SoHAnimJoint89->addChildren(*SoHAnimJoint96);

SoHAnimJoint* SoHAnimJoint97 = new SoHAnimJoint();
SoHAnimJoint97->setDEF(QString("OldMan_temporomandibular"));
SoHAnimJoint97->X3DNode::setName(QString("temporomandibular"));
SoHAnimJoint89->addChildren(*SoHAnimJoint97);

SoHAnimJoint88->addChildren(*SoHAnimJoint89);

SoHAnimJoint87->addChildren(*SoHAnimJoint88);

SoHAnimJoint86->addChildren(*SoHAnimJoint87);

SoHAnimJoint85->addChildren(*SoHAnimJoint86);

SoHAnimJoint84->addChildren(*SoHAnimJoint85);

SoHAnimJoint83->addChildren(*SoHAnimJoint84);

SoHAnimJoint82->addChildren(*SoHAnimJoint83);

SoHAnimJoint81->addChildren(*SoHAnimJoint82);

SoHAnimJoint* SoHAnimJoint98 = new SoHAnimJoint();
SoHAnimJoint98->setDEF(QString("OldMan_l_acromioclavicular"));
SoHAnimJoint98->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint* SoHAnimJoint99 = new SoHAnimJoint();
SoHAnimJoint99->setDEF(QString("OldMan_l_sternoclavicular"));
SoHAnimJoint99->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint* SoHAnimJoint100 = new SoHAnimJoint();
SoHAnimJoint100->setDEF(QString("OldMan_l_shoulder"));
SoHAnimJoint100->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint* SoHAnimJoint101 = new SoHAnimJoint();
SoHAnimJoint101->setDEF(QString("OldMan_l_elbow"));
SoHAnimJoint101->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint* SoHAnimJoint102 = new SoHAnimJoint();
SoHAnimJoint102->setDEF(QString("OldMan_l_radiocarpal"));
SoHAnimJoint102->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint* SoHAnimJoint103 = new SoHAnimJoint();
SoHAnimJoint103->setDEF(QString("OldMan_l_carpometacarpal_1"));
SoHAnimJoint103->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint* SoHAnimJoint104 = new SoHAnimJoint();
SoHAnimJoint104->setDEF(QString("OldMan_l_metacarpophalangeal_1"));
SoHAnimJoint104->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint* SoHAnimJoint105 = new SoHAnimJoint();
SoHAnimJoint105->setDEF(QString("OldMan_l_carpal_interphalangeal_1"));
SoHAnimJoint105->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint104->addChildren(*SoHAnimJoint105);

SoHAnimJoint103->addChildren(*SoHAnimJoint104);

SoHAnimJoint* SoHAnimJoint106 = new SoHAnimJoint();
SoHAnimJoint106->setDEF(QString("OldMan_l_carpometacarpal_2"));
SoHAnimJoint106->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint* SoHAnimJoint107 = new SoHAnimJoint();
SoHAnimJoint107->setDEF(QString("OldMan_l_metacarpophalangeal_2"));
SoHAnimJoint107->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint* SoHAnimJoint108 = new SoHAnimJoint();
SoHAnimJoint108->setDEF(QString("OldMan_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint108->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint* SoHAnimJoint109 = new SoHAnimJoint();
SoHAnimJoint109->setDEF(QString("OldMan_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint109->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint108->addChildren(*SoHAnimJoint109);

SoHAnimJoint107->addChildren(*SoHAnimJoint108);

SoHAnimJoint106->addChildren(*SoHAnimJoint107);

SoHAnimJoint* SoHAnimJoint110 = new SoHAnimJoint();
SoHAnimJoint110->setDEF(QString("OldMan_l_carpometacarpal_3"));
SoHAnimJoint110->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint* SoHAnimJoint111 = new SoHAnimJoint();
SoHAnimJoint111->setDEF(QString("OldMan_l_metacarpophalangeal_3"));
SoHAnimJoint111->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint* SoHAnimJoint112 = new SoHAnimJoint();
SoHAnimJoint112->setDEF(QString("OldMan_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint112->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint* SoHAnimJoint113 = new SoHAnimJoint();
SoHAnimJoint113->setDEF(QString("OldMan_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint113->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint112->addChildren(*SoHAnimJoint113);

SoHAnimJoint111->addChildren(*SoHAnimJoint112);

SoHAnimJoint110->addChildren(*SoHAnimJoint111);

SoHAnimJoint* SoHAnimJoint114 = new SoHAnimJoint();
SoHAnimJoint114->setDEF(QString("OldMan_l_carpometacarpal_4"));
SoHAnimJoint114->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint* SoHAnimJoint115 = new SoHAnimJoint();
SoHAnimJoint115->setDEF(QString("OldMan_l_metacarpophalangeal_4"));
SoHAnimJoint115->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint* SoHAnimJoint116 = new SoHAnimJoint();
SoHAnimJoint116->setDEF(QString("OldMan_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint116->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint* SoHAnimJoint117 = new SoHAnimJoint();
SoHAnimJoint117->setDEF(QString("OldMan_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint117->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint116->addChildren(*SoHAnimJoint117);

SoHAnimJoint115->addChildren(*SoHAnimJoint116);

SoHAnimJoint114->addChildren(*SoHAnimJoint115);

SoHAnimJoint* SoHAnimJoint118 = new SoHAnimJoint();
SoHAnimJoint118->setDEF(QString("OldMan_l_carpometacarpal_5"));
SoHAnimJoint118->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint* SoHAnimJoint119 = new SoHAnimJoint();
SoHAnimJoint119->setDEF(QString("OldMan_l_metacarpophalangeal_5"));
SoHAnimJoint119->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->setDEF(QString("OldMan_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint120->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint* SoHAnimJoint121 = new SoHAnimJoint();
SoHAnimJoint121->setDEF(QString("OldMan_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint121->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint120->addChildren(*SoHAnimJoint121);

SoHAnimJoint119->addChildren(*SoHAnimJoint120);

SoHAnimJoint118->addChildren(*SoHAnimJoint119);

SoHAnimJoint114->addChildren(*SoHAnimJoint118);

SoHAnimJoint110->addChildren(*SoHAnimJoint114);

SoHAnimJoint106->addChildren(*SoHAnimJoint110);

SoHAnimJoint103->addChildren(*SoHAnimJoint106);

SoHAnimJoint102->addChildren(*SoHAnimJoint103);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("OldMan_r_sternoclavicular"));
SoHAnimJoint122->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->setDEF(QString("OldMan_r_acromioclavicular"));
SoHAnimJoint123->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint* SoHAnimJoint124 = new SoHAnimJoint();
SoHAnimJoint124->setDEF(QString("OldMan_r_shoulder"));
SoHAnimJoint124->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint* SoHAnimJoint125 = new SoHAnimJoint();
SoHAnimJoint125->setDEF(QString("OldMan_r_elbow"));
SoHAnimJoint125->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint* SoHAnimJoint126 = new SoHAnimJoint();
SoHAnimJoint126->setDEF(QString("OldMan_r_radiocarpal"));
SoHAnimJoint126->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint* SoHAnimJoint127 = new SoHAnimJoint();
SoHAnimJoint127->setDEF(QString("OldMan_r_carpometacarpal_1"));
SoHAnimJoint127->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint* SoHAnimJoint128 = new SoHAnimJoint();
SoHAnimJoint128->setDEF(QString("OldMan_r_metacarpophalangeal_1"));
SoHAnimJoint128->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint* SoHAnimJoint129 = new SoHAnimJoint();
SoHAnimJoint129->setDEF(QString("OldMan_r_carpal_interphalangeal_1"));
SoHAnimJoint129->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint128->addChildren(*SoHAnimJoint129);

SoHAnimJoint127->addChildren(*SoHAnimJoint128);

SoHAnimJoint* SoHAnimJoint130 = new SoHAnimJoint();
SoHAnimJoint130->setDEF(QString("OldMan_r_carpometacarpal_2"));
SoHAnimJoint130->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint* SoHAnimJoint131 = new SoHAnimJoint();
SoHAnimJoint131->setDEF(QString("OldMan_r_metacarpophalangeal_2"));
SoHAnimJoint131->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint* SoHAnimJoint132 = new SoHAnimJoint();
SoHAnimJoint132->setDEF(QString("OldMan_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint132->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint* SoHAnimJoint133 = new SoHAnimJoint();
SoHAnimJoint133->setDEF(QString("OldMan_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint133->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint132->addChildren(*SoHAnimJoint133);

SoHAnimJoint131->addChildren(*SoHAnimJoint132);

SoHAnimJoint130->addChildren(*SoHAnimJoint131);

SoHAnimJoint* SoHAnimJoint134 = new SoHAnimJoint();
SoHAnimJoint134->setDEF(QString("OldMan_r_carpometacarpal_3"));
SoHAnimJoint134->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint* SoHAnimJoint135 = new SoHAnimJoint();
SoHAnimJoint135->setDEF(QString("OldMan_r_metacarpophalangeal_3"));
SoHAnimJoint135->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint* SoHAnimJoint136 = new SoHAnimJoint();
SoHAnimJoint136->setDEF(QString("OldMan_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint136->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint* SoHAnimJoint137 = new SoHAnimJoint();
SoHAnimJoint137->setDEF(QString("OldMan_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint137->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint136->addChildren(*SoHAnimJoint137);

SoHAnimJoint135->addChildren(*SoHAnimJoint136);

SoHAnimJoint134->addChildren(*SoHAnimJoint135);

SoHAnimJoint* SoHAnimJoint138 = new SoHAnimJoint();
SoHAnimJoint138->setDEF(QString("OldMan_r_carpometacarpal_4"));
SoHAnimJoint138->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint* SoHAnimJoint139 = new SoHAnimJoint();
SoHAnimJoint139->setDEF(QString("OldMan_r_metacarpophalangeal_4"));
SoHAnimJoint139->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint* SoHAnimJoint140 = new SoHAnimJoint();
SoHAnimJoint140->setDEF(QString("OldMan_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint140->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint* SoHAnimJoint141 = new SoHAnimJoint();
SoHAnimJoint141->setDEF(QString("OldMan_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint141->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint140->addChildren(*SoHAnimJoint141);

SoHAnimJoint139->addChildren(*SoHAnimJoint140);

SoHAnimJoint138->addChildren(*SoHAnimJoint139);

SoHAnimJoint* SoHAnimJoint142 = new SoHAnimJoint();
SoHAnimJoint142->setDEF(QString("OldMan_r_carpometacarpal_5"));
SoHAnimJoint142->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint* SoHAnimJoint143 = new SoHAnimJoint();
SoHAnimJoint143->setDEF(QString("OldMan_r_metacarpophalangeal_5"));
SoHAnimJoint143->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint* SoHAnimJoint144 = new SoHAnimJoint();
SoHAnimJoint144->setDEF(QString("OldMan_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint144->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint* SoHAnimJoint145 = new SoHAnimJoint();
SoHAnimJoint145->setDEF(QString("OldMan_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint145->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint144->addChildren(*SoHAnimJoint145);

SoHAnimJoint143->addChildren(*SoHAnimJoint144);

SoHAnimJoint142->addChildren(*SoHAnimJoint143);

SoHAnimJoint138->addChildren(*SoHAnimJoint142);

SoHAnimJoint134->addChildren(*SoHAnimJoint138);

SoHAnimJoint130->addChildren(*SoHAnimJoint134);

SoHAnimJoint127->addChildren(*SoHAnimJoint130);

SoHAnimJoint126->addChildren(*SoHAnimJoint127);

SoHAnimJoint125->addChildren(*SoHAnimJoint126);

SoHAnimJoint124->addChildren(*SoHAnimJoint125);

SoHAnimJoint123->addChildren(*SoHAnimJoint124);

SoHAnimJoint122->addChildren(*SoHAnimJoint123);

SoHAnimJoint102->addChildren(*SoHAnimJoint122);

SoHAnimJoint101->addChildren(*SoHAnimJoint102);

SoHAnimJoint100->addChildren(*SoHAnimJoint101);

SoHAnimJoint99->addChildren(*SoHAnimJoint100);

SoHAnimJoint98->addChildren(*SoHAnimJoint99);

SoHAnimJoint81->addChildren(*SoHAnimJoint98);

SoHAnimJoint80->addChildren(*SoHAnimJoint81);

SoHAnimJoint79->addChildren(*SoHAnimJoint80);

SoHAnimJoint78->addChildren(*SoHAnimJoint79);

SoHAnimJoint77->addChildren(*SoHAnimJoint78);

SoHAnimJoint76->addChildren(*SoHAnimJoint77);

SoHAnimJoint75->addChildren(*SoHAnimJoint76);

SoHAnimJoint74->addChildren(*SoHAnimJoint75);

SoHAnimJoint73->addChildren(*SoHAnimJoint74);

SoHAnimJoint72->addChildren(*SoHAnimJoint73);

SoHAnimJoint71->addChildren(*SoHAnimJoint72);

SoHAnimJoint70->addChildren(*SoHAnimJoint71);

SoHAnimJoint69->addChildren(*SoHAnimJoint70);

SoHAnimJoint68->addChildren(*SoHAnimJoint69);

SoHAnimJoint67->addChildren(*SoHAnimJoint68);

SoHAnimJoint66->addChildren(*SoHAnimJoint67);

SoHAnimJoint65->addChildren(*SoHAnimJoint66);

SoHAnimJoint52->addChildren(*SoHAnimJoint65);

SoHAnimJoint37->addChildren(*SoHAnimJoint52);

SoHAnimHumanoid34->setSkeleton(*SoHAnimJoint37);

SoGroup33->addChild(*SoHAnimHumanoid34);

SoNode12->addChild(*SoGroup33);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}
