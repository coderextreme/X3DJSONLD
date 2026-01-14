const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Interactive"));
scene.addMetaData("title", "TestCycleTimeStart.x3d");
scene.addMetaData("creator", "Andreas");
scene.addMetaData("creator", "Joe D. Williams");
scene.addMetaData("description", "Test design patterns for animation control.");
scene.addMetaData("created", "10 September 2023");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:59 GMT");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html");
scene.addMetaData("reference", "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d");
await browser .loadComponents (scene);
let WorldInfo12 = browser.currentScene.createNode("WorldInfo");
WorldInfo12.title = "TestCycleTimeStart.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo12;

let Viewpoint13 = browser.currentScene.createNode("Viewpoint");
Viewpoint13.description = "hello in there";
browser.currentScene.children[1] = Viewpoint13;

let TimeSensor14 = browser.currentScene.createNode("TimeSensor");
TimeSensor14.DEF = "REDTIME1";
TimeSensor14.loop = True;
TimeSensor14.stopTime = 1757913659.298;
browser.currentScene.children[2] = TimeSensor14;

let TimeSensor15 = browser.currentScene.createNode("TimeSensor");
TimeSensor15.DEF = "GREENTIME2";
TimeSensor15.cycleInterval = 5;
TimeSensor15.startTime = 1757913659.298;
browser.currentScene.children[3] = TimeSensor15;

let TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "BLUETIME3";
TimeSensor16.cycleInterval = 10;
browser.currentScene.children[4] = TimeSensor16;

let BooleanFilter17 = browser.currentScene.createNode("BooleanFilter");
BooleanFilter17.DEF = "GREENFILTER";
browser.currentScene.children[5] = BooleanFilter17;

let TimeTrigger18 = browser.currentScene.createNode("TimeTrigger");
TimeTrigger18.DEF = "BLUETRIGGER";
browser.currentScene.children[6] = TimeTrigger18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "REDBALL";
Transform19.translation = new X3D.SFVec3f([1.615999,0,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material22;

appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
geometry = Sphere23;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[7] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "GREENBALL";
let Shape25 = browser.currentScene.createNode("Shape");
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.diffuseColor = new X3D.SFColor([0,1,0]);
material = Material27;

appearance = Appearance26;

let Sphere28 = browser.currentScene.createNode("Sphere");
geometry = Sphere28;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

browser.currentScene.children[8] = Transform24;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "BLUEBALL";
let Shape30 = browser.currentScene.createNode("Shape");
let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material32;

appearance = Appearance31;

let Sphere33 = browser.currentScene.createNode("Sphere");
geometry = Sphere33;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

browser.currentScene.children[9] = Transform29;

let PositionInterpolator34 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator34.DEF = "REDINTERP1";
PositionInterpolator34.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
PositionInterpolator34.keyValue = new X3D.MFVec3f([0,0,0,2,0,0,0,0,0,-2,0,0,0,0,0]);
browser.currentScene.children[10] = PositionInterpolator34;

let PositionInterpolator35 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator35.DEF = "GREENINTERP2";
PositionInterpolator35.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
PositionInterpolator35.keyValue = new X3D.MFVec3f([0,0,0,0,2,0,0,0,0,0,-2,0,0,0,0]);
browser.currentScene.children[11] = PositionInterpolator35;

let PositionInterpolator36 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator36.DEF = "BLUEINTERP3";
PositionInterpolator36.key = new X3D.MFFloat([0,0.25,0.5,0.75,1]);
PositionInterpolator36.keyValue = new X3D.MFVec3f([0,0,0,0,-2,0,0,0,0,0,2,0,0,0,0]);
browser.currentScene.children[12] = PositionInterpolator36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "REDTIME1";
ROUTE37.fromField = "cycleTime";
ROUTE37.toNode = "REDTIME1";
ROUTE37.toField = "set_stopTime";
browser.currentScene.children[13] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "REDTIME1";
ROUTE38.fromField = "stopTime_changed";
ROUTE38.toNode = "GREENTIME2";
ROUTE38.toField = "set_startTime";
browser.currentScene.children[14] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "GREENTIME2";
ROUTE39.fromField = "isActive";
ROUTE39.toNode = "GREENFILTER";
ROUTE39.toField = "set_boolean";
browser.currentScene.children[15] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "GREENFILTER";
ROUTE40.fromField = "inputFalse";
ROUTE40.toNode = "BLUETRIGGER";
ROUTE40.toField = "set_boolean";
browser.currentScene.children[16] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "BLUETRIGGER";
ROUTE41.fromField = "triggerTime";
ROUTE41.toNode = "BLUETIME3";
ROUTE41.toField = "set_startTime";
browser.currentScene.children[17] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "REDTIME1";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "REDINTERP1";
ROUTE42.toField = "set_fraction";
browser.currentScene.children[18] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "REDINTERP1";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "REDBALL";
ROUTE43.toField = "set_translation";
browser.currentScene.children[19] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "GREENTIME2";
ROUTE44.fromField = "fraction_changed";
ROUTE44.toNode = "GREENINTERP2";
ROUTE44.toField = "set_fraction";
browser.currentScene.children[20] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "GREENINTERP2";
ROUTE45.fromField = "value_changed";
ROUTE45.toNode = "GREENBALL";
ROUTE45.toField = "set_translation";
browser.currentScene.children[21] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "BLUETIME3";
ROUTE46.fromField = "fraction_changed";
ROUTE46.toNode = "BLUEINTERP3";
ROUTE46.toField = "set_fraction";
browser.currentScene.children[22] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "BLUEINTERP3";
ROUTE47.fromField = "value_changed";
ROUTE47.toNode = "BLUEBALL";
ROUTE47.toField = "set_translation";
browser.currentScene.children[23] = ROUTE47;

}
main ();
