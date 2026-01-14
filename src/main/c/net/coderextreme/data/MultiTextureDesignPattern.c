#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "MultiTextureDesignPattern.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "5 March 2011";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "29 October 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "TODO";
meta7.content = "X3D schematron rules for quality assurance";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "Image";
meta8.content = "MultiTextureDesignPatternSceneGraph.png";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "subject";
meta9.content = "MultiTexture, MultiTextureCoordinate, MultiTextureTransform";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

//================================
WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "MultiTextureDesignPattern.x3d";
children = new MFNode();

children[0] = WorldInfo16;

Background Background17 = createNode("Background");
Background17.skyColor = new MFColor(new float[0.72549,1,0.721569]);
children[1] = Background17;

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.description = "MultiTexture design pattern";
children[2] = Viewpoint18;

Shape Shape19 = createNode("Shape");
Text Text20 = createNode("Text");
Text20.string = new MFString(new java.lang.String["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"]);
FontStyle FontStyle21 = createNode("FontStyle");
FontStyle21.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle21.size = 0.6;
Text20.fontStyle = FontStyle21;

Shape19.geometry = Text20;

Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.diffuseColor = new SFColor(new float[0.2,0.4,0.8]);
Appearance22.material = Material23;

Shape19.appearance = Appearance22;

children[3] = Shape19;

//================================
Shape Shape24 = createNode("Shape");
//add a single geometry node here
IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
MultiTextureCoordinate MultiTextureCoordinate26 = createNode("MultiTextureCoordinate");
//add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes
TextureCoordinate TextureCoordinate27 = createNode("TextureCoordinate");
TextureCoordinate27.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
MultiTextureCoordinate26.texCoord = new MFNode();

MultiTextureCoordinate26.texCoord[0] = TextureCoordinate27;

TextureCoordinate TextureCoordinate28 = createNode("TextureCoordinate");
TextureCoordinate28.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
MultiTextureCoordinate26.texCoord[1] = TextureCoordinate28;

TextureCoordinate TextureCoordinate29 = createNode("TextureCoordinate");
TextureCoordinate29.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
MultiTextureCoordinate26.texCoord[2] = TextureCoordinate29;

IndexedFaceSet25.texCoord = MultiTextureCoordinate26;

Shape24.geometry = IndexedFaceSet25;

Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Appearance30.material = Material31;

MultiTexture MultiTexture32 = createNode("MultiTexture");
MultiTexture32.alpha = 0.8;
MultiTexture32.color = new SFColor(new float[0.9,1,0.2]);
MultiTexture32.function = new MFString(new java.lang.String["COMPLEMENT","ALPHAREPLICATE"]);
MultiTexture32.mode = new MFString(new java.lang.String["MODULATE","REPLACE","BLENDDIFFUSEALPHA"]);
MultiTexture32.source = new MFString(new java.lang.String["DIFFUSE","SPECULAR","FACTOR"]);
//add multiple texture nodes here
ImageTexture ImageTexture33 = createNode("ImageTexture");
MultiTexture32.texture = new MFNode();

MultiTexture32.texture[0] = ImageTexture33;

MovieTexture MovieTexture34 = createNode("MovieTexture");
MultiTexture32.texture[1] = MovieTexture34;

PixelTexture PixelTexture35 = createNode("PixelTexture");
MultiTexture32.texture[2] = PixelTexture35;

Appearance30.texture = MultiTexture32;

MultiTextureTransform MultiTextureTransform36 = createNode("MultiTextureTransform");
//add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes
TextureTransform TextureTransform37 = createNode("TextureTransform");
MultiTextureTransform36.textureTransform = new MFNode();

MultiTextureTransform36.textureTransform[0] = TextureTransform37;

TextureTransform TextureTransform38 = createNode("TextureTransform");
MultiTextureTransform36.textureTransform[1] = TextureTransform38;

TextureTransform TextureTransform39 = createNode("TextureTransform");
MultiTextureTransform36.textureTransform[2] = TextureTransform39;

Appearance30.textureTransform = MultiTextureTransform36;

Shape24.appearance = Appearance30;

children[4] = Shape24;

}
