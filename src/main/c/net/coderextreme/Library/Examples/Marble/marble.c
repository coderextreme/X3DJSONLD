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
meta3.content = "Tue, 22 Sep 2015 11:26:52 GMT";
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
meta6.content = "file:///home/holger/Projekte/Library/Examples/Marble/marble.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Tue, 13 Jun 2017 09:43:36 GMT";
head1.meta[5] = meta7;

head = head1;

ProtoDeclare ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Grid" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="dimension" accessType="inputOutput" type="MFInt32" value="10 10 10"></field>
<field name="majorLineEvery" accessType="inputOutput" type="MFInt32" value="5 5 5"></field>
<field name="majorLineOffset" accessType="inputOutput" type="MFInt32" value="0 0 0"></field>
<field name="color" accessType="inputOutput" type="SFColor" value="0.5 0.5 0.5"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0.61803"></field>
<field name="lineColor" accessType="inputOutput" type="SFColor" value="1 0.7 0.7"></field>
<field name="lineTransparency" accessType="inputOutput" type="SFFloat" value="0.8"></field>
<field name="majorLineColor" accessType="inputOutput" type="SFColor" value="1 0.7 0.7"></field>
<field name="majorLineTransparency" accessType="inputOutput" type="SFFloat" value="0.6"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
</IS>
<Transform DEF="Plane" rotation="-3.09087122910219e-8 0.70710528118436 0.707108281185553 3.14159" scale="10 10 1"><Shape><Appearance containerField="appearance"><Material containerField="material" DEF="Material2" diffuseColor="0 0 0"><IS><connect nodeField="emissiveColor" protoField="color"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<Rectangle2D size="1 1"><IS><connect nodeField="solid" protoField="solid"></connect>
</IS>
</Rectangle2D>
</Shape>
</Transform>
<Shape DEF="MajorGrid"><Appearance containerField="appearance"><Material containerField="material" DEF="MajorMaterial"><IS><connect nodeField="emissiveColor" protoField="majorLineColor"></connect>
<connect nodeField="transparency" protoField="majorLineTransparency"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="MajorGrid_1" coordIndex="0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1"><Coordinate point="-5 0 -5.25 -5 0 5.25 0 0 -5.25 0 0 5.25 5 0 -5.25 5 0 5.25 -5.25 0 -5 5.25 0 -5 -5.25 0 0 5.25 0 0 -5.25 0 5 5.25 0 5"></Coordinate>
</IndexedLineSet>
</Shape>
<Shape DEF="MinorGrid"><Appearance containerField="appearance"><Material containerField="material" DEF="MinorMaterial"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
<connect nodeField="transparency" protoField="lineTransparency"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="MinorGrid_1" coordIndex="0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1 12 13 -1 14 15 -1 16 17 -1 18 19 -1 20 21 -1 22 23 -1 24 25 -1 26 27 -1 28 29 -1 30 31 -1"><Coordinate point="-4 0 -5 -4 0 5 -3 0 -5 -3 0 5 -2 0 -5 -2 0 5 -1 0 -5 -1 0 5 1 0 -5 1 0 5 2 0 -5 2 0 5 3 0 -5 3 0 5 4 0 -5 4 0 5 -5 0 -4 5 0 -4 -5 0 -3 5 0 -3 -5 0 -2 5 0 -2 -5 0 -1 5 0 -1 -5 0 1 5 0 1 -5 0 2 5 0 2 -5 0 3 5 0 3 -5 0 4 5 0 4"></Coordinate>
</IndexedLineSet>
</Shape>
<Shape DEF="MajorPoints"><Appearance containerField="appearance"><LineProperties containerField="lineProperties" linewidthScaleFactor="6"></LineProperties>
<Material containerField="material" USE="MajorMaterial"></Material>
</Appearance>
<PointSet DEF="MajorPoints_1"><Coordinate point="0 -5 0 0 0 0 0 5 0"></Coordinate>
</PointSet>
</Shape>
<Shape DEF="MinorPoints"><Appearance containerField="appearance"><LineProperties containerField="lineProperties" linewidthScaleFactor="4"></LineProperties>
<Material containerField="material" USE="MinorMaterial"></Material>
</Appearance>
<PointSet DEF="MinorPoints_1"><Coordinate point="0 -4 0 0 -3 0 0 -2 0 0 -1 0 0 1 0 0 2 0 0 3 0 0 4 0"></Coordinate>
</PointSet>
</Shape>
</Transform>
<Script DEF="GridScript" directOutput="true" mustEvaluate="true"><field name="dimension" accessType="inputOutput" type="MFInt32"></field>
<field name="majorLineEvery" accessType="inputOutput" type="MFInt32"></field>
<field name="majorLineOffset" accessType="inputOutput" type="MFInt32"></field>
<field name="plane" accessType="initializeOnly" type="SFNode"><Transform USE="Plane"></Transform>
</field>
<field name="majorGrid" accessType="initializeOnly" type="SFNode"><IndexedLineSet USE="MajorGrid_1"></IndexedLineSet>
</field>
<field name="minorGrid" accessType="initializeOnly" type="SFNode"><IndexedLineSet USE="MinorGrid_1"></IndexedLineSet>
</field>
<field name="majorPoints" accessType="initializeOnly" type="SFNode"><PointSet USE="MajorPoints_1"></PointSet>
</field>
<field name="minorPoints" accessType="initializeOnly" type="SFNode"><PointSet USE="MinorPoints_1"></PointSet>
</field>
<IS><connect nodeField="dimension" protoField="dimension"></connect>
<connect nodeField="majorLineEvery" protoField="majorLineEvery"></connect>
<connect nodeField="majorLineOffset" protoField="majorLineOffset"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	eventsProcessed ();
}

function eventsProcessed ()
{
	// Plane

	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);

	// Grid

	generateGrid (true, majorGrid);
	generateGrid (false, minorGrid);

	// Points

	generatePoints (true,  majorPoints .coord .point);
	generatePoints (false, minorPoints .coord .point);
}

function generateGrid (major, grid)
{
	var point       = grid .coord .point;
	var coordIndex  = new MFInt32 ();
	var scaleX1_2   = dimension [0] / 2;
	var scaleZ1_2   = dimension [2] / 2;
	var majorAdd    = major / 4;
	var p           = 0;

	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 0))
			continue;

		var x = -scaleX1_2 + i;

		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);
		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
			
		p += 2;
	}

	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 2))
			continue;

		var z = -scaleZ1_2 + i;

		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);
		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
		
		p += 2;
	}

	point .length = p;

	grid .set_coordIndex = coordIndex;
}

function generatePoints (major, point)
{
	var scaleY1_2 = -dimension [1] / 2;
	var p         = 0;

	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 1))
			continue;

		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);
		++ p;
	}

	point .length = p;
}

function isMajorLine (i, index)
{
	for (var d = index; d < majorLineEvery .length; d += 3)
	{
		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))
			return true;
	}

	return false;
}

function isMajor (i, dimension, majorLineEvery, majorLineOffset)
{
	if (majorLineEvery)
	{
		var index = Math .floor (i - dimension / 2 - majorLineOffset);

		return !(index % majorLineEvery);
	}

	return false;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "Grid";
ProtoInterface ProtoInterface10 = createNode("ProtoInterface");
field field11 = createNode("field");
field11.name = "translation";
field11.accessType = "inputOutput";
field11.type = "SFVec3f";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

field field12 = createNode("field");
field12.name = "rotation";
field12.accessType = "inputOutput";
field12.type = "SFRotation";
ProtoInterface10.field[1] = field12;

field field13 = createNode("field");
field13.name = "scale";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
field13.value = "1 1 1";
ProtoInterface10.field[2] = field13;

field field14 = createNode("field");
field14.name = "dimension";
field14.accessType = "inputOutput";
field14.type = "MFInt32";
field14.value = "10 10 10";
ProtoInterface10.field[3] = field14;

field field15 = createNode("field");
field15.name = "majorLineEvery";
field15.accessType = "inputOutput";
field15.type = "MFInt32";
field15.value = "5 5 5";
ProtoInterface10.field[4] = field15;

field field16 = createNode("field");
field16.name = "majorLineOffset";
field16.accessType = "inputOutput";
field16.type = "MFInt32";
field16.value = "0 0 0";
ProtoInterface10.field[5] = field16;

field field17 = createNode("field");
field17.name = "color";
field17.accessType = "inputOutput";
field17.type = "SFColor";
field17.value = "0.5 0.5 0.5";
ProtoInterface10.field[6] = field17;

field field18 = createNode("field");
field18.name = "transparency";
field18.accessType = "inputOutput";
field18.type = "SFFloat";
field18.value = "0.61803";
ProtoInterface10.field[7] = field18;

field field19 = createNode("field");
field19.name = "lineColor";
field19.accessType = "inputOutput";
field19.type = "SFColor";
field19.value = "1 0.7 0.7";
ProtoInterface10.field[8] = field19;

field field20 = createNode("field");
field20.name = "lineTransparency";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
field20.value = "0.8";
ProtoInterface10.field[9] = field20;

field field21 = createNode("field");
field21.name = "majorLineColor";
field21.accessType = "inputOutput";
field21.type = "SFColor";
field21.value = "1 0.7 0.7";
ProtoInterface10.field[10] = field21;

field field22 = createNode("field");
field22.name = "majorLineTransparency";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
field22.value = "0.6";
ProtoInterface10.field[11] = field22;

field field23 = createNode("field");
field23.name = "solid";
field23.accessType = "initializeOnly";
field23.type = "SFBool";
field23.value = "true";
ProtoInterface10.field[12] = field23;

ProtoDeclare9.protoInterface = ProtoInterface10;

ProtoBody ProtoBody24 = createNode("ProtoBody");
Transform Transform25 = createNode("Transform");
IS IS26 = createNode("IS");
connect connect27 = createNode("connect");
connect27.nodeField = "translation";
connect27.protoField = "translation";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "rotation";
connect28.protoField = "rotation";
IS26.connect[1] = connect28;

connect connect29 = createNode("connect");
connect29.nodeField = "scale";
connect29.protoField = "scale";
IS26.connect[2] = connect29;

Transform25.iS = IS26;

Transform Transform30 = createNode("Transform");
Transform30.DEF = "Plane";
Transform30.rotation = new SFRotation(new float[-3.09087122910219e-8,0.70710528118436,0.707108281185553,3.14159]);
Transform30.scale = new SFVec3f(new float[10,10,1]);
Shape Shape31 = createNode("Shape");
Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.DEF = "Material2";
Material33.diffuseColor = new SFColor(new float[0,0,0]);
IS IS34 = createNode("IS");
connect connect35 = createNode("connect");
connect35.nodeField = "emissiveColor";
connect35.protoField = "color";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

connect connect36 = createNode("connect");
connect36.nodeField = "transparency";
connect36.protoField = "transparency";
IS34.connect[1] = connect36;

Material33.iS = IS34;

Appearance32.material = Material33;

Shape31.appearance = Appearance32;

Rectangle2D Rectangle2D37 = createNode("Rectangle2D");
Rectangle2D37.size = new SFVec2f(new float[1,1]);
IS IS38 = createNode("IS");
connect connect39 = createNode("connect");
connect39.nodeField = "solid";
connect39.protoField = "solid";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

Rectangle2D37.iS = IS38;

Shape31.geometry = Rectangle2D37;

Transform30.child = new undefined();

Transform30.child[0] = Shape31;

Transform25.children = new MFNode();

Transform25.children[0] = Transform30;

Shape Shape40 = createNode("Shape");
Shape40.DEF = "MajorGrid";
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.DEF = "MajorMaterial";
IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
connect44.nodeField = "emissiveColor";
connect44.protoField = "majorLineColor";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

connect connect45 = createNode("connect");
connect45.nodeField = "transparency";
connect45.protoField = "majorLineTransparency";
IS43.connect[1] = connect45;

Material42.iS = IS43;

Appearance41.material = Material42;

Shape40.appearance = Appearance41;

IndexedLineSet IndexedLineSet46 = createNode("IndexedLineSet");
IndexedLineSet46.DEF = "MajorGrid_1";
IndexedLineSet46.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1]);
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[-5,0,-5.25,-5,0,5.25,0,0,-5.25,0,0,5.25,5,0,-5.25,5,0,5.25,-5.25,0,-5,5.25,0,-5,-5.25,0,0,5.25,0,0,-5.25,0,5,5.25,0,5]);
IndexedLineSet46.coord = Coordinate47;

