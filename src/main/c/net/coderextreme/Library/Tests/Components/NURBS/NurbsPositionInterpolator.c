#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "NURBS";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "comment";
meta3.content = "World of Titania";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "26 February 2003";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Charles Adams";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "Example of animating a ball along a NurbsCurve.";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Titania V4.3.10, http://titania.create3000.de";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsPositionInterpolator.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "license";
meta9.content = "../license.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "Wed, 16 Jan 2019 16:29:52 GMT";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://edocs.nps.edu/npspubs/scholarly/theses/2003/Jun/03Jun_Adams.pdf";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "subject";
meta12.content = "NURBS Position Interpolator";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "title";
meta13.content = "NurbsPositionInterpolatorExample.x3d";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "warning";
meta14.content = "under development, needs to be upgraded to final version of X3D NURBS nodes";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "NurbsPositionInterpolatorExample";
MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Titania";
MetadataSet17.DEF = "Titania";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "Page";
MetadataSet18.DEF = "Page";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger19 = createNode("MetadataInteger");
MetadataInteger19.name = "activeView";
MetadataInteger19.DEF = "activeView";
MetadataInteger19.reference = "http://titania.create3000.de";
MetadataInteger19.value = new MFInt32(new int[1]);
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataInteger19;

MetadataInteger MetadataInteger20 = createNode("MetadataInteger");
MetadataInteger20.name = "multiView";
MetadataInteger20.DEF = "multiView";
MetadataInteger20.reference = "http://titania.create3000.de";
MetadataInteger20.value = new MFInt32(new int[0]);
MetadataSet18.value[1] = MetadataInteger20;

MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataSet18;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "Selection";
MetadataSet21.DEF = "Selection";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean22 = createNode("MetadataBoolean");
MetadataBoolean22.name = "selectGeometry";
MetadataBoolean22.DEF = "selectGeometry";
MetadataBoolean22.reference = "http://titania.create3000.de";
MetadataBoolean22.value = new MFBool(new boolean[True]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataBoolean22;

MetadataSet MetadataSet23 = createNode("MetadataSet");
MetadataSet23.name = "nodes";
MetadataSet23.DEF = "nodes";
MetadataSet23.reference = "http://titania.create3000.de";
Shape Shape24 = createNode("Shape");
Shape24.DEF = "_1";
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.emissiveColor = new SFColor(new float[1,1,1]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

NurbsCurve NurbsCurve27 = createNode("NurbsCurve");
NurbsCurve27.DEF = "nc";
NurbsCurve27.tessellation = 30;
NurbsCurve27.order = 4;
Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.DEF = "_2";
Coordinate28.point = new MFVec3f(new float[4,6,0,7,12,0,11,6,0,15,2,0,20,6,0]);
NurbsCurve27.controlPoint = Coordinate28;

Shape24.geometry = NurbsCurve27;

MetadataSet23.value = Shape24;

MetadataSet21.value[1] = MetadataSet23;

MetadataSet17.value[1] = MetadataSet21;

WorldInfo16.metadata = MetadataSet17;

children = new MFNode();

children[0] = WorldInfo16;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.description = "NurbsPositionInterpolator path";
Viewpoint29.position = new SFVec3f(new float[11,4.6,18]);
children[1] = Viewpoint29;

TimeSensor TimeSensor30 = createNode("TimeSensor");
TimeSensor30.DEF = "ts";
TimeSensor30.cycleInterval = 4;
TimeSensor30.loop = True;
children[2] = TimeSensor30;

NurbsPositionInterpolator NurbsPositionInterpolator31 = createNode("NurbsPositionInterpolator");
NurbsPositionInterpolator31.DEF = "npi";
NurbsPositionInterpolator31.order = 4;
NurbsPositionInterpolator31.knot = new MFDouble(new double[0,0.25,0.5,0.75,1]);
Coordinate Coordinate32 = createNode("Coordinate");
Coordinate32.DEF = "_3";
Coordinate32.point = new MFVec3f(new float[4,6,0,7,12,0,11,6,0,15,2,0,20,6,0]);
NurbsPositionInterpolator31.controlPoint = Coordinate32;

children[3] = NurbsPositionInterpolator31;

NurbsOrientationInterpolator NurbsOrientationInterpolator33 = createNode("NurbsOrientationInterpolator");
NurbsOrientationInterpolator33.DEF = "_4";
NurbsOrientationInterpolator33.order = 4;
NurbsOrientationInterpolator33.knot = new MFDouble(new double[0,0.25,0.5,0.75,1]);
Coordinate Coordinate34 = createNode("Coordinate");
Coordinate34.USE = "_3";
NurbsOrientationInterpolator33.controlPoint = Coordinate34;

children[4] = NurbsOrientationInterpolator33;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "_5";
Transform35.translation = new SFVec3f(new float[12.6002,4.57153,0]);
Transform35.rotation = new SFRotation(new float[0.68202330039387,0.731330443588842,0,1.57048490427067]);
Transform Transform36 = createNode("Transform");
Transform36.DEF = "Cone";
Transform36.rotation = new SFRotation(new float[0.999999999993254,0.00000367320512848233,4.15024534058304e-19,1.5707963267949]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Material39.DEF = "Rococo28";
Material39.ambientIntensity = 0.226102;
Material39.diffuseColor = new SFColor(new float[0.279645,0.904409,0.511589]);
Material39.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material39.shininess = 0.078125;
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

Cone Cone40 = createNode("Cone");
Shape37.geometry = Cone40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Transform35.children = new MFNode();

Transform35.children[0] = Transform36;

children[5] = Transform35;

Shape Shape41 = createNode("Shape");
Shape41.USE = "_1";
children[6] = Shape41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "ts";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "npi";
ROUTE42.toField = "set_fraction";
children[7] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "npi";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "_5";
ROUTE43.toField = "set_translation";
children[8] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "ts";
ROUTE44.fromField = "fraction_changed";
ROUTE44.toNode = "_4";
ROUTE44.toField = "set_fraction";
children[9] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "_4";
ROUTE45.fromField = "value_changed";
ROUTE45.toNode = "_5";
ROUTE45.toField = "set_rotation";
children[10] = ROUTE45;

}
