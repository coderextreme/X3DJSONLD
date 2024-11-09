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
meta3.content = "Wed, 22 Apr 2015 09:14:06 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Mon, 28 Sep 2015 05:19:18 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "Pong";
head1.meta[5] = meta7;

head = head1;

ProtoDeclare ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="X" ><ProtoInterface><field name="T" accessType="inputOutput" type="SFVec3f"></field>
<field name="S" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="R" accessType="inputOutput" type="SFRotation"></field>
<field name="C" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
<field name="E" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
<field name="P" accessType="inputOutput" type="SFColor" value="1 1 1"></field>
<field name="Z" accessType="inputOutput" type="SFFloat"></field>
<field name="img" accessType="inputOutput" type="MFString"></field>
<field name="G" accessType="initializeOnly" type="SFNode"><IndexedFaceSet DEF="_1" coordIndex="3 2 1 0 -1"><Coordinate point="-1 -1 0 -1 1 0 1 1 0 1 -1 0"></Coordinate>
</IndexedFaceSet>
</field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="T"></connect>
<connect nodeField="rotation" protoField="R"></connect>
<connect nodeField="scale" protoField="S"></connect>
</IS>
<Shape><IS><connect nodeField="geometry" protoField="G"></connect>
</IS>
<Appearance containerField="appearance"><Material containerField="material" shininess="0.5"><IS><connect nodeField="diffuseColor" protoField="C"></connect>
<connect nodeField="specularColor" protoField="P"></connect>
<connect nodeField="emissiveColor" protoField="E"></connect>
<connect nodeField="transparency" protoField="Z"></connect>
</IS>
</Material>
<ImageTexture containerField="texture"><IS><connect nodeField="url" protoField="img"></connect>
</IS>
</ImageTexture>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "X";
ProtoInterface ProtoInterface10 = createNode("ProtoInterface");
field field11 = createNode("field");
field11.name = "T";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

field field12 = createNode("field");
field12.name = "S";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "1 1 1";
ProtoInterface10.field[1] = field12;

field field13 = createNode("field");
field13.name = "R";
field13.accessType = "inputOutput";
field13.type = "SFRotation";
ProtoInterface10.field[2] = field13;

field field14 = createNode("field");
field14.name = "C";
field14.accessType = "inputOutput";
field14.type = "SFColor";
field14.value = "1 1 1";
ProtoInterface10.field[3] = field14;

field field15 = createNode("field");
field15.name = "E";
field15.accessType = "inputOutput";
field15.type = "SFColor";
field15.value = "1 1 1";
ProtoInterface10.field[4] = field15;

field field16 = createNode("field");
field16.name = "P";
field16.accessType = "inputOutput";
field16.type = "SFColor";
field16.value = "1 1 1";
ProtoInterface10.field[5] = field16;

field field17 = createNode("field");
field17.name = "Z";
field17.accessType = "inputOutput";
field17.type = "SFFloat";
ProtoInterface10.field[6] = field17;

field field18 = createNode("field");
field18.name = "img";
field18.accessType = "inputOutput";
field18.type = "MFString";
ProtoInterface10.field[7] = field18;

field field19 = createNode("field");
field19.name = "G";
field19.accessType = "initializeOnly";
field19.type = "SFNode";
IndexedFaceSet IndexedFaceSet20 = createNode("IndexedFaceSet");
IndexedFaceSet20.DEF = "_1";
IndexedFaceSet20.coordIndex = new MFInt32(new int[3,2,1,0,-1]);
Coordinate Coordinate21 = createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[-1,-1,0,-1,1,0,1,1,0,1,-1,0]);
IndexedFaceSet20.coord = Coordinate21;

field19.children = new MFNode();

field19.children[0] = IndexedFaceSet20;

ProtoInterface10.field[8] = field19;

ProtoDeclare9.protoInterface = ProtoInterface10;

ProtoBody ProtoBody22 = createNode("ProtoBody");
Transform Transform23 = createNode("Transform");
IS IS24 = createNode("IS");
connect connect25 = createNode("connect");
connect25.nodeField = "translation";
connect25.protoField = "T";
IS24.connect = new MFNode();

