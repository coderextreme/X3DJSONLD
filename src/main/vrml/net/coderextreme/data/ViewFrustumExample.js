let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ViewFrustumExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.description = "ViewFrustum from above, looking down";
Viewpoint3.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint3.position = new SFVec3f(new float[0,40,0]);
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.description = "ViewFrustum from point of view";
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "ViewFrustum behind point of view";
Viewpoint5.position = new SFVec3f(new float[0,0,15]);
browser.currentScene.children[3] = Viewpoint5;

let Viewpoint6 = browser.currentScene.createNode("Viewpoint");
Viewpoint6.description = "ViewFrustum oblique side view";
Viewpoint6.orientation = new SFRotation(new float[0.8005,0.5926,0.0898,-0.3743]);
Viewpoint6.position = new SFVec3f(new float[-5,5,20]);
browser.currentScene.children[4] = Viewpoint6;

let NavigationInfo7 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo7.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[5] = NavigationInfo7;

let ExternProtoDeclare8 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "ViewFrustum";
ExternProtoDeclare8.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare8.url = new MFString(new java.lang.String["ViewFrustumPrototype.x3d#ViewFrustum"]);
let field9 = browser.currentScene.createNode("field");
field9.name = "ViewpointNode";
field9.accessType = "initializeOnly";
field9.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field9.type = "SFNode";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "NavigationInfoNode";
field10.accessType = "initializeOnly";
field10.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field10.type = "SFNode";
ExternProtoDeclare8.field[1] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "visible";
field11.accessType = "inputOutput";
field11.appinfo = "whether or not frustum geometry is rendered";
field11.type = "SFBool";
ExternProtoDeclare8.field[2] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "lineColor";
field12.accessType = "inputOutput";
field12.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field12.type = "SFColor";
ExternProtoDeclare8.field[3] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "frustumColor";
field13.accessType = "inputOutput";
field13.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field13.type = "SFColor";
ExternProtoDeclare8.field[4] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "transparency";
field14.accessType = "inputOutput";
field14.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field14.type = "SFFloat";
ExternProtoDeclare8.field[5] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "aspectRatio";
field15.accessType = "inputOutput";
field15.appinfo = "assumed ratio height/width, default value 0.75";
field15.type = "SFFloat";
ExternProtoDeclare8.field[6] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "trace";
field16.accessType = "initializeOnly";
field16.appinfo = "debug support, default false";
field16.type = "SFBool";
ExternProtoDeclare8.field[7] = field16;

browser.currentScene.children[6] = ExternProtoDeclare8;

//Example use
let ProtoInstance17 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance17.name = "ViewFrustum";
let fieldValue18 = browser.currentScene.createNode("fieldValue");
fieldValue18.name = "ViewpointNode";
//prefer empty description to prevent entry in player's ViewpointList
let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "ViewFrustum ViewpointNode";
fieldValue18.children = new MFNode();

fieldValue18.children[0] = Viewpoint19;

ProtoInstance17.fieldValue = new MFNode();

ProtoInstance17.fieldValue[0] = fieldValue18;

let fieldValue20 = browser.currentScene.createNode("fieldValue");
fieldValue20.name = "NavigationInfoNode";
let NavigationInfo21 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo21.visibilityLimit = 15;
fieldValue20.children = new MFNode();

fieldValue20.children[0] = NavigationInfo21;

ProtoInstance17.fieldValue[1] = fieldValue20;

let fieldValue22 = browser.currentScene.createNode("fieldValue");
fieldValue22.name = "visible";
fieldValue22.value = "true";
ProtoInstance17.fieldValue[2] = fieldValue22;

let fieldValue23 = browser.currentScene.createNode("fieldValue");
fieldValue23.name = "lineColor";
fieldValue23.value = "0.9 0.9 0.9";
ProtoInstance17.fieldValue[3] = fieldValue23;

let fieldValue24 = browser.currentScene.createNode("fieldValue");
fieldValue24.name = "frustumColor";
fieldValue24.value = "0.8 0.8 0.8";
ProtoInstance17.fieldValue[4] = fieldValue24;

let fieldValue25 = browser.currentScene.createNode("fieldValue");
fieldValue25.name = "transparency";
fieldValue25.value = "0.75";
ProtoInstance17.fieldValue[5] = fieldValue25;

let fieldValue26 = browser.currentScene.createNode("fieldValue");
fieldValue26.name = "trace";
fieldValue26.value = "true";
ProtoInstance17.fieldValue[6] = fieldValue26;

browser.currentScene.children[7] = ProtoInstance17;

//Visualization assists
let Inline27 = browser.currentScene.createNode("Inline");
Inline27.DEF = "GridXZ";
Inline27.url = new MFString(new java.lang.String["GridXZ_20x20Fixed.x3d"]);
browser.currentScene.children[8] = Inline27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.scale = new SFVec3f(new float[5,5,5]);
let Inline29 = browser.currentScene.createNode("Inline");
Inline29.DEF = "CoordinateAxes";
Inline29.url = new MFString(new java.lang.String["CoordinateAxes.x3d"]);
Transform28.children = new MFNode();

Transform28.children[0] = Inline29;

browser.currentScene.children[9] = Transform28;

