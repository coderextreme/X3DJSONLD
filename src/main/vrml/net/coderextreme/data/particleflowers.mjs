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
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene .addComponent (browser .getComponent ("ParticleSystems", 3));
scene.addMetaData("title", "particleflowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "A flower particle system");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "particleflowers.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.description = "Tour Views";
Viewpoint17.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[2] = Viewpoint17;

let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[3] = Background18;

let Group19 = browser.currentScene.createNode("Group");
let ParticleSystem20 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem20.maxParticles = 20;
ParticleSystem20.geometryType = "GEOMETRY";
let BoundedPhysicsModel21 = browser.currentScene.createNode("BoundedPhysicsModel");
let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 100;
geometry = Sphere22;

ParticleSystem20YYY.physics = new X3D.MFNode();

ParticleSystem20ZZZ.physics[0] = BoundedPhysicsModel21;

let ExplosionEmitter23 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter23.speed = 2;
ExplosionEmitter23.variation = 0.75;
emitter = ExplosionEmitter23;

let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material25.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture32;

texture = ComposedCubeMapTexture26;

let ComposedShader33 = browser.currentScene.createNode("ComposedShader");
ComposedShader33.DEF = "x_ite";
ComposedShader33.language = "GLSL";
ComposedShader34.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader35.getField("cube")let ComposedCubeMapTexture36 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture36.USE = "texture";
field35YYY.children = new X3D.MFNode();

field35ZZZ.children[0] = ComposedCubeMapTexture36;

ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader37.getField("bias").setValue("0.5");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader38.getField("scale").setValue("0.5");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader39.getField("power").setValue("2");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader40.getField("a").setValue("2");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader41.getField("b").setValue("1");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader42.getField("c").setValue("5");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader43.getField("d").setValue("5");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader44.getField("tdelta").setValue("0");
ComposedShader33YYY.field = new X3D.MFNode();

ComposedShader45.getField("pdelta").setValue("0");
ComposedShader33YYY.field = new X3D.MFNode();

let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), new X3D.SFString("../shaders/x_ite_flower_particles.vs")]);
ShaderPart46.type = "VERTEX";
ComposedShader33YYY.parts = new X3D.MFNode();

ComposedShader33ZZZ.parts[0] = ShaderPart46;

let ShaderPart47 = browser.currentScene.createNode("ShaderPart");
ShaderPart47.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), new X3D.SFString("../shaders/commonnew.fs")]);
ShaderPart47.type = "FRAGMENT";
ComposedShader33ZZZ.parts[1] = ShaderPart47;

Appearance24YYY.shaders = new X3D.MFNode();

Appearance24ZZZ.shaders[0] = ComposedShader33;

appearance = Appearance24;

let Sphere48 = browser.currentScene.createNode("Sphere");
geometry = Sphere48;

Group19YYY.children = new X3D.MFNode();

Group19ZZZ.children[0] = ParticleSystem20;

let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "Animate";
Script50.getField("translation").setValue("0 0 0");
Script49YYY.field = new X3D.MFNode();

Script51.getField("velocity").setValue("0 0 0");
Script49YYY.field = new X3D.MFNode();

Script52.getField("set_fraction")Script49YYY.field = new X3D.MFNode();

Script53.getField("a").setValue("0.5");
Script49YYY.field = new X3D.MFNode();

Script54.getField("b").setValue("0.5");
Script49YYY.field = new X3D.MFNode();

Script55.getField("c").setValue("3");
Script49YYY.field = new X3D.MFNode();

Script56.getField("d").setValue("3");
Script49YYY.field = new X3D.MFNode();

Script57.getField("tdelta").setValue("0.5");
Script49YYY.field = new X3D.MFNode();

Script58.getField("pdelta").setValue("0.5");
Script49YYY.field = new X3D.MFNode();


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
Group19ZZZ.children[1] = Script49;

let TimeSensor59 = browser.currentScene.createNode("TimeSensor");
TimeSensor59.DEF = "TourTime";
TimeSensor59.cycleInterval = 5;
TimeSensor59.loop = True;
Group19ZZZ.children[2] = TimeSensor59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "TourTime";
ROUTE60.fromField = "fraction_changed";
ROUTE60.toNode = "Animate";
ROUTE60.toField = "set_fraction";
Group19ZZZ.children[3] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "a";
ROUTE61.toNode = "x_ite";
ROUTE61.toField = "a";
Group19ZZZ.children[4] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "b";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "b";
Group19ZZZ.children[5] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "c";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "c";
Group19ZZZ.children[6] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "d";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "d";
Group19ZZZ.children[7] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "pdelta";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "pdelta";
Group19ZZZ.children[8] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "tdelta";
ROUTE66.toNode = "x_ite";
ROUTE66.toField = "tdelta";
Group19ZZZ.children[9] = ROUTE66;

browser.currentScene.children[4] = Group19;

}
main ();
