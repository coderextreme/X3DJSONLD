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
meta3.content = "Sat, 12 Sep 2015 08:48:41 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 12 Sep 2015 11:40:47 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Terrain";
head1.meta[5] = meta7;

head = head1;

ProtoDeclare ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="V" ><ProtoInterface><field name="enter" accessType="outputOnly" type="SFTime"></field>
<field name="T" accessType="inputOutput" type="SFVec3f"></field>
<field name="size" accessType="inputOutput" type="SFVec3f"></field>
<field name="C" accessType="inputOutput" type="SFColor" value="0 0.1 0.02"></field>
<field name="img" accessType="inputOutput" type="MFString" value="&quot;9.jpg&quot;"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="T"></connect>
</IS>
<ProximitySensor><IS><connect nodeField="size" protoField="size"></connect>
<connect nodeField="enterTime" protoField="enter"></connect>
</IS>
</ProximitySensor>
<Group><Transform translation="-50 0 -50"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.8 0.5 0.3"></Material>
<ImageTexture containerField="texture"><IS><connect nodeField="url" protoField="img"></connect>
</IS>
</ImageTexture>
<TextureTransform containerField="textureTransform"></TextureTransform>
</Appearance>
<ElevationGrid xDimension="6" zDimension="6" xSpacing="20" zSpacing="20" height="0 1 2 2 1 0 1 -1 -1 -2 1 1 -1 2 1 0 -1 -1 -2 -1 0 -1 -1 -2 -1 0 2 1 0 -1 0 1 2 2 1 0"></ElevationGrid>
</Shape>
</Transform>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "V";
ProtoInterface ProtoInterface10 = createNode("ProtoInterface");
field field11 = createNode("field");
field11.name = "enter";
field11.accessType = "outputOnly";
field11.type = "SFTime";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

field field12 = createNode("field");
field12.name = "T";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
ProtoInterface10.field[1] = field12;

field field13 = createNode("field");
field13.name = "size";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
ProtoInterface10.field[2] = field13;

field field14 = createNode("field");
field14.name = "C";
field14.accessType = "inputOutput";
field14.type = "SFColor";
field14.value = "0 0.1 0.02";
ProtoInterface10.field[3] = field14;

field field15 = createNode("field");
field15.name = "img";
field15.accessType = "inputOutput";
field15.type = "MFString";
field15.value = "\"9.jpg\"";
ProtoInterface10.field[4] = field15;

ProtoDeclare9.protoInterface = ProtoInterface10;

ProtoBody ProtoBody16 = createNode("ProtoBody");
Transform Transform17 = createNode("Transform");
IS IS18 = createNode("IS");
connect connect19 = createNode("connect");
connect19.nodeField = "translation";
connect19.protoField = "T";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

Transform17.iS = IS18;

ProximitySensor ProximitySensor20 = createNode("ProximitySensor");
IS IS21 = createNode("IS");
connect connect22 = createNode("connect");
connect22.nodeField = "size";
connect22.protoField = "size";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

connect connect23 = createNode("connect");
connect23.nodeField = "enterTime";
connect23.protoField = "enter";
IS21.connect[1] = connect23;

ProximitySensor20.iS = IS21;

Transform17.children = new MFNode();

Transform17.children[0] = ProximitySensor20;

Group Group24 = createNode("Group");
Transform Transform25 = createNode("Transform");
Transform25.translation = new SFVec3f(new float[-50,0,-50]);
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.8,0.5,0.3]);
Appearance27.material = Material28;

ImageTexture ImageTexture29 = createNode("ImageTexture");
IS IS30 = createNode("IS");
connect connect31 = createNode("connect");
connect31.nodeField = "url";
connect31.protoField = "img";
IS30.connect = new MFNode();

IS30.connect[0] = connect31;

ImageTexture29.iS = IS30;

Appearance27.texture = ImageTexture29;

TextureTransform TextureTransform32 = createNode("TextureTransform");
Appearance27.textureTransform = TextureTransform32;

Shape26.appearance = Appearance27;

