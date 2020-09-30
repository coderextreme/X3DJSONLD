let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background3.skyColor = new MFColor(new float[0,0,0]);
Background3.transparency = 0;
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "transform";
Transform4.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform4.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape5 = browser.currentScene.createNode("Shape");
Shape5.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material7.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance6.material = Material7;

let ComposedCubeMapTexture8 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture8.top = ImageTexture9;

let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture8.top = ImageTexture10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture8.top = ImageTexture11;

let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture8.top = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture8.top = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture8.top = ImageTexture14;

Appearance6.texture = ComposedCubeMapTexture8;

let ComposedShader15 = browser.currentScene.createNode("ComposedShader");
ComposedShader15.DEF = "shader";
ComposedShader15.language = "GLSL";
let field16 = browser.currentScene.createNode("field");
field16.name = "cube";
field16.type = "SFInt32";
field16.accessType = "inputOutput";
field16.value = "0";
ComposedShader15.field = new MFNode();

ComposedShader15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "chromaticDispertion";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0.98 1 1.033";
ComposedShader15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "bias";
field18.type = "SFFloat";
field18.accessType = "inputOutput";
field18.value = "0.5";
ComposedShader15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "scale";
field19.type = "SFFloat";
field19.accessType = "inputOutput";
field19.value = "0.5";
ComposedShader15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "power";
field20.type = "SFFloat";
field20.accessType = "inputOutput";
field20.value = "2";
ComposedShader15.field[4] = field20;

let ShaderPart21 = browser.currentScene.createNode("ShaderPart");
ShaderPart21.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart21.type = "VERTEX";
ComposedShader15.parts[5] = ShaderPart21;

let ShaderPart22 = browser.currentScene.createNode("ShaderPart");
ShaderPart22.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart22.type = "FRAGMENT";
ComposedShader15.parts[6] = ShaderPart22;

Appearance6.shaders = new MFNode();

Appearance6.shaders[0] = ComposedShader15;

Shape5.appearance = Appearance6;

//<Sphere>
let IndexedFaceSet23 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet23.convex = False;
IndexedFaceSet23.DEF = "Orbit";
let Coordinate24 = browser.currentScene.createNode("Coordinate");
Coordinate24.DEF = "OrbitCoordinates";
IndexedFaceSet23.coord = Coordinate24;

Shape5.geometry = IndexedFaceSet23;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

browser.currentScene.children[2] = Transform4;

let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "Clock";
TimeSensor25.cycleInterval = 16;
TimeSensor25.loop = True;
browser.currentScene.children[3] = TimeSensor25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromField = "coordIndexes";
ROUTE26.fromNode = "OrbitScript";
ROUTE26.toField = "set_coordIndex";
ROUTE26.toNode = "Orbit";
browser.currentScene.children[4] = ROUTE26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromField = "coordinates";
ROUTE27.fromNode = "OrbitScript";
ROUTE27.toField = "set_point";
ROUTE27.toNode = "OrbitCoordinates";
browser.currentScene.children[5] = ROUTE27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromField = "fraction_changed";
ROUTE28.fromNode = "Clock";
ROUTE28.toField = "set_fraction";
ROUTE28.toNode = "OrbitScript";
browser.currentScene.children[6] = ROUTE28;

