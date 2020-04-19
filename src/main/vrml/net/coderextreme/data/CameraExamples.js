var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//=============== Camera ==============
ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "Camera";
ExternProtoDeclare2.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images";
ExternProtoDeclare2.url = ["CameraPrototypes.x3d#Camera","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"];
//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
field3 = browser.currentScene.createNode("field");
field3.name = "description";
field3.accessType = "inputOutput";
field3.appinfo = "Text description to be displayed for this Camera";
field3.type = "SFString";
ExternProtoDeclare2.field = [];

ExternProtoDeclare2.field[0] = field3;

field4 = browser.currentScene.createNode("field");
field4.name = "position";
field4.accessType = "inputOutput";
field4.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field4.type = "SFVec3f";
ExternProtoDeclare2.field[1] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "orientation";
field5.accessType = "inputOutput";
field5.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field5.type = "SFRotation";
ExternProtoDeclare2.field[2] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "fieldOfView";
field6.accessType = "inputOutput";
field6.appinfo = "pi/4";
field6.type = "SFFloat";
ExternProtoDeclare2.field[3] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "set_fraction";
field7.accessType = "inputOnly";
field7.appinfo = "input fraction drives interpolators";
field7.type = "SFFloat";
ExternProtoDeclare2.field[4] = field7;

field8 = browser.currentScene.createNode("field");
field8.name = "set_bind";
field8.accessType = "inputOnly";
field8.appinfo = "input event binds or unbinds this Camera";
field8.type = "SFBool";
ExternProtoDeclare2.field[5] = field8;

field9 = browser.currentScene.createNode("field");
field9.name = "bindTime";
field9.accessType = "outputOnly";
field9.appinfo = "output event indicates when this Camera is bound";
field9.type = "SFTime";
ExternProtoDeclare2.field[6] = field9;

field10 = browser.currentScene.createNode("field");
field10.name = "isBound";
field10.accessType = "outputOnly";
field10.appinfo = "output event indicates whether this Camera is bound or unbound";
field10.type = "SFBool";
ExternProtoDeclare2.field[7] = field10;

field11 = browser.currentScene.createNode("field");
field11.name = "nearClipPlane";
field11.accessType = "inputOutput";
field11.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field11.type = "SFFloat";
ExternProtoDeclare2.field[8] = field11;

field12 = browser.currentScene.createNode("field");
field12.name = "farClipPlane";
field12.accessType = "inputOutput";
field12.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field12.type = "SFFloat";
ExternProtoDeclare2.field[9] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "shots";
field13.accessType = "inputOutput";
field13.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field13.type = "MFNode";
ExternProtoDeclare2.field[10] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "headlight";
field14.accessType = "inputOutput";
field14.appinfo = "Whether camera headlight is on or off";
field14.type = "SFBool";
ExternProtoDeclare2.field[11] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "headlightColor";
field15.accessType = "inputOutput";
field15.appinfo = "Camera headlight color";
field15.type = "SFColor";
ExternProtoDeclare2.field[12] = field15;

field16 = browser.currentScene.createNode("field");
field16.name = "headlightIntensity";
field16.accessType = "inputOutput";
field16.appinfo = "Camera headlight intensity";
field16.type = "SFFloat";
ExternProtoDeclare2.field[13] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "filterColor";
field17.accessType = "inputOutput";
field17.appinfo = "Camera filter color that modifies virtual lens capture";
field17.type = "SFColor";
ExternProtoDeclare2.field[14] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "filterTransparency";
field18.accessType = "inputOutput";
field18.appinfo = "Camera filter transparency that modifies virtual lens capture";
field18.type = "SFFloat";
ExternProtoDeclare2.field[15] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "upVector";
field19.accessType = "inputOutput";
field19.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field19.type = "SFVec3f";
ExternProtoDeclare2.field[16] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "fStop";
field20.accessType = "inputOutput";
field20.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field20.type = "SFFloat";
ExternProtoDeclare2.field[17] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "focusDistance";
field21.accessType = "inputOutput";
field21.appinfo = "Distance to focal plane of sharpest focus";
field21.type = "SFFloat";
ExternProtoDeclare2.field[18] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "isActive";
field22.accessType = "outputOnly";
field22.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field22.type = "SFBool";
ExternProtoDeclare2.field[19] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "totalDuration";
field23.accessType = "outputOnly";
field23.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field23.type = "SFTime";
ExternProtoDeclare2.field[20] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "offlineRender";
field24.accessType = "inputOutput";
field24.appinfo = "OfflineRender node";
field24.type = "SFNode";
ExternProtoDeclare2.field[21] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "traceEnabled";
field25.accessType = "initializeOnly";
field25.appinfo = "enable console output to trace script computations and prototype progress";
field25.type = "SFBool";
ExternProtoDeclare2.field[22] = field25;

browser.currentScene.children = [];

browser.currentScene.children[0] = ExternProtoDeclare2;

//=============== CameraShot ==============
ExternProtoDeclare26 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare26.name = "CameraShot";
ExternProtoDeclare26.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot";
ExternProtoDeclare26.url = ["CameraPrototypes.x3d#CameraShot","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"];
field27 = browser.currentScene.createNode("field");
field27.name = "description";
field27.accessType = "inputOutput";
field27.appinfo = "Text description to be displayed for this CameraShot";
field27.type = "SFString";
ExternProtoDeclare26.field = [];

ExternProtoDeclare26.field[0] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "enabled";
field28.accessType = "inputOutput";
field28.appinfo = "Whether this CameraShot can be activated";
field28.type = "SFBool";
ExternProtoDeclare26.field[1] = field28;

field29 = browser.currentScene.createNode("field");
field29.name = "moves";
field29.accessType = "inputOutput";
field29.appinfo = "Set of CameraMovement nodes";
field29.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ExternProtoDeclare26.field[2] = field29;

field30 = browser.currentScene.createNode("field");
field30.name = "initialPosition";
field30.accessType = "inputOutput";
field30.appinfo = "Setup to reinitialize camera position for this shot";
field30.type = "SFVec3f";
ExternProtoDeclare26.field[3] = field30;

field31 = browser.currentScene.createNode("field");
field31.name = "initialOrientation";
field31.accessType = "inputOutput";
field31.appinfo = "Setup to reinitialize camera rotation for this shot";
field31.type = "SFRotation";
ExternProtoDeclare26.field[4] = field31;

field32 = browser.currentScene.createNode("field");
field32.name = "initialAimPoint";
field32.accessType = "inputOutput";
field32.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field32.type = "SFVec3f";
ExternProtoDeclare26.field[5] = field32;

field33 = browser.currentScene.createNode("field");
field33.name = "initialFieldOfView";
field33.accessType = "inputOutput";
field33.appinfo = "pi/4";
field33.type = "SFFloat";
ExternProtoDeclare26.field[6] = field33;

field34 = browser.currentScene.createNode("field");
field34.name = "initialFStop";
field34.accessType = "inputOutput";
field34.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field34.type = "SFFloat";
ExternProtoDeclare26.field[7] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "initialFocusDistance";
field35.accessType = "inputOutput";
field35.appinfo = "Distance to focal plane of sharpest focus";
field35.type = "SFFloat";
ExternProtoDeclare26.field[8] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "shotDuration";
field36.accessType = "outputOnly";
field36.appinfo = "Subtotal duration of contained CameraMovement move durations";
field36.type = "SFTime";
ExternProtoDeclare26.field[9] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "isActive";
field37.accessType = "outputOnly";
field37.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field37.type = "SFBool";
ExternProtoDeclare26.field[10] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "traceEnabled";
field38.accessType = "initializeOnly";
field38.appinfo = "enable console output to trace script computations and prototype progress";
field38.type = "SFBool";
ExternProtoDeclare26.field[11] = field38;

browser.currentScene.children[1] = ExternProtoDeclare26;

//=============== CameraMovement ==============
ExternProtoDeclare39 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare39.name = "CameraMovement";
ExternProtoDeclare39.appinfo = "CameraMovement defines a single camera movement animation";
ExternProtoDeclare39.url = ["CameraPrototypes.x3d#CameraMovement","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"];
field40 = browser.currentScene.createNode("field");
field40.name = "description";
field40.accessType = "inputOutput";
field40.appinfo = "Text description to be displayed for this CameraMovement";
field40.type = "SFString";
ExternProtoDeclare39.field = [];

ExternProtoDeclare39.field[0] = field40;

field41 = browser.currentScene.createNode("field");
field41.name = "enabled";
field41.accessType = "inputOutput";
field41.appinfo = "Whether this CameraMovement can be activated";
field41.type = "SFBool";
ExternProtoDeclare39.field[1] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "duration";
field42.accessType = "inputOutput";
field42.appinfo = "Duration in seconds for this move";
field42.type = "SFFloat";
ExternProtoDeclare39.field[2] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "goalPosition";
field43.accessType = "inputOutput";
field43.appinfo = "Goal camera position for this move";
field43.type = "SFVec3f";
ExternProtoDeclare39.field[3] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "goalOrientation";
field44.accessType = "inputOutput";
field44.appinfo = "Goal camera rotation for this move";
field44.type = "SFRotation";
ExternProtoDeclare39.field[4] = field44;

