#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "CameraExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "documentation";
meta4.content = "Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Don Brutzman and Jeff Weekley";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "18 June 2009";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "20 January 2020";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "TODO";
meta8.content = "Schematron rules, backed up by initialize() checks";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "BeyondViewpointCameraNodesWeb3D2009.pdf";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "MovingImage";
meta10.content = "CameraExamplesDemo.mp4";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "subject";
meta12.content = "Camera nodes for Viewpoint navigation control";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "reference";
meta13.content = "CameraPrototypes.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "CameraExamplesConsoleLog.txt";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "identifier";
meta17.content = "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "license";
meta20.content = "../license.html";
head1.meta[18] = meta20;

head = head1;

//=============== Camera ==============
WorldInfo WorldInfo22 = createNode("WorldInfo");
WorldInfo22.title = "CameraExamples.x3d";
children = new MFNode();

children[0] = WorldInfo22;

ExternProtoDeclare ExternProtoDeclare23 = createNode("ExternProtoDeclare");
ExternProtoDeclare23.name = "Camera";
ExternProtoDeclare23.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images";
ExternProtoDeclare23.url = new MFString(new java.lang.String["CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"]);
field field24 = createNode("field");
field24.name = "description";
field24.accessType = "inputOutput";
field24.appinfo = "Text description to be displayed for this Camera";
field24.type = "SFString";
ExternProtoDeclare23.field = new MFNode();

ExternProtoDeclare23.field[0] = field24;

field field25 = createNode("field");
field25.name = "position";
field25.accessType = "inputOutput";
field25.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field25.type = "SFVec3f";
ExternProtoDeclare23.field[1] = field25;

field field26 = createNode("field");
field26.name = "orientation";
field26.accessType = "inputOutput";
field26.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field26.type = "SFRotation";
ExternProtoDeclare23.field[2] = field26;

field field27 = createNode("field");
field27.name = "fieldOfView";
field27.accessType = "inputOutput";
field27.appinfo = "pi/4";
field27.type = "SFFloat";
ExternProtoDeclare23.field[3] = field27;

field field28 = createNode("field");
field28.name = "set_fraction";
field28.accessType = "inputOnly";
field28.appinfo = "input fraction drives interpolators";
field28.type = "SFFloat";
ExternProtoDeclare23.field[4] = field28;

field field29 = createNode("field");
field29.name = "set_bind";
field29.accessType = "inputOnly";
field29.appinfo = "input event binds or unbinds this Camera";
field29.type = "SFBool";
ExternProtoDeclare23.field[5] = field29;

field field30 = createNode("field");
field30.name = "bindTime";
field30.accessType = "outputOnly";
field30.appinfo = "output event indicates when this Camera is bound";
field30.type = "SFTime";
ExternProtoDeclare23.field[6] = field30;

field field31 = createNode("field");
field31.name = "isBound";
field31.accessType = "outputOnly";
field31.appinfo = "output event indicates whether this Camera is bound or unbound";
field31.type = "SFBool";
ExternProtoDeclare23.field[7] = field31;

field field32 = createNode("field");
field32.name = "nearClipPlane";
field32.accessType = "inputOutput";
field32.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field32.type = "SFFloat";
ExternProtoDeclare23.field[8] = field32;

field field33 = createNode("field");
field33.name = "farClipPlane";
field33.accessType = "inputOutput";
field33.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field33.type = "SFFloat";
ExternProtoDeclare23.field[9] = field33;

field field34 = createNode("field");
field34.name = "shots";
field34.accessType = "inputOutput";
field34.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field34.type = "MFNode";
ExternProtoDeclare23.field[10] = field34;

field field35 = createNode("field");
field35.name = "headlight";
field35.accessType = "inputOutput";
field35.appinfo = "Whether camera headlight is on or off";
field35.type = "SFBool";
ExternProtoDeclare23.field[11] = field35;

field field36 = createNode("field");
field36.name = "headlightColor";
field36.accessType = "inputOutput";
field36.appinfo = "Camera headlight color";
field36.type = "SFColor";
ExternProtoDeclare23.field[12] = field36;

field field37 = createNode("field");
field37.name = "headlightIntensity";
field37.accessType = "inputOutput";
field37.appinfo = "Camera headlight intensity";
field37.type = "SFFloat";
ExternProtoDeclare23.field[13] = field37;

field field38 = createNode("field");
field38.name = "filterColor";
field38.accessType = "inputOutput";
field38.appinfo = "Camera filter color that modifies virtual lens capture";
field38.type = "SFColor";
ExternProtoDeclare23.field[14] = field38;

field field39 = createNode("field");
field39.name = "filterTransparency";
field39.accessType = "inputOutput";
field39.appinfo = "Camera filter transparency that modifies virtual lens capture";
field39.type = "SFFloat";
ExternProtoDeclare23.field[15] = field39;

field field40 = createNode("field");
field40.name = "upVector";
field40.accessType = "inputOutput";
field40.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field40.type = "SFVec3f";
ExternProtoDeclare23.field[16] = field40;

field field41 = createNode("field");
field41.name = "fStop";
field41.accessType = "inputOutput";
field41.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field41.type = "SFFloat";
ExternProtoDeclare23.field[17] = field41;

field field42 = createNode("field");
field42.name = "focusDistance";
field42.accessType = "inputOutput";
field42.appinfo = "Distance to focal plane of sharpest focus";
field42.type = "SFFloat";
ExternProtoDeclare23.field[18] = field42;

field field43 = createNode("field");
field43.name = "isActive";
field43.accessType = "outputOnly";
field43.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field43.type = "SFBool";
ExternProtoDeclare23.field[19] = field43;

field field44 = createNode("field");
field44.name = "totalDuration";
field44.accessType = "outputOnly";
field44.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field44.type = "SFTime";
ExternProtoDeclare23.field[20] = field44;

field field45 = createNode("field");
field45.name = "offlineRender";
field45.accessType = "inputOutput";
field45.appinfo = "OfflineRender node";
field45.type = "SFNode";
ExternProtoDeclare23.field[21] = field45;

field field46 = createNode("field");
field46.name = "traceEnabled";
field46.accessType = "initializeOnly";
field46.appinfo = "enable console output to trace script computations and prototype progress";
field46.type = "SFBool";
ExternProtoDeclare23.field[22] = field46;

//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
children[1] = ExternProtoDeclare23;

//=============== CameraShot ==============
ExternProtoDeclare ExternProtoDeclare47 = createNode("ExternProtoDeclare");
ExternProtoDeclare47.name = "CameraShot";
ExternProtoDeclare47.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot";
ExternProtoDeclare47.url = new MFString(new java.lang.String["CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"]);
field field48 = createNode("field");
field48.name = "description";
field48.accessType = "inputOutput";
field48.appinfo = "Text description to be displayed for this CameraShot";
field48.type = "SFString";
ExternProtoDeclare47.field = new MFNode();

ExternProtoDeclare47.field[0] = field48;

field field49 = createNode("field");
field49.name = "enabled";
field49.accessType = "inputOutput";
field49.appinfo = "Whether this CameraShot can be activated";
field49.type = "SFBool";
ExternProtoDeclare47.field[1] = field49;

field field50 = createNode("field");
field50.name = "moves";
field50.accessType = "inputOutput";
field50.appinfo = "Set of CameraMovement nodes";
field50.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ExternProtoDeclare47.field[2] = field50;

field field51 = createNode("field");
field51.name = "initialPosition";
field51.accessType = "inputOutput";
field51.appinfo = "Setup to reinitialize camera position for this shot";
field51.type = "SFVec3f";
ExternProtoDeclare47.field[3] = field51;

field field52 = createNode("field");
field52.name = "initialOrientation";
field52.accessType = "inputOutput";
field52.appinfo = "Setup to reinitialize camera rotation for this shot";
field52.type = "SFRotation";
ExternProtoDeclare47.field[4] = field52;

field field53 = createNode("field");
field53.name = "initialAimPoint";
field53.accessType = "inputOutput";
field53.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field53.type = "SFVec3f";
ExternProtoDeclare47.field[5] = field53;

field field54 = createNode("field");
field54.name = "initialFieldOfView";
field54.accessType = "inputOutput";
field54.appinfo = "pi/4";
field54.type = "SFFloat";
ExternProtoDeclare47.field[6] = field54;

field field55 = createNode("field");
field55.name = "initialFStop";
field55.accessType = "inputOutput";
field55.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field55.type = "SFFloat";
ExternProtoDeclare47.field[7] = field55;

field field56 = createNode("field");
field56.name = "initialFocusDistance";
field56.accessType = "inputOutput";
field56.appinfo = "Distance to focal plane of sharpest focus";
field56.type = "SFFloat";
ExternProtoDeclare47.field[8] = field56;

field field57 = createNode("field");
field57.name = "shotDuration";
field57.accessType = "outputOnly";
field57.appinfo = "Subtotal duration of contained CameraMovement move durations";
field57.type = "SFTime";
ExternProtoDeclare47.field[9] = field57;

field field58 = createNode("field");
field58.name = "isActive";
field58.accessType = "outputOnly";
field58.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field58.type = "SFBool";
ExternProtoDeclare47.field[10] = field58;

field field59 = createNode("field");
field59.name = "traceEnabled";
field59.accessType = "initializeOnly";
field59.appinfo = "enable console output to trace script computations and prototype progress";
field59.type = "SFBool";
ExternProtoDeclare47.field[11] = field59;

children[2] = ExternProtoDeclare47;

//=============== CameraMovement ==============
ExternProtoDeclare ExternProtoDeclare60 = createNode("ExternProtoDeclare");
ExternProtoDeclare60.name = "CameraMovement";
ExternProtoDeclare60.appinfo = "CameraMovement defines a single camera movement animation";
ExternProtoDeclare60.url = new MFString(new java.lang.String["CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"]);
field field61 = createNode("field");
field61.name = "description";
field61.accessType = "inputOutput";
field61.appinfo = "Text description to be displayed for this CameraMovement";
field61.type = "SFString";
ExternProtoDeclare60.field = new MFNode();

