#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Layering";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "comment";
meta3.content = "World of Sunrise X3D Editor";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "Wed, 18 Nov 2015 05:00:27 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrise X3D Editor V1.0.3, https://create3000.github.io/sunrise/";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "file:///Volumes/Home/Projekte/Library/Tests/Components/Geometry2D/Geometry2D.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Wed, 26 Oct 2022 20:29:31 GMT";
head1.meta[6] = meta8;

head = head1;

WorldInfo WorldInfo10 = createNode("WorldInfo");
WorldInfo10.title = "Geometry2D";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "Titania";
MetadataSet11.DEF = "Titania";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "NavigationInfo";
MetadataSet12.DEF = "NavigationInfo";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataString MetadataString13 = createNode("MetadataString");
MetadataString13.name = "type";
MetadataString13.DEF = "type";
MetadataString13.reference = "http://titania.create3000.de";
MetadataString13.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataString13;

MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataSet12;

MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "Viewpoint";
MetadataSet14.DEF = "Viewpoint";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "position";
MetadataDouble15.DEF = "position";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0.013118179515004,-0.957872569561,18.039764404297]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "orientation";
MetadataDouble16.DEF = "orientation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[-0.75044035340951,0.63789730779079,-0.17299219834397,0.0049795126542074]);
MetadataSet14.value[1] = MetadataDouble16;

MetadataDouble MetadataDouble17 = createNode("MetadataDouble");
MetadataDouble17.name = "centerOfRotation";
MetadataDouble17.DEF = "centerOfRotation";
MetadataDouble17.reference = "http://titania.create3000.de";
MetadataDouble17.value = new MFDouble(new double[-0.044300079345703,-1.0149998664856,-0.0000090645626187325]);
MetadataSet14.value[2] = MetadataDouble17;

MetadataSet11.value[1] = MetadataSet14;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "AngleGrid";
MetadataSet18.DEF = "AngleGrid";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean19 = createNode("MetadataBoolean");
MetadataBoolean19.name = "enabled";
MetadataBoolean19.DEF = "enabled";
MetadataBoolean19.reference = "http://titania.create3000.de";
MetadataBoolean19.value = new MFBool(new boolean[False]);
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataBoolean19;

MetadataSet11.value[2] = MetadataSet18;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "Grid";
MetadataSet20.DEF = "Grid";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean21 = createNode("MetadataBoolean");
MetadataBoolean21.name = "enabled";
MetadataBoolean21.DEF = "enabled_1";
MetadataBoolean21.reference = "http://titania.create3000.de";
MetadataBoolean21.value = new MFBool(new boolean[True]);
MetadataSet20.value = new MFNode();

MetadataSet20.value[0] = MetadataBoolean21;

MetadataFloat MetadataFloat22 = createNode("MetadataFloat");
MetadataFloat22.name = "rotation";
MetadataFloat22.DEF = "rotation";
MetadataFloat22.reference = "http://titania.create3000.de";
MetadataFloat22.value = new MFFloat(new float[1,0,0,1.5708]);
MetadataSet20.value[1] = MetadataFloat22;

MetadataInteger MetadataInteger23 = createNode("MetadataInteger");
MetadataInteger23.name = "dimension";
MetadataInteger23.DEF = "dimension";
MetadataInteger23.reference = "http://titania.create3000.de";
MetadataInteger23.value = new MFInt32(new int[14,10,14]);
MetadataSet20.value[2] = MetadataInteger23;

MetadataSet11.value[3] = MetadataSet20;

MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "Selection";
MetadataSet24.DEF = "Selection";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "children";
MetadataSet25.DEF = "children";
MetadataSet25.reference = "http://titania.create3000.de";
FontStyle FontStyle26 = createNode("FontStyle");
FontStyle26.DEF = "_1";
FontStyle26.family = new MFString(new java.lang.String["SANS"]);
FontStyle26.justify = new MFString(new java.lang.String["END"]);
MetadataSet25.value = FontStyle26;

MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataSet25;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "previous";
MetadataSet27.DEF = "previous";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataSet24.value[1] = MetadataSet27;

MetadataSet11.value[4] = MetadataSet24;

MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "LayerSet";
MetadataSet28.DEF = "LayerSet";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger29 = createNode("MetadataInteger");
MetadataInteger29.name = "activeLayer";
MetadataInteger29.DEF = "activeLayer";
MetadataInteger29.reference = "http://titania.create3000.de";
MetadataInteger29.value = new MFInt32(new int[-1]);
MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataInteger29;

MetadataSet11.value[5] = MetadataSet28;

WorldInfo10.metadata = MetadataSet11;

children = new MFNode();

children[0] = WorldInfo10;

LayerSet LayerSet30 = createNode("LayerSet");
LayerSet30.activeLayer = 1;
LayerSet30.order = new MFInt32(new int[1,2]);
Layer Layer31 = createNode("Layer");
Layer31.DEF = "World";
Layer31.pickable = True;
Layer31.objectType = new MFString(new java.lang.String["ALL"]);
MetadataSet MetadataSet32 = createNode("MetadataSet");
MetadataSet32.name = "Titania";
MetadataSet32.DEF = "Titania_1";
MetadataSet32.reference = "http://titania.create3000.de";
MetadataSet MetadataSet33 = createNode("MetadataSet");
MetadataSet33.name = "AngleGrid";
MetadataSet33.DEF = "AngleGrid_1";
MetadataSet33.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean34 = createNode("MetadataBoolean");
MetadataBoolean34.name = "enabled";
MetadataBoolean34.reference = "http://titania.create3000.de";
MetadataBoolean34.value = new MFBool(new boolean[False]);
MetadataSet33.value = new MFNode();

MetadataSet33.value[0] = MetadataBoolean34;

