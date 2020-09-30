let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let NavigationInfo2 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo2;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
let Background3 = browser.currentScene.createNode("Background");
Background3.DEF = "background";
Background3.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
Background3.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
Background3.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
Background3.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
Background3.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
Background3.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
Background3.skyColor = new MFColor(new float[0,0,0]);
Background3.transparency = 0;
browser.currentScene.children[1] = Background3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.position = new SFVec3f(new float[0,0,40]);
Viewpoint4.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform5.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape6 = browser.currentScene.createNode("Shape");
Shape6.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material8.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance7.material = Material8;

let ComposedCubeMapTexture9 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture9.DEF = "texture";
let ImageTexture10 = browser.currentScene.createNode("ImageTexture");
ImageTexture10.DEF = "backShader";
ImageTexture10.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_back.png"]);
ComposedCubeMapTexture9.top = ImageTexture10;

let ImageTexture11 = browser.currentScene.createNode("ImageTexture");
ImageTexture11.DEF = "bottomShader";
ImageTexture11.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_bottom.png"]);
ComposedCubeMapTexture9.top = ImageTexture11;

let ImageTexture12 = browser.currentScene.createNode("ImageTexture");
ImageTexture12.DEF = "frontShader";
ImageTexture12.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_front.png"]);
ComposedCubeMapTexture9.top = ImageTexture12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.DEF = "leftShader";
ImageTexture13.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_left.png"]);
ComposedCubeMapTexture9.top = ImageTexture13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.DEF = "rightShader";
ImageTexture14.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_right.png"]);
ComposedCubeMapTexture9.top = ImageTexture14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.DEF = "topShader";
ImageTexture15.url = new MFString(new java.lang.String["../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/beach_cross/beach_top.png"]);
ComposedCubeMapTexture9.top = ImageTexture15;

Appearance7.texture = ComposedCubeMapTexture9;

let ComposedShader16 = browser.currentScene.createNode("ComposedShader");
ComposedShader16.DEF = "x3dom";
ComposedShader16.language = "GLSL";
let field17 = browser.currentScene.createNode("field");
field17.name = "cube";
field17.type = "SFInt32";
field17.accessType = "inputOutput";
field17.value = "0";
ComposedShader16.field = new MFNode();

ComposedShader16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "chromaticDispertion";
field18.accessType = "initializeOnly";
field18.type = "SFVec3f";
field18.value = "0.98 1 1.033";
ComposedShader16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "bias";
field19.type = "SFFloat";
field19.accessType = "inputOutput";
field19.value = "0.5";
ComposedShader16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "scale";
field20.type = "SFFloat";
field20.accessType = "inputOutput";
field20.value = "0.5";
ComposedShader16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "power";
field21.type = "SFFloat";
field21.accessType = "inputOutput";
field21.value = "2";
ComposedShader16.field[4] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "a";
field22.type = "SFFloat";
field22.accessType = "inputOutput";
field22.value = "10";
ComposedShader16.field[5] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "b";
field23.type = "SFFloat";
field23.accessType = "inputOutput";
field23.value = "1";
ComposedShader16.field[6] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "c";
field24.type = "SFFloat";
field24.accessType = "inputOutput";
field24.value = "20";
ComposedShader16.field[7] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "d";
field25.type = "SFFloat";
field25.accessType = "inputOutput";
field25.value = "20";
ComposedShader16.field[8] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "tdelta";
field26.type = "SFFloat";
field26.accessType = "inputOutput";
field26.value = "0";
ComposedShader16.field[9] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "pdelta";
field27.type = "SFFloat";
field27.accessType = "inputOutput";
field27.value = "0";
ComposedShader16.field[10] = field27;

//<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>
let ShaderPart28 = browser.currentScene.createNode("ShaderPart");
ShaderPart28.url = new MFString(new java.lang.String["../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"]);
ShaderPart28.type = "VERTEX";
ComposedShader16.parts[11] = ShaderPart28;

let ShaderPart29 = browser.currentScene.createNode("ShaderPart");
ShaderPart29.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart29.type = "FRAGMENT";
ComposedShader16.parts[12] = ShaderPart29;

Appearance7.shaders = new MFNode();

Appearance7.shaders[0] = ComposedShader16;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "x_ite";
ComposedShader30.language = "GLSL";
let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.type = "SFNode";
field31.accessType = "inputOutput";
let ComposedCubeMapTexture32 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture32.USE = "texture";
field31.children = new MFNode();

