let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "CameraExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "documentation";
meta4.content = "Two demos are found in the scene, click the \"red text\" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "creator";
meta5.content = "Don Brutzman and Jeff Weekley";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "18 June 2009";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "20 January 2020";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "TODO";
meta8.content = "Schematron rules, backed up by initialize() checks";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "BeyondViewpointCameraNodesWeb3D2009.pdf";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "MovingImage";
meta10.content = "CameraExamplesDemo.mp4";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "subject";
meta12.content = "Camera nodes for Viewpoint navigation control";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "CameraPrototypes.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "CameraExamplesConsoleLog.txt";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "identifier";
meta17.content = "https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "license";
meta20.content = "../license.html";
head1.meta[18] = meta20;

head = head1;

//=============== Camera ==============
let WorldInfo22 = browser.currentScene.createNode("WorldInfo");
WorldInfo22.title = "CameraExamples.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo22;

let ExternProtoDeclare23 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare23.name = "Camera";
ExternProtoDeclare23.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images";
ExternProtoDeclare23.url = new MFString(new java.lang.String["CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"]);
let field24 = browser.currentScene.createNode("field");
field24.name = "description";
field24.accessType = "inputOutput";
field24.appinfo = "Text description to be displayed for this Camera";
field24.type = "SFString";
ExternProtoDeclare23.field = new MFNode();

ExternProtoDeclare23.field[0] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "position";
field25.accessType = "inputOutput";
field25.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field25.type = "SFVec3f";
ExternProtoDeclare23.field[1] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "orientation";
field26.accessType = "inputOutput";
field26.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field26.type = "SFRotation";
ExternProtoDeclare23.field[2] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "fieldOfView";
field27.accessType = "inputOutput";
field27.appinfo = "pi/4";
field27.type = "SFFloat";
ExternProtoDeclare23.field[3] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "set_fraction";
field28.accessType = "inputOnly";
field28.appinfo = "input fraction drives interpolators";
field28.type = "SFFloat";
ExternProtoDeclare23.field[4] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "set_bind";
field29.accessType = "inputOnly";
field29.appinfo = "input event binds or unbinds this Camera";
field29.type = "SFBool";
ExternProtoDeclare23.field[5] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "bindTime";
field30.accessType = "outputOnly";
field30.appinfo = "output event indicates when this Camera is bound";
field30.type = "SFTime";
ExternProtoDeclare23.field[6] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "isBound";
field31.accessType = "outputOnly";
field31.appinfo = "output event indicates whether this Camera is bound or unbound";
field31.type = "SFBool";
ExternProtoDeclare23.field[7] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "nearClipPlane";
field32.accessType = "inputOutput";
field32.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field32.type = "SFFloat";
ExternProtoDeclare23.field[8] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "farClipPlane";
field33.accessType = "inputOutput";
field33.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field33.type = "SFFloat";
ExternProtoDeclare23.field[9] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "shots";
field34.accessType = "inputOutput";
field34.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field34.type = "MFNode";
ExternProtoDeclare23.field[10] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "headlight";
field35.accessType = "inputOutput";
field35.appinfo = "Whether camera headlight is on or off";
field35.type = "SFBool";
ExternProtoDeclare23.field[11] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "headlightColor";
field36.accessType = "inputOutput";
field36.appinfo = "Camera headlight color";
field36.type = "SFColor";
ExternProtoDeclare23.field[12] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "headlightIntensity";
field37.accessType = "inputOutput";
field37.appinfo = "Camera headlight intensity";
field37.type = "SFFloat";
ExternProtoDeclare23.field[13] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "filterColor";
field38.accessType = "inputOutput";
field38.appinfo = "Camera filter color that modifies virtual lens capture";
field38.type = "SFColor";
ExternProtoDeclare23.field[14] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "filterTransparency";
field39.accessType = "inputOutput";
field39.appinfo = "Camera filter transparency that modifies virtual lens capture";
field39.type = "SFFloat";
ExternProtoDeclare23.field[15] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "upVector";
field40.accessType = "inputOutput";
field40.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field40.type = "SFVec3f";
ExternProtoDeclare23.field[16] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "fStop";
field41.accessType = "inputOutput";
field41.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field41.type = "SFFloat";
ExternProtoDeclare23.field[17] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "focusDistance";
field42.accessType = "inputOutput";
field42.appinfo = "Distance to focal plane of sharpest focus";
field42.type = "SFFloat";
ExternProtoDeclare23.field[18] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "isActive";
field43.accessType = "outputOnly";
field43.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field43.type = "SFBool";
ExternProtoDeclare23.field[19] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "totalDuration";
field44.accessType = "outputOnly";
field44.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field44.type = "SFTime";
ExternProtoDeclare23.field[20] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "offlineRender";
field45.accessType = "inputOutput";
field45.appinfo = "OfflineRender node";
field45.type = "SFNode";
ExternProtoDeclare23.field[21] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "traceEnabled";
field46.accessType = "initializeOnly";
field46.appinfo = "enable console output to trace script computations and prototype progress";
field46.type = "SFBool";
ExternProtoDeclare23.field[22] = field46;

//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
browser.currentScene.children[1] = ExternProtoDeclare23;

//=============== CameraShot ==============
let ExternProtoDeclare47 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare47.name = "CameraShot";
ExternProtoDeclare47.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot";
ExternProtoDeclare47.url = new MFString(new java.lang.String["CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"]);
let field48 = browser.currentScene.createNode("field");
field48.name = "description";
field48.accessType = "inputOutput";
field48.appinfo = "Text description to be displayed for this CameraShot";
field48.type = "SFString";
ExternProtoDeclare47.field = new MFNode();

ExternProtoDeclare47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "enabled";
field49.accessType = "inputOutput";
field49.appinfo = "Whether this CameraShot can be activated";
field49.type = "SFBool";
ExternProtoDeclare47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "moves";
field50.accessType = "inputOutput";
field50.appinfo = "Set of CameraMovement nodes";
field50.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ExternProtoDeclare47.field[2] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "initialPosition";
field51.accessType = "inputOutput";
field51.appinfo = "Setup to reinitialize camera position for this shot";
field51.type = "SFVec3f";
ExternProtoDeclare47.field[3] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "initialOrientation";
field52.accessType = "inputOutput";
field52.appinfo = "Setup to reinitialize camera rotation for this shot";
field52.type = "SFRotation";
ExternProtoDeclare47.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "initialAimPoint";
field53.accessType = "inputOutput";
field53.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field53.type = "SFVec3f";
ExternProtoDeclare47.field[5] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "initialFieldOfView";
field54.accessType = "inputOutput";
field54.appinfo = "pi/4";
field54.type = "SFFloat";
ExternProtoDeclare47.field[6] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "initialFStop";
field55.accessType = "inputOutput";
field55.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field55.type = "SFFloat";
ExternProtoDeclare47.field[7] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "initialFocusDistance";
field56.accessType = "inputOutput";
field56.appinfo = "Distance to focal plane of sharpest focus";
field56.type = "SFFloat";
ExternProtoDeclare47.field[8] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "shotDuration";
field57.accessType = "outputOnly";
field57.appinfo = "Subtotal duration of contained CameraMovement move durations";
field57.type = "SFTime";
ExternProtoDeclare47.field[9] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "isActive";
field58.accessType = "outputOnly";
field58.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field58.type = "SFBool";
ExternProtoDeclare47.field[10] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "traceEnabled";
field59.accessType = "initializeOnly";
field59.appinfo = "enable console output to trace script computations and prototype progress";
field59.type = "SFBool";
ExternProtoDeclare47.field[11] = field59;

browser.currentScene.children[2] = ExternProtoDeclare47;

//=============== CameraMovement ==============
let ExternProtoDeclare60 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare60.name = "CameraMovement";
ExternProtoDeclare60.appinfo = "CameraMovement defines a single camera movement animation";
ExternProtoDeclare60.url = new MFString(new java.lang.String["CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"]);
let field61 = browser.currentScene.createNode("field");
field61.name = "description";
field61.accessType = "inputOutput";
field61.appinfo = "Text description to be displayed for this CameraMovement";
field61.type = "SFString";
ExternProtoDeclare60.field = new MFNode();