ExternProtoDeclare60.field[0] = field61;

field field62 = createNode("field");
field62.name = "enabled";
field62.accessType = "inputOutput";
field62.appinfo = "Whether this CameraMovement can be activated";
field62.type = "SFBool";
ExternProtoDeclare60.field[1] = field62;

field field63 = createNode("field");
field63.name = "duration";
field63.accessType = "inputOutput";
field63.appinfo = "Duration in seconds for this move";
field63.type = "SFFloat";
ExternProtoDeclare60.field[2] = field63;

field field64 = createNode("field");
field64.name = "goalPosition";
field64.accessType = "inputOutput";
field64.appinfo = "Goal camera position for this move";
field64.type = "SFVec3f";
ExternProtoDeclare60.field[3] = field64;

field field65 = createNode("field");
field65.name = "goalOrientation";
field65.accessType = "inputOutput";
field65.appinfo = "Goal camera rotation for this move";
field65.type = "SFRotation";
ExternProtoDeclare60.field[4] = field65;

field field66 = createNode("field");
field66.name = "tracking";
field66.accessType = "inputOutput";
field66.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field66.type = "SFBool";
ExternProtoDeclare60.field[5] = field66;

field field67 = createNode("field");
field67.name = "goalAimPoint";
field67.accessType = "inputOutput";
field67.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field67.type = "SFVec3f";
ExternProtoDeclare60.field[6] = field67;

field field68 = createNode("field");
field68.name = "goalFieldOfView";
field68.accessType = "inputOutput";
field68.appinfo = "Goal fieldOfView for this move";
field68.type = "SFFloat";
ExternProtoDeclare60.field[7] = field68;

field field69 = createNode("field");
field69.name = "goalFStop";
field69.accessType = "inputOutput";
field69.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field69.type = "SFFloat";
ExternProtoDeclare60.field[8] = field69;

field field70 = createNode("field");
field70.name = "goalFocusDistance";
field70.accessType = "inputOutput";
field70.appinfo = "Distance to focal plane of sharpest focus";
field70.type = "SFFloat";
ExternProtoDeclare60.field[9] = field70;

field field71 = createNode("field");
field71.name = "isActive";
field71.accessType = "outputOnly";
field71.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field71.type = "SFBool";
ExternProtoDeclare60.field[10] = field71;

field field72 = createNode("field");
field72.name = "traceEnabled";
field72.accessType = "initializeOnly";
field72.appinfo = "enable console output to trace script computations and prototype progress";
field72.type = "SFBool";
ExternProtoDeclare60.field[11] = field72;

children[3] = ExternProtoDeclare60;

//=============== OfflineRender ==============
ExternProtoDeclare ExternProtoDeclare73 = createNode("ExternProtoDeclare");
ExternProtoDeclare73.name = "OfflineRender";
ExternProtoDeclare73.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)";
ExternProtoDeclare73.url = new MFString(new java.lang.String["CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"]);
field field74 = createNode("field");
field74.name = "description";
field74.accessType = "inputOutput";
field74.appinfo = "Text description to be displayed for this OfflineRender";
field74.type = "SFString";
ExternProtoDeclare73.field = new MFNode();

ExternProtoDeclare73.field[0] = field74;

field field75 = createNode("field");
field75.name = "enabled";
field75.accessType = "inputOutput";
field75.appinfo = "Whether this OfflineRender can be activated";
field75.type = "SFBool";
ExternProtoDeclare73.field[1] = field75;

field field76 = createNode("field");
field76.name = "frameRate";
field76.accessType = "inputOutput";
field76.appinfo = "Frames per second recorded for this rendering";
field76.type = "SFFloat";
ExternProtoDeclare73.field[2] = field76;

field field77 = createNode("field");
field77.name = "frameSize";
field77.accessType = "inputOutput";
field77.appinfo = "Size of frame in number of pixels width and height";
field77.type = "SFVec2f";
ExternProtoDeclare73.field[3] = field77;

field field78 = createNode("field");
field78.name = "pixelAspectRatio";
field78.accessType = "inputOutput";
field78.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field78.type = "SFFloat";
ExternProtoDeclare73.field[4] = field78;

field field79 = createNode("field");
field79.name = "set_startTime";
field79.accessType = "inputOnly";
field79.appinfo = "Begin render operation";
field79.type = "SFTime";
ExternProtoDeclare73.field[5] = field79;

field field80 = createNode("field");
field80.name = "progress";
field80.accessType = "outputOnly";
field80.appinfo = "Progress performing render operation (0..1)";
field80.type = "SFFloat";
ExternProtoDeclare73.field[6] = field80;

field field81 = createNode("field");
field81.name = "renderCompleteTime";
field81.accessType = "outputOnly";
field81.appinfo = "Render operation complete";
field81.type = "SFTime";
ExternProtoDeclare73.field[7] = field81;

field field82 = createNode("field");
field82.name = "movieFormat";
field82.accessType = "initializeOnly";
field82.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field82.type = "MFString";
ExternProtoDeclare73.field[8] = field82;

field field83 = createNode("field");
field83.name = "imageFormat";
field83.accessType = "initializeOnly";
field83.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field83.type = "MFString";
ExternProtoDeclare73.field[9] = field83;

field field84 = createNode("field");
field84.name = "traceEnabled";
field84.accessType = "initializeOnly";
field84.appinfo = "enable console output to trace script computations and prototype progress";
field84.type = "SFBool";
ExternProtoDeclare73.field[10] = field84;

//TODO non-photorealistic rendering (NPR) parameters
children[4] = ExternProtoDeclare73;

//=============== Lights, camera, action! ==============
DirectionalLight DirectionalLight85 = createNode("DirectionalLight");
DirectionalLight85.direction = new SFVec3f(new float[0,-1,0]);
DirectionalLight85.global = True;
DirectionalLight85.intensity = 0.8;
children[5] = DirectionalLight85;

NavigationInfo NavigationInfo86 = createNode("NavigationInfo");
NavigationInfo86.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
children[6] = NavigationInfo86;

Viewpoint Viewpoint87 = createNode("Viewpoint");
Viewpoint87.description = "Camera test scene entry view";
Viewpoint87.position = new SFVec3f(new float[0,2,12]);
children[7] = Viewpoint87;

Viewpoint Viewpoint88 = createNode("Viewpoint");
Viewpoint88.description = "Camera test scene from above";
Viewpoint88.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint88.position = new SFVec3f(new float[0,150,0]);
children[8] = Viewpoint88;

//Keep prototype instances in same file while developing, then move later
//We will create examples matching those in the paper
//=============== Camera.SimpleShotsTest ==============
ProtoInstance ProtoInstance89 = createNode("ProtoInstance");
ProtoInstance89.name = "Camera";
ProtoInstance89.DEF = "Camera.SimpleShotsTest";
fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "description";
fieldValue90.value = "SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt";
ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "headlight";
fieldValue91.value = "true";
ProtoInstance89.fieldValue[1] = fieldValue91;

fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "position";
fieldValue92.value = "-4 4 10";
ProtoInstance89.fieldValue[2] = fieldValue92;

fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "shots";
ProtoInstance ProtoInstance94 = createNode("ProtoInstance");
ProtoInstance94.name = "CameraShot";
ProtoInstance94.DEF = "Zoom";
fieldValue fieldValue95 = createNode("fieldValue");
fieldValue95.name = "description";
fieldValue95.value = "Simple shot of Camera Zoom";
ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "initialPosition";
fieldValue96.value = "-50 1 -10";
ProtoInstance94.fieldValue[1] = fieldValue96;

fieldValue fieldValue97 = createNode("fieldValue");
fieldValue97.name = "initialOrientation";
fieldValue97.value = "0 1 0 0";
ProtoInstance94.fieldValue[2] = fieldValue97;

fieldValue fieldValue98 = createNode("fieldValue");
fieldValue98.name = "moves";
ProtoInstance ProtoInstance99 = createNode("ProtoInstance");
ProtoInstance99.name = "CameraMovement";
fieldValue fieldValue100 = createNode("fieldValue");
fieldValue100.name = "description";
fieldValue100.value = "Camera Zoom In";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

fieldValue fieldValue101 = createNode("fieldValue");
fieldValue101.name = "duration";
fieldValue101.value = "3";
ProtoInstance99.fieldValue[1] = fieldValue101;

fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "goalPosition";
fieldValue102.value = "-50 1 -15";
ProtoInstance99.fieldValue[2] = fieldValue102;

fieldValue fieldValue103 = createNode("fieldValue");
fieldValue103.name = "goalOrientation";
fieldValue103.value = "0 1 0 0";
ProtoInstance99.fieldValue[3] = fieldValue103;

fieldValue98.children = new MFNode();

fieldValue98.children[0] = ProtoInstance99;

ProtoInstance ProtoInstance104 = createNode("ProtoInstance");
ProtoInstance104.name = "CameraMovement";
fieldValue fieldValue105 = createNode("fieldValue");
fieldValue105.name = "description";
fieldValue105.value = "Camera Zoom Out";
ProtoInstance104.fieldValue = new MFNode();

ProtoInstance104.fieldValue[0] = fieldValue105;

fieldValue fieldValue106 = createNode("fieldValue");
fieldValue106.name = "duration";
fieldValue106.value = "3";
ProtoInstance104.fieldValue[1] = fieldValue106;

fieldValue fieldValue107 = createNode("fieldValue");
fieldValue107.name = "goalPosition";
fieldValue107.value = "-50 1 -10";
ProtoInstance104.fieldValue[2] = fieldValue107;

fieldValue fieldValue108 = createNode("fieldValue");
fieldValue108.name = "goalOrientation";
fieldValue108.value = "0 1 0 0";
ProtoInstance104.fieldValue[3] = fieldValue108;

fieldValue98.children[1] = ProtoInstance104;

