#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "IFS.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "identifier";
meta3.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "h2.pl";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "18 Jan 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "creator";
meta7.content = "John Carlson";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "9 November 2020";
head1.meta[6] = meta8;

component component9 = createNode("component");
component9.name = "HAnim";
component9.level = 1;
head1.component[7] = component9;

head = head1;

Group Group11 = createNode("Group");
Transform Transform12 = createNode("Transform");
Transform12.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape13 = createNode("Shape");
Shape13.DEF = "HAnimSiteShape";
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,1,0]);
Material15.transparency = 0.3;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.DEF = "DiamondIFS";
IndexedFaceSet16.solid = False;
IndexedFaceSet16.creaseAngle = 0.5;
IndexedFaceSet16.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA17 = createNode("ColorRGBA");
ColorRGBA17.DEF = "HAnimSiteColorRGBA";
ColorRGBA17.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet16.color = ColorRGBA17;

Coordinate Coordinate18 = createNode("Coordinate");
Coordinate18.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet16.coord = Coordinate18;

Shape13.geometry = IndexedFaceSet16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

Group11.children = new MFNode();

Group11.children[0] = Transform12;

children = new MFNode();

children[0] = Group11;

NavigationInfo NavigationInfo19 = createNode("NavigationInfo");
NavigationInfo19.speed = 1.5;
children[1] = NavigationInfo19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.description = "default";
children[2] = Viewpoint20;

}
