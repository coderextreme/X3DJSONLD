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
meta3.content = "Fri, 05 Sep 2014 01:58:48 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V3.0.4, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "icon";
meta6.content = "../../ui/icons/icon-bw.svg";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "file:///home/holger/Projekte/Library/Examples/X-ITE/info.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Tue, 29 Aug 2017 13:44:31 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "title";
meta9.content = "about:info";
head1.meta[7] = meta9;

head = head1;

ExternProtoDeclare ExternProtoDeclare11 = createNode("ExternProtoDeclare");
ExternProtoDeclare11.name = "Rotor";
ExternProtoDeclare11.url = new MFString(new java.lang.String["library/Rotor.x3dv"]);
field field12 = createNode("field");
field12.name = "enabled";
field12.accessType = "inputOutput";
field12.type = "SFBool";
ExternProtoDeclare11.field = new MFNode();

ExternProtoDeclare11.field[0] = field12;

field field13 = createNode("field");
field13.name = "cycleInterval";
field13.accessType = "inputOutput";
field13.type = "SFTime";
ExternProtoDeclare11.field[1] = field13;

field field14 = createNode("field");
field14.name = "axis";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
ExternProtoDeclare11.field[2] = field14;

field field15 = createNode("field");
field15.name = "angle";
field15.accessType = "inputOutput";
field15.type = "SFFloat";
ExternProtoDeclare11.field[3] = field15;

field field16 = createNode("field");
field16.name = "loop";
field16.accessType = "inputOutput";
field16.type = "SFBool";
ExternProtoDeclare11.field[4] = field16;

field field17 = createNode("field");
field17.name = "startTime";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ExternProtoDeclare11.field[5] = field17;

field field18 = createNode("field");
field18.name = "pauseTime";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ExternProtoDeclare11.field[6] = field18;

field field19 = createNode("field");
field19.name = "resumeTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
ExternProtoDeclare11.field[7] = field19;

field field20 = createNode("field");
field20.name = "stopTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
ExternProtoDeclare11.field[8] = field20;

field field21 = createNode("field");
field21.name = "isActive";
field21.accessType = "outputOnly";
field21.type = "SFBool";
ExternProtoDeclare11.field[9] = field21;

field field22 = createNode("field");
field22.name = "cycleTime";
field22.accessType = "outputOnly";
field22.type = "SFTime";
ExternProtoDeclare11.field[10] = field22;

field field23 = createNode("field");
field23.name = "rotation_changed";
field23.accessType = "outputOnly";
field23.type = "SFRotation";
ExternProtoDeclare11.field[11] = field23;

children = new MFNode();

children[0] = ExternProtoDeclare11;

WorldInfo WorldInfo24 = createNode("WorldInfo");
WorldInfo24.title = "info";
MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "Titania";
MetadataSet25.DEF = "Titania";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "NavigationInfo";
MetadataSet26.DEF = "NavigationInfo";
MetadataSet26.reference = "http://titania.create3000.de";
MetadataString MetadataString27 = createNode("MetadataString");
MetadataString27.name = "type";
MetadataString27.DEF = "type";
MetadataString27.reference = "http://titania.create3000.de";
MetadataString27.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet26.value = new MFNode();

MetadataSet26.value[0] = MetadataString27;

MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataSet26;

MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "Viewpoint";
MetadataSet28.DEF = "Viewpoint";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble29 = createNode("MetadataDouble");
MetadataDouble29.name = "position";
MetadataDouble29.DEF = "position";
MetadataDouble29.reference = "http://titania.create3000.de";
MetadataDouble29.value = new MFDouble(new double[-0.00152639835141599,-0.028887877240777,9.99995899200439]);
MetadataSet28.value = new MFNode();

MetadataSet28.value[0] = MetadataDouble29;

MetadataDouble MetadataDouble30 = createNode("MetadataDouble");
MetadataDouble30.name = "orientation";
MetadataDouble30.DEF = "orientation";
MetadataDouble30.reference = "http://titania.create3000.de";
MetadataDouble30.value = new MFDouble(new double[0.992968316036784,-0.052313354198032,-0.106194332803706,0.0029296877328307]);
MetadataSet28.value[1] = MetadataDouble30;

MetadataDouble MetadataDouble31 = createNode("MetadataDouble");
MetadataDouble31.name = "centerOfRotation";
MetadataDouble31.DEF = "centerOfRotation";
MetadataDouble31.reference = "http://titania.create3000.de";
MetadataDouble31.value = new MFDouble(new double[0,0,0]);
MetadataSet28.value[2] = MetadataDouble31;