ProtoInstance ProtoInstance109 = createNode("ProtoInstance");
ProtoInstance109.name = "CameraMovement";
fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "description";
fieldValue110.value = "Camera Pause";
ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

fieldValue fieldValue111 = createNode("fieldValue");
fieldValue111.name = "duration";
fieldValue111.value = "1";
ProtoInstance109.fieldValue[1] = fieldValue111;

fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "goalPosition";
fieldValue112.value = "-50 1 -10";
ProtoInstance109.fieldValue[2] = fieldValue112;

fieldValue fieldValue113 = createNode("fieldValue");
fieldValue113.name = "goalOrientation";
fieldValue113.value = "0 1 0 0";
ProtoInstance109.fieldValue[3] = fieldValue113;

fieldValue98.children[2] = ProtoInstance109;

ProtoInstance94.fieldValue[3] = fieldValue98;

fieldValue93.children = new MFNode();

fieldValue93.children[0] = ProtoInstance94;

ProtoInstance ProtoInstance114 = createNode("ProtoInstance");
ProtoInstance114.name = "CameraShot";
ProtoInstance114.DEF = "Dolly";
fieldValue fieldValue115 = createNode("fieldValue");
fieldValue115.name = "description";
fieldValue115.value = "Simple shot of Camera Dolly";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

fieldValue fieldValue116 = createNode("fieldValue");
fieldValue116.name = "initialPosition";
fieldValue116.value = "-40 1 -10";
ProtoInstance114.fieldValue[1] = fieldValue116;

fieldValue fieldValue117 = createNode("fieldValue");
fieldValue117.name = "initialOrientation";
fieldValue117.value = "0 1 0 0";
ProtoInstance114.fieldValue[2] = fieldValue117;

fieldValue fieldValue118 = createNode("fieldValue");
fieldValue118.name = "moves";
ProtoInstance ProtoInstance119 = createNode("ProtoInstance");
ProtoInstance119.name = "CameraMovement";
ProtoInstance119.DEF = "DollyMove1";
fieldValue fieldValue120 = createNode("fieldValue");
fieldValue120.name = "description";
fieldValue120.value = "Camera Dolly from Right to Left";
ProtoInstance119.fieldValue = new MFNode();

ProtoInstance119.fieldValue[0] = fieldValue120;

fieldValue fieldValue121 = createNode("fieldValue");
fieldValue121.name = "duration";
fieldValue121.value = "3";
ProtoInstance119.fieldValue[1] = fieldValue121;

fieldValue fieldValue122 = createNode("fieldValue");
fieldValue122.name = "goalPosition";
fieldValue122.value = "-45 1 -10";
ProtoInstance119.fieldValue[2] = fieldValue122;

fieldValue fieldValue123 = createNode("fieldValue");
fieldValue123.name = "goalOrientation";
fieldValue123.value = "0 1 0 0";
ProtoInstance119.fieldValue[3] = fieldValue123;

fieldValue118.children = new MFNode();

fieldValue118.children[0] = ProtoInstance119;

ProtoInstance ProtoInstance124 = createNode("ProtoInstance");
ProtoInstance124.name = "CameraMovement";
fieldValue fieldValue125 = createNode("fieldValue");
fieldValue125.name = "description";
fieldValue125.value = "Camera Dolly from Left to Right";
ProtoInstance124.fieldValue = new MFNode();

ProtoInstance124.fieldValue[0] = fieldValue125;

fieldValue fieldValue126 = createNode("fieldValue");
fieldValue126.name = "duration";
fieldValue126.value = "3";
ProtoInstance124.fieldValue[1] = fieldValue126;

fieldValue fieldValue127 = createNode("fieldValue");
fieldValue127.name = "goalPosition";
fieldValue127.value = "-40 1 -10";
ProtoInstance124.fieldValue[2] = fieldValue127;

fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "goalOrientation";
fieldValue128.value = "0 1 0 0";
ProtoInstance124.fieldValue[3] = fieldValue128;

fieldValue118.children[1] = ProtoInstance124;

ProtoInstance ProtoInstance129 = createNode("ProtoInstance");
ProtoInstance129.name = "CameraMovement";
fieldValue fieldValue130 = createNode("fieldValue");
fieldValue130.name = "description";
fieldValue130.value = "Camera Pause";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

fieldValue fieldValue131 = createNode("fieldValue");
fieldValue131.name = "duration";
fieldValue131.value = "1";
ProtoInstance129.fieldValue[1] = fieldValue131;

fieldValue fieldValue132 = createNode("fieldValue");
fieldValue132.name = "goalPosition";
fieldValue132.value = "-40 1 -10";
ProtoInstance129.fieldValue[2] = fieldValue132;

fieldValue fieldValue133 = createNode("fieldValue");
fieldValue133.name = "goalOrientation";
fieldValue133.value = "0 1 0 0";
ProtoInstance129.fieldValue[3] = fieldValue133;

fieldValue118.children[2] = ProtoInstance129;

ProtoInstance114.fieldValue[3] = fieldValue118;

fieldValue93.children[1] = ProtoInstance114;

ProtoInstance ProtoInstance134 = createNode("ProtoInstance");
ProtoInstance134.name = "CameraShot";
ProtoInstance134.DEF = "Pan";
fieldValue fieldValue135 = createNode("fieldValue");
fieldValue135.name = "description";
fieldValue135.value = "Simple shot of Camera Pan left right and back to center";
ProtoInstance134.fieldValue = new MFNode();

ProtoInstance134.fieldValue[0] = fieldValue135;

fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "initialPosition";
fieldValue136.value = "-30 1 -10";
ProtoInstance134.fieldValue[1] = fieldValue136;

fieldValue fieldValue137 = createNode("fieldValue");
fieldValue137.name = "initialOrientation";
fieldValue137.value = "0 1 0 0";
ProtoInstance134.fieldValue[2] = fieldValue137;

fieldValue fieldValue138 = createNode("fieldValue");
fieldValue138.name = "moves";
ProtoInstance ProtoInstance139 = createNode("ProtoInstance");
ProtoInstance139.name = "CameraMovement";
ProtoInstance139.DEF = "PanLeft";
fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "description";
fieldValue140.value = "Pan Left";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

fieldValue fieldValue141 = createNode("fieldValue");
fieldValue141.name = "duration";
fieldValue141.value = "2";
ProtoInstance139.fieldValue[1] = fieldValue141;

fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "goalPosition";
fieldValue142.value = "-30 1 -10";
ProtoInstance139.fieldValue[2] = fieldValue142;

fieldValue fieldValue143 = createNode("fieldValue");
fieldValue143.name = "goalOrientation";
fieldValue143.value = "0 1 0 0.4";
ProtoInstance139.fieldValue[3] = fieldValue143;

fieldValue138.children = new MFNode();

fieldValue138.children[0] = ProtoInstance139;

ProtoInstance ProtoInstance144 = createNode("ProtoInstance");
ProtoInstance144.name = "CameraMovement";
ProtoInstance144.DEF = "PanRight";
fieldValue fieldValue145 = createNode("fieldValue");
fieldValue145.name = "description";
fieldValue145.value = "Pan Right";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

fieldValue fieldValue146 = createNode("fieldValue");
fieldValue146.name = "duration";
fieldValue146.value = "3";
ProtoInstance144.fieldValue[1] = fieldValue146;

fieldValue fieldValue147 = createNode("fieldValue");
fieldValue147.name = "goalPosition";
fieldValue147.value = "-30 1 -10";
ProtoInstance144.fieldValue[2] = fieldValue147;

fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "goalOrientation";
fieldValue148.value = "0 1 0 -0.4";
ProtoInstance144.fieldValue[3] = fieldValue148;

fieldValue138.children[1] = ProtoInstance144;

ProtoInstance ProtoInstance149 = createNode("ProtoInstance");
ProtoInstance149.name = "CameraMovement";
fieldValue fieldValue150 = createNode("fieldValue");
fieldValue150.name = "description";
fieldValue150.value = "Camera Pan back to Center";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

fieldValue fieldValue151 = createNode("fieldValue");
fieldValue151.name = "duration";
fieldValue151.value = "2";
ProtoInstance149.fieldValue[1] = fieldValue151;

fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "goalPosition";
fieldValue152.value = "-30 1 -10";
ProtoInstance149.fieldValue[2] = fieldValue152;

fieldValue fieldValue153 = createNode("fieldValue");
fieldValue153.name = "goalOrientation";
fieldValue153.value = "0 1 0 0";
ProtoInstance149.fieldValue[3] = fieldValue153;

fieldValue138.children[2] = ProtoInstance149;

ProtoInstance ProtoInstance154 = createNode("ProtoInstance");
ProtoInstance154.name = "CameraMovement";
fieldValue fieldValue155 = createNode("fieldValue");
fieldValue155.name = "description";
fieldValue155.value = "Camera Pause";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "duration";
fieldValue156.value = "2";
ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue fieldValue157 = createNode("fieldValue");
fieldValue157.name = "goalPosition";
fieldValue157.value = "-30 1 -10";
ProtoInstance154.fieldValue[2] = fieldValue157;

fieldValue fieldValue158 = createNode("fieldValue");
fieldValue158.name = "goalOrientation";
fieldValue158.value = "0 1 0 0";
ProtoInstance154.fieldValue[3] = fieldValue158;

fieldValue138.children[3] = ProtoInstance154;

ProtoInstance134.fieldValue[3] = fieldValue138;

fieldValue93.children[2] = ProtoInstance134;

ProtoInstance ProtoInstance159 = createNode("ProtoInstance");
ProtoInstance159.name = "CameraShot";
ProtoInstance159.DEF = "CameraBoom";
fieldValue fieldValue160 = createNode("fieldValue");
fieldValue160.name = "description";
fieldValue160.value = "Camera Boom";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "initialPosition";
fieldValue161.value = "-20 1 -10";
ProtoInstance159.fieldValue[1] = fieldValue161;

