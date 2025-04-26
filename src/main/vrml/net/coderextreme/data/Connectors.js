const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
scene.addMetaData("comment", "World of Titania");
scene.addMetaData("created", "Fri, 04 Sep 2015 10:19:01 GMT");
scene.addMetaData("creator", "Holger Seelig");
scene.addMetaData("generator", "Titania V3.0.4, http://titania.create3000.de");
scene.addMetaData("identifier", "file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d");
scene.addMetaData("modified", "Tue, 25 Jul 2017 09:42:17 GMT");
scene.addMetaData("title", "Connectors");
await browser .loadComponents (scene);
let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface12.getField("cornerRadius").setValue("1");
ProtoInterface11YYY.field = new X3D.MFNode();

ProtoInterface13.getField("size").setValue("2 2");
ProtoInterface11YYY.field = new X3D.MFNode();

ProtoInterface14.getField("solid").setValue("true");
ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody15 = browser.currentScene.createNode("ProtoBody");
let IndexedFaceSet16 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet16.DEF = "Geometry";
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "solid";
connect18.protoField = "solid";
IS17YYY.connect = new X3D.MFNode();

IS17ZZZ.connect[0] = connect18;

iS = IS17;

let Coordinate19 = browser.currentScene.createNode("Coordinate");
coord = Coordinate19;

ProtoBody15YYY.children = new X3D.MFNode();

ProtoBody15ZZZ.children[0] = IndexedFaceSet16;

let Script20 = browser.currentScene.createNode("Script");
Script20.DEF = "RoundedRectangle2D";
Script20.directOutput = True;
Script21.getField("cornerDimension").setValue("10");
Script20YYY.field = new X3D.MFNode();

Script22.getField("cornerRadius")Script20YYY.field = new X3D.MFNode();

Script23.getField("size")Script20YYY.field = new X3D.MFNode();

Script24.getField("geometry")let IndexedFaceSet25 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet25.USE = "Geometry";
field24YYY.children = new X3D.MFNode();

field24ZZZ.children[0] = IndexedFaceSet25;

Script20YYY.field = new X3D.MFNode();

let IS26 = browser.currentScene.createNode("IS");
let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "cornerRadius";
connect27.protoField = "cornerRadius";
IS26YYY.connect = new X3D.MFNode();

IS26ZZZ.connect[0] = connect27;

let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "size";
connect28.protoField = "size";
IS26ZZZ.connect[1] = connect28;

iS = IS26;


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
ProtoBody15ZZZ.children[1] = Script20;

protoBody = ProtoBody15;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ProtoDeclare10;

let ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface31.getField("fillColor").setValue("0.1 0.1 0.1");
ProtoInterface30YYY.field = new X3D.MFNode();

ProtoInterface32.getField("lineColor").setValue("0.4 0.4 0.4");
ProtoInterface30YYY.field = new X3D.MFNode();

ProtoInterface33.getField("linewidthScaleFactor").setValue("1");
ProtoInterface30YYY.field = new X3D.MFNode();

ProtoInterface34.getField("geometry")ProtoInterface30YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface30;

let ProtoBody35 = browser.currentScene.createNode("ProtoBody");
let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "Shape";
let Shape37 = browser.currentScene.createNode("Shape");
let IS38 = browser.currentScene.createNode("IS");
let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "geometry";
connect39.protoField = "geometry";
IS38YYY.connect = new X3D.MFNode();

IS38ZZZ.connect[0] = connect39;

iS = IS38;

let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
let IS42 = browser.currentScene.createNode("IS");
let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "diffuseColor";
connect43.protoField = "fillColor";
IS42YYY.connect = new X3D.MFNode();

IS42ZZZ.connect[0] = connect43;

iS = IS42;

material = Material41;

appearance = Appearance40;

Transform36YYY.child = new X3D.undefined();

Transform36ZZZ.child[0] = Shape37;

let Shape44 = browser.currentScene.createNode("Shape");
let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "geometry";
connect46.protoField = "geometry";
IS45YYY.connect = new X3D.MFNode();

