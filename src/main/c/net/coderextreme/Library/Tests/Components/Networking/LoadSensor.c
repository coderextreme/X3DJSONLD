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
meta3.content = "Sun, 27 Dec 2015 07:44:48 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sun, 27 Dec 2015 12:41:22 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.title = "LoadSensor";
MetadataSet MetadataSet9 = createNode("MetadataSet");
MetadataSet9.name = "Titania";
MetadataSet9.DEF = "Titania";
MetadataSet9.reference = "http://titania.create3000.de";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "NavigationInfo";
MetadataSet10.DEF = "NavigationInfo";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataString MetadataString11 = createNode("MetadataString");
MetadataString11.name = "type";
MetadataString11.DEF = "type";
MetadataString11.reference = "http://titania.create3000.de";
MetadataString11.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataString11;

MetadataSet9.value = new MFNode();

MetadataSet9.value[0] = MetadataSet10;

MetadataSet MetadataSet12 = createNode("MetadataSet");
MetadataSet12.name = "Viewpoint";
MetadataSet12.DEF = "Viewpoint";
MetadataSet12.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble13 = createNode("MetadataDouble");
MetadataDouble13.name = "position";
MetadataDouble13.DEF = "position";
MetadataDouble13.reference = "http://titania.create3000.de";
MetadataDouble13.value = new MFDouble(new double[0,0,10]);
MetadataSet12.value = new MFNode();

MetadataSet12.value[0] = MetadataDouble13;

MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "orientation";
MetadataDouble14.DEF = "orientation";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[0,0,1,0]);
MetadataSet12.value[1] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "centerOfRotation";
MetadataDouble15.DEF = "centerOfRotation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0,0,0]);
MetadataSet12.value[2] = MetadataDouble15;

MetadataSet9.value[1] = MetadataSet12;

WorldInfo8.metadata = MetadataSet9;

children = new MFNode();

children[0] = WorldInfo8;

LoadSensor LoadSensor16 = createNode("LoadSensor");
LoadSensor16.DEF = "_1";
LoadSensor16.timeOut = 10;
Inline Inline17 = createNode("Inline");
Inline17.url = new MFString(new java.lang.String["../Geometry3D/box.x3d"]);
LoadSensor16.children = new MFNode();

LoadSensor16.children[0] = Inline17;

ImageTexture ImageTexture18 = createNode("ImageTexture");
ImageTexture18.url = new MFString(new java.lang.String["../images/ubuntu.png"]);
LoadSensor16.children[1] = ImageTexture18;

ImageTexture ImageTexture19 = createNode("ImageTexture");
ImageTexture19.url = new MFString(new java.lang.String["https://avatars0.githubusercontent.com/u/6417246?v=3&s=96"]);
LoadSensor16.children[2] = ImageTexture19;

AudioClip AudioClip20 = createNode("AudioClip");
AudioClip20.url = new MFString(new java.lang.String["../Sound/04. Like A Virgin.mp3"]);
LoadSensor16.children[3] = AudioClip20;

MovieTexture MovieTexture21 = createNode("MovieTexture");
MovieTexture21.url = new MFString(new java.lang.String["../../../../../Titania/Library/Examples/Vattenfall/stage/film6.mpv"]);
LoadSensor16.children[4] = MovieTexture21;

ShaderPart ShaderPart22 = createNode("ShaderPart");
ShaderPart22.type = "VERTEX";

ShaderPart22.setSourceCode(`data:text/plain,\n"+
"#version 120\n"+
"\n"+
"void main (void)\n"+
"{\n"+
"	gl_Position     = ftransform ();\n"+
"	gl_TexCoord [0] = gl_TextureMatrix [0] * gl_MultiTexCoord0;\n"+
"}`)
LoadSensor16.children[5] = ShaderPart22;

Script Script23 = createNode("Script");

Script23.setSourceCode(`vrmlscript:`)
LoadSensor16.children[6] = Script23;

Inline Inline24 = createNode("Inline");
Inline24.url = new MFString(new java.lang.String[""]);
LoadSensor16.children[7] = Inline24;

children[1] = LoadSensor16;

Script Script25 = createNode("Script");
Script25.DEF = "_2";
field field26 = createNode("field");
field26.name = "set_active";
field26.accessType = "inputOnly";
field26.type = "SFBool";
Script25.field = new MFNode();

Script25.field[0] = field26;

field field27 = createNode("field");
field27.name = "set_loaded";
field27.accessType = "inputOnly";
field27.type = "SFBool";
Script25.field[1] = field27;

