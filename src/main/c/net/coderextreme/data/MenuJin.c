#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "Menu.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "X3D scene with a Switch of Inlines controlled by a menu";
head1.meta[1] = meta3;

head = head1;

//Viewpoint and any other scene setup
Viewpoint Viewpoint5 = createNode("Viewpoint");
Viewpoint5.position = new SFVec3f(new float[0,20,110]);
children = new MFNode();

children[0] = Viewpoint5;

Group Group6 = createNode("Group");
Switch Switch7 = createNode("Switch");
Switch7.DEF = "SceneSwitcher";
Switch7.whichChoice = 0;
Group Group8 = createNode("Group");
Script Script9 = createNode("Script");
Script9.DEF = "Choice0";
field field10 = createNode("field");
field10.name = "touchTime";
field10.type = "SFTime";
field10.accessType = "inputOnly";
Script9.field = new MFNode();

Script9.field[0] = field10;

field field11 = createNode("field");
field11.name = "choice";
field11.type = "SFInt32";
field11.accessType = "outputOnly";
Script9.field[1] = field11;


Script9.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }`)
Group8.children = new MFNode();

Group8.children[0] = Script9;

Inline Inline12 = createNode("Inline");
Inline12.DEF = "JinBlink";
Inline12.url = new MFString(new java.lang.String["../resources/JinBlink.x3d","JinBlink.x3d"]);
Group8.children[1] = Inline12;

Switch7.children = new MFNode();

Switch7.children[0] = Group8;

Group Group13 = createNode("Group");
Script Script14 = createNode("Script");
Script14.DEF = "Choice1";
field field15 = createNode("field");
field15.name = "touchTime";
field15.type = "SFTime";
field15.accessType = "inputOnly";
Script14.field = new MFNode();

Script14.field[0] = field15;

field field16 = createNode("field");
field16.name = "choice";
field16.type = "SFInt32";
field16.accessType = "outputOnly";
Script14.field[1] = field16;


Script14.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }`)
Group13.children = new MFNode();

Group13.children[0] = Script14;

Inline Inline17 = createNode("Inline");
Inline17.DEF = "JinBrowLowerer";
Inline17.url = new MFString(new java.lang.String["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]);
Group13.children[1] = Inline17;

Switch7.children[1] = Group13;

Group Group18 = createNode("Group");
Script Script19 = createNode("Script");
Script19.DEF = "Choice2";
field field20 = createNode("field");
field20.name = "touchTime";
field20.type = "SFTime";
field20.accessType = "inputOnly";
Script19.field = new MFNode();

Script19.field[0] = field20;

field field21 = createNode("field");
field21.name = "choice";
field21.type = "SFInt32";
field21.accessType = "outputOnly";
Script19.field[1] = field21;


Script19.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }`)
Group18.children = new MFNode();

Group18.children[0] = Script19;

Inline Inline22 = createNode("Inline");
Inline22.DEF = "JinCheekPuffer";
Inline22.url = new MFString(new java.lang.String["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]);
Group18.children[1] = Inline22;

Switch7.children[2] = Group18;

Group Group23 = createNode("Group");
Script Script24 = createNode("Script");
Script24.DEF = "Choice3";
field field25 = createNode("field");
field25.name = "touchTime";
field25.type = "SFTime";
field25.accessType = "inputOnly";
Script24.field = new MFNode();

Script24.field[0] = field25;

field field26 = createNode("field");
field26.name = "choice";
field26.type = "SFInt32";
field26.accessType = "outputOnly";
Script24.field[1] = field26;


Script24.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }`)
Group23.children = new MFNode();

Group23.children[0] = Script24;

Inline Inline27 = createNode("Inline");
Inline27.DEF = "JinCheekRaiser";
Inline27.url = new MFString(new java.lang.String["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]);
Group23.children[1] = Inline27;

Switch7.children[3] = Group23;

Group Group28 = createNode("Group");
Script Script29 = createNode("Script");
Script29.DEF = "Choice4";
field field30 = createNode("field");
field30.name = "touchTime";
field30.type = "SFTime";
field30.accessType = "inputOnly";
Script29.field = new MFNode();

Script29.field[0] = field30;

field field31 = createNode("field");
field31.name = "choice";
field31.type = "SFInt32";
field31.accessType = "outputOnly";
Script29.field[1] = field31;


Script29.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }`)
Group28.children = new MFNode();

Group28.children[0] = Script29;

Inline Inline32 = createNode("Inline");
Inline32.DEF = "JinChinRaiser";
Inline32.url = new MFString(new java.lang.String["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]);
Group28.children[1] = Inline32;

Switch7.children[4] = Group28;

Group Group33 = createNode("Group");
Script Script34 = createNode("Script");
Script34.DEF = "Choice5";
field field35 = createNode("field");
field35.name = "touchTime";
field35.type = "SFTime";
field35.accessType = "inputOnly";
Script34.field = new MFNode();

Script34.field[0] = field35;

field field36 = createNode("field");
field36.name = "choice";
field36.type = "SFInt32";
field36.accessType = "outputOnly";
Script34.field[1] = field36;


Script34.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }`)
Group33.children = new MFNode();

Group33.children[0] = Script34;

Inline Inline37 = createNode("Inline");
Inline37.DEF = "JinDimpler";
Inline37.url = new MFString(new java.lang.String["../resources/JinDimpler.x3d","JinDimpler.x3d"]);
Group33.children[1] = Inline37;

Switch7.children[5] = Group33;

Group Group38 = createNode("Group");
Script Script39 = createNode("Script");
Script39.DEF = "Choice6";
field field40 = createNode("field");
field40.name = "touchTime";
field40.type = "SFTime";
field40.accessType = "inputOnly";
Script39.field = new MFNode();

Script39.field[0] = field40;

field field41 = createNode("field");
field41.name = "choice";
field41.type = "SFInt32";
field41.accessType = "outputOnly";
Script39.field[1] = field41;


Script39.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }`)
Group38.children = new MFNode();

Group38.children[0] = Script39;

Inline Inline42 = createNode("Inline");
Inline42.DEF = "JinEyesClosed";
Inline42.url = new MFString(new java.lang.String["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]);
Group38.children[1] = Inline42;

Switch7.children[6] = Group38;

Group Group43 = createNode("Group");
Script Script44 = createNode("Script");
Script44.DEF = "Choice7";
field field45 = createNode("field");
field45.name = "touchTime";
field45.type = "SFTime";
field45.accessType = "inputOnly";
Script44.field = new MFNode();

Script44.field[0] = field45;

field field46 = createNode("field");
field46.name = "choice";
field46.type = "SFInt32";
field46.accessType = "outputOnly";
Script44.field[1] = field46;


Script44.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }`)
Group43.children = new MFNode();

Group43.children[0] = Script44;

Inline Inline47 = createNode("Inline");
Inline47.DEF = "JinInnerBrowRaiser";
Inline47.url = new MFString(new java.lang.String["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]);
Group43.children[1] = Inline47;

Switch7.children[7] = Group43;

Group Group48 = createNode("Group");
Script Script49 = createNode("Script");
Script49.DEF = "Choice8";
field field50 = createNode("field");
field50.name = "touchTime";
field50.type = "SFTime";
field50.accessType = "inputOnly";
Script49.field = new MFNode();

Script49.field[0] = field50;

field field51 = createNode("field");
field51.name = "choice";
field51.type = "SFInt32";
field51.accessType = "outputOnly";
Script49.field[1] = field51;


Script49.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }`)
Group48.children = new MFNode();

Group48.children[0] = Script49;

Inline Inline52 = createNode("Inline");
Inline52.DEF = "JinJawDrop";
Inline52.url = new MFString(new java.lang.String["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]);
Group48.children[1] = Inline52;

Switch7.children[8] = Group48;

Group Group53 = createNode("Group");
Script Script54 = createNode("Script");
Script54.DEF = "Choice9";
field field55 = createNode("field");
field55.name = "touchTime";
field55.type = "SFTime";
field55.accessType = "inputOnly";
Script54.field = new MFNode();

Script54.field[0] = field55;

field field56 = createNode("field");
field56.name = "choice";
field56.type = "SFInt32";
field56.accessType = "outputOnly";
Script54.field[1] = field56;


Script54.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }`)
Group53.children = new MFNode();

Group53.children[0] = Script54;

Inline Inline57 = createNode("Inline");
Inline57.DEF = "JinLidDroop";
Inline57.url = new MFString(new java.lang.String["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]);
Group53.children[1] = Inline57;

Switch7.children[9] = Group53;

Group Group58 = createNode("Group");
Script Script59 = createNode("Script");
Script59.DEF = "Choice10";
field field60 = createNode("field");
field60.name = "touchTime";
field60.type = "SFTime";
field60.accessType = "inputOnly";
Script59.field = new MFNode();

Script59.field[0] = field60;

field field61 = createNode("field");
field61.name = "choice";
field61.type = "SFInt32";
field61.accessType = "outputOnly";
Script59.field[1] = field61;


Script59.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }`)
Group58.children = new MFNode();

Group58.children[0] = Script59;

Inline Inline62 = createNode("Inline");
Inline62.DEF = "JinLidTightener";
Inline62.url = new MFString(new java.lang.String["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]);
Group58.children[1] = Inline62;

Switch7.children[10] = Group58;

Group Group63 = createNode("Group");
Script Script64 = createNode("Script");
Script64.DEF = "Choice11";
field field65 = createNode("field");
field65.name = "touchTime";
field65.type = "SFTime";
field65.accessType = "inputOnly";
Script64.field = new MFNode();

Script64.field[0] = field65;

field field66 = createNode("field");
field66.name = "choice";
field66.type = "SFInt32";
field66.accessType = "outputOnly";
Script64.field[1] = field66;


Script64.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }`)
Group63.children = new MFNode();

Group63.children[0] = Script64;

Inline Inline67 = createNode("Inline");
Inline67.DEF = "JinLipCornerDepressor";
Inline67.url = new MFString(new java.lang.String["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]);
Group63.children[1] = Inline67;

Switch7.children[11] = Group63;

Group Group68 = createNode("Group");
Script Script69 = createNode("Script");
Script69.DEF = "Choice12";
field field70 = createNode("field");
field70.name = "touchTime";
field70.type = "SFTime";
field70.accessType = "inputOnly";
Script69.field = new MFNode();

Script69.field[0] = field70;

field field71 = createNode("field");
field71.name = "choice";
field71.type = "SFInt32";
field71.accessType = "outputOnly";
Script69.field[1] = field71;


Script69.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }`)
Group68.children = new MFNode();

Group68.children[0] = Script69;

Inline Inline72 = createNode("Inline");
Inline72.DEF = "JinLipCornerPuller";
Inline72.url = new MFString(new java.lang.String["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]);
Group68.children[1] = Inline72;

Switch7.children[12] = Group68;

Group Group73 = createNode("Group");
Script Script74 = createNode("Script");
Script74.DEF = "Choice13";
field field75 = createNode("field");
field75.name = "touchTime";
field75.type = "SFTime";
field75.accessType = "inputOnly";
Script74.field = new MFNode();

Script74.field[0] = field75;

field field76 = createNode("field");
field76.name = "choice";
field76.type = "SFInt32";
field76.accessType = "outputOnly";
Script74.field[1] = field76;


Script74.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }`)
Group73.children = new MFNode();

Group73.children[0] = Script74;