MetadataSet25.value[1] = MetadataSet28;

MetadataSet MetadataSet32 = createNode("MetadataSet");
MetadataSet32.name = "Page";
MetadataSet32.DEF = "Page";
MetadataSet32.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger33 = createNode("MetadataInteger");
MetadataInteger33.name = "activeView";
MetadataInteger33.DEF = "activeView";
MetadataInteger33.reference = "http://titania.create3000.de";
MetadataInteger33.value = new MFInt32(new int[1]);
MetadataSet32.value = new MFNode();

MetadataSet32.value[0] = MetadataInteger33;

MetadataInteger MetadataInteger34 = createNode("MetadataInteger");
MetadataInteger34.name = "multiView";
MetadataInteger34.DEF = "multiView";
MetadataInteger34.reference = "http://titania.create3000.de";
MetadataInteger34.value = new MFInt32(new int[0]);
MetadataSet32.value[1] = MetadataInteger34;

MetadataSet25.value[2] = MetadataSet32;

MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "Selection";
MetadataSet35.DEF = "Selection";
MetadataSet35.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean36 = createNode("MetadataBoolean");
MetadataBoolean36.name = "selectGeometry";
MetadataBoolean36.DEF = "selectGeometry";
MetadataBoolean36.reference = "http://titania.create3000.de";
MetadataBoolean36.value = new MFBool(new boolean[False]);
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataBoolean36;

MetadataSet MetadataSet37 = createNode("MetadataSet");
MetadataSet37.name = "nodes";
MetadataSet37.DEF = "nodes";
MetadataSet37.reference = "http://titania.create3000.de";
Anchor Anchor38 = createNode("Anchor");
Anchor38.DEF = "_1";
Anchor38.description = "http://titania.create3000.de";
Anchor38.url = new MFString(new java.lang.String["http://create3000.de/"]);
Transform Transform39 = createNode("Transform");
Transform39.DEF = "Support";
Transform39.translation = new SFVec3f(new float[-0.421689,0.1,1]);
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.diffuseColor = new SFColor(new float[0,0,0]);
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

Text Text43 = createNode("Text");
Text43.string = new MFString(new java.lang.String[", ","For additional support please visithttp://create3000.de."]);
FontStyle FontStyle44 = createNode("FontStyle");
FontStyle44.family = new MFString(new java.lang.String[", ","PTN57F.ttfsans"]);
FontStyle44.style = "NORMAL";
FontStyle44.size = 0.04;
FontStyle44.spacing = 1.2;
Text43.fontStyle = FontStyle44;

Shape40.geometry = Text43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

Anchor38.children = new MFNode();

Anchor38.children[0] = Transform39;

MetadataSet37.value = Anchor38;

MetadataSet35.value[1] = MetadataSet37;

MetadataSet25.value[3] = MetadataSet35;

MetadataSet MetadataSet45 = createNode("MetadataSet");
MetadataSet45.name = "LayerSet";
MetadataSet45.DEF = "LayerSet";
MetadataSet45.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger46 = createNode("MetadataInteger");
MetadataInteger46.name = "activeLayer";
MetadataInteger46.DEF = "activeLayer";
MetadataInteger46.reference = "http://titania.create3000.de";
MetadataInteger46.value = new MFInt32(new int[-1]);
MetadataSet45.value = new MFNode();

MetadataSet45.value[0] = MetadataInteger46;

MetadataSet25.value[4] = MetadataSet45;

WorldInfo24.metadata = MetadataSet25;

children[1] = WorldInfo24;

NavigationInfo NavigationInfo47 = createNode("NavigationInfo");
NavigationInfo47.type = new MFString(new java.lang.String["NONE"]);
children[2] = NavigationInfo47;

LayerSet LayerSet48 = createNode("LayerSet");
LayerSet48.DEF = "about:info";
LayerSet48.order = new MFInt32(new int[1]);
LayoutLayer LayoutLayer49 = createNode("LayoutLayer");
Layout Layout50 = createNode("Layout");
LayoutLayer49.layout = Layout50;

Transform Transform51 = createNode("Transform");
Transform51.DEF = "Background";
Transform51.translation = new SFVec3f(new float[0,0,-1]);
Shape Shape52 = createNode("Shape");
Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.diffuseColor = new SFColor(new float[0,0,0]);
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

Rectangle2D Rectangle2D55 = createNode("Rectangle2D");
Rectangle2D55.size = new SFVec2f(new float[1,1]);
Shape52.geometry = Rectangle2D55;