fieldValue fieldValue162 = createNode("fieldValue");
fieldValue162.name = "initialOrientation";
fieldValue162.value = "0 1 0 0";
ProtoInstance159.fieldValue[2] = fieldValue162;

fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "moves";
ProtoInstance ProtoInstance164 = createNode("ProtoInstance");
ProtoInstance164.name = "CameraMovement";
ProtoInstance164.DEF = "CameraBoomUp";
fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "description";
fieldValue165.value = "Camera Boom Up";
ProtoInstance164.fieldValue = new MFNode();

ProtoInstance164.fieldValue[0] = fieldValue165;

fieldValue fieldValue166 = createNode("fieldValue");
fieldValue166.name = "duration";
fieldValue166.value = "3";
ProtoInstance164.fieldValue[1] = fieldValue166;

fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "goalPosition";
fieldValue167.value = "-20 5 -10";
ProtoInstance164.fieldValue[2] = fieldValue167;

fieldValue fieldValue168 = createNode("fieldValue");
fieldValue168.name = "goalOrientation";
fieldValue168.value = "0 1 0 0";
ProtoInstance164.fieldValue[3] = fieldValue168;

fieldValue163.children = new MFNode();

fieldValue163.children[0] = ProtoInstance164;

ProtoInstance ProtoInstance169 = createNode("ProtoInstance");
ProtoInstance169.name = "CameraMovement";
ProtoInstance169.DEF = "BoomDown";
fieldValue fieldValue170 = createNode("fieldValue");
fieldValue170.name = "description";
fieldValue170.value = "Camera Boom Down";
ProtoInstance169.fieldValue = new MFNode();

ProtoInstance169.fieldValue[0] = fieldValue170;

fieldValue fieldValue171 = createNode("fieldValue");
fieldValue171.name = "duration";
fieldValue171.value = "3";
ProtoInstance169.fieldValue[1] = fieldValue171;

fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "goalPosition";
fieldValue172.value = "-20 1 -10";
ProtoInstance169.fieldValue[2] = fieldValue172;

fieldValue fieldValue173 = createNode("fieldValue");
fieldValue173.name = "goalOrientation";
fieldValue173.value = "0 1 0 0";
ProtoInstance169.fieldValue[3] = fieldValue173;

fieldValue163.children[1] = ProtoInstance169;

ProtoInstance ProtoInstance174 = createNode("ProtoInstance");
ProtoInstance174.name = "CameraMovement";
ProtoInstance174.DEF = "BoomPause";
fieldValue fieldValue175 = createNode("fieldValue");
fieldValue175.name = "description";
fieldValue175.value = "Camera Pause";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "duration";
fieldValue176.value = "2";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue fieldValue177 = createNode("fieldValue");
fieldValue177.name = "goalPosition";
fieldValue177.value = "-20 1 -10";
ProtoInstance174.fieldValue[2] = fieldValue177;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "goalOrientation";
fieldValue178.value = "0 1 0 0";
ProtoInstance174.fieldValue[3] = fieldValue178;

fieldValue163.children[2] = ProtoInstance174;

ProtoInstance159.fieldValue[3] = fieldValue163;

fieldValue93.children[3] = ProtoInstance159;

ProtoInstance ProtoInstance179 = createNode("ProtoInstance");
ProtoInstance179.name = "CameraShot";
ProtoInstance179.DEF = "CameraTilt";
fieldValue fieldValue180 = createNode("fieldValue");
fieldValue180.name = "description";
fieldValue180.value = "Camera Tilt";
ProtoInstance179.fieldValue = new MFNode();

ProtoInstance179.fieldValue[0] = fieldValue180;

fieldValue fieldValue181 = createNode("fieldValue");
fieldValue181.name = "initialPosition";
fieldValue181.value = "-10 1 -10";
ProtoInstance179.fieldValue[1] = fieldValue181;

fieldValue fieldValue182 = createNode("fieldValue");
fieldValue182.name = "initialOrientation";
fieldValue182.value = "0 0 1 0";
ProtoInstance179.fieldValue[2] = fieldValue182;

fieldValue fieldValue183 = createNode("fieldValue");
fieldValue183.name = "traceEnabled";
fieldValue183.value = "true";
ProtoInstance179.fieldValue[3] = fieldValue183;

fieldValue fieldValue184 = createNode("fieldValue");
fieldValue184.name = "moves";
ProtoInstance ProtoInstance185 = createNode("ProtoInstance");
ProtoInstance185.name = "CameraMovement";
fieldValue fieldValue186 = createNode("fieldValue");
fieldValue186.name = "description";
fieldValue186.value = "Camera Tilt Pause";
ProtoInstance185.fieldValue = new MFNode();

ProtoInstance185.fieldValue[0] = fieldValue186;

fieldValue fieldValue187 = createNode("fieldValue");
fieldValue187.name = "duration";
fieldValue187.value = "1";
ProtoInstance185.fieldValue[1] = fieldValue187;

fieldValue fieldValue188 = createNode("fieldValue");
fieldValue188.name = "goalPosition";
fieldValue188.value = "-10 1 -10";
ProtoInstance185.fieldValue[2] = fieldValue188;

fieldValue fieldValue189 = createNode("fieldValue");
fieldValue189.name = "goalOrientation";
fieldValue189.value = "0 0 1 0";
ProtoInstance185.fieldValue[3] = fieldValue189;

fieldValue184.children = new MFNode();

fieldValue184.children[0] = ProtoInstance185;

ProtoInstance ProtoInstance190 = createNode("ProtoInstance");
ProtoInstance190.name = "CameraMovement";
ProtoInstance190.DEF = "TiltDown";
fieldValue fieldValue191 = createNode("fieldValue");
fieldValue191.name = "description";
fieldValue191.value = "Camera Tilt Left";
ProtoInstance190.fieldValue = new MFNode();

ProtoInstance190.fieldValue[0] = fieldValue191;

fieldValue fieldValue192 = createNode("fieldValue");
fieldValue192.name = "duration";
fieldValue192.value = "3";
ProtoInstance190.fieldValue[1] = fieldValue192;

fieldValue fieldValue193 = createNode("fieldValue");
fieldValue193.name = "goalPosition";
fieldValue193.value = "-10 1 -10";
ProtoInstance190.fieldValue[2] = fieldValue193;

fieldValue fieldValue194 = createNode("fieldValue");
fieldValue194.name = "goalOrientation";
fieldValue194.value = "0 0 1 0.785";
ProtoInstance190.fieldValue[3] = fieldValue194;

fieldValue184.children[1] = ProtoInstance190;

ProtoInstance ProtoInstance195 = createNode("ProtoInstance");
ProtoInstance195.name = "CameraMovement";
ProtoInstance195.DEF = "TiltPause";
fieldValue fieldValue196 = createNode("fieldValue");
fieldValue196.name = "description";
fieldValue196.value = "Camera Tilt Pause";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

fieldValue fieldValue197 = createNode("fieldValue");
fieldValue197.name = "duration";
fieldValue197.value = "1";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue fieldValue198 = createNode("fieldValue");
fieldValue198.name = "goalPosition";
fieldValue198.value = "-10 1 -10";
ProtoInstance195.fieldValue[2] = fieldValue198;

fieldValue fieldValue199 = createNode("fieldValue");
fieldValue199.name = "goalOrientation";
fieldValue199.value = "0 0 1 0.785";
ProtoInstance195.fieldValue[3] = fieldValue199;

fieldValue184.children[2] = ProtoInstance195;

ProtoInstance ProtoInstance200 = createNode("ProtoInstance");
ProtoInstance200.name = "CameraMovement";
fieldValue fieldValue201 = createNode("fieldValue");
fieldValue201.name = "description";
fieldValue201.value = "Camera Tilt Right";
ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

fieldValue fieldValue202 = createNode("fieldValue");
fieldValue202.name = "duration";
fieldValue202.value = "3";
ProtoInstance200.fieldValue[1] = fieldValue202;

fieldValue fieldValue203 = createNode("fieldValue");
fieldValue203.name = "goalPosition";
fieldValue203.value = "-10 1 -10";
ProtoInstance200.fieldValue[2] = fieldValue203;

fieldValue fieldValue204 = createNode("fieldValue");
fieldValue204.name = "goalOrientation";
fieldValue204.value = "0 0 1 -0.785";
ProtoInstance200.fieldValue[3] = fieldValue204;

fieldValue184.children[3] = ProtoInstance200;

ProtoInstance ProtoInstance205 = createNode("ProtoInstance");
ProtoInstance205.name = "CameraMovement";
fieldValue fieldValue206 = createNode("fieldValue");
fieldValue206.name = "description";
fieldValue206.value = "Camera Tilt Pause";
ProtoInstance205.fieldValue = new MFNode();

ProtoInstance205.fieldValue[0] = fieldValue206;

fieldValue fieldValue207 = createNode("fieldValue");
fieldValue207.name = "duration";
fieldValue207.value = "1";
ProtoInstance205.fieldValue[1] = fieldValue207;

fieldValue fieldValue208 = createNode("fieldValue");
fieldValue208.name = "goalPosition";
fieldValue208.value = "-10 1 -10";
ProtoInstance205.fieldValue[2] = fieldValue208;

fieldValue fieldValue209 = createNode("fieldValue");
fieldValue209.name = "goalOrientation";
fieldValue209.value = "0 0 1 -0.785";
ProtoInstance205.fieldValue[3] = fieldValue209;

fieldValue184.children[4] = ProtoInstance205;

ProtoInstance ProtoInstance210 = createNode("ProtoInstance");
ProtoInstance210.name = "CameraMovement";
ProtoInstance210.DEF = "TiltReset";
fieldValue fieldValue211 = createNode("fieldValue");
fieldValue211.name = "description";
fieldValue211.value = "Camera Tilt Reset";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

fieldValue fieldValue212 = createNode("fieldValue");
fieldValue212.name = "duration";
fieldValue212.value = "1";
ProtoInstance210.fieldValue[1] = fieldValue212;

