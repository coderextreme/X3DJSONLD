var browser = X3D.getBrowser();
var X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
ProtoDeclare2 = browser.currentScene.createNode("ProtoDeclare");
ProtoDeclare2.name = "Process";
ProtoBody3 = browser.currentScene.createNode("ProtoBody");
Group4 = browser.currentScene.createNode("Group");
//left
Transform5 = browser.currentScene.createNode("Transform");
Transform5.scale = [0.5,0.5,0.5];
Shape6 = browser.currentScene.createNode("Shape");
Appearance7 = browser.currentScene.createNode("Appearance");
Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = [0.7,1,0];
Material8.transparency = 0.5;
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

Extrusion9 = browser.currentScene.createNode("Extrusion");
Extrusion9.creaseAngle = 0.785;
Extrusion9.crossSection = [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0];
Extrusion9.spine = [-2.5,0,0,-1.5,0,0];
Shape6.geometry = Extrusion9;

Transform5.children = [];

Transform5.children[0] = Shape6;

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group4.children = [];

Group4.children[0] = Transform5;

//right
Transform10 = browser.currentScene.createNode("Transform");
Transform10.scale = [0.5,0.5,0.5];
Shape11 = browser.currentScene.createNode("Shape");
Appearance12 = browser.currentScene.createNode("Appearance");
Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = [0,0.7,1];
Material13.transparency = 0.5;
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

Extrusion14 = browser.currentScene.createNode("Extrusion");
Extrusion14.creaseAngle = 0.785;
Extrusion14.crossSection = [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0];
Extrusion14.spine = [1.5,0,0,2.5,0,0];
Shape11.geometry = Extrusion14;

Transform10.children = [];

Transform10.children[0] = Shape11;

Transform15 = browser.currentScene.createNode("Transform");
Transform15.translation = [2,0,0];
Shape16 = browser.currentScene.createNode("Shape");
Appearance17 = browser.currentScene.createNode("Appearance");
Material18 = browser.currentScene.createNode("Material");
Material18.DEF = "MaterialLightBlue";
Material18.diffuseColor = [1,1,1];
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

Text19 = browser.currentScene.createNode("Text");
Text19.DEF = "RightString";
Text19.string = ["r"];
Shape16.geometry = Text19;

Transform15.children = [];

Transform15.children[0] = Shape16;

Transform10.children[1] = Transform15;

StringSensor20 = browser.currentScene.createNode("StringSensor");
StringSensor20.DEF = "RightSensor";
StringSensor20.enabled = False;
Transform10.children[2] = StringSensor20;

TouchSensor21 = browser.currentScene.createNode("TouchSensor");
TouchSensor21.description = "touch to activate";
TouchSensor21.DEF = "RightTouch";
Transform10.children[3] = TouchSensor21;

Group4.children[1] = Transform10;

//up
Transform22 = browser.currentScene.createNode("Transform");
Transform22.scale = [0.5,0.5,0.5];
Shape23 = browser.currentScene.createNode("Shape");
Appearance24 = browser.currentScene.createNode("Appearance");
Material25 = browser.currentScene.createNode("Material");
Material25.diffuseColor = [0,0.7,1];
Material25.transparency = 0.5;
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Extrusion26 = browser.currentScene.createNode("Extrusion");
Extrusion26.creaseAngle = 0.785;
Extrusion26.crossSection = [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0];
Extrusion26.spine = [0,1.5,0,0,2.5,0];
Shape23.geometry = Extrusion26;

Transform22.children = [];

Transform22.children[0] = Shape23;

Transform27 = browser.currentScene.createNode("Transform");
Transform27.translation = [-0.5,2,0];
Shape28 = browser.currentScene.createNode("Shape");
Appearance29 = browser.currentScene.createNode("Appearance");
Material30 = browser.currentScene.createNode("Material");
Material30.USE = "MaterialLightBlue";
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

