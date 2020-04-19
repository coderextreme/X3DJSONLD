var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = [];

browser.currentScene.children[0] = NavigationInfo2;

DirectionalLight3 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight3.direction = [0,-0.8,-0.2];
DirectionalLight3.intensity = 0.5;
browser.currentScene.children[1] = DirectionalLight3;

Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = [1,1,1];
browser.currentScene.children[2] = Background4;

Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "One mathematical orbital";
Viewpoint5.position = [0,0,50];
browser.currentScene.children[3] = Viewpoint5;

Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "OrbitTransform";
Transform6.translation = [8,0,0];
Shape7 = browser.currentScene.createNode("Shape");
Appearance8 = browser.currentScene.createNode("Appearance");
Material9 = browser.currentScene.createNode("Material");
Material9.diffuseColor = [0,0.5,1];
Material9.specularColor = [0,0.5,1];
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

IndexedFaceSet10 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet10.convex = False;
IndexedFaceSet10.DEF = "Orbit";
Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.DEF = "OrbitCoordinates";
IndexedFaceSet10.coord = Coordinate11;

Shape7.geometry = IndexedFaceSet10;

Transform6.children = [];

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

Script12 = browser.currentScene.createNode("Script");
Script12.DEF = "OrbitScript";
field13 = browser.currentScene.createNode("field");
field13.name = "set_fraction";
field13.accessType = "inputOnly";
field13.type = "SFFloat";
Script12.field = [];

Script12.field[0] = field13;

field14 = browser.currentScene.createNode("field");
field14.name = "coordinates";
field14.accessType = "outputOnly";
field14.type = "MFVec3f";
Script12.field[1] = field14;

field15 = browser.currentScene.createNode("field");
field15.name = "coordIndexes";
field15.accessType = "outputOnly";
field15.type = "MFInt32";
Script12.field[2] = field15;

//<field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/> <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/> <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>

Script12.setSourceCode(`ecmascript:\n"+
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
"    coordIndexes = new MFInt32(localci);\n"+
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
"     coordinates = new MFVec3f(localc);\n"+
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
browser.currentScene.children[5] = Script12;

TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "Clock";
TimeSensor16.cycleInterval = 16;
TimeSensor16.loop = True;
browser.currentScene.children[6] = TimeSensor16;

ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "OrbitScript";
ROUTE17.fromField = "coordIndexes";
ROUTE17.toNode = "Orbit";
ROUTE17.toField = "coordIndex";
browser.currentScene.children[7] = ROUTE17;

ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "OrbitScript";
ROUTE18.fromField = "coordinates";
ROUTE18.toNode = "OrbitCoordinates";
ROUTE18.toField = "point";
browser.currentScene.children[8] = ROUTE18;

ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "Clock";
ROUTE19.fromField = "fraction_changed";
ROUTE19.toNode = "OrbitScript";
ROUTE19.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE19;