ExternProtoDeclare60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "enabled";
field62.accessType = "inputOutput";
field62.appinfo = "Whether this CameraMovement can be activated";
field62.type = "SFBool";
ExternProtoDeclare60.field[1] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "duration";
field63.accessType = "inputOutput";
field63.appinfo = "Duration in seconds for this move";
field63.type = "SFFloat";
ExternProtoDeclare60.field[2] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "goalPosition";
field64.accessType = "inputOutput";
field64.appinfo = "Goal camera position for this move";
field64.type = "SFVec3f";
ExternProtoDeclare60.field[3] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "goalOrientation";
field65.accessType = "inputOutput";
field65.appinfo = "Goal camera rotation for this move";
field65.type = "SFRotation";
ExternProtoDeclare60.field[4] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "tracking";
field66.accessType = "inputOutput";
field66.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field66.type = "SFBool";
ExternProtoDeclare60.field[5] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "goalAimPoint";
field67.accessType = "inputOutput";
field67.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field67.type = "SFVec3f";
ExternProtoDeclare60.field[6] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "goalFieldOfView";
field68.accessType = "inputOutput";
field68.appinfo = "Goal fieldOfView for this move";
field68.type = "SFFloat";
ExternProtoDeclare60.field[7] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "goalFStop";
field69.accessType = "inputOutput";
field69.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field69.type = "SFFloat";
ExternProtoDeclare60.field[8] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "goalFocusDistance";
field70.accessType = "inputOutput";
field70.appinfo = "Distance to focal plane of sharpest focus";
field70.type = "SFFloat";
ExternProtoDeclare60.field[9] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "isActive";
field71.accessType = "outputOnly";
field71.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field71.type = "SFBool";
ExternProtoDeclare60.field[10] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "traceEnabled";
field72.accessType = "initializeOnly";
field72.appinfo = "enable console output to trace script computations and prototype progress";
field72.type = "SFBool";
ExternProtoDeclare60.field[11] = field72;

browser.currentScene.children[3] = ExternProtoDeclare60;

//=============== OfflineRender ==============
let ExternProtoDeclare73 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare73.name = "OfflineRender";
ExternProtoDeclare73.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)";
ExternProtoDeclare73.url = new MFString(new java.lang.String["CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"]);
let field74 = browser.currentScene.createNode("field");
field74.name = "description";
field74.accessType = "inputOutput";
field74.appinfo = "Text description to be displayed for this OfflineRender";
field74.type = "SFString";
ExternProtoDeclare73.field = new MFNode();

ExternProtoDeclare73.field[0] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "enabled";
field75.accessType = "inputOutput";
field75.appinfo = "Whether this OfflineRender can be activated";
field75.type = "SFBool";
ExternProtoDeclare73.field[1] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "frameRate";
field76.accessType = "inputOutput";
field76.appinfo = "Frames per second recorded for this rendering";
field76.type = "SFFloat";
ExternProtoDeclare73.field[2] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "frameSize";
field77.accessType = "inputOutput";
field77.appinfo = "Size of frame in number of pixels width and height";
field77.type = "SFVec2f";
ExternProtoDeclare73.field[3] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "pixelAspectRatio";
field78.accessType = "inputOutput";
field78.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field78.type = "SFFloat";
ExternProtoDeclare73.field[4] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "set_startTime";
field79.accessType = "inputOnly";
field79.appinfo = "Begin render operation";
field79.type = "SFTime";
ExternProtoDeclare73.field[5] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "progress";
field80.accessType = "outputOnly";
field80.appinfo = "Progress performing render operation (0..1)";
field80.type = "SFFloat";
ExternProtoDeclare73.field[6] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "renderCompleteTime";
field81.accessType = "outputOnly";
field81.appinfo = "Render operation complete";
field81.type = "SFTime";
ExternProtoDeclare73.field[7] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "movieFormat";
field82.accessType = "initializeOnly";
field82.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field82.type = "MFString";
ExternProtoDeclare73.field[8] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "imageFormat";
field83.accessType = "initializeOnly";
field83.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field83.type = "MFString";
ExternProtoDeclare73.field[9] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "traceEnabled";
field84.accessType = "initializeOnly";
field84.appinfo = "enable console output to trace script computations and prototype progress";
field84.type = "SFBool";
ExternProtoDeclare73.field[10] = field84;

//TODO non-photorealistic rendering (NPR) parameters
browser.currentScene.children[4] = ExternProtoDeclare73;

//=============== Lights, camera, action! ==============
let DirectionalLight85 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight85.direction = new SFVec3f(new float[0,-1,0]);
DirectionalLight85.global = True;
DirectionalLight85.intensity = 0.8;
browser.currentScene.children[5] = DirectionalLight85;

let NavigationInfo86 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo86.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo86;

let Viewpoint87 = browser.currentScene.createNode("Viewpoint");
Viewpoint87.description = "Camera test scene entry view";
Viewpoint87.position = new SFVec3f(new float[0,2,12]);
browser.currentScene.children[7] = Viewpoint87;

let Viewpoint88 = browser.currentScene.createNode("Viewpoint");
Viewpoint88.description = "Camera test scene from above";
Viewpoint88.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint88.position = new SFVec3f(new float[0,150,0]);
browser.currentScene.children[8] = Viewpoint88;

//Keep prototype instances in same file while developing, then move later
//We will create examples matching those in the paper
//=============== Camera.SimpleShotsTest ==============
let ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "Camera";
ProtoInstance89.DEF = "Camera.SimpleShotsTest";
let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "description";
fieldValue90.value = "SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt";
ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "headlight";
fieldValue91.value = "true";
ProtoInstance89.fieldValue[1] = fieldValue91;

let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "position";
fieldValue92.value = "-4 4 10";
ProtoInstance89.fieldValue[2] = fieldValue92;

let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "shots";
let ProtoInstance94 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance94.name = "CameraShot";
ProtoInstance94.DEF = "Zoom";
let fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "description";
fieldValue95.value = "Simple shot of Camera Zoom";
ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "initialPosition";
fieldValue96.value = "-50 1 -10";
ProtoInstance94.fieldValue[1] = fieldValue96;

let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "initialOrientation";
fieldValue97.value = "0 1 0 0";
ProtoInstance94.fieldValue[2] = fieldValue97;

let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "moves";
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "CameraMovement";
let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "description";
fieldValue100.value = "Camera Zoom In";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

let fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "duration";
fieldValue101.value = "3";
ProtoInstance99.fieldValue[1] = fieldValue101;

let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "goalPosition";
fieldValue102.value = "-50 1 -15";
ProtoInstance99.fieldValue[2] = fieldValue102;

let fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "goalOrientation";
fieldValue103.value = "0 1 0 0";
ProtoInstance99.fieldValue[3] = fieldValue103;

fieldValue98.children = new MFNode();

fieldValue98.children[0] = ProtoInstance99;

let ProtoInstance104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance104.name = "CameraMovement";
let fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "description";
fieldValue105.value = "Camera Zoom Out";
ProtoInstance104.fieldValue = new MFNode();

ProtoInstance104.fieldValue[0] = fieldValue105;

let fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "duration";
fieldValue106.value = "3";
ProtoInstance104.fieldValue[1] = fieldValue106;

let fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "goalPosition";
fieldValue107.value = "-50 1 -10";
ProtoInstance104.fieldValue[2] = fieldValue107;

let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "goalOrientation";
fieldValue108.value = "0 1 0 0";
ProtoInstance104.fieldValue[3] = fieldValue108;

fieldValue98.children[1] = ProtoInstance104;

let ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.name = "CameraMovement";
let fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "description";
fieldValue110.value = "Camera Pause";
ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

let fieldValue111 = browser.currentScene.createNode("fieldValue");
fieldValue111.name = "duration";
fieldValue111.value = "1";
ProtoInstance109.fieldValue[1] = fieldValue111;

let fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "goalPosition";
fieldValue112.value = "-50 1 -10";
ProtoInstance109.fieldValue[2] = fieldValue112;

let fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "goalOrientation";
fieldValue113.value = "0 1 0 0";
ProtoInstance109.fieldValue[3] = fieldValue113;

fieldValue98.children[2] = ProtoInstance109;

ProtoInstance94.fieldValue[3] = fieldValue98;

fieldValue93.children = new MFNode();

fieldValue93.children[0] = ProtoInstance94;

let ProtoInstance114 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance114.name = "CameraShot";
ProtoInstance114.DEF = "Dolly";
let fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "description";
fieldValue115.value = "Simple shot of Camera Dolly";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

let fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "initialPosition";
fieldValue116.value = "-40 1 -10";
ProtoInstance114.fieldValue[1] = fieldValue116;

let fieldValue117 = browser.currentScene.createNode("fieldValue");
fieldValue117.name = "initialOrientation";
fieldValue117.value = "0 1 0 0";
ProtoInstance114.fieldValue[2] = fieldValue117;

let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "moves";
let ProtoInstance119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance119.name = "CameraMovement";
ProtoInstance119.DEF = "DollyMove1";
let fieldValue120 = browser.currentScene.createNode("fieldValue");
fieldValue120.name = "description";
fieldValue120.value = "Camera Dolly from Right to Left";
ProtoInstance119.fieldValue = new MFNode();

ProtoInstance119.fieldValue[0] = fieldValue120;

let fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "duration";
fieldValue121.value = "3";
ProtoInstance119.fieldValue[1] = fieldValue121;

let fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "goalPosition";
fieldValue122.value = "-45 1 -10";
ProtoInstance119.fieldValue[2] = fieldValue122;