field45 = browser.currentScene.createNode("field");
field45.name = "tracking";
field45.accessType = "inputOutput";
field45.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field45.type = "SFBool";
ExternProtoDeclare39.field[5] = field45;

field46 = browser.currentScene.createNode("field");
field46.name = "goalAimPoint";
field46.accessType = "inputOutput";
field46.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field46.type = "SFVec3f";
ExternProtoDeclare39.field[6] = field46;

field47 = browser.currentScene.createNode("field");
field47.name = "goalFieldOfView";
field47.accessType = "inputOutput";
field47.appinfo = "Goal fieldOfView for this move";
field47.type = "SFFloat";
ExternProtoDeclare39.field[7] = field47;

field48 = browser.currentScene.createNode("field");
field48.name = "goalFStop";
field48.accessType = "inputOutput";
field48.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field48.type = "SFFloat";
ExternProtoDeclare39.field[8] = field48;

field49 = browser.currentScene.createNode("field");
field49.name = "goalFocusDistance";
field49.accessType = "inputOutput";
field49.appinfo = "Distance to focal plane of sharpest focus";
field49.type = "SFFloat";
ExternProtoDeclare39.field[9] = field49;

field50 = browser.currentScene.createNode("field");
field50.name = "isActive";
field50.accessType = "outputOnly";
field50.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field50.type = "SFBool";
ExternProtoDeclare39.field[10] = field50;

field51 = browser.currentScene.createNode("field");
field51.name = "traceEnabled";
field51.accessType = "initializeOnly";
field51.appinfo = "enable console output to trace script computations and prototype progress";
field51.type = "SFBool";
ExternProtoDeclare39.field[11] = field51;

browser.currentScene.children[2] = ExternProtoDeclare39;

//=============== OfflineRender ==============
ExternProtoDeclare52 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare52.name = "OfflineRender";
ExternProtoDeclare52.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)";
ExternProtoDeclare52.url = ["CameraPrototypes.x3d#OfflineRender","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"];
//TODO non-photorealistic rendering (NPR) parameters
field53 = browser.currentScene.createNode("field");
field53.name = "description";
field53.accessType = "inputOutput";
field53.appinfo = "Text description to be displayed for this OfflineRender";
field53.type = "SFString";
ExternProtoDeclare52.field = [];

ExternProtoDeclare52.field[0] = field53;

field54 = browser.currentScene.createNode("field");
field54.name = "enabled";
field54.accessType = "inputOutput";
field54.appinfo = "Whether this OfflineRender can be activated";
field54.type = "SFBool";
ExternProtoDeclare52.field[1] = field54;

field55 = browser.currentScene.createNode("field");
field55.name = "frameRate";
field55.accessType = "inputOutput";
field55.appinfo = "Frames per second recorded for this rendering";
field55.type = "SFFloat";
ExternProtoDeclare52.field[2] = field55;

field56 = browser.currentScene.createNode("field");
field56.name = "frameSize";
field56.accessType = "inputOutput";
field56.appinfo = "Size of frame in number of pixels width and height";
field56.type = "SFVec2f";
ExternProtoDeclare52.field[3] = field56;

field57 = browser.currentScene.createNode("field");
field57.name = "pixelAspectRatio";
field57.accessType = "inputOutput";
field57.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field57.type = "SFFloat";
ExternProtoDeclare52.field[4] = field57;

field58 = browser.currentScene.createNode("field");
field58.name = "set_startTime";
field58.accessType = "inputOnly";
field58.appinfo = "Begin render operation";
field58.type = "SFTime";
ExternProtoDeclare52.field[5] = field58;

field59 = browser.currentScene.createNode("field");
field59.name = "progress";
field59.accessType = "outputOnly";
field59.appinfo = "Progress performing render operation (0..1)";
field59.type = "SFFloat";
ExternProtoDeclare52.field[6] = field59;

field60 = browser.currentScene.createNode("field");
field60.name = "renderCompleteTime";
field60.accessType = "outputOnly";
field60.appinfo = "Render operation complete";
field60.type = "SFTime";
ExternProtoDeclare52.field[7] = field60;

field61 = browser.currentScene.createNode("field");
field61.name = "movieFormat";
field61.accessType = "initializeOnly";
field61.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field61.type = "MFString";
ExternProtoDeclare52.field[8] = field61;

field62 = browser.currentScene.createNode("field");
field62.name = "imageFormat";
field62.accessType = "initializeOnly";
field62.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field62.type = "MFString";
ExternProtoDeclare52.field[9] = field62;

field63 = browser.currentScene.createNode("field");
field63.name = "traceEnabled";
field63.accessType = "initializeOnly";
field63.appinfo = "enable console output to trace script computations and prototype progress";
field63.type = "SFBool";
ExternProtoDeclare52.field[10] = field63;

browser.currentScene.children[3] = ExternProtoDeclare52;

//=============== Lights, camera, action! ==============
DirectionalLight64 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight64.direction = [0,-1,0];
DirectionalLight64.global = True;
DirectionalLight64.intensity = 0.8;
browser.currentScene.children[4] = DirectionalLight64;

NavigationInfo65 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo65.type = ["EXAMINE","FLY","ANY"];
browser.currentScene.children[5] = NavigationInfo65;

Viewpoint66 = browser.currentScene.createNode("Viewpoint");
Viewpoint66.description = "Camera test scene entry view";
Viewpoint66.position = [0,2,12];
browser.currentScene.children[6] = Viewpoint66;

Viewpoint67 = browser.currentScene.createNode("Viewpoint");
Viewpoint67.description = "Camera test scene from above";
Viewpoint67.orientation = [1,0,0,-1.57079];
Viewpoint67.position = [0,150,0];
browser.currentScene.children[7] = Viewpoint67;

//Keep prototype instances in same file while developing, then move later
//We will create examples matching those in the paper
//=============== Camera.SimpleShotsTest ==============
ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "Camera";
ProtoInstance68.DEF = "Camera.SimpleShotsTest";
fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "description";
fieldValue69.value = "SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt";
ProtoInstance68.fieldValue = [];

ProtoInstance68.fieldValue[0] = fieldValue69;

fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "headlight";
fieldValue70.value = "true";
ProtoInstance68.fieldValue[1] = fieldValue70;

fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "position";
fieldValue71.value = "-4 4 10";
ProtoInstance68.fieldValue[2] = fieldValue71;

fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "shots";
ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "CameraShot";
ProtoInstance73.DEF = "Zoom";
fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "description";
fieldValue74.value = "Simple shot of Camera Zoom";
ProtoInstance73.fieldValue = [];

ProtoInstance73.fieldValue[0] = fieldValue74;

fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "initialPosition";
fieldValue75.value = "-50 1 -10";
ProtoInstance73.fieldValue[1] = fieldValue75;

fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "initialOrientation";
fieldValue76.value = "0 1 0 0";
ProtoInstance73.fieldValue[2] = fieldValue76;

fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "moves";
ProtoInstance78 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance78.name = "CameraMovement";
fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "description";
fieldValue79.value = "Camera Zoom In";
ProtoInstance78.fieldValue = [];

ProtoInstance78.fieldValue[0] = fieldValue79;

fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "duration";
fieldValue80.value = "3";
ProtoInstance78.fieldValue[1] = fieldValue80;

fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "goalPosition";
fieldValue81.value = "-50 1 -15";
ProtoInstance78.fieldValue[2] = fieldValue81;

fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "goalOrientation";
fieldValue82.value = "0 1 0 0";
ProtoInstance78.fieldValue[3] = fieldValue82;

fieldValue77.children = [];

fieldValue77.children[0] = ProtoInstance78;

ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "CameraMovement";
fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "description";
fieldValue84.value = "Camera Zoom Out";
ProtoInstance83.fieldValue = [];

ProtoInstance83.fieldValue[0] = fieldValue84;

fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "duration";
fieldValue85.value = "3";
ProtoInstance83.fieldValue[1] = fieldValue85;

fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "goalPosition";
fieldValue86.value = "-50 1 -10";
ProtoInstance83.fieldValue[2] = fieldValue86;

fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "goalOrientation";
fieldValue87.value = "0 1 0 0";
ProtoInstance83.fieldValue[3] = fieldValue87;

fieldValue77.children[1] = ProtoInstance83;

ProtoInstance88 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance88.name = "CameraMovement";
fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "description";
fieldValue89.value = "Camera Pause";
ProtoInstance88.fieldValue = [];

ProtoInstance88.fieldValue[0] = fieldValue89;

fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "duration";
fieldValue90.value = "1";
ProtoInstance88.fieldValue[1] = fieldValue90;

fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "goalPosition";
fieldValue91.value = "-50 1 -10";
ProtoInstance88.fieldValue[2] = fieldValue91;

fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "goalOrientation";
fieldValue92.value = "0 1 0 0";
ProtoInstance88.fieldValue[3] = fieldValue92;

fieldValue77.children[2] = ProtoInstance88;

ProtoInstance73.fieldValue[3] = fieldValue77;

fieldValue72.children = [];

fieldValue72.children[0] = ProtoInstance73;

ProtoInstance93 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance93.name = "CameraShot";
ProtoInstance93.DEF = "Dolly";
fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "description";
fieldValue94.value = "Simple shot of Camera Dolly";
ProtoInstance93.fieldValue = [];

ProtoInstance93.fieldValue[0] = fieldValue94;

fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "initialPosition";
fieldValue95.value = "-40 1 -10";
ProtoInstance93.fieldValue[1] = fieldValue95;

fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "initialOrientation";
fieldValue96.value = "0 1 0 0";
ProtoInstance93.fieldValue[2] = fieldValue96;

fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "moves";
ProtoInstance98 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance98.name = "CameraMovement";
ProtoInstance98.DEF = "DollyMove1";
fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "description";
fieldValue99.value = "Camera Dolly from Right to Left";
ProtoInstance98.fieldValue = [];

ProtoInstance98.fieldValue[0] = fieldValue99;

fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "duration";
fieldValue100.value = "3";
ProtoInstance98.fieldValue[1] = fieldValue100;

fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "goalPosition";
fieldValue101.value = "-45 1 -10";
ProtoInstance98.fieldValue[2] = fieldValue101;

fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "goalOrientation";
fieldValue102.value = "0 1 0 0";
ProtoInstance98.fieldValue[3] = fieldValue102;

fieldValue97.children = [];

fieldValue97.children[0] = ProtoInstance98;

ProtoInstance103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance103.name = "CameraMovement";
fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "description";
fieldValue104.value = "Camera Dolly from Left to Right";
ProtoInstance103.fieldValue = [];

ProtoInstance103.fieldValue[0] = fieldValue104;

fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "duration";
fieldValue105.value = "3";
ProtoInstance103.fieldValue[1] = fieldValue105;

fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "goalPosition";
fieldValue106.value = "-40 1 -10";
ProtoInstance103.fieldValue[2] = fieldValue106;

fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "goalOrientation";
fieldValue107.value = "0 1 0 0";
ProtoInstance103.fieldValue[3] = fieldValue107;

fieldValue97.children[1] = ProtoInstance103;

ProtoInstance108 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance108.name = "CameraMovement";
fieldValue109 = browser.currentScene.createNode("fieldValue");
fieldValue109.name = "description";
fieldValue109.value = "Camera Pause";
ProtoInstance108.fieldValue = [];

ProtoInstance108.fieldValue[0] = fieldValue109;

fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "duration";
fieldValue110.value = "1";
ProtoInstance108.fieldValue[1] = fieldValue110;

fieldValue111 = browser.currentScene.createNode("fieldValue");
fieldValue111.name = "goalPosition";
fieldValue111.value = "-40 1 -10";
ProtoInstance108.fieldValue[2] = fieldValue111;

fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "goalOrientation";
fieldValue112.value = "0 1 0 0";
ProtoInstance108.fieldValue[3] = fieldValue112;

fieldValue97.children[2] = ProtoInstance108;

ProtoInstance93.fieldValue[3] = fieldValue97;

fieldValue72.children[1] = ProtoInstance93;

ProtoInstance113 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance113.name = "CameraShot";
ProtoInstance113.DEF = "Pan";
fieldValue114 = browser.currentScene.createNode("fieldValue");
fieldValue114.name = "description";
fieldValue114.value = "Simple shot of Camera Pan left right and back to center";
ProtoInstance113.fieldValue = [];

ProtoInstance113.fieldValue[0] = fieldValue114;

fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "initialPosition";
fieldValue115.value = "-30 1 -10";
ProtoInstance113.fieldValue[1] = fieldValue115;

fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "initialOrientation";
fieldValue116.value = "0 1 0 0";
ProtoInstance113.fieldValue[2] = fieldValue116;

fieldValue117 = browser.currentScene.createNode("fieldValue");
fieldValue117.name = "moves";
ProtoInstance118 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance118.name = "CameraMovement";
ProtoInstance118.DEF = "PanLeft";
fieldValue119 = browser.currentScene.createNode("fieldValue");
fieldValue119.name = "description";
fieldValue119.value = "Pan Left";
ProtoInstance118.fieldValue = [];

ProtoInstance118.fieldValue[0] = fieldValue119;

fieldValue120 = browser.currentScene.createNode("fieldValue");
fieldValue120.name = "duration";
fieldValue120.value = "2";
ProtoInstance118.fieldValue[1] = fieldValue120;

fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "goalPosition";
fieldValue121.value = "-30 1 -10";
ProtoInstance118.fieldValue[2] = fieldValue121;

fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "goalOrientation";
fieldValue122.value = "0 1 0 0.4";
ProtoInstance118.fieldValue[3] = fieldValue122;

fieldValue117.children = [];

fieldValue117.children[0] = ProtoInstance118;

ProtoInstance123 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance123.name = "CameraMovement";
ProtoInstance123.DEF = "PanRight";
fieldValue124 = browser.currentScene.createNode("fieldValue");
fieldValue124.name = "description";
fieldValue124.value = "Pan Right";
ProtoInstance123.fieldValue = [];

ProtoInstance123.fieldValue[0] = fieldValue124;

fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "duration";
fieldValue125.value = "3";
ProtoInstance123.fieldValue[1] = fieldValue125;

fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "goalPosition";
fieldValue126.value = "-30 1 -10";
ProtoInstance123.fieldValue[2] = fieldValue126;

fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "goalOrientation";
fieldValue127.value = "0 1 0 -0.4";
ProtoInstance123.fieldValue[3] = fieldValue127;

fieldValue117.children[1] = ProtoInstance123;

ProtoInstance128 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance128.name = "CameraMovement";
fieldValue129 = browser.currentScene.createNode("fieldValue");
fieldValue129.name = "description";
fieldValue129.value = "Camera Pan back to Center";
ProtoInstance128.fieldValue = [];

ProtoInstance128.fieldValue[0] = fieldValue129;

fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "duration";
fieldValue130.value = "2";
ProtoInstance128.fieldValue[1] = fieldValue130;

fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "goalPosition";
fieldValue131.value = "-30 1 -10";
ProtoInstance128.fieldValue[2] = fieldValue131;

fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "goalOrientation";
fieldValue132.value = "0 1 0 0";
ProtoInstance128.fieldValue[3] = fieldValue132;

fieldValue117.children[2] = ProtoInstance128;

ProtoInstance133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance133.name = "CameraMovement";
fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "description";
fieldValue134.value = "Camera Pause";
ProtoInstance133.fieldValue = [];

ProtoInstance133.fieldValue[0] = fieldValue134;

fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "duration";
fieldValue135.value = "2";
ProtoInstance133.fieldValue[1] = fieldValue135;

fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "goalPosition";
fieldValue136.value = "-30 1 -10";
ProtoInstance133.fieldValue[2] = fieldValue136;

fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "goalOrientation";
fieldValue137.value = "0 1 0 0";
ProtoInstance133.fieldValue[3] = fieldValue137;

fieldValue117.children[3] = ProtoInstance133;

ProtoInstance113.fieldValue[3] = fieldValue117;

fieldValue72.children[2] = ProtoInstance113;

ProtoInstance138 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance138.name = "CameraShot";
ProtoInstance138.DEF = "CameraBoom";
fieldValue139 = browser.currentScene.createNode("fieldValue");
fieldValue139.name = "description";
fieldValue139.value = "Camera Boom";
ProtoInstance138.fieldValue = [];

ProtoInstance138.fieldValue[0] = fieldValue139;

fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "initialPosition";
fieldValue140.value = "-20 1 -10";
ProtoInstance138.fieldValue[1] = fieldValue140;

fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "initialOrientation";
fieldValue141.value = "0 1 0 0";
ProtoInstance138.fieldValue[2] = fieldValue141;

fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "moves";
ProtoInstance143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance143.name = "CameraMovement";
ProtoInstance143.DEF = "CameraBoomUp";
fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "description";
fieldValue144.value = "Camera Boom Up";
ProtoInstance143.fieldValue = [];

ProtoInstance143.fieldValue[0] = fieldValue144;

fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "duration";
fieldValue145.value = "3";
ProtoInstance143.fieldValue[1] = fieldValue145;

fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "goalPosition";
fieldValue146.value = "-20 5 -10";
ProtoInstance143.fieldValue[2] = fieldValue146;

fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "goalOrientation";
fieldValue147.value = "0 1 0 0";
ProtoInstance143.fieldValue[3] = fieldValue147;

fieldValue142.children = [];