MetadataSet32.value = new MFNode();

MetadataSet32.value[0] = MetadataSet33;

MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "Grid";
MetadataSet35.DEF = "Grid_1";
MetadataSet35.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean36 = createNode("MetadataBoolean");
MetadataBoolean36.name = "enabled";
MetadataBoolean36.reference = "http://titania.create3000.de";
MetadataBoolean36.value = new MFBool(new boolean[True]);
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataBoolean36;

MetadataFloat MetadataFloat37 = createNode("MetadataFloat");
MetadataFloat37.name = "rotation";
MetadataFloat37.reference = "http://titania.create3000.de";
MetadataFloat37.value = new MFFloat(new float[1,0,0,1.5708]);
MetadataSet35.value[1] = MetadataFloat37;

MetadataFloat MetadataFloat38 = createNode("MetadataFloat");
MetadataFloat38.name = "translation";
MetadataFloat38.reference = "http://titania.create3000.de";
MetadataFloat38.value = new MFFloat(new float[0,-1,-0.00000363588]);
MetadataSet35.value[2] = MetadataFloat38;

MetadataInteger MetadataInteger39 = createNode("MetadataInteger");
MetadataInteger39.name = "dimension";
MetadataInteger39.reference = "http://titania.create3000.de";
MetadataInteger39.value = new MFInt32(new int[24,10,10]);
MetadataSet35.value[3] = MetadataInteger39;

MetadataSet32.value[1] = MetadataSet35;

Layer31.metadata = MetadataSet32;

Background Background40 = createNode("Background");
Background40.skyColor = new MFColor(new float[0.2,0.2,0.2]);
Layer31.children = new MFNode();

Layer31.children[0] = Background40;

Viewpoint Viewpoint41 = createNode("Viewpoint");
Viewpoint41.description = "Initial View";
Viewpoint41.position = new SFVec3f(new float[0.0131182,-0.957873,18.0398]);
Viewpoint41.orientation = new SFRotation(new float[-0.75044037211608,0.63789731631007,-0.17299208578048,0.0049795100000208]);
Viewpoint41.centerOfRotation = new SFVec3f(new float[-0.0443001,-1.015,-0.00000906456]);
Layer31.children[1] = Viewpoint41;

Transform Transform42 = createNode("Transform");
Transform Transform43 = createNode("Transform");
Transform43.translation = new SFVec3f(new float[0.999976,-0.000498056,0]);
Transform43.center = new SFVec3f(new float[-5.99998,4.0005,-1.36914e-7]);
Transform Transform44 = createNode("Transform");
Transform44.translation = new SFVec3f(new float[-6,4,-1.36914e-7]);
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Appearance46.DEF = "Grey";
Material Material47 = createNode("Material");
Appearance46.material = Material47;

ImageTexture ImageTexture48 = createNode("ImageTexture");
ImageTexture48.DEF = "_2";
ImageTexture48.url = new MFString(new java.lang.String["../images/test.png"]);
Appearance46.texture = ImageTexture48;

Shape45.appearance = Appearance46;

ArcClose2D ArcClose2D49 = createNode("ArcClose2D");
ArcClose2D49.DEF = "ArcClose2D";
ArcClose2D49.startAngle = 2.09;
ArcClose2D49.endAngle = 5.8808;
Shape45.geometry = ArcClose2D49;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Transform43.children = new MFNode();

Transform43.children[0] = Transform44;

Transform Transform50 = createNode("Transform");
Transform50.translation = new SFVec3f(new float[-6,4,-1.36914e-7]);
Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
Appearance52.DEF = "Image";
Material Material53 = createNode("Material");
Appearance52.material = Material53;

ImageTexture ImageTexture54 = createNode("ImageTexture");
ImageTexture54.USE = "_2";
Appearance52.texture = ImageTexture54;

Shape51.appearance = Appearance52;

ArcClose2D ArcClose2D55 = createNode("ArcClose2D");
ArcClose2D55.DEF = "ArcClose2D_1";
ArcClose2D55.closureType = "CHORD";
Shape51.geometry = ArcClose2D55;

Transform50.child = new undefined();

Transform50.child[0] = Shape51;

Transform43.children[1] = Transform50;

TouchSensor TouchSensor56 = createNode("TouchSensor");
TouchSensor56.DEF = "_3";
TouchSensor56.description = "ArcClose2D";
Transform43.children[2] = TouchSensor56;

Transform42.children = new MFNode();

Transform42.children[0] = Transform43;

Transform Transform57 = createNode("Transform");
Transform57.translation = new SFVec3f(new float[-2,4,-1.36914e-7]);
Shape Shape58 = createNode("Shape");
Appearance Appearance59 = createNode("Appearance");
Appearance59.USE = "Image";
Shape58.appearance = Appearance59;

Disk2D Disk2D60 = createNode("Disk2D");
Disk2D60.DEF = "Disk2D";
Disk2D60.innerRadius = 0.54;
Disk2D60.outerRadius = 1.26;
Shape58.geometry = Disk2D60;

Transform57.child = new undefined();

Transform57.child[0] = Shape58;

TouchSensor TouchSensor61 = createNode("TouchSensor");
TouchSensor61.DEF = "_4";
TouchSensor61.description = "Disk2D";
Transform57.children[1] = TouchSensor61;

Transform42.children[1] = Transform57;

Transform Transform62 = createNode("Transform");
Transform62.translation = new SFVec3f(new float[2,4,-1.36914e-7]);
Shape Shape63 = createNode("Shape");
Appearance Appearance64 = createNode("Appearance");
Appearance64.USE = "Image";
Shape63.appearance = Appearance64;

Rectangle2D Rectangle2D65 = createNode("Rectangle2D");
Rectangle2D65.DEF = "Rectangle2D";
Shape63.geometry = Rectangle2D65;

