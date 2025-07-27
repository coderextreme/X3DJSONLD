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
scene.addMetaData("description", "A flower proto with configurable shaders");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/variationalflowers.x3d");
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
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let ParticleSystem20 = browser.currentScene.createNode("ParticleSystem");
ParticleSystem20.maxParticles = 100;
ParticleSystem20.geometryType = "GEOMETRY";
//values - array of MFFloats to pass to ComposedShader variations in values - array of MFFloats to pass to ComposedShader that varies values lastFrame - last frame that was rendered (0 for default) updateRate - update rate is amount of time between frames
//<VariationPhysicsModel values=\"2 2 5 5 0 0\" varations=\"2 1 3 3 0.1 0.1\" lastFrame='0' updateRate='0.1'> </VariationPhysicsModel>
let ExplosionEmitter21 = browser.currentScene.createNode("ExplosionEmitter");
ExplosionEmitter21.speed = 1;
ExplosionEmitter21.variation = 0.75;
emitter = ExplosionEmitter21;

let Sphere22 = browser.currentScene.createNode("Sphere");
geometry = Sphere22;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material24.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material24;

let ComposedCubeMapTexture25 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture25.DEF = "texture";
let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_back.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_front.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_left.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_right.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("../resources/images/all_probes/stpeters_cross/stpeters_top.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture31;

texture = ComposedCubeMapTexture25;

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/freewrl.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
let ComposedShader32 = browser.currentScene.createNode("ComposedShader");
ComposedShader32.DEF = "x_ite";
ComposedShader32.language = "GLSL";
ComposedShader33.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader34.getField("cube")let ComposedCubeMapTexture35 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture35.USE = "texture";
field34YYY.children = new X3D.MFNode();

field34ZZZ.children[0] = ComposedCubeMapTexture35;

ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader36.getField("bias").setValue("0.5");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader37.getField("scale").setValue("0.5");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader38.getField("power").setValue("2");
ComposedShader32YYY.field = new X3D.MFNode();

ComposedShader39.getField("x3d_ParticleValues").setValue("2 1 4 4 0 0");
ComposedShader32YYY.field = new X3D.MFNode();

let ShaderPart40 = browser.currentScene.createNode("ShaderPart");
ShaderPart40.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite_variations.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_variations.vs")]);
ShaderPart40.type = "VERTEX";
ComposedShader32YYY.parts = new X3D.MFNode();

ComposedShader32ZZZ.parts[0] = ShaderPart40;

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new X3D.MFString([new X3D.SFString("../shaders/commonnew.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs")]);
ShaderPart41.type = "FRAGMENT";
ComposedShader32ZZZ.parts[1] = ShaderPart41;

Appearance23YYY.shaders = new X3D.MFNode();

Appearance23ZZZ.shaders[0] = ComposedShader32;

appearance = Appearance23;

Transform19YYY.children = new X3D.MFNode();

Transform19ZZZ.children[0] = ParticleSystem20;

let Script42 = browser.currentScene.createNode("Script");
Script42.DEF = "Animate";
Script43.getField("set_fraction")Script42YYY.field = new X3D.MFNode();

Script44.getField("values").setValue("2 2 5 5 0 0");
Script42YYY.field = new X3D.MFNode();

Script45.getField("variations").setValue("0.2 0.1 0.3 0.3 0.01 0.01");
Script42YYY.field = new X3D.MFNode();

Script46.getField("lastframe").setValue("0");
Script42YYY.field = new X3D.MFNode();

Script47.getField("updaterate").setValue("0.1");
Script42YYY.field = new X3D.MFNode();


Script42.setSourceCode(`ecmascript:\n"+
"			function set_fraction(f, tm) {\n"+
"			    if (lastframe + updaterate < tm) {\n"+
"			  	lastframe = tm;\n"+
"				for (let v in values) {\n"+
"					values[v] = values[v] + (2 * Math.random() - 1) * variations[v];\n"+
"				}\n"+
"			    }\n"+
"			}`)
Transform19ZZZ.children[1] = Script42;

let TimeSensor48 = browser.currentScene.createNode("TimeSensor");
TimeSensor48.DEF = "TourTime";
TimeSensor48.cycleInterval = 45;
TimeSensor48.loop = True;
Transform19ZZZ.children[2] = TimeSensor48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "TourTime";
ROUTE49.fromField = "fraction_changed";
ROUTE49.toNode = "Animate";
ROUTE49.toField = "set_fraction";
Transform19ZZZ.children[3] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromNode = "Animate";
ROUTE50.fromField = "values";
ROUTE50.toNode = "x_ite";
ROUTE50.toField = "x3d_ParticleValues";
Transform19ZZZ.children[4] = ROUTE50;

browser.currentScene.children[4] = Transform19;

}
main ();