fieldValue fieldValue213 = createNode("fieldValue");
fieldValue213.name = "goalPosition";
fieldValue213.value = "-10 1 -10";
ProtoInstance210.fieldValue[2] = fieldValue213;

fieldValue fieldValue214 = createNode("fieldValue");
fieldValue214.name = "goalOrientation";
fieldValue214.value = "0 0 1 0";
ProtoInstance210.fieldValue[3] = fieldValue214;

fieldValue184.children[5] = ProtoInstance210;

ProtoInstance ProtoInstance215 = createNode("ProtoInstance");
ProtoInstance215.name = "CameraMovement";
ProtoInstance215.DEF = "TiltUp";
fieldValue fieldValue216 = createNode("fieldValue");
fieldValue216.name = "description";
fieldValue216.value = "Return to home";
ProtoInstance215.fieldValue = new MFNode();

ProtoInstance215.fieldValue[0] = fieldValue216;

fieldValue fieldValue217 = createNode("fieldValue");
fieldValue217.name = "duration";
fieldValue217.value = "2";
ProtoInstance215.fieldValue[1] = fieldValue217;

fieldValue fieldValue218 = createNode("fieldValue");
fieldValue218.name = "goalPosition";
fieldValue218.value = "0 2 12";
ProtoInstance215.fieldValue[2] = fieldValue218;

fieldValue fieldValue219 = createNode("fieldValue");
fieldValue219.name = "goalOrientation";
fieldValue219.value = "0 0 1 0";
ProtoInstance215.fieldValue[3] = fieldValue219;

fieldValue184.children[6] = ProtoInstance215;

ProtoInstance179.fieldValue[4] = fieldValue184;

fieldValue93.children[4] = ProtoInstance179;

ProtoInstance89.fieldValue[3] = fieldValue93;

children[9] = ProtoInstance89;

Group Group220 = createNode("Group");
Group220.DEF = "AnimationGroup.SimpleShots";
TimeSensor TimeSensor221 = createNode("TimeSensor");
TimeSensor221.DEF = "CameraTimer.SimpleShots";
Group220.children = new MFNode();

Group220.children[0] = TimeSensor221;

//initialize clock to match totalDuration of combined Shot Moves
ROUTE ROUTE222 = createNode("ROUTE");
ROUTE222.fromField = "totalDuration";
ROUTE222.fromNode = "Camera.SimpleShotsTest";
ROUTE222.toField = "cycleInterval";
ROUTE222.toNode = "CameraTimer.SimpleShots";
Group220.children[1] = ROUTE222;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
ROUTE ROUTE223 = createNode("ROUTE");
ROUTE223.fromField = "fraction_changed";
ROUTE223.fromNode = "CameraTimer.SimpleShots";
ROUTE223.toField = "set_fraction";
ROUTE223.toNode = "Camera.SimpleShotsTest";
Group220.children[2] = ROUTE223;

Transform Transform224 = createNode("Transform");
Transform224.DEF = "Trigger.SimpleShots";
Transform224.translation = new SFVec3f(new float[-4,4,0]);
BooleanFilter BooleanFilter225 = createNode("BooleanFilter");
BooleanFilter225.DEF = "TextTouchActive.SimpleShotsFilter";
Transform224.children = new MFNode();

Transform224.children[0] = BooleanFilter225;

TouchSensor TouchSensor226 = createNode("TouchSensor");
TouchSensor226.DEF = "TextTouch.SimpleShots";
TouchSensor226.description = "touch to animate Camera SimpleShotsTest";
Transform224.children[1] = TouchSensor226;

ROUTE ROUTE227 = createNode("ROUTE");
ROUTE227.fromField = "inputTrue";
ROUTE227.fromNode = "TextTouchActive.SimpleShotsFilter";
ROUTE227.toField = "set_bind";
ROUTE227.toNode = "Camera.SimpleShotsTest";
Transform224.children[2] = ROUTE227;

ROUTE ROUTE228 = createNode("ROUTE");
ROUTE228.fromField = "isActive";
ROUTE228.fromNode = "TextTouch.SimpleShots";
ROUTE228.toField = "set_boolean";
ROUTE228.toNode = "TextTouchActive.SimpleShotsFilter";
Transform224.children[3] = ROUTE228;

ROUTE ROUTE229 = createNode("ROUTE");
ROUTE229.fromField = "touchTime";
ROUTE229.fromNode = "TextTouch.SimpleShots";
ROUTE229.toField = "startTime";
ROUTE229.toNode = "CameraTimer.SimpleShots";
Transform224.children[4] = ROUTE229;

Shape Shape230 = createNode("Shape");
Text Text231 = createNode("Text");
Text231.string = new MFString(new java.lang.String["Click to animate","SimpleShotsTest"]);
FontStyle FontStyle232 = createNode("FontStyle");
FontStyle232.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text231.fontStyle = FontStyle232;

Shape230.geometry = Text231;

Appearance Appearance233 = createNode("Appearance");
Material Material234 = createNode("Material");
Material234.DEF = "ArtDeco5";
Material234.ambientIntensity = 0.24;
Material234.diffuseColor = new SFColor(new float[0.945455,0.318988,0.321717]);
Material234.shininess = 0.01;
Material234.specularColor = new SFColor(new float[0.072727,0.021705,0.010732]);
//Universal Media Library: ArtDeco 5
Appearance233.material = Material234;

Shape230.appearance = Appearance233;

Transform224.children[5] = Shape230;

//Simplify intersection test for user selecting text
Shape Shape235 = createNode("Shape");
Shape235.DEF = "TransparentBox";
Appearance Appearance236 = createNode("Appearance");
Material Material237 = createNode("Material");
Material237.transparency = 1;
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

Box Box238 = createNode("Box");
Box238.size = new SFVec3f(new float[6,2,0.0001]);
Shape235.geometry = Box238;

Transform224.children[6] = Shape235;

Group220.children[3] = Transform224;

children[10] = Group220;

Group Group239 = createNode("Group");
Group239.DEF = "SimpleShotsTargets";
Transform Transform240 = createNode("Transform");
Transform240.DEF = "TargetBoxZoom";
Transform240.translation = new SFVec3f(new float[-50,1,-20]);
Shape Shape241 = createNode("Shape");
Box Box242 = createNode("Box");
Shape241.geometry = Box242;

Appearance Appearance243 = createNode("Appearance");
Material Material244 = createNode("Material");
Appearance243.material = Material244;

ImageTexture ImageTexture245 = createNode("ImageTexture");
ImageTexture245.url = new MFString(new java.lang.String["images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"]);
Appearance243.texture = ImageTexture245;

Shape241.appearance = Appearance243;

Transform240.children = new MFNode();

Transform240.children[0] = Shape241;

Transform Transform246 = createNode("Transform");
Transform246.translation = new SFVec3f(new float[0,2,0]);
Shape Shape247 = createNode("Shape");
Text Text248 = createNode("Text");
Text248.string = new MFString(new java.lang.String["Zoom in, out"]);
FontStyle FontStyle249 = createNode("FontStyle");
FontStyle249.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text248.fontStyle = FontStyle249;

Shape247.geometry = Text248;

Appearance Appearance250 = createNode("Appearance");
Material Material251 = createNode("Material");
Appearance250.material = Material251;

Shape247.appearance = Appearance250;

Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

Transform240.children[1] = Transform246;

Group239.children = new MFNode();

Group239.children[0] = Transform240;

Transform Transform252 = createNode("Transform");
Transform252.DEF = "TargetBoxDolly";
Transform252.translation = new SFVec3f(new float[-40,1,-20]);
Shape Shape253 = createNode("Shape");
Box Box254 = createNode("Box");
Shape253.geometry = Box254;

Appearance Appearance255 = createNode("Appearance");
Material Material256 = createNode("Material");
Appearance255.material = Material256;

ImageTexture ImageTexture257 = createNode("ImageTexture");
ImageTexture257.url = new MFString(new java.lang.String["images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"]);
Appearance255.texture = ImageTexture257;

Shape253.appearance = Appearance255;

Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

Transform Transform258 = createNode("Transform");
Transform258.translation = new SFVec3f(new float[0,2,0]);
Shape Shape259 = createNode("Shape");
Text Text260 = createNode("Text");
Text260.string = new MFString(new java.lang.String["Dolly left, right"]);
FontStyle FontStyle261 = createNode("FontStyle");
FontStyle261.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text260.fontStyle = FontStyle261;

Shape259.geometry = Text260;

Appearance Appearance262 = createNode("Appearance");
Material Material263 = createNode("Material");
Appearance262.material = Material263;

Shape259.appearance = Appearance262;

Transform258.children = new MFNode();

Transform258.children[0] = Shape259;

Transform252.children[1] = Transform258;

Group239.children[1] = Transform252;

Transform Transform264 = createNode("Transform");
Transform264.DEF = "TargetBoxPan";
Transform264.translation = new SFVec3f(new float[-30,1,-20]);
Shape Shape265 = createNode("Shape");
Box Box266 = createNode("Box");
Shape265.geometry = Box266;

Appearance Appearance267 = createNode("Appearance");
Material Material268 = createNode("Material");
Appearance267.material = Material268;

ImageTexture ImageTexture269 = createNode("ImageTexture");
ImageTexture269.url = new MFString(new java.lang.String["images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"]);
Appearance267.texture = ImageTexture269;

Shape265.appearance = Appearance267;

Transform264.children = new MFNode();

Transform264.children[0] = Shape265;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[0,2,0]);
Shape Shape271 = createNode("Shape");
Text Text272 = createNode("Text");
Text272.string = new MFString(new java.lang.String["Pan left, right"]);
FontStyle FontStyle273 = createNode("FontStyle");
FontStyle273.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text272.fontStyle = FontStyle273;

Shape271.geometry = Text272;

Appearance Appearance274 = createNode("Appearance");
Material Material275 = createNode("Material");
Appearance274.material = Material275;

Shape271.appearance = Appearance274;

Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

Transform264.children[1] = Transform270;

