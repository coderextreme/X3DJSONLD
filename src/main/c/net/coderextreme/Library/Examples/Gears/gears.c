#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Mon, 14 Sep 2015 21:00:05 GMT";
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
meta6.name = "icon";
meta6.content = "../../ui/icons/icon-bw.svg";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 14 Sep 2015 21:00:05 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "title";
meta8.content = "about:gears";
head1.meta[6] = meta8;

head = head1;

ExternProtoDeclare ExternProtoDeclare10 = createNode("ExternProtoDeclare");
ExternProtoDeclare10.name = "Rotor";
ExternProtoDeclare10.url = new MFString(new java.lang.String["Rotor.x3d"]);
field field11 = createNode("field");
field11.name = "enabled";
field11.accessType = "inputOutput";
field11.type = "SFBool";
ExternProtoDeclare10.field = new MFNode();

ExternProtoDeclare10.field[0] = field11;

field field12 = createNode("field");
field12.name = "cycleInterval";
field12.accessType = "inputOutput";
field12.type = "SFTime";
ExternProtoDeclare10.field[1] = field12;

field field13 = createNode("field");
field13.name = "axis";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
ExternProtoDeclare10.field[2] = field13;

field field14 = createNode("field");
field14.name = "angle";
field14.accessType = "inputOutput";
field14.type = "SFFloat";
ExternProtoDeclare10.field[3] = field14;

field field15 = createNode("field");
field15.name = "loop";
field15.accessType = "inputOutput";
field15.type = "SFBool";
ExternProtoDeclare10.field[4] = field15;

field field16 = createNode("field");
field16.name = "startTime";
field16.accessType = "inputOutput";
field16.type = "SFTime";
ExternProtoDeclare10.field[5] = field16;

field field17 = createNode("field");
field17.name = "pauseTime";
field17.accessType = "inputOutput";
field17.type = "SFTime";
ExternProtoDeclare10.field[6] = field17;

field field18 = createNode("field");
field18.name = "resumeTime";
field18.accessType = "inputOutput";
field18.type = "SFTime";
ExternProtoDeclare10.field[7] = field18;

field field19 = createNode("field");
field19.name = "stopTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
ExternProtoDeclare10.field[8] = field19;

field field20 = createNode("field");
field20.name = "isActive";
field20.accessType = "outputOnly";
field20.type = "SFBool";
ExternProtoDeclare10.field[9] = field20;

field field21 = createNode("field");
field21.name = "cycleTime";
field21.accessType = "outputOnly";
field21.type = "SFTime";
ExternProtoDeclare10.field[10] = field21;

field field22 = createNode("field");
field22.name = "rotation_changed";
field22.accessType = "outputOnly";
field22.type = "SFRotation";
ExternProtoDeclare10.field[11] = field22;

children = new MFNode();

children[0] = ExternProtoDeclare10;

