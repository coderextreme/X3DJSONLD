#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ThreeInARow.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/ThreeInARow.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "3 boxes";
head1.meta[4] = meta6;

head = head1;

NavigationInfo NavigationInfo8 = createNode("NavigationInfo");
NavigationInfo8.type = new MFString(new java.lang.String["EXAMINE"]);
children = new MFNode();

children[0] = NavigationInfo8;

Viewpoint Viewpoint9 = createNode("Viewpoint");
Viewpoint9.description = "Cubes";
Viewpoint9.position = new SFVec3f(new float[0,0,12]);
children[1] = Viewpoint9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "first";
Transform10.translation = new SFVec3f(new float[0,2,0]);
Shape Shape11 = createNode("Shape");
Shape11.DEF = "ball";
Sphere Sphere12 = createNode("Sphere");
Shape11.geometry = Sphere12;

Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,1,1]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

children[2] = Transform10;

Transform Transform15 = createNode("Transform");
Shape Shape16 = createNode("Shape");
Shape16.USE = "ball";
Transform15.child = new undefined();

Transform15.child[0] = Shape16;

children[3] = Transform15;

Transform Transform17 = createNode("Transform");
Transform17.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape18 = createNode("Shape");
Shape18.USE = "ball";
Transform17.child = new undefined();

Transform17.child[0] = Shape18;

children[4] = Transform17;

}