Inline Inline77 = createNode("Inline");
Inline77.DEF = "JinLipFunneler";
Inline77.url = new MFString(new java.lang.String["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]);
Group73.children[1] = Inline77;

Switch7.children[13] = Group73;

Group Group78 = createNode("Group");
Script Script79 = createNode("Script");
Script79.DEF = "Choice14";
field field80 = createNode("field");
field80.name = "touchTime";
field80.type = "SFTime";
field80.accessType = "inputOnly";
Script79.field = new MFNode();

Script79.field[0] = field80;

field field81 = createNode("field");
field81.name = "choice";
field81.type = "SFInt32";
field81.accessType = "outputOnly";
Script79.field[1] = field81;


Script79.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }`)
Group78.children = new MFNode();

Group78.children[0] = Script79;

Inline Inline82 = createNode("Inline");
Inline82.DEF = "JinLipPressor";
Inline82.url = new MFString(new java.lang.String["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]);
Group78.children[1] = Inline82;

Switch7.children[14] = Group78;

Group Group83 = createNode("Group");
Script Script84 = createNode("Script");
Script84.DEF = "Choice15";
field field85 = createNode("field");
field85.name = "touchTime";
field85.type = "SFTime";
field85.accessType = "inputOnly";
Script84.field = new MFNode();

Script84.field[0] = field85;

field field86 = createNode("field");
field86.name = "choice";
field86.type = "SFInt32";
field86.accessType = "outputOnly";
Script84.field[1] = field86;


Script84.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }`)
Group83.children = new MFNode();

Group83.children[0] = Script84;

Inline Inline87 = createNode("Inline");
Inline87.DEF = "JinLipPuckerer";
Inline87.url = new MFString(new java.lang.String["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]);
Group83.children[1] = Inline87;

Switch7.children[15] = Group83;

Group Group88 = createNode("Group");
Script Script89 = createNode("Script");
Script89.DEF = "Choice16";
field field90 = createNode("field");
field90.name = "touchTime";
field90.type = "SFTime";
field90.accessType = "inputOnly";
Script89.field = new MFNode();

Script89.field[0] = field90;

field field91 = createNode("field");
field91.name = "choice";
field91.type = "SFInt32";
field91.accessType = "outputOnly";
Script89.field[1] = field91;


Script89.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }`)
Group88.children = new MFNode();

Group88.children[0] = Script89;

Inline Inline92 = createNode("Inline");
Inline92.DEF = "JinLipsPart";
Inline92.url = new MFString(new java.lang.String["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]);
Group88.children[1] = Inline92;

Switch7.children[16] = Group88;

Group Group93 = createNode("Group");
Script Script94 = createNode("Script");
Script94.DEF = "Choice17";
field field95 = createNode("field");
field95.name = "touchTime";
field95.type = "SFTime";
field95.accessType = "inputOnly";
Script94.field = new MFNode();

Script94.field[0] = field95;

field field96 = createNode("field");
field96.name = "choice";
field96.type = "SFInt32";
field96.accessType = "outputOnly";
Script94.field[1] = field96;


Script94.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }`)
Group93.children = new MFNode();

Group93.children[0] = Script94;

Inline Inline97 = createNode("Inline");
Inline97.DEF = "JinLipStretcher";
Inline97.url = new MFString(new java.lang.String["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]);
Group93.children[1] = Inline97;

Switch7.children[17] = Group93;

Group Group98 = createNode("Group");
Script Script99 = createNode("Script");
Script99.DEF = "Choice18";
field field100 = createNode("field");
field100.name = "touchTime";
field100.type = "SFTime";
field100.accessType = "inputOnly";
Script99.field = new MFNode();

Script99.field[0] = field100;

field field101 = createNode("field");
field101.name = "choice";
field101.type = "SFInt32";
field101.accessType = "outputOnly";
Script99.field[1] = field101;


Script99.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }`)
Group98.children = new MFNode();

Group98.children[0] = Script99;

Inline Inline102 = createNode("Inline");
Inline102.DEF = "JinLipSuck";
Inline102.url = new MFString(new java.lang.String["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]);
Group98.children[1] = Inline102;

Switch7.children[18] = Group98;

Group Group103 = createNode("Group");
Script Script104 = createNode("Script");
Script104.DEF = "Choice19";
field field105 = createNode("field");
field105.name = "touchTime";
field105.type = "SFTime";
field105.accessType = "inputOnly";
Script104.field = new MFNode();

Script104.field[0] = field105;

field field106 = createNode("field");
field106.name = "choice";
field106.type = "SFInt32";
field106.accessType = "outputOnly";
Script104.field[1] = field106;


Script104.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }`)
Group103.children = new MFNode();

Group103.children[0] = Script104;

Inline Inline107 = createNode("Inline");
Inline107.DEF = "JinLipTightener";
Inline107.url = new MFString(new java.lang.String["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]);
Group103.children[1] = Inline107;

Switch7.children[19] = Group103;

Group Group108 = createNode("Group");
Script Script109 = createNode("Script");
Script109.DEF = "Choice20";
field field110 = createNode("field");
field110.name = "touchTime";
field110.type = "SFTime";
field110.accessType = "inputOnly";
Script109.field = new MFNode();

Script109.field[0] = field110;

field field111 = createNode("field");
field111.name = "choice";
field111.type = "SFInt32";
field111.accessType = "outputOnly";
Script109.field[1] = field111;


Script109.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }`)
Group108.children = new MFNode();

Group108.children[0] = Script109;

Inline Inline112 = createNode("Inline");
Inline112.DEF = "JinLowerLipDepressor";
Inline112.url = new MFString(new java.lang.String["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]);
Group108.children[1] = Inline112;

Switch7.children[20] = Group108;

Group Group113 = createNode("Group");
Script Script114 = createNode("Script");
Script114.DEF = "Choice21";
field field115 = createNode("field");
field115.name = "touchTime";
field115.type = "SFTime";
field115.accessType = "inputOnly";
Script114.field = new MFNode();

Script114.field[0] = field115;

field field116 = createNode("field");
field116.name = "choice";
field116.type = "SFInt32";
field116.accessType = "outputOnly";
Script114.field[1] = field116;


Script114.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }`)
Group113.children = new MFNode();

Group113.children[0] = Script114;

Inline Inline117 = createNode("Inline");
Inline117.DEF = "JinMouthStretch";
Inline117.url = new MFString(new java.lang.String["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]);
Group113.children[1] = Inline117;

Switch7.children[21] = Group113;

Group Group118 = createNode("Group");
Script Script119 = createNode("Script");
Script119.DEF = "Choice22";
field field120 = createNode("field");
field120.name = "touchTime";
field120.type = "SFTime";
field120.accessType = "inputOnly";
Script119.field = new MFNode();

Script119.field[0] = field120;

field field121 = createNode("field");
field121.name = "choice";
field121.type = "SFInt32";
field121.accessType = "outputOnly";
Script119.field[1] = field121;


Script119.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }`)
Group118.children = new MFNode();

Group118.children[0] = Script119;

Inline Inline122 = createNode("Inline");
Inline122.DEF = "JinNasolabialDeepener";
Inline122.url = new MFString(new java.lang.String["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]);
Group118.children[1] = Inline122;

Switch7.children[22] = Group118;

Group Group123 = createNode("Group");
Script Script124 = createNode("Script");
Script124.DEF = "Choice23";
field field125 = createNode("field");
field125.name = "touchTime";
field125.type = "SFTime";
field125.accessType = "inputOnly";
Script124.field = new MFNode();

Script124.field[0] = field125;

field field126 = createNode("field");
field126.name = "choice";
field126.type = "SFInt32";
field126.accessType = "outputOnly";
Script124.field[1] = field126;


Script124.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }`)
Group123.children = new MFNode();

Group123.children[0] = Script124;

Inline Inline127 = createNode("Inline");
Inline127.DEF = "JinNoseWrinkler";
Inline127.url = new MFString(new java.lang.String["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]);
Group123.children[1] = Inline127;

Switch7.children[23] = Group123;

Group Group128 = createNode("Group");
Script Script129 = createNode("Script");
Script129.DEF = "Choice24";
field field130 = createNode("field");
field130.name = "touchTime";
field130.type = "SFTime";
field130.accessType = "inputOnly";
Script129.field = new MFNode();

Script129.field[0] = field130;

field field131 = createNode("field");
field131.name = "choice";
field131.type = "SFInt32";
field131.accessType = "outputOnly";
Script129.field[1] = field131;


Script129.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }`)
Group128.children = new MFNode();

Group128.children[0] = Script129;

Inline Inline132 = createNode("Inline");
Inline132.DEF = "JinOuterBrowRaiser";
Inline132.url = new MFString(new java.lang.String["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]);
Group128.children[1] = Inline132;

Switch7.children[24] = Group128;

Group Group133 = createNode("Group");
Script Script134 = createNode("Script");
Script134.DEF = "Choice25";
field field135 = createNode("field");
field135.name = "touchTime";
field135.type = "SFTime";
field135.accessType = "inputOnly";
Script134.field = new MFNode();

Script134.field[0] = field135;

field field136 = createNode("field");
field136.name = "choice";
field136.type = "SFInt32";
field136.accessType = "outputOnly";
Script134.field[1] = field136;


Script134.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }`)
Group133.children = new MFNode();

Group133.children[0] = Script134;

Inline Inline137 = createNode("Inline");
Inline137.DEF = "JinSlit";
Inline137.url = new MFString(new java.lang.String["../resources/JinSlit.x3d","JinSlit.x3d"]);
Group133.children[1] = Inline137;

Switch7.children[25] = Group133;

Group Group138 = createNode("Group");
Script Script139 = createNode("Script");
Script139.DEF = "Choice26";
field field140 = createNode("field");
field140.name = "touchTime";
field140.type = "SFTime";
field140.accessType = "inputOnly";
Script139.field = new MFNode();

Script139.field[0] = field140;

field field141 = createNode("field");
field141.name = "choice";
field141.type = "SFInt32";
field141.accessType = "outputOnly";
Script139.field[1] = field141;


Script139.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }`)
Group138.children = new MFNode();

Group138.children[0] = Script139;

Inline Inline142 = createNode("Inline");
Inline142.DEF = "JinSquint";
Inline142.url = new MFString(new java.lang.String["../resources/JinSquint.x3d","JinSquint.x3d"]);
Group138.children[1] = Inline142;

Switch7.children[26] = Group138;

Group Group143 = createNode("Group");
Script Script144 = createNode("Script");
Script144.DEF = "Choice27";
field field145 = createNode("field");
field145.name = "touchTime";
field145.type = "SFTime";
field145.accessType = "inputOnly";
Script144.field = new MFNode();

Script144.field[0] = field145;

field field146 = createNode("field");
field146.name = "choice";
field146.type = "SFInt32";
field146.accessType = "outputOnly";
Script144.field[1] = field146;


Script144.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }`)
Group143.children = new MFNode();

Group143.children[0] = Script144;

