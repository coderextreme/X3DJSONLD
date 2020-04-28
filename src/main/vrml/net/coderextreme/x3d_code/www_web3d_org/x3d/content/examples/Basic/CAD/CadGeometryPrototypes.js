let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.1";
//===========================================
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CadGeometryPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="IndexedQuadSet" appinfo="The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored." documentation="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet" ><ProtoInterface><field name="set_index" accessType="inputOnly" appinfo="range [0..&#8734;) or -1" type="MFInt32"><!--No specific initialization value--></field>
<field name="attrib" accessType="inputOutput" appinfo="[X3DVertexAttributeNode]" type="MFNode"><!--Specification initialization: NULL node--></field>
<field name="color" accessType="inputOutput" appinfo="[X3DColorNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="coord" accessType="inputOutput" appinfo="[X3DCoordinateNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="fogCoord" accessType="inputOutput" appinfo="[FogCoordinate]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="normal" accessType="inputOutput" appinfo="[X3DNormalNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="texCoord" accessType="inputOutput" appinfo="[X3DTextureCoordinateNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="ccw" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="colorPerVertex" accessType="initializeOnly" appinfo="colorPerVertex ignored in IndexedQuadSet, and always treated as true" type="SFBool" value="true"></field>
<field name="normalPerVertex" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="index" accessType="initializeOnly" appinfo="range [0..&#8734;) or -1" type="MFInt32"><!--No specific initialization value--></field>
<field name="metadata" accessType="inputOutput" appinfo="[X3DMetadataObject]" type="SFNode"><!--Specification initialization: NULL node--></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="RenderedIQS"><IS><connect nodeField="attrib" protoField="attrib"></connect>
<connect nodeField="color" protoField="color"></connect>
<connect nodeField="colorPerVertex" protoField="colorPerVertex"></connect>
<connect nodeField="coord" protoField="coord"></connect>
<connect nodeField="fogCoord" protoField="fogCoord"></connect>
<connect nodeField="normal" protoField="normal"></connect>
<connect nodeField="texCoord" protoField="texCoord"></connect>
<connect nodeField="ccw" protoField="ccw"></connect>
<connect nodeField="normalPerVertex" protoField="normalPerVertex"></connect>
<connect nodeField="solid" protoField="solid"></connect>
</IS>
</IndexedFaceSet>
<!--Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered--><Group DEF="UnrenderedIQS"><Script DEF="IndexedQuadSetToIndexedFaceSet" directOutput="true"><field name="index" accessType="initializeOnly" type="MFInt32"></field>
<field name="set_index" accessType="inputOnly" type="MFInt32"></field>
<field name="renderedIQS" accessType="initializeOnly" type="SFNode"><IndexedFaceSet USE="RenderedIQS"></IndexedFaceSet>
</field>
<field name="localTraceEnabled" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="coordIndexNew" accessType="initializeOnly" type="MFInt32"><!--constructed during initialization--></field>
<IS><connect nodeField="index" protoField="index"></connect>
<connect nodeField="set_index" protoField="set_index"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
	//colorPerVertex ignored in IndexedQuadSet, and always treated as "true"
	RenderedIQS.colorPerVertex = true;

	// index is an array of quad indices. The ordering of
	// the vertices is ccw (counter-clockwise).

	// ensure legal index values
	for (ii=0; ii <= index.length-1; ii++)
	{
	  if (index[ii] < -1)
	  {
		alwaysPrint ('error, index[' + ii + ']=' + index[ii] + ' is illegal value');
		return;
	  }
	}
	tracePrint ('index.length=' + index.length);
	tracePrint ('index=' + index);

	if (index.length < 4)
	{
		alwaysPrint ('warning, index.length=' + index.length + ' insufficient to construct a quad, IQS ignored');
		return;
	}

	coordIndexNew = new MFInt32 ();

	// ii walks through index array,
	// goal is to initialize coordIndexNew list to match quads
	for (ii=0; ii <= index.length-1; ii+=4)
	{
		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||
		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||
		    (index[ii+2] == index[ii+3]))
		{
			alwaysPrint ('index=' + index);
			alwaysPrint ('error, pair of equal indices in quad');
			return;
		}

		if (index[ii] >= 0)
		{
			// add another quad from latest 4 points of fan set to IQS
			// order is ccw, i.e. in correct halfplane direction
			// note: there is an implicit "malloc" here for the'length' element of the array
			coordIndexNew [coordIndexNew.length] = index[ii];
			coordIndexNew [coordIndexNew.length] = index[ii+1];
			coordIndexNew [coordIndexNew.length] = index[ii+2];
			coordIndexNew [coordIndexNew.length] = index[ii+3];
			coordIndexNew [coordIndexNew.length] = -1;
		}

		if (index.length % 4 != 0) {
			alwaysPrint ('error, index field does not contain a multiple of four coordinate values.');
			alwaysPrint ('The remaining vertices shall be ignored');
			return;
		}

	  // incremental trace of array being built
	  tracePrint ('coordIndexNew=' + coordIndexNew);
	}
	renderedIQS.set_coordIndex = coordIndexNew;
	tracePrint ('renderedIQS.coordIndex=' + renderedIQS.coordIndex);
	// match colorIndex if any Color node exists
//	if (nodesHolder.color)
//	{
//	  if (nodesHolder.color.color.length > 0)
//	  {
		//  Could implement color count check here
//	  }
//	}

	// no need to set colorIndex since indexedFaceSet semantics handles this
}
function set_index (value, timestamp)
{
	index = value;
	initialize ();
}
function tracePrint(outputString)
{
    if (localTraceEnabled)
	  Browser.print ('[IndexedQuadSet]' + outputString);
}
function alwaysPrint(outputString)
{
	Browser.print ('[IndexedQuadSet]' + outputString);
}]]></Script>
<Group><MetadataString containerField="metadata" name="metadataHolder"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</MetadataString>
</Group>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "IndexedQuadSet";
ProtoDeclare3.appinfo = "The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.";
ProtoDeclare3.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "set_index";
field5.accessType = "inputOnly";
field5.appinfo = "range [0..∞) or -1";
field5.type = "MFInt32";
//No specific initialization value
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "attrib";
field6.accessType = "inputOutput";
field6.appinfo = "[X3DVertexAttributeNode]";
field6.type = "MFNode";
//Specification initialization: NULL node
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "color";
field7.accessType = "inputOutput";
field7.appinfo = "[X3DColorNode]";
field7.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "coord";
field8.accessType = "inputOutput";
field8.appinfo = "[X3DCoordinateNode]";
field8.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "fogCoord";
field9.accessType = "inputOutput";
field9.appinfo = "[FogCoordinate]";
field9.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "normal";
field10.accessType = "inputOutput";
field10.appinfo = "[X3DNormalNode]";
field10.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "texCoord";
field11.accessType = "inputOutput";
field11.appinfo = "[X3DTextureCoordinateNode]";
field11.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "ccw";
field12.accessType = "initializeOnly";
field12.type = "SFBool";
field12.value = "true";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "colorPerVertex";
field13.accessType = "initializeOnly";
field13.appinfo = "colorPerVertex ignored in IndexedQuadSet, and always treated as true";
field13.type = "SFBool";
field13.value = "true";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "normalPerVertex";
field14.accessType = "initializeOnly";
field14.type = "SFBool";
field14.value = "true";
ProtoInterface4.field[9] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "solid";
field15.accessType = "initializeOnly";
field15.type = "SFBool";
field15.value = "true";
ProtoInterface4.field[10] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "index";
field16.accessType = "initializeOnly";
field16.appinfo = "range [0..∞) or -1";
field16.type = "MFInt32";
//No specific initialization value
ProtoInterface4.field[11] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "metadata";
field17.accessType = "inputOutput";
field17.appinfo = "[X3DMetadataObject]";
field17.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface4.field[12] = field17;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody18 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet19 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet19.DEF = "RenderedIQS";
let IS20 = browser.currentScene.createNode("IS");
let connect21 = browser.currentScene.createNode("connect");
connect21.nodeField = "attrib";
connect21.protoField = "attrib";
IS20.connect = new MFNode();

