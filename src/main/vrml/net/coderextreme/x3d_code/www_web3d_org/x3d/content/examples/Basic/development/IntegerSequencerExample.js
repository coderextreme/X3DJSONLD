let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "IntegerSequencerExample.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Background3 = browser.currentScene.createNode("Background");
Background3.groundColor = new MFColor(new float[0.2,0.2,0.2]);
Background3.skyColor = new MFColor(new float[0.2,0.2,0.2]);
browser.currentScene.children[1] = Background3;

let TimeSensor4 = browser.currentScene.createNode("TimeSensor");
TimeSensor4.DEF = "Clock";
TimeSensor4.cycleInterval = 12;
TimeSensor4.enabled = False;
TimeSensor4.loop = True;
browser.currentScene.children[2] = TimeSensor4;

let IntegerSequencer5 = browser.currentScene.createNode("IntegerSequencer");
IntegerSequencer5.DEF = "IntegerSequencerInstance";
IntegerSequencer5.key = new MFFloat(new float[0,0.08333,0.1667,0.25,0.3333,0.4167,0.5,0.5833,0.6666,0.75,0.8333,0.9167,1]);
IntegerSequencer5.keyValue = new MFInt32(new int[10,9,8,7,6,5,4,3,2,1,0,-1,10]);
browser.currentScene.children[3] = IntegerSequencer5;

let ROUTE6 = browser.currentScene.createNode("ROUTE");
ROUTE6.fromField = "fraction_changed";
ROUTE6.fromNode = "Clock";
ROUTE6.toField = "set_fraction";
ROUTE6.toNode = "IntegerSequencerInstance";
browser.currentScene.children[4] = ROUTE6;

let Transform7 = browser.currentScene.createNode("Transform");
Transform7.translation = new SFVec3f(new float[0,2,0]);
let Shape8 = browser.currentScene.createNode("Shape");
let Text9 = browser.currentScene.createNode("Text");
Text9.string = new MFString(new java.lang.String["IntegerSequencer => Switch","touch blue text to count down"]);
let FontStyle10 = browser.currentScene.createNode("FontStyle");
FontStyle10.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text9.fontStyle = FontStyle10;

Shape8.geometry = Text9;

let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.diffuseColor = new SFColor(new float[0.4,0.6,0.8]);
Appearance11.material = Material12;

Shape8.appearance = Appearance11;

Transform7.children = new MFNode();

Transform7.children[0] = Shape8;

let TouchSensor13 = browser.currentScene.createNode("TouchSensor");
TouchSensor13.DEF = "TouchToStart";
TouchSensor13.description = "Touch To Start";
Transform7.children[1] = TouchSensor13;

let ROUTE14 = browser.currentScene.createNode("ROUTE");
ROUTE14.fromField = "touchTime";
ROUTE14.fromNode = "TouchToStart";
ROUTE14.toField = "set_startTime";
ROUTE14.toNode = "Clock";
Transform7.children[2] = ROUTE14;

let ROUTE15 = browser.currentScene.createNode("ROUTE");
ROUTE15.fromField = "isOver";
ROUTE15.fromNode = "TouchToStart";
ROUTE15.toField = "enabled";
ROUTE15.toNode = "Clock";
Transform7.children[3] = ROUTE15;

//background box to simplify touching
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.translation = new SFVec3f(new float[0,0,-0.5]);
let Shape17 = browser.currentScene.createNode("Shape");
let Box18 = browser.currentScene.createNode("Box");
Box18.size = new SFVec3f(new float[11,2,0.1]);
Shape17.geometry = Box18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.2,0.2,0.2]);
Material20.transparency = 0.95;
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

Transform7.children[4] = Transform16;

browser.currentScene.children[5] = Transform7;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.translation = new SFVec3f(new float[-3,-2.5,0]);
let Shape22 = browser.currentScene.createNode("Shape");
let Text23 = browser.currentScene.createNode("Text");
Text23.string = new MFString(new java.lang.String["click for","previous key","(count up)"]);
let FontStyle24 = browser.currentScene.createNode("FontStyle");
FontStyle24.DEF = "PreviousNextFont";
FontStyle24.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle24.size = 0.7;
Text23.fontStyle = FontStyle24;