Inline Inline147 = createNode("Inline");
Inline147.DEF = "JinUpperLidRaiser";
Inline147.url = new MFString(new java.lang.String["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]);
Group143.children[1] = Inline147;

Switch7.children[27] = Group143;

Group Group148 = createNode("Group");
Script Script149 = createNode("Script");
Script149.DEF = "Choice28";
field field150 = createNode("field");
field150.name = "touchTime";
field150.type = "SFTime";
field150.accessType = "inputOnly";
Script149.field = new MFNode();

Script149.field[0] = field150;

field field151 = createNode("field");
field151.name = "choice";
field151.type = "SFInt32";
field151.accessType = "outputOnly";
Script149.field[1] = field151;


Script149.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }`)
Group148.children = new MFNode();

Group148.children[0] = Script149;

Inline Inline152 = createNode("Inline");
Inline152.DEF = "JinUpperLipRaiser";
Inline152.url = new MFString(new java.lang.String["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]);
Group148.children[1] = Inline152;

Switch7.children[28] = Group148;

Group Group153 = createNode("Group");
Script Script154 = createNode("Script");
Script154.DEF = "Choice29";
field field155 = createNode("field");
field155.name = "touchTime";
field155.type = "SFTime";
field155.accessType = "inputOnly";
Script154.field = new MFNode();

Script154.field[0] = field155;

field field156 = createNode("field");
field156.name = "choice";
field156.type = "SFInt32";
field156.accessType = "outputOnly";
Script154.field[1] = field156;


Script154.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }`)
Group153.children = new MFNode();

Group153.children[0] = Script154;

Inline Inline157 = createNode("Inline");
Inline157.DEF = "JinWink";
Inline157.url = new MFString(new java.lang.String["../resources/JinWink.x3d","JinWink.x3d"]);
Group153.children[1] = Inline157;

Switch7.children[29] = Group153;

Group6.children = new MFNode();

Group6.children[0] = Switch7;

Transform Transform158 = createNode("Transform");
Transform158.translation = new SFVec3f(new float[48,63.4,0]);
TouchSensor TouchSensor159 = createNode("TouchSensor");
TouchSensor159.description = "TSJinBlink";
TouchSensor159.DEF = "JinBlink_Sensor";
Transform158.children = new MFNode();

Transform158.children[0] = TouchSensor159;

Shape Shape160 = createNode("Shape");
Appearance Appearance161 = createNode("Appearance");
Material Material162 = createNode("Material");
Material162.diffuseColor = new SFColor(new float[1,1,1]);
Appearance161.material = Material162;

Shape160.appearance = Appearance161;

Text Text163 = createNode("Text");
Text163.string = new MFString(new java.lang.String["JinBlink"]);
FontStyle FontStyle164 = createNode("FontStyle");
FontStyle164.size = 2.4;
FontStyle164.spacing = 1.2;
FontStyle164.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text163.fontStyle = FontStyle164;

Shape160.geometry = Text163;

Transform158.child[1] = Shape160;

Shape Shape165 = createNode("Shape");
Appearance Appearance166 = createNode("Appearance");
Material Material167 = createNode("Material");
Material167.diffuseColor = new SFColor(new float[0,0,1]);
Appearance166.material = Material167;

Shape165.appearance = Appearance166;

IndexedFaceSet IndexedFaceSet168 = createNode("IndexedFaceSet");
IndexedFaceSet168.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate169 = createNode("Coordinate");
Coordinate169.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet168.coord = Coordinate169;

Shape165.geometry = IndexedFaceSet168;

Transform158.child[2] = Shape165;

Group6.children[1] = Transform158;

ROUTE ROUTE170 = createNode("ROUTE");
ROUTE170.fromNode = "JinBlink_Sensor";
ROUTE170.fromField = "touchTime";
ROUTE170.toNode = "Choice0";
ROUTE170.toField = "touchTime";
Group6.children[2] = ROUTE170;

ROUTE ROUTE171 = createNode("ROUTE");
ROUTE171.fromNode = "Choice0";
ROUTE171.fromField = "choice";
ROUTE171.toNode = "SceneSwitcher";
ROUTE171.toField = "whichChoice";
Group6.children[3] = ROUTE171;

Transform Transform172 = createNode("Transform");
Transform172.translation = new SFVec3f(new float[48,60.4,0]);
TouchSensor TouchSensor173 = createNode("TouchSensor");
TouchSensor173.description = "TSJinBrowLowerer";
TouchSensor173.DEF = "JinBrowLowerer_Sensor";
Transform172.children = new MFNode();

Transform172.children[0] = TouchSensor173;

Shape Shape174 = createNode("Shape");
Appearance Appearance175 = createNode("Appearance");
Material Material176 = createNode("Material");
Material176.diffuseColor = new SFColor(new float[1,1,1]);
Appearance175.material = Material176;

Shape174.appearance = Appearance175;

Text Text177 = createNode("Text");
Text177.string = new MFString(new java.lang.String["JinBrowLowerer"]);
FontStyle FontStyle178 = createNode("FontStyle");
FontStyle178.size = 2.4;
FontStyle178.spacing = 1.2;
FontStyle178.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text177.fontStyle = FontStyle178;

Shape174.geometry = Text177;

Transform172.child[1] = Shape174;

Shape Shape179 = createNode("Shape");
Appearance Appearance180 = createNode("Appearance");
Material Material181 = createNode("Material");
Material181.diffuseColor = new SFColor(new float[0,0,1]);
Appearance180.material = Material181;

Shape179.appearance = Appearance180;

IndexedFaceSet IndexedFaceSet182 = createNode("IndexedFaceSet");
IndexedFaceSet182.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate183 = createNode("Coordinate");
Coordinate183.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet182.coord = Coordinate183;

Shape179.geometry = IndexedFaceSet182;

Transform172.child[2] = Shape179;

Group6.children[4] = Transform172;

ROUTE ROUTE184 = createNode("ROUTE");
ROUTE184.fromNode = "JinBrowLowerer_Sensor";
ROUTE184.fromField = "touchTime";
ROUTE184.toNode = "Choice1";
ROUTE184.toField = "touchTime";
Group6.children[5] = ROUTE184;

ROUTE ROUTE185 = createNode("ROUTE");
ROUTE185.fromNode = "Choice1";
ROUTE185.fromField = "choice";
ROUTE185.toNode = "SceneSwitcher";
ROUTE185.toField = "whichChoice";
Group6.children[6] = ROUTE185;

Transform Transform186 = createNode("Transform");
Transform186.translation = new SFVec3f(new float[48,57.39999999999999,0]);
TouchSensor TouchSensor187 = createNode("TouchSensor");
TouchSensor187.description = "TSJinCheekPuffer";
TouchSensor187.DEF = "JinCheekPuffer_Sensor";
Transform186.children = new MFNode();

Transform186.children[0] = TouchSensor187;

Shape Shape188 = createNode("Shape");
Appearance Appearance189 = createNode("Appearance");
Material Material190 = createNode("Material");
Material190.diffuseColor = new SFColor(new float[1,1,1]);
Appearance189.material = Material190;

Shape188.appearance = Appearance189;

Text Text191 = createNode("Text");
Text191.string = new MFString(new java.lang.String["JinCheekPuffer"]);
FontStyle FontStyle192 = createNode("FontStyle");
FontStyle192.size = 2.4;
FontStyle192.spacing = 1.2;
FontStyle192.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text191.fontStyle = FontStyle192;

Shape188.geometry = Text191;

Transform186.child[1] = Shape188;

Shape Shape193 = createNode("Shape");
Appearance Appearance194 = createNode("Appearance");
Material Material195 = createNode("Material");
Material195.diffuseColor = new SFColor(new float[0,0,1]);
Appearance194.material = Material195;

Shape193.appearance = Appearance194;

IndexedFaceSet IndexedFaceSet196 = createNode("IndexedFaceSet");
IndexedFaceSet196.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate197 = createNode("Coordinate");
Coordinate197.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet196.coord = Coordinate197;

Shape193.geometry = IndexedFaceSet196;

Transform186.child[2] = Shape193;

Group6.children[7] = Transform186;

ROUTE ROUTE198 = createNode("ROUTE");
ROUTE198.fromNode = "JinCheekPuffer_Sensor";
ROUTE198.fromField = "touchTime";
ROUTE198.toNode = "Choice2";
ROUTE198.toField = "touchTime";
Group6.children[8] = ROUTE198;

ROUTE ROUTE199 = createNode("ROUTE");
ROUTE199.fromNode = "Choice2";
ROUTE199.fromField = "choice";
ROUTE199.toNode = "SceneSwitcher";
ROUTE199.toField = "whichChoice";
Group6.children[9] = ROUTE199;

Transform Transform200 = createNode("Transform");
Transform200.translation = new SFVec3f(new float[48,54.39999999999999,0]);
TouchSensor TouchSensor201 = createNode("TouchSensor");
TouchSensor201.description = "TSJinCheekRaiser";
TouchSensor201.DEF = "JinCheekRaiser_Sensor";
Transform200.children = new MFNode();

Transform200.children[0] = TouchSensor201;

Shape Shape202 = createNode("Shape");
Appearance Appearance203 = createNode("Appearance");
Material Material204 = createNode("Material");
Material204.diffuseColor = new SFColor(new float[1,1,1]);
Appearance203.material = Material204;

Shape202.appearance = Appearance203;

Text Text205 = createNode("Text");
Text205.string = new MFString(new java.lang.String["JinCheekRaiser"]);
FontStyle FontStyle206 = createNode("FontStyle");
FontStyle206.size = 2.4;
FontStyle206.spacing = 1.2;
FontStyle206.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text205.fontStyle = FontStyle206;

Shape202.geometry = Text205;

Transform200.child[1] = Shape202;

Shape Shape207 = createNode("Shape");
Appearance Appearance208 = createNode("Appearance");
Material Material209 = createNode("Material");
Material209.diffuseColor = new SFColor(new float[0,0,1]);
Appearance208.material = Material209;

Shape207.appearance = Appearance208;

IndexedFaceSet IndexedFaceSet210 = createNode("IndexedFaceSet");
IndexedFaceSet210.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate211 = createNode("Coordinate");
Coordinate211.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet210.coord = Coordinate211;

Shape207.geometry = IndexedFaceSet210;

Transform200.child[2] = Shape207;

Group6.children[10] = Transform200;

ROUTE ROUTE212 = createNode("ROUTE");
ROUTE212.fromNode = "JinCheekRaiser_Sensor";
ROUTE212.fromField = "touchTime";
ROUTE212.toNode = "Choice3";
ROUTE212.toField = "touchTime";
Group6.children[11] = ROUTE212;

ROUTE ROUTE213 = createNode("ROUTE");
ROUTE213.fromNode = "Choice3";
ROUTE213.fromField = "choice";
ROUTE213.toNode = "SceneSwitcher";
ROUTE213.toField = "whichChoice";
Group6.children[12] = ROUTE213;

Transform Transform214 = createNode("Transform");
Transform214.translation = new SFVec3f(new float[48,51.39999999999999,0]);
TouchSensor TouchSensor215 = createNode("TouchSensor");
TouchSensor215.description = "TSJinChinRaiser";
TouchSensor215.DEF = "JinChinRaiser_Sensor";
Transform214.children = new MFNode();

Transform214.children[0] = TouchSensor215;

Shape Shape216 = createNode("Shape");
Appearance Appearance217 = createNode("Appearance");
Material Material218 = createNode("Material");
Material218.diffuseColor = new SFColor(new float[1,1,1]);
Appearance217.material = Material218;

Shape216.appearance = Appearance217;

Text Text219 = createNode("Text");
Text219.string = new MFString(new java.lang.String["JinChinRaiser"]);
FontStyle FontStyle220 = createNode("FontStyle");
FontStyle220.size = 2.4;
FontStyle220.spacing = 1.2;
FontStyle220.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text219.fontStyle = FontStyle220;

Shape216.geometry = Text219;

Transform214.child[1] = Shape216;

Shape Shape221 = createNode("Shape");
Appearance Appearance222 = createNode("Appearance");
Material Material223 = createNode("Material");
Material223.diffuseColor = new SFColor(new float[0,0,1]);
Appearance222.material = Material223;

Shape221.appearance = Appearance222;