Transform51.child = new undefined();

Transform51.child[0] = Shape52;

LayoutLayer49.children = new MFNode();

LayoutLayer49.children[0] = Transform51;

LayoutGroup LayoutGroup56 = createNode("LayoutGroup");
LayoutGroup56.DEF = "SupportBox";
Layout Layout57 = createNode("Layout");
Layout57.align = new MFString(new java.lang.String[", ","CENTERTOP"]);
Layout57.offset = new MFFloat(new float[0,-0.32]);
Layout57.size = new MFFloat(new float[1,0.19]);
Layout57.scaleMode = new MFString(new java.lang.String["FRACTION"]);
LayoutGroup56.layout = Layout57;

Shape Shape58 = createNode("Shape");
Shape58.DEF = "HorizontalGrey";
Appearance Appearance59 = createNode("Appearance");
Material Material60 = createNode("Material");
Material60.diffuseColor = new SFColor(new float[0.760784,0.760784,0.760784]);
Appearance59.material = Material60;

Shape58.appearance = Appearance59;

Rectangle2D Rectangle2D61 = createNode("Rectangle2D");
Rectangle2D61.size = new SFVec2f(new float[1,1]);
Shape58.geometry = Rectangle2D61;

LayoutGroup56.children = new MFNode();

LayoutGroup56.children[0] = Shape58;

LayoutLayer49.children[1] = LayoutGroup56;

LayoutGroup LayoutGroup62 = createNode("LayoutGroup");
LayoutGroup62.DEF = "Page_1";
Layout Layout63 = createNode("Layout");
Layout63.scaleMode = new MFString(new java.lang.String[", ","STRETCHNONE"]);
LayoutGroup62.layout = Layout63;

Transform Transform64 = createNode("Transform");
Transform64.scale = new SFVec3f(new float[1.01,1,1]);
Switch Switch65 = createNode("Switch");
Switch65.DEF = "Image";
Switch65.whichChoice = 1;
Shape Shape66 = createNode("Shape");
Appearance Appearance67 = createNode("Appearance");
ImageTexture ImageTexture68 = createNode("ImageTexture");
ImageTexture68.url = new MFString(new java.lang.String["info.png"]);
ImageTexture68.repeatS = False;
ImageTexture68.repeatT = False;
Appearance67.texture = ImageTexture68;

Shape66.appearance = Appearance67;

Rectangle2D Rectangle2D69 = createNode("Rectangle2D");
Rectangle2D69.size = new SFVec2f(new float[1,1]);
Shape66.geometry = Rectangle2D69;

Switch65.children = new MFNode();

Switch65.children[0] = Shape66;

Transform64.children = new MFNode();

Transform64.children[0] = Switch65;

Transform Transform70 = createNode("Transform");
Transform70.DEF = "VerticalGrey";
Transform70.translation = new SFVec3f(new float[0.34,0.245,0]);
Transform70.scale = new SFVec3f(new float[0.2,0.51,1]);
Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
Material Material73 = createNode("Material");
Material73.diffuseColor = new SFColor(new float[0.247059,0.247059,0.247059]);
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

Rectangle2D Rectangle2D74 = createNode("Rectangle2D");
Rectangle2D74.size = new SFVec2f(new float[1,1]);
Shape71.geometry = Rectangle2D74;

Transform70.child = new undefined();

Transform70.child[0] = Shape71;

Transform64.children[1] = Transform70;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "VerticalYellow";
Transform75.translation = new SFVec3f(new float[0.34,-0.255,0]);
Transform75.scale = new SFVec3f(new float[0.2,0.49,1]);
Shape Shape76 = createNode("Shape");
Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.diffuseColor = new SFColor(new float[1,0.890196,0.176471]);
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

Rectangle2D Rectangle2D79 = createNode("Rectangle2D");
Rectangle2D79.size = new SFVec2f(new float[1,1]);
Shape76.geometry = Rectangle2D79;

Transform75.child = new undefined();

Transform75.child[0] = Shape76;

Transform64.children[2] = Transform75;

LayoutGroup LayoutGroup80 = createNode("LayoutGroup");
LayoutGroup80.DEF = "Content";
Layout Layout81 = createNode("Layout");
Layout81.size = new MFFloat(new float[0.1,1]);
Layout81.scaleMode = new MFString(new java.lang.String[", ","STRETCHSTRETCH"]);
LayoutGroup80.layout = Layout81;

