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
meta4.content = "Tue, 15 Jan 2019 11:27:45 GMT";
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
meta7.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSweptSurface.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Thu, 30 Nov 2023 09:28:07 GMT";
head1.meta[6] = meta8;

head = head1;

Background Background10 = createNode("Background");
Background10.DEF = "Gray";
Background10.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children = new MFNode();

children[0] = Background10;

Viewpoint Viewpoint11 = createNode("Viewpoint");
Viewpoint11.position = new SFVec3f(new float[3.9086,-1,8.05518]);
Viewpoint11.centerOfRotation = new SFVec3f(new float[3.9086,-1,0]);
children[1] = Viewpoint11;

Transform Transform12 = createNode("Transform");
Transform12.DEF = "NurbsSweptSurface";
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.DEF = "Rococo2";
Material15.ambientIntensity = 0.216064;
Material15.diffuseColor = new SFColor(new float[0.864256,0.833788,0.330482]);
Material15.specularColor = new SFColor(new float[0.0955906,0.0940254,0.0681705]);
Material15.shininess = 0.078125;
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

NurbsSweptSurface NurbsSweptSurface16 = createNode("NurbsSweptSurface");
NurbsSweptSurface16.ccw = False;
NurbsCurve2D NurbsCurve2D17 = createNode("NurbsCurve2D");
NurbsCurve2D17.tessellation = 20;
NurbsCurve2D17.closed = True;
NurbsCurve2D17.controlPoint = new MFVec2d(new double[-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5]);
NurbsSweptSurface16.crossSectionCurve = NurbsCurve2D17;

NurbsCurve NurbsCurve18 = createNode("NurbsCurve");
NurbsCurve18.DEF = "_3";
NurbsCurve18.tessellation = 40;
Coordinate Coordinate19 = createNode("Coordinate");
Coordinate19.DEF = "_4";
Coordinate19.point = new MFVec3f(new float[0,0,0,1,-0.4216,0,3,0.4216,0,5,-0.4216,0,7,0.4216,0,8,0,0]);
NurbsCurve18.controlPoint = Coordinate19;

NurbsSweptSurface16.trajectoryCurve = NurbsCurve18;

Shape13.geometry = NurbsSweptSurface16;

Transform12.child = new undefined();

Transform12.child[0] = Shape13;

children[2] = Transform12;

Transform Transform20 = createNode("Transform");
Transform20.DEF = "NurbsSweptSurface_1";
Transform20.translation = new SFVec3f(new float[0,-2,0]);
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
Material Material23 = createNode("Material");
Material23.DEF = "Rococo16";
Material23.ambientIntensity = 0.226102;
Material23.diffuseColor = new SFColor(new float[0.894461,0.382776,0.904409]);
Material23.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material23.shininess = 0.078125;
Appearance22.material = Material23;

Shape21.appearance = Appearance22;

NurbsSweptSurface NurbsSweptSurface24 = createNode("NurbsSweptSurface");
NurbsSweptSurface24.solid = False;
NurbsSweptSurface24.ccw = False;
ContourPolyline2D ContourPolyline2D25 = createNode("ContourPolyline2D");
ContourPolyline2D25.controlPoint = new MFVec2d(new double[-0.5,0,0.5,0]);
NurbsSweptSurface24.crossSectionCurve = ContourPolyline2D25;

NurbsCurve NurbsCurve26 = createNode("NurbsCurve");
NurbsCurve26.USE = "_3";
NurbsSweptSurface24.trajectoryCurve = NurbsCurve26;

Shape21.geometry = NurbsSweptSurface24;

Transform20.child = new undefined();

Transform20.child[0] = Shape21;

children[3] = Transform20;

TimeSensor TimeSensor27 = createNode("TimeSensor");
TimeSensor27.DEF = "_17";
TimeSensor27.cycleInterval = 10;
TimeSensor27.loop = True;
children[4] = TimeSensor27;

CoordinateInterpolator CoordinateInterpolator28 = createNode("CoordinateInterpolator");
CoordinateInterpolator28.DEF = "_18";
CoordinateInterpolator28.key = new MFFloat(new float[0,0.5,1]);
CoordinateInterpolator28.keyValue = new MFVec3f(new float[0,0,0,1,1,0,3,-1,0,5,1,0,7,-1,0,8,0,0,0,0,0,1,-1,0,3,1,0,5,-1,0,7,1,0,8,0,0,0,0,0,1,1,0,3,-1,0,5,1,0,7,-1,0,8,0,0]);
children[5] = CoordinateInterpolator28;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromNode = "_18";
ROUTE29.fromField = "value_changed";
ROUTE29.toNode = "_4";
ROUTE29.toField = "set_point";
children[6] = ROUTE29;

ROUTE ROUTE30 = createNode("ROUTE");
ROUTE30.fromNode = "_17";
ROUTE30.fromField = "fraction_changed";
ROUTE30.toNode = "_18";
ROUTE30.toField = "set_fraction";
children[7] = ROUTE30;

}