Transform62.child = new undefined();

Transform62.child[0] = Shape63;

TouchSensor TouchSensor66 = createNode("TouchSensor");
TouchSensor66.DEF = "_5";
TouchSensor66.description = "Rectangle2D";
Transform62.children[1] = TouchSensor66;

Transform42.children[2] = Transform62;

Transform Transform67 = createNode("Transform");
Transform67.translation = new SFVec3f(new float[5,4,-1.36914e-7]);
Shape Shape68 = createNode("Shape");
Appearance Appearance69 = createNode("Appearance");
Appearance69.USE = "Image";
Shape68.appearance = Appearance69;

TriangleSet2D TriangleSet2D70 = createNode("TriangleSet2D");
TriangleSet2D70.DEF = "TriangleSet2D";
TriangleSet2D70.vertices = new MFVec2f(new float[-1,-1,1,-1,0,1]);
Shape68.geometry = TriangleSet2D70;

Transform67.child = new undefined();

Transform67.child[0] = Shape68;

TouchSensor TouchSensor71 = createNode("TouchSensor");
TouchSensor71.DEF = "_6";
TouchSensor71.description = "TriangleSet2D";
Transform67.children[1] = TouchSensor71;

Transform42.children[3] = Transform67;

Layer31.children[2] = Transform42;

Transform Transform72 = createNode("Transform");
Transform Transform73 = createNode("Transform");
Transform73.translation = new SFVec3f(new float[-5,0,0]);
Transform Transform74 = createNode("Transform");
Shape Shape75 = createNode("Shape");
Appearance Appearance76 = createNode("Appearance");
Appearance76.DEF = "Grey_1";
Material Material77 = createNode("Material");
Material77.DEF = "Autumn2";
Material77.ambientIntensity = 0.188697;
Material77.diffuseColor = new SFColor(new float[0.749548,0.601201,0.461629]);
Material77.specularColor = new SFColor(new float[0.0786239,0.0803968,0.0484226]);
Material77.shininess = 0.167568;
Appearance76.material = Material77;

Shape75.appearance = Appearance76;

ArcClose2D ArcClose2D78 = createNode("ArcClose2D");
ArcClose2D78.USE = "ArcClose2D_1";
Shape75.geometry = ArcClose2D78;

Transform74.child = new undefined();

Transform74.child[0] = Shape75;

Transform73.children = new MFNode();

Transform73.children[0] = Transform74;

Transform Transform79 = createNode("Transform");
Shape Shape80 = createNode("Shape");
Appearance Appearance81 = createNode("Appearance");
Appearance81.DEF = "Grey_2";
Material Material82 = createNode("Material");
Material82.DEF = "Autumn9";
Material82.ambientIntensity = 0.0724766;
Material82.diffuseColor = new SFColor(new float[0.297959,0.140816,0.105763]);
Material82.specularColor = new SFColor(new float[0.176503,0.0894282,0]);
Material82.shininess = 0.0486486;
Appearance81.material = Material82;

Shape80.appearance = Appearance81;

ArcClose2D ArcClose2D83 = createNode("ArcClose2D");
ArcClose2D83.DEF = "ArcClose2D_2";
ArcClose2D83.startAngle = 2.09;
ArcClose2D83.endAngle = 5.8808;
ArcClose2D83.radius = 1.2;
Shape80.geometry = ArcClose2D83;

Transform79.child = new undefined();

Transform79.child[0] = Shape80;

Transform73.children[1] = Transform79;

TouchSensor TouchSensor84 = createNode("TouchSensor");
TouchSensor84.USE = "_3";
Transform73.children[2] = TouchSensor84;

Transform72.children = new MFNode();

Transform72.children[0] = Transform73;

Transform Transform85 = createNode("Transform");
Transform85.translation = new SFVec3f(new float[-2,0,0]);
Shape Shape86 = createNode("Shape");
Appearance Appearance87 = createNode("Appearance");
Appearance87.DEF = "Grey_3";
Material Material88 = createNode("Material");
Material88.DEF = "Autumn21";
Material88.ambientIntensity = 0.0670918;
Material88.diffuseColor = new SFColor(new float[0.272994,0.0820021,0.0580278]);
Material88.specularColor = new SFColor(new float[0.27551,0.0418016,0.0418016]);
Material88.shininess = 0.127551;
Appearance87.material = Material88;

Shape86.appearance = Appearance87;

Disk2D Disk2D89 = createNode("Disk2D");
Disk2D89.USE = "Disk2D";
Shape86.geometry = Disk2D89;

Transform85.child = new undefined();

Transform85.child[0] = Shape86;

TouchSensor TouchSensor90 = createNode("TouchSensor");
TouchSensor90.USE = "_4";
Transform85.children[1] = TouchSensor90;

Transform72.children[1] = Transform85;

Transform Transform91 = createNode("Transform");
Transform91.translation = new SFVec3f(new float[2,0,0]);
Shape Shape92 = createNode("Shape");
Appearance Appearance93 = createNode("Appearance");
Appearance93.DEF = "Grey_4";
Material Material94 = createNode("Material");
Material94.DEF = "Autumn34";
Material94.ambientIntensity = 0.0445259;
Material94.diffuseColor = new SFColor(new float[0.0877551,0.0639456,0.183051]);
Material94.specularColor = new SFColor(new float[0.234804,0.171098,0.489785]);
Material94.shininess = 0.0702703;
Appearance93.material = Material94;

Shape92.appearance = Appearance93;

Rectangle2D Rectangle2D95 = createNode("Rectangle2D");
Rectangle2D95.USE = "Rectangle2D";
Shape92.geometry = Rectangle2D95;

Transform91.child = new undefined();

Transform91.child[0] = Shape92;

