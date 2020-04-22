var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//=============== Camera ==============
WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CameraExamples.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "Camera";
ExternProtoDeclare3.appinfo = "Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images";
ExternProtoDeclare3.url = new MFString(new java.lang.String["CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"]);
field4 = browser.currentScene.createNode("field");
field4.name = "description";
field4.accessType = "inputOutput";
field4.appinfo = "Text description to be displayed for this Camera";
field4.type = "SFString";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "position";
field5.accessType = "inputOutput";
field5.appinfo = "Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field5.type = "SFVec3f";
ExternProtoDeclare3.field[1] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "orientation";
field6.accessType = "inputOutput";
field6.appinfo = "Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated";
field6.type = "SFRotation";
ExternProtoDeclare3.field[2] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "fieldOfView";
field7.accessType = "inputOutput";
field7.appinfo = "pi/4";
field7.type = "SFFloat";
ExternProtoDeclare3.field[3] = field7;

field8 = browser.currentScene.createNode("field");
field8.name = "set_fraction";
field8.accessType = "inputOnly";
field8.appinfo = "input fraction drives interpolators";
field8.type = "SFFloat";
ExternProtoDeclare3.field[4] = field8;

field9 = browser.currentScene.createNode("field");
field9.name = "set_bind";
field9.accessType = "inputOnly";
field9.appinfo = "input event binds or unbinds this Camera";
field9.type = "SFBool";
ExternProtoDeclare3.field[5] = field9;

field10 = browser.currentScene.createNode("field");
field10.name = "bindTime";
field10.accessType = "outputOnly";
field10.appinfo = "output event indicates when this Camera is bound";
field10.type = "SFTime";
ExternProtoDeclare3.field[6] = field10;

field11 = browser.currentScene.createNode("field");
field11.name = "isBound";
field11.accessType = "outputOnly";
field11.appinfo = "output event indicates whether this Camera is bound or unbound";
field11.type = "SFBool";
ExternProtoDeclare3.field[7] = field11;

field12 = browser.currentScene.createNode("field");
field12.name = "nearClipPlane";
field12.accessType = "inputOutput";
field12.appinfo = "Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]";
field12.type = "SFFloat";
ExternProtoDeclare3.field[8] = field12;

field13 = browser.currentScene.createNode("field");
field13.name = "farClipPlane";
field13.accessType = "inputOutput";
field13.appinfo = "Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit";
field13.type = "SFFloat";
ExternProtoDeclare3.field[9] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "shots";
field14.accessType = "inputOutput";
field14.appinfo = "Array of CameraShot nodes which in turn contain CameraMovement nodes";
field14.type = "MFNode";
ExternProtoDeclare3.field[10] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "headlight";
field15.accessType = "inputOutput";
field15.appinfo = "Whether camera headlight is on or off";
field15.type = "SFBool";
ExternProtoDeclare3.field[11] = field15;

field16 = browser.currentScene.createNode("field");
field16.name = "headlightColor";
field16.accessType = "inputOutput";
field16.appinfo = "Camera headlight color";
field16.type = "SFColor";
ExternProtoDeclare3.field[12] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "headlightIntensity";
field17.accessType = "inputOutput";
field17.appinfo = "Camera headlight intensity";
field17.type = "SFFloat";
ExternProtoDeclare3.field[13] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "filterColor";
field18.accessType = "inputOutput";
field18.appinfo = "Camera filter color that modifies virtual lens capture";
field18.type = "SFColor";
ExternProtoDeclare3.field[14] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "filterTransparency";
field19.accessType = "inputOutput";
field19.appinfo = "Camera filter transparency that modifies virtual lens capture";
field19.type = "SFFloat";
ExternProtoDeclare3.field[15] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "upVector";
field20.accessType = "inputOutput";
field20.appinfo = "upVector changes modify camera orientation (and possibly vice versa)";
field20.type = "SFVec3f";
ExternProtoDeclare3.field[16] = field20;

field21 = browser.currentScene.createNode("field");
field21.name = "fStop";
field21.accessType = "inputOutput";
field21.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field21.type = "SFFloat";
ExternProtoDeclare3.field[17] = field21;

field22 = browser.currentScene.createNode("field");
field22.name = "focusDistance";
field22.accessType = "inputOutput";
field22.appinfo = "Distance to focal plane of sharpest focus";
field22.type = "SFFloat";
ExternProtoDeclare3.field[18] = field22;

field23 = browser.currentScene.createNode("field");
field23.name = "isActive";
field23.accessType = "outputOnly";
field23.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field23.type = "SFBool";
ExternProtoDeclare3.field[19] = field23;

field24 = browser.currentScene.createNode("field");
field24.name = "totalDuration";
field24.accessType = "outputOnly";
field24.appinfo = "Total duration of contained enabled CameraShot (and thus CameraMovement) move durations";
field24.type = "SFTime";
ExternProtoDeclare3.field[20] = field24;

field25 = browser.currentScene.createNode("field");
field25.name = "offlineRender";
field25.accessType = "inputOutput";
field25.appinfo = "OfflineRender node";
field25.type = "SFNode";
ExternProtoDeclare3.field[21] = field25;

field26 = browser.currentScene.createNode("field");
field26.name = "traceEnabled";
field26.accessType = "initializeOnly";
field26.appinfo = "enable console output to trace script computations and prototype progress";
field26.type = "SFBool";
ExternProtoDeclare3.field[22] = field26;

//Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields
browser.currentScene.children[1] = ExternProtoDeclare3;

//=============== CameraShot ==============
ExternProtoDeclare27 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare27.name = "CameraShot";
ExternProtoDeclare27.appinfo = "CameraShot collects a specific set of CameraMovement animations that make up an individual shot";
ExternProtoDeclare27.url = new MFString(new java.lang.String["CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"]);
field28 = browser.currentScene.createNode("field");
field28.name = "description";
field28.accessType = "inputOutput";
field28.appinfo = "Text description to be displayed for this CameraShot";
field28.type = "SFString";
ExternProtoDeclare27.field = new MFNode();

ExternProtoDeclare27.field[0] = field28;

field29 = browser.currentScene.createNode("field");
field29.name = "enabled";
field29.accessType = "inputOutput";
field29.appinfo = "Whether this CameraShot can be activated";
field29.type = "SFBool";
ExternProtoDeclare27.field[1] = field29;

field30 = browser.currentScene.createNode("field");
field30.name = "moves";
field30.accessType = "inputOutput";
field30.appinfo = "Set of CameraMovement nodes";
field30.type = "MFNode";
//initializing CameraMovement nodes are inserted here by scene author using ProtoInstance
ExternProtoDeclare27.field[2] = field30;

field31 = browser.currentScene.createNode("field");
field31.name = "initialPosition";
field31.accessType = "inputOutput";
field31.appinfo = "Setup to reinitialize camera position for this shot";
field31.type = "SFVec3f";
ExternProtoDeclare27.field[3] = field31;

field32 = browser.currentScene.createNode("field");
field32.name = "initialOrientation";
field32.accessType = "inputOutput";
field32.appinfo = "Setup to reinitialize camera rotation for this shot";
field32.type = "SFRotation";
ExternProtoDeclare27.field[4] = field32;

field33 = browser.currentScene.createNode("field");
field33.name = "initialAimPoint";
field33.accessType = "inputOutput";
field33.appinfo = "Setup to reinitialize aimpoint (relative location for camera direction) for this shot";
field33.type = "SFVec3f";
ExternProtoDeclare27.field[5] = field33;

field34 = browser.currentScene.createNode("field");
field34.name = "initialFieldOfView";
field34.accessType = "inputOutput";
field34.appinfo = "pi/4";
field34.type = "SFFloat";
ExternProtoDeclare27.field[6] = field34;

field35 = browser.currentScene.createNode("field");
field35.name = "initialFStop";
field35.accessType = "inputOutput";
field35.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field35.type = "SFFloat";
ExternProtoDeclare27.field[7] = field35;

field36 = browser.currentScene.createNode("field");
field36.name = "initialFocusDistance";
field36.accessType = "inputOutput";
field36.appinfo = "Distance to focal plane of sharpest focus";
field36.type = "SFFloat";
ExternProtoDeclare27.field[8] = field36;

field37 = browser.currentScene.createNode("field");
field37.name = "shotDuration";
field37.accessType = "outputOnly";
field37.appinfo = "Subtotal duration of contained CameraMovement move durations";
field37.type = "SFTime";
ExternProtoDeclare27.field[9] = field37;

field38 = browser.currentScene.createNode("field");
field38.name = "isActive";
field38.accessType = "outputOnly";
field38.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field38.type = "SFBool";
ExternProtoDeclare27.field[10] = field38;

field39 = browser.currentScene.createNode("field");
field39.name = "traceEnabled";
field39.accessType = "initializeOnly";
field39.appinfo = "enable console output to trace script computations and prototype progress";
field39.type = "SFBool";
ExternProtoDeclare27.field[11] = field39;

browser.currentScene.children[2] = ExternProtoDeclare27;

//=============== CameraMovement ==============
ExternProtoDeclare40 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare40.name = "CameraMovement";
ExternProtoDeclare40.appinfo = "CameraMovement defines a single camera movement animation";
ExternProtoDeclare40.url = new MFString(new java.lang.String["CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"]);
field41 = browser.currentScene.createNode("field");
field41.name = "description";
field41.accessType = "inputOutput";
field41.appinfo = "Text description to be displayed for this CameraMovement";
field41.type = "SFString";
ExternProtoDeclare40.field = new MFNode();

ExternProtoDeclare40.field[0] = field41;

field42 = browser.currentScene.createNode("field");
field42.name = "enabled";
field42.accessType = "inputOutput";
field42.appinfo = "Whether this CameraMovement can be activated";
field42.type = "SFBool";
ExternProtoDeclare40.field[1] = field42;

field43 = browser.currentScene.createNode("field");
field43.name = "duration";
field43.accessType = "inputOutput";
field43.appinfo = "Duration in seconds for this move";
field43.type = "SFFloat";
ExternProtoDeclare40.field[2] = field43;

