let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "BooleanSequencerExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Group3 = browser.currentScene.createNode("Group");
Group3.DEF = "HUDGroup";
let ProximitySensor4 = browser.currentScene.createNode("ProximitySensor");
ProximitySensor4.DEF = "WhereSensor";
ProximitySensor4.size = new SFVec3f(new float[1000,1000,1000]);
Group3.children = new MFNode();

Group3.children[0] = ProximitySensor4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "BillboardWhereTransform";
let Transform6 = browser.currentScene.createNode("Transform");
Transform6.rotation = new SFRotation(new float[1,0,0,-0.03]);
Transform6.translation = new SFVec3f(new float[0,0,-12]);
let Billboard7 = browser.currentScene.createNode("Billboard");
let Transform8 = browser.currentScene.createNode("Transform");
Transform8.DEF = "BillboardPlaneTransform";
let TouchSensor9 = browser.currentScene.createNode("TouchSensor");
TouchSensor9.DEF = "Toucher";
TouchSensor9.description = "Click text to start clock and run multiple BooleanSequencers";
Transform8.children = new MFNode();

Transform8.children[0] = TouchSensor9;

let Shape10 = browser.currentScene.createNode("Shape");
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[0,1,1]);
Appearance11.material = Material12;

Shape10.appearance = Appearance11;

let Text13 = browser.currentScene.createNode("Text");
Text13.string = new MFString(new java.lang.String["Click text to start clock, run","multiple BooleanSequencers","","","","See Viewpoint description","for bound Viewpoint number"]);
let FontStyle14 = browser.currentScene.createNode("FontStyle");
FontStyle14.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text13.fontStyle = FontStyle14;

Shape10.geometry = Text13;

Transform8.children[1] = Shape10;

Billboard7.children = new MFNode();

Billboard7.children[0] = Transform8;

Transform6.children = new MFNode();

Transform6.children[0] = Billboard7;

Transform5.children = new MFNode();

Transform5.children[0] = Transform6;

Group3.children[1] = Transform5;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromField = "position_changed";
ROUTE15.fromNode = "WhereSensor";
ROUTE15.toField = "set_translation";
ROUTE15.toNode = "BillboardWhereTransform";
Group3.children[2] = ROUTE15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromField = "orientation_changed";
ROUTE16.fromNode = "WhereSensor";
ROUTE16.toField = "set_rotation";
ROUTE16.toNode = "BillboardWhereTransform";
Group3.children[3] = ROUTE16;

browser.currentScene.children[1] = Group3;

let TimeSensor17 = browser.currentScene.createNode("TimeSensor");
TimeSensor17.DEF = "Clock";
TimeSensor17.cycleInterval = 10;
browser.currentScene.children[2] = TimeSensor17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromField = "touchTime";
ROUTE18.fromNode = "Toucher";
ROUTE18.toField = "set_startTime";
ROUTE18.toNode = "Clock";
browser.currentScene.children[3] = ROUTE18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "FrontUpViewpoint";
Viewpoint19.description = "View 0, Front Up";
browser.currentScene.children[4] = Viewpoint19;

let Group20 = browser.currentScene.createNode("Group");
Group20.DEF = "AnimatedView1";
let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "LeftViewpoint";
Viewpoint21.description = "View 1, Left";
Viewpoint21.orientation = new SFRotation(new float[0,1,0,-1.57]);
Viewpoint21.position = new SFVec3f(new float[-10,0,0]);
Group20.children = new MFNode();

Group20.children[0] = Viewpoint21;

let BooleanSequencer22 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer22.DEF = "LeftViewBinder";
BooleanSequencer22.key = new MFFloat(new float[0,0.1,0.25]);
BooleanSequencer22.keyValue = new MFBool(new boolean[False,True,False]);
Group20.children[1] = BooleanSequencer22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromField = "fraction_changed";
ROUTE23.fromNode = "Clock";
ROUTE23.toField = "set_fraction";
ROUTE23.toNode = "LeftViewBinder";
Group20.children[2] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "value_changed";
ROUTE24.fromNode = "LeftViewBinder";
ROUTE24.toField = "set_bind";
ROUTE24.toNode = "LeftViewpoint";
Group20.children[3] = ROUTE24;