ProtoDeclare ProtoDeclare23 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Gear" ><ProtoInterface><field name="teeth" accessType="inputOutput" type="SFFloat" value="10"></field>
<field name="toothDepth" accessType="inputOutput" type="SFFloat" value="2"></field>
<field name="innerRadius" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="outerRadius" accessType="inputOutput" type="SFFloat" value="4"></field>
<field name="width" accessType="inputOutput" type="SFFloat" value="1"></field>
<field name="creaseAngle" accessType="initializeOnly" type="SFFloat"></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="Gear"><IS><connect nodeField="creaseAngle" protoField="creaseAngle"></connect>
</IS>
<Coordinate></Coordinate>
</IndexedFaceSet>
<Script directOutput="true"><field name="teeth" accessType="inputOutput" type="SFFloat"></field>
<field name="toothDepth" accessType="inputOutput" type="SFFloat"></field>
<field name="innerRadius" accessType="inputOutput" type="SFFloat"></field>
<field name="outerRadius" accessType="inputOutput" type="SFFloat"></field>
<field name="width" accessType="inputOutput" type="SFFloat"></field>
<field name="gear" accessType="initializeOnly" type="SFNode"><IndexedFaceSet USE="Gear"></IndexedFaceSet>
</field>
<IS><connect nodeField="teeth" protoField="teeth"></connect>
<connect nodeField="toothDepth" protoField="toothDepth"></connect>
<connect nodeField="innerRadius" protoField="innerRadius"></connect>
<connect nodeField="outerRadius" protoField="outerRadius"></connect>
<connect nodeField="width" protoField="width"></connect>
</IS>
<![CDATA[vrmlscript:

function initialize ()
{
	eventsProcessed ();
}

function eventsProcessed ()
{
	print ('### Generating gear ...');

	var indices = new MFInt32 ();
	var points  = new MFVec3f ();

	var cos = Math .cos;
	var sin = Math .sin;

	// Radien and tooth angle

	var radius0 = innerRadius;
	var radius1 = outerRadius - toothDepth / 2;
	var radius2 = outerRadius + toothDepth / 2;
	var da = 2 * Math .PI / teeth / 4;

	// Front vectors

	var vectorf0 = new SFVec3f (radius0, 0, width * 0.5);
	var vectorf1 = new SFVec3f (radius1, 0, width * 0.5);
	var vectorf2 = new SFVec3f (radius2, 0, width * 0.5);

	// Back vectors

	var vectorb0 = new SFVec3f (radius0, 0, -width * 0.5);
	var vectorb1 = new SFVec3f (radius1, 0, -width * 0.5);
	var vectorb2 = new SFVec3f (radius2, 0, -width * 0.5);

	// Generate front face indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 3;

		indices [indices .length] = index;
		indices [indices .length] = index + 1;
		indices [indices .length] = index + 2;
		indices [indices .length] = index + 4;
		indices [indices .length] = index + 3;
		indices [indices .length] = -1;
	}

	// Generate front face points

	for (var i = 0; i < teeth + 1; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf0);
		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);
	}

	points .length = points .length - 1;

	points [points .length] = new SFVec3f ();
	points [points .length] = new SFVec3f ();
	points [points .length] = new SFVec3f ();


	// Generate front sides of teeth indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 4;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = -1;
	}

	// Generate front sides of teeth points

	for (var i = 0; i < teeth; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);
	}


	// Generate back face indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 3;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = points .length + index + 4;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = -1;
	}

	// Generate back face points

	for (var i = 0; i < teeth + 1; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb0);
		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);
	}

	points .length = points .length - 1;


	// Generate back sides of teeth indices

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 4;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = -1;
	}

	// Generate front sides of teeth points

	for (var i = 0; i < teeth; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);
		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorb2);
		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);
	}


	// Generate outward faces of teeth indices

	for (var i = 0; i < teeth * 4; ++ i)
	{
		var index = i * 2;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = -1;
	}

	indices [indices .length - 3] = points .length + 1;
	indices [indices .length - 2] = points .length;

	// Generate outward faces of teeth points

	for (var i = 0; i < teeth; ++ i)
	{
	   var angle = i * 2 * Math .PI / teeth;

		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb1);

		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorb2);

		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);
		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);

		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);
		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);
	}


	// Generate inside radius cylinder points

	for (var i = 0; i < teeth; ++ i)
	{
		var index = i * 2;

		indices [indices .length] = points .length + index;
		indices [indices .length] = points .length + index + 1;
		indices [indices .length] = points .length + index + 3;
		indices [indices .length] = points .length + index + 2;
		indices [indices .length] = -1;
	}

	indices [indices .length - 3] = points .length + 1;
	indices [indices .length - 2] = points .length;

	// Generate inside radius cylinder indices

	for (var i = 0; i < teeth + 1; ++ i)
	{
		var angle = i * 2 * Math .PI / teeth;
		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb0);
		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf0);
	}

	print ('### Generating gear done.');

	gear .coord .point   = points;
	gear .set_coordIndex = indices;
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare23.name = "Gear";
ProtoInterface ProtoInterface24 = createNode("ProtoInterface");
field field25 = createNode("field");
field25.name = "teeth";
field25.accessType = "inputOutput";
field25.type = "SFFloat";
field25.value = "10";
ProtoInterface24.field = new MFNode();

ProtoInterface24.field[0] = field25;

field field26 = createNode("field");
field26.name = "toothDepth";
field26.accessType = "inputOutput";
field26.type = "SFFloat";
field26.value = "2";
ProtoInterface24.field[1] = field26;