ElevationGrid ElevationGrid33 = createNode("ElevationGrid");
ElevationGrid33.xDimension = 6;
ElevationGrid33.zDimension = 6;
ElevationGrid33.xSpacing = 20;
ElevationGrid33.zSpacing = 20;
ElevationGrid33.height = new MFFloat(new float[0,1,2,2,1,0,1,-1,-1,-2,1,1,-1,2,1,0,-1,-1,-2,-1,0,-1,-1,-2,-1,0,2,1,0,-1,0,1,2,2,1,0]);
Shape26.geometry = ElevationGrid33;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Group24.children = new MFNode();

Group24.children[0] = Transform25;

Transform17.children[1] = Group24;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Transform17;

ProtoDeclare9.protoBody = ProtoBody16;

children = new MFNode();

children[0] = ProtoDeclare9;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.info = new MFString(new java.lang.String["CosmoWorlds VlipArt (c)1997 infinite terrain - pioneer@sgi.com"]);
children[1] = WorldInfo34;

NavigationInfo NavigationInfo35 = createNode("NavigationInfo");
NavigationInfo35.DEF = "Nav1";
NavigationInfo35.type = new MFString(new java.lang.String["WALK"]);
NavigationInfo35.speed = 5;
NavigationInfo35.headlight = False;
children[2] = NavigationInfo35;

NavigationInfo NavigationInfo36 = createNode("NavigationInfo");
NavigationInfo36.DEF = "Nav0";
NavigationInfo36.type = new MFString(new java.lang.String["NONE"]);
NavigationInfo36.speed = 0;
NavigationInfo36.headlight = False;
children[3] = NavigationInfo36;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "BGX0";
Background Background38 = createNode("Background");
Background38.DEF = "BG0";
Transform37.children = new MFNode();

Transform37.children[0] = Background38;

children[4] = Transform37;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "BGX1";
Background Background40 = createNode("Background");
Background40.DEF = "BG1";
Background40.skyAngle = new MFFloat(new float[2]);
Background40.skyColor = new MFColor(new float[1,1,0,0,0,1]);
Transform39.children = new MFNode();

Transform39.children[0] = Background40;

children[5] = Transform39;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "BGX2";
Background Background42 = createNode("Background");
Background42.DEF = "BG2";
Background42.skyAngle = new MFFloat(new float[1.7]);
Background42.skyColor = new MFColor(new float[1,1,0,0,0,1]);
Transform41.children = new MFNode();

Transform41.children[0] = Background42;

children[6] = Transform41;

TimeSensor TimeSensor43 = createNode("TimeSensor");
TimeSensor43.DEF = "Time0";
TimeSensor43.cycleInterval = 300;
TimeSensor43.loop = True;
children[7] = TimeSensor43;

OrientationInterpolator OrientationInterpolator44 = createNode("OrientationInterpolator");
OrientationInterpolator44.DEF = "Spin0";
OrientationInterpolator44.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator44.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,3.14,1,0,0,6.28002]);
children[8] = OrientationInterpolator44;

OrientationInterpolator OrientationInterpolator45 = createNode("OrientationInterpolator");
OrientationInterpolator45.DEF = "Spin1";
OrientationInterpolator45.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator45.keyValue = new MFRotation(new float[0,0,1,0,0,1,0,3.14,0,1,0,6.28002]);
children[9] = OrientationInterpolator45;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "K";
Transform46.translation = new SFVec3f(new float[0,10,0]);
Viewpoint Viewpoint47 = createNode("Viewpoint");
Viewpoint47.DEF = "View0";
Viewpoint47.position = new SFVec3f(new float[0,3,0]);
Viewpoint47.fieldOfView = 1.3;
Transform46.children = new MFNode();

Transform46.children[0] = Viewpoint47;

children[10] = Transform46;

DirectionalLight DirectionalLight48 = createNode("DirectionalLight");
DirectionalLight48.direction = new SFVec3f(new float[-1,-1,0]);
children[11] = DirectionalLight48;

DirectionalLight DirectionalLight49 = createNode("DirectionalLight");
DirectionalLight49.direction = new SFVec3f(new float[-1,-1,-1]);
children[12] = DirectionalLight49;

ProtoInstance ProtoInstance50 = createNode("ProtoInstance");
ProtoInstance50.name = "V";
ProtoInstance50.DEF = "V0";
fieldValue fieldValue51 = createNode("fieldValue");
fieldValue51.name = "C";
fieldValue51.value = "1 1 0";
ProtoInstance50.fieldValue = new MFNode();

