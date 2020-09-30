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

//Script initialization ought to first bind view5 below.
let Group6 = browser.currentScene.createNode("Group");
Group6.bboxCenter = new SFVec3f(new float[0,0,0]);
Group6.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Transform7 = browser.currentScene.createNode("Transform");
Transform7.DEF = "Text1";
Transform7.translation = new SFVec3f(new float[-6,0,0]);
Transform7.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform7.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape8 = browser.currentScene.createNode("Shape");
Shape8.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform13.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform13.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape14 = browser.currentScene.createNode("Shape");
Shape14.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape14.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform19.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform19.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape20 = browser.currentScene.createNode("Shape");
Shape20.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape20.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Transform25.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform25.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape26 = browser.currentScene.createNode("Shape");
Shape26.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape26.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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

//The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.
//It does not need to be studied in this chapter.
let Transform31 = browser.currentScene.createNode("Transform");
Transform31.translation = new SFVec3f(new float[0,-3,8]);
Transform31.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform31.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.
let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "ClickToAnimateView";
Viewpoint32.description = "Select animation sequence";
Viewpoint32.position = new SFVec3f(new float[0,0,7]);
Transform31.children = new MFNode();

Transform31.children[0] = Viewpoint32;

let Shape33 = browser.currentScene.createNode("Shape");
Shape33.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape33.bboxSize = new SFVec3f(new float[-1,-1,-1]);
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
Shape38.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape38.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Box39 = browser.currentScene.createNode("Box");
Box39.size = new SFVec3f(new float[7,1,0.02]);
Box39.solid = True;
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

//drive Script with TimeSensor clock
let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromField = "value_changed";
ROUTE47.fromNode = "TimingSequencer";
ROUTE47.toField = "set_timeEvent";
ROUTE47.toNode = "BindingSequencerEngine";
Transform31.children[8] = ROUTE47;

//Script will bind and unbind Viewpoint nodes
let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "bindView1";
ROUTE48.fromNode = "BindingSequencerEngine";
ROUTE48.toField = "set_bind";
ROUTE48.toNode = "View1";
Transform31.children[9] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "bindView2";
ROUTE49.fromNode = "BindingSequencerEngine";
ROUTE49.toField = "set_bind";
ROUTE49.toNode = "View2";
Transform31.children[10] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "bindView3";
ROUTE50.fromNode = "BindingSequencerEngine";
ROUTE50.toField = "set_bind";
ROUTE50.toNode = "View3";
Transform31.children[11] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "bindView4";
ROUTE51.fromNode = "BindingSequencerEngine";
ROUTE51.toField = "set_bind";
ROUTE51.toNode = "View4";
Transform31.children[12] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "bindView5";
ROUTE52.fromNode = "BindingSequencerEngine";
ROUTE52.toField = "set_bind";
ROUTE52.toNode = "ClickToAnimateView";
Transform31.children[13] = ROUTE52;

//Viewpoint nodes report bind and unbind events
let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "isBound";
ROUTE53.fromNode = "View1";
ROUTE53.toField = "view1Bound";
ROUTE53.toNode = "BindingSequencerEngine";
Transform31.children[14] = ROUTE53;

let ROUTE54 = browser.currentScene.createNode("ROUTE");
ROUTE54.fromField = "isBound";
ROUTE54.fromNode = "View2";
ROUTE54.toField = "view2Bound";
ROUTE54.toNode = "BindingSequencerEngine";
Transform31.children[15] = ROUTE54;

let ROUTE55 = browser.currentScene.createNode("ROUTE");
ROUTE55.fromField = "isBound";
ROUTE55.fromNode = "View3";
ROUTE55.toField = "view3Bound";
ROUTE55.toNode = "BindingSequencerEngine";
Transform31.children[16] = ROUTE55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "isBound";
ROUTE56.fromNode = "View4";
ROUTE56.toField = "view4Bound";
ROUTE56.toNode = "BindingSequencerEngine";
Transform31.children[17] = ROUTE56;

let X3DScript57 = browser.currentScene.createNode("X3DScript");
X3DScript57.DEF = "BindingSequencerEngine";
let field58 = browser.currentScene.createNode("field");
field58.name = "set_timeEvent";
field58.accessType = "inputOnly";
field58.type = "SFInt32";
X3DScript57.field = new MFNode();

X3DScript57.field[0] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "bindView1";
field59.accessType = "outputOnly";
field59.type = "SFBool";
X3DScript57.field[1] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "bindView2";
field60.accessType = "outputOnly";
field60.type = "SFBool";
X3DScript57.field[2] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "bindView3";
field61.accessType = "outputOnly";
field61.type = "SFBool";
X3DScript57.field[3] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "bindView4";
field62.accessType = "outputOnly";
field62.type = "SFBool";
X3DScript57.field[4] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "bindView5";
field63.accessType = "outputOnly";
field63.type = "SFBool";
X3DScript57.field[5] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "view1Bound";
field64.accessType = "inputOnly";
field64.type = "SFBool";
X3DScript57.field[6] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "view2Bound";
field65.accessType = "inputOnly";
field65.type = "SFBool";
X3DScript57.field[7] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "view3Bound";
field66.accessType = "inputOnly";
field66.type = "SFBool";
X3DScript57.field[8] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "view4Bound";
field67.accessType = "inputOnly";
field67.type = "SFBool";
X3DScript57.field[9] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "priorInputvalue";
field68.accessType = "initializeOnly";
field68.type = "SFInt32";
field68.value = "-1";
X3DScript57.field[10] = field68;

Transform31.x3DScript[18] = X3DScript57;

browser.currentScene.children[5] = Transform31;

