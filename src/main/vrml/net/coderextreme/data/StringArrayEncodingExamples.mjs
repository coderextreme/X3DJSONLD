const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "StringArrayEncodingExamples.x3d");
scene.addMetaData("description", "Demonstrate simple X3D MFString (string array) encoding.");
scene.addMetaData("created", "27 May 2017");
scene.addMetaData("modified", "27 May 2017");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("reference", "X3dHeaderPrototypeSyntaxExamples.x3d");
scene.addMetaData("specificationSection", "X3D encodings, ISO/IEC 19775-1, Part 1: Architecture and base components, 5 Field type reference, 5.3.14 SFString and MFString");
scene.addMetaData("specificationUrl", "https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFStringAndMFString");
scene.addMetaData("specificationSection", "X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 5.3.14 SFString and MFString");
scene.addMetaData("specificationUrl", "https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/EncodingOfFields.html#SFString");
scene.addMetaData("specificationSection", "X3D encodings, ISO/IEC 19776-2 v3.3, Part 2: Classic VRML encoding, 5.15 SFString and MFString");
scene.addMetaData("specificationUrl", "https://www.web3d.org/documents/specifications/19776-2/V3.3/Part02/EncodingOfFields.html#SFString");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamples.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "EntryView";
Viewpoint18.description = "Hello MFString syntax";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint18;

let Background19 = browser.currentScene.createNode("Background");
Background19.skyColor = new X3D.MFColor([0.6,1,0.8]);
browser.currentScene.children[1] = Background19;

let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new X3D.MFString([new X3D.SFString("One, Two, Three"), new X3D.SFString(""), new X3D.SFString("He said, \"Immel did it!\"")]);
//alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle22.style = "BOLD";
fontStyle = FontStyle22;

geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new X3D.SFColor([0.6,0.4,0.2]);
material = Material24;

appearance = Appearance23;

browser.currentScene.children[2] = Shape20;

}
main ();