IS24.connect[0] = connect25;

connect connect26 = createNode("connect");
connect26.nodeField = "rotation";
connect26.protoField = "R";
IS24.connect[1] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "scale";
connect27.protoField = "S";
IS24.connect[2] = connect27;

Transform23.iS = IS24;

Shape Shape28 = createNode("Shape");
IS IS29 = createNode("IS");
connect connect30 = createNode("connect");
connect30.nodeField = "geometry";
connect30.protoField = "G";
IS29.connect = new MFNode();

IS29.connect[0] = connect30;

Shape28.iS = IS29;

Appearance Appearance31 = createNode("Appearance");
Material Material32 = createNode("Material");
Material32.shininess = 0.5;
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "diffuseColor";
connect34.protoField = "C";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

connect connect35 = createNode("connect");
connect35.nodeField = "specularColor";
connect35.protoField = "P";
IS33.connect[1] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "emissiveColor";
connect36.protoField = "E";
IS33.connect[2] = connect36;

connect connect37 = createNode("connect");
connect37.nodeField = "transparency";
connect37.protoField = "Z";
IS33.connect[3] = connect37;

Material32.iS = IS33;

Appearance31.material = Material32;

ImageTexture ImageTexture38 = createNode("ImageTexture");
IS IS39 = createNode("IS");
connect connect40 = createNode("connect");
connect40.nodeField = "url";
connect40.protoField = "img";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

ImageTexture38.iS = IS39;

Appearance31.texture = ImageTexture38;

Shape28.appearance = Appearance31;

Transform23.child = new undefined();

Transform23.child[0] = Shape28;

ProtoBody22.children = new MFNode();

ProtoBody22.children[0] = Transform23;

ProtoDeclare9.protoBody = ProtoBody22;

children = new MFNode();

children[0] = ProtoDeclare9;

