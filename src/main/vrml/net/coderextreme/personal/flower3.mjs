const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "flower3.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/flower3.x3d");
scene.addMetaData("description", "a flower");
await browser .loadComponents (scene);
let NavigationInfo8 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo8;

let DirectionalLight9 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight9.direction = new X3D.SFVec3f([0,-0.8,-0.2]);
DirectionalLight9.intensity = 0.5;
browser.currentScene.children[1] = DirectionalLight9;

let Background10 = browser.currentScene.createNode("Background");
Background10.skyColor = new X3D.MFColor([1,1,1]);
browser.currentScene.children[2] = Background10;

let Viewpoint11 = browser.currentScene.createNode("Viewpoint");
Viewpoint11.description = "One mathematical orbital";
Viewpoint11.position = new X3D.SFVec3f([0,0,50]);
browser.currentScene.children[3] = Viewpoint11;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "OrbitTransform";
Transform12.translation = new X3D.SFVec3f([8,0,0]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new X3D.SFColor([0,0.5,1]);
Material15.specularColor = new X3D.SFColor([0,0.5,1]);
material = Material15;

appearance = Appearance14;

let IndexedFaceSet16 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet16.convex = False;
IndexedFaceSet16.DEF = "Orbit";
let Coordinate17 = browser.currentScene.createNode("Coordinate");
Coordinate17.DEF = "OrbitCoordinates";
coord = Coordinate17;

geometry = IndexedFaceSet16;

Transform12YYY.child = new X3D.undefined();

Transform12ZZZ.child[0] = Shape13;

browser.currentScene.children[4] = Transform12;

let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "OrbitScript";
Script19.getField("set_fraction")Script18YYY.field = new X3D.MFNode();

Script20.getField("coordinates")Script18YYY.field = new X3D.MFNode();

Script21.getField("coordIndexes")Script18YYY.field = new X3D.MFNode();

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>

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
"     for (var  i = 0; i < resolution; i++) {\n"+
"     	for (var  j = 0; j < resolution; j++) {\n"+
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

}
main ();
