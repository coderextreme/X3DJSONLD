#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Wed, 18 Mar 2015 03:03:10 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Wed, 18 Mar 2015 03:03:10 GMT";
head1.meta[4] = meta6;

head = head1;

Transform Transform8 = createNode("Transform");
Transform8.DEF = "Tuer_brett";
Transform8.scale = new SFVec3f(new float[0.424754,1.08903,0.0165043]);
Shape Shape9 = createNode("Shape");
Appearance Appearance10 = createNode("Appearance");
Material Material11 = createNode("Material");
Material11.ambientIntensity = 1.2234;
Material11.emissiveColor = new SFColor(new float[0.404255,0.404255,0.404255]);
Material11.shininess = 0;
Appearance10.material = Material11;

ImageTexture ImageTexture12 = createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["door1.png"]);
Appearance10.texture = ImageTexture12;

TextureTransform TextureTransform13 = createNode("TextureTransform");
TextureTransform13.scale = new SFVec2f(new float[1.4,1]);
Appearance10.textureTransform = TextureTransform13;

Shape9.appearance = Appearance10;

Box Box14 = createNode("Box");
Shape9.geometry = Box14;

Transform8.child = new undefined();

Transform8.child[0] = Shape9;

children = new MFNode();

children[0] = Transform8;

}
