let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,5,100]);
Viewpoint2.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.DEF = "cube";
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
Background3.skyColor = new MFColor(new float[0,0,0]);
Background3.transparency = 0;
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
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
ImageTexture9.DEF = "backShader";
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture8.top = ImageTexture9;

let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "bottomShader";
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture8.top = ImageTexture10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.DEF = "frontShader";
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture8.top = ImageTexture11;

let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.DEF = "leftShader";
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture8.top = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.DEF = "rightShader";
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture8.top = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.DEF = "topShader";
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture8.top = ImageTexture14;

Appearance6.texture = ComposedCubeMapTexture8;

let ComposedShader15 = browser.currentScene.createNode("ComposedShader");
ComposedShader15.DEF = "x_ite";
ComposedShader15.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field16 = browser.currentScene.createNode("field");
field16.name = "chromaticDispertion";
field16.accessType = "inputOutput";
field16.type = "SFVec3f";
field16.value = "0.98 1 1.033";
ComposedShader15.field = new MFNode();

ComposedShader15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "cube";
field17.accessType = "inputOutput";
field17.type = "SFInt32";
field17.value = "0";
ComposedShader15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "bias";
field18.accessType = "inputOutput";
field18.type = "SFFloat";
field18.value = "0.5";
ComposedShader15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "scale";
field19.accessType = "inputOutput";
field19.type = "SFFloat";
field19.value = "0.5";
ComposedShader15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "power";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.value = "2";
ComposedShader15.field[4] = field20;

let ShaderPart21 = browser.currentScene.createNode("ShaderPart");
ShaderPart21.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart21.type = "VERTEX";
ComposedShader15.parts[5] = ShaderPart21;

let ShaderPart22 = browser.currentScene.createNode("ShaderPart");
ShaderPart22.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart22.type = "FRAGMENT";
ComposedShader15.parts[6] = ShaderPart22;

Appearance6.shaders = new MFNode();

Appearance6.shaders[0] = ComposedShader15;

let ComposedShader23 = browser.currentScene.createNode("ComposedShader");
ComposedShader23.DEF = "x3dom";
ComposedShader23.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field24 = browser.currentScene.createNode("field");
field24.name = "chromaticDispertion";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0.98 1 1.033";
ComposedShader23.field = new MFNode();

ComposedShader23.field[0] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "cube";
field25.accessType = "inputOutput";
field25.type = "SFInt32";
field25.value = "0";
ComposedShader23.field[1] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "bias";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.value = "0.5";
ComposedShader23.field[2] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "scale";
field27.accessType = "inputOutput";
field27.type = "SFFloat";
field27.value = "0.5";
ComposedShader23.field[3] = field27;

let field28 = browser.currentScene.createNode("field");
field28.name = "power";
field28.accessType = "inputOutput";
field28.type = "SFFloat";
field28.value = "2";
ComposedShader23.field[4] = field28;

let ShaderPart29 = browser.currentScene.createNode("ShaderPart");
ShaderPart29.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart29.type = "VERTEX";
ComposedShader23.parts[5] = ShaderPart29;

let ShaderPart30 = browser.currentScene.createNode("ShaderPart");
ShaderPart30.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart30.type = "FRAGMENT";
ComposedShader23.parts[6] = ShaderPart30;

Appearance6.shaders[1] = ComposedShader23;

Shape5.appearance = Appearance6;

let Sphere31 = browser.currentScene.createNode("Sphere");
Sphere31.radius = 30;
Shape5.geometry = Sphere31;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let TimeSensor32 = browser.currentScene.createNode("TimeSensor");
TimeSensor32.DEF = "Clock";
TimeSensor32.cycleInterval = 45;
TimeSensor32.loop = True;
Transform4.children[1] = TimeSensor32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromNode = "Clock";
ROUTE33.fromField = "fraction_changed";
ROUTE33.toNode = "UrlSelector";
ROUTE33.toField = "set_fraction";
Transform4.children[2] = ROUTE33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "UrlSelector";
ROUTE34.fromField = "front_changed";
ROUTE34.toNode = "cube";
ROUTE34.toField = "frontUrl";
Transform4.children[3] = ROUTE34;