fieldValue142.children[0] = ProtoInstance143;

ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.name = "CameraMovement";
ProtoInstance148.DEF = "BoomDown";
fieldValue149 = browser.currentScene.createNode("fieldValue");
fieldValue149.name = "description";
fieldValue149.value = "Camera Boom Down";
ProtoInstance148.fieldValue = [];

ProtoInstance148.fieldValue[0] = fieldValue149;

fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "duration";
fieldValue150.value = "3";
ProtoInstance148.fieldValue[1] = fieldValue150;

fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "goalPosition";
fieldValue151.value = "-20 1 -10";
ProtoInstance148.fieldValue[2] = fieldValue151;

fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "goalOrientation";
fieldValue152.value = "0 1 0 0";
ProtoInstance148.fieldValue[3] = fieldValue152;

fieldValue142.children[1] = ProtoInstance148;

ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "CameraMovement";
ProtoInstance153.DEF = "BoomPause";
fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "description";
fieldValue154.value = "Camera Pause";
ProtoInstance153.fieldValue = [];

ProtoInstance153.fieldValue[0] = fieldValue154;

fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "duration";
fieldValue155.value = "2";
ProtoInstance153.fieldValue[1] = fieldValue155;

fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "goalPosition";
fieldValue156.value = "-20 1 -10";
ProtoInstance153.fieldValue[2] = fieldValue156;

fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "goalOrientation";
fieldValue157.value = "0 1 0 0";
ProtoInstance153.fieldValue[3] = fieldValue157;

fieldValue142.children[2] = ProtoInstance153;

ProtoInstance138.fieldValue[3] = fieldValue142;

fieldValue72.children[3] = ProtoInstance138;

ProtoInstance158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance158.name = "CameraShot";
ProtoInstance158.DEF = "CameraTilt";
fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "description";
fieldValue159.value = "Camera Tilt";
ProtoInstance158.fieldValue = [];

ProtoInstance158.fieldValue[0] = fieldValue159;

fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "initialPosition";
fieldValue160.value = "-10 1 -10";
ProtoInstance158.fieldValue[1] = fieldValue160;

fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "initialOrientation";
fieldValue161.value = "0 0 1 0";
ProtoInstance158.fieldValue[2] = fieldValue161;

fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "traceEnabled";
fieldValue162.value = "true";
ProtoInstance158.fieldValue[3] = fieldValue162;

fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "moves";
ProtoInstance164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance164.name = "CameraMovement";
fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "description";
fieldValue165.value = "Camera Tilt Pause";
ProtoInstance164.fieldValue = [];

ProtoInstance164.fieldValue[0] = fieldValue165;

fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "duration";
fieldValue166.value = "1";
ProtoInstance164.fieldValue[1] = fieldValue166;

fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "goalPosition";
fieldValue167.value = "-10 1 -10";
ProtoInstance164.fieldValue[2] = fieldValue167;

fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "goalOrientation";
fieldValue168.value = "0 0 1 0";
ProtoInstance164.fieldValue[3] = fieldValue168;

fieldValue163.children = [];

fieldValue163.children[0] = ProtoInstance164;

ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "CameraMovement";
ProtoInstance169.DEF = "TiltDown";
fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "description";
fieldValue170.value = "Camera Tilt Left";
ProtoInstance169.fieldValue = [];

ProtoInstance169.fieldValue[0] = fieldValue170;

fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "duration";
fieldValue171.value = "3";
ProtoInstance169.fieldValue[1] = fieldValue171;

fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "goalPosition";
fieldValue172.value = "-10 1 -10";
ProtoInstance169.fieldValue[2] = fieldValue172;

fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "goalOrientation";
fieldValue173.value = "0 0 1 0.785";
ProtoInstance169.fieldValue[3] = fieldValue173;

fieldValue163.children[1] = ProtoInstance169;

ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "CameraMovement";
ProtoInstance174.DEF = "TiltPause";
fieldValue175 = browser.currentScene.createNode("fieldValue");
fieldValue175.name = "description";
fieldValue175.value = "Camera Tilt Pause";
ProtoInstance174.fieldValue = [];

ProtoInstance174.fieldValue[0] = fieldValue175;

fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "duration";
fieldValue176.value = "1";
ProtoInstance174.fieldValue[1] = fieldValue176;

fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "goalPosition";
fieldValue177.value = "-10 1 -10";
ProtoInstance174.fieldValue[2] = fieldValue177;

fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "goalOrientation";
fieldValue178.value = "0 0 1 0.785";
ProtoInstance174.fieldValue[3] = fieldValue178;

fieldValue163.children[2] = ProtoInstance174;

ProtoInstance179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance179.name = "CameraMovement";
fieldValue180 = browser.currentScene.createNode("fieldValue");
fieldValue180.name = "description";
fieldValue180.value = "Camera Tilt Right";
ProtoInstance179.fieldValue = [];

ProtoInstance179.fieldValue[0] = fieldValue180;

fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "duration";
fieldValue181.value = "3";
ProtoInstance179.fieldValue[1] = fieldValue181;

fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "goalPosition";
fieldValue182.value = "-10 1 -10";
ProtoInstance179.fieldValue[2] = fieldValue182;

fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "goalOrientation";
fieldValue183.value = "0 0 1 -0.785";
ProtoInstance179.fieldValue[3] = fieldValue183;

fieldValue163.children[3] = ProtoInstance179;

ProtoInstance184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance184.name = "CameraMovement";
fieldValue185 = browser.currentScene.createNode("fieldValue");
fieldValue185.name = "description";
fieldValue185.value = "Camera Tilt Pause";
ProtoInstance184.fieldValue = [];

ProtoInstance184.fieldValue[0] = fieldValue185;

fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "duration";
fieldValue186.value = "1";
ProtoInstance184.fieldValue[1] = fieldValue186;

fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "goalPosition";
fieldValue187.value = "-10 1 -10";
ProtoInstance184.fieldValue[2] = fieldValue187;

fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "goalOrientation";
fieldValue188.value = "0 0 1 -0.785";
ProtoInstance184.fieldValue[3] = fieldValue188;

fieldValue163.children[4] = ProtoInstance184;

ProtoInstance189 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance189.name = "CameraMovement";
ProtoInstance189.DEF = "TiltReset";
fieldValue190 = browser.currentScene.createNode("fieldValue");
fieldValue190.name = "description";
fieldValue190.value = "Camera Tilt Reset";
ProtoInstance189.fieldValue = [];

ProtoInstance189.fieldValue[0] = fieldValue190;

fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "duration";
fieldValue191.value = "1";
ProtoInstance189.fieldValue[1] = fieldValue191;

fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "goalPosition";
fieldValue192.value = "-10 1 -10";
ProtoInstance189.fieldValue[2] = fieldValue192;

fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "goalOrientation";
fieldValue193.value = "0 0 1 0";
ProtoInstance189.fieldValue[3] = fieldValue193;

fieldValue163.children[5] = ProtoInstance189;

ProtoInstance194 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance194.name = "CameraMovement";
ProtoInstance194.DEF = "TiltUp";
fieldValue195 = browser.currentScene.createNode("fieldValue");
fieldValue195.name = "description";
fieldValue195.value = "Return to home";
ProtoInstance194.fieldValue = [];

ProtoInstance194.fieldValue[0] = fieldValue195;

fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "duration";
fieldValue196.value = "2";
ProtoInstance194.fieldValue[1] = fieldValue196;

fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "goalPosition";
fieldValue197.value = "0 2 12";
ProtoInstance194.fieldValue[2] = fieldValue197;

fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "goalOrientation";
fieldValue198.value = "0 0 1 0";
ProtoInstance194.fieldValue[3] = fieldValue198;

fieldValue163.children[6] = ProtoInstance194;

ProtoInstance158.fieldValue[4] = fieldValue163;

fieldValue72.children[4] = ProtoInstance158;

ProtoInstance68.fieldValue[3] = fieldValue72;

browser.currentScene.children[8] = ProtoInstance68;

Group199 = browser.currentScene.createNode("Group");
Group199.DEF = "AnimationGroup.SimpleShots";
TimeSensor200 = browser.currentScene.createNode("TimeSensor");
TimeSensor200.DEF = "CameraTimer.SimpleShots";
Group199.children = [];

Group199.children[0] = TimeSensor200;

//initialize clock to match totalDuration of combined Shot Moves
ROUTE201 = browser.currentScene.createNode("ROUTE");
ROUTE201.fromField = "totalDuration";
ROUTE201.fromNode = "Camera.SimpleShotsTest";
ROUTE201.toField = "cycleInterval";
ROUTE201.toNode = "CameraTimer.SimpleShots";
Group199.children[1] = ROUTE201;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
ROUTE202 = browser.currentScene.createNode("ROUTE");
ROUTE202.fromField = "fraction_changed";
ROUTE202.fromNode = "CameraTimer.SimpleShots";
ROUTE202.toField = "set_fraction";
ROUTE202.toNode = "Camera.SimpleShotsTest";
Group199.children[2] = ROUTE202;

