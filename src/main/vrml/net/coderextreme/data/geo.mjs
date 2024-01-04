let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "geo.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "generator";
meta5.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[3] = meta5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "EnvironmentalEffects";
component7.level = 3;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Shaders";
component8.level = 1;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "CubeMapTexturing";
component9.level = 1;
head1.component[7] = component9;

let component10 = browser.currentScene.createNode("component");
component10.name = "Texturing";
component10.level = 1;
head1.component[8] = component10;

let component11 = browser.currentScene.createNode("component");
component11.name = "Rendering";
component11.level = 1;
head1.component[9] = component11;

let component12 = browser.currentScene.createNode("component");
component12.name = "Shape";
component12.level = 4;
head1.component[10] = component12;

let component13 = browser.currentScene.createNode("component");
component13.name = "Grouping";
component13.level = 3;
head1.component[11] = component13;

let component14 = browser.currentScene.createNode("component");
component14.name = "Core";
component14.level = 1;
head1.component[12] = component14;

head = head1;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.DEF = "Tour";
Viewpoint17.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint17;

let Background18 = browser.currentScene.createNode("Background");
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
Background18.backUrl = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
browser.currentScene.children[2] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
Appearance21.texture = ComposedCubeMapTexture23;

let ComposedShader24 = browser.currentScene.createNode("ComposedShader");
ComposedShader24.language = "GLSL";
let ShaderPart25 = browser.currentScene.createNode("ShaderPart");
ShaderPart25.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ComposedShader24.parts = new MFNode();

ComposedShader24.parts[0] = ShaderPart25;

let ShaderPart26 = browser.currentScene.createNode("ShaderPart");
ShaderPart26.DEF = "common";
ShaderPart26.type = "FRAGMENT";
ShaderPart26.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ComposedShader24.parts[1] = ShaderPart26;

let field27 = browser.currentScene.createNode("field");
field27.accessType = "inputOutput";
field27.type = "SFVec3f";
field27.name = "chromaticDispertion";
field27.value = "0.98 1 1.033";
ComposedShader24.field[2] = field27;

let field28 = browser.currentScene.createNode("field");
field28.accessType = "inputOutput";
field28.type = "SFNode";
field28.name = "cube";
let ComposedCubeMapTexture29 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture29.USE = "texture";
field28.children = new MFNode();

field28.children[0] = ComposedCubeMapTexture29;

ComposedShader24.field[3] = field28;

let field30 = browser.currentScene.createNode("field");
field30.accessType = "inputOutput";
field30.type = "SFFloat";
field30.name = "bias";
field30.value = "0.5";
ComposedShader24.field[4] = field30;

let field31 = browser.currentScene.createNode("field");
field31.accessType = "inputOutput";
field31.type = "SFFloat";
field31.name = "scale";
field31.value = "0.5";
ComposedShader24.field[5] = field31;

let field32 = browser.currentScene.createNode("field");
field32.accessType = "inputOutput";
field32.type = "SFFloat";
field32.name = "power";
field32.value = "2";
ComposedShader24.field[6] = field32;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader24;

let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.language = "GLSL";
let ShaderPart34 = browser.currentScene.createNode("ShaderPart");
ShaderPart34.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ComposedShader33.parts = new MFNode();

ComposedShader33.parts[0] = ShaderPart34;

let ShaderPart35 = browser.currentScene.createNode("ShaderPart");
ShaderPart35.type = "FRAGMENT";
ShaderPart35.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ComposedShader33.parts[1] = ShaderPart35;

let field36 = browser.currentScene.createNode("field");
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.name = "chromaticDispertion";
field36.value = "0.98 1 1.033";
ComposedShader33.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.accessType = "initializeOnly";
field37.type = "SFNode";
field37.name = "cube";
let ComposedCubeMapTexture38 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture38.USE = "texture";
field37.children = new MFNode();

field37.children[0] = ComposedCubeMapTexture38;

ComposedShader33.field[3] = field37;

let field39 = browser.currentScene.createNode("field");
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.name = "bias";
field39.value = "0.5";
ComposedShader33.field[4] = field39;

let field40 = browser.currentScene.createNode("field");
field40.accessType = "initializeOnly";
field40.type = "SFFloat";
field40.name = "scale";
field40.value = "0.5";
ComposedShader33.field[5] = field40;

let field41 = browser.currentScene.createNode("field");
field41.accessType = "initializeOnly";
field41.type = "SFFloat";
field41.name = "power";
field41.value = "2";
ComposedShader33.field[6] = field41;

Appearance21.shaders[1] = ComposedShader33;

Shape20.appearance = Appearance21;

let Sphere42 = browser.currentScene.createNode("Sphere");
Shape20.geometry = Sphere42;

Transform19.child = new undefined();

Transform19.child[0] = Shape20;

browser.currentScene.children[3] = Transform19;

