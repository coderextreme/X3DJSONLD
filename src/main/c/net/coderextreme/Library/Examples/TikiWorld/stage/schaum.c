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
meta3.content = "Fri, 13 Nov 2015 10:12:48 GMT";
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
meta6.content = "Fri, 13 Nov 2015 10:12:48 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Switch Switch9 = createNode("Switch");
Switch9.DEF = "_1";
Switch9.whichChoice = 9;
Shape Shape10 = createNode("Shape");
Appearance Appearance11 = createNode("Appearance");
ImageTexture ImageTexture12 = createNode("ImageTexture");
ImageTexture12.url = new MFString(new java.lang.String["schaum.1.png"]);
Appearance11.texture = ImageTexture12;

Shape10.appearance = Appearance11;

IndexedFaceSet IndexedFaceSet13 = createNode("IndexedFaceSet");
IndexedFaceSet13.DEF = "imageIndexedFaceSet";
IndexedFaceSet13.solid = False;
IndexedFaceSet13.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate14 = createNode("TextureCoordinate");
TextureCoordinate14.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet13.texCoord = TextureCoordinate14;

Coordinate Coordinate15 = createNode("Coordinate");
Coordinate15.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet13.coord = Coordinate15;

Shape10.geometry = IndexedFaceSet13;

Switch9.children = new MFNode();

Switch9.children[0] = Shape10;

Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
ImageTexture ImageTexture18 = createNode("ImageTexture");
ImageTexture18.url = new MFString(new java.lang.String["schaum.2.png"]);
Appearance17.texture = ImageTexture18;

Shape16.appearance = Appearance17;

IndexedFaceSet IndexedFaceSet19 = createNode("IndexedFaceSet");
IndexedFaceSet19.USE = "imageIndexedFaceSet";
Shape16.geometry = IndexedFaceSet19;

Switch9.children[1] = Shape16;

Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
ImageTexture ImageTexture22 = createNode("ImageTexture");
ImageTexture22.url = new MFString(new java.lang.String["schaum.3.png"]);
Appearance21.texture = ImageTexture22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.USE = "imageIndexedFaceSet";
Shape20.geometry = IndexedFaceSet23;

Switch9.children[2] = Shape20;

Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
ImageTexture ImageTexture26 = createNode("ImageTexture");
ImageTexture26.url = new MFString(new java.lang.String["schaum.4.png"]);
Appearance25.texture = ImageTexture26;

Shape24.appearance = Appearance25;

IndexedFaceSet IndexedFaceSet27 = createNode("IndexedFaceSet");
IndexedFaceSet27.USE = "imageIndexedFaceSet";
Shape24.geometry = IndexedFaceSet27;

Switch9.children[3] = Shape24;

Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.url = new MFString(new java.lang.String["schaum.5.png"]);
Appearance29.texture = ImageTexture30;

Shape28.appearance = Appearance29;

IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.USE = "imageIndexedFaceSet";
Shape28.geometry = IndexedFaceSet31;

Switch9.children[4] = Shape28;

Shape Shape32 = createNode("Shape");
Appearance Appearance33 = createNode("Appearance");
ImageTexture ImageTexture34 = createNode("ImageTexture");
ImageTexture34.url = new MFString(new java.lang.String["schaum.6.png"]);
Appearance33.texture = ImageTexture34;

Shape32.appearance = Appearance33;

IndexedFaceSet IndexedFaceSet35 = createNode("IndexedFaceSet");
IndexedFaceSet35.USE = "imageIndexedFaceSet";
Shape32.geometry = IndexedFaceSet35;

Switch9.children[5] = Shape32;

Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
ImageTexture ImageTexture38 = createNode("ImageTexture");
ImageTexture38.url = new MFString(new java.lang.String["schaum.7.png"]);
Appearance37.texture = ImageTexture38;

Shape36.appearance = Appearance37;

IndexedFaceSet IndexedFaceSet39 = createNode("IndexedFaceSet");
IndexedFaceSet39.USE = "imageIndexedFaceSet";
Shape36.geometry = IndexedFaceSet39;

