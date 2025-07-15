
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
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("CameraPrototypes.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman and Jeff Weekley"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("created"));
Someta5->setContent(QString("16 March 2009"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("25 October 2016"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("TODO"));
Someta7->setContent(QString("Schematron rules, backed up by initialize() checks"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("BeyondViewpointCameraNodesWeb3D2009.pdf"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("subject"));
Someta10->setContent(QString("Camera nodes for Viewpoint navigation control"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("CameraExamples.x3d"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("reference"));
Someta13->setContent(QString("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("generator"));
Someta14->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("license"));
Someta15->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta15);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode16 = new SoNode();
//=============== Camera ==============
SoProtoDeclare* SoProtoDeclare17 = new SoProtoDeclare();
SoProtoDeclare17->setName(QString("Camera"));
SoProtoDeclare17->setAppinfo(QString("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."));
SoProtoInterface* SoProtoInterface18 = new SoProtoInterface();
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("description"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setAppinfo(QString("Text description to be displayed for this Camera"));
Sofield19->setType(QString("SFString"));
SoProtoInterface18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("position"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setAppinfo(QString("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"));
Sofield20->setType(QString("SFVec3f"));
Sofield20->setValue(QString("0 0 10"));
SoProtoInterface18->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("orientation"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setAppinfo(QString("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"));
Sofield21->setType(QString("SFRotation"));
Sofield21->setValue(QString("0 0 1 0"));
SoProtoInterface18->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("fieldOfView"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setAppinfo(QString("pi/4"));
Sofield22->setType(QString("SFFloat"));
Sofield22->setValue(QString("0.7854"));
SoProtoInterface18->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("set_fraction"));
Sofield23->setAccessType(QString("inputOnly"));
Sofield23->setAppinfo(QString("input fraction drives interpolators"));
Sofield23->setType(QString("SFFloat"));
SoProtoInterface18->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("set_bind"));
Sofield24->setAccessType(QString("inputOnly"));
Sofield24->setAppinfo(QString("input event binds or unbinds this Camera"));
Sofield24->setType(QString("SFBool"));
SoProtoInterface18->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("bindTime"));
Sofield25->setAccessType(QString("outputOnly"));
Sofield25->setAppinfo(QString("output event indicates when this Camera is bound"));
Sofield25->setType(QString("SFTime"));
SoProtoInterface18->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("isBound"));
Sofield26->setAccessType(QString("outputOnly"));
Sofield26->setAppinfo(QString("output event indicates whether this Camera is bound or unbound"));
Sofield26->setType(QString("SFBool"));
SoProtoInterface18->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("nearClipPlane"));
Sofield27->setAccessType(QString("inputOutput"));
Sofield27->setAppinfo(QString("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"));
Sofield27->setType(QString("SFFloat"));
Sofield27->setValue(QString("0.25"));
SoProtoInterface18->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("farClipPlane"));
Sofield28->setAccessType(QString("inputOutput"));
Sofield28->setAppinfo(QString("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"));
Sofield28->setType(QString("SFFloat"));
Sofield28->setValue(QString("0"));
SoProtoInterface18->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("shots"));
Sofield29->setAccessType(QString("inputOutput"));
Sofield29->setAppinfo(QString("Array of CameraShot nodes which in turn contain CameraMovement nodes"));
Sofield29->setType(QString("MFNode"));
//initialization nodes (if any) go here
SoProtoInterface18->addChild(*Sofield29);

Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("headlight"));
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setAppinfo(QString("Whether camera headlight is on or off"));
Sofield30->setType(QString("SFBool"));
Sofield30->setValue(QString("true"));
SoProtoInterface18->addChild(*Sofield30);

Sofield* Sofield31 = new Sofield();
Sofield31->setName(QString("headlightColor"));
Sofield31->setAccessType(QString("inputOutput"));
Sofield31->setAppinfo(QString("Camera headlight color"));
Sofield31->setType(QString("SFColor"));
Sofield31->setValue(QString("1 1 1"));
SoProtoInterface18->addChild(*Sofield31);

Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("headlightIntensity"));
Sofield32->setAccessType(QString("inputOutput"));
Sofield32->setAppinfo(QString("Camera headlight intensity"));
Sofield32->setType(QString("SFFloat"));
Sofield32->setValue(QString("1"));
SoProtoInterface18->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("filterColor"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setAppinfo(QString("Camera filter color that modifies virtual lens capture"));
Sofield33->setType(QString("SFColor"));
Sofield33->setValue(QString("1 1 1"));
SoProtoInterface18->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("filterTransparency"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setAppinfo(QString("Camera filter transparency that modifies virtual lens capture"));
Sofield34->setType(QString("SFFloat"));
Sofield34->setValue(QString("1"));
SoProtoInterface18->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("upVector"));
Sofield35->setAccessType(QString("inputOutput"));
Sofield35->setAppinfo(QString("upVector changes modify camera orientation (and possibly vice versa)"));
Sofield35->setType(QString("SFVec3f"));
Sofield35->setValue(QString("0 1 0"));
SoProtoInterface18->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("fStop"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setAppinfo(QString("Focal length divided effective aperture diameter indicating width of focal plane"));
Sofield36->setType(QString("SFFloat"));
Sofield36->setValue(QString("5.6"));
SoProtoInterface18->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("focusDistance"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setAppinfo(QString("Distance to focal plane of sharpest focus"));
Sofield37->setType(QString("SFFloat"));
Sofield37->setValue(QString("10"));
SoProtoInterface18->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("isActive"));
Sofield38->setAccessType(QString("outputOnly"));
Sofield38->setAppinfo(QString("Mark start/stop with true/false output respectively useful to trigger external animations"));
Sofield38->setType(QString("SFBool"));
SoProtoInterface18->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("totalDuration"));
Sofield39->setAccessType(QString("outputOnly"));
Sofield39->setAppinfo(QString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"));
Sofield39->setType(QString("SFTime"));
SoProtoInterface18->addChild(*Sofield39);

Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("offlineRender"));
Sofield40->setAccessType(QString("inputOutput"));
Sofield40->setAppinfo(QString("OfflineRender node"));
Sofield40->setType(QString("SFNode"));
//initialization node (if any) goes here
SoProtoInterface18->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("traceEnabled"));
Sofield41->setAccessType(QString("initializeOnly"));
Sofield41->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield41->setType(QString("SFBool"));
Sofield41->setValue(QString("false"));
SoProtoInterface18->addChild(*Sofield41);

SoProtoDeclare17->addChild(*SoProtoInterface18);

SoProtoBody* SoProtoBody42 = new SoProtoBody();
SoViewpoint* SoViewpoint43 = new SoViewpoint();
SoViewpoint43->setDEF(QString("CameraViewpoint"));
SoIS* SoIS44 = new SoIS();
Soconnect* Soconnect45 = new Soconnect();
Soconnect45->setNodeField(QString("description"));
Soconnect45->setProtoField(QString("description"));
SoIS44->addChild(*Soconnect45);

Soconnect* Soconnect46 = new Soconnect();
Soconnect46->setNodeField(QString("position"));
Soconnect46->setProtoField(QString("position"));
SoIS44->addChild(*Soconnect46);

Soconnect* Soconnect47 = new Soconnect();
Soconnect47->setNodeField(QString("orientation"));
Soconnect47->setProtoField(QString("orientation"));
SoIS44->addChild(*Soconnect47);

Soconnect* Soconnect48 = new Soconnect();
Soconnect48->setNodeField(QString("fieldOfView"));
Soconnect48->setProtoField(QString("fieldOfView"));
SoIS44->addChild(*Soconnect48);

Soconnect* Soconnect49 = new Soconnect();
Soconnect49->setNodeField(QString("set_bind"));
Soconnect49->setProtoField(QString("set_bind"));
SoIS44->addChild(*Soconnect49);

Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("bindTime"));
Soconnect50->setProtoField(QString("bindTime"));
SoIS44->addChild(*Soconnect50);

Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("isBound"));
Soconnect51->setProtoField(QString("isBound"));
SoIS44->addChild(*Soconnect51);

SoViewpoint43->addChild(*SoIS44);

SoProtoBody42->addChild(*SoViewpoint43);

//NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation
SoNavigationInfo* SoNavigationInfo52 = new SoNavigationInfo();
SoNavigationInfo52->setDEF(QString("CameraNavInfo"));
SoNavigationInfo52->setType(new QString[]{QString("EXAMINE"), QString("FLY"), QString("ANY")}, 3);
SoIS* SoIS53 = new SoIS();
Soconnect* Soconnect54 = new Soconnect();
Soconnect54->setNodeField(QString("set_bind"));
Soconnect54->setProtoField(QString("set_bind"));
SoIS53->addChild(*Soconnect54);

Soconnect* Soconnect55 = new Soconnect();
Soconnect55->setNodeField(QString("headlight"));
Soconnect55->setProtoField(QString("headlight"));
SoIS53->addChild(*Soconnect55);

Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("visibilityLimit"));
Soconnect56->setProtoField(QString("farClipPlane"));
SoIS53->addChild(*Soconnect56);

//No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.
SoNavigationInfo52->addChild(*SoIS53);

SoProtoBody42->addChild(*SoNavigationInfo52);

//this DirectionalLight replaces NavigationInfo headlight in order to add color capability
SoDirectionalLight* SoDirectionalLight57 = new SoDirectionalLight();
SoDirectionalLight57->setDEF(QString("CameraDirectionalLight"));
SoDirectionalLight57->setGlobal(true);
//TODO confirm other default field values match NavigationInfo spec
SoIS* SoIS58 = new SoIS();
Soconnect* Soconnect59 = new Soconnect();
Soconnect59->setNodeField(QString("on"));
Soconnect59->setProtoField(QString("headlight"));
SoIS58->addChild(*Soconnect59);

Soconnect* Soconnect60 = new Soconnect();
Soconnect60->setNodeField(QString("color"));
Soconnect60->setProtoField(QString("headlightColor"));
SoIS58->addChild(*Soconnect60);

Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("intensity"));
Soconnect61->setProtoField(QString("headlightIntensity"));
SoIS58->addChild(*Soconnect61);

SoDirectionalLight57->addChild(*SoIS58);

