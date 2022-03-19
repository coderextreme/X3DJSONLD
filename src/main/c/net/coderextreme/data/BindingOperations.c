#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "BindingOperations.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "5 January 2008";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "22 July 2013";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "BindingOperations.console.txt";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "BindingStackOperations.png";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "X3D for Web Authors, Section 2.5.1, Figure 4.1";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://X3dGraphics.com";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dResources.html";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "rights";
meta12.content = "Copyright Don Brutzman and Leonard Daly 2007";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "subject";
meta13.content = "X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "identifier";
meta14.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d";
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

Viewpoint Viewpoint18 = createNode("Viewpoint");
Viewpoint18.DEF = "View1";
Viewpoint18.centerOfRotation = new SFVec3f(new float[-6,0,0]);
Viewpoint18.description = "Viewpoint 1";
Viewpoint18.position = new SFVec3f(new float[-6,0,5]);
children = new MFNode();

children[0] = Viewpoint18;

Viewpoint Viewpoint19 = createNode("Viewpoint");
Viewpoint19.DEF = "View2";
Viewpoint19.centerOfRotation = new SFVec3f(new float[-2,0,0]);
Viewpoint19.description = "Viewpoint 2";
Viewpoint19.position = new SFVec3f(new float[-2,0,5]);
children[1] = Viewpoint19;

Viewpoint Viewpoint20 = createNode("Viewpoint");
Viewpoint20.DEF = "View3";
Viewpoint20.centerOfRotation = new SFVec3f(new float[2,0,0]);
Viewpoint20.description = "Viewpoint 3";
Viewpoint20.position = new SFVec3f(new float[2,0,5]);
children[2] = Viewpoint20;

Viewpoint Viewpoint21 = createNode("Viewpoint");
Viewpoint21.DEF = "View4";
Viewpoint21.centerOfRotation = new SFVec3f(new float[6,0,0]);
Viewpoint21.description = "Viewpoint 4";
Viewpoint21.position = new SFVec3f(new float[6,0,5]);
children[3] = Viewpoint21;

//Script initialization ought to first bind view5 below.
Group Group22 = createNode("Group");
Transform Transform23 = createNode("Transform");
Transform23.DEF = "Text1";
Transform23.translation = new SFVec3f(new float[-6,0,0]);
Shape Shape24 = createNode("Shape");
Text Text25 = createNode("Text");
Text25.string = new MFString(new java.lang.String["View","# 1"]);
FontStyle FontStyle26 = createNode("FontStyle");
FontStyle26.DEF = "CenterJustify";
FontStyle26.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text25.fontStyle = FontStyle26;

Shape24.geometry = Text25;

Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[1,0,0]);
Appearance27.material = Material28;

Shape24.appearance = Appearance27;

Transform23.children = new MFNode();

Transform23.children[0] = Shape24;

Group22.children = new MFNode();

Group22.children[0] = Transform23;

Transform Transform29 = createNode("Transform");
Transform29.DEF = "Text2";
Transform29.translation = new SFVec3f(new float[-2,0,0]);
Shape Shape30 = createNode("Shape");
Text Text31 = createNode("Text");
Text31.string = new MFString(new java.lang.String["View","# 2"]);
FontStyle FontStyle32 = createNode("FontStyle");
FontStyle32.USE = "CenterJustify";
Text31.fontStyle = FontStyle32;

Shape30.geometry = Text31;

Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.diffuseColor = new SFColor(new float[0,1,0]);
Appearance33.material = Material34;

Shape30.appearance = Appearance33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

Group22.children[1] = Transform29;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "Text3";
Transform35.translation = new SFVec3f(new float[2,0,0]);
Shape Shape36 = createNode("Shape");
Text Text37 = createNode("Text");
Text37.string = new MFString(new java.lang.String["View","# 3"]);
FontStyle FontStyle38 = createNode("FontStyle");
FontStyle38.USE = "CenterJustify";
Text37.fontStyle = FontStyle38;

