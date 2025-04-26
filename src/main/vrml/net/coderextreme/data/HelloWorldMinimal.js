const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
//All head/meta tags are optional, WorldInfo is also optional
//Text node not supported by X3D Interchange profile, use Immersive profile or Text component level 1
scene.addMetaData("title", "HelloWorldMinimal.x3d");
scene.addMetaData("description", "Hello World minimal example scene.");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("created", "19 January 2020");
scene.addMetaData("modified", "24 January 2020");
scene.addMetaData("reference", "https://helloworldcollection.de");
scene.addMetaData("reference", "https://en.wiktionary.org/wiki/Hello_World");
scene.addMetaData("reference", "https://en.wikipedia.org/wiki/%22Hello,%20World!%22_program");
scene.addMetaData("reference", "https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world");
scene.addMetaData("reference", "https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world#X3D_(Extensible_3D)");
scene.addMetaData("reference", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes");
scene.addMetaData("reference", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimalIndex.html");
scene.addMetaData("identifier", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldMinimal.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo18 = browser.currentScene.createNode("WorldInfo");
WorldInfo18.title = "HelloWorldMinimal.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo18;

let Shape19 = browser.currentScene.createNode("Shape");
let Text20 = browser.currentScene.createNode("Text");
Text20.string = new X3D.MFString([new X3D.SFString("hello, world")]);
geometry = Text20;

browser.currentScene.children[1] = Shape19;

}
main ();
