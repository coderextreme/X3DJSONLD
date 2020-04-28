let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ProxyShapeExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Collision3 = browser.currentScene.createNode("Collision");
Collision3.DEF = "MyCollision";
//can experiment with order of proxy and children nodes without error in XML encoding, but reordering difficulties can occur in other programming language bindings.
let Shape4 = browser.currentScene.createNode("Shape");
let Sphere5 = browser.currentScene.createNode("Sphere");
Shape4.geometry = Sphere5;

let Appearance6 = browser.currentScene.createNode("Appearance");
Appearance6.DEF = "RedAppearance";
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[1,0,0]);
Appearance6.material = Material7;

Shape4.appearance = Appearance6;

Collision3.proxy = Shape4;

let Shape8 = browser.currentScene.createNode("Shape");
let Cone9 = browser.currentScene.createNode("Cone");
Shape8.geometry = Cone9;

let Appearance10 = browser.currentScene.createNode("Appearance");
Appearance10.USE = "RedAppearance";
Shape8.appearance = Appearance10;

Collision3.proxy = Shape8;

let Shape11 = browser.currentScene.createNode("Shape");
let Box12 = browser.currentScene.createNode("Box");
Box12.size = new SFVec3f(new float[16,16,16]);
Shape11.geometry = Box12;

Collision3.proxy = Shape11;

browser.currentScene.children[1] = Collision3;

let Script13 = browser.currentScene.createNode("Script");
Script13.DEF = "MyNodeProducer";
Script13.directOutput = True;
let field14 = browser.currentScene.createNode("field");
field14.name = "outputNode";
field14.accessType = "outputOnly";
field14.type = "MFNode";
Script13.field = new MFNode();

Script13.field[0] = field14;


Script13.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	nodesString ='Group { children [ Shape {' +\n"+
"	'geometry Text {' + \n"+
"		 'string [ \"proxy is\" \"any-order child\" \"of Collision\" ]' +\n"+
"		 'fontStyle FontStyle { justify [ \"MIDDLE\" \"MIDDLE\" ] } }' +\n"+
"	'appearance Appearance {' +\n"+
"		 'material Material { diffuseColor 0.1  0.4 0.8 }' + \n"+
"	'} } ] }';\n"+
"	Browser.print (nodesString);\n"+
"	outputNode = Browser.createVrmlFromString (nodesString);\n"+
"}`)
browser.currentScene.children[2] = Script13;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromField = "outputNode";
ROUTE15.fromNode = "MyNodeProducer";
ROUTE15.toField = "children";
ROUTE15.toNode = "MyCollision";
browser.currentScene.children[3] = ROUTE15;