field44 = browser.currentScene.createNode("field");
field44.name = "goalPosition";
field44.accessType = "inputOutput";
field44.appinfo = "Goal camera position for this move";
field44.type = "SFVec3f";
ExternProtoDeclare40.field[3] = field44;

field45 = browser.currentScene.createNode("field");
field45.name = "goalOrientation";
field45.accessType = "inputOutput";
field45.appinfo = "Goal camera rotation for this move";
field45.type = "SFRotation";
ExternProtoDeclare40.field[4] = field45;

field46 = browser.currentScene.createNode("field");
field46.name = "tracking";
field46.accessType = "inputOutput";
field46.appinfo = "Whether or not camera direction is tracking towards the aimPoint";
field46.type = "SFBool";
ExternProtoDeclare40.field[5] = field46;

field47 = browser.currentScene.createNode("field");
field47.name = "goalAimPoint";
field47.accessType = "inputOutput";
field47.appinfo = "Goal aimPoint for this move, ignored if tracking=false";
field47.type = "SFVec3f";
ExternProtoDeclare40.field[6] = field47;

field48 = browser.currentScene.createNode("field");
field48.name = "goalFieldOfView";
field48.accessType = "inputOutput";
field48.appinfo = "Goal fieldOfView for this move";
field48.type = "SFFloat";
ExternProtoDeclare40.field[7] = field48;

field49 = browser.currentScene.createNode("field");
field49.name = "goalFStop";
field49.accessType = "inputOutput";
field49.appinfo = "Focal length divided effective aperture diameter indicating width of focal plane";
field49.type = "SFFloat";
ExternProtoDeclare40.field[8] = field49;

field50 = browser.currentScene.createNode("field");
field50.name = "goalFocusDistance";
field50.accessType = "inputOutput";
field50.appinfo = "Distance to focal plane of sharpest focus";
field50.type = "SFFloat";
ExternProtoDeclare40.field[9] = field50;

field51 = browser.currentScene.createNode("field");
field51.name = "isActive";
field51.accessType = "outputOnly";
field51.appinfo = "Mark start/stop with true/false output respectively useful to trigger external animations";
field51.type = "SFBool";
ExternProtoDeclare40.field[10] = field51;

field52 = browser.currentScene.createNode("field");
field52.name = "traceEnabled";
field52.accessType = "initializeOnly";
field52.appinfo = "enable console output to trace script computations and prototype progress";
field52.type = "SFBool";
ExternProtoDeclare40.field[11] = field52;

browser.currentScene.children[3] = ExternProtoDeclare40;

//=============== OfflineRender ==============
ExternProtoDeclare53 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare53.name = "OfflineRender";
ExternProtoDeclare53.appinfo = "OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)";
ExternProtoDeclare53.url = new MFString(new java.lang.String["CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"]);
field54 = browser.currentScene.createNode("field");
field54.name = "description";
field54.accessType = "inputOutput";
field54.appinfo = "Text description to be displayed for this OfflineRender";
field54.type = "SFString";
ExternProtoDeclare53.field = new MFNode();

ExternProtoDeclare53.field[0] = field54;

field55 = browser.currentScene.createNode("field");
field55.name = "enabled";
field55.accessType = "inputOutput";
field55.appinfo = "Whether this OfflineRender can be activated";
field55.type = "SFBool";
ExternProtoDeclare53.field[1] = field55;

field56 = browser.currentScene.createNode("field");
field56.name = "frameRate";
field56.accessType = "inputOutput";
field56.appinfo = "Frames per second recorded for this rendering";
field56.type = "SFFloat";
ExternProtoDeclare53.field[2] = field56;

field57 = browser.currentScene.createNode("field");
field57.name = "frameSize";
field57.accessType = "inputOutput";
field57.appinfo = "Size of frame in number of pixels width and height";
field57.type = "SFVec2f";
ExternProtoDeclare53.field[3] = field57;

field58 = browser.currentScene.createNode("field");
field58.name = "pixelAspectRatio";
field58.accessType = "inputOutput";
field58.appinfo = "Relative dimensions of pixel height/width typically 1.33 or 1";
field58.type = "SFFloat";
ExternProtoDeclare53.field[4] = field58;

field59 = browser.currentScene.createNode("field");
field59.name = "set_startTime";
field59.accessType = "inputOnly";
field59.appinfo = "Begin render operation";
field59.type = "SFTime";
ExternProtoDeclare53.field[5] = field59;

field60 = browser.currentScene.createNode("field");
field60.name = "progress";
field60.accessType = "outputOnly";
field60.appinfo = "Progress performing render operation (0..1)";
field60.type = "SFFloat";
ExternProtoDeclare53.field[6] = field60;

field61 = browser.currentScene.createNode("field");
field61.name = "renderCompleteTime";
field61.accessType = "outputOnly";
field61.appinfo = "Render operation complete";
field61.type = "SFTime";
ExternProtoDeclare53.field[7] = field61;

field62 = browser.currentScene.createNode("field");
field62.name = "movieFormat";
field62.accessType = "initializeOnly";
field62.appinfo = "Format of rendered output movie (mpeg mp4 etc.), use first supported format";
field62.type = "MFString";
ExternProtoDeclare53.field[8] = field62;

field63 = browser.currentScene.createNode("field");
field63.name = "imageFormat";
field63.accessType = "initializeOnly";
field63.appinfo = "Format of rendered output images (png jpeg gif tiff etc.) use first supported format";
field63.type = "MFString";
ExternProtoDeclare53.field[9] = field63;

field64 = browser.currentScene.createNode("field");
field64.name = "traceEnabled";
field64.accessType = "initializeOnly";
field64.appinfo = "enable console output to trace script computations and prototype progress";
field64.type = "SFBool";
ExternProtoDeclare53.field[10] = field64;

//TODO non-photorealistic rendering (NPR) parameters
browser.currentScene.children[4] = ExternProtoDeclare53;

//=============== Lights, camera, action! ==============
DirectionalLight65 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight65.direction = new SFVec3f(new float[0,-1,0]);
DirectionalLight65.global = True;
DirectionalLight65.intensity = 0.8;
browser.currentScene.children[5] = DirectionalLight65;

NavigationInfo66 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo66.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo66;

Viewpoint67 = browser.currentScene.createNode("Viewpoint");
Viewpoint67.description = "Camera test scene entry view";
Viewpoint67.position = new SFVec3f(new float[0,2,12]);
browser.currentScene.children[7] = Viewpoint67;

Viewpoint68 = browser.currentScene.createNode("Viewpoint");
Viewpoint68.description = "Camera test scene from above";
Viewpoint68.orientation = new SFRotation(new float[1,0,0,-1.57079]);
Viewpoint68.position = new SFVec3f(new float[0,150,0]);
browser.currentScene.children[8] = Viewpoint68;

//Keep prototype instances in same file while developing, then move later
//We will create examples matching those in the paper
//=============== Camera.SimpleShotsTest ==============
ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "Camera";
ProtoInstance69.DEF = "Camera.SimpleShotsTest";
fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "description";
fieldValue70.value = "SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "headlight";
fieldValue71.value = "true";
ProtoInstance69.fieldValue[1] = fieldValue71;

fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "position";
fieldValue72.value = "-4 4 10";
ProtoInstance69.fieldValue[2] = fieldValue72;

fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "shots";
ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "CameraShot";
ProtoInstance74.DEF = "Zoom";
fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "description";
fieldValue75.value = "Simple shot of Camera Zoom";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "initialPosition";
fieldValue76.value = "-50 1 -10";
ProtoInstance74.fieldValue[1] = fieldValue76;

fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "initialOrientation";
fieldValue77.value = "0 1 0 0";
ProtoInstance74.fieldValue[2] = fieldValue77;

fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "moves";
ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "CameraMovement";
fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "description";
fieldValue80.value = "Camera Zoom In";
ProtoInstance79.fieldValue = new MFNode();

ProtoInstance79.fieldValue[0] = fieldValue80;

fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "duration";
fieldValue81.value = "3";
ProtoInstance79.fieldValue[1] = fieldValue81;

fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "goalPosition";
fieldValue82.value = "-50 1 -15";
ProtoInstance79.fieldValue[2] = fieldValue82;

fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "goalOrientation";
fieldValue83.value = "0 1 0 0";
ProtoInstance79.fieldValue[3] = fieldValue83;

fieldValue78.children = new MFNode();

fieldValue78.children[0] = ProtoInstance79;

ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.name = "CameraMovement";
fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "description";
fieldValue85.value = "Camera Zoom Out";
ProtoInstance84.fieldValue = new MFNode();

ProtoInstance84.fieldValue[0] = fieldValue85;

fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "duration";
fieldValue86.value = "3";
ProtoInstance84.fieldValue[1] = fieldValue86;

fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "goalPosition";
fieldValue87.value = "-50 1 -10";
ProtoInstance84.fieldValue[2] = fieldValue87;

fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "goalOrientation";
fieldValue88.value = "0 1 0 0";
ProtoInstance84.fieldValue[3] = fieldValue88;

fieldValue78.children[1] = ProtoInstance84;

ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "CameraMovement";
fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "description";
fieldValue90.value = "Camera Pause";
ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "duration";
fieldValue91.value = "1";
ProtoInstance89.fieldValue[1] = fieldValue91;

fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "goalPosition";
fieldValue92.value = "-50 1 -10";
ProtoInstance89.fieldValue[2] = fieldValue92;

fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "goalOrientation";
fieldValue93.value = "0 1 0 0";
ProtoInstance89.fieldValue[3] = fieldValue93;

fieldValue78.children[2] = ProtoInstance89;

ProtoInstance74.fieldValue[3] = fieldValue78;

fieldValue73.children = new MFNode();

fieldValue73.children[0] = ProtoInstance74;

ProtoInstance94 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance94.name = "CameraShot";
ProtoInstance94.DEF = "Dolly";
fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "description";
fieldValue95.value = "Simple shot of Camera Dolly";
ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "initialPosition";
fieldValue96.value = "-40 1 -10";
ProtoInstance94.fieldValue[1] = fieldValue96;

fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "initialOrientation";
fieldValue97.value = "0 1 0 0";
ProtoInstance94.fieldValue[2] = fieldValue97;

fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "moves";
ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "CameraMovement";
ProtoInstance99.DEF = "DollyMove1";
fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "description";
fieldValue100.value = "Camera Dolly from Right to Left";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "duration";
fieldValue101.value = "3";
ProtoInstance99.fieldValue[1] = fieldValue101;

fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "goalPosition";
fieldValue102.value = "-45 1 -10";
ProtoInstance99.fieldValue[2] = fieldValue102;

fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "goalOrientation";
fieldValue103.value = "0 1 0 0";
ProtoInstance99.fieldValue[3] = fieldValue103;

fieldValue98.children = new MFNode();

fieldValue98.children[0] = ProtoInstance99;

ProtoInstance104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance104.name = "CameraMovement";
fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "description";
fieldValue105.value = "Camera Dolly from Left to Right";
ProtoInstance104.fieldValue = new MFNode();

ProtoInstance104.fieldValue[0] = fieldValue105;

fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "duration";
fieldValue106.value = "3";
ProtoInstance104.fieldValue[1] = fieldValue106;

fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "goalPosition";
fieldValue107.value = "-40 1 -10";
ProtoInstance104.fieldValue[2] = fieldValue107;

fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "goalOrientation";
fieldValue108.value = "0 1 0 0";
ProtoInstance104.fieldValue[3] = fieldValue108;

fieldValue98.children[1] = ProtoInstance104;

ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.name = "CameraMovement";
fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "description";
fieldValue110.value = "Camera Pause";
ProtoInstance109.fieldValue = new MFNode();

ProtoInstance109.fieldValue[0] = fieldValue110;

fieldValue111 = browser.currentScene.createNode("fieldValue");
fieldValue111.name = "duration";
fieldValue111.value = "1";
ProtoInstance109.fieldValue[1] = fieldValue111;

fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "goalPosition";
fieldValue112.value = "-40 1 -10";
ProtoInstance109.fieldValue[2] = fieldValue112;

fieldValue113 = browser.currentScene.createNode("fieldValue");
fieldValue113.name = "goalOrientation";
fieldValue113.value = "0 1 0 0";
ProtoInstance109.fieldValue[3] = fieldValue113;

fieldValue98.children[2] = ProtoInstance109;

ProtoInstance94.fieldValue[3] = fieldValue98;

fieldValue73.children[1] = ProtoInstance94;

ProtoInstance114 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance114.name = "CameraShot";
ProtoInstance114.DEF = "Pan";
fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "description";
fieldValue115.value = "Simple shot of Camera Pan left right and back to center";
ProtoInstance114.fieldValue = new MFNode();

ProtoInstance114.fieldValue[0] = fieldValue115;

fieldValue116 = browser.currentScene.createNode("fieldValue");
fieldValue116.name = "initialPosition";
fieldValue116.value = "-30 1 -10";
ProtoInstance114.fieldValue[1] = fieldValue116;

fieldValue117 = browser.currentScene.createNode("fieldValue");
fieldValue117.name = "initialOrientation";
fieldValue117.value = "0 1 0 0";
ProtoInstance114.fieldValue[2] = fieldValue117;

fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "moves";
ProtoInstance119 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance119.name = "CameraMovement";
ProtoInstance119.DEF = "PanLeft";
fieldValue120 = browser.currentScene.createNode("fieldValue");
fieldValue120.name = "description";
fieldValue120.value = "Pan Left";
ProtoInstance119.fieldValue = new MFNode();

ProtoInstance119.fieldValue[0] = fieldValue120;

fieldValue121 = browser.currentScene.createNode("fieldValue");
fieldValue121.name = "duration";
fieldValue121.value = "2";
ProtoInstance119.fieldValue[1] = fieldValue121;

fieldValue122 = browser.currentScene.createNode("fieldValue");
fieldValue122.name = "goalPosition";
fieldValue122.value = "-30 1 -10";
ProtoInstance119.fieldValue[2] = fieldValue122;

fieldValue123 = browser.currentScene.createNode("fieldValue");
fieldValue123.name = "goalOrientation";
fieldValue123.value = "0 1 0 0.4";
ProtoInstance119.fieldValue[3] = fieldValue123;

fieldValue118.children = new MFNode();

fieldValue118.children[0] = ProtoInstance119;

ProtoInstance124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance124.name = "CameraMovement";
ProtoInstance124.DEF = "PanRight";
fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "description";
fieldValue125.value = "Pan Right";
ProtoInstance124.fieldValue = new MFNode();

ProtoInstance124.fieldValue[0] = fieldValue125;

fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "duration";
fieldValue126.value = "3";
ProtoInstance124.fieldValue[1] = fieldValue126;

fieldValue127 = browser.currentScene.createNode("fieldValue");
fieldValue127.name = "goalPosition";
fieldValue127.value = "-30 1 -10";
ProtoInstance124.fieldValue[2] = fieldValue127;

fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "goalOrientation";
fieldValue128.value = "0 1 0 -0.4";
ProtoInstance124.fieldValue[3] = fieldValue128;

fieldValue118.children[1] = ProtoInstance124;

ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "CameraMovement";
fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "description";
fieldValue130.value = "Camera Pan back to Center";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

fieldValue131 = browser.currentScene.createNode("fieldValue");
fieldValue131.name = "duration";
fieldValue131.value = "2";
ProtoInstance129.fieldValue[1] = fieldValue131;

fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "goalPosition";
fieldValue132.value = "-30 1 -10";
ProtoInstance129.fieldValue[2] = fieldValue132;

fieldValue133 = browser.currentScene.createNode("fieldValue");
fieldValue133.name = "goalOrientation";
fieldValue133.value = "0 1 0 0";
ProtoInstance129.fieldValue[3] = fieldValue133;

fieldValue118.children[2] = ProtoInstance129;

ProtoInstance134 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance134.name = "CameraMovement";
fieldValue135 = browser.currentScene.createNode("fieldValue");
fieldValue135.name = "description";
fieldValue135.value = "Camera Pause";
ProtoInstance134.fieldValue = new MFNode();

ProtoInstance134.fieldValue[0] = fieldValue135;

fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "duration";
fieldValue136.value = "2";
ProtoInstance134.fieldValue[1] = fieldValue136;

fieldValue137 = browser.currentScene.createNode("fieldValue");
fieldValue137.name = "goalPosition";
fieldValue137.value = "-30 1 -10";
ProtoInstance134.fieldValue[2] = fieldValue137;

fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "goalOrientation";
fieldValue138.value = "0 1 0 0";
ProtoInstance134.fieldValue[3] = fieldValue138;

fieldValue118.children[3] = ProtoInstance134;

ProtoInstance114.fieldValue[3] = fieldValue118;

fieldValue73.children[2] = ProtoInstance114;

ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "CameraShot";
ProtoInstance139.DEF = "CameraBoom";
fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "description";
fieldValue140.value = "Camera Boom";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

fieldValue141 = browser.currentScene.createNode("fieldValue");
fieldValue141.name = "initialPosition";
fieldValue141.value = "-20 1 -10";
ProtoInstance139.fieldValue[1] = fieldValue141;

fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "initialOrientation";
fieldValue142.value = "0 1 0 0";
ProtoInstance139.fieldValue[2] = fieldValue142;

fieldValue143 = browser.currentScene.createNode("fieldValue");
fieldValue143.name = "moves";
ProtoInstance144 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance144.name = "CameraMovement";
ProtoInstance144.DEF = "CameraBoomUp";
fieldValue145 = browser.currentScene.createNode("fieldValue");
fieldValue145.name = "description";
fieldValue145.value = "Camera Boom Up";
ProtoInstance144.fieldValue = new MFNode();

ProtoInstance144.fieldValue[0] = fieldValue145;

fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "duration";
fieldValue146.value = "3";
ProtoInstance144.fieldValue[1] = fieldValue146;

fieldValue147 = browser.currentScene.createNode("fieldValue");
fieldValue147.name = "goalPosition";
fieldValue147.value = "-20 5 -10";
ProtoInstance144.fieldValue[2] = fieldValue147;

fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "goalOrientation";
fieldValue148.value = "0 1 0 0";
ProtoInstance144.fieldValue[3] = fieldValue148;

fieldValue143.children = new MFNode();

fieldValue143.children[0] = ProtoInstance144;

ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "CameraMovement";
ProtoInstance149.DEF = "BoomDown";
fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "description";
fieldValue150.value = "Camera Boom Down";
ProtoInstance149.fieldValue = new MFNode();

ProtoInstance149.fieldValue[0] = fieldValue150;

fieldValue151 = browser.currentScene.createNode("fieldValue");
fieldValue151.name = "duration";
fieldValue151.value = "3";
ProtoInstance149.fieldValue[1] = fieldValue151;

fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "goalPosition";
fieldValue152.value = "-20 1 -10";
ProtoInstance149.fieldValue[2] = fieldValue152;

fieldValue153 = browser.currentScene.createNode("fieldValue");
fieldValue153.name = "goalOrientation";
fieldValue153.value = "0 1 0 0";
ProtoInstance149.fieldValue[3] = fieldValue153;

fieldValue143.children[1] = ProtoInstance149;

ProtoInstance154 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance154.name = "CameraMovement";
ProtoInstance154.DEF = "BoomPause";
fieldValue155 = browser.currentScene.createNode("fieldValue");
fieldValue155.name = "description";
fieldValue155.value = "Camera Pause";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "duration";
fieldValue156.value = "2";
ProtoInstance154.fieldValue[1] = fieldValue156;

fieldValue157 = browser.currentScene.createNode("fieldValue");
fieldValue157.name = "goalPosition";
fieldValue157.value = "-20 1 -10";
ProtoInstance154.fieldValue[2] = fieldValue157;

fieldValue158 = browser.currentScene.createNode("fieldValue");
fieldValue158.name = "goalOrientation";
fieldValue158.value = "0 1 0 0";
ProtoInstance154.fieldValue[3] = fieldValue158;

fieldValue143.children[2] = ProtoInstance154;

