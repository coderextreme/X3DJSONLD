let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HelloWorld.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Simple X3D model example: Hello World!";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "30 October 2000";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "modified";
meta5.content = "20 October 2019";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "creator";
meta6.content = "Don Brutzman";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "Image";
meta7.content = "HelloWorld.tall.png";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "http://en.wikipedia.org/wiki/Hello_world";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "https://en.wikipedia.org/wiki/\"Hello,_World!\"_program";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "reference";
meta12.content = "http://www.HelloWorldExample.net";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "reference";
meta13.content = "https://www.web3d.org";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "reference";
meta14.content = "https://www.web3d.org/realtime-3d/news/internationalization-x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/x3d/content/examples/HelloWorld.x3d";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "HelloWorld.wrl";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "HelloWorld.x3dv";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "HelloWorld.x3db";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "HelloWorld.xhtml";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "HelloWorld.json";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "identifier";
meta22.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "license";
meta23.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[21] = meta23;

head = head1;

let WorldInfo25 = browser.currentScene.createNode("WorldInfo");
WorldInfo25.title = "Hello World!";
WorldInfo25.info = new MFString(new java.lang.String["Example scene to illustrate a simple X3D model"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo25;

let Group26 = browser.currentScene.createNode("Group");
let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.DEF = "ViewUpClose";
Viewpoint27.description = "Hello world!";
Viewpoint27.position = new SFVec3f(new float[0,-1,7]);
Viewpoint27.centerOfRotation = new SFVec3f(new float[0,-1,0]);
Group26.children = new MFNode();

Group26.children[0] = Viewpoint27;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.rotation = new SFRotation(new float[0,1,0,3]);
let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.DEF = "MaterialLightBlue";
Material31.diffuseColor = new SFColor(new float[0.1,0.5,1]);
Appearance30.material = Material31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.DEF = "ImageCloudlessEarth";
ImageTexture32.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]);
Appearance30.texture = ImageTexture32;

Shape29.appearance = Appearance30;

let Sphere33 = browser.currentScene.createNode("Sphere");
Shape29.geometry = Sphere33;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Group26.children[1] = Transform28;

let Transform34 = browser.currentScene.createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,-2,0]);
let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.USE = "MaterialLightBlue";
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let Text38 = browser.currentScene.createNode("Text");
Text38.DEF = "TextMessage";
Text38.string = new MFString(new java.lang.String["Hello","world!"]);
let FontStyle39 = browser.currentScene.createNode("FontStyle");
FontStyle39.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text38.fontStyle = FontStyle39;

Shape35.geometry = Text38;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Group26.children[2] = Transform34;

browser.currentScene.children[1] = Group26;

