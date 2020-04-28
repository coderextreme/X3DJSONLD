let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.DEF = "View1";
Viewpoint2.centerOfRotation = new SFVec3f(new float[-6,0,0]);
Viewpoint2.description = "Viewpoint 1";
Viewpoint2.position = new SFVec3f(new float[-6,0,5]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.DEF = "View2";
Viewpoint3.centerOfRotation = new SFVec3f(new float[-2,0,0]);
Viewpoint3.description = "Viewpoint 2";
Viewpoint3.position = new SFVec3f(new float[-2,0,5]);
browser.currentScene.children[1] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.DEF = "View3";
Viewpoint4.centerOfRotation = new SFVec3f(new float[2,0,0]);
Viewpoint4.description = "Viewpoint 3";
Viewpoint4.position = new SFVec3f(new float[2,0,5]);
browser.currentScene.children[2] = Viewpoint4;

let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.DEF = "View4";
Viewpoint5.centerOfRotation = new SFVec3f(new float[6,0,0]);
Viewpoint5.description = "Viewpoint 4";
Viewpoint5.position = new SFVec3f(new float[6,0,5]);
browser.currentScene.children[3] = Viewpoint5;

// Script initialization ought to first bind view5 below. 
let Group6 = browser.currentScene.createNode("Group");
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "Text1";
Transform7.translation = new SFVec3f(new float[-6,0,0]);
let Shape8 = browser.currentScene.createNode("Shape");
let Text9 = browser.currentScene.createNode("Text");
Text9.string = new MFString(new java.lang.String["View","# 1"]);
let FontStyle10 = browser.currentScene.createNode("FontStyle");
FontStyle10.DEF = "CenterJustify";
FontStyle10.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text9.fontStyle = FontStyle10;

Shape8.geometry = Text9;

let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[1,0,0]);
Appearance11.material = Material12;

Shape8.appearance = Appearance11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

Group6.children = new MFNode();

Group6.children[0] = Transform7;

let Transform13 = browser.currentScene.createNode("Transform");
Transform13.DEF = "Text2";
Transform13.translation = new SFVec3f(new float[-2,0,0]);
let Shape14 = browser.currentScene.createNode("Shape");
let Text15 = browser.currentScene.createNode("Text");
Text15.string = new MFString(new java.lang.String["View","# 2"]);
let FontStyle16 = browser.currentScene.createNode("FontStyle");
FontStyle16.USE = "CenterJustify";
Text15.fontStyle = FontStyle16;

Shape14.geometry = Text15;

let Appearance17 = browser.currentScene.createNode("Appearance");
let Material18 = browser.currentScene.createNode("Material");
Material18.diffuseColor = new SFColor(new float[0,1,0]);
Appearance17.material = Material18;

Shape14.appearance = Appearance17;

Transform13.children = new MFNode();

Transform13.children[0] = Shape14;

Group6.children[1] = Transform13;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "Text3";
Transform19.translation = new SFVec3f(new float[2,0,0]);
let Shape20 = browser.currentScene.createNode("Shape");
let Text21 = browser.currentScene.createNode("Text");
Text21.string = new MFString(new java.lang.String["View","# 3"]);
let FontStyle22 = browser.currentScene.createNode("FontStyle");
FontStyle22.USE = "CenterJustify";
Text21.fontStyle = FontStyle22;

Shape20.geometry = Text21;

let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[0,0,1]);
Appearance23.material = Material24;

Shape20.appearance = Appearance23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

Group6.children[2] = Transform19;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "Text4";
Transform25.translation = new SFVec3f(new float[6,0,0]);
let Shape26 = browser.currentScene.createNode("Shape");
let Text27 = browser.currentScene.createNode("Text");
Text27.string = new MFString(new java.lang.String["View","# 4"]);
let FontStyle28 = browser.currentScene.createNode("FontStyle");
FontStyle28.USE = "CenterJustify";
Text27.fontStyle = FontStyle28;

Shape26.geometry = Text27;

let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Appearance29.material = Material30;

Shape26.appearance = Appearance29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

Group6.children[3] = Transform25;

browser.currentScene.children[4] = Group6;

// The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9. 
// It does not need to be studied in this chapter. 
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[0,-3,8]);
// notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script. 
let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "ClickToAnimateView";
Viewpoint32.description = "Select animation sequence";
Viewpoint32.position = new SFVec3f(new float[0,0,7]);
Transform31.children = new MFNode();

