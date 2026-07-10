const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "MultiTextureDesignPattern.x3d");
scene.addMetaData("description", "Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("created", "5 March 2011");
scene.addMetaData("modified", "29 October 2023");
scene.addMetaData("TODO", "X3D schematron rules for quality assurance");
scene.addMetaData("Image", "MultiTextureDesignPatternSceneGraph.png");
scene.addMetaData("subject", "MultiTexture, MultiTextureCoordinate, MultiTextureTransform");
scene.addMetaData("reference", "https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture");
scene.addMetaData("identifier", "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d");
scene.addMetaData("reference", "https://www.web3d.org/x3d/content/examples/X3dResources.html");
scene.addMetaData("generator", "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
//================================
let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "MultiTextureDesignPattern.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo16;

let Background17 = browser.currentScene.createNode("Background");
Background17.skyColor = new X3D.MFColor([0.72549,1,0.721569]);
browser.currentScene.children[1] = Background17;

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.description = "MultiTexture design pattern";
browser.currentScene.children[2] = Viewpoint18;

let Shape19 = browser.currentScene.createNode("Shape");
let Text20 = browser.currentScene.createNode("Text");
Text20.string = new X3D.MFString([new X3D.SFString("Source shows design pattern for"), new X3D.SFString("MultiTexture, MultiTextureCoordinate,"), new X3D.SFString(" and MultiTextureTransform nodes")]);
let FontStyle21 = browser.currentScene.createNode("FontStyle");
FontStyle21.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle21.size = 0.6;
fontStyle = FontStyle21;

geometry = Text20;

let Appearance22 = browser.currentScene.createNode("Appearance");
let Material23 = browser.currentScene.createNode("Material");
Material23.diffuseColor = new X3D.SFColor([0.2,0.4,0.8]);
material = Material23;

appearance = Appearance22;

browser.currentScene.children[3] = Shape19;

//================================
let Shape24 = browser.currentScene.createNode("Shape");
//add a single geometry node here
let IndexedFaceSet25 = browser.currentScene.createNode("IndexedFaceSet");
let MultiTextureCoordinate26 = browser.currentScene.createNode("MultiTextureCoordinate");
//add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes
let TextureCoordinate27 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate27.point = new X3D.MFVec2f([0,0,1,0,1,1,0,1]);
MultiTextureCoordinate26YYY.texCoord = new X3D.MFNode();

MultiTextureCoordinate26ZZZ.texCoord[0] = TextureCoordinate27;

let TextureCoordinate28 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate28.point = new X3D.MFVec2f([0,0,1,0,1,1,0,1]);
MultiTextureCoordinate26ZZZ.texCoord[1] = TextureCoordinate28;

let TextureCoordinate29 = browser.currentScene.createNode("TextureCoordinate");
TextureCoordinate29.point = new X3D.MFVec2f([0,0,1,0,1,1,0,1]);
MultiTextureCoordinate26ZZZ.texCoord[2] = TextureCoordinate29;

texCoord = MultiTextureCoordinate26;

geometry = IndexedFaceSet25;

let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
material = Material31;

let MultiTexture32 = browser.currentScene.createNode("MultiTexture");
MultiTexture32.alpha = 0.8;
MultiTexture32.color = new X3D.SFColor([0.9,1,0.2]);
MultiTexture32.function = new X3D.MFString([new X3D.SFString("COMPLEMENT"), new X3D.SFString("ALPHAREPLICATE")]);
MultiTexture32.mode = new X3D.MFString([new X3D.SFString("MODULATE"), new X3D.SFString("REPLACE"), new X3D.SFString("BLENDDIFFUSEALPHA")]);
MultiTexture32.source = new X3D.MFString([new X3D.SFString("DIFFUSE"), new X3D.SFString("SPECULAR"), new X3D.SFString("FACTOR")]);
//add multiple texture nodes here
let ImageTexture33 = browser.currentScene.createNode("ImageTexture");
MultiTexture32YYY.texture = new X3D.MFNode();

MultiTexture32ZZZ.texture[0] = ImageTexture33;

let MovieTexture34 = browser.currentScene.createNode("MovieTexture");
MultiTexture32ZZZ.texture[1] = MovieTexture34;

let PixelTexture35 = browser.currentScene.createNode("PixelTexture");
MultiTexture32ZZZ.texture[2] = PixelTexture35;

texture = MultiTexture32;

let MultiTextureTransform36 = browser.currentScene.createNode("MultiTextureTransform");
//add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes
let TextureTransform37 = browser.currentScene.createNode("TextureTransform");
MultiTextureTransform36YYY.textureTransform = new X3D.MFNode();

MultiTextureTransform36ZZZ.textureTransform[0] = TextureTransform37;

let TextureTransform38 = browser.currentScene.createNode("TextureTransform");
MultiTextureTransform36ZZZ.textureTransform[1] = TextureTransform38;

let TextureTransform39 = browser.currentScene.createNode("TextureTransform");
MultiTextureTransform36ZZZ.textureTransform[2] = TextureTransform39;

textureTransform = MultiTextureTransform36;

appearance = Appearance30;

browser.currentScene.children[4] = Shape24;

}
main ();