IndexedFaceSet IndexedFaceSet224 = createNode("IndexedFaceSet");
IndexedFaceSet224.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate225 = createNode("Coordinate");
Coordinate225.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet224.coord = Coordinate225;

Shape221.geometry = IndexedFaceSet224;

Transform214.child[2] = Shape221;

Group6.children[13] = Transform214;

ROUTE ROUTE226 = createNode("ROUTE");
ROUTE226.fromNode = "JinChinRaiser_Sensor";
ROUTE226.fromField = "touchTime";
ROUTE226.toNode = "Choice4";
ROUTE226.toField = "touchTime";
Group6.children[14] = ROUTE226;

ROUTE ROUTE227 = createNode("ROUTE");
ROUTE227.fromNode = "Choice4";
ROUTE227.fromField = "choice";
ROUTE227.toNode = "SceneSwitcher";
ROUTE227.toField = "whichChoice";
Group6.children[15] = ROUTE227;

Transform Transform228 = createNode("Transform");
Transform228.translation = new SFVec3f(new float[48,48.39999999999999,0]);
TouchSensor TouchSensor229 = createNode("TouchSensor");
TouchSensor229.description = "TSJinDimpler";
TouchSensor229.DEF = "JinDimpler_Sensor";
Transform228.children = new MFNode();

Transform228.children[0] = TouchSensor229;

Shape Shape230 = createNode("Shape");
Appearance Appearance231 = createNode("Appearance");
Material Material232 = createNode("Material");
Material232.diffuseColor = new SFColor(new float[1,1,1]);
Appearance231.material = Material232;

Shape230.appearance = Appearance231;

Text Text233 = createNode("Text");
Text233.string = new MFString(new java.lang.String["JinDimpler"]);
FontStyle FontStyle234 = createNode("FontStyle");
FontStyle234.size = 2.4;
FontStyle234.spacing = 1.2;
FontStyle234.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text233.fontStyle = FontStyle234;

Shape230.geometry = Text233;

Transform228.child[1] = Shape230;

Shape Shape235 = createNode("Shape");
Appearance Appearance236 = createNode("Appearance");
Material Material237 = createNode("Material");
Material237.diffuseColor = new SFColor(new float[0,0,1]);
Appearance236.material = Material237;

Shape235.appearance = Appearance236;

IndexedFaceSet IndexedFaceSet238 = createNode("IndexedFaceSet");
IndexedFaceSet238.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate239 = createNode("Coordinate");
Coordinate239.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet238.coord = Coordinate239;

Shape235.geometry = IndexedFaceSet238;

Transform228.child[2] = Shape235;

Group6.children[16] = Transform228;

ROUTE ROUTE240 = createNode("ROUTE");
ROUTE240.fromNode = "JinDimpler_Sensor";
ROUTE240.fromField = "touchTime";
ROUTE240.toNode = "Choice5";
ROUTE240.toField = "touchTime";
Group6.children[17] = ROUTE240;

ROUTE ROUTE241 = createNode("ROUTE");
ROUTE241.fromNode = "Choice5";
ROUTE241.fromField = "choice";
ROUTE241.toNode = "SceneSwitcher";
ROUTE241.toField = "whichChoice";
Group6.children[18] = ROUTE241;

Transform Transform242 = createNode("Transform");
Transform242.translation = new SFVec3f(new float[48,45.39999999999999,0]);
TouchSensor TouchSensor243 = createNode("TouchSensor");
TouchSensor243.description = "TSJinEyesClosed";
TouchSensor243.DEF = "JinEyesClosed_Sensor";
Transform242.children = new MFNode();

Transform242.children[0] = TouchSensor243;

Shape Shape244 = createNode("Shape");
Appearance Appearance245 = createNode("Appearance");
Material Material246 = createNode("Material");
Material246.diffuseColor = new SFColor(new float[1,1,1]);
Appearance245.material = Material246;

Shape244.appearance = Appearance245;

Text Text247 = createNode("Text");
Text247.string = new MFString(new java.lang.String["JinEyesClosed"]);
FontStyle FontStyle248 = createNode("FontStyle");
FontStyle248.size = 2.4;
FontStyle248.spacing = 1.2;
FontStyle248.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text247.fontStyle = FontStyle248;

Shape244.geometry = Text247;

Transform242.child[1] = Shape244;

Shape Shape249 = createNode("Shape");
Appearance Appearance250 = createNode("Appearance");
Material Material251 = createNode("Material");
Material251.diffuseColor = new SFColor(new float[0,0,1]);
Appearance250.material = Material251;

Shape249.appearance = Appearance250;

IndexedFaceSet IndexedFaceSet252 = createNode("IndexedFaceSet");
IndexedFaceSet252.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate253 = createNode("Coordinate");
Coordinate253.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet252.coord = Coordinate253;

Shape249.geometry = IndexedFaceSet252;

Transform242.child[2] = Shape249;

Group6.children[19] = Transform242;

ROUTE ROUTE254 = createNode("ROUTE");
ROUTE254.fromNode = "JinEyesClosed_Sensor";
ROUTE254.fromField = "touchTime";
ROUTE254.toNode = "Choice6";
ROUTE254.toField = "touchTime";
Group6.children[20] = ROUTE254;

ROUTE ROUTE255 = createNode("ROUTE");
ROUTE255.fromNode = "Choice6";
ROUTE255.fromField = "choice";
ROUTE255.toNode = "SceneSwitcher";
ROUTE255.toField = "whichChoice";
Group6.children[21] = ROUTE255;

Transform Transform256 = createNode("Transform");
Transform256.translation = new SFVec3f(new float[48,42.39999999999999,0]);
TouchSensor TouchSensor257 = createNode("TouchSensor");
TouchSensor257.description = "TSJinInnerBrowRaiser";
TouchSensor257.DEF = "JinInnerBrowRaiser_Sensor";
Transform256.children = new MFNode();

Transform256.children[0] = TouchSensor257;

Shape Shape258 = createNode("Shape");
Appearance Appearance259 = createNode("Appearance");
Material Material260 = createNode("Material");
Material260.diffuseColor = new SFColor(new float[1,1,1]);
Appearance259.material = Material260;

Shape258.appearance = Appearance259;

Text Text261 = createNode("Text");
Text261.string = new MFString(new java.lang.String["JinInnerBrowRaiser"]);
FontStyle FontStyle262 = createNode("FontStyle");
FontStyle262.size = 2.4;
FontStyle262.spacing = 1.2;
FontStyle262.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text261.fontStyle = FontStyle262;

Shape258.geometry = Text261;

Transform256.child[1] = Shape258;

Shape Shape263 = createNode("Shape");
Appearance Appearance264 = createNode("Appearance");
Material Material265 = createNode("Material");
Material265.diffuseColor = new SFColor(new float[0,0,1]);
Appearance264.material = Material265;

Shape263.appearance = Appearance264;

IndexedFaceSet IndexedFaceSet266 = createNode("IndexedFaceSet");
IndexedFaceSet266.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate267 = createNode("Coordinate");
Coordinate267.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet266.coord = Coordinate267;

Shape263.geometry = IndexedFaceSet266;

Transform256.child[2] = Shape263;

Group6.children[22] = Transform256;

ROUTE ROUTE268 = createNode("ROUTE");
ROUTE268.fromNode = "JinInnerBrowRaiser_Sensor";
ROUTE268.fromField = "touchTime";
ROUTE268.toNode = "Choice7";
ROUTE268.toField = "touchTime";
Group6.children[23] = ROUTE268;

ROUTE ROUTE269 = createNode("ROUTE");
ROUTE269.fromNode = "Choice7";
ROUTE269.fromField = "choice";
ROUTE269.toNode = "SceneSwitcher";
ROUTE269.toField = "whichChoice";
Group6.children[24] = ROUTE269;

Transform Transform270 = createNode("Transform");
Transform270.translation = new SFVec3f(new float[48,39.39999999999999,0]);
TouchSensor TouchSensor271 = createNode("TouchSensor");
TouchSensor271.description = "TSJinJawDrop";
TouchSensor271.DEF = "JinJawDrop_Sensor";
Transform270.children = new MFNode();

Transform270.children[0] = TouchSensor271;

Shape Shape272 = createNode("Shape");
Appearance Appearance273 = createNode("Appearance");
Material Material274 = createNode("Material");
Material274.diffuseColor = new SFColor(new float[1,1,1]);
Appearance273.material = Material274;

Shape272.appearance = Appearance273;

Text Text275 = createNode("Text");
Text275.string = new MFString(new java.lang.String["JinJawDrop"]);
FontStyle FontStyle276 = createNode("FontStyle");
FontStyle276.size = 2.4;
FontStyle276.spacing = 1.2;
FontStyle276.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text275.fontStyle = FontStyle276;

Shape272.geometry = Text275;

Transform270.child[1] = Shape272;

Shape Shape277 = createNode("Shape");
Appearance Appearance278 = createNode("Appearance");
Material Material279 = createNode("Material");
Material279.diffuseColor = new SFColor(new float[0,0,1]);
Appearance278.material = Material279;

Shape277.appearance = Appearance278;

IndexedFaceSet IndexedFaceSet280 = createNode("IndexedFaceSet");
IndexedFaceSet280.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate281 = createNode("Coordinate");
Coordinate281.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet280.coord = Coordinate281;

Shape277.geometry = IndexedFaceSet280;

Transform270.child[2] = Shape277;

Group6.children[25] = Transform270;

ROUTE ROUTE282 = createNode("ROUTE");
ROUTE282.fromNode = "JinJawDrop_Sensor";
ROUTE282.fromField = "touchTime";
ROUTE282.toNode = "Choice8";
ROUTE282.toField = "touchTime";
Group6.children[26] = ROUTE282;

ROUTE ROUTE283 = createNode("ROUTE");
ROUTE283.fromNode = "Choice8";
ROUTE283.fromField = "choice";
ROUTE283.toNode = "SceneSwitcher";
ROUTE283.toField = "whichChoice";
Group6.children[27] = ROUTE283;

Transform Transform284 = createNode("Transform");
Transform284.translation = new SFVec3f(new float[48,36.39999999999999,0]);
TouchSensor TouchSensor285 = createNode("TouchSensor");
TouchSensor285.description = "TSJinLidDroop";
TouchSensor285.DEF = "JinLidDroop_Sensor";
Transform284.children = new MFNode();

Transform284.children[0] = TouchSensor285;

Shape Shape286 = createNode("Shape");
Appearance Appearance287 = createNode("Appearance");
Material Material288 = createNode("Material");
Material288.diffuseColor = new SFColor(new float[1,1,1]);
Appearance287.material = Material288;

Shape286.appearance = Appearance287;

Text Text289 = createNode("Text");
Text289.string = new MFString(new java.lang.String["JinLidDroop"]);
FontStyle FontStyle290 = createNode("FontStyle");
FontStyle290.size = 2.4;
FontStyle290.spacing = 1.2;
FontStyle290.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text289.fontStyle = FontStyle290;

Shape286.geometry = Text289;

Transform284.child[1] = Shape286;

Shape Shape291 = createNode("Shape");
Appearance Appearance292 = createNode("Appearance");
Material Material293 = createNode("Material");
Material293.diffuseColor = new SFColor(new float[0,0,1]);
Appearance292.material = Material293;

Shape291.appearance = Appearance292;

IndexedFaceSet IndexedFaceSet294 = createNode("IndexedFaceSet");
IndexedFaceSet294.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate295 = createNode("Coordinate");
Coordinate295.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet294.coord = Coordinate295;

