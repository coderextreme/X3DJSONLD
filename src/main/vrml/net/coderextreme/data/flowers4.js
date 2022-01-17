let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "CubeMapTexturing";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Texturing";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Rendering";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Shape";
component6.level = 4;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "title";
meta8.content = "flowers4.x3d";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "creator";
meta9.content = "John Carlson";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "manual";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://coderextreme.net/X3DJSONLD/flowers4.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "an animated flower";
head1.meta[10] = meta12;

head = head1;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo14;

let Background15 = browser.currentScene.createNode("Background");
Background15.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background15.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background15.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background15.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background15.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background15.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[1] = Background15;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "transform";
let Shape17 = browser.currentScene.createNode("Shape");
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material19.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance18.material = Material19;

let ComposedCubeMapTexture20 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture21 = browser.currentScene.createNode("ImageTexture");
ImageTexture21.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture21;

let ImageTexture22 = browser.currentScene.createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture22;

let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture23;

let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture20.topTexture = ImageTexture26;

Appearance18.texture = ComposedCubeMapTexture20;

let ComposedShader27 = browser.currentScene.createNode("ComposedShader");
ComposedShader27.DEF = "shader";
ComposedShader27.language = "GLSL";
let field28 = browser.currentScene.createNode("field");
field28.name = "cube";
field28.type = "SFInt32";
field28.accessType = "inputOutput";
field28.value = "0";
ComposedShader27.field = new MFNode();

ComposedShader27.field[0] = field28;

let field29 = browser.currentScene.createNode("field");
field29.name = "chromaticDispertion";
field29.accessType = "inputOutput";
field29.type = "SFVec3f";
field29.value = "0.98 1 1.033";
ComposedShader27.field[1] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "bias";
field30.type = "SFFloat";
field30.accessType = "inputOutput";
field30.value = "0.5";
ComposedShader27.field[2] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "scale";
field31.type = "SFFloat";
field31.accessType = "inputOutput";
field31.value = "0.5";
ComposedShader27.field[3] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "power";
field32.type = "SFFloat";
field32.accessType = "inputOutput";
field32.value = "2";
ComposedShader27.field[4] = field32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart33.type = "VERTEX";
ComposedShader27.parts[5] = ShaderPart33;

let ShaderPart34 = browser.currentScene.createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/pc_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs"]);
ShaderPart34.type = "FRAGMENT";
ComposedShader27.parts[6] = ShaderPart34;

Appearance18.shaders = new MFNode();

Appearance18.shaders[0] = ComposedShader27;

Shape17.appearance = Appearance18;

//<Sphere>
let IndexedFaceSet35 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet35.convex = False;
IndexedFaceSet35.DEF = "Orbit";
let Coordinate36 = browser.currentScene.createNode("Coordinate");
Coordinate36.DEF = "OrbitCoordinates";
IndexedFaceSet35.coord = Coordinate36;

Shape17.geometry = IndexedFaceSet35;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

browser.currentScene.children[2] = Transform16;

let Script37 = browser.currentScene.createNode("Script");
Script37.DEF = "OrbitScript";
let field38 = browser.currentScene.createNode("field");
field38.name = "set_fraction";
field38.accessType = "inputOnly";
field38.type = "SFFloat";
Script37.field = new MFNode();

Script37.field[0] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "coordinates";
field39.accessType = "inputOutput";
field39.type = "MFVec3f";
Script37.field[1] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "coordIndexes";
field40.accessType = "outputOnly";
field40.type = "MFInt32";
Script37.field[2] = field40;

let #sourceCode41 = browser.currentScene.createNode("#sourceCode");
Script37.#sourceCode[3] = #sourceCode41;

browser.currentScene.children[3] = Script37;

let TimeSensor42 = browser.currentScene.createNode("TimeSensor");
TimeSensor42.DEF = "Clock";
TimeSensor42.cycleInterval = 16;
TimeSensor42.loop = True;
browser.currentScene.children[4] = TimeSensor42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromField = "coordIndexes";
ROUTE43.fromNode = "OrbitScript";
ROUTE43.toField = "set_coordIndex";
ROUTE43.toNode = "Orbit";
browser.currentScene.children[5] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "coordinates";
ROUTE44.fromNode = "OrbitScript";
ROUTE44.toField = "set_point";
ROUTE44.toNode = "OrbitCoordinates";
browser.currentScene.children[6] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "fraction_changed";
ROUTE45.fromNode = "Clock";
ROUTE45.toField = "set_fraction";
ROUTE45.toNode = "OrbitScript";
browser.currentScene.children[7] = ROUTE45;

