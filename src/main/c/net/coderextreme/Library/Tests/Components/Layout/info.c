#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Geometry2D";
component2.level = 2;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Layering";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Layout";
component4.level = 2;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Scripting";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Text";
component6.level = 1;
head1.component[4] = component6;

meta meta7 = createNode("meta");
meta7.name = "comment";
meta7.content = "Rise and Shine";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "created";
meta8.content = "Fri, 05 Sep 2014 01:58:48 GMT";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "creator";
meta9.content = "Holger Seelig";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "Sunrize X3D Editor V1.1.5, https://create3000.github.io/sunrize/";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "icon";
meta11.content = "../../ui/icons/icon-bw.svg";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "file:///home/holger/Projekte/Library/Tests/Components/Layout/info.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "modified";
meta13.content = "Wed, 11 Oct 2023 21:23:41 GMT";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "title";
meta14.content = "about:info";
head1.meta[12] = meta14;

head = head1;

ExternProtoDeclare ExternProtoDeclare16 = createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "Rotor";
ExternProtoDeclare16.url = new MFString(new java.lang.String["library/Rotor.x3dv"]);
field field17 = createNode("field");
field17.name = "enabled";
field17.accessType = "inputOutput";
field17.type = "SFBool";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

field field18 = createNode("field");
field18.name = "cycleInterval";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ExternProtoDeclare16.field[1] = field18;

field field19 = createNode("field");
field19.name = "axis";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
ExternProtoDeclare16.field[2] = field19;

field field20 = createNode("field");
field20.name = "angle";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
ExternProtoDeclare16.field[3] = field20;

field field21 = createNode("field");
field21.name = "loop";
field21.accessType = "inputOutput";
field21.type = "SFBool";
ExternProtoDeclare16.field[4] = field21;

field field22 = createNode("field");
field22.name = "startTime";
field22.accessType = "inputOutput";
field22.type = "SFTime";
ExternProtoDeclare16.field[5] = field22;

field field23 = createNode("field");
field23.name = "pauseTime";
field23.accessType = "inputOutput";
field23.type = "SFTime";
ExternProtoDeclare16.field[6] = field23;

field field24 = createNode("field");
field24.name = "resumeTime";
field24.accessType = "inputOutput";
field24.type = "SFTime";
ExternProtoDeclare16.field[7] = field24;

field field25 = createNode("field");
field25.name = "stopTime";
field25.accessType = "inputOutput";
field25.type = "SFTime";
ExternProtoDeclare16.field[8] = field25;

field field26 = createNode("field");
field26.name = "isActive";
field26.accessType = "outputOnly";
field26.type = "SFBool";
ExternProtoDeclare16.field[9] = field26;

field field27 = createNode("field");
field27.name = "cycleTime";
field27.accessType = "outputOnly";
field27.type = "SFTime";
ExternProtoDeclare16.field[10] = field27;

field field28 = createNode("field");
field28.name = "rotation_changed";
field28.accessType = "outputOnly";
field28.type = "SFRotation";
ExternProtoDeclare16.field[11] = field28;

children = new MFNode();

children[0] = ExternProtoDeclare16;

WorldInfo WorldInfo29 = createNode("WorldInfo");
WorldInfo29.title = "info";
MetadataSet MetadataSet30 = createNode("MetadataSet");
MetadataSet30.name = "Titania";
MetadataSet30.DEF = "Titania";
MetadataSet30.reference = "http://titania.create3000.de";
MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "NavigationInfo";
MetadataSet31.DEF = "NavigationInfo";
MetadataSet31.reference = "http://titania.create3000.de";
MetadataString MetadataString32 = createNode("MetadataString");
MetadataString32.name = "type";
MetadataString32.DEF = "type";
MetadataString32.reference = "http://titania.create3000.de";
MetadataString32.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataString32;

MetadataSet30.value = new MFNode();

MetadataSet30.value[0] = MetadataSet31;