let fieldValue123 = browser.currentScene.createNode("fieldValue");
fieldValue123.name = "goalOrientation";
fieldValue123.value = "0 1 0 0";
ProtoInstance119.fieldValue[3] = fieldValue123;

fieldValue118.children = new MFNode();

fieldValue118.children[0] = ProtoInstance119;

let ProtoInstance124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance124.name = "CameraMovement";
let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "description";
fieldValue125.value = "Camera Dolly from Left to Right";
ProtoInstance124.fieldValue = new MFNode();

ProtoInstance124.fieldValue[0] = fieldValue125;

let fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "duration";
fieldValue126.value = "3";
ProtoInstance124.fieldValue[1] = fieldValue126;

let fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "goalPosition";
fieldValue127.value = "-40 1 -10";
ProtoInstance124.fieldValue[2] = fieldValue127;

let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "goalOrientation";
fieldValue128.value = "0 1 0 0";
ProtoInstance124.fieldValue[3] = fieldValue128;

fieldValue118.children[1] = ProtoInstance124;

let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "CameraMovement";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "description";
fieldValue130.value = "Camera Pause";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

let fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "duration";
fieldValue131.value = "1";
ProtoInstance129.fieldValue[1] = fieldValue131;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "goalPosition";
fieldValue132.value = "-40 1 -10";
ProtoInstance129.fieldValue[2] = fieldValue132;

let fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "goalOrientation";
fieldValue133.value = "0 1 0 0";
ProtoInstance129.fieldValue[3] = fieldValue133;

fieldValue118.children[2] = ProtoInstance129;

ProtoInstance114.fieldValue[3] = fieldValue118;

fieldValue93.children[1] = ProtoInstance114;

let ProtoInstance134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance134.name = "CameraShot";
ProtoInstance134.DEF = "Pan";
let fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "description";
fieldValue135.value = "Simple shot of Camera Pan left right and back to center";
ProtoInstance134.fieldValue = new MFNode();

ProtoInstance134.fieldValue[0] = fieldValue135;

let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "initialPosition";
fieldValue136.value = "-30 1 -10";
ProtoInstance134.fieldValue[1] = fieldValue136;

let fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "initialOrientation";
fieldValue137.value = "0 1 0 0";
ProtoInstance134.fieldValue[2] = fieldValue137;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "moves";
let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "CameraMovement";
ProtoInstance139.DEF = "PanLeft";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "description";
fieldValue140.value = "Pan Left";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

let fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "duration";
fieldValue141.value = "2";
ProtoInstance139.fieldValue[1] = fieldValue141;

let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "goalPosition";
fieldValue142.value = "-30 1 -10";
ProtoInstance139.fieldValue[2] = fieldValue142;

let fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "goalOrientation";
fieldValue143.value = "0 1 0 0.4";
ProtoInstance139.fieldValue[3] = fieldValue143;

fieldValue138.children = new MFNode();

fieldValue138.children[0] = ProtoInstance139;

let ProtoInstance144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance144.name = "CameraMovement";
ProtoInstance144.DEF = "PanRight";
let fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "description";
fieldValue145.value = "Pan Right";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "duration";
fieldValue146.value = "3";
ProtoInstance144.fieldValue[1] = fieldValue146;

let fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "goalPosition";
fieldValue147.value = "-30 1 -10";
ProtoInstance144.fieldValue[2] = fieldValue147;

let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "goalOrientation";
fieldValue148.value = "0 1 0 -0.4";
ProtoInstance144.fieldValue[3] = fieldValue148;

fieldValue138.children[1] = ProtoInstance144;

let ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "CameraMovement";
let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "description";
fieldValue150.value = "Camera Pan back to Center";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

let fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "duration";
fieldValue151.value = "2";
ProtoInstance149.fieldValue[1] = fieldValue151;

let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "goalPosition";
fieldValue152.value = "-30 1 -10";
ProtoInstance149.fieldValue[2] = fieldValue152;

let fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "goalOrientation";
fieldValue153.value = "0 1 0 0";
ProtoInstance149.fieldValue[3] = fieldValue153;

fieldValue138.children[2] = ProtoInstance149;

let ProtoInstance154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance154.name = "CameraMovement";
let fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "description";
fieldValue155.value = "Camera Pause";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "duration";
fieldValue156.value = "2";
ProtoInstance154.fieldValue[1] = fieldValue156;

let fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "goalPosition";
fieldValue157.value = "-30 1 -10";
ProtoInstance154.fieldValue[2] = fieldValue157;

let fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "goalOrientation";
fieldValue158.value = "0 1 0 0";
ProtoInstance154.fieldValue[3] = fieldValue158;

fieldValue138.children[3] = ProtoInstance154;

ProtoInstance134.fieldValue[3] = fieldValue138;

fieldValue93.children[2] = ProtoInstance134;

let ProtoInstance159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance159.name = "CameraShot";
ProtoInstance159.DEF = "CameraBoom";
let fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "description";
fieldValue160.value = "Camera Boom";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "initialPosition";
fieldValue161.value = "-20 1 -10";
ProtoInstance159.fieldValue[1] = fieldValue161;

let fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "initialOrientation";
fieldValue162.value = "0 1 0 0";
ProtoInstance159.fieldValue[2] = fieldValue162;

let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "moves";
let ProtoInstance164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance164.name = "CameraMovement";
ProtoInstance164.DEF = "CameraBoomUp";
let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "description";
fieldValue165.value = "Camera Boom Up";
ProtoInstance164.fieldValue = new MFNode();

ProtoInstance164.fieldValue[0] = fieldValue165;

let fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "duration";
fieldValue166.value = "3";
ProtoInstance164.fieldValue[1] = fieldValue166;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "goalPosition";
fieldValue167.value = "-20 5 -10";
ProtoInstance164.fieldValue[2] = fieldValue167;

let fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "goalOrientation";
fieldValue168.value = "0 1 0 0";
ProtoInstance164.fieldValue[3] = fieldValue168;

fieldValue163.children = new MFNode();

fieldValue163.children[0] = ProtoInstance164;

let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "CameraMovement";
ProtoInstance169.DEF = "BoomDown";
let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "description";
fieldValue170.value = "Camera Boom Down";
ProtoInstance169.fieldValue = new MFNode();

ProtoInstance169.fieldValue[0] = fieldValue170;

let fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "duration";
fieldValue171.value = "3";
ProtoInstance169.fieldValue[1] = fieldValue171;

let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "goalPosition";
fieldValue172.value = "-20 1 -10";
ProtoInstance169.fieldValue[2] = fieldValue172;

let fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "goalOrientation";
fieldValue173.value = "0 1 0 0";
ProtoInstance169.fieldValue[3] = fieldValue173;

fieldValue163.children[1] = ProtoInstance169;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "CameraMovement";
ProtoInstance174.DEF = "BoomPause";
let fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "description";
fieldValue175.value = "Camera Pause";
ProtoInstance174.fieldValue = new MFNode();

ProtoInstance174.fieldValue[0] = fieldValue175;

let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "duration";
fieldValue176.value = "2";
ProtoInstance174.fieldValue[1] = fieldValue176;

let fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "goalPosition";
fieldValue177.value = "-20 1 -10";
ProtoInstance174.fieldValue[2] = fieldValue177;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "goalOrientation";
fieldValue178.value = "0 1 0 0";
ProtoInstance174.fieldValue[3] = fieldValue178;

fieldValue163.children[2] = ProtoInstance174;

ProtoInstance159.fieldValue[3] = fieldValue163;

fieldValue93.children[3] = ProtoInstance159;

let ProtoInstance179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance179.name = "CameraShot";
ProtoInstance179.DEF = "CameraTilt";
let fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "description";
fieldValue180.value = "Camera Tilt";
ProtoInstance179.fieldValue = new MFNode();

ProtoInstance179.fieldValue[0] = fieldValue180;

let fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "initialPosition";
fieldValue181.value = "-10 1 -10";
ProtoInstance179.fieldValue[1] = fieldValue181;

let fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "initialOrientation";
fieldValue182.value = "0 0 1 0";
ProtoInstance179.fieldValue[2] = fieldValue182;

let fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "traceEnabled";
fieldValue183.value = "true";
ProtoInstance179.fieldValue[3] = fieldValue183;

let fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "moves";
let ProtoInstance185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance185.name = "CameraMovement";
let fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "description";
fieldValue186.value = "Camera Tilt Pause";
ProtoInstance185.fieldValue = new MFNode();

ProtoInstance185.fieldValue[0] = fieldValue186;

let fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "duration";
fieldValue187.value = "1";
ProtoInstance185.fieldValue[1] = fieldValue187;

let fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "goalPosition";
fieldValue188.value = "-10 1 -10";
ProtoInstance185.fieldValue[2] = fieldValue188;

let fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "goalOrientation";
fieldValue189.value = "0 0 1 0";
ProtoInstance185.fieldValue[3] = fieldValue189;

fieldValue184.children = new MFNode();

fieldValue184.children[0] = ProtoInstance185;