IS45ZZZ.connect[0] = connect46;

iS = IS45;

let Appearance47 = browser.currentScene.createNode("Appearance");
let FillProperties48 = browser.currentScene.createNode("FillProperties");
FillProperties48.filled = False;
FillProperties48.hatched = False;
fillProperties = FillProperties48;

let LineProperties49 = browser.currentScene.createNode("LineProperties");
let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "linewidthScaleFactor";
connect51.protoField = "linewidthScaleFactor";
IS50YYY.connect = new X3D.MFNode();

IS50ZZZ.connect[0] = connect51;

iS = IS50;

lineProperties = LineProperties49;

let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new X3D.SFColor([0,0,0]);
let IS53 = browser.currentScene.createNode("IS");
let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "emissiveColor";
connect54.protoField = "lineColor";
IS53YYY.connect = new X3D.MFNode();

IS53ZZZ.connect[0] = connect54;

iS = IS53;

material = Material52;

appearance = Appearance47;

Transform36ZZZ.child[1] = Shape44;

ProtoBody35YYY.children = new X3D.MFNode();

ProtoBody35ZZZ.children[0] = Transform36;

protoBody = ProtoBody35;

browser.currentScene.children[1] = ProtoDeclare29;

let ProtoDeclare55 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface57.getField("translation")ProtoInterface56YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface56;

let ProtoBody58 = browser.currentScene.createNode("ProtoBody");
let Group59 = browser.currentScene.createNode("Group");
let PlaneSensor60 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor60.DEF = "PlaneSensor";
Group59YYY.children = new X3D.MFNode();

Group59ZZZ.children[0] = PlaneSensor60;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.DEF = "Node";
let IS62 = browser.currentScene.createNode("IS");
let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "translation";
connect63.protoField = "translation";
IS62YYY.connect = new X3D.MFNode();

IS62ZZZ.connect[0] = connect63;

iS = IS62;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "Widget";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "geometry";
let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "RoundedRectangle2D";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "cornerRadius";
fieldValue67.value = "0.12";
ProtoInstance66YYY.fieldValue = new X3D.MFNode();

ProtoInstance66ZZZ.fieldValue[0] = fieldValue67;

let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "size";
fieldValue68.value = "2 1";
ProtoInstance66ZZZ.fieldValue[1] = fieldValue68;

fieldValue65YYY.children = new X3D.MFNode();

fieldValue65ZZZ.children[0] = ProtoInstance66;

ProtoInstance64YYY.fieldValue = new X3D.MFNode();

ProtoInstance64ZZZ.fieldValue[0] = fieldValue65;

Transform61YYY.children = new X3D.MFNode();

Transform61ZZZ.children[0] = ProtoInstance64;

let Transform69 = browser.currentScene.createNode("Transform");
Transform69.DEF = "Input";
Transform69.translation = new X3D.SFVec3f([-1,0,0]);
let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "Widget";
let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "lineColor";
fieldValue71.value = "0.72 0.14 0.23";
ProtoInstance70YYY.fieldValue = new X3D.MFNode();

ProtoInstance70ZZZ.fieldValue[0] = fieldValue71;

let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "geometry";
let Disk2D73 = browser.currentScene.createNode("Disk2D");
Disk2D73.DEF = "Connector";
Disk2D73.outerRadius = 0.2;
fieldValue72YYY.children = new X3D.MFNode();

fieldValue72ZZZ.children[0] = Disk2D73;

ProtoInstance70ZZZ.fieldValue[1] = fieldValue72;

Transform69YYY.children = new X3D.MFNode();

Transform69ZZZ.children[0] = ProtoInstance70;

Transform61ZZZ.children[1] = Transform69;

let Transform74 = browser.currentScene.createNode("Transform");
Transform74.DEF = "Output";
Transform74.translation = new X3D.SFVec3f([1,0,0]);
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "Widget";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "lineColor";
fieldValue76.value = "0.44 0.5 0.72";
ProtoInstance75YYY.fieldValue = new X3D.MFNode();

