let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
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

let component9 = browser.currentScene.createNode("component");
component9.name = "ParticleSystems";
component9.level = 3;
head1.component[7] = component9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "title";
meta10.content = "variationalflowers.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "A flower proto with configurable shaders";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/variationalflowers.x3d";
head1.meta[11] = meta13;

head = head1;

let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "variationalflowers.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
browser.currentScene.children[1] = NavigationInfo16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.description = "Tour Views";
Viewpoint17.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[2] = Viewpoint17;

let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let ParticleSystem20 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem20.maxParticles = 100;
ParticleSystem20.geometryType = "GEOMETRY";
//values - array of MFFloats to pass to ComposedShader variations in values - array of MFFloats to pass to ComposedShader that varies values lastFrame - last frame that was rendered (0 for default) updateRate - update rate is amount of time between frames
//<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'> </VariationPhysicsModel>
let ExplosionEmitter21 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter21.speed = 1;
ExplosionEmitter21.variation = 0.75;
ParticleSystem20.emitter = ExplosionEmitter21;

let Sphere22 = browser.currentScene.createNode("Sphere");
ParticleSystem20.geometry = Sphere22;

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

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
let ComposedShader32 = browser.currentScene.createNode("ComposedShader");
ComposedShader32.DEF = "x_ite";
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

let field39 = browser.currentScene.createNode("field");
field39.name = "x3d_ParticleValues";
field39.type = "MFFloat";
field39.accessType = "inputOutput";
field39.value = "2 1 4 4 0 0";
ComposedShader32.field[5] = field39;

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x_ite_variations.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader32.parts[6] = ShaderPart40;

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/commonnew.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader32.parts[7] = ShaderPart41;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

ParticleSystem20.appearance = Appearance23;

Transform19.children = new MFNode();

Transform19.children[0] = ParticleSystem20;

let Script42 = browser.currentScene.createNode("Script");
Script42.DEF = "Animate";
let field43 = browser.currentScene.createNode("field");
field43.name = "set_fraction";
field43.accessType = "inputOnly";
field43.type = "SFFloat";
Script42.field = new MFNode();

Script42.field[0] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "values";
field44.type = "MFFloat";
field44.accessType = "inputOutput";
field44.value = "2 2 5 5 0 0";
Script42.field[1] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "variations";
field45.type = "MFFloat";
field45.accessType = "inputOutput";
field45.value = "0.2 0.1 0.3 0.3 0.01 0.01";
Script42.field[2] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "lastframe";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "0";
Script42.field[3] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "updaterate";
field47.type = "SFFloat";
field47.accessType = "inputOutput";
field47.value = "0.1";
Script42.field[4] = field47;


Script42.setSourceCode(`ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}`)
Transform19.children[1] = Script42;

let TimeSensor48 = browser.currentScene.createNode("TimeSensor");
TimeSensor48.DEF = "TourTime";
TimeSensor48.cycleInterval = 45;
TimeSensor48.loop = True;
Transform19.children[2] = TimeSensor48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "TourTime";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "Animate";
ROUTE49.toField = "set_fraction";
Transform19.children[3] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "Animate";
ROUTE50.fromField = "values";
ROUTE50.toNode = "x_ite";
ROUTE50.toField = "x3d_ParticleValues";
Transform19.children[4] = ROUTE50;

browser.currentScene.children[4] = Transform19;