let ProtoInstance190 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance190.name = "CameraMovement";
ProtoInstance190.DEF = "TiltDown";
let fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "description";
fieldValue191.value = "Camera Tilt Left";
ProtoInstance190.fieldValue = new MFNode();

ProtoInstance190.fieldValue[0] = fieldValue191;

let fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "duration";
fieldValue192.value = "3";
ProtoInstance190.fieldValue[1] = fieldValue192;

let fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "goalPosition";
fieldValue193.value = "-10 1 -10";
ProtoInstance190.fieldValue[2] = fieldValue193;

let fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "goalOrientation";
fieldValue194.value = "0 0 1 0.785";
ProtoInstance190.fieldValue[3] = fieldValue194;

fieldValue184.children[1] = ProtoInstance190;

let ProtoInstance195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance195.name = "CameraMovement";
ProtoInstance195.DEF = "TiltPause";
let fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "description";
fieldValue196.value = "Camera Tilt Pause";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

let fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "duration";
fieldValue197.value = "1";
ProtoInstance195.fieldValue[1] = fieldValue197;

let fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "goalPosition";
fieldValue198.value = "-10 1 -10";
ProtoInstance195.fieldValue[2] = fieldValue198;

let fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "goalOrientation";
fieldValue199.value = "0 0 1 0.785";
ProtoInstance195.fieldValue[3] = fieldValue199;

fieldValue184.children[2] = ProtoInstance195;

let ProtoInstance200 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance200.name = "CameraMovement";
let fieldValue201 = browser.currentScene.createNode("fieldValue");
fieldValue201.name = "description";
fieldValue201.value = "Camera Tilt Right";
ProtoInstance200.fieldValue = new MFNode();

ProtoInstance200.fieldValue[0] = fieldValue201;

let fieldValue202 = browser.currentScene.createNode("fieldValue");
fieldValue202.name = "duration";
fieldValue202.value = "3";
ProtoInstance200.fieldValue[1] = fieldValue202;

let fieldValue203 = browser.currentScene.createNode("fieldValue");
fieldValue203.name = "goalPosition";
fieldValue203.value = "-10 1 -10";
ProtoInstance200.fieldValue[2] = fieldValue203;

let fieldValue204 = browser.currentScene.createNode("fieldValue");
fieldValue204.name = "goalOrientation";
fieldValue204.value = "0 0 1 -0.785";
ProtoInstance200.fieldValue[3] = fieldValue204;

fieldValue184.children[3] = ProtoInstance200;

let ProtoInstance205 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance205.name = "CameraMovement";
let fieldValue206 = browser.currentScene.createNode("fieldValue");
fieldValue206.name = "description";
fieldValue206.value = "Camera Tilt Pause";
ProtoInstance205.fieldValue = new MFNode();

ProtoInstance205.fieldValue[0] = fieldValue206;

let fieldValue207 = browser.currentScene.createNode("fieldValue");
fieldValue207.name = "duration";
fieldValue207.value = "1";
ProtoInstance205.fieldValue[1] = fieldValue207;

let fieldValue208 = browser.currentScene.createNode("fieldValue");
fieldValue208.name = "goalPosition";
fieldValue208.value = "-10 1 -10";
ProtoInstance205.fieldValue[2] = fieldValue208;

let fieldValue209 = browser.currentScene.createNode("fieldValue");
fieldValue209.name = "goalOrientation";
fieldValue209.value = "0 0 1 -0.785";
ProtoInstance205.fieldValue[3] = fieldValue209;

fieldValue184.children[4] = ProtoInstance205;

let ProtoInstance210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance210.name = "CameraMovement";
ProtoInstance210.DEF = "TiltReset";
let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "description";
fieldValue211.value = "Camera Tilt Reset";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "duration";
fieldValue212.value = "1";
ProtoInstance210.fieldValue[1] = fieldValue212;

let fieldValue213 = browser.currentScene.createNode("fieldValue");
fieldValue213.name = "goalPosition";
fieldValue213.value = "-10 1 -10";
ProtoInstance210.fieldValue[2] = fieldValue213;

let fieldValue214 = browser.currentScene.createNode("fieldValue");
fieldValue214.name = "goalOrientation";
fieldValue214.value = "0 0 1 0";
ProtoInstance210.fieldValue[3] = fieldValue214;

fieldValue184.children[5] = ProtoInstance210;

let ProtoInstance215 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance215.name = "CameraMovement";
ProtoInstance215.DEF = "TiltUp";
let fieldValue216 = browser.currentScene.createNode("fieldValue");
fieldValue216.name = "description";
fieldValue216.value = "Return to home";
ProtoInstance215.fieldValue = new MFNode();

ProtoInstance215.fieldValue[0] = fieldValue216;

let fieldValue217 = browser.currentScene.createNode("fieldValue");
fieldValue217.name = "duration";
fieldValue217.value = "2";
ProtoInstance215.fieldValue[1] = fieldValue217;

let fieldValue218 = browser.currentScene.createNode("fieldValue");
fieldValue218.name = "goalPosition";
fieldValue218.value = "0 2 12";
ProtoInstance215.fieldValue[2] = fieldValue218;

let fieldValue219 = browser.currentScene.createNode("fieldValue");
fieldValue219.name = "goalOrientation";
fieldValue219.value = "0 0 1 0";
ProtoInstance215.fieldValue[3] = fieldValue219;

fieldValue184.children[6] = ProtoInstance215;

ProtoInstance179.fieldValue[4] = fieldValue184;

fieldValue93.children[4] = ProtoInstance179;

ProtoInstance89.fieldValue[3] = fieldValue93;

browser.currentScene.children[9] = ProtoInstance89;

let Group220 = browser.currentScene.createNode("Group");
Group220.DEF = "AnimationGroup.SimpleShots";
let TimeSensor221 = browser.currentScene.createNode("TimeSensor");
TimeSensor221.DEF = "CameraTimer.SimpleShots";
Group220.children = new MFNode();

Group220.children[0] = TimeSensor221;

//initialize clock to match totalDuration of combined Shot Moves
let ROUTE222 = browser.currentScene.createNode("ROUTE");
ROUTE222.fromField = "totalDuration";
ROUTE222.fromNode = "Camera.SimpleShotsTest";
ROUTE222.toField = "cycleInterval";
ROUTE222.toNode = "CameraTimer.SimpleShots";
Group220.children[1] = ROUTE222;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
let ROUTE223 = browser.currentScene.createNode("ROUTE");
ROUTE223.fromField = "fraction_changed";
ROUTE223.fromNode = "CameraTimer.SimpleShots";
ROUTE223.toField = "set_fraction";
ROUTE223.toNode = "Camera.SimpleShotsTest";
Group220.children[2] = ROUTE223;

let Transform224 = browser.currentScene.createNode("Transform");
Transform224.DEF = "Trigger.SimpleShots";
Transform224.translation = new SFVec3f(new float[-4,4,0]);
let BooleanFilter225 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter225.DEF = "TextTouchActive.SimpleShotsFilter";
Transform224.children = new MFNode();

Transform224.children[0] = BooleanFilter225;

let TouchSensor226 = browser.currentScene.createNode("TouchSensor");
TouchSensor226.DEF = "TextTouch.SimpleShots";
TouchSensor226.description = "touch to animate Camera SimpleShotsTest";
Transform224.children[1] = TouchSensor226;

let ROUTE227 = browser.currentScene.createNode("ROUTE");
ROUTE227.fromField = "inputTrue";
ROUTE227.fromNode = "TextTouchActive.SimpleShotsFilter";
ROUTE227.toField = "set_bind";
ROUTE227.toNode = "Camera.SimpleShotsTest";
Transform224.children[2] = ROUTE227;

let ROUTE228 = browser.currentScene.createNode("ROUTE");
ROUTE228.fromField = "isActive";
ROUTE228.fromNode = "TextTouch.SimpleShots";
ROUTE228.toField = "set_boolean";
ROUTE228.toNode = "TextTouchActive.SimpleShotsFilter";
Transform224.children[3] = ROUTE228;

let ROUTE229 = browser.currentScene.createNode("ROUTE");
ROUTE229.fromField = "touchTime";
ROUTE229.fromNode = "TextTouch.SimpleShots";
ROUTE229.toField = "startTime";
ROUTE229.toNode = "CameraTimer.SimpleShots";
Transform224.children[4] = ROUTE229;

let Shape230 = browser.currentScene.createNode("Shape");
let Text231 = browser.currentScene.createNode("Text");
Text231.string = new MFString(new java.lang.String["Click to animate","SimpleShotsTest"]);
let FontStyle232 = browser.currentScene.createNode("FontStyle");
FontStyle232.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text231.fontStyle = FontStyle232;

Shape230.geometry = Text231;

