#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Fri, 04 Sep 2015 10:19:01 GMT";
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
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Tue, 25 Jul 2017 09:42:17 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "Connectors";
head1.meta[6] = meta8;

head = head1;

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="RoundedRectangle2D" ><ProtoInterface><field name="cornerRadius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="size" accessType="initializeOnly" type="SFVec2f" value="2 2"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="Geometry"><IS><connect nodeField="solid" protoField="solid"></connect>
</IS>
<Coordinate></Coordinate>
</IndexedFaceSet>
<Script DEF="RoundedRectangle2D" directOutput="true"><field name="cornerDimension" accessType="initializeOnly" type="SFFloat" value="10"></field>
<field name="cornerRadius" accessType="initializeOnly" type="SFFloat"></field>
<field name="size" accessType="initializeOnly" type="SFVec2f"></field>
<field name="geometry" accessType="initializeOnly" type="SFNode"><IndexedFaceSet USE="Geometry"></IndexedFaceSet>
</field>
<IS><connect nodeField="cornerRadius" protoField="cornerRadius"></connect>
<connect nodeField="size" protoField="size"></connect>
</IS>
<![CDATA[vrmlscript:

function initialize ()
{
	var point         = new SFVec3f (cornerRadius, 0, 0);
	var startRotation = new SFRotation ();
	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
	var corner        = new MFVec3f ();
	var coordIndex    = new MFInt32 ();
	var points        = new MFVec3f ();

	for (var i = 0; i < cornerDimension * 4; ++ i)
		coordIndex [coordIndex .length] = i;

	geometry .coordIndex = coordIndex;

	for (var i = 0; i < cornerDimension; ++i)
		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = corner [i] .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	geometry .coord .point = points;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare10.name = "RoundedRectangle2D";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
field field12 = createNode("field");
field12.name = "cornerRadius";
field12.accessType = "initializeOnly";
field12.type = "SFFloat";
field12.value = "1";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

field field13 = createNode("field");
field13.name = "size";
field13.accessType = "initializeOnly";
field13.type = "SFVec2f";
field13.value = "2 2";
ProtoInterface11.field[1] = field13;

field field14 = createNode("field");
field14.name = "solid";
field14.accessType = "initializeOnly";
field14.type = "SFBool";
field14.value = "true";
ProtoInterface11.field[2] = field14;

ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody15 = createNode("ProtoBody");
IndexedFaceSet IndexedFaceSet16 = createNode("IndexedFaceSet");
IndexedFaceSet16.DEF = "Geometry";
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "solid";
connect18.protoField = "solid";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

IndexedFaceSet16.iS = IS17;

Coordinate Coordinate19 = createNode("Coordinate");
IndexedFaceSet16.coord = Coordinate19;

ProtoBody15.children = new MFNode();

ProtoBody15.children[0] = IndexedFaceSet16;

Script Script20 = createNode("Script");
Script20.DEF = "RoundedRectangle2D";
Script20.directOutput = True;
field field21 = createNode("field");
field21.name = "cornerDimension";
field21.accessType = "initializeOnly";
field21.type = "SFFloat";
field21.value = "10";
Script20.field = new MFNode();

Script20.field[0] = field21;

field field22 = createNode("field");
field22.name = "cornerRadius";
field22.accessType = "initializeOnly";
field22.type = "SFFloat";
Script20.field[1] = field22;

field field23 = createNode("field");
field23.name = "size";
field23.accessType = "initializeOnly";
field23.type = "SFVec2f";
Script20.field[2] = field23;

field field24 = createNode("field");
field24.name = "geometry";
field24.accessType = "initializeOnly";
field24.type = "SFNode";
IndexedFaceSet IndexedFaceSet25 = createNode("IndexedFaceSet");
IndexedFaceSet25.USE = "Geometry";
field24.children = new MFNode();

field24.children[0] = IndexedFaceSet25;

Script20.field[3] = field24;

IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "cornerRadius";
connect27.protoField = "cornerRadius";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "size";
connect28.protoField = "size";
IS26.connect[1] = connect28;

Script20.iS = IS26;


Script20.setSourceCode(`vrmlscript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	var point         = new SFVec3f (cornerRadius, 0, 0);\n"+
"	var startRotation = new SFRotation ();\n"+
"	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);\n"+
"	var corner        = new MFVec3f ();\n"+
"	var coordIndex    = new MFInt32 ();\n"+
"	var points        = new MFVec3f ();\n"+
"\n"+
"	for (var i = 0; i < cornerDimension * 4; ++ i)\n"+
"		coordIndex [coordIndex .length] = i;\n"+
"\n"+
"	geometry .coordIndex = coordIndex;\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++i)\n"+
"		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = corner [i] .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	geometry .coord .point = points;\n"+
"}`)
ProtoBody15.children[1] = Script20;

ProtoDeclare10.protoBody = ProtoBody15;

children = new MFNode();

children[0] = ProtoDeclare10;

ProtoDeclare ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Widget" ><ProtoInterface><field name="fillColor" accessType="inputOutput" type="SFColor" value="0.1 0.1 0.1"></field>
<field name="lineColor" accessType="inputOutput" type="SFColor" value="0.4 0.4 0.4"></field>
<field name="linewidthScaleFactor" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="geometry" accessType="inputOutput" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="Shape"><Shape><IS><connect nodeField="geometry" protoField="geometry"></connect>
</IS>
<Appearance containerField="appearance"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="fillColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><IS><connect nodeField="geometry" protoField="geometry"></connect>
</IS>
<Appearance containerField="appearance"><FillProperties containerField="fillProperties" filled="false" hatched="false"></FillProperties>
<LineProperties containerField="lineProperties"><IS><connect nodeField="linewidthScaleFactor" protoField="linewidthScaleFactor"></connect>
</IS>
</LineProperties>
<Material containerField="material" diffuseColor="0 0 0"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare29.name = "Widget";
ProtoInterface ProtoInterface30 = createNode("ProtoInterface");
field field31 = createNode("field");
field31.name = "fillColor";
field31.accessType = "inputOutput";
field31.type = "SFColor";
field31.value = "0.1 0.1 0.1";
ProtoInterface30.field = new MFNode();

ProtoInterface30.field[0] = field31;

field field32 = createNode("field");
field32.name = "lineColor";
field32.accessType = "inputOutput";
field32.type = "SFColor";
field32.value = "0.4 0.4 0.4";
ProtoInterface30.field[1] = field32;

field field33 = createNode("field");
field33.name = "linewidthScaleFactor";
field33.accessType = "inputOutput";
field33.type = "SFFloat";
field33.value = "1";
ProtoInterface30.field[2] = field33;

field field34 = createNode("field");
field34.name = "geometry";
field34.accessType = "inputOutput";
field34.type = "SFNode";
ProtoInterface30.field[3] = field34;

ProtoDeclare29.protoInterface = ProtoInterface30;

ProtoBody ProtoBody35 = createNode("ProtoBody");
Transform Transform36 = createNode("Transform");
Transform36.DEF = "Shape";
Shape Shape37 = createNode("Shape");
IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "geometry";
connect39.protoField = "geometry";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

Shape37.iS = IS38;

Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
IS IS42 = createNode("IS");
connect connect43 = createNode("connect");
connect43.nodeField = "diffuseColor";
connect43.protoField = "fillColor";
IS42.connect = new MFNode();

IS42.connect[0] = connect43;

Material41.iS = IS42;

Appearance40.material = Material41;

Shape37.appearance = Appearance40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

Shape Shape44 = createNode("Shape");
IS IS45 = createNode("IS");
connect connect46 = createNode("connect");
connect46.nodeField = "geometry";
connect46.protoField = "geometry";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

Shape44.iS = IS45;

Appearance Appearance47 = createNode("Appearance");
FillProperties FillProperties48 = createNode("FillProperties");
FillProperties48.filled = False;
FillProperties48.hatched = False;
Appearance47.fillProperties = FillProperties48;

LineProperties LineProperties49 = createNode("LineProperties");
IS IS50 = createNode("IS");
connect connect51 = createNode("connect");
connect51.nodeField = "linewidthScaleFactor";
connect51.protoField = "linewidthScaleFactor";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

LineProperties49.iS = IS50;

Appearance47.lineProperties = LineProperties49;

Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[0,0,0]);
IS IS53 = createNode("IS");
connect connect54 = createNode("connect");
connect54.nodeField = "emissiveColor";
connect54.protoField = "lineColor";
IS53.connect = new MFNode();

IS53.connect[0] = connect54;

Material52.iS = IS53;

Appearance47.material = Material52;

Shape44.appearance = Appearance47;

Transform36.child[1] = Shape44;

ProtoBody35.children = new MFNode();

ProtoBody35.children[0] = Transform36;

ProtoDeclare29.protoBody = ProtoBody35;

children[1] = ProtoDeclare29;

ProtoDeclare ProtoDeclare55 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Node" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><PlaneSensor DEF="PlaneSensor"></PlaneSensor>
<Transform DEF="Node"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<ProtoInstance name="Widget"><fieldValue name="geometry"><ProtoInstance name="RoundedRectangle2D"><fieldValue name="cornerRadius" value="0.12"></fieldValue>
<fieldValue name="size" value="2 1"></fieldValue>
</ProtoInstance>
</fieldValue>
</ProtoInstance>
<Transform DEF="Input" translation="-1 0 0"><ProtoInstance name="Widget"><fieldValue name="lineColor" value="0.72 0.14 0.23"></fieldValue>
<fieldValue name="geometry"><Disk2D DEF="Connector" outerRadius="0.2"></Disk2D>
</fieldValue>
</ProtoInstance>
</Transform>
<Transform DEF="Output" translation="1 0 0"><ProtoInstance name="Widget"><fieldValue name="lineColor" value="0.44 0.5 0.72"></fieldValue>
<fieldValue name="geometry"><Disk2D USE="Connector"></Disk2D>
</fieldValue>
</ProtoInstance>
</Transform>
</Transform>
</Group>
<Script directOutput="true"><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="sensor" accessType="initializeOnly" type="SFNode"><PlaneSensor USE="PlaneSensor"></PlaneSensor>
</field>
<field name="transform" accessType="initializeOnly" type="SFNode"><Transform USE="Node"></Transform>
</field>
<IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize ()
{
	sensor .offset = translation;
}]]></Script>
<ROUTE fromNode="PlaneSensor" fromField="translation_changed" toNode="Node" toField="set_translation"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare55.name = "Node";
ProtoInterface ProtoInterface56 = createNode("ProtoInterface");
field field57 = createNode("field");
field57.name = "translation";
field57.accessType = "inputOutput";
field57.type = "SFVec3f";
ProtoInterface56.field = new MFNode();