field field28 = createNode("field");
field28.name = "set_progress";
field28.accessType = "inputOnly";
field28.type = "SFFloat";
Script25.field[2] = field28;

field field29 = createNode("field");
field29.name = "set_loadTime";
field29.accessType = "inputOnly";
field29.type = "SFTime";
Script25.field[3] = field29;

field field30 = createNode("field");
field30.name = "string_changed";
field30.accessType = "outputOnly";
field30.type = "MFString";
Script25.field[4] = field30;


Script25.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	set_progress (0);\n"+
"}\n"+
"\n"+
"function set_active (value, time)\n"+
"{\n"+
"	print ('isActive: ', value);\n"+
"}\n"+
"\n"+
"function set_loaded (value, time)\n"+
"{\n"+
"	print ('isLoaded: ', value);\n"+
"}\n"+
"\n"+
"function set_progress (value, time)\n"+
"{\n"+
"	print ('progress: ', value);\n"+
"	string_changed = new MFString (value);\n"+
"}\n"+
"\n"+
"function set_loadTime (value, time)\n"+
"{\n"+
"	print ('loadTime: ', value);\n"+
"}`)
children[2] = Script25;

Transform Transform31 = createNode("Transform");
Transform31.DEF = "Text";
Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Appearance33.material = Material34;

Shape32.appearance = Appearance33;

Text Text35 = createNode("Text");
Text35.DEF = "_3";
Text35.string = new MFString(new java.lang.String["0.75"]);
Text35.solid = True;
FontStyle FontStyle36 = createNode("FontStyle");
FontStyle36.justify = new MFString(new java.lang.String["MIDDLE"]);
Text35.fontStyle = FontStyle36;

Shape32.geometry = Text35;

Transform31.child = new undefined();

Transform31.child[0] = Shape32;

children[3] = Transform31;

Anchor Anchor37 = createNode("Anchor");
Anchor37.DEF = "_4";
Anchor37.url = new MFString(new java.lang.String["#Viewpoint"]);
Transform Transform38 = createNode("Transform");
Transform38.DEF = "Sphere";
Transform38.translation = new SFVec3f(new float[0,-1.1894,0]);
Transform38.scale = new SFVec3f(new float[0.230247,0.230247,0.230247]);
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Sphere Sphere42 = createNode("Sphere");
Shape39.geometry = Sphere42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Anchor37.children = new MFNode();

Anchor37.children[0] = Transform38;

children[4] = Anchor37;

LoadSensor LoadSensor43 = createNode("LoadSensor");
LoadSensor43.DEF = "_5";
Anchor Anchor44 = createNode("Anchor");
Anchor44.USE = "_4";
LoadSensor43.children = new MFNode();

LoadSensor43.children[0] = Anchor44;

children[5] = LoadSensor43;

Viewpoint Viewpoint45 = createNode("Viewpoint");
Viewpoint45.DEF = "Viewpoint_1";
children[6] = Viewpoint45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_1";
ROUTE46.fromField = "isActive";
ROUTE46.toNode = "_2";
ROUTE46.toField = "set_active";
children[7] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "_1";
ROUTE47.fromField = "isLoaded";
ROUTE47.toNode = "_2";
ROUTE47.toField = "set_loaded";
children[8] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "_1";
ROUTE48.fromField = "progress";
ROUTE48.toNode = "_2";
ROUTE48.toField = "set_progress";
children[9] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "_1";
ROUTE49.fromField = "loadTime";
ROUTE49.toNode = "_2";
ROUTE49.toField = "set_loadTime";
children[10] = ROUTE49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromNode = "_2";
ROUTE50.fromField = "string_changed";
ROUTE50.toNode = "_3";
ROUTE50.toField = "set_string";
children[11] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromNode = "_5";
ROUTE51.fromField = "isActive";
ROUTE51.toNode = "_2";
ROUTE51.toField = "set_active";
children[12] = ROUTE51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromNode = "_5";
ROUTE52.fromField = "isLoaded";
ROUTE52.toNode = "_2";
ROUTE52.toField = "set_loaded";
children[13] = ROUTE52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromNode = "_5";
ROUTE53.fromField = "progress";
ROUTE53.toNode = "_2";
ROUTE53.toField = "set_progress";
children[14] = ROUTE53;

ROUTE ROUTE54 = createNode("ROUTE");
ROUTE54.fromNode = "_5";
ROUTE54.fromField = "loadTime";
ROUTE54.toNode = "_2";
ROUTE54.toField = "set_loadTime";
children[15] = ROUTE54;

}
