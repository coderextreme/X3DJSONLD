let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let component2 = browser.currentScene.createNode("component");
component2.name = "Geospatial";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "NURBS";
component3.level = 2;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "Core";
component4.level = 2;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "Navigation";
component5.level = 1;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "Text";
component6.level = 1;
head1.component[4] = component6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "title";
meta7.content = "X3dHeaderPrototypeSyntaxExamples.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "description";
meta8.content = "X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "created";
meta9.content = "14 October 2002";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "modified";
meta10.content = "27 May 2017";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "creator";
meta11.content = "Don Brutzman";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "specificationSection";
meta12.content = "X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "specificationUrl";
meta13.content = "https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

let ExternProtoDeclare18 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "ViewPositionOrientation";
ExternProtoDeclare18.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
let field19 = browser.currentScene.createNode("field");
field19.name = "enabled";
field19.accessType = "inputOutput";
field19.type = "SFBool";
ExternProtoDeclare18.field = new MFNode();

ExternProtoDeclare18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "traceEnabled";
field20.accessType = "initializeOnly";
field20.type = "SFBool";
ExternProtoDeclare18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "set_traceEnabled";
field21.accessType = "inputOnly";
field21.type = "SFBool";
ExternProtoDeclare18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "position_changed";
field22.accessType = "outputOnly";
field22.type = "SFVec3f";
ExternProtoDeclare18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "orientation_changed";
field23.accessType = "outputOnly";
field23.type = "SFRotation";
ExternProtoDeclare18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "outputViewpointString";
field24.accessType = "outputOnly";
field24.type = "MFString";
ExternProtoDeclare18.field[5] = field24;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare18;

let ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfoNode" ><ProtoBody><WorldInfo DEF="ExamplePrototypeBody"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "NewWorldInfoNode";
let ProtoBody26 = browser.currentScene.createNode("ProtoBody");
let WorldInfo27 = browser.currentScene.createNode("WorldInfo");
WorldInfo27.DEF = "ExamplePrototypeBody";
ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = WorldInfo27;

ProtoDeclare25.protoBody = ProtoBody26;

browser.currentScene.children[1] = ProtoDeclare25;

let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "NewWorldInfoNode";
browser.currentScene.children[2] = ProtoInstance28;

let ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="EmissiveMaterial" ><ProtoInterface><field name="onlyColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><!--Override default diffuseColor value 0.8 0.8 0.8--><Material diffuseColor="0 0 0"><!--Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.--><IS><connect nodeField="emissiveColor" protoField="onlyColor"></connect>
</IS>
</Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare29.name = "EmissiveMaterial";
let ProtoInterface30 = browser.currentScene.createNode("ProtoInterface");
let field31 = browser.currentScene.createNode("field");
field31.name = "onlyColor";
field31.accessType = "inputOutput";
field31.type = "SFColor";
field31.value = "1 0 0";
ProtoInterface30.field = new MFNode();

ProtoInterface30.field[0] = field31;

ProtoDeclare29.protoInterface = ProtoInterface30;

let ProtoBody32 = browser.currentScene.createNode("ProtoBody");
//Override default diffuseColor value 0.8 0.8 0.8
let Material33 = browser.currentScene.createNode("Material");
Material33.diffuseColor = new SFColor(new float[0,0,0]);
//Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.
let IS34 = browser.currentScene.createNode("IS");
let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "emissiveColor";
connect35.protoField = "onlyColor";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

Material33.iS = IS34;

ProtoBody32.children = new MFNode();

ProtoBody32.children[0] = Material33;

ProtoDeclare29.protoBody = ProtoBody32;

browser.currentScene.children[3] = ProtoDeclare29;

let ProtoDeclare36 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShiftGroupUp2m" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><Group DEF="DefaultNodeValue" bboxSize="2 2 2"><!--Authors need to override this node when creating the ProtoInstance fieldValue name="children"--></Group>
</field>
</ProtoInterface>
<ProtoBody><Transform translation="0 2 0"><Group><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare36.name = "ShiftGroupUp2m";
let ProtoInterface37 = browser.currentScene.createNode("ProtoInterface");
let field38 = browser.currentScene.createNode("field");
field38.name = "children";
field38.accessType = "inputOutput";
field38.type = "MFNode";
let Group39 = browser.currentScene.createNode("Group");
Group39.DEF = "DefaultNodeValue";
Group39.bboxSize = new SFVec3f(new float[2,2,2]);
//Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"
field38.children = new MFNode();

field38.children[0] = Group39;

ProtoInterface37.field = new MFNode();

ProtoInterface37.field[0] = field38;

ProtoDeclare36.protoInterface = ProtoInterface37;

let ProtoBody40 = browser.currentScene.createNode("ProtoBody");
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,2,0]);
let Group42 = browser.currentScene.createNode("Group");
let IS43 = browser.currentScene.createNode("IS");
let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "children";
connect44.protoField = "children";
IS43.connect = new MFNode();