Group239.children[2] = Transform264;

Transform Transform276 = createNode("Transform");
Transform276.DEF = "TargetBoxBoom";
Transform276.translation = new SFVec3f(new float[-20,1,-20]);
Shape Shape277 = createNode("Shape");
Box Box278 = createNode("Box");
Shape277.geometry = Box278;

Appearance Appearance279 = createNode("Appearance");
Material Material280 = createNode("Material");
Appearance279.material = Material280;

ImageTexture ImageTexture281 = createNode("ImageTexture");
ImageTexture281.url = new MFString(new java.lang.String["images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"]);
Appearance279.texture = ImageTexture281;

Shape277.appearance = Appearance279;

Transform276.children = new MFNode();

Transform276.children[0] = Shape277;

Transform Transform282 = createNode("Transform");
Transform282.translation = new SFVec3f(new float[0,2,0]);
Shape Shape283 = createNode("Shape");
Text Text284 = createNode("Text");
Text284.string = new MFString(new java.lang.String["Boom up, down"]);
FontStyle FontStyle285 = createNode("FontStyle");
FontStyle285.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text284.fontStyle = FontStyle285;

Shape283.geometry = Text284;

Appearance Appearance286 = createNode("Appearance");
Material Material287 = createNode("Material");
Appearance286.material = Material287;

Shape283.appearance = Appearance286;

Transform282.children = new MFNode();

Transform282.children[0] = Shape283;

Transform276.children[1] = Transform282;

Group239.children[3] = Transform276;

Transform Transform288 = createNode("Transform");
Transform288.DEF = "TargetBoxTilt";
Transform288.translation = new SFVec3f(new float[-10,1,-20]);
Shape Shape289 = createNode("Shape");
Box Box290 = createNode("Box");
Shape289.geometry = Box290;

Appearance Appearance291 = createNode("Appearance");
Material Material292 = createNode("Material");
Appearance291.material = Material292;

ImageTexture ImageTexture293 = createNode("ImageTexture");
ImageTexture293.url = new MFString(new java.lang.String["images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"]);
Appearance291.texture = ImageTexture293;

Shape289.appearance = Appearance291;

Transform288.children = new MFNode();

Transform288.children[0] = Shape289;

Transform Transform294 = createNode("Transform");
Transform294.translation = new SFVec3f(new float[0,2,0]);
Shape Shape295 = createNode("Shape");
Text Text296 = createNode("Text");
Text296.string = new MFString(new java.lang.String["Tilt left, right"]);
FontStyle FontStyle297 = createNode("FontStyle");
FontStyle297.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text296.fontStyle = FontStyle297;

Shape295.geometry = Text296;

Appearance Appearance298 = createNode("Appearance");
Material Material299 = createNode("Material");
Appearance298.material = Material299;

Shape295.appearance = Appearance298;

Transform294.children = new MFNode();

Transform294.children[0] = Shape295;

Transform288.children[1] = Transform294;

Group239.children[4] = Transform288;

children[11] = Group239;

//=============== Camera.AimPointTest ==============
ProtoInstance ProtoInstance300 = createNode("ProtoInstance");
ProtoInstance300.name = "Camera";
ProtoInstance300.DEF = "Camera.AimPointTest";
fieldValue fieldValue301 = createNode("fieldValue");
fieldValue301.name = "description";
fieldValue301.value = "AimPointTest for moving camera tracking moving target";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

fieldValue fieldValue302 = createNode("fieldValue");
fieldValue302.name = "position";
fieldValue302.value = "4 4 10";
ProtoInstance300.fieldValue[1] = fieldValue302;

fieldValue fieldValue303 = createNode("fieldValue");
fieldValue303.name = "shots";
ProtoInstance ProtoInstance304 = createNode("ProtoInstance");
ProtoInstance304.name = "CameraShot";
ProtoInstance304.DEF = "Shot5";
fieldValue fieldValue305 = createNode("fieldValue");
fieldValue305.name = "description";
fieldValue305.value = "#3 Tracking shot";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

fieldValue fieldValue306 = createNode("fieldValue");
fieldValue306.name = "initialPosition";
fieldValue306.value = "6 6 10";
ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue fieldValue307 = createNode("fieldValue");
fieldValue307.name = "initialOrientation";
fieldValue307.value = "0 1 0 0";
ProtoInstance304.fieldValue[2] = fieldValue307;

fieldValue fieldValue308 = createNode("fieldValue");
fieldValue308.name = "moves";
ProtoInstance ProtoInstance309 = createNode("ProtoInstance");
ProtoInstance309.name = "CameraMovement";
ProtoInstance309.DEF = "MoveAimPoint3.1";
fieldValue fieldValue310 = createNode("fieldValue");
fieldValue310.name = "description";
fieldValue310.value = "AimPoint 3.1 moving BoxPath";
ProtoInstance309.fieldValue = new MFNode();

ProtoInstance309.fieldValue[0] = fieldValue310;

fieldValue fieldValue311 = createNode("fieldValue");
fieldValue311.name = "tracking";
fieldValue311.value = "true";
ProtoInstance309.fieldValue[1] = fieldValue311;

fieldValue fieldValue312 = createNode("fieldValue");
fieldValue312.name = "duration";
fieldValue312.value = "8";
ProtoInstance309.fieldValue[2] = fieldValue312;

fieldValue fieldValue313 = createNode("fieldValue");
fieldValue313.name = "goalPosition";
fieldValue313.value = "6 6 10";
ProtoInstance309.fieldValue[3] = fieldValue313;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308.children = new MFNode();

fieldValue308.children[0] = ProtoInstance309;

ProtoInstance ProtoInstance314 = createNode("ProtoInstance");
ProtoInstance314.name = "CameraMovement";
ProtoInstance314.DEF = "MoveAimPoint3.2";
fieldValue fieldValue315 = createNode("fieldValue");
fieldValue315.name = "description";
fieldValue315.value = "AimPoint 3.2 pan right while tracking";
ProtoInstance314.fieldValue = new MFNode();

ProtoInstance314.fieldValue[0] = fieldValue315;

fieldValue fieldValue316 = createNode("fieldValue");
fieldValue316.name = "tracking";
fieldValue316.value = "true";
ProtoInstance314.fieldValue[1] = fieldValue316;

fieldValue fieldValue317 = createNode("fieldValue");
fieldValue317.name = "duration";
fieldValue317.value = "8";
ProtoInstance314.fieldValue[2] = fieldValue317;

fieldValue fieldValue318 = createNode("fieldValue");
fieldValue318.name = "goalPosition";
fieldValue318.value = "40 6 12";
ProtoInstance314.fieldValue[3] = fieldValue318;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308.children[1] = ProtoInstance314;

ProtoInstance ProtoInstance319 = createNode("ProtoInstance");
ProtoInstance319.name = "CameraMovement";
ProtoInstance319.DEF = "MoveAimPoint3.3";
fieldValue fieldValue320 = createNode("fieldValue");
fieldValue320.name = "description";
fieldValue320.value = "AimPoint 3.3 boom up while tracking";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

fieldValue fieldValue321 = createNode("fieldValue");
fieldValue321.name = "tracking";
fieldValue321.value = "true";
ProtoInstance319.fieldValue[1] = fieldValue321;

fieldValue fieldValue322 = createNode("fieldValue");
fieldValue322.name = "duration";
fieldValue322.value = "3";
ProtoInstance319.fieldValue[2] = fieldValue322;

fieldValue fieldValue323 = createNode("fieldValue");
fieldValue323.name = "goalPosition";
fieldValue323.value = "40 20 13";
ProtoInstance319.fieldValue[3] = fieldValue323;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308.children[2] = ProtoInstance319;

ProtoInstance ProtoInstance324 = createNode("ProtoInstance");
ProtoInstance324.name = "CameraMovement";
ProtoInstance324.DEF = "MoveAimPoint3.4";
fieldValue fieldValue325 = createNode("fieldValue");
fieldValue325.name = "description";
fieldValue325.value = "AimPoint 3.4 restore camera back to home";
ProtoInstance324.fieldValue = new MFNode();

ProtoInstance324.fieldValue[0] = fieldValue325;

fieldValue fieldValue326 = createNode("fieldValue");
fieldValue326.name = "tracking";
fieldValue326.value = "true";
ProtoInstance324.fieldValue[1] = fieldValue326;

fieldValue fieldValue327 = createNode("fieldValue");
fieldValue327.name = "duration";
fieldValue327.value = "5";
ProtoInstance324.fieldValue[2] = fieldValue327;

fieldValue fieldValue328 = createNode("fieldValue");
fieldValue328.name = "goalPosition";
fieldValue328.value = "4 4 10";
ProtoInstance324.fieldValue[3] = fieldValue328;

fieldValue fieldValue329 = createNode("fieldValue");
fieldValue329.name = "goalAimPoint";
fieldValue329.value = "4 4 0";
ProtoInstance324.fieldValue[4] = fieldValue329;

fieldValue fieldValue330 = createNode("fieldValue");
fieldValue330.name = "goalOrientation";
fieldValue330.value = "0 1 0 0";
ProtoInstance324.fieldValue[5] = fieldValue330;

//can test tracking or not using these values
fieldValue308.children[3] = ProtoInstance324;

ProtoInstance304.fieldValue[3] = fieldValue308;

fieldValue303.children = new MFNode();

fieldValue303.children[0] = ProtoInstance304;

ProtoInstance300.fieldValue[2] = fieldValue303;

children[12] = ProtoInstance300;

Group Group331 = createNode("Group");
Group331.DEF = "AnimationGroup.AimPointTest";
TimeSensor TimeSensor332 = createNode("TimeSensor");
TimeSensor332.DEF = "CameraTimer.AimPointTest";
Group331.children = new MFNode();

Group331.children[0] = TimeSensor332;

