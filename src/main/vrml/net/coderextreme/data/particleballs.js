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
Background18.backUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
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

//<Shape>
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
ImageTexture28.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture33;

texture = ComposedCubeMapTexture27;

//<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader>
//<ComposedShader DEF=\"shader\" language=\"GLSL\"> <field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field> <field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field> <field name='power' type='SFFloat' accessType='inputOutput' value='2'></field> <ShaderPart type=\"VERTEX\" url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'/> <ShaderPart type='FRAGMENT' url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"'/> </ComposedShader>
let ComposedShader34 = browser.currentScene.createNode("ComposedShader");
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

let ShaderPart41 = browser.currentScene.createNode("ShaderPart");
ShaderPart41.url = new X3D.MFString([new X3D.SFString("../shaders/x_iteparticles.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_iteparticles.vs")]);
ShaderPart41.type = "VERTEX";
ComposedShader34YYY.parts = new X3D.MFNode();

ComposedShader34ZZZ.parts[0] = ShaderPart41;

let ShaderPart42 = browser.currentScene.createNode("ShaderPart");
ShaderPart42.DEF = "commonfs";
ShaderPart42.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs")]);
ShaderPart42.type = "FRAGMENT";
ComposedShader34ZZZ.parts[1] = ShaderPart42;

Appearance25YYY.shaders = new X3D.MFNode();

Appearance25ZZZ.shaders[0] = ComposedShader34;

appearance = Appearance25;

Transform19YYY.children = new X3D.MFNode();

Transform19ZZZ.children[0] = ParticleSystem20;

//</Shape>
browser.currentScene.children[4] = Transform19;

}
main ();