IS20.connect[0] = connect21;

let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "color";
connect22.protoField = "color";
IS20.connect[1] = connect22;

let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "colorPerVertex";
connect23.protoField = "colorPerVertex";
IS20.connect[2] = connect23;

let connect24 = browser.currentScene.createNode("connect");
connect24.nodeField = "coord";
connect24.protoField = "coord";
IS20.connect[3] = connect24;

let connect25 = browser.currentScene.createNode("connect");
connect25.nodeField = "fogCoord";
connect25.protoField = "fogCoord";
IS20.connect[4] = connect25;

let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "normal";
connect26.protoField = "normal";
IS20.connect[5] = connect26;

let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "texCoord";
connect27.protoField = "texCoord";
IS20.connect[6] = connect27;

let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "ccw";
connect28.protoField = "ccw";
IS20.connect[7] = connect28;

let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "normalPerVertex";
connect29.protoField = "normalPerVertex";
IS20.connect[8] = connect29;

let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "solid";
connect30.protoField = "solid";
IS20.connect[9] = connect30;

IndexedFaceSet19.iS = IS20;

ProtoBody18.children = new MFNode();

ProtoBody18.children[0] = IndexedFaceSet19;

//Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered
let Group31 = browser.currentScene.createNode("Group");
Group31.DEF = "UnrenderedIQS";
let Script32 = browser.currentScene.createNode("Script");
Script32.DEF = "IndexedQuadSetToIndexedFaceSet";
Script32.directOutput = True;
let field33 = browser.currentScene.createNode("field");
field33.name = "index";
field33.accessType = "initializeOnly";
field33.type = "MFInt32";
Script32.field = new MFNode();

Script32.field[0] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "set_index";
field34.accessType = "inputOnly";
field34.type = "MFInt32";
Script32.field[1] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "renderedIQS";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.USE = "RenderedIQS";
field35.children = new MFNode();

field35.children[0] = IndexedFaceSet36;

Script32.field[2] = field35;

let field37 = browser.currentScene.createNode("field");
field37.name = "localTraceEnabled";
field37.accessType = "initializeOnly";
field37.type = "SFBool";
field37.value = "true";
Script32.field[3] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "coordIndexNew";
field38.accessType = "initializeOnly";
field38.type = "MFInt32";
//constructed during initialization
Script32.field[4] = field38;

let IS39 = browser.currentScene.createNode("IS");
let connect40 = browser.currentScene.createNode("connect");
connect40.nodeField = "index";
connect40.protoField = "index";
IS39.connect = new MFNode();

IS39.connect[0] = connect40;

let connect41 = browser.currentScene.createNode("connect");
connect41.nodeField = "set_index";
connect41.protoField = "set_index";
IS39.connect[1] = connect41;

Script32.iS = IS39;


Script32.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	//colorPerVertex ignored in IndexedQuadSet, and always treated as \"true\"\n"+
"	RenderedIQS.colorPerVertex = true;\n"+
"\n"+
"	// index is an array of quad indices. The ordering of\n"+
"	// the vertices is ccw (counter-clockwise).\n"+
"\n"+
"	// ensure legal index values\n"+
"	for (ii=0; ii <= index.length-1; ii++)\n"+
"	{\n"+
"	  if (index[ii] < -1)\n"+
"	  {\n"+
"		alwaysPrint ('error, index[' + ii + ']=' + index[ii] + ' is illegal value');\n"+
"		return;\n"+
"	  }\n"+
"	}\n"+
"	tracePrint ('index.length=' + index.length);\n"+
"	tracePrint ('index=' + index);\n"+
"\n"+
"	if (index.length < 4)\n"+
"	{\n"+
"		alwaysPrint ('warning, index.length=' + index.length + ' insufficient to construct a quad, IQS ignored');\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	coordIndexNew = new MFInt32 ();\n"+
"\n"+
"	// ii walks through index array,\n"+
"	// goal is to initialize coordIndexNew list to match quads\n"+
"	for (ii=0; ii <= index.length-1; ii+=4)\n"+
"	{\n"+
"		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||\n"+
"		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||\n"+
"		    (index[ii+2] == index[ii+3]))\n"+
"		{\n"+
"			alwaysPrint ('index=' + index);\n"+
"			alwaysPrint ('error, pair of equal indices in quad');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if (index[ii] >= 0)\n"+
"		{\n"+
"			// add another quad from latest 4 points of fan set to IQS\n"+
"			// order is ccw, i.e. in correct halfplane direction\n"+
"			// note: there is an implicit \"malloc\" here for the'length' element of the array\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+1];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+2];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+3];\n"+
"			coordIndexNew [coordIndexNew.length] = -1;\n"+
"		}\n"+
"\n"+
"		if (index.length % 4 != 0) {\n"+
"			alwaysPrint ('error, index field does not contain a multiple of four coordinate values.');\n"+
"			alwaysPrint ('The remaining vertices shall be ignored');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"	  // incremental trace of array being built\n"+
"	  tracePrint ('coordIndexNew=' + coordIndexNew);\n"+
"	}\n"+
"	renderedIQS.set_coordIndex = coordIndexNew;\n"+
"	tracePrint ('renderedIQS.coordIndex=' + renderedIQS.coordIndex);\n"+
"	// match colorIndex if any Color node exists\n"+
"//	if (nodesHolder.color)\n"+
"//	{\n"+
"//	  if (nodesHolder.color.color.length > 0)\n"+
"//	  {\n"+
"		//  Could implement color count check here\n"+
"//	  }\n"+
"//	}\n"+
"\n"+
"	// no need to set colorIndex since indexedFaceSet semantics handles this\n"+
"}\n"+
"function set_index (value, timestamp)\n"+
"{\n"+
"	index = value;\n"+
"	initialize ();\n"+
"}\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"    if (localTraceEnabled)\n"+
"	  Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}`)
Group31.children = new MFNode();

Group31.children[0] = Script32;

let Group42 = browser.currentScene.createNode("Group");
let MetadataString43 = browser.currentScene.createNode("MetadataString");
MetadataString43.name = "metadataHolder";
let IS44 = browser.currentScene.createNode("IS");
let connect45 = browser.currentScene.createNode("connect");
connect45.nodeField = "metadata";
connect45.protoField = "metadata";
IS44.connect = new MFNode();

IS44.connect[0] = connect45;

MetadataString43.iS = IS44;

Group42.metadata = MetadataString43;

Group31.children[1] = Group42;

ProtoBody18.children[1] = Group31;

ProtoDeclare3.protoBody = ProtoBody18;

browser.currentScene.children[1] = ProtoDeclare3;