//initialize clock to match totalDuration of combined Shot Moves
ROUTE ROUTE333 = createNode("ROUTE");
ROUTE333.fromField = "totalDuration";
ROUTE333.fromNode = "Camera.AimPointTest";
ROUTE333.toField = "cycleInterval";
ROUTE333.toNode = "CameraTimer.AimPointTest";
Group331.children[1] = ROUTE333;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
ROUTE ROUTE334 = createNode("ROUTE");
ROUTE334.fromField = "fraction_changed";
ROUTE334.fromNode = "CameraTimer.AimPointTest";
ROUTE334.toField = "set_fraction";
ROUTE334.toNode = "Camera.AimPointTest";
Group331.children[2] = ROUTE334;

Transform Transform335 = createNode("Transform");
Transform335.DEF = "Trigger.AimPointTest";
Transform335.translation = new SFVec3f(new float[4,4,0]);
BooleanFilter BooleanFilter336 = createNode("BooleanFilter");
BooleanFilter336.DEF = "TextTouchActive.AimPointFilter";
Transform335.children = new MFNode();

Transform335.children[0] = BooleanFilter336;

TouchSensor TouchSensor337 = createNode("TouchSensor");
TouchSensor337.DEF = "TextTouch.AimPointTest";
TouchSensor337.description = "touch to animate Camera AimPointTest";
Transform335.children[1] = TouchSensor337;

ROUTE ROUTE338 = createNode("ROUTE");
ROUTE338.fromField = "inputTrue";
ROUTE338.fromNode = "TextTouchActive.AimPointFilter";
ROUTE338.toField = "set_bind";
ROUTE338.toNode = "Camera.AimPointTest";
Transform335.children[2] = ROUTE338;

ROUTE ROUTE339 = createNode("ROUTE");
ROUTE339.fromField = "isActive";
ROUTE339.fromNode = "TextTouch.AimPointTest";
ROUTE339.toField = "set_boolean";
ROUTE339.toNode = "TextTouchActive.AimPointFilter";
Transform335.children[3] = ROUTE339;

ROUTE ROUTE340 = createNode("ROUTE");
ROUTE340.fromField = "touchTime";
ROUTE340.fromNode = "TextTouch.AimPointTest";
ROUTE340.toField = "startTime";
ROUTE340.toNode = "CameraTimer.AimPointTest";
Transform335.children[4] = ROUTE340;

Shape Shape341 = createNode("Shape");
Text Text342 = createNode("Text");
Text342.string = new MFString(new java.lang.String["Click to animate","AimPointTest"]);
FontStyle FontStyle343 = createNode("FontStyle");
FontStyle343.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text342.fontStyle = FontStyle343;

Shape341.geometry = Text342;

Appearance Appearance344 = createNode("Appearance");
Material Material345 = createNode("Material");
Material345.USE = "ArtDeco5";
Appearance344.material = Material345;

Shape341.appearance = Appearance344;

Transform335.children[5] = Shape341;

Shape Shape346 = createNode("Shape");
Shape346.USE = "TransparentBox";
Transform335.children[6] = Shape346;

Group331.children[3] = Transform335;

children[13] = Group331;

//TODO build a test once implemented
ProtoInstance ProtoInstance347 = createNode("ProtoInstance");
ProtoInstance347.name = "OfflineRender";
children[14] = ProtoInstance347;

//=============== animate a camera shape to visualize view changes ==============
Transform Transform348 = createNode("Transform");
Transform348.DEF = "CameraShapeTransform";
Transform348.translation = new SFVec3f(new float[0,0.5,0]);
//move CameraShape using active Camera
ROUTE ROUTE349 = createNode("ROUTE");
ROUTE349.fromField = "position_changed";
ROUTE349.fromNode = "Camera.SimpleShotsTest";
ROUTE349.toField = "translation";
ROUTE349.toNode = "CameraShapeTransform";
Transform348.children = new MFNode();

Transform348.children[0] = ROUTE349;

ROUTE ROUTE350 = createNode("ROUTE");
ROUTE350.fromField = "orientation_changed";
ROUTE350.fromNode = "Camera.SimpleShotsTest";
ROUTE350.toField = "rotation";
ROUTE350.toNode = "CameraShapeTransform";
Transform348.children[1] = ROUTE350;

ROUTE ROUTE351 = createNode("ROUTE");
ROUTE351.fromField = "position";
ROUTE351.fromNode = "Camera.AimPointTest";
ROUTE351.toField = "translation";
ROUTE351.toNode = "CameraShapeTransform";
Transform348.children[2] = ROUTE351;

ROUTE ROUTE352 = createNode("ROUTE");
ROUTE352.fromField = "orientation_changed";
ROUTE352.fromNode = "Camera.AimPointTest";
ROUTE352.toField = "rotation";
ROUTE352.toNode = "CameraShapeTransform";
Transform348.children[3] = ROUTE352;

Transform Transform353 = createNode("Transform");
Transform353.DEF = "CameraOffsetTransform";
Transform353.translation = new SFVec3f(new float[0,0,0.25]);
TouchSensor TouchSensor354 = createNode("TouchSensor");
TouchSensor354.DEF = "CameraShapeTouched";
Transform353.children = new MFNode();

Transform353.children[0] = TouchSensor354;

Inline Inline355 = createNode("Inline");
Inline355.DEF = "CameraShape";
Inline355.url = new MFString(new java.lang.String["CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"]);
Transform353.children[1] = Inline355;

Shape Shape356 = createNode("Shape");
Shape356.DEF = "SightLine";
IndexedLineSet IndexedLineSet357 = createNode("IndexedLineSet");
IndexedLineSet357.coordIndex = new MFInt32(new int[0,1]);
Coordinate Coordinate358 = createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[0,0,0,0,0,-100]);
IndexedLineSet357.coord = Coordinate358;

Shape356.geometry = IndexedLineSet357;

Appearance Appearance359 = createNode("Appearance");
Material Material360 = createNode("Material");
Material360.emissiveColor = new SFColor(new float[0.8,0.8,0.4]);
Appearance359.material = Material360;

Shape356.appearance = Appearance359;

Transform353.children[2] = Shape356;

Transform348.children[4] = Transform353;

//Display frustum to show camera view within the scene, toggled by user selecting CameraShape
ExternProtoDeclare ExternProtoDeclare361 = createNode("ExternProtoDeclare");
ExternProtoDeclare361.name = "ViewFrustum";
ExternProtoDeclare361.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare361.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"]);
field field362 = createNode("field");
field362.name = "ViewpointNode";
field362.accessType = "initializeOnly";
field362.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field362.type = "SFNode";
ExternProtoDeclare361.field = new MFNode();

ExternProtoDeclare361.field[0] = field362;

field field363 = createNode("field");
field363.name = "NavigationInfoNode";
field363.accessType = "initializeOnly";
field363.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field363.type = "SFNode";
ExternProtoDeclare361.field[1] = field363;

field field364 = createNode("field");
field364.name = "visible";
field364.accessType = "inputOutput";
field364.appinfo = "whether or not frustum geometry is rendered";
field364.type = "SFBool";
ExternProtoDeclare361.field[2] = field364;

field field365 = createNode("field");
field365.name = "lineColor";
field365.accessType = "inputOutput";
field365.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field365.type = "SFColor";
ExternProtoDeclare361.field[3] = field365;

field field366 = createNode("field");
field366.name = "frustumColor";
field366.accessType = "inputOutput";
field366.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field366.type = "SFColor";
ExternProtoDeclare361.field[4] = field366;

field field367 = createNode("field");
field367.name = "transparency";
field367.accessType = "inputOutput";
field367.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field367.type = "SFFloat";
ExternProtoDeclare361.field[5] = field367;

field field368 = createNode("field");
field368.name = "aspectRatio";
field368.accessType = "inputOutput";
field368.appinfo = "assumed ratio height/width, default value 0.75";
field368.type = "SFFloat";
ExternProtoDeclare361.field[6] = field368;

field field369 = createNode("field");
field369.name = "trace";
field369.accessType = "initializeOnly";
field369.appinfo = "debug support, default false";
field369.type = "SFBool";
ExternProtoDeclare361.field[7] = field369;

Transform348.children[5] = ExternProtoDeclare361;

ProtoInstance ProtoInstance370 = createNode("ProtoInstance");
ProtoInstance370.name = "ViewFrustum";
ProtoInstance370.DEF = "ViewFrustumNode";
fieldValue fieldValue371 = createNode("fieldValue");
fieldValue371.name = "ViewpointNode";
Viewpoint Viewpoint372 = createNode("Viewpoint");
Viewpoint372.DEF = "FrustumViewpoint";
Viewpoint372.description = "viewpoint for ViewFrustum";
Viewpoint372.position = new SFVec3f(new float[0,0,0]);
fieldValue371.children = new MFNode();

fieldValue371.children[0] = Viewpoint372;

ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

fieldValue fieldValue373 = createNode("fieldValue");
fieldValue373.name = "NavigationInfoNode";
NavigationInfo NavigationInfo374 = createNode("NavigationInfo");
NavigationInfo374.DEF = "TestNavigationInfo";
NavigationInfo374.transitionType = new MFString(new java.lang.String["ANIMATE"]);
NavigationInfo374.visibilityLimit = 100;
fieldValue373.children = new MFNode();

fieldValue373.children[0] = NavigationInfo374;

ProtoInstance370.fieldValue[1] = fieldValue373;

fieldValue fieldValue375 = createNode("fieldValue");
fieldValue375.name = "visible";
fieldValue375.value = "false";
ProtoInstance370.fieldValue[2] = fieldValue375;

fieldValue fieldValue376 = createNode("fieldValue");
fieldValue376.name = "lineColor";
fieldValue376.value = "0.9 0.9 0.9";
ProtoInstance370.fieldValue[3] = fieldValue376;

fieldValue fieldValue377 = createNode("fieldValue");
fieldValue377.name = "frustumColor";
fieldValue377.value = "0.8 0.8 0.8";
ProtoInstance370.fieldValue[4] = fieldValue377;

