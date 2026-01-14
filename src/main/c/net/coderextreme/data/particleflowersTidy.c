#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
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
component5.name = "Grouping";
component5.level = 3;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "ParticleSystems";
component6.level = 3;
head1.component[4] = component6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "particleflowers.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "description";
meta9.content = "A flower particle system";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "generator";
meta11.content = "Vim";
head1.meta[9] = meta11;

head = head1;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.title = "particleflowers.x3d";
children = new MFNode();

children[0] = WorldInfo13;

NavigationInfo NavigationInfo14 = createNode("NavigationInfo");
NavigationInfo14.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo14;

Viewpoint Viewpoint15 = createNode("Viewpoint");
Viewpoint15.description = "Tour Views";
Viewpoint15.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint15;

Background Background16 = createNode("Background");
Background16.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background16.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background16.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background16.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background16.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background16.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background16;

Group Group17 = createNode("Group");
ParticleSystem ParticleSystem18 = createNode("ParticleSystem");
ParticleSystem18.geometryType = "GEOMETRY";
ParticleSystem18.maxParticles = 20;
ExplosionEmitter ExplosionEmitter19 = createNode("ExplosionEmitter");
ExplosionEmitter19.speed = 2;
ExplosionEmitter19.variation = 0.75;
ParticleSystem18.emitter = ExplosionEmitter19;

BoundedPhysicsModel BoundedPhysicsModel20 = createNode("BoundedPhysicsModel");
Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 100;
BoundedPhysicsModel20.geometry = Sphere21;

ParticleSystem18.physics = new MFNode();

ParticleSystem18.physics[0] = BoundedPhysicsModel20;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material23.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance22.material = Material23;

ComposedCubeMapTexture ComposedCubeMapTexture24 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture24.topTexture = ImageTexture30;

Appearance22.texture = ComposedCubeMapTexture24;

ComposedShader ComposedShader31 = createNode("ComposedShader");
ComposedShader31.DEF = "x_ite";
ComposedShader31.language = "GLSL";
ShaderPart ShaderPart32 = createNode("ShaderPart");
ShaderPart32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"]);
ComposedShader31.parts = new MFNode();

ComposedShader31.parts[0] = ShaderPart32;

ShaderPart ShaderPart33 = createNode("ShaderPart");
ShaderPart33.type = "FRAGMENT";
ShaderPart33.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"]);
ComposedShader31.parts[1] = ShaderPart33;

field field34 = createNode("field");
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.name = "chromaticDispertion";
field34.value = "0.98 1 1.033";
ComposedShader31.field[2] = field34;

field field35 = createNode("field");
field35.accessType = "initializeOnly";
field35.type = "SFNode";
field35.name = "cube";
ComposedCubeMapTexture ComposedCubeMapTexture36 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35.children = new MFNode();

field35.children[0] = ComposedCubeMapTexture36;

ComposedShader31.field[3] = field35;

field field37 = createNode("field");
field37.accessType = "initializeOnly";
field37.type = "SFFloat";
field37.name = "bias";
field37.value = "0.5";
ComposedShader31.field[4] = field37;

field field38 = createNode("field");
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.name = "scale";
field38.value = "0.5";
ComposedShader31.field[5] = field38;

field field39 = createNode("field");
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.name = "power";
field39.value = "2";
ComposedShader31.field[6] = field39;

field field40 = createNode("field");
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.name = "a";
field40.value = "2";
ComposedShader31.field[7] = field40;

field field41 = createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.name = "b";
field41.value = "1";
ComposedShader31.field[8] = field41;

field field42 = createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.name = "c";
field42.value = "5";
ComposedShader31.field[9] = field42;

field field43 = createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.name = "d";
field43.value = "5";
ComposedShader31.field[10] = field43;

field field44 = createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.name = "tdelta";
ComposedShader31.field[11] = field44;

field field45 = createNode("field");
field45.accessType = "inputOutput";
field45.type = "SFFloat";
field45.name = "pdelta";
ComposedShader31.field[12] = field45;

Appearance22.shaders = new MFNode();

Appearance22.shaders[0] = ComposedShader31;

ParticleSystem18.appearance = Appearance22;

Sphere Sphere46 = createNode("Sphere");
ParticleSystem18.geometry = Sphere46;

Group17.children = new MFNode();

Group17.children[0] = ParticleSystem18;

Script Script47 = createNode("Script");
Script47.DEF = "Animate";
field field48 = createNode("field");
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.name = "translation";
Script47.field = new MFNode();

Script47.field[0] = field48;

field field49 = createNode("field");
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.name = "velocity";
Script47.field[1] = field49;

field field50 = createNode("field");
field50.accessType = "inputOnly";
field50.type = "SFFloat";
field50.name = "set_fraction";
Script47.field[2] = field50;

field field51 = createNode("field");
field51.accessType = "inputOutput";
field51.type = "SFFloat";
field51.name = "a";
field51.value = "0.5";
Script47.field[3] = field51;

field field52 = createNode("field");
field52.accessType = "inputOutput";
field52.type = "SFFloat";
field52.name = "b";
field52.value = "0.5";
Script47.field[4] = field52;

field field53 = createNode("field");
field53.accessType = "inputOutput";
field53.type = "SFFloat";
field53.name = "c";
field53.value = "3";
Script47.field[5] = field53;

field field54 = createNode("field");
field54.accessType = "inputOutput";
field54.type = "SFFloat";
field54.name = "d";
field54.value = "3";
Script47.field[6] = field54;

field field55 = createNode("field");
field55.accessType = "inputOutput";
field55.type = "SFFloat";
field55.name = "tdelta";
field55.value = "0.5";
Script47.field[7] = field55;

field field56 = createNode("field");
field56.accessType = "inputOutput";
field56.type = "SFFloat";
field56.name = "pdelta";
field56.value = "0.5";
Script47.field[8] = field56;


Script47.setSourceCode(`ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta = tdelta + 0.05;\n"+
"				pdelta = pdelta + 0.05;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}`)
Group17.children[1] = Script47;

TimeSensor TimeSensor57 = createNode("TimeSensor");
TimeSensor57.DEF = "TourTime";
TimeSensor57.cycleInterval = 5;
TimeSensor57.loop = True;
Group17.children[2] = TimeSensor57;

children[4] = Group17;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "TourTime";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Animate";
ROUTE58.toField = "set_fraction";
children[5] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "Animate";
ROUTE59.fromField = "a_changed";
ROUTE59.toNode = "x_ite";
ROUTE59.toField = "set_a";
children[6] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "b_changed";
ROUTE60.toNode = "x_ite";
ROUTE60.toField = "set_b";
children[7] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "c_changed";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "set_c";
children[8] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "d_changed";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "set_d";
children[9] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "pdelta_changed";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "set_pdelta";
children[10] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "tdelta_changed";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "set_tdelta";
children[11] = ROUTE64;

}
