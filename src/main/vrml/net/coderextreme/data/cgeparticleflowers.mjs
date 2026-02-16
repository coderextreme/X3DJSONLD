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
scene.addMetaData("description", "A flower proto with configurable shaders");
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
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
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

let Sphere24 = browser.currentScene.createNode("Sphere");
geometry = Sphere24;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material26.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material26;

let ComposedCubeMapTexture27 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture27.DEF = "texture";
let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_from.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture33;

texture = ComposedCubeMapTexture27;

let ComposedShader34 = browser.currentScene.createNode("ComposedShader");
ComposedShader34.DEF = "shader";
ComposedShader34.language = "GLSL";
ComposedShader35.getField("cube").setValue("0");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader36.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader37.getField("bias").setValue("0.5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader38.getField("scale").setValue("0.5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader39.getField("power").setValue("2");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader40.getField("a").setValue("2");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader41.getField("b").setValue("1");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader42.getField("c").setValue("5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader43.getField("d").setValue("5");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader44.getField("tdelta").setValue("0");
ComposedShader34YYY.field = new X3D.MFNode();

ComposedShader45.getField("pdelta").setValue("0");
ComposedShader34YYY.field = new X3D.MFNode();

//<field name='cube' type='SFNode' accessType=\"initializeOnly\">
//<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>
//</field>
let ShaderPart46 = browser.currentScene.createNode("ShaderPart");
ShaderPart46.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs")]);
ShaderPart46.type = "VERTEX";
ComposedShader34YYY.parts = new X3D.MFNode();

ComposedShader34ZZZ.parts[0] = ShaderPart46;

let ShaderPart47 = browser.currentScene.createNode("ShaderPart");
ShaderPart47.type = "FRAGMENT";
ShaderPart47.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs")]);
ComposedShader34ZZZ.parts[1] = ShaderPart47;

Appearance25YYY.shaders = new X3D.MFNode();

Appearance25ZZZ.shaders[0] = ComposedShader34;

appearance = Appearance25;

Transform19YYY.children = new X3D.MFNode();

Transform19ZZZ.children[0] = ParticleSystem20;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "Animate";
Script49.getField("translation").setValue("0 0 0");
Script48YYY.field = new X3D.MFNode();

Script50.getField("velocity").setValue("0 0 0");
Script48YYY.field = new X3D.MFNode();

Script51.getField("set_fraction")Script48YYY.field = new X3D.MFNode();

Script52.getField("a").setValue("0.5");
Script48YYY.field = new X3D.MFNode();

Script53.getField("b").setValue("0.5");
Script48YYY.field = new X3D.MFNode();

Script54.getField("c").setValue("3");
Script48YYY.field = new X3D.MFNode();

Script55.getField("d").setValue("3");
Script48YYY.field = new X3D.MFNode();

Script56.getField("tdelta").setValue("0.5");
Script48YYY.field = new X3D.MFNode();

Script57.getField("pdelta").setValue("0.5");
Script48YYY.field = new X3D.MFNode();


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
Transform19ZZZ.children[1] = Script48;

let TimeSensor58 = browser.currentScene.createNode("TimeSensor");
TimeSensor58.DEF = "TourTime";
TimeSensor58.cycleInterval = 5;
TimeSensor58.loop = True;
Transform19ZZZ.children[2] = TimeSensor58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromNode = "TourTime";
ROUTE59.fromField = "fraction_changed";
ROUTE59.toNode = "Animate";
ROUTE59.toField = "set_fraction";
Transform19ZZZ.children[3] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromNode = "Animate";
ROUTE60.fromField = "a";
ROUTE60.toNode = "shader";
ROUTE60.toField = "a";
Transform19ZZZ.children[4] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromNode = "Animate";
ROUTE61.fromField = "b";
ROUTE61.toNode = "shader";
ROUTE61.toField = "b";
Transform19ZZZ.children[5] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "Animate";
ROUTE62.fromField = "c";
ROUTE62.toNode = "shader";
ROUTE62.toField = "c";
Transform19ZZZ.children[6] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "Animate";
ROUTE63.fromField = "d";
ROUTE63.toNode = "shader";
ROUTE63.toField = "d";
Transform19ZZZ.children[7] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromNode = "Animate";
ROUTE64.fromField = "pdelta";
ROUTE64.toNode = "shader";
ROUTE64.toField = "pdelta";
Transform19ZZZ.children[8] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromNode = "Animate";
ROUTE65.fromField = "tdelta";
ROUTE65.toNode = "shader";
ROUTE65.toField = "tdelta";
Transform19ZZZ.children[9] = ROUTE65;

browser.currentScene.children[4] = Transform19;

}
main ();
