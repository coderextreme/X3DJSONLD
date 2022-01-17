let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "BindingOperations.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "description";
meta3.content = "Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "created";
meta5.content = "5 January 2008";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "modified";
meta6.content = "22 July 2013";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "reference";
meta7.content = "BindingOperations.console.txt";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "BindingStackOperations.png";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "reference";
meta9.content = "X3D for Web Authors, Section 2.5.1, Figure 4.1";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "reference";
meta10.content = "http://X3dGraphics.com";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "rights";
meta12.content = "Copyright Don Brutzman and Leonard Daly 2007";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "subject";
meta13.content = "X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "identifier";
meta14.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d";
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

let Viewpoint18 = browser.currentScene.createNode("Viewpoint");
Viewpoint18.DEF = "View1";
Viewpoint18.centerOfRotation = new SFVec3f(new float[-6,0,0]);
Viewpoint18.description = "Viewpoint 1";
Viewpoint18.position = new SFVec3f(new float[-6,0,5]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint18;

let Viewpoint19 = browser.currentScene.createNode("Viewpoint");
Viewpoint19.DEF = "View2";
Viewpoint19.centerOfRotation = new SFVec3f(new float[-2,0,0]);
Viewpoint19.description = "Viewpoint 2";
Viewpoint19.position = new SFVec3f(new float[-2,0,5]);
browser.currentScene.children[1] = Viewpoint19;

let Viewpoint20 = browser.currentScene.createNode("Viewpoint");
Viewpoint20.DEF = "View3";
Viewpoint20.centerOfRotation = new SFVec3f(new float[2,0,0]);
Viewpoint20.description = "Viewpoint 3";
Viewpoint20.position = new SFVec3f(new float[2,0,5]);
browser.currentScene.children[2] = Viewpoint20;

let Viewpoint21 = browser.currentScene.createNode("Viewpoint");
Viewpoint21.DEF = "View4";
Viewpoint21.centerOfRotation = new SFVec3f(new float[6,0,0]);
Viewpoint21.description = "Viewpoint 4";
Viewpoint21.position = new SFVec3f(new float[6,0,5]);
browser.currentScene.children[3] = Viewpoint21;

//Script initialization ought to first bind view5 below.
let Group22 = browser.currentScene.createNode("Group");
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "Text1";
Transform23.translation = new SFVec3f(new float[-6,0,0]);
let Shape24 = browser.currentScene.createNode("Shape");
let Text25 = browser.currentScene.createNode("Text");
Text25.string = new MFString(new java.lang.String["View","# 1"]);
let FontStyle26 = browser.currentScene.createNode("FontStyle");
FontStyle26.DEF = "CenterJustify";
FontStyle26.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text25.fontStyle = FontStyle26;

Shape24.geometry = Text25;

let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,0,0]);
Appearance27.material = Material28;

Shape24.appearance = Appearance27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Group22.children = new MFNode();

Group22.children[0] = Transform23;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "Text2";
Transform29.translation = new SFVec3f(new float[-2,0,0]);
let Shape30 = browser.currentScene.createNode("Shape");
let Text31 = browser.currentScene.createNode("Text");
Text31.string = new MFString(new java.lang.String["View","# 2"]);
let FontStyle32 = browser.currentScene.createNode("FontStyle");
FontStyle32.USE = "CenterJustify";
Text31.fontStyle = FontStyle32;

Shape30.geometry = Text31;

let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,1,0]);
Appearance33.material = Material34;

Shape30.appearance = Appearance33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

Group22.children[1] = Transform29;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "Text3";
Transform35.translation = new SFVec3f(new float[2,0,0]);
let Shape36 = browser.currentScene.createNode("Shape");
let Text37 = browser.currentScene.createNode("Text");
Text37.string = new MFString(new java.lang.String["View","# 3"]);
let FontStyle38 = browser.currentScene.createNode("FontStyle");
FontStyle38.USE = "CenterJustify";
Text37.fontStyle = FontStyle38;