TouchSensor TouchSensor96 = createNode("TouchSensor");
TouchSensor96.USE = "_5";
Transform91.children[1] = TouchSensor96;

Transform72.children[2] = Transform91;

Transform Transform97 = createNode("Transform");
Transform97.translation = new SFVec3f(new float[5,0,0]);
Shape Shape98 = createNode("Shape");
Appearance Appearance99 = createNode("Appearance");
Appearance99.DEF = "Grey_5";
Material Material100 = createNode("Material");
Material100.DEF = "Autumn3";
Material100.ambientIntensity = 0.098983;
Material100.diffuseColor = new SFColor(new float[0.395932,0.226244,0.128242]);
Material100.specularColor = new SFColor(new float[1,0.464407,0.4753]);
Material100.shininess = 0.994595;
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

TriangleSet2D TriangleSet2D101 = createNode("TriangleSet2D");
TriangleSet2D101.USE = "TriangleSet2D";
Shape98.geometry = TriangleSet2D101;

Transform97.child = new undefined();

Transform97.child[0] = Shape98;

TouchSensor TouchSensor102 = createNode("TouchSensor");
TouchSensor102.USE = "_6";
Transform97.children[1] = TouchSensor102;

Transform72.children[3] = Transform97;

Layer31.children[3] = Transform72;

Transform Transform103 = createNode("Transform");
Transform Transform104 = createNode("Transform");
Transform104.translation = new SFVec3f(new float[-5,-3,1.02686e-7]);
Shape Shape105 = createNode("Shape");
Appearance Appearance106 = createNode("Appearance");
LineProperties LineProperties107 = createNode("LineProperties");
LineProperties107.DEF = "_7";
LineProperties107.linewidthScaleFactor = 7;
Appearance106.lineProperties = LineProperties107;

Material Material108 = createNode("Material");
Material108.emissiveColor = new SFColor(new float[0.176816,0.506107,0.548295]);
Appearance106.material = Material108;

Shape105.appearance = Appearance106;

Arc2D Arc2D109 = createNode("Arc2D");
Arc2D109.endAngle = 0;
Shape105.geometry = Arc2D109;

Transform104.child = new undefined();

Transform104.child[0] = Shape105;

Transform103.children = new MFNode();

Transform103.children[0] = Transform104;

Transform Transform110 = createNode("Transform");
Transform110.translation = new SFVec3f(new float[-5.00105,-0.000807524,0]);
Transform110.center = new SFVec3f(new float[3.00105,-2.99919,1.02686e-7]);
Transform Transform111 = createNode("Transform");
Transform111.translation = new SFVec3f(new float[3,-3,1.02686e-7]);
Shape Shape112 = createNode("Shape");
Appearance Appearance113 = createNode("Appearance");
LineProperties LineProperties114 = createNode("LineProperties");
LineProperties114.USE = "_7";
Appearance113.lineProperties = LineProperties114;

Material Material115 = createNode("Material");
Material115.emissiveColor = new SFColor(new float[0.710584,0.360126,0.121906]);
Appearance113.material = Material115;

Shape112.appearance = Appearance113;

Arc2D Arc2D116 = createNode("Arc2D");
Shape112.geometry = Arc2D116;

Transform111.child = new undefined();

Transform111.child[0] = Shape112;

Transform110.children = new MFNode();

Transform110.children[0] = Transform111;

Transform Transform117 = createNode("Transform");
Transform117.translation = new SFVec3f(new float[3,-3,1.02686e-7]);
Shape Shape118 = createNode("Shape");
Appearance Appearance119 = createNode("Appearance");
LineProperties LineProperties120 = createNode("LineProperties");
LineProperties120.USE = "_7";
Appearance119.lineProperties = LineProperties120;

Material Material121 = createNode("Material");
Material121.emissiveColor = new SFColor(new float[0.797451,0.660717,0.177288]);
Appearance119.material = Material121;

Shape118.appearance = Appearance119;

Arc2D Arc2D122 = createNode("Arc2D");
Arc2D122.startAngle = 2;
Arc2D122.endAngle = 6;
Shape118.geometry = Arc2D122;

Transform117.child = new undefined();

Transform117.child[0] = Shape118;

Transform110.children[1] = Transform117;

Transform103.children[1] = Transform110;

Transform Transform123 = createNode("Transform");
Transform123.translation = new SFVec3f(new float[0,-3,1.02686e-7]);
Shape Shape124 = createNode("Shape");
Appearance Appearance125 = createNode("Appearance");
LineProperties LineProperties126 = createNode("LineProperties");
LineProperties126.USE = "_7";
Appearance125.lineProperties = LineProperties126;

Material Material127 = createNode("Material");
Material127.emissiveColor = new SFColor(new float[0.759681,0.206631,0.206631]);
Appearance125.material = Material127;

Shape124.appearance = Appearance125;

Arc2D Arc2D128 = createNode("Arc2D");
Arc2D128.startAngle = 6;
Arc2D128.endAngle = 2;
Shape124.geometry = Arc2D128;

Transform123.child = new undefined();

Transform123.child[0] = Shape124;

Transform103.children[2] = Transform123;

Transform Transform129 = createNode("Transform");
Transform Transform130 = createNode("Transform");
Transform130.translation = new SFVec3f(new float[-5,-6,2.05371e-7]);
Shape Shape131 = createNode("Shape");
Appearance Appearance132 = createNode("Appearance");
Appearance132.DEF = "Grey_6";
LineProperties LineProperties133 = createNode("LineProperties");
LineProperties133.USE = "_7";
Appearance132.lineProperties = LineProperties133;

Material Material134 = createNode("Material");
Material134.emissiveColor = new SFColor(new float[0.17549,0.755444,0.228457]);
Appearance132.material = Material134;

Shape131.appearance = Appearance132;

Circle2D Circle2D135 = createNode("Circle2D");
Shape131.geometry = Circle2D135;