Shape291.geometry = IndexedFaceSet294;

Transform284.child[2] = Shape291;

Group6.children[28] = Transform284;

ROUTE ROUTE296 = createNode("ROUTE");
ROUTE296.fromNode = "JinLidDroop_Sensor";
ROUTE296.fromField = "touchTime";
ROUTE296.toNode = "Choice9";
ROUTE296.toField = "touchTime";
Group6.children[29] = ROUTE296;

ROUTE ROUTE297 = createNode("ROUTE");
ROUTE297.fromNode = "Choice9";
ROUTE297.fromField = "choice";
ROUTE297.toNode = "SceneSwitcher";
ROUTE297.toField = "whichChoice";
Group6.children[30] = ROUTE297;

Transform Transform298 = createNode("Transform");
Transform298.translation = new SFVec3f(new float[48,33.39999999999999,0]);
TouchSensor TouchSensor299 = createNode("TouchSensor");
TouchSensor299.description = "TSJinLidTightener";
TouchSensor299.DEF = "JinLidTightener_Sensor";
Transform298.children = new MFNode();

Transform298.children[0] = TouchSensor299;

Shape Shape300 = createNode("Shape");
Appearance Appearance301 = createNode("Appearance");
Material Material302 = createNode("Material");
Material302.diffuseColor = new SFColor(new float[1,1,1]);
Appearance301.material = Material302;

Shape300.appearance = Appearance301;

Text Text303 = createNode("Text");
Text303.string = new MFString(new java.lang.String["JinLidTightener"]);
FontStyle FontStyle304 = createNode("FontStyle");
FontStyle304.size = 2.4;
FontStyle304.spacing = 1.2;
FontStyle304.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text303.fontStyle = FontStyle304;

Shape300.geometry = Text303;

Transform298.child[1] = Shape300;

Shape Shape305 = createNode("Shape");
Appearance Appearance306 = createNode("Appearance");
Material Material307 = createNode("Material");
Material307.diffuseColor = new SFColor(new float[0,0,1]);
Appearance306.material = Material307;

Shape305.appearance = Appearance306;

IndexedFaceSet IndexedFaceSet308 = createNode("IndexedFaceSet");
IndexedFaceSet308.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate309 = createNode("Coordinate");
Coordinate309.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet308.coord = Coordinate309;

Shape305.geometry = IndexedFaceSet308;

Transform298.child[2] = Shape305;

Group6.children[31] = Transform298;

ROUTE ROUTE310 = createNode("ROUTE");
ROUTE310.fromNode = "JinLidTightener_Sensor";
ROUTE310.fromField = "touchTime";
ROUTE310.toNode = "Choice10";
ROUTE310.toField = "touchTime";
Group6.children[32] = ROUTE310;

ROUTE ROUTE311 = createNode("ROUTE");
ROUTE311.fromNode = "Choice10";
ROUTE311.fromField = "choice";
ROUTE311.toNode = "SceneSwitcher";
ROUTE311.toField = "whichChoice";
Group6.children[33] = ROUTE311;

Transform Transform312 = createNode("Transform");
Transform312.translation = new SFVec3f(new float[48,30.399999999999995,0]);
TouchSensor TouchSensor313 = createNode("TouchSensor");
TouchSensor313.description = "TSJinLipCornerDepressor";
TouchSensor313.DEF = "JinLipCornerDepressor_Sensor";
Transform312.children = new MFNode();

Transform312.children[0] = TouchSensor313;

Shape Shape314 = createNode("Shape");
Appearance Appearance315 = createNode("Appearance");
Material Material316 = createNode("Material");
Material316.diffuseColor = new SFColor(new float[1,1,1]);
Appearance315.material = Material316;

Shape314.appearance = Appearance315;

Text Text317 = createNode("Text");
Text317.string = new MFString(new java.lang.String["JinLipCornerDepressor"]);
FontStyle FontStyle318 = createNode("FontStyle");
FontStyle318.size = 2.4;
FontStyle318.spacing = 1.2;
FontStyle318.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text317.fontStyle = FontStyle318;

Shape314.geometry = Text317;

Transform312.child[1] = Shape314;

Shape Shape319 = createNode("Shape");
Appearance Appearance320 = createNode("Appearance");
Material Material321 = createNode("Material");
Material321.diffuseColor = new SFColor(new float[0,0,1]);
Appearance320.material = Material321;

Shape319.appearance = Appearance320;

IndexedFaceSet IndexedFaceSet322 = createNode("IndexedFaceSet");
IndexedFaceSet322.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate323 = createNode("Coordinate");
Coordinate323.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet322.coord = Coordinate323;

Shape319.geometry = IndexedFaceSet322;

Transform312.child[2] = Shape319;

Group6.children[34] = Transform312;

ROUTE ROUTE324 = createNode("ROUTE");
ROUTE324.fromNode = "JinLipCornerDepressor_Sensor";
ROUTE324.fromField = "touchTime";
ROUTE324.toNode = "Choice11";
ROUTE324.toField = "touchTime";
Group6.children[35] = ROUTE324;

ROUTE ROUTE325 = createNode("ROUTE");
ROUTE325.fromNode = "Choice11";
ROUTE325.fromField = "choice";
ROUTE325.toNode = "SceneSwitcher";
ROUTE325.toField = "whichChoice";
Group6.children[36] = ROUTE325;

Transform Transform326 = createNode("Transform");
Transform326.translation = new SFVec3f(new float[48,27.399999999999995,0]);
TouchSensor TouchSensor327 = createNode("TouchSensor");
TouchSensor327.description = "TSJinLipCornerPuller";
TouchSensor327.DEF = "JinLipCornerPuller_Sensor";
Transform326.children = new MFNode();

Transform326.children[0] = TouchSensor327;

Shape Shape328 = createNode("Shape");
Appearance Appearance329 = createNode("Appearance");
Material Material330 = createNode("Material");
Material330.diffuseColor = new SFColor(new float[1,1,1]);
Appearance329.material = Material330;

Shape328.appearance = Appearance329;

Text Text331 = createNode("Text");
Text331.string = new MFString(new java.lang.String["JinLipCornerPuller"]);
FontStyle FontStyle332 = createNode("FontStyle");
FontStyle332.size = 2.4;
FontStyle332.spacing = 1.2;
FontStyle332.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text331.fontStyle = FontStyle332;

Shape328.geometry = Text331;

Transform326.child[1] = Shape328;

Shape Shape333 = createNode("Shape");
Appearance Appearance334 = createNode("Appearance");
Material Material335 = createNode("Material");
Material335.diffuseColor = new SFColor(new float[0,0,1]);
Appearance334.material = Material335;

Shape333.appearance = Appearance334;

IndexedFaceSet IndexedFaceSet336 = createNode("IndexedFaceSet");
IndexedFaceSet336.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate337 = createNode("Coordinate");
Coordinate337.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet336.coord = Coordinate337;

Shape333.geometry = IndexedFaceSet336;

Transform326.child[2] = Shape333;

Group6.children[37] = Transform326;

ROUTE ROUTE338 = createNode("ROUTE");
ROUTE338.fromNode = "JinLipCornerPuller_Sensor";
ROUTE338.fromField = "touchTime";
ROUTE338.toNode = "Choice12";
ROUTE338.toField = "touchTime";
Group6.children[38] = ROUTE338;

ROUTE ROUTE339 = createNode("ROUTE");
ROUTE339.fromNode = "Choice12";
ROUTE339.fromField = "choice";
ROUTE339.toNode = "SceneSwitcher";
ROUTE339.toField = "whichChoice";
Group6.children[39] = ROUTE339;

Transform Transform340 = createNode("Transform");
Transform340.translation = new SFVec3f(new float[48,24.399999999999995,0]);
TouchSensor TouchSensor341 = createNode("TouchSensor");
TouchSensor341.description = "TSJinLipFunneler";
TouchSensor341.DEF = "JinLipFunneler_Sensor";
Transform340.children = new MFNode();

Transform340.children[0] = TouchSensor341;

Shape Shape342 = createNode("Shape");
Appearance Appearance343 = createNode("Appearance");
Material Material344 = createNode("Material");
Material344.diffuseColor = new SFColor(new float[1,1,1]);
Appearance343.material = Material344;

Shape342.appearance = Appearance343;

Text Text345 = createNode("Text");
Text345.string = new MFString(new java.lang.String["JinLipFunneler"]);
FontStyle FontStyle346 = createNode("FontStyle");
FontStyle346.size = 2.4;
FontStyle346.spacing = 1.2;
FontStyle346.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text345.fontStyle = FontStyle346;

Shape342.geometry = Text345;

Transform340.child[1] = Shape342;

Shape Shape347 = createNode("Shape");
Appearance Appearance348 = createNode("Appearance");
Material Material349 = createNode("Material");
Material349.diffuseColor = new SFColor(new float[0,0,1]);
Appearance348.material = Material349;

Shape347.appearance = Appearance348;

IndexedFaceSet IndexedFaceSet350 = createNode("IndexedFaceSet");
IndexedFaceSet350.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate351 = createNode("Coordinate");
Coordinate351.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet350.coord = Coordinate351;

Shape347.geometry = IndexedFaceSet350;

Transform340.child[2] = Shape347;

Group6.children[40] = Transform340;

ROUTE ROUTE352 = createNode("ROUTE");
ROUTE352.fromNode = "JinLipFunneler_Sensor";
ROUTE352.fromField = "touchTime";
ROUTE352.toNode = "Choice13";
ROUTE352.toField = "touchTime";
Group6.children[41] = ROUTE352;

ROUTE ROUTE353 = createNode("ROUTE");
ROUTE353.fromNode = "Choice13";
ROUTE353.fromField = "choice";
ROUTE353.toNode = "SceneSwitcher";
ROUTE353.toField = "whichChoice";
Group6.children[42] = ROUTE353;

Transform Transform354 = createNode("Transform");
Transform354.translation = new SFVec3f(new float[48,21.399999999999995,0]);
TouchSensor TouchSensor355 = createNode("TouchSensor");
TouchSensor355.description = "TSJinLipPressor";
TouchSensor355.DEF = "JinLipPressor_Sensor";
Transform354.children = new MFNode();

Transform354.children[0] = TouchSensor355;

Shape Shape356 = createNode("Shape");
Appearance Appearance357 = createNode("Appearance");
Material Material358 = createNode("Material");
Material358.diffuseColor = new SFColor(new float[1,1,1]);
Appearance357.material = Material358;

Shape356.appearance = Appearance357;

Text Text359 = createNode("Text");
Text359.string = new MFString(new java.lang.String["JinLipPressor"]);
FontStyle FontStyle360 = createNode("FontStyle");
FontStyle360.size = 2.4;
FontStyle360.spacing = 1.2;
FontStyle360.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text359.fontStyle = FontStyle360;

Shape356.geometry = Text359;

Transform354.child[1] = Shape356;

Shape Shape361 = createNode("Shape");
Appearance Appearance362 = createNode("Appearance");
Material Material363 = createNode("Material");
Material363.diffuseColor = new SFColor(new float[0,0,1]);
Appearance362.material = Material363;

Shape361.appearance = Appearance362;

IndexedFaceSet IndexedFaceSet364 = createNode("IndexedFaceSet");
IndexedFaceSet364.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate365 = createNode("Coordinate");
Coordinate365.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet364.coord = Coordinate365;

Shape361.geometry = IndexedFaceSet364;

Transform354.child[2] = Shape361;

Group6.children[43] = Transform354;

