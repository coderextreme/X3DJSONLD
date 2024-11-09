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
meta3.content = "Fri, 13 Nov 2015 10:12:49 GMT";
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
meta6.content = "Fri, 13 Nov 2015 10:12:49 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "SwitchAnimProto";
TimeSensor TimeSensor10 = createNode("TimeSensor");
TimeSensor10.DEF = "animTime";
TimeSensor10.loop = True;
Transform9.children = new MFNode();

Transform9.children[0] = TimeSensor10;

Script Script11 = createNode("Script");
Script11.DEF = "_animScript1";
field field12 = createNode("field");
field12.name = "whichChoice_changed";
field12.accessType = "outputOnly";
field12.type = "SFInt32";
Script11.field = new MFNode();

Script11.field[0] = field12;

field field13 = createNode("field");
field13.name = "set_time";
field13.accessType = "inputOnly";
field13.type = "SFTime";
Script11.field[1] = field13;

field field14 = createNode("field");
field14.name = "fps";
field14.accessType = "initializeOnly";
field14.type = "SFFloat";
field14.value = "12";
Script11.field[2] = field14;

field field15 = createNode("field");
field15.name = "max";
field15.accessType = "initializeOnly";
field15.type = "SFFloat";
field15.value = "9";
Script11.field[3] = field15;

field field16 = createNode("field");
field16.name = "lastTime";
field16.accessType = "initializeOnly";
field16.type = "SFTime";
Script11.field[4] = field16;

field field17 = createNode("field");
field17.name = "dt";
field17.accessType = "initializeOnly";
field17.type = "SFFloat";
field17.value = "0.0833333";
Script11.field[5] = field17;


