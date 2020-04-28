let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.1";
//====================
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Arc2dComponentPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Arc2D" ><ProtoInterface><field name="startAngle" accessType="initializeOnly" type="SFFloat" value="0"></field>
<field name="endAngle" accessType="initializeOnly" type="SFFloat" value="1.5707963265"></field>
<field name="radius" accessType="initializeOnly" type="SFFloat" value="1"></field>
<field name="metadata" accessType="inputOutput" appinfo="Metadata node only" type="SFNode"></field>
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
      Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)');
   }

   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))
   {
      Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)');
   }

   // equal startAngle, endAngle means draw full circle.
   // high out-of-range endAngle is OK for local computation.
   if (startAngle >= endAngle)
      endAngle += (2 * Math.PI);

   differAng = Math.abs((endAngle - startAngle))/numOfPoints;

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
"      Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)');\n"+
"   }\n"+
"\n"+
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))\n"+
"   {\n"+
"      Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)');\n"+
"   }\n"+
"\n"+
"   // equal startAngle, endAngle means draw full circle.\n"+
"   // high out-of-range endAngle is OK for local computation.\n"+
"   if (startAngle >= endAngle)\n"+
"      endAngle += (2 * Math.PI);\n"+
"\n"+
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;\n"+
"\n"+
"   for (i = 0; i <= numOfPoints; i++)\n"+
"   {\n"+
"      arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);\n"+
"      arcIndexSet3d[i] = i;\n"+
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