ProtoDeclare ProtoDeclare41 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Y" ><ProtoInterface><field name="T" accessType="inputOutput" type="SFVec3f"></field>
<field name="R" accessType="inputOutput" type="SFRotation"></field>
<field name="S" accessType="inputOutput" type="SFNode"></field>
<field name="H" accessType="inputOutput" type="MFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="Transform"><Transform><IS><connect nodeField="translation" protoField="T"></connect>
<connect nodeField="rotation" protoField="R"></connect>
<connect nodeField="children" protoField="H"></connect>
</IS>
</Transform>
</Transform>
<Script><field name="S" accessType="inputOutput" type="SFNode"></field>
<field name="t" accessType="inputOutput" type="SFNode"><Transform USE="Transform"></Transform>
</field>
<IS><connect nodeField="S" protoField="S"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize ()
{
	t .addChildren = new MFNode (S);
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare41.name = "Y";
ProtoInterface ProtoInterface42 = createNode("ProtoInterface");
field field43 = createNode("field");
field43.name = "T";
field43.accessType = "inputOutput";
field43.type = "SFVec3f";
ProtoInterface42.field = new MFNode();

ProtoInterface42.field[0] = field43;

field field44 = createNode("field");
field44.name = "R";
field44.accessType = "inputOutput";
field44.type = "SFRotation";
ProtoInterface42.field[1] = field44;

field field45 = createNode("field");
field45.name = "S";
field45.accessType = "inputOutput";
field45.type = "SFNode";
ProtoInterface42.field[2] = field45;

field field46 = createNode("field");
field46.name = "H";
field46.accessType = "inputOutput";
field46.type = "MFNode";
ProtoInterface42.field[3] = field46;

ProtoDeclare41.protoInterface = ProtoInterface42;

ProtoBody ProtoBody47 = createNode("ProtoBody");
Transform Transform48 = createNode("Transform");
Transform48.DEF = "Transform";
Transform Transform49 = createNode("Transform");
IS IS50 = createNode("IS");
connect connect51 = createNode("connect");
connect51.nodeField = "translation";
connect51.protoField = "T";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "rotation";
connect52.protoField = "R";
IS50.connect[1] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "children";
connect53.protoField = "H";
IS50.connect[2] = connect53;

Transform49.iS = IS50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

ProtoBody47.children = new MFNode();

ProtoBody47.children[0] = Transform48;

Script Script54 = createNode("Script");
field field55 = createNode("field");
field55.name = "S";
field55.accessType = "inputOutput";
field55.type = "SFNode";
Script54.field = new MFNode();

Script54.field[0] = field55;

field field56 = createNode("field");
field56.name = "t";
field56.accessType = "inputOutput";
field56.type = "SFNode";
Transform Transform57 = createNode("Transform");
Transform57.USE = "Transform";
field56.children = new MFNode();

field56.children[0] = Transform57;

Script54.field[1] = field56;

IS IS58 = createNode("IS");
connect connect59 = createNode("connect");
connect59.nodeField = "S";
connect59.protoField = "S";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

Script54.iS = IS58;


Script54.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	t .addChildren = new MFNode (S);\n"+
"}`)
ProtoBody47.children[1] = Script54;

ProtoDeclare41.protoBody = ProtoBody47;

children[1] = ProtoDeclare41;

WorldInfo WorldInfo60 = createNode("WorldInfo");
WorldInfo60.info = new MFString(new java.lang.String["Cosmo Worlds Clipart (c)1997 pioneer@sgi.com"]);
children[2] = WorldInfo60;

ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "Y";
ProtoInstance61.DEF = "HUD";
fieldValue fieldValue62 = createNode("fieldValue");
fieldValue62.name = "H";
ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "Y";
ProtoInstance63.DEF = "_2";
fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "T";
fieldValue64.value = "0 0 -10";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "H";
ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "Y";
ProtoInstance66.DEF = "Player0";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "T";
fieldValue67.value = "0 0.617632 0";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "S";
PlaneSensor PlaneSensor69 = createNode("PlaneSensor");
PlaneSensor69.DEF = "Drag0";
PlaneSensor69.offset = new SFVec3f(new float[0,0.617632,0]);
PlaneSensor69.minPosition = new SFVec2f(new float[0,-4]);
PlaneSensor69.maxPosition = new SFVec2f(new float[0,4]);
fieldValue68.children = new MFNode();

fieldValue68.children[0] = PlaneSensor69;

ProtoInstance66.fieldValue[1] = fieldValue68;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "H";
ProtoInstance ProtoInstance71 = createNode("ProtoInstance");
ProtoInstance71.name = "X";
ProtoInstance71.DEF = "_3";
fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "T";
fieldValue72.value = "-5 0 0";
ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

fieldValue fieldValue73 = createNode("fieldValue");
fieldValue73.name = "S";
fieldValue73.value = "0.1 1 1";
ProtoInstance71.fieldValue[1] = fieldValue73;

fieldValue70.children = new MFNode();

fieldValue70.children[0] = ProtoInstance71;

ProtoInstance66.fieldValue[2] = fieldValue70;

fieldValue65.children = new MFNode();

fieldValue65.children[0] = ProtoInstance66;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.name = "Y";
ProtoInstance74.DEF = "Player1";
fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "T";
fieldValue75.value = "0 0.858697 0";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "H";
ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.name = "X";
ProtoInstance77.DEF = "_4";
fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "T";
fieldValue78.value = "5 0 0";
ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

fieldValue fieldValue79 = createNode("fieldValue");
fieldValue79.name = "S";
fieldValue79.value = "0.1 1 1";
ProtoInstance77.fieldValue[1] = fieldValue79;

fieldValue76.children = new MFNode();

fieldValue76.children[0] = ProtoInstance77;

ProtoInstance74.fieldValue[1] = fieldValue76;

fieldValue65.children[1] = ProtoInstance74;

Switch Switch80 = createNode("Switch");
Switch80.DEF = "PuckSwitch";
Switch80.whichChoice = 0;
ProtoInstance ProtoInstance81 = createNode("ProtoInstance");
ProtoInstance81.name = "X";
ProtoInstance81.DEF = "Puck";
fieldValue fieldValue82 = createNode("fieldValue");
fieldValue82.name = "T";
fieldValue82.value = "1.04829 1.7715 0";
ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

fieldValue fieldValue83 = createNode("fieldValue");
fieldValue83.name = "S";
fieldValue83.value = "0.2 0.2 1";
ProtoInstance81.fieldValue[1] = fieldValue83;

Switch80.children = new MFNode();

Switch80.children[0] = ProtoInstance81;

ProtoInstance ProtoInstance84 = createNode("ProtoInstance");
ProtoInstance84.name = "Y";
Switch80.children[1] = ProtoInstance84;

fieldValue65.children[2] = Switch80;

Switch Switch85 = createNode("Switch");
Switch85.DEF = "ScoreSwitch";
Switch85.whichChoice = 1;
ProtoInstance ProtoInstance86 = createNode("ProtoInstance");
ProtoInstance86.name = "Y";
Switch85.children = new MFNode();

Switch85.children[0] = ProtoInstance86;

ProtoInstance ProtoInstance87 = createNode("ProtoInstance");
ProtoInstance87.name = "Y";
fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "H";
Transform Transform89 = createNode("Transform");
Transform89.DEF = "_5";
Transform89.translation = new SFVec3f(new float[-3.5,3,-0.2]);
Transform89.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape Shape90 = createNode("Shape");
Appearance Appearance91 = createNode("Appearance");
PixelTexture PixelTexture92 = createNode("PixelTexture");
PixelTexture92.DEF = "Score0";
PixelTexture92.image = new SFImage(new int[3,5,2,65535,65535,65535,65535,0,65535,65535,0,65535,65535,0,65535,65535,65535,65535]);
PixelTexture92.repeatS = False;
PixelTexture92.repeatT = False;
Appearance91.texture = PixelTexture92;

Shape90.appearance = Appearance91;

IndexedFaceSet IndexedFaceSet93 = createNode("IndexedFaceSet");
IndexedFaceSet93.coordIndex = new MFInt32(new int[3,2,1,0,-1]);
Coordinate Coordinate94 = createNode("Coordinate");
Coordinate94.point = new MFVec3f(new float[-1,-1,0,-1,1,0,1,1,0,1,-1,0]);
IndexedFaceSet93.coord = Coordinate94;

Shape90.geometry = IndexedFaceSet93;

Transform89.child = new undefined();

Transform89.child[0] = Shape90;

fieldValue88.children = new MFNode();

fieldValue88.children[0] = Transform89;

Transform Transform95 = createNode("Transform");
Transform95.DEF = "_6";
Transform95.translation = new SFVec3f(new float[3.5,3,-0.2]);
Transform95.scale = new SFVec3f(new float[0.5,0.5,0.5]);
Shape Shape96 = createNode("Shape");
Appearance Appearance97 = createNode("Appearance");
PixelTexture PixelTexture98 = createNode("PixelTexture");
PixelTexture98.DEF = "Score1";
PixelTexture98.image = new SFImage(new int[3,5,2,0,0,65535,0,0,65535,65535,65535,65535,65535,0,65535,65535,0,65535]);
PixelTexture98.repeatS = False;
PixelTexture98.repeatT = False;
Appearance97.texture = PixelTexture98;

Shape96.appearance = Appearance97;

IndexedFaceSet IndexedFaceSet99 = createNode("IndexedFaceSet");
IndexedFaceSet99.coordIndex = new MFInt32(new int[3,2,1,0,-1]);
Coordinate Coordinate100 = createNode("Coordinate");
Coordinate100.point = new MFVec3f(new float[-1,-1,0,-1,1,0,1,1,0,1,-1,0]);
IndexedFaceSet99.coord = Coordinate100;

Shape96.geometry = IndexedFaceSet99;

Transform95.child = new undefined();

Transform95.child[0] = Shape96;

fieldValue88.children[1] = Transform95;

ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

Switch85.children[1] = ProtoInstance87;

fieldValue65.children[3] = Switch85;

ProtoInstance63.fieldValue[1] = fieldValue65;

fieldValue62.children = new MFNode();

fieldValue62.children[0] = ProtoInstance63;

ProtoInstance61.fieldValue = new MFNode();

ProtoInstance61.fieldValue[0] = fieldValue62;

children[3] = ProtoInstance61;

NavigationInfo NavigationInfo101 = createNode("NavigationInfo");
NavigationInfo101.DEF = "Nav0";
NavigationInfo101.type = new MFString(new java.lang.String["NONE"]);
NavigationInfo101.speed = 5;
NavigationInfo101.headlight = False;
children[4] = NavigationInfo101;

DirectionalLight DirectionalLight102 = createNode("DirectionalLight");
DirectionalLight102.DEF = "Light0";
DirectionalLight102.direction = new SFVec3f(new float[0,-1,0]);
children[5] = DirectionalLight102;

ProtoInstance ProtoInstance103 = createNode("ProtoInstance");
ProtoInstance103.name = "Y";
ProtoInstance103.DEF = "BG0X";
fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "R";
fieldValue104.value = "1 0 0 0.347657";
ProtoInstance103.fieldValue = new MFNode();

ProtoInstance103.fieldValue[0] = fieldValue104;

fieldValue fieldValue105 = createNode("fieldValue");
fieldValue105.name = "H";
Background Background106 = createNode("Background");
Background106.DEF = "BG0";
Background106.skyAngle = new MFFloat(new float[1.7]);
Background106.skyColor = new MFColor(new float[1,1,0,0,0,1]);
fieldValue105.children = new MFNode();

fieldValue105.children[0] = Background106;

ProtoInstance103.fieldValue[1] = fieldValue105;

children[6] = ProtoInstance103;

TimeSensor TimeSensor107 = createNode("TimeSensor");
TimeSensor107.DEF = "BGTime";
TimeSensor107.cycleInterval = 300;
TimeSensor107.loop = True;
TimeSensor107.startTime = 1;
children[7] = TimeSensor107;

OrientationInterpolator OrientationInterpolator108 = createNode("OrientationInterpolator");
OrientationInterpolator108.DEF = "BGSpin";
OrientationInterpolator108.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator108.keyValue = new MFRotation(new float[0,0,1,0,1,0,0,3.14,1,0,0,6.28002]);
children[8] = OrientationInterpolator108;

Viewpoint Viewpoint109 = createNode("Viewpoint");
Viewpoint109.DEF = "ViewX";
Viewpoint109.description = "vong";
Viewpoint109.position = new SFVec3f(new float[0,0,0]);
children[9] = Viewpoint109;

ProximitySensor ProximitySensor110 = createNode("ProximitySensor");
ProximitySensor110.DEF = "Proximity0";
ProximitySensor110.size = new SFVec3f(new float[200,200,200]);
children[10] = ProximitySensor110;

TimeSensor TimeSensor111 = createNode("TimeSensor");
TimeSensor111.DEF = "TimeX";
TimeSensor111.cycleInterval = 1.1;
TimeSensor111.loop = True;
TimeSensor111.startTime = 1443414448.83668;
TimeSensor111.stopTime = 1443414447.83668;
children[11] = TimeSensor111;

PositionInterpolator PositionInterpolator112 = createNode("PositionInterpolator");
PositionInterpolator112.DEF = "MovePlayer1";
PositionInterpolator112.key = new MFFloat(new float[0,1]);
PositionInterpolator112.keyValue = new MFVec3f(new float[0,1,0,0,-1,0]);
children[12] = PositionInterpolator112;

PositionInterpolator PositionInterpolator113 = createNode("PositionInterpolator");
PositionInterpolator113.DEF = "MovePuck";
PositionInterpolator113.key = new MFFloat(new float[0,1]);
PositionInterpolator113.keyValue = new MFVec3f(new float[4.8,5.48778,0,-4.8,2.26548,0]);
children[13] = PositionInterpolator113;

Script Script114 = createNode("Script");
Script114.DEF = "Script0";
Script114.directOutput = True;
field field115 = createNode("field");
field115.name = "bouncepuck";
field115.accessType = "inputOnly";
field115.type = "SFVec3f";
Script114.field = new MFNode();

Script114.field[0] = field115;

field field116 = createNode("field");
field116.name = "bounceplayer1";
field116.accessType = "inputOnly";
field116.type = "SFVec3f";
Script114.field[1] = field116;

field field117 = createNode("field");
field117.name = "puckdirection";
field117.accessType = "inputOnly";
field117.type = "SFTime";
Script114.field[2] = field117;

field field118 = createNode("field");
field118.name = "setpuckswitch";
field118.accessType = "inputOnly";
field118.type = "SFBool";
Script114.field[3] = field118;

field field119 = createNode("field");
field119.name = "p";
field119.accessType = "initializeOnly";
field119.type = "MFNode";
ProtoInstance ProtoInstance120 = createNode("ProtoInstance");
ProtoInstance120.USE = "Player0";
field119.children = new MFNode();

field119.children[0] = ProtoInstance120;

ProtoInstance ProtoInstance121 = createNode("ProtoInstance");
ProtoInstance121.USE = "Player1";
field119.children[1] = ProtoInstance121;

ProtoInstance ProtoInstance122 = createNode("ProtoInstance");
ProtoInstance122.USE = "Puck";
field119.children[2] = ProtoInstance122;

Script114.field[4] = field119;

field field123 = createNode("field");
field123.name = "timex";
field123.accessType = "initializeOnly";
field123.type = "SFNode";
TimeSensor TimeSensor124 = createNode("TimeSensor");
TimeSensor124.USE = "TimeX";
field123.children = new MFNode();

field123.children[0] = TimeSensor124;

Script114.field[5] = field123;

field field125 = createNode("field");
field125.name = "moveplayer1";
field125.accessType = "initializeOnly";
field125.type = "SFNode";
PositionInterpolator PositionInterpolator126 = createNode("PositionInterpolator");
PositionInterpolator126.USE = "MovePlayer1";
field125.children = new MFNode();

field125.children[0] = PositionInterpolator126;

Script114.field[6] = field125;

field field127 = createNode("field");
field127.name = "movepuck";
field127.accessType = "initializeOnly";
field127.type = "SFNode";
PositionInterpolator PositionInterpolator128 = createNode("PositionInterpolator");
PositionInterpolator128.USE = "MovePuck";
field127.children = new MFNode();

field127.children[0] = PositionInterpolator128;

Script114.field[7] = field127;

field field129 = createNode("field");
field129.name = "ps";
field129.accessType = "initializeOnly";
field129.type = "SFNode";
Switch Switch130 = createNode("Switch");
Switch130.USE = "PuckSwitch";
field129.children = new MFNode();

field129.children[0] = Switch130;

Script114.field[8] = field129;

field field131 = createNode("field");
field131.name = "sw";
field131.accessType = "initializeOnly";
field131.type = "SFNode";
Switch Switch132 = createNode("Switch");
Switch132.USE = "ScoreSwitch";
field131.children = new MFNode();

field131.children[0] = Switch132;

Script114.field[9] = field131;

field field133 = createNode("field");
field133.name = "score";
field133.accessType = "initializeOnly";
field133.type = "MFNode";
PixelTexture PixelTexture134 = createNode("PixelTexture");
PixelTexture134.USE = "Score1";
field133.children = new MFNode();

field133.children[0] = PixelTexture134;

PixelTexture PixelTexture135 = createNode("PixelTexture");
PixelTexture135.USE = "Score0";
field133.children[1] = PixelTexture135;

Script114.field[10] = field133;

field field136 = createNode("field");
field136.name = "moveplayer1keyval";
field136.accessType = "initializeOnly";
field136.type = "MFVec3f";
field136.value = "0 0 0 0 0 0";
Script114.field[11] = field136;

field field137 = createNode("field");
field137.name = "movepuckkeyval";
field137.accessType = "initializeOnly";
field137.type = "MFVec3f";
field137.value = "4.8 5.48778 0 -4.8 2.26548 0";
Script114.field[12] = field137;

field field138 = createNode("field");
field138.name = "zero";
field138.accessType = "initializeOnly";
field138.type = "SFImage";
field138.value = "3 5 2 65535 65535 65535 65535 0 65535 65535 0 65535 65535 0 65535 65535 65535 65535";
Script114.field[13] = field138;

field field139 = createNode("field");
field139.name = "one";
field139.accessType = "initializeOnly";
field139.type = "SFImage";
field139.value = "3 5 2 65535 65535 65535 0 65535 0 0 65535 0 0 65535 0 65535 65535 0";
Script114.field[14] = field139;

field field140 = createNode("field");
field140.name = "two";
field140.accessType = "initializeOnly";
field140.type = "SFImage";
field140.value = "3 5 2 65535 65535 65535 65535 0 0 65535 65535 65535 0 0 65535 65535 65535 65535";
Script114.field[15] = field140;

field field141 = createNode("field");
field141.name = "three";
field141.accessType = "initializeOnly";
field141.type = "SFImage";
field141.value = "3 5 2 65535 65535 65535 0 0 65535 65535 65535 65535 0 0 65535 65535 65535 65535";
Script114.field[16] = field141;

field field142 = createNode("field");
field142.name = "four";
field142.accessType = "initializeOnly";
field142.type = "SFImage";
field142.value = "3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 0 65535";
Script114.field[17] = field142;

field field143 = createNode("field");
field143.name = "five";
field143.accessType = "initializeOnly";
field143.type = "SFImage";
field143.value = "3 5 2 65535 65535 65535 0 0 65535 65535 65535 65535 65535 0 0 65535 65535 65535";
Script114.field[18] = field143;

field field144 = createNode("field");
field144.name = "six";
field144.accessType = "initializeOnly";
field144.type = "SFImage";
field144.value = "3 5 2 65535 65535 65535 65535 0 65535 65535 65535 65535 65535 0 0 65535 65535 65535";
Script114.field[19] = field144;

field field145 = createNode("field");
field145.name = "seven";
field145.accessType = "initializeOnly";
field145.type = "SFImage";
field145.value = "3 5 2 0 0 65535 0 0 65535 0 0 65535 0 0 65535 65535 65535 65535";
Script114.field[20] = field145;

field field146 = createNode("field");
field146.name = "eight";
field146.accessType = "initializeOnly";
field146.type = "SFImage";
field146.value = "3 5 2 65535 65535 65535 65535 0 65535 65535 65535 65535 65535 0 65535 65535 65535 65535";
Script114.field[21] = field146;

field field147 = createNode("field");
field147.name = "nine";
field147.accessType = "initializeOnly";
field147.type = "SFImage";
field147.value = "3 5 2 0 0 65535 0 0 65535 65535 65535 65535 65535 0 65535 65535 65535 65535";
Script114.field[22] = field147;

field field148 = createNode("field");
field148.name = "count";
field148.accessType = "initializeOnly";
field148.type = "SFInt32";
Script114.field[23] = field148;

field field149 = createNode("field");
field149.name = "skill";
field149.accessType = "initializeOnly";
field149.type = "SFInt32";
field149.value = "4";
Script114.field[24] = field149;

field field150 = createNode("field");
field150.name = "scores";
field150.accessType = "initializeOnly";
field150.type = "MFInt32";
field150.value = "4 0";
Script114.field[25] = field150;


Script114.setSourceCode(`vrmlscript:\n"+
"  function bouncepuck(v){\n"+
"   v[1] = (6-Math.abs(6-Math.abs((v[1]+3)%12)))-3;\n"+
"   p[2].set_T = v;\n"+
"  }\n"+
"  function bounceplayer1(v){\n"+
"   v[1] = p[2].T[1]*(.3+skill*.05);\n"+
"   p[1].set_T = v;\n"+
"  }\n"+
"  function setpuckswitch(v){\n"+
"  }\n"+
"  function puckdirection(v){\n"+
"   if(Math.abs(p[2].T[1]-p[count].T[1])>1.5){\n"+
"    ps.whichChoice = 1;\n"+
"    //p[2].set_img = new MFString(imgs[imgcount]);\n"+
"    timex.set_stopTime = timex.time;\n"+
"    timex.set_startTime = timex.time+1;\n"+
"    movepuckkeyval[0][1] = 0;\n"+
"    movepuckkeyval[1][1] = 0;\n"+
"    movepuck.set_keyValue = movepuckkeyval;\n"+
"    timex.set_cycleInterval = 2-(.3*skill);\n"+
"    skill = (skill+1)%6;\n"+
"    //imgcount = (imgcount+1)%imgs.length;\n"+
"    scores[count]++;\n"+
"    score[count].set_image = numpix[scores[count]%10];\n"+
"   }else{\n"+
"    ps.whichChoice = 0;\n"+
"    movepuckkeyval[0] = movepuck.keyValue[1];\n"+
"    movepuckkeyval[1] = movepuck.keyValue[0];\n"+
"    movepuckkeyval[1][1] = 10*(p[2].T[1]-p[count].T[1]);\n"+
"    movepuck.set_keyValue = movepuckkeyval;\n"+
"    count = (count+1)%2;\n"+
"   }\n"+
"  }\n"+
"  function initialize(){\n"+
"   numpix = new Array(zero,one,two,three,four,five,six,seven,eight,nine);\n"+
"   score[0].set_image = score[1].set_image = numpix[0];\n"+
"  }`)
children[14] = Script114;

ROUTE ROUTE151 = createNode("ROUTE");
ROUTE151.fromNode = "BGTime";
ROUTE151.fromField = "fraction_changed";
ROUTE151.toNode = "BGSpin";
ROUTE151.toField = "set_fraction";
children[15] = ROUTE151;

ROUTE ROUTE152 = createNode("ROUTE");
ROUTE152.fromNode = "BGSpin";
ROUTE152.fromField = "value_changed";
ROUTE152.toNode = "BG0X";
ROUTE152.toField = "set_R";
children[16] = ROUTE152;

ROUTE ROUTE153 = createNode("ROUTE");
ROUTE153.fromNode = "Proximity0";
ROUTE153.fromField = "position_changed";
ROUTE153.toNode = "Proximity0";
ROUTE153.toField = "set_center";
children[17] = ROUTE153;

ROUTE ROUTE154 = createNode("ROUTE");
ROUTE154.fromNode = "Proximity0";
ROUTE154.fromField = "position_changed";
ROUTE154.toNode = "HUD";
ROUTE154.toField = "set_T";
children[18] = ROUTE154;

ROUTE ROUTE155 = createNode("ROUTE");
ROUTE155.fromNode = "Proximity0";
ROUTE155.fromField = "orientation_changed";
ROUTE155.toNode = "HUD";
ROUTE155.toField = "set_R";
children[19] = ROUTE155;

ROUTE ROUTE156 = createNode("ROUTE");
ROUTE156.fromNode = "Drag0";
ROUTE156.fromField = "translation_changed";
ROUTE156.toNode = "Player0";
ROUTE156.toField = "set_T";
children[20] = ROUTE156;

ROUTE ROUTE157 = createNode("ROUTE");
ROUTE157.fromNode = "TimeX";
ROUTE157.fromField = "fraction_changed";
ROUTE157.toNode = "MovePuck";
ROUTE157.toField = "set_fraction";
children[21] = ROUTE157;

ROUTE ROUTE158 = createNode("ROUTE");
ROUTE158.fromNode = "TimeX";
ROUTE158.fromField = "fraction_changed";
ROUTE158.toNode = "MovePlayer1";
ROUTE158.toField = "set_fraction";
children[22] = ROUTE158;

ROUTE ROUTE159 = createNode("ROUTE");
ROUTE159.fromNode = "MovePuck";
ROUTE159.fromField = "value_changed";
ROUTE159.toNode = "Script0";
ROUTE159.toField = "bouncepuck";
children[23] = ROUTE159;

ROUTE ROUTE160 = createNode("ROUTE");
ROUTE160.fromNode = "MovePlayer1";
ROUTE160.fromField = "value_changed";
ROUTE160.toNode = "Script0";
ROUTE160.toField = "bounceplayer1";
children[24] = ROUTE160;

ROUTE ROUTE161 = createNode("ROUTE");
ROUTE161.fromNode = "TimeX";
ROUTE161.fromField = "cycleTime";
ROUTE161.toNode = "Script0";
ROUTE161.toField = "puckdirection";
children[25] = ROUTE161;

}