Script11.setSourceCode(`vrmlscript:\n"+
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
Transform9.children[1] = Script11;

children[1] = Transform9;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "Wasserfall";
Transform18.translation = new SFVec3f(new float[-193.876,252.561,306.987]);
Transform18.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform18.scale = new SFVec3f(new float[0.277399,0.512499,0.36079]);
Transform Transform19 = createNode("Transform");
Switch Switch20 = createNode("Switch");
Switch20.DEF = "_1";
Switch20.whichChoice = 0;
Shape Shape21 = createNode("Shape");
Appearance Appearance22 = createNode("Appearance");
ImageTexture ImageTexture23 = createNode("ImageTexture");
ImageTexture23.url = new MFString(new java.lang.String["falls.1.png"]);
Appearance22.texture = ImageTexture23;

Shape21.appearance = Appearance22;

IndexedFaceSet IndexedFaceSet24 = createNode("IndexedFaceSet");
IndexedFaceSet24.DEF = "wasserfallIndexedFaceSet";
IndexedFaceSet24.coordIndex = new MFInt32(new int[0,11,27,28,-1,30,10,3,29,-1,11,7,31,27,-1,32,6,10,30,-1,7,13,33,31,-1,34,12,6,32,-1,13,5,35,33,-1,36,4,12,34,-1,5,15,37,35,-1,38,14,4,36,-1,15,9,39,37,-1,40,8,14,38,-1,9,17,41,39,-1,17,1,42,41,-1,43,16,8,40,-1,44,2,16,43,-1,27,46,45,28,-1,46,18,19,45,-1,18,48,47,19,-1,48,30,29,47,-1,31,49,46,27,-1,49,20,18,46,-1,20,50,48,18,-1,50,32,30,48,-1,33,51,49,31,-1,51,21,20,49,-1,21,52,50,20,-1,52,34,32,50,-1,35,53,51,33,-1,53,22,21,51,-1,22,54,52,21,-1,54,36,34,52,-1,37,55,53,35,-1,55,23,22,53,-1,23,56,54,22,-1,56,38,36,54,-1,39,57,55,37,-1,57,24,23,55,-1,24,58,56,23,-1,58,40,38,56,-1,41,59,57,39,-1,59,25,24,57,-1,42,60,59,41,-1,60,26,25,59,-1,25,61,58,24,-1,61,43,40,58,-1,26,62,61,25,-1,62,44,43,61,-1]);
TextureCoordinate TextureCoordinate25 = createNode("TextureCoordinate");
TextureCoordinate25.point = new MFVec2f(new float[0.019436,0.980299,0,0.00023728,1,0.00023728,0.994235,0.996359,1,0.498298,0,0.498298,1,0.747329,0,0.747329,1,0.249268,0,0.249268,1,0.885691,0,0.885691,1,0.622814,0,0.622814,1,0.373783,0,0.373783,1,0.124753,0,0.124753,0.494236,0.885691,0.494236,0.996359,0.494235,0.747329,0.494236,0.622814,0.494235,0.498298,0.494235,0.373783,0.494235,0.249268,0.494235,0.124753,0.494235,0.00023728,0.244236,0.885691,0.244236,0.996359,0.744235,0.996359,0.744235,0.885691,0.244235,0.747329,0.744234,0.747329,0.244236,0.622814,0.744235,0.622814,0.244235,0.498298,0.744234,0.498298,0.244235,0.373783,0.744234,0.373783,0.244235,0.249268,0.744234,0.249268,0.244235,0.124753,0.244235,0.00023728,0.744234,0.124753,0.744234,0.00023728,0.369236,0.996359,0.369236,0.885691,0.619235,0.996359,0.619235,0.885691,0.369235,0.747329,0.619235,0.747329,0.369235,0.622814,0.619235,0.622814,0.369235,0.498298,0.619235,0.498298,0.369235,0.373783,0.619234,0.373783,0.369235,0.249268,0.619234,0.249268,0.369235,0.124753,0.369235,0.00023728,0.619234,0.124753,0.619234,0.00023728]);
IndexedFaceSet24.texCoord = TextureCoordinate25;

Coordinate Coordinate26 = createNode("Coordinate");
Coordinate26.point = new MFVec3f(new float[-94.9602,96.7755,81.6446,-98.8474,-100,101.703,101.153,-100,101.703,99.9999,100,73.2315,101.153,0,100.027,-98.8474,0,100.027,101.153,50,90.3797,-98.8474,50,90.3797,101.153,-50,101.703,-98.8474,-50,101.703,101.153,77.7802,77.5166,-98.8473,77.7802,77.5166,101.153,25,96.8112,-98.8474,25,96.8112,101.153,-25,101.703,-98.8474,-25,101.703,101.153,-75,101.703,-98.8474,-75,101.703,-0.0000534058,77.7802,115.676,0,100,100,-0.000144958,50,128.54,-0.0000839233,25,134.971,-0.000144958,0,138.187,-0.000175476,-25,139.863,-0.000175476,-50,139.863,-0.000175476,-75,139.863,-0.000175476,-100,139.863,-50.0002,77.7802,104.781,-50.0001,100,89.1047,49.9999,100,89.1047,49.9998,77.7802,104.781,-50.0003,50,117.644,49.9997,50,117.644,-50.0002,25,124.076,49.9998,25,124.076,-50.0003,0,127.291,49.9997,0,127.291,-50.0003,-25,128.968,49.9997,-25,128.968,-50.0003,-50,128.968,49.9997,-50,128.968,-50.0003,-75,128.968,-50.0003,-100,128.968,49.9997,-75,128.968,49.9997,-100,128.968,-25.0001,100,97.4697,-25.0001,77.7802,113.146,24.9999,100,97.4697,24.9999,77.7802,113.146,-25.0002,50,126.009,24.9998,50,126.009,-25.0002,25,132.441,24.9998,25,132.441,-25.0002,0,135.656,24.9998,0,135.656,-25.0003,-25,137.333,24.9997,-25,137.333,-25.0003,-50,137.333,24.9997,-50,137.333,-25.0003,-75,137.333,-25.0003,-100,137.333,24.9997,-75,137.333,24.9997,-100,137.333]);
IndexedFaceSet24.coord = Coordinate26;

Shape21.geometry = IndexedFaceSet24;

Switch20.children = new MFNode();

Switch20.children[0] = Shape21;

Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
ImageTexture ImageTexture29 = createNode("ImageTexture");
ImageTexture29.url = new MFString(new java.lang.String["falls.2.png"]);
Appearance28.texture = ImageTexture29;

Shape27.appearance = Appearance28;

IndexedFaceSet IndexedFaceSet30 = createNode("IndexedFaceSet");
IndexedFaceSet30.USE = "wasserfallIndexedFaceSet";
Shape27.geometry = IndexedFaceSet30;

Switch20.children[1] = Shape27;

Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["falls.3.png"]);
Appearance32.texture = ImageTexture33;

Shape31.appearance = Appearance32;

IndexedFaceSet IndexedFaceSet34 = createNode("IndexedFaceSet");
IndexedFaceSet34.USE = "wasserfallIndexedFaceSet";
Shape31.geometry = IndexedFaceSet34;

Switch20.children[2] = Shape31;

Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
ImageTexture ImageTexture37 = createNode("ImageTexture");
ImageTexture37.url = new MFString(new java.lang.String["falls.4.png"]);
Appearance36.texture = ImageTexture37;

Shape35.appearance = Appearance36;

IndexedFaceSet IndexedFaceSet38 = createNode("IndexedFaceSet");
IndexedFaceSet38.USE = "wasserfallIndexedFaceSet";
Shape35.geometry = IndexedFaceSet38;

Switch20.children[3] = Shape35;

Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
ImageTexture ImageTexture41 = createNode("ImageTexture");
ImageTexture41.url = new MFString(new java.lang.String["falls.5.png"]);
Appearance40.texture = ImageTexture41;

Shape39.appearance = Appearance40;

IndexedFaceSet IndexedFaceSet42 = createNode("IndexedFaceSet");
IndexedFaceSet42.USE = "wasserfallIndexedFaceSet";
Shape39.geometry = IndexedFaceSet42;

Switch20.children[4] = Shape39;

Shape Shape43 = createNode("Shape");
Appearance Appearance44 = createNode("Appearance");
ImageTexture ImageTexture45 = createNode("ImageTexture");
ImageTexture45.url = new MFString(new java.lang.String["falls.6.png"]);
Appearance44.texture = ImageTexture45;

Shape43.appearance = Appearance44;

IndexedFaceSet IndexedFaceSet46 = createNode("IndexedFaceSet");
IndexedFaceSet46.USE = "wasserfallIndexedFaceSet";
Shape43.geometry = IndexedFaceSet46;

Switch20.children[5] = Shape43;

Shape Shape47 = createNode("Shape");
Appearance Appearance48 = createNode("Appearance");
ImageTexture ImageTexture49 = createNode("ImageTexture");
ImageTexture49.url = new MFString(new java.lang.String["falls.7.png"]);
Appearance48.texture = ImageTexture49;

Shape47.appearance = Appearance48;

IndexedFaceSet IndexedFaceSet50 = createNode("IndexedFaceSet");
IndexedFaceSet50.USE = "wasserfallIndexedFaceSet";
Shape47.geometry = IndexedFaceSet50;

Switch20.children[6] = Shape47;

Shape Shape51 = createNode("Shape");
Appearance Appearance52 = createNode("Appearance");
ImageTexture ImageTexture53 = createNode("ImageTexture");
ImageTexture53.url = new MFString(new java.lang.String["falls.8.png"]);
Appearance52.texture = ImageTexture53;

Shape51.appearance = Appearance52;

IndexedFaceSet IndexedFaceSet54 = createNode("IndexedFaceSet");
IndexedFaceSet54.USE = "wasserfallIndexedFaceSet";
Shape51.geometry = IndexedFaceSet54;

Switch20.children[7] = Shape51;

Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
ImageTexture ImageTexture57 = createNode("ImageTexture");
ImageTexture57.url = new MFString(new java.lang.String["falls.9.png"]);
Appearance56.texture = ImageTexture57;

Shape55.appearance = Appearance56;

IndexedFaceSet IndexedFaceSet58 = createNode("IndexedFaceSet");
IndexedFaceSet58.USE = "wasserfallIndexedFaceSet";
Shape55.geometry = IndexedFaceSet58;

Switch20.children[8] = Shape55;

Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
ImageTexture ImageTexture61 = createNode("ImageTexture");
ImageTexture61.url = new MFString(new java.lang.String["falls.10.png"]);
Appearance60.texture = ImageTexture61;

Shape59.appearance = Appearance60;

IndexedFaceSet IndexedFaceSet62 = createNode("IndexedFaceSet");
IndexedFaceSet62.USE = "wasserfallIndexedFaceSet";
Shape59.geometry = IndexedFaceSet62;

Switch20.children[9] = Shape59;

Transform19.children = new MFNode();

Transform19.children[0] = Switch20;

Transform18.children = new MFNode();

Transform18.children[0] = Transform19;

children[2] = Transform18;

Transform Transform63 = createNode("Transform");
Transform63.DEF = "wasserfallVisibility";
VisibilitySensor VisibilitySensor64 = createNode("VisibilitySensor");
VisibilitySensor64.DEF = "_2";
VisibilitySensor64.size = new SFVec3f(new float[55.48,102.5,24.04]);
VisibilitySensor64.center = new SFVec3f(new float[-194.197,252.561,268.546]);
Transform63.children = new MFNode();

Transform63.children[0] = VisibilitySensor64;

children[3] = Transform63;

ROUTE ROUTE65 = createNode("ROUTE");
ROUTE65.fromNode = "_2";
ROUTE65.fromField = "isActive";
ROUTE65.toNode = "animTime";
ROUTE65.toField = "set_enabled";
children[4] = ROUTE65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "animTime";
ROUTE66.fromField = "time";
ROUTE66.toNode = "_animScript1";
ROUTE66.toField = "set_time";
children[5] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "_animScript1";
ROUTE67.fromField = "whichChoice_changed";
ROUTE67.toNode = "_1";
ROUTE67.toField = "set_whichChoice";
children[6] = ROUTE67;

}