ProtoInstance139.fieldValue[3] = fieldValue143;

fieldValue73.children[3] = ProtoInstance139;

ProtoInstance159 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance159.name = "CameraShot";
ProtoInstance159.DEF = "CameraTilt";
fieldValue160 = browser.currentScene.createNode("fieldValue");
fieldValue160.name = "description";
fieldValue160.value = "Camera Tilt";
ProtoInstance159.fieldValue = new MFNode();

ProtoInstance159.fieldValue[0] = fieldValue160;

fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "initialPosition";
fieldValue161.value = "-10 1 -10";
ProtoInstance159.fieldValue[1] = fieldValue161;

fieldValue162 = browser.currentScene.createNode("fieldValue");
fieldValue162.name = "initialOrientation";
fieldValue162.value = "0 0 1 0";
ProtoInstance159.fieldValue[2] = fieldValue162;

fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "traceEnabled";
fieldValue163.value = "true";
ProtoInstance159.fieldValue[3] = fieldValue163;

fieldValue164 = browser.currentScene.createNode("fieldValue");
fieldValue164.name = "moves";
ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "CameraMovement";
fieldValue166 = browser.currentScene.createNode("fieldValue");
fieldValue166.name = "description";
fieldValue166.value = "Camera Tilt Pause";
ProtoInstance165.fieldValue = new MFNode();

ProtoInstance165.fieldValue[0] = fieldValue166;

fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "duration";
fieldValue167.value = "1";
ProtoInstance165.fieldValue[1] = fieldValue167;

fieldValue168 = browser.currentScene.createNode("fieldValue");
fieldValue168.name = "goalPosition";
fieldValue168.value = "-10 1 -10";
ProtoInstance165.fieldValue[2] = fieldValue168;

fieldValue169 = browser.currentScene.createNode("fieldValue");
fieldValue169.name = "goalOrientation";
fieldValue169.value = "0 0 1 0";
ProtoInstance165.fieldValue[3] = fieldValue169;

fieldValue164.children = new MFNode();

fieldValue164.children[0] = ProtoInstance165;

ProtoInstance170 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance170.name = "CameraMovement";
ProtoInstance170.DEF = "TiltDown";
fieldValue171 = browser.currentScene.createNode("fieldValue");
fieldValue171.name = "description";
fieldValue171.value = "Camera Tilt Left";
ProtoInstance170.fieldValue = new MFNode();

ProtoInstance170.fieldValue[0] = fieldValue171;

fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "duration";
fieldValue172.value = "3";
ProtoInstance170.fieldValue[1] = fieldValue172;

fieldValue173 = browser.currentScene.createNode("fieldValue");
fieldValue173.name = "goalPosition";
fieldValue173.value = "-10 1 -10";
ProtoInstance170.fieldValue[2] = fieldValue173;

fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "goalOrientation";
fieldValue174.value = "0 0 1 0.785";
ProtoInstance170.fieldValue[3] = fieldValue174;

fieldValue164.children[1] = ProtoInstance170;

ProtoInstance175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance175.name = "CameraMovement";
ProtoInstance175.DEF = "TiltPause";
fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "description";
fieldValue176.value = "Camera Tilt Pause";
ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

fieldValue177 = browser.currentScene.createNode("fieldValue");
fieldValue177.name = "duration";
fieldValue177.value = "1";
ProtoInstance175.fieldValue[1] = fieldValue177;

fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "goalPosition";
fieldValue178.value = "-10 1 -10";
ProtoInstance175.fieldValue[2] = fieldValue178;

fieldValue179 = browser.currentScene.createNode("fieldValue");
fieldValue179.name = "goalOrientation";
fieldValue179.value = "0 0 1 0.785";
ProtoInstance175.fieldValue[3] = fieldValue179;

fieldValue164.children[2] = ProtoInstance175;

ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "CameraMovement";
fieldValue181 = browser.currentScene.createNode("fieldValue");
fieldValue181.name = "description";
fieldValue181.value = "Camera Tilt Right";
ProtoInstance180.fieldValue = new MFNode();

ProtoInstance180.fieldValue[0] = fieldValue181;

fieldValue182 = browser.currentScene.createNode("fieldValue");
fieldValue182.name = "duration";
fieldValue182.value = "3";
ProtoInstance180.fieldValue[1] = fieldValue182;

fieldValue183 = browser.currentScene.createNode("fieldValue");
fieldValue183.name = "goalPosition";
fieldValue183.value = "-10 1 -10";
ProtoInstance180.fieldValue[2] = fieldValue183;

fieldValue184 = browser.currentScene.createNode("fieldValue");
fieldValue184.name = "goalOrientation";
fieldValue184.value = "0 0 1 -0.785";
ProtoInstance180.fieldValue[3] = fieldValue184;

fieldValue164.children[3] = ProtoInstance180;

ProtoInstance185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance185.name = "CameraMovement";
fieldValue186 = browser.currentScene.createNode("fieldValue");
fieldValue186.name = "description";
fieldValue186.value = "Camera Tilt Pause";
ProtoInstance185.fieldValue = new MFNode();

ProtoInstance185.fieldValue[0] = fieldValue186;

fieldValue187 = browser.currentScene.createNode("fieldValue");
fieldValue187.name = "duration";
fieldValue187.value = "1";
ProtoInstance185.fieldValue[1] = fieldValue187;

fieldValue188 = browser.currentScene.createNode("fieldValue");
fieldValue188.name = "goalPosition";
fieldValue188.value = "-10 1 -10";
ProtoInstance185.fieldValue[2] = fieldValue188;

fieldValue189 = browser.currentScene.createNode("fieldValue");
fieldValue189.name = "goalOrientation";
fieldValue189.value = "0 0 1 -0.785";
ProtoInstance185.fieldValue[3] = fieldValue189;

fieldValue164.children[4] = ProtoInstance185;

ProtoInstance190 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance190.name = "CameraMovement";
ProtoInstance190.DEF = "TiltReset";
fieldValue191 = browser.currentScene.createNode("fieldValue");
fieldValue191.name = "description";
fieldValue191.value = "Camera Tilt Reset";
ProtoInstance190.fieldValue = new MFNode();

ProtoInstance190.fieldValue[0] = fieldValue191;

fieldValue192 = browser.currentScene.createNode("fieldValue");
fieldValue192.name = "duration";
fieldValue192.value = "1";
ProtoInstance190.fieldValue[1] = fieldValue192;

fieldValue193 = browser.currentScene.createNode("fieldValue");
fieldValue193.name = "goalPosition";
fieldValue193.value = "-10 1 -10";
ProtoInstance190.fieldValue[2] = fieldValue193;

fieldValue194 = browser.currentScene.createNode("fieldValue");
fieldValue194.name = "goalOrientation";
fieldValue194.value = "0 0 1 0";
ProtoInstance190.fieldValue[3] = fieldValue194;

fieldValue164.children[5] = ProtoInstance190;

ProtoInstance195 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance195.name = "CameraMovement";
ProtoInstance195.DEF = "TiltUp";
fieldValue196 = browser.currentScene.createNode("fieldValue");
fieldValue196.name = "description";
fieldValue196.value = "Return to home";
ProtoInstance195.fieldValue = new MFNode();

ProtoInstance195.fieldValue[0] = fieldValue196;

fieldValue197 = browser.currentScene.createNode("fieldValue");
fieldValue197.name = "duration";
fieldValue197.value = "2";
ProtoInstance195.fieldValue[1] = fieldValue197;

fieldValue198 = browser.currentScene.createNode("fieldValue");
fieldValue198.name = "goalPosition";
fieldValue198.value = "0 2 12";
ProtoInstance195.fieldValue[2] = fieldValue198;

fieldValue199 = browser.currentScene.createNode("fieldValue");
fieldValue199.name = "goalOrientation";
fieldValue199.value = "0 0 1 0";
ProtoInstance195.fieldValue[3] = fieldValue199;

fieldValue164.children[6] = ProtoInstance195;

ProtoInstance159.fieldValue[4] = fieldValue164;

fieldValue73.children[4] = ProtoInstance159;

ProtoInstance69.fieldValue[3] = fieldValue73;

browser.currentScene.children[9] = ProtoInstance69;

Group200 = browser.currentScene.createNode("Group");
Group200.DEF = "AnimationGroup.SimpleShots";
TimeSensor201 = browser.currentScene.createNode("TimeSensor");
TimeSensor201.DEF = "CameraTimer.SimpleShots";
Group200.children = new MFNode();

Group200.children[0] = TimeSensor201;

//initialize clock to match totalDuration of combined Shot Moves
ROUTE202 = browser.currentScene.createNode("ROUTE");
ROUTE202.fromField = "totalDuration";
ROUTE202.fromNode = "Camera.SimpleShotsTest";
ROUTE202.toField = "cycleInterval";
ROUTE202.toNode = "CameraTimer.SimpleShots";
Group200.children[1] = ROUTE202;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
ROUTE203 = browser.currentScene.createNode("ROUTE");
ROUTE203.fromField = "fraction_changed";
ROUTE203.fromNode = "CameraTimer.SimpleShots";
ROUTE203.toField = "set_fraction";
ROUTE203.toNode = "Camera.SimpleShotsTest";
Group200.children[2] = ROUTE203;

Transform204 = browser.currentScene.createNode("Transform");
Transform204.DEF = "Trigger.SimpleShots";
Transform204.translation = new SFVec3f(new float[-4,4,0]);
BooleanFilter205 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter205.DEF = "TextTouchActive.SimpleShotsFilter";
Transform204.children = new MFNode();

Transform204.children[0] = BooleanFilter205;

TouchSensor206 = browser.currentScene.createNode("TouchSensor");
TouchSensor206.DEF = "TextTouch.SimpleShots";
TouchSensor206.description = "touch to animate Camera SimpleShotsTest";
Transform204.children[1] = TouchSensor206;

ROUTE207 = browser.currentScene.createNode("ROUTE");
ROUTE207.fromField = "inputTrue";
ROUTE207.fromNode = "TextTouchActive.SimpleShotsFilter";
ROUTE207.toField = "set_bind";
ROUTE207.toNode = "Camera.SimpleShotsTest";
Transform204.children[2] = ROUTE207;

