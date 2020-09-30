let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo2.type = new MFString(new java.lang.String["EXAMINE"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.DEF = "Tour";
Viewpoint3.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.position = new SFVec3f(new float[0,0,4]);
Viewpoint4.description = "sphere in road";
browser.currentScene.children[2] = Viewpoint4;

let Background5 = browser.currentScene.createNode("Background");
Background5.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"]);
Background5.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
Background5.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"]);
Background5.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"]);
Background5.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"]);
Background5.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"]);
Background5.skyColor = new MFColor(new float[0,0,0]);
Background5.transparency = 0;
browser.currentScene.children[3] = Background5;

let Transform6 = browser.currentScene.createNode("Transform");
Transform6.DEF = "Rose01";
Transform6.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape7 = browser.currentScene.createNode("Shape");
Shape7.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Sphere8 = browser.currentScene.createNode("Sphere");
Shape7.geometry = Sphere8;

let Appearance9 = browser.currentScene.createNode("Appearance");
Appearance9.DEF = "_01_-_Default";
let Material10 = browser.currentScene.createNode("Material");
Material10.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material10.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance9.material = Material10;

let ComposedCubeMapTexture11 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png"]);
ComposedCubeMapTexture11.top = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png"]);
ComposedCubeMapTexture11.top = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png"]);
ComposedCubeMapTexture11.top = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png"]);
ComposedCubeMapTexture11.top = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png"]);
ComposedCubeMapTexture11.top = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/uffizi_cross/uffizi_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png"]);
ComposedCubeMapTexture11.top = ImageTexture17;

Appearance9.texture = ComposedCubeMapTexture11;

let ComposedShader18 = browser.currentScene.createNode("ComposedShader");
ComposedShader18.DEF = "x_ite";
ComposedShader18.language = "GLSL";
let field19 = browser.currentScene.createNode("field");
field19.name = "cube";
field19.accessType = "inputOutput";
field19.type = "SFInt32";
field19.value = "0";
ComposedShader18.field = new MFNode();

ComposedShader18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "chromaticDispertion";
field20.accessType = "inputOutput";
field20.type = "SFVec3f";
field20.value = "0.98 1 1.033";
ComposedShader18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "bias";
field21.accessType = "inputOutput";
field21.type = "SFFloat";
field21.value = "0.5";
ComposedShader18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "scale";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.value = "0.5";
ComposedShader18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "power";
field23.accessType = "inputOutput";
field23.type = "SFFloat";
field23.value = "2";
ComposedShader18.field[4] = field23;

let ShaderPart24 = browser.currentScene.createNode("ShaderPart");
ShaderPart24.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart24.type = "VERTEX";
ComposedShader18.parts[5] = ShaderPart24;

let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart25.type = "FRAGMENT";
ComposedShader18.parts[6] = ShaderPart25;

Appearance9.shaders = new MFNode();

Appearance9.shaders[0] = ComposedShader18;

let ComposedShader26 = browser.currentScene.createNode("ComposedShader");
ComposedShader26.DEF = "x3dom";
ComposedShader26.language = "GLSL";
let field27 = browser.currentScene.createNode("field");
field27.name = "cube";
field27.accessType = "inputOutput";
field27.type = "SFInt32";
field27.value = "0";
ComposedShader26.field = new MFNode();

ComposedShader26.field[0] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "chromaticDispertion";
field28.accessType = "inputOutput";
field28.type = "SFVec3f";
field28.value = "0.98 1 1.033";
ComposedShader26.field[1] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "bias";
field29.accessType = "inputOutput";
field29.type = "SFFloat";
field29.value = "0.5";
ComposedShader26.field[2] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "scale";
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.value = "0.5";
ComposedShader26.field[3] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "power";
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.value = "2";
ComposedShader26.field[4] = field31;

let ShaderPart32 = browser.currentScene.createNode("ShaderPart");
ShaderPart32.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart32.type = "VERTEX";
ComposedShader26.parts[5] = ShaderPart32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart33.type = "FRAGMENT";
ComposedShader26.parts[6] = ShaderPart33;

Appearance9.shaders[1] = ComposedShader26;

Shape7.appearance = Appearance9;

Transform6.children = new MFNode();

Transform6.children[0] = Shape7;

browser.currentScene.children[4] = Transform6;

let TimeSensor34 = browser.currentScene.createNode("TimeSensor");
TimeSensor34.DEF = "TourTime";
TimeSensor34.cycleInterval = 5;
TimeSensor34.loop = True;
browser.currentScene.children[5] = TimeSensor34;

let PositionInterpolator35 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator35.DEF = "TourPosition";
PositionInterpolator35.key = new MFFloat(new float[0,1]);
PositionInterpolator35.keyValue = new MFVec3f(new float[0,0,10,0,0,-10]);
browser.currentScene.children[6] = PositionInterpolator35;

let OrientationInterpolator36 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator36.DEF = "TourOrientation";
OrientationInterpolator36.key = new MFFloat(new float[0,1]);
OrientationInterpolator36.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.1416]);
browser.currentScene.children[7] = OrientationInterpolator36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "TourTime";
ROUTE37.fromField = "cycleTime_changed";
ROUTE37.toNode = "RandomTourTime";
ROUTE37.toField = "set_cycle";
browser.currentScene.children[8] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "RandomTourTime";
ROUTE38.fromField = "orientation_changed";
ROUTE38.toNode = "TourOrientation";
ROUTE38.toField = "set_keyValue";
browser.currentScene.children[9] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "RandomTourTime";
ROUTE39.fromField = "position_changed";
ROUTE39.toNode = "TourPosition";
ROUTE39.toField = "set_keyValue";
browser.currentScene.children[10] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "TourTime";
ROUTE40.fromField = "fraction_changed";
ROUTE40.toNode = "TourOrientation";
ROUTE40.toField = "set_fraction";
browser.currentScene.children[11] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "TourOrientation";
ROUTE41.fromField = "value_changed";
ROUTE41.toNode = "Tour";
ROUTE41.toField = "set_orientation";
browser.currentScene.children[12] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "TourTime";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "TourPosition";
ROUTE42.toField = "set_fraction";
browser.currentScene.children[13] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "TourPosition";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "Tour";
ROUTE43.toField = "set_position";
browser.currentScene.children[14] = ROUTE43;