Transform203 = browser.currentScene.createNode("Transform");
Transform203.DEF = "Trigger.SimpleShots";
Transform203.translation = [-4,4,0];
BooleanFilter204 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter204.DEF = "TextTouchActive.SimpleShotsFilter";
Transform203.children = [];

Transform203.children[0] = BooleanFilter204;

TouchSensor205 = browser.currentScene.createNode("TouchSensor");
TouchSensor205.DEF = "TextTouch.SimpleShots";
TouchSensor205.description = "touch to animate Camera SimpleShotsTest";
Transform203.children[1] = TouchSensor205;

ROUTE206 = browser.currentScene.createNode("ROUTE");
ROUTE206.fromField = "inputTrue";
ROUTE206.fromNode = "TextTouchActive.SimpleShotsFilter";
ROUTE206.toField = "set_bind";
ROUTE206.toNode = "Camera.SimpleShotsTest";
Transform203.children[2] = ROUTE206;

ROUTE207 = browser.currentScene.createNode("ROUTE");
ROUTE207.fromField = "isActive";
ROUTE207.fromNode = "TextTouch.SimpleShots";
ROUTE207.toField = "set_boolean";
ROUTE207.toNode = "TextTouchActive.SimpleShotsFilter";
Transform203.children[3] = ROUTE207;

ROUTE208 = browser.currentScene.createNode("ROUTE");
ROUTE208.fromField = "touchTime";
ROUTE208.fromNode = "TextTouch.SimpleShots";
ROUTE208.toField = "startTime";
ROUTE208.toNode = "CameraTimer.SimpleShots";
Transform203.children[4] = ROUTE208;

Shape209 = browser.currentScene.createNode("Shape");
Text210 = browser.currentScene.createNode("Text");
Text210.string = ["Click to animate","SimpleShotsTest"];
FontStyle211 = browser.currentScene.createNode("FontStyle");
FontStyle211.justify = ["MIDDLE","MIDDLE"];
Text210.fontStyle = FontStyle211;

Shape209.geometry = Text210;

Appearance212 = browser.currentScene.createNode("Appearance");
Material213 = browser.currentScene.createNode("Material");
Material213.DEF = "ArtDeco5";
Material213.ambientIntensity = 0.24;
Material213.diffuseColor = [0.945455,0.318988,0.321717];
Material213.shininess = 0.01;
Material213.specularColor = [0.072727,0.021705,0.010732];
//Universal Media Library: ArtDeco 5
Appearance212.material = Material213;

Shape209.appearance = Appearance212;

Transform203.children[5] = Shape209;

//Simplify intersection test for user selecting text
Shape214 = browser.currentScene.createNode("Shape");
Shape214.DEF = "TransparentBox";
Appearance215 = browser.currentScene.createNode("Appearance");
Material216 = browser.currentScene.createNode("Material");
Material216.transparency = 1;
Appearance215.material = Material216;

Shape214.appearance = Appearance215;

Box217 = browser.currentScene.createNode("Box");
Box217.size = [6,2,0.0001];
Shape214.geometry = Box217;

Transform203.children[6] = Shape214;

Group199.children[3] = Transform203;

browser.currentScene.children[9] = Group199;

Group218 = browser.currentScene.createNode("Group");
Group218.DEF = "SimpleShotsTargets";
Transform219 = browser.currentScene.createNode("Transform");
Transform219.DEF = "TargetBoxZoom";
Transform219.translation = [-50,1,-20];
Shape220 = browser.currentScene.createNode("Shape");
Box221 = browser.currentScene.createNode("Box");
Shape220.geometry = Box221;

Appearance222 = browser.currentScene.createNode("Appearance");
Material223 = browser.currentScene.createNode("Material");
Appearance222.material = Material223;

ImageTexture224 = browser.currentScene.createNode("ImageTexture");
ImageTexture224.url = ["images/CameraMoveZoom.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"];
Appearance222.texture = ImageTexture224;

Shape220.appearance = Appearance222;

Transform219.children = [];

Transform219.children[0] = Shape220;

Transform225 = browser.currentScene.createNode("Transform");
Transform225.translation = [0,2,0];
Shape226 = browser.currentScene.createNode("Shape");
Text227 = browser.currentScene.createNode("Text");
Text227.string = ["Zoom in, out"];
FontStyle228 = browser.currentScene.createNode("FontStyle");
FontStyle228.justify = ["MIDDLE","MIDDLE"];
Text227.fontStyle = FontStyle228;

Shape226.geometry = Text227;

Appearance229 = browser.currentScene.createNode("Appearance");
Material230 = browser.currentScene.createNode("Material");
Appearance229.material = Material230;

Shape226.appearance = Appearance229;

Transform225.children = [];

Transform225.children[0] = Shape226;

Transform219.children[1] = Transform225;

Group218.children = [];

Group218.children[0] = Transform219;

Transform231 = browser.currentScene.createNode("Transform");
Transform231.DEF = "TargetBoxDolly";
Transform231.translation = [-40,1,-20];
Shape232 = browser.currentScene.createNode("Shape");
Box233 = browser.currentScene.createNode("Box");
Shape232.geometry = Box233;

Appearance234 = browser.currentScene.createNode("Appearance");
Material235 = browser.currentScene.createNode("Material");
Appearance234.material = Material235;

ImageTexture236 = browser.currentScene.createNode("ImageTexture");
ImageTexture236.url = ["images/CameraMoveDolly.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"];
Appearance234.texture = ImageTexture236;

Shape232.appearance = Appearance234;

Transform231.children = [];

Transform231.children[0] = Shape232;

Transform237 = browser.currentScene.createNode("Transform");
Transform237.translation = [0,2,0];
Shape238 = browser.currentScene.createNode("Shape");
Text239 = browser.currentScene.createNode("Text");
Text239.string = ["Dolly left, right"];
FontStyle240 = browser.currentScene.createNode("FontStyle");
FontStyle240.justify = ["MIDDLE","MIDDLE"];
Text239.fontStyle = FontStyle240;

Shape238.geometry = Text239;

Appearance241 = browser.currentScene.createNode("Appearance");
Material242 = browser.currentScene.createNode("Material");
Appearance241.material = Material242;

Shape238.appearance = Appearance241;

Transform237.children = [];

Transform237.children[0] = Shape238;

Transform231.children[1] = Transform237;

Group218.children[1] = Transform231;

Transform243 = browser.currentScene.createNode("Transform");
Transform243.DEF = "TargetBoxPan";
Transform243.translation = [-30,1,-20];
Shape244 = browser.currentScene.createNode("Shape");
Box245 = browser.currentScene.createNode("Box");
Shape244.geometry = Box245;

Appearance246 = browser.currentScene.createNode("Appearance");
Material247 = browser.currentScene.createNode("Material");
Appearance246.material = Material247;

ImageTexture248 = browser.currentScene.createNode("ImageTexture");
ImageTexture248.url = ["images/CameraMovePan.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"];
Appearance246.texture = ImageTexture248;

Shape244.appearance = Appearance246;

Transform243.children = [];

Transform243.children[0] = Shape244;

Transform249 = browser.currentScene.createNode("Transform");
Transform249.translation = [0,2,0];
Shape250 = browser.currentScene.createNode("Shape");
Text251 = browser.currentScene.createNode("Text");
Text251.string = ["Pan left, right"];
FontStyle252 = browser.currentScene.createNode("FontStyle");
FontStyle252.justify = ["MIDDLE","MIDDLE"];
Text251.fontStyle = FontStyle252;

Shape250.geometry = Text251;

Appearance253 = browser.currentScene.createNode("Appearance");
Material254 = browser.currentScene.createNode("Material");
Appearance253.material = Material254;

Shape250.appearance = Appearance253;

Transform249.children = [];

Transform249.children[0] = Shape250;

Transform243.children[1] = Transform249;

Group218.children[2] = Transform243;

Transform255 = browser.currentScene.createNode("Transform");
Transform255.DEF = "TargetBoxBoom";
Transform255.translation = [-20,1,-20];
Shape256 = browser.currentScene.createNode("Shape");
Box257 = browser.currentScene.createNode("Box");
Shape256.geometry = Box257;

Appearance258 = browser.currentScene.createNode("Appearance");
Material259 = browser.currentScene.createNode("Material");
Appearance258.material = Material259;

ImageTexture260 = browser.currentScene.createNode("ImageTexture");
ImageTexture260.url = ["images/CameraMoveBoom.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"];
Appearance258.texture = ImageTexture260;

Shape256.appearance = Appearance258;

Transform255.children = [];

Transform255.children[0] = Shape256;

Transform261 = browser.currentScene.createNode("Transform");
Transform261.translation = [0,2,0];
Shape262 = browser.currentScene.createNode("Shape");
Text263 = browser.currentScene.createNode("Text");
Text263.string = ["Boom up, down"];
FontStyle264 = browser.currentScene.createNode("FontStyle");
FontStyle264.justify = ["MIDDLE","MIDDLE"];
Text263.fontStyle = FontStyle264;

Shape262.geometry = Text263;

