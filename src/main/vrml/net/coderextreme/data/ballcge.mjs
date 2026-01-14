const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d");
scene.addMetaData("title", "ball.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("description", "a prismatic sphere");
await browser .loadComponents (scene);
let WorldInfo15 = browser.currentScene.createNode("WorldInfo");
WorldInfo15.title = "ball.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo15;

let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.avatarSize = new X3D.MFFloat([0.25,1.60000002384186,0.75]);
NavigationInfo16.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children[1] = NavigationInfo16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.position = new X3D.SFVec3f([0,0,12]);
Viewpoint17.description = "Tour Views";
browser.currentScene.children[2] = Viewpoint17;

let Background18 = browser.currentScene.createNode("Background");
Background18.topUrl = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
Background18.backUrl = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
browser.currentScene.children[3] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let Shape20 = browser.currentScene.createNode("Shape");
let Sphere21 = browser.currentScene.createNode("Sphere");
geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0.699999988079071,0.699999988079071,0.699999988079071]);
Material23.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material23;

let ComposedShader24 = browser.currentScene.createNode("ComposedShader");
ComposedShader24.language = "GLSL";
ComposedShader25.getField("chromaticDispertion").setValue("0.980000019073486 1 1.03299999237061");
ComposedShader24YYY.field = new X3D.MFNode();

ComposedShader26.getField("cube")let ComposedCubeMapTexture27 = browser.currentScene.createNode("ComposedCubeMapTexture");
let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png")]);
topTexture = ImageTexture30;

let ImageTexture31 = browser.currentScene.createNode("ImageTexture");
ImageTexture31.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png")]);
topTexture = ImageTexture31;

let ImageTexture32 = browser.currentScene.createNode("ImageTexture");
ImageTexture32.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png")]);
topTexture = ImageTexture32;

let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
ImageTexture33.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png")]);
topTexture = ImageTexture33;

field26YYY.children = new X3D.MFNode();

field26ZZZ.children[0] = ComposedCubeMapTexture27;

ComposedShader24YYY.field = new X3D.MFNode();

ComposedShader34.getField("bias").setValue("0.5");
ComposedShader24YYY.field = new X3D.MFNode();

ComposedShader35.getField("scale").setValue("0.5");
ComposedShader24YYY.field = new X3D.MFNode();

ComposedShader36.getField("power").setValue("2");
ComposedShader24YYY.field = new X3D.MFNode();

let ShaderPart37 = browser.currentScene.createNode("ShaderPart");
ShaderPart37.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.vs")]);
ShaderPart37.type = "VERTEX";
ComposedShader24YYY.parts = new X3D.MFNode();

ComposedShader24ZZZ.parts[0] = ShaderPart37;

let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.DEF = "commonfs";
ShaderPart38.url = new X3D.MFString([new X3D.SFString("file:/C:/Users/jcarl/X3DJSONLD/src/main/shaders/castle.fs")]);
ShaderPart38.type = "FRAGMENT";
ComposedShader24ZZZ.parts[1] = ShaderPart38;

Appearance22YYY.shaders = new X3D.MFNode();

Appearance22ZZZ.shaders[0] = ComposedShader24;

appearance = Appearance22;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[4] = Transform19;

}
main ();