Shape40.geometry = IndexedLineSet46;

Transform25.child[1] = Shape40;

Shape Shape48 = createNode("Shape");
Shape48.DEF = "MinorGrid";
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.DEF = "MinorMaterial";
IS IS51 = createNode("IS");
connect connect52 = createNode("connect");
connect52.nodeField = "emissiveColor";
connect52.protoField = "lineColor";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

connect connect53 = createNode("connect");
connect53.nodeField = "transparency";
connect53.protoField = "lineTransparency";
IS51.connect[1] = connect53;

Material50.iS = IS51;

Appearance49.material = Material50;

Shape48.appearance = Appearance49;

IndexedLineSet IndexedLineSet54 = createNode("IndexedLineSet");
IndexedLineSet54.DEF = "MinorGrid_1";
IndexedLineSet54.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1]);
Coordinate Coordinate55 = createNode("Coordinate");
Coordinate55.point = new MFVec3f(new float[-4,0,-5,-4,0,5,-3,0,-5,-3,0,5,-2,0,-5,-2,0,5,-1,0,-5,-1,0,5,1,0,-5,1,0,5,2,0,-5,2,0,5,3,0,-5,3,0,5,4,0,-5,4,0,5,-5,0,-4,5,0,-4,-5,0,-3,5,0,-3,-5,0,-2,5,0,-2,-5,0,-1,5,0,-1,-5,0,1,5,0,1,-5,0,2,5,0,2,-5,0,3,5,0,3,-5,0,4,5,0,4]);
IndexedLineSet54.coord = Coordinate55;

Shape48.geometry = IndexedLineSet54;

Transform25.child[2] = Shape48;

Shape Shape56 = createNode("Shape");
Shape56.DEF = "MajorPoints";
Appearance Appearance57 = createNode("Appearance");
LineProperties LineProperties58 = createNode("LineProperties");
LineProperties58.linewidthScaleFactor = 6;
Appearance57.lineProperties = LineProperties58;

Material Material59 = createNode("Material");
Material59.USE = "MajorMaterial";
Appearance57.material = Material59;

Shape56.appearance = Appearance57;

PointSet PointSet60 = createNode("PointSet");
PointSet60.DEF = "MajorPoints_1";
Coordinate Coordinate61 = createNode("Coordinate");
Coordinate61.point = new MFVec3f(new float[0,-5,0,0,0,0,0,5,0]);
PointSet60.coord = Coordinate61;

Shape56.geometry = PointSet60;

Transform25.child[3] = Shape56;

Shape Shape62 = createNode("Shape");
Shape62.DEF = "MinorPoints";
Appearance Appearance63 = createNode("Appearance");
LineProperties LineProperties64 = createNode("LineProperties");
LineProperties64.linewidthScaleFactor = 4;
Appearance63.lineProperties = LineProperties64;

Material Material65 = createNode("Material");
Material65.USE = "MinorMaterial";
Appearance63.material = Material65;

Shape62.appearance = Appearance63;

PointSet PointSet66 = createNode("PointSet");
PointSet66.DEF = "MinorPoints_1";
Coordinate Coordinate67 = createNode("Coordinate");
Coordinate67.point = new MFVec3f(new float[0,-4,0,0,-3,0,0,-2,0,0,-1,0,0,1,0,0,2,0,0,3,0,0,4,0]);
PointSet66.coord = Coordinate67;

Shape62.geometry = PointSet66;

Transform25.child[4] = Shape62;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Transform25;

Script Script68 = createNode("Script");
Script68.DEF = "GridScript";
Script68.directOutput = True;
Script68.mustEvaluate = True;
field field69 = createNode("field");
field69.name = "dimension";
field69.accessType = "inputOutput";
field69.type = "MFInt32";
Script68.field = new MFNode();

Script68.field[0] = field69;

field field70 = createNode("field");
field70.name = "majorLineEvery";
field70.accessType = "inputOutput";
field70.type = "MFInt32";
Script68.field[1] = field70;

field field71 = createNode("field");
field71.name = "majorLineOffset";
field71.accessType = "inputOutput";
field71.type = "MFInt32";
Script68.field[2] = field71;

field field72 = createNode("field");
field72.name = "plane";
field72.accessType = "initializeOnly";
field72.type = "SFNode";
Transform Transform73 = createNode("Transform");
Transform73.USE = "Plane";
field72.children = new MFNode();

field72.children[0] = Transform73;

Script68.field[3] = field72;

field field74 = createNode("field");
field74.name = "majorGrid";
field74.accessType = "initializeOnly";
field74.type = "SFNode";
IndexedLineSet IndexedLineSet75 = createNode("IndexedLineSet");
IndexedLineSet75.USE = "MajorGrid_1";
field74.children = new MFNode();

field74.children[0] = IndexedLineSet75;

Script68.field[4] = field74;

field field76 = createNode("field");
field76.name = "minorGrid";
field76.accessType = "initializeOnly";
field76.type = "SFNode";
IndexedLineSet IndexedLineSet77 = createNode("IndexedLineSet");
IndexedLineSet77.USE = "MinorGrid_1";
field76.children = new MFNode();

field76.children[0] = IndexedLineSet77;

Script68.field[5] = field76;

field field78 = createNode("field");
field78.name = "majorPoints";
field78.accessType = "initializeOnly";
field78.type = "SFNode";
PointSet PointSet79 = createNode("PointSet");
PointSet79.USE = "MajorPoints_1";
field78.children = new MFNode();

field78.children[0] = PointSet79;

Script68.field[6] = field78;

field field80 = createNode("field");
field80.name = "minorPoints";
field80.accessType = "initializeOnly";
field80.type = "SFNode";
PointSet PointSet81 = createNode("PointSet");
PointSet81.USE = "MinorPoints_1";
field80.children = new MFNode();

field80.children[0] = PointSet81;

Script68.field[7] = field80;

IS IS82 = createNode("IS");
connect connect83 = createNode("connect");
connect83.nodeField = "dimension";
connect83.protoField = "dimension";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

connect connect84 = createNode("connect");
connect84.nodeField = "majorLineEvery";
connect84.protoField = "majorLineEvery";
IS82.connect[1] = connect84;

connect connect85 = createNode("connect");
connect85.nodeField = "majorLineOffset";
connect85.protoField = "majorLineOffset";
IS82.connect[2] = connect85;

Script68.iS = IS82;


Script68.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	eventsProcessed ();\n"+
"}\n"+
"\n"+
"function eventsProcessed ()\n"+
"{\n"+
"	// Plane\n"+
"\n"+
"	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);\n"+
"\n"+
"	// Grid\n"+
"\n"+
"	generateGrid (true, majorGrid);\n"+
"	generateGrid (false, minorGrid);\n"+
"\n"+
"	// Points\n"+
"\n"+
"	generatePoints (true,  majorPoints .coord .point);\n"+
"	generatePoints (false, minorPoints .coord .point);\n"+
"}\n"+
"\n"+
"function generateGrid (major, grid)\n"+
"{\n"+
"	var point       = grid .coord .point;\n"+
"	var coordIndex  = new MFInt32 ();\n"+
"	var scaleX1_2   = dimension [0] / 2;\n"+
"	var scaleZ1_2   = dimension [2] / 2;\n"+
"	var majorAdd    = major / 4;\n"+
"	var p           = 0;\n"+
"\n"+
"	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)\n"+
"	{\n"+
"		if (major - isMajorLine (i, 0))\n"+
"			continue;\n"+
"\n"+
"		var x = -scaleX1_2 + i;\n"+
"\n"+
"		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);\n"+
"		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);\n"+
"		coordIndex [coordIndex .length] = p;\n"+
"		coordIndex [coordIndex .length] = p + 1;\n"+
"		coordIndex [coordIndex .length] = -1;\n"+
"			\n"+
"		p += 2;\n"+
"	}\n"+
"\n"+
"	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)\n"+
"	{\n"+
"		if (major - isMajorLine (i, 2))\n"+
"			continue;\n"+
"\n"+
"		var z = -scaleZ1_2 + i;\n"+
"\n"+
"		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);\n"+
"		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);\n"+
"		coordIndex [coordIndex .length] = p;\n"+
"		coordIndex [coordIndex .length] = p + 1;\n"+
"		coordIndex [coordIndex .length] = -1;\n"+
"		\n"+
"		p += 2;\n"+
"	}\n"+
"\n"+
"	point .length = p;\n"+
"\n"+
"	grid .set_coordIndex = coordIndex;\n"+
"}\n"+
"\n"+
"function generatePoints (major, point)\n"+
"{\n"+
"	var scaleY1_2 = -dimension [1] / 2;\n"+
"	var p         = 0;\n"+
"\n"+
"	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)\n"+
"	{\n"+
"		if (major - isMajorLine (i, 1))\n"+
"			continue;\n"+
"\n"+
"		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);\n"+
"		++ p;\n"+
"	}\n"+
"\n"+
"	point .length = p;\n"+
"}\n"+
"\n"+
"function isMajorLine (i, index)\n"+
"{\n"+
"	for (var d = index; d < majorLineEvery .length; d += 3)\n"+
"	{\n"+
"		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))\n"+
"			return true;\n"+
"	}\n"+
"\n"+
"	return false;\n"+
"}\n"+
"\n"+
"function isMajor (i, dimension, majorLineEvery, majorLineOffset)\n"+
"{\n"+
"	if (majorLineEvery)\n"+
"	{\n"+
"		var index = Math .floor (i - dimension / 2 - majorLineOffset);\n"+
"\n"+
"		return !(index % majorLineEvery);\n"+
"	}\n"+
"\n"+
"	return false;\n"+
"}`)
ProtoBody24.children[1] = Script68;

ProtoDeclare9.protoBody = ProtoBody24;

children = new MFNode();

children[0] = ProtoDeclare9;