let Appearance233 = browser.currentScene.createNode("Appearance");
let Material234 = browser.currentScene.createNode("Material");
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
let Shape235 = browser.currentScene.createNode("Shape");
Shape235.DEF = "TransparentBox";
let Appearance236 = browser.currentScene.createNode("Appearance");
let Material237 = browser.currentScene.createNode("Material");
Material237.transparency = 1;
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

let Box238 = browser.currentScene.createNode("Box");
Box238.size = new SFVec3f(new float[6,2,0.0001]);
Shape235.geometry = Box238;

Transform224.children[6] = Shape235;

Group220.children[3] = Transform224;

browser.currentScene.children[10] = Group220;

let Group239 = browser.currentScene.createNode("Group");
Group239.DEF = "SimpleShotsTargets";
let Transform240 = browser.currentScene.createNode("Transform");
Transform240.DEF = "TargetBoxZoom";
Transform240.translation = new SFVec3f(new float[-50,1,-20]);
let Shape241 = browser.currentScene.createNode("Shape");
let Box242 = browser.currentScene.createNode("Box");
Shape241.geometry = Box242;

let Appearance243 = browser.currentScene.createNode("Appearance");
let Material244 = browser.currentScene.createNode("Material");
Appearance243.material = Material244;

let ImageTexture245 = browser.currentScene.createNode("ImageTexture");
ImageTexture245.url = new MFString(new java.lang.String["images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"]);
Appearance243.texture = ImageTexture245;

Shape241.appearance = Appearance243;

Transform240.children = new MFNode();

Transform240.children[0] = Shape241;

let Transform246 = browser.currentScene.createNode("Transform");
Transform246.translation = new SFVec3f(new float[0,2,0]);
let Shape247 = browser.currentScene.createNode("Shape");
let Text248 = browser.currentScene.createNode("Text");
Text248.string = new MFString(new java.lang.String["Zoom in, out"]);
let FontStyle249 = browser.currentScene.createNode("FontStyle");
FontStyle249.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text248.fontStyle = FontStyle249;

Shape247.geometry = Text248;

let Appearance250 = browser.currentScene.createNode("Appearance");
let Material251 = browser.currentScene.createNode("Material");
Appearance250.material = Material251;

Shape247.appearance = Appearance250;

Transform246.children = new MFNode();

Transform246.children[0] = Shape247;

Transform240.children[1] = Transform246;

Group239.children = new MFNode();

Group239.children[0] = Transform240;

let Transform252 = browser.currentScene.createNode("Transform");
Transform252.DEF = "TargetBoxDolly";
Transform252.translation = new SFVec3f(new float[-40,1,-20]);
let Shape253 = browser.currentScene.createNode("Shape");
let Box254 = browser.currentScene.createNode("Box");
Shape253.geometry = Box254;

let Appearance255 = browser.currentScene.createNode("Appearance");
let Material256 = browser.currentScene.createNode("Material");
Appearance255.material = Material256;

let ImageTexture257 = browser.currentScene.createNode("ImageTexture");
ImageTexture257.url = new MFString(new java.lang.String["images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"]);
Appearance255.texture = ImageTexture257;

Shape253.appearance = Appearance255;

Transform252.children = new MFNode();

Transform252.children[0] = Shape253;

let Transform258 = browser.currentScene.createNode("Transform");
Transform258.translation = new SFVec3f(new float[0,2,0]);
let Shape259 = browser.currentScene.createNode("Shape");
let Text260 = browser.currentScene.createNode("Text");
Text260.string = new MFString(new java.lang.String["Dolly left, right"]);
let FontStyle261 = browser.currentScene.createNode("FontStyle");
FontStyle261.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text260.fontStyle = FontStyle261;

Shape259.geometry = Text260;

let Appearance262 = browser.currentScene.createNode("Appearance");
let Material263 = browser.currentScene.createNode("Material");
Appearance262.material = Material263;

Shape259.appearance = Appearance262;

Transform258.children = new MFNode();

Transform258.children[0] = Shape259;

Transform252.children[1] = Transform258;

Group239.children[1] = Transform252;

let Transform264 = browser.currentScene.createNode("Transform");
Transform264.DEF = "TargetBoxPan";
Transform264.translation = new SFVec3f(new float[-30,1,-20]);
let Shape265 = browser.currentScene.createNode("Shape");
let Box266 = browser.currentScene.createNode("Box");
Shape265.geometry = Box266;

let Appearance267 = browser.currentScene.createNode("Appearance");
let Material268 = browser.currentScene.createNode("Material");
Appearance267.material = Material268;

let ImageTexture269 = browser.currentScene.createNode("ImageTexture");
ImageTexture269.url = new MFString(new java.lang.String["images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"]);
Appearance267.texture = ImageTexture269;

Shape265.appearance = Appearance267;

Transform264.children = new MFNode();

Transform264.children[0] = Shape265;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new SFVec3f(new float[0,2,0]);
let Shape271 = browser.currentScene.createNode("Shape");
let Text272 = browser.currentScene.createNode("Text");
Text272.string = new MFString(new java.lang.String["Pan left, right"]);
let FontStyle273 = browser.currentScene.createNode("FontStyle");
FontStyle273.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text272.fontStyle = FontStyle273;

Shape271.geometry = Text272;

let Appearance274 = browser.currentScene.createNode("Appearance");
let Material275 = browser.currentScene.createNode("Material");
Appearance274.material = Material275;

Shape271.appearance = Appearance274;

Transform270.children = new MFNode();

Transform270.children[0] = Shape271;

Transform264.children[1] = Transform270;

Group239.children[2] = Transform264;

let Transform276 = browser.currentScene.createNode("Transform");
Transform276.DEF = "TargetBoxBoom";
Transform276.translation = new SFVec3f(new float[-20,1,-20]);
let Shape277 = browser.currentScene.createNode("Shape");
let Box278 = browser.currentScene.createNode("Box");
Shape277.geometry = Box278;

let Appearance279 = browser.currentScene.createNode("Appearance");
let Material280 = browser.currentScene.createNode("Material");
Appearance279.material = Material280;

let ImageTexture281 = browser.currentScene.createNode("ImageTexture");
ImageTexture281.url = new MFString(new java.lang.String["images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"]);
Appearance279.texture = ImageTexture281;

Shape277.appearance = Appearance279;

Transform276.children = new MFNode();

Transform276.children[0] = Shape277;

let Transform282 = browser.currentScene.createNode("Transform");
Transform282.translation = new SFVec3f(new float[0,2,0]);
let Shape283 = browser.currentScene.createNode("Shape");
let Text284 = browser.currentScene.createNode("Text");
Text284.string = new MFString(new java.lang.String["Boom up, down"]);
let FontStyle285 = browser.currentScene.createNode("FontStyle");
FontStyle285.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text284.fontStyle = FontStyle285;

Shape283.geometry = Text284;

let Appearance286 = browser.currentScene.createNode("Appearance");
let Material287 = browser.currentScene.createNode("Material");
Appearance286.material = Material287;

Shape283.appearance = Appearance286;

Transform282.children = new MFNode();

Transform282.children[0] = Shape283;

Transform276.children[1] = Transform282;

Group239.children[3] = Transform276;

let Transform288 = browser.currentScene.createNode("Transform");
Transform288.DEF = "TargetBoxTilt";
Transform288.translation = new SFVec3f(new float[-10,1,-20]);
let Shape289 = browser.currentScene.createNode("Shape");
let Box290 = browser.currentScene.createNode("Box");
Shape289.geometry = Box290;

let Appearance291 = browser.currentScene.createNode("Appearance");
let Material292 = browser.currentScene.createNode("Material");
Appearance291.material = Material292;

let ImageTexture293 = browser.currentScene.createNode("ImageTexture");
ImageTexture293.url = new MFString(new java.lang.String["images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"]);
Appearance291.texture = ImageTexture293;

Shape289.appearance = Appearance291;

Transform288.children = new MFNode();

Transform288.children[0] = Shape289;

let Transform294 = browser.currentScene.createNode("Transform");
Transform294.translation = new SFVec3f(new float[0,2,0]);
let Shape295 = browser.currentScene.createNode("Shape");
let Text296 = browser.currentScene.createNode("Text");
Text296.string = new MFString(new java.lang.String["Tilt left, right"]);
let FontStyle297 = browser.currentScene.createNode("FontStyle");
FontStyle297.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text296.fontStyle = FontStyle297;

Shape295.geometry = Text296;

let Appearance298 = browser.currentScene.createNode("Appearance");
let Material299 = browser.currentScene.createNode("Material");
Appearance298.material = Material299;

Shape295.appearance = Appearance298;

Transform294.children = new MFNode();

Transform294.children[0] = Shape295;

Transform288.children[1] = Transform294;

Group239.children[4] = Transform288;

browser.currentScene.children[11] = Group239;

//=============== Camera.AimPointTest ==============
let ProtoInstance300 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance300.name = "Camera";
ProtoInstance300.DEF = "Camera.AimPointTest";
let fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "description";
fieldValue301.value = "AimPointTest for moving camera tracking moving target";
ProtoInstance300.fieldValue = new MFNode();