Shape22.geometry = Text23;

let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.8,0.6,0.4]);
Appearance25.material = Material26;

Shape22.appearance = Appearance25;

Transform21.children = new MFNode();

Transform21.children[0] = Shape22;

let TouchSensor27 = browser.currentScene.createNode("TouchSensor");
TouchSensor27.DEF = "TouchPrevious";
TouchSensor27.description = "touch for previous";
Transform21.children[1] = TouchSensor27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromField = "isActive";
ROUTE28.fromNode = "TouchPrevious";
ROUTE28.toField = "previous";
ROUTE28.toNode = "IntegerSequencerInstance";
Transform21.children[2] = ROUTE28;

browser.currentScene.children[6] = Transform21;

let Transform29 = browser.currentScene.createNode("Transform");
Transform29.translation = new SFVec3f(new float[3,-2.5,0]);
let Shape30 = browser.currentScene.createNode("Shape");
let Text31 = browser.currentScene.createNode("Text");
Text31.string = new MFString(new java.lang.String["click for","next key","(count down)"]);
let FontStyle32 = browser.currentScene.createNode("FontStyle");
FontStyle32.USE = "PreviousNextFont";
Text31.fontStyle = FontStyle32;

Shape30.geometry = Text31;

let Appearance33 = browser.currentScene.createNode("Appearance");
let Material34 = browser.currentScene.createNode("Material");
Material34.diffuseColor = new SFColor(new float[0.8,0.6,0.4]);
Appearance33.material = Material34;

Shape30.appearance = Appearance33;

Transform29.children = new MFNode();

Transform29.children[0] = Shape30;

let TouchSensor35 = browser.currentScene.createNode("TouchSensor");
TouchSensor35.DEF = "TouchNext";
TouchSensor35.description = "touch for next";
Transform29.children[1] = TouchSensor35;

let ROUTE36 = browser.currentScene.createNode("ROUTE");
ROUTE36.fromField = "isActive";
ROUTE36.fromNode = "TouchNext";
ROUTE36.toField = "next";
ROUTE36.toNode = "IntegerSequencerInstance";
Transform29.children[2] = ROUTE36;

browser.currentScene.children[7] = Transform29;

//Interesting materials from Universal Media library
let ExternProtoDeclare37 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare37.name = "ArtDeco02";
ExternProtoDeclare37.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco02","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco02"]);
browser.currentScene.children[8] = ExternProtoDeclare37;

let ExternProtoDeclare38 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare38.name = "ArtDeco04";
ExternProtoDeclare38.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco04","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco04"]);
browser.currentScene.children[9] = ExternProtoDeclare38;

let ExternProtoDeclare39 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare39.name = "ArtDeco05";
ExternProtoDeclare39.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco05","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco05"]);
browser.currentScene.children[10] = ExternProtoDeclare39;

let ExternProtoDeclare40 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare40.name = "ArtDeco08";
ExternProtoDeclare40.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco08","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco08"]);
browser.currentScene.children[11] = ExternProtoDeclare40;

let ExternProtoDeclare41 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare41.name = "ArtDeco09";
ExternProtoDeclare41.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco09","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco09"]);
browser.currentScene.children[12] = ExternProtoDeclare41;

let ExternProtoDeclare42 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare42.name = "ArtDeco13";
ExternProtoDeclare42.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco13","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco13"]);
browser.currentScene.children[13] = ExternProtoDeclare42;

let ExternProtoDeclare43 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare43.name = "ArtDeco18";
ExternProtoDeclare43.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco18","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco18"]);
browser.currentScene.children[14] = ExternProtoDeclare43;

let ExternProtoDeclare44 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare44.name = "ArtDeco21";
ExternProtoDeclare44.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco21","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco21"]);
browser.currentScene.children[15] = ExternProtoDeclare44;

let ExternProtoDeclare45 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare45.name = "ArtDeco24";
ExternProtoDeclare45.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco24","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco24"]);
browser.currentScene.children[16] = ExternProtoDeclare45;