browser.currentScene.children[5] = Group20;

let Group25 = browser.currentScene.createNode("Group");
Group25.DEF = "AnimatedView2";
let Viewpoint26 = browser.currentScene.createNode("Viewpoint");
Viewpoint26.DEF = "BackViewpoint";
Viewpoint26.description = "View 2, Back";
Viewpoint26.orientation = new SFRotation(new float[0,1,0,-3.14]);
Viewpoint26.position = new SFVec3f(new float[0,0,-10]);
Group25.children = new MFNode();

Group25.children[0] = Viewpoint26;

let BooleanSequencer27 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer27.DEF = "BackViewBinder";
BooleanSequencer27.key = new MFFloat(new float[0,0.375,0.475]);
BooleanSequencer27.keyValue = new MFBool(new boolean[False,True,False]);
Group25.children[1] = BooleanSequencer27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromField = "fraction_changed";
ROUTE28.fromNode = "Clock";
ROUTE28.toField = "set_fraction";
ROUTE28.toNode = "BackViewBinder";
Group25.children[2] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromField = "value_changed";
ROUTE29.fromNode = "BackViewBinder";
ROUTE29.toField = "set_bind";
ROUTE29.toNode = "BackViewpoint";
Group25.children[3] = ROUTE29;

browser.currentScene.children[6] = Group25;

let Group30 = browser.currentScene.createNode("Group");
Group30.DEF = "AnimatedView3";
let Viewpoint31 = browser.currentScene.createNode("Viewpoint");
Viewpoint31.DEF = "RightViewpoint";
Viewpoint31.description = "View 3, Right";
Viewpoint31.orientation = new SFRotation(new float[0,1,0,1.57]);
Viewpoint31.position = new SFVec3f(new float[10,0,0]);
Group30.children = new MFNode();

Group30.children[0] = Viewpoint31;

let BooleanSequencer32 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer32.DEF = "RightViewBinder";
BooleanSequencer32.key = new MFFloat(new float[0,0.5,0.6]);
BooleanSequencer32.keyValue = new MFBool(new boolean[False,True,False]);
Group30.children[1] = BooleanSequencer32;

let ROUTE33 = browser.currentScene.createNode("ROUTE");
ROUTE33.fromField = "fraction_changed";
ROUTE33.fromNode = "Clock";
ROUTE33.toField = "set_fraction";
ROUTE33.toNode = "RightViewBinder";
Group30.children[2] = ROUTE33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromField = "value_changed";
ROUTE34.fromNode = "RightViewBinder";
ROUTE34.toField = "set_bind";
ROUTE34.toNode = "RightViewpoint";
Group30.children[3] = ROUTE34;

browser.currentScene.children[7] = Group30;

let Group35 = browser.currentScene.createNode("Group");
Group35.DEF = "AnimatedView4";
let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.DEF = "TopViewpoint";
Viewpoint36.description = "View 4, Top";
Viewpoint36.orientation = new SFRotation(new float[1,0,0,-1.57]);
Viewpoint36.position = new SFVec3f(new float[0,10,0]);
Group35.children = new MFNode();

Group35.children[0] = Viewpoint36;

let BooleanSequencer37 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer37.DEF = "TopViewBinder";
BooleanSequencer37.key = new MFFloat(new float[0.625,0.725]);
BooleanSequencer37.keyValue = new MFBool(new boolean[True,False]);
Group35.children[1] = BooleanSequencer37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromField = "fraction_changed";
ROUTE38.fromNode = "Clock";
ROUTE38.toField = "set_fraction";
ROUTE38.toNode = "TopViewBinder";
Group35.children[2] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "value_changed";
ROUTE39.fromNode = "TopViewBinder";
ROUTE39.toField = "set_bind";
ROUTE39.toNode = "TopViewpoint";
Group35.children[3] = ROUTE39;

