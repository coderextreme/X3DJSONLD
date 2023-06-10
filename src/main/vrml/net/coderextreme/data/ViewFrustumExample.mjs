let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
meta6.content = "20 October 2019";
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

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "ViewFrustumExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "ViewFrustum from above, looking down";
Viewpoint19.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint19.position = new SFVec3f(new float[0,40,0]);
browser.currentScene.children[1] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "ViewFrustum from point of view";
browser.currentScene.children[2] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "ViewFrustum behind point of view";
Viewpoint21.position = new SFVec3f(new float[0,0,15]);
browser.currentScene.children[3] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "ViewFrustum oblique side view";
Viewpoint22.orientation = new SFRotation(new float[0.8005,0.5926,0.0898,-0.3743]);
Viewpoint22.position = new SFVec3f(new float[-5,5,20]);
browser.currentScene.children[4] = Viewpoint22;

let NavigationInfo23 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo23.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[5] = NavigationInfo23;

let ExternProtoDeclare24 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "ViewFrustum";
ExternProtoDeclare24.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare24.url = new MFString(new java.lang.String["ViewFrustumPrototype.x3d#ViewFrustum"]);
let field25 = browser.currentScene.createNode("field");
field25.name = "ViewpointNode";
field25.accessType = "initializeOnly";
field25.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field25.type = "SFNode";
ExternProtoDeclare24.field = new MFNode();

ExternProtoDeclare24.field[0] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "NavigationInfoNode";
field26.accessType = "initializeOnly";
field26.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field26.type = "SFNode";
ExternProtoDeclare24.field[1] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "visible";
field27.accessType = "inputOutput";
field27.appinfo = "whether or not frustum geometry is rendered";
field27.type = "SFBool";
ExternProtoDeclare24.field[2] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "lineColor";
field28.accessType = "inputOutput";
field28.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field28.type = "SFColor";
ExternProtoDeclare24.field[3] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "frustumColor";
field29.accessType = "inputOutput";
field29.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field29.type = "SFColor";
ExternProtoDeclare24.field[4] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "transparency";
field30.accessType = "inputOutput";
field30.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field30.type = "SFFloat";
ExternProtoDeclare24.field[5] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "aspectRatio";
field31.accessType = "inputOutput";
field31.appinfo = "assumed ratio height/width, default value 0.75";
field31.type = "SFFloat";
ExternProtoDeclare24.field[6] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "trace";
field32.accessType = "initializeOnly";
field32.appinfo = "debug support, default false";
field32.type = "SFBool";
ExternProtoDeclare24.field[7] = field32;

browser.currentScene.children[6] = ExternProtoDeclare24;

//Example use
let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "ViewFrustum";
let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "ViewpointNode";
//prefer empty description to prevent entry in player's ViewpointList
let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "ViewFrustum ViewpointNode";
fieldValue34.children = new MFNode();

fieldValue34.children[0] = Viewpoint35;

ProtoInstance33.fieldValue = new MFNode();

ProtoInstance33.fieldValue[0] = fieldValue34;

let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "NavigationInfoNode";
let NavigationInfo37 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo37.visibilityLimit = 15;
fieldValue36.children = new MFNode();

fieldValue36.children[0] = NavigationInfo37;

ProtoInstance33.fieldValue[1] = fieldValue36;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "visible";
fieldValue38.value = "true";
ProtoInstance33.fieldValue[2] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "lineColor";
fieldValue39.value = "0.9 0.9 0.9";
ProtoInstance33.fieldValue[3] = fieldValue39;

let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "frustumColor";
fieldValue40.value = "0.8 0.8 0.8";
ProtoInstance33.fieldValue[4] = fieldValue40;

let fieldValue41 = browser.currentScene.createNode("fieldValue");
fieldValue41.name = "transparency";
fieldValue41.value = "0.75";
ProtoInstance33.fieldValue[5] = fieldValue41;

let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "trace";
fieldValue42.value = "true";
ProtoInstance33.fieldValue[6] = fieldValue42;

browser.currentScene.children[7] = ProtoInstance33;

//Visualization assists
let Inline43 = browser.currentScene.createNode("Inline");
Inline43.DEF = "GridXZ";
Inline43.url = new MFString(new java.lang.String["GridXZ_20x20Fixed.x3d"]);
browser.currentScene.children[8] = Inline43;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.scale = new SFVec3f(new float[5,5,5]);
let Inline45 = browser.currentScene.createNode("Inline");
Inline45.DEF = "CoordinateAxes";
Inline45.url = new MFString(new java.lang.String["CoordinateAxes.x3d"]);
Transform44.children = new MFNode();

Transform44.children[0] = Inline45;

browser.currentScene.children[9] = Transform44;