Appearance265 = browser.currentScene.createNode("Appearance");
Material266 = browser.currentScene.createNode("Material");
Appearance265.material = Material266;

Shape262.appearance = Appearance265;

Transform261.children = [];

Transform261.children[0] = Shape262;

Transform255.children[1] = Transform261;

Group218.children[3] = Transform255;

Transform267 = browser.currentScene.createNode("Transform");
Transform267.DEF = "TargetBoxTilt";
Transform267.translation = [-10,1,-20];
Shape268 = browser.currentScene.createNode("Shape");
Box269 = browser.currentScene.createNode("Box");
Shape268.geometry = Box269;

Appearance270 = browser.currentScene.createNode("Appearance");
Material271 = browser.currentScene.createNode("Material");
Appearance270.material = Material271;

ImageTexture272 = browser.currentScene.createNode("ImageTexture");
ImageTexture272.url = ["images/CameraMoveTilt.png","http://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"];
Appearance270.texture = ImageTexture272;

Shape268.appearance = Appearance270;

Transform267.children = [];

Transform267.children[0] = Shape268;

Transform273 = browser.currentScene.createNode("Transform");
Transform273.translation = [0,2,0];
Shape274 = browser.currentScene.createNode("Shape");
Text275 = browser.currentScene.createNode("Text");
Text275.string = ["Tilt left, right"];
FontStyle276 = browser.currentScene.createNode("FontStyle");
FontStyle276.justify = ["MIDDLE","MIDDLE"];
Text275.fontStyle = FontStyle276;

Shape274.geometry = Text275;

Appearance277 = browser.currentScene.createNode("Appearance");
Material278 = browser.currentScene.createNode("Material");
Appearance277.material = Material278;

Shape274.appearance = Appearance277;

Transform273.children = [];

Transform273.children[0] = Shape274;

Transform267.children[1] = Transform273;

Group218.children[4] = Transform267;

browser.currentScene.children[10] = Group218;

//=============== Camera.AimPointTest ==============
ProtoInstance279 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance279.name = "Camera";
ProtoInstance279.DEF = "Camera.AimPointTest";
fieldValue280 = browser.currentScene.createNode("fieldValue");
fieldValue280.name = "description";
fieldValue280.value = "AimPointTest for moving camera tracking moving target";
ProtoInstance279.fieldValue = [];

ProtoInstance279.fieldValue[0] = fieldValue280;

fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "position";
fieldValue281.value = "4 4 10";
ProtoInstance279.fieldValue[1] = fieldValue281;

fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "shots";
ProtoInstance283 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance283.name = "CameraShot";
ProtoInstance283.DEF = "Shot5";
fieldValue284 = browser.currentScene.createNode("fieldValue");
fieldValue284.name = "description";
fieldValue284.value = "#3 Tracking shot";
ProtoInstance283.fieldValue = [];

ProtoInstance283.fieldValue[0] = fieldValue284;

fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "initialPosition";
fieldValue285.value = "6 6 10";
ProtoInstance283.fieldValue[1] = fieldValue285;

fieldValue286 = browser.currentScene.createNode("fieldValue");
fieldValue286.name = "initialOrientation";
fieldValue286.value = "0 1 0 0";
ProtoInstance283.fieldValue[2] = fieldValue286;

fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "moves";
ProtoInstance288 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance288.name = "CameraMovement";
ProtoInstance288.DEF = "MoveAimPoint3.1";
fieldValue289 = browser.currentScene.createNode("fieldValue");
fieldValue289.name = "description";
fieldValue289.value = "AimPoint 3.1 moving BoxPath";
ProtoInstance288.fieldValue = [];

ProtoInstance288.fieldValue[0] = fieldValue289;

fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "tracking";
fieldValue290.value = "true";
ProtoInstance288.fieldValue[1] = fieldValue290;

fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "duration";
fieldValue291.value = "8";
ProtoInstance288.fieldValue[2] = fieldValue291;

fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "goalPosition";
fieldValue292.value = "6 6 10";
ProtoInstance288.fieldValue[3] = fieldValue292;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue287.children = [];

fieldValue287.children[0] = ProtoInstance288;

ProtoInstance293 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance293.name = "CameraMovement";
ProtoInstance293.DEF = "MoveAimPoint3.2";
fieldValue294 = browser.currentScene.createNode("fieldValue");
fieldValue294.name = "description";
fieldValue294.value = "AimPoint 3.2 pan right while tracking";
ProtoInstance293.fieldValue = [];

ProtoInstance293.fieldValue[0] = fieldValue294;

fieldValue295 = browser.currentScene.createNode("fieldValue");
fieldValue295.name = "tracking";
fieldValue295.value = "true";
ProtoInstance293.fieldValue[1] = fieldValue295;

fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "duration";
fieldValue296.value = "8";
ProtoInstance293.fieldValue[2] = fieldValue296;

fieldValue297 = browser.currentScene.createNode("fieldValue");
fieldValue297.name = "goalPosition";
fieldValue297.value = "40 6 12";
ProtoInstance293.fieldValue[3] = fieldValue297;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue287.children[1] = ProtoInstance293;

ProtoInstance298 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance298.name = "CameraMovement";
ProtoInstance298.DEF = "MoveAimPoint3.3";
fieldValue299 = browser.currentScene.createNode("fieldValue");
fieldValue299.name = "description";
fieldValue299.value = "AimPoint 3.3 boom up while tracking";
ProtoInstance298.fieldValue = [];

ProtoInstance298.fieldValue[0] = fieldValue299;

fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "tracking";
fieldValue300.value = "true";
ProtoInstance298.fieldValue[1] = fieldValue300;

fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "duration";
fieldValue301.value = "3";
ProtoInstance298.fieldValue[2] = fieldValue301;

fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "goalPosition";
fieldValue302.value = "40 20 13";
ProtoInstance298.fieldValue[3] = fieldValue302;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue287.children[2] = ProtoInstance298;

ProtoInstance303 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance303.name = "CameraMovement";
ProtoInstance303.DEF = "MoveAimPoint3.4";
fieldValue304 = browser.currentScene.createNode("fieldValue");
fieldValue304.name = "description";
fieldValue304.value = "AimPoint 3.4 restore camera back to home";
ProtoInstance303.fieldValue = [];

ProtoInstance303.fieldValue[0] = fieldValue304;

fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "tracking";
fieldValue305.value = "true";
ProtoInstance303.fieldValue[1] = fieldValue305;

fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "duration";
fieldValue306.value = "5";
ProtoInstance303.fieldValue[2] = fieldValue306;

fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "goalPosition";
fieldValue307.value = "4 4 10";
ProtoInstance303.fieldValue[3] = fieldValue307;

fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "goalAimPoint";
fieldValue308.value = "4 4 0";
ProtoInstance303.fieldValue[4] = fieldValue308;

fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "goalOrientation";
fieldValue309.value = "0 1 0 0";
ProtoInstance303.fieldValue[5] = fieldValue309;

//can test tracking or not using following values
fieldValue287.children[3] = ProtoInstance303;

ProtoInstance283.fieldValue[3] = fieldValue287;

fieldValue282.children = [];

fieldValue282.children[0] = ProtoInstance283;

ProtoInstance279.fieldValue[2] = fieldValue282;

browser.currentScene.children[11] = ProtoInstance279;

Group310 = browser.currentScene.createNode("Group");
Group310.DEF = "AnimationGroup.AimPointTest";
TimeSensor311 = browser.currentScene.createNode("TimeSensor");
TimeSensor311.DEF = "CameraTimer.AimPointTest";
Group310.children = [];

Group310.children[0] = TimeSensor311;

//initialize clock to match totalDuration of combined Shot Moves
ROUTE312 = browser.currentScene.createNode("ROUTE");
ROUTE312.fromField = "totalDuration";
ROUTE312.fromNode = "Camera.AimPointTest";
ROUTE312.toField = "cycleInterval";
ROUTE312.toNode = "CameraTimer.AimPointTest";
Group310.children[1] = ROUTE312;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
ROUTE313 = browser.currentScene.createNode("ROUTE");
ROUTE313.fromField = "fraction_changed";
ROUTE313.fromNode = "CameraTimer.AimPointTest";
ROUTE313.toField = "set_fraction";
ROUTE313.toNode = "Camera.AimPointTest";
Group310.children[2] = ROUTE313;

Transform314 = browser.currentScene.createNode("Transform");
Transform314.DEF = "Trigger.AimPointTest";
Transform314.translation = [4,4,0];
BooleanFilter315 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter315.DEF = "TextTouchActive.AimPointFilter";
Transform314.children = [];

Transform314.children[0] = BooleanFilter315;

TouchSensor316 = browser.currentScene.createNode("TouchSensor");
TouchSensor316.DEF = "TextTouch.AimPointTest";
TouchSensor316.description = "touch to animate Camera AimPointTest";
Transform314.children[1] = TouchSensor316;

