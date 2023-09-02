#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "Geospatial";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "NURBS";
component3.level = 2;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "Core";
component4.level = 2;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "Navigation";
component5.level = 1;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "Text";
component6.level = 1;
head1.component[4] = component6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "X3dHeaderPrototypeSyntaxExamples.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding.";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "created";
meta9.content = "14 October 2002";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "27 May 2017";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "creator";
meta11.content = "Don Brutzman";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "specificationSection";
meta12.content = "X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "specificationUrl";
meta13.content = "https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "license";
meta16.content = "../license.html";
head1.meta[14] = meta16;

head = head1;

ExternProtoDeclare ExternProtoDeclare18 = createNode("ExternProtoDeclare");
ExternProtoDeclare18.name = "ViewPositionOrientation";
ExternProtoDeclare18.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
field field19 = createNode("field");
field19.name = "enabled";
field19.accessType = "inputOutput";
field19.type = "SFBool";
ExternProtoDeclare18.field = new MFNode();

ExternProtoDeclare18.field[0] = field19;

field field20 = createNode("field");
field20.name = "traceEnabled";
field20.accessType = "initializeOnly";
field20.type = "SFBool";
ExternProtoDeclare18.field[1] = field20;

field field21 = createNode("field");
field21.name = "set_traceEnabled";
field21.accessType = "inputOnly";
field21.type = "SFBool";
ExternProtoDeclare18.field[2] = field21;

field field22 = createNode("field");
field22.name = "position_changed";
field22.accessType = "outputOnly";
field22.type = "SFVec3f";
ExternProtoDeclare18.field[3] = field22;

field field23 = createNode("field");
field23.name = "orientation_changed";
field23.accessType = "outputOnly";
field23.type = "SFRotation";
ExternProtoDeclare18.field[4] = field23;

field field24 = createNode("field");
field24.name = "outputViewpointString";
field24.accessType = "outputOnly";
field24.type = "MFString";
ExternProtoDeclare18.field[5] = field24;

children = new MFNode();

children[0] = ExternProtoDeclare18;

ProtoDeclare ProtoDeclare25 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfoNode" ><ProtoBody><WorldInfo DEF="ExamplePrototypeBody"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare25.name = "NewWorldInfoNode";
ProtoBody ProtoBody26 = createNode("ProtoBody");
WorldInfo WorldInfo27 = createNode("WorldInfo");
WorldInfo27.DEF = "ExamplePrototypeBody";
ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = WorldInfo27;

ProtoDeclare25.protoBody = ProtoBody26;

children[1] = ProtoDeclare25;

ProtoInstance ProtoInstance28 = createNode("ProtoInstance");
ProtoInstance28.name = "NewWorldInfoNode";
children[2] = ProtoInstance28;

ProtoDeclare ProtoDeclare29 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="EmissiveMaterial" ><ProtoInterface><field name="onlyColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><!--Override default diffuseColor value 0.8 0.8 0.8--><Material diffuseColor="0 0 0"><!--Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.--><IS><connect nodeField="emissiveColor" protoField="onlyColor"></connect>
</IS>
</Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare29.name = "EmissiveMaterial";
ProtoInterface ProtoInterface30 = createNode("ProtoInterface");
field field31 = createNode("field");
field31.name = "onlyColor";
field31.accessType = "inputOutput";
field31.type = "SFColor";
field31.value = "1 0 0";
ProtoInterface30.field = new MFNode();

ProtoInterface30.field[0] = field31;

ProtoDeclare29.protoInterface = ProtoInterface30;

ProtoBody ProtoBody32 = createNode("ProtoBody");
//Override default diffuseColor value 0.8 0.8 0.8
Material Material33 = createNode("Material");
Material33.diffuseColor = new SFColor(new float[0,0,0]);
//Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.
IS IS34 = createNode("IS");
connect connect35 = createNode("connect");
connect35.nodeField = "emissiveColor";
connect35.protoField = "onlyColor";
IS34.connect = new MFNode();

IS34.connect[0] = connect35;

Material33.iS = IS34;

ProtoBody32.children = new MFNode();

ProtoBody32.children[0] = Material33;

ProtoDeclare29.protoBody = ProtoBody32;

children[3] = ProtoDeclare29;

ProtoDeclare ProtoDeclare36 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface37 = createNode("ProtoInterface");
field field38 = createNode("field");
field38.name = "children";
field38.accessType = "inputOutput";
field38.type = "MFNode";
Group Group39 = createNode("Group");
Group39.DEF = "DefaultNodeValue";
Group39.bboxSize = new SFVec3f(new float[2,2,2]);
//Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"
field38.children = new MFNode();

field38.children[0] = Group39;

ProtoInterface37.field = new MFNode();

ProtoInterface37.field[0] = field38;

ProtoDeclare36.protoInterface = ProtoInterface37;

