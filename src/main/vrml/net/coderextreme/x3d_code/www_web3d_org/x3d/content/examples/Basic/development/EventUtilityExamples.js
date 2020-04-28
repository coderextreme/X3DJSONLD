let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//========================================
//ExternProtoDeclare definitions are used here only for language development - do not copy into other scenes!
//ExternProtoDeclare node support is provided either by X3D-compliant browser or X3dToVrml97.xslt ExternProtoDeclare definitions.
//========================================
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "EventUtilityExamples.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "BooleanFilter";
ExternProtoDeclare3.appinfo = "BooleanFilter selectively passes true false or negated events.";
ExternProtoDeclare3.url = new MFString(new java.lang.String["EventUtilityPrototypes.x3d#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanFilter","EventUtilityPrototypes.wrl#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanFilter"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "set_boolean";
field4.accessType = "inputOnly";
field4.appinfo = "set_boolean is the input value to be filtered.";
field4.type = "SFBool";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "inputTrue";
field5.accessType = "outputOnly";
field5.appinfo = "inputTrue only passes a true value when set_boolean input is true.";
field5.type = "SFBool";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "inputFalse";
field6.accessType = "outputOnly";
field6.appinfo = "inputFalse only passes a false value when set_boolean is false.";
field6.type = "SFBool";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "inputNegate";
field7.accessType = "outputOnly";
field7.appinfo = "inputNegate provides opposite value by negating set_boolean input.";
field7.type = "SFBool";
ExternProtoDeclare3.field[3] = field7;

browser.currentScene.children[1] = ExternProtoDeclare3;

//========================================
let ExternProtoDeclare8 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "BooleanToggle";
ExternProtoDeclare8.appinfo = "BooleanToggle maintains state and negates output when a true input is provided.";
ExternProtoDeclare8.url = new MFString(new java.lang.String["EventUtilityPrototypes.x3d#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanToggle","EventUtilityPrototypes.wrl#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanToggle"]);
let field9 = browser.currentScene.createNode("field");
field9.name = "set_boolean";
field9.accessType = "inputOnly";
field9.appinfo = "If set_boolean input is true toggle state.";
field9.type = "SFBool";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "set_toggle";
field10.accessType = "inputOnly";
field10.appinfo = "Reset persistent state value.";
field10.type = "SFBool";
ExternProtoDeclare8.field[1] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "toggle";
field11.accessType = "initializeOnly";
field11.appinfo = "Persistent state value that gets toggled or reset.";
field11.type = "SFBool";
ExternProtoDeclare8.field[2] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "toggle_changed";
field12.accessType = "outputOnly";
field12.appinfo = "Output toggled persistent state value.";
field12.type = "SFBool";
ExternProtoDeclare8.field[3] = field12;

//warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet.
browser.currentScene.children[2] = ExternProtoDeclare8;

//========================================
let ExternProtoDeclare13 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare13.name = "BooleanTrigger";
ExternProtoDeclare13.appinfo = "BooleanTrigger converts time events to boolean true events.";
ExternProtoDeclare13.url = new MFString(new java.lang.String["EventUtilityPrototypes.x3d#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanTrigger","EventUtilityPrototypes.wrl#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanTrigger"]);
let field14 = browser.currentScene.createNode("field");
field14.name = "set_triggerTime";
field14.accessType = "inputOnly";
field14.appinfo = "set_triggerTime provides input time event typical event sent is TouchSensor touchTime.";
field14.type = "SFTime";
ExternProtoDeclare13.field = new MFNode();

ExternProtoDeclare13.field[0] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "triggerTrue";
field15.accessType = "outputOnly";
field15.appinfo = "triggerTrue outputs a true value whenever a triggerTime event is received.";
field15.type = "SFBool";
ExternProtoDeclare13.field[1] = field15;

browser.currentScene.children[3] = ExternProtoDeclare13;

//========================================
let ExternProtoDeclare16 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "IntegerTrigger";
ExternProtoDeclare16.appinfo = "IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).";
ExternProtoDeclare16.url = new MFString(new java.lang.String["EventUtilityPrototypes.x3d#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#IntegerTrigger","EventUtilityPrototypes.wrl#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#IntegerTrigger"]);
let field17 = browser.currentScene.createNode("field");
field17.name = "set_boolean";
field17.accessType = "inputOnly";
field17.appinfo = "If set_boolean input is true trigger output of integer value.";
field17.type = "SFBool";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "set_integerKey";
field18.accessType = "inputOnly";
field18.appinfo = "Resets value used for output when triggered later.";
field18.type = "SFInt32";
ExternProtoDeclare16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "integerKey";
field19.accessType = "inputOutput";
field19.appinfo = "integerKey is value for output when triggered.";
field19.type = "SFInt32";
ExternProtoDeclare16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "integerKey_changed";
field20.accessType = "outputOnly";
field20.appinfo = "Reports change in integerKey value.";
field20.type = "SFInt32";
ExternProtoDeclare16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "triggerValue";
field21.accessType = "outputOnly";
field21.appinfo = "triggerValue provides integer event output matching integerKey when true set_boolean received.";
field21.type = "SFInt32";
ExternProtoDeclare16.field[4] = field21;

browser.currentScene.children[4] = ExternProtoDeclare16;

//========================================
let ExternProtoDeclare22 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare22.name = "TimeTrigger";
ExternProtoDeclare22.appinfo = "TimeTrigger converts boolean true events to time events.";
ExternProtoDeclare22.url = new MFString(new java.lang.String["EventUtilityPrototypes.x3d#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#TimeTrigger","EventUtilityPrototypes.wrl#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#TimeTrigger"]);
let field23 = browser.currentScene.createNode("field");
field23.name = "set_boolean";
field23.accessType = "inputOnly";
field23.appinfo = "If set_boolean input is true trigger output time value.";
field23.type = "SFBool";
ExternProtoDeclare22.field = new MFNode();

ExternProtoDeclare22.field[0] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "triggerTime";
field24.accessType = "outputOnly";
field24.appinfo = "triggerTime is output time event sent when set_boolean input is true.";
field24.type = "SFTime";
ExternProtoDeclare22.field[1] = field24;

browser.currentScene.children[5] = ExternProtoDeclare22;

//========================================
let Group25 = browser.currentScene.createNode("Group");
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.translation = new SFVec3f(new float[0,3,0]);
let Anchor27 = browser.currentScene.createNode("Anchor");
Anchor27.description = "Click for BooleanFilter example";
Anchor27.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor27.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.diffuseColor = new SFColor(new float[0.6,0.6,0.2]);
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Text31 = browser.currentScene.createNode("Text");
Text31.string = new MFString(new java.lang.String["BooleanFilter example"]);
let FontStyle32 = browser.currentScene.createNode("FontStyle");
FontStyle32.DEF = "TextFont";
FontStyle32.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle32.size = 0.8;
FontStyle32.style = "BOLD";
Text31.fontStyle = FontStyle32;

Shape28.geometry = Text31;

Anchor27.children = new MFNode();

Anchor27.children[0] = Shape28;

Transform26.children = new MFNode();

Transform26.children[0] = Anchor27;

Group25.children = new MFNode();

Group25.children[0] = Transform26;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor34 = browser.currentScene.createNode("Anchor");
Anchor34.description = "Click for BooleanToggle example";
Anchor34.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor34.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"]);
let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.diffuseColor = new SFColor(new float[0.6,0.6,0.2]);
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let Text38 = browser.currentScene.createNode("Text");
Text38.string = new MFString(new java.lang.String["BooleanToggle example"]);
let FontStyle39 = browser.currentScene.createNode("FontStyle");
FontStyle39.USE = "TextFont";
Text38.fontStyle = FontStyle39;

Shape35.geometry = Text38;

Anchor34.children = new MFNode();

Anchor34.children[0] = Shape35;

Transform33.children = new MFNode();

Transform33.children[0] = Anchor34;

Group25.children[1] = Transform33;

let Transform40 = browser.currentScene.createNode("Transform");
let Anchor41 = browser.currentScene.createNode("Anchor");
Anchor41.description = "Click for BooleanTrigger example";
Anchor41.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor41.url = new MFString(new java.lang.String["../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"]);
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.6,0.6,0.2]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let Text45 = browser.currentScene.createNode("Text");
Text45.string = new MFString(new java.lang.String["BooleanTrigger example"]);
let FontStyle46 = browser.currentScene.createNode("FontStyle");
FontStyle46.USE = "TextFont";
Text45.fontStyle = FontStyle46;

Shape42.geometry = Text45;

Anchor41.children = new MFNode();

Anchor41.children[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Anchor41;

Group25.children[2] = Transform40;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,-1.5,0]);
let Anchor48 = browser.currentScene.createNode("Anchor");
Anchor48.description = "Click for IntegerTrigger example";
Anchor48.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor48.url = new MFString(new java.lang.String["../../Savage/Tools/Animation/MaterialChoiceExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d","../../Savage/Tools/Animation/MaterialChoiceExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.wrl"]);
let Shape49 = browser.currentScene.createNode("Shape");
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.diffuseColor = new SFColor(new float[0.6,0.6,0.2]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let Text52 = browser.currentScene.createNode("Text");
Text52.string = new MFString(new java.lang.String["IntegerTrigger example"]);
let FontStyle53 = browser.currentScene.createNode("FontStyle");
FontStyle53.USE = "TextFont";
Text52.fontStyle = FontStyle53;

Shape49.geometry = Text52;

Anchor48.children = new MFNode();

Anchor48.children[0] = Shape49;

Transform47.children = new MFNode();

Transform47.children[0] = Anchor48;

Group25.children[3] = Transform47;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.DEF = "TimeTriggerTransform";
Transform54.translation = new SFVec3f(new float[0,-3,0]);
let TouchSensor55 = browser.currentScene.createNode("TouchSensor");
TouchSensor55.DEF = "TimeTriggerTouchSensor";
TouchSensor55.description = "Click forTimeTrigger example";
Transform54.children = new MFNode();

Transform54.children[0] = TouchSensor55;

let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.6,0.6,0.2]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Text59 = browser.currentScene.createNode("Text");
Text59.string = new MFString(new java.lang.String["TimeTrigger example"]);
let FontStyle60 = browser.currentScene.createNode("FontStyle");
FontStyle60.USE = "TextFont";
Text59.fontStyle = FontStyle60;

