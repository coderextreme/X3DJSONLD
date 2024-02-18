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

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Carlson, III";
head1.meta[3] = meta5;

head = head1;

Group Group7 = createNode("Group");
Shape Shape8 = createNode("Shape");
Appearance Appearance9 = createNode("Appearance");
Material Material10 = createNode("Material");
Material10.diffuseColor = new SFColor(new float[1,0,0]);
Appearance9.material = Material10;

Shape8.appearance = Appearance9;

Box Box11 = createNode("Box");
Shape8.geometry = Box11;

Group7.children = new MFNode();

Group7.children[0] = Shape8;

children = new MFNode();

children[0] = Group7;

Transform Transform12 = createNode("Transform");
Transform12.rotation = new SFRotation(new float[7,8,9,3.14]);
Transform12.scale = new SFVec3f(new float[4,5,6]);
Transform12.translation = new SFVec3f(new float[1,2,3]);
children[1] = Transform12;

}
