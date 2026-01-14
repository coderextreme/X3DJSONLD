const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene.addMetaData("title", "HAnimModelsHandsFeet.x3d");
scene.addMetaData("description", "Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0");
scene.addMetaData("creator", "Kwan Hee YOO and Don Brutzman");
scene.addMetaData("created", "8 February 2015");
scene.addMetaData("modified", "Mon, 15 Sep 2025 05:20:09 GMT");
scene.addMetaData("warning", "not yet to scale");
scene.addMetaData("warning", "TODO will X3D HAnim component add a new level to support LOA-4 functionality?");
scene.addMetaData("TODO", "how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?");
scene.addMetaData("Image", "HAnimModelsHandsFeet.png");
scene.addMetaData("Image", "HAnimModelsHandsFeetWithFour1mGrids.png");
scene.addMetaData("reference", "https://www.web3d.org/working-groups/humanoid-animation-HAnim");
scene.addMetaData("reference", "https://www.web3d.org/documents/specifications/19774/V2.0");
scene.addMetaData("reference", "https://www.web3d.org/specifications/X3Dv4/ISO-IEC19775-1v4-IS/Part01/components/hanim.html");
scene.addMetaData("subject", "X3D HAnim humanoid animation");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d");
await browser .loadComponents (scene);
let WorldInfo19 = browser.currentScene.createNode("WorldInfo");
WorldInfo19.title = "HAnimModelsHandsFeet.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.description = "Hands and feet 10m";
browser.currentScene.children[1] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.description = "Hands and feet 1.7m";
Viewpoint21.position = new X3D.SFVec3f([0,0,1.7]);
browser.currentScene.children[2] = Viewpoint21;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.translation = new X3D.SFVec3f([-1,1,0]);
let Inline23 = browser.currentScene.createNode("Inline");
Inline23.url = new X3D.MFString([new X3D.SFString("HAnimModelHandLeft.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"), new X3D.SFString("HAnimModelHandLeft.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl")]);
Transform22YYY.children = new X3D.MFNode();

Transform22ZZZ.children[0] = Inline23;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "GridXY_20x20Fixed_AdjustScale";
Transform24.scale = new X3D.SFVec3f([0.1,0.1,0.1]);
let Inline25 = browser.currentScene.createNode("Inline");
Inline25.DEF = "GridXY_20x20Fixed";
Inline25.url = new X3D.MFString([new X3D.SFString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d"), new X3D.SFString("../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"), new X3D.SFString("https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl")]);
Transform24YYY.children = new X3D.MFNode();

Transform24ZZZ.children[0] = Inline25;

Transform22ZZZ.children[1] = Transform24;

browser.currentScene.children[3] = Transform22;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new X3D.SFVec3f([1,1,0]);
let Inline27 = browser.currentScene.createNode("Inline");
Inline27.url = new X3D.MFString([new X3D.SFString("HAnimModelHandRight.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"), new X3D.SFString("HAnimModelHandRight.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl")]);
Transform26YYY.children = new X3D.MFNode();

Transform26ZZZ.children[0] = Inline27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.USE = "GridXY_20x20Fixed_AdjustScale";
Transform26ZZZ.children[1] = Transform28;

browser.currentScene.children[4] = Transform26;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new X3D.SFVec3f([-1,-1,0]);
let Inline30 = browser.currentScene.createNode("Inline");
Inline30.url = new X3D.MFString([new X3D.SFString("HAnimModelFootLeft.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d"), new X3D.SFString("HAnimModelFootLeft.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl")]);
Transform29YYY.children = new X3D.MFNode();

Transform29ZZZ.children[0] = Inline30;

let Transform31 = browser.currentScene.createNode("Transform");
Transform31.USE = "GridXY_20x20Fixed_AdjustScale";
Transform29ZZZ.children[1] = Transform31;

browser.currentScene.children[5] = Transform29;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.translation = new X3D.SFVec3f([1,-1,0]);
let Inline33 = browser.currentScene.createNode("Inline");
Inline33.url = new X3D.MFString([new X3D.SFString("HAnimModelFootRight.x3d"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"), new X3D.SFString("HAnimModelFootRight.wrl"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl")]);
Transform32YYY.children = new X3D.MFNode();

Transform32ZZZ.children[0] = Inline33;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.USE = "GridXY_20x20Fixed_AdjustScale";
Transform32ZZZ.children[1] = Transform34;

browser.currentScene.children[6] = Transform32;

}
main ();
