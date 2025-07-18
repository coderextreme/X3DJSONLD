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
scene.addMetaData("generator", "Vim");
await browser .loadComponents (scene);
let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "particleflowers.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo16;

let NavigationInfo17 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo17.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "Tour Views";
Viewpoint18.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[2] = Viewpoint18;

let Background19 = browser.currentScene.createNode("Background");
Background19.backUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background19.bottomUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background19.frontUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background19.leftUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background19.rightUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background19.topUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[3] = Background19;

let Group20 = browser.currentScene.createNode("Group");
let ParticleSystem21 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem21.maxParticles = 20;
ParticleSystem21.geometryType = "GEOMETRY";
let BoundedPhysicsModel22 = browser.currentScene.createNode("BoundedPhysicsModel");
let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 100;
geometry = Sphere23;

ParticleSystem21YYY.physics = new X3D.MFNode();

ParticleSystem21ZZZ.physics[0] = BoundedPhysicsModel22;

let ExplosionEmitter24 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter24.speed = 2;
ExplosionEmitter24.variation = 0.75;
emitter = ExplosionEmitter24;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material26.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material26;

let ComposedCubeMapTexture27 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture27.DEF = "texture";
let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture33;

texture = ComposedCubeMapTexture27;

let ComposedShader34 = browser.currentScene.createNode("ComposedShader");
ComposedShader34.DEF = "x_ite";
ComposedShader34.language = "GLSL";
ComposedShader35.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader36.getField("cube")let ComposedCubeMapTexture37 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture37.USE = "texture";
field36YYY.children = new X3D.MFNode();

field36ZZZ.children[0] = ComposedCubeMapTexture37;

ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader38.getField("bias").setValue("0.5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader39.getField("scale").setValue("0.5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader40.getField("power").setValue("2");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader41.getField("a").setValue("2");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader42.getField("b").setValue("1");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader43.getField("c").setValue("5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader44.getField("d").setValue("5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader45.getField("tdelta").setValue("0");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader46.getField("pdelta").setValue("0");
ComposedShader34YYY.field = new X3D.MFNode();

let ShaderPart47 = browser.currentScene.createNode("ShaderPart");
ShaderPart47.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flower_particles.vs"), new X3D.SFString("../shaders/x_ite_flower_particles.vs")]);
ShaderPart47.type = "VERTEX";
ComposedShader34YYY.parts = new X3D.MFNode();

ComposedShader34ZZZ.parts[0] = ShaderPart47;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"), new X3D.SFString("../shaders/commonnew.fs")]);
ShaderPart48.type = "FRAGMENT";
ComposedShader34ZZZ.parts[1] = ShaderPart48;

Appearance25YYY.shaders = new X3D.MFNode();

Appearance25ZZZ.shaders[0] = ComposedShader34;

appearance = Appearance25;

let Sphere49 = browser.currentScene.createNode("Sphere");
geometry = Sphere49;

Group20YYY.children = new X3D.MFNode();

Group20ZZZ.children[0] = ParticleSystem21;

let Script50 = browser.currentScene.createNode("Script");
Script50.DEF = "Animate";
Script51.getField("translation").setValue("0 0 0");
Script50YYY.field = new X3D.MFNode();

Script52.getField("velocity").setValue("0 0 0");
Script50YYY.field = new X3D.MFNode();

Script53.getField("set_fraction")Script50YYY.field = new X3D.MFNode();

Script54.getField("a").setValue("0.5");
Script50YYY.field = new X3D.MFNode();

Script55.getField("b").setValue("0.5");
Script50YYY.field = new X3D.MFNode();

Script56.getField("c").setValue("3");
Script50YYY.field = new X3D.MFNode();

Script57.getField("d").setValue("3");
Script50YYY.field = new X3D.MFNode();

Script58.getField("tdelta").setValue("0.5");
Script50YYY.field = new X3D.MFNode();

Script59.getField("pdelta").setValue("0.5");
Script50YYY.field = new X3D.MFNode();


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
Group20ZZZ.children[1] = Script50;

let TimeSensor60 = browser.currentScene.createNode("TimeSensor");
TimeSensor60.DEF = "TourTime";
TimeSensor60.cycleInterval = 5;
TimeSensor60.loop = True;
Group20ZZZ.children[2] = TimeSensor60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "TourTime";
ROUTE61.fromField = "fraction_changed";
ROUTE61.toNode = "Animate";
ROUTE61.toField = "set_fraction";
Group20ZZZ.children[3] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "a";
ROUTE62.toNode = "x_ite";
ROUTE62.toField = "a";
Group20ZZZ.children[4] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "b";
ROUTE63.toNode = "x_ite";
ROUTE63.toField = "b";
Group20ZZZ.children[5] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "c";
ROUTE64.toNode = "x_ite";
ROUTE64.toField = "c";
Group20ZZZ.children[6] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "d";
ROUTE65.toNode = "x_ite";
ROUTE65.toField = "d";
Group20ZZZ.children[7] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "Animate";
ROUTE66.fromField = "pdelta";
ROUTE66.toNode = "x_ite";
ROUTE66.toField = "pdelta";
Group20ZZZ.children[8] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "Animate";
ROUTE67.fromField = "tdelta";
ROUTE67.toNode = "x_ite";
ROUTE67.toField = "tdelta";
Group20ZZZ.children[9] = ROUTE67;

browser.currentScene.children[4] = Group20;

}
main ();
