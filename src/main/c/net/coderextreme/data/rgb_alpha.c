#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "rgb_alpha.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "Image";
meta3.content = "rgb_alpha-front.jpg";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "Image";
meta4.content = "rgb_alpha-rear.jpg";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "Image";
meta5.content = "rgb_alpha-top.jpg";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "Image";
meta6.content = "rgb_alpha-bottom.jpg";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "http://www.nist.gov/vrml.html";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "http://www.itl.nist.gov/div897/ctg/vrml/vrml.html";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "http://www.itl.nist.gov/div897/ctg/vrml/members.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "disclaimer";
meta10.content = "This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "info";
meta11.content = "Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "translator";
meta12.content = "Michael Kass NIST, Don Brutzman NPS";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "translated";
meta13.content = "21 January 2001";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "modified";
meta14.content = "16 January 2011";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "description";
meta15.content = "Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "identifier";
meta16.content = "https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "generator";
meta17.content = "Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "generator";
meta18.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[16] = meta18;

head = head1;

NavigationInfo NavigationInfo20 = createNode("NavigationInfo");
NavigationInfo20.type = new MFString(new java.lang.String["EXAMINE","WALK","FLY","ANY"]);
children = new MFNode();

children[0] = NavigationInfo20;

Group Group21 = createNode("Group");
Transform Transform22 = createNode("Transform");
Transform22.translation = new SFVec3f(new float[6.14221,0.0694613,-0.000999451]);
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Appearance24.material = Material25;

PixelTexture PixelTexture26 = createNode("PixelTexture");
PixelTexture26.DEF = "RgbOpacityCheckerboard";
PixelTexture26.image = new SFImage(new int[2,2,4,-16776961,-65536,-65536,-16776961]);
Appearance24.texture = PixelTexture26;

Shape23.appearance = Appearance24;

Box Box27 = createNode("Box");
Shape23.geometry = Box27;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

Group21.children = new MFNode();

Group21.children[0] = Transform22;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[-4.85443,0.0694381,-0.00149918]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Appearance30.material = Material31;

PixelTexture PixelTexture32 = createNode("PixelTexture");
PixelTexture32.USE = "RgbOpacityCheckerboard";
Appearance30.texture = PixelTexture32;

Shape29.appearance = Appearance30;

Sphere Sphere33 = createNode("Sphere");
Shape29.geometry = Sphere33;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

Group21.children[1] = Transform28;

Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[-1.47341,0.036672,-0.00175095]);
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Appearance36.material = Material37;

PixelTexture PixelTexture38 = createNode("PixelTexture");
PixelTexture38.USE = "RgbOpacityCheckerboard";
Appearance36.texture = PixelTexture38;

Shape35.appearance = Appearance36;

Cone Cone39 = createNode("Cone");
Shape35.geometry = Cone39;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

Group21.children[2] = Transform34;

Transform Transform40 = createNode("Transform");
Transform40.translation = new SFVec3f(new float[2.31094,0.0694206,-0.00187683]);
Shape Shape41 = createNode("Shape");
Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Appearance42.material = Material43;

PixelTexture PixelTexture44 = createNode("PixelTexture");
PixelTexture44.USE = "RgbOpacityCheckerboard";
Appearance42.texture = PixelTexture44;

Shape41.appearance = Appearance42;

Cylinder Cylinder45 = createNode("Cylinder");
Shape41.geometry = Cylinder45;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

Group21.children[3] = Transform40;

children[1] = Group21;

}