MetadataSet MetadataSet33 = createNode("MetadataSet");
MetadataSet33.name = "Viewpoint";
MetadataSet33.DEF = "Viewpoint";
MetadataSet33.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble34 = createNode("MetadataDouble");
MetadataDouble34.name = "position";
MetadataDouble34.DEF = "position";
MetadataDouble34.reference = "http://titania.create3000.de";
MetadataDouble34.value = new MFDouble(new double[-0.00152639835141599,-0.028887877240777,9.99995899200439]);
MetadataSet33.value = new MFNode();

MetadataSet33.value[0] = MetadataDouble34;

MetadataDouble MetadataDouble35 = createNode("MetadataDouble");
MetadataDouble35.name = "orientation";
MetadataDouble35.DEF = "orientation";
MetadataDouble35.reference = "http://titania.create3000.de";
MetadataDouble35.value = new MFDouble(new double[0.992968316036784,-0.052313354198032,-0.106194332803706,0.0029296877328307]);
MetadataSet33.value[1] = MetadataDouble35;

MetadataDouble MetadataDouble36 = createNode("MetadataDouble");
MetadataDouble36.name = "centerOfRotation";
MetadataDouble36.DEF = "centerOfRotation";
MetadataDouble36.reference = "http://titania.create3000.de";
MetadataDouble36.value = new MFDouble(new double[0,0,0]);
MetadataSet33.value[2] = MetadataDouble36;

MetadataSet30.value[1] = MetadataSet33;

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

MetadataSet30.value[2] = MetadataSet37;

MetadataSet MetadataSet40 = createNode("MetadataSet");
MetadataSet40.name = "Selection";
MetadataSet40.DEF = "Selection";
MetadataSet40.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean41 = createNode("MetadataBoolean");
MetadataBoolean41.name = "selectGeometry";
MetadataBoolean41.DEF = "selectGeometry";
MetadataBoolean41.reference = "http://titania.create3000.de";
MetadataBoolean41.value = new MFBool(new boolean[False]);
MetadataSet40.value = new MFNode();

MetadataSet40.value[0] = MetadataBoolean41;

MetadataSet MetadataSet42 = createNode("MetadataSet");
MetadataSet42.name = "nodes";
MetadataSet42.DEF = "nodes";
MetadataSet42.reference = "http://titania.create3000.de";
Anchor Anchor43 = createNode("Anchor");
Anchor43.DEF = "_1";
Anchor43.description = "http://titania.create3000.de";
Anchor43.url = new MFString(new java.lang.String["https://create3000.github.io/x_ite/"]);
Transform Transform44 = createNode("Transform");
Transform44.DEF = "Support";
Transform44.translation = new SFVec3f(new float[-0.421689,0.1,1]);
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[0,0,0]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

Text Text48 = createNode("Text");
Text48.string = new MFString(new java.lang.String[", ","For additional support please visithttps://create3000.github.io/x_ite/."]);
FontStyle FontStyle49 = createNode("FontStyle");
FontStyle49.family = new MFString(new java.lang.String[", ","PTN57F.ttfsans"]);
FontStyle49.style = "NORMAL";
FontStyle49.size = 0.04;
FontStyle49.spacing = 1.2;
Text48.fontStyle = FontStyle49;

Shape45.geometry = Text48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Anchor43.children = new MFNode();

Anchor43.children[0] = Transform44;

MetadataSet42.value = Anchor43;

MetadataSet40.value[1] = MetadataSet42;

MetadataSet30.value[3] = MetadataSet40;

MetadataSet MetadataSet50 = createNode("MetadataSet");
MetadataSet50.name = "LayerSet";
MetadataSet50.DEF = "LayerSet";
MetadataSet50.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger51 = createNode("MetadataInteger");
MetadataInteger51.name = "activeLayer";
MetadataInteger51.DEF = "activeLayer";
MetadataInteger51.reference = "http://titania.create3000.de";
MetadataInteger51.value = new MFInt32(new int[-1]);
MetadataSet50.value = new MFNode();