ProtoInstance50.fieldValue[0] = fieldValue51;

children[13] = ProtoInstance50;

ProtoInstance ProtoInstance52 = createNode("ProtoInstance");
ProtoInstance52.name = "V";
ProtoInstance52.DEF = "V1";
fieldValue fieldValue53 = createNode("fieldValue");
fieldValue53.name = "C";
fieldValue53.value = "1 0.5 0";
ProtoInstance52.fieldValue = new MFNode();

ProtoInstance52.fieldValue[0] = fieldValue53;

children[14] = ProtoInstance52;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "V";
ProtoInstance54.DEF = "V2";
fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "C";
fieldValue55.value = "1 0.3 0";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

children[15] = ProtoInstance54;

ProtoInstance ProtoInstance56 = createNode("ProtoInstance");
ProtoInstance56.name = "V";
ProtoInstance56.DEF = "V3";
fieldValue fieldValue57 = createNode("fieldValue");
fieldValue57.name = "C";
fieldValue57.value = "1 0 0.2";
ProtoInstance56.fieldValue = new MFNode();

ProtoInstance56.fieldValue[0] = fieldValue57;

children[16] = ProtoInstance56;

ProtoInstance ProtoInstance58 = createNode("ProtoInstance");
ProtoInstance58.name = "V";
ProtoInstance58.DEF = "V4";
fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "C";
fieldValue59.value = "1 0 0";
ProtoInstance58.fieldValue = new MFNode();

ProtoInstance58.fieldValue[0] = fieldValue59;

children[17] = ProtoInstance58;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "V";
ProtoInstance60.DEF = "V5";
fieldValue fieldValue61 = createNode("fieldValue");
fieldValue61.name = "C";
fieldValue61.value = "1 0 0.5";
ProtoInstance60.fieldValue = new MFNode();

ProtoInstance60.fieldValue[0] = fieldValue61;

children[18] = ProtoInstance60;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "V";
ProtoInstance62.DEF = "V6";
fieldValue fieldValue63 = createNode("fieldValue");
fieldValue63.name = "C";
fieldValue63.value = "0 0 1";
ProtoInstance62.fieldValue = new MFNode();

ProtoInstance62.fieldValue[0] = fieldValue63;

children[19] = ProtoInstance62;

ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "V";
ProtoInstance64.DEF = "V7";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "C";
fieldValue65.value = "0 0 0.5";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

children[20] = ProtoInstance64;

ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "V";
ProtoInstance66.DEF = "V8";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "C";
fieldValue67.value = "0 0 0.3";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

children[21] = ProtoInstance66;

Transform Transform68 = createNode("Transform");
Transform68.DEF = "Ob";
Transform68.translation = new SFVec3f(new float[100,0,100]);
TouchSensor TouchSensor69 = createNode("TouchSensor");
TouchSensor69.DEF = "ScoreTouch";
Transform68.children = new MFNode();

Transform68.children[0] = TouchSensor69;

Switch Switch70 = createNode("Switch");
Switch70.DEF = "Sw";
Switch70.whichChoice = 2;
Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
Appearance72.DEF = "A";
Material Material73 = createNode("Material");
Material73.diffuseColor = new SFColor(new float[0.9,0.9,0.9]);
Material73.emissiveColor = new SFColor(new float[0.2,0.2,0.2]);
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

Extrusion Extrusion74 = createNode("Extrusion");
Extrusion74.scale = new MFVec2f(new float[1,1,0.95,0.95,0.00001,0.00001]);
Extrusion74.spine = new MFVec3f(new float[0,0,0,0,10,0,0,11.5,0]);
Shape71.geometry = Extrusion74;

Switch70.children = new MFNode();

Switch70.children[0] = Shape71;

Shape Shape75 = createNode("Shape");
Appearance Appearance76 = createNode("Appearance");
Appearance76.USE = "A";
Shape75.appearance = Appearance76;

Extrusion Extrusion77 = createNode("Extrusion");
Extrusion77.scale = new MFVec2f(new float[10,10,0.00001,0.00001]);
Extrusion77.spine = new MFVec3f(new float[0,0,0,0,15,0]);
Shape75.geometry = Extrusion77;

Switch70.children[1] = Shape75;

Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Appearance79.USE = "A";
Shape78.appearance = Appearance79;