ROUTE ROUTE366 = createNode("ROUTE");
ROUTE366.fromNode = "JinLipPressor_Sensor";
ROUTE366.fromField = "touchTime";
ROUTE366.toNode = "Choice14";
ROUTE366.toField = "touchTime";
Group6.children[44] = ROUTE366;

ROUTE ROUTE367 = createNode("ROUTE");
ROUTE367.fromNode = "Choice14";
ROUTE367.fromField = "choice";
ROUTE367.toNode = "SceneSwitcher";
ROUTE367.toField = "whichChoice";
Group6.children[45] = ROUTE367;

Transform Transform368 = createNode("Transform");
Transform368.translation = new SFVec3f(new float[48,18.4,0]);
TouchSensor TouchSensor369 = createNode("TouchSensor");
TouchSensor369.description = "TSJinLipPuckerer";
TouchSensor369.DEF = "JinLipPuckerer_Sensor";
Transform368.children = new MFNode();

Transform368.children[0] = TouchSensor369;

Shape Shape370 = createNode("Shape");
Appearance Appearance371 = createNode("Appearance");
Material Material372 = createNode("Material");
Material372.diffuseColor = new SFColor(new float[1,1,1]);
Appearance371.material = Material372;

Shape370.appearance = Appearance371;

Text Text373 = createNode("Text");
Text373.string = new MFString(new java.lang.String["JinLipPuckerer"]);
FontStyle FontStyle374 = createNode("FontStyle");
FontStyle374.size = 2.4;
FontStyle374.spacing = 1.2;
FontStyle374.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text373.fontStyle = FontStyle374;

Shape370.geometry = Text373;

Transform368.child[1] = Shape370;

Shape Shape375 = createNode("Shape");
Appearance Appearance376 = createNode("Appearance");
Material Material377 = createNode("Material");
Material377.diffuseColor = new SFColor(new float[0,0,1]);
Appearance376.material = Material377;

Shape375.appearance = Appearance376;

IndexedFaceSet IndexedFaceSet378 = createNode("IndexedFaceSet");
IndexedFaceSet378.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate379 = createNode("Coordinate");
Coordinate379.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet378.coord = Coordinate379;

Shape375.geometry = IndexedFaceSet378;

Transform368.child[2] = Shape375;

Group6.children[46] = Transform368;

ROUTE ROUTE380 = createNode("ROUTE");
ROUTE380.fromNode = "JinLipPuckerer_Sensor";
ROUTE380.fromField = "touchTime";
ROUTE380.toNode = "Choice15";
ROUTE380.toField = "touchTime";
Group6.children[47] = ROUTE380;

ROUTE ROUTE381 = createNode("ROUTE");
ROUTE381.fromNode = "Choice15";
ROUTE381.fromField = "choice";
ROUTE381.toNode = "SceneSwitcher";
ROUTE381.toField = "whichChoice";
Group6.children[48] = ROUTE381;

Transform Transform382 = createNode("Transform");
Transform382.translation = new SFVec3f(new float[48,15.399999999999997,0]);
TouchSensor TouchSensor383 = createNode("TouchSensor");
TouchSensor383.description = "TSJinLipsPart";
TouchSensor383.DEF = "JinLipsPart_Sensor";
Transform382.children = new MFNode();

Transform382.children[0] = TouchSensor383;

Shape Shape384 = createNode("Shape");
Appearance Appearance385 = createNode("Appearance");
Material Material386 = createNode("Material");
Material386.diffuseColor = new SFColor(new float[1,1,1]);
Appearance385.material = Material386;

Shape384.appearance = Appearance385;

Text Text387 = createNode("Text");
Text387.string = new MFString(new java.lang.String["JinLipsPart"]);
FontStyle FontStyle388 = createNode("FontStyle");
FontStyle388.size = 2.4;
FontStyle388.spacing = 1.2;
FontStyle388.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text387.fontStyle = FontStyle388;

Shape384.geometry = Text387;

Transform382.child[1] = Shape384;

Shape Shape389 = createNode("Shape");
Appearance Appearance390 = createNode("Appearance");
Material Material391 = createNode("Material");
Material391.diffuseColor = new SFColor(new float[0,0,1]);
Appearance390.material = Material391;

Shape389.appearance = Appearance390;

IndexedFaceSet IndexedFaceSet392 = createNode("IndexedFaceSet");
IndexedFaceSet392.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate393 = createNode("Coordinate");
Coordinate393.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet392.coord = Coordinate393;

Shape389.geometry = IndexedFaceSet392;

Transform382.child[2] = Shape389;

Group6.children[49] = Transform382;

ROUTE ROUTE394 = createNode("ROUTE");
ROUTE394.fromNode = "JinLipsPart_Sensor";
ROUTE394.fromField = "touchTime";
ROUTE394.toNode = "Choice16";
ROUTE394.toField = "touchTime";
Group6.children[50] = ROUTE394;

ROUTE ROUTE395 = createNode("ROUTE");
ROUTE395.fromNode = "Choice16";
ROUTE395.fromField = "choice";
ROUTE395.toNode = "SceneSwitcher";
ROUTE395.toField = "whichChoice";
Group6.children[51] = ROUTE395;

Transform Transform396 = createNode("Transform");
Transform396.translation = new SFVec3f(new float[48,12.399999999999999,0]);
TouchSensor TouchSensor397 = createNode("TouchSensor");
TouchSensor397.description = "TSJinLipStretcher";
TouchSensor397.DEF = "JinLipStretcher_Sensor";
Transform396.children = new MFNode();

Transform396.children[0] = TouchSensor397;

Shape Shape398 = createNode("Shape");
Appearance Appearance399 = createNode("Appearance");
Material Material400 = createNode("Material");
Material400.diffuseColor = new SFColor(new float[1,1,1]);
Appearance399.material = Material400;

Shape398.appearance = Appearance399;

Text Text401 = createNode("Text");
Text401.string = new MFString(new java.lang.String["JinLipStretcher"]);
FontStyle FontStyle402 = createNode("FontStyle");
FontStyle402.size = 2.4;
FontStyle402.spacing = 1.2;
FontStyle402.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text401.fontStyle = FontStyle402;

Shape398.geometry = Text401;

Transform396.child[1] = Shape398;

Shape Shape403 = createNode("Shape");
Appearance Appearance404 = createNode("Appearance");
Material Material405 = createNode("Material");
Material405.diffuseColor = new SFColor(new float[0,0,1]);
Appearance404.material = Material405;

Shape403.appearance = Appearance404;

IndexedFaceSet IndexedFaceSet406 = createNode("IndexedFaceSet");
IndexedFaceSet406.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate407 = createNode("Coordinate");
Coordinate407.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet406.coord = Coordinate407;

Shape403.geometry = IndexedFaceSet406;

Transform396.child[2] = Shape403;

Group6.children[52] = Transform396;

ROUTE ROUTE408 = createNode("ROUTE");
ROUTE408.fromNode = "JinLipStretcher_Sensor";
ROUTE408.fromField = "touchTime";
ROUTE408.toNode = "Choice17";
ROUTE408.toField = "touchTime";
Group6.children[53] = ROUTE408;

ROUTE ROUTE409 = createNode("ROUTE");
ROUTE409.fromNode = "Choice17";
ROUTE409.fromField = "choice";
ROUTE409.toNode = "SceneSwitcher";
ROUTE409.toField = "whichChoice";
Group6.children[54] = ROUTE409;

Transform Transform410 = createNode("Transform");
Transform410.translation = new SFVec3f(new float[48,9.399999999999999,0]);
TouchSensor TouchSensor411 = createNode("TouchSensor");
TouchSensor411.description = "TSJinLipSuck";
TouchSensor411.DEF = "JinLipSuck_Sensor";
Transform410.children = new MFNode();

Transform410.children[0] = TouchSensor411;

Shape Shape412 = createNode("Shape");
Appearance Appearance413 = createNode("Appearance");
Material Material414 = createNode("Material");
Material414.diffuseColor = new SFColor(new float[1,1,1]);
Appearance413.material = Material414;

Shape412.appearance = Appearance413;

Text Text415 = createNode("Text");
Text415.string = new MFString(new java.lang.String["JinLipSuck"]);
FontStyle FontStyle416 = createNode("FontStyle");
FontStyle416.size = 2.4;
FontStyle416.spacing = 1.2;
FontStyle416.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text415.fontStyle = FontStyle416;

Shape412.geometry = Text415;

Transform410.child[1] = Shape412;

Shape Shape417 = createNode("Shape");
Appearance Appearance418 = createNode("Appearance");
Material Material419 = createNode("Material");
Material419.diffuseColor = new SFColor(new float[0,0,1]);
Appearance418.material = Material419;

Shape417.appearance = Appearance418;

IndexedFaceSet IndexedFaceSet420 = createNode("IndexedFaceSet");
IndexedFaceSet420.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate421 = createNode("Coordinate");
Coordinate421.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet420.coord = Coordinate421;

Shape417.geometry = IndexedFaceSet420;

Transform410.child[2] = Shape417;

Group6.children[55] = Transform410;

ROUTE ROUTE422 = createNode("ROUTE");
ROUTE422.fromNode = "JinLipSuck_Sensor";
ROUTE422.fromField = "touchTime";
ROUTE422.toNode = "Choice18";
ROUTE422.toField = "touchTime";
Group6.children[56] = ROUTE422;

ROUTE ROUTE423 = createNode("ROUTE");
ROUTE423.fromNode = "Choice18";
ROUTE423.fromField = "choice";
ROUTE423.toNode = "SceneSwitcher";
ROUTE423.toField = "whichChoice";
Group6.children[57] = ROUTE423;

Transform Transform424 = createNode("Transform");
Transform424.translation = new SFVec3f(new float[48,6.399999999999999,0]);
TouchSensor TouchSensor425 = createNode("TouchSensor");
TouchSensor425.description = "TSJinLipTightener";
TouchSensor425.DEF = "JinLipTightener_Sensor";
Transform424.children = new MFNode();

Transform424.children[0] = TouchSensor425;

Shape Shape426 = createNode("Shape");
Appearance Appearance427 = createNode("Appearance");
Material Material428 = createNode("Material");
Material428.diffuseColor = new SFColor(new float[1,1,1]);
Appearance427.material = Material428;

Shape426.appearance = Appearance427;

Text Text429 = createNode("Text");
Text429.string = new MFString(new java.lang.String["JinLipTightener"]);
FontStyle FontStyle430 = createNode("FontStyle");
FontStyle430.size = 2.4;
FontStyle430.spacing = 1.2;
FontStyle430.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text429.fontStyle = FontStyle430;

Shape426.geometry = Text429;

Transform424.child[1] = Shape426;

Shape Shape431 = createNode("Shape");
Appearance Appearance432 = createNode("Appearance");
Material Material433 = createNode("Material");
Material433.diffuseColor = new SFColor(new float[0,0,1]);
Appearance432.material = Material433;

Shape431.appearance = Appearance432;

IndexedFaceSet IndexedFaceSet434 = createNode("IndexedFaceSet");
IndexedFaceSet434.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate435 = createNode("Coordinate");
Coordinate435.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet434.coord = Coordinate435;

Shape431.geometry = IndexedFaceSet434;

Transform424.child[2] = Shape431;

Group6.children[58] = Transform424;

ROUTE ROUTE436 = createNode("ROUTE");
ROUTE436.fromNode = "JinLipTightener_Sensor";
ROUTE436.fromField = "touchTime";
ROUTE436.toNode = "Choice19";
ROUTE436.toField = "touchTime";
Group6.children[59] = ROUTE436;