ProtoInstance75ZZZ.fieldValue[0] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "geometry";
let Disk2D78 = browser.currentScene.createNode("Disk2D");
Disk2D78.USE = "Connector";
fieldValue77YYY.children = new X3D.MFNode();

fieldValue77ZZZ.children[0] = Disk2D78;

ProtoInstance75ZZZ.fieldValue[1] = fieldValue77;

Transform74YYY.children = new X3D.MFNode();

Transform74ZZZ.children[0] = ProtoInstance75;

Transform61ZZZ.children[2] = Transform74;

Group59ZZZ.children[1] = Transform61;

ProtoBody58YYY.children = new X3D.MFNode();

ProtoBody58ZZZ.children[0] = Group59;

let Script79 = browser.currentScene.createNode("Script");
Script79.directOutput = True;
Script80.getField("translation")Script79YYY.field = new X3D.MFNode();

Script81.getField("sensor")let PlaneSensor82 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor82.USE = "PlaneSensor";
field81YYY.children = new X3D.MFNode();

field81ZZZ.children[0] = PlaneSensor82;

Script79YYY.field = new X3D.MFNode();

Script83.getField("transform")let Transform84 = browser.currentScene.createNode("Transform");
Transform84.USE = "Node";
field83YYY.children = new X3D.MFNode();

field83ZZZ.children[0] = Transform84;

Script79YYY.field = new X3D.MFNode();

let IS85 = browser.currentScene.createNode("IS");
let connect86 = browser.currentScene.createNode("connect");
connect86.nodeField = "translation";
connect86.protoField = "translation";
IS85YYY.connect = new X3D.MFNode();

IS85ZZZ.connect[0] = connect86;

iS = IS85;


Script79.setSourceCode(`vrmlscript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}`)
ProtoBody58ZZZ.children[1] = Script79;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "PlaneSensor";
ROUTE87.fromField = "translation_changed";
ROUTE87.toNode = "Node";
ROUTE87.toField = "set_translation";
ProtoBody58ZZZ.children[2] = ROUTE87;

protoBody = ProtoBody58;

browser.currentScene.children[2] = ProtoDeclare55;

let ProtoDeclare88 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface90.getField("lineColor").setValue("0.43 0.43 0.98");
ProtoInterface89YYY.field = new X3D.MFNode();

ProtoInterface91.getField("linewidthScaleFactor").setValue("2");
ProtoInterface89YYY.field = new X3D.MFNode();

ProtoInterface92.getField("output")ProtoInterface89YYY.field = new X3D.MFNode();

ProtoInterface93.getField("input")ProtoInterface89YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface89;

let ProtoBody94 = browser.currentScene.createNode("ProtoBody");
let Shape95 = browser.currentScene.createNode("Shape");
let Appearance96 = browser.currentScene.createNode("Appearance");
let LineProperties97 = browser.currentScene.createNode("LineProperties");
let IS98 = browser.currentScene.createNode("IS");
let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "linewidthScaleFactor";
connect99.protoField = "linewidthScaleFactor";
IS98YYY.connect = new X3D.MFNode();

IS98ZZZ.connect[0] = connect99;

iS = IS98;

lineProperties = LineProperties97;

let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new X3D.SFColor([0,0,0]);
let IS101 = browser.currentScene.createNode("IS");
let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "emissiveColor";
connect102.protoField = "lineColor";
IS101YYY.connect = new X3D.MFNode();

IS101ZZZ.connect[0] = connect102;

iS = IS101;

material = Material100;

appearance = Appearance96;

let LineSet103 = browser.currentScene.createNode("LineSet");
LineSet103.DEF = "Geometry_1";
LineSet103.vertexCount = new X3D.MFInt32([2]);
let Coordinate104 = browser.currentScene.createNode("Coordinate");
Coordinate104.point = new X3D.MFVec3f([-1,0,0,1,0,0]);
coord = Coordinate104;

geometry = LineSet103;

ProtoBody94YYY.children = new X3D.MFNode();

ProtoBody94ZZZ.children[0] = Shape95;

