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
meta9.content = "A flower proto with configurable shaders";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "identifier";
meta10.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d";
head1.meta[8] = meta10;

head = head1;

WorldInfo WorldInfo12 = createNode("WorldInfo");
WorldInfo12.title = "particleflowers.x3d";
children = new MFNode();

children[0] = WorldInfo12;

NavigationInfo NavigationInfo13 = createNode("NavigationInfo");
NavigationInfo13.type = new MFString(new java.lang.String["ANY","EXAMINE","FLY","LOOKAT"]);
children[1] = NavigationInfo13;

Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.description = "Tour Views";
Viewpoint14.position = new SFVec3f(new float[0,0,12]);
children[2] = Viewpoint14;

Background Background15 = createNode("Background");
Background15.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background15.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background15.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background15.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background15.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
Background15.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
children[3] = Background15;

Transform Transform16 = createNode("Transform");
ParticleSystem ParticleSystem17 = createNode("ParticleSystem");
ParticleSystem17.geometryType = "GEOMETRY";
ParticleSystem17.maxParticles = 20;
ExplosionEmitter ExplosionEmitter18 = createNode("ExplosionEmitter");
ExplosionEmitter18.speed = 2;
ExplosionEmitter18.variation = 0.75;
ParticleSystem17.emitter = ExplosionEmitter18;

BoundedPhysicsModel BoundedPhysicsModel19 = createNode("BoundedPhysicsModel");
Sphere Sphere20 = createNode("Sphere");
Sphere20.radius = 100;
BoundedPhysicsModel19.geometry = Sphere20;

ParticleSystem17.physics = new MFNode();

ParticleSystem17.physics[0] = BoundedPhysicsModel19;

Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material22.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance21.material = Material22;

ComposedCubeMapTexture ComposedCubeMapTexture23 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
ImageTexture ImageTexture24 = createNode("ImageTexture");
ImageTexture24.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture24;

ImageTexture ImageTexture25 = createNode("ImageTexture");
ImageTexture25.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture25;

ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture26;

ImageTexture ImageTexture27 = createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture27;

ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture23.topTexture = ImageTexture29;

Appearance21.texture = ComposedCubeMapTexture23;

ComposedShader ComposedShader30 = createNode("ComposedShader");
ComposedShader30.DEF = "fw";
ComposedShader30.language = "GLSL";
ShaderPart ShaderPart31 = createNode("ShaderPart");
ShaderPart31.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"]);
ComposedShader30.parts = new MFNode();

ComposedShader30.parts[0] = ShaderPart31;

ShaderPart ShaderPart32 = createNode("ShaderPart");
ShaderPart32.type = "FRAGMENT";
ShaderPart32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]);
ComposedShader30.parts[1] = ShaderPart32;

field field33 = createNode("field");
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.name = "chromaticDispertion";
field33.value = "0.98 1 1.033";
ComposedShader30.field[2] = field33;

field field34 = createNode("field");
field34.accessType = "inputOutput";
field34.type = "SFNode";
field34.name = "cube";
ComposedCubeMapTexture ComposedCubeMapTexture35 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34.children = new MFNode();

field34.children[0] = ComposedCubeMapTexture35;

ComposedShader30.field[3] = field34;

field field36 = createNode("field");
field36.accessType = "inputOutput";
field36.type = "SFFloat";
field36.name = "bias";
field36.value = "0.5";
ComposedShader30.field[4] = field36;

field field37 = createNode("field");
field37.accessType = "inputOutput";
field37.type = "SFFloat";
field37.name = "scale";
field37.value = "0.5";
ComposedShader30.field[5] = field37;

field field38 = createNode("field");
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.name = "power";
field38.value = "2";
ComposedShader30.field[6] = field38;

field field39 = createNode("field");
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.name = "a";
field39.value = "2";
ComposedShader30.field[7] = field39;

field field40 = createNode("field");
field40.accessType = "inputOutput";
field40.type = "SFFloat";
field40.name = "b";
field40.value = "1";
ComposedShader30.field[8] = field40;

field field41 = createNode("field");
field41.accessType = "inputOutput";
field41.type = "SFFloat";
field41.name = "c";
field41.value = "5";
ComposedShader30.field[9] = field41;

