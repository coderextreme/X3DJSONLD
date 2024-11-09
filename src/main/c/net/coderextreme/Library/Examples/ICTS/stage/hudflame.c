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
meta3.content = "Thu, 23 Apr 2015 06:07:06 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:06 GMT";
head1.meta[4] = meta6;

head = head1;

ExternProtoDeclare ExternProtoDeclare8 = createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "Slider";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Slider_proto.x3d"]);
field field9 = createNode("field");
field9.name = "set_translation";
field9.accessType = "inputOnly";
field9.type = "SFVec3f";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

field field10 = createNode("field");
field10.name = "keyValue";
field10.accessType = "inputOutput";
field10.type = "MFFloat";
ExternProtoDeclare8.field[1] = field10;

field field11 = createNode("field");
field11.name = "value_changed";
field11.accessType = "outputOnly";
field11.type = "SFFloat";
ExternProtoDeclare8.field[2] = field11;

field field12 = createNode("field");
field12.name = "planeSensor";
field12.accessType = "inputOutput";
field12.type = "SFNode";
ExternProtoDeclare8.field[3] = field12;

children = new MFNode();

children[0] = ExternProtoDeclare8;

WorldInfo WorldInfo13 = createNode("WorldInfo");
WorldInfo13.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children[1] = WorldInfo13;

Switch Switch14 = createNode("Switch");
Switch14.whichChoice = 1;
Transform Transform15 = createNode("Transform");
Transform15.DEF = "Fire_1";
Transform15.translation = new SFVec3f(new float[0,0.678885,0]);
Transform15.scale = new SFVec3f(new float[1.35777,1.35777,1.35777]);
TimeSensor TimeSensor16 = createNode("TimeSensor");
TimeSensor16.DEF = "_1";
TimeSensor16.loop = True;
Transform15.children = new MFNode();

Transform15.children[0] = TimeSensor16;

Script Script17 = createNode("Script");
Script17.DEF = "_player";
field field18 = createNode("field");
field18.name = "whichChoice_changed";
field18.accessType = "outputOnly";
field18.type = "SFInt32";
Script17.field = new MFNode();

Script17.field[0] = field18;

field field19 = createNode("field");
field19.name = "isActive";
field19.accessType = "inputOnly";
field19.type = "SFBool";
Script17.field[1] = field19;

field field20 = createNode("field");
field20.name = "set_time";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script17.field[2] = field20;

field field21 = createNode("field");
field21.name = "maxChoice";
field21.accessType = "initializeOnly";
field21.type = "SFInt32";
field21.value = "6";
Script17.field[3] = field21;

field field22 = createNode("field");
field22.name = "count";
field22.accessType = "initializeOnly";
field22.type = "SFInt32";
Script17.field[4] = field22;

field field23 = createNode("field");
field23.name = "fps";
field23.accessType = "initializeOnly";
field23.type = "SFInt32";
field23.value = "12";
Script17.field[5] = field23;

field field24 = createNode("field");
field24.name = "last";
field24.accessType = "initializeOnly";
field24.type = "SFTime";
Script17.field[6] = field24;