ProtoInterface56.field[0] = field57;

ProtoDeclare55.protoInterface = ProtoInterface56;

ProtoBody ProtoBody58 = createNode("ProtoBody");
Group Group59 = createNode("Group");
PlaneSensor PlaneSensor60 = createNode("PlaneSensor");
PlaneSensor60.DEF = "PlaneSensor";
Group59.children = new MFNode();

Group59.children[0] = PlaneSensor60;

Transform Transform61 = createNode("Transform");
Transform61.DEF = "Node";
IS IS62 = createNode("IS");
connect connect63 = createNode("connect");
connect63.nodeField = "translation";
connect63.protoField = "translation";
IS62.connect = new MFNode();

IS62.connect[0] = connect63;

Transform61.iS = IS62;

ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "Widget";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "geometry";
ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "RoundedRectangle2D";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "cornerRadius";
fieldValue67.value = "0.12";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "size";
fieldValue68.value = "2 1";
ProtoInstance66.fieldValue[1] = fieldValue68;

fieldValue65.children = new MFNode();

fieldValue65.children[0] = ProtoInstance66;

ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Transform61.children = new MFNode();

Transform61.children[0] = ProtoInstance64;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "Input";
Transform69.translation = new SFVec3f(new float[-1,0,0]);
ProtoInstance ProtoInstance70 = createNode("ProtoInstance");
ProtoInstance70.name = "Widget";
fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "lineColor";
fieldValue71.value = "0.72 0.14 0.23";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "geometry";
Disk2D Disk2D73 = createNode("Disk2D");
Disk2D73.DEF = "Connector";
Disk2D73.outerRadius = 0.2;
fieldValue72.children = new MFNode();