ROUTE208 = browser.currentScene.createNode("ROUTE");
ROUTE208.fromField = "isActive";
ROUTE208.fromNode = "TextTouch.SimpleShots";
ROUTE208.toField = "set_boolean";
ROUTE208.toNode = "TextTouchActive.SimpleShotsFilter";
Transform204.children[3] = ROUTE208;

ROUTE209 = browser.currentScene.createNode("ROUTE");
ROUTE209.fromField = "touchTime";
ROUTE209.fromNode = "TextTouch.SimpleShots";
ROUTE209.toField = "startTime";
ROUTE209.toNode = "CameraTimer.SimpleShots";
Transform204.children[4] = ROUTE209;

Shape210 = browser.currentScene.createNode("Shape");
Text211 = browser.currentScene.createNode("Text");
Text211.string = new MFString(new java.lang.String["Click to animate","SimpleShotsTest"]);
FontStyle212 = browser.currentScene.createNode("FontStyle");
FontStyle212.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text211.fontStyle = FontStyle212;

Shape210.geometry = Text211;

Appearance213 = browser.currentScene.createNode("Appearance");
Material214 = browser.currentScene.createNode("Material");
Material214.DEF = "ArtDeco5";
Material214.ambientIntensity = 0.24;
Material214.diffuseColor = new SFColor(new float[0.945455,0.318988,0.321717]);
Material214.shininess = 0.01;
Material214.specularColor = new SFColor(new float[0.072727,0.021705,0.010732]);
//Universal Media Library: ArtDeco 5
Appearance213.material = Material214;

Shape210.appearance = Appearance213;

Transform204.children[5] = Shape210;

//Simplify intersection test for user selecting text
Shape215 = browser.currentScene.createNode("Shape");
Shape215.DEF = "TransparentBox";
Appearance216 = browser.currentScene.createNode("Appearance");
Material217 = browser.currentScene.createNode("Material");
Material217.transparency = 1;
Appearance216.material = Material217;

Shape215.appearance = Appearance216;

Box218 = browser.currentScene.createNode("Box");
Box218.size = new SFVec3f(new float[6,2,0.0001]);
Shape215.geometry = Box218;

Transform204.children[6] = Shape215;

Group200.children[3] = Transform204;

browser.currentScene.children[10] = Group200;

Group219 = browser.currentScene.createNode("Group");
Group219.DEF = "SimpleShotsTargets";
Transform220 = browser.currentScene.createNode("Transform");
Transform220.DEF = "TargetBoxZoom";
Transform220.translation = new SFVec3f(new float[-50,1,-20]);
Shape221 = browser.currentScene.createNode("Shape");
Box222 = browser.currentScene.createNode("Box");
Shape221.geometry = Box222;

Appearance223 = browser.currentScene.createNode("Appearance");
Material224 = browser.currentScene.createNode("Material");
Appearance223.material = Material224;

ImageTexture225 = browser.currentScene.createNode("ImageTexture");
ImageTexture225.url = new MFString(new java.lang.String["images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"]);
Appearance223.texture = ImageTexture225;

Shape221.appearance = Appearance223;

Transform220.children = new MFNode();

Transform220.children[0] = Shape221;

Transform226 = browser.currentScene.createNode("Transform");
Transform226.translation = new SFVec3f(new float[0,2,0]);
Shape227 = browser.currentScene.createNode("Shape");
Text228 = browser.currentScene.createNode("Text");
Text228.string = new MFString(new java.lang.String["Zoom in, out"]);
FontStyle229 = browser.currentScene.createNode("FontStyle");
FontStyle229.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text228.fontStyle = FontStyle229;

Shape227.geometry = Text228;

Appearance230 = browser.currentScene.createNode("Appearance");
Material231 = browser.currentScene.createNode("Material");
Appearance230.material = Material231;

Shape227.appearance = Appearance230;

Transform226.children = new MFNode();

Transform226.children[0] = Shape227;

Transform220.children[1] = Transform226;

Group219.children = new MFNode();

Group219.children[0] = Transform220;

Transform232 = browser.currentScene.createNode("Transform");
Transform232.DEF = "TargetBoxDolly";
Transform232.translation = new SFVec3f(new float[-40,1,-20]);
Shape233 = browser.currentScene.createNode("Shape");
Box234 = browser.currentScene.createNode("Box");
Shape233.geometry = Box234;

Appearance235 = browser.currentScene.createNode("Appearance");
Material236 = browser.currentScene.createNode("Material");
Appearance235.material = Material236;

ImageTexture237 = browser.currentScene.createNode("ImageTexture");
ImageTexture237.url = new MFString(new java.lang.String["images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"]);
Appearance235.texture = ImageTexture237;

Shape233.appearance = Appearance235;

Transform232.children = new MFNode();

Transform232.children[0] = Shape233;

Transform238 = browser.currentScene.createNode("Transform");
Transform238.translation = new SFVec3f(new float[0,2,0]);
Shape239 = browser.currentScene.createNode("Shape");
Text240 = browser.currentScene.createNode("Text");
Text240.string = new MFString(new java.lang.String["Dolly left, right"]);
FontStyle241 = browser.currentScene.createNode("FontStyle");
FontStyle241.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text240.fontStyle = FontStyle241;

Shape239.geometry = Text240;

Appearance242 = browser.currentScene.createNode("Appearance");
Material243 = browser.currentScene.createNode("Material");
Appearance242.material = Material243;

Shape239.appearance = Appearance242;

Transform238.children = new MFNode();

Transform238.children[0] = Shape239;

Transform232.children[1] = Transform238;

Group219.children[1] = Transform232;

Transform244 = browser.currentScene.createNode("Transform");
Transform244.DEF = "TargetBoxPan";
Transform244.translation = new SFVec3f(new float[-30,1,-20]);
Shape245 = browser.currentScene.createNode("Shape");
Box246 = browser.currentScene.createNode("Box");
Shape245.geometry = Box246;

Appearance247 = browser.currentScene.createNode("Appearance");
Material248 = browser.currentScene.createNode("Material");
Appearance247.material = Material248;

ImageTexture249 = browser.currentScene.createNode("ImageTexture");
ImageTexture249.url = new MFString(new java.lang.String["images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"]);
Appearance247.texture = ImageTexture249;

Shape245.appearance = Appearance247;

Transform244.children = new MFNode();

Transform244.children[0] = Shape245;

Transform250 = browser.currentScene.createNode("Transform");
Transform250.translation = new SFVec3f(new float[0,2,0]);
Shape251 = browser.currentScene.createNode("Shape");
Text252 = browser.currentScene.createNode("Text");
Text252.string = new MFString(new java.lang.String["Pan left, right"]);
FontStyle253 = browser.currentScene.createNode("FontStyle");
FontStyle253.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text252.fontStyle = FontStyle253;

Shape251.geometry = Text252;

Appearance254 = browser.currentScene.createNode("Appearance");
Material255 = browser.currentScene.createNode("Material");
Appearance254.material = Material255;

Shape251.appearance = Appearance254;

Transform250.children = new MFNode();

Transform250.children[0] = Shape251;

Transform244.children[1] = Transform250;

Group219.children[2] = Transform244;

Transform256 = browser.currentScene.createNode("Transform");
Transform256.DEF = "TargetBoxBoom";
Transform256.translation = new SFVec3f(new float[-20,1,-20]);
Shape257 = browser.currentScene.createNode("Shape");
Box258 = browser.currentScene.createNode("Box");
Shape257.geometry = Box258;

Appearance259 = browser.currentScene.createNode("Appearance");
Material260 = browser.currentScene.createNode("Material");
Appearance259.material = Material260;

ImageTexture261 = browser.currentScene.createNode("ImageTexture");
ImageTexture261.url = new MFString(new java.lang.String["images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"]);
Appearance259.texture = ImageTexture261;

Shape257.appearance = Appearance259;

Transform256.children = new MFNode();

Transform256.children[0] = Shape257;

Transform262 = browser.currentScene.createNode("Transform");
Transform262.translation = new SFVec3f(new float[0,2,0]);
Shape263 = browser.currentScene.createNode("Shape");
Text264 = browser.currentScene.createNode("Text");
Text264.string = new MFString(new java.lang.String["Boom up, down"]);
FontStyle265 = browser.currentScene.createNode("FontStyle");
FontStyle265.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text264.fontStyle = FontStyle265;

Shape263.geometry = Text264;

Appearance266 = browser.currentScene.createNode("Appearance");
Material267 = browser.currentScene.createNode("Material");
Appearance266.material = Material267;

Shape263.appearance = Appearance266;

Transform262.children = new MFNode();

Transform262.children[0] = Shape263;

Transform256.children[1] = Transform262;

Group219.children[3] = Transform256;

Transform268 = browser.currentScene.createNode("Transform");
Transform268.DEF = "TargetBoxTilt";
Transform268.translation = new SFVec3f(new float[-10,1,-20]);
Shape269 = browser.currentScene.createNode("Shape");
Box270 = browser.currentScene.createNode("Box");
Shape269.geometry = Box270;

Appearance271 = browser.currentScene.createNode("Appearance");
Material272 = browser.currentScene.createNode("Material");
Appearance271.material = Material272;

ImageTexture273 = browser.currentScene.createNode("ImageTexture");
ImageTexture273.url = new MFString(new java.lang.String["images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"]);
Appearance271.texture = ImageTexture273;

Shape269.appearance = Appearance271;

Transform268.children = new MFNode();

Transform268.children[0] = Shape269;

Transform274 = browser.currentScene.createNode("Transform");
Transform274.translation = new SFVec3f(new float[0,2,0]);
Shape275 = browser.currentScene.createNode("Shape");
Text276 = browser.currentScene.createNode("Text");
Text276.string = new MFString(new java.lang.String["Tilt left, right"]);
FontStyle277 = browser.currentScene.createNode("FontStyle");
FontStyle277.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text276.fontStyle = FontStyle277;

Shape275.geometry = Text276;