let Script105 = browser.currentScene.createNode("Script");
Script105.DEF = "Route";
Script105.directOutput = True;
Script106.getField("set_translation")Script105YYY.field = new X3D.MFNode();

Script107.getField("routeDimension").setValue("21");
Script105YYY.field = new X3D.MFNode();

Script108.getField("output")Script105YYY.field = new X3D.MFNode();

Script109.getField("input")Script105YYY.field = new X3D.MFNode();

Script110.getField("geometry")let LineSet111 = browser.currentScene.createNode("LineSet");
LineSet111.USE = "Geometry_1";
field110YYY.children = new X3D.MFNode();

field110ZZZ.children[0] = LineSet111;

Script105YYY.field = new X3D.MFNode();

Script112.getField("self")let Script113 = browser.currentScene.createNode("Script");
Script113.USE = "Route";
field112YYY.children = new X3D.MFNode();

field112ZZZ.children[0] = Script113;

Script105YYY.field = new X3D.MFNode();

let IS114 = browser.currentScene.createNode("IS");
let connect115 = browser.currentScene.createNode("connect");
connect115.nodeField = "output";
connect115.protoField = "output";
IS114YYY.connect = new X3D.MFNode();

IS114ZZZ.connect[0] = connect115;

let connect116 = browser.currentScene.createNode("connect");
connect116.nodeField = "input";
connect116.protoField = "input";
IS114ZZZ.connect[1] = connect116;

iS = IS114;


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
ProtoBody94ZZZ.children[1] = Script105;

protoBody = ProtoBody94;

browser.currentScene.children[3] = ProtoDeclare88;

let NavigationInfo117 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo117.type = new X3D.MFString([new X3D.SFString(", "), new X3D.SFString("PLANE_create3000.deANY")]);
browser.currentScene.children[4] = NavigationInfo117;

let Background118 = browser.currentScene.createNode("Background");
Background118.skyColor = new X3D.MFColor([0.2,0.2,0.2]);
browser.currentScene.children[5] = Background118;

let OrthoViewpoint119 = browser.currentScene.createNode("OrthoViewpoint");
OrthoViewpoint119.description = "OthoViewpoint";
OrthoViewpoint119.position = new X3D.SFVec3f([-3.13496,-4.19776,10]);
OrthoViewpoint119.centerOfRotation = new X3D.SFVec3f([-3.13496,-4.19776,0]);
OrthoViewpoint119.fieldOfView = new X3D.SFVec3f([0,0,10,10]);
browser.currentScene.children[6] = OrthoViewpoint119;

let Viewpoint120 = browser.currentScene.createNode("Viewpoint");
Viewpoint120.description = "Viewpoint";
browser.currentScene.children[7] = Viewpoint120;

let Transform121 = browser.currentScene.createNode("Transform");
Transform121.DEF = "Connectors";
let ProtoInstance122 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance122.name = "Route";
let fieldValue123 = browser.currentScene.createNode("fieldValue");
fieldValue123.name = "output";
let ProtoInstance124 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance124.name = "Node";
ProtoInstance124.DEF = "N1";
let fieldValue125 = browser.currentScene.createNode("fieldValue");
fieldValue125.name = "translation";
fieldValue125.value = "-3.98323 2.88948 0";
ProtoInstance124YYY.fieldValue = new X3D.MFNode();

ProtoInstance124ZZZ.fieldValue[0] = fieldValue125;

fieldValue123YYY.children = new X3D.MFNode();

fieldValue123ZZZ.children[0] = ProtoInstance124;

ProtoInstance122YYY.fieldValue = new X3D.MFNode();

ProtoInstance122ZZZ.fieldValue[0] = fieldValue123;

let fieldValue126 = browser.currentScene.createNode("fieldValue");
fieldValue126.name = "input";
let ProtoInstance127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance127.name = "Node";
ProtoInstance127.DEF = "N2";
let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "translation";
fieldValue128.value = "-0.0890862 2.96049 0";
ProtoInstance127YYY.fieldValue = new X3D.MFNode();

ProtoInstance127ZZZ.fieldValue[0] = fieldValue128;

