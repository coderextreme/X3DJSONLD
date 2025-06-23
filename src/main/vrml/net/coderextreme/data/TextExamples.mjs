const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "TextExamples.x3d");
scene.addMetaData("description", "Show different escape-character text examples for embedded quotation marks.");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("created", "7 April 2001");
scene.addMetaData("modified", "26 April 2016");
scene.addMetaData("warning", "Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control.");
scene.addMetaData("warning", "Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations.");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Transform13 = browser.currentScene.createNode("Transform");
Transform13.translation = new X3D.SFVec3f([0,2,0]);
let Shape14 = browser.currentScene.createNode("Shape");
let Text15 = browser.currentScene.createNode("Text");
Text15.string = new X3D.MFString([new X3D.SFString("Compare special character escaping")]);
let FontStyle16 = browser.currentScene.createNode("FontStyle");
FontStyle16.DEF = "testFontStyle";
FontStyle16.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle16.size = 0.8;
fontStyle = FontStyle16;

geometry = Text15;

let Appearance17 = browser.currentScene.createNode("Appearance");
Appearance17.DEF = "LightBlueAppearance";
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new X3D.SFColor([0.1,0.7,0.7]);
material = Material18;

appearance = Appearance17;

Transform13YYY.child = new X3D.undefined();

Transform13ZZZ.child[0] = Shape14;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Transform13;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.translation = new X3D.SFVec3f([-3,0,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new X3D.MFString([new X3D.SFString("I don't think so"), new X3D.SFString(""), new X3D.SFString("he said \"Hi\"")]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.USE = "testFontStyle";
fontStyle = FontStyle22;

geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
Appearance23.USE = "LightBlueAppearance";
appearance = Appearance23;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[1] = Transform19;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([3,0,0]);
let Shape25 = browser.currentScene.createNode("Shape");
let Text26 = browser.currentScene.createNode("Text");
Text26.string = new X3D.MFString([new X3D.SFString("I don't think so"), new X3D.SFString(""), new X3D.SFString("he said \"Hi\"")]);
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.USE = "testFontStyle";
fontStyle = FontStyle27;

geometry = Text26;

let Appearance28 = browser.currentScene.createNode("Appearance");
Appearance28.USE = "LightBlueAppearance";
appearance = Appearance28;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

browser.currentScene.children[2] = Transform24;

}
main ();
