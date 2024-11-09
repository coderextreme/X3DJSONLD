#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "created";
meta2.content = "Sun, 29 Jan 2023 22:00:06 GMT";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "comment";
meta3.content = "Rise and Shine";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Sunrise X3D Editor V1.0.8, https://create3000.github.io/sunrise/";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///Volumes/Home/Projekte/Library/Tests/Components/Networking/BoxWithLight.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sun, 29 Jan 2023 23:15:27 GMT";
head1.meta[5] = meta7;

head = head1;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "Box";
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
Material Material12 = createNode("Material");
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

Box Box13 = createNode("Box");
Shape10.geometry = Box13;

Transform9.child = new undefined();

Transform9.child[0] = Shape10;

children = new MFNode();

children[0] = Transform9;

Transform Transform14 = createNode("Transform");
Transform14.DEF = "Plane";
Transform14.scale = new SFVec3f(new float[2,0.1,2]);
Shape Shape15 = createNode("Shape");
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

Box Box18 = createNode("Box");
Shape15.geometry = Box18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

children[1] = Transform14;

SpotLight SpotLight19 = createNode("SpotLight");
SpotLight19.location = new SFVec3f(new float[4,4,0]);
SpotLight19.direction = new SFVec3f(new float[-1,-1,0]);
SpotLight19.beamWidth = 0.3;
SpotLight19.cutOffAngle = 0.6;
SpotLight19.shadows = True;
children[2] = SpotLight19;

}
