const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ViewFrustumExample.x3d");
scene.addMetaData("description", "Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("translated", "16 August 2008");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("reference", "ViewFrustumPrototype.x3d");
scene.addMetaData("drawing", "ViewFrustumComputation.png");
scene.addMetaData("Image", "ViewFrustumOverheadView.png");
scene.addMetaData("Image", "ViewFrustumObliqueView.png");
scene.addMetaData("Image", "ViewpointCalculator.png");
scene.addMetaData("Image", "ViewpointCalculatorComposed.png");
scene.addMetaData("subject", "view culling frustum");
scene.addMetaData("identifier", "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "ViewFrustumExample.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "ViewFrustum from above, looking down";
Viewpoint19.orientation = new X3D.SFRotation([1,0,0,-1.57]);
Viewpoint19.position = new X3D.SFVec3f([0,40,0]);
browser.currentScene.children[1] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "ViewFrustum from point of view";
browser.currentScene.children[2] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "ViewFrustum behind point of view";
Viewpoint21.position = new X3D.SFVec3f([0,0,15]);
browser.currentScene.children[3] = Viewpoint21;

let Viewpoint22 = browser.currentScene.createNode("Viewpoint");
Viewpoint22.description = "ViewFrustum oblique side view";
Viewpoint22.orientation = new X3D.SFRotation([0.8005,0.5926,0.0898,-0.3743]);
Viewpoint22.position = new X3D.SFVec3f([-5,5,20]);
browser.currentScene.children[4] = Viewpoint22;

let NavigationInfo23 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo23.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
browser.currentScene.children[5] = NavigationInfo23;

let ExternProtoDeclare24 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "ViewFrustum";
ExternProtoDeclare24.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ExternProtoDeclare24.url = new X3D.MFString([new X3D.SFString("ViewFrustumPrototype.x3d#ViewFrustum")]);
ExternProtoDeclare25.getField("ViewpointNode")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare26.getField("NavigationInfoNode")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare27.getField("visible")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare28.getField("lineColor")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare29.getField("frustumColor")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare30.getField("transparency")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare31.getField("aspectRatio")ExternProtoDeclare24YYY.field = new X3D.MFNode();

ExternProtoDeclare32.getField("trace")ExternProtoDeclare24YYY.field = new X3D.MFNode();

browser.currentScene.children[6] = ExternProtoDeclare24;

//Example use
let ProtoInstance33 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance33.name = "ViewFrustum";
let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "ViewpointNode";
//prefer empty description to prevent entry in player's ViewpointList
let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.description = "ViewFrustum ViewpointNode";
fieldValue34YYY.children = new X3D.MFNode();

fieldValue34ZZZ.children[0] = Viewpoint35;

ProtoInstance33YYY.fieldValue = new X3D.MFNode();

ProtoInstance33ZZZ.fieldValue[0] = fieldValue34;

let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "NavigationInfoNode";
let NavigationInfo37 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo37.visibilityLimit = 15;
fieldValue36YYY.children = new X3D.MFNode();

fieldValue36ZZZ.children[0] = NavigationInfo37;

ProtoInstance33ZZZ.fieldValue[1] = fieldValue36;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "visible";
fieldValue38.value = "true";
ProtoInstance33ZZZ.fieldValue[2] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "lineColor";
fieldValue39.value = "0.9 0.9 0.9";
ProtoInstance33ZZZ.fieldValue[3] = fieldValue39;

let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "frustumColor";
fieldValue40.value = "0.8 0.8 0.8";
ProtoInstance33ZZZ.fieldValue[4] = fieldValue40;

let fieldValue41 = browser.currentScene.createNode("fieldValue");
fieldValue41.name = "transparency";
fieldValue41.value = "0.75";
ProtoInstance33ZZZ.fieldValue[5] = fieldValue41;

let fieldValue42 = browser.currentScene.createNode("fieldValue");
fieldValue42.name = "trace";
fieldValue42.value = "true";
ProtoInstance33ZZZ.fieldValue[6] = fieldValue42;

browser.currentScene.children[7] = ProtoInstance33;

//Visualization assists
let Inline43 = browser.currentScene.createNode("Inline");
Inline43.DEF = "GridXZ";
Inline43.url = new X3D.MFString([new X3D.SFString("GridXZ_20x20Fixed.x3d")]);
browser.currentScene.children[8] = Inline43;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.scale = new X3D.SFVec3f([5,5,5]);
let Inline45 = browser.currentScene.createNode("Inline");
Inline45.DEF = "CoordinateAxes";
Inline45.url = new X3D.MFString([new X3D.SFString("CoordinateAxes.x3d")]);
Transform44YYY.children = new X3D.MFNode();

Transform44ZZZ.children[0] = Inline45;

browser.currentScene.children[9] = Transform44;

}
main ();
