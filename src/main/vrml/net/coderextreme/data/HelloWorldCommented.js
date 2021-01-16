let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes)
//WorldInfo begin
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Hello world!";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

//WorldInfo complete, Group begin
let Group3 = browser.currentScene.createNode("Group");
//Viewpoint begin
let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.DEF = "ViewUpClose";
Viewpoint4.centerOfRotation = new SFVec3f(new float[0,-1,0]);
Viewpoint4.description = "Hello world!";
Viewpoint4.position = new SFVec3f(new float[0,-1,7]);
Group3.children = new MFNode();

Group3.children[0] = Viewpoint4;

//Viewpoint complete, Transform begin
let Transform5 = browser.currentScene.createNode("Transform");
Transform5.rotation = new SFRotation(new float[0,1,0,3]);
//Shape begin
let Shape6 = browser.currentScene.createNode("Shape");
//Sphere begin
//Sphere complete, Appearance begin
//Appearance complete
let Sphere7 = browser.currentScene.createNode("Sphere");
Shape6.geometry = Sphere7;

let Appearance8 = browser.currentScene.createNode("Appearance");
//Material begin
//Material complete, ImageTexture begin
//ImageTexture complete
let Material9 = browser.currentScene.createNode("Material");
Material9.DEF = "MaterialLightBlue";
Material9.diffuseColor = new SFColor(new float[0.1,0.5,1]);
Appearance8.material = Material9;

let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "ImageCloudlessEarth";
ImageTexture10.url = new MFString(new java.lang.String["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"]);
Appearance8.texture = ImageTexture10;

Shape6.appearance = Appearance8;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

//Shape complete
Group3.children[1] = Transform5;

//Transform complete, Transform begin
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = new SFVec3f(new float[0,-2,0]);
//Shape begin
let Shape12 = browser.currentScene.createNode("Shape");
//Text begin
//Text complete, Appearance begin
//Appearance complete
let Text13 = browser.currentScene.createNode("Text");
Text13.DEF = "TextMessage";
Text13.string = new MFString(new java.lang.String["Hello","world!"]);
//FontStyle begin
//FontStyle complete
let FontStyle14 = browser.currentScene.createNode("FontStyle");
FontStyle14.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text13.fontStyle = FontStyle14;

Shape12.geometry = Text13;

let Appearance15 = browser.currentScene.createNode("Appearance");
//Material begin
//Material complete
let Material16 = browser.currentScene.createNode("Material");
Material16.USE = "MaterialLightBlue";
Appearance15.material = Material16;

Shape12.appearance = Appearance15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

//Shape complete
Group3.children[2] = Transform11;

//Transform complete
browser.currentScene.children[1] = Group3;

//Group complete
