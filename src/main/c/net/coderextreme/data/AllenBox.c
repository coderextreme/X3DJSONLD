#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "AllenBox.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Allen Box";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "8 July 2025";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "license";
meta5.content = "../license.html";
head1.meta[3] = meta5;

head = head1;

WorldInfo WorldInfo7 = createNode("WorldInfo");
WorldInfo7.title = "AllenBox.x3d";
children = new MFNode();

children[0] = WorldInfo7;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.avatarSize = new MFFloat(new float[0.15,1.53,0.75]);
NavigationInfo8.speed = 0.5;
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children[1] = NavigationInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "Floor";
Transform9.scale = new SFVec3f(new float[1,0.0125,1]);
Transform9.translation = new SFVec3f(new float[0,-0.0125,0]);
Shape Shape10 = createNode("Shape");
Box Box11 = createNode("Box");
Shape10.geometry = Box11;

Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Appearance12.material = Material13;

Shape10.appearance = Appearance12;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children[2] = Transform9;

}