SoProtoBody42->addChild(*SoDirectionalLight57);

SoPositionInterpolator* SoPositionInterpolator62 = new SoPositionInterpolator();
SoPositionInterpolator62->setDEF(QString("CameraPositionInterpolator"));
SoPositionInterpolator62->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator62->setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
SoIS* SoIS63 = new SoIS();
Soconnect* Soconnect64 = new Soconnect();
Soconnect64->setNodeField(QString("set_fraction"));
Soconnect64->setProtoField(QString("set_fraction"));
SoIS63->addChild(*Soconnect64);

SoPositionInterpolator62->addChild(*SoIS63);

SoProtoBody42->addChild(*SoPositionInterpolator62);

SoOrientationInterpolator* SoOrientationInterpolator65 = new SoOrientationInterpolator();
SoOrientationInterpolator65->setDEF(QString("CameraOrientationInterpolator"));
SoOrientationInterpolator65->setKey(new float[]{0.0,1.0}, 2);
SoOrientationInterpolator65->setKeyValue(new float[]{0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0}, 8);
SoIS* SoIS66 = new SoIS();
Soconnect* Soconnect67 = new Soconnect();
Soconnect67->setNodeField(QString("set_fraction"));
Soconnect67->setProtoField(QString("set_fraction"));
SoIS66->addChild(*Soconnect67);

SoOrientationInterpolator65->addChild(*SoIS66);

SoProtoBody42->addChild(*SoOrientationInterpolator65);

SoROUTE* SoROUTE68 = new SoROUTE();
SoROUTE68->setFromField(QString("value_changed"));
SoROUTE68->setFromNode(QString("CameraPositionInterpolator"));
SoROUTE68->setToField(QString("position"));
SoROUTE68->setToNode(QString("CameraViewpoint"));
SoProtoBody42->addChild(*SoROUTE68);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromField(QString("value_changed"));
SoROUTE69->setFromNode(QString("CameraOrientationInterpolator"));
SoROUTE69->setToField(QString("orientation"));
SoROUTE69->setToNode(QString("CameraViewpoint"));
SoProtoBody42->addChild(*SoROUTE69);

SoScript* SoScript70 = new SoScript();
SoScript70->setDEF(QString("CameraScript"));
SoScript70->setDirectOutput(true);
SoScript70->setMustEvaluate(true);
//binding is controlled externally, all camera operations proceed the same regardless of whether bound or not
Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("description"));
Sofield71->setAccessType(QString("inputOutput"));
Sofield71->setAppinfo(QString("Text description to be displayed for this Camera"));
Sofield71->setType(QString("SFString"));
SoScript70->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setName(QString("position"));
Sofield72->setAccessType(QString("inputOutput"));
Sofield72->setAppinfo(QString("Camera position in local transformation frame"));
Sofield72->setType(QString("SFVec3f"));
SoScript70->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("orientation"));
Sofield73->setAccessType(QString("inputOutput"));
Sofield73->setAppinfo(QString("Camera rotation in local transformation frame"));
Sofield73->setType(QString("SFRotation"));
SoScript70->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("set_fraction"));
Sofield74->setAccessType(QString("inputOnly"));
Sofield74->setAppinfo(QString("input fraction drives interpolators"));
Sofield74->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("set_bind"));
Sofield75->setAccessType(QString("inputOnly"));
Sofield75->setAppinfo(QString("input event binds or unbinds this Camera"));
Sofield75->setType(QString("SFBool"));
SoScript70->addChild(*Sofield75);

Sofield* Sofield76 = new Sofield();
Sofield76->setName(QString("fieldOfView"));
Sofield76->setAccessType(QString("inputOutput"));
Sofield76->setAppinfo(QString("pi/4"));
Sofield76->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield76);

Sofield* Sofield77 = new Sofield();
Sofield77->setName(QString("nearClipPlane"));
Sofield77->setAccessType(QString("inputOutput"));
Sofield77->setAppinfo(QString("Vector distance to near clipping plane"));
Sofield77->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield77);

Sofield* Sofield78 = new Sofield();
Sofield78->setName(QString("farClipPlane"));
Sofield78->setAccessType(QString("inputOutput"));
Sofield78->setAppinfo(QString("Vector distance to far clipping plane"));
Sofield78->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield78);

Sofield* Sofield79 = new Sofield();
Sofield79->setName(QString("shots"));
Sofield79->setAccessType(QString("inputOutput"));
Sofield79->setAppinfo(QString("Array of CameraShot nodes which in turn contain CameraMovement nodes"));
Sofield79->setType(QString("MFNode"));
//initialization nodes (if any) go here
SoScript70->addChild(*Sofield79);

Sofield* Sofield80 = new Sofield();
Sofield80->setName(QString("filterColor"));
Sofield80->setAccessType(QString("inputOutput"));
Sofield80->setAppinfo(QString("Camera filter color that modifies virtual lens capture"));
Sofield80->setType(QString("SFColor"));
SoScript70->addChild(*Sofield80);

Sofield* Sofield81 = new Sofield();
Sofield81->setName(QString("filterTransparency"));
Sofield81->setAccessType(QString("inputOutput"));
Sofield81->setAppinfo(QString("Camera filter transparency that modifies virtual lens capture"));
Sofield81->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield81);

Sofield* Sofield82 = new Sofield();
Sofield82->setName(QString("upVector"));
Sofield82->setAccessType(QString("inputOutput"));
Sofield82->setAppinfo(QString("upVector changes modify camera orientation (and possibly vice versa)"));
Sofield82->setType(QString("SFVec3f"));
SoScript70->addChild(*Sofield82);

Sofield* Sofield83 = new Sofield();
Sofield83->setName(QString("fStop"));
Sofield83->setAccessType(QString("inputOutput"));
Sofield83->setAppinfo(QString("Focal length divided effective aperture diameter indicating width of focal plane"));
Sofield83->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield83);

Sofield* Sofield84 = new Sofield();
Sofield84->setName(QString("focusDistance"));
Sofield84->setAccessType(QString("inputOutput"));
Sofield84->setAppinfo(QString("Distance to focal plane of sharpest focus"));
Sofield84->setType(QString("SFFloat"));
SoScript70->addChild(*Sofield84);

Sofield* Sofield85 = new Sofield();
Sofield85->setName(QString("isActive"));
Sofield85->setAccessType(QString("outputOnly"));
Sofield85->setAppinfo(QString("Mark start/stop with true/false output respectively useful to trigger external animations"));
Sofield85->setType(QString("SFBool"));
SoScript70->addChild(*Sofield85);