ProtoDeclare ProtoDeclare86 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewPrototype" ><ProtoBody><ProtoDeclare name="Grid"><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="dimension" accessType="inputOutput" type="MFInt32" value="10 10 10"></field>
<field name="majorLineEvery" accessType="inputOutput" type="MFInt32" value="5 5 5"></field>
<field name="majorLineOffset" accessType="inputOutput" type="MFInt32" value="0 0 0"></field>
<field name="color" accessType="inputOutput" type="SFColor" value="0.5 0.5 0.5"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0.61803"></field>
<field name="lineColor" accessType="inputOutput" type="SFColor" value="1 0.7 0.7"></field>
<field name="lineTransparency" accessType="inputOutput" type="SFFloat" value="0.8"></field>
<field name="majorLineColor" accessType="inputOutput" type="SFColor" value="1 0.7 0.7"></field>
<field name="majorLineTransparency" accessType="inputOutput" type="SFFloat" value="0.6"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
</IS>
<Transform DEF="Plane_1" rotation="-3.09087122910219e-8 0.70710528118436 0.707108281185553 3.14159" scale="10 10 1"><Shape><Appearance containerField="appearance"><Material containerField="material" DEF="Material2_1" diffuseColor="0 0 0"><IS><connect nodeField="emissiveColor" protoField="color"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<Rectangle2D size="1 1"><IS><connect nodeField="solid" protoField="solid"></connect>
</IS>
</Rectangle2D>
</Shape>
</Transform>
<Shape DEF="MajorGrid_2"><Appearance containerField="appearance"><Material containerField="material" DEF="MajorMaterial_1"><IS><connect nodeField="emissiveColor" protoField="majorLineColor"></connect>
<connect nodeField="transparency" protoField="majorLineTransparency"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="MajorGrid_3" coordIndex="0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1"><Coordinate point="-5 0 -5.25 -5 0 5.25 0 0 -5.25 0 0 5.25 5 0 -5.25 5 0 5.25 -5.25 0 -5 5.25 0 -5 -5.25 0 0 5.25 0 0 -5.25 0 5 5.25 0 5"></Coordinate>
</IndexedLineSet>
</Shape>
<Shape DEF="MinorGrid_2"><Appearance containerField="appearance"><Material containerField="material" DEF="MinorMaterial_1"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
<connect nodeField="transparency" protoField="lineTransparency"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="MinorGrid_3" coordIndex="0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1 12 13 -1 14 15 -1 16 17 -1 18 19 -1 20 21 -1 22 23 -1 24 25 -1 26 27 -1 28 29 -1 30 31 -1"><Coordinate point="-4 0 -5 -4 0 5 -3 0 -5 -3 0 5 -2 0 -5 -2 0 5 -1 0 -5 -1 0 5 1 0 -5 1 0 5 2 0 -5 2 0 5 3 0 -5 3 0 5 4 0 -5 4 0 5 -5 0 -4 5 0 -4 -5 0 -3 5 0 -3 -5 0 -2 5 0 -2 -5 0 -1 5 0 -1 -5 0 1 5 0 1 -5 0 2 5 0 2 -5 0 3 5 0 3 -5 0 4 5 0 4"></Coordinate>
</IndexedLineSet>
</Shape>
<Shape DEF="MajorPoints_2"><Appearance containerField="appearance"><LineProperties containerField="lineProperties" linewidthScaleFactor="6"></LineProperties>
<Material containerField="material" USE="MajorMaterial_1"></Material>
</Appearance>
<PointSet DEF="MajorPoints_3"><Coordinate point="0 -5 0 0 0 0 0 5 0"></Coordinate>
</PointSet>
</Shape>
<Shape DEF="MinorPoints_2"><Appearance containerField="appearance"><LineProperties containerField="lineProperties" linewidthScaleFactor="4"></LineProperties>
<Material containerField="material" USE="MinorMaterial_1"></Material>
</Appearance>
<PointSet DEF="MinorPoints_3"><Coordinate point="0 -4 0 0 -3 0 0 -2 0 0 -1 0 0 1 0 0 2 0 0 3 0 0 4 0"></Coordinate>
</PointSet>
</Shape>
</Transform>
<Script DEF="GridScript_1" directOutput="true" mustEvaluate="true"><field name="dimension" accessType="inputOutput" type="MFInt32"></field>
<field name="majorLineEvery" accessType="inputOutput" type="MFInt32"></field>
<field name="majorLineOffset" accessType="inputOutput" type="MFInt32"></field>
<field name="plane" accessType="initializeOnly" type="SFNode"><Transform USE="Plane_1"></Transform>
</field>
<field name="majorGrid" accessType="initializeOnly" type="SFNode"><IndexedLineSet USE="MajorGrid_3"></IndexedLineSet>
</field>
<field name="minorGrid" accessType="initializeOnly" type="SFNode"><IndexedLineSet USE="MinorGrid_3"></IndexedLineSet>
</field>
<field name="majorPoints" accessType="initializeOnly" type="SFNode"><PointSet USE="MajorPoints_3"></PointSet>
</field>
<field name="minorPoints" accessType="initializeOnly" type="SFNode"><PointSet USE="MinorPoints_3"></PointSet>
</field>
<IS><connect nodeField="dimension" protoField="dimension"></connect>
<connect nodeField="majorLineEvery" protoField="majorLineEvery"></connect>
<connect nodeField="majorLineOffset" protoField="majorLineOffset"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	eventsProcessed ();
}

function eventsProcessed ()
{
	// Plane

	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);

	// Grid

	generateGrid (true, majorGrid);
	generateGrid (false, minorGrid);

	// Points

	generatePoints (true,  majorPoints .coord .point);
	generatePoints (false, minorPoints .coord .point);
}

function generateGrid (major, grid)
{
	var point       = grid .coord .point;
	var coordIndex  = new MFInt32 ();
	var scaleX1_2   = dimension [0] / 2;
	var scaleZ1_2   = dimension [2] / 2;
	var majorAdd    = major / 4;
	var p           = 0;

	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 0))
			continue;

		var x = -scaleX1_2 + i;

		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);
		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
			
		p += 2;
	}

	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 2))
			continue;

		var z = -scaleZ1_2 + i;

		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);
		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
		
		p += 2;
	}

	point .length = p;

	grid .set_coordIndex = coordIndex;
}

function generatePoints (major, point)
{
	var scaleY1_2 = -dimension [1] / 2;
	var p         = 0;

	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 1))
			continue;

		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);
		++ p;
	}

	point .length = p;
}

function isMajorLine (i, index)
{
	for (var d = index; d < majorLineEvery .length; d += 3)
	{
		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))
			return true;
	}

	return false;
}

function isMajor (i, dimension, majorLineEvery, majorLineOffset)
{
	if (majorLineEvery)
	{
		var index = Math .floor (i - dimension / 2 - majorLineOffset);

		return !(index % majorLineEvery);
	}

	return false;
}]]></Script>
</ProtoBody>
</ProtoDeclare>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare86.name = "NewPrototype";
ProtoBody ProtoBody87 = createNode("ProtoBody");
ProtoDeclare ProtoDeclare88 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Grid" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="dimension" accessType="inputOutput" type="MFInt32" value="10 10 10"></field>
<field name="majorLineEvery" accessType="inputOutput" type="MFInt32" value="5 5 5"></field>
<field name="majorLineOffset" accessType="inputOutput" type="MFInt32" value="0 0 0"></field>
<field name="color" accessType="inputOutput" type="SFColor" value="0.5 0.5 0.5"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0.61803"></field>
<field name="lineColor" accessType="inputOutput" type="SFColor" value="1 0.7 0.7"></field>
<field name="lineTransparency" accessType="inputOutput" type="SFFloat" value="0.8"></field>
<field name="majorLineColor" accessType="inputOutput" type="SFColor" value="1 0.7 0.7"></field>
<field name="majorLineTransparency" accessType="inputOutput" type="SFFloat" value="0.6"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="scale" protoField="scale"></connect>
</IS>
<Transform DEF="Plane_1" rotation="-3.09087122910219e-8 0.70710528118436 0.707108281185553 3.14159" scale="10 10 1"><Shape><Appearance containerField="appearance"><Material containerField="material" DEF="Material2_1" diffuseColor="0 0 0"><IS><connect nodeField="emissiveColor" protoField="color"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
<Rectangle2D size="1 1"><IS><connect nodeField="solid" protoField="solid"></connect>
</IS>
</Rectangle2D>
</Shape>
</Transform>
<Shape DEF="MajorGrid_2"><Appearance containerField="appearance"><Material containerField="material" DEF="MajorMaterial_1"><IS><connect nodeField="emissiveColor" protoField="majorLineColor"></connect>
<connect nodeField="transparency" protoField="majorLineTransparency"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="MajorGrid_3" coordIndex="0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1"><Coordinate point="-5 0 -5.25 -5 0 5.25 0 0 -5.25 0 0 5.25 5 0 -5.25 5 0 5.25 -5.25 0 -5 5.25 0 -5 -5.25 0 0 5.25 0 0 -5.25 0 5 5.25 0 5"></Coordinate>
</IndexedLineSet>
</Shape>
<Shape DEF="MinorGrid_2"><Appearance containerField="appearance"><Material containerField="material" DEF="MinorMaterial_1"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
<connect nodeField="transparency" protoField="lineTransparency"></connect>
</IS>
</Material>
</Appearance>
<IndexedLineSet DEF="MinorGrid_3" coordIndex="0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1 12 13 -1 14 15 -1 16 17 -1 18 19 -1 20 21 -1 22 23 -1 24 25 -1 26 27 -1 28 29 -1 30 31 -1"><Coordinate point="-4 0 -5 -4 0 5 -3 0 -5 -3 0 5 -2 0 -5 -2 0 5 -1 0 -5 -1 0 5 1 0 -5 1 0 5 2 0 -5 2 0 5 3 0 -5 3 0 5 4 0 -5 4 0 5 -5 0 -4 5 0 -4 -5 0 -3 5 0 -3 -5 0 -2 5 0 -2 -5 0 -1 5 0 -1 -5 0 1 5 0 1 -5 0 2 5 0 2 -5 0 3 5 0 3 -5 0 4 5 0 4"></Coordinate>
</IndexedLineSet>
</Shape>
<Shape DEF="MajorPoints_2"><Appearance containerField="appearance"><LineProperties containerField="lineProperties" linewidthScaleFactor="6"></LineProperties>
<Material containerField="material" USE="MajorMaterial_1"></Material>
</Appearance>
<PointSet DEF="MajorPoints_3"><Coordinate point="0 -5 0 0 0 0 0 5 0"></Coordinate>
</PointSet>
</Shape>
<Shape DEF="MinorPoints_2"><Appearance containerField="appearance"><LineProperties containerField="lineProperties" linewidthScaleFactor="4"></LineProperties>
<Material containerField="material" USE="MinorMaterial_1"></Material>
</Appearance>
<PointSet DEF="MinorPoints_3"><Coordinate point="0 -4 0 0 -3 0 0 -2 0 0 -1 0 0 1 0 0 2 0 0 3 0 0 4 0"></Coordinate>
</PointSet>
</Shape>
</Transform>
<Script DEF="GridScript_1" directOutput="true" mustEvaluate="true"><field name="dimension" accessType="inputOutput" type="MFInt32"></field>
<field name="majorLineEvery" accessType="inputOutput" type="MFInt32"></field>
<field name="majorLineOffset" accessType="inputOutput" type="MFInt32"></field>
<field name="plane" accessType="initializeOnly" type="SFNode"><Transform USE="Plane_1"></Transform>
</field>
<field name="majorGrid" accessType="initializeOnly" type="SFNode"><IndexedLineSet USE="MajorGrid_3"></IndexedLineSet>
</field>
<field name="minorGrid" accessType="initializeOnly" type="SFNode"><IndexedLineSet USE="MinorGrid_3"></IndexedLineSet>
</field>
<field name="majorPoints" accessType="initializeOnly" type="SFNode"><PointSet USE="MajorPoints_3"></PointSet>
</field>
<field name="minorPoints" accessType="initializeOnly" type="SFNode"><PointSet USE="MinorPoints_3"></PointSet>
</field>
<IS><connect nodeField="dimension" protoField="dimension"></connect>
<connect nodeField="majorLineEvery" protoField="majorLineEvery"></connect>
<connect nodeField="majorLineOffset" protoField="majorLineOffset"></connect>
</IS>
<![CDATA[ecmascript:

function initialize ()
{
	eventsProcessed ();
}

function eventsProcessed ()
{
	// Plane

	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);

	// Grid

	generateGrid (true, majorGrid);
	generateGrid (false, minorGrid);

	// Points

	generatePoints (true,  majorPoints .coord .point);
	generatePoints (false, minorPoints .coord .point);
}

function generateGrid (major, grid)
{
	var point       = grid .coord .point;
	var coordIndex  = new MFInt32 ();
	var scaleX1_2   = dimension [0] / 2;
	var scaleZ1_2   = dimension [2] / 2;
	var majorAdd    = major / 4;
	var p           = 0;

	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 0))
			continue;

		var x = -scaleX1_2 + i;

		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);
		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
			
		p += 2;
	}

	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 2))
			continue;

		var z = -scaleZ1_2 + i;

		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);
		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);
		coordIndex [coordIndex .length] = p;
		coordIndex [coordIndex .length] = p + 1;
		coordIndex [coordIndex .length] = -1;
		
		p += 2;
	}

	point .length = p;

	grid .set_coordIndex = coordIndex;
}

