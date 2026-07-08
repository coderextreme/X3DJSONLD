
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
Someta3->setContent(QString("JoeSkeletonSkinSiteSaluteWalk.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Michalis Kamburelis"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("translator"));
Someta7->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translator"));
Someta8->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("created"));
Someta9->setContent(QString("9 January 2004"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("translated"));
Someta10->setContent(QString("4 December 2022"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("modified"));
Someta11->setContent(QString("16 March 2026"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("TODO"));
Someta12->setContent(QString("X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("JoeSkeletonSkinSiteSaluteWalk.original.x3dv"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("Image"));
Someta16->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("drawing"));
Someta17->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("Image"));
Someta18->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("Image"));
Someta22->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("Image"));
Someta23->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("Image"));
Someta24->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("Image"));
Someta25->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("generator"));
Someta26->setContent(QString("tovrmlx3d, https://castle-engine.io/convert.php"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("reference"));
Someta27->setContent(QString("https://castle-engine.io/view3dscene.php#section_converting"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("generator"));
Someta28->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("generator"));
Someta29->setContent(QString("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("identifier"));
Someta30->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("license"));
Someta31->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta31);

Someta* Someta32 = new Someta();
Someta32->setName(QString("generator"));
Someta32->setContent(QString("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"));
Sohead1->addMeta(*Someta32);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode33 = new SoNode();
SoWorldInfo* SoWorldInfo34 = new SoWorldInfo();
SoWorldInfo34->setInfo(new QString[]{QString("By Joe for Joe"), QString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")}, 2);
SoWorldInfo34->setTitle(QString("JoeSkeletonSkinSiteSaluteWalk.x3d"));
SoNode33->addChild(*SoWorldInfo34);

SoNavigationInfo* SoNavigationInfo35 = new SoNavigationInfo();
SoNavigationInfo35->setDEF(QString("HeadlightOnRevealsSkinTextureAndColors"));
SoNode33->addChild(*SoNavigationInfo35);

SoBackground* SoBackground36 = new SoBackground();
SoBackground36->setGroundAngle(new float[]{1.57}, 1);
SoBackground36->setGroundColor(new float[]{0.0,0.1,0.0,0.0,0.1,0.0}, 6);
SoBackground36->setSkyColor(new float[]{0.0,0.0,0.1}, 3);
SoNode33->addChild(*SoBackground36);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setDEF(QString("cordsysfloor"));
SoTransform37->setScale(new float[]{0.175,0.175,0.175});
SoInline* SoInline38 = new SoInline();
SoInline38->setDEF(QString("CoordinateAxes"));
SoInline38->setUrl(new QString[]{QString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), QString("../../../Savage/Tools/Authoring/CoordinateAxes.x3d"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"), QString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"), QString("../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), QString("../../../Savage/Tools/Authoring/CoordinateAxes.wrl"), QString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"), QString("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl")}, 8);
SoTransform37->addChild(*SoInline38);

SoNode33->addChild(*SoTransform37);

//Authoring hint: these axes are aligned within local coordinate system
SoGroup* SoGroup39 = new SoGroup();
SoGroup39->setDEF(QString("ViewpointGroup"));
SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("Front Up View"));
SoViewpoint40->setOrientation(new float[]{-1.0,-1.0,0.0,0.55});
SoViewpoint40->setPosition(new float[]{-1.0,2.0,2.5});
SoGroup39->addChild(*SoViewpoint40);

SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDescription(QString("From Left View"));
SoViewpoint41->setOrientation(new float[]{0.3,1.0,0.0,-1.57});
SoViewpoint41->setPosition(new float[]{-2.5,1.5,0.0});
SoGroup39->addChild(*SoViewpoint41);

SoViewpoint* SoViewpoint42 = new SoViewpoint();
SoViewpoint42->setDescription(QString("Front Mid View"));
SoViewpoint42->setPosition(new float[]{0.0,0.5,1.25});
SoGroup39->addChild(*SoViewpoint42);

SoViewpoint* SoViewpoint43 = new SoViewpoint();
SoViewpoint43->setDescription(QString("Front Feet View"));
SoViewpoint43->setPosition(new float[]{0.0,0.0,0.75});
SoGroup39->addChild(*SoViewpoint43);

SoViewpoint* SoViewpoint44 = new SoViewpoint();
SoViewpoint44->setDescription(QString("From Right View"));
SoViewpoint44->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint44->setPosition(new float[]{1.0,1.0,0.0});
SoGroup39->addChild(*SoViewpoint44);

SoViewpoint* SoViewpoint45 = new SoViewpoint();
SoViewpoint45->setCenterOfRotation(new float[]{0.0,1.65,0.0});
SoViewpoint45->setDescription(QString("Front Head View"));
SoViewpoint45->setPosition(new float[]{0.0,1.65,0.75});
SoGroup39->addChild(*SoViewpoint45);

SoViewpoint* SoViewpoint46 = new SoViewpoint();
SoViewpoint46->setDescription(QString("Front Mid View"));
SoViewpoint46->setPosition(new float[]{0.0,1.0,1.75});
SoGroup39->addChild(*SoViewpoint46);

SoViewpoint* SoViewpoint47 = new SoViewpoint();
SoViewpoint47->setDescription(QString("Rear View"));
SoViewpoint47->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint47->setPosition(new float[]{0.0,1.5,-4.0});
SoGroup39->addChild(*SoViewpoint47);

SoViewpoint* SoViewpoint48 = new SoViewpoint();
SoViewpoint48->setDescription(QString("Top View"));
SoViewpoint48->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint48->setPosition(new float[]{0.0,4.0,0.0});
SoGroup39->addChild(*SoViewpoint48);

SoViewpoint* SoViewpoint49 = new SoViewpoint();
SoViewpoint49->setDescription(QString("Bottom View"));
SoViewpoint49->setOrientation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint49->setPosition(new float[]{0.0,-4.0,0.0});
SoGroup39->addChild(*SoViewpoint49);

SoViewpoint* SoViewpoint50 = new SoViewpoint();
SoViewpoint50->setDescription(QString("Right View"));
SoViewpoint50->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint50->setPosition(new float[]{4.0,1.5,0.0});
SoGroup39->addChild(*SoViewpoint50);

SoNode33->addChild(*SoGroup39);

SoGroup* SoGroup51 = new SoGroup();
SoGroup51->setDEF(QString("VisualizationShapes"));
SoGroup51->setVisible(false);
SoTransform* SoTransform52 = new SoTransform();
SoTransform52->setScale(new float[]{5.0,5.0,5.0});
SoTransform52->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape53 = new SoShape();
SoShape53->setDEF(QString("jointbox"));
SoVRMLAppearance* SoVRMLAppearance54 = new SoVRMLAppearance();
SoMaterial* SoMaterial55 = new SoMaterial();
SoMaterial55->setAmbientIntensity(0.5);
SoMaterial55->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial55->setShininess(1);
SoVRMLAppearance54->addChild(*SoMaterial55);

SoShape53->addChild(*SoVRMLAppearance54);

SoIndexedFaceSet* SoIndexedFaceSet56 = new SoIndexedFaceSet();
SoIndexedFaceSet56->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet56->setCreaseAngle(0.1);
SoColor* SoColor57 = new SoColor();
SoColor57->setColor(new float[]{1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0}, 18);
SoIndexedFaceSet56->setColor(*SoColor57);

SoCoordinate* SoCoordinate58 = new SoCoordinate();
SoCoordinate58->setDEF(QString("boxCoords"));
SoCoordinate58->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.0157,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet56->setCoord(*SoCoordinate58);

SoShape53->setGeometry(*SoIndexedFaceSet56);

SoTransform52->addChild(*SoShape53);

SoGroup51->addChild(*SoTransform52);

SoTransform* SoTransform59 = new SoTransform();
SoTransform59->setScale(new float[]{0.1,0.1,0.1});
SoTransform59->setTranslation(new float[]{-0.2,0.773,-0.016});
SoShape* SoShape60 = new SoShape();
SoShape60->setDEF(QString("sitebox"));
SoVRMLAppearance* SoVRMLAppearance61 = new SoVRMLAppearance();
SoMaterial* SoMaterial62 = new SoMaterial();
SoMaterial62->setAmbientIntensity(1);
SoMaterial62->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial62->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoMaterial62->setShininess(0.7);
SoMaterial62->setSpecularColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance61->addChild(*SoMaterial62);

SoShape60->addChild(*SoVRMLAppearance61);

SoIndexedFaceSet* SoIndexedFaceSet63 = new SoIndexedFaceSet();
SoIndexedFaceSet63->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet63->setCreaseAngle(0.1);
SoCoordinate* SoCoordinate64 = new SoCoordinate();
SoCoordinate64->setUSE(QString("boxCoords"));
SoIndexedFaceSet63->setCoord(*SoCoordinate64);

SoShape60->setGeometry(*SoIndexedFaceSet63);

SoTransform59->addChild(*SoShape60);

SoGroup51->addChild(*SoTransform59);

SoTransform* SoTransform65 = new SoTransform();
SoTransform65->setScale(new float[]{0.1,0.1,0.1});
SoTransform65->setTranslation(new float[]{0.0,0.2,0.0});
SoShape* SoShape66 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance67 = new SoVRMLAppearance();
SoVRMLAppearance67->setDEF(QString("SegmentLine"));
SoMaterial* SoMaterial68 = new SoMaterial();
SoMaterial68->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial68->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoMaterial68->setSpecularColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance67->addChild(*SoMaterial68);

SoShape66->addChild(*SoVRMLAppearance67);

SoIndexedLineSet* SoIndexedLineSet69 = new SoIndexedLineSet();
SoIndexedLineSet69->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate70 = new SoCoordinate();
SoCoordinate70->setPoint(new float[]{0.0,0.0,0.0,0.0,0.0001,0.0}, 6);
SoIndexedLineSet69->setCoord(*SoCoordinate70);

SoShape66->setGeometry(*SoIndexedLineSet69);

SoTransform65->addChild(*SoShape66);

SoGroup51->addChild(*SoTransform65);

SoTransform* SoTransform71 = new SoTransform();
SoTransform71->setScale(new float[]{0.1,0.1,0.1});
SoTransform71->setTranslation(new float[]{-0.2,0.773,-0.016});
SoShape* SoShape72 = new SoShape();
SoShape72->setDEF(QString("skinsphere"));
SoVRMLAppearance* SoVRMLAppearance73 = new SoVRMLAppearance();
SoMaterial* SoMaterial74 = new SoMaterial();
SoMaterial74->setAmbientIntensity(0.5);
SoMaterial74->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial74->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoMaterial74->setShininess(1);
SoMaterial74->setSpecularColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance73->addChild(*SoMaterial74);

SoShape72->addChild(*SoVRMLAppearance73);

SoSphere* SoSphere75 = new SoSphere();
SoSphere75->setRadius(0.005);
SoShape72->setGeometry(*SoSphere75);

SoTransform71->addChild(*SoShape72);

SoGroup51->addChild(*SoTransform71);

SoNode33->addChild(*SoGroup51);

SoGroup* SoGroup76 = new SoGroup();
SoGroup76->setDEF(QString("SpecHumanoid"));
SoGroup* SoGroup77 = new SoGroup();
SoGroup77->setDEF(QString("JoeISOHumanoid"));
SoHAnimHumanoid* SoHAnimHumanoid78 = new SoHAnimHumanoid();
SoHAnimHumanoid78->X3DNode::setName(QString("Human"));
SoHAnimHumanoid78->setDEF(QString("Joe_Human"));
SoHAnimHumanoid78->setLoa(4);
SoHAnimHumanoid78->setVersion(QString("2.0"));
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
SoMetadataSet* SoMetadataSet79 = new SoMetadataSet();
SoMetadataSet79->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet79->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString80 = new SoMetadataString();
SoMetadataString80->X3DNode::setName(QString("humanoidVersion"));
SoMetadataString80->setValue(new QString[]{QString("2.0")}, 1);
SoMetadataSet79->setValue((X3DNode *)&SoMetadataString80);

SoHAnimHumanoid78->setMetadata(*SoMetadataSet79);

SoHAnimJoint* SoHAnimJoint81 = new SoHAnimJoint();
SoHAnimJoint81->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint81->setDEF(QString("Joe_humanoid_root"));
SoHAnimJoint81->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimSegment* SoHAnimSegment82 = new SoHAnimSegment();
SoHAnimSegment82->X3DNode::setName(QString("sacrum"));
SoHAnimSegment82->setDEF(QString("Joe_sacrum"));
SoTransform* SoTransform83 = new SoTransform();
SoTransform83->setTranslation(new float[]{0.0,0.875,0.0});
SoShape* SoShape84 = new SoShape();
SoShape84->setUSE(QString("jointbox"));
SoTransform83->addChild(*SoShape84);

SoHAnimSegment82->addChild(*SoTransform83);

SoShape* SoShape85 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance86 = new SoVRMLAppearance();
SoVRMLAppearance86->setUSE(QString("SegmentLine"));
SoShape85->addChild(*SoVRMLAppearance86);

SoIndexedLineSet* SoIndexedLineSet87 = new SoIndexedLineSet();
SoIndexedLineSet87->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate88 = new SoCoordinate();
SoCoordinate88->setPoint(new float[]{0.0,0.875,0.0,0.0,0.92,0.0}, 6);
SoIndexedLineSet87->setCoord(*SoCoordinate88);

SoShape85->setGeometry(*SoIndexedLineSet87);

SoHAnimSegment82->addChild(*SoShape85);

SoTransform* SoTransform89 = new SoTransform();
SoTransform89->setTranslation(new float[]{0.0,0.92,0.08});
SoShape* SoShape90 = new SoShape();
SoShape90->setUSE(QString("skinsphere"));
SoTransform89->addChild(*SoShape90);

SoHAnimSegment82->addChild(*SoTransform89);

SoTransform* SoTransform91 = new SoTransform();
SoTransform91->setTranslation(new float[]{0.0,0.87,-0.022});
SoShape* SoShape92 = new SoShape();
SoShape92->setUSE(QString("skinsphere"));
SoTransform91->addChild(*SoShape92);

SoHAnimSegment82->addChild(*SoTransform91);

SoHAnimJoint81->addChildren(*SoHAnimSegment82);

SoHAnimJoint* SoHAnimJoint93 = new SoHAnimJoint();
SoHAnimJoint93->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint93->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint93->setCenter(new float[]{0.0,0.92,0.0});
SoHAnimJoint93->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint93->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
SoHAnimSegment* SoHAnimSegment94 = new SoHAnimSegment();
SoHAnimSegment94->X3DNode::setName(QString("pelvis"));
SoHAnimSegment94->setDEF(QString("Joe_pelvis"));
SoTransform* SoTransform95 = new SoTransform();
SoTransform95->setTranslation(new float[]{0.0,0.9149,0.0016});
SoTransform* SoTransform96 = new SoTransform();
SoShape* SoShape97 = new SoShape();
SoShape97->setUSE(QString("jointbox"));
SoTransform96->addChild(*SoShape97);

SoTransform95->addChild(*SoTransform96);

SoHAnimSegment94->addChild(*SoTransform95);

SoShape* SoShape98 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance99 = new SoVRMLAppearance();
SoVRMLAppearance99->setUSE(QString("SegmentLine"));
SoShape98->addChild(*SoVRMLAppearance99);

SoIndexedLineSet* SoIndexedLineSet100 = new SoIndexedLineSet();
SoIndexedLineSet100->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate101 = new SoCoordinate();
SoCoordinate101->setPoint(new float[]{0.0,0.92,0.0,0.0961,0.9124,0.0,-0.095,0.9171,0.0029,0.0,1.045,-0.095}, 12);
SoIndexedLineSet100->setCoord(*SoCoordinate101);

SoShape98->setGeometry(*SoIndexedLineSet100);

SoHAnimSegment94->addChild(*SoShape98);

SoHAnimSite* SoHAnimSite102 = new SoHAnimSite();
SoHAnimSite102->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite102->setDEF(QString("Joe_l_iliocristale_pt"));
SoHAnimSite102->setTranslation(new float[]{0.1425,1.065,0.0033});
SoShape* SoShape103 = new SoShape();
SoShape103->setUSE(QString("sitebox"));
SoHAnimSite102->addChild(*SoShape103);

SoHAnimSegment94->addChild(*SoHAnimSite102);

SoHAnimSite* SoHAnimSite104 = new SoHAnimSite();
SoHAnimSite104->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite104->setDEF(QString("Joe_l_trochanterion_pt"));
SoHAnimSite104->setTranslation(new float[]{0.15,0.9,-0.01});
SoShape* SoShape105 = new SoShape();
SoShape105->setUSE(QString("sitebox"));
SoHAnimSite104->addChild(*SoShape105);

SoHAnimSegment94->addChild(*SoHAnimSite104);

SoHAnimSite* SoHAnimSite106 = new SoHAnimSite();
SoHAnimSite106->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite106->setDEF(QString("Joe_r_iliocristale_pt"));
SoHAnimSite106->setTranslation(new float[]{-0.1425,1.065,0.0033});
SoShape* SoShape107 = new SoShape();
SoShape107->setUSE(QString("sitebox"));
SoHAnimSite106->addChild(*SoShape107);

SoHAnimSegment94->addChild(*SoHAnimSite106);

SoHAnimSite* SoHAnimSite108 = new SoHAnimSite();
SoHAnimSite108->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite108->setDEF(QString("Joe_r_trochanterion_pt"));
SoHAnimSite108->setTranslation(new float[]{-0.15,0.9,-0.01});
SoShape* SoShape109 = new SoShape();
SoShape109->setUSE(QString("sitebox"));
SoHAnimSite108->addChild(*SoShape109);

SoHAnimSegment94->addChild(*SoHAnimSite108);

SoHAnimSite* SoHAnimSite110 = new SoHAnimSite();
SoHAnimSite110->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite110->setDEF(QString("Joe_l_asis_pt"));
SoHAnimSite110->setTranslation(new float[]{0.0935,1.03,0.075});
SoShape* SoShape111 = new SoShape();
SoShape111->setUSE(QString("sitebox"));
SoHAnimSite110->addChild(*SoShape111);

SoHAnimSegment94->addChild(*SoHAnimSite110);

SoHAnimSite* SoHAnimSite112 = new SoHAnimSite();
SoHAnimSite112->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite112->setDEF(QString("Joe_r_asis_pt"));
SoHAnimSite112->setTranslation(new float[]{-0.0935,1.03,0.075});
SoShape* SoShape113 = new SoShape();
SoShape113->setUSE(QString("sitebox"));
SoHAnimSite112->addChild(*SoShape113);

SoHAnimSegment94->addChild(*SoHAnimSite112);

SoHAnimSite* SoHAnimSite114 = new SoHAnimSite();
SoHAnimSite114->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite114->setDEF(QString("Joe_l_psis_pt"));
SoHAnimSite114->setTranslation(new float[]{0.0773,1.019,-0.12});
SoShape* SoShape115 = new SoShape();
SoShape115->setUSE(QString("sitebox"));
SoHAnimSite114->addChild(*SoShape115);

SoHAnimSegment94->addChild(*SoHAnimSite114);

SoHAnimSite* SoHAnimSite116 = new SoHAnimSite();
SoHAnimSite116->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite116->setDEF(QString("Joe_r_psis_pt"));
SoHAnimSite116->setTranslation(new float[]{-0.0773,1.019,-0.12});
SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("sitebox"));
SoHAnimSite116->addChild(*SoShape117);

SoHAnimSegment94->addChild(*SoHAnimSite116);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->X3DNode::setName(QString("floormarker_pt"));
SoHAnimSite118->setDEF(QString("Joe_floormarker_pt"));
SoTransform* SoTransform119 = new SoTransform();
SoTransform119->setScale(new float[]{3.0,3.0,3.0});
SoShape* SoShape120 = new SoShape();
SoShape120->setUSE(QString("sitebox"));
SoTransform119->addChild(*SoShape120);

SoHAnimSite118->addChild(*SoTransform119);

SoHAnimSegment94->addChild(*SoHAnimSite118);

SoHAnimSite* SoHAnimSite121 = new SoHAnimSite();
SoHAnimSite121->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite121->setDEF(QString("Joe_crotch_pt"));
SoHAnimSite121->setTranslation(new float[]{0.0,0.87,-0.022});
SoShape* SoShape122 = new SoShape();
SoShape122->setUSE(QString("sitebox"));
SoHAnimSite121->addChild(*SoShape122);

SoHAnimSegment94->addChild(*SoHAnimSite121);

SoHAnimJoint93->addChildren(*SoHAnimSegment94);

SoHAnimJoint* SoHAnimJoint123 = new SoHAnimJoint();
SoHAnimJoint123->X3DNode::setName(QString("l_hip"));
SoHAnimJoint123->setDEF(QString("Joe_l_hip"));
SoHAnimJoint123->setCenter(new float[]{0.1,0.92,0.0});
SoHAnimJoint123->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint123->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment124 = new SoHAnimSegment();
SoHAnimSegment124->X3DNode::setName(QString("l_thigh"));
SoHAnimSegment124->setDEF(QString("Joe_l_thigh"));
SoTransform* SoTransform125 = new SoTransform();
SoTransform125->setTranslation(new float[]{0.1,0.92,0.0});
SoShape* SoShape126 = new SoShape();
SoShape126->setUSE(QString("jointbox"));
SoTransform125->addChild(*SoShape126);

SoHAnimSegment124->addChild(*SoTransform125);

SoShape* SoShape127 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance128 = new SoVRMLAppearance();
SoVRMLAppearance128->setUSE(QString("SegmentLine"));
SoShape127->addChild(*SoVRMLAppearance128);

SoIndexedLineSet* SoIndexedLineSet129 = new SoIndexedLineSet();
SoIndexedLineSet129->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate130 = new SoCoordinate();
SoCoordinate130->setPoint(new float[]{0.1,0.92,0.0,0.115,0.466,0.0}, 6);
SoIndexedLineSet129->setCoord(*SoCoordinate130);

SoShape127->setGeometry(*SoIndexedLineSet129);

SoHAnimSegment124->addChild(*SoShape127);

SoTransform* SoTransform131 = new SoTransform();
SoTransform131->setTranslation(new float[]{0.1,0.9,0.0775});
SoShape* SoShape132 = new SoShape();
SoShape132->setUSE(QString("skinsphere"));
SoTransform131->addChild(*SoShape132);

SoHAnimSegment124->addChild(*SoTransform131);

SoTransform* SoTransform133 = new SoTransform();
SoTransform133->setTranslation(new float[]{0.079,0.92,-0.14});
SoShape* SoShape134 = new SoShape();
SoShape134->setUSE(QString("skinsphere"));
SoTransform133->addChild(*SoShape134);

SoHAnimSegment124->addChild(*SoTransform133);

SoTransform* SoTransform135 = new SoTransform();
SoTransform135->setTranslation(new float[]{0.171,0.65,0.0});
SoShape* SoShape136 = new SoShape();
SoShape136->setUSE(QString("skinsphere"));
SoTransform135->addChild(*SoShape136);

SoHAnimSegment124->addChild(*SoTransform135);

SoTransform* SoTransform137 = new SoTransform();
SoTransform137->setTranslation(new float[]{0.02,0.65,0.0});
SoShape* SoShape138 = new SoShape();
SoShape138->setUSE(QString("skinsphere"));
SoTransform137->addChild(*SoShape138);

SoHAnimSegment124->addChild(*SoTransform137);

SoTransform* SoTransform139 = new SoTransform();
SoTransform139->setTranslation(new float[]{0.1,0.65,-0.08});
SoShape* SoShape140 = new SoShape();
SoShape140->setUSE(QString("skinsphere"));
SoTransform139->addChild(*SoShape140);

SoHAnimSegment124->addChild(*SoTransform139);

SoTransform* SoTransform141 = new SoTransform();
SoTransform141->setTranslation(new float[]{0.1,0.65,0.07});
SoShape* SoShape142 = new SoShape();
SoShape142->setUSE(QString("skinsphere"));
SoTransform141->addChild(*SoShape142);

SoHAnimSegment124->addChild(*SoTransform141);

SoHAnimSite* SoHAnimSite143 = new SoHAnimSite();
SoHAnimSite143->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite143->setDEF(QString("Joe_l_knee_crease_pt"));
SoHAnimSite143->setTranslation(new float[]{0.115,0.466,-0.055});
SoShape* SoShape144 = new SoShape();
SoShape144->setUSE(QString("sitebox"));
SoHAnimSite143->addChild(*SoShape144);

SoHAnimSegment124->addChild(*SoHAnimSite143);

SoHAnimSite* SoHAnimSite145 = new SoHAnimSite();
SoHAnimSite145->X3DNode::setName(QString("l_femoral_lateral_epicondyle_pt"));
SoHAnimSite145->setDEF(QString("Joe_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite145->setTranslation(new float[]{0.17,0.466,0.0});
SoShape* SoShape146 = new SoShape();
SoShape146->setUSE(QString("sitebox"));
SoHAnimSite145->addChild(*SoShape146);

SoHAnimSegment124->addChild(*SoHAnimSite145);

SoHAnimSite* SoHAnimSite147 = new SoHAnimSite();
SoHAnimSite147->X3DNode::setName(QString("l_femoral_medial_epicondyle_pt"));
SoHAnimSite147->setDEF(QString("Joe_l_femoral_medial_epicondyle_pt"));
SoHAnimSite147->setTranslation(new float[]{0.05,0.466,0.0});
SoShape* SoShape148 = new SoShape();
SoShape148->setUSE(QString("sitebox"));
SoHAnimSite147->addChild(*SoShape148);

SoHAnimSegment124->addChild(*SoHAnimSite147);

SoHAnimJoint123->addChildren(*SoHAnimSegment124);

SoHAnimJoint* SoHAnimJoint149 = new SoHAnimJoint();
SoHAnimJoint149->X3DNode::setName(QString("l_knee"));
SoHAnimJoint149->setDEF(QString("Joe_l_knee"));
SoHAnimJoint149->setCenter(new float[]{0.115,0.466,0.0});
SoHAnimJoint149->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint149->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment150 = new SoHAnimSegment();
SoHAnimSegment150->X3DNode::setName(QString("l_calf"));
SoHAnimSegment150->setDEF(QString("Joe_l_calf"));
SoTransform* SoTransform151 = new SoTransform();
SoTransform151->setTranslation(new float[]{0.115,0.466,0.0});
SoShape* SoShape152 = new SoShape();
SoShape152->setUSE(QString("jointbox"));
SoTransform151->addChild(*SoShape152);

SoHAnimSegment150->addChild(*SoTransform151);

SoShape* SoShape153 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance154 = new SoVRMLAppearance();
SoVRMLAppearance154->setUSE(QString("SegmentLine"));
SoShape153->addChild(*SoVRMLAppearance154);

SoIndexedLineSet* SoIndexedLineSet155 = new SoIndexedLineSet();
SoIndexedLineSet155->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate156 = new SoCoordinate();
SoCoordinate156->setPoint(new float[]{0.115,0.466,0.0,0.1,0.069,0.0}, 6);
SoIndexedLineSet155->setCoord(*SoCoordinate156);

SoShape153->setGeometry(*SoIndexedLineSet155);

SoHAnimSegment150->addChild(*SoShape153);

SoTransform* SoTransform157 = new SoTransform();
SoTransform157->setTranslation(new float[]{0.115,0.466,0.06});
SoShape* SoShape158 = new SoShape();
SoShape158->setUSE(QString("skinsphere"));
SoTransform157->addChild(*SoShape158);

SoHAnimSegment150->addChild(*SoTransform157);

SoTransform* SoTransform159 = new SoTransform();
SoTransform159->setTranslation(new float[]{0.115,0.466,-0.055});
SoShape* SoShape160 = new SoShape();
SoShape160->setUSE(QString("skinsphere"));
SoTransform159->addChild(*SoShape160);

SoHAnimSegment150->addChild(*SoTransform159);

SoTransform* SoTransform161 = new SoTransform();
SoTransform161->setTranslation(new float[]{0.17,0.466,0.0});
SoShape* SoShape162 = new SoShape();
SoShape162->setUSE(QString("skinsphere"));
SoTransform161->addChild(*SoShape162);

SoHAnimSegment150->addChild(*SoTransform161);

SoTransform* SoTransform163 = new SoTransform();
SoTransform163->setTranslation(new float[]{0.05,0.466,0.0});
SoShape* SoShape164 = new SoShape();
SoShape164->setUSE(QString("skinsphere"));
SoTransform163->addChild(*SoShape164);

SoHAnimSegment150->addChild(*SoTransform163);

SoTransform* SoTransform165 = new SoTransform();
SoTransform165->setTranslation(new float[]{0.17,0.3,0.0});
SoShape* SoShape166 = new SoShape();
SoShape166->setUSE(QString("skinsphere"));
SoTransform165->addChild(*SoShape166);

SoHAnimSegment150->addChild(*SoTransform165);

SoTransform* SoTransform167 = new SoTransform();
SoTransform167->setTranslation(new float[]{0.06,0.3,0.0});
SoShape* SoShape168 = new SoShape();
SoShape168->setUSE(QString("skinsphere"));
SoTransform167->addChild(*SoShape168);

SoHAnimSegment150->addChild(*SoTransform167);

SoTransform* SoTransform169 = new SoTransform();
SoTransform169->setTranslation(new float[]{0.1,0.3,-0.05});
SoShape* SoShape170 = new SoShape();
SoShape170->setUSE(QString("skinsphere"));
SoTransform169->addChild(*SoShape170);

SoHAnimSegment150->addChild(*SoTransform169);

SoTransform* SoTransform171 = new SoTransform();
SoTransform171->setTranslation(new float[]{0.1,0.3,0.05});
SoShape* SoShape172 = new SoShape();
SoShape172->setUSE(QString("skinsphere"));
SoTransform171->addChild(*SoShape172);

SoHAnimSegment150->addChild(*SoTransform171);

SoHAnimSite* SoHAnimSite173 = new SoHAnimSite();
SoHAnimSite173->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite173->setDEF(QString("Joe_l_lateral_malleolus_pt"));
SoHAnimSite173->setTranslation(new float[]{0.15,0.07,0.0});
SoShape* SoShape174 = new SoShape();
SoShape174->setUSE(QString("sitebox"));
SoHAnimSite173->addChild(*SoShape174);

SoHAnimSegment150->addChild(*SoHAnimSite173);

SoHAnimSite* SoHAnimSite175 = new SoHAnimSite();
SoHAnimSite175->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite175->setDEF(QString("Joe_l_medial_malleolus_pt"));
SoHAnimSite175->setTranslation(new float[]{0.085,0.086,0.0125});
SoShape* SoShape176 = new SoShape();
SoShape176->setUSE(QString("sitebox"));
SoHAnimSite175->addChild(*SoShape176);

SoHAnimSegment150->addChild(*SoHAnimSite175);

SoHAnimJoint149->addChildren(*SoHAnimSegment150);

SoHAnimJoint* SoHAnimJoint177 = new SoHAnimJoint();
SoHAnimJoint177->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint177->setDEF(QString("Joe_l_talocrural"));
SoHAnimJoint177->setCenter(new float[]{0.115,0.069,0.0});
SoHAnimJoint177->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint177->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment178 = new SoHAnimSegment();
SoHAnimSegment178->X3DNode::setName(QString("l_talus"));
SoHAnimSegment178->setDEF(QString("Joe_l_talus"));
SoTransform* SoTransform179 = new SoTransform();
SoTransform179->setTranslation(new float[]{0.115,0.069,0.0});
SoShape* SoShape180 = new SoShape();
SoShape180->setUSE(QString("jointbox"));
SoTransform179->addChild(*SoShape180);

SoHAnimSegment178->addChild(*SoTransform179);

SoShape* SoShape181 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance182 = new SoVRMLAppearance();
SoVRMLAppearance182->setUSE(QString("SegmentLine"));
SoShape181->addChild(*SoVRMLAppearance182);

SoIndexedLineSet* SoIndexedLineSet183 = new SoIndexedLineSet();
SoIndexedLineSet183->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate184 = new SoCoordinate();
SoCoordinate184->setPoint(new float[]{0.1,0.069,0.0,0.115,0.031,0.03}, 6);
SoIndexedLineSet183->setCoord(*SoCoordinate184);

SoShape181->setGeometry(*SoIndexedLineSet183);

SoHAnimSegment178->addChild(*SoShape181);

SoTransform* SoTransform185 = new SoTransform();
SoTransform185->setTranslation(new float[]{0.15,0.07,0.0});
SoShape* SoShape186 = new SoShape();
SoShape186->setUSE(QString("skinsphere"));
SoTransform185->addChild(*SoShape186);

SoHAnimSegment178->addChild(*SoTransform185);

SoTransform* SoTransform187 = new SoTransform();
SoTransform187->setTranslation(new float[]{0.085,0.086,0.0125});
SoShape* SoShape188 = new SoShape();
SoShape188->setUSE(QString("skinsphere"));
SoTransform187->addChild(*SoShape188);

SoHAnimSegment178->addChild(*SoTransform187);

SoTransform* SoTransform189 = new SoTransform();
SoTransform189->setTranslation(new float[]{0.115,0.069,-0.045});
SoShape* SoShape190 = new SoShape();
SoShape190->setUSE(QString("skinsphere"));
SoTransform189->addChild(*SoShape190);

SoHAnimSegment178->addChild(*SoTransform189);

SoTransform* SoTransform191 = new SoTransform();
SoTransform191->setTranslation(new float[]{0.117,0.0975,0.0615});
SoShape* SoShape192 = new SoShape();
SoShape192->setUSE(QString("skinsphere"));
SoTransform191->addChild(*SoShape192);

SoHAnimSegment178->addChild(*SoTransform191);

SoHAnimSite* SoHAnimSite193 = new SoHAnimSite();
SoHAnimSite193->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite193->setDEF(QString("Joe_l_sphyrion_pt"));
SoHAnimSite193->setTranslation(new float[]{0.09,0.056,0.0125});
SoShape* SoShape194 = new SoShape();
SoShape194->setUSE(QString("sitebox"));
SoHAnimSite193->addChild(*SoShape194);

SoHAnimSegment178->addChild(*SoHAnimSite193);

SoHAnimSite* SoHAnimSite195 = new SoHAnimSite();
SoHAnimSite195->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite195->setDEF(QString("Joe_l_calcaneus_posterior_pt"));
SoHAnimSite195->setTranslation(new float[]{0.115,0.04,-0.055});
SoShape* SoShape196 = new SoShape();
SoShape196->setUSE(QString("sitebox"));
SoHAnimSite195->addChild(*SoShape196);

SoHAnimSegment178->addChild(*SoHAnimSite195);

SoHAnimJoint177->addChildren(*SoHAnimSegment178);

SoHAnimJoint* SoHAnimJoint197 = new SoHAnimJoint();
SoHAnimJoint197->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint197->setDEF(QString("Joe_l_tarsometatarsal_2"));
SoHAnimJoint197->setCenter(new float[]{0.115,0.031,0.03});
SoHAnimJoint197->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint197->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment198 = new SoHAnimSegment();
SoHAnimSegment198->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimSegment198->setDEF(QString("Joe_l_metatarsal_2"));
SoTransform* SoTransform199 = new SoTransform();
SoTransform199->setTranslation(new float[]{0.115,0.031,0.03});
SoShape* SoShape200 = new SoShape();
SoShape200->setUSE(QString("jointbox"));
SoTransform199->addChild(*SoShape200);

SoHAnimSegment198->addChild(*SoTransform199);

SoShape* SoShape201 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance202 = new SoVRMLAppearance();
SoVRMLAppearance202->setUSE(QString("SegmentLine"));
SoShape201->addChild(*SoVRMLAppearance202);

SoIndexedLineSet* SoIndexedLineSet203 = new SoIndexedLineSet();
SoIndexedLineSet203->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate204 = new SoCoordinate();
SoCoordinate204->setPoint(new float[]{0.115,0.031,0.03,0.115,0.037,0.09}, 6);
SoIndexedLineSet203->setCoord(*SoCoordinate204);

SoShape201->setGeometry(*SoIndexedLineSet203);

SoHAnimSegment198->addChild(*SoShape201);

SoTransform* SoTransform205 = new SoTransform();
SoTransform205->setTranslation(new float[]{0.1375,0.006,-0.03});
SoShape* SoShape206 = new SoShape();
SoShape206->setUSE(QString("skinsphere"));
SoTransform205->addChild(*SoShape206);

SoHAnimSegment198->addChild(*SoTransform205);

SoTransform* SoTransform207 = new SoTransform();
SoTransform207->setTranslation(new float[]{0.095,0.006,-0.03});
SoShape* SoShape208 = new SoShape();
SoShape208->setUSE(QString("skinsphere"));
SoTransform207->addChild(*SoShape208);

SoHAnimSegment198->addChild(*SoTransform207);

SoTransform* SoTransform209 = new SoTransform();
SoTransform209->setTranslation(new float[]{0.115,0.015,-0.045});
SoShape* SoShape210 = new SoShape();
SoShape210->setUSE(QString("skinsphere"));
SoTransform209->addChild(*SoShape210);

SoHAnimSegment198->addChild(*SoTransform209);

SoHAnimJoint197->addChildren(*SoHAnimSegment198);

SoHAnimJoint* SoHAnimJoint211 = new SoHAnimJoint();
SoHAnimJoint211->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint211->setDEF(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimJoint211->setCenter(new float[]{0.115,0.037,0.09});
SoHAnimJoint211->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint211->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment212 = new SoHAnimSegment();
SoHAnimSegment212->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment212->setDEF(QString("Joe_l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform213 = new SoTransform();
SoTransform213->setTranslation(new float[]{0.115,0.037,0.09});
SoShape* SoShape214 = new SoShape();
SoShape214->setUSE(QString("jointbox"));
SoTransform213->addChild(*SoShape214);

SoHAnimSegment212->addChild(*SoTransform213);

SoShape* SoShape215 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance216 = new SoVRMLAppearance();
SoVRMLAppearance216->setUSE(QString("SegmentLine"));
SoShape215->addChild(*SoVRMLAppearance216);

SoIndexedLineSet* SoIndexedLineSet217 = new SoIndexedLineSet();
SoIndexedLineSet217->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate218 = new SoCoordinate();
SoCoordinate218->setPoint(new float[]{0.115,0.037,0.09,0.115,0.02,0.122}, 6);
SoIndexedLineSet217->setCoord(*SoCoordinate218);

SoShape215->setGeometry(*SoIndexedLineSet217);

SoHAnimSegment212->addChild(*SoShape215);

SoTransform* SoTransform219 = new SoTransform();
SoTransform219->setTranslation(new float[]{0.115,0.06,0.1});
SoShape* SoShape220 = new SoShape();
SoShape220->setUSE(QString("skinsphere"));
SoTransform219->addChild(*SoShape220);

SoHAnimSegment212->addChild(*SoTransform219);

SoTransform* SoTransform221 = new SoTransform();
SoTransform221->setTranslation(new float[]{0.115,0.0,0.07});
SoShape* SoShape222 = new SoShape();
SoShape222->setUSE(QString("skinsphere"));
SoTransform221->addChild(*SoShape222);

SoHAnimSegment212->addChild(*SoTransform221);

SoTransform* SoTransform223 = new SoTransform();
SoTransform223->setTranslation(new float[]{0.165,0.0,0.07});
SoShape* SoShape224 = new SoShape();
SoShape224->setUSE(QString("skinsphere"));
SoTransform223->addChild(*SoShape224);

SoHAnimSegment212->addChild(*SoTransform223);

SoTransform* SoTransform225 = new SoTransform();
SoTransform225->setTranslation(new float[]{0.095,0.0,0.07});
SoShape* SoShape226 = new SoShape();
SoShape226->setUSE(QString("skinsphere"));
SoTransform225->addChild(*SoShape226);

SoHAnimSegment212->addChild(*SoTransform225);

SoHAnimSite* SoHAnimSite227 = new SoHAnimSite();
SoHAnimSite227->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite227->setDEF(QString("Joe_l_metatarsal_phalanx_1_pt"));
SoHAnimSite227->setTranslation(new float[]{0.087,0.01,0.122});
SoShape* SoShape228 = new SoShape();
SoShape228->setUSE(QString("sitebox"));
SoHAnimSite227->addChild(*SoShape228);

SoHAnimSegment212->addChild(*SoHAnimSite227);

SoHAnimJoint211->addChildren(*SoHAnimSegment212);

SoHAnimJoint* SoHAnimJoint229 = new SoHAnimJoint();
SoHAnimJoint229->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint229->setDEF(QString("Joe_l_metatarsal"));
SoHAnimJoint229->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint229->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint229->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment230 = new SoHAnimSegment();
SoHAnimSegment230->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSegment230->setDEF(QString("Joe_l_tarsal_distal_phalanx_2"));
SoTransform* SoTransform231 = new SoTransform();
SoTransform231->setTranslation(new float[]{0.115,0.02,0.13});
SoShape* SoShape232 = new SoShape();
SoShape232->setUSE(QString("jointbox"));
SoTransform231->addChild(*SoShape232);

SoHAnimSegment230->addChild(*SoTransform231);

SoShape* SoShape233 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance234 = new SoVRMLAppearance();
SoVRMLAppearance234->setUSE(QString("SegmentLine"));
SoShape233->addChild(*SoVRMLAppearance234);

SoIndexedLineSet* SoIndexedLineSet235 = new SoIndexedLineSet();
SoIndexedLineSet235->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate236 = new SoCoordinate();
SoCoordinate236->setPoint(new float[]{0.115,0.02,0.122,0.132,0.013,0.19}, 6);
SoIndexedLineSet235->setCoord(*SoCoordinate236);

SoShape233->setGeometry(*SoIndexedLineSet235);

SoHAnimSegment230->addChild(*SoShape233);

SoTransform* SoTransform237 = new SoTransform();
SoTransform237->setTranslation(new float[]{0.115,0.04,0.13});
SoShape* SoShape238 = new SoShape();
SoShape238->setUSE(QString("skinsphere"));
SoTransform237->addChild(*SoShape238);

SoHAnimSegment230->addChild(*SoTransform237);

SoTransform* SoTransform239 = new SoTransform();
SoTransform239->setTranslation(new float[]{0.125,0.0,0.12});
SoShape* SoShape240 = new SoShape();
SoShape240->setUSE(QString("skinsphere"));
SoTransform239->addChild(*SoShape240);

SoHAnimSegment230->addChild(*SoTransform239);

SoTransform* SoTransform241 = new SoTransform();
SoTransform241->setTranslation(new float[]{0.165,0.0,0.12});
SoShape* SoShape242 = new SoShape();
SoShape242->setUSE(QString("skinsphere"));
SoTransform241->addChild(*SoShape242);

SoHAnimSegment230->addChild(*SoTransform241);

SoTransform* SoTransform243 = new SoTransform();
SoTransform243->setTranslation(new float[]{0.087,0.0,0.122});
SoShape* SoShape244 = new SoShape();
SoShape244->setUSE(QString("skinsphere"));
SoTransform243->addChild(*SoShape244);

SoHAnimSegment230->addChild(*SoTransform243);

SoTransform* SoTransform245 = new SoTransform();
SoTransform245->setTranslation(new float[]{0.09,0.012,0.188});
SoShape* SoShape246 = new SoShape();
SoShape246->setUSE(QString("skinsphere"));
SoTransform245->addChild(*SoShape246);

SoHAnimSegment230->addChild(*SoTransform245);

SoTransform* SoTransform247 = new SoTransform();
SoTransform247->setTranslation(new float[]{0.11,0.011,0.19});
SoShape* SoShape248 = new SoShape();
SoShape248->setUSE(QString("skinsphere"));
SoTransform247->addChild(*SoShape248);

SoHAnimSegment230->addChild(*SoTransform247);

SoTransform* SoTransform249 = new SoTransform();
SoTransform249->setTranslation(new float[]{0.128,0.011,0.185});
SoShape* SoShape250 = new SoShape();
SoShape250->setUSE(QString("skinsphere"));
SoTransform249->addChild(*SoShape250);

SoHAnimSegment230->addChild(*SoTransform249);

SoTransform* SoTransform251 = new SoTransform();
SoTransform251->setTranslation(new float[]{0.142,0.011,0.178});
SoShape* SoShape252 = new SoShape();
SoShape252->setUSE(QString("skinsphere"));
SoTransform251->addChild(*SoShape252);

SoHAnimSegment230->addChild(*SoTransform251);

SoTransform* SoTransform253 = new SoTransform();
SoTransform253->setTranslation(new float[]{0.154,0.01,0.168});
SoShape* SoShape254 = new SoShape();
SoShape254->setUSE(QString("skinsphere"));
SoTransform253->addChild(*SoShape254);

SoHAnimSegment230->addChild(*SoTransform253);

SoHAnimSite* SoHAnimSite255 = new SoHAnimSite();
SoHAnimSite255->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite255->setDEF(QString("Joe_l_metatarsal_phalanx_5_pt"));
SoHAnimSite255->setTranslation(new float[]{0.165,0.01,0.12});
SoShape* SoShape256 = new SoShape();
SoShape256->setUSE(QString("sitebox"));
SoHAnimSite255->addChild(*SoShape256);

SoHAnimSegment230->addChild(*SoHAnimSite255);

SoHAnimSite* SoHAnimSite257 = new SoHAnimSite();
SoHAnimSite257->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite257->setDEF(QString("Joe_l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite257->setTranslation(new float[]{0.11,0.011,0.19});
SoShape* SoShape258 = new SoShape();
SoShape258->setUSE(QString("sitebox"));
SoHAnimSite257->addChild(*SoShape258);

SoHAnimSegment230->addChild(*SoHAnimSite257);

SoHAnimJoint229->addChildren(*SoHAnimSegment230);

SoHAnimJoint211->addChildren(*SoHAnimJoint229);

SoHAnimJoint197->addChildren(*SoHAnimJoint211);

SoHAnimJoint177->addChildren(*SoHAnimJoint197);

SoHAnimJoint149->addChildren(*SoHAnimJoint177);

SoHAnimJoint123->addChildren(*SoHAnimJoint149);

SoHAnimJoint93->addChildren(*SoHAnimJoint123);

SoHAnimJoint* SoHAnimJoint259 = new SoHAnimJoint();
SoHAnimJoint259->X3DNode::setName(QString("r_hip"));
SoHAnimJoint259->setDEF(QString("Joe_r_hip"));
SoHAnimJoint259->setCenter(new float[]{-0.1,0.92,0.0});
SoHAnimJoint259->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101}, 6);
SoHAnimJoint259->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment260 = new SoHAnimSegment();
SoHAnimSegment260->X3DNode::setName(QString("r_thigh"));
SoHAnimSegment260->setDEF(QString("Joe_r_thigh"));
SoTransform* SoTransform261 = new SoTransform();
SoTransform261->setTranslation(new float[]{-0.1,0.92,0.0});
SoShape* SoShape262 = new SoShape();
SoShape262->setUSE(QString("jointbox"));
SoTransform261->addChild(*SoShape262);

SoHAnimSegment260->addChild(*SoTransform261);

SoShape* SoShape263 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance264 = new SoVRMLAppearance();
SoVRMLAppearance264->setUSE(QString("SegmentLine"));
SoShape263->addChild(*SoVRMLAppearance264);

SoIndexedLineSet* SoIndexedLineSet265 = new SoIndexedLineSet();
SoIndexedLineSet265->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate266 = new SoCoordinate();
SoCoordinate266->setPoint(new float[]{-0.1,0.92,0.0,-0.1,0.4913,0.0}, 6);
SoIndexedLineSet265->setCoord(*SoCoordinate266);

SoShape263->setGeometry(*SoIndexedLineSet265);

SoHAnimSegment260->addChild(*SoShape263);

SoTransform* SoTransform267 = new SoTransform();
SoTransform267->setTranslation(new float[]{-0.079,0.92,-0.14});
SoShape* SoShape268 = new SoShape();
SoShape268->setUSE(QString("skinsphere"));
SoTransform267->addChild(*SoShape268);

SoHAnimSegment260->addChild(*SoTransform267);

SoTransform* SoTransform269 = new SoTransform();
SoTransform269->setTranslation(new float[]{-0.1,0.9,0.075});
SoShape* SoShape270 = new SoShape();
SoShape270->setUSE(QString("skinsphere"));
SoTransform269->addChild(*SoShape270);

SoHAnimSegment260->addChild(*SoTransform269);

SoTransform* SoTransform271 = new SoTransform();
SoTransform271->setTranslation(new float[]{-0.171,0.65,0.0});
SoShape* SoShape272 = new SoShape();
SoShape272->setUSE(QString("skinsphere"));
SoTransform271->addChild(*SoShape272);

SoHAnimSegment260->addChild(*SoTransform271);

SoTransform* SoTransform273 = new SoTransform();
SoTransform273->setTranslation(new float[]{-0.02,0.65,0.0});
SoShape* SoShape274 = new SoShape();
SoShape274->setUSE(QString("skinsphere"));
SoTransform273->addChild(*SoShape274);

SoHAnimSegment260->addChild(*SoTransform273);

SoTransform* SoTransform275 = new SoTransform();
SoTransform275->setTranslation(new float[]{-0.1,0.65,-0.08});
SoShape* SoShape276 = new SoShape();
SoShape276->setUSE(QString("skinsphere"));
SoTransform275->addChild(*SoShape276);

SoHAnimSegment260->addChild(*SoTransform275);

SoTransform* SoTransform277 = new SoTransform();
SoTransform277->setTranslation(new float[]{-0.1,0.65,0.07});
SoShape* SoShape278 = new SoShape();
SoShape278->setUSE(QString("skinsphere"));
SoTransform277->addChild(*SoShape278);

SoHAnimSegment260->addChild(*SoTransform277);

SoHAnimSite* SoHAnimSite279 = new SoHAnimSite();
SoHAnimSite279->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite279->setDEF(QString("Joe_r_knee_crease_pt"));
SoHAnimSite279->setTranslation(new float[]{-0.115,0.466,-0.055});
SoShape* SoShape280 = new SoShape();
SoShape280->setUSE(QString("sitebox"));
SoHAnimSite279->addChild(*SoShape280);

SoHAnimSegment260->addChild(*SoHAnimSite279);

SoHAnimSite* SoHAnimSite281 = new SoHAnimSite();
SoHAnimSite281->X3DNode::setName(QString("r_femoral_lateral_epicondyle_pt"));
SoHAnimSite281->setDEF(QString("Joe_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite281->setTranslation(new float[]{-0.17,0.466,0.0});
SoShape* SoShape282 = new SoShape();
SoShape282->setUSE(QString("sitebox"));
SoHAnimSite281->addChild(*SoShape282);

SoHAnimSegment260->addChild(*SoHAnimSite281);

SoHAnimSite* SoHAnimSite283 = new SoHAnimSite();
SoHAnimSite283->X3DNode::setName(QString("r_femoral_medial_epicondyle_pt"));
SoHAnimSite283->setDEF(QString("Joe_r_femoral_medial_epicondyle_pt"));
SoHAnimSite283->setTranslation(new float[]{-0.05,0.466,0.0});
SoShape* SoShape284 = new SoShape();
SoShape284->setUSE(QString("sitebox"));
SoHAnimSite283->addChild(*SoShape284);

SoHAnimSegment260->addChild(*SoHAnimSite283);

SoHAnimJoint259->addChildren(*SoHAnimSegment260);

SoHAnimJoint* SoHAnimJoint285 = new SoHAnimJoint();
SoHAnimJoint285->X3DNode::setName(QString("r_knee"));
SoHAnimJoint285->setDEF(QString("Joe_r_knee"));
SoHAnimJoint285->setCenter(new float[]{-0.05,0.466,0.0});
SoHAnimJoint285->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369}, 8);
SoHAnimJoint285->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment286 = new SoHAnimSegment();
SoHAnimSegment286->X3DNode::setName(QString("r_calf"));
SoHAnimSegment286->setDEF(QString("Joe_r_calf"));
SoTransform* SoTransform287 = new SoTransform();
SoTransform287->setTranslation(new float[]{-0.1,0.4913,0.0});
SoShape* SoShape288 = new SoShape();
SoShape288->setUSE(QString("jointbox"));
SoTransform287->addChild(*SoShape288);

SoHAnimSegment286->addChild(*SoTransform287);

SoShape* SoShape289 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance290 = new SoVRMLAppearance();
SoVRMLAppearance290->setUSE(QString("SegmentLine"));
SoShape289->addChild(*SoVRMLAppearance290);

SoIndexedLineSet* SoIndexedLineSet291 = new SoIndexedLineSet();
SoIndexedLineSet291->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate292 = new SoCoordinate();
SoCoordinate292->setPoint(new float[]{-0.1,0.4913,0.0,-0.1,0.0712,0.0}, 6);
SoIndexedLineSet291->setCoord(*SoCoordinate292);

SoShape289->setGeometry(*SoIndexedLineSet291);

SoHAnimSegment286->addChild(*SoShape289);

SoTransform* SoTransform293 = new SoTransform();
SoTransform293->setTranslation(new float[]{-0.115,0.466,0.06});
SoShape* SoShape294 = new SoShape();
SoShape294->setUSE(QString("skinsphere"));
SoTransform293->addChild(*SoShape294);

SoHAnimSegment286->addChild(*SoTransform293);

SoTransform* SoTransform295 = new SoTransform();
SoTransform295->setTranslation(new float[]{-0.115,0.466,-0.055});
SoShape* SoShape296 = new SoShape();
SoShape296->setUSE(QString("skinsphere"));
SoTransform295->addChild(*SoShape296);

SoHAnimSegment286->addChild(*SoTransform295);

SoTransform* SoTransform297 = new SoTransform();
SoTransform297->setTranslation(new float[]{-0.17,0.466,0.0});
SoShape* SoShape298 = new SoShape();
SoShape298->setUSE(QString("skinsphere"));
SoTransform297->addChild(*SoShape298);

SoHAnimSegment286->addChild(*SoTransform297);

SoTransform* SoTransform299 = new SoTransform();
SoTransform299->setTranslation(new float[]{-0.05,0.466,0.0});
SoShape* SoShape300 = new SoShape();
SoShape300->setUSE(QString("skinsphere"));
SoTransform299->addChild(*SoShape300);

SoHAnimSegment286->addChild(*SoTransform299);

SoTransform* SoTransform301 = new SoTransform();
SoTransform301->setTranslation(new float[]{-0.17,0.3,0.0});
SoShape* SoShape302 = new SoShape();
SoShape302->setUSE(QString("skinsphere"));
SoTransform301->addChild(*SoShape302);

SoHAnimSegment286->addChild(*SoTransform301);

SoTransform* SoTransform303 = new SoTransform();
SoTransform303->setTranslation(new float[]{-0.06,0.3,0.0});
SoShape* SoShape304 = new SoShape();
SoShape304->setUSE(QString("skinsphere"));
SoTransform303->addChild(*SoShape304);

SoHAnimSegment286->addChild(*SoTransform303);

SoTransform* SoTransform305 = new SoTransform();
SoTransform305->setTranslation(new float[]{-0.1,0.3,-0.05});
SoShape* SoShape306 = new SoShape();
SoShape306->setUSE(QString("skinsphere"));
SoTransform305->addChild(*SoShape306);

SoHAnimSegment286->addChild(*SoTransform305);

SoTransform* SoTransform307 = new SoTransform();
SoTransform307->setTranslation(new float[]{-0.1,0.3,0.05});
SoShape* SoShape308 = new SoShape();
SoShape308->setUSE(QString("skinsphere"));
SoTransform307->addChild(*SoShape308);

SoHAnimSegment286->addChild(*SoTransform307);

SoHAnimSite* SoHAnimSite309 = new SoHAnimSite();
SoHAnimSite309->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite309->setDEF(QString("Joe_r_lateral_malleolus_pt"));
SoHAnimSite309->setTranslation(new float[]{-0.15,0.07,0.0});
SoShape* SoShape310 = new SoShape();
SoShape310->setUSE(QString("sitebox"));
SoHAnimSite309->addChild(*SoShape310);

SoHAnimSegment286->addChild(*SoHAnimSite309);

SoHAnimSite* SoHAnimSite311 = new SoHAnimSite();
SoHAnimSite311->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite311->setDEF(QString("Joe_r_medial_malleolus_pt"));
SoHAnimSite311->setTranslation(new float[]{-0.085,0.086,0.0125});
SoShape* SoShape312 = new SoShape();
SoShape312->setUSE(QString("sitebox"));
SoHAnimSite311->addChild(*SoShape312);

SoHAnimSegment286->addChild(*SoHAnimSite311);

SoHAnimJoint285->addChildren(*SoHAnimSegment286);

SoHAnimJoint* SoHAnimJoint313 = new SoHAnimJoint();
SoHAnimJoint313->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint313->setDEF(QString("Joe_r_talocrural"));
SoHAnimJoint313->setCenter(new float[]{-0.115,0.069,0.0});
SoHAnimJoint313->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint313->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment314 = new SoHAnimSegment();
SoHAnimSegment314->X3DNode::setName(QString("r_talus"));
SoHAnimSegment314->setDEF(QString("Joe_r_talus"));
SoTransform* SoTransform315 = new SoTransform();
SoTransform315->setTranslation(new float[]{-0.1,0.0712,0.0});
SoShape* SoShape316 = new SoShape();
SoShape316->setUSE(QString("jointbox"));
SoTransform315->addChild(*SoShape316);

SoHAnimSegment314->addChild(*SoTransform315);

SoShape* SoShape317 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance318 = new SoVRMLAppearance();
SoVRMLAppearance318->setUSE(QString("SegmentLine"));
SoShape317->addChild(*SoVRMLAppearance318);

SoIndexedLineSet* SoIndexedLineSet319 = new SoIndexedLineSet();
SoIndexedLineSet319->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate320 = new SoCoordinate();
SoCoordinate320->setPoint(new float[]{-0.1,0.0712,0.0,-0.1,0.015,-0.01}, 6);
SoIndexedLineSet319->setCoord(*SoCoordinate320);

SoShape317->setGeometry(*SoIndexedLineSet319);

SoHAnimSegment314->addChild(*SoShape317);

SoTransform* SoTransform321 = new SoTransform();
SoTransform321->setTranslation(new float[]{-0.15,0.07,0.0});
SoShape* SoShape322 = new SoShape();
SoShape322->setUSE(QString("skinsphere"));
SoTransform321->addChild(*SoShape322);

SoHAnimSegment314->addChild(*SoTransform321);

SoTransform* SoTransform323 = new SoTransform();
SoTransform323->setTranslation(new float[]{-0.085,0.086,0.0125});
SoShape* SoShape324 = new SoShape();
SoShape324->setUSE(QString("skinsphere"));
SoTransform323->addChild(*SoShape324);

SoHAnimSegment314->addChild(*SoTransform323);

SoTransform* SoTransform325 = new SoTransform();
SoTransform325->setTranslation(new float[]{-0.115,0.069,-0.045});
SoShape* SoShape326 = new SoShape();
SoShape326->setUSE(QString("skinsphere"));
SoTransform325->addChild(*SoShape326);

SoHAnimSegment314->addChild(*SoTransform325);

SoTransform* SoTransform327 = new SoTransform();
SoTransform327->setTranslation(new float[]{-0.117,0.0975,0.0615});
SoShape* SoShape328 = new SoShape();
SoShape328->setUSE(QString("skinsphere"));
SoTransform327->addChild(*SoShape328);

SoHAnimSegment314->addChild(*SoTransform327);

SoHAnimSite* SoHAnimSite329 = new SoHAnimSite();
SoHAnimSite329->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite329->setDEF(QString("Joe_r_sphyrion_pt"));
SoHAnimSite329->setTranslation(new float[]{-0.09,0.056,0.0125});
SoShape* SoShape330 = new SoShape();
SoShape330->setUSE(QString("sitebox"));
SoHAnimSite329->addChild(*SoShape330);

SoHAnimSegment314->addChild(*SoHAnimSite329);

SoHAnimSite* SoHAnimSite331 = new SoHAnimSite();
SoHAnimSite331->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite331->setDEF(QString("Joe_r_calcaneus_posterior_pt"));
SoHAnimSite331->setTranslation(new float[]{-0.115,0.04,-0.055});
SoShape* SoShape332 = new SoShape();
SoShape332->setUSE(QString("sitebox"));
SoHAnimSite331->addChild(*SoShape332);

SoHAnimSegment314->addChild(*SoHAnimSite331);

SoHAnimJoint313->addChildren(*SoHAnimSegment314);

SoHAnimJoint* SoHAnimJoint333 = new SoHAnimJoint();
SoHAnimJoint333->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint333->setDEF(QString("Joe_r_tarsometatarsal_2"));
SoHAnimJoint333->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint333->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint333->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment334 = new SoHAnimSegment();
SoHAnimSegment334->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimSegment334->setDEF(QString("Joe_r_metatarsal_2"));
SoTransform* SoTransform335 = new SoTransform();
SoTransform335->setTranslation(new float[]{-0.1,0.015,-0.01});
SoShape* SoShape336 = new SoShape();
SoShape336->setUSE(QString("jointbox"));
SoTransform335->addChild(*SoShape336);

SoHAnimSegment334->addChild(*SoTransform335);

SoShape* SoShape337 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance338 = new SoVRMLAppearance();
SoVRMLAppearance338->setUSE(QString("SegmentLine"));
SoShape337->addChild(*SoVRMLAppearance338);

SoIndexedLineSet* SoIndexedLineSet339 = new SoIndexedLineSet();
SoIndexedLineSet339->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate340 = new SoCoordinate();
SoCoordinate340->setPoint(new float[]{-0.1,0.015,-0.01,-0.1,0.02,0.07}, 6);
SoIndexedLineSet339->setCoord(*SoCoordinate340);

SoShape337->setGeometry(*SoIndexedLineSet339);

SoHAnimSegment334->addChild(*SoShape337);

SoTransform* SoTransform341 = new SoTransform();
SoTransform341->setTranslation(new float[]{-0.1375,0.006,-0.03});
SoShape* SoShape342 = new SoShape();
SoShape342->setUSE(QString("skinsphere"));
SoTransform341->addChild(*SoShape342);

SoHAnimSegment334->addChild(*SoTransform341);

SoTransform* SoTransform343 = new SoTransform();
SoTransform343->setTranslation(new float[]{-0.095,0.006,-0.03});
SoShape* SoShape344 = new SoShape();
SoShape344->setUSE(QString("skinsphere"));
SoTransform343->addChild(*SoShape344);

SoHAnimSegment334->addChild(*SoTransform343);

SoTransform* SoTransform345 = new SoTransform();
SoTransform345->setTranslation(new float[]{-0.095,0.006,-0.03});
SoShape* SoShape346 = new SoShape();
SoShape346->setUSE(QString("skinsphere"));
SoTransform345->addChild(*SoShape346);

SoHAnimSegment334->addChild(*SoTransform345);

SoHAnimJoint333->addChildren(*SoHAnimSegment334);

SoHAnimJoint* SoHAnimJoint347 = new SoHAnimJoint();
SoHAnimJoint347->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint347->setDEF(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimJoint347->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint347->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint347->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment348 = new SoHAnimSegment();
SoHAnimSegment348->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment348->setDEF(QString("Joe_r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform349 = new SoTransform();
SoTransform349->setTranslation(new float[]{-0.1,0.02,0.07});
SoShape* SoShape350 = new SoShape();
SoShape350->setUSE(QString("jointbox"));
SoTransform349->addChild(*SoShape350);

SoHAnimSegment348->addChild(*SoTransform349);

SoShape* SoShape351 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance352 = new SoVRMLAppearance();
SoVRMLAppearance352->setUSE(QString("SegmentLine"));
SoShape351->addChild(*SoVRMLAppearance352);

SoIndexedLineSet* SoIndexedLineSet353 = new SoIndexedLineSet();
SoIndexedLineSet353->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate354 = new SoCoordinate();
SoCoordinate354->setPoint(new float[]{-0.1,0.02,0.07,-0.1,0.01,0.14}, 6);
SoIndexedLineSet353->setCoord(*SoCoordinate354);

SoShape351->setGeometry(*SoIndexedLineSet353);

SoHAnimSegment348->addChild(*SoShape351);

SoTransform* SoTransform355 = new SoTransform();
SoTransform355->setTranslation(new float[]{-0.115,0.06,0.1});
SoShape* SoShape356 = new SoShape();
SoShape356->setUSE(QString("skinsphere"));
SoTransform355->addChild(*SoShape356);

SoHAnimSegment348->addChild(*SoTransform355);

SoTransform* SoTransform357 = new SoTransform();
SoTransform357->setTranslation(new float[]{-0.115,0.0,0.07});
SoShape* SoShape358 = new SoShape();
SoShape358->setUSE(QString("skinsphere"));
SoTransform357->addChild(*SoShape358);

SoHAnimSegment348->addChild(*SoTransform357);

SoTransform* SoTransform359 = new SoTransform();
SoTransform359->setTranslation(new float[]{-0.165,0.0,0.07});
SoShape* SoShape360 = new SoShape();
SoShape360->setUSE(QString("skinsphere"));
SoTransform359->addChild(*SoShape360);

SoHAnimSegment348->addChild(*SoTransform359);

SoTransform* SoTransform361 = new SoTransform();
SoTransform361->setTranslation(new float[]{-0.165,0.0,0.07});
SoShape* SoShape362 = new SoShape();
SoShape362->setUSE(QString("skinsphere"));
SoTransform361->addChild(*SoShape362);

SoHAnimSegment348->addChild(*SoTransform361);

SoHAnimSite* SoHAnimSite363 = new SoHAnimSite();
SoHAnimSite363->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite363->setDEF(QString("Joe_r_metatarsal_phalanx_1_pt"));
SoHAnimSite363->setTranslation(new float[]{-0.115,0.02,0.122});
SoShape* SoShape364 = new SoShape();
SoShape364->setUSE(QString("sitebox"));
SoHAnimSite363->addChild(*SoShape364);

SoHAnimSegment348->addChild(*SoHAnimSite363);

SoHAnimJoint347->addChildren(*SoHAnimSegment348);

SoHAnimJoint* SoHAnimJoint365 = new SoHAnimJoint();
SoHAnimJoint365->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint365->setDEF(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint365->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint365->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint365->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment366 = new SoHAnimSegment();
SoHAnimSegment366->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSegment366->setDEF(QString("Joe_r_tarsal_distal_phalanx_2"));
SoTransform* SoTransform367 = new SoTransform();
SoTransform367->setTranslation(new float[]{-0.1086,0.01,0.14});
SoShape* SoShape368 = new SoShape();
SoShape368->setUSE(QString("jointbox"));
SoTransform367->addChild(*SoShape368);

SoHAnimSegment366->addChild(*SoTransform367);

SoShape* SoShape369 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance370 = new SoVRMLAppearance();
SoVRMLAppearance370->setUSE(QString("SegmentLine"));
SoShape369->addChild(*SoVRMLAppearance370);

SoIndexedLineSet* SoIndexedLineSet371 = new SoIndexedLineSet();
SoIndexedLineSet371->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate372 = new SoCoordinate();
SoCoordinate372->setPoint(new float[]{-0.1,0.01,0.14,-0.1043,0.0016,0.2}, 6);
SoIndexedLineSet371->setCoord(*SoCoordinate372);

SoShape369->setGeometry(*SoIndexedLineSet371);

SoHAnimSegment366->addChild(*SoShape369);

SoTransform* SoTransform373 = new SoTransform();
SoTransform373->setTranslation(new float[]{-0.115,0.04,0.13});
SoShape* SoShape374 = new SoShape();
SoShape374->setUSE(QString("skinsphere"));
SoTransform373->addChild(*SoShape374);

SoHAnimSegment366->addChild(*SoTransform373);

SoTransform* SoTransform375 = new SoTransform();
SoTransform375->setTranslation(new float[]{-0.125,0.0,0.12});
SoShape* SoShape376 = new SoShape();
SoShape376->setUSE(QString("skinsphere"));
SoTransform375->addChild(*SoShape376);

SoHAnimSegment366->addChild(*SoTransform375);

SoTransform* SoTransform377 = new SoTransform();
SoTransform377->setTranslation(new float[]{-0.165,0.0,0.12});
SoShape* SoShape378 = new SoShape();
SoShape378->setUSE(QString("skinsphere"));
SoTransform377->addChild(*SoShape378);

SoHAnimSegment366->addChild(*SoTransform377);

SoTransform* SoTransform379 = new SoTransform();
SoTransform379->setTranslation(new float[]{-0.087,0.0,0.122});
SoShape* SoShape380 = new SoShape();
SoShape380->setUSE(QString("skinsphere"));
SoTransform379->addChild(*SoShape380);

SoHAnimSegment366->addChild(*SoTransform379);

SoTransform* SoTransform381 = new SoTransform();
SoTransform381->setTranslation(new float[]{-0.09,0.012,0.188});
SoShape* SoShape382 = new SoShape();
SoShape382->setUSE(QString("skinsphere"));
SoTransform381->addChild(*SoShape382);

SoHAnimSegment366->addChild(*SoTransform381);

SoTransform* SoTransform383 = new SoTransform();
SoTransform383->setTranslation(new float[]{-0.11,0.011,0.19});
SoShape* SoShape384 = new SoShape();
SoShape384->setUSE(QString("skinsphere"));
SoTransform383->addChild(*SoShape384);

SoHAnimSegment366->addChild(*SoTransform383);

SoTransform* SoTransform385 = new SoTransform();
SoTransform385->setTranslation(new float[]{-0.128,0.011,0.185});
SoShape* SoShape386 = new SoShape();
SoShape386->setUSE(QString("skinsphere"));
SoTransform385->addChild(*SoShape386);

SoHAnimSegment366->addChild(*SoTransform385);

SoTransform* SoTransform387 = new SoTransform();
SoTransform387->setTranslation(new float[]{-0.142,0.011,0.178});
SoShape* SoShape388 = new SoShape();
SoShape388->setUSE(QString("skinsphere"));
SoTransform387->addChild(*SoShape388);

SoHAnimSegment366->addChild(*SoTransform387);

SoTransform* SoTransform389 = new SoTransform();
SoTransform389->setTranslation(new float[]{-0.154,0.01,0.168});
SoShape* SoShape390 = new SoShape();
SoShape390->setUSE(QString("skinsphere"));
SoTransform389->addChild(*SoShape390);

SoHAnimSegment366->addChild(*SoTransform389);

SoHAnimSite* SoHAnimSite391 = new SoHAnimSite();
SoHAnimSite391->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite391->setDEF(QString("Joe_r_metatarsal_phalanx_5_pt"));
SoHAnimSite391->setTranslation(new float[]{-0.165,0.01,0.12});
SoShape* SoShape392 = new SoShape();
SoShape392->setUSE(QString("sitebox"));
SoHAnimSite391->addChild(*SoShape392);

SoHAnimSegment366->addChild(*SoHAnimSite391);

SoHAnimSite* SoHAnimSite393 = new SoHAnimSite();
SoHAnimSite393->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite393->setDEF(QString("Joe_r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite393->setTranslation(new float[]{-0.11,0.011,0.19});
SoShape* SoShape394 = new SoShape();
SoShape394->setUSE(QString("sitebox"));
SoHAnimSite393->addChild(*SoShape394);

SoHAnimSegment366->addChild(*SoHAnimSite393);

SoHAnimJoint365->addChildren(*SoHAnimSegment366);

SoHAnimJoint347->addChildren(*SoHAnimJoint365);

SoHAnimJoint333->addChildren(*SoHAnimJoint347);

SoHAnimJoint313->addChildren(*SoHAnimJoint333);

SoHAnimJoint285->addChildren(*SoHAnimJoint313);

SoHAnimJoint259->addChildren(*SoHAnimJoint285);

SoHAnimJoint93->addChildren(*SoHAnimJoint259);

SoHAnimJoint81->addChildren(*SoHAnimJoint93);

SoHAnimJoint* SoHAnimJoint395 = new SoHAnimJoint();
SoHAnimJoint395->X3DNode::setName(QString("vl5"));
SoHAnimJoint395->setDEF(QString("Joe_vl5"));
SoHAnimJoint395->setCenter(new float[]{0.0,1.045,-0.095});
SoHAnimJoint395->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint395->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment396 = new SoHAnimSegment();
SoHAnimSegment396->X3DNode::setName(QString("toPelvis"));
SoHAnimSegment396->setDEF(QString("Joe_toPelvis"));
SoShape* SoShape397 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance398 = new SoVRMLAppearance();
SoVRMLAppearance398->setUSE(QString("SegmentLine"));
SoShape397->addChild(*SoVRMLAppearance398);

SoIndexedLineSet* SoIndexedLineSet399 = new SoIndexedLineSet();
SoIndexedLineSet399->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate400 = new SoCoordinate();
SoCoordinate400->setPoint(new float[]{0.0,1.045,-0.095,0.0,0.9149,0.0016}, 6);
SoIndexedLineSet399->setCoord(*SoCoordinate400);

SoShape397->setGeometry(*SoIndexedLineSet399);

SoHAnimSegment396->addChild(*SoShape397);

SoHAnimJoint395->addChildren(*SoHAnimSegment396);

SoHAnimSegment* SoHAnimSegment401 = new SoHAnimSegment();
SoHAnimSegment401->X3DNode::setName(QString("l5"));
SoHAnimSegment401->setDEF(QString("Joe_l5"));
SoShape* SoShape402 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance403 = new SoVRMLAppearance();
SoVRMLAppearance403->setUSE(QString("SegmentLine"));
SoShape402->addChild(*SoVRMLAppearance403);

SoIndexedLineSet* SoIndexedLineSet404 = new SoIndexedLineSet();
SoIndexedLineSet404->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate405 = new SoCoordinate();
SoCoordinate405->setPoint(new float[]{0.0,1.045,-0.095,0.0,1.068,-0.085}, 6);
SoIndexedLineSet404->setCoord(*SoCoordinate405);

SoShape402->setGeometry(*SoIndexedLineSet404);

SoHAnimSegment401->addChild(*SoShape402);

SoHAnimSite* SoHAnimSite406 = new SoHAnimSite();
SoHAnimSite406->X3DNode::setName(QString("waist_preferred_posterior_pt"));
SoHAnimSite406->setDEF(QString("Joe_waist_preferred_posterior_pt"));
SoHAnimSite406->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoShape* SoShape407 = new SoShape();
SoShape407->setUSE(QString("sitebox"));
SoHAnimSite406->addChild(*SoShape407);

SoHAnimSegment401->addChild(*SoHAnimSite406);

SoHAnimSite* SoHAnimSite408 = new SoHAnimSite();
SoHAnimSite408->X3DNode::setName(QString("navel_pt"));
SoHAnimSite408->setDEF(QString("Joe_navel_pt"));
SoHAnimSite408->setTranslation(new float[]{0.0,1.0723,0.09});
SoShape* SoShape409 = new SoShape();
SoShape409->setUSE(QString("sitebox"));
SoHAnimSite408->addChild(*SoShape409);

SoHAnimSegment401->addChild(*SoHAnimSite408);

SoHAnimJoint395->addChildren(*SoHAnimSegment401);

SoHAnimJoint* SoHAnimJoint410 = new SoHAnimJoint();
SoHAnimJoint410->X3DNode::setName(QString("vl4"));
SoHAnimJoint410->setDEF(QString("Joe_vl4"));
SoHAnimJoint410->setCenter(new float[]{0.0,1.068,-0.085});
SoHAnimSegment* SoHAnimSegment411 = new SoHAnimSegment();
SoHAnimSegment411->X3DNode::setName(QString("l4"));
SoHAnimSegment411->setDEF(QString("Joe_l4"));
SoShape* SoShape412 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance413 = new SoVRMLAppearance();
SoVRMLAppearance413->setUSE(QString("SegmentLine"));
SoShape412->addChild(*SoVRMLAppearance413);

SoIndexedLineSet* SoIndexedLineSet414 = new SoIndexedLineSet();
SoIndexedLineSet414->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate415 = new SoCoordinate();
SoCoordinate415->setPoint(new float[]{0.0,1.068,-0.085,0.0,1.092,-0.0725}, 6);
SoIndexedLineSet414->setCoord(*SoCoordinate415);

SoShape412->setGeometry(*SoIndexedLineSet414);

SoHAnimSegment411->addChild(*SoShape412);

SoTransform* SoTransform416 = new SoTransform();
SoTransform416->setTranslation(new float[]{0.0,1.068,-0.085});
SoShape* SoShape417 = new SoShape();
SoShape417->setUSE(QString("jointbox"));
SoTransform416->addChild(*SoShape417);

SoHAnimSegment411->addChild(*SoTransform416);

SoHAnimJoint410->addChildren(*SoHAnimSegment411);

SoHAnimJoint* SoHAnimJoint418 = new SoHAnimJoint();
SoHAnimJoint418->X3DNode::setName(QString("vl3"));
SoHAnimJoint418->setDEF(QString("Joe_vl3"));
SoHAnimJoint418->setCenter(new float[]{0.0,1.092,-0.0725});
SoHAnimSegment* SoHAnimSegment419 = new SoHAnimSegment();
SoHAnimSegment419->X3DNode::setName(QString("l3"));
SoHAnimSegment419->setDEF(QString("Joe_l3"));
SoShape* SoShape420 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance421 = new SoVRMLAppearance();
SoVRMLAppearance421->setUSE(QString("SegmentLine"));
SoShape420->addChild(*SoVRMLAppearance421);

SoIndexedLineSet* SoIndexedLineSet422 = new SoIndexedLineSet();
SoIndexedLineSet422->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate423 = new SoCoordinate();
SoCoordinate423->setPoint(new float[]{0.0,1.092,-0.0725,0.0,1.12,-0.065}, 6);
SoIndexedLineSet422->setCoord(*SoCoordinate423);

SoShape420->setGeometry(*SoIndexedLineSet422);

SoHAnimSegment419->addChild(*SoShape420);

SoTransform* SoTransform424 = new SoTransform();
SoTransform424->setTranslation(new float[]{0.0,1.092,-0.0725});
SoShape* SoShape425 = new SoShape();
SoShape425->setUSE(QString("jointbox"));
SoTransform424->addChild(*SoShape425);

SoHAnimSegment419->addChild(*SoTransform424);

SoHAnimJoint418->addChildren(*SoHAnimSegment419);

SoHAnimJoint* SoHAnimJoint426 = new SoHAnimJoint();
SoHAnimJoint426->X3DNode::setName(QString("vl2"));
SoHAnimJoint426->setDEF(QString("Joe_vl2"));
SoHAnimJoint426->setCenter(new float[]{0.0,1.12,-0.065});
SoHAnimJoint426->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint426->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
SoHAnimSegment* SoHAnimSegment427 = new SoHAnimSegment();
SoHAnimSegment427->X3DNode::setName(QString("l2"));
SoHAnimSegment427->setDEF(QString("Joe_l2"));
SoShape* SoShape428 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance429 = new SoVRMLAppearance();
SoVRMLAppearance429->setUSE(QString("SegmentLine"));
SoShape428->addChild(*SoVRMLAppearance429);

SoIndexedLineSet* SoIndexedLineSet430 = new SoIndexedLineSet();
SoIndexedLineSet430->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate431 = new SoCoordinate();
SoCoordinate431->setPoint(new float[]{0.0,1.12,-0.065,0.0,1.1459,-0.0625}, 6);
SoIndexedLineSet430->setCoord(*SoCoordinate431);

SoShape428->setGeometry(*SoIndexedLineSet430);

SoHAnimSegment427->addChild(*SoShape428);

SoTransform* SoTransform432 = new SoTransform();
SoTransform432->setTranslation(new float[]{0.0,1.12,-0.065});
SoShape* SoShape433 = new SoShape();
SoShape433->setUSE(QString("jointbox"));
SoTransform432->addChild(*SoShape433);

SoHAnimSegment427->addChild(*SoTransform432);

SoTransform* SoTransform434 = new SoTransform();
SoTransform434->setTranslation(new float[]{-0.087,1.19,-0.09});
SoShape* SoShape435 = new SoShape();
SoShape435->setUSE(QString("skinsphere"));
SoTransform434->addChild(*SoShape435);

SoHAnimSegment427->addChild(*SoTransform434);

SoTransform* SoTransform436 = new SoTransform();
SoTransform436->setTranslation(new float[]{0.087,1.19,-0.09});
SoShape* SoShape437 = new SoShape();
SoShape437->setUSE(QString("skinsphere"));
SoTransform436->addChild(*SoShape437);

SoHAnimSegment427->addChild(*SoTransform436);

SoTransform* SoTransform438 = new SoTransform();
SoTransform438->setTranslation(new float[]{0.172,1.32,-0.03});
SoShape* SoShape439 = new SoShape();
SoShape439->setUSE(QString("skinsphere"));
SoTransform438->addChild(*SoShape439);

SoHAnimSegment427->addChild(*SoTransform438);

SoTransform* SoTransform440 = new SoTransform();
SoTransform440->setTranslation(new float[]{-0.172,1.32,-0.03});
SoShape* SoShape441 = new SoShape();
SoShape441->setUSE(QString("skinsphere"));
SoTransform440->addChild(*SoShape441);

SoHAnimSegment427->addChild(*SoTransform440);

SoTransform* SoTransform442 = new SoTransform();
SoTransform442->setTranslation(new float[]{0.15,1.23,-0.015});
SoShape* SoShape443 = new SoShape();
SoShape443->setUSE(QString("skinsphere"));
SoTransform442->addChild(*SoShape443);

SoHAnimSegment427->addChild(*SoTransform442);

SoTransform* SoTransform444 = new SoTransform();
SoTransform444->setTranslation(new float[]{-0.15,1.23,-0.015});
SoShape* SoShape445 = new SoShape();
SoShape445->setUSE(QString("skinsphere"));
SoTransform444->addChild(*SoShape445);

SoHAnimSegment427->addChild(*SoTransform444);

SoHAnimSite* SoHAnimSite446 = new SoHAnimSite();
SoHAnimSite446->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite446->setDEF(QString("Joe_r_rib10_pt"));
SoHAnimSite446->setTranslation(new float[]{-0.087,1.19,0.09});
SoShape* SoShape447 = new SoShape();
SoShape447->setUSE(QString("sitebox"));
SoHAnimSite446->addChild(*SoShape447);

SoHAnimSegment427->addChild(*SoHAnimSite446);

SoHAnimSite* SoHAnimSite448 = new SoHAnimSite();
SoHAnimSite448->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite448->setDEF(QString("Joe_l_rib10_pt"));
SoHAnimSite448->setTranslation(new float[]{0.087,1.19,0.09});
SoShape* SoShape449 = new SoShape();
SoShape449->setUSE(QString("sitebox"));
SoHAnimSite448->addChild(*SoShape449);

SoHAnimSegment427->addChild(*SoHAnimSite448);

SoHAnimSite* SoHAnimSite450 = new SoHAnimSite();
SoHAnimSite450->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite450->setDEF(QString("Joe_rib10_midspine_pt"));
SoHAnimSite450->setTranslation(new float[]{0.0,1.1908,-0.1113});
SoShape* SoShape451 = new SoShape();
SoShape451->setUSE(QString("sitebox"));
SoHAnimSite450->addChild(*SoShape451);

SoHAnimSegment427->addChild(*SoHAnimSite450);

SoHAnimJoint426->addChildren(*SoHAnimSegment427);

SoHAnimJoint* SoHAnimJoint452 = new SoHAnimJoint();
SoHAnimJoint452->X3DNode::setName(QString("vl1"));
SoHAnimJoint452->setDEF(QString("Joe_vl1"));
SoHAnimJoint452->setCenter(new float[]{0.0,1.1459,-0.0625});
SoHAnimSegment* SoHAnimSegment453 = new SoHAnimSegment();
SoHAnimSegment453->X3DNode::setName(QString("l1"));
SoHAnimSegment453->setDEF(QString("Joe_l1"));
SoShape* SoShape454 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance455 = new SoVRMLAppearance();
SoVRMLAppearance455->setUSE(QString("SegmentLine"));
SoShape454->addChild(*SoVRMLAppearance455);

SoIndexedLineSet* SoIndexedLineSet456 = new SoIndexedLineSet();
SoIndexedLineSet456->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate457 = new SoCoordinate();
SoCoordinate457->setPoint(new float[]{0.0,1.1459,-0.0625,0.0,1.179,-0.068}, 6);
SoIndexedLineSet456->setCoord(*SoCoordinate457);

SoShape454->setGeometry(*SoIndexedLineSet456);

SoHAnimSegment453->addChild(*SoShape454);

SoTransform* SoTransform458 = new SoTransform();
SoTransform458->setTranslation(new float[]{0.0,1.1459,-0.0625});
SoShape* SoShape459 = new SoShape();
SoShape459->setUSE(QString("jointbox"));
SoTransform458->addChild(*SoShape459);

SoHAnimSegment453->addChild(*SoTransform458);

SoHAnimJoint452->addChildren(*SoHAnimSegment453);

SoHAnimJoint* SoHAnimJoint460 = new SoHAnimJoint();
SoHAnimJoint460->X3DNode::setName(QString("vt12"));
SoHAnimJoint460->setDEF(QString("Joe_vt12"));
SoHAnimJoint460->setCenter(new float[]{0.0,1.179,-0.068});
SoHAnimSegment* SoHAnimSegment461 = new SoHAnimSegment();
SoHAnimSegment461->X3DNode::setName(QString("t12"));
SoHAnimSegment461->setDEF(QString("Joe_t12"));
SoShape* SoShape462 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance463 = new SoVRMLAppearance();
SoVRMLAppearance463->setUSE(QString("SegmentLine"));
SoShape462->addChild(*SoVRMLAppearance463);

SoIndexedLineSet* SoIndexedLineSet464 = new SoIndexedLineSet();
SoIndexedLineSet464->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate465 = new SoCoordinate();
SoCoordinate465->setPoint(new float[]{0.0,1.179,-0.068,0.0,1.242,-0.09}, 6);
SoIndexedLineSet464->setCoord(*SoCoordinate465);

SoShape462->setGeometry(*SoIndexedLineSet464);

SoHAnimSegment461->addChild(*SoShape462);

SoTransform* SoTransform466 = new SoTransform();
SoTransform466->setTranslation(new float[]{0.0,1.179,-0.068});
SoShape* SoShape467 = new SoShape();
SoShape467->setUSE(QString("jointbox"));
SoTransform466->addChild(*SoShape467);

SoHAnimSegment461->addChild(*SoTransform466);

SoHAnimJoint460->addChildren(*SoHAnimSegment461);

SoHAnimJoint* SoHAnimJoint468 = new SoHAnimJoint();
SoHAnimJoint468->X3DNode::setName(QString("vt11"));
SoHAnimJoint468->setDEF(QString("Joe_vt11"));
SoHAnimJoint468->setCenter(new float[]{0.0,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment469 = new SoHAnimSegment();
SoHAnimSegment469->X3DNode::setName(QString("t11"));
SoHAnimSegment469->setDEF(QString("Joe_t11"));
SoShape* SoShape470 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance471 = new SoVRMLAppearance();
SoVRMLAppearance471->setUSE(QString("SegmentLine"));
SoShape470->addChild(*SoVRMLAppearance471);

SoIndexedLineSet* SoIndexedLineSet472 = new SoIndexedLineSet();
SoIndexedLineSet472->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate473 = new SoCoordinate();
SoCoordinate473->setPoint(new float[]{0.0,1.2145,-0.0755,0.0,1.242,-0.09}, 6);
SoIndexedLineSet472->setCoord(*SoCoordinate473);

SoShape470->setGeometry(*SoIndexedLineSet472);

SoHAnimSegment469->addChild(*SoShape470);

SoTransform* SoTransform474 = new SoTransform();
SoTransform474->setTranslation(new float[]{0.0,1.2145,-0.0755});
SoShape* SoShape475 = new SoShape();
SoShape475->setUSE(QString("jointbox"));
SoTransform474->addChild(*SoShape475);

SoHAnimSegment469->addChild(*SoTransform474);

SoHAnimJoint468->addChildren(*SoHAnimSegment469);

SoHAnimJoint* SoHAnimJoint476 = new SoHAnimJoint();
SoHAnimJoint476->X3DNode::setName(QString("vt10"));
SoHAnimJoint476->setDEF(QString("Joe_vt10"));
SoHAnimJoint476->setCenter(new float[]{0.0,1.242,-0.09});
SoHAnimJoint476->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint476->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment477 = new SoHAnimSegment();
SoHAnimSegment477->X3DNode::setName(QString("t10"));
SoHAnimSegment477->setDEF(QString("Joe_t10"));
SoShape* SoShape478 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance479 = new SoVRMLAppearance();
SoVRMLAppearance479->setUSE(QString("SegmentLine"));
SoShape478->addChild(*SoVRMLAppearance479);

SoIndexedLineSet* SoIndexedLineSet480 = new SoIndexedLineSet();
SoIndexedLineSet480->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate481 = new SoCoordinate();
SoCoordinate481->setPoint(new float[]{0.0,1.242,-0.09,0.0,1.268,-0.1}, 6);
SoIndexedLineSet480->setCoord(*SoCoordinate481);

SoShape478->setGeometry(*SoIndexedLineSet480);

SoHAnimSegment477->addChild(*SoShape478);

SoTransform* SoTransform482 = new SoTransform();
SoTransform482->setTranslation(new float[]{0.0,1.242,-0.09});
SoShape* SoShape483 = new SoShape();
SoShape483->setUSE(QString("jointbox"));
SoTransform482->addChild(*SoShape483);

SoHAnimSegment477->addChild(*SoTransform482);

SoHAnimSite* SoHAnimSite484 = new SoHAnimSite();
SoHAnimSite484->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite484->setDEF(QString("Joe_substernale_pt"));
SoHAnimSite484->setTranslation(new float[]{0.0,1.25,0.113});
SoShape* SoShape485 = new SoShape();
SoShape485->setUSE(QString("sitebox"));
SoHAnimSite484->addChild(*SoShape485);

SoHAnimSegment477->addChild(*SoHAnimSite484);

SoHAnimJoint476->addChildren(*SoHAnimSegment477);

SoHAnimJoint* SoHAnimJoint486 = new SoHAnimJoint();
SoHAnimJoint486->X3DNode::setName(QString("vt9"));
SoHAnimJoint486->setDEF(QString("Joe_vt9"));
SoHAnimJoint486->setCenter(new float[]{0.0,1.268,-0.1});
SoHAnimJoint486->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint486->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment487 = new SoHAnimSegment();
SoHAnimSegment487->X3DNode::setName(QString("t9"));
SoHAnimSegment487->setDEF(QString("Joe_t9"));
SoShape* SoShape488 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance489 = new SoVRMLAppearance();
SoVRMLAppearance489->setUSE(QString("SegmentLine"));
SoShape488->addChild(*SoVRMLAppearance489);

SoIndexedLineSet* SoIndexedLineSet490 = new SoIndexedLineSet();
SoIndexedLineSet490->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate491 = new SoCoordinate();
SoCoordinate491->setPoint(new float[]{0.0,1.268,-0.1,0.0,1.294,-0.11}, 6);
SoIndexedLineSet490->setCoord(*SoCoordinate491);

SoShape488->setGeometry(*SoIndexedLineSet490);

SoHAnimSegment487->addChild(*SoShape488);

SoTransform* SoTransform492 = new SoTransform();
SoTransform492->setTranslation(new float[]{0.0,1.268,-0.1});
SoShape* SoShape493 = new SoShape();
SoShape493->setUSE(QString("jointbox"));
SoTransform492->addChild(*SoShape493);

SoHAnimSegment487->addChild(*SoTransform492);

SoHAnimSite* SoHAnimSite494 = new SoHAnimSite();
SoHAnimSite494->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite494->setDEF(QString("Joe_r_thelion_pt"));
SoHAnimSite494->setTranslation(new float[]{-0.1135,1.318,0.095});
SoShape* SoShape495 = new SoShape();
SoShape495->setUSE(QString("sitebox"));
SoHAnimSite494->addChild(*SoShape495);

SoHAnimSegment487->addChild(*SoHAnimSite494);

SoHAnimSite* SoHAnimSite496 = new SoHAnimSite();
SoHAnimSite496->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite496->setDEF(QString("Joe_l_thelion_pt"));
SoHAnimSite496->setTranslation(new float[]{0.1135,1.318,0.095});
SoShape* SoShape497 = new SoShape();
SoShape497->setUSE(QString("sitebox"));
SoHAnimSite496->addChild(*SoShape497);

SoHAnimSegment487->addChild(*SoHAnimSite496);

SoHAnimJoint486->addChildren(*SoHAnimSegment487);

SoHAnimJoint* SoHAnimJoint498 = new SoHAnimJoint();
SoHAnimJoint498->X3DNode::setName(QString("vt8"));
SoHAnimJoint498->setDEF(QString("Joe_vt8"));
SoHAnimJoint498->setCenter(new float[]{0.0,1.294,-0.11});
SoHAnimSegment* SoHAnimSegment499 = new SoHAnimSegment();
SoHAnimSegment499->X3DNode::setName(QString("t8"));
SoHAnimSegment499->setDEF(QString("Joe_t8"));
SoShape* SoShape500 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance501 = new SoVRMLAppearance();
SoVRMLAppearance501->setUSE(QString("SegmentLine"));
SoShape500->addChild(*SoVRMLAppearance501);

SoIndexedLineSet* SoIndexedLineSet502 = new SoIndexedLineSet();
SoIndexedLineSet502->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate503 = new SoCoordinate();
SoCoordinate503->setPoint(new float[]{0.0,1.294,-0.11,0.0,1.352,-0.12}, 6);
SoIndexedLineSet502->setCoord(*SoCoordinate503);

SoShape500->setGeometry(*SoIndexedLineSet502);

SoHAnimSegment499->addChild(*SoShape500);

SoTransform* SoTransform504 = new SoTransform();
SoTransform504->setTranslation(new float[]{0.0,1.294,-0.11});
SoShape* SoShape505 = new SoShape();
SoShape505->setUSE(QString("jointbox"));
SoTransform504->addChild(*SoShape505);

SoHAnimSegment499->addChild(*SoTransform504);

SoHAnimJoint498->addChildren(*SoHAnimSegment499);

SoHAnimJoint* SoHAnimJoint506 = new SoHAnimJoint();
SoHAnimJoint506->X3DNode::setName(QString("vt7"));
SoHAnimJoint506->setDEF(QString("Joe_vt7"));
SoHAnimJoint506->setCenter(new float[]{0.0,1.323,-0.1155});
SoHAnimSegment* SoHAnimSegment507 = new SoHAnimSegment();
SoHAnimSegment507->X3DNode::setName(QString("t7"));
SoHAnimSegment507->setDEF(QString("Joe_t7"));
SoShape* SoShape508 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance509 = new SoVRMLAppearance();
SoVRMLAppearance509->setUSE(QString("SegmentLine"));
SoShape508->addChild(*SoVRMLAppearance509);

SoIndexedLineSet* SoIndexedLineSet510 = new SoIndexedLineSet();
SoIndexedLineSet510->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate511 = new SoCoordinate();
SoCoordinate511->setPoint(new float[]{0.0,1.352,-0.12,0.0,1.381,-0.1235}, 6);
SoIndexedLineSet510->setCoord(*SoCoordinate511);

SoShape508->setGeometry(*SoIndexedLineSet510);

SoHAnimSegment507->addChild(*SoShape508);

SoTransform* SoTransform512 = new SoTransform();
SoTransform512->setTranslation(new float[]{0.0,1.323,-0.1155});
SoShape* SoShape513 = new SoShape();
SoShape513->setUSE(QString("jointbox"));
SoTransform512->addChild(*SoShape513);

SoHAnimSegment507->addChild(*SoTransform512);

SoHAnimJoint506->addChildren(*SoHAnimSegment507);

SoHAnimJoint* SoHAnimJoint514 = new SoHAnimJoint();
SoHAnimJoint514->X3DNode::setName(QString("vt6"));
SoHAnimJoint514->setDEF(QString("Joe_vt6"));
SoHAnimJoint514->setCenter(new float[]{0.0,1.352,-0.12});
SoHAnimSegment* SoHAnimSegment515 = new SoHAnimSegment();
SoHAnimSegment515->X3DNode::setName(QString("t6"));
SoHAnimSegment515->setDEF(QString("Joe_t6"));
SoShape* SoShape516 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance517 = new SoVRMLAppearance();
SoVRMLAppearance517->setUSE(QString("SegmentLine"));
SoShape516->addChild(*SoVRMLAppearance517);

SoIndexedLineSet* SoIndexedLineSet518 = new SoIndexedLineSet();
SoIndexedLineSet518->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate519 = new SoCoordinate();
SoCoordinate519->setPoint(new float[]{0.0,1.381,-0.1235,0.0,1.41,-0.1235}, 6);
SoIndexedLineSet518->setCoord(*SoCoordinate519);

SoShape516->setGeometry(*SoIndexedLineSet518);

SoHAnimSegment515->addChild(*SoShape516);

SoTransform* SoTransform520 = new SoTransform();
SoTransform520->setTranslation(new float[]{0.0,1.352,-0.12});
SoShape* SoShape521 = new SoShape();
SoShape521->setUSE(QString("jointbox"));
SoTransform520->addChild(*SoShape521);

SoHAnimSegment515->addChild(*SoTransform520);

SoHAnimJoint514->addChildren(*SoHAnimSegment515);

SoHAnimJoint* SoHAnimJoint522 = new SoHAnimJoint();
SoHAnimJoint522->X3DNode::setName(QString("vt5"));
SoHAnimJoint522->setDEF(QString("Joe_vt5"));
SoHAnimJoint522->setCenter(new float[]{0.0,1.381,-0.1235});
SoHAnimSegment* SoHAnimSegment523 = new SoHAnimSegment();
SoHAnimSegment523->X3DNode::setName(QString("t5"));
SoHAnimSegment523->setDEF(QString("Joe_t5"));
SoShape* SoShape524 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance525 = new SoVRMLAppearance();
SoVRMLAppearance525->setUSE(QString("SegmentLine"));
SoShape524->addChild(*SoVRMLAppearance525);

SoIndexedLineSet* SoIndexedLineSet526 = new SoIndexedLineSet();
SoIndexedLineSet526->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate527 = new SoCoordinate();
SoCoordinate527->setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
SoIndexedLineSet526->setCoord(*SoCoordinate527);

SoShape524->setGeometry(*SoIndexedLineSet526);

SoHAnimSegment523->addChild(*SoShape524);

SoTransform* SoTransform528 = new SoTransform();
SoTransform528->setTranslation(new float[]{0.0,1.381,-0.1235});
SoShape* SoShape529 = new SoShape();
SoShape529->setUSE(QString("jointbox"));
SoTransform528->addChild(*SoShape529);

SoHAnimSegment523->addChild(*SoTransform528);

SoHAnimJoint522->addChildren(*SoHAnimSegment523);

SoHAnimJoint* SoHAnimJoint530 = new SoHAnimJoint();
SoHAnimJoint530->X3DNode::setName(QString("vt4"));
SoHAnimJoint530->setDEF(QString("Joe_vt4"));
SoHAnimJoint530->setCenter(new float[]{0.0,1.41,-0.1235});
SoHAnimJoint530->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint530->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment531 = new SoHAnimSegment();
SoHAnimSegment531->X3DNode::setName(QString("t4"));
SoHAnimSegment531->setDEF(QString("Joe_t4"));
SoShape* SoShape532 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance533 = new SoVRMLAppearance();
SoVRMLAppearance533->setUSE(QString("SegmentLine"));
SoShape532->addChild(*SoVRMLAppearance533);

SoIndexedLineSet* SoIndexedLineSet534 = new SoIndexedLineSet();
SoIndexedLineSet534->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate535 = new SoCoordinate();
SoCoordinate535->setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
SoIndexedLineSet534->setCoord(*SoCoordinate535);

SoShape532->setGeometry(*SoIndexedLineSet534);

SoHAnimSegment531->addChild(*SoShape532);

SoTransform* SoTransform536 = new SoTransform();
SoTransform536->setTranslation(new float[]{0.0,1.41,-0.1235});
SoShape* SoShape537 = new SoShape();
SoShape537->setUSE(QString("jointbox"));
SoTransform536->addChild(*SoShape537);

SoHAnimSegment531->addChild(*SoTransform536);

SoTransform* SoTransform538 = new SoTransform();
SoTransform538->setTranslation(new float[]{0.0,1.41,-0.145});
SoShape* SoShape539 = new SoShape();
SoShape539->setUSE(QString("skinsphere"));
SoTransform538->addChild(*SoShape539);

SoHAnimSegment531->addChild(*SoTransform538);

SoHAnimJoint530->addChildren(*SoHAnimSegment531);

SoHAnimJoint* SoHAnimJoint540 = new SoHAnimJoint();
SoHAnimJoint540->X3DNode::setName(QString("vt3"));
SoHAnimJoint540->setDEF(QString("Joe_vt3"));
SoHAnimJoint540->setCenter(new float[]{0.0,1.438,-0.12});
SoHAnimSegment* SoHAnimSegment541 = new SoHAnimSegment();
SoHAnimSegment541->X3DNode::setName(QString("t3"));
SoHAnimSegment541->setDEF(QString("Joe_t3"));
SoShape* SoShape542 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance543 = new SoVRMLAppearance();
SoVRMLAppearance543->setUSE(QString("SegmentLine"));
SoShape542->addChild(*SoVRMLAppearance543);

SoIndexedLineSet* SoIndexedLineSet544 = new SoIndexedLineSet();
SoIndexedLineSet544->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate545 = new SoCoordinate();
SoCoordinate545->setPoint(new float[]{0.0,1.438,-0.12,0.0,1.468,-0.105}, 6);
SoIndexedLineSet544->setCoord(*SoCoordinate545);

SoShape542->setGeometry(*SoIndexedLineSet544);

SoHAnimSegment541->addChild(*SoShape542);

SoTransform* SoTransform546 = new SoTransform();
SoTransform546->setTranslation(new float[]{0.0,1.438,-0.12});
SoShape* SoShape547 = new SoShape();
SoShape547->setUSE(QString("jointbox"));
SoTransform546->addChild(*SoShape547);

SoHAnimSegment541->addChild(*SoTransform546);

SoHAnimJoint540->addChildren(*SoHAnimSegment541);

SoHAnimJoint* SoHAnimJoint548 = new SoHAnimJoint();
SoHAnimJoint548->X3DNode::setName(QString("vt2"));
SoHAnimJoint548->setDEF(QString("Joe_vt2"));
SoHAnimJoint548->setCenter(new float[]{0.0,1.468,-0.105});
SoHAnimSegment* SoHAnimSegment549 = new SoHAnimSegment();
SoHAnimSegment549->X3DNode::setName(QString("t2"));
SoHAnimSegment549->setDEF(QString("Joe_t2"));
SoShape* SoShape550 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance551 = new SoVRMLAppearance();
SoVRMLAppearance551->setUSE(QString("SegmentLine"));
SoShape550->addChild(*SoVRMLAppearance551);

SoIndexedLineSet* SoIndexedLineSet552 = new SoIndexedLineSet();
SoIndexedLineSet552->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate553 = new SoCoordinate();
SoCoordinate553->setPoint(new float[]{0.0,1.468,-0.105,0.0,1.497,-0.09}, 6);
SoIndexedLineSet552->setCoord(*SoCoordinate553);

SoShape550->setGeometry(*SoIndexedLineSet552);

SoHAnimSegment549->addChild(*SoShape550);

SoTransform* SoTransform554 = new SoTransform();
SoTransform554->setTranslation(new float[]{0.0,1.468,-0.105});
SoShape* SoShape555 = new SoShape();
SoShape555->setUSE(QString("jointbox"));
SoTransform554->addChild(*SoShape555);

SoHAnimSegment549->addChild(*SoTransform554);

SoHAnimJoint548->addChildren(*SoHAnimSegment549);

SoHAnimJoint* SoHAnimJoint556 = new SoHAnimJoint();
SoHAnimJoint556->X3DNode::setName(QString("vt1"));
SoHAnimJoint556->setDEF(QString("Joe_vt1"));
SoHAnimJoint556->setCenter(new float[]{0.0,1.497,-0.09});
SoHAnimJoint556->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint556->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment557 = new SoHAnimSegment();
SoHAnimSegment557->X3DNode::setName(QString("t1"));
SoHAnimSegment557->setDEF(QString("Joe_t1"));
SoShape* SoShape558 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance559 = new SoVRMLAppearance();
SoVRMLAppearance559->setUSE(QString("SegmentLine"));
SoShape558->addChild(*SoVRMLAppearance559);

SoIndexedLineSet* SoIndexedLineSet560 = new SoIndexedLineSet();
SoIndexedLineSet560->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate561 = new SoCoordinate();
SoCoordinate561->setPoint(new float[]{0.0,1.497,-0.09,0.0,1.525,-0.072}, 6);
SoIndexedLineSet560->setCoord(*SoCoordinate561);

SoShape558->setGeometry(*SoIndexedLineSet560);

SoHAnimSegment557->addChild(*SoShape558);

SoTransform* SoTransform562 = new SoTransform();
SoTransform562->setTranslation(new float[]{0.0,1.497,-0.09});
SoShape* SoShape563 = new SoShape();
SoShape563->setUSE(QString("jointbox"));
SoTransform562->addChild(*SoShape563);

SoHAnimSegment557->addChild(*SoTransform562);

SoHAnimSite* SoHAnimSite564 = new SoHAnimSite();
SoHAnimSite564->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite564->setDEF(QString("Joe_suprasternale_pt"));
SoHAnimSite564->setTranslation(new float[]{0.0,1.44,0.03});
SoShape* SoShape565 = new SoShape();
SoShape565->setUSE(QString("sitebox"));
SoHAnimSite564->addChild(*SoShape565);

SoHAnimSegment557->addChild(*SoHAnimSite564);

SoHAnimSite* SoHAnimSite566 = new SoHAnimSite();
SoHAnimSite566->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite566->setDEF(QString("Joe_cervicale_pt"));
SoHAnimSite566->setTranslation(new float[]{0.0,1.53,-0.084});
SoShape* SoShape567 = new SoShape();
SoShape567->setUSE(QString("sitebox"));
SoHAnimSite566->addChild(*SoShape567);

SoHAnimSegment557->addChild(*SoHAnimSite566);

SoHAnimJoint556->addChildren(*SoHAnimSegment557);

SoHAnimJoint* SoHAnimJoint568 = new SoHAnimJoint();
SoHAnimJoint568->X3DNode::setName(QString("vc7"));
SoHAnimJoint568->setDEF(QString("Joe_vc7"));
SoHAnimJoint568->setCenter(new float[]{0.0,1.525,-0.072});
SoHAnimJoint568->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint568->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment569 = new SoHAnimSegment();
SoHAnimSegment569->X3DNode::setName(QString("c7"));
SoHAnimSegment569->setDEF(QString("Joe_c7"));
SoShape* SoShape570 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance571 = new SoVRMLAppearance();
SoVRMLAppearance571->setUSE(QString("SegmentLine"));
SoShape570->addChild(*SoVRMLAppearance571);

SoIndexedLineSet* SoIndexedLineSet572 = new SoIndexedLineSet();
SoIndexedLineSet572->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate573 = new SoCoordinate();
SoCoordinate573->setPoint(new float[]{0.0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0.0,1.54,-0.05}, 12);
SoIndexedLineSet572->setCoord(*SoCoordinate573);

SoShape570->setGeometry(*SoIndexedLineSet572);

SoHAnimSegment569->addChild(*SoShape570);

SoTransform* SoTransform574 = new SoTransform();
SoTransform574->setTranslation(new float[]{0.0,1.525,-0.072});
SoShape* SoShape575 = new SoShape();
SoShape575->setUSE(QString("jointbox"));
SoTransform574->addChild(*SoShape575);

SoHAnimSegment569->addChild(*SoTransform574);

SoHAnimSite* SoHAnimSite576 = new SoHAnimSite();
SoHAnimSite576->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite576->setDEF(QString("Joe_r_neck_base_pt"));
SoHAnimSite576->setTranslation(new float[]{-0.0646,1.5149,-0.0385});
SoShape* SoShape577 = new SoShape();
SoShape577->setUSE(QString("sitebox"));
SoHAnimSite576->addChild(*SoShape577);

SoHAnimSegment569->addChild(*SoHAnimSite576);

SoHAnimSite* SoHAnimSite578 = new SoHAnimSite();
SoHAnimSite578->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite578->setDEF(QString("Joe_l_neck_base_pt"));
SoHAnimSite578->setTranslation(new float[]{0.0646,1.5149,-0.0385});
SoShape* SoShape579 = new SoShape();
SoShape579->setUSE(QString("sitebox"));
SoHAnimSite578->addChild(*SoShape579);

SoHAnimSegment569->addChild(*SoHAnimSite578);

SoHAnimJoint568->addChildren(*SoHAnimSegment569);

SoHAnimJoint* SoHAnimJoint580 = new SoHAnimJoint();
SoHAnimJoint580->X3DNode::setName(QString("vc6"));
SoHAnimJoint580->setDEF(QString("Joe_vc6"));
SoHAnimJoint580->setCenter(new float[]{0.0,1.54,-0.05});
SoHAnimSegment* SoHAnimSegment581 = new SoHAnimSegment();
SoHAnimSegment581->X3DNode::setName(QString("c6"));
SoHAnimSegment581->setDEF(QString("Joe_c6"));
SoShape* SoShape582 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance583 = new SoVRMLAppearance();
SoVRMLAppearance583->setUSE(QString("SegmentLine"));
SoShape582->addChild(*SoVRMLAppearance583);

SoIndexedLineSet* SoIndexedLineSet584 = new SoIndexedLineSet();
SoIndexedLineSet584->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate585 = new SoCoordinate();
SoCoordinate585->setPoint(new float[]{0.0,1.54,-0.05,0.0,1.5675,-0.0256}, 6);
SoIndexedLineSet584->setCoord(*SoCoordinate585);

SoShape582->setGeometry(*SoIndexedLineSet584);

SoHAnimSegment581->addChild(*SoShape582);

SoTransform* SoTransform586 = new SoTransform();
SoTransform586->setTranslation(new float[]{0.0,1.54,-0.05});
SoShape* SoShape587 = new SoShape();
SoShape587->setUSE(QString("jointbox"));
SoTransform586->addChild(*SoShape587);

SoHAnimSegment581->addChild(*SoTransform586);

SoHAnimJoint580->addChildren(*SoHAnimSegment581);

SoHAnimJoint* SoHAnimJoint588 = new SoHAnimJoint();
SoHAnimJoint588->X3DNode::setName(QString("vc5"));
SoHAnimJoint588->setDEF(QString("Joe_vc5"));
SoHAnimJoint588->setCenter(new float[]{0.0,1.552,-0.035});
SoHAnimSegment* SoHAnimSegment589 = new SoHAnimSegment();
SoHAnimSegment589->X3DNode::setName(QString("c5"));
SoHAnimSegment589->setDEF(QString("Joe_c5"));
SoTransform* SoTransform590 = new SoTransform();
SoTransform590->setTranslation(new float[]{0.0,1.552,-0.035});
SoShape* SoShape591 = new SoShape();
SoShape591->setUSE(QString("jointbox"));
SoTransform590->addChild(*SoShape591);

SoHAnimSegment589->addChild(*SoTransform590);

SoShape* SoShape592 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance593 = new SoVRMLAppearance();
SoVRMLAppearance593->setUSE(QString("SegmentLine"));
SoShape592->addChild(*SoVRMLAppearance593);

SoIndexedLineSet* SoIndexedLineSet594 = new SoIndexedLineSet();
SoIndexedLineSet594->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate595 = new SoCoordinate();
SoCoordinate595->setPoint(new float[]{0.0,1.5675,-0.0256,0.0,1.5823,-0.0185}, 6);
SoIndexedLineSet594->setCoord(*SoCoordinate595);

SoShape592->setGeometry(*SoIndexedLineSet594);

SoHAnimSegment589->addChild(*SoShape592);

SoHAnimJoint588->addChildren(*SoHAnimSegment589);

SoHAnimJoint* SoHAnimJoint596 = new SoHAnimJoint();
SoHAnimJoint596->X3DNode::setName(QString("vc4"));
SoHAnimJoint596->setDEF(QString("Joe_vc4"));
SoHAnimJoint596->setCenter(new float[]{0.0,1.5675,-0.0256});
SoHAnimSegment* SoHAnimSegment597 = new SoHAnimSegment();
SoHAnimSegment597->X3DNode::setName(QString("c4"));
SoHAnimSegment597->setDEF(QString("Joe_c4"));
SoShape* SoShape598 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance599 = new SoVRMLAppearance();
SoVRMLAppearance599->setUSE(QString("SegmentLine"));
SoShape598->addChild(*SoVRMLAppearance599);

SoIndexedLineSet* SoIndexedLineSet600 = new SoIndexedLineSet();
SoIndexedLineSet600->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate601 = new SoCoordinate();
SoCoordinate601->setPoint(new float[]{0.0,1.5823,-0.0185,0.0,1.595,-0.0175}, 6);
SoIndexedLineSet600->setCoord(*SoCoordinate601);

SoShape598->setGeometry(*SoIndexedLineSet600);

SoHAnimSegment597->addChild(*SoShape598);

SoTransform* SoTransform602 = new SoTransform();
SoTransform602->setTranslation(new float[]{0.0,1.5675,-0.0256});
SoShape* SoShape603 = new SoShape();
SoShape603->setUSE(QString("jointbox"));
SoTransform602->addChild(*SoShape603);

SoHAnimSegment597->addChild(*SoTransform602);

SoHAnimJoint596->addChildren(*SoHAnimSegment597);

SoHAnimJoint* SoHAnimJoint604 = new SoHAnimJoint();
SoHAnimJoint604->X3DNode::setName(QString("vc3"));
SoHAnimJoint604->setDEF(QString("Joe_vc3"));
SoHAnimJoint604->setCenter(new float[]{0.0,1.5823,-0.0185});
SoHAnimSegment* SoHAnimSegment605 = new SoHAnimSegment();
SoHAnimSegment605->X3DNode::setName(QString("c3"));
SoHAnimSegment605->setDEF(QString("Joe_c3"));
SoShape* SoShape606 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance607 = new SoVRMLAppearance();
SoVRMLAppearance607->setUSE(QString("SegmentLine"));
SoShape606->addChild(*SoVRMLAppearance607);

SoIndexedLineSet* SoIndexedLineSet608 = new SoIndexedLineSet();
SoIndexedLineSet608->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate609 = new SoCoordinate();
SoCoordinate609->setPoint(new float[]{0.0,1.595,-0.0175,0.0,1.61,-0.015}, 6);
SoIndexedLineSet608->setCoord(*SoCoordinate609);

SoShape606->setGeometry(*SoIndexedLineSet608);

SoHAnimSegment605->addChild(*SoShape606);

SoTransform* SoTransform610 = new SoTransform();
SoTransform610->setTranslation(new float[]{0.0,1.5823,-0.0185});
SoShape* SoShape611 = new SoShape();
SoShape611->setUSE(QString("jointbox"));
SoTransform610->addChild(*SoShape611);

SoHAnimSegment605->addChild(*SoTransform610);

SoHAnimJoint604->addChildren(*SoHAnimSegment605);

SoHAnimJoint* SoHAnimJoint612 = new SoHAnimJoint();
SoHAnimJoint612->X3DNode::setName(QString("vc2"));
SoHAnimJoint612->setDEF(QString("Joe_vc2"));
SoHAnimJoint612->setCenter(new float[]{0.0,1.595,-0.0175});
SoHAnimSegment* SoHAnimSegment613 = new SoHAnimSegment();
SoHAnimSegment613->X3DNode::setName(QString("c2"));
SoHAnimSegment613->setDEF(QString("Joe_c2"));
SoShape* SoShape614 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance615 = new SoVRMLAppearance();
SoVRMLAppearance615->setUSE(QString("SegmentLine"));
SoShape614->addChild(*SoVRMLAppearance615);

SoIndexedLineSet* SoIndexedLineSet616 = new SoIndexedLineSet();
SoIndexedLineSet616->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate617 = new SoCoordinate();
SoCoordinate617->setPoint(new float[]{0.0,1.61,-0.015,0.0,1.6144,-0.0034}, 6);
SoIndexedLineSet616->setCoord(*SoCoordinate617);

SoShape614->setGeometry(*SoIndexedLineSet616);

SoHAnimSegment613->addChild(*SoShape614);

SoTransform* SoTransform618 = new SoTransform();
SoTransform618->setTranslation(new float[]{0.0,1.595,-0.0175});
SoShape* SoShape619 = new SoShape();
SoShape619->setUSE(QString("jointbox"));
SoTransform618->addChild(*SoShape619);

SoHAnimSegment613->addChild(*SoTransform618);

SoHAnimJoint612->addChildren(*SoHAnimSegment613);

SoHAnimJoint* SoHAnimJoint620 = new SoHAnimJoint();
SoHAnimJoint620->X3DNode::setName(QString("vc1"));
SoHAnimJoint620->setDEF(QString("Joe_vc1"));
SoHAnimJoint620->setCenter(new float[]{0.0,1.61,-0.015});
SoHAnimSegment* SoHAnimSegment621 = new SoHAnimSegment();
SoHAnimSegment621->X3DNode::setName(QString("c1"));
SoHAnimSegment621->setDEF(QString("Joe_c1"));
SoShape* SoShape622 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance623 = new SoVRMLAppearance();
SoVRMLAppearance623->setUSE(QString("SegmentLine"));
SoShape622->addChild(*SoVRMLAppearance623);

SoIndexedLineSet* SoIndexedLineSet624 = new SoIndexedLineSet();
SoIndexedLineSet624->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate625 = new SoCoordinate();
SoCoordinate625->setPoint(new float[]{0.0,1.6144,-0.0034,0.0,1.63,-0.01}, 6);
SoIndexedLineSet624->setCoord(*SoCoordinate625);

SoShape622->setGeometry(*SoIndexedLineSet624);

SoHAnimSegment621->addChild(*SoShape622);

SoTransform* SoTransform626 = new SoTransform();
SoTransform626->setTranslation(new float[]{0.0,1.61,-0.015});
SoShape* SoShape627 = new SoShape();
SoShape627->setUSE(QString("jointbox"));
SoTransform626->addChild(*SoShape627);

SoHAnimSegment621->addChild(*SoTransform626);

SoHAnimJoint620->addChildren(*SoHAnimSegment621);

SoHAnimJoint* SoHAnimJoint628 = new SoHAnimJoint();
SoHAnimJoint628->X3DNode::setName(QString("skullbase"));
SoHAnimJoint628->setDEF(QString("Joe_skullbase"));
SoHAnimJoint628->setCenter(new float[]{0.0,1.63,-0.01});
SoHAnimJoint628->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint628->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimSegment* SoHAnimSegment629 = new SoHAnimSegment();
SoHAnimSegment629->X3DNode::setName(QString("skull"));
SoHAnimSegment629->setDEF(QString("Joe_skull"));
SoShape* SoShape630 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance631 = new SoVRMLAppearance();
SoVRMLAppearance631->setUSE(QString("SegmentLine"));
SoShape630->addChild(*SoVRMLAppearance631);

SoIndexedLineSet* SoIndexedLineSet632 = new SoIndexedLineSet();
SoIndexedLineSet632->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1}, 6);
SoCoordinate* SoCoordinate633 = new SoCoordinate();
SoCoordinate633->setPoint(new float[]{0.0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065}, 9);
SoIndexedLineSet632->setCoord(*SoCoordinate633);

SoShape630->setGeometry(*SoIndexedLineSet632);

SoHAnimSegment629->addChild(*SoShape630);

SoTransform* SoTransform634 = new SoTransform();
SoTransform634->setTranslation(new float[]{0.0,1.63,-0.01});
SoShape* SoShape635 = new SoShape();
SoShape635->setUSE(QString("jointbox"));
SoTransform634->addChild(*SoShape635);

SoHAnimSegment629->addChild(*SoTransform634);

SoHAnimSite* SoHAnimSite636 = new SoHAnimSite();
SoHAnimSite636->X3DNode::setName(QString("skull_vertex_tip"));
SoHAnimSite636->setDEF(QString("Joe_skull_vertex_tip"));
SoHAnimSite636->setTranslation(new float[]{0.0,1.77,0.0});
SoShape* SoShape637 = new SoShape();
SoShape637->setUSE(QString("sitebox"));
SoHAnimSite636->addChild(*SoShape637);

SoHAnimSegment629->addChild(*SoHAnimSite636);

SoHAnimSite* SoHAnimSite638 = new SoHAnimSite();
SoHAnimSite638->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite638->setDEF(QString("Joe_sellion_pt"));
SoHAnimSite638->setTranslation(new float[]{0.0,1.665,0.09});
SoShape* SoShape639 = new SoShape();
SoShape639->setUSE(QString("sitebox"));
SoHAnimSite638->addChild(*SoShape639);

SoHAnimSegment629->addChild(*SoHAnimSite638);

SoHAnimSite* SoHAnimSite640 = new SoHAnimSite();
SoHAnimSite640->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite640->setDEF(QString("Joe_r_infraorbitale_pt"));
SoHAnimSite640->setTranslation(new float[]{-0.033,1.62,0.087});
SoShape* SoShape641 = new SoShape();
SoShape641->setUSE(QString("sitebox"));
SoHAnimSite640->addChild(*SoShape641);

SoHAnimSegment629->addChild(*SoHAnimSite640);

SoHAnimSite* SoHAnimSite642 = new SoHAnimSite();
SoHAnimSite642->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite642->setDEF(QString("Joe_l_infraorbitale_pt"));
SoHAnimSite642->setTranslation(new float[]{0.033,1.62,0.087});
SoShape* SoShape643 = new SoShape();
SoShape643->setUSE(QString("sitebox"));
SoHAnimSite642->addChild(*SoShape643);

SoHAnimSegment629->addChild(*SoHAnimSite642);

SoHAnimSite* SoHAnimSite644 = new SoHAnimSite();
SoHAnimSite644->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite644->setDEF(QString("Joe_supramenton_pt"));
SoHAnimSite644->setTranslation(new float[]{0.0,1.55,0.097});
SoShape* SoShape645 = new SoShape();
SoShape645->setUSE(QString("sitebox"));
SoHAnimSite644->addChild(*SoShape645);

SoHAnimSegment629->addChild(*SoHAnimSite644);

SoHAnimSite* SoHAnimSite646 = new SoHAnimSite();
SoHAnimSite646->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite646->setDEF(QString("Joe_r_tragion_pt"));
SoHAnimSite646->setTranslation(new float[]{-0.077,1.64,-0.01});
SoShape* SoShape647 = new SoShape();
SoShape647->setUSE(QString("sitebox"));
SoHAnimSite646->addChild(*SoShape647);

SoHAnimSegment629->addChild(*SoHAnimSite646);

SoHAnimSite* SoHAnimSite648 = new SoHAnimSite();
SoHAnimSite648->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite648->setDEF(QString("Joe_r_gonion_pt"));
SoHAnimSite648->setTranslation(new float[]{-0.052,1.58,0.015});
SoShape* SoShape649 = new SoShape();
SoShape649->setUSE(QString("sitebox"));
SoHAnimSite648->addChild(*SoShape649);

SoHAnimSegment629->addChild(*SoHAnimSite648);

SoHAnimSite* SoHAnimSite650 = new SoHAnimSite();
SoHAnimSite650->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite650->setDEF(QString("Joe_l_tragion_pt"));
SoHAnimSite650->setTranslation(new float[]{0.077,1.64,-0.01});
SoShape* SoShape651 = new SoShape();
SoShape651->setUSE(QString("sitebox"));
SoHAnimSite650->addChild(*SoShape651);

SoHAnimSegment629->addChild(*SoHAnimSite650);

SoHAnimSite* SoHAnimSite652 = new SoHAnimSite();
SoHAnimSite652->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite652->setDEF(QString("Joe_l_gonion_pt"));
SoHAnimSite652->setTranslation(new float[]{0.0631,1.58,0.015});
SoShape* SoShape653 = new SoShape();
SoShape653->setUSE(QString("sitebox"));
SoHAnimSite652->addChild(*SoShape653);

SoHAnimSegment629->addChild(*SoHAnimSite652);

SoHAnimSite* SoHAnimSite654 = new SoHAnimSite();
SoHAnimSite654->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite654->setDEF(QString("Joe_nuchale_pt"));
SoHAnimSite654->setTranslation(new float[]{0.0,1.625,-0.0925});
SoShape* SoShape655 = new SoShape();
SoShape655->setUSE(QString("sitebox"));
SoHAnimSite654->addChild(*SoShape655);

SoHAnimSegment629->addChild(*SoHAnimSite654);

SoHAnimJoint628->addChildren(*SoHAnimSegment629);

SoHAnimJoint* SoHAnimJoint656 = new SoHAnimJoint();
SoHAnimJoint656->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint656->setDEF(QString("Joe_l_eyeball_joint"));
SoHAnimJoint656->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimSegment* SoHAnimSegment657 = new SoHAnimSegment();
SoHAnimSegment657->X3DNode::setName(QString("l_eyeball"));
SoHAnimSegment657->setDEF(QString("Joe_l_eyeball"));
SoShape* SoShape658 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance659 = new SoVRMLAppearance();
SoVRMLAppearance659->setUSE(QString("SegmentLine"));
SoShape658->addChild(*SoVRMLAppearance659);

SoIndexedLineSet* SoIndexedLineSet660 = new SoIndexedLineSet();
SoIndexedLineSet660->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate661 = new SoCoordinate();
SoCoordinate661->setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
SoIndexedLineSet660->setCoord(*SoCoordinate661);

SoShape658->setGeometry(*SoIndexedLineSet660);

SoHAnimSegment657->addChild(*SoShape658);

SoTransform* SoTransform662 = new SoTransform();
SoTransform662->setScale(new float[]{1.0,1.0,1.4});
SoTransform662->setTranslation(new float[]{0.034,1.655,0.065});
SoShape* SoShape663 = new SoShape();
SoShape663->setUSE(QString("jointbox"));
SoTransform662->addChild(*SoShape663);

SoHAnimSegment657->addChild(*SoTransform662);

SoHAnimJoint656->addChildren(*SoHAnimSegment657);

SoHAnimJoint628->addChildren(*SoHAnimJoint656);

SoHAnimJoint* SoHAnimJoint664 = new SoHAnimJoint();
SoHAnimJoint664->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint664->setDEF(QString("Joe_r_eyeball_joint"));
SoHAnimJoint664->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimSegment* SoHAnimSegment665 = new SoHAnimSegment();
SoHAnimSegment665->X3DNode::setName(QString("r_eyeball"));
SoHAnimSegment665->setDEF(QString("Joe_r_eyeball"));
SoShape* SoShape666 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance667 = new SoVRMLAppearance();
SoVRMLAppearance667->setUSE(QString("SegmentLine"));
SoShape666->addChild(*SoVRMLAppearance667);

SoIndexedLineSet* SoIndexedLineSet668 = new SoIndexedLineSet();
SoIndexedLineSet668->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate669 = new SoCoordinate();
SoCoordinate669->setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
SoIndexedLineSet668->setCoord(*SoCoordinate669);

SoShape666->setGeometry(*SoIndexedLineSet668);

SoHAnimSegment665->addChild(*SoShape666);

SoTransform* SoTransform670 = new SoTransform();
SoTransform670->setScale(new float[]{1.0,1.0,1.4});
SoTransform670->setTranslation(new float[]{-0.034,1.655,0.065});
SoShape* SoShape671 = new SoShape();
SoShape671->setUSE(QString("jointbox"));
SoTransform670->addChild(*SoShape671);

SoHAnimSegment665->addChild(*SoTransform670);

SoHAnimJoint664->addChildren(*SoHAnimSegment665);

SoHAnimJoint628->addChildren(*SoHAnimJoint664);

SoHAnimJoint620->addChildren(*SoHAnimJoint628);

SoHAnimJoint612->addChildren(*SoHAnimJoint620);

SoHAnimJoint604->addChildren(*SoHAnimJoint612);

SoHAnimJoint596->addChildren(*SoHAnimJoint604);

SoHAnimJoint588->addChildren(*SoHAnimJoint596);

SoHAnimJoint580->addChildren(*SoHAnimJoint588);

SoHAnimJoint568->addChildren(*SoHAnimJoint580);

SoHAnimJoint556->addChildren(*SoHAnimJoint568);

SoHAnimJoint* SoHAnimJoint672 = new SoHAnimJoint();
SoHAnimJoint672->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint672->setDEF(QString("Joe_l_sternoclavicular"));
SoHAnimJoint672->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint672->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint672->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment673 = new SoHAnimSegment();
SoHAnimSegment673->X3DNode::setName(QString("l_clavicle"));
SoHAnimSegment673->setDEF(QString("Joe_l_clavicle"));
SoShape* SoShape674 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance675 = new SoVRMLAppearance();
SoVRMLAppearance675->setUSE(QString("SegmentLine"));
SoShape674->addChild(*SoVRMLAppearance675);

SoIndexedLineSet* SoIndexedLineSet676 = new SoIndexedLineSet();
SoIndexedLineSet676->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate677 = new SoCoordinate();
SoCoordinate677->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoIndexedLineSet676->setCoord(*SoCoordinate677);

SoShape674->setGeometry(*SoIndexedLineSet676);

SoHAnimSegment673->addChild(*SoShape674);

SoTransform* SoTransform678 = new SoTransform();
SoTransform678->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoShape* SoShape679 = new SoShape();
SoShape679->setUSE(QString("jointbox"));
SoTransform678->addChild(*SoShape679);

SoHAnimSegment673->addChild(*SoTransform678);

SoHAnimSite* SoHAnimSite680 = new SoHAnimSite();
SoHAnimSite680->X3DNode::setName(QString("l_clavicle_pt"));
SoHAnimSite680->setDEF(QString("Joe_l_clavicle_pt"));
SoHAnimSite680->setTranslation(new float[]{0.03,1.46,0.035});
SoShape* SoShape681 = new SoShape();
SoShape681->setUSE(QString("sitebox"));
SoHAnimSite680->addChild(*SoShape681);

SoHAnimSegment673->addChild(*SoHAnimSite680);

SoHAnimJoint672->addChildren(*SoHAnimSegment673);

SoHAnimJoint* SoHAnimJoint682 = new SoHAnimJoint();
SoHAnimJoint682->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint682->setDEF(QString("Joe_l_acromioclavicular"));
SoHAnimJoint682->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint682->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint682->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment683 = new SoHAnimSegment();
SoHAnimSegment683->X3DNode::setName(QString("l_scapula"));
SoHAnimSegment683->setDEF(QString("Joe_l_scapula"));
SoShape* SoShape684 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance685 = new SoVRMLAppearance();
SoVRMLAppearance685->setUSE(QString("SegmentLine"));
SoShape684->addChild(*SoVRMLAppearance685);

SoIndexedLineSet* SoIndexedLineSet686 = new SoIndexedLineSet();
SoIndexedLineSet686->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate687 = new SoCoordinate();
SoCoordinate687->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2,1.44,-0.04}, 6);
SoIndexedLineSet686->setCoord(*SoCoordinate687);

SoShape684->setGeometry(*SoIndexedLineSet686);

SoHAnimSegment683->addChild(*SoShape684);

SoTransform* SoTransform688 = new SoTransform();
SoTransform688->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoShape* SoShape689 = new SoShape();
SoShape689->setUSE(QString("jointbox"));
SoTransform688->addChild(*SoShape689);

SoHAnimSegment683->addChild(*SoTransform688);

SoTransform* SoTransform690 = new SoTransform();
SoTransform690->setTranslation(new float[]{0.11,1.427,-0.1375});
SoShape* SoShape691 = new SoShape();
SoShape691->setUSE(QString("skinsphere"));
SoTransform690->addChild(*SoShape691);

SoHAnimSegment683->addChild(*SoTransform690);

SoHAnimSite* SoHAnimSite692 = new SoHAnimSite();
SoHAnimSite692->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite692->setDEF(QString("Joe_l_acromion_pt"));
SoHAnimSite692->setTranslation(new float[]{0.175,1.4825,-0.06});
SoShape* SoShape693 = new SoShape();
SoShape693->setUSE(QString("sitebox"));
SoHAnimSite692->addChild(*SoShape693);

SoHAnimSegment683->addChild(*SoHAnimSite692);

SoHAnimSite* SoHAnimSite694 = new SoHAnimSite();
SoHAnimSite694->X3DNode::setName(QString("l_axilla_proximal_pt"));
SoHAnimSite694->setDEF(QString("Joe_l_axilla_proximal_pt"));
SoHAnimSite694->setTranslation(new float[]{0.17,1.38,0.007});
SoShape* SoShape695 = new SoShape();
SoShape695->setUSE(QString("sitebox"));
SoHAnimSite694->addChild(*SoShape695);

SoHAnimSegment683->addChild(*SoHAnimSite694);

SoHAnimSite* SoHAnimSite696 = new SoHAnimSite();
SoHAnimSite696->X3DNode::setName(QString("l_axilla_distal_pt"));
SoHAnimSite696->setDEF(QString("Joe_l_axilla_distal_pt"));
SoHAnimSite696->setTranslation(new float[]{0.16,1.38,-0.125});
SoShape* SoShape697 = new SoShape();
SoShape697->setUSE(QString("sitebox"));
SoHAnimSite696->addChild(*SoShape697);

SoHAnimSegment683->addChild(*SoHAnimSite696);

SoHAnimJoint682->addChildren(*SoHAnimSegment683);

SoHAnimJoint* SoHAnimJoint698 = new SoHAnimJoint();
SoHAnimJoint698->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint698->setDEF(QString("Joe_l_shoulder"));
SoHAnimJoint698->setCenter(new float[]{0.2,1.44,-0.04});
SoHAnimJoint698->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint698->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment699 = new SoHAnimSegment();
SoHAnimSegment699->X3DNode::setName(QString("l_upperarm"));
SoHAnimSegment699->setDEF(QString("Joe_l_upperarm"));
SoShape* SoShape700 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance701 = new SoVRMLAppearance();
SoVRMLAppearance701->setUSE(QString("SegmentLine"));
SoShape700->addChild(*SoVRMLAppearance701);

SoIndexedLineSet* SoIndexedLineSet702 = new SoIndexedLineSet();
SoIndexedLineSet702->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate703 = new SoCoordinate();
SoCoordinate703->setPoint(new float[]{0.2029,1.44,-0.0387,0.2,1.1388,-0.04}, 6);
SoIndexedLineSet702->setCoord(*SoCoordinate703);

SoShape700->setGeometry(*SoIndexedLineSet702);

SoHAnimSegment699->addChild(*SoShape700);

SoTransform* SoTransform704 = new SoTransform();
SoTransform704->setTranslation(new float[]{0.2,1.44,-0.04});
SoShape* SoShape705 = new SoShape();
SoShape705->setUSE(QString("jointbox"));
SoTransform704->addChild(*SoShape705);

SoHAnimSegment699->addChild(*SoTransform704);

SoTransform* SoTransform706 = new SoTransform();
SoTransform706->setTranslation(new float[]{0.235,1.42,-0.0625});
SoShape* SoShape707 = new SoShape();
SoShape707->setUSE(QString("skinsphere"));
SoTransform706->addChild(*SoShape707);

SoHAnimSegment699->addChild(*SoTransform706);

SoTransform* SoTransform708 = new SoTransform();
SoTransform708->setTranslation(new float[]{0.25,1.27,-0.04});
SoShape* SoShape709 = new SoShape();
SoShape709->setUSE(QString("skinsphere"));
SoTransform708->addChild(*SoShape709);

SoHAnimSegment699->addChild(*SoTransform708);

SoTransform* SoTransform710 = new SoTransform();
SoTransform710->setTranslation(new float[]{0.17,1.27,-0.04});
SoShape* SoShape711 = new SoShape();
SoShape711->setUSE(QString("skinsphere"));
SoTransform710->addChild(*SoShape711);

SoHAnimSegment699->addChild(*SoTransform710);

SoTransform* SoTransform712 = new SoTransform();
SoTransform712->setTranslation(new float[]{0.2,1.27,-0.09});
SoShape* SoShape713 = new SoShape();
SoShape713->setUSE(QString("skinsphere"));
SoTransform712->addChild(*SoShape713);

SoHAnimSegment699->addChild(*SoTransform712);

SoTransform* SoTransform714 = new SoTransform();
SoTransform714->setTranslation(new float[]{0.2,1.27,0.02});
SoShape* SoShape715 = new SoShape();
SoShape715->setUSE(QString("skinsphere"));
SoTransform714->addChild(*SoShape715);

SoHAnimSegment699->addChild(*SoTransform714);

SoHAnimSite* SoHAnimSite716 = new SoHAnimSite();
SoHAnimSite716->X3DNode::setName(QString("l_humeral_medial_epicondyle_pt"));
SoHAnimSite716->setDEF(QString("Joe_l_humeral_medial_epicondyle_pt"));
SoHAnimSite716->setTranslation(new float[]{0.165,1.1388,-0.04});
SoShape* SoShape717 = new SoShape();
SoShape717->setUSE(QString("sitebox"));
SoHAnimSite716->addChild(*SoShape717);

SoHAnimSegment699->addChild(*SoHAnimSite716);

SoHAnimSite* SoHAnimSite718 = new SoHAnimSite();
SoHAnimSite718->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite718->setDEF(QString("Joe_l_radiale_pt"));
SoHAnimSite718->setTranslation(new float[]{0.23,1.133,-0.055});
SoShape* SoShape719 = new SoShape();
SoShape719->setUSE(QString("sitebox"));
SoHAnimSite718->addChild(*SoShape719);

SoHAnimSegment699->addChild(*SoHAnimSite718);

SoHAnimSite* SoHAnimSite720 = new SoHAnimSite();
SoHAnimSite720->X3DNode::setName(QString("l_humeral_lateral_epicondyle_pt"));
SoHAnimSite720->setDEF(QString("Joe_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite720->setTranslation(new float[]{0.244,1.1388,-0.04});
SoShape* SoShape721 = new SoShape();
SoShape721->setUSE(QString("sitebox"));
SoHAnimSite720->addChild(*SoShape721);

SoHAnimSegment699->addChild(*SoHAnimSite720);

SoHAnimJoint698->addChildren(*SoHAnimSegment699);

SoHAnimJoint* SoHAnimJoint722 = new SoHAnimJoint();
SoHAnimJoint722->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint722->setDEF(QString("Joe_l_elbow"));
SoHAnimJoint722->setCenter(new float[]{0.2,1.1388,-0.04});
SoHAnimJoint722->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint722->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimSegment* SoHAnimSegment723 = new SoHAnimSegment();
SoHAnimSegment723->X3DNode::setName(QString("l_forearm"));
SoHAnimSegment723->setDEF(QString("Joe_l_forearm"));
SoShape* SoShape724 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance725 = new SoVRMLAppearance();
SoVRMLAppearance725->setUSE(QString("SegmentLine"));
SoShape724->addChild(*SoVRMLAppearance725);

SoIndexedLineSet* SoIndexedLineSet726 = new SoIndexedLineSet();
SoIndexedLineSet726->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate727 = new SoCoordinate();
SoCoordinate727->setPoint(new float[]{0.2,1.1388,-0.04,0.2,0.87,-0.04}, 6);
SoIndexedLineSet726->setCoord(*SoCoordinate727);

SoShape724->setGeometry(*SoIndexedLineSet726);

SoHAnimSegment723->addChild(*SoShape724);

SoTransform* SoTransform728 = new SoTransform();
SoTransform728->setTranslation(new float[]{0.2,1.1388,-0.04});
SoShape* SoShape729 = new SoShape();
SoShape729->setUSE(QString("jointbox"));
SoTransform728->addChild(*SoShape729);

SoHAnimSegment723->addChild(*SoTransform728);

SoTransform* SoTransform730 = new SoTransform();
SoTransform730->setTranslation(new float[]{0.2,1.1388,-0.013});
SoShape* SoShape731 = new SoShape();
SoShape731->setUSE(QString("skinsphere"));
SoTransform730->addChild(*SoShape731);

SoHAnimSegment723->addChild(*SoTransform730);

SoTransform* SoTransform732 = new SoTransform();
SoTransform732->setTranslation(new float[]{0.225,1.0,-0.01});
SoShape* SoShape733 = new SoShape();
SoShape733->setUSE(QString("skinsphere"));
SoTransform732->addChild(*SoShape733);

SoHAnimSegment723->addChild(*SoTransform732);

SoTransform* SoTransform734 = new SoTransform();
SoTransform734->setTranslation(new float[]{0.225,1.0,-0.07});
SoShape* SoShape735 = new SoShape();
SoShape735->setUSE(QString("skinsphere"));
SoTransform734->addChild(*SoShape735);

SoHAnimSegment723->addChild(*SoTransform734);

SoTransform* SoTransform736 = new SoTransform();
SoTransform736->setTranslation(new float[]{0.185,1.0,-0.01});
SoShape* SoShape737 = new SoShape();
SoShape737->setUSE(QString("skinsphere"));
SoTransform736->addChild(*SoShape737);

SoHAnimSegment723->addChild(*SoTransform736);

SoTransform* SoTransform738 = new SoTransform();
SoTransform738->setTranslation(new float[]{0.185,1.0,-0.07});
SoShape* SoShape739 = new SoShape();
SoShape739->setUSE(QString("skinsphere"));
SoTransform738->addChild(*SoShape739);

SoHAnimSegment723->addChild(*SoTransform738);

SoHAnimSite* SoHAnimSite740 = new SoHAnimSite();
SoHAnimSite740->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite740->setDEF(QString("Joe_l_radial_styloid_pt"));
SoHAnimSite740->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoShape* SoShape741 = new SoShape();
SoShape741->setUSE(QString("sitebox"));
SoHAnimSite740->addChild(*SoShape741);

SoHAnimSegment723->addChild(*SoHAnimSite740);

SoHAnimSite* SoHAnimSite742 = new SoHAnimSite();
SoHAnimSite742->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite742->setDEF(QString("Joe_l_olecranon_pt"));
SoHAnimSite742->setTranslation(new float[]{0.2,1.1388,-0.08});
SoShape* SoShape743 = new SoShape();
SoShape743->setUSE(QString("sitebox"));
SoHAnimSite742->addChild(*SoShape743);

SoHAnimSegment723->addChild(*SoHAnimSite742);

SoHAnimJoint722->addChildren(*SoHAnimSegment723);

SoHAnimJoint* SoHAnimJoint744 = new SoHAnimJoint();
SoHAnimJoint744->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint744->setDEF(QString("Joe_l_radiocarpal"));
SoHAnimJoint744->setCenter(new float[]{0.2,0.87,-0.04});
SoHAnimJoint744->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint744->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment745 = new SoHAnimSegment();
SoHAnimSegment745->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment745->setDEF(QString("Joe_l_carpal"));
SoShape* SoShape746 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance747 = new SoVRMLAppearance();
SoVRMLAppearance747->setUSE(QString("SegmentLine"));
SoShape746->addChild(*SoVRMLAppearance747);

SoIndexedLineSet* SoIndexedLineSet748 = new SoIndexedLineSet();
SoIndexedLineSet748->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
SoCoordinate* SoCoordinate749 = new SoCoordinate();
SoCoordinate749->setPoint(new float[]{0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036}, 18);
SoIndexedLineSet748->setCoord(*SoCoordinate749);

SoShape746->setGeometry(*SoIndexedLineSet748);

SoHAnimSegment745->addChild(*SoShape746);

SoTransform* SoTransform750 = new SoTransform();
SoTransform750->setTranslation(new float[]{0.2,0.87,-0.04});
SoShape* SoShape751 = new SoShape();
SoShape751->setUSE(QString("jointbox"));
SoTransform750->addChild(*SoShape751);

SoHAnimSegment745->addChild(*SoTransform750);

SoHAnimSite* SoHAnimSite752 = new SoHAnimSite();
SoHAnimSite752->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite752->setDEF(QString("Joe_l_metacarpal_phalanx_2_pt"));
SoHAnimSite752->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoShape* SoShape753 = new SoShape();
SoShape753->setUSE(QString("sitebox"));
SoHAnimSite752->addChild(*SoShape753);

SoHAnimSegment745->addChild(*SoHAnimSite752);

SoHAnimSite* SoHAnimSite754 = new SoHAnimSite();
SoHAnimSite754->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite754->setDEF(QString("Joe_l_ulnar_styloid_pt"));
SoHAnimSite754->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoShape* SoShape755 = new SoShape();
SoShape755->setUSE(QString("sitebox"));
SoHAnimSite754->addChild(*SoShape755);

SoHAnimSegment745->addChild(*SoHAnimSite754);

SoHAnimSite* SoHAnimSite756 = new SoHAnimSite();
SoHAnimSite756->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite756->setDEF(QString("Joe_l_metacarpal_phalanx_5_pt"));
SoHAnimSite756->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoShape* SoShape757 = new SoShape();
SoShape757->setUSE(QString("sitebox"));
SoHAnimSite756->addChild(*SoShape757);

SoHAnimSegment745->addChild(*SoHAnimSite756);

SoHAnimJoint744->addChildren(*SoHAnimSegment745);

SoHAnimJoint* SoHAnimJoint758 = new SoHAnimJoint();
SoHAnimJoint758->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint758->setDEF(QString("Joe_l_carpometacarpal_1"));
SoHAnimJoint758->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint758->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint758->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment759 = new SoHAnimSegment();
SoHAnimSegment759->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimSegment759->setDEF(QString("Joe_l_metacarpal_1"));
SoShape* SoShape760 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance761 = new SoVRMLAppearance();
SoVRMLAppearance761->setUSE(QString("SegmentLine"));
SoShape760->addChild(*SoVRMLAppearance761);

SoIndexedLineSet* SoIndexedLineSet762 = new SoIndexedLineSet();
SoIndexedLineSet762->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate763 = new SoCoordinate();
SoCoordinate763->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoIndexedLineSet762->setCoord(*SoCoordinate763);

SoShape760->setGeometry(*SoIndexedLineSet762);

SoHAnimSegment759->addChild(*SoShape760);

SoTransform* SoTransform764 = new SoTransform();
SoTransform764->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape765 = new SoShape();
SoShape765->setUSE(QString("jointbox"));
SoTransform764->addChild(*SoShape765);

SoHAnimSegment759->addChild(*SoTransform764);

SoHAnimJoint758->addChildren(*SoHAnimSegment759);

SoHAnimJoint* SoHAnimJoint766 = new SoHAnimJoint();
SoHAnimJoint766->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint766->setDEF(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimJoint766->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint766->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint766->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment767 = new SoHAnimSegment();
SoHAnimSegment767->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimSegment767->setDEF(QString("Joe_l_carpal_proximal_phalanx_1"));
SoShape* SoShape768 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance769 = new SoVRMLAppearance();
SoVRMLAppearance769->setUSE(QString("SegmentLine"));
SoShape768->addChild(*SoVRMLAppearance769);

SoIndexedLineSet* SoIndexedLineSet770 = new SoIndexedLineSet();
SoIndexedLineSet770->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate771 = new SoCoordinate();
SoCoordinate771->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoIndexedLineSet770->setCoord(*SoCoordinate771);

SoShape768->setGeometry(*SoIndexedLineSet770);

SoHAnimSegment767->addChild(*SoShape768);

SoTransform* SoTransform772 = new SoTransform();
SoTransform772->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape773 = new SoShape();
SoShape773->setUSE(QString("jointbox"));
SoTransform772->addChild(*SoShape773);

SoHAnimSegment767->addChild(*SoTransform772);

SoHAnimJoint766->addChildren(*SoHAnimSegment767);

SoHAnimJoint* SoHAnimJoint774 = new SoHAnimJoint();
SoHAnimJoint774->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint774->setDEF(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimJoint774->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint774->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint774->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment775 = new SoHAnimSegment();
SoHAnimSegment775->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSegment775->setDEF(QString("Joe_l_carpal_distal_phalanx_1"));
SoShape* SoShape776 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance777 = new SoVRMLAppearance();
SoVRMLAppearance777->setUSE(QString("SegmentLine"));
SoShape776->addChild(*SoVRMLAppearance777);

SoIndexedLineSet* SoIndexedLineSet778 = new SoIndexedLineSet();
SoIndexedLineSet778->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate779 = new SoCoordinate();
SoCoordinate779->setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
SoIndexedLineSet778->setCoord(*SoCoordinate779);

SoShape776->setGeometry(*SoIndexedLineSet778);

SoHAnimSegment775->addChild(*SoShape776);

SoTransform* SoTransform780 = new SoTransform();
SoTransform780->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape781 = new SoShape();
SoShape781->setUSE(QString("jointbox"));
SoTransform780->addChild(*SoShape781);

SoHAnimSegment775->addChild(*SoTransform780);

SoHAnimSite* SoHAnimSite782 = new SoHAnimSite();
SoHAnimSite782->X3DNode::setName(QString("l_carpal_distal_phalanx_1_tip"));
SoHAnimSite782->setDEF(QString("Joe_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite782->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoShape* SoShape783 = new SoShape();
SoShape783->setUSE(QString("sitebox"));
SoHAnimSite782->addChild(*SoShape783);

SoHAnimSegment775->addChild(*SoHAnimSite782);

SoHAnimJoint774->addChildren(*SoHAnimSegment775);

SoHAnimJoint766->addChildren(*SoHAnimJoint774);

SoHAnimJoint758->addChildren(*SoHAnimJoint766);

SoHAnimJoint744->addChildren(*SoHAnimJoint758);

SoHAnimJoint* SoHAnimJoint784 = new SoHAnimJoint();
SoHAnimJoint784->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint784->setDEF(QString("Joe_l_carpometacarpal_2"));
SoHAnimJoint784->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint784->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint784->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment785 = new SoHAnimSegment();
SoHAnimSegment785->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimSegment785->setDEF(QString("Joe_l_metacarpal_2"));
SoShape* SoShape786 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance787 = new SoVRMLAppearance();
SoVRMLAppearance787->setUSE(QString("SegmentLine"));
SoShape786->addChild(*SoVRMLAppearance787);

SoIndexedLineSet* SoIndexedLineSet788 = new SoIndexedLineSet();
SoIndexedLineSet788->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate789 = new SoCoordinate();
SoCoordinate789->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoIndexedLineSet788->setCoord(*SoCoordinate789);

SoShape786->setGeometry(*SoIndexedLineSet788);

SoHAnimSegment785->addChild(*SoShape786);

SoTransform* SoTransform790 = new SoTransform();
SoTransform790->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape791 = new SoShape();
SoShape791->setUSE(QString("jointbox"));
SoTransform790->addChild(*SoShape791);

SoHAnimSegment785->addChild(*SoTransform790);

SoHAnimJoint784->addChildren(*SoHAnimSegment785);

SoHAnimJoint* SoHAnimJoint792 = new SoHAnimJoint();
SoHAnimJoint792->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint792->setDEF(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimJoint792->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint792->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint792->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimSegment* SoHAnimSegment793 = new SoHAnimSegment();
SoHAnimSegment793->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimSegment793->setDEF(QString("Joe_l_carpal_proximal_phalanx_2"));
SoShape* SoShape794 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance795 = new SoVRMLAppearance();
SoVRMLAppearance795->setUSE(QString("SegmentLine"));
SoShape794->addChild(*SoVRMLAppearance795);

SoIndexedLineSet* SoIndexedLineSet796 = new SoIndexedLineSet();
SoIndexedLineSet796->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate797 = new SoCoordinate();
SoCoordinate797->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoIndexedLineSet796->setCoord(*SoCoordinate797);

SoShape794->setGeometry(*SoIndexedLineSet796);

SoHAnimSegment793->addChild(*SoShape794);

SoTransform* SoTransform798 = new SoTransform();
SoTransform798->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape799 = new SoShape();
SoShape799->setUSE(QString("jointbox"));
SoTransform798->addChild(*SoShape799);

SoHAnimSegment793->addChild(*SoTransform798);

SoHAnimJoint792->addChildren(*SoHAnimSegment793);

SoHAnimJoint* SoHAnimJoint800 = new SoHAnimJoint();
SoHAnimJoint800->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint800->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint800->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint800->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint800->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment801 = new SoHAnimSegment();
SoHAnimSegment801->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimSegment801->setDEF(QString("Joe_l_carpal_middle_phalanx_2"));
SoShape* SoShape802 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance803 = new SoVRMLAppearance();
SoVRMLAppearance803->setUSE(QString("SegmentLine"));
SoShape802->addChild(*SoVRMLAppearance803);

SoIndexedLineSet* SoIndexedLineSet804 = new SoIndexedLineSet();
SoIndexedLineSet804->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate805 = new SoCoordinate();
SoCoordinate805->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoIndexedLineSet804->setCoord(*SoCoordinate805);

SoShape802->setGeometry(*SoIndexedLineSet804);

SoHAnimSegment801->addChild(*SoShape802);

SoTransform* SoTransform806 = new SoTransform();
SoTransform806->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape807 = new SoShape();
SoShape807->setUSE(QString("jointbox"));
SoTransform806->addChild(*SoShape807);

SoHAnimSegment801->addChild(*SoTransform806);

SoHAnimJoint800->addChildren(*SoHAnimSegment801);

SoHAnimJoint* SoHAnimJoint808 = new SoHAnimJoint();
SoHAnimJoint808->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint808->setDEF(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint808->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint808->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint808->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment809 = new SoHAnimSegment();
SoHAnimSegment809->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSegment809->setDEF(QString("Joe_l_carpal_distal_phalanx_2"));
SoShape* SoShape810 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance811 = new SoVRMLAppearance();
SoVRMLAppearance811->setUSE(QString("SegmentLine"));
SoShape810->addChild(*SoVRMLAppearance811);

SoIndexedLineSet* SoIndexedLineSet812 = new SoIndexedLineSet();
SoIndexedLineSet812->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate813 = new SoCoordinate();
SoCoordinate813->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
SoIndexedLineSet812->setCoord(*SoCoordinate813);

SoShape810->setGeometry(*SoIndexedLineSet812);

SoHAnimSegment809->addChild(*SoShape810);

SoTransform* SoTransform814 = new SoTransform();
SoTransform814->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape815 = new SoShape();
SoShape815->setUSE(QString("jointbox"));
SoTransform814->addChild(*SoShape815);

SoHAnimSegment809->addChild(*SoTransform814);

SoHAnimSite* SoHAnimSite816 = new SoHAnimSite();
SoHAnimSite816->X3DNode::setName(QString("l_carpal_distal_phalanx_2_tip"));
SoHAnimSite816->setDEF(QString("Joe_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite816->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoShape* SoShape817 = new SoShape();
SoShape817->setUSE(QString("sitebox"));
SoHAnimSite816->addChild(*SoShape817);

SoHAnimSegment809->addChild(*SoHAnimSite816);

SoHAnimSite* SoHAnimSite818 = new SoHAnimSite();
SoHAnimSite818->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite818->setDEF(QString("Joe_l_dactylion_pt"));
SoHAnimSite818->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoShape* SoShape819 = new SoShape();
SoShape819->setUSE(QString("sitebox"));
SoHAnimSite818->addChild(*SoShape819);

SoHAnimSegment809->addChild(*SoHAnimSite818);

SoHAnimJoint808->addChildren(*SoHAnimSegment809);

SoHAnimJoint800->addChildren(*SoHAnimJoint808);

SoHAnimJoint792->addChildren(*SoHAnimJoint800);

SoHAnimJoint784->addChildren(*SoHAnimJoint792);

SoHAnimJoint744->addChildren(*SoHAnimJoint784);

SoHAnimJoint* SoHAnimJoint820 = new SoHAnimJoint();
SoHAnimJoint820->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint820->setDEF(QString("Joe_l_carpometacarpal_3"));
SoHAnimJoint820->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint820->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint820->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment821 = new SoHAnimSegment();
SoHAnimSegment821->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimSegment821->setDEF(QString("Joe_l_metacarpal_3"));
SoShape* SoShape822 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance823 = new SoVRMLAppearance();
SoVRMLAppearance823->setUSE(QString("SegmentLine"));
SoShape822->addChild(*SoVRMLAppearance823);

SoIndexedLineSet* SoIndexedLineSet824 = new SoIndexedLineSet();
SoIndexedLineSet824->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate825 = new SoCoordinate();
SoCoordinate825->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoIndexedLineSet824->setCoord(*SoCoordinate825);

SoShape822->setGeometry(*SoIndexedLineSet824);

SoHAnimSegment821->addChild(*SoShape822);

SoTransform* SoTransform826 = new SoTransform();
SoTransform826->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoShape* SoShape827 = new SoShape();
SoShape827->setUSE(QString("jointbox"));
SoTransform826->addChild(*SoShape827);

SoHAnimSegment821->addChild(*SoTransform826);

SoHAnimJoint820->addChildren(*SoHAnimSegment821);

SoHAnimJoint* SoHAnimJoint828 = new SoHAnimJoint();
SoHAnimJoint828->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint828->setDEF(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimJoint828->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint828->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint828->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment829 = new SoHAnimSegment();
SoHAnimSegment829->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimSegment829->setDEF(QString("Joe_l_carpal_proximal_phalanx_3"));
SoShape* SoShape830 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance831 = new SoVRMLAppearance();
SoVRMLAppearance831->setUSE(QString("SegmentLine"));
SoShape830->addChild(*SoVRMLAppearance831);

SoIndexedLineSet* SoIndexedLineSet832 = new SoIndexedLineSet();
SoIndexedLineSet832->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate833 = new SoCoordinate();
SoCoordinate833->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoIndexedLineSet832->setCoord(*SoCoordinate833);

SoShape830->setGeometry(*SoIndexedLineSet832);

SoHAnimSegment829->addChild(*SoShape830);

SoTransform* SoTransform834 = new SoTransform();
SoTransform834->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoShape* SoShape835 = new SoShape();
SoShape835->setUSE(QString("jointbox"));
SoTransform834->addChild(*SoShape835);

SoHAnimSegment829->addChild(*SoTransform834);

SoHAnimJoint828->addChildren(*SoHAnimSegment829);

SoHAnimJoint* SoHAnimJoint836 = new SoHAnimJoint();
SoHAnimJoint836->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint836->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint836->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint836->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint836->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment837 = new SoHAnimSegment();
SoHAnimSegment837->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimSegment837->setDEF(QString("Joe_l_carpal_middle_phalanx_3"));
SoShape* SoShape838 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance839 = new SoVRMLAppearance();
SoVRMLAppearance839->setUSE(QString("SegmentLine"));
SoShape838->addChild(*SoVRMLAppearance839);

SoIndexedLineSet* SoIndexedLineSet840 = new SoIndexedLineSet();
SoIndexedLineSet840->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate841 = new SoCoordinate();
SoCoordinate841->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoIndexedLineSet840->setCoord(*SoCoordinate841);

SoShape838->setGeometry(*SoIndexedLineSet840);

SoHAnimSegment837->addChild(*SoShape838);

SoTransform* SoTransform842 = new SoTransform();
SoTransform842->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoShape* SoShape843 = new SoShape();
SoShape843->setUSE(QString("jointbox"));
SoTransform842->addChild(*SoShape843);

SoHAnimSegment837->addChild(*SoTransform842);

SoHAnimJoint836->addChildren(*SoHAnimSegment837);

SoHAnimJoint* SoHAnimJoint844 = new SoHAnimJoint();
SoHAnimJoint844->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint844->setDEF(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint844->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint844->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint844->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment845 = new SoHAnimSegment();
SoHAnimSegment845->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSegment845->setDEF(QString("Joe_l_carpal_distal_phalanx_3"));
SoShape* SoShape846 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance847 = new SoVRMLAppearance();
SoVRMLAppearance847->setUSE(QString("SegmentLine"));
SoShape846->addChild(*SoVRMLAppearance847);

SoIndexedLineSet* SoIndexedLineSet848 = new SoIndexedLineSet();
SoIndexedLineSet848->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate849 = new SoCoordinate();
SoCoordinate849->setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
SoIndexedLineSet848->setCoord(*SoCoordinate849);

SoShape846->setGeometry(*SoIndexedLineSet848);

SoHAnimSegment845->addChild(*SoShape846);

SoHAnimSite* SoHAnimSite850 = new SoHAnimSite();
SoHAnimSite850->X3DNode::setName(QString("l_carpal_distal_phalanx_3_tip"));
SoHAnimSite850->setDEF(QString("Joe_l_carpal_distal_phalanx_3_tip"));
SoHAnimSite850->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoShape* SoShape851 = new SoShape();
SoShape851->setUSE(QString("sitebox"));
SoHAnimSite850->addChild(*SoShape851);

SoHAnimSegment845->addChild(*SoHAnimSite850);

SoTransform* SoTransform852 = new SoTransform();
SoTransform852->setTranslation(new float[]{0.2026,0.7011,-0.0494});
SoShape* SoShape853 = new SoShape();
SoShape853->setUSE(QString("jointbox"));
SoTransform852->addChild(*SoShape853);

SoHAnimSegment845->addChild(*SoTransform852);

SoHAnimJoint844->addChildren(*SoHAnimSegment845);

SoHAnimJoint836->addChildren(*SoHAnimJoint844);

SoHAnimJoint828->addChildren(*SoHAnimJoint836);

SoHAnimJoint820->addChildren(*SoHAnimJoint828);

SoHAnimJoint744->addChildren(*SoHAnimJoint820);

SoHAnimJoint* SoHAnimJoint854 = new SoHAnimJoint();
SoHAnimJoint854->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint854->setDEF(QString("Joe_l_carpometacarpal_4"));
SoHAnimJoint854->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint854->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint854->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment855 = new SoHAnimSegment();
SoHAnimSegment855->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimSegment855->setDEF(QString("Joe_l_metacarpal_4"));
SoShape* SoShape856 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance857 = new SoVRMLAppearance();
SoVRMLAppearance857->setUSE(QString("SegmentLine"));
SoShape856->addChild(*SoVRMLAppearance857);

SoIndexedLineSet* SoIndexedLineSet858 = new SoIndexedLineSet();
SoIndexedLineSet858->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate859 = new SoCoordinate();
SoCoordinate859->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoIndexedLineSet858->setCoord(*SoCoordinate859);

SoShape856->setGeometry(*SoIndexedLineSet858);

SoHAnimSegment855->addChild(*SoShape856);

SoTransform* SoTransform860 = new SoTransform();
SoTransform860->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoShape* SoShape861 = new SoShape();
SoShape861->setUSE(QString("jointbox"));
SoTransform860->addChild(*SoShape861);

SoHAnimSegment855->addChild(*SoTransform860);

SoHAnimJoint854->addChildren(*SoHAnimSegment855);

SoHAnimJoint* SoHAnimJoint862 = new SoHAnimJoint();
SoHAnimJoint862->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint862->setDEF(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimJoint862->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint862->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint862->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment863 = new SoHAnimSegment();
SoHAnimSegment863->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimSegment863->setDEF(QString("Joe_l_carpal_proximal_phalanx_4"));
SoShape* SoShape864 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance865 = new SoVRMLAppearance();
SoVRMLAppearance865->setUSE(QString("SegmentLine"));
SoShape864->addChild(*SoVRMLAppearance865);

SoIndexedLineSet* SoIndexedLineSet866 = new SoIndexedLineSet();
SoIndexedLineSet866->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate867 = new SoCoordinate();
SoCoordinate867->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoIndexedLineSet866->setCoord(*SoCoordinate867);

SoShape864->setGeometry(*SoIndexedLineSet866);

SoHAnimSegment863->addChild(*SoShape864);

SoTransform* SoTransform868 = new SoTransform();
SoTransform868->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoShape* SoShape869 = new SoShape();
SoShape869->setUSE(QString("jointbox"));
SoTransform868->addChild(*SoShape869);

SoHAnimSegment863->addChild(*SoTransform868);

SoHAnimJoint862->addChildren(*SoHAnimSegment863);

SoHAnimJoint* SoHAnimJoint870 = new SoHAnimJoint();
SoHAnimJoint870->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint870->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint870->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint870->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint870->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment871 = new SoHAnimSegment();
SoHAnimSegment871->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimSegment871->setDEF(QString("Joe_l_carpal_middle_phalanx_4"));
SoShape* SoShape872 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance873 = new SoVRMLAppearance();
SoVRMLAppearance873->setUSE(QString("SegmentLine"));
SoShape872->addChild(*SoVRMLAppearance873);

SoIndexedLineSet* SoIndexedLineSet874 = new SoIndexedLineSet();
SoIndexedLineSet874->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate875 = new SoCoordinate();
SoCoordinate875->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoIndexedLineSet874->setCoord(*SoCoordinate875);

SoShape872->setGeometry(*SoIndexedLineSet874);

SoHAnimSegment871->addChild(*SoShape872);

SoTransform* SoTransform876 = new SoTransform();
SoTransform876->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoShape* SoShape877 = new SoShape();
SoShape877->setUSE(QString("jointbox"));
SoTransform876->addChild(*SoShape877);

SoHAnimSegment871->addChild(*SoTransform876);

SoHAnimJoint870->addChildren(*SoHAnimSegment871);

SoHAnimJoint* SoHAnimJoint878 = new SoHAnimJoint();
SoHAnimJoint878->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint878->setDEF(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint878->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint878->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint878->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment879 = new SoHAnimSegment();
SoHAnimSegment879->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSegment879->setDEF(QString("Joe_l_carpal_distal_phalanx_4"));
SoShape* SoShape880 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance881 = new SoVRMLAppearance();
SoVRMLAppearance881->setUSE(QString("SegmentLine"));
SoShape880->addChild(*SoVRMLAppearance881);

SoIndexedLineSet* SoIndexedLineSet882 = new SoIndexedLineSet();
SoIndexedLineSet882->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate883 = new SoCoordinate();
SoCoordinate883->setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
SoIndexedLineSet882->setCoord(*SoCoordinate883);

SoShape880->setGeometry(*SoIndexedLineSet882);

SoHAnimSegment879->addChild(*SoShape880);

SoTransform* SoTransform884 = new SoTransform();
SoTransform884->setTranslation(new float[]{0.1983,0.7045,-0.0767});
SoShape* SoShape885 = new SoShape();
SoShape885->setUSE(QString("jointbox"));
SoTransform884->addChild(*SoShape885);

SoHAnimSegment879->addChild(*SoTransform884);

SoHAnimSite* SoHAnimSite886 = new SoHAnimSite();
SoHAnimSite886->X3DNode::setName(QString("l_carpal_distal_phalanx_4_tip"));
SoHAnimSite886->setDEF(QString("Joe_l_carpal_distal_phalanx_4_tip"));
SoHAnimSite886->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoShape* SoShape887 = new SoShape();
SoShape887->setUSE(QString("sitebox"));
SoHAnimSite886->addChild(*SoShape887);

SoHAnimSegment879->addChild(*SoHAnimSite886);

SoHAnimJoint878->addChildren(*SoHAnimSegment879);

SoHAnimJoint870->addChildren(*SoHAnimJoint878);

SoHAnimJoint862->addChildren(*SoHAnimJoint870);

SoHAnimJoint854->addChildren(*SoHAnimJoint862);

SoHAnimJoint744->addChildren(*SoHAnimJoint854);

SoHAnimJoint* SoHAnimJoint888 = new SoHAnimJoint();
SoHAnimJoint888->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint888->setDEF(QString("Joe_l_carpometacarpal_5"));
SoHAnimJoint888->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint888->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint888->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimSegment* SoHAnimSegment889 = new SoHAnimSegment();
SoHAnimSegment889->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimSegment889->setDEF(QString("Joe_l_metacarpal_5"));
SoShape* SoShape890 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance891 = new SoVRMLAppearance();
SoVRMLAppearance891->setUSE(QString("SegmentLine"));
SoShape890->addChild(*SoVRMLAppearance891);

SoIndexedLineSet* SoIndexedLineSet892 = new SoIndexedLineSet();
SoIndexedLineSet892->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate893 = new SoCoordinate();
SoCoordinate893->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoIndexedLineSet892->setCoord(*SoCoordinate893);

SoShape890->setGeometry(*SoIndexedLineSet892);

SoHAnimSegment889->addChild(*SoShape890);

SoTransform* SoTransform894 = new SoTransform();
SoTransform894->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoShape* SoShape895 = new SoShape();
SoShape895->setUSE(QString("jointbox"));
SoTransform894->addChild(*SoShape895);

SoHAnimSegment889->addChild(*SoTransform894);

SoHAnimJoint888->addChildren(*SoHAnimSegment889);

SoHAnimJoint* SoHAnimJoint896 = new SoHAnimJoint();
SoHAnimJoint896->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint896->setDEF(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimJoint896->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint896->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint896->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment897 = new SoHAnimSegment();
SoHAnimSegment897->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimSegment897->setDEF(QString("Joe_l_carpal_proximal_phalanx_5"));
SoShape* SoShape898 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance899 = new SoVRMLAppearance();
SoVRMLAppearance899->setUSE(QString("SegmentLine"));
SoShape898->addChild(*SoVRMLAppearance899);

SoIndexedLineSet* SoIndexedLineSet900 = new SoIndexedLineSet();
SoIndexedLineSet900->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate901 = new SoCoordinate();
SoCoordinate901->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoIndexedLineSet900->setCoord(*SoCoordinate901);

SoShape898->setGeometry(*SoIndexedLineSet900);

SoHAnimSegment897->addChild(*SoShape898);

SoTransform* SoTransform902 = new SoTransform();
SoTransform902->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoShape* SoShape903 = new SoShape();
SoShape903->setUSE(QString("jointbox"));
SoTransform902->addChild(*SoShape903);

SoHAnimSegment897->addChild(*SoTransform902);

SoHAnimJoint896->addChildren(*SoHAnimSegment897);

SoHAnimJoint* SoHAnimJoint904 = new SoHAnimJoint();
SoHAnimJoint904->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint904->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint904->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint904->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint904->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment905 = new SoHAnimSegment();
SoHAnimSegment905->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimSegment905->setDEF(QString("Joe_l_carpal_middle_phalanx_5"));
SoTransform* SoTransform906 = new SoTransform();
SoTransform906->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoShape* SoShape907 = new SoShape();
SoShape907->setUSE(QString("jointbox"));
SoTransform906->addChild(*SoShape907);

SoHAnimSegment905->addChild(*SoTransform906);

SoShape* SoShape908 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance909 = new SoVRMLAppearance();
SoVRMLAppearance909->setUSE(QString("SegmentLine"));
SoShape908->addChild(*SoVRMLAppearance909);

SoIndexedLineSet* SoIndexedLineSet910 = new SoIndexedLineSet();
SoIndexedLineSet910->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate911 = new SoCoordinate();
SoCoordinate911->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoIndexedLineSet910->setCoord(*SoCoordinate911);

SoShape908->setGeometry(*SoIndexedLineSet910);

SoHAnimSegment905->addChild(*SoShape908);

SoHAnimJoint904->addChildren(*SoHAnimSegment905);

SoHAnimJoint* SoHAnimJoint912 = new SoHAnimJoint();
SoHAnimJoint912->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint912->setDEF(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint912->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint912->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint912->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment913 = new SoHAnimSegment();
SoHAnimSegment913->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSegment913->setDEF(QString("Joe_l_carpal_distal_phalanx_5"));
SoShape* SoShape914 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance915 = new SoVRMLAppearance();
SoVRMLAppearance915->setUSE(QString("SegmentLine"));
SoShape914->addChild(*SoVRMLAppearance915);

SoIndexedLineSet* SoIndexedLineSet916 = new SoIndexedLineSet();
SoIndexedLineSet916->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate917 = new SoCoordinate();
SoCoordinate917->setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
SoIndexedLineSet916->setCoord(*SoCoordinate917);

SoShape914->setGeometry(*SoIndexedLineSet916);

SoHAnimSegment913->addChild(*SoShape914);

SoTransform* SoTransform918 = new SoTransform();
SoTransform918->setTranslation(new float[]{0.1948,0.7277,-0.1017});
SoShape* SoShape919 = new SoShape();
SoShape919->setUSE(QString("jointbox"));
SoTransform918->addChild(*SoShape919);

SoHAnimSegment913->addChild(*SoTransform918);

SoHAnimSite* SoHAnimSite920 = new SoHAnimSite();
SoHAnimSite920->X3DNode::setName(QString("l_carpal_distal_phalanx_5_tip"));
SoHAnimSite920->setDEF(QString("Joe_l_carpal_distal_phalanx_5_tip"));
SoHAnimSite920->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoShape* SoShape921 = new SoShape();
SoShape921->setUSE(QString("sitebox"));
SoHAnimSite920->addChild(*SoShape921);

SoHAnimSegment913->addChild(*SoHAnimSite920);

SoHAnimJoint912->addChildren(*SoHAnimSegment913);

SoHAnimJoint904->addChildren(*SoHAnimJoint912);

SoHAnimJoint896->addChildren(*SoHAnimJoint904);

SoHAnimJoint888->addChildren(*SoHAnimJoint896);

SoHAnimJoint744->addChildren(*SoHAnimJoint888);

SoHAnimJoint722->addChildren(*SoHAnimJoint744);

SoHAnimJoint698->addChildren(*SoHAnimJoint722);

SoHAnimJoint682->addChildren(*SoHAnimJoint698);

SoHAnimJoint672->addChildren(*SoHAnimJoint682);

SoHAnimJoint556->addChildren(*SoHAnimJoint672);

SoHAnimJoint* SoHAnimJoint922 = new SoHAnimJoint();
SoHAnimJoint922->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint922->setDEF(QString("Joe_r_sternoclavicular"));
SoHAnimJoint922->setCenter(new float[]{-0.03,1.46,0.0});
SoHAnimJoint922->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint922->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment923 = new SoHAnimSegment();
SoHAnimSegment923->X3DNode::setName(QString("r_clavicle"));
SoHAnimSegment923->setDEF(QString("Joe_r_clavicle"));
SoShape* SoShape924 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance925 = new SoVRMLAppearance();
SoVRMLAppearance925->setUSE(QString("SegmentLine"));
SoShape924->addChild(*SoVRMLAppearance925);

SoIndexedLineSet* SoIndexedLineSet926 = new SoIndexedLineSet();
SoIndexedLineSet926->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate927 = new SoCoordinate();
SoCoordinate927->setPoint(new float[]{-0.03,1.46,0.02,-0.09,1.41,-0.09}, 6);
SoIndexedLineSet926->setCoord(*SoCoordinate927);

SoShape924->setGeometry(*SoIndexedLineSet926);

SoHAnimSegment923->addChild(*SoShape924);

SoTransform* SoTransform928 = new SoTransform();
SoTransform928->setTranslation(new float[]{-0.03,1.46,0.02});
SoShape* SoShape929 = new SoShape();
SoShape929->setUSE(QString("jointbox"));
SoTransform928->addChild(*SoShape929);

SoHAnimSegment923->addChild(*SoTransform928);

SoHAnimSite* SoHAnimSite930 = new SoHAnimSite();
SoHAnimSite930->X3DNode::setName(QString("r_clavicle_pt"));
SoHAnimSite930->setDEF(QString("Joe_r_clavicle_pt"));
SoHAnimSite930->setTranslation(new float[]{-0.03,1.46,0.035});
SoShape* SoShape931 = new SoShape();
SoShape931->setUSE(QString("sitebox"));
SoHAnimSite930->addChild(*SoShape931);

SoHAnimSegment923->addChild(*SoHAnimSite930);

SoHAnimJoint922->addChildren(*SoHAnimSegment923);

SoHAnimJoint* SoHAnimJoint932 = new SoHAnimJoint();
SoHAnimJoint932->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint932->setDEF(QString("Joe_r_acromioclavicular"));
SoHAnimJoint932->setCenter(new float[]{-0.09,1.41,-0.11});
SoHAnimJoint932->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint932->setSkinCoordWeight(new float[]{1.0,0.9}, 2);
SoHAnimSegment* SoHAnimSegment933 = new SoHAnimSegment();
SoHAnimSegment933->X3DNode::setName(QString("r_scapula"));
SoHAnimSegment933->setDEF(QString("Joe_r_scapula"));
SoShape* SoShape934 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance935 = new SoVRMLAppearance();
SoVRMLAppearance935->setUSE(QString("SegmentLine"));
SoShape934->addChild(*SoVRMLAppearance935);

SoIndexedLineSet* SoIndexedLineSet936 = new SoIndexedLineSet();
SoIndexedLineSet936->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate937 = new SoCoordinate();
SoCoordinate937->setPoint(new float[]{-0.09,1.41,-0.09,-0.2,1.44,-0.04}, 6);
SoIndexedLineSet936->setCoord(*SoCoordinate937);

SoShape934->setGeometry(*SoIndexedLineSet936);

SoHAnimSegment933->addChild(*SoShape934);

SoTransform* SoTransform938 = new SoTransform();
SoTransform938->setTranslation(new float[]{-0.09,1.41,-0.09});
SoShape* SoShape939 = new SoShape();
SoShape939->setUSE(QString("jointbox"));
SoTransform938->addChild(*SoShape939);

SoHAnimSegment933->addChild(*SoTransform938);

SoTransform* SoTransform940 = new SoTransform();
SoTransform940->setTranslation(new float[]{-0.11,1.427,-0.1375});
SoShape* SoShape941 = new SoShape();
SoShape941->setUSE(QString("skinsphere"));
SoTransform940->addChild(*SoShape941);

SoHAnimSegment933->addChild(*SoTransform940);

SoHAnimSite* SoHAnimSite942 = new SoHAnimSite();
SoHAnimSite942->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite942->setDEF(QString("Joe_r_acromion_pt"));
SoHAnimSite942->setTranslation(new float[]{-0.178,1.4825,-0.0625});
SoShape* SoShape943 = new SoShape();
SoShape943->setUSE(QString("sitebox"));
SoHAnimSite942->addChild(*SoShape943);

SoHAnimSegment933->addChild(*SoHAnimSite942);

SoHAnimSite* SoHAnimSite944 = new SoHAnimSite();
SoHAnimSite944->X3DNode::setName(QString("r_axilla_proximal_pt"));
SoHAnimSite944->setDEF(QString("Joe_r_axilla_proximal_pt"));
SoHAnimSite944->setTranslation(new float[]{-0.17,1.38,0.007});
SoShape* SoShape945 = new SoShape();
SoShape945->setUSE(QString("sitebox"));
SoHAnimSite944->addChild(*SoShape945);

SoHAnimSegment933->addChild(*SoHAnimSite944);

SoHAnimSite* SoHAnimSite946 = new SoHAnimSite();
SoHAnimSite946->X3DNode::setName(QString("r_axilla_distal_pt"));
SoHAnimSite946->setDEF(QString("Joe_r_axilla_distal_pt"));
SoHAnimSite946->setTranslation(new float[]{-0.16,1.38,-0.127});
SoShape* SoShape947 = new SoShape();
SoShape947->setUSE(QString("sitebox"));
SoHAnimSite946->addChild(*SoShape947);

SoHAnimSegment933->addChild(*SoHAnimSite946);

SoHAnimJoint932->addChildren(*SoHAnimSegment933);

SoHAnimJoint* SoHAnimJoint948 = new SoHAnimJoint();
SoHAnimJoint948->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint948->setDEF(QString("Joe_r_shoulder"));
SoHAnimJoint948->setCenter(new float[]{-0.2,1.44,-0.04});
SoHAnimJoint948->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint948->setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
SoHAnimSegment* SoHAnimSegment949 = new SoHAnimSegment();
SoHAnimSegment949->X3DNode::setName(QString("r_upperarm"));
SoHAnimSegment949->setDEF(QString("Joe_r_upperarm"));
SoTransform* SoTransform950 = new SoTransform();
SoTransform950->setTranslation(new float[]{-0.2,1.44,-0.04});
SoShape* SoShape951 = new SoShape();
SoShape951->setUSE(QString("jointbox"));
SoTransform950->addChild(*SoShape951);

SoHAnimSegment949->addChild(*SoTransform950);

SoShape* SoShape952 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance953 = new SoVRMLAppearance();
SoVRMLAppearance953->setUSE(QString("SegmentLine"));
SoShape952->addChild(*SoVRMLAppearance953);

SoIndexedLineSet* SoIndexedLineSet954 = new SoIndexedLineSet();
SoIndexedLineSet954->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate955 = new SoCoordinate();
SoCoordinate955->setPoint(new float[]{-0.2,1.44,-0.04,-0.2,1.1388,-0.04}, 6);
SoIndexedLineSet954->setCoord(*SoCoordinate955);

SoShape952->setGeometry(*SoIndexedLineSet954);

SoHAnimSegment949->addChild(*SoShape952);

SoTransform* SoTransform956 = new SoTransform();
SoTransform956->setTranslation(new float[]{-0.178,1.4825,-0.0625});
SoShape* SoShape957 = new SoShape();
SoShape957->setUSE(QString("skinsphere"));
SoTransform956->addChild(*SoShape957);

SoHAnimSegment949->addChild(*SoTransform956);

SoTransform* SoTransform958 = new SoTransform();
SoTransform958->setTranslation(new float[]{-0.17,1.38,0.007});
SoShape* SoShape959 = new SoShape();
SoShape959->setUSE(QString("skinsphere"));
SoTransform958->addChild(*SoShape959);

SoHAnimSegment949->addChild(*SoTransform958);

SoTransform* SoTransform960 = new SoTransform();
SoTransform960->setTranslation(new float[]{-0.16,1.38,-0.127});
SoShape* SoShape961 = new SoShape();
SoShape961->setUSE(QString("skinsphere"));
SoTransform960->addChild(*SoShape961);

SoHAnimSegment949->addChild(*SoTransform960);

SoTransform* SoTransform962 = new SoTransform();
SoTransform962->setTranslation(new float[]{-0.235,1.42,-0.0625});
SoShape* SoShape963 = new SoShape();
SoShape963->setUSE(QString("skinsphere"));
SoTransform962->addChild(*SoShape963);

SoHAnimSegment949->addChild(*SoTransform962);

SoTransform* SoTransform964 = new SoTransform();
SoTransform964->setTranslation(new float[]{-0.23,1.235,-0.04});
SoShape* SoShape965 = new SoShape();
SoShape965->setUSE(QString("skinsphere"));
SoTransform964->addChild(*SoShape965);

SoHAnimSegment949->addChild(*SoTransform964);

SoTransform* SoTransform966 = new SoTransform();
SoTransform966->setTranslation(new float[]{-0.16,1.23,-0.04});
SoShape* SoShape967 = new SoShape();
SoShape967->setUSE(QString("skinsphere"));
SoTransform966->addChild(*SoShape967);

SoHAnimSegment949->addChild(*SoTransform966);

SoTransform* SoTransform968 = new SoTransform();
SoTransform968->setTranslation(new float[]{-0.2,1.23,-0.105});
SoShape* SoShape969 = new SoShape();
SoShape969->setUSE(QString("skinsphere"));
SoTransform968->addChild(*SoShape969);

SoHAnimSegment949->addChild(*SoTransform968);

SoTransform* SoTransform970 = new SoTransform();
SoTransform970->setTranslation(new float[]{-0.2,1.235,0.02});
SoShape* SoShape971 = new SoShape();
SoShape971->setUSE(QString("skinsphere"));
SoTransform970->addChild(*SoShape971);

SoHAnimSegment949->addChild(*SoTransform970);

SoHAnimSite* SoHAnimSite972 = new SoHAnimSite();
SoHAnimSite972->X3DNode::setName(QString("r_humeral_medial_epicondyle_pt"));
SoHAnimSite972->setDEF(QString("Joe_r_humeral_medial_epicondyle_pt"));
SoHAnimSite972->setTranslation(new float[]{-0.165,1.1388,-0.04});
SoShape* SoShape973 = new SoShape();
SoShape973->setUSE(QString("sitebox"));
SoHAnimSite972->addChild(*SoShape973);

SoHAnimSegment949->addChild(*SoHAnimSite972);

SoHAnimSite* SoHAnimSite974 = new SoHAnimSite();
SoHAnimSite974->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite974->setDEF(QString("Joe_r_radiale_pt"));
SoHAnimSite974->setTranslation(new float[]{-0.23,1.133,-0.055});
SoShape* SoShape975 = new SoShape();
SoShape975->setUSE(QString("sitebox"));
SoHAnimSite974->addChild(*SoShape975);

SoHAnimSegment949->addChild(*SoHAnimSite974);

SoHAnimSite* SoHAnimSite976 = new SoHAnimSite();
SoHAnimSite976->X3DNode::setName(QString("r_humeral_lateral_epicondyle_pt"));
SoHAnimSite976->setDEF(QString("Joe_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite976->setTranslation(new float[]{-0.244,1.1388,-0.04});
SoShape* SoShape977 = new SoShape();
SoShape977->setUSE(QString("sitebox"));
SoHAnimSite976->addChild(*SoShape977);

SoHAnimSegment949->addChild(*SoHAnimSite976);

SoHAnimJoint948->addChildren(*SoHAnimSegment949);

SoHAnimJoint* SoHAnimJoint978 = new SoHAnimJoint();
SoHAnimJoint978->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint978->setDEF(QString("Joe_r_elbow"));
SoHAnimJoint978->setCenter(new float[]{-0.2,1.1388,-0.04});
SoHAnimJoint978->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint978->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimSegment* SoHAnimSegment979 = new SoHAnimSegment();
SoHAnimSegment979->X3DNode::setName(QString("r_forearm"));
SoHAnimSegment979->setDEF(QString("Joe_r_forearm"));
SoShape* SoShape980 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance981 = new SoVRMLAppearance();
SoVRMLAppearance981->setUSE(QString("SegmentLine"));
SoShape980->addChild(*SoVRMLAppearance981);

SoIndexedLineSet* SoIndexedLineSet982 = new SoIndexedLineSet();
SoIndexedLineSet982->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate983 = new SoCoordinate();
SoCoordinate983->setPoint(new float[]{-0.2,1.1388,-0.04,-0.2,0.89,-0.04}, 6);
SoIndexedLineSet982->setCoord(*SoCoordinate983);

SoShape980->setGeometry(*SoIndexedLineSet982);

SoHAnimSegment979->addChild(*SoShape980);

SoTransform* SoTransform984 = new SoTransform();
SoTransform984->setTranslation(new float[]{-0.2,1.1388,-0.04});
SoShape* SoShape985 = new SoShape();
SoShape985->setUSE(QString("jointbox"));
SoTransform984->addChild(*SoShape985);

SoHAnimSegment979->addChild(*SoTransform984);

SoTransform* SoTransform986 = new SoTransform();
SoTransform986->setTranslation(new float[]{-0.2,1.1388,0.013});
SoShape* SoShape987 = new SoShape();
SoShape987->setUSE(QString("skinsphere"));
SoTransform986->addChild(*SoShape987);

SoHAnimSegment979->addChild(*SoTransform986);

SoTransform* SoTransform988 = new SoTransform();
SoTransform988->setTranslation(new float[]{-0.225,1.0,-0.01});
SoShape* SoShape989 = new SoShape();
SoShape989->setUSE(QString("skinsphere"));
SoTransform988->addChild(*SoShape989);

SoHAnimSegment979->addChild(*SoTransform988);

SoTransform* SoTransform990 = new SoTransform();
SoTransform990->setTranslation(new float[]{-0.225,1.0,-0.07});
SoShape* SoShape991 = new SoShape();
SoShape991->setUSE(QString("skinsphere"));
SoTransform990->addChild(*SoShape991);

SoHAnimSegment979->addChild(*SoTransform990);

SoTransform* SoTransform992 = new SoTransform();
SoTransform992->setTranslation(new float[]{-0.185,1.0,-0.01});
SoShape* SoShape993 = new SoShape();
SoShape993->setUSE(QString("skinsphere"));
SoTransform992->addChild(*SoShape993);

SoHAnimSegment979->addChild(*SoTransform992);

SoTransform* SoTransform994 = new SoTransform();
SoTransform994->setTranslation(new float[]{-0.185,1.0,-0.07});
SoShape* SoShape995 = new SoShape();
SoShape995->setUSE(QString("skinsphere"));
SoTransform994->addChild(*SoShape995);

SoHAnimSegment979->addChild(*SoTransform994);

SoHAnimSite* SoHAnimSite996 = new SoHAnimSite();
SoHAnimSite996->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite996->setDEF(QString("Joe_r_radial_styloid_pt"));
SoHAnimSite996->setTranslation(new float[]{-0.2,0.9,-0.015});
SoShape* SoShape997 = new SoShape();
SoShape997->setUSE(QString("sitebox"));
SoHAnimSite996->addChild(*SoShape997);

SoHAnimSegment979->addChild(*SoHAnimSite996);

SoHAnimSite* SoHAnimSite998 = new SoHAnimSite();
SoHAnimSite998->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite998->setDEF(QString("Joe_r_olecranon_pt"));
SoHAnimSite998->setTranslation(new float[]{-0.2,1.1388,-0.08});
SoShape* SoShape999 = new SoShape();
SoShape999->setUSE(QString("sitebox"));
SoHAnimSite998->addChild(*SoShape999);

SoHAnimSegment979->addChild(*SoHAnimSite998);

SoHAnimJoint978->addChildren(*SoHAnimSegment979);

SoHAnimJoint* SoHAnimJoint1000 = new SoHAnimJoint();
SoHAnimJoint1000->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint1000->setDEF(QString("Joe_r_radiocarpal"));
SoHAnimJoint1000->setCenter(new float[]{-0.2,0.89,-0.04});
SoHAnimJoint1000->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint1000->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment1001 = new SoHAnimSegment();
SoHAnimSegment1001->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment1001->setDEF(QString("Joe_r_carpal"));
SoShape* SoShape1002 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1003 = new SoVRMLAppearance();
SoVRMLAppearance1003->setUSE(QString("SegmentLine"));
SoShape1002->addChild(*SoVRMLAppearance1003);

SoIndexedLineSet* SoIndexedLineSet1004 = new SoIndexedLineSet();
SoIndexedLineSet1004->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
SoCoordinate* SoCoordinate1005 = new SoCoordinate();
SoCoordinate1005->setPoint(new float[]{-0.2,0.89,-0.04,-0.2,0.85,0.0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085}, 18);
SoIndexedLineSet1004->setCoord(*SoCoordinate1005);

SoShape1002->setGeometry(*SoIndexedLineSet1004);

SoHAnimSegment1001->addChild(*SoShape1002);

SoTransform* SoTransform1006 = new SoTransform();
SoTransform1006->setTranslation(new float[]{-0.2,0.89,-0.04});
SoShape* SoShape1007 = new SoShape();
SoShape1007->setUSE(QString("jointbox"));
SoTransform1006->addChild(*SoShape1007);

SoHAnimSegment1001->addChild(*SoTransform1006);

SoHAnimSite* SoHAnimSite1008 = new SoHAnimSite();
SoHAnimSite1008->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite1008->setDEF(QString("Joe_r_ulnar_styloid_pt"));
SoHAnimSite1008->setTranslation(new float[]{-0.2,0.9,-0.085});
SoShape* SoShape1009 = new SoShape();
SoShape1009->setUSE(QString("sitebox"));
SoHAnimSite1008->addChild(*SoShape1009);

SoHAnimSegment1001->addChild(*SoHAnimSite1008);

SoHAnimJoint1000->addChildren(*SoHAnimSegment1001);

SoHAnimJoint* SoHAnimJoint1010 = new SoHAnimJoint();
SoHAnimJoint1010->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint1010->setDEF(QString("Joe_r_carpometacarpal_1"));
SoHAnimJoint1010->setCenter(new float[]{-0.2,0.85,0.0});
SoHAnimJoint1010->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint1010->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1011 = new SoHAnimSegment();
SoHAnimSegment1011->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimSegment1011->setDEF(QString("Joe_r_metacarpal_1"));
SoShape* SoShape1012 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1013 = new SoVRMLAppearance();
SoVRMLAppearance1013->setUSE(QString("SegmentLine"));
SoShape1012->addChild(*SoVRMLAppearance1013);

SoIndexedLineSet* SoIndexedLineSet1014 = new SoIndexedLineSet();
SoIndexedLineSet1014->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1015 = new SoCoordinate();
SoCoordinate1015->setPoint(new float[]{-0.2,0.85,0.0,-0.2,0.82,0.03}, 6);
SoIndexedLineSet1014->setCoord(*SoCoordinate1015);

SoShape1012->setGeometry(*SoIndexedLineSet1014);

SoHAnimSegment1011->addChild(*SoShape1012);

SoTransform* SoTransform1016 = new SoTransform();
SoTransform1016->setTranslation(new float[]{-0.2,0.85,0.0});
SoShape* SoShape1017 = new SoShape();
SoShape1017->setUSE(QString("jointbox"));
SoTransform1016->addChild(*SoShape1017);

SoHAnimSegment1011->addChild(*SoTransform1016);

SoHAnimJoint1010->addChildren(*SoHAnimSegment1011);

SoHAnimJoint* SoHAnimJoint1018 = new SoHAnimJoint();
SoHAnimJoint1018->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint1018->setDEF(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimJoint1018->setCenter(new float[]{-0.2,0.82,0.03});
SoHAnimJoint1018->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint1018->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment1019 = new SoHAnimSegment();
SoHAnimSegment1019->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimSegment1019->setDEF(QString("Joe_r_carpal_proximal_phalanx_1"));
SoShape* SoShape1020 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1021 = new SoVRMLAppearance();
SoVRMLAppearance1021->setUSE(QString("SegmentLine"));
SoShape1020->addChild(*SoVRMLAppearance1021);

SoIndexedLineSet* SoIndexedLineSet1022 = new SoIndexedLineSet();
SoIndexedLineSet1022->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1023 = new SoCoordinate();
SoCoordinate1023->setPoint(new float[]{-0.2,0.82,0.03,-0.2,0.8,0.05}, 6);
SoIndexedLineSet1022->setCoord(*SoCoordinate1023);

SoShape1020->setGeometry(*SoIndexedLineSet1022);

SoHAnimSegment1019->addChild(*SoShape1020);

SoTransform* SoTransform1024 = new SoTransform();
SoTransform1024->setTranslation(new float[]{-0.2,0.82,0.03});
SoShape* SoShape1025 = new SoShape();
SoShape1025->setUSE(QString("jointbox"));
SoTransform1024->addChild(*SoShape1025);

SoHAnimSegment1019->addChild(*SoTransform1024);

SoHAnimJoint1018->addChildren(*SoHAnimSegment1019);

SoHAnimJoint* SoHAnimJoint1026 = new SoHAnimJoint();
SoHAnimJoint1026->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint1026->setDEF(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimJoint1026->setCenter(new float[]{-0.2,0.8,0.05});
SoHAnimJoint1026->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint1026->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1027 = new SoHAnimSegment();
SoHAnimSegment1027->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSegment1027->setDEF(QString("Joe_r_carpal_distal_phalanx_1"));
SoShape* SoShape1028 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1029 = new SoVRMLAppearance();
SoVRMLAppearance1029->setUSE(QString("SegmentLine"));
SoShape1028->addChild(*SoVRMLAppearance1029);

SoIndexedLineSet* SoIndexedLineSet1030 = new SoIndexedLineSet();
SoIndexedLineSet1030->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1031 = new SoCoordinate();
SoCoordinate1031->setPoint(new float[]{-0.2,0.8,0.05,-0.2,0.78,0.07}, 6);
SoIndexedLineSet1030->setCoord(*SoCoordinate1031);

SoShape1028->setGeometry(*SoIndexedLineSet1030);

SoHAnimSegment1027->addChild(*SoShape1028);

SoTransform* SoTransform1032 = new SoTransform();
SoTransform1032->setDEF(QString("Thumbnail"));
SoTransform1032->setTranslation(new float[]{-0.2,0.785,0.075});
SoShape* SoShape1033 = new SoShape();
SoShape1033->setUSE(QString("skinsphere"));
SoTransform1032->addChild(*SoShape1033);

SoHAnimSegment1027->addChild(*SoTransform1032);

SoTransform* SoTransform1034 = new SoTransform();
SoTransform1034->setTranslation(new float[]{-0.2,0.8,0.05});
SoShape* SoShape1035 = new SoShape();
SoShape1035->setUSE(QString("jointbox"));
SoTransform1034->addChild(*SoShape1035);

SoHAnimSegment1027->addChild(*SoTransform1034);

SoHAnimSite* SoHAnimSite1036 = new SoHAnimSite();
SoHAnimSite1036->X3DNode::setName(QString("r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1036->setDEF(QString("Joe_r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1036->setTranslation(new float[]{-0.2,0.78,0.07});
SoShape* SoShape1037 = new SoShape();
SoShape1037->setUSE(QString("sitebox"));
SoHAnimSite1036->addChild(*SoShape1037);

SoHAnimSegment1027->addChild(*SoHAnimSite1036);

SoHAnimJoint1026->addChildren(*SoHAnimSegment1027);

SoHAnimJoint1018->addChildren(*SoHAnimJoint1026);

SoHAnimJoint1010->addChildren(*SoHAnimJoint1018);

SoHAnimJoint1000->addChildren(*SoHAnimJoint1010);

SoHAnimJoint* SoHAnimJoint1038 = new SoHAnimJoint();
SoHAnimJoint1038->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint1038->setDEF(QString("Joe_r_carpometacarpal_2"));
SoHAnimJoint1038->setCenter(new float[]{-0.2,0.84,-0.015});
SoHAnimJoint1038->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint1038->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1039 = new SoHAnimSegment();
SoHAnimSegment1039->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimSegment1039->setDEF(QString("Joe_r_metacarpal_2"));
SoShape* SoShape1040 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1041 = new SoVRMLAppearance();
SoVRMLAppearance1041->setUSE(QString("SegmentLine"));
SoShape1040->addChild(*SoVRMLAppearance1041);

SoIndexedLineSet* SoIndexedLineSet1042 = new SoIndexedLineSet();
SoIndexedLineSet1042->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1043 = new SoCoordinate();
SoCoordinate1043->setPoint(new float[]{-0.2,0.84,-0.015,-0.2,0.793,-0.015}, 6);
SoIndexedLineSet1042->setCoord(*SoCoordinate1043);

SoShape1040->setGeometry(*SoIndexedLineSet1042);

SoHAnimSegment1039->addChild(*SoShape1040);

SoTransform* SoTransform1044 = new SoTransform();
SoTransform1044->setTranslation(new float[]{-0.2,0.84,-0.015});
SoShape* SoShape1045 = new SoShape();
SoShape1045->setUSE(QString("jointbox"));
SoTransform1044->addChild(*SoShape1045);

SoHAnimSegment1039->addChild(*SoTransform1044);

SoHAnimSite* SoHAnimSite1046 = new SoHAnimSite();
SoHAnimSite1046->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite1046->setDEF(QString("Joe_r_metacarpal_phalanx_2_pt"));
SoHAnimSite1046->setTranslation(new float[]{-0.2,0.793,-0.005});
SoShape* SoShape1047 = new SoShape();
SoShape1047->setUSE(QString("sitebox"));
SoHAnimSite1046->addChild(*SoShape1047);

SoHAnimSegment1039->addChild(*SoHAnimSite1046);

SoHAnimJoint1038->addChildren(*SoHAnimSegment1039);

SoHAnimJoint* SoHAnimJoint1048 = new SoHAnimJoint();
SoHAnimJoint1048->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint1048->setDEF(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimJoint1048->setCenter(new float[]{-0.2,0.793,-0.015});
SoHAnimJoint1048->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint1048->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimSegment* SoHAnimSegment1049 = new SoHAnimSegment();
SoHAnimSegment1049->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimSegment1049->setDEF(QString("Joe_r_carpal_proximal_phalanx_2"));
SoShape* SoShape1050 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1051 = new SoVRMLAppearance();
SoVRMLAppearance1051->setUSE(QString("SegmentLine"));
SoShape1050->addChild(*SoVRMLAppearance1051);

SoIndexedLineSet* SoIndexedLineSet1052 = new SoIndexedLineSet();
SoIndexedLineSet1052->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1053 = new SoCoordinate();
SoCoordinate1053->setPoint(new float[]{-0.2,0.793,-0.015,-0.2,0.745,-0.015}, 6);
SoIndexedLineSet1052->setCoord(*SoCoordinate1053);

SoShape1050->setGeometry(*SoIndexedLineSet1052);

SoHAnimSegment1049->addChild(*SoShape1050);

SoTransform* SoTransform1054 = new SoTransform();
SoTransform1054->setTranslation(new float[]{-0.2,0.793,-0.015});
SoShape* SoShape1055 = new SoShape();
SoShape1055->setUSE(QString("jointbox"));
SoTransform1054->addChild(*SoShape1055);

SoHAnimSegment1049->addChild(*SoTransform1054);

SoHAnimJoint1048->addChildren(*SoHAnimSegment1049);

SoHAnimJoint* SoHAnimJoint1056 = new SoHAnimJoint();
SoHAnimJoint1056->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1056->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1056->setCenter(new float[]{-0.2,0.745,-0.015});
SoHAnimJoint1056->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint1056->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1057 = new SoHAnimSegment();
SoHAnimSegment1057->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimSegment1057->setDEF(QString("Joe_r_carpal_middle_phalanx_2"));
SoShape* SoShape1058 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1059 = new SoVRMLAppearance();
SoVRMLAppearance1059->setUSE(QString("SegmentLine"));
SoShape1058->addChild(*SoVRMLAppearance1059);

SoIndexedLineSet* SoIndexedLineSet1060 = new SoIndexedLineSet();
SoIndexedLineSet1060->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1061 = new SoCoordinate();
SoCoordinate1061->setPoint(new float[]{-0.2,0.745,-0.015,-0.2,0.72,-0.015}, 6);
SoIndexedLineSet1060->setCoord(*SoCoordinate1061);

SoShape1058->setGeometry(*SoIndexedLineSet1060);

SoHAnimSegment1057->addChild(*SoShape1058);

SoTransform* SoTransform1062 = new SoTransform();
SoTransform1062->setTranslation(new float[]{-0.2,0.745,-0.015});
SoShape* SoShape1063 = new SoShape();
SoShape1063->setUSE(QString("jointbox"));
SoTransform1062->addChild(*SoShape1063);

SoHAnimSegment1057->addChild(*SoTransform1062);

SoHAnimJoint1056->addChildren(*SoHAnimSegment1057);

SoHAnimJoint* SoHAnimJoint1064 = new SoHAnimJoint();
SoHAnimJoint1064->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1064->setDEF(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1064->setCenter(new float[]{-0.2,0.72,-0.015});
SoHAnimJoint1064->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint1064->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1065 = new SoHAnimSegment();
SoHAnimSegment1065->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSegment1065->setDEF(QString("Joe_r_carpal_distal_phalanx_2"));
SoShape* SoShape1066 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1067 = new SoVRMLAppearance();
SoVRMLAppearance1067->setUSE(QString("SegmentLine"));
SoShape1066->addChild(*SoVRMLAppearance1067);

SoIndexedLineSet* SoIndexedLineSet1068 = new SoIndexedLineSet();
SoIndexedLineSet1068->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1069 = new SoCoordinate();
SoCoordinate1069->setPoint(new float[]{-0.2,0.72,-0.015,-0.2,0.695,-0.015}, 6);
SoIndexedLineSet1068->setCoord(*SoCoordinate1069);

SoShape1066->setGeometry(*SoIndexedLineSet1068);

SoHAnimSegment1065->addChild(*SoShape1066);

SoTransform* SoTransform1070 = new SoTransform();
SoTransform1070->setTranslation(new float[]{-0.2,0.72,-0.015});
SoShape* SoShape1071 = new SoShape();
SoShape1071->setUSE(QString("jointbox"));
SoTransform1070->addChild(*SoShape1071);

SoHAnimSegment1065->addChild(*SoTransform1070);

SoHAnimSite* SoHAnimSite1072 = new SoHAnimSite();
SoHAnimSite1072->X3DNode::setName(QString("r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1072->setDEF(QString("Joe_r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1072->setTranslation(new float[]{-0.2,0.695,-0.015});
SoShape* SoShape1073 = new SoShape();
SoShape1073->setUSE(QString("sitebox"));
SoHAnimSite1072->addChild(*SoShape1073);

SoHAnimSegment1065->addChild(*SoHAnimSite1072);

SoHAnimJoint1064->addChildren(*SoHAnimSegment1065);

SoHAnimJoint1056->addChildren(*SoHAnimJoint1064);

SoHAnimJoint1048->addChildren(*SoHAnimJoint1056);

SoHAnimJoint1038->addChildren(*SoHAnimJoint1048);

SoHAnimJoint1000->addChildren(*SoHAnimJoint1038);

SoHAnimJoint* SoHAnimJoint1074 = new SoHAnimJoint();
SoHAnimJoint1074->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint1074->setDEF(QString("Joe_r_carpometacarpal_3"));
SoHAnimJoint1074->setCenter(new float[]{-0.2,0.835,-0.04});
SoHAnimJoint1074->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint1074->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1075 = new SoHAnimSegment();
SoHAnimSegment1075->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimSegment1075->setDEF(QString("Joe_r_metacarpal_3"));
SoShape* SoShape1076 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1077 = new SoVRMLAppearance();
SoVRMLAppearance1077->setUSE(QString("SegmentLine"));
SoShape1076->addChild(*SoVRMLAppearance1077);

SoIndexedLineSet* SoIndexedLineSet1078 = new SoIndexedLineSet();
SoIndexedLineSet1078->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1079 = new SoCoordinate();
SoCoordinate1079->setPoint(new float[]{-0.2,0.835,-0.04,-0.2,0.788,-0.04}, 6);
SoIndexedLineSet1078->setCoord(*SoCoordinate1079);

SoShape1076->setGeometry(*SoIndexedLineSet1078);

SoHAnimSegment1075->addChild(*SoShape1076);

SoTransform* SoTransform1080 = new SoTransform();
SoTransform1080->setTranslation(new float[]{-0.2,0.835,-0.04});
SoShape* SoShape1081 = new SoShape();
SoShape1081->setUSE(QString("jointbox"));
SoTransform1080->addChild(*SoShape1081);

SoHAnimSegment1075->addChild(*SoTransform1080);

SoHAnimJoint1074->addChildren(*SoHAnimSegment1075);

SoHAnimJoint* SoHAnimJoint1082 = new SoHAnimJoint();
SoHAnimJoint1082->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint1082->setDEF(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimJoint1082->setCenter(new float[]{-0.2,0.788,-0.04});
SoHAnimJoint1082->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint1082->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1083 = new SoHAnimSegment();
SoHAnimSegment1083->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimSegment1083->setDEF(QString("Joe_r_carpal_proximal_phalanx_3"));
SoShape* SoShape1084 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1085 = new SoVRMLAppearance();
SoVRMLAppearance1085->setUSE(QString("SegmentLine"));
SoShape1084->addChild(*SoVRMLAppearance1085);

SoIndexedLineSet* SoIndexedLineSet1086 = new SoIndexedLineSet();
SoIndexedLineSet1086->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1087 = new SoCoordinate();
SoCoordinate1087->setPoint(new float[]{-0.2,0.788,-0.04,-0.2,0.74,-0.04}, 6);
SoIndexedLineSet1086->setCoord(*SoCoordinate1087);

SoShape1084->setGeometry(*SoIndexedLineSet1086);

SoHAnimSegment1083->addChild(*SoShape1084);

SoTransform* SoTransform1088 = new SoTransform();
SoTransform1088->setTranslation(new float[]{-0.2,0.788,-0.04});
SoShape* SoShape1089 = new SoShape();
SoShape1089->setUSE(QString("jointbox"));
SoTransform1088->addChild(*SoShape1089);

SoHAnimSegment1083->addChild(*SoTransform1088);

SoHAnimJoint1082->addChildren(*SoHAnimSegment1083);

SoHAnimJoint* SoHAnimJoint1090 = new SoHAnimJoint();
SoHAnimJoint1090->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1090->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1090->setCenter(new float[]{-0.2,0.74,-0.04});
SoHAnimJoint1090->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint1090->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1091 = new SoHAnimSegment();
SoHAnimSegment1091->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimSegment1091->setDEF(QString("Joe_r_carpal_middle_phalanx_3"));
SoShape* SoShape1092 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1093 = new SoVRMLAppearance();
SoVRMLAppearance1093->setUSE(QString("SegmentLine"));
SoShape1092->addChild(*SoVRMLAppearance1093);

SoIndexedLineSet* SoIndexedLineSet1094 = new SoIndexedLineSet();
SoIndexedLineSet1094->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1095 = new SoCoordinate();
SoCoordinate1095->setPoint(new float[]{-0.2,0.74,-0.04,-0.2,0.7142,-0.04}, 6);
SoIndexedLineSet1094->setCoord(*SoCoordinate1095);

SoShape1092->setGeometry(*SoIndexedLineSet1094);

SoHAnimSegment1091->addChild(*SoShape1092);

SoTransform* SoTransform1096 = new SoTransform();
SoTransform1096->setTranslation(new float[]{-0.2,0.74,-0.04});
SoShape* SoShape1097 = new SoShape();
SoShape1097->setUSE(QString("jointbox"));
SoTransform1096->addChild(*SoShape1097);

SoHAnimSegment1091->addChild(*SoTransform1096);

SoHAnimJoint1090->addChildren(*SoHAnimSegment1091);

SoHAnimJoint* SoHAnimJoint1098 = new SoHAnimJoint();
SoHAnimJoint1098->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1098->setDEF(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1098->setCenter(new float[]{-0.2,0.7142,-0.04});
SoHAnimJoint1098->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint1098->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1099 = new SoHAnimSegment();
SoHAnimSegment1099->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSegment1099->setDEF(QString("Joe_r_carpal_distal_phalanx_3"));
SoShape* SoShape1100 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1101 = new SoVRMLAppearance();
SoVRMLAppearance1101->setUSE(QString("SegmentLine"));
SoShape1100->addChild(*SoVRMLAppearance1101);

SoIndexedLineSet* SoIndexedLineSet1102 = new SoIndexedLineSet();
SoIndexedLineSet1102->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1103 = new SoCoordinate();
SoCoordinate1103->setPoint(new float[]{-0.2,0.7142,-0.04,-0.2,0.6758,-0.04}, 6);
SoIndexedLineSet1102->setCoord(*SoCoordinate1103);

SoShape1100->setGeometry(*SoIndexedLineSet1102);

SoHAnimSegment1099->addChild(*SoShape1100);

SoTransform* SoTransform1104 = new SoTransform();
SoTransform1104->setTranslation(new float[]{-0.2,0.7142,-0.04});
SoShape* SoShape1105 = new SoShape();
SoShape1105->setUSE(QString("jointbox"));
SoTransform1104->addChild(*SoShape1105);

SoHAnimSegment1099->addChild(*SoTransform1104);

SoHAnimSite* SoHAnimSite1106 = new SoHAnimSite();
SoHAnimSite1106->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite1106->setDEF(QString("Joe_r_dactylion_pt"));
SoHAnimSite1106->setTranslation(new float[]{-0.2,0.68,-0.04});
SoShape* SoShape1107 = new SoShape();
SoShape1107->setUSE(QString("sitebox"));
SoHAnimSite1106->addChild(*SoShape1107);

SoHAnimSegment1099->addChild(*SoHAnimSite1106);

SoHAnimSite* SoHAnimSite1108 = new SoHAnimSite();
SoHAnimSite1108->X3DNode::setName(QString("r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1108->setDEF(QString("Joe_r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1108->setTranslation(new float[]{-0.2,0.68,-0.04});
SoShape* SoShape1109 = new SoShape();
SoShape1109->setUSE(QString("sitebox"));
SoHAnimSite1108->addChild(*SoShape1109);

SoHAnimSegment1099->addChild(*SoHAnimSite1108);

SoHAnimJoint1098->addChildren(*SoHAnimSegment1099);

SoHAnimJoint1090->addChildren(*SoHAnimJoint1098);

SoHAnimJoint1082->addChildren(*SoHAnimJoint1090);

SoHAnimJoint1074->addChildren(*SoHAnimJoint1082);

SoHAnimJoint1000->addChildren(*SoHAnimJoint1074);

SoHAnimJoint* SoHAnimJoint1110 = new SoHAnimJoint();
SoHAnimJoint1110->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint1110->setDEF(QString("Joe_r_carpometacarpal_4"));
SoHAnimJoint1110->setCenter(new float[]{-0.2,0.835,-0.065});
SoHAnimJoint1110->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint1110->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1111 = new SoHAnimSegment();
SoHAnimSegment1111->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimSegment1111->setDEF(QString("Joe_r_metacarpal_4"));
SoShape* SoShape1112 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1113 = new SoVRMLAppearance();
SoVRMLAppearance1113->setUSE(QString("SegmentLine"));
SoShape1112->addChild(*SoVRMLAppearance1113);

SoIndexedLineSet* SoIndexedLineSet1114 = new SoIndexedLineSet();
SoIndexedLineSet1114->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1115 = new SoCoordinate();
SoCoordinate1115->setPoint(new float[]{-0.2,0.835,-0.065,-0.2,0.793,-0.065}, 6);
SoIndexedLineSet1114->setCoord(*SoCoordinate1115);

SoShape1112->setGeometry(*SoIndexedLineSet1114);

SoHAnimSegment1111->addChild(*SoShape1112);

SoTransform* SoTransform1116 = new SoTransform();
SoTransform1116->setTranslation(new float[]{-0.2,0.835,-0.065});
SoShape* SoShape1117 = new SoShape();
SoShape1117->setUSE(QString("jointbox"));
SoTransform1116->addChild(*SoShape1117);

SoHAnimSegment1111->addChild(*SoTransform1116);

SoHAnimJoint1110->addChildren(*SoHAnimSegment1111);

SoHAnimJoint* SoHAnimJoint1118 = new SoHAnimJoint();
SoHAnimJoint1118->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint1118->setDEF(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimJoint1118->setCenter(new float[]{-0.2,0.793,-0.065});
SoHAnimJoint1118->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint1118->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1119 = new SoHAnimSegment();
SoHAnimSegment1119->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimSegment1119->setDEF(QString("Joe_r_carpal_proximal_phalanx_4"));
SoShape* SoShape1120 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1121 = new SoVRMLAppearance();
SoVRMLAppearance1121->setUSE(QString("SegmentLine"));
SoShape1120->addChild(*SoVRMLAppearance1121);

SoIndexedLineSet* SoIndexedLineSet1122 = new SoIndexedLineSet();
SoIndexedLineSet1122->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1123 = new SoCoordinate();
SoCoordinate1123->setPoint(new float[]{-0.2,0.793,-0.065,-0.2,0.74,-0.065}, 6);
SoIndexedLineSet1122->setCoord(*SoCoordinate1123);

SoShape1120->setGeometry(*SoIndexedLineSet1122);

SoHAnimSegment1119->addChild(*SoShape1120);

SoTransform* SoTransform1124 = new SoTransform();
SoTransform1124->setTranslation(new float[]{-0.2,0.793,-0.065});
SoShape* SoShape1125 = new SoShape();
SoShape1125->setUSE(QString("jointbox"));
SoTransform1124->addChild(*SoShape1125);

SoHAnimSegment1119->addChild(*SoTransform1124);

SoHAnimJoint1118->addChildren(*SoHAnimSegment1119);

SoHAnimJoint* SoHAnimJoint1126 = new SoHAnimJoint();
SoHAnimJoint1126->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1126->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1126->setCenter(new float[]{-0.2,0.74,-0.065});
SoHAnimJoint1126->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint1126->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1127 = new SoHAnimSegment();
SoHAnimSegment1127->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimSegment1127->setDEF(QString("Joe_r_carpal_middle_phalanx_4"));
SoShape* SoShape1128 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1129 = new SoVRMLAppearance();
SoVRMLAppearance1129->setUSE(QString("SegmentLine"));
SoShape1128->addChild(*SoVRMLAppearance1129);

SoIndexedLineSet* SoIndexedLineSet1130 = new SoIndexedLineSet();
SoIndexedLineSet1130->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1131 = new SoCoordinate();
SoCoordinate1131->setPoint(new float[]{-0.2,0.74,-0.065,-0.2,0.7177,-0.065}, 6);
SoIndexedLineSet1130->setCoord(*SoCoordinate1131);

SoShape1128->setGeometry(*SoIndexedLineSet1130);

SoHAnimSegment1127->addChild(*SoShape1128);

SoTransform* SoTransform1132 = new SoTransform();
SoTransform1132->setTranslation(new float[]{-0.2,0.74,-0.065});
SoShape* SoShape1133 = new SoShape();
SoShape1133->setUSE(QString("jointbox"));
SoTransform1132->addChild(*SoShape1133);

SoHAnimSegment1127->addChild(*SoTransform1132);

SoHAnimJoint1126->addChildren(*SoHAnimSegment1127);

SoHAnimJoint* SoHAnimJoint1134 = new SoHAnimJoint();
SoHAnimJoint1134->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1134->setDEF(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1134->setCenter(new float[]{-0.2,0.7177,-0.065});
SoHAnimJoint1134->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint1134->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1135 = new SoHAnimSegment();
SoHAnimSegment1135->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSegment1135->setDEF(QString("Joe_r_carpal_distal_phalanx_4"));
SoShape* SoShape1136 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1137 = new SoVRMLAppearance();
SoVRMLAppearance1137->setUSE(QString("SegmentLine"));
SoShape1136->addChild(*SoVRMLAppearance1137);

SoIndexedLineSet* SoIndexedLineSet1138 = new SoIndexedLineSet();
SoIndexedLineSet1138->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1139 = new SoCoordinate();
SoCoordinate1139->setPoint(new float[]{-0.2,0.7177,-0.065,-0.2,0.695,-0.065}, 6);
SoIndexedLineSet1138->setCoord(*SoCoordinate1139);

SoShape1136->setGeometry(*SoIndexedLineSet1138);

SoHAnimSegment1135->addChild(*SoShape1136);

SoTransform* SoTransform1140 = new SoTransform();
SoTransform1140->setTranslation(new float[]{-0.2,0.7177,-0.065});
SoShape* SoShape1141 = new SoShape();
SoShape1141->setUSE(QString("jointbox"));
SoTransform1140->addChild(*SoShape1141);

SoHAnimSegment1135->addChild(*SoTransform1140);

SoHAnimSite* SoHAnimSite1142 = new SoHAnimSite();
SoHAnimSite1142->X3DNode::setName(QString("r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1142->setDEF(QString("Joe_r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1142->setTranslation(new float[]{-0.2,0.695,-0.065});
SoShape* SoShape1143 = new SoShape();
SoShape1143->setUSE(QString("sitebox"));
SoHAnimSite1142->addChild(*SoShape1143);

SoHAnimSegment1135->addChild(*SoHAnimSite1142);

SoHAnimJoint1134->addChildren(*SoHAnimSegment1135);

SoHAnimJoint1126->addChildren(*SoHAnimJoint1134);

SoHAnimJoint1118->addChildren(*SoHAnimJoint1126);

SoHAnimJoint1110->addChildren(*SoHAnimJoint1118);

SoHAnimJoint1000->addChildren(*SoHAnimJoint1110);

SoHAnimJoint* SoHAnimJoint1144 = new SoHAnimJoint();
SoHAnimJoint1144->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint1144->setDEF(QString("Joe_r_carpometacarpal_5"));
SoHAnimJoint1144->setCenter(new float[]{-0.2,0.84,-0.085});
SoHAnimJoint1144->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint1144->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1145 = new SoHAnimSegment();
SoHAnimSegment1145->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimSegment1145->setDEF(QString("Joe_r_metacarpal_5"));
SoShape* SoShape1146 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1147 = new SoVRMLAppearance();
SoVRMLAppearance1147->setUSE(QString("SegmentLine"));
SoShape1146->addChild(*SoVRMLAppearance1147);

SoIndexedLineSet* SoIndexedLineSet1148 = new SoIndexedLineSet();
SoIndexedLineSet1148->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1149 = new SoCoordinate();
SoCoordinate1149->setPoint(new float[]{-0.2,0.84,-0.085,-0.2,0.79,-0.085}, 6);
SoIndexedLineSet1148->setCoord(*SoCoordinate1149);

SoShape1146->setGeometry(*SoIndexedLineSet1148);

SoHAnimSegment1145->addChild(*SoShape1146);

SoTransform* SoTransform1150 = new SoTransform();
SoTransform1150->setTranslation(new float[]{-0.2,0.84,-0.085});
SoShape* SoShape1151 = new SoShape();
SoShape1151->setUSE(QString("jointbox"));
SoTransform1150->addChild(*SoShape1151);

SoHAnimSegment1145->addChild(*SoTransform1150);

SoHAnimSite* SoHAnimSite1152 = new SoHAnimSite();
SoHAnimSite1152->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite1152->setDEF(QString("Joe_r_metacarpal_phalanx_5_pt"));
SoHAnimSite1152->setTranslation(new float[]{-0.2,0.79,-0.095});
SoShape* SoShape1153 = new SoShape();
SoShape1153->setUSE(QString("sitebox"));
SoHAnimSite1152->addChild(*SoShape1153);

SoHAnimSegment1145->addChild(*SoHAnimSite1152);

SoHAnimJoint1144->addChildren(*SoHAnimSegment1145);

SoHAnimJoint* SoHAnimJoint1154 = new SoHAnimJoint();
SoHAnimJoint1154->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint1154->setDEF(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimJoint1154->setCenter(new float[]{-0.2,0.79,-0.085});
SoHAnimJoint1154->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint1154->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment1155 = new SoHAnimSegment();
SoHAnimSegment1155->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimSegment1155->setDEF(QString("Joe_r_carpal_proximal_phalanx_5"));
SoShape* SoShape1156 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1157 = new SoVRMLAppearance();
SoVRMLAppearance1157->setUSE(QString("SegmentLine"));
SoShape1156->addChild(*SoVRMLAppearance1157);

SoIndexedLineSet* SoIndexedLineSet1158 = new SoIndexedLineSet();
SoIndexedLineSet1158->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1159 = new SoCoordinate();
SoCoordinate1159->setPoint(new float[]{-0.2,0.79,-0.085,-0.2,0.755,-0.085}, 6);
SoIndexedLineSet1158->setCoord(*SoCoordinate1159);

SoShape1156->setGeometry(*SoIndexedLineSet1158);

SoHAnimSegment1155->addChild(*SoShape1156);

SoTransform* SoTransform1160 = new SoTransform();
SoTransform1160->setTranslation(new float[]{-0.2,0.79,-0.085});
SoShape* SoShape1161 = new SoShape();
SoShape1161->setUSE(QString("jointbox"));
SoTransform1160->addChild(*SoShape1161);

SoHAnimSegment1155->addChild(*SoTransform1160);

SoHAnimJoint1154->addChildren(*SoHAnimSegment1155);

SoHAnimJoint* SoHAnimJoint1162 = new SoHAnimJoint();
SoHAnimJoint1162->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1162->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1162->setCenter(new float[]{-0.2,0.755,-0.085});
SoHAnimJoint1162->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint1162->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1163 = new SoHAnimSegment();
SoHAnimSegment1163->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimSegment1163->setDEF(QString("Joe_r_carpal_middle_phalanx_5"));
SoShape* SoShape1164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1165 = new SoVRMLAppearance();
SoVRMLAppearance1165->setUSE(QString("SegmentLine"));
SoShape1164->addChild(*SoVRMLAppearance1165);

SoIndexedLineSet* SoIndexedLineSet1166 = new SoIndexedLineSet();
SoIndexedLineSet1166->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1167 = new SoCoordinate();
SoCoordinate1167->setPoint(new float[]{-0.2,0.755,-0.085,-0.2,0.735,-0.085}, 6);
SoIndexedLineSet1166->setCoord(*SoCoordinate1167);

SoShape1164->setGeometry(*SoIndexedLineSet1166);

SoHAnimSegment1163->addChild(*SoShape1164);

SoTransform* SoTransform1168 = new SoTransform();
SoTransform1168->setTranslation(new float[]{-0.2,0.755,-0.085});
SoShape* SoShape1169 = new SoShape();
SoShape1169->setUSE(QString("jointbox"));
SoTransform1168->addChild(*SoShape1169);

SoHAnimSegment1163->addChild(*SoTransform1168);

SoHAnimJoint1162->addChildren(*SoHAnimSegment1163);

SoHAnimJoint* SoHAnimJoint1170 = new SoHAnimJoint();
SoHAnimJoint1170->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1170->setDEF(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1170->setCenter(new float[]{-0.2,0.735,-0.09});
SoHAnimJoint1170->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint1170->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1171 = new SoHAnimSegment();
SoHAnimSegment1171->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSegment1171->setDEF(QString("Joe_r_carpal_distal_phalanx_5"));
SoShape* SoShape1172 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1173 = new SoVRMLAppearance();
SoVRMLAppearance1173->setUSE(QString("SegmentLine"));
SoShape1172->addChild(*SoVRMLAppearance1173);

SoIndexedLineSet* SoIndexedLineSet1174 = new SoIndexedLineSet();
SoIndexedLineSet1174->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1175 = new SoCoordinate();
SoCoordinate1175->setPoint(new float[]{-0.2,0.735,-0.085,-0.2,0.72,-0.085}, 6);
SoIndexedLineSet1174->setCoord(*SoCoordinate1175);

SoShape1172->setGeometry(*SoIndexedLineSet1174);

SoHAnimSegment1171->addChild(*SoShape1172);

SoTransform* SoTransform1176 = new SoTransform();
SoTransform1176->setTranslation(new float[]{-0.2,0.735,-0.085});
SoShape* SoShape1177 = new SoShape();
SoShape1177->setUSE(QString("jointbox"));
SoTransform1176->addChild(*SoShape1177);

SoHAnimSegment1171->addChild(*SoTransform1176);

SoHAnimSite* SoHAnimSite1178 = new SoHAnimSite();
SoHAnimSite1178->X3DNode::setName(QString("r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1178->setDEF(QString("Joe_r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1178->setTranslation(new float[]{-0.2,0.72,-0.085});
SoShape* SoShape1179 = new SoShape();
SoShape1179->setUSE(QString("sitebox"));
SoHAnimSite1178->addChild(*SoShape1179);

SoHAnimSegment1171->addChild(*SoHAnimSite1178);

SoHAnimJoint1170->addChildren(*SoHAnimSegment1171);

SoHAnimJoint1162->addChildren(*SoHAnimJoint1170);

SoHAnimJoint1154->addChildren(*SoHAnimJoint1162);

SoHAnimJoint1144->addChildren(*SoHAnimJoint1154);

SoHAnimJoint1000->addChildren(*SoHAnimJoint1144);

SoHAnimJoint978->addChildren(*SoHAnimJoint1000);

SoHAnimJoint948->addChildren(*SoHAnimJoint978);

SoHAnimJoint932->addChildren(*SoHAnimJoint948);

SoHAnimJoint922->addChildren(*SoHAnimJoint932);

SoHAnimJoint556->addChildren(*SoHAnimJoint922);

SoHAnimJoint548->addChildren(*SoHAnimJoint556);

SoHAnimJoint540->addChildren(*SoHAnimJoint548);

SoHAnimJoint530->addChildren(*SoHAnimJoint540);

SoHAnimJoint522->addChildren(*SoHAnimJoint530);

SoHAnimJoint514->addChildren(*SoHAnimJoint522);

SoHAnimJoint506->addChildren(*SoHAnimJoint514);

SoHAnimJoint498->addChildren(*SoHAnimJoint506);

SoHAnimJoint486->addChildren(*SoHAnimJoint498);

SoHAnimJoint476->addChildren(*SoHAnimJoint486);

SoHAnimJoint468->addChildren(*SoHAnimJoint476);

SoHAnimJoint460->addChildren(*SoHAnimJoint468);

SoHAnimJoint452->addChildren(*SoHAnimJoint460);

SoHAnimJoint426->addChildren(*SoHAnimJoint452);

SoHAnimJoint418->addChildren(*SoHAnimJoint426);

SoHAnimJoint410->addChildren(*SoHAnimJoint418);

SoHAnimJoint395->addChildren(*SoHAnimJoint410);

SoHAnimJoint81->addChildren(*SoHAnimJoint395);

SoHAnimHumanoid78->setSkeleton(*SoHAnimJoint81);

SoShape* SoShape1180 = new SoShape();
SoShape1180->setDEF(QString("SkinShape"));
SoVRMLAppearance* SoVRMLAppearance1181 = new SoVRMLAppearance();
SoVRMLAppearance1181->setDEF(QString("SkinAppearance"));
SoMaterial* SoMaterial1182 = new SoMaterial();
SoMaterial1182->setDEF(QString("SkinMaterial"));
SoMaterial1182->setAmbientIntensity(0.6);
SoMaterial1182->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial1182->setShininess(0.6);
SoMaterial1182->setTransparency(0.2);
SoVRMLAppearance1181->addChild(*SoMaterial1182);

SoImageTexture* SoImageTexture1183 = new SoImageTexture();
SoImageTexture1183->setDEF(QString("zBlueSpiralBkg2"));
SoImageTexture1183->setDescription(QString("Blue Spiral Pattern"));
SoImageTexture1183->setUrl(new QString[]{QString("zBlueSpiralBkg2.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 2);
SoVRMLAppearance1181->addChild(*SoImageTexture1183);

SoShape1180->addChild(*SoVRMLAppearance1181);

SoIndexedFaceSet* SoIndexedFaceSet1184 = new SoIndexedFaceSet();
SoIndexedFaceSet1184->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoIndexedFaceSet1184->setCreaseAngle(3.1);
SoColor* SoColor1185 = new SoColor();
SoColor1185->setColor(new float[]{1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0}, 2079);
SoIndexedFaceSet1184->setColor(*SoColor1185);

SoCoordinate* SoCoordinate1186 = new SoCoordinate();
SoCoordinate1186->setDEF(QString("TheSkinCoord"));
SoCoordinate1186->setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
SoIndexedFaceSet1184->setCoord(*SoCoordinate1186);

SoShape1180->setGeometry(*SoIndexedFaceSet1184);

SoHAnimHumanoid78->setSkin(*SoShape1180);

SoCoordinate* SoCoordinate1187 = new SoCoordinate();
SoCoordinate1187->setUSE(QString("TheSkinCoord"));
SoHAnimHumanoid78->setSkinCoord(*SoCoordinate1187);

SoHAnimJoint* SoHAnimJoint1188 = new SoHAnimJoint();
SoHAnimJoint1188->setUSE(QString("Joe_humanoid_root"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1188);

SoHAnimJoint* SoHAnimJoint1189 = new SoHAnimJoint();
SoHAnimJoint1189->setUSE(QString("Joe_sacroiliac"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1189);

SoHAnimJoint* SoHAnimJoint1190 = new SoHAnimJoint();
SoHAnimJoint1190->setUSE(QString("Joe_vl5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1190);

SoHAnimJoint* SoHAnimJoint1191 = new SoHAnimJoint();
SoHAnimJoint1191->setUSE(QString("Joe_vl4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1191);

SoHAnimJoint* SoHAnimJoint1192 = new SoHAnimJoint();
SoHAnimJoint1192->setUSE(QString("Joe_vl3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1192);

SoHAnimJoint* SoHAnimJoint1193 = new SoHAnimJoint();
SoHAnimJoint1193->setUSE(QString("Joe_vl2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1193);

SoHAnimJoint* SoHAnimJoint1194 = new SoHAnimJoint();
SoHAnimJoint1194->setUSE(QString("Joe_vl1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1194);

SoHAnimJoint* SoHAnimJoint1195 = new SoHAnimJoint();
SoHAnimJoint1195->setUSE(QString("Joe_vt12"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1195);

SoHAnimJoint* SoHAnimJoint1196 = new SoHAnimJoint();
SoHAnimJoint1196->setUSE(QString("Joe_vt11"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1196);

SoHAnimJoint* SoHAnimJoint1197 = new SoHAnimJoint();
SoHAnimJoint1197->setUSE(QString("Joe_vt10"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1197);

SoHAnimJoint* SoHAnimJoint1198 = new SoHAnimJoint();
SoHAnimJoint1198->setUSE(QString("Joe_vt9"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1198);

SoHAnimJoint* SoHAnimJoint1199 = new SoHAnimJoint();
SoHAnimJoint1199->setUSE(QString("Joe_vt8"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1199);

SoHAnimJoint* SoHAnimJoint1200 = new SoHAnimJoint();
SoHAnimJoint1200->setUSE(QString("Joe_vt7"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1200);

SoHAnimJoint* SoHAnimJoint1201 = new SoHAnimJoint();
SoHAnimJoint1201->setUSE(QString("Joe_vt6"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1201);

SoHAnimJoint* SoHAnimJoint1202 = new SoHAnimJoint();
SoHAnimJoint1202->setUSE(QString("Joe_vt5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1202);

SoHAnimJoint* SoHAnimJoint1203 = new SoHAnimJoint();
SoHAnimJoint1203->setUSE(QString("Joe_vt4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1203);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->setUSE(QString("Joe_vt3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1204);

SoHAnimJoint* SoHAnimJoint1205 = new SoHAnimJoint();
SoHAnimJoint1205->setUSE(QString("Joe_vt2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1205);

SoHAnimJoint* SoHAnimJoint1206 = new SoHAnimJoint();
SoHAnimJoint1206->setUSE(QString("Joe_vt1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1206);

SoHAnimJoint* SoHAnimJoint1207 = new SoHAnimJoint();
SoHAnimJoint1207->setUSE(QString("Joe_vc7"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1207);

SoHAnimJoint* SoHAnimJoint1208 = new SoHAnimJoint();
SoHAnimJoint1208->setUSE(QString("Joe_vc6"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1208);

SoHAnimJoint* SoHAnimJoint1209 = new SoHAnimJoint();
SoHAnimJoint1209->setUSE(QString("Joe_vc5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1209);

SoHAnimJoint* SoHAnimJoint1210 = new SoHAnimJoint();
SoHAnimJoint1210->setUSE(QString("Joe_vc4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1210);

SoHAnimJoint* SoHAnimJoint1211 = new SoHAnimJoint();
SoHAnimJoint1211->setUSE(QString("Joe_vc3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1211);

SoHAnimJoint* SoHAnimJoint1212 = new SoHAnimJoint();
SoHAnimJoint1212->setUSE(QString("Joe_vc2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1212);

SoHAnimJoint* SoHAnimJoint1213 = new SoHAnimJoint();
SoHAnimJoint1213->setUSE(QString("Joe_vc1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1213);

SoHAnimJoint* SoHAnimJoint1214 = new SoHAnimJoint();
SoHAnimJoint1214->setUSE(QString("Joe_skullbase"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1214);

SoHAnimJoint* SoHAnimJoint1215 = new SoHAnimJoint();
SoHAnimJoint1215->setUSE(QString("Joe_l_acromioclavicular"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1215);

SoHAnimJoint* SoHAnimJoint1216 = new SoHAnimJoint();
SoHAnimJoint1216->setUSE(QString("Joe_r_acromioclavicular"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1216);

SoHAnimJoint* SoHAnimJoint1217 = new SoHAnimJoint();
SoHAnimJoint1217->setUSE(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1217);

SoHAnimJoint* SoHAnimJoint1218 = new SoHAnimJoint();
SoHAnimJoint1218->setUSE(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1218);

SoHAnimJoint* SoHAnimJoint1219 = new SoHAnimJoint();
SoHAnimJoint1219->setUSE(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1219);

SoHAnimJoint* SoHAnimJoint1220 = new SoHAnimJoint();
SoHAnimJoint1220->setUSE(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1220);

SoHAnimJoint* SoHAnimJoint1221 = new SoHAnimJoint();
SoHAnimJoint1221->setUSE(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1221);

SoHAnimJoint* SoHAnimJoint1222 = new SoHAnimJoint();
SoHAnimJoint1222->setUSE(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1222);

SoHAnimJoint* SoHAnimJoint1223 = new SoHAnimJoint();
SoHAnimJoint1223->setUSE(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1223);

SoHAnimJoint* SoHAnimJoint1224 = new SoHAnimJoint();
SoHAnimJoint1224->setUSE(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1224);

SoHAnimJoint* SoHAnimJoint1225 = new SoHAnimJoint();
SoHAnimJoint1225->setUSE(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1225);

SoHAnimJoint* SoHAnimJoint1226 = new SoHAnimJoint();
SoHAnimJoint1226->setUSE(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1226);

SoHAnimJoint* SoHAnimJoint1227 = new SoHAnimJoint();
SoHAnimJoint1227->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1227);

SoHAnimJoint* SoHAnimJoint1228 = new SoHAnimJoint();
SoHAnimJoint1228->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1228);

SoHAnimJoint* SoHAnimJoint1229 = new SoHAnimJoint();
SoHAnimJoint1229->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1229);

SoHAnimJoint* SoHAnimJoint1230 = new SoHAnimJoint();
SoHAnimJoint1230->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1230);

SoHAnimJoint* SoHAnimJoint1231 = new SoHAnimJoint();
SoHAnimJoint1231->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1231);

SoHAnimJoint* SoHAnimJoint1232 = new SoHAnimJoint();
SoHAnimJoint1232->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1232);

SoHAnimJoint* SoHAnimJoint1233 = new SoHAnimJoint();
SoHAnimJoint1233->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1233);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1234);

SoHAnimJoint* SoHAnimJoint1235 = new SoHAnimJoint();
SoHAnimJoint1235->setUSE(QString("Joe_l_carpometacarpal_1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1235);

SoHAnimJoint* SoHAnimJoint1236 = new SoHAnimJoint();
SoHAnimJoint1236->setUSE(QString("Joe_r_carpometacarpal_1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1236);

SoHAnimJoint* SoHAnimJoint1237 = new SoHAnimJoint();
SoHAnimJoint1237->setUSE(QString("Joe_l_carpometacarpal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1237);

SoHAnimJoint* SoHAnimJoint1238 = new SoHAnimJoint();
SoHAnimJoint1238->setUSE(QString("Joe_r_carpometacarpal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1238);

SoHAnimJoint* SoHAnimJoint1239 = new SoHAnimJoint();
SoHAnimJoint1239->setUSE(QString("Joe_l_carpometacarpal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1239);

SoHAnimJoint* SoHAnimJoint1240 = new SoHAnimJoint();
SoHAnimJoint1240->setUSE(QString("Joe_r_carpometacarpal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1240);

SoHAnimJoint* SoHAnimJoint1241 = new SoHAnimJoint();
SoHAnimJoint1241->setUSE(QString("Joe_l_carpometacarpal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1241);

SoHAnimJoint* SoHAnimJoint1242 = new SoHAnimJoint();
SoHAnimJoint1242->setUSE(QString("Joe_r_carpometacarpal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1242);

SoHAnimJoint* SoHAnimJoint1243 = new SoHAnimJoint();
SoHAnimJoint1243->setUSE(QString("Joe_l_carpometacarpal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1243);

SoHAnimJoint* SoHAnimJoint1244 = new SoHAnimJoint();
SoHAnimJoint1244->setUSE(QString("Joe_r_carpometacarpal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1244);

SoHAnimJoint* SoHAnimJoint1245 = new SoHAnimJoint();
SoHAnimJoint1245->setUSE(QString("Joe_l_elbow"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1245);

SoHAnimJoint* SoHAnimJoint1246 = new SoHAnimJoint();
SoHAnimJoint1246->setUSE(QString("Joe_r_elbow"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1246);

SoHAnimJoint* SoHAnimJoint1247 = new SoHAnimJoint();
SoHAnimJoint1247->setUSE(QString("Joe_l_eyeball_joint"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1247);

SoHAnimJoint* SoHAnimJoint1248 = new SoHAnimJoint();
SoHAnimJoint1248->setUSE(QString("Joe_r_eyeball_joint"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1248);

SoHAnimJoint* SoHAnimJoint1249 = new SoHAnimJoint();
SoHAnimJoint1249->setUSE(QString("Joe_l_hip"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1249);

SoHAnimJoint* SoHAnimJoint1250 = new SoHAnimJoint();
SoHAnimJoint1250->setUSE(QString("Joe_r_hip"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1250);

SoHAnimJoint* SoHAnimJoint1251 = new SoHAnimJoint();
SoHAnimJoint1251->setUSE(QString("Joe_l_knee"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1251);

SoHAnimJoint* SoHAnimJoint1252 = new SoHAnimJoint();
SoHAnimJoint1252->setUSE(QString("Joe_r_knee"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1252);

SoHAnimJoint* SoHAnimJoint1253 = new SoHAnimJoint();
SoHAnimJoint1253->setUSE(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1253);

SoHAnimJoint* SoHAnimJoint1254 = new SoHAnimJoint();
SoHAnimJoint1254->setUSE(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1254);

SoHAnimJoint* SoHAnimJoint1255 = new SoHAnimJoint();
SoHAnimJoint1255->setUSE(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1255);

SoHAnimJoint* SoHAnimJoint1256 = new SoHAnimJoint();
SoHAnimJoint1256->setUSE(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1256);

SoHAnimJoint* SoHAnimJoint1257 = new SoHAnimJoint();
SoHAnimJoint1257->setUSE(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1257);

SoHAnimJoint* SoHAnimJoint1258 = new SoHAnimJoint();
SoHAnimJoint1258->setUSE(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1258);

SoHAnimJoint* SoHAnimJoint1259 = new SoHAnimJoint();
SoHAnimJoint1259->setUSE(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1259);

SoHAnimJoint* SoHAnimJoint1260 = new SoHAnimJoint();
SoHAnimJoint1260->setUSE(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1260);

SoHAnimJoint* SoHAnimJoint1261 = new SoHAnimJoint();
SoHAnimJoint1261->setUSE(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1261);

SoHAnimJoint* SoHAnimJoint1262 = new SoHAnimJoint();
SoHAnimJoint1262->setUSE(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1262);

SoHAnimJoint* SoHAnimJoint1263 = new SoHAnimJoint();
SoHAnimJoint1263->setUSE(QString("Joe_l_metatarsal"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1263);

SoHAnimJoint* SoHAnimJoint1264 = new SoHAnimJoint();
SoHAnimJoint1264->setUSE(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1264);

SoHAnimJoint* SoHAnimJoint1265 = new SoHAnimJoint();
SoHAnimJoint1265->setUSE(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1265);

SoHAnimJoint* SoHAnimJoint1266 = new SoHAnimJoint();
SoHAnimJoint1266->setUSE(QString("Joe_l_radiocarpal"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1266);

SoHAnimJoint* SoHAnimJoint1267 = new SoHAnimJoint();
SoHAnimJoint1267->setUSE(QString("Joe_r_radiocarpal"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1267);

SoHAnimJoint* SoHAnimJoint1268 = new SoHAnimJoint();
SoHAnimJoint1268->setUSE(QString("Joe_l_shoulder"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1268);

SoHAnimJoint* SoHAnimJoint1269 = new SoHAnimJoint();
SoHAnimJoint1269->setUSE(QString("Joe_r_shoulder"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1269);

SoHAnimJoint* SoHAnimJoint1270 = new SoHAnimJoint();
SoHAnimJoint1270->setUSE(QString("Joe_l_sternoclavicular"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1270);

SoHAnimJoint* SoHAnimJoint1271 = new SoHAnimJoint();
SoHAnimJoint1271->setUSE(QString("Joe_r_sternoclavicular"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1271);

SoHAnimJoint* SoHAnimJoint1272 = new SoHAnimJoint();
SoHAnimJoint1272->setUSE(QString("Joe_l_talocrural"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1272);

SoHAnimJoint* SoHAnimJoint1273 = new SoHAnimJoint();
SoHAnimJoint1273->setUSE(QString("Joe_r_talocrural"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1273);

SoHAnimJoint* SoHAnimJoint1274 = new SoHAnimJoint();
SoHAnimJoint1274->setUSE(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1274);

SoHAnimJoint* SoHAnimJoint1275 = new SoHAnimJoint();
SoHAnimJoint1275->setUSE(QString("Joe_l_tarsometatarsal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1275);

SoHAnimJoint* SoHAnimJoint1276 = new SoHAnimJoint();
SoHAnimJoint1276->setUSE(QString("Joe_r_tarsometatarsal_2"));
SoHAnimHumanoid78->setJoints(*SoHAnimJoint1276);

SoHAnimSegment* SoHAnimSegment1277 = new SoHAnimSegment();
SoHAnimSegment1277->setUSE(QString("Joe_c1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1277);

SoHAnimSegment* SoHAnimSegment1278 = new SoHAnimSegment();
SoHAnimSegment1278->setUSE(QString("Joe_c2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1278);

SoHAnimSegment* SoHAnimSegment1279 = new SoHAnimSegment();
SoHAnimSegment1279->setUSE(QString("Joe_c3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1279);

SoHAnimSegment* SoHAnimSegment1280 = new SoHAnimSegment();
SoHAnimSegment1280->setUSE(QString("Joe_c4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1280);

SoHAnimSegment* SoHAnimSegment1281 = new SoHAnimSegment();
SoHAnimSegment1281->setUSE(QString("Joe_c5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1281);

SoHAnimSegment* SoHAnimSegment1282 = new SoHAnimSegment();
SoHAnimSegment1282->setUSE(QString("Joe_c6"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1282);

SoHAnimSegment* SoHAnimSegment1283 = new SoHAnimSegment();
SoHAnimSegment1283->setUSE(QString("Joe_c7"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1283);

SoHAnimSegment* SoHAnimSegment1284 = new SoHAnimSegment();
SoHAnimSegment1284->setUSE(QString("Joe_l1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1284);

SoHAnimSegment* SoHAnimSegment1285 = new SoHAnimSegment();
SoHAnimSegment1285->setUSE(QString("Joe_l2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1285);

SoHAnimSegment* SoHAnimSegment1286 = new SoHAnimSegment();
SoHAnimSegment1286->setUSE(QString("Joe_l3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1286);

SoHAnimSegment* SoHAnimSegment1287 = new SoHAnimSegment();
SoHAnimSegment1287->setUSE(QString("Joe_l4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1287);

SoHAnimSegment* SoHAnimSegment1288 = new SoHAnimSegment();
SoHAnimSegment1288->setUSE(QString("Joe_l5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1288);

SoHAnimSegment* SoHAnimSegment1289 = new SoHAnimSegment();
SoHAnimSegment1289->setUSE(QString("Joe_pelvis"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1289);

SoHAnimSegment* SoHAnimSegment1290 = new SoHAnimSegment();
SoHAnimSegment1290->setUSE(QString("Joe_sacrum"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1290);

SoHAnimSegment* SoHAnimSegment1291 = new SoHAnimSegment();
SoHAnimSegment1291->setUSE(QString("Joe_skull"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1291);

SoHAnimSegment* SoHAnimSegment1292 = new SoHAnimSegment();
SoHAnimSegment1292->setUSE(QString("Joe_t1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1292);

SoHAnimSegment* SoHAnimSegment1293 = new SoHAnimSegment();
SoHAnimSegment1293->setUSE(QString("Joe_t10"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1293);

SoHAnimSegment* SoHAnimSegment1294 = new SoHAnimSegment();
SoHAnimSegment1294->setUSE(QString("Joe_t11"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1294);

SoHAnimSegment* SoHAnimSegment1295 = new SoHAnimSegment();
SoHAnimSegment1295->setUSE(QString("Joe_t12"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1295);

SoHAnimSegment* SoHAnimSegment1296 = new SoHAnimSegment();
SoHAnimSegment1296->setUSE(QString("Joe_t2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1296);

SoHAnimSegment* SoHAnimSegment1297 = new SoHAnimSegment();
SoHAnimSegment1297->setUSE(QString("Joe_t3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1297);

SoHAnimSegment* SoHAnimSegment1298 = new SoHAnimSegment();
SoHAnimSegment1298->setUSE(QString("Joe_t4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1298);

SoHAnimSegment* SoHAnimSegment1299 = new SoHAnimSegment();
SoHAnimSegment1299->setUSE(QString("Joe_t5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1299);

SoHAnimSegment* SoHAnimSegment1300 = new SoHAnimSegment();
SoHAnimSegment1300->setUSE(QString("Joe_t6"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1300);

SoHAnimSegment* SoHAnimSegment1301 = new SoHAnimSegment();
SoHAnimSegment1301->setUSE(QString("Joe_t7"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1301);

SoHAnimSegment* SoHAnimSegment1302 = new SoHAnimSegment();
SoHAnimSegment1302->setUSE(QString("Joe_t8"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1302);

SoHAnimSegment* SoHAnimSegment1303 = new SoHAnimSegment();
SoHAnimSegment1303->setUSE(QString("Joe_t9"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1303);

SoHAnimSegment* SoHAnimSegment1304 = new SoHAnimSegment();
SoHAnimSegment1304->setUSE(QString("Joe_toPelvis"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1304);

SoHAnimSegment* SoHAnimSegment1305 = new SoHAnimSegment();
SoHAnimSegment1305->setUSE(QString("Joe_l_calf"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1305);

SoHAnimSegment* SoHAnimSegment1306 = new SoHAnimSegment();
SoHAnimSegment1306->setUSE(QString("Joe_r_calf"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1306);

SoHAnimSegment* SoHAnimSegment1307 = new SoHAnimSegment();
SoHAnimSegment1307->setUSE(QString("Joe_l_carpal"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1307);

SoHAnimSegment* SoHAnimSegment1308 = new SoHAnimSegment();
SoHAnimSegment1308->setUSE(QString("Joe_r_carpal"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1308);

SoHAnimSegment* SoHAnimSegment1309 = new SoHAnimSegment();
SoHAnimSegment1309->setUSE(QString("Joe_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1309);

SoHAnimSegment* SoHAnimSegment1310 = new SoHAnimSegment();
SoHAnimSegment1310->setUSE(QString("Joe_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1310);

SoHAnimSegment* SoHAnimSegment1311 = new SoHAnimSegment();
SoHAnimSegment1311->setUSE(QString("Joe_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1311);

SoHAnimSegment* SoHAnimSegment1312 = new SoHAnimSegment();
SoHAnimSegment1312->setUSE(QString("Joe_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1312);

SoHAnimSegment* SoHAnimSegment1313 = new SoHAnimSegment();
SoHAnimSegment1313->setUSE(QString("Joe_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1313);

SoHAnimSegment* SoHAnimSegment1314 = new SoHAnimSegment();
SoHAnimSegment1314->setUSE(QString("Joe_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1314);

SoHAnimSegment* SoHAnimSegment1315 = new SoHAnimSegment();
SoHAnimSegment1315->setUSE(QString("Joe_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1315);

SoHAnimSegment* SoHAnimSegment1316 = new SoHAnimSegment();
SoHAnimSegment1316->setUSE(QString("Joe_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1316);

SoHAnimSegment* SoHAnimSegment1317 = new SoHAnimSegment();
SoHAnimSegment1317->setUSE(QString("Joe_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1317);

SoHAnimSegment* SoHAnimSegment1318 = new SoHAnimSegment();
SoHAnimSegment1318->setUSE(QString("Joe_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1318);

SoHAnimSegment* SoHAnimSegment1319 = new SoHAnimSegment();
SoHAnimSegment1319->setUSE(QString("Joe_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1319);

SoHAnimSegment* SoHAnimSegment1320 = new SoHAnimSegment();
SoHAnimSegment1320->setUSE(QString("Joe_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1320);

SoHAnimSegment* SoHAnimSegment1321 = new SoHAnimSegment();
SoHAnimSegment1321->setUSE(QString("Joe_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1321);

SoHAnimSegment* SoHAnimSegment1322 = new SoHAnimSegment();
SoHAnimSegment1322->setUSE(QString("Joe_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1322);

SoHAnimSegment* SoHAnimSegment1323 = new SoHAnimSegment();
SoHAnimSegment1323->setUSE(QString("Joe_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1323);

SoHAnimSegment* SoHAnimSegment1324 = new SoHAnimSegment();
SoHAnimSegment1324->setUSE(QString("Joe_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1324);

SoHAnimSegment* SoHAnimSegment1325 = new SoHAnimSegment();
SoHAnimSegment1325->setUSE(QString("Joe_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1325);

SoHAnimSegment* SoHAnimSegment1326 = new SoHAnimSegment();
SoHAnimSegment1326->setUSE(QString("Joe_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1326);

SoHAnimSegment* SoHAnimSegment1327 = new SoHAnimSegment();
SoHAnimSegment1327->setUSE(QString("Joe_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1327);

SoHAnimSegment* SoHAnimSegment1328 = new SoHAnimSegment();
SoHAnimSegment1328->setUSE(QString("Joe_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1328);

SoHAnimSegment* SoHAnimSegment1329 = new SoHAnimSegment();
SoHAnimSegment1329->setUSE(QString("Joe_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1329);

SoHAnimSegment* SoHAnimSegment1330 = new SoHAnimSegment();
SoHAnimSegment1330->setUSE(QString("Joe_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1330);

SoHAnimSegment* SoHAnimSegment1331 = new SoHAnimSegment();
SoHAnimSegment1331->setUSE(QString("Joe_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1331);

SoHAnimSegment* SoHAnimSegment1332 = new SoHAnimSegment();
SoHAnimSegment1332->setUSE(QString("Joe_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1332);

SoHAnimSegment* SoHAnimSegment1333 = new SoHAnimSegment();
SoHAnimSegment1333->setUSE(QString("Joe_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1333);

SoHAnimSegment* SoHAnimSegment1334 = new SoHAnimSegment();
SoHAnimSegment1334->setUSE(QString("Joe_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1334);

SoHAnimSegment* SoHAnimSegment1335 = new SoHAnimSegment();
SoHAnimSegment1335->setUSE(QString("Joe_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1335);

SoHAnimSegment* SoHAnimSegment1336 = new SoHAnimSegment();
SoHAnimSegment1336->setUSE(QString("Joe_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1336);

SoHAnimSegment* SoHAnimSegment1337 = new SoHAnimSegment();
SoHAnimSegment1337->setUSE(QString("Joe_l_clavicle"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1337);

SoHAnimSegment* SoHAnimSegment1338 = new SoHAnimSegment();
SoHAnimSegment1338->setUSE(QString("Joe_r_clavicle"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1338);

SoHAnimSegment* SoHAnimSegment1339 = new SoHAnimSegment();
SoHAnimSegment1339->setUSE(QString("Joe_l_eyeball"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1339);

SoHAnimSegment* SoHAnimSegment1340 = new SoHAnimSegment();
SoHAnimSegment1340->setUSE(QString("Joe_r_eyeball"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1340);

SoHAnimSegment* SoHAnimSegment1341 = new SoHAnimSegment();
SoHAnimSegment1341->setUSE(QString("Joe_l_forearm"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1341);

SoHAnimSegment* SoHAnimSegment1342 = new SoHAnimSegment();
SoHAnimSegment1342->setUSE(QString("Joe_r_forearm"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1342);

SoHAnimSegment* SoHAnimSegment1343 = new SoHAnimSegment();
SoHAnimSegment1343->setUSE(QString("Joe_l_metacarpal_1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1343);

SoHAnimSegment* SoHAnimSegment1344 = new SoHAnimSegment();
SoHAnimSegment1344->setUSE(QString("Joe_r_metacarpal_1"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1344);

SoHAnimSegment* SoHAnimSegment1345 = new SoHAnimSegment();
SoHAnimSegment1345->setUSE(QString("Joe_l_metacarpal_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1345);

SoHAnimSegment* SoHAnimSegment1346 = new SoHAnimSegment();
SoHAnimSegment1346->setUSE(QString("Joe_r_metacarpal_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1346);

SoHAnimSegment* SoHAnimSegment1347 = new SoHAnimSegment();
SoHAnimSegment1347->setUSE(QString("Joe_l_metacarpal_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1347);

SoHAnimSegment* SoHAnimSegment1348 = new SoHAnimSegment();
SoHAnimSegment1348->setUSE(QString("Joe_r_metacarpal_3"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1348);

SoHAnimSegment* SoHAnimSegment1349 = new SoHAnimSegment();
SoHAnimSegment1349->setUSE(QString("Joe_l_metacarpal_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1349);

SoHAnimSegment* SoHAnimSegment1350 = new SoHAnimSegment();
SoHAnimSegment1350->setUSE(QString("Joe_r_metacarpal_4"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1350);

SoHAnimSegment* SoHAnimSegment1351 = new SoHAnimSegment();
SoHAnimSegment1351->setUSE(QString("Joe_l_metacarpal_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1351);

SoHAnimSegment* SoHAnimSegment1352 = new SoHAnimSegment();
SoHAnimSegment1352->setUSE(QString("Joe_r_metacarpal_5"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1352);

SoHAnimSegment* SoHAnimSegment1353 = new SoHAnimSegment();
SoHAnimSegment1353->setUSE(QString("Joe_l_metatarsal_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1353);

SoHAnimSegment* SoHAnimSegment1354 = new SoHAnimSegment();
SoHAnimSegment1354->setUSE(QString("Joe_r_metatarsal_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1354);

SoHAnimSegment* SoHAnimSegment1355 = new SoHAnimSegment();
SoHAnimSegment1355->setUSE(QString("Joe_l_scapula"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1355);

SoHAnimSegment* SoHAnimSegment1356 = new SoHAnimSegment();
SoHAnimSegment1356->setUSE(QString("Joe_r_scapula"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1356);

SoHAnimSegment* SoHAnimSegment1357 = new SoHAnimSegment();
SoHAnimSegment1357->setUSE(QString("Joe_l_talus"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1357);

SoHAnimSegment* SoHAnimSegment1358 = new SoHAnimSegment();
SoHAnimSegment1358->setUSE(QString("Joe_r_talus"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1358);

SoHAnimSegment* SoHAnimSegment1359 = new SoHAnimSegment();
SoHAnimSegment1359->setUSE(QString("Joe_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1359);

SoHAnimSegment* SoHAnimSegment1360 = new SoHAnimSegment();
SoHAnimSegment1360->setUSE(QString("Joe_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1360);

SoHAnimSegment* SoHAnimSegment1361 = new SoHAnimSegment();
SoHAnimSegment1361->setUSE(QString("Joe_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1361);

SoHAnimSegment* SoHAnimSegment1362 = new SoHAnimSegment();
SoHAnimSegment1362->setUSE(QString("Joe_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1362);

SoHAnimSegment* SoHAnimSegment1363 = new SoHAnimSegment();
SoHAnimSegment1363->setUSE(QString("Joe_l_thigh"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1363);

SoHAnimSegment* SoHAnimSegment1364 = new SoHAnimSegment();
SoHAnimSegment1364->setUSE(QString("Joe_r_thigh"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1364);

SoHAnimSegment* SoHAnimSegment1365 = new SoHAnimSegment();
SoHAnimSegment1365->setUSE(QString("Joe_l_upperarm"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1365);

SoHAnimSegment* SoHAnimSegment1366 = new SoHAnimSegment();
SoHAnimSegment1366->setUSE(QString("Joe_r_upperarm"));
SoHAnimHumanoid78->setSegments(*SoHAnimSegment1366);

SoHAnimSite* SoHAnimSite1367 = new SoHAnimSite();
SoHAnimSite1367->setUSE(QString("Joe_cervicale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1367);

SoHAnimSite* SoHAnimSite1368 = new SoHAnimSite();
SoHAnimSite1368->setUSE(QString("Joe_crotch_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1368);

SoHAnimSite* SoHAnimSite1369 = new SoHAnimSite();
SoHAnimSite1369->setUSE(QString("Joe_floormarker_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1369);

SoHAnimSite* SoHAnimSite1370 = new SoHAnimSite();
SoHAnimSite1370->setUSE(QString("Joe_navel_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1370);

SoHAnimSite* SoHAnimSite1371 = new SoHAnimSite();
SoHAnimSite1371->setUSE(QString("Joe_nuchale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1371);

SoHAnimSite* SoHAnimSite1372 = new SoHAnimSite();
SoHAnimSite1372->setUSE(QString("Joe_rib10_midspine_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1372);

SoHAnimSite* SoHAnimSite1373 = new SoHAnimSite();
SoHAnimSite1373->setUSE(QString("Joe_sellion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1373);

SoHAnimSite* SoHAnimSite1374 = new SoHAnimSite();
SoHAnimSite1374->setUSE(QString("Joe_skull_vertex_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1374);

SoHAnimSite* SoHAnimSite1375 = new SoHAnimSite();
SoHAnimSite1375->setUSE(QString("Joe_substernale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1375);

SoHAnimSite* SoHAnimSite1376 = new SoHAnimSite();
SoHAnimSite1376->setUSE(QString("Joe_supramenton_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1376);

SoHAnimSite* SoHAnimSite1377 = new SoHAnimSite();
SoHAnimSite1377->setUSE(QString("Joe_suprasternale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1377);

SoHAnimSite* SoHAnimSite1378 = new SoHAnimSite();
SoHAnimSite1378->setUSE(QString("Joe_waist_preferred_posterior_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1378);

SoHAnimSite* SoHAnimSite1379 = new SoHAnimSite();
SoHAnimSite1379->setUSE(QString("Joe_l_acromion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1379);

SoHAnimSite* SoHAnimSite1380 = new SoHAnimSite();
SoHAnimSite1380->setUSE(QString("Joe_r_acromion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1380);

SoHAnimSite* SoHAnimSite1381 = new SoHAnimSite();
SoHAnimSite1381->setUSE(QString("Joe_l_asis_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1381);

SoHAnimSite* SoHAnimSite1382 = new SoHAnimSite();
SoHAnimSite1382->setUSE(QString("Joe_r_asis_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1382);

SoHAnimSite* SoHAnimSite1383 = new SoHAnimSite();
SoHAnimSite1383->setUSE(QString("Joe_l_axilla_distal_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1383);

SoHAnimSite* SoHAnimSite1384 = new SoHAnimSite();
SoHAnimSite1384->setUSE(QString("Joe_r_axilla_distal_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1384);

SoHAnimSite* SoHAnimSite1385 = new SoHAnimSite();
SoHAnimSite1385->setUSE(QString("Joe_l_axilla_proximal_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1385);

SoHAnimSite* SoHAnimSite1386 = new SoHAnimSite();
SoHAnimSite1386->setUSE(QString("Joe_r_axilla_proximal_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1386);

SoHAnimSite* SoHAnimSite1387 = new SoHAnimSite();
SoHAnimSite1387->setUSE(QString("Joe_l_calcaneus_posterior_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1387);

SoHAnimSite* SoHAnimSite1388 = new SoHAnimSite();
SoHAnimSite1388->setUSE(QString("Joe_r_calcaneus_posterior_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1388);

SoHAnimSite* SoHAnimSite1389 = new SoHAnimSite();
SoHAnimSite1389->setUSE(QString("Joe_l_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1389);

SoHAnimSite* SoHAnimSite1390 = new SoHAnimSite();
SoHAnimSite1390->setUSE(QString("Joe_r_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1390);

SoHAnimSite* SoHAnimSite1391 = new SoHAnimSite();
SoHAnimSite1391->setUSE(QString("Joe_l_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1391);

SoHAnimSite* SoHAnimSite1392 = new SoHAnimSite();
SoHAnimSite1392->setUSE(QString("Joe_r_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1392);

SoHAnimSite* SoHAnimSite1393 = new SoHAnimSite();
SoHAnimSite1393->setUSE(QString("Joe_l_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1393);

SoHAnimSite* SoHAnimSite1394 = new SoHAnimSite();
SoHAnimSite1394->setUSE(QString("Joe_r_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1394);

SoHAnimSite* SoHAnimSite1395 = new SoHAnimSite();
SoHAnimSite1395->setUSE(QString("Joe_l_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1395);

SoHAnimSite* SoHAnimSite1396 = new SoHAnimSite();
SoHAnimSite1396->setUSE(QString("Joe_r_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1396);

SoHAnimSite* SoHAnimSite1397 = new SoHAnimSite();
SoHAnimSite1397->setUSE(QString("Joe_l_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1397);

SoHAnimSite* SoHAnimSite1398 = new SoHAnimSite();
SoHAnimSite1398->setUSE(QString("Joe_r_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1398);

SoHAnimSite* SoHAnimSite1399 = new SoHAnimSite();
SoHAnimSite1399->setUSE(QString("Joe_l_clavicle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1399);

SoHAnimSite* SoHAnimSite1400 = new SoHAnimSite();
SoHAnimSite1400->setUSE(QString("Joe_r_clavicle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1400);

SoHAnimSite* SoHAnimSite1401 = new SoHAnimSite();
SoHAnimSite1401->setUSE(QString("Joe_l_dactylion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1401);

SoHAnimSite* SoHAnimSite1402 = new SoHAnimSite();
SoHAnimSite1402->setUSE(QString("Joe_r_dactylion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1402);

SoHAnimSite* SoHAnimSite1403 = new SoHAnimSite();
SoHAnimSite1403->setUSE(QString("Joe_l_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1403);

SoHAnimSite* SoHAnimSite1404 = new SoHAnimSite();
SoHAnimSite1404->setUSE(QString("Joe_r_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1404);

SoHAnimSite* SoHAnimSite1405 = new SoHAnimSite();
SoHAnimSite1405->setUSE(QString("Joe_l_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1405);

SoHAnimSite* SoHAnimSite1406 = new SoHAnimSite();
SoHAnimSite1406->setUSE(QString("Joe_r_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1406);

SoHAnimSite* SoHAnimSite1407 = new SoHAnimSite();
SoHAnimSite1407->setUSE(QString("Joe_l_gonion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1407);

SoHAnimSite* SoHAnimSite1408 = new SoHAnimSite();
SoHAnimSite1408->setUSE(QString("Joe_r_gonion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1408);

SoHAnimSite* SoHAnimSite1409 = new SoHAnimSite();
SoHAnimSite1409->setUSE(QString("Joe_l_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1409);

SoHAnimSite* SoHAnimSite1410 = new SoHAnimSite();
SoHAnimSite1410->setUSE(QString("Joe_r_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1410);

SoHAnimSite* SoHAnimSite1411 = new SoHAnimSite();
SoHAnimSite1411->setUSE(QString("Joe_l_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1411);

SoHAnimSite* SoHAnimSite1412 = new SoHAnimSite();
SoHAnimSite1412->setUSE(QString("Joe_r_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1412);

SoHAnimSite* SoHAnimSite1413 = new SoHAnimSite();
SoHAnimSite1413->setUSE(QString("Joe_l_iliocristale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1413);

SoHAnimSite* SoHAnimSite1414 = new SoHAnimSite();
SoHAnimSite1414->setUSE(QString("Joe_r_iliocristale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1414);

SoHAnimSite* SoHAnimSite1415 = new SoHAnimSite();
SoHAnimSite1415->setUSE(QString("Joe_l_infraorbitale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1415);

SoHAnimSite* SoHAnimSite1416 = new SoHAnimSite();
SoHAnimSite1416->setUSE(QString("Joe_r_infraorbitale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1416);

SoHAnimSite* SoHAnimSite1417 = new SoHAnimSite();
SoHAnimSite1417->setUSE(QString("Joe_l_knee_crease_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1417);

SoHAnimSite* SoHAnimSite1418 = new SoHAnimSite();
SoHAnimSite1418->setUSE(QString("Joe_r_knee_crease_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1418);

SoHAnimSite* SoHAnimSite1419 = new SoHAnimSite();
SoHAnimSite1419->setUSE(QString("Joe_l_lateral_malleolus_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1419);

SoHAnimSite* SoHAnimSite1420 = new SoHAnimSite();
SoHAnimSite1420->setUSE(QString("Joe_r_lateral_malleolus_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1420);

SoHAnimSite* SoHAnimSite1421 = new SoHAnimSite();
SoHAnimSite1421->setUSE(QString("Joe_l_medial_malleolus_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1421);

SoHAnimSite* SoHAnimSite1422 = new SoHAnimSite();
SoHAnimSite1422->setUSE(QString("Joe_r_medial_malleolus_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1422);

SoHAnimSite* SoHAnimSite1423 = new SoHAnimSite();
SoHAnimSite1423->setUSE(QString("Joe_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1423);

SoHAnimSite* SoHAnimSite1424 = new SoHAnimSite();
SoHAnimSite1424->setUSE(QString("Joe_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1424);

SoHAnimSite* SoHAnimSite1425 = new SoHAnimSite();
SoHAnimSite1425->setUSE(QString("Joe_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1425);

SoHAnimSite* SoHAnimSite1426 = new SoHAnimSite();
SoHAnimSite1426->setUSE(QString("Joe_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1426);

SoHAnimSite* SoHAnimSite1427 = new SoHAnimSite();
SoHAnimSite1427->setUSE(QString("Joe_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1427);

SoHAnimSite* SoHAnimSite1428 = new SoHAnimSite();
SoHAnimSite1428->setUSE(QString("Joe_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1428);

SoHAnimSite* SoHAnimSite1429 = new SoHAnimSite();
SoHAnimSite1429->setUSE(QString("Joe_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1429);

SoHAnimSite* SoHAnimSite1430 = new SoHAnimSite();
SoHAnimSite1430->setUSE(QString("Joe_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1430);

SoHAnimSite* SoHAnimSite1431 = new SoHAnimSite();
SoHAnimSite1431->setUSE(QString("Joe_l_neck_base_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1431);

SoHAnimSite* SoHAnimSite1432 = new SoHAnimSite();
SoHAnimSite1432->setUSE(QString("Joe_r_neck_base_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1432);

SoHAnimSite* SoHAnimSite1433 = new SoHAnimSite();
SoHAnimSite1433->setUSE(QString("Joe_l_olecranon_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1433);

SoHAnimSite* SoHAnimSite1434 = new SoHAnimSite();
SoHAnimSite1434->setUSE(QString("Joe_r_olecranon_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1434);

SoHAnimSite* SoHAnimSite1435 = new SoHAnimSite();
SoHAnimSite1435->setUSE(QString("Joe_l_psis_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1435);

SoHAnimSite* SoHAnimSite1436 = new SoHAnimSite();
SoHAnimSite1436->setUSE(QString("Joe_r_psis_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1436);

SoHAnimSite* SoHAnimSite1437 = new SoHAnimSite();
SoHAnimSite1437->setUSE(QString("Joe_l_radial_styloid_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1437);

SoHAnimSite* SoHAnimSite1438 = new SoHAnimSite();
SoHAnimSite1438->setUSE(QString("Joe_r_radial_styloid_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1438);

SoHAnimSite* SoHAnimSite1439 = new SoHAnimSite();
SoHAnimSite1439->setUSE(QString("Joe_l_radiale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1439);

SoHAnimSite* SoHAnimSite1440 = new SoHAnimSite();
SoHAnimSite1440->setUSE(QString("Joe_r_radiale_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1440);

SoHAnimSite* SoHAnimSite1441 = new SoHAnimSite();
SoHAnimSite1441->setUSE(QString("Joe_l_rib10_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1441);

SoHAnimSite* SoHAnimSite1442 = new SoHAnimSite();
SoHAnimSite1442->setUSE(QString("Joe_r_rib10_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1442);

SoHAnimSite* SoHAnimSite1443 = new SoHAnimSite();
SoHAnimSite1443->setUSE(QString("Joe_l_sphyrion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1443);

SoHAnimSite* SoHAnimSite1444 = new SoHAnimSite();
SoHAnimSite1444->setUSE(QString("Joe_r_sphyrion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1444);

SoHAnimSite* SoHAnimSite1445 = new SoHAnimSite();
SoHAnimSite1445->setUSE(QString("Joe_l_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1445);

SoHAnimSite* SoHAnimSite1446 = new SoHAnimSite();
SoHAnimSite1446->setUSE(QString("Joe_r_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1446);

SoHAnimSite* SoHAnimSite1447 = new SoHAnimSite();
SoHAnimSite1447->setUSE(QString("Joe_l_thelion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1447);

SoHAnimSite* SoHAnimSite1448 = new SoHAnimSite();
SoHAnimSite1448->setUSE(QString("Joe_r_thelion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1448);

SoHAnimSite* SoHAnimSite1449 = new SoHAnimSite();
SoHAnimSite1449->setUSE(QString("Joe_l_tragion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1449);

SoHAnimSite* SoHAnimSite1450 = new SoHAnimSite();
SoHAnimSite1450->setUSE(QString("Joe_r_tragion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1450);

SoHAnimSite* SoHAnimSite1451 = new SoHAnimSite();
SoHAnimSite1451->setUSE(QString("Joe_l_trochanterion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1451);

SoHAnimSite* SoHAnimSite1452 = new SoHAnimSite();
SoHAnimSite1452->setUSE(QString("Joe_r_trochanterion_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1452);

SoHAnimSite* SoHAnimSite1453 = new SoHAnimSite();
SoHAnimSite1453->setUSE(QString("Joe_l_ulnar_styloid_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1453);

SoHAnimSite* SoHAnimSite1454 = new SoHAnimSite();
SoHAnimSite1454->setUSE(QString("Joe_r_ulnar_styloid_pt"));
SoHAnimHumanoid78->setSites(*SoHAnimSite1454);

SoGroup77->addChild(*SoHAnimHumanoid78);

SoGroup76->addChild(*SoGroup77);

SoNode33->addChild(*SoGroup76);

SoTimeSensor* SoTimeSensor1455 = new SoTimeSensor();
SoTimeSensor1455->setDEF(QString("Time1"));
SoTimeSensor1455->setCycleInterval(2.86);
SoTimeSensor1455->setLoop(true);
SoNode33->addChild(*SoTimeSensor1455);

SoTimeSensor* SoTimeSensor1456 = new SoTimeSensor();
SoTimeSensor1456->setDEF(QString("Time2"));
SoTimeSensor1456->setCycleInterval(5.72);
SoTimeSensor1456->setLoop(true);
SoNode33->addChild(*SoTimeSensor1456);

SoTimeSensor* SoTimeSensor1457 = new SoTimeSensor();
SoTimeSensor1457->setDEF(QString("Time3"));
SoTimeSensor1457->setCycleInterval(5.8);
SoTimeSensor1457->setLoop(true);
SoNode33->addChild(*SoTimeSensor1457);

SoOrientationInterpolator* SoOrientationInterpolator1458 = new SoOrientationInterpolator();
SoOrientationInterpolator1458->setDEF(QString("Pitch"));
SoOrientationInterpolator1458->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1458->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.256,1.0,0.0,0.0,2.512,1.0,0.0,0.0,3.768,1.0,0.0,0.0,5.024,1.0,0.0,0.0,6.28}, 24);
SoNode33->addChild(*SoOrientationInterpolator1458);

SoOrientationInterpolator* SoOrientationInterpolator1459 = new SoOrientationInterpolator();
SoOrientationInterpolator1459->setDEF(QString("Yaw"));
SoOrientationInterpolator1459->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1459->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.256,0.0,1.0,0.0,2.512,0.0,1.0,0.0,3.768,0.0,1.0,0.0,5.024,0.0,1.0,0.0,6.28}, 24);
SoNode33->addChild(*SoOrientationInterpolator1459);

SoOrientationInterpolator* SoOrientationInterpolator1460 = new SoOrientationInterpolator();
SoOrientationInterpolator1460->setDEF(QString("Roll"));
SoOrientationInterpolator1460->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1460->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.256,0.0,0.0,1.0,2.512,0.0,0.0,1.0,3.768,0.0,0.0,1.0,5.024,0.0,0.0,1.0,6.28}, 24);
SoNode33->addChild(*SoOrientationInterpolator1460);

SoOrientationInterpolator* SoOrientationInterpolator1461 = new SoOrientationInterpolator();
SoOrientationInterpolator1461->setDEF(QString("vc6Yaw"));
SoOrientationInterpolator1461->setKey(new float[]{0.0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 9);
SoOrientationInterpolator1461->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.7,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.0,0.5,-0.4,-1.0,0.0,0.7,-0.4,-1.0,0.0,0.4,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 36);
SoNode33->addChild(*SoOrientationInterpolator1461);

SoROUTE* SoROUTE1462 = new SoROUTE();
SoROUTE1462->setFromField(QString("fraction_changed"));
SoROUTE1462->setFromNode(QString("Time2"));
SoROUTE1462->setToField(QString("set_fraction"));
SoROUTE1462->setToNode(QString("vc6Yaw"));
SoNode33->addChild(*SoROUTE1462);

SoROUTE* SoROUTE1463 = new SoROUTE();
SoROUTE1463->setFromField(QString("value_changed"));
SoROUTE1463->setFromNode(QString("vc6Yaw"));
SoROUTE1463->setToField(QString("set_rotation"));
SoROUTE1463->setToNode(QString("Joe_vc6"));
SoNode33->addChild(*SoROUTE1463);

SoOrientationInterpolator* SoOrientationInterpolator1464 = new SoOrientationInterpolator();
SoOrientationInterpolator1464->setDEF(QString("EyeballsRotation"));
SoOrientationInterpolator1464->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1.0}, 10);
SoOrientationInterpolator1464->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.2,0.2,0.2,0.2,-0.2,0.2,0.2,0.2,-0.2,-0.2,0.2,0.2,0.2,-0.2,0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 40);
SoNode33->addChild(*SoOrientationInterpolator1464);

SoROUTE* SoROUTE1465 = new SoROUTE();
SoROUTE1465->setFromField(QString("fraction_changed"));
SoROUTE1465->setFromNode(QString("Time3"));
SoROUTE1465->setToField(QString("set_fraction"));
SoROUTE1465->setToNode(QString("EyeballsRotation"));
SoNode33->addChild(*SoROUTE1465);

SoROUTE* SoROUTE1466 = new SoROUTE();
SoROUTE1466->setFromField(QString("value_changed"));
SoROUTE1466->setFromNode(QString("EyeballsRotation"));
SoROUTE1466->setToField(QString("set_rotation"));
SoROUTE1466->setToNode(QString("Joe_r_eyeball_joint"));
SoNode33->addChild(*SoROUTE1466);

SoROUTE* SoROUTE1467 = new SoROUTE();
SoROUTE1467->setFromField(QString("value_changed"));
SoROUTE1467->setFromNode(QString("EyeballsRotation"));
SoROUTE1467->setToField(QString("set_rotation"));
SoROUTE1467->setToNode(QString("Joe_l_eyeball_joint"));
SoNode33->addChild(*SoROUTE1467);

SoOrientationInterpolator* SoOrientationInterpolator1468 = new SoOrientationInterpolator();
SoOrientationInterpolator1468->setDEF(QString("r_sternoclavicularRelax"));
SoOrientationInterpolator1468->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1468->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.2,-1.0,0.0,0.11,0.2,-1.0,0.0,0.11,0.1,-1.0,0.0,0.1,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1468);

SoOrientationInterpolator* SoOrientationInterpolator1469 = new SoOrientationInterpolator();
SoOrientationInterpolator1469->setDEF(QString("r_acromioclavicularRelax"));
SoOrientationInterpolator1469->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1469->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1469);

SoOrientationInterpolator* SoOrientationInterpolator1470 = new SoOrientationInterpolator();
SoOrientationInterpolator1470->setDEF(QString("r_shoulderRelax"));
SoOrientationInterpolator1470->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1470->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1470);

SoOrientationInterpolator* SoOrientationInterpolator1471 = new SoOrientationInterpolator();
SoOrientationInterpolator1471->setDEF(QString("r_elbowRelax"));
SoOrientationInterpolator1471->setKey(new float[]{0.0,0.15,0.4,0.6,0.9,1.0}, 6);
SoOrientationInterpolator1471->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.2,0.0,0.01,0.5,-0.2,0.0,0.01,0.5,-0.2,0.0,0.01,0.5,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1471);

SoOrientationInterpolator* SoOrientationInterpolator1472 = new SoOrientationInterpolator();
SoOrientationInterpolator1472->setDEF(QString("r_wristRelax"));
SoOrientationInterpolator1472->setKey(new float[]{0.0,0.2,0.4,0.6,0.9,1.0}, 6);
SoOrientationInterpolator1472->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.1,-0.09,0.25,0.0,0.1,-0.09,0.25,0.0,0.1,-0.09,0.25,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1472);

SoOrientationInterpolator* SoOrientationInterpolator1473 = new SoOrientationInterpolator();
SoOrientationInterpolator1473->setDEF(QString("r_index0Relax"));
SoOrientationInterpolator1473->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1473->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.25,0.25,-1.0,0.125,-0.25,0.25,-1.0,0.125,-0.25,0.25,-1.0,0.125,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1473);

SoOrientationInterpolator* SoOrientationInterpolator1474 = new SoOrientationInterpolator();
SoOrientationInterpolator1474->setDEF(QString("r_index1Relax"));
SoOrientationInterpolator1474->setKey(new float[]{0.0,0.1,0.2,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1474->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.135,-0.135,1.0,0.357,-0.159,-0.153,1.0,0.355,-0.159,-0.153,1.0,0.357,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1474);

SoOrientationInterpolator* SoOrientationInterpolator1475 = new SoOrientationInterpolator();
SoOrientationInterpolator1475->setDEF(QString("r_middle0Relax"));
SoOrientationInterpolator1475->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1475->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.14,0.0,0.0,-1.0,0.14,0.0,0.0,-1.0,0.14,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1475);

SoOrientationInterpolator* SoOrientationInterpolator1476 = new SoOrientationInterpolator();
SoOrientationInterpolator1476->setDEF(QString("r_middle1Relax"));
SoOrientationInterpolator1476->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator1476->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.3,0.257,0.0,0.0,0.3,0.37,0.0,0.0,0.3,0.39,0.0,0.0,0.3,0.31,0.0,0.0,0.3,0.32,0.0,0.0,0.3,0.34,0.0,0.0,0.3,0.28,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 44);
SoNode33->addChild(*SoOrientationInterpolator1476);

SoOrientationInterpolator* SoOrientationInterpolator1477 = new SoOrientationInterpolator();
SoOrientationInterpolator1477->setDEF(QString("r_ring0Relax"));
SoOrientationInterpolator1477->setKey(new float[]{0.0,0.1,0.3,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1477->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.25,0.25,-1.0,0.1,0.25,0.25,-1.0,0.1,0.25,0.25,-1.0,0.1,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1477);

SoOrientationInterpolator* SoOrientationInterpolator1478 = new SoOrientationInterpolator();
SoOrientationInterpolator1478->setDEF(QString("r_ring1Relax"));
SoOrientationInterpolator1478->setKey(new float[]{0.0,0.1,0.4,0.5,0.8,1.0}, 6);
SoOrientationInterpolator1478->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.135,0.135,1.0,0.27,0.135,0.135,1.0,0.27,0.135,0.15,1.0,0.27,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1478);

SoOrientationInterpolator* SoOrientationInterpolator1479 = new SoOrientationInterpolator();
SoOrientationInterpolator1479->setDEF(QString("r_pinky0Relax"));
SoOrientationInterpolator1479->setKey(new float[]{0.0,0.1,0.3,0.5,0.8,1.0}, 6);
SoOrientationInterpolator1479->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.35,0.35,-0.7,0.12,0.35,0.35,-0.9,0.12,0.35,0.35,-0.7,0.12,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1479);

SoOrientationInterpolator* SoOrientationInterpolator1480 = new SoOrientationInterpolator();
SoOrientationInterpolator1480->setDEF(QString("r_pinky1Relax"));
SoOrientationInterpolator1480->setKey(new float[]{0.0,0.1,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1480->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.2,0.25,1.0,0.27,0.2,0.22,1.0,0.27,0.22,0.2,1.0,0.27,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1480);

SoOrientationInterpolator* SoOrientationInterpolator1481 = new SoOrientationInterpolator();
SoOrientationInterpolator1481->setDEF(QString("r_thumb1Relax"));
SoOrientationInterpolator1481->setKey(new float[]{0.0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1.0}, 10);
SoOrientationInterpolator1481->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.0,1.0,1.0,0.5,-0.16,0.16,0.785,0.5,-0.16,0.16,0.785,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,1.0,1.0,1.0,0.75,0.0,0.0,1.0,0.0}, 40);
SoNode33->addChild(*SoOrientationInterpolator1481);

SoOrientationInterpolator* SoOrientationInterpolator1482 = new SoOrientationInterpolator();
SoOrientationInterpolator1482->setDEF(QString("r_thumb2Relax"));
SoOrientationInterpolator1482->setKey(new float[]{0.0,0.2,0.5,0.6,0.7,0.8,1.0}, 7);
SoOrientationInterpolator1482->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.45,1.0,0.0,0.0,0.45,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1482);

SoOrientationInterpolator* SoOrientationInterpolator1483 = new SoOrientationInterpolator();
SoOrientationInterpolator1483->setDEF(QString("r_thumb3Relax"));
SoOrientationInterpolator1483->setKey(new float[]{0.0,0.2,0.5,0.6,0.7,0.8,1.0}, 7);
SoOrientationInterpolator1483->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.45,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1483);

SoOrientationInterpolator* SoOrientationInterpolator1484 = new SoOrientationInterpolator();
SoOrientationInterpolator1484->setDEF(QString("r_fingers2Relax"));
SoOrientationInterpolator1484->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator1484->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.43,0.0,0.0,1.0,0.44,0.0,0.0,1.0,0.46,0.0,0.0,1.0,0.44,0.0,0.0,1.0,0.245,0.0,0.0,1.0,0.24,0.0,0.0,1.0,0.21,0.0,0.0,1.0,0.24,0.0,0.0,1.0,0.0}, 44);
SoNode33->addChild(*SoOrientationInterpolator1484);

SoOrientationInterpolator* SoOrientationInterpolator1485 = new SoOrientationInterpolator();
SoOrientationInterpolator1485->setDEF(QString("r_fingers3Relax"));
SoOrientationInterpolator1485->setKey(new float[]{0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}, 11);
SoOrientationInterpolator1485->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.37,0.0,0.0,1.0,0.38,0.0,0.0,1.0,0.39,0.0,0.0,1.0,0.38,0.0,0.0,1.0,0.27,0.0,0.0,1.0,0.28,0.0,0.0,1.0,0.27,0.0,0.0,1.0,0.28,0.0,0.0,1.0,0.0}, 44);
SoNode33->addChild(*SoOrientationInterpolator1485);

SoROUTE* SoROUTE1486 = new SoROUTE();
SoROUTE1486->setFromField(QString("value_changed"));
SoROUTE1486->setFromNode(QString("r_sternoclavicularRelax"));
SoROUTE1486->setToField(QString("set_rotation"));
SoROUTE1486->setToNode(QString("Joe_r_sternoclavicular"));
SoNode33->addChild(*SoROUTE1486);

SoROUTE* SoROUTE1487 = new SoROUTE();
SoROUTE1487->setFromField(QString("value_changed"));
SoROUTE1487->setFromNode(QString("r_acromioclavicularRelax"));
SoROUTE1487->setToField(QString("set_rotation"));
SoROUTE1487->setToNode(QString("Joe_r_acromioclavicular"));
SoNode33->addChild(*SoROUTE1487);

SoROUTE* SoROUTE1488 = new SoROUTE();
SoROUTE1488->setFromField(QString("value_changed"));
SoROUTE1488->setFromNode(QString("r_shoulderRelax"));
SoROUTE1488->setToField(QString("set_rotation"));
SoROUTE1488->setToNode(QString("Joe_r_shoulder"));
SoNode33->addChild(*SoROUTE1488);

SoROUTE* SoROUTE1489 = new SoROUTE();
SoROUTE1489->setFromField(QString("value_changed"));
SoROUTE1489->setFromNode(QString("r_elbowRelax"));
SoROUTE1489->setToField(QString("set_rotation"));
SoROUTE1489->setToNode(QString("Joe_r_elbow"));
SoNode33->addChild(*SoROUTE1489);

SoROUTE* SoROUTE1490 = new SoROUTE();
SoROUTE1490->setFromField(QString("value_changed"));
SoROUTE1490->setFromNode(QString("r_wristRelax"));
SoROUTE1490->setToField(QString("set_rotation"));
SoROUTE1490->setToNode(QString("Joe_r_radiocarpal"));
SoNode33->addChild(*SoROUTE1490);

SoROUTE* SoROUTE1491 = new SoROUTE();
SoROUTE1491->setFromField(QString("value_changed"));
SoROUTE1491->setFromNode(QString("r_thumb1Relax"));
SoROUTE1491->setToField(QString("set_rotation"));
SoROUTE1491->setToNode(QString("Joe_r_carpometacarpal_1"));
SoNode33->addChild(*SoROUTE1491);

SoROUTE* SoROUTE1492 = new SoROUTE();
SoROUTE1492->setFromField(QString("value_changed"));
SoROUTE1492->setFromNode(QString("r_thumb2Relax"));
SoROUTE1492->setToField(QString("set_rotation"));
SoROUTE1492->setToNode(QString("Joe_r_metacarpophalangeal_1"));
SoNode33->addChild(*SoROUTE1492);

SoROUTE* SoROUTE1493 = new SoROUTE();
SoROUTE1493->setFromField(QString("value_changed"));
SoROUTE1493->setFromNode(QString("r_thumb3Relax"));
SoROUTE1493->setToField(QString("set_rotation"));
SoROUTE1493->setToNode(QString("Joe_r_carpal_interphalangeal_1"));
SoNode33->addChild(*SoROUTE1493);

SoROUTE* SoROUTE1494 = new SoROUTE();
SoROUTE1494->setFromField(QString("value_changed"));
SoROUTE1494->setFromNode(QString("r_index0Relax"));
SoROUTE1494->setToField(QString("set_rotation"));
SoROUTE1494->setToNode(QString("Joe_r_carpometacarpal_2"));
SoNode33->addChild(*SoROUTE1494);

SoROUTE* SoROUTE1495 = new SoROUTE();
SoROUTE1495->setFromField(QString("value_changed"));
SoROUTE1495->setFromNode(QString("r_index1Relax"));
SoROUTE1495->setToField(QString("set_rotation"));
SoROUTE1495->setToNode(QString("Joe_r_metacarpophalangeal_2"));
SoNode33->addChild(*SoROUTE1495);

SoROUTE* SoROUTE1496 = new SoROUTE();
SoROUTE1496->setFromField(QString("value_changed"));
SoROUTE1496->setFromNode(QString("r_fingers2Relax"));
SoROUTE1496->setToField(QString("set_rotation"));
SoROUTE1496->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoNode33->addChild(*SoROUTE1496);

SoROUTE* SoROUTE1497 = new SoROUTE();
SoROUTE1497->setFromField(QString("value_changed"));
SoROUTE1497->setFromNode(QString("r_fingers3Relax"));
SoROUTE1497->setToField(QString("set_rotation"));
SoROUTE1497->setToNode(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoNode33->addChild(*SoROUTE1497);

SoROUTE* SoROUTE1498 = new SoROUTE();
SoROUTE1498->setFromField(QString("value_changed"));
SoROUTE1498->setFromNode(QString("r_middle0Relax"));
SoROUTE1498->setToField(QString("set_rotation"));
SoROUTE1498->setToNode(QString("Joe_r_carpometacarpal_3"));
SoNode33->addChild(*SoROUTE1498);

SoROUTE* SoROUTE1499 = new SoROUTE();
SoROUTE1499->setFromField(QString("value_changed"));
SoROUTE1499->setFromNode(QString("r_middle1Relax"));
SoROUTE1499->setToField(QString("set_rotation"));
SoROUTE1499->setToNode(QString("Joe_r_metacarpophalangeal_3"));
SoNode33->addChild(*SoROUTE1499);

SoROUTE* SoROUTE1500 = new SoROUTE();
SoROUTE1500->setFromField(QString("value_changed"));
SoROUTE1500->setFromNode(QString("r_fingers2Relax"));
SoROUTE1500->setToField(QString("set_rotation"));
SoROUTE1500->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoNode33->addChild(*SoROUTE1500);

SoROUTE* SoROUTE1501 = new SoROUTE();
SoROUTE1501->setFromField(QString("value_changed"));
SoROUTE1501->setFromNode(QString("r_fingers3Relax"));
SoROUTE1501->setToField(QString("set_rotation"));
SoROUTE1501->setToNode(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoNode33->addChild(*SoROUTE1501);

SoROUTE* SoROUTE1502 = new SoROUTE();
SoROUTE1502->setFromField(QString("value_changed"));
SoROUTE1502->setFromNode(QString("r_ring0Relax"));
SoROUTE1502->setToField(QString("set_rotation"));
SoROUTE1502->setToNode(QString("Joe_r_carpometacarpal_4"));
SoNode33->addChild(*SoROUTE1502);

SoROUTE* SoROUTE1503 = new SoROUTE();
SoROUTE1503->setFromField(QString("value_changed"));
SoROUTE1503->setFromNode(QString("r_ring1Relax"));
SoROUTE1503->setToField(QString("set_rotation"));
SoROUTE1503->setToNode(QString("Joe_r_metacarpophalangeal_4"));
SoNode33->addChild(*SoROUTE1503);

SoROUTE* SoROUTE1504 = new SoROUTE();
SoROUTE1504->setFromField(QString("value_changed"));
SoROUTE1504->setFromNode(QString("r_fingers2Relax"));
SoROUTE1504->setToField(QString("set_rotation"));
SoROUTE1504->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoNode33->addChild(*SoROUTE1504);

SoROUTE* SoROUTE1505 = new SoROUTE();
SoROUTE1505->setFromField(QString("value_changed"));
SoROUTE1505->setFromNode(QString("r_fingers3Relax"));
SoROUTE1505->setToField(QString("set_rotation"));
SoROUTE1505->setToNode(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoNode33->addChild(*SoROUTE1505);

SoROUTE* SoROUTE1506 = new SoROUTE();
SoROUTE1506->setFromField(QString("value_changed"));
SoROUTE1506->setFromNode(QString("r_pinky0Relax"));
SoROUTE1506->setToField(QString("set_rotation"));
SoROUTE1506->setToNode(QString("Joe_r_carpometacarpal_5"));
SoNode33->addChild(*SoROUTE1506);

SoROUTE* SoROUTE1507 = new SoROUTE();
SoROUTE1507->setFromField(QString("value_changed"));
SoROUTE1507->setFromNode(QString("r_pinky1Relax"));
SoROUTE1507->setToField(QString("set_rotation"));
SoROUTE1507->setToNode(QString("Joe_r_metacarpophalangeal_5"));
SoNode33->addChild(*SoROUTE1507);

SoROUTE* SoROUTE1508 = new SoROUTE();
SoROUTE1508->setFromField(QString("value_changed"));
SoROUTE1508->setFromNode(QString("r_fingers2Relax"));
SoROUTE1508->setToField(QString("set_rotation"));
SoROUTE1508->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoNode33->addChild(*SoROUTE1508);

SoROUTE* SoROUTE1509 = new SoROUTE();
SoROUTE1509->setFromField(QString("value_changed"));
SoROUTE1509->setFromNode(QString("r_fingers3Relax"));
SoROUTE1509->setToField(QString("set_rotation"));
SoROUTE1509->setToNode(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoNode33->addChild(*SoROUTE1509);

SoOrientationInterpolator* SoOrientationInterpolator1510 = new SoOrientationInterpolator();
SoOrientationInterpolator1510->setDEF(QString("r_sternoclavicularRoll"));
SoOrientationInterpolator1510->setKey(new float[]{0.0,0.2,0.4,0.5,0.7,0.8,1.0}, 7);
SoOrientationInterpolator1510->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.1,0.0,0.0,-1.0,0.22,0.0,0.5,-1.0,0.27,0.0,0.0,-1.0,0.1,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1510);

SoOrientationInterpolator* SoOrientationInterpolator1511 = new SoOrientationInterpolator();
SoOrientationInterpolator1511->setDEF(QString("r_acromioclavicularRoll"));
SoOrientationInterpolator1511->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1511->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-0.05,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1511);

SoOrientationInterpolator* SoOrientationInterpolator1512 = new SoOrientationInterpolator();
SoOrientationInterpolator1512->setDEF(QString("r_shoulderRoll"));
SoOrientationInterpolator1512->setKey(new float[]{0.0,0.2,0.4,0.5,0.85,1.0}, 6);
SoOrientationInterpolator1512->setKeyValue(new float[]{1.0,0.0,0.0,0.0,0.0,0.0,-1.0,1.66,-0.25,0.0,-1.0,1.76,0.0,0.0,-1.0,1.256,0.0,0.0,-1.0,0.05,1.0,0.0,0.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1512);

SoOrientationInterpolator* SoOrientationInterpolator1513 = new SoOrientationInterpolator();
SoOrientationInterpolator1513->setDEF(QString("r_ForeArmPitch"));
SoOrientationInterpolator1513->setKey(new float[]{0.0,0.15,0.3,0.5,0.7,0.9,1.0}, 7);
SoOrientationInterpolator1513->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.55,-1.0,-0.25,0.0,2.55,-1.0,-0.25,0.0,2.55,-1.0,-0.25,0.0,2.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 28);
SoNode33->addChild(*SoOrientationInterpolator1513);

SoOrientationInterpolator* SoOrientationInterpolator1514 = new SoOrientationInterpolator();
SoOrientationInterpolator1514->setDEF(QString("r_wristRoll"));
SoOrientationInterpolator1514->setKey(new float[]{0.0,0.2,0.4,0.6,0.65,0.75,0.85,1.0}, 8);
SoOrientationInterpolator1514->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,-0.55,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.55,0.0,0.0,-1.0,1.55,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 32);
SoNode33->addChild(*SoOrientationInterpolator1514);

SoOrientationInterpolator* SoOrientationInterpolator1515 = new SoOrientationInterpolator();
SoOrientationInterpolator1515->setDEF(QString("r_handPitch"));
SoOrientationInterpolator1515->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1515->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,0.01,0.25,0.0,0.0,-0.01,0.03,0.0,0.0,0.01,0.05,0.0,0.0,0.01,0.01,0.0,0.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1515);

SoOrientationInterpolator* SoOrientationInterpolator1516 = new SoOrientationInterpolator();
SoOrientationInterpolator1516->setDEF(QString("r_thumb1Pitch"));
SoOrientationInterpolator1516->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1516->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.5,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.4,1.0,0.0,0.0,0.2,1.0,0.0,0.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1516);

SoOrientationInterpolator* SoOrientationInterpolator1517 = new SoOrientationInterpolator();
SoOrientationInterpolator1517->setDEF(QString("r_thumb2Pitch"));
SoOrientationInterpolator1517->setKey(new float[]{0.0,0.2,0.4,0.6,0.8,1.0}, 6);
SoOrientationInterpolator1517->setKeyValue(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.3,1.0,1.0,0.0,0.3,1.0,1.0,0.0,0.6,1.0,1.0,0.0,0.3,0.0,1.0,1.0,0.0}, 24);
SoNode33->addChild(*SoOrientationInterpolator1517);

SoOrientationInterpolator* SoOrientationInterpolator1518 = new SoOrientationInterpolator();
SoOrientationInterpolator1518->setDEF(QString("l_shoulderRoll"));
SoOrientationInterpolator1518->setKey(new float[]{0.0,0.2,0.4,0.5,0.85,1.0}, 6);
SoOrientationInterpolator1518->setKeyValue(new float[]{0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.66,0.25,0.0,1.0,1.76,0.0,0.0,1.0,1.256,0.0,0.0,1.0,0.05,0.25,0.0,1.0,1.76}, 24);
SoNode33->addChild(*SoOrientationInterpolator1518);

SoROUTE* SoROUTE1519 = new SoROUTE();
SoROUTE1519->setFromField(QString("fraction_changed"));
SoROUTE1519->setFromNode(QString("Time2"));
SoROUTE1519->setToField(QString("set_fraction"));
SoROUTE1519->setToNode(QString("r_sternoclavicularRoll"));
SoNode33->addChild(*SoROUTE1519);

SoROUTE* SoROUTE1520 = new SoROUTE();
SoROUTE1520->setFromField(QString("fraction_changed"));
SoROUTE1520->setFromNode(QString("Time2"));
SoROUTE1520->setToField(QString("set_fraction"));
SoROUTE1520->setToNode(QString("r_acromioclavicularRoll"));
SoNode33->addChild(*SoROUTE1520);

SoROUTE* SoROUTE1521 = new SoROUTE();
SoROUTE1521->setFromField(QString("fraction_changed"));
SoROUTE1521->setFromNode(QString("Time2"));
SoROUTE1521->setToField(QString("set_fraction"));
SoROUTE1521->setToNode(QString("r_shoulderRoll"));
SoNode33->addChild(*SoROUTE1521);

SoROUTE* SoROUTE1522 = new SoROUTE();
SoROUTE1522->setFromField(QString("fraction_changed"));
SoROUTE1522->setFromNode(QString("Time2"));
SoROUTE1522->setToField(QString("set_fraction"));
SoROUTE1522->setToNode(QString("r_ForeArmPitch"));
SoNode33->addChild(*SoROUTE1522);

SoROUTE* SoROUTE1523 = new SoROUTE();
SoROUTE1523->setFromField(QString("fraction_changed"));
SoROUTE1523->setFromNode(QString("Time2"));
SoROUTE1523->setToField(QString("set_fraction"));
SoROUTE1523->setToNode(QString("r_wristRoll"));
SoNode33->addChild(*SoROUTE1523);

SoROUTE* SoROUTE1524 = new SoROUTE();
SoROUTE1524->setFromField(QString("fraction_changed"));
SoROUTE1524->setFromNode(QString("Time2"));
SoROUTE1524->setToField(QString("set_fraction"));
SoROUTE1524->setToNode(QString("r_handPitch"));
SoNode33->addChild(*SoROUTE1524);

SoROUTE* SoROUTE1525 = new SoROUTE();
SoROUTE1525->setFromField(QString("fraction_changed"));
SoROUTE1525->setFromNode(QString("Time2"));
SoROUTE1525->setToField(QString("set_fraction"));
SoROUTE1525->setToNode(QString("r_thumb1Pitch"));
SoNode33->addChild(*SoROUTE1525);

SoROUTE* SoROUTE1526 = new SoROUTE();
SoROUTE1526->setFromField(QString("fraction_changed"));
SoROUTE1526->setFromNode(QString("Time2"));
SoROUTE1526->setToField(QString("set_fraction"));
SoROUTE1526->setToNode(QString("r_thumb2Pitch"));
SoNode33->addChild(*SoROUTE1526);

SoROUTE* SoROUTE1527 = new SoROUTE();
SoROUTE1527->setFromField(QString("value_changed"));
SoROUTE1527->setFromNode(QString("r_sternoclavicularRoll"));
SoROUTE1527->setToField(QString("set_rotation"));
SoROUTE1527->setToNode(QString("Joe_r_sternoclavicular"));
SoNode33->addChild(*SoROUTE1527);

SoROUTE* SoROUTE1528 = new SoROUTE();
SoROUTE1528->setFromField(QString("value_changed"));
SoROUTE1528->setFromNode(QString("r_acromioclavicularRoll"));
SoROUTE1528->setToField(QString("set_rotation"));
SoROUTE1528->setToNode(QString("Joe_r_acromioclavicular"));
SoNode33->addChild(*SoROUTE1528);

SoROUTE* SoROUTE1529 = new SoROUTE();
SoROUTE1529->setFromField(QString("value_changed"));
SoROUTE1529->setFromNode(QString("r_shoulderRoll"));
SoROUTE1529->setToField(QString("set_rotation"));
SoROUTE1529->setToNode(QString("Joe_r_shoulder"));
SoNode33->addChild(*SoROUTE1529);

SoROUTE* SoROUTE1530 = new SoROUTE();
SoROUTE1530->setFromField(QString("value_changed"));
SoROUTE1530->setFromNode(QString("r_ForeArmPitch"));
SoROUTE1530->setToField(QString("set_rotation"));
SoROUTE1530->setToNode(QString("Joe_r_elbow"));
SoNode33->addChild(*SoROUTE1530);

SoROUTE* SoROUTE1531 = new SoROUTE();
SoROUTE1531->setFromField(QString("value_changed"));
SoROUTE1531->setFromNode(QString("r_wristRoll"));
SoROUTE1531->setToField(QString("set_rotation"));
SoROUTE1531->setToNode(QString("Joe_r_radiocarpal"));
SoNode33->addChild(*SoROUTE1531);

SoROUTE* SoROUTE1532 = new SoROUTE();
SoROUTE1532->setFromField(QString("value_changed"));
SoROUTE1532->setFromNode(QString("r_handPitch"));
SoROUTE1532->setToField(QString("set_rotation"));
SoROUTE1532->setToNode(QString("Joe_r_carpometacarpal_2"));
SoNode33->addChild(*SoROUTE1532);

SoROUTE* SoROUTE1533 = new SoROUTE();
SoROUTE1533->setFromField(QString("value_changed"));
SoROUTE1533->setFromNode(QString("r_handPitch"));
SoROUTE1533->setToField(QString("set_rotation"));
SoROUTE1533->setToNode(QString("Joe_r_metacarpophalangeal_2"));
SoNode33->addChild(*SoROUTE1533);

SoROUTE* SoROUTE1534 = new SoROUTE();
SoROUTE1534->setFromField(QString("value_changed"));
SoROUTE1534->setFromNode(QString("r_handPitch"));
SoROUTE1534->setToField(QString("set_rotation"));
SoROUTE1534->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoNode33->addChild(*SoROUTE1534);

SoROUTE* SoROUTE1535 = new SoROUTE();
SoROUTE1535->setFromField(QString("value_changed"));
SoROUTE1535->setFromNode(QString("r_handPitch"));
SoROUTE1535->setToField(QString("set_rotation"));
SoROUTE1535->setToNode(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoNode33->addChild(*SoROUTE1535);

SoROUTE* SoROUTE1536 = new SoROUTE();
SoROUTE1536->setFromField(QString("value_changed"));
SoROUTE1536->setFromNode(QString("r_handPitch"));
SoROUTE1536->setToField(QString("set_rotation"));
SoROUTE1536->setToNode(QString("Joe_r_carpometacarpal_3"));
SoNode33->addChild(*SoROUTE1536);

SoROUTE* SoROUTE1537 = new SoROUTE();
SoROUTE1537->setFromField(QString("value_changed"));
SoROUTE1537->setFromNode(QString("r_handPitch"));
SoROUTE1537->setToField(QString("set_rotation"));
SoROUTE1537->setToNode(QString("Joe_r_metacarpophalangeal_3"));
SoNode33->addChild(*SoROUTE1537);

SoROUTE* SoROUTE1538 = new SoROUTE();
SoROUTE1538->setFromField(QString("value_changed"));
SoROUTE1538->setFromNode(QString("r_handPitch"));
SoROUTE1538->setToField(QString("set_rotation"));
SoROUTE1538->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoNode33->addChild(*SoROUTE1538);

SoROUTE* SoROUTE1539 = new SoROUTE();
SoROUTE1539->setFromField(QString("value_changed"));
SoROUTE1539->setFromNode(QString("r_handPitch"));
SoROUTE1539->setToField(QString("set_rotation"));
SoROUTE1539->setToNode(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoNode33->addChild(*SoROUTE1539);

SoROUTE* SoROUTE1540 = new SoROUTE();
SoROUTE1540->setFromField(QString("value_changed"));
SoROUTE1540->setFromNode(QString("r_handPitch"));
SoROUTE1540->setToField(QString("set_rotation"));
SoROUTE1540->setToNode(QString("Joe_r_carpometacarpal_4"));
SoNode33->addChild(*SoROUTE1540);

SoROUTE* SoROUTE1541 = new SoROUTE();
SoROUTE1541->setFromField(QString("value_changed"));
SoROUTE1541->setFromNode(QString("r_handPitch"));
SoROUTE1541->setToField(QString("set_rotation"));
SoROUTE1541->setToNode(QString("Joe_r_metacarpophalangeal_4"));
SoNode33->addChild(*SoROUTE1541);

SoROUTE* SoROUTE1542 = new SoROUTE();
SoROUTE1542->setFromField(QString("value_changed"));
SoROUTE1542->setFromNode(QString("r_handPitch"));
SoROUTE1542->setToField(QString("set_rotation"));
SoROUTE1542->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoNode33->addChild(*SoROUTE1542);

SoROUTE* SoROUTE1543 = new SoROUTE();
SoROUTE1543->setFromField(QString("value_changed"));
SoROUTE1543->setFromNode(QString("r_handPitch"));
SoROUTE1543->setToField(QString("set_rotation"));
SoROUTE1543->setToNode(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoNode33->addChild(*SoROUTE1543);

SoROUTE* SoROUTE1544 = new SoROUTE();
SoROUTE1544->setFromField(QString("value_changed"));
SoROUTE1544->setFromNode(QString("r_handPitch"));
SoROUTE1544->setToField(QString("set_rotation"));
SoROUTE1544->setToNode(QString("Joe_r_carpometacarpal_5"));
SoNode33->addChild(*SoROUTE1544);

SoROUTE* SoROUTE1545 = new SoROUTE();
SoROUTE1545->setFromField(QString("value_changed"));
SoROUTE1545->setFromNode(QString("r_handPitch"));
SoROUTE1545->setToField(QString("set_rotation"));
SoROUTE1545->setToNode(QString("Joe_r_metacarpophalangeal_5"));
SoNode33->addChild(*SoROUTE1545);

SoROUTE* SoROUTE1546 = new SoROUTE();
SoROUTE1546->setFromField(QString("value_changed"));
SoROUTE1546->setFromNode(QString("r_handPitch"));
SoROUTE1546->setToField(QString("set_rotation"));
SoROUTE1546->setToNode(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoNode33->addChild(*SoROUTE1546);

SoROUTE* SoROUTE1547 = new SoROUTE();
SoROUTE1547->setFromField(QString("value_changed"));
SoROUTE1547->setFromNode(QString("r_handPitch"));
SoROUTE1547->setToField(QString("set_rotation"));
SoROUTE1547->setToNode(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoNode33->addChild(*SoROUTE1547);

SoROUTE* SoROUTE1548 = new SoROUTE();
SoROUTE1548->setFromField(QString("value_changed"));
SoROUTE1548->setFromNode(QString("r_thumb1Pitch"));
SoROUTE1548->setToField(QString("set_rotation"));
SoROUTE1548->setToNode(QString("Joe_r_carpometacarpal_1"));
SoNode33->addChild(*SoROUTE1548);

SoROUTE* SoROUTE1549 = new SoROUTE();
SoROUTE1549->setFromField(QString("value_changed"));
SoROUTE1549->setFromNode(QString("r_thumb2Pitch"));
SoROUTE1549->setToField(QString("set_rotation"));
SoROUTE1549->setToNode(QString("Joe_r_metacarpophalangeal_1"));
SoNode33->addChild(*SoROUTE1549);

SoROUTE* SoROUTE1550 = new SoROUTE();
SoROUTE1550->setFromField(QString("value_changed"));
SoROUTE1550->setFromNode(QString("r_thumb2Pitch"));
SoROUTE1550->setToField(QString("set_rotation"));
SoROUTE1550->setToNode(QString("Joe_r_carpal_interphalangeal_1"));
SoNode33->addChild(*SoROUTE1550);

SoROUTE* SoROUTE1551 = new SoROUTE();
SoROUTE1551->setFromField(QString("value_changed"));
SoROUTE1551->setFromNode(QString("l_shoulderRoll"));
SoROUTE1551->setToField(QString("set_rotation"));
SoROUTE1551->setToNode(QString("Joe_l_shoulder"));
SoNode33->addChild(*SoROUTE1551);

SoGroup* SoGroup1552 = new SoGroup();
SoPositionInterpolator* SoPositionInterpolator1553 = new SoPositionInterpolator();
SoPositionInterpolator1553->setDEF(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoPositionInterpolator1553->setKey(new float[]{0.0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1.0}, 19);
SoPositionInterpolator1553->setKeyValue(new float[]{0.0,-0.0093,0.0,0.0,-0.0039,0.0,0.0,-0.0088,0.0,0.0,-0.0149,0.0,0.0,-0.0264,0.0,0.0,-0.0393,0.0,0.0,-0.0502,0.0,0.0,-0.0747,0.0,0.0,-0.0273,0.0,0.0,-0.0161,0.0,0.0,-0.0113,0.0,0.0,-0.0058,0.0,0.0,-0.002,0.0,0.0,-0.0026,0.0,0.0,-0.0143,0.0,0.0,-0.038,0.0,0.0,-0.0565,0.0,0.0,-0.045,0.0,0.0,-0.0093,0.0}, 57);
SoGroup1552->addChild(*SoPositionInterpolator1553);

SoOrientationInterpolator* SoOrientationInterpolator1554 = new SoOrientationInterpolator();
SoOrientationInterpolator1554->setDEF(QString("HUMANOIDROOT_ANIMATOR"));
SoOrientationInterpolator1554->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator1554->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
SoGroup1552->addChild(*SoOrientationInterpolator1554);

SoOrientationInterpolator* SoOrientationInterpolator1555 = new SoOrientationInterpolator();
SoOrientationInterpolator1555->setDEF(QString("L_HIP_ANIMATOR"));
SoOrientationInterpolator1555->setKey(new float[]{0.0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator1555->setKeyValue(new float[]{-0.873,0.0609,0.484,0.2865,0.9963,-0.0106,0.0848,0.2488,0.9965,0.0159,-0.0822,0.3836,-0.7018,-0.0322,-0.7117,0.1289,-1.0,0.0,0.0,0.5518,-0.9964,0.0223,0.0817,0.5351,-0.9809,0.0491,0.1881,0.5204,-0.873,0.0609,0.484,0.2865}, 32);
SoGroup1552->addChild(*SoOrientationInterpolator1555);

SoOrientationInterpolator* SoOrientationInterpolator1556 = new SoOrientationInterpolator();
SoOrientationInterpolator1556->setDEF(QString("L_KNEE_ANIMATOR"));
SoOrientationInterpolator1556->setKey(new float[]{0.0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 8);
SoOrientationInterpolator1556->setKeyValue(new float[]{1.0,0.0,0.0,0.3226,1.0,0.0,0.0,0.1556,1.0,0.0,0.0,0.0868,1.0,0.0,0.0,0.8751,1.0,0.0,0.0,1.131,1.0,0.0,0.0,0.0996,1.0,0.0,0.0,0.3942,1.0,0.0,0.0,0.3226}, 32);
SoGroup1552->addChild(*SoOrientationInterpolator1556);

SoOrientationInterpolator* SoOrientationInterpolator1557 = new SoOrientationInterpolator();
SoOrientationInterpolator1557->setDEF(QString("L_ANKLE_ANIMATOR"));
SoOrientationInterpolator1557->setKey(new float[]{0.0,0.125,0.2083,0.375,0.6667,0.9167,1.0}, 7);
SoOrientationInterpolator1557->setKeyValue(new float[]{-1.0,0.0,0.0,0.0671,-1.0,0.0,0.0,0.2152,-1.0,0.0,0.0,0.3184,-1.0,0.0,0.0,0.4717,-1.0,0.0,0.0,0.2912,1.0,0.0,0.0,0.2222,-1.0,0.0,0.0,0.0671}, 28);
SoGroup1552->addChild(*SoOrientationInterpolator1557);

SoOrientationInterpolator* SoOrientationInterpolator1558 = new SoOrientationInterpolator();
SoOrientationInterpolator1558->setDEF(QString("R_ANKLE_ANIMATOR"));
SoOrientationInterpolator1558->setKey(new float[]{0.0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1.0}, 11);
SoOrientationInterpolator1558->setKeyValue(new float[]{0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3533,-1.0,0.0,0.0,0.1072,1.0,0.0,0.0,0.4,1.0,0.0,0.0,0.127,-1.0,0.0,0.0,0.018,-1.0,0.0,0.0,0.058,-1.0,0.0,0.0,0.24,-1.0,0.0,0.0,0.35,-1.0,0.0,0.0,0.33,0.0,0.0,1.0,0.0}, 44);
SoGroup1552->addChild(*SoOrientationInterpolator1558);

SoOrientationInterpolator* SoOrientationInterpolator1559 = new SoOrientationInterpolator();
SoOrientationInterpolator1559->setDEF(QString("L_subtalar_ANIMATOR"));
SoOrientationInterpolator1559->setKey(new float[]{0.0,0.3,1.0}, 3);
SoOrientationInterpolator1559->setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 12);
SoGroup1552->addChild(*SoOrientationInterpolator1559);

SoOrientationInterpolator* SoOrientationInterpolator1560 = new SoOrientationInterpolator();
SoOrientationInterpolator1560->setDEF(QString("L_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator1560->setKey(new float[]{0.0,0.5,1.0}, 3);
SoOrientationInterpolator1560->setKeyValue(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,-0.2,1.0,0.0,0.0,0.0}, 12);
SoGroup1552->addChild(*SoOrientationInterpolator1560);

SoOrientationInterpolator* SoOrientationInterpolator1561 = new SoOrientationInterpolator();
SoOrientationInterpolator1561->setDEF(QString("L_metatarsal_ANIMATOR"));
SoOrientationInterpolator1561->setKey(new float[]{0.0,0.2,0.4,0.8,1.0}, 5);
SoOrientationInterpolator1561->setKeyValue(new float[]{-1.0,0.0,0.0,0.3,-1.0,0.0,0.0,0.15,1.0,0.0,0.0,0.3,0.0,0.0,1.0,0.0,-1.0,0.0,0.0,0.3}, 20);
SoGroup1552->addChild(*SoOrientationInterpolator1561);

SoOrientationInterpolator* SoOrientationInterpolator1562 = new SoOrientationInterpolator();
SoOrientationInterpolator1562->setDEF(QString("R_HIP_ANIMATOR"));
SoOrientationInterpolator1562->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator1562->setKeyValue(new float[]{-0.5831,0.0351,0.8116,0.1481,-0.995,0.023,0.0967,0.4683,-1.0,0.0019,0.008,0.4732,-0.998,-0.0158,-0.061,0.5079,-0.9911,-0.0354,-0.1286,0.5419,-0.9131,-0.0624,-0.403,0.3361,-0.4306,-0.0796,-0.899,0.0704,1.0,0.0,0.0,0.2571,0.9891,-0.0281,0.1444,0.3879,-0.5831,0.0351,0.8116,0.1481}, 40);
SoGroup1552->addChild(*SoOrientationInterpolator1562);

SoOrientationInterpolator* SoOrientationInterpolator1563 = new SoOrientationInterpolator();
SoOrientationInterpolator1563->setDEF(QString("R_KNEE_ANIMATOR"));
SoOrientationInterpolator1563->setKey(new float[]{0.0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1.0}, 10);
SoOrientationInterpolator1563->setKeyValue(new float[]{1.0,0.0,0.0,0.8573,1.0,0.0,0.0,0.8926,1.0,0.0,0.0,0.5351,1.0,0.0,0.0,0.1756,1.0,0.0,0.0,0.1194,1.0,0.0,0.0,0.3153,1.0,0.0,0.0,0.0935,1.0,0.0,0.0,0.0856,1.0,0.0,0.0,0.2475,1.0,0.0,0.0,0.8573}, 40);
SoGroup1552->addChild(*SoOrientationInterpolator1563);

SoOrientationInterpolator* SoOrientationInterpolator1564 = new SoOrientationInterpolator();
SoOrientationInterpolator1564->setDEF(QString("R_subtalar_ANIMATOR"));
SoOrientationInterpolator1564->setKey(new float[]{0.0,0.225,0.25,0.35,0.45,0.85,0.91}, 7);
SoOrientationInterpolator1564->setKeyValue(new float[]{-1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.1,1.0,0.0,0.0,0.25}, 28);
SoGroup1552->addChild(*SoOrientationInterpolator1564);

SoOrientationInterpolator* SoOrientationInterpolator1565 = new SoOrientationInterpolator();
SoOrientationInterpolator1565->setDEF(QString("R_MIDTARSAL_ANIMATOR"));
SoOrientationInterpolator1565->setKey(new float[]{0.0,0.22,1.0}, 3);
SoOrientationInterpolator1565->setKeyValue(new float[]{1.0,0.0,0.0,-0.2,0.0,0.0,1.0,0.0,1.0,0.0,0.0,-0.2}, 12);
SoGroup1552->addChild(*SoOrientationInterpolator1565);

SoOrientationInterpolator* SoOrientationInterpolator1566 = new SoOrientationInterpolator();
SoOrientationInterpolator1566->setDEF(QString("R_metatarsal_ANIMATOR"));
SoOrientationInterpolator1566->setKey(new float[]{0.0,0.2,0.4,0.8,1.0}, 5);
SoOrientationInterpolator1566->setKeyValue(new float[]{-1.0,0.0,0.0,0.15,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.3,-1.0,0.0,0.0,0.3,-1.0,0.0,0.0,0.15}, 20);
SoGroup1552->addChild(*SoOrientationInterpolator1566);

SoOrientationInterpolator* SoOrientationInterpolator1567 = new SoOrientationInterpolator();
SoOrientationInterpolator1567->setDEF(QString("VL5_ANIMATOR"));
SoOrientationInterpolator1567->setKey(new float[]{0.0,0.2083,0.375,0.75,0.8333,1.0}, 6);
SoOrientationInterpolator1567->setKeyValue(new float[]{0.0,1.0,0.0,0.0826,-0.0197,-0.5974,0.8017,0.0823,0.0093,-0.9648,0.2627,0.1734,-0.0124,0.9549,-0.2968,0.0873,-0.0081,0.9691,-0.2463,0.158,0.0,1.0,0.0,0.0826}, 24);
SoGroup1552->addChild(*SoOrientationInterpolator1567);

SoOrientationInterpolator* SoOrientationInterpolator1568 = new SoOrientationInterpolator();
SoOrientationInterpolator1568->setDEF(QString("SKULLBASE_ANIMATOR"));
SoOrientationInterpolator1568->setKey(new float[]{0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0}, 10);
SoOrientationInterpolator1568->setKeyValue(new float[]{0.0,-1.0,0.0,0.0864,0.0,1.0,0.0,0.1825,0.0,1.0,0.0,0.1505,0.0,1.0,0.0,0.1053,0.0,1.0,0.0,0.0439,0.0,-1.0,0.0,0.0312,0.0,-1.0,0.0,0.0794,0.0,-1.0,0.0,0.1616,0.0,-1.0,0.0,0.155,0.0,-1.0,0.0,0.0864}, 40);
SoGroup1552->addChild(*SoOrientationInterpolator1568);

SoOrientationInterpolator* SoOrientationInterpolator1569 = new SoOrientationInterpolator();
SoOrientationInterpolator1569->setDEF(QString("L_SHOULDER_ANIMATOR"));
SoOrientationInterpolator1569->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1569->setKeyValue(new float[]{1.0,0.0,0.4,0.12,-1.0,0.0,0.4,0.186,1.0,0.0,0.1,0.336,1.0,0.0,0.4,0.12}, 16);
SoGroup1552->addChild(*SoOrientationInterpolator1569);

SoOrientationInterpolator* SoOrientationInterpolator1570 = new SoOrientationInterpolator();
SoOrientationInterpolator1570->setDEF(QString("L_ELBOW_ANIMATOR"));
SoOrientationInterpolator1570->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1570->setKeyValue(new float[]{-1.0,0.0,0.0,0.066,-1.0,0.0,0.0,0.488,-1.0,0.0,0.0,0.0177,-1.0,0.0,0.0,0.066}, 16);
SoGroup1552->addChild(*SoOrientationInterpolator1570);

SoOrientationInterpolator* SoOrientationInterpolator1571 = new SoOrientationInterpolator();
SoOrientationInterpolator1571->setDEF(QString("L_WRIST_ANIMATOR"));
SoOrientationInterpolator1571->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1571->setKeyValue(new float[]{0.0,-1.0,0.0,0.461,-0.3302,-0.9275,0.1755,0.5388,0.0328,-0.9993,-0.0172,0.492,0.0,-1.0,0.0,0.4611}, 16);
SoGroup1552->addChild(*SoOrientationInterpolator1571);

SoOrientationInterpolator* SoOrientationInterpolator1572 = new SoOrientationInterpolator();
SoOrientationInterpolator1572->setDEF(QString("R_SHOULDER_ANIMATOR"));
SoOrientationInterpolator1572->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1572->setKeyValue(new float[]{-1.0,0.0,-1.0,0.092,1.0,0.0,-0.2,0.3197,-1.0,0.0,-0.5,0.1564,-1.0,0.0,-1.0,0.092}, 16);
SoGroup1552->addChild(*SoOrientationInterpolator1572);

SoOrientationInterpolator* SoOrientationInterpolator1573 = new SoOrientationInterpolator();
SoOrientationInterpolator1573->setDEF(QString("R_ELBOW_ANIMATOR"));
SoOrientationInterpolator1573->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1573->setKeyValue(new float[]{-1.0,0.0,0.0,0.4115,-1.0,0.0,0.0,0.0925,-1.0,0.0,0.0,0.5726,-1.0,0.0,0.0,0.4115}, 16);
SoGroup1552->addChild(*SoOrientationInterpolator1573);

SoOrientationInterpolator* SoOrientationInterpolator1574 = new SoOrientationInterpolator();
SoOrientationInterpolator1574->setDEF(QString("R_WRIST_ANIMATOR"));
SoOrientationInterpolator1574->setKey(new float[]{0.0,0.375,0.9167,1.0}, 4);
SoOrientationInterpolator1574->setKeyValue(new float[]{-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.0258,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346}, 16);
SoGroup1552->addChild(*SoOrientationInterpolator1574);

SoNode33->addChild(*SoGroup1552);

SoROUTE* SoROUTE1575 = new SoROUTE();
SoROUTE1575->setFromField(QString("fraction_changed"));
SoROUTE1575->setFromNode(QString("Time1"));
SoROUTE1575->setToField(QString("set_fraction"));
SoROUTE1575->setToNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoNode33->addChild(*SoROUTE1575);

SoROUTE* SoROUTE1576 = new SoROUTE();
SoROUTE1576->setFromField(QString("fraction_changed"));
SoROUTE1576->setFromNode(QString("Time1"));
SoROUTE1576->setToField(QString("set_fraction"));
SoROUTE1576->setToNode(QString("HUMANOIDROOT_ANIMATOR"));
SoNode33->addChild(*SoROUTE1576);

SoROUTE* SoROUTE1577 = new SoROUTE();
SoROUTE1577->setFromField(QString("fraction_changed"));
SoROUTE1577->setFromNode(QString("Time1"));
SoROUTE1577->setToField(QString("set_fraction"));
SoROUTE1577->setToNode(QString("L_HIP_ANIMATOR"));
SoNode33->addChild(*SoROUTE1577);

SoROUTE* SoROUTE1578 = new SoROUTE();
SoROUTE1578->setFromField(QString("fraction_changed"));
SoROUTE1578->setFromNode(QString("Time1"));
SoROUTE1578->setToField(QString("set_fraction"));
SoROUTE1578->setToNode(QString("L_KNEE_ANIMATOR"));
SoNode33->addChild(*SoROUTE1578);

SoROUTE* SoROUTE1579 = new SoROUTE();
SoROUTE1579->setFromField(QString("fraction_changed"));
SoROUTE1579->setFromNode(QString("Time1"));
SoROUTE1579->setToField(QString("set_fraction"));
SoROUTE1579->setToNode(QString("L_ANKLE_ANIMATOR"));
SoNode33->addChild(*SoROUTE1579);

SoROUTE* SoROUTE1580 = new SoROUTE();
SoROUTE1580->setFromField(QString("fraction_changed"));
SoROUTE1580->setFromNode(QString("Time1"));
SoROUTE1580->setToField(QString("set_fraction"));
SoROUTE1580->setToNode(QString("L_subtalar_ANIMATOR"));
SoNode33->addChild(*SoROUTE1580);

SoROUTE* SoROUTE1581 = new SoROUTE();
SoROUTE1581->setFromField(QString("fraction_changed"));
SoROUTE1581->setFromNode(QString("Time1"));
SoROUTE1581->setToField(QString("set_fraction"));
SoROUTE1581->setToNode(QString("L_MIDTARSAL_ANIMATOR"));
SoNode33->addChild(*SoROUTE1581);

SoROUTE* SoROUTE1582 = new SoROUTE();
SoROUTE1582->setFromField(QString("fraction_changed"));
SoROUTE1582->setFromNode(QString("Time1"));
SoROUTE1582->setToField(QString("set_fraction"));
SoROUTE1582->setToNode(QString("L_metatarsal_ANIMATOR"));
SoNode33->addChild(*SoROUTE1582);

SoROUTE* SoROUTE1583 = new SoROUTE();
SoROUTE1583->setFromField(QString("fraction_changed"));
SoROUTE1583->setFromNode(QString("Time1"));
SoROUTE1583->setToField(QString("set_fraction"));
SoROUTE1583->setToNode(QString("R_HIP_ANIMATOR"));
SoNode33->addChild(*SoROUTE1583);

SoROUTE* SoROUTE1584 = new SoROUTE();
SoROUTE1584->setFromField(QString("fraction_changed"));
SoROUTE1584->setFromNode(QString("Time1"));
SoROUTE1584->setToField(QString("set_fraction"));
SoROUTE1584->setToNode(QString("R_KNEE_ANIMATOR"));
SoNode33->addChild(*SoROUTE1584);

SoROUTE* SoROUTE1585 = new SoROUTE();
SoROUTE1585->setFromField(QString("fraction_changed"));
SoROUTE1585->setFromNode(QString("Time1"));
SoROUTE1585->setToField(QString("set_fraction"));
SoROUTE1585->setToNode(QString("R_ANKLE_ANIMATOR"));
SoNode33->addChild(*SoROUTE1585);

SoROUTE* SoROUTE1586 = new SoROUTE();
SoROUTE1586->setFromField(QString("fraction_changed"));
SoROUTE1586->setFromNode(QString("Time1"));
SoROUTE1586->setToField(QString("set_fraction"));
SoROUTE1586->setToNode(QString("R_subtalar_ANIMATOR"));
SoNode33->addChild(*SoROUTE1586);

SoROUTE* SoROUTE1587 = new SoROUTE();
SoROUTE1587->setFromField(QString("fraction_changed"));
SoROUTE1587->setFromNode(QString("Time1"));
SoROUTE1587->setToField(QString("set_fraction"));
SoROUTE1587->setToNode(QString("R_MIDTARSAL_ANIMATOR"));
SoNode33->addChild(*SoROUTE1587);

SoROUTE* SoROUTE1588 = new SoROUTE();
SoROUTE1588->setFromField(QString("fraction_changed"));
SoROUTE1588->setFromNode(QString("Time1"));
SoROUTE1588->setToField(QString("set_fraction"));
SoROUTE1588->setToNode(QString("R_metatarsal_ANIMATOR"));
SoNode33->addChild(*SoROUTE1588);

SoROUTE* SoROUTE1589 = new SoROUTE();
SoROUTE1589->setFromField(QString("fraction_changed"));
SoROUTE1589->setFromNode(QString("Time1"));
SoROUTE1589->setToField(QString("set_fraction"));
SoROUTE1589->setToNode(QString("VL5_ANIMATOR"));
SoNode33->addChild(*SoROUTE1589);

SoROUTE* SoROUTE1590 = new SoROUTE();
SoROUTE1590->setFromField(QString("fraction_changed"));
SoROUTE1590->setFromNode(QString("Time1"));
SoROUTE1590->setToField(QString("set_fraction"));
SoROUTE1590->setToNode(QString("SKULLBASE_ANIMATOR"));
SoNode33->addChild(*SoROUTE1590);

SoROUTE* SoROUTE1591 = new SoROUTE();
SoROUTE1591->setFromField(QString("fraction_changed"));
SoROUTE1591->setFromNode(QString("Time1"));
SoROUTE1591->setToField(QString("set_fraction"));
SoROUTE1591->setToNode(QString("L_SHOULDER_ANIMATOR"));
SoNode33->addChild(*SoROUTE1591);

SoROUTE* SoROUTE1592 = new SoROUTE();
SoROUTE1592->setFromField(QString("fraction_changed"));
SoROUTE1592->setFromNode(QString("Time1"));
SoROUTE1592->setToField(QString("set_fraction"));
SoROUTE1592->setToNode(QString("L_ELBOW_ANIMATOR"));
SoNode33->addChild(*SoROUTE1592);

SoROUTE* SoROUTE1593 = new SoROUTE();
SoROUTE1593->setFromField(QString("fraction_changed"));
SoROUTE1593->setFromNode(QString("Time1"));
SoROUTE1593->setToField(QString("set_fraction"));
SoROUTE1593->setToNode(QString("L_WRIST_ANIMATOR"));
SoNode33->addChild(*SoROUTE1593);

SoROUTE* SoROUTE1594 = new SoROUTE();
SoROUTE1594->setFromField(QString("value_changed"));
SoROUTE1594->setFromNode(QString("HUMANOIDROOT_POSITION_ANIMATOR"));
SoROUTE1594->setToField(QString("set_translation"));
SoROUTE1594->setToNode(QString("Joe_humanoid_root"));
SoNode33->addChild(*SoROUTE1594);

SoROUTE* SoROUTE1595 = new SoROUTE();
SoROUTE1595->setFromField(QString("value_changed"));
SoROUTE1595->setFromNode(QString("HUMANOIDROOT_ANIMATOR"));
SoROUTE1595->setToField(QString("set_rotation"));
SoROUTE1595->setToNode(QString("Joe_humanoid_root"));
SoNode33->addChild(*SoROUTE1595);

SoROUTE* SoROUTE1596 = new SoROUTE();
SoROUTE1596->setFromField(QString("value_changed"));
SoROUTE1596->setFromNode(QString("L_HIP_ANIMATOR"));
SoROUTE1596->setToField(QString("set_rotation"));
SoROUTE1596->setToNode(QString("Joe_l_hip"));
SoNode33->addChild(*SoROUTE1596);

SoROUTE* SoROUTE1597 = new SoROUTE();
SoROUTE1597->setFromField(QString("value_changed"));
SoROUTE1597->setFromNode(QString("L_KNEE_ANIMATOR"));
SoROUTE1597->setToField(QString("set_rotation"));
SoROUTE1597->setToNode(QString("Joe_l_knee"));
SoNode33->addChild(*SoROUTE1597);

SoROUTE* SoROUTE1598 = new SoROUTE();
SoROUTE1598->setFromField(QString("value_changed"));
SoROUTE1598->setFromNode(QString("L_ANKLE_ANIMATOR"));
SoROUTE1598->setToField(QString("set_rotation"));
SoROUTE1598->setToNode(QString("Joe_l_talocrural"));
SoNode33->addChild(*SoROUTE1598);

SoROUTE* SoROUTE1599 = new SoROUTE();
SoROUTE1599->setFromField(QString("value_changed"));
SoROUTE1599->setFromNode(QString("L_MIDTARSAL_ANIMATOR"));
SoROUTE1599->setToField(QString("set_rotation"));
SoROUTE1599->setToNode(QString("Joe_l_metatarsophalangeal_2"));
SoNode33->addChild(*SoROUTE1599);

SoROUTE* SoROUTE1600 = new SoROUTE();
SoROUTE1600->setFromField(QString("value_changed"));
SoROUTE1600->setFromNode(QString("L_subtalar_ANIMATOR"));
SoROUTE1600->setToField(QString("set_rotation"));
SoROUTE1600->setToNode(QString("Joe_l_tarsometatarsal_2"));
SoNode33->addChild(*SoROUTE1600);

SoROUTE* SoROUTE1601 = new SoROUTE();
SoROUTE1601->setFromField(QString("value_changed"));
SoROUTE1601->setFromNode(QString("L_metatarsal_ANIMATOR"));
SoROUTE1601->setToField(QString("set_rotation"));
SoROUTE1601->setToNode(QString("Joe_l_metatarsal"));
SoNode33->addChild(*SoROUTE1601);

SoROUTE* SoROUTE1602 = new SoROUTE();
SoROUTE1602->setFromField(QString("value_changed"));
SoROUTE1602->setFromNode(QString("R_HIP_ANIMATOR"));
SoROUTE1602->setToField(QString("set_rotation"));
SoROUTE1602->setToNode(QString("Joe_r_hip"));
SoNode33->addChild(*SoROUTE1602);

SoROUTE* SoROUTE1603 = new SoROUTE();
SoROUTE1603->setFromField(QString("value_changed"));
SoROUTE1603->setFromNode(QString("R_KNEE_ANIMATOR"));
SoROUTE1603->setToField(QString("set_rotation"));
SoROUTE1603->setToNode(QString("Joe_r_knee"));
SoNode33->addChild(*SoROUTE1603);

SoROUTE* SoROUTE1604 = new SoROUTE();
SoROUTE1604->setFromField(QString("value_changed"));
SoROUTE1604->setFromNode(QString("R_ANKLE_ANIMATOR"));
SoROUTE1604->setToField(QString("set_rotation"));
SoROUTE1604->setToNode(QString("Joe_r_talocrural"));
SoNode33->addChild(*SoROUTE1604);

SoROUTE* SoROUTE1605 = new SoROUTE();
SoROUTE1605->setFromField(QString("value_changed"));
SoROUTE1605->setFromNode(QString("R_subtalar_ANIMATOR"));
SoROUTE1605->setToField(QString("set_rotation"));
SoROUTE1605->setToNode(QString("Joe_r_tarsometatarsal_2"));
SoNode33->addChild(*SoROUTE1605);

SoROUTE* SoROUTE1606 = new SoROUTE();
SoROUTE1606->setFromField(QString("value_changed"));
SoROUTE1606->setFromNode(QString("R_MIDTARSAL_ANIMATOR"));
SoROUTE1606->setToField(QString("set_rotation"));
SoROUTE1606->setToNode(QString("Joe_r_metatarsophalangeal_2"));
SoNode33->addChild(*SoROUTE1606);

SoROUTE* SoROUTE1607 = new SoROUTE();
SoROUTE1607->setFromField(QString("value_changed"));
SoROUTE1607->setFromNode(QString("R_metatarsal_ANIMATOR"));
SoROUTE1607->setToField(QString("set_rotation"));
SoROUTE1607->setToNode(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoNode33->addChild(*SoROUTE1607);

SoROUTE* SoROUTE1608 = new SoROUTE();
SoROUTE1608->setFromField(QString("value_changed"));
SoROUTE1608->setFromNode(QString("VL5_ANIMATOR"));
SoROUTE1608->setToField(QString("set_rotation"));
SoROUTE1608->setToNode(QString("Joe_vl5"));
SoNode33->addChild(*SoROUTE1608);

SoROUTE* SoROUTE1609 = new SoROUTE();
SoROUTE1609->setFromField(QString("value_changed"));
SoROUTE1609->setFromNode(QString("SKULLBASE_ANIMATOR"));
SoROUTE1609->setToField(QString("set_rotation"));
SoROUTE1609->setToNode(QString("Joe_skullbase"));
SoNode33->addChild(*SoROUTE1609);

SoROUTE* SoROUTE1610 = new SoROUTE();
SoROUTE1610->setFromField(QString("value_changed"));
SoROUTE1610->setFromNode(QString("L_SHOULDER_ANIMATOR"));
SoROUTE1610->setToField(QString("set_rotation"));
SoROUTE1610->setToNode(QString("Joe_l_shoulder"));
SoNode33->addChild(*SoROUTE1610);

SoROUTE* SoROUTE1611 = new SoROUTE();
SoROUTE1611->setFromField(QString("value_changed"));
SoROUTE1611->setFromNode(QString("L_ELBOW_ANIMATOR"));
SoROUTE1611->setToField(QString("set_rotation"));
SoROUTE1611->setToNode(QString("Joe_l_elbow"));
SoNode33->addChild(*SoROUTE1611);

SoROUTE* SoROUTE1612 = new SoROUTE();
SoROUTE1612->setFromField(QString("value_changed"));
SoROUTE1612->setFromNode(QString("L_WRIST_ANIMATOR"));
SoROUTE1612->setToField(QString("set_rotation"));
SoROUTE1612->setToNode(QString("Joe_l_radiocarpal"));
SoNode33->addChild(*SoROUTE1612);

SoROUTE* SoROUTE1613 = new SoROUTE();
SoROUTE1613->setFromField(QString("value_changed"));
SoROUTE1613->setFromNode(QString("R_SHOULDER_ANIMATOR"));
SoROUTE1613->setToField(QString("set_rotation"));
SoROUTE1613->setToNode(QString("Joe_r_shoulder"));
SoNode33->addChild(*SoROUTE1613);

SoROUTE* SoROUTE1614 = new SoROUTE();
SoROUTE1614->setFromField(QString("value_changed"));
SoROUTE1614->setFromNode(QString("R_ELBOW_ANIMATOR"));
SoROUTE1614->setToField(QString("set_rotation"));
SoROUTE1614->setToNode(QString("Joe_r_elbow"));
SoNode33->addChild(*SoROUTE1614);

SoROUTE* SoROUTE1615 = new SoROUTE();
SoROUTE1615->setFromField(QString("value_changed"));
SoROUTE1615->setFromNode(QString("R_WRIST_ANIMATOR"));
SoROUTE1615->setToField(QString("set_rotation"));
SoROUTE1615->setToNode(QString("Joe_r_radiocarpal"));
SoNode33->addChild(*SoROUTE1615);

SoSceneManager0->setSceneGraph(*SoNode33);

return 0;
}