browser.currentScene.children[8] = Group35;

let Group40 = browser.currentScene.createNode("Group");
Group40.DEF = "AnimatedView5";
let Viewpoint41 = browser.currentScene.createNode("Viewpoint");
Viewpoint41.DEF = "FrontDownViewpoint";
Viewpoint41.description = "View 5, Front Down";
Viewpoint41.orientation = new SFRotation(new float[1,0,0,-3.14]);
Viewpoint41.position = new SFVec3f(new float[0,0,-10]);
Group40.children = new MFNode();

Group40.children[0] = Viewpoint41;

let BooleanSequencer42 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer42.DEF = "FrontDownViewBinder";
BooleanSequencer42.key = new MFFloat(new float[0.75,0.85]);
BooleanSequencer42.keyValue = new MFBool(new boolean[True,False]);
Group40.children[1] = BooleanSequencer42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromField = "fraction_changed";
ROUTE43.fromNode = "Clock";
ROUTE43.toField = "set_fraction";
ROUTE43.toNode = "FrontDownViewBinder";
Group40.children[2] = ROUTE43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "value_changed";
ROUTE44.fromNode = "FrontDownViewBinder";
ROUTE44.toField = "set_bind";
ROUTE44.toNode = "FrontDownViewpoint";
Group40.children[3] = ROUTE44;

browser.currentScene.children[9] = Group40;

let Group45 = browser.currentScene.createNode("Group");
Group45.DEF = "AnimatedView6";
let Viewpoint46 = browser.currentScene.createNode("Viewpoint");
Viewpoint46.DEF = "BottomViewpoint";
Viewpoint46.description = "View 6, Bottom";
Viewpoint46.orientation = new SFRotation(new float[1,0,0,1.57]);
Viewpoint46.position = new SFVec3f(new float[0,-10,0]);
Group45.children = new MFNode();

Group45.children[0] = Viewpoint46;

let BooleanSequencer47 = browser.currentScene.createNode("BooleanSequencer");
BooleanSequencer47.DEF = "BottomViewBinder";
BooleanSequencer47.key = new MFFloat(new float[0.875,0.975]);
BooleanSequencer47.keyValue = new MFBool(new boolean[True,False]);
Group45.children[1] = BooleanSequencer47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "fraction_changed";
ROUTE48.fromNode = "Clock";
ROUTE48.toField = "set_fraction";
ROUTE48.toNode = "BottomViewBinder";
Group45.children[2] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "value_changed";
ROUTE49.fromNode = "BottomViewBinder";
ROUTE49.toField = "set_bind";
ROUTE49.toNode = "BottomViewpoint";
Group45.children[3] = ROUTE49;

browser.currentScene.children[10] = Group45;

let Switch50 = browser.currentScene.createNode("Switch");
Switch50.DEF = "DebugSwitch";
Switch50.whichChoice = 0;
let Group51 = browser.currentScene.createNode("Group");
let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "Debug";
let field53 = browser.currentScene.createNode("field");
field53.name = "setFraction";
field53.accessType = "inputOnly";
field53.type = "SFFloat";
Script52.field = new MFNode();