Appearance278 = browser.currentScene.createNode("Appearance");
Material279 = browser.currentScene.createNode("Material");
Appearance278.material = Material279;

Shape275.appearance = Appearance278;

Transform274.children = new MFNode();

Transform274.children[0] = Shape275;

Transform268.children[1] = Transform274;

Group219.children[4] = Transform268;

browser.currentScene.children[11] = Group219;

//=============== Camera.AimPointTest ==============
ProtoInstance280 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance280.name = "Camera";
ProtoInstance280.DEF = "Camera.AimPointTest";
fieldValue281 = browser.currentScene.createNode("fieldValue");
fieldValue281.name = "description";
fieldValue281.value = "AimPointTest for moving camera tracking moving target";
ProtoInstance280.fieldValue = new MFNode();

ProtoInstance280.fieldValue[0] = fieldValue281;

fieldValue282 = browser.currentScene.createNode("fieldValue");
fieldValue282.name = "position";
fieldValue282.value = "4 4 10";
ProtoInstance280.fieldValue[1] = fieldValue282;

fieldValue283 = browser.currentScene.createNode("fieldValue");
fieldValue283.name = "shots";
ProtoInstance284 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance284.name = "CameraShot";
ProtoInstance284.DEF = "Shot5";
fieldValue285 = browser.currentScene.createNode("fieldValue");
fieldValue285.name = "description";
fieldValue285.value = "#3 Tracking shot";
ProtoInstance284.fieldValue = new MFNode();

ProtoInstance284.fieldValue[0] = fieldValue285;

fieldValue286 = browser.currentScene.createNode("fieldValue");
fieldValue286.name = "initialPosition";
fieldValue286.value = "6 6 10";
ProtoInstance284.fieldValue[1] = fieldValue286;

fieldValue287 = browser.currentScene.createNode("fieldValue");
fieldValue287.name = "initialOrientation";
fieldValue287.value = "0 1 0 0";
ProtoInstance284.fieldValue[2] = fieldValue287;

fieldValue288 = browser.currentScene.createNode("fieldValue");
fieldValue288.name = "moves";
ProtoInstance289 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance289.name = "CameraMovement";
ProtoInstance289.DEF = "MoveAimPoint3.1";
fieldValue290 = browser.currentScene.createNode("fieldValue");
fieldValue290.name = "description";
fieldValue290.value = "AimPoint 3.1 moving BoxPath";
ProtoInstance289.fieldValue = new MFNode();

ProtoInstance289.fieldValue[0] = fieldValue290;

fieldValue291 = browser.currentScene.createNode("fieldValue");
fieldValue291.name = "tracking";
fieldValue291.value = "true";
ProtoInstance289.fieldValue[1] = fieldValue291;

fieldValue292 = browser.currentScene.createNode("fieldValue");
fieldValue292.name = "duration";
fieldValue292.value = "8";
ProtoInstance289.fieldValue[2] = fieldValue292;

fieldValue293 = browser.currentScene.createNode("fieldValue");
fieldValue293.name = "goalPosition";
fieldValue293.value = "6 6 10";
ProtoInstance289.fieldValue[3] = fieldValue293;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue288.children = new MFNode();

fieldValue288.children[0] = ProtoInstance289;

ProtoInstance294 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance294.name = "CameraMovement";
ProtoInstance294.DEF = "MoveAimPoint3.2";
fieldValue295 = browser.currentScene.createNode("fieldValue");
fieldValue295.name = "description";
fieldValue295.value = "AimPoint 3.2 pan right while tracking";
ProtoInstance294.fieldValue = new MFNode();

ProtoInstance294.fieldValue[0] = fieldValue295;

fieldValue296 = browser.currentScene.createNode("fieldValue");
fieldValue296.name = "tracking";
fieldValue296.value = "true";
ProtoInstance294.fieldValue[1] = fieldValue296;

fieldValue297 = browser.currentScene.createNode("fieldValue");
fieldValue297.name = "duration";
fieldValue297.value = "8";
ProtoInstance294.fieldValue[2] = fieldValue297;

fieldValue298 = browser.currentScene.createNode("fieldValue");
fieldValue298.name = "goalPosition";
fieldValue298.value = "40 6 12";
ProtoInstance294.fieldValue[3] = fieldValue298;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue288.children[1] = ProtoInstance294;

ProtoInstance299 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance299.name = "CameraMovement";
ProtoInstance299.DEF = "MoveAimPoint3.3";
fieldValue300 = browser.currentScene.createNode("fieldValue");
fieldValue300.name = "description";
fieldValue300.value = "AimPoint 3.3 boom up while tracking";
ProtoInstance299.fieldValue = new MFNode();

ProtoInstance299.fieldValue[0] = fieldValue300;

fieldValue301 = browser.currentScene.createNode("fieldValue");
fieldValue301.name = "tracking";
fieldValue301.value = "true";
ProtoInstance299.fieldValue[1] = fieldValue301;

fieldValue302 = browser.currentScene.createNode("fieldValue");
fieldValue302.name = "duration";
fieldValue302.value = "3";
ProtoInstance299.fieldValue[2] = fieldValue302;

fieldValue303 = browser.currentScene.createNode("fieldValue");
fieldValue303.name = "goalPosition";
fieldValue303.value = "40 20 13";
ProtoInstance299.fieldValue[3] = fieldValue303;

//goalAimPoint modified by ROUTE to match moving Box
fieldValue288.children[2] = ProtoInstance299;

ProtoInstance304 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance304.name = "CameraMovement";
ProtoInstance304.DEF = "MoveAimPoint3.4";
fieldValue305 = browser.currentScene.createNode("fieldValue");
fieldValue305.name = "description";
fieldValue305.value = "AimPoint 3.4 restore camera back to home";
ProtoInstance304.fieldValue = new MFNode();

ProtoInstance304.fieldValue[0] = fieldValue305;

fieldValue306 = browser.currentScene.createNode("fieldValue");
fieldValue306.name = "tracking";
fieldValue306.value = "true";
ProtoInstance304.fieldValue[1] = fieldValue306;

fieldValue307 = browser.currentScene.createNode("fieldValue");
fieldValue307.name = "duration";
fieldValue307.value = "5";
ProtoInstance304.fieldValue[2] = fieldValue307;

fieldValue308 = browser.currentScene.createNode("fieldValue");
fieldValue308.name = "goalPosition";
fieldValue308.value = "4 4 10";
ProtoInstance304.fieldValue[3] = fieldValue308;

fieldValue309 = browser.currentScene.createNode("fieldValue");
fieldValue309.name = "goalAimPoint";
fieldValue309.value = "4 4 0";
ProtoInstance304.fieldValue[4] = fieldValue309;

fieldValue310 = browser.currentScene.createNode("fieldValue");
fieldValue310.name = "goalOrientation";
fieldValue310.value = "0 1 0 0";
ProtoInstance304.fieldValue[5] = fieldValue310;

//can test tracking or not using these values
fieldValue288.children[3] = ProtoInstance304;

ProtoInstance284.fieldValue[3] = fieldValue288;

fieldValue283.children = new MFNode();

fieldValue283.children[0] = ProtoInstance284;

ProtoInstance280.fieldValue[2] = fieldValue283;

browser.currentScene.children[12] = ProtoInstance280;

Group311 = browser.currentScene.createNode("Group");
Group311.DEF = "AnimationGroup.AimPointTest";
TimeSensor312 = browser.currentScene.createNode("TimeSensor");
TimeSensor312.DEF = "CameraTimer.AimPointTest";
Group311.children = new MFNode();

Group311.children[0] = TimeSensor312;

//initialize clock to match totalDuration of combined Shot Moves
ROUTE313 = browser.currentScene.createNode("ROUTE");
ROUTE313.fromField = "totalDuration";
ROUTE313.fromNode = "Camera.AimPointTest";
ROUTE313.toField = "cycleInterval";
ROUTE313.toNode = "CameraTimer.AimPointTest";
Group311.children[1] = ROUTE313;

//TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator
ROUTE314 = browser.currentScene.createNode("ROUTE");
ROUTE314.fromField = "fraction_changed";
ROUTE314.fromNode = "CameraTimer.AimPointTest";
ROUTE314.toField = "set_fraction";
ROUTE314.toNode = "Camera.AimPointTest";
Group311.children[2] = ROUTE314;

Transform315 = browser.currentScene.createNode("Transform");
Transform315.DEF = "Trigger.AimPointTest";
Transform315.translation = new SFVec3f(new float[4,4,0]);
BooleanFilter316 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter316.DEF = "TextTouchActive.AimPointFilter";
Transform315.children = new MFNode();

Transform315.children[0] = BooleanFilter316;

TouchSensor317 = browser.currentScene.createNode("TouchSensor");
TouchSensor317.DEF = "TextTouch.AimPointTest";
TouchSensor317.description = "touch to animate Camera AimPointTest";
Transform315.children[1] = TouchSensor317;

ROUTE318 = browser.currentScene.createNode("ROUTE");
ROUTE318.fromField = "inputTrue";
ROUTE318.fromNode = "TextTouchActive.AimPointFilter";
ROUTE318.toField = "set_bind";
ROUTE318.toNode = "Camera.AimPointTest";
Transform315.children[2] = ROUTE318;

ROUTE319 = browser.currentScene.createNode("ROUTE");
ROUTE319.fromField = "isActive";
ROUTE319.fromNode = "TextTouch.AimPointTest";
ROUTE319.toField = "set_boolean";
ROUTE319.toNode = "TextTouchActive.AimPointFilter";
Transform315.children[3] = ROUTE319;

ROUTE320 = browser.currentScene.createNode("ROUTE");
ROUTE320.fromField = "touchTime";
ROUTE320.fromNode = "TextTouch.AimPointTest";
ROUTE320.toField = "startTime";
ROUTE320.toNode = "CameraTimer.AimPointTest";
Transform315.children[4] = ROUTE320;

Shape321 = browser.currentScene.createNode("Shape");
Text322 = browser.currentScene.createNode("Text");
Text322.string = new MFString(new java.lang.String["Click to animate","AimPointTest"]);
FontStyle323 = browser.currentScene.createNode("FontStyle");
FontStyle323.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text322.fontStyle = FontStyle323;