function generatePoints (major, point)
{
	var scaleY1_2 = -dimension [1] / 2;
	var p         = 0;

	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)
	{
		if (major - isMajorLine (i, 1))
			continue;

		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);
		++ p;
	}

	point .length = p;
}

function isMajorLine (i, index)
{
	for (var d = index; d < majorLineEvery .length; d += 3)
	{
		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))
			return true;
	}

	return false;
}

function isMajor (i, dimension, majorLineEvery, majorLineOffset)
{
	if (majorLineEvery)
	{
		var index = Math .floor (i - dimension / 2 - majorLineOffset);

		return !(index % majorLineEvery);
	}

	return false;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare88.name = "Grid";
ProtoInterface ProtoInterface89 = createNode("ProtoInterface");
field field90 = createNode("field");
field90.name = "translation";
field90.accessType = "inputOutput";
field90.type = "SFVec3f";
ProtoInterface89.field = new MFNode();

ProtoInterface89.field[0] = field90;

field field91 = createNode("field");
field91.name = "rotation";
field91.accessType = "inputOutput";
field91.type = "SFRotation";
ProtoInterface89.field[1] = field91;

field field92 = createNode("field");
field92.name = "scale";
field92.accessType = "inputOutput";
field92.type = "SFVec3f";
field92.value = "1 1 1";
ProtoInterface89.field[2] = field92;

field field93 = createNode("field");
field93.name = "dimension";
field93.accessType = "inputOutput";
field93.type = "MFInt32";
field93.value = "10 10 10";
ProtoInterface89.field[3] = field93;

field field94 = createNode("field");
field94.name = "majorLineEvery";
field94.accessType = "inputOutput";
field94.type = "MFInt32";
field94.value = "5 5 5";
ProtoInterface89.field[4] = field94;

field field95 = createNode("field");
field95.name = "majorLineOffset";
field95.accessType = "inputOutput";
field95.type = "MFInt32";
field95.value = "0 0 0";
ProtoInterface89.field[5] = field95;

field field96 = createNode("field");
field96.name = "color";
field96.accessType = "inputOutput";
field96.type = "SFColor";
field96.value = "0.5 0.5 0.5";
ProtoInterface89.field[6] = field96;

field field97 = createNode("field");
field97.name = "transparency";
field97.accessType = "inputOutput";
field97.type = "SFFloat";
field97.value = "0.61803";
ProtoInterface89.field[7] = field97;

field field98 = createNode("field");
field98.name = "lineColor";
field98.accessType = "inputOutput";
field98.type = "SFColor";
field98.value = "1 0.7 0.7";
ProtoInterface89.field[8] = field98;

field field99 = createNode("field");
field99.name = "lineTransparency";
field99.accessType = "inputOutput";
field99.type = "SFFloat";
field99.value = "0.8";
ProtoInterface89.field[9] = field99;

field field100 = createNode("field");
field100.name = "majorLineColor";
field100.accessType = "inputOutput";
field100.type = "SFColor";
field100.value = "1 0.7 0.7";
ProtoInterface89.field[10] = field100;

field field101 = createNode("field");
field101.name = "majorLineTransparency";
field101.accessType = "inputOutput";
field101.type = "SFFloat";
field101.value = "0.6";
ProtoInterface89.field[11] = field101;

field field102 = createNode("field");
field102.name = "solid";
field102.accessType = "initializeOnly";
field102.type = "SFBool";
field102.value = "true";
ProtoInterface89.field[12] = field102;

ProtoDeclare88.protoInterface = ProtoInterface89;

ProtoBody ProtoBody103 = createNode("ProtoBody");
Transform Transform104 = createNode("Transform");
IS IS105 = createNode("IS");
connect connect106 = createNode("connect");
connect106.nodeField = "translation";
connect106.protoField = "translation";
IS105.connect = new MFNode();

IS105.connect[0] = connect106;

connect connect107 = createNode("connect");
connect107.nodeField = "rotation";
connect107.protoField = "rotation";
IS105.connect[1] = connect107;

connect connect108 = createNode("connect");
connect108.nodeField = "scale";
connect108.protoField = "scale";
IS105.connect[2] = connect108;

Transform104.iS = IS105;

Transform Transform109 = createNode("Transform");
Transform109.DEF = "Plane_1";
Transform109.rotation = new SFRotation(new float[-3.09087122910219e-8,0.70710528118436,0.707108281185553,3.14159]);
Transform109.scale = new SFVec3f(new float[10,10,1]);
Shape Shape110 = createNode("Shape");
Appearance Appearance111 = createNode("Appearance");
Material Material112 = createNode("Material");
Material112.DEF = "Material2_1";
Material112.diffuseColor = new SFColor(new float[0,0,0]);
IS IS113 = createNode("IS");
connect connect114 = createNode("connect");
connect114.nodeField = "emissiveColor";
connect114.protoField = "color";
IS113.connect = new MFNode();

IS113.connect[0] = connect114;

connect connect115 = createNode("connect");
connect115.nodeField = "transparency";
connect115.protoField = "transparency";
IS113.connect[1] = connect115;

Material112.iS = IS113;

Appearance111.material = Material112;

Shape110.appearance = Appearance111;

Rectangle2D Rectangle2D116 = createNode("Rectangle2D");
Rectangle2D116.size = new SFVec2f(new float[1,1]);
IS IS117 = createNode("IS");
connect connect118 = createNode("connect");
connect118.nodeField = "solid";
connect118.protoField = "solid";
IS117.connect = new MFNode();

IS117.connect[0] = connect118;

Rectangle2D116.iS = IS117;

Shape110.geometry = Rectangle2D116;

Transform109.child = new undefined();

Transform109.child[0] = Shape110;

Transform104.children = new MFNode();

Transform104.children[0] = Transform109;

Shape Shape119 = createNode("Shape");
Shape119.DEF = "MajorGrid_2";
Appearance Appearance120 = createNode("Appearance");
Material Material121 = createNode("Material");
Material121.DEF = "MajorMaterial_1";
IS IS122 = createNode("IS");
connect connect123 = createNode("connect");
connect123.nodeField = "emissiveColor";
connect123.protoField = "majorLineColor";
IS122.connect = new MFNode();

IS122.connect[0] = connect123;

connect connect124 = createNode("connect");
connect124.nodeField = "transparency";
connect124.protoField = "majorLineTransparency";
IS122.connect[1] = connect124;

Material121.iS = IS122;

Appearance120.material = Material121;

Shape119.appearance = Appearance120;

IndexedLineSet IndexedLineSet125 = createNode("IndexedLineSet");
IndexedLineSet125.DEF = "MajorGrid_3";
IndexedLineSet125.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1]);
Coordinate Coordinate126 = createNode("Coordinate");
Coordinate126.point = new MFVec3f(new float[-5,0,-5.25,-5,0,5.25,0,0,-5.25,0,0,5.25,5,0,-5.25,5,0,5.25,-5.25,0,-5,5.25,0,-5,-5.25,0,0,5.25,0,0,-5.25,0,5,5.25,0,5]);
IndexedLineSet125.coord = Coordinate126;

Shape119.geometry = IndexedLineSet125;

Transform104.child[1] = Shape119;

Shape Shape127 = createNode("Shape");
Shape127.DEF = "MinorGrid_2";
Appearance Appearance128 = createNode("Appearance");
Material Material129 = createNode("Material");
Material129.DEF = "MinorMaterial_1";
IS IS130 = createNode("IS");
connect connect131 = createNode("connect");
connect131.nodeField = "emissiveColor";
connect131.protoField = "lineColor";
IS130.connect = new MFNode();

IS130.connect[0] = connect131;

connect connect132 = createNode("connect");
connect132.nodeField = "transparency";
connect132.protoField = "lineTransparency";
IS130.connect[1] = connect132;

Material129.iS = IS130;

Appearance128.material = Material129;

Shape127.appearance = Appearance128;

IndexedLineSet IndexedLineSet133 = createNode("IndexedLineSet");
IndexedLineSet133.DEF = "MinorGrid_3";
IndexedLineSet133.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1]);
Coordinate Coordinate134 = createNode("Coordinate");
Coordinate134.point = new MFVec3f(new float[-4,0,-5,-4,0,5,-3,0,-5,-3,0,5,-2,0,-5,-2,0,5,-1,0,-5,-1,0,5,1,0,-5,1,0,5,2,0,-5,2,0,5,3,0,-5,3,0,5,4,0,-5,4,0,5,-5,0,-4,5,0,-4,-5,0,-3,5,0,-3,-5,0,-2,5,0,-2,-5,0,-1,5,0,-1,-5,0,1,5,0,1,-5,0,2,5,0,2,-5,0,3,5,0,3,-5,0,4,5,0,4]);
IndexedLineSet133.coord = Coordinate134;

Shape127.geometry = IndexedLineSet133;

Transform104.child[2] = Shape127;

Shape Shape135 = createNode("Shape");
Shape135.DEF = "MajorPoints_2";
Appearance Appearance136 = createNode("Appearance");
LineProperties LineProperties137 = createNode("LineProperties");
LineProperties137.linewidthScaleFactor = 6;
Appearance136.lineProperties = LineProperties137;

Material Material138 = createNode("Material");
Material138.USE = "MajorMaterial_1";
Appearance136.material = Material138;

Shape135.appearance = Appearance136;

PointSet PointSet139 = createNode("PointSet");
PointSet139.DEF = "MajorPoints_3";
Coordinate Coordinate140 = createNode("Coordinate");
Coordinate140.point = new MFVec3f(new float[0,-5,0,0,0,0,0,5,0]);
PointSet139.coord = Coordinate140;

Shape135.geometry = PointSet139;

Transform104.child[3] = Shape135;

Shape Shape141 = createNode("Shape");
Shape141.DEF = "MinorPoints_2";
Appearance Appearance142 = createNode("Appearance");
LineProperties LineProperties143 = createNode("LineProperties");
LineProperties143.linewidthScaleFactor = 4;
Appearance142.lineProperties = LineProperties143;

Material Material144 = createNode("Material");
Material144.USE = "MinorMaterial_1";
Appearance142.material = Material144;

Shape141.appearance = Appearance142;

PointSet PointSet145 = createNode("PointSet");
PointSet145.DEF = "MinorPoints_3";
Coordinate Coordinate146 = createNode("Coordinate");
Coordinate146.point = new MFVec3f(new float[0,-4,0,0,-3,0,0,-2,0,0,-1,0,0,1,0,0,2,0,0,3,0,0,4,0]);
PointSet145.coord = Coordinate146;

Shape141.geometry = PointSet145;

Transform104.child[4] = Shape141;

ProtoBody103.children = new MFNode();

ProtoBody103.children[0] = Transform104;

Script Script147 = createNode("Script");
Script147.DEF = "GridScript_1";
Script147.directOutput = True;
Script147.mustEvaluate = True;
field field148 = createNode("field");
field148.name = "dimension";
field148.accessType = "inputOutput";
field148.type = "MFInt32";
Script147.field = new MFNode();

Script147.field[0] = field148;

field field149 = createNode("field");
field149.name = "majorLineEvery";
field149.accessType = "inputOutput";
field149.type = "MFInt32";
Script147.field[1] = field149;

field field150 = createNode("field");
field150.name = "majorLineOffset";
field150.accessType = "inputOutput";
field150.type = "MFInt32";
Script147.field[2] = field150;

field field151 = createNode("field");
field151.name = "plane";
field151.accessType = "initializeOnly";
field151.type = "SFNode";
Transform Transform152 = createNode("Transform");
Transform152.USE = "Plane_1";
field151.children = new MFNode();

field151.children[0] = Transform152;

Script147.field[3] = field151;

