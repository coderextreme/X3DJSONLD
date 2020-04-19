var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "ViewPositionOrientation";
ExternProtoDeclare2.url = ["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"];
field3 = browser.currentScene.createNode("field");
field3.name = "enabled";
field3.accessType = "inputOutput";
field3.type = "SFBool";
ExternProtoDeclare2.field = [];

ExternProtoDeclare2.field[0] = field3;

field4 = browser.currentScene.createNode("field");
field4.name = "traceEnabled";
field4.accessType = "initializeOnly";
field4.type = "SFBool";
ExternProtoDeclare2.field[1] = field4;

field5 = browser.currentScene.createNode("field");
field5.name = "set_traceEnabled";
field5.accessType = "inputOnly";
field5.type = "SFBool";
ExternProtoDeclare2.field[2] = field5;

field6 = browser.currentScene.createNode("field");
field6.name = "position_changed";
field6.accessType = "outputOnly";
field6.type = "SFVec3f";
ExternProtoDeclare2.field[3] = field6;

field7 = browser.currentScene.createNode("field");
field7.name = "orientation_changed";
field7.accessType = "outputOnly";
field7.type = "SFRotation";
ExternProtoDeclare2.field[4] = field7;

field8 = browser.currentScene.createNode("field");
field8.name = "outputViewpointString";
field8.accessType = "outputOnly";
field8.type = "MFString";
ExternProtoDeclare2.field[5] = field8;

browser.currentScene.children = [];

browser.currentScene.children[0] = ExternProtoDeclare2;

ProtoDeclare9 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare9.name = "NewWorldInfoNode";
ProtoBody10 = browser.currentScene.createNode("ProtoBody");
WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.DEF = "ExamplePrototypeBody";
ProtoBody10.children = [];

ProtoBody10.children[0] = WorldInfo11;

ProtoDeclare9.protoBody = ProtoBody10;

browser.currentScene.children[1] = ProtoDeclare9;

ProtoInstance12 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance12.name = "NewWorldInfoNode";
browser.currentScene.children[2] = ProtoInstance12;

ProtoDeclare13 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare13.name = "EmissiveMaterial";
ProtoInterface14 = browser.currentScene.createNode("ProtoInterface");
field15 = browser.currentScene.createNode("field");
field15.name = "onlyColor";
field15.accessType = "inputOutput";
field15.type = "SFColor";
field15.value = "1 0 0";
ProtoInterface14.field = [];

ProtoInterface14.field[0] = field15;

ProtoDeclare13.protoInterface = ProtoInterface14;

ProtoBody16 = browser.currentScene.createNode("ProtoBody");
//Override default diffuseColor value 0.8 0.8 0.8
Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = [0,0,0];
//Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.
IS18 = browser.currentScene.createNode("IS");
connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "emissiveColor";
connect19.protoField = "onlyColor";
IS18.connect = [];

IS18.connect[0] = connect19;

Material17.iS = IS18;

ProtoBody16.children = [];

ProtoBody16.children[0] = Material17;

ProtoDeclare13.protoBody = ProtoBody16;

browser.currentScene.children[3] = ProtoDeclare13;

ProtoDeclare20 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare20.name = "ShiftGroupUp2m";
ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
field22 = browser.currentScene.createNode("field");
field22.name = "children";
field22.accessType = "inputOutput";
field22.type = "MFNode";
Group23 = browser.currentScene.createNode("Group");
Group23.DEF = "DefaultNodeValue";
Group23.bboxSize = [2,2,2];
//Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"
field22.children = [];

field22.children[0] = Group23;

ProtoInterface21.field = [];

ProtoInterface21.field[0] = field22;

ProtoDeclare20.protoInterface = ProtoInterface21;

ProtoBody24 = browser.currentScene.createNode("ProtoBody");
Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = [0,2,0];
Group26 = browser.currentScene.createNode("Group");
IS27 = browser.currentScene.createNode("IS");
connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "children";
connect28.protoField = "children";
IS27.connect = [];

IS27.connect[0] = connect28;

Group26.iS = IS27;

Transform25.children = [];

Transform25.children[0] = Group26;

ProtoBody24.children = [];

ProtoBody24.children[0] = Transform25;

ProtoDeclare20.protoBody = ProtoBody24;

browser.currentScene.children[4] = ProtoDeclare20;

ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "ShiftGroupUp2m";
browser.currentScene.children[5] = ProtoInstance29;

//====================
Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.DEF = "ExampleSingleElement";
Viewpoint30.description = "Hello syntax";
browser.currentScene.children[6] = Viewpoint30;

Group31 = browser.currentScene.createNode("Group");
Group31.DEF = "ExampleChildElement";
Shape32 = browser.currentScene.createNode("Shape");
Box33 = browser.currentScene.createNode("Box");
Shape32.geometry = Box33;

