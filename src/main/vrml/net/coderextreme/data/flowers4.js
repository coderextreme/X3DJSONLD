var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background3;

Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "transform";
Shape5 = browser.currentScene.createNode("Shape");
Appearance6 = browser.currentScene.createNode("Appearance");
Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material7.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance6.material = Material7;

ComposedCubeMapTexture8 = browser.currentScene.createNode("ComposedCubeMapTexture");
ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture8.top = ImageTexture9;

ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture8.top = ImageTexture10;

ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture8.top = ImageTexture11;

ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture8.top = ImageTexture12;

ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture8.top = ImageTexture13;

ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture8.top = ImageTexture14;

Appearance6.texture = ComposedCubeMapTexture8;

ComposedShader15 = browser.currentScene.createNode("ComposedShader");
ComposedShader15.DEF = "shader";
ComposedShader15.language = "GLSL";
field16 = browser.currentScene.createNode("field");
field16.name = "cube";
field16.type = "SFInt32";
field16.accessType = "inputOutput";
field16.value = "0";
ComposedShader15.field = new MFNode();

ComposedShader15.field[0] = field16;

field17 = browser.currentScene.createNode("field");
field17.name = "chromaticDispertion";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0.98 1 1.033";
ComposedShader15.field[1] = field17;

field18 = browser.currentScene.createNode("field");
field18.name = "bias";
field18.type = "SFFloat";
field18.accessType = "inputOutput";
field18.value = "0.5";
ComposedShader15.field[2] = field18;

field19 = browser.currentScene.createNode("field");
field19.name = "scale";
field19.type = "SFFloat";
field19.accessType = "inputOutput";
field19.value = "0.5";
ComposedShader15.field[3] = field19;

field20 = browser.currentScene.createNode("field");
field20.name = "power";
field20.type = "SFFloat";
field20.accessType = "inputOutput";
field20.value = "2";
ComposedShader15.field[4] = field20;

ShaderPart21 = browser.currentScene.createNode("ShaderPart");
ShaderPart21.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart21.type = "VERTEX";
ComposedShader15.parts[5] = ShaderPart21;

ShaderPart22 = browser.currentScene.createNode("ShaderPart");
ShaderPart22.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart22.type = "FRAGMENT";
ComposedShader15.parts[6] = ShaderPart22;

Appearance6.shaders = new MFNode();

Appearance6.shaders[0] = ComposedShader15;

Shape5.appearance = Appearance6;

//<Sphere>
IndexedFaceSet23 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet23.convex = False;
IndexedFaceSet23.DEF = "Orbit";
Coordinate24 = browser.currentScene.createNode("Coordinate");
Coordinate24.DEF = "OrbitCoordinates";
IndexedFaceSet23.coord = Coordinate24;

Shape5.geometry = IndexedFaceSet23;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

browser.currentScene.children[2] = Transform4;

Script25 = browser.currentScene.createNode("Script");
Script25.DEF = "OrbitScript";
field26 = browser.currentScene.createNode("field");
field26.name = "set_fraction";
field26.accessType = "inputOnly";
field26.type = "SFFloat";
Script25.field = new MFNode();

Script25.field[0] = field26;

field27 = browser.currentScene.createNode("field");
field27.name = "coordinates";
field27.accessType = "inputOutput";
field27.type = "MFVec3f";
Script25.field[1] = field27;

field28 = browser.currentScene.createNode("field");
field28.name = "coordIndexes";
field28.accessType = "outputOnly";
field28.type = "MFInt32";
Script25.field[2] = field28;


Script25.setSourceCode(`ecmascript:\n"+
"\n"+
"var e = 5;\n"+
"var f = 5;\n"+
"var g = 5;\n"+
"var h = 5;\n"+
"\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var cis = [];\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis.push(i*resolution+j);\n"+
"	     cis.push(i*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j+1);\n"+
"	     cis.push((i+1)*resolution+j);\n"+
"	     cis.push(-1);\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = new MFInt32(cis);\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = [];\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		crds.push(new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		));\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = new MFVec3f(crds);\n"+
"}\n"+
"\n"+
"function set_fraction(fraction, eventTime) {\n"+
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
"	var resolution = 100;\n"+
"	updateCoordinates(resolution);\n"+
"}`)
browser.currentScene.children[3] = Script25;

TimeSensor29 = browser.currentScene.createNode("TimeSensor");
TimeSensor29.DEF = "Clock";
TimeSensor29.cycleInterval = 16;
TimeSensor29.loop = True;
browser.currentScene.children[4] = TimeSensor29;

ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromField = "coordIndexes";
ROUTE30.fromNode = "OrbitScript";
ROUTE30.toField = "set_coordIndex";
ROUTE30.toNode = "Orbit";
browser.currentScene.children[5] = ROUTE30;

ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromField = "coordinates";
ROUTE31.fromNode = "OrbitScript";
ROUTE31.toField = "set_point";
ROUTE31.toNode = "OrbitCoordinates";
browser.currentScene.children[6] = ROUTE31;

ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "fraction_changed";
ROUTE32.fromNode = "Clock";
ROUTE32.toField = "set_fraction";
ROUTE32.toNode = "OrbitScript";
browser.currentScene.children[7] = ROUTE32;