Shape36.geometry = Text37;

let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.diffuseColor = new SFColor(new float[0,0,1]);
Appearance39.material = Material40;

Shape36.appearance = Appearance39;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Group22.children[2] = Transform35;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "Text4";
Transform41.translation = new SFVec3f(new float[6,0,0]);
let Shape42 = browser.currentScene.createNode("Shape");
let Text43 = browser.currentScene.createNode("Text");
Text43.string = new MFString(new java.lang.String["View","# 4"]);
let FontStyle44 = browser.currentScene.createNode("FontStyle");
FontStyle44.USE = "CenterJustify";
Text43.fontStyle = FontStyle44;

Shape42.geometry = Text43;

let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Appearance45.material = Material46;

Shape42.appearance = Appearance45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Group22.children[3] = Transform41;

browser.currentScene.children[4] = Group22;

//The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.
//It does not need to be studied in this chapter.
let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,-3,8]);
//notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.
let Viewpoint48 = browser.currentScene.createNode("Viewpoint");
Viewpoint48.DEF = "ClickToAnimateView";
Viewpoint48.description = "Select animation sequence";
Viewpoint48.position = new SFVec3f(new float[0,0,7]);
Transform47.children = new MFNode();

Transform47.children[0] = Viewpoint48;

let Shape49 = browser.currentScene.createNode("Shape");
let Text50 = browser.currentScene.createNode("Text");
Text50.string = new MFString(new java.lang.String["Click here to animate"]);
let FontStyle51 = browser.currentScene.createNode("FontStyle");
FontStyle51.justify = new MFString(new java.lang.String["MIDDLE","BEGIN"]);
Text50.fontStyle = FontStyle51;

Shape49.geometry = Text50;

let Appearance52 = browser.currentScene.createNode("Appearance");
let Material53 = browser.currentScene.createNode("Material");
Material53.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance52.material = Material53;

Shape49.appearance = Appearance52;

Transform47.children[1] = Shape49;

let Shape54 = browser.currentScene.createNode("Shape");
let Box55 = browser.currentScene.createNode("Box");
Box55.size = new SFVec3f(new float[7,1,0.02]);
Shape54.geometry = Box55;

let Appearance56 = browser.currentScene.createNode("Appearance");
let Material57 = browser.currentScene.createNode("Material");
Material57.transparency = 1;
Appearance56.material = Material57;

Shape54.appearance = Appearance56;

Transform47.children[2] = Shape54;

let TouchSensor58 = browser.currentScene.createNode("TouchSensor");
TouchSensor58.DEF = "TextTouchSensor";
TouchSensor58.description = "Click to begin animating viewpoint selections";
Transform47.children[3] = TouchSensor58;

let TimeSensor59 = browser.currentScene.createNode("TimeSensor");
TimeSensor59.DEF = "Clock";
TimeSensor59.cycleInterval = 10;
Transform47.children[4] = TimeSensor59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "touchTime";
ROUTE60.fromNode = "TextTouchSensor";
ROUTE60.toField = "set_startTime";
ROUTE60.toNode = "Clock";
Transform47.children[5] = ROUTE60;

let IntegerSequencer61 = browser.currentScene.createNode("IntegerSequencer");
IntegerSequencer61.DEF = "TimingSequencer";
IntegerSequencer61.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
IntegerSequencer61.keyValue = new MFInt32(new int[0,1,2,3,4,5,6,7,8,10]);
Transform47.children[6] = IntegerSequencer61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "fraction_changed";
ROUTE62.fromNode = "Clock";
ROUTE62.toField = "set_fraction";
ROUTE62.toNode = "TimingSequencer";
Transform47.children[7] = ROUTE62;