fieldValue fieldValue378 = createNode("fieldValue");
fieldValue378.name = "transparency";
fieldValue378.value = "0.95";
ProtoInstance370.fieldValue[5] = fieldValue378;

Transform348.children[6] = ProtoInstance370;

BooleanToggle BooleanToggle379 = createNode("BooleanToggle");
BooleanToggle379.DEF = "ViewFrustumToggle";
Transform348.children[7] = BooleanToggle379;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromField = "isActive";
ROUTE380.fromNode = "CameraShapeTouched";
ROUTE380.toField = "set_boolean";
ROUTE380.toNode = "ViewFrustumToggle";
Transform348.children[8] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromField = "toggle";
ROUTE381.fromNode = "ViewFrustumToggle";
ROUTE381.toField = "set_visible";
ROUTE381.toNode = "ViewFrustumNode";
Transform348.children[9] = ROUTE381;

children[15] = Transform348;

//=============== add checkerboard, axes and other things to look at while animating ==============
Background Background382 = createNode("Background");
Background382.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
children[16] = Background382;

Transform Transform383 = createNode("Transform");
Transform383.rotation = new SFRotation(new float[1,0,0,-1.57079]);
Transform383.scale = new SFVec3f(new float[10,10,10]);
Shape Shape384 = createNode("Shape");
Appearance Appearance385 = createNode("Appearance");
Material Material386 = createNode("Material");
Material386.ambientIntensity = 0.01;
Material386.diffuseColor = new SFColor(new float[1,1,1]);
Material386.shininess = 0.05;
Appearance385.material = Material386;

Shape384.appearance = Appearance385;

IndexedFaceSet IndexedFaceSet387 = createNode("IndexedFaceSet");
IndexedFaceSet387.colorIndex = new MFInt32(new int[0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0]);
IndexedFaceSet387.colorPerVertex = False;
IndexedFaceSet387.coordIndex = new MFInt32(new int[0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]);
IndexedFaceSet387.normalPerVertex = False;
IndexedFaceSet387.solid = False;
Coordinate Coordinate388 = createNode("Coordinate");
Coordinate388.point = new MFVec3f(new float[-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0]);
IndexedFaceSet387.coord = Coordinate388;

Color Color389 = createNode("Color");
Color389.color = new MFColor(new float[0.435294,0.741176,0,0,0.560784,0.580392]);
IndexedFaceSet387.color = Color389;

Shape384.geometry = IndexedFaceSet387;

Transform383.children = new MFNode();

Transform383.children[0] = Shape384;

children[17] = Transform383;

Transform Transform390 = createNode("Transform");
Transform390.scale = new SFVec3f(new float[3,3,3]);
Transform390.translation = new SFVec3f(new float[0,0.25,0]);
Inline Inline391 = createNode("Inline");
Inline391.DEF = "CoordinateAxes";
Inline391.url = new MFString(new java.lang.String["../data/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform390.children = new MFNode();

Transform390.children[0] = Inline391;

children[18] = Transform390;

Transform Transform392 = createNode("Transform");
Transform392.DEF = "MovingBoxTransform";
PositionInterpolator PositionInterpolator393 = createNode("PositionInterpolator");
PositionInterpolator393.DEF = "BoxPath";
PositionInterpolator393.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator393.keyValue = new MFVec3f(new float[-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5]);
Transform392.children = new MFNode();

Transform392.children[0] = PositionInterpolator393;

TimeSensor TimeSensor394 = createNode("TimeSensor");
TimeSensor394.DEF = "BoxTimer";
TimeSensor394.cycleInterval = 10;
TimeSensor394.loop = True;
Transform392.children[1] = TimeSensor394;

ROUTE ROUTE395 = createNode("ROUTE");
ROUTE395.fromField = "value_changed";
ROUTE395.fromNode = "BoxPath";
ROUTE395.toField = "translation";
ROUTE395.toNode = "MovingBoxTransform";
Transform392.children[2] = ROUTE395;

ROUTE ROUTE396 = createNode("ROUTE");
ROUTE396.fromField = "value_changed";
ROUTE396.fromNode = "BoxPath";
ROUTE396.toField = "goalAimPoint";
ROUTE396.toNode = "MoveAimPoint3.1";
Transform392.children[3] = ROUTE396;

ROUTE ROUTE397 = createNode("ROUTE");
ROUTE397.fromField = "value_changed";
ROUTE397.fromNode = "BoxPath";
ROUTE397.toField = "goalAimPoint";
ROUTE397.toNode = "MoveAimPoint3.2";
Transform392.children[4] = ROUTE397;

ROUTE ROUTE398 = createNode("ROUTE");
ROUTE398.fromField = "value_changed";
ROUTE398.fromNode = "BoxPath";
ROUTE398.toField = "goalAimPoint";
ROUTE398.toNode = "MoveAimPoint3.3";
Transform392.children[5] = ROUTE398;

ROUTE ROUTE399 = createNode("ROUTE");
ROUTE399.fromField = "fraction_changed";
ROUTE399.fromNode = "BoxTimer";
ROUTE399.toField = "set_fraction";
ROUTE399.toNode = "BoxPath";
Transform392.children[6] = ROUTE399;

Shape Shape400 = createNode("Shape");
Box Box401 = createNode("Box");
Shape400.geometry = Box401;

Appearance Appearance402 = createNode("Appearance");
Material Material403 = createNode("Material");
Appearance402.material = Material403;

ImageTexture ImageTexture404 = createNode("ImageTexture");
ImageTexture404.url = new MFString(new java.lang.String["../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"]);
Appearance402.texture = ImageTexture404;

Shape400.appearance = Appearance402;

Transform392.children[7] = Shape400;

children[19] = Transform392;

//================ CrossHair visualization for center of screen ================
ExternProtoDeclare ExternProtoDeclare405 = createNode("ExternProtoDeclare");
ExternProtoDeclare405.name = "CrossHair";
ExternProtoDeclare405.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point";
ExternProtoDeclare405.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]);
field field406 = createNode("field");
field406.name = "enabled";
field406.accessType = "initializeOnly";
field406.appinfo = "whether CrissHair orititype is enabled or not";
field406.type = "SFBool";
ExternProtoDeclare405.field = new MFNode();

ExternProtoDeclare405.field[0] = field406;

field field407 = createNode("field");
field407.name = "set_enabled";
field407.accessType = "inputOnly";
field407.appinfo = "control whether enabled/disabled";
field407.type = "SFBool";
ExternProtoDeclare405.field[1] = field407;

field field408 = createNode("field");
field408.name = "markerColor";
field408.accessType = "inputOutput";
field408.appinfo = "color of CrossHair marker";
field408.type = "SFColor";
ExternProtoDeclare405.field[2] = field408;

field field409 = createNode("field");
field409.name = "scale";
field409.accessType = "inputOutput";
field409.appinfo = "size of CrossHair in meters";
field409.type = "SFVec3f";
ExternProtoDeclare405.field[3] = field409;

field field410 = createNode("field");
field410.name = "positionOffsetFromCamera";
field410.accessType = "inputOutput";
field410.appinfo = "distance in front of HUD viewpoint";
field410.type = "SFVec3f";
ExternProtoDeclare405.field[4] = field410;

children[20] = ExternProtoDeclare405;

ProtoInstance ProtoInstance411 = createNode("ProtoInstance");
ProtoInstance411.name = "CrossHair";
ProtoInstance411.DEF = "CrossHairInstance";
fieldValue fieldValue412 = createNode("fieldValue");
fieldValue412.name = "enabled";
fieldValue412.value = "true";
ProtoInstance411.fieldValue = new MFNode();

ProtoInstance411.fieldValue[0] = fieldValue412;

fieldValue fieldValue413 = createNode("fieldValue");
fieldValue413.name = "markerColor";
fieldValue413.value = "1 0.5 0";
ProtoInstance411.fieldValue[1] = fieldValue413;

fieldValue fieldValue414 = createNode("fieldValue");
fieldValue414.name = "scale";
fieldValue414.value = "1 1 1";
ProtoInstance411.fieldValue[2] = fieldValue414;

fieldValue fieldValue415 = createNode("fieldValue");
fieldValue415.name = "positionOffsetFromCamera";
fieldValue415.value = "0 0 -6";
ProtoInstance411.fieldValue[3] = fieldValue415;

children[21] = ProtoInstance411;

//turn on CrossHairInstance when animated camera viewpoints are bound
ROUTE ROUTE416 = createNode("ROUTE");
ROUTE416.fromField = "isBound";
ROUTE416.fromNode = "Camera.SimpleShotsTest";
ROUTE416.toField = "set_enabled";
ROUTE416.toNode = "CrossHairInstance";
children[22] = ROUTE416;

ROUTE ROUTE417 = createNode("ROUTE");
ROUTE417.fromField = "isBound";
ROUTE417.fromNode = "Camera.AimPointTest";
ROUTE417.toField = "set_enabled";
ROUTE417.toNode = "CrossHairInstance";
children[23] = ROUTE417;

//turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>
//=============== TODO Launch Prototype Example ==============
Anchor Anchor418 = createNode("Anchor");
Anchor418.description = "launch CameraExample scene";
Anchor418.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor418.url = new MFString(new java.lang.String["CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"]);
Transform Transform419 = createNode("Transform");
Transform419.translation = new SFVec3f(new float[0,-3,0]);
Shape Shape420 = createNode("Shape");
Text Text421 = createNode("Text");
Text421.string = new MFString(new java.lang.String["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"]);
FontStyle FontStyle422 = createNode("FontStyle");
FontStyle422.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle422.size = 0.5;
Text421.fontStyle = FontStyle422;

Shape420.geometry = Text421;

Appearance Appearance423 = createNode("Appearance");
Material Material424 = createNode("Material");
Material424.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance423.material = Material424;

Shape420.appearance = Appearance423;

Transform419.children = new MFNode();

Transform419.children[0] = Shape420;

Anchor418.children = new MFNode();

Anchor418.children[0] = Transform419;

children[24] = Anchor418;

}