Transform130.child = new undefined();

Transform130.child[0] = Shape131;

Transform129.children = new MFNode();

Transform129.children[0] = Transform130;

Transform Transform136 = createNode("Transform");
Transform136.translation = new SFVec3f(new float[-2,-6,2.05371e-7]);
Shape Shape137 = createNode("Shape");
Appearance Appearance138 = createNode("Appearance");
Appearance138.DEF = "Grey_7";
LineProperties LineProperties139 = createNode("LineProperties");
LineProperties139.USE = "_7";
Appearance138.lineProperties = LineProperties139;

Material Material140 = createNode("Material");
Material140.emissiveColor = new SFColor(new float[0.453834,0.265405,0.622069]);
Appearance138.material = Material140;

Shape137.appearance = Appearance138;

Circle2D Circle2D141 = createNode("Circle2D");
Circle2D141.radius = 1.29;
Shape137.geometry = Circle2D141;

Transform136.child = new undefined();

Transform136.child[0] = Shape137;

Transform129.children[1] = Transform136;

Transform103.children[3] = Transform129;

Layer31.children[4] = Transform103;

Transform Transform142 = createNode("Transform");
Transform142.translation = new SFVec3f(new float[2,-3,-0.0000109853]);
Transform142.scale = new SFVec3f(new float[0.333333,0.333333,0.333333]);
Shape Shape143 = createNode("Shape");
Appearance Appearance144 = createNode("Appearance");
LineProperties LineProperties145 = createNode("LineProperties");
LineProperties145.USE = "_7";
Appearance144.lineProperties = LineProperties145;

Material Material146 = createNode("Material");
Material146.emissiveColor = new SFColor(new float[0.790403,0.569218,0.772487]);
Appearance144.material = Material146;

Shape143.appearance = Appearance144;

Polyline2D Polyline2D147 = createNode("Polyline2D");
Polyline2D147.lineSegments = new MFVec2f(new float[0,0,1,2,2,1,4,3,10,0]);
Shape143.geometry = Polyline2D147;

Transform142.child = new undefined();

Transform142.child[0] = Shape143;

Layer31.children[5] = Transform142;

Transform Transform148 = createNode("Transform");
Transform148.translation = new SFVec3f(new float[5,-5,-0.0000183347]);
Transform148.scale = new SFVec3f(new float[0.376156,0.376156,0.376156]);
TimeSensor TimeSensor149 = createNode("TimeSensor");
TimeSensor149.DEF = "_8";
TimeSensor149.cycleInterval = 10;
TimeSensor149.loop = True;
Transform148.children = new MFNode();

Transform148.children[0] = TimeSensor149;

NormalInterpolator NormalInterpolator150 = createNode("NormalInterpolator");
NormalInterpolator150.DEF = "_9";
NormalInterpolator150.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
NormalInterpolator150.keyValue = new MFVec3f(new float[1,0,0,0,1,0,-1,0,0,0,-1,0,0,1,0,-1,0,0,0,-1,0,1,0,0,-1,0,0,0,-1,0,1,0,0,0,1,0,0,-1,0,1,0,0,0,1,0,-1,0,0,1,0,0,0,1,0,-1,0,0,0,-1,0]);
Transform148.children[1] = NormalInterpolator150;

Transform Transform151 = createNode("Transform");
Transform151.DEF = "PointSet";
Transform151.scale = new SFVec3f(new float[3,3,3]);
Shape Shape152 = createNode("Shape");
Appearance Appearance153 = createNode("Appearance");
PointProperties PointProperties154 = createNode("PointProperties");
PointProperties154.DEF = "_10";
PointProperties154.pointSizeScaleFactor = 9;
PointProperties154.pointSizeMinValue = 9;
PointProperties154.pointSizeMaxValue = 9;
Appearance153.pointProperties = PointProperties154;

Material Material155 = createNode("Material");
Material155.emissiveColor = new SFColor(new float[0.269542,0.740744,0.418337]);
Appearance153.material = Material155;

Shape152.appearance = Appearance153;

PointSet PointSet156 = createNode("PointSet");
Coordinate Coordinate157 = createNode("Coordinate");
Coordinate157.DEF = "_11";
Coordinate157.point = new MFVec3f(new float[0.419056,-0.907961,0,0.907961,0.419056,0,-0.419056,0.907961,0,-0.907961,-0.419056,0]);
PointSet156.coord = Coordinate157;

Shape152.geometry = PointSet156;

Transform151.child = new undefined();

Transform151.child[0] = Shape152;

Transform148.children[2] = Transform151;

Layer31.children[6] = Transform148;

Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[2,-6,-0.0000220094]);
Shape Shape159 = createNode("Shape");
Appearance Appearance160 = createNode("Appearance");
PointProperties PointProperties161 = createNode("PointProperties");
PointProperties161.USE = "_10";
Appearance160.pointProperties = PointProperties161;

Material Material162 = createNode("Material");
Material162.emissiveColor = new SFColor(new float[0.794118,0.539253,0.311916]);
Appearance160.material = Material162;

Shape159.appearance = Appearance160;

Polypoint2D Polypoint2D163 = createNode("Polypoint2D");
Polypoint2D163.DEF = "_12";
Polypoint2D163.point = new MFVec2f(new float[0.340601,-0.559484,0.972897,-0.0962096,0.201842,-0.297446,-0.534234,0.866497,-0.525527,-0.998792]);
Shape159.geometry = Polypoint2D163;

Transform158.child = new undefined();

Transform158.child[0] = Shape159;

Layer31.children[7] = Transform158;

Script Script164 = createNode("Script");
Script164.DEF = "Polypoint2DScript";
field field165 = createNode("field");
field165.name = "polypoint";
field165.accessType = "initializeOnly";
field165.type = "SFNode";
Polypoint2D Polypoint2D166 = createNode("Polypoint2D");
Polypoint2D166.USE = "_12";
field165.children = new MFNode();

