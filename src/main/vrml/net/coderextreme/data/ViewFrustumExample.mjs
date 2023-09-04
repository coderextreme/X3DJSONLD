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

head = head1;

let ExternProtoDeclare17 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "ViewFrustum";
ExternProtoDeclare17.url = new MFString(new java.lang.String["ViewFrustumPrototype.x3d#ViewFrustum"]);
let field18 = browser.currentScene.createNode("field");
field18.accessType = "initializeOnly";
field18.type = "SFNode";
field18.name = "ViewpointNode";
ExternProtoDeclare17.field = new MFNode();

ExternProtoDeclare17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.accessType = "initializeOnly";
field19.type = "SFNode";
field19.name = "NavigationInfoNode";
ExternProtoDeclare17.field[1] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "inputOutput";
field20.type = "SFBool";
field20.name = "visible";
ExternProtoDeclare17.field[2] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "inputOutput";
field21.type = "SFColor";
field21.name = "lineColor";
ExternProtoDeclare17.field[3] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "inputOutput";
field22.type = "SFColor";
field22.name = "frustumColor";
ExternProtoDeclare17.field[4] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOutput";
field23.type = "SFFloat";
field23.name = "transparency";
ExternProtoDeclare17.field[5] = field23;

let field24 = browser.currentScene.createNode("field");
field24.accessType = "inputOutput";
field24.type = "SFFloat";
field24.name = "aspectRatio";
ExternProtoDeclare17.field[6] = field24;

let field25 = browser.currentScene.createNode("field");
field25.accessType = "initializeOnly";
field25.type = "SFBool";
field25.name = "trace";
ExternProtoDeclare17.field[7] = field25;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare17;

let WorldInfo26 = browser.currentScene.createNode("WorldInfo");
WorldInfo26.title = "ViewFrustumExample.x3d";
browser.currentScene.children[1] = WorldInfo26;

let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "ViewFrustum from above, looking down";
Viewpoint27.position = new SFVec3f(new float[0,40,0]);
Viewpoint27.orientation = new SFRotation(new float[1,0,0,-1.57]);
browser.currentScene.children[2] = Viewpoint27;

let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.description = "ViewFrustum from point of view";
browser.currentScene.children[3] = Viewpoint28;

let Viewpoint29 = browser.currentScene.createNode("Viewpoint");
Viewpoint29.description = "ViewFrustum behind point of view";
Viewpoint29.position = new SFVec3f(new float[0,0,15]);
browser.currentScene.children[4] = Viewpoint29;

let Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.description = "ViewFrustum oblique side view";
Viewpoint30.position = new SFVec3f(new float[-5,5,20]);
Viewpoint30.orientation = new SFRotation(new float[0.8005,0.5926,0.0898,-0.3743]);
browser.currentScene.children[5] = Viewpoint30;

let NavigationInfo31 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo31.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[6] = NavigationInfo31;

let ProtoInstance32 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance32.name = "ViewFrustum";
let fieldValue33 = browser.currentScene.createNode("fieldValue");
fieldValue33.name = "ViewpointNode";
let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.DEF = "_1";
Viewpoint34.description = "ViewFrustum ViewpointNode";
fieldValue33.children = new MFNode();

fieldValue33.children[0] = Viewpoint34;

ProtoInstance32.fieldValue = new MFNode();

ProtoInstance32.fieldValue[0] = fieldValue33;

let fieldValue35 = browser.currentScene.createNode("fieldValue");
fieldValue35.name = "NavigationInfoNode";
let NavigationInfo36 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo36.DEF = "_2";
NavigationInfo36.visibilityLimit = 15;
fieldValue35.children = new MFNode();

fieldValue35.children[0] = NavigationInfo36;

ProtoInstance32.fieldValue[1] = fieldValue35;

let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "visible";
fieldValue37.value = "true";
ProtoInstance32.fieldValue[2] = fieldValue37;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "lineColor";
fieldValue38.value = "0.9 0.9 0.9";
ProtoInstance32.fieldValue[3] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "frustumColor";
fieldValue39.value = "0.8 0.8 0.8";
ProtoInstance32.fieldValue[4] = fieldValue39;

let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "transparency";
fieldValue40.value = "0.75";
ProtoInstance32.fieldValue[5] = fieldValue40;

let fieldValue41 = browser.currentScene.createNode("fieldValue");
fieldValue41.name = "aspectRatio";
fieldValue41.value = "0.75";
ProtoInstance32.fieldValue[6] = fieldValue41;

let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "trace";
fieldValue42.value = "true";
ProtoInstance32.fieldValue[7] = fieldValue42;

browser.currentScene.children[7] = ProtoInstance32;

let Inline43 = browser.currentScene.createNode("Inline");
Inline43.DEF = "GridXZ";
Inline43.global = True;
Inline43.url = new MFString(new java.lang.String["GridXZ_20x20Fixed.x3d"]);
browser.currentScene.children[8] = Inline43;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.scale = new SFVec3f(new float[5,5,5]);
let Inline45 = browser.currentScene.createNode("Inline");
Inline45.DEF = "CoordinateAxes";
Inline45.global = True;
Inline45.url = new MFString(new java.lang.String["CoordinateAxes.x3d"]);
Transform44.children = new MFNode();

Transform44.children[0] = Inline45;

browser.currentScene.children[9] = Transform44;

