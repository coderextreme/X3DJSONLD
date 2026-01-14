const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("ParticleSystems", 3));
scene.addMetaData("title", "particleflowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "A flower particle system");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d");
scene.addMetaData("generator", "Vim");
await browser .loadComponents (scene);
let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "particleflowers.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo13;

let NavigationInfo14 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo14.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo14;

let Viewpoint15 = browser.currentScene.createNode("Viewpoint");
Viewpoint15.description = "Tour Views";
Viewpoint15.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[2] = Viewpoint15;

let Background16 = browser.currentScene.createNode("Background");
Background16.frontUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background16.backUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background16.leftUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background16.rightUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background16.topUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
Background16.bottomUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
browser.currentScene.children[3] = Background16;

let Group17 = browser.currentScene.createNode("Group");
let ParticleSystem18 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem18.geometryType = "GEOMETRY";
ParticleSystem18.maxParticles = 20;
let ExplosionEmitter19 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter19.speed = 2;
ExplosionEmitter19.variation = 0.75;
emitter = ExplosionEmitter19;

let BoundedPhysicsModel20 = browser.currentScene.createNode("BoundedPhysicsModel");
let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 100;
geometry = Sphere21;

ParticleSystem18YYY.physics = new X3D.MFNode();

ParticleSystem18ZZZ.physics[0] = BoundedPhysicsModel20;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material23.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material23;

let ComposedCubeMapTexture24 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture30;

texture = ComposedCubeMapTexture24;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.DEF = "x_ite";
ComposedShader31.language = "GLSL";
let ShaderPart32 = browser.currentScene.createNode("ShaderPart");
ShaderPart32.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), new X3D.SFString("../shaders/x_ite_flower_particles.vs")]);
ComposedShader31YYY.parts = new X3D.MFNode();

ComposedShader31ZZZ.parts[0] = ShaderPart32;

let ShaderPart33 = browser.currentScene.createNode("ShaderPart");
ShaderPart33.type = "FRAGMENT";
ShaderPart33.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), new X3D.SFString("../shaders/commonnew.fs")]);
ComposedShader31ZZZ.parts[1] = ShaderPart33;

ComposedShader34.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader35.getField("cube")let ComposedCubeMapTexture36 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35YYY.children = new X3D.MFNode();

field35ZZZ.children[0] = ComposedCubeMapTexture36;

ComposedShader37.getField("bias").setValue("0.5");
ComposedShader38.getField("scale").setValue("0.5");
ComposedShader39.getField("power").setValue("2");
ComposedShader40.getField("a").setValue("2");
ComposedShader41.getField("b").setValue("1");
ComposedShader42.getField("c").setValue("5");
ComposedShader43.getField("d").setValue("5");
ComposedShader44.getField("tdelta")ComposedShader45.getField("pdelta")Appearance22YYY.shaders = new X3D.MFNode();

Appearance22ZZZ.shaders[0] = ComposedShader31;

appearance = Appearance22;

let Sphere46 = browser.currentScene.createNode("Sphere");
geometry = Sphere46;

Group17YYY.children = new X3D.MFNode();

Group17ZZZ.children[0] = ParticleSystem18;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "Animate";
Script48.getField("translation")Script47YYY.field = new X3D.MFNode();

Script49.getField("velocity")Script47YYY.field = new X3D.MFNode();

Script50.getField("set_fraction")Script47YYY.field = new X3D.MFNode();

Script51.getField("a").setValue("0.5");
Script47YYY.field = new X3D.MFNode();

Script52.getField("b").setValue("0.5");
Script47YYY.field = new X3D.MFNode();

Script53.getField("c").setValue("3");
Script47YYY.field = new X3D.MFNode();

Script54.getField("d").setValue("3");
Script47YYY.field = new X3D.MFNode();

Script55.getField("tdelta").setValue("0.5");
Script47YYY.field = new X3D.MFNode();

Script56.getField("pdelta").setValue("0.5");
Script47YYY.field = new X3D.MFNode();


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
Group17ZZZ.children[1] = Script47;

let TimeSensor57 = browser.currentScene.createNode("TimeSensor");
TimeSensor57.DEF = "TourTime";
TimeSensor57.cycleInterval = 5;
TimeSensor57.loop = True;
Group17ZZZ.children[2] = TimeSensor57;

browser.currentScene.children[4] = Group17;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "TourTime";
ROUTE58.fromField = "fraction_changed";
ROUTE58.toNode = "Animate";
ROUTE58.toField = "set_fraction";
browser.currentScene.children[5] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "Animate";
ROUTE59.fromField = "a_changed";
ROUTE59.toNode = "x_ite";
ROUTE59.toField = "set_a";
browser.currentScene.children[6] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "b_changed";
ROUTE60.toNode = "x_ite";
ROUTE60.toField = "set_b";
browser.currentScene.children[7] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "c_changed";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "set_c";
browser.currentScene.children[8] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "d_changed";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "set_d";
browser.currentScene.children[9] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "pdelta_changed";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "set_pdelta";
browser.currentScene.children[10] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "tdelta_changed";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "set_tdelta";
browser.currentScene.children[11] = ROUTE64;

}
main ();
