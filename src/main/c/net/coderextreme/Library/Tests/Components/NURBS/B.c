#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Tue, 15 Jan 2019 13:46:11 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.3.9, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/B.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Tue, 15 Jan 2019 16:39:19 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "AngleGrid";
MetadataSet11.DEF = "AngleGrid";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean12 = createNode("MetadataBoolean");
MetadataBoolean12.name = "enabled";
MetadataBoolean12.DEF = "enabled";
MetadataBoolean12.reference = "http://titania.create3000.de";
MetadataBoolean12.value = new MFBool(new boolean[False]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataBoolean12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Grid";
MetadataSet13.DEF = "Grid";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean14 = createNode("MetadataBoolean");
MetadataBoolean14.name = "enabled";
MetadataBoolean14.DEF = "enabled_1";
MetadataBoolean14.reference = "http://titania.create3000.de";
MetadataBoolean14.value = new MFBool(new boolean[True]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataBoolean14;

MetadataSet10.value[1] = MetadataSet13;

MetadataSet MetadataSet15 = createNode("MetadataSet");
MetadataSet15.name = "Selection";
MetadataSet15.DEF = "Selection";
MetadataSet15.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean16 = createNode("MetadataBoolean");
MetadataBoolean16.name = "selectGeometry";
MetadataBoolean16.DEF = "selectGeometry";
MetadataBoolean16.reference = "http://titania.create3000.de";
MetadataBoolean16.value = new MFBool(new boolean[True]);
MetadataSet15.value = new MFNode();

MetadataSet15.value[0] = MetadataBoolean16;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "nodes";
MetadataSet17.DEF = "nodes";
MetadataSet17.reference = "http://titania.create3000.de";
Transform Transform18 = createNode("Transform");
Transform18.DEF = "B";
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.DEF = "Rococo2";
Material21.ambientIntensity = 0.216064;
Material21.diffuseColor = new SFColor(new float[0.864256,0.833788,0.330482]);
Material21.specularColor = new SFColor(new float[0.0955906,0.0940254,0.0681705]);
Material21.shininess = 0.078125;
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

NurbsSweptSurface NurbsSweptSurface22 = createNode("NurbsSweptSurface");
NurbsSweptSurface22.ccw = False;
NurbsCurve2D NurbsCurve2D23 = createNode("NurbsCurve2D");
NurbsCurve2D23.tessellation = 40;
NurbsCurve2D23.closed = True;
NurbsCurve2D23.controlPoint = new MFVec2d(new double[-0.5,-0.5,0.5,-0.5,0.5,0.5,-0.5,0.5,-0.5,-0.5]);
NurbsSweptSurface22.crossSectionCurve = NurbsCurve2D23;

NurbsCurve NurbsCurve24 = createNode("NurbsCurve");
NurbsCurve24.closed = True;
NurbsCurve24.tessellation = 120;
NurbsCurve24.order = 4;
CoordinateDouble CoordinateDouble25 = createNode("CoordinateDouble");
CoordinateDouble25.DEF = "_2";
CoordinateDouble25.point = new MFVec3d(new double[0,0,0,10,0,0,10,3,0,2,5,0,10,7,0,10,10,0,0,10,0,0,0,0]);
NurbsCurve24.controlPoint = CoordinateDouble25;

NurbsSweptSurface22.trajectoryCurve = NurbsCurve24;

Shape19.geometry = NurbsSweptSurface22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

MetadataSet17.value = Transform18;

MetadataSet15.value[1] = MetadataSet17;

MetadataSet10.value[2] = MetadataSet15;

MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "BrowserPanel";
MetadataSet26.DEF = "BrowserPanel";
MetadataSet26.reference = "http://titania.create3000.de";
MetadataString MetadataString27 = createNode("MetadataString");
MetadataString27.name = "type";
MetadataString27.DEF = "type_3";
MetadataString27.reference = "http://titania.create3000.de";
MetadataString27.value = new MFString(new java.lang.String[", ","TOP_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"]);
MetadataSet26.value = new MFNode();

MetadataSet26.value[0] = MetadataString27;

MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "viewpoints";
MetadataSet28.DEF = "viewpoints";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "PerspectiveViewpoint";
MetadataSet29.DEF = "PerspectiveViewpoint";
MetadataSet29.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble30 = createNode("MetadataDouble");
MetadataDouble30.name = "position";
MetadataDouble30.DEF = "position_4";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = new MFDouble(new double[19.5040483474731,17.2748856544495,32.6013174057007]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataDouble30;

MetadataDouble MetadataDouble31 = createNode("MetadataDouble");
MetadataDouble31.name = "orientation";
MetadataDouble31.DEF = "orientation_5";
MetadataDouble31.reference = "http://titania.create3000.de";
MetadataDouble31.value = new MFDouble(new double[-0.704047459582387,0.695566763588041,0.143192360296371,0.568941728510567]);
MetadataSet29.value[1] = MetadataDouble31;

MetadataDouble MetadataDouble32 = createNode("MetadataDouble");
MetadataDouble32.name = "centerOfRotation";
MetadataDouble32.DEF = "centerOfRotation_6";
MetadataDouble32.reference = "http://titania.create3000.de";
MetadataDouble32.value = new MFDouble(new double[8.5771920979023,5.2475825548172,6.84993648529053]);
MetadataSet29.value[2] = MetadataDouble32;

MetadataDouble MetadataDouble33 = createNode("MetadataDouble");
MetadataDouble33.name = "fieldOfViewScale";
MetadataDouble33.DEF = "fieldOfViewScale";
MetadataDouble33.reference = "http://titania.create3000.de";
MetadataDouble33.value = new MFDouble(new double[1]);
MetadataSet29.value[3] = MetadataDouble33;

MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataSet29;

MetadataSet MetadataSet34 = createNode("MetadataSet");
MetadataSet34.name = "TopViewpoint";
MetadataSet34.DEF = "TopViewpoint";
MetadataSet34.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble35 = createNode("MetadataDouble");
MetadataDouble35.name = "position";
MetadataDouble35.DEF = "position_7";
MetadataDouble35.reference = "http://titania.create3000.de";
MetadataDouble35.value = new MFDouble(new double[8.57719230651855,27.859375,6.84993648529053]);
MetadataSet34.value = new MFNode();

MetadataSet34.value[0] = MetadataDouble35;

MetadataDouble MetadataDouble36 = createNode("MetadataDouble");
MetadataDouble36.name = "orientation";
MetadataDouble36.DEF = "orientation_8";
MetadataDouble36.reference = "http://titania.create3000.de";
MetadataDouble36.value = new MFDouble(new double[1,0,0,4.71238898038469]);
MetadataSet34.value[1] = MetadataDouble36;

MetadataDouble MetadataDouble37 = createNode("MetadataDouble");
MetadataDouble37.name = "centerOfRotation";
MetadataDouble37.DEF = "centerOfRotation_9";
MetadataDouble37.reference = "http://titania.create3000.de";
MetadataDouble37.value = new MFDouble(new double[8.5771920979023,5.2475825548172,6.84993648529053]);
MetadataSet34.value[2] = MetadataDouble37;

MetadataDouble MetadataDouble38 = createNode("MetadataDouble");
MetadataDouble38.name = "fieldOfViewScale";
MetadataDouble38.DEF = "fieldOfViewScale_10";
MetadataDouble38.reference = "http://titania.create3000.de";
MetadataDouble38.value = new MFDouble(new double[2.64867162704468]);
MetadataSet34.value[3] = MetadataDouble38;

MetadataSet28.value[1] = MetadataSet34;

MetadataSet MetadataSet39 = createNode("MetadataSet");
MetadataSet39.name = "FrontViewpoint";
MetadataSet39.DEF = "FrontViewpoint";
MetadataSet39.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble40 = createNode("MetadataDouble");
MetadataDouble40.name = "position";
MetadataDouble40.DEF = "position_11";
MetadataDouble40.reference = "http://titania.create3000.de";
MetadataDouble40.value = new MFDouble(new double[8.57719230651855,5.24758243560791,29.4609375]);
MetadataSet39.value = new MFNode();

MetadataSet39.value[0] = MetadataDouble40;

MetadataDouble MetadataDouble41 = createNode("MetadataDouble");
MetadataDouble41.name = "orientation";
MetadataDouble41.DEF = "orientation_12";
MetadataDouble41.reference = "http://titania.create3000.de";
MetadataDouble41.value = new MFDouble(new double[0,0,1,0]);
MetadataSet39.value[1] = MetadataDouble41;

MetadataDouble MetadataDouble42 = createNode("MetadataDouble");
MetadataDouble42.name = "centerOfRotation";
MetadataDouble42.DEF = "centerOfRotation_13";
MetadataDouble42.reference = "http://titania.create3000.de";
MetadataDouble42.value = new MFDouble(new double[8.5771920979023,5.2475825548172,6.84993648529053]);
MetadataSet39.value[2] = MetadataDouble42;

MetadataDouble MetadataDouble43 = createNode("MetadataDouble");
MetadataDouble43.name = "fieldOfViewScale";
MetadataDouble43.DEF = "fieldOfViewScale_14";
MetadataDouble43.reference = "http://titania.create3000.de";
MetadataDouble43.value = new MFDouble(new double[2.64867162704468]);
MetadataSet39.value[3] = MetadataDouble43;

MetadataSet28.value[2] = MetadataSet39;

MetadataSet26.value[1] = MetadataSet28;

MetadataSet10.value[3] = MetadataSet26;

MetadataSet MetadataSet44 = createNode("MetadataSet");
MetadataSet44.name = "Page";
MetadataSet44.DEF = "Page";
MetadataSet44.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger45 = createNode("MetadataInteger");
MetadataInteger45.name = "activeView";
MetadataInteger45.DEF = "activeView";
MetadataInteger45.reference = "http://titania.create3000.de";
MetadataInteger45.value = new MFInt32(new int[1]);
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataInteger45;

MetadataInteger MetadataInteger46 = createNode("MetadataInteger");
MetadataInteger46.name = "multiView";
MetadataInteger46.DEF = "multiView";
MetadataInteger46.reference = "http://titania.create3000.de";
MetadataInteger46.value = new MFInt32(new int[0]);
MetadataSet44.value[1] = MetadataInteger46;

MetadataSet10.value[4] = MetadataSet44;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Background Background47 = createNode("Background");
Background47.DEF = "White";
Background47.skyColor = new MFColor(new float[1,1,1]);
children[1] = Background47;

Viewpoint Viewpoint48 = createNode("Viewpoint");
Viewpoint48.position = new SFVec3f(new float[16.7099,10.2735,13.6999]);
Viewpoint48.orientation = new SFRotation(new float[-0.359808403403336,0.923568512592993,0.132510812340385,0.758872814422469]);
Viewpoint48.centerOfRotation = new SFVec3f(new float[5.03567,4.99999,0]);
children[2] = Viewpoint48;

Transform Transform49 = createNode("Transform");
Transform49.USE = "B";
children[3] = Transform49;

}
