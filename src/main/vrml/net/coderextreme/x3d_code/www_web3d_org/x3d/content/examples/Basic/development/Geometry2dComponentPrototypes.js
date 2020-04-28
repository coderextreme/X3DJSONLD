let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//====================
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Geometry2dComponentPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Arc2D" ><ProtoInterface><field name="startAngle" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat" value="1.5707963265"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><!--Only the first node counts as the node type of a prototype. This node must be a geometry node.--><IndexedLineSet DEF="ArcIndexPoints"><Coordinate containerField="coord" DEF="Arc3DPoints"></Coordinate>
</IndexedLineSet>
<!--Any nodes after initial node in a ProtoBody is not rendered.--><Group><IS><connect nodeField="metadata" protoField="metadata"></connect>
</IS>
<Script DEF="Arc2dToFaceSet3d"><field name="startAngle" accessType="initializeOnly" type="SFFloat"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat"></field>
<field name="arcSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="arcIndexSet3d" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="startAngle" protoField="startAngle"></connect>
<connect nodeField="endAngle" protoField="endAngle"></connect>
<connect nodeField="radius" protoField="radius"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   numOfPoints = 100;

   if (radius < 0)
   {
      Browser.print ('[Arc2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');
   }

   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))
   {
	Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); // (]
   }

   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))
   {
	Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)'); // (]
   }

   // equal startAngle, endAngle means draw full circle.
   // high out-of-range endAngle is OK for local computation.
   if (startAngle >= endAngle)
      endAngle = endAngle + 2 * Math.PI;

   differAng = Math.abs((endAngle - startAngle)) / numOfPoints;

   for (i = 0; i <= numOfPoints; i++)
   {
	arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);
        arcIndexSet3d[i] = i;
   }

} // initialize]]></Script>
<ROUTE fromField="arcSet3d" fromNode="Arc2dToFaceSet3d" toField="point" toNode="Arc3DPoints"></ROUTE>
<ROUTE fromField="arcIndexSet3d" fromNode="Arc2dToFaceSet3d" toField="set_coordIndex" toNode="ArcIndexPoints"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "Arc2D";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "startAngle";
field5.accessType = "initializeOnly";
field5.type = "SFFloat";
field5.value = "0";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "endAngle";
field6.accessType = "initializeOnly";
field6.type = "SFFloat";
field6.value = "1.5707963265";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "radius";
field7.accessType = "initializeOnly";
field7.type = "SFFloat";
field7.value = "1";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "metadata";
field8.accessType = "inputOutput";
field8.appinfo = "Metadata node only";
field8.type = "SFNode";
//default NULL
ProtoInterface4.field[3] = field8;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
//Only the first node counts as the node type of a prototype. This node must be a geometry node.
let IndexedLineSet10 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet10.DEF = "ArcIndexPoints";
let Coordinate11 = browser.currentScene.createNode("Coordinate");
Coordinate11.DEF = "Arc3DPoints";
IndexedLineSet10.coord = Coordinate11;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = IndexedLineSet10;

//Any nodes after initial node in a ProtoBody is not rendered.
let Group12 = browser.currentScene.createNode("Group");
let IS13 = browser.currentScene.createNode("IS");
let connect14 = browser.currentScene.createNode("connect");
connect14.nodeField = "metadata";
connect14.protoField = "metadata";
IS13.connect = new MFNode();

IS13.connect[0] = connect14;

Group12.iS = IS13;

let Script15 = browser.currentScene.createNode("Script");
Script15.DEF = "Arc2dToFaceSet3d";
let field16 = browser.currentScene.createNode("field");
field16.name = "startAngle";
field16.accessType = "initializeOnly";
field16.type = "SFFloat";
Script15.field = new MFNode();

Script15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "endAngle";
field17.accessType = "initializeOnly";
field17.type = "SFFloat";
Script15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "radius";
field18.accessType = "initializeOnly";
field18.type = "SFFloat";
Script15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "arcSet3d";
field19.accessType = "outputOnly";
field19.type = "MFVec3f";
Script15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "arcIndexSet3d";
field20.accessType = "outputOnly";
field20.type = "MFInt32";
Script15.field[4] = field20;

let IS21 = browser.currentScene.createNode("IS");
let connect22 = browser.currentScene.createNode("connect");
connect22.nodeField = "startAngle";
connect22.protoField = "startAngle";
IS21.connect = new MFNode();

IS21.connect[0] = connect22;

let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "endAngle";
connect23.protoField = "endAngle";
IS21.connect[1] = connect23;

let connect24 = browser.currentScene.createNode("connect");
connect24.nodeField = "radius";
connect24.protoField = "radius";
IS21.connect[2] = connect24;

Script15.iS = IS21;


Script15.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   numOfPoints = 100;\n"+
"\n"+
"   if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[Arc2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); // (]\n"+
"   }\n"+
"\n"+
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)'); // (]\n"+
"   }\n"+
"\n"+
"   // equal startAngle, endAngle means draw full circle.\n"+
"   // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle = endAngle + 2 * Math.PI;\n"+
"\n"+
"   differAng = Math.abs((endAngle - startAngle)) / numOfPoints;\n"+
"\n"+
"   for (i = 0; i <= numOfPoints; i++)\n"+
"   {\n"+
"	arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);\n"+
"        arcIndexSet3d[i] = i;\n"+
"   }\n"+
"\n"+
"} // initialize`)
Group12.children = new MFNode();

Group12.children[0] = Script15;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "arcSet3d";
ROUTE25.fromNode = "Arc2dToFaceSet3d";
ROUTE25.toField = "point";
ROUTE25.toNode = "Arc3DPoints";
Group12.children[1] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromField = "arcIndexSet3d";
ROUTE26.fromNode = "Arc2dToFaceSet3d";
ROUTE26.toField = "set_coordIndex";
ROUTE26.toNode = "ArcIndexPoints";
Group12.children[2] = ROUTE26;

ProtoBody9.children[1] = Group12;

ProtoDeclare3.protoBody = ProtoBody9;

browser.currentScene.children[1] = ProtoDeclare3;

//====================
let ProtoDeclare27 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArcClose2D" ><ProtoInterface><field name="startAngle" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat" value="1.5707963265"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="closureType" accessType="initializeOnly" type="SFString" value="PIE"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="ArcPointFaceIndex"><Coordinate containerField="coord" DEF="ArcClose2DFaceCoordinate"></Coordinate>
</IndexedFaceSet>
<Group><Script DEF="ArcClose2dToFaceSet3d"><field name="closureType" accessType="initializeOnly" type="SFString"></field>
<field name="startAngle" accessType="initializeOnly" type="SFFloat"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat"></field>
<field name="arcSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="pointIndex" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="closureType" protoField="closureType"></connect>
<connect nodeField="startAngle" protoField="startAngle"></connect>
<connect nodeField="endAngle" protoField="endAngle"></connect>
<connect nodeField="radius" protoField="radius"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   if (radius < 0)
   {
      Browser.print ('[ArcClose2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');
   }

   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))
   {
	Browser.print ('[ArcClose2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]
   }

   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))
   {
	Browser.print ('[ArcClose2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); // (]
    }

    // equal startAngle, endAngle means draw full circle.
    // high out-of-range endAngle is OK for local computation.
   if (startAngle >= endAngle)
      endAngle = endAngle + 2*Math.PI;

   numOfPoints = 100;
   differAng = Math.abs((endAngle - startAngle))/numOfPoints;

   for ( i=0 ; i<=numOfPoints ; i++)
   {
	if ( i == numOfPoints)
             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);
        else
             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );
   }

   k=0;
   if (closureType =='PIE')
       for ( i=0 ; i<numOfPoints ; i++)
       {
        	pointIndex[k]   = numOfPoints;
        	pointIndex[k+1] = i;
        	pointIndex[k+2] = i + 1;
        	pointIndex[k+3]   = numOfPoints;
        	pointIndex[k+4] = -1;
        k=k+5;
	}
   else
       for ( i=0 ; i<numOfPoints-1 ; i++)
       {
              pointIndex[k]   = 0;
              pointIndex[k+1] = i;
              pointIndex[k+2] = i + 1;
              pointIndex[k+3]   = 0;
              pointIndex[k+4] = -1;
        k=k+5;
	}

} // initialize]]></Script>
<ROUTE fromField="arcSet3d" fromNode="ArcClose2dToFaceSet3d" toField="point" toNode="ArcClose2DFaceCoordinate"></ROUTE>
<ROUTE fromField="pointIndex" fromNode="ArcClose2dToFaceSet3d" toField="set_coordIndex" toNode="ArcPointFaceIndex"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare27.name = "ArcClose2D";
let ProtoInterface28 = browser.currentScene.createNode("ProtoInterface");
let field29 = browser.currentScene.createNode("field");
field29.name = "startAngle";
field29.accessType = "initializeOnly";
field29.type = "SFFloat";
field29.value = "0";
ProtoInterface28.field = new MFNode();