field165.children[0] = Polypoint2D166;

Script164.field = new MFNode();

Script164.field[0] = field165;


Script164.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	for (var i = 0; i < 5; ++ i)\n"+
"	{\n"+
"		polypoint .point [i] .x = Math .random () * 2 - 1;\n"+
"		polypoint .point [i] .y = Math .random () * 2 - 1;\n"+
"	}\n"+
"}`)
Layer31.children[8] = Script164;

LayerSet30.layers = new MFNode();

LayerSet30.layers[0] = Layer31;

Layer Layer167 = createNode("Layer");
Layer167.DEF = "HUD";
Layer167.pickable = True;
Layer167.objectType = new MFString(new java.lang.String["ALL"]);
MetadataSet MetadataSet168 = createNode("MetadataSet");
MetadataSet168.name = "Titania";
MetadataSet168.DEF = "Titania_2";
MetadataSet168.reference = "http://titania.create3000.de";
MetadataSet MetadataSet169 = createNode("MetadataSet");
MetadataSet169.name = "Grid";
MetadataSet169.DEF = "Grid_2";
MetadataSet169.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean170 = createNode("MetadataBoolean");
MetadataBoolean170.name = "enabled";
MetadataBoolean170.reference = "http://titania.create3000.de";
MetadataBoolean170.value = new MFBool(new boolean[True]);
MetadataSet169.value = new MFNode();

MetadataSet169.value[0] = MetadataBoolean170;

MetadataFloat MetadataFloat171 = createNode("MetadataFloat");
MetadataFloat171.name = "rotation";
MetadataFloat171.reference = "http://titania.create3000.de";
MetadataFloat171.value = new MFFloat(new float[1,0,0,1.5708]);
MetadataSet169.value[1] = MetadataFloat171;

MetadataFloat MetadataFloat172 = createNode("MetadataFloat");
MetadataFloat172.name = "scale";
MetadataFloat172.reference = "http://titania.create3000.de";
MetadataFloat172.value = new MFFloat(new float[0.049,0.049,0.049]);
MetadataSet169.value[2] = MetadataFloat172;

MetadataInteger MetadataInteger173 = createNode("MetadataInteger");
MetadataInteger173.name = "dimension";
MetadataInteger173.reference = "http://titania.create3000.de";
MetadataInteger173.value = new MFInt32(new int[73,10,41]);
MetadataSet169.value[3] = MetadataInteger173;

MetadataInteger MetadataInteger174 = createNode("MetadataInteger");
MetadataInteger174.name = "majorLineEvery";
MetadataInteger174.reference = "http://titania.create3000.de";
MetadataInteger174.value = new MFInt32(new int[5,5,5,5,0,5]);
MetadataSet169.value[4] = MetadataInteger174;

MetadataInteger MetadataInteger175 = createNode("MetadataInteger");
MetadataInteger175.name = "majorLineOffset";
MetadataInteger175.reference = "http://titania.create3000.de";
MetadataInteger175.value = new MFInt32(new int[0,0,-5,-1,0,-6]);
MetadataSet169.value[5] = MetadataInteger175;

MetadataFloat MetadataFloat176 = createNode("MetadataFloat");
MetadataFloat176.name = "lineColor";
MetadataFloat176.reference = "http://titania.create3000.de";
MetadataFloat176.value = new MFFloat(new float[1,0.7,0.7,0.0588235]);
MetadataSet169.value[6] = MetadataFloat176;

MetadataSet168.value = new MFNode();

MetadataSet168.value[0] = MetadataSet169;

MetadataSet MetadataSet177 = createNode("MetadataSet");
MetadataSet177.name = "AngleGrid";
MetadataSet177.DEF = "AngleGrid_2";
MetadataSet177.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean178 = createNode("MetadataBoolean");
MetadataBoolean178.name = "enabled";
MetadataBoolean178.reference = "http://titania.create3000.de";
MetadataBoolean178.value = new MFBool(new boolean[False]);
MetadataSet177.value = new MFNode();

MetadataSet177.value[0] = MetadataBoolean178;

MetadataSet168.value[1] = MetadataSet177;

Layer167.metadata = MetadataSet168;

OrthoViewpoint OrthoViewpoint179 = createNode("OrthoViewpoint");
Layer167.children = new MFNode();

Layer167.children[0] = OrthoViewpoint179;

Transform Transform180 = createNode("Transform");
Transform180.DEF = "Header";
Transform180.translation = new SFVec3f(new float[-1.6905,0.955504,-1]);
Transform180.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape181 = createNode("Shape");
Appearance Appearance182 = createNode("Appearance");
Material Material183 = createNode("Material");
Appearance182.material = Material183;

Shape181.appearance = Appearance182;

Text Text184 = createNode("Text");
Text184.string = new MFString(new java.lang.String[" Geometry2D"]);
Text184.solid = True;
FontStyle FontStyle185 = createNode("FontStyle");
FontStyle185.family = new MFString(new java.lang.String["SANS"]);
FontStyle185.size = 1.61;
FontStyle185.justify = new MFString(new java.lang.String[", ","BEGINBEGIN"]);
Text184.fontStyle = FontStyle185;

Shape181.geometry = Text184;

Transform180.child = new undefined();

Transform180.child[0] = Shape181;

Layer167.children[1] = Transform180;

Group Group186 = createNode("Group");
Group186.DEF = "ShadingMenu";
Script Script187 = createNode("Script");
Script187.DEF = "ShadingScript";
field field188 = createNode("field");
field188.name = "set_pointset";
field188.accessType = "inputOnly";
field188.type = "SFTime";
Script187.field = new MFNode();