ROUTE ROUTE437 = createNode("ROUTE");
ROUTE437.fromNode = "Choice19";
ROUTE437.fromField = "choice";
ROUTE437.toNode = "SceneSwitcher";
ROUTE437.toField = "whichChoice";
Group6.children[60] = ROUTE437;

Transform Transform438 = createNode("Transform");
Transform438.translation = new SFVec3f(new float[48,3.399999999999995,0]);
TouchSensor TouchSensor439 = createNode("TouchSensor");
TouchSensor439.description = "TSJinLowerLipDepressor";
TouchSensor439.DEF = "JinLowerLipDepressor_Sensor";
Transform438.children = new MFNode();

Transform438.children[0] = TouchSensor439;

Shape Shape440 = createNode("Shape");
Appearance Appearance441 = createNode("Appearance");
Material Material442 = createNode("Material");
Material442.diffuseColor = new SFColor(new float[1,1,1]);
Appearance441.material = Material442;

Shape440.appearance = Appearance441;

Text Text443 = createNode("Text");
Text443.string = new MFString(new java.lang.String["JinLowerLipDepressor"]);
FontStyle FontStyle444 = createNode("FontStyle");
FontStyle444.size = 2.4;
FontStyle444.spacing = 1.2;
FontStyle444.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text443.fontStyle = FontStyle444;

Shape440.geometry = Text443;

Transform438.child[1] = Shape440;

Shape Shape445 = createNode("Shape");
Appearance Appearance446 = createNode("Appearance");
Material Material447 = createNode("Material");
Material447.diffuseColor = new SFColor(new float[0,0,1]);
Appearance446.material = Material447;

Shape445.appearance = Appearance446;

IndexedFaceSet IndexedFaceSet448 = createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate449 = createNode("Coordinate");
Coordinate449.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet448.coord = Coordinate449;

Shape445.geometry = IndexedFaceSet448;

Transform438.child[2] = Shape445;

Group6.children[61] = Transform438;

ROUTE ROUTE450 = createNode("ROUTE");
ROUTE450.fromNode = "JinLowerLipDepressor_Sensor";
ROUTE450.fromField = "touchTime";
ROUTE450.toNode = "Choice20";
ROUTE450.toField = "touchTime";
Group6.children[62] = ROUTE450;

ROUTE ROUTE451 = createNode("ROUTE");
ROUTE451.fromNode = "Choice20";
ROUTE451.fromField = "choice";
ROUTE451.toNode = "SceneSwitcher";
ROUTE451.toField = "whichChoice";
Group6.children[63] = ROUTE451;

Transform Transform452 = createNode("Transform");
Transform452.translation = new SFVec3f(new float[48,0.399999999999995,0]);
TouchSensor TouchSensor453 = createNode("TouchSensor");
TouchSensor453.description = "TSJinMouthStretch";
TouchSensor453.DEF = "JinMouthStretch_Sensor";
Transform452.children = new MFNode();

Transform452.children[0] = TouchSensor453;

Shape Shape454 = createNode("Shape");
Appearance Appearance455 = createNode("Appearance");
Material Material456 = createNode("Material");
Material456.diffuseColor = new SFColor(new float[1,1,1]);
Appearance455.material = Material456;

Shape454.appearance = Appearance455;

Text Text457 = createNode("Text");
Text457.string = new MFString(new java.lang.String["JinMouthStretch"]);
FontStyle FontStyle458 = createNode("FontStyle");
FontStyle458.size = 2.4;
FontStyle458.spacing = 1.2;
FontStyle458.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text457.fontStyle = FontStyle458;

Shape454.geometry = Text457;

Transform452.child[1] = Shape454;

Shape Shape459 = createNode("Shape");
Appearance Appearance460 = createNode("Appearance");
Material Material461 = createNode("Material");
Material461.diffuseColor = new SFColor(new float[0,0,1]);
Appearance460.material = Material461;

Shape459.appearance = Appearance460;

IndexedFaceSet IndexedFaceSet462 = createNode("IndexedFaceSet");
IndexedFaceSet462.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate463 = createNode("Coordinate");
Coordinate463.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet462.coord = Coordinate463;

Shape459.geometry = IndexedFaceSet462;

Transform452.child[2] = Shape459;

Group6.children[64] = Transform452;

ROUTE ROUTE464 = createNode("ROUTE");
ROUTE464.fromNode = "JinMouthStretch_Sensor";
ROUTE464.fromField = "touchTime";
ROUTE464.toNode = "Choice21";
ROUTE464.toField = "touchTime";
Group6.children[65] = ROUTE464;

ROUTE ROUTE465 = createNode("ROUTE");
ROUTE465.fromNode = "Choice21";
ROUTE465.fromField = "choice";
ROUTE465.toNode = "SceneSwitcher";
ROUTE465.toField = "whichChoice";
Group6.children[66] = ROUTE465;

Transform Transform466 = createNode("Transform");
Transform466.translation = new SFVec3f(new float[48,-2.6000000000000085,0]);
TouchSensor TouchSensor467 = createNode("TouchSensor");
TouchSensor467.description = "TSJinNasolabialDeepener";
TouchSensor467.DEF = "JinNasolabialDeepener_Sensor";
Transform466.children = new MFNode();

Transform466.children[0] = TouchSensor467;

Shape Shape468 = createNode("Shape");
Appearance Appearance469 = createNode("Appearance");
Material Material470 = createNode("Material");
Material470.diffuseColor = new SFColor(new float[1,1,1]);
Appearance469.material = Material470;

Shape468.appearance = Appearance469;

Text Text471 = createNode("Text");
Text471.string = new MFString(new java.lang.String["JinNasolabialDeepener"]);
FontStyle FontStyle472 = createNode("FontStyle");
FontStyle472.size = 2.4;
FontStyle472.spacing = 1.2;
FontStyle472.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text471.fontStyle = FontStyle472;

Shape468.geometry = Text471;

Transform466.child[1] = Shape468;

Shape Shape473 = createNode("Shape");
Appearance Appearance474 = createNode("Appearance");
Material Material475 = createNode("Material");
Material475.diffuseColor = new SFColor(new float[0,0,1]);
Appearance474.material = Material475;

Shape473.appearance = Appearance474;

IndexedFaceSet IndexedFaceSet476 = createNode("IndexedFaceSet");
IndexedFaceSet476.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate477 = createNode("Coordinate");
Coordinate477.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet476.coord = Coordinate477;

Shape473.geometry = IndexedFaceSet476;

Transform466.child[2] = Shape473;

Group6.children[67] = Transform466;

ROUTE ROUTE478 = createNode("ROUTE");
ROUTE478.fromNode = "JinNasolabialDeepener_Sensor";
ROUTE478.fromField = "touchTime";
ROUTE478.toNode = "Choice22";
ROUTE478.toField = "touchTime";
Group6.children[68] = ROUTE478;

ROUTE ROUTE479 = createNode("ROUTE");
ROUTE479.fromNode = "Choice22";
ROUTE479.fromField = "choice";
ROUTE479.toNode = "SceneSwitcher";
ROUTE479.toField = "whichChoice";
Group6.children[69] = ROUTE479;

Transform Transform480 = createNode("Transform");
Transform480.translation = new SFVec3f(new float[48,-5.6000000000000085,0]);
TouchSensor TouchSensor481 = createNode("TouchSensor");
TouchSensor481.description = "TSJinNoseWrinkler";
TouchSensor481.DEF = "JinNoseWrinkler_Sensor";
Transform480.children = new MFNode();

Transform480.children[0] = TouchSensor481;

Shape Shape482 = createNode("Shape");
Appearance Appearance483 = createNode("Appearance");
Material Material484 = createNode("Material");
Material484.diffuseColor = new SFColor(new float[1,1,1]);
Appearance483.material = Material484;

Shape482.appearance = Appearance483;

Text Text485 = createNode("Text");
Text485.string = new MFString(new java.lang.String["JinNoseWrinkler"]);
FontStyle FontStyle486 = createNode("FontStyle");
FontStyle486.size = 2.4;
FontStyle486.spacing = 1.2;
FontStyle486.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text485.fontStyle = FontStyle486;

Shape482.geometry = Text485;

Transform480.child[1] = Shape482;

Shape Shape487 = createNode("Shape");
Appearance Appearance488 = createNode("Appearance");
Material Material489 = createNode("Material");
Material489.diffuseColor = new SFColor(new float[0,0,1]);
Appearance488.material = Material489;

Shape487.appearance = Appearance488;

IndexedFaceSet IndexedFaceSet490 = createNode("IndexedFaceSet");
IndexedFaceSet490.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate491 = createNode("Coordinate");
Coordinate491.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet490.coord = Coordinate491;

Shape487.geometry = IndexedFaceSet490;

Transform480.child[2] = Shape487;

Group6.children[70] = Transform480;

ROUTE ROUTE492 = createNode("ROUTE");
ROUTE492.fromNode = "JinNoseWrinkler_Sensor";
ROUTE492.fromField = "touchTime";
ROUTE492.toNode = "Choice23";
ROUTE492.toField = "touchTime";
Group6.children[71] = ROUTE492;

ROUTE ROUTE493 = createNode("ROUTE");
ROUTE493.fromNode = "Choice23";
ROUTE493.fromField = "choice";
ROUTE493.toNode = "SceneSwitcher";
ROUTE493.toField = "whichChoice";
Group6.children[72] = ROUTE493;

Transform Transform494 = createNode("Transform");
Transform494.translation = new SFVec3f(new float[48,-8.600000000000009,0]);
TouchSensor TouchSensor495 = createNode("TouchSensor");
TouchSensor495.description = "TSJinOuterBrowRaiser";
TouchSensor495.DEF = "JinOuterBrowRaiser_Sensor";
Transform494.children = new MFNode();

Transform494.children[0] = TouchSensor495;

Shape Shape496 = createNode("Shape");
Appearance Appearance497 = createNode("Appearance");
Material Material498 = createNode("Material");
Material498.diffuseColor = new SFColor(new float[1,1,1]);
Appearance497.material = Material498;

Shape496.appearance = Appearance497;

Text Text499 = createNode("Text");
Text499.string = new MFString(new java.lang.String["JinOuterBrowRaiser"]);
FontStyle FontStyle500 = createNode("FontStyle");
FontStyle500.size = 2.4;
FontStyle500.spacing = 1.2;
FontStyle500.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text499.fontStyle = FontStyle500;

Shape496.geometry = Text499;

Transform494.child[1] = Shape496;

Shape Shape501 = createNode("Shape");
Appearance Appearance502 = createNode("Appearance");
Material Material503 = createNode("Material");
Material503.diffuseColor = new SFColor(new float[0,0,1]);
Appearance502.material = Material503;

Shape501.appearance = Appearance502;

IndexedFaceSet IndexedFaceSet504 = createNode("IndexedFaceSet");
IndexedFaceSet504.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate505 = createNode("Coordinate");
Coordinate505.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet504.coord = Coordinate505;

Shape501.geometry = IndexedFaceSet504;

Transform494.child[2] = Shape501;

Group6.children[73] = Transform494;

ROUTE ROUTE506 = createNode("ROUTE");
ROUTE506.fromNode = "JinOuterBrowRaiser_Sensor";
ROUTE506.fromField = "touchTime";
ROUTE506.toNode = "Choice24";
ROUTE506.toField = "touchTime";
Group6.children[74] = ROUTE506;