ProtoInterface28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "endAngle";
field30.accessType = "initializeOnly";
field30.type = "SFFloat";
field30.value = "1.5707963265";
ProtoInterface28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "radius";
field31.accessType = "initializeOnly";
field31.type = "SFFloat";
field31.value = "1";
ProtoInterface28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "closureType";
field32.accessType = "initializeOnly";
field32.type = "SFString";
field32.value = "PIE";
ProtoInterface28.field[3] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "solid";
field33.accessType = "initializeOnly";
field33.type = "SFBool";
field33.value = "false";
ProtoInterface28.field[4] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "metadata";
field34.accessType = "inputOutput";
field34.appinfo = "Metadata node only";
field34.type = "SFNode";
//default NULL
ProtoInterface28.field[5] = field34;

ProtoDeclare27.protoInterface = ProtoInterface28;

let ProtoBody35 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet36 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet36.DEF = "ArcPointFaceIndex";
let Coordinate37 = browser.currentScene.createNode("Coordinate");
Coordinate37.DEF = "ArcClose2DFaceCoordinate";
IndexedFaceSet36.coord = Coordinate37;

ProtoBody35.children = new MFNode();

ProtoBody35.children[0] = IndexedFaceSet36;

let Group38 = browser.currentScene.createNode("Group");
let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "ArcClose2dToFaceSet3d";
let field40 = browser.currentScene.createNode("field");
field40.name = "closureType";
field40.accessType = "initializeOnly";
field40.type = "SFString";
Script39.field = new MFNode();

Script39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "startAngle";
field41.accessType = "initializeOnly";
field41.type = "SFFloat";
Script39.field[1] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "endAngle";
field42.accessType = "initializeOnly";
field42.type = "SFFloat";
Script39.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "radius";
field43.accessType = "initializeOnly";
field43.type = "SFFloat";
Script39.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "arcSet3d";
field44.accessType = "outputOnly";
field44.type = "MFVec3f";
Script39.field[4] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "pointIndex";
field45.accessType = "outputOnly";
field45.type = "MFInt32";
Script39.field[5] = field45;

let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "closureType";
connect47.protoField = "closureType";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "startAngle";
connect48.protoField = "startAngle";
IS46.connect[1] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "endAngle";
connect49.protoField = "endAngle";
IS46.connect[2] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "radius";
connect50.protoField = "radius";
IS46.connect[3] = connect50;

Script39.iS = IS46;


Script39.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[ArcClose2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcClose2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]\n"+
"   }\n"+
"\n"+
"   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcClose2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); // (]\n"+
"    }\n"+
"\n"+
"    // equal startAngle, endAngle means draw full circle.\n"+
"    // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle = endAngle + 2*Math.PI;\n"+
"\n"+
"   numOfPoints = 100;\n"+
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;\n"+
"\n"+
"   for ( i=0 ; i<=numOfPoints ; i++)\n"+
"   {\n"+
"	if ( i == numOfPoints)\n"+
"             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);\n"+
"        else\n"+
"             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );\n"+
"   }\n"+
"\n"+
"   k=0;\n"+
"   if (closureType =='PIE')\n"+
"       for ( i=0 ; i<numOfPoints ; i++)\n"+
"       {\n"+
"        	pointIndex[k]   = numOfPoints;\n"+
"        	pointIndex[k+1] = i;\n"+
"        	pointIndex[k+2] = i + 1;\n"+
"        	pointIndex[k+3]   = numOfPoints;\n"+
"        	pointIndex[k+4] = -1;\n"+
"        k=k+5;\n"+
"	}\n"+
"   else\n"+
"       for ( i=0 ; i<numOfPoints-1 ; i++)\n"+
"       {\n"+
"              pointIndex[k]   = 0;\n"+
"              pointIndex[k+1] = i;\n"+
"              pointIndex[k+2] = i + 1;\n"+
"              pointIndex[k+3]   = 0;\n"+
"              pointIndex[k+4] = -1;\n"+
"        k=k+5;\n"+
"	}\n"+
"\n"+
"} // initialize`)
Group38.children = new MFNode();

Group38.children[0] = Script39;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "arcSet3d";
ROUTE51.fromNode = "ArcClose2dToFaceSet3d";
ROUTE51.toField = "point";
ROUTE51.toNode = "ArcClose2DFaceCoordinate";
Group38.children[1] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "pointIndex";
ROUTE52.fromNode = "ArcClose2dToFaceSet3d";
ROUTE52.toField = "set_coordIndex";
ROUTE52.toNode = "ArcPointFaceIndex";
Group38.children[2] = ROUTE52;

ProtoBody35.children[1] = Group38;

ProtoDeclare27.protoBody = ProtoBody35;

browser.currentScene.children[2] = ProtoDeclare27;

//ArcClose2DUnfilled also provided since FillProperties not available in VRML 97
let ProtoDeclare53 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArcClose2DUnfilled" ><ProtoInterface><field name="startAngle" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat" value="1.5707963265"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="closureType" accessType="initializeOnly" type="SFString" value="PIE"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedLineSet DEF="ArcPointLineIndex"><Coordinate containerField="coord" DEF="ArcClose2DLineCoordinate"></Coordinate>
</IndexedLineSet>
<Group><Script DEF="ArcClose2dToLineSet3d"><field name="closureType" accessType="initializeOnly" type="SFString"></field>
<field name="startAngle" accessType="initializeOnly" type="SFFloat"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat"></field>
<field name="arcSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="pointIndex" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="closureType" protoField="closureType"></connect>
<connect nodeField="startAngle" protoField="startAngle"></connect>
<connect nodeField="endAngle" protoField="endAngle"></connect>
<connect nodeField="radius" protoField="radius"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{

   if (radius < 0)
   {
      Browser.print ('[ArcCloseUnfilled2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');
   }

   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))
   {
	Browser.print ('[ArcCloseUnfilled2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]
   }

   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))
   {
	Browser.print ('[ArcCloseUnfilled2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); //(]
    }

    // equal startAngle, endAngle means draw full circle.
    // high out-of-range endAngle is OK for local computation.
   if (startAngle >= endAngle)
      endAngle = endAngle + 2*Math.PI;

   numOfPoints = 100;
   differAng = Math.abs((endAngle - startAngle))/numOfPoints;

   for ( i=0 ; i<=numOfPoints +1 ; i++)
   {
	if ( i == numOfPoints +1)
             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);
        else
             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );
   }

   if (closureType =='CHORD')
   {
	for ( i=0 ; i<=numOfPoints +1 ; i++)
	{
        	if ( i == numOfPoints +1)
             		pointIndex[i] = 0.0;
        	else
             		pointIndex[i] = i;
	}
   }
   else
   {
	for ( i=0 ; i<=numOfPoints +1 ; i++)
	{
         pointIndex[i] = i;
	}
         pointIndex[i] = 0.0;
   }

} // initialize]]></Script>
<ROUTE fromField="arcSet3d" fromNode="ArcClose2dToLineSet3d" toField="point" toNode="ArcClose2DLineCoordinate"></ROUTE>
<ROUTE fromField="pointIndex" fromNode="ArcClose2dToLineSet3d" toField="set_coordIndex" toNode="ArcPointLineIndex"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare53.name = "ArcClose2DUnfilled";
let ProtoInterface54 = browser.currentScene.createNode("ProtoInterface");
let field55 = browser.currentScene.createNode("field");
field55.name = "startAngle";
field55.accessType = "initializeOnly";
field55.type = "SFFloat";
field55.value = "0";
ProtoInterface54.field = new MFNode();