let ROUTE35 = browser.currentScene.createNode("ROUTE");
ROUTE35.fromNode = "UrlSelector";
ROUTE35.fromField = "back_changed";
ROUTE35.toNode = "cube";
ROUTE35.toField = "backUrl";
Transform4.children[4] = ROUTE35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromNode = "UrlSelector";
ROUTE36.fromField = "left_changed";
ROUTE36.toNode = "cube";
ROUTE36.toField = "leftUrl";
Transform4.children[5] = ROUTE36;

let ROUTE37 = browser.currentScene.createNode("ROUTE");
ROUTE37.fromNode = "UrlSelector";
ROUTE37.fromField = "right_changed";
ROUTE37.toNode = "cube";
ROUTE37.toField = "rightUrl";
Transform4.children[6] = ROUTE37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromNode = "UrlSelector";
ROUTE38.fromField = "top_changed";
ROUTE38.toNode = "cube";
ROUTE38.toField = "topUrl";
Transform4.children[7] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "UrlSelector";
ROUTE39.fromField = "bottom_changed";
ROUTE39.toNode = "cube";
ROUTE39.toField = "bottomUrl";
Transform4.children[8] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "UrlSelector";
ROUTE40.fromField = "front_changed";
ROUTE40.toNode = "frontShader";
ROUTE40.toField = "url";
Transform4.children[9] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "UrlSelector";
ROUTE41.fromField = "back_changed";
ROUTE41.toNode = "backShader";
ROUTE41.toField = "url";
Transform4.children[10] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "UrlSelector";
ROUTE42.fromField = "left_changed";
ROUTE42.toNode = "leftShader";
ROUTE42.toField = "url";
Transform4.children[11] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "UrlSelector";
ROUTE43.fromField = "right_changed";
ROUTE43.toNode = "rightShader";
ROUTE43.toField = "url";
Transform4.children[12] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "UrlSelector";
ROUTE44.fromField = "top_changed";
ROUTE44.toNode = "topShader";
ROUTE44.toField = "url";
Transform4.children[13] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "UrlSelector";
ROUTE45.fromField = "bottom_changed";
ROUTE45.toNode = "bottomShader";
ROUTE45.toField = "url";
Transform4.children[14] = ROUTE45;

let X3DScript46 = browser.currentScene.createNode("X3DScript");
X3DScript46.DEF = "UrlSelector";
X3DScript46.directOutput = True;
let field47 = browser.currentScene.createNode("field");
field47.name = "frontUrls";
field47.type = "MFString";
field47.accessType = "initializeOnly";
field47.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
X3DScript46.field = new MFNode();

X3DScript46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "backUrls";
field48.type = "MFString";
field48.accessType = "initializeOnly";
field48.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
X3DScript46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "leftUrls";
field49.type = "MFString";
field49.accessType = "initializeOnly";
field49.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
X3DScript46.field[2] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "rightUrls";
field50.type = "MFString";
field50.accessType = "initializeOnly";
field50.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
X3DScript46.field[3] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "topUrls";
field51.type = "MFString";
field51.accessType = "initializeOnly";
field51.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
X3DScript46.field[4] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "bottomUrls";
field52.type = "MFString";
field52.accessType = "initializeOnly";
field52.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
X3DScript46.field[5] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "front_changed";
field53.type = "MFString";
field53.accessType = "outputOnly";
X3DScript46.field[6] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "back_changed";
field54.type = "MFString";
field54.accessType = "outputOnly";
X3DScript46.field[7] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "left_changed";
field55.type = "MFString";
field55.accessType = "outputOnly";
X3DScript46.field[8] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "right_changed";
field56.type = "MFString";
field56.accessType = "outputOnly";
X3DScript46.field[9] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "top_changed";
field57.type = "MFString";
field57.accessType = "outputOnly";
X3DScript46.field[10] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "bottom_changed";
field58.type = "MFString";
field58.accessType = "outputOnly";
X3DScript46.field[11] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "set_fraction";
field59.type = "SFFloat";
field59.accessType = "inputOnly";
X3DScript46.field[12] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "old";
field60.type = "SFInt32";
field60.accessType = "inputOutput";
field60.value = "-1";
X3DScript46.field[13] = field60;

Transform4.x3DScript[15] = X3DScript46;

browser.currentScene.children[2] = Transform4;

