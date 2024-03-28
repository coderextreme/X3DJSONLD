let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
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

//<component name='Shape' level='4'></component>
let meta10 = browser.currentScene.createNode("meta");
meta10.name = "title";
meta10.content = "bumpyfreewrl.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "A flower";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://coderextreme.net/X3DJSONLD/src/main/data/bumpfreewrl.x3d";
head1.meta[12] = meta14;

head = head1;

let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "bumpyx_ite.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo16;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.position = new SFVec3f(new float[0,0,40]);
Viewpoint18.description = "Transparent rose";
browser.currentScene.children[2] = Viewpoint18;

//Images courtesy of Paul Debevec's Light Probe Image Gallery
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
Sphere22.radius = 5;
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
ComposedShader32.DEF = "freewrlShader";
ComposedShader32.language = "GLSL";
let field33 = browser.currentScene.createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "inputOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "fw_textureCoordGenType";
field34.accessType = "inputOnly";
field34.type = "SFInt32";
field34.value = "0";
ComposedShader32.field[1] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "bias";
field35.type = "SFFloat";
field35.accessType = "inputOnly";
field35.value = "0.5";
ComposedShader32.field[2] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "scale";
field36.type = "SFFloat";
field36.accessType = "inputOnly";
field36.value = "0.5";
ComposedShader32.field[3] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "power";
field37.type = "SFFloat";
field37.accessType = "inputOnly";
field37.value = "2";
ComposedShader32.field[4] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "a";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "10";
ComposedShader32.field[5] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "b";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "1";
ComposedShader32.field[6] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "c";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "5";
ComposedShader32.field[7] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "d";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "5";
ComposedShader32.field[8] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "tdelta";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "0";
ComposedShader32.field[9] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "pdelta";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "0";
ComposedShader32.field[10] = field43;

let ShaderPart44 = browser.currentScene.createNode("ShaderPart");
ShaderPart44.url = new MFString(new java.lang.String["../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"]);
ShaderPart44.type = "VERTEX";
ComposedShader32.parts[11] = ShaderPart44;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/freewrl_bubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"]);
ShaderPart45.type = "FRAGMENT";
ComposedShader32.parts[12] = ShaderPart45;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

Shape21.appearance = Appearance23;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

browser.currentScene.children[4] = Transform20;