field field153 = createNode("field");
field153.name = "majorGrid";
field153.accessType = "initializeOnly";
field153.type = "SFNode";
IndexedLineSet IndexedLineSet154 = createNode("IndexedLineSet");
IndexedLineSet154.USE = "MajorGrid_3";
field153.children = new MFNode();

field153.children[0] = IndexedLineSet154;

Script147.field[4] = field153;

field field155 = createNode("field");
field155.name = "minorGrid";
field155.accessType = "initializeOnly";
field155.type = "SFNode";
IndexedLineSet IndexedLineSet156 = createNode("IndexedLineSet");
IndexedLineSet156.USE = "MinorGrid_3";
field155.children = new MFNode();

field155.children[0] = IndexedLineSet156;

Script147.field[5] = field155;

field field157 = createNode("field");
field157.name = "majorPoints";
field157.accessType = "initializeOnly";
field157.type = "SFNode";
PointSet PointSet158 = createNode("PointSet");
PointSet158.USE = "MajorPoints_3";
field157.children = new MFNode();

field157.children[0] = PointSet158;

Script147.field[6] = field157;

field field159 = createNode("field");
field159.name = "minorPoints";
field159.accessType = "initializeOnly";
field159.type = "SFNode";
PointSet PointSet160 = createNode("PointSet");
PointSet160.USE = "MinorPoints_3";
field159.children = new MFNode();

field159.children[0] = PointSet160;

Script147.field[7] = field159;

IS IS161 = createNode("IS");
connect connect162 = createNode("connect");
connect162.nodeField = "dimension";
connect162.protoField = "dimension";
IS161.connect = new MFNode();

IS161.connect[0] = connect162;

connect connect163 = createNode("connect");
connect163.nodeField = "majorLineEvery";
connect163.protoField = "majorLineEvery";
IS161.connect[1] = connect163;

connect connect164 = createNode("connect");
connect164.nodeField = "majorLineOffset";
connect164.protoField = "majorLineOffset";
IS161.connect[2] = connect164;

Script147.iS = IS161;


Script147.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	eventsProcessed ();\n"+
"}\n"+
"\n"+
"function eventsProcessed ()\n"+
"{\n"+
"	// Plane\n"+
"\n"+
"	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);\n"+
"\n"+
"	// Grid\n"+
"\n"+
"	generateGrid (true, majorGrid);\n"+
"	generateGrid (false, minorGrid);\n"+
"\n"+
"	// Points\n"+
"\n"+
"	generatePoints (true,  majorPoints .coord .point);\n"+
"	generatePoints (false, minorPoints .coord .point);\n"+
"}\n"+
"\n"+
"function generateGrid (major, grid)\n"+
"{\n"+
"	var point       = grid .coord .point;\n"+
"	var coordIndex  = new MFInt32 ();\n"+
"	var scaleX1_2   = dimension [0] / 2;\n"+
"	var scaleZ1_2   = dimension [2] / 2;\n"+
"	var majorAdd    = major / 4;\n"+
"	var p           = 0;\n"+
"\n"+
"	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)\n"+
"	{\n"+
"		if (major - isMajorLine (i, 0))\n"+
"			continue;\n"+
"\n"+
"		var x = -scaleX1_2 + i;\n"+
"\n"+
"		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);\n"+
"		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);\n"+
"		coordIndex [coordIndex .length] = p;\n"+
"		coordIndex [coordIndex .length] = p + 1;\n"+
"		coordIndex [coordIndex .length] = -1;\n"+
"			\n"+
"		p += 2;\n"+
"	}\n"+
"\n"+
"	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)\n"+
"	{\n"+
"		if (major - isMajorLine (i, 2))\n"+
"			continue;\n"+
"\n"+
"		var z = -scaleZ1_2 + i;\n"+
"\n"+
"		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);\n"+
"		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);\n"+
"		coordIndex [coordIndex .length] = p;\n"+
"		coordIndex [coordIndex .length] = p + 1;\n"+
"		coordIndex [coordIndex .length] = -1;\n"+
"		\n"+
"		p += 2;\n"+
"	}\n"+
"\n"+
"	point .length = p;\n"+
"\n"+
"	grid .set_coordIndex = coordIndex;\n"+
"}\n"+
"\n"+
"function generatePoints (major, point)\n"+
"{\n"+
"	var scaleY1_2 = -dimension [1] / 2;\n"+
"	var p         = 0;\n"+
"\n"+
"	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)\n"+
"	{\n"+
"		if (major - isMajorLine (i, 1))\n"+
"			continue;\n"+
"\n"+
"		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);\n"+
"		++ p;\n"+
"	}\n"+
"\n"+
"	point .length = p;\n"+
"}\n"+
"\n"+
"function isMajorLine (i, index)\n"+
"{\n"+
"	for (var d = index; d < majorLineEvery .length; d += 3)\n"+
"	{\n"+
"		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))\n"+
"			return true;\n"+
"	}\n"+
"\n"+
"	return false;\n"+
"}\n"+
"\n"+
"function isMajor (i, dimension, majorLineEvery, majorLineOffset)\n"+
"{\n"+
"	if (majorLineEvery)\n"+
"	{\n"+
"		var index = Math .floor (i - dimension / 2 - majorLineOffset);\n"+
"\n"+
"		return !(index % majorLineEvery);\n"+
"	}\n"+
"\n"+
"	return false;\n"+
"}`)
ProtoBody103.children[1] = Script147;

ProtoDeclare88.protoBody = ProtoBody103;

ProtoBody87.children = new MFNode();

ProtoBody87.children[0] = ProtoDeclare88;

ProtoDeclare86.protoBody = ProtoBody87;

children[1] = ProtoDeclare86;

WorldInfo WorldInfo165 = createNode("WorldInfo");
WorldInfo165.title = "marble";
MetadataSet MetadataSet166 = createNode("MetadataSet");
MetadataSet166.name = "Titania";
MetadataSet MetadataSet167 = createNode("MetadataSet");
MetadataSet167.name = "AngleGrid";
MetadataSet167.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean168 = createNode("MetadataBoolean");
MetadataBoolean168.name = "enabled";
MetadataBoolean168.reference = "http://titania.create3000.de";
MetadataBoolean168.value = new MFBool(new boolean[False]);
MetadataSet167.value = new MFNode();

MetadataSet167.value[0] = MetadataBoolean168;

MetadataSet166.value = new MFNode();

MetadataSet166.value[0] = MetadataSet167;

MetadataSet MetadataSet169 = createNode("MetadataSet");
MetadataSet169.name = "Grid";
MetadataSet169.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean170 = createNode("MetadataBoolean");
MetadataBoolean170.name = "enabled";
MetadataBoolean170.reference = "http://titania.create3000.de";
MetadataBoolean170.value = new MFBool(new boolean[True]);
MetadataSet169.value = new MFNode();

MetadataSet169.value[0] = MetadataBoolean170;

MetadataInteger MetadataInteger171 = createNode("MetadataInteger");
MetadataInteger171.name = "majorLineOffset";
MetadataInteger171.reference = "http://titania.create3000.de";
MetadataInteger171.value = new MFInt32(new int[1,0,1]);
MetadataSet169.value[1] = MetadataInteger171;

MetadataInteger MetadataInteger172 = createNode("MetadataInteger");
MetadataInteger172.name = "majorLineEvery";
MetadataInteger172.reference = "http://titania.create3000.de";
MetadataInteger172.value = new MFInt32(new int[2,5,2]);
MetadataSet169.value[2] = MetadataInteger172;

MetadataSet166.value[1] = MetadataSet169;

MetadataSet MetadataSet173 = createNode("MetadataSet");
MetadataSet173.name = "NavigationInfo";
MetadataSet173.DEF = "NavigationInfo";
MetadataSet173.reference = "http://titania.create3000.de";
MetadataString MetadataString174 = createNode("MetadataString");
MetadataString174.name = "type";
MetadataString174.DEF = "type";
MetadataString174.reference = "http://titania.create3000.de";
MetadataString174.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet173.value = new MFNode();

MetadataSet173.value[0] = MetadataString174;

MetadataSet166.value[2] = MetadataSet173;

MetadataSet MetadataSet175 = createNode("MetadataSet");
MetadataSet175.name = "Viewpoint";
MetadataSet175.DEF = "Viewpoint";
MetadataSet175.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble176 = createNode("MetadataDouble");
MetadataDouble176.name = "position";
MetadataDouble176.DEF = "position";
MetadataDouble176.reference = "http://titania.create3000.de";
MetadataDouble176.value = new MFDouble(new double[-3.07363247871399,8.03197002410889,15.9220294952393]);
MetadataSet175.value = new MFNode();

MetadataSet175.value[0] = MetadataDouble176;

MetadataDouble MetadataDouble177 = createNode("MetadataDouble");
MetadataDouble177.name = "orientation";
MetadataDouble177.DEF = "orientation";
MetadataDouble177.reference = "http://titania.create3000.de";
MetadataDouble177.value = new MFDouble(new double[-0.921656397930821,-0.377252083461801,-0.0907212746653947,0.497329384088516]);
MetadataSet175.value[1] = MetadataDouble177;

MetadataDouble MetadataDouble178 = createNode("MetadataDouble");
MetadataDouble178.name = "centerOfRotation";
MetadataDouble178.DEF = "centerOfRotation";
MetadataDouble178.reference = "http://titania.create3000.de";
MetadataDouble178.value = new MFDouble(new double[0,0,0]);
MetadataSet175.value[2] = MetadataDouble178;

MetadataSet166.value[3] = MetadataSet175;

MetadataSet MetadataSet179 = createNode("MetadataSet");
MetadataSet179.name = "Selection";
MetadataSet179.DEF = "Selection";
MetadataSet179.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean180 = createNode("MetadataBoolean");
MetadataBoolean180.name = "selectGeometry";
MetadataBoolean180.DEF = "selectGeometry";
MetadataBoolean180.reference = "http://titania.create3000.de";
MetadataBoolean180.value = new MFBool(new boolean[False]);
MetadataSet179.value = new MFNode();

MetadataSet179.value[0] = MetadataBoolean180;

MetadataSet166.value[4] = MetadataSet179;

WorldInfo165.metadata = MetadataSet166;

children[2] = WorldInfo165;

Switch Switch181 = createNode("Switch");
Switch181.DEF = "Resources";
Switch181.whichChoice = -1;
Shape Shape182 = createNode("Shape");
Shape182.DEF = "GrayBox";
Appearance Appearance183 = createNode("Appearance");
Material Material184 = createNode("Material");
Material184.diffuseColor = new SFColor(new float[0,0,0]);
Material184.specularColor = new SFColor(new float[0.415,0.415,0.415]);
Material184.shininess = 0.102564;
Appearance183.material = Material184;

Shape182.appearance = Appearance183;

IndexedFaceSet IndexedFaceSet185 = createNode("IndexedFaceSet");
IndexedFaceSet185.creaseAngle = 3.14159;
IndexedFaceSet185.colorIndex = new MFInt32(new int[1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]);
IndexedFaceSet185.coordIndex = new MFInt32(new int[74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]);
Color Color186 = createNode("Color");
Color186.color = new MFColor(new float[0.2,0.2,0.2,0.5,0.5,0.5]);
IndexedFaceSet185.color = Color186;

Coordinate Coordinate187 = createNode("Coordinate");
Coordinate187.DEF = "coords_ME_Cube";
Coordinate187.point = new MFVec3f(new float[-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994]);
IndexedFaceSet185.coord = Coordinate187;

Shape182.geometry = IndexedFaceSet185;

Switch181.children = new MFNode();

Switch181.children[0] = Shape182;

Shape Shape188 = createNode("Shape");
Shape188.DEF = "YellowBox";
Appearance Appearance189 = createNode("Appearance");
Material Material190 = createNode("Material");
Material190.diffuseColor = new SFColor(new float[0,0,0]);
Material190.specularColor = new SFColor(new float[0.415,0.415,0.415]);
Material190.shininess = 0.102564;
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

