#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Table5_18PixelTexture";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "PixelTexture example for Table 5.18";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Leonard Daly and Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "18 December 2006";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "2 April 2017";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "http://X3dGraphics.com";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "rights";
meta9.content = "Copyright 2006, Daly Realism and Don Brutzman";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "subject";
meta10.content = "X3D, PixelTexture";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "identifier";
meta11.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/Table5_18PixelTexture";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "license";
meta13.content = "../license.html";
head1.meta[11] = meta13;

head = head1;

Background Background15 = createNode("Background");
Background15.skyColor = new MFColor(new float[0,0,1]);
children = new MFNode();

children[0] = Background15;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "Checkerboard";
Transform16.translation = new SFVec3f(new float[0,0,-10]);
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
TextureTransform TextureTransform19 = createNode("TextureTransform");
TextureTransform19.scale = new SFVec2f(new float[500,500]);
Appearance18.textureTransform = TextureTransform19;

PixelTexture PixelTexture20 = createNode("PixelTexture");
PixelTexture20.image = new SFImage(new int[2,2,3,15119869,16767927,16767927,15119869]);
Appearance18.texture = PixelTexture20;

Shape17.appearance = Appearance18;

Box Box21 = createNode("Box");
Box21.size = new SFVec3f(new float[1000,1000,0.01]);
Shape17.geometry = Box21;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

children[1] = Transform16;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.description = "View All";
Viewpoint22.position = new SFVec3f(new float[0,0,20]);
children[2] = Viewpoint22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.description = "Empty Image";
Viewpoint23.position = new SFVec3f(new float[0,5,5]);
children[3] = Viewpoint23;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "EmptyImage";
Transform24.rotation = new SFRotation(new float[1,1,0,1]);
Transform24.translation = new SFVec3f(new float[0,5,0]);
Shape Shape25 = createNode("Shape");
Appearance Appearance26 = createNode("Appearance");
PixelTexture PixelTexture27 = createNode("PixelTexture");
Appearance26.texture = PixelTexture27;

Shape25.appearance = Appearance26;

Box Box28 = createNode("Box");
Box28.DEF = "StandardBox";
Shape25.geometry = Box28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

children[4] = Transform24;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.description = "Black and white PixelTexture";
Viewpoint29.position = new SFVec3f(new float[-5,0,5]);
children[5] = Viewpoint29;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "BW";
Transform30.rotation = new SFRotation(new float[1,1,0,1]);
Transform30.translation = new SFVec3f(new float[-5,0,0]);
Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
PixelTexture PixelTexture33 = createNode("PixelTexture");
PixelTexture33.image = new SFImage(new int[1,2,1,255,0]);
Appearance32.texture = PixelTexture33;

Shape31.appearance = Appearance32;

Box Box34 = createNode("Box");
Box34.USE = "StandardBox";
Shape31.geometry = Box34;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

children[6] = Transform30;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.description = "Black and white with Alpha PixelTexture";
Viewpoint35.position = new SFVec3f(new float[5,0,5]);
children[7] = Viewpoint35;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "AlphaBW";
Transform36.rotation = new SFRotation(new float[1,1,0,1]);
Transform36.translation = new SFVec3f(new float[5,0,0]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
PixelTexture PixelTexture39 = createNode("PixelTexture");
PixelTexture39.image = new SFImage(new int[2,1,2,52479,8823]);
Appearance38.texture = PixelTexture39;

Shape37.appearance = Appearance38;

Box Box40 = createNode("Box");
Box40.USE = "StandardBox";
Shape37.geometry = Box40;

Transform36.children = new MFNode();

Transform36.children[0] = Shape37;

children[8] = Transform36;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "RGB PixelTexture";
Viewpoint41.position = new SFVec3f(new float[-5,-5,5]);
children[9] = Viewpoint41;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "RGB";
Transform42.rotation = new SFRotation(new float[1,1,0,1]);
Transform42.translation = new SFVec3f(new float[-5,-5,0]);
Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
PixelTexture PixelTexture45 = createNode("PixelTexture");
PixelTexture45.image = new SFImage(new int[2,4,3,16711680,65280,0,0,0,0,16777215,16776960]);
Appearance44.texture = PixelTexture45;

Shape43.appearance = Appearance44;

Box Box46 = createNode("Box");
Box46.USE = "StandardBox";
Shape43.geometry = Box46;

Transform42.children = new MFNode();

Transform42.children[0] = Shape43;

children[10] = Transform42;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.description = "RGB with Alpha PixelTexture";
Viewpoint47.position = new SFVec3f(new float[5,-5,5]);
children[11] = Viewpoint47;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "AlphaRGB";
Transform48.rotation = new SFRotation(new float[1,1,0,1]);
Transform48.translation = new SFVec3f(new float[5,-5,0]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
PixelTexture PixelTexture51 = createNode("PixelTexture");
PixelTexture51.image = new SFImage(new int[3,2,4,-16776961,16711935,65535,-16777089,16711807,65407]);
Appearance50.texture = PixelTexture51;

Shape49.appearance = Appearance50;

Box Box52 = createNode("Box");
Box52.USE = "StandardBox";
Shape49.geometry = Box52;

Transform48.children = new MFNode();

Transform48.children[0] = Shape49;

children[12] = Transform48;

}
