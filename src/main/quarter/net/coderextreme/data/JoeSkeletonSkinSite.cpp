
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
Someta3->setContent(QString("JoeSkeletonSkinSite.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2."));
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
Someta12->setName(QString("Image"));
Someta12->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("drawing"));
Someta13->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("Image"));
Someta14->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("Image"));
Someta15->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("Image"));
Someta16->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("Image"));
Someta17->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("Image"));
Someta18->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("Image"));
Someta19->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("Image"));
Someta20->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_Octaga.png"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("Image"));
Someta21->setContent(QString("JoeSkeletonSkinSiteSaluteWalk_vivaty.png"));
Sohead1->addMeta(*Someta21);

Someta* Someta22 = new Someta();
Someta22->setName(QString("generator"));
Someta22->setContent(QString("tovrmlx3d, https://castle-engine.io/convert.php"));
Sohead1->addMeta(*Someta22);

Someta* Someta23 = new Someta();
Someta23->setName(QString("reference"));
Someta23->setContent(QString("https://castle-engine.io/view3dscene.php#section_converting"));
Sohead1->addMeta(*Someta23);

Someta* Someta24 = new Someta();
Someta24->setName(QString("translator"));
Someta24->setContent(QString("Michalis Kamburelis"));
Sohead1->addMeta(*Someta24);

Someta* Someta25 = new Someta();
Someta25->setName(QString("translator"));
Someta25->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta25);

Someta* Someta26 = new Someta();
Someta26->setName(QString("translator"));
Someta26->setContent(QString("Joe D. Williams"));
Sohead1->addMeta(*Someta26);

Someta* Someta27 = new Someta();
Someta27->setName(QString("generator"));
Someta27->setContent(QString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"));
Sohead1->addMeta(*Someta27);

Someta* Someta28 = new Someta();
Someta28->setName(QString("generator"));
Someta28->setContent(QString("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html"));
Sohead1->addMeta(*Someta28);

Someta* Someta29 = new Someta();
Someta29->setName(QString("identifier"));
Someta29->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"));
Sohead1->addMeta(*Someta29);

Someta* Someta30 = new Someta();
Someta30->setName(QString("license"));
Someta30->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta30);

Someta* Someta31 = new Someta();
Someta31->setName(QString("generator"));
Someta31->setContent(QString("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html"));
Sohead1->addMeta(*Someta31);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode32 = new SoNode();
SoWorldInfo* SoWorldInfo33 = new SoWorldInfo();
SoWorldInfo33->setInfo(new QString[]{QString("By Joe for Joe"), QString("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")}, 2);
SoWorldInfo33->setTitle(QString("JoeSkeletonSkinSite.x3d"));
SoNode32->addChild(*SoWorldInfo33);

SoNavigationInfo* SoNavigationInfo34 = new SoNavigationInfo();
SoNavigationInfo34->setDEF(QString("HeadlightOnRevealsSkinTextureAndColors"));
SoNode32->addChild(*SoNavigationInfo34);

SoBackground* SoBackground35 = new SoBackground();
SoBackground35->setGroundAngle(new float[]{1.57}, 1);
SoBackground35->setGroundColor(new float[]{0.0,0.1,0.0,0.0,0.1,0.0}, 6);
SoBackground35->setSkyColor(new float[]{0.0,0.0,0.1}, 3);
SoNode32->addChild(*SoBackground35);

//Authoring hint: these axes are aligned within local coordinate system
SoGroup* SoGroup36 = new SoGroup();
SoGroup36->setDEF(QString("ViewpointGroup"));
SoViewpoint* SoViewpoint37 = new SoViewpoint();
SoViewpoint37->setDescription(QString("Front Up View"));
SoViewpoint37->setOrientation(new float[]{-1.0,-1.0,0.0,0.55});
SoViewpoint37->setPosition(new float[]{-1.0,2.0,2.5});
SoGroup36->addChild(*SoViewpoint37);

SoViewpoint* SoViewpoint38 = new SoViewpoint();
SoViewpoint38->setDescription(QString("From Left View"));
SoViewpoint38->setOrientation(new float[]{0.3,1.0,0.0,-1.57});
SoViewpoint38->setPosition(new float[]{-2.5,1.5,0.0});
SoGroup36->addChild(*SoViewpoint38);

SoViewpoint* SoViewpoint39 = new SoViewpoint();
SoViewpoint39->setDescription(QString("Front Mid View"));
SoViewpoint39->setPosition(new float[]{0.0,0.5,1.25});
SoGroup36->addChild(*SoViewpoint39);

SoViewpoint* SoViewpoint40 = new SoViewpoint();
SoViewpoint40->setDescription(QString("Front Feet View"));
SoViewpoint40->setPosition(new float[]{0.0,0.0,0.75});
SoGroup36->addChild(*SoViewpoint40);

SoViewpoint* SoViewpoint41 = new SoViewpoint();
SoViewpoint41->setDescription(QString("From Right View"));
SoViewpoint41->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint41->setPosition(new float[]{1.0,1.0,0.0});
SoGroup36->addChild(*SoViewpoint41);

SoViewpoint* SoViewpoint42 = new SoViewpoint();
SoViewpoint42->setCenterOfRotation(new float[]{0.0,1.65,0.0});
SoViewpoint42->setDescription(QString("Front Head View"));
SoViewpoint42->setPosition(new float[]{0.0,1.65,0.75});
SoGroup36->addChild(*SoViewpoint42);

SoViewpoint* SoViewpoint43 = new SoViewpoint();
SoViewpoint43->setDescription(QString("Front Mid View"));
SoViewpoint43->setPosition(new float[]{0.0,1.0,1.75});
SoGroup36->addChild(*SoViewpoint43);

SoViewpoint* SoViewpoint44 = new SoViewpoint();
SoViewpoint44->setDescription(QString("Rear View"));
SoViewpoint44->setOrientation(new float[]{0.0,1.0,0.0,3.14});
SoViewpoint44->setPosition(new float[]{0.0,1.5,-4.0});
SoGroup36->addChild(*SoViewpoint44);

SoViewpoint* SoViewpoint45 = new SoViewpoint();
SoViewpoint45->setDescription(QString("Top View"));
SoViewpoint45->setOrientation(new float[]{1.0,0.0,0.0,-1.57});
SoViewpoint45->setPosition(new float[]{0.0,4.0,0.0});
SoGroup36->addChild(*SoViewpoint45);

SoViewpoint* SoViewpoint46 = new SoViewpoint();
SoViewpoint46->setDescription(QString("Bottom View"));
SoViewpoint46->setOrientation(new float[]{1.0,0.0,0.0,1.57});
SoViewpoint46->setPosition(new float[]{0.0,-4.0,0.0});
SoGroup36->addChild(*SoViewpoint46);

SoViewpoint* SoViewpoint47 = new SoViewpoint();
SoViewpoint47->setDescription(QString("Right View"));
SoViewpoint47->setOrientation(new float[]{0.0,1.0,0.0,1.57});
SoViewpoint47->setPosition(new float[]{4.0,1.5,0.0});
SoGroup36->addChild(*SoViewpoint47);

SoNode32->addChild(*SoGroup36);

SoGroup* SoGroup48 = new SoGroup();
SoGroup48->setDEF(QString("VisualizationShapes"));
SoGroup48->setVisible(false);
SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setScale(new float[]{5.0,5.0,5.0});
SoTransform49->setTranslation(new float[]{0.0,2.1,0.0});
SoShape* SoShape50 = new SoShape();
SoShape50->setDEF(QString("jointbox"));
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setAmbientIntensity(0.5);
SoMaterial52->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial52->setShininess(1);
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoIndexedFaceSet* SoIndexedFaceSet53 = new SoIndexedFaceSet();
SoIndexedFaceSet53->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet53->setCreaseAngle(0.1);
SoColor* SoColor54 = new SoColor();
SoColor54->setColor(new float[]{1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0}, 18);
SoIndexedFaceSet53->setColor(*SoColor54);

SoCoordinate* SoCoordinate55 = new SoCoordinate();
SoCoordinate55->setDEF(QString("boxCoords"));
SoCoordinate55->setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.0157,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
SoIndexedFaceSet53->setCoord(*SoCoordinate55);

SoShape50->setGeometry(*SoIndexedFaceSet53);

SoTransform49->addChild(*SoShape50);

SoGroup48->addChild(*SoTransform49);

SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setScale(new float[]{0.1,0.1,0.1});
SoTransform56->setTranslation(new float[]{-0.2,0.773,-0.016});
SoShape* SoShape57 = new SoShape();
SoShape57->setDEF(QString("sitebox"));
SoVRMLAppearance* SoVRMLAppearance58 = new SoVRMLAppearance();
SoMaterial* SoMaterial59 = new SoMaterial();
SoMaterial59->setAmbientIntensity(1);
SoMaterial59->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoMaterial59->setEmissiveColor(new float[]{1.0,0.0,0.0});
SoMaterial59->setShininess(0.7);
SoMaterial59->setSpecularColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance58->addChild(*SoMaterial59);

SoShape57->addChild(*SoVRMLAppearance58);

SoIndexedFaceSet* SoIndexedFaceSet60 = new SoIndexedFaceSet();
SoIndexedFaceSet60->setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
SoIndexedFaceSet60->setCreaseAngle(0.1);
SoCoordinate* SoCoordinate61 = new SoCoordinate();
SoCoordinate61->setUSE(QString("boxCoords"));
SoIndexedFaceSet60->setCoord(*SoCoordinate61);

SoShape57->setGeometry(*SoIndexedFaceSet60);

SoTransform56->addChild(*SoShape57);

SoGroup48->addChild(*SoTransform56);

SoTransform* SoTransform62 = new SoTransform();
SoTransform62->setScale(new float[]{0.1,0.1,0.1});
SoTransform62->setTranslation(new float[]{0.0,0.2,0.0});
SoShape* SoShape63 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance64 = new SoVRMLAppearance();
SoVRMLAppearance64->setDEF(QString("SegmentLine"));
SoMaterial* SoMaterial65 = new SoMaterial();
SoMaterial65->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial65->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoMaterial65->setSpecularColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance64->addChild(*SoMaterial65);

SoShape63->addChild(*SoVRMLAppearance64);

SoIndexedLineSet* SoIndexedLineSet66 = new SoIndexedLineSet();
SoIndexedLineSet66->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate67 = new SoCoordinate();
SoCoordinate67->setPoint(new float[]{0.0,0.0,0.0,0.0,0.0001,0.0}, 6);
SoIndexedLineSet66->setCoord(*SoCoordinate67);

SoShape63->setGeometry(*SoIndexedLineSet66);

SoTransform62->addChild(*SoShape63);

SoGroup48->addChild(*SoTransform62);

SoTransform* SoTransform68 = new SoTransform();
SoTransform68->setScale(new float[]{0.1,0.1,0.1});
SoTransform68->setTranslation(new float[]{-0.2,0.773,-0.016});
SoShape* SoShape69 = new SoShape();
SoShape69->setDEF(QString("skinsphere"));
SoVRMLAppearance* SoVRMLAppearance70 = new SoVRMLAppearance();
SoMaterial* SoMaterial71 = new SoMaterial();
SoMaterial71->setAmbientIntensity(0.5);
SoMaterial71->setDiffuseColor(new float[]{0.0,1.0,0.0});
SoMaterial71->setEmissiveColor(new float[]{0.0,1.0,0.0});
SoMaterial71->setShininess(1);
SoMaterial71->setSpecularColor(new float[]{0.0,1.0,0.0});
SoVRMLAppearance70->addChild(*SoMaterial71);

SoShape69->addChild(*SoVRMLAppearance70);

SoSphere* SoSphere72 = new SoSphere();
SoSphere72->setRadius(0.005);
SoShape69->setGeometry(*SoSphere72);

SoTransform68->addChild(*SoShape69);

SoGroup48->addChild(*SoTransform68);

SoNode32->addChild(*SoGroup48);

SoGroup* SoGroup73 = new SoGroup();
SoGroup73->setDEF(QString("SpecHumanoid"));
SoGroup* SoGroup74 = new SoGroup();
SoGroup74->setDEF(QString("JoeISOHumanoid"));
SoHAnimHumanoid* SoHAnimHumanoid75 = new SoHAnimHumanoid();
SoHAnimHumanoid75->X3DNode::setName(QString("Human"));
SoHAnimHumanoid75->setDEF(QString("Joe_Human"));
SoHAnimHumanoid75->setLoa(4);
SoHAnimHumanoid75->setVersion(QString("2.0"));
//original HAnimHumanoid info='\"humanoidVersion=2.0\"'
//<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)
//</LOD>
SoMetadataSet* SoMetadataSet76 = new SoMetadataSet();
SoMetadataSet76->X3DNode::setName(QString("HAnimHumanoid.info"));
SoMetadataSet76->X3DNode::setReference(QString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"));
SoMetadataString* SoMetadataString77 = new SoMetadataString();
SoMetadataString77->X3DNode::setName(QString("humanoidVersion"));
SoMetadataString77->setValue(new QString[]{QString("2.0")}, 1);
SoMetadataSet76->setValue((X3DNode *)&SoMetadataString77);

SoHAnimHumanoid75->setMetadata(*SoMetadataSet76);

SoHAnimJoint* SoHAnimJoint78 = new SoHAnimJoint();
SoHAnimJoint78->X3DNode::setName(QString("humanoid_root"));
SoHAnimJoint78->setDEF(QString("Joe_humanoid_root"));
SoHAnimJoint78->setCenter(new float[]{0.0,0.875,0.0});
SoHAnimSegment* SoHAnimSegment79 = new SoHAnimSegment();
SoHAnimSegment79->X3DNode::setName(QString("sacrum"));
SoHAnimSegment79->setDEF(QString("Joe_sacrum"));
SoTransform* SoTransform80 = new SoTransform();
SoTransform80->setTranslation(new float[]{0.0,0.875,0.0});
SoShape* SoShape81 = new SoShape();
SoShape81->setUSE(QString("jointbox"));
SoTransform80->addChild(*SoShape81);

SoHAnimSegment79->addChild(*SoTransform80);

SoShape* SoShape82 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance83 = new SoVRMLAppearance();
SoVRMLAppearance83->setUSE(QString("SegmentLine"));
SoShape82->addChild(*SoVRMLAppearance83);

SoIndexedLineSet* SoIndexedLineSet84 = new SoIndexedLineSet();
SoIndexedLineSet84->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate85 = new SoCoordinate();
SoCoordinate85->setPoint(new float[]{0.0,0.875,0.0,0.0,0.92,0.0}, 6);
SoIndexedLineSet84->setCoord(*SoCoordinate85);

SoShape82->setGeometry(*SoIndexedLineSet84);

SoHAnimSegment79->addChild(*SoShape82);

SoTransform* SoTransform86 = new SoTransform();
SoTransform86->setTranslation(new float[]{0.0,0.92,0.08});
SoShape* SoShape87 = new SoShape();
SoShape87->setUSE(QString("skinsphere"));
SoTransform86->addChild(*SoShape87);

SoHAnimSegment79->addChild(*SoTransform86);

SoTransform* SoTransform88 = new SoTransform();
SoTransform88->setTranslation(new float[]{0.0,0.87,-0.022});
SoShape* SoShape89 = new SoShape();
SoShape89->setUSE(QString("skinsphere"));
SoTransform88->addChild(*SoShape89);

SoHAnimSegment79->addChild(*SoTransform88);

SoHAnimJoint78->addChildren(*SoHAnimSegment79);

SoHAnimJoint* SoHAnimJoint90 = new SoHAnimJoint();
SoHAnimJoint90->X3DNode::setName(QString("sacroiliac"));
SoHAnimJoint90->setDEF(QString("Joe_sacroiliac"));
SoHAnimJoint90->setCenter(new float[]{0.0,0.92,0.0});
SoHAnimJoint90->setSkinCoordIndex(new int32_t[]{17,19,20,21,22,23,26,27,73,82,89,91,93}, 13);
SoHAnimJoint90->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.35,0.35,1.0}, 13);
SoHAnimSegment* SoHAnimSegment91 = new SoHAnimSegment();
SoHAnimSegment91->X3DNode::setName(QString("pelvis"));
SoHAnimSegment91->setDEF(QString("Joe_pelvis"));
SoTransform* SoTransform92 = new SoTransform();
SoTransform92->setTranslation(new float[]{0.0,0.9149,0.0016});
SoTransform* SoTransform93 = new SoTransform();
SoShape* SoShape94 = new SoShape();
SoShape94->setUSE(QString("jointbox"));
SoTransform93->addChild(*SoShape94);

SoTransform92->addChild(*SoTransform93);

SoHAnimSegment91->addChild(*SoTransform92);

SoShape* SoShape95 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance96 = new SoVRMLAppearance();
SoVRMLAppearance96->setUSE(QString("SegmentLine"));
SoShape95->addChild(*SoVRMLAppearance96);

SoIndexedLineSet* SoIndexedLineSet97 = new SoIndexedLineSet();
SoIndexedLineSet97->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate98 = new SoCoordinate();
SoCoordinate98->setPoint(new float[]{0.0,0.92,0.0,0.0961,0.9124,0.0,-0.095,0.9171,0.0029,0.0,1.045,-0.095}, 12);
SoIndexedLineSet97->setCoord(*SoCoordinate98);

SoShape95->setGeometry(*SoIndexedLineSet97);

SoHAnimSegment91->addChild(*SoShape95);

SoHAnimSite* SoHAnimSite99 = new SoHAnimSite();
SoHAnimSite99->X3DNode::setName(QString("l_iliocristale_pt"));
SoHAnimSite99->setDEF(QString("Joe_l_iliocristale_pt"));
SoHAnimSite99->setTranslation(new float[]{0.1425,1.065,0.0033});
SoShape* SoShape100 = new SoShape();
SoShape100->setUSE(QString("sitebox"));
SoHAnimSite99->addChild(*SoShape100);

SoHAnimSegment91->addChild(*SoHAnimSite99);

SoHAnimSite* SoHAnimSite101 = new SoHAnimSite();
SoHAnimSite101->X3DNode::setName(QString("l_trochanterion_pt"));
SoHAnimSite101->setDEF(QString("Joe_l_trochanterion_pt"));
SoHAnimSite101->setTranslation(new float[]{0.15,0.9,-0.01});
SoShape* SoShape102 = new SoShape();
SoShape102->setUSE(QString("sitebox"));
SoHAnimSite101->addChild(*SoShape102);

SoHAnimSegment91->addChild(*SoHAnimSite101);

SoHAnimSite* SoHAnimSite103 = new SoHAnimSite();
SoHAnimSite103->X3DNode::setName(QString("r_iliocristale_pt"));
SoHAnimSite103->setDEF(QString("Joe_r_iliocristale_pt"));
SoHAnimSite103->setTranslation(new float[]{-0.1425,1.065,0.0033});
SoShape* SoShape104 = new SoShape();
SoShape104->setUSE(QString("sitebox"));
SoHAnimSite103->addChild(*SoShape104);

SoHAnimSegment91->addChild(*SoHAnimSite103);

SoHAnimSite* SoHAnimSite105 = new SoHAnimSite();
SoHAnimSite105->X3DNode::setName(QString("r_trochanterion_pt"));
SoHAnimSite105->setDEF(QString("Joe_r_trochanterion_pt"));
SoHAnimSite105->setTranslation(new float[]{-0.15,0.9,-0.01});
SoShape* SoShape106 = new SoShape();
SoShape106->setUSE(QString("sitebox"));
SoHAnimSite105->addChild(*SoShape106);

SoHAnimSegment91->addChild(*SoHAnimSite105);

SoHAnimSite* SoHAnimSite107 = new SoHAnimSite();
SoHAnimSite107->X3DNode::setName(QString("l_asis_pt"));
SoHAnimSite107->setDEF(QString("Joe_l_asis_pt"));
SoHAnimSite107->setTranslation(new float[]{0.0935,1.03,0.075});
SoShape* SoShape108 = new SoShape();
SoShape108->setUSE(QString("sitebox"));
SoHAnimSite107->addChild(*SoShape108);

SoHAnimSegment91->addChild(*SoHAnimSite107);

SoHAnimSite* SoHAnimSite109 = new SoHAnimSite();
SoHAnimSite109->X3DNode::setName(QString("r_asis_pt"));
SoHAnimSite109->setDEF(QString("Joe_r_asis_pt"));
SoHAnimSite109->setTranslation(new float[]{-0.0935,1.03,0.075});
SoShape* SoShape110 = new SoShape();
SoShape110->setUSE(QString("sitebox"));
SoHAnimSite109->addChild(*SoShape110);

SoHAnimSegment91->addChild(*SoHAnimSite109);

SoHAnimSite* SoHAnimSite111 = new SoHAnimSite();
SoHAnimSite111->X3DNode::setName(QString("l_psis_pt"));
SoHAnimSite111->setDEF(QString("Joe_l_psis_pt"));
SoHAnimSite111->setTranslation(new float[]{0.0773,1.019,-0.12});
SoShape* SoShape112 = new SoShape();
SoShape112->setUSE(QString("sitebox"));
SoHAnimSite111->addChild(*SoShape112);

SoHAnimSegment91->addChild(*SoHAnimSite111);

SoHAnimSite* SoHAnimSite113 = new SoHAnimSite();
SoHAnimSite113->X3DNode::setName(QString("r_psis_pt"));
SoHAnimSite113->setDEF(QString("Joe_r_psis_pt"));
SoHAnimSite113->setTranslation(new float[]{-0.0773,1.019,-0.12});
SoShape* SoShape114 = new SoShape();
SoShape114->setUSE(QString("sitebox"));
SoHAnimSite113->addChild(*SoShape114);

SoHAnimSegment91->addChild(*SoHAnimSite113);

SoHAnimSite* SoHAnimSite115 = new SoHAnimSite();
SoHAnimSite115->X3DNode::setName(QString("floormarker_pt"));
SoHAnimSite115->setDEF(QString("Joe_floormarker_pt"));
SoTransform* SoTransform116 = new SoTransform();
SoTransform116->setScale(new float[]{3.0,3.0,3.0});
SoShape* SoShape117 = new SoShape();
SoShape117->setUSE(QString("sitebox"));
SoTransform116->addChild(*SoShape117);

SoHAnimSite115->addChild(*SoTransform116);

SoHAnimSegment91->addChild(*SoHAnimSite115);

SoHAnimSite* SoHAnimSite118 = new SoHAnimSite();
SoHAnimSite118->X3DNode::setName(QString("crotch_pt"));
SoHAnimSite118->setDEF(QString("Joe_crotch_pt"));
SoHAnimSite118->setTranslation(new float[]{0.0,0.87,-0.022});
SoShape* SoShape119 = new SoShape();
SoShape119->setUSE(QString("sitebox"));
SoHAnimSite118->addChild(*SoShape119);

SoHAnimSegment91->addChild(*SoHAnimSite118);

SoHAnimJoint90->addChildren(*SoHAnimSegment91);

SoHAnimJoint* SoHAnimJoint120 = new SoHAnimJoint();
SoHAnimJoint120->X3DNode::setName(QString("l_hip"));
SoHAnimJoint120->setDEF(QString("Joe_l_hip"));
SoHAnimJoint120->setCenter(new float[]{0.1,0.92,0.0});
SoHAnimJoint120->setSkinCoordIndex(new int32_t[]{89,90,94,95,96,97}, 6);
SoHAnimJoint120->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment121 = new SoHAnimSegment();
SoHAnimSegment121->X3DNode::setName(QString("l_thigh"));
SoHAnimSegment121->setDEF(QString("Joe_l_thigh"));
SoTransform* SoTransform122 = new SoTransform();
SoTransform122->setTranslation(new float[]{0.1,0.92,0.0});
SoShape* SoShape123 = new SoShape();
SoShape123->setUSE(QString("jointbox"));
SoTransform122->addChild(*SoShape123);

SoHAnimSegment121->addChild(*SoTransform122);

SoShape* SoShape124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoVRMLAppearance125->setUSE(QString("SegmentLine"));
SoShape124->addChild(*SoVRMLAppearance125);

SoIndexedLineSet* SoIndexedLineSet126 = new SoIndexedLineSet();
SoIndexedLineSet126->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate127 = new SoCoordinate();
SoCoordinate127->setPoint(new float[]{0.1,0.92,0.0,0.115,0.466,0.0}, 6);
SoIndexedLineSet126->setCoord(*SoCoordinate127);

SoShape124->setGeometry(*SoIndexedLineSet126);

SoHAnimSegment121->addChild(*SoShape124);

SoTransform* SoTransform128 = new SoTransform();
SoTransform128->setTranslation(new float[]{0.1,0.9,0.0775});
SoShape* SoShape129 = new SoShape();
SoShape129->setUSE(QString("skinsphere"));
SoTransform128->addChild(*SoShape129);

SoHAnimSegment121->addChild(*SoTransform128);

SoTransform* SoTransform130 = new SoTransform();
SoTransform130->setTranslation(new float[]{0.079,0.92,-0.14});
SoShape* SoShape131 = new SoShape();
SoShape131->setUSE(QString("skinsphere"));
SoTransform130->addChild(*SoShape131);

SoHAnimSegment121->addChild(*SoTransform130);

SoTransform* SoTransform132 = new SoTransform();
SoTransform132->setTranslation(new float[]{0.171,0.65,0.0});
SoShape* SoShape133 = new SoShape();
SoShape133->setUSE(QString("skinsphere"));
SoTransform132->addChild(*SoShape133);

SoHAnimSegment121->addChild(*SoTransform132);

SoTransform* SoTransform134 = new SoTransform();
SoTransform134->setTranslation(new float[]{0.02,0.65,0.0});
SoShape* SoShape135 = new SoShape();
SoShape135->setUSE(QString("skinsphere"));
SoTransform134->addChild(*SoShape135);

SoHAnimSegment121->addChild(*SoTransform134);

SoTransform* SoTransform136 = new SoTransform();
SoTransform136->setTranslation(new float[]{0.1,0.65,-0.08});
SoShape* SoShape137 = new SoShape();
SoShape137->setUSE(QString("skinsphere"));
SoTransform136->addChild(*SoShape137);

SoHAnimSegment121->addChild(*SoTransform136);

SoTransform* SoTransform138 = new SoTransform();
SoTransform138->setTranslation(new float[]{0.1,0.65,0.07});
SoShape* SoShape139 = new SoShape();
SoShape139->setUSE(QString("skinsphere"));
SoTransform138->addChild(*SoShape139);

SoHAnimSegment121->addChild(*SoTransform138);

SoHAnimSite* SoHAnimSite140 = new SoHAnimSite();
SoHAnimSite140->X3DNode::setName(QString("l_knee_crease_pt"));
SoHAnimSite140->setDEF(QString("Joe_l_knee_crease_pt"));
SoHAnimSite140->setTranslation(new float[]{0.115,0.466,-0.055});
SoShape* SoShape141 = new SoShape();
SoShape141->setUSE(QString("sitebox"));
SoHAnimSite140->addChild(*SoShape141);

SoHAnimSegment121->addChild(*SoHAnimSite140);

SoHAnimSite* SoHAnimSite142 = new SoHAnimSite();
SoHAnimSite142->X3DNode::setName(QString("l_femoral_lateral_epicondyle_pt"));
SoHAnimSite142->setDEF(QString("Joe_l_femoral_lateral_epicondyle_pt"));
SoHAnimSite142->setTranslation(new float[]{0.17,0.466,0.0});
SoShape* SoShape143 = new SoShape();
SoShape143->setUSE(QString("sitebox"));
SoHAnimSite142->addChild(*SoShape143);

SoHAnimSegment121->addChild(*SoHAnimSite142);

SoHAnimSite* SoHAnimSite144 = new SoHAnimSite();
SoHAnimSite144->X3DNode::setName(QString("l_femoral_medial_epicondyle_pt"));
SoHAnimSite144->setDEF(QString("Joe_l_femoral_medial_epicondyle_pt"));
SoHAnimSite144->setTranslation(new float[]{0.05,0.466,0.0});
SoShape* SoShape145 = new SoShape();
SoShape145->setUSE(QString("sitebox"));
SoHAnimSite144->addChild(*SoShape145);

SoHAnimSegment121->addChild(*SoHAnimSite144);

SoHAnimJoint120->addChildren(*SoHAnimSegment121);

SoHAnimJoint* SoHAnimJoint146 = new SoHAnimJoint();
SoHAnimJoint146->X3DNode::setName(QString("l_knee"));
SoHAnimJoint146->setDEF(QString("Joe_l_knee"));
SoHAnimJoint146->setCenter(new float[]{0.115,0.466,0.0});
SoHAnimJoint146->setSkinCoordIndex(new int32_t[]{334,335,336,337,338,339,340,341}, 8);
SoHAnimJoint146->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment147 = new SoHAnimSegment();
SoHAnimSegment147->X3DNode::setName(QString("l_calf"));
SoHAnimSegment147->setDEF(QString("Joe_l_calf"));
SoTransform* SoTransform148 = new SoTransform();
SoTransform148->setTranslation(new float[]{0.115,0.466,0.0});
SoShape* SoShape149 = new SoShape();
SoShape149->setUSE(QString("jointbox"));
SoTransform148->addChild(*SoShape149);

SoHAnimSegment147->addChild(*SoTransform148);

SoShape* SoShape150 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance151 = new SoVRMLAppearance();
SoVRMLAppearance151->setUSE(QString("SegmentLine"));
SoShape150->addChild(*SoVRMLAppearance151);

SoIndexedLineSet* SoIndexedLineSet152 = new SoIndexedLineSet();
SoIndexedLineSet152->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate153 = new SoCoordinate();
SoCoordinate153->setPoint(new float[]{0.115,0.466,0.0,0.1,0.069,0.0}, 6);
SoIndexedLineSet152->setCoord(*SoCoordinate153);

SoShape150->setGeometry(*SoIndexedLineSet152);

SoHAnimSegment147->addChild(*SoShape150);

SoTransform* SoTransform154 = new SoTransform();
SoTransform154->setTranslation(new float[]{0.115,0.466,0.06});
SoShape* SoShape155 = new SoShape();
SoShape155->setUSE(QString("skinsphere"));
SoTransform154->addChild(*SoShape155);

SoHAnimSegment147->addChild(*SoTransform154);

SoTransform* SoTransform156 = new SoTransform();
SoTransform156->setTranslation(new float[]{0.115,0.466,-0.055});
SoShape* SoShape157 = new SoShape();
SoShape157->setUSE(QString("skinsphere"));
SoTransform156->addChild(*SoShape157);

SoHAnimSegment147->addChild(*SoTransform156);

SoTransform* SoTransform158 = new SoTransform();
SoTransform158->setTranslation(new float[]{0.17,0.466,0.0});
SoShape* SoShape159 = new SoShape();
SoShape159->setUSE(QString("skinsphere"));
SoTransform158->addChild(*SoShape159);

SoHAnimSegment147->addChild(*SoTransform158);

SoTransform* SoTransform160 = new SoTransform();
SoTransform160->setTranslation(new float[]{0.05,0.466,0.0});
SoShape* SoShape161 = new SoShape();
SoShape161->setUSE(QString("skinsphere"));
SoTransform160->addChild(*SoShape161);

SoHAnimSegment147->addChild(*SoTransform160);

SoTransform* SoTransform162 = new SoTransform();
SoTransform162->setTranslation(new float[]{0.17,0.3,0.0});
SoShape* SoShape163 = new SoShape();
SoShape163->setUSE(QString("skinsphere"));
SoTransform162->addChild(*SoShape163);

SoHAnimSegment147->addChild(*SoTransform162);

SoTransform* SoTransform164 = new SoTransform();
SoTransform164->setTranslation(new float[]{0.06,0.3,0.0});
SoShape* SoShape165 = new SoShape();
SoShape165->setUSE(QString("skinsphere"));
SoTransform164->addChild(*SoShape165);

SoHAnimSegment147->addChild(*SoTransform164);

SoTransform* SoTransform166 = new SoTransform();
SoTransform166->setTranslation(new float[]{0.1,0.3,-0.05});
SoShape* SoShape167 = new SoShape();
SoShape167->setUSE(QString("skinsphere"));
SoTransform166->addChild(*SoShape167);

SoHAnimSegment147->addChild(*SoTransform166);

SoTransform* SoTransform168 = new SoTransform();
SoTransform168->setTranslation(new float[]{0.1,0.3,0.05});
SoShape* SoShape169 = new SoShape();
SoShape169->setUSE(QString("skinsphere"));
SoTransform168->addChild(*SoShape169);

SoHAnimSegment147->addChild(*SoTransform168);

SoHAnimSite* SoHAnimSite170 = new SoHAnimSite();
SoHAnimSite170->X3DNode::setName(QString("l_lateral_malleolus_pt"));
SoHAnimSite170->setDEF(QString("Joe_l_lateral_malleolus_pt"));
SoHAnimSite170->setTranslation(new float[]{0.15,0.07,0.0});
SoShape* SoShape171 = new SoShape();
SoShape171->setUSE(QString("sitebox"));
SoHAnimSite170->addChild(*SoShape171);

SoHAnimSegment147->addChild(*SoHAnimSite170);

SoHAnimSite* SoHAnimSite172 = new SoHAnimSite();
SoHAnimSite172->X3DNode::setName(QString("l_medial_malleolus_pt"));
SoHAnimSite172->setDEF(QString("Joe_l_medial_malleolus_pt"));
SoHAnimSite172->setTranslation(new float[]{0.085,0.086,0.0125});
SoShape* SoShape173 = new SoShape();
SoShape173->setUSE(QString("sitebox"));
SoHAnimSite172->addChild(*SoShape173);

SoHAnimSegment147->addChild(*SoHAnimSite172);

SoHAnimJoint146->addChildren(*SoHAnimSegment147);

SoHAnimJoint* SoHAnimJoint174 = new SoHAnimJoint();
SoHAnimJoint174->X3DNode::setName(QString("l_talocrural"));
SoHAnimJoint174->setDEF(QString("Joe_l_talocrural"));
SoHAnimJoint174->setCenter(new float[]{0.115,0.069,0.0});
SoHAnimJoint174->setSkinCoordIndex(new int32_t[]{342,343,344,345}, 4);
SoHAnimJoint174->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment175 = new SoHAnimSegment();
SoHAnimSegment175->X3DNode::setName(QString("l_talus"));
SoHAnimSegment175->setDEF(QString("Joe_l_talus"));
SoTransform* SoTransform176 = new SoTransform();
SoTransform176->setTranslation(new float[]{0.115,0.069,0.0});
SoShape* SoShape177 = new SoShape();
SoShape177->setUSE(QString("jointbox"));
SoTransform176->addChild(*SoShape177);

SoHAnimSegment175->addChild(*SoTransform176);

SoShape* SoShape178 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance179 = new SoVRMLAppearance();
SoVRMLAppearance179->setUSE(QString("SegmentLine"));
SoShape178->addChild(*SoVRMLAppearance179);

SoIndexedLineSet* SoIndexedLineSet180 = new SoIndexedLineSet();
SoIndexedLineSet180->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate181 = new SoCoordinate();
SoCoordinate181->setPoint(new float[]{0.1,0.069,0.0,0.115,0.031,0.03}, 6);
SoIndexedLineSet180->setCoord(*SoCoordinate181);

SoShape178->setGeometry(*SoIndexedLineSet180);

SoHAnimSegment175->addChild(*SoShape178);

SoTransform* SoTransform182 = new SoTransform();
SoTransform182->setTranslation(new float[]{0.15,0.07,0.0});
SoShape* SoShape183 = new SoShape();
SoShape183->setUSE(QString("skinsphere"));
SoTransform182->addChild(*SoShape183);

SoHAnimSegment175->addChild(*SoTransform182);

SoTransform* SoTransform184 = new SoTransform();
SoTransform184->setTranslation(new float[]{0.085,0.086,0.0125});
SoShape* SoShape185 = new SoShape();
SoShape185->setUSE(QString("skinsphere"));
SoTransform184->addChild(*SoShape185);

SoHAnimSegment175->addChild(*SoTransform184);

SoTransform* SoTransform186 = new SoTransform();
SoTransform186->setTranslation(new float[]{0.115,0.069,-0.045});
SoShape* SoShape187 = new SoShape();
SoShape187->setUSE(QString("skinsphere"));
SoTransform186->addChild(*SoShape187);

SoHAnimSegment175->addChild(*SoTransform186);

SoTransform* SoTransform188 = new SoTransform();
SoTransform188->setTranslation(new float[]{0.117,0.0975,0.0615});
SoShape* SoShape189 = new SoShape();
SoShape189->setUSE(QString("skinsphere"));
SoTransform188->addChild(*SoShape189);

SoHAnimSegment175->addChild(*SoTransform188);

SoHAnimSite* SoHAnimSite190 = new SoHAnimSite();
SoHAnimSite190->X3DNode::setName(QString("l_sphyrion_pt"));
SoHAnimSite190->setDEF(QString("Joe_l_sphyrion_pt"));
SoHAnimSite190->setTranslation(new float[]{0.09,0.056,0.0125});
SoShape* SoShape191 = new SoShape();
SoShape191->setUSE(QString("sitebox"));
SoHAnimSite190->addChild(*SoShape191);

SoHAnimSegment175->addChild(*SoHAnimSite190);

SoHAnimSite* SoHAnimSite192 = new SoHAnimSite();
SoHAnimSite192->X3DNode::setName(QString("l_calcaneus_posterior_pt"));
SoHAnimSite192->setDEF(QString("Joe_l_calcaneus_posterior_pt"));
SoHAnimSite192->setTranslation(new float[]{0.115,0.04,-0.055});
SoShape* SoShape193 = new SoShape();
SoShape193->setUSE(QString("sitebox"));
SoHAnimSite192->addChild(*SoShape193);

SoHAnimSegment175->addChild(*SoHAnimSite192);

SoHAnimJoint174->addChildren(*SoHAnimSegment175);

SoHAnimJoint* SoHAnimJoint194 = new SoHAnimJoint();
SoHAnimJoint194->X3DNode::setName(QString("l_tarsometatarsal_2"));
SoHAnimJoint194->setDEF(QString("Joe_l_tarsometatarsal_2"));
SoHAnimJoint194->setCenter(new float[]{0.115,0.031,0.03});
SoHAnimJoint194->setSkinCoordIndex(new int32_t[]{346,347,348,71}, 4);
SoHAnimJoint194->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment195 = new SoHAnimSegment();
SoHAnimSegment195->X3DNode::setName(QString("l_metatarsal_2"));
SoHAnimSegment195->setDEF(QString("Joe_l_metatarsal_2"));
SoTransform* SoTransform196 = new SoTransform();
SoTransform196->setTranslation(new float[]{0.115,0.031,0.03});
SoShape* SoShape197 = new SoShape();
SoShape197->setUSE(QString("jointbox"));
SoTransform196->addChild(*SoShape197);