Text31 = browser.currentScene.createNode("Text");
Text31.DEF = "UpString";
Text31.string = ["u"];
Shape28.geometry = Text31;

Transform27.children = [];

Transform27.children[0] = Shape28;

Transform22.children[1] = Transform27;

StringSensor32 = browser.currentScene.createNode("StringSensor");
StringSensor32.DEF = "UpSensor";
StringSensor32.enabled = False;
Transform22.children[2] = StringSensor32;

TouchSensor33 = browser.currentScene.createNode("TouchSensor");
TouchSensor33.description = "touch to activate";
TouchSensor33.DEF = "UpTouch";
Transform22.children[3] = TouchSensor33;

Group4.children[2] = Transform22;

//down
Transform34 = browser.currentScene.createNode("Transform");
Transform34.scale = [0.5,0.5,0.5];
Shape35 = browser.currentScene.createNode("Shape");
Appearance36 = browser.currentScene.createNode("Appearance");
Material37 = browser.currentScene.createNode("Material");
Material37.diffuseColor = [0.7,1,0];
Material37.transparency = 0.5;
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

Extrusion38 = browser.currentScene.createNode("Extrusion");
Extrusion38.creaseAngle = 0.785;
Extrusion38.crossSection = [1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0];
Extrusion38.spine = [0,-2.5,0,0,-1.5,0];
Shape35.geometry = Extrusion38;

Transform34.children = [];

Transform34.children[0] = Shape35;

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group4.children[3] = Transform34;

//center
Transform39 = browser.currentScene.createNode("Transform");
Shape40 = browser.currentScene.createNode("Shape");
Appearance41 = browser.currentScene.createNode("Appearance");
Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = [1,0,0.7];
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

Sphere43 = browser.currentScene.createNode("Sphere");
Shape40.geometry = Sphere43;

Transform39.children = [];

Transform39.children[0] = Shape40;

Transform44 = browser.currentScene.createNode("Transform");
Transform44.scale = [0.5,0.5,0.5];
Transform44.translation = [-0.5,0,1];
Shape45 = browser.currentScene.createNode("Shape");
Appearance46 = browser.currentScene.createNode("Appearance");
Material47 = browser.currentScene.createNode("Material");
Material47.USE = "MaterialLightBlue";
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

Text48 = browser.currentScene.createNode("Text");
Text48.DEF = "CenterString";
Shape45.geometry = Text48;

Transform44.children = [];

Transform44.children[0] = Shape45;

Transform39.children[1] = Transform44;

StringSensor49 = browser.currentScene.createNode("StringSensor");
StringSensor49.DEF = "CenterSensor";
StringSensor49.enabled = False;
Transform39.children[2] = StringSensor49;

TouchSensor50 = browser.currentScene.createNode("TouchSensor");
TouchSensor50.description = "touch to activate";
TouchSensor50.DEF = "CenterTouch";
Transform39.children[3] = TouchSensor50;

Group4.children[4] = Transform39;

ProtoBody3.children = [];

ProtoBody3.children[0] = Group4;

Script51 = browser.currentScene.createNode("Script");
Script51.DEF = "RightSingleToMultiString";
field52 = browser.currentScene.createNode("field");
field52.name = "set_rightstring";
field52.accessType = "inputOnly";
field52.type = "SFString";
Script51.field = [];

Script51.field[0] = field52;

field53 = browser.currentScene.createNode("field");
field53.name = "rightlines";
field53.accessType = "outputOnly";
field53.type = "MFString";
Script51.field[1] = field53;


Script51.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}`)
ProtoBody3.children[1] = Script51;

Script54 = browser.currentScene.createNode("Script");
Script54.DEF = "UpSingleToMultiString";
field55 = browser.currentScene.createNode("field");
field55.name = "set_upstring";
field55.accessType = "inputOnly";
field55.type = "SFString";
Script54.field = [];

Script54.field[0] = field55;

field56 = browser.currentScene.createNode("field");
field56.name = "uplines";
field56.accessType = "outputOnly";
field56.type = "MFString";
Script54.field[1] = field56;


Script54.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}`)
ProtoBody3.children[2] = Script54;

