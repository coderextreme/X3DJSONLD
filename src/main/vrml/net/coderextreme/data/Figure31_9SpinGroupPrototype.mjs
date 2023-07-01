let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "Figure31_9SpinGroupPrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "reference";
meta4.content = "http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "translator";
meta5.content = "Don Brutzman";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "created";
meta6.content = "24 October 2000";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "modified";
meta7.content = "20 October 2019";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "description";
meta8.content = "The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup.";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "generator";
meta10.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "license";
meta11.content = "../../license.html";
head1.meta[9] = meta11;

head = head1;

let WorldInfo13 = browser.currentScene.createNode("WorldInfo");
WorldInfo13.title = "Figure31_9SpinGroupPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo13;

let ProtoDeclare14 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="SpinGroup" ><ProtoInterface><field name="children" accessType="inputOutput" type="MFNode"><!--NULL node initialization--></field>
<field name="cycleInterval" accessType="inputOutput" type="SFTime" value="1"></field>
<field name="loop" accessType="inputOutput" type="SFBool" value="false"></field>
<field name="startTime" accessType="inputOutput" type="SFTime" value="0"></field>
<field name="stopTime" accessType="inputOutput" type="SFTime" value="0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="SpinGroupTransform"><IS><connect nodeField="children" protoField="children"></connect>
</IS>
</Transform>
<!--following nodes will not be rendered, only the first node of a ProtoBody is drawn--><TimeSensor DEF="SpinGroupClock"><IS><connect nodeField="cycleInterval" protoField="cycleInterval"></connect>
<connect nodeField="loop" protoField="loop"></connect>
<connect nodeField="startTime" protoField="startTime"></connect>
<connect nodeField="stopTime" protoField="stopTime"></connect>
</IS>
</TimeSensor>
<OrientationInterpolator DEF="Spinner" key="0 0.5 1" keyValue="0 1 0 0 0 1 0 3.14 0 1 0 6.28"></OrientationInterpolator>
<ROUTE fromField="fraction_changed" fromNode="SpinGroupClock" toField="set_fraction" toNode="Spinner"></ROUTE>
<ROUTE fromField="value_changed" fromNode="Spinner" toField="set_rotation" toNode="SpinGroupTransform"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare14.name = "SpinGroup";
let ProtoInterface15 = browser.currentScene.createNode("ProtoInterface");
let field16 = browser.currentScene.createNode("field");
field16.name = "children";
field16.accessType = "inputOutput";
field16.type = "MFNode";
//NULL node initialization
ProtoInterface15.field = new MFNode();

ProtoInterface15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "cycleInterval";
field17.accessType = "inputOutput";
field17.type = "SFTime";
field17.value = "1";
ProtoInterface15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "loop";
field18.accessType = "inputOutput";
field18.type = "SFBool";
field18.value = "false";
ProtoInterface15.field[2] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "startTime";
field19.accessType = "inputOutput";
field19.type = "SFTime";
field19.value = "0";
ProtoInterface15.field[3] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "stopTime";
field20.accessType = "inputOutput";
field20.type = "SFTime";
field20.value = "0";
ProtoInterface15.field[4] = field20;

ProtoDeclare14.protoInterface = ProtoInterface15;

let ProtoBody21 = browser.currentScene.createNode("ProtoBody");
let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "SpinGroupTransform";
let IS23 = browser.currentScene.createNode("IS");
let connect24 = browser.currentScene.createNode("connect");
connect24.nodeField = "children";
connect24.protoField = "children";
IS23.connect = new MFNode();

IS23.connect[0] = connect24;

Transform22.iS = IS23;

ProtoBody21.children = new MFNode();

ProtoBody21.children[0] = Transform22;

//following nodes will not be rendered, only the first node of a ProtoBody is drawn
let TimeSensor25 = browser.currentScene.createNode("TimeSensor");
TimeSensor25.DEF = "SpinGroupClock";
let IS26 = browser.currentScene.createNode("IS");
let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "cycleInterval";
connect27.protoField = "cycleInterval";
IS26.connect = new MFNode();

IS26.connect[0] = connect27;

let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "loop";
connect28.protoField = "loop";
IS26.connect[1] = connect28;

let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "startTime";
connect29.protoField = "startTime";
IS26.connect[2] = connect29;

let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "stopTime";
connect30.protoField = "stopTime";
IS26.connect[3] = connect30;

TimeSensor25.iS = IS26;

ProtoBody21.children[1] = TimeSensor25;