Script187.field[0] = field188;

field field189 = createNode("field");
field189.name = "set_wireframe";
field189.accessType = "inputOnly";
field189.type = "SFTime";
Script187.field[1] = field189;

field field190 = createNode("field");
field190.name = "set_flat";
field190.accessType = "inputOnly";
field190.type = "SFTime";
Script187.field[2] = field190;

field field191 = createNode("field");
field191.name = "set_gouraud";
field191.accessType = "inputOnly";
field191.type = "SFTime";
Script187.field[3] = field191;

field field192 = createNode("field");
field192.name = "set_phong";
field192.accessType = "inputOnly";
field192.type = "SFTime";
Script187.field[4] = field192;


Script187.setSourceCode(`javascript:\n"+
"\n"+
"function set_pointset ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"POINTSET\");\n"+
"	Browser .setDescription (\"Shading: Pointset\");\n"+
"}\n"+
"\n"+
"function set_wireframe ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"WIREFRAME\");\n"+
"	Browser .setDescription (\"Shading: Wirefrane\");\n"+
"}\n"+
"\n"+
"function set_flat ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"FLAT\");\n"+
"	Browser .setDescription (\"Shading: Flat\");\n"+
"}\n"+
"\n"+
"function set_gouraud ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"GOURAUD\");\n"+
"	Browser .setDescription (\"Shading: Gouraud\");\n"+
"}\n"+
"\n"+
"function set_phong ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"PHONG\");\n"+
"	Browser .setDescription (\"Shading: Phong\");\n"+
"}`)
Group186.children = new MFNode();

Group186.children[0] = Script187;

Transform Transform193 = createNode("Transform");
Transform193.DEF = "Header_1";
Transform193.translation = new SFVec3f(new float[1.6905,-0.857496,-1]);
Transform193.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape194 = createNode("Shape");
Appearance Appearance195 = createNode("Appearance");
Material Material196 = createNode("Material");
Material196.DEF = "Artdeco31";
Material196.ambientIntensity = 0;
Material196.diffuseColor = new SFColor(new float[0,0,0]);
Material196.shininess = 0;
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

Text Text197 = createNode("Text");
Text197.string = new MFString(new java.lang.String["Shading"]);
Text197.solid = True;
FontStyle FontStyle198 = createNode("FontStyle");
FontStyle198.family = new MFString(new java.lang.String["SANS"]);
FontStyle198.style = "BOLD";
FontStyle198.size = 0.68;
FontStyle198.justify = new MFString(new java.lang.String["END"]);
Text197.fontStyle = FontStyle198;

Shape194.geometry = Text197;

Transform193.child = new undefined();

Transform193.child[0] = Shape194;

Group186.children[1] = Transform193;

Transform Transform199 = createNode("Transform");
Transform199.DEF = "Text";
Transform199.translation = new SFVec3f(new float[1.6905,-0.955496,-1]);
Transform199.scale = new SFVec3f(new float[0.0672307,0.0672307,0.0672307]);
Shape Shape200 = createNode("Shape");
Appearance Appearance201 = createNode("Appearance");
Material Material202 = createNode("Material");
Appearance201.material = Material202;

Shape200.appearance = Appearance201;

Text Text203 = createNode("Text");
Text203.string = new MFString(new java.lang.String["Pointset Wireframe Flat Gouraud Phong"]);
Text203.solid = True;
FontStyle FontStyle204 = createNode("FontStyle");
FontStyle204.USE = "_1";
Text203.fontStyle = FontStyle204;

Shape200.geometry = Text203;

Transform199.child = new undefined();

Transform199.child[0] = Shape200;

Group186.children[2] = Transform199;

Transform Transform205 = createNode("Transform");
Transform205.DEF = "Pointset";
Transform205.translation = new SFVec3f(new float[0.436176,-0.916146,0]);
Transform205.scale = new SFVec3f(new float[0.139972,0.040588,0.040588]);
Shape Shape206 = createNode("Shape");
Appearance Appearance207 = createNode("Appearance");
Material Material208 = createNode("Material");
Material208.DEF = "_13";
Material208.transparency = 1;
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

IndexedFaceSet IndexedFaceSet209 = createNode("IndexedFaceSet");
IndexedFaceSet209.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet209.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate210 = createNode("TextureCoordinate");
TextureCoordinate210.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet209.texCoord = TextureCoordinate210;

Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet209.coord = Coordinate211;

Shape206.geometry = IndexedFaceSet209;

Transform205.child = new undefined();

Transform205.child[0] = Shape206;

TouchSensor TouchSensor212 = createNode("TouchSensor");
TouchSensor212.DEF = "_14";
Transform205.children[1] = TouchSensor212;

Group186.children[3] = Transform205;

Transform Transform213 = createNode("Transform");
Transform213.DEF = "Wireframe";
Transform213.translation = new SFVec3f(new float[0.77569,-0.916146,0]);
Transform213.scale = new SFVec3f(new float[0.177062,0.040588,0.040588]);
Shape Shape214 = createNode("Shape");
Appearance Appearance215 = createNode("Appearance");
Material Material216 = createNode("Material");
Material216.USE = "_13";
Appearance215.material = Material216;

Shape214.appearance = Appearance215;

IndexedFaceSet IndexedFaceSet217 = createNode("IndexedFaceSet");
IndexedFaceSet217.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet217.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate218 = createNode("TextureCoordinate");
TextureCoordinate218.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet217.texCoord = TextureCoordinate218;

Coordinate Coordinate219 = createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet217.coord = Coordinate219;

Shape214.geometry = IndexedFaceSet217;

Transform213.child = new undefined();

Transform213.child[0] = Shape214;

TouchSensor TouchSensor220 = createNode("TouchSensor");
TouchSensor220.DEF = "_15";
Transform213.children[1] = TouchSensor220;