fieldValue126YYY.children = new X3D.MFNode();

fieldValue126ZZZ.children[0] = ProtoInstance127;

ProtoInstance122ZZZ.fieldValue[1] = fieldValue126;

Transform121YYY.children = new X3D.MFNode();

Transform121ZZZ.children[0] = ProtoInstance122;

let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "Route";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "output";
let ProtoInstance131 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance131.name = "Node";
ProtoInstance131.USE = "N1";
fieldValue130YYY.children = new X3D.MFNode();

fieldValue130ZZZ.children[0] = ProtoInstance131;

ProtoInstance129YYY.fieldValue = new X3D.MFNode();

ProtoInstance129ZZZ.fieldValue[0] = fieldValue130;

let fieldValue132 = browser.currentScene.createNode("fieldValue");
fieldValue132.name = "input";
let ProtoInstance133 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance133.name = "Node";
ProtoInstance133.DEF = "N3";
let fieldValue134 = browser.currentScene.createNode("fieldValue");
fieldValue134.name = "translation";
fieldValue134.value = "-0.104169 1.16371 0";
ProtoInstance133YYY.fieldValue = new X3D.MFNode();

ProtoInstance133ZZZ.fieldValue[0] = fieldValue134;

fieldValue132YYY.children = new X3D.MFNode();

fieldValue132ZZZ.children[0] = ProtoInstance133;

ProtoInstance129ZZZ.fieldValue[1] = fieldValue132;

Transform121ZZZ.children[1] = ProtoInstance129;

let ProtoInstance135 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance135.name = "Route";
let fieldValue136 = browser.currentScene.createNode("fieldValue");
fieldValue136.name = "output";
let ProtoInstance137 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance137.name = "Node";
ProtoInstance137.USE = "N1";
fieldValue136YYY.children = new X3D.MFNode();

fieldValue136ZZZ.children[0] = ProtoInstance137;

ProtoInstance135YYY.fieldValue = new X3D.MFNode();

ProtoInstance135ZZZ.fieldValue[0] = fieldValue136;

let fieldValue138 = browser.currentScene.createNode("fieldValue");
fieldValue138.name = "input";
let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "Node";
ProtoInstance139.DEF = "N4";
let fieldValue140 = browser.currentScene.createNode("fieldValue");
fieldValue140.name = "translation";
fieldValue140.value = "-0.0998688 -0.40172 0";
ProtoInstance139YYY.fieldValue = new X3D.MFNode();

ProtoInstance139ZZZ.fieldValue[0] = fieldValue140;

fieldValue138YYY.children = new X3D.MFNode();

fieldValue138ZZZ.children[0] = ProtoInstance139;

ProtoInstance135ZZZ.fieldValue[1] = fieldValue138;

Transform121ZZZ.children[2] = ProtoInstance135;

let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "Route";
let fieldValue142 = browser.currentScene.createNode("fieldValue");
fieldValue142.name = "output";
let ProtoInstance143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance143.name = "Node";
ProtoInstance143.USE = "N1";
fieldValue142YYY.children = new X3D.MFNode();

fieldValue142ZZZ.children[0] = ProtoInstance143;

ProtoInstance141YYY.fieldValue = new X3D.MFNode();

ProtoInstance141ZZZ.fieldValue[0] = fieldValue142;

let fieldValue144 = browser.currentScene.createNode("fieldValue");
fieldValue144.name = "input";
let ProtoInstance145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance145.name = "Node";
ProtoInstance145.DEF = "N5";
let fieldValue146 = browser.currentScene.createNode("fieldValue");
fieldValue146.name = "translation";
fieldValue146.value = "-0.0998687 -2.14742 0";
ProtoInstance145YYY.fieldValue = new X3D.MFNode();

ProtoInstance145ZZZ.fieldValue[0] = fieldValue146;

fieldValue144YYY.children = new X3D.MFNode();

fieldValue144ZZZ.children[0] = ProtoInstance145;

ProtoInstance141ZZZ.fieldValue[1] = fieldValue144;

Transform121ZZZ.children[3] = ProtoInstance141;

