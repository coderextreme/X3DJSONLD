const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
//<component name='Shape' level='4'></component>
scene .addComponent (browser .getComponent ("Scripting", 1));
scene .addComponent (browser .getComponent ("EnvironmentalEffects", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CubeMapTexturing", 1));
scene .addComponent (browser .getComponent ("Texturing", 1));
scene .addComponent (browser .getComponent ("Rendering", 1));
scene .addComponent (browser .getComponent ("Grouping", 3));
scene .addComponent (browser .getComponent ("Core", 1));
scene.addMetaData("title", "geo.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d");
scene.addMetaData("description", "a sphere");
await browser .loadComponents (scene);
let NavigationInfo16 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo16.type = new X3D.MFString([new X3D.SFString("ANY"), new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("LOOKAT")]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = NavigationInfo16;

let Viewpoint17 = browser.currentScene.createNode("Viewpoint");
Viewpoint17.DEF = "Tour";
Viewpoint17.description = "Tour Views";
browser.currentScene.children[1] = Viewpoint17;

//Viewpoint position='0 0 4' description='sphere in road'/
let Background18 = browser.currentScene.createNode("Background");
Background18.backUrl = new X3D.MFString([new X3D.SFString("../resources/images/bBK.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")]);
Background18.bottomUrl = new X3D.MFString([new X3D.SFString("../resources/images/bBT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")]);
Background18.frontUrl = new X3D.MFString([new X3D.SFString("../resources/images/bFR.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")]);
Background18.leftUrl = new X3D.MFString([new X3D.SFString("../resources/images/bLF.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")]);
Background18.rightUrl = new X3D.MFString([new X3D.SFString("../resources/images/bRT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")]);
Background18.topUrl = new X3D.MFString([new X3D.SFString("../resources/images/bTP.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")]);
browser.currentScene.children[2] = Background18;

let Transform19 = browser.currentScene.createNode("Transform");
let Shape20 = browser.currentScene.createNode("Shape");
let Sphere21 = browser.currentScene.createNode("Sphere");
geometry = Sphere21;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0.7,0.7,0.7]);
Material23.specularColor = new X3D.SFColor([0.5,0.5,0.5]);
material = Material23;

let ComposedCubeMapTexture24 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture24.DEF = "texture";
let ImageTexture25 = browser.currentScene.createNode("ImageTexture");
ImageTexture25.url = new X3D.MFString([new X3D.SFString("../resources/images/bBK.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBK.png")]);
topTexture = ImageTexture25;

let ImageTexture26 = browser.currentScene.createNode("ImageTexture");
ImageTexture26.url = new X3D.MFString([new X3D.SFString("../resources/images/bBT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bBT.png")]);
topTexture = ImageTexture26;

let ImageTexture27 = browser.currentScene.createNode("ImageTexture");
ImageTexture27.url = new X3D.MFString([new X3D.SFString("../resources/images/bFR.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bFR.png")]);
topTexture = ImageTexture27;

let ImageTexture28 = browser.currentScene.createNode("ImageTexture");
ImageTexture28.url = new X3D.MFString([new X3D.SFString("../resources/images/bLF.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bLF.png")]);
topTexture = ImageTexture28;

let ImageTexture29 = browser.currentScene.createNode("ImageTexture");
ImageTexture29.url = new X3D.MFString([new X3D.SFString("../resources/images/bRT.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bRT.png")]);
topTexture = ImageTexture29;

let ImageTexture30 = browser.currentScene.createNode("ImageTexture");
ImageTexture30.url = new X3D.MFString([new X3D.SFString("../resources/images/bTP.png"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/bTP.png")]);
topTexture = ImageTexture30;

texture = ComposedCubeMapTexture24;

let ComposedShader31 = browser.currentScene.createNode("ComposedShader");
ComposedShader31.language = "GLSL";
ComposedShader32.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader33.getField("cube")let ComposedCubeMapTexture34 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture34.USE = "texture";
field33YYY.children = new X3D.MFNode();

field33ZZZ.children[0] = ComposedCubeMapTexture34;

ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader35.getField("bias").setValue("0.5");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader36.getField("scale").setValue("0.5");
ComposedShader31YYY.field = new X3D.MFNode();

ComposedShader37.getField("power").setValue("2");
ComposedShader31YYY.field = new X3D.MFNode();

let ShaderPart38 = browser.currentScene.createNode("ShaderPart");
ShaderPart38.url = new X3D.MFString([new X3D.SFString("../shaders/x3dom.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs")]);
ShaderPart38.type = "VERTEX";
ComposedShader31YYY.parts = new X3D.MFNode();

ComposedShader31ZZZ.parts[0] = ShaderPart38;

let ShaderPart39 = browser.currentScene.createNode("ShaderPart");
ShaderPart39.DEF = "common";
ShaderPart39.url = new X3D.MFString([new X3D.SFString("../shaders/common.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs")]);
ShaderPart39.type = "FRAGMENT";
ComposedShader31ZZZ.parts[1] = ShaderPart39;

Appearance22YYY.shaders = new X3D.MFNode();

Appearance22ZZZ.shaders[0] = ComposedShader31;

let ComposedShader40 = browser.currentScene.createNode("ComposedShader");
ComposedShader40.language = "GLSL";
ComposedShader41.getField("chromaticDispertion").setValue("0.98 1 1.033");
ComposedShader40YYY.field = new X3D.MFNode();

ComposedShader42.getField("cube")let ComposedCubeMapTexture43 = browser.currentScene.createNode("ComposedCubeMapTexture");
ComposedCubeMapTexture43.USE = "texture";
field42YYY.children = new X3D.MFNode();

field42ZZZ.children[0] = ComposedCubeMapTexture43;

ComposedShader40YYY.field = new X3D.MFNode();

ComposedShader44.getField("bias").setValue("0.5");
ComposedShader40YYY.field = new X3D.MFNode();

ComposedShader45.getField("scale").setValue("0.5");
ComposedShader40YYY.field = new X3D.MFNode();

ComposedShader46.getField("power").setValue("2");
ComposedShader40YYY.field = new X3D.MFNode();

let ShaderPart47 = browser.currentScene.createNode("ShaderPart");
ShaderPart47.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.vs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs")]);
ShaderPart47.type = "VERTEX";
ComposedShader40YYY.parts = new X3D.MFNode();

ComposedShader40ZZZ.parts[0] = ShaderPart47;

let ShaderPart48 = browser.currentScene.createNode("ShaderPart");
ShaderPart48.url = new X3D.MFString([new X3D.SFString("../shaders/x_ite.fs"), new X3D.SFString("https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs")]);
ShaderPart48.type = "FRAGMENT";
ComposedShader40ZZZ.parts[1] = ShaderPart48;

Appearance22ZZZ.shaders[1] = ComposedShader40;

appearance = Appearance22;

Transform19YYY.child = new X3D.undefined();

Transform19ZZZ.child[0] = Shape20;

browser.currentScene.children[3] = Transform19;

}
main ();
