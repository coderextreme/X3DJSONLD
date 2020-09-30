let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,5,100]);
Viewpoint2.description = "Switch background and images texture";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let TextureBackground3 = browser.currentScene.createNode("TextureBackground");
TextureBackground3.skyColor = new MFColor(new float[0,0,0]);
TextureBackground3.transparency = 0;
let ImageTexture4 = browser.currentScene.createNode("ImageTexture");
ImageTexture4.DEF = "leftBack";
ImageTexture4.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"]);
TextureBackground3.topTexture = ImageTexture4;

let ImageTexture5 = browser.currentScene.createNode("ImageTexture");
ImageTexture5.DEF = "rightBack";
ImageTexture5.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"]);
TextureBackground3.topTexture = ImageTexture5;

let ImageTexture6 = browser.currentScene.createNode("ImageTexture");
ImageTexture6.DEF = "frontBack";
ImageTexture6.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"]);
TextureBackground3.topTexture = ImageTexture6;

let ImageTexture7 = browser.currentScene.createNode("ImageTexture");
ImageTexture7.DEF = "backBack";
ImageTexture7.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"]);
TextureBackground3.topTexture = ImageTexture7;

let ImageTexture8 = browser.currentScene.createNode("ImageTexture");
ImageTexture8.DEF = "topBack";
ImageTexture8.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"]);
TextureBackground3.topTexture = ImageTexture8;

let ImageTexture9 = browser.currentScene.createNode("ImageTexture");
ImageTexture9.DEF = "bottomBack";
ImageTexture9.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"]);
TextureBackground3.topTexture = ImageTexture9;

browser.currentScene.children[1] = TextureBackground3;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform10.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape11.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material13.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance12.material = Material13;

let ComposedCubeMapTexture14 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.DEF = "backShader";
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture14.top = ImageTexture15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.DEF = "bottomShader";
ImageTexture16.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture14.top = ImageTexture16;

let ImageTexture17 = browser.currentScene.createNode("ImageTexture");
ImageTexture17.DEF = "frontShader";
ImageTexture17.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture14.top = ImageTexture17;

let ImageTexture18 = browser.currentScene.createNode("ImageTexture");
ImageTexture18.DEF = "leftShader";
ImageTexture18.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture14.top = ImageTexture18;

let ImageTexture19 = browser.currentScene.createNode("ImageTexture");
ImageTexture19.DEF = "rightShader";
ImageTexture19.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture14.top = ImageTexture19;

let ImageTexture20 = browser.currentScene.createNode("ImageTexture");
ImageTexture20.DEF = "topShader";
ImageTexture20.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture14.top = ImageTexture20;

Appearance12.texture = ComposedCubeMapTexture14;

let ComposedShader21 = browser.currentScene.createNode("ComposedShader");
ComposedShader21.DEF = "x3dom";
ComposedShader21.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field22 = browser.currentScene.createNode("field");
field22.name = "chromaticDispertion";
field22.accessType = "inputOutput";
field22.type = "SFVec3f";
field22.value = "0.98 1 1.033";
ComposedShader21.field = new MFNode();

ComposedShader21.field[0] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "cube";
field23.accessType = "inputOutput";
field23.type = "SFInt32";
field23.value = "0";
ComposedShader21.field[1] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "bias";
field24.accessType = "inputOutput";
field24.type = "SFFloat";
field24.value = "0.5";
ComposedShader21.field[2] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "scale";
field25.accessType = "inputOutput";
field25.type = "SFFloat";
field25.value = "0.5";
ComposedShader21.field[3] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "power";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.value = "2";
ComposedShader21.field[4] = field26;

let ShaderPart27 = browser.currentScene.createNode("ShaderPart");
ShaderPart27.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart27.type = "VERTEX";
ComposedShader21.parts[5] = ShaderPart27;

let ShaderPart28 = browser.currentScene.createNode("ShaderPart");
ShaderPart28.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"]);
ShaderPart28.type = "FRAGMENT";
ComposedShader21.parts[6] = ShaderPart28;

Appearance12.shaders = new MFNode();

Appearance12.shaders[0] = ComposedShader21;

let ComposedShader29 = browser.currentScene.createNode("ComposedShader");
ComposedShader29.DEF = "x_ite";
ComposedShader29.language = "GLSL";
//http://hypertextbook.com/facts/2005/JustinChe.shtml
let field30 = browser.currentScene.createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader29.field = new MFNode();

ComposedShader29.field[0] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.accessType = "inputOutput";
field31.type = "SFInt32";
field31.value = "0";
ComposedShader29.field[1] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "bias";
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.value = "0.5";
ComposedShader29.field[2] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "scale";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "0.5";
ComposedShader29.field[3] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "power";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "2";
ComposedShader29.field[4] = field34;

let ShaderPart35 = browser.currentScene.createNode("ShaderPart");
ShaderPart35.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"]);
ShaderPart35.type = "VERTEX";
ComposedShader29.parts[5] = ShaderPart35;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/mix.fs"]);
ShaderPart36.type = "FRAGMENT";
ComposedShader29.parts[6] = ShaderPart36;

