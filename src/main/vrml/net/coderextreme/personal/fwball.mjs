let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Core";
component8.level = 1;
head1.component[6] = component8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "title";
meta9.content = "fwball.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "creator";
meta10.content = "John Carlson";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "identifier";
meta11.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/fwball.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "a prismatic sphere";
head1.meta[10] = meta12;

head = head1;

let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "fwball.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo14;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo15.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children[1] = NavigationInfo15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "Tour Views";
Viewpoint16.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[2] = Viewpoint16;

let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background17.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background17.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background17.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background17.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background17.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[3] = Background17;

let Transform18 = browser.currentScene.createNode("Transform");
let Shape19 = browser.currentScene.createNode("Shape");
let Sphere20 = browser.currentScene.createNode("Sphere");
Shape19.geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.language = "GLSL";
let field31 = browser.currentScene.createNode("field");
field31.name = "chromaticDispertion";
field31.accessType = "inputOutput";
field31.type = "SFVec3f";
field31.value = "0.98 1 1.033";
ComposedShader30.field = new MFNode();

ComposedShader30.field[0] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "cube";
field32.type = "SFNode";
field32.accessType = "inputOutput";
let ComposedCubeMapTexture33 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture33.USE = "texture";
field32.children = new MFNode();

field32.children[0] = ComposedCubeMapTexture33;

ComposedShader30.field[1] = field32;

let field34 = browser.currentScene.createNode("field");
field34.name = "bias";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader30.field[2] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "scale";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "0.5";
ComposedShader30.field[3] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "power";
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.value = "2";
ComposedShader30.field[4] = field36;

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"]);
ShaderPart37.type = "VERTEX";
ComposedShader30.parts[5] = ShaderPart37;

let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]);
ShaderPart38.type = "FRAGMENT";
ComposedShader30.parts[6] = ShaderPart38;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

Shape19.appearance = Appearance21;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

browser.currentScene.children[4] = Transform18;