Script17.setSourceCode(`vrmlscript:\n"+
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
Transform15.children[1] = Script17;

Transform Transform25 = createNode("Transform");
Transform25.DEF = "Fire";
Switch Switch26 = createNode("Switch");
Switch26.DEF = "_2";
Switch26.whichChoice = 6;
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["flame.1.png"]);
ImageTexture29.repeatS = False;
ImageTexture29.repeatT = False;
Appearance28.texture = ImageTexture29;

TextureTransform TextureTransform30 = createNode("TextureTransform");
TextureTransform30.DEF = "_3";
TextureTransform30.translation = new SFVec2f(new float[0.03,0.03]);
TextureTransform30.scale = new SFVec2f(new float[0.972768,0.972768]);
Appearance28.textureTransform = TextureTransform30;

Shape27.appearance = Appearance28;

IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.solid = False;
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate32 = createNode("TextureCoordinate");
TextureCoordinate32.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet31.texCoord = TextureCoordinate32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet31.coord = Coordinate33;

Shape27.geometry = IndexedFaceSet31;

Switch26.children = new MFNode();

Switch26.children[0] = Shape27;

Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
ImageTexture ImageTexture36 = createNode("ImageTexture");
ImageTexture36.url = new MFString(new java.lang.String["flame.2.png"]);
ImageTexture36.repeatS = False;
ImageTexture36.repeatT = False;
Appearance35.texture = ImageTexture36;

TextureTransform TextureTransform37 = createNode("TextureTransform");
TextureTransform37.USE = "_3";
Appearance35.textureTransform = TextureTransform37;

Shape34.appearance = Appearance35;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.solid = False;
IndexedFaceSet38.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate39 = createNode("TextureCoordinate");
TextureCoordinate39.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet38.texCoord = TextureCoordinate39;

Coordinate Coordinate40 = createNode("Coordinate");
Coordinate40.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet38.coord = Coordinate40;

Shape34.geometry = IndexedFaceSet38;

Switch26.children[1] = Shape34;

Shape Shape41 = createNode("Shape");
Appearance Appearance42 = createNode("Appearance");
ImageTexture ImageTexture43 = createNode("ImageTexture");
ImageTexture43.url = new MFString(new java.lang.String["flame.3.png"]);
ImageTexture43.repeatS = False;
ImageTexture43.repeatT = False;
Appearance42.texture = ImageTexture43;

TextureTransform TextureTransform44 = createNode("TextureTransform");
TextureTransform44.USE = "_3";
Appearance42.textureTransform = TextureTransform44;

Shape41.appearance = Appearance42;

IndexedFaceSet IndexedFaceSet45 = createNode("IndexedFaceSet");
IndexedFaceSet45.solid = False;
IndexedFaceSet45.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate46 = createNode("TextureCoordinate");
TextureCoordinate46.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet45.texCoord = TextureCoordinate46;

Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet45.coord = Coordinate47;

Shape41.geometry = IndexedFaceSet45;

Switch26.children[2] = Shape41;

Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.url = new MFString(new java.lang.String["flame.4.png"]);
ImageTexture50.repeatS = False;
ImageTexture50.repeatT = False;
Appearance49.texture = ImageTexture50;

TextureTransform TextureTransform51 = createNode("TextureTransform");
TextureTransform51.USE = "_3";
Appearance49.textureTransform = TextureTransform51;

Shape48.appearance = Appearance49;

IndexedFaceSet IndexedFaceSet52 = createNode("IndexedFaceSet");
IndexedFaceSet52.solid = False;
IndexedFaceSet52.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate53 = createNode("TextureCoordinate");
TextureCoordinate53.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet52.texCoord = TextureCoordinate53;

Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet52.coord = Coordinate54;

Shape48.geometry = IndexedFaceSet52;

Switch26.children[3] = Shape48;

Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
ImageTexture ImageTexture57 = createNode("ImageTexture");
ImageTexture57.url = new MFString(new java.lang.String["flame.5.png"]);
ImageTexture57.repeatS = False;
ImageTexture57.repeatT = False;
Appearance56.texture = ImageTexture57;

TextureTransform TextureTransform58 = createNode("TextureTransform");
TextureTransform58.USE = "_3";
Appearance56.textureTransform = TextureTransform58;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet59 = createNode("IndexedFaceSet");
IndexedFaceSet59.solid = False;
IndexedFaceSet59.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate60 = createNode("TextureCoordinate");
TextureCoordinate60.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet59.texCoord = TextureCoordinate60;

Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet59.coord = Coordinate61;

Shape55.geometry = IndexedFaceSet59;

Switch26.children[4] = Shape55;

Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
ImageTexture ImageTexture64 = createNode("ImageTexture");
ImageTexture64.url = new MFString(new java.lang.String["flame.6.png"]);
ImageTexture64.repeatS = False;
ImageTexture64.repeatT = False;
Appearance63.texture = ImageTexture64;

TextureTransform TextureTransform65 = createNode("TextureTransform");
TextureTransform65.USE = "_3";
Appearance63.textureTransform = TextureTransform65;

Shape62.appearance = Appearance63;

IndexedFaceSet IndexedFaceSet66 = createNode("IndexedFaceSet");
IndexedFaceSet66.solid = False;
IndexedFaceSet66.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate67 = createNode("TextureCoordinate");
TextureCoordinate67.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet66.texCoord = TextureCoordinate67;

Coordinate Coordinate68 = createNode("Coordinate");
Coordinate68.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet66.coord = Coordinate68;

Shape62.geometry = IndexedFaceSet66;

Switch26.children[5] = Shape62;

Transform Transform69 = createNode("Transform");
Transform69.translation = new SFVec3f(new float[-0.0734722,0,0]);
Transform69.scale = new SFVec3f(new float[0.853056,1,1]);
Shape Shape70 = createNode("Shape");
Appearance Appearance71 = createNode("Appearance");
ImageTexture ImageTexture72 = createNode("ImageTexture");
ImageTexture72.url = new MFString(new java.lang.String["flame.7.png"]);
ImageTexture72.repeatS = False;
ImageTexture72.repeatT = False;
Appearance71.texture = ImageTexture72;

TextureTransform TextureTransform73 = createNode("TextureTransform");
TextureTransform73.USE = "_3";
Appearance71.textureTransform = TextureTransform73;

Shape70.appearance = Appearance71;

IndexedFaceSet IndexedFaceSet74 = createNode("IndexedFaceSet");
IndexedFaceSet74.solid = False;
IndexedFaceSet74.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate75 = createNode("TextureCoordinate");
TextureCoordinate75.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet74.texCoord = TextureCoordinate75;

Coordinate Coordinate76 = createNode("Coordinate");
Coordinate76.point = new MFVec3f(new float[-0.5,-0.5,0,0.5,-0.5,0,0.5,0.5,0,-0.5,0.5,0]);
IndexedFaceSet74.coord = Coordinate76;

Shape70.geometry = IndexedFaceSet74;

Transform69.child = new undefined();

Transform69.child[0] = Shape70;

Switch26.children[6] = Transform69;

Transform25.children = new MFNode();

Transform25.children[0] = Switch26;

Transform15.children[2] = Transform25;

Switch14.children = new MFNode();

Switch14.children[0] = Transform15;

Transform Transform77 = createNode("Transform");
Switch14.children[1] = Transform77;

children[2] = Switch14;

PointLight PointLight78 = createNode("PointLight");
PointLight78.DEF = "Light1";
PointLight78.color = new SFColor(new float[1,0.8,0]);
PointLight78.intensity = 0.9;
PointLight78.attenuation = new SFVec3f(new float[0.1,0,0.01]);
PointLight78.location = new SFVec3f(new float[0,0.497334,0.00961055]);
children[3] = PointLight78;

Sound Sound79 = createNode("Sound");
Sound79.DEF = "Sound1";
Sound79.spatialize = False;
AudioClip AudioClip80 = createNode("AudioClip");
AudioClip80.DEF = "Sound1clip";
AudioClip80.url = new MFString(new java.lang.String["egypt.mid"]);
Sound79.source = AudioClip80;

children[4] = Sound79;

TimeSensor TimeSensor81 = createNode("TimeSensor");
TimeSensor81.DEF = "enterWorldTimeSensor";
TimeSensor81.loop = True;
TimeSensor81.startTime = 1;
children[5] = TimeSensor81;

Script Script82 = createNode("Script");
Script82.DEF = "enterWorldScript";
field field83 = createNode("field");
field83.name = "startTime";
field83.accessType = "outputOnly";
field83.type = "SFTime";
Script82.field = new MFNode();

Script82.field[0] = field83;

field field84 = createNode("field");
field84.name = "firstTime";
field84.accessType = "outputOnly";
field84.type = "SFBool";
Script82.field[1] = field84;

field field85 = createNode("field");
field85.name = "triggerIn";
field85.accessType = "inputOnly";
field85.type = "SFTime";
Script82.field[2] = field85;


Script82.setSourceCode(`vrmlscript:function triggerIn(value, time) {\n"+
"\n"+
"         // fire off a single round                                     \n"+
"         startTime = value;                                             \n"+
"         firstTime = FALSE;                                             \n"+
"       }`)
children[6] = Script82;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "_1";
ROUTE86.fromField = "isActive";
ROUTE86.toNode = "_player";
ROUTE86.toField = "isActive";
children[7] = ROUTE86;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "_1";
ROUTE87.fromField = "time";
ROUTE87.toNode = "_player";
ROUTE87.toField = "set_time";
children[8] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "_player";
ROUTE88.fromField = "whichChoice_changed";
ROUTE88.toNode = "_2";
ROUTE88.toField = "set_whichChoice";
children[9] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "enterWorldScript";
ROUTE89.fromField = "startTime";
ROUTE89.toNode = "Sound1clip";
ROUTE89.toField = "set_startTime";
children[10] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "enterWorldScript";
ROUTE90.fromField = "firstTime";
ROUTE90.toNode = "enterWorldTimeSensor";
ROUTE90.toField = "set_enabled";
children[11] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "enterWorldTimeSensor";
ROUTE91.fromField = "time";
ROUTE91.toNode = "enterWorldScript";
ROUTE91.toField = "triggerIn";
children[12] = ROUTE91;

}