ProtoInterface54.field[0] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "endAngle";
field56.accessType = "initializeOnly";
field56.type = "SFFloat";
field56.value = "1.5707963265";
ProtoInterface54.field[1] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "radius";
field57.accessType = "initializeOnly";
field57.type = "SFFloat";
field57.value = "1";
ProtoInterface54.field[2] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "closureType";
field58.accessType = "initializeOnly";
field58.type = "SFString";
field58.value = "PIE";
ProtoInterface54.field[3] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "solid";
field59.accessType = "initializeOnly";
field59.type = "SFBool";
field59.value = "false";
ProtoInterface54.field[4] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "metadata";
field60.accessType = "inputOutput";
field60.appinfo = "Metadata node only";
field60.type = "SFNode";
//default NULL
ProtoInterface54.field[5] = field60;

ProtoDeclare53.protoInterface = ProtoInterface54;

let ProtoBody61 = browser.currentScene.createNode("ProtoBody");
let IndexedLineSet62 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet62.DEF = "ArcPointLineIndex";
let Coordinate63 = browser.currentScene.createNode("Coordinate");
Coordinate63.DEF = "ArcClose2DLineCoordinate";
IndexedLineSet62.coord = Coordinate63;

ProtoBody61.children = new MFNode();

ProtoBody61.children[0] = IndexedLineSet62;

let Group64 = browser.currentScene.createNode("Group");
let Script65 = browser.currentScene.createNode("Script");
Script65.DEF = "ArcClose2dToLineSet3d";
let field66 = browser.currentScene.createNode("field");
field66.name = "closureType";
field66.accessType = "initializeOnly";
field66.type = "SFString";
Script65.field = new MFNode();

Script65.field[0] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "startAngle";
field67.accessType = "initializeOnly";
field67.type = "SFFloat";
Script65.field[1] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "endAngle";
field68.accessType = "initializeOnly";
field68.type = "SFFloat";
Script65.field[2] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "radius";
field69.accessType = "initializeOnly";
field69.type = "SFFloat";
Script65.field[3] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "arcSet3d";
field70.accessType = "outputOnly";
field70.type = "MFVec3f";
Script65.field[4] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "pointIndex";
field71.accessType = "outputOnly";
field71.type = "MFInt32";
Script65.field[5] = field71;

let IS72 = browser.currentScene.createNode("IS");
let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "closureType";
connect73.protoField = "closureType";
IS72.connect = new MFNode();

IS72.connect[0] = connect73;

let connect74 = browser.currentScene.createNode("connect");
connect74.nodeField = "startAngle";
connect74.protoField = "startAngle";
IS72.connect[1] = connect74;

let connect75 = browser.currentScene.createNode("connect");
connect75.nodeField = "endAngle";
connect75.protoField = "endAngle";
IS72.connect[2] = connect75;

let connect76 = browser.currentScene.createNode("connect");
connect76.nodeField = "radius";
connect76.protoField = "radius";
IS72.connect[3] = connect76;

Script65.iS = IS72;


Script65.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"\n"+
"   if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[ArcCloseUnfilled2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcCloseUnfilled2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)'); //(]\n"+
"   }\n"+
"\n"+
"   if ((endAngle< 0) || (endAngle>= 2 * Math.PI))\n"+
"   {\n"+
"	Browser.print ('[ArcCloseUnfilled2D] Warning: endAngle=' + endAngle+ ' must be within range [0..2pi)'); //(]\n"+
"    }\n"+
"\n"+
"    // equal startAngle, endAngle means draw full circle.\n"+
"    // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle = endAngle + 2*Math.PI;\n"+
"\n"+
"   numOfPoints = 100;\n"+
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;\n"+
"\n"+
"   for ( i=0 ; i<=numOfPoints +1 ; i++)\n"+
"   {\n"+
"	if ( i == numOfPoints +1)\n"+
"             arcSet3d[i] = new SFVec3f (0.0, 0.0, 0.0);\n"+
"        else\n"+
"             arcSet3d[i] = new SFVec3f ( radius*Math.cos(startAngle + i*differAng), radius*Math.sin(startAngle + i*differAng), 0.0 );\n"+
"   }\n"+
"\n"+
"   if (closureType =='CHORD')\n"+
"   {\n"+
"	for ( i=0 ; i<=numOfPoints +1 ; i++)\n"+
"	{\n"+
"        	if ( i == numOfPoints +1)\n"+
"             		pointIndex[i] = 0.0;\n"+
"        	else\n"+
"             		pointIndex[i] = i;\n"+
"	}\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"	for ( i=0 ; i<=numOfPoints +1 ; i++)\n"+
"	{\n"+
"         pointIndex[i] = i;\n"+
"	}\n"+
"         pointIndex[i] = 0.0;\n"+
"   }\n"+
"\n"+
"} // initialize`)
Group64.children = new MFNode();

Group64.children[0] = Script65;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "arcSet3d";
ROUTE77.fromNode = "ArcClose2dToLineSet3d";
ROUTE77.toField = "point";
ROUTE77.toNode = "ArcClose2DLineCoordinate";
Group64.children[1] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "pointIndex";
ROUTE78.fromNode = "ArcClose2dToLineSet3d";
ROUTE78.toField = "set_coordIndex";
ROUTE78.toNode = "ArcPointLineIndex";
Group64.children[2] = ROUTE78;

ProtoBody61.children[1] = Group64;

ProtoDeclare53.protoBody = ProtoBody61;

browser.currentScene.children[3] = ProtoDeclare53;