field field27 = createNode("field");
field27.name = "innerRadius";
field27.accessType = "inputOutput";
field27.type = "SFFloat";
field27.value = "1";
ProtoInterface24.field[2] = field27;

field field28 = createNode("field");
field28.name = "outerRadius";
field28.accessType = "inputOutput";
field28.type = "SFFloat";
field28.value = "4";
ProtoInterface24.field[3] = field28;

field field29 = createNode("field");
field29.name = "width";
field29.accessType = "inputOutput";
field29.type = "SFFloat";
field29.value = "1";
ProtoInterface24.field[4] = field29;

field field30 = createNode("field");
field30.name = "creaseAngle";
field30.accessType = "initializeOnly";
field30.type = "SFFloat";
ProtoInterface24.field[5] = field30;

ProtoDeclare23.protoInterface = ProtoInterface24;

ProtoBody ProtoBody31 = createNode("ProtoBody");
IndexedFaceSet IndexedFaceSet32 = createNode("IndexedFaceSet");
IndexedFaceSet32.DEF = "Gear";
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "creaseAngle";
connect34.protoField = "creaseAngle";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

IndexedFaceSet32.iS = IS33;

Coordinate Coordinate35 = createNode("Coordinate");
IndexedFaceSet32.coord = Coordinate35;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = IndexedFaceSet32;

Script Script36 = createNode("Script");
Script36.directOutput = True;
field field37 = createNode("field");
field37.name = "teeth";
field37.accessType = "inputOutput";
field37.type = "SFFloat";
Script36.field = new MFNode();

Script36.field[0] = field37;

field field38 = createNode("field");
field38.name = "toothDepth";
field38.accessType = "inputOutput";
field38.type = "SFFloat";
Script36.field[1] = field38;

field field39 = createNode("field");
field39.name = "innerRadius";
field39.accessType = "inputOutput";
field39.type = "SFFloat";
Script36.field[2] = field39;

field field40 = createNode("field");
field40.name = "outerRadius";
field40.accessType = "inputOutput";
field40.type = "SFFloat";
Script36.field[3] = field40;

field field41 = createNode("field");
field41.name = "width";
field41.accessType = "inputOutput";
field41.type = "SFFloat";
Script36.field[4] = field41;

field field42 = createNode("field");
field42.name = "gear";
field42.accessType = "initializeOnly";
field42.type = "SFNode";
IndexedFaceSet IndexedFaceSet43 = createNode("IndexedFaceSet");
IndexedFaceSet43.USE = "Gear";
field42.children = new MFNode();

field42.children[0] = IndexedFaceSet43;

Script36.field[5] = field42;

IS IS44 = createNode("IS");
connect connect45 = createNode("connect");
connect45.nodeField = "teeth";
connect45.protoField = "teeth";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

connect connect46 = createNode("connect");
connect46.nodeField = "toothDepth";
connect46.protoField = "toothDepth";
IS44.connect[1] = connect46;

connect connect47 = createNode("connect");
connect47.nodeField = "innerRadius";
connect47.protoField = "innerRadius";
IS44.connect[2] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "outerRadius";
connect48.protoField = "outerRadius";
IS44.connect[3] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "width";
connect49.protoField = "width";
IS44.connect[4] = connect49;

Script36.iS = IS44;