//===========================================
let ProtoDeclare46 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="QuadSet" appinfo="The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored." documentation="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#QuadSet" ><ProtoInterface><field name="attrib" accessType="inputOutput" appinfo="[X3DVertexAttributeNode]" type="MFNode"><!--Specification initialization: NULL node--></field>
<field name="color" accessType="inputOutput" appinfo="[X3DColorNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="coord" accessType="inputOutput" appinfo="[X3DCoordinateNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="fogCoord" accessType="inputOutput" appinfo="[FogCoordinate]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="normal" accessType="inputOutput" appinfo="[X3DNormalNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="texCoord" accessType="inputOutput" appinfo="[X3DTextureCoordinateNode]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="ccw" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="colorPerVertex" accessType="initializeOnly" appinfo="colorPerVertex ignored in QuadSet, and always treated as true" type="SFBool" value="true"></field>
<field name="normalPerVertex" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="metadata" accessType="inputOutput" appinfo="[X3DMetadataObject]" type="SFNode"><!--Specification initialization: NULL node--></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="RenderedQS"><IS><connect nodeField="attrib" protoField="attrib"></connect>
<connect nodeField="color" protoField="color"></connect>
<connect nodeField="colorPerVertex" protoField="colorPerVertex"></connect>
<connect nodeField="coord" protoField="coord"></connect>
<connect nodeField="fogCoord" protoField="fogCoord"></connect>
<connect nodeField="normal" protoField="normal"></connect>
<connect nodeField="texCoord" protoField="texCoord"></connect>
<connect nodeField="ccw" protoField="ccw"></connect>
<connect nodeField="normalPerVertex" protoField="normalPerVertex"></connect>
<connect nodeField="solid" protoField="solid"></connect>
</IS>
</IndexedFaceSet>
<!--Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered--><Group DEF="UnrenderedQS"><Script DEF="QuadSetToIndexedFaceSet" directOutput="true"><field name="index" accessType="initializeOnly" type="MFInt32"><!--initialized in ecmascript--></field>
<field name="set_index" accessType="inputOnly" type="MFInt32"></field>
<field name="renderedQS" accessType="initializeOnly" type="SFNode"><IndexedFaceSet USE="RenderedQS"></IndexedFaceSet>
</field>
<field name="localTraceEnabled" accessType="initializeOnly" type="SFBool" value="true"></field>
<field name="coordIndexNew" accessType="initializeOnly" type="MFInt32"><!--constructed during initialization--></field>
<![CDATA[ecmascript:

function initialize()
{
	//colorPerVertex ignored in QuadSet, and always treated as "true"
	RenderedQS.colorPerVertex = true;

	// calculate index value from QuadSet coord values
	if (renderedQS.coord)
	{
		numberOfCoordinatePoints = renderedQS.coord.point.length;
	}
	else
	{
		tracePrint ('no Coordinate node found');
		return;
	}
	if (numberOfCoordinatePoints < 4)
	{
		alwaysPrint ('warning, numberOfCoordinatePoints=' + numberOfCoordinatePoints + ' insufficient to construct a quad, QuadSet ignored');
		return;
	}

	coordIndexNew = new MFInt32 ();

	// ii walks through index array,
	// goal is to initialize coordIndexNew list to match quads
	for (ii=0; ii <= numberOfCoordinatePoints-1; ii+=4)
	{
		// check if at least 4 vertices remaining to build a quad
		if ((numberOfCoordinatePoints - ii) < 4)
		{
			alwaysPrint ('error, index field does not contain a multiple' +
' of four coordinate values.');
			alwaysPrint ('The remaining vertices shall be ignored');
			return;
		}

		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||
		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||
		    (index[ii+2] == index[ii+3]))
		{
			alwaysPrint ('index=' + index);
			alwaysPrint ('error, pair of equal indices in quad');
			return;
		}

		if (index[ii] >= 0)
		{
			// add another quad from latest 4 points of fan set to QS
			// order is ccw, i.e. in correct halfplane direction
			// note: there is an implicit "malloc" here for the'length' element of the array
			coordIndexNew [coordIndexNew.length] = index[ii];
			coordIndexNew [coordIndexNew.length] = index[ii+1];
			coordIndexNew [coordIndexNew.length] = index[ii+2];
			coordIndexNew [coordIndexNew.length] = index[ii+3];
			coordIndexNew [coordIndexNew.length] = -1;
		}

	  // incremental trace of array being built
	  tracePrint ('coordIndexNew=' + coordIndexNew);
	}
	renderedQS.set_coordIndex = coordIndexNew;
	tracePrint ('renderedQS.coordIndex=' + renderedQS.coordIndex);
	// match colorIndex if any Color node exists
//	if (nodesHolder.color)
//	{
//	  if (nodesHolder.color.color.length > 0)
//	  {
		//  Could implement color count check here
//	  }
//	}

	// no need to set colorIndex since indexedFaceSet semantics handles this
}
function set_index (value, timestamp)
{
	index = value;
	initialize ();
}
function tracePrint(outputString)
{
    if (localTraceEnabled)
	  Browser.print ('[IndexedQuadSet]' + outputString);
}
function alwaysPrint(outputString)
{
	Browser.print ('[IndexedQuadSet]' + outputString);
}]]></Script>
<Group><MetadataString containerField="metadata" name="metadataHolder"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</MetadataString>
</Group>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare46.name = "QuadSet";
ProtoDeclare46.appinfo = "The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.";
ProtoDeclare46.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#QuadSet";
let ProtoInterface47 = browser.currentScene.createNode("ProtoInterface");
let field48 = browser.currentScene.createNode("field");
field48.name = "attrib";
field48.accessType = "inputOutput";
field48.appinfo = "[X3DVertexAttributeNode]";
field48.type = "MFNode";
//Specification initialization: NULL node
ProtoInterface47.field = new MFNode();

ProtoInterface47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "color";
field49.accessType = "inputOutput";
field49.appinfo = "[X3DColorNode]";
field49.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "coord";
field50.accessType = "inputOutput";
field50.appinfo = "[X3DCoordinateNode]";
field50.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface47.field[2] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "fogCoord";
field51.accessType = "inputOutput";
field51.appinfo = "[FogCoordinate]";
field51.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface47.field[3] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "normal";
field52.accessType = "inputOutput";
field52.appinfo = "[X3DNormalNode]";
field52.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface47.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "texCoord";
field53.accessType = "inputOutput";
field53.appinfo = "[X3DTextureCoordinateNode]";
field53.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface47.field[5] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "ccw";
field54.accessType = "initializeOnly";
field54.type = "SFBool";
field54.value = "true";
ProtoInterface47.field[6] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "colorPerVertex";
field55.accessType = "initializeOnly";
field55.appinfo = "colorPerVertex ignored in QuadSet, and always treated as true";
field55.type = "SFBool";
field55.value = "true";
ProtoInterface47.field[7] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "normalPerVertex";
field56.accessType = "initializeOnly";
field56.type = "SFBool";
field56.value = "true";
ProtoInterface47.field[8] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "solid";
field57.accessType = "initializeOnly";
field57.type = "SFBool";
field57.value = "true";
ProtoInterface47.field[9] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "metadata";
field58.accessType = "inputOutput";
field58.appinfo = "[X3DMetadataObject]";
field58.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface47.field[10] = field58;

ProtoDeclare46.protoInterface = ProtoInterface47;

let ProtoBody59 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet60 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet60.DEF = "RenderedQS";
let IS61 = browser.currentScene.createNode("IS");
let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "attrib";
connect62.protoField = "attrib";
IS61.connect = new MFNode();

IS61.connect[0] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "color";
connect63.protoField = "color";
IS61.connect[1] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "colorPerVertex";
connect64.protoField = "colorPerVertex";
IS61.connect[2] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "coord";
connect65.protoField = "coord";
IS61.connect[3] = connect65;

let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "fogCoord";
connect66.protoField = "fogCoord";
IS61.connect[4] = connect66;

let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "normal";
connect67.protoField = "normal";
IS61.connect[5] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "texCoord";
connect68.protoField = "texCoord";
IS61.connect[6] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "ccw";
connect69.protoField = "ccw";
IS61.connect[7] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "normalPerVertex";
connect70.protoField = "normalPerVertex";
IS61.connect[8] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "solid";
connect71.protoField = "solid";
IS61.connect[9] = connect71;

IndexedFaceSet60.iS = IS61;

ProtoBody59.children = new MFNode();

ProtoBody59.children[0] = IndexedFaceSet60;

//Initial node in the PROTO body is actual node type, and the only node rendered. Remaining ProtoBody nodes not rendered
let Group72 = browser.currentScene.createNode("Group");
Group72.DEF = "UnrenderedQS";
let Script73 = browser.currentScene.createNode("Script");
Script73.DEF = "QuadSetToIndexedFaceSet";
Script73.directOutput = True;
let field74 = browser.currentScene.createNode("field");
field74.name = "index";
field74.accessType = "initializeOnly";
field74.type = "MFInt32";
//initialized in ecmascript
Script73.field = new MFNode();

Script73.field[0] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "set_index";
field75.accessType = "inputOnly";
field75.type = "MFInt32";
Script73.field[1] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "renderedQS";
field76.accessType = "initializeOnly";
field76.type = "SFNode";
let IndexedFaceSet77 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet77.USE = "RenderedQS";
field76.children = new MFNode();

field76.children[0] = IndexedFaceSet77;

Script73.field[2] = field76;

let field78 = browser.currentScene.createNode("field");
field78.name = "localTraceEnabled";
field78.accessType = "initializeOnly";
field78.type = "SFBool";
field78.value = "true";
Script73.field[3] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "coordIndexNew";
field79.accessType = "initializeOnly";
field79.type = "MFInt32";
//constructed during initialization
Script73.field[4] = field79;


Script73.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"	//colorPerVertex ignored in QuadSet, and always treated as \"true\"\n"+
"	RenderedQS.colorPerVertex = true;\n"+
"\n"+
"	// calculate index value from QuadSet coord values\n"+
"	if (renderedQS.coord)\n"+
"	{\n"+
"		numberOfCoordinatePoints = renderedQS.coord.point.length;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		tracePrint ('no Coordinate node found');\n"+
"		return;\n"+
"	}\n"+
"	if (numberOfCoordinatePoints < 4)\n"+
"	{\n"+
"		alwaysPrint ('warning, numberOfCoordinatePoints=' + numberOfCoordinatePoints + ' insufficient to construct a quad, QuadSet ignored');\n"+
"		return;\n"+
"	}\n"+
"\n"+
"	coordIndexNew = new MFInt32 ();\n"+
"\n"+
"	// ii walks through index array,\n"+
"	// goal is to initialize coordIndexNew list to match quads\n"+
"	for (ii=0; ii <= numberOfCoordinatePoints-1; ii+=4)\n"+
"	{\n"+
"		// check if at least 4 vertices remaining to build a quad\n"+
"		if ((numberOfCoordinatePoints - ii) < 4)\n"+
"		{\n"+
"			alwaysPrint ('error, index field does not contain a multiple' +\n"+
"' of four coordinate values.');\n"+
"			alwaysPrint ('The remaining vertices shall be ignored');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if ((index[ii]   == index[ii+1]) || (index[ii]   == index[ii+2]) || (index[ii] == index[ii+3]) ||\n"+
"		    (index[ii+1] == index[ii+2]) || (index[ii+1] == index[ii+3]) ||\n"+
"		    (index[ii+2] == index[ii+3]))\n"+
"		{\n"+
"			alwaysPrint ('index=' + index);\n"+
"			alwaysPrint ('error, pair of equal indices in quad');\n"+
"			return;\n"+
"		}\n"+
"\n"+
"		if (index[ii] >= 0)\n"+
"		{\n"+
"			// add another quad from latest 4 points of fan set to QS\n"+
"			// order is ccw, i.e. in correct halfplane direction\n"+
"			// note: there is an implicit \"malloc\" here for the'length' element of the array\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+1];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+2];\n"+
"			coordIndexNew [coordIndexNew.length] = index[ii+3];\n"+
"			coordIndexNew [coordIndexNew.length] = -1;\n"+
"		}\n"+
"\n"+
"	  // incremental trace of array being built\n"+
"	  tracePrint ('coordIndexNew=' + coordIndexNew);\n"+
"	}\n"+
"	renderedQS.set_coordIndex = coordIndexNew;\n"+
"	tracePrint ('renderedQS.coordIndex=' + renderedQS.coordIndex);\n"+
"	// match colorIndex if any Color node exists\n"+
"//	if (nodesHolder.color)\n"+
"//	{\n"+
"//	  if (nodesHolder.color.color.length > 0)\n"+
"//	  {\n"+
"		//  Could implement color count check here\n"+
"//	  }\n"+
"//	}\n"+
"\n"+
"	// no need to set colorIndex since indexedFaceSet semantics handles this\n"+
"}\n"+
"function set_index (value, timestamp)\n"+
"{\n"+
"	index = value;\n"+
"	initialize ();\n"+
"}\n"+
"function tracePrint(outputString)\n"+
"{\n"+
"    if (localTraceEnabled)\n"+
"	  Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}\n"+
"function alwaysPrint(outputString)\n"+
"{\n"+
"	Browser.print ('[IndexedQuadSet]' + outputString);\n"+
"}`)
Group72.children = new MFNode();

Group72.children[0] = Script73;

let Group80 = browser.currentScene.createNode("Group");
let MetadataString81 = browser.currentScene.createNode("MetadataString");
MetadataString81.name = "metadataHolder";
let IS82 = browser.currentScene.createNode("IS");
let connect83 = browser.currentScene.createNode("connect");
connect83.nodeField = "metadata";
connect83.protoField = "metadata";
IS82.connect = new MFNode();

IS82.connect[0] = connect83;

MetadataString81.iS = IS82;

Group80.metadata = MetadataString81;

Group72.children[1] = Group80;

ProtoBody59.children[1] = Group72;

ProtoDeclare46.protoBody = ProtoBody59;

browser.currentScene.children[2] = ProtoDeclare46;

//========================================
let ProtoDeclare84 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CADAssembly" appinfo="The CADAssembly node holds a set of assemblies or parts grouped together." ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="children" accessType="inputOutput" appinfo="The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part." type="MFNode"><!--Specification initialization: NULL node--></field>
<field name="name" accessType="inputOutput" appinfo="The name field documents the name of this CADAssembly." type="SFString"></field>
<field name="bboxCenter" accessType="initializeOnly" appinfo="Bounding box center: position offset from origin of local coordinate system." type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" appinfo="Bounding box size: automatically calculated can be specified as an optimization or constraint." type="SFVec3f" value="-1 -1 -1"></field>
<field name="metadata" accessType="inputOutput" appinfo="[X3DMetadataObject]" type="SFNode"><!--Specification initialization: NULL node--></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
</IS>
</Group>
<Group><MetadataString containerField="metadata" name="metadataHolder"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</MetadataString>
<!--name holder--><Anchor url="&quot;#hideWarning1&quot;"><IS><connect nodeField="description" protoField="name"></connect>
</IS>
</Anchor>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare84.name = "CADAssembly";
ProtoDeclare84.appinfo = "The CADAssembly node holds a set of assemblies or parts grouped together.";
let ProtoInterface85 = browser.currentScene.createNode("ProtoInterface");
let field86 = browser.currentScene.createNode("field");
field86.name = "addChildren";
field86.accessType = "inputOnly";
field86.type = "MFNode";
ProtoInterface85.field = new MFNode();

ProtoInterface85.field[0] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "removeChildren";
field87.accessType = "inputOnly";
field87.type = "MFNode";
ProtoInterface85.field[1] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "children";
field88.accessType = "inputOutput";
field88.appinfo = "The children field can contain X3DProductStructureChildNode types. Each child will be either a sub-assembly or a part.";
field88.type = "MFNode";
//Specification initialization: NULL node
ProtoInterface85.field[2] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "name";
field89.accessType = "inputOutput";
field89.appinfo = "The name field documents the name of this CADAssembly.";
field89.type = "SFString";
ProtoInterface85.field[3] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "bboxCenter";
field90.accessType = "initializeOnly";
field90.appinfo = "Bounding box center: position offset from origin of local coordinate system.";
field90.type = "SFVec3f";
field90.value = "0 0 0";
ProtoInterface85.field[4] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "bboxSize";
field91.accessType = "initializeOnly";
field91.appinfo = "Bounding box size: automatically calculated can be specified as an optimization or constraint.";
field91.type = "SFVec3f";
field91.value = "-1 -1 -1";
ProtoInterface85.field[5] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "metadata";
field92.accessType = "inputOutput";
field92.appinfo = "[X3DMetadataObject]";
field92.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface85.field[6] = field92;

ProtoDeclare84.protoInterface = ProtoInterface85;

let ProtoBody93 = browser.currentScene.createNode("ProtoBody");
let Group94 = browser.currentScene.createNode("Group");
let IS95 = browser.currentScene.createNode("IS");
let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "addChildren";
connect96.protoField = "addChildren";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "removeChildren";
connect97.protoField = "removeChildren";
IS95.connect[1] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "children";
connect98.protoField = "children";
IS95.connect[2] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "bboxCenter";
connect99.protoField = "bboxCenter";
IS95.connect[3] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "bboxSize";
connect100.protoField = "bboxSize";
IS95.connect[4] = connect100;

Group94.iS = IS95;

ProtoBody93.children = new MFNode();

ProtoBody93.children[0] = Group94;

let Group101 = browser.currentScene.createNode("Group");
let MetadataString102 = browser.currentScene.createNode("MetadataString");
MetadataString102.name = "metadataHolder";
let IS103 = browser.currentScene.createNode("IS");
let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "metadata";
connect104.protoField = "metadata";
IS103.connect = new MFNode();

IS103.connect[0] = connect104;

MetadataString102.iS = IS103;

Group101.metadata = MetadataString102;

//name holder
let Anchor105 = browser.currentScene.createNode("Anchor");
Anchor105.url = new MFString(new java.lang.String["#hideWarning1"]);
let IS106 = browser.currentScene.createNode("IS");
let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "description";
connect107.protoField = "name";
IS106.connect = new MFNode();

IS106.connect[0] = connect107;

Anchor105.iS = IS106;

Group101.children = new MFNode();

Group101.children[0] = Anchor105;

ProtoBody93.children[1] = Group101;

ProtoDeclare84.protoBody = ProtoBody93;

browser.currentScene.children[3] = ProtoDeclare84;

//========================================
let ProtoDeclare108 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShapeHolder" appinfo="local dummy node to hold value for CADFace" ><ProtoInterface><field name="shape" accessType="inputOutput" type="SFNode"><!--no initialization value--></field>
</ProtoInterface>
<ProtoBody><Script DEF="HoldShapeNodeScript" directOutput="true"><field name="shape" accessType="inputOutput" appinfo="holder for IS field" type="SFNode"><!--no initialization node--></field>
<IS><connect nodeField="shape" protoField="shape"></connect>
</IS>
<![CDATA[ecmascript:
// no script code, this node is simply a container

// silence warning: no function provided that includes shape = something;]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare108.name = "ShapeHolder";
ProtoDeclare108.appinfo = "local dummy node to hold value for CADFace";
let ProtoInterface109 = browser.currentScene.createNode("ProtoInterface");
let field110 = browser.currentScene.createNode("field");
field110.name = "shape";
field110.accessType = "inputOutput";
field110.type = "SFNode";
//no initialization value
ProtoInterface109.field = new MFNode();

ProtoInterface109.field[0] = field110;

ProtoDeclare108.protoInterface = ProtoInterface109;

let ProtoBody111 = browser.currentScene.createNode("ProtoBody");
let Script112 = browser.currentScene.createNode("Script");
Script112.DEF = "HoldShapeNodeScript";
Script112.directOutput = True;
let field113 = browser.currentScene.createNode("field");
field113.name = "shape";
field113.accessType = "inputOutput";
field113.appinfo = "holder for IS field";
field113.type = "SFNode";
//no initialization node
Script112.field = new MFNode();

Script112.field[0] = field113;

let IS114 = browser.currentScene.createNode("IS");
let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "shape";
connect115.protoField = "shape";
IS114.connect = new MFNode();

IS114.connect[0] = connect115;

Script112.iS = IS114;


Script112.setSourceCode(`ecmascript:\n"+
"// no script code, this node is simply a container\n"+
"\n"+
"// silence warning: no function provided that includes shape = something;`)
ProtoBody111.children = new MFNode();

ProtoBody111.children[0] = Script112;

ProtoDeclare108.protoBody = ProtoBody111;

browser.currentScene.children[4] = ProtoDeclare108;

//= = = = =
let ProtoDeclare116 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CADFace" appinfo="The CADFace node holds the geometry representing a face of a part." documentation="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart" ><ProtoInterface><field name="name" accessType="inputOutput" appinfo="The name field documents the name of this CADFace." type="SFString"></field>
<field name="shape" accessType="inputOutput" appinfo="[X3DShapeNode | LOD]" type="SFNode"><!--Specification initialization: NULL node--></field>
<field name="bboxCenter" accessType="initializeOnly" appinfo="Bounding box center: position offset from origin of local coordinate system." type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" appinfo="Bounding box size: automatically calculated can be specified as an optimization or constraint." type="SFVec3f" value="-1 -1 -1"></field>
<field name="metadata" accessType="inputOutput" appinfo="[X3DMetadataObject]" type="SFNode"><!--Specification initialization: NULL node--></field>
</ProtoInterface>
<ProtoBody><ProtoInstance name="ShapeHolder"><IS><connect nodeField="shape" protoField="shape"></connect>
</IS>
</ProtoInstance>
<Group><IS><connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
</IS>
<MetadataString containerField="metadata" name="metadataHolder"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</MetadataString>
<!--name holder--><Anchor url="&quot;#hideWarning2&quot;"><IS><connect nodeField="description" protoField="name"></connect>
</IS>
</Anchor>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare116.name = "CADFace";
ProtoDeclare116.appinfo = "The CADFace node holds the geometry representing a face of a part.";
ProtoDeclare116.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart";
let ProtoInterface117 = browser.currentScene.createNode("ProtoInterface");
let field118 = browser.currentScene.createNode("field");
field118.name = "name";
field118.accessType = "inputOutput";
field118.appinfo = "The name field documents the name of this CADFace.";
field118.type = "SFString";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "shape";
field119.accessType = "inputOutput";
field119.appinfo = "[X3DShapeNode | LOD]";
field119.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface117.field[1] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "bboxCenter";
field120.accessType = "initializeOnly";
field120.appinfo = "Bounding box center: position offset from origin of local coordinate system.";
field120.type = "SFVec3f";
field120.value = "0 0 0";
ProtoInterface117.field[2] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "bboxSize";
field121.accessType = "initializeOnly";
field121.appinfo = "Bounding box size: automatically calculated can be specified as an optimization or constraint.";
field121.type = "SFVec3f";
field121.value = "-1 -1 -1";
ProtoInterface117.field[3] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "metadata";
field122.accessType = "inputOutput";
field122.appinfo = "[X3DMetadataObject]";
field122.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface117.field[4] = field122;

ProtoDeclare116.protoInterface = ProtoInterface117;

let ProtoBody123 = browser.currentScene.createNode("ProtoBody");
let ProtoInstance124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance124.name = "ShapeHolder";
let IS125 = browser.currentScene.createNode("IS");
let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "shape";
connect126.protoField = "shape";
IS125.connect = new MFNode();

IS125.connect[0] = connect126;

ProtoInstance124.iS = IS125;

ProtoBody123.children = new MFNode();

ProtoBody123.children[0] = ProtoInstance124;

let Group127 = browser.currentScene.createNode("Group");
let IS128 = browser.currentScene.createNode("IS");
let connect129 = browser.currentScene.createNode("connect");
connect129.nodeField = "bboxCenter";
connect129.protoField = "bboxCenter";
IS128.connect = new MFNode();

IS128.connect[0] = connect129;

let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "bboxSize";
connect130.protoField = "bboxSize";
IS128.connect[1] = connect130;

Group127.iS = IS128;

let MetadataString131 = browser.currentScene.createNode("MetadataString");
MetadataString131.name = "metadataHolder";
let IS132 = browser.currentScene.createNode("IS");
let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "metadata";
connect133.protoField = "metadata";
IS132.connect = new MFNode();

IS132.connect[0] = connect133;

MetadataString131.iS = IS132;

Group127.metadata = MetadataString131;

//name holder
let Anchor134 = browser.currentScene.createNode("Anchor");
Anchor134.url = new MFString(new java.lang.String["#hideWarning2"]);
let IS135 = browser.currentScene.createNode("IS");
let connect136 = browser.currentScene.createNode("connect");
connect136.nodeField = "description";
connect136.protoField = "name";
IS135.connect = new MFNode();

IS135.connect[0] = connect136;

Anchor134.iS = IS135;

Group127.children = new MFNode();

Group127.children[0] = Anchor134;

ProtoBody123.children[1] = Group127;

ProtoDeclare116.protoBody = ProtoBody123;

browser.currentScene.children[5] = ProtoDeclare116;

//========================================
let ProtoDeclare137 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CADLayer" appinfo="The CADLayer node defines a hierarchy of nodes used for showing layer structure." documentation="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart" ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="children" accessType="inputOutput" appinfo="The children field can contain X3DChildNode types." type="MFNode"><!--Specification initialization: NULL node--></field>
<field name="name" accessType="inputOutput" appinfo="The name field documents the name of this CADLayer." type="SFString"></field>
<field name="visible" accessType="inputOutput" appinfo="specifies whether a particular child and its subchildren are visible. If the number of values is less than the number of children the remaining children shall be visible." type="MFBool"></field>
<field name="bboxCenter" accessType="initializeOnly" appinfo="Bounding box center: position offset from origin of local coordinate system." type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" appinfo="Bounding box size: automatically calculated can be specified as an optimization or constraint." type="SFVec3f" value="-1 -1 -1"></field>
<field name="metadata" accessType="inputOutput" appinfo="[X3DMetadataObject]" type="SFNode"><!--Specification initialization: NULL node--></field>
</ProtoInterface>
<ProtoBody><Group><IS><connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="children" protoField="children"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
</IS>
</Group>
<Group><MetadataString containerField="metadata" name="metadataHolder"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</MetadataString>
<!--name holder--><Anchor url="&quot;#hideWarning3&quot;"><IS><connect nodeField="description" protoField="name"></connect>
</IS>
</Anchor>
</Group>
<Script DEF="HoldMFBoolFieldScript"><field name="visible" accessType="inputOutput" type="MFBool"><!--no initialization node--></field>
<IS><connect nodeField="visible" protoField="visible"></connect>
</IS>
<![CDATA[ecmascript:
// no script code, this node is simply a container]]></Script>
<!--No support for MFBool in VRML97, so no functionality provided for visible--></ProtoBody>
</ProtoDeclare>`);
ProtoDeclare137.name = "CADLayer";
ProtoDeclare137.appinfo = "The CADLayer node defines a hierarchy of nodes used for showing layer structure.";
ProtoDeclare137.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart";
let ProtoInterface138 = browser.currentScene.createNode("ProtoInterface");
let field139 = browser.currentScene.createNode("field");
field139.name = "addChildren";
field139.accessType = "inputOnly";
field139.type = "MFNode";
ProtoInterface138.field = new MFNode();

ProtoInterface138.field[0] = field139;

let field140 = browser.currentScene.createNode("field");
field140.name = "removeChildren";
field140.accessType = "inputOnly";
field140.type = "MFNode";
ProtoInterface138.field[1] = field140;

let field141 = browser.currentScene.createNode("field");
field141.name = "children";
field141.accessType = "inputOutput";
field141.appinfo = "The children field can contain X3DChildNode types.";
field141.type = "MFNode";
//Specification initialization: NULL node
ProtoInterface138.field[2] = field141;

let field142 = browser.currentScene.createNode("field");
field142.name = "name";
field142.accessType = "inputOutput";
field142.appinfo = "The name field documents the name of this CADLayer.";
field142.type = "SFString";
ProtoInterface138.field[3] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "visible";
field143.accessType = "inputOutput";
field143.appinfo = "specifies whether a particular child and its subchildren are visible. If the number of values is less than the number of children the remaining children shall be visible.";
field143.type = "MFBool";
ProtoInterface138.field[4] = field143;

let field144 = browser.currentScene.createNode("field");
field144.name = "bboxCenter";
field144.accessType = "initializeOnly";
field144.appinfo = "Bounding box center: position offset from origin of local coordinate system.";
field144.type = "SFVec3f";
field144.value = "0 0 0";
ProtoInterface138.field[5] = field144;

let field145 = browser.currentScene.createNode("field");
field145.name = "bboxSize";
field145.accessType = "initializeOnly";
field145.appinfo = "Bounding box size: automatically calculated can be specified as an optimization or constraint.";
field145.type = "SFVec3f";
field145.value = "-1 -1 -1";
ProtoInterface138.field[6] = field145;

let field146 = browser.currentScene.createNode("field");
field146.name = "metadata";
field146.accessType = "inputOutput";
field146.appinfo = "[X3DMetadataObject]";
field146.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface138.field[7] = field146;

ProtoDeclare137.protoInterface = ProtoInterface138;

let ProtoBody147 = browser.currentScene.createNode("ProtoBody");
let Group148 = browser.currentScene.createNode("Group");
let IS149 = browser.currentScene.createNode("IS");
let connect150 = browser.currentScene.createNode("connect");
connect150.nodeField = "addChildren";
connect150.protoField = "addChildren";
IS149.connect = new MFNode();

IS149.connect[0] = connect150;

let connect151 = browser.currentScene.createNode("connect");
connect151.nodeField = "removeChildren";
connect151.protoField = "removeChildren";
IS149.connect[1] = connect151;

let connect152 = browser.currentScene.createNode("connect");
connect152.nodeField = "children";
connect152.protoField = "children";
IS149.connect[2] = connect152;

let connect153 = browser.currentScene.createNode("connect");
connect153.nodeField = "bboxCenter";
connect153.protoField = "bboxCenter";
IS149.connect[3] = connect153;

let connect154 = browser.currentScene.createNode("connect");
connect154.nodeField = "bboxSize";
connect154.protoField = "bboxSize";
IS149.connect[4] = connect154;

Group148.iS = IS149;

ProtoBody147.children = new MFNode();

ProtoBody147.children[0] = Group148;

let Group155 = browser.currentScene.createNode("Group");
let MetadataString156 = browser.currentScene.createNode("MetadataString");
MetadataString156.name = "metadataHolder";
let IS157 = browser.currentScene.createNode("IS");
let connect158 = browser.currentScene.createNode("connect");
connect158.nodeField = "metadata";
connect158.protoField = "metadata";
IS157.connect = new MFNode();

IS157.connect[0] = connect158;

MetadataString156.iS = IS157;

Group155.metadata = MetadataString156;

//name holder
let Anchor159 = browser.currentScene.createNode("Anchor");
Anchor159.url = new MFString(new java.lang.String["#hideWarning3"]);
let IS160 = browser.currentScene.createNode("IS");
let connect161 = browser.currentScene.createNode("connect");
connect161.nodeField = "description";
connect161.protoField = "name";
IS160.connect = new MFNode();

IS160.connect[0] = connect161;

Anchor159.iS = IS160;

Group155.children = new MFNode();

Group155.children[0] = Anchor159;

ProtoBody147.children[1] = Group155;

let Script162 = browser.currentScene.createNode("Script");
Script162.DEF = "HoldMFBoolFieldScript";
let field163 = browser.currentScene.createNode("field");
field163.name = "visible";
field163.accessType = "inputOutput";
field163.type = "MFBool";
//no initialization node
Script162.field = new MFNode();

Script162.field[0] = field163;

let IS164 = browser.currentScene.createNode("IS");
let connect165 = browser.currentScene.createNode("connect");
connect165.nodeField = "visible";
connect165.protoField = "visible";
IS164.connect = new MFNode();

IS164.connect[0] = connect165;

Script162.iS = IS164;


Script162.setSourceCode(`ecmascript:\n"+
"// no script code, this node is simply a container`)
ProtoBody147.children[2] = Script162;

//No support for MFBool in VRML97, so no functionality provided for visible
ProtoDeclare137.protoBody = ProtoBody147;

browser.currentScene.children[6] = ProtoDeclare137;

//========================================
let ProtoDeclare166 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="CADPart" appinfo="CADPart represents the location and faces that constitute apart" documentation="https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart" ><ProtoInterface><field name="addChildren" accessType="inputOnly" type="MFNode"></field>
<field name="removeChildren" accessType="inputOnly" type="MFNode"></field>
<field name="children" accessType="inputOutput" appinfo="The children field can only contain CADFace nodes." type="MFNode"><!--Specification initialization: NULL node--></field>
<field name="name" accessType="inputOutput" type="SFString"></field>
<field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="rotation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="center" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="scale" accessType="inputOutput" type="SFVec3f" value="1 1 1"></field>
<field name="scaleOrientation" accessType="inputOutput" type="SFRotation" value="0 0 1 0"></field>
<field name="bboxCenter" accessType="initializeOnly" type="SFVec3f" value="0 0 0"></field>
<field name="bboxSize" accessType="initializeOnly" type="SFVec3f" value="-1 -1 -1"></field>
<field name="metadata" accessType="inputOutput" appinfo="[X3DMetadataObject]" type="SFNode"><!--Specification initialization: NULL node--></field>
</ProtoInterface>
<ProtoBody><Transform><IS><connect nodeField="children" protoField="children"></connect>
<connect nodeField="addChildren" protoField="addChildren"></connect>
<connect nodeField="removeChildren" protoField="removeChildren"></connect>
<connect nodeField="translation" protoField="translation"></connect>
<connect nodeField="rotation" protoField="rotation"></connect>
<connect nodeField="center" protoField="center"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="scaleOrientation" protoField="scaleOrientation"></connect>
<connect nodeField="bboxCenter" protoField="bboxCenter"></connect>
<connect nodeField="bboxSize" protoField="bboxSize"></connect>
</IS>
</Transform>
<Group><MetadataString containerField="metadata" name="metadataHolder"><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
</MetadataString>
<!--name holder--><Anchor url="&quot;#hideWarning4&quot;"><IS><connect nodeField="description" protoField="name"></connect>
</IS>
</Anchor>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare166.name = "CADPart";
ProtoDeclare166.appinfo = "CADPart represents the location and faces that constitute apart";
ProtoDeclare166.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CadGeometry.html#CADPart";
let ProtoInterface167 = browser.currentScene.createNode("ProtoInterface");
let field168 = browser.currentScene.createNode("field");
field168.name = "addChildren";
field168.accessType = "inputOnly";
field168.type = "MFNode";
ProtoInterface167.field = new MFNode();

ProtoInterface167.field[0] = field168;

let field169 = browser.currentScene.createNode("field");
field169.name = "removeChildren";
field169.accessType = "inputOnly";
field169.type = "MFNode";
ProtoInterface167.field[1] = field169;

let field170 = browser.currentScene.createNode("field");
field170.name = "children";
field170.accessType = "inputOutput";
field170.appinfo = "The children field can only contain CADFace nodes.";
field170.type = "MFNode";
//Specification initialization: NULL node
ProtoInterface167.field[2] = field170;

let field171 = browser.currentScene.createNode("field");
field171.name = "name";
field171.accessType = "inputOutput";
field171.type = "SFString";
ProtoInterface167.field[3] = field171;

let field172 = browser.currentScene.createNode("field");
field172.name = "translation";
field172.accessType = "inputOutput";
field172.type = "SFVec3f";
field172.value = "0 0 0";
ProtoInterface167.field[4] = field172;

let field173 = browser.currentScene.createNode("field");
field173.name = "rotation";
field173.accessType = "inputOutput";
field173.type = "SFRotation";
field173.value = "0 0 1 0";
ProtoInterface167.field[5] = field173;

let field174 = browser.currentScene.createNode("field");
field174.name = "center";
field174.accessType = "inputOutput";
field174.type = "SFVec3f";
field174.value = "0 0 0";
ProtoInterface167.field[6] = field174;

let field175 = browser.currentScene.createNode("field");
field175.name = "scale";
field175.accessType = "inputOutput";
field175.type = "SFVec3f";
field175.value = "1 1 1";
ProtoInterface167.field[7] = field175;

let field176 = browser.currentScene.createNode("field");
field176.name = "scaleOrientation";
field176.accessType = "inputOutput";
field176.type = "SFRotation";
field176.value = "0 0 1 0";
ProtoInterface167.field[8] = field176;

let field177 = browser.currentScene.createNode("field");
field177.name = "bboxCenter";
field177.accessType = "initializeOnly";
field177.type = "SFVec3f";
field177.value = "0 0 0";
ProtoInterface167.field[9] = field177;

let field178 = browser.currentScene.createNode("field");
field178.name = "bboxSize";
field178.accessType = "initializeOnly";
field178.type = "SFVec3f";
field178.value = "-1 -1 -1";
ProtoInterface167.field[10] = field178;

let field179 = browser.currentScene.createNode("field");
field179.name = "metadata";
field179.accessType = "inputOutput";
field179.appinfo = "[X3DMetadataObject]";
field179.type = "SFNode";
//Specification initialization: NULL node
ProtoInterface167.field[11] = field179;

ProtoDeclare166.protoInterface = ProtoInterface167;

let ProtoBody180 = browser.currentScene.createNode("ProtoBody");
let Transform181 = browser.currentScene.createNode("Transform");
let IS182 = browser.currentScene.createNode("IS");
let connect183 = browser.currentScene.createNode("connect");
connect183.nodeField = "children";
connect183.protoField = "children";
IS182.connect = new MFNode();

IS182.connect[0] = connect183;

let connect184 = browser.currentScene.createNode("connect");
connect184.nodeField = "addChildren";
connect184.protoField = "addChildren";
IS182.connect[1] = connect184;

let connect185 = browser.currentScene.createNode("connect");
connect185.nodeField = "removeChildren";
connect185.protoField = "removeChildren";
IS182.connect[2] = connect185;

let connect186 = browser.currentScene.createNode("connect");
connect186.nodeField = "translation";
connect186.protoField = "translation";
IS182.connect[3] = connect186;

let connect187 = browser.currentScene.createNode("connect");
connect187.nodeField = "rotation";
connect187.protoField = "rotation";
IS182.connect[4] = connect187;

let connect188 = browser.currentScene.createNode("connect");
connect188.nodeField = "center";
connect188.protoField = "center";
IS182.connect[5] = connect188;

let connect189 = browser.currentScene.createNode("connect");
connect189.nodeField = "scale";
connect189.protoField = "scale";
IS182.connect[6] = connect189;

let connect190 = browser.currentScene.createNode("connect");
connect190.nodeField = "scaleOrientation";
connect190.protoField = "scaleOrientation";
IS182.connect[7] = connect190;

let connect191 = browser.currentScene.createNode("connect");
connect191.nodeField = "bboxCenter";
connect191.protoField = "bboxCenter";
IS182.connect[8] = connect191;

let connect192 = browser.currentScene.createNode("connect");
connect192.nodeField = "bboxSize";
connect192.protoField = "bboxSize";
IS182.connect[9] = connect192;

Transform181.iS = IS182;

ProtoBody180.children = new MFNode();

ProtoBody180.children[0] = Transform181;

let Group193 = browser.currentScene.createNode("Group");
let MetadataString194 = browser.currentScene.createNode("MetadataString");
MetadataString194.name = "metadataHolder";
let IS195 = browser.currentScene.createNode("IS");
let connect196 = browser.currentScene.createNode("connect");
connect196.nodeField = "metadata";
connect196.protoField = "metadata";
IS195.connect = new MFNode();

IS195.connect[0] = connect196;

MetadataString194.iS = IS195;

Group193.metadata = MetadataString194;

//name holder
let Anchor197 = browser.currentScene.createNode("Anchor");
Anchor197.url = new MFString(new java.lang.String["#hideWarning4"]);
let IS198 = browser.currentScene.createNode("IS");
let connect199 = browser.currentScene.createNode("connect");
connect199.nodeField = "description";
connect199.protoField = "name";
IS198.connect = new MFNode();

IS198.connect[0] = connect199;

Anchor197.iS = IS198;

Group193.children = new MFNode();

Group193.children[0] = Anchor197;

ProtoBody180.children[1] = Group193;

ProtoDeclare166.protoBody = ProtoBody180;

browser.currentScene.children[7] = ProtoDeclare166;

//========================================
let Anchor200 = browser.currentScene.createNode("Anchor");
Anchor200.description = "CadGeometryExternPrototypes";
Anchor200.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor200.url = new MFString(new java.lang.String["CadGeometryExternPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.x3d","CadGeometryExternPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CadGeometryExternPrototypes.wrl"]);
let Shape201 = browser.currentScene.createNode("Shape");
let Text202 = browser.currentScene.createNode("Text");
Text202.string = new MFString(new java.lang.String["CadGeometryExternPrototypes","defines prototype examples","","Click text to see","CadGeometryExternPrototypes"]);
let FontStyle203 = browser.currentScene.createNode("FontStyle");
FontStyle203.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle203.size = 0.9;
Text202.fontStyle = FontStyle203;

Shape201.geometry = Text202;

let Appearance204 = browser.currentScene.createNode("Appearance");
let Material205 = browser.currentScene.createNode("Material");
Material205.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance204.material = Material205;

Shape201.appearance = Appearance204;

Anchor200.children = new MFNode();

Anchor200.children[0] = Shape201;

browser.currentScene.children[8] = Anchor200;

//========================================
let Transform206 = browser.currentScene.createNode("Transform");
Transform206.translation = new SFVec3f(new float[-3,2,0]);
let Shape207 = browser.currentScene.createNode("Shape");
let Appearance208 = browser.currentScene.createNode("Appearance");
Appearance208.DEF = "White";
let Material209 = browser.currentScene.createNode("Material");
Material209.diffuseColor = new SFColor(new float[1,1,1]);
Appearance208.material = Material209;

Shape207.appearance = Appearance208;

let ProtoInstance210 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance210.name = "IndexedQuadSet";
let fieldValue211 = browser.currentScene.createNode("fieldValue");
fieldValue211.name = "index";
fieldValue211.value = "0 3 2 1 4 5 6 7 2 7 9 8 2 3 4 7";
ProtoInstance210.fieldValue = new MFNode();

ProtoInstance210.fieldValue[0] = fieldValue211;

let fieldValue212 = browser.currentScene.createNode("fieldValue");
fieldValue212.name = "coord";
let Coordinate213 = browser.currentScene.createNode("Coordinate");
Coordinate213.point = new MFVec3f(new float[-1.5,0,0,-1.5,1,-1,-0.5,1,-1,-0.5,0,0,0.5,0,0,1.5,0,0,1.5,1,-1,0.5,1,-1,-0.5,2,-1,0.5,2,-1]);
fieldValue212.children = new MFNode();

fieldValue212.children[0] = Coordinate213;

ProtoInstance210.fieldValue[1] = fieldValue212;

Shape207.geometry = ProtoInstance210;

Transform206.children = new MFNode();

Transform206.children[0] = Shape207;

browser.currentScene.children[9] = Transform206;

let Transform214 = browser.currentScene.createNode("Transform");
Transform214.translation = new SFVec3f(new float[3,2,0]);
let Shape215 = browser.currentScene.createNode("Shape");
let Appearance216 = browser.currentScene.createNode("Appearance");
Appearance216.USE = "White";
Shape215.appearance = Appearance216;

let ProtoInstance217 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance217.name = "QuadSet";
let fieldValue218 = browser.currentScene.createNode("fieldValue");
fieldValue218.name = "coord";
let Coordinate219 = browser.currentScene.createNode("Coordinate");
Coordinate219.point = new MFVec3f(new float[-1.5,0,0,-1.5,1,-1,-0.5,1,-1,-0.5,0,0,0.5,0,0,1.5,0,0,1.5,1,-1,0.5,1,-1]);
fieldValue218.children = new MFNode();

fieldValue218.children[0] = Coordinate219;

ProtoInstance217.fieldValue = new MFNode();

ProtoInstance217.fieldValue[0] = fieldValue218;

Shape215.geometry = ProtoInstance217;

Transform214.children = new MFNode();

Transform214.children[0] = Shape215;

browser.currentScene.children[10] = Transform214;

//========================================
//Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead.
let ProtoInstance220 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance220.name = "CADLayer";
let fieldValue221 = browser.currentScene.createNode("fieldValue");
fieldValue221.name = "children";
let ProtoInstance222 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance222.name = "CADAssembly";
let fieldValue223 = browser.currentScene.createNode("fieldValue");
fieldValue223.name = "children";
let ProtoInstance224 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance224.name = "CADPart";
let fieldValue225 = browser.currentScene.createNode("fieldValue");
fieldValue225.name = "children";
let ProtoInstance226 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance226.name = "CADFace";
let fieldValue227 = browser.currentScene.createNode("fieldValue");
fieldValue227.name = "shape";
let Shape228 = browser.currentScene.createNode("Shape");
let Cylinder229 = browser.currentScene.createNode("Cylinder");
Cylinder229.bottom = False;
Cylinder229.height = 0.000001;
Cylinder229.radius = 0.000001;
Cylinder229.side = False;
Shape228.geometry = Cylinder229;

let Appearance230 = browser.currentScene.createNode("Appearance");
let Material231 = browser.currentScene.createNode("Material");
Appearance230.material = Material231;

Shape228.appearance = Appearance230;

fieldValue227.children = new MFNode();

fieldValue227.children[0] = Shape228;

ProtoInstance226.fieldValue = new MFNode();

ProtoInstance226.fieldValue[0] = fieldValue227;

fieldValue225.children = new MFNode();

fieldValue225.children[0] = ProtoInstance226;

ProtoInstance224.fieldValue = new MFNode();

ProtoInstance224.fieldValue[0] = fieldValue225;

fieldValue223.children = new MFNode();

fieldValue223.children[0] = ProtoInstance224;

ProtoInstance222.fieldValue = new MFNode();

ProtoInstance222.fieldValue[0] = fieldValue223;

fieldValue221.children = new MFNode();

fieldValue221.children[0] = ProtoInstance222;

ProtoInstance220.fieldValue = new MFNode();

ProtoInstance220.fieldValue[0] = fieldValue221;

browser.currentScene.children[11] = ProtoInstance220;

