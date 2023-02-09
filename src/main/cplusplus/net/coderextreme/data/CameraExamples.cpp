/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("CameraExamples.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("documentation");
meta4->setContent("Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("creator");
meta5->setContent("Don Brutzman and Jeff Weekley");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("18 June 2009");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("20 January 2020");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("TODO");
meta8->setContent("Schematron rules, backed up by initialize() checks");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("reference");
meta9->setContent("BeyondViewpointCameraNodesWeb3D2009.pdf");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("MovingImage");
meta10->setContent("CameraExamplesDemo.mp4");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("reference");
meta11->setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("subject");
meta12->setContent("Camera nodes for Viewpoint navigation control");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("CameraPrototypes.x3d");
head1->addMeta(*meta13);

Cmeta* meta14 = new Cmeta();
meta14->setName("reference");
meta14->setContent("CameraExamplesConsoleLog.txt");
head1->addMeta(*meta14);

Cmeta* meta15 = new Cmeta();
meta15->setName("reference");
meta15->setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi");
head1->addMeta(*meta15);

Cmeta* meta16 = new Cmeta();
meta16->setName("reference");
meta16->setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d");
head1->addMeta(*meta16);

Cmeta* meta17 = new Cmeta();
meta17->setName("identifier");
meta17->setContent("https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d");
head1->addMeta(*meta17);

Cmeta* meta18 = new Cmeta();
meta18->setName("reference");
meta18->setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d");
head1->addMeta(*meta18);

Cmeta* meta19 = new Cmeta();
meta19->setName("generator");
meta19->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(*meta19);

Cmeta* meta20 = new Cmeta();
meta20->setName("license");
meta20->setContent("../license.html");
head1->addMeta(*meta20);

X3D0->setHead(*head1);

CScene* Scene21 = new CScene();
//=============== Camera ==============
CWorldInfo* WorldInfo22 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo22->setTitle("CameraExamples.x3d");
group->addChildren(*WorldInfo22);

CExternProtoDeclare* ExternProtoDeclare23 = new CExternProtoDeclare();
ExternProtoDeclare23->setName("Camera");
ExternProtoDeclare23->setAppinfo("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images");
ExternProtoDeclare23->setUrl(new CString[4]{"CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"}, 4);
Cfield* field24 = new Cfield();
field24->setName("description");
field24->setAccessType("inputOutput");
field24->setAppinfo("Text description to be displayed for this Camera");
field24->setType("SFString");
ExternProtoDeclare23->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("position");
field25->setAccessType("inputOutput");
field25->setAppinfo("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");
field25->setType("SFVec3f");
ExternProtoDeclare23->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("orientation");
field26->setAccessType("inputOutput");
field26->setAppinfo("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated");
field26->setType("SFRotation");
ExternProtoDeclare23->addField(*field26);

Cfield* field27 = new Cfield();
field27->setName("fieldOfView");
field27->setAccessType("inputOutput");
field27->setAppinfo("pi/4");
field27->setType("SFFloat");
ExternProtoDeclare23->addField(*field27);

Cfield* field28 = new Cfield();
field28->setName("set_fraction");
field28->setAccessType("inputOnly");
field28->setAppinfo("input fraction drives interpolators");
field28->setType("SFFloat");
ExternProtoDeclare23->addField(*field28);

Cfield* field29 = new Cfield();
field29->setName("set_bind");
field29->setAccessType("inputOnly");
field29->setAppinfo("input event binds or unbinds this Camera");
field29->setType("SFBool");
ExternProtoDeclare23->addField(*field29);

Cfield* field30 = new Cfield();
field30->setName("bindTime");
field30->setAccessType("outputOnly");
field30->setAppinfo("output event indicates when this Camera is bound");
field30->setType("SFTime");
ExternProtoDeclare23->addField(*field30);

Cfield* field31 = new Cfield();
field31->setName("isBound");
field31->setAccessType("outputOnly");
field31->setAppinfo("output event indicates whether this Camera is bound or unbound");
field31->setType("SFBool");
ExternProtoDeclare23->addField(*field31);

Cfield* field32 = new Cfield();
field32->setName("nearClipPlane");
field32->setAccessType("inputOutput");
field32->setAppinfo("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]");
field32->setType("SFFloat");
ExternProtoDeclare23->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("farClipPlane");
field33->setAccessType("inputOutput");
field33->setAppinfo("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit");
field33->setType("SFFloat");
ExternProtoDeclare23->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("shots");
field34->setAccessType("inputOutput");
field34->setAppinfo("Array of CameraShot nodes which in turn contain CameraMovement nodes");
field34->setType("MFNode");
ExternProtoDeclare23->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("headlight");
field35->setAccessType("inputOutput");
field35->setAppinfo("Whether camera headlight is on or off");
field35->setType("SFBool");
ExternProtoDeclare23->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("headlightColor");
field36->setAccessType("inputOutput");
field36->setAppinfo("Camera headlight color");
field36->setType("SFColor");
ExternProtoDeclare23->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("headlightIntensity");
field37->setAccessType("inputOutput");
field37->setAppinfo("Camera headlight intensity");
field37->setType("SFFloat");
ExternProtoDeclare23->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("filterColor");
field38->setAccessType("inputOutput");
field38->setAppinfo("Camera filter color that modifies virtual lens capture");
field38->setType("SFColor");
ExternProtoDeclare23->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("filterTransparency");
field39->setAccessType("inputOutput");
field39->setAppinfo("Camera filter transparency that modifies virtual lens capture");
field39->setType("SFFloat");
ExternProtoDeclare23->addField(*field39);

Cfield* field40 = new Cfield();
field40->setName("upVector");
field40->setAccessType("inputOutput");
field40->setAppinfo("upVector changes modify camera orientation (and possibly vice versa)");
field40->setType("SFVec3f");
ExternProtoDeclare23->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("fStop");
field41->setAccessType("inputOutput");
field41->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field41->setType("SFFloat");
ExternProtoDeclare23->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("focusDistance");
field42->setAccessType("inputOutput");
field42->setAppinfo("Distance to focal plane of sharpest focus");
field42->setType("SFFloat");
ExternProtoDeclare23->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("isActive");
field43->setAccessType("outputOnly");
field43->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field43->setType("SFBool");
ExternProtoDeclare23->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("totalDuration");
field44->setAccessType("outputOnly");
field44->setAppinfo("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations");
field44->setType("SFTime");
ExternProtoDeclare23->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("offlineRender");
field45->setAccessType("inputOutput");
field45->setAppinfo("OfflineRender node");
field45->setType("SFNode");
ExternProtoDeclare23->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("traceEnabled");
field46->setAccessType("initializeOnly");
field46->setAppinfo("enable console output to trace script computations and prototype progress");
field46->setType("SFBool");
ExternProtoDeclare23->addField(*field46);

//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
group->addChildren(*ExternProtoDeclare23);

//=============== CameraShot ==============
CExternProtoDeclare* ExternProtoDeclare47 = new CExternProtoDeclare();
ExternProtoDeclare47->setName("CameraShot");
ExternProtoDeclare47->setAppinfo("CameraShot collects a specific set of CameraMovement animations that make up an individual shot");
ExternProtoDeclare47->setUrl(new CString[4]{"CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"}, 4);
Cfield* field48 = new Cfield();
field48->setName("description");
field48->setAccessType("inputOutput");
field48->setAppinfo("Text description to be displayed for this CameraShot");
field48->setType("SFString");
ExternProtoDeclare47->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("enabled");
field49->setAccessType("inputOutput");
field49->setAppinfo("Whether this CameraShot can be activated");
field49->setType("SFBool");
ExternProtoDeclare47->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("moves");
field50->setAccessType("inputOutput");
field50->setAppinfo("Set of CameraMovement nodes");
field50->setType("MFNode");
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ExternProtoDeclare47->addField(*field50);

Cfield* field51 = new Cfield();
field51->setName("initialPosition");
field51->setAccessType("inputOutput");
field51->setAppinfo("Setup to reinitialize camera position for this shot");
field51->setType("SFVec3f");
ExternProtoDeclare47->addField(*field51);

Cfield* field52 = new Cfield();
field52->setName("initialOrientation");
field52->setAccessType("inputOutput");
field52->setAppinfo("Setup to reinitialize camera rotation for this shot");
field52->setType("SFRotation");
ExternProtoDeclare47->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("initialAimPoint");
field53->setAccessType("inputOutput");
field53->setAppinfo("Setup to reinitialize aimpoint (relative location for camera direction) for this shot");
field53->setType("SFVec3f");
ExternProtoDeclare47->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("initialFieldOfView");
field54->setAccessType("inputOutput");
field54->setAppinfo("pi/4");
field54->setType("SFFloat");
ExternProtoDeclare47->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("initialFStop");
field55->setAccessType("inputOutput");
field55->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field55->setType("SFFloat");
ExternProtoDeclare47->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("initialFocusDistance");
field56->setAccessType("inputOutput");
field56->setAppinfo("Distance to focal plane of sharpest focus");
field56->setType("SFFloat");
ExternProtoDeclare47->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("shotDuration");
field57->setAccessType("outputOnly");
field57->setAppinfo("Subtotal duration of contained CameraMovement move durations");
field57->setType("SFTime");
ExternProtoDeclare47->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("isActive");
field58->setAccessType("outputOnly");
field58->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field58->setType("SFBool");
ExternProtoDeclare47->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("traceEnabled");
field59->setAccessType("initializeOnly");
field59->setAppinfo("enable console output to trace script computations and prototype progress");
field59->setType("SFBool");
ExternProtoDeclare47->addField(*field59);

group->addChildren(*ExternProtoDeclare47);

//=============== CameraMovement ==============
CExternProtoDeclare* ExternProtoDeclare60 = new CExternProtoDeclare();
ExternProtoDeclare60->setName("CameraMovement");
ExternProtoDeclare60->setAppinfo("CameraMovement defines a single camera movement animation");
ExternProtoDeclare60->setUrl(new CString[4]{"CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"}, 4);
Cfield* field61 = new Cfield();
field61->setName("description");
field61->setAccessType("inputOutput");
field61->setAppinfo("Text description to be displayed for this CameraMovement");
field61->setType("SFString");
ExternProtoDeclare60->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("enabled");
field62->setAccessType("inputOutput");
field62->setAppinfo("Whether this CameraMovement can be activated");
field62->setType("SFBool");
ExternProtoDeclare60->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("duration");
field63->setAccessType("inputOutput");
field63->setAppinfo("Duration in seconds for this move");
field63->setType("SFFloat");
ExternProtoDeclare60->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("goalPosition");
field64->setAccessType("inputOutput");
field64->setAppinfo("Goal camera position for this move");
field64->setType("SFVec3f");
ExternProtoDeclare60->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("goalOrientation");
field65->setAccessType("inputOutput");
field65->setAppinfo("Goal camera rotation for this move");
field65->setType("SFRotation");
ExternProtoDeclare60->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("tracking");
field66->setAccessType("inputOutput");
field66->setAppinfo("Whether or not camera direction is tracking towards the aimPoint");
field66->setType("SFBool");
ExternProtoDeclare60->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("goalAimPoint");
field67->setAccessType("inputOutput");
field67->setAppinfo("Goal aimPoint for this move, ignored if tracking=false");
field67->setType("SFVec3f");
ExternProtoDeclare60->addField(*field67);

Cfield* field68 = new Cfield();
field68->setName("goalFieldOfView");
field68->setAccessType("inputOutput");
field68->setAppinfo("Goal fieldOfView for this move");
field68->setType("SFFloat");
ExternProtoDeclare60->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("goalFStop");
field69->setAccessType("inputOutput");
field69->setAppinfo("Focal length divided effective aperture diameter indicating width of focal plane");
field69->setType("SFFloat");
ExternProtoDeclare60->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("goalFocusDistance");
field70->setAccessType("inputOutput");
field70->setAppinfo("Distance to focal plane of sharpest focus");
field70->setType("SFFloat");
ExternProtoDeclare60->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("isActive");
field71->setAccessType("outputOnly");
field71->setAppinfo("Mark start/stop with true/false output respectively useful to trigger external animations");
field71->setType("SFBool");
ExternProtoDeclare60->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("traceEnabled");
field72->setAccessType("initializeOnly");
field72->setAppinfo("enable console output to trace script computations and prototype progress");
field72->setType("SFBool");
ExternProtoDeclare60->addField(*field72);

group->addChildren(*ExternProtoDeclare60);

//=============== OfflineRender ==============
CExternProtoDeclare* ExternProtoDeclare73 = new CExternProtoDeclare();
ExternProtoDeclare73->setName("OfflineRender");
ExternProtoDeclare73->setAppinfo("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)");
ExternProtoDeclare73->setUrl(new CString[4]{"CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"}, 4);
Cfield* field74 = new Cfield();
field74->setName("description");
field74->setAccessType("inputOutput");
field74->setAppinfo("Text description to be displayed for this OfflineRender");
field74->setType("SFString");
ExternProtoDeclare73->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("enabled");
field75->setAccessType("inputOutput");
field75->setAppinfo("Whether this OfflineRender can be activated");
field75->setType("SFBool");
ExternProtoDeclare73->addField(*field75);

Cfield* field76 = new Cfield();
field76->setName("frameRate");
field76->setAccessType("inputOutput");
field76->setAppinfo("Frames per second recorded for this rendering");
field76->setType("SFFloat");
ExternProtoDeclare73->addField(*field76);

Cfield* field77 = new Cfield();
field77->setName("frameSize");
field77->setAccessType("inputOutput");
field77->setAppinfo("Size of frame in number of pixels width and height");
field77->setType("SFVec2f");
ExternProtoDeclare73->addField(*field77);

Cfield* field78 = new Cfield();
field78->setName("pixelAspectRatio");
field78->setAccessType("inputOutput");
field78->setAppinfo("Relative dimensions of pixel height/width typically 1.33 or 1");
field78->setType("SFFloat");
ExternProtoDeclare73->addField(*field78);

Cfield* field79 = new Cfield();
field79->setName("set_startTime");
field79->setAccessType("inputOnly");
field79->setAppinfo("Begin render operation");
field79->setType("SFTime");
ExternProtoDeclare73->addField(*field79);

Cfield* field80 = new Cfield();
field80->setName("progress");
field80->setAccessType("outputOnly");
field80->setAppinfo("Progress performing render operation (0..1)");
field80->setType("SFFloat");
ExternProtoDeclare73->addField(*field80);

Cfield* field81 = new Cfield();
field81->setName("renderCompleteTime");
field81->setAccessType("outputOnly");
field81->setAppinfo("Render operation complete");
field81->setType("SFTime");
ExternProtoDeclare73->addField(*field81);

Cfield* field82 = new Cfield();
field82->setName("movieFormat");
field82->setAccessType("initializeOnly");
field82->setAppinfo("Format of rendered output movie (mpeg mp4 etc.), use first supported format");
field82->setType("MFString");
ExternProtoDeclare73->addField(*field82);

Cfield* field83 = new Cfield();
field83->setName("imageFormat");
field83->setAccessType("initializeOnly");
field83->setAppinfo("Format of rendered output images (png jpeg gif tiff etc.) use first supported format");
field83->setType("MFString");
ExternProtoDeclare73->addField(*field83);

Cfield* field84 = new Cfield();
field84->setName("traceEnabled");
field84->setAccessType("initializeOnly");
field84->setAppinfo("enable console output to trace script computations and prototype progress");
field84->setType("SFBool");
ExternProtoDeclare73->addField(*field84);

//TODO non-photorealistic rendering (NPR) parameters
group->addChildren(*ExternProtoDeclare73);

//=============== Lights, camera, action! ==============
CDirectionalLight* DirectionalLight85 = (CDirectionalLight *)(m_pScene.createNode("DirectionalLight"));
DirectionalLight85->setDirection(new float[3]{0,-1,0});
DirectionalLight85->setGlobal(True);
DirectionalLight85->setIntensity(0.8);
group->addChildren(*DirectionalLight85);

CNavigationInfo* NavigationInfo86 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo86->setType(new CString[3]{"EXAMINE","FLY","ANY"}, 3);
group->addChildren(*NavigationInfo86);

CViewpoint* Viewpoint87 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint87->setDescription("Camera test scene entry view");
Viewpoint87->setPosition(new float[3]{0,2,12});
group->addChildren(*Viewpoint87);

CViewpoint* Viewpoint88 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint88->setDescription("Camera test scene from above");
Viewpoint88->setOrientation(new float[4]{1,0,0,-1.57079});
Viewpoint88->setPosition(new float[3]{0,150,0});
group->addChildren(*Viewpoint88);

//Keep prototype instances in same file while developing, then move later
//We will create examples matching those in the paper
//=============== Camera.SimpleShotsTest ==============
CProtoInstance* ProtoInstance89 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance89->setName("Camera");
ProtoInstance89->setDEF("Camera.SimpleShotsTest");
CfieldValue* fieldValue90 = new CfieldValue();
fieldValue90->setName("description");
fieldValue90->setValue("SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt");
ProtoInstance89->addFieldValue(*fieldValue90);

CfieldValue* fieldValue91 = new CfieldValue();
fieldValue91->setName("headlight");
fieldValue91->setValue("true");
ProtoInstance89->addFieldValue(*fieldValue91);

CfieldValue* fieldValue92 = new CfieldValue();
fieldValue92->setName("position");
fieldValue92->setValue("-4 4 10");
ProtoInstance89->addFieldValue(*fieldValue92);

CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("shots");
CProtoInstance* ProtoInstance94 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance94->setName("CameraShot");
ProtoInstance94->setDEF("Zoom");
CfieldValue* fieldValue95 = new CfieldValue();
fieldValue95->setName("description");
fieldValue95->setValue("Simple shot of Camera Zoom");
ProtoInstance94->addFieldValue(*fieldValue95);

CfieldValue* fieldValue96 = new CfieldValue();
fieldValue96->setName("initialPosition");
fieldValue96->setValue("-50 1 -10");
ProtoInstance94->addFieldValue(*fieldValue96);

CfieldValue* fieldValue97 = new CfieldValue();
fieldValue97->setName("initialOrientation");
fieldValue97->setValue("0 1 0 0");
ProtoInstance94->addFieldValue(*fieldValue97);

CfieldValue* fieldValue98 = new CfieldValue();
fieldValue98->setName("moves");
CProtoInstance* ProtoInstance99 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance99->setName("CameraMovement");
CfieldValue* fieldValue100 = new CfieldValue();
fieldValue100->setName("description");
fieldValue100->setValue("Camera Zoom In");
ProtoInstance99->addFieldValue(*fieldValue100);

CfieldValue* fieldValue101 = new CfieldValue();
fieldValue101->setName("duration");
fieldValue101->setValue("3");
ProtoInstance99->addFieldValue(*fieldValue101);

CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("goalPosition");
fieldValue102->setValue("-50 1 -15");
ProtoInstance99->addFieldValue(*fieldValue102);

CfieldValue* fieldValue103 = new CfieldValue();
fieldValue103->setName("goalOrientation");
fieldValue103->setValue("0 1 0 0");
ProtoInstance99->addFieldValue(*fieldValue103);

fieldValue98->addChildren(*ProtoInstance99);

CProtoInstance* ProtoInstance104 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance104->setName("CameraMovement");
CfieldValue* fieldValue105 = new CfieldValue();
fieldValue105->setName("description");
fieldValue105->setValue("Camera Zoom Out");
ProtoInstance104->addFieldValue(*fieldValue105);

CfieldValue* fieldValue106 = new CfieldValue();
fieldValue106->setName("duration");
fieldValue106->setValue("3");
ProtoInstance104->addFieldValue(*fieldValue106);

CfieldValue* fieldValue107 = new CfieldValue();
fieldValue107->setName("goalPosition");
fieldValue107->setValue("-50 1 -10");
ProtoInstance104->addFieldValue(*fieldValue107);

CfieldValue* fieldValue108 = new CfieldValue();
fieldValue108->setName("goalOrientation");
fieldValue108->setValue("0 1 0 0");
ProtoInstance104->addFieldValue(*fieldValue108);

fieldValue98->addChildren(*ProtoInstance104);

CProtoInstance* ProtoInstance109 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance109->setName("CameraMovement");
CfieldValue* fieldValue110 = new CfieldValue();
fieldValue110->setName("description");
fieldValue110->setValue("Camera Pause");
ProtoInstance109->addFieldValue(*fieldValue110);

CfieldValue* fieldValue111 = new CfieldValue();
fieldValue111->setName("duration");
fieldValue111->setValue("1");
ProtoInstance109->addFieldValue(*fieldValue111);

CfieldValue* fieldValue112 = new CfieldValue();
fieldValue112->setName("goalPosition");
fieldValue112->setValue("-50 1 -10");
ProtoInstance109->addFieldValue(*fieldValue112);

CfieldValue* fieldValue113 = new CfieldValue();
fieldValue113->setName("goalOrientation");
fieldValue113->setValue("0 1 0 0");
ProtoInstance109->addFieldValue(*fieldValue113);

fieldValue98->addChildren(*ProtoInstance109);

ProtoInstance94->addFieldValue(*fieldValue98);

fieldValue93->addChildren(*ProtoInstance94);

CProtoInstance* ProtoInstance114 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance114->setName("CameraShot");
ProtoInstance114->setDEF("Dolly");
CfieldValue* fieldValue115 = new CfieldValue();
fieldValue115->setName("description");
fieldValue115->setValue("Simple shot of Camera Dolly");
ProtoInstance114->addFieldValue(*fieldValue115);

CfieldValue* fieldValue116 = new CfieldValue();
fieldValue116->setName("initialPosition");
fieldValue116->setValue("-40 1 -10");
ProtoInstance114->addFieldValue(*fieldValue116);

CfieldValue* fieldValue117 = new CfieldValue();
fieldValue117->setName("initialOrientation");
fieldValue117->setValue("0 1 0 0");
ProtoInstance114->addFieldValue(*fieldValue117);

CfieldValue* fieldValue118 = new CfieldValue();
fieldValue118->setName("moves");
CProtoInstance* ProtoInstance119 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance119->setName("CameraMovement");
ProtoInstance119->setDEF("DollyMove1");
CfieldValue* fieldValue120 = new CfieldValue();
fieldValue120->setName("description");
fieldValue120->setValue("Camera Dolly from Right to Left");
ProtoInstance119->addFieldValue(*fieldValue120);

CfieldValue* fieldValue121 = new CfieldValue();
fieldValue121->setName("duration");
fieldValue121->setValue("3");
ProtoInstance119->addFieldValue(*fieldValue121);

CfieldValue* fieldValue122 = new CfieldValue();
fieldValue122->setName("goalPosition");
fieldValue122->setValue("-45 1 -10");
ProtoInstance119->addFieldValue(*fieldValue122);

CfieldValue* fieldValue123 = new CfieldValue();
fieldValue123->setName("goalOrientation");
fieldValue123->setValue("0 1 0 0");
ProtoInstance119->addFieldValue(*fieldValue123);

fieldValue118->addChildren(*ProtoInstance119);

CProtoInstance* ProtoInstance124 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance124->setName("CameraMovement");
CfieldValue* fieldValue125 = new CfieldValue();
fieldValue125->setName("description");
fieldValue125->setValue("Camera Dolly from Left to Right");
ProtoInstance124->addFieldValue(*fieldValue125);

CfieldValue* fieldValue126 = new CfieldValue();
fieldValue126->setName("duration");
fieldValue126->setValue("3");
ProtoInstance124->addFieldValue(*fieldValue126);

CfieldValue* fieldValue127 = new CfieldValue();
fieldValue127->setName("goalPosition");
fieldValue127->setValue("-40 1 -10");
ProtoInstance124->addFieldValue(*fieldValue127);

CfieldValue* fieldValue128 = new CfieldValue();
fieldValue128->setName("goalOrientation");
fieldValue128->setValue("0 1 0 0");
ProtoInstance124->addFieldValue(*fieldValue128);

fieldValue118->addChildren(*ProtoInstance124);

CProtoInstance* ProtoInstance129 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance129->setName("CameraMovement");
CfieldValue* fieldValue130 = new CfieldValue();
fieldValue130->setName("description");
fieldValue130->setValue("Camera Pause");
ProtoInstance129->addFieldValue(*fieldValue130);

CfieldValue* fieldValue131 = new CfieldValue();
fieldValue131->setName("duration");
fieldValue131->setValue("1");
ProtoInstance129->addFieldValue(*fieldValue131);

CfieldValue* fieldValue132 = new CfieldValue();
fieldValue132->setName("goalPosition");
fieldValue132->setValue("-40 1 -10");
ProtoInstance129->addFieldValue(*fieldValue132);

CfieldValue* fieldValue133 = new CfieldValue();
fieldValue133->setName("goalOrientation");
fieldValue133->setValue("0 1 0 0");
ProtoInstance129->addFieldValue(*fieldValue133);

fieldValue118->addChildren(*ProtoInstance129);

ProtoInstance114->addFieldValue(*fieldValue118);

fieldValue93->addChildren(*ProtoInstance114);

CProtoInstance* ProtoInstance134 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance134->setName("CameraShot");
ProtoInstance134->setDEF("Pan");
CfieldValue* fieldValue135 = new CfieldValue();
fieldValue135->setName("description");
fieldValue135->setValue("Simple shot of Camera Pan left right and back to center");
ProtoInstance134->addFieldValue(*fieldValue135);

CfieldValue* fieldValue136 = new CfieldValue();
fieldValue136->setName("initialPosition");
fieldValue136->setValue("-30 1 -10");
ProtoInstance134->addFieldValue(*fieldValue136);

CfieldValue* fieldValue137 = new CfieldValue();
fieldValue137->setName("initialOrientation");
fieldValue137->setValue("0 1 0 0");
ProtoInstance134->addFieldValue(*fieldValue137);

CfieldValue* fieldValue138 = new CfieldValue();
fieldValue138->setName("moves");
CProtoInstance* ProtoInstance139 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance139->setName("CameraMovement");
ProtoInstance139->setDEF("PanLeft");
CfieldValue* fieldValue140 = new CfieldValue();
fieldValue140->setName("description");
fieldValue140->setValue("Pan Left");
ProtoInstance139->addFieldValue(*fieldValue140);

CfieldValue* fieldValue141 = new CfieldValue();
fieldValue141->setName("duration");
fieldValue141->setValue("2");
ProtoInstance139->addFieldValue(*fieldValue141);

CfieldValue* fieldValue142 = new CfieldValue();
fieldValue142->setName("goalPosition");
fieldValue142->setValue("-30 1 -10");
ProtoInstance139->addFieldValue(*fieldValue142);

CfieldValue* fieldValue143 = new CfieldValue();
fieldValue143->setName("goalOrientation");
fieldValue143->setValue("0 1 0 0.4");
ProtoInstance139->addFieldValue(*fieldValue143);

fieldValue138->addChildren(*ProtoInstance139);

CProtoInstance* ProtoInstance144 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance144->setName("CameraMovement");
ProtoInstance144->setDEF("PanRight");
CfieldValue* fieldValue145 = new CfieldValue();
fieldValue145->setName("description");
fieldValue145->setValue("Pan Right");
ProtoInstance144->addFieldValue(*fieldValue145);

CfieldValue* fieldValue146 = new CfieldValue();
fieldValue146->setName("duration");
fieldValue146->setValue("3");
ProtoInstance144->addFieldValue(*fieldValue146);

CfieldValue* fieldValue147 = new CfieldValue();
fieldValue147->setName("goalPosition");
fieldValue147->setValue("-30 1 -10");
ProtoInstance144->addFieldValue(*fieldValue147);

CfieldValue* fieldValue148 = new CfieldValue();
fieldValue148->setName("goalOrientation");
fieldValue148->setValue("0 1 0 -0.4");
ProtoInstance144->addFieldValue(*fieldValue148);

fieldValue138->addChildren(*ProtoInstance144);

CProtoInstance* ProtoInstance149 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance149->setName("CameraMovement");
CfieldValue* fieldValue150 = new CfieldValue();
fieldValue150->setName("description");
fieldValue150->setValue("Camera Pan back to Center");
ProtoInstance149->addFieldValue(*fieldValue150);

CfieldValue* fieldValue151 = new CfieldValue();
fieldValue151->setName("duration");
fieldValue151->setValue("2");
ProtoInstance149->addFieldValue(*fieldValue151);

CfieldValue* fieldValue152 = new CfieldValue();
fieldValue152->setName("goalPosition");
fieldValue152->setValue("-30 1 -10");
ProtoInstance149->addFieldValue(*fieldValue152);

CfieldValue* fieldValue153 = new CfieldValue();
fieldValue153->setName("goalOrientation");
fieldValue153->setValue("0 1 0 0");
ProtoInstance149->addFieldValue(*fieldValue153);

fieldValue138->addChildren(*ProtoInstance149);

CProtoInstance* ProtoInstance154 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance154->setName("CameraMovement");
CfieldValue* fieldValue155 = new CfieldValue();
fieldValue155->setName("description");
fieldValue155->setValue("Camera Pause");
ProtoInstance154->addFieldValue(*fieldValue155);

CfieldValue* fieldValue156 = new CfieldValue();
fieldValue156->setName("duration");
fieldValue156->setValue("2");
ProtoInstance154->addFieldValue(*fieldValue156);

CfieldValue* fieldValue157 = new CfieldValue();
fieldValue157->setName("goalPosition");
fieldValue157->setValue("-30 1 -10");
ProtoInstance154->addFieldValue(*fieldValue157);

CfieldValue* fieldValue158 = new CfieldValue();
fieldValue158->setName("goalOrientation");
fieldValue158->setValue("0 1 0 0");
ProtoInstance154->addFieldValue(*fieldValue158);

fieldValue138->addChildren(*ProtoInstance154);

ProtoInstance134->addFieldValue(*fieldValue138);

fieldValue93->addChildren(*ProtoInstance134);

CProtoInstance* ProtoInstance159 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance159->setName("CameraShot");
ProtoInstance159->setDEF("CameraBoom");
CfieldValue* fieldValue160 = new CfieldValue();
fieldValue160->setName("description");
fieldValue160->setValue("Camera Boom");
ProtoInstance159->addFieldValue(*fieldValue160);

CfieldValue* fieldValue161 = new CfieldValue();
fieldValue161->setName("initialPosition");
fieldValue161->setValue("-20 1 -10");
ProtoInstance159->addFieldValue(*fieldValue161);

CfieldValue* fieldValue162 = new CfieldValue();
fieldValue162->setName("initialOrientation");
fieldValue162->setValue("0 1 0 0");
ProtoInstance159->addFieldValue(*fieldValue162);

CfieldValue* fieldValue163 = new CfieldValue();
fieldValue163->setName("moves");
CProtoInstance* ProtoInstance164 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance164->setName("CameraMovement");
ProtoInstance164->setDEF("CameraBoomUp");
CfieldValue* fieldValue165 = new CfieldValue();
fieldValue165->setName("description");
fieldValue165->setValue("Camera Boom Up");
ProtoInstance164->addFieldValue(*fieldValue165);

CfieldValue* fieldValue166 = new CfieldValue();
fieldValue166->setName("duration");
fieldValue166->setValue("3");
ProtoInstance164->addFieldValue(*fieldValue166);

CfieldValue* fieldValue167 = new CfieldValue();
fieldValue167->setName("goalPosition");
fieldValue167->setValue("-20 5 -10");
ProtoInstance164->addFieldValue(*fieldValue167);

CfieldValue* fieldValue168 = new CfieldValue();
fieldValue168->setName("goalOrientation");
fieldValue168->setValue("0 1 0 0");
ProtoInstance164->addFieldValue(*fieldValue168);

fieldValue163->addChildren(*ProtoInstance164);

CProtoInstance* ProtoInstance169 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance169->setName("CameraMovement");
ProtoInstance169->setDEF("BoomDown");
CfieldValue* fieldValue170 = new CfieldValue();
fieldValue170->setName("description");
fieldValue170->setValue("Camera Boom Down");
ProtoInstance169->addFieldValue(*fieldValue170);

CfieldValue* fieldValue171 = new CfieldValue();
fieldValue171->setName("duration");
fieldValue171->setValue("3");
ProtoInstance169->addFieldValue(*fieldValue171);

CfieldValue* fieldValue172 = new CfieldValue();
fieldValue172->setName("goalPosition");
fieldValue172->setValue("-20 1 -10");
ProtoInstance169->addFieldValue(*fieldValue172);

CfieldValue* fieldValue173 = new CfieldValue();
fieldValue173->setName("goalOrientation");
fieldValue173->setValue("0 1 0 0");
ProtoInstance169->addFieldValue(*fieldValue173);

fieldValue163->addChildren(*ProtoInstance169);

CProtoInstance* ProtoInstance174 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance174->setName("CameraMovement");
ProtoInstance174->setDEF("BoomPause");
CfieldValue* fieldValue175 = new CfieldValue();
fieldValue175->setName("description");
fieldValue175->setValue("Camera Pause");
ProtoInstance174->addFieldValue(*fieldValue175);

CfieldValue* fieldValue176 = new CfieldValue();
fieldValue176->setName("duration");
fieldValue176->setValue("2");
ProtoInstance174->addFieldValue(*fieldValue176);

CfieldValue* fieldValue177 = new CfieldValue();
fieldValue177->setName("goalPosition");
fieldValue177->setValue("-20 1 -10");
ProtoInstance174->addFieldValue(*fieldValue177);

CfieldValue* fieldValue178 = new CfieldValue();
fieldValue178->setName("goalOrientation");
fieldValue178->setValue("0 1 0 0");
ProtoInstance174->addFieldValue(*fieldValue178);

fieldValue163->addChildren(*ProtoInstance174);

ProtoInstance159->addFieldValue(*fieldValue163);

fieldValue93->addChildren(*ProtoInstance159);

CProtoInstance* ProtoInstance179 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance179->setName("CameraShot");
ProtoInstance179->setDEF("CameraTilt");
CfieldValue* fieldValue180 = new CfieldValue();
fieldValue180->setName("description");
fieldValue180->setValue("Camera Tilt");
ProtoInstance179->addFieldValue(*fieldValue180);

CfieldValue* fieldValue181 = new CfieldValue();
fieldValue181->setName("initialPosition");
fieldValue181->setValue("-10 1 -10");
ProtoInstance179->addFieldValue(*fieldValue181);

CfieldValue* fieldValue182 = new CfieldValue();
fieldValue182->setName("initialOrientation");
fieldValue182->setValue("0 0 1 0");
ProtoInstance179->addFieldValue(*fieldValue182);

CfieldValue* fieldValue183 = new CfieldValue();
fieldValue183->setName("traceEnabled");
fieldValue183->setValue("true");
ProtoInstance179->addFieldValue(*fieldValue183);

CfieldValue* fieldValue184 = new CfieldValue();
fieldValue184->setName("moves");
CProtoInstance* ProtoInstance185 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance185->setName("CameraMovement");
CfieldValue* fieldValue186 = new CfieldValue();
fieldValue186->setName("description");
fieldValue186->setValue("Camera Tilt Pause");
ProtoInstance185->addFieldValue(*fieldValue186);

CfieldValue* fieldValue187 = new CfieldValue();
fieldValue187->setName("duration");
fieldValue187->setValue("1");
ProtoInstance185->addFieldValue(*fieldValue187);

CfieldValue* fieldValue188 = new CfieldValue();
fieldValue188->setName("goalPosition");
fieldValue188->setValue("-10 1 -10");
ProtoInstance185->addFieldValue(*fieldValue188);

CfieldValue* fieldValue189 = new CfieldValue();
fieldValue189->setName("goalOrientation");
fieldValue189->setValue("0 0 1 0");
ProtoInstance185->addFieldValue(*fieldValue189);

fieldValue184->addChildren(*ProtoInstance185);

CProtoInstance* ProtoInstance190 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance190->setName("CameraMovement");
ProtoInstance190->setDEF("TiltDown");
CfieldValue* fieldValue191 = new CfieldValue();
fieldValue191->setName("description");
fieldValue191->setValue("Camera Tilt Left");
ProtoInstance190->addFieldValue(*fieldValue191);

CfieldValue* fieldValue192 = new CfieldValue();
fieldValue192->setName("duration");
fieldValue192->setValue("3");
ProtoInstance190->addFieldValue(*fieldValue192);

CfieldValue* fieldValue193 = new CfieldValue();
fieldValue193->setName("goalPosition");
fieldValue193->setValue("-10 1 -10");
ProtoInstance190->addFieldValue(*fieldValue193);

CfieldValue* fieldValue194 = new CfieldValue();
fieldValue194->setName("goalOrientation");
fieldValue194->setValue("0 0 1 0.785");
ProtoInstance190->addFieldValue(*fieldValue194);

fieldValue184->addChildren(*ProtoInstance190);

CProtoInstance* ProtoInstance195 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance195->setName("CameraMovement");
ProtoInstance195->setDEF("TiltPause");
CfieldValue* fieldValue196 = new CfieldValue();
fieldValue196->setName("description");
fieldValue196->setValue("Camera Tilt Pause");
ProtoInstance195->addFieldValue(*fieldValue196);

CfieldValue* fieldValue197 = new CfieldValue();
fieldValue197->setName("duration");
fieldValue197->setValue("1");
ProtoInstance195->addFieldValue(*fieldValue197);

CfieldValue* fieldValue198 = new CfieldValue();
fieldValue198->setName("goalPosition");
fieldValue198->setValue("-10 1 -10");
ProtoInstance195->addFieldValue(*fieldValue198);

CfieldValue* fieldValue199 = new CfieldValue();
fieldValue199->setName("goalOrientation");
fieldValue199->setValue("0 0 1 0.785");
ProtoInstance195->addFieldValue(*fieldValue199);

fieldValue184->addChildren(*ProtoInstance195);

CProtoInstance* ProtoInstance200 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance200->setName("CameraMovement");
CfieldValue* fieldValue201 = new CfieldValue();
fieldValue201->setName("description");
fieldValue201->setValue("Camera Tilt Right");
ProtoInstance200->addFieldValue(*fieldValue201);

CfieldValue* fieldValue202 = new CfieldValue();
fieldValue202->setName("duration");
fieldValue202->setValue("3");
ProtoInstance200->addFieldValue(*fieldValue202);

CfieldValue* fieldValue203 = new CfieldValue();
fieldValue203->setName("goalPosition");
fieldValue203->setValue("-10 1 -10");
ProtoInstance200->addFieldValue(*fieldValue203);

CfieldValue* fieldValue204 = new CfieldValue();
fieldValue204->setName("goalOrientation");
fieldValue204->setValue("0 0 1 -0.785");
ProtoInstance200->addFieldValue(*fieldValue204);

fieldValue184->addChildren(*ProtoInstance200);

CProtoInstance* ProtoInstance205 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance205->setName("CameraMovement");
CfieldValue* fieldValue206 = new CfieldValue();
fieldValue206->setName("description");
fieldValue206->setValue("Camera Tilt Pause");
ProtoInstance205->addFieldValue(*fieldValue206);

CfieldValue* fieldValue207 = new CfieldValue();
fieldValue207->setName("duration");
fieldValue207->setValue("1");
ProtoInstance205->addFieldValue(*fieldValue207);

CfieldValue* fieldValue208 = new CfieldValue();
fieldValue208->setName("goalPosition");
fieldValue208->setValue("-10 1 -10");
ProtoInstance205->addFieldValue(*fieldValue208);

CfieldValue* fieldValue209 = new CfieldValue();
fieldValue209->setName("goalOrientation");
fieldValue209->setValue("0 0 1 -0.785");
ProtoInstance205->addFieldValue(*fieldValue209);

fieldValue184->addChildren(*ProtoInstance205);

CProtoInstance* ProtoInstance210 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance210->setName("CameraMovement");
ProtoInstance210->setDEF("TiltReset");
CfieldValue* fieldValue211 = new CfieldValue();
fieldValue211->setName("description");
fieldValue211->setValue("Camera Tilt Reset");
ProtoInstance210->addFieldValue(*fieldValue211);

CfieldValue* fieldValue212 = new CfieldValue();
fieldValue212->setName("duration");
fieldValue212->setValue("1");
ProtoInstance210->addFieldValue(*fieldValue212);

CfieldValue* fieldValue213 = new CfieldValue();
fieldValue213->setName("goalPosition");
fieldValue213->setValue("-10 1 -10");
ProtoInstance210->addFieldValue(*fieldValue213);

CfieldValue* fieldValue214 = new CfieldValue();
fieldValue214->setName("goalOrientation");
fieldValue214->setValue("0 0 1 0");
ProtoInstance210->addFieldValue(*fieldValue214);

fieldValue184->addChildren(*ProtoInstance210);

CProtoInstance* ProtoInstance215 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance215->setName("CameraMovement");
ProtoInstance215->setDEF("TiltUp");
CfieldValue* fieldValue216 = new CfieldValue();
fieldValue216->setName("description");
fieldValue216->setValue("Return to home");
ProtoInstance215->addFieldValue(*fieldValue216);

CfieldValue* fieldValue217 = new CfieldValue();
fieldValue217->setName("duration");
fieldValue217->setValue("2");
ProtoInstance215->addFieldValue(*fieldValue217);

CfieldValue* fieldValue218 = new CfieldValue();
fieldValue218->setName("goalPosition");
fieldValue218->setValue("0 2 12");
ProtoInstance215->addFieldValue(*fieldValue218);

CfieldValue* fieldValue219 = new CfieldValue();
fieldValue219->setName("goalOrientation");
fieldValue219->setValue("0 0 1 0");
ProtoInstance215->addFieldValue(*fieldValue219);

fieldValue184->addChildren(*ProtoInstance215);

ProtoInstance179->addFieldValue(*fieldValue184);

fieldValue93->addChildren(*ProtoInstance179);

ProtoInstance89->addFieldValue(*fieldValue93);

group->addChildren(*ProtoInstance89);

CGroup* Group220 = (CGroup *)(m_pScene.createNode("Group"));
Group220->setDEF("AnimationGroup.SimpleShots");
CTimeSensor* TimeSensor221 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor221->setDEF("CameraTimer.SimpleShots");
Group220->addChildren(*TimeSensor221);

//initialize clock to match totalDuration of combined Shot Moves
CROUTE* ROUTE222 = new CROUTE();
ROUTE222->setFromField("totalDuration");
ROUTE222->setFromNode("Camera.SimpleShotsTest");
ROUTE222->setToField("cycleInterval");
ROUTE222->setToNode("CameraTimer.SimpleShots");
Group220->addChildren(*ROUTE222);

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
CROUTE* ROUTE223 = new CROUTE();
ROUTE223->setFromField("fraction_changed");
ROUTE223->setFromNode("CameraTimer.SimpleShots");
ROUTE223->setToField("set_fraction");
ROUTE223->setToNode("Camera.SimpleShotsTest");
Group220->addChildren(*ROUTE223);

CTransform* Transform224 = (CTransform *)(m_pScene.createNode("Transform"));
Transform224->setDEF("Trigger.SimpleShots");
Transform224->setTranslation(new float[3]{-4,4,0});
CBooleanFilter* BooleanFilter225 = (CBooleanFilter *)(m_pScene.createNode("BooleanFilter"));
BooleanFilter225->setDEF("TextTouchActive.SimpleShotsFilter");
Transform224->addChildren(*BooleanFilter225);

CTouchSensor* TouchSensor226 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor226->setDEF("TextTouch.SimpleShots");
TouchSensor226->setDescription("touch to animate Camera SimpleShotsTest");
Transform224->addChildren(*TouchSensor226);

CROUTE* ROUTE227 = new CROUTE();
ROUTE227->setFromField("inputTrue");
ROUTE227->setFromNode("TextTouchActive.SimpleShotsFilter");
ROUTE227->setToField("set_bind");
ROUTE227->setToNode("Camera.SimpleShotsTest");
Transform224->addChildren(*ROUTE227);

CROUTE* ROUTE228 = new CROUTE();
ROUTE228->setFromField("isActive");
ROUTE228->setFromNode("TextTouch.SimpleShots");
ROUTE228->setToField("set_boolean");
ROUTE228->setToNode("TextTouchActive.SimpleShotsFilter");
Transform224->addChildren(*ROUTE228);

CROUTE* ROUTE229 = new CROUTE();
ROUTE229->setFromField("touchTime");
ROUTE229->setFromNode("TextTouch.SimpleShots");
ROUTE229->setToField("startTime");
ROUTE229->setToNode("CameraTimer.SimpleShots");
Transform224->addChildren(*ROUTE229);

CShape* Shape230 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text231 = (CText *)(m_pScene.createNode("Text"));
Text231->setString(new CString[2]{"Click to animate","SimpleShotsTest"}, 2);
CFontStyle* FontStyle232 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle232->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text231->setFontStyle(*FontStyle232);

Shape230->setGeometry(Text231);

CAppearance* Appearance233 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material234 = (CMaterial *)(m_pScene.createNode("Material"));
Material234->setDEF("ArtDeco5");
Material234->setAmbientIntensity(0.24);
Material234->setDiffuseColor(new float[3]{0.945455,0.318988,0.321717});
Material234->setShininess(0.01);
Material234->setSpecularColor(new float[3]{0.072727,0.021705,0.010732});
//Universal Media Library: ArtDeco 5
Appearance233->setMaterial(*Material234);

Shape230->setAppearance(*Appearance233);

Transform224->addChildren(*Shape230);

//Simplify intersection test for user selecting text
CShape* Shape235 = (CShape *)(m_pScene.createNode("Shape"));
Shape235->setDEF("TransparentBox");
CAppearance* Appearance236 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material237 = (CMaterial *)(m_pScene.createNode("Material"));
Material237->setTransparency(1);
Appearance236->setMaterial(*Material237);

Shape235->setAppearance(*Appearance236);

CBox* Box238 = (CBox *)(m_pScene.createNode("Box"));
Box238->setSize(new float[3]{6,2,0.0001});
Shape235->setGeometry(Box238);

Transform224->addChildren(*Shape235);

Group220->addChildren(*Transform224);

group->addChildren(*Group220);

CGroup* Group239 = (CGroup *)(m_pScene.createNode("Group"));
Group239->setDEF("SimpleShotsTargets");
CTransform* Transform240 = (CTransform *)(m_pScene.createNode("Transform"));
Transform240->setDEF("TargetBoxZoom");
Transform240->setTranslation(new float[3]{-50,1,-20});
CShape* Shape241 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box242 = (CBox *)(m_pScene.createNode("Box"));
Shape241->setGeometry(Box242);

CAppearance* Appearance243 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material244 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance243->setMaterial(*Material244);

CImageTexture* ImageTexture245 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture245->setUrl(new CString[2]{"images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"}, 2);
Appearance243->setTexture(*ImageTexture245);

Shape241->setAppearance(*Appearance243);

Transform240->addChildren(*Shape241);

CTransform* Transform246 = (CTransform *)(m_pScene.createNode("Transform"));
Transform246->setTranslation(new float[3]{0,2,0});
CShape* Shape247 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text248 = (CText *)(m_pScene.createNode("Text"));
Text248->setString(new CString[1]{"Zoom in, out"}, 1);
CFontStyle* FontStyle249 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle249->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text248->setFontStyle(*FontStyle249);

Shape247->setGeometry(Text248);

CAppearance* Appearance250 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material251 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance250->setMaterial(*Material251);

Shape247->setAppearance(*Appearance250);

Transform246->addChildren(*Shape247);

Transform240->addChildren(*Transform246);

Group239->addChildren(*Transform240);

CTransform* Transform252 = (CTransform *)(m_pScene.createNode("Transform"));
Transform252->setDEF("TargetBoxDolly");
Transform252->setTranslation(new float[3]{-40,1,-20});
CShape* Shape253 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box254 = (CBox *)(m_pScene.createNode("Box"));
Shape253->setGeometry(Box254);

CAppearance* Appearance255 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material256 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance255->setMaterial(*Material256);

CImageTexture* ImageTexture257 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture257->setUrl(new CString[2]{"images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"}, 2);
Appearance255->setTexture(*ImageTexture257);

Shape253->setAppearance(*Appearance255);

Transform252->addChildren(*Shape253);

CTransform* Transform258 = (CTransform *)(m_pScene.createNode("Transform"));
Transform258->setTranslation(new float[3]{0,2,0});
CShape* Shape259 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text260 = (CText *)(m_pScene.createNode("Text"));
Text260->setString(new CString[1]{"Dolly left, right"}, 1);
CFontStyle* FontStyle261 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle261->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text260->setFontStyle(*FontStyle261);

Shape259->setGeometry(Text260);

CAppearance* Appearance262 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material263 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance262->setMaterial(*Material263);

Shape259->setAppearance(*Appearance262);

Transform258->addChildren(*Shape259);

Transform252->addChildren(*Transform258);

Group239->addChildren(*Transform252);

CTransform* Transform264 = (CTransform *)(m_pScene.createNode("Transform"));
Transform264->setDEF("TargetBoxPan");
Transform264->setTranslation(new float[3]{-30,1,-20});
CShape* Shape265 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box266 = (CBox *)(m_pScene.createNode("Box"));
Shape265->setGeometry(Box266);

CAppearance* Appearance267 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material268 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance267->setMaterial(*Material268);

CImageTexture* ImageTexture269 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture269->setUrl(new CString[2]{"images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"}, 2);
Appearance267->setTexture(*ImageTexture269);

Shape265->setAppearance(*Appearance267);

Transform264->addChildren(*Shape265);

CTransform* Transform270 = (CTransform *)(m_pScene.createNode("Transform"));
Transform270->setTranslation(new float[3]{0,2,0});
CShape* Shape271 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text272 = (CText *)(m_pScene.createNode("Text"));
Text272->setString(new CString[1]{"Pan left, right"}, 1);
CFontStyle* FontStyle273 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle273->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text272->setFontStyle(*FontStyle273);

Shape271->setGeometry(Text272);

CAppearance* Appearance274 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material275 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance274->setMaterial(*Material275);

Shape271->setAppearance(*Appearance274);

Transform270->addChildren(*Shape271);

Transform264->addChildren(*Transform270);

Group239->addChildren(*Transform264);

CTransform* Transform276 = (CTransform *)(m_pScene.createNode("Transform"));
Transform276->setDEF("TargetBoxBoom");
Transform276->setTranslation(new float[3]{-20,1,-20});
CShape* Shape277 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box278 = (CBox *)(m_pScene.createNode("Box"));
Shape277->setGeometry(Box278);

CAppearance* Appearance279 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material280 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance279->setMaterial(*Material280);

CImageTexture* ImageTexture281 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture281->setUrl(new CString[2]{"images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"}, 2);
Appearance279->setTexture(*ImageTexture281);

Shape277->setAppearance(*Appearance279);

Transform276->addChildren(*Shape277);

CTransform* Transform282 = (CTransform *)(m_pScene.createNode("Transform"));
Transform282->setTranslation(new float[3]{0,2,0});
CShape* Shape283 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text284 = (CText *)(m_pScene.createNode("Text"));
Text284->setString(new CString[1]{"Boom up, down"}, 1);
CFontStyle* FontStyle285 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle285->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text284->setFontStyle(*FontStyle285);

Shape283->setGeometry(Text284);

CAppearance* Appearance286 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material287 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance286->setMaterial(*Material287);

Shape283->setAppearance(*Appearance286);

Transform282->addChildren(*Shape283);

Transform276->addChildren(*Transform282);

Group239->addChildren(*Transform276);

CTransform* Transform288 = (CTransform *)(m_pScene.createNode("Transform"));
Transform288->setDEF("TargetBoxTilt");
Transform288->setTranslation(new float[3]{-10,1,-20});
CShape* Shape289 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box290 = (CBox *)(m_pScene.createNode("Box"));
Shape289->setGeometry(Box290);

CAppearance* Appearance291 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material292 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance291->setMaterial(*Material292);

CImageTexture* ImageTexture293 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture293->setUrl(new CString[2]{"images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"}, 2);
Appearance291->setTexture(*ImageTexture293);

Shape289->setAppearance(*Appearance291);

Transform288->addChildren(*Shape289);

CTransform* Transform294 = (CTransform *)(m_pScene.createNode("Transform"));
Transform294->setTranslation(new float[3]{0,2,0});
CShape* Shape295 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text296 = (CText *)(m_pScene.createNode("Text"));
Text296->setString(new CString[1]{"Tilt left, right"}, 1);
CFontStyle* FontStyle297 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle297->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text296->setFontStyle(*FontStyle297);

Shape295->setGeometry(Text296);

CAppearance* Appearance298 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material299 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance298->setMaterial(*Material299);

Shape295->setAppearance(*Appearance298);

Transform294->addChildren(*Shape295);

Transform288->addChildren(*Transform294);

Group239->addChildren(*Transform288);

group->addChildren(*Group239);

//=============== Camera.AimPointTest ==============
CProtoInstance* ProtoInstance300 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance300->setName("Camera");
ProtoInstance300->setDEF("Camera.AimPointTest");
CfieldValue* fieldValue301 = new CfieldValue();
fieldValue301->setName("description");
fieldValue301->setValue("AimPointTest for moving camera tracking moving target");
ProtoInstance300->addFieldValue(*fieldValue301);

CfieldValue* fieldValue302 = new CfieldValue();
fieldValue302->setName("position");
fieldValue302->setValue("4 4 10");
ProtoInstance300->addFieldValue(*fieldValue302);

CfieldValue* fieldValue303 = new CfieldValue();
fieldValue303->setName("shots");
CProtoInstance* ProtoInstance304 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance304->setName("CameraShot");
ProtoInstance304->setDEF("Shot5");
CfieldValue* fieldValue305 = new CfieldValue();
fieldValue305->setName("description");
fieldValue305->setValue("#3 Tracking shot");
ProtoInstance304->addFieldValue(*fieldValue305);

CfieldValue* fieldValue306 = new CfieldValue();
fieldValue306->setName("initialPosition");
fieldValue306->setValue("6 6 10");
ProtoInstance304->addFieldValue(*fieldValue306);

CfieldValue* fieldValue307 = new CfieldValue();
fieldValue307->setName("initialOrientation");
fieldValue307->setValue("0 1 0 0");
ProtoInstance304->addFieldValue(*fieldValue307);

CfieldValue* fieldValue308 = new CfieldValue();
fieldValue308->setName("moves");
CProtoInstance* ProtoInstance309 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance309->setName("CameraMovement");
ProtoInstance309->setDEF("MoveAimPoint3.1");
CfieldValue* fieldValue310 = new CfieldValue();
fieldValue310->setName("description");
fieldValue310->setValue("AimPoint 3.1 moving BoxPath");
ProtoInstance309->addFieldValue(*fieldValue310);

CfieldValue* fieldValue311 = new CfieldValue();
fieldValue311->setName("tracking");
fieldValue311->setValue("true");
ProtoInstance309->addFieldValue(*fieldValue311);

CfieldValue* fieldValue312 = new CfieldValue();
fieldValue312->setName("duration");
fieldValue312->setValue("8");
ProtoInstance309->addFieldValue(*fieldValue312);

CfieldValue* fieldValue313 = new CfieldValue();
fieldValue313->setName("goalPosition");
fieldValue313->setValue("6 6 10");
ProtoInstance309->addFieldValue(*fieldValue313);

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308->addChildren(*ProtoInstance309);

CProtoInstance* ProtoInstance314 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance314->setName("CameraMovement");
ProtoInstance314->setDEF("MoveAimPoint3.2");
CfieldValue* fieldValue315 = new CfieldValue();
fieldValue315->setName("description");
fieldValue315->setValue("AimPoint 3.2 pan right while tracking");
ProtoInstance314->addFieldValue(*fieldValue315);

CfieldValue* fieldValue316 = new CfieldValue();
fieldValue316->setName("tracking");
fieldValue316->setValue("true");
ProtoInstance314->addFieldValue(*fieldValue316);

CfieldValue* fieldValue317 = new CfieldValue();
fieldValue317->setName("duration");
fieldValue317->setValue("8");
ProtoInstance314->addFieldValue(*fieldValue317);

CfieldValue* fieldValue318 = new CfieldValue();
fieldValue318->setName("goalPosition");
fieldValue318->setValue("40 6 12");
ProtoInstance314->addFieldValue(*fieldValue318);

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308->addChildren(*ProtoInstance314);

CProtoInstance* ProtoInstance319 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance319->setName("CameraMovement");
ProtoInstance319->setDEF("MoveAimPoint3.3");
CfieldValue* fieldValue320 = new CfieldValue();
fieldValue320->setName("description");
fieldValue320->setValue("AimPoint 3.3 boom up while tracking");
ProtoInstance319->addFieldValue(*fieldValue320);

CfieldValue* fieldValue321 = new CfieldValue();
fieldValue321->setName("tracking");
fieldValue321->setValue("true");
ProtoInstance319->addFieldValue(*fieldValue321);

CfieldValue* fieldValue322 = new CfieldValue();
fieldValue322->setName("duration");
fieldValue322->setValue("3");
ProtoInstance319->addFieldValue(*fieldValue322);

CfieldValue* fieldValue323 = new CfieldValue();
fieldValue323->setName("goalPosition");
fieldValue323->setValue("40 20 13");
ProtoInstance319->addFieldValue(*fieldValue323);

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308->addChildren(*ProtoInstance319);

CProtoInstance* ProtoInstance324 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance324->setName("CameraMovement");
ProtoInstance324->setDEF("MoveAimPoint3.4");
CfieldValue* fieldValue325 = new CfieldValue();
fieldValue325->setName("description");
fieldValue325->setValue("AimPoint 3.4 restore camera back to home");
ProtoInstance324->addFieldValue(*fieldValue325);

CfieldValue* fieldValue326 = new CfieldValue();
fieldValue326->setName("tracking");
fieldValue326->setValue("true");
ProtoInstance324->addFieldValue(*fieldValue326);

CfieldValue* fieldValue327 = new CfieldValue();
fieldValue327->setName("duration");
fieldValue327->setValue("5");
ProtoInstance324->addFieldValue(*fieldValue327);

CfieldValue* fieldValue328 = new CfieldValue();
fieldValue328->setName("goalPosition");
fieldValue328->setValue("4 4 10");
ProtoInstance324->addFieldValue(*fieldValue328);

CfieldValue* fieldValue329 = new CfieldValue();
fieldValue329->setName("goalAimPoint");
fieldValue329->setValue("4 4 0");
ProtoInstance324->addFieldValue(*fieldValue329);

CfieldValue* fieldValue330 = new CfieldValue();
fieldValue330->setName("goalOrientation");
fieldValue330->setValue("0 1 0 0");
ProtoInstance324->addFieldValue(*fieldValue330);

//can test tracking or not using these values
fieldValue308->addChildren(*ProtoInstance324);

ProtoInstance304->addFieldValue(*fieldValue308);

fieldValue303->addChildren(*ProtoInstance304);

ProtoInstance300->addFieldValue(*fieldValue303);

group->addChildren(*ProtoInstance300);

CGroup* Group331 = (CGroup *)(m_pScene.createNode("Group"));
Group331->setDEF("AnimationGroup.AimPointTest");
CTimeSensor* TimeSensor332 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor332->setDEF("CameraTimer.AimPointTest");
Group331->addChildren(*TimeSensor332);

//initialize clock to match totalDuration of combined Shot Moves
CROUTE* ROUTE333 = new CROUTE();
ROUTE333->setFromField("totalDuration");
ROUTE333->setFromNode("Camera.AimPointTest");
ROUTE333->setToField("cycleInterval");
ROUTE333->setToNode("CameraTimer.AimPointTest");
Group331->addChildren(*ROUTE333);

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
CROUTE* ROUTE334 = new CROUTE();
ROUTE334->setFromField("fraction_changed");
ROUTE334->setFromNode("CameraTimer.AimPointTest");
ROUTE334->setToField("set_fraction");
ROUTE334->setToNode("Camera.AimPointTest");
Group331->addChildren(*ROUTE334);

CTransform* Transform335 = (CTransform *)(m_pScene.createNode("Transform"));
Transform335->setDEF("Trigger.AimPointTest");
Transform335->setTranslation(new float[3]{4,4,0});
CBooleanFilter* BooleanFilter336 = (CBooleanFilter *)(m_pScene.createNode("BooleanFilter"));
BooleanFilter336->setDEF("TextTouchActive.AimPointFilter");
Transform335->addChildren(*BooleanFilter336);

CTouchSensor* TouchSensor337 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor337->setDEF("TextTouch.AimPointTest");
TouchSensor337->setDescription("touch to animate Camera AimPointTest");
Transform335->addChildren(*TouchSensor337);

CROUTE* ROUTE338 = new CROUTE();
ROUTE338->setFromField("inputTrue");
ROUTE338->setFromNode("TextTouchActive.AimPointFilter");
ROUTE338->setToField("set_bind");
ROUTE338->setToNode("Camera.AimPointTest");
Transform335->addChildren(*ROUTE338);

CROUTE* ROUTE339 = new CROUTE();
ROUTE339->setFromField("isActive");
ROUTE339->setFromNode("TextTouch.AimPointTest");
ROUTE339->setToField("set_boolean");
ROUTE339->setToNode("TextTouchActive.AimPointFilter");
Transform335->addChildren(*ROUTE339);

CROUTE* ROUTE340 = new CROUTE();
ROUTE340->setFromField("touchTime");
ROUTE340->setFromNode("TextTouch.AimPointTest");
ROUTE340->setToField("startTime");
ROUTE340->setToNode("CameraTimer.AimPointTest");
Transform335->addChildren(*ROUTE340);

CShape* Shape341 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text342 = (CText *)(m_pScene.createNode("Text"));
Text342->setString(new CString[2]{"Click to animate","AimPointTest"}, 2);
CFontStyle* FontStyle343 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle343->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text342->setFontStyle(*FontStyle343);

Shape341->setGeometry(Text342);

CAppearance* Appearance344 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material345 = (CMaterial *)(m_pScene.createNode("Material"));
Material345->setUSE("ArtDeco5");
Appearance344->setMaterial(*Material345);

Shape341->setAppearance(*Appearance344);

Transform335->addChildren(*Shape341);

CShape* Shape346 = (CShape *)(m_pScene.createNode("Shape"));
Shape346->setUSE("TransparentBox");
Transform335->addChildren(*Shape346);

Group331->addChildren(*Transform335);

group->addChildren(*Group331);

//TODO build a test once implemented
CProtoInstance* ProtoInstance347 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance347->setName("OfflineRender");
group->addChildren(*ProtoInstance347);

//=============== animate a camera shape to visualize view changes ==============
CTransform* Transform348 = (CTransform *)(m_pScene.createNode("Transform"));
Transform348->setDEF("CameraShapeTransform");
Transform348->setTranslation(new float[3]{0,0.5,0});
//move CameraShape using active Camera
CROUTE* ROUTE349 = new CROUTE();
ROUTE349->setFromField("position_changed");
ROUTE349->setFromNode("Camera.SimpleShotsTest");
ROUTE349->setToField("translation");
ROUTE349->setToNode("CameraShapeTransform");
Transform348->addChildren(*ROUTE349);

CROUTE* ROUTE350 = new CROUTE();
ROUTE350->setFromField("orientation_changed");
ROUTE350->setFromNode("Camera.SimpleShotsTest");
ROUTE350->setToField("rotation");
ROUTE350->setToNode("CameraShapeTransform");
Transform348->addChildren(*ROUTE350);

CROUTE* ROUTE351 = new CROUTE();
ROUTE351->setFromField("position");
ROUTE351->setFromNode("Camera.AimPointTest");
ROUTE351->setToField("translation");
ROUTE351->setToNode("CameraShapeTransform");
Transform348->addChildren(*ROUTE351);

CROUTE* ROUTE352 = new CROUTE();
ROUTE352->setFromField("orientation_changed");
ROUTE352->setFromNode("Camera.AimPointTest");
ROUTE352->setToField("rotation");
ROUTE352->setToNode("CameraShapeTransform");
Transform348->addChildren(*ROUTE352);

CTransform* Transform353 = (CTransform *)(m_pScene.createNode("Transform"));
Transform353->setDEF("CameraOffsetTransform");
Transform353->setTranslation(new float[3]{0,0,0.25});
CTouchSensor* TouchSensor354 = (CTouchSensor *)(m_pScene.createNode("TouchSensor"));
TouchSensor354->setDEF("CameraShapeTouched");
Transform353->addChildren(*TouchSensor354);

CInline* Inline355 = (CInline *)(m_pScene.createNode("Inline"));
Inline355->setDEF("CameraShape");
Inline355->setUrl(new CString[2]{"CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"}, 2);
Transform353->addChildren(*Inline355);

CShape* Shape356 = (CShape *)(m_pScene.createNode("Shape"));
Shape356->setDEF("SightLine");
CIndexedLineSet* IndexedLineSet357 = (CIndexedLineSet *)(m_pScene.createNode("IndexedLineSet"));
IndexedLineSet357->setCoordIndex(new int[2]{0,1});
CCoordinate* Coordinate358 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate358->setPoint(new float[6]{0,0,0,0,0,-100});
IndexedLineSet357->setCoord(*Coordinate358);

Shape356->setGeometry(IndexedLineSet357);

CAppearance* Appearance359 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material360 = (CMaterial *)(m_pScene.createNode("Material"));
Material360->setEmissiveColor(new float[3]{0.8,0.8,0.4});
Appearance359->setMaterial(*Material360);

Shape356->setAppearance(*Appearance359);

Transform353->addChildren(*Shape356);

Transform348->addChildren(*Transform353);

//Display frustum to show camera view within the scene, toggled by user selecting CameraShape
CExternProtoDeclare* ExternProtoDeclare361 = new CExternProtoDeclare();
ExternProtoDeclare361->setName("ViewFrustum");
ExternProtoDeclare361->setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes");
ExternProtoDeclare361->setUrl(new CString[4]{"../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"}, 4);
Cfield* field362 = new Cfield();
field362->setName("ViewpointNode");
field362->setAccessType("initializeOnly");
field362->setAppinfo("required: insert Viewpoint DEF or USE node for view of interest");
field362->setType("SFNode");
ExternProtoDeclare361->addField(*field362);

Cfield* field363 = new Cfield();
field363->setName("NavigationInfoNode");
field363->setAccessType("initializeOnly");
field363->setAppinfo("required: insert NavigationInfo DEF or USE node of interest");
field363->setType("SFNode");
ExternProtoDeclare361->addField(*field363);

Cfield* field364 = new Cfield();
field364->setName("visible");
field364->setAccessType("inputOutput");
field364->setAppinfo("whether or not frustum geometry is rendered");
field364->setType("SFBool");
ExternProtoDeclare361->addField(*field364);

Cfield* field365 = new Cfield();
field365->setName("lineColor");
field365->setAccessType("inputOutput");
field365->setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9");
field365->setType("SFColor");
ExternProtoDeclare361->addField(*field365);

Cfield* field366 = new Cfield();
field366->setName("frustumColor");
field366->setAccessType("inputOutput");
field366->setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8");
field366->setType("SFColor");
ExternProtoDeclare361->addField(*field366);

Cfield* field367 = new Cfield();
field367->setName("transparency");
field367->setAccessType("inputOutput");
field367->setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5");
field367->setType("SFFloat");
ExternProtoDeclare361->addField(*field367);

Cfield* field368 = new Cfield();
field368->setName("aspectRatio");
field368->setAccessType("inputOutput");
field368->setAppinfo("assumed ratio height/width, default value 0.75");
field368->setType("SFFloat");
ExternProtoDeclare361->addField(*field368);

Cfield* field369 = new Cfield();
field369->setName("trace");
field369->setAccessType("initializeOnly");
field369->setAppinfo("debug support, default false");
field369->setType("SFBool");
ExternProtoDeclare361->addField(*field369);

Transform348->addChildren(*ExternProtoDeclare361);

CProtoInstance* ProtoInstance370 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance370->setName("ViewFrustum");
ProtoInstance370->setDEF("ViewFrustumNode");
CfieldValue* fieldValue371 = new CfieldValue();
fieldValue371->setName("ViewpointNode");
CViewpoint* Viewpoint372 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint372->setDEF("FrustumViewpoint");
Viewpoint372->setDescription("viewpoint for ViewFrustum");
Viewpoint372->setPosition(new float[3]{0,0,0});
fieldValue371->addChildren(*Viewpoint372);

ProtoInstance370->addFieldValue(*fieldValue371);

CfieldValue* fieldValue373 = new CfieldValue();
fieldValue373->setName("NavigationInfoNode");
CNavigationInfo* NavigationInfo374 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo374->setDEF("TestNavigationInfo");
NavigationInfo374->setTransitionType(new CString[1]{"ANIMATE"}, 1);
NavigationInfo374->setVisibilityLimit(100);
fieldValue373->addChildren(*NavigationInfo374);

ProtoInstance370->addFieldValue(*fieldValue373);

CfieldValue* fieldValue375 = new CfieldValue();
fieldValue375->setName("visible");
fieldValue375->setValue("false");
ProtoInstance370->addFieldValue(*fieldValue375);

CfieldValue* fieldValue376 = new CfieldValue();
fieldValue376->setName("lineColor");
fieldValue376->setValue("0.9 0.9 0.9");
ProtoInstance370->addFieldValue(*fieldValue376);

CfieldValue* fieldValue377 = new CfieldValue();
fieldValue377->setName("frustumColor");
fieldValue377->setValue("0.8 0.8 0.8");
ProtoInstance370->addFieldValue(*fieldValue377);

CfieldValue* fieldValue378 = new CfieldValue();
fieldValue378->setName("transparency");
fieldValue378->setValue("0.95");
ProtoInstance370->addFieldValue(*fieldValue378);

Transform348->addChildren(*ProtoInstance370);

CBooleanToggle* BooleanToggle379 = (CBooleanToggle *)(m_pScene.createNode("BooleanToggle"));
BooleanToggle379->setDEF("ViewFrustumToggle");
Transform348->addChildren(*BooleanToggle379);

CROUTE* ROUTE380 = new CROUTE();
ROUTE380->setFromField("isActive");
ROUTE380->setFromNode("CameraShapeTouched");
ROUTE380->setToField("set_boolean");
ROUTE380->setToNode("ViewFrustumToggle");
Transform348->addChildren(*ROUTE380);

CROUTE* ROUTE381 = new CROUTE();
ROUTE381->setFromField("toggle");
ROUTE381->setFromNode("ViewFrustumToggle");
ROUTE381->setToField("set_visible");
ROUTE381->setToNode("ViewFrustumNode");
Transform348->addChildren(*ROUTE381);

group->addChildren(*Transform348);

//=============== add checkerboard, axes and other things to look at while animating ==============
CBackground* Background382 = (CBackground *)(m_pScene.createNode("Background"));
Background382->setSkyColor(new float[3]{0.282353,0.380392,0.470588});
group->addChildren(*Background382);

CTransform* Transform383 = (CTransform *)(m_pScene.createNode("Transform"));
Transform383->setRotation(new float[4]{1,0,0,-1.57079});
Transform383->setScale(new float[3]{10,10,10});
CShape* Shape384 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance385 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material386 = (CMaterial *)(m_pScene.createNode("Material"));
Material386->setAmbientIntensity(0.01);
Material386->setDiffuseColor(new float[3]{1,1,1});
Material386->setShininess(0.05);
Appearance385->setMaterial(*Material386);

Shape384->setAppearance(*Appearance385);

CIndexedFaceSet* IndexedFaceSet387 = (CIndexedFaceSet *)(m_pScene.createNode("IndexedFaceSet"));
IndexedFaceSet387->setColorIndex(new int[49]{0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0});
IndexedFaceSet387->setColorPerVertex(False);
IndexedFaceSet387->setCoordIndex(new int[245]{0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1});
IndexedFaceSet387->setNormalPerVertex(False);
IndexedFaceSet387->setSolid(False);
CCoordinate* Coordinate388 = (CCoordinate *)(m_pScene.createNode("Coordinate"));
Coordinate388->setPoint(new float[192]{-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0});
IndexedFaceSet387->setCoord(*Coordinate388);

CColor* Color389 = (CColor *)(m_pScene.createNode("Color"));
Color389->setColor(new float[6]{0.435294,0.741176,0,0,0.560784,0.580392});
IndexedFaceSet387->setColor(*Color389);

Shape384->setGeometry(IndexedFaceSet387);

Transform383->addChildren(*Shape384);

group->addChildren(*Transform383);

CTransform* Transform390 = (CTransform *)(m_pScene.createNode("Transform"));
Transform390->setScale(new float[3]{3,3,3});
Transform390->setTranslation(new float[3]{0,0.25,0});
CInline* Inline391 = (CInline *)(m_pScene.createNode("Inline"));
Inline391->setDEF("CoordinateAxes");
Inline391->setUrl(new CString[8]{"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"}, 8);
Transform390->addChildren(*Inline391);

group->addChildren(*Transform390);

CTransform* Transform392 = (CTransform *)(m_pScene.createNode("Transform"));
Transform392->setDEF("MovingBoxTransform");
CPositionInterpolator* PositionInterpolator393 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator393->setDEF("BoxPath");
PositionInterpolator393->setKey(new float[5]{0,0.25,0.5,0.75,1}, 5);
PositionInterpolator393->setKeyValue(new float[15]{-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5});
Transform392->addChildren(*PositionInterpolator393);

CTimeSensor* TimeSensor394 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor394->setDEF("BoxTimer");
TimeSensor394->setCycleInterval(10);
TimeSensor394->setLoop(True);
Transform392->addChildren(*TimeSensor394);

CROUTE* ROUTE395 = new CROUTE();
ROUTE395->setFromField("value_changed");
ROUTE395->setFromNode("BoxPath");
ROUTE395->setToField("translation");
ROUTE395->setToNode("MovingBoxTransform");
Transform392->addChildren(*ROUTE395);

CROUTE* ROUTE396 = new CROUTE();
ROUTE396->setFromField("value_changed");
ROUTE396->setFromNode("BoxPath");
ROUTE396->setToField("goalAimPoint");
ROUTE396->setToNode("MoveAimPoint3.1");
Transform392->addChildren(*ROUTE396);

CROUTE* ROUTE397 = new CROUTE();
ROUTE397->setFromField("value_changed");
ROUTE397->setFromNode("BoxPath");
ROUTE397->setToField("goalAimPoint");
ROUTE397->setToNode("MoveAimPoint3.2");
Transform392->addChildren(*ROUTE397);

CROUTE* ROUTE398 = new CROUTE();
ROUTE398->setFromField("value_changed");
ROUTE398->setFromNode("BoxPath");
ROUTE398->setToField("goalAimPoint");
ROUTE398->setToNode("MoveAimPoint3.3");
Transform392->addChildren(*ROUTE398);

CROUTE* ROUTE399 = new CROUTE();
ROUTE399->setFromField("fraction_changed");
ROUTE399->setFromNode("BoxTimer");
ROUTE399->setToField("set_fraction");
ROUTE399->setToNode("BoxPath");
Transform392->addChildren(*ROUTE399);

CShape* Shape400 = (CShape *)(m_pScene.createNode("Shape"));
CBox* Box401 = (CBox *)(m_pScene.createNode("Box"));
Shape400->setGeometry(Box401);

CAppearance* Appearance402 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material403 = (CMaterial *)(m_pScene.createNode("Material"));
Appearance402->setMaterial(*Material403);

CImageTexture* ImageTexture404 = (CImageTexture *)(m_pScene.createNode("ImageTexture"));
ImageTexture404->setUrl(new CString[2]{"../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"}, 2);
Appearance402->setTexture(*ImageTexture404);

Shape400->setAppearance(*Appearance402);

Transform392->addChildren(*Shape400);

group->addChildren(*Transform392);

//================ CrossHair visualization for center of screen ================
CExternProtoDeclare* ExternProtoDeclare405 = new CExternProtoDeclare();
ExternProtoDeclare405->setName("CrossHair");
ExternProtoDeclare405->setAppinfo("CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point");
ExternProtoDeclare405->setUrl(new CString[4]{"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"}, 4);
Cfield* field406 = new Cfield();
field406->setName("enabled");
field406->setAccessType("initializeOnly");
field406->setAppinfo("whether CrissHair orititype is enabled or not");
field406->setType("SFBool");
ExternProtoDeclare405->addField(*field406);

Cfield* field407 = new Cfield();
field407->setName("set_enabled");
field407->setAccessType("inputOnly");
field407->setAppinfo("control whether enabled/disabled");
field407->setType("SFBool");
ExternProtoDeclare405->addField(*field407);

Cfield* field408 = new Cfield();
field408->setName("markerColor");
field408->setAccessType("inputOutput");
field408->setAppinfo("color of CrossHair marker");
field408->setType("SFColor");
ExternProtoDeclare405->addField(*field408);

Cfield* field409 = new Cfield();
field409->setName("scale");
field409->setAccessType("inputOutput");
field409->setAppinfo("size of CrossHair in meters");
field409->setType("SFVec3f");
ExternProtoDeclare405->addField(*field409);

Cfield* field410 = new Cfield();
field410->setName("positionOffsetFromCamera");
field410->setAccessType("inputOutput");
field410->setAppinfo("distance in front of HUD viewpoint");
field410->setType("SFVec3f");
ExternProtoDeclare405->addField(*field410);

group->addChildren(*ExternProtoDeclare405);

CProtoInstance* ProtoInstance411 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance411->setName("CrossHair");
ProtoInstance411->setDEF("CrossHairInstance");
CfieldValue* fieldValue412 = new CfieldValue();
fieldValue412->setName("enabled");
fieldValue412->setValue("true");
ProtoInstance411->addFieldValue(*fieldValue412);

CfieldValue* fieldValue413 = new CfieldValue();
fieldValue413->setName("markerColor");
fieldValue413->setValue("1 0.5 0");
ProtoInstance411->addFieldValue(*fieldValue413);

CfieldValue* fieldValue414 = new CfieldValue();
fieldValue414->setName("scale");
fieldValue414->setValue("1 1 1");
ProtoInstance411->addFieldValue(*fieldValue414);

CfieldValue* fieldValue415 = new CfieldValue();
fieldValue415->setName("positionOffsetFromCamera");
fieldValue415->setValue("0 0 -6");
ProtoInstance411->addFieldValue(*fieldValue415);

group->addChildren(*ProtoInstance411);

//turn on CrossHairInstance when animated camera viewpoints are bound
CROUTE* ROUTE416 = new CROUTE();
ROUTE416->setFromField("isBound");
ROUTE416->setFromNode("Camera.SimpleShotsTest");
ROUTE416->setToField("set_enabled");
ROUTE416->setToNode("CrossHairInstance");
group->addChildren(*ROUTE416);

CROUTE* ROUTE417 = new CROUTE();
ROUTE417->setFromField("isBound");
ROUTE417->setFromNode("Camera.AimPointTest");
ROUTE417->setToField("set_enabled");
ROUTE417->setToNode("CrossHairInstance");
group->addChildren(*ROUTE417);

//turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>
//=============== TODO Launch Prototype Example ==============
CAnchor* Anchor418 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor418->setDescription("launch CameraExample scene");
Anchor418->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor418->setUrl(new CString[4]{"CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"}, 4);
CTransform* Transform419 = (CTransform *)(m_pScene.createNode("Transform"));
Transform419->setTranslation(new float[3]{0,-3,0});
CShape* Shape420 = (CShape *)(m_pScene.createNode("Shape"));
CText* Text421 = (CText *)(m_pScene.createNode("Text"));
Text421->setString(new CString[5]{"CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"}, 5);
CFontStyle* FontStyle422 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle422->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle422->setSize(0.5);
Text421->setFontStyle(*FontStyle422);

Shape420->setGeometry(Text421);

CAppearance* Appearance423 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material424 = (CMaterial *)(m_pScene.createNode("Material"));
Material424->setDiffuseColor(new float[3]{1,1,0.2});
Appearance423->setMaterial(*Material424);

Shape420->setAppearance(*Appearance423);

Transform419->addChildren(*Shape420);

Anchor418->addChildren(*Transform419);

group->addChildren(*Anchor418);

X3D0->setScene(*Scene21);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
