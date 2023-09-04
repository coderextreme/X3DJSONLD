#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "sphere.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/sphere.x3d";
head1.meta[3] = meta5;

component component6 = createNode("component");
component6.name = "Scripting";
component6.level = 1;
head1.component[4] = component6;

head = head1;

Group Group8 = createNode("Group");
Shape Shape9 = createNode("Shape");
Appearance Appearance10 = createNode("Appearance");
Material Material11 = createNode("Material");
Material11.diffuseColor = new SFColor(new float[1,1,1]);
Appearance10.material = Material11;

Shape9.appearance = Appearance10;

Sphere Sphere12 = createNode("Sphere");
Shape9.geometry = Sphere12;

Group8.children = new MFNode();

Group8.children[0] = Shape9;

children = new MFNode();

children[0] = Group8;

}