Sofield* Sofield86 = new Sofield();
Sofield86->setName(QString("totalDuration"));
Sofield86->setAccessType(QString("outputOnly"));
Sofield86->setAppinfo(QString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations"));
Sofield86->setType(QString("SFTime"));
SoScript70->addChild(*Sofield86);

Sofield* Sofield87 = new Sofield();
Sofield87->setName(QString("offlineRender"));
Sofield87->setAccessType(QString("inputOutput"));
Sofield87->setAppinfo(QString("OfflineRender node"));
Sofield87->setType(QString("SFNode"));
//initialization node (if any) goes here
SoScript70->addChild(*Sofield87);

Sofield* Sofield88 = new Sofield();
Sofield88->setName(QString("ViewpointNode"));
Sofield88->setAccessType(QString("initializeOnly"));
Sofield88->setAppinfo(QString("node reference to permit getting setting fields from within Script"));
Sofield88->setType(QString("SFNode"));
SoViewpoint* SoViewpoint89 = new SoViewpoint();
SoViewpoint89->setUSE(QString("CameraViewpoint"));
Sofield88->addChild(*SoViewpoint89);

SoScript70->addChild(*Sofield88);

Sofield* Sofield90 = new Sofield();
Sofield90->setName(QString("NavInfoNode"));
Sofield90->setAccessType(QString("initializeOnly"));
Sofield90->setAppinfo(QString("node reference to permit getting setting fields from within Script"));
Sofield90->setType(QString("SFNode"));
SoNavigationInfo* SoNavigationInfo91 = new SoNavigationInfo();
SoNavigationInfo91->setUSE(QString("CameraNavInfo"));
Sofield90->addChild(*SoNavigationInfo91);

SoScript70->addChild(*Sofield90);

Sofield* Sofield92 = new Sofield();
Sofield92->setName(QString("CameraPI"));
Sofield92->setAccessType(QString("initializeOnly"));
Sofield92->setAppinfo(QString("node reference to permit getting setting fields from within Script"));
Sofield92->setType(QString("SFNode"));
SoPositionInterpolator* SoPositionInterpolator93 = new SoPositionInterpolator();
SoPositionInterpolator93->setUSE(QString("CameraPositionInterpolator"));
Sofield92->addChild(*SoPositionInterpolator93);

SoScript70->addChild(*Sofield92);

Sofield* Sofield94 = new Sofield();
Sofield94->setName(QString("CameraOI"));
Sofield94->setAccessType(QString("initializeOnly"));
Sofield94->setAppinfo(QString("node reference to permit getting setting fields from within Script"));
Sofield94->setType(QString("SFNode"));
SoOrientationInterpolator* SoOrientationInterpolator95 = new SoOrientationInterpolator();
SoOrientationInterpolator95->setUSE(QString("CameraOrientationInterpolator"));
Sofield94->addChild(*SoOrientationInterpolator95);

SoScript70->addChild(*Sofield94);

Sofield* Sofield96 = new Sofield();
Sofield96->setName(QString("key"));
Sofield96->setAccessType(QString("inputOutput"));
Sofield96->setAppinfo(QString("key array for interpolators"));
Sofield96->setType(QString("MFFloat"));
SoScript70->addChild(*Sofield96);

Sofield* Sofield97 = new Sofield();
Sofield97->setName(QString("keyValuePosition"));
Sofield97->setAccessType(QString("inputOutput"));
Sofield97->setAppinfo(QString("keyValue array for PositionInterpolator"));
Sofield97->setType(QString("MFVec3f"));
SoScript70->addChild(*Sofield97);

Sofield* Sofield98 = new Sofield();
Sofield98->setName(QString("keyValueOrientation"));
Sofield98->setAccessType(QString("inputOutput"));
Sofield98->setAppinfo(QString("keyValue array for OrientationInterpolator"));
Sofield98->setType(QString("MFRotation"));
SoScript70->addChild(*Sofield98);

Sofield* Sofield99 = new Sofield();
Sofield99->setName(QString("animated"));
Sofield99->setAccessType(QString("inputOutput"));
Sofield99->setAppinfo(QString("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"));
Sofield99->setType(QString("SFBool"));
Sofield99->setValue(QString("false"));
SoScript70->addChild(*Sofield99);

Sofield* Sofield100 = new Sofield();
Sofield100->setName(QString("initialized"));
Sofield100->setAccessType(QString("initializeOnly"));
Sofield100->setAppinfo(QString("perform checkShots() function once immediately after initialization"));
Sofield100->setType(QString("SFBool"));
Sofield100->setValue(QString("false"));
SoScript70->addChild(*Sofield100);

Sofield* Sofield101 = new Sofield();
Sofield101->setName(QString("shotCount"));
Sofield101->setAccessType(QString("initializeOnly"));
Sofield101->setAppinfo(QString("how many CameraShot nodes are contained in shots array"));
Sofield101->setType(QString("SFInt32"));
Sofield101->setValue(QString("0"));
SoScript70->addChild(*Sofield101);

Sofield* Sofield102 = new Sofield();
Sofield102->setName(QString("movesCount"));
Sofield102->setAccessType(QString("initializeOnly"));
Sofield102->setAppinfo(QString("how many CameraMove nodes are contained in moves array"));
Sofield102->setType(QString("SFInt32"));
Sofield102->setValue(QString("0"));
SoScript70->addChild(*Sofield102);

Sofield* Sofield103 = new Sofield();
Sofield103->setName(QString("frameCount"));
Sofield103->setAccessType(QString("initializeOnly"));
Sofield103->setAppinfo(QString("how many frames were created in current loop"));
Sofield103->setType(QString("SFFloat"));
Sofield103->setValue(QString("0"));
SoScript70->addChild(*Sofield103);

Sofield* Sofield104 = new Sofield();
Sofield104->setName(QString("startTime"));
Sofield104->setAccessType(QString("initializeOnly"));
Sofield104->setAppinfo(QString("holding variable"));
Sofield104->setType(QString("SFTime"));
Sofield104->setValue(QString("0"));
SoScript70->addChild(*Sofield104);

Sofield* Sofield105 = new Sofield();
Sofield105->setName(QString("priorTraceTime"));
Sofield105->setAccessType(QString("initializeOnly"));
Sofield105->setAppinfo(QString("holding variable"));
Sofield105->setType(QString("SFTime"));
Sofield105->setValue(QString("0"));
SoScript70->addChild(*Sofield105);

Sofield* Sofield106 = new Sofield();
Sofield106->setName(QString("traceEnabled"));
Sofield106->setAccessType(QString("initializeOnly"));
Sofield106->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield106->setType(QString("SFBool"));
SoScript70->addChild(*Sofield106);

SoIS* SoIS107 = new SoIS();
Soconnect* Soconnect108 = new Soconnect();
Soconnect108->setNodeField(QString("description"));
Soconnect108->setProtoField(QString("description"));
SoIS107->addChild(*Soconnect108);

Soconnect* Soconnect109 = new Soconnect();
Soconnect109->setNodeField(QString("position"));
Soconnect109->setProtoField(QString("position"));
SoIS107->addChild(*Soconnect109);

Soconnect* Soconnect110 = new Soconnect();
Soconnect110->setNodeField(QString("orientation"));
Soconnect110->setProtoField(QString("orientation"));
SoIS107->addChild(*Soconnect110);

Soconnect* Soconnect111 = new Soconnect();
Soconnect111->setNodeField(QString("set_fraction"));
Soconnect111->setProtoField(QString("set_fraction"));
SoIS107->addChild(*Soconnect111);

Soconnect* Soconnect112 = new Soconnect();
Soconnect112->setNodeField(QString("set_bind"));
Soconnect112->setProtoField(QString("set_bind"));
SoIS107->addChild(*Soconnect112);

Soconnect* Soconnect113 = new Soconnect();
Soconnect113->setNodeField(QString("fieldOfView"));
Soconnect113->setProtoField(QString("fieldOfView"));
SoIS107->addChild(*Soconnect113);

Soconnect* Soconnect114 = new Soconnect();
Soconnect114->setNodeField(QString("nearClipPlane"));
Soconnect114->setProtoField(QString("nearClipPlane"));
SoIS107->addChild(*Soconnect114);

Soconnect* Soconnect115 = new Soconnect();
Soconnect115->setNodeField(QString("farClipPlane"));
Soconnect115->setProtoField(QString("farClipPlane"));
SoIS107->addChild(*Soconnect115);

Soconnect* Soconnect116 = new Soconnect();
Soconnect116->setNodeField(QString("shots"));
Soconnect116->setProtoField(QString("shots"));
SoIS107->addChild(*Soconnect116);

Soconnect* Soconnect117 = new Soconnect();
Soconnect117->setNodeField(QString("filterColor"));
Soconnect117->setProtoField(QString("filterColor"));
SoIS107->addChild(*Soconnect117);

Soconnect* Soconnect118 = new Soconnect();
Soconnect118->setNodeField(QString("filterTransparency"));
Soconnect118->setProtoField(QString("filterTransparency"));
SoIS107->addChild(*Soconnect118);

Soconnect* Soconnect119 = new Soconnect();
Soconnect119->setNodeField(QString("upVector"));
Soconnect119->setProtoField(QString("upVector"));
SoIS107->addChild(*Soconnect119);

Soconnect* Soconnect120 = new Soconnect();
Soconnect120->setNodeField(QString("fStop"));
Soconnect120->setProtoField(QString("fStop"));
SoIS107->addChild(*Soconnect120);

Soconnect* Soconnect121 = new Soconnect();
Soconnect121->setNodeField(QString("focusDistance"));
Soconnect121->setProtoField(QString("focusDistance"));
SoIS107->addChild(*Soconnect121);

Soconnect* Soconnect122 = new Soconnect();
Soconnect122->setNodeField(QString("isActive"));
Soconnect122->setProtoField(QString("isActive"));
SoIS107->addChild(*Soconnect122);

Soconnect* Soconnect123 = new Soconnect();
Soconnect123->setNodeField(QString("totalDuration"));
Soconnect123->setProtoField(QString("totalDuration"));
SoIS107->addChild(*Soconnect123);

Soconnect* Soconnect124 = new Soconnect();
Soconnect124->setNodeField(QString("offlineRender"));
Soconnect124->setProtoField(QString("offlineRender"));
SoIS107->addChild(*Soconnect124);

Soconnect* Soconnect125 = new Soconnect();
Soconnect125->setNodeField(QString("traceEnabled"));
Soconnect125->setProtoField(QString("traceEnabled"));
SoIS107->addChild(*Soconnect125);

SoScript70->addChild(*SoIS107);


//SoScript70->setSourceCode(QString("ecmascript:")+
//_T("function initialize () // CameraScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    NavInfoNode.avatarSize[0]   = nearClipPlane;")+
//_T("    // remaining setups deferred to invocation of checkShots() method")+
//_T("    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization")+
//_T("    alwaysPrint ('initialize complete');")+
//_T("}")+
//_T("function checkShots (eventValue)")+
//_T("{")+
//_T("    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');")+
//_T("    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes")+
//_T("    totalDuration= 0;")+
//_T("    shotCount  = shots.length;")+
//_T("    movesCount = 0;")+
//_T("    for (i = 0; i < shotCount; i++) // shots index")+
//_T("    {")+
//_T("       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);")+
//_T("       movesCount   += shots[i].moves.length;")+
//_T("       totalDuration = totalDuration + shots[i].shotDuration;")+
//_T("       if (shots[i].moves.length == 0)")+
//_T("       {")+
//_T("          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');")+
//_T("       }")+
//_T("    }")+
//_T("    // size checks before proceeding")+
//_T("    if (shotCount == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');")+
//_T("       return;")+
//_T("    }")+
//_T("    else if (movesCount == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');")+
//_T("       return;")+
//_T("    }")+
//_T("    else if (totalDuration == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');")+
//_T("       return;")+
//_T("    }")+
//_T("    tracePrint ('number of contained CameraShot nodes=' + shotCount);")+
//_T("    tracePrint ('number of contained CameraMove nodes=' + movesCount);")+
//_T("    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');")+
//_T("    // compute interpolators")+
//_T("    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation")+
//_T("    for (i = 0; i < shotCount; i++) // shots index")+
//_T("    {")+
//_T("        if (i==0) // initial entries")+
//_T("        {")+
//_T("           key[0]                   = 0.0; // no previous move")+
//_T("           keyValuePosition[0]      = shots[i].initialPosition;")+
//_T("           keyValueOrientation[0]   = shots[i].initialOrientation;")+
//_T("        }")+
//_T("        else     // new shot repositions, reorients camera as clean break from preceding shot/move")+
//_T("        {")+
//_T("           key[k+1]                 = key[k]; // start from end from previous move")+
//_T("           keyValuePosition[k+1]    = shots[i].initialPosition;")+
//_T("           keyValueOrientation[k+1] = shots[i].initialOrientation;")+
//_T("           k++;")+
//_T("        }")+
//_T("        tracePrint (shots[i].description);")+
//_T("        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);")+
//_T("        for (j = 0; j < shots[i].moves.length; j++) // moves index")+
//_T("        {")+
//_T("            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime")+
//_T("            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime")+
//_T("            //  tracePrint ('durationFloat=' + durationFloat);")+
//_T("            key[k+1]               = key[k] + (durationFloat / totalDuration);")+
//_T("            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;")+
//_T("            if (!animated)")+
//_T("            {")+
//_T("                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;")+
//_T("            }")+
//_T("            else")+
//_T("            {")+
//_T("                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)")+
//_T("                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions")+
//_T("                // test if difference vector is zero, if so maintain previous rotation")+
//_T("                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();")+
//_T("                if (shotVector.length() >= 0)")+
//_T("                {")+
//_T("                    // default view direction is along -Z axis")+
//_T("                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);")+
//_T("                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;")+
//_T("                }")+
//_T("                else // note (k > 0)")+
//_T("                {")+
//_T("                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change")+
//_T("                }")+
//_T("                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());")+
//_T("                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());")+
//_T("                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());")+
//_T("                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());")+
//_T("                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());")+
//_T("                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');")+
//_T("            }")+
//_T("            k++; // update index to match latest key, keyValuePosition, keyValueOrientation")+
//_T("            // check animated parameter:  set true if any of moves are tracking moves")+
//_T("            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true")+
//_T("         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);")+
//_T("            // intermediate trace")+
//_T("            tracePrint ('                key=' + key);")+
//_T("            tracePrint ('   keyValuePosition=' + keyValuePosition);")+
//_T("            tracePrint ('keyValueOrientation=' + keyValueOrientation);")+
//_T("            tracePrint ('- ' + shots[i].moves[j].description);")+
//_T("        }")+
//_T("    }")+
//_T("    tracePrint ('                key=' + key);")+
//_T("    tracePrint ('   keyValuePosition=' + keyValuePosition);")+
//_T("    tracePrint ('keyValueOrientation=' + keyValueOrientation);")+
//_T("    if (key.length != keyValuePosition.length)")+
//_T("    {")+
//_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
//_T("                  'key.length=' + key.length + ' must equal ' +")+
//_T("                  'keyValuePosition.length=' + keyValuePosition.length);")+
//_T("    }")+
//_T("    if (key.length != keyValueOrientation.length)")+
//_T("    {")+
//_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
//_T("                  'key.length=' + key.length + ' must equal ' +")+
//_T("                  'keyValueOrientation.length=' + keyValueOrientation.length);")+
//_T("    }")+
//_T("    if (key.length != (shotCount + movesCount))")+
//_T("    {")+
//_T("      alwaysPrint ('warning: internal error during array construction, ' +")+
//_T("                  'key.length=' + key.length + ' must equal ' +")+
//_T("                  '(shotCount + movesCount)=' + (shotCount + movesCount));")+
//_T("    }")+
//_T("    tracePrint ('           animated=' + animated);")+
//_T("    // set node values")+
//_T("    CameraPI.key      = key;")+
//_T("    CameraOI.key      = key;")+
//_T("    CameraPI.keyValue = keyValuePosition;")+
//_T("    CameraOI.keyValue = keyValueOrientation;")+
//_T("    if (!animated) // output results")+
//_T("    {")+
//_T("        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
//_T("        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
//_T("    }")+
//_T("    tracePrint ('checkShots() complete');")+
//_T("}")+
//_T("function stripBrackets (fieldArray)")+
//_T("{")+
//_T("    // some browsers add brackets to array output strings, this function strips them")+
//_T("    outputString = '';")+
//_T("    for (i = 0; i < fieldArray.length; i++)")+
//_T("    {")+
//_T("       outputString += fieldArray[i].toString();")+
//_T("       if (i < fieldArray.length - 1) outputString += ' ';")+
//_T("    }")+
//_T("    return outputString;")+
//_T("}")+
//_T("function set_fraction (eventValue, timestamp) // input event received for inputOnly field")+
//_T("{")+
//_T("   // traceEnabled = false;  // for testing purposes")+
//_T("   // if Camera is being animated, immediately recompute interpolator settings")+
//_T("   if (animated) checkShots (true);")+
//_T("   // trace progress on console with reduced output frequency")+
//_T("   if (frameCount == 0)")+
//_T("   {")+
//_T("      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);")+
//_T("      startTime      = timestamp;")+
//_T("      priorTraceTime = timestamp;")+
//_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
//_T("      if (animated) // output results")+
//_T("      {")+
//_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
//_T("        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
//_T("        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
//_T("      }")+
//_T("   }")+
//_T("   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval")+
//_T("   {")+
//_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
//_T("      priorTraceTime = timestamp;")+
//_T("      if (animated) // output results")+
//_T("      {")+
//_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
//_T("        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');")+
//_T("        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');")+
//_T("      }")+
//_T("   }")+
//_T("   if (eventValue == 0)")+
//_T("   {")+
//_T("      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored")+
//_T("      frameCount++;")+
//_T("   }")+
//_T("   else if (eventValue == 1)")+
//_T("   {")+
//_T("      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());")+
//_T("      if (animated) // output results")+
//_T("      {")+
//_T("        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());")+
//_T("      }")+
//_T("      alwaysPrint ('Animation loop complete.');")+
//_T("      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally")+
//_T("   }")+
//_T("   else")+
//_T("   {")+
//_T("      frameCount++;")+
//_T("   }")+
//_T("}")+
//_T("function set_bind (eventValue) // input event received for inputOnly field")+
//_T("{")+
//_T("   // need to ensure CameraShot nodes are properly initialized")+
//_T("   if (initialized == false)")+
//_T("   {")+
//_T("      checkShots (true);")+
//_T("      initialized = true;")+
//_T("   }")+
//_T("   if (eventValue)")+
//_T("   {")+
//_T("       tracePrint ('Camera has been bound');")+
//_T("   }")+
//_T("   else")+
//_T("   {")+
//_T("       tracePrint ('Camera has been unbound');")+
//_T("   }")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_position (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    position = eventValue;")+
//_T("}")+
//_T("function set_orientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    orientation = eventValue;")+
//_T("}")+
//_T("function set_fieldOfView (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    fieldOfView = eventValue;")+
//_T("}")+
//_T("function set_nearClipPlane (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    nearClipPlane = eventValue;")+
//_T("}")+
//_T("function set_farClipPlane (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    farClipPlane = eventValue;")+
//_T("}")+
//_T("function set_shots (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    shots = eventValue;")+
//_T("}")+
//_T("function set_filterColor (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    filterColor = eventValue;")+
//_T("}")+
//_T("function set_filterTransparency (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    filterTransparency = eventValue;")+
//_T("}")+
//_T("function set_upVector (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    upVector = eventValue;")+
//_T("}")+
//_T("function set_fStop (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    fStop = eventValue;")+
//_T("}")+
//_T("function set_focusDistance (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    focusDistance = eventValue;")+
//_T("}")+
//_T("function set_offlineRender (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    offlineRender = eventValue;")+
//_T("}")+
//_T("function set_key (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    key = eventValue;")+
//_T("}")+
//_T("function set_keyValuePosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValuePosition = eventValue;")+
//_T("}")+
//_T("function set_keyValueOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValueOrientation = eventValue;")+
//_T("}")+
//_T("function set_animated (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    animated = eventValue;")+
//_T("}")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[Camera] ' + outputString + '\\n');")+
//_T("}"));
SoProtoBody42->addChild(*SoScript70);

SoROUTE* SoROUTE126 = new SoROUTE();
SoROUTE126->setFromField(QString("position"));
SoROUTE126->setFromNode(QString("CameraScript"));
SoROUTE126->setToField(QString("position"));
SoROUTE126->setToNode(QString("CameraViewpoint"));
SoProtoBody42->addChild(*SoROUTE126);

SoROUTE* SoROUTE127 = new SoROUTE();
SoROUTE127->setFromField(QString("orientation"));
SoROUTE127->setFromNode(QString("CameraScript"));
SoROUTE127->setToField(QString("orientation"));
SoROUTE127->setToNode(QString("CameraViewpoint"));
SoProtoBody42->addChild(*SoROUTE127);

SoROUTE* SoROUTE128 = new SoROUTE();
SoROUTE128->setFromField(QString("isActive"));
SoROUTE128->setFromNode(QString("CameraScript"));
SoROUTE128->setToField(QString("set_bind"));
SoROUTE128->setToNode(QString("CameraViewpoint"));
SoProtoBody42->addChild(*SoROUTE128);

SoROUTE* SoROUTE129 = new SoROUTE();
SoROUTE129->setFromField(QString("isActive"));
SoROUTE129->setFromNode(QString("CameraScript"));
SoROUTE129->setToField(QString("set_bind"));
SoROUTE129->setToNode(QString("CameraNavInfo"));
SoProtoBody42->addChild(*SoROUTE129);

SoROUTE* SoROUTE130 = new SoROUTE();
SoROUTE130->setFromField(QString("isActive"));
SoROUTE130->setFromNode(QString("CameraScript"));
SoROUTE130->setToField(QString("on"));
SoROUTE130->setToNode(QString("CameraDirectionalLight"));
SoProtoBody42->addChild(*SoROUTE130);

SoProtoDeclare17->addChild(*SoProtoBody42);

SoNode16->addChild(*SoProtoDeclare17);

//=============== CameraShot ==============
SoProtoDeclare* SoProtoDeclare131 = new SoProtoDeclare();
SoProtoDeclare131->setName(QString("CameraShot"));
SoProtoDeclare131->setAppinfo(QString("CameraShot collects a specific set of CameraMovement animations that make up an individual shot."));
SoProtoInterface* SoProtoInterface132 = new SoProtoInterface();
Sofield* Sofield133 = new Sofield();
Sofield133->setName(QString("description"));
Sofield133->setAccessType(QString("inputOutput"));
Sofield133->setAppinfo(QString("Text description to be displayed for this CameraShot"));
Sofield133->setType(QString("SFString"));
SoProtoInterface132->addChild(*Sofield133);

Sofield* Sofield134 = new Sofield();
Sofield134->setName(QString("enabled"));
Sofield134->setAccessType(QString("inputOutput"));
Sofield134->setAppinfo(QString("Whether this CameraShot can be activated"));
Sofield134->setType(QString("SFBool"));
Sofield134->setValue(QString("true"));
SoProtoInterface132->addChild(*Sofield134);

Sofield* Sofield135 = new Sofield();
Sofield135->setName(QString("moves"));
Sofield135->setAccessType(QString("inputOutput"));
Sofield135->setAppinfo(QString("Set of CameraMovement nodes"));
Sofield135->setType(QString("MFNode"));
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
SoProtoInterface132->addChild(*Sofield135);

Sofield* Sofield136 = new Sofield();
Sofield136->setName(QString("initialPosition"));
Sofield136->setAccessType(QString("inputOutput"));
Sofield136->setAppinfo(QString("Setup to reinitialize camera position for this shot"));
Sofield136->setType(QString("SFVec3f"));
Sofield136->setValue(QString("0 0 10"));
SoProtoInterface132->addChild(*Sofield136);

Sofield* Sofield137 = new Sofield();
Sofield137->setName(QString("initialOrientation"));
Sofield137->setAccessType(QString("inputOutput"));
Sofield137->setAppinfo(QString("Setup to reinitialize camera rotation for this shot"));
Sofield137->setType(QString("SFRotation"));
Sofield137->setValue(QString("0 0 1 0"));
SoProtoInterface132->addChild(*Sofield137);

Sofield* Sofield138 = new Sofield();
Sofield138->setName(QString("initialAimPoint"));
Sofield138->setAccessType(QString("inputOutput"));
Sofield138->setAppinfo(QString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"));
Sofield138->setType(QString("SFVec3f"));
Sofield138->setValue(QString("0 0 0"));
SoProtoInterface132->addChild(*Sofield138);

Sofield* Sofield139 = new Sofield();
Sofield139->setName(QString("initialFieldOfView"));
Sofield139->setAccessType(QString("inputOutput"));
Sofield139->setAppinfo(QString("pi/4"));
Sofield139->setType(QString("SFFloat"));
Sofield139->setValue(QString("0.7854"));
SoProtoInterface132->addChild(*Sofield139);

Sofield* Sofield140 = new Sofield();
Sofield140->setName(QString("initialFStop"));
Sofield140->setAccessType(QString("inputOutput"));
Sofield140->setAppinfo(QString("Focal length divided effective aperture diameter indicating width of focal plane"));
Sofield140->setType(QString("SFFloat"));
Sofield140->setValue(QString("5.6"));
SoProtoInterface132->addChild(*Sofield140);

Sofield* Sofield141 = new Sofield();
Sofield141->setName(QString("initialFocusDistance"));
Sofield141->setAccessType(QString("inputOutput"));
Sofield141->setAppinfo(QString("Distance to focal plane of sharpest focus"));
Sofield141->setType(QString("SFFloat"));
Sofield141->setValue(QString("10"));
SoProtoInterface132->addChild(*Sofield141);

Sofield* Sofield142 = new Sofield();
Sofield142->setName(QString("shotDuration"));
Sofield142->setAccessType(QString("outputOnly"));
Sofield142->setAppinfo(QString("Subtotal duration of contained CameraMovement move durations"));
Sofield142->setType(QString("SFTime"));
SoProtoInterface132->addChild(*Sofield142);

Sofield* Sofield143 = new Sofield();
Sofield143->setName(QString("isActive"));
Sofield143->setAccessType(QString("outputOnly"));
Sofield143->setAppinfo(QString("Mark start/stop with true/false output respectively useful to trigger external animations"));
Sofield143->setType(QString("SFBool"));
SoProtoInterface132->addChild(*Sofield143);

Sofield* Sofield144 = new Sofield();
Sofield144->setName(QString("traceEnabled"));
Sofield144->setAccessType(QString("initializeOnly"));
Sofield144->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield144->setType(QString("SFBool"));
Sofield144->setValue(QString("false"));
SoProtoInterface132->addChild(*Sofield144);

SoProtoDeclare131->addChild(*SoProtoInterface132);

SoProtoBody* SoProtoBody145 = new SoProtoBody();
SoScript* SoScript146 = new SoScript();
SoScript146->setDEF(QString("CameraShotScript"));
SoScript146->setDirectOutput(true);
SoScript146->setMustEvaluate(true);
Sofield* Sofield147 = new Sofield();
Sofield147->setName(QString("description"));
Sofield147->setAccessType(QString("inputOutput"));
Sofield147->setAppinfo(QString("Text description to be displayed for this CameraShot"));
Sofield147->setType(QString("SFString"));
SoScript146->addChild(*Sofield147);

Sofield* Sofield148 = new Sofield();
Sofield148->setName(QString("enabled"));
Sofield148->setAccessType(QString("inputOutput"));
Sofield148->setAppinfo(QString("Whether this CameraShot can be activated"));
Sofield148->setType(QString("SFBool"));
SoScript146->addChild(*Sofield148);

Sofield* Sofield149 = new Sofield();
Sofield149->setName(QString("moves"));
Sofield149->setAccessType(QString("inputOutput"));
Sofield149->setAppinfo(QString("Set of CameraMovement nodes"));
Sofield149->setType(QString("MFNode"));
//initialization nodes (if any) go here
SoScript146->addChild(*Sofield149);

Sofield* Sofield150 = new Sofield();
Sofield150->setName(QString("initialPosition"));
Sofield150->setAccessType(QString("inputOutput"));
Sofield150->setAppinfo(QString("Setup to reinitialize camera position for this shot"));
Sofield150->setType(QString("SFVec3f"));
SoScript146->addChild(*Sofield150);

Sofield* Sofield151 = new Sofield();
Sofield151->setName(QString("initialOrientation"));
Sofield151->setAccessType(QString("inputOutput"));
Sofield151->setAppinfo(QString("Setup to reinitialize camera rotation for this shot"));
Sofield151->setType(QString("SFRotation"));
SoScript146->addChild(*Sofield151);

Sofield* Sofield152 = new Sofield();
Sofield152->setName(QString("initialAimPoint"));
Sofield152->setAccessType(QString("inputOutput"));
Sofield152->setAppinfo(QString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"));
Sofield152->setType(QString("SFVec3f"));
SoScript146->addChild(*Sofield152);

Sofield* Sofield153 = new Sofield();
Sofield153->setName(QString("initialFieldOfView"));
Sofield153->setAccessType(QString("inputOutput"));
Sofield153->setAppinfo(QString("pi/4"));
Sofield153->setType(QString("SFFloat"));
SoScript146->addChild(*Sofield153);

Sofield* Sofield154 = new Sofield();
Sofield154->setName(QString("initialFStop"));
Sofield154->setAccessType(QString("inputOutput"));
Sofield154->setAppinfo(QString("Focal length divided effective aperture diameter indicating width of focal plane"));
Sofield154->setType(QString("SFFloat"));
SoScript146->addChild(*Sofield154);

Sofield* Sofield155 = new Sofield();
Sofield155->setName(QString("initialFocusDistance"));
Sofield155->setAccessType(QString("inputOutput"));
Sofield155->setAppinfo(QString("Distance to focal plane of sharpest focus"));
Sofield155->setType(QString("SFFloat"));
SoScript146->addChild(*Sofield155);

Sofield* Sofield156 = new Sofield();
Sofield156->setName(QString("shotDuration"));
Sofield156->setAccessType(QString("outputOnly"));
Sofield156->setAppinfo(QString("Subtotal duration of contained CameraMovement move durations"));
Sofield156->setType(QString("SFTime"));
SoScript146->addChild(*Sofield156);

Sofield* Sofield157 = new Sofield();
Sofield157->setName(QString("isActive"));
Sofield157->setAccessType(QString("outputOnly"));
Sofield157->setAppinfo(QString("Mark start/stop with true/false output respectively useful to trigger external animations"));
Sofield157->setType(QString("SFBool"));
SoScript146->addChild(*Sofield157);

Sofield* Sofield158 = new Sofield();
Sofield158->setName(QString("traceEnabled"));
Sofield158->setAccessType(QString("initializeOnly"));
Sofield158->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield158->setType(QString("SFBool"));
SoScript146->addChild(*Sofield158);

Sofield* Sofield159 = new Sofield();
Sofield159->setName(QString("key"));
Sofield159->setAccessType(QString("inputOutput"));
Sofield159->setAppinfo(QString("key array for interpolators"));
Sofield159->setType(QString("MFFloat"));
SoScript146->addChild(*Sofield159);

Sofield* Sofield160 = new Sofield();
Sofield160->setName(QString("keyValuePosition"));
Sofield160->setAccessType(QString("inputOutput"));
Sofield160->setAppinfo(QString("keyValue array for PositionInterpolator"));
Sofield160->setType(QString("MFVec3f"));
SoScript146->addChild(*Sofield160);

Sofield* Sofield161 = new Sofield();
Sofield161->setName(QString("keyValueOrientation"));
Sofield161->setAccessType(QString("inputOutput"));
Sofield161->setAppinfo(QString("keyValue array for OrientationInterpolator"));
Sofield161->setType(QString("MFRotation"));
SoScript146->addChild(*Sofield161);

SoIS* SoIS162 = new SoIS();
Soconnect* Soconnect163 = new Soconnect();
Soconnect163->setNodeField(QString("description"));
Soconnect163->setProtoField(QString("description"));
SoIS162->addChild(*Soconnect163);

Soconnect* Soconnect164 = new Soconnect();
Soconnect164->setNodeField(QString("enabled"));
Soconnect164->setProtoField(QString("enabled"));
SoIS162->addChild(*Soconnect164);

Soconnect* Soconnect165 = new Soconnect();
Soconnect165->setNodeField(QString("moves"));
Soconnect165->setProtoField(QString("moves"));
SoIS162->addChild(*Soconnect165);

Soconnect* Soconnect166 = new Soconnect();
Soconnect166->setNodeField(QString("initialPosition"));
Soconnect166->setProtoField(QString("initialPosition"));
SoIS162->addChild(*Soconnect166);

Soconnect* Soconnect167 = new Soconnect();
Soconnect167->setNodeField(QString("initialOrientation"));
Soconnect167->setProtoField(QString("initialOrientation"));
SoIS162->addChild(*Soconnect167);

Soconnect* Soconnect168 = new Soconnect();
Soconnect168->setNodeField(QString("initialAimPoint"));
Soconnect168->setProtoField(QString("initialAimPoint"));
SoIS162->addChild(*Soconnect168);

Soconnect* Soconnect169 = new Soconnect();
Soconnect169->setNodeField(QString("initialFieldOfView"));
Soconnect169->setProtoField(QString("initialFieldOfView"));
SoIS162->addChild(*Soconnect169);

Soconnect* Soconnect170 = new Soconnect();
Soconnect170->setNodeField(QString("initialFStop"));
Soconnect170->setProtoField(QString("initialFStop"));
SoIS162->addChild(*Soconnect170);

Soconnect* Soconnect171 = new Soconnect();
Soconnect171->setNodeField(QString("initialFocusDistance"));
Soconnect171->setProtoField(QString("initialFocusDistance"));
SoIS162->addChild(*Soconnect171);

Soconnect* Soconnect172 = new Soconnect();
Soconnect172->setNodeField(QString("shotDuration"));
Soconnect172->setProtoField(QString("shotDuration"));
SoIS162->addChild(*Soconnect172);

Soconnect* Soconnect173 = new Soconnect();
Soconnect173->setNodeField(QString("isActive"));
Soconnect173->setProtoField(QString("isActive"));
SoIS162->addChild(*Soconnect173);

Soconnect* Soconnect174 = new Soconnect();
Soconnect174->setNodeField(QString("traceEnabled"));
Soconnect174->setProtoField(QString("traceEnabled"));
SoIS162->addChild(*Soconnect174);

SoScript146->addChild(*SoIS162);


//SoScript146->setSourceCode(QString("ecmascript:")+
//_T("function initialize () // CameraShotScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    // compute shotDuration by summing durations from contained CameraMovement nodes")+
//_T("    shotDuration = 0;")+
//_T("    for (i = 0; i < moves.length; i++)")+
//_T("    {")+
//_T("        shotDuration = shotDuration + moves[i].duration;")+
//_T("    }")+
//_T("    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');")+
//_T("//  tracePrint ('... initialize() complete');")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_enabled (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    enabled = eventValue;")+
//_T("}")+
//_T("function set_moves (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    moves = eventValue;")+
//_T("}")+
//_T("function set_initialPosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialPosition = eventValue;")+
//_T("}")+
//_T("function set_initialOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialOrientation = eventValue;")+
//_T("}")+
//_T("function set_initialAimPoint (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialAimPoint = eventValue;")+
//_T("}")+
//_T("function set_initialFieldOfView (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialFieldOfView = eventValue;")+
//_T("}")+
//_T("function set_initialFStop (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialFStop = eventValue;")+
//_T("}")+
//_T("function set_initialFocusDistance (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    initialFocusDistance = eventValue;")+
//_T("}")+
//_T("function set_key (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    key = eventValue;")+
//_T("}")+
//_T("function set_keyValuePosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValuePosition = eventValue;")+
//_T("}")+
//_T("function set_keyValueOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    keyValueOrientation = eventValue;")+
//_T("}")+
//_T("// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[CameraShot] ' + outputString + '\\n');")+
//_T("}"));
SoProtoBody145->addChild(*SoScript146);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
SoProtoDeclare131->addChild(*SoProtoBody145);

SoNode16->addChild(*SoProtoDeclare131);

//=============== CameraMovement ==============
SoProtoDeclare* SoProtoDeclare175 = new SoProtoDeclare();
SoProtoDeclare175->setName(QString("CameraMovement"));
SoProtoDeclare175->setAppinfo(QString("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."));
SoProtoInterface* SoProtoInterface176 = new SoProtoInterface();
Sofield* Sofield177 = new Sofield();
Sofield177->setName(QString("description"));
Sofield177->setAccessType(QString("inputOutput"));
Sofield177->setAppinfo(QString("Text description to be displayed for this CameraMovement"));
Sofield177->setType(QString("SFString"));
SoProtoInterface176->addChild(*Sofield177);

Sofield* Sofield178 = new Sofield();
Sofield178->setName(QString("enabled"));
Sofield178->setAccessType(QString("inputOutput"));
Sofield178->setAppinfo(QString("Whether this CameraMovement can be activated"));
Sofield178->setType(QString("SFBool"));
Sofield178->setValue(QString("true"));
SoProtoInterface176->addChild(*Sofield178);

Sofield* Sofield179 = new Sofield();
Sofield179->setName(QString("duration"));
Sofield179->setAccessType(QString("inputOutput"));
Sofield179->setAppinfo(QString("Duration in seconds for this move"));
Sofield179->setType(QString("SFFloat"));
Sofield179->setValue(QString("0"));
SoProtoInterface176->addChild(*Sofield179);

Sofield* Sofield180 = new Sofield();
Sofield180->setName(QString("goalPosition"));
Sofield180->setAccessType(QString("inputOutput"));
Sofield180->setAppinfo(QString("Goal camera position for this move"));
Sofield180->setType(QString("SFVec3f"));
Sofield180->setValue(QString("0 0 10"));
SoProtoInterface176->addChild(*Sofield180);

Sofield* Sofield181 = new Sofield();
Sofield181->setName(QString("goalOrientation"));
Sofield181->setAccessType(QString("inputOutput"));
Sofield181->setAppinfo(QString("Goal camera rotation for this move"));
Sofield181->setType(QString("SFRotation"));
Sofield181->setValue(QString("0 0 1 0"));
SoProtoInterface176->addChild(*Sofield181);

Sofield* Sofield182 = new Sofield();
Sofield182->setName(QString("tracking"));
Sofield182->setAccessType(QString("inputOutput"));
Sofield182->setAppinfo(QString("Whether or not camera direction is tracking towards the aimPoint"));
Sofield182->setType(QString("SFBool"));
Sofield182->setValue(QString("false"));
SoProtoInterface176->addChild(*Sofield182);

Sofield* Sofield183 = new Sofield();
Sofield183->setName(QString("goalAimPoint"));
Sofield183->setAccessType(QString("inputOutput"));
Sofield183->setAppinfo(QString("Goal aimPoint for this move, ignored if tracking=false"));
Sofield183->setType(QString("SFVec3f"));
Sofield183->setValue(QString("0 0 0"));
SoProtoInterface176->addChild(*Sofield183);

Sofield* Sofield184 = new Sofield();
Sofield184->setName(QString("goalFieldOfView"));
Sofield184->setAccessType(QString("inputOutput"));
Sofield184->setAppinfo(QString("Goal fieldOfView for this move"));
Sofield184->setType(QString("SFFloat"));
Sofield184->setValue(QString("0.7854"));
SoProtoInterface176->addChild(*Sofield184);

Sofield* Sofield185 = new Sofield();
Sofield185->setName(QString("goalFStop"));
Sofield185->setAccessType(QString("inputOutput"));
Sofield185->setAppinfo(QString("Focal length divided effective aperture diameter indicating width of focal plane"));
Sofield185->setType(QString("SFFloat"));
Sofield185->setValue(QString("5.6"));
SoProtoInterface176->addChild(*Sofield185);

Sofield* Sofield186 = new Sofield();
Sofield186->setName(QString("goalFocusDistance"));
Sofield186->setAccessType(QString("inputOutput"));
Sofield186->setAppinfo(QString("Distance to focal plane of sharpest focus"));
Sofield186->setType(QString("SFFloat"));
Sofield186->setValue(QString("10"));
SoProtoInterface176->addChild(*Sofield186);

Sofield* Sofield187 = new Sofield();
Sofield187->setName(QString("isActive"));
Sofield187->setAccessType(QString("outputOnly"));
Sofield187->setAppinfo(QString("Mark start/stop with true/false output respectively useful to trigger external animations"));
Sofield187->setType(QString("SFBool"));
SoProtoInterface176->addChild(*Sofield187);

Sofield* Sofield188 = new Sofield();
Sofield188->setName(QString("traceEnabled"));
Sofield188->setAccessType(QString("initializeOnly"));
Sofield188->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield188->setType(QString("SFBool"));
Sofield188->setValue(QString("false"));
SoProtoInterface176->addChild(*Sofield188);

SoProtoDeclare175->addChild(*SoProtoInterface176);

SoProtoBody* SoProtoBody189 = new SoProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
//Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events
SoScript* SoScript190 = new SoScript();
SoScript190->setDEF(QString("CameraMovementScript"));
SoScript190->setDirectOutput(true);
SoScript190->setMustEvaluate(true);
Sofield* Sofield191 = new Sofield();
Sofield191->setName(QString("description"));
Sofield191->setAccessType(QString("inputOutput"));
Sofield191->setAppinfo(QString("Text description to be displayed for this CameraMovement"));
Sofield191->setType(QString("SFString"));
SoScript190->addChild(*Sofield191);

Sofield* Sofield192 = new Sofield();
Sofield192->setName(QString("enabled"));
Sofield192->setAccessType(QString("inputOutput"));
Sofield192->setAppinfo(QString("Whether this CameraMovement can be activated"));
Sofield192->setType(QString("SFBool"));
SoScript190->addChild(*Sofield192);

Sofield* Sofield193 = new Sofield();
Sofield193->setName(QString("duration"));
Sofield193->setAccessType(QString("inputOutput"));
Sofield193->setAppinfo(QString("Duration in seconds for this move"));
Sofield193->setType(QString("SFFloat"));
SoScript190->addChild(*Sofield193);

Sofield* Sofield194 = new Sofield();
Sofield194->setName(QString("goalPosition"));
Sofield194->setAccessType(QString("inputOutput"));
Sofield194->setAppinfo(QString("Goal camera position for this move"));
Sofield194->setType(QString("SFVec3f"));
SoScript190->addChild(*Sofield194);

Sofield* Sofield195 = new Sofield();
Sofield195->setName(QString("goalOrientation"));
Sofield195->setAccessType(QString("inputOutput"));
Sofield195->setAppinfo(QString("Goal camera rotation for this move"));
Sofield195->setType(QString("SFRotation"));
SoScript190->addChild(*Sofield195);

Sofield* Sofield196 = new Sofield();
Sofield196->setName(QString("tracking"));
Sofield196->setAccessType(QString("inputOutput"));
Sofield196->setAppinfo(QString("Whether or not camera direction is tracking towards the aimPoint"));
Sofield196->setType(QString("SFBool"));
SoScript190->addChild(*Sofield196);

Sofield* Sofield197 = new Sofield();
Sofield197->setName(QString("goalAimPoint"));
Sofield197->setAccessType(QString("inputOutput"));
Sofield197->setAppinfo(QString("Goal aimPoint for this move, ignored if tracking=false"));
Sofield197->setType(QString("SFVec3f"));
SoScript190->addChild(*Sofield197);

Sofield* Sofield198 = new Sofield();
Sofield198->setName(QString("goalFieldOfView"));
Sofield198->setAccessType(QString("inputOutput"));
Sofield198->setAppinfo(QString("Goal fieldOfView for this move"));
Sofield198->setType(QString("SFFloat"));
SoScript190->addChild(*Sofield198);

Sofield* Sofield199 = new Sofield();
Sofield199->setName(QString("goalFStop"));
Sofield199->setAccessType(QString("inputOutput"));
Sofield199->setAppinfo(QString("Focal length divided effective aperture diameter indicating width of focal plane"));
Sofield199->setType(QString("SFFloat"));
SoScript190->addChild(*Sofield199);

Sofield* Sofield200 = new Sofield();
Sofield200->setName(QString("goalFocusDistance"));
Sofield200->setAccessType(QString("inputOutput"));
Sofield200->setAppinfo(QString("Distance to focal plane of sharpest focus"));
Sofield200->setType(QString("SFFloat"));
SoScript190->addChild(*Sofield200);

Sofield* Sofield201 = new Sofield();
Sofield201->setName(QString("isActive"));
Sofield201->setAccessType(QString("outputOnly"));
Sofield201->setAppinfo(QString("Mark start/stop with true/false output respectively useful to trigger external animations"));
Sofield201->setType(QString("SFBool"));
SoScript190->addChild(*Sofield201);

Sofield* Sofield202 = new Sofield();
Sofield202->setName(QString("traceEnabled"));
Sofield202->setAccessType(QString("initializeOnly"));
Sofield202->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield202->setType(QString("SFBool"));
SoScript190->addChild(*Sofield202);

SoIS* SoIS203 = new SoIS();
Soconnect* Soconnect204 = new Soconnect();
Soconnect204->setNodeField(QString("description"));
Soconnect204->setProtoField(QString("description"));
SoIS203->addChild(*Soconnect204);

Soconnect* Soconnect205 = new Soconnect();
Soconnect205->setNodeField(QString("enabled"));
Soconnect205->setProtoField(QString("enabled"));
SoIS203->addChild(*Soconnect205);

Soconnect* Soconnect206 = new Soconnect();
Soconnect206->setNodeField(QString("duration"));
Soconnect206->setProtoField(QString("duration"));
SoIS203->addChild(*Soconnect206);

Soconnect* Soconnect207 = new Soconnect();
Soconnect207->setNodeField(QString("goalPosition"));
Soconnect207->setProtoField(QString("goalPosition"));
SoIS203->addChild(*Soconnect207);

Soconnect* Soconnect208 = new Soconnect();
Soconnect208->setNodeField(QString("goalOrientation"));
Soconnect208->setProtoField(QString("goalOrientation"));
SoIS203->addChild(*Soconnect208);

Soconnect* Soconnect209 = new Soconnect();
Soconnect209->setNodeField(QString("tracking"));
Soconnect209->setProtoField(QString("tracking"));
SoIS203->addChild(*Soconnect209);

Soconnect* Soconnect210 = new Soconnect();
Soconnect210->setNodeField(QString("goalAimPoint"));
Soconnect210->setProtoField(QString("goalAimPoint"));
SoIS203->addChild(*Soconnect210);

Soconnect* Soconnect211 = new Soconnect();
Soconnect211->setNodeField(QString("goalFieldOfView"));
Soconnect211->setProtoField(QString("goalFieldOfView"));
SoIS203->addChild(*Soconnect211);

Soconnect* Soconnect212 = new Soconnect();
Soconnect212->setNodeField(QString("goalFStop"));
Soconnect212->setProtoField(QString("goalFStop"));
SoIS203->addChild(*Soconnect212);

Soconnect* Soconnect213 = new Soconnect();
Soconnect213->setNodeField(QString("goalFocusDistance"));
Soconnect213->setProtoField(QString("goalFocusDistance"));
SoIS203->addChild(*Soconnect213);

Soconnect* Soconnect214 = new Soconnect();
Soconnect214->setNodeField(QString("isActive"));
Soconnect214->setProtoField(QString("isActive"));
SoIS203->addChild(*Soconnect214);

Soconnect* Soconnect215 = new Soconnect();
Soconnect215->setNodeField(QString("traceEnabled"));
Soconnect215->setProtoField(QString("traceEnabled"));
SoIS203->addChild(*Soconnect215);

SoScript190->addChild(*SoIS203);


//SoScript190->setSourceCode(QString("ecmascript:")+
//_T("function initialize () // CameraMovementScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +")+
//_T("                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()")+
//_T("                           );")+
//_T("    if (duration < 0)")+
//_T("    {")+
//_T("       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');")+
//_T("       duration = 0;")+
//_T("    }")+
//_T("    else if (duration == 0)")+
//_T("    {")+
//_T("       alwaysPrint ('warning: duration=0, nothing to do!');")+
//_T("    }")+
//_T("    tracePrint ('... initialize complete');")+
//_T("}")+
//_T("function set_goalAimPoint (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalAimPoint_changed = eventValue;")+
//_T("    tracePrint ('goalAimPoint=' + goalAimPoint.toString());")+
//_T("    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_enabled (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    enabled = eventValue;")+
//_T("}")+
//_T("function set_duration (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    duration = eventValue;")+
//_T("}")+
//_T("function set_goalPosition (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalPosition = eventValue;")+
//_T("}")+
//_T("function set_goalOrientation (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalOrientation = eventValue;")+
//_T("}")+
//_T("function set_tracking (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    tracking = eventValue;")+
//_T("}")+
//_T("function set_goalFieldOfView (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalFieldOfView = eventValue;")+
//_T("}")+
//_T("function set_goalFStop (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalFStop = eventValue;")+
//_T("}")+
//_T("function set_goalFocusDistance (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    goalFocusDistance = eventValue;")+
//_T("}")+
//_T("// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[CameraMovement] ' + outputString + '\\n');")+
//_T("}"));
SoProtoBody189->addChild(*SoScript190);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
SoProtoDeclare175->addChild(*SoProtoBody189);

SoNode16->addChild(*SoProtoDeclare175);

//=============== OfflineRender ==============
SoProtoDeclare* SoProtoDeclare216 = new SoProtoDeclare();
SoProtoDeclare216->setName(QString("OfflineRender"));
SoProtoDeclare216->setAppinfo(QString("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."));
SoProtoInterface* SoProtoInterface217 = new SoProtoInterface();
//TODO non-photorealistic rendering (NPR) parameters
Sofield* Sofield218 = new Sofield();
Sofield218->setName(QString("description"));
Sofield218->setAccessType(QString("inputOutput"));
Sofield218->setAppinfo(QString("Text description to be displayed for this OfflineRender"));
Sofield218->setType(QString("SFString"));
SoProtoInterface217->addChild(*Sofield218);

Sofield* Sofield219 = new Sofield();
Sofield219->setName(QString("enabled"));
Sofield219->setAccessType(QString("inputOutput"));
Sofield219->setAppinfo(QString("Whether this OfflineRender can be activated"));
Sofield219->setType(QString("SFBool"));
Sofield219->setValue(QString("true"));
SoProtoInterface217->addChild(*Sofield219);

Sofield* Sofield220 = new Sofield();
Sofield220->setName(QString("frameRate"));
Sofield220->setAccessType(QString("inputOutput"));
Sofield220->setAppinfo(QString("Frames per second recorded for this rendering"));
Sofield220->setType(QString("SFFloat"));
Sofield220->setValue(QString("30"));
SoProtoInterface217->addChild(*Sofield220);

Sofield* Sofield221 = new Sofield();
Sofield221->setName(QString("frameSize"));
Sofield221->setAccessType(QString("inputOutput"));
Sofield221->setAppinfo(QString("Size of frame in number of pixels width and height"));
Sofield221->setType(QString("SFVec2f"));
Sofield221->setValue(QString("640 480"));
SoProtoInterface217->addChild(*Sofield221);

Sofield* Sofield222 = new Sofield();
Sofield222->setName(QString("pixelAspectRatio"));
Sofield222->setAccessType(QString("inputOutput"));
Sofield222->setAppinfo(QString("Relative dimensions of pixel height/width typically 1.33 or 1"));
Sofield222->setType(QString("SFFloat"));
Sofield222->setValue(QString("1.33"));
SoProtoInterface217->addChild(*Sofield222);

Sofield* Sofield223 = new Sofield();
Sofield223->setName(QString("set_startTime"));
Sofield223->setAccessType(QString("inputOnly"));
Sofield223->setAppinfo(QString("Begin render operation"));
Sofield223->setType(QString("SFTime"));
SoProtoInterface217->addChild(*Sofield223);

Sofield* Sofield224 = new Sofield();
Sofield224->setName(QString("progress"));
Sofield224->setAccessType(QString("outputOnly"));
Sofield224->setAppinfo(QString("Progress performing render operation (0..1)"));
Sofield224->setType(QString("SFFloat"));
SoProtoInterface217->addChild(*Sofield224);

Sofield* Sofield225 = new Sofield();
Sofield225->setName(QString("renderCompleteTime"));
Sofield225->setAccessType(QString("outputOnly"));
Sofield225->setAppinfo(QString("Render operation complete"));
Sofield225->setType(QString("SFTime"));
SoProtoInterface217->addChild(*Sofield225);

Sofield* Sofield226 = new Sofield();
Sofield226->setName(QString("movieFormat"));
Sofield226->setAccessType(QString("initializeOnly"));
Sofield226->setAppinfo(QString("Format of rendered output movie (mpeg mp4 etc.), use first supported format"));
Sofield226->setType(QString("MFString"));
Sofield226->setValue(QString("\"mpeg\""));
SoProtoInterface217->addChild(*Sofield226);

Sofield* Sofield227 = new Sofield();
Sofield227->setName(QString("imageFormat"));
Sofield227->setAccessType(QString("initializeOnly"));
Sofield227->setAppinfo(QString("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"));
Sofield227->setType(QString("MFString"));
Sofield227->setValue(QString("\"png\""));
SoProtoInterface217->addChild(*Sofield227);

Sofield* Sofield228 = new Sofield();
Sofield228->setName(QString("traceEnabled"));
Sofield228->setAccessType(QString("initializeOnly"));
Sofield228->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield228->setType(QString("SFBool"));
Sofield228->setValue(QString("false"));
SoProtoInterface217->addChild(*Sofield228);

SoProtoDeclare216->addChild(*SoProtoInterface217);

SoProtoBody* SoProtoBody229 = new SoProtoBody();
//First node determines node type of this prototype
//Subsequent nodes do not render, but still must be a valid X3D subgraph
SoScript* SoScript230 = new SoScript();
SoScript230->setDEF(QString("OfflineRenderScript"));
SoScript230->setMustEvaluate(true);
Sofield* Sofield231 = new Sofield();
Sofield231->setName(QString("description"));
Sofield231->setAccessType(QString("inputOutput"));
Sofield231->setAppinfo(QString("Text description to be displayed for this OfflineRender"));
Sofield231->setType(QString("SFString"));
SoScript230->addChild(*Sofield231);

Sofield* Sofield232 = new Sofield();
Sofield232->setName(QString("enabled"));
Sofield232->setAccessType(QString("inputOutput"));
Sofield232->setAppinfo(QString("Whether this OfflineRender can be activated"));
Sofield232->setType(QString("SFBool"));
SoScript230->addChild(*Sofield232);

Sofield* Sofield233 = new Sofield();
Sofield233->setName(QString("frameRate"));
Sofield233->setAccessType(QString("inputOutput"));
Sofield233->setAppinfo(QString("Frames per second recorded for this rendering"));
Sofield233->setType(QString("SFFloat"));
SoScript230->addChild(*Sofield233);

Sofield* Sofield234 = new Sofield();
Sofield234->setName(QString("frameSize"));
Sofield234->setAccessType(QString("inputOutput"));
Sofield234->setAppinfo(QString("Size of frame in number of pixels width and height"));
Sofield234->setType(QString("SFVec2f"));
SoScript230->addChild(*Sofield234);

Sofield* Sofield235 = new Sofield();
Sofield235->setName(QString("pixelAspectRatio"));
Sofield235->setAccessType(QString("inputOutput"));
Sofield235->setAppinfo(QString("Relative dimensions of pixel height/width typically 1.33 or 1"));
Sofield235->setType(QString("SFFloat"));
SoScript230->addChild(*Sofield235);

Sofield* Sofield236 = new Sofield();
Sofield236->setName(QString("set_startTime"));
Sofield236->setAccessType(QString("inputOnly"));
Sofield236->setAppinfo(QString("Begin render operation"));
Sofield236->setType(QString("SFTime"));
SoScript230->addChild(*Sofield236);

Sofield* Sofield237 = new Sofield();
Sofield237->setName(QString("progress"));
Sofield237->setAccessType(QString("outputOnly"));
Sofield237->setAppinfo(QString("Progress performing render operation (0..1)"));
Sofield237->setType(QString("SFFloat"));
SoScript230->addChild(*Sofield237);

Sofield* Sofield238 = new Sofield();
Sofield238->setName(QString("renderCompleteTime"));
Sofield238->setAccessType(QString("outputOnly"));
Sofield238->setAppinfo(QString("Render operation complete"));
Sofield238->setType(QString("SFTime"));
SoScript230->addChild(*Sofield238);

Sofield* Sofield239 = new Sofield();
Sofield239->setName(QString("movieFormat"));
Sofield239->setAccessType(QString("initializeOnly"));
Sofield239->setAppinfo(QString("Format of rendered output movie (mpeg mp4 etc.)"));
Sofield239->setType(QString("MFString"));
SoScript230->addChild(*Sofield239);

Sofield* Sofield240 = new Sofield();
Sofield240->setName(QString("imageFormat"));
Sofield240->setAccessType(QString("initializeOnly"));
Sofield240->setAppinfo(QString("Format of rendered output images (png jpeg gif tiff etc.)"));
Sofield240->setType(QString("MFString"));
SoScript230->addChild(*Sofield240);

Sofield* Sofield241 = new Sofield();
Sofield241->setName(QString("traceEnabled"));
Sofield241->setAccessType(QString("initializeOnly"));
Sofield241->setAppinfo(QString("enable console output to trace script computations and prototype progress"));
Sofield241->setType(QString("SFBool"));
SoScript230->addChild(*Sofield241);

SoIS* SoIS242 = new SoIS();
Soconnect* Soconnect243 = new Soconnect();
Soconnect243->setNodeField(QString("description"));
Soconnect243->setProtoField(QString("description"));
SoIS242->addChild(*Soconnect243);

Soconnect* Soconnect244 = new Soconnect();
Soconnect244->setNodeField(QString("enabled"));
Soconnect244->setProtoField(QString("enabled"));
SoIS242->addChild(*Soconnect244);

Soconnect* Soconnect245 = new Soconnect();
Soconnect245->setNodeField(QString("frameRate"));
Soconnect245->setProtoField(QString("frameRate"));
SoIS242->addChild(*Soconnect245);

Soconnect* Soconnect246 = new Soconnect();
Soconnect246->setNodeField(QString("frameSize"));
Soconnect246->setProtoField(QString("frameSize"));
SoIS242->addChild(*Soconnect246);

Soconnect* Soconnect247 = new Soconnect();
Soconnect247->setNodeField(QString("pixelAspectRatio"));
Soconnect247->setProtoField(QString("pixelAspectRatio"));
SoIS242->addChild(*Soconnect247);

Soconnect* Soconnect248 = new Soconnect();
Soconnect248->setNodeField(QString("set_startTime"));
Soconnect248->setProtoField(QString("set_startTime"));
SoIS242->addChild(*Soconnect248);

Soconnect* Soconnect249 = new Soconnect();
Soconnect249->setNodeField(QString("progress"));
Soconnect249->setProtoField(QString("progress"));
SoIS242->addChild(*Soconnect249);

Soconnect* Soconnect250 = new Soconnect();
Soconnect250->setNodeField(QString("renderCompleteTime"));
Soconnect250->setProtoField(QString("renderCompleteTime"));
SoIS242->addChild(*Soconnect250);

Soconnect* Soconnect251 = new Soconnect();
Soconnect251->setNodeField(QString("movieFormat"));
Soconnect251->setProtoField(QString("movieFormat"));
SoIS242->addChild(*Soconnect251);

Soconnect* Soconnect252 = new Soconnect();
Soconnect252->setNodeField(QString("imageFormat"));
Soconnect252->setProtoField(QString("imageFormat"));
SoIS242->addChild(*Soconnect252);

Soconnect* Soconnect253 = new Soconnect();
Soconnect253->setNodeField(QString("traceEnabled"));
Soconnect253->setProtoField(QString("traceEnabled"));
SoIS242->addChild(*Soconnect253);

SoScript230->addChild(*SoIS242);


//SoScript230->setSourceCode(QString("ecmascript:")+
//_T("function initialize () // OfflineRenderScript")+
//_T("{")+
//_T("//  tracePrint ('initialize start...');")+
//_T("    tracePrint ('... initialize complete');")+
//_T("}")+
//_T("function set_description (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    description = eventValue;")+
//_T("}")+
//_T("function set_enabled (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    enabled = eventValue;")+
//_T("}")+
//_T("function set_frameRate (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    frameRate = eventValue;")+
//_T("}")+
//_T("function set_frameSize (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    frameSize = eventValue;")+
//_T("}")+
//_T("function set_pixelAspectRatio (eventValue) // input event received for inputOutput field")+
//_T("{")+
//_T("    pixelAspectRatio = eventValue;")+
//_T("}")+
//_T("function set_startTime (eventValue) // input event received for inputOnly field")+
//_T("{")+
//_T("   // do something with input eventValue;")+
//_T("}")+
//_T("function tracePrint (outputValue)")+
//_T("{")+
//_T("	if (traceEnabled) alwaysPrint (outputValue);")+
//_T("}")+
//_T("function alwaysPrint (outputValue)")+
//_T("{")+
//_T("	// try to ensure outputValue is converted to string despite browser idiosyncracies")+
//_T("    var outputString = outputValue.toString(); // utility function according to spec")+
//_T("    if (outputString == null) outputString = outputValue; // direct cast")+
//_T("    if  (description.length > 0)")+
//_T("         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');")+
//_T("    else")+
//_T("         Browser.print ('[OfflineRender] ' + outputString + '\\n');")+
//_T("}"));
SoProtoBody229->addChild(*SoScript230);

//Add any ROUTEs here, going from Script to other nodes within ProtoBody
SoProtoDeclare216->addChild(*SoProtoBody229);

SoNode16->addChild(*SoProtoDeclare216);

//=============== Launch Prototype Example ==============
SoBackground* SoBackground254 = new SoBackground();
SoBackground254->setSkyColor(new float[]{0.282353,0.380392,0.470588}, 3);
SoNode16->addChild(*SoBackground254);

SoAnchor* SoAnchor255 = new SoAnchor();
SoAnchor255->setDescription(QString("launch CameraExample scene"));
SoAnchor255->setUrl(new QString[]{QString("CameraExamples.x3d"), QString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d"), QString("CameraExamples.wrl"), QString("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl")}, 4);
SoTransform* SoTransform256 = new SoTransform();
SoShape* SoShape257 = new SoShape();
SoText* SoText258 = new SoText();
SoText258->setString(new QString[]{QString("CameraPrototypes.x3d"), QString("defines multiple prototype nodes"), QString(""), QString("Click on this text to see"), QString("CameraExamples.x3d scene")}, 5);
SoFontStyle* SoFontStyle259 = new SoFontStyle();
SoFontStyle259->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoText258->setFontStyle(*SoFontStyle259);

SoShape257->setGeometry(*SoText258);

SoVRMLAppearance* SoVRMLAppearance260 = new SoVRMLAppearance();
SoMaterial* SoMaterial261 = new SoMaterial();
SoMaterial261->setDiffuseColor(new float[]{1.0,1.0,0.2});
SoVRMLAppearance260->addChild(*SoMaterial261);

SoShape257->addChild(*SoVRMLAppearance260);

SoTransform256->addChild(*SoShape257);

SoAnchor255->addChild(*SoTransform256);

SoNode16->addChild(*SoAnchor255);

SoSceneManager0->setSceneGraph(*SoNode16);

return 0;
}
