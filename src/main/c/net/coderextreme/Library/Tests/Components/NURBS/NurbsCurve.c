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
meta3.content = "Mon, 14 Jan 2019 04:01:01 GMT";
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
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsCurve.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 14 Jan 2019 10:35:25 GMT";
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
Transform18.DEF = "NurbsCurve";
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
LineProperties LineProperties21 = createNode("LineProperties");
LineProperties21.linewidthScaleFactor = 2;
Appearance20.lineProperties = LineProperties21;

Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,0,0]);
Material22.emissiveColor = new SFColor(new float[1,1,1]);
Appearance20.material = Material22;

Shape19.appearance = Appearance20;

NurbsCurve NurbsCurve23 = createNode("NurbsCurve");
NurbsCurve23.closed = True;
NurbsCurve23.tessellation = 44;
CoordinateDouble CoordinateDouble24 = createNode("CoordinateDouble");
CoordinateDouble24.point = new MFVec3d(new double[0,0,0,1,1,0,3,-1,0,5,1,0,7,-1,0,8,0,0]);
NurbsCurve23.controlPoint = CoordinateDouble24;

Shape19.geometry = NurbsCurve23;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

MetadataSet17.value = Transform18;

MetadataSet15.value[1] = MetadataSet17;

MetadataSet10.value[2] = MetadataSet15;

MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "BrowserPanel";
MetadataSet25.DEF = "BrowserPanel";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataString MetadataString26 = createNode("MetadataString");
MetadataString26.name = "type";
MetadataString26.DEF = "type_2";
MetadataString26.reference = "http://titania.create3000.de";
MetadataString26.value = new MFString(new java.lang.String[", ","TOP_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"]);
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataString26;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "viewpoints";
MetadataSet27.DEF = "viewpoints";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "PerspectiveViewpoint";
MetadataSet28.DEF = "PerspectiveViewpoint";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble29 = createNode("MetadataDouble");
MetadataDouble29.name = "position";
MetadataDouble29.DEF = "position_3";
MetadataDouble29.reference = "http://titania.create3000.de";
MetadataDouble29.value = new MFDouble(new double[5.87788534164429,6.46984958648682,13.8524446487427]);
MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataDouble29;

MetadataDouble MetadataDouble30 = createNode("MetadataDouble");
MetadataDouble30.name = "orientation";
MetadataDouble30.DEF = "orientation_4";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = new MFDouble(new double[-0.704047462871213,0.695566762376518,0.143192350010952,0.568941727555854]);
MetadataSet28.value[1] = MetadataDouble30;

MetadataDouble MetadataDouble31 = createNode("MetadataDouble");
MetadataDouble31.name = "centerOfRotation";
MetadataDouble31.DEF = "centerOfRotation_5";
MetadataDouble31.reference = "http://titania.create3000.de";
MetadataDouble31.value = new MFDouble(new double[0,0,0]);
MetadataSet28.value[2] = MetadataDouble31;

MetadataDouble MetadataDouble32 = createNode("MetadataDouble");
MetadataDouble32.name = "fieldOfViewScale";
MetadataDouble32.DEF = "fieldOfViewScale";
MetadataDouble32.reference = "http://titania.create3000.de";
MetadataDouble32.value = new MFDouble(new double[1]);
MetadataSet28.value[3] = MetadataDouble32;

MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataSet28;

MetadataSet MetadataSet33 = createNode("MetadataSet");
MetadataSet33.name = "TopViewpoint";
MetadataSet33.DEF = "TopViewpoint";
MetadataSet33.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble34 = createNode("MetadataDouble");
MetadataDouble34.name = "position";
MetadataDouble34.DEF = "position_6";
MetadataDouble34.reference = "http://titania.create3000.de";
MetadataDouble34.value = new MFDouble(new double[0,10000,0]);
MetadataSet33.value = new MFNode();

MetadataSet33.value[0] = MetadataDouble34;

MetadataDouble MetadataDouble35 = createNode("MetadataDouble");
MetadataDouble35.name = "orientation";
MetadataDouble35.DEF = "orientation_7";
MetadataDouble35.reference = "http://titania.create3000.de";
MetadataDouble35.value = new MFDouble(new double[1,0,0,4.71238898038469]);
MetadataSet33.value[1] = MetadataDouble35;

MetadataDouble MetadataDouble36 = createNode("MetadataDouble");
MetadataDouble36.name = "centerOfRotation";
MetadataDouble36.DEF = "centerOfRotation_8";
MetadataDouble36.reference = "http://titania.create3000.de";
MetadataDouble36.value = new MFDouble(new double[-0.0320612526145463,0,0.0937320149966475]);
MetadataSet33.value[2] = MetadataDouble36;

