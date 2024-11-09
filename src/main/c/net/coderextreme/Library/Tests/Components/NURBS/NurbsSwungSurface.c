#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "NURBS";
component2.level = 4;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "comment";
meta3.content = "Rise and Shine";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "Tue, 15 Jan 2019 12:51:59 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrize X3D Editor V1.2.7, https://create3000.github.io/sunrize/";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSwungSurface.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Thu, 30 Nov 2023 09:28:15 GMT";
head1.meta[6] = meta8;

head = head1;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "NurbsSwungSurface";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

NurbsSwungSurface NurbsSwungSurface14 = createNode("NurbsSwungSurface");
NurbsSwungSurface14.ccw = False;
NurbsCurve2D NurbsCurve2D15 = createNode("NurbsCurve2D");
NurbsCurve2D15.tessellation = 50;
NurbsCurve2D15.closed = True;
NurbsCurve2D15.order = 4;
NurbsCurve2D15.controlPoint = new MFVec2d(new double[0,0,1,0,1,1,0,1,0,0]);
NurbsSwungSurface14.trajectoryCurve = NurbsCurve2D15;

NurbsCurve2D NurbsCurve2D16 = createNode("NurbsCurve2D");
NurbsCurve2D16.tessellation = 50;
NurbsCurve2D16.closed = True;
NurbsCurve2D16.order = 4;
NurbsCurve2D16.controlPoint = new MFVec2d(new double[0,0,1,0,1,1,0,1,0,0]);
NurbsSwungSurface14.trajectoryCurve = NurbsCurve2D16;

Shape11.geometry = NurbsSwungSurface14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

children = new MFNode();

children[0] = Transform10;

}
