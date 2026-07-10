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
meta10.content = "particleflowers.x3d";
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
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "Vim";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "particleflowers.x3d";
children = new MFNode();

children[0] = WorldInfo16;

NavigationInfo NavigationInfo17 = createNode("NavigationInfo");
NavigationInfo17.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.description = "Tour Views";
Viewpoint18.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint18;

Background Background19 = createNode("Background");
Background19.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background19.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background19.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background19.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background19.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background19.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background19;

Group Group20 = createNode("Group");
ParticleSystem ParticleSystem21 = createNode("ParticleSystem");
ParticleSystem21.maxParticles = 20;
ParticleSystem21.geometryType = "GEOMETRY";
BoundedPhysicsModel BoundedPhysicsModel22 = createNode("BoundedPhysicsModel");
Sphere Sphere23 = createNode("Sphere");
Sphere23.radius = 100;
BoundedPhysicsModel22.geometry = Sphere23;

ParticleSystem21.physics = new MFNode();

ParticleSystem21.physics[0] = BoundedPhysicsModel22;

ExplosionEmitter ExplosionEmitter24 = createNode("ExplosionEmitter");
ExplosionEmitter24.speed = 2;
ExplosionEmitter24.variation = 0.75;
ParticleSystem21.emitter = ExplosionEmitter24;

Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material26.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance25.material = Material26;

ComposedCubeMapTexture ComposedCubeMapTexture27 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture27.DEF = "texture";
ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

Appearance25.texture = ComposedCubeMapTexture27;

ComposedShader ComposedShader34 = createNode("ComposedShader");
ComposedShader34.DEF = "x_ite";
ComposedShader34.language = "GLSL";
field field35 = createNode("field");
field35.name = "chromaticDispertion";
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
field35.value = "0.98 1 1.033";
ComposedShader34.field = new MFNode();

ComposedShader34.field[0] = field35;

field field36 = createNode("field");
field36.name = "cube";
field36.type = "SFNode";
field36.accessType = "initializeOnly";
ComposedCubeMapTexture ComposedCubeMapTexture37 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture37.USE = "texture";
field36.children = new MFNode();

field36.children[0] = ComposedCubeMapTexture37;

ComposedShader34.field[1] = field36;

field field38 = createNode("field");
field38.name = "bias";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader34.field[2] = field38;

field field39 = createNode("field");
field39.name = "scale";
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader34.field[3] = field39;

field field40 = createNode("field");
field40.name = "power";
field40.accessType = "initializeOnly";
field40.type = "SFFloat";
field40.value = "2";
ComposedShader34.field[4] = field40;

field field41 = createNode("field");
field41.name = "a";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "2";
ComposedShader34.field[5] = field41;

field field42 = createNode("field");
field42.name = "b";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "1";
ComposedShader34.field[6] = field42;

field field43 = createNode("field");
field43.name = "c";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "5";
ComposedShader34.field[7] = field43;

field field44 = createNode("field");
field44.name = "d";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "5";
ComposedShader34.field[8] = field44;

field field45 = createNode("field");
field45.name = "tdelta";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "0";
ComposedShader34.field[9] = field45;

field field46 = createNode("field");
field46.name = "pdelta";
field46.type = "SFFloat";
field46.accessType = "inputOutput";
field46.value = "0";
ComposedShader34.field[10] = field46;

ShaderPart ShaderPart47 = createNode("ShaderPart");
ShaderPart47.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"]);
ShaderPart47.type = "VERTEX";
ComposedShader34.parts[11] = ShaderPart47;

ShaderPart ShaderPart48 = createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"]);
ShaderPart48.type = "FRAGMENT";
ComposedShader34.parts[12] = ShaderPart48;

Appearance25.shaders = new MFNode();

Appearance25.shaders[0] = ComposedShader34;

ParticleSystem21.appearance = Appearance25;

Sphere Sphere49 = createNode("Sphere");
ParticleSystem21.geometry = Sphere49;

Group20.children = new MFNode();

Group20.children[0] = ParticleSystem21;

Script Script50 = createNode("Script");
Script50.DEF = "Animate";
field field51 = createNode("field");
field51.name = "translation";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
Script50.field = new MFNode();

Script50.field[0] = field51;

field field52 = createNode("field");
field52.name = "velocity";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
field52.value = "0 0 0";
Script50.field[1] = field52;

field field53 = createNode("field");
field53.name = "set_fraction";
field53.accessType = "inputOnly";
field53.type = "SFFloat";
Script50.field[2] = field53;

field field54 = createNode("field");
field54.name = "a";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "0.5";
Script50.field[3] = field54;

field field55 = createNode("field");
field55.name = "b";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "0.5";
Script50.field[4] = field55;

field field56 = createNode("field");
field56.name = "c";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "3";
Script50.field[5] = field56;

field field57 = createNode("field");
field57.name = "d";
field57.type = "SFFloat";
field57.accessType = "inputOutput";
field57.value = "3";
Script50.field[6] = field57;

field field58 = createNode("field");
field58.name = "tdelta";
field58.type = "SFFloat";
field58.accessType = "inputOutput";
field58.value = "0.5";
Script50.field[7] = field58;

field field59 = createNode("field");
field59.name = "pdelta";
field59.type = "SFFloat";
field59.accessType = "inputOutput";
field59.value = "0.5";
Script50.field[8] = field59;


Script50.setSourceCode(`ecmascript:\n"+
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
Group20.children[1] = Script50;

TimeSensor TimeSensor60 = createNode("TimeSensor");
TimeSensor60.DEF = "TourTime";
TimeSensor60.cycleInterval = 5;
TimeSensor60.loop = True;
Group20.children[2] = TimeSensor60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "TourTime";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "Animate";
ROUTE61.toField = "set_fraction";
Group20.children[3] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "a";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "a";
Group20.children[4] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "b";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "b";
Group20.children[5] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "c";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "c";
Group20.children[6] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "d";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "d";
Group20.children[7] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "pdelta";
ROUTE66.toNode = "x_ite";
ROUTE66.toField = "pdelta";
Group20.children[8] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "tdelta";
ROUTE67.toNode = "x_ite";
ROUTE67.toField = "tdelta";
Group20.children[9] = ROUTE67;

children[4] = Group20;

}