//====================
let ProtoDeclare79 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Circle2D" ><ProtoInterface><field name="radius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedLineSet DEF="Circ3DPointsIndex"><Coordinate containerField="coord" DEF="Circ3DPoints"></Coordinate>
</IndexedLineSet>
<Group><Script DEF="Circ2dToLineSet3d"><field name="radius" accessType="initializeOnly" type="SFFloat"></field>
<field name="circSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="circIndexSet3d" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="radius" protoField="radius"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
    if (radius < 0)
   {
      Browser.print ('[Circle2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');
   }


   numOfPoints = 100;
   differAng = 2*Math.PI/numOfPoints;

   for ( i=0 ; i<=numOfPoints ; i++)
   {
	circSet3d[i] = new SFVec3f ( radius*Math.cos(i*differAng), radius*Math.sin(i*differAng), 0.0 );
        circIndexSet3d[i] = i;
   }

} // initialize]]></Script>
<ROUTE fromField="circSet3d" fromNode="Circ2dToLineSet3d" toField="point" toNode="Circ3DPoints"></ROUTE>
<ROUTE fromField="circIndexSet3d" fromNode="Circ2dToLineSet3d" toField="set_coordIndex" toNode="Circ3DPointsIndex"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare79.name = "Circle2D";
let ProtoInterface80 = browser.currentScene.createNode("ProtoInterface");
let field81 = browser.currentScene.createNode("field");
field81.name = "radius";
field81.accessType = "initializeOnly";
field81.type = "SFFloat";
field81.value = "1";
ProtoInterface80.field = new MFNode();

ProtoInterface80.field[0] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "solid";
field82.accessType = "initializeOnly";
field82.type = "SFBool";
field82.value = "false";
ProtoInterface80.field[1] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "metadata";
field83.accessType = "inputOutput";
field83.appinfo = "Metadata node only";
field83.type = "SFNode";
//default NULL
ProtoInterface80.field[2] = field83;

ProtoDeclare79.protoInterface = ProtoInterface80;

let ProtoBody84 = browser.currentScene.createNode("ProtoBody");
let IndexedLineSet85 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet85.DEF = "Circ3DPointsIndex";
let Coordinate86 = browser.currentScene.createNode("Coordinate");
Coordinate86.DEF = "Circ3DPoints";
IndexedLineSet85.coord = Coordinate86;

ProtoBody84.children = new MFNode();

ProtoBody84.children[0] = IndexedLineSet85;

let Group87 = browser.currentScene.createNode("Group");
let Script88 = browser.currentScene.createNode("Script");
Script88.DEF = "Circ2dToLineSet3d";
let field89 = browser.currentScene.createNode("field");
field89.name = "radius";
field89.accessType = "initializeOnly";
field89.type = "SFFloat";
Script88.field = new MFNode();

Script88.field[0] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "circSet3d";
field90.accessType = "outputOnly";
field90.type = "MFVec3f";
Script88.field[1] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "circIndexSet3d";
field91.accessType = "outputOnly";
field91.type = "MFInt32";
Script88.field[2] = field91;

let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "radius";
connect93.protoField = "radius";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

Script88.iS = IS92;


Script88.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"    if (radius < 0)\n"+
"   {\n"+
"      Browser.print ('[Circle2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"\n"+
"   numOfPoints = 100;\n"+
"   differAng = 2*Math.PI/numOfPoints;\n"+
"\n"+
"   for ( i=0 ; i<=numOfPoints ; i++)\n"+
"   {\n"+
"	circSet3d[i] = new SFVec3f ( radius*Math.cos(i*differAng), radius*Math.sin(i*differAng), 0.0 );\n"+
"        circIndexSet3d[i] = i;\n"+
"   }\n"+
"\n"+
"} // initialize`)
Group87.children = new MFNode();

Group87.children[0] = Script88;

let ROUTE94 = browser.currentScene.createNode("ROUTE");
ROUTE94.fromField = "circSet3d";
ROUTE94.fromNode = "Circ2dToLineSet3d";
ROUTE94.toField = "point";
ROUTE94.toNode = "Circ3DPoints";
Group87.children[1] = ROUTE94;

let ROUTE95 = browser.currentScene.createNode("ROUTE");
ROUTE95.fromField = "circIndexSet3d";
ROUTE95.fromNode = "Circ2dToLineSet3d";
ROUTE95.toField = "set_coordIndex";
ROUTE95.toNode = "Circ3DPointsIndex";
Group87.children[2] = ROUTE95;

ProtoBody84.children[1] = Group87;

ProtoDeclare79.protoBody = ProtoBody84;

browser.currentScene.children[4] = ProtoDeclare79;

//====================
let ProtoDeclare96 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Disk2D" ><ProtoInterface><field name="innerRadius" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="outerRadius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="DiskPointsIndex"><Coordinate containerField="coord" DEF="Disk3DPoints"></Coordinate>
</IndexedFaceSet>
<Group><Script DEF="Disk2dToFaceSet3d"><field name="innerRadius" accessType="initializeOnly" type="SFFloat"></field>
<field name="outerRadius" accessType="initializeOnly" type="SFFloat"></field>
<field name="diskSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="diskIndexSet3d" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="innerRadius" protoField="innerRadius"></connect>
<connect nodeField="outerRadius" protoField="outerRadius"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   if (innerRadius < 0)
   {
      Browser.print ('[Disk2D] Warning:  invalid value, innerRadius=' + value + ' must instead be >= 0');
   }

   if (outerRadius < 0)
   {
      Browser.print ('[Disk2D] Warning:  invalid value, outerRadius=' + value + ' must instead be >= 0');
   }



   numOfPoints    = 100.0;
   diskSet3d      = new MFVec3f();
   diskIndexSet3d = new MFInt32();
   differAng = 2 * Math.PI/numOfPoints;


   for ( i=0 ; i<2*numOfPoints ; i++)
   {
        if ( i<numOfPoints)
	     diskSet3d[i] = new SFVec3f ( innerRadius*Math.cos(i*differAng), innerRadius*Math.sin(i*differAng), 0.0 );
        else
             diskSet3d[i] = new SFVec3f ( outerRadius*Math.cos((i-numOfPoints-1.0)*differAng), outerRadius*Math.sin((i-numOfPoints-1.0)*differAng), 0.0 );
   }


   k=0;
   for (i=0 ; i<numOfPoints ; i++)
   {
        diskIndexSet3d[k]   = i;
        diskIndexSet3d[k+1] = i + numOfPoints;
        diskIndexSet3d[k+2] = i + numOfPoints + 1;
        diskIndexSet3d[k+3]   = i;
        diskIndexSet3d[k+4] = -1;
        diskIndexSet3d[k+5] = i+1;
        diskIndexSet3d[k+6] = i ;
        diskIndexSet3d[k+7] = i + numOfPoints +1;
        diskIndexSet3d[k+8] = i +1;
        diskIndexSet3d[k+9] = -1;

        if (i == numOfPoints-1)
        {
        diskIndexSet3d[k]   = i;
        diskIndexSet3d[k+1] = i + numOfPoints;
        diskIndexSet3d[k+2] = numOfPoints;
        diskIndexSet3d[k+3]   = i;
        diskIndexSet3d[k+4] = -1;
        diskIndexSet3d[k+5] = 0;
        diskIndexSet3d[k+6] = i;
        diskIndexSet3d[k+7] = numOfPoints;
        diskIndexSet3d[k+8] = 0;
        diskIndexSet3d[k+9] = -1;
        }
   k=k+10;
   }

} // initialize]]></Script>
<ROUTE fromField="diskSet3d" fromNode="Disk2dToFaceSet3d" toField="point" toNode="Disk3DPoints"></ROUTE>
<ROUTE fromField="diskIndexSet3d" fromNode="Disk2dToFaceSet3d" toField="set_coordIndex" toNode="DiskPointsIndex"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare96.name = "Disk2D";
let ProtoInterface97 = browser.currentScene.createNode("ProtoInterface");
let field98 = browser.currentScene.createNode("field");
field98.name = "innerRadius";
field98.accessType = "initializeOnly";
field98.type = "SFFloat";
field98.value = "0";
ProtoInterface97.field = new MFNode();

