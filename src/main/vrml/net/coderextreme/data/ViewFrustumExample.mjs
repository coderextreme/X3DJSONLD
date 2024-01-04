let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "ViewFrustumExample.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translated";
meta5.content = "16 August 2008";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 30 Dec 2023 08:00:26 GMT";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "ViewFrustumPrototype.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "drawing";
meta8.content = "ViewFrustumComputation.png";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "Image";
meta9.content = "ViewFrustumOverheadView.png";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "Image";
meta10.content = "ViewFrustumObliqueView.png";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "Image";
meta11.content = "ViewpointCalculator.png";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "Image";
meta12.content = "ViewpointCalculatorComposed.png";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "subject";
meta13.content = "view culling frustum";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d";
head1.meta[12] = meta14;

head = head1;

let ExternProtoDeclare16 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "ViewFrustum";
ExternProtoDeclare16.url = new MFString(new java.lang.String["ViewFrustumPrototype.x3d#ViewFrustum"]);
let field17 = browser.currentScene.createNode("field");
field17.accessType = "initializeOnly";
field17.type = "SFNode";
field17.name = "ViewpointNode";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.accessType = "initializeOnly";
field18.type = "SFNode";
field18.name = "NavigationInfoNode";
ExternProtoDeclare16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "inputOutput";
field19.type = "SFBool";
field19.name = "visible";
ExternProtoDeclare16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFColor";
field20.name = "lineColor";
ExternProtoDeclare16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFColor";
field21.name = "frustumColor";
ExternProtoDeclare16.field[4] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.name = "transparency";
ExternProtoDeclare16.field[5] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFFloat";
field23.name = "aspectRatio";
ExternProtoDeclare16.field[6] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "initializeOnly";
field24.type = "SFBool";
field24.name = "trace";
ExternProtoDeclare16.field[7] = field24;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare16;

let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "ViewFrustumExample.x3d";
browser.currentScene.children[1] = WorldInfo25;

let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.description = "ViewFrustum from above, looking down";
Viewpoint26.position = new SFVec3f(new float[0,40,0]);
Viewpoint26.orientation = new SFRotation(new float[1,0,0,-1.57]);
browser.currentScene.children[2] = Viewpoint26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "ViewFrustum from point of view";
browser.currentScene.children[3] = Viewpoint27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "ViewFrustum behind point of view";
Viewpoint28.position = new SFVec3f(new float[0,0,15]);
browser.currentScene.children[4] = Viewpoint28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "ViewFrustum oblique side view";
Viewpoint29.position = new SFVec3f(new float[-5,5,20]);
Viewpoint29.orientation = new SFRotation(new float[0.8005,0.5926,0.0898,-0.3743]);
browser.currentScene.children[5] = Viewpoint29;

let NavigationInfo30 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo30.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo30;

let ProtoInstance31 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance31.name = "ViewFrustum";
let fieldValue32 = browser.currentScene.createNode("fieldValue");
fieldValue32.name = "ViewpointNode";
let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.DEF = "_1";
Viewpoint33.description = "ViewFrustum ViewpointNode";
fieldValue32.children = new MFNode();

fieldValue32.children[0] = Viewpoint33;

ProtoInstance31.fieldValue = new MFNode();

ProtoInstance31.fieldValue[0] = fieldValue32;

let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "NavigationInfoNode";
let NavigationInfo35 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo35.DEF = "_2";
NavigationInfo35.visibilityLimit = 15;
fieldValue34.children = new MFNode();

fieldValue34.children[0] = NavigationInfo35;

ProtoInstance31.fieldValue[1] = fieldValue34;

let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "transparency";
fieldValue36.value = "0.75";
ProtoInstance31.fieldValue[2] = fieldValue36;

let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "trace";
fieldValue37.value = "true";
ProtoInstance31.fieldValue[3] = fieldValue37;

browser.currentScene.children[7] = ProtoInstance31;

let Inline38 = browser.currentScene.createNode("Inline");
Inline38.DEF = "GridXZ";
Inline38.global = True;
Inline38.url = new MFString(new java.lang.String["GridXZ_20x20Fixed.x3d"]);
browser.currentScene.children[8] = Inline38;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.scale = new SFVec3f(new float[5,5,5]);
let Inline40 = browser.currentScene.createNode("Inline");
Inline40.DEF = "CoordinateAxes";
Inline40.global = True;
Inline40.url = new MFString(new java.lang.String["CoordinateAxes.x3d"]);
Transform39.children = new MFNode();

Transform39.children[0] = Inline40;

browser.currentScene.children[9] = Transform39;