Script57 = browser.currentScene.createNode("Script");
Script57.DEF = "CenterSingleToMultiString";
field58 = browser.currentScene.createNode("field");
field58.name = "set_centerstring";
field58.accessType = "inputOnly";
field58.type = "SFString";
Script57.field = [];

Script57.field[0] = field58;

field59 = browser.currentScene.createNode("field");
field59.name = "centerlines";
field59.accessType = "outputOnly";
field59.type = "MFString";
Script57.field[1] = field59;


Script57.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}`)
ProtoBody3.children[3] = Script57;

ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "enteredText";
ROUTE60.fromNode = "CenterSensor";
ROUTE60.toField = "set_centerstring";
ROUTE60.toNode = "CenterSingleToMultiString";
ProtoBody3.children[4] = ROUTE60;

ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "centerlines";
ROUTE61.fromNode = "CenterSingleToMultiString";
ROUTE61.toField = "set_string";
ROUTE61.toNode = "CenterString";
ProtoBody3.children[5] = ROUTE61;

ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "isOver";
ROUTE62.fromNode = "CenterTouch";
ROUTE62.toField = "set_enabled";
ROUTE62.toNode = "CenterSensor";
ProtoBody3.children[6] = ROUTE62;

ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "enteredText";
ROUTE63.fromNode = "RightSensor";
ROUTE63.toField = "set_rightstring";
ROUTE63.toNode = "RightSingleToMultiString";
ProtoBody3.children[7] = ROUTE63;

ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromField = "rightlines";
ROUTE64.fromNode = "RightSingleToMultiString";
ROUTE64.toField = "set_string";
ROUTE64.toNode = "RightString";
ProtoBody3.children[8] = ROUTE64;

ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "isOver";
ROUTE65.fromNode = "RightTouch";
ROUTE65.toField = "set_enabled";
ROUTE65.toNode = "RightSensor";
ProtoBody3.children[9] = ROUTE65;

ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "enteredText";
ROUTE66.fromNode = "UpSensor";
ROUTE66.toField = "set_upstring";
ROUTE66.toNode = "UpSingleToMultiString";
ProtoBody3.children[10] = ROUTE66;

ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "uplines";
ROUTE67.fromNode = "UpSingleToMultiString";
ROUTE67.toField = "set_string";
ROUTE67.toNode = "UpString";
ProtoBody3.children[11] = ROUTE67;

ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "isOver";
ROUTE68.fromNode = "UpTouch";
ROUTE68.toField = "set_enabled";
ROUTE68.toNode = "UpSensor";
ProtoBody3.children[12] = ROUTE68;

ProtoDeclare2.protoBody = ProtoBody3;

browser.currentScene.children = [];

browser.currentScene.children[0] = ProtoDeclare2;

NavigationInfo69 = browser.currentScene.createNode("NavigationInfo");
browser.currentScene.children[1] = NavigationInfo69;

Viewpoint70 = browser.currentScene.createNode("Viewpoint");
Viewpoint70.description = "Process pipes";
Viewpoint70.orientation = [1,0,0,-0.4];
Viewpoint70.position = [0,5,12];
browser.currentScene.children[2] = Viewpoint70;

Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = [0,-2.5,0];
ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "Process";
Transform71.children = [];

Transform71.children[0] = ProtoInstance72;

browser.currentScene.children[3] = Transform71;

Transform73 = browser.currentScene.createNode("Transform");
ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "Process";
Transform73.children = [];

Transform73.children[0] = ProtoInstance74;

browser.currentScene.children[4] = Transform73;

Transform75 = browser.currentScene.createNode("Transform");
Transform75.translation = [0,2.5,0];
ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.name = "Process";
Transform75.children = [];

Transform75.children[0] = ProtoInstance76;

browser.currentScene.children[5] = Transform75;

