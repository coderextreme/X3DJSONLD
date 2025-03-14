#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "HAnim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "skeleton.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/skeleton.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "h.pl";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "12 June 2020";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

head = head1;

NavigationInfo NavigationInfo11 = createNode("NavigationInfo");
NavigationInfo11.speed = 1.5;
children = new MFNode();

children[0] = NavigationInfo11;

Viewpoint Viewpoint12 = createNode("Viewpoint");
Viewpoint12.centerOfRotation = new SFVec3f(new float[0,1,0]);
Viewpoint12.description = "skeleton";
Viewpoint12.position = new SFVec3f(new float[0,1,3]);
children[1] = Viewpoint12;

}