ROUTE ROUTE507 = createNode("ROUTE");
ROUTE507.fromNode = "Choice24";
ROUTE507.fromField = "choice";
ROUTE507.toNode = "SceneSwitcher";
ROUTE507.toField = "whichChoice";
Group6.children[75] = ROUTE507;

Transform Transform508 = createNode("Transform");
Transform508.translation = new SFVec3f(new float[48,-11.600000000000009,0]);
TouchSensor TouchSensor509 = createNode("TouchSensor");
TouchSensor509.description = "TSJinSlit";
TouchSensor509.DEF = "JinSlit_Sensor";
Transform508.children = new MFNode();

Transform508.children[0] = TouchSensor509;

Shape Shape510 = createNode("Shape");
Appearance Appearance511 = createNode("Appearance");
Material Material512 = createNode("Material");
Material512.diffuseColor = new SFColor(new float[1,1,1]);
Appearance511.material = Material512;

Shape510.appearance = Appearance511;

Text Text513 = createNode("Text");
Text513.string = new MFString(new java.lang.String["JinSlit"]);
FontStyle FontStyle514 = createNode("FontStyle");
FontStyle514.size = 2.4;
FontStyle514.spacing = 1.2;
FontStyle514.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text513.fontStyle = FontStyle514;

Shape510.geometry = Text513;

Transform508.child[1] = Shape510;

Shape Shape515 = createNode("Shape");
Appearance Appearance516 = createNode("Appearance");
Material Material517 = createNode("Material");
Material517.diffuseColor = new SFColor(new float[0,0,1]);
Appearance516.material = Material517;

Shape515.appearance = Appearance516;

IndexedFaceSet IndexedFaceSet518 = createNode("IndexedFaceSet");
IndexedFaceSet518.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate519 = createNode("Coordinate");
Coordinate519.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet518.coord = Coordinate519;

Shape515.geometry = IndexedFaceSet518;

Transform508.child[2] = Shape515;

Group6.children[76] = Transform508;

ROUTE ROUTE520 = createNode("ROUTE");
ROUTE520.fromNode = "JinSlit_Sensor";
ROUTE520.fromField = "touchTime";
ROUTE520.toNode = "Choice25";
ROUTE520.toField = "touchTime";
Group6.children[77] = ROUTE520;

ROUTE ROUTE521 = createNode("ROUTE");
ROUTE521.fromNode = "Choice25";
ROUTE521.fromField = "choice";
ROUTE521.toNode = "SceneSwitcher";
ROUTE521.toField = "whichChoice";
Group6.children[78] = ROUTE521;

Transform Transform522 = createNode("Transform");
Transform522.translation = new SFVec3f(new float[48,-14.600000000000001,0]);
TouchSensor TouchSensor523 = createNode("TouchSensor");
TouchSensor523.description = "TSJinSquint";
TouchSensor523.DEF = "JinSquint_Sensor";
Transform522.children = new MFNode();

Transform522.children[0] = TouchSensor523;

Shape Shape524 = createNode("Shape");
Appearance Appearance525 = createNode("Appearance");
Material Material526 = createNode("Material");
Material526.diffuseColor = new SFColor(new float[1,1,1]);
Appearance525.material = Material526;

Shape524.appearance = Appearance525;

Text Text527 = createNode("Text");
Text527.string = new MFString(new java.lang.String["JinSquint"]);
FontStyle FontStyle528 = createNode("FontStyle");
FontStyle528.size = 2.4;
FontStyle528.spacing = 1.2;
FontStyle528.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text527.fontStyle = FontStyle528;

Shape524.geometry = Text527;

Transform522.child[1] = Shape524;

Shape Shape529 = createNode("Shape");
Appearance Appearance530 = createNode("Appearance");
Material Material531 = createNode("Material");
Material531.diffuseColor = new SFColor(new float[0,0,1]);
Appearance530.material = Material531;

Shape529.appearance = Appearance530;

IndexedFaceSet IndexedFaceSet532 = createNode("IndexedFaceSet");
IndexedFaceSet532.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate533 = createNode("Coordinate");
Coordinate533.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet532.coord = Coordinate533;

Shape529.geometry = IndexedFaceSet532;

Transform522.child[2] = Shape529;

Group6.children[79] = Transform522;

ROUTE ROUTE534 = createNode("ROUTE");
ROUTE534.fromNode = "JinSquint_Sensor";
ROUTE534.fromField = "touchTime";
ROUTE534.toNode = "Choice26";
ROUTE534.toField = "touchTime";
Group6.children[80] = ROUTE534;

ROUTE ROUTE535 = createNode("ROUTE");
ROUTE535.fromNode = "Choice26";
ROUTE535.fromField = "choice";
ROUTE535.toNode = "SceneSwitcher";
ROUTE535.toField = "whichChoice";
Group6.children[81] = ROUTE535;

Transform Transform536 = createNode("Transform");
Transform536.translation = new SFVec3f(new float[48,-17.6,0]);
TouchSensor TouchSensor537 = createNode("TouchSensor");
TouchSensor537.description = "TSJinUpperLidRaiser";
TouchSensor537.DEF = "JinUpperLidRaiser_Sensor";
Transform536.children = new MFNode();

Transform536.children[0] = TouchSensor537;

Shape Shape538 = createNode("Shape");
Appearance Appearance539 = createNode("Appearance");
Material Material540 = createNode("Material");
Material540.diffuseColor = new SFColor(new float[1,1,1]);
Appearance539.material = Material540;

Shape538.appearance = Appearance539;

Text Text541 = createNode("Text");
Text541.string = new MFString(new java.lang.String["JinUpperLidRaiser"]);
FontStyle FontStyle542 = createNode("FontStyle");
FontStyle542.size = 2.4;
FontStyle542.spacing = 1.2;
FontStyle542.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text541.fontStyle = FontStyle542;

Shape538.geometry = Text541;

Transform536.child[1] = Shape538;

Shape Shape543 = createNode("Shape");
Appearance Appearance544 = createNode("Appearance");
Material Material545 = createNode("Material");
Material545.diffuseColor = new SFColor(new float[0,0,1]);
Appearance544.material = Material545;

Shape543.appearance = Appearance544;

IndexedFaceSet IndexedFaceSet546 = createNode("IndexedFaceSet");
IndexedFaceSet546.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate547 = createNode("Coordinate");
Coordinate547.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet546.coord = Coordinate547;

Shape543.geometry = IndexedFaceSet546;

Transform536.child[2] = Shape543;

Group6.children[82] = Transform536;

ROUTE ROUTE548 = createNode("ROUTE");
ROUTE548.fromNode = "JinUpperLidRaiser_Sensor";
ROUTE548.fromField = "touchTime";
ROUTE548.toNode = "Choice27";
ROUTE548.toField = "touchTime";
Group6.children[83] = ROUTE548;

ROUTE ROUTE549 = createNode("ROUTE");
ROUTE549.fromNode = "Choice27";
ROUTE549.fromField = "choice";
ROUTE549.toNode = "SceneSwitcher";
ROUTE549.toField = "whichChoice";
Group6.children[84] = ROUTE549;

Transform Transform550 = createNode("Transform");
Transform550.translation = new SFVec3f(new float[48,-20.6,0]);
TouchSensor TouchSensor551 = createNode("TouchSensor");
TouchSensor551.description = "TSJinUpperLipRaiser";
TouchSensor551.DEF = "JinUpperLipRaiser_Sensor";
Transform550.children = new MFNode();

Transform550.children[0] = TouchSensor551;

Shape Shape552 = createNode("Shape");
Appearance Appearance553 = createNode("Appearance");
Material Material554 = createNode("Material");
Material554.diffuseColor = new SFColor(new float[1,1,1]);
Appearance553.material = Material554;

Shape552.appearance = Appearance553;

Text Text555 = createNode("Text");
Text555.string = new MFString(new java.lang.String["JinUpperLipRaiser"]);
FontStyle FontStyle556 = createNode("FontStyle");
FontStyle556.size = 2.4;
FontStyle556.spacing = 1.2;
FontStyle556.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text555.fontStyle = FontStyle556;

Shape552.geometry = Text555;

Transform550.child[1] = Shape552;

Shape Shape557 = createNode("Shape");
Appearance Appearance558 = createNode("Appearance");
Material Material559 = createNode("Material");
Material559.diffuseColor = new SFColor(new float[0,0,1]);
Appearance558.material = Material559;

Shape557.appearance = Appearance558;

IndexedFaceSet IndexedFaceSet560 = createNode("IndexedFaceSet");
IndexedFaceSet560.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate561 = createNode("Coordinate");
Coordinate561.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet560.coord = Coordinate561;

Shape557.geometry = IndexedFaceSet560;

Transform550.child[2] = Shape557;

Group6.children[85] = Transform550;

ROUTE ROUTE562 = createNode("ROUTE");
ROUTE562.fromNode = "JinUpperLipRaiser_Sensor";
ROUTE562.fromField = "touchTime";
ROUTE562.toNode = "Choice28";
ROUTE562.toField = "touchTime";
Group6.children[86] = ROUTE562;

ROUTE ROUTE563 = createNode("ROUTE");
ROUTE563.fromNode = "Choice28";
ROUTE563.fromField = "choice";
ROUTE563.toNode = "SceneSwitcher";
ROUTE563.toField = "whichChoice";
Group6.children[87] = ROUTE563;

Transform Transform564 = createNode("Transform");
Transform564.translation = new SFVec3f(new float[48,-23.599999999999994,0]);
TouchSensor TouchSensor565 = createNode("TouchSensor");
TouchSensor565.description = "TSJinWink";
TouchSensor565.DEF = "JinWink_Sensor";
Transform564.children = new MFNode();

Transform564.children[0] = TouchSensor565;

Shape Shape566 = createNode("Shape");
Appearance Appearance567 = createNode("Appearance");
Material Material568 = createNode("Material");
Material568.diffuseColor = new SFColor(new float[1,1,1]);
Appearance567.material = Material568;

Shape566.appearance = Appearance567;

Text Text569 = createNode("Text");
Text569.string = new MFString(new java.lang.String["JinWink"]);
FontStyle FontStyle570 = createNode("FontStyle");
FontStyle570.size = 2.4;
FontStyle570.spacing = 1.2;
FontStyle570.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text569.fontStyle = FontStyle570;

Shape566.geometry = Text569;

Transform564.child[1] = Shape566;

Shape Shape571 = createNode("Shape");
Appearance Appearance572 = createNode("Appearance");
Material Material573 = createNode("Material");
Material573.diffuseColor = new SFColor(new float[0,0,1]);
Appearance572.material = Material573;

Shape571.appearance = Appearance572;

IndexedFaceSet IndexedFaceSet574 = createNode("IndexedFaceSet");
IndexedFaceSet574.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate575 = createNode("Coordinate");
Coordinate575.point = new MFVec3f(new float[20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
IndexedFaceSet574.coord = Coordinate575;

Shape571.geometry = IndexedFaceSet574;

Transform564.child[2] = Shape571;

Group6.children[88] = Transform564;

ROUTE ROUTE576 = createNode("ROUTE");
ROUTE576.fromNode = "JinWink_Sensor";
ROUTE576.fromField = "touchTime";
ROUTE576.toNode = "Choice29";
ROUTE576.toField = "touchTime";
Group6.children[89] = ROUTE576;

ROUTE ROUTE577 = createNode("ROUTE");
ROUTE577.fromNode = "Choice29";
ROUTE577.fromField = "choice";
ROUTE577.toNode = "SceneSwitcher";
ROUTE577.toField = "whichChoice";
Group6.children[90] = ROUTE577;

children[1] = Group6;

}
