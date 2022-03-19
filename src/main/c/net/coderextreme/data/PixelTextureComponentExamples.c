#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "PixelTextureComponentExamples.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Leonard Daly and Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "25 August 2008";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "7 January 2014";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "http://X3dGraphics.com";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "X3D for Web Authors, Table 5.18";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "rights";
meta10.content = "Copyright (c) 2006, Daly Realism and Don Brutzman";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "subject";
meta11.content = "X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

Background Background16 = createNode("Background");
Background16.skyColor = new MFColor(new float[0.1,0.1,0.4]);
children = new MFNode();

children[0] = Background16;

Viewpoint Viewpoint17 = createNode("Viewpoint");
Viewpoint17.description = "Table 5.18 SFImage component examples";
Viewpoint17.position = new SFVec3f(new float[0,0,14]);
children[1] = Viewpoint17;

Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[-6,0,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
PixelTexture PixelTexture21 = createNode("PixelTexture");
PixelTexture21.DEF = "ZeroComponents";
Appearance20.texture = PixelTexture21;

Shape19.appearance = Appearance20;

Box Box22 = createNode("Box");
Shape19.geometry = Box22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape24 = createNode("Shape");
Text Text25 = createNode("Text");
Text25.string = new MFString(new java.lang.String["0"]);
FontStyle FontStyle26 = createNode("FontStyle");
FontStyle26.DEF = "CenterJustify";
FontStyle26.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text25.fontStyle = FontStyle26;

Shape24.geometry = Text25;

Appearance Appearance27 = createNode("Appearance");
Appearance27.DEF = "TextMaterial";
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,1,1]);
Appearance27.material = Material28;

Shape24.appearance = Appearance27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Transform18.children[1] = Transform23;

children[2] = Transform18;

Transform Transform29 = createNode("Transform");
Transform29.translation = new SFVec3f(new float[-3,0,0]);
Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
PixelTexture PixelTexture32 = createNode("PixelTexture");
PixelTexture32.DEF = "OneComponent";
PixelTexture32.image = new SFImage(new int[1,2,1,255,0]);
Appearance31.texture = PixelTexture32;

Shape30.appearance = Appearance31;

Box Box33 = createNode("Box");
Shape30.geometry = Box33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape35 = createNode("Shape");
Text Text36 = createNode("Text");
Text36.string = new MFString(new java.lang.String["1"]);
FontStyle FontStyle37 = createNode("FontStyle");
FontStyle37.USE = "CenterJustify";
Text36.fontStyle = FontStyle37;

Shape35.geometry = Text36;

Appearance Appearance38 = createNode("Appearance");
Appearance38.USE = "TextMaterial";
Shape35.appearance = Appearance38;

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

Transform29.children[1] = Transform34;

children[3] = Transform29;

Transform Transform39 = createNode("Transform");
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
PixelTexture PixelTexture42 = createNode("PixelTexture");
PixelTexture42.DEF = "TwoComponents";
PixelTexture42.image = new SFImage(new int[2,1,2,52479,8823]);
Appearance41.texture = PixelTexture42;

Shape40.appearance = Appearance41;

Box Box43 = createNode("Box");
Shape40.geometry = Box43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform Transform44 = createNode("Transform");
Transform44.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape45 = createNode("Shape");
Text Text46 = createNode("Text");
Text46.string = new MFString(new java.lang.String["2"]);
FontStyle FontStyle47 = createNode("FontStyle");
FontStyle47.USE = "CenterJustify";
Text46.fontStyle = FontStyle47;

Shape45.geometry = Text46;

Appearance Appearance48 = createNode("Appearance");
Appearance48.USE = "TextMaterial";
Shape45.appearance = Appearance48;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

Transform39.children[1] = Transform44;

children[4] = Transform39;

Transform Transform49 = createNode("Transform");
Transform49.translation = new SFVec3f(new float[3,0,0]);
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
//note 0x000000 = 0
PixelTexture PixelTexture52 = createNode("PixelTexture");
PixelTexture52.DEF = "ThreeComponents";
PixelTexture52.image = new SFImage(new int[2,4,3,16711680,65280,0,0,0,0,16777215,16776960]);
Appearance51.texture = PixelTexture52;

Shape50.appearance = Appearance51;

Box Box53 = createNode("Box");
Shape50.geometry = Box53;

Transform49.children = new MFNode();

Transform49.children[0] = Shape50;

Transform Transform54 = createNode("Transform");
Transform54.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape55 = createNode("Shape");
Text Text56 = createNode("Text");
Text56.string = new MFString(new java.lang.String["3"]);
FontStyle FontStyle57 = createNode("FontStyle");
FontStyle57.USE = "CenterJustify";
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

Appearance Appearance58 = createNode("Appearance");
Appearance58.USE = "TextMaterial";
Shape55.appearance = Appearance58;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

Transform49.children[1] = Transform54;

children[5] = Transform49;

Transform Transform59 = createNode("Transform");
Transform59.translation = new SFVec3f(new float[6,0,0]);
Shape Shape60 = createNode("Shape");
Appearance Appearance61 = createNode("Appearance");
//Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127
PixelTexture PixelTexture62 = createNode("PixelTexture");
PixelTexture62.DEF = "FourComponents";
PixelTexture62.image = new SFImage(new int[3,2,4,-16776961,16711935,65535,-16777089,16711807,65407]);
Appearance61.texture = PixelTexture62;

Shape60.appearance = Appearance61;

Box Box63 = createNode("Box");
Shape60.geometry = Box63;

Transform59.children = new MFNode();

Transform59.children[0] = Shape60;

Transform Transform64 = createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape65 = createNode("Shape");
Text Text66 = createNode("Text");
Text66.string = new MFString(new java.lang.String["4"]);
FontStyle FontStyle67 = createNode("FontStyle");
FontStyle67.USE = "CenterJustify";
Text66.fontStyle = FontStyle67;

Shape65.geometry = Text66;

Appearance Appearance68 = createNode("Appearance");
Appearance68.USE = "TextMaterial";
Shape65.appearance = Appearance68;

Transform64.children = new MFNode();

Transform64.children[0] = Shape65;

Transform59.children[1] = Transform64;

children[6] = Transform59;

//Background from PixelTextureBW.x3d
Transform Transform69 = createNode("Transform");
Transform69.translation = new SFVec3f(new float[0,6,-2]);
Shape Shape70 = createNode("Shape");
Appearance Appearance71 = createNode("Appearance");
PixelTexture PixelTexture72 = createNode("PixelTexture");
PixelTexture72.image = new SFImage(new int[8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204]);
Appearance71.texture = PixelTexture72;

Shape70.appearance = Appearance71;

Box Box73 = createNode("Box");
Box73.size = new SFVec3f(new float[16,16,0.1]);
Shape70.geometry = Box73;

Transform69.children = new MFNode();

Transform69.children[0] = Shape70;

children[7] = Transform69;

}