fieldValue72.children[0] = Disk2D73;

ProtoInstance70.fieldValue[1] = fieldValue72;

Transform69.children = new MFNode();

Transform69.children[0] = ProtoInstance70;

Transform61.children[1] = Transform69;

Transform Transform74 = createNode("Transform");
Transform74.DEF = "Output";
Transform74.translation = new SFVec3f(new float[1,0,0]);
ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "Widget";
fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "lineColor";
fieldValue76.value = "0.44 0.5 0.72";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "geometry";
Disk2D Disk2D78 = createNode("Disk2D");
Disk2D78.USE = "Connector";
fieldValue77.children = new MFNode();

fieldValue77.children[0] = Disk2D78;

ProtoInstance75.fieldValue[1] = fieldValue77;

Transform74.children = new MFNode();

Transform74.children[0] = ProtoInstance75;

Transform61.children[2] = Transform74;

Group59.children[1] = Transform61;

ProtoBody58.children = new MFNode();

ProtoBody58.children[0] = Group59;

Script Script79 = createNode("Script");
Script79.directOutput = True;
field field80 = createNode("field");
field80.name = "translation";
field80.accessType = "inputOutput";
field80.type = "SFVec3f";
Script79.field = new MFNode();

Script79.field[0] = field80;

field field81 = createNode("field");
field81.name = "sensor";
field81.accessType = "initializeOnly";
field81.type = "SFNode";
PlaneSensor PlaneSensor82 = createNode("PlaneSensor");
PlaneSensor82.USE = "PlaneSensor";
field81.children = new MFNode();

field81.children[0] = PlaneSensor82;

