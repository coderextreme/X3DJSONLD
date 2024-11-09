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
meta3.content = "Tue, 05 Jun 2018 02:21:56 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.3.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/Lighting/PointLight2.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Wed, 06 Jun 2018 08:47:37 GMT";
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

MetadataInteger MetadataInteger15 = createNode("MetadataInteger");
MetadataInteger15.name = "dimension";
MetadataInteger15.DEF = "dimension";
MetadataInteger15.reference = "http://titania.create3000.de";
MetadataInteger15.value = new MFInt32(new int[10,20,10]);
MetadataSet13.value[1] = MetadataInteger15;

MetadataSet10.value[1] = MetadataSet13;

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
PointLight PointLight19 = createNode("PointLight");
PointLight19.DEF = "_2";
PointLight19.global = False;
PointLight19.location = new SFVec3f(new float[0,5,0]);
PointLight19.shadows = True;
PointLight19.shadowMapSize = "2048";
MetadataSet18.value = PointLight19;

MetadataSet16.value[1] = MetadataSet18;

MetadataSet10.value[2] = MetadataSet16;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "BrowserPanel";
MetadataSet20.DEF = "BrowserPanel";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger21 = createNode("MetadataInteger");
MetadataInteger21.name = "layerNumber";
MetadataInteger21.DEF = "layerNumber";
MetadataInteger21.reference = "http://titania.create3000.de";
MetadataInteger21.value = new MFInt32(new int[-1,0,0,0,0,-1,-1,-1]);
MetadataSet20.value = new MFNode();

MetadataSet20.value[0] = MetadataInteger21;

MetadataString MetadataString22 = createNode("MetadataString");
MetadataString22.name = "type";
MetadataString22.DEF = "type_3";
MetadataString22.reference = "http://titania.create3000.de";
MetadataString22.value = new MFString(new java.lang.String[", ","RIGHT_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"]);
MetadataSet20.value[1] = MetadataString22;

MetadataSet MetadataSet23 = createNode("MetadataSet");
MetadataSet23.name = "viewpoints";
MetadataSet23.DEF = "viewpoints";
MetadataSet23.reference = "http://titania.create3000.de";
MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "PerspectiveViewpoint";
MetadataSet24.DEF = "PerspectiveViewpoint";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble25 = createNode("MetadataDouble");
MetadataDouble25.name = "position";
MetadataDouble25.DEF = "position_4";
MetadataDouble25.reference = "http://titania.create3000.de";
MetadataDouble25.value = new MFDouble(new double[5.87788534164429,6.46984958648682,13.8524446487427]);
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataDouble25;

MetadataDouble MetadataDouble26 = createNode("MetadataDouble");
MetadataDouble26.name = "orientation";
MetadataDouble26.DEF = "orientation_5";
MetadataDouble26.reference = "http://titania.create3000.de";
MetadataDouble26.value = new MFDouble(new double[-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854]);
MetadataSet24.value[1] = MetadataDouble26;

MetadataDouble MetadataDouble27 = createNode("MetadataDouble");
MetadataDouble27.name = "centerOfRotation";
MetadataDouble27.DEF = "centerOfRotation_6";
MetadataDouble27.reference = "http://titania.create3000.de";
MetadataDouble27.value = new MFDouble(new double[0,0,0]);
MetadataSet24.value[2] = MetadataDouble27;

MetadataDouble MetadataDouble28 = createNode("MetadataDouble");
MetadataDouble28.name = "fieldOfViewScale";
MetadataDouble28.DEF = "fieldOfViewScale";
MetadataDouble28.reference = "http://titania.create3000.de";
MetadataDouble28.value = new MFDouble(new double[1]);
MetadataSet24.value[3] = MetadataDouble28;

MetadataSet23.value = new MFNode();

MetadataSet23.value[0] = MetadataSet24;

MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "TopViewpoint";
MetadataSet29.DEF = "TopViewpoint";
MetadataSet29.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble30 = createNode("MetadataDouble");
MetadataDouble30.name = "position";
MetadataDouble30.DEF = "position_7";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = new MFDouble(new double[-5.9857227487932,10.8662109375,0.18038974973888]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataDouble30;

MetadataDouble MetadataDouble31 = createNode("MetadataDouble");
MetadataDouble31.name = "orientation";
MetadataDouble31.DEF = "orientation_8";
MetadataDouble31.reference = "http://titania.create3000.de";
MetadataDouble31.value = new MFDouble(new double[1,0,0,4.71238898038469]);
MetadataSet29.value[1] = MetadataDouble31;

MetadataDouble MetadataDouble32 = createNode("MetadataDouble");
MetadataDouble32.name = "centerOfRotation";
MetadataDouble32.DEF = "centerOfRotation_9";
MetadataDouble32.reference = "http://titania.create3000.de";
MetadataDouble32.value = new MFDouble(new double[-5.9857227487932,0,0.18038974973888]);
MetadataSet29.value[2] = MetadataDouble32;

MetadataDouble MetadataDouble33 = createNode("MetadataDouble");
MetadataDouble33.name = "fieldOfViewScale";
MetadataDouble33.DEF = "fieldOfViewScale_10";
MetadataDouble33.reference = "http://titania.create3000.de";
MetadataDouble33.value = new MFDouble(new double[2.6418009235867]);
MetadataSet29.value[3] = MetadataDouble33;

MetadataSet23.value[1] = MetadataSet29;

MetadataSet MetadataSet34 = createNode("MetadataSet");
MetadataSet34.name = "FrontViewpoint";
MetadataSet34.DEF = "FrontViewpoint";
MetadataSet34.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble35 = createNode("MetadataDouble");
MetadataDouble35.name = "position";
MetadataDouble35.DEF = "position_11";
MetadataDouble35.reference = "http://titania.create3000.de";
MetadataDouble35.value = new MFDouble(new double[-3.76314300822868,3.55015251499291,10000]);
MetadataSet34.value = new MFNode();

MetadataSet34.value[0] = MetadataDouble35;

MetadataDouble MetadataDouble36 = createNode("MetadataDouble");
MetadataDouble36.name = "orientation";
MetadataDouble36.DEF = "orientation_12";
MetadataDouble36.reference = "http://titania.create3000.de";
MetadataDouble36.value = new MFDouble(new double[0,0,1,0]);
MetadataSet34.value[1] = MetadataDouble36;

MetadataDouble MetadataDouble37 = createNode("MetadataDouble");
MetadataDouble37.name = "centerOfRotation";
MetadataDouble37.DEF = "centerOfRotation_13";
MetadataDouble37.reference = "http://titania.create3000.de";
MetadataDouble37.value = new MFDouble(new double[-3.76314300822868,3.55015251499291,0]);
MetadataSet34.value[2] = MetadataDouble37;

MetadataDouble MetadataDouble38 = createNode("MetadataDouble");
MetadataDouble38.name = "fieldOfViewScale";
MetadataDouble38.DEF = "fieldOfViewScale_14";
MetadataDouble38.reference = "http://titania.create3000.de";
MetadataDouble38.value = new MFDouble(new double[2.01741078562512]);
MetadataSet34.value[3] = MetadataDouble38;

MetadataSet23.value[2] = MetadataSet34;

MetadataSet20.value[2] = MetadataSet23;

MetadataSet10.value[3] = MetadataSet20;

MetadataSet MetadataSet39 = createNode("MetadataSet");
MetadataSet39.name = "Page";
MetadataSet39.DEF = "Page";
MetadataSet39.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger40 = createNode("MetadataInteger");
MetadataInteger40.name = "activeView";
MetadataInteger40.DEF = "activeView";
MetadataInteger40.reference = "http://titania.create3000.de";
MetadataInteger40.value = new MFInt32(new int[3]);
MetadataSet39.value = new MFNode();

MetadataSet39.value[0] = MetadataInteger40;

MetadataInteger MetadataInteger41 = createNode("MetadataInteger");
MetadataInteger41.name = "multiView";
MetadataInteger41.DEF = "multiView";
MetadataInteger41.reference = "http://titania.create3000.de";
MetadataInteger41.value = new MFInt32(new int[1]);
MetadataSet39.value[1] = MetadataInteger41;

MetadataSet10.value[4] = MetadataSet39;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

NavigationInfo NavigationInfo42 = createNode("NavigationInfo");
NavigationInfo42.headlight = False;
children[1] = NavigationInfo42;

Viewpoint Viewpoint43 = createNode("Viewpoint");
Viewpoint43.DEF = "_15";
Viewpoint43.description = "Inital View";
Viewpoint43.position = new SFVec3f(new float[5.1736,10.0496,10.0977]);
Viewpoint43.orientation = new SFRotation(new float[-0.826747553796003,0.526024485457868,0.19946609484098,0.860063252825464]);
Viewpoint43.centerOfRotation = new SFVec3f(new float[1.22569e-7,-1.49027e-8,-4.7967e-8]);
children[2] = Viewpoint43;

Group Group44 = createNode("Group");
Group44.DEF = "LightButton";
PlaneSensor PlaneSensor45 = createNode("PlaneSensor");
PlaneSensor45.DEF = "_16";
PlaneSensor45.offset = new SFVec3f(new float[0,5,0]);
PlaneSensor45.maxPosition = new SFVec2f(new float[0,-1]);
Group44.children = new MFNode();

Group44.children[0] = PlaneSensor45;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "Sphere";
Transform46.translation = new SFVec3f(new float[0,5,0]);
Transform46.scale = new SFVec3f(new float[0.241256,0.241256,0.241256]);
Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.emissiveColor = new SFColor(new float[1,1,1]);
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

Sphere Sphere50 = createNode("Sphere");
Shape47.geometry = Sphere50;

Transform46.child = new undefined();

Transform46.child[0] = Shape47;

Group44.children[1] = Transform46;

children[3] = Group44;

Group Group51 = createNode("Group");
PointLight PointLight52 = createNode("PointLight");
PointLight52.USE = "_2";
Group51.children = new MFNode();

Group51.children[0] = PointLight52;

Transform Transform53 = createNode("Transform");
Transform53.DEF = "Floor";
Transform53.translation = new SFVec3f(new float[0,-1,0]);
Transform53.scale = new SFVec3f(new float[11,1,11]);
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

Box Box57 = createNode("Box");
Shape54.geometry = Box57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

Group51.children[1] = Transform53;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "Box_17";
Transform58.translation = new SFVec3f(new float[-4,1,0]);
Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

Box Box62 = createNode("Box");
Shape59.geometry = Box62;

Transform58.child = new undefined();

Transform58.child[0] = Shape59;

Group51.children[2] = Transform58;

Transform Transform63 = createNode("Transform");
Transform63.DEF = "Cone";
Transform63.translation = new SFVec3f(new float[0,1,4]);
Shape Shape64 = createNode("Shape");
Appearance Appearance65 = createNode("Appearance");
Material Material66 = createNode("Material");
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

Cone Cone67 = createNode("Cone");
Shape64.geometry = Cone67;

Transform63.child = new undefined();

Transform63.child[0] = Shape64;

Group51.children[3] = Transform63;

Transform Transform68 = createNode("Transform");
Transform68.DEF = "Cylinder";
Transform68.translation = new SFVec3f(new float[4,1,0]);
Shape Shape69 = createNode("Shape");
Appearance Appearance70 = createNode("Appearance");
Material Material71 = createNode("Material");
Appearance70.material = Material71;

Shape69.appearance = Appearance70;

Cylinder Cylinder72 = createNode("Cylinder");
Shape69.geometry = Cylinder72;

Transform68.child = new undefined();

Transform68.child[0] = Shape69;

Group51.children[4] = Transform68;

Transform Transform73 = createNode("Transform");
Transform73.DEF = "Pyramid";
Transform73.translation = new SFVec3f(new float[0,1,-4]);
Shape Shape74 = createNode("Shape");
Appearance Appearance75 = createNode("Appearance");
Material Material76 = createNode("Material");
Appearance75.material = Material76;

Shape74.appearance = Appearance75;

IndexedFaceSet IndexedFaceSet77 = createNode("IndexedFaceSet");
IndexedFaceSet77.coordIndex = new MFInt32(new int[3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1]);
Coordinate Coordinate78 = createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[-1,-1,1,1,-1,1,1,-1,-1,-1,-1,-1,0,1,0]);
IndexedFaceSet77.coord = Coordinate78;

