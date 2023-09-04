#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "app.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Carlson, I";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Carlson, II";
head1.meta[2] = meta4;

head = head1;

Group Group6 = createNode("Group");
Shape Shape7 = createNode("Shape");
Appearance Appearance8 = createNode("Appearance");
Material Material9 = createNode("Material");
Material9.diffuseColor = new SFColor(new float[1,0,0]);
Appearance8.material = Material9;

Shape7.appearance = Appearance8;

Box Box10 = createNode("Box");
Shape7.geometry = Box10;

Group6.children = new MFNode();

Group6.children[0] = Shape7;

children = new MFNode();

children[0] = Group6;

Transform Transform11 = createNode("Transform");
Transform11.translation = new SFVec3f(new float[1,2,3]);
Transform11.rotation = new SFRotation(new float[7,8,9,3.14]);
Transform11.scale = new SFVec3f(new float[4,5,6]);
children[1] = Transform11;

}