Shape321.geometry = Text322;

Appearance324 = browser.currentScene.createNode("Appearance");
Material325 = browser.currentScene.createNode("Material");
Material325.USE = "ArtDeco5";
Appearance324.material = Material325;

Shape321.appearance = Appearance324;

Transform315.children[5] = Shape321;

Shape326 = browser.currentScene.createNode("Shape");
Shape326.USE = "TransparentBox";
Transform315.children[6] = Shape326;

Group311.children[3] = Transform315;

browser.currentScene.children[13] = Group311;

//TODO build a test once implemented
ProtoInstance327 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance327.name = "OfflineRender";
browser.currentScene.children[14] = ProtoInstance327;

//=============== animate a camera shape to visualize view changes ==============
Transform328 = browser.currentScene.createNode("Transform");
Transform328.DEF = "CameraShapeTransform";
Transform328.translation = new SFVec3f(new float[0,0.5,0]);
//move CameraShape using active Camera
ROUTE329 = browser.currentScene.createNode("ROUTE");
ROUTE329.fromField = "position_changed";
ROUTE329.fromNode = "Camera.SimpleShotsTest";
ROUTE329.toField = "translation";
ROUTE329.toNode = "CameraShapeTransform";
Transform328.children = new MFNode();

Transform328.children[0] = ROUTE329;

ROUTE330 = browser.currentScene.createNode("ROUTE");
ROUTE330.fromField = "orientation_changed";
ROUTE330.fromNode = "Camera.SimpleShotsTest";
ROUTE330.toField = "rotation";
ROUTE330.toNode = "CameraShapeTransform";
Transform328.children[1] = ROUTE330;

ROUTE331 = browser.currentScene.createNode("ROUTE");
ROUTE331.fromField = "position";
ROUTE331.fromNode = "Camera.AimPointTest";
ROUTE331.toField = "translation";
ROUTE331.toNode = "CameraShapeTransform";
Transform328.children[2] = ROUTE331;

ROUTE332 = browser.currentScene.createNode("ROUTE");
ROUTE332.fromField = "orientation_changed";
ROUTE332.fromNode = "Camera.AimPointTest";
ROUTE332.toField = "rotation";
ROUTE332.toNode = "CameraShapeTransform";
Transform328.children[3] = ROUTE332;

Transform333 = browser.currentScene.createNode("Transform");
Transform333.DEF = "CameraOffsetTransform";
Transform333.translation = new SFVec3f(new float[0,0,0.25]);
TouchSensor334 = browser.currentScene.createNode("TouchSensor");
TouchSensor334.DEF = "CameraShapeTouched";
Transform333.children = new MFNode();

Transform333.children[0] = TouchSensor334;

Inline335 = browser.currentScene.createNode("Inline");
Inline335.DEF = "CameraShape";
Inline335.url = new MFString(new java.lang.String["CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"]);
Transform333.children[1] = Inline335;

Shape336 = browser.currentScene.createNode("Shape");
Shape336.DEF = "SightLine";
IndexedLineSet337 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet337.coordIndex = new MFInt32(new int[0,1]);
Coordinate338 = browser.currentScene.createNode("Coordinate");
Coordinate338.point = new MFVec3f(new float[0,0,0,0,0,-100]);
IndexedLineSet337.coord = Coordinate338;

Shape336.geometry = IndexedLineSet337;

Appearance339 = browser.currentScene.createNode("Appearance");
Material340 = browser.currentScene.createNode("Material");
Material340.emissiveColor = new SFColor(new float[0.8,0.8,0.4]);
Appearance339.material = Material340;

Shape336.appearance = Appearance339;

Transform333.children[2] = Shape336;

Transform328.children[4] = Transform333;

//Display frustum to show camera view within the scene, toggled by user selecting CameraShape
ExternProtoDeclare341 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare341.name = "ViewFrustum";
ExternProtoDeclare341.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare341.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"]);
field342 = browser.currentScene.createNode("field");
field342.name = "ViewpointNode";
field342.accessType = "initializeOnly";
field342.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field342.type = "SFNode";
ExternProtoDeclare341.field = new MFNode();

ExternProtoDeclare341.field[0] = field342;

field343 = browser.currentScene.createNode("field");
field343.name = "NavigationInfoNode";
field343.accessType = "initializeOnly";
field343.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field343.type = "SFNode";
ExternProtoDeclare341.field[1] = field343;

field344 = browser.currentScene.createNode("field");
field344.name = "visible";
field344.accessType = "inputOutput";
field344.appinfo = "whether or not frustum geometry is rendered";
field344.type = "SFBool";
ExternProtoDeclare341.field[2] = field344;

field345 = browser.currentScene.createNode("field");
field345.name = "lineColor";
field345.accessType = "inputOutput";
field345.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field345.type = "SFColor";
ExternProtoDeclare341.field[3] = field345;

field346 = browser.currentScene.createNode("field");
field346.name = "frustumColor";
field346.accessType = "inputOutput";
field346.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field346.type = "SFColor";
ExternProtoDeclare341.field[4] = field346;

field347 = browser.currentScene.createNode("field");
field347.name = "transparency";
field347.accessType = "inputOutput";
field347.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field347.type = "SFFloat";
ExternProtoDeclare341.field[5] = field347;

field348 = browser.currentScene.createNode("field");
field348.name = "aspectRatio";
field348.accessType = "inputOutput";
field348.appinfo = "assumed ratio height/width, default value 0.75";
field348.type = "SFFloat";
ExternProtoDeclare341.field[6] = field348;

field349 = browser.currentScene.createNode("field");
field349.name = "trace";
field349.accessType = "initializeOnly";
field349.appinfo = "debug support, default false";
field349.type = "SFBool";
ExternProtoDeclare341.field[7] = field349;

Transform328.children[5] = ExternProtoDeclare341;

ProtoInstance350 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance350.name = "ViewFrustum";
ProtoInstance350.DEF = "ViewFrustumNode";
fieldValue351 = browser.currentScene.createNode("fieldValue");
fieldValue351.name = "ViewpointNode";
Viewpoint352 = browser.currentScene.createNode("Viewpoint");
Viewpoint352.DEF = "FrustumViewpoint";
Viewpoint352.description = "viewpoint for ViewFrustum";
Viewpoint352.position = new SFVec3f(new float[0,0,0]);
fieldValue351.children = new MFNode();

fieldValue351.children[0] = Viewpoint352;

ProtoInstance350.fieldValue = new MFNode();

ProtoInstance350.fieldValue[0] = fieldValue351;

fieldValue353 = browser.currentScene.createNode("fieldValue");
fieldValue353.name = "NavigationInfoNode";
NavigationInfo354 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo354.DEF = "TestNavigationInfo";
NavigationInfo354.transitionType = new MFString(new java.lang.String["ANIMATE"]);
NavigationInfo354.visibilityLimit = 100;
fieldValue353.children = new MFNode();

fieldValue353.children[0] = NavigationInfo354;

ProtoInstance350.fieldValue[1] = fieldValue353;

fieldValue355 = browser.currentScene.createNode("fieldValue");
fieldValue355.name = "visible";
fieldValue355.value = "false";
ProtoInstance350.fieldValue[2] = fieldValue355;

fieldValue356 = browser.currentScene.createNode("fieldValue");
fieldValue356.name = "lineColor";
fieldValue356.value = "0.9 0.9 0.9";
ProtoInstance350.fieldValue[3] = fieldValue356;

fieldValue357 = browser.currentScene.createNode("fieldValue");
fieldValue357.name = "frustumColor";
fieldValue357.value = "0.8 0.8 0.8";
ProtoInstance350.fieldValue[4] = fieldValue357;

fieldValue358 = browser.currentScene.createNode("fieldValue");
fieldValue358.name = "transparency";
fieldValue358.value = "0.95";
ProtoInstance350.fieldValue[5] = fieldValue358;

Transform328.children[6] = ProtoInstance350;

BooleanToggle359 = browser.currentScene.createNode("BooleanToggle");
BooleanToggle359.DEF = "ViewFrustumToggle";
Transform328.children[7] = BooleanToggle359;

ROUTE360 = browser.currentScene.createNode("ROUTE");
ROUTE360.fromField = "isActive";
ROUTE360.fromNode = "CameraShapeTouched";
ROUTE360.toField = "set_boolean";
ROUTE360.toNode = "ViewFrustumToggle";
Transform328.children[8] = ROUTE360;

ROUTE361 = browser.currentScene.createNode("ROUTE");
ROUTE361.fromField = "toggle";
ROUTE361.fromNode = "ViewFrustumToggle";
ROUTE361.toField = "set_visible";
ROUTE361.toNode = "ViewFrustumNode";
Transform328.children[9] = ROUTE361;

browser.currentScene.children[15] = Transform328;

//=============== add checkerboard, axes and other things to look at while animating ==============
Background362 = browser.currentScene.createNode("Background");
Background362.skyColor = new MFColor(new float[0.282353,0.380392,0.470588]);
browser.currentScene.children[16] = Background362;

Transform363 = browser.currentScene.createNode("Transform");
Transform363.rotation = new SFRotation(new float[1,0,0,-1.57079]);
Transform363.scale = new SFVec3f(new float[10,10,10]);
Shape364 = browser.currentScene.createNode("Shape");
Appearance365 = browser.currentScene.createNode("Appearance");
Material366 = browser.currentScene.createNode("Material");
Material366.ambientIntensity = 0.01;
Material366.diffuseColor = new SFColor(new float[1,1,1]);
Material366.shininess = 0.05;
Appearance365.material = Material366;

Shape364.appearance = Appearance365;