ROUTE317 = browser.currentScene.createNode("ROUTE");
ROUTE317.fromField = "inputTrue";
ROUTE317.fromNode = "TextTouchActive.AimPointFilter";
ROUTE317.toField = "set_bind";
ROUTE317.toNode = "Camera.AimPointTest";
Transform314.children[2] = ROUTE317;

ROUTE318 = browser.currentScene.createNode("ROUTE");
ROUTE318.fromField = "isActive";
ROUTE318.fromNode = "TextTouch.AimPointTest";
ROUTE318.toField = "set_boolean";
ROUTE318.toNode = "TextTouchActive.AimPointFilter";
Transform314.children[3] = ROUTE318;

ROUTE319 = browser.currentScene.createNode("ROUTE");
ROUTE319.fromField = "touchTime";
ROUTE319.fromNode = "TextTouch.AimPointTest";
ROUTE319.toField = "startTime";
ROUTE319.toNode = "CameraTimer.AimPointTest";
Transform314.children[4] = ROUTE319;

Shape320 = browser.currentScene.createNode("Shape");
Text321 = browser.currentScene.createNode("Text");
Text321.string = ["Click to animate","AimPointTest"];
FontStyle322 = browser.currentScene.createNode("FontStyle");
FontStyle322.justify = ["MIDDLE","MIDDLE"];
Text321.fontStyle = FontStyle322;

Shape320.geometry = Text321;

Appearance323 = browser.currentScene.createNode("Appearance");
Material324 = browser.currentScene.createNode("Material");
Material324.USE = "ArtDeco5";
Appearance323.material = Material324;

Shape320.appearance = Appearance323;

Transform314.children[5] = Shape320;

Shape325 = browser.currentScene.createNode("Shape");
Shape325.USE = "TransparentBox";
Transform314.children[6] = Shape325;

Group310.children[3] = Transform314;

browser.currentScene.children[12] = Group310;

//TODO build a test once implemented
ProtoInstance326 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance326.name = "OfflineRender";
browser.currentScene.children[13] = ProtoInstance326;

//=============== animate a camera shape to visualize view changes ==============
Transform327 = browser.currentScene.createNode("Transform");
Transform327.DEF = "CameraShapeTransform";
Transform327.translation = [0,0.5,0];
//move CameraShape using active Camera
ROUTE328 = browser.currentScene.createNode("ROUTE");
ROUTE328.fromField = "position_changed";
ROUTE328.fromNode = "Camera.SimpleShotsTest";
ROUTE328.toField = "translation";
ROUTE328.toNode = "CameraShapeTransform";
Transform327.children = [];

Transform327.children[0] = ROUTE328;

ROUTE329 = browser.currentScene.createNode("ROUTE");
ROUTE329.fromField = "orientation_changed";
ROUTE329.fromNode = "Camera.SimpleShotsTest";
ROUTE329.toField = "rotation";
ROUTE329.toNode = "CameraShapeTransform";
Transform327.children[1] = ROUTE329;

ROUTE330 = browser.currentScene.createNode("ROUTE");
ROUTE330.fromField = "position";
ROUTE330.fromNode = "Camera.AimPointTest";
ROUTE330.toField = "translation";
ROUTE330.toNode = "CameraShapeTransform";
Transform327.children[2] = ROUTE330;

ROUTE331 = browser.currentScene.createNode("ROUTE");
ROUTE331.fromField = "orientation_changed";
ROUTE331.fromNode = "Camera.AimPointTest";
ROUTE331.toField = "rotation";
ROUTE331.toNode = "CameraShapeTransform";
Transform327.children[3] = ROUTE331;

Transform332 = browser.currentScene.createNode("Transform");
Transform332.DEF = "CameraOffsetTransform";
Transform332.translation = [0,0,0.25];
TouchSensor333 = browser.currentScene.createNode("TouchSensor");
TouchSensor333.DEF = "CameraShapeTouched";
Transform332.children = [];

Transform332.children[0] = TouchSensor333;

Inline334 = browser.currentScene.createNode("Inline");
Inline334.DEF = "CameraShape";
Inline334.url = ["CameraShape.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"];
Transform332.children[1] = Inline334;

Shape335 = browser.currentScene.createNode("Shape");
Shape335.DEF = "SightLine";
IndexedLineSet336 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet336.coordIndex = [0,1];
Coordinate337 = browser.currentScene.createNode("Coordinate");
Coordinate337.point = [0,0,0,0,0,-100];
IndexedLineSet336.coord = Coordinate337;

Shape335.geometry = IndexedLineSet336;

Appearance338 = browser.currentScene.createNode("Appearance");
Material339 = browser.currentScene.createNode("Material");
Material339.emissiveColor = [0.8,0.8,0.4];
Appearance338.material = Material339;

Shape335.appearance = Appearance338;

Transform332.children[2] = Shape335;

Transform327.children[4] = Transform332;

//Display frustum to show camera view within the scene, toggled by user selecting CameraShape
ExternProtoDeclare340 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare340.name = "ViewFrustum";
ExternProtoDeclare340.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare340.url = ["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"];
field341 = browser.currentScene.createNode("field");
field341.name = "ViewpointNode";
field341.accessType = "initializeOnly";
field341.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field341.type = "SFNode";
ExternProtoDeclare340.field = [];

ExternProtoDeclare340.field[0] = field341;

field342 = browser.currentScene.createNode("field");
field342.name = "NavigationInfoNode";
field342.accessType = "initializeOnly";
field342.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field342.type = "SFNode";
ExternProtoDeclare340.field[1] = field342;

field343 = browser.currentScene.createNode("field");
field343.name = "visible";
field343.accessType = "inputOutput";
field343.appinfo = "whether or not frustum geometry is rendered";
field343.type = "SFBool";
ExternProtoDeclare340.field[2] = field343;

field344 = browser.currentScene.createNode("field");
field344.name = "lineColor";
field344.accessType = "inputOutput";
field344.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field344.type = "SFColor";
ExternProtoDeclare340.field[3] = field344;

field345 = browser.currentScene.createNode("field");
field345.name = "frustumColor";
field345.accessType = "inputOutput";
field345.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field345.type = "SFColor";
ExternProtoDeclare340.field[4] = field345;

field346 = browser.currentScene.createNode("field");
field346.name = "transparency";
field346.accessType = "inputOutput";
field346.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field346.type = "SFFloat";
ExternProtoDeclare340.field[5] = field346;

field347 = browser.currentScene.createNode("field");
field347.name = "aspectRatio";
field347.accessType = "inputOutput";
field347.appinfo = "assumed ratio height/width, default value 0.75";
field347.type = "SFFloat";
ExternProtoDeclare340.field[6] = field347;

field348 = browser.currentScene.createNode("field");
field348.name = "trace";
field348.accessType = "initializeOnly";
field348.appinfo = "debug support, default false";
field348.type = "SFBool";
ExternProtoDeclare340.field[7] = field348;

Transform327.children[5] = ExternProtoDeclare340;

ProtoInstance349 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance349.name = "ViewFrustum";
ProtoInstance349.DEF = "ViewFrustumNode";
fieldValue350 = browser.currentScene.createNode("fieldValue");
fieldValue350.name = "ViewpointNode";
Viewpoint351 = browser.currentScene.createNode("Viewpoint");
Viewpoint351.DEF = "FrustumViewpoint";
Viewpoint351.description = "viewpoint for ViewFrustum";
Viewpoint351.position = [0,0,0];
fieldValue350.children = [];

fieldValue350.children[0] = Viewpoint351;

ProtoInstance349.fieldValue = [];

ProtoInstance349.fieldValue[0] = fieldValue350;

fieldValue352 = browser.currentScene.createNode("fieldValue");
fieldValue352.name = "NavigationInfoNode";
NavigationInfo353 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo353.DEF = "TestNavigationInfo";
NavigationInfo353.transitionType = ["ANIMATE"];
NavigationInfo353.visibilityLimit = 100;
fieldValue352.children = [];

fieldValue352.children[0] = NavigationInfo353;

ProtoInstance349.fieldValue[1] = fieldValue352;

fieldValue354 = browser.currentScene.createNode("fieldValue");
fieldValue354.name = "visible";
fieldValue354.value = "false";
ProtoInstance349.fieldValue[2] = fieldValue354;

fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "lineColor";
fieldValue355.value = "0.9 0.9 0.9";
ProtoInstance349.fieldValue[3] = fieldValue355;

fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "frustumColor";
fieldValue356.value = "0.8 0.8 0.8";
ProtoInstance349.fieldValue[4] = fieldValue356;

fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "transparency";
fieldValue357.value = "0.95";
ProtoInstance349.fieldValue[5] = fieldValue357;

Transform327.children[6] = ProtoInstance349;

BooleanToggle358 = browser.currentScene.createNode("BooleanToggle");
BooleanToggle358.DEF = "ViewFrustumToggle";
Transform327.children[7] = BooleanToggle358;