let ExternProtoDeclare46 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare46.name = "ArtDeco25";
ExternProtoDeclare46.url = new MFString(new java.lang.String["../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco25","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco25"]);
browser.currentScene.children[17] = ExternProtoDeclare46;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.translation = new SFVec3f(new float[0,-0.5,0]);
let Switch48 = browser.currentScene.createNode("Switch");
Switch48.DEF = "CountDownSwitch";
Switch48.whichChoice = 0;
let Group49 = browser.currentScene.createNode("Group");
let Shape50 = browser.currentScene.createNode("Shape");
let Text51 = browser.currentScene.createNode("Text");
Text51.length = new MFFloat(new float[0]);
Text51.string = new MFString(new java.lang.String["child choice 0"]);
let FontStyle52 = browser.currentScene.createNode("FontStyle");
FontStyle52.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text51.fontStyle = FontStyle52;

Shape50.geometry = Text51;

let Appearance53 = browser.currentScene.createNode("Appearance");
let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "ArtDeco02";
Appearance53.shaders = new MFNode();

Appearance53.shaders[0] = ProtoInstance54;

Shape50.appearance = Appearance53;

Group49.children = new MFNode();

Group49.children[0] = Shape50;

Switch48.children = new MFNode();

Switch48.children[0] = Group49;

let Shape55 = browser.currentScene.createNode("Shape");
let Text56 = browser.currentScene.createNode("Text");
Text56.length = new MFFloat(new float[0]);
Text56.string = new MFString(new java.lang.String["child choice 1"]);
let FontStyle57 = browser.currentScene.createNode("FontStyle");
FontStyle57.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text56.fontStyle = FontStyle57;

Shape55.geometry = Text56;

let Appearance58 = browser.currentScene.createNode("Appearance");
let ProtoInstance59 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance59.name = "ArtDeco09";
Appearance58.shaders = new MFNode();

Appearance58.shaders[0] = ProtoInstance59;

Shape55.appearance = Appearance58;

Switch48.children[1] = Shape55;

let Shape60 = browser.currentScene.createNode("Shape");
let Text61 = browser.currentScene.createNode("Text");
Text61.length = new MFFloat(new float[0]);
Text61.string = new MFString(new java.lang.String["child choice 2"]);
let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text61.fontStyle = FontStyle62;

Shape60.geometry = Text61;

let Appearance63 = browser.currentScene.createNode("Appearance");
let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "ArtDeco08";
Appearance63.shaders = new MFNode();

Appearance63.shaders[0] = ProtoInstance64;

Shape60.appearance = Appearance63;

Switch48.children[2] = Shape60;

let Shape65 = browser.currentScene.createNode("Shape");
let Text66 = browser.currentScene.createNode("Text");
Text66.length = new MFFloat(new float[0]);
Text66.string = new MFString(new java.lang.String["child choice 3"]);
let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text66.fontStyle = FontStyle67;

Shape65.geometry = Text66;

let Appearance68 = browser.currentScene.createNode("Appearance");
let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "ArtDeco18";
Appearance68.shaders = new MFNode();

Appearance68.shaders[0] = ProtoInstance69;

Shape65.appearance = Appearance68;

Switch48.children[3] = Shape65;

let Shape70 = browser.currentScene.createNode("Shape");
let Text71 = browser.currentScene.createNode("Text");
Text71.length = new MFFloat(new float[0]);
Text71.string = new MFString(new java.lang.String["child choice 4"]);
let FontStyle72 = browser.currentScene.createNode("FontStyle");
FontStyle72.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text71.fontStyle = FontStyle72;

Shape70.geometry = Text71;

let Appearance73 = browser.currentScene.createNode("Appearance");
let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "ArtDeco21";
Appearance73.shaders = new MFNode();

Appearance73.shaders[0] = ProtoInstance74;

Shape70.appearance = Appearance73;

Switch48.children[4] = Shape70;

let Shape75 = browser.currentScene.createNode("Shape");
let Text76 = browser.currentScene.createNode("Text");
Text76.length = new MFFloat(new float[0]);
Text76.string = new MFString(new java.lang.String["child choice 5"]);
let FontStyle77 = browser.currentScene.createNode("FontStyle");
FontStyle77.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text76.fontStyle = FontStyle77;

Shape75.geometry = Text76;