ProtoInstance300.fieldValue[0] = fieldValue301;

let fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "position";
fieldValue302.value = "4 4 10";
ProtoInstance300.fieldValue[1] = fieldValue302;

let fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "shots";
let ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "CameraShot";
ProtoInstance304.DEF = "Shot5";
let fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "description";
fieldValue305.value = "#3 Tracking shot";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

let fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "initialPosition";
fieldValue306.value = "6 6 10";
ProtoInstance304.fieldValue[1] = fieldValue306;

let fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "initialOrientation";
fieldValue307.value = "0 1 0 0";
ProtoInstance304.fieldValue[2] = fieldValue307;

let fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "moves";
let ProtoInstance309 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance309.name = "CameraMovement";
ProtoInstance309.DEF = "MoveAimPoint3.1";
let fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "description";
fieldValue310.value = "AimPoint 3.1 moving BoxPath";
ProtoInstance309.fieldValue = new MFNode();

ProtoInstance309.fieldValue[0] = fieldValue310;

let fieldValue311 = browser.currentScene.createNode("fieldValue");
fieldValue311.name = "tracking";
fieldValue311.value = "true";
ProtoInstance309.fieldValue[1] = fieldValue311;

let fieldValue312 = browser.currentScene.createNode("fieldValue");
fieldValue312.name = "duration";
fieldValue312.value = "8";
ProtoInstance309.fieldValue[2] = fieldValue312;

let fieldValue313 = browser.currentScene.createNode("fieldValue");
fieldValue313.name = "goalPosition";
fieldValue313.value = "6 6 10";
ProtoInstance309.fieldValue[3] = fieldValue313;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308.children = new MFNode();

fieldValue308.children[0] = ProtoInstance309;

let ProtoInstance314 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance314.name = "CameraMovement";
ProtoInstance314.DEF = "MoveAimPoint3.2";
let fieldValue315 = browser.currentScene.createNode("fieldValue");
fieldValue315.name = "description";
fieldValue315.value = "AimPoint 3.2 pan right while tracking";
ProtoInstance314.fieldValue = new MFNode();

ProtoInstance314.fieldValue[0] = fieldValue315;

let fieldValue316 = browser.currentScene.createNode("fieldValue");
fieldValue316.name = "tracking";
fieldValue316.value = "true";
ProtoInstance314.fieldValue[1] = fieldValue316;

let fieldValue317 = browser.currentScene.createNode("fieldValue");
fieldValue317.name = "duration";
fieldValue317.value = "8";
ProtoInstance314.fieldValue[2] = fieldValue317;

let fieldValue318 = browser.currentScene.createNode("fieldValue");
fieldValue318.name = "goalPosition";
fieldValue318.value = "40 6 12";
ProtoInstance314.fieldValue[3] = fieldValue318;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308.children[1] = ProtoInstance314;

let ProtoInstance319 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance319.name = "CameraMovement";
ProtoInstance319.DEF = "MoveAimPoint3.3";
let fieldValue320 = browser.currentScene.createNode("fieldValue");
fieldValue320.name = "description";
fieldValue320.value = "AimPoint 3.3 boom up while tracking";
ProtoInstance319.fieldValue = new MFNode();

ProtoInstance319.fieldValue[0] = fieldValue320;

let fieldValue321 = browser.currentScene.createNode("fieldValue");
fieldValue321.name = "tracking";
fieldValue321.value = "true";
ProtoInstance319.fieldValue[1] = fieldValue321;

let fieldValue322 = browser.currentScene.createNode("fieldValue");
fieldValue322.name = "duration";
fieldValue322.value = "3";
ProtoInstance319.fieldValue[2] = fieldValue322;

let fieldValue323 = browser.currentScene.createNode("fieldValue");
fieldValue323.name = "goalPosition";
fieldValue323.value = "40 20 13";
ProtoInstance319.fieldValue[3] = fieldValue323;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue308.children[2] = ProtoInstance319;

let ProtoInstance324 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance324.name = "CameraMovement";
ProtoInstance324.DEF = "MoveAimPoint3.4";
let fieldValue325 = browser.currentScene.createNode("fieldValue");
fieldValue325.name = "description";
fieldValue325.value = "AimPoint 3.4 restore camera back to home";
ProtoInstance324.fieldValue = new MFNode();

ProtoInstance324.fieldValue[0] = fieldValue325;

let fieldValue326 = browser.currentScene.createNode("fieldValue");
fieldValue326.name = "tracking";
fieldValue326.value = "true";
ProtoInstance324.fieldValue[1] = fieldValue326;

let fieldValue327 = browser.currentScene.createNode("fieldValue");
fieldValue327.name = "duration";
fieldValue327.value = "5";
ProtoInstance324.fieldValue[2] = fieldValue327;

let fieldValue328 = browser.currentScene.createNode("fieldValue");
fieldValue328.name = "goalPosition";
fieldValue328.value = "4 4 10";
ProtoInstance324.fieldValue[3] = fieldValue328;

let fieldValue329 = browser.currentScene.createNode("fieldValue");
fieldValue329.name = "goalAimPoint";
fieldValue329.value = "4 4 0";
ProtoInstance324.fieldValue[4] = fieldValue329;

let fieldValue330 = browser.currentScene.createNode("fieldValue");
fieldValue330.name = "goalOrientation";
fieldValue330.value = "0 1 0 0";
ProtoInstance324.fieldValue[5] = fieldValue330;

//can test tracking or not using these values
fieldValue308.children[3] = ProtoInstance324;

ProtoInstance304.fieldValue[3] = fieldValue308;

fieldValue303.children = new MFNode();

fieldValue303.children[0] = ProtoInstance304;

ProtoInstance300.fieldValue[2] = fieldValue303;

browser.currentScene.children[12] = ProtoInstance300;

let Group331 = browser.currentScene.createNode("Group");
Group331.DEF = "AnimationGroup.AimPointTest";
let TimeSensor332 = browser.currentScene.createNode("TimeSensor");
TimeSensor332.DEF = "CameraTimer.AimPointTest";
Group331.children = new MFNode();

Group331.children[0] = TimeSensor332;

//initialize clock to match totalDuration of combined Shot Moves
let ROUTE333 = browser.currentScene.createNode("ROUTE");
ROUTE333.fromField = "totalDuration";
ROUTE333.fromNode = "Camera.AimPointTest";
ROUTE333.toField = "cycleInterval";
ROUTE333.toNode = "CameraTimer.AimPointTest";
Group331.children[1] = ROUTE333;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
let ROUTE334 = browser.currentScene.createNode("ROUTE");
ROUTE334.fromField = "fraction_changed";
ROUTE334.fromNode = "CameraTimer.AimPointTest";
ROUTE334.toField = "set_fraction";
ROUTE334.toNode = "Camera.AimPointTest";
Group331.children[2] = ROUTE334;

let Transform335 = browser.currentScene.createNode("Transform");
Transform335.DEF = "Trigger.AimPointTest";
Transform335.translation = new SFVec3f(new float[4,4,0]);
let BooleanFilter336 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter336.DEF = "TextTouchActive.AimPointFilter";
Transform335.children = new MFNode();

Transform335.children[0] = BooleanFilter336;

let TouchSensor337 = browser.currentScene.createNode("TouchSensor");
TouchSensor337.DEF = "TextTouch.AimPointTest";
TouchSensor337.description = "touch to animate Camera AimPointTest";
Transform335.children[1] = TouchSensor337;

let ROUTE338 = browser.currentScene.createNode("ROUTE");
ROUTE338.fromField = "inputTrue";
ROUTE338.fromNode = "TextTouchActive.AimPointFilter";
ROUTE338.toField = "set_bind";
ROUTE338.toNode = "Camera.AimPointTest";
Transform335.children[2] = ROUTE338;

let ROUTE339 = browser.currentScene.createNode("ROUTE");
ROUTE339.fromField = "isActive";
ROUTE339.fromNode = "TextTouch.AimPointTest";
ROUTE339.toField = "set_boolean";
ROUTE339.toNode = "TextTouchActive.AimPointFilter";
Transform335.children[3] = ROUTE339;

let ROUTE340 = browser.currentScene.createNode("ROUTE");
ROUTE340.fromField = "touchTime";
ROUTE340.fromNode = "TextTouch.AimPointTest";
ROUTE340.toField = "startTime";
ROUTE340.toNode = "CameraTimer.AimPointTest";
Transform335.children[4] = ROUTE340;

let Shape341 = browser.currentScene.createNode("Shape");
let Text342 = browser.currentScene.createNode("Text");
Text342.string = new MFString(new java.lang.String["Click to animate","AimPointTest"]);
let FontStyle343 = browser.currentScene.createNode("FontStyle");
FontStyle343.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text342.fontStyle = FontStyle343;

Shape341.geometry = Text342;

