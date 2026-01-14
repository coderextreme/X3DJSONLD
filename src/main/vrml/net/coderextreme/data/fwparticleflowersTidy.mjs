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
scene.addMetaData("description", "A flower proto with configurable shaders");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/particleflowers.x3d");
await browser .loadComponents (scene);
let WorldInfo12 = browser.currentScene.createNode("WorldInfo");
WorldInfo12.title = "particleflowers.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo12;

let NavigationInfo13 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo13.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo13;

let Viewpoint14 = browser.currentScene.createNode("Viewpoint");
Viewpoint14.description = "Tour Views";
Viewpoint14.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[2] = Viewpoint14;

let Background15 = browser.currentScene.createNode("Background");
Background15.frontUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background15.backUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background15.leftUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background15.rightUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background15.topUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
Background15.bottomUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
browser.currentScene.children[3] = Background15;

let Transform16 = browser.currentScene.createNode("Transform");
let ParticleSystem17 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem17.geometryType = "GEOMETRY";
ParticleSystem17.maxParticles = 20;
let ExplosionEmitter18 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter18.speed = 2;
ExplosionEmitter18.variation = 0.75;
emitter = ExplosionEmitter18;

let BoundedPhysicsModel19 = browser.currentScene.createNode("BoundedPhysicsModel");
let Sphere20 = browser.currentScene.createNode("Sphere");
Sphere20.radius = 100;
geometry = Sphere20;

ParticleSystem17YYY.physics = new X3D.MFNode();

ParticleSystem17ZZZ.physics[0] = BoundedPhysicsModel19;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material22.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture29;

texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.DEF = "fw";
ComposedShader30.language = "GLSL";
let ShaderPart31 = browser.currentScene.createNode("ShaderPart");
ShaderPart31.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs")]);
ComposedShader30YYY.parts = new X3D.MFNode();

ComposedShader30ZZZ.parts[0] = ShaderPart31;

let ShaderPart32 = browser.currentScene.createNode("ShaderPart");
ShaderPart32.type = "FRAGMENT";
ShaderPart32.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs")]);
ComposedShader30ZZZ.parts[1] = ShaderPart32;

ComposedShader33.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader34.getField("cube")let ComposedCubeMapTexture35 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34YYY.children = new X3D.MFNode();

field34ZZZ.children[0] = ComposedCubeMapTexture35;

ComposedShader36.getField("bias").setValue("0.5");
ComposedShader37.getField("scale").setValue("0.5");
ComposedShader38.getField("power").setValue("2");
ComposedShader39.getField("a").setValue("2");
ComposedShader40.getField("b").setValue("1");
ComposedShader41.getField("c").setValue("5");
ComposedShader42.getField("d").setValue("5");
ComposedShader43.getField("tdelta")ComposedShader44.getField("pdelta")Appearance21YYY.shaders = new X3D.MFNode();

Appearance21ZZZ.shaders[0] = ComposedShader30;

appearance = Appearance21;

let Sphere45 = browser.currentScene.createNode("Sphere");
geometry = Sphere45;

Transform16YYY.children = new X3D.MFNode();

Transform16ZZZ.children[0] = ParticleSystem17;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "Animate";
Script47.getField("translation")Script46YYY.field = new X3D.MFNode();

Script48.getField("velocity")Script46YYY.field = new X3D.MFNode();

Script49.getField("set_fraction")Script46YYY.field = new X3D.MFNode();

Script50.getField("a").setValue("0.5");
Script46YYY.field = new X3D.MFNode();

Script51.getField("b").setValue("0.5");
Script46YYY.field = new X3D.MFNode();

Script52.getField("c").setValue("3");
Script46YYY.field = new X3D.MFNode();

Script53.getField("d").setValue("3");
Script46YYY.field = new X3D.MFNode();

Script54.getField("tdelta").setValue("0.5");
Script46YYY.field = new X3D.MFNode();

Script55.getField("pdelta").setValue("0.5");
Script46YYY.field = new X3D.MFNode();


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
Transform16ZZZ.children[1] = Script46;

browser.currentScene.children[4] = Transform16;

let TimeSensor56 = browser.currentScene.createNode("TimeSensor");
TimeSensor56.DEF = "TourTime";
TimeSensor56.cycleInterval = 5;
TimeSensor56.loop = True;
browser.currentScene.children[5] = TimeSensor56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromNode = "TourTime";
ROUTE57.fromField = "fraction_changed";
ROUTE57.toNode = "Animate";
ROUTE57.toField = "set_fraction";
browser.currentScene.children[6] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromNode = "Animate";
ROUTE58.fromField = "a_changed";
ROUTE58.toNode = "fw";
ROUTE58.toField = "set_a";
browser.currentScene.children[7] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "Animate";
ROUTE59.fromField = "b_changed";
ROUTE59.toNode = "fw";
ROUTE59.toField = "set_b";
browser.currentScene.children[8] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "c_changed";
ROUTE60.toNode = "fw";
ROUTE60.toField = "set_c";
browser.currentScene.children[9] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "d_changed";
ROUTE61.toNode = "fw";
ROUTE61.toField = "set_d";
browser.currentScene.children[10] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "pdelta_changed";
ROUTE62.toNode = "fw";
ROUTE62.toField = "set_pdelta";
browser.currentScene.children[11] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "tdelta_changed";
ROUTE63.toNode = "fw";
ROUTE63.toField = "set_tdelta";
browser.currentScene.children[12] = ROUTE63;

}
main ();
