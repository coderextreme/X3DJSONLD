var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//Example scene to illustrate X3D nodes and fields (XML elements and attributes)
WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Hello world!";
browser.currentScene.children = [];

browser.currentScene.children[0] = WorldInfo2;

Group3 = browser.currentScene.createNode("Group");
Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.DEF = "ViewUpClose";
Viewpoint4.centerOfRotation = [0,-1,0];
Viewpoint4.description = "Hello world!";
Viewpoint4.position = [0,-1,7];
Group3.children = [];

Group3.children[0] = Viewpoint4;

Transform5 = browser.currentScene.createNode("Transform");
Transform5.rotation = [0,1,0,3];
Shape6 = browser.currentScene.createNode("Shape");
Sphere7 = browser.currentScene.createNode("Sphere");
Shape6.geometry = Sphere7;

Appearance8 = browser.currentScene.createNode("Appearance");
Material9 = browser.currentScene.createNode("Material");
Material9.DEF = "MaterialLightBlue";
Material9.diffuseColor = [0.1,0.5,1];
Appearance8.material = Material9;

ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "ImageCloudlessEarth";
ImageTexture10.url = ["earth-topo.png","earth-topo.jpg","earth-topo-small.gif","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"];
Appearance8.texture = ImageTexture10;

Shape6.appearance = Appearance8;

Transform5.children = [];

Transform5.children[0] = Shape6;

Group3.children[1] = Transform5;

Transform11 = browser.currentScene.createNode("Transform");
Transform11.translation = [0,-2,0];
Shape12 = browser.currentScene.createNode("Shape");
Text13 = browser.currentScene.createNode("Text");
Text13.DEF = "TextMessage";
Text13.string = ["Hello","world!"];
FontStyle14 = browser.currentScene.createNode("FontStyle");
FontStyle14.justify = ["MIDDLE","MIDDLE"];
Text13.fontStyle = FontStyle14;

Shape12.geometry = Text13;

Appearance15 = browser.currentScene.createNode("Appearance");
Material16 = browser.currentScene.createNode("Material");
Material16.USE = "MaterialLightBlue";
Appearance15.material = Material16;

Shape12.appearance = Appearance15;

Transform11.children = [];

Transform11.children[0] = Shape12;

Group3.children[2] = Transform11;

browser.currentScene.children[1] = Group3;

