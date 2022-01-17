let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "flower.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "description";
meta6.content = "a flower";
head1.meta[4] = meta6;

head = head1;

let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let DirectionalLight9 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight9.direction = new SFVec3f(new float[0,-0.8,-0.2]);
DirectionalLight9.intensity = 0.5;
browser.currentScene.children[1] = DirectionalLight9;

let Background10 = browser.currentScene.createNode("Background");
Background10.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[2] = Background10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.description = "One mathematical orbital";
Viewpoint11.position = new SFVec3f(new float[0,0,50]);
browser.currentScene.children[3] = Viewpoint11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,-1,1]);
Transform12.rotation = new SFRotation(new float[0,1,0,3.1415926]);
Transform12.scale = new SFVec3f(new float[1.5,1.5,1.5]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.transparency = 0.1;
Material15.diffuseColor = new SFColor(new float[0.9,0.3,0.3]);
Material15.specularColor = new SFColor(new float[0.8,0.8,0.8]);
Material15.shininess = 0.145;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let IndexedFaceSet16 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet16.ccw = False;
IndexedFaceSet16.convex = False;
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,1,2,-1]);
IndexedFaceSet16.DEF = "Orbit";
let Coordinate17 = browser.currentScene.createNode("Coordinate");
Coordinate17.DEF = "OrbitCoordinates";
Coordinate17.point = new MFVec3f(new float[0,0,1,0,1,0,1,0,0]);
IndexedFaceSet16.coord = Coordinate17;

Shape13.geometry = IndexedFaceSet16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

browser.currentScene.children[4] = Transform12;

let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "OrbitScript";
let field19 = browser.currentScene.createNode("field");
field19.name = "set_fraction";
field19.accessType = "inputOnly";
field19.type = "SFFloat";
Script18.field = new MFNode();

Script18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "coordinates";
field20.accessType = "outputOnly";
field20.type = "MFVec3f";
Script18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "coordIndexes";
field21.accessType = "outputOnly";
field21.type = "MFInt32";
Script18.field[2] = field21;

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>
let #sourceCode22 = browser.currentScene.createNode("#sourceCode");
Script18.#sourceCode[3] = #sourceCode22;

browser.currentScene.children[5] = Script18;

let TimeSensor23 = browser.currentScene.createNode("TimeSensor");
TimeSensor23.DEF = "Clock";
TimeSensor23.cycleInterval = 16;
TimeSensor23.loop = True;
browser.currentScene.children[6] = TimeSensor23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "OrbitScript";
ROUTE24.fromField = "coordIndexes";
ROUTE24.toNode = "Orbit";
ROUTE24.toField = "set_coordIndex";
browser.currentScene.children[7] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "OrbitScript";
ROUTE25.fromField = "coordinates";
ROUTE25.toNode = "OrbitCoordinates";
ROUTE25.toField = "point";
browser.currentScene.children[8] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromNode = "Clock";
ROUTE26.fromField = "fraction_changed";
ROUTE26.toNode = "OrbitScript";
ROUTE26.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE26;

