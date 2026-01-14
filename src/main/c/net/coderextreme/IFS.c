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
meta3.content = "IFS.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "description";
meta5.content = "An attempt at a standard LOA-4 skeleton";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "h2.pl";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "18 Jan 2023";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "creator";
meta8.content = "John Carlson";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "9 November 2020";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "license";
meta10.content = "../license.html";
head1.meta[8] = meta10;

head = head1;

Group Group12 = createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
Transform Transform13 = createNode("Transform");
Transform13.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape14 = createNode("Shape");
Shape14.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet15 = createNode("IndexedFaceSet");
IndexedFaceSet15.DEF = "DiamondIFS";
IndexedFaceSet15.creaseAngle = 0.5;
IndexedFaceSet15.solid = False;
IndexedFaceSet15.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA16 = createNode("ColorRGBA");
ColorRGBA16.DEF = "HAnimSiteColorRGBA";
ColorRGBA16.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet15.color = ColorRGBA16;

Coordinate Coordinate17 = createNode("Coordinate");
Coordinate17.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet15.coord = Coordinate17;

Shape14.geometry = IndexedFaceSet15;

Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.diffuseColor = new SFColor(new float[1,1,0]);
Material19.transparency = 0.3;
Appearance18.material = Material19;

Shape14.appearance = Appearance18;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Group12.children = new MFNode();

Group12.children[0] = Transform13;

children = new MFNode();

children[0] = Group12;

NavigationInfo NavigationInfo20 = createNode("NavigationInfo");
NavigationInfo20.speed = 1.5;
children[1] = NavigationInfo20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.description = "default";
children[2] = Viewpoint21;

}
