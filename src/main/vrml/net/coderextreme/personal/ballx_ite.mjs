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
component8.name = "Grouping";
component8.level = 3;
head1.component[6] = component8;

let component9 = browser.currentScene.createNode("component");
component9.name = "Core";
component9.level = 1;
head1.component[7] = component9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "title";
meta10.content = "ballx_ite.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "manual";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/ballx_ite.x3d";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "description";
meta14.content = "a prismatic sphere";
head1.meta[12] = meta14;

head = head1;

let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "ballx_ite.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo16;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo17.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children[1] = NavigationInfo17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Tour Views";
browser.currentScene.children[2] = Viewpoint18;

let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[3] = Background19;

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
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

let ComposedShader32 = browser.currentScene.createNode("ComposedShader");
ComposedShader32.language = "GLSL";
let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "cube";
field34.type = "SFNode";
field34.accessType = "initializeOnly";
let ComposedCubeMapTexture35 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader32.field[1] = field34;

let field36 = browser.currentScene.createNode("field");
field36.name = "bias";
field36.accessType = "initializeOnly";
field36.type = "SFFloat";
field36.value = "0.5";
ComposedShader32.field[2] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "scale";
field37.accessType = "initializeOnly";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader32.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "power";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "2";
ComposedShader32.field[4] = field38;

let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart39.type = "VERTEX";
ComposedShader32.parts[5] = ShaderPart39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart40.type = "FRAGMENT";
ComposedShader32.parts[6] = ShaderPart40;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

Shape21.appearance = Appearance23;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

browser.currentScene.children[4] = Transform20;

