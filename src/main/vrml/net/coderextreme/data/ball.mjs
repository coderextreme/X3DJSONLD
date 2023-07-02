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
meta11.content = "ball.x3d";
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
meta14.content = "https://coderextreme.net/X3DJSONLD/ball.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "description";
meta15.content = "a prismatic sphere";
head1.meta[13] = meta15;

head = head1;

let WorldInfo17 = browser.currentScene.createNode("WorldInfo");
WorldInfo17.title = "ball.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo17;

let NavigationInfo18 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo18.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children[1] = NavigationInfo18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.description = "Tour Views";
browser.currentScene.children[2] = Viewpoint19;

let Background20 = browser.currentScene.createNode("Background");
Background20.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background20.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background20.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background20.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background20.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background20.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[3] = Background20;

let Transform21 = browser.currentScene.createNode("Transform");
let Shape22 = browser.currentScene.createNode("Shape");
let Sphere23 = browser.currentScene.createNode("Sphere");
Shape22.geometry = Sphere23;

let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

//<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/contact.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/octaga.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/instant.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//
let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.language = "GLSL";
let field34 = browser.currentScene.createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader33.field = new MFNode();

ComposedShader33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "cube";
field35.type = "SFNode";
field35.accessType = "inputOutput";
let ComposedCubeMapTexture36 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35.children = new MFNode();

field35.children[0] = ComposedCubeMapTexture36;

ComposedShader33.field[1] = field35;

let field37 = browser.currentScene.createNode("field");
field37.name = "bias";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader33.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "scale";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader33.field[3] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "power";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "2";
ComposedShader33.field[4] = field39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader33.parts[5] = ShaderPart40;

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.DEF = "common";
ShaderPart41.url = new MFString(new java.lang.String["../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader33.parts[6] = ShaderPart41;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

let ComposedShader42 = browser.currentScene.createNode("ComposedShader");
ComposedShader42.language = "GLSL";
let field43 = browser.currentScene.createNode("field");
field43.name = "chromaticDispertion";
field43.accessType = "initializeOnly";
field43.type = "SFVec3f";
field43.value = "0.98 1 1.033";
ComposedShader42.field = new MFNode();

ComposedShader42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "cube";
field44.type = "SFNode";
field44.accessType = "initializeOnly";
let ComposedCubeMapTexture45 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture45.USE = "texture";
field44.children = new MFNode();

field44.children[0] = ComposedCubeMapTexture45;

ComposedShader42.field[1] = field44;

let field46 = browser.currentScene.createNode("field");
field46.name = "bias";
field46.accessType = "initializeOnly";
field46.type = "SFFloat";
field46.value = "0.5";
ComposedShader42.field[2] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "scale";
field47.accessType = "initializeOnly";
field47.type = "SFFloat";
field47.value = "0.5";
ComposedShader42.field[3] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "power";
field48.accessType = "initializeOnly";
field48.type = "SFFloat";
field48.value = "2";
ComposedShader42.field[4] = field48;

let ShaderPart49 = browser.currentScene.createNode("ShaderPart");
ShaderPart49.url = new MFString(new java.lang.String["../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"]);
ShaderPart49.type = "VERTEX";
ComposedShader42.parts[5] = ShaderPart49;

let ShaderPart50 = browser.currentScene.createNode("ShaderPart");
ShaderPart50.url = new MFString(new java.lang.String["../shaders/x_itebubbles.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itebubbles.fs"]);
ShaderPart50.type = "FRAGMENT";
ComposedShader42.parts[6] = ShaderPart50;

Appearance24.shaders[1] = ComposedShader42;

Shape22.appearance = Appearance24;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

browser.currentScene.children[4] = Transform21;