MetadataSet50.value[0] = MetadataInteger51;

MetadataSet30.value[4] = MetadataSet50;

WorldInfo29.metadata = MetadataSet30;

children[1] = WorldInfo29;

NavigationInfo NavigationInfo52 = createNode("NavigationInfo");
NavigationInfo52.type = new MFString(new java.lang.String["NONE"]);
children[2] = NavigationInfo52;

LayerSet LayerSet53 = createNode("LayerSet");
LayerSet53.DEF = "about:info";
LayerSet53.order = new MFInt32(new int[1]);
LayoutLayer LayoutLayer54 = createNode("LayoutLayer");
LayoutLayer54.pickable = True;
LayoutLayer54.objectType = new MFString(new java.lang.String["ALL"]);
Layout Layout55 = createNode("Layout");
LayoutLayer54.layout = Layout55;

Transform Transform56 = createNode("Transform");
Transform56.DEF = "Background";
Transform56.translation = new SFVec3f(new float[0,0,-1]);
Shape Shape57 = createNode("Shape");
Appearance Appearance58 = createNode("Appearance");
Material Material59 = createNode("Material");
Material59.diffuseColor = new SFColor(new float[0,0,0]);
Appearance58.material = Material59;

Shape57.appearance = Appearance58;

Rectangle2D Rectangle2D60 = createNode("Rectangle2D");
Rectangle2D60.size = new SFVec2f(new float[1,1]);
Shape57.geometry = Rectangle2D60;

Transform56.child = new undefined();

Transform56.child[0] = Shape57;

LayoutLayer54.children = new MFNode();

LayoutLayer54.children[0] = Transform56;

LayoutGroup LayoutGroup61 = createNode("LayoutGroup");
LayoutGroup61.DEF = "SupportBox";
Layout Layout62 = createNode("Layout");
Layout62.align = new MFString(new java.lang.String[", ","CENTERTOP"]);
Layout62.offset = new MFFloat(new float[0,-0.32]);
Layout62.size = new MFFloat(new float[1,0.19]);
Layout62.scaleMode = new MFString(new java.lang.String["FRACTION"]);
LayoutGroup61.layout = Layout62;

Shape Shape63 = createNode("Shape");
Shape63.DEF = "HorizontalGrey";
Appearance Appearance64 = createNode("Appearance");
Material Material65 = createNode("Material");
Material65.diffuseColor = new SFColor(new float[0.760784,0.760784,0.760784]);
Appearance64.material = Material65;

Shape63.appearance = Appearance64;

Rectangle2D Rectangle2D66 = createNode("Rectangle2D");
Rectangle2D66.size = new SFVec2f(new float[1,1]);
Shape63.geometry = Rectangle2D66;

LayoutGroup61.children = new MFNode();

LayoutGroup61.children[0] = Shape63;

LayoutLayer54.children[1] = LayoutGroup61;

LayoutGroup LayoutGroup67 = createNode("LayoutGroup");
LayoutGroup67.DEF = "Page_1";
Layout Layout68 = createNode("Layout");
Layout68.scaleMode = new MFString(new java.lang.String[", ","STRETCHNONE"]);
LayoutGroup67.layout = Layout68;

Transform Transform69 = createNode("Transform");
Transform69.scale = new SFVec3f(new float[1.01,1,1]);
Switch Switch70 = createNode("Switch");
Switch70.DEF = "Image";
Switch70.whichChoice = 1;
Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
ImageTexture ImageTexture73 = createNode("ImageTexture");
ImageTexture73.url = new MFString(new java.lang.String["info.png"]);
ImageTexture73.repeatS = False;
ImageTexture73.repeatT = False;
Appearance72.texture = ImageTexture73;

Shape71.appearance = Appearance72;