Script79.field[1] = field81;

field field83 = createNode("field");
field83.name = "transform";
field83.accessType = "initializeOnly";
field83.type = "SFNode";
Transform Transform84 = createNode("Transform");
Transform84.USE = "Node";
field83.children = new MFNode();

field83.children[0] = Transform84;

Script79.field[2] = field83;

IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "translation";
connect86.protoField = "translation";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

Script79.iS = IS85;


Script79.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}`)
ProtoBody58.children[1] = Script79;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "PlaneSensor";
ROUTE87.fromField = "translation_changed";
ROUTE87.toNode = "Node";
ROUTE87.toField = "set_translation";
ProtoBody58.children[2] = ROUTE87;

ProtoDeclare55.protoBody = ProtoBody58;

children[2] = ProtoDeclare55;

ProtoDeclare ProtoDeclare88 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Route" ><ProtoInterface><field name="lineColor" accessType="inputOutput" type="SFColor" value="0.43 0.43 0.98"></field>
<field name="linewidthScaleFactor" accessType="inputOutput" type="SFFloat" value="2"></field>
<field name="output" accessType="initializeOnly" type="SFNode"></field>
<field name="input" accessType="initializeOnly" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><Shape><Appearance containerField="appearance"><LineProperties containerField="lineProperties"><IS><connect nodeField="linewidthScaleFactor" protoField="linewidthScaleFactor"></connect>
</IS>
</LineProperties>
<Material containerField="material" diffuseColor="0 0 0"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
</IS>
</Material>
</Appearance>
<LineSet DEF="Geometry_1" vertexCount="2"><Coordinate point="-1 0 0 1 0 0"></Coordinate>
</LineSet>
</Shape>
<Script DEF="Route" directOutput="true"><field name="set_translation" accessType="inputOnly" type="SFVec3f"></field>
<field name="routeDimension" accessType="initializeOnly" type="SFInt32" value="21"></field>
<field name="output" accessType="initializeOnly" type="SFNode"></field>
<field name="input" accessType="initializeOnly" type="SFNode"></field>
<field name="geometry" accessType="initializeOnly" type="SFNode"><LineSet USE="Geometry_1"></LineSet>
</field>
<field name="self" accessType="initializeOnly" type="SFNode"><Script USE="Route"></Script>
</field>
<IS><connect nodeField="output" protoField="output"></connect>
<connect nodeField="input" protoField="input"></connect>
</IS>
<![CDATA[vrmlscript:
function initialize ()
{
	Browser .addRoute (output, 'translation_changed', self, 'set_translation');
	Browser .addRoute (input,  'translation_changed', self, 'set_translation');

	set_translation ();
}

function set_translation ()
{
	geometry .vertexCount [0] = routeDimension;

	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));
	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));

	var w = inPoint .x - outPoint .x;
	var h = outPoint .y - inPoint .y;

	for (var i = 0; i < routeDimension; ++ i)
	{
		var t = i / (routeDimension - 1);
		var y = h / 2 * (Math .cos (t * Math .PI) - 1);

		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
	}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare88.name = "Route";
ProtoInterface ProtoInterface89 = createNode("ProtoInterface");
field field90 = createNode("field");
field90.name = "lineColor";
field90.accessType = "inputOutput";
field90.type = "SFColor";
field90.value = "0.43 0.43 0.98";
ProtoInterface89.field = new MFNode();

ProtoInterface89.field[0] = field90;

field field91 = createNode("field");
field91.name = "linewidthScaleFactor";
field91.accessType = "inputOutput";
field91.type = "SFFloat";
field91.value = "2";
ProtoInterface89.field[1] = field91;

field field92 = createNode("field");
field92.name = "output";
field92.accessType = "initializeOnly";
field92.type = "SFNode";
ProtoInterface89.field[2] = field92;

field field93 = createNode("field");
field93.name = "input";
field93.accessType = "initializeOnly";
field93.type = "SFNode";
ProtoInterface89.field[3] = field93;

ProtoDeclare88.protoInterface = ProtoInterface89;

ProtoBody ProtoBody94 = createNode("ProtoBody");
Shape Shape95 = createNode("Shape");
Appearance Appearance96 = createNode("Appearance");
LineProperties LineProperties97 = createNode("LineProperties");
IS IS98 = createNode("IS");
connect connect99 = createNode("connect");
connect99.nodeField = "linewidthScaleFactor";
connect99.protoField = "linewidthScaleFactor";
IS98.connect = new MFNode();

IS98.connect[0] = connect99;

LineProperties97.iS = IS98;

Appearance96.lineProperties = LineProperties97;

Material Material100 = createNode("Material");
Material100.diffuseColor = new SFColor(new float[0,0,0]);
IS IS101 = createNode("IS");
connect connect102 = createNode("connect");
connect102.nodeField = "emissiveColor";
connect102.protoField = "lineColor";
IS101.connect = new MFNode();

IS101.connect[0] = connect102;

Material100.iS = IS101;

Appearance96.material = Material100;

Shape95.appearance = Appearance96;

LineSet LineSet103 = createNode("LineSet");
LineSet103.DEF = "Geometry_1";
LineSet103.vertexCount = new MFInt32(new int[2]);
Coordinate Coordinate104 = createNode("Coordinate");
Coordinate104.point = new MFVec3f(new float[-1,0,0,1,0,0]);
LineSet103.coord = Coordinate104;

Shape95.geometry = LineSet103;

ProtoBody94.children = new MFNode();

ProtoBody94.children[0] = Shape95;

Script Script105 = createNode("Script");
Script105.DEF = "Route";
Script105.directOutput = True;
field field106 = createNode("field");
field106.name = "set_translation";
field106.accessType = "inputOnly";
field106.type = "SFVec3f";
Script105.field = new MFNode();

Script105.field[0] = field106;

field field107 = createNode("field");
field107.name = "routeDimension";
field107.accessType = "initializeOnly";
field107.type = "SFInt32";
field107.value = "21";
Script105.field[1] = field107;

field field108 = createNode("field");
field108.name = "output";
field108.accessType = "initializeOnly";
field108.type = "SFNode";
Script105.field[2] = field108;

field field109 = createNode("field");
field109.name = "input";
field109.accessType = "initializeOnly";
field109.type = "SFNode";
Script105.field[3] = field109;

field field110 = createNode("field");
field110.name = "geometry";
field110.accessType = "initializeOnly";
field110.type = "SFNode";
LineSet LineSet111 = createNode("LineSet");
LineSet111.USE = "Geometry_1";
field110.children = new MFNode();

field110.children[0] = LineSet111;

Script105.field[4] = field110;

field field112 = createNode("field");
field112.name = "self";
field112.accessType = "initializeOnly";
field112.type = "SFNode";
Script Script113 = createNode("Script");
Script113.USE = "Route";
field112.children = new MFNode();

field112.children[0] = Script113;

Script105.field[5] = field112;

IS IS114 = createNode("IS");
connect connect115 = createNode("connect");
connect115.nodeField = "output";
connect115.protoField = "output";
IS114.connect = new MFNode();

IS114.connect[0] = connect115;

connect connect116 = createNode("connect");
connect116.nodeField = "input";
connect116.protoField = "input";
IS114.connect[1] = connect116;

Script105.iS = IS114;


Script105.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .addRoute (output, 'translation_changed', self, 'set_translation');\n"+
"	Browser .addRoute (input,  'translation_changed', self, 'set_translation');\n"+
"\n"+
"	set_translation ();\n"+
"}\n"+
"\n"+
"function set_translation ()\n"+
"{\n"+
"	geometry .vertexCount [0] = routeDimension;\n"+
"\n"+
"	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));\n"+
"	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));\n"+
"\n"+
"	var w = inPoint .x - outPoint .x;\n"+
"	var h = outPoint .y - inPoint .y;\n"+
"\n"+
"	for (var i = 0; i < routeDimension; ++ i)\n"+
"	{\n"+
"		var t = i / (routeDimension - 1);\n"+
"		var y = h / 2 * (Math .cos (t * Math .PI) - 1);\n"+
"\n"+
"		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));\n"+
"	}\n"+
"}`)
ProtoBody94.children[1] = Script105;