Transform31.children[0] = Viewpoint32;

let Shape33 = browser.currentScene.createNode("Shape");
let Text34 = browser.currentScene.createNode("Text");
Text34.string = new MFString(new java.lang.String["Click here to animate"]);
let FontStyle35 = browser.currentScene.createNode("FontStyle");
FontStyle35.justify = new MFString(new java.lang.String["MIDDLE","BEGIN"]);
Text34.fontStyle = FontStyle35;

Shape33.geometry = Text34;

let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance36.material = Material37;

Shape33.appearance = Appearance36;

Transform31.children[1] = Shape33;

let Shape38 = browser.currentScene.createNode("Shape");
let Box39 = browser.currentScene.createNode("Box");
Box39.size = new SFVec3f(new float[7,1,0.02]);
Shape38.geometry = Box39;

let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.transparency = 1;
Appearance40.material = Material41;

Shape38.appearance = Appearance40;

Transform31.children[2] = Shape38;

let TouchSensor42 = browser.currentScene.createNode("TouchSensor");
TouchSensor42.DEF = "TextTouchSensor";
TouchSensor42.description = "Click to begin animating viewpoint selections";
Transform31.children[3] = TouchSensor42;

let TimeSensor43 = browser.currentScene.createNode("TimeSensor");
TimeSensor43.DEF = "Clock";
TimeSensor43.cycleInterval = 10;
Transform31.children[4] = TimeSensor43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "touchTime";
ROUTE44.fromNode = "TextTouchSensor";
ROUTE44.toField = "set_startTime";
ROUTE44.toNode = "Clock";
Transform31.children[5] = ROUTE44;

let IntegerSequencer45 = browser.currentScene.createNode("IntegerSequencer");
IntegerSequencer45.DEF = "TimingSequencer";
IntegerSequencer45.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
IntegerSequencer45.keyValue = new MFInt32(new int[0,1,2,3,4,5,6,7,8,10]);
Transform31.children[6] = IntegerSequencer45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "fraction_changed";
ROUTE46.fromNode = "Clock";
ROUTE46.toField = "set_fraction";
ROUTE46.toNode = "TimingSequencer";
Transform31.children[7] = ROUTE46;

let Script47 = browser.currentScene.createNode("Script");
Script47.DEF = "BindingSequencerEngine";
let field48 = browser.currentScene.createNode("field");
field48.accessType = "inputOnly";
field48.name = "set_timeEvent";
field48.type = "SFInt32";
Script47.field = new MFNode();

Script47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.accessType = "outputOnly";
field49.name = "bindView1";
field49.type = "SFBool";
Script47.field[1] = field49;

let field50 = browser.currentScene.createNode("field");
field50.accessType = "outputOnly";
field50.name = "bindView2";
field50.type = "SFBool";
Script47.field[2] = field50;

let field51 = browser.currentScene.createNode("field");
field51.accessType = "outputOnly";
field51.name = "bindView3";
field51.type = "SFBool";
Script47.field[3] = field51;

let field52 = browser.currentScene.createNode("field");
field52.accessType = "outputOnly";
field52.name = "bindView4";
field52.type = "SFBool";
Script47.field[4] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "outputOnly";
field53.name = "bindView5";
field53.type = "SFBool";
Script47.field[5] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "inputOnly";
field54.name = "view1Bound";
field54.type = "SFBool";
Script47.field[6] = field54;

let field55 = browser.currentScene.createNode("field");
field55.accessType = "inputOnly";
field55.name = "view2Bound";
field55.type = "SFBool";
Script47.field[7] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "inputOnly";
field56.name = "view3Bound";
field56.type = "SFBool";
Script47.field[8] = field56;

let field57 = browser.currentScene.createNode("field");
field57.accessType = "inputOnly";
field57.name = "view4Bound";
field57.type = "SFBool";
Script47.field[9] = field57;

let field58 = browser.currentScene.createNode("field");
field58.accessType = "initializeOnly";
field58.name = "priorInputvalue";
field58.type = "SFInt32";
field58.value = "-1";
Script47.field[10] = field58;


