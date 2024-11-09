#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Sunrise X3D Editor";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Mon, 13 Apr 2015 02:16:11 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Sunrise X3D Editor V1.0.4, https://create3000.github.io/sunrise/";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 28 Oct 2022 13:27:25 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "file:///Volumes/Home/Projekte/Library/Tests/Components/Interpolation/NormalInterpolator.x3d";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "NormalInterpolator";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "AngleGrid";
MetadataBoolean MetadataBoolean12 = createNode("MetadataBoolean");
MetadataBoolean12.name = "enabled";
MetadataBoolean12.value = new MFBool(new boolean[True]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataBoolean12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Grid";
MetadataBoolean MetadataBoolean14 = createNode("MetadataBoolean");
MetadataBoolean14.name = "enabled";
MetadataBoolean14.value = new MFBool(new boolean[False]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataBoolean14;

MetadataSet10.value[1] = MetadataSet13;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

TimeSensor TimeSensor15 = createNode("TimeSensor");
TimeSensor15.DEF = "_1";
TimeSensor15.cycleInterval = 10;
TimeSensor15.loop = True;
children[1] = TimeSensor15;

NormalInterpolator NormalInterpolator16 = createNode("NormalInterpolator");
NormalInterpolator16.DEF = "_2";
NormalInterpolator16.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
NormalInterpolator16.keyValue = new MFVec3f(new float[1,0,0,0,1,0,-1,0,0,0,-1,0,0,1,0,-1,0,0,0,-1,0,1,0,0,-1,0,0,0,-1,0,1,0,0,0,1,0,0,-1,0,1,0,0,0,1,0,-1,0,0,1,0,0,0,1,0,-1,0,0,0,-1,0]);
children[2] = NormalInterpolator16;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "PointSet_1";
Transform17.scale = new SFVec3f(new float[3,3,3]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
PointProperties PointProperties20 = createNode("PointProperties");
PointProperties20.pointSizeScaleFactor = 20;
PointProperties20.pointSizeMinValue = 20;
PointProperties20.pointSizeMaxValue = 20;
Appearance19.pointProperties = PointProperties20;

Material Material21 = createNode("Material");
Material21.emissiveColor = new SFColor(new float[1,0,0]);
Appearance19.material = Material21;

Shape18.appearance = Appearance19;

PointSet PointSet22 = createNode("PointSet");
Coordinate Coordinate23 = createNode("Coordinate");
Coordinate23.DEF = "_3";
Coordinate23.point = new MFVec3f(new float[-0.983304,-0.181969,0,0.181969,-0.983304,0,0.983304,0.181969,0,-0.181969,0.983304,0]);
PointSet22.coord = Coordinate23;

Shape18.geometry = PointSet22;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

children[3] = Transform17;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "_1";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "_2";
ROUTE24.toField = "set_fraction";
children[4] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "_2";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "_3";
ROUTE25.toField = "set_point";
children[5] = ROUTE25;

}