ProtoDeclare88.protoBody = ProtoBody94;

children[3] = ProtoDeclare88;

NavigationInfo NavigationInfo117 = createNode("NavigationInfo");
NavigationInfo117.type = new MFString(new java.lang.String[", ","PLANE_create3000.deANY"]);
children[4] = NavigationInfo117;

Background Background118 = createNode("Background");
Background118.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[5] = Background118;

OrthoViewpoint OrthoViewpoint119 = createNode("OrthoViewpoint");
OrthoViewpoint119.description = "OthoViewpoint";
OrthoViewpoint119.position = new SFVec3f(new float[-3.13496,-4.19776,10]);
OrthoViewpoint119.centerOfRotation = new SFVec3f(new float[-3.13496,-4.19776,0]);
OrthoViewpoint119.fieldOfView = new SFVec3f(new float[0,0,10,10]);
children[6] = OrthoViewpoint119;

Viewpoint Viewpoint120 = createNode("Viewpoint");
Viewpoint120.description = "Viewpoint";
children[7] = Viewpoint120;

Transform Transform121 = createNode("Transform");
Transform121.DEF = "Connectors";
ProtoInstance ProtoInstance122 = createNode("ProtoInstance");
ProtoInstance122.name = "Route";
fieldValue fieldValue123 = createNode("fieldValue");
fieldValue123.name = "output";
ProtoInstance ProtoInstance124 = createNode("ProtoInstance");
ProtoInstance124.name = "Node";
ProtoInstance124.DEF = "N1";
fieldValue fieldValue125 = createNode("fieldValue");
fieldValue125.name = "translation";
fieldValue125.value = "-3.98323 2.88948 0";
ProtoInstance124.fieldValue = new MFNode();