field field42 = createNode("field");
field42.accessType = "inputOutput";
field42.type = "SFFloat";
field42.name = "d";
field42.value = "5";
ComposedShader30.field[10] = field42;

field field43 = createNode("field");
field43.accessType = "inputOutput";
field43.type = "SFFloat";
field43.name = "tdelta";
ComposedShader30.field[11] = field43;

field field44 = createNode("field");
field44.accessType = "inputOutput";
field44.type = "SFFloat";
field44.name = "pdelta";
ComposedShader30.field[12] = field44;

Appearance21.shaders = new MFNode();

Appearance21.shaders[0] = ComposedShader30;

ParticleSystem17.appearance = Appearance21;

Sphere Sphere45 = createNode("Sphere");
ParticleSystem17.geometry = Sphere45;

Transform16.children = new MFNode();

Transform16.children[0] = ParticleSystem17;

Script Script46 = createNode("Script");
Script46.DEF = "Animate";
field field47 = createNode("field");
field47.accessType = "inputOutput";
field47.type = "SFVec3f";
field47.name = "translation";
Script46.field = new MFNode();

Script46.field[0] = field47;

field field48 = createNode("field");
field48.accessType = "inputOutput";
field48.type = "SFVec3f";
field48.name = "velocity";
Script46.field[1] = field48;

field field49 = createNode("field");
field49.accessType = "inputOnly";
field49.type = "SFFloat";
field49.name = "set_fraction";
Script46.field[2] = field49;

field field50 = createNode("field");
field50.accessType = "inputOutput";
field50.type = "SFFloat";
field50.name = "a";
field50.value = "0.5";
Script46.field[3] = field50;

field field51 = createNode("field");
field51.accessType = "inputOutput";
field51.type = "SFFloat";
field51.name = "b";
field51.value = "0.5";
Script46.field[4] = field51;

field field52 = createNode("field");
field52.accessType = "inputOutput";
field52.type = "SFFloat";
field52.name = "c";
field52.value = "3";
Script46.field[5] = field52;

field field53 = createNode("field");
field53.accessType = "inputOutput";
field53.type = "SFFloat";
field53.name = "d";
field53.value = "3";
Script46.field[6] = field53;

field field54 = createNode("field");
field54.accessType = "inputOutput";
field54.type = "SFFloat";
field54.name = "tdelta";
field54.value = "0.5";
Script46.field[7] = field54;

field field55 = createNode("field");
field55.accessType = "inputOutput";
field55.type = "SFFloat";
field55.name = "pdelta";
field55.value = "0.5";
Script46.field[8] = field55;


Script46.setSourceCode(`ecmascript:\n"+
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
Transform16.children[1] = Script46;

children[4] = Transform16;

TimeSensor TimeSensor56 = createNode("TimeSensor");
TimeSensor56.DEF = "TourTime";
TimeSensor56.cycleInterval = 5;
TimeSensor56.loop = True;
children[5] = TimeSensor56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromNode = "TourTime";
ROUTE57.fromField = "fraction_changed";
ROUTE57.toNode = "Animate";
ROUTE57.toField = "set_fraction";
children[6] = ROUTE57;

ROUTE ROUTE58 = createNode("ROUTE");
ROUTE58.fromNode = "Animate";
ROUTE58.fromField = "a_changed";
ROUTE58.toNode = "fw";
ROUTE58.toField = "set_a";
children[7] = ROUTE58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromNode = "Animate";
ROUTE59.fromField = "b_changed";
ROUTE59.toNode = "fw";
ROUTE59.toField = "set_b";
children[8] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "c_changed";
ROUTE60.toNode = "fw";
ROUTE60.toField = "set_c";
children[9] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "d_changed";
ROUTE61.toNode = "fw";
ROUTE61.toField = "set_d";
children[10] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "pdelta_changed";
ROUTE62.toNode = "fw";
ROUTE62.toField = "set_pdelta";
children[11] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "tdelta_changed";
ROUTE63.toNode = "fw";
ROUTE63.toField = "set_tdelta";
children[12] = ROUTE63;

}
