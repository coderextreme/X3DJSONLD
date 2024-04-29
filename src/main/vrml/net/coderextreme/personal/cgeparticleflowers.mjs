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
meta12.content = "A flower proto with configurable shaders";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "identifier";
meta13.content = "https://coderextreme.net/X3DJSONLD/src/main/personal/particleflowers.x3d";
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
Background18.backUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
Background18.bottomUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
Background18.frontUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
Background18.leftUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
Background18.rightUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
Background18.topUrl = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
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

let Sphere24 = browser.currentScene.createNode("Sphere");
ParticleSystem20.geometry = Sphere24;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material26.specularColor = new SFColor(new float[0.5,0.5,0.5]);
Appearance25.material = Material26;

let ComposedCubeMapTexture27 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture27.DEF = "texture";
let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"]);
ComposedCubeMapTexture27.topTexture = ImageTexture33;

Appearance25.texture = ComposedCubeMapTexture27;

let ComposedShader34 = browser.currentScene.createNode("ComposedShader");
ComposedShader34.DEF = "shader";
ComposedShader34.language = "GLSL";
let field35 = browser.currentScene.createNode("field");
field35.name = "cube";
field35.type = "SFInt32";
field35.accessType = "inputOutput";
field35.value = "0";
ComposedShader34.field = new MFNode();

ComposedShader34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "chromaticDispertion";
field36.accessType = "initializeOnly";
field36.type = "SFVec3f";
field36.value = "0.98 1 1.033";
ComposedShader34.field[1] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "bias";
field37.type = "SFFloat";
field37.accessType = "inputOutput";
field37.value = "0.5";
ComposedShader34.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "scale";
field38.type = "SFFloat";
field38.accessType = "inputOutput";
field38.value = "0.5";
ComposedShader34.field[3] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "power";
field39.type = "SFFloat";
field39.accessType = "inputOutput";
field39.value = "2";
ComposedShader34.field[4] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "a";
field40.type = "SFFloat";
field40.accessType = "inputOutput";
field40.value = "2";
ComposedShader34.field[5] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "b";
field41.type = "SFFloat";
field41.accessType = "inputOutput";
field41.value = "1";
ComposedShader34.field[6] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "c";
field42.type = "SFFloat";
field42.accessType = "inputOutput";
field42.value = "5";
ComposedShader34.field[7] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "d";
field43.type = "SFFloat";
field43.accessType = "inputOutput";
field43.value = "5";
ComposedShader34.field[8] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "tdelta";
field44.type = "SFFloat";
field44.accessType = "inputOutput";
field44.value = "0";
ComposedShader34.field[9] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "pdelta";
field45.type = "SFFloat";
field45.accessType = "inputOutput";
field45.value = "0";
ComposedShader34.field[10] = field45;

//<field name='cube' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field>
let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.type = "VERTEX";
ShaderPart46.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs"]);
ComposedShader34.parts[11] = ShaderPart46;

let ShaderPart47 = browser.currentScene.createNode("ShaderPart");
ShaderPart47.type = "FRAGMENT";
ShaderPart47.url = new MFString(new java.lang.String["https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs"]);
ComposedShader34.parts[12] = ShaderPart47;

Appearance25.shaders = new MFNode();

Appearance25.shaders[0] = ComposedShader34;

ParticleSystem20.appearance = Appearance25;

Transform19.children = new MFNode();

Transform19.children[0] = ParticleSystem20;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "Animate";
let field49 = browser.currentScene.createNode("field");
field49.name = "translation";
field49.accessType = "inputOutput";
field49.type = "SFVec3f";
field49.value = "0 0 0";
Script48.field = new MFNode();

Script48.field[0] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "velocity";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
field50.value = "0 0 0";
Script48.field[1] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "set_fraction";
field51.accessType = "inputOnly";
field51.type = "SFFloat";
Script48.field[2] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "a";
field52.type = "SFFloat";
field52.accessType = "inputOutput";
field52.value = "0.5";
Script48.field[3] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "b";
field53.type = "SFFloat";
field53.accessType = "inputOutput";
field53.value = "0.5";
Script48.field[4] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "c";
field54.type = "SFFloat";
field54.accessType = "inputOutput";
field54.value = "3";
Script48.field[5] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "d";
field55.type = "SFFloat";
field55.accessType = "inputOutput";
field55.value = "3";
Script48.field[6] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "tdelta";
field56.type = "SFFloat";
field56.accessType = "inputOutput";
field56.value = "0.5";
Script48.field[7] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "pdelta";
field57.type = "SFFloat";
field57.accessType = "inputOutput";
field57.value = "0.5";
Script48.field[8] = field57;


Script48.setSourceCode(`ecmascript:\n"+
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
Transform19.children[1] = Script48;

let TimeSensor58 = browser.currentScene.createNode("TimeSensor");
TimeSensor58.DEF = "TourTime";
TimeSensor58.cycleInterval = 5;
TimeSensor58.loop = True;
Transform19.children[2] = TimeSensor58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "TourTime";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "Animate";
ROUTE59.toField = "set_fraction";
Transform19.children[3] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "a";
ROUTE60.toNode = "x_ite";
ROUTE60.toField = "a";
Transform19.children[4] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "b";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "b";
Transform19.children[5] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "c";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "c";
Transform19.children[6] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "d";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "d";
Transform19.children[7] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "pdelta";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "pdelta";
Transform19.children[8] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "tdelta";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "tdelta";
Transform19.children[9] = ROUTE65;

browser.currentScene.children[4] = Transform19;