let ProtoInstance147 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance147.name = "Route";
let fieldValue148 = browser.currentScene.createNode("fieldValue");
fieldValue148.name = "output";
let ProtoInstance149 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance149.name = "Node";
ProtoInstance149.USE = "N2";
fieldValue148YYY.children = new X3D.MFNode();

fieldValue148ZZZ.children[0] = ProtoInstance149;

ProtoInstance147YYY.fieldValue = new X3D.MFNode();

ProtoInstance147ZZZ.fieldValue[0] = fieldValue148;

let fieldValue150 = browser.currentScene.createNode("fieldValue");
fieldValue150.name = "input";
let ProtoInstance151 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance151.name = "Node";
ProtoInstance151.DEF = "N6";
let fieldValue152 = browser.currentScene.createNode("fieldValue");
fieldValue152.name = "translation";
fieldValue152.value = "3.55694 2.4116 0";
ProtoInstance151YYY.fieldValue = new X3D.MFNode();

ProtoInstance151ZZZ.fieldValue[0] = fieldValue152;

fieldValue150YYY.children = new X3D.MFNode();

fieldValue150ZZZ.children[0] = ProtoInstance151;

ProtoInstance147ZZZ.fieldValue[1] = fieldValue150;

Transform121ZZZ.children[4] = ProtoInstance147;

let ProtoInstance153 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance153.name = "Route";
let fieldValue154 = browser.currentScene.createNode("fieldValue");
fieldValue154.name = "output";
let ProtoInstance155 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance155.name = "Node";
ProtoInstance155.USE = "N3";
fieldValue154YYY.children = new X3D.MFNode();

fieldValue154ZZZ.children[0] = ProtoInstance155;

ProtoInstance153YYY.fieldValue = new X3D.MFNode();

ProtoInstance153ZZZ.fieldValue[0] = fieldValue154;

let fieldValue156 = browser.currentScene.createNode("fieldValue");
fieldValue156.name = "input";
let ProtoInstance157 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance157.name = "Node";
ProtoInstance157.USE = "N6";
fieldValue156YYY.children = new X3D.MFNode();

fieldValue156ZZZ.children[0] = ProtoInstance157;

ProtoInstance153ZZZ.fieldValue[1] = fieldValue156;

Transform121ZZZ.children[5] = ProtoInstance153;

let ProtoInstance158 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance158.name = "Route";
let fieldValue159 = browser.currentScene.createNode("fieldValue");
fieldValue159.name = "output";
let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "Node";
ProtoInstance160.USE = "N4";
fieldValue159YYY.children = new X3D.MFNode();

fieldValue159ZZZ.children[0] = ProtoInstance160;

ProtoInstance158YYY.fieldValue = new X3D.MFNode();

ProtoInstance158ZZZ.fieldValue[0] = fieldValue159;

let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "input";
let ProtoInstance162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance162.name = "Node";
ProtoInstance162.DEF = "N7";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "translation";
fieldValue163.value = "3.75106 -0.0794556 0";
ProtoInstance162YYY.fieldValue = new X3D.MFNode();

ProtoInstance162ZZZ.fieldValue[0] = fieldValue163;

fieldValue161YYY.children = new X3D.MFNode();

fieldValue161ZZZ.children[0] = ProtoInstance162;

ProtoInstance158ZZZ.fieldValue[1] = fieldValue161;

Transform121ZZZ.children[6] = ProtoInstance158;

let ProtoInstance164 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance164.name = "Route";
let fieldValue165 = browser.currentScene.createNode("fieldValue");
fieldValue165.name = "output";
let ProtoInstance166 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance166.name = "Node";
ProtoInstance166.USE = "N5";
fieldValue165YYY.children = new X3D.MFNode();

fieldValue165ZZZ.children[0] = ProtoInstance166;

ProtoInstance164YYY.fieldValue = new X3D.MFNode();

ProtoInstance164ZZZ.fieldValue[0] = fieldValue165;