Shape74.geometry = IndexedFaceSet77;

Transform73.child = new undefined();

Transform73.child[0] = Shape74;

Group51.children[5] = Transform73;

Transform Transform79 = createNode("Transform");
Transform79.DEF = "Ceiling";
Transform79.translation = new SFVec3f(new float[0,11.001,0]);
Transform79.scale = new SFVec3f(new float[11,1,11]);
Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Material Material82 = createNode("Material");
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

Box Box83 = createNode("Box");
Shape80.geometry = Box83;

Transform79.child = new undefined();

Transform79.child[0] = Shape80;

Group51.children[6] = Transform79;

Transform Transform84 = createNode("Transform");
Transform84.DEF = "Box_18";
Transform84.translation = new SFVec3f(new float[-4,9,0]);
Shape Shape85 = createNode("Shape");
Appearance Appearance86 = createNode("Appearance");
Material Material87 = createNode("Material");
Appearance86.material = Material87;

Shape85.appearance = Appearance86;

Box Box88 = createNode("Box");
Shape85.geometry = Box88;

Transform84.child = new undefined();

Transform84.child[0] = Shape85;

Group51.children[7] = Transform84;

Transform Transform89 = createNode("Transform");
Transform89.DEF = "Cone_19";
Transform89.translation = new SFVec3f(new float[0,9,4]);
Shape Shape90 = createNode("Shape");
Appearance Appearance91 = createNode("Appearance");
Material Material92 = createNode("Material");
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