let Appearance344 = browser.currentScene.createNode("Appearance");
let Material345 = browser.currentScene.createNode("Material");
Material345.USE = "ArtDeco5";
Appearance344.material = Material345;

Shape341.appearance = Appearance344;

Transform335.children[5] = Shape341;

let Shape346 = browser.currentScene.createNode("Shape");
Shape346.USE = "TransparentBox";
Transform335.children[6] = Shape346;

Group331.children[3] = Transform335;

browser.currentScene.children[13] = Group331;

//TODO build a test once implemented
let ProtoInstance347 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance347.name = "OfflineRender";
browser.currentScene.children[14] = ProtoInstance347;

//=============== animate a camera shape to visualize view changes ==============
let Transform348 = browser.currentScene.createNode("Transform");
Transform348.DEF = "CameraShapeTransform";
Transform348.translation = new SFVec3f(new float[0,0.5,0]);
//move CameraShape using active Camera
let ROUTE349 = browser.currentScene.createNode("ROUTE");
ROUTE349.fromField = "position_changed";
ROUTE349.fromNode = "Camera.SimpleShotsTest";
ROUTE349.toField = "translation";
ROUTE349.toNode = "CameraShapeTransform";
Transform348.children = new MFNode();

Transform348.children[0] = ROUTE349;

let ROUTE350 = browser.currentScene.createNode("ROUTE");
ROUTE350.fromField = "orientation_changed";
ROUTE350.fromNode = "Camera.SimpleShotsTest";
ROUTE350.toField = "rotation";
ROUTE350.toNode = "CameraShapeTransform";
Transform348.children[1] = ROUTE350;

let ROUTE351 = browser.currentScene.createNode("ROUTE");
ROUTE351.fromField = "position";
ROUTE351.fromNode = "Camera.AimPointTest";
ROUTE351.toField = "translation";
ROUTE351.toNode = "CameraShapeTransform";
Transform348.children[2] = ROUTE351;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromField = "orientation_changed";
ROUTE352.fromNode = "Camera.AimPointTest";
ROUTE352.toField = "rotation";
ROUTE352.toNode = "CameraShapeTransform";
Transform348.children[3] = ROUTE352;

let Transform353 = browser.currentScene.createNode("Transform");
Transform353.DEF = "CameraOffsetTransform";
Transform353.translation = new SFVec3f(new float[0,0,0.25]);
let TouchSensor354 = browser.currentScene.createNode("TouchSensor");
TouchSensor354.DEF = "CameraShapeTouched";
Transform353.children = new MFNode();

Transform353.children[0] = TouchSensor354;

let Inline355 = browser.currentScene.createNode("Inline");
Inline355.DEF = "CameraShape";
Inline355.url = new MFString(new java.lang.String["CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"]);
Transform353.children[1] = Inline355;

let Shape356 = browser.currentScene.createNode("Shape");
Shape356.DEF = "SightLine";
let IndexedLineSet357 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet357.coordIndex = new MFInt32(new int[0,1]);
let Coordinate358 = browser.currentScene.createNode("Coordinate");
Coordinate358.point = new MFVec3f(new float[0,0,0,0,0,-100]);
IndexedLineSet357.coord = Coordinate358;

Shape356.geometry = IndexedLineSet357;

let Appearance359 = browser.currentScene.createNode("Appearance");
let Material360 = browser.currentScene.createNode("Material");
Material360.emissiveColor = new SFColor(new float[0.8,0.8,0.4]);
Appearance359.material = Material360;

Shape356.appearance = Appearance359;

Transform353.children[2] = Shape356;

Transform348.children[4] = Transform353;

//Display frustum to show camera view within the scene, toggled by user selecting CameraShape
let ExternProtoDeclare361 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare361.name = "ViewFrustum";
ExternProtoDeclare361.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare361.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"]);
let field362 = browser.currentScene.createNode("field");
field362.name = "ViewpointNode";
field362.accessType = "initializeOnly";
field362.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field362.type = "SFNode";
ExternProtoDeclare361.field = new MFNode();

ExternProtoDeclare361.field[0] = field362;

let field363 = browser.currentScene.createNode("field");
field363.name = "NavigationInfoNode";
field363.accessType = "initializeOnly";
field363.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field363.type = "SFNode";
ExternProtoDeclare361.field[1] = field363;

let field364 = browser.currentScene.createNode("field");
field364.name = "visible";
field364.accessType = "inputOutput";
field364.appinfo = "whether or not frustum geometry is rendered";
field364.type = "SFBool";
ExternProtoDeclare361.field[2] = field364;

let field365 = browser.currentScene.createNode("field");
field365.name = "lineColor";
field365.accessType = "inputOutput";
field365.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field365.type = "SFColor";
ExternProtoDeclare361.field[3] = field365;

let field366 = browser.currentScene.createNode("field");
field366.name = "frustumColor";
field366.accessType = "inputOutput";
field366.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field366.type = "SFColor";
ExternProtoDeclare361.field[4] = field366;

let field367 = browser.currentScene.createNode("field");
field367.name = "transparency";
field367.accessType = "inputOutput";
field367.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field367.type = "SFFloat";
ExternProtoDeclare361.field[5] = field367;

let field368 = browser.currentScene.createNode("field");
field368.name = "aspectRatio";
field368.accessType = "inputOutput";
field368.appinfo = "assumed ratio height/width, default value 0.75";
field368.type = "SFFloat";
ExternProtoDeclare361.field[6] = field368;

let field369 = browser.currentScene.createNode("field");
field369.name = "trace";
field369.accessType = "initializeOnly";
field369.appinfo = "debug support, default false";
field369.type = "SFBool";
ExternProtoDeclare361.field[7] = field369;

Transform348.children[5] = ExternProtoDeclare361;

let ProtoInstance370 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance370.name = "ViewFrustum";
ProtoInstance370.DEF = "ViewFrustumNode";
let fieldValue371 = browser.currentScene.createNode("fieldValue");
fieldValue371.name = "ViewpointNode";
let Viewpoint372 = browser.currentScene.createNode("Viewpoint");
Viewpoint372.DEF = "FrustumViewpoint";
Viewpoint372.description = "viewpoint for ViewFrustum";
Viewpoint372.position = new SFVec3f(new float[0,0,0]);
fieldValue371.children = new MFNode();

fieldValue371.children[0] = Viewpoint372;

ProtoInstance370.fieldValue = new MFNode();

ProtoInstance370.fieldValue[0] = fieldValue371;

let fieldValue373 = browser.currentScene.createNode("fieldValue");
fieldValue373.name = "NavigationInfoNode";
let NavigationInfo374 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo374.DEF = "TestNavigationInfo";
NavigationInfo374.transitionType = new MFString(new java.lang.String["ANIMATE"]);
NavigationInfo374.visibilityLimit = 100;
fieldValue373.children = new MFNode();

fieldValue373.children[0] = NavigationInfo374;

ProtoInstance370.fieldValue[1] = fieldValue373;

let fieldValue375 = browser.currentScene.createNode("fieldValue");
fieldValue375.name = "visible";
fieldValue375.value = "false";
ProtoInstance370.fieldValue[2] = fieldValue375;

let fieldValue376 = browser.currentScene.createNode("fieldValue");
fieldValue376.name = "lineColor";
fieldValue376.value = "0.9 0.9 0.9";
ProtoInstance370.fieldValue[3] = fieldValue376;

let fieldValue377 = browser.currentScene.createNode("fieldValue");
fieldValue377.name = "frustumColor";
fieldValue377.value = "0.8 0.8 0.8";
ProtoInstance370.fieldValue[4] = fieldValue377;

let fieldValue378 = browser.currentScene.createNode("fieldValue");
fieldValue378.name = "transparency";
fieldValue378.value = "0.95";
ProtoInstance370.fieldValue[5] = fieldValue378;

Transform348.children[6] = ProtoInstance370;

let BooleanToggle379 = browser.currentScene.createNode("BooleanToggle");
BooleanToggle379.DEF = "ViewFrustumToggle";
Transform348.children[7] = BooleanToggle379;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromField = "isActive";
ROUTE380.fromNode = "CameraShapeTouched";
ROUTE380.toField = "set_boolean";
ROUTE380.toNode = "ViewFrustumToggle";
Transform348.children[8] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromField = "toggle";
ROUTE381.fromNode = "ViewFrustumToggle";
ROUTE381.toField = "set_visible";
ROUTE381.toNode = "ViewFrustumNode";
Transform348.children[9] = ROUTE381;

browser.currentScene.children[15] = Transform348;

//=============== add checkerboard, axes and other things to look at while animating ==============
let Background382 = browser.currentScene.createNode("Background");
Background382.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[16] = Background382;