ProtoBody ProtoBody40 = createNode("ProtoBody");
Transform Transform41 = createNode("Transform");
Transform41.translation = new SFVec3f(new float[0,2,0]);
Group Group42 = createNode("Group");
IS IS43 = createNode("IS");
connect connect44 = createNode("connect");
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

children[4] = ProtoDeclare36;

ProtoInstance ProtoInstance45 = createNode("ProtoInstance");
ProtoInstance45.name = "ShiftGroupUp2m";
children[5] = ProtoInstance45;

//====================
Viewpoint Viewpoint46 = createNode("Viewpoint");
Viewpoint46.DEF = "ExampleSingleElement";
Viewpoint46.description = "Hello syntax";
children[6] = Viewpoint46;

Group Group47 = createNode("Group");
Group47.DEF = "ExampleChildElement";
Shape Shape48 = createNode("Shape");
Box Box49 = createNode("Box");
Shape48.geometry = Box49;

Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.diffuseColor = new SFColor(new float[0.6,0.4,0.2]);
Appearance50.material = Material51;

Shape48.appearance = Appearance50;

Group47.children = new MFNode();

Group47.children[0] = Shape48;

children[7] = Group47;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "TransformExampleUSE";
Transform52.rotation = new SFRotation(new float[0,1,0,0.78]);
Transform52.translation = new SFVec3f(new float[0,2.5,0]);
Group Group53 = createNode("Group");
Group53.USE = "ExampleChildElement";
Transform52.children = new MFNode();

Transform52.children[0] = Group53;

children[8] = Transform52;

Collision Collision54 = createNode("Collision");
Shape Shape55 = createNode("Shape");
//note that Collision proxy Shape is not rendered
Sphere Sphere56 = createNode("Sphere");
Shape55.geometry = Sphere56;

Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Appearance57.material = Material58;

Shape55.appearance = Appearance57;

Collision54.proxy = Shape55;

Group Group59 = createNode("Group");
Group59.USE = "ExampleChildElement";
Collision54.proxy = Group59;

children[9] = Collision54;

Transform Transform60 = createNode("Transform");
Transform60.translation = new SFVec3f(new float[0,-2.5,0]);
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "EmissiveMaterial";
fieldValue fieldValue64 = createNode("fieldValue");
fieldValue64.name = "onlyColor";
fieldValue64.value = "0.2 0.6 0.6";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

Appearance62.shaders = new MFNode();

Appearance62.shaders[0] = ProtoInstance63;

Shape61.appearance = Appearance62;

Text Text65 = createNode("Text");
Text65.string = new MFString(new java.lang.String["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"]);
FontStyle FontStyle66 = createNode("FontStyle");
FontStyle66.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle66.size = 0.6;
Text65.fontStyle = FontStyle66;

Shape61.geometry = Text65;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

children[10] = Transform60;

ProtoInstance ProtoInstance67 = createNode("ProtoInstance");
ProtoInstance67.name = "ViewPositionOrientation";
fieldValue fieldValue68 = createNode("fieldValue");
fieldValue68.name = "enabled";
fieldValue68.value = "true";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

children[11] = ProtoInstance67;

TimeSensor TimeSensor69 = createNode("TimeSensor");
TimeSensor69.DEF = "Clock";
TimeSensor69.cycleInterval = 4;
TimeSensor69.loop = True;
children[12] = TimeSensor69;

OrientationInterpolator OrientationInterpolator70 = createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "Spinner";
OrientationInterpolator70.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.14159,0,1,0,6.28318]);
children[13] = OrientationInterpolator70;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromField = "fraction_changed";
ROUTE71.fromNode = "Clock";
ROUTE71.toField = "set_fraction";
ROUTE71.toNode = "Spinner";
children[14] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromField = "value_changed";
ROUTE72.fromNode = "Spinner";
ROUTE72.toField = "rotation";
ROUTE72.toNode = "TransformExampleUSE";
children[15] = ROUTE72;

Inline Inline73 = createNode("Inline");
Inline73.DEF = "someInline";
Inline73.url = new MFString(new java.lang.String["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"]);
children[16] = Inline73;

IMPORT IMPORT74 = createNode("IMPORT");
IMPORT74.AS = "someInlineRoot";
IMPORT74.importedDEF = "someName";
IMPORT74.inlineDEF = "someInline";
children[17] = IMPORT74;

PositionInterpolator PositionInterpolator75 = createNode("PositionInterpolator");
PositionInterpolator75.DEF = "StayInPlace";
PositionInterpolator75.key = new MFFloat(new float[0,1]);
PositionInterpolator75.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
children[18] = PositionInterpolator75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromField = "fraction_changed";
ROUTE76.fromNode = "Clock";
ROUTE76.toField = "set_fraction";
ROUTE76.toNode = "StayInPlace";
children[19] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "StayInPlace";
ROUTE77.toField = "set_translation";
ROUTE77.toNode = "someInlineRoot";
children[20] = ROUTE77;

}