IndexedFaceSet IndexedFaceSet191 = createNode("IndexedFaceSet");
IndexedFaceSet191.creaseAngle = 3.14159;
IndexedFaceSet191.colorIndex = new MFInt32(new int[1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]);
IndexedFaceSet191.coordIndex = new MFInt32(new int[74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]);
Color Color192 = createNode("Color");
Color192.color = new MFColor(new float[0,0,0,1,0.917647,0]);
IndexedFaceSet191.color = Color192;

Coordinate Coordinate193 = createNode("Coordinate");
Coordinate193.DEF = "coords_ME_Cube_1";
Coordinate193.point = new MFVec3f(new float[-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994]);
IndexedFaceSet191.coord = Coordinate193;

Shape188.geometry = IndexedFaceSet191;

Switch181.children[1] = Shape188;

Shape Shape194 = createNode("Shape");
Shape194.DEF = "OrangeBox";
Appearance Appearance195 = createNode("Appearance");
Material Material196 = createNode("Material");
Material196.diffuseColor = new SFColor(new float[0,0,0]);
Material196.specularColor = new SFColor(new float[0.415,0.415,0.415]);
Material196.shininess = 0.102564;
Appearance195.material = Material196;

Shape194.appearance = Appearance195;

IndexedFaceSet IndexedFaceSet197 = createNode("IndexedFaceSet");
IndexedFaceSet197.creaseAngle = 3.14159;
IndexedFaceSet197.colorIndex = new MFInt32(new int[1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]);
IndexedFaceSet197.coordIndex = new MFInt32(new int[74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]);
Color Color198 = createNode("Color");
Color198.color = new MFColor(new float[0,0,0,1,0.333333,0]);
IndexedFaceSet197.color = Color198;

Coordinate Coordinate199 = createNode("Coordinate");
Coordinate199.DEF = "coords_ME_Cube_2";
Coordinate199.point = new MFVec3f(new float[-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994]);
IndexedFaceSet197.coord = Coordinate199;

Shape194.geometry = IndexedFaceSet197;

Switch181.children[2] = Shape194;

Shape Shape200 = createNode("Shape");
Shape200.DEF = "RedBox";
Appearance Appearance201 = createNode("Appearance");
Material Material202 = createNode("Material");
Material202.diffuseColor = new SFColor(new float[0,0,0]);
Material202.specularColor = new SFColor(new float[0.415,0.415,0.415]);
Material202.shininess = 0.102564;
Appearance201.material = Material202;

Shape200.appearance = Appearance201;

IndexedFaceSet IndexedFaceSet203 = createNode("IndexedFaceSet");
IndexedFaceSet203.creaseAngle = 3.14159;
IndexedFaceSet203.colorIndex = new MFInt32(new int[1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]);
IndexedFaceSet203.coordIndex = new MFInt32(new int[74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]);
Color Color204 = createNode("Color");
Color204.color = new MFColor(new float[0,0,0,1,0,0]);
IndexedFaceSet203.color = Color204;

Coordinate Coordinate205 = createNode("Coordinate");
Coordinate205.DEF = "coords_ME_Cube_3";
Coordinate205.point = new MFVec3f(new float[-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994]);
IndexedFaceSet203.coord = Coordinate205;

Shape200.geometry = IndexedFaceSet203;

Switch181.children[3] = Shape200;

Shape Shape206 = createNode("Shape");
Shape206.DEF = "LilaBox";
Appearance Appearance207 = createNode("Appearance");
Material Material208 = createNode("Material");
Material208.diffuseColor = new SFColor(new float[0,0,0]);
Material208.specularColor = new SFColor(new float[0.415,0.415,0.415]);
Material208.shininess = 0.102564;
Appearance207.material = Material208;

Shape206.appearance = Appearance207;

IndexedFaceSet IndexedFaceSet209 = createNode("IndexedFaceSet");
IndexedFaceSet209.creaseAngle = 3.14159;
IndexedFaceSet209.colorIndex = new MFInt32(new int[1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1]);
IndexedFaceSet209.coordIndex = new MFInt32(new int[74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1]);
Color Color210 = createNode("Color");
Color210.color = new MFColor(new float[0,0,0,0.67451,0,1]);
IndexedFaceSet209.color = Color210;

Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.DEF = "coords_ME_Cube_4";
Coordinate211.point = new MFVec3f(new float[-0.699999,-1,0.699996,-0.700001,-0.700004,0.999997,-1,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1,-0.699994,-1,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1,-0.699997,0.700003,0.699999,-0.699998,1,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1,-0.699996,1,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1,0.700004,0.699994,0.700001,1,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994]);
IndexedFaceSet209.coord = Coordinate211;

Shape206.geometry = IndexedFaceSet209;

Switch181.children[4] = Shape206;

children[3] = Switch181;

Script Script212 = createNode("Script");
Script212.DEF = "EnterWorldScript";

Script212.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"PHONG\");\n"+
"}`)
children[4] = Script212;

NavigationInfo NavigationInfo213 = createNode("NavigationInfo");
children[5] = NavigationInfo213;

Background Background214 = createNode("Background");
Background214.DEF = "Gray";
Background214.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[6] = Background214;

KeySensor KeySensor215 = createNode("KeySensor");
KeySensor215.DEF = "A";
KeySensor215.enabled = False;
children[7] = KeySensor215;

Transform Transform216 = createNode("Transform");
Transform216.DEF = "Marble";
Transform216.translation = new SFVec3f(new float[0,1,0]);
Transform Transform217 = createNode("Transform");
Transform217.DEF = "SphereTranslation";
Viewpoint Viewpoint218 = createNode("Viewpoint");
Viewpoint218.description = "Home";
Viewpoint218.position = new SFVec3f(new float[-3.38726,12.9707,12.1553]);
Viewpoint218.orientation = new SFRotation(new float[-0.94727163287453,-0.299522883916634,-0.113852955875043,0.840082]);
Transform217.children = new MFNode();

Transform217.children[0] = Viewpoint218;

Transform Transform219 = createNode("Transform");
Transform219.DEF = "SphereRotation";
Shape Shape220 = createNode("Shape");
Appearance Appearance221 = createNode("Appearance");
Material Material222 = createNode("Material");
Material222.DEF = "Metal31";
Material222.ambientIntensity = 0.0955322;
Material222.diffuseColor = new SFColor(new float[0.99772,0.995715,1]);
Material222.specularColor = new SFColor(new float[1,0.701006,1]);
Material222.shininess = 0.127551;
Appearance221.material = Material222;

ImageTexture ImageTexture223 = createNode("ImageTexture");
ImageTexture223.url = new MFString(new java.lang.String[", ","checkerboard.pngcheckerboard.svg"]);
Appearance221.texture = ImageTexture223;

Shape220.appearance = Appearance221;

Sphere Sphere224 = createNode("Sphere");
Sphere224.solid = False;
Shape220.geometry = Sphere224;

Transform219.child = new undefined();

Transform219.child[0] = Shape220;

Transform217.children[1] = Transform219;

Transform216.children = new MFNode();

Transform216.children[0] = Transform217;

Script Script225 = createNode("Script");
Script225.DEF = "MarbleScript";
Script225.directOutput = True;
field field226 = createNode("field");
field226.name = "set_actionKeyPress";
field226.accessType = "inputOnly";
field226.type = "SFInt32";
Script225.field = new MFNode();

Script225.field[0] = field226;

field field227 = createNode("field");
field227.name = "fieldSize";
field227.accessType = "inputOutput";
field227.type = "SFVec3f";
field227.value = "2 0 2";
Script225.field[1] = field227;

field field228 = createNode("field");
field228.name = "marbleRadius";
field228.accessType = "inputOutput";
field228.type = "SFFloat";
field228.value = "1";
Script225.field[2] = field228;

field field229 = createNode("field");
field229.name = "position_changed";
field229.accessType = "outputOnly";
field229.type = "MFInt32";
Script225.field[3] = field229;

field field230 = createNode("field");
field230.name = "timer";
field230.accessType = "initializeOnly";
field230.type = "SFNode";
TimeSensor TimeSensor231 = createNode("TimeSensor");
TimeSensor231.DEF = "_1";
TimeSensor231.cycleInterval = 0.61803398875;
TimeSensor231.startTime = 1446646222.59139;
field230.children = new MFNode();

field230.children[0] = TimeSensor231;

Script225.field[4] = field230;

field field232 = createNode("field");
field232.name = "orientationInterpolator";
field232.accessType = "initializeOnly";
field232.type = "SFNode";
OrientationInterpolator OrientationInterpolator233 = createNode("OrientationInterpolator");
OrientationInterpolator233.DEF = "_2";
OrientationInterpolator233.key = new MFFloat(new float[0,0.25,0.5,0.75,1]);
OrientationInterpolator233.keyValue = new MFRotation(new float[0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]);
field232.children = new MFNode();

field232.children[0] = OrientationInterpolator233;

Script225.field[5] = field232;

field field234 = createNode("field");
field234.name = "positionInterpolator";
field234.accessType = "initializeOnly";
field234.type = "SFNode";
PositionInterpolator PositionInterpolator235 = createNode("PositionInterpolator");
PositionInterpolator235.DEF = "_3";
PositionInterpolator235.key = new MFFloat(new float[0,1]);
PositionInterpolator235.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
field234.children = new MFNode();

field234.children[0] = PositionInterpolator235;

Script225.field[6] = field234;

field field236 = createNode("field");
field236.name = "rectangle";
field236.accessType = "initializeOnly";
field236.type = "SFNode";
Transform Transform237 = createNode("Transform");
Transform237.DEF = "MarblePositionRectangle";
Transform237.rotation = new SFRotation(new float[0.999999999993436,0.00000362335999997621,-7.56699999995033e-10,4.71239]);
Transform237.scaleOrientation = new SFRotation(new float[0.999999999994294,0.00000297420999998303,0.00000160218999999086,0.785189]);
Shape Shape238 = createNode("Shape");
Appearance Appearance239 = createNode("Appearance");
Material Material240 = createNode("Material");
Material240.DEF = "Neon22";
Material240.ambientIntensity = 0;
Material240.diffuseColor = new SFColor(new float[0,0,0]);
Material240.specularColor = new SFColor(new float[0.622449,0.622449,0.622449]);
Material240.emissiveColor = new SFColor(new float[0.934028,0.00304288,1]);
Material240.shininess = 0.0510204;
Appearance239.material = Material240;

Shape238.appearance = Appearance239;

Rectangle2D Rectangle2D241 = createNode("Rectangle2D");
Shape238.geometry = Rectangle2D241;

Transform237.child = new undefined();

Transform237.child[0] = Shape238;

field236.children = new MFNode();

field236.children[0] = Transform237;

Script225.field[7] = field236;

field field242 = createNode("field");
field242.name = "grid";
field242.accessType = "initializeOnly";
field242.type = "SFNode";
ProtoInstance ProtoInstance243 = createNode("ProtoInstance");
ProtoInstance243.name = "Grid";
ProtoInstance243.DEF = "_4";
fieldValue fieldValue244 = createNode("fieldValue");
fieldValue244.name = "dimension";
fieldValue244.value = "22 0 22";
ProtoInstance243.fieldValue = new MFNode();

ProtoInstance243.fieldValue[0] = fieldValue244;

fieldValue fieldValue245 = createNode("fieldValue");
fieldValue245.name = "majorLineEvery";
fieldValue245.value = "2 5 2";
ProtoInstance243.fieldValue[1] = fieldValue245;

fieldValue fieldValue246 = createNode("fieldValue");
fieldValue246.name = "majorLineOffset";
fieldValue246.value = "1 0 1";
ProtoInstance243.fieldValue[2] = fieldValue246;

fieldValue fieldValue247 = createNode("fieldValue");
fieldValue247.name = "transparency";
fieldValue247.value = "1";
ProtoInstance243.fieldValue[3] = fieldValue247;