Shape36.geometry = Text37;

Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.diffuseColor = new SFColor(new float[0,0,1]);
Appearance39.material = Material40;

Shape36.appearance = Appearance39;

Transform35.children = new MFNode();

Transform35.children[0] = Shape36;

Group22.children[2] = Transform35;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "Text4";
Transform41.translation = new SFVec3f(new float[6,0,0]);
Shape Shape42 = createNode("Shape");
Text Text43 = createNode("Text");
Text43.string = new MFString(new java.lang.String["View","# 4"]);
FontStyle FontStyle44 = createNode("FontStyle");
FontStyle44.USE = "CenterJustify";
Text43.fontStyle = FontStyle44;

Shape42.geometry = Text43;

Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Appearance45.material = Material46;

Shape42.appearance = Appearance45;

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Group22.children[3] = Transform41;

children[4] = Group22;

//The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.
//It does not need to be studied in this chapter.
Transform Transform47 = createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,-3,8]);
//notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.
Viewpoint Viewpoint48 = createNode("Viewpoint");
Viewpoint48.DEF = "ClickToAnimateView";
Viewpoint48.description = "Select animation sequence";
Viewpoint48.position = new SFVec3f(new float[0,0,7]);
Transform47.children = new MFNode();

Transform47.children[0] = Viewpoint48;

Shape Shape49 = createNode("Shape");
Text Text50 = createNode("Text");
Text50.string = new MFString(new java.lang.String["Click here to animate"]);
FontStyle FontStyle51 = createNode("FontStyle");
FontStyle51.justify = new MFString(new java.lang.String["MIDDLE","BEGIN"]);
Text50.fontStyle = FontStyle51;

Shape49.geometry = Text50;

Appearance Appearance52 = createNode("Appearance");
Material Material53 = createNode("Material");
Material53.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance52.material = Material53;

Shape49.appearance = Appearance52;

Transform47.children[1] = Shape49;

Shape Shape54 = createNode("Shape");
Box Box55 = createNode("Box");
Box55.size = new SFVec3f(new float[7,1,0.02]);
Shape54.geometry = Box55;

Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.transparency = 1;
Appearance56.material = Material57;

Shape54.appearance = Appearance56;

Transform47.children[2] = Shape54;

TouchSensor TouchSensor58 = createNode("TouchSensor");
TouchSensor58.DEF = "TextTouchSensor";
TouchSensor58.description = "Click to begin animating viewpoint selections";
Transform47.children[3] = TouchSensor58;

TimeSensor TimeSensor59 = createNode("TimeSensor");
TimeSensor59.DEF = "Clock";
TimeSensor59.cycleInterval = 10;
Transform47.children[4] = TimeSensor59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromField = "touchTime";
ROUTE60.fromNode = "TextTouchSensor";
ROUTE60.toField = "set_startTime";
ROUTE60.toNode = "Clock";
Transform47.children[5] = ROUTE60;

IntegerSequencer IntegerSequencer61 = createNode("IntegerSequencer");
IntegerSequencer61.DEF = "TimingSequencer";
IntegerSequencer61.key = new MFFloat(new float[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]);
IntegerSequencer61.keyValue = new MFInt32(new int[0,1,2,3,4,5,6,7,8,10]);
Transform47.children[6] = IntegerSequencer61;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromField = "fraction_changed";
ROUTE62.fromNode = "Clock";
ROUTE62.toField = "set_fraction";
ROUTE62.toNode = "TimingSequencer";
Transform47.children[7] = ROUTE62;

Script Script63 = createNode("Script");
Script63.DEF = "BindingSequencerEngine";
field field64 = createNode("field");
field64.name = "set_timeEvent";
field64.accessType = "inputOnly";
field64.type = "SFInt32";
Script63.field = new MFNode();

Script63.field[0] = field64;

field field65 = createNode("field");
field65.name = "bindView1";
field65.accessType = "outputOnly";
field65.type = "SFBool";
Script63.field[1] = field65;