ProtoInstance124.fieldValue[0] = fieldValue125;

fieldValue123.children = new MFNode();

fieldValue123.children[0] = ProtoInstance124;

ProtoInstance122.fieldValue = new MFNode();

ProtoInstance122.fieldValue[0] = fieldValue123;

fieldValue fieldValue126 = createNode("fieldValue");
fieldValue126.name = "input";
ProtoInstance ProtoInstance127 = createNode("ProtoInstance");
ProtoInstance127.name = "Node";
ProtoInstance127.DEF = "N2";
fieldValue fieldValue128 = createNode("fieldValue");
fieldValue128.name = "translation";
fieldValue128.value = "-0.0890862 2.96049 0";
ProtoInstance127.fieldValue = new MFNode();

ProtoInstance127.fieldValue[0] = fieldValue128;

fieldValue126.children = new MFNode();

fieldValue126.children[0] = ProtoInstance127;

ProtoInstance122.fieldValue[1] = fieldValue126;

Transform121.children = new MFNode();

Transform121.children[0] = ProtoInstance122;

ProtoInstance ProtoInstance129 = createNode("ProtoInstance");
ProtoInstance129.name = "Route";
fieldValue fieldValue130 = createNode("fieldValue");
fieldValue130.name = "output";
ProtoInstance ProtoInstance131 = createNode("ProtoInstance");
ProtoInstance131.name = "Node";
ProtoInstance131.USE = "N1";
fieldValue130.children = new MFNode();

fieldValue130.children[0] = ProtoInstance131;

ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

fieldValue fieldValue132 = createNode("fieldValue");
fieldValue132.name = "input";
ProtoInstance ProtoInstance133 = createNode("ProtoInstance");
ProtoInstance133.name = "Node";
ProtoInstance133.DEF = "N3";
fieldValue fieldValue134 = createNode("fieldValue");
fieldValue134.name = "translation";
fieldValue134.value = "-0.104169 1.16371 0";
ProtoInstance133.fieldValue = new MFNode();

ProtoInstance133.fieldValue[0] = fieldValue134;

fieldValue132.children = new MFNode();

fieldValue132.children[0] = ProtoInstance133;

ProtoInstance129.fieldValue[1] = fieldValue132;

Transform121.children[1] = ProtoInstance129;

ProtoInstance ProtoInstance135 = createNode("ProtoInstance");
ProtoInstance135.name = "Route";
fieldValue fieldValue136 = createNode("fieldValue");
fieldValue136.name = "output";
ProtoInstance ProtoInstance137 = createNode("ProtoInstance");
ProtoInstance137.name = "Node";
ProtoInstance137.USE = "N1";
fieldValue136.children = new MFNode();

fieldValue136.children[0] = ProtoInstance137;

ProtoInstance135.fieldValue = new MFNode();

ProtoInstance135.fieldValue[0] = fieldValue136;

fieldValue fieldValue138 = createNode("fieldValue");
fieldValue138.name = "input";
ProtoInstance ProtoInstance139 = createNode("ProtoInstance");
ProtoInstance139.name = "Node";
ProtoInstance139.DEF = "N4";
fieldValue fieldValue140 = createNode("fieldValue");
fieldValue140.name = "translation";
fieldValue140.value = "-0.0998688 -0.40172 0";
ProtoInstance139.fieldValue = new MFNode();

ProtoInstance139.fieldValue[0] = fieldValue140;

fieldValue138.children = new MFNode();

fieldValue138.children[0] = ProtoInstance139;

ProtoInstance135.fieldValue[1] = fieldValue138;

Transform121.children[2] = ProtoInstance135;

ProtoInstance ProtoInstance141 = createNode("ProtoInstance");
ProtoInstance141.name = "Route";
fieldValue fieldValue142 = createNode("fieldValue");
fieldValue142.name = "output";
ProtoInstance ProtoInstance143 = createNode("ProtoInstance");
ProtoInstance143.name = "Node";
ProtoInstance143.USE = "N1";
fieldValue142.children = new MFNode();

fieldValue142.children[0] = ProtoInstance143;

ProtoInstance141.fieldValue = new MFNode();