fieldValue fieldValue248 = createNode("fieldValue");
fieldValue248.name = "lineColor";
fieldValue248.value = "0 0 0";
ProtoInstance243.fieldValue[4] = fieldValue248;

fieldValue fieldValue249 = createNode("fieldValue");
fieldValue249.name = "majorLineColor";
fieldValue249.value = "0 0 0";
ProtoInstance243.fieldValue[5] = fieldValue249;

field242.children = new MFNode();

field242.children[0] = ProtoInstance243;

Script225.field[8] = field242;

Group Group250 = createNode("Group");
KeySensor KeySensor251 = createNode("KeySensor");
KeySensor251.DEF = "MarbleKeySensor";
Group250.children = new MFNode();

Group250.children[0] = KeySensor251;

Script225.metadata = Group250;


Script225.setSourceCode(`ecmascript:\n"+
"\n"+
"var\n"+
"	up    = new SFVec3f (-1, 0,  0),\n"+
"	down  = new SFVec3f ( 1, 0,  0),\n"+
"	left  = new SFVec3f ( 0, 0,  1),\n"+
"	right = new SFVec3f ( 0, 0, -1);\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	positionInterpolator    .keyValue = new MFVec3f ();\n"+
"	orientationInterpolator .keyValue = new MFRotation ();\n"+
"	rectangle .translation            = new SFVec3f (); \n"+
"\n"+
"	positionInterpolator    .set_fraction = 1;\n"+
"	orientationInterpolator .set_fraction = 1;\n"+
"	\n"+
"	position_changed = new MFInt32 (grid .dimension [0] / fieldSize [0] / 2,\n"+
"	                                0,\n"+
"	                                grid .dimension [2] / fieldSize [2] / 2);\n"+
"}\n"+
"\n"+
"function set_actionKeyPress (value, time)\n"+
"{\n"+
"	if (timer .isActive)\n"+
"		return;\n"+
"	\n"+
"	switch (value)\n"+
"	{\n"+
"		case 17: // up\n"+
"			roll (-1, up, 2, time);\n"+
"			break;\n"+
"		case 18: // down\n"+
"			roll (1, down, 2, time);\n"+
"			break;\n"+
"		case 19: // left\n"+
"			roll (-1, left, 0, time);\n"+
"			break;\n"+
"		case 20: // right\n"+
"			roll (1, right, 0, time);\n"+
"			break;\n"+
"	}\n"+
"}\n"+
"\n"+
"function roll (direction, rotationAxis, axis, time)\n"+
"{\n"+
"	// PositionInterpolator\n"+
"\n"+
"	var\n"+
"		startTranslation = positionInterpolator .keyValue [1],\n"+
"		translation      = new SFVec3f ();\n"+
"		\n"+
"	translation [axis] = 2 * grid .scale [axis] * direction;\n"+
"	translation        = startTranslation .add (translation);\n"+
"\n"+
"	if (Math .abs (translation [axis]) > grid .dimension [axis] / fieldSize [axis] * grid .scale [axis])\n"+
"		return;\n"+
"		\n"+
"	position_changed [axis] += direction;\n"+
"\n"+
"	positionInterpolator .keyValue = new MFVec3f (startTranslation, translation);\n"+
"	\n"+
"	// OrientationInterpolator\n"+
"\n"+
"	var\n"+
"		startRotation = orientationInterpolator .keyValue [4],\n"+
"		angle         = 2 * grid .scale [axis] / marbleRadius,\n"+
"	   rotation1     = new SFRotation (rotationAxis, angle * 0.25),\n"+
"		rotation2     = new SFRotation (rotationAxis, angle * 0.5),\n"+
"		rotation3     = new SFRotation (rotationAxis, angle * 0.75),\n"+
"		rotation4     = new SFRotation (rotationAxis, angle);\n"+
"	\n"+
"	rotation1 = startRotation .multiply (rotation1);\n"+
"	rotation2 = startRotation .multiply (rotation2);\n"+
"	rotation3 = startRotation .multiply (rotation3);\n"+
"	rotation4 = startRotation .multiply (rotation4);\n"+
"\n"+
"	orientationInterpolator .keyValue = new MFRotation (startRotation, rotation1, rotation2, rotation3, rotation4);\n"+
"	timer .startTime = time;\n"+
"	\n"+
"	// Rectangle\n"+
"	\n"+
"	rectangle .translation = positionInterpolator .keyValue [1];\n"+
"}`)
Transform216.children[1] = Script225;

children[8] = Transform216;

Transform Transform252 = createNode("Transform");
Transform252.USE = "MarblePositionRectangle";
children[9] = Transform252;

ProtoInstance ProtoInstance253 = createNode("ProtoInstance");
ProtoInstance253.name = "Grid";
ProtoInstance253.USE = "_4";
children[10] = ProtoInstance253;

Script Script254 = createNode("Script");
Script254.DEF = "ItemsScript";
field field255 = createNode("field");
field255.name = "set_position";
field255.accessType = "inputOnly";
field255.type = "MFInt32";
Script254.field = new MFNode();

Script254.field[0] = field255;

field field256 = createNode("field");
field256.name = "fieldSize";
field256.accessType = "inputOutput";
field256.type = "SFVec3f";
field256.value = "2 0 2";
Script254.field[1] = field256;

field field257 = createNode("field");
field257.name = "item";
field257.accessType = "initializeOnly";
field257.type = "SFNode";
Transform Transform258 = createNode("Transform");
Transform258.DEF = "Item";
Transform Transform259 = createNode("Transform");
Transform259.DEF = "_5";
Transform259.rotation = new SFRotation(new float[0,1,0,1.92752507496879]);
Transform Transform260 = createNode("Transform");
Transform260.DEF = "Rectangle2D";
Transform260.translation = new SFVec3f(new float[0,1,0]);
Transform260.rotation = new SFRotation(new float[-3.18379e-14,-9.22889e-14,1,2.35619]);
Transform260.scale = new SFVec3f(new float[0.707107,0.707107,1]);
Transform260.scaleOrientation = new SFRotation(new float[0.00000990983999946696,0.00000306160999983532,0.999999999946211,0.392693]);
Group Group261 = createNode("Group");
Group261.DEF = "ItemRotationAnim";
MetadataSet MetadataSet262 = createNode("MetadataSet");
MetadataSet262.name = "Animation";
MetadataSet262.DEF = "Animation";
MetadataSet262.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger263 = createNode("MetadataInteger");
MetadataInteger263.name = "duration";
MetadataInteger263.DEF = "duration";
MetadataInteger263.reference = "http://titania.create3000.de";
MetadataInteger263.value = new MFInt32(new int[48]);
MetadataSet262.value = new MFNode();

MetadataSet262.value[0] = MetadataInteger263;

MetadataInteger MetadataInteger264 = createNode("MetadataInteger");
MetadataInteger264.name = "framesPerSecond";
MetadataInteger264.DEF = "framesPerSecond";
MetadataInteger264.reference = "http://titania.create3000.de";
MetadataInteger264.value = new MFInt32(new int[10]);
MetadataSet262.value[1] = MetadataInteger264;

Group261.metadata = MetadataSet262;

TimeSensor TimeSensor265 = createNode("TimeSensor");
TimeSensor265.DEF = "_6";
TimeSensor265.cycleInterval = 4.8;
TimeSensor265.loop = True;
Group261.children = new MFNode();

Group261.children[0] = TimeSensor265;

OrientationInterpolator OrientationInterpolator266 = createNode("OrientationInterpolator");
OrientationInterpolator266.DEF = "RotationInterpolator";
OrientationInterpolator266.key = new MFFloat(new float[0,0.0208333,0.0416667,0.0625,0.0833333,0.104167,0.125,0.145833,0.166667,0.1875,0.208333,0.229167,0.25,0.270833,0.291667,0.3125,0.333333,0.354167,0.375,0.395833,0.416667,0.4375,0.458333,0.479167,0.5,0.520833,0.541667,0.5625,0.583333,0.604167,0.625,0.645833,0.666667,0.6875,0.708333,0.729167,0.75,0.770833,0.791667,0.8125,0.833333,0.854167,0.875,0.895833,0.916667,0.9375,0.958333,0.979167,1]);
OrientationInterpolator266.keyValue = new MFRotation(new float[0,0,1,0,0,-1,0,0.124026000000001,0,-1,0,0.250436,0,-1,0,0.378893,0,-1,0,0.509054,0,-1,0,0.640579,0,-1,0,0.773126,0,-1,0,0.906355,0,-1,0,1.03993,0,-1,0,1.1735,0,-1,0,1.30672,0,-1,0,1.43927,0,-1,0,1.5708,0,-1,0,1.70107,0,-1,0,1.83032,0,-1,0,1.95889,0,-1,0,2.08712,0,-1,0,2.21535,0,-1,0,2.34392,0,-1,0,2.47317,0,-1,0,2.60345,0,-1,0,2.73509,0,-1,0,2.86843,0,-1,0,3.00382,0,1,0,3.14159,0,1,0,2.99996,0,1,0,2.85389,0,1,0,2.70441,0,1,0,2.55254,0,1,0,2.39932,0,1,0,2.24575,0,1,0,2.09286,0,1,0,1.94168,0,1,0,1.79322,0,1,0,1.64852,0,1,0,1.50859,0,1,0,1.37445,0,1,0,1.24679,0,1,0,1.12492,0,1,0,1.00783,0,1,0,0.894481,0,1,0,0.783864,0,1,0,0.674952,0,1,0,0.566721,0,1,0,0.458149,0,1,0,0.348214,0,1,0,0.235892,0,1,0,0.120161000000002,0,0,1,0]);
MetadataSet MetadataSet267 = createNode("MetadataSet");
MetadataSet267.name = "Interpolator";
MetadataSet267.DEF = "Interpolator";
MetadataSet267.reference = "http://titania.create3000.de";
MetadataInteger MetadataInteger268 = createNode("MetadataInteger");
MetadataInteger268.name = "key";
MetadataInteger268.DEF = "key";
MetadataInteger268.reference = "http://titania.create3000.de";
MetadataInteger268.value = new MFInt32(new int[0,12,24,36,48]);
MetadataSet267.value = new MFNode();

MetadataSet267.value[0] = MetadataInteger268;

MetadataDouble MetadataDouble269 = createNode("MetadataDouble");
MetadataDouble269.name = "keyValue";
MetadataDouble269.DEF = "keyValue";
MetadataDouble269.reference = "http://titania.create3000.de";
MetadataDouble269.value = new MFDouble(new double[0,0,1,0,0,-1,0,1.570796251297,0,1,0,3.14159274101257,0,1,0,1.37444686889648,0,0,1,0]);
MetadataSet267.value[1] = MetadataDouble269;

MetadataString MetadataString270 = createNode("MetadataString");
MetadataString270.name = "keyType";
MetadataString270.DEF = "keyType";
MetadataString270.reference = "http://titania.create3000.de";
MetadataString270.value = new MFString(new java.lang.String[", ","SPLINE, ","SPLINE, ","SPLINE, ","SPLINESPLINE"]);
MetadataSet267.value[2] = MetadataString270;

OrientationInterpolator266.metadata = MetadataSet267;

Group261.children[1] = OrientationInterpolator266;

Transform260.children = new MFNode();

Transform260.children[0] = Group261;

Shape Shape271 = createNode("Shape");
Appearance Appearance272 = createNode("Appearance");
TwoSidedMaterial TwoSidedMaterial273 = createNode("TwoSidedMaterial");
TwoSidedMaterial273.separateBackColor = True;
TwoSidedMaterial273.ambientIntensity = 0;
TwoSidedMaterial273.diffuseColor = new SFColor(new float[0,0,0]);
TwoSidedMaterial273.specularColor = new SFColor(new float[0.622449,0.622449,0.622449]);
TwoSidedMaterial273.emissiveColor = new SFColor(new float[0.460235,0,1]);
TwoSidedMaterial273.shininess = 0.0510204;
TwoSidedMaterial273.backAmbientIntensity = 0;
TwoSidedMaterial273.backDiffuseColor = new SFColor(new float[0,0,0]);
TwoSidedMaterial273.backSpecularColor = new SFColor(new float[0.721,0.721,0.721]);
TwoSidedMaterial273.backEmissiveColor = new SFColor(new float[1,0.0392157,0]);
TwoSidedMaterial273.backShininess = 0.0903955;
Appearance272.material = TwoSidedMaterial273;