let Appearance78 = browser.currentScene.createNode("Appearance");
let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.name = "ArtDeco24";
Appearance78.shaders = new MFNode();

Appearance78.shaders[0] = ProtoInstance79;

Shape75.appearance = Appearance78;

Switch48.children[5] = Shape75;

let Shape80 = browser.currentScene.createNode("Shape");
let Text81 = browser.currentScene.createNode("Text");
Text81.length = new MFFloat(new float[0]);
Text81.string = new MFString(new java.lang.String["child choice 6"]);
let FontStyle82 = browser.currentScene.createNode("FontStyle");
FontStyle82.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text81.fontStyle = FontStyle82;

Shape80.geometry = Text81;

let Appearance83 = browser.currentScene.createNode("Appearance");
let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.name = "ArtDeco25";
Appearance83.shaders = new MFNode();

Appearance83.shaders[0] = ProtoInstance84;

Shape80.appearance = Appearance83;

Switch48.children[6] = Shape80;

let Shape85 = browser.currentScene.createNode("Shape");
let Text86 = browser.currentScene.createNode("Text");
Text86.length = new MFFloat(new float[0]);
Text86.string = new MFString(new java.lang.String["child choice 7"]);
let FontStyle87 = browser.currentScene.createNode("FontStyle");
FontStyle87.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text86.fontStyle = FontStyle87;

Shape85.geometry = Text86;

let Appearance88 = browser.currentScene.createNode("Appearance");
let ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "ArtDeco13";
Appearance88.shaders = new MFNode();

Appearance88.shaders[0] = ProtoInstance89;

Shape85.appearance = Appearance88;

Switch48.children[7] = Shape85;

let Shape90 = browser.currentScene.createNode("Shape");
let Text91 = browser.currentScene.createNode("Text");
Text91.length = new MFFloat(new float[0]);
Text91.string = new MFString(new java.lang.String["child choice 8"]);
let FontStyle92 = browser.currentScene.createNode("FontStyle");
FontStyle92.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text91.fontStyle = FontStyle92;

Shape90.geometry = Text91;

let Appearance93 = browser.currentScene.createNode("Appearance");
let ProtoInstance94 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance94.name = "ArtDeco05";
Appearance93.shaders = new MFNode();

Appearance93.shaders[0] = ProtoInstance94;

Shape90.appearance = Appearance93;

Switch48.children[8] = Shape90;

let Shape95 = browser.currentScene.createNode("Shape");
let Text96 = browser.currentScene.createNode("Text");
Text96.length = new MFFloat(new float[0]);
Text96.string = new MFString(new java.lang.String["child choice 9"]);
let FontStyle97 = browser.currentScene.createNode("FontStyle");
FontStyle97.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text96.fontStyle = FontStyle97;

Shape95.geometry = Text96;

let Appearance98 = browser.currentScene.createNode("Appearance");
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "ArtDeco04";
Appearance98.shaders = new MFNode();

Appearance98.shaders[0] = ProtoInstance99;

Shape95.appearance = Appearance98;

Switch48.children[9] = Shape95;

let Shape100 = browser.currentScene.createNode("Shape");
let Text101 = browser.currentScene.createNode("Text");
Text101.length = new MFFloat(new float[0]);
Text101.string = new MFString(new java.lang.String["child choice 10"]);
let FontStyle102 = browser.currentScene.createNode("FontStyle");
FontStyle102.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text101.fontStyle = FontStyle102;

Shape100.geometry = Text101;

let Appearance103 = browser.currentScene.createNode("Appearance");
let ProtoInstance104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance104.name = "ArtDeco02";
Appearance103.shaders = new MFNode();

Appearance103.shaders[0] = ProtoInstance104;

Shape100.appearance = Appearance103;

Switch48.children[10] = Shape100;

Transform47.children = new MFNode();

Transform47.children[0] = Switch48;

browser.currentScene.children[18] = Transform47;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromField = "value_changed";
ROUTE105.fromNode = "IntegerSequencerInstance";
ROUTE105.toField = "whichChoice";
ROUTE105.toNode = "CountDownSwitch";
browser.currentScene.children[19] = ROUTE105;

