#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Scripting";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "asphere.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "John Carlson";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "manual";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "https://coderextreme.net/X3DJSONLD/src/main/data/asphere.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "a sphere";
head1.meta[5] = meta7;

head = head1;

Group Group9 = createNode("Group");
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
Material Material12 = createNode("Material");
Material12.diffuseColor = new SFColor(new float[1,1,1]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

Sphere Sphere13 = createNode("Sphere");
Shape10.geometry = Sphere13;

Group9.children = new MFNode();

Group9.children[0] = Shape10;

children = new MFNode();

children[0] = Group9;

}