ProtoInstance141.fieldValue[0] = fieldValue142;

fieldValue fieldValue144 = createNode("fieldValue");
fieldValue144.name = "input";
ProtoInstance ProtoInstance145 = createNode("ProtoInstance");
ProtoInstance145.name = "Node";
ProtoInstance145.DEF = "N5";
fieldValue fieldValue146 = createNode("fieldValue");
fieldValue146.name = "translation";
fieldValue146.value = "-0.0998687 -2.14742 0";
ProtoInstance145.fieldValue = new MFNode();

ProtoInstance145.fieldValue[0] = fieldValue146;

fieldValue144.children = new MFNode();

fieldValue144.children[0] = ProtoInstance145;

ProtoInstance141.fieldValue[1] = fieldValue144;

Transform121.children[3] = ProtoInstance141;

ProtoInstance ProtoInstance147 = createNode("ProtoInstance");
ProtoInstance147.name = "Route";
fieldValue fieldValue148 = createNode("fieldValue");
fieldValue148.name = "output";
ProtoInstance ProtoInstance149 = createNode("ProtoInstance");
ProtoInstance149.name = "Node";
ProtoInstance149.USE = "N2";
fieldValue148.children = new MFNode();

fieldValue148.children[0] = ProtoInstance149;

ProtoInstance147.fieldValue = new MFNode();

ProtoInstance147.fieldValue[0] = fieldValue148;

fieldValue fieldValue150 = createNode("fieldValue");
fieldValue150.name = "input";
ProtoInstance ProtoInstance151 = createNode("ProtoInstance");
ProtoInstance151.name = "Node";
ProtoInstance151.DEF = "N6";
fieldValue fieldValue152 = createNode("fieldValue");
fieldValue152.name = "translation";
fieldValue152.value = "3.55694 2.4116 0";
ProtoInstance151.fieldValue = new MFNode();

ProtoInstance151.fieldValue[0] = fieldValue152;

fieldValue150.children = new MFNode();

fieldValue150.children[0] = ProtoInstance151;

ProtoInstance147.fieldValue[1] = fieldValue150;

Transform121.children[4] = ProtoInstance147;

ProtoInstance ProtoInstance153 = createNode("ProtoInstance");
ProtoInstance153.name = "Route";
fieldValue fieldValue154 = createNode("fieldValue");
fieldValue154.name = "output";
ProtoInstance ProtoInstance155 = createNode("ProtoInstance");
ProtoInstance155.name = "Node";
ProtoInstance155.USE = "N3";
fieldValue154.children = new MFNode();

fieldValue154.children[0] = ProtoInstance155;

ProtoInstance153.fieldValue = new MFNode();

ProtoInstance153.fieldValue[0] = fieldValue154;

fieldValue fieldValue156 = createNode("fieldValue");
fieldValue156.name = "input";
ProtoInstance ProtoInstance157 = createNode("ProtoInstance");
ProtoInstance157.name = "Node";
ProtoInstance157.USE = "N6";
fieldValue156.children = new MFNode();

fieldValue156.children[0] = ProtoInstance157;

ProtoInstance153.fieldValue[1] = fieldValue156;

Transform121.children[5] = ProtoInstance153;

ProtoInstance ProtoInstance158 = createNode("ProtoInstance");
ProtoInstance158.name = "Route";
fieldValue fieldValue159 = createNode("fieldValue");
fieldValue159.name = "output";
ProtoInstance ProtoInstance160 = createNode("ProtoInstance");
ProtoInstance160.name = "Node";
ProtoInstance160.USE = "N4";
fieldValue159.children = new MFNode();

fieldValue159.children[0] = ProtoInstance160;

ProtoInstance158.fieldValue = new MFNode();

ProtoInstance158.fieldValue[0] = fieldValue159;

fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "input";
ProtoInstance ProtoInstance162 = createNode("ProtoInstance");
ProtoInstance162.name = "Node";
ProtoInstance162.DEF = "N7";
fieldValue fieldValue163 = createNode("fieldValue");
fieldValue163.name = "translation";
fieldValue163.value = "3.75106 -0.0794556 0";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

fieldValue161.children = new MFNode();

fieldValue161.children[0] = ProtoInstance162;

ProtoInstance158.fieldValue[1] = fieldValue161;

Transform121.children[6] = ProtoInstance158;

ProtoInstance ProtoInstance164 = createNode("ProtoInstance");
ProtoInstance164.name = "Route";
fieldValue fieldValue165 = createNode("fieldValue");
fieldValue165.name = "output";
ProtoInstance ProtoInstance166 = createNode("ProtoInstance");
ProtoInstance166.name = "Node";
ProtoInstance166.USE = "N5";
fieldValue165.children = new MFNode();