Script36.setSourceCode(`vrmlscript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	eventsProcessed ();\n"+
"}\n"+
"\n"+
"function eventsProcessed ()\n"+
"{\n"+
"	print ('### Generating gear ...');\n"+
"\n"+
"	var indices = new MFInt32 ();\n"+
"	var points  = new MFVec3f ();\n"+
"\n"+
"	var cos = Math .cos;\n"+
"	var sin = Math .sin;\n"+
"\n"+
"	// Radien and tooth angle\n"+
"\n"+
"	var radius0 = innerRadius;\n"+
"	var radius1 = outerRadius - toothDepth / 2;\n"+
"	var radius2 = outerRadius + toothDepth / 2;\n"+
"	var da = 2 * Math .PI / teeth / 4;\n"+
"\n"+
"	// Front vectors\n"+
"\n"+
"	var vectorf0 = new SFVec3f (radius0, 0, width * 0.5);\n"+
"	var vectorf1 = new SFVec3f (radius1, 0, width * 0.5);\n"+
"	var vectorf2 = new SFVec3f (radius2, 0, width * 0.5);\n"+
"\n"+
"	// Back vectors\n"+
"\n"+
"	var vectorb0 = new SFVec3f (radius0, 0, -width * 0.5);\n"+
"	var vectorb1 = new SFVec3f (radius1, 0, -width * 0.5);\n"+
"	var vectorb2 = new SFVec3f (radius2, 0, -width * 0.5);\n"+
"\n"+
"	// Generate front face indices\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var index = i * 3;\n"+
"\n"+
"		indices [indices .length] = index;\n"+
"		indices [indices .length] = index + 1;\n"+
"		indices [indices .length] = index + 2;\n"+
"		indices [indices .length] = index + 4;\n"+
"		indices [indices .length] = index + 3;\n"+
"		indices [indices .length] = -1;\n"+
"	}\n"+
"\n"+
"	// Generate front face points\n"+
"\n"+
"	for (var i = 0; i < teeth + 1; ++ i)\n"+
"	{\n"+
"		var angle = i * 2 * Math .PI / teeth;\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf0);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);\n"+
"	}\n"+
"\n"+
"	points .length = points .length - 1;\n"+
"\n"+
"	points [points .length] = new SFVec3f ();\n"+
"	points [points .length] = new SFVec3f ();\n"+
"	points [points .length] = new SFVec3f ();\n"+
"\n"+
"\n"+
"	// Generate front sides of teeth indices\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var index = i * 4;\n"+
"\n"+
"		indices [indices .length] = points .length + index;\n"+
"		indices [indices .length] = points .length + index + 1;\n"+
"		indices [indices .length] = points .length + index + 2;\n"+
"		indices [indices .length] = points .length + index + 3;\n"+
"		indices [indices .length] = -1;\n"+
"	}\n"+
"\n"+
"	// Generate front sides of teeth points\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var angle = i * 2 * Math .PI / teeth;\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorf2);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);\n"+
"	}\n"+
"\n"+
"\n"+
"	// Generate back face indices\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var index = i * 3;\n"+
"\n"+
"		indices [indices .length] = points .length + index;\n"+
"		indices [indices .length] = points .length + index + 3;\n"+
"		indices [indices .length] = points .length + index + 4;\n"+
"		indices [indices .length] = points .length + index + 2;\n"+
"		indices [indices .length] = points .length + index + 1;\n"+
"		indices [indices .length] = -1;\n"+
"	}\n"+
"\n"+
"	// Generate back face points\n"+
"\n"+
"	for (var i = 0; i < teeth + 1; ++ i)\n"+
"	{\n"+
"		var angle = i * 2 * Math .PI / teeth;\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb0);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);\n"+
"	}\n"+
"\n"+
"	points .length = points .length - 1;\n"+
"\n"+
"\n"+
"	// Generate back sides of teeth indices\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var index = i * 4;\n"+
"\n"+
"		indices [indices .length] = points .length + index;\n"+
"		indices [indices .length] = points .length + index + 1;\n"+
"		indices [indices .length] = points .length + index + 2;\n"+
"		indices [indices .length] = points .length + index + 3;\n"+
"		indices [indices .length] = -1;\n"+
"	}\n"+
"\n"+
"	// Generate front sides of teeth points\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var angle = i * 2 * Math .PI / teeth;\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorb2);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);\n"+
"	}\n"+
"\n"+
"\n"+
"	// Generate outward faces of teeth indices\n"+
"\n"+
"	for (var i = 0; i < teeth * 4; ++ i)\n"+
"	{\n"+
"		var index = i * 2;\n"+
"\n"+
"		indices [indices .length] = points .length + index;\n"+
"		indices [indices .length] = points .length + index + 1;\n"+
"		indices [indices .length] = points .length + index + 3;\n"+
"		indices [indices .length] = points .length + index + 2;\n"+
"		indices [indices .length] = -1;\n"+
"	}\n"+
"\n"+
"	indices [indices .length - 3] = points .length + 1;\n"+
"	indices [indices .length - 2] = points .length;\n"+
"\n"+
"	// Generate outward faces of teeth points\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"	   var angle = i * 2 * Math .PI / teeth;\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf1);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb1);\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorf2);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorb2);\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);\n"+
"\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);\n"+
"	}\n"+
"\n"+
"\n"+
"	// Generate inside radius cylinder points\n"+
"\n"+
"	for (var i = 0; i < teeth; ++ i)\n"+
"	{\n"+
"		var index = i * 2;\n"+
"\n"+
"		indices [indices .length] = points .length + index;\n"+
"		indices [indices .length] = points .length + index + 1;\n"+
"		indices [indices .length] = points .length + index + 3;\n"+
"		indices [indices .length] = points .length + index + 2;\n"+
"		indices [indices .length] = -1;\n"+
"	}\n"+
"\n"+
"	indices [indices .length - 3] = points .length + 1;\n"+
"	indices [indices .length - 2] = points .length;\n"+
"\n"+
"	// Generate inside radius cylinder indices\n"+
"\n"+
"	for (var i = 0; i < teeth + 1; ++ i)\n"+
"	{\n"+
"		var angle = i * 2 * Math .PI / teeth;\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb0);\n"+
"		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf0);\n"+
"	}\n"+
"\n"+
"	print ('### Generating gear done.');\n"+
"\n"+
"	gear .coord .point   = points;\n"+
"	gear .set_coordIndex = indices;\n"+
"}`)
ProtoBody31.children[1] = Script36;

