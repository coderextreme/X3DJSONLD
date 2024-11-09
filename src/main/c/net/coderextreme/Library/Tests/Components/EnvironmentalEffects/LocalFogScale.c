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
meta3.content = "Sun, 16 Dec 2018 09:01:46 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V4.3.5, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Library/Tests/Components/EnvironmentalEffects/FogScale.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sun, 16 Dec 2018 09:45:56 GMT";
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
MetadataBoolean16.value = new MFBool(new boolean[False]);
MetadataSet15.value = new MFNode();

MetadataSet15.value[0] = MetadataBoolean16;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "nodes";
MetadataSet17.DEF = "nodes";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet15.value[1] = MetadataSet17;

MetadataSet10.value[2] = MetadataSet15;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "BrowserPanel";
MetadataSet18.DEF = "BrowserPanel";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataString MetadataString19 = createNode("MetadataString");
MetadataString19.name = "type";
MetadataString19.DEF = "type_2";
MetadataString19.reference = "http://titania.create3000.de";
MetadataString19.value = new MFString(new java.lang.String[", ","TOP_VIEW, ","MAIN_VIEW, ","PERSPECTIVE_VIEWFRONT_VIEW"]);
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataString19;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "viewpoints";
MetadataSet20.DEF = "viewpoints";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "PerspectiveViewpoint";
MetadataSet21.DEF = "PerspectiveViewpoint";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble22 = createNode("MetadataDouble");
MetadataDouble22.name = "position";
MetadataDouble22.DEF = "position_3";
MetadataDouble22.reference = "http://titania.create3000.de";
MetadataDouble22.value = new MFDouble(new double[-22.2726921645279,34.1239646001577,-16.8288873611093]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataDouble22;

MetadataDouble MetadataDouble23 = createNode("MetadataDouble");
MetadataDouble23.name = "orientation";
MetadataDouble23.DEF = "orientation_4";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = new MFDouble(new double[-0.208492788516243,-0.883796051687825,-0.418849968554055,2.31269443013416]);
MetadataSet21.value[1] = MetadataDouble23;

MetadataDouble MetadataDouble24 = createNode("MetadataDouble");
MetadataDouble24.name = "centerOfRotation";
MetadataDouble24.DEF = "centerOfRotation_5";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = new MFDouble(new double[0,0,0]);
MetadataSet21.value[2] = MetadataDouble24;

MetadataDouble MetadataDouble25 = createNode("MetadataDouble");
MetadataDouble25.name = "fieldOfViewScale";
MetadataDouble25.DEF = "fieldOfViewScale";
MetadataDouble25.reference = "http://titania.create3000.de";
MetadataDouble25.value = new MFDouble(new double[1]);
MetadataSet21.value[3] = MetadataDouble25;

MetadataSet20.value = new MFNode();

MetadataSet20.value[0] = MetadataSet21;

MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "TopViewpoint";
MetadataSet26.DEF = "TopViewpoint";
MetadataSet26.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble27 = createNode("MetadataDouble");
MetadataDouble27.name = "position";
MetadataDouble27.DEF = "position_6";
MetadataDouble27.reference = "http://titania.create3000.de";
MetadataDouble27.value = new MFDouble(new double[-8.4961538177602,10000,0.726184320129006]);
MetadataSet26.value = new MFNode();

MetadataSet26.value[0] = MetadataDouble27;

MetadataDouble MetadataDouble28 = createNode("MetadataDouble");
MetadataDouble28.name = "orientation";
MetadataDouble28.DEF = "orientation_7";
MetadataDouble28.reference = "http://titania.create3000.de";
MetadataDouble28.value = new MFDouble(new double[1,0,0,4.71238898038469]);
MetadataSet26.value[1] = MetadataDouble28;

MetadataDouble MetadataDouble29 = createNode("MetadataDouble");
MetadataDouble29.name = "centerOfRotation";
MetadataDouble29.DEF = "centerOfRotation_8";
MetadataDouble29.reference = "http://titania.create3000.de";
MetadataDouble29.value = new MFDouble(new double[-8.52821507037475,0,0.819916335125654]);
MetadataSet26.value[2] = MetadataDouble29;

MetadataDouble MetadataDouble30 = createNode("MetadataDouble");
MetadataDouble30.name = "fieldOfViewScale";
MetadataDouble30.DEF = "fieldOfViewScale_9";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = new MFDouble(new double[2.17341615774226]);
MetadataSet26.value[3] = MetadataDouble30;

MetadataSet20.value[1] = MetadataSet26;

MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "FrontViewpoint";
MetadataSet31.DEF = "FrontViewpoint";
MetadataSet31.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble32 = createNode("MetadataDouble");
MetadataDouble32.name = "position";
MetadataDouble32.DEF = "position_10";
MetadataDouble32.reference = "http://titania.create3000.de";
MetadataDouble32.value = new MFDouble(new double[-1.32132392601719,1.49125645364041,10000]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataDouble32;

MetadataDouble MetadataDouble33 = createNode("MetadataDouble");
MetadataDouble33.name = "orientation";
MetadataDouble33.DEF = "orientation_11";
MetadataDouble33.reference = "http://titania.create3000.de";
MetadataDouble33.value = new MFDouble(new double[0,0,1,0]);
MetadataSet31.value[1] = MetadataDouble33;

MetadataDouble MetadataDouble34 = createNode("MetadataDouble");
MetadataDouble34.name = "centerOfRotation";
MetadataDouble34.DEF = "centerOfRotation_12";
MetadataDouble34.reference = "http://titania.create3000.de";
MetadataDouble34.value = new MFDouble(new double[-1.33017151804784,1.50902993497632,0]);
MetadataSet31.value[2] = MetadataDouble34;

MetadataDouble MetadataDouble35 = createNode("MetadataDouble");
MetadataDouble35.name = "fieldOfViewScale";
MetadataDouble35.DEF = "fieldOfViewScale_13";
MetadataDouble35.reference = "http://titania.create3000.de";
MetadataDouble35.value = new MFDouble(new double[2.64666446088156]);
MetadataSet31.value[3] = MetadataDouble35;

MetadataSet20.value[2] = MetadataSet31;

MetadataSet18.value[1] = MetadataSet20;

MetadataSet10.value[3] = MetadataSet18;

MetadataSet MetadataSet36 = createNode("MetadataSet");
MetadataSet36.name = "Page";
MetadataSet36.DEF = "Page";
MetadataSet36.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger37 = createNode("MetadataInteger");
MetadataInteger37.name = "activeView";
MetadataInteger37.DEF = "activeView";
MetadataInteger37.reference = "http://titania.create3000.de";
MetadataInteger37.value = new MFInt32(new int[1]);
MetadataSet36.value = new MFNode();

MetadataSet36.value[0] = MetadataInteger37;

MetadataInteger MetadataInteger38 = createNode("MetadataInteger");
MetadataInteger38.name = "multiView";
MetadataInteger38.DEF = "multiView";
MetadataInteger38.reference = "http://titania.create3000.de";
MetadataInteger38.value = new MFInt32(new int[1]);
MetadataSet36.value[1] = MetadataInteger38;

MetadataSet10.value[4] = MetadataSet36;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

NavigationInfo NavigationInfo39 = createNode("NavigationInfo");
NavigationInfo39.type = new MFString(new java.lang.String[", ","WALKANY"]);
children[1] = NavigationInfo39;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "WithoutScale";
Transform Transform41 = createNode("Transform");
Transform41.DEF = "Box";
Transform41.translation = new SFVec3f(new float[0,5,0]);
Transform41.scale = new SFVec3f(new float[5,5,5]);
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

Box Box45 = createNode("Box");
Box45.solid = False;
Shape42.geometry = Box45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

LocalFog LocalFog46 = createNode("LocalFog");
LocalFog46.DEF = "_14";
LocalFog46.color = new SFColor(new float[0,0,1]);
LocalFog46.visibilityRange = 10;
Transform40.children[1] = LocalFog46;

Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.description = "Fog without Scale Inside";
Viewpoint47.position = new SFVec3f(new float[0,1.6,0]);
Viewpoint47.centerOfRotation = new SFVec3f(new float[0.722464,2.49992,-1.68122]);
Transform40.children[2] = Viewpoint47;

children[2] = Transform40;

Transform Transform48 = createNode("Transform");
Transform48.translation = new SFVec3f(new float[-15,0,0]);
Transform48.rotation = new SFRotation(new float[0,-1,0,0.785398131619433]);
Transform48.scale = new SFVec3f(new float[2,1,1]);
Transform Transform49 = createNode("Transform");
Transform49.USE = "Box";
Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

LocalFog LocalFog50 = createNode("LocalFog");
LocalFog50.USE = "_14";
Transform48.children[1] = LocalFog50;

Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.description = "Fog with Scale and Rotation Inside";
Viewpoint51.position = new SFVec3f(new float[0,1.6,0]);
Viewpoint51.centerOfRotation = new SFVec3f(new float[0.722464,2.49992,-1.68122]);
Transform48.children[2] = Viewpoint51;

children[3] = Transform48;

Viewpoint Viewpoint52 = createNode("Viewpoint");
Viewpoint52.description = "Fog without Scale Outside";
Viewpoint52.position = new SFVec3f(new float[0,1.6,0]);
Viewpoint52.centerOfRotation = new SFVec3f(new float[0.722464,2.49992,-1.68122]);
children[4] = Viewpoint52;

Viewpoint Viewpoint53 = createNode("Viewpoint");
Viewpoint53.description = "Fog with Scale and Rotation Outside";
Viewpoint53.position = new SFVec3f(new float[-15,1.6,0]);
Viewpoint53.orientation = new SFRotation(new float[0,-1,0,0.785398131619433]);
Viewpoint53.centerOfRotation = new SFVec3f(new float[0.722464,2.49992,-1.68122]);
children[5] = Viewpoint53;

}