let Script63 = browser.currentScene.createNode("Script");
Script63.DEF = "BindingSequencerEngine";
let field64 = browser.currentScene.createNode("field");
field64.name = "set_timeEvent";
field64.accessType = "inputOnly";
field64.type = "SFInt32";
Script63.field = new MFNode();

Script63.field[0] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "bindView1";
field65.accessType = "outputOnly";
field65.type = "SFBool";
Script63.field[1] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "bindView2";
field66.accessType = "outputOnly";
field66.type = "SFBool";
Script63.field[2] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "bindView3";
field67.accessType = "outputOnly";
field67.type = "SFBool";
Script63.field[3] = field67;

let field68 = browser.currentScene.createNode("field");
field68.name = "bindView4";
field68.accessType = "outputOnly";
field68.type = "SFBool";
Script63.field[4] = field68;

let field69 = browser.currentScene.createNode("field");
field69.name = "bindView5";
field69.accessType = "outputOnly";
field69.type = "SFBool";
Script63.field[5] = field69;

let field70 = browser.currentScene.createNode("field");
field70.name = "view1Bound";
field70.accessType = "inputOnly";
field70.type = "SFBool";
Script63.field[6] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "view2Bound";
field71.accessType = "inputOnly";
field71.type = "SFBool";
Script63.field[7] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "view3Bound";
field72.accessType = "inputOnly";
field72.type = "SFBool";
Script63.field[8] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "view4Bound";
field73.accessType = "inputOnly";
field73.type = "SFBool";
Script63.field[9] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "priorInputvalue";
field74.accessType = "initializeOnly";
field74.type = "SFInt32";
field74.value = "-1";
Script63.field[10] = field74;

let #sourceCode75 = browser.currentScene.createNode("#sourceCode");
Script63.#sourceCode[11] = #sourceCode75;

Transform47.children[8] = Script63;

//drive Script with TimeSensor clock
let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "TimingSequencer";
ROUTE76.toField = "set_timeEvent";
ROUTE76.toNode = "BindingSequencerEngine";
Transform47.children[9] = ROUTE76;

//Script will bind and unbind Viewpoint nodes
let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "bindView1";
ROUTE77.fromNode = "BindingSequencerEngine";
ROUTE77.toField = "set_bind";
ROUTE77.toNode = "View1";
Transform47.children[10] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "bindView2";
ROUTE78.fromNode = "BindingSequencerEngine";
ROUTE78.toField = "set_bind";
ROUTE78.toNode = "View2";
Transform47.children[11] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "bindView3";
ROUTE79.fromNode = "BindingSequencerEngine";
ROUTE79.toField = "set_bind";
ROUTE79.toNode = "View3";
Transform47.children[12] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromField = "bindView4";
ROUTE80.fromNode = "BindingSequencerEngine";
ROUTE80.toField = "set_bind";
ROUTE80.toNode = "View4";
Transform47.children[13] = ROUTE80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "bindView5";
ROUTE81.fromNode = "BindingSequencerEngine";
ROUTE81.toField = "set_bind";
ROUTE81.toNode = "ClickToAnimateView";
Transform47.children[14] = ROUTE81;

//Viewpoint nodes report bind and unbind events
let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "isBound";
ROUTE82.fromNode = "View1";
ROUTE82.toField = "view1Bound";
ROUTE82.toNode = "BindingSequencerEngine";
Transform47.children[15] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "isBound";
ROUTE83.fromNode = "View2";
ROUTE83.toField = "view2Bound";
ROUTE83.toNode = "BindingSequencerEngine";
Transform47.children[16] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "isBound";
ROUTE84.fromNode = "View3";
ROUTE84.toField = "view3Bound";
ROUTE84.toNode = "BindingSequencerEngine";
Transform47.children[17] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromField = "isBound";
ROUTE85.fromNode = "View4";
ROUTE85.toField = "view4Bound";
ROUTE85.toNode = "BindingSequencerEngine";
Transform47.children[18] = ROUTE85;

browser.currentScene.children[5] = Transform47;