Script52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "setFrontUpViewBind";
field54.accessType = "inputOnly";
field54.type = "SFBool";
Script52.field[1] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "setLeftViewBind";
field55.accessType = "inputOnly";
field55.type = "SFBool";
Script52.field[2] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "setBackViewBind";
field56.accessType = "inputOnly";
field56.type = "SFBool";
Script52.field[3] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "setRightViewBind";
field57.accessType = "inputOnly";
field57.type = "SFBool";
Script52.field[4] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "setTopViewBind";
field58.accessType = "inputOnly";
field58.type = "SFBool";
Script52.field[5] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "setFrontDownViewBind";
field59.accessType = "inputOnly";
field59.type = "SFBool";
Script52.field[6] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "setBottomViewBind";
field60.accessType = "inputOnly";
field60.type = "SFBool";
Script52.field[7] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "setFrontUpBSOutput";
field61.accessType = "inputOnly";
field61.type = "SFBool";
Script52.field[8] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "setLeftBSOutput";
field62.accessType = "inputOnly";
field62.type = "SFBool";
Script52.field[9] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "setBackBSOutput";
field63.accessType = "inputOnly";
field63.type = "SFBool";
Script52.field[10] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "setRightBSOutput";
field64.accessType = "inputOnly";
field64.type = "SFBool";
Script52.field[11] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "setTopBSOutput";
field65.accessType = "inputOnly";
field65.type = "SFBool";
Script52.field[12] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "setFrontDownBSOutput";
field66.accessType = "inputOnly";
field66.type = "SFBool";
Script52.field[13] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "setBottomBSOutput";
field67.accessType = "inputOnly";
field67.type = "SFBool";
Script52.field[14] = field67;


Script52.setSourceCode(`ecmascript:\n"+
"\n"+
"function setFraction(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('fraction =' + value);\n"+
"}\n"+
"\n"+
"function setFrontUpViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('FrontUpView bind:' + value);\n"+
"}\n"+
"\n"+
"function setLeftViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('LeftView bind:' + value);\n"+
"}\n"+
"\n"+
"function setBackViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BackView bind:' + value);\n"+
"}\n"+
"\n"+
"function setRightViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('RightView bind:' + value);\n"+
"}\n"+
"\n"+
"function setTopViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('TopView bind:' + value);\n"+
"}\n"+
"\n"+
"function setFrontDownViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('FrontDownView bind:' + value);\n"+
"}\n"+
"\n"+
"function setBottomViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BottomView bind:' + value);\n"+
"}\n"+
"\n"+
"function setFrontUpBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for FrontUpViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setLeftBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for LeftViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setBackBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for BackViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setRightBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for RightViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setTopBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for TopViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setFrontDownBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for FrontDownViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setBottomBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for BottomViewpoint:' + value);\n"+
"}`)
Group51.children = new MFNode();

Group51.children[0] = Script52;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "fraction_changed";
ROUTE68.fromNode = "Clock";
ROUTE68.toField = "setFraction";
ROUTE68.toNode = "Debug";
Group51.children[1] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "isBound";
ROUTE69.fromNode = "FrontUpViewpoint";
ROUTE69.toField = "setFrontUpViewBind";
ROUTE69.toNode = "Debug";
Group51.children[2] = ROUTE69;