Shape271.appearance = Appearance272;

Rectangle2D Rectangle2D274 = createNode("Rectangle2D");
Shape271.geometry = Rectangle2D274;

Transform260.child[1] = Shape271;

Transform259.children = new MFNode();

Transform259.children[0] = Transform260;

Transform258.children = new MFNode();

Transform258.children[0] = Transform259;

field257.children = new MFNode();

field257.children[0] = Transform258;

Script254.field[2] = field257;

field field275 = createNode("field");
field275.name = "itemGroup";
field275.accessType = "initializeOnly";
field275.type = "SFNode";
Group Group276 = createNode("Group");
Group276.DEF = "ItemGroup";
Transform Transform277 = createNode("Transform");
Transform Transform278 = createNode("Transform");
Transform278.USE = "Item";
Transform277.children = new MFNode();

Transform277.children[0] = Transform278;

Group276.children = new MFNode();

Group276.children[0] = Transform277;

Transform Transform279 = createNode("Transform");
Transform Transform280 = createNode("Transform");
Transform280.USE = "Item";
Transform279.children = new MFNode();

Transform279.children[0] = Transform280;

Group276.children[1] = Transform279;

Transform Transform281 = createNode("Transform");
Transform Transform282 = createNode("Transform");
Transform282.USE = "Item";
Transform281.children = new MFNode();

Transform281.children[0] = Transform282;

Group276.children[2] = Transform281;

Transform Transform283 = createNode("Transform");
Transform Transform284 = createNode("Transform");
Transform284.USE = "Item";
Transform283.children = new MFNode();

Transform283.children[0] = Transform284;

Group276.children[3] = Transform283;

Transform Transform285 = createNode("Transform");
Transform Transform286 = createNode("Transform");
Transform286.USE = "Item";
Transform285.children = new MFNode();

Transform285.children[0] = Transform286;

Group276.children[4] = Transform285;

Transform Transform287 = createNode("Transform");
Transform Transform288 = createNode("Transform");
Transform288.USE = "Item";
Transform287.children = new MFNode();

Transform287.children[0] = Transform288;

Group276.children[5] = Transform287;

Transform Transform289 = createNode("Transform");
Transform Transform290 = createNode("Transform");
Transform290.USE = "Item";
Transform289.children = new MFNode();

Transform289.children[0] = Transform290;

Group276.children[6] = Transform289;

Transform Transform291 = createNode("Transform");
Transform Transform292 = createNode("Transform");
Transform292.USE = "Item";
Transform291.children = new MFNode();

Transform291.children[0] = Transform292;

Group276.children[7] = Transform291;

Transform Transform293 = createNode("Transform");
Transform Transform294 = createNode("Transform");
Transform294.USE = "Item";
Transform293.children = new MFNode();

Transform293.children[0] = Transform294;

Group276.children[8] = Transform293;

Transform Transform295 = createNode("Transform");
Transform Transform296 = createNode("Transform");
Transform296.USE = "Item";
Transform295.children = new MFNode();

Transform295.children[0] = Transform296;

Group276.children[9] = Transform295;

Transform Transform297 = createNode("Transform");
Transform Transform298 = createNode("Transform");
Transform298.USE = "Item";
Transform297.children = new MFNode();

Transform297.children[0] = Transform298;

Group276.children[10] = Transform297;

Transform Transform299 = createNode("Transform");
Transform Transform300 = createNode("Transform");
Transform300.USE = "Item";
Transform299.children = new MFNode();

Transform299.children[0] = Transform300;

Group276.children[11] = Transform299;

Transform Transform301 = createNode("Transform");
Transform Transform302 = createNode("Transform");
Transform302.USE = "Item";
Transform301.children = new MFNode();

Transform301.children[0] = Transform302;

Group276.children[12] = Transform301;

Transform Transform303 = createNode("Transform");
Transform Transform304 = createNode("Transform");
Transform304.USE = "Item";
Transform303.children = new MFNode();

Transform303.children[0] = Transform304;

Group276.children[13] = Transform303;

Transform Transform305 = createNode("Transform");
Transform Transform306 = createNode("Transform");
Transform306.USE = "Item";
Transform305.children = new MFNode();

Transform305.children[0] = Transform306;

Group276.children[14] = Transform305;

Transform Transform307 = createNode("Transform");
Transform Transform308 = createNode("Transform");
Transform308.USE = "Item";
Transform307.children = new MFNode();

Transform307.children[0] = Transform308;

Group276.children[15] = Transform307;

Transform Transform309 = createNode("Transform");
Transform Transform310 = createNode("Transform");
Transform310.USE = "Item";
Transform309.children = new MFNode();

Transform309.children[0] = Transform310;

Group276.children[16] = Transform309;

Transform Transform311 = createNode("Transform");
Transform Transform312 = createNode("Transform");
Transform312.USE = "Item";
Transform311.children = new MFNode();

Transform311.children[0] = Transform312;

Group276.children[17] = Transform311;

Transform Transform313 = createNode("Transform");
Transform Transform314 = createNode("Transform");
Transform314.USE = "Item";
Transform313.children = new MFNode();

Transform313.children[0] = Transform314;

Group276.children[18] = Transform313;

Transform Transform315 = createNode("Transform");
Transform Transform316 = createNode("Transform");
Transform316.USE = "Item";
Transform315.children = new MFNode();

Transform315.children[0] = Transform316;

Group276.children[19] = Transform315;

Transform Transform317 = createNode("Transform");
Transform Transform318 = createNode("Transform");
Transform318.USE = "Item";
Transform317.children = new MFNode();

Transform317.children[0] = Transform318;

Group276.children[20] = Transform317;

Transform Transform319 = createNode("Transform");
Transform Transform320 = createNode("Transform");
Transform320.USE = "Item";
Transform319.children = new MFNode();

Transform319.children[0] = Transform320;

Group276.children[21] = Transform319;

Transform Transform321 = createNode("Transform");
Transform Transform322 = createNode("Transform");
Transform322.USE = "Item";
Transform321.children = new MFNode();

Transform321.children[0] = Transform322;

Group276.children[22] = Transform321;

Transform Transform323 = createNode("Transform");
Transform Transform324 = createNode("Transform");
Transform324.USE = "Item";
Transform323.children = new MFNode();

Transform323.children[0] = Transform324;

Group276.children[23] = Transform323;

Transform Transform325 = createNode("Transform");
Transform Transform326 = createNode("Transform");
Transform326.USE = "Item";
Transform325.children = new MFNode();

Transform325.children[0] = Transform326;

Group276.children[24] = Transform325;

Transform Transform327 = createNode("Transform");
Transform Transform328 = createNode("Transform");
Transform328.USE = "Item";
Transform327.children = new MFNode();

Transform327.children[0] = Transform328;

Group276.children[25] = Transform327;

Transform Transform329 = createNode("Transform");
Transform Transform330 = createNode("Transform");
Transform330.USE = "Item";
Transform329.children = new MFNode();

Transform329.children[0] = Transform330;

Group276.children[26] = Transform329;

Transform Transform331 = createNode("Transform");
Transform Transform332 = createNode("Transform");
Transform332.USE = "Item";
Transform331.children = new MFNode();

Transform331.children[0] = Transform332;

Group276.children[27] = Transform331;

Transform Transform333 = createNode("Transform");
Transform Transform334 = createNode("Transform");
Transform334.USE = "Item";
Transform333.children = new MFNode();

Transform333.children[0] = Transform334;

Group276.children[28] = Transform333;

Transform Transform335 = createNode("Transform");
Transform Transform336 = createNode("Transform");
Transform336.USE = "Item";
Transform335.children = new MFNode();

Transform335.children[0] = Transform336;

Group276.children[29] = Transform335;

field275.children = new MFNode();

field275.children[0] = Group276;

Script254.field[3] = field275;

field field337 = createNode("field");
field337.name = "grid";
field337.accessType = "initializeOnly";
field337.type = "SFNode";
ProtoInstance ProtoInstance338 = createNode("ProtoInstance");
ProtoInstance338.name = "Grid";
ProtoInstance338.USE = "_4";
field337.children = new MFNode();

field337.children[0] = ProtoInstance338;

Script254.field[4] = field337;


Script254.setSourceCode(`ecmascript:\n"+
"\n"+
"var fillRate = 0.25\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	set_startTime (0);\n"+
"}\n"+
"\n"+
"function set_position (value)\n"+
"{\n"+
"	print (value);\n"+
"}\n"+
"\n"+
"function set_startTime ()\n"+
"{\n"+
"	var itemCount = Math .floor (grid .dimension [0] / fieldSize [0] * grid .dimension [2] / fieldSize [2] * fillRate);\n"+
"	\n"+
"	itemGroup .children .length = 0;\n"+
"	\n"+
"	for (var i = 0; i < itemCount; ++i)\n"+
"	{\n"+
"		var transform = Browser .currentScene .createNode (\"Transform\");\n"+
"		\n"+
"		transform .children [0] = item;\n"+
"		itemGroup .children [i] = transform;\n"+
"	}\n"+
"}`)
children[11] = Script254;

Group Group339 = createNode("Group");
Group339.USE = "ItemGroup";
children[12] = Group339;

ROUTE ROUTE340 = createNode("ROUTE");
ROUTE340.fromNode = "_1";
ROUTE340.fromField = "fraction_changed";
ROUTE340.toNode = "_3";
ROUTE340.toField = "set_fraction";
children[13] = ROUTE340;

ROUTE ROUTE341 = createNode("ROUTE");
ROUTE341.fromNode = "_1";
ROUTE341.fromField = "fraction_changed";
ROUTE341.toNode = "_2";
ROUTE341.toField = "set_fraction";
children[14] = ROUTE341;

ROUTE ROUTE342 = createNode("ROUTE");
ROUTE342.fromNode = "MarbleKeySensor";
ROUTE342.fromField = "actionKeyPress";
ROUTE342.toNode = "MarbleScript";
ROUTE342.toField = "set_actionKeyPress";
children[15] = ROUTE342;

ROUTE ROUTE343 = createNode("ROUTE");
ROUTE343.fromNode = "_2";
ROUTE343.fromField = "value_changed";
ROUTE343.toNode = "SphereRotation";
ROUTE343.toField = "set_rotation";
children[16] = ROUTE343;

ROUTE ROUTE344 = createNode("ROUTE");
ROUTE344.fromNode = "_3";
ROUTE344.fromField = "value_changed";
ROUTE344.toNode = "SphereTranslation";
ROUTE344.toField = "set_translation";
children[17] = ROUTE344;

ROUTE ROUTE345 = createNode("ROUTE");
ROUTE345.fromNode = "MarbleScript";
ROUTE345.fromField = "position_changed";
ROUTE345.toNode = "ItemsScript";
ROUTE345.toField = "set_position";
children[18] = ROUTE345;

ROUTE ROUTE346 = createNode("ROUTE");
ROUTE346.fromNode = "_6";
ROUTE346.fromField = "fraction_changed";
ROUTE346.toNode = "RotationInterpolator";
ROUTE346.toField = "set_fraction";
children[19] = ROUTE346;

ROUTE ROUTE347 = createNode("ROUTE");
ROUTE347.fromNode = "RotationInterpolator";
ROUTE347.fromField = "value_changed";
ROUTE347.toNode = "_5";
ROUTE347.toField = "set_rotation";
children[20] = ROUTE347;

}