Extrusion Extrusion80 = createNode("Extrusion");
Extrusion80.scale = new MFVec2f(new float[0.00001,0.00001,10,10]);
Extrusion80.spine = new MFVec3f(new float[0,0,0,0,15,0]);
Shape78.geometry = Extrusion80;

Switch70.children[2] = Shape78;

Transform68.children[1] = Switch70;

children[22] = Transform68;

Script Script81 = createNode("Script");
Script81.DEF = "Script0";
Script81.directOutput = True;
field field82 = createNode("field");
field82.name = "ZZZ";
field82.accessType = "outputOnly";
field82.type = "SFVec3f";
Script81.field = new MFNode();

Script81.field[0] = field82;

field field83 = createNode("field");
field83.name = "P0";
field83.accessType = "inputOnly";
field83.type = "SFTime";
Script81.field[1] = field83;

field field84 = createNode("field");
field84.name = "P1";
field84.accessType = "inputOnly";
field84.type = "SFTime";
Script81.field[2] = field84;

field field85 = createNode("field");
field85.name = "P2";
field85.accessType = "inputOnly";
field85.type = "SFTime";
Script81.field[3] = field85;

field field86 = createNode("field");
field86.name = "P3";
field86.accessType = "inputOnly";
field86.type = "SFTime";
Script81.field[4] = field86;

field field87 = createNode("field");
field87.name = "P4";
field87.accessType = "inputOnly";
field87.type = "SFTime";
Script81.field[5] = field87;

field field88 = createNode("field");
field88.name = "P5";
field88.accessType = "inputOnly";
field88.type = "SFTime";
Script81.field[6] = field88;

field field89 = createNode("field");
field89.name = "P6";
field89.accessType = "inputOnly";
field89.type = "SFTime";
Script81.field[7] = field89;

field field90 = createNode("field");
field90.name = "P7";
field90.accessType = "inputOnly";
field90.type = "SFTime";
Script81.field[8] = field90;

field field91 = createNode("field");
field91.name = "P8";
field91.accessType = "inputOnly";
field91.type = "SFTime";
Script81.field[9] = field91;

field field92 = createNode("field");
field92.name = "getScore";
field92.accessType = "inputOnly";
field92.type = "SFBool";
Script81.field[10] = field92;

field field93 = createNode("field");
field93.name = "score";
field93.accessType = "initializeOnly";
field93.type = "SFInt32";
Script81.field[11] = field93;

field field94 = createNode("field");
field94.name = "count";
field94.accessType = "initializeOnly";
field94.type = "SFFloat";
Script81.field[12] = field94;

field field95 = createNode("field");
field95.name = "xsize";
field95.accessType = "initializeOnly";
field95.type = "SFFloat";
field95.value = "100";
Script81.field[13] = field95;

field field96 = createNode("field");
field96.name = "zsize";
field96.accessType = "initializeOnly";
field96.type = "SFFloat";
field96.value = "100";
Script81.field[14] = field96;

field field97 = createNode("field");
field97.name = "sizeBuff";
field97.accessType = "initializeOnly";
field97.type = "SFVec3f";
field97.value = "0 40 0";
Script81.field[15] = field97;

field field98 = createNode("field");
field98.name = "ts";
field98.accessType = "initializeOnly";
field98.type = "MFVec3f";
field98.value = "-100 0 -100 0 0 -100 100 0 -100 -100 0 0 100 0 100 100 0 0 -100 0 100 0 0 100 100 0 100";
Script81.field[16] = field98;

field field99 = createNode("field");
field99.name = "tBuff";
field99.accessType = "initializeOnly";
field99.type = "SFVec3f";
field99.value = "0 0 0";
Script81.field[17] = field99;

field field100 = createNode("field");
field100.name = "ob";
field100.accessType = "initializeOnly";
field100.type = "SFNode";
Transform Transform101 = createNode("Transform");
Transform101.USE = "Ob";
field100.children = new MFNode();

field100.children[0] = Transform101;

Script81.field[18] = field100;

field field102 = createNode("field");
field102.name = "sw";
field102.accessType = "initializeOnly";
field102.type = "SFNode";
Switch Switch103 = createNode("Switch");
Switch103.USE = "Sw";
field102.children = new MFNode();

field102.children[0] = Switch103;