ProtoInterface97.field[0] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "outerRadius";
field99.accessType = "initializeOnly";
field99.type = "SFFloat";
field99.value = "1";
ProtoInterface97.field[1] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "solid";
field100.accessType = "initializeOnly";
field100.type = "SFBool";
field100.value = "false";
ProtoInterface97.field[2] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "metadata";
field101.accessType = "inputOutput";
field101.appinfo = "Metadata node only";
field101.type = "SFNode";
//default NULL
ProtoInterface97.field[3] = field101;

ProtoDeclare96.protoInterface = ProtoInterface97;

let ProtoBody102 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet103 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet103.DEF = "DiskPointsIndex";
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.DEF = "Disk3DPoints";
IndexedFaceSet103.coord = Coordinate104;

ProtoBody102.children = new MFNode();

ProtoBody102.children[0] = IndexedFaceSet103;

let Group105 = browser.currentScene.createNode("Group");
let Script106 = browser.currentScene.createNode("Script");
Script106.DEF = "Disk2dToFaceSet3d";
let field107 = browser.currentScene.createNode("field");
field107.name = "innerRadius";
field107.accessType = "initializeOnly";
field107.type = "SFFloat";
Script106.field = new MFNode();

Script106.field[0] = field107;

let field108 = browser.currentScene.createNode("field");
field108.name = "outerRadius";
field108.accessType = "initializeOnly";
field108.type = "SFFloat";
Script106.field[1] = field108;

let field109 = browser.currentScene.createNode("field");
field109.name = "diskSet3d";
field109.accessType = "outputOnly";
field109.type = "MFVec3f";
Script106.field[2] = field109;

let field110 = browser.currentScene.createNode("field");
field110.name = "diskIndexSet3d";
field110.accessType = "outputOnly";
field110.type = "MFInt32";
Script106.field[3] = field110;

let IS111 = browser.currentScene.createNode("IS");
let connect112 = browser.currentScene.createNode("connect");
connect112.nodeField = "innerRadius";
connect112.protoField = "innerRadius";
IS111.connect = new MFNode();

IS111.connect[0] = connect112;

let connect113 = browser.currentScene.createNode("connect");
connect113.nodeField = "outerRadius";
connect113.protoField = "outerRadius";
IS111.connect[1] = connect113;

Script106.iS = IS111;


Script106.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   if (innerRadius < 0)\n"+
"   {\n"+
"      Browser.print ('[Disk2D] Warning:  invalid value, innerRadius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"   if (outerRadius < 0)\n"+
"   {\n"+
"      Browser.print ('[Disk2D] Warning:  invalid value, outerRadius=' + value + ' must instead be >= 0');\n"+
"   }\n"+
"\n"+
"\n"+
"\n"+
"   numOfPoints    = 100.0;\n"+
"   diskSet3d      = new MFVec3f();\n"+
"   diskIndexSet3d = new MFInt32();\n"+
"   differAng = 2 * Math.PI/numOfPoints;\n"+
"\n"+
"\n"+
"   for ( i=0 ; i<2*numOfPoints ; i++)\n"+
"   {\n"+
"        if ( i<numOfPoints)\n"+
"	     diskSet3d[i] = new SFVec3f ( innerRadius*Math.cos(i*differAng), innerRadius*Math.sin(i*differAng), 0.0 );\n"+
"        else\n"+
"             diskSet3d[i] = new SFVec3f ( outerRadius*Math.cos((i-numOfPoints-1.0)*differAng), outerRadius*Math.sin((i-numOfPoints-1.0)*differAng), 0.0 );\n"+
"   }\n"+
"\n"+
"\n"+
"   k=0;\n"+
"   for (i=0 ; i<numOfPoints ; i++)\n"+
"   {\n"+
"        diskIndexSet3d[k]   = i;\n"+
"        diskIndexSet3d[k+1] = i + numOfPoints;\n"+
"        diskIndexSet3d[k+2] = i + numOfPoints + 1;\n"+
"        diskIndexSet3d[k+3]   = i;\n"+
"        diskIndexSet3d[k+4] = -1;\n"+
"        diskIndexSet3d[k+5] = i+1;\n"+
"        diskIndexSet3d[k+6] = i ;\n"+
"        diskIndexSet3d[k+7] = i + numOfPoints +1;\n"+
"        diskIndexSet3d[k+8] = i +1;\n"+
"        diskIndexSet3d[k+9] = -1;\n"+
"\n"+
"        if (i == numOfPoints-1)\n"+
"        {\n"+
"        diskIndexSet3d[k]   = i;\n"+
"        diskIndexSet3d[k+1] = i + numOfPoints;\n"+
"        diskIndexSet3d[k+2] = numOfPoints;\n"+
"        diskIndexSet3d[k+3]   = i;\n"+
"        diskIndexSet3d[k+4] = -1;\n"+
"        diskIndexSet3d[k+5] = 0;\n"+
"        diskIndexSet3d[k+6] = i;\n"+
"        diskIndexSet3d[k+7] = numOfPoints;\n"+
"        diskIndexSet3d[k+8] = 0;\n"+
"        diskIndexSet3d[k+9] = -1;\n"+
"        }\n"+
"   k=k+10;\n"+
"   }\n"+
"\n"+
"} // initialize`)
Group105.children = new MFNode();

Group105.children[0] = Script106;

let ROUTE114 = browser.currentScene.createNode("ROUTE");
ROUTE114.fromField = "diskSet3d";
ROUTE114.fromNode = "Disk2dToFaceSet3d";
ROUTE114.toField = "point";
ROUTE114.toNode = "Disk3DPoints";
Group105.children[1] = ROUTE114;

let ROUTE115 = browser.currentScene.createNode("ROUTE");
ROUTE115.fromField = "diskIndexSet3d";
ROUTE115.fromNode = "Disk2dToFaceSet3d";
ROUTE115.toField = "set_coordIndex";
ROUTE115.toNode = "DiskPointsIndex";
Group105.children[2] = ROUTE115;

ProtoBody102.children[1] = Group105;

ProtoDeclare96.protoBody = ProtoBody102;

browser.currentScene.children[5] = ProtoDeclare96;

//====================
let ProtoDeclare116 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Polyline2D" ><ProtoInterface><field name="lineSegments" accessType="initializeOnly" type="MFVec2f"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"></field>
</ProtoInterface>
<ProtoBody><IndexedLineSet DEF="LinesSegmentsIndexPoints"><Coordinate containerField="coord" DEF="LineSegments3DPoints"></Coordinate>
</IndexedLineSet>
<Group><Script DEF="LineSegments2dToLineSet3d"><field name="lineSegments" accessType="initializeOnly" type="MFVec2f"></field>
<field name="lineSegments3D" accessType="outputOnly" type="MFVec3f"></field>
<field name="lineSegmentsIndex" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="lineSegments" protoField="lineSegments"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   for ( i=0 ; i<lineSegments.length ; i++)
   {
          lineSegments3D[i] = new SFVec3f ( lineSegments[i].x, lineSegments[i].y, 0.0 );
          lineSegmentsIndex[i] = i;
   }

     lineSegmentsIndex[i] = -1;

} // initialize]]></Script>
<ROUTE fromField="lineSegments3D" fromNode="LineSegments2dToLineSet3d" toField="point" toNode="LineSegments3DPoints"></ROUTE>
<ROUTE fromField="lineSegmentsIndex" fromNode="LineSegments2dToLineSet3d" toField="set_coordIndex" toNode="LinesSegmentsIndexPoints"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare116.name = "Polyline2D";
let ProtoInterface117 = browser.currentScene.createNode("ProtoInterface");
let field118 = browser.currentScene.createNode("field");
field118.name = "lineSegments";
field118.accessType = "initializeOnly";
field118.type = "MFVec2f";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "solid";
field119.accessType = "initializeOnly";
field119.type = "SFBool";
field119.value = "false";
ProtoInterface117.field[1] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "metadata";
field120.accessType = "inputOutput";
field120.appinfo = "Metadata node only";
field120.type = "SFNode";
ProtoInterface117.field[2] = field120;

