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
meta3.content = "Thu, 12 Mar 2015 07:11:12 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.6, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 12 Mar 2015 07:11:34 GMT";
head1.meta[4] = meta6;

head = head1;

Group Group8 = createNode("Group");
WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.info = new MFString(new java.lang.String[", ","Created in CosmoWorlds, ","Packaged by CosmoPackagePackaged by CosmoPackage"]);
Group8.children = new MFNode();

Group8.children[0] = WorldInfo9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "Fire_1";
TimeSensor TimeSensor11 = createNode("TimeSensor");
TimeSensor11.DEF = "_1";
TimeSensor11.loop = True;
Transform10.children = new MFNode();

Transform10.children[0] = TimeSensor11;

Script Script12 = createNode("Script");
Script12.DEF = "_player";
field field13 = createNode("field");
field13.name = "whichChoice_changed";
field13.accessType = "outputOnly";
field13.type = "SFInt32";
Script12.field = new MFNode();

Script12.field[0] = field13;

field field14 = createNode("field");
field14.name = "isActive";
field14.accessType = "inputOnly";
field14.type = "SFBool";
Script12.field[1] = field14;

field field15 = createNode("field");
field15.name = "set_time";
field15.accessType = "inputOnly";
field15.type = "SFTime";
Script12.field[2] = field15;

field field16 = createNode("field");
field16.name = "maxChoice";
field16.accessType = "initializeOnly";
field16.type = "SFInt32";
field16.value = "6";
Script12.field[3] = field16;

field field17 = createNode("field");
field17.name = "count";
field17.accessType = "initializeOnly";
field17.type = "SFInt32";
Script12.field[4] = field17;

field field18 = createNode("field");
field18.name = "fps";
field18.accessType = "initializeOnly";
field18.type = "SFInt32";
field18.value = "12";
Script12.field[5] = field18;

field field19 = createNode("field");
field19.name = "last";
field19.accessType = "initializeOnly";
field19.type = "SFTime";
Script12.field[6] = field19;


Script12.setSourceCode(`vrmlscript:\n"+
"function set_time(value, time)\n"+
"{\n"+
"	if (time - last > 1 / fps){\n"+
"		last = time;\n"+
"		if(++count > maxChoice) count = 0;\n"+
"		whichChoice_changed = count;\n"+
"	}\n"+
"}\n"+
"\n"+
"function isActive(value, time)\n"+
"{\n"+
"	whichChoice_changed = -1;\n"+
"}`)
Transform10.children[1] = Script12;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[0,8.27842e-10,0]);
Billboard Billboard21 = createNode("Billboard");
Transform Transform22 = createNode("Transform");
Transform22.DEF = "Fire";
Transform22.translation = new SFVec3f(new float[0,-8.27842e-10,0]);
Switch Switch23 = createNode("Switch");
Switch23.DEF = "_2";
Switch23.whichChoice = 6;
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["torch.1.png"]);
Appearance25.texture = ImageTexture26;

Shape24.appearance = Appearance25;

IndexedFaceSet IndexedFaceSet27 = createNode("IndexedFaceSet");
IndexedFaceSet27.solid = False;
IndexedFaceSet27.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate28 = createNode("TextureCoordinate");
TextureCoordinate28.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet27.texCoord = TextureCoordinate28;

Coordinate Coordinate29 = createNode("Coordinate");
Coordinate29.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet27.coord = Coordinate29;

Shape24.geometry = IndexedFaceSet27;

Switch23.children = new MFNode();

Switch23.children[0] = Shape24;

Shape Shape30 = createNode("Shape");
Appearance Appearance31 = createNode("Appearance");
ImageTexture ImageTexture32 = createNode("ImageTexture");
ImageTexture32.url = new MFString(new java.lang.String["torch.2.png"]);
Appearance31.texture = ImageTexture32;

Shape30.appearance = Appearance31;

IndexedFaceSet IndexedFaceSet33 = createNode("IndexedFaceSet");
IndexedFaceSet33.solid = False;
IndexedFaceSet33.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate34 = createNode("TextureCoordinate");
TextureCoordinate34.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet33.texCoord = TextureCoordinate34;

Coordinate Coordinate35 = createNode("Coordinate");
Coordinate35.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet33.coord = Coordinate35;

Shape30.geometry = IndexedFaceSet33;

Switch23.children[1] = Shape30;

Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
ImageTexture ImageTexture38 = createNode("ImageTexture");
ImageTexture38.url = new MFString(new java.lang.String["torch.3.png"]);
Appearance37.texture = ImageTexture38;