Script81.field[19] = field102;

field field104 = createNode("field");
field104.name = "bg";
field104.accessType = "initializeOnly";
field104.type = "MFNode";
Background Background105 = createNode("Background");
Background105.USE = "BG0";
field104.children = new MFNode();

field104.children[0] = Background105;

Background Background106 = createNode("Background");
Background106.USE = "BG1";
field104.children[1] = Background106;

Background Background107 = createNode("Background");
Background107.USE = "BG2";
field104.children[2] = Background107;

Script81.field[20] = field104;

field field108 = createNode("field");
field108.name = "nv";
field108.accessType = "initializeOnly";
field108.type = "MFNode";
NavigationInfo NavigationInfo109 = createNode("NavigationInfo");
NavigationInfo109.USE = "Nav0";
field108.children = new MFNode();

field108.children[0] = NavigationInfo109;

NavigationInfo NavigationInfo110 = createNode("NavigationInfo");
NavigationInfo110.USE = "Nav1";
field108.children[1] = NavigationInfo110;

Script81.field[21] = field108;

field field111 = createNode("field");
field111.name = "xs";
field111.accessType = "initializeOnly";
field111.type = "MFNode";
ProtoInstance ProtoInstance112 = createNode("ProtoInstance");
ProtoInstance112.USE = "V0";
field111.children = new MFNode();

field111.children[0] = ProtoInstance112;

ProtoInstance ProtoInstance113 = createNode("ProtoInstance");
ProtoInstance113.USE = "V1";
field111.children[1] = ProtoInstance113;

ProtoInstance ProtoInstance114 = createNode("ProtoInstance");
ProtoInstance114.USE = "V2";
field111.children[2] = ProtoInstance114;

ProtoInstance ProtoInstance115 = createNode("ProtoInstance");
ProtoInstance115.USE = "V3";
field111.children[3] = ProtoInstance115;

ProtoInstance ProtoInstance116 = createNode("ProtoInstance");
ProtoInstance116.USE = "V4";
field111.children[4] = ProtoInstance116;

ProtoInstance ProtoInstance117 = createNode("ProtoInstance");
ProtoInstance117.USE = "V5";
field111.children[5] = ProtoInstance117;

ProtoInstance ProtoInstance118 = createNode("ProtoInstance");
ProtoInstance118.USE = "V6";
field111.children[6] = ProtoInstance118;

ProtoInstance ProtoInstance119 = createNode("ProtoInstance");
ProtoInstance119.USE = "V7";
field111.children[7] = ProtoInstance119;

ProtoInstance ProtoInstance120 = createNode("ProtoInstance");
ProtoInstance120.USE = "V8";
field111.children[8] = ProtoInstance120;

Script81.field[22] = field111;


Script81.setSourceCode(`javascript:\n"+
"  function place (fl,fm,fr,cl,cm,cr,bl,bm,br){\n"+
"   ts[fm][0] = ts[bm][0] = x = xs[cm].T[0];\n"+
"   ts[cl][2] = ts[cr][2] = z = xs[cm].T[2];\n"+
"   ts[cl][0] = ts[fl][0] = ts[bl][0] = x - xsize;\n"+
"   ts[cr][0] = ts[fr][0] = ts[br][0] = x + xsize;\n"+
"   ts[fl][2] = ts[fm][2] = ts[fr][2] = z - zsize; \n"+
"   ts[bl][2] = ts[bm][2] = ts[br][2] = z + zsize;\n"+
"   for(i=0;i<xs.length;i++){\n"+
"    tBuff = ts[i];\n"+
"    xs[i].set_T = tBuff;\n"+
"   }\n"+
"   if(count == 2){\n"+
"    tBuff = xs[cm].T;\n"+
"    ob.set_translation = tBuff;\n"+
"    sw.whichChoice = Math.round(3*Math.random());\n"+
"   }\n"+
"   count = (count+1)%3;\n"+
"  }\n"+
"  function P0 (v){ place(8,6,7,2,0,1,5,3,4);}\n"+
"  function P1 (v){ place(6,7,8,0,1,2,3,4,5);}\n"+
"  function P2 (v){ place(7,8,6,1,2,0,4,5,3);}\n"+
"  function P3 (v){ place(2,0,1,5,3,4,8,6,7);}\n"+
"  function P4 (v){ place(0,1,2,3,4,5,6,7,8);}\n"+
"  function P5 (v){ place(1,2,0,4,5,3,7,8,6);}\n"+
"  function P6 (v){ place(5,3,4,8,6,7,2,0,1);}\n"+
"  function P7 (v){ place(3,4,5,6,7,8,0,1,2);}\n"+
"  function P8 (v){ place(4,5,3,7,8,6,1,2,0);}\n"+
"\n"+
"  function initialize(){\n"+
"   bg[1].set_bind = TRUE;\n"+
"   sizeBuff[0] = xsize;\n"+
"   sizeBuff[2] = zsize;\n"+
"   for(i=0;i<xs.length;i++){\n"+
"    ts[i] = tBuff;\n"+
"    xs[i].set_size = sizeBuff;\n"+
"   }\n"+
"   place(0,1,2,3,4,5,6,7,8);\n"+
"  }`)
children[23] = Script81;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "Time0";
ROUTE121.fromField = "fraction_changed";
ROUTE121.toNode = "Spin0";
ROUTE121.toField = "set_fraction";
children[24] = ROUTE121;

