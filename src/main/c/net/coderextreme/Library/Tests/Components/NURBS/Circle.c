#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "3.3";
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
meta4.content = "Thu, 03 Oct 2019 10:45:27 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Titania V4.5.12, http://titania.create3000.de";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "file:///home/holger/Projekte/Library/Tests/Components/NURBS/Circle.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Thu, 03 Oct 2019 10:45:57 GMT";
head1.meta[6] = meta8;

head = head1;

WorldInfo WorldInfo10 = createNode("WorldInfo");
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Titania";
MetadataSet11.DEF = "Titania";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "AngleGrid";
MetadataSet12.DEF = "AngleGrid";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean13 = createNode("MetadataBoolean");
MetadataBoolean13.name = "enabled";
MetadataBoolean13.DEF = "enabled";
MetadataBoolean13.reference = "http://titania.create3000.de";
MetadataBoolean13.value = new MFBool(new boolean[False]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataBoolean13;

MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataSet12;

MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "Grid";
MetadataSet14.DEF = "Grid";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean15 = createNode("MetadataBoolean");
MetadataBoolean15.name = "enabled";
MetadataBoolean15.DEF = "enabled_1";
MetadataBoolean15.reference = "http://titania.create3000.de";
MetadataBoolean15.value = new MFBool(new boolean[True]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataBoolean15;

MetadataSet11.value[1] = MetadataSet14;

MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "Selection";
MetadataSet16.DEF = "Selection";
MetadataSet16.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean17 = createNode("MetadataBoolean");
MetadataBoolean17.name = "selectGeometry";
MetadataBoolean17.DEF = "selectGeometry";
MetadataBoolean17.reference = "http://titania.create3000.de";
MetadataBoolean17.value = new MFBool(new boolean[False]);
MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataBoolean17;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "nodes";
MetadataSet18.DEF = "nodes";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet16.value[1] = MetadataSet18;

MetadataSet11.value[2] = MetadataSet16;

MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "BrowserPanel";
MetadataSet19.DEF = "BrowserPanel";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataString MetadataString20 = createNode("MetadataString");
MetadataString20.name = "type";
MetadataString20.DEF = "type_2";
MetadataString20.reference = "http://titania.create3000.de";
MetadataString20.value = new MFString(new java.lang.String[", ","TOP_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"]);
MetadataSet19.value = new MFNode();

MetadataSet19.value[0] = MetadataString20;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "viewpoints";
MetadataSet21.DEF = "viewpoints";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataSet MetadataSet22 = createNode("MetadataSet");
MetadataSet22.name = "PerspectiveViewpoint";
MetadataSet22.DEF = "PerspectiveViewpoint";
MetadataSet22.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble23 = createNode("MetadataDouble");
MetadataDouble23.name = "position";
MetadataDouble23.DEF = "position_3";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = new MFDouble(new double[5.87788534164429,6.46984958648682,13.8524446487427]);
MetadataSet22.value = new MFNode();

MetadataSet22.value[0] = MetadataDouble23;

MetadataDouble MetadataDouble24 = createNode("MetadataDouble");
MetadataDouble24.name = "orientation";
MetadataDouble24.DEF = "orientation_4";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = new MFDouble(new double[-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854]);
MetadataSet22.value[1] = MetadataDouble24;

MetadataDouble MetadataDouble25 = createNode("MetadataDouble");
MetadataDouble25.name = "centerOfRotation";
MetadataDouble25.DEF = "centerOfRotation_5";
MetadataDouble25.reference = "http://titania.create3000.de";
MetadataDouble25.value = new MFDouble(new double[0,0,0]);
MetadataSet22.value[2] = MetadataDouble25;

MetadataDouble MetadataDouble26 = createNode("MetadataDouble");
MetadataDouble26.name = "fieldOfViewScale";
MetadataDouble26.DEF = "fieldOfViewScale";
MetadataDouble26.reference = "http://titania.create3000.de";
MetadataDouble26.value = new MFDouble(new double[1]);
MetadataSet22.value[3] = MetadataDouble26;

MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataSet22;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "TopViewpoint";
MetadataSet27.DEF = "TopViewpoint";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble28 = createNode("MetadataDouble");
MetadataDouble28.name = "position";
MetadataDouble28.DEF = "position_6";
MetadataDouble28.reference = "http://titania.create3000.de";
MetadataDouble28.value = new MFDouble(new double[0,10000,0]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataDouble28;

MetadataDouble MetadataDouble29 = createNode("MetadataDouble");
MetadataDouble29.name = "orientation";
MetadataDouble29.DEF = "orientation_7";
MetadataDouble29.reference = "http://titania.create3000.de";
MetadataDouble29.value = new MFDouble(new double[1,0,0,4.71238898038469]);
MetadataSet27.value[1] = MetadataDouble29;

MetadataDouble MetadataDouble30 = createNode("MetadataDouble");
MetadataDouble30.name = "centerOfRotation";
MetadataDouble30.DEF = "centerOfRotation_8";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = new MFDouble(new double[-0.0320612526145463,0,0.0937320149966475]);
MetadataSet27.value[2] = MetadataDouble30;

MetadataDouble MetadataDouble31 = createNode("MetadataDouble");
MetadataDouble31.name = "fieldOfViewScale";
MetadataDouble31.DEF = "fieldOfViewScale_9";
MetadataDouble31.reference = "http://titania.create3000.de";
MetadataDouble31.value = new MFDouble(new double[1.21023944190259]);
MetadataSet27.value[3] = MetadataDouble31;

MetadataSet21.value[1] = MetadataSet27;

MetadataSet MetadataSet32 = createNode("MetadataSet");
MetadataSet32.name = "FrontViewpoint";
MetadataSet32.DEF = "FrontViewpoint";
MetadataSet32.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble33 = createNode("MetadataDouble");
MetadataDouble33.name = "position";
MetadataDouble33.DEF = "position_10";
MetadataDouble33.reference = "http://titania.create3000.de";
MetadataDouble33.value = new MFDouble(new double[0,0,10000]);
MetadataSet32.value = new MFNode();

MetadataSet32.value[0] = MetadataDouble33;

MetadataDouble MetadataDouble34 = createNode("MetadataDouble");
MetadataDouble34.name = "orientation";
MetadataDouble34.DEF = "orientation_11";
MetadataDouble34.reference = "http://titania.create3000.de";
MetadataDouble34.value = new MFDouble(new double[0,0,1,0]);
MetadataSet32.value[1] = MetadataDouble34;

MetadataDouble MetadataDouble35 = createNode("MetadataDouble");
MetadataDouble35.name = "centerOfRotation";
MetadataDouble35.DEF = "centerOfRotation_12";
MetadataDouble35.reference = "http://titania.create3000.de";
MetadataDouble35.value = new MFDouble(new double[-0.00884759203065143,0.0177734813359099,0]);
MetadataSet32.value[2] = MetadataDouble35;

MetadataDouble MetadataDouble36 = createNode("MetadataDouble");
MetadataDouble36.name = "fieldOfViewScale";
MetadataDouble36.DEF = "fieldOfViewScale_13";
MetadataDouble36.reference = "http://titania.create3000.de";
MetadataDouble36.value = new MFDouble(new double[1.212467484375]);
MetadataSet32.value[3] = MetadataDouble36;

MetadataSet21.value[2] = MetadataSet32;

MetadataSet19.value[1] = MetadataSet21;

MetadataSet11.value[3] = MetadataSet19;

MetadataSet MetadataSet37 = createNode("MetadataSet");
MetadataSet37.name = "Page";
MetadataSet37.DEF = "Page";
MetadataSet37.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger38 = createNode("MetadataInteger");
MetadataInteger38.name = "activeView";
MetadataInteger38.DEF = "activeView";
MetadataInteger38.reference = "http://titania.create3000.de";
MetadataInteger38.value = new MFInt32(new int[1]);
MetadataSet37.value = new MFNode();

MetadataSet37.value[0] = MetadataInteger38;

MetadataInteger MetadataInteger39 = createNode("MetadataInteger");
MetadataInteger39.name = "multiView";
MetadataInteger39.DEF = "multiView";
MetadataInteger39.reference = "http://titania.create3000.de";
MetadataInteger39.value = new MFInt32(new int[0]);
MetadataSet37.value[1] = MetadataInteger39;

MetadataSet11.value[4] = MetadataSet37;

WorldInfo10.metadata = MetadataSet11;

children = new MFNode();

children[0] = WorldInfo10;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "Circle";
Shape Shape41 = createNode("Shape");
Appearance Appearance42 = createNode("Appearance");
Material Material43 = createNode("Material");
Material43.emissiveColor = new SFColor(new float[1,1,1]);
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

NurbsCurve NurbsCurve44 = createNode("NurbsCurve");
NurbsCurve44.knot = new MFDouble(new double[0,0,0,0.25,0.25,0.5,0.5,0.75,0.75,1,1,1]);
NurbsCurve44.weight = new MFDouble(new double[1,0.7071,1,0.7071,1,0.7071,1,0.7071,1]);
CoordinateDouble CoordinateDouble45 = createNode("CoordinateDouble");
CoordinateDouble45.point = new MFVec3d(new double[1,0,0,0.7071,-0.7071,0,0,-1,0,-0.7071,-0.7071,0,-1,0,0,-0.7071,0.7071,0,0,1,0,0.7071,0.7071,0,1,0,0]);
NurbsCurve44.controlPoint = CoordinateDouble45;

Shape41.geometry = NurbsCurve44;

Transform40.child = new undefined();

Transform40.child[0] = Shape41;

children[1] = Transform40;

}
