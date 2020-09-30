let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "ViewPositionOrientation";
ExternProtoDeclare2.url = new MFString(new java.lang.String["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]);
let field3 = browser.currentScene.createNode("field");
field3.name = "enabled";
field3.accessType = "inputOutput";
field3.type = "SFBool";
ExternProtoDeclare2.field = new MFNode();

ExternProtoDeclare2.field[0] = field3;

let field4 = browser.currentScene.createNode("field");
field4.name = "traceEnabled";
field4.accessType = "initializeOnly";
field4.type = "SFBool";
ExternProtoDeclare2.field[1] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "set_traceEnabled";
field5.accessType = "inputOnly";
field5.type = "SFBool";
ExternProtoDeclare2.field[2] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "position_changed";
field6.accessType = "outputOnly";
field6.type = "SFVec3f";
ExternProtoDeclare2.field[3] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "orientation_changed";
field7.accessType = "outputOnly";
field7.type = "SFRotation";
ExternProtoDeclare2.field[4] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "outputViewpointString";
field8.accessType = "outputOnly";
field8.type = "MFString";
ExternProtoDeclare2.field[5] = field8;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare2;

let ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfoNode" ><ProtoBody><WorldInfo DEF="ExamplePrototypeBody"></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "NewWorldInfoNode";
let ProtoBody10 = browser.currentScene.createNode("ProtoBody");
let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.DEF = "ExamplePrototypeBody";
ProtoBody10.children = new MFNode();

ProtoBody10.children[0] = WorldInfo11;

ProtoDeclare9.protoBody = ProtoBody10;

browser.currentScene.children[1] = ProtoDeclare9;

let ProtoInstance12 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance12.name = "NewWorldInfoNode";
browser.currentScene.children[2] = ProtoInstance12;

let ProtoDeclare13 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="EmissiveMaterial" ><ProtoInterface><field name="onlyColor" accessType="inputOutput" type="SFColor" value="1 0 0"></field>
</ProtoInterface>
<ProtoBody><!--Override default diffuseColor value 0.8 0.8 0.8--><Material diffuseColor="0 0 0"><!--Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.--><IS><connect nodeField="emissiveColor" protoField="onlyColor"></connect>
</IS>
</Material>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare13.name = "EmissiveMaterial";
let ProtoInterface14 = browser.currentScene.createNode("ProtoInterface");
let field15 = browser.currentScene.createNode("field");
field15.name = "onlyColor";
field15.accessType = "inputOutput";
field15.type = "SFColor";
field15.value = "1 0 0";
ProtoInterface14.field = new MFNode();

ProtoInterface14.field[0] = field15;

ProtoDeclare13.protoInterface = ProtoInterface14;

let ProtoBody16 = browser.currentScene.createNode("ProtoBody");
//Override default diffuseColor value 0.8 0.8 0.8
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[0,0,0]);
//Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.
let IS18 = browser.currentScene.createNode("IS");
let connect19 = browser.currentScene.createNode("connect");
connect19.nodeField = "emissiveColor";
connect19.protoField = "onlyColor";
IS18.connect = new MFNode();

IS18.connect[0] = connect19;

Material17.iS = IS18;

ProtoBody16.children = new MFNode();

ProtoBody16.children[0] = Material17;

ProtoDeclare13.protoBody = ProtoBody16;

browser.currentScene.children[3] = ProtoDeclare13;

let ProtoDeclare20 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShiftGroupUp2m" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><Group DEF="DefaultNodeValue" bboxSize="2 2 2" bboxCenter="0 0 0"><!--Authors need to override this node when creating the ProtoInstance fieldValue name="children"--></Group>
</field>
</ProtoInterface>
<ProtoBody><Transform translation="0 2 0" bboxCenter="0 0 0" bboxSize="-1 -1 -1"><Group bboxCenter="0 0 0" bboxSize="-1 -1 -1"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Group>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare20.name = "ShiftGroupUp2m";
let ProtoInterface21 = browser.currentScene.createNode("ProtoInterface");
let field22 = browser.currentScene.createNode("field");
field22.name = "children";
field22.accessType = "inputOutput";
field22.type = "MFNode";
let Group23 = browser.currentScene.createNode("Group");
Group23.DEF = "DefaultNodeValue";
Group23.bboxSize = new SFVec3f(new float[2,2,2]);
Group23.bboxCenter = new SFVec3f(new float[0,0,0]);
//Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\"
field22.children = new MFNode();

field22.children[0] = Group23;

ProtoInterface21.field = new MFNode();

ProtoInterface21.field[0] = field22;

ProtoDeclare20.protoInterface = ProtoInterface21;

let ProtoBody24 = browser.currentScene.createNode("ProtoBody");
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.translation = new SFVec3f(new float[0,2,0]);
Transform25.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform25.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Group26 = browser.currentScene.createNode("Group");
Group26.bboxCenter = new SFVec3f(new float[0,0,0]);
Group26.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "children";
connect28.protoField = "children";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

Group26.iS = IS27;

Transform25.children = new MFNode();

Transform25.children[0] = Group26;

ProtoBody24.children = new MFNode();

ProtoBody24.children[0] = Transform25;

ProtoDeclare20.protoBody = ProtoBody24;

browser.currentScene.children[4] = ProtoDeclare20;

let ProtoInstance29 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance29.name = "ShiftGroupUp2m";
browser.currentScene.children[5] = ProtoInstance29;

//====================
let Viewpoint30 = browser.currentScene.createNode("Viewpoint");
Viewpoint30.DEF = "ExampleSingleElement";
Viewpoint30.description = "Hello syntax";
browser.currentScene.children[6] = Viewpoint30;

let Group31 = browser.currentScene.createNode("Group");
Group31.DEF = "ExampleChildElement";
Group31.bboxCenter = new SFVec3f(new float[0,0,0]);
Group31.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape32 = browser.currentScene.createNode("Shape");
Shape32.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape32.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Box33 = browser.currentScene.createNode("Box");
Box33.size = new SFVec3f(new float[2,2,2]);
Box33.solid = True;
Shape32.geometry = Box33;

let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
Material35.diffuseColor = new SFColor(new float[0.6,0.4,0.2]);
Appearance34.material = Material35;

Shape32.appearance = Appearance34;

Group31.children = new MFNode();

Group31.children[0] = Shape32;

browser.currentScene.children[7] = Group31;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "TransformExampleUSE";
Transform36.rotation = new SFRotation(new float[0,1,0,0.78]);
Transform36.translation = new SFVec3f(new float[0,2.5,0]);
Transform36.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform36.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Group37 = browser.currentScene.createNode("Group");
Group37.USE = "ExampleChildElement";
Transform36.children = new MFNode();

Transform36.children[0] = Group37;

browser.currentScene.children[8] = Transform36;

let Collision38 = browser.currentScene.createNode("Collision");
Collision38.enabled = True;
Collision38.bboxCenter = new SFVec3f(new float[0,0,0]);
Collision38.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape39 = browser.currentScene.createNode("Shape");
Shape39.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape39.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//note that Collision proxy Shape is not rendered
let Sphere40 = browser.currentScene.createNode("Sphere");
Shape39.geometry = Sphere40;

let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Appearance41.material = Material42;

Shape39.appearance = Appearance41;

Collision38.proxy = Shape39;

let Group43 = browser.currentScene.createNode("Group");
Group43.USE = "ExampleChildElement";
Collision38.proxy = Group43;

browser.currentScene.children[9] = Collision38;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.translation = new SFVec3f(new float[0,-2.5,0]);
Transform44.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform44.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape45 = browser.currentScene.createNode("Shape");
Shape45.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape45.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance46 = browser.currentScene.createNode("Appearance");
let ProtoInstance47 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance47.name = "EmissiveMaterial";
let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "onlyColor";
fieldValue48.value = "0.2 0.6 0.6";
ProtoInstance47.fieldValue = new MFNode();

ProtoInstance47.fieldValue[0] = fieldValue48;

Appearance46.shaders = new MFNode();

Appearance46.shaders[0] = ProtoInstance47;

Shape45.appearance = Appearance46;

let Text49 = browser.currentScene.createNode("Text");
Text49.string = new MFString(new java.lang.String["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"]);
let FontStyle50 = browser.currentScene.createNode("FontStyle");
FontStyle50.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle50.size = 0.6;
Text49.fontStyle = FontStyle50;

Shape45.geometry = Text49;

Transform44.children = new MFNode();

Transform44.children[0] = Shape45;

browser.currentScene.children[10] = Transform44;

let ProtoInstance51 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance51.name = "ViewPositionOrientation";
let fieldValue52 = browser.currentScene.createNode("fieldValue");
fieldValue52.name = "enabled";
fieldValue52.value = "true";
ProtoInstance51.fieldValue = new MFNode();

ProtoInstance51.fieldValue[0] = fieldValue52;

browser.currentScene.children[11] = ProtoInstance51;

let TimeSensor53 = browser.currentScene.createNode("TimeSensor");
TimeSensor53.DEF = "Clock";
TimeSensor53.cycleInterval = 4;
TimeSensor53.loop = True;
browser.currentScene.children[12] = TimeSensor53;

let OrientationInterpolator54 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator54.DEF = "Spinner";
OrientationInterpolator54.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator54.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.14159,0,1,0,6.28318]);
browser.currentScene.children[13] = OrientationInterpolator54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "fraction_changed";
ROUTE55.fromNode = "Clock";
ROUTE55.toField = "set_fraction";
ROUTE55.toNode = "Spinner";
browser.currentScene.children[14] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "value_changed";
ROUTE56.fromNode = "Spinner";
ROUTE56.toField = "rotation";
ROUTE56.toNode = "TransformExampleUSE";
browser.currentScene.children[15] = ROUTE56;

