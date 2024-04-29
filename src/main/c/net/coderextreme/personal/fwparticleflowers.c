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
meta12.content = "A flower proto with configurable shaders";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/particleflowers.x3d";
head1.meta[11] = meta13;

head = head1;

WorldInfo WorldInfo15 = createNode("WorldInfo");
WorldInfo15.title = "particleflowers.x3d";
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
Background18.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
children[3] = Background18;

Transform Transform19 = createNode("Transform");
ParticleSystem ParticleSystem20 = createNode("ParticleSystem");
ParticleSystem20.maxParticles = 20;
ParticleSystem20.geometryType = "GEOMETRY";
BoundedPhysicsModel BoundedPhysicsModel21 = createNode("BoundedPhysicsModel");
Sphere Sphere22 = createNode("Sphere");
Sphere22.radius = 100;
BoundedPhysicsModel21.geometry = Sphere22;

ParticleSystem20.physics = new MFNode();

ParticleSystem20.physics[0] = BoundedPhysicsModel21;

ExplosionEmitter ExplosionEmitter23 = createNode("ExplosionEmitter");
ExplosionEmitter23.speed = 2;
ExplosionEmitter23.variation = 0.75;
ParticleSystem20.emitter = ExplosionEmitter23;

Sphere Sphere24 = createNode("Sphere");
ParticleSystem20.geometry = Sphere24;

Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material26.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance25.material = Material26;

ComposedCubeMapTexture ComposedCubeMapTexture27 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture27.DEF = "texture";
ImageTexture ImageTexture28 = createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

ImageTexture ImageTexture31 = createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

Appearance25.texture = ComposedCubeMapTexture27;

ComposedShader ComposedShader34 = createNode("ComposedShader");
ComposedShader34.DEF = "fw";
ComposedShader34.language = "GLSL";
field field35 = createNode("field");
field35.name = "chromaticDispertion";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "0.98 1 1.033";
ComposedShader34.field = new MFNode();

ComposedShader34.field[0] = field35;

field field36 = createNode("field");
field36.name = "cube";
field36.type = "SFNode";
field36.accessType = "inputOutput";
ComposedCubeMapTexture ComposedCubeMapTexture37 = createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture37.USE = "texture";
field36.children = new MFNode();

field36.children[0] = ComposedCubeMapTexture37;

ComposedShader34.field[1] = field36;

field field38 = createNode("field");
field38.name = "bias";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader34.field[2] = field38;

field field39 = createNode("field");
field39.name = "scale";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
field39.value = "0.5";
ComposedShader34.field[3] = field39;

field field40 = createNode("field");
field40.name = "power";
field40.accessType = "inputOutput";
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
ShaderPart47.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs"]);
ShaderPart47.type = "VERTEX";
ComposedShader34.parts[11] = ShaderPart47;

ShaderPart ShaderPart48 = createNode("ShaderPart");
ShaderPart48.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs"]);
ShaderPart48.type = "FRAGMENT";
ComposedShader34.parts[12] = ShaderPart48;

Appearance25.shaders = new MFNode();

Appearance25.shaders[0] = ComposedShader34;

ParticleSystem20.appearance = Appearance25;

Transform19.children = new MFNode();

Transform19.children[0] = ParticleSystem20;

Script Script49 = createNode("Script");
Script49.DEF = "Animate";
field field50 = createNode("field");
field50.name = "translation";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script49.field = new MFNode();

Script49.field[0] = field50;

field field51 = createNode("field");
field51.name = "velocity";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
Script49.field[1] = field51;

field field52 = createNode("field");
field52.name = "set_fraction";
field52.accessType = "inputOnly";
field52.type = "SFFloat";
Script49.field[2] = field52;

field field53 = createNode("field");
field53.name = "a";
field53.type = "SFFloat";
field53.accessType = "inputOutput";
field53.value = "0.5";
Script49.field[3] = field53;

field field54 = createNode("field");
field54.name = "b";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "0.5";
Script49.field[4] = field54;

field field55 = createNode("field");
field55.name = "c";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "3";
Script49.field[5] = field55;

field field56 = createNode("field");
field56.name = "d";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "3";
Script49.field[6] = field56;

field field57 = createNode("field");
field57.name = "tdelta";
field57.type = "SFFloat";
field57.accessType = "inputOutput";
field57.value = "0.5";
Script49.field[7] = field57;

field field58 = createNode("field");
field58.name = "pdelta";
field58.type = "SFFloat";
field58.accessType = "inputOutput";
field58.value = "0.5";
Script49.field[8] = field58;


Script49.setSourceCode(`ecmascript:\n"+
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
Transform19.children[1] = Script49;

TimeSensor TimeSensor59 = createNode("TimeSensor");
TimeSensor59.DEF = "TourTime";
TimeSensor59.cycleInterval = 5;
TimeSensor59.loop = True;
Transform19.children[2] = TimeSensor59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "TourTime";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Animate";
ROUTE60.toField = "set_fraction";
Transform19.children[3] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "a";
ROUTE61.toNode = "fw";
ROUTE61.toField = "a";
Transform19.children[4] = ROUTE61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "b";
ROUTE62.toNode = "fw";
ROUTE62.toField = "b";
Transform19.children[5] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "c";
ROUTE63.toNode = "fw";
ROUTE63.toField = "c";
Transform19.children[6] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "d";
ROUTE64.toNode = "fw";
ROUTE64.toField = "d";
Transform19.children[7] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "pdelta";
ROUTE65.toNode = "fw";
ROUTE65.toField = "pdelta";
Transform19.children[8] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "tdelta";
ROUTE66.toNode = "fw";
ROUTE66.toField = "tdelta";
Transform19.children[9] = ROUTE66;

children[4] = Transform19;

}