ROUTE359 = browser.currentScene.createNode("ROUTE");
ROUTE359.fromField = "isActive";
ROUTE359.fromNode = "CameraShapeTouched";
ROUTE359.toField = "set_boolean";
ROUTE359.toNode = "ViewFrustumToggle";
Transform327.children[8] = ROUTE359;

ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "toggle";
ROUTE360.fromNode = "ViewFrustumToggle";
ROUTE360.toField = "set_visible";
ROUTE360.toNode = "ViewFrustumNode";
Transform327.children[9] = ROUTE360;

browser.currentScene.children[14] = Transform327;

//=============== add checkerboard, axes and other things to look at while animating ==============
Background361 = browser.currentScene.createNode("Background");
Background361.skyColor = [0.282353,0.380392,0.470588];
browser.currentScene.children[15] = Background361;

Transform362 = browser.currentScene.createNode("Transform");
Transform362.rotation = [1,0,0,-1.57079];
Transform362.scale = [10,10,10];
Shape363 = browser.currentScene.createNode("Shape");
Appearance364 = browser.currentScene.createNode("Appearance");
Material365 = browser.currentScene.createNode("Material");
Material365.ambientIntensity = 0.01;
Material365.diffuseColor = [1,1,1];
Material365.shininess = 0.05;
Appearance364.material = Material365;

Shape363.appearance = Appearance364;

IndexedFaceSet366 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet366.colorIndex = [0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0];
IndexedFaceSet366.colorPerVertex = False;
IndexedFaceSet366.coordIndex = [0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1];
IndexedFaceSet366.normalPerVertex = False;
IndexedFaceSet366.solid = False;
Coordinate367 = browser.currentScene.createNode("Coordinate");
Coordinate367.point = [-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0];
IndexedFaceSet366.coord = Coordinate367;

Color368 = browser.currentScene.createNode("Color");
Color368.color = [0.435294,0.741176,0,0,0.560784,0.580392];
IndexedFaceSet366.color = Color368;

Shape363.geometry = IndexedFaceSet366;

Transform362.children = [];

Transform362.children[0] = Shape363;

browser.currentScene.children[16] = Transform362;

Transform369 = browser.currentScene.createNode("Transform");
Transform369.scale = [3,3,3];
Transform369.translation = [0,0.25,0];
Inline370 = browser.currentScene.createNode("Inline");
Inline370.DEF = "CoordinateAxes";
Inline370.url = ["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"];
Transform369.children = [];

Transform369.children[0] = Inline370;

browser.currentScene.children[17] = Transform369;

Transform371 = browser.currentScene.createNode("Transform");
Transform371.DEF = "MovingBoxTransform";
PositionInterpolator372 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator372.DEF = "BoxPath";
PositionInterpolator372.key = [0,0.25,0.5,0.75,1];
PositionInterpolator372.keyValue = [-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5];
Transform371.children = [];

Transform371.children[0] = PositionInterpolator372;

TimeSensor373 = browser.currentScene.createNode("TimeSensor");
TimeSensor373.DEF = "BoxTimer";
TimeSensor373.cycleInterval = 10;
TimeSensor373.loop = True;
Transform371.children[1] = TimeSensor373;

ROUTE374 = browser.currentScene.createNode("ROUTE");
ROUTE374.fromField = "value_changed";
ROUTE374.fromNode = "BoxPath";
ROUTE374.toField = "translation";
ROUTE374.toNode = "MovingBoxTransform";
Transform371.children[2] = ROUTE374;

ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "value_changed";
ROUTE375.fromNode = "BoxPath";
ROUTE375.toField = "goalAimPoint";
ROUTE375.toNode = "MoveAimPoint3.1";
Transform371.children[3] = ROUTE375;

ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "value_changed";
ROUTE376.fromNode = "BoxPath";
ROUTE376.toField = "goalAimPoint";
ROUTE376.toNode = "MoveAimPoint3.2";
Transform371.children[4] = ROUTE376;

ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "value_changed";
ROUTE377.fromNode = "BoxPath";
ROUTE377.toField = "goalAimPoint";
ROUTE377.toNode = "MoveAimPoint3.3";
Transform371.children[5] = ROUTE377;

ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "fraction_changed";
ROUTE378.fromNode = "BoxTimer";
ROUTE378.toField = "set_fraction";
ROUTE378.toNode = "BoxPath";
Transform371.children[6] = ROUTE378;

Shape379 = browser.currentScene.createNode("Shape");
Box380 = browser.currentScene.createNode("Box");
Shape379.geometry = Box380;

Appearance381 = browser.currentScene.createNode("Appearance");
Material382 = browser.currentScene.createNode("Material");
Appearance381.material = Material382;

ImageTexture383 = browser.currentScene.createNode("ImageTexture");
ImageTexture383.url = ["../earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"];
Appearance381.texture = ImageTexture383;

Shape379.appearance = Appearance381;

Transform371.children[7] = Shape379;

browser.currentScene.children[18] = Transform371;

//================ CrossHair visualization for center of screen ================
ExternProtoDeclare384 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare384.name = "CrossHair";
ExternProtoDeclare384.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point";
ExternProtoDeclare384.url = ["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"];
field385 = browser.currentScene.createNode("field");
field385.name = "enabled";
field385.accessType = "initializeOnly";
field385.appinfo = "whether CrissHair orititype is enabled or not";
field385.type = "SFBool";
ExternProtoDeclare384.field = [];

ExternProtoDeclare384.field[0] = field385;

field386 = browser.currentScene.createNode("field");
field386.name = "set_enabled";
field386.accessType = "inputOnly";
field386.appinfo = "control whether enabled/disabled";
field386.type = "SFBool";
ExternProtoDeclare384.field[1] = field386;

field387 = browser.currentScene.createNode("field");
field387.name = "markerColor";
field387.accessType = "inputOutput";
field387.appinfo = "color of CrossHair marker";
field387.type = "SFColor";
ExternProtoDeclare384.field[2] = field387;

field388 = browser.currentScene.createNode("field");
field388.name = "scale";
field388.accessType = "inputOutput";
field388.appinfo = "size of CrossHair in meters";
field388.type = "SFVec3f";
ExternProtoDeclare384.field[3] = field388;

field389 = browser.currentScene.createNode("field");
field389.name = "positionOffsetFromCamera";
field389.accessType = "inputOutput";
field389.appinfo = "distance in front of HUD viewpoint";
field389.type = "SFVec3f";
ExternProtoDeclare384.field[4] = field389;

browser.currentScene.children[19] = ExternProtoDeclare384;

ProtoInstance390 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance390.name = "CrossHair";
ProtoInstance390.DEF = "CrossHairInstance";
fieldValue391 = browser.currentScene.createNode("fieldValue");
fieldValue391.name = "enabled";
fieldValue391.value = "true";
ProtoInstance390.fieldValue = [];

ProtoInstance390.fieldValue[0] = fieldValue391;

fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "markerColor";
fieldValue392.value = "1 0.5 0";
ProtoInstance390.fieldValue[1] = fieldValue392;

fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "scale";
fieldValue393.value = "1 1 1";
ProtoInstance390.fieldValue[2] = fieldValue393;

fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "positionOffsetFromCamera";
fieldValue394.value = "0 0 -6";
ProtoInstance390.fieldValue[3] = fieldValue394;

browser.currentScene.children[20] = ProtoInstance390;

//turn on CrossHairInstance when animated camera viewpoints are bound
ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromField = "isBound";
ROUTE395.fromNode = "Camera.SimpleShotsTest";
ROUTE395.toField = "set_enabled";
ROUTE395.toNode = "CrossHairInstance";
browser.currentScene.children[21] = ROUTE395;

ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromField = "isBound";
ROUTE396.fromNode = "Camera.AimPointTest";
ROUTE396.toField = "set_enabled";
ROUTE396.toNode = "CrossHairInstance";
browser.currentScene.children[22] = ROUTE396;

//turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>
//=============== TODO Launch Prototype Example ==============
Anchor397 = browser.currentScene.createNode("Anchor");
Anchor397.description = "launch CameraExample scene";
Anchor397.parameter = ["target=_blank"];
Anchor397.url = ["CameraExample.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"];
Transform398 = browser.currentScene.createNode("Transform");
Transform398.translation = [0,-3,0];
Shape399 = browser.currentScene.createNode("Shape");
Text400 = browser.currentScene.createNode("Text");
Text400.string = ["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"];
FontStyle401 = browser.currentScene.createNode("FontStyle");
FontStyle401.justify = ["MIDDLE","MIDDLE"];
FontStyle401.size = 0.5;
Text400.fontStyle = FontStyle401;

Shape399.geometry = Text400;

Appearance402 = browser.currentScene.createNode("Appearance");
Material403 = browser.currentScene.createNode("Material");
Material403.diffuseColor = [1,1,0.2];
Appearance402.material = Material403;

Shape399.appearance = Appearance402;

Transform398.children = [];

Transform398.children[0] = Shape399;

Anchor397.children = [];

Anchor397.children[0] = Transform398;

browser.currentScene.children[23] = Anchor397;