let OrientationInterpolator31 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator31.DEF = "Spinner";
OrientationInterpolator31.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator31.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.14,0,1,0,6.28]);
ProtoBody21.children[2] = OrientationInterpolator31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromField = "fraction_changed";
ROUTE32.fromNode = "SpinGroupClock";
ROUTE32.toField = "set_fraction";
ROUTE32.toNode = "Spinner";
ProtoBody21.children[3] = ROUTE32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromField = "value_changed";
ROUTE33.fromNode = "Spinner";
ROUTE33.toField = "set_rotation";
ROUTE33.toNode = "SpinGroupTransform";
ProtoBody21.children[4] = ROUTE33;

ProtoDeclare14.protoBody = ProtoBody21;

browser.currentScene.children[1] = ProtoDeclare14;

//Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare).
let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.description = "Click on blue crossbar to activate second SpinGroup";
Viewpoint34.orientation = new SFRotation(new float[1,0,0,-0.52]);
Viewpoint34.position = new SFVec3f(new float[0,18,30]);
browser.currentScene.children[2] = Viewpoint34;

//Create an instance, meaning actual nodes that render
let ProtoInstance35 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance35.name = "SpinGroup";
let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "cycleInterval";
fieldValue36.value = "8";
ProtoInstance35.fieldValue = new MFNode();

ProtoInstance35.fieldValue[0] = fieldValue36;

let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "loop";
fieldValue37.value = "true";
ProtoInstance35.fieldValue[1] = fieldValue37;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "children";
let Shape39 = browser.currentScene.createNode("Shape");
let Box40 = browser.currentScene.createNode("Box");
Box40.size = new SFVec3f(new float[25,2,2]);
Shape39.geometry = Box40;

let Appearance41 = browser.currentScene.createNode("Appearance");
Appearance41.DEF = "Green";
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new SFColor(new float[0,1,0.3]);
Appearance41.material = Material42;

Shape39.appearance = Appearance41;

fieldValue38.children = new MFNode();

fieldValue38.children[0] = Shape39;

let Shape43 = browser.currentScene.createNode("Shape");
let Box44 = browser.currentScene.createNode("Box");
Box44.size = new SFVec3f(new float[2,25,2]);
Shape43.geometry = Box44;

let Appearance45 = browser.currentScene.createNode("Appearance");
Appearance45.USE = "Green";
Shape43.appearance = Appearance45;

fieldValue38.children[1] = Shape43;

let ProtoInstance46 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance46.name = "SpinGroup";
ProtoInstance46.DEF = "SecondSpinGroup";
let fieldValue47 = browser.currentScene.createNode("fieldValue");
fieldValue47.name = "cycleInterval";
fieldValue47.value = "4";
ProtoInstance46.fieldValue = new MFNode();

ProtoInstance46.fieldValue[0] = fieldValue47;

let fieldValue48 = browser.currentScene.createNode("fieldValue");
fieldValue48.name = "loop";
fieldValue48.value = "true";
ProtoInstance46.fieldValue[1] = fieldValue48;

let fieldValue49 = browser.currentScene.createNode("fieldValue");
fieldValue49.name = "stopTime";
fieldValue49.value = "1";
ProtoInstance46.fieldValue[2] = fieldValue49;

let fieldValue50 = browser.currentScene.createNode("fieldValue");
fieldValue50.name = "children";
let TouchSensor51 = browser.currentScene.createNode("TouchSensor");
TouchSensor51.DEF = "ActivateSecondSpinGroup";
TouchSensor51.description = "Activate second SpinGroup by clicking blue bar";
fieldValue50.children = new MFNode();

fieldValue50.children[0] = TouchSensor51;

let Shape52 = browser.currentScene.createNode("Shape");
let Box53 = browser.currentScene.createNode("Box");
Box53.size = new SFVec3f(new float[2,2.05,25]);
Shape52.geometry = Box53;

let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.diffuseColor = new SFColor(new float[0,0.3,1]);
Appearance54.material = Material55;

Shape52.appearance = Appearance54;

fieldValue50.children[1] = Shape52;

ProtoInstance46.fieldValue[3] = fieldValue50;

//stopTime > startTime ensures that initial state is stopped
fieldValue38.children[2] = ProtoInstance46;

ProtoInstance35.fieldValue[2] = fieldValue38;

browser.currentScene.children[3] = ProtoInstance35;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "touchTime";
ROUTE56.fromNode = "ActivateSecondSpinGroup";
ROUTE56.toField = "startTime";
ROUTE56.toNode = "SecondSpinGroup";
browser.currentScene.children[4] = ROUTE56;

