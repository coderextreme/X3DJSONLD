#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "EnvironmentalEffects";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "CubeMapTexturing";
component4.level = 1;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Texturing";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Rendering";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Grouping";
component7.level = 3;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Core";
component8.level = 1;
head1.component[6] = component8;

component component9 = createNode("component");
component9.name = "ParticleSystems";
component9.level = 3;
head1.component[7] = component9;

meta meta10 = createNode("meta");
meta10.name = "title";
meta10.content = "variationalflowers.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "description";
meta12.content = "A flower proto with configurable shaders";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/variationalflowers.x3d";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "variationalflowers.x3d";
children = new MFNode();

children[0] = WorldInfo15;

NavigationInfo NavigationInfo16 = createNode("NavigationInfo");
NavigationInfo16.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "Tour Views";
Viewpoint17.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint17;

Background Background18 = createNode("Background");
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
ParticleSystem ParticleSystem20 = createNode("ParticleSystem");
ParticleSystem20.maxParticles = 100;
ParticleSystem20.geometryType = "GEOMETRY";
//values - array of MFFloats to pass to ComposedShader variations in values - array of MFFloats to pass to ComposedShader that varies values lastFrame - last frame that was rendered (0 for default) updateRate - update rate is amount of time between frames
//<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'> </VariationPhysicsModel>
ExplosionEmitter ExplosionEmitter21 = createNode("ExplosionEmitter");
ExplosionEmitter21.speed = 1;
ExplosionEmitter21.variation = 0.75;
ParticleSystem20.emitter = ExplosionEmitter21;

Sphere Sphere22 = createNode("Sphere");
ParticleSystem20.geometry = Sphere22;

Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material24.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance23.material = Material24;

ComposedCubeMapTexture ComposedCubeMapTexture25 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture25.topTexture = ImageTexture31;

Appearance23.texture = ComposedCubeMapTexture25;

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
ComposedShader ComposedShader32 = createNode("ComposedShader");
ComposedShader32.DEF = "x_ite";
ComposedShader32.language = "GLSL";
field field33 = createNode("field");
field33.name = "chromaticDispertion";
field33.accessType = "initializeOnly";
field33.type = "SFVec3f";
field33.value = "0.98 1 1.033";
ComposedShader32.field = new MFNode();

ComposedShader32.field[0] = field33;

field field34 = createNode("field");
field34.name = "cube";
field34.type = "SFNode";
field34.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture35 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader32.field[1] = field34;

field field36 = createNode("field");
field36.name = "bias";
field36.accessType = "initializeOnly";
field36.type = "SFFloat";
field36.value = "0.5";
ComposedShader32.field[2] = field36;

field field37 = createNode("field");
field37.name = "scale";
field37.accessType = "initializeOnly";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader32.field[3] = field37;

field field38 = createNode("field");
field38.name = "power";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "2";
ComposedShader32.field[4] = field38;

field field39 = createNode("field");
field39.name = "x3d_ParticleValues";
field39.type = "MFFloat";
field39.accessType = "inputOutput";
field39.value = "2 1 4 4 0 0";
ComposedShader32.field[5] = field39;

ShaderPart ShaderPart40 = createNode("ShaderPart");
ShaderPart40.url = new MFString(new java.lang.String["../shaders/x_ite_variations.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs"]);
ShaderPart40.type = "VERTEX";
ComposedShader32.parts[6] = ShaderPart40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/commonnew.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"]);
ShaderPart41.type = "FRAGMENT";
ComposedShader32.parts[7] = ShaderPart41;

Appearance23.shaders = new MFNode();

Appearance23.shaders[0] = ComposedShader32;

ParticleSystem20.appearance = Appearance23;

Transform19.children = new MFNode();

Transform19.children[0] = ParticleSystem20;

Script Script42 = createNode("Script");
Script42.DEF = "Animate";
field field43 = createNode("field");
field43.name = "set_fraction";
field43.accessType = "inputOnly";
field43.type = "SFFloat";
Script42.field = new MFNode();

Script42.field[0] = field43;

field field44 = createNode("field");
field44.name = "values";
field44.type = "MFFloat";
field44.accessType = "inputOutput";
field44.value = "2 2 5 5 0 0";
Script42.field[1] = field44;

field field45 = createNode("field");
field45.name = "variations";
field45.type = "MFFloat";
field45.accessType = "inputOutput";
field45.value = "0.2 0.1 0.3 0.3 0.01 0.01";
Script42.field[2] = field45;

field field46 = createNode("field");
field46.name = "lastframe";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "0";
Script42.field[3] = field46;

field field47 = createNode("field");
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

TimeSensor TimeSensor48 = createNode("TimeSensor");
TimeSensor48.DEF = "TourTime";
TimeSensor48.cycleInterval = 45;
TimeSensor48.loop = True;
Transform19.children[2] = TimeSensor48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "TourTime";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "Animate";
ROUTE49.toField = "set_fraction";
Transform19.children[3] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "Animate";
ROUTE50.fromField = "values";
ROUTE50.toNode = "x_ite";
ROUTE50.toField = "x3d_ParticleValues";
Transform19.children[4] = ROUTE50;

children[4] = Transform19;

}