Shape36.appearance = Appearance37;

IndexedFaceSet IndexedFaceSet39 = createNode("IndexedFaceSet");
IndexedFaceSet39.solid = False;
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate40 = createNode("TextureCoordinate");
TextureCoordinate40.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet39.texCoord = TextureCoordinate40;

Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet39.coord = Coordinate41;

Shape36.geometry = IndexedFaceSet39;

Switch23.children[2] = Shape36;

Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
ImageTexture ImageTexture44 = createNode("ImageTexture");
ImageTexture44.url = new MFString(new java.lang.String["torch.4.png"]);
Appearance43.texture = ImageTexture44;

Shape42.appearance = Appearance43;

IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.solid = False;
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate46 = createNode("TextureCoordinate");
TextureCoordinate46.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet45.texCoord = TextureCoordinate46;

Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet45.coord = Coordinate47;

Shape42.geometry = IndexedFaceSet45;

Switch23.children[3] = Shape42;

Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.url = new MFString(new java.lang.String["torch.5.png"]);
Appearance49.texture = ImageTexture50;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.solid = False;
IndexedFaceSet51.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate52 = createNode("TextureCoordinate");
TextureCoordinate52.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet51.texCoord = TextureCoordinate52;

Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet51.coord = Coordinate53;

Shape48.geometry = IndexedFaceSet51;

Switch23.children[4] = Shape48;

Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
ImageTexture ImageTexture56 = createNode("ImageTexture");
ImageTexture56.url = new MFString(new java.lang.String["torch.6.png"]);
Appearance55.texture = ImageTexture56;

Shape54.appearance = Appearance55;

IndexedFaceSet IndexedFaceSet57 = createNode("IndexedFaceSet");
IndexedFaceSet57.solid = False;
IndexedFaceSet57.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate58 = createNode("TextureCoordinate");
TextureCoordinate58.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet57.texCoord = TextureCoordinate58;

Coordinate Coordinate59 = createNode("Coordinate");
Coordinate59.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet57.coord = Coordinate59;

Shape54.geometry = IndexedFaceSet57;

Switch23.children[5] = Shape54;

Shape Shape60 = createNode("Shape");
Appearance Appearance61 = createNode("Appearance");
ImageTexture ImageTexture62 = createNode("ImageTexture");
ImageTexture62.url = new MFString(new java.lang.String["torch.7.png"]);
Appearance61.texture = ImageTexture62;

Shape60.appearance = Appearance61;

IndexedFaceSet IndexedFaceSet63 = createNode("IndexedFaceSet");
IndexedFaceSet63.solid = False;
IndexedFaceSet63.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate64 = createNode("TextureCoordinate");
TextureCoordinate64.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet63.texCoord = TextureCoordinate64;

Coordinate Coordinate65 = createNode("Coordinate");
Coordinate65.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet63.coord = Coordinate65;

Shape60.geometry = IndexedFaceSet63;

Switch23.children[6] = Shape60;

Transform22.children = new MFNode();

Transform22.children[0] = Switch23;

Billboard21.children = new MFNode();

Billboard21.children[0] = Transform22;

Transform20.children = new MFNode();

Transform20.children[0] = Billboard21;

Transform10.children[2] = Transform20;

Transform Transform66 = createNode("Transform");
Transform66.DEF = "VisibilitySensor";
VisibilitySensor VisibilitySensor67 = createNode("VisibilitySensor");
VisibilitySensor67.DEF = "_3";
VisibilitySensor67.size = new SFVec3f(new float[1,1,1]);
Transform66.children = new MFNode();

Transform66.children[0] = VisibilitySensor67;

Transform10.children[3] = Transform66;

Group8.children[1] = Transform10;

children = new MFNode();

children[0] = Group8;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromNode = "_3";
ROUTE68.fromField = "isActive";
ROUTE68.toNode = "_1";
ROUTE68.toField = "set_enabled";
children[1] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromNode = "_1";
ROUTE69.fromField = "isActive";
ROUTE69.toNode = "_player";
ROUTE69.toField = "isActive";
children[2] = ROUTE69;

ROUTE ROUTE70 = createNode("ROUTE");
ROUTE70.fromNode = "_1";
ROUTE70.fromField = "time";
ROUTE70.toNode = "_player";
ROUTE70.toField = "set_time";
children[3] = ROUTE70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromNode = "_player";
ROUTE71.fromField = "whichChoice_changed";
ROUTE71.toNode = "_2";
ROUTE71.toField = "set_whichChoice";
children[4] = ROUTE71;

}
