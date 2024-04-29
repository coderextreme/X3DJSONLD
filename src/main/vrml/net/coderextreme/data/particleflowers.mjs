let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
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
meta10.content = "particleflowers.x3d";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "John Carlson";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "description";
meta12.content = "A flower particle system";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d";
head1.meta[11] = meta13;

head = head1;

let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "particleflowers.x3d";
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
Background18.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[3] = Background18;

let Group19 = browser.currentScene.createNode("Group");
let ParticleSystem20 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem20.maxParticles = 20;
ParticleSystem20.geometryType = "GEOMETRY";
let BoundedPhysicsModel21 = browser.currentScene.createNode("BoundedPhysicsModel");
let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 100;
BoundedPhysicsModel21.geometry = Sphere22;

ParticleSystem20.physics = new MFNode();

ParticleSystem20.physics[0] = BoundedPhysicsModel21;

let ExplosionEmitter23 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter23.speed = 2;
ExplosionEmitter23.variation = 0.75;
ParticleSystem20.emitter = ExplosionEmitter23;

let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material25.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance24.material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png","../resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png","../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png","../resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png","../resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png","../resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png","../resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture26.topTexture = ImageTexture32;

Appearance24.texture = ComposedCubeMapTexture26;

let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.DEF = "x_ite";
ComposedShader33.language = "GLSL";
let field34 = browser.currentScene.createNode("field");
field34.name = "chromaticDispertion";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
field34.value = "0.98 1 1.033";
ComposedShader33.field = new MFNode();

ComposedShader33.field[0] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "cube";
field35.type = "SFNode";
field35.accessType = "initializeOnly";
let ComposedCubeMapTexture36 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35.children = new MFNode();

field35.children[0] = ComposedCubeMapTexture36;

ComposedShader33.field[1] = field35;

let field37 = browser.currentScene.createNode("field");
field37.name = "bias";
field37.accessType = "initializeOnly";
field37.type = "SFFloat";
field37.value = "0.5";
ComposedShader33.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "scale";
field38.accessType = "initializeOnly";
field38.type = "SFFloat";
field38.value = "0.5";
ComposedShader33.field[3] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "power";
field39.accessType = "initializeOnly";
field39.type = "SFFloat";
field39.value = "2";
ComposedShader33.field[4] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "a";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "2";
ComposedShader33.field[5] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "b";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "1";
ComposedShader33.field[6] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "c";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "5";
ComposedShader33.field[7] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "d";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "5";
ComposedShader33.field[8] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "tdelta";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "0";
ComposedShader33.field[9] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "pdelta";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "0";
ComposedShader33.field[10] = field45;

let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs","../shaders/x_ite_flower_particles.vs"]);
ShaderPart46.type = "VERTEX";
ComposedShader33.parts[11] = ShaderPart46;

let ShaderPart47 = browser.currentScene.createNode("ShaderPart");
ShaderPart47.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs","../shaders/commonnew.fs"]);
ShaderPart47.type = "FRAGMENT";
ComposedShader33.parts[12] = ShaderPart47;

Appearance24.shaders = new MFNode();

Appearance24.shaders[0] = ComposedShader33;

ParticleSystem20.appearance = Appearance24;

let Sphere48 = browser.currentScene.createNode("Sphere");
ParticleSystem20.geometry = Sphere48;

Group19.children = new MFNode();

Group19.children[0] = ParticleSystem20;

let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "Animate";
let field50 = browser.currentScene.createNode("field");
field50.name = "translation";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script49.field = new MFNode();

Script49.field[0] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "velocity";
field51.accessType = "inputOutput";
field51.type = "SFVec3f";
field51.value = "0 0 0";
Script49.field[1] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "set_fraction";
field52.accessType = "inputOnly";
field52.type = "SFFloat";
Script49.field[2] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "a";
field53.type = "SFFloat";
field53.accessType = "inputOutput";
field53.value = "0.5";
Script49.field[3] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "b";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "0.5";
Script49.field[4] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "c";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "3";
Script49.field[5] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "d";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "3";
Script49.field[6] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "tdelta";
field57.type = "SFFloat";
field57.accessType = "inputOutput";
field57.value = "0.5";
Script49.field[7] = field57;

let field58 = browser.currentScene.createNode("field");
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
Group19.children[1] = Script49;

let TimeSensor59 = browser.currentScene.createNode("TimeSensor");
TimeSensor59.DEF = "TourTime";
TimeSensor59.cycleInterval = 5;
TimeSensor59.loop = True;
Group19.children[2] = TimeSensor59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "TourTime";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Animate";
ROUTE60.toField = "set_fraction";
Group19.children[3] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "a";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "a";
Group19.children[4] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "b";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "b";
Group19.children[5] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "c";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "c";
Group19.children[6] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "d";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "d";
Group19.children[7] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "pdelta";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "pdelta";
Group19.children[8] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "tdelta";
ROUTE66.toNode = "x_ite";
ROUTE66.toField = "tdelta";
Group19.children[9] = ROUTE66;

browser.currentScene.children[4] = Group19;