SoHAnimSegment195->addChild(*SoTransform196);

SoShape* SoShape198 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance199 = new SoVRMLAppearance();
SoVRMLAppearance199->setUSE(QString("SegmentLine"));
SoShape198->addChild(*SoVRMLAppearance199);

SoIndexedLineSet* SoIndexedLineSet200 = new SoIndexedLineSet();
SoIndexedLineSet200->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate201 = new SoCoordinate();
SoCoordinate201->setPoint(new float[]{0.115,0.031,0.03,0.115,0.037,0.09}, 6);
SoIndexedLineSet200->setCoord(*SoCoordinate201);

SoShape198->setGeometry(*SoIndexedLineSet200);

SoHAnimSegment195->addChild(*SoShape198);

SoTransform* SoTransform202 = new SoTransform();
SoTransform202->setTranslation(new float[]{0.1375,0.006,-0.03});
SoShape* SoShape203 = new SoShape();
SoShape203->setUSE(QString("skinsphere"));
SoTransform202->addChild(*SoShape203);

SoHAnimSegment195->addChild(*SoTransform202);

SoTransform* SoTransform204 = new SoTransform();
SoTransform204->setTranslation(new float[]{0.095,0.006,-0.03});
SoShape* SoShape205 = new SoShape();
SoShape205->setUSE(QString("skinsphere"));
SoTransform204->addChild(*SoShape205);

SoHAnimSegment195->addChild(*SoTransform204);

SoTransform* SoTransform206 = new SoTransform();
SoTransform206->setTranslation(new float[]{0.115,0.015,-0.045});
SoShape* SoShape207 = new SoShape();
SoShape207->setUSE(QString("skinsphere"));
SoTransform206->addChild(*SoShape207);

SoHAnimSegment195->addChild(*SoTransform206);

SoHAnimJoint194->addChildren(*SoHAnimSegment195);

