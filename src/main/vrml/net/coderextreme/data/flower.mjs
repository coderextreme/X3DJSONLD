let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

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

Script18.setSourceCode(`ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"var resolution = 100;\n"+
"var t = 0;\n"+
"var p = 0;\n"+
"\n"+
"function initialize() {\n"+
"     generateCoordinates(resolution);\n"+
"     var localci = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     localci.push(i*resolution+j);\n"+
"	     localci.push(i*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j+1);\n"+
"	     localci.push((i+1)*resolution+j);\n"+
"	     localci.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(...localci);\n"+
"}\n"+
"\n"+
"function generateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(...localc);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
"	t += 0.5;\n"+
"	p += 0.5;\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	switch (choice) {\n"+
"	case 0:\n"+
"		e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 1:\n"+
"		f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 2:\n"+
"		g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	case 3:\n"+
"		h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"		break;\n"+
"	}\n"+
"	if (f < 1) {\n"+
"		f = 10;\n"+
"	}\n"+
"	if (g < 1) {\n"+
"		g = 4;\n"+
"	}\n"+
"	if (h < 1) {\n"+
"		h = 4;\n"+
"	}\n"+
"	generateCoordinates(resolution);\n"+
"}`)
browser.currentScene.children[5] = Script18;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "Clock";
TimeSensor22.cycleInterval = 16;
TimeSensor22.loop = True;
browser.currentScene.children[6] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "OrbitScript";
ROUTE23.fromField = "coordIndexes";
ROUTE23.toNode = "Orbit";
ROUTE23.toField = "set_coordIndex";
browser.currentScene.children[7] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "OrbitScript";
ROUTE24.fromField = "coordinates";
ROUTE24.toNode = "OrbitCoordinates";
ROUTE24.toField = "point";
browser.currentScene.children[8] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "Clock";
ROUTE25.fromField = "fraction_changed";
ROUTE25.toNode = "OrbitScript";
ROUTE25.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE25;