Appearance34 = browser.currentScene.createNode("Appearance");
Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = [0.6,0.4,0.2];
Appearance34.material = Material35;

Shape32.appearance = Appearance34;

Group31.children = [];

Group31.children[0] = Shape32;

browser.currentScene.children[7] = Group31;

Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "TransformExampleUSE";
Transform36.rotation = [0,1,0,0.78];
Transform36.translation = [0,2.5,0];
Group37 = browser.currentScene.createNode("Group");
Group37.USE = "ExampleChildElement";
Transform36.children = [];

Transform36.children[0] = Group37;

browser.currentScene.children[8] = Transform36;

Collision38 = browser.currentScene.createNode("Collision");
Shape39 = browser.currentScene.createNode("Shape");
//note that Collision proxy Shape is not rendered
Sphere40 = browser.currentScene.createNode("Sphere");
Shape39.geometry = Sphere40;

Appearance41 = browser.currentScene.createNode("Appearance");
Material42 = browser.currentScene.createNode("Material");
Appearance41.material = Material42;

Shape39.appearance = Appearance41;

Collision38.proxy = Shape39;

Group43 = browser.currentScene.createNode("Group");
Group43.USE = "ExampleChildElement";
Collision38.proxy = Group43;

browser.currentScene.children[9] = Collision38;

Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = [0,-2.5,0];
Shape45 = browser.currentScene.createNode("Shape");
Appearance46 = browser.currentScene.createNode("Appearance");
ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "EmissiveMaterial";
fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "onlyColor";
fieldValue48.value = "0.2 0.6 0.6";
ProtoInstance47.fieldValue = [];

ProtoInstance47.fieldValue[0] = fieldValue48;

Appearance46.material = ProtoInstance47;

Shape45.appearance = Appearance46;

Text49 = browser.currentScene.createNode("Text");
Text49.string = ["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"];
FontStyle50 = browser.currentScene.createNode("FontStyle");
FontStyle50.justify = ["MIDDLE","MIDDLE"];
FontStyle50.size = 0.6;
Text49.fontStyle = FontStyle50;

Shape45.geometry = Text49;

Transform44.children = [];

Transform44.children[0] = Shape45;

browser.currentScene.children[10] = Transform44;

ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "ViewPositionOrientation";
fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "enabled";
fieldValue52.value = "true";
ProtoInstance51.fieldValue = [];

ProtoInstance51.fieldValue[0] = fieldValue52;

browser.currentScene.children[11] = ProtoInstance51;

TimeSensor53 = browser.currentScene.createNode("TimeSensor");
TimeSensor53.DEF = "Clock";
TimeSensor53.cycleInterval = 4;
TimeSensor53.loop = True;
browser.currentScene.children[12] = TimeSensor53;

OrientationInterpolator54 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator54.DEF = "Spinner";
OrientationInterpolator54.key = [0,0.5,1];
OrientationInterpolator54.keyValue = [0,1,0,0,0,1,0,3.14159,0,1,0,6.28318];
browser.currentScene.children[13] = OrientationInterpolator54;

ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "fraction_changed";
ROUTE55.fromNode = "Clock";
ROUTE55.toField = "set_fraction";
ROUTE55.toNode = "Spinner";
browser.currentScene.children[14] = ROUTE55;

ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "value_changed";
ROUTE56.fromNode = "Spinner";
ROUTE56.toField = "rotation";
ROUTE56.toNode = "TransformExampleUSE";
browser.currentScene.children[15] = ROUTE56;

Inline57 = browser.currentScene.createNode("Inline");
Inline57.DEF = "someInline";
Inline57.url = ["someUrl.x3d","http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"];
browser.currentScene.children[16] = Inline57;

IMPORT58 = browser.currentScene.createNode("IMPORT");
IMPORT58.AS = "someInlineRoot";
IMPORT58.importedDEF = "someName";
IMPORT58.inlineDEF = "someInline";
browser.currentScene.children[17] = IMPORT58;

PositionInterpolator59 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator59.DEF = "StayInPlace";
PositionInterpolator59.key = [0,1];
PositionInterpolator59.keyValue = [0,0,0,0,0,0];
browser.currentScene.children[18] = PositionInterpolator59;

ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "fraction_changed";
ROUTE60.fromNode = "Clock";
ROUTE60.toField = "set_fraction";
ROUTE60.toNode = "StayInPlace";
browser.currentScene.children[19] = ROUTE60;

ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "value_changed";
ROUTE61.fromNode = "StayInPlace";
ROUTE61.toField = "set_translation";
ROUTE61.toNode = "someInlineRoot";
browser.currentScene.children[20] = ROUTE61;

