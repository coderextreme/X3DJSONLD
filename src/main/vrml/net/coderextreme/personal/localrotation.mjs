const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "localrotation.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/localrotation.x3d");
scene.addMetaData("description", "chained boxes");
await browser .loadComponents (scene);
let WorldInfo8 = browser.currentScene.createNode("WorldInfo");
WorldInfo8.title = "localrotation.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo8;

let NavigationInfo9 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo9.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo9;

let Viewpoint10 = browser.currentScene.createNode("Viewpoint");
Viewpoint10.description = "Tour Views";
Viewpoint10.position = new X3D.SFVec3f([0,0,20]);
browser.currentScene.children[2] = Viewpoint10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = new X3D.SFVec3f([-4,0,0]);
let Shape12 = browser.currentScene.createNode("Shape");
let Box13 = browser.currentScene.createNode("Box");
geometry = Box13;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "TransformTargetParent";
Transform14.translation = new X3D.SFVec3f([4,0,0]);
let Shape15 = browser.currentScene.createNode("Shape");
let Box16 = browser.currentScene.createNode("Box");
geometry = Box16;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape15;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "TransformTargetChild";
Transform17.translation = new X3D.SFVec3f([4,0,0]);
let Shape18 = browser.currentScene.createNode("Shape");
let Box19 = browser.currentScene.createNode("Box");
geometry = Box19;

Transform17YYY.child = new X3D.undefined();

Transform17ZZZ.child[0] = Shape18;

Transform14ZZZ.children[1] = Transform17;

Transform11ZZZ.children[1] = Transform14;

browser.currentScene.children[3] = Transform11;

let ProximitySensor20 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor20.DEF = "ActivateSensor";
ProximitySensor20.size = new X3D.SFVec3f([1000000,1000000,1000000]);
browser.currentScene.children[4] = ProximitySensor20;

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "Clock";
browser.currentScene.children[5] = TimeSensor21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromNode = "ActivateSensor";
ROUTE22.fromField = "enterTime";
ROUTE22.toNode = "Clock";
ROUTE22.toField = "set_startTime";
browser.currentScene.children[6] = ROUTE22;

let OrientationInterpolator23 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator23.DEF = "Rotater";
OrientationInterpolator23.key = new X3D.MFFloat([0,1]);
OrientationInterpolator23.keyValue = new X3D.MFRotation([0,0,1,0,0,0,1,1.57]);
browser.currentScene.children[7] = OrientationInterpolator23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "Clock";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "Rotater";
ROUTE24.toField = "set_fraction";
browser.currentScene.children[8] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "Rotater";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "TransformTargetParent";
ROUTE25.toField = "set_rotation";
browser.currentScene.children[9] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "Rotater";
ROUTE26.fromField = "value_changed";
ROUTE26.toNode = "TransformTargetChild";
ROUTE26.toField = "set_rotation";
browser.currentScene.children[10] = ROUTE26;

}
main ();