ProtoDeclare116.protoInterface = ProtoInterface117;

let ProtoBody121 = browser.currentScene.createNode("ProtoBody");
let IndexedLineSet122 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet122.DEF = "LinesSegmentsIndexPoints";
let Coordinate123 = browser.currentScene.createNode("Coordinate");
Coordinate123.DEF = "LineSegments3DPoints";
IndexedLineSet122.coord = Coordinate123;

ProtoBody121.children = new MFNode();

ProtoBody121.children[0] = IndexedLineSet122;

let Group124 = browser.currentScene.createNode("Group");
let Script125 = browser.currentScene.createNode("Script");
Script125.DEF = "LineSegments2dToLineSet3d";
let field126 = browser.currentScene.createNode("field");
field126.name = "lineSegments";
field126.accessType = "initializeOnly";
field126.type = "MFVec2f";
Script125.field = new MFNode();

Script125.field[0] = field126;

let field127 = browser.currentScene.createNode("field");
field127.name = "lineSegments3D";
field127.accessType = "outputOnly";
field127.type = "MFVec3f";
Script125.field[1] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "lineSegmentsIndex";
field128.accessType = "outputOnly";
field128.type = "MFInt32";
Script125.field[2] = field128;

let IS129 = browser.currentScene.createNode("IS");
let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "lineSegments";
connect130.protoField = "lineSegments";
IS129.connect = new MFNode();

IS129.connect[0] = connect130;

Script125.iS = IS129;


Script125.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   for ( i=0 ; i<lineSegments.length ; i++)\n"+
"   {\n"+
"          lineSegments3D[i] = new SFVec3f ( lineSegments[i].x, lineSegments[i].y, 0.0 );\n"+
"          lineSegmentsIndex[i] = i;\n"+
"   }\n"+
"\n"+
"     lineSegmentsIndex[i] = -1;\n"+
"\n"+
"} // initialize`)
Group124.children = new MFNode();

Group124.children[0] = Script125;

let ROUTE131 = browser.currentScene.createNode("ROUTE");
ROUTE131.fromField = "lineSegments3D";
ROUTE131.fromNode = "LineSegments2dToLineSet3d";
ROUTE131.toField = "point";
ROUTE131.toNode = "LineSegments3DPoints";
Group124.children[1] = ROUTE131;

let ROUTE132 = browser.currentScene.createNode("ROUTE");
ROUTE132.fromField = "lineSegmentsIndex";
ROUTE132.fromNode = "LineSegments2dToLineSet3d";
ROUTE132.toField = "set_coordIndex";
ROUTE132.toNode = "LinesSegmentsIndexPoints";
Group124.children[2] = ROUTE132;

ProtoBody121.children[1] = Group124;

ProtoDeclare116.protoBody = ProtoBody121;

browser.currentScene.children[6] = ProtoDeclare116;

//====================
let ProtoDeclare133 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Polypoint2D" ><ProtoInterface><field name="point" accessType="initializeOnly" type="MFVec2f"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><PointSet><Coordinate containerField="coord" DEF="Points3D"></Coordinate>
</PointSet>
<Group><Script DEF="Points2dToLineSet3d"><field name="point" accessType="initializeOnly" type="MFVec2f"></field>
<field name="points3D" accessType="outputOnly" type="MFVec3f"></field>
<IS><connect nodeField="point" protoField="point"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{

   for ( i=0 ; i<point.length ; i++)
   {
          points3D[i] = new SFVec3f ( point[i].x, point[i].y, 0.0 );
   }

} // initialize]]></Script>
<ROUTE fromField="points3D" fromNode="Points2dToLineSet3d" toField="point" toNode="Points3D"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare133.name = "Polypoint2D";
let ProtoInterface134 = browser.currentScene.createNode("ProtoInterface");
let field135 = browser.currentScene.createNode("field");
field135.name = "point";
field135.accessType = "initializeOnly";
field135.type = "MFVec2f";
ProtoInterface134.field = new MFNode();

ProtoInterface134.field[0] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "metadata";
field136.accessType = "inputOutput";
field136.appinfo = "Metadata node only";
field136.type = "SFNode";
//default NULL
ProtoInterface134.field[1] = field136;

ProtoDeclare133.protoInterface = ProtoInterface134;

let ProtoBody137 = browser.currentScene.createNode("ProtoBody");
let PointSet138 = browser.currentScene.createNode("PointSet");
let Coordinate139 = browser.currentScene.createNode("Coordinate");
Coordinate139.DEF = "Points3D";
PointSet138.coord = Coordinate139;

ProtoBody137.children = new MFNode();

ProtoBody137.children[0] = PointSet138;

let Group140 = browser.currentScene.createNode("Group");
let Script141 = browser.currentScene.createNode("Script");
Script141.DEF = "Points2dToLineSet3d";
let field142 = browser.currentScene.createNode("field");
field142.name = "point";
field142.accessType = "initializeOnly";
field142.type = "MFVec2f";
Script141.field = new MFNode();

Script141.field[0] = field142;

let field143 = browser.currentScene.createNode("field");
field143.name = "points3D";
field143.accessType = "outputOnly";
field143.type = "MFVec3f";
Script141.field[1] = field143;

let IS144 = browser.currentScene.createNode("IS");
let connect145 = browser.currentScene.createNode("connect");
connect145.nodeField = "point";
connect145.protoField = "point";
IS144.connect = new MFNode();

IS144.connect[0] = connect145;

Script141.iS = IS144;


Script141.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"\n"+
"   for ( i=0 ; i<point.length ; i++)\n"+
"   {\n"+
"          points3D[i] = new SFVec3f ( point[i].x, point[i].y, 0.0 );\n"+
"   }\n"+
"\n"+
"} // initialize`)
Group140.children = new MFNode();

Group140.children[0] = Script141;

let ROUTE146 = browser.currentScene.createNode("ROUTE");
ROUTE146.fromField = "points3D";
ROUTE146.fromNode = "Points2dToLineSet3d";
ROUTE146.toField = "point";
ROUTE146.toNode = "Points3D";
Group140.children[1] = ROUTE146;

ProtoBody137.children[1] = Group140;

ProtoDeclare133.protoBody = ProtoBody137;

browser.currentScene.children[7] = ProtoDeclare133;

//====================
let ProtoDeclare147 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Rectangle2D" appinfo="Default filled matching default FillProperties filled=true." ><ProtoInterface><field name="size" accessType="initializeOnly" type="SFVec2f" value="2 2"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet coordIndex="0 1 2 0 -1 2 3 0 2" solid="false"><Coordinate containerField="coord" DEF="RectanglePoints"></Coordinate>
</IndexedFaceSet>
<Group><Script DEF="Rect2dToFaceSet3d"><field name="size" accessType="initializeOnly" type="SFVec2f"></field>
<field name="pointSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="fillNoFillSelection" accessType="outputOnly" type="SFInt32"></field>
<IS><connect nodeField="size" protoField="size"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   xDim = size[0];
   yDim = size[1];

   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );
   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );
   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );
   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );

} // initialize]]></Script>
<ROUTE fromField="pointSet3d" fromNode="Rect2dToFaceSet3d" toField="point" toNode="RectanglePoints"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare147.name = "Rectangle2D";
ProtoDeclare147.appinfo = "Default filled matching default FillProperties filled=true.";
let ProtoInterface148 = browser.currentScene.createNode("ProtoInterface");
let field149 = browser.currentScene.createNode("field");
field149.name = "size";
field149.accessType = "initializeOnly";
field149.type = "SFVec2f";
field149.value = "2 2";
ProtoInterface148.field = new MFNode();

