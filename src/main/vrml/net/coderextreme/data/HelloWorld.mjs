const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
//Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON
scene.addMetaData("title", "HelloWorld.x3d");
scene.addMetaData("description", "Simple X3D model example: Hello World!");
scene.addMetaData("created", "30 October 2000");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("Image", "HelloWorld.tall.png");
scene.addMetaData("reference", "https://en.wikipedia.org/wiki/Hello_world");
scene.addMetaData("reference", "https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program");
scene.addMetaData("reference", "https://en.wikipedia.org/wiki/"Hello,_World!"_program");
scene.addMetaData("reference", "https://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world");
scene.addMetaData("reference", "https://www.HelloWorldExample.net");
scene.addMetaData("reference", "https://www.web3d.org");
scene.addMetaData("reference", "https://www.web3d.org/realtime-3d/news/internationalization-x3d");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/HelloWorld.x3d");
scene.addMetaData("reference", "https://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d");
scene.addMetaData("identifier", "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d");
scene.addMetaData("license", "https://www.web3d.org/x3d/content/examples/license.html");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("reference", "HelloWorld.wrl");
scene.addMetaData("reference", "HelloWorld.x3dv");
scene.addMetaData("reference", "HelloWorld.x3db");
scene.addMetaData("reference", "HelloWorld.xhtml");
scene.addMetaData("reference", "HelloWorld.json");
await browser .loadComponents (scene);
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
let WorldInfo26 = browser.currentScene.createNode("WorldInfo");
WorldInfo26.info = new X3D.MFString([new X3D.SFString("Example scene to illustrate a simple X3D model")]);
WorldInfo26.title = "Hello World!";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo26;

let Group27 = browser.currentScene.createNode("Group");
let Viewpoint28 = browser.currentScene.createNode("Viewpoint");
Viewpoint28.DEF = "ViewUpClose";
Viewpoint28.centerOfRotation = new X3D.SFVec3f([0,-1,0]);
Viewpoint28.description = "Hello world!";
Viewpoint28.position = new X3D.SFVec3f([0,-1,7]);
Group27YYY.children = new X3D.MFNode();

Group27ZZZ.children[0] = Viewpoint28;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.rotation = new X3D.SFRotation([0,1,0,3]);
let Shape30 = browser.currentScene.createNode("Shape");
let Sphere31 = browser.currentScene.createNode("Sphere");
geometry = Sphere31;

let Appearance32 = browser.currentScene.createNode("Appearance");
let Material33 = browser.currentScene.createNode("Material");
Material33.DEF = "MaterialLightBlue";
Material33.diffuseColor = new X3D.SFColor([0.1,0.5,1]);
material = Material33;

let ImageTexture34 = browser.currentScene.createNode("ImageTexture");
ImageTexture34.DEF = "ImageCloudlessEarth";
ImageTexture34.url = new X3D.MFString([new X3D.SFString("earth-topo.png"), new X3D.SFString("earth-topo.jpg"), new X3D.SFString("earth-topo-small.gif"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif")]);
texture = ImageTexture34;

appearance = Appearance32;

Transform29YYY.child = new X3D.undefined();

Transform29ZZZ.child[0] = Shape30;

Group27ZZZ.children[1] = Transform29;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.translation = new X3D.SFVec3f([0,-2,0]);
let Shape36 = browser.currentScene.createNode("Shape");
let Text37 = browser.currentScene.createNode("Text");
Text37.DEF = "TextMessage";
Text37.string = new X3D.MFString([new X3D.SFString("Hello"), new X3D.SFString("world!")]);
let FontStyle38 = browser.currentScene.createNode("FontStyle");
FontStyle38.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle38;

geometry = Text37;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.USE = "MaterialLightBlue";
material = Material40;

appearance = Appearance39;

Transform35YYY.child = new X3D.undefined();

Transform35ZZZ.child[0] = Shape36;

Group27ZZZ.children[2] = Transform35;

browser.currentScene.children[1] = Group27;

}
main ();
