const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "HelloWorldCommented.x3d");
scene.addMetaData("description", "Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.");
scene.addMetaData("created", "19 December 2015");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("info", "HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.");
scene.addMetaData("reference", "HelloWorldCommented.json");
scene.addMetaData("reference", "HelloWorldCommentedOriginalEncoding.json");
scene.addMetaData("reference", "HelloWorldCommentedAlternativeEncoding.json");
scene.addMetaData("identifier", "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
await browser .loadComponents (scene);
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "Hello world!";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

//WorldInfo complete, Group begin
let Group16 = browser.currentScene.createNode("Group");
//Viewpoint begin
let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.DEF = "ViewUpClose";
Viewpoint17.centerOfRotation = new X3D.SFVec3f([0,-1,0]);
Viewpoint17.description = "Hello world!";
Viewpoint17.position = new X3D.SFVec3f([0,-1,7]);
Group16YYY.children = new X3D.MFNode();

Group16ZZZ.children[0] = Viewpoint17;

//Viewpoint complete, Transform begin
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.rotation = new X3D.SFRotation([0,1,0,3]);
//Shape begin
let Shape19 = browser.currentScene.createNode("Shape");
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
let Sphere20 = browser.currentScene.createNode("Sphere");
geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
let Material22 = browser.currentScene.createNode("Material");
Material22.DEF = "MaterialLightBlue";
Material22.diffuseColor = new X3D.SFColor([0.1,0.5,1]);
material = Material22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "ImageCloudlessEarth";
ImageTexture23.url = new X3D.MFString([new X3D.SFString("earth-topo.png"), new X3D.SFString("earth-topo.jpg"), new X3D.SFString("earth-topo-small.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")]);
texture = ImageTexture23;

appearance = Appearance21;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape19;

//Shape complete
Group16ZZZ.children[1] = Transform18;

//Transform complete, Transform begin
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new X3D.SFVec3f([0,-2,0]);
//Shape begin
let Shape25 = browser.currentScene.createNode("Shape");
//Text begin
//Text complete, Appearance begin
//Appearance complete
let Text26 = browser.currentScene.createNode("Text");
Text26.DEF = "TextMessage";
Text26.string = new X3D.MFString([new X3D.SFString("Hello"), new X3D.SFString("world!")]);
//FontStyle begin
//FontStyle complete
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle27;

geometry = Text26;

let Appearance28 = browser.currentScene.createNode("Appearance");
//Material begin
//Material complete
let Material29 = browser.currentScene.createNode("Material");
Material29.USE = "MaterialLightBlue";
material = Material29;

appearance = Appearance28;

Transform24YYY.child = new X3D.undefined();

Transform24ZZZ.child[0] = Shape25;

//Shape complete
Group16ZZZ.children[2] = Transform24;

//Transform complete
browser.currentScene.children[1] = Group16;

//Group complete
}
main ();