Group186.children[4] = Transform213;

Transform Transform221 = createNode("Transform");
Transform221.DEF = "Flat";
Transform221.translation = new SFVec3f(new float[1.04432,-0.916146,0]);
Transform221.scale = new SFVec3f(new float[0.0743511,0.040588,0.040588]);
Shape Shape222 = createNode("Shape");
Appearance Appearance223 = createNode("Appearance");
Material Material224 = createNode("Material");
Material224.USE = "_13";
Appearance223.material = Material224;

Shape222.appearance = Appearance223;

IndexedFaceSet IndexedFaceSet225 = createNode("IndexedFaceSet");
IndexedFaceSet225.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet225.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate226 = createNode("TextureCoordinate");
TextureCoordinate226.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet225.texCoord = TextureCoordinate226;

Coordinate Coordinate227 = createNode("Coordinate");
Coordinate227.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet225.coord = Coordinate227;

Shape222.geometry = IndexedFaceSet225;

Transform221.child = new undefined();

Transform221.child[0] = Shape222;

TouchSensor TouchSensor228 = createNode("TouchSensor");
TouchSensor228.DEF = "_16";
Transform221.children[1] = TouchSensor228;

Group186.children[5] = Transform221;

Transform Transform229 = createNode("Transform");
Transform229.DEF = "Gouraud";
Transform229.translation = new SFVec3f(new float[1.27986,-0.916146,0]);
Transform229.scale = new SFVec3f(new float[0.142825,0.040588,0.040588]);
Shape Shape230 = createNode("Shape");
Appearance Appearance231 = createNode("Appearance");
Material Material232 = createNode("Material");
Material232.USE = "_13";
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

IndexedFaceSet IndexedFaceSet233 = createNode("IndexedFaceSet");
IndexedFaceSet233.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet233.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate234 = createNode("TextureCoordinate");
TextureCoordinate234.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet233.texCoord = TextureCoordinate234;

Coordinate Coordinate235 = createNode("Coordinate");
Coordinate235.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet233.coord = Coordinate235;

Shape230.geometry = IndexedFaceSet233;

Transform229.child = new undefined();

Transform229.child[0] = Shape230;

TouchSensor TouchSensor236 = createNode("TouchSensor");
TouchSensor236.DEF = "_17";
Transform229.children[1] = TouchSensor236;

Group186.children[6] = Transform229;

Transform Transform237 = createNode("Transform");
Transform237.DEF = "Phong";
Transform237.translation = new SFVec3f(new float[1.55457,-0.916146,0]);
Transform237.scale = new SFVec3f(new float[0.111441,0.040588,0.040588]);
Shape Shape238 = createNode("Shape");
Appearance Appearance239 = createNode("Appearance");
Material Material240 = createNode("Material");
Material240.USE = "_13";
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

IndexedFaceSet IndexedFaceSet241 = createNode("IndexedFaceSet");
IndexedFaceSet241.texCoordIndex = new MFInt32(new int[0,1,2,3,-1]);
IndexedFaceSet241.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate242 = createNode("TextureCoordinate");
TextureCoordinate242.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet241.texCoord = TextureCoordinate242;

Coordinate Coordinate243 = createNode("Coordinate");
Coordinate243.point = new MFVec3f(new float[-1,-1,0,1,-1,0,1,1,0,-1,1,0]);
IndexedFaceSet241.coord = Coordinate243;

Shape238.geometry = IndexedFaceSet241;

Transform237.child = new undefined();

Transform237.child[0] = Shape238;

TouchSensor TouchSensor244 = createNode("TouchSensor");
TouchSensor244.DEF = "_18";
Transform237.children[1] = TouchSensor244;

Group186.children[7] = Transform237;

Layer167.children[2] = Group186;

LayerSet30.layers[1] = Layer167;

layerSet[1] = LayerSet30;

ROUTE ROUTE245 = createNode("ROUTE");
ROUTE245.fromNode = "_18";
ROUTE245.fromField = "touchTime";
ROUTE245.toNode = "ShadingScript";
ROUTE245.toField = "set_phong";
children[2] = ROUTE245;

ROUTE ROUTE246 = createNode("ROUTE");
ROUTE246.fromNode = "_17";
ROUTE246.fromField = "touchTime";
ROUTE246.toNode = "ShadingScript";
ROUTE246.toField = "set_gouraud";
children[3] = ROUTE246;

ROUTE ROUTE247 = createNode("ROUTE");
ROUTE247.fromNode = "_16";
ROUTE247.fromField = "touchTime";
ROUTE247.toNode = "ShadingScript";
ROUTE247.toField = "set_flat";
children[4] = ROUTE247;

ROUTE ROUTE248 = createNode("ROUTE");
ROUTE248.fromNode = "_15";
ROUTE248.fromField = "touchTime";
ROUTE248.toNode = "ShadingScript";
ROUTE248.toField = "set_wireframe";
children[5] = ROUTE248;

ROUTE ROUTE249 = createNode("ROUTE");
ROUTE249.fromNode = "_14";
ROUTE249.fromField = "touchTime";
ROUTE249.toNode = "ShadingScript";
ROUTE249.toField = "set_pointset";
children[6] = ROUTE249;

ROUTE ROUTE250 = createNode("ROUTE");
ROUTE250.fromNode = "_8";
ROUTE250.fromField = "fraction_changed";
ROUTE250.toNode = "_9";
ROUTE250.toField = "set_fraction";
children[7] = ROUTE250;

ROUTE ROUTE251 = createNode("ROUTE");
ROUTE251.fromNode = "_9";
ROUTE251.fromField = "value_changed";
ROUTE251.toNode = "_11";
ROUTE251.toField = "set_point";
children[8] = ROUTE251;

}