let Inline57 = browser.currentScene.createNode("Inline");
Inline57.DEF = "someInline";
Inline57.url = new MFString(new java.lang.String["someUrl.x3d","http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"]);
Inline57.bboxCenter = new SFVec3f(new float[0,0,0]);
Inline57.bboxSize = new SFVec3f(new float[-1,-1,-1]);
browser.currentScene.children[16] = Inline57;

let IMPORT58 = browser.currentScene.createNode("IMPORT");
IMPORT58.AS = "someInlineRoot";
IMPORT58.importedDEF = "someName";
IMPORT58.inlineDEF = "someInline";
browser.currentScene.children[17] = IMPORT58;

let PositionInterpolator59 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator59.DEF = "StayInPlace";
PositionInterpolator59.key = new MFFloat(new float[0,1]);
PositionInterpolator59.keyValue = new MFVec3f(new float[0,0,0,0,0,0]);
browser.currentScene.children[18] = PositionInterpolator59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "fraction_changed";
ROUTE60.fromNode = "Clock";
ROUTE60.toField = "set_fraction";
ROUTE60.toNode = "StayInPlace";
browser.currentScene.children[19] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "value_changed";
ROUTE61.fromNode = "StayInPlace";
ROUTE61.toField = "set_translation";
ROUTE61.toNode = "someInlineRoot";
browser.currentScene.children[20] = ROUTE61;

