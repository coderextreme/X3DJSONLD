let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "EnvironmentalEffects";
component3.level = 3;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Shaders";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "CubeMapTexturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Texturing";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Rendering";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shape";
component8.level = 4;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Grouping";
component9.level = 3;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Core";
component10.level = 1;
head1.component[8] = component10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "title";
meta11.content = "geo.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "creator";
meta12.content = "John Carlson";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "manual";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/geo.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "description";
meta15.content = "a sphere";
head1.meta[13] = meta15;

head = head1;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo17.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "Tour";
Viewpoint18.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint18;

//Viewpoint position='0 0 4' description='sphere in road'/
let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
browser.currentScene.children[2] = Background19;

let Transform20 = browser.currentScene.createNode("Transform");
let Shape21 = browser.currentScene.createNode("Shape");
let Sphere22 = browser.currentScene.createNode("Sphere");
Shape21.geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

let ComposedCubeMapTexture25 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

let ComposedShader32 = browser.currentScene.createNode("ComposedShader");
ComposedShader32.language = "GLSL";
let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "cube";
field34.type = "SFNode";
field34.accessType = "inputOutput";
let ComposedCubeMapTexture35 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader32.field[1] = field34;

let field36 = browser.currentScene.createNode("field");
field36.name = "bias";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "0.5";
ComposedShader32.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "scale";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader32.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "power";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "2";
ComposedShader32.field[4] = field38;

let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart39.type = "VERTEX";
ComposedShader32.parts[5] = ShaderPart39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.DEF = "common";
ShaderPart40.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart40.type = "FRAGMENT";
ComposedShader32.parts[6] = ShaderPart40;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

let ComposedShader41 = browser.currentScene.createNode("ComposedShader");
ComposedShader41.language = "GLSL";
let field42 = browser.currentScene.createNode("field");
field42.name = "chromaticDispertion";
field42.accessType = "initializeOnly";
field42.type = "SFVec3f";
field42.value = "0.98 1 1.033";
ComposedShader41.field = new MFNode();

ComposedShader41.field[0] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "cube";
field43.type = "SFNode";
field43.accessType = "initializeOnly";
let ComposedCubeMapTexture44 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture44.USE = "texture";
field43.children = new MFNode();

field43.children[0] = ComposedCubeMapTexture44;

ComposedShader41.field[1] = field43;

let field45 = browser.currentScene.createNode("field");
field45.name = "bias";
field45.accessType = "initializeOnly";
field45.type = "SFFloat";
field45.value = "0.5";
ComposedShader41.field[2] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "scale";
field46.accessType = "initializeOnly";
field46.type = "SFFloat";
field46.value = "0.5";
ComposedShader41.field[3] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "power";
field47.accessType = "initializeOnly";
field47.type = "SFFloat";
field47.value = "2";
ComposedShader41.field[4] = field47;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart48.type = "VERTEX";
ComposedShader41.parts[5] = ShaderPart48;

let ShaderPart49 = browser.currentScene.createNode("ShaderPart");
ShaderPart49.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart49.type = "FRAGMENT";
ComposedShader41.parts[6] = ShaderPart49;

Appearance23.shaders[1] = ComposedShader41;

Shape21.appearance = Appearance23;

Transform20.children = new MFNode();

Transform20.children[0] = Shape21;

browser.currentScene.children[3] = Transform20;

