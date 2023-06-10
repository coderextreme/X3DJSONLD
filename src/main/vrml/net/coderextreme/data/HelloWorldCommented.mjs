let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

head = head1;

//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "Hello world!";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo15;

//WorldInfo complete, Group begin
let Group16 = browser.currentScene.createNode("Group");
//Viewpoint begin
let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.DEF = "ViewUpClose";
Viewpoint17.centerOfRotation = new SFVec3f(new float[0,-1,0]);
Viewpoint17.description = "Hello world!";
Viewpoint17.position = new SFVec3f(new float[0,-1,7]);
Group16.children = new MFNode();

Group16.children[0] = Viewpoint17;

//Viewpoint complete, Transform begin
let Transform18 = browser.currentScene.createNode("Transform");
Transform18.rotation = new SFRotation(new float[0,1,0,3]);
//Shape begin
let Shape19 = browser.currentScene.createNode("Shape");
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
let Sphere20 = browser.currentScene.createNode("Sphere");
Shape19.geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
let Material22 = browser.currentScene.createNode("Material");
Material22.DEF = "MaterialLightBlue";
Material22.diffuseColor = new SFColor(new float[0.1,0.5,1]);
Appearance21.material = Material22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.DEF = "ImageCloudlessEarth";
ImageTexture23.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]);
Appearance21.texture = ImageTexture23;

Shape19.appearance = Appearance21;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

//Shape complete
Group16.children[1] = Transform18;

//Transform complete, Transform begin
let Transform24 = browser.currentScene.createNode("Transform");
Transform24.translation = new SFVec3f(new float[0,-2,0]);
//Shape begin
let Shape25 = browser.currentScene.createNode("Shape");
//Text begin
//Text complete, Appearance begin
//Appearance complete
let Text26 = browser.currentScene.createNode("Text");
Text26.DEF = "TextMessage";
Text26.string = new MFString(new java.lang.String["Hello","world!"]);
//FontStyle begin
//FontStyle complete
let FontStyle27 = browser.currentScene.createNode("FontStyle");
FontStyle27.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text26.fontStyle = FontStyle27;

Shape25.geometry = Text26;

let Appearance28 = browser.currentScene.createNode("Appearance");
//Material begin
//Material complete
let Material29 = browser.currentScene.createNode("Material");
Material29.USE = "MaterialLightBlue";
Appearance28.material = Material29;

Shape25.appearance = Appearance28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

//Shape complete
Group16.children[2] = Transform24;

//Transform complete
browser.currentScene.children[1] = Group16;

//Group complete
