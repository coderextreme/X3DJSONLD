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
meta8.content = "geo.x3d";
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
meta11.content = "https://coderextreme.net/X3DJSONLD/geo.x3d";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "a sphere";
head1.meta[10] = meta12;

head = head1;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo14.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = NavigationInfo14;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.DEF = "Tour";
Viewpoint15.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint15;

//Viewpoint position='0 0 4' description='sphere in road'/
let Background16 = browser.currentScene.createNode("Background");
Background16.backUrl = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
Background16.bottomUrl = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
Background16.frontUrl = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
Background16.leftUrl = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
Background16.rightUrl = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
Background16.topUrl = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
browser.currentScene.children[2] = Background16;

let Transform17 = browser.currentScene.createNode("Transform");
let Shape18 = browser.currentScene.createNode("Shape");
let Sphere19 = browser.currentScene.createNode("Sphere");
Shape18.geometry = Sphere19;

let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material21.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance20.material = Material21;

let ComposedCubeMapTexture22 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture22.DEF = "texture";
let ImageTexture23 = browser.currentScene.createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["../resources/images/bBK.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture23;

let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["../resources/images/bBT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["../resources/images/bFR.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/bLF.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/bRT.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/bTP.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png"]);
ComposedCubeMapTexture22.topTexture = ImageTexture28;

Appearance20.texture = ComposedCubeMapTexture22;

let ComposedShader29 = browser.currentScene.createNode("ComposedShader");
ComposedShader29.language = "GLSL";
let field30 = browser.currentScene.createNode("field");
field30.name = "chromaticDispertion";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0.98 1 1.033";
ComposedShader29.field = new MFNode();

ComposedShader29.field[0] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "cube";
field31.type = "SFNode";
field31.accessType = "inputOutput";
let ComposedCubeMapTexture32 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture32.USE = "texture";
field31.children = new MFNode();

field31.children[0] = ComposedCubeMapTexture32;

ComposedShader29.field[1] = field31;

let field33 = browser.currentScene.createNode("field");
field33.name = "bias";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "0.5";
ComposedShader29.field[2] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "scale";
field34.accessType = "inputOutput";
field34.type = "SFFloat";
field34.value = "0.5";
ComposedShader29.field[3] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "power";
field35.accessType = "inputOutput";
field35.type = "SFFloat";
field35.value = "2";
ComposedShader29.field[4] = field35;

let ShaderPart36 = browser.currentScene.createNode("ShaderPart");
ShaderPart36.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart36.type = "VERTEX";
ComposedShader29.parts[5] = ShaderPart36;

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.DEF = "common";
ShaderPart37.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart37.type = "FRAGMENT";
ComposedShader29.parts[6] = ShaderPart37;

Appearance20.shaders = new MFNode();

Appearance20.shaders[0] = ComposedShader29;

let ComposedShader38 = browser.currentScene.createNode("ComposedShader");
ComposedShader38.language = "GLSL";
let field39 = browser.currentScene.createNode("field");
field39.name = "chromaticDispertion";
field39.accessType = "initializeOnly";
field39.type = "SFVec3f";
field39.value = "0.98 1 1.033";
ComposedShader38.field = new MFNode();

ComposedShader38.field[0] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "cube";
field40.type = "SFNode";
field40.accessType = "initializeOnly";
let ComposedCubeMapTexture41 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture41.USE = "texture";
field40.children = new MFNode();

field40.children[0] = ComposedCubeMapTexture41;

ComposedShader38.field[1] = field40;

let field42 = browser.currentScene.createNode("field");
field42.name = "bias";
field42.accessType = "initializeOnly";
field42.type = "SFFloat";
field42.value = "0.5";
ComposedShader38.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "scale";
field43.accessType = "initializeOnly";
field43.type = "SFFloat";
field43.value = "0.5";
ComposedShader38.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "power";
field44.accessType = "initializeOnly";
field44.type = "SFFloat";
field44.value = "2";
ComposedShader38.field[4] = field44;

let ShaderPart45 = browser.currentScene.createNode("ShaderPart");
ShaderPart45.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart45.type = "VERTEX";
ComposedShader38.parts[5] = ShaderPart45;

let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["../shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"]);
ShaderPart46.type = "FRAGMENT";
ComposedShader38.parts[6] = ShaderPart46;

Appearance20.shaders[1] = ComposedShader38;

Shape18.appearance = Appearance20;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

browser.currentScene.children[3] = Transform17;