let fieldValue167 = browser.currentScene.createNode("fieldValue");
fieldValue167.name = "input";
let ProtoInstance168 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance168.name = "Node";
ProtoInstance168.USE = "N7";
fieldValue167YYY.children = new X3D.MFNode();

fieldValue167ZZZ.children[0] = ProtoInstance168;

ProtoInstance164ZZZ.fieldValue[1] = fieldValue167;

Transform121ZZZ.children[7] = ProtoInstance164;

let ProtoInstance169 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance169.name = "Route";
let fieldValue170 = browser.currentScene.createNode("fieldValue");
fieldValue170.name = "output";
let ProtoInstance171 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance171.name = "Node";
ProtoInstance171.USE = "N6";
fieldValue170YYY.children = new X3D.MFNode();

fieldValue170ZZZ.children[0] = ProtoInstance171;

ProtoInstance169YYY.fieldValue = new X3D.MFNode();

ProtoInstance169ZZZ.fieldValue[0] = fieldValue170;

let fieldValue172 = browser.currentScene.createNode("fieldValue");
fieldValue172.name = "input";
let ProtoInstance173 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance173.name = "Node";
ProtoInstance173.DEF = "N8";
let fieldValue174 = browser.currentScene.createNode("fieldValue");
fieldValue174.name = "translation";
fieldValue174.value = "7.68077 1.21228 0";
ProtoInstance173YYY.fieldValue = new X3D.MFNode();

ProtoInstance173ZZZ.fieldValue[0] = fieldValue174;

fieldValue172YYY.children = new X3D.MFNode();

fieldValue172ZZZ.children[0] = ProtoInstance173;

ProtoInstance169ZZZ.fieldValue[1] = fieldValue172;

Transform121ZZZ.children[8] = ProtoInstance169;

let ProtoInstance175 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance175.name = "Route";
let fieldValue176 = browser.currentScene.createNode("fieldValue");
fieldValue176.name = "output";
let ProtoInstance177 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance177.name = "Node";
ProtoInstance177.USE = "N7";
fieldValue176YYY.children = new X3D.MFNode();

fieldValue176ZZZ.children[0] = ProtoInstance177;

ProtoInstance175YYY.fieldValue = new X3D.MFNode();

ProtoInstance175ZZZ.fieldValue[0] = fieldValue176;

let fieldValue178 = browser.currentScene.createNode("fieldValue");
fieldValue178.name = "input";
let ProtoInstance179 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance179.name = "Node";
ProtoInstance179.USE = "N8";
fieldValue178YYY.children = new X3D.MFNode();

fieldValue178ZZZ.children[0] = ProtoInstance179;

ProtoInstance175ZZZ.fieldValue[1] = fieldValue178;

Transform121ZZZ.children[9] = ProtoInstance175;

let ProtoInstance180 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance180.name = "Node";
ProtoInstance180.USE = "N1";
Transform121ZZZ.children[10] = ProtoInstance180;

let ProtoInstance181 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance181.name = "Node";
ProtoInstance181.USE = "N2";
Transform121ZZZ.children[11] = ProtoInstance181;

let ProtoInstance182 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance182.name = "Node";
ProtoInstance182.USE = "N3";
Transform121ZZZ.children[12] = ProtoInstance182;

let ProtoInstance183 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance183.name = "Node";
ProtoInstance183.USE = "N4";
Transform121ZZZ.children[13] = ProtoInstance183;

let ProtoInstance184 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance184.name = "Node";
ProtoInstance184.USE = "N5";
Transform121ZZZ.children[14] = ProtoInstance184;

let ProtoInstance185 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance185.name = "Node";
ProtoInstance185.USE = "N6";
Transform121ZZZ.children[15] = ProtoInstance185;

let ProtoInstance186 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance186.name = "Node";
ProtoInstance186.USE = "N7";
Transform121ZZZ.children[16] = ProtoInstance186;

let ProtoInstance187 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance187.name = "Node";
ProtoInstance187.USE = "N8";
Transform121ZZZ.children[17] = ProtoInstance187;

browser.currentScene.children[8] = Transform121;

}
main ();
