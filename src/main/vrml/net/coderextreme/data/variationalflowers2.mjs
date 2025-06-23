const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene .addComponent (browser .getComponent ("ParticleSystems", 3));
scene.addMetaData("title", "variationalflowers.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("description", "A flower particle system");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/variationalflowers.x3d");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "variationalflowers.x3d";
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
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let ParticleSystem20 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem20.maxParticles = 20;
ParticleSystem20.geometryType = "GEOMETRY";
//* values - array of MFFloats to pass to ComposedShader * variations in values - array of MFFloats to pass to ComposedShader that varies values
let VariationPhysicsModel21 = browser.currentScene.createNode("VariationPhysicsModel");
VariationPhysicsModel21.values = "2 2 5 5 0 0";
VariationPhysicsModel21.variations = "0.2 0.1 0.3 0.3 0.01 0.01";
ParticleSystem20YYY.variationPhysicsModel = new X3D.undefined();

ParticleSystem20ZZZ.variationPhysicsModel[0] = VariationPhysicsModel21;

let ExplosionEmitter22 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter22.speed = 1;
ExplosionEmitter22.variation = 0.75;
emitter = ExplosionEmitter22;

let Sphere23 = browser.currentScene.createNode("Sphere");
geometry = Sphere23;

let Appearance24 = browser.currentScene.createNode("Appearance");
let Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material25.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material25;

let ComposedCubeMapTexture26 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture26.DEF = "texture";
let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
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

ComposedShader40.getField("x3d_ParticleValues").setValue("2 1 4 4 0 0");
ComposedShader33YYY.field = new X3D.MFNode();

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite_variations.vs")]);
ShaderPart41.type = "VERTEX";
ComposedShader33YYY.parts = new X3D.MFNode();

ComposedShader33ZZZ.parts[0] = ShaderPart41;

let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.url = new X3D.MFString([new X3D.SFString("../shaders/commonnew.fs")]);
ShaderPart42.type = "FRAGMENT";
ComposedShader33ZZZ.parts[1] = ShaderPart42;

Appearance24YYY.shaders = new X3D.MFNode();

Appearance24ZZZ.shaders[0] = ComposedShader33;

appearance = Appearance24;

Transform19YYY.children = new X3D.MFNode();

Transform19ZZZ.children[0] = ParticleSystem20;

let Script43 = browser.currentScene.createNode("Script");
Script43.DEF = "Animate";
Script44.getField("set_fraction")Script43YYY.field = new X3D.MFNode();

Script45.getField("values").setValue("2 2 5 5 0 0");
Script43YYY.field = new X3D.MFNode();

Script46.getField("variations").setValue("0.2 0.1 0.3 0.3 0.01 0.01");
Script43YYY.field = new X3D.MFNode();

Script47.getField("lastframe").setValue("0");
Script43YYY.field = new X3D.MFNode();

Script48.getField("updaterate").setValue("0.1");
Script43YYY.field = new X3D.MFNode();


Script43.setSourceCode(`ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}`)
Transform19ZZZ.children[1] = Script43;

let TimeSensor49 = browser.currentScene.createNode("TimeSensor");
TimeSensor49.DEF = "TourTime";
TimeSensor49.cycleInterval = 45;
TimeSensor49.loop = True;
Transform19ZZZ.children[2] = TimeSensor49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "TourTime";
ROUTE50.fromField = "fraction_changed";
ROUTE50.toNode = "Animate";
ROUTE50.toField = "set_fraction";
Transform19ZZZ.children[3] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromNode = "Animate";
ROUTE51.fromField = "values";
ROUTE51.toNode = "x_ite";
ROUTE51.toField = "x3d_ParticleValues";
Transform19ZZZ.children[4] = ROUTE51;

browser.currentScene.children[4] = Transform19;

}
main ();
