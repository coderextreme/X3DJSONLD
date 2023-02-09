#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "H-Anim";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "JohnBoy.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "identifier";
meta4.content = "http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d";
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

Transform Transform11 = createNode("Transform");
//DEF for markerfor XYZ axes
Shape Shape12 = createNode("Shape");
Shape12.DEF = "AxisLinesShape";
//RGB lines showing XYZ axes
IndexedLineSet IndexedLineSet13 = createNode("IndexedLineSet");
IndexedLineSet13.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet13.colorPerVertex = False;
IndexedLineSet13.coordIndex = new MFInt32(new int[0,1,-1,0,2,-1,0,3,-1]);
Coordinate Coordinate14 = createNode("Coordinate");
Coordinate14.point = new MFVec3f(new float[0,0,0,0.1,0,0,0,0.1,0,0,0,0.1]);
IndexedLineSet13.coord = Coordinate14;

Color Color15 = createNode("Color");
Color15.color = new MFColor(new float[1,0,0,0,0.6,0,0,0,1]);
IndexedLineSet13.color = Color15;

Shape12.geometry = IndexedLineSet13;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

children = new MFNode();

children[0] = Transform11;

Group Group16 = createNode("Group");
//DEFS for markers of skeleton joints, segments, and sites
Transform Transform17 = createNode("Transform");
Transform Transform18 = createNode("Transform");
Transform18.translation = new SFVec3f(new float[0,2,0]);
Shape Shape19 = createNode("Shape");
Shape19.DEF = "HAnimRootShape";
Sphere Sphere20 = createNode("Sphere");
Sphere20.radius = 0.02;
Shape19.geometry = Sphere20;

Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.DEF = "HAnimRootMaterial";
Material22.diffuseColor = new SFColor(new float[0.8,0,0]);
Material22.transparency = 0.3;
Appearance21.material = Material22;

Shape19.appearance = Appearance21;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

Transform17.children = new MFNode();

Transform17.children[0] = Transform18;

Transform Transform23 = createNode("Transform");
Transform23.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape24 = createNode("Shape");
Shape24.DEF = "HAnimJointShape";
Sphere Sphere25 = createNode("Sphere");
Sphere25.radius = 0.02;
Shape24.geometry = Sphere25;

Appearance Appearance26 = createNode("Appearance");
Material Material27 = createNode("Material");
Material27.DEF = "HAnimJointMaterial";
Material27.diffuseColor = new SFColor(new float[0,0,0.8]);
Material27.transparency = 0.3;
Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Transform17.children[1] = Transform23;

Transform Transform28 = createNode("Transform");
Transform28.translation = new SFVec3f(new float[0,2.05,0]);
Shape Shape29 = createNode("Shape");
Shape29.DEF = "HAnimSegmentLine";
LineSet LineSet30 = createNode("LineSet");
LineSet30.vertexCount = new MFInt32(new int[2]);
ColorRGBA ColorRGBA31 = createNode("ColorRGBA");
ColorRGBA31.DEF = "HAnimSegmentLineColorRGBA";
ColorRGBA31.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
LineSet30.color = ColorRGBA31;

Coordinate Coordinate32 = createNode("Coordinate");
Coordinate32.point = new MFVec3f(new float[-0.05,0,0,0.05,0,0]);
LineSet30.coord = Coordinate32;

Shape29.geometry = LineSet30;

Transform28.children = new MFNode();

Transform28.children[0] = Shape29;

Transform17.children[2] = Transform28;

Transform Transform33 = createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,2.1,0]);
Shape Shape34 = createNode("Shape");
Shape34.DEF = "HAnimSiteShape";
IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.DEF = "DiamondIFS";
IndexedFaceSet35.creaseAngle = 0.5;
IndexedFaceSet35.solid = False;
IndexedFaceSet35.coordIndex = new MFInt32(new int[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]);
ColorRGBA ColorRGBA36 = createNode("ColorRGBA");
ColorRGBA36.DEF = "HAnimSiteColorRGBA";
ColorRGBA36.color = new MFColorRGBA(new float[1,1,0,1,1,1,0,0.1]);
IndexedFaceSet35.color = ColorRGBA36;

Coordinate Coordinate37 = createNode("Coordinate");
Coordinate37.point = new MFVec3f(new float[0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0]);
IndexedFaceSet35.coord = Coordinate37;

Shape34.geometry = IndexedFaceSet35;

Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.diffuseColor = new SFColor(new float[1,1,0]);
Material39.transparency = 0.3;
Appearance38.material = Material39;

Shape34.appearance = Appearance38;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Transform17.children[3] = Transform33;

Group16.children = new MFNode();

Group16.children[0] = Transform17;

children[1] = Group16;

NavigationInfo NavigationInfo40 = createNode("NavigationInfo");
NavigationInfo40.speed = 1.5;
children[2] = NavigationInfo40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "default";
children[3] = Viewpoint41;

}