let Transform383 = browser.currentScene.createNode("Transform");
Transform383.rotation = new SFRotation(new float[1,0,0,-1.57079]);
Transform383.scale = new SFVec3f(new float[10,10,10]);
let Shape384 = browser.currentScene.createNode("Shape");
let Appearance385 = browser.currentScene.createNode("Appearance");
let Material386 = browser.currentScene.createNode("Material");
Material386.ambientIntensity = 0.01;
Material386.diffuseColor = new SFColor(new float[1,1,1]);
Material386.shininess = 0.05;
Appearance385.material = Material386;

Shape384.appearance = Appearance385;

let IndexedFaceSet387 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet387.colorIndex = new MFInt32(new int[0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0]);
IndexedFaceSet387.colorPerVertex = False;
IndexedFaceSet387.coordIndex = new MFInt32(new int[0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]);
IndexedFaceSet387.normalPerVertex = False;
IndexedFaceSet387.solid = False;
let Coordinate388 = browser.currentScene.createNode("Coordinate");
Coordinate388.point = new MFVec3f(new float[-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0]);
IndexedFaceSet387.coord = Coordinate388;

let Color389 = browser.currentScene.createNode("Color");
Color389.color = new MFColor(new float[0.435294,0.741176,0,0,0.560784,0.580392]);
IndexedFaceSet387.color = Color389;

Shape384.geometry = IndexedFaceSet387;

Transform383.children = new MFNode();

Transform383.children[0] = Shape384;

browser.currentScene.children[17] = Transform383;

let Transform390 = browser.currentScene.createNode("Transform");
Transform390.scale = new SFVec3f(new float[3,3,3]);
Transform390.translation = new SFVec3f(new float[0,0.25,0]);
let Inline391 = browser.currentScene.createNode("Inline");
Inline391.DEF = "CoordinateAxes";
Inline391.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform390.children = new MFNode();

Transform390.children[0] = Inline391;

browser.currentScene.children[18] = Transform390;

let Transform392 = browser.currentScene.createNode("Transform");
Transform392.DEF = "MovingBoxTransform";
let PositionInterpolator393 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator393.DEF = "BoxPath";
PositionInterpolator393.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator393.keyValue = new MFVec3f(new float[-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5]);
Transform392.children = new MFNode();

Transform392.children[0] = PositionInterpolator393;

let TimeSensor394 = browser.currentScene.createNode("TimeSensor");
TimeSensor394.DEF = "BoxTimer";
TimeSensor394.cycleInterval = 10;
TimeSensor394.loop = True;
Transform392.children[1] = TimeSensor394;

let ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromField = "value_changed";
ROUTE395.fromNode = "BoxPath";
ROUTE395.toField = "translation";
ROUTE395.toNode = "MovingBoxTransform";
Transform392.children[2] = ROUTE395;

let ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromField = "value_changed";
ROUTE396.fromNode = "BoxPath";
ROUTE396.toField = "goalAimPoint";
ROUTE396.toNode = "MoveAimPoint3.1";
Transform392.children[3] = ROUTE396;

let ROUTE397 = browser.currentScene.createNode("ROUTE");
ROUTE397.fromField = "value_changed";
ROUTE397.fromNode = "BoxPath";
ROUTE397.toField = "goalAimPoint";
ROUTE397.toNode = "MoveAimPoint3.2";
Transform392.children[4] = ROUTE397;

let ROUTE398 = browser.currentScene.createNode("ROUTE");
ROUTE398.fromField = "value_changed";
ROUTE398.fromNode = "BoxPath";
ROUTE398.toField = "goalAimPoint";
ROUTE398.toNode = "MoveAimPoint3.3";
Transform392.children[5] = ROUTE398;

let ROUTE399 = browser.currentScene.createNode("ROUTE");
ROUTE399.fromField = "fraction_changed";
ROUTE399.fromNode = "BoxTimer";
ROUTE399.toField = "set_fraction";
ROUTE399.toNode = "BoxPath";
Transform392.children[6] = ROUTE399;

let Shape400 = browser.currentScene.createNode("Shape");
let Box401 = browser.currentScene.createNode("Box");
Shape400.geometry = Box401;

let Appearance402 = browser.currentScene.createNode("Appearance");
let Material403 = browser.currentScene.createNode("Material");
Appearance402.material = Material403;

let ImageTexture404 = browser.currentScene.createNode("ImageTexture");
ImageTexture404.url = new MFString(new java.lang.String["../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"]);
Appearance402.texture = ImageTexture404;

Shape400.appearance = Appearance402;

Transform392.children[7] = Shape400;

browser.currentScene.children[19] = Transform392;

//================ CrossHair visualization for center of screen ================
let ExternProtoDeclare405 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare405.name = "CrossHair";
ExternProtoDeclare405.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point";
ExternProtoDeclare405.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]);
let field406 = browser.currentScene.createNode("field");
field406.name = "enabled";
field406.accessType = "initializeOnly";
field406.appinfo = "whether CrissHair orititype is enabled or not";
field406.type = "SFBool";
ExternProtoDeclare405.field = new MFNode();

ExternProtoDeclare405.field[0] = field406;

let field407 = browser.currentScene.createNode("field");
field407.name = "set_enabled";
field407.accessType = "inputOnly";
field407.appinfo = "control whether enabled/disabled";
field407.type = "SFBool";
ExternProtoDeclare405.field[1] = field407;

let field408 = browser.currentScene.createNode("field");
field408.name = "markerColor";
field408.accessType = "inputOutput";
field408.appinfo = "color of CrossHair marker";
field408.type = "SFColor";
ExternProtoDeclare405.field[2] = field408;

let field409 = browser.currentScene.createNode("field");
field409.name = "scale";
field409.accessType = "inputOutput";
field409.appinfo = "size of CrossHair in meters";
field409.type = "SFVec3f";
ExternProtoDeclare405.field[3] = field409;

let field410 = browser.currentScene.createNode("field");
field410.name = "positionOffsetFromCamera";
field410.accessType = "inputOutput";
field410.appinfo = "distance in front of HUD viewpoint";
field410.type = "SFVec3f";
ExternProtoDeclare405.field[4] = field410;

browser.currentScene.children[20] = ExternProtoDeclare405;

let ProtoInstance411 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance411.name = "CrossHair";
ProtoInstance411.DEF = "CrossHairInstance";
let fieldValue412 = browser.currentScene.createNode("fieldValue");
fieldValue412.name = "enabled";
fieldValue412.value = "true";
ProtoInstance411.fieldValue = new MFNode();

ProtoInstance411.fieldValue[0] = fieldValue412;

let fieldValue413 = browser.currentScene.createNode("fieldValue");
fieldValue413.name = "markerColor";
fieldValue413.value = "1 0.5 0";
ProtoInstance411.fieldValue[1] = fieldValue413;

let fieldValue414 = browser.currentScene.createNode("fieldValue");
fieldValue414.name = "scale";
fieldValue414.value = "1 1 1";
ProtoInstance411.fieldValue[2] = fieldValue414;

let fieldValue415 = browser.currentScene.createNode("fieldValue");
fieldValue415.name = "positionOffsetFromCamera";
fieldValue415.value = "0 0 -6";
ProtoInstance411.fieldValue[3] = fieldValue415;

browser.currentScene.children[21] = ProtoInstance411;

//turn on CrossHairInstance when animated camera viewpoints are bound
let ROUTE416 = browser.currentScene.createNode("ROUTE");
ROUTE416.fromField = "isBound";
ROUTE416.fromNode = "Camera.SimpleShotsTest";
ROUTE416.toField = "set_enabled";
ROUTE416.toNode = "CrossHairInstance";
browser.currentScene.children[22] = ROUTE416;

let ROUTE417 = browser.currentScene.createNode("ROUTE");
ROUTE417.fromField = "isBound";
ROUTE417.fromNode = "Camera.AimPointTest";
ROUTE417.toField = "set_enabled";
ROUTE417.toNode = "CrossHairInstance";
browser.currentScene.children[23] = ROUTE417;

//turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>
//=============== TODO Launch Prototype Example ==============
let Anchor418 = browser.currentScene.createNode("Anchor");
Anchor418.description = "launch CameraExample scene";
Anchor418.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor418.url = new MFString(new java.lang.String["CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"]);
let Transform419 = browser.currentScene.createNode("Transform");
Transform419.translation = new SFVec3f(new float[0,-3,0]);
let Shape420 = browser.currentScene.createNode("Shape");
let Text421 = browser.currentScene.createNode("Text");
Text421.string = new MFString(new java.lang.String["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"]);
let FontStyle422 = browser.currentScene.createNode("FontStyle");
FontStyle422.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle422.size = 0.5;
Text421.fontStyle = FontStyle422;

Shape420.geometry = Text421;

let Appearance423 = browser.currentScene.createNode("Appearance");
let Material424 = browser.currentScene.createNode("Material");
Material424.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance423.material = Material424;

Shape420.appearance = Appearance423;

Transform419.children = new MFNode();

Transform419.children[0] = Shape420;

Anchor418.children = new MFNode();

Anchor418.children[0] = Transform419;

browser.currentScene.children[24] = Anchor418;