IndexedFaceSet367 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet367.colorIndex = new MFInt32(new int[0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0]);
IndexedFaceSet367.colorPerVertex = False;
IndexedFaceSet367.coordIndex = new MFInt32(new int[0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1]);
IndexedFaceSet367.normalPerVertex = False;
IndexedFaceSet367.solid = False;
Coordinate368 = browser.currentScene.createNode("Coordinate");
Coordinate368.point = new MFVec3f(new float[-5.25,5.25,0,-3.75,5.25,0,-2.25,5.25,0,-0.75,5.25,0,0.75,5.25,0,2.25,5.25,0,3.75,5.25,0,5.25,5.25,0,-5.25,3.75,0,-3.75,3.75,0,-2.25,3.75,0,-0.75,3.75,0,0.75,3.75,0,2.25,3.75,0,3.75,3.75,0,5.25,3.75,0,-5.25,2.25,0,-3.75,2.25,0,-2.25,2.25,0,-0.75,2.25,0,0.75,2.25,0,2.25,2.25,0,3.75,2.25,0,5.25,2.25,0,-5.25,0.75,0,-3.75,0.75,0,-2.25,0.75,0,-0.75,0.75,0,0.75,0.75,0,2.25,0.75,0,3.75,0.75,0,5.25,0.75,0,-5.25,-0.75,0,-3.75,-0.75,0,-2.25,-0.75,0,-0.75,-0.75,0,0.75,-0.75,0,2.25,-0.75,0,3.75,-0.75,0,5.25,-0.75,0,-5.25,-2.25,0,-3.75,-2.25,0,-2.25,-2.25,0,-0.75,-2.25,0,0.75,-2.25,0,2.25,-2.25,0,3.75,-2.25,0,5.25,-2.25,0,-5.25,-3.75,0,-3.75,-3.75,0,-2.25,-3.75,0,-0.75,-3.75,0,0.75,-3.75,0,2.25,-3.75,0,3.75,-3.75,0,5.25,-3.75,0,-5.25,-5.25,0,-3.75,-5.25,0,-2.25,-5.25,0,-0.75,-5.25,0,0.75,-5.25,0,2.25,-5.25,0,3.75,-5.25,0,5.25,-5.25,0]);
IndexedFaceSet367.coord = Coordinate368;

Color369 = browser.currentScene.createNode("Color");
Color369.color = new MFColor(new float[0.435294,0.741176,0,0,0.560784,0.580392]);
IndexedFaceSet367.color = Color369;

Shape364.geometry = IndexedFaceSet367;

Transform363.children = new MFNode();

Transform363.children[0] = Shape364;

browser.currentScene.children[17] = Transform363;

Transform370 = browser.currentScene.createNode("Transform");
Transform370.scale = new SFVec3f(new float[3,3,3]);
Transform370.translation = new SFVec3f(new float[0,0.25,0]);
Inline371 = browser.currentScene.createNode("Inline");
Inline371.DEF = "CoordinateAxes";
Inline371.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform370.children = new MFNode();

Transform370.children[0] = Inline371;

browser.currentScene.children[18] = Transform370;

Transform372 = browser.currentScene.createNode("Transform");
Transform372.DEF = "MovingBoxTransform";
PositionInterpolator373 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator373.DEF = "BoxPath";
PositionInterpolator373.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
PositionInterpolator373.keyValue = new MFVec3f(new float[-5,1,5,45,1,5,45,1,-45,-5,1,-45,-5,1,5]);
Transform372.children = new MFNode();

Transform372.children[0] = PositionInterpolator373;

TimeSensor374 = browser.currentScene.createNode("TimeSensor");
TimeSensor374.DEF = "BoxTimer";
TimeSensor374.cycleInterval = 10;
TimeSensor374.loop = True;
Transform372.children[1] = TimeSensor374;

ROUTE375 = browser.currentScene.createNode("ROUTE");
ROUTE375.fromField = "value_changed";
ROUTE375.fromNode = "BoxPath";
ROUTE375.toField = "translation";
ROUTE375.toNode = "MovingBoxTransform";
Transform372.children[2] = ROUTE375;

ROUTE376 = browser.currentScene.createNode("ROUTE");
ROUTE376.fromField = "value_changed";
ROUTE376.fromNode = "BoxPath";
ROUTE376.toField = "goalAimPoint";
ROUTE376.toNode = "MoveAimPoint3.1";
Transform372.children[3] = ROUTE376;

ROUTE377 = browser.currentScene.createNode("ROUTE");
ROUTE377.fromField = "value_changed";
ROUTE377.fromNode = "BoxPath";
ROUTE377.toField = "goalAimPoint";
ROUTE377.toNode = "MoveAimPoint3.2";
Transform372.children[4] = ROUTE377;

ROUTE378 = browser.currentScene.createNode("ROUTE");
ROUTE378.fromField = "value_changed";
ROUTE378.fromNode = "BoxPath";
ROUTE378.toField = "goalAimPoint";
ROUTE378.toNode = "MoveAimPoint3.3";
Transform372.children[5] = ROUTE378;

ROUTE379 = browser.currentScene.createNode("ROUTE");
ROUTE379.fromField = "fraction_changed";
ROUTE379.fromNode = "BoxTimer";
ROUTE379.toField = "set_fraction";
ROUTE379.toNode = "BoxPath";
Transform372.children[6] = ROUTE379;

Shape380 = browser.currentScene.createNode("Shape");
Box381 = browser.currentScene.createNode("Box");
Shape380.geometry = Box381;

Appearance382 = browser.currentScene.createNode("Appearance");
Material383 = browser.currentScene.createNode("Material");
Appearance382.material = Material383;

ImageTexture384 = browser.currentScene.createNode("ImageTexture");
ImageTexture384.url = new MFString(new java.lang.String["../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"]);
Appearance382.texture = ImageTexture384;

Shape380.appearance = Appearance382;

Transform372.children[7] = Shape380;

browser.currentScene.children[19] = Transform372;

//================ CrossHair visualization for center of screen ================
ExternProtoDeclare385 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare385.name = "CrossHair";
ExternProtoDeclare385.appinfo = "CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point";
ExternProtoDeclare385.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"]);
field386 = browser.currentScene.createNode("field");
field386.name = "enabled";
field386.accessType = "initializeOnly";
field386.appinfo = "whether CrissHair orititype is enabled or not";
field386.type = "SFBool";
ExternProtoDeclare385.field = new MFNode();

ExternProtoDeclare385.field[0] = field386;

field387 = browser.currentScene.createNode("field");
field387.name = "set_enabled";
field387.accessType = "inputOnly";
field387.appinfo = "control whether enabled/disabled";
field387.type = "SFBool";
ExternProtoDeclare385.field[1] = field387;

field388 = browser.currentScene.createNode("field");
field388.name = "markerColor";
field388.accessType = "inputOutput";
field388.appinfo = "color of CrossHair marker";
field388.type = "SFColor";
ExternProtoDeclare385.field[2] = field388;

field389 = browser.currentScene.createNode("field");
field389.name = "scale";
field389.accessType = "inputOutput";
field389.appinfo = "size of CrossHair in meters";
field389.type = "SFVec3f";
ExternProtoDeclare385.field[3] = field389;

field390 = browser.currentScene.createNode("field");
field390.name = "positionOffsetFromCamera";
field390.accessType = "inputOutput";
field390.appinfo = "distance in front of HUD viewpoint";
field390.type = "SFVec3f";
ExternProtoDeclare385.field[4] = field390;

browser.currentScene.children[20] = ExternProtoDeclare385;

ProtoInstance391 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance391.name = "CrossHair";
ProtoInstance391.DEF = "CrossHairInstance";
fieldValue392 = browser.currentScene.createNode("fieldValue");
fieldValue392.name = "enabled";
fieldValue392.value = "true";
ProtoInstance391.fieldValue = new MFNode();

ProtoInstance391.fieldValue[0] = fieldValue392;

fieldValue393 = browser.currentScene.createNode("fieldValue");
fieldValue393.name = "markerColor";
fieldValue393.value = "1 0.5 0";
ProtoInstance391.fieldValue[1] = fieldValue393;

fieldValue394 = browser.currentScene.createNode("fieldValue");
fieldValue394.name = "scale";
fieldValue394.value = "1 1 1";
ProtoInstance391.fieldValue[2] = fieldValue394;

fieldValue395 = browser.currentScene.createNode("fieldValue");
fieldValue395.name = "positionOffsetFromCamera";
fieldValue395.value = "0 0 -6";
ProtoInstance391.fieldValue[3] = fieldValue395;

browser.currentScene.children[21] = ProtoInstance391;

//turn on CrossHairInstance when animated camera viewpoints are bound
ROUTE396 = browser.currentScene.createNode("ROUTE");
ROUTE396.fromField = "isBound";
ROUTE396.fromNode = "Camera.SimpleShotsTest";
ROUTE396.toField = "set_enabled";
ROUTE396.toNode = "CrossHairInstance";
browser.currentScene.children[22] = ROUTE396;

ROUTE397 = browser.currentScene.createNode("ROUTE");
ROUTE397.fromField = "isBound";
ROUTE397.fromNode = "Camera.AimPointTest";
ROUTE397.toField = "set_enabled";
ROUTE397.toNode = "CrossHairInstance";
browser.currentScene.children[23] = ROUTE397;

//turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/>
//=============== TODO Launch Prototype Example ==============
Anchor398 = browser.currentScene.createNode("Anchor");
Anchor398.description = "launch CameraExample scene";
Anchor398.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor398.url = new MFString(new java.lang.String["CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"]);
Transform399 = browser.currentScene.createNode("Transform");
Transform399.translation = new SFVec3f(new float[0,-3,0]);
Shape400 = browser.currentScene.createNode("Shape");
Text401 = browser.currentScene.createNode("Text");
Text401.string = new MFString(new java.lang.String["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"]);
FontStyle402 = browser.currentScene.createNode("FontStyle");
FontStyle402.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle402.size = 0.5;
Text401.fontStyle = FontStyle402;

Shape400.geometry = Text401;

Appearance403 = browser.currentScene.createNode("Appearance");
Material404 = browser.currentScene.createNode("Material");
Material404.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance403.material = Material404;

Shape400.appearance = Appearance403;

Transform399.children = new MFNode();

Transform399.children[0] = Shape400;

Anchor398.children = new MFNode();

Anchor398.children[0] = Transform399;

browser.currentScene.children[24] = Anchor398;