field31.children[0] = ComposedCubeMapTexture32;

ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader30.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "bias";
field34.type = "SFFloat";
field34.accessType = "inputOnly";
field34.value = "0.5";
ComposedShader30.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "scale";
field35.type = "SFFloat";
field35.accessType = "inputOnly";
field35.value = "0.5";
ComposedShader30.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "power";
field36.type = "SFFloat";
field36.accessType = "inputOnly";
field36.value = "2";
ComposedShader30.field[4] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "a";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "10";
ComposedShader30.field[5] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "b";
field38.type = "SFFloat";
field38.accessType = "inputOnly";
field38.value = "1";
ComposedShader30.field[6] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "c";
field39.type = "SFFloat";
field39.accessType = "inputOnly";
field39.value = "20";
ComposedShader30.field[7] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "d";
field40.type = "SFFloat";
field40.accessType = "inputOnly";
field40.value = "20";
ComposedShader30.field[8] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "tdelta";
field41.type = "SFFloat";
field41.accessType = "inputOnly";
field41.value = "0";
ComposedShader30.field[9] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "pdelta";
field42.type = "SFFloat";
field42.accessType = "inputOnly";
field42.value = "0";
ComposedShader30.field[10] = field42;

let ShaderPart43 = browser.currentScene.createNode("ShaderPart");
ShaderPart43.url = new MFString(new java.lang.String["../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"]);
ShaderPart43.type = "VERTEX";
ComposedShader30.parts[11] = ShaderPart43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart44.type = "FRAGMENT";
ComposedShader30.parts[12] = ShaderPart44;

Appearance7.shaders[1] = ComposedShader30;

Shape6.appearance = Appearance7;

let Sphere45 = browser.currentScene.createNode("Sphere");
Shape6.geometry = Sphere45;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

browser.currentScene.children[3] = Transform5;

//<TimeSensor DEF=\"Clock\" cycleInterval=\"45\" loop='true'/> <ROUTE fromNode='Clock' fromField='fraction_changed' toNode='UrlSelector' toField='set_fraction'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='background' toField='frontUrl'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='background' toField='backUrl'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='background' toField='leftUrl'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='background' toField='rightUrl'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='background' toField='topUrl'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='background' toField='bottomUrl'/> <ROUTE fromNode='UrlSelector' fromField='front' toNode='frontShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='back' toNode='backShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='left' toNode='leftShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='right' toNode='rightShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='top' toNode='topShader' toField='url'/> <ROUTE fromNode='UrlSelector' fromField='bottom' toNode='bottomShader' toField='url'/>
let TimeSensor46 = browser.currentScene.createNode("TimeSensor");
TimeSensor46.DEF = "TourTime";
TimeSensor46.cycleInterval = 5;
TimeSensor46.loop = True;
browser.currentScene.children[4] = TimeSensor46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "TourTime";
ROUTE47.fromField = "fraction_changed";
ROUTE47.toNode = "Animate";
ROUTE47.toField = "set_fraction";
browser.currentScene.children[5] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "Animate";
ROUTE48.fromField = "a";
ROUTE48.toNode = "x_ite";
ROUTE48.toField = "a";
browser.currentScene.children[6] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "Animate";
ROUTE49.fromField = "b";
ROUTE49.toNode = "x_ite";
ROUTE49.toField = "b";
browser.currentScene.children[7] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "Animate";
ROUTE50.fromField = "c";
ROUTE50.toNode = "x_ite";
ROUTE50.toField = "c";
browser.currentScene.children[8] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "Animate";
ROUTE51.fromField = "d";
ROUTE51.toNode = "x_ite";
ROUTE51.toField = "d";
browser.currentScene.children[9] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromNode = "Animate";
ROUTE52.fromField = "pdelta";
ROUTE52.toNode = "x_ite";
ROUTE52.toField = "pdelta";
browser.currentScene.children[10] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromNode = "Animate";
ROUTE53.fromField = "tdelta";
ROUTE53.toNode = "x_ite";
ROUTE53.toField = "tdelta";
browser.currentScene.children[11] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromNode = "Animate";
ROUTE54.fromField = "a";
ROUTE54.toNode = "x3dom";
ROUTE54.toField = "a";
browser.currentScene.children[12] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromNode = "Animate";
ROUTE55.fromField = "b";
ROUTE55.toNode = "x3dom";
ROUTE55.toField = "b";
browser.currentScene.children[13] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromNode = "Animate";
ROUTE56.fromField = "c";
ROUTE56.toNode = "x3dom";
ROUTE56.toField = "c";
browser.currentScene.children[14] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "Animate";
ROUTE57.fromField = "d";
ROUTE57.toNode = "x3dom";
ROUTE57.toField = "d";
browser.currentScene.children[15] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "Animate";
ROUTE58.fromField = "pdelta";
ROUTE58.toNode = "x3dom";
ROUTE58.toField = "pdelta";
browser.currentScene.children[16] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "Animate";
ROUTE59.fromField = "tdelta";
ROUTE59.toNode = "x3dom";
ROUTE59.toField = "tdelta";
browser.currentScene.children[17] = ROUTE59;