MetadataDouble MetadataDouble37 = createNode("MetadataDouble");
MetadataDouble37.name = "fieldOfViewScale";
MetadataDouble37.DEF = "fieldOfViewScale_9";
MetadataDouble37.reference = "http://titania.create3000.de";
MetadataDouble37.value = new MFDouble(new double[1.21023944190259]);
MetadataSet33.value[3] = MetadataDouble37;

MetadataSet27.value[1] = MetadataSet33;

MetadataSet MetadataSet38 = createNode("MetadataSet");
MetadataSet38.name = "FrontViewpoint";
MetadataSet38.DEF = "FrontViewpoint";
MetadataSet38.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble39 = createNode("MetadataDouble");
MetadataDouble39.name = "position";
MetadataDouble39.DEF = "position_10";
MetadataDouble39.reference = "http://titania.create3000.de";
MetadataDouble39.value = new MFDouble(new double[0,0,10000]);
MetadataSet38.value = new MFNode();

MetadataSet38.value[0] = MetadataDouble39;

MetadataDouble MetadataDouble40 = createNode("MetadataDouble");
MetadataDouble40.name = "orientation";
MetadataDouble40.DEF = "orientation_11";
MetadataDouble40.reference = "http://titania.create3000.de";
MetadataDouble40.value = new MFDouble(new double[0,0,1,0]);
MetadataSet38.value[1] = MetadataDouble40;

MetadataDouble MetadataDouble41 = createNode("MetadataDouble");
MetadataDouble41.name = "centerOfRotation";
MetadataDouble41.DEF = "centerOfRotation_12";
MetadataDouble41.reference = "http://titania.create3000.de";
MetadataDouble41.value = new MFDouble(new double[-0.00884759203065143,0.0177734813359099,0]);
MetadataSet38.value[2] = MetadataDouble41;

MetadataDouble MetadataDouble42 = createNode("MetadataDouble");
MetadataDouble42.name = "fieldOfViewScale";
MetadataDouble42.DEF = "fieldOfViewScale_13";
MetadataDouble42.reference = "http://titania.create3000.de";
MetadataDouble42.value = new MFDouble(new double[1.212467484375]);
MetadataSet38.value[3] = MetadataDouble42;

MetadataSet27.value[2] = MetadataSet38;

MetadataSet25.value[1] = MetadataSet27;

MetadataSet10.value[3] = MetadataSet25;

MetadataSet MetadataSet43 = createNode("MetadataSet");
MetadataSet43.name = "Page";
MetadataSet43.DEF = "Page";
MetadataSet43.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger44 = createNode("MetadataInteger");
MetadataInteger44.name = "activeView";
MetadataInteger44.DEF = "activeView";
MetadataInteger44.reference = "http://titania.create3000.de";
MetadataInteger44.value = new MFInt32(new int[1]);
MetadataSet43.value = new MFNode();

MetadataSet43.value[0] = MetadataInteger44;

MetadataInteger MetadataInteger45 = createNode("MetadataInteger");
MetadataInteger45.name = "multiView";
MetadataInteger45.DEF = "multiView";
MetadataInteger45.reference = "http://titania.create3000.de";
MetadataInteger45.value = new MFInt32(new int[0]);
MetadataSet43.value[1] = MetadataInteger45;

MetadataSet10.value[4] = MetadataSet43;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.position = new SFVec3f(new float[4,0,5.50851]);
Viewpoint46.centerOfRotation = new SFVec3f(new float[4,0,0]);
children[1] = Viewpoint46;

Transform Transform47 = createNode("Transform");
Transform47.USE = "NurbsCurve";
children[2] = Transform47;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "NurbsCurve_14";
Transform48.translation = new SFVec3f(new float[0,-1,0]);
Shape Shape49 = createNode("Shape");
Appearance Appearance50 = createNode("Appearance");
LineProperties LineProperties51 = createNode("LineProperties");
LineProperties51.linewidthScaleFactor = 2;
Appearance50.lineProperties = LineProperties51;

Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[0,0,0]);
Material52.emissiveColor = new SFColor(new float[1,1,1]);
Appearance50.material = Material52;

Shape49.appearance = Appearance50;

NurbsCurve NurbsCurve53 = createNode("NurbsCurve");
NurbsCurve53.closed = True;
NurbsCurve53.tessellation = 44;
CoordinateDouble CoordinateDouble54 = createNode("CoordinateDouble");
CoordinateDouble54.point = new MFVec3d(new double[0,0,0,1,0,0,1,1,0,0,1,0,0,0,0]);
NurbsCurve53.controlPoint = CoordinateDouble54;

Shape49.geometry = NurbsCurve53;

Transform48.child = new undefined();

Transform48.child[0] = Shape49;

children[3] = Transform48;

}
