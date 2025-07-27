const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("creator", "John W Carlson");
scene.addMetaData("created", "December 13 2015");
scene.addMetaData("title", "text.x3d");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/text.x3d");
scene.addMetaData("description", "test \n text");
scene.addMetaData("generator", "Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
let Transform9 = browser.currentScene.createNode("Transform");
let Shape10 = browser.currentScene.createNode("Shape");
let Text11 = browser.currentScene.createNode("Text");
Text11.string = new X3D.MFString([new X3D.SFString("Node\"\"\"")]);
let FontStyle12 = browser.currentScene.createNode("FontStyle");
fontStyle = FontStyle12;

geometry = Text11;

let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
material = Material14;

appearance = Appearance13;

Transform9YYY.child = new X3D.undefined();

Transform9ZZZ.child[0] = Shape10;

let Shape15 = browser.currentScene.createNode("Shape");
let Text16 = browser.currentScene.createNode("Text");
Text16.string = new X3D.MFString([new X3D.SFString("Node2"), new X3D.SFString("\\\\"), new X3D.SFString("\\\\\\\\"), new X3D.SFString("Node2")]);
let FontStyle17 = browser.currentScene.createNode("FontStyle");
fontStyle = FontStyle17;

geometry = Text16;

let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
material = Material19;

appearance = Appearance18;

Transform9ZZZ.child[1] = Shape15;

let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new X3D.MFString([new X3D.SFString("Node3 \\\\\\\\ \\\\ "), new X3D.SFString("Node3\"\"\"")]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
fontStyle = FontStyle22;

geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
material = Material24;

appearance = Appearance23;

Transform9ZZZ.child[2] = Shape20;

let Script25 = browser.currentScene.createNode("Script");
Script26.getField("frontUrls").setValue("\"rnl_front.png\" \"uffizi_front.png\"");
Script25YYY.field = new X3D.MFNode();


Script25.setSourceCode(`ecmascript:\n"+
"			    var me = '\"1\" \"\"2\" \"\\n3\"';`)
Transform9ZZZ.children[3] = Script25;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Transform9;

}
main ();
