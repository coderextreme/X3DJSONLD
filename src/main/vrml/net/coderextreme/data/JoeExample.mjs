const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "Scripting.x3d");
await browser .loadComponents (scene);
let Script4 = browser.currentScene.createNode("Script");
Script4.DEF = "OpenVault";
Script5.getField("openVault")Script4YYY.field = new X3D.MFNode();

Script6.getField("combinationEntered")Script4YYY.field = new X3D.MFNode();

Script7.getField("vaultUnlocked")Script4YYY.field = new X3D.MFNode();

Script8.getField("unlocked").setValue("false");
Script4YYY.field = new X3D.MFNode();


Script4.setSourceCode(`ecmascript:\n"+
"\n"+
"      function combinationEntered (value) {\n"+
"\n"+
"        unlocked = value;\n"+
"\n"+
"      }\n"+
"\n"+
"      function openVault(value) {\n"+
"\n"+
"      if (unlocked) vaultUnlocked = value;\n"+
"\n"+
"      }`)
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Script4;

let Shape9 = browser.currentScene.createNode("Shape");
let Appearance10 = browser.currentScene.createNode("Appearance");
let Material11 = browser.currentScene.createNode("Material");
Material11.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material11;

appearance = Appearance10;

let Sphere12 = browser.currentScene.createNode("Sphere");
geometry = Sphere12;

browser.currentScene.children[1] = Shape9;

let Sound13 = browser.currentScene.createNode("Sound");
Sound13.maxBack = 1000;
Sound13.maxFront = 1000;
Sound13.minBack = 1000;
Sound13.minFront = 1000;
let AudioClip14 = browser.currentScene.createNode("AudioClip");
AudioClip14.DEF = "Click";
AudioClip14.stopTime = 1;
AudioClip14.description = "clicking sound";
AudioClip14.url = new X3D.MFString([new X3D.SFString("../resources/chandubabamusic1.wav")]);
source = AudioClip14;

browser.currentScene.children[2] = Sound13;

let TouchSensor15 = browser.currentScene.createNode("TouchSensor");
TouchSensor15.DEF = "TS";
browser.currentScene.children[3] = TouchSensor15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "TS";
ROUTE16.fromField = "isOver";
ROUTE16.toNode = "OpenVault";
ROUTE16.toField = "combinationEntered";
browser.currentScene.children[4] = ROUTE16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "TS";
ROUTE17.fromField = "touchTime";
ROUTE17.toNode = "OpenVault";
ROUTE17.toField = "openVault";
browser.currentScene.children[5] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "OpenVault";
ROUTE18.fromField = "vaultUnlocked";
ROUTE18.toNode = "Click";
ROUTE18.toField = "startTime";
browser.currentScene.children[6] = ROUTE18;

}
main ();