Cone Cone93 = createNode("Cone");
Shape90.geometry = Cone93;

Transform89.child = new undefined();

Transform89.child[0] = Shape90;

Group51.children[8] = Transform89;

Transform Transform94 = createNode("Transform");
Transform94.DEF = "Cylinder_20";
Transform94.translation = new SFVec3f(new float[4,9,0]);
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

Cylinder Cylinder98 = createNode("Cylinder");
Shape95.geometry = Cylinder98;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

Group51.children[9] = Transform94;

Transform Transform99 = createNode("Transform");
Transform99.DEF = "Pyramid_21";
Transform99.translation = new SFVec3f(new float[0,9,-4]);
Shape Shape100 = createNode("Shape");
Appearance Appearance101 = createNode("Appearance");
Material Material102 = createNode("Material");
Appearance101.material = Material102;

Shape100.appearance = Appearance101;

IndexedFaceSet IndexedFaceSet103 = createNode("IndexedFaceSet");
IndexedFaceSet103.coordIndex = new MFInt32(new int[3,2,1,0,-1,0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1]);
Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[-1,-1,1,1,-1,1,1,-1,-1,-1,-1,-1,0,1,0]);
IndexedFaceSet103.coord = Coordinate104;

Shape100.geometry = IndexedFaceSet103;

Transform99.child = new undefined();

Transform99.child[0] = Shape100;

Group51.children[10] = Transform99;

children[4] = Group51;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "_16";
ROUTE105.fromField = "translation_changed";
ROUTE105.toNode = "_2";
ROUTE105.toField = "set_location";
children[5] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "_2";
ROUTE106.fromField = "location_changed";
ROUTE106.toNode = "Sphere";
ROUTE106.toField = "set_translation";
children[6] = ROUTE106;

}