Switch9.children[6] = Shape36;

Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
ImageTexture ImageTexture42 = createNode("ImageTexture");
ImageTexture42.url = new MFString(new java.lang.String["schaum.8.png"]);
Appearance41.texture = ImageTexture42;

Shape40.appearance = Appearance41;

IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.USE = "imageIndexedFaceSet";
Shape40.geometry = IndexedFaceSet43;

Switch9.children[7] = Shape40;

Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
ImageTexture ImageTexture46 = createNode("ImageTexture");
ImageTexture46.url = new MFString(new java.lang.String["schaum.9.png"]);
Appearance45.texture = ImageTexture46;

Shape44.appearance = Appearance45;

IndexedFaceSet IndexedFaceSet47 = createNode("IndexedFaceSet");
IndexedFaceSet47.USE = "imageIndexedFaceSet";
Shape44.geometry = IndexedFaceSet47;

Switch9.children[8] = Shape44;

Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.url = new MFString(new java.lang.String["schaum.10.png"]);
Appearance49.texture = ImageTexture50;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet51 = createNode("IndexedFaceSet");
IndexedFaceSet51.USE = "imageIndexedFaceSet";
Shape48.geometry = IndexedFaceSet51;

Switch9.children[9] = Shape48;

children[1] = Switch9;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "SwitchAnimProto";
Transform52.translation = new SFVec3f(new float[194.603,-200.333,-268.553]);
TimeSensor TimeSensor53 = createNode("TimeSensor");
TimeSensor53.DEF = "animTime";
TimeSensor53.loop = True;
Transform52.children = new MFNode();

Transform52.children[0] = TimeSensor53;

Script Script54 = createNode("Script");
Script54.DEF = "_animScript1";
field field55 = createNode("field");
field55.name = "whichChoice_changed";
field55.accessType = "outputOnly";
field55.type = "SFInt32";
Script54.field = new MFNode();

Script54.field[0] = field55;

field field56 = createNode("field");
field56.name = "set_time";
field56.accessType = "inputOnly";
field56.type = "SFTime";
Script54.field[1] = field56;

field field57 = createNode("field");
field57.name = "fps";
field57.accessType = "initializeOnly";
field57.type = "SFFloat";
field57.value = "10";
Script54.field[2] = field57;

field field58 = createNode("field");
field58.name = "max";
field58.accessType = "initializeOnly";
field58.type = "SFFloat";
field58.value = "9";
Script54.field[3] = field58;

field field59 = createNode("field");
field59.name = "lastTime";
field59.accessType = "initializeOnly";
field59.type = "SFTime";
Script54.field[4] = field59;

field field60 = createNode("field");
field60.name = "dt";
field60.accessType = "initializeOnly";
field60.type = "SFFloat";
field60.value = "0.0833333";
Script54.field[5] = field60;


Script54.setSourceCode(`vrmlscript:\n"+
"function initialize()\n"+
"{\n"+
"	dt = 1/12;\n"+
"}\n"+
"\n"+
"function set_time(value, time)\n"+
"{\n"+
"	if (time - lastTime > dt){\n"+
"		if (whichChoice_changed == max) whichChoice_changed = 0;\n"+
"		else whichChoice_changed ++;\n"+
"		lastTime = time;\n"+
"	}\n"+
"}`)
Transform52.children[1] = Script54;

children[2] = Transform52;

Transform Transform61 = createNode("Transform");
Transform61.DEF = "Visibility";
VisibilitySensor VisibilitySensor62 = createNode("VisibilitySensor");
VisibilitySensor62.DEF = "_2";
VisibilitySensor62.size = new SFVec3f(new float[1,1,1]);
Transform61.children = new MFNode();

Transform61.children[0] = VisibilitySensor62;

children[3] = Transform61;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "_animScript1";
ROUTE63.fromField = "whichChoice_changed";
ROUTE63.toNode = "_1";
ROUTE63.toField = "set_whichChoice";
children[4] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "_2";
ROUTE64.fromField = "isActive";
ROUTE64.toNode = "animTime";
ROUTE64.toField = "set_enabled";
children[5] = ROUTE64;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "animTime";
ROUTE65.fromField = "time";
ROUTE65.toNode = "_animScript1";
ROUTE65.toField = "set_time";
children[6] = ROUTE65;

}