Rectangle2D Rectangle2D74 = createNode("Rectangle2D");
Rectangle2D74.size = new SFVec2f(new float[1,1]);
Shape71.geometry = Rectangle2D74;

Switch70.children = new MFNode();

Switch70.children[0] = Shape71;

Transform69.children = new MFNode();

Transform69.children[0] = Switch70;

Transform Transform75 = createNode("Transform");
Transform75.DEF = "VerticalGrey";
Transform75.translation = new SFVec3f(new float[0.34,0.245,0]);
Transform75.scale = new SFVec3f(new float[0.2,0.51,1]);
Shape Shape76 = createNode("Shape");
Appearance Appearance77 = createNode("Appearance");
Material Material78 = createNode("Material");
Material78.diffuseColor = new SFColor(new float[0.247059,0.247059,0.247059]);
Appearance77.material = Material78;

Shape76.appearance = Appearance77;

Rectangle2D Rectangle2D79 = createNode("Rectangle2D");
Rectangle2D79.size = new SFVec2f(new float[1,1]);
Shape76.geometry = Rectangle2D79;

Transform75.child = new undefined();

Transform75.child[0] = Shape76;

Transform69.children[1] = Transform75;

Transform Transform80 = createNode("Transform");
Transform80.DEF = "VerticalYellow";
Transform80.translation = new SFVec3f(new float[0.34,-0.255,0]);
Transform80.scale = new SFVec3f(new float[0.2,0.49,1]);
Shape Shape81 = createNode("Shape");
Appearance Appearance82 = createNode("Appearance");
Material Material83 = createNode("Material");
Material83.diffuseColor = new SFColor(new float[1,0.890196,0.176471]);
Appearance82.material = Material83;

Shape81.appearance = Appearance82;

Rectangle2D Rectangle2D84 = createNode("Rectangle2D");
Rectangle2D84.size = new SFVec2f(new float[1,1]);
Shape81.geometry = Rectangle2D84;

Transform80.child = new undefined();

Transform80.child[0] = Shape81;

Transform69.children[2] = Transform80;

LayoutGroup LayoutGroup85 = createNode("LayoutGroup");
LayoutGroup85.DEF = "Content";
Layout Layout86 = createNode("Layout");
Layout86.size = new MFFloat(new float[0.1,1]);
Layout86.scaleMode = new MFString(new java.lang.String[", ","STRETCHSTRETCH"]);
LayoutGroup85.layout = Layout86;

Transform Transform87 = createNode("Transform");
Transform87.DEF = "RotatingLogo";
Transform87.translation = new SFVec3f(new float[-0.480889,0.469111,1]);
Transform87.scale = new SFVec3f(new float[0.022,0.022,0.022]);
ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.name = "Rotor";
ProtoInstance88.DEF = "LogoRotor";
fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "cycleInterval";
fieldValue89.value = "10";
ProtoInstance88.fieldValue = new MFNode();

ProtoInstance88.fieldValue[0] = fieldValue89;

fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "axis";
fieldValue90.value = "0 0 -1";
ProtoInstance88.fieldValue[1] = fieldValue90;

fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "loop";
fieldValue91.value = "true";
ProtoInstance88.fieldValue[2] = fieldValue91;

Transform87.children = new MFNode();

Transform87.children[0] = ProtoInstance88;

Transform Transform92 = createNode("Transform");
Transform92.DEF = "Logo";
Transform92.rotation = new SFRotation(new float[0,0,-1,2.96629171850506]);
Transform92.center = new SFVec3f(new float[5.6,-5.9,0]);
Inline Inline93 = createNode("Inline");
Inline93.global = True;
Inline93.url = new MFString(new java.lang.String["library/logo.x3dv"]);
Transform92.children = new MFNode();

Transform92.children[0] = Inline93;

Transform87.children[1] = Transform92;

LayoutGroup85.children = new MFNode();

LayoutGroup85.children[0] = Transform87;