ProtoDeclare23.protoBody = ProtoBody31;

children[1] = ProtoDeclare23;

Viewpoint Viewpoint50 = createNode("Viewpoint");
Viewpoint50.description = "Home";
Viewpoint50.position = new SFVec3f(new float[0,0,20]);
children[2] = Viewpoint50;

ProtoInstance ProtoInstance51 = createNode("ProtoInstance");
ProtoInstance51.name = "Rotor";
ProtoInstance51.DEF = "RedRotor";
fieldValue fieldValue52 = createNode("fieldValue");
fieldValue52.name = "cycleInterval";
fieldValue52.value = "10";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

fieldValue fieldValue53 = createNode("fieldValue");
fieldValue53.name = "loop";
fieldValue53.value = "true";
ProtoInstance51.fieldValue[1] = fieldValue53;

children[3] = ProtoInstance51;

ProtoInstance ProtoInstance54 = createNode("ProtoInstance");
ProtoInstance54.name = "Rotor";
ProtoInstance54.DEF = "GreenRotor";
fieldValue fieldValue55 = createNode("fieldValue");
fieldValue55.name = "cycleInterval";
fieldValue55.value = "5";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "loop";
fieldValue56.value = "true";
ProtoInstance54.fieldValue[1] = fieldValue56;

children[4] = ProtoInstance54;

ProtoInstance ProtoInstance57 = createNode("ProtoInstance");
ProtoInstance57.name = "Rotor";
ProtoInstance57.DEF = "BlueRotor";
fieldValue fieldValue58 = createNode("fieldValue");
fieldValue58.name = "cycleInterval";
fieldValue58.value = "5";
ProtoInstance57.fieldValue = new MFNode();

ProtoInstance57.fieldValue[0] = fieldValue58;

fieldValue fieldValue59 = createNode("fieldValue");
fieldValue59.name = "loop";
fieldValue59.value = "true";
ProtoInstance57.fieldValue[1] = fieldValue59;

children[5] = ProtoInstance57;

Transform Transform60 = createNode("Transform");
Transform60.DEF = "RedGear_1";
Transform60.translation = new SFVec3f(new float[-2.59808,-2.39242,0.725499]);
Transform60.rotation = new SFRotation(new float[0.543846,0.826436,0.145723,0.627057]);
Transform Transform61 = createNode("Transform");
Transform61.DEF = "Gear_1";
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.diffuseColor = new SFColor(new float[0.8,0.1,0]);
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

ProtoInstance ProtoInstance65 = createNode("ProtoInstance");
ProtoInstance65.name = "Gear";
fieldValue fieldValue66 = createNode("fieldValue");
fieldValue66.name = "teeth";
fieldValue66.value = "20";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "toothDepth";
fieldValue67.value = "0.7";
ProtoInstance65.fieldValue[1] = fieldValue67;

fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "creaseAngle";
fieldValue68.value = "0.6";
ProtoInstance65.fieldValue[2] = fieldValue68;