IS43.connect[0] = connect44;

Group42.iS = IS43;

Transform41.children = new MFNode();

Transform41.children[0] = Group42;

ProtoBody40.children = new MFNode();

ProtoBody40.children[0] = Transform41;

ProtoDeclare36.protoBody = ProtoBody40;

browser.currentScene.children[4] = ProtoDeclare36;

let ProtoInstance45 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance45.name = "ShiftGroupUp2m";
browser.currentScene.children[5] = ProtoInstance45;

//====================
let Viewpoint46 = browser.currentScene.createNode("Viewpoint");
Viewpoint46.DEF = "ExampleSingleElement";
Viewpoint46.description = "Hello syntax";
browser.currentScene.children[6] = Viewpoint46;

let Group47 = browser.currentScene.createNode("Group");
Group47.DEF = "ExampleChildElement";
let Shape48 = browser.currentScene.createNode("Shape");
let Box49 = browser.currentScene.createNode("Box");
Shape48.geometry = Box49;

let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.diffuseColor = new SFColor(new float[0.6,0.4,0.2]);
Appearance50.material = Material51;

Shape48.appearance = Appearance50;

Group47.children = new MFNode();

Group47.children[0] = Shape48;

browser.currentScene.children[7] = Group47;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.DEF = "TransformExampleUSE";
Transform52.rotation = new SFRotation(new float[0,1,0,0.78]);
Transform52.translation = new SFVec3f(new float[0,2.5,0]);
let Group53 = browser.currentScene.createNode("Group");
Group53.USE = "ExampleChildElement";
Transform52.children = new MFNode();

Transform52.children[0] = Group53;

browser.currentScene.children[8] = Transform52;

let Collision54 = browser.currentScene.createNode("Collision");
let Shape55 = browser.currentScene.createNode("Shape");
//note that Collision proxy Shape is not rendered
let Sphere56 = browser.currentScene.createNode("Sphere");
Shape55.geometry = Sphere56;

let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Collision54.proxy = Shape55;

let Group59 = browser.currentScene.createNode("Group");
Group59.USE = "ExampleChildElement";
Collision54.proxy = Group59;

browser.currentScene.children[9] = Collision54;

let Transform60 = browser.currentScene.createNode("Transform");
Transform60.translation = new SFVec3f(new float[0,-2.5,0]);
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "EmissiveMaterial";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "onlyColor";
fieldValue64.value = "0.2 0.6 0.6";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Appearance62.shaders = new MFNode();

Appearance62.shaders[0] = ProtoInstance63;

Shape61.appearance = Appearance62;

let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"]);
let FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle66.size = 0.6;
Text65.fontStyle = FontStyle66;

Shape61.geometry = Text65;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

browser.currentScene.children[10] = Transform60;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "ViewPositionOrientation";
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "enabled";
fieldValue68.value = "true";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

browser.currentScene.children[11] = ProtoInstance67;

let TimeSensor69 = browser.currentScene.createNode("TimeSensor");
TimeSensor69.DEF = "Clock";
TimeSensor69.cycleInterval = 4;
TimeSensor69.loop = True;
browser.currentScene.children[12] = TimeSensor69;

let OrientationInterpolator70 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "Spinner";
OrientationInterpolator70.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.14159,0,1,0,6.28318]);
browser.currentScene.children[13] = OrientationInterpolator70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "fraction_changed";
ROUTE71.fromNode = "Clock";
ROUTE71.toField = "set_fraction";
ROUTE71.toNode = "Spinner";
browser.currentScene.children[14] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "value_changed";
ROUTE72.fromNode = "Spinner";
ROUTE72.toField = "rotation";
ROUTE72.toNode = "TransformExampleUSE";
browser.currentScene.children[15] = ROUTE72;

let Inline73 = browser.currentScene.createNode("Inline");
Inline73.DEF = "someInline";
Inline73.url = new MFString(new java.lang.String["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"]);
browser.currentScene.children[16] = Inline73;

let IMPORT74 = browser.currentScene.createNode("IMPORT");
IMPORT74.AS = "someInlineRoot";
IMPORT74.importedDEF = "someName";
IMPORT74.inlineDEF = "someInline";
browser.currentScene.children[17] = IMPORT74;

let PositionInterpolator75 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator75.DEF = "StayInPlace";
PositionInterpolator75.key = new MFFloat(new float[0,1]);
PositionInterpolator75.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
browser.currentScene.children[18] = PositionInterpolator75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "fraction_changed";
ROUTE76.fromNode = "Clock";
ROUTE76.toField = "set_fraction";
ROUTE76.toNode = "StayInPlace";
browser.currentScene.children[19] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "StayInPlace";
ROUTE77.toField = "set_translation";
ROUTE77.toNode = "someInlineRoot";
browser.currentScene.children[20] = ROUTE77;