ProtoInterface148.field[0] = field149;

let field150 = browser.currentScene.createNode("field");
field150.name = "solid";
field150.accessType = "initializeOnly";
field150.type = "SFBool";
field150.value = "false";
ProtoInterface148.field[1] = field150;

let field151 = browser.currentScene.createNode("field");
field151.name = "metadata";
field151.accessType = "inputOutput";
field151.appinfo = "Metadata node only";
field151.type = "SFNode";
//default NULL
ProtoInterface148.field[2] = field151;

ProtoDeclare147.protoInterface = ProtoInterface148;

let ProtoBody152 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet153 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet153.coordIndex = new MFInt32(new int[0,1,2,0,-1,2,3,0,2]);
IndexedFaceSet153.solid = False;
let Coordinate154 = browser.currentScene.createNode("Coordinate");
Coordinate154.DEF = "RectanglePoints";
IndexedFaceSet153.coord = Coordinate154;

ProtoBody152.children = new MFNode();

ProtoBody152.children[0] = IndexedFaceSet153;

let Group155 = browser.currentScene.createNode("Group");
let Script156 = browser.currentScene.createNode("Script");
Script156.DEF = "Rect2dToFaceSet3d";
let field157 = browser.currentScene.createNode("field");
field157.name = "size";
field157.accessType = "initializeOnly";
field157.type = "SFVec2f";
Script156.field = new MFNode();

Script156.field[0] = field157;

let field158 = browser.currentScene.createNode("field");
field158.name = "pointSet3d";
field158.accessType = "outputOnly";
field158.type = "MFVec3f";
Script156.field[1] = field158;

let field159 = browser.currentScene.createNode("field");
field159.name = "fillNoFillSelection";
field159.accessType = "outputOnly";
field159.type = "SFInt32";
Script156.field[2] = field159;

let IS160 = browser.currentScene.createNode("IS");
let connect161 = browser.currentScene.createNode("connect");
connect161.nodeField = "size";
connect161.protoField = "size";
IS160.connect = new MFNode();

IS160.connect[0] = connect161;

Script156.iS = IS160;


Script156.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   xDim = size[0];\n"+
"   yDim = size[1];\n"+
"\n"+
"   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"\n"+
"} // initialize`)
Group155.children = new MFNode();

Group155.children[0] = Script156;

let ROUTE162 = browser.currentScene.createNode("ROUTE");
ROUTE162.fromField = "pointSet3d";
ROUTE162.fromNode = "Rect2dToFaceSet3d";
ROUTE162.toField = "point";
ROUTE162.toNode = "RectanglePoints";
Group155.children[1] = ROUTE162;

ProtoBody152.children[1] = Group155;

ProtoDeclare147.protoBody = ProtoBody152;

browser.currentScene.children[8] = ProtoDeclare147;

//Rectangle2DUnfilled also provided since FillProperties not available in VRML 97
let ProtoDeclare163 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Rectangle2DUnfilled" ><ProtoInterface><field name="size" accessType="initializeOnly" type="SFVec2f" value="2 2"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedLineSet coordIndex="0 1 2 3 0"><Coordinate containerField="coord" DEF="RectanglePointsLine"></Coordinate>
</IndexedLineSet>
<Group><Script DEF="Rect2dToLineSet3d"><field name="size" accessType="initializeOnly" type="SFVec2f"></field>
<field name="pointSet3d" accessType="outputOnly" type="MFVec3f"></field>
<field name="fillNoFillSelection" accessType="outputOnly" type="SFInt32"></field>
<IS><connect nodeField="size" protoField="size"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   xDim = size[0];
   yDim = size[1];

   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );
   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );
   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );
   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );

} // initialize]]></Script>
<ROUTE fromField="pointSet3d" fromNode="Rect2dToLineSet3d" toField="point" toNode="RectanglePointsLine"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare163.name = "Rectangle2DUnfilled";
let ProtoInterface164 = browser.currentScene.createNode("ProtoInterface");
let field165 = browser.currentScene.createNode("field");
field165.name = "size";
field165.accessType = "initializeOnly";
field165.type = "SFVec2f";
field165.value = "2 2";
ProtoInterface164.field = new MFNode();

ProtoInterface164.field[0] = field165;

let field166 = browser.currentScene.createNode("field");
field166.name = "solid";
field166.accessType = "initializeOnly";
field166.type = "SFBool";
field166.value = "false";
ProtoInterface164.field[1] = field166;

let field167 = browser.currentScene.createNode("field");
field167.name = "metadata";
field167.accessType = "inputOutput";
field167.appinfo = "Metadata node only";
field167.type = "SFNode";
//default NULL
ProtoInterface164.field[2] = field167;

ProtoDeclare163.protoInterface = ProtoInterface164;

let ProtoBody168 = browser.currentScene.createNode("ProtoBody");
let IndexedLineSet169 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet169.coordIndex = new MFInt32(new int[0,1,2,3,0]);
let Coordinate170 = browser.currentScene.createNode("Coordinate");
Coordinate170.DEF = "RectanglePointsLine";
IndexedLineSet169.coord = Coordinate170;

ProtoBody168.children = new MFNode();

ProtoBody168.children[0] = IndexedLineSet169;

let Group171 = browser.currentScene.createNode("Group");
let Script172 = browser.currentScene.createNode("Script");
Script172.DEF = "Rect2dToLineSet3d";
let field173 = browser.currentScene.createNode("field");
field173.name = "size";
field173.accessType = "initializeOnly";
field173.type = "SFVec2f";
Script172.field = new MFNode();

Script172.field[0] = field173;

let field174 = browser.currentScene.createNode("field");
field174.name = "pointSet3d";
field174.accessType = "outputOnly";
field174.type = "MFVec3f";
Script172.field[1] = field174;

let field175 = browser.currentScene.createNode("field");
field175.name = "fillNoFillSelection";
field175.accessType = "outputOnly";
field175.type = "SFInt32";
Script172.field[2] = field175;

let IS176 = browser.currentScene.createNode("IS");
let connect177 = browser.currentScene.createNode("connect");
connect177.nodeField = "size";
connect177.protoField = "size";
IS176.connect = new MFNode();

IS176.connect[0] = connect177;

Script172.iS = IS176;