Appearance12.shaders[1] = ComposedShader29;

Shape11.appearance = Appearance12;

let Sphere37 = browser.currentScene.createNode("Sphere");
Sphere37.radius = 30;
Shape11.geometry = Sphere37;

Transform10.children = new MFNode();

Transform10.children[0] = Shape11;

let TimeSensor38 = browser.currentScene.createNode("TimeSensor");
TimeSensor38.DEF = "Clock";
TimeSensor38.cycleInterval = 45;
TimeSensor38.loop = True;
Transform10.children[1] = TimeSensor38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromNode = "Clock";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "UrlSelector";
ROUTE39.toField = "set_fraction";
Transform10.children[2] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "UrlSelector";
ROUTE40.fromField = "front_changed";
ROUTE40.toNode = "frontBack";
ROUTE40.toField = "url";
Transform10.children[3] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "UrlSelector";
ROUTE41.fromField = "back_changed";
ROUTE41.toNode = "backBack";
ROUTE41.toField = "url";
Transform10.children[4] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "UrlSelector";
ROUTE42.fromField = "left_changed";
ROUTE42.toNode = "leftBack";
ROUTE42.toField = "url";
Transform10.children[5] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "UrlSelector";
ROUTE43.fromField = "right_changed";
ROUTE43.toNode = "rightBack";
ROUTE43.toField = "url";
Transform10.children[6] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromNode = "UrlSelector";
ROUTE44.fromField = "top_changed";
ROUTE44.toNode = "topBack";
ROUTE44.toField = "url";
Transform10.children[7] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromNode = "UrlSelector";
ROUTE45.fromField = "bottom_changed";
ROUTE45.toNode = "bottomBack";
ROUTE45.toField = "url";
Transform10.children[8] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "UrlSelector";
ROUTE46.fromField = "front_changed";
ROUTE46.toNode = "frontShader";
ROUTE46.toField = "url";
Transform10.children[9] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "UrlSelector";
ROUTE47.fromField = "back_changed";
ROUTE47.toNode = "backShader";
ROUTE47.toField = "url";
Transform10.children[10] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "UrlSelector";
ROUTE48.fromField = "left_changed";
ROUTE48.toNode = "leftShader";
ROUTE48.toField = "url";
Transform10.children[11] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "UrlSelector";
ROUTE49.fromField = "right_changed";
ROUTE49.toNode = "rightShader";
ROUTE49.toField = "url";
Transform10.children[12] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "UrlSelector";
ROUTE50.fromField = "top_changed";
ROUTE50.toNode = "topShader";
ROUTE50.toField = "url";
Transform10.children[13] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "UrlSelector";
ROUTE51.fromField = "bottom_changed";
ROUTE51.toNode = "bottomShader";
ROUTE51.toField = "url";
Transform10.children[14] = ROUTE51;

let X3DScript52 = browser.currentScene.createNode("X3DScript");
X3DScript52.DEF = "UrlSelector";
X3DScript52.directOutput = True;
let field53 = browser.currentScene.createNode("field");
field53.name = "frontUrls";
field53.type = "MFString";
field53.accessType = "initializeOnly";
field53.value = "\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\"";
X3DScript52.field = new MFNode();

X3DScript52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "backUrls";
field54.type = "MFString";
field54.accessType = "initializeOnly";
field54.value = "\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\"";
X3DScript52.field[1] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "leftUrls";
field55.type = "MFString";
field55.accessType = "initializeOnly";
field55.value = "\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\"";
X3DScript52.field[2] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "rightUrls";
field56.type = "MFString";
field56.accessType = "initializeOnly";
field56.value = "\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\"";
X3DScript52.field[3] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "topUrls";
field57.type = "MFString";
field57.accessType = "initializeOnly";
field57.value = "\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\"";
X3DScript52.field[4] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "bottomUrls";
field58.type = "MFString";
field58.accessType = "initializeOnly";
field58.value = "\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\"";
X3DScript52.field[5] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "front_changed";
field59.type = "MFString";
field59.accessType = "outputOnly";
X3DScript52.field[6] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "back_changed";
field60.type = "MFString";
field60.accessType = "outputOnly";
X3DScript52.field[7] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "left_changed";
field61.type = "MFString";
field61.accessType = "outputOnly";
X3DScript52.field[8] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "right_changed";
field62.type = "MFString";
field62.accessType = "outputOnly";
X3DScript52.field[9] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "top_changed";
field63.type = "MFString";
field63.accessType = "outputOnly";
X3DScript52.field[10] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "bottom_changed";
field64.type = "MFString";
field64.accessType = "outputOnly";
X3DScript52.field[11] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "set_fraction";
field65.type = "SFFloat";
field65.accessType = "inputOnly";
X3DScript52.field[12] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "old";
field66.type = "SFInt32";
field66.accessType = "inputOutput";
field66.value = "-1";
X3DScript52.field[13] = field66;

Transform10.x3DScript[15] = X3DScript52;

browser.currentScene.children[2] = Transform10;