let ROUTE70 = browser.currentScene.createNode("ROUTE");
ROUTE70.fromField = "isBound";
ROUTE70.fromNode = "LeftViewpoint";
ROUTE70.toField = "setLeftViewBind";
ROUTE70.toNode = "Debug";
Group51.children[3] = ROUTE70;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "isBound";
ROUTE71.fromNode = "BackViewpoint";
ROUTE71.toField = "setBackViewBind";
ROUTE71.toNode = "Debug";
Group51.children[4] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "isBound";
ROUTE72.fromNode = "RightViewpoint";
ROUTE72.toField = "setRightViewBind";
ROUTE72.toNode = "Debug";
Group51.children[5] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "isBound";
ROUTE73.fromNode = "TopViewpoint";
ROUTE73.toField = "setTopViewBind";
ROUTE73.toNode = "Debug";
Group51.children[6] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "isBound";
ROUTE74.fromNode = "FrontDownViewpoint";
ROUTE74.toField = "setFrontDownViewBind";
ROUTE74.toNode = "Debug";
Group51.children[7] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "isBound";
ROUTE75.fromNode = "BottomViewpoint";
ROUTE75.toField = "setBottomViewBind";
ROUTE75.toNode = "Debug";
Group51.children[8] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "LeftViewBinder";
ROUTE76.toField = "setLeftBSOutput";
ROUTE76.toNode = "Debug";
Group51.children[9] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "BackViewBinder";
ROUTE77.toField = "setBackBSOutput";
ROUTE77.toNode = "Debug";
Group51.children[10] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "value_changed";
ROUTE78.fromNode = "RightViewBinder";
ROUTE78.toField = "setRightBSOutput";
ROUTE78.toNode = "Debug";
Group51.children[11] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "value_changed";
ROUTE79.fromNode = "TopViewBinder";
ROUTE79.toField = "setTopBSOutput";
ROUTE79.toNode = "Debug";
Group51.children[12] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromField = "value_changed";
ROUTE80.fromNode = "FrontDownViewBinder";
ROUTE80.toField = "setFrontDownBSOutput";
ROUTE80.toNode = "Debug";
Group51.children[13] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "value_changed";
ROUTE81.fromNode = "BottomViewBinder";
ROUTE81.toField = "setBottomBSOutput";
ROUTE81.toNode = "Debug";
Group51.children[14] = ROUTE81;

Switch50.children = new MFNode();

Switch50.children[0] = Group51;

browser.currentScene.children[11] = Switch50;

let Transform82 = browser.currentScene.createNode("Transform");
let Shape83 = browser.currentScene.createNode("Shape");
let Appearance84 = browser.currentScene.createNode("Appearance");
let Material85 = browser.currentScene.createNode("Material");
Material85.diffuseColor = new SFColor(new float[1,1,0]);
Appearance84.material = Material85;

Shape83.appearance = Appearance84;

let Box86 = browser.currentScene.createNode("Box");
Box86.size = new SFVec3f(new float[2,0.1,0.35]);
Shape83.geometry = Box86;

Transform82.children = new MFNode();

Transform82.children[0] = Shape83;

let Transform87 = browser.currentScene.createNode("Transform");
Transform87.translation = new SFVec3f(new float[-1,0,0]);
let Shape88 = browser.currentScene.createNode("Shape");
let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.diffuseColor = new SFColor(new float[1,0,0]);
Appearance89.material = Material90;

Shape88.appearance = Appearance89;

let Sphere91 = browser.currentScene.createNode("Sphere");
Sphere91.radius = 0.2;
Shape88.geometry = Sphere91;

Transform87.children = new MFNode();

Transform87.children[0] = Shape88;

Transform82.children[1] = Transform87;

let Transform92 = browser.currentScene.createNode("Transform");
Transform92.translation = new SFVec3f(new float[1,0,0]);
let Shape93 = browser.currentScene.createNode("Shape");
let Appearance94 = browser.currentScene.createNode("Appearance");
let Material95 = browser.currentScene.createNode("Material");
Material95.diffuseColor = new SFColor(new float[0,1,0]);
Appearance94.material = Material95;

Shape93.appearance = Appearance94;

let Sphere96 = browser.currentScene.createNode("Sphere");
Sphere96.radius = 0.2;
Shape93.geometry = Sphere96;

Transform92.children = new MFNode();

Transform92.children[0] = Shape93;

Transform82.children[2] = Transform92;

browser.currentScene.children[12] = Transform82;

let Transform97 = browser.currentScene.createNode("Transform");
let Shape98 = browser.currentScene.createNode("Shape");
let Appearance99 = browser.currentScene.createNode("Appearance");
let Material100 = browser.currentScene.createNode("Material");
Material100.diffuseColor = new SFColor(new float[0,0,1]);
Appearance99.material = Material100;

Shape98.appearance = Appearance99;

let Cone101 = browser.currentScene.createNode("Cone");
Shape98.geometry = Cone101;

Transform97.children = new MFNode();

Transform97.children[0] = Shape98;

browser.currentScene.children[13] = Transform97;