Script47.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    bindView5 = true;\n"+
"    Browser.print ('Timing script initialized and ready for activation');\n"+
"}\n"+
"function set_timeEvent (inputValue)\n"+
"{\n"+
"    if (inputValue == priorInputvalue)\n"+
"    {\n"+
"        return; // ignore repeated inputs\n"+
"    }\n"+
"    // new value provided\n"+
"    priorInputvalue = inputValue;\n"+
"    // Browser.print ('\\ntimeEvent inputValue=' + inputValue);\n"+
"        \n"+
"    // mimics user execution of Figure 4.1 steps t_0 through t_8\n"+
"    if (inputValue == 0)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t0');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 1)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t1');\n"+
"        bindView2 = true;\n"+
"    }\n"+
"    else if (inputValue == 2)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t2');\n"+
"        bindView3 = true;\n"+
"    }\n"+
"    else if (inputValue == 3)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t3');\n"+
"        bindView3 = false;\n"+
"    }\n"+
"    else if (inputValue == 4)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t4');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 5)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t5');\n"+
"        bindView2 = false;\n"+
"    }\n"+
"    else if (inputValue == 6)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t6');\n"+
"        bindView1 = false;\n"+
"    }\n"+
"    else if (inputValue == 7)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t7');\n"+
"        bindView4 = true;\n"+
"\n"+
"    }\n"+
"    else if (inputValue == 8)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t8');\n"+
"        Browser.print (', no action, all done');\n"+
"        Browser.print ('\\n\\n');\n"+
"    }\n"+
"}\n"+
"\n"+
"function view1Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view1Bound ' + (inputValue));\n"+
"    if (priorInputvalue == -1) Browser.print ('\\n');\n"+
"}\n"+
"function view2Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view2Bound ' + (inputValue));\n"+
"}\n"+
"function view3Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view3Bound ' + (inputValue));\n"+
"}\n"+
"function view4Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view4Bound ' + (inputValue));\n"+
"}\n"+
"function view5Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view5Bound ' + (inputValue));\n"+
"}`)
Transform31.children[8] = Script47;

// drive Script with TimeSensor clock 
let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "value_changed";
ROUTE59.fromNode = "TimingSequencer";
ROUTE59.toField = "set_timeEvent";
ROUTE59.toNode = "BindingSequencerEngine";
Transform31.children[9] = ROUTE59;

// Script will bind and unbind Viewpoint nodes 
let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "bindView1";
ROUTE60.fromNode = "BindingSequencerEngine";
ROUTE60.toField = "set_bind";
ROUTE60.toNode = "View1";
Transform31.children[10] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "bindView2";
ROUTE61.fromNode = "BindingSequencerEngine";
ROUTE61.toField = "set_bind";
ROUTE61.toNode = "View2";
Transform31.children[11] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "bindView3";
ROUTE62.fromNode = "BindingSequencerEngine";
ROUTE62.toField = "set_bind";
ROUTE62.toNode = "View3";
Transform31.children[12] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromField = "bindView4";
ROUTE63.fromNode = "BindingSequencerEngine";
ROUTE63.toField = "set_bind";
ROUTE63.toNode = "View4";
Transform31.children[13] = ROUTE63;

let ROUTE64 = browser.currentScene.createNode("ROUTE");
ROUTE64.fromField = "bindView5";
ROUTE64.fromNode = "BindingSequencerEngine";
ROUTE64.toField = "set_bind";
ROUTE64.toNode = "ClickToAnimateView";
Transform31.children[14] = ROUTE64;

// Viewpoint nodes report bind and unbind events 
let ROUTE65 = browser.currentScene.createNode("ROUTE");
ROUTE65.fromField = "isBound";
ROUTE65.fromNode = "View1";
ROUTE65.toField = "view1Bound";
ROUTE65.toNode = "BindingSequencerEngine";
Transform31.children[15] = ROUTE65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "isBound";
ROUTE66.fromNode = "View2";
ROUTE66.toField = "view2Bound";
ROUTE66.toNode = "BindingSequencerEngine";
Transform31.children[16] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "isBound";
ROUTE67.fromNode = "View3";
ROUTE67.toField = "view3Bound";
ROUTE67.toNode = "BindingSequencerEngine";
Transform31.children[17] = ROUTE67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "isBound";
ROUTE68.fromNode = "View4";
ROUTE68.toField = "view4Bound";
ROUTE68.toNode = "BindingSequencerEngine";
Transform31.children[18] = ROUTE68;

browser.currentScene.children[5] = Transform31;