Shape56.geometry = Text59;

Transform54.children[1] = Shape56;

Group25.children[4] = Transform54;

let TimeTrigger61 = browser.currentScene.createNode("TimeTrigger");
TimeTrigger61.DEF = "TimeTriggerNode";
Group25.children[5] = TimeTrigger61;

let TimeSensor62 = browser.currentScene.createNode("TimeSensor");
TimeSensor62.DEF = "TimeTriggerTimeSensor";
TimeSensor62.cycleInterval = 2;
Group25.children[6] = TimeSensor62;

let OrientationInterpolator63 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator63.DEF = "TimeTriggerOrientationInterpolator";
OrientationInterpolator63.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator63.keyValue = new MFRotation(new float[0,1,0,0,0,1,0,3.14159,0,1,0,6.2432]);
Group25.children[7] = OrientationInterpolator63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromField = "isActive";
ROUTE64.fromNode = "TimeTriggerTouchSensor";
ROUTE64.toField = "set_boolean";
ROUTE64.toNode = "TimeTriggerNode";
Group25.children[8] = ROUTE64;

let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "triggerTime";
ROUTE65.fromNode = "TimeTriggerNode";
ROUTE65.toField = "startTime";
ROUTE65.toNode = "TimeTriggerTimeSensor";
Group25.children[9] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "fraction_changed";
ROUTE66.fromNode = "TimeTriggerTimeSensor";
ROUTE66.toField = "set_fraction";
ROUTE66.toNode = "TimeTriggerOrientationInterpolator";
Group25.children[10] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "value_changed";
ROUTE67.fromNode = "TimeTriggerOrientationInterpolator";
ROUTE67.toField = "set_rotation";
ROUTE67.toNode = "TimeTriggerTransform";
Group25.children[11] = ROUTE67;

browser.currentScene.children[6] = Group25;