Shape62.geometry = ProtoInstance65;

Transform61.child = new undefined();

Transform61.child[0] = Shape62;

Transform60.children = new MFNode();

Transform60.children[0] = Transform61;

children[6] = Transform60;

Transform Transform69 = createNode("Transform");
Transform69.DEF = "GreenGear_1";
Transform69.translation = new SFVec3f(new float[2.68468,-1.34925,-2.14056]);
Transform69.rotation = new SFRotation(new float[0.111593,0.985198,0.130124,3.70575]);
Transform Transform70 = createNode("Transform");
Transform70.DEF = "Gear_2";
Shape Shape71 = createNode("Shape");
Appearance Appearance72 = createNode("Appearance");
Material Material73 = createNode("Material");
Material73.diffuseColor = new SFColor(new float[0,0.8,0.2]);
Appearance72.material = Material73;

Shape71.appearance = Appearance72;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.name = "Gear";
fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "toothDepth";
fieldValue75.value = "0.7";
ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "innerRadius";
fieldValue76.value = "0.5";
ProtoInstance74.fieldValue[1] = fieldValue76;

fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "outerRadius";
fieldValue77.value = "2";
ProtoInstance74.fieldValue[2] = fieldValue77;

fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "width";
fieldValue78.value = "2";
ProtoInstance74.fieldValue[3] = fieldValue78;

fieldValue fieldValue79 = createNode("fieldValue");
fieldValue79.name = "creaseAngle";
fieldValue79.value = "0.7";
ProtoInstance74.fieldValue[4] = fieldValue79;

Shape71.geometry = ProtoInstance74;

Transform70.child = new undefined();

Transform70.child[0] = Shape71;

Transform69.children = new MFNode();

Transform69.children[0] = Transform70;

children[7] = Transform69;

Transform Transform80 = createNode("Transform");
Transform80.DEF = "BlueGear_1";
Transform80.translation = new SFVec3f(new float[-2.68468,3.41658,2.89301]);
Transform80.rotation = new SFRotation(new float[-0.0562884,0.982778,0.176007,3.65356]);
Transform Transform81 = createNode("Transform");
Transform81.DEF = "Gear_3";
Shape Shape82 = createNode("Shape");
Appearance Appearance83 = createNode("Appearance");
Material Material84 = createNode("Material");
Material84.diffuseColor = new SFColor(new float[0.2,0.2,1]);
Appearance83.material = Material84;

Shape82.appearance = Appearance83;

ProtoInstance ProtoInstance85 = createNode("ProtoInstance");
ProtoInstance85.name = "Gear";
fieldValue fieldValue86 = createNode("fieldValue");
fieldValue86.name = "toothDepth";
fieldValue86.value = "0.7";
ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

fieldValue fieldValue87 = createNode("fieldValue");
fieldValue87.name = "innerRadius";
fieldValue87.value = "1.3";
ProtoInstance85.fieldValue[1] = fieldValue87;

fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "outerRadius";
fieldValue88.value = "2";
ProtoInstance85.fieldValue[2] = fieldValue88;

fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "width";
fieldValue89.value = "0.5";
ProtoInstance85.fieldValue[3] = fieldValue89;

Shape82.geometry = ProtoInstance85;

Transform81.child = new undefined();

Transform81.child[0] = Shape82;

Transform80.children = new MFNode();

Transform80.children[0] = Transform81;

children[8] = Transform80;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "RedRotor";
ROUTE90.fromField = "rotation_changed";
ROUTE90.toNode = "Gear_1";
ROUTE90.toField = "set_rotation";
children[9] = ROUTE90;

ROUTE ROUTE91 = createNode("ROUTE");
ROUTE91.fromNode = "GreenRotor";
ROUTE91.fromField = "rotation_changed";
ROUTE91.toNode = "Gear_2";
ROUTE91.toField = "set_rotation";
children[10] = ROUTE91;

ROUTE ROUTE92 = createNode("ROUTE");
ROUTE92.fromNode = "BlueRotor";
ROUTE92.fromField = "rotation_changed";
ROUTE92.toNode = "Gear_3";
ROUTE92.toField = "set_rotation";
children[11] = ROUTE92;

}