field field66 = createNode("field");
field66.name = "bindView2";
field66.accessType = "outputOnly";
field66.type = "SFBool";
Script63.field[2] = field66;

field field67 = createNode("field");
field67.name = "bindView3";
field67.accessType = "outputOnly";
field67.type = "SFBool";
Script63.field[3] = field67;

field field68 = createNode("field");
field68.name = "bindView4";
field68.accessType = "outputOnly";
field68.type = "SFBool";
Script63.field[4] = field68;

field field69 = createNode("field");
field69.name = "bindView5";
field69.accessType = "outputOnly";
field69.type = "SFBool";
Script63.field[5] = field69;

field field70 = createNode("field");
field70.name = "view1Bound";
field70.accessType = "inputOnly";
field70.type = "SFBool";
Script63.field[6] = field70;

field field71 = createNode("field");
field71.name = "view2Bound";
field71.accessType = "inputOnly";
field71.type = "SFBool";
Script63.field[7] = field71;

field field72 = createNode("field");
field72.name = "view3Bound";
field72.accessType = "inputOnly";
field72.type = "SFBool";
Script63.field[8] = field72;

field field73 = createNode("field");
field73.name = "view4Bound";
field73.accessType = "inputOnly";
field73.type = "SFBool";
Script63.field[9] = field73;

field field74 = createNode("field");
field74.name = "priorInputvalue";
field74.accessType = "initializeOnly";
field74.type = "SFInt32";
field74.value = "-1";
Script63.field[10] = field74;


Script63.setSourceCode(`ecmascript:\n"+
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
"\n"+
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
Transform47.children[8] = Script63;

//drive Script with TimeSensor clock
ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromField = "value_changed";
ROUTE75.fromNode = "TimingSequencer";
ROUTE75.toField = "set_timeEvent";
ROUTE75.toNode = "BindingSequencerEngine";
Transform47.children[9] = ROUTE75;

//Script will bind and unbind Viewpoint nodes
ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromField = "bindView1";
ROUTE76.fromNode = "BindingSequencerEngine";
ROUTE76.toField = "set_bind";
ROUTE76.toNode = "View1";
Transform47.children[10] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromField = "bindView2";
ROUTE77.fromNode = "BindingSequencerEngine";
ROUTE77.toField = "set_bind";
ROUTE77.toNode = "View2";
Transform47.children[11] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromField = "bindView3";
ROUTE78.fromNode = "BindingSequencerEngine";
ROUTE78.toField = "set_bind";
ROUTE78.toNode = "View3";
Transform47.children[12] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromField = "bindView4";
ROUTE79.fromNode = "BindingSequencerEngine";
ROUTE79.toField = "set_bind";
ROUTE79.toNode = "View4";
Transform47.children[13] = ROUTE79;

ROUTE ROUTE80 = createNode("ROUTE");
ROUTE80.fromField = "bindView5";
ROUTE80.fromNode = "BindingSequencerEngine";
ROUTE80.toField = "set_bind";
ROUTE80.toNode = "ClickToAnimateView";
Transform47.children[14] = ROUTE80;

//Viewpoint nodes report bind and unbind events
ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromField = "isBound";
ROUTE81.fromNode = "View1";
ROUTE81.toField = "view1Bound";
ROUTE81.toNode = "BindingSequencerEngine";
Transform47.children[15] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromField = "isBound";
ROUTE82.fromNode = "View2";
ROUTE82.toField = "view2Bound";
ROUTE82.toNode = "BindingSequencerEngine";
Transform47.children[16] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromField = "isBound";
ROUTE83.fromNode = "View3";
ROUTE83.toField = "view3Bound";
ROUTE83.toNode = "BindingSequencerEngine";
Transform47.children[17] = ROUTE83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromField = "isBound";
ROUTE84.fromNode = "View4";
ROUTE84.toField = "view4Bound";
ROUTE84.toNode = "BindingSequencerEngine";
Transform47.children[18] = ROUTE84;

children[5] = Transform47;

}