fieldValue165.children[0] = ProtoInstance166;

ProtoInstance164.fieldValue = new MFNode();

ProtoInstance164.fieldValue[0] = fieldValue165;

fieldValue fieldValue167 = createNode("fieldValue");
fieldValue167.name = "input";
ProtoInstance ProtoInstance168 = createNode("ProtoInstance");
ProtoInstance168.name = "Node";
ProtoInstance168.USE = "N7";
fieldValue167.children = new MFNode();

fieldValue167.children[0] = ProtoInstance168;

ProtoInstance164.fieldValue[1] = fieldValue167;

Transform121.children[7] = ProtoInstance164;

ProtoInstance ProtoInstance169 = createNode("ProtoInstance");
ProtoInstance169.name = "Route";
fieldValue fieldValue170 = createNode("fieldValue");
fieldValue170.name = "output";
ProtoInstance ProtoInstance171 = createNode("ProtoInstance");
ProtoInstance171.name = "Node";
ProtoInstance171.USE = "N6";
fieldValue170.children = new MFNode();

fieldValue170.children[0] = ProtoInstance171;

ProtoInstance169.fieldValue = new MFNode();

ProtoInstance169.fieldValue[0] = fieldValue170;

fieldValue fieldValue172 = createNode("fieldValue");
fieldValue172.name = "input";
ProtoInstance ProtoInstance173 = createNode("ProtoInstance");
ProtoInstance173.name = "Node";
ProtoInstance173.DEF = "N8";
fieldValue fieldValue174 = createNode("fieldValue");
fieldValue174.name = "translation";
fieldValue174.value = "7.68077 1.21228 0";
ProtoInstance173.fieldValue = new MFNode();

ProtoInstance173.fieldValue[0] = fieldValue174;

fieldValue172.children = new MFNode();

fieldValue172.children[0] = ProtoInstance173;

ProtoInstance169.fieldValue[1] = fieldValue172;

Transform121.children[8] = ProtoInstance169;

ProtoInstance ProtoInstance175 = createNode("ProtoInstance");
ProtoInstance175.name = "Route";
fieldValue fieldValue176 = createNode("fieldValue");
fieldValue176.name = "output";
ProtoInstance ProtoInstance177 = createNode("ProtoInstance");
ProtoInstance177.name = "Node";
ProtoInstance177.USE = "N7";
fieldValue176.children = new MFNode();

fieldValue176.children[0] = ProtoInstance177;

ProtoInstance175.fieldValue = new MFNode();

ProtoInstance175.fieldValue[0] = fieldValue176;

fieldValue fieldValue178 = createNode("fieldValue");
fieldValue178.name = "input";
ProtoInstance ProtoInstance179 = createNode("ProtoInstance");
ProtoInstance179.name = "Node";
ProtoInstance179.USE = "N8";
fieldValue178.children = new MFNode();

fieldValue178.children[0] = ProtoInstance179;

ProtoInstance175.fieldValue[1] = fieldValue178;

Transform121.children[9] = ProtoInstance175;

ProtoInstance ProtoInstance180 = createNode("ProtoInstance");
ProtoInstance180.name = "Node";
ProtoInstance180.USE = "N1";
Transform121.children[10] = ProtoInstance180;

ProtoInstance ProtoInstance181 = createNode("ProtoInstance");
ProtoInstance181.name = "Node";
ProtoInstance181.USE = "N2";
Transform121.children[11] = ProtoInstance181;

ProtoInstance ProtoInstance182 = createNode("ProtoInstance");
ProtoInstance182.name = "Node";
ProtoInstance182.USE = "N3";
Transform121.children[12] = ProtoInstance182;

ProtoInstance ProtoInstance183 = createNode("ProtoInstance");
ProtoInstance183.name = "Node";
ProtoInstance183.USE = "N4";
Transform121.children[13] = ProtoInstance183;

ProtoInstance ProtoInstance184 = createNode("ProtoInstance");
ProtoInstance184.name = "Node";
ProtoInstance184.USE = "N5";
Transform121.children[14] = ProtoInstance184;

ProtoInstance ProtoInstance185 = createNode("ProtoInstance");
ProtoInstance185.name = "Node";
ProtoInstance185.USE = "N6";
Transform121.children[15] = ProtoInstance185;

ProtoInstance ProtoInstance186 = createNode("ProtoInstance");
ProtoInstance186.name = "Node";
ProtoInstance186.USE = "N7";
Transform121.children[16] = ProtoInstance186;

ProtoInstance ProtoInstance187 = createNode("ProtoInstance");
ProtoInstance187.name = "Node";
ProtoInstance187.USE = "N8";
Transform121.children[17] = ProtoInstance187;

children[8] = Transform121;

}
