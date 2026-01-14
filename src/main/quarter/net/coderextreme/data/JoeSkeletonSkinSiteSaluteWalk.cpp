
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
Someta3->setContent(QString("JoeSkeletonSkinSaluteSiteWalk.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Comprehensive example showing skeleton, skin, sites and interpolator animation together."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("9 January 2004"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translated"));
Someta7->setContent(QString("4 December 2022"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("modified"));
Someta8->setContent(QString("Tue, 09 Sep 2025 19:38:38 GMT"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("warning"));
Someta9->setContent(QString("Under development, numerous errors and warnings"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("TODO"));
Someta10->setContent(QString("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("TODO"));
Someta11->setContent(QString("Provide feedback to tovrmlx3d converter"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("TODO"));
Someta12->setContent(QString("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics."));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("TODO"));
Someta13->setContent(QString("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("JoeSkeletonSkinSaluteSiteWalk.original.x3dv"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("reference"));
Someta16->setContent(QString("JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("reference"));
Someta17->setContent(QString("https://castle-engine.io/view3dscene.php#section_converting"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("Image"));
Someta18->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("Image"));
Someta22->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("Image"));
Someta23->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("Image"));
Someta24->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("Image"));
Someta25->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("Image"));
Someta26->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("drawing"));
Someta27->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("generator"));
Someta28->setContent(QString("tovrmlx3d, https://castle-engine.io/convert.php"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("generator"));
Someta29->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("generator"));
Someta30->setContent(QString("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("translator"));
Someta31->setContent(QString("Michalis Kamburelis"));
Sohead1->addMeta(*Someta31);

Someta* Someta32 = new Someta();
Someta32->setName(QString("translator"));
Someta32->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta32);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode33 = new SoNode();
SoWorldInfo* SoWorldInfo34 = new SoWorldInfo();
SoWorldInfo34->setTitle(QString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"));
SoWorldInfo34->setInfo(new QString[]{QString("By Joe for Joe")}, 1);
SoNode33->addChild(*SoWorldInfo34);

SoWorldInfo* SoWorldInfo35 = new SoWorldInfo();
SoWorldInfo35->setTitle(QString("HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3"));
SoWorldInfo35->setInfo(new QString[]{QString("By Joe for Joe")}, 1);
SoNode33->addChild(*SoWorldInfo35);

SoNavigationInfo* SoNavigationInfo36 = new SoNavigationInfo();
SoNavigationInfo36->setDEF(QString("HeadlightOnRevealsSkinTextureAndColors"));
SoNode33->addChild(*SoNavigationInfo36);

SoBackground* SoBackground37 = new SoBackground();
SoBackground37->setSkyColor(new float[]{0.0,0.0,0.1}, 3);
SoBackground37->setGroundAngle(new float[]{1.57}, 1);
SoBackground37->setGroundColor(new float[]{0.0,0.1,0.0,0.0,0.1,0.0}, 6);
SoNode33->addChild(*SoBackground37);

SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setDEF(QString("cordsysfloor"));
SoTransform38->setScale(new float[]{0.175,0.175,0.175});
SoInline* SoInline39 = new SoInline();
SoInline39->setDEF(QString("CoordinateAxes"));
SoInline39->setUrl(new QString[]{QString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), QString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), QString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), QString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), QString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), QString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")}, 8);
SoTransform38->addChild(*SoInline39);

SoNode33->addChild(*SoTransform38);

SoGroup* SoGroup40 = new SoGroup();
SoGroup40->setDEF(QString("ViewpointGroup"));
SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDescription(QString("Front Up View"));
SoViewpoint41->setPosition(new float[]{-1.0,2.0,2.5});
SoViewpoint41->setOrientation(new float[]{-1.0,-1.0,0.0,0.55});
SoGroup40->addChild(*SoViewpoint41);

SoViewpoint* SoViewpoint42 = new SoViewpoint();
SoViewpoint42->setDescription(QString("From Left View"));
SoViewpoint42->setPosition(new float[]{-2.5,1.5,0.0});
SoViewpoint42->setOrientation(new float[]{0.3,1.0,0.0,-1.57});
SoGroup40->addChild(*SoViewpoint42);

SoViewpoint* SoViewpoint43 = new SoViewpoint();
SoViewpoint43->setDescription(QString("Front Mid View"));
SoViewpoint43->setPosition(new float[]{0.0,0.5,1.25});
SoGroup40->addChild(*SoViewpoint43);

SoViewpoint* SoViewpoint44 = new SoViewpoint();
SoViewpoint44->setDescription(QString("Front Feet View"));
SoViewpoint44->setPosition(new float[]{0.0,0.0,0.75});
SoGroup40->addChild(*SoViewpoint44);

SoViewpoint* SoViewpoint45 = new SoViewpoint();
SoViewpoint45->setDescription(QString("From Right View"));
SoViewpoint45->setPosition(new float[]{1.0,1.0,0.0});
SoViewpoint45->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoGroup40->addChild(*SoViewpoint45);

SoViewpoint* SoViewpoint46 = new SoViewpoint();
SoViewpoint46->setDescription(QString("Front Head View"));
SoViewpoint46->setPosition(new float[]{0.0,1.65,0.75});
SoViewpoint46->setCenterOfRotation(new float[]{0.0,1.65,0.0});
SoGroup40->addChild(*SoViewpoint46);

SoViewpoint* SoViewpoint47 = new SoViewpoint();
SoViewpoint47->setDescription(QString("Front Mid View"));
SoViewpoint47->setPosition(new float[]{0.0,1.0,1.75});
SoGroup40->addChild(*SoViewpoint47);

SoViewpoint* SoViewpoint48 = new SoViewpoint();
SoViewpoint48->setDescription(QString("Rear View"));
SoViewpoint48->setPosition(new float[]{0.0,1.5,-4.0});
SoViewpoint48->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoGroup40->addChild(*SoViewpoint48);

SoViewpoint* SoViewpoint49 = new SoViewpoint();
SoViewpoint49->setDescription(QString("Top View"));
SoViewpoint49->setPosition(new float[]{0.0,4.0,0.0});
SoViewpoint49->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoGroup40->addChild(*SoViewpoint49);

SoViewpoint* SoViewpoint50 = new SoViewpoint();
SoViewpoint50->setDescription(QString("Bottom View"));
SoViewpoint50->setPosition(new float[]{0.0,-4.0,0.0});
SoViewpoint50->setOrientation(new float[]{1.0,0.0,0.0,1.57});
SoGroup40->addChild(*SoViewpoint50);

SoViewpoint* SoViewpoint51 = new SoViewpoint();
SoViewpoint51->setDescription(QString("Right View"));
SoViewpoint51->setPosition(new float[]{4.0,1.5,0.0});
SoViewpoint51->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoGroup40->addChild(*SoViewpoint51);

SoNode33->addChild(*SoGroup40);

SoGroup* SoGroup52 = new SoGroup();
SoGroup52->setDEF(QString("VisualizationShapes"));
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setTranslation(new float[]{0.0,2.1,0.0});
SoTransform53->setScale(new float[]{5.0,5.0,5.0});
SoShape* SoShape54 = new SoShape();
SoShape54->setDEF(QString("jointbox"));
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setAmbientIntensity(0.5);
SoMaterial56->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial56->setShininess(1);
SoVRMLAppearance55->addChild(*SoMaterial56);

SoShape54->addChild(*SoVRMLAppearance55);

SoIndexedFaceSet* SoIndexedFaceSet57 = new SoIndexedFaceSet();
SoIndexedFaceSet57->setCreaseAngle(0.1);
SoIndexedFaceSet57->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoColor* SoColor58 = new SoColor();
SoColor58->setColor(new float[]{1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0}, 18);
SoIndexedFaceSet57->setColor(*SoColor58);

SoCoordinate* SoCoordinate59 = new SoCoordinate();
SoCoordinate59->setDEF(QString("boxCoords"));
SoCoordinate59->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.0157,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet57->setCoord(*SoCoordinate59);

SoShape54->setGeometry(*SoIndexedFaceSet57);

SoTransform53->addChild(*SoShape54);

SoGroup52->addChild(*SoTransform53);

SoTransform* SoTransform60 = new SoTransform();
SoTransform60->setTranslation(new float[]{-0.2,0.773,-0.016});
SoTransform60->setScale(new float[]{0.1,0.1,0.1});
SoShape* SoShape61 = new SoShape();
SoShape61->setDEF(QString("sitebox"));
SoVRMLAppearance* SoVRMLAppearance62 = new SoVRMLAppearance();
SoMaterial* SoMaterial63 = new SoMaterial();
SoMaterial63->setAmbientIntensity(1);
SoMaterial63->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial63->setSpecularColor(new float[]{1.0,0.0,0.0});
SoMaterial63->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoMaterial63->setShininess(0.7);
SoVRMLAppearance62->addChild(*SoMaterial63);

SoShape61->addChild(*SoVRMLAppearance62);

SoIndexedFaceSet* SoIndexedFaceSet64 = new SoIndexedFaceSet();
SoIndexedFaceSet64->setCreaseAngle(0.1);
SoIndexedFaceSet64->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoCoordinate* SoCoordinate65 = new SoCoordinate();
SoCoordinate65->setUSE(QString("boxCoords"));
SoIndexedFaceSet64->setCoord(*SoCoordinate65);

SoShape61->setGeometry(*SoIndexedFaceSet64);

SoTransform60->addChild(*SoShape61);

SoGroup52->addChild(*SoTransform60);

SoTransform* SoTransform66 = new SoTransform();
SoTransform66->setTranslation(new float[]{0.0,0.2,0.0});
SoTransform66->setScale(new float[]{0.1,0.1,0.1});
SoShape* SoShape67 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance68 = new SoVRMLAppearance();
SoVRMLAppearance68->setDEF(QString("SegmentLine"));
SoMaterial* SoMaterial69 = new SoMaterial();
SoMaterial69->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial69->setSpecularColor(new float[]{0.0,1.0,0.0});
SoMaterial69->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance68->addChild(*SoMaterial69);

SoShape67->addChild(*SoVRMLAppearance68);

SoIndexedLineSet* SoIndexedLineSet70 = new SoIndexedLineSet();
SoIndexedLineSet70->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate71 = new SoCoordinate();
SoCoordinate71->setPoint(new float[]{0.0,0.0,0.0,0.0,0.0001,0.0}, 6);
SoIndexedLineSet70->setCoord(*SoCoordinate71);

SoShape67->setGeometry(*SoIndexedLineSet70);

SoTransform66->addChild(*SoShape67);

SoGroup52->addChild(*SoTransform66);

SoTransform* SoTransform72 = new SoTransform();
SoTransform72->setTranslation(new float[]{-0.2,0.773,-0.016});
SoTransform72->setScale(new float[]{0.1,0.1,0.1});
SoShape* SoShape73 = new SoShape();
SoShape73->setDEF(QString("skinsphere"));
SoVRMLAppearance* SoVRMLAppearance74 = new SoVRMLAppearance();
SoMaterial* SoMaterial75 = new SoMaterial();
SoMaterial75->setAmbientIntensity(0.5);
SoMaterial75->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial75->setSpecularColor(new float[]{0.0,1.0,0.0});
SoMaterial75->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoMaterial75->setShininess(1);
SoVRMLAppearance74->addChild(*SoMaterial75);

SoShape73->addChild(*SoVRMLAppearance74);

SoSphere* SoSphere76 = new SoSphere();
SoSphere76->setRadius(0.005);
SoShape73->setGeometry(*SoSphere76);

SoTransform72->addChild(*SoShape73);

SoGroup52->addChild(*SoTransform72);

SoNode33->addChild(*SoGroup52);

SoGroup* SoGroup77 = new SoGroup();
SoGroup77->setDEF(QString("SpecHumanoid"));
SoGroup* SoGroup78 = new SoGroup();
SoGroup78->setDEF(QString("JoeISOHumanoid"));
SoHAnimHumanoid* SoHAnimHumanoid79 = new SoHAnimHumanoid();
SoHAnimHumanoid79->setDEF(QString("Joe_Human"));
SoHAnimHumanoid79->X3DNode::setName(QString("Human"));
SoHAnimHumanoid79->setInfo(new QString[]{QString("humanoidVersion=2.0")}, 1);
SoHAnimJoint* SoHAnimJoint80 = new SoHAnimJoint();
SoHAnimJoint80->setDEF(QString("Joe_HumanoidRoot"));
SoHAnimJoint80->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint80->setTranslation(new float[]{0.0,-0.0293965,0.0});
SoHAnimJoint80->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimSegment* SoHAnimSegment81 = new SoHAnimSegment();
SoHAnimSegment81->setDEF(QString("Joe_sacrum"));
SoHAnimSegment81->X3DNode::setName(QString("sacrum"));
SoTransform* SoTransform82 = new SoTransform();
SoTransform82->setTranslation(new float[]{0.0,0.875,0.0});
SoShape* SoShape83 = new SoShape();
SoShape83->setUSE(QString("jointbox"));
SoTransform82->addChild(*SoShape83);

SoHAnimSegment81->addChild(*SoTransform82);

SoShape* SoShape84 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance85 = new SoVRMLAppearance();
SoVRMLAppearance85->setUSE(QString("SegmentLine"));
SoShape84->addChild(*SoVRMLAppearance85);

SoIndexedLineSet* SoIndexedLineSet86 = new SoIndexedLineSet();
SoIndexedLineSet86->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate87 = new SoCoordinate();
SoCoordinate87->setPoint(new float[]{0.0,0.875,0.0,0.0,0.92,0.0}, 6);
SoIndexedLineSet86->setCoord(*SoCoordinate87);

SoShape84->setGeometry(*SoIndexedLineSet86);

SoHAnimSegment81->addChild(*SoShape84);

SoTransform* SoTransform88 = new SoTransform();
SoTransform88->setTranslation(new float[]{0.0,0.92,0.08});
SoShape* SoShape89 = new SoShape();
SoShape89->setUSE(QString("skinsphere"));
SoTransform88->addChild(*SoShape89);

SoHAnimSegment81->addChild(*SoTransform88);

SoTransform* SoTransform90 = new SoTransform();
SoTransform90->setTranslation(new float[]{0.0,0.87,-0.022});
SoShape* SoShape91 = new SoShape();
SoShape91->setUSE(QString("skinsphere"));
SoTransform90->addChild(*SoShape91);

SoHAnimSegment81->addChild(*SoTransform90);

SoHAnimJoint80->addChildren(*SoHAnimSegment81);

SoHAnimJoint* SoHAnimJoint92 = new SoHAnimJoint();
SoHAnimJoint92->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint92->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint92->setCenter(new float[]{0.0,0.92,0.0});
SoHAnimJoint92->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint92->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
SoHAnimSegment* SoHAnimSegment93 = new SoHAnimSegment();
SoHAnimSegment93->setDEF(QString("Joe_pelvis"));
SoHAnimSegment93->X3DNode::setName(QString("pelvis"));
SoTransform* SoTransform94 = new SoTransform();
SoTransform94->setTranslation(new float[]{0.0,0.9149,0.0016});
SoTransform* SoTransform95 = new SoTransform();
SoShape* SoShape96 = new SoShape();
SoShape96->setUSE(QString("jointbox"));
SoTransform95->addChild(*SoShape96);

SoTransform94->addChild(*SoTransform95);

SoHAnimSegment93->addChild(*SoTransform94);

SoShape* SoShape97 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance98 = new SoVRMLAppearance();
SoVRMLAppearance98->setUSE(QString("SegmentLine"));
SoShape97->addChild(*SoVRMLAppearance98);

SoIndexedLineSet* SoIndexedLineSet99 = new SoIndexedLineSet();
SoIndexedLineSet99->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate100 = new SoCoordinate();
SoCoordinate100->setPoint(new float[]{0.0,0.92,0.0,0.0961,0.9124,0.0,-0.095,0.9171,0.0029,0.0,1.045,-0.095}, 12);
SoIndexedLineSet99->setCoord(*SoCoordinate100);

SoShape97->setGeometry(*SoIndexedLineSet99);

SoHAnimSegment93->addChild(*SoShape97);

SoHAnimSite* SoHAnimSite101 = new SoHAnimSite();
SoHAnimSite101->setDEF(QString("Joe_l_iliocristale"));
SoHAnimSite101->X3DNode::setName(QString("l_iliocristale"));
SoHAnimSite101->setTranslation(new float[]{0.1425,1.065,0.0033});
SoShape* SoShape102 = new SoShape();
SoShape102->setUSE(QString("sitebox"));
SoHAnimSite101->addChild(*SoShape102);

SoHAnimSegment93->addChild(*SoHAnimSite101);

SoHAnimSite* SoHAnimSite103 = new SoHAnimSite();
SoHAnimSite103->setDEF(QString("Joe_l_trochanterion"));
SoHAnimSite103->X3DNode::setName(QString("l_trochanterion"));
SoHAnimSite103->setTranslation(new float[]{0.15,0.9,-0.01});
SoShape* SoShape104 = new SoShape();
SoShape104->setUSE(QString("sitebox"));
SoHAnimSite103->addChild(*SoShape104);

SoHAnimSegment93->addChild(*SoHAnimSite103);

SoHAnimSite* SoHAnimSite105 = new SoHAnimSite();
SoHAnimSite105->setDEF(QString("Joe_r_iliocristale"));
SoHAnimSite105->X3DNode::setName(QString("r_iliocristale"));
SoHAnimSite105->setTranslation(new float[]{-0.1425,1.065,0.0033});
SoShape* SoShape106 = new SoShape();
SoShape106->setUSE(QString("sitebox"));
SoHAnimSite105->addChild(*SoShape106);

SoHAnimSegment93->addChild(*SoHAnimSite105);

SoHAnimSite* SoHAnimSite107 = new SoHAnimSite();
SoHAnimSite107->setDEF(QString("Joe_r_trochanterion"));
SoHAnimSite107->X3DNode::setName(QString("r_trochanterion"));
SoHAnimSite107->setTranslation(new float[]{-0.15,0.9,-0.01});
SoShape* SoShape108 = new SoShape();
SoShape108->setUSE(QString("sitebox"));
SoHAnimSite107->addChild(*SoShape108);

SoHAnimSegment93->addChild(*SoHAnimSite107);

SoHAnimSite* SoHAnimSite109 = new SoHAnimSite();
SoHAnimSite109->setDEF(QString("Joe_l_asis"));
SoHAnimSite109->X3DNode::setName(QString("l_asis"));
SoHAnimSite109->setTranslation(new float[]{0.0935,1.03,0.075});
SoShape* SoShape110 = new SoShape();
SoShape110->setUSE(QString("sitebox"));
SoHAnimSite109->addChild(*SoShape110);

SoHAnimSegment93->addChild(*SoHAnimSite109);

SoHAnimSite* SoHAnimSite111 = new SoHAnimSite();
SoHAnimSite111->setDEF(QString("Joe_r_asis"));
SoHAnimSite111->X3DNode::setName(QString("r_asis"));
SoHAnimSite111->setTranslation(new float[]{-0.0935,1.03,0.075});
SoShape* SoShape112 = new SoShape();
SoShape112->setUSE(QString("sitebox"));
SoHAnimSite111->addChild(*SoShape112);

SoHAnimSegment93->addChild(*SoHAnimSite111);

SoHAnimSite* SoHAnimSite113 = new SoHAnimSite();
SoHAnimSite113->setDEF(QString("Joe_l_psis"));
SoHAnimSite113->X3DNode::setName(QString("l_psis"));
SoHAnimSite113->setTranslation(new float[]{0.0773,1.019,-0.12});
SoShape* SoShape114 = new SoShape();
SoShape114->setUSE(QString("sitebox"));
SoHAnimSite113->addChild(*SoShape114);

SoHAnimSegment93->addChild(*SoHAnimSite113);

SoHAnimSite* SoHAnimSite115 = new SoHAnimSite();
SoHAnimSite115->setDEF(QString("Joe_r_psis"));
SoHAnimSite115->X3DNode::setName(QString("r_psis"));
SoHAnimSite115->setTranslation(new float[]{-0.0773,1.019,-0.12});
SoShape* SoShape116 = new SoShape();
SoShape116->setUSE(QString("sitebox"));
SoHAnimSite115->addChild(*SoShape116);

SoHAnimSegment93->addChild(*SoHAnimSite115);

SoHAnimSite* SoHAnimSite117 = new SoHAnimSite();
SoHAnimSite117->setDEF(QString("Joe_floormarker"));
SoHAnimSite117->X3DNode::setName(QString("floormarker"));
SoTransform* SoTransform118 = new SoTransform();
SoTransform118->setScale(new float[]{3.0,3.0,3.0});
SoShape* SoShape119 = new SoShape();
SoShape119->setUSE(QString("sitebox"));
SoTransform118->addChild(*SoShape119);

SoHAnimSite117->addChild(*SoTransform118);

SoHAnimSegment93->addChild(*SoHAnimSite117);

SoHAnimSite* SoHAnimSite120 = new SoHAnimSite();
SoHAnimSite120->setDEF(QString("Joe_crotch"));
SoHAnimSite120->X3DNode::setName(QString("crotch"));
SoHAnimSite120->setTranslation(new float[]{0.0,0.87,-0.022});
SoShape* SoShape121 = new SoShape();
SoShape121->setUSE(QString("sitebox"));
SoHAnimSite120->addChild(*SoShape121);

SoHAnimSegment93->addChild(*SoHAnimSite120);

SoHAnimJoint92->addChildren(*SoHAnimSegment93);

SoHAnimJoint* SoHAnimJoint122 = new SoHAnimJoint();
SoHAnimJoint122->setDEF(QString("Joe_l_hip"));
SoHAnimJoint122->X3DNode::setName(QString("l_hip"));
SoHAnimJoint122->setRotation(new float[]{-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996});
SoHAnimJoint122->setCenter(new float[]{0.1,0.92,0.0});
SoHAnimJoint122->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint122->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment123 = new SoHAnimSegment();
SoHAnimSegment123->setDEF(QString("Joe_l_thigh"));
SoHAnimSegment123->X3DNode::setName(QString("l_thigh"));
SoTransform* SoTransform124 = new SoTransform();
SoTransform124->setTranslation(new float[]{0.1,0.92,0.0});
SoShape* SoShape125 = new SoShape();
SoShape125->setUSE(QString("jointbox"));
SoTransform124->addChild(*SoShape125);

SoHAnimSegment123->addChild(*SoTransform124);

SoShape* SoShape126 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance127 = new SoVRMLAppearance();
SoVRMLAppearance127->setUSE(QString("SegmentLine"));
SoShape126->addChild(*SoVRMLAppearance127);

SoIndexedLineSet* SoIndexedLineSet128 = new SoIndexedLineSet();
SoIndexedLineSet128->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate129 = new SoCoordinate();
SoCoordinate129->setPoint(new float[]{0.1,0.92,0.0,0.115,0.466,0.0}, 6);
SoIndexedLineSet128->setCoord(*SoCoordinate129);

SoShape126->setGeometry(*SoIndexedLineSet128);

SoHAnimSegment123->addChild(*SoShape126);

SoTransform* SoTransform130 = new SoTransform();
SoTransform130->setTranslation(new float[]{0.1,0.9,0.0775});
SoShape* SoShape131 = new SoShape();
SoShape131->setUSE(QString("skinsphere"));
SoTransform130->addChild(*SoShape131);

SoHAnimSegment123->addChild(*SoTransform130);

SoTransform* SoTransform132 = new SoTransform();
SoTransform132->setTranslation(new float[]{0.079,0.92,-0.14});
SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("skinsphere"));
SoTransform132->addChild(*SoShape133);

SoHAnimSegment123->addChild(*SoTransform132);

SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setTranslation(new float[]{0.171,0.65,0.0});
SoShape* SoShape135 = new SoShape();
SoShape135->setUSE(QString("skinsphere"));
SoTransform134->addChild(*SoShape135);

SoHAnimSegment123->addChild(*SoTransform134);

SoTransform* SoTransform136 = new SoTransform();
SoTransform136->setTranslation(new float[]{0.02,0.65,0.0});
SoShape* SoShape137 = new SoShape();
SoShape137->setUSE(QString("skinsphere"));
SoTransform136->addChild(*SoShape137);

SoHAnimSegment123->addChild(*SoTransform136);

SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setTranslation(new float[]{0.1,0.65,-0.08});
SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("skinsphere"));
SoTransform138->addChild(*SoShape139);

SoHAnimSegment123->addChild(*SoTransform138);

SoTransform* SoTransform140 = new SoTransform();
SoTransform140->setTranslation(new float[]{0.1,0.65,0.07});
SoShape* SoShape141 = new SoShape();
SoShape141->setUSE(QString("skinsphere"));
SoTransform140->addChild(*SoShape141);

SoHAnimSegment123->addChild(*SoTransform140);

SoHAnimSite* SoHAnimSite142 = new SoHAnimSite();
SoHAnimSite142->setDEF(QString("Joe_l_knee_crease"));
SoHAnimSite142->X3DNode::setName(QString("l_knee_crease"));
SoHAnimSite142->setTranslation(new float[]{0.115,0.466,-0.055});
SoShape* SoShape143 = new SoShape();
SoShape143->setUSE(QString("sitebox"));
SoHAnimSite142->addChild(*SoShape143);

SoHAnimSegment123->addChild(*SoHAnimSite142);

SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->setDEF(QString("Joe_l_femoral_lateral_epicn"));
SoHAnimSite144->X3DNode::setName(QString("l_femoral_lateral_epicn"));
SoHAnimSite144->setTranslation(new float[]{0.17,0.466,0.0});
SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("sitebox"));
SoHAnimSite144->addChild(*SoShape145);

SoHAnimSegment123->addChild(*SoHAnimSite144);

SoHAnimSite* SoHAnimSite146 = new SoHAnimSite();
SoHAnimSite146->setDEF(QString("Joe_l_femoral_medial_epicn"));
SoHAnimSite146->X3DNode::setName(QString("l_femoral_medial_epicn"));
SoHAnimSite146->setTranslation(new float[]{0.05,0.466,0.0});
SoShape* SoShape147 = new SoShape();
SoShape147->setUSE(QString("sitebox"));
SoHAnimSite146->addChild(*SoShape147);

SoHAnimSegment123->addChild(*SoHAnimSite146);

SoHAnimJoint122->addChildren(*SoHAnimSegment123);

SoHAnimJoint* SoHAnimJoint148 = new SoHAnimJoint();
SoHAnimJoint148->setDEF(QString("Joe_l_knee"));
SoHAnimJoint148->X3DNode::setName(QString("l_knee"));
SoHAnimJoint148->setRotation(new float[]{1.00000000000001,0.0,0.0,0.224421281773429});
SoHAnimJoint148->setCenter(new float[]{0.115,0.466,0.0});
SoHAnimJoint148->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint148->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment149 = new SoHAnimSegment();
SoHAnimSegment149->setDEF(QString("Joe_l_calf"));
SoHAnimSegment149->X3DNode::setName(QString("l_calf"));
SoTransform* SoTransform150 = new SoTransform();
SoTransform150->setTranslation(new float[]{0.115,0.466,0.0});
SoShape* SoShape151 = new SoShape();
SoShape151->setUSE(QString("jointbox"));
SoTransform150->addChild(*SoShape151);

SoHAnimSegment149->addChild(*SoTransform150);

SoShape* SoShape152 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance153 = new SoVRMLAppearance();
SoVRMLAppearance153->setUSE(QString("SegmentLine"));
SoShape152->addChild(*SoVRMLAppearance153);

SoIndexedLineSet* SoIndexedLineSet154 = new SoIndexedLineSet();
SoIndexedLineSet154->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate155 = new SoCoordinate();
SoCoordinate155->setPoint(new float[]{0.115,0.466,0.0,0.1,0.069,0.0}, 6);
SoIndexedLineSet154->setCoord(*SoCoordinate155);

SoShape152->setGeometry(*SoIndexedLineSet154);

SoHAnimSegment149->addChild(*SoShape152);

SoTransform* SoTransform156 = new SoTransform();
SoTransform156->setTranslation(new float[]{0.115,0.466,0.06});
SoShape* SoShape157 = new SoShape();
SoShape157->setUSE(QString("skinsphere"));
SoTransform156->addChild(*SoShape157);

SoHAnimSegment149->addChild(*SoTransform156);

SoTransform* SoTransform158 = new SoTransform();
SoTransform158->setTranslation(new float[]{0.115,0.466,-0.055});
SoShape* SoShape159 = new SoShape();
SoShape159->setUSE(QString("skinsphere"));
SoTransform158->addChild(*SoShape159);

SoHAnimSegment149->addChild(*SoTransform158);

SoTransform* SoTransform160 = new SoTransform();
SoTransform160->setTranslation(new float[]{0.17,0.466,0.0});
SoShape* SoShape161 = new SoShape();
SoShape161->setUSE(QString("skinsphere"));
SoTransform160->addChild(*SoShape161);

SoHAnimSegment149->addChild(*SoTransform160);

SoTransform* SoTransform162 = new SoTransform();
SoTransform162->setTranslation(new float[]{0.05,0.466,0.0});
SoShape* SoShape163 = new SoShape();
SoShape163->setUSE(QString("skinsphere"));
SoTransform162->addChild(*SoShape163);

SoHAnimSegment149->addChild(*SoTransform162);

SoTransform* SoTransform164 = new SoTransform();
SoTransform164->setTranslation(new float[]{0.17,0.3,0.0});
SoShape* SoShape165 = new SoShape();
SoShape165->setUSE(QString("skinsphere"));
SoTransform164->addChild(*SoShape165);

SoHAnimSegment149->addChild(*SoTransform164);

SoTransform* SoTransform166 = new SoTransform();
SoTransform166->setTranslation(new float[]{0.06,0.3,0.0});
SoShape* SoShape167 = new SoShape();
SoShape167->setUSE(QString("skinsphere"));
SoTransform166->addChild(*SoShape167);

SoHAnimSegment149->addChild(*SoTransform166);

SoTransform* SoTransform168 = new SoTransform();
SoTransform168->setTranslation(new float[]{0.1,0.3,-0.05});
SoShape* SoShape169 = new SoShape();
SoShape169->setUSE(QString("skinsphere"));
SoTransform168->addChild(*SoShape169);

SoHAnimSegment149->addChild(*SoTransform168);

SoTransform* SoTransform170 = new SoTransform();
SoTransform170->setTranslation(new float[]{0.1,0.3,0.05});
SoShape* SoShape171 = new SoShape();
SoShape171->setUSE(QString("skinsphere"));
SoTransform170->addChild(*SoShape171);

SoHAnimSegment149->addChild(*SoTransform170);

SoHAnimSite* SoHAnimSite172 = new SoHAnimSite();
SoHAnimSite172->setDEF(QString("Joe_l_lateral_malleolus"));
SoHAnimSite172->X3DNode::setName(QString("l_lateral_malleolus"));
SoHAnimSite172->setTranslation(new float[]{0.15,0.07,0.0});
SoShape* SoShape173 = new SoShape();
SoShape173->setUSE(QString("sitebox"));
SoHAnimSite172->addChild(*SoShape173);

SoHAnimSegment149->addChild(*SoHAnimSite172);

SoHAnimSite* SoHAnimSite174 = new SoHAnimSite();
SoHAnimSite174->setDEF(QString("Joe_l_medial_malleolus"));
SoHAnimSite174->X3DNode::setName(QString("l_medial_malleolus"));
SoHAnimSite174->setTranslation(new float[]{0.085,0.086,0.0125});
SoShape* SoShape175 = new SoShape();
SoShape175->setUSE(QString("sitebox"));
SoHAnimSite174->addChild(*SoShape175);

SoHAnimSegment149->addChild(*SoHAnimSite174);

SoHAnimJoint148->addChildren(*SoHAnimSegment149);

SoHAnimJoint* SoHAnimJoint176 = new SoHAnimJoint();
SoHAnimJoint176->setDEF(QString("Joe_l_ankle"));
SoHAnimJoint176->X3DNode::setName(QString("l_ankle"));
SoHAnimJoint176->setRotation(new float[]{-1.00000000000007,0.0,0.0,0.0655639608914055});
SoHAnimJoint176->setCenter(new float[]{0.115,0.069,0.0});
SoHAnimJoint176->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint176->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment177 = new SoHAnimSegment();
SoHAnimSegment177->setDEF(QString("Joe_l_hindfoot"));
SoHAnimSegment177->X3DNode::setName(QString("l_hindfoot"));
SoTransform* SoTransform178 = new SoTransform();
SoTransform178->setTranslation(new float[]{0.115,0.069,0.0});
SoShape* SoShape179 = new SoShape();
SoShape179->setUSE(QString("jointbox"));
SoTransform178->addChild(*SoShape179);

SoHAnimSegment177->addChild(*SoTransform178);

SoShape* SoShape180 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance181 = new SoVRMLAppearance();
SoVRMLAppearance181->setUSE(QString("SegmentLine"));
SoShape180->addChild(*SoVRMLAppearance181);

SoIndexedLineSet* SoIndexedLineSet182 = new SoIndexedLineSet();
SoIndexedLineSet182->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate183 = new SoCoordinate();
SoCoordinate183->setPoint(new float[]{0.1,0.069,0.0,0.115,0.031,0.03}, 6);
SoIndexedLineSet182->setCoord(*SoCoordinate183);

SoShape180->setGeometry(*SoIndexedLineSet182);

SoHAnimSegment177->addChild(*SoShape180);

SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setTranslation(new float[]{0.15,0.07,0.0});
SoShape* SoShape185 = new SoShape();
SoShape185->setUSE(QString("skinsphere"));
SoTransform184->addChild(*SoShape185);

SoHAnimSegment177->addChild(*SoTransform184);

SoTransform* SoTransform186 = new SoTransform();
SoTransform186->setTranslation(new float[]{0.085,0.086,0.0125});
SoShape* SoShape187 = new SoShape();
SoShape187->setUSE(QString("skinsphere"));
SoTransform186->addChild(*SoShape187);

SoHAnimSegment177->addChild(*SoTransform186);

SoTransform* SoTransform188 = new SoTransform();
SoTransform188->setTranslation(new float[]{0.115,0.069,-0.045});
SoShape* SoShape189 = new SoShape();
SoShape189->setUSE(QString("skinsphere"));
SoTransform188->addChild(*SoShape189);

SoHAnimSegment177->addChild(*SoTransform188);

SoTransform* SoTransform190 = new SoTransform();
SoTransform190->setTranslation(new float[]{0.117,0.0975,0.0615});
SoShape* SoShape191 = new SoShape();
SoShape191->setUSE(QString("skinsphere"));
SoTransform190->addChild(*SoShape191);

SoHAnimSegment177->addChild(*SoTransform190);

SoHAnimSite* SoHAnimSite192 = new SoHAnimSite();
SoHAnimSite192->setDEF(QString("Joe_l_sphyrion"));
SoHAnimSite192->X3DNode::setName(QString("l_sphyrion"));
SoHAnimSite192->setTranslation(new float[]{0.09,0.056,0.0125});
SoShape* SoShape193 = new SoShape();
SoShape193->setUSE(QString("sitebox"));
SoHAnimSite192->addChild(*SoShape193);

SoHAnimSegment177->addChild(*SoHAnimSite192);

SoHAnimSite* SoHAnimSite194 = new SoHAnimSite();
SoHAnimSite194->setDEF(QString("Joe_l_calcaneous_post"));
SoHAnimSite194->X3DNode::setName(QString("l_calcaneous_post"));
SoHAnimSite194->setTranslation(new float[]{0.115,0.04,-0.055});
SoShape* SoShape195 = new SoShape();
SoShape195->setUSE(QString("sitebox"));
SoHAnimSite194->addChild(*SoShape195);

SoHAnimSegment177->addChild(*SoHAnimSite194);

SoHAnimJoint176->addChildren(*SoHAnimSegment177);

SoHAnimJoint* SoHAnimJoint196 = new SoHAnimJoint();
SoHAnimJoint196->setDEF(QString("Joe_l_subtalar"));
SoHAnimJoint196->X3DNode::setName(QString("l_subtalar"));
SoHAnimJoint196->setCenter(new float[]{0.115,0.031,0.03});
SoHAnimJoint196->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint196->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment197 = new SoHAnimSegment();
SoHAnimSegment197->setDEF(QString("Joe_l_midproximal"));
SoHAnimSegment197->X3DNode::setName(QString("l_midproximal"));
SoTransform* SoTransform198 = new SoTransform();
SoTransform198->setTranslation(new float[]{0.115,0.031,0.03});
SoShape* SoShape199 = new SoShape();
SoShape199->setUSE(QString("jointbox"));
SoTransform198->addChild(*SoShape199);

SoHAnimSegment197->addChild(*SoTransform198);

SoShape* SoShape200 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance201 = new SoVRMLAppearance();
SoVRMLAppearance201->setUSE(QString("SegmentLine"));
SoShape200->addChild(*SoVRMLAppearance201);

SoIndexedLineSet* SoIndexedLineSet202 = new SoIndexedLineSet();
SoIndexedLineSet202->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate203 = new SoCoordinate();
SoCoordinate203->setPoint(new float[]{0.115,0.031,0.03,0.115,0.037,0.09}, 6);
SoIndexedLineSet202->setCoord(*SoCoordinate203);

SoShape200->setGeometry(*SoIndexedLineSet202);

SoHAnimSegment197->addChild(*SoShape200);

SoTransform* SoTransform204 = new SoTransform();
SoTransform204->setTranslation(new float[]{0.1375,0.006,-0.03});
SoShape* SoShape205 = new SoShape();
SoShape205->setUSE(QString("skinsphere"));
SoTransform204->addChild(*SoShape205);

SoHAnimSegment197->addChild(*SoTransform204);

SoTransform* SoTransform206 = new SoTransform();
SoTransform206->setTranslation(new float[]{0.095,0.006,-0.03});
SoShape* SoShape207 = new SoShape();
SoShape207->setUSE(QString("skinsphere"));
SoTransform206->addChild(*SoShape207);

SoHAnimSegment197->addChild(*SoTransform206);

SoTransform* SoTransform208 = new SoTransform();
SoTransform208->setTranslation(new float[]{0.115,0.015,-0.045});
SoShape* SoShape209 = new SoShape();
SoShape209->setUSE(QString("skinsphere"));
SoTransform208->addChild(*SoShape209);

SoHAnimSegment197->addChild(*SoTransform208);

SoHAnimJoint196->addChildren(*SoHAnimSegment197);

SoHAnimJoint* SoHAnimJoint210 = new SoHAnimJoint();
SoHAnimJoint210->setDEF(QString("Joe_l_midtarsal"));
SoHAnimJoint210->X3DNode::setName(QString("l_midtarsal"));
SoHAnimJoint210->setRotation(new float[]{1.00000000000005,0.0,0.0,6.19381467367623});
SoHAnimJoint210->setCenter(new float[]{0.115,0.037,0.09});
SoHAnimJoint210->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint210->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment211 = new SoHAnimSegment();
SoHAnimSegment211->setDEF(QString("Joe_l_middistal"));
SoHAnimSegment211->X3DNode::setName(QString("l_middistal"));
SoTransform* SoTransform212 = new SoTransform();
SoTransform212->setTranslation(new float[]{0.115,0.037,0.09});
SoShape* SoShape213 = new SoShape();
SoShape213->setUSE(QString("jointbox"));
SoTransform212->addChild(*SoShape213);

SoHAnimSegment211->addChild(*SoTransform212);

SoShape* SoShape214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance215 = new SoVRMLAppearance();
SoVRMLAppearance215->setUSE(QString("SegmentLine"));
SoShape214->addChild(*SoVRMLAppearance215);

SoIndexedLineSet* SoIndexedLineSet216 = new SoIndexedLineSet();
SoIndexedLineSet216->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate217 = new SoCoordinate();
SoCoordinate217->setPoint(new float[]{0.115,0.037,0.09,0.115,0.02,0.122}, 6);
SoIndexedLineSet216->setCoord(*SoCoordinate217);

SoShape214->setGeometry(*SoIndexedLineSet216);

SoHAnimSegment211->addChild(*SoShape214);

SoTransform* SoTransform218 = new SoTransform();
SoTransform218->setTranslation(new float[]{0.115,0.06,0.1});
SoShape* SoShape219 = new SoShape();
SoShape219->setUSE(QString("skinsphere"));
SoTransform218->addChild(*SoShape219);

SoHAnimSegment211->addChild(*SoTransform218);

SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setTranslation(new float[]{0.115,0.0,0.07});
SoShape* SoShape221 = new SoShape();
SoShape221->setUSE(QString("skinsphere"));
SoTransform220->addChild(*SoShape221);

SoHAnimSegment211->addChild(*SoTransform220);

SoTransform* SoTransform222 = new SoTransform();
SoTransform222->setTranslation(new float[]{0.165,0.0,0.07});
SoShape* SoShape223 = new SoShape();
SoShape223->setUSE(QString("skinsphere"));
SoTransform222->addChild(*SoShape223);

SoHAnimSegment211->addChild(*SoTransform222);

SoTransform* SoTransform224 = new SoTransform();
SoTransform224->setTranslation(new float[]{0.095,0.0,0.07});
SoShape* SoShape225 = new SoShape();
SoShape225->setUSE(QString("skinsphere"));
SoTransform224->addChild(*SoShape225);

SoHAnimSegment211->addChild(*SoTransform224);

SoHAnimSite* SoHAnimSite226 = new SoHAnimSite();
SoHAnimSite226->setDEF(QString("Joe_l_metatarsal_pha1"));
SoHAnimSite226->X3DNode::setName(QString("l_metatarsal_pha1"));
SoHAnimSite226->setTranslation(new float[]{0.087,0.01,0.122});
SoShape* SoShape227 = new SoShape();
SoShape227->setUSE(QString("sitebox"));
SoHAnimSite226->addChild(*SoShape227);

SoHAnimSegment211->addChild(*SoHAnimSite226);

SoHAnimJoint210->addChildren(*SoHAnimSegment211);

SoHAnimJoint* SoHAnimJoint228 = new SoHAnimJoint();
SoHAnimJoint228->setDEF(QString("Joe_l_metatarsal"));
SoHAnimJoint228->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint228->setRotation(new float[]{1.00000000000253,0.0,0.0,0.0175699446988144});
SoHAnimJoint228->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint228->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint228->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment229 = new SoHAnimSegment();
SoHAnimSegment229->setDEF(QString("Joe_l_forefoot"));
SoHAnimSegment229->X3DNode::setName(QString("l_forefoot"));
SoTransform* SoTransform230 = new SoTransform();
SoTransform230->setTranslation(new float[]{0.115,0.02,0.13});
SoShape* SoShape231 = new SoShape();
SoShape231->setUSE(QString("jointbox"));
SoTransform230->addChild(*SoShape231);

SoHAnimSegment229->addChild(*SoTransform230);

SoShape* SoShape232 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance233 = new SoVRMLAppearance();
SoVRMLAppearance233->setUSE(QString("SegmentLine"));
SoShape232->addChild(*SoVRMLAppearance233);

SoIndexedLineSet* SoIndexedLineSet234 = new SoIndexedLineSet();
SoIndexedLineSet234->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate235 = new SoCoordinate();
SoCoordinate235->setPoint(new float[]{0.115,0.02,0.122,0.132,0.013,0.19}, 6);
SoIndexedLineSet234->setCoord(*SoCoordinate235);

SoShape232->setGeometry(*SoIndexedLineSet234);

SoHAnimSegment229->addChild(*SoShape232);

SoTransform* SoTransform236 = new SoTransform();
SoTransform236->setTranslation(new float[]{0.115,0.04,0.13});
SoShape* SoShape237 = new SoShape();
SoShape237->setUSE(QString("skinsphere"));
SoTransform236->addChild(*SoShape237);

SoHAnimSegment229->addChild(*SoTransform236);

SoTransform* SoTransform238 = new SoTransform();
SoTransform238->setTranslation(new float[]{0.125,0.0,0.12});
SoShape* SoShape239 = new SoShape();
SoShape239->setUSE(QString("skinsphere"));
SoTransform238->addChild(*SoShape239);

SoHAnimSegment229->addChild(*SoTransform238);

SoTransform* SoTransform240 = new SoTransform();
SoTransform240->setTranslation(new float[]{0.165,0.0,0.12});
SoShape* SoShape241 = new SoShape();
SoShape241->setUSE(QString("skinsphere"));
SoTransform240->addChild(*SoShape241);

SoHAnimSegment229->addChild(*SoTransform240);

SoTransform* SoTransform242 = new SoTransform();
SoTransform242->setTranslation(new float[]{0.087,0.0,0.122});
SoShape* SoShape243 = new SoShape();
SoShape243->setUSE(QString("skinsphere"));
SoTransform242->addChild(*SoShape243);

SoHAnimSegment229->addChild(*SoTransform242);

SoTransform* SoTransform244 = new SoTransform();
SoTransform244->setTranslation(new float[]{0.09,0.012,0.188});
SoShape* SoShape245 = new SoShape();
SoShape245->setUSE(QString("skinsphere"));
SoTransform244->addChild(*SoShape245);

SoHAnimSegment229->addChild(*SoTransform244);

SoTransform* SoTransform246 = new SoTransform();
SoTransform246->setTranslation(new float[]{0.11,0.011,0.19});
SoShape* SoShape247 = new SoShape();
SoShape247->setUSE(QString("skinsphere"));
SoTransform246->addChild(*SoShape247);

SoHAnimSegment229->addChild(*SoTransform246);

SoTransform* SoTransform248 = new SoTransform();
SoTransform248->setTranslation(new float[]{0.128,0.011,0.185});
SoShape* SoShape249 = new SoShape();
SoShape249->setUSE(QString("skinsphere"));
SoTransform248->addChild(*SoShape249);

SoHAnimSegment229->addChild(*SoTransform248);

SoTransform* SoTransform250 = new SoTransform();
SoTransform250->setTranslation(new float[]{0.142,0.011,0.178});
SoShape* SoShape251 = new SoShape();
SoShape251->setUSE(QString("skinsphere"));
SoTransform250->addChild(*SoShape251);

SoHAnimSegment229->addChild(*SoTransform250);

SoTransform* SoTransform252 = new SoTransform();
SoTransform252->setTranslation(new float[]{0.154,0.01,0.168});
SoShape* SoShape253 = new SoShape();
SoShape253->setUSE(QString("skinsphere"));
SoTransform252->addChild(*SoShape253);

SoHAnimSegment229->addChild(*SoTransform252);

SoHAnimSite* SoHAnimSite254 = new SoHAnimSite();
SoHAnimSite254->setDEF(QString("Joe_l_metatarsal_pha5"));
SoHAnimSite254->X3DNode::setName(QString("l_metatarsal_pha5"));
SoHAnimSite254->setTranslation(new float[]{0.165,0.01,0.12});
SoShape* SoShape255 = new SoShape();
SoShape255->setUSE(QString("sitebox"));
SoHAnimSite254->addChild(*SoShape255);

SoHAnimSegment229->addChild(*SoHAnimSite254);

SoHAnimSite* SoHAnimSite256 = new SoHAnimSite();
SoHAnimSite256->setDEF(QString("Joe_l_digit2"));
SoHAnimSite256->X3DNode::setName(QString("l_digit2"));
SoHAnimSite256->setTranslation(new float[]{0.11,0.011,0.19});
SoShape* SoShape257 = new SoShape();
SoShape257->setUSE(QString("sitebox"));
SoHAnimSite256->addChild(*SoShape257);

SoHAnimSegment229->addChild(*SoHAnimSite256);

SoHAnimJoint228->addChildren(*SoHAnimSegment229);

SoHAnimJoint210->addChildren(*SoHAnimJoint228);

SoHAnimJoint196->addChildren(*SoHAnimJoint210);

SoHAnimJoint176->addChildren(*SoHAnimJoint196);

SoHAnimJoint148->addChildren(*SoHAnimJoint176);

SoHAnimJoint122->addChildren(*SoHAnimJoint148);

SoHAnimJoint92->addChildren(*SoHAnimJoint122);

SoHAnimJoint* SoHAnimJoint258 = new SoHAnimJoint();
SoHAnimJoint258->setDEF(QString("Joe_r_hip"));
SoHAnimJoint258->X3DNode::setName(QString("r_hip"));
SoHAnimJoint258->setRotation(new float[]{0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696});
SoHAnimJoint258->setCenter(new float[]{-0.1,0.92,0.0});
SoHAnimJoint258->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101}, 6);
SoHAnimJoint258->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment259 = new SoHAnimSegment();
SoHAnimSegment259->setDEF(QString("Joe_r_thigh"));
SoHAnimSegment259->X3DNode::setName(QString("r_thigh"));
SoTransform* SoTransform260 = new SoTransform();
SoTransform260->setTranslation(new float[]{-0.1,0.92,0.0});
SoShape* SoShape261 = new SoShape();
SoShape261->setUSE(QString("jointbox"));
SoTransform260->addChild(*SoShape261);

SoHAnimSegment259->addChild(*SoTransform260);

SoShape* SoShape262 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance263 = new SoVRMLAppearance();
SoVRMLAppearance263->setUSE(QString("SegmentLine"));
SoShape262->addChild(*SoVRMLAppearance263);

SoIndexedLineSet* SoIndexedLineSet264 = new SoIndexedLineSet();
SoIndexedLineSet264->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate265 = new SoCoordinate();
SoCoordinate265->setPoint(new float[]{-0.1,0.92,0.0,-0.1,0.4913,0.0}, 6);
SoIndexedLineSet264->setCoord(*SoCoordinate265);

SoShape262->setGeometry(*SoIndexedLineSet264);

SoHAnimSegment259->addChild(*SoShape262);

SoTransform* SoTransform266 = new SoTransform();
SoTransform266->setTranslation(new float[]{-0.079,0.92,-0.14});
SoShape* SoShape267 = new SoShape();
SoShape267->setUSE(QString("skinsphere"));
SoTransform266->addChild(*SoShape267);

SoHAnimSegment259->addChild(*SoTransform266);

SoTransform* SoTransform268 = new SoTransform();
SoTransform268->setTranslation(new float[]{-0.1,0.9,0.075});
SoShape* SoShape269 = new SoShape();
SoShape269->setUSE(QString("skinsphere"));
SoTransform268->addChild(*SoShape269);

SoHAnimSegment259->addChild(*SoTransform268);

SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setTranslation(new float[]{-0.171,0.65,0.0});
SoShape* SoShape271 = new SoShape();
SoShape271->setUSE(QString("skinsphere"));
SoTransform270->addChild(*SoShape271);

SoHAnimSegment259->addChild(*SoTransform270);

SoTransform* SoTransform272 = new SoTransform();
SoTransform272->setTranslation(new float[]{-0.02,0.65,0.0});
SoShape* SoShape273 = new SoShape();
SoShape273->setUSE(QString("skinsphere"));
SoTransform272->addChild(*SoShape273);

SoHAnimSegment259->addChild(*SoTransform272);

SoTransform* SoTransform274 = new SoTransform();
SoTransform274->setTranslation(new float[]{-0.1,0.65,-0.08});
SoShape* SoShape275 = new SoShape();
SoShape275->setUSE(QString("skinsphere"));
SoTransform274->addChild(*SoShape275);

SoHAnimSegment259->addChild(*SoTransform274);

SoTransform* SoTransform276 = new SoTransform();
SoTransform276->setTranslation(new float[]{-0.1,0.65,0.07});
SoShape* SoShape277 = new SoShape();
SoShape277->setUSE(QString("skinsphere"));
SoTransform276->addChild(*SoShape277);

SoHAnimSegment259->addChild(*SoTransform276);

SoHAnimSite* SoHAnimSite278 = new SoHAnimSite();
SoHAnimSite278->setDEF(QString("Joe_r_knee_crease"));
SoHAnimSite278->X3DNode::setName(QString("r_knee_crease"));
SoHAnimSite278->setTranslation(new float[]{-0.115,0.466,-0.055});
SoShape* SoShape279 = new SoShape();
SoShape279->setUSE(QString("sitebox"));
SoHAnimSite278->addChild(*SoShape279);

SoHAnimSegment259->addChild(*SoHAnimSite278);

SoHAnimSite* SoHAnimSite280 = new SoHAnimSite();
SoHAnimSite280->setDEF(QString("Joe_r_femoral_lateral_epicn"));
SoHAnimSite280->X3DNode::setName(QString("r_femoral_lateral_epicn"));
SoHAnimSite280->setTranslation(new float[]{-0.17,0.466,0.0});
SoShape* SoShape281 = new SoShape();
SoShape281->setUSE(QString("sitebox"));
SoHAnimSite280->addChild(*SoShape281);

SoHAnimSegment259->addChild(*SoHAnimSite280);

SoHAnimSite* SoHAnimSite282 = new SoHAnimSite();
SoHAnimSite282->setDEF(QString("Joe_r_femoral_medial_epicn"));
SoHAnimSite282->X3DNode::setName(QString("r_femoral_medial_epicn"));
SoHAnimSite282->setTranslation(new float[]{-0.05,0.466,0.0});
SoShape* SoShape283 = new SoShape();
SoShape283->setUSE(QString("sitebox"));
SoHAnimSite282->addChild(*SoShape283);

SoHAnimSegment259->addChild(*SoHAnimSite282);

SoHAnimJoint258->addChildren(*SoHAnimSegment259);

SoHAnimJoint* SoHAnimJoint284 = new SoHAnimJoint();
SoHAnimJoint284->setDEF(QString("Joe_r_knee"));
SoHAnimJoint284->X3DNode::setName(QString("r_knee"));
SoHAnimJoint284->setRotation(new float[]{0.999999999999952,0.0,0.0,0.086543259681602});
SoHAnimJoint284->setCenter(new float[]{-0.05,0.466,0.0});
SoHAnimJoint284->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369}, 8);
SoHAnimJoint284->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment285 = new SoHAnimSegment();
SoHAnimSegment285->setDEF(QString("Joe_r_calf"));
SoHAnimSegment285->X3DNode::setName(QString("r_calf"));
SoTransform* SoTransform286 = new SoTransform();
SoTransform286->setTranslation(new float[]{-0.1,0.4913,0.0});
SoShape* SoShape287 = new SoShape();
SoShape287->setUSE(QString("jointbox"));
SoTransform286->addChild(*SoShape287);

SoHAnimSegment285->addChild(*SoTransform286);

SoShape* SoShape288 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance289 = new SoVRMLAppearance();
SoVRMLAppearance289->setUSE(QString("SegmentLine"));
SoShape288->addChild(*SoVRMLAppearance289);

SoIndexedLineSet* SoIndexedLineSet290 = new SoIndexedLineSet();
SoIndexedLineSet290->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate291 = new SoCoordinate();
SoCoordinate291->setPoint(new float[]{-0.1,0.4913,0.0,-0.1,0.0712,0.0}, 6);
SoIndexedLineSet290->setCoord(*SoCoordinate291);

SoShape288->setGeometry(*SoIndexedLineSet290);

SoHAnimSegment285->addChild(*SoShape288);

SoTransform* SoTransform292 = new SoTransform();
SoTransform292->setTranslation(new float[]{-0.115,0.466,0.06});
SoShape* SoShape293 = new SoShape();
SoShape293->setUSE(QString("skinsphere"));
SoTransform292->addChild(*SoShape293);

SoHAnimSegment285->addChild(*SoTransform292);

SoTransform* SoTransform294 = new SoTransform();
SoTransform294->setTranslation(new float[]{-0.115,0.466,-0.055});
SoShape* SoShape295 = new SoShape();
SoShape295->setUSE(QString("skinsphere"));
SoTransform294->addChild(*SoShape295);

SoHAnimSegment285->addChild(*SoTransform294);

SoTransform* SoTransform296 = new SoTransform();
SoTransform296->setTranslation(new float[]{-0.17,0.466,0.0});
SoShape* SoShape297 = new SoShape();
SoShape297->setUSE(QString("skinsphere"));
SoTransform296->addChild(*SoShape297);

SoHAnimSegment285->addChild(*SoTransform296);

SoTransform* SoTransform298 = new SoTransform();
SoTransform298->setTranslation(new float[]{-0.05,0.466,0.0});
SoShape* SoShape299 = new SoShape();
SoShape299->setUSE(QString("skinsphere"));
SoTransform298->addChild(*SoShape299);

SoHAnimSegment285->addChild(*SoTransform298);

SoTransform* SoTransform300 = new SoTransform();
SoTransform300->setTranslation(new float[]{-0.17,0.3,0.0});
SoShape* SoShape301 = new SoShape();
SoShape301->setUSE(QString("skinsphere"));
SoTransform300->addChild(*SoShape301);

SoHAnimSegment285->addChild(*SoTransform300);

SoTransform* SoTransform302 = new SoTransform();
SoTransform302->setTranslation(new float[]{-0.06,0.3,0.0});
SoShape* SoShape303 = new SoShape();
SoShape303->setUSE(QString("skinsphere"));
SoTransform302->addChild(*SoShape303);

SoHAnimSegment285->addChild(*SoTransform302);

SoTransform* SoTransform304 = new SoTransform();
SoTransform304->setTranslation(new float[]{-0.1,0.3,-0.05});
SoShape* SoShape305 = new SoShape();
SoShape305->setUSE(QString("skinsphere"));
SoTransform304->addChild(*SoShape305);

SoHAnimSegment285->addChild(*SoTransform304);

SoTransform* SoTransform306 = new SoTransform();
SoTransform306->setTranslation(new float[]{-0.1,0.3,0.05});
SoShape* SoShape307 = new SoShape();
SoShape307->setUSE(QString("skinsphere"));
SoTransform306->addChild(*SoShape307);

SoHAnimSegment285->addChild(*SoTransform306);

SoHAnimSite* SoHAnimSite308 = new SoHAnimSite();
SoHAnimSite308->setDEF(QString("Joe_r_lateral_malleolus"));
SoHAnimSite308->X3DNode::setName(QString("r_lateral_malleolus"));
SoHAnimSite308->setTranslation(new float[]{-0.15,0.07,0.0});
SoShape* SoShape309 = new SoShape();
SoShape309->setUSE(QString("sitebox"));
SoHAnimSite308->addChild(*SoShape309);

SoHAnimSegment285->addChild(*SoHAnimSite308);

SoHAnimSite* SoHAnimSite310 = new SoHAnimSite();
SoHAnimSite310->setDEF(QString("Joe_r_medial_malleolus"));
SoHAnimSite310->X3DNode::setName(QString("r_medial_malleolus"));
SoHAnimSite310->setTranslation(new float[]{-0.085,0.086,0.0125});
SoShape* SoShape311 = new SoShape();
SoShape311->setUSE(QString("sitebox"));
SoHAnimSite310->addChild(*SoShape311);

SoHAnimSegment285->addChild(*SoHAnimSite310);

SoHAnimJoint284->addChildren(*SoHAnimSegment285);

SoHAnimJoint* SoHAnimJoint312 = new SoHAnimJoint();
SoHAnimJoint312->setDEF(QString("Joe_r_ankle"));
SoHAnimJoint312->X3DNode::setName(QString("r_ankle"));
SoHAnimJoint312->setRotation(new float[]{-1.00000000000001,0.0,0.0,0.337435958789841});
SoHAnimJoint312->setCenter(new float[]{-0.115,0.069,0.0});
SoHAnimJoint312->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint312->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment313 = new SoHAnimSegment();
SoHAnimSegment313->setDEF(QString("Joe_r_hindfoot"));
SoHAnimSegment313->X3DNode::setName(QString("r_hindfoot"));
SoTransform* SoTransform314 = new SoTransform();
SoTransform314->setTranslation(new float[]{-0.1,0.0712,0.0});
SoShape* SoShape315 = new SoShape();
SoShape315->setUSE(QString("jointbox"));
SoTransform314->addChild(*SoShape315);

SoHAnimSegment313->addChild(*SoTransform314);

SoShape* SoShape316 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance317 = new SoVRMLAppearance();
SoVRMLAppearance317->setUSE(QString("SegmentLine"));
SoShape316->addChild(*SoVRMLAppearance317);

SoIndexedLineSet* SoIndexedLineSet318 = new SoIndexedLineSet();
SoIndexedLineSet318->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate319 = new SoCoordinate();
SoCoordinate319->setPoint(new float[]{-0.1,0.0712,0.0,-0.1,0.015,-0.01}, 6);
SoIndexedLineSet318->setCoord(*SoCoordinate319);

SoShape316->setGeometry(*SoIndexedLineSet318);

SoHAnimSegment313->addChild(*SoShape316);

SoTransform* SoTransform320 = new SoTransform();
SoTransform320->setTranslation(new float[]{-0.15,0.07,0.0});
SoShape* SoShape321 = new SoShape();
SoShape321->setUSE(QString("skinsphere"));
SoTransform320->addChild(*SoShape321);

SoHAnimSegment313->addChild(*SoTransform320);

SoTransform* SoTransform322 = new SoTransform();
SoTransform322->setTranslation(new float[]{-0.085,0.086,0.0125});
SoShape* SoShape323 = new SoShape();
SoShape323->setUSE(QString("skinsphere"));
SoTransform322->addChild(*SoShape323);

SoHAnimSegment313->addChild(*SoTransform322);

SoTransform* SoTransform324 = new SoTransform();
SoTransform324->setTranslation(new float[]{-0.115,0.069,-0.045});
SoShape* SoShape325 = new SoShape();
SoShape325->setUSE(QString("skinsphere"));
SoTransform324->addChild(*SoShape325);

SoHAnimSegment313->addChild(*SoTransform324);

SoTransform* SoTransform326 = new SoTransform();
SoTransform326->setTranslation(new float[]{-0.117,0.0975,0.0615});
SoShape* SoShape327 = new SoShape();
SoShape327->setUSE(QString("skinsphere"));
SoTransform326->addChild(*SoShape327);

SoHAnimSegment313->addChild(*SoTransform326);

SoHAnimSite* SoHAnimSite328 = new SoHAnimSite();
SoHAnimSite328->setDEF(QString("Joe_r_sphyrion"));
SoHAnimSite328->X3DNode::setName(QString("r_sphyrion"));
SoHAnimSite328->setTranslation(new float[]{-0.09,0.056,0.0125});
SoShape* SoShape329 = new SoShape();
SoShape329->setUSE(QString("sitebox"));
SoHAnimSite328->addChild(*SoShape329);

SoHAnimSegment313->addChild(*SoHAnimSite328);

SoHAnimSite* SoHAnimSite330 = new SoHAnimSite();
SoHAnimSite330->setDEF(QString("Joe_r_calcaneous_post"));
SoHAnimSite330->X3DNode::setName(QString("r_calcaneous_post"));
SoHAnimSite330->setTranslation(new float[]{-0.115,0.04,-0.055});
SoShape* SoShape331 = new SoShape();
SoShape331->setUSE(QString("sitebox"));
SoHAnimSite330->addChild(*SoShape331);

SoHAnimSegment313->addChild(*SoHAnimSite330);

SoHAnimJoint312->addChildren(*SoHAnimSegment313);

SoHAnimJoint* SoHAnimJoint332 = new SoHAnimJoint();
SoHAnimJoint332->setDEF(QString("Joe_r_subtalar"));
SoHAnimJoint332->X3DNode::setName(QString("r_subtalar"));
SoHAnimJoint332->setRotation(new float[]{1.00000000000014,0.0,0.0,0.0816433505734676});
SoHAnimJoint332->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint332->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint332->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment333 = new SoHAnimSegment();
SoHAnimSegment333->setDEF(QString("Joe_r_midproximal"));
SoHAnimSegment333->X3DNode::setName(QString("r_midproximal"));
SoTransform* SoTransform334 = new SoTransform();
SoTransform334->setTranslation(new float[]{-0.1,0.015,-0.01});
SoShape* SoShape335 = new SoShape();
SoShape335->setUSE(QString("jointbox"));
SoTransform334->addChild(*SoShape335);

SoHAnimSegment333->addChild(*SoTransform334);

SoShape* SoShape336 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance337 = new SoVRMLAppearance();
SoVRMLAppearance337->setUSE(QString("SegmentLine"));
SoShape336->addChild(*SoVRMLAppearance337);

SoIndexedLineSet* SoIndexedLineSet338 = new SoIndexedLineSet();
SoIndexedLineSet338->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate339 = new SoCoordinate();
SoCoordinate339->setPoint(new float[]{-0.1,0.015,-0.01,-0.1,0.02,0.07}, 6);
SoIndexedLineSet338->setCoord(*SoCoordinate339);

SoShape336->setGeometry(*SoIndexedLineSet338);

SoHAnimSegment333->addChild(*SoShape336);

SoTransform* SoTransform340 = new SoTransform();
SoTransform340->setTranslation(new float[]{-0.1375,0.006,-0.03});
SoShape* SoShape341 = new SoShape();
SoShape341->setUSE(QString("skinsphere"));
SoTransform340->addChild(*SoShape341);

SoHAnimSegment333->addChild(*SoTransform340);

SoTransform* SoTransform342 = new SoTransform();
SoTransform342->setTranslation(new float[]{-0.095,0.006,-0.03});
SoShape* SoShape343 = new SoShape();
SoShape343->setUSE(QString("skinsphere"));
SoTransform342->addChild(*SoShape343);

SoHAnimSegment333->addChild(*SoTransform342);

SoTransform* SoTransform344 = new SoTransform();
SoTransform344->setTranslation(new float[]{-0.095,0.006,-0.03});
SoShape* SoShape345 = new SoShape();
SoShape345->setUSE(QString("skinsphere"));
SoTransform344->addChild(*SoShape345);

SoHAnimSegment333->addChild(*SoTransform344);

SoHAnimJoint332->addChildren(*SoHAnimSegment333);

SoHAnimJoint* SoHAnimJoint346 = new SoHAnimJoint();
SoHAnimJoint346->setDEF(QString("Joe_r_midtarsal"));
SoHAnimJoint346->X3DNode::setName(QString("r_midtarsal"));
SoHAnimJoint346->setRotation(new float[]{-1.00000000000001,0.0,0.0,0.14271113543743});
SoHAnimJoint346->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint346->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint346->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment347 = new SoHAnimSegment();
SoHAnimSegment347->setDEF(QString("Joe_r_middistal"));
SoHAnimSegment347->X3DNode::setName(QString("r_middistal"));
SoTransform* SoTransform348 = new SoTransform();
SoTransform348->setTranslation(new float[]{-0.1,0.02,0.07});
SoShape* SoShape349 = new SoShape();
SoShape349->setUSE(QString("jointbox"));
SoTransform348->addChild(*SoShape349);

SoHAnimSegment347->addChild(*SoTransform348);

SoShape* SoShape350 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance351 = new SoVRMLAppearance();
SoVRMLAppearance351->setUSE(QString("SegmentLine"));
SoShape350->addChild(*SoVRMLAppearance351);

SoIndexedLineSet* SoIndexedLineSet352 = new SoIndexedLineSet();
SoIndexedLineSet352->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate353 = new SoCoordinate();
SoCoordinate353->setPoint(new float[]{-0.1,0.02,0.07,-0.1,0.01,0.14}, 6);
SoIndexedLineSet352->setCoord(*SoCoordinate353);

SoShape350->setGeometry(*SoIndexedLineSet352);

SoHAnimSegment347->addChild(*SoShape350);

SoTransform* SoTransform354 = new SoTransform();
SoTransform354->setTranslation(new float[]{-0.115,0.06,0.1});
SoShape* SoShape355 = new SoShape();
SoShape355->setUSE(QString("skinsphere"));
SoTransform354->addChild(*SoShape355);

SoHAnimSegment347->addChild(*SoTransform354);

SoTransform* SoTransform356 = new SoTransform();
SoTransform356->setTranslation(new float[]{-0.115,0.0,0.07});
SoShape* SoShape357 = new SoShape();
SoShape357->setUSE(QString("skinsphere"));
SoTransform356->addChild(*SoShape357);

SoHAnimSegment347->addChild(*SoTransform356);

SoTransform* SoTransform358 = new SoTransform();
SoTransform358->setTranslation(new float[]{-0.165,0.0,0.07});
SoShape* SoShape359 = new SoShape();
SoShape359->setUSE(QString("skinsphere"));
SoTransform358->addChild(*SoShape359);

SoHAnimSegment347->addChild(*SoTransform358);

SoTransform* SoTransform360 = new SoTransform();
SoTransform360->setTranslation(new float[]{-0.165,0.0,0.07});
SoShape* SoShape361 = new SoShape();
SoShape361->setUSE(QString("skinsphere"));
SoTransform360->addChild(*SoShape361);

SoHAnimSegment347->addChild(*SoTransform360);

SoHAnimSite* SoHAnimSite362 = new SoHAnimSite();
SoHAnimSite362->setDEF(QString("Joe_r_metatarsal_pha1"));
SoHAnimSite362->X3DNode::setName(QString("r_metatarsal_pha1"));
SoHAnimSite362->setTranslation(new float[]{-0.115,0.02,0.122});
SoShape* SoShape363 = new SoShape();
SoShape363->setUSE(QString("sitebox"));
SoHAnimSite362->addChild(*SoShape363);

SoHAnimSegment347->addChild(*SoHAnimSite362);

SoHAnimJoint346->addChildren(*SoHAnimSegment347);

SoHAnimJoint* SoHAnimJoint364 = new SoHAnimJoint();
SoHAnimJoint364->setDEF(QString("Joe_r_metatarsal"));
SoHAnimJoint364->X3DNode::setName(QString("r_metatarsal"));
SoHAnimJoint364->setRotation(new float[]{-1.00000000000001,0.0,0.0,0.264860122523209});
SoHAnimJoint364->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint364->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint364->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment365 = new SoHAnimSegment();
SoHAnimSegment365->setDEF(QString("Joe_r_forefoot"));
SoHAnimSegment365->X3DNode::setName(QString("r_forefoot"));
SoTransform* SoTransform366 = new SoTransform();
SoTransform366->setTranslation(new float[]{-0.1086,0.01,0.14});
SoShape* SoShape367 = new SoShape();
SoShape367->setUSE(QString("jointbox"));
SoTransform366->addChild(*SoShape367);

SoHAnimSegment365->addChild(*SoTransform366);

SoShape* SoShape368 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance369 = new SoVRMLAppearance();
SoVRMLAppearance369->setUSE(QString("SegmentLine"));
SoShape368->addChild(*SoVRMLAppearance369);

SoIndexedLineSet* SoIndexedLineSet370 = new SoIndexedLineSet();
SoIndexedLineSet370->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate371 = new SoCoordinate();
SoCoordinate371->setPoint(new float[]{-0.1,0.01,0.14,-0.1043,0.0016,0.2}, 6);
SoIndexedLineSet370->setCoord(*SoCoordinate371);

SoShape368->setGeometry(*SoIndexedLineSet370);

SoHAnimSegment365->addChild(*SoShape368);

SoTransform* SoTransform372 = new SoTransform();
SoTransform372->setTranslation(new float[]{-0.115,0.04,0.13});
SoShape* SoShape373 = new SoShape();
SoShape373->setUSE(QString("skinsphere"));
SoTransform372->addChild(*SoShape373);

SoHAnimSegment365->addChild(*SoTransform372);

SoTransform* SoTransform374 = new SoTransform();
SoTransform374->setTranslation(new float[]{-0.125,0.0,0.12});
SoShape* SoShape375 = new SoShape();
SoShape375->setUSE(QString("skinsphere"));
SoTransform374->addChild(*SoShape375);

SoHAnimSegment365->addChild(*SoTransform374);

SoTransform* SoTransform376 = new SoTransform();
SoTransform376->setTranslation(new float[]{-0.165,0.0,0.12});
SoShape* SoShape377 = new SoShape();
SoShape377->setUSE(QString("skinsphere"));
SoTransform376->addChild(*SoShape377);

SoHAnimSegment365->addChild(*SoTransform376);

SoTransform* SoTransform378 = new SoTransform();
SoTransform378->setTranslation(new float[]{-0.087,0.0,0.122});
SoShape* SoShape379 = new SoShape();
SoShape379->setUSE(QString("skinsphere"));
SoTransform378->addChild(*SoShape379);

SoHAnimSegment365->addChild(*SoTransform378);

SoTransform* SoTransform380 = new SoTransform();
SoTransform380->setTranslation(new float[]{-0.09,0.012,0.188});
SoShape* SoShape381 = new SoShape();
SoShape381->setUSE(QString("skinsphere"));
SoTransform380->addChild(*SoShape381);

SoHAnimSegment365->addChild(*SoTransform380);

SoTransform* SoTransform382 = new SoTransform();
SoTransform382->setTranslation(new float[]{-0.11,0.011,0.19});
SoShape* SoShape383 = new SoShape();
SoShape383->setUSE(QString("skinsphere"));
SoTransform382->addChild(*SoShape383);

SoHAnimSegment365->addChild(*SoTransform382);

SoTransform* SoTransform384 = new SoTransform();
SoTransform384->setTranslation(new float[]{-0.128,0.011,0.185});
SoShape* SoShape385 = new SoShape();
SoShape385->setUSE(QString("skinsphere"));
SoTransform384->addChild(*SoShape385);

SoHAnimSegment365->addChild(*SoTransform384);

SoTransform* SoTransform386 = new SoTransform();
SoTransform386->setTranslation(new float[]{-0.142,0.011,0.178});
SoShape* SoShape387 = new SoShape();
SoShape387->setUSE(QString("skinsphere"));
SoTransform386->addChild(*SoShape387);

SoHAnimSegment365->addChild(*SoTransform386);

SoTransform* SoTransform388 = new SoTransform();
SoTransform388->setTranslation(new float[]{-0.154,0.01,0.168});
SoShape* SoShape389 = new SoShape();
SoShape389->setUSE(QString("skinsphere"));
SoTransform388->addChild(*SoShape389);

SoHAnimSegment365->addChild(*SoTransform388);

SoHAnimSite* SoHAnimSite390 = new SoHAnimSite();
SoHAnimSite390->setDEF(QString("Joe_r_metatarsal_pha5"));
SoHAnimSite390->X3DNode::setName(QString("r_metatarsal_pha5"));
SoHAnimSite390->setTranslation(new float[]{-0.165,0.01,0.12});
SoShape* SoShape391 = new SoShape();
SoShape391->setUSE(QString("sitebox"));
SoHAnimSite390->addChild(*SoShape391);

SoHAnimSegment365->addChild(*SoHAnimSite390);

SoHAnimSite* SoHAnimSite392 = new SoHAnimSite();
SoHAnimSite392->setDEF(QString("Joe_r_digit2"));
SoHAnimSite392->X3DNode::setName(QString("r_digit2"));
SoHAnimSite392->setTranslation(new float[]{-0.11,0.011,0.19});
SoShape* SoShape393 = new SoShape();
SoShape393->setUSE(QString("sitebox"));
SoHAnimSite392->addChild(*SoShape393);

SoHAnimSegment365->addChild(*SoHAnimSite392);

SoHAnimJoint364->addChildren(*SoHAnimSegment365);

SoHAnimJoint346->addChildren(*SoHAnimJoint364);

SoHAnimJoint332->addChildren(*SoHAnimJoint346);

SoHAnimJoint312->addChildren(*SoHAnimJoint332);

SoHAnimJoint284->addChildren(*SoHAnimJoint312);

SoHAnimJoint258->addChildren(*SoHAnimJoint284);

SoHAnimJoint92->addChildren(*SoHAnimJoint258);

SoHAnimJoint80->addChildren(*SoHAnimJoint92);

SoHAnimJoint* SoHAnimJoint394 = new SoHAnimJoint();
SoHAnimJoint394->setDEF(QString("Joe_vl5"));
SoHAnimJoint394->X3DNode::setName(QString("vl5"));
SoHAnimJoint394->setRotation(new float[]{-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253});
SoHAnimJoint394->setCenter(new float[]{0.0,1.045,-0.095});
SoHAnimJoint394->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint394->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment395 = new SoHAnimSegment();
SoHAnimSegment395->setDEF(QString("Joe_toPelvisMarker"));
SoHAnimSegment395->X3DNode::setName(QString("toPelvis"));
SoShape* SoShape396 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance397 = new SoVRMLAppearance();
SoVRMLAppearance397->setUSE(QString("SegmentLine"));
SoShape396->addChild(*SoVRMLAppearance397);

SoIndexedLineSet* SoIndexedLineSet398 = new SoIndexedLineSet();
SoIndexedLineSet398->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate399 = new SoCoordinate();
SoCoordinate399->setPoint(new float[]{0.0,1.045,-0.095,0.0,0.9149,0.0016}, 6);
SoIndexedLineSet398->setCoord(*SoCoordinate399);

SoShape396->setGeometry(*SoIndexedLineSet398);

SoHAnimSegment395->addChild(*SoShape396);

SoHAnimJoint394->addChildren(*SoHAnimSegment395);

SoHAnimSegment* SoHAnimSegment400 = new SoHAnimSegment();
SoHAnimSegment400->setDEF(QString("Joe_l5"));
SoHAnimSegment400->X3DNode::setName(QString("l5"));
SoShape* SoShape401 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance402 = new SoVRMLAppearance();
SoVRMLAppearance402->setUSE(QString("SegmentLine"));
SoShape401->addChild(*SoVRMLAppearance402);

SoIndexedLineSet* SoIndexedLineSet403 = new SoIndexedLineSet();
SoIndexedLineSet403->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate404 = new SoCoordinate();
SoCoordinate404->setPoint(new float[]{0.0,1.045,-0.095,0.0,1.068,-0.085}, 6);
SoIndexedLineSet403->setCoord(*SoCoordinate404);

SoShape401->setGeometry(*SoIndexedLineSet403);

SoHAnimSegment400->addChild(*SoShape401);

SoHAnimSite* SoHAnimSite405 = new SoHAnimSite();
SoHAnimSite405->setDEF(QString("Joe_waist_preferred_post"));
SoHAnimSite405->X3DNode::setName(QString("waist_preferred_post"));
SoHAnimSite405->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoShape* SoShape406 = new SoShape();
SoShape406->setUSE(QString("sitebox"));
SoHAnimSite405->addChild(*SoShape406);

SoHAnimSegment400->addChild(*SoHAnimSite405);

SoHAnimSite* SoHAnimSite407 = new SoHAnimSite();
SoHAnimSite407->setDEF(QString("Joe_navel"));
SoHAnimSite407->X3DNode::setName(QString("navel"));
SoHAnimSite407->setTranslation(new float[]{0.0,1.07225,0.09});
SoShape* SoShape408 = new SoShape();
SoShape408->setUSE(QString("sitebox"));
SoHAnimSite407->addChild(*SoShape408);

SoHAnimSegment400->addChild(*SoHAnimSite407);

SoHAnimJoint394->addChildren(*SoHAnimSegment400);

SoHAnimJoint* SoHAnimJoint409 = new SoHAnimJoint();
SoHAnimJoint409->setDEF(QString("Joe_vl4"));
SoHAnimJoint409->X3DNode::setName(QString("vl4"));
SoHAnimJoint409->setCenter(new float[]{0.0,1.068,-0.085});
SoHAnimSegment* SoHAnimSegment410 = new SoHAnimSegment();
SoHAnimSegment410->setDEF(QString("Joe_l4"));
SoHAnimSegment410->X3DNode::setName(QString("l4"));
SoShape* SoShape411 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance412 = new SoVRMLAppearance();
SoVRMLAppearance412->setUSE(QString("SegmentLine"));
SoShape411->addChild(*SoVRMLAppearance412);

SoIndexedLineSet* SoIndexedLineSet413 = new SoIndexedLineSet();
SoIndexedLineSet413->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate414 = new SoCoordinate();
SoCoordinate414->setPoint(new float[]{0.0,1.068,-0.085,0.0,1.092,-0.0725}, 6);
SoIndexedLineSet413->setCoord(*SoCoordinate414);

SoShape411->setGeometry(*SoIndexedLineSet413);

SoHAnimSegment410->addChild(*SoShape411);

SoTransform* SoTransform415 = new SoTransform();
SoTransform415->setTranslation(new float[]{0.0,1.068,-0.085});
SoShape* SoShape416 = new SoShape();
SoShape416->setUSE(QString("jointbox"));
SoTransform415->addChild(*SoShape416);

SoHAnimSegment410->addChild(*SoTransform415);

SoHAnimJoint409->addChildren(*SoHAnimSegment410);

SoHAnimJoint* SoHAnimJoint417 = new SoHAnimJoint();
SoHAnimJoint417->setDEF(QString("Joe_vl3"));
SoHAnimJoint417->X3DNode::setName(QString("vl3"));
SoHAnimJoint417->setCenter(new float[]{0.0,1.092,-0.0725});
SoHAnimSegment* SoHAnimSegment418 = new SoHAnimSegment();
SoHAnimSegment418->setDEF(QString("Joe_l3"));
SoHAnimSegment418->X3DNode::setName(QString("l3"));
SoShape* SoShape419 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance420 = new SoVRMLAppearance();
SoVRMLAppearance420->setUSE(QString("SegmentLine"));
SoShape419->addChild(*SoVRMLAppearance420);

SoIndexedLineSet* SoIndexedLineSet421 = new SoIndexedLineSet();
SoIndexedLineSet421->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate422 = new SoCoordinate();
SoCoordinate422->setPoint(new float[]{0.0,1.092,-0.0725,0.0,1.12,-0.065}, 6);
SoIndexedLineSet421->setCoord(*SoCoordinate422);

SoShape419->setGeometry(*SoIndexedLineSet421);

SoHAnimSegment418->addChild(*SoShape419);

SoTransform* SoTransform423 = new SoTransform();
SoTransform423->setTranslation(new float[]{0.0,1.092,-0.0725});
SoShape* SoShape424 = new SoShape();
SoShape424->setUSE(QString("jointbox"));
SoTransform423->addChild(*SoShape424);

SoHAnimSegment418->addChild(*SoTransform423);

SoHAnimJoint417->addChildren(*SoHAnimSegment418);

SoHAnimJoint* SoHAnimJoint425 = new SoHAnimJoint();
SoHAnimJoint425->setDEF(QString("Joe_vl2"));
SoHAnimJoint425->X3DNode::setName(QString("vl2"));
SoHAnimJoint425->setCenter(new float[]{0.0,1.12,-0.065});
SoHAnimJoint425->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint425->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
SoHAnimSegment* SoHAnimSegment426 = new SoHAnimSegment();
SoHAnimSegment426->setDEF(QString("Joe_l2"));
SoHAnimSegment426->X3DNode::setName(QString("l2"));
SoShape* SoShape427 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance428 = new SoVRMLAppearance();
SoVRMLAppearance428->setUSE(QString("SegmentLine"));
SoShape427->addChild(*SoVRMLAppearance428);

SoIndexedLineSet* SoIndexedLineSet429 = new SoIndexedLineSet();
SoIndexedLineSet429->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate430 = new SoCoordinate();
SoCoordinate430->setPoint(new float[]{0.0,1.12,-0.065,0.0,1.1459,-0.0625}, 6);
SoIndexedLineSet429->setCoord(*SoCoordinate430);

SoShape427->setGeometry(*SoIndexedLineSet429);

SoHAnimSegment426->addChild(*SoShape427);

SoTransform* SoTransform431 = new SoTransform();
SoTransform431->setTranslation(new float[]{0.0,1.12,-0.065});
SoShape* SoShape432 = new SoShape();
SoShape432->setUSE(QString("jointbox"));
SoTransform431->addChild(*SoShape432);

SoHAnimSegment426->addChild(*SoTransform431);

SoTransform* SoTransform433 = new SoTransform();
SoTransform433->setTranslation(new float[]{-0.087,1.19,-0.09});
SoShape* SoShape434 = new SoShape();
SoShape434->setUSE(QString("skinsphere"));
SoTransform433->addChild(*SoShape434);

SoHAnimSegment426->addChild(*SoTransform433);

SoTransform* SoTransform435 = new SoTransform();
SoTransform435->setTranslation(new float[]{0.087,1.19,-0.09});
SoShape* SoShape436 = new SoShape();
SoShape436->setUSE(QString("skinsphere"));
SoTransform435->addChild(*SoShape436);

SoHAnimSegment426->addChild(*SoTransform435);

SoTransform* SoTransform437 = new SoTransform();
SoTransform437->setTranslation(new float[]{0.172,1.32,-0.03});
SoShape* SoShape438 = new SoShape();
SoShape438->setUSE(QString("skinsphere"));
SoTransform437->addChild(*SoShape438);

SoHAnimSegment426->addChild(*SoTransform437);

SoTransform* SoTransform439 = new SoTransform();
SoTransform439->setTranslation(new float[]{-0.172,1.32,-0.03});
SoShape* SoShape440 = new SoShape();
SoShape440->setUSE(QString("skinsphere"));
SoTransform439->addChild(*SoShape440);

SoHAnimSegment426->addChild(*SoTransform439);

SoTransform* SoTransform441 = new SoTransform();
SoTransform441->setTranslation(new float[]{0.15,1.23,-0.015});
SoShape* SoShape442 = new SoShape();
SoShape442->setUSE(QString("skinsphere"));
SoTransform441->addChild(*SoShape442);

SoHAnimSegment426->addChild(*SoTransform441);

SoTransform* SoTransform443 = new SoTransform();
SoTransform443->setTranslation(new float[]{-0.15,1.23,-0.015});
SoShape* SoShape444 = new SoShape();
SoShape444->setUSE(QString("skinsphere"));
SoTransform443->addChild(*SoShape444);

SoHAnimSegment426->addChild(*SoTransform443);

SoHAnimSite* SoHAnimSite445 = new SoHAnimSite();
SoHAnimSite445->setDEF(QString("Joe_r_rib10"));
SoHAnimSite445->X3DNode::setName(QString("r_rib10"));
SoHAnimSite445->setTranslation(new float[]{-0.087,1.19,0.09});
SoShape* SoShape446 = new SoShape();
SoShape446->setUSE(QString("sitebox"));
SoHAnimSite445->addChild(*SoShape446);

SoHAnimSegment426->addChild(*SoHAnimSite445);

SoHAnimSite* SoHAnimSite447 = new SoHAnimSite();
SoHAnimSite447->setDEF(QString("Joe_l_rib10"));
SoHAnimSite447->X3DNode::setName(QString("l_rib10"));
SoHAnimSite447->setTranslation(new float[]{0.087,1.19,0.09});
SoShape* SoShape448 = new SoShape();
SoShape448->setUSE(QString("sitebox"));
SoHAnimSite447->addChild(*SoShape448);

SoHAnimSegment426->addChild(*SoHAnimSite447);

SoHAnimSite* SoHAnimSite449 = new SoHAnimSite();
SoHAnimSite449->setDEF(QString("Joe_rib10_midspine"));
SoHAnimSite449->X3DNode::setName(QString("rib10_midspine"));
SoHAnimSite449->setTranslation(new float[]{0.0,1.1908,-0.1113});
SoShape* SoShape450 = new SoShape();
SoShape450->setUSE(QString("sitebox"));
SoHAnimSite449->addChild(*SoShape450);

SoHAnimSegment426->addChild(*SoHAnimSite449);

SoHAnimJoint425->addChildren(*SoHAnimSegment426);

SoHAnimJoint* SoHAnimJoint451 = new SoHAnimJoint();
SoHAnimJoint451->setDEF(QString("Joe_vl1"));
SoHAnimJoint451->X3DNode::setName(QString("vl1"));
SoHAnimJoint451->setCenter(new float[]{0.0,1.1459,-0.0625});
SoHAnimSegment* SoHAnimSegment452 = new SoHAnimSegment();
SoHAnimSegment452->setDEF(QString("Joe_l1"));
SoHAnimSegment452->X3DNode::setName(QString("l1"));
SoShape* SoShape453 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance454 = new SoVRMLAppearance();
SoVRMLAppearance454->setUSE(QString("SegmentLine"));
SoShape453->addChild(*SoVRMLAppearance454);

SoIndexedLineSet* SoIndexedLineSet455 = new SoIndexedLineSet();
SoIndexedLineSet455->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate456 = new SoCoordinate();
SoCoordinate456->setPoint(new float[]{0.0,1.1459,-0.0625,0.0,1.179,-0.068}, 6);
SoIndexedLineSet455->setCoord(*SoCoordinate456);

SoShape453->setGeometry(*SoIndexedLineSet455);

SoHAnimSegment452->addChild(*SoShape453);

SoTransform* SoTransform457 = new SoTransform();
SoTransform457->setTranslation(new float[]{0.0,1.1459,-0.0625});
SoShape* SoShape458 = new SoShape();
SoShape458->setUSE(QString("jointbox"));
SoTransform457->addChild(*SoShape458);

SoHAnimSegment452->addChild(*SoTransform457);

SoHAnimJoint451->addChildren(*SoHAnimSegment452);

SoHAnimJoint* SoHAnimJoint459 = new SoHAnimJoint();
SoHAnimJoint459->setDEF(QString("Joe_vt12"));
SoHAnimJoint459->X3DNode::setName(QString("vt12"));
SoHAnimJoint459->setCenter(new float[]{0.0,1.179,-0.068});
SoHAnimSegment* SoHAnimSegment460 = new SoHAnimSegment();
SoHAnimSegment460->setDEF(QString("Joe_t12"));
SoHAnimSegment460->X3DNode::setName(QString("t12"));
SoShape* SoShape461 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance462 = new SoVRMLAppearance();
SoVRMLAppearance462->setUSE(QString("SegmentLine"));
SoShape461->addChild(*SoVRMLAppearance462);

SoIndexedLineSet* SoIndexedLineSet463 = new SoIndexedLineSet();
SoIndexedLineSet463->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate464 = new SoCoordinate();
SoCoordinate464->setPoint(new float[]{0.0,1.179,-0.068,0.0,1.242,-0.09}, 6);
SoIndexedLineSet463->setCoord(*SoCoordinate464);

SoShape461->setGeometry(*SoIndexedLineSet463);

SoHAnimSegment460->addChild(*SoShape461);

SoTransform* SoTransform465 = new SoTransform();
SoTransform465->setTranslation(new float[]{0.0,1.179,-0.068});
SoShape* SoShape466 = new SoShape();
SoShape466->setUSE(QString("jointbox"));
SoTransform465->addChild(*SoShape466);

SoHAnimSegment460->addChild(*SoTransform465);

SoHAnimJoint459->addChildren(*SoHAnimSegment460);

SoHAnimJoint* SoHAnimJoint467 = new SoHAnimJoint();
SoHAnimJoint467->setDEF(QString("Joe_vt11"));
SoHAnimJoint467->X3DNode::setName(QString("vt11"));
SoHAnimJoint467->setCenter(new float[]{0.0,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment468 = new SoHAnimSegment();
SoHAnimSegment468->setDEF(QString("Joe_t11"));
SoHAnimSegment468->X3DNode::setName(QString("t11"));
SoShape* SoShape469 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance470 = new SoVRMLAppearance();
SoVRMLAppearance470->setUSE(QString("SegmentLine"));
SoShape469->addChild(*SoVRMLAppearance470);

SoIndexedLineSet* SoIndexedLineSet471 = new SoIndexedLineSet();
SoIndexedLineSet471->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate472 = new SoCoordinate();
SoCoordinate472->setPoint(new float[]{0.0,1.2145,-0.0755,0.0,1.242,-0.09}, 6);
SoIndexedLineSet471->setCoord(*SoCoordinate472);

SoShape469->setGeometry(*SoIndexedLineSet471);

SoHAnimSegment468->addChild(*SoShape469);

SoTransform* SoTransform473 = new SoTransform();
SoTransform473->setTranslation(new float[]{0.0,1.2145,-0.0755});
SoShape* SoShape474 = new SoShape();
SoShape474->setUSE(QString("jointbox"));
SoTransform473->addChild(*SoShape474);

SoHAnimSegment468->addChild(*SoTransform473);

SoHAnimJoint467->addChildren(*SoHAnimSegment468);

SoHAnimJoint* SoHAnimJoint475 = new SoHAnimJoint();
SoHAnimJoint475->setDEF(QString("Joe_vt10"));
SoHAnimJoint475->X3DNode::setName(QString("vt10"));
SoHAnimJoint475->setCenter(new float[]{0.0,1.242,-0.09});
SoHAnimJoint475->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint475->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment476 = new SoHAnimSegment();
SoHAnimSegment476->setDEF(QString("Joe_t10"));
SoHAnimSegment476->X3DNode::setName(QString("t10"));
SoShape* SoShape477 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance478 = new SoVRMLAppearance();
SoVRMLAppearance478->setUSE(QString("SegmentLine"));
SoShape477->addChild(*SoVRMLAppearance478);

SoIndexedLineSet* SoIndexedLineSet479 = new SoIndexedLineSet();
SoIndexedLineSet479->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate480 = new SoCoordinate();
SoCoordinate480->setPoint(new float[]{0.0,1.242,-0.09,0.0,1.268,-0.1}, 6);
SoIndexedLineSet479->setCoord(*SoCoordinate480);

SoShape477->setGeometry(*SoIndexedLineSet479);

SoHAnimSegment476->addChild(*SoShape477);

SoTransform* SoTransform481 = new SoTransform();
SoTransform481->setTranslation(new float[]{0.0,1.242,-0.09});
SoShape* SoShape482 = new SoShape();
SoShape482->setUSE(QString("jointbox"));
SoTransform481->addChild(*SoShape482);

SoHAnimSegment476->addChild(*SoTransform481);

SoHAnimSite* SoHAnimSite483 = new SoHAnimSite();
SoHAnimSite483->setDEF(QString("Joe_substernale"));
SoHAnimSite483->X3DNode::setName(QString("substernale"));
SoHAnimSite483->setTranslation(new float[]{0.0,1.25,0.113});
SoShape* SoShape484 = new SoShape();
SoShape484->setUSE(QString("sitebox"));
SoHAnimSite483->addChild(*SoShape484);

SoHAnimSegment476->addChild(*SoHAnimSite483);

SoHAnimJoint475->addChildren(*SoHAnimSegment476);

SoHAnimJoint* SoHAnimJoint485 = new SoHAnimJoint();
SoHAnimJoint485->setDEF(QString("Joe_vt9"));
SoHAnimJoint485->X3DNode::setName(QString("vt9"));
SoHAnimJoint485->setCenter(new float[]{0.0,1.268,-0.1});
SoHAnimJoint485->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint485->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment486 = new SoHAnimSegment();
SoHAnimSegment486->setDEF(QString("Joe_t9"));
SoHAnimSegment486->X3DNode::setName(QString("t9"));
SoShape* SoShape487 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance488 = new SoVRMLAppearance();
SoVRMLAppearance488->setUSE(QString("SegmentLine"));
SoShape487->addChild(*SoVRMLAppearance488);

SoIndexedLineSet* SoIndexedLineSet489 = new SoIndexedLineSet();
SoIndexedLineSet489->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate490 = new SoCoordinate();
SoCoordinate490->setPoint(new float[]{0.0,1.268,-0.1,0.0,1.294,-0.11}, 6);
SoIndexedLineSet489->setCoord(*SoCoordinate490);

SoShape487->setGeometry(*SoIndexedLineSet489);

SoHAnimSegment486->addChild(*SoShape487);

SoTransform* SoTransform491 = new SoTransform();
SoTransform491->setTranslation(new float[]{0.0,1.268,-0.1});
SoShape* SoShape492 = new SoShape();
SoShape492->setUSE(QString("jointbox"));
SoTransform491->addChild(*SoShape492);

SoHAnimSegment486->addChild(*SoTransform491);

SoHAnimSite* SoHAnimSite493 = new SoHAnimSite();
SoHAnimSite493->setDEF(QString("Joe_r_thelion"));
SoHAnimSite493->X3DNode::setName(QString("r_thelion"));
SoHAnimSite493->setTranslation(new float[]{-0.1135,1.318,0.095});
SoShape* SoShape494 = new SoShape();
SoShape494->setUSE(QString("sitebox"));
SoHAnimSite493->addChild(*SoShape494);

SoHAnimSegment486->addChild(*SoHAnimSite493);

SoHAnimSite* SoHAnimSite495 = new SoHAnimSite();
SoHAnimSite495->setDEF(QString("Joe_l_thelion"));
SoHAnimSite495->X3DNode::setName(QString("l_thelion"));
SoHAnimSite495->setTranslation(new float[]{0.1135,1.318,0.095});
SoShape* SoShape496 = new SoShape();
SoShape496->setUSE(QString("sitebox"));
SoHAnimSite495->addChild(*SoShape496);

SoHAnimSegment486->addChild(*SoHAnimSite495);

SoHAnimJoint485->addChildren(*SoHAnimSegment486);

SoHAnimJoint* SoHAnimJoint497 = new SoHAnimJoint();
SoHAnimJoint497->setDEF(QString("Joe_vt8"));
SoHAnimJoint497->X3DNode::setName(QString("vt8"));
SoHAnimJoint497->setCenter(new float[]{0.0,1.294,-0.11});
SoHAnimSegment* SoHAnimSegment498 = new SoHAnimSegment();
SoHAnimSegment498->setDEF(QString("Joe_t8"));
SoHAnimSegment498->X3DNode::setName(QString("t8"));
SoShape* SoShape499 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance500 = new SoVRMLAppearance();
SoVRMLAppearance500->setUSE(QString("SegmentLine"));
SoShape499->addChild(*SoVRMLAppearance500);

SoIndexedLineSet* SoIndexedLineSet501 = new SoIndexedLineSet();
SoIndexedLineSet501->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate502 = new SoCoordinate();
SoCoordinate502->setPoint(new float[]{0.0,1.294,-0.11,0.0,1.352,-0.12}, 6);
SoIndexedLineSet501->setCoord(*SoCoordinate502);

SoShape499->setGeometry(*SoIndexedLineSet501);

SoHAnimSegment498->addChild(*SoShape499);

SoTransform* SoTransform503 = new SoTransform();
SoTransform503->setTranslation(new float[]{0.0,1.294,-0.11});
SoShape* SoShape504 = new SoShape();
SoShape504->setUSE(QString("jointbox"));
SoTransform503->addChild(*SoShape504);

SoHAnimSegment498->addChild(*SoTransform503);

SoHAnimJoint497->addChildren(*SoHAnimSegment498);

SoHAnimJoint* SoHAnimJoint505 = new SoHAnimJoint();
SoHAnimJoint505->setDEF(QString("Joe_vt7"));
SoHAnimJoint505->X3DNode::setName(QString("vt7"));
SoHAnimJoint505->setCenter(new float[]{0.0,1.323,-0.1155});
SoHAnimSegment* SoHAnimSegment506 = new SoHAnimSegment();
SoHAnimSegment506->setDEF(QString("Joe_t7"));
SoHAnimSegment506->X3DNode::setName(QString("t7"));
SoShape* SoShape507 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance508 = new SoVRMLAppearance();
SoVRMLAppearance508->setUSE(QString("SegmentLine"));
SoShape507->addChild(*SoVRMLAppearance508);

SoIndexedLineSet* SoIndexedLineSet509 = new SoIndexedLineSet();
SoIndexedLineSet509->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate510 = new SoCoordinate();
SoCoordinate510->setPoint(new float[]{0.0,1.352,-0.12,0.0,1.381,-0.1235}, 6);
SoIndexedLineSet509->setCoord(*SoCoordinate510);

SoShape507->setGeometry(*SoIndexedLineSet509);

SoHAnimSegment506->addChild(*SoShape507);

SoTransform* SoTransform511 = new SoTransform();
SoTransform511->setTranslation(new float[]{0.0,1.323,-0.1155});
SoShape* SoShape512 = new SoShape();
SoShape512->setUSE(QString("jointbox"));
SoTransform511->addChild(*SoShape512);

SoHAnimSegment506->addChild(*SoTransform511);

SoHAnimJoint505->addChildren(*SoHAnimSegment506);

SoHAnimJoint* SoHAnimJoint513 = new SoHAnimJoint();
SoHAnimJoint513->setDEF(QString("Joe_vt6"));
SoHAnimJoint513->X3DNode::setName(QString("vt6"));
SoHAnimJoint513->setCenter(new float[]{0.0,1.352,-0.12});
SoHAnimSegment* SoHAnimSegment514 = new SoHAnimSegment();
SoHAnimSegment514->setDEF(QString("Joe_t6"));
SoHAnimSegment514->X3DNode::setName(QString("t6"));
SoShape* SoShape515 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance516 = new SoVRMLAppearance();
SoVRMLAppearance516->setUSE(QString("SegmentLine"));
SoShape515->addChild(*SoVRMLAppearance516);

SoIndexedLineSet* SoIndexedLineSet517 = new SoIndexedLineSet();
SoIndexedLineSet517->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate518 = new SoCoordinate();
SoCoordinate518->setPoint(new float[]{0.0,1.381,-0.1235,0.0,1.41,-0.1235}, 6);
SoIndexedLineSet517->setCoord(*SoCoordinate518);

SoShape515->setGeometry(*SoIndexedLineSet517);

SoHAnimSegment514->addChild(*SoShape515);

SoTransform* SoTransform519 = new SoTransform();
SoTransform519->setTranslation(new float[]{0.0,1.352,-0.12});
SoShape* SoShape520 = new SoShape();
SoShape520->setUSE(QString("jointbox"));
SoTransform519->addChild(*SoShape520);

SoHAnimSegment514->addChild(*SoTransform519);

SoHAnimJoint513->addChildren(*SoHAnimSegment514);

SoHAnimJoint* SoHAnimJoint521 = new SoHAnimJoint();
SoHAnimJoint521->setDEF(QString("Joe_vt5"));
SoHAnimJoint521->X3DNode::setName(QString("vt5"));
SoHAnimJoint521->setCenter(new float[]{0.0,1.381,-0.1235});
SoHAnimSegment* SoHAnimSegment522 = new SoHAnimSegment();
SoHAnimSegment522->setDEF(QString("Joe_t5"));
SoHAnimSegment522->X3DNode::setName(QString("t5"));
SoShape* SoShape523 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance524 = new SoVRMLAppearance();
SoVRMLAppearance524->setUSE(QString("SegmentLine"));
SoShape523->addChild(*SoVRMLAppearance524);

SoIndexedLineSet* SoIndexedLineSet525 = new SoIndexedLineSet();
SoIndexedLineSet525->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate526 = new SoCoordinate();
SoCoordinate526->setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
SoIndexedLineSet525->setCoord(*SoCoordinate526);

SoShape523->setGeometry(*SoIndexedLineSet525);

SoHAnimSegment522->addChild(*SoShape523);

SoTransform* SoTransform527 = new SoTransform();
SoTransform527->setTranslation(new float[]{0.0,1.381,-0.1235});
SoShape* SoShape528 = new SoShape();
SoShape528->setUSE(QString("jointbox"));
SoTransform527->addChild(*SoShape528);

SoHAnimSegment522->addChild(*SoTransform527);

SoHAnimJoint521->addChildren(*SoHAnimSegment522);

SoHAnimJoint* SoHAnimJoint529 = new SoHAnimJoint();
SoHAnimJoint529->setDEF(QString("Joe_vt4"));
SoHAnimJoint529->X3DNode::setName(QString("vt4"));
SoHAnimJoint529->setCenter(new float[]{0.0,1.41,-0.1235});
SoHAnimJoint529->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint529->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment530 = new SoHAnimSegment();
SoHAnimSegment530->setDEF(QString("Joe_t4"));
SoHAnimSegment530->X3DNode::setName(QString("t4"));
SoShape* SoShape531 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance532 = new SoVRMLAppearance();
SoVRMLAppearance532->setUSE(QString("SegmentLine"));
SoShape531->addChild(*SoVRMLAppearance532);

SoIndexedLineSet* SoIndexedLineSet533 = new SoIndexedLineSet();
SoIndexedLineSet533->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate534 = new SoCoordinate();
SoCoordinate534->setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
SoIndexedLineSet533->setCoord(*SoCoordinate534);

SoShape531->setGeometry(*SoIndexedLineSet533);

SoHAnimSegment530->addChild(*SoShape531);

SoTransform* SoTransform535 = new SoTransform();
SoTransform535->setTranslation(new float[]{0.0,1.41,-0.1235});
SoShape* SoShape536 = new SoShape();
SoShape536->setUSE(QString("jointbox"));
SoTransform535->addChild(*SoShape536);

SoHAnimSegment530->addChild(*SoTransform535);

SoTransform* SoTransform537 = new SoTransform();
SoTransform537->setTranslation(new float[]{0.0,1.41,-0.145});
SoShape* SoShape538 = new SoShape();
SoShape538->setUSE(QString("skinsphere"));
SoTransform537->addChild(*SoShape538);

SoHAnimSegment530->addChild(*SoTransform537);

SoHAnimJoint529->addChildren(*SoHAnimSegment530);

SoHAnimJoint* SoHAnimJoint539 = new SoHAnimJoint();
SoHAnimJoint539->setDEF(QString("Joe_vt3"));
SoHAnimJoint539->X3DNode::setName(QString("vt3"));
SoHAnimJoint539->setCenter(new float[]{0.0,1.438,-0.12});
SoHAnimSegment* SoHAnimSegment540 = new SoHAnimSegment();
SoHAnimSegment540->setDEF(QString("Joe_t3"));
SoHAnimSegment540->X3DNode::setName(QString("t3"));
SoShape* SoShape541 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance542 = new SoVRMLAppearance();
SoVRMLAppearance542->setUSE(QString("SegmentLine"));
SoShape541->addChild(*SoVRMLAppearance542);

SoIndexedLineSet* SoIndexedLineSet543 = new SoIndexedLineSet();
SoIndexedLineSet543->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate544 = new SoCoordinate();
SoCoordinate544->setPoint(new float[]{0.0,1.438,-0.12,0.0,1.468,-0.105}, 6);
SoIndexedLineSet543->setCoord(*SoCoordinate544);

SoShape541->setGeometry(*SoIndexedLineSet543);

SoHAnimSegment540->addChild(*SoShape541);

SoTransform* SoTransform545 = new SoTransform();
SoTransform545->setTranslation(new float[]{0.0,1.438,-0.12});
SoShape* SoShape546 = new SoShape();
SoShape546->setUSE(QString("jointbox"));
SoTransform545->addChild(*SoShape546);

SoHAnimSegment540->addChild(*SoTransform545);

SoHAnimJoint539->addChildren(*SoHAnimSegment540);

SoHAnimJoint* SoHAnimJoint547 = new SoHAnimJoint();
SoHAnimJoint547->setDEF(QString("Joe_vt2"));
SoHAnimJoint547->X3DNode::setName(QString("vt2"));
SoHAnimJoint547->setCenter(new float[]{0.0,1.468,-0.105});
SoHAnimSegment* SoHAnimSegment548 = new SoHAnimSegment();
SoHAnimSegment548->setDEF(QString("Joe_t2"));
SoHAnimSegment548->X3DNode::setName(QString("t2"));
SoShape* SoShape549 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance550 = new SoVRMLAppearance();
SoVRMLAppearance550->setUSE(QString("SegmentLine"));
SoShape549->addChild(*SoVRMLAppearance550);

SoIndexedLineSet* SoIndexedLineSet551 = new SoIndexedLineSet();
SoIndexedLineSet551->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate552 = new SoCoordinate();
SoCoordinate552->setPoint(new float[]{0.0,1.468,-0.105,0.0,1.497,-0.09}, 6);
SoIndexedLineSet551->setCoord(*SoCoordinate552);

SoShape549->setGeometry(*SoIndexedLineSet551);

SoHAnimSegment548->addChild(*SoShape549);

SoTransform* SoTransform553 = new SoTransform();
SoTransform553->setTranslation(new float[]{0.0,1.468,-0.105});
SoShape* SoShape554 = new SoShape();
SoShape554->setUSE(QString("jointbox"));
SoTransform553->addChild(*SoShape554);

SoHAnimSegment548->addChild(*SoTransform553);

SoHAnimJoint547->addChildren(*SoHAnimSegment548);

SoHAnimJoint* SoHAnimJoint555 = new SoHAnimJoint();
SoHAnimJoint555->setDEF(QString("Joe_vt1"));
SoHAnimJoint555->X3DNode::setName(QString("vt1"));
SoHAnimJoint555->setCenter(new float[]{0.0,1.497,-0.09});
SoHAnimJoint555->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint555->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment556 = new SoHAnimSegment();
SoHAnimSegment556->setDEF(QString("Joe_t1"));
SoHAnimSegment556->X3DNode::setName(QString("t1"));
SoShape* SoShape557 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance558 = new SoVRMLAppearance();
SoVRMLAppearance558->setUSE(QString("SegmentLine"));
SoShape557->addChild(*SoVRMLAppearance558);

SoIndexedLineSet* SoIndexedLineSet559 = new SoIndexedLineSet();
SoIndexedLineSet559->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate560 = new SoCoordinate();
SoCoordinate560->setPoint(new float[]{0.0,1.497,-0.09,0.0,1.525,-0.072}, 6);
SoIndexedLineSet559->setCoord(*SoCoordinate560);

SoShape557->setGeometry(*SoIndexedLineSet559);

SoHAnimSegment556->addChild(*SoShape557);

SoTransform* SoTransform561 = new SoTransform();
SoTransform561->setTranslation(new float[]{0.0,1.497,-0.09});
SoShape* SoShape562 = new SoShape();
SoShape562->setUSE(QString("jointbox"));
SoTransform561->addChild(*SoShape562);

SoHAnimSegment556->addChild(*SoTransform561);

SoHAnimSite* SoHAnimSite563 = new SoHAnimSite();
SoHAnimSite563->setDEF(QString("Joe_suprasternale"));
SoHAnimSite563->X3DNode::setName(QString("suprasternale"));
SoHAnimSite563->setTranslation(new float[]{0.0,1.44,0.03});
SoShape* SoShape564 = new SoShape();
SoShape564->setUSE(QString("sitebox"));
SoHAnimSite563->addChild(*SoShape564);

SoHAnimSegment556->addChild(*SoHAnimSite563);

SoHAnimSite* SoHAnimSite565 = new SoHAnimSite();
SoHAnimSite565->setDEF(QString("Joe_cervicale"));
SoHAnimSite565->X3DNode::setName(QString("cervicale"));
SoHAnimSite565->setTranslation(new float[]{0.0,1.53,-0.084});
SoShape* SoShape566 = new SoShape();
SoShape566->setUSE(QString("sitebox"));
SoHAnimSite565->addChild(*SoShape566);

SoHAnimSegment556->addChild(*SoHAnimSite565);

SoHAnimJoint555->addChildren(*SoHAnimSegment556);

SoHAnimJoint* SoHAnimJoint567 = new SoHAnimJoint();
SoHAnimJoint567->setDEF(QString("Joe_vc7"));
SoHAnimJoint567->X3DNode::setName(QString("vc7"));
SoHAnimJoint567->setCenter(new float[]{0.0,1.525,-0.072});
SoHAnimJoint567->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint567->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment568 = new SoHAnimSegment();
SoHAnimSegment568->setDEF(QString("Joe_c7"));
SoHAnimSegment568->X3DNode::setName(QString("c7"));
SoShape* SoShape569 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance570 = new SoVRMLAppearance();
SoVRMLAppearance570->setUSE(QString("SegmentLine"));
SoShape569->addChild(*SoVRMLAppearance570);

SoIndexedLineSet* SoIndexedLineSet571 = new SoIndexedLineSet();
SoIndexedLineSet571->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate572 = new SoCoordinate();
SoCoordinate572->setPoint(new float[]{0.0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0.0,1.54,-0.05}, 12);
SoIndexedLineSet571->setCoord(*SoCoordinate572);

SoShape569->setGeometry(*SoIndexedLineSet571);

SoHAnimSegment568->addChild(*SoShape569);

SoTransform* SoTransform573 = new SoTransform();
SoTransform573->setTranslation(new float[]{0.0,1.525,-0.072});
SoShape* SoShape574 = new SoShape();
SoShape574->setUSE(QString("jointbox"));
SoTransform573->addChild(*SoShape574);

SoHAnimSegment568->addChild(*SoTransform573);

SoHAnimSite* SoHAnimSite575 = new SoHAnimSite();
SoHAnimSite575->setDEF(QString("Joe_r_neck_base"));
SoHAnimSite575->X3DNode::setName(QString("r_neck_base"));
SoHAnimSite575->setTranslation(new float[]{-0.0646,1.5149,-0.0385});
SoShape* SoShape576 = new SoShape();
SoShape576->setUSE(QString("sitebox"));
SoHAnimSite575->addChild(*SoShape576);

SoHAnimSegment568->addChild(*SoHAnimSite575);

SoHAnimSite* SoHAnimSite577 = new SoHAnimSite();
SoHAnimSite577->setDEF(QString("Joe_l_neck_base"));
SoHAnimSite577->X3DNode::setName(QString("l_neck_base"));
SoHAnimSite577->setTranslation(new float[]{0.0646,1.5149,-0.0385});
SoShape* SoShape578 = new SoShape();
SoShape578->setUSE(QString("sitebox"));
SoHAnimSite577->addChild(*SoShape578);

SoHAnimSegment568->addChild(*SoHAnimSite577);

SoHAnimJoint567->addChildren(*SoHAnimSegment568);

SoHAnimJoint* SoHAnimJoint579 = new SoHAnimJoint();
SoHAnimJoint579->setDEF(QString("Joe_vc6"));
SoHAnimJoint579->X3DNode::setName(QString("vc6"));
SoHAnimJoint579->setRotation(new float[]{-0.37139068112485,-0.928476688976744,0.0,0.0468530829448654});
SoHAnimJoint579->setCenter(new float[]{0.0,1.54,-0.05});
SoHAnimSegment* SoHAnimSegment580 = new SoHAnimSegment();
SoHAnimSegment580->setDEF(QString("Joe_c6"));
SoHAnimSegment580->X3DNode::setName(QString("c6"));
SoShape* SoShape581 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance582 = new SoVRMLAppearance();
SoVRMLAppearance582->setUSE(QString("SegmentLine"));
SoShape581->addChild(*SoVRMLAppearance582);

SoIndexedLineSet* SoIndexedLineSet583 = new SoIndexedLineSet();
SoIndexedLineSet583->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate584 = new SoCoordinate();
SoCoordinate584->setPoint(new float[]{0.0,1.54,-0.05,0.0,1.5675,-0.0256}, 6);
SoIndexedLineSet583->setCoord(*SoCoordinate584);

SoShape581->setGeometry(*SoIndexedLineSet583);

SoHAnimSegment580->addChild(*SoShape581);

SoTransform* SoTransform585 = new SoTransform();
SoTransform585->setTranslation(new float[]{0.0,1.54,-0.05});
SoShape* SoShape586 = new SoShape();
SoShape586->setUSE(QString("jointbox"));
SoTransform585->addChild(*SoShape586);

SoHAnimSegment580->addChild(*SoTransform585);

SoHAnimJoint579->addChildren(*SoHAnimSegment580);

SoHAnimJoint* SoHAnimJoint587 = new SoHAnimJoint();
SoHAnimJoint587->setDEF(QString("Joe_vc5"));
SoHAnimJoint587->X3DNode::setName(QString("vc5"));
SoHAnimJoint587->setCenter(new float[]{0.0,1.552,-0.035});
SoHAnimSegment* SoHAnimSegment588 = new SoHAnimSegment();
SoHAnimSegment588->setDEF(QString("Joe_c5"));
SoHAnimSegment588->X3DNode::setName(QString("c5"));
SoTransform* SoTransform589 = new SoTransform();
SoTransform589->setTranslation(new float[]{0.0,1.552,-0.035});
SoShape* SoShape590 = new SoShape();
SoShape590->setUSE(QString("jointbox"));
SoTransform589->addChild(*SoShape590);

SoHAnimSegment588->addChild(*SoTransform589);

SoShape* SoShape591 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance592 = new SoVRMLAppearance();
SoVRMLAppearance592->setUSE(QString("SegmentLine"));
SoShape591->addChild(*SoVRMLAppearance592);

SoIndexedLineSet* SoIndexedLineSet593 = new SoIndexedLineSet();
SoIndexedLineSet593->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate594 = new SoCoordinate();
SoCoordinate594->setPoint(new float[]{0.0,1.5675,-0.0256,0.0,1.58225,-0.0185}, 6);
SoIndexedLineSet593->setCoord(*SoCoordinate594);

SoShape591->setGeometry(*SoIndexedLineSet593);

SoHAnimSegment588->addChild(*SoShape591);

SoHAnimJoint587->addChildren(*SoHAnimSegment588);

SoHAnimJoint* SoHAnimJoint595 = new SoHAnimJoint();
SoHAnimJoint595->setDEF(QString("Joe_vc4"));
SoHAnimJoint595->X3DNode::setName(QString("vc4"));
SoHAnimJoint595->setCenter(new float[]{0.0,1.5675,-0.0256});
SoHAnimSegment* SoHAnimSegment596 = new SoHAnimSegment();
SoHAnimSegment596->setDEF(QString("Joe_c4"));
SoHAnimSegment596->X3DNode::setName(QString("c4"));
SoShape* SoShape597 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance598 = new SoVRMLAppearance();
SoVRMLAppearance598->setUSE(QString("SegmentLine"));
SoShape597->addChild(*SoVRMLAppearance598);

SoIndexedLineSet* SoIndexedLineSet599 = new SoIndexedLineSet();
SoIndexedLineSet599->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate600 = new SoCoordinate();
SoCoordinate600->setPoint(new float[]{0.0,1.58225,-0.0185,0.0,1.595,-0.0175}, 6);
SoIndexedLineSet599->setCoord(*SoCoordinate600);

SoShape597->setGeometry(*SoIndexedLineSet599);

SoHAnimSegment596->addChild(*SoShape597);

SoTransform* SoTransform601 = new SoTransform();
SoTransform601->setTranslation(new float[]{0.0,1.5675,-0.0256});
SoShape* SoShape602 = new SoShape();
SoShape602->setUSE(QString("jointbox"));
SoTransform601->addChild(*SoShape602);

SoHAnimSegment596->addChild(*SoTransform601);

SoHAnimJoint595->addChildren(*SoHAnimSegment596);

SoHAnimJoint* SoHAnimJoint603 = new SoHAnimJoint();
SoHAnimJoint603->setDEF(QString("Joe_vc3"));
SoHAnimJoint603->X3DNode::setName(QString("vc3"));
SoHAnimJoint603->setCenter(new float[]{0.0,1.58225,-0.0185});
SoHAnimSegment* SoHAnimSegment604 = new SoHAnimSegment();
SoHAnimSegment604->setDEF(QString("Joe_c3"));
SoHAnimSegment604->X3DNode::setName(QString("c3"));
SoShape* SoShape605 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance606 = new SoVRMLAppearance();
SoVRMLAppearance606->setUSE(QString("SegmentLine"));
SoShape605->addChild(*SoVRMLAppearance606);

SoIndexedLineSet* SoIndexedLineSet607 = new SoIndexedLineSet();
SoIndexedLineSet607->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate608 = new SoCoordinate();
SoCoordinate608->setPoint(new float[]{0.0,1.595,-0.0175,0.0,1.61,-0.015}, 6);
SoIndexedLineSet607->setCoord(*SoCoordinate608);

SoShape605->setGeometry(*SoIndexedLineSet607);

SoHAnimSegment604->addChild(*SoShape605);

SoTransform* SoTransform609 = new SoTransform();
SoTransform609->setTranslation(new float[]{0.0,1.58225,-0.0185});
SoShape* SoShape610 = new SoShape();
SoShape610->setUSE(QString("jointbox"));
SoTransform609->addChild(*SoShape610);

SoHAnimSegment604->addChild(*SoTransform609);

SoHAnimJoint603->addChildren(*SoHAnimSegment604);

SoHAnimJoint* SoHAnimJoint611 = new SoHAnimJoint();
SoHAnimJoint611->setDEF(QString("Joe_vc2"));
SoHAnimJoint611->X3DNode::setName(QString("vc2"));
SoHAnimJoint611->setCenter(new float[]{0.0,1.595,-0.0175});
SoHAnimSegment* SoHAnimSegment612 = new SoHAnimSegment();
SoHAnimSegment612->setDEF(QString("Joe_c2"));
SoHAnimSegment612->X3DNode::setName(QString("c2"));
SoShape* SoShape613 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance614 = new SoVRMLAppearance();
SoVRMLAppearance614->setUSE(QString("SegmentLine"));
SoShape613->addChild(*SoVRMLAppearance614);

SoIndexedLineSet* SoIndexedLineSet615 = new SoIndexedLineSet();
SoIndexedLineSet615->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate616 = new SoCoordinate();
SoCoordinate616->setPoint(new float[]{0.0,1.61,-0.015,0.0,1.6144,-0.0034}, 6);
SoIndexedLineSet615->setCoord(*SoCoordinate616);

SoShape613->setGeometry(*SoIndexedLineSet615);

SoHAnimSegment612->addChild(*SoShape613);

SoTransform* SoTransform617 = new SoTransform();
SoTransform617->setTranslation(new float[]{0.0,1.595,-0.0175});
SoShape* SoShape618 = new SoShape();
SoShape618->setUSE(QString("jointbox"));
SoTransform617->addChild(*SoShape618);

SoHAnimSegment612->addChild(*SoTransform617);

SoHAnimJoint611->addChildren(*SoHAnimSegment612);

SoHAnimJoint* SoHAnimJoint619 = new SoHAnimJoint();
SoHAnimJoint619->setDEF(QString("Joe_vc1"));
SoHAnimJoint619->X3DNode::setName(QString("vc1"));
SoHAnimJoint619->setCenter(new float[]{0.0,1.61,-0.015});
SoHAnimSegment* SoHAnimSegment620 = new SoHAnimSegment();
SoHAnimSegment620->setDEF(QString("Joe_c1"));
SoHAnimSegment620->X3DNode::setName(QString("c1"));
SoShape* SoShape621 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance622 = new SoVRMLAppearance();
SoVRMLAppearance622->setUSE(QString("SegmentLine"));
SoShape621->addChild(*SoVRMLAppearance622);

SoIndexedLineSet* SoIndexedLineSet623 = new SoIndexedLineSet();
SoIndexedLineSet623->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate624 = new SoCoordinate();
SoCoordinate624->setPoint(new float[]{0.0,1.6144,-0.0034,0.0,1.63,-0.01}, 6);
SoIndexedLineSet623->setCoord(*SoCoordinate624);

SoShape621->setGeometry(*SoIndexedLineSet623);

SoHAnimSegment620->addChild(*SoShape621);

SoTransform* SoTransform625 = new SoTransform();
SoTransform625->setTranslation(new float[]{0.0,1.61,-0.015});
SoShape* SoShape626 = new SoShape();
SoShape626->setUSE(QString("jointbox"));
SoTransform625->addChild(*SoShape626);

SoHAnimSegment620->addChild(*SoTransform625);

SoHAnimJoint619->addChildren(*SoHAnimSegment620);

SoHAnimJoint* SoHAnimJoint627 = new SoHAnimJoint();
SoHAnimJoint627->setDEF(QString("Joe_skullbase"));
SoHAnimJoint627->X3DNode::setName(QString("skullbase"));
SoHAnimJoint627->setRotation(new float[]{0.0,-1.0,0.0,0.105595270685895});
SoHAnimJoint627->setCenter(new float[]{0.0,1.63,-0.01});
SoHAnimJoint627->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint627->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimSegment* SoHAnimSegment628 = new SoHAnimSegment();
SoHAnimSegment628->setDEF(QString("Joe_skull"));
SoHAnimSegment628->X3DNode::setName(QString("skull"));
SoShape* SoShape629 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance630 = new SoVRMLAppearance();
SoVRMLAppearance630->setUSE(QString("SegmentLine"));
SoShape629->addChild(*SoVRMLAppearance630);

SoIndexedLineSet* SoIndexedLineSet631 = new SoIndexedLineSet();
SoIndexedLineSet631->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1}, 6);
SoCoordinate* SoCoordinate632 = new SoCoordinate();
SoCoordinate632->setPoint(new float[]{0.0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065}, 9);
SoIndexedLineSet631->setCoord(*SoCoordinate632);

SoShape629->setGeometry(*SoIndexedLineSet631);

SoHAnimSegment628->addChild(*SoShape629);

SoTransform* SoTransform633 = new SoTransform();
SoTransform633->setTranslation(new float[]{0.0,1.63,-0.01});
SoShape* SoShape634 = new SoShape();
SoShape634->setUSE(QString("jointbox"));
SoTransform633->addChild(*SoShape634);

SoHAnimSegment628->addChild(*SoTransform633);

SoHAnimSite* SoHAnimSite635 = new SoHAnimSite();
SoHAnimSite635->setDEF(QString("Joe_skull_tip"));
SoHAnimSite635->X3DNode::setName(QString("skull_tip"));
SoHAnimSite635->setTranslation(new float[]{0.0,1.77,0.0});
SoShape* SoShape636 = new SoShape();
SoShape636->setUSE(QString("sitebox"));
SoHAnimSite635->addChild(*SoShape636);

SoHAnimSegment628->addChild(*SoHAnimSite635);

SoHAnimSite* SoHAnimSite637 = new SoHAnimSite();
SoHAnimSite637->setDEF(QString("Joe_sellion"));
SoHAnimSite637->X3DNode::setName(QString("sellion"));
SoHAnimSite637->setTranslation(new float[]{0.0,1.665,0.09});
SoShape* SoShape638 = new SoShape();
SoShape638->setUSE(QString("sitebox"));
SoHAnimSite637->addChild(*SoShape638);

SoHAnimSegment628->addChild(*SoHAnimSite637);

SoHAnimSite* SoHAnimSite639 = new SoHAnimSite();
SoHAnimSite639->setDEF(QString("Joe_r_infraorbitale"));
SoHAnimSite639->X3DNode::setName(QString("r_infraorbitale"));
SoHAnimSite639->setTranslation(new float[]{-0.033,1.62,0.087});
SoShape* SoShape640 = new SoShape();
SoShape640->setUSE(QString("sitebox"));
SoHAnimSite639->addChild(*SoShape640);

SoHAnimSegment628->addChild(*SoHAnimSite639);

SoHAnimSite* SoHAnimSite641 = new SoHAnimSite();
SoHAnimSite641->setDEF(QString("Joe_l_infraorbitale"));
SoHAnimSite641->X3DNode::setName(QString("l_infraorbitale"));
SoHAnimSite641->setTranslation(new float[]{0.033,1.62,0.087});
SoShape* SoShape642 = new SoShape();
SoShape642->setUSE(QString("sitebox"));
SoHAnimSite641->addChild(*SoShape642);

SoHAnimSegment628->addChild(*SoHAnimSite641);

SoHAnimSite* SoHAnimSite643 = new SoHAnimSite();
SoHAnimSite643->setDEF(QString("Joe_supramenton"));
SoHAnimSite643->X3DNode::setName(QString("supramenton"));
SoHAnimSite643->setTranslation(new float[]{0.0,1.55,0.097});
SoShape* SoShape644 = new SoShape();
SoShape644->setUSE(QString("sitebox"));
SoHAnimSite643->addChild(*SoShape644);

SoHAnimSegment628->addChild(*SoHAnimSite643);

SoHAnimSite* SoHAnimSite645 = new SoHAnimSite();
SoHAnimSite645->setDEF(QString("Joe_r_tragion"));
SoHAnimSite645->X3DNode::setName(QString("r_tragion"));
SoHAnimSite645->setTranslation(new float[]{-0.077,1.64,-0.01});
SoShape* SoShape646 = new SoShape();
SoShape646->setUSE(QString("sitebox"));
SoHAnimSite645->addChild(*SoShape646);

SoHAnimSegment628->addChild(*SoHAnimSite645);

SoHAnimSite* SoHAnimSite647 = new SoHAnimSite();
SoHAnimSite647->setDEF(QString("Joe_r_gonion"));
SoHAnimSite647->X3DNode::setName(QString("r_gonion"));
SoHAnimSite647->setTranslation(new float[]{-0.052,1.58,0.015});
SoShape* SoShape648 = new SoShape();
SoShape648->setUSE(QString("sitebox"));
SoHAnimSite647->addChild(*SoShape648);

SoHAnimSegment628->addChild(*SoHAnimSite647);

SoHAnimSite* SoHAnimSite649 = new SoHAnimSite();
SoHAnimSite649->setDEF(QString("Joe_l_tragion"));
SoHAnimSite649->X3DNode::setName(QString("l_tragion"));
SoHAnimSite649->setTranslation(new float[]{0.077,1.64,-0.01});
SoShape* SoShape650 = new SoShape();
SoShape650->setUSE(QString("sitebox"));
SoHAnimSite649->addChild(*SoShape650);

SoHAnimSegment628->addChild(*SoHAnimSite649);

SoHAnimSite* SoHAnimSite651 = new SoHAnimSite();
SoHAnimSite651->setDEF(QString("Joe_l_gonion"));
SoHAnimSite651->X3DNode::setName(QString("l_gonion"));
SoHAnimSite651->setTranslation(new float[]{0.0631,1.58,0.015});
SoShape* SoShape652 = new SoShape();
SoShape652->setUSE(QString("sitebox"));
SoHAnimSite651->addChild(*SoShape652);

SoHAnimSegment628->addChild(*SoHAnimSite651);

SoHAnimSite* SoHAnimSite653 = new SoHAnimSite();
SoHAnimSite653->setDEF(QString("Joe_nuchale"));
SoHAnimSite653->X3DNode::setName(QString("nuchale"));
SoHAnimSite653->setTranslation(new float[]{0.0,1.625,-0.0925});
SoShape* SoShape654 = new SoShape();
SoShape654->setUSE(QString("sitebox"));
SoHAnimSite653->addChild(*SoShape654);

SoHAnimSegment628->addChild(*SoHAnimSite653);

SoHAnimJoint627->addChildren(*SoHAnimSegment628);

SoHAnimJoint* SoHAnimJoint655 = new SoHAnimJoint();
SoHAnimJoint655->setDEF(QString("Joe_l_eyeball_joint"));
SoHAnimJoint655->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint655->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimSegment* SoHAnimSegment656 = new SoHAnimSegment();
SoHAnimSegment656->setDEF(QString("Joe_l_eyeball"));
SoHAnimSegment656->X3DNode::setName(QString("l_eyeball"));
SoShape* SoShape657 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance658 = new SoVRMLAppearance();
SoVRMLAppearance658->setUSE(QString("SegmentLine"));
SoShape657->addChild(*SoVRMLAppearance658);

SoIndexedLineSet* SoIndexedLineSet659 = new SoIndexedLineSet();
SoIndexedLineSet659->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate660 = new SoCoordinate();
SoCoordinate660->setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
SoIndexedLineSet659->setCoord(*SoCoordinate660);

SoShape657->setGeometry(*SoIndexedLineSet659);

SoHAnimSegment656->addChild(*SoShape657);

SoTransform* SoTransform661 = new SoTransform();
SoTransform661->setTranslation(new float[]{0.034,1.655,0.065});
SoTransform661->setScale(new float[]{1.0,1.0,1.4});
SoShape* SoShape662 = new SoShape();
SoShape662->setUSE(QString("jointbox"));
SoTransform661->addChild(*SoShape662);

SoHAnimSegment656->addChild(*SoTransform661);

SoHAnimJoint655->addChildren(*SoHAnimSegment656);

SoHAnimJoint627->addChildren(*SoHAnimJoint655);

SoHAnimJoint* SoHAnimJoint663 = new SoHAnimJoint();
SoHAnimJoint663->setDEF(QString("Joe_r_eyeball_joint"));
SoHAnimJoint663->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint663->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimSegment* SoHAnimSegment664 = new SoHAnimSegment();
SoHAnimSegment664->setDEF(QString("Joe_r_eyeball"));
SoHAnimSegment664->X3DNode::setName(QString("r_eyeball"));
SoShape* SoShape665 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance666 = new SoVRMLAppearance();
SoVRMLAppearance666->setUSE(QString("SegmentLine"));
SoShape665->addChild(*SoVRMLAppearance666);

SoIndexedLineSet* SoIndexedLineSet667 = new SoIndexedLineSet();
SoIndexedLineSet667->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate668 = new SoCoordinate();
SoCoordinate668->setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
SoIndexedLineSet667->setCoord(*SoCoordinate668);

SoShape665->setGeometry(*SoIndexedLineSet667);

SoHAnimSegment664->addChild(*SoShape665);

SoTransform* SoTransform669 = new SoTransform();
SoTransform669->setTranslation(new float[]{-0.034,1.655,0.065});
SoTransform669->setScale(new float[]{1.0,1.0,1.4});
SoShape* SoShape670 = new SoShape();
SoShape670->setUSE(QString("jointbox"));
SoTransform669->addChild(*SoShape670);

SoHAnimSegment664->addChild(*SoTransform669);

SoHAnimJoint663->addChildren(*SoHAnimSegment664);

SoHAnimJoint627->addChildren(*SoHAnimJoint663);

SoHAnimJoint619->addChildren(*SoHAnimJoint627);

SoHAnimJoint611->addChildren(*SoHAnimJoint619);

SoHAnimJoint603->addChildren(*SoHAnimJoint611);

SoHAnimJoint595->addChildren(*SoHAnimJoint603);

SoHAnimJoint587->addChildren(*SoHAnimJoint595);

SoHAnimJoint579->addChildren(*SoHAnimJoint587);

SoHAnimJoint567->addChildren(*SoHAnimJoint579);

SoHAnimJoint555->addChildren(*SoHAnimJoint567);

SoHAnimJoint* SoHAnimJoint671 = new SoHAnimJoint();
SoHAnimJoint671->setDEF(QString("Joe_l_sternoclavicular"));
SoHAnimJoint671->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint671->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint671->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint671->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment672 = new SoHAnimSegment();
SoHAnimSegment672->setDEF(QString("Joe_l_clavicle"));
SoHAnimSegment672->X3DNode::setName(QString("l_clavicle"));
SoShape* SoShape673 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance674 = new SoVRMLAppearance();
SoVRMLAppearance674->setUSE(QString("SegmentLine"));
SoShape673->addChild(*SoVRMLAppearance674);

SoIndexedLineSet* SoIndexedLineSet675 = new SoIndexedLineSet();
SoIndexedLineSet675->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate676 = new SoCoordinate();
SoCoordinate676->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoIndexedLineSet675->setCoord(*SoCoordinate676);

SoShape673->setGeometry(*SoIndexedLineSet675);

SoHAnimSegment672->addChild(*SoShape673);

SoTransform* SoTransform677 = new SoTransform();
SoTransform677->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoShape* SoShape678 = new SoShape();
SoShape678->setUSE(QString("jointbox"));
SoTransform677->addChild(*SoShape678);

SoHAnimSegment672->addChild(*SoTransform677);

SoHAnimSite* SoHAnimSite679 = new SoHAnimSite();
SoHAnimSite679->setDEF(QString("Joe_l_clavicale"));
SoHAnimSite679->X3DNode::setName(QString("l_clavicale"));
SoHAnimSite679->setTranslation(new float[]{0.03,1.46,0.035});
SoShape* SoShape680 = new SoShape();
SoShape680->setUSE(QString("sitebox"));
SoHAnimSite679->addChild(*SoShape680);

SoHAnimSegment672->addChild(*SoHAnimSite679);

SoHAnimJoint671->addChildren(*SoHAnimSegment672);

SoHAnimJoint* SoHAnimJoint681 = new SoHAnimJoint();
SoHAnimJoint681->setDEF(QString("Joe_l_acromioclavicular"));
SoHAnimJoint681->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint681->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint681->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint681->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment682 = new SoHAnimSegment();
SoHAnimSegment682->setDEF(QString("Joe_l_scapula"));
SoHAnimSegment682->X3DNode::setName(QString("l_scapula"));
SoShape* SoShape683 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance684 = new SoVRMLAppearance();
SoVRMLAppearance684->setUSE(QString("SegmentLine"));
SoShape683->addChild(*SoVRMLAppearance684);

SoIndexedLineSet* SoIndexedLineSet685 = new SoIndexedLineSet();
SoIndexedLineSet685->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate686 = new SoCoordinate();
SoCoordinate686->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2,1.44,-0.04}, 6);
SoIndexedLineSet685->setCoord(*SoCoordinate686);

SoShape683->setGeometry(*SoIndexedLineSet685);

SoHAnimSegment682->addChild(*SoShape683);

SoTransform* SoTransform687 = new SoTransform();
SoTransform687->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoShape* SoShape688 = new SoShape();
SoShape688->setUSE(QString("jointbox"));
SoTransform687->addChild(*SoShape688);

SoHAnimSegment682->addChild(*SoTransform687);

SoTransform* SoTransform689 = new SoTransform();
SoTransform689->setTranslation(new float[]{0.11,1.427,-0.1375});
SoShape* SoShape690 = new SoShape();
SoShape690->setUSE(QString("skinsphere"));
SoTransform689->addChild(*SoShape690);

SoHAnimSegment682->addChild(*SoTransform689);

SoHAnimSite* SoHAnimSite691 = new SoHAnimSite();
SoHAnimSite691->setDEF(QString("Joe_l_acromion"));
SoHAnimSite691->X3DNode::setName(QString("l_acromion"));
SoHAnimSite691->setTranslation(new float[]{0.175,1.4825,-0.06});
SoShape* SoShape692 = new SoShape();
SoShape692->setUSE(QString("sitebox"));
SoHAnimSite691->addChild(*SoShape692);

SoHAnimSegment682->addChild(*SoHAnimSite691);

SoHAnimSite* SoHAnimSite693 = new SoHAnimSite();
SoHAnimSite693->setDEF(QString("Joe_l_axilla_ant"));
SoHAnimSite693->X3DNode::setName(QString("l_axilla_ant"));
SoHAnimSite693->setTranslation(new float[]{0.17,1.38,0.007});
SoShape* SoShape694 = new SoShape();
SoShape694->setUSE(QString("sitebox"));
SoHAnimSite693->addChild(*SoShape694);

SoHAnimSegment682->addChild(*SoHAnimSite693);

SoHAnimSite* SoHAnimSite695 = new SoHAnimSite();
SoHAnimSite695->setDEF(QString("Joe_l_axilla_post"));
SoHAnimSite695->X3DNode::setName(QString("l_axilla_post"));
SoHAnimSite695->setTranslation(new float[]{0.16,1.38,-0.125});
SoShape* SoShape696 = new SoShape();
SoShape696->setUSE(QString("sitebox"));
SoHAnimSite695->addChild(*SoShape696);

SoHAnimSegment682->addChild(*SoHAnimSite695);

SoHAnimJoint681->addChildren(*SoHAnimSegment682);

SoHAnimJoint* SoHAnimJoint697 = new SoHAnimJoint();
SoHAnimJoint697->setDEF(QString("Joe_l_shoulder"));
SoHAnimJoint697->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint697->setRotation(new float[]{0.978440403355312,0.0,0.206529361307055,0.207668332501419});
SoHAnimJoint697->setCenter(new float[]{0.2,1.44,-0.04});
SoHAnimJoint697->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint697->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment698 = new SoHAnimSegment();
SoHAnimSegment698->setDEF(QString("Joe_l_upperarm"));
SoHAnimSegment698->X3DNode::setName(QString("l_upperarm"));
SoShape* SoShape699 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance700 = new SoVRMLAppearance();
SoVRMLAppearance700->setUSE(QString("SegmentLine"));
SoShape699->addChild(*SoVRMLAppearance700);

SoIndexedLineSet* SoIndexedLineSet701 = new SoIndexedLineSet();
SoIndexedLineSet701->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate702 = new SoCoordinate();
SoCoordinate702->setPoint(new float[]{0.2029,1.44,-0.0387,0.2,1.1388,-0.04}, 6);
SoIndexedLineSet701->setCoord(*SoCoordinate702);

SoShape699->setGeometry(*SoIndexedLineSet701);

SoHAnimSegment698->addChild(*SoShape699);

SoTransform* SoTransform703 = new SoTransform();
SoTransform703->setTranslation(new float[]{0.2,1.44,-0.04});
SoShape* SoShape704 = new SoShape();
SoShape704->setUSE(QString("jointbox"));
SoTransform703->addChild(*SoShape704);

SoHAnimSegment698->addChild(*SoTransform703);

SoTransform* SoTransform705 = new SoTransform();
SoTransform705->setTranslation(new float[]{0.235,1.42,-0.0625});
SoShape* SoShape706 = new SoShape();
SoShape706->setUSE(QString("skinsphere"));
SoTransform705->addChild(*SoShape706);

SoHAnimSegment698->addChild(*SoTransform705);

SoTransform* SoTransform707 = new SoTransform();
SoTransform707->setTranslation(new float[]{0.25,1.27,-0.04});
SoShape* SoShape708 = new SoShape();
SoShape708->setUSE(QString("skinsphere"));
SoTransform707->addChild(*SoShape708);

SoHAnimSegment698->addChild(*SoTransform707);

SoTransform* SoTransform709 = new SoTransform();
SoTransform709->setTranslation(new float[]{0.17,1.27,-0.04});
SoShape* SoShape710 = new SoShape();
SoShape710->setUSE(QString("skinsphere"));
SoTransform709->addChild(*SoShape710);

SoHAnimSegment698->addChild(*SoTransform709);

SoTransform* SoTransform711 = new SoTransform();
SoTransform711->setTranslation(new float[]{0.2,1.27,-0.09});
SoShape* SoShape712 = new SoShape();
SoShape712->setUSE(QString("skinsphere"));
SoTransform711->addChild(*SoShape712);

SoHAnimSegment698->addChild(*SoTransform711);

SoTransform* SoTransform713 = new SoTransform();
SoTransform713->setTranslation(new float[]{0.2,1.27,0.02});
SoShape* SoShape714 = new SoShape();
SoShape714->setUSE(QString("skinsphere"));
SoTransform713->addChild(*SoShape714);

SoHAnimSegment698->addChild(*SoTransform713);

SoHAnimSite* SoHAnimSite715 = new SoHAnimSite();
SoHAnimSite715->setDEF(QString("Joe_l_humeral_medial_epicn"));
SoHAnimSite715->X3DNode::setName(QString("l_humeral_medial_epicn"));
SoHAnimSite715->setTranslation(new float[]{0.165,1.1388,-0.04});
SoShape* SoShape716 = new SoShape();
SoShape716->setUSE(QString("sitebox"));
SoHAnimSite715->addChild(*SoShape716);

SoHAnimSegment698->addChild(*SoHAnimSite715);

SoHAnimSite* SoHAnimSite717 = new SoHAnimSite();
SoHAnimSite717->setDEF(QString("Joe_l_radiale"));
SoHAnimSite717->X3DNode::setName(QString("l_radiale"));
SoHAnimSite717->setTranslation(new float[]{0.23,1.133,-0.055});
SoShape* SoShape718 = new SoShape();
SoShape718->setUSE(QString("sitebox"));
SoHAnimSite717->addChild(*SoShape718);

SoHAnimSegment698->addChild(*SoHAnimSite717);

SoHAnimSite* SoHAnimSite719 = new SoHAnimSite();
SoHAnimSite719->setDEF(QString("Joe_l_humeral_lateral_epicn"));
SoHAnimSite719->X3DNode::setName(QString("l_humeral_lateral_epicn"));
SoHAnimSite719->setTranslation(new float[]{0.244,1.1388,-0.04});
SoShape* SoShape720 = new SoShape();
SoShape720->setUSE(QString("sitebox"));
SoHAnimSite719->addChild(*SoShape720);

SoHAnimSegment698->addChild(*SoHAnimSite719);

SoHAnimJoint697->addChildren(*SoHAnimSegment698);

SoHAnimJoint* SoHAnimJoint721 = new SoHAnimJoint();
SoHAnimJoint721->setDEF(QString("Joe_l_elbow"));
SoHAnimJoint721->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint721->setRotation(new float[]{-0.999999999999982,0.0,0.0,0.139356882713934});
SoHAnimJoint721->setCenter(new float[]{0.2,1.1388,-0.04});
SoHAnimJoint721->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint721->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimSegment* SoHAnimSegment722 = new SoHAnimSegment();
SoHAnimSegment722->setDEF(QString("Joe_l_forearm"));
SoHAnimSegment722->X3DNode::setName(QString("l_forearm"));
SoShape* SoShape723 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance724 = new SoVRMLAppearance();
SoVRMLAppearance724->setUSE(QString("SegmentLine"));
SoShape723->addChild(*SoVRMLAppearance724);

SoIndexedLineSet* SoIndexedLineSet725 = new SoIndexedLineSet();
SoIndexedLineSet725->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate726 = new SoCoordinate();
SoCoordinate726->setPoint(new float[]{0.2,1.1388,-0.04,0.2,0.87,-0.04}, 6);
SoIndexedLineSet725->setCoord(*SoCoordinate726);

SoShape723->setGeometry(*SoIndexedLineSet725);

SoHAnimSegment722->addChild(*SoShape723);

SoTransform* SoTransform727 = new SoTransform();
SoTransform727->setTranslation(new float[]{0.2,1.1388,-0.04});
SoShape* SoShape728 = new SoShape();
SoShape728->setUSE(QString("jointbox"));
SoTransform727->addChild(*SoShape728);

SoHAnimSegment722->addChild(*SoTransform727);

SoTransform* SoTransform729 = new SoTransform();
SoTransform729->setTranslation(new float[]{0.2,1.1388,-0.013});
SoShape* SoShape730 = new SoShape();
SoShape730->setUSE(QString("skinsphere"));
SoTransform729->addChild(*SoShape730);

SoHAnimSegment722->addChild(*SoTransform729);

SoTransform* SoTransform731 = new SoTransform();
SoTransform731->setTranslation(new float[]{0.225,1.0,-0.01});
SoShape* SoShape732 = new SoShape();
SoShape732->setUSE(QString("skinsphere"));
SoTransform731->addChild(*SoShape732);

SoHAnimSegment722->addChild(*SoTransform731);

SoTransform* SoTransform733 = new SoTransform();
SoTransform733->setTranslation(new float[]{0.225,1.0,-0.07});
SoShape* SoShape734 = new SoShape();
SoShape734->setUSE(QString("skinsphere"));
SoTransform733->addChild(*SoShape734);

SoHAnimSegment722->addChild(*SoTransform733);

SoTransform* SoTransform735 = new SoTransform();
SoTransform735->setTranslation(new float[]{0.185,1.0,-0.01});
SoShape* SoShape736 = new SoShape();
SoShape736->setUSE(QString("skinsphere"));
SoTransform735->addChild(*SoShape736);

SoHAnimSegment722->addChild(*SoTransform735);

SoTransform* SoTransform737 = new SoTransform();
SoTransform737->setTranslation(new float[]{0.185,1.0,-0.07});
SoShape* SoShape738 = new SoShape();
SoShape738->setUSE(QString("skinsphere"));
SoTransform737->addChild(*SoShape738);

SoHAnimSegment722->addChild(*SoTransform737);

SoHAnimSite* SoHAnimSite739 = new SoHAnimSite();
SoHAnimSite739->setDEF(QString("Joe_l_radial_styloid"));
SoHAnimSite739->X3DNode::setName(QString("l_radial_styloid"));
SoHAnimSite739->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoShape* SoShape740 = new SoShape();
SoShape740->setUSE(QString("sitebox"));
SoHAnimSite739->addChild(*SoShape740);

SoHAnimSegment722->addChild(*SoHAnimSite739);

SoHAnimSite* SoHAnimSite741 = new SoHAnimSite();
SoHAnimSite741->setDEF(QString("Joe_l_olecranon"));
SoHAnimSite741->X3DNode::setName(QString("l_olecranon"));
SoHAnimSite741->setTranslation(new float[]{0.2,1.1388,-0.08});
SoShape* SoShape742 = new SoShape();
SoShape742->setUSE(QString("sitebox"));
SoHAnimSite741->addChild(*SoShape742);

SoHAnimSegment722->addChild(*SoHAnimSite741);

SoHAnimJoint721->addChildren(*SoHAnimSegment722);

SoHAnimJoint* SoHAnimJoint743 = new SoHAnimJoint();
SoHAnimJoint743->setDEF(QString("Joe_l_wrist"));
SoHAnimJoint743->X3DNode::setName(QString("l_wrist"));
SoHAnimJoint743->setRotation(new float[]{-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821});
SoHAnimJoint743->setCenter(new float[]{0.2,0.87,-0.04});
SoHAnimJoint743->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint743->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment744 = new SoHAnimSegment();
SoHAnimSegment744->setDEF(QString("Joe_l_hand"));
SoHAnimSegment744->X3DNode::setName(QString("l_hand"));
SoShape* SoShape745 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance746 = new SoVRMLAppearance();
SoVRMLAppearance746->setUSE(QString("SegmentLine"));
SoShape745->addChild(*SoVRMLAppearance746);

SoIndexedLineSet* SoIndexedLineSet747 = new SoIndexedLineSet();
SoIndexedLineSet747->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
SoCoordinate* SoCoordinate748 = new SoCoordinate();
SoCoordinate748->setPoint(new float[]{0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036}, 18);
SoIndexedLineSet747->setCoord(*SoCoordinate748);

SoShape745->setGeometry(*SoIndexedLineSet747);

SoHAnimSegment744->addChild(*SoShape745);

SoTransform* SoTransform749 = new SoTransform();
SoTransform749->setTranslation(new float[]{0.2,0.87,-0.04});
SoShape* SoShape750 = new SoShape();
SoShape750->setUSE(QString("jointbox"));
SoTransform749->addChild(*SoShape750);

SoHAnimSegment744->addChild(*SoTransform749);

SoHAnimSite* SoHAnimSite751 = new SoHAnimSite();
SoHAnimSite751->setDEF(QString("Joe_l_metacarpal_pha2"));
SoHAnimSite751->X3DNode::setName(QString("l_metacarpal_pha2"));
SoHAnimSite751->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoShape* SoShape752 = new SoShape();
SoShape752->setUSE(QString("sitebox"));
SoHAnimSite751->addChild(*SoShape752);

SoHAnimSegment744->addChild(*SoHAnimSite751);

SoHAnimSite* SoHAnimSite753 = new SoHAnimSite();
SoHAnimSite753->setDEF(QString("Joe_l_ulnar_styloid"));
SoHAnimSite753->X3DNode::setName(QString("l_ulnar_styloid"));
SoHAnimSite753->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoShape* SoShape754 = new SoShape();
SoShape754->setUSE(QString("sitebox"));
SoHAnimSite753->addChild(*SoShape754);

SoHAnimSegment744->addChild(*SoHAnimSite753);

SoHAnimSite* SoHAnimSite755 = new SoHAnimSite();
SoHAnimSite755->setDEF(QString("Joe_l_metacarpal_pha5"));
SoHAnimSite755->X3DNode::setName(QString("l_metacarpal_pha5"));
SoHAnimSite755->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoShape* SoShape756 = new SoShape();
SoShape756->setUSE(QString("sitebox"));
SoHAnimSite755->addChild(*SoShape756);

SoHAnimSegment744->addChild(*SoHAnimSite755);

SoHAnimJoint743->addChildren(*SoHAnimSegment744);

SoHAnimJoint* SoHAnimJoint757 = new SoHAnimJoint();
SoHAnimJoint757->setDEF(QString("Joe_l_thumb1"));
SoHAnimJoint757->X3DNode::setName(QString("l_thumb1"));
SoHAnimJoint757->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint757->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint757->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment758 = new SoHAnimSegment();
SoHAnimSegment758->setDEF(QString("Joe_l_thumb_metacarpal"));
SoHAnimSegment758->X3DNode::setName(QString("l_thumb_metacarpal"));
SoShape* SoShape759 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance760 = new SoVRMLAppearance();
SoVRMLAppearance760->setUSE(QString("SegmentLine"));
SoShape759->addChild(*SoVRMLAppearance760);

SoIndexedLineSet* SoIndexedLineSet761 = new SoIndexedLineSet();
SoIndexedLineSet761->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate762 = new SoCoordinate();
SoCoordinate762->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoIndexedLineSet761->setCoord(*SoCoordinate762);

SoShape759->setGeometry(*SoIndexedLineSet761);

SoHAnimSegment758->addChild(*SoShape759);

SoTransform* SoTransform763 = new SoTransform();
SoTransform763->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape764 = new SoShape();
SoShape764->setUSE(QString("jointbox"));
SoTransform763->addChild(*SoShape764);

SoHAnimSegment758->addChild(*SoTransform763);

SoHAnimJoint757->addChildren(*SoHAnimSegment758);

SoHAnimJoint* SoHAnimJoint765 = new SoHAnimJoint();
SoHAnimJoint765->setDEF(QString("Joe_l_thumb2"));
SoHAnimJoint765->X3DNode::setName(QString("l_thumb2"));
SoHAnimJoint765->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint765->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint765->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment766 = new SoHAnimSegment();
SoHAnimSegment766->setDEF(QString("Joe_l_thumb_proximal"));
SoHAnimSegment766->X3DNode::setName(QString("l_thumb_distal"));
SoShape* SoShape767 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance768 = new SoVRMLAppearance();
SoVRMLAppearance768->setUSE(QString("SegmentLine"));
SoShape767->addChild(*SoVRMLAppearance768);

SoIndexedLineSet* SoIndexedLineSet769 = new SoIndexedLineSet();
SoIndexedLineSet769->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate770 = new SoCoordinate();
SoCoordinate770->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoIndexedLineSet769->setCoord(*SoCoordinate770);

SoShape767->setGeometry(*SoIndexedLineSet769);

SoHAnimSegment766->addChild(*SoShape767);

SoTransform* SoTransform771 = new SoTransform();
SoTransform771->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape772 = new SoShape();
SoShape772->setUSE(QString("jointbox"));
SoTransform771->addChild(*SoShape772);

SoHAnimSegment766->addChild(*SoTransform771);

SoHAnimJoint765->addChildren(*SoHAnimSegment766);

SoHAnimJoint* SoHAnimJoint773 = new SoHAnimJoint();
SoHAnimJoint773->setDEF(QString("Joe_l_thumb3"));
SoHAnimJoint773->X3DNode::setName(QString("l_thumb3"));
SoHAnimJoint773->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint773->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint773->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment774 = new SoHAnimSegment();
SoHAnimSegment774->setDEF(QString("Joe_l_thumb_distal"));
SoHAnimSegment774->X3DNode::setName(QString("l_thumb_distal"));
SoShape* SoShape775 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance776 = new SoVRMLAppearance();
SoVRMLAppearance776->setUSE(QString("SegmentLine"));
SoShape775->addChild(*SoVRMLAppearance776);

SoIndexedLineSet* SoIndexedLineSet777 = new SoIndexedLineSet();
SoIndexedLineSet777->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate778 = new SoCoordinate();
SoCoordinate778->setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
SoIndexedLineSet777->setCoord(*SoCoordinate778);

SoShape775->setGeometry(*SoIndexedLineSet777);

SoHAnimSegment774->addChild(*SoShape775);

SoTransform* SoTransform779 = new SoTransform();
SoTransform779->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape780 = new SoShape();
SoShape780->setUSE(QString("jointbox"));
SoTransform779->addChild(*SoShape780);

SoHAnimSegment774->addChild(*SoTransform779);

SoHAnimSite* SoHAnimSite781 = new SoHAnimSite();
SoHAnimSite781->setDEF(QString("Joe_l_thumb_distal_tip"));
SoHAnimSite781->X3DNode::setName(QString("l_thumb_distal_tip"));
SoHAnimSite781->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoShape* SoShape782 = new SoShape();
SoShape782->setUSE(QString("sitebox"));
SoHAnimSite781->addChild(*SoShape782);

SoHAnimSegment774->addChild(*SoHAnimSite781);

SoHAnimJoint773->addChildren(*SoHAnimSegment774);

SoHAnimJoint765->addChildren(*SoHAnimJoint773);

SoHAnimJoint757->addChildren(*SoHAnimJoint765);

SoHAnimJoint743->addChildren(*SoHAnimJoint757);

SoHAnimJoint* SoHAnimJoint783 = new SoHAnimJoint();
SoHAnimJoint783->setDEF(QString("Joe_l_index0"));
SoHAnimJoint783->X3DNode::setName(QString("l_index0"));
SoHAnimJoint783->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint783->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint783->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment784 = new SoHAnimSegment();
SoHAnimSegment784->setDEF(QString("Joe_l_index_metacarpal"));
SoHAnimSegment784->X3DNode::setName(QString("l_index_metacarpal"));
SoShape* SoShape785 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance786 = new SoVRMLAppearance();
SoVRMLAppearance786->setUSE(QString("SegmentLine"));
SoShape785->addChild(*SoVRMLAppearance786);

SoIndexedLineSet* SoIndexedLineSet787 = new SoIndexedLineSet();
SoIndexedLineSet787->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate788 = new SoCoordinate();
SoCoordinate788->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoIndexedLineSet787->setCoord(*SoCoordinate788);

SoShape785->setGeometry(*SoIndexedLineSet787);

SoHAnimSegment784->addChild(*SoShape785);

SoTransform* SoTransform789 = new SoTransform();
SoTransform789->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape790 = new SoShape();
SoShape790->setUSE(QString("jointbox"));
SoTransform789->addChild(*SoShape790);

SoHAnimSegment784->addChild(*SoTransform789);

SoHAnimJoint783->addChildren(*SoHAnimSegment784);

SoHAnimJoint* SoHAnimJoint791 = new SoHAnimJoint();
SoHAnimJoint791->setDEF(QString("Joe_l_index1"));
SoHAnimJoint791->X3DNode::setName(QString("l_index1"));
SoHAnimJoint791->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint791->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint791->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimSegment* SoHAnimSegment792 = new SoHAnimSegment();
SoHAnimSegment792->setDEF(QString("Joe_l_index_proximal"));
SoHAnimSegment792->X3DNode::setName(QString("l_index_proximal"));
SoShape* SoShape793 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance794 = new SoVRMLAppearance();
SoVRMLAppearance794->setUSE(QString("SegmentLine"));
SoShape793->addChild(*SoVRMLAppearance794);

SoIndexedLineSet* SoIndexedLineSet795 = new SoIndexedLineSet();
SoIndexedLineSet795->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate796 = new SoCoordinate();
SoCoordinate796->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoIndexedLineSet795->setCoord(*SoCoordinate796);

SoShape793->setGeometry(*SoIndexedLineSet795);

SoHAnimSegment792->addChild(*SoShape793);

SoTransform* SoTransform797 = new SoTransform();
SoTransform797->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape798 = new SoShape();
SoShape798->setUSE(QString("jointbox"));
SoTransform797->addChild(*SoShape798);

SoHAnimSegment792->addChild(*SoTransform797);

SoHAnimJoint791->addChildren(*SoHAnimSegment792);

SoHAnimJoint* SoHAnimJoint799 = new SoHAnimJoint();
SoHAnimJoint799->setDEF(QString("Joe_l_index2"));
SoHAnimJoint799->X3DNode::setName(QString("l_index2"));
SoHAnimJoint799->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint799->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint799->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment800 = new SoHAnimSegment();
SoHAnimSegment800->setDEF(QString("Joe_l_index_middle"));
SoHAnimSegment800->X3DNode::setName(QString("l_index_middle"));
SoShape* SoShape801 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance802 = new SoVRMLAppearance();
SoVRMLAppearance802->setUSE(QString("SegmentLine"));
SoShape801->addChild(*SoVRMLAppearance802);

SoIndexedLineSet* SoIndexedLineSet803 = new SoIndexedLineSet();
SoIndexedLineSet803->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate804 = new SoCoordinate();
SoCoordinate804->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoIndexedLineSet803->setCoord(*SoCoordinate804);

SoShape801->setGeometry(*SoIndexedLineSet803);

SoHAnimSegment800->addChild(*SoShape801);

SoTransform* SoTransform805 = new SoTransform();
SoTransform805->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape806 = new SoShape();
SoShape806->setUSE(QString("jointbox"));
SoTransform805->addChild(*SoShape806);

SoHAnimSegment800->addChild(*SoTransform805);

SoHAnimJoint799->addChildren(*SoHAnimSegment800);

SoHAnimJoint* SoHAnimJoint807 = new SoHAnimJoint();
SoHAnimJoint807->setDEF(QString("Joe_l_index3"));
SoHAnimJoint807->X3DNode::setName(QString("l_index3"));
SoHAnimJoint807->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint807->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint807->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment808 = new SoHAnimSegment();
SoHAnimSegment808->setDEF(QString("Joe_l_index_distal"));
SoHAnimSegment808->X3DNode::setName(QString("l_index_distal"));
SoShape* SoShape809 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance810 = new SoVRMLAppearance();
SoVRMLAppearance810->setUSE(QString("SegmentLine"));
SoShape809->addChild(*SoVRMLAppearance810);

SoIndexedLineSet* SoIndexedLineSet811 = new SoIndexedLineSet();
SoIndexedLineSet811->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate812 = new SoCoordinate();
SoCoordinate812->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
SoIndexedLineSet811->setCoord(*SoCoordinate812);

SoShape809->setGeometry(*SoIndexedLineSet811);

SoHAnimSegment808->addChild(*SoShape809);

SoTransform* SoTransform813 = new SoTransform();
SoTransform813->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape814 = new SoShape();
SoShape814->setUSE(QString("jointbox"));
SoTransform813->addChild(*SoShape814);

SoHAnimSegment808->addChild(*SoTransform813);

SoHAnimSite* SoHAnimSite815 = new SoHAnimSite();
SoHAnimSite815->setDEF(QString("Joe_l_index_distal_tip"));
SoHAnimSite815->X3DNode::setName(QString("l_index_distal_tip"));
SoHAnimSite815->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoShape* SoShape816 = new SoShape();
SoShape816->setUSE(QString("sitebox"));
SoHAnimSite815->addChild(*SoShape816);

SoHAnimSegment808->addChild(*SoHAnimSite815);

SoHAnimSite* SoHAnimSite817 = new SoHAnimSite();
SoHAnimSite817->setDEF(QString("Joe_l_dactylion"));
SoHAnimSite817->X3DNode::setName(QString("l_dactylion"));
SoHAnimSite817->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoShape* SoShape818 = new SoShape();
SoShape818->setUSE(QString("sitebox"));
SoHAnimSite817->addChild(*SoShape818);

SoHAnimSegment808->addChild(*SoHAnimSite817);

SoHAnimJoint807->addChildren(*SoHAnimSegment808);

SoHAnimJoint799->addChildren(*SoHAnimJoint807);

SoHAnimJoint791->addChildren(*SoHAnimJoint799);

SoHAnimJoint783->addChildren(*SoHAnimJoint791);

SoHAnimJoint743->addChildren(*SoHAnimJoint783);

SoHAnimJoint* SoHAnimJoint819 = new SoHAnimJoint();
SoHAnimJoint819->setDEF(QString("Joe_l_middle0"));
SoHAnimJoint819->X3DNode::setName(QString("l_middle0"));
SoHAnimJoint819->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint819->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint819->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment820 = new SoHAnimSegment();
SoHAnimSegment820->setDEF(QString("Joe_l_middle_metacarpal"));
SoHAnimSegment820->X3DNode::setName(QString("l_middle_metacarpal"));
SoShape* SoShape821 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance822 = new SoVRMLAppearance();
SoVRMLAppearance822->setUSE(QString("SegmentLine"));
SoShape821->addChild(*SoVRMLAppearance822);

SoIndexedLineSet* SoIndexedLineSet823 = new SoIndexedLineSet();
SoIndexedLineSet823->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate824 = new SoCoordinate();
SoCoordinate824->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoIndexedLineSet823->setCoord(*SoCoordinate824);

SoShape821->setGeometry(*SoIndexedLineSet823);

SoHAnimSegment820->addChild(*SoShape821);

SoTransform* SoTransform825 = new SoTransform();
SoTransform825->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoShape* SoShape826 = new SoShape();
SoShape826->setUSE(QString("jointbox"));
SoTransform825->addChild(*SoShape826);

SoHAnimSegment820->addChild(*SoTransform825);

SoHAnimJoint819->addChildren(*SoHAnimSegment820);

SoHAnimJoint* SoHAnimJoint827 = new SoHAnimJoint();
SoHAnimJoint827->setDEF(QString("Joe_l_middle1"));
SoHAnimJoint827->X3DNode::setName(QString("l_middle1"));
SoHAnimJoint827->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint827->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint827->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment828 = new SoHAnimSegment();
SoHAnimSegment828->setDEF(QString("Joe_l_middle_proximal"));
SoHAnimSegment828->X3DNode::setName(QString("l_middle_proximal"));
SoShape* SoShape829 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance830 = new SoVRMLAppearance();
SoVRMLAppearance830->setUSE(QString("SegmentLine"));
SoShape829->addChild(*SoVRMLAppearance830);

SoIndexedLineSet* SoIndexedLineSet831 = new SoIndexedLineSet();
SoIndexedLineSet831->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate832 = new SoCoordinate();
SoCoordinate832->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoIndexedLineSet831->setCoord(*SoCoordinate832);

SoShape829->setGeometry(*SoIndexedLineSet831);

SoHAnimSegment828->addChild(*SoShape829);

SoTransform* SoTransform833 = new SoTransform();
SoTransform833->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoShape* SoShape834 = new SoShape();
SoShape834->setUSE(QString("jointbox"));
SoTransform833->addChild(*SoShape834);

SoHAnimSegment828->addChild(*SoTransform833);

SoHAnimJoint827->addChildren(*SoHAnimSegment828);

SoHAnimJoint* SoHAnimJoint835 = new SoHAnimJoint();
SoHAnimJoint835->setDEF(QString("Joe_l_middle2"));
SoHAnimJoint835->X3DNode::setName(QString("l_middle2"));
SoHAnimJoint835->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint835->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint835->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment836 = new SoHAnimSegment();
SoHAnimSegment836->setDEF(QString("Joe_l_middle_middle"));
SoHAnimSegment836->X3DNode::setName(QString("l_middle_middle"));
SoShape* SoShape837 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance838 = new SoVRMLAppearance();
SoVRMLAppearance838->setUSE(QString("SegmentLine"));
SoShape837->addChild(*SoVRMLAppearance838);

SoIndexedLineSet* SoIndexedLineSet839 = new SoIndexedLineSet();
SoIndexedLineSet839->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate840 = new SoCoordinate();
SoCoordinate840->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoIndexedLineSet839->setCoord(*SoCoordinate840);

SoShape837->setGeometry(*SoIndexedLineSet839);

SoHAnimSegment836->addChild(*SoShape837);

SoTransform* SoTransform841 = new SoTransform();
SoTransform841->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoShape* SoShape842 = new SoShape();
SoShape842->setUSE(QString("jointbox"));
SoTransform841->addChild(*SoShape842);

SoHAnimSegment836->addChild(*SoTransform841);

SoHAnimJoint835->addChildren(*SoHAnimSegment836);

SoHAnimJoint* SoHAnimJoint843 = new SoHAnimJoint();
SoHAnimJoint843->setDEF(QString("Joe_l_middle3"));
SoHAnimJoint843->X3DNode::setName(QString("l_middle3"));
SoHAnimJoint843->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint843->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint843->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment844 = new SoHAnimSegment();
SoHAnimSegment844->setDEF(QString("Joe_l_middle_distal"));
SoHAnimSegment844->X3DNode::setName(QString("l_middle_distal"));
SoShape* SoShape845 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance846 = new SoVRMLAppearance();
SoVRMLAppearance846->setUSE(QString("SegmentLine"));
SoShape845->addChild(*SoVRMLAppearance846);

SoIndexedLineSet* SoIndexedLineSet847 = new SoIndexedLineSet();
SoIndexedLineSet847->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate848 = new SoCoordinate();
SoCoordinate848->setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
SoIndexedLineSet847->setCoord(*SoCoordinate848);

SoShape845->setGeometry(*SoIndexedLineSet847);

SoHAnimSegment844->addChild(*SoShape845);

SoHAnimSite* SoHAnimSite849 = new SoHAnimSite();
SoHAnimSite849->setDEF(QString("Joe_l_middle_distal_tip"));
SoHAnimSite849->X3DNode::setName(QString("l_middle_distal_tip"));
SoHAnimSite849->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoShape* SoShape850 = new SoShape();
SoShape850->setUSE(QString("sitebox"));
SoHAnimSite849->addChild(*SoShape850);

SoHAnimSegment844->addChild(*SoHAnimSite849);

SoTransform* SoTransform851 = new SoTransform();
SoTransform851->setTranslation(new float[]{0.2026,0.7011,-0.0494});
SoShape* SoShape852 = new SoShape();
SoShape852->setUSE(QString("jointbox"));
SoTransform851->addChild(*SoShape852);

SoHAnimSegment844->addChild(*SoTransform851);

SoHAnimJoint843->addChildren(*SoHAnimSegment844);

SoHAnimJoint835->addChildren(*SoHAnimJoint843);

SoHAnimJoint827->addChildren(*SoHAnimJoint835);

SoHAnimJoint819->addChildren(*SoHAnimJoint827);

SoHAnimJoint743->addChildren(*SoHAnimJoint819);

SoHAnimJoint* SoHAnimJoint853 = new SoHAnimJoint();
SoHAnimJoint853->setDEF(QString("Joe_l_ring0"));
SoHAnimJoint853->X3DNode::setName(QString("l_ring0"));
SoHAnimJoint853->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint853->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint853->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment854 = new SoHAnimSegment();
SoHAnimSegment854->setDEF(QString("Joe_l_ring_metacarpal"));
SoHAnimSegment854->X3DNode::setName(QString("l_ring_metacarpal"));
SoShape* SoShape855 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance856 = new SoVRMLAppearance();
SoVRMLAppearance856->setUSE(QString("SegmentLine"));
SoShape855->addChild(*SoVRMLAppearance856);

SoIndexedLineSet* SoIndexedLineSet857 = new SoIndexedLineSet();
SoIndexedLineSet857->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate858 = new SoCoordinate();
SoCoordinate858->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoIndexedLineSet857->setCoord(*SoCoordinate858);

SoShape855->setGeometry(*SoIndexedLineSet857);

SoHAnimSegment854->addChild(*SoShape855);

SoTransform* SoTransform859 = new SoTransform();
SoTransform859->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoShape* SoShape860 = new SoShape();
SoShape860->setUSE(QString("jointbox"));
SoTransform859->addChild(*SoShape860);

SoHAnimSegment854->addChild(*SoTransform859);

SoHAnimJoint853->addChildren(*SoHAnimSegment854);

SoHAnimJoint* SoHAnimJoint861 = new SoHAnimJoint();
SoHAnimJoint861->setDEF(QString("Joe_l_ring1"));
SoHAnimJoint861->X3DNode::setName(QString("l_ring1"));
SoHAnimJoint861->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint861->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint861->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment862 = new SoHAnimSegment();
SoHAnimSegment862->setDEF(QString("Joe_l_ring_proximal"));
SoHAnimSegment862->X3DNode::setName(QString("l_ring_proximal"));
SoShape* SoShape863 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance864 = new SoVRMLAppearance();
SoVRMLAppearance864->setUSE(QString("SegmentLine"));
SoShape863->addChild(*SoVRMLAppearance864);

SoIndexedLineSet* SoIndexedLineSet865 = new SoIndexedLineSet();
SoIndexedLineSet865->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate866 = new SoCoordinate();
SoCoordinate866->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoIndexedLineSet865->setCoord(*SoCoordinate866);

SoShape863->setGeometry(*SoIndexedLineSet865);

SoHAnimSegment862->addChild(*SoShape863);

SoTransform* SoTransform867 = new SoTransform();
SoTransform867->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoShape* SoShape868 = new SoShape();
SoShape868->setUSE(QString("jointbox"));
SoTransform867->addChild(*SoShape868);

SoHAnimSegment862->addChild(*SoTransform867);

SoHAnimJoint861->addChildren(*SoHAnimSegment862);

SoHAnimJoint* SoHAnimJoint869 = new SoHAnimJoint();
SoHAnimJoint869->setDEF(QString("Joe_l_ring2"));
SoHAnimJoint869->X3DNode::setName(QString("l_ring2"));
SoHAnimJoint869->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint869->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint869->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment870 = new SoHAnimSegment();
SoHAnimSegment870->setDEF(QString("Joe_l_ring_middle"));
SoHAnimSegment870->X3DNode::setName(QString("l_ring_middle"));
SoShape* SoShape871 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance872 = new SoVRMLAppearance();
SoVRMLAppearance872->setUSE(QString("SegmentLine"));
SoShape871->addChild(*SoVRMLAppearance872);

SoIndexedLineSet* SoIndexedLineSet873 = new SoIndexedLineSet();
SoIndexedLineSet873->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate874 = new SoCoordinate();
SoCoordinate874->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoIndexedLineSet873->setCoord(*SoCoordinate874);

SoShape871->setGeometry(*SoIndexedLineSet873);

SoHAnimSegment870->addChild(*SoShape871);

SoTransform* SoTransform875 = new SoTransform();
SoTransform875->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoShape* SoShape876 = new SoShape();
SoShape876->setUSE(QString("jointbox"));
SoTransform875->addChild(*SoShape876);

SoHAnimSegment870->addChild(*SoTransform875);

SoHAnimJoint869->addChildren(*SoHAnimSegment870);

SoHAnimJoint* SoHAnimJoint877 = new SoHAnimJoint();
SoHAnimJoint877->setDEF(QString("Joe_l_ring3"));
SoHAnimJoint877->X3DNode::setName(QString("l_ring3"));
SoHAnimJoint877->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint877->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint877->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment878 = new SoHAnimSegment();
SoHAnimSegment878->setDEF(QString("Joe_l_ring_distal"));
SoHAnimSegment878->X3DNode::setName(QString("l_ring_distal"));
SoShape* SoShape879 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance880 = new SoVRMLAppearance();
SoVRMLAppearance880->setUSE(QString("SegmentLine"));
SoShape879->addChild(*SoVRMLAppearance880);

SoIndexedLineSet* SoIndexedLineSet881 = new SoIndexedLineSet();
SoIndexedLineSet881->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate882 = new SoCoordinate();
SoCoordinate882->setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
SoIndexedLineSet881->setCoord(*SoCoordinate882);

SoShape879->setGeometry(*SoIndexedLineSet881);

SoHAnimSegment878->addChild(*SoShape879);

SoTransform* SoTransform883 = new SoTransform();
SoTransform883->setTranslation(new float[]{0.1983,0.7045,-0.0767});
SoShape* SoShape884 = new SoShape();
SoShape884->setUSE(QString("jointbox"));
SoTransform883->addChild(*SoShape884);

SoHAnimSegment878->addChild(*SoTransform883);

SoHAnimSite* SoHAnimSite885 = new SoHAnimSite();
SoHAnimSite885->setDEF(QString("Joe_l_ring_distal_tip"));
SoHAnimSite885->X3DNode::setName(QString("l_ring_distal_tip"));
SoHAnimSite885->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoShape* SoShape886 = new SoShape();
SoShape886->setUSE(QString("sitebox"));
SoHAnimSite885->addChild(*SoShape886);

SoHAnimSegment878->addChild(*SoHAnimSite885);

SoHAnimJoint877->addChildren(*SoHAnimSegment878);

SoHAnimJoint869->addChildren(*SoHAnimJoint877);

SoHAnimJoint861->addChildren(*SoHAnimJoint869);

SoHAnimJoint853->addChildren(*SoHAnimJoint861);

SoHAnimJoint743->addChildren(*SoHAnimJoint853);

SoHAnimJoint* SoHAnimJoint887 = new SoHAnimJoint();
SoHAnimJoint887->setDEF(QString("Joe_l_pinky0"));
SoHAnimJoint887->X3DNode::setName(QString("l_pinky0"));
SoHAnimJoint887->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint887->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint887->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimSegment* SoHAnimSegment888 = new SoHAnimSegment();
SoHAnimSegment888->setDEF(QString("Joe_l_pinky_metacarpal"));
SoHAnimSegment888->X3DNode::setName(QString("l_pinky_metacarpal"));
SoShape* SoShape889 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance890 = new SoVRMLAppearance();
SoVRMLAppearance890->setUSE(QString("SegmentLine"));
SoShape889->addChild(*SoVRMLAppearance890);

SoIndexedLineSet* SoIndexedLineSet891 = new SoIndexedLineSet();
SoIndexedLineSet891->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate892 = new SoCoordinate();
SoCoordinate892->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoIndexedLineSet891->setCoord(*SoCoordinate892);

SoShape889->setGeometry(*SoIndexedLineSet891);

SoHAnimSegment888->addChild(*SoShape889);

SoTransform* SoTransform893 = new SoTransform();
SoTransform893->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoShape* SoShape894 = new SoShape();
SoShape894->setUSE(QString("jointbox"));
SoTransform893->addChild(*SoShape894);

SoHAnimSegment888->addChild(*SoTransform893);

SoHAnimJoint887->addChildren(*SoHAnimSegment888);

SoHAnimJoint* SoHAnimJoint895 = new SoHAnimJoint();
SoHAnimJoint895->setDEF(QString("Joe_l_pinky1"));
SoHAnimJoint895->X3DNode::setName(QString("l_pinky1"));
SoHAnimJoint895->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint895->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint895->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment896 = new SoHAnimSegment();
SoHAnimSegment896->setDEF(QString("Joe_l_pinky_proximal"));
SoHAnimSegment896->X3DNode::setName(QString("l_pinky_proximal"));
SoShape* SoShape897 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance898 = new SoVRMLAppearance();
SoVRMLAppearance898->setUSE(QString("SegmentLine"));
SoShape897->addChild(*SoVRMLAppearance898);

SoIndexedLineSet* SoIndexedLineSet899 = new SoIndexedLineSet();
SoIndexedLineSet899->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate900 = new SoCoordinate();
SoCoordinate900->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoIndexedLineSet899->setCoord(*SoCoordinate900);

SoShape897->setGeometry(*SoIndexedLineSet899);

SoHAnimSegment896->addChild(*SoShape897);

SoTransform* SoTransform901 = new SoTransform();
SoTransform901->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoShape* SoShape902 = new SoShape();
SoShape902->setUSE(QString("jointbox"));
SoTransform901->addChild(*SoShape902);

SoHAnimSegment896->addChild(*SoTransform901);

SoHAnimJoint895->addChildren(*SoHAnimSegment896);

SoHAnimJoint* SoHAnimJoint903 = new SoHAnimJoint();
SoHAnimJoint903->setDEF(QString("Joe_l_pinky2"));
SoHAnimJoint903->X3DNode::setName(QString("l_pinky2"));
SoHAnimJoint903->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint903->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint903->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment904 = new SoHAnimSegment();
SoHAnimSegment904->setDEF(QString("Joe_l_pinky_middle"));
SoHAnimSegment904->X3DNode::setName(QString("l_pinky_middle"));
SoTransform* SoTransform905 = new SoTransform();
SoTransform905->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoShape* SoShape906 = new SoShape();
SoShape906->setUSE(QString("jointbox"));
SoTransform905->addChild(*SoShape906);

SoHAnimSegment904->addChild(*SoTransform905);

SoShape* SoShape907 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance908 = new SoVRMLAppearance();
SoVRMLAppearance908->setUSE(QString("SegmentLine"));
SoShape907->addChild(*SoVRMLAppearance908);

SoIndexedLineSet* SoIndexedLineSet909 = new SoIndexedLineSet();
SoIndexedLineSet909->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate910 = new SoCoordinate();
SoCoordinate910->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoIndexedLineSet909->setCoord(*SoCoordinate910);

SoShape907->setGeometry(*SoIndexedLineSet909);

SoHAnimSegment904->addChild(*SoShape907);

SoHAnimJoint903->addChildren(*SoHAnimSegment904);

SoHAnimJoint* SoHAnimJoint911 = new SoHAnimJoint();
SoHAnimJoint911->setDEF(QString("Joe_l_pinky3"));
SoHAnimJoint911->X3DNode::setName(QString("l_pinky3"));
SoHAnimJoint911->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint911->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint911->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment912 = new SoHAnimSegment();
SoHAnimSegment912->setDEF(QString("Joe_l_pinky_distal"));
SoHAnimSegment912->X3DNode::setName(QString("l_pinky_distal"));
SoShape* SoShape913 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance914 = new SoVRMLAppearance();
SoVRMLAppearance914->setUSE(QString("SegmentLine"));
SoShape913->addChild(*SoVRMLAppearance914);

SoIndexedLineSet* SoIndexedLineSet915 = new SoIndexedLineSet();
SoIndexedLineSet915->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate916 = new SoCoordinate();
SoCoordinate916->setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
SoIndexedLineSet915->setCoord(*SoCoordinate916);

SoShape913->setGeometry(*SoIndexedLineSet915);

SoHAnimSegment912->addChild(*SoShape913);

SoTransform* SoTransform917 = new SoTransform();
SoTransform917->setTranslation(new float[]{0.1948,0.7277,-0.1017});
SoShape* SoShape918 = new SoShape();
SoShape918->setUSE(QString("jointbox"));
SoTransform917->addChild(*SoShape918);

SoHAnimSegment912->addChild(*SoTransform917);

SoHAnimSite* SoHAnimSite919 = new SoHAnimSite();
SoHAnimSite919->setDEF(QString("Joe_l_pinky_distal_tip"));
SoHAnimSite919->X3DNode::setName(QString("l_pinky_distal_tip"));
SoHAnimSite919->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoShape* SoShape920 = new SoShape();
SoShape920->setUSE(QString("sitebox"));
SoHAnimSite919->addChild(*SoShape920);

SoHAnimSegment912->addChild(*SoHAnimSite919);

SoHAnimJoint911->addChildren(*SoHAnimSegment912);

SoHAnimJoint903->addChildren(*SoHAnimJoint911);

SoHAnimJoint895->addChildren(*SoHAnimJoint903);

SoHAnimJoint887->addChildren(*SoHAnimJoint895);

SoHAnimJoint743->addChildren(*SoHAnimJoint887);

SoHAnimJoint721->addChildren(*SoHAnimJoint743);

SoHAnimJoint697->addChildren(*SoHAnimJoint721);

SoHAnimJoint681->addChildren(*SoHAnimJoint697);

SoHAnimJoint671->addChildren(*SoHAnimJoint681);

SoHAnimJoint555->addChildren(*SoHAnimJoint671);

SoHAnimJoint* SoHAnimJoint921 = new SoHAnimJoint();
SoHAnimJoint921->setDEF(QString("Joe_r_sternoclavicular"));
SoHAnimJoint921->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint921->setCenter(new float[]{-0.03,1.46,0.0});
SoHAnimJoint921->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint921->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment922 = new SoHAnimSegment();
SoHAnimSegment922->setDEF(QString("Joe_r_clavicle"));
SoHAnimSegment922->X3DNode::setName(QString("r_clavicle"));
SoShape* SoShape923 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance924 = new SoVRMLAppearance();
SoVRMLAppearance924->setUSE(QString("SegmentLine"));
SoShape923->addChild(*SoVRMLAppearance924);

SoIndexedLineSet* SoIndexedLineSet925 = new SoIndexedLineSet();
SoIndexedLineSet925->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate926 = new SoCoordinate();
SoCoordinate926->setPoint(new float[]{-0.03,1.46,0.02,-0.09,1.41,-0.09}, 6);
SoIndexedLineSet925->setCoord(*SoCoordinate926);

SoShape923->setGeometry(*SoIndexedLineSet925);

SoHAnimSegment922->addChild(*SoShape923);

SoTransform* SoTransform927 = new SoTransform();
SoTransform927->setTranslation(new float[]{-0.03,1.46,0.02});
SoShape* SoShape928 = new SoShape();
SoShape928->setUSE(QString("jointbox"));
SoTransform927->addChild(*SoShape928);

SoHAnimSegment922->addChild(*SoTransform927);

SoHAnimSite* SoHAnimSite929 = new SoHAnimSite();
SoHAnimSite929->setDEF(QString("Joe_r_clavicale"));
SoHAnimSite929->X3DNode::setName(QString("r_clavicale"));
SoHAnimSite929->setTranslation(new float[]{-0.03,1.46,0.035});
SoShape* SoShape930 = new SoShape();
SoShape930->setUSE(QString("sitebox"));
SoHAnimSite929->addChild(*SoShape930);

SoHAnimSegment922->addChild(*SoHAnimSite929);

SoHAnimJoint921->addChildren(*SoHAnimSegment922);

SoHAnimJoint* SoHAnimJoint931 = new SoHAnimJoint();
SoHAnimJoint931->setDEF(QString("Joe_r_acromioclavicular"));
SoHAnimJoint931->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint931->setCenter(new float[]{-0.09,1.41,-0.11});
SoHAnimJoint931->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint931->setSkinCoordWeight(new float[]{1.0,0.9}, 2);
SoHAnimSegment* SoHAnimSegment932 = new SoHAnimSegment();
SoHAnimSegment932->setDEF(QString("Joe_r_scapula"));
SoHAnimSegment932->X3DNode::setName(QString("r_scapula"));
SoShape* SoShape933 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance934 = new SoVRMLAppearance();
SoVRMLAppearance934->setUSE(QString("SegmentLine"));
SoShape933->addChild(*SoVRMLAppearance934);

SoIndexedLineSet* SoIndexedLineSet935 = new SoIndexedLineSet();
SoIndexedLineSet935->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate936 = new SoCoordinate();
SoCoordinate936->setPoint(new float[]{-0.09,1.41,-0.09,-0.2,1.44,-0.04}, 6);
SoIndexedLineSet935->setCoord(*SoCoordinate936);

SoShape933->setGeometry(*SoIndexedLineSet935);

SoHAnimSegment932->addChild(*SoShape933);

SoTransform* SoTransform937 = new SoTransform();
SoTransform937->setTranslation(new float[]{-0.09,1.41,-0.09});
SoShape* SoShape938 = new SoShape();
SoShape938->setUSE(QString("jointbox"));
SoTransform937->addChild(*SoShape938);

SoHAnimSegment932->addChild(*SoTransform937);

SoTransform* SoTransform939 = new SoTransform();
SoTransform939->setTranslation(new float[]{-0.11,1.427,-0.1375});
SoShape* SoShape940 = new SoShape();
SoShape940->setUSE(QString("skinsphere"));
SoTransform939->addChild(*SoShape940);

SoHAnimSegment932->addChild(*SoTransform939);

SoHAnimSite* SoHAnimSite941 = new SoHAnimSite();
SoHAnimSite941->setDEF(QString("Joe_r_acromion"));
SoHAnimSite941->X3DNode::setName(QString("r_acromion"));
SoHAnimSite941->setTranslation(new float[]{-0.178,1.4825,-0.0625});
SoShape* SoShape942 = new SoShape();
SoShape942->setUSE(QString("sitebox"));
SoHAnimSite941->addChild(*SoShape942);

SoHAnimSegment932->addChild(*SoHAnimSite941);

SoHAnimSite* SoHAnimSite943 = new SoHAnimSite();
SoHAnimSite943->setDEF(QString("Joe_r_axilla_ant"));
SoHAnimSite943->X3DNode::setName(QString("r_axilla_ant"));
SoHAnimSite943->setTranslation(new float[]{-0.17,1.38,0.007});
SoShape* SoShape944 = new SoShape();
SoShape944->setUSE(QString("sitebox"));
SoHAnimSite943->addChild(*SoShape944);

SoHAnimSegment932->addChild(*SoHAnimSite943);

SoHAnimSite* SoHAnimSite945 = new SoHAnimSite();
SoHAnimSite945->setDEF(QString("Joe_r_axilla_post"));
SoHAnimSite945->X3DNode::setName(QString("r_axilla_post"));
SoHAnimSite945->setTranslation(new float[]{-0.16,1.38,-0.127});
SoShape* SoShape946 = new SoShape();
SoShape946->setUSE(QString("sitebox"));
SoHAnimSite945->addChild(*SoShape946);

SoHAnimSegment932->addChild(*SoHAnimSite945);

SoHAnimJoint931->addChildren(*SoHAnimSegment932);

SoHAnimJoint* SoHAnimJoint947 = new SoHAnimJoint();
SoHAnimJoint947->setDEF(QString("Joe_r_shoulder"));
SoHAnimJoint947->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint947->setRotation(new float[]{0.0,0.0,-0.999999999999779,0.0372377698785245});
SoHAnimJoint947->setCenter(new float[]{-0.2,1.44,-0.04});
SoHAnimJoint947->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint947->setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
SoHAnimSegment* SoHAnimSegment948 = new SoHAnimSegment();
SoHAnimSegment948->setDEF(QString("Joe_r_upperarm"));
SoHAnimSegment948->X3DNode::setName(QString("r_upperarm"));
SoTransform* SoTransform949 = new SoTransform();
SoTransform949->setTranslation(new float[]{-0.2,1.44,-0.04});
SoShape* SoShape950 = new SoShape();
SoShape950->setUSE(QString("jointbox"));
SoTransform949->addChild(*SoShape950);

SoHAnimSegment948->addChild(*SoTransform949);

SoShape* SoShape951 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance952 = new SoVRMLAppearance();
SoVRMLAppearance952->setUSE(QString("SegmentLine"));
SoShape951->addChild(*SoVRMLAppearance952);

SoIndexedLineSet* SoIndexedLineSet953 = new SoIndexedLineSet();
SoIndexedLineSet953->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate954 = new SoCoordinate();
SoCoordinate954->setPoint(new float[]{-0.2,1.44,-0.04,-0.2,1.1388,-0.04}, 6);
SoIndexedLineSet953->setCoord(*SoCoordinate954);

SoShape951->setGeometry(*SoIndexedLineSet953);

SoHAnimSegment948->addChild(*SoShape951);

SoTransform* SoTransform955 = new SoTransform();
SoTransform955->setTranslation(new float[]{-0.178,1.4825,-0.0625});
SoShape* SoShape956 = new SoShape();
SoShape956->setUSE(QString("skinsphere"));
SoTransform955->addChild(*SoShape956);

SoHAnimSegment948->addChild(*SoTransform955);

SoTransform* SoTransform957 = new SoTransform();
SoTransform957->setTranslation(new float[]{-0.17,1.38,0.007});
SoShape* SoShape958 = new SoShape();
SoShape958->setUSE(QString("skinsphere"));
SoTransform957->addChild(*SoShape958);

SoHAnimSegment948->addChild(*SoTransform957);

SoTransform* SoTransform959 = new SoTransform();
SoTransform959->setTranslation(new float[]{-0.16,1.38,-0.127});
SoShape* SoShape960 = new SoShape();
SoShape960->setUSE(QString("skinsphere"));
SoTransform959->addChild(*SoShape960);

SoHAnimSegment948->addChild(*SoTransform959);

SoTransform* SoTransform961 = new SoTransform();
SoTransform961->setTranslation(new float[]{-0.235,1.42,-0.0625});
SoShape* SoShape962 = new SoShape();
SoShape962->setUSE(QString("skinsphere"));
SoTransform961->addChild(*SoShape962);

SoHAnimSegment948->addChild(*SoTransform961);

SoTransform* SoTransform963 = new SoTransform();
SoTransform963->setTranslation(new float[]{-0.23,1.235,-0.04});
SoShape* SoShape964 = new SoShape();
SoShape964->setUSE(QString("skinsphere"));
SoTransform963->addChild(*SoShape964);

SoHAnimSegment948->addChild(*SoTransform963);

SoTransform* SoTransform965 = new SoTransform();
SoTransform965->setTranslation(new float[]{-0.16,1.23,-0.04});
SoShape* SoShape966 = new SoShape();
SoShape966->setUSE(QString("skinsphere"));
SoTransform965->addChild(*SoShape966);

SoHAnimSegment948->addChild(*SoTransform965);

SoTransform* SoTransform967 = new SoTransform();
SoTransform967->setTranslation(new float[]{-0.2,1.23,-0.105});
SoShape* SoShape968 = new SoShape();
SoShape968->setUSE(QString("skinsphere"));
SoTransform967->addChild(*SoShape968);

SoHAnimSegment948->addChild(*SoTransform967);

SoTransform* SoTransform969 = new SoTransform();
SoTransform969->setTranslation(new float[]{-0.2,1.235,0.02});
SoShape* SoShape970 = new SoShape();
SoShape970->setUSE(QString("skinsphere"));
SoTransform969->addChild(*SoShape970);

SoHAnimSegment948->addChild(*SoTransform969);

SoHAnimSite* SoHAnimSite971 = new SoHAnimSite();
SoHAnimSite971->setDEF(QString("Joe_r_humeral_medial_epicn"));
SoHAnimSite971->X3DNode::setName(QString("r_humeral_medial_epicn"));
SoHAnimSite971->setTranslation(new float[]{-0.165,1.1388,-0.04});
SoShape* SoShape972 = new SoShape();
SoShape972->setUSE(QString("sitebox"));
SoHAnimSite971->addChild(*SoShape972);

SoHAnimSegment948->addChild(*SoHAnimSite971);

SoHAnimSite* SoHAnimSite973 = new SoHAnimSite();
SoHAnimSite973->setDEF(QString("Joe_r_radiale"));
SoHAnimSite973->X3DNode::setName(QString("r_radiale"));
SoHAnimSite973->setTranslation(new float[]{-0.23,1.133,-0.055});
SoShape* SoShape974 = new SoShape();
SoShape974->setUSE(QString("sitebox"));
SoHAnimSite973->addChild(*SoShape974);

SoHAnimSegment948->addChild(*SoHAnimSite973);

SoHAnimSite* SoHAnimSite975 = new SoHAnimSite();
SoHAnimSite975->setDEF(QString("Joe_r_humeral_lateral_epicn"));
SoHAnimSite975->X3DNode::setName(QString("r_humeral_lateral_epicn"));
SoHAnimSite975->setTranslation(new float[]{-0.244,1.1388,-0.04});
SoShape* SoShape976 = new SoShape();
SoShape976->setUSE(QString("sitebox"));
SoHAnimSite975->addChild(*SoShape976);

SoHAnimSegment948->addChild(*SoHAnimSite975);

SoHAnimJoint947->addChildren(*SoHAnimSegment948);

SoHAnimJoint* SoHAnimJoint977 = new SoHAnimJoint();
SoHAnimJoint977->setDEF(QString("Joe_r_elbow"));
SoHAnimJoint977->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint977->setRotation(new float[]{-0.970142500145333,-0.242535625036333,0.0,0.149344152360623});
SoHAnimJoint977->setCenter(new float[]{-0.2,1.1388,-0.04});
SoHAnimJoint977->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint977->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimSegment* SoHAnimSegment978 = new SoHAnimSegment();
SoHAnimSegment978->setDEF(QString("Joe_r_forearm"));
SoHAnimSegment978->X3DNode::setName(QString("r_forearm"));
SoShape* SoShape979 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance980 = new SoVRMLAppearance();
SoVRMLAppearance980->setUSE(QString("SegmentLine"));
SoShape979->addChild(*SoVRMLAppearance980);

SoIndexedLineSet* SoIndexedLineSet981 = new SoIndexedLineSet();
SoIndexedLineSet981->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate982 = new SoCoordinate();
SoCoordinate982->setPoint(new float[]{-0.2,1.1388,-0.04,-0.2,0.89,-0.04}, 6);
SoIndexedLineSet981->setCoord(*SoCoordinate982);

SoShape979->setGeometry(*SoIndexedLineSet981);

SoHAnimSegment978->addChild(*SoShape979);

SoTransform* SoTransform983 = new SoTransform();
SoTransform983->setTranslation(new float[]{-0.2,1.1388,-0.04});
SoShape* SoShape984 = new SoShape();
SoShape984->setUSE(QString("jointbox"));
SoTransform983->addChild(*SoShape984);

SoHAnimSegment978->addChild(*SoTransform983);

SoTransform* SoTransform985 = new SoTransform();
SoTransform985->setTranslation(new float[]{-0.2,1.1388,0.013});
SoShape* SoShape986 = new SoShape();
SoShape986->setUSE(QString("skinsphere"));
SoTransform985->addChild(*SoShape986);

SoHAnimSegment978->addChild(*SoTransform985);

SoTransform* SoTransform987 = new SoTransform();
SoTransform987->setTranslation(new float[]{-0.225,1.0,-0.01});
SoShape* SoShape988 = new SoShape();
SoShape988->setUSE(QString("skinsphere"));
SoTransform987->addChild(*SoShape988);

SoHAnimSegment978->addChild(*SoTransform987);

SoTransform* SoTransform989 = new SoTransform();
SoTransform989->setTranslation(new float[]{-0.225,1.0,-0.07});
SoShape* SoShape990 = new SoShape();
SoShape990->setUSE(QString("skinsphere"));
SoTransform989->addChild(*SoShape990);

SoHAnimSegment978->addChild(*SoTransform989);

SoTransform* SoTransform991 = new SoTransform();
SoTransform991->setTranslation(new float[]{-0.185,1.0,-0.01});
SoShape* SoShape992 = new SoShape();
SoShape992->setUSE(QString("skinsphere"));
SoTransform991->addChild(*SoShape992);

SoHAnimSegment978->addChild(*SoTransform991);

SoTransform* SoTransform993 = new SoTransform();
SoTransform993->setTranslation(new float[]{-0.185,1.0,-0.07});
SoShape* SoShape994 = new SoShape();
SoShape994->setUSE(QString("skinsphere"));
SoTransform993->addChild(*SoShape994);

SoHAnimSegment978->addChild(*SoTransform993);

SoHAnimSite* SoHAnimSite995 = new SoHAnimSite();
SoHAnimSite995->setDEF(QString("Joe_r_radial_styloid"));
SoHAnimSite995->X3DNode::setName(QString("r_radial_styloid"));
SoHAnimSite995->setTranslation(new float[]{-0.2,0.9,-0.015});
SoShape* SoShape996 = new SoShape();
SoShape996->setUSE(QString("sitebox"));
SoHAnimSite995->addChild(*SoShape996);

SoHAnimSegment978->addChild(*SoHAnimSite995);

SoHAnimSite* SoHAnimSite997 = new SoHAnimSite();
SoHAnimSite997->setDEF(QString("Joe_r_olecranon"));
SoHAnimSite997->X3DNode::setName(QString("r_olecranon"));
SoHAnimSite997->setTranslation(new float[]{-0.2,1.1388,-0.08});
SoShape* SoShape998 = new SoShape();
SoShape998->setUSE(QString("sitebox"));
SoHAnimSite997->addChild(*SoShape998);

SoHAnimSegment978->addChild(*SoHAnimSite997);

SoHAnimJoint977->addChildren(*SoHAnimSegment978);

SoHAnimJoint* SoHAnimJoint999 = new SoHAnimJoint();
SoHAnimJoint999->setDEF(QString("Joe_r_wrist"));
SoHAnimJoint999->X3DNode::setName(QString("r_wrist"));
SoHAnimJoint999->setCenter(new float[]{-0.2,0.89,-0.04});
SoHAnimJoint999->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint999->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment1000 = new SoHAnimSegment();
SoHAnimSegment1000->setDEF(QString("Joe_r_hand"));
SoHAnimSegment1000->X3DNode::setName(QString("r_hand"));
SoShape* SoShape1001 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1002 = new SoVRMLAppearance();
SoVRMLAppearance1002->setUSE(QString("SegmentLine"));
SoShape1001->addChild(*SoVRMLAppearance1002);

SoIndexedLineSet* SoIndexedLineSet1003 = new SoIndexedLineSet();
SoIndexedLineSet1003->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
SoCoordinate* SoCoordinate1004 = new SoCoordinate();
SoCoordinate1004->setPoint(new float[]{-0.2,0.89,-0.04,-0.2,0.85,0.0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085}, 18);
SoIndexedLineSet1003->setCoord(*SoCoordinate1004);

SoShape1001->setGeometry(*SoIndexedLineSet1003);

SoHAnimSegment1000->addChild(*SoShape1001);

SoTransform* SoTransform1005 = new SoTransform();
SoTransform1005->setTranslation(new float[]{-0.2,0.89,-0.04});
SoShape* SoShape1006 = new SoShape();
SoShape1006->setUSE(QString("jointbox"));
SoTransform1005->addChild(*SoShape1006);

SoHAnimSegment1000->addChild(*SoTransform1005);

SoHAnimSite* SoHAnimSite1007 = new SoHAnimSite();
SoHAnimSite1007->setDEF(QString("Joe_r_ulnar_styloid"));
SoHAnimSite1007->X3DNode::setName(QString("r_ulnar_styloid"));
SoHAnimSite1007->setTranslation(new float[]{-0.2,0.9,-0.085});
SoShape* SoShape1008 = new SoShape();
SoShape1008->setUSE(QString("sitebox"));
SoHAnimSite1007->addChild(*SoShape1008);

SoHAnimSegment1000->addChild(*SoHAnimSite1007);

SoHAnimJoint999->addChildren(*SoHAnimSegment1000);

SoHAnimJoint* SoHAnimJoint1009 = new SoHAnimJoint();
SoHAnimJoint1009->setDEF(QString("Joe_r_thumb1"));
SoHAnimJoint1009->X3DNode::setName(QString("r_thumb1"));
SoHAnimJoint1009->setRotation(new float[]{0.999999999999976,0.0,0.0,0.11171329853783});
SoHAnimJoint1009->setCenter(new float[]{-0.2,0.85,0.0});
SoHAnimJoint1009->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint1009->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1010 = new SoHAnimSegment();
SoHAnimSegment1010->setDEF(QString("Joe_r_thumb_metacarpal"));
SoHAnimSegment1010->X3DNode::setName(QString("r_thumb_metacarpal"));
SoShape* SoShape1011 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1012 = new SoVRMLAppearance();
SoVRMLAppearance1012->setUSE(QString("SegmentLine"));
SoShape1011->addChild(*SoVRMLAppearance1012);

SoIndexedLineSet* SoIndexedLineSet1013 = new SoIndexedLineSet();
SoIndexedLineSet1013->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1014 = new SoCoordinate();
SoCoordinate1014->setPoint(new float[]{-0.2,0.85,0.0,-0.2,0.82,0.03}, 6);
SoIndexedLineSet1013->setCoord(*SoCoordinate1014);

SoShape1011->setGeometry(*SoIndexedLineSet1013);

SoHAnimSegment1010->addChild(*SoShape1011);

SoTransform* SoTransform1015 = new SoTransform();
SoTransform1015->setTranslation(new float[]{-0.2,0.85,0.0});
SoShape* SoShape1016 = new SoShape();
SoShape1016->setUSE(QString("jointbox"));
SoTransform1015->addChild(*SoShape1016);

SoHAnimSegment1010->addChild(*SoTransform1015);

SoHAnimJoint1009->addChildren(*SoHAnimSegment1010);

SoHAnimJoint* SoHAnimJoint1017 = new SoHAnimJoint();
SoHAnimJoint1017->setDEF(QString("Joe_r_thumb2"));
SoHAnimJoint1017->X3DNode::setName(QString("r_thumb2"));
SoHAnimJoint1017->setRotation(new float[]{0.707106781186553,0.707106781186553,0.0,0.167569951968385});
SoHAnimJoint1017->setCenter(new float[]{-0.2,0.82,0.03});
SoHAnimJoint1017->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint1017->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment1018 = new SoHAnimSegment();
SoHAnimSegment1018->setDEF(QString("Joe_r_thumb_proximal"));
SoHAnimSegment1018->X3DNode::setName(QString("r_thumb_proximal"));
SoShape* SoShape1019 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1020 = new SoVRMLAppearance();
SoVRMLAppearance1020->setUSE(QString("SegmentLine"));
SoShape1019->addChild(*SoVRMLAppearance1020);

SoIndexedLineSet* SoIndexedLineSet1021 = new SoIndexedLineSet();
SoIndexedLineSet1021->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1022 = new SoCoordinate();
SoCoordinate1022->setPoint(new float[]{-0.2,0.82,0.03,-0.2,0.8,0.05}, 6);
SoIndexedLineSet1021->setCoord(*SoCoordinate1022);

SoShape1019->setGeometry(*SoIndexedLineSet1021);

SoHAnimSegment1018->addChild(*SoShape1019);

SoTransform* SoTransform1023 = new SoTransform();
SoTransform1023->setTranslation(new float[]{-0.2,0.82,0.03});
SoShape* SoShape1024 = new SoShape();
SoShape1024->setUSE(QString("jointbox"));
SoTransform1023->addChild(*SoShape1024);

SoHAnimSegment1018->addChild(*SoTransform1023);

SoHAnimJoint1017->addChildren(*SoHAnimSegment1018);

SoHAnimJoint* SoHAnimJoint1025 = new SoHAnimJoint();
SoHAnimJoint1025->setDEF(QString("Joe_r_thumb3"));
SoHAnimJoint1025->X3DNode::setName(QString("r_thumb3"));
SoHAnimJoint1025->setRotation(new float[]{0.707106781186553,0.707106781186553,0.0,0.167569951968385});
SoHAnimJoint1025->setCenter(new float[]{-0.2,0.8,0.05});
SoHAnimJoint1025->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint1025->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1026 = new SoHAnimSegment();
SoHAnimSegment1026->setDEF(QString("Joe_r_thumb_distal"));
SoHAnimSegment1026->X3DNode::setName(QString("r_thumb_distal"));
SoShape* SoShape1027 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1028 = new SoVRMLAppearance();
SoVRMLAppearance1028->setUSE(QString("SegmentLine"));
SoShape1027->addChild(*SoVRMLAppearance1028);

SoIndexedLineSet* SoIndexedLineSet1029 = new SoIndexedLineSet();
SoIndexedLineSet1029->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1030 = new SoCoordinate();
SoCoordinate1030->setPoint(new float[]{-0.2,0.8,0.05,-0.2,0.78,0.07}, 6);
SoIndexedLineSet1029->setCoord(*SoCoordinate1030);

SoShape1027->setGeometry(*SoIndexedLineSet1029);

SoHAnimSegment1026->addChild(*SoShape1027);

SoTransform* SoTransform1031 = new SoTransform();
SoTransform1031->setDEF(QString("Thumbnail"));
SoTransform1031->setTranslation(new float[]{-0.2,0.785,0.075});
SoShape* SoShape1032 = new SoShape();
SoShape1032->setUSE(QString("skinsphere"));
SoTransform1031->addChild(*SoShape1032);

SoHAnimSegment1026->addChild(*SoTransform1031);

SoTransform* SoTransform1033 = new SoTransform();
SoTransform1033->setTranslation(new float[]{-0.2,0.8,0.05});
SoShape* SoShape1034 = new SoShape();
SoShape1034->setUSE(QString("jointbox"));
SoTransform1033->addChild(*SoShape1034);

SoHAnimSegment1026->addChild(*SoTransform1033);

SoHAnimSite* SoHAnimSite1035 = new SoHAnimSite();
SoHAnimSite1035->setDEF(QString("Joe_r_thumb_distal_tip"));
SoHAnimSite1035->X3DNode::setName(QString("r_thumb_distal_tip"));
SoHAnimSite1035->setTranslation(new float[]{-0.2,0.78,0.07});
SoShape* SoShape1036 = new SoShape();
SoShape1036->setUSE(QString("sitebox"));
SoHAnimSite1035->addChild(*SoShape1036);

SoHAnimSegment1026->addChild(*SoHAnimSite1035);

SoHAnimJoint1025->addChildren(*SoHAnimSegment1026);

SoHAnimJoint1017->addChildren(*SoHAnimJoint1025);

SoHAnimJoint1009->addChildren(*SoHAnimJoint1017);

SoHAnimJoint999->addChildren(*SoHAnimJoint1009);

SoHAnimJoint* SoHAnimJoint1037 = new SoHAnimJoint();
SoHAnimJoint1037->setDEF(QString("Joe_r_index0"));
SoHAnimJoint1037->X3DNode::setName(QString("r_index0"));
SoHAnimJoint1037->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1037->setCenter(new float[]{-0.2,0.84,-0.015});
SoHAnimJoint1037->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint1037->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1038 = new SoHAnimSegment();
SoHAnimSegment1038->setDEF(QString("Joe_r_index_metacarpal"));
SoHAnimSegment1038->X3DNode::setName(QString("r_index_metacarpal"));
SoShape* SoShape1039 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1040 = new SoVRMLAppearance();
SoVRMLAppearance1040->setUSE(QString("SegmentLine"));
SoShape1039->addChild(*SoVRMLAppearance1040);

SoIndexedLineSet* SoIndexedLineSet1041 = new SoIndexedLineSet();
SoIndexedLineSet1041->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1042 = new SoCoordinate();
SoCoordinate1042->setPoint(new float[]{-0.2,0.84,-0.015,-0.2,0.793,-0.015}, 6);
SoIndexedLineSet1041->setCoord(*SoCoordinate1042);

SoShape1039->setGeometry(*SoIndexedLineSet1041);

SoHAnimSegment1038->addChild(*SoShape1039);

SoTransform* SoTransform1043 = new SoTransform();
SoTransform1043->setTranslation(new float[]{-0.2,0.84,-0.015});
SoShape* SoShape1044 = new SoShape();
SoShape1044->setUSE(QString("jointbox"));
SoTransform1043->addChild(*SoShape1044);

SoHAnimSegment1038->addChild(*SoTransform1043);

SoHAnimSite* SoHAnimSite1045 = new SoHAnimSite();
SoHAnimSite1045->setDEF(QString("Joe_r_metacarpal_pha2"));
SoHAnimSite1045->X3DNode::setName(QString("r_metacarpal_pha2"));
SoHAnimSite1045->setTranslation(new float[]{-0.2,0.793,-0.005});
SoShape* SoShape1046 = new SoShape();
SoShape1046->setUSE(QString("sitebox"));
SoHAnimSite1045->addChild(*SoShape1046);

SoHAnimSegment1038->addChild(*SoHAnimSite1045);

SoHAnimJoint1037->addChildren(*SoHAnimSegment1038);

SoHAnimJoint* SoHAnimJoint1047 = new SoHAnimJoint();
SoHAnimJoint1047->setDEF(QString("Joe_r_index1"));
SoHAnimJoint1047->X3DNode::setName(QString("r_index1"));
SoHAnimJoint1047->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1047->setCenter(new float[]{-0.2,0.793,-0.015});
SoHAnimJoint1047->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint1047->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimSegment* SoHAnimSegment1048 = new SoHAnimSegment();
SoHAnimSegment1048->setDEF(QString("Joe_r_index_proximal"));
SoHAnimSegment1048->X3DNode::setName(QString("r_index_proximal"));
SoShape* SoShape1049 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1050 = new SoVRMLAppearance();
SoVRMLAppearance1050->setUSE(QString("SegmentLine"));
SoShape1049->addChild(*SoVRMLAppearance1050);

SoIndexedLineSet* SoIndexedLineSet1051 = new SoIndexedLineSet();
SoIndexedLineSet1051->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1052 = new SoCoordinate();
SoCoordinate1052->setPoint(new float[]{-0.2,0.793,-0.015,-0.2,0.745,-0.015}, 6);
SoIndexedLineSet1051->setCoord(*SoCoordinate1052);

SoShape1049->setGeometry(*SoIndexedLineSet1051);

SoHAnimSegment1048->addChild(*SoShape1049);

SoTransform* SoTransform1053 = new SoTransform();
SoTransform1053->setTranslation(new float[]{-0.2,0.793,-0.015});
SoShape* SoShape1054 = new SoShape();
SoShape1054->setUSE(QString("jointbox"));
SoTransform1053->addChild(*SoShape1054);

SoHAnimSegment1048->addChild(*SoTransform1053);

SoHAnimJoint1047->addChildren(*SoHAnimSegment1048);

SoHAnimJoint* SoHAnimJoint1055 = new SoHAnimJoint();
SoHAnimJoint1055->setDEF(QString("Joe_r_index2"));
SoHAnimJoint1055->X3DNode::setName(QString("r_index2"));
SoHAnimJoint1055->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1055->setCenter(new float[]{-0.2,0.745,-0.015});
SoHAnimJoint1055->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint1055->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1056 = new SoHAnimSegment();
SoHAnimSegment1056->setDEF(QString("Joe_r_index_middle"));
SoHAnimSegment1056->X3DNode::setName(QString("r_index_middle"));
SoShape* SoShape1057 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1058 = new SoVRMLAppearance();
SoVRMLAppearance1058->setUSE(QString("SegmentLine"));
SoShape1057->addChild(*SoVRMLAppearance1058);

SoIndexedLineSet* SoIndexedLineSet1059 = new SoIndexedLineSet();
SoIndexedLineSet1059->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1060 = new SoCoordinate();
SoCoordinate1060->setPoint(new float[]{-0.2,0.745,-0.015,-0.2,0.72,-0.015}, 6);
SoIndexedLineSet1059->setCoord(*SoCoordinate1060);

SoShape1057->setGeometry(*SoIndexedLineSet1059);

SoHAnimSegment1056->addChild(*SoShape1057);

SoTransform* SoTransform1061 = new SoTransform();
SoTransform1061->setTranslation(new float[]{-0.2,0.745,-0.015});
SoShape* SoShape1062 = new SoShape();
SoShape1062->setUSE(QString("jointbox"));
SoTransform1061->addChild(*SoShape1062);

SoHAnimSegment1056->addChild(*SoTransform1061);

SoHAnimJoint1055->addChildren(*SoHAnimSegment1056);

SoHAnimJoint* SoHAnimJoint1063 = new SoHAnimJoint();
SoHAnimJoint1063->setDEF(QString("Joe_r_index3"));
SoHAnimJoint1063->X3DNode::setName(QString("r_index3"));
SoHAnimJoint1063->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1063->setCenter(new float[]{-0.2,0.72,-0.015});
SoHAnimJoint1063->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint1063->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1064 = new SoHAnimSegment();
SoHAnimSegment1064->setDEF(QString("Joe_r_index_distal"));
SoHAnimSegment1064->X3DNode::setName(QString("r_index_distal"));
SoShape* SoShape1065 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1066 = new SoVRMLAppearance();
SoVRMLAppearance1066->setUSE(QString("SegmentLine"));
SoShape1065->addChild(*SoVRMLAppearance1066);

SoIndexedLineSet* SoIndexedLineSet1067 = new SoIndexedLineSet();
SoIndexedLineSet1067->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1068 = new SoCoordinate();
SoCoordinate1068->setPoint(new float[]{-0.2,0.72,-0.015,-0.2,0.695,-0.015}, 6);
SoIndexedLineSet1067->setCoord(*SoCoordinate1068);

SoShape1065->setGeometry(*SoIndexedLineSet1067);

SoHAnimSegment1064->addChild(*SoShape1065);

SoTransform* SoTransform1069 = new SoTransform();
SoTransform1069->setTranslation(new float[]{-0.2,0.72,-0.015});
SoShape* SoShape1070 = new SoShape();
SoShape1070->setUSE(QString("jointbox"));
SoTransform1069->addChild(*SoShape1070);

SoHAnimSegment1064->addChild(*SoTransform1069);

SoHAnimSite* SoHAnimSite1071 = new SoHAnimSite();
SoHAnimSite1071->setDEF(QString("Joe_r_index_distal_tip"));
SoHAnimSite1071->X3DNode::setName(QString("r_index_distal_tip"));
SoHAnimSite1071->setTranslation(new float[]{-0.2,0.695,-0.015});
SoShape* SoShape1072 = new SoShape();
SoShape1072->setUSE(QString("sitebox"));
SoHAnimSite1071->addChild(*SoShape1072);

SoHAnimSegment1064->addChild(*SoHAnimSite1071);

SoHAnimJoint1063->addChildren(*SoHAnimSegment1064);

SoHAnimJoint1055->addChildren(*SoHAnimJoint1063);

SoHAnimJoint1047->addChildren(*SoHAnimJoint1055);

SoHAnimJoint1037->addChildren(*SoHAnimJoint1047);

SoHAnimJoint999->addChildren(*SoHAnimJoint1037);

SoHAnimJoint* SoHAnimJoint1073 = new SoHAnimJoint();
SoHAnimJoint1073->setDEF(QString("Joe_r_middle0"));
SoHAnimJoint1073->X3DNode::setName(QString("r_middle0"));
SoHAnimJoint1073->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1073->setCenter(new float[]{-0.2,0.835,-0.04});
SoHAnimJoint1073->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint1073->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1074 = new SoHAnimSegment();
SoHAnimSegment1074->setDEF(QString("Joe_r_middle_metacarpal"));
SoHAnimSegment1074->X3DNode::setName(QString("r_middle_metacarpal"));
SoShape* SoShape1075 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1076 = new SoVRMLAppearance();
SoVRMLAppearance1076->setUSE(QString("SegmentLine"));
SoShape1075->addChild(*SoVRMLAppearance1076);

SoIndexedLineSet* SoIndexedLineSet1077 = new SoIndexedLineSet();
SoIndexedLineSet1077->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1078 = new SoCoordinate();
SoCoordinate1078->setPoint(new float[]{-0.2,0.835,-0.04,-0.2,0.788,-0.04}, 6);
SoIndexedLineSet1077->setCoord(*SoCoordinate1078);

SoShape1075->setGeometry(*SoIndexedLineSet1077);

SoHAnimSegment1074->addChild(*SoShape1075);

SoTransform* SoTransform1079 = new SoTransform();
SoTransform1079->setTranslation(new float[]{-0.2,0.835,-0.04});
SoShape* SoShape1080 = new SoShape();
SoShape1080->setUSE(QString("jointbox"));
SoTransform1079->addChild(*SoShape1080);

SoHAnimSegment1074->addChild(*SoTransform1079);

SoHAnimJoint1073->addChildren(*SoHAnimSegment1074);

SoHAnimJoint* SoHAnimJoint1081 = new SoHAnimJoint();
SoHAnimJoint1081->setDEF(QString("Joe_r_middle1"));
SoHAnimJoint1081->X3DNode::setName(QString("r_middle1"));
SoHAnimJoint1081->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1081->setCenter(new float[]{-0.2,0.788,-0.04});
SoHAnimJoint1081->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint1081->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1082 = new SoHAnimSegment();
SoHAnimSegment1082->setDEF(QString("Joe_r_middle_proximal"));
SoHAnimSegment1082->X3DNode::setName(QString("r_middle_proximal"));
SoShape* SoShape1083 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1084 = new SoVRMLAppearance();
SoVRMLAppearance1084->setUSE(QString("SegmentLine"));
SoShape1083->addChild(*SoVRMLAppearance1084);

SoIndexedLineSet* SoIndexedLineSet1085 = new SoIndexedLineSet();
SoIndexedLineSet1085->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1086 = new SoCoordinate();
SoCoordinate1086->setPoint(new float[]{-0.2,0.788,-0.04,-0.2,0.74,-0.04}, 6);
SoIndexedLineSet1085->setCoord(*SoCoordinate1086);

SoShape1083->setGeometry(*SoIndexedLineSet1085);

SoHAnimSegment1082->addChild(*SoShape1083);

SoTransform* SoTransform1087 = new SoTransform();
SoTransform1087->setTranslation(new float[]{-0.2,0.788,-0.04});
SoShape* SoShape1088 = new SoShape();
SoShape1088->setUSE(QString("jointbox"));
SoTransform1087->addChild(*SoShape1088);

SoHAnimSegment1082->addChild(*SoTransform1087);

SoHAnimJoint1081->addChildren(*SoHAnimSegment1082);

SoHAnimJoint* SoHAnimJoint1089 = new SoHAnimJoint();
SoHAnimJoint1089->setDEF(QString("Joe_r_middle2"));
SoHAnimJoint1089->X3DNode::setName(QString("r_middle2"));
SoHAnimJoint1089->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1089->setCenter(new float[]{-0.2,0.74,-0.04});
SoHAnimJoint1089->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint1089->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1090 = new SoHAnimSegment();
SoHAnimSegment1090->setDEF(QString("Joe_r_middle_middle"));
SoHAnimSegment1090->X3DNode::setName(QString("r_middle_middle"));
SoShape* SoShape1091 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1092 = new SoVRMLAppearance();
SoVRMLAppearance1092->setUSE(QString("SegmentLine"));
SoShape1091->addChild(*SoVRMLAppearance1092);

SoIndexedLineSet* SoIndexedLineSet1093 = new SoIndexedLineSet();
SoIndexedLineSet1093->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1094 = new SoCoordinate();
SoCoordinate1094->setPoint(new float[]{-0.2,0.74,-0.04,-0.2,0.7142,-0.04}, 6);
SoIndexedLineSet1093->setCoord(*SoCoordinate1094);

SoShape1091->setGeometry(*SoIndexedLineSet1093);

SoHAnimSegment1090->addChild(*SoShape1091);

SoTransform* SoTransform1095 = new SoTransform();
SoTransform1095->setTranslation(new float[]{-0.2,0.74,-0.04});
SoShape* SoShape1096 = new SoShape();
SoShape1096->setUSE(QString("jointbox"));
SoTransform1095->addChild(*SoShape1096);

SoHAnimSegment1090->addChild(*SoTransform1095);

SoHAnimJoint1089->addChildren(*SoHAnimSegment1090);

SoHAnimJoint* SoHAnimJoint1097 = new SoHAnimJoint();
SoHAnimJoint1097->setDEF(QString("Joe_r_middle3"));
SoHAnimJoint1097->X3DNode::setName(QString("r_middle3"));
SoHAnimJoint1097->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1097->setCenter(new float[]{-0.2,0.7142,-0.04});
SoHAnimJoint1097->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint1097->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1098 = new SoHAnimSegment();
SoHAnimSegment1098->setDEF(QString("Joe_r_middle_distal"));
SoHAnimSegment1098->X3DNode::setName(QString("r_middle_distal"));
SoShape* SoShape1099 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1100 = new SoVRMLAppearance();
SoVRMLAppearance1100->setUSE(QString("SegmentLine"));
SoShape1099->addChild(*SoVRMLAppearance1100);

SoIndexedLineSet* SoIndexedLineSet1101 = new SoIndexedLineSet();
SoIndexedLineSet1101->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1102 = new SoCoordinate();
SoCoordinate1102->setPoint(new float[]{-0.2,0.7142,-0.04,-0.2,0.6758,-0.04}, 6);
SoIndexedLineSet1101->setCoord(*SoCoordinate1102);

SoShape1099->setGeometry(*SoIndexedLineSet1101);

SoHAnimSegment1098->addChild(*SoShape1099);

SoTransform* SoTransform1103 = new SoTransform();
SoTransform1103->setTranslation(new float[]{-0.2,0.7142,-0.04});
SoShape* SoShape1104 = new SoShape();
SoShape1104->setUSE(QString("jointbox"));
SoTransform1103->addChild(*SoShape1104);

SoHAnimSegment1098->addChild(*SoTransform1103);

SoHAnimSite* SoHAnimSite1105 = new SoHAnimSite();
SoHAnimSite1105->setDEF(QString("Joe_r_dactylion"));
SoHAnimSite1105->X3DNode::setName(QString("r_dactylion"));
SoHAnimSite1105->setTranslation(new float[]{-0.2,0.68,-0.04});
SoShape* SoShape1106 = new SoShape();
SoShape1106->setUSE(QString("sitebox"));
SoHAnimSite1105->addChild(*SoShape1106);

SoHAnimSegment1098->addChild(*SoHAnimSite1105);

SoHAnimSite* SoHAnimSite1107 = new SoHAnimSite();
SoHAnimSite1107->setDEF(QString("Joe_r_middle_distal_tip"));
SoHAnimSite1107->X3DNode::setName(QString("r_middle_distal_tip"));
SoHAnimSite1107->setTranslation(new float[]{-0.2,0.68,-0.04});
SoShape* SoShape1108 = new SoShape();
SoShape1108->setUSE(QString("sitebox"));
SoHAnimSite1107->addChild(*SoShape1108);

SoHAnimSegment1098->addChild(*SoHAnimSite1107);

SoHAnimJoint1097->addChildren(*SoHAnimSegment1098);

SoHAnimJoint1089->addChildren(*SoHAnimJoint1097);

SoHAnimJoint1081->addChildren(*SoHAnimJoint1089);

SoHAnimJoint1073->addChildren(*SoHAnimJoint1081);

SoHAnimJoint999->addChildren(*SoHAnimJoint1073);

SoHAnimJoint* SoHAnimJoint1109 = new SoHAnimJoint();
SoHAnimJoint1109->setDEF(QString("Joe_r_ring0"));
SoHAnimJoint1109->X3DNode::setName(QString("r_ring0"));
SoHAnimJoint1109->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1109->setCenter(new float[]{-0.2,0.835,-0.065});
SoHAnimJoint1109->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint1109->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1110 = new SoHAnimSegment();
SoHAnimSegment1110->setDEF(QString("Joe_r_ring_metacarpal"));
SoHAnimSegment1110->X3DNode::setName(QString("r_ring_metacarpal"));
SoShape* SoShape1111 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1112 = new SoVRMLAppearance();
SoVRMLAppearance1112->setUSE(QString("SegmentLine"));
SoShape1111->addChild(*SoVRMLAppearance1112);

SoIndexedLineSet* SoIndexedLineSet1113 = new SoIndexedLineSet();
SoIndexedLineSet1113->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1114 = new SoCoordinate();
SoCoordinate1114->setPoint(new float[]{-0.2,0.835,-0.065,-0.2,0.793,-0.065}, 6);
SoIndexedLineSet1113->setCoord(*SoCoordinate1114);

SoShape1111->setGeometry(*SoIndexedLineSet1113);

SoHAnimSegment1110->addChild(*SoShape1111);

SoTransform* SoTransform1115 = new SoTransform();
SoTransform1115->setTranslation(new float[]{-0.2,0.835,-0.065});
SoShape* SoShape1116 = new SoShape();
SoShape1116->setUSE(QString("jointbox"));
SoTransform1115->addChild(*SoShape1116);

SoHAnimSegment1110->addChild(*SoTransform1115);

SoHAnimJoint1109->addChildren(*SoHAnimSegment1110);

SoHAnimJoint* SoHAnimJoint1117 = new SoHAnimJoint();
SoHAnimJoint1117->setDEF(QString("Joe_r_ring1"));
SoHAnimJoint1117->X3DNode::setName(QString("r_ring1"));
SoHAnimJoint1117->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1117->setCenter(new float[]{-0.2,0.793,-0.065});
SoHAnimJoint1117->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint1117->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1118 = new SoHAnimSegment();
SoHAnimSegment1118->setDEF(QString("Joe_r_ring_proximal"));
SoHAnimSegment1118->X3DNode::setName(QString("r_ring_proximal"));
SoShape* SoShape1119 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1120 = new SoVRMLAppearance();
SoVRMLAppearance1120->setUSE(QString("SegmentLine"));
SoShape1119->addChild(*SoVRMLAppearance1120);

SoIndexedLineSet* SoIndexedLineSet1121 = new SoIndexedLineSet();
SoIndexedLineSet1121->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1122 = new SoCoordinate();
SoCoordinate1122->setPoint(new float[]{-0.2,0.793,-0.065,-0.2,0.74,-0.065}, 6);
SoIndexedLineSet1121->setCoord(*SoCoordinate1122);

SoShape1119->setGeometry(*SoIndexedLineSet1121);

SoHAnimSegment1118->addChild(*SoShape1119);

SoTransform* SoTransform1123 = new SoTransform();
SoTransform1123->setTranslation(new float[]{-0.2,0.793,-0.065});
SoShape* SoShape1124 = new SoShape();
SoShape1124->setUSE(QString("jointbox"));
SoTransform1123->addChild(*SoShape1124);

SoHAnimSegment1118->addChild(*SoTransform1123);

SoHAnimJoint1117->addChildren(*SoHAnimSegment1118);

SoHAnimJoint* SoHAnimJoint1125 = new SoHAnimJoint();
SoHAnimJoint1125->setDEF(QString("Joe_r_ring2"));
SoHAnimJoint1125->X3DNode::setName(QString("r_ring2"));
SoHAnimJoint1125->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1125->setCenter(new float[]{-0.2,0.74,-0.065});
SoHAnimJoint1125->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint1125->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1126 = new SoHAnimSegment();
SoHAnimSegment1126->setDEF(QString("Joe_r_ring_middle"));
SoHAnimSegment1126->X3DNode::setName(QString("r_ring_middle"));
SoShape* SoShape1127 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1128 = new SoVRMLAppearance();
SoVRMLAppearance1128->setUSE(QString("SegmentLine"));
SoShape1127->addChild(*SoVRMLAppearance1128);

SoIndexedLineSet* SoIndexedLineSet1129 = new SoIndexedLineSet();
SoIndexedLineSet1129->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1130 = new SoCoordinate();
SoCoordinate1130->setPoint(new float[]{-0.2,0.74,-0.065,-0.2,0.7177,-0.065}, 6);
SoIndexedLineSet1129->setCoord(*SoCoordinate1130);

SoShape1127->setGeometry(*SoIndexedLineSet1129);

SoHAnimSegment1126->addChild(*SoShape1127);

SoTransform* SoTransform1131 = new SoTransform();
SoTransform1131->setTranslation(new float[]{-0.2,0.74,-0.065});
SoShape* SoShape1132 = new SoShape();
SoShape1132->setUSE(QString("jointbox"));
SoTransform1131->addChild(*SoShape1132);

SoHAnimSegment1126->addChild(*SoTransform1131);

SoHAnimJoint1125->addChildren(*SoHAnimSegment1126);

SoHAnimJoint* SoHAnimJoint1133 = new SoHAnimJoint();
SoHAnimJoint1133->setDEF(QString("Joe_r_ring3"));
SoHAnimJoint1133->X3DNode::setName(QString("r_ring3"));
SoHAnimJoint1133->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1133->setCenter(new float[]{-0.2,0.7177,-0.065});
SoHAnimJoint1133->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint1133->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1134 = new SoHAnimSegment();
SoHAnimSegment1134->setDEF(QString("Joe_r_ring_distal"));
SoHAnimSegment1134->X3DNode::setName(QString("r_ring_distal"));
SoShape* SoShape1135 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1136 = new SoVRMLAppearance();
SoVRMLAppearance1136->setUSE(QString("SegmentLine"));
SoShape1135->addChild(*SoVRMLAppearance1136);

SoIndexedLineSet* SoIndexedLineSet1137 = new SoIndexedLineSet();
SoIndexedLineSet1137->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1138 = new SoCoordinate();
SoCoordinate1138->setPoint(new float[]{-0.2,0.7177,-0.065,-0.2,0.695,-0.065}, 6);
SoIndexedLineSet1137->setCoord(*SoCoordinate1138);

SoShape1135->setGeometry(*SoIndexedLineSet1137);

SoHAnimSegment1134->addChild(*SoShape1135);

SoTransform* SoTransform1139 = new SoTransform();
SoTransform1139->setTranslation(new float[]{-0.2,0.7177,-0.065});
SoShape* SoShape1140 = new SoShape();
SoShape1140->setUSE(QString("jointbox"));
SoTransform1139->addChild(*SoShape1140);

SoHAnimSegment1134->addChild(*SoTransform1139);

SoHAnimSite* SoHAnimSite1141 = new SoHAnimSite();
SoHAnimSite1141->setDEF(QString("Joe_r_ring_distal_tip"));
SoHAnimSite1141->X3DNode::setName(QString("r_ring_distal_tip"));
SoHAnimSite1141->setTranslation(new float[]{-0.2,0.695,-0.065});
SoShape* SoShape1142 = new SoShape();
SoShape1142->setUSE(QString("sitebox"));
SoHAnimSite1141->addChild(*SoShape1142);

SoHAnimSegment1134->addChild(*SoHAnimSite1141);

SoHAnimJoint1133->addChildren(*SoHAnimSegment1134);

SoHAnimJoint1125->addChildren(*SoHAnimJoint1133);

SoHAnimJoint1117->addChildren(*SoHAnimJoint1125);

SoHAnimJoint1109->addChildren(*SoHAnimJoint1117);

SoHAnimJoint999->addChildren(*SoHAnimJoint1109);

SoHAnimJoint* SoHAnimJoint1143 = new SoHAnimJoint();
SoHAnimJoint1143->setDEF(QString("Joe_r_pinky0"));
SoHAnimJoint1143->X3DNode::setName(QString("r_pinky0"));
SoHAnimJoint1143->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1143->setCenter(new float[]{-0.2,0.84,-0.085});
SoHAnimJoint1143->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint1143->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1144 = new SoHAnimSegment();
SoHAnimSegment1144->setDEF(QString("Joe_r_pinky_metacarpal"));
SoHAnimSegment1144->X3DNode::setName(QString("r_pinky_metacarpal"));
SoShape* SoShape1145 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1146 = new SoVRMLAppearance();
SoVRMLAppearance1146->setUSE(QString("SegmentLine"));
SoShape1145->addChild(*SoVRMLAppearance1146);

SoIndexedLineSet* SoIndexedLineSet1147 = new SoIndexedLineSet();
SoIndexedLineSet1147->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1148 = new SoCoordinate();
SoCoordinate1148->setPoint(new float[]{-0.2,0.84,-0.085,-0.2,0.79,-0.085}, 6);
SoIndexedLineSet1147->setCoord(*SoCoordinate1148);

SoShape1145->setGeometry(*SoIndexedLineSet1147);

SoHAnimSegment1144->addChild(*SoShape1145);

SoTransform* SoTransform1149 = new SoTransform();
SoTransform1149->setTranslation(new float[]{-0.2,0.84,-0.085});
SoShape* SoShape1150 = new SoShape();
SoShape1150->setUSE(QString("jointbox"));
SoTransform1149->addChild(*SoShape1150);

SoHAnimSegment1144->addChild(*SoTransform1149);

SoHAnimSite* SoHAnimSite1151 = new SoHAnimSite();
SoHAnimSite1151->setDEF(QString("Joe_r_metacarpal_pha5"));
SoHAnimSite1151->X3DNode::setName(QString("r_metacarpal_pha5"));
SoHAnimSite1151->setTranslation(new float[]{-0.2,0.79,-0.095});
SoShape* SoShape1152 = new SoShape();
SoShape1152->setUSE(QString("sitebox"));
SoHAnimSite1151->addChild(*SoShape1152);

SoHAnimSegment1144->addChild(*SoHAnimSite1151);

SoHAnimJoint1143->addChildren(*SoHAnimSegment1144);

SoHAnimJoint* SoHAnimJoint1153 = new SoHAnimJoint();
SoHAnimJoint1153->setDEF(QString("Joe_r_pinky1"));
SoHAnimJoint1153->X3DNode::setName(QString("r_pinky1"));
SoHAnimJoint1153->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1153->setCenter(new float[]{-0.2,0.79,-0.085});
SoHAnimJoint1153->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint1153->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment1154 = new SoHAnimSegment();
SoHAnimSegment1154->setDEF(QString("Joe_r_pinky_proximal"));
SoHAnimSegment1154->X3DNode::setName(QString("r_pinky_proximal"));
SoShape* SoShape1155 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1156 = new SoVRMLAppearance();
SoVRMLAppearance1156->setUSE(QString("SegmentLine"));
SoShape1155->addChild(*SoVRMLAppearance1156);

SoIndexedLineSet* SoIndexedLineSet1157 = new SoIndexedLineSet();
SoIndexedLineSet1157->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1158 = new SoCoordinate();
SoCoordinate1158->setPoint(new float[]{-0.2,0.79,-0.085,-0.2,0.755,-0.085}, 6);
SoIndexedLineSet1157->setCoord(*SoCoordinate1158);

SoShape1155->setGeometry(*SoIndexedLineSet1157);

SoHAnimSegment1154->addChild(*SoShape1155);

SoTransform* SoTransform1159 = new SoTransform();
SoTransform1159->setTranslation(new float[]{-0.2,0.79,-0.085});
SoShape* SoShape1160 = new SoShape();
SoShape1160->setUSE(QString("jointbox"));
SoTransform1159->addChild(*SoShape1160);

SoHAnimSegment1154->addChild(*SoTransform1159);

SoHAnimJoint1153->addChildren(*SoHAnimSegment1154);

SoHAnimJoint* SoHAnimJoint1161 = new SoHAnimJoint();
SoHAnimJoint1161->setDEF(QString("Joe_r_pinky2"));
SoHAnimJoint1161->X3DNode::setName(QString("r_pinky2"));
SoHAnimJoint1161->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1161->setCenter(new float[]{-0.2,0.755,-0.085});
SoHAnimJoint1161->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint1161->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1162 = new SoHAnimSegment();
SoHAnimSegment1162->setDEF(QString("Joe_r_pinky_middle"));
SoHAnimSegment1162->X3DNode::setName(QString("r_pinky_middle"));
SoShape* SoShape1163 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1164 = new SoVRMLAppearance();
SoVRMLAppearance1164->setUSE(QString("SegmentLine"));
SoShape1163->addChild(*SoVRMLAppearance1164);

SoIndexedLineSet* SoIndexedLineSet1165 = new SoIndexedLineSet();
SoIndexedLineSet1165->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1166 = new SoCoordinate();
SoCoordinate1166->setPoint(new float[]{-0.2,0.755,-0.085,-0.2,0.735,-0.085}, 6);
SoIndexedLineSet1165->setCoord(*SoCoordinate1166);

SoShape1163->setGeometry(*SoIndexedLineSet1165);

SoHAnimSegment1162->addChild(*SoShape1163);

SoTransform* SoTransform1167 = new SoTransform();
SoTransform1167->setTranslation(new float[]{-0.2,0.755,-0.085});
SoShape* SoShape1168 = new SoShape();
SoShape1168->setUSE(QString("jointbox"));
SoTransform1167->addChild(*SoShape1168);

SoHAnimSegment1162->addChild(*SoTransform1167);

SoHAnimJoint1161->addChildren(*SoHAnimSegment1162);

SoHAnimJoint* SoHAnimJoint1169 = new SoHAnimJoint();
SoHAnimJoint1169->setDEF(QString("Joe_r_pinky3"));
SoHAnimJoint1169->X3DNode::setName(QString("r_pinky3"));
SoHAnimJoint1169->setRotation(new float[]{0.0,0.0,1.00000000001315,0.0055856647187357});
SoHAnimJoint1169->setCenter(new float[]{-0.2,0.735,-0.09});
SoHAnimJoint1169->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint1169->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1170 = new SoHAnimSegment();
SoHAnimSegment1170->setDEF(QString("Joe_r_pinky_distal"));
SoHAnimSegment1170->X3DNode::setName(QString("r_pinky_distal"));
SoShape* SoShape1171 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1172 = new SoVRMLAppearance();
SoVRMLAppearance1172->setUSE(QString("SegmentLine"));
SoShape1171->addChild(*SoVRMLAppearance1172);

SoIndexedLineSet* SoIndexedLineSet1173 = new SoIndexedLineSet();
SoIndexedLineSet1173->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1174 = new SoCoordinate();
SoCoordinate1174->setPoint(new float[]{-0.2,0.735,-0.085,-0.2,0.72,-0.085}, 6);
SoIndexedLineSet1173->setCoord(*SoCoordinate1174);

SoShape1171->setGeometry(*SoIndexedLineSet1173);

SoHAnimSegment1170->addChild(*SoShape1171);

SoTransform* SoTransform1175 = new SoTransform();
SoTransform1175->setTranslation(new float[]{-0.2,0.735,-0.085});
SoShape* SoShape1176 = new SoShape();
SoShape1176->setUSE(QString("jointbox"));
SoTransform1175->addChild(*SoShape1176);

SoHAnimSegment1170->addChild(*SoTransform1175);

SoHAnimSite* SoHAnimSite1177 = new SoHAnimSite();
SoHAnimSite1177->setDEF(QString("Joe_r_pinky_distal_tip"));
SoHAnimSite1177->X3DNode::setName(QString("r_pinky_distal_tip"));
SoHAnimSite1177->setTranslation(new float[]{-0.2,0.72,-0.085});
SoShape* SoShape1178 = new SoShape();
SoShape1178->setUSE(QString("sitebox"));
SoHAnimSite1177->addChild(*SoShape1178);

SoHAnimSegment1170->addChild(*SoHAnimSite1177);

SoHAnimJoint1169->addChildren(*SoHAnimSegment1170);

SoHAnimJoint1161->addChildren(*SoHAnimJoint1169);

SoHAnimJoint1153->addChildren(*SoHAnimJoint1161);

SoHAnimJoint1143->addChildren(*SoHAnimJoint1153);

SoHAnimJoint999->addChildren(*SoHAnimJoint1143);

SoHAnimJoint977->addChildren(*SoHAnimJoint999);

SoHAnimJoint947->addChildren(*SoHAnimJoint977);

SoHAnimJoint931->addChildren(*SoHAnimJoint947);

SoHAnimJoint921->addChildren(*SoHAnimJoint931);

SoHAnimJoint555->addChildren(*SoHAnimJoint921);

SoHAnimJoint547->addChildren(*SoHAnimJoint555);

SoHAnimJoint539->addChildren(*SoHAnimJoint547);

SoHAnimJoint529->addChildren(*SoHAnimJoint539);

SoHAnimJoint521->addChildren(*SoHAnimJoint529);

SoHAnimJoint513->addChildren(*SoHAnimJoint521);

SoHAnimJoint505->addChildren(*SoHAnimJoint513);

SoHAnimJoint497->addChildren(*SoHAnimJoint505);

SoHAnimJoint485->addChildren(*SoHAnimJoint497);

SoHAnimJoint475->addChildren(*SoHAnimJoint485);

SoHAnimJoint467->addChildren(*SoHAnimJoint475);

SoHAnimJoint459->addChildren(*SoHAnimJoint467);

SoHAnimJoint451->addChildren(*SoHAnimJoint459);

SoHAnimJoint425->addChildren(*SoHAnimJoint451);

SoHAnimJoint417->addChildren(*SoHAnimJoint425);

SoHAnimJoint409->addChildren(*SoHAnimJoint417);

SoHAnimJoint394->addChildren(*SoHAnimJoint409);

SoHAnimJoint80->addChildren(*SoHAnimJoint394);

SoHAnimHumanoid79->setSkeleton(*SoHAnimJoint80);

SoHAnimJoint* SoHAnimJoint1179 = new SoHAnimJoint();
SoHAnimJoint1179->setUSE(QString("Joe_HumanoidRoot"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1179);

SoHAnimJoint* SoHAnimJoint1180 = new SoHAnimJoint();
SoHAnimJoint1180->setUSE(QString("Joe_sacroiliac"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1180);

SoHAnimJoint* SoHAnimJoint1181 = new SoHAnimJoint();
SoHAnimJoint1181->setUSE(QString("Joe_l_hip"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1181);

SoHAnimJoint* SoHAnimJoint1182 = new SoHAnimJoint();
SoHAnimJoint1182->setUSE(QString("Joe_l_knee"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1182);

SoHAnimJoint* SoHAnimJoint1183 = new SoHAnimJoint();
SoHAnimJoint1183->setUSE(QString("Joe_l_ankle"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1183);

SoHAnimJoint* SoHAnimJoint1184 = new SoHAnimJoint();
SoHAnimJoint1184->setUSE(QString("Joe_l_subtalar"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1184);

SoHAnimJoint* SoHAnimJoint1185 = new SoHAnimJoint();
SoHAnimJoint1185->setUSE(QString("Joe_l_midtarsal"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1185);

SoHAnimJoint* SoHAnimJoint1186 = new SoHAnimJoint();
SoHAnimJoint1186->setUSE(QString("Joe_l_metatarsal"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1186);

SoHAnimJoint* SoHAnimJoint1187 = new SoHAnimJoint();
SoHAnimJoint1187->setUSE(QString("Joe_r_hip"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1187);

SoHAnimJoint* SoHAnimJoint1188 = new SoHAnimJoint();
SoHAnimJoint1188->setUSE(QString("Joe_r_knee"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1188);

SoHAnimJoint* SoHAnimJoint1189 = new SoHAnimJoint();
SoHAnimJoint1189->setUSE(QString("Joe_r_ankle"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1189);

SoHAnimJoint* SoHAnimJoint1190 = new SoHAnimJoint();
SoHAnimJoint1190->setUSE(QString("Joe_r_subtalar"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1190);

SoHAnimJoint* SoHAnimJoint1191 = new SoHAnimJoint();
SoHAnimJoint1191->setUSE(QString("Joe_r_midtarsal"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1191);

SoHAnimJoint* SoHAnimJoint1192 = new SoHAnimJoint();
SoHAnimJoint1192->setUSE(QString("Joe_r_metatarsal"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1192);

SoHAnimJoint* SoHAnimJoint1193 = new SoHAnimJoint();
SoHAnimJoint1193->setUSE(QString("Joe_vl5"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1193);

SoHAnimJoint* SoHAnimJoint1194 = new SoHAnimJoint();
SoHAnimJoint1194->setUSE(QString("Joe_vl4"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1194);

SoHAnimJoint* SoHAnimJoint1195 = new SoHAnimJoint();
SoHAnimJoint1195->setUSE(QString("Joe_vl3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1195);

SoHAnimJoint* SoHAnimJoint1196 = new SoHAnimJoint();
SoHAnimJoint1196->setUSE(QString("Joe_vl2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1196);

SoHAnimJoint* SoHAnimJoint1197 = new SoHAnimJoint();
SoHAnimJoint1197->setUSE(QString("Joe_vl1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1197);

SoHAnimJoint* SoHAnimJoint1198 = new SoHAnimJoint();
SoHAnimJoint1198->setUSE(QString("Joe_vt12"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1198);

SoHAnimJoint* SoHAnimJoint1199 = new SoHAnimJoint();
SoHAnimJoint1199->setUSE(QString("Joe_vt11"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1199);

SoHAnimJoint* SoHAnimJoint1200 = new SoHAnimJoint();
SoHAnimJoint1200->setUSE(QString("Joe_vt10"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1200);

SoHAnimJoint* SoHAnimJoint1201 = new SoHAnimJoint();
SoHAnimJoint1201->setUSE(QString("Joe_vt9"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1201);

SoHAnimJoint* SoHAnimJoint1202 = new SoHAnimJoint();
SoHAnimJoint1202->setUSE(QString("Joe_vt8"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1202);

SoHAnimJoint* SoHAnimJoint1203 = new SoHAnimJoint();
SoHAnimJoint1203->setUSE(QString("Joe_vt7"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1203);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->setUSE(QString("Joe_vt6"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1204);

SoHAnimJoint* SoHAnimJoint1205 = new SoHAnimJoint();
SoHAnimJoint1205->setUSE(QString("Joe_vt5"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1205);

SoHAnimJoint* SoHAnimJoint1206 = new SoHAnimJoint();
SoHAnimJoint1206->setUSE(QString("Joe_vt4"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1206);

SoHAnimJoint* SoHAnimJoint1207 = new SoHAnimJoint();
SoHAnimJoint1207->setUSE(QString("Joe_vt3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1207);

SoHAnimJoint* SoHAnimJoint1208 = new SoHAnimJoint();
SoHAnimJoint1208->setUSE(QString("Joe_vt2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1208);

SoHAnimJoint* SoHAnimJoint1209 = new SoHAnimJoint();
SoHAnimJoint1209->setUSE(QString("Joe_vt1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1209);

SoHAnimJoint* SoHAnimJoint1210 = new SoHAnimJoint();
SoHAnimJoint1210->setUSE(QString("Joe_vc7"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1210);

SoHAnimJoint* SoHAnimJoint1211 = new SoHAnimJoint();
SoHAnimJoint1211->setUSE(QString("Joe_vc6"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1211);

SoHAnimJoint* SoHAnimJoint1212 = new SoHAnimJoint();
SoHAnimJoint1212->setUSE(QString("Joe_vc5"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1212);

SoHAnimJoint* SoHAnimJoint1213 = new SoHAnimJoint();
SoHAnimJoint1213->setUSE(QString("Joe_vc4"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1213);

SoHAnimJoint* SoHAnimJoint1214 = new SoHAnimJoint();
SoHAnimJoint1214->setUSE(QString("Joe_vc3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1214);

SoHAnimJoint* SoHAnimJoint1215 = new SoHAnimJoint();
SoHAnimJoint1215->setUSE(QString("Joe_vc2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1215);

SoHAnimJoint* SoHAnimJoint1216 = new SoHAnimJoint();
SoHAnimJoint1216->setUSE(QString("Joe_vc1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1216);

SoHAnimJoint* SoHAnimJoint1217 = new SoHAnimJoint();
SoHAnimJoint1217->setUSE(QString("Joe_skullbase"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1217);

SoHAnimJoint* SoHAnimJoint1218 = new SoHAnimJoint();
SoHAnimJoint1218->setUSE(QString("Joe_l_eyeball_joint"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1218);

SoHAnimJoint* SoHAnimJoint1219 = new SoHAnimJoint();
SoHAnimJoint1219->setUSE(QString("Joe_r_eyeball_joint"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1219);

SoHAnimJoint* SoHAnimJoint1220 = new SoHAnimJoint();
SoHAnimJoint1220->setUSE(QString("Joe_l_sternoclavicular"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1220);

SoHAnimJoint* SoHAnimJoint1221 = new SoHAnimJoint();
SoHAnimJoint1221->setUSE(QString("Joe_l_acromioclavicular"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1221);

SoHAnimJoint* SoHAnimJoint1222 = new SoHAnimJoint();
SoHAnimJoint1222->setUSE(QString("Joe_l_shoulder"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1222);

SoHAnimJoint* SoHAnimJoint1223 = new SoHAnimJoint();
SoHAnimJoint1223->setUSE(QString("Joe_l_elbow"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1223);

SoHAnimJoint* SoHAnimJoint1224 = new SoHAnimJoint();
SoHAnimJoint1224->setUSE(QString("Joe_l_wrist"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1224);

SoHAnimJoint* SoHAnimJoint1225 = new SoHAnimJoint();
SoHAnimJoint1225->setUSE(QString("Joe_l_thumb1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1225);

SoHAnimJoint* SoHAnimJoint1226 = new SoHAnimJoint();
SoHAnimJoint1226->setUSE(QString("Joe_l_thumb2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1226);

SoHAnimJoint* SoHAnimJoint1227 = new SoHAnimJoint();
SoHAnimJoint1227->setUSE(QString("Joe_l_thumb3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1227);

SoHAnimJoint* SoHAnimJoint1228 = new SoHAnimJoint();
SoHAnimJoint1228->setUSE(QString("Joe_l_index0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1228);

SoHAnimJoint* SoHAnimJoint1229 = new SoHAnimJoint();
SoHAnimJoint1229->setUSE(QString("Joe_l_index1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1229);

SoHAnimJoint* SoHAnimJoint1230 = new SoHAnimJoint();
SoHAnimJoint1230->setUSE(QString("Joe_l_index2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1230);

SoHAnimJoint* SoHAnimJoint1231 = new SoHAnimJoint();
SoHAnimJoint1231->setUSE(QString("Joe_l_index3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1231);

SoHAnimJoint* SoHAnimJoint1232 = new SoHAnimJoint();
SoHAnimJoint1232->setUSE(QString("Joe_l_middle0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1232);

SoHAnimJoint* SoHAnimJoint1233 = new SoHAnimJoint();
SoHAnimJoint1233->setUSE(QString("Joe_l_middle1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1233);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->setUSE(QString("Joe_l_middle2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1234);

SoHAnimJoint* SoHAnimJoint1235 = new SoHAnimJoint();
SoHAnimJoint1235->setUSE(QString("Joe_l_middle3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1235);

SoHAnimJoint* SoHAnimJoint1236 = new SoHAnimJoint();
SoHAnimJoint1236->setUSE(QString("Joe_l_ring0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1236);

SoHAnimJoint* SoHAnimJoint1237 = new SoHAnimJoint();
SoHAnimJoint1237->setUSE(QString("Joe_l_ring1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1237);

SoHAnimJoint* SoHAnimJoint1238 = new SoHAnimJoint();
SoHAnimJoint1238->setUSE(QString("Joe_l_ring2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1238);

SoHAnimJoint* SoHAnimJoint1239 = new SoHAnimJoint();
SoHAnimJoint1239->setUSE(QString("Joe_l_ring3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1239);

SoHAnimJoint* SoHAnimJoint1240 = new SoHAnimJoint();
SoHAnimJoint1240->setUSE(QString("Joe_l_pinky0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1240);

SoHAnimJoint* SoHAnimJoint1241 = new SoHAnimJoint();
SoHAnimJoint1241->setUSE(QString("Joe_l_pinky1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1241);

SoHAnimJoint* SoHAnimJoint1242 = new SoHAnimJoint();
SoHAnimJoint1242->setUSE(QString("Joe_l_pinky2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1242);

SoHAnimJoint* SoHAnimJoint1243 = new SoHAnimJoint();
SoHAnimJoint1243->setUSE(QString("Joe_l_pinky3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1243);

SoHAnimJoint* SoHAnimJoint1244 = new SoHAnimJoint();
SoHAnimJoint1244->setUSE(QString("Joe_r_sternoclavicular"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1244);

SoHAnimJoint* SoHAnimJoint1245 = new SoHAnimJoint();
SoHAnimJoint1245->setUSE(QString("Joe_r_acromioclavicular"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1245);

SoHAnimJoint* SoHAnimJoint1246 = new SoHAnimJoint();
SoHAnimJoint1246->setUSE(QString("Joe_r_shoulder"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1246);

SoHAnimJoint* SoHAnimJoint1247 = new SoHAnimJoint();
SoHAnimJoint1247->setUSE(QString("Joe_r_elbow"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1247);

SoHAnimJoint* SoHAnimJoint1248 = new SoHAnimJoint();
SoHAnimJoint1248->setUSE(QString("Joe_r_wrist"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1248);

SoHAnimJoint* SoHAnimJoint1249 = new SoHAnimJoint();
SoHAnimJoint1249->setUSE(QString("Joe_r_thumb1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1249);

SoHAnimJoint* SoHAnimJoint1250 = new SoHAnimJoint();
SoHAnimJoint1250->setUSE(QString("Joe_r_thumb2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1250);

SoHAnimJoint* SoHAnimJoint1251 = new SoHAnimJoint();
SoHAnimJoint1251->setUSE(QString("Joe_r_thumb3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1251);

SoHAnimJoint* SoHAnimJoint1252 = new SoHAnimJoint();
SoHAnimJoint1252->setUSE(QString("Joe_r_index0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1252);

SoHAnimJoint* SoHAnimJoint1253 = new SoHAnimJoint();
SoHAnimJoint1253->setUSE(QString("Joe_r_index1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1253);

SoHAnimJoint* SoHAnimJoint1254 = new SoHAnimJoint();
SoHAnimJoint1254->setUSE(QString("Joe_r_index2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1254);

SoHAnimJoint* SoHAnimJoint1255 = new SoHAnimJoint();
SoHAnimJoint1255->setUSE(QString("Joe_r_index3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1255);

SoHAnimJoint* SoHAnimJoint1256 = new SoHAnimJoint();
SoHAnimJoint1256->setUSE(QString("Joe_r_middle0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1256);

SoHAnimJoint* SoHAnimJoint1257 = new SoHAnimJoint();
SoHAnimJoint1257->setUSE(QString("Joe_r_middle1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1257);

SoHAnimJoint* SoHAnimJoint1258 = new SoHAnimJoint();
SoHAnimJoint1258->setUSE(QString("Joe_r_middle2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1258);

SoHAnimJoint* SoHAnimJoint1259 = new SoHAnimJoint();
SoHAnimJoint1259->setUSE(QString("Joe_r_middle3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1259);

SoHAnimJoint* SoHAnimJoint1260 = new SoHAnimJoint();
SoHAnimJoint1260->setUSE(QString("Joe_r_ring0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1260);

SoHAnimJoint* SoHAnimJoint1261 = new SoHAnimJoint();
SoHAnimJoint1261->setUSE(QString("Joe_r_ring1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1261);

SoHAnimJoint* SoHAnimJoint1262 = new SoHAnimJoint();
SoHAnimJoint1262->setUSE(QString("Joe_r_ring2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1262);

SoHAnimJoint* SoHAnimJoint1263 = new SoHAnimJoint();
SoHAnimJoint1263->setUSE(QString("Joe_r_ring3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1263);

SoHAnimJoint* SoHAnimJoint1264 = new SoHAnimJoint();
SoHAnimJoint1264->setUSE(QString("Joe_r_pinky0"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1264);

SoHAnimJoint* SoHAnimJoint1265 = new SoHAnimJoint();
SoHAnimJoint1265->setUSE(QString("Joe_r_pinky1"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1265);

SoHAnimJoint* SoHAnimJoint1266 = new SoHAnimJoint();
SoHAnimJoint1266->setUSE(QString("Joe_r_pinky2"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1266);

SoHAnimJoint* SoHAnimJoint1267 = new SoHAnimJoint();
SoHAnimJoint1267->setUSE(QString("Joe_r_pinky3"));
SoHAnimHumanoid79->setJoints(*SoHAnimJoint1267);

SoCoordinate* SoCoordinate1268 = new SoCoordinate();
SoCoordinate1268->setDEF(QString("TheSkinCoord"));
SoCoordinate1268->setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
SoHAnimHumanoid79->setSkinCoord(*SoCoordinate1268);

SoShape* SoShape1269 = new SoShape();
SoShape1269->setDEF(QString("SkinShape"));
SoVRMLAppearance* SoVRMLAppearance1270 = new SoVRMLAppearance();
SoVRMLAppearance1270->setDEF(QString("SkinAppearance"));
SoMaterial* SoMaterial1271 = new SoMaterial();
SoMaterial1271->setDEF(QString("SkinMaterial"));
SoMaterial1271->setAmbientIntensity(0.6);
SoMaterial1271->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial1271->setShininess(0.6);
SoMaterial1271->setTransparency(0.2);
SoVRMLAppearance1270->addChild(*SoMaterial1271);

SoImageTexture* SoImageTexture1272 = new SoImageTexture();
SoImageTexture1272->setDEF(QString("zBlueSpiralBkg2"));
SoImageTexture1272->setDescription(QString("Blue Spiral Pattern"));
SoImageTexture1272->setUrl(new QString[]{QString("zBlueSpiralBkg2.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 2);
SoVRMLAppearance1270->addChild(*SoImageTexture1272);

SoShape1269->addChild(*SoVRMLAppearance1270);

SoIndexedFaceSet* SoIndexedFaceSet1273 = new SoIndexedFaceSet();
SoIndexedFaceSet1273->setCreaseAngle(3.1);
SoIndexedFaceSet1273->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoColor* SoColor1274 = new SoColor();
SoColor1274->setColor(new float[]{1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0}, 2079);
SoIndexedFaceSet1273->setColor(*SoColor1274);

SoCoordinate* SoCoordinate1275 = new SoCoordinate();
SoCoordinate1275->setUSE(QString("TheSkinCoord"));
SoIndexedFaceSet1273->setCoord(*SoCoordinate1275);

SoShape1269->setGeometry(*SoIndexedFaceSet1273);

SoHAnimHumanoid79->setSkin(*SoShape1269);

SoGroup78->addChild(*SoHAnimHumanoid79);

SoGroup77->addChild(*SoGroup78);

SoNode33->addChild(*SoGroup77);

SoTimeSensor* SoTimeSensor1276 = new SoTimeSensor();
SoTimeSensor1276->setDEF(QString("Time1"));
SoTimeSensor1276->setCycleInterval(2.86);
SoTimeSensor1276->setLoop(true);
SoNode33->addChild(*SoTimeSensor1276);

SoTimeSensor* SoTimeSensor1277 = new SoTimeSensor();
SoTimeSensor1277->setDEF(QString("Time2"));
SoTimeSensor1277->setCycleInterval(5.72);
SoTimeSensor1277->setLoop(true);
SoNode33->addChild(*SoTimeSensor1277);

SoTimeSensor* SoTimeSensor1278 = new SoTimeSensor();
SoTimeSensor1278->setDEF(QString("Time3"));
SoTimeSensor1278->setCycleInterval(5.8);
SoTimeSensor1278->setLoop(true);
SoNode33->addChild(*SoTimeSensor1278);

SoOrientationInterpolator* SoOrientationInterpolator1279 = new SoOrientationInterpolator();
SoOrientationInterpolator1279->setDEF(QString("Pitch"));
SoOrientationInterpolator1279->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1279->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.25600004196167,1.0,0.0,0.0,2.51200008392334,1.0,0.0,0.0,3.76799988746643,1.0,0.0,0.0,5.02400016784668,1.0,0.0,0.0,6.28000020980835}, 24);
SoNode33->addChild(*SoOrientationInterpolator1279);

SoOrientationInterpolator* SoOrientationInterpolator1280 = new SoOrientationInterpolator();
SoOrientationInterpolator1280->setDEF(QString("Yaw"));
SoOrientationInterpolator1280->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1280->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.25600004196167,0.0,1.0,0.0,2.51200008392334,0.0,1.0,0.0,3.76799988746643,0.0,1.0,0.0,5.02400016784668,0.0,1.0,0.0,6.28000020980835}, 24);
SoNode33->addChild(*SoOrientationInterpolator1280);

SoOrientationInterpolator* SoOrientationInterpolator1281 = new SoOrientationInterpolator();
SoOrientationInterpolator1281->setDEF(QString("Roll"));
SoOrientationInterpolator1281->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1281->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.25600004196167,0.0,0.0,1.0,2.51200008392334,0.0,0.0,1.0,3.76799988746643,0.0,0.0,1.0,5.02400016784668,0.0,0.0,1.0,6.28000020980835}, 24);
SoNode33->addChild(*SoOrientationInterpolator1281);

SoOrientationInterpolator* SoOrientationInterpolator1282 = new SoOrientationInterpolator();
SoOrientationInterpolator1282->setDEF(QString("vc6Yaw"));
SoOrientationInterpolator1282->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 9);
SoOrientationInterpolator1282->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.699999988079071,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.5,-0.400000005960465,-1.0,0.0,0.699999988079071,-0.400000005960465,-1.0,0.0,0.400000005960465,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 36);
SoNode33->addChild(*SoOrientationInterpolator1282);

SoOrientationInterpolator* SoOrientationInterpolator1283 = new SoOrientationInterpolator();
SoOrientationInterpolator1283->setDEF(QString("EyeballsRotation"));
SoOrientationInterpolator1283->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1.0}, 10);
SoOrientationInterpolator1283->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 40);
SoNode33->addChild(*SoOrientationInterpolator1283);

SoOrientationInterpolator* SoOrientationInterpolator1284 = new SoOrientationInterpolator();
SoOrientationInterpolator1284->setDEF(QString("r_sternoclavicularRelax"));
SoOrientationInterpolator1284->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1284->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.200000002980232,-1.0,0.0,0.109999999403954,0.200000002980232,-1.0,0.0,0.109999999403954,0.100000001490116,-1.0,0.0,0.100000001490116,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1284);

SoOrientationInterpolator* SoOrientationInterpolator1285 = new SoOrientationInterpolator();
SoOrientationInterpolator1285->setDEF(QString("r_acromioclavicularRelax"));
SoOrientationInterpolator1285->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1285->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1285);

SoOrientationInterpolator* SoOrientationInterpolator1286 = new SoOrientationInterpolator();
SoOrientationInterpolator1286->setDEF(QString("r_shoulderRelax"));
SoOrientationInterpolator1286->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1286->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1286);

SoOrientationInterpolator* SoOrientationInterpolator1287 = new SoOrientationInterpolator();
SoOrientationInterpolator1287->setDEF(QString("r_elbowRelax"));
SoOrientationInterpolator1287->setKey(new float[]{0.0,0.15,0.4,0.6,0.9,1.0}, 6);
SoOrientationInterpolator1287->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.200000002980232,0.0,0.00999999977648258,0.5,-0.200000002980232,0.0,0.00999999977648258,0.5,-0.200000002980232,0.0,0.00999999977648258,0.5,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1287);

SoOrientationInterpolator* SoOrientationInterpolator1288 = new SoOrientationInterpolator();
SoOrientationInterpolator1288->setDEF(QString("r_wristRelax"));
SoOrientationInterpolator1288->setKey(new float[]{0.0,0.2,0.4,0.6,0.9,1.0}, 6);
SoOrientationInterpolator1288->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.100000001490116,-0.0900000035762787,0.25,0.0,0.100000001490116,-0.0900000035762787,0.25,0.0,0.100000001490116,-0.0900000035762787,0.25,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1288);

SoOrientationInterpolator* SoOrientationInterpolator1289 = new SoOrientationInterpolator();
SoOrientationInterpolator1289->setDEF(QString("r_index0Relax"));
SoOrientationInterpolator1289->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1289->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.25,0.25,-1.0,0.125,-0.25,0.25,-1.0,0.125,-0.25,0.25,-1.0,0.125,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1289);

SoOrientationInterpolator* SoOrientationInterpolator1290 = new SoOrientationInterpolator();
SoOrientationInterpolator1290->setDEF(QString("r_index1Relax"));
SoOrientationInterpolator1290->setKey(new float[]{0.0,0.1,0.2,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1290->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.135000005364418,-0.135000005364418,1.0,0.35699999332428,-0.158999994397163,-0.152999997138977,1.0,0.354999989271164,-0.158999994397163,-0.152999997138977,1.0,0.35699999332428,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1290);

SoOrientationInterpolator* SoOrientationInterpolator1291 = new SoOrientationInterpolator();
SoOrientationInterpolator1291->setDEF(QString("r_middle0Relax"));
SoOrientationInterpolator1291->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1291->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.140000000596046,0.0,0.0,-1.0,0.140000000596046,0.0,0.0,-1.0,0.140000000596046,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1291);

SoOrientationInterpolator* SoOrientationInterpolator1292 = new SoOrientationInterpolator();
SoOrientationInterpolator1292->setDEF(QString("r_middle1Relax"));
SoOrientationInterpolator1292->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator1292->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.300000011920929,0.256999999284744,0.0,0.0,0.300000011920929,0.370000004768372,0.0,0.0,0.300000011920929,0.389999985694885,0.0,0.0,0.300000011920929,0.310000002384186,0.0,0.0,0.300000011920929,0.319999992847443,0.0,0.0,0.300000011920929,0.340000003576279,0.0,0.0,0.300000011920929,0.280000001192093,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 44);
SoNode33->addChild(*SoOrientationInterpolator1292);

SoOrientationInterpolator* SoOrientationInterpolator1293 = new SoOrientationInterpolator();
SoOrientationInterpolator1293->setDEF(QString("r_ring0Relax"));
SoOrientationInterpolator1293->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1293->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.25,0.25,-1.0,0.100000001490116,0.25,0.25,-1.0,0.100000001490116,0.25,0.25,-1.0,0.100000001490116,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1293);

SoOrientationInterpolator* SoOrientationInterpolator1294 = new SoOrientationInterpolator();
SoOrientationInterpolator1294->setDEF(QString("r_ring1Relax"));
SoOrientationInterpolator1294->setKey(new float[]{0.0,0.1,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator1294->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.135000005364418,0.135000005364418,1.0,0.270000010728836,0.135000005364418,0.135000005364418,1.0,0.270000010728836,0.135000005364418,0.150000005960464,1.0,0.270000010728836,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1294);

SoOrientationInterpolator* SoOrientationInterpolator1295 = new SoOrientationInterpolator();
SoOrientationInterpolator1295->setDEF(QString("r_pinky0Relax"));
SoOrientationInterpolator1295->setKey(new float[]{0.0,0.1,0.3,0.5,0.8,1.0}, 6);
SoOrientationInterpolator1295->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0.349999994039536,0.349999994039536,-0.899999976158142,0.119999997317791,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1295);

SoOrientationInterpolator* SoOrientationInterpolator1296 = new SoOrientationInterpolator();
SoOrientationInterpolator1296->setDEF(QString("r_pinky1Relax"));
SoOrientationInterpolator1296->setKey(new float[]{0.0,0.1,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1296->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.200000002980232,0.25,1.0,0.270000010728836,0.200000002980232,0.219999998807907,1.0,0.270000010728836,0.219999998807907,0.200000002980232,1.0,0.270000010728836,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1296);

SoOrientationInterpolator* SoOrientationInterpolator1297 = new SoOrientationInterpolator();
SoOrientationInterpolator1297->setDEF(QString("r_thumb1Relax"));
SoOrientationInterpolator1297->setKey(new float[]{0.0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1.0}, 10);
SoOrientationInterpolator1297->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,1.0,1.0,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,0.0,0.0,1.0,0.0}, 40);
SoNode33->addChild(*SoOrientationInterpolator1297);

SoOrientationInterpolator* SoOrientationInterpolator1298 = new SoOrientationInterpolator();
SoOrientationInterpolator1298->setDEF(QString("r_thumb2Relax"));
SoOrientationInterpolator1298->setKey(new float[]{0.0,0.2,0.5,0.6,0.7,0.8,1.0}, 7);
SoOrientationInterpolator1298->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.449999988079071,1.0,0.0,0.0,0.449999988079071,1.0,0.0,0.0,0.449999988079071,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1298);

SoOrientationInterpolator* SoOrientationInterpolator1299 = new SoOrientationInterpolator();
SoOrientationInterpolator1299->setDEF(QString("r_thumb3Relax"));
SoOrientationInterpolator1299->setKey(new float[]{0.0,0.2,0.5,0.6,0.7,0.8,1.0}, 7);
SoOrientationInterpolator1299->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.449999988079071,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1299);

SoOrientationInterpolator* SoOrientationInterpolator1300 = new SoOrientationInterpolator();
SoOrientationInterpolator1300->setDEF(QString("r_fingers2Relax"));
SoOrientationInterpolator1300->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator1300->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.430000007152557,0.0,0.0,1.0,0.439999997615814,0.0,0.0,1.0,0.46000000834465,0.0,0.0,1.0,0.439999997615814,0.0,0.0,1.0,0.245000004768372,0.0,0.0,1.0,0.239999994635582,0.0,0.0,1.0,0.209999993443489,0.0,0.0,1.0,0.239999994635582,0.0,0.0,1.0,0.0}, 44);
SoNode33->addChild(*SoOrientationInterpolator1300);

SoOrientationInterpolator* SoOrientationInterpolator1301 = new SoOrientationInterpolator();
SoOrientationInterpolator1301->setDEF(QString("r_fingers3Relax"));
SoOrientationInterpolator1301->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator1301->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.370000004768372,0.0,0.0,1.0,0.379999995231628,0.0,0.0,1.0,0.389999985694885,0.0,0.0,1.0,0.379999995231628,0.0,0.0,1.0,0.270000010728836,0.0,0.0,1.0,0.280000001192093,0.0,0.0,1.0,0.270000010728836,0.0,0.0,1.0,0.280000001192093,0.0,0.0,1.0,0.0}, 44);
SoNode33->addChild(*SoOrientationInterpolator1301);

SoOrientationInterpolator* SoOrientationInterpolator1302 = new SoOrientationInterpolator();
SoOrientationInterpolator1302->setDEF(QString("r_sternoclavicularRoll"));
SoOrientationInterpolator1302->setKey(new float[]{0.0,0.2,0.4,0.5,0.7,0.8,1.0}, 7);
SoOrientationInterpolator1302->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.100000001490116,0.0,0.0,-1.0,0.219999998807907,0.0,0.5,-1.0,0.270000010728836,0.0,0.0,-1.0,0.100000001490116,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1302);

SoOrientationInterpolator* SoOrientationInterpolator1303 = new SoOrientationInterpolator();
SoOrientationInterpolator1303->setDEF(QString("r_acromioclavicularRoll"));
SoOrientationInterpolator1303->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1303->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.0500000007450581,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1303);

SoOrientationInterpolator* SoOrientationInterpolator1304 = new SoOrientationInterpolator();
SoOrientationInterpolator1304->setDEF(QString("r_shoulderRoll"));
SoOrientationInterpolator1304->setKey(new float[]{0.0,0.2,0.4,0.5,0.85,1.0}, 6);
SoOrientationInterpolator1304->setKeyValue(new float[]{1.0,0.0,0.0,0.0,0.0,0.0,-1.0,1.6599999666214,-0.25,0.0,-1.0,1.75999999046326,0.0,0.0,-1.0,1.25600004196167,0.0,0.0,-1.0,0.0500000007450581,1.0,0.0,0.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1304);

SoOrientationInterpolator* SoOrientationInterpolator1305 = new SoOrientationInterpolator();
SoOrientationInterpolator1305->setDEF(QString("r_ForeArmPitch"));
SoOrientationInterpolator1305->setKey(new float[]{0.0,0.15,0.3,0.5,0.7,0.9,1.0}, 7);
SoOrientationInterpolator1305->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.550000011920929,-1.0,-0.25,0.0,2.54999995231628,-1.0,-0.25,0.0,2.54999995231628,-1.0,-0.25,0.0,2.54999995231628,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1305);

SoOrientationInterpolator* SoOrientationInterpolator1306 = new SoOrientationInterpolator();
SoOrientationInterpolator1306->setDEF(QString("r_wristRoll"));
SoOrientationInterpolator1306->setKey(new float[]{0.0,0.2,0.4,0.6,0.65,0.75,0.85,1.0}, 8);
SoOrientationInterpolator1306->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.550000011920929,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.54999995231628,0.0,0.0,-1.0,1.54999995231628,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 32);
SoNode33->addChild(*SoOrientationInterpolator1306);

SoOrientationInterpolator* SoOrientationInterpolator1307 = new SoOrientationInterpolator();
SoOrientationInterpolator1307->setDEF(QString("r_handPitch"));
SoOrientationInterpolator1307->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1307->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,0.00999999977648258,0.25,0.0,0.0,-0.00999999977648258,0.0299999993294477,0.0,0.0,0.00999999977648258,0.0500000007450581,0.0,0.0,0.00999999977648258,0.00999999977648258,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1307);

SoOrientationInterpolator* SoOrientationInterpolator1308 = new SoOrientationInterpolator();
SoOrientationInterpolator1308->setDEF(QString("r_thumb1Pitch"));
SoOrientationInterpolator1308->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1308->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.400000005960465,1.0,0.0,0.0,0.200000002980232,1.0,0.0,0.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1308);

SoOrientationInterpolator* SoOrientationInterpolator1309 = new SoOrientationInterpolator();
SoOrientationInterpolator1309->setDEF(QString("r_thumb2Pitch"));
SoOrientationInterpolator1309->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1309->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.300000011920929,1.0,1.0,0.0,0.300000011920929,1.0,1.0,0.0,0.600000023841858,1.0,1.0,0.0,0.300000011920929,0.0,1.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1309);

SoOrientationInterpolator* SoOrientationInterpolator1310 = new SoOrientationInterpolator();
SoOrientationInterpolator1310->setDEF(QString("l_shoulderRoll"));
SoOrientationInterpolator1310->setKey(new float[]{0.0,0.2,0.4,0.5,0.85,1.0}, 6);
SoOrientationInterpolator1310->setKeyValue(new float[]{0.25,0.0,1.0,1.75999999046326,0.0,0.0,1.0,1.6599999666214,0.25,0.0,1.0,1.75999999046326,0.0,0.0,1.0,1.25600004196167,0.0,0.0,1.0,0.0500000007450581,0.25,0.0,1.0,1.75999999046326}, 24);
SoNode33->addChild(*SoOrientationInterpolator1310);

SoGroup* SoGroup1311 = new SoGroup();
SoPositionInterpolator* SoPositionInterpolator1312 = new SoPositionInterpolator();
SoPositionInterpolator1312->setDEF(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoPositionInterpolator1312->setKey(new float[]{0.0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator1312->setKeyValue(new float[]{0.0,-0.00928,0.0,0.0,-0.003858,0.0,0.0,-0.008847,0.0,0.0,-0.01486,0.0,0.0,-0.02641,0.0,0.0,-0.03934,0.0,0.0,-0.0502,0.0,0.0,-0.07469,0.0,0.0,-0.02732,0.0,0.0,-0.01608,0.0,0.0,-0.01129,0.0,0.0,-0.005819,0.0,0.0,-0.002004,0.0,0.0,-0.002579,0.0,0.0,-0.0143,0.0,0.0,-0.03799,0.0,0.0,-0.05648,0.0,0.0,-0.045,0.0,0.0,-0.00928,0.0}, 57);
SoGroup1311->addChild(*SoPositionInterpolator1312);

SoOrientationInterpolator* SoOrientationInterpolator1313 = new SoOrientationInterpolator();
SoOrientationInterpolator1313->setDEF(QString("HUMANOIDROOT_ANIMATOR"));
SoOrientationInterpolator1313->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1313->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
SoGroup1311->addChild(*SoOrientationInterpolator1313);

SoOrientationInterpolator* SoOrientationInterpolator1314 = new SoOrientationInterpolator();
SoOrientationInterpolator1314->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator1314->setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator1314->setKeyValue(new float[]{-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139,0.996299982070923,-0.0105699999257922,0.0848100036382675,0.248799994587898,0.996500015258789,0.0159099996089935,-0.0822200030088425,0.383599996566772,-0.701799988746643,-0.0322300009429455,-0.711700022220612,0.12890000641346,-1.0,0.0,0.0,0.551800012588501,-0.996399998664856,0.0223099999129772,0.0816999971866608,0.535099983215332,-0.98089998960495,0.0491200014948845,0.18809999525547,0.520399987697601,-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139}, 32);
SoGroup1311->addChild(*SoOrientationInterpolator1314);

SoOrientationInterpolator* SoOrientationInterpolator1315 = new SoOrientationInterpolator();
SoOrientationInterpolator1315->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator1315->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator1315->setKeyValue(new float[]{1.0,0.0,0.0,0.32260000705719,1.0,0.0,0.0,0.155599996447563,1.0,0.0,0.0,0.086779996752739,1.0,0.0,0.0,0.875100016593933,1.0,0.0,0.0,1.13100004196167,1.0,0.0,0.0,0.0996100008487701,1.0,0.0,0.0,0.394199997186661,1.0,0.0,0.0,0.32260000705719}, 32);
SoGroup1311->addChild(*SoOrientationInterpolator1315);

SoOrientationInterpolator* SoOrientationInterpolator1316 = new SoOrientationInterpolator();
SoOrientationInterpolator1316->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator1316->setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
SoOrientationInterpolator1316->setKeyValue(new float[]{-1.0,0.0,0.0,0.067100003361702,-1.0,0.0,0.0,0.215200006961823,-1.0,0.0,0.0,0.318399995565414,-1.0,0.0,0.0,0.471700012683868,-1.0,0.0,0.0,0.291200011968613,1.0,0.0,0.0,0.222200006246567,-1.0,0.0,0.0,0.067100003361702}, 28);
SoGroup1311->addChild(*SoOrientationInterpolator1316);

SoOrientationInterpolator* SoOrientationInterpolator1317 = new SoOrientationInterpolator();
SoOrientationInterpolator1317->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator1317->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1.0}, 11);
SoOrientationInterpolator1317->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.353300005197525,-1.0,0.0,0.0,0.107199996709824,1.0,0.0,0.0,0.400000005960465,1.0,0.0,0.0,0.127000004053116,-1.0,0.0,0.0,0.0179999992251396,-1.0,0.0,0.0,0.0579999983310699,-1.0,0.0,0.0,0.239999994635582,-1.0,0.0,0.0,0.349999994039536,-1.0,0.0,0.0,0.330000013113022,0.0,0.0,1.0,0.0}, 44);
SoGroup1311->addChild(*SoOrientationInterpolator1317);

SoOrientationInterpolator* SoOrientationInterpolator1318 = new SoOrientationInterpolator();
SoOrientationInterpolator1318->setDEF(QString("L_subtalar_ANIMATOR"));
SoOrientationInterpolator1318->setKey(new float[]{0.0,0.3,1.0}, 3);
SoOrientationInterpolator1318->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1311->addChild(*SoOrientationInterpolator1318);

SoOrientationInterpolator* SoOrientationInterpolator1319 = new SoOrientationInterpolator();
SoOrientationInterpolator1319->setDEF(QString("L_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator1319->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1319->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.200000002980232,1.0,0.0,0.0,0.0}, 12);
SoGroup1311->addChild(*SoOrientationInterpolator1319);

SoOrientationInterpolator* SoOrientationInterpolator1320 = new SoOrientationInterpolator();
SoOrientationInterpolator1320->setDEF(QString("L_metatarsal_ANIMATOR"));
SoOrientationInterpolator1320->setKey(new float[]{0.0,0.2,0.4,0.8,1.0}, 5);
SoOrientationInterpolator1320->setKeyValue(new float[]{-1.0,0.0,0.0,0.300000011920929,-1.0,0.0,0.0,0.150000005960464,1.0,0.0,0.0,0.300000011920929,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.300000011920929}, 20);
SoGroup1311->addChild(*SoOrientationInterpolator1320);

SoOrientationInterpolator* SoOrientationInterpolator1321 = new SoOrientationInterpolator();
SoOrientationInterpolator1321->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator1321->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator1321->setKeyValue(new float[]{-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121,-0.995000004768372,0.0229599997401238,0.0967399999499321,0.468300014734268,-1.0,0.0019000000320375,0.00796000007539988,0.473199993371964,-0.998000025749207,-0.0157999992370605,-0.0610200017690659,0.50789999961853,-0.991100013256073,-0.0354099981486797,-0.128600001335144,0.541899979114533,-0.913100004196167,-0.0624300017952919,-0.402999997138977,0.33610001206398,-0.430599987506866,-0.0796200037002564,-0.898999989032745,0.0703800022602081,1.0,0.0,0.0,0.257099986076355,0.989099979400635,-0.0280499998480082,0.144400000572205,0.387899994850159,-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121}, 40);
SoGroup1311->addChild(*SoOrientationInterpolator1321);

SoOrientationInterpolator* SoOrientationInterpolator1322 = new SoOrientationInterpolator();
SoOrientationInterpolator1322->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator1322->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator1322->setKeyValue(new float[]{1.0,0.0,0.0,0.857299983501434,1.0,0.0,0.0,0.892599999904633,1.0,0.0,0.0,0.535099983215332,1.0,0.0,0.0,0.175600007176399,1.0,0.0,0.0,0.119400002062321,1.0,0.0,0.0,0.315299987792969,1.0,0.0,0.0,0.0935399979352951,1.0,0.0,0.0,0.0855799987912178,1.0,0.0,0.0,0.247500002384186,1.0,0.0,0.0,0.857299983501434}, 40);
SoGroup1311->addChild(*SoOrientationInterpolator1322);

SoOrientationInterpolator* SoOrientationInterpolator1323 = new SoOrientationInterpolator();
SoOrientationInterpolator1323->setDEF(QString("R_subtalar_ANIMATOR"));
SoOrientationInterpolator1323->setKey(new float[]{0.0,0.225,0.25,0.35,0.45,0.85,0.91}, 7);
SoOrientationInterpolator1323->setKeyValue(new float[]{-1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1,1.0,0.0,0.0,0.25}, 28);
SoGroup1311->addChild(*SoOrientationInterpolator1323);

SoOrientationInterpolator* SoOrientationInterpolator1324 = new SoOrientationInterpolator();
SoOrientationInterpolator1324->setDEF(QString("R_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator1324->setKey(new float[]{0.0,0.22,1.0}, 3);
SoOrientationInterpolator1324->setKeyValue(new float[]{1.0,0.0,0.0,-0.200000002980232,0.0,0.0,1.0,0.0,1.0,0.0,0.0,-0.200000002980232}, 12);
SoGroup1311->addChild(*SoOrientationInterpolator1324);

SoOrientationInterpolator* SoOrientationInterpolator1325 = new SoOrientationInterpolator();
SoOrientationInterpolator1325->setDEF(QString("R_metatarsal_ANIMATOR"));
SoOrientationInterpolator1325->setKey(new float[]{0.0,0.2,0.4,0.8,1.0}, 5);
SoOrientationInterpolator1325->setKeyValue(new float[]{-1.0,0.0,0.0,0.150000005960464,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.300000011920929,-1.0,0.0,0.0,0.300000011920929,-1.0,0.0,0.0,0.150000005960464}, 20);
SoGroup1311->addChild(*SoOrientationInterpolator1325);

SoOrientationInterpolator* SoOrientationInterpolator1326 = new SoOrientationInterpolator();
SoOrientationInterpolator1326->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator1326->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator1326->setKeyValue(new float[]{0.0,1.0,0.0,0.0825999975204468,-0.0197199992835522,-0.597400009632111,0.801699995994568,0.0823099985718727,0.0092960000038147,-0.964800000190735,0.262699991464615,0.17339999973774,-0.0123800002038479,0.954900026321411,-0.29679998755455,0.0873199999332428,-0.00812499970197678,0.969099998474121,-0.246299996972084,0.158000007271767,0.0,1.0,0.0,0.0825999975204468}, 24);
SoGroup1311->addChild(*SoOrientationInterpolator1326);

SoOrientationInterpolator* SoOrientationInterpolator1327 = new SoOrientationInterpolator();
SoOrientationInterpolator1327->setDEF(QString("SKULLBASE_ANIMATOR"));
SoOrientationInterpolator1327->setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
SoOrientationInterpolator1327->setKeyValue(new float[]{0.0,-1.0,0.0,0.0864000022411346,0.0,1.0,0.0,0.182500004768372,0.0,1.0,0.0,0.150499999523163,0.0,1.0,0.0,0.10530000180006,0.0,1.0,0.0,0.0439100004732609,0.0,-1.0,0.0,0.031190000474453,0.0,-1.0,0.0,0.0793600007891655,0.0,-1.0,0.0,0.16159999370575,0.0,-1.0,0.0,0.155000001192093,0.0,-1.0,0.0,0.0864199995994568}, 40);
SoGroup1311->addChild(*SoOrientationInterpolator1327);

SoOrientationInterpolator* SoOrientationInterpolator1328 = new SoOrientationInterpolator();
SoOrientationInterpolator1328->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator1328->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1328->setKeyValue(new float[]{1.0,0.0,0.400000005960465,0.119999997317791,-1.0,0.0,0.400000005960465,0.186000004410744,1.0,0.0,0.100000001490116,0.335999995470047,1.0,0.0,0.400000005960465,0.119999997317791}, 16);
SoGroup1311->addChild(*SoOrientationInterpolator1328);

SoOrientationInterpolator* SoOrientationInterpolator1329 = new SoOrientationInterpolator();
SoOrientationInterpolator1329->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator1329->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1329->setKeyValue(new float[]{-1.0,0.0,0.0,0.0659999996423721,-1.0,0.0,0.0,0.488000005483627,-1.0,0.0,0.0,0.0176999997347593,-1.0,0.0,0.0,0.065987803041935}, 16);
SoGroup1311->addChild(*SoOrientationInterpolator1329);

SoOrientationInterpolator* SoOrientationInterpolator1330 = new SoOrientationInterpolator();
SoOrientationInterpolator1330->setDEF(QString("L_WRIST_ANIMATOR"));
SoOrientationInterpolator1330->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1330->setKeyValue(new float[]{0.0,-1.0,0.0,0.460999995470047,-0.330199986696243,-0.927500009536743,0.175500005483627,0.538800001144409,0.0327773988246918,-0.99931401014328,-0.0172185003757477,0.492033004760742,0.0,-1.0,0.0,0.46110001206398}, 16);
SoGroup1311->addChild(*SoOrientationInterpolator1330);

SoOrientationInterpolator* SoOrientationInterpolator1331 = new SoOrientationInterpolator();
SoOrientationInterpolator1331->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator1331->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1331->setKeyValue(new float[]{-1.0,0.0,-1.0,0.0920000001788139,1.0,0.0,-0.200000002980232,0.319700002670288,-1.0,0.0,-0.5,0.156399995088577,-1.0,0.0,-1.0,0.0920000001788139}, 16);
SoGroup1311->addChild(*SoOrientationInterpolator1331);

SoOrientationInterpolator* SoOrientationInterpolator1332 = new SoOrientationInterpolator();
SoOrientationInterpolator1332->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator1332->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1332->setKeyValue(new float[]{-1.0,0.0,0.0,0.411500006914139,-1.0,0.0,0.0,0.0925000011920929,-1.0,0.0,0.0,0.572567999362946,-1.0,0.0,0.0,0.411507993936539}, 16);
SoGroup1311->addChild(*SoOrientationInterpolator1332);

SoOrientationInterpolator* SoOrientationInterpolator1333 = new SoOrientationInterpolator();
SoOrientationInterpolator1333->setDEF(QString("R_WRIST_ANIMATOR"));
SoOrientationInterpolator1333->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1333->setKeyValue(new float[]{-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333,0.153300002217293,-0.987800002098084,0.0258200000971556,0.390199989080429,-0.570100009441376,0.760399997234345,-0.310999989509583,0.36599999666214,-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333}, 16);
SoGroup1311->addChild(*SoOrientationInterpolator1333);

SoNode33->addChild(*SoGroup1311);

SoROUTE* SoROUTE1334 = new SoROUTE();
SoROUTE1334->setFromNode(QString("Time2"));
SoROUTE1334->setFromField(QString("fraction_changed"));
SoROUTE1334->setToNode(QString("vc6Yaw"));
SoROUTE1334->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1334);

SoROUTE* SoROUTE1335 = new SoROUTE();
SoROUTE1335->setFromNode(QString("vc6Yaw"));
SoROUTE1335->setFromField(QString("value_changed"));
SoROUTE1335->setToNode(QString("Joe_vc6"));
SoROUTE1335->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1335);

SoROUTE* SoROUTE1336 = new SoROUTE();
SoROUTE1336->setFromNode(QString("Time3"));
SoROUTE1336->setFromField(QString("fraction_changed"));
SoROUTE1336->setToNode(QString("EyeballsRotation"));
SoROUTE1336->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1336);

SoROUTE* SoROUTE1337 = new SoROUTE();
SoROUTE1337->setFromNode(QString("EyeballsRotation"));
SoROUTE1337->setFromField(QString("value_changed"));
SoROUTE1337->setToNode(QString("Joe_r_eyeball_joint"));
SoROUTE1337->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1337);

SoROUTE* SoROUTE1338 = new SoROUTE();
SoROUTE1338->setFromNode(QString("EyeballsRotation"));
SoROUTE1338->setFromField(QString("value_changed"));
SoROUTE1338->setToNode(QString("Joe_l_eyeball_joint"));
SoROUTE1338->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1338);

SoROUTE* SoROUTE1339 = new SoROUTE();
SoROUTE1339->setFromNode(QString("r_sternoclavicularRelax"));
SoROUTE1339->setFromField(QString("value_changed"));
SoROUTE1339->setToNode(QString("Joe_r_sternoclavicular"));
SoROUTE1339->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1339);

SoROUTE* SoROUTE1340 = new SoROUTE();
SoROUTE1340->setFromNode(QString("r_acromioclavicularRelax"));
SoROUTE1340->setFromField(QString("value_changed"));
SoROUTE1340->setToNode(QString("Joe_r_acromioclavicular"));
SoROUTE1340->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1340);

SoROUTE* SoROUTE1341 = new SoROUTE();
SoROUTE1341->setFromNode(QString("r_shoulderRelax"));
SoROUTE1341->setFromField(QString("value_changed"));
SoROUTE1341->setToNode(QString("Joe_r_shoulder"));
SoROUTE1341->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1341);

SoROUTE* SoROUTE1342 = new SoROUTE();
SoROUTE1342->setFromNode(QString("r_elbowRelax"));
SoROUTE1342->setFromField(QString("value_changed"));
SoROUTE1342->setToNode(QString("Joe_r_elbow"));
SoROUTE1342->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1342);

SoROUTE* SoROUTE1343 = new SoROUTE();
SoROUTE1343->setFromNode(QString("r_wristRelax"));
SoROUTE1343->setFromField(QString("value_changed"));
SoROUTE1343->setToNode(QString("Joe_r_wrist"));
SoROUTE1343->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1343);

SoROUTE* SoROUTE1344 = new SoROUTE();
SoROUTE1344->setFromNode(QString("r_thumb1Relax"));
SoROUTE1344->setFromField(QString("value_changed"));
SoROUTE1344->setToNode(QString("Joe_r_thumb1"));
SoROUTE1344->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1344);

SoROUTE* SoROUTE1345 = new SoROUTE();
SoROUTE1345->setFromNode(QString("r_thumb2Relax"));
SoROUTE1345->setFromField(QString("value_changed"));
SoROUTE1345->setToNode(QString("Joe_r_thumb2"));
SoROUTE1345->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1345);

SoROUTE* SoROUTE1346 = new SoROUTE();
SoROUTE1346->setFromNode(QString("r_thumb3Relax"));
SoROUTE1346->setFromField(QString("value_changed"));
SoROUTE1346->setToNode(QString("Joe_r_thumb3"));
SoROUTE1346->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1346);

SoROUTE* SoROUTE1347 = new SoROUTE();
SoROUTE1347->setFromNode(QString("r_index0Relax"));
SoROUTE1347->setFromField(QString("value_changed"));
SoROUTE1347->setToNode(QString("Joe_r_index0"));
SoROUTE1347->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1347);

SoROUTE* SoROUTE1348 = new SoROUTE();
SoROUTE1348->setFromNode(QString("r_index1Relax"));
SoROUTE1348->setFromField(QString("value_changed"));
SoROUTE1348->setToNode(QString("Joe_r_index1"));
SoROUTE1348->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1348);

SoROUTE* SoROUTE1349 = new SoROUTE();
SoROUTE1349->setFromNode(QString("r_fingers2Relax"));
SoROUTE1349->setFromField(QString("value_changed"));
SoROUTE1349->setToNode(QString("Joe_r_index2"));
SoROUTE1349->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1349);

SoROUTE* SoROUTE1350 = new SoROUTE();
SoROUTE1350->setFromNode(QString("r_fingers3Relax"));
SoROUTE1350->setFromField(QString("value_changed"));
SoROUTE1350->setToNode(QString("Joe_r_index3"));
SoROUTE1350->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1350);

SoROUTE* SoROUTE1351 = new SoROUTE();
SoROUTE1351->setFromNode(QString("r_middle0Relax"));
SoROUTE1351->setFromField(QString("value_changed"));
SoROUTE1351->setToNode(QString("Joe_r_middle0"));
SoROUTE1351->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1351);

SoROUTE* SoROUTE1352 = new SoROUTE();
SoROUTE1352->setFromNode(QString("r_middle1Relax"));
SoROUTE1352->setFromField(QString("value_changed"));
SoROUTE1352->setToNode(QString("Joe_r_middle1"));
SoROUTE1352->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1352);

SoROUTE* SoROUTE1353 = new SoROUTE();
SoROUTE1353->setFromNode(QString("r_fingers2Relax"));
SoROUTE1353->setFromField(QString("value_changed"));
SoROUTE1353->setToNode(QString("Joe_r_middle2"));
SoROUTE1353->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1353);

SoROUTE* SoROUTE1354 = new SoROUTE();
SoROUTE1354->setFromNode(QString("r_fingers3Relax"));
SoROUTE1354->setFromField(QString("value_changed"));
SoROUTE1354->setToNode(QString("Joe_r_middle3"));
SoROUTE1354->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1354);

SoROUTE* SoROUTE1355 = new SoROUTE();
SoROUTE1355->setFromNode(QString("r_ring0Relax"));
SoROUTE1355->setFromField(QString("value_changed"));
SoROUTE1355->setToNode(QString("Joe_r_ring0"));
SoROUTE1355->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1355);

SoROUTE* SoROUTE1356 = new SoROUTE();
SoROUTE1356->setFromNode(QString("r_ring1Relax"));
SoROUTE1356->setFromField(QString("value_changed"));
SoROUTE1356->setToNode(QString("Joe_r_ring1"));
SoROUTE1356->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1356);

SoROUTE* SoROUTE1357 = new SoROUTE();
SoROUTE1357->setFromNode(QString("r_fingers2Relax"));
SoROUTE1357->setFromField(QString("value_changed"));
SoROUTE1357->setToNode(QString("Joe_r_ring2"));
SoROUTE1357->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1357);

SoROUTE* SoROUTE1358 = new SoROUTE();
SoROUTE1358->setFromNode(QString("r_fingers3Relax"));
SoROUTE1358->setFromField(QString("value_changed"));
SoROUTE1358->setToNode(QString("Joe_r_ring3"));
SoROUTE1358->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1358);

SoROUTE* SoROUTE1359 = new SoROUTE();
SoROUTE1359->setFromNode(QString("r_pinky0Relax"));
SoROUTE1359->setFromField(QString("value_changed"));
SoROUTE1359->setToNode(QString("Joe_r_pinky0"));
SoROUTE1359->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1359);

SoROUTE* SoROUTE1360 = new SoROUTE();
SoROUTE1360->setFromNode(QString("r_pinky1Relax"));
SoROUTE1360->setFromField(QString("value_changed"));
SoROUTE1360->setToNode(QString("Joe_r_pinky1"));
SoROUTE1360->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1360);

SoROUTE* SoROUTE1361 = new SoROUTE();
SoROUTE1361->setFromNode(QString("r_fingers2Relax"));
SoROUTE1361->setFromField(QString("value_changed"));
SoROUTE1361->setToNode(QString("Joe_r_pinky2"));
SoROUTE1361->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1361);

SoROUTE* SoROUTE1362 = new SoROUTE();
SoROUTE1362->setFromNode(QString("r_fingers3Relax"));
SoROUTE1362->setFromField(QString("value_changed"));
SoROUTE1362->setToNode(QString("Joe_r_pinky3"));
SoROUTE1362->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1362);

SoROUTE* SoROUTE1363 = new SoROUTE();
SoROUTE1363->setFromNode(QString("Time2"));
SoROUTE1363->setFromField(QString("fraction_changed"));
SoROUTE1363->setToNode(QString("r_sternoclavicularRoll"));
SoROUTE1363->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1363);

SoROUTE* SoROUTE1364 = new SoROUTE();
SoROUTE1364->setFromNode(QString("Time2"));
SoROUTE1364->setFromField(QString("fraction_changed"));
SoROUTE1364->setToNode(QString("r_acromioclavicularRoll"));
SoROUTE1364->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1364);

SoROUTE* SoROUTE1365 = new SoROUTE();
SoROUTE1365->setFromNode(QString("Time2"));
SoROUTE1365->setFromField(QString("fraction_changed"));
SoROUTE1365->setToNode(QString("r_shoulderRoll"));
SoROUTE1365->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1365);

SoROUTE* SoROUTE1366 = new SoROUTE();
SoROUTE1366->setFromNode(QString("Time2"));
SoROUTE1366->setFromField(QString("fraction_changed"));
SoROUTE1366->setToNode(QString("r_ForeArmPitch"));
SoROUTE1366->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1366);

SoROUTE* SoROUTE1367 = new SoROUTE();
SoROUTE1367->setFromNode(QString("Time2"));
SoROUTE1367->setFromField(QString("fraction_changed"));
SoROUTE1367->setToNode(QString("r_wristRoll"));
SoROUTE1367->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1367);

SoROUTE* SoROUTE1368 = new SoROUTE();
SoROUTE1368->setFromNode(QString("Time2"));
SoROUTE1368->setFromField(QString("fraction_changed"));
SoROUTE1368->setToNode(QString("r_handPitch"));
SoROUTE1368->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1368);

SoROUTE* SoROUTE1369 = new SoROUTE();
SoROUTE1369->setFromNode(QString("Time2"));
SoROUTE1369->setFromField(QString("fraction_changed"));
SoROUTE1369->setToNode(QString("r_thumb1Pitch"));
SoROUTE1369->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1369);

SoROUTE* SoROUTE1370 = new SoROUTE();
SoROUTE1370->setFromNode(QString("Time2"));
SoROUTE1370->setFromField(QString("fraction_changed"));
SoROUTE1370->setToNode(QString("r_thumb2Pitch"));
SoROUTE1370->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1370);

SoROUTE* SoROUTE1371 = new SoROUTE();
SoROUTE1371->setFromNode(QString("r_sternoclavicularRoll"));
SoROUTE1371->setFromField(QString("value_changed"));
SoROUTE1371->setToNode(QString("Joe_r_sternoclavicular"));
SoROUTE1371->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1371);

SoROUTE* SoROUTE1372 = new SoROUTE();
SoROUTE1372->setFromNode(QString("r_acromioclavicularRoll"));
SoROUTE1372->setFromField(QString("value_changed"));
SoROUTE1372->setToNode(QString("Joe_r_acromioclavicular"));
SoROUTE1372->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1372);

SoROUTE* SoROUTE1373 = new SoROUTE();
SoROUTE1373->setFromNode(QString("r_shoulderRoll"));
SoROUTE1373->setFromField(QString("value_changed"));
SoROUTE1373->setToNode(QString("Joe_r_shoulder"));
SoROUTE1373->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1373);

SoROUTE* SoROUTE1374 = new SoROUTE();
SoROUTE1374->setFromNode(QString("r_ForeArmPitch"));
SoROUTE1374->setFromField(QString("value_changed"));
SoROUTE1374->setToNode(QString("Joe_r_elbow"));
SoROUTE1374->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1374);

SoROUTE* SoROUTE1375 = new SoROUTE();
SoROUTE1375->setFromNode(QString("r_wristRoll"));
SoROUTE1375->setFromField(QString("value_changed"));
SoROUTE1375->setToNode(QString("Joe_r_wrist"));
SoROUTE1375->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1375);

SoROUTE* SoROUTE1376 = new SoROUTE();
SoROUTE1376->setFromNode(QString("r_handPitch"));
SoROUTE1376->setFromField(QString("value_changed"));
SoROUTE1376->setToNode(QString("Joe_r_index0"));
SoROUTE1376->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1376);

SoROUTE* SoROUTE1377 = new SoROUTE();
SoROUTE1377->setFromNode(QString("r_handPitch"));
SoROUTE1377->setFromField(QString("value_changed"));
SoROUTE1377->setToNode(QString("Joe_r_index1"));
SoROUTE1377->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1377);

SoROUTE* SoROUTE1378 = new SoROUTE();
SoROUTE1378->setFromNode(QString("r_handPitch"));
SoROUTE1378->setFromField(QString("value_changed"));
SoROUTE1378->setToNode(QString("Joe_r_index2"));
SoROUTE1378->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1378);

SoROUTE* SoROUTE1379 = new SoROUTE();
SoROUTE1379->setFromNode(QString("r_handPitch"));
SoROUTE1379->setFromField(QString("value_changed"));
SoROUTE1379->setToNode(QString("Joe_r_index3"));
SoROUTE1379->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1379);

SoROUTE* SoROUTE1380 = new SoROUTE();
SoROUTE1380->setFromNode(QString("r_handPitch"));
SoROUTE1380->setFromField(QString("value_changed"));
SoROUTE1380->setToNode(QString("Joe_r_middle0"));
SoROUTE1380->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1380);

SoROUTE* SoROUTE1381 = new SoROUTE();
SoROUTE1381->setFromNode(QString("r_handPitch"));
SoROUTE1381->setFromField(QString("value_changed"));
SoROUTE1381->setToNode(QString("Joe_r_middle1"));
SoROUTE1381->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1381);

SoROUTE* SoROUTE1382 = new SoROUTE();
SoROUTE1382->setFromNode(QString("r_handPitch"));
SoROUTE1382->setFromField(QString("value_changed"));
SoROUTE1382->setToNode(QString("Joe_r_middle2"));
SoROUTE1382->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1382);

SoROUTE* SoROUTE1383 = new SoROUTE();
SoROUTE1383->setFromNode(QString("r_handPitch"));
SoROUTE1383->setFromField(QString("value_changed"));
SoROUTE1383->setToNode(QString("Joe_r_middle3"));
SoROUTE1383->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1383);

SoROUTE* SoROUTE1384 = new SoROUTE();
SoROUTE1384->setFromNode(QString("r_handPitch"));
SoROUTE1384->setFromField(QString("value_changed"));
SoROUTE1384->setToNode(QString("Joe_r_ring0"));
SoROUTE1384->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1384);

SoROUTE* SoROUTE1385 = new SoROUTE();
SoROUTE1385->setFromNode(QString("r_handPitch"));
SoROUTE1385->setFromField(QString("value_changed"));
SoROUTE1385->setToNode(QString("Joe_r_ring1"));
SoROUTE1385->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1385);

SoROUTE* SoROUTE1386 = new SoROUTE();
SoROUTE1386->setFromNode(QString("r_handPitch"));
SoROUTE1386->setFromField(QString("value_changed"));
SoROUTE1386->setToNode(QString("Joe_r_ring2"));
SoROUTE1386->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1386);

SoROUTE* SoROUTE1387 = new SoROUTE();
SoROUTE1387->setFromNode(QString("r_handPitch"));
SoROUTE1387->setFromField(QString("value_changed"));
SoROUTE1387->setToNode(QString("Joe_r_ring3"));
SoROUTE1387->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1387);

SoROUTE* SoROUTE1388 = new SoROUTE();
SoROUTE1388->setFromNode(QString("r_handPitch"));
SoROUTE1388->setFromField(QString("value_changed"));
SoROUTE1388->setToNode(QString("Joe_r_pinky0"));
SoROUTE1388->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1388);

SoROUTE* SoROUTE1389 = new SoROUTE();
SoROUTE1389->setFromNode(QString("r_handPitch"));
SoROUTE1389->setFromField(QString("value_changed"));
SoROUTE1389->setToNode(QString("Joe_r_pinky1"));
SoROUTE1389->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1389);

SoROUTE* SoROUTE1390 = new SoROUTE();
SoROUTE1390->setFromNode(QString("r_handPitch"));
SoROUTE1390->setFromField(QString("value_changed"));
SoROUTE1390->setToNode(QString("Joe_r_pinky2"));
SoROUTE1390->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1390);

SoROUTE* SoROUTE1391 = new SoROUTE();
SoROUTE1391->setFromNode(QString("r_handPitch"));
SoROUTE1391->setFromField(QString("value_changed"));
SoROUTE1391->setToNode(QString("Joe_r_pinky3"));
SoROUTE1391->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1391);

SoROUTE* SoROUTE1392 = new SoROUTE();
SoROUTE1392->setFromNode(QString("r_thumb1Pitch"));
SoROUTE1392->setFromField(QString("value_changed"));
SoROUTE1392->setToNode(QString("Joe_r_thumb1"));
SoROUTE1392->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1392);

SoROUTE* SoROUTE1393 = new SoROUTE();
SoROUTE1393->setFromNode(QString("r_thumb2Pitch"));
SoROUTE1393->setFromField(QString("value_changed"));
SoROUTE1393->setToNode(QString("Joe_r_thumb2"));
SoROUTE1393->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1393);

SoROUTE* SoROUTE1394 = new SoROUTE();
SoROUTE1394->setFromNode(QString("r_thumb2Pitch"));
SoROUTE1394->setFromField(QString("value_changed"));
SoROUTE1394->setToNode(QString("Joe_r_thumb3"));
SoROUTE1394->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1394);

SoROUTE* SoROUTE1395 = new SoROUTE();
SoROUTE1395->setFromNode(QString("l_shoulderRoll"));
SoROUTE1395->setFromField(QString("value_changed"));
SoROUTE1395->setToNode(QString("Joe_l_shoulder"));
SoROUTE1395->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1395);

SoROUTE* SoROUTE1396 = new SoROUTE();
SoROUTE1396->setFromNode(QString("Time1"));
SoROUTE1396->setFromField(QString("fraction_changed"));
SoROUTE1396->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoROUTE1396->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1396);

SoROUTE* SoROUTE1397 = new SoROUTE();
SoROUTE1397->setFromNode(QString("Time1"));
SoROUTE1397->setFromField(QString("fraction_changed"));
SoROUTE1397->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoROUTE1397->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1397);

SoROUTE* SoROUTE1398 = new SoROUTE();
SoROUTE1398->setFromNode(QString("Time1"));
SoROUTE1398->setFromField(QString("fraction_changed"));
SoROUTE1398->setToNode(QString("L_HIP_ANIMATOR"));
SoROUTE1398->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1398);

SoROUTE* SoROUTE1399 = new SoROUTE();
SoROUTE1399->setFromNode(QString("Time1"));
SoROUTE1399->setFromField(QString("fraction_changed"));
SoROUTE1399->setToNode(QString("L_KNEE_ANIMATOR"));
SoROUTE1399->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1399);

SoROUTE* SoROUTE1400 = new SoROUTE();
SoROUTE1400->setFromNode(QString("Time1"));
SoROUTE1400->setFromField(QString("fraction_changed"));
SoROUTE1400->setToNode(QString("L_ANKLE_ANIMATOR"));
SoROUTE1400->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1400);

SoROUTE* SoROUTE1401 = new SoROUTE();
SoROUTE1401->setFromNode(QString("Time1"));
SoROUTE1401->setFromField(QString("fraction_changed"));
SoROUTE1401->setToNode(QString("L_subtalar_ANIMATOR"));
SoROUTE1401->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1401);

SoROUTE* SoROUTE1402 = new SoROUTE();
SoROUTE1402->setFromNode(QString("Time1"));
SoROUTE1402->setFromField(QString("fraction_changed"));
SoROUTE1402->setToNode(QString("L_MIDTARSAL_ANIMATOR"));
SoROUTE1402->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1402);

SoROUTE* SoROUTE1403 = new SoROUTE();
SoROUTE1403->setFromNode(QString("Time1"));
SoROUTE1403->setFromField(QString("fraction_changed"));
SoROUTE1403->setToNode(QString("L_metatarsal_ANIMATOR"));
SoROUTE1403->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1403);

SoROUTE* SoROUTE1404 = new SoROUTE();
SoROUTE1404->setFromNode(QString("Time1"));
SoROUTE1404->setFromField(QString("fraction_changed"));
SoROUTE1404->setToNode(QString("R_HIP_ANIMATOR"));
SoROUTE1404->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1404);

SoROUTE* SoROUTE1405 = new SoROUTE();
SoROUTE1405->setFromNode(QString("Time1"));
SoROUTE1405->setFromField(QString("fraction_changed"));
SoROUTE1405->setToNode(QString("R_KNEE_ANIMATOR"));
SoROUTE1405->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1405);

SoROUTE* SoROUTE1406 = new SoROUTE();
SoROUTE1406->setFromNode(QString("Time1"));
SoROUTE1406->setFromField(QString("fraction_changed"));
SoROUTE1406->setToNode(QString("R_ANKLE_ANIMATOR"));
SoROUTE1406->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1406);

SoROUTE* SoROUTE1407 = new SoROUTE();
SoROUTE1407->setFromNode(QString("Time1"));
SoROUTE1407->setFromField(QString("fraction_changed"));
SoROUTE1407->setToNode(QString("R_subtalar_ANIMATOR"));
SoROUTE1407->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1407);

SoROUTE* SoROUTE1408 = new SoROUTE();
SoROUTE1408->setFromNode(QString("Time1"));
SoROUTE1408->setFromField(QString("fraction_changed"));
SoROUTE1408->setToNode(QString("R_MIDTARSAL_ANIMATOR"));
SoROUTE1408->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1408);

SoROUTE* SoROUTE1409 = new SoROUTE();
SoROUTE1409->setFromNode(QString("Time1"));
SoROUTE1409->setFromField(QString("fraction_changed"));
SoROUTE1409->setToNode(QString("R_metatarsal_ANIMATOR"));
SoROUTE1409->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1409);

SoROUTE* SoROUTE1410 = new SoROUTE();
SoROUTE1410->setFromNode(QString("Time1"));
SoROUTE1410->setFromField(QString("fraction_changed"));
SoROUTE1410->setToNode(QString("VL5_ANIMATOR"));
SoROUTE1410->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1410);

SoROUTE* SoROUTE1411 = new SoROUTE();
SoROUTE1411->setFromNode(QString("Time1"));
SoROUTE1411->setFromField(QString("fraction_changed"));
SoROUTE1411->setToNode(QString("SKULLBASE_ANIMATOR"));
SoROUTE1411->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1411);

SoROUTE* SoROUTE1412 = new SoROUTE();
SoROUTE1412->setFromNode(QString("Time1"));
SoROUTE1412->setFromField(QString("fraction_changed"));
SoROUTE1412->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoROUTE1412->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1412);

SoROUTE* SoROUTE1413 = new SoROUTE();
SoROUTE1413->setFromNode(QString("Time1"));
SoROUTE1413->setFromField(QString("fraction_changed"));
SoROUTE1413->setToNode(QString("L_ELBOW_ANIMATOR"));
SoROUTE1413->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1413);

SoROUTE* SoROUTE1414 = new SoROUTE();
SoROUTE1414->setFromNode(QString("Time1"));
SoROUTE1414->setFromField(QString("fraction_changed"));
SoROUTE1414->setToNode(QString("L_WRIST_ANIMATOR"));
SoROUTE1414->setToField(QString("set_fraction"));
SoNode33->addChild(*SoROUTE1414);

SoROUTE* SoROUTE1415 = new SoROUTE();
SoROUTE1415->setFromNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoROUTE1415->setFromField(QString("value_changed"));
SoROUTE1415->setToNode(QString("Joe_HumanoidRoot"));
SoROUTE1415->setToField(QString("set_translation"));
SoNode33->addChild(*SoROUTE1415);

SoROUTE* SoROUTE1416 = new SoROUTE();
SoROUTE1416->setFromNode(QString("HUMANOIDROOT_ANIMATOR"));
SoROUTE1416->setFromField(QString("value_changed"));
SoROUTE1416->setToNode(QString("Joe_HumanoidRoot"));
SoROUTE1416->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1416);

SoROUTE* SoROUTE1417 = new SoROUTE();
SoROUTE1417->setFromNode(QString("L_HIP_ANIMATOR"));
SoROUTE1417->setFromField(QString("value_changed"));
SoROUTE1417->setToNode(QString("Joe_l_hip"));
SoROUTE1417->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1417);

SoROUTE* SoROUTE1418 = new SoROUTE();
SoROUTE1418->setFromNode(QString("L_KNEE_ANIMATOR"));
SoROUTE1418->setFromField(QString("value_changed"));
SoROUTE1418->setToNode(QString("Joe_l_knee"));
SoROUTE1418->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1418);

SoROUTE* SoROUTE1419 = new SoROUTE();
SoROUTE1419->setFromNode(QString("L_ANKLE_ANIMATOR"));
SoROUTE1419->setFromField(QString("value_changed"));
SoROUTE1419->setToNode(QString("Joe_l_ankle"));
SoROUTE1419->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1419);

SoROUTE* SoROUTE1420 = new SoROUTE();
SoROUTE1420->setFromNode(QString("L_MIDTARSAL_ANIMATOR"));
SoROUTE1420->setFromField(QString("value_changed"));
SoROUTE1420->setToNode(QString("Joe_l_midtarsal"));
SoROUTE1420->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1420);

SoROUTE* SoROUTE1421 = new SoROUTE();
SoROUTE1421->setFromNode(QString("L_subtalar_ANIMATOR"));
SoROUTE1421->setFromField(QString("value_changed"));
SoROUTE1421->setToNode(QString("Joe_l_subtalar"));
SoROUTE1421->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1421);

SoROUTE* SoROUTE1422 = new SoROUTE();
SoROUTE1422->setFromNode(QString("L_metatarsal_ANIMATOR"));
SoROUTE1422->setFromField(QString("value_changed"));
SoROUTE1422->setToNode(QString("Joe_l_metatarsal"));
SoROUTE1422->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1422);

SoROUTE* SoROUTE1423 = new SoROUTE();
SoROUTE1423->setFromNode(QString("R_HIP_ANIMATOR"));
SoROUTE1423->setFromField(QString("value_changed"));
SoROUTE1423->setToNode(QString("Joe_r_hip"));
SoROUTE1423->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1423);

SoROUTE* SoROUTE1424 = new SoROUTE();
SoROUTE1424->setFromNode(QString("R_KNEE_ANIMATOR"));
SoROUTE1424->setFromField(QString("value_changed"));
SoROUTE1424->setToNode(QString("Joe_r_knee"));
SoROUTE1424->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1424);

SoROUTE* SoROUTE1425 = new SoROUTE();
SoROUTE1425->setFromNode(QString("R_ANKLE_ANIMATOR"));
SoROUTE1425->setFromField(QString("value_changed"));
SoROUTE1425->setToNode(QString("Joe_r_ankle"));
SoROUTE1425->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1425);

SoROUTE* SoROUTE1426 = new SoROUTE();
SoROUTE1426->setFromNode(QString("R_subtalar_ANIMATOR"));
SoROUTE1426->setFromField(QString("value_changed"));
SoROUTE1426->setToNode(QString("Joe_r_subtalar"));
SoROUTE1426->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1426);

SoROUTE* SoROUTE1427 = new SoROUTE();
SoROUTE1427->setFromNode(QString("R_MIDTARSAL_ANIMATOR"));
SoROUTE1427->setFromField(QString("value_changed"));
SoROUTE1427->setToNode(QString("Joe_r_midtarsal"));
SoROUTE1427->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1427);

SoROUTE* SoROUTE1428 = new SoROUTE();
SoROUTE1428->setFromNode(QString("R_metatarsal_ANIMATOR"));
SoROUTE1428->setFromField(QString("value_changed"));
SoROUTE1428->setToNode(QString("Joe_r_metatarsal"));
SoROUTE1428->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1428);

SoROUTE* SoROUTE1429 = new SoROUTE();
SoROUTE1429->setFromNode(QString("VL5_ANIMATOR"));
SoROUTE1429->setFromField(QString("value_changed"));
SoROUTE1429->setToNode(QString("Joe_vl5"));
SoROUTE1429->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1429);

SoROUTE* SoROUTE1430 = new SoROUTE();
SoROUTE1430->setFromNode(QString("SKULLBASE_ANIMATOR"));
SoROUTE1430->setFromField(QString("value_changed"));
SoROUTE1430->setToNode(QString("Joe_skullbase"));
SoROUTE1430->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1430);

SoROUTE* SoROUTE1431 = new SoROUTE();
SoROUTE1431->setFromNode(QString("L_SHOULDER_ANIMATOR"));
SoROUTE1431->setFromField(QString("value_changed"));
SoROUTE1431->setToNode(QString("Joe_l_shoulder"));
SoROUTE1431->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1431);

SoROUTE* SoROUTE1432 = new SoROUTE();
SoROUTE1432->setFromNode(QString("L_ELBOW_ANIMATOR"));
SoROUTE1432->setFromField(QString("value_changed"));
SoROUTE1432->setToNode(QString("Joe_l_elbow"));
SoROUTE1432->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1432);

SoROUTE* SoROUTE1433 = new SoROUTE();
SoROUTE1433->setFromNode(QString("L_WRIST_ANIMATOR"));
SoROUTE1433->setFromField(QString("value_changed"));
SoROUTE1433->setToNode(QString("Joe_l_wrist"));
SoROUTE1433->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1433);

SoROUTE* SoROUTE1434 = new SoROUTE();
SoROUTE1434->setFromNode(QString("R_SHOULDER_ANIMATOR"));
SoROUTE1434->setFromField(QString("value_changed"));
SoROUTE1434->setToNode(QString("Joe_r_shoulder"));
SoROUTE1434->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1434);

SoROUTE* SoROUTE1435 = new SoROUTE();
SoROUTE1435->setFromNode(QString("R_ELBOW_ANIMATOR"));
SoROUTE1435->setFromField(QString("value_changed"));
SoROUTE1435->setToNode(QString("Joe_r_elbow"));
SoROUTE1435->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1435);

SoROUTE* SoROUTE1436 = new SoROUTE();
SoROUTE1436->setFromNode(QString("R_WRIST_ANIMATOR"));
SoROUTE1436->setFromField(QString("value_changed"));
SoROUTE1436->setToNode(QString("Joe_r_wrist"));
SoROUTE1436->setToField(QString("set_rotation"));
SoNode33->addChild(*SoROUTE1436);

SoSceneManager0->setSceneGraph(*SoNode33);

return 0;
}