Transform Transform82 = createNode("Transform");
Transform82.DEF = "RotatingLogo";
Transform82.translation = new SFVec3f(new float[-0.480889,0.469111,1]);
Transform82.scale = new SFVec3f(new float[0.022,0.022,0.022]);
ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "Rotor";
ProtoInstance83.DEF = "LogoRotor";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "cycleInterval";
fieldValue84.value = "10";
ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

fieldValue fieldValue85 = createNode("fieldValue");
fieldValue85.name = "axis";
fieldValue85.value = "0 0 -1";
ProtoInstance83.fieldValue[1] = fieldValue85;

fieldValue fieldValue86 = createNode("fieldValue");
fieldValue86.name = "loop";
fieldValue86.value = "true";
ProtoInstance83.fieldValue[2] = fieldValue86;

Transform82.children = new MFNode();

Transform82.children[0] = ProtoInstance83;

Transform Transform87 = createNode("Transform");
Transform87.DEF = "Logo";
Transform87.center = new SFVec3f(new float[5.6,-5.9,0]);
Inline Inline88 = createNode("Inline");
Inline88.url = new MFString(new java.lang.String["library/logo.x3dv"]);
Transform87.children = new MFNode();

Transform87.children[0] = Inline88;

Transform82.children[1] = Transform87;

LayoutGroup80.children = new MFNode();

LayoutGroup80.children[0] = Transform82;

Transform Transform89 = createNode("Transform");
Transform89.DEF = "Titania_1";
Transform89.translation = new SFVec3f(new float[-0.219,0.3611,1]);
Shape Shape90 = createNode("Shape");
Appearance Appearance91 = createNode("Appearance");
Material Material92 = createNode("Material");
Material92.diffuseColor = new SFColor(new float[1,1,1]);
Appearance91.material = Material92;

Shape90.appearance = Appearance91;

Text Text93 = createNode("Text");
Text93.DEF = "BrowserNameText";
Text93.string = new MFString(new java.lang.String["Titania"]);
FontStyle FontStyle94 = createNode("FontStyle");
FontStyle94.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle94.style = "BOLD";
FontStyle94.size = 0.12;
Text93.fontStyle = FontStyle94;

Shape90.geometry = Text93;

Transform89.child = new undefined();

Transform89.child[0] = Shape90;

LayoutGroup80.children[1] = Transform89;

Transform Transform95 = createNode("Transform");
Transform95.DEF = "X3D-Browser";
Transform95.translation = new SFVec3f(new float[-0.216884,0.26855,1]);
Shape Shape96 = createNode("Shape");
Appearance Appearance97 = createNode("Appearance");
Material Material98 = createNode("Material");
Material98.diffuseColor = new SFColor(new float[1,1,1]);
Appearance97.material = Material98;

Shape96.appearance = Appearance97;

Text Text99 = createNode("Text");
Text99.string = new MFString(new java.lang.String["X3D Browser"]);
FontStyle FontStyle100 = createNode("FontStyle");
FontStyle100.family = new MFString(new java.lang.String[", ","PTN57F.ttfsans"]);
FontStyle100.style = "BOLD";
FontStyle100.size = 0.08;
Text99.fontStyle = FontStyle100;

Shape96.geometry = Text99;

Transform95.child = new undefined();

Transform95.child[0] = Shape96;

LayoutGroup80.children[2] = Transform95;

Transform Transform101 = createNode("Transform");
Transform101.DEF = "StayInteractive";
Transform101.translation = new SFVec3f(new float[-0.213525,0.219,1]);
Shape Shape102 = createNode("Shape");
Appearance Appearance103 = createNode("Appearance");
Material Material104 = createNode("Material");
Material104.diffuseColor = new SFColor(new float[1,1,1]);
Appearance103.material = Material104;

Shape102.appearance = Appearance103;

Text Text105 = createNode("Text");
Text105.string = new MFString(new java.lang.String["Something special, something more!"]);
Text105.length = new MFFloat(new float[0.408361]);
FontStyle FontStyle106 = createNode("FontStyle");
FontStyle106.family = new MFString(new java.lang.String[", ","PTN57F.ttfsans"]);
FontStyle106.style = "BOLD";
FontStyle106.size = 0.03;
Text105.fontStyle = FontStyle106;

Shape102.geometry = Text105;

Transform101.child = new undefined();

Transform101.child[0] = Shape102;

LayoutGroup80.children[3] = Transform101;

Anchor Anchor107 = createNode("Anchor");
Anchor107.USE = "_1";
LayoutGroup80.children[4] = Anchor107;

