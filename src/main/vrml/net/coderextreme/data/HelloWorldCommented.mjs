let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "HelloWorldCommented.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Numerous comments added to simple X3D scene example for testing JSON encoding alternatives.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "19 December 2015";
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
meta7.name = "info";
meta7.content = "HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental.";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "HelloWorldCommented.json";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "HelloWorldCommentedOriginalEncoding.json";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "HelloWorldCommentedAlternativeEncoding.json";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "license";
meta12.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "Hello world!";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let Group15 = browser.currentScene.createNode("Group");
let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.DEF = "ViewUpClose";
Viewpoint16.description = "Hello world!";
Viewpoint16.position = new SFVec3f(new float[0,-1,7]);
Viewpoint16.centerOfRotation = new SFVec3f(new float[0,-1,0]);
Group15.children = new MFNode();

Group15.children[0] = Viewpoint16;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.rotation = new SFRotation(new float[0,1,0,3]);
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.DEF = "MaterialLightBlue";
Material20.diffuseColor = new SFColor(new float[0.1,0.5,1]);
Appearance19.material = Material20;

let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.DEF = "ImageCloudlessEarth";
ImageTexture21.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]);
Appearance19.texture = ImageTexture21;

Shape18.appearance = Appearance19;

let Sphere22 = browser.currentScene.createNode("Sphere");
Shape18.geometry = Sphere22;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

Group15.children[1] = Transform17;

let Transform23 = browser.currentScene.createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-2,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.USE = "MaterialLightBlue";
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

let Text27 = browser.currentScene.createNode("Text");
Text27.DEF = "TextMessage";
Text27.string = new MFString(new java.lang.String["Hello","world!"]);
let FontStyle28 = browser.currentScene.createNode("FontStyle");
FontStyle28.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text27.fontStyle = FontStyle28;

Shape24.geometry = Text27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Group15.children[2] = Transform23;

browser.currentScene.children[1] = Group15;