Transform Transform94 = createNode("Transform");
Transform94.DEF = "Titania_1";
Transform94.translation = new SFVec3f(new float[-0.219,0.3611,1]);
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
Material Material97 = createNode("Material");
Material97.diffuseColor = new SFColor(new float[1,1,1]);
Appearance96.material = Material97;

Shape95.appearance = Appearance96;

Text Text98 = createNode("Text");
Text98.DEF = "BrowserNameText";
Text98.string = new MFString(new java.lang.String["X_ITE"]);
FontStyle FontStyle99 = createNode("FontStyle");
FontStyle99.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle99.style = "BOLD";
FontStyle99.size = 0.12;
Text98.fontStyle = FontStyle99;

Shape95.geometry = Text98;

Transform94.child = new undefined();

Transform94.child[0] = Shape95;

LayoutGroup85.children[1] = Transform94;

Transform Transform100 = createNode("Transform");
Transform100.DEF = "X3D-Browser";
Transform100.translation = new SFVec3f(new float[-0.216884,0.26855,1]);
Shape Shape101 = createNode("Shape");
Appearance Appearance102 = createNode("Appearance");
Material Material103 = createNode("Material");
Material103.diffuseColor = new SFColor(new float[1,1,1]);
Appearance102.material = Material103;

Shape101.appearance = Appearance102;

Text Text104 = createNode("Text");
Text104.string = new MFString(new java.lang.String["X3D Browser"]);
FontStyle FontStyle105 = createNode("FontStyle");
FontStyle105.family = new MFString(new java.lang.String[", ","PTN57F.ttfsans"]);
FontStyle105.style = "BOLD";
FontStyle105.size = 0.08;
Text104.fontStyle = FontStyle105;

Shape101.geometry = Text104;

Transform100.child = new undefined();

Transform100.child[0] = Shape101;

LayoutGroup85.children[2] = Transform100;

Transform Transform106 = createNode("Transform");
Transform106.DEF = "StayInteractive";
Transform106.translation = new SFVec3f(new float[-0.213525,0.219,1]);
Shape Shape107 = createNode("Shape");
Appearance Appearance108 = createNode("Appearance");
Material Material109 = createNode("Material");
Material109.diffuseColor = new SFColor(new float[1,1,1]);
Appearance108.material = Material109;

Shape107.appearance = Appearance108;

Text Text110 = createNode("Text");
Text110.string = new MFString(new java.lang.String["Something special, something more!"]);
Text110.length = new MFFloat(new float[0.408361]);
FontStyle FontStyle111 = createNode("FontStyle");
FontStyle111.family = new MFString(new java.lang.String[", ","PTN57F.ttfsans"]);
FontStyle111.style = "BOLD";
FontStyle111.size = 0.03;
Text110.fontStyle = FontStyle111;

Shape107.geometry = Text110;

Transform106.child = new undefined();

Transform106.child[0] = Shape107;

LayoutGroup85.children[3] = Transform106;

Anchor Anchor112 = createNode("Anchor");
Anchor112.USE = "_1";
LayoutGroup85.children[4] = Anchor112;

Transform Transform113 = createNode("Transform");
Transform113.DEF = "License";
Transform113.translation = new SFVec3f(new float[0.262,0.267,1]);
Shape Shape114 = createNode("Shape");
Appearance Appearance115 = createNode("Appearance");
Material Material116 = createNode("Material");
Material116.diffuseColor = new SFColor(new float[0,0,0]);
Appearance115.material = Material116;

Shape114.appearance = Appearance115;

Text Text117 = createNode("Text");
Text117.string = new MFString(new java.lang.String["GNU GPL v3"]);
FontStyle FontStyle118 = createNode("FontStyle");
FontStyle118.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle118.style = "BOLD";
FontStyle118.size = 0.03;
Text117.fontStyle = FontStyle118;

Shape114.geometry = Text117;

Transform113.child = new undefined();

