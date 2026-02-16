#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.1";
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
meta12.content = "A flower particle system";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d";
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
Background18.backUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
ParticleSystem ParticleSystem20 = createNode("ParticleSystem");
ParticleSystem20.maxParticles = 20;
ParticleSystem20.geometryType = "GEOMETRY";
//* values - array of MFFloats to pass to ComposedShader
//* variations in values - array of MFFloats to pass to ComposedShader that varies values
VariationPhysicsModel VariationPhysicsModel21 = createNode("VariationPhysicsModel");
VariationPhysicsModel21.values = "2 2 5 5 0 0";
VariationPhysicsModel21.variations = "0.2 0.1 0.3 0.3 0.01 0.01";
ParticleSystem20.variationPhysicsModel = new undefined();

ParticleSystem20.variationPhysicsModel[0] = VariationPhysicsModel21;

ExplosionEmitter ExplosionEmitter22 = createNode("ExplosionEmitter");
ExplosionEmitter22.speed = 1;
ExplosionEmitter22.variation = 0.75;
ParticleSystem20.emitter = ExplosionEmitter22;

Sphere Sphere23 = createNode("Sphere");
ParticleSystem20.geometry = Sphere23;

Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

ComposedCubeMapTexture ComposedCubeMapTexture26 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

ComposedShader ComposedShader33 = createNode("ComposedShader");
ComposedShader33.DEF = "x_ite";
ComposedShader33.language = "GLSL";
field field34 = createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader33.field = new MFNode();

ComposedShader33.field[0] = field34;

field field35 = createNode("field");
field35.name = "cube";
field35.type = "SFNode";
field35.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture36 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35.children = new MFNode();

field35.children[0] = ComposedCubeMapTexture36;

ComposedShader33.field[1] = field35;

field field37 = createNode("field");
field37.name = "bias";
field37.accessType = "initializeOnly";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader33.field[2] = field37;

field field38 = createNode("field");
field38.name = "scale";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader33.field[3] = field38;

field field39 = createNode("field");
field39.name = "power";
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.value = "2";
ComposedShader33.field[4] = field39;

field field40 = createNode("field");
field40.name = "x3d_ParticleValues";
field40.type = "MFFloat";
field40.accessType = "inputOutput";
field40.value = "2 1 4 4 0 0";
ComposedShader33.field[5] = field40;

ShaderPart ShaderPart41 = createNode("ShaderPart");
ShaderPart41.url = new MFString(new java.lang.String["../shaders/x_ite_variations.vs"]);
ShaderPart41.type = "VERTEX";
ComposedShader33.parts[6] = ShaderPart41;

ShaderPart ShaderPart42 = createNode("ShaderPart");
ShaderPart42.url = new MFString(new java.lang.String["../shaders/commonnew.fs"]);
ShaderPart42.type = "FRAGMENT";
ComposedShader33.parts[7] = ShaderPart42;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

ParticleSystem20.appearance = Appearance24;

Transform19.children = new MFNode();

Transform19.children[0] = ParticleSystem20;

Script Script43 = createNode("Script");
Script43.DEF = "Animate";
field field44 = createNode("field");
field44.name = "set_fraction";
field44.accessType = "inputOnly";
field44.type = "SFFloat";
Script43.field = new MFNode();

Script43.field[0] = field44;

field field45 = createNode("field");
field45.name = "values";
field45.type = "MFFloat";
field45.accessType = "inputOutput";
field45.value = "2 2 5 5 0 0";
Script43.field[1] = field45;

field field46 = createNode("field");
field46.name = "variations";
field46.type = "MFFloat";
field46.accessType = "inputOutput";
field46.value = "0.2 0.1 0.3 0.3 0.01 0.01";
Script43.field[2] = field46;

field field47 = createNode("field");
field47.name = "lastframe";
field47.type = "SFFloat";
field47.accessType = "inputOutput";
field47.value = "0";
Script43.field[3] = field47;

field field48 = createNode("field");
field48.name = "updaterate";
field48.type = "SFFloat";
field48.accessType = "inputOutput";
field48.value = "0.1";
Script43.field[4] = field48;


Script43.setSourceCode(`ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}`)
Transform19.children[1] = Script43;

TimeSensor TimeSensor49 = createNode("TimeSensor");
TimeSensor49.DEF = "TourTime";
TimeSensor49.cycleInterval = 45;
TimeSensor49.loop = True;
Transform19.children[2] = TimeSensor49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "TourTime";
ROUTE50.fromField = "fraction_changed";
ROUTE50.toNode = "Animate";
ROUTE50.toField = "set_fraction";
Transform19.children[3] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "Animate";
ROUTE51.fromField = "values";
ROUTE51.toNode = "x_ite";
ROUTE51.toField = "x3d_ParticleValues";
Transform19.children[4] = ROUTE51;

children[4] = Transform19;

}