ROUTE ROUTE122 = createNode("ROUTE");
ROUTE122.fromNode = "Time0";
ROUTE122.fromField = "fraction_changed";
ROUTE122.toNode = "Spin1";
ROUTE122.toField = "set_fraction";
children[25] = ROUTE122;

ROUTE ROUTE123 = createNode("ROUTE");
ROUTE123.fromNode = "Spin0";
ROUTE123.fromField = "value_changed";
ROUTE123.toNode = "BGX1";
ROUTE123.toField = "set_rotation";
children[26] = ROUTE123;

ROUTE ROUTE124 = createNode("ROUTE");
ROUTE124.fromNode = "Spin1";
ROUTE124.fromField = "value_changed";
ROUTE124.toNode = "BGX0";
ROUTE124.toField = "set_rotation";
children[27] = ROUTE124;

ROUTE ROUTE125 = createNode("ROUTE");
ROUTE125.fromNode = "V0";
ROUTE125.fromField = "enter";
ROUTE125.toNode = "Script0";
ROUTE125.toField = "P0";
children[28] = ROUTE125;

ROUTE ROUTE126 = createNode("ROUTE");
ROUTE126.fromNode = "V1";
ROUTE126.fromField = "enter";
ROUTE126.toNode = "Script0";
ROUTE126.toField = "P1";
children[29] = ROUTE126;

ROUTE ROUTE127 = createNode("ROUTE");
ROUTE127.fromNode = "V2";
ROUTE127.fromField = "enter";
ROUTE127.toNode = "Script0";
ROUTE127.toField = "P2";
children[30] = ROUTE127;

ROUTE ROUTE128 = createNode("ROUTE");
ROUTE128.fromNode = "V3";
ROUTE128.fromField = "enter";
ROUTE128.toNode = "Script0";
ROUTE128.toField = "P3";
children[31] = ROUTE128;

ROUTE ROUTE129 = createNode("ROUTE");
ROUTE129.fromNode = "V4";
ROUTE129.fromField = "enter";
ROUTE129.toNode = "Script0";
ROUTE129.toField = "P4";
children[32] = ROUTE129;

ROUTE ROUTE130 = createNode("ROUTE");
ROUTE130.fromNode = "V5";
ROUTE130.fromField = "enter";
ROUTE130.toNode = "Script0";
ROUTE130.toField = "P5";
children[33] = ROUTE130;

ROUTE ROUTE131 = createNode("ROUTE");
ROUTE131.fromNode = "V6";
ROUTE131.fromField = "enter";
ROUTE131.toNode = "Script0";
ROUTE131.toField = "P6";
children[34] = ROUTE131;

ROUTE ROUTE132 = createNode("ROUTE");
ROUTE132.fromNode = "V7";
ROUTE132.fromField = "enter";
ROUTE132.toNode = "Script0";
ROUTE132.toField = "P7";
children[35] = ROUTE132;

ROUTE ROUTE133 = createNode("ROUTE");
ROUTE133.fromNode = "V8";
ROUTE133.fromField = "enter";
ROUTE133.toNode = "Script0";
ROUTE133.toField = "P8";
children[36] = ROUTE133;

}
