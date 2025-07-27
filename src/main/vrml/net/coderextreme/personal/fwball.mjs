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
scene.addMetaData("title", "fwball.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/fwball.x3d");
scene.addMetaData("description", "a prismatic sphere");
await browser .loadComponents (scene);
let WorldInfo14 = browser.currentScene.createNode("WorldInfo");
WorldInfo14.title = "fwball.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo14;

let NavigationInfo15 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo15.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo15;

let Viewpoint16 = browser.currentScene.createNode("Viewpoint");
Viewpoint16.description = "Tour Views";
Viewpoint16.position = new X3D.SFVec3f([0,0,12]);
browser.currentScene.children[2] = Viewpoint16;

let Background17 = browser.currentScene.createNode("Background");
Background17.backUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background17.bottomUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
Background17.frontUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background17.leftUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background17.rightUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background17.topUrl = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
browser.currentScene.children[3] = Background17;

let Transform18 = browser.currentScene.createNode("Transform");
let Shape19 = browser.currentScene.createNode("Shape");
let Sphere20 = browser.currentScene.createNode("Sphere");
geometry = Sphere20;

let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material22.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material22;

let ComposedCubeMapTexture23 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture23.DEF = "texture";
let ImageTexture24 = browser.currentScene.createNode("ImageTexture");
ImageTexture24.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture24;

let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture29;

texture = ComposedCubeMapTexture23;

let ComposedShader30 = browser.currentScene.createNode("ComposedShader");
ComposedShader30.language = "GLSL";
ComposedShader31.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader32.getField("cube")let ComposedCubeMapTexture33 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture33.USE = "texture";
field32YYY.children = new X3D.MFNode();

field32ZZZ.children[0] = ComposedCubeMapTexture33;

ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader34.getField("bias").setValue("0.5");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader35.getField("scale").setValue("0.5");
ComposedShader30YYY.field = new X3D.MFNode();

ComposedShader36.getField("power").setValue("2");
ComposedShader30YYY.field = new X3D.MFNode();

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs")]);
ShaderPart37.type = "VERTEX";
ComposedShader30YYY.parts = new X3D.MFNode();

ComposedShader30ZZZ.parts[0] = ShaderPart37;

let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.url = new X3D.MFString([new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs")]);
ShaderPart38.type = "FRAGMENT";
ComposedShader30ZZZ.parts[1] = ShaderPart38;

Appearance21YYY.shaders = new X3D.MFNode();

Appearance21ZZZ.shaders[0] = ComposedShader30;

appearance = Appearance21;

Transform18YYY.child = new X3D.undefined();

Transform18ZZZ.child[0] = Shape19;

browser.currentScene.children[4] = Transform18;

}
main ();