Transform Transform108 = createNode("Transform");
Transform108.DEF = "License";
Transform108.translation = new SFVec3f(new float[0.262,0.267,1]);
Shape Shape109 = createNode("Shape");
Appearance Appearance110 = createNode("Appearance");
Material Material111 = createNode("Material");
Material111.diffuseColor = new SFColor(new float[0,0,0]);
Appearance110.material = Material111;

Shape109.appearance = Appearance110;

Text Text112 = createNode("Text");
Text112.string = new MFString(new java.lang.String["GNU GPL v3"]);
FontStyle FontStyle113 = createNode("FontStyle");
FontStyle113.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle113.style = "BOLD";
FontStyle113.size = 0.03;
Text112.fontStyle = FontStyle113;

Shape109.geometry = Text112;

Transform108.child = new undefined();

Transform108.child[0] = Shape109;

LayoutGroup80.children[5] = Transform108;

Transform Transform114 = createNode("Transform");
Transform114.DEF = "Copyright";
Transform114.translation = new SFVec3f(new float[0.262,0.217,1]);
Shape Shape115 = createNode("Shape");
Appearance Appearance116 = createNode("Appearance");
Material Material117 = createNode("Material");
Material117.diffuseColor = new SFColor(new float[0,0,0]);
Appearance116.material = Material117;

Shape115.appearance = Appearance116;

Text Text118 = createNode("Text");
Text118.string = new MFString(new java.lang.String["© 2010 - 2014"]);
Text118.length = new MFFloat(new float[0.15]);
FontStyle FontStyle119 = createNode("FontStyle");
FontStyle119.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle119.style = "BOLD";
FontStyle119.size = 0.03;
Text118.fontStyle = FontStyle119;

Shape115.geometry = Text118;

Transform114.child = new undefined();

Transform114.child[0] = Shape115;

LayoutGroup80.children[6] = Transform114;

Transform Transform120 = createNode("Transform");
Transform120.DEF = "VersionNumber";
Transform120.translation = new SFVec3f(new float[-0.438782,-0.385263,1]);
Shape Shape121 = createNode("Shape");
Appearance Appearance122 = createNode("Appearance");
Material Material123 = createNode("Material");
Material123.diffuseColor = new SFColor(new float[1,1,1]);
Appearance122.material = Material123;

Shape121.appearance = Appearance122;

Text Text124 = createNode("Text");
Text124.DEF = "VersionNumberText";
Text124.string = new MFString(new java.lang.String["3.0.4"]);
Text124.maxExtent = 0.65;
FontStyle FontStyle125 = createNode("FontStyle");
FontStyle125.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle125.style = "BOLD";
FontStyle125.size = 0.34;
Text124.fontStyle = FontStyle125;

Shape121.geometry = Text124;

Transform120.child = new undefined();

Transform120.child[0] = Shape121;

Script Script126 = createNode("Script");
Script126.DEF = "VersionNumberScript";
field field127 = createNode("field");
field127.name = "browser";
field127.accessType = "initializeOnly";
field127.type = "SFNode";
Text Text128 = createNode("Text");
Text128.USE = "BrowserNameText";
field127.children = new MFNode();

field127.children[0] = Text128;

Script126.field = new MFNode();

Script126.field[0] = field127;

field field129 = createNode("field");
field129.name = "version";
field129.accessType = "initializeOnly";
field129.type = "SFNode";
Text Text130 = createNode("Text");
Text130.USE = "VersionNumberText";
field129.children = new MFNode();

field129.children[0] = Text130;

Script126.field[1] = field129;


Script126.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	browser .string = new MFString (Browser .name);\n"+
"	version .string = new MFString (Browser .version);\n"+
"}`)
Transform120.children[1] = Script126;

LayoutGroup80.children[7] = Transform120;

Transform64.children[3] = LayoutGroup80;

LayoutGroup62.children = new MFNode();

LayoutGroup62.children[0] = Transform64;

LayoutLayer49.children[2] = LayoutGroup62;

LayerSet48.layers = new MFNode();

LayerSet48.layers[0] = LayoutLayer49;

layerSet[3] = LayerSet48;

Script Script131 = createNode("Script");
Script131.DEF = "EnterWorld";

Script131.setSourceCode(`ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .setBrowserOption ('Dashboard', false);\n"+
"}`)
children[4] = Script131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromNode = "LogoRotor";
ROUTE132.fromField = "rotation_changed";
ROUTE132.toNode = "Logo";
ROUTE132.toField = "set_rotation";
children[5] = ROUTE132;

}
