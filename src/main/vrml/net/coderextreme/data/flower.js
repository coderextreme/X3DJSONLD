let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE","ANY"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let DirectionalLight3 = browser.currentScene.createNode("DirectionalLight");
DirectionalLight3.direction = new SFVec3f(new float[0,-0.8,-0.2]);
DirectionalLight3.intensity = 0.5;
browser.currentScene.children[1] = DirectionalLight3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[1,1,1]);
browser.currentScene.children[2] = Background4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.description = "One mathematical orbital";
Viewpoint5.position = new SFVec3f(new float[0,0,50]);
browser.currentScene.children[3] = Viewpoint5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.translation = new SFVec3f(new float[0,-1,1]);
Transform6.rotation = new SFRotation(new float[0,1,0,3.1415926]);
Transform6.scale = new SFVec3f(new float[1.5,1.5,1.5]);
let Shape7 = browser.currentScene.createNode("Shape");
let Appearance8 = browser.currentScene.createNode("Appearance");
let Material9 = browser.currentScene.createNode("Material");
Material9.transparency = 0.1;
Material9.diffuseColor = new SFColor(new float[0.9,0.3,0.3]);
Material9.specularColor = new SFColor(new float[0.8,0.8,0.8]);
Material9.shininess = 0.145;
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

let IndexedFaceSet10 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet10.ccw = False;
IndexedFaceSet10.convex = False;
IndexedFaceSet10.coordIndex = new MFInt32(new int[0,1,2,-1]);
IndexedFaceSet10.creaseAngle = 0;
IndexedFaceSet10.DEF = "Orbit";
IndexedFaceSet10.solid = True;
let Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.DEF = "OrbitCoordinates";
Coordinate11.point = new MFVec3f(new float[0,0,1,0,1,0,1,0,0]);
IndexedFaceSet10.coord = Coordinate11;

Shape7.geometry = IndexedFaceSet10;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let Script12 = browser.currentScene.createNode("Script");
Script12.DEF = "OrbitScript";
let field13 = browser.currentScene.createNode("field");
field13.accessType = "inputOnly";
field13.name = "set_fraction";
field13.type = "SFFloat";
Script12.field = new MFNode();

Script12.field[0] = field13;

let field14 = browser.currentScene.createNode("field");
field14.accessType = "outputOnly";
field14.name = "coordinates";
field14.type = "MFVec3f";
Script12.field[1] = field14;

let field15 = browser.currentScene.createNode("field");
field15.accessType = "outputOnly";
field15.name = "coordIndexes";
field15.type = "MFInt32";
Script12.field[2] = field15;

//
//        <field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/>
//        <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/>
//        <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/>
//        <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/>
//        <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/>
//        <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/>
//        <field accessType=\"inputOutput\" name=\"resolution\" type=\"SFInt32\" value=\"150\"/>
//	

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

let TimeSensor16 = browser.currentScene.createNode("TimeSensor");
TimeSensor16.DEF = "Clock";
TimeSensor16.cycleInterval = 16;
TimeSensor16.loop = True;
browser.currentScene.children[6] = TimeSensor16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "OrbitScript";
ROUTE17.fromField = "coordIndexes";
ROUTE17.toNode = "Orbit";
ROUTE17.toField = "coordIndex";
browser.currentScene.children[7] = ROUTE17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "OrbitScript";
ROUTE18.fromField = "coordinates";
ROUTE18.toNode = "OrbitCoordinates";
ROUTE18.toField = "point";
browser.currentScene.children[8] = ROUTE18;

let ROUTE19 = browser.currentScene.createNode("ROUTE");
ROUTE19.fromNode = "Clock";
ROUTE19.fromField = "fraction_changed";
ROUTE19.toNode = "OrbitScript";
ROUTE19.toField = "set_fraction";
browser.currentScene.children[9] = ROUTE19;