Transform113.child[0] = Shape114;

LayoutGroup85.children[5] = Transform113;

Transform Transform119 = createNode("Transform");
Transform119.DEF = "Copyright";
Transform119.translation = new SFVec3f(new float[0.262,0.217,1]);
Shape Shape120 = createNode("Shape");
Appearance Appearance121 = createNode("Appearance");
Material Material122 = createNode("Material");
Material122.diffuseColor = new SFColor(new float[0,0,0]);
Appearance121.material = Material122;

Shape120.appearance = Appearance121;

Text Text123 = createNode("Text");
Text123.string = new MFString(new java.lang.String["© 2010 - 2014"]);
Text123.length = new MFFloat(new float[0.15]);
FontStyle FontStyle124 = createNode("FontStyle");
FontStyle124.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle124.style = "BOLD";
FontStyle124.size = 0.03;
Text123.fontStyle = FontStyle124;

Shape120.geometry = Text123;

Transform119.child = new undefined();

Transform119.child[0] = Shape120;

LayoutGroup85.children[6] = Transform119;

Transform Transform125 = createNode("Transform");
Transform125.DEF = "VersionNumber";
Transform125.translation = new SFVec3f(new float[-0.438782,-0.385263,1]);
Shape Shape126 = createNode("Shape");
Appearance Appearance127 = createNode("Appearance");
Material Material128 = createNode("Material");
Material128.diffuseColor = new SFColor(new float[1,1,1]);
Appearance127.material = Material128;

Shape126.appearance = Appearance127;

Text Text129 = createNode("Text");
Text129.DEF = "VersionNumberText";
Text129.string = new MFString(new java.lang.String["8.14.0"]);
Text129.maxExtent = 0.65;
FontStyle FontStyle130 = createNode("FontStyle");
FontStyle130.family = new MFString(new java.lang.String[", ","PTN77F.ttfsans"]);
FontStyle130.style = "BOLD";
FontStyle130.size = 0.34;
Text129.fontStyle = FontStyle130;

Shape126.geometry = Text129;

Transform125.child = new undefined();

Transform125.child[0] = Shape126;

Script Script131 = createNode("Script");
Script131.DEF = "VersionNumberScript";
field field132 = createNode("field");
field132.name = "browser";
field132.accessType = "initializeOnly";
field132.type = "SFNode";
Text Text133 = createNode("Text");
Text133.USE = "BrowserNameText";
field132.children = new MFNode();

field132.children[0] = Text133;

Script131.field = new MFNode();

Script131.field[0] = field132;

field field134 = createNode("field");
field134.name = "version";
field134.accessType = "initializeOnly";
field134.type = "SFNode";
Text Text135 = createNode("Text");
Text135.USE = "VersionNumberText";
field134.children = new MFNode();

field134.children[0] = Text135;

Script131.field[1] = field134;


Script131.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	browser .string = new MFString (Browser .name);\n"+
"	version .string = new MFString (Browser .version);\n"+
"}`)
Transform125.children[1] = Script131;

LayoutGroup85.children[7] = Transform125;

Transform69.children[3] = LayoutGroup85;

LayoutGroup67.children = new MFNode();

LayoutGroup67.children[0] = Transform69;

LayoutLayer54.children[2] = LayoutGroup67;

LayerSet53.layers = new MFNode();

LayerSet53.layers[0] = LayoutLayer54;

layerSet[3] = LayerSet53;

Script Script136 = createNode("Script");
Script136.DEF = "EnterWorld";

Script136.setSourceCode(`ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .setBrowserOption ('Dashboard', false);\n"+
"}`)
children[4] = Script136;

ROUTE ROUTE137 = createNode("ROUTE");
ROUTE137.fromNode = "LogoRotor";
ROUTE137.fromField = "rotation_changed";
ROUTE137.toNode = "Logo";
ROUTE137.toField = "set_rotation";
children[5] = ROUTE137;

}