SoHAnimJoint* SoHAnimJoint208 = new SoHAnimJoint();
SoHAnimJoint208->X3DNode::setName(QString("l_metatarsophalangeal_2"));
SoHAnimJoint208->setDEF(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimJoint208->setCenter(new float[]{0.115,0.037,0.09});
SoHAnimJoint208->setSkinCoordIndex(new int32_t[]{349,350,351,352}, 4);
SoHAnimJoint208->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment209 = new SoHAnimSegment();
SoHAnimSegment209->X3DNode::setName(QString("l_tarsal_proximal_phalanx_2"));
SoHAnimSegment209->setDEF(QString("Joe_l_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform210 = new SoTransform();
SoTransform210->setTranslation(new float[]{0.115,0.037,0.09});
SoShape* SoShape211 = new SoShape();
SoShape211->setUSE(QString("jointbox"));
SoTransform210->addChild(*SoShape211);

SoHAnimSegment209->addChild(*SoTransform210);

SoShape* SoShape212 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance213 = new SoVRMLAppearance();
SoVRMLAppearance213->setUSE(QString("SegmentLine"));
SoShape212->addChild(*SoVRMLAppearance213);

SoIndexedLineSet* SoIndexedLineSet214 = new SoIndexedLineSet();
SoIndexedLineSet214->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate215 = new SoCoordinate();
SoCoordinate215->setPoint(new float[]{0.115,0.037,0.09,0.115,0.02,0.122}, 6);
SoIndexedLineSet214->setCoord(*SoCoordinate215);

SoShape212->setGeometry(*SoIndexedLineSet214);

SoHAnimSegment209->addChild(*SoShape212);

SoTransform* SoTransform216 = new SoTransform();
SoTransform216->setTranslation(new float[]{0.115,0.06,0.1});
SoShape* SoShape217 = new SoShape();
SoShape217->setUSE(QString("skinsphere"));
SoTransform216->addChild(*SoShape217);

SoHAnimSegment209->addChild(*SoTransform216);

SoTransform* SoTransform218 = new SoTransform();
SoTransform218->setTranslation(new float[]{0.115,0.0,0.07});
SoShape* SoShape219 = new SoShape();
SoShape219->setUSE(QString("skinsphere"));
SoTransform218->addChild(*SoShape219);

SoHAnimSegment209->addChild(*SoTransform218);

SoTransform* SoTransform220 = new SoTransform();
SoTransform220->setTranslation(new float[]{0.165,0.0,0.07});
SoShape* SoShape221 = new SoShape();
SoShape221->setUSE(QString("skinsphere"));
SoTransform220->addChild(*SoShape221);

SoHAnimSegment209->addChild(*SoTransform220);

SoTransform* SoTransform222 = new SoTransform();
SoTransform222->setTranslation(new float[]{0.095,0.0,0.07});
SoShape* SoShape223 = new SoShape();
SoShape223->setUSE(QString("skinsphere"));
SoTransform222->addChild(*SoShape223);

SoHAnimSegment209->addChild(*SoTransform222);

SoHAnimSite* SoHAnimSite224 = new SoHAnimSite();
SoHAnimSite224->X3DNode::setName(QString("l_metatarsal_phalanx_1_pt"));
SoHAnimSite224->setDEF(QString("Joe_l_metatarsal_phalanx_1_pt"));
SoHAnimSite224->setTranslation(new float[]{0.087,0.01,0.122});
SoShape* SoShape225 = new SoShape();
SoShape225->setUSE(QString("sitebox"));
SoHAnimSite224->addChild(*SoShape225);

SoHAnimSegment209->addChild(*SoHAnimSite224);

SoHAnimJoint208->addChildren(*SoHAnimSegment209);

SoHAnimJoint* SoHAnimJoint226 = new SoHAnimJoint();
SoHAnimJoint226->X3DNode::setName(QString("l_metatarsal"));
SoHAnimJoint226->setDEF(QString("Joe_l_metatarsal"));
SoHAnimJoint226->setCenter(new float[]{0.115,0.02,0.122});
SoHAnimJoint226->setSkinCoordIndex(new int32_t[]{353,354,355,356,357,358,359,360,361}, 9);
SoHAnimJoint226->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment227 = new SoHAnimSegment();
SoHAnimSegment227->X3DNode::setName(QString("l_tarsal_distal_phalanx_2"));
SoHAnimSegment227->setDEF(QString("Joe_l_tarsal_distal_phalanx_2"));
SoTransform* SoTransform228 = new SoTransform();
SoTransform228->setTranslation(new float[]{0.115,0.02,0.13});
SoShape* SoShape229 = new SoShape();
SoShape229->setUSE(QString("jointbox"));
SoTransform228->addChild(*SoShape229);

SoHAnimSegment227->addChild(*SoTransform228);

SoShape* SoShape230 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance231 = new SoVRMLAppearance();
SoVRMLAppearance231->setUSE(QString("SegmentLine"));
SoShape230->addChild(*SoVRMLAppearance231);

SoIndexedLineSet* SoIndexedLineSet232 = new SoIndexedLineSet();
SoIndexedLineSet232->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate233 = new SoCoordinate();
SoCoordinate233->setPoint(new float[]{0.115,0.02,0.122,0.132,0.013,0.19}, 6);
SoIndexedLineSet232->setCoord(*SoCoordinate233);

SoShape230->setGeometry(*SoIndexedLineSet232);

SoHAnimSegment227->addChild(*SoShape230);

SoTransform* SoTransform234 = new SoTransform();
SoTransform234->setTranslation(new float[]{0.115,0.04,0.13});
SoShape* SoShape235 = new SoShape();
SoShape235->setUSE(QString("skinsphere"));
SoTransform234->addChild(*SoShape235);

SoHAnimSegment227->addChild(*SoTransform234);

SoTransform* SoTransform236 = new SoTransform();
SoTransform236->setTranslation(new float[]{0.125,0.0,0.12});
SoShape* SoShape237 = new SoShape();
SoShape237->setUSE(QString("skinsphere"));
SoTransform236->addChild(*SoShape237);

SoHAnimSegment227->addChild(*SoTransform236);

SoTransform* SoTransform238 = new SoTransform();
SoTransform238->setTranslation(new float[]{0.165,0.0,0.12});
SoShape* SoShape239 = new SoShape();
SoShape239->setUSE(QString("skinsphere"));
SoTransform238->addChild(*SoShape239);

SoHAnimSegment227->addChild(*SoTransform238);

SoTransform* SoTransform240 = new SoTransform();
SoTransform240->setTranslation(new float[]{0.087,0.0,0.122});
SoShape* SoShape241 = new SoShape();
SoShape241->setUSE(QString("skinsphere"));
SoTransform240->addChild(*SoShape241);

SoHAnimSegment227->addChild(*SoTransform240);

SoTransform* SoTransform242 = new SoTransform();
SoTransform242->setTranslation(new float[]{0.09,0.012,0.188});
SoShape* SoShape243 = new SoShape();
SoShape243->setUSE(QString("skinsphere"));
SoTransform242->addChild(*SoShape243);

SoHAnimSegment227->addChild(*SoTransform242);

SoTransform* SoTransform244 = new SoTransform();
SoTransform244->setTranslation(new float[]{0.11,0.011,0.19});
SoShape* SoShape245 = new SoShape();
SoShape245->setUSE(QString("skinsphere"));
SoTransform244->addChild(*SoShape245);

SoHAnimSegment227->addChild(*SoTransform244);

SoTransform* SoTransform246 = new SoTransform();
SoTransform246->setTranslation(new float[]{0.128,0.011,0.185});
SoShape* SoShape247 = new SoShape();
SoShape247->setUSE(QString("skinsphere"));
SoTransform246->addChild(*SoShape247);

SoHAnimSegment227->addChild(*SoTransform246);

SoTransform* SoTransform248 = new SoTransform();
SoTransform248->setTranslation(new float[]{0.142,0.011,0.178});
SoShape* SoShape249 = new SoShape();
SoShape249->setUSE(QString("skinsphere"));
SoTransform248->addChild(*SoShape249);

SoHAnimSegment227->addChild(*SoTransform248);

SoTransform* SoTransform250 = new SoTransform();
SoTransform250->setTranslation(new float[]{0.154,0.01,0.168});
SoShape* SoShape251 = new SoShape();
SoShape251->setUSE(QString("skinsphere"));
SoTransform250->addChild(*SoShape251);

SoHAnimSegment227->addChild(*SoTransform250);

SoHAnimSite* SoHAnimSite252 = new SoHAnimSite();
SoHAnimSite252->X3DNode::setName(QString("l_metatarsal_phalanx_5_pt"));
SoHAnimSite252->setDEF(QString("Joe_l_metatarsal_phalanx_5_pt"));
SoHAnimSite252->setTranslation(new float[]{0.165,0.01,0.12});
SoShape* SoShape253 = new SoShape();
SoShape253->setUSE(QString("sitebox"));
SoHAnimSite252->addChild(*SoShape253);

SoHAnimSegment227->addChild(*SoHAnimSite252);

SoHAnimSite* SoHAnimSite254 = new SoHAnimSite();
SoHAnimSite254->X3DNode::setName(QString("l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite254->setDEF(QString("Joe_l_tarsal_distal_phalanx_2_pt"));
SoHAnimSite254->setTranslation(new float[]{0.11,0.011,0.19});
SoShape* SoShape255 = new SoShape();
SoShape255->setUSE(QString("sitebox"));
SoHAnimSite254->addChild(*SoShape255);

SoHAnimSegment227->addChild(*SoHAnimSite254);

SoHAnimJoint226->addChildren(*SoHAnimSegment227);

SoHAnimJoint208->addChildren(*SoHAnimJoint226);

SoHAnimJoint194->addChildren(*SoHAnimJoint208);

SoHAnimJoint174->addChildren(*SoHAnimJoint194);

SoHAnimJoint146->addChildren(*SoHAnimJoint174);

SoHAnimJoint120->addChildren(*SoHAnimJoint146);

SoHAnimJoint90->addChildren(*SoHAnimJoint120);

SoHAnimJoint* SoHAnimJoint256 = new SoHAnimJoint();
SoHAnimJoint256->X3DNode::setName(QString("r_hip"));
SoHAnimJoint256->setDEF(QString("Joe_r_hip"));
SoHAnimJoint256->setCenter(new float[]{-0.1,0.92,0.0});
SoHAnimJoint256->setSkinCoordIndex(new int32_t[]{91,92,98,99,100,101}, 6);
SoHAnimJoint256->setSkinCoordWeight(new float[]{0.65,1.0,1.0,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment257 = new SoHAnimSegment();
SoHAnimSegment257->X3DNode::setName(QString("r_thigh"));
SoHAnimSegment257->setDEF(QString("Joe_r_thigh"));
SoTransform* SoTransform258 = new SoTransform();
SoTransform258->setTranslation(new float[]{-0.1,0.92,0.0});
SoShape* SoShape259 = new SoShape();
SoShape259->setUSE(QString("jointbox"));
SoTransform258->addChild(*SoShape259);

SoHAnimSegment257->addChild(*SoTransform258);

SoShape* SoShape260 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance261 = new SoVRMLAppearance();
SoVRMLAppearance261->setUSE(QString("SegmentLine"));
SoShape260->addChild(*SoVRMLAppearance261);

SoIndexedLineSet* SoIndexedLineSet262 = new SoIndexedLineSet();
SoIndexedLineSet262->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate263 = new SoCoordinate();
SoCoordinate263->setPoint(new float[]{-0.1,0.92,0.0,-0.1,0.4913,0.0}, 6);
SoIndexedLineSet262->setCoord(*SoCoordinate263);

SoShape260->setGeometry(*SoIndexedLineSet262);

SoHAnimSegment257->addChild(*SoShape260);

SoTransform* SoTransform264 = new SoTransform();
SoTransform264->setTranslation(new float[]{-0.079,0.92,-0.14});
SoShape* SoShape265 = new SoShape();
SoShape265->setUSE(QString("skinsphere"));
SoTransform264->addChild(*SoShape265);

SoHAnimSegment257->addChild(*SoTransform264);

SoTransform* SoTransform266 = new SoTransform();
SoTransform266->setTranslation(new float[]{-0.1,0.9,0.075});
SoShape* SoShape267 = new SoShape();
SoShape267->setUSE(QString("skinsphere"));
SoTransform266->addChild(*SoShape267);

SoHAnimSegment257->addChild(*SoTransform266);

SoTransform* SoTransform268 = new SoTransform();
SoTransform268->setTranslation(new float[]{-0.171,0.65,0.0});
SoShape* SoShape269 = new SoShape();
SoShape269->setUSE(QString("skinsphere"));
SoTransform268->addChild(*SoShape269);

SoHAnimSegment257->addChild(*SoTransform268);

SoTransform* SoTransform270 = new SoTransform();
SoTransform270->setTranslation(new float[]{-0.02,0.65,0.0});
SoShape* SoShape271 = new SoShape();
SoShape271->setUSE(QString("skinsphere"));
SoTransform270->addChild(*SoShape271);

SoHAnimSegment257->addChild(*SoTransform270);

SoTransform* SoTransform272 = new SoTransform();
SoTransform272->setTranslation(new float[]{-0.1,0.65,-0.08});
SoShape* SoShape273 = new SoShape();
SoShape273->setUSE(QString("skinsphere"));
SoTransform272->addChild(*SoShape273);

SoHAnimSegment257->addChild(*SoTransform272);

SoTransform* SoTransform274 = new SoTransform();
SoTransform274->setTranslation(new float[]{-0.1,0.65,0.07});
SoShape* SoShape275 = new SoShape();
SoShape275->setUSE(QString("skinsphere"));
SoTransform274->addChild(*SoShape275);

SoHAnimSegment257->addChild(*SoTransform274);

SoHAnimSite* SoHAnimSite276 = new SoHAnimSite();
SoHAnimSite276->X3DNode::setName(QString("r_knee_crease_pt"));
SoHAnimSite276->setDEF(QString("Joe_r_knee_crease_pt"));
SoHAnimSite276->setTranslation(new float[]{-0.115,0.466,-0.055});
SoShape* SoShape277 = new SoShape();
SoShape277->setUSE(QString("sitebox"));
SoHAnimSite276->addChild(*SoShape277);

SoHAnimSegment257->addChild(*SoHAnimSite276);

SoHAnimSite* SoHAnimSite278 = new SoHAnimSite();
SoHAnimSite278->X3DNode::setName(QString("r_femoral_lateral_epicondyle_pt"));
SoHAnimSite278->setDEF(QString("Joe_r_femoral_lateral_epicondyle_pt"));
SoHAnimSite278->setTranslation(new float[]{-0.17,0.466,0.0});
SoShape* SoShape279 = new SoShape();
SoShape279->setUSE(QString("sitebox"));
SoHAnimSite278->addChild(*SoShape279);

SoHAnimSegment257->addChild(*SoHAnimSite278);

SoHAnimSite* SoHAnimSite280 = new SoHAnimSite();
SoHAnimSite280->X3DNode::setName(QString("r_femoral_medial_epicondyle_pt"));
SoHAnimSite280->setDEF(QString("Joe_r_femoral_medial_epicondyle_pt"));
SoHAnimSite280->setTranslation(new float[]{-0.05,0.466,0.0});
SoShape* SoShape281 = new SoShape();
SoShape281->setUSE(QString("sitebox"));
SoHAnimSite280->addChild(*SoShape281);

SoHAnimSegment257->addChild(*SoHAnimSite280);

SoHAnimJoint256->addChildren(*SoHAnimSegment257);

SoHAnimJoint* SoHAnimJoint282 = new SoHAnimJoint();
SoHAnimJoint282->X3DNode::setName(QString("r_knee"));
SoHAnimJoint282->setDEF(QString("Joe_r_knee"));
SoHAnimJoint282->setCenter(new float[]{-0.05,0.466,0.0});
SoHAnimJoint282->setSkinCoordIndex(new int32_t[]{362,363,364,365,366,367,368,369}, 8);
SoHAnimJoint282->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment283 = new SoHAnimSegment();
SoHAnimSegment283->X3DNode::setName(QString("r_calf"));
SoHAnimSegment283->setDEF(QString("Joe_r_calf"));
SoTransform* SoTransform284 = new SoTransform();
SoTransform284->setTranslation(new float[]{-0.1,0.4913,0.0});
SoShape* SoShape285 = new SoShape();
SoShape285->setUSE(QString("jointbox"));
SoTransform284->addChild(*SoShape285);

SoHAnimSegment283->addChild(*SoTransform284);

SoShape* SoShape286 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance287 = new SoVRMLAppearance();
SoVRMLAppearance287->setUSE(QString("SegmentLine"));
SoShape286->addChild(*SoVRMLAppearance287);

SoIndexedLineSet* SoIndexedLineSet288 = new SoIndexedLineSet();
SoIndexedLineSet288->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate289 = new SoCoordinate();
SoCoordinate289->setPoint(new float[]{-0.1,0.4913,0.0,-0.1,0.0712,0.0}, 6);
SoIndexedLineSet288->setCoord(*SoCoordinate289);

SoShape286->setGeometry(*SoIndexedLineSet288);

SoHAnimSegment283->addChild(*SoShape286);

SoTransform* SoTransform290 = new SoTransform();
SoTransform290->setTranslation(new float[]{-0.115,0.466,0.06});
SoShape* SoShape291 = new SoShape();
SoShape291->setUSE(QString("skinsphere"));
SoTransform290->addChild(*SoShape291);

SoHAnimSegment283->addChild(*SoTransform290);

SoTransform* SoTransform292 = new SoTransform();
SoTransform292->setTranslation(new float[]{-0.115,0.466,-0.055});
SoShape* SoShape293 = new SoShape();
SoShape293->setUSE(QString("skinsphere"));
SoTransform292->addChild(*SoShape293);

SoHAnimSegment283->addChild(*SoTransform292);

SoTransform* SoTransform294 = new SoTransform();
SoTransform294->setTranslation(new float[]{-0.17,0.466,0.0});
SoShape* SoShape295 = new SoShape();
SoShape295->setUSE(QString("skinsphere"));
SoTransform294->addChild(*SoShape295);

SoHAnimSegment283->addChild(*SoTransform294);

SoTransform* SoTransform296 = new SoTransform();
SoTransform296->setTranslation(new float[]{-0.05,0.466,0.0});
SoShape* SoShape297 = new SoShape();
SoShape297->setUSE(QString("skinsphere"));
SoTransform296->addChild(*SoShape297);

SoHAnimSegment283->addChild(*SoTransform296);

SoTransform* SoTransform298 = new SoTransform();
SoTransform298->setTranslation(new float[]{-0.17,0.3,0.0});
SoShape* SoShape299 = new SoShape();
SoShape299->setUSE(QString("skinsphere"));
SoTransform298->addChild(*SoShape299);

SoHAnimSegment283->addChild(*SoTransform298);

SoTransform* SoTransform300 = new SoTransform();
SoTransform300->setTranslation(new float[]{-0.06,0.3,0.0});
SoShape* SoShape301 = new SoShape();
SoShape301->setUSE(QString("skinsphere"));
SoTransform300->addChild(*SoShape301);

SoHAnimSegment283->addChild(*SoTransform300);

SoTransform* SoTransform302 = new SoTransform();
SoTransform302->setTranslation(new float[]{-0.1,0.3,-0.05});
SoShape* SoShape303 = new SoShape();
SoShape303->setUSE(QString("skinsphere"));
SoTransform302->addChild(*SoShape303);

SoHAnimSegment283->addChild(*SoTransform302);

SoTransform* SoTransform304 = new SoTransform();
SoTransform304->setTranslation(new float[]{-0.1,0.3,0.05});
SoShape* SoShape305 = new SoShape();
SoShape305->setUSE(QString("skinsphere"));
SoTransform304->addChild(*SoShape305);

SoHAnimSegment283->addChild(*SoTransform304);

SoHAnimSite* SoHAnimSite306 = new SoHAnimSite();
SoHAnimSite306->X3DNode::setName(QString("r_lateral_malleolus_pt"));
SoHAnimSite306->setDEF(QString("Joe_r_lateral_malleolus_pt"));
SoHAnimSite306->setTranslation(new float[]{-0.15,0.07,0.0});
SoShape* SoShape307 = new SoShape();
SoShape307->setUSE(QString("sitebox"));
SoHAnimSite306->addChild(*SoShape307);

SoHAnimSegment283->addChild(*SoHAnimSite306);

SoHAnimSite* SoHAnimSite308 = new SoHAnimSite();
SoHAnimSite308->X3DNode::setName(QString("r_medial_malleolus_pt"));
SoHAnimSite308->setDEF(QString("Joe_r_medial_malleolus_pt"));
SoHAnimSite308->setTranslation(new float[]{-0.085,0.086,0.0125});
SoShape* SoShape309 = new SoShape();
SoShape309->setUSE(QString("sitebox"));
SoHAnimSite308->addChild(*SoShape309);

SoHAnimSegment283->addChild(*SoHAnimSite308);

SoHAnimJoint282->addChildren(*SoHAnimSegment283);

SoHAnimJoint* SoHAnimJoint310 = new SoHAnimJoint();
SoHAnimJoint310->X3DNode::setName(QString("r_talocrural"));
SoHAnimJoint310->setDEF(QString("Joe_r_talocrural"));
SoHAnimJoint310->setCenter(new float[]{-0.115,0.069,0.0});
SoHAnimJoint310->setSkinCoordIndex(new int32_t[]{370,371,372,373}, 4);
SoHAnimJoint310->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment311 = new SoHAnimSegment();
SoHAnimSegment311->X3DNode::setName(QString("r_talus"));
SoHAnimSegment311->setDEF(QString("Joe_r_talus"));
SoTransform* SoTransform312 = new SoTransform();
SoTransform312->setTranslation(new float[]{-0.1,0.0712,0.0});
SoShape* SoShape313 = new SoShape();
SoShape313->setUSE(QString("jointbox"));
SoTransform312->addChild(*SoShape313);

SoHAnimSegment311->addChild(*SoTransform312);

SoShape* SoShape314 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance315 = new SoVRMLAppearance();
SoVRMLAppearance315->setUSE(QString("SegmentLine"));
SoShape314->addChild(*SoVRMLAppearance315);

SoIndexedLineSet* SoIndexedLineSet316 = new SoIndexedLineSet();
SoIndexedLineSet316->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate317 = new SoCoordinate();
SoCoordinate317->setPoint(new float[]{-0.1,0.0712,0.0,-0.1,0.015,-0.01}, 6);
SoIndexedLineSet316->setCoord(*SoCoordinate317);

SoShape314->setGeometry(*SoIndexedLineSet316);

SoHAnimSegment311->addChild(*SoShape314);

SoTransform* SoTransform318 = new SoTransform();
SoTransform318->setTranslation(new float[]{-0.15,0.07,0.0});
SoShape* SoShape319 = new SoShape();
SoShape319->setUSE(QString("skinsphere"));
SoTransform318->addChild(*SoShape319);

SoHAnimSegment311->addChild(*SoTransform318);

SoTransform* SoTransform320 = new SoTransform();
SoTransform320->setTranslation(new float[]{-0.085,0.086,0.0125});
SoShape* SoShape321 = new SoShape();
SoShape321->setUSE(QString("skinsphere"));
SoTransform320->addChild(*SoShape321);

SoHAnimSegment311->addChild(*SoTransform320);

SoTransform* SoTransform322 = new SoTransform();
SoTransform322->setTranslation(new float[]{-0.115,0.069,-0.045});
SoShape* SoShape323 = new SoShape();
SoShape323->setUSE(QString("skinsphere"));
SoTransform322->addChild(*SoShape323);

SoHAnimSegment311->addChild(*SoTransform322);

SoTransform* SoTransform324 = new SoTransform();
SoTransform324->setTranslation(new float[]{-0.117,0.0975,0.0615});
SoShape* SoShape325 = new SoShape();
SoShape325->setUSE(QString("skinsphere"));
SoTransform324->addChild(*SoShape325);

SoHAnimSegment311->addChild(*SoTransform324);

SoHAnimSite* SoHAnimSite326 = new SoHAnimSite();
SoHAnimSite326->X3DNode::setName(QString("r_sphyrion_pt"));
SoHAnimSite326->setDEF(QString("Joe_r_sphyrion_pt"));
SoHAnimSite326->setTranslation(new float[]{-0.09,0.056,0.0125});
SoShape* SoShape327 = new SoShape();
SoShape327->setUSE(QString("sitebox"));
SoHAnimSite326->addChild(*SoShape327);

SoHAnimSegment311->addChild(*SoHAnimSite326);

SoHAnimSite* SoHAnimSite328 = new SoHAnimSite();
SoHAnimSite328->X3DNode::setName(QString("r_calcaneus_posterior_pt"));
SoHAnimSite328->setDEF(QString("Joe_r_calcaneus_posterior_pt"));
SoHAnimSite328->setTranslation(new float[]{-0.115,0.04,-0.055});
SoShape* SoShape329 = new SoShape();
SoShape329->setUSE(QString("sitebox"));
SoHAnimSite328->addChild(*SoShape329);

SoHAnimSegment311->addChild(*SoHAnimSite328);

SoHAnimJoint310->addChildren(*SoHAnimSegment311);

SoHAnimJoint* SoHAnimJoint330 = new SoHAnimJoint();
SoHAnimJoint330->X3DNode::setName(QString("r_tarsometatarsal_2"));
SoHAnimJoint330->setDEF(QString("Joe_r_tarsometatarsal_2"));
SoHAnimJoint330->setCenter(new float[]{-0.1,0.015,-0.01});
SoHAnimJoint330->setSkinCoordIndex(new int32_t[]{374,375,376}, 3);
SoHAnimJoint330->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment331 = new SoHAnimSegment();
SoHAnimSegment331->X3DNode::setName(QString("r_metatarsal_2"));
SoHAnimSegment331->setDEF(QString("Joe_r_metatarsal_2"));
SoTransform* SoTransform332 = new SoTransform();
SoTransform332->setTranslation(new float[]{-0.1,0.015,-0.01});
SoShape* SoShape333 = new SoShape();
SoShape333->setUSE(QString("jointbox"));
SoTransform332->addChild(*SoShape333);

SoHAnimSegment331->addChild(*SoTransform332);

SoShape* SoShape334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance335 = new SoVRMLAppearance();
SoVRMLAppearance335->setUSE(QString("SegmentLine"));
SoShape334->addChild(*SoVRMLAppearance335);

SoIndexedLineSet* SoIndexedLineSet336 = new SoIndexedLineSet();
SoIndexedLineSet336->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate337 = new SoCoordinate();
SoCoordinate337->setPoint(new float[]{-0.1,0.015,-0.01,-0.1,0.02,0.07}, 6);
SoIndexedLineSet336->setCoord(*SoCoordinate337);

SoShape334->setGeometry(*SoIndexedLineSet336);

SoHAnimSegment331->addChild(*SoShape334);

SoTransform* SoTransform338 = new SoTransform();
SoTransform338->setTranslation(new float[]{-0.1375,0.006,-0.03});
SoShape* SoShape339 = new SoShape();
SoShape339->setUSE(QString("skinsphere"));
SoTransform338->addChild(*SoShape339);

SoHAnimSegment331->addChild(*SoTransform338);

SoTransform* SoTransform340 = new SoTransform();
SoTransform340->setTranslation(new float[]{-0.095,0.006,-0.03});
SoShape* SoShape341 = new SoShape();
SoShape341->setUSE(QString("skinsphere"));
SoTransform340->addChild(*SoShape341);

SoHAnimSegment331->addChild(*SoTransform340);

SoTransform* SoTransform342 = new SoTransform();
SoTransform342->setTranslation(new float[]{-0.095,0.006,-0.03});
SoShape* SoShape343 = new SoShape();
SoShape343->setUSE(QString("skinsphere"));
SoTransform342->addChild(*SoShape343);

SoHAnimSegment331->addChild(*SoTransform342);

SoHAnimJoint330->addChildren(*SoHAnimSegment331);

SoHAnimJoint* SoHAnimJoint344 = new SoHAnimJoint();
SoHAnimJoint344->X3DNode::setName(QString("r_metatarsophalangeal_2"));
SoHAnimJoint344->setDEF(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimJoint344->setCenter(new float[]{-0.115,0.037,0.09});
SoHAnimJoint344->setSkinCoordIndex(new int32_t[]{377,378,379,380}, 4);
SoHAnimJoint344->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment345 = new SoHAnimSegment();
SoHAnimSegment345->X3DNode::setName(QString("r_tarsal_proximal_phalanx_2"));
SoHAnimSegment345->setDEF(QString("Joe_r_tarsal_proximal_phalanx_2"));
SoTransform* SoTransform346 = new SoTransform();
SoTransform346->setTranslation(new float[]{-0.1,0.02,0.07});
SoShape* SoShape347 = new SoShape();
SoShape347->setUSE(QString("jointbox"));
SoTransform346->addChild(*SoShape347);

SoHAnimSegment345->addChild(*SoTransform346);

SoShape* SoShape348 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance349 = new SoVRMLAppearance();
SoVRMLAppearance349->setUSE(QString("SegmentLine"));
SoShape348->addChild(*SoVRMLAppearance349);

SoIndexedLineSet* SoIndexedLineSet350 = new SoIndexedLineSet();
SoIndexedLineSet350->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate351 = new SoCoordinate();
SoCoordinate351->setPoint(new float[]{-0.1,0.02,0.07,-0.1,0.01,0.14}, 6);
SoIndexedLineSet350->setCoord(*SoCoordinate351);

SoShape348->setGeometry(*SoIndexedLineSet350);

SoHAnimSegment345->addChild(*SoShape348);

SoTransform* SoTransform352 = new SoTransform();
SoTransform352->setTranslation(new float[]{-0.115,0.06,0.1});
SoShape* SoShape353 = new SoShape();
SoShape353->setUSE(QString("skinsphere"));
SoTransform352->addChild(*SoShape353);

SoHAnimSegment345->addChild(*SoTransform352);

SoTransform* SoTransform354 = new SoTransform();
SoTransform354->setTranslation(new float[]{-0.115,0.0,0.07});
SoShape* SoShape355 = new SoShape();
SoShape355->setUSE(QString("skinsphere"));
SoTransform354->addChild(*SoShape355);

SoHAnimSegment345->addChild(*SoTransform354);

SoTransform* SoTransform356 = new SoTransform();
SoTransform356->setTranslation(new float[]{-0.165,0.0,0.07});
SoShape* SoShape357 = new SoShape();
SoShape357->setUSE(QString("skinsphere"));
SoTransform356->addChild(*SoShape357);

SoHAnimSegment345->addChild(*SoTransform356);

SoTransform* SoTransform358 = new SoTransform();
SoTransform358->setTranslation(new float[]{-0.165,0.0,0.07});
SoShape* SoShape359 = new SoShape();
SoShape359->setUSE(QString("skinsphere"));
SoTransform358->addChild(*SoShape359);

SoHAnimSegment345->addChild(*SoTransform358);

SoHAnimSite* SoHAnimSite360 = new SoHAnimSite();
SoHAnimSite360->X3DNode::setName(QString("r_metatarsal_phalanx_1_pt"));
SoHAnimSite360->setDEF(QString("Joe_r_metatarsal_phalanx_1_pt"));
SoHAnimSite360->setTranslation(new float[]{-0.115,0.02,0.122});
SoShape* SoShape361 = new SoShape();
SoShape361->setUSE(QString("sitebox"));
SoHAnimSite360->addChild(*SoShape361);

SoHAnimSegment345->addChild(*SoHAnimSite360);

SoHAnimJoint344->addChildren(*SoHAnimSegment345);

SoHAnimJoint* SoHAnimJoint362 = new SoHAnimJoint();
SoHAnimJoint362->X3DNode::setName(QString("r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint362->setDEF(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimJoint362->setCenter(new float[]{-0.1,0.01,0.14});
SoHAnimJoint362->setSkinCoordIndex(new int32_t[]{381,382,383,384,385,386,387,388,389}, 9);
SoHAnimJoint362->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment363 = new SoHAnimSegment();
SoHAnimSegment363->X3DNode::setName(QString("r_tarsal_distal_phalanx_2"));
SoHAnimSegment363->setDEF(QString("Joe_r_tarsal_distal_phalanx_2"));
SoTransform* SoTransform364 = new SoTransform();
SoTransform364->setTranslation(new float[]{-0.1086,0.01,0.14});
SoShape* SoShape365 = new SoShape();
SoShape365->setUSE(QString("jointbox"));
SoTransform364->addChild(*SoShape365);

SoHAnimSegment363->addChild(*SoTransform364);

SoShape* SoShape366 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance367 = new SoVRMLAppearance();
SoVRMLAppearance367->setUSE(QString("SegmentLine"));
SoShape366->addChild(*SoVRMLAppearance367);

SoIndexedLineSet* SoIndexedLineSet368 = new SoIndexedLineSet();
SoIndexedLineSet368->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate369 = new SoCoordinate();
SoCoordinate369->setPoint(new float[]{-0.1,0.01,0.14,-0.1043,0.0016,0.2}, 6);
SoIndexedLineSet368->setCoord(*SoCoordinate369);

SoShape366->setGeometry(*SoIndexedLineSet368);

SoHAnimSegment363->addChild(*SoShape366);

SoTransform* SoTransform370 = new SoTransform();
SoTransform370->setTranslation(new float[]{-0.115,0.04,0.13});
SoShape* SoShape371 = new SoShape();
SoShape371->setUSE(QString("skinsphere"));
SoTransform370->addChild(*SoShape371);

SoHAnimSegment363->addChild(*SoTransform370);

SoTransform* SoTransform372 = new SoTransform();
SoTransform372->setTranslation(new float[]{-0.125,0.0,0.12});
SoShape* SoShape373 = new SoShape();
SoShape373->setUSE(QString("skinsphere"));
SoTransform372->addChild(*SoShape373);

SoHAnimSegment363->addChild(*SoTransform372);

SoTransform* SoTransform374 = new SoTransform();
SoTransform374->setTranslation(new float[]{-0.165,0.0,0.12});
SoShape* SoShape375 = new SoShape();
SoShape375->setUSE(QString("skinsphere"));
SoTransform374->addChild(*SoShape375);

SoHAnimSegment363->addChild(*SoTransform374);

SoTransform* SoTransform376 = new SoTransform();
SoTransform376->setTranslation(new float[]{-0.087,0.0,0.122});
SoShape* SoShape377 = new SoShape();
SoShape377->setUSE(QString("skinsphere"));
SoTransform376->addChild(*SoShape377);

SoHAnimSegment363->addChild(*SoTransform376);

SoTransform* SoTransform378 = new SoTransform();
SoTransform378->setTranslation(new float[]{-0.09,0.012,0.188});
SoShape* SoShape379 = new SoShape();
SoShape379->setUSE(QString("skinsphere"));
SoTransform378->addChild(*SoShape379);

SoHAnimSegment363->addChild(*SoTransform378);

SoTransform* SoTransform380 = new SoTransform();
SoTransform380->setTranslation(new float[]{-0.11,0.011,0.19});
SoShape* SoShape381 = new SoShape();
SoShape381->setUSE(QString("skinsphere"));
SoTransform380->addChild(*SoShape381);

SoHAnimSegment363->addChild(*SoTransform380);

SoTransform* SoTransform382 = new SoTransform();
SoTransform382->setTranslation(new float[]{-0.128,0.011,0.185});
SoShape* SoShape383 = new SoShape();
SoShape383->setUSE(QString("skinsphere"));
SoTransform382->addChild(*SoShape383);

SoHAnimSegment363->addChild(*SoTransform382);

SoTransform* SoTransform384 = new SoTransform();
SoTransform384->setTranslation(new float[]{-0.142,0.011,0.178});
SoShape* SoShape385 = new SoShape();
SoShape385->setUSE(QString("skinsphere"));
SoTransform384->addChild(*SoShape385);

SoHAnimSegment363->addChild(*SoTransform384);

SoTransform* SoTransform386 = new SoTransform();
SoTransform386->setTranslation(new float[]{-0.154,0.01,0.168});
SoShape* SoShape387 = new SoShape();
SoShape387->setUSE(QString("skinsphere"));
SoTransform386->addChild(*SoShape387);

SoHAnimSegment363->addChild(*SoTransform386);

SoHAnimSite* SoHAnimSite388 = new SoHAnimSite();
SoHAnimSite388->X3DNode::setName(QString("r_metatarsal_phalanx_5_pt"));
SoHAnimSite388->setDEF(QString("Joe_r_metatarsal_phalanx_5_pt"));
SoHAnimSite388->setTranslation(new float[]{-0.165,0.01,0.12});
SoShape* SoShape389 = new SoShape();
SoShape389->setUSE(QString("sitebox"));
SoHAnimSite388->addChild(*SoShape389);

SoHAnimSegment363->addChild(*SoHAnimSite388);

SoHAnimSite* SoHAnimSite390 = new SoHAnimSite();
SoHAnimSite390->X3DNode::setName(QString("r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite390->setDEF(QString("Joe_r_tarsal_distal_phalanx_2_pt"));
SoHAnimSite390->setTranslation(new float[]{-0.11,0.011,0.19});
SoShape* SoShape391 = new SoShape();
SoShape391->setUSE(QString("sitebox"));
SoHAnimSite390->addChild(*SoShape391);

SoHAnimSegment363->addChild(*SoHAnimSite390);

SoHAnimJoint362->addChildren(*SoHAnimSegment363);

SoHAnimJoint344->addChildren(*SoHAnimJoint362);

SoHAnimJoint330->addChildren(*SoHAnimJoint344);

SoHAnimJoint310->addChildren(*SoHAnimJoint330);

SoHAnimJoint282->addChildren(*SoHAnimJoint310);

SoHAnimJoint256->addChildren(*SoHAnimJoint282);

SoHAnimJoint90->addChildren(*SoHAnimJoint256);

SoHAnimJoint78->addChildren(*SoHAnimJoint90);

SoHAnimJoint* SoHAnimJoint392 = new SoHAnimJoint();
SoHAnimJoint392->X3DNode::setName(QString("vl5"));
SoHAnimJoint392->setDEF(QString("Joe_vl5"));
SoHAnimJoint392->setCenter(new float[]{0.0,1.045,-0.095});
SoHAnimJoint392->setSkinCoordIndex(new int32_t[]{28,76}, 2);
SoHAnimJoint392->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment393 = new SoHAnimSegment();
SoHAnimSegment393->X3DNode::setName(QString("toPelvis"));
SoHAnimSegment393->setDEF(QString("Joe_toPelvis"));
SoShape* SoShape394 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance395 = new SoVRMLAppearance();
SoVRMLAppearance395->setUSE(QString("SegmentLine"));
SoShape394->addChild(*SoVRMLAppearance395);

SoIndexedLineSet* SoIndexedLineSet396 = new SoIndexedLineSet();
SoIndexedLineSet396->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate397 = new SoCoordinate();
SoCoordinate397->setPoint(new float[]{0.0,1.045,-0.095,0.0,0.9149,0.0016}, 6);
SoIndexedLineSet396->setCoord(*SoCoordinate397);

SoShape394->setGeometry(*SoIndexedLineSet396);

SoHAnimSegment393->addChild(*SoShape394);

SoHAnimJoint392->addChildren(*SoHAnimSegment393);

SoHAnimSegment* SoHAnimSegment398 = new SoHAnimSegment();
SoHAnimSegment398->X3DNode::setName(QString("l5"));
SoHAnimSegment398->setDEF(QString("Joe_l5"));
SoShape* SoShape399 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance400 = new SoVRMLAppearance();
SoVRMLAppearance400->setUSE(QString("SegmentLine"));
SoShape399->addChild(*SoVRMLAppearance400);

SoIndexedLineSet* SoIndexedLineSet401 = new SoIndexedLineSet();
SoIndexedLineSet401->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate402 = new SoCoordinate();
SoCoordinate402->setPoint(new float[]{0.0,1.045,-0.095,0.0,1.068,-0.085}, 6);
SoIndexedLineSet401->setCoord(*SoCoordinate402);

SoShape399->setGeometry(*SoIndexedLineSet401);

SoHAnimSegment398->addChild(*SoShape399);

SoHAnimSite* SoHAnimSite403 = new SoHAnimSite();
SoHAnimSite403->X3DNode::setName(QString("waist_preferred_posterior_pt"));
SoHAnimSite403->setDEF(QString("Joe_waist_preferred_posterior_pt"));
SoHAnimSite403->setTranslation(new float[]{0.0,1.0915,-0.1091});
SoShape* SoShape404 = new SoShape();
SoShape404->setUSE(QString("sitebox"));
SoHAnimSite403->addChild(*SoShape404);

SoHAnimSegment398->addChild(*SoHAnimSite403);

SoHAnimSite* SoHAnimSite405 = new SoHAnimSite();
SoHAnimSite405->X3DNode::setName(QString("navel_pt"));
SoHAnimSite405->setDEF(QString("Joe_navel_pt"));
SoHAnimSite405->setTranslation(new float[]{0.0,1.0723,0.09});
SoShape* SoShape406 = new SoShape();
SoShape406->setUSE(QString("sitebox"));
SoHAnimSite405->addChild(*SoShape406);

SoHAnimSegment398->addChild(*SoHAnimSite405);

SoHAnimJoint392->addChildren(*SoHAnimSegment398);

SoHAnimJoint* SoHAnimJoint407 = new SoHAnimJoint();
SoHAnimJoint407->X3DNode::setName(QString("vl4"));
SoHAnimJoint407->setDEF(QString("Joe_vl4"));
SoHAnimJoint407->setCenter(new float[]{0.0,1.068,-0.085});
SoHAnimSegment* SoHAnimSegment408 = new SoHAnimSegment();
SoHAnimSegment408->X3DNode::setName(QString("l4"));
SoHAnimSegment408->setDEF(QString("Joe_l4"));
SoShape* SoShape409 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance410 = new SoVRMLAppearance();
SoVRMLAppearance410->setUSE(QString("SegmentLine"));
SoShape409->addChild(*SoVRMLAppearance410);

SoIndexedLineSet* SoIndexedLineSet411 = new SoIndexedLineSet();
SoIndexedLineSet411->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate412 = new SoCoordinate();
SoCoordinate412->setPoint(new float[]{0.0,1.068,-0.085,0.0,1.092,-0.0725}, 6);
SoIndexedLineSet411->setCoord(*SoCoordinate412);

SoShape409->setGeometry(*SoIndexedLineSet411);

SoHAnimSegment408->addChild(*SoShape409);

SoTransform* SoTransform413 = new SoTransform();
SoTransform413->setTranslation(new float[]{0.0,1.068,-0.085});
SoShape* SoShape414 = new SoShape();
SoShape414->setUSE(QString("jointbox"));
SoTransform413->addChild(*SoShape414);

SoHAnimSegment408->addChild(*SoTransform413);

SoHAnimJoint407->addChildren(*SoHAnimSegment408);

SoHAnimJoint* SoHAnimJoint415 = new SoHAnimJoint();
SoHAnimJoint415->X3DNode::setName(QString("vl3"));
SoHAnimJoint415->setDEF(QString("Joe_vl3"));
SoHAnimJoint415->setCenter(new float[]{0.0,1.092,-0.0725});
SoHAnimSegment* SoHAnimSegment416 = new SoHAnimSegment();
SoHAnimSegment416->X3DNode::setName(QString("l3"));
SoHAnimSegment416->setDEF(QString("Joe_l3"));
SoShape* SoShape417 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance418 = new SoVRMLAppearance();
SoVRMLAppearance418->setUSE(QString("SegmentLine"));
SoShape417->addChild(*SoVRMLAppearance418);

SoIndexedLineSet* SoIndexedLineSet419 = new SoIndexedLineSet();
SoIndexedLineSet419->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate420 = new SoCoordinate();
SoCoordinate420->setPoint(new float[]{0.0,1.092,-0.0725,0.0,1.12,-0.065}, 6);
SoIndexedLineSet419->setCoord(*SoCoordinate420);

SoShape417->setGeometry(*SoIndexedLineSet419);

SoHAnimSegment416->addChild(*SoShape417);

SoTransform* SoTransform421 = new SoTransform();
SoTransform421->setTranslation(new float[]{0.0,1.092,-0.0725});
SoShape* SoShape422 = new SoShape();
SoShape422->setUSE(QString("jointbox"));
SoTransform421->addChild(*SoShape422);

SoHAnimSegment416->addChild(*SoTransform421);

SoHAnimJoint415->addChildren(*SoHAnimSegment416);

SoHAnimJoint* SoHAnimJoint423 = new SoHAnimJoint();
SoHAnimJoint423->X3DNode::setName(QString("vl2"));
SoHAnimJoint423->setDEF(QString("Joe_vl2"));
SoHAnimJoint423->setCenter(new float[]{0.0,1.12,-0.065});
SoHAnimJoint423->setSkinCoordIndex(new int32_t[]{16,18,25,83,84,85,86,87,88}, 9);
SoHAnimJoint423->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,0.7,1.0,0.8}, 9);
SoHAnimSegment* SoHAnimSegment424 = new SoHAnimSegment();
SoHAnimSegment424->X3DNode::setName(QString("l2"));
SoHAnimSegment424->setDEF(QString("Joe_l2"));
SoShape* SoShape425 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance426 = new SoVRMLAppearance();
SoVRMLAppearance426->setUSE(QString("SegmentLine"));
SoShape425->addChild(*SoVRMLAppearance426);

SoIndexedLineSet* SoIndexedLineSet427 = new SoIndexedLineSet();
SoIndexedLineSet427->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate428 = new SoCoordinate();
SoCoordinate428->setPoint(new float[]{0.0,1.12,-0.065,0.0,1.1459,-0.0625}, 6);
SoIndexedLineSet427->setCoord(*SoCoordinate428);

SoShape425->setGeometry(*SoIndexedLineSet427);

SoHAnimSegment424->addChild(*SoShape425);

SoTransform* SoTransform429 = new SoTransform();
SoTransform429->setTranslation(new float[]{0.0,1.12,-0.065});
SoShape* SoShape430 = new SoShape();
SoShape430->setUSE(QString("jointbox"));
SoTransform429->addChild(*SoShape430);

SoHAnimSegment424->addChild(*SoTransform429);

SoTransform* SoTransform431 = new SoTransform();
SoTransform431->setTranslation(new float[]{-0.087,1.19,-0.09});
SoShape* SoShape432 = new SoShape();
SoShape432->setUSE(QString("skinsphere"));
SoTransform431->addChild(*SoShape432);

SoHAnimSegment424->addChild(*SoTransform431);

SoTransform* SoTransform433 = new SoTransform();
SoTransform433->setTranslation(new float[]{0.087,1.19,-0.09});
SoShape* SoShape434 = new SoShape();
SoShape434->setUSE(QString("skinsphere"));
SoTransform433->addChild(*SoShape434);

SoHAnimSegment424->addChild(*SoTransform433);

SoTransform* SoTransform435 = new SoTransform();
SoTransform435->setTranslation(new float[]{0.172,1.32,-0.03});
SoShape* SoShape436 = new SoShape();
SoShape436->setUSE(QString("skinsphere"));
SoTransform435->addChild(*SoShape436);

SoHAnimSegment424->addChild(*SoTransform435);

SoTransform* SoTransform437 = new SoTransform();
SoTransform437->setTranslation(new float[]{-0.172,1.32,-0.03});
SoShape* SoShape438 = new SoShape();
SoShape438->setUSE(QString("skinsphere"));
SoTransform437->addChild(*SoShape438);

SoHAnimSegment424->addChild(*SoTransform437);

SoTransform* SoTransform439 = new SoTransform();
SoTransform439->setTranslation(new float[]{0.15,1.23,-0.015});
SoShape* SoShape440 = new SoShape();
SoShape440->setUSE(QString("skinsphere"));
SoTransform439->addChild(*SoShape440);

SoHAnimSegment424->addChild(*SoTransform439);

SoTransform* SoTransform441 = new SoTransform();
SoTransform441->setTranslation(new float[]{-0.15,1.23,-0.015});
SoShape* SoShape442 = new SoShape();
SoShape442->setUSE(QString("skinsphere"));
SoTransform441->addChild(*SoShape442);

SoHAnimSegment424->addChild(*SoTransform441);

SoHAnimSite* SoHAnimSite443 = new SoHAnimSite();
SoHAnimSite443->X3DNode::setName(QString("r_rib10_pt"));
SoHAnimSite443->setDEF(QString("Joe_r_rib10_pt"));
SoHAnimSite443->setTranslation(new float[]{-0.087,1.19,0.09});
SoShape* SoShape444 = new SoShape();
SoShape444->setUSE(QString("sitebox"));
SoHAnimSite443->addChild(*SoShape444);

SoHAnimSegment424->addChild(*SoHAnimSite443);

SoHAnimSite* SoHAnimSite445 = new SoHAnimSite();
SoHAnimSite445->X3DNode::setName(QString("l_rib10_pt"));
SoHAnimSite445->setDEF(QString("Joe_l_rib10_pt"));
SoHAnimSite445->setTranslation(new float[]{0.087,1.19,0.09});
SoShape* SoShape446 = new SoShape();
SoShape446->setUSE(QString("sitebox"));
SoHAnimSite445->addChild(*SoShape446);

SoHAnimSegment424->addChild(*SoHAnimSite445);

SoHAnimSite* SoHAnimSite447 = new SoHAnimSite();
SoHAnimSite447->X3DNode::setName(QString("rib10_midspine_pt"));
SoHAnimSite447->setDEF(QString("Joe_rib10_midspine_pt"));
SoHAnimSite447->setTranslation(new float[]{0.0,1.1908,-0.1113});
SoShape* SoShape448 = new SoShape();
SoShape448->setUSE(QString("sitebox"));
SoHAnimSite447->addChild(*SoShape448);

SoHAnimSegment424->addChild(*SoHAnimSite447);

SoHAnimJoint423->addChildren(*SoHAnimSegment424);

SoHAnimJoint* SoHAnimJoint449 = new SoHAnimJoint();
SoHAnimJoint449->X3DNode::setName(QString("vl1"));
SoHAnimJoint449->setDEF(QString("Joe_vl1"));
SoHAnimJoint449->setCenter(new float[]{0.0,1.1459,-0.0625});
SoHAnimSegment* SoHAnimSegment450 = new SoHAnimSegment();
SoHAnimSegment450->X3DNode::setName(QString("l1"));
SoHAnimSegment450->setDEF(QString("Joe_l1"));
SoShape* SoShape451 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance452 = new SoVRMLAppearance();
SoVRMLAppearance452->setUSE(QString("SegmentLine"));
SoShape451->addChild(*SoVRMLAppearance452);

SoIndexedLineSet* SoIndexedLineSet453 = new SoIndexedLineSet();
SoIndexedLineSet453->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate454 = new SoCoordinate();
SoCoordinate454->setPoint(new float[]{0.0,1.1459,-0.0625,0.0,1.179,-0.068}, 6);
SoIndexedLineSet453->setCoord(*SoCoordinate454);

SoShape451->setGeometry(*SoIndexedLineSet453);

SoHAnimSegment450->addChild(*SoShape451);

SoTransform* SoTransform455 = new SoTransform();
SoTransform455->setTranslation(new float[]{0.0,1.1459,-0.0625});
SoShape* SoShape456 = new SoShape();
SoShape456->setUSE(QString("jointbox"));
SoTransform455->addChild(*SoShape456);

SoHAnimSegment450->addChild(*SoTransform455);

SoHAnimJoint449->addChildren(*SoHAnimSegment450);

SoHAnimJoint* SoHAnimJoint457 = new SoHAnimJoint();
SoHAnimJoint457->X3DNode::setName(QString("vt12"));
SoHAnimJoint457->setDEF(QString("Joe_vt12"));
SoHAnimJoint457->setCenter(new float[]{0.0,1.179,-0.068});
SoHAnimSegment* SoHAnimSegment458 = new SoHAnimSegment();
SoHAnimSegment458->X3DNode::setName(QString("t12"));
SoHAnimSegment458->setDEF(QString("Joe_t12"));
SoShape* SoShape459 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance460 = new SoVRMLAppearance();
SoVRMLAppearance460->setUSE(QString("SegmentLine"));
SoShape459->addChild(*SoVRMLAppearance460);

SoIndexedLineSet* SoIndexedLineSet461 = new SoIndexedLineSet();
SoIndexedLineSet461->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate462 = new SoCoordinate();
SoCoordinate462->setPoint(new float[]{0.0,1.179,-0.068,0.0,1.242,-0.09}, 6);
SoIndexedLineSet461->setCoord(*SoCoordinate462);

SoShape459->setGeometry(*SoIndexedLineSet461);

SoHAnimSegment458->addChild(*SoShape459);

SoTransform* SoTransform463 = new SoTransform();
SoTransform463->setTranslation(new float[]{0.0,1.179,-0.068});
SoShape* SoShape464 = new SoShape();
SoShape464->setUSE(QString("jointbox"));
SoTransform463->addChild(*SoShape464);

SoHAnimSegment458->addChild(*SoTransform463);

SoHAnimJoint457->addChildren(*SoHAnimSegment458);

SoHAnimJoint* SoHAnimJoint465 = new SoHAnimJoint();
SoHAnimJoint465->X3DNode::setName(QString("vt11"));
SoHAnimJoint465->setDEF(QString("Joe_vt11"));
SoHAnimJoint465->setCenter(new float[]{0.0,1.2679,-0.081});
SoHAnimSegment* SoHAnimSegment466 = new SoHAnimSegment();
SoHAnimSegment466->X3DNode::setName(QString("t11"));
SoHAnimSegment466->setDEF(QString("Joe_t11"));
SoShape* SoShape467 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance468 = new SoVRMLAppearance();
SoVRMLAppearance468->setUSE(QString("SegmentLine"));
SoShape467->addChild(*SoVRMLAppearance468);

SoIndexedLineSet* SoIndexedLineSet469 = new SoIndexedLineSet();
SoIndexedLineSet469->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate470 = new SoCoordinate();
SoCoordinate470->setPoint(new float[]{0.0,1.2145,-0.0755,0.0,1.242,-0.09}, 6);
SoIndexedLineSet469->setCoord(*SoCoordinate470);

SoShape467->setGeometry(*SoIndexedLineSet469);

SoHAnimSegment466->addChild(*SoShape467);

SoTransform* SoTransform471 = new SoTransform();
SoTransform471->setTranslation(new float[]{0.0,1.2145,-0.0755});
SoShape* SoShape472 = new SoShape();
SoShape472->setUSE(QString("jointbox"));
SoTransform471->addChild(*SoShape472);

SoHAnimSegment466->addChild(*SoTransform471);

SoHAnimJoint465->addChildren(*SoHAnimSegment466);

SoHAnimJoint* SoHAnimJoint473 = new SoHAnimJoint();
SoHAnimJoint473->X3DNode::setName(QString("vt10"));
SoHAnimJoint473->setDEF(QString("Joe_vt10"));
SoHAnimJoint473->setCenter(new float[]{0.0,1.242,-0.09});
SoHAnimJoint473->setSkinCoordIndex(new int32_t[]{15}, 1);
SoHAnimJoint473->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment474 = new SoHAnimSegment();
SoHAnimSegment474->X3DNode::setName(QString("t10"));
SoHAnimSegment474->setDEF(QString("Joe_t10"));
SoShape* SoShape475 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance476 = new SoVRMLAppearance();
SoVRMLAppearance476->setUSE(QString("SegmentLine"));
SoShape475->addChild(*SoVRMLAppearance476);

SoIndexedLineSet* SoIndexedLineSet477 = new SoIndexedLineSet();
SoIndexedLineSet477->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate478 = new SoCoordinate();
SoCoordinate478->setPoint(new float[]{0.0,1.242,-0.09,0.0,1.268,-0.1}, 6);
SoIndexedLineSet477->setCoord(*SoCoordinate478);

SoShape475->setGeometry(*SoIndexedLineSet477);

SoHAnimSegment474->addChild(*SoShape475);

SoTransform* SoTransform479 = new SoTransform();
SoTransform479->setTranslation(new float[]{0.0,1.242,-0.09});
SoShape* SoShape480 = new SoShape();
SoShape480->setUSE(QString("jointbox"));
SoTransform479->addChild(*SoShape480);

SoHAnimSegment474->addChild(*SoTransform479);

SoHAnimSite* SoHAnimSite481 = new SoHAnimSite();
SoHAnimSite481->X3DNode::setName(QString("substernale_pt"));
SoHAnimSite481->setDEF(QString("Joe_substernale_pt"));
SoHAnimSite481->setTranslation(new float[]{0.0,1.25,0.113});
SoShape* SoShape482 = new SoShape();
SoShape482->setUSE(QString("sitebox"));
SoHAnimSite481->addChild(*SoShape482);

SoHAnimSegment474->addChild(*SoHAnimSite481);

SoHAnimJoint473->addChildren(*SoHAnimSegment474);

SoHAnimJoint* SoHAnimJoint483 = new SoHAnimJoint();
SoHAnimJoint483->X3DNode::setName(QString("vt9"));
SoHAnimJoint483->setDEF(QString("Joe_vt9"));
SoHAnimJoint483->setCenter(new float[]{0.0,1.268,-0.1});
SoHAnimJoint483->setSkinCoordIndex(new int32_t[]{13,14}, 2);
SoHAnimJoint483->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment484 = new SoHAnimSegment();
SoHAnimSegment484->X3DNode::setName(QString("t9"));
SoHAnimSegment484->setDEF(QString("Joe_t9"));
SoShape* SoShape485 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance486 = new SoVRMLAppearance();
SoVRMLAppearance486->setUSE(QString("SegmentLine"));
SoShape485->addChild(*SoVRMLAppearance486);

SoIndexedLineSet* SoIndexedLineSet487 = new SoIndexedLineSet();
SoIndexedLineSet487->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate488 = new SoCoordinate();
SoCoordinate488->setPoint(new float[]{0.0,1.268,-0.1,0.0,1.294,-0.11}, 6);
SoIndexedLineSet487->setCoord(*SoCoordinate488);

SoShape485->setGeometry(*SoIndexedLineSet487);

SoHAnimSegment484->addChild(*SoShape485);

SoTransform* SoTransform489 = new SoTransform();
SoTransform489->setTranslation(new float[]{0.0,1.268,-0.1});
SoShape* SoShape490 = new SoShape();
SoShape490->setUSE(QString("jointbox"));
SoTransform489->addChild(*SoShape490);

SoHAnimSegment484->addChild(*SoTransform489);

SoHAnimSite* SoHAnimSite491 = new SoHAnimSite();
SoHAnimSite491->X3DNode::setName(QString("r_thelion_pt"));
SoHAnimSite491->setDEF(QString("Joe_r_thelion_pt"));
SoHAnimSite491->setTranslation(new float[]{-0.1135,1.318,0.095});
SoShape* SoShape492 = new SoShape();
SoShape492->setUSE(QString("sitebox"));
SoHAnimSite491->addChild(*SoShape492);

SoHAnimSegment484->addChild(*SoHAnimSite491);

SoHAnimSite* SoHAnimSite493 = new SoHAnimSite();
SoHAnimSite493->X3DNode::setName(QString("l_thelion_pt"));
SoHAnimSite493->setDEF(QString("Joe_l_thelion_pt"));
SoHAnimSite493->setTranslation(new float[]{0.1135,1.318,0.095});
SoShape* SoShape494 = new SoShape();
SoShape494->setUSE(QString("sitebox"));
SoHAnimSite493->addChild(*SoShape494);

SoHAnimSegment484->addChild(*SoHAnimSite493);

SoHAnimJoint483->addChildren(*SoHAnimSegment484);

SoHAnimJoint* SoHAnimJoint495 = new SoHAnimJoint();
SoHAnimJoint495->X3DNode::setName(QString("vt8"));
SoHAnimJoint495->setDEF(QString("Joe_vt8"));
SoHAnimJoint495->setCenter(new float[]{0.0,1.294,-0.11});
SoHAnimSegment* SoHAnimSegment496 = new SoHAnimSegment();
SoHAnimSegment496->X3DNode::setName(QString("t8"));
SoHAnimSegment496->setDEF(QString("Joe_t8"));
SoShape* SoShape497 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance498 = new SoVRMLAppearance();
SoVRMLAppearance498->setUSE(QString("SegmentLine"));
SoShape497->addChild(*SoVRMLAppearance498);

SoIndexedLineSet* SoIndexedLineSet499 = new SoIndexedLineSet();
SoIndexedLineSet499->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate500 = new SoCoordinate();
SoCoordinate500->setPoint(new float[]{0.0,1.294,-0.11,0.0,1.352,-0.12}, 6);
SoIndexedLineSet499->setCoord(*SoCoordinate500);

SoShape497->setGeometry(*SoIndexedLineSet499);

SoHAnimSegment496->addChild(*SoShape497);

SoTransform* SoTransform501 = new SoTransform();
SoTransform501->setTranslation(new float[]{0.0,1.294,-0.11});
SoShape* SoShape502 = new SoShape();
SoShape502->setUSE(QString("jointbox"));
SoTransform501->addChild(*SoShape502);

SoHAnimSegment496->addChild(*SoTransform501);

SoHAnimJoint495->addChildren(*SoHAnimSegment496);

SoHAnimJoint* SoHAnimJoint503 = new SoHAnimJoint();
SoHAnimJoint503->X3DNode::setName(QString("vt7"));
SoHAnimJoint503->setDEF(QString("Joe_vt7"));
SoHAnimJoint503->setCenter(new float[]{0.0,1.323,-0.1155});
SoHAnimSegment* SoHAnimSegment504 = new SoHAnimSegment();
SoHAnimSegment504->X3DNode::setName(QString("t7"));
SoHAnimSegment504->setDEF(QString("Joe_t7"));
SoShape* SoShape505 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance506 = new SoVRMLAppearance();
SoVRMLAppearance506->setUSE(QString("SegmentLine"));
SoShape505->addChild(*SoVRMLAppearance506);

SoIndexedLineSet* SoIndexedLineSet507 = new SoIndexedLineSet();
SoIndexedLineSet507->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate508 = new SoCoordinate();
SoCoordinate508->setPoint(new float[]{0.0,1.352,-0.12,0.0,1.381,-0.1235}, 6);
SoIndexedLineSet507->setCoord(*SoCoordinate508);

SoShape505->setGeometry(*SoIndexedLineSet507);

SoHAnimSegment504->addChild(*SoShape505);

SoTransform* SoTransform509 = new SoTransform();
SoTransform509->setTranslation(new float[]{0.0,1.323,-0.1155});
SoShape* SoShape510 = new SoShape();
SoShape510->setUSE(QString("jointbox"));
SoTransform509->addChild(*SoShape510);

SoHAnimSegment504->addChild(*SoTransform509);

SoHAnimJoint503->addChildren(*SoHAnimSegment504);

SoHAnimJoint* SoHAnimJoint511 = new SoHAnimJoint();
SoHAnimJoint511->X3DNode::setName(QString("vt6"));
SoHAnimJoint511->setDEF(QString("Joe_vt6"));
SoHAnimJoint511->setCenter(new float[]{0.0,1.352,-0.12});
SoHAnimSegment* SoHAnimSegment512 = new SoHAnimSegment();
SoHAnimSegment512->X3DNode::setName(QString("t6"));
SoHAnimSegment512->setDEF(QString("Joe_t6"));
SoShape* SoShape513 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance514 = new SoVRMLAppearance();
SoVRMLAppearance514->setUSE(QString("SegmentLine"));
SoShape513->addChild(*SoVRMLAppearance514);

SoIndexedLineSet* SoIndexedLineSet515 = new SoIndexedLineSet();
SoIndexedLineSet515->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate516 = new SoCoordinate();
SoCoordinate516->setPoint(new float[]{0.0,1.381,-0.1235,0.0,1.41,-0.1235}, 6);
SoIndexedLineSet515->setCoord(*SoCoordinate516);

SoShape513->setGeometry(*SoIndexedLineSet515);

SoHAnimSegment512->addChild(*SoShape513);

SoTransform* SoTransform517 = new SoTransform();
SoTransform517->setTranslation(new float[]{0.0,1.352,-0.12});
SoShape* SoShape518 = new SoShape();
SoShape518->setUSE(QString("jointbox"));
SoTransform517->addChild(*SoShape518);

SoHAnimSegment512->addChild(*SoTransform517);

SoHAnimJoint511->addChildren(*SoHAnimSegment512);

SoHAnimJoint* SoHAnimJoint519 = new SoHAnimJoint();
SoHAnimJoint519->X3DNode::setName(QString("vt5"));
SoHAnimJoint519->setDEF(QString("Joe_vt5"));
SoHAnimJoint519->setCenter(new float[]{0.0,1.381,-0.1235});
SoHAnimSegment* SoHAnimSegment520 = new SoHAnimSegment();
SoHAnimSegment520->X3DNode::setName(QString("t5"));
SoHAnimSegment520->setDEF(QString("Joe_t5"));
SoShape* SoShape521 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance522 = new SoVRMLAppearance();
SoVRMLAppearance522->setUSE(QString("SegmentLine"));
SoShape521->addChild(*SoVRMLAppearance522);

SoIndexedLineSet* SoIndexedLineSet523 = new SoIndexedLineSet();
SoIndexedLineSet523->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate524 = new SoCoordinate();
SoCoordinate524->setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
SoIndexedLineSet523->setCoord(*SoCoordinate524);

SoShape521->setGeometry(*SoIndexedLineSet523);

SoHAnimSegment520->addChild(*SoShape521);

SoTransform* SoTransform525 = new SoTransform();
SoTransform525->setTranslation(new float[]{0.0,1.381,-0.1235});
SoShape* SoShape526 = new SoShape();
SoShape526->setUSE(QString("jointbox"));
SoTransform525->addChild(*SoShape526);

SoHAnimSegment520->addChild(*SoTransform525);

SoHAnimJoint519->addChildren(*SoHAnimSegment520);

SoHAnimJoint* SoHAnimJoint527 = new SoHAnimJoint();
SoHAnimJoint527->X3DNode::setName(QString("vt4"));
SoHAnimJoint527->setDEF(QString("Joe_vt4"));
SoHAnimJoint527->setCenter(new float[]{0.0,1.41,-0.1235});
SoHAnimJoint527->setSkinCoordIndex(new int32_t[]{81}, 1);
SoHAnimJoint527->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment528 = new SoHAnimSegment();
SoHAnimSegment528->X3DNode::setName(QString("t4"));
SoHAnimSegment528->setDEF(QString("Joe_t4"));
SoShape* SoShape529 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance530 = new SoVRMLAppearance();
SoVRMLAppearance530->setUSE(QString("SegmentLine"));
SoShape529->addChild(*SoVRMLAppearance530);

SoIndexedLineSet* SoIndexedLineSet531 = new SoIndexedLineSet();
SoIndexedLineSet531->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate532 = new SoCoordinate();
SoCoordinate532->setPoint(new float[]{0.0,1.41,-0.1235,0.0,1.438,-0.12}, 6);
SoIndexedLineSet531->setCoord(*SoCoordinate532);

SoShape529->setGeometry(*SoIndexedLineSet531);

SoHAnimSegment528->addChild(*SoShape529);

SoTransform* SoTransform533 = new SoTransform();
SoTransform533->setTranslation(new float[]{0.0,1.41,-0.1235});
SoShape* SoShape534 = new SoShape();
SoShape534->setUSE(QString("jointbox"));
SoTransform533->addChild(*SoShape534);

SoHAnimSegment528->addChild(*SoTransform533);

SoTransform* SoTransform535 = new SoTransform();
SoTransform535->setTranslation(new float[]{0.0,1.41,-0.145});
SoShape* SoShape536 = new SoShape();
SoShape536->setUSE(QString("skinsphere"));
SoTransform535->addChild(*SoShape536);

SoHAnimSegment528->addChild(*SoTransform535);

SoHAnimJoint527->addChildren(*SoHAnimSegment528);

SoHAnimJoint* SoHAnimJoint537 = new SoHAnimJoint();
SoHAnimJoint537->X3DNode::setName(QString("vt3"));
SoHAnimJoint537->setDEF(QString("Joe_vt3"));
SoHAnimJoint537->setCenter(new float[]{0.0,1.438,-0.12});
SoHAnimSegment* SoHAnimSegment538 = new SoHAnimSegment();
SoHAnimSegment538->X3DNode::setName(QString("t3"));
SoHAnimSegment538->setDEF(QString("Joe_t3"));
SoShape* SoShape539 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance540 = new SoVRMLAppearance();
SoVRMLAppearance540->setUSE(QString("SegmentLine"));
SoShape539->addChild(*SoVRMLAppearance540);

SoIndexedLineSet* SoIndexedLineSet541 = new SoIndexedLineSet();
SoIndexedLineSet541->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate542 = new SoCoordinate();
SoCoordinate542->setPoint(new float[]{0.0,1.438,-0.12,0.0,1.468,-0.105}, 6);
SoIndexedLineSet541->setCoord(*SoCoordinate542);

SoShape539->setGeometry(*SoIndexedLineSet541);

SoHAnimSegment538->addChild(*SoShape539);

SoTransform* SoTransform543 = new SoTransform();
SoTransform543->setTranslation(new float[]{0.0,1.438,-0.12});
SoShape* SoShape544 = new SoShape();
SoShape544->setUSE(QString("jointbox"));
SoTransform543->addChild(*SoShape544);

SoHAnimSegment538->addChild(*SoTransform543);

SoHAnimJoint537->addChildren(*SoHAnimSegment538);

SoHAnimJoint* SoHAnimJoint545 = new SoHAnimJoint();
SoHAnimJoint545->X3DNode::setName(QString("vt2"));
SoHAnimJoint545->setDEF(QString("Joe_vt2"));
SoHAnimJoint545->setCenter(new float[]{0.0,1.468,-0.105});
SoHAnimSegment* SoHAnimSegment546 = new SoHAnimSegment();
SoHAnimSegment546->X3DNode::setName(QString("t2"));
SoHAnimSegment546->setDEF(QString("Joe_t2"));
SoShape* SoShape547 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance548 = new SoVRMLAppearance();
SoVRMLAppearance548->setUSE(QString("SegmentLine"));
SoShape547->addChild(*SoVRMLAppearance548);

SoIndexedLineSet* SoIndexedLineSet549 = new SoIndexedLineSet();
SoIndexedLineSet549->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate550 = new SoCoordinate();
SoCoordinate550->setPoint(new float[]{0.0,1.468,-0.105,0.0,1.497,-0.09}, 6);
SoIndexedLineSet549->setCoord(*SoCoordinate550);

SoShape547->setGeometry(*SoIndexedLineSet549);

SoHAnimSegment546->addChild(*SoShape547);

SoTransform* SoTransform551 = new SoTransform();
SoTransform551->setTranslation(new float[]{0.0,1.468,-0.105});
SoShape* SoShape552 = new SoShape();
SoShape552->setUSE(QString("jointbox"));
SoTransform551->addChild(*SoShape552);

SoHAnimSegment546->addChild(*SoTransform551);

SoHAnimJoint545->addChildren(*SoHAnimSegment546);

SoHAnimJoint* SoHAnimJoint553 = new SoHAnimJoint();
SoHAnimJoint553->X3DNode::setName(QString("vt1"));
SoHAnimJoint553->setDEF(QString("Joe_vt1"));
SoHAnimJoint553->setCenter(new float[]{0.0,1.497,-0.09});
SoHAnimJoint553->setSkinCoordIndex(new int32_t[]{11,24}, 2);
SoHAnimJoint553->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment554 = new SoHAnimSegment();
SoHAnimSegment554->X3DNode::setName(QString("t1"));
SoHAnimSegment554->setDEF(QString("Joe_t1"));
SoShape* SoShape555 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance556 = new SoVRMLAppearance();
SoVRMLAppearance556->setUSE(QString("SegmentLine"));
SoShape555->addChild(*SoVRMLAppearance556);

SoIndexedLineSet* SoIndexedLineSet557 = new SoIndexedLineSet();
SoIndexedLineSet557->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate558 = new SoCoordinate();
SoCoordinate558->setPoint(new float[]{0.0,1.497,-0.09,0.0,1.525,-0.072}, 6);
SoIndexedLineSet557->setCoord(*SoCoordinate558);

SoShape555->setGeometry(*SoIndexedLineSet557);

SoHAnimSegment554->addChild(*SoShape555);

SoTransform* SoTransform559 = new SoTransform();
SoTransform559->setTranslation(new float[]{0.0,1.497,-0.09});
SoShape* SoShape560 = new SoShape();
SoShape560->setUSE(QString("jointbox"));
SoTransform559->addChild(*SoShape560);

SoHAnimSegment554->addChild(*SoTransform559);

SoHAnimSite* SoHAnimSite561 = new SoHAnimSite();
SoHAnimSite561->X3DNode::setName(QString("suprasternale_pt"));
SoHAnimSite561->setDEF(QString("Joe_suprasternale_pt"));
SoHAnimSite561->setTranslation(new float[]{0.0,1.44,0.03});
SoShape* SoShape562 = new SoShape();
SoShape562->setUSE(QString("sitebox"));
SoHAnimSite561->addChild(*SoShape562);

SoHAnimSegment554->addChild(*SoHAnimSite561);

SoHAnimSite* SoHAnimSite563 = new SoHAnimSite();
SoHAnimSite563->X3DNode::setName(QString("cervicale_pt"));
SoHAnimSite563->setDEF(QString("Joe_cervicale_pt"));
SoHAnimSite563->setTranslation(new float[]{0.0,1.53,-0.084});
SoShape* SoShape564 = new SoShape();
SoShape564->setUSE(QString("sitebox"));
SoHAnimSite563->addChild(*SoShape564);

SoHAnimSegment554->addChild(*SoHAnimSite563);

SoHAnimJoint553->addChildren(*SoHAnimSegment554);

SoHAnimJoint* SoHAnimJoint565 = new SoHAnimJoint();
SoHAnimJoint565->X3DNode::setName(QString("vc7"));
SoHAnimJoint565->setDEF(QString("Joe_vc7"));
SoHAnimJoint565->setCenter(new float[]{0.0,1.525,-0.072});
SoHAnimJoint565->setSkinCoordIndex(new int32_t[]{74,75}, 2);
SoHAnimJoint565->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment566 = new SoHAnimSegment();
SoHAnimSegment566->X3DNode::setName(QString("c7"));
SoHAnimSegment566->setDEF(QString("Joe_c7"));
SoShape* SoShape567 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance568 = new SoVRMLAppearance();
SoVRMLAppearance568->setUSE(QString("SegmentLine"));
SoShape567->addChild(*SoVRMLAppearance568);

SoIndexedLineSet* SoIndexedLineSet569 = new SoIndexedLineSet();
SoIndexedLineSet569->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
SoCoordinate* SoCoordinate570 = new SoCoordinate();
SoCoordinate570->setPoint(new float[]{0.0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0.0,1.54,-0.05}, 12);
SoIndexedLineSet569->setCoord(*SoCoordinate570);

SoShape567->setGeometry(*SoIndexedLineSet569);

SoHAnimSegment566->addChild(*SoShape567);

SoTransform* SoTransform571 = new SoTransform();
SoTransform571->setTranslation(new float[]{0.0,1.525,-0.072});
SoShape* SoShape572 = new SoShape();
SoShape572->setUSE(QString("jointbox"));
SoTransform571->addChild(*SoShape572);

SoHAnimSegment566->addChild(*SoTransform571);

SoHAnimSite* SoHAnimSite573 = new SoHAnimSite();
SoHAnimSite573->X3DNode::setName(QString("r_neck_base_pt"));
SoHAnimSite573->setDEF(QString("Joe_r_neck_base_pt"));
SoHAnimSite573->setTranslation(new float[]{-0.0646,1.5149,-0.0385});
SoShape* SoShape574 = new SoShape();
SoShape574->setUSE(QString("sitebox"));
SoHAnimSite573->addChild(*SoShape574);

SoHAnimSegment566->addChild(*SoHAnimSite573);

SoHAnimSite* SoHAnimSite575 = new SoHAnimSite();
SoHAnimSite575->X3DNode::setName(QString("l_neck_base_pt"));
SoHAnimSite575->setDEF(QString("Joe_l_neck_base_pt"));
SoHAnimSite575->setTranslation(new float[]{0.0646,1.5149,-0.0385});
SoShape* SoShape576 = new SoShape();
SoShape576->setUSE(QString("sitebox"));
SoHAnimSite575->addChild(*SoShape576);

SoHAnimSegment566->addChild(*SoHAnimSite575);

SoHAnimJoint565->addChildren(*SoHAnimSegment566);

SoHAnimJoint* SoHAnimJoint577 = new SoHAnimJoint();
SoHAnimJoint577->X3DNode::setName(QString("vc6"));
SoHAnimJoint577->setDEF(QString("Joe_vc6"));
SoHAnimJoint577->setCenter(new float[]{0.0,1.54,-0.05});
SoHAnimSegment* SoHAnimSegment578 = new SoHAnimSegment();
SoHAnimSegment578->X3DNode::setName(QString("c6"));
SoHAnimSegment578->setDEF(QString("Joe_c6"));
SoShape* SoShape579 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance580 = new SoVRMLAppearance();
SoVRMLAppearance580->setUSE(QString("SegmentLine"));
SoShape579->addChild(*SoVRMLAppearance580);

SoIndexedLineSet* SoIndexedLineSet581 = new SoIndexedLineSet();
SoIndexedLineSet581->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate582 = new SoCoordinate();
SoCoordinate582->setPoint(new float[]{0.0,1.54,-0.05,0.0,1.5675,-0.0256}, 6);
SoIndexedLineSet581->setCoord(*SoCoordinate582);

SoShape579->setGeometry(*SoIndexedLineSet581);

SoHAnimSegment578->addChild(*SoShape579);

SoTransform* SoTransform583 = new SoTransform();
SoTransform583->setTranslation(new float[]{0.0,1.54,-0.05});
SoShape* SoShape584 = new SoShape();
SoShape584->setUSE(QString("jointbox"));
SoTransform583->addChild(*SoShape584);

SoHAnimSegment578->addChild(*SoTransform583);

SoHAnimJoint577->addChildren(*SoHAnimSegment578);

SoHAnimJoint* SoHAnimJoint585 = new SoHAnimJoint();
SoHAnimJoint585->X3DNode::setName(QString("vc5"));
SoHAnimJoint585->setDEF(QString("Joe_vc5"));
SoHAnimJoint585->setCenter(new float[]{0.0,1.552,-0.035});
SoHAnimSegment* SoHAnimSegment586 = new SoHAnimSegment();
SoHAnimSegment586->X3DNode::setName(QString("c5"));
SoHAnimSegment586->setDEF(QString("Joe_c5"));
SoTransform* SoTransform587 = new SoTransform();
SoTransform587->setTranslation(new float[]{0.0,1.552,-0.035});
SoShape* SoShape588 = new SoShape();
SoShape588->setUSE(QString("jointbox"));
SoTransform587->addChild(*SoShape588);

SoHAnimSegment586->addChild(*SoTransform587);

SoShape* SoShape589 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance590 = new SoVRMLAppearance();
SoVRMLAppearance590->setUSE(QString("SegmentLine"));
SoShape589->addChild(*SoVRMLAppearance590);

SoIndexedLineSet* SoIndexedLineSet591 = new SoIndexedLineSet();
SoIndexedLineSet591->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate592 = new SoCoordinate();
SoCoordinate592->setPoint(new float[]{0.0,1.5675,-0.0256,0.0,1.5823,-0.0185}, 6);
SoIndexedLineSet591->setCoord(*SoCoordinate592);

SoShape589->setGeometry(*SoIndexedLineSet591);

SoHAnimSegment586->addChild(*SoShape589);

SoHAnimJoint585->addChildren(*SoHAnimSegment586);

SoHAnimJoint* SoHAnimJoint593 = new SoHAnimJoint();
SoHAnimJoint593->X3DNode::setName(QString("vc4"));
SoHAnimJoint593->setDEF(QString("Joe_vc4"));
SoHAnimJoint593->setCenter(new float[]{0.0,1.5675,-0.0256});
SoHAnimSegment* SoHAnimSegment594 = new SoHAnimSegment();
SoHAnimSegment594->X3DNode::setName(QString("c4"));
SoHAnimSegment594->setDEF(QString("Joe_c4"));
SoShape* SoShape595 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance596 = new SoVRMLAppearance();
SoVRMLAppearance596->setUSE(QString("SegmentLine"));
SoShape595->addChild(*SoVRMLAppearance596);

SoIndexedLineSet* SoIndexedLineSet597 = new SoIndexedLineSet();
SoIndexedLineSet597->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate598 = new SoCoordinate();
SoCoordinate598->setPoint(new float[]{0.0,1.5823,-0.0185,0.0,1.595,-0.0175}, 6);
SoIndexedLineSet597->setCoord(*SoCoordinate598);

SoShape595->setGeometry(*SoIndexedLineSet597);

SoHAnimSegment594->addChild(*SoShape595);

SoTransform* SoTransform599 = new SoTransform();
SoTransform599->setTranslation(new float[]{0.0,1.5675,-0.0256});
SoShape* SoShape600 = new SoShape();
SoShape600->setUSE(QString("jointbox"));
SoTransform599->addChild(*SoShape600);

SoHAnimSegment594->addChild(*SoTransform599);

SoHAnimJoint593->addChildren(*SoHAnimSegment594);

SoHAnimJoint* SoHAnimJoint601 = new SoHAnimJoint();
SoHAnimJoint601->X3DNode::setName(QString("vc3"));
SoHAnimJoint601->setDEF(QString("Joe_vc3"));
SoHAnimJoint601->setCenter(new float[]{0.0,1.5823,-0.0185});
SoHAnimSegment* SoHAnimSegment602 = new SoHAnimSegment();
SoHAnimSegment602->X3DNode::setName(QString("c3"));
SoHAnimSegment602->setDEF(QString("Joe_c3"));
SoShape* SoShape603 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance604 = new SoVRMLAppearance();
SoVRMLAppearance604->setUSE(QString("SegmentLine"));
SoShape603->addChild(*SoVRMLAppearance604);

SoIndexedLineSet* SoIndexedLineSet605 = new SoIndexedLineSet();
SoIndexedLineSet605->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate606 = new SoCoordinate();
SoCoordinate606->setPoint(new float[]{0.0,1.595,-0.0175,0.0,1.61,-0.015}, 6);
SoIndexedLineSet605->setCoord(*SoCoordinate606);

SoShape603->setGeometry(*SoIndexedLineSet605);

SoHAnimSegment602->addChild(*SoShape603);

SoTransform* SoTransform607 = new SoTransform();
SoTransform607->setTranslation(new float[]{0.0,1.5823,-0.0185});
SoShape* SoShape608 = new SoShape();
SoShape608->setUSE(QString("jointbox"));
SoTransform607->addChild(*SoShape608);

SoHAnimSegment602->addChild(*SoTransform607);

SoHAnimJoint601->addChildren(*SoHAnimSegment602);

SoHAnimJoint* SoHAnimJoint609 = new SoHAnimJoint();
SoHAnimJoint609->X3DNode::setName(QString("vc2"));
SoHAnimJoint609->setDEF(QString("Joe_vc2"));
SoHAnimJoint609->setCenter(new float[]{0.0,1.595,-0.0175});
SoHAnimSegment* SoHAnimSegment610 = new SoHAnimSegment();
SoHAnimSegment610->X3DNode::setName(QString("c2"));
SoHAnimSegment610->setDEF(QString("Joe_c2"));
SoShape* SoShape611 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance612 = new SoVRMLAppearance();
SoVRMLAppearance612->setUSE(QString("SegmentLine"));
SoShape611->addChild(*SoVRMLAppearance612);

SoIndexedLineSet* SoIndexedLineSet613 = new SoIndexedLineSet();
SoIndexedLineSet613->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate614 = new SoCoordinate();
SoCoordinate614->setPoint(new float[]{0.0,1.61,-0.015,0.0,1.6144,-0.0034}, 6);
SoIndexedLineSet613->setCoord(*SoCoordinate614);

SoShape611->setGeometry(*SoIndexedLineSet613);

SoHAnimSegment610->addChild(*SoShape611);

SoTransform* SoTransform615 = new SoTransform();
SoTransform615->setTranslation(new float[]{0.0,1.595,-0.0175});
SoShape* SoShape616 = new SoShape();
SoShape616->setUSE(QString("jointbox"));
SoTransform615->addChild(*SoShape616);

SoHAnimSegment610->addChild(*SoTransform615);

SoHAnimJoint609->addChildren(*SoHAnimSegment610);

SoHAnimJoint* SoHAnimJoint617 = new SoHAnimJoint();
SoHAnimJoint617->X3DNode::setName(QString("vc1"));
SoHAnimJoint617->setDEF(QString("Joe_vc1"));
SoHAnimJoint617->setCenter(new float[]{0.0,1.61,-0.015});
SoHAnimSegment* SoHAnimSegment618 = new SoHAnimSegment();
SoHAnimSegment618->X3DNode::setName(QString("c1"));
SoHAnimSegment618->setDEF(QString("Joe_c1"));
SoShape* SoShape619 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance620 = new SoVRMLAppearance();
SoVRMLAppearance620->setUSE(QString("SegmentLine"));
SoShape619->addChild(*SoVRMLAppearance620);

SoIndexedLineSet* SoIndexedLineSet621 = new SoIndexedLineSet();
SoIndexedLineSet621->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate622 = new SoCoordinate();
SoCoordinate622->setPoint(new float[]{0.0,1.6144,-0.0034,0.0,1.63,-0.01}, 6);
SoIndexedLineSet621->setCoord(*SoCoordinate622);

SoShape619->setGeometry(*SoIndexedLineSet621);

SoHAnimSegment618->addChild(*SoShape619);

SoTransform* SoTransform623 = new SoTransform();
SoTransform623->setTranslation(new float[]{0.0,1.61,-0.015});
SoShape* SoShape624 = new SoShape();
SoShape624->setUSE(QString("jointbox"));
SoTransform623->addChild(*SoShape624);

SoHAnimSegment618->addChild(*SoTransform623);

SoHAnimJoint617->addChildren(*SoHAnimSegment618);

SoHAnimJoint* SoHAnimJoint625 = new SoHAnimJoint();
SoHAnimJoint625->X3DNode::setName(QString("skullbase"));
SoHAnimJoint625->setDEF(QString("Joe_skullbase"));
SoHAnimJoint625->setCenter(new float[]{0.0,1.63,-0.01});
SoHAnimJoint625->setSkinCoordIndex(new int32_t[]{0,1,2,3,4,5,6,7,8,9}, 10);
SoHAnimJoint625->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 10);
SoHAnimSegment* SoHAnimSegment626 = new SoHAnimSegment();
SoHAnimSegment626->X3DNode::setName(QString("skull"));
SoHAnimSegment626->setDEF(QString("Joe_skull"));
SoShape* SoShape627 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance628 = new SoVRMLAppearance();
SoVRMLAppearance628->setUSE(QString("SegmentLine"));
SoShape627->addChild(*SoVRMLAppearance628);

SoIndexedLineSet* SoIndexedLineSet629 = new SoIndexedLineSet();
SoIndexedLineSet629->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1}, 6);
SoCoordinate* SoCoordinate630 = new SoCoordinate();
SoCoordinate630->setPoint(new float[]{0.0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065}, 9);
SoIndexedLineSet629->setCoord(*SoCoordinate630);

SoShape627->setGeometry(*SoIndexedLineSet629);

SoHAnimSegment626->addChild(*SoShape627);

SoTransform* SoTransform631 = new SoTransform();
SoTransform631->setTranslation(new float[]{0.0,1.63,-0.01});
SoShape* SoShape632 = new SoShape();
SoShape632->setUSE(QString("jointbox"));
SoTransform631->addChild(*SoShape632);

SoHAnimSegment626->addChild(*SoTransform631);

SoHAnimSite* SoHAnimSite633 = new SoHAnimSite();
SoHAnimSite633->X3DNode::setName(QString("skull_vertex_tip"));
SoHAnimSite633->setDEF(QString("Joe_skull_vertex_tip"));
SoHAnimSite633->setTranslation(new float[]{0.0,1.77,0.0});
SoShape* SoShape634 = new SoShape();
SoShape634->setUSE(QString("sitebox"));
SoHAnimSite633->addChild(*SoShape634);

SoHAnimSegment626->addChild(*SoHAnimSite633);

SoHAnimSite* SoHAnimSite635 = new SoHAnimSite();
SoHAnimSite635->X3DNode::setName(QString("sellion_pt"));
SoHAnimSite635->setDEF(QString("Joe_sellion_pt"));
SoHAnimSite635->setTranslation(new float[]{0.0,1.665,0.09});
SoShape* SoShape636 = new SoShape();
SoShape636->setUSE(QString("sitebox"));
SoHAnimSite635->addChild(*SoShape636);

SoHAnimSegment626->addChild(*SoHAnimSite635);

SoHAnimSite* SoHAnimSite637 = new SoHAnimSite();
SoHAnimSite637->X3DNode::setName(QString("r_infraorbitale_pt"));
SoHAnimSite637->setDEF(QString("Joe_r_infraorbitale_pt"));
SoHAnimSite637->setTranslation(new float[]{-0.033,1.62,0.087});
SoShape* SoShape638 = new SoShape();
SoShape638->setUSE(QString("sitebox"));
SoHAnimSite637->addChild(*SoShape638);

SoHAnimSegment626->addChild(*SoHAnimSite637);

SoHAnimSite* SoHAnimSite639 = new SoHAnimSite();
SoHAnimSite639->X3DNode::setName(QString("l_infraorbitale_pt"));
SoHAnimSite639->setDEF(QString("Joe_l_infraorbitale_pt"));
SoHAnimSite639->setTranslation(new float[]{0.033,1.62,0.087});
SoShape* SoShape640 = new SoShape();
SoShape640->setUSE(QString("sitebox"));
SoHAnimSite639->addChild(*SoShape640);

SoHAnimSegment626->addChild(*SoHAnimSite639);

SoHAnimSite* SoHAnimSite641 = new SoHAnimSite();
SoHAnimSite641->X3DNode::setName(QString("supramenton_pt"));
SoHAnimSite641->setDEF(QString("Joe_supramenton_pt"));
SoHAnimSite641->setTranslation(new float[]{0.0,1.55,0.097});
SoShape* SoShape642 = new SoShape();
SoShape642->setUSE(QString("sitebox"));
SoHAnimSite641->addChild(*SoShape642);

SoHAnimSegment626->addChild(*SoHAnimSite641);

SoHAnimSite* SoHAnimSite643 = new SoHAnimSite();
SoHAnimSite643->X3DNode::setName(QString("r_tragion_pt"));
SoHAnimSite643->setDEF(QString("Joe_r_tragion_pt"));
SoHAnimSite643->setTranslation(new float[]{-0.077,1.64,-0.01});
SoShape* SoShape644 = new SoShape();
SoShape644->setUSE(QString("sitebox"));
SoHAnimSite643->addChild(*SoShape644);

SoHAnimSegment626->addChild(*SoHAnimSite643);

SoHAnimSite* SoHAnimSite645 = new SoHAnimSite();
SoHAnimSite645->X3DNode::setName(QString("r_gonion_pt"));
SoHAnimSite645->setDEF(QString("Joe_r_gonion_pt"));
SoHAnimSite645->setTranslation(new float[]{-0.052,1.58,0.015});
SoShape* SoShape646 = new SoShape();
SoShape646->setUSE(QString("sitebox"));
SoHAnimSite645->addChild(*SoShape646);

SoHAnimSegment626->addChild(*SoHAnimSite645);

SoHAnimSite* SoHAnimSite647 = new SoHAnimSite();
SoHAnimSite647->X3DNode::setName(QString("l_tragion_pt"));
SoHAnimSite647->setDEF(QString("Joe_l_tragion_pt"));
SoHAnimSite647->setTranslation(new float[]{0.077,1.64,-0.01});
SoShape* SoShape648 = new SoShape();
SoShape648->setUSE(QString("sitebox"));
SoHAnimSite647->addChild(*SoShape648);

SoHAnimSegment626->addChild(*SoHAnimSite647);

SoHAnimSite* SoHAnimSite649 = new SoHAnimSite();
SoHAnimSite649->X3DNode::setName(QString("l_gonion_pt"));
SoHAnimSite649->setDEF(QString("Joe_l_gonion_pt"));
SoHAnimSite649->setTranslation(new float[]{0.0631,1.58,0.015});
SoShape* SoShape650 = new SoShape();
SoShape650->setUSE(QString("sitebox"));
SoHAnimSite649->addChild(*SoShape650);

SoHAnimSegment626->addChild(*SoHAnimSite649);

SoHAnimSite* SoHAnimSite651 = new SoHAnimSite();
SoHAnimSite651->X3DNode::setName(QString("nuchale_pt"));
SoHAnimSite651->setDEF(QString("Joe_nuchale_pt"));
SoHAnimSite651->setTranslation(new float[]{0.0,1.625,-0.0925});
SoShape* SoShape652 = new SoShape();
SoShape652->setUSE(QString("sitebox"));
SoHAnimSite651->addChild(*SoShape652);

SoHAnimSegment626->addChild(*SoHAnimSite651);

SoHAnimJoint625->addChildren(*SoHAnimSegment626);

SoHAnimJoint* SoHAnimJoint653 = new SoHAnimJoint();
SoHAnimJoint653->X3DNode::setName(QString("l_eyeball_joint"));
SoHAnimJoint653->setDEF(QString("Joe_l_eyeball_joint"));
SoHAnimJoint653->setCenter(new float[]{0.034,1.659,0.06});
SoHAnimSegment* SoHAnimSegment654 = new SoHAnimSegment();
SoHAnimSegment654->X3DNode::setName(QString("l_eyeball"));
SoHAnimSegment654->setDEF(QString("Joe_l_eyeball"));
SoShape* SoShape655 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance656 = new SoVRMLAppearance();
SoVRMLAppearance656->setUSE(QString("SegmentLine"));
SoShape655->addChild(*SoVRMLAppearance656);

SoIndexedLineSet* SoIndexedLineSet657 = new SoIndexedLineSet();
SoIndexedLineSet657->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate658 = new SoCoordinate();
SoCoordinate658->setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
SoIndexedLineSet657->setCoord(*SoCoordinate658);

SoShape655->setGeometry(*SoIndexedLineSet657);

SoHAnimSegment654->addChild(*SoShape655);

SoTransform* SoTransform659 = new SoTransform();
SoTransform659->setScale(new float[]{1.0,1.0,1.4});
SoTransform659->setTranslation(new float[]{0.034,1.655,0.065});
SoShape* SoShape660 = new SoShape();
SoShape660->setUSE(QString("jointbox"));
SoTransform659->addChild(*SoShape660);

SoHAnimSegment654->addChild(*SoTransform659);

SoHAnimJoint653->addChildren(*SoHAnimSegment654);

SoHAnimJoint625->addChildren(*SoHAnimJoint653);

SoHAnimJoint* SoHAnimJoint661 = new SoHAnimJoint();
SoHAnimJoint661->X3DNode::setName(QString("r_eyeball_joint"));
SoHAnimJoint661->setDEF(QString("Joe_r_eyeball_joint"));
SoHAnimJoint661->setCenter(new float[]{-0.034,1.659,0.06});
SoHAnimSegment* SoHAnimSegment662 = new SoHAnimSegment();
SoHAnimSegment662->X3DNode::setName(QString("r_eyeball"));
SoHAnimSegment662->setDEF(QString("Joe_r_eyeball"));
SoShape* SoShape663 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance664 = new SoVRMLAppearance();
SoVRMLAppearance664->setUSE(QString("SegmentLine"));
SoShape663->addChild(*SoVRMLAppearance664);

SoIndexedLineSet* SoIndexedLineSet665 = new SoIndexedLineSet();
SoIndexedLineSet665->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate666 = new SoCoordinate();
SoCoordinate666->setPoint(new float[]{0.034,1.655,0.065,-0.034,1.655,0.065}, 6);
SoIndexedLineSet665->setCoord(*SoCoordinate666);

SoShape663->setGeometry(*SoIndexedLineSet665);

SoHAnimSegment662->addChild(*SoShape663);

SoTransform* SoTransform667 = new SoTransform();
SoTransform667->setScale(new float[]{1.0,1.0,1.4});
SoTransform667->setTranslation(new float[]{-0.034,1.655,0.065});
SoShape* SoShape668 = new SoShape();
SoShape668->setUSE(QString("jointbox"));
SoTransform667->addChild(*SoShape668);

SoHAnimSegment662->addChild(*SoTransform667);

SoHAnimJoint661->addChildren(*SoHAnimSegment662);

SoHAnimJoint625->addChildren(*SoHAnimJoint661);

SoHAnimJoint617->addChildren(*SoHAnimJoint625);

SoHAnimJoint609->addChildren(*SoHAnimJoint617);

SoHAnimJoint601->addChildren(*SoHAnimJoint609);

SoHAnimJoint593->addChildren(*SoHAnimJoint601);

SoHAnimJoint585->addChildren(*SoHAnimJoint593);

SoHAnimJoint577->addChildren(*SoHAnimJoint585);

SoHAnimJoint565->addChildren(*SoHAnimJoint577);

SoHAnimJoint553->addChildren(*SoHAnimJoint565);

SoHAnimJoint* SoHAnimJoint669 = new SoHAnimJoint();
SoHAnimJoint669->X3DNode::setName(QString("l_sternoclavicular"));
SoHAnimJoint669->setDEF(QString("Joe_l_sternoclavicular"));
SoHAnimJoint669->setCenter(new float[]{0.082,1.4488,-0.0353});
SoHAnimJoint669->setSkinCoordIndex(new int32_t[]{12}, 1);
SoHAnimJoint669->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment670 = new SoHAnimSegment();
SoHAnimSegment670->X3DNode::setName(QString("l_clavicle"));
SoHAnimSegment670->setDEF(QString("Joe_l_clavicle"));
SoShape* SoShape671 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance672 = new SoVRMLAppearance();
SoVRMLAppearance672->setUSE(QString("SegmentLine"));
SoShape671->addChild(*SoVRMLAppearance672);

SoIndexedLineSet* SoIndexedLineSet673 = new SoIndexedLineSet();
SoIndexedLineSet673->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate674 = new SoCoordinate();
SoCoordinate674->setPoint(new float[]{0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424}, 6);
SoIndexedLineSet673->setCoord(*SoCoordinate674);

SoShape671->setGeometry(*SoIndexedLineSet673);

SoHAnimSegment670->addChild(*SoShape671);

SoTransform* SoTransform675 = new SoTransform();
SoTransform675->setTranslation(new float[]{0.082,1.4488,-0.0353});
SoShape* SoShape676 = new SoShape();
SoShape676->setUSE(QString("jointbox"));
SoTransform675->addChild(*SoShape676);

SoHAnimSegment670->addChild(*SoTransform675);

SoHAnimSite* SoHAnimSite677 = new SoHAnimSite();
SoHAnimSite677->X3DNode::setName(QString("l_clavicle_pt"));
SoHAnimSite677->setDEF(QString("Joe_l_clavicle_pt"));
SoHAnimSite677->setTranslation(new float[]{0.03,1.46,0.035});
SoShape* SoShape678 = new SoShape();
SoShape678->setUSE(QString("sitebox"));
SoHAnimSite677->addChild(*SoShape678);

SoHAnimSegment670->addChild(*SoHAnimSite677);

SoHAnimJoint669->addChildren(*SoHAnimSegment670);

SoHAnimJoint* SoHAnimJoint679 = new SoHAnimJoint();
SoHAnimJoint679->X3DNode::setName(QString("l_acromioclavicular"));
SoHAnimJoint679->setDEF(QString("Joe_l_acromioclavicular"));
SoHAnimJoint679->setCenter(new float[]{0.0962,1.4269,-0.0424});
SoHAnimJoint679->setSkinCoordIndex(new int32_t[]{79}, 1);
SoHAnimJoint679->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment680 = new SoHAnimSegment();
SoHAnimSegment680->X3DNode::setName(QString("l_scapula"));
SoHAnimSegment680->setDEF(QString("Joe_l_scapula"));
SoShape* SoShape681 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance682 = new SoVRMLAppearance();
SoVRMLAppearance682->setUSE(QString("SegmentLine"));
SoShape681->addChild(*SoVRMLAppearance682);

SoIndexedLineSet* SoIndexedLineSet683 = new SoIndexedLineSet();
SoIndexedLineSet683->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate684 = new SoCoordinate();
SoCoordinate684->setPoint(new float[]{0.0962,1.4269,-0.0424,0.2,1.44,-0.04}, 6);
SoIndexedLineSet683->setCoord(*SoCoordinate684);

SoShape681->setGeometry(*SoIndexedLineSet683);

SoHAnimSegment680->addChild(*SoShape681);

SoTransform* SoTransform685 = new SoTransform();
SoTransform685->setTranslation(new float[]{0.0962,1.4269,-0.0424});
SoShape* SoShape686 = new SoShape();
SoShape686->setUSE(QString("jointbox"));
SoTransform685->addChild(*SoShape686);

SoHAnimSegment680->addChild(*SoTransform685);

SoTransform* SoTransform687 = new SoTransform();
SoTransform687->setTranslation(new float[]{0.11,1.427,-0.1375});
SoShape* SoShape688 = new SoShape();
SoShape688->setUSE(QString("skinsphere"));
SoTransform687->addChild(*SoShape688);

SoHAnimSegment680->addChild(*SoTransform687);

SoHAnimSite* SoHAnimSite689 = new SoHAnimSite();
SoHAnimSite689->X3DNode::setName(QString("l_acromion_pt"));
SoHAnimSite689->setDEF(QString("Joe_l_acromion_pt"));
SoHAnimSite689->setTranslation(new float[]{0.175,1.4825,-0.06});
SoShape* SoShape690 = new SoShape();
SoShape690->setUSE(QString("sitebox"));
SoHAnimSite689->addChild(*SoShape690);

SoHAnimSegment680->addChild(*SoHAnimSite689);

SoHAnimSite* SoHAnimSite691 = new SoHAnimSite();
SoHAnimSite691->X3DNode::setName(QString("l_axilla_proximal_pt"));
SoHAnimSite691->setDEF(QString("Joe_l_axilla_proximal_pt"));
SoHAnimSite691->setTranslation(new float[]{0.17,1.38,0.007});
SoShape* SoShape692 = new SoShape();
SoShape692->setUSE(QString("sitebox"));
SoHAnimSite691->addChild(*SoShape692);

SoHAnimSegment680->addChild(*SoHAnimSite691);

SoHAnimSite* SoHAnimSite693 = new SoHAnimSite();
SoHAnimSite693->X3DNode::setName(QString("l_axilla_distal_pt"));
SoHAnimSite693->setDEF(QString("Joe_l_axilla_distal_pt"));
SoHAnimSite693->setTranslation(new float[]{0.16,1.38,-0.125});
SoShape* SoShape694 = new SoShape();
SoShape694->setUSE(QString("sitebox"));
SoHAnimSite693->addChild(*SoShape694);

SoHAnimSegment680->addChild(*SoHAnimSite693);

SoHAnimJoint679->addChildren(*SoHAnimSegment680);

SoHAnimJoint* SoHAnimJoint695 = new SoHAnimJoint();
SoHAnimJoint695->X3DNode::setName(QString("l_shoulder"));
SoHAnimJoint695->setDEF(QString("Joe_l_shoulder"));
SoHAnimJoint695->setCenter(new float[]{0.2,1.44,-0.04});
SoHAnimJoint695->setSkinCoordIndex(new int32_t[]{41,42,44,80,102,103,104,105}, 8);
SoHAnimJoint695->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment696 = new SoHAnimSegment();
SoHAnimSegment696->X3DNode::setName(QString("l_upperarm"));
SoHAnimSegment696->setDEF(QString("Joe_l_upperarm"));
SoShape* SoShape697 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance698 = new SoVRMLAppearance();
SoVRMLAppearance698->setUSE(QString("SegmentLine"));
SoShape697->addChild(*SoVRMLAppearance698);

SoIndexedLineSet* SoIndexedLineSet699 = new SoIndexedLineSet();
SoIndexedLineSet699->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate700 = new SoCoordinate();
SoCoordinate700->setPoint(new float[]{0.2029,1.44,-0.0387,0.2,1.1388,-0.04}, 6);
SoIndexedLineSet699->setCoord(*SoCoordinate700);

SoShape697->setGeometry(*SoIndexedLineSet699);

SoHAnimSegment696->addChild(*SoShape697);

SoTransform* SoTransform701 = new SoTransform();
SoTransform701->setTranslation(new float[]{0.2,1.44,-0.04});
SoShape* SoShape702 = new SoShape();
SoShape702->setUSE(QString("jointbox"));
SoTransform701->addChild(*SoShape702);

SoHAnimSegment696->addChild(*SoTransform701);

SoTransform* SoTransform703 = new SoTransform();
SoTransform703->setTranslation(new float[]{0.235,1.42,-0.0625});
SoShape* SoShape704 = new SoShape();
SoShape704->setUSE(QString("skinsphere"));
SoTransform703->addChild(*SoShape704);

SoHAnimSegment696->addChild(*SoTransform703);

SoTransform* SoTransform705 = new SoTransform();
SoTransform705->setTranslation(new float[]{0.25,1.27,-0.04});
SoShape* SoShape706 = new SoShape();
SoShape706->setUSE(QString("skinsphere"));
SoTransform705->addChild(*SoShape706);

SoHAnimSegment696->addChild(*SoTransform705);

SoTransform* SoTransform707 = new SoTransform();
SoTransform707->setTranslation(new float[]{0.17,1.27,-0.04});
SoShape* SoShape708 = new SoShape();
SoShape708->setUSE(QString("skinsphere"));
SoTransform707->addChild(*SoShape708);

SoHAnimSegment696->addChild(*SoTransform707);

SoTransform* SoTransform709 = new SoTransform();
SoTransform709->setTranslation(new float[]{0.2,1.27,-0.09});
SoShape* SoShape710 = new SoShape();
SoShape710->setUSE(QString("skinsphere"));
SoTransform709->addChild(*SoShape710);

SoHAnimSegment696->addChild(*SoTransform709);

SoTransform* SoTransform711 = new SoTransform();
SoTransform711->setTranslation(new float[]{0.2,1.27,0.02});
SoShape* SoShape712 = new SoShape();
SoShape712->setUSE(QString("skinsphere"));
SoTransform711->addChild(*SoShape712);

SoHAnimSegment696->addChild(*SoTransform711);

SoHAnimSite* SoHAnimSite713 = new SoHAnimSite();
SoHAnimSite713->X3DNode::setName(QString("l_humeral_medial_epicondyle_pt"));
SoHAnimSite713->setDEF(QString("Joe_l_humeral_medial_epicondyle_pt"));
SoHAnimSite713->setTranslation(new float[]{0.165,1.1388,-0.04});
SoShape* SoShape714 = new SoShape();
SoShape714->setUSE(QString("sitebox"));
SoHAnimSite713->addChild(*SoShape714);

SoHAnimSegment696->addChild(*SoHAnimSite713);

SoHAnimSite* SoHAnimSite715 = new SoHAnimSite();
SoHAnimSite715->X3DNode::setName(QString("l_radiale_pt"));
SoHAnimSite715->setDEF(QString("Joe_l_radiale_pt"));
SoHAnimSite715->setTranslation(new float[]{0.23,1.133,-0.055});
SoShape* SoShape716 = new SoShape();
SoShape716->setUSE(QString("sitebox"));
SoHAnimSite715->addChild(*SoShape716);

SoHAnimSegment696->addChild(*SoHAnimSite715);

SoHAnimSite* SoHAnimSite717 = new SoHAnimSite();
SoHAnimSite717->X3DNode::setName(QString("l_humeral_lateral_epicondyle_pt"));
SoHAnimSite717->setDEF(QString("Joe_l_humeral_lateral_epicondyle_pt"));
SoHAnimSite717->setTranslation(new float[]{0.244,1.1388,-0.04});
SoShape* SoShape718 = new SoShape();
SoShape718->setUSE(QString("sitebox"));
SoHAnimSite717->addChild(*SoShape718);

SoHAnimSegment696->addChild(*SoHAnimSite717);

SoHAnimJoint695->addChildren(*SoHAnimSegment696);

SoHAnimJoint* SoHAnimJoint719 = new SoHAnimJoint();
SoHAnimJoint719->X3DNode::setName(QString("l_elbow"));
SoHAnimJoint719->setDEF(QString("Joe_l_elbow"));
SoHAnimJoint719->setCenter(new float[]{0.2,1.1388,-0.04});
SoHAnimJoint719->setSkinCoordIndex(new int32_t[]{45,46,47,109,110,111,112,113,115,116,117,118}, 12);
SoHAnimJoint719->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 15);
SoHAnimSegment* SoHAnimSegment720 = new SoHAnimSegment();
SoHAnimSegment720->X3DNode::setName(QString("l_forearm"));
SoHAnimSegment720->setDEF(QString("Joe_l_forearm"));
SoShape* SoShape721 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance722 = new SoVRMLAppearance();
SoVRMLAppearance722->setUSE(QString("SegmentLine"));
SoShape721->addChild(*SoVRMLAppearance722);

SoIndexedLineSet* SoIndexedLineSet723 = new SoIndexedLineSet();
SoIndexedLineSet723->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate724 = new SoCoordinate();
SoCoordinate724->setPoint(new float[]{0.2,1.1388,-0.04,0.2,0.87,-0.04}, 6);
SoIndexedLineSet723->setCoord(*SoCoordinate724);

SoShape721->setGeometry(*SoIndexedLineSet723);

SoHAnimSegment720->addChild(*SoShape721);

SoTransform* SoTransform725 = new SoTransform();
SoTransform725->setTranslation(new float[]{0.2,1.1388,-0.04});
SoShape* SoShape726 = new SoShape();
SoShape726->setUSE(QString("jointbox"));
SoTransform725->addChild(*SoShape726);

SoHAnimSegment720->addChild(*SoTransform725);

SoTransform* SoTransform727 = new SoTransform();
SoTransform727->setTranslation(new float[]{0.2,1.1388,-0.013});
SoShape* SoShape728 = new SoShape();
SoShape728->setUSE(QString("skinsphere"));
SoTransform727->addChild(*SoShape728);

SoHAnimSegment720->addChild(*SoTransform727);

SoTransform* SoTransform729 = new SoTransform();
SoTransform729->setTranslation(new float[]{0.225,1.0,-0.01});
SoShape* SoShape730 = new SoShape();
SoShape730->setUSE(QString("skinsphere"));
SoTransform729->addChild(*SoShape730);

SoHAnimSegment720->addChild(*SoTransform729);

SoTransform* SoTransform731 = new SoTransform();
SoTransform731->setTranslation(new float[]{0.225,1.0,-0.07});
SoShape* SoShape732 = new SoShape();
SoShape732->setUSE(QString("skinsphere"));
SoTransform731->addChild(*SoShape732);

SoHAnimSegment720->addChild(*SoTransform731);

SoTransform* SoTransform733 = new SoTransform();
SoTransform733->setTranslation(new float[]{0.185,1.0,-0.01});
SoShape* SoShape734 = new SoShape();
SoShape734->setUSE(QString("skinsphere"));
SoTransform733->addChild(*SoShape734);

SoHAnimSegment720->addChild(*SoTransform733);

SoTransform* SoTransform735 = new SoTransform();
SoTransform735->setTranslation(new float[]{0.185,1.0,-0.07});
SoShape* SoShape736 = new SoShape();
SoShape736->setUSE(QString("skinsphere"));
SoTransform735->addChild(*SoShape736);

SoHAnimSegment720->addChild(*SoTransform735);

SoHAnimSite* SoHAnimSite737 = new SoHAnimSite();
SoHAnimSite737->X3DNode::setName(QString("l_radial_styloid_pt"));
SoHAnimSite737->setDEF(QString("Joe_l_radial_styloid_pt"));
SoHAnimSite737->setTranslation(new float[]{0.1901,0.8645,-0.0415});
SoShape* SoShape738 = new SoShape();
SoShape738->setUSE(QString("sitebox"));
SoHAnimSite737->addChild(*SoShape738);

SoHAnimSegment720->addChild(*SoHAnimSite737);

SoHAnimSite* SoHAnimSite739 = new SoHAnimSite();
SoHAnimSite739->X3DNode::setName(QString("l_olecranon_pt"));
SoHAnimSite739->setDEF(QString("Joe_l_olecranon_pt"));
SoHAnimSite739->setTranslation(new float[]{0.2,1.1388,-0.08});
SoShape* SoShape740 = new SoShape();
SoShape740->setUSE(QString("sitebox"));
SoHAnimSite739->addChild(*SoShape740);

SoHAnimSegment720->addChild(*SoHAnimSite739);

SoHAnimJoint719->addChildren(*SoHAnimSegment720);

SoHAnimJoint* SoHAnimJoint741 = new SoHAnimJoint();
SoHAnimJoint741->X3DNode::setName(QString("l_radiocarpal"));
SoHAnimJoint741->setDEF(QString("Joe_l_radiocarpal"));
SoHAnimJoint741->setCenter(new float[]{0.2,0.87,-0.04});
SoHAnimJoint741->setSkinCoordIndex(new int32_t[]{119,120,121,122,123,124,125,126}, 8);
SoHAnimJoint741->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment742 = new SoHAnimSegment();
SoHAnimSegment742->X3DNode::setName(QString("l_carpal"));
SoHAnimSegment742->setDEF(QString("Joe_l_carpal"));
SoShape* SoShape743 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance744 = new SoVRMLAppearance();
SoVRMLAppearance744->setUSE(QString("SegmentLine"));
SoShape743->addChild(*SoVRMLAppearance744);

SoIndexedLineSet* SoIndexedLineSet745 = new SoIndexedLineSet();
SoIndexedLineSet745->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
SoCoordinate* SoCoordinate746 = new SoCoordinate();
SoCoordinate746->setPoint(new float[]{0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036}, 18);
SoIndexedLineSet745->setCoord(*SoCoordinate746);

SoShape743->setGeometry(*SoIndexedLineSet745);

SoHAnimSegment742->addChild(*SoShape743);

SoTransform* SoTransform747 = new SoTransform();
SoTransform747->setTranslation(new float[]{0.2,0.87,-0.04});
SoShape* SoShape748 = new SoShape();
SoShape748->setUSE(QString("jointbox"));
SoTransform747->addChild(*SoShape748);

SoHAnimSegment742->addChild(*SoTransform747);

SoHAnimSite* SoHAnimSite749 = new SoHAnimSite();
SoHAnimSite749->X3DNode::setName(QString("l_metacarpal_phalanx_2_pt"));
SoHAnimSite749->setDEF(QString("Joe_l_metacarpal_phalanx_2_pt"));
SoHAnimSite749->setTranslation(new float[]{0.2009,0.8139,-0.0237});
SoShape* SoShape750 = new SoShape();
SoShape750->setUSE(QString("sitebox"));
SoHAnimSite749->addChild(*SoShape750);

SoHAnimSegment742->addChild(*SoHAnimSite749);

SoHAnimSite* SoHAnimSite751 = new SoHAnimSite();
SoHAnimSite751->X3DNode::setName(QString("l_ulnar_styloid_pt"));
SoHAnimSite751->setDEF(QString("Joe_l_ulnar_styloid_pt"));
SoHAnimSite751->setTranslation(new float[]{0.2142,0.8529,-0.0648});
SoShape* SoShape752 = new SoShape();
SoShape752->setUSE(QString("sitebox"));
SoHAnimSite751->addChild(*SoShape752);

SoHAnimSegment742->addChild(*SoHAnimSite751);

SoHAnimSite* SoHAnimSite753 = new SoHAnimSite();
SoHAnimSite753->X3DNode::setName(QString("l_metacarpal_phalanx_5_pt"));
SoHAnimSite753->setDEF(QString("Joe_l_metacarpal_phalanx_5_pt"));
SoHAnimSite753->setTranslation(new float[]{0.1929,0.786,-0.1122});
SoShape* SoShape754 = new SoShape();
SoShape754->setUSE(QString("sitebox"));
SoHAnimSite753->addChild(*SoShape754);

SoHAnimSegment742->addChild(*SoHAnimSite753);

SoHAnimJoint741->addChildren(*SoHAnimSegment742);

SoHAnimJoint* SoHAnimJoint755 = new SoHAnimJoint();
SoHAnimJoint755->X3DNode::setName(QString("l_carpometacarpal_1"));
SoHAnimJoint755->setDEF(QString("Joe_l_carpometacarpal_1"));
SoHAnimJoint755->setCenter(new float[]{0.1924,0.8472,-0.0534});
SoHAnimJoint755->setSkinCoordIndex(new int32_t[]{127,128}, 2);
SoHAnimJoint755->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment756 = new SoHAnimSegment();
SoHAnimSegment756->X3DNode::setName(QString("l_metacarpal_1"));
SoHAnimSegment756->setDEF(QString("Joe_l_metacarpal_1"));
SoShape* SoShape757 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance758 = new SoVRMLAppearance();
SoVRMLAppearance758->setUSE(QString("SegmentLine"));
SoShape757->addChild(*SoVRMLAppearance758);

SoIndexedLineSet* SoIndexedLineSet759 = new SoIndexedLineSet();
SoIndexedLineSet759->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate760 = new SoCoordinate();
SoCoordinate760->setPoint(new float[]{0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246}, 6);
SoIndexedLineSet759->setCoord(*SoCoordinate760);

SoShape757->setGeometry(*SoIndexedLineSet759);

SoHAnimSegment756->addChild(*SoShape757);

SoTransform* SoTransform761 = new SoTransform();
SoTransform761->setTranslation(new float[]{0.1924,0.8472,-0.0534});
SoShape* SoShape762 = new SoShape();
SoShape762->setUSE(QString("jointbox"));
SoTransform761->addChild(*SoShape762);

SoHAnimSegment756->addChild(*SoTransform761);

SoHAnimJoint755->addChildren(*SoHAnimSegment756);

SoHAnimJoint* SoHAnimJoint763 = new SoHAnimJoint();
SoHAnimJoint763->X3DNode::setName(QString("l_metacarpophalangeal_1"));
SoHAnimJoint763->setDEF(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimJoint763->setCenter(new float[]{0.1951,0.8226,0.0246});
SoHAnimJoint763->setSkinCoordIndex(new int32_t[]{138,139,140,141,142,143}, 6);
SoHAnimJoint763->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment764 = new SoHAnimSegment();
SoHAnimSegment764->X3DNode::setName(QString("l_carpal_proximal_phalanx_1"));
SoHAnimSegment764->setDEF(QString("Joe_l_carpal_proximal_phalanx_1"));
SoShape* SoShape765 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance766 = new SoVRMLAppearance();
SoVRMLAppearance766->setUSE(QString("SegmentLine"));
SoShape765->addChild(*SoVRMLAppearance766);

SoIndexedLineSet* SoIndexedLineSet767 = new SoIndexedLineSet();
SoIndexedLineSet767->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate768 = new SoCoordinate();
SoCoordinate768->setPoint(new float[]{0.1951,0.8226,0.0246,0.1955,0.8159,0.0464}, 6);
SoIndexedLineSet767->setCoord(*SoCoordinate768);

SoShape765->setGeometry(*SoIndexedLineSet767);

SoHAnimSegment764->addChild(*SoShape765);

SoTransform* SoTransform769 = new SoTransform();
SoTransform769->setTranslation(new float[]{0.1951,0.8226,0.0246});
SoShape* SoShape770 = new SoShape();
SoShape770->setUSE(QString("jointbox"));
SoTransform769->addChild(*SoShape770);

SoHAnimSegment764->addChild(*SoTransform769);

SoHAnimJoint763->addChildren(*SoHAnimSegment764);

SoHAnimJoint* SoHAnimJoint771 = new SoHAnimJoint();
SoHAnimJoint771->X3DNode::setName(QString("l_carpal_interphalangeal_1"));
SoHAnimJoint771->setDEF(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimJoint771->setCenter(new float[]{0.1955,0.8159,0.0464});
SoHAnimJoint771->setSkinCoordIndex(new int32_t[]{144,145,146,147,148,149,150,151,152}, 9);
SoHAnimJoint771->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment772 = new SoHAnimSegment();
SoHAnimSegment772->X3DNode::setName(QString("l_carpal_distal_phalanx_1"));
SoHAnimSegment772->setDEF(QString("Joe_l_carpal_distal_phalanx_1"));
SoShape* SoShape773 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance774 = new SoVRMLAppearance();
SoVRMLAppearance774->setUSE(QString("SegmentLine"));
SoShape773->addChild(*SoVRMLAppearance774);

SoIndexedLineSet* SoIndexedLineSet775 = new SoIndexedLineSet();
SoIndexedLineSet775->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate776 = new SoCoordinate();
SoCoordinate776->setPoint(new float[]{0.1955,0.8159,0.0464,0.1982,0.8061,0.0759}, 6);
SoIndexedLineSet775->setCoord(*SoCoordinate776);

SoShape773->setGeometry(*SoIndexedLineSet775);

SoHAnimSegment772->addChild(*SoShape773);

SoTransform* SoTransform777 = new SoTransform();
SoTransform777->setTranslation(new float[]{0.1955,0.8159,0.0464});
SoShape* SoShape778 = new SoShape();
SoShape778->setUSE(QString("jointbox"));
SoTransform777->addChild(*SoShape778);

SoHAnimSegment772->addChild(*SoTransform777);

SoHAnimSite* SoHAnimSite779 = new SoHAnimSite();
SoHAnimSite779->X3DNode::setName(QString("l_carpal_distal_phalanx_1_tip"));
SoHAnimSite779->setDEF(QString("Joe_l_carpal_distal_phalanx_1_tip"));
SoHAnimSite779->setTranslation(new float[]{0.1982,0.8061,0.0759});
SoShape* SoShape780 = new SoShape();
SoShape780->setUSE(QString("sitebox"));
SoHAnimSite779->addChild(*SoShape780);

SoHAnimSegment772->addChild(*SoHAnimSite779);

SoHAnimJoint771->addChildren(*SoHAnimSegment772);

SoHAnimJoint763->addChildren(*SoHAnimJoint771);

SoHAnimJoint755->addChildren(*SoHAnimJoint763);

SoHAnimJoint741->addChildren(*SoHAnimJoint755);

SoHAnimJoint* SoHAnimJoint781 = new SoHAnimJoint();
SoHAnimJoint781->X3DNode::setName(QString("l_carpometacarpal_2"));
SoHAnimJoint781->setDEF(QString("Joe_l_carpometacarpal_2"));
SoHAnimJoint781->setCenter(new float[]{0.1983,0.8024,-0.028});
SoHAnimJoint781->setSkinCoordIndex(new int32_t[]{129,130}, 2);
SoHAnimJoint781->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment782 = new SoHAnimSegment();
SoHAnimSegment782->X3DNode::setName(QString("l_metacarpal_2"));
SoHAnimSegment782->setDEF(QString("Joe_l_metacarpal_2"));
SoShape* SoShape783 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance784 = new SoVRMLAppearance();
SoVRMLAppearance784->setUSE(QString("SegmentLine"));
SoShape783->addChild(*SoVRMLAppearance784);

SoIndexedLineSet* SoIndexedLineSet785 = new SoIndexedLineSet();
SoIndexedLineSet785->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate786 = new SoCoordinate();
SoCoordinate786->setPoint(new float[]{0.1983,0.8024,-0.028,0.1983,0.7815,-0.028}, 6);
SoIndexedLineSet785->setCoord(*SoCoordinate786);

SoShape783->setGeometry(*SoIndexedLineSet785);

SoHAnimSegment782->addChild(*SoShape783);

SoTransform* SoTransform787 = new SoTransform();
SoTransform787->setTranslation(new float[]{0.1983,0.8024,-0.028});
SoShape* SoShape788 = new SoShape();
SoShape788->setUSE(QString("jointbox"));
SoTransform787->addChild(*SoShape788);

SoHAnimSegment782->addChild(*SoTransform787);

SoHAnimJoint781->addChildren(*SoHAnimSegment782);

SoHAnimJoint* SoHAnimJoint789 = new SoHAnimJoint();
SoHAnimJoint789->X3DNode::setName(QString("l_metacarpophalangeal_2"));
SoHAnimJoint789->setDEF(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimJoint789->setCenter(new float[]{0.1983,0.7815,-0.028});
SoHAnimJoint789->setSkinCoordIndex(new int32_t[]{138,139,140,153,154,155,163}, 7);
SoHAnimJoint789->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimSegment* SoHAnimSegment790 = new SoHAnimSegment();
SoHAnimSegment790->X3DNode::setName(QString("l_carpal_proximal_phalanx_2"));
SoHAnimSegment790->setDEF(QString("Joe_l_carpal_proximal_phalanx_2"));
SoShape* SoShape791 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance792 = new SoVRMLAppearance();
SoVRMLAppearance792->setUSE(QString("SegmentLine"));
SoShape791->addChild(*SoVRMLAppearance792);

SoIndexedLineSet* SoIndexedLineSet793 = new SoIndexedLineSet();
SoIndexedLineSet793->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate794 = new SoCoordinate();
SoCoordinate794->setPoint(new float[]{0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248}, 6);
SoIndexedLineSet793->setCoord(*SoCoordinate794);

SoShape791->setGeometry(*SoIndexedLineSet793);

SoHAnimSegment790->addChild(*SoShape791);

SoTransform* SoTransform795 = new SoTransform();
SoTransform795->setTranslation(new float[]{0.1983,0.7815,-0.028});
SoShape* SoShape796 = new SoShape();
SoShape796->setUSE(QString("jointbox"));
SoTransform795->addChild(*SoShape796);

SoHAnimSegment790->addChild(*SoTransform795);

SoHAnimJoint789->addChildren(*SoHAnimSegment790);

SoHAnimJoint* SoHAnimJoint797 = new SoHAnimJoint();
SoHAnimJoint797->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint797->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimJoint797->setCenter(new float[]{0.2017,0.7363,-0.0248});
SoHAnimJoint797->setSkinCoordIndex(new int32_t[]{166,167,168,169}, 4);
SoHAnimJoint797->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment798 = new SoHAnimSegment();
SoHAnimSegment798->X3DNode::setName(QString("l_carpal_middle_phalanx_2"));
SoHAnimSegment798->setDEF(QString("Joe_l_carpal_middle_phalanx_2"));
SoShape* SoShape799 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance800 = new SoVRMLAppearance();
SoVRMLAppearance800->setUSE(QString("SegmentLine"));
SoShape799->addChild(*SoVRMLAppearance800);

SoIndexedLineSet* SoIndexedLineSet801 = new SoIndexedLineSet();
SoIndexedLineSet801->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate802 = new SoCoordinate();
SoCoordinate802->setPoint(new float[]{0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236}, 6);
SoIndexedLineSet801->setCoord(*SoCoordinate802);

SoShape799->setGeometry(*SoIndexedLineSet801);

SoHAnimSegment798->addChild(*SoShape799);

SoTransform* SoTransform803 = new SoTransform();
SoTransform803->setTranslation(new float[]{0.2017,0.7363,-0.0248});
SoShape* SoShape804 = new SoShape();
SoShape804->setUSE(QString("jointbox"));
SoTransform803->addChild(*SoShape804);

SoHAnimSegment798->addChild(*SoTransform803);

SoHAnimJoint797->addChildren(*SoHAnimSegment798);

SoHAnimJoint* SoHAnimJoint805 = new SoHAnimJoint();
SoHAnimJoint805->X3DNode::setName(QString("l_carpal_distal_interphalangeal_2"));
SoHAnimJoint805->setDEF(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimJoint805->setCenter(new float[]{0.2028,0.7139,-0.0236});
SoHAnimJoint805->setSkinCoordIndex(new int32_t[]{170,171,172,173,174,175,176,177,178}, 9);
SoHAnimJoint805->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment806 = new SoHAnimSegment();
SoHAnimSegment806->X3DNode::setName(QString("l_carpal_distal_phalanx_2"));
SoHAnimSegment806->setDEF(QString("Joe_l_carpal_distal_phalanx_2"));
SoShape* SoShape807 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance808 = new SoVRMLAppearance();
SoVRMLAppearance808->setUSE(QString("SegmentLine"));
SoShape807->addChild(*SoVRMLAppearance808);

SoIndexedLineSet* SoIndexedLineSet809 = new SoIndexedLineSet();
SoIndexedLineSet809->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate810 = new SoCoordinate();
SoCoordinate810->setPoint(new float[]{0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245}, 6);
SoIndexedLineSet809->setCoord(*SoCoordinate810);

SoShape807->setGeometry(*SoIndexedLineSet809);

SoHAnimSegment806->addChild(*SoShape807);

SoTransform* SoTransform811 = new SoTransform();
SoTransform811->setTranslation(new float[]{0.2028,0.7139,-0.0236});
SoShape* SoShape812 = new SoShape();
SoShape812->setUSE(QString("jointbox"));
SoTransform811->addChild(*SoShape812);

SoHAnimSegment806->addChild(*SoTransform811);

SoHAnimSite* SoHAnimSite813 = new SoHAnimSite();
SoHAnimSite813->X3DNode::setName(QString("l_carpal_distal_phalanx_2_tip"));
SoHAnimSite813->setDEF(QString("Joe_l_carpal_distal_phalanx_2_tip"));
SoHAnimSite813->setTranslation(new float[]{0.2089,0.6858,-0.0245});
SoShape* SoShape814 = new SoShape();
SoShape814->setUSE(QString("sitebox"));
SoHAnimSite813->addChild(*SoShape814);

SoHAnimSegment806->addChild(*SoHAnimSite813);

SoHAnimSite* SoHAnimSite815 = new SoHAnimSite();
SoHAnimSite815->X3DNode::setName(QString("l_dactylion_pt"));
SoHAnimSite815->setDEF(QString("Joe_l_dactylion_pt"));
SoHAnimSite815->setTranslation(new float[]{0.2056,0.6743,-0.0482});
SoShape* SoShape816 = new SoShape();
SoShape816->setUSE(QString("sitebox"));
SoHAnimSite815->addChild(*SoShape816);

SoHAnimSegment806->addChild(*SoHAnimSite815);

SoHAnimJoint805->addChildren(*SoHAnimSegment806);

SoHAnimJoint797->addChildren(*SoHAnimJoint805);

SoHAnimJoint789->addChildren(*SoHAnimJoint797);

SoHAnimJoint781->addChildren(*SoHAnimJoint789);

SoHAnimJoint741->addChildren(*SoHAnimJoint781);

SoHAnimJoint* SoHAnimJoint817 = new SoHAnimJoint();
SoHAnimJoint817->X3DNode::setName(QString("l_carpometacarpal_3"));
SoHAnimJoint817->setDEF(QString("Joe_l_carpometacarpal_3"));
SoHAnimJoint817->setCenter(new float[]{0.1987,0.8029,-0.053});
SoHAnimJoint817->setSkinCoordIndex(new int32_t[]{131,132}, 2);
SoHAnimJoint817->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment818 = new SoHAnimSegment();
SoHAnimSegment818->X3DNode::setName(QString("l_metacarpal_3"));
SoHAnimSegment818->setDEF(QString("Joe_l_metacarpal_3"));
SoShape* SoShape819 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance820 = new SoVRMLAppearance();
SoVRMLAppearance820->setUSE(QString("SegmentLine"));
SoShape819->addChild(*SoVRMLAppearance820);

SoIndexedLineSet* SoIndexedLineSet821 = new SoIndexedLineSet();
SoIndexedLineSet821->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate822 = new SoCoordinate();
SoCoordinate822->setPoint(new float[]{0.1987,0.8029,-0.053,0.1987,0.7818,-0.053}, 6);
SoIndexedLineSet821->setCoord(*SoCoordinate822);

SoShape819->setGeometry(*SoIndexedLineSet821);

SoHAnimSegment818->addChild(*SoShape819);

SoTransform* SoTransform823 = new SoTransform();
SoTransform823->setTranslation(new float[]{0.1987,0.8029,-0.053});
SoShape* SoShape824 = new SoShape();
SoShape824->setUSE(QString("jointbox"));
SoTransform823->addChild(*SoShape824);

SoHAnimSegment818->addChild(*SoTransform823);

SoHAnimJoint817->addChildren(*SoHAnimSegment818);

SoHAnimJoint* SoHAnimJoint825 = new SoHAnimJoint();
SoHAnimJoint825->X3DNode::setName(QString("l_metacarpophalangeal_3"));
SoHAnimJoint825->setDEF(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimJoint825->setCenter(new float[]{0.1987,0.7818,-0.053});
SoHAnimJoint825->setSkinCoordIndex(new int32_t[]{156,157,163,164}, 4);
SoHAnimJoint825->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment826 = new SoHAnimSegment();
SoHAnimSegment826->X3DNode::setName(QString("l_carpal_proximal_phalanx_3"));
SoHAnimSegment826->setDEF(QString("Joe_l_carpal_proximal_phalanx_3"));
SoShape* SoShape827 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance828 = new SoVRMLAppearance();
SoVRMLAppearance828->setUSE(QString("SegmentLine"));
SoShape827->addChild(*SoVRMLAppearance828);

SoIndexedLineSet* SoIndexedLineSet829 = new SoIndexedLineSet();
SoIndexedLineSet829->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate830 = new SoCoordinate();
SoCoordinate830->setPoint(new float[]{0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503}, 6);
SoIndexedLineSet829->setCoord(*SoCoordinate830);

SoShape827->setGeometry(*SoIndexedLineSet829);

SoHAnimSegment826->addChild(*SoShape827);

SoTransform* SoTransform831 = new SoTransform();
SoTransform831->setTranslation(new float[]{0.1987,0.7818,-0.053});
SoShape* SoShape832 = new SoShape();
SoShape832->setUSE(QString("jointbox"));
SoTransform831->addChild(*SoShape832);

SoHAnimSegment826->addChild(*SoTransform831);

SoHAnimJoint825->addChildren(*SoHAnimSegment826);

SoHAnimJoint* SoHAnimJoint833 = new SoHAnimJoint();
SoHAnimJoint833->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint833->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimJoint833->setCenter(new float[]{0.2013,0.7273,-0.0503});
SoHAnimJoint833->setSkinCoordIndex(new int32_t[]{179,180,181,182}, 4);
SoHAnimJoint833->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment834 = new SoHAnimSegment();
SoHAnimSegment834->X3DNode::setName(QString("l_carpal_middle_phalanx_3"));
SoHAnimSegment834->setDEF(QString("Joe_l_carpal_middle_phalanx_3"));
SoShape* SoShape835 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance836 = new SoVRMLAppearance();
SoVRMLAppearance836->setUSE(QString("SegmentLine"));
SoShape835->addChild(*SoVRMLAppearance836);

SoIndexedLineSet* SoIndexedLineSet837 = new SoIndexedLineSet();
SoIndexedLineSet837->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate838 = new SoCoordinate();
SoCoordinate838->setPoint(new float[]{0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494}, 6);
SoIndexedLineSet837->setCoord(*SoCoordinate838);

SoShape835->setGeometry(*SoIndexedLineSet837);

SoHAnimSegment834->addChild(*SoShape835);

SoTransform* SoTransform839 = new SoTransform();
SoTransform839->setTranslation(new float[]{0.2013,0.7273,-0.0503});
SoShape* SoShape840 = new SoShape();
SoShape840->setUSE(QString("jointbox"));
SoTransform839->addChild(*SoShape840);

SoHAnimSegment834->addChild(*SoTransform839);

SoHAnimJoint833->addChildren(*SoHAnimSegment834);

SoHAnimJoint* SoHAnimJoint841 = new SoHAnimJoint();
SoHAnimJoint841->X3DNode::setName(QString("l_carpal_distal_interphalangeal_3"));
SoHAnimJoint841->setDEF(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimJoint841->setCenter(new float[]{0.2026,0.7011,-0.0494});
SoHAnimJoint841->setSkinCoordIndex(new int32_t[]{183,184,185,186,187,188,189,190,191}, 9);
SoHAnimJoint841->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment842 = new SoHAnimSegment();
SoHAnimSegment842->X3DNode::setName(QString("l_carpal_distal_phalanx_3"));
SoHAnimSegment842->setDEF(QString("Joe_l_carpal_distal_phalanx_3"));
SoShape* SoShape843 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance844 = new SoVRMLAppearance();
SoVRMLAppearance844->setUSE(QString("SegmentLine"));
SoShape843->addChild(*SoVRMLAppearance844);

SoIndexedLineSet* SoIndexedLineSet845 = new SoIndexedLineSet();
SoIndexedLineSet845->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate846 = new SoCoordinate();
SoCoordinate846->setPoint(new float[]{0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491}, 6);
SoIndexedLineSet845->setCoord(*SoCoordinate846);

SoShape843->setGeometry(*SoIndexedLineSet845);

SoHAnimSegment842->addChild(*SoShape843);

SoHAnimSite* SoHAnimSite847 = new SoHAnimSite();
SoHAnimSite847->X3DNode::setName(QString("l_carpal_distal_phalanx_3_tip"));
SoHAnimSite847->setDEF(QString("Joe_l_carpal_distal_phalanx_3_tip"));
SoHAnimSite847->setTranslation(new float[]{0.208,0.6731,-0.0491});
SoShape* SoShape848 = new SoShape();
SoShape848->setUSE(QString("sitebox"));
SoHAnimSite847->addChild(*SoShape848);

SoHAnimSegment842->addChild(*SoHAnimSite847);

SoTransform* SoTransform849 = new SoTransform();
SoTransform849->setTranslation(new float[]{0.2026,0.7011,-0.0494});
SoShape* SoShape850 = new SoShape();
SoShape850->setUSE(QString("jointbox"));
SoTransform849->addChild(*SoShape850);

SoHAnimSegment842->addChild(*SoTransform849);

SoHAnimJoint841->addChildren(*SoHAnimSegment842);

SoHAnimJoint833->addChildren(*SoHAnimJoint841);

SoHAnimJoint825->addChildren(*SoHAnimJoint833);

SoHAnimJoint817->addChildren(*SoHAnimJoint825);

SoHAnimJoint741->addChildren(*SoHAnimJoint817);

SoHAnimJoint* SoHAnimJoint851 = new SoHAnimJoint();
SoHAnimJoint851->X3DNode::setName(QString("l_carpometacarpal_4"));
SoHAnimJoint851->setDEF(QString("Joe_l_carpometacarpal_4"));
SoHAnimJoint851->setCenter(new float[]{0.1956,0.8019,-0.0794});
SoHAnimJoint851->setSkinCoordIndex(new int32_t[]{133,134}, 2);
SoHAnimJoint851->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment852 = new SoHAnimSegment();
SoHAnimSegment852->X3DNode::setName(QString("l_metacarpal_4"));
SoHAnimSegment852->setDEF(QString("Joe_l_metacarpal_4"));
SoShape* SoShape853 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance854 = new SoVRMLAppearance();
SoVRMLAppearance854->setUSE(QString("SegmentLine"));
SoShape853->addChild(*SoVRMLAppearance854);

SoIndexedLineSet* SoIndexedLineSet855 = new SoIndexedLineSet();
SoIndexedLineSet855->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate856 = new SoCoordinate();
SoCoordinate856->setPoint(new float[]{0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794}, 6);
SoIndexedLineSet855->setCoord(*SoCoordinate856);

SoShape853->setGeometry(*SoIndexedLineSet855);

SoHAnimSegment852->addChild(*SoShape853);

SoTransform* SoTransform857 = new SoTransform();
SoTransform857->setTranslation(new float[]{0.1956,0.8019,-0.0794});
SoShape* SoShape858 = new SoShape();
SoShape858->setUSE(QString("jointbox"));
SoTransform857->addChild(*SoShape858);

SoHAnimSegment852->addChild(*SoTransform857);

SoHAnimJoint851->addChildren(*SoHAnimSegment852);

SoHAnimJoint* SoHAnimJoint859 = new SoHAnimJoint();
SoHAnimJoint859->X3DNode::setName(QString("l_metacarpophalangeal_4"));
SoHAnimJoint859->setDEF(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimJoint859->setCenter(new float[]{0.1956,0.7815,-0.0794});
SoHAnimJoint859->setSkinCoordIndex(new int32_t[]{158,159,164,165}, 4);
SoHAnimJoint859->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment860 = new SoHAnimSegment();
SoHAnimSegment860->X3DNode::setName(QString("l_carpal_proximal_phalanx_4"));
SoHAnimSegment860->setDEF(QString("Joe_l_carpal_proximal_phalanx_4"));
SoShape* SoShape861 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance862 = new SoVRMLAppearance();
SoVRMLAppearance862->setUSE(QString("SegmentLine"));
SoShape861->addChild(*SoVRMLAppearance862);

SoIndexedLineSet* SoIndexedLineSet863 = new SoIndexedLineSet();
SoIndexedLineSet863->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate864 = new SoCoordinate();
SoCoordinate864->setPoint(new float[]{0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777}, 6);
SoIndexedLineSet863->setCoord(*SoCoordinate864);

SoShape861->setGeometry(*SoIndexedLineSet863);

SoHAnimSegment860->addChild(*SoShape861);

SoTransform* SoTransform865 = new SoTransform();
SoTransform865->setTranslation(new float[]{0.1956,0.7815,-0.0794});
SoShape* SoShape866 = new SoShape();
SoShape866->setUSE(QString("jointbox"));
SoTransform865->addChild(*SoShape866);

SoHAnimSegment860->addChild(*SoTransform865);

SoHAnimJoint859->addChildren(*SoHAnimSegment860);

SoHAnimJoint* SoHAnimJoint867 = new SoHAnimJoint();
SoHAnimJoint867->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint867->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimJoint867->setCenter(new float[]{0.1973,0.7287,-0.0777});
SoHAnimJoint867->setSkinCoordIndex(new int32_t[]{192,193,194,195}, 4);
SoHAnimJoint867->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment868 = new SoHAnimSegment();
SoHAnimSegment868->X3DNode::setName(QString("l_carpal_middle_phalanx_4"));
SoHAnimSegment868->setDEF(QString("Joe_l_carpal_middle_phalanx_4"));
SoShape* SoShape869 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance870 = new SoVRMLAppearance();
SoVRMLAppearance870->setUSE(QString("SegmentLine"));
SoShape869->addChild(*SoVRMLAppearance870);

SoIndexedLineSet* SoIndexedLineSet871 = new SoIndexedLineSet();
SoIndexedLineSet871->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate872 = new SoCoordinate();
SoCoordinate872->setPoint(new float[]{0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767}, 6);
SoIndexedLineSet871->setCoord(*SoCoordinate872);

SoShape869->setGeometry(*SoIndexedLineSet871);

SoHAnimSegment868->addChild(*SoShape869);

SoTransform* SoTransform873 = new SoTransform();
SoTransform873->setTranslation(new float[]{0.1973,0.7287,-0.0777});
SoShape* SoShape874 = new SoShape();
SoShape874->setUSE(QString("jointbox"));
SoTransform873->addChild(*SoShape874);

SoHAnimSegment868->addChild(*SoTransform873);

SoHAnimJoint867->addChildren(*SoHAnimSegment868);

SoHAnimJoint* SoHAnimJoint875 = new SoHAnimJoint();
SoHAnimJoint875->X3DNode::setName(QString("l_carpal_distal_interphalangeal_4"));
SoHAnimJoint875->setDEF(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimJoint875->setCenter(new float[]{0.1983,0.7045,-0.0767});
SoHAnimJoint875->setSkinCoordIndex(new int32_t[]{196,197,198,199,200,201,202,203,204}, 9);
SoHAnimJoint875->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment876 = new SoHAnimSegment();
SoHAnimSegment876->X3DNode::setName(QString("l_carpal_distal_phalanx_4"));
SoHAnimSegment876->setDEF(QString("Joe_l_carpal_distal_phalanx_4"));
SoShape* SoShape877 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance878 = new SoVRMLAppearance();
SoVRMLAppearance878->setUSE(QString("SegmentLine"));
SoShape877->addChild(*SoVRMLAppearance878);

SoIndexedLineSet* SoIndexedLineSet879 = new SoIndexedLineSet();
SoIndexedLineSet879->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate880 = new SoCoordinate();
SoCoordinate880->setPoint(new float[]{0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756}, 6);
SoIndexedLineSet879->setCoord(*SoCoordinate880);

SoShape877->setGeometry(*SoIndexedLineSet879);

SoHAnimSegment876->addChild(*SoShape877);

SoTransform* SoTransform881 = new SoTransform();
SoTransform881->setTranslation(new float[]{0.1983,0.7045,-0.0767});
SoShape* SoShape882 = new SoShape();
SoShape882->setUSE(QString("jointbox"));
SoTransform881->addChild(*SoShape882);

SoHAnimSegment876->addChild(*SoTransform881);

SoHAnimSite* SoHAnimSite883 = new SoHAnimSite();
SoHAnimSite883->X3DNode::setName(QString("l_carpal_distal_phalanx_4_tip"));
SoHAnimSite883->setDEF(QString("Joe_l_carpal_distal_phalanx_4_tip"));
SoHAnimSite883->setTranslation(new float[]{0.2035,0.675,-0.0756});
SoShape* SoShape884 = new SoShape();
SoShape884->setUSE(QString("sitebox"));
SoHAnimSite883->addChild(*SoShape884);

SoHAnimSegment876->addChild(*SoHAnimSite883);

SoHAnimJoint875->addChildren(*SoHAnimSegment876);

SoHAnimJoint867->addChildren(*SoHAnimJoint875);

SoHAnimJoint859->addChildren(*SoHAnimJoint867);

SoHAnimJoint851->addChildren(*SoHAnimJoint859);

SoHAnimJoint741->addChildren(*SoHAnimJoint851);

SoHAnimJoint* SoHAnimJoint885 = new SoHAnimJoint();
SoHAnimJoint885->X3DNode::setName(QString("l_carpometacarpal_5"));
SoHAnimJoint885->setDEF(QString("Joe_l_carpometacarpal_5"));
SoHAnimJoint885->setCenter(new float[]{0.1925,0.8066,-0.1036});
SoHAnimJoint885->setSkinCoordIndex(new int32_t[]{135,136,137,165}, 4);
SoHAnimJoint885->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimSegment* SoHAnimSegment886 = new SoHAnimSegment();
SoHAnimSegment886->X3DNode::setName(QString("l_metacarpal_5"));
SoHAnimSegment886->setDEF(QString("Joe_l_metacarpal_5"));
SoShape* SoShape887 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance888 = new SoVRMLAppearance();
SoVRMLAppearance888->setUSE(QString("SegmentLine"));
SoShape887->addChild(*SoVRMLAppearance888);

SoIndexedLineSet* SoIndexedLineSet889 = new SoIndexedLineSet();
SoIndexedLineSet889->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate890 = new SoCoordinate();
SoCoordinate890->setPoint(new float[]{0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036}, 6);
SoIndexedLineSet889->setCoord(*SoCoordinate890);

SoShape887->setGeometry(*SoIndexedLineSet889);

SoHAnimSegment886->addChild(*SoShape887);

SoTransform* SoTransform891 = new SoTransform();
SoTransform891->setTranslation(new float[]{0.1925,0.8066,-0.1036});
SoShape* SoShape892 = new SoShape();
SoShape892->setUSE(QString("jointbox"));
SoTransform891->addChild(*SoShape892);

SoHAnimSegment886->addChild(*SoTransform891);

SoHAnimJoint885->addChildren(*SoHAnimSegment886);

SoHAnimJoint* SoHAnimJoint893 = new SoHAnimJoint();
SoHAnimJoint893->X3DNode::setName(QString("l_metacarpophalangeal_5"));
SoHAnimJoint893->setDEF(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimJoint893->setCenter(new float[]{0.1925,0.7866,-0.1036});
SoHAnimJoint893->setSkinCoordIndex(new int32_t[]{160,161,162}, 3);
SoHAnimJoint893->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment894 = new SoHAnimSegment();
SoHAnimSegment894->X3DNode::setName(QString("l_carpal_proximal_phalanx_5"));
SoHAnimSegment894->setDEF(QString("Joe_l_carpal_proximal_phalanx_5"));
SoShape* SoShape895 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance896 = new SoVRMLAppearance();
SoVRMLAppearance896->setUSE(QString("SegmentLine"));
SoShape895->addChild(*SoVRMLAppearance896);

SoIndexedLineSet* SoIndexedLineSet897 = new SoIndexedLineSet();
SoIndexedLineSet897->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate898 = new SoCoordinate();
SoCoordinate898->setPoint(new float[]{0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024}, 6);
SoIndexedLineSet897->setCoord(*SoCoordinate898);

SoShape895->setGeometry(*SoIndexedLineSet897);

SoHAnimSegment894->addChild(*SoShape895);

SoTransform* SoTransform899 = new SoTransform();
SoTransform899->setTranslation(new float[]{0.1925,0.7866,-0.1036});
SoShape* SoShape900 = new SoShape();
SoShape900->setUSE(QString("jointbox"));
SoTransform899->addChild(*SoShape900);

SoHAnimSegment894->addChild(*SoTransform899);

SoHAnimJoint893->addChildren(*SoHAnimSegment894);

SoHAnimJoint* SoHAnimJoint901 = new SoHAnimJoint();
SoHAnimJoint901->X3DNode::setName(QString("l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint901->setDEF(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimJoint901->setCenter(new float[]{0.1938,0.7452,-0.1024});
SoHAnimJoint901->setSkinCoordIndex(new int32_t[]{205,206,207,208}, 4);
SoHAnimJoint901->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment902 = new SoHAnimSegment();
SoHAnimSegment902->X3DNode::setName(QString("l_carpal_middle_phalanx_5"));
SoHAnimSegment902->setDEF(QString("Joe_l_carpal_middle_phalanx_5"));
SoTransform* SoTransform903 = new SoTransform();
SoTransform903->setTranslation(new float[]{0.1938,0.7452,-0.1024});
SoShape* SoShape904 = new SoShape();
SoShape904->setUSE(QString("jointbox"));
SoTransform903->addChild(*SoShape904);

SoHAnimSegment902->addChild(*SoTransform903);

SoShape* SoShape905 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance906 = new SoVRMLAppearance();
SoVRMLAppearance906->setUSE(QString("SegmentLine"));
SoShape905->addChild(*SoVRMLAppearance906);

SoIndexedLineSet* SoIndexedLineSet907 = new SoIndexedLineSet();
SoIndexedLineSet907->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate908 = new SoCoordinate();
SoCoordinate908->setPoint(new float[]{0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017}, 6);
SoIndexedLineSet907->setCoord(*SoCoordinate908);

SoShape905->setGeometry(*SoIndexedLineSet907);

SoHAnimSegment902->addChild(*SoShape905);

SoHAnimJoint901->addChildren(*SoHAnimSegment902);

SoHAnimJoint* SoHAnimJoint909 = new SoHAnimJoint();
SoHAnimJoint909->X3DNode::setName(QString("l_carpal_distal_interphalangeal_5"));
SoHAnimJoint909->setDEF(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimJoint909->setCenter(new float[]{0.1948,0.7277,-0.1017});
SoHAnimJoint909->setSkinCoordIndex(new int32_t[]{209,210,211,212,213,214,215,216,217}, 9);
SoHAnimJoint909->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment910 = new SoHAnimSegment();
SoHAnimSegment910->X3DNode::setName(QString("l_carpal_distal_phalanx_5"));
SoHAnimSegment910->setDEF(QString("Joe_l_carpal_distal_phalanx_5"));
SoShape* SoShape911 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance912 = new SoVRMLAppearance();
SoVRMLAppearance912->setUSE(QString("SegmentLine"));
SoShape911->addChild(*SoVRMLAppearance912);

SoIndexedLineSet* SoIndexedLineSet913 = new SoIndexedLineSet();
SoIndexedLineSet913->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate914 = new SoCoordinate();
SoCoordinate914->setPoint(new float[]{0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012}, 6);
SoIndexedLineSet913->setCoord(*SoCoordinate914);

SoShape911->setGeometry(*SoIndexedLineSet913);

SoHAnimSegment910->addChild(*SoShape911);

SoTransform* SoTransform915 = new SoTransform();
SoTransform915->setTranslation(new float[]{0.1948,0.7277,-0.1017});
SoShape* SoShape916 = new SoShape();
SoShape916->setUSE(QString("jointbox"));
SoTransform915->addChild(*SoShape916);

SoHAnimSegment910->addChild(*SoTransform915);

SoHAnimSite* SoHAnimSite917 = new SoHAnimSite();
SoHAnimSite917->X3DNode::setName(QString("l_carpal_distal_phalanx_5_tip"));
SoHAnimSite917->setDEF(QString("Joe_l_carpal_distal_phalanx_5_tip"));
SoHAnimSite917->setTranslation(new float[]{0.2014,0.7009,-0.1012});
SoShape* SoShape918 = new SoShape();
SoShape918->setUSE(QString("sitebox"));
SoHAnimSite917->addChild(*SoShape918);

SoHAnimSegment910->addChild(*SoHAnimSite917);

SoHAnimJoint909->addChildren(*SoHAnimSegment910);

SoHAnimJoint901->addChildren(*SoHAnimJoint909);

SoHAnimJoint893->addChildren(*SoHAnimJoint901);

SoHAnimJoint885->addChildren(*SoHAnimJoint893);

SoHAnimJoint741->addChildren(*SoHAnimJoint885);

SoHAnimJoint719->addChildren(*SoHAnimJoint741);

SoHAnimJoint695->addChildren(*SoHAnimJoint719);

SoHAnimJoint679->addChildren(*SoHAnimJoint695);

SoHAnimJoint669->addChildren(*SoHAnimJoint679);

SoHAnimJoint553->addChildren(*SoHAnimJoint669);

SoHAnimJoint* SoHAnimJoint919 = new SoHAnimJoint();
SoHAnimJoint919->X3DNode::setName(QString("r_sternoclavicular"));
SoHAnimJoint919->setDEF(QString("Joe_r_sternoclavicular"));
SoHAnimJoint919->setCenter(new float[]{-0.03,1.46,0.0});
SoHAnimJoint919->setSkinCoordIndex(new int32_t[]{10}, 1);
SoHAnimJoint919->setSkinCoordWeight(new float[]{1.0}, 1);
SoHAnimSegment* SoHAnimSegment920 = new SoHAnimSegment();
SoHAnimSegment920->X3DNode::setName(QString("r_clavicle"));
SoHAnimSegment920->setDEF(QString("Joe_r_clavicle"));
SoShape* SoShape921 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance922 = new SoVRMLAppearance();
SoVRMLAppearance922->setUSE(QString("SegmentLine"));
SoShape921->addChild(*SoVRMLAppearance922);

SoIndexedLineSet* SoIndexedLineSet923 = new SoIndexedLineSet();
SoIndexedLineSet923->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate924 = new SoCoordinate();
SoCoordinate924->setPoint(new float[]{-0.03,1.46,0.02,-0.09,1.41,-0.09}, 6);
SoIndexedLineSet923->setCoord(*SoCoordinate924);

SoShape921->setGeometry(*SoIndexedLineSet923);

SoHAnimSegment920->addChild(*SoShape921);

SoTransform* SoTransform925 = new SoTransform();
SoTransform925->setTranslation(new float[]{-0.03,1.46,0.02});
SoShape* SoShape926 = new SoShape();
SoShape926->setUSE(QString("jointbox"));
SoTransform925->addChild(*SoShape926);

SoHAnimSegment920->addChild(*SoTransform925);

SoHAnimSite* SoHAnimSite927 = new SoHAnimSite();
SoHAnimSite927->X3DNode::setName(QString("r_clavicle_pt"));
SoHAnimSite927->setDEF(QString("Joe_r_clavicle_pt"));
SoHAnimSite927->setTranslation(new float[]{-0.03,1.46,0.035});
SoShape* SoShape928 = new SoShape();
SoShape928->setUSE(QString("sitebox"));
SoHAnimSite927->addChild(*SoShape928);

SoHAnimSegment920->addChild(*SoHAnimSite927);

SoHAnimJoint919->addChildren(*SoHAnimSegment920);

SoHAnimJoint* SoHAnimJoint929 = new SoHAnimJoint();
SoHAnimJoint929->X3DNode::setName(QString("r_acromioclavicular"));
SoHAnimJoint929->setDEF(QString("Joe_r_acromioclavicular"));
SoHAnimJoint929->setCenter(new float[]{-0.09,1.41,-0.11});
SoHAnimJoint929->setSkinCoordIndex(new int32_t[]{77,29}, 2);
SoHAnimJoint929->setSkinCoordWeight(new float[]{1.0,0.9}, 2);
SoHAnimSegment* SoHAnimSegment930 = new SoHAnimSegment();
SoHAnimSegment930->X3DNode::setName(QString("r_scapula"));
SoHAnimSegment930->setDEF(QString("Joe_r_scapula"));
SoShape* SoShape931 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance932 = new SoVRMLAppearance();
SoVRMLAppearance932->setUSE(QString("SegmentLine"));
SoShape931->addChild(*SoVRMLAppearance932);

SoIndexedLineSet* SoIndexedLineSet933 = new SoIndexedLineSet();
SoIndexedLineSet933->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate934 = new SoCoordinate();
SoCoordinate934->setPoint(new float[]{-0.09,1.41,-0.09,-0.2,1.44,-0.04}, 6);
SoIndexedLineSet933->setCoord(*SoCoordinate934);

SoShape931->setGeometry(*SoIndexedLineSet933);

SoHAnimSegment930->addChild(*SoShape931);

SoTransform* SoTransform935 = new SoTransform();
SoTransform935->setTranslation(new float[]{-0.09,1.41,-0.09});
SoShape* SoShape936 = new SoShape();
SoShape936->setUSE(QString("jointbox"));
SoTransform935->addChild(*SoShape936);

SoHAnimSegment930->addChild(*SoTransform935);

SoTransform* SoTransform937 = new SoTransform();
SoTransform937->setTranslation(new float[]{-0.11,1.427,-0.1375});
SoShape* SoShape938 = new SoShape();
SoShape938->setUSE(QString("skinsphere"));
SoTransform937->addChild(*SoShape938);

SoHAnimSegment930->addChild(*SoTransform937);

SoHAnimSite* SoHAnimSite939 = new SoHAnimSite();
SoHAnimSite939->X3DNode::setName(QString("r_acromion_pt"));
SoHAnimSite939->setDEF(QString("Joe_r_acromion_pt"));
SoHAnimSite939->setTranslation(new float[]{-0.178,1.4825,-0.0625});
SoShape* SoShape940 = new SoShape();
SoShape940->setUSE(QString("sitebox"));
SoHAnimSite939->addChild(*SoShape940);

SoHAnimSegment930->addChild(*SoHAnimSite939);

SoHAnimSite* SoHAnimSite941 = new SoHAnimSite();
SoHAnimSite941->X3DNode::setName(QString("r_axilla_proximal_pt"));
SoHAnimSite941->setDEF(QString("Joe_r_axilla_proximal_pt"));
SoHAnimSite941->setTranslation(new float[]{-0.17,1.38,0.007});
SoShape* SoShape942 = new SoShape();
SoShape942->setUSE(QString("sitebox"));
SoHAnimSite941->addChild(*SoShape942);

SoHAnimSegment930->addChild(*SoHAnimSite941);

SoHAnimSite* SoHAnimSite943 = new SoHAnimSite();
SoHAnimSite943->X3DNode::setName(QString("r_axilla_distal_pt"));
SoHAnimSite943->setDEF(QString("Joe_r_axilla_distal_pt"));
SoHAnimSite943->setTranslation(new float[]{-0.16,1.38,-0.127});
SoShape* SoShape944 = new SoShape();
SoShape944->setUSE(QString("sitebox"));
SoHAnimSite943->addChild(*SoShape944);

SoHAnimSegment930->addChild(*SoHAnimSite943);

SoHAnimJoint929->addChildren(*SoHAnimSegment930);

SoHAnimJoint* SoHAnimJoint945 = new SoHAnimJoint();
SoHAnimJoint945->X3DNode::setName(QString("r_shoulder"));
SoHAnimJoint945->setDEF(QString("Joe_r_shoulder"));
SoHAnimJoint945->setCenter(new float[]{-0.2,1.44,-0.04});
SoHAnimJoint945->setSkinCoordIndex(new int32_t[]{29,30,32,78,218,219,220,221,86,88}, 10);
SoHAnimJoint945->setSkinCoordWeight(new float[]{0.1,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.3,0.2}, 10);
SoHAnimSegment* SoHAnimSegment946 = new SoHAnimSegment();
SoHAnimSegment946->X3DNode::setName(QString("r_upperarm"));
SoHAnimSegment946->setDEF(QString("Joe_r_upperarm"));
SoTransform* SoTransform947 = new SoTransform();
SoTransform947->setTranslation(new float[]{-0.2,1.44,-0.04});
SoShape* SoShape948 = new SoShape();
SoShape948->setUSE(QString("jointbox"));
SoTransform947->addChild(*SoShape948);

SoHAnimSegment946->addChild(*SoTransform947);

SoShape* SoShape949 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance950 = new SoVRMLAppearance();
SoVRMLAppearance950->setUSE(QString("SegmentLine"));
SoShape949->addChild(*SoVRMLAppearance950);

SoIndexedLineSet* SoIndexedLineSet951 = new SoIndexedLineSet();
SoIndexedLineSet951->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate952 = new SoCoordinate();
SoCoordinate952->setPoint(new float[]{-0.2,1.44,-0.04,-0.2,1.1388,-0.04}, 6);
SoIndexedLineSet951->setCoord(*SoCoordinate952);

SoShape949->setGeometry(*SoIndexedLineSet951);

SoHAnimSegment946->addChild(*SoShape949);

SoTransform* SoTransform953 = new SoTransform();
SoTransform953->setTranslation(new float[]{-0.178,1.4825,-0.0625});
SoShape* SoShape954 = new SoShape();
SoShape954->setUSE(QString("skinsphere"));
SoTransform953->addChild(*SoShape954);

SoHAnimSegment946->addChild(*SoTransform953);

SoTransform* SoTransform955 = new SoTransform();
SoTransform955->setTranslation(new float[]{-0.17,1.38,0.007});
SoShape* SoShape956 = new SoShape();
SoShape956->setUSE(QString("skinsphere"));
SoTransform955->addChild(*SoShape956);

SoHAnimSegment946->addChild(*SoTransform955);

SoTransform* SoTransform957 = new SoTransform();
SoTransform957->setTranslation(new float[]{-0.16,1.38,-0.127});
SoShape* SoShape958 = new SoShape();
SoShape958->setUSE(QString("skinsphere"));
SoTransform957->addChild(*SoShape958);

SoHAnimSegment946->addChild(*SoTransform957);

SoTransform* SoTransform959 = new SoTransform();
SoTransform959->setTranslation(new float[]{-0.235,1.42,-0.0625});
SoShape* SoShape960 = new SoShape();
SoShape960->setUSE(QString("skinsphere"));
SoTransform959->addChild(*SoShape960);

SoHAnimSegment946->addChild(*SoTransform959);

SoTransform* SoTransform961 = new SoTransform();
SoTransform961->setTranslation(new float[]{-0.23,1.235,-0.04});
SoShape* SoShape962 = new SoShape();
SoShape962->setUSE(QString("skinsphere"));
SoTransform961->addChild(*SoShape962);

SoHAnimSegment946->addChild(*SoTransform961);

SoTransform* SoTransform963 = new SoTransform();
SoTransform963->setTranslation(new float[]{-0.16,1.23,-0.04});
SoShape* SoShape964 = new SoShape();
SoShape964->setUSE(QString("skinsphere"));
SoTransform963->addChild(*SoShape964);

SoHAnimSegment946->addChild(*SoTransform963);

SoTransform* SoTransform965 = new SoTransform();
SoTransform965->setTranslation(new float[]{-0.2,1.23,-0.105});
SoShape* SoShape966 = new SoShape();
SoShape966->setUSE(QString("skinsphere"));
SoTransform965->addChild(*SoShape966);

SoHAnimSegment946->addChild(*SoTransform965);

SoTransform* SoTransform967 = new SoTransform();
SoTransform967->setTranslation(new float[]{-0.2,1.235,0.02});
SoShape* SoShape968 = new SoShape();
SoShape968->setUSE(QString("skinsphere"));
SoTransform967->addChild(*SoShape968);

SoHAnimSegment946->addChild(*SoTransform967);

SoHAnimSite* SoHAnimSite969 = new SoHAnimSite();
SoHAnimSite969->X3DNode::setName(QString("r_humeral_medial_epicondyle_pt"));
SoHAnimSite969->setDEF(QString("Joe_r_humeral_medial_epicondyle_pt"));
SoHAnimSite969->setTranslation(new float[]{-0.165,1.1388,-0.04});
SoShape* SoShape970 = new SoShape();
SoShape970->setUSE(QString("sitebox"));
SoHAnimSite969->addChild(*SoShape970);

SoHAnimSegment946->addChild(*SoHAnimSite969);

SoHAnimSite* SoHAnimSite971 = new SoHAnimSite();
SoHAnimSite971->X3DNode::setName(QString("r_radiale_pt"));
SoHAnimSite971->setDEF(QString("Joe_r_radiale_pt"));
SoHAnimSite971->setTranslation(new float[]{-0.23,1.133,-0.055});
SoShape* SoShape972 = new SoShape();
SoShape972->setUSE(QString("sitebox"));
SoHAnimSite971->addChild(*SoShape972);

SoHAnimSegment946->addChild(*SoHAnimSite971);

SoHAnimSite* SoHAnimSite973 = new SoHAnimSite();
SoHAnimSite973->X3DNode::setName(QString("r_humeral_lateral_epicondyle_pt"));
SoHAnimSite973->setDEF(QString("Joe_r_humeral_lateral_epicondyle_pt"));
SoHAnimSite973->setTranslation(new float[]{-0.244,1.1388,-0.04});
SoShape* SoShape974 = new SoShape();
SoShape974->setUSE(QString("sitebox"));
SoHAnimSite973->addChild(*SoShape974);

SoHAnimSegment946->addChild(*SoHAnimSite973);

SoHAnimJoint945->addChildren(*SoHAnimSegment946);

SoHAnimJoint* SoHAnimJoint975 = new SoHAnimJoint();
SoHAnimJoint975->X3DNode::setName(QString("r_elbow"));
SoHAnimJoint975->setDEF(QString("Joe_r_elbow"));
SoHAnimJoint975->setCenter(new float[]{-0.2,1.1388,-0.04});
SoHAnimJoint975->setSkinCoordIndex(new int32_t[]{33,34,35,225,226,227,228,229,231,232,233,234}, 12);
SoHAnimJoint975->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 12);
SoHAnimSegment* SoHAnimSegment976 = new SoHAnimSegment();
SoHAnimSegment976->X3DNode::setName(QString("r_forearm"));
SoHAnimSegment976->setDEF(QString("Joe_r_forearm"));
SoShape* SoShape977 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance978 = new SoVRMLAppearance();
SoVRMLAppearance978->setUSE(QString("SegmentLine"));
SoShape977->addChild(*SoVRMLAppearance978);

SoIndexedLineSet* SoIndexedLineSet979 = new SoIndexedLineSet();
SoIndexedLineSet979->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate980 = new SoCoordinate();
SoCoordinate980->setPoint(new float[]{-0.2,1.1388,-0.04,-0.2,0.89,-0.04}, 6);
SoIndexedLineSet979->setCoord(*SoCoordinate980);

SoShape977->setGeometry(*SoIndexedLineSet979);

SoHAnimSegment976->addChild(*SoShape977);

SoTransform* SoTransform981 = new SoTransform();
SoTransform981->setTranslation(new float[]{-0.2,1.1388,-0.04});
SoShape* SoShape982 = new SoShape();
SoShape982->setUSE(QString("jointbox"));
SoTransform981->addChild(*SoShape982);

SoHAnimSegment976->addChild(*SoTransform981);

SoTransform* SoTransform983 = new SoTransform();
SoTransform983->setTranslation(new float[]{-0.2,1.1388,0.013});
SoShape* SoShape984 = new SoShape();
SoShape984->setUSE(QString("skinsphere"));
SoTransform983->addChild(*SoShape984);

SoHAnimSegment976->addChild(*SoTransform983);

SoTransform* SoTransform985 = new SoTransform();
SoTransform985->setTranslation(new float[]{-0.225,1.0,-0.01});
SoShape* SoShape986 = new SoShape();
SoShape986->setUSE(QString("skinsphere"));
SoTransform985->addChild(*SoShape986);

SoHAnimSegment976->addChild(*SoTransform985);

SoTransform* SoTransform987 = new SoTransform();
SoTransform987->setTranslation(new float[]{-0.225,1.0,-0.07});
SoShape* SoShape988 = new SoShape();
SoShape988->setUSE(QString("skinsphere"));
SoTransform987->addChild(*SoShape988);

SoHAnimSegment976->addChild(*SoTransform987);

SoTransform* SoTransform989 = new SoTransform();
SoTransform989->setTranslation(new float[]{-0.185,1.0,-0.01});
SoShape* SoShape990 = new SoShape();
SoShape990->setUSE(QString("skinsphere"));
SoTransform989->addChild(*SoShape990);

SoHAnimSegment976->addChild(*SoTransform989);

SoTransform* SoTransform991 = new SoTransform();
SoTransform991->setTranslation(new float[]{-0.185,1.0,-0.07});
SoShape* SoShape992 = new SoShape();
SoShape992->setUSE(QString("skinsphere"));
SoTransform991->addChild(*SoShape992);

SoHAnimSegment976->addChild(*SoTransform991);

SoHAnimSite* SoHAnimSite993 = new SoHAnimSite();
SoHAnimSite993->X3DNode::setName(QString("r_radial_styloid_pt"));
SoHAnimSite993->setDEF(QString("Joe_r_radial_styloid_pt"));
SoHAnimSite993->setTranslation(new float[]{-0.2,0.9,-0.015});
SoShape* SoShape994 = new SoShape();
SoShape994->setUSE(QString("sitebox"));
SoHAnimSite993->addChild(*SoShape994);

SoHAnimSegment976->addChild(*SoHAnimSite993);

SoHAnimSite* SoHAnimSite995 = new SoHAnimSite();
SoHAnimSite995->X3DNode::setName(QString("r_olecranon_pt"));
SoHAnimSite995->setDEF(QString("Joe_r_olecranon_pt"));
SoHAnimSite995->setTranslation(new float[]{-0.2,1.1388,-0.08});
SoShape* SoShape996 = new SoShape();
SoShape996->setUSE(QString("sitebox"));
SoHAnimSite995->addChild(*SoShape996);

SoHAnimSegment976->addChild(*SoHAnimSite995);

SoHAnimJoint975->addChildren(*SoHAnimSegment976);

SoHAnimJoint* SoHAnimJoint997 = new SoHAnimJoint();
SoHAnimJoint997->X3DNode::setName(QString("r_radiocarpal"));
SoHAnimJoint997->setDEF(QString("Joe_r_radiocarpal"));
SoHAnimJoint997->setCenter(new float[]{-0.2,0.89,-0.04});
SoHAnimJoint997->setSkinCoordIndex(new int32_t[]{235,236,237,238,239,240,241,242}, 8);
SoHAnimJoint997->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 8);
SoHAnimSegment* SoHAnimSegment998 = new SoHAnimSegment();
SoHAnimSegment998->X3DNode::setName(QString("r_carpal"));
SoHAnimSegment998->setDEF(QString("Joe_r_carpal"));
SoShape* SoShape999 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1000 = new SoVRMLAppearance();
SoVRMLAppearance1000->setUSE(QString("SegmentLine"));
SoShape999->addChild(*SoVRMLAppearance1000);

SoIndexedLineSet* SoIndexedLineSet1001 = new SoIndexedLineSet();
SoIndexedLineSet1001->setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1}, 15);
SoCoordinate* SoCoordinate1002 = new SoCoordinate();
SoCoordinate1002->setPoint(new float[]{-0.2,0.89,-0.04,-0.2,0.85,0.0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085}, 18);
SoIndexedLineSet1001->setCoord(*SoCoordinate1002);

SoShape999->setGeometry(*SoIndexedLineSet1001);

SoHAnimSegment998->addChild(*SoShape999);

SoTransform* SoTransform1003 = new SoTransform();
SoTransform1003->setTranslation(new float[]{-0.2,0.89,-0.04});
SoShape* SoShape1004 = new SoShape();
SoShape1004->setUSE(QString("jointbox"));
SoTransform1003->addChild(*SoShape1004);

SoHAnimSegment998->addChild(*SoTransform1003);

SoHAnimSite* SoHAnimSite1005 = new SoHAnimSite();
SoHAnimSite1005->X3DNode::setName(QString("r_ulnar_styloid_pt"));
SoHAnimSite1005->setDEF(QString("Joe_r_ulnar_styloid_pt"));
SoHAnimSite1005->setTranslation(new float[]{-0.2,0.9,-0.085});
SoShape* SoShape1006 = new SoShape();
SoShape1006->setUSE(QString("sitebox"));
SoHAnimSite1005->addChild(*SoShape1006);

SoHAnimSegment998->addChild(*SoHAnimSite1005);

SoHAnimJoint997->addChildren(*SoHAnimSegment998);

SoHAnimJoint* SoHAnimJoint1007 = new SoHAnimJoint();
SoHAnimJoint1007->X3DNode::setName(QString("r_carpometacarpal_1"));
SoHAnimJoint1007->setDEF(QString("Joe_r_carpometacarpal_1"));
SoHAnimJoint1007->setCenter(new float[]{-0.2,0.85,0.0});
SoHAnimJoint1007->setSkinCoordIndex(new int32_t[]{243,244}, 2);
SoHAnimJoint1007->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1008 = new SoHAnimSegment();
SoHAnimSegment1008->X3DNode::setName(QString("r_metacarpal_1"));
SoHAnimSegment1008->setDEF(QString("Joe_r_metacarpal_1"));
SoShape* SoShape1009 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1010 = new SoVRMLAppearance();
SoVRMLAppearance1010->setUSE(QString("SegmentLine"));
SoShape1009->addChild(*SoVRMLAppearance1010);

SoIndexedLineSet* SoIndexedLineSet1011 = new SoIndexedLineSet();
SoIndexedLineSet1011->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1012 = new SoCoordinate();
SoCoordinate1012->setPoint(new float[]{-0.2,0.85,0.0,-0.2,0.82,0.03}, 6);
SoIndexedLineSet1011->setCoord(*SoCoordinate1012);

SoShape1009->setGeometry(*SoIndexedLineSet1011);

SoHAnimSegment1008->addChild(*SoShape1009);

SoTransform* SoTransform1013 = new SoTransform();
SoTransform1013->setTranslation(new float[]{-0.2,0.85,0.0});
SoShape* SoShape1014 = new SoShape();
SoShape1014->setUSE(QString("jointbox"));
SoTransform1013->addChild(*SoShape1014);

SoHAnimSegment1008->addChild(*SoTransform1013);

SoHAnimJoint1007->addChildren(*SoHAnimSegment1008);

SoHAnimJoint* SoHAnimJoint1015 = new SoHAnimJoint();
SoHAnimJoint1015->X3DNode::setName(QString("r_metacarpophalangeal_1"));
SoHAnimJoint1015->setDEF(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimJoint1015->setCenter(new float[]{-0.2,0.82,0.03});
SoHAnimJoint1015->setSkinCoordIndex(new int32_t[]{254,255,256,257,258,259}, 6);
SoHAnimJoint1015->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0}, 6);
SoHAnimSegment* SoHAnimSegment1016 = new SoHAnimSegment();
SoHAnimSegment1016->X3DNode::setName(QString("r_carpal_proximal_phalanx_1"));
SoHAnimSegment1016->setDEF(QString("Joe_r_carpal_proximal_phalanx_1"));
SoShape* SoShape1017 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1018 = new SoVRMLAppearance();
SoVRMLAppearance1018->setUSE(QString("SegmentLine"));
SoShape1017->addChild(*SoVRMLAppearance1018);

SoIndexedLineSet* SoIndexedLineSet1019 = new SoIndexedLineSet();
SoIndexedLineSet1019->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1020 = new SoCoordinate();
SoCoordinate1020->setPoint(new float[]{-0.2,0.82,0.03,-0.2,0.8,0.05}, 6);
SoIndexedLineSet1019->setCoord(*SoCoordinate1020);

SoShape1017->setGeometry(*SoIndexedLineSet1019);

SoHAnimSegment1016->addChild(*SoShape1017);

SoTransform* SoTransform1021 = new SoTransform();
SoTransform1021->setTranslation(new float[]{-0.2,0.82,0.03});
SoShape* SoShape1022 = new SoShape();
SoShape1022->setUSE(QString("jointbox"));
SoTransform1021->addChild(*SoShape1022);

SoHAnimSegment1016->addChild(*SoTransform1021);

SoHAnimJoint1015->addChildren(*SoHAnimSegment1016);

SoHAnimJoint* SoHAnimJoint1023 = new SoHAnimJoint();
SoHAnimJoint1023->X3DNode::setName(QString("r_carpal_interphalangeal_1"));
SoHAnimJoint1023->setDEF(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimJoint1023->setCenter(new float[]{-0.2,0.8,0.05});
SoHAnimJoint1023->setSkinCoordIndex(new int32_t[]{260,261,262,263,264,265,266,267,268}, 9);
SoHAnimJoint1023->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1024 = new SoHAnimSegment();
SoHAnimSegment1024->X3DNode::setName(QString("r_carpal_distal_phalanx_1"));
SoHAnimSegment1024->setDEF(QString("Joe_r_carpal_distal_phalanx_1"));
SoShape* SoShape1025 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1026 = new SoVRMLAppearance();
SoVRMLAppearance1026->setUSE(QString("SegmentLine"));
SoShape1025->addChild(*SoVRMLAppearance1026);

SoIndexedLineSet* SoIndexedLineSet1027 = new SoIndexedLineSet();
SoIndexedLineSet1027->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1028 = new SoCoordinate();
SoCoordinate1028->setPoint(new float[]{-0.2,0.8,0.05,-0.2,0.78,0.07}, 6);
SoIndexedLineSet1027->setCoord(*SoCoordinate1028);

SoShape1025->setGeometry(*SoIndexedLineSet1027);

SoHAnimSegment1024->addChild(*SoShape1025);

SoTransform* SoTransform1029 = new SoTransform();
SoTransform1029->setDEF(QString("Thumbnail"));
SoTransform1029->setTranslation(new float[]{-0.2,0.785,0.075});
SoShape* SoShape1030 = new SoShape();
SoShape1030->setUSE(QString("skinsphere"));
SoTransform1029->addChild(*SoShape1030);

SoHAnimSegment1024->addChild(*SoTransform1029);

SoTransform* SoTransform1031 = new SoTransform();
SoTransform1031->setTranslation(new float[]{-0.2,0.8,0.05});
SoShape* SoShape1032 = new SoShape();
SoShape1032->setUSE(QString("jointbox"));
SoTransform1031->addChild(*SoShape1032);

SoHAnimSegment1024->addChild(*SoTransform1031);

SoHAnimSite* SoHAnimSite1033 = new SoHAnimSite();
SoHAnimSite1033->X3DNode::setName(QString("r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1033->setDEF(QString("Joe_r_carpal_distal_phalanx_1_tip"));
SoHAnimSite1033->setTranslation(new float[]{-0.2,0.78,0.07});
SoShape* SoShape1034 = new SoShape();
SoShape1034->setUSE(QString("sitebox"));
SoHAnimSite1033->addChild(*SoShape1034);

SoHAnimSegment1024->addChild(*SoHAnimSite1033);

SoHAnimJoint1023->addChildren(*SoHAnimSegment1024);

SoHAnimJoint1015->addChildren(*SoHAnimJoint1023);

SoHAnimJoint1007->addChildren(*SoHAnimJoint1015);

SoHAnimJoint997->addChildren(*SoHAnimJoint1007);

SoHAnimJoint* SoHAnimJoint1035 = new SoHAnimJoint();
SoHAnimJoint1035->X3DNode::setName(QString("r_carpometacarpal_2"));
SoHAnimJoint1035->setDEF(QString("Joe_r_carpometacarpal_2"));
SoHAnimJoint1035->setCenter(new float[]{-0.2,0.84,-0.015});
SoHAnimJoint1035->setSkinCoordIndex(new int32_t[]{245,246}, 2);
SoHAnimJoint1035->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1036 = new SoHAnimSegment();
SoHAnimSegment1036->X3DNode::setName(QString("r_metacarpal_2"));
SoHAnimSegment1036->setDEF(QString("Joe_r_metacarpal_2"));
SoShape* SoShape1037 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1038 = new SoVRMLAppearance();
SoVRMLAppearance1038->setUSE(QString("SegmentLine"));
SoShape1037->addChild(*SoVRMLAppearance1038);

SoIndexedLineSet* SoIndexedLineSet1039 = new SoIndexedLineSet();
SoIndexedLineSet1039->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1040 = new SoCoordinate();
SoCoordinate1040->setPoint(new float[]{-0.2,0.84,-0.015,-0.2,0.793,-0.015}, 6);
SoIndexedLineSet1039->setCoord(*SoCoordinate1040);

SoShape1037->setGeometry(*SoIndexedLineSet1039);

SoHAnimSegment1036->addChild(*SoShape1037);

SoTransform* SoTransform1041 = new SoTransform();
SoTransform1041->setTranslation(new float[]{-0.2,0.84,-0.015});
SoShape* SoShape1042 = new SoShape();
SoShape1042->setUSE(QString("jointbox"));
SoTransform1041->addChild(*SoShape1042);

SoHAnimSegment1036->addChild(*SoTransform1041);

SoHAnimSite* SoHAnimSite1043 = new SoHAnimSite();
SoHAnimSite1043->X3DNode::setName(QString("r_metacarpal_phalanx_2_pt"));
SoHAnimSite1043->setDEF(QString("Joe_r_metacarpal_phalanx_2_pt"));
SoHAnimSite1043->setTranslation(new float[]{-0.2,0.793,-0.005});
SoShape* SoShape1044 = new SoShape();
SoShape1044->setUSE(QString("sitebox"));
SoHAnimSite1043->addChild(*SoShape1044);

SoHAnimSegment1036->addChild(*SoHAnimSite1043);

SoHAnimJoint1035->addChildren(*SoHAnimSegment1036);

SoHAnimJoint* SoHAnimJoint1045 = new SoHAnimJoint();
SoHAnimJoint1045->X3DNode::setName(QString("r_metacarpophalangeal_2"));
SoHAnimJoint1045->setDEF(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimJoint1045->setCenter(new float[]{-0.2,0.793,-0.015});
SoHAnimJoint1045->setSkinCoordIndex(new int32_t[]{254,255,256,269,270,271,279}, 7);
SoHAnimJoint1045->setSkinCoordWeight(new float[]{0.5,0.5,0.5,1.0,1.0,1.0,0.5}, 7);
SoHAnimSegment* SoHAnimSegment1046 = new SoHAnimSegment();
SoHAnimSegment1046->X3DNode::setName(QString("r_carpal_proximal_phalanx_2"));
SoHAnimSegment1046->setDEF(QString("Joe_r_carpal_proximal_phalanx_2"));
SoShape* SoShape1047 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1048 = new SoVRMLAppearance();
SoVRMLAppearance1048->setUSE(QString("SegmentLine"));
SoShape1047->addChild(*SoVRMLAppearance1048);

SoIndexedLineSet* SoIndexedLineSet1049 = new SoIndexedLineSet();
SoIndexedLineSet1049->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1050 = new SoCoordinate();
SoCoordinate1050->setPoint(new float[]{-0.2,0.793,-0.015,-0.2,0.745,-0.015}, 6);
SoIndexedLineSet1049->setCoord(*SoCoordinate1050);

SoShape1047->setGeometry(*SoIndexedLineSet1049);

SoHAnimSegment1046->addChild(*SoShape1047);

SoTransform* SoTransform1051 = new SoTransform();
SoTransform1051->setTranslation(new float[]{-0.2,0.793,-0.015});
SoShape* SoShape1052 = new SoShape();
SoShape1052->setUSE(QString("jointbox"));
SoTransform1051->addChild(*SoShape1052);

SoHAnimSegment1046->addChild(*SoTransform1051);

SoHAnimJoint1045->addChildren(*SoHAnimSegment1046);

SoHAnimJoint* SoHAnimJoint1053 = new SoHAnimJoint();
SoHAnimJoint1053->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1053->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimJoint1053->setCenter(new float[]{-0.2,0.745,-0.015});
SoHAnimJoint1053->setSkinCoordIndex(new int32_t[]{282,283,284,285}, 4);
SoHAnimJoint1053->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1054 = new SoHAnimSegment();
SoHAnimSegment1054->X3DNode::setName(QString("r_carpal_middle_phalanx_2"));
SoHAnimSegment1054->setDEF(QString("Joe_r_carpal_middle_phalanx_2"));
SoShape* SoShape1055 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1056 = new SoVRMLAppearance();
SoVRMLAppearance1056->setUSE(QString("SegmentLine"));
SoShape1055->addChild(*SoVRMLAppearance1056);

SoIndexedLineSet* SoIndexedLineSet1057 = new SoIndexedLineSet();
SoIndexedLineSet1057->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1058 = new SoCoordinate();
SoCoordinate1058->setPoint(new float[]{-0.2,0.745,-0.015,-0.2,0.72,-0.015}, 6);
SoIndexedLineSet1057->setCoord(*SoCoordinate1058);

SoShape1055->setGeometry(*SoIndexedLineSet1057);

SoHAnimSegment1054->addChild(*SoShape1055);

SoTransform* SoTransform1059 = new SoTransform();
SoTransform1059->setTranslation(new float[]{-0.2,0.745,-0.015});
SoShape* SoShape1060 = new SoShape();
SoShape1060->setUSE(QString("jointbox"));
SoTransform1059->addChild(*SoShape1060);

SoHAnimSegment1054->addChild(*SoTransform1059);

SoHAnimJoint1053->addChildren(*SoHAnimSegment1054);

SoHAnimJoint* SoHAnimJoint1061 = new SoHAnimJoint();
SoHAnimJoint1061->X3DNode::setName(QString("r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1061->setDEF(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimJoint1061->setCenter(new float[]{-0.2,0.72,-0.015});
SoHAnimJoint1061->setSkinCoordIndex(new int32_t[]{286,287,288,289,290,291,292,293,294}, 9);
SoHAnimJoint1061->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1062 = new SoHAnimSegment();
SoHAnimSegment1062->X3DNode::setName(QString("r_carpal_distal_phalanx_2"));
SoHAnimSegment1062->setDEF(QString("Joe_r_carpal_distal_phalanx_2"));
SoShape* SoShape1063 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1064 = new SoVRMLAppearance();
SoVRMLAppearance1064->setUSE(QString("SegmentLine"));
SoShape1063->addChild(*SoVRMLAppearance1064);

SoIndexedLineSet* SoIndexedLineSet1065 = new SoIndexedLineSet();
SoIndexedLineSet1065->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1066 = new SoCoordinate();
SoCoordinate1066->setPoint(new float[]{-0.2,0.72,-0.015,-0.2,0.695,-0.015}, 6);
SoIndexedLineSet1065->setCoord(*SoCoordinate1066);

SoShape1063->setGeometry(*SoIndexedLineSet1065);

SoHAnimSegment1062->addChild(*SoShape1063);

SoTransform* SoTransform1067 = new SoTransform();
SoTransform1067->setTranslation(new float[]{-0.2,0.72,-0.015});
SoShape* SoShape1068 = new SoShape();
SoShape1068->setUSE(QString("jointbox"));
SoTransform1067->addChild(*SoShape1068);

SoHAnimSegment1062->addChild(*SoTransform1067);

SoHAnimSite* SoHAnimSite1069 = new SoHAnimSite();
SoHAnimSite1069->X3DNode::setName(QString("r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1069->setDEF(QString("Joe_r_carpal_distal_phalanx_2_tip"));
SoHAnimSite1069->setTranslation(new float[]{-0.2,0.695,-0.015});
SoShape* SoShape1070 = new SoShape();
SoShape1070->setUSE(QString("sitebox"));
SoHAnimSite1069->addChild(*SoShape1070);

SoHAnimSegment1062->addChild(*SoHAnimSite1069);

SoHAnimJoint1061->addChildren(*SoHAnimSegment1062);

SoHAnimJoint1053->addChildren(*SoHAnimJoint1061);

SoHAnimJoint1045->addChildren(*SoHAnimJoint1053);

SoHAnimJoint1035->addChildren(*SoHAnimJoint1045);

SoHAnimJoint997->addChildren(*SoHAnimJoint1035);

SoHAnimJoint* SoHAnimJoint1071 = new SoHAnimJoint();
SoHAnimJoint1071->X3DNode::setName(QString("r_carpometacarpal_3"));
SoHAnimJoint1071->setDEF(QString("Joe_r_carpometacarpal_3"));
SoHAnimJoint1071->setCenter(new float[]{-0.2,0.835,-0.04});
SoHAnimJoint1071->setSkinCoordIndex(new int32_t[]{247,248}, 2);
SoHAnimJoint1071->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1072 = new SoHAnimSegment();
SoHAnimSegment1072->X3DNode::setName(QString("r_metacarpal_3"));
SoHAnimSegment1072->setDEF(QString("Joe_r_metacarpal_3"));
SoShape* SoShape1073 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1074 = new SoVRMLAppearance();
SoVRMLAppearance1074->setUSE(QString("SegmentLine"));
SoShape1073->addChild(*SoVRMLAppearance1074);

SoIndexedLineSet* SoIndexedLineSet1075 = new SoIndexedLineSet();
SoIndexedLineSet1075->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1076 = new SoCoordinate();
SoCoordinate1076->setPoint(new float[]{-0.2,0.835,-0.04,-0.2,0.788,-0.04}, 6);
SoIndexedLineSet1075->setCoord(*SoCoordinate1076);

SoShape1073->setGeometry(*SoIndexedLineSet1075);

SoHAnimSegment1072->addChild(*SoShape1073);

SoTransform* SoTransform1077 = new SoTransform();
SoTransform1077->setTranslation(new float[]{-0.2,0.835,-0.04});
SoShape* SoShape1078 = new SoShape();
SoShape1078->setUSE(QString("jointbox"));
SoTransform1077->addChild(*SoShape1078);

SoHAnimSegment1072->addChild(*SoTransform1077);

SoHAnimJoint1071->addChildren(*SoHAnimSegment1072);

SoHAnimJoint* SoHAnimJoint1079 = new SoHAnimJoint();
SoHAnimJoint1079->X3DNode::setName(QString("r_metacarpophalangeal_3"));
SoHAnimJoint1079->setDEF(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimJoint1079->setCenter(new float[]{-0.2,0.788,-0.04});
SoHAnimJoint1079->setSkinCoordIndex(new int32_t[]{272,273,279,280}, 4);
SoHAnimJoint1079->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1080 = new SoHAnimSegment();
SoHAnimSegment1080->X3DNode::setName(QString("r_carpal_proximal_phalanx_3"));
SoHAnimSegment1080->setDEF(QString("Joe_r_carpal_proximal_phalanx_3"));
SoShape* SoShape1081 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1082 = new SoVRMLAppearance();
SoVRMLAppearance1082->setUSE(QString("SegmentLine"));
SoShape1081->addChild(*SoVRMLAppearance1082);

SoIndexedLineSet* SoIndexedLineSet1083 = new SoIndexedLineSet();
SoIndexedLineSet1083->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1084 = new SoCoordinate();
SoCoordinate1084->setPoint(new float[]{-0.2,0.788,-0.04,-0.2,0.74,-0.04}, 6);
SoIndexedLineSet1083->setCoord(*SoCoordinate1084);

SoShape1081->setGeometry(*SoIndexedLineSet1083);

SoHAnimSegment1080->addChild(*SoShape1081);

SoTransform* SoTransform1085 = new SoTransform();
SoTransform1085->setTranslation(new float[]{-0.2,0.788,-0.04});
SoShape* SoShape1086 = new SoShape();
SoShape1086->setUSE(QString("jointbox"));
SoTransform1085->addChild(*SoShape1086);

SoHAnimSegment1080->addChild(*SoTransform1085);

SoHAnimJoint1079->addChildren(*SoHAnimSegment1080);

SoHAnimJoint* SoHAnimJoint1087 = new SoHAnimJoint();
SoHAnimJoint1087->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1087->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimJoint1087->setCenter(new float[]{-0.2,0.74,-0.04});
SoHAnimJoint1087->setSkinCoordIndex(new int32_t[]{295,296,297,298}, 4);
SoHAnimJoint1087->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1088 = new SoHAnimSegment();
SoHAnimSegment1088->X3DNode::setName(QString("r_carpal_middle_phalanx_3"));
SoHAnimSegment1088->setDEF(QString("Joe_r_carpal_middle_phalanx_3"));
SoShape* SoShape1089 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1090 = new SoVRMLAppearance();
SoVRMLAppearance1090->setUSE(QString("SegmentLine"));
SoShape1089->addChild(*SoVRMLAppearance1090);

SoIndexedLineSet* SoIndexedLineSet1091 = new SoIndexedLineSet();
SoIndexedLineSet1091->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1092 = new SoCoordinate();
SoCoordinate1092->setPoint(new float[]{-0.2,0.74,-0.04,-0.2,0.7142,-0.04}, 6);
SoIndexedLineSet1091->setCoord(*SoCoordinate1092);

SoShape1089->setGeometry(*SoIndexedLineSet1091);

SoHAnimSegment1088->addChild(*SoShape1089);

SoTransform* SoTransform1093 = new SoTransform();
SoTransform1093->setTranslation(new float[]{-0.2,0.74,-0.04});
SoShape* SoShape1094 = new SoShape();
SoShape1094->setUSE(QString("jointbox"));
SoTransform1093->addChild(*SoShape1094);

SoHAnimSegment1088->addChild(*SoTransform1093);

SoHAnimJoint1087->addChildren(*SoHAnimSegment1088);

SoHAnimJoint* SoHAnimJoint1095 = new SoHAnimJoint();
SoHAnimJoint1095->X3DNode::setName(QString("r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1095->setDEF(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimJoint1095->setCenter(new float[]{-0.2,0.7142,-0.04});
SoHAnimJoint1095->setSkinCoordIndex(new int32_t[]{299,300,301,302,303,304,305,306,307}, 9);
SoHAnimJoint1095->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1096 = new SoHAnimSegment();
SoHAnimSegment1096->X3DNode::setName(QString("r_carpal_distal_phalanx_3"));
SoHAnimSegment1096->setDEF(QString("Joe_r_carpal_distal_phalanx_3"));
SoShape* SoShape1097 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1098 = new SoVRMLAppearance();
SoVRMLAppearance1098->setUSE(QString("SegmentLine"));
SoShape1097->addChild(*SoVRMLAppearance1098);

SoIndexedLineSet* SoIndexedLineSet1099 = new SoIndexedLineSet();
SoIndexedLineSet1099->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1100 = new SoCoordinate();
SoCoordinate1100->setPoint(new float[]{-0.2,0.7142,-0.04,-0.2,0.6758,-0.04}, 6);
SoIndexedLineSet1099->setCoord(*SoCoordinate1100);

SoShape1097->setGeometry(*SoIndexedLineSet1099);

SoHAnimSegment1096->addChild(*SoShape1097);

SoTransform* SoTransform1101 = new SoTransform();
SoTransform1101->setTranslation(new float[]{-0.2,0.7142,-0.04});
SoShape* SoShape1102 = new SoShape();
SoShape1102->setUSE(QString("jointbox"));
SoTransform1101->addChild(*SoShape1102);

SoHAnimSegment1096->addChild(*SoTransform1101);

SoHAnimSite* SoHAnimSite1103 = new SoHAnimSite();
SoHAnimSite1103->X3DNode::setName(QString("r_dactylion_pt"));
SoHAnimSite1103->setDEF(QString("Joe_r_dactylion_pt"));
SoHAnimSite1103->setTranslation(new float[]{-0.2,0.68,-0.04});
SoShape* SoShape1104 = new SoShape();
SoShape1104->setUSE(QString("sitebox"));
SoHAnimSite1103->addChild(*SoShape1104);

SoHAnimSegment1096->addChild(*SoHAnimSite1103);

SoHAnimSite* SoHAnimSite1105 = new SoHAnimSite();
SoHAnimSite1105->X3DNode::setName(QString("r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1105->setDEF(QString("Joe_r_carpal_distal_phalanx_3_tip"));
SoHAnimSite1105->setTranslation(new float[]{-0.2,0.68,-0.04});
SoShape* SoShape1106 = new SoShape();
SoShape1106->setUSE(QString("sitebox"));
SoHAnimSite1105->addChild(*SoShape1106);

SoHAnimSegment1096->addChild(*SoHAnimSite1105);

SoHAnimJoint1095->addChildren(*SoHAnimSegment1096);

SoHAnimJoint1087->addChildren(*SoHAnimJoint1095);

SoHAnimJoint1079->addChildren(*SoHAnimJoint1087);

SoHAnimJoint1071->addChildren(*SoHAnimJoint1079);

SoHAnimJoint997->addChildren(*SoHAnimJoint1071);

SoHAnimJoint* SoHAnimJoint1107 = new SoHAnimJoint();
SoHAnimJoint1107->X3DNode::setName(QString("r_carpometacarpal_4"));
SoHAnimJoint1107->setDEF(QString("Joe_r_carpometacarpal_4"));
SoHAnimJoint1107->setCenter(new float[]{-0.2,0.835,-0.065});
SoHAnimJoint1107->setSkinCoordIndex(new int32_t[]{249,250}, 2);
SoHAnimJoint1107->setSkinCoordWeight(new float[]{1.0,1.0}, 2);
SoHAnimSegment* SoHAnimSegment1108 = new SoHAnimSegment();
SoHAnimSegment1108->X3DNode::setName(QString("r_metacarpal_4"));
SoHAnimSegment1108->setDEF(QString("Joe_r_metacarpal_4"));
SoShape* SoShape1109 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1110 = new SoVRMLAppearance();
SoVRMLAppearance1110->setUSE(QString("SegmentLine"));
SoShape1109->addChild(*SoVRMLAppearance1110);

SoIndexedLineSet* SoIndexedLineSet1111 = new SoIndexedLineSet();
SoIndexedLineSet1111->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1112 = new SoCoordinate();
SoCoordinate1112->setPoint(new float[]{-0.2,0.835,-0.065,-0.2,0.793,-0.065}, 6);
SoIndexedLineSet1111->setCoord(*SoCoordinate1112);

SoShape1109->setGeometry(*SoIndexedLineSet1111);

SoHAnimSegment1108->addChild(*SoShape1109);

SoTransform* SoTransform1113 = new SoTransform();
SoTransform1113->setTranslation(new float[]{-0.2,0.835,-0.065});
SoShape* SoShape1114 = new SoShape();
SoShape1114->setUSE(QString("jointbox"));
SoTransform1113->addChild(*SoShape1114);

SoHAnimSegment1108->addChild(*SoTransform1113);

SoHAnimJoint1107->addChildren(*SoHAnimSegment1108);

SoHAnimJoint* SoHAnimJoint1115 = new SoHAnimJoint();
SoHAnimJoint1115->X3DNode::setName(QString("r_metacarpophalangeal_4"));
SoHAnimJoint1115->setDEF(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimJoint1115->setCenter(new float[]{-0.2,0.793,-0.065});
SoHAnimJoint1115->setSkinCoordIndex(new int32_t[]{274,275,280,281}, 4);
SoHAnimJoint1115->setSkinCoordWeight(new float[]{1.0,1.0,0.5,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1116 = new SoHAnimSegment();
SoHAnimSegment1116->X3DNode::setName(QString("r_carpal_proximal_phalanx_4"));
SoHAnimSegment1116->setDEF(QString("Joe_r_carpal_proximal_phalanx_4"));
SoShape* SoShape1117 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1118 = new SoVRMLAppearance();
SoVRMLAppearance1118->setUSE(QString("SegmentLine"));
SoShape1117->addChild(*SoVRMLAppearance1118);

SoIndexedLineSet* SoIndexedLineSet1119 = new SoIndexedLineSet();
SoIndexedLineSet1119->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1120 = new SoCoordinate();
SoCoordinate1120->setPoint(new float[]{-0.2,0.793,-0.065,-0.2,0.74,-0.065}, 6);
SoIndexedLineSet1119->setCoord(*SoCoordinate1120);

SoShape1117->setGeometry(*SoIndexedLineSet1119);

SoHAnimSegment1116->addChild(*SoShape1117);

SoTransform* SoTransform1121 = new SoTransform();
SoTransform1121->setTranslation(new float[]{-0.2,0.793,-0.065});
SoShape* SoShape1122 = new SoShape();
SoShape1122->setUSE(QString("jointbox"));
SoTransform1121->addChild(*SoShape1122);

SoHAnimSegment1116->addChild(*SoTransform1121);

SoHAnimJoint1115->addChildren(*SoHAnimSegment1116);

SoHAnimJoint* SoHAnimJoint1123 = new SoHAnimJoint();
SoHAnimJoint1123->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1123->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimJoint1123->setCenter(new float[]{-0.2,0.74,-0.065});
SoHAnimJoint1123->setSkinCoordIndex(new int32_t[]{308,309,310,311}, 4);
SoHAnimJoint1123->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1124 = new SoHAnimSegment();
SoHAnimSegment1124->X3DNode::setName(QString("r_carpal_middle_phalanx_4"));
SoHAnimSegment1124->setDEF(QString("Joe_r_carpal_middle_phalanx_4"));
SoShape* SoShape1125 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1126 = new SoVRMLAppearance();
SoVRMLAppearance1126->setUSE(QString("SegmentLine"));
SoShape1125->addChild(*SoVRMLAppearance1126);

SoIndexedLineSet* SoIndexedLineSet1127 = new SoIndexedLineSet();
SoIndexedLineSet1127->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1128 = new SoCoordinate();
SoCoordinate1128->setPoint(new float[]{-0.2,0.74,-0.065,-0.2,0.7177,-0.065}, 6);
SoIndexedLineSet1127->setCoord(*SoCoordinate1128);

SoShape1125->setGeometry(*SoIndexedLineSet1127);

SoHAnimSegment1124->addChild(*SoShape1125);

SoTransform* SoTransform1129 = new SoTransform();
SoTransform1129->setTranslation(new float[]{-0.2,0.74,-0.065});
SoShape* SoShape1130 = new SoShape();
SoShape1130->setUSE(QString("jointbox"));
SoTransform1129->addChild(*SoShape1130);

SoHAnimSegment1124->addChild(*SoTransform1129);

SoHAnimJoint1123->addChildren(*SoHAnimSegment1124);

SoHAnimJoint* SoHAnimJoint1131 = new SoHAnimJoint();
SoHAnimJoint1131->X3DNode::setName(QString("r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1131->setDEF(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimJoint1131->setCenter(new float[]{-0.2,0.7177,-0.065});
SoHAnimJoint1131->setSkinCoordIndex(new int32_t[]{312,313,314,315,316,317,318,319,320}, 9);
SoHAnimJoint1131->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1132 = new SoHAnimSegment();
SoHAnimSegment1132->X3DNode::setName(QString("r_carpal_distal_phalanx_4"));
SoHAnimSegment1132->setDEF(QString("Joe_r_carpal_distal_phalanx_4"));
SoShape* SoShape1133 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1134 = new SoVRMLAppearance();
SoVRMLAppearance1134->setUSE(QString("SegmentLine"));
SoShape1133->addChild(*SoVRMLAppearance1134);

SoIndexedLineSet* SoIndexedLineSet1135 = new SoIndexedLineSet();
SoIndexedLineSet1135->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1136 = new SoCoordinate();
SoCoordinate1136->setPoint(new float[]{-0.2,0.7177,-0.065,-0.2,0.695,-0.065}, 6);
SoIndexedLineSet1135->setCoord(*SoCoordinate1136);

SoShape1133->setGeometry(*SoIndexedLineSet1135);

SoHAnimSegment1132->addChild(*SoShape1133);

SoTransform* SoTransform1137 = new SoTransform();
SoTransform1137->setTranslation(new float[]{-0.2,0.7177,-0.065});
SoShape* SoShape1138 = new SoShape();
SoShape1138->setUSE(QString("jointbox"));
SoTransform1137->addChild(*SoShape1138);

SoHAnimSegment1132->addChild(*SoTransform1137);

SoHAnimSite* SoHAnimSite1139 = new SoHAnimSite();
SoHAnimSite1139->X3DNode::setName(QString("r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1139->setDEF(QString("Joe_r_carpal_distal_phalanx_4_tip"));
SoHAnimSite1139->setTranslation(new float[]{-0.2,0.695,-0.065});
SoShape* SoShape1140 = new SoShape();
SoShape1140->setUSE(QString("sitebox"));
SoHAnimSite1139->addChild(*SoShape1140);

SoHAnimSegment1132->addChild(*SoHAnimSite1139);

SoHAnimJoint1131->addChildren(*SoHAnimSegment1132);

SoHAnimJoint1123->addChildren(*SoHAnimJoint1131);

SoHAnimJoint1115->addChildren(*SoHAnimJoint1123);

SoHAnimJoint1107->addChildren(*SoHAnimJoint1115);

SoHAnimJoint997->addChildren(*SoHAnimJoint1107);

SoHAnimJoint* SoHAnimJoint1141 = new SoHAnimJoint();
SoHAnimJoint1141->X3DNode::setName(QString("r_carpometacarpal_5"));
SoHAnimJoint1141->setDEF(QString("Joe_r_carpometacarpal_5"));
SoHAnimJoint1141->setCenter(new float[]{-0.2,0.84,-0.085});
SoHAnimJoint1141->setSkinCoordIndex(new int32_t[]{251,252,253,281}, 4);
SoHAnimJoint1141->setSkinCoordWeight(new float[]{1.0,1.0,1.0,0.5}, 4);
SoHAnimSegment* SoHAnimSegment1142 = new SoHAnimSegment();
SoHAnimSegment1142->X3DNode::setName(QString("r_metacarpal_5"));
SoHAnimSegment1142->setDEF(QString("Joe_r_metacarpal_5"));
SoShape* SoShape1143 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1144 = new SoVRMLAppearance();
SoVRMLAppearance1144->setUSE(QString("SegmentLine"));
SoShape1143->addChild(*SoVRMLAppearance1144);

SoIndexedLineSet* SoIndexedLineSet1145 = new SoIndexedLineSet();
SoIndexedLineSet1145->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1146 = new SoCoordinate();
SoCoordinate1146->setPoint(new float[]{-0.2,0.84,-0.085,-0.2,0.79,-0.085}, 6);
SoIndexedLineSet1145->setCoord(*SoCoordinate1146);

SoShape1143->setGeometry(*SoIndexedLineSet1145);

SoHAnimSegment1142->addChild(*SoShape1143);

SoTransform* SoTransform1147 = new SoTransform();
SoTransform1147->setTranslation(new float[]{-0.2,0.84,-0.085});
SoShape* SoShape1148 = new SoShape();
SoShape1148->setUSE(QString("jointbox"));
SoTransform1147->addChild(*SoShape1148);

SoHAnimSegment1142->addChild(*SoTransform1147);

SoHAnimSite* SoHAnimSite1149 = new SoHAnimSite();
SoHAnimSite1149->X3DNode::setName(QString("r_metacarpal_phalanx_5_pt"));
SoHAnimSite1149->setDEF(QString("Joe_r_metacarpal_phalanx_5_pt"));
SoHAnimSite1149->setTranslation(new float[]{-0.2,0.79,-0.095});
SoShape* SoShape1150 = new SoShape();
SoShape1150->setUSE(QString("sitebox"));
SoHAnimSite1149->addChild(*SoShape1150);

SoHAnimSegment1142->addChild(*SoHAnimSite1149);

SoHAnimJoint1141->addChildren(*SoHAnimSegment1142);

SoHAnimJoint* SoHAnimJoint1151 = new SoHAnimJoint();
SoHAnimJoint1151->X3DNode::setName(QString("r_metacarpophalangeal_5"));
SoHAnimJoint1151->setDEF(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimJoint1151->setCenter(new float[]{-0.2,0.79,-0.085});
SoHAnimJoint1151->setSkinCoordIndex(new int32_t[]{276,277,278}, 3);
SoHAnimJoint1151->setSkinCoordWeight(new float[]{1.0,1.0,1.0}, 3);
SoHAnimSegment* SoHAnimSegment1152 = new SoHAnimSegment();
SoHAnimSegment1152->X3DNode::setName(QString("r_carpal_proximal_phalanx_5"));
SoHAnimSegment1152->setDEF(QString("Joe_r_carpal_proximal_phalanx_5"));
SoShape* SoShape1153 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1154 = new SoVRMLAppearance();
SoVRMLAppearance1154->setUSE(QString("SegmentLine"));
SoShape1153->addChild(*SoVRMLAppearance1154);

SoIndexedLineSet* SoIndexedLineSet1155 = new SoIndexedLineSet();
SoIndexedLineSet1155->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1156 = new SoCoordinate();
SoCoordinate1156->setPoint(new float[]{-0.2,0.79,-0.085,-0.2,0.755,-0.085}, 6);
SoIndexedLineSet1155->setCoord(*SoCoordinate1156);

SoShape1153->setGeometry(*SoIndexedLineSet1155);

SoHAnimSegment1152->addChild(*SoShape1153);

SoTransform* SoTransform1157 = new SoTransform();
SoTransform1157->setTranslation(new float[]{-0.2,0.79,-0.085});
SoShape* SoShape1158 = new SoShape();
SoShape1158->setUSE(QString("jointbox"));
SoTransform1157->addChild(*SoShape1158);

SoHAnimSegment1152->addChild(*SoTransform1157);

SoHAnimJoint1151->addChildren(*SoHAnimSegment1152);

SoHAnimJoint* SoHAnimJoint1159 = new SoHAnimJoint();
SoHAnimJoint1159->X3DNode::setName(QString("r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1159->setDEF(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimJoint1159->setCenter(new float[]{-0.2,0.755,-0.085});
SoHAnimJoint1159->setSkinCoordIndex(new int32_t[]{321,322,323,324}, 4);
SoHAnimJoint1159->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0}, 4);
SoHAnimSegment* SoHAnimSegment1160 = new SoHAnimSegment();
SoHAnimSegment1160->X3DNode::setName(QString("r_carpal_middle_phalanx_5"));
SoHAnimSegment1160->setDEF(QString("Joe_r_carpal_middle_phalanx_5"));
SoShape* SoShape1161 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1162 = new SoVRMLAppearance();
SoVRMLAppearance1162->setUSE(QString("SegmentLine"));
SoShape1161->addChild(*SoVRMLAppearance1162);

SoIndexedLineSet* SoIndexedLineSet1163 = new SoIndexedLineSet();
SoIndexedLineSet1163->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1164 = new SoCoordinate();
SoCoordinate1164->setPoint(new float[]{-0.2,0.755,-0.085,-0.2,0.735,-0.085}, 6);
SoIndexedLineSet1163->setCoord(*SoCoordinate1164);

SoShape1161->setGeometry(*SoIndexedLineSet1163);

SoHAnimSegment1160->addChild(*SoShape1161);

SoTransform* SoTransform1165 = new SoTransform();
SoTransform1165->setTranslation(new float[]{-0.2,0.755,-0.085});
SoShape* SoShape1166 = new SoShape();
SoShape1166->setUSE(QString("jointbox"));
SoTransform1165->addChild(*SoShape1166);

SoHAnimSegment1160->addChild(*SoTransform1165);

SoHAnimJoint1159->addChildren(*SoHAnimSegment1160);

SoHAnimJoint* SoHAnimJoint1167 = new SoHAnimJoint();
SoHAnimJoint1167->X3DNode::setName(QString("r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1167->setDEF(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimJoint1167->setCenter(new float[]{-0.2,0.735,-0.09});
SoHAnimJoint1167->setSkinCoordIndex(new int32_t[]{325,326,327,328,329,330,331,332,333}, 9);
SoHAnimJoint1167->setSkinCoordWeight(new float[]{1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}, 9);
SoHAnimSegment* SoHAnimSegment1168 = new SoHAnimSegment();
SoHAnimSegment1168->X3DNode::setName(QString("r_carpal_distal_phalanx_5"));
SoHAnimSegment1168->setDEF(QString("Joe_r_carpal_distal_phalanx_5"));
SoShape* SoShape1169 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1170 = new SoVRMLAppearance();
SoVRMLAppearance1170->setUSE(QString("SegmentLine"));
SoShape1169->addChild(*SoVRMLAppearance1170);

SoIndexedLineSet* SoIndexedLineSet1171 = new SoIndexedLineSet();
SoIndexedLineSet1171->setCoordIndex(new int32_t[]{0,1,-1}, 3);
SoCoordinate* SoCoordinate1172 = new SoCoordinate();
SoCoordinate1172->setPoint(new float[]{-0.2,0.735,-0.085,-0.2,0.72,-0.085}, 6);
SoIndexedLineSet1171->setCoord(*SoCoordinate1172);

SoShape1169->setGeometry(*SoIndexedLineSet1171);

SoHAnimSegment1168->addChild(*SoShape1169);

SoTransform* SoTransform1173 = new SoTransform();
SoTransform1173->setTranslation(new float[]{-0.2,0.735,-0.085});
SoShape* SoShape1174 = new SoShape();
SoShape1174->setUSE(QString("jointbox"));
SoTransform1173->addChild(*SoShape1174);

SoHAnimSegment1168->addChild(*SoTransform1173);

SoHAnimSite* SoHAnimSite1175 = new SoHAnimSite();
SoHAnimSite1175->X3DNode::setName(QString("r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1175->setDEF(QString("Joe_r_carpal_distal_phalanx_5_tip"));
SoHAnimSite1175->setTranslation(new float[]{-0.2,0.72,-0.085});
SoShape* SoShape1176 = new SoShape();
SoShape1176->setUSE(QString("sitebox"));
SoHAnimSite1175->addChild(*SoShape1176);

SoHAnimSegment1168->addChild(*SoHAnimSite1175);

SoHAnimJoint1167->addChildren(*SoHAnimSegment1168);

SoHAnimJoint1159->addChildren(*SoHAnimJoint1167);

SoHAnimJoint1151->addChildren(*SoHAnimJoint1159);

SoHAnimJoint1141->addChildren(*SoHAnimJoint1151);

SoHAnimJoint997->addChildren(*SoHAnimJoint1141);

SoHAnimJoint975->addChildren(*SoHAnimJoint997);

SoHAnimJoint945->addChildren(*SoHAnimJoint975);

SoHAnimJoint929->addChildren(*SoHAnimJoint945);

SoHAnimJoint919->addChildren(*SoHAnimJoint929);

SoHAnimJoint553->addChildren(*SoHAnimJoint919);

SoHAnimJoint545->addChildren(*SoHAnimJoint553);

SoHAnimJoint537->addChildren(*SoHAnimJoint545);

SoHAnimJoint527->addChildren(*SoHAnimJoint537);

SoHAnimJoint519->addChildren(*SoHAnimJoint527);

SoHAnimJoint511->addChildren(*SoHAnimJoint519);

SoHAnimJoint503->addChildren(*SoHAnimJoint511);

SoHAnimJoint495->addChildren(*SoHAnimJoint503);

SoHAnimJoint483->addChildren(*SoHAnimJoint495);

SoHAnimJoint473->addChildren(*SoHAnimJoint483);

SoHAnimJoint465->addChildren(*SoHAnimJoint473);

SoHAnimJoint457->addChildren(*SoHAnimJoint465);

SoHAnimJoint449->addChildren(*SoHAnimJoint457);

SoHAnimJoint423->addChildren(*SoHAnimJoint449);

SoHAnimJoint415->addChildren(*SoHAnimJoint423);

SoHAnimJoint407->addChildren(*SoHAnimJoint415);

SoHAnimJoint392->addChildren(*SoHAnimJoint407);

SoHAnimJoint78->addChildren(*SoHAnimJoint392);

SoHAnimHumanoid75->setSkeleton(*SoHAnimJoint78);

SoShape* SoShape1177 = new SoShape();
SoShape1177->setDEF(QString("SkinShape"));
SoVRMLAppearance* SoVRMLAppearance1178 = new SoVRMLAppearance();
SoVRMLAppearance1178->setDEF(QString("SkinAppearance"));
SoMaterial* SoMaterial1179 = new SoMaterial();
SoMaterial1179->setDEF(QString("SkinMaterial"));
SoMaterial1179->setAmbientIntensity(0.6);
SoMaterial1179->setDiffuseColor(new float[]{1.0,1.0,1.0});
SoMaterial1179->setShininess(0.6);
SoMaterial1179->setTransparency(0.2);
SoVRMLAppearance1178->addChild(*SoMaterial1179);

SoImageTexture* SoImageTexture1180 = new SoImageTexture();
SoImageTexture1180->setDEF(QString("zBlueSpiralBkg2"));
SoImageTexture1180->setDescription(QString("Blue Spiral Pattern"));
SoImageTexture1180->setUrl(new QString[]{QString("zBlueSpiralBkg2.gif"), QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif")}, 2);
SoVRMLAppearance1178->addChild(*SoImageTexture1180);

SoShape1177->addChild(*SoVRMLAppearance1178);

SoIndexedFaceSet* SoIndexedFaceSet1181 = new SoIndexedFaceSet();
SoIndexedFaceSet1181->setCoordIndex(new int32_t[]{0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1}, 2780);
SoIndexedFaceSet1181->setCreaseAngle(3.1);
SoColor* SoColor1182 = new SoColor();
SoColor1182->setColor(new float[]{1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0}, 2079);
SoIndexedFaceSet1181->setColor(*SoColor1182);

SoCoordinate* SoCoordinate1183 = new SoCoordinate();
SoCoordinate1183->setDEF(QString("TheSkinCoord"));
SoCoordinate1183->setPoint(new float[]{0.0,1.77,0.0,0.0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0.0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0.0,1.625,-0.0925,-0.03,1.46,0.035,0.0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0.0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0.0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.165,0.01,0.12,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0.0,0.05,0.4867,0.0,0.165,0.01,0.12,0.15,0.07,0.0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0.0,0.875,0.0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0.0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0.0,1.41,-0.145,0.0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0.0,0.87,0.0,0.171,0.65,0.0,0.02,0.65,0.0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0.0,-0.02,0.65,0.0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1.0,-0.01,0.225,1.0,-0.07,0.185,1.0,-0.01,0.185,1.0,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0.0,0.21,0.85,0.0,0.1854,0.85,0.0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0.0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1.0,-0.01,-0.225,1.0,-0.07,-0.185,1.0,-0.01,-0.185,1.0,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0.0,-0.21,0.85,0.0,-0.1854,0.85,0.0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0.0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0.0,0.05,0.466,0.0,0.17,0.3,0.0,0.06,0.3,0.0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0.0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0.0,0.07,0.165,0.0,0.07,0.095,0.0,0.07,0.115,0.04,0.13,0.125,0.0,0.12,0.165,0.0,0.12,0.087,0.0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0.0,-0.05,0.466,0.0,-0.17,0.3,0.0,-0.06,0.3,0.0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0.0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0.0,0.07,-0.165,0.0,0.07,-0.095,0.0,0.07,-0.115,0.04,0.13,-0.125,0.0,0.12,-0.165,0.0,0.12,-0.087,0.0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168}, 1170);
SoIndexedFaceSet1181->setCoord(*SoCoordinate1183);

SoShape1177->setGeometry(*SoIndexedFaceSet1181);

SoHAnimHumanoid75->setSkin(*SoShape1177);

SoCoordinate* SoCoordinate1184 = new SoCoordinate();
SoCoordinate1184->setUSE(QString("TheSkinCoord"));
SoHAnimHumanoid75->setSkinCoord(*SoCoordinate1184);

SoHAnimJoint* SoHAnimJoint1185 = new SoHAnimJoint();
SoHAnimJoint1185->setUSE(QString("Joe_humanoid_root"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1185);

SoHAnimJoint* SoHAnimJoint1186 = new SoHAnimJoint();
SoHAnimJoint1186->setUSE(QString("Joe_sacroiliac"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1186);

SoHAnimJoint* SoHAnimJoint1187 = new SoHAnimJoint();
SoHAnimJoint1187->setUSE(QString("Joe_vl5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1187);

SoHAnimJoint* SoHAnimJoint1188 = new SoHAnimJoint();
SoHAnimJoint1188->setUSE(QString("Joe_vl4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1188);

SoHAnimJoint* SoHAnimJoint1189 = new SoHAnimJoint();
SoHAnimJoint1189->setUSE(QString("Joe_vl3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1189);

SoHAnimJoint* SoHAnimJoint1190 = new SoHAnimJoint();
SoHAnimJoint1190->setUSE(QString("Joe_vl2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1190);

SoHAnimJoint* SoHAnimJoint1191 = new SoHAnimJoint();
SoHAnimJoint1191->setUSE(QString("Joe_vl1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1191);

SoHAnimJoint* SoHAnimJoint1192 = new SoHAnimJoint();
SoHAnimJoint1192->setUSE(QString("Joe_vt12"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1192);

SoHAnimJoint* SoHAnimJoint1193 = new SoHAnimJoint();
SoHAnimJoint1193->setUSE(QString("Joe_vt11"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1193);

SoHAnimJoint* SoHAnimJoint1194 = new SoHAnimJoint();
SoHAnimJoint1194->setUSE(QString("Joe_vt10"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1194);

SoHAnimJoint* SoHAnimJoint1195 = new SoHAnimJoint();
SoHAnimJoint1195->setUSE(QString("Joe_vt9"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1195);

SoHAnimJoint* SoHAnimJoint1196 = new SoHAnimJoint();
SoHAnimJoint1196->setUSE(QString("Joe_vt8"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1196);

SoHAnimJoint* SoHAnimJoint1197 = new SoHAnimJoint();
SoHAnimJoint1197->setUSE(QString("Joe_vt7"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1197);

SoHAnimJoint* SoHAnimJoint1198 = new SoHAnimJoint();
SoHAnimJoint1198->setUSE(QString("Joe_vt6"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1198);

SoHAnimJoint* SoHAnimJoint1199 = new SoHAnimJoint();
SoHAnimJoint1199->setUSE(QString("Joe_vt5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1199);

SoHAnimJoint* SoHAnimJoint1200 = new SoHAnimJoint();
SoHAnimJoint1200->setUSE(QString("Joe_vt4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1200);

SoHAnimJoint* SoHAnimJoint1201 = new SoHAnimJoint();
SoHAnimJoint1201->setUSE(QString("Joe_vt3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1201);

SoHAnimJoint* SoHAnimJoint1202 = new SoHAnimJoint();
SoHAnimJoint1202->setUSE(QString("Joe_vt2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1202);

SoHAnimJoint* SoHAnimJoint1203 = new SoHAnimJoint();
SoHAnimJoint1203->setUSE(QString("Joe_vt1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1203);

SoHAnimJoint* SoHAnimJoint1204 = new SoHAnimJoint();
SoHAnimJoint1204->setUSE(QString("Joe_vc7"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1204);

SoHAnimJoint* SoHAnimJoint1205 = new SoHAnimJoint();
SoHAnimJoint1205->setUSE(QString("Joe_vc6"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1205);

SoHAnimJoint* SoHAnimJoint1206 = new SoHAnimJoint();
SoHAnimJoint1206->setUSE(QString("Joe_vc5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1206);

SoHAnimJoint* SoHAnimJoint1207 = new SoHAnimJoint();
SoHAnimJoint1207->setUSE(QString("Joe_vc4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1207);

SoHAnimJoint* SoHAnimJoint1208 = new SoHAnimJoint();
SoHAnimJoint1208->setUSE(QString("Joe_vc3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1208);

SoHAnimJoint* SoHAnimJoint1209 = new SoHAnimJoint();
SoHAnimJoint1209->setUSE(QString("Joe_vc2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1209);

SoHAnimJoint* SoHAnimJoint1210 = new SoHAnimJoint();
SoHAnimJoint1210->setUSE(QString("Joe_vc1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1210);

SoHAnimJoint* SoHAnimJoint1211 = new SoHAnimJoint();
SoHAnimJoint1211->setUSE(QString("Joe_skullbase"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1211);

SoHAnimJoint* SoHAnimJoint1212 = new SoHAnimJoint();
SoHAnimJoint1212->setUSE(QString("Joe_l_acromioclavicular"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1212);

SoHAnimJoint* SoHAnimJoint1213 = new SoHAnimJoint();
SoHAnimJoint1213->setUSE(QString("Joe_r_acromioclavicular"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1213);

SoHAnimJoint* SoHAnimJoint1214 = new SoHAnimJoint();
SoHAnimJoint1214->setUSE(QString("Joe_l_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1214);

SoHAnimJoint* SoHAnimJoint1215 = new SoHAnimJoint();
SoHAnimJoint1215->setUSE(QString("Joe_r_carpal_distal_interphalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1215);

SoHAnimJoint* SoHAnimJoint1216 = new SoHAnimJoint();
SoHAnimJoint1216->setUSE(QString("Joe_l_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1216);

SoHAnimJoint* SoHAnimJoint1217 = new SoHAnimJoint();
SoHAnimJoint1217->setUSE(QString("Joe_r_carpal_distal_interphalangeal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1217);

SoHAnimJoint* SoHAnimJoint1218 = new SoHAnimJoint();
SoHAnimJoint1218->setUSE(QString("Joe_l_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1218);

SoHAnimJoint* SoHAnimJoint1219 = new SoHAnimJoint();
SoHAnimJoint1219->setUSE(QString("Joe_r_carpal_distal_interphalangeal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1219);

SoHAnimJoint* SoHAnimJoint1220 = new SoHAnimJoint();
SoHAnimJoint1220->setUSE(QString("Joe_l_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1220);

SoHAnimJoint* SoHAnimJoint1221 = new SoHAnimJoint();
SoHAnimJoint1221->setUSE(QString("Joe_r_carpal_distal_interphalangeal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1221);

SoHAnimJoint* SoHAnimJoint1222 = new SoHAnimJoint();
SoHAnimJoint1222->setUSE(QString("Joe_l_carpal_interphalangeal_1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1222);

SoHAnimJoint* SoHAnimJoint1223 = new SoHAnimJoint();
SoHAnimJoint1223->setUSE(QString("Joe_r_carpal_interphalangeal_1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1223);

SoHAnimJoint* SoHAnimJoint1224 = new SoHAnimJoint();
SoHAnimJoint1224->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1224);

SoHAnimJoint* SoHAnimJoint1225 = new SoHAnimJoint();
SoHAnimJoint1225->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1225);

SoHAnimJoint* SoHAnimJoint1226 = new SoHAnimJoint();
SoHAnimJoint1226->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1226);

SoHAnimJoint* SoHAnimJoint1227 = new SoHAnimJoint();
SoHAnimJoint1227->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1227);

SoHAnimJoint* SoHAnimJoint1228 = new SoHAnimJoint();
SoHAnimJoint1228->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1228);

SoHAnimJoint* SoHAnimJoint1229 = new SoHAnimJoint();
SoHAnimJoint1229->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1229);

SoHAnimJoint* SoHAnimJoint1230 = new SoHAnimJoint();
SoHAnimJoint1230->setUSE(QString("Joe_l_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1230);

SoHAnimJoint* SoHAnimJoint1231 = new SoHAnimJoint();
SoHAnimJoint1231->setUSE(QString("Joe_r_carpal_proximal_interphalangeal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1231);

SoHAnimJoint* SoHAnimJoint1232 = new SoHAnimJoint();
SoHAnimJoint1232->setUSE(QString("Joe_l_carpometacarpal_1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1232);

SoHAnimJoint* SoHAnimJoint1233 = new SoHAnimJoint();
SoHAnimJoint1233->setUSE(QString("Joe_r_carpometacarpal_1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1233);

SoHAnimJoint* SoHAnimJoint1234 = new SoHAnimJoint();
SoHAnimJoint1234->setUSE(QString("Joe_l_carpometacarpal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1234);

SoHAnimJoint* SoHAnimJoint1235 = new SoHAnimJoint();
SoHAnimJoint1235->setUSE(QString("Joe_r_carpometacarpal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1235);

SoHAnimJoint* SoHAnimJoint1236 = new SoHAnimJoint();
SoHAnimJoint1236->setUSE(QString("Joe_l_carpometacarpal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1236);

SoHAnimJoint* SoHAnimJoint1237 = new SoHAnimJoint();
SoHAnimJoint1237->setUSE(QString("Joe_r_carpometacarpal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1237);

SoHAnimJoint* SoHAnimJoint1238 = new SoHAnimJoint();
SoHAnimJoint1238->setUSE(QString("Joe_l_carpometacarpal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1238);

SoHAnimJoint* SoHAnimJoint1239 = new SoHAnimJoint();
SoHAnimJoint1239->setUSE(QString("Joe_r_carpometacarpal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1239);

SoHAnimJoint* SoHAnimJoint1240 = new SoHAnimJoint();
SoHAnimJoint1240->setUSE(QString("Joe_l_carpometacarpal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1240);

SoHAnimJoint* SoHAnimJoint1241 = new SoHAnimJoint();
SoHAnimJoint1241->setUSE(QString("Joe_r_carpometacarpal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1241);

SoHAnimJoint* SoHAnimJoint1242 = new SoHAnimJoint();
SoHAnimJoint1242->setUSE(QString("Joe_l_elbow"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1242);

SoHAnimJoint* SoHAnimJoint1243 = new SoHAnimJoint();
SoHAnimJoint1243->setUSE(QString("Joe_r_elbow"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1243);

SoHAnimJoint* SoHAnimJoint1244 = new SoHAnimJoint();
SoHAnimJoint1244->setUSE(QString("Joe_l_eyeball_joint"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1244);

SoHAnimJoint* SoHAnimJoint1245 = new SoHAnimJoint();
SoHAnimJoint1245->setUSE(QString("Joe_r_eyeball_joint"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1245);

SoHAnimJoint* SoHAnimJoint1246 = new SoHAnimJoint();
SoHAnimJoint1246->setUSE(QString("Joe_l_hip"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1246);

SoHAnimJoint* SoHAnimJoint1247 = new SoHAnimJoint();
SoHAnimJoint1247->setUSE(QString("Joe_r_hip"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1247);

SoHAnimJoint* SoHAnimJoint1248 = new SoHAnimJoint();
SoHAnimJoint1248->setUSE(QString("Joe_l_knee"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1248);

SoHAnimJoint* SoHAnimJoint1249 = new SoHAnimJoint();
SoHAnimJoint1249->setUSE(QString("Joe_r_knee"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1249);

SoHAnimJoint* SoHAnimJoint1250 = new SoHAnimJoint();
SoHAnimJoint1250->setUSE(QString("Joe_l_metacarpophalangeal_1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1250);

SoHAnimJoint* SoHAnimJoint1251 = new SoHAnimJoint();
SoHAnimJoint1251->setUSE(QString("Joe_r_metacarpophalangeal_1"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1251);

SoHAnimJoint* SoHAnimJoint1252 = new SoHAnimJoint();
SoHAnimJoint1252->setUSE(QString("Joe_l_metacarpophalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1252);

SoHAnimJoint* SoHAnimJoint1253 = new SoHAnimJoint();
SoHAnimJoint1253->setUSE(QString("Joe_r_metacarpophalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1253);

SoHAnimJoint* SoHAnimJoint1254 = new SoHAnimJoint();
SoHAnimJoint1254->setUSE(QString("Joe_l_metacarpophalangeal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1254);

SoHAnimJoint* SoHAnimJoint1255 = new SoHAnimJoint();
SoHAnimJoint1255->setUSE(QString("Joe_r_metacarpophalangeal_3"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1255);

SoHAnimJoint* SoHAnimJoint1256 = new SoHAnimJoint();
SoHAnimJoint1256->setUSE(QString("Joe_l_metacarpophalangeal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1256);

SoHAnimJoint* SoHAnimJoint1257 = new SoHAnimJoint();
SoHAnimJoint1257->setUSE(QString("Joe_r_metacarpophalangeal_4"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1257);

SoHAnimJoint* SoHAnimJoint1258 = new SoHAnimJoint();
SoHAnimJoint1258->setUSE(QString("Joe_l_metacarpophalangeal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1258);

SoHAnimJoint* SoHAnimJoint1259 = new SoHAnimJoint();
SoHAnimJoint1259->setUSE(QString("Joe_r_metacarpophalangeal_5"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1259);

SoHAnimJoint* SoHAnimJoint1260 = new SoHAnimJoint();
SoHAnimJoint1260->setUSE(QString("Joe_l_metatarsal"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1260);

SoHAnimJoint* SoHAnimJoint1261 = new SoHAnimJoint();
SoHAnimJoint1261->setUSE(QString("Joe_l_metatarsophalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1261);

SoHAnimJoint* SoHAnimJoint1262 = new SoHAnimJoint();
SoHAnimJoint1262->setUSE(QString("Joe_r_metatarsophalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1262);

SoHAnimJoint* SoHAnimJoint1263 = new SoHAnimJoint();
SoHAnimJoint1263->setUSE(QString("Joe_l_radiocarpal"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1263);

SoHAnimJoint* SoHAnimJoint1264 = new SoHAnimJoint();
SoHAnimJoint1264->setUSE(QString("Joe_r_radiocarpal"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1264);

SoHAnimJoint* SoHAnimJoint1265 = new SoHAnimJoint();
SoHAnimJoint1265->setUSE(QString("Joe_l_shoulder"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1265);

SoHAnimJoint* SoHAnimJoint1266 = new SoHAnimJoint();
SoHAnimJoint1266->setUSE(QString("Joe_r_shoulder"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1266);

SoHAnimJoint* SoHAnimJoint1267 = new SoHAnimJoint();
SoHAnimJoint1267->setUSE(QString("Joe_l_sternoclavicular"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1267);

SoHAnimJoint* SoHAnimJoint1268 = new SoHAnimJoint();
SoHAnimJoint1268->setUSE(QString("Joe_r_sternoclavicular"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1268);

SoHAnimJoint* SoHAnimJoint1269 = new SoHAnimJoint();
SoHAnimJoint1269->setUSE(QString("Joe_l_talocrural"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1269);

SoHAnimJoint* SoHAnimJoint1270 = new SoHAnimJoint();
SoHAnimJoint1270->setUSE(QString("Joe_r_talocrural"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1270);

SoHAnimJoint* SoHAnimJoint1271 = new SoHAnimJoint();
SoHAnimJoint1271->setUSE(QString("Joe_r_tarsal_distal_interphalangeal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1271);

SoHAnimJoint* SoHAnimJoint1272 = new SoHAnimJoint();
SoHAnimJoint1272->setUSE(QString("Joe_l_tarsometatarsal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1272);

SoHAnimJoint* SoHAnimJoint1273 = new SoHAnimJoint();
SoHAnimJoint1273->setUSE(QString("Joe_r_tarsometatarsal_2"));
SoHAnimHumanoid75->setJoints(*SoHAnimJoint1273);

SoHAnimSegment* SoHAnimSegment1274 = new SoHAnimSegment();
SoHAnimSegment1274->setUSE(QString("Joe_c1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1274);

SoHAnimSegment* SoHAnimSegment1275 = new SoHAnimSegment();
SoHAnimSegment1275->setUSE(QString("Joe_c2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1275);

SoHAnimSegment* SoHAnimSegment1276 = new SoHAnimSegment();
SoHAnimSegment1276->setUSE(QString("Joe_c3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1276);

SoHAnimSegment* SoHAnimSegment1277 = new SoHAnimSegment();
SoHAnimSegment1277->setUSE(QString("Joe_c4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1277);

SoHAnimSegment* SoHAnimSegment1278 = new SoHAnimSegment();
SoHAnimSegment1278->setUSE(QString("Joe_c5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1278);

SoHAnimSegment* SoHAnimSegment1279 = new SoHAnimSegment();
SoHAnimSegment1279->setUSE(QString("Joe_c6"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1279);

SoHAnimSegment* SoHAnimSegment1280 = new SoHAnimSegment();
SoHAnimSegment1280->setUSE(QString("Joe_c7"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1280);

SoHAnimSegment* SoHAnimSegment1281 = new SoHAnimSegment();
SoHAnimSegment1281->setUSE(QString("Joe_l1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1281);

SoHAnimSegment* SoHAnimSegment1282 = new SoHAnimSegment();
SoHAnimSegment1282->setUSE(QString("Joe_l2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1282);

SoHAnimSegment* SoHAnimSegment1283 = new SoHAnimSegment();
SoHAnimSegment1283->setUSE(QString("Joe_l3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1283);

SoHAnimSegment* SoHAnimSegment1284 = new SoHAnimSegment();
SoHAnimSegment1284->setUSE(QString("Joe_l4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1284);

SoHAnimSegment* SoHAnimSegment1285 = new SoHAnimSegment();
SoHAnimSegment1285->setUSE(QString("Joe_l5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1285);

SoHAnimSegment* SoHAnimSegment1286 = new SoHAnimSegment();
SoHAnimSegment1286->setUSE(QString("Joe_pelvis"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1286);

SoHAnimSegment* SoHAnimSegment1287 = new SoHAnimSegment();
SoHAnimSegment1287->setUSE(QString("Joe_sacrum"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1287);

SoHAnimSegment* SoHAnimSegment1288 = new SoHAnimSegment();
SoHAnimSegment1288->setUSE(QString("Joe_skull"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1288);

SoHAnimSegment* SoHAnimSegment1289 = new SoHAnimSegment();
SoHAnimSegment1289->setUSE(QString("Joe_t1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1289);

SoHAnimSegment* SoHAnimSegment1290 = new SoHAnimSegment();
SoHAnimSegment1290->setUSE(QString("Joe_t10"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1290);

SoHAnimSegment* SoHAnimSegment1291 = new SoHAnimSegment();
SoHAnimSegment1291->setUSE(QString("Joe_t11"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1291);

SoHAnimSegment* SoHAnimSegment1292 = new SoHAnimSegment();
SoHAnimSegment1292->setUSE(QString("Joe_t12"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1292);

SoHAnimSegment* SoHAnimSegment1293 = new SoHAnimSegment();
SoHAnimSegment1293->setUSE(QString("Joe_t2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1293);

SoHAnimSegment* SoHAnimSegment1294 = new SoHAnimSegment();
SoHAnimSegment1294->setUSE(QString("Joe_t3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1294);

SoHAnimSegment* SoHAnimSegment1295 = new SoHAnimSegment();
SoHAnimSegment1295->setUSE(QString("Joe_t4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1295);

SoHAnimSegment* SoHAnimSegment1296 = new SoHAnimSegment();
SoHAnimSegment1296->setUSE(QString("Joe_t5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1296);

SoHAnimSegment* SoHAnimSegment1297 = new SoHAnimSegment();
SoHAnimSegment1297->setUSE(QString("Joe_t6"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1297);

SoHAnimSegment* SoHAnimSegment1298 = new SoHAnimSegment();
SoHAnimSegment1298->setUSE(QString("Joe_t7"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1298);

SoHAnimSegment* SoHAnimSegment1299 = new SoHAnimSegment();
SoHAnimSegment1299->setUSE(QString("Joe_t8"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1299);

SoHAnimSegment* SoHAnimSegment1300 = new SoHAnimSegment();
SoHAnimSegment1300->setUSE(QString("Joe_t9"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1300);

SoHAnimSegment* SoHAnimSegment1301 = new SoHAnimSegment();
SoHAnimSegment1301->setUSE(QString("Joe_toPelvis"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1301);

SoHAnimSegment* SoHAnimSegment1302 = new SoHAnimSegment();
SoHAnimSegment1302->setUSE(QString("Joe_l_calf"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1302);

SoHAnimSegment* SoHAnimSegment1303 = new SoHAnimSegment();
SoHAnimSegment1303->setUSE(QString("Joe_r_calf"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1303);

SoHAnimSegment* SoHAnimSegment1304 = new SoHAnimSegment();
SoHAnimSegment1304->setUSE(QString("Joe_l_carpal"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1304);

SoHAnimSegment* SoHAnimSegment1305 = new SoHAnimSegment();
SoHAnimSegment1305->setUSE(QString("Joe_r_carpal"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1305);

SoHAnimSegment* SoHAnimSegment1306 = new SoHAnimSegment();
SoHAnimSegment1306->setUSE(QString("Joe_l_carpal_distal_phalanx_1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1306);

SoHAnimSegment* SoHAnimSegment1307 = new SoHAnimSegment();
SoHAnimSegment1307->setUSE(QString("Joe_r_carpal_distal_phalanx_1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1307);

SoHAnimSegment* SoHAnimSegment1308 = new SoHAnimSegment();
SoHAnimSegment1308->setUSE(QString("Joe_l_carpal_distal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1308);

SoHAnimSegment* SoHAnimSegment1309 = new SoHAnimSegment();
SoHAnimSegment1309->setUSE(QString("Joe_r_carpal_distal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1309);

SoHAnimSegment* SoHAnimSegment1310 = new SoHAnimSegment();
SoHAnimSegment1310->setUSE(QString("Joe_l_carpal_distal_phalanx_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1310);

SoHAnimSegment* SoHAnimSegment1311 = new SoHAnimSegment();
SoHAnimSegment1311->setUSE(QString("Joe_r_carpal_distal_phalanx_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1311);

SoHAnimSegment* SoHAnimSegment1312 = new SoHAnimSegment();
SoHAnimSegment1312->setUSE(QString("Joe_l_carpal_distal_phalanx_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1312);

SoHAnimSegment* SoHAnimSegment1313 = new SoHAnimSegment();
SoHAnimSegment1313->setUSE(QString("Joe_r_carpal_distal_phalanx_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1313);

SoHAnimSegment* SoHAnimSegment1314 = new SoHAnimSegment();
SoHAnimSegment1314->setUSE(QString("Joe_l_carpal_distal_phalanx_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1314);

SoHAnimSegment* SoHAnimSegment1315 = new SoHAnimSegment();
SoHAnimSegment1315->setUSE(QString("Joe_r_carpal_distal_phalanx_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1315);

SoHAnimSegment* SoHAnimSegment1316 = new SoHAnimSegment();
SoHAnimSegment1316->setUSE(QString("Joe_l_carpal_middle_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1316);

SoHAnimSegment* SoHAnimSegment1317 = new SoHAnimSegment();
SoHAnimSegment1317->setUSE(QString("Joe_r_carpal_middle_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1317);

SoHAnimSegment* SoHAnimSegment1318 = new SoHAnimSegment();
SoHAnimSegment1318->setUSE(QString("Joe_l_carpal_middle_phalanx_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1318);

SoHAnimSegment* SoHAnimSegment1319 = new SoHAnimSegment();
SoHAnimSegment1319->setUSE(QString("Joe_r_carpal_middle_phalanx_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1319);

SoHAnimSegment* SoHAnimSegment1320 = new SoHAnimSegment();
SoHAnimSegment1320->setUSE(QString("Joe_l_carpal_middle_phalanx_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1320);

SoHAnimSegment* SoHAnimSegment1321 = new SoHAnimSegment();
SoHAnimSegment1321->setUSE(QString("Joe_r_carpal_middle_phalanx_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1321);

SoHAnimSegment* SoHAnimSegment1322 = new SoHAnimSegment();
SoHAnimSegment1322->setUSE(QString("Joe_l_carpal_middle_phalanx_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1322);

SoHAnimSegment* SoHAnimSegment1323 = new SoHAnimSegment();
SoHAnimSegment1323->setUSE(QString("Joe_r_carpal_middle_phalanx_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1323);

SoHAnimSegment* SoHAnimSegment1324 = new SoHAnimSegment();
SoHAnimSegment1324->setUSE(QString("Joe_l_carpal_proximal_phalanx_1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1324);

SoHAnimSegment* SoHAnimSegment1325 = new SoHAnimSegment();
SoHAnimSegment1325->setUSE(QString("Joe_r_carpal_proximal_phalanx_1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1325);

SoHAnimSegment* SoHAnimSegment1326 = new SoHAnimSegment();
SoHAnimSegment1326->setUSE(QString("Joe_l_carpal_proximal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1326);

SoHAnimSegment* SoHAnimSegment1327 = new SoHAnimSegment();
SoHAnimSegment1327->setUSE(QString("Joe_r_carpal_proximal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1327);

SoHAnimSegment* SoHAnimSegment1328 = new SoHAnimSegment();
SoHAnimSegment1328->setUSE(QString("Joe_l_carpal_proximal_phalanx_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1328);

SoHAnimSegment* SoHAnimSegment1329 = new SoHAnimSegment();
SoHAnimSegment1329->setUSE(QString("Joe_r_carpal_proximal_phalanx_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1329);

SoHAnimSegment* SoHAnimSegment1330 = new SoHAnimSegment();
SoHAnimSegment1330->setUSE(QString("Joe_l_carpal_proximal_phalanx_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1330);

SoHAnimSegment* SoHAnimSegment1331 = new SoHAnimSegment();
SoHAnimSegment1331->setUSE(QString("Joe_r_carpal_proximal_phalanx_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1331);

SoHAnimSegment* SoHAnimSegment1332 = new SoHAnimSegment();
SoHAnimSegment1332->setUSE(QString("Joe_l_carpal_proximal_phalanx_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1332);

SoHAnimSegment* SoHAnimSegment1333 = new SoHAnimSegment();
SoHAnimSegment1333->setUSE(QString("Joe_r_carpal_proximal_phalanx_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1333);

SoHAnimSegment* SoHAnimSegment1334 = new SoHAnimSegment();
SoHAnimSegment1334->setUSE(QString("Joe_l_clavicle"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1334);

SoHAnimSegment* SoHAnimSegment1335 = new SoHAnimSegment();
SoHAnimSegment1335->setUSE(QString("Joe_r_clavicle"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1335);

SoHAnimSegment* SoHAnimSegment1336 = new SoHAnimSegment();
SoHAnimSegment1336->setUSE(QString("Joe_l_eyeball"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1336);

SoHAnimSegment* SoHAnimSegment1337 = new SoHAnimSegment();
SoHAnimSegment1337->setUSE(QString("Joe_r_eyeball"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1337);

SoHAnimSegment* SoHAnimSegment1338 = new SoHAnimSegment();
SoHAnimSegment1338->setUSE(QString("Joe_l_forearm"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1338);

SoHAnimSegment* SoHAnimSegment1339 = new SoHAnimSegment();
SoHAnimSegment1339->setUSE(QString("Joe_r_forearm"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1339);

SoHAnimSegment* SoHAnimSegment1340 = new SoHAnimSegment();
SoHAnimSegment1340->setUSE(QString("Joe_l_metacarpal_1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1340);

SoHAnimSegment* SoHAnimSegment1341 = new SoHAnimSegment();
SoHAnimSegment1341->setUSE(QString("Joe_r_metacarpal_1"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1341);

SoHAnimSegment* SoHAnimSegment1342 = new SoHAnimSegment();
SoHAnimSegment1342->setUSE(QString("Joe_l_metacarpal_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1342);

SoHAnimSegment* SoHAnimSegment1343 = new SoHAnimSegment();
SoHAnimSegment1343->setUSE(QString("Joe_r_metacarpal_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1343);

SoHAnimSegment* SoHAnimSegment1344 = new SoHAnimSegment();
SoHAnimSegment1344->setUSE(QString("Joe_l_metacarpal_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1344);

SoHAnimSegment* SoHAnimSegment1345 = new SoHAnimSegment();
SoHAnimSegment1345->setUSE(QString("Joe_r_metacarpal_3"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1345);

SoHAnimSegment* SoHAnimSegment1346 = new SoHAnimSegment();
SoHAnimSegment1346->setUSE(QString("Joe_l_metacarpal_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1346);

SoHAnimSegment* SoHAnimSegment1347 = new SoHAnimSegment();
SoHAnimSegment1347->setUSE(QString("Joe_r_metacarpal_4"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1347);

SoHAnimSegment* SoHAnimSegment1348 = new SoHAnimSegment();
SoHAnimSegment1348->setUSE(QString("Joe_l_metacarpal_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1348);

SoHAnimSegment* SoHAnimSegment1349 = new SoHAnimSegment();
SoHAnimSegment1349->setUSE(QString("Joe_r_metacarpal_5"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1349);

SoHAnimSegment* SoHAnimSegment1350 = new SoHAnimSegment();
SoHAnimSegment1350->setUSE(QString("Joe_l_metatarsal_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1350);

SoHAnimSegment* SoHAnimSegment1351 = new SoHAnimSegment();
SoHAnimSegment1351->setUSE(QString("Joe_r_metatarsal_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1351);

SoHAnimSegment* SoHAnimSegment1352 = new SoHAnimSegment();
SoHAnimSegment1352->setUSE(QString("Joe_l_scapula"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1352);

SoHAnimSegment* SoHAnimSegment1353 = new SoHAnimSegment();
SoHAnimSegment1353->setUSE(QString("Joe_r_scapula"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1353);

SoHAnimSegment* SoHAnimSegment1354 = new SoHAnimSegment();
SoHAnimSegment1354->setUSE(QString("Joe_l_talus"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1354);

SoHAnimSegment* SoHAnimSegment1355 = new SoHAnimSegment();
SoHAnimSegment1355->setUSE(QString("Joe_r_talus"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1355);

SoHAnimSegment* SoHAnimSegment1356 = new SoHAnimSegment();
SoHAnimSegment1356->setUSE(QString("Joe_l_tarsal_distal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1356);

SoHAnimSegment* SoHAnimSegment1357 = new SoHAnimSegment();
SoHAnimSegment1357->setUSE(QString("Joe_r_tarsal_distal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1357);

SoHAnimSegment* SoHAnimSegment1358 = new SoHAnimSegment();
SoHAnimSegment1358->setUSE(QString("Joe_l_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1358);

SoHAnimSegment* SoHAnimSegment1359 = new SoHAnimSegment();
SoHAnimSegment1359->setUSE(QString("Joe_r_tarsal_proximal_phalanx_2"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1359);

SoHAnimSegment* SoHAnimSegment1360 = new SoHAnimSegment();
SoHAnimSegment1360->setUSE(QString("Joe_l_thigh"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1360);

SoHAnimSegment* SoHAnimSegment1361 = new SoHAnimSegment();
SoHAnimSegment1361->setUSE(QString("Joe_r_thigh"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1361);

SoHAnimSegment* SoHAnimSegment1362 = new SoHAnimSegment();
SoHAnimSegment1362->setUSE(QString("Joe_l_upperarm"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1362);

SoHAnimSegment* SoHAnimSegment1363 = new SoHAnimSegment();
SoHAnimSegment1363->setUSE(QString("Joe_r_upperarm"));
SoHAnimHumanoid75->setSegments(*SoHAnimSegment1363);

SoHAnimSite* SoHAnimSite1364 = new SoHAnimSite();
SoHAnimSite1364->setUSE(QString("Joe_cervicale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1364);

SoHAnimSite* SoHAnimSite1365 = new SoHAnimSite();
SoHAnimSite1365->setUSE(QString("Joe_crotch_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1365);

SoHAnimSite* SoHAnimSite1366 = new SoHAnimSite();
SoHAnimSite1366->setUSE(QString("Joe_floormarker_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1366);

SoHAnimSite* SoHAnimSite1367 = new SoHAnimSite();
SoHAnimSite1367->setUSE(QString("Joe_navel_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1367);

SoHAnimSite* SoHAnimSite1368 = new SoHAnimSite();
SoHAnimSite1368->setUSE(QString("Joe_nuchale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1368);

SoHAnimSite* SoHAnimSite1369 = new SoHAnimSite();
SoHAnimSite1369->setUSE(QString("Joe_rib10_midspine_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1369);

SoHAnimSite* SoHAnimSite1370 = new SoHAnimSite();
SoHAnimSite1370->setUSE(QString("Joe_sellion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1370);

SoHAnimSite* SoHAnimSite1371 = new SoHAnimSite();
SoHAnimSite1371->setUSE(QString("Joe_skull_vertex_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1371);

SoHAnimSite* SoHAnimSite1372 = new SoHAnimSite();
SoHAnimSite1372->setUSE(QString("Joe_substernale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1372);

SoHAnimSite* SoHAnimSite1373 = new SoHAnimSite();
SoHAnimSite1373->setUSE(QString("Joe_supramenton_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1373);

SoHAnimSite* SoHAnimSite1374 = new SoHAnimSite();
SoHAnimSite1374->setUSE(QString("Joe_suprasternale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1374);

SoHAnimSite* SoHAnimSite1375 = new SoHAnimSite();
SoHAnimSite1375->setUSE(QString("Joe_waist_preferred_posterior_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1375);

SoHAnimSite* SoHAnimSite1376 = new SoHAnimSite();
SoHAnimSite1376->setUSE(QString("Joe_l_acromion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1376);

SoHAnimSite* SoHAnimSite1377 = new SoHAnimSite();
SoHAnimSite1377->setUSE(QString("Joe_r_acromion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1377);

SoHAnimSite* SoHAnimSite1378 = new SoHAnimSite();
SoHAnimSite1378->setUSE(QString("Joe_l_asis_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1378);

SoHAnimSite* SoHAnimSite1379 = new SoHAnimSite();
SoHAnimSite1379->setUSE(QString("Joe_r_asis_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1379);

SoHAnimSite* SoHAnimSite1380 = new SoHAnimSite();
SoHAnimSite1380->setUSE(QString("Joe_l_axilla_distal_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1380);

SoHAnimSite* SoHAnimSite1381 = new SoHAnimSite();
SoHAnimSite1381->setUSE(QString("Joe_r_axilla_distal_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1381);

SoHAnimSite* SoHAnimSite1382 = new SoHAnimSite();
SoHAnimSite1382->setUSE(QString("Joe_l_axilla_proximal_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1382);

SoHAnimSite* SoHAnimSite1383 = new SoHAnimSite();
SoHAnimSite1383->setUSE(QString("Joe_r_axilla_proximal_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1383);

SoHAnimSite* SoHAnimSite1384 = new SoHAnimSite();
SoHAnimSite1384->setUSE(QString("Joe_l_calcaneus_posterior_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1384);

SoHAnimSite* SoHAnimSite1385 = new SoHAnimSite();
SoHAnimSite1385->setUSE(QString("Joe_r_calcaneus_posterior_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1385);

SoHAnimSite* SoHAnimSite1386 = new SoHAnimSite();
SoHAnimSite1386->setUSE(QString("Joe_l_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1386);

SoHAnimSite* SoHAnimSite1387 = new SoHAnimSite();
SoHAnimSite1387->setUSE(QString("Joe_r_carpal_distal_phalanx_1_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1387);

SoHAnimSite* SoHAnimSite1388 = new SoHAnimSite();
SoHAnimSite1388->setUSE(QString("Joe_l_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1388);

SoHAnimSite* SoHAnimSite1389 = new SoHAnimSite();
SoHAnimSite1389->setUSE(QString("Joe_r_carpal_distal_phalanx_2_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1389);

SoHAnimSite* SoHAnimSite1390 = new SoHAnimSite();
SoHAnimSite1390->setUSE(QString("Joe_l_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1390);

SoHAnimSite* SoHAnimSite1391 = new SoHAnimSite();
SoHAnimSite1391->setUSE(QString("Joe_r_carpal_distal_phalanx_3_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1391);

SoHAnimSite* SoHAnimSite1392 = new SoHAnimSite();
SoHAnimSite1392->setUSE(QString("Joe_l_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1392);

SoHAnimSite* SoHAnimSite1393 = new SoHAnimSite();
SoHAnimSite1393->setUSE(QString("Joe_r_carpal_distal_phalanx_4_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1393);

SoHAnimSite* SoHAnimSite1394 = new SoHAnimSite();
SoHAnimSite1394->setUSE(QString("Joe_l_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1394);

SoHAnimSite* SoHAnimSite1395 = new SoHAnimSite();
SoHAnimSite1395->setUSE(QString("Joe_r_carpal_distal_phalanx_5_tip"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1395);

SoHAnimSite* SoHAnimSite1396 = new SoHAnimSite();
SoHAnimSite1396->setUSE(QString("Joe_l_clavicle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1396);

SoHAnimSite* SoHAnimSite1397 = new SoHAnimSite();
SoHAnimSite1397->setUSE(QString("Joe_r_clavicle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1397);

SoHAnimSite* SoHAnimSite1398 = new SoHAnimSite();
SoHAnimSite1398->setUSE(QString("Joe_l_dactylion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1398);

SoHAnimSite* SoHAnimSite1399 = new SoHAnimSite();
SoHAnimSite1399->setUSE(QString("Joe_r_dactylion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1399);

SoHAnimSite* SoHAnimSite1400 = new SoHAnimSite();
SoHAnimSite1400->setUSE(QString("Joe_l_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1400);

SoHAnimSite* SoHAnimSite1401 = new SoHAnimSite();
SoHAnimSite1401->setUSE(QString("Joe_r_femoral_lateral_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1401);

SoHAnimSite* SoHAnimSite1402 = new SoHAnimSite();
SoHAnimSite1402->setUSE(QString("Joe_l_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1402);

SoHAnimSite* SoHAnimSite1403 = new SoHAnimSite();
SoHAnimSite1403->setUSE(QString("Joe_r_femoral_medial_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1403);

SoHAnimSite* SoHAnimSite1404 = new SoHAnimSite();
SoHAnimSite1404->setUSE(QString("Joe_l_gonion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1404);

SoHAnimSite* SoHAnimSite1405 = new SoHAnimSite();
SoHAnimSite1405->setUSE(QString("Joe_r_gonion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1405);

SoHAnimSite* SoHAnimSite1406 = new SoHAnimSite();
SoHAnimSite1406->setUSE(QString("Joe_l_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1406);

SoHAnimSite* SoHAnimSite1407 = new SoHAnimSite();
SoHAnimSite1407->setUSE(QString("Joe_r_humeral_lateral_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1407);

SoHAnimSite* SoHAnimSite1408 = new SoHAnimSite();
SoHAnimSite1408->setUSE(QString("Joe_l_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1408);

SoHAnimSite* SoHAnimSite1409 = new SoHAnimSite();
SoHAnimSite1409->setUSE(QString("Joe_r_humeral_medial_epicondyle_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1409);

SoHAnimSite* SoHAnimSite1410 = new SoHAnimSite();
SoHAnimSite1410->setUSE(QString("Joe_l_iliocristale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1410);

SoHAnimSite* SoHAnimSite1411 = new SoHAnimSite();
SoHAnimSite1411->setUSE(QString("Joe_r_iliocristale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1411);

SoHAnimSite* SoHAnimSite1412 = new SoHAnimSite();
SoHAnimSite1412->setUSE(QString("Joe_l_infraorbitale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1412);

SoHAnimSite* SoHAnimSite1413 = new SoHAnimSite();
SoHAnimSite1413->setUSE(QString("Joe_r_infraorbitale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1413);

SoHAnimSite* SoHAnimSite1414 = new SoHAnimSite();
SoHAnimSite1414->setUSE(QString("Joe_l_knee_crease_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1414);

SoHAnimSite* SoHAnimSite1415 = new SoHAnimSite();
SoHAnimSite1415->setUSE(QString("Joe_r_knee_crease_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1415);

SoHAnimSite* SoHAnimSite1416 = new SoHAnimSite();
SoHAnimSite1416->setUSE(QString("Joe_l_lateral_malleolus_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1416);

SoHAnimSite* SoHAnimSite1417 = new SoHAnimSite();
SoHAnimSite1417->setUSE(QString("Joe_r_lateral_malleolus_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1417);

SoHAnimSite* SoHAnimSite1418 = new SoHAnimSite();
SoHAnimSite1418->setUSE(QString("Joe_l_medial_malleolus_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1418);

SoHAnimSite* SoHAnimSite1419 = new SoHAnimSite();
SoHAnimSite1419->setUSE(QString("Joe_r_medial_malleolus_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1419);

SoHAnimSite* SoHAnimSite1420 = new SoHAnimSite();
SoHAnimSite1420->setUSE(QString("Joe_l_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1420);

SoHAnimSite* SoHAnimSite1421 = new SoHAnimSite();
SoHAnimSite1421->setUSE(QString("Joe_r_metacarpal_phalanx_2_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1421);

SoHAnimSite* SoHAnimSite1422 = new SoHAnimSite();
SoHAnimSite1422->setUSE(QString("Joe_l_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1422);

SoHAnimSite* SoHAnimSite1423 = new SoHAnimSite();
SoHAnimSite1423->setUSE(QString("Joe_r_metacarpal_phalanx_5_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1423);

SoHAnimSite* SoHAnimSite1424 = new SoHAnimSite();
SoHAnimSite1424->setUSE(QString("Joe_l_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1424);

SoHAnimSite* SoHAnimSite1425 = new SoHAnimSite();
SoHAnimSite1425->setUSE(QString("Joe_r_metatarsal_phalanx_1_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1425);

SoHAnimSite* SoHAnimSite1426 = new SoHAnimSite();
SoHAnimSite1426->setUSE(QString("Joe_l_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1426);

SoHAnimSite* SoHAnimSite1427 = new SoHAnimSite();
SoHAnimSite1427->setUSE(QString("Joe_r_metatarsal_phalanx_5_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1427);

SoHAnimSite* SoHAnimSite1428 = new SoHAnimSite();
SoHAnimSite1428->setUSE(QString("Joe_l_neck_base_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1428);

SoHAnimSite* SoHAnimSite1429 = new SoHAnimSite();
SoHAnimSite1429->setUSE(QString("Joe_r_neck_base_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1429);

SoHAnimSite* SoHAnimSite1430 = new SoHAnimSite();
SoHAnimSite1430->setUSE(QString("Joe_l_olecranon_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1430);

SoHAnimSite* SoHAnimSite1431 = new SoHAnimSite();
SoHAnimSite1431->setUSE(QString("Joe_r_olecranon_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1431);

SoHAnimSite* SoHAnimSite1432 = new SoHAnimSite();
SoHAnimSite1432->setUSE(QString("Joe_l_psis_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1432);

SoHAnimSite* SoHAnimSite1433 = new SoHAnimSite();
SoHAnimSite1433->setUSE(QString("Joe_r_psis_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1433);

SoHAnimSite* SoHAnimSite1434 = new SoHAnimSite();
SoHAnimSite1434->setUSE(QString("Joe_l_radial_styloid_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1434);

SoHAnimSite* SoHAnimSite1435 = new SoHAnimSite();
SoHAnimSite1435->setUSE(QString("Joe_r_radial_styloid_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1435);

SoHAnimSite* SoHAnimSite1436 = new SoHAnimSite();
SoHAnimSite1436->setUSE(QString("Joe_l_radiale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1436);

SoHAnimSite* SoHAnimSite1437 = new SoHAnimSite();
SoHAnimSite1437->setUSE(QString("Joe_r_radiale_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1437);

SoHAnimSite* SoHAnimSite1438 = new SoHAnimSite();
SoHAnimSite1438->setUSE(QString("Joe_l_rib10_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1438);

SoHAnimSite* SoHAnimSite1439 = new SoHAnimSite();
SoHAnimSite1439->setUSE(QString("Joe_r_rib10_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1439);

SoHAnimSite* SoHAnimSite1440 = new SoHAnimSite();
SoHAnimSite1440->setUSE(QString("Joe_l_sphyrion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1440);

SoHAnimSite* SoHAnimSite1441 = new SoHAnimSite();
SoHAnimSite1441->setUSE(QString("Joe_r_sphyrion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1441);

SoHAnimSite* SoHAnimSite1442 = new SoHAnimSite();
SoHAnimSite1442->setUSE(QString("Joe_l_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1442);

SoHAnimSite* SoHAnimSite1443 = new SoHAnimSite();
SoHAnimSite1443->setUSE(QString("Joe_r_tarsal_distal_phalanx_2_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1443);

SoHAnimSite* SoHAnimSite1444 = new SoHAnimSite();
SoHAnimSite1444->setUSE(QString("Joe_l_thelion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1444);

SoHAnimSite* SoHAnimSite1445 = new SoHAnimSite();
SoHAnimSite1445->setUSE(QString("Joe_r_thelion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1445);

SoHAnimSite* SoHAnimSite1446 = new SoHAnimSite();
SoHAnimSite1446->setUSE(QString("Joe_l_tragion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1446);

SoHAnimSite* SoHAnimSite1447 = new SoHAnimSite();
SoHAnimSite1447->setUSE(QString("Joe_r_tragion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1447);

SoHAnimSite* SoHAnimSite1448 = new SoHAnimSite();
SoHAnimSite1448->setUSE(QString("Joe_l_trochanterion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1448);

SoHAnimSite* SoHAnimSite1449 = new SoHAnimSite();
SoHAnimSite1449->setUSE(QString("Joe_r_trochanterion_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1449);

SoHAnimSite* SoHAnimSite1450 = new SoHAnimSite();
SoHAnimSite1450->setUSE(QString("Joe_l_ulnar_styloid_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1450);

SoHAnimSite* SoHAnimSite1451 = new SoHAnimSite();
SoHAnimSite1451->setUSE(QString("Joe_r_ulnar_styloid_pt"));
SoHAnimHumanoid75->setSites(*SoHAnimSite1451);

SoGroup74->addChild(*SoHAnimHumanoid75);

SoGroup73->addChild(*SoGroup74);

SoNode32->addChild(*SoGroup73);

//expected best practice: EXPORT AS='fileName' for clarity
SoEXPORT* SoEXPORT1452 = new SoEXPORT();
SoEXPORT1452->setAS(QString("JoeSkeletonSkinSite"));
SoEXPORT1452->setLocalDEF(QString("Joe_Human"));
SoNode32->addChild(*SoEXPORT1452);

SoSceneManager0->setSceneGraph(*SoNode32);

return 0;
}
