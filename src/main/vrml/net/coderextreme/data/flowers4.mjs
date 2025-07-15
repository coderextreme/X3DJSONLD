const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Shape", 4));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "flowers4.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d");
scene.addMetaData("description", "an animated flower");
await browser .loadComponents (scene);
let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo17;

let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[1] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "transform";
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material22.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture29;

texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "shader";
ComposedShader30.language = "GLSL";
ComposedShader31.getField("cube").setValue("0");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader32.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader33.getField("bias").setValue("0.5");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader34.getField("scale").setValue("0.5");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader35.getField("power").setValue("2");
ComposedShader30YYY.field = new X3D.MFNode();

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]);
ShaderPart36.type = "VERTEX";
ComposedShader30YYY.parts = new X3D.MFNode();

ComposedShader30ZZZ.parts[0] = ShaderPart36;

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]);
ShaderPart37.type = "FRAGMENT";
ComposedShader30ZZZ.parts[1] = ShaderPart37;

Appearance21YYY.shaders = new X3D.MFNode();

Appearance21ZZZ.shaders[0] = ComposedShader30;

appearance = Appearance21;

//<Sphere>
let IndexedFaceSet38 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet38.convex = False;
IndexedFaceSet38.DEF = "Orbit";
let Coordinate39 = browser.currentScene.createNode("Coordinate");
Coordinate39.DEF = "OrbitCoordinates";
coord = Coordinate39;

geometry = IndexedFaceSet38;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[2] = Transform19;

let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "OrbitScript";
Script41.getField("set_fraction")Script40YYY.field = new X3D.MFNode();

Script42.getField("coordinates")Script40YYY.field = new X3D.MFNode();

Script43.getField("coordIndexes")Script40YYY.field = new X3D.MFNode();

Script44.getField("e").setValue("5");
Script40YYY.field = new X3D.MFNode();

Script45.getField("f").setValue("5");
Script40YYY.field = new X3D.MFNode();

Script46.getField("g").setValue("5");
Script40YYY.field = new X3D.MFNode();

Script47.getField("h").setValue("5");
Script40YYY.field = new X3D.MFNode();


Script40.setSourceCode(`ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     updateCoordinates(resolution);\n"+
"     var localci = new MFInt32();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution-1; i++) {\n"+
"     	for (var j = 0; j < resolution-1; j++) {\n"+
"	     localci[arrIndex++] = i*resolution+j;\n"+
"	     localci[arrIndex++] = i*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j+1;\n"+
"	     localci[arrIndex++] = (i+1)*resolution+j;\n"+
"	     localci[arrIndex++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = localci;\n"+
"}\n"+
"\n"+
"function updateCoordinates(resolution) {\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var localc = new MFVec3f();\n"+
"     var arrIndex = 0;\n"+
"     for (var i = 0; i < resolution; i++) {\n"+
"     	for (var j = 0; j < resolution; j++) {\n"+
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"		localc[arrIndex++] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = localc;\n"+
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
"	if (e < 1) {\n"+
"		e = 10;\n"+
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
browser.currentScene.children[3] = Script40;

let TimeSensor48 = browser.currentScene.createNode("TimeSensor");
TimeSensor48.DEF = "Clock";
TimeSensor48.cycleInterval = 16;
TimeSensor48.loop = True;
browser.currentScene.children[4] = TimeSensor48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "coordIndexes";
ROUTE49.fromNode = "OrbitScript";
ROUTE49.toField = "set_coordIndex";
ROUTE49.toNode = "Orbit";
browser.currentScene.children[5] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "coordinates";
ROUTE50.fromNode = "OrbitScript";
ROUTE50.toField = "set_point";
ROUTE50.toNode = "OrbitCoordinates";
browser.currentScene.children[6] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "fraction_changed";
ROUTE51.fromNode = "Clock";
ROUTE51.toField = "set_fraction";
ROUTE51.toNode = "OrbitScript";
browser.currentScene.children[7] = ROUTE51;

}
main ();