Script172.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   xDim = size[0];\n"+
"   yDim = size[1];\n"+
"\n"+
"   pointSet3d[0] = new SFVec3f ( (-xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"   pointSet3d[1] = new SFVec3f ( (-xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[2] = new SFVec3f ( (xDim / 2.0), (-yDim / 2.0), 0.0 );\n"+
"   pointSet3d[3] = new SFVec3f ( (xDim / 2.0), (yDim / 2.0), 0.0 );\n"+
"\n"+
"} // initialize`)
Group171.children = new MFNode();

Group171.children[0] = Script172;

let ROUTE178 = browser.currentScene.createNode("ROUTE");
ROUTE178.fromField = "pointSet3d";
ROUTE178.fromNode = "Rect2dToLineSet3d";
ROUTE178.toField = "point";
ROUTE178.toNode = "RectanglePointsLine";
Group171.children[1] = ROUTE178;

ProtoBody168.children[1] = Group171;

ProtoDeclare163.protoBody = ProtoBody168;

browser.currentScene.children[9] = ProtoDeclare163;

//====================
let ProtoDeclare179 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="TriangleSet2D" ><ProtoInterface><field name="vertices" accessType="initializeOnly" type="MFVec2f"></field>
<field name="solid" accessType="initializeOnly" type="SFBool" value="false"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"><!--default NULL--></field>
</ProtoInterface>
<ProtoBody><IndexedFaceSet DEF="TriangleSetIndexPoints" solid="false"><Coordinate containerField="coord" DEF="TriangleSet3DPoints"></Coordinate>
</IndexedFaceSet>
<Group><Script DEF="TriangleSet2dToLineSet3d"><field name="vertices" accessType="initializeOnly" type="MFVec2f"></field>
<field name="triangleSet3D" accessType="outputOnly" type="MFVec3f"></field>
<field name="triangleSetIndex" accessType="outputOnly" type="MFInt32"></field>
<IS><connect nodeField="vertices" protoField="vertices"></connect>
</IS>
<![CDATA[ecmascript:

function initialize()
{
   numbOfTriangles = Math.floor(vertices.length/3);

   for ( i=0 ; i<3*numbOfTriangles ; i++)
   {
          triangleSet3D[i] = new SFVec3f ( vertices[i].x, vertices[i].y, 0.0 );
   }

   k=0;
   for (i=0; i<numbOfTriangles; i++)
   {
        triangleSetIndex[k] = k - i ;
        triangleSetIndex[k+1] = k - i + 1 ;
        triangleSetIndex[k+2] = k - i + 2 ;
        triangleSetIndex[k+3] = -1 ;

        k=k+4;
    }

} // initialize]]></Script>
<ROUTE fromField="triangleSet3D" fromNode="TriangleSet2dToLineSet3d" toField="point" toNode="TriangleSet3DPoints"></ROUTE>
<ROUTE fromField="triangleSetIndex" fromNode="TriangleSet2dToLineSet3d" toField="set_coordIndex" toNode="TriangleSetIndexPoints"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare179.name = "TriangleSet2D";
let ProtoInterface180 = browser.currentScene.createNode("ProtoInterface");
let field181 = browser.currentScene.createNode("field");
field181.name = "vertices";
field181.accessType = "initializeOnly";
field181.type = "MFVec2f";
ProtoInterface180.field = new MFNode();

ProtoInterface180.field[0] = field181;

let field182 = browser.currentScene.createNode("field");
field182.name = "solid";
field182.accessType = "initializeOnly";
field182.type = "SFBool";
field182.value = "false";
ProtoInterface180.field[1] = field182;

let field183 = browser.currentScene.createNode("field");
field183.name = "metadata";
field183.accessType = "inputOutput";
field183.appinfo = "Metadata node only";
field183.type = "SFNode";
//default NULL
ProtoInterface180.field[2] = field183;

ProtoDeclare179.protoInterface = ProtoInterface180;

let ProtoBody184 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet185 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet185.DEF = "TriangleSetIndexPoints";
IndexedFaceSet185.solid = False;
let Coordinate186 = browser.currentScene.createNode("Coordinate");
Coordinate186.DEF = "TriangleSet3DPoints";
IndexedFaceSet185.coord = Coordinate186;

ProtoBody184.children = new MFNode();

ProtoBody184.children[0] = IndexedFaceSet185;

let Group187 = browser.currentScene.createNode("Group");
let Script188 = browser.currentScene.createNode("Script");
Script188.DEF = "TriangleSet2dToLineSet3d";
let field189 = browser.currentScene.createNode("field");
field189.name = "vertices";
field189.accessType = "initializeOnly";
field189.type = "MFVec2f";
Script188.field = new MFNode();

Script188.field[0] = field189;

let field190 = browser.currentScene.createNode("field");
field190.name = "triangleSet3D";
field190.accessType = "outputOnly";
field190.type = "MFVec3f";
Script188.field[1] = field190;

let field191 = browser.currentScene.createNode("field");
field191.name = "triangleSetIndex";
field191.accessType = "outputOnly";
field191.type = "MFInt32";
Script188.field[2] = field191;

let IS192 = browser.currentScene.createNode("IS");
let connect193 = browser.currentScene.createNode("connect");
connect193.nodeField = "vertices";
connect193.protoField = "vertices";
IS192.connect = new MFNode();

IS192.connect[0] = connect193;

Script188.iS = IS192;


Script188.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"   numbOfTriangles = Math.floor(vertices.length/3);\n"+
"\n"+
"   for ( i=0 ; i<3*numbOfTriangles ; i++)\n"+
"   {\n"+
"          triangleSet3D[i] = new SFVec3f ( vertices[i].x, vertices[i].y, 0.0 );\n"+
"   }\n"+
"\n"+
"   k=0;\n"+
"   for (i=0; i<numbOfTriangles; i++)\n"+
"   {\n"+
"        triangleSetIndex[k] = k - i ;\n"+
"        triangleSetIndex[k+1] = k - i + 1 ;\n"+
"        triangleSetIndex[k+2] = k - i + 2 ;\n"+
"        triangleSetIndex[k+3] = -1 ;\n"+
"\n"+
"        k=k+4;\n"+
"    }\n"+
"\n"+
"} // initialize`)
Group187.children = new MFNode();

Group187.children[0] = Script188;

let ROUTE194 = browser.currentScene.createNode("ROUTE");
ROUTE194.fromField = "triangleSet3D";
ROUTE194.fromNode = "TriangleSet2dToLineSet3d";
ROUTE194.toField = "point";
ROUTE194.toNode = "TriangleSet3DPoints";
Group187.children[1] = ROUTE194;

let ROUTE195 = browser.currentScene.createNode("ROUTE");
ROUTE195.fromField = "triangleSetIndex";
ROUTE195.fromNode = "TriangleSet2dToLineSet3d";
ROUTE195.toField = "set_coordIndex";
ROUTE195.toNode = "TriangleSetIndexPoints";
Group187.children[2] = ROUTE195;

ProtoBody184.children[1] = Group187;

ProtoDeclare179.protoBody = ProtoBody184;

browser.currentScene.children[10] = ProtoDeclare179;

//====================
let Background196 = browser.currentScene.createNode("Background");
Background196.groundColor = new MFColor(new float[0.25,0.25,0.25]);
Background196.skyColor = new MFColor(new float[0.25,0.25,0.25]);
browser.currentScene.children[11] = Background196;

let Anchor197 = browser.currentScene.createNode("Anchor");
Anchor197.DEF = "LinkToExamples";
Anchor197.description = "link to examples";
Anchor197.url = new MFString(new java.lang.String["Geometry2dComponentExternProtos.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExternProtos.x3d","Geometry2dComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.wrl"]);
let Shape198 = browser.currentScene.createNode("Shape");
let Appearance199 = browser.currentScene.createNode("Appearance");
let Material200 = browser.currentScene.createNode("Material");
Material200.diffuseColor = new SFColor(new float[0.8,0.6,0.2]);
Appearance199.material = Material200;

Shape198.appearance = Appearance199;

let Text201 = browser.currentScene.createNode("Text");
Text201.string = new MFString(new java.lang.String["Geometry2dComponentPrototypes","is a developmental file.","Click this text to view","Geometry2dComponentExamples"]);
let FontStyle202 = browser.currentScene.createNode("FontStyle");
FontStyle202.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle202.size = 0.75;
Text201.fontStyle = FontStyle202;

Shape198.geometry = Text201;

Anchor197.children = new MFNode();

Anchor197.children[0] = Shape198;

browser.currentScene.children[12] = Anchor197;

