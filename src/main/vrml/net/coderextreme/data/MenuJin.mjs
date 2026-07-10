const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "Menu.x3d");
scene.addMetaData("description", "X3D scene with a Switch of Inlines controlled by a menu");
await browser .loadComponents (scene);
//Viewpoint and any other scene setup
let Viewpoint5 = browser.currentScene.createNode("Viewpoint");
Viewpoint5.position = new X3D.SFVec3f([0,20,110]);
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint5;

let Group6 = browser.currentScene.createNode("Group");
let Switch7 = browser.currentScene.createNode("Switch");
Switch7.DEF = "SceneSwitcher";
Switch7.whichChoice = 0;
let Group8 = browser.currentScene.createNode("Group");
let Script9 = browser.currentScene.createNode("Script");
Script9.DEF = "Choice0";
Script10.getField("touchTime")Script9YYY.field = new X3D.MFNode();

Script11.getField("choice")Script9YYY.field = new X3D.MFNode();


Script9.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }`)
Group8YYY.children = new X3D.MFNode();

Group8ZZZ.children[0] = Script9;

let Inline12 = browser.currentScene.createNode("Inline");
Inline12.DEF = "JinBlink";
Inline12.url = new X3D.MFString([new X3D.SFString("../resources/JinBlink.x3d"), new X3D.SFString("JinBlink.x3d")]);
Group8ZZZ.children[1] = Inline12;

Switch7YYY.children = new X3D.MFNode();

Switch7ZZZ.children[0] = Group8;

let Group13 = browser.currentScene.createNode("Group");
let Script14 = browser.currentScene.createNode("Script");
Script14.DEF = "Choice1";
Script15.getField("touchTime")Script14YYY.field = new X3D.MFNode();

Script16.getField("choice")Script14YYY.field = new X3D.MFNode();


Script14.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }`)
Group13YYY.children = new X3D.MFNode();

Group13ZZZ.children[0] = Script14;

let Inline17 = browser.currentScene.createNode("Inline");
Inline17.DEF = "JinBrowLowerer";
Inline17.url = new X3D.MFString([new X3D.SFString("../resources/JinBrowLowerer.x3d"), new X3D.SFString("JinBrowLowerer.x3d")]);
Group13ZZZ.children[1] = Inline17;

Switch7ZZZ.children[1] = Group13;

let Group18 = browser.currentScene.createNode("Group");
let Script19 = browser.currentScene.createNode("Script");
Script19.DEF = "Choice2";
Script20.getField("touchTime")Script19YYY.field = new X3D.MFNode();

Script21.getField("choice")Script19YYY.field = new X3D.MFNode();


Script19.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }`)
Group18YYY.children = new X3D.MFNode();

Group18ZZZ.children[0] = Script19;

let Inline22 = browser.currentScene.createNode("Inline");
Inline22.DEF = "JinCheekPuffer";
Inline22.url = new X3D.MFString([new X3D.SFString("../resources/JinCheekPuffer.x3d"), new X3D.SFString("JinCheekPuffer.x3d")]);
Group18ZZZ.children[1] = Inline22;

Switch7ZZZ.children[2] = Group18;

let Group23 = browser.currentScene.createNode("Group");
let Script24 = browser.currentScene.createNode("Script");
Script24.DEF = "Choice3";
Script25.getField("touchTime")Script24YYY.field = new X3D.MFNode();

Script26.getField("choice")Script24YYY.field = new X3D.MFNode();


Script24.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }`)
Group23YYY.children = new X3D.MFNode();

Group23ZZZ.children[0] = Script24;

let Inline27 = browser.currentScene.createNode("Inline");
Inline27.DEF = "JinCheekRaiser";
Inline27.url = new X3D.MFString([new X3D.SFString("../resources/JinCheekRaiser.x3d"), new X3D.SFString("JinCheekRaiser.x3d")]);
Group23ZZZ.children[1] = Inline27;

Switch7ZZZ.children[3] = Group23;

let Group28 = browser.currentScene.createNode("Group");
let Script29 = browser.currentScene.createNode("Script");
Script29.DEF = "Choice4";
Script30.getField("touchTime")Script29YYY.field = new X3D.MFNode();

Script31.getField("choice")Script29YYY.field = new X3D.MFNode();


Script29.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }`)
Group28YYY.children = new X3D.MFNode();

Group28ZZZ.children[0] = Script29;

let Inline32 = browser.currentScene.createNode("Inline");
Inline32.DEF = "JinChinRaiser";
Inline32.url = new X3D.MFString([new X3D.SFString("../resources/JinChinRaiser.x3d"), new X3D.SFString("JinChinRaiser.x3d")]);
Group28ZZZ.children[1] = Inline32;

Switch7ZZZ.children[4] = Group28;

let Group33 = browser.currentScene.createNode("Group");
let Script34 = browser.currentScene.createNode("Script");
Script34.DEF = "Choice5";
Script35.getField("touchTime")Script34YYY.field = new X3D.MFNode();

Script36.getField("choice")Script34YYY.field = new X3D.MFNode();


Script34.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }`)
Group33YYY.children = new X3D.MFNode();

Group33ZZZ.children[0] = Script34;

let Inline37 = browser.currentScene.createNode("Inline");
Inline37.DEF = "JinDimpler";
Inline37.url = new X3D.MFString([new X3D.SFString("../resources/JinDimpler.x3d"), new X3D.SFString("JinDimpler.x3d")]);
Group33ZZZ.children[1] = Inline37;

Switch7ZZZ.children[5] = Group33;

let Group38 = browser.currentScene.createNode("Group");
let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "Choice6";
Script40.getField("touchTime")Script39YYY.field = new X3D.MFNode();

Script41.getField("choice")Script39YYY.field = new X3D.MFNode();


Script39.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }`)
Group38YYY.children = new X3D.MFNode();

Group38ZZZ.children[0] = Script39;

let Inline42 = browser.currentScene.createNode("Inline");
Inline42.DEF = "JinEyesClosed";
Inline42.url = new X3D.MFString([new X3D.SFString("../resources/JinEyesClosed.x3d"), new X3D.SFString("JinEyesClosed.x3d")]);
Group38ZZZ.children[1] = Inline42;

Switch7ZZZ.children[6] = Group38;

let Group43 = browser.currentScene.createNode("Group");
let Script44 = browser.currentScene.createNode("Script");
Script44.DEF = "Choice7";
Script45.getField("touchTime")Script44YYY.field = new X3D.MFNode();

Script46.getField("choice")Script44YYY.field = new X3D.MFNode();


Script44.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }`)
Group43YYY.children = new X3D.MFNode();

Group43ZZZ.children[0] = Script44;

let Inline47 = browser.currentScene.createNode("Inline");
Inline47.DEF = "JinInnerBrowRaiser";
Inline47.url = new X3D.MFString([new X3D.SFString("../resources/JinInnerBrowRaiser.x3d"), new X3D.SFString("JinInnerBrowRaiser.x3d")]);
Group43ZZZ.children[1] = Inline47;

Switch7ZZZ.children[7] = Group43;

let Group48 = browser.currentScene.createNode("Group");
let Script49 = browser.currentScene.createNode("Script");
Script49.DEF = "Choice8";
Script50.getField("touchTime")Script49YYY.field = new X3D.MFNode();

Script51.getField("choice")Script49YYY.field = new X3D.MFNode();


Script49.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }`)
Group48YYY.children = new X3D.MFNode();

Group48ZZZ.children[0] = Script49;

let Inline52 = browser.currentScene.createNode("Inline");
Inline52.DEF = "JinJawDrop";
Inline52.url = new X3D.MFString([new X3D.SFString("../resources/JinJawDrop.x3d"), new X3D.SFString("JinJawDrop.x3d")]);
Group48ZZZ.children[1] = Inline52;

Switch7ZZZ.children[8] = Group48;

let Group53 = browser.currentScene.createNode("Group");
let Script54 = browser.currentScene.createNode("Script");
Script54.DEF = "Choice9";
Script55.getField("touchTime")Script54YYY.field = new X3D.MFNode();

Script56.getField("choice")Script54YYY.field = new X3D.MFNode();


Script54.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }`)
Group53YYY.children = new X3D.MFNode();

Group53ZZZ.children[0] = Script54;

let Inline57 = browser.currentScene.createNode("Inline");
Inline57.DEF = "JinLidDroop";
Inline57.url = new X3D.MFString([new X3D.SFString("../resources/JinLidDroop.x3d"), new X3D.SFString("JinLidDroop.x3d")]);
Group53ZZZ.children[1] = Inline57;

Switch7ZZZ.children[9] = Group53;

let Group58 = browser.currentScene.createNode("Group");
let Script59 = browser.currentScene.createNode("Script");
Script59.DEF = "Choice10";
Script60.getField("touchTime")Script59YYY.field = new X3D.MFNode();

Script61.getField("choice")Script59YYY.field = new X3D.MFNode();


Script59.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }`)
Group58YYY.children = new X3D.MFNode();

Group58ZZZ.children[0] = Script59;

let Inline62 = browser.currentScene.createNode("Inline");
Inline62.DEF = "JinLidTightener";
Inline62.url = new X3D.MFString([new X3D.SFString("../resources/JinLidTightener.x3d"), new X3D.SFString("JinLidTightener.x3d")]);
Group58ZZZ.children[1] = Inline62;

Switch7ZZZ.children[10] = Group58;

let Group63 = browser.currentScene.createNode("Group");
let Script64 = browser.currentScene.createNode("Script");
Script64.DEF = "Choice11";
Script65.getField("touchTime")Script64YYY.field = new X3D.MFNode();

Script66.getField("choice")Script64YYY.field = new X3D.MFNode();


Script64.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }`)
Group63YYY.children = new X3D.MFNode();

Group63ZZZ.children[0] = Script64;

let Inline67 = browser.currentScene.createNode("Inline");
Inline67.DEF = "JinLipCornerDepressor";
Inline67.url = new X3D.MFString([new X3D.SFString("../resources/JinLipCornerDepressor.x3d"), new X3D.SFString("JinLipCornerDepressor.x3d")]);
Group63ZZZ.children[1] = Inline67;

Switch7ZZZ.children[11] = Group63;

let Group68 = browser.currentScene.createNode("Group");
let Script69 = browser.currentScene.createNode("Script");
Script69.DEF = "Choice12";
Script70.getField("touchTime")Script69YYY.field = new X3D.MFNode();

Script71.getField("choice")Script69YYY.field = new X3D.MFNode();


Script69.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }`)
Group68YYY.children = new X3D.MFNode();

Group68ZZZ.children[0] = Script69;

let Inline72 = browser.currentScene.createNode("Inline");
Inline72.DEF = "JinLipCornerPuller";
Inline72.url = new X3D.MFString([new X3D.SFString("../resources/JinLipCornerPuller.x3d"), new X3D.SFString("JinLipCornerPuller.x3d")]);
Group68ZZZ.children[1] = Inline72;

Switch7ZZZ.children[12] = Group68;

let Group73 = browser.currentScene.createNode("Group");
let Script74 = browser.currentScene.createNode("Script");
Script74.DEF = "Choice13";
Script75.getField("touchTime")Script74YYY.field = new X3D.MFNode();

Script76.getField("choice")Script74YYY.field = new X3D.MFNode();


Script74.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }`)
Group73YYY.children = new X3D.MFNode();

Group73ZZZ.children[0] = Script74;

let Inline77 = browser.currentScene.createNode("Inline");
Inline77.DEF = "JinLipFunneler";
Inline77.url = new X3D.MFString([new X3D.SFString("../resources/JinLipFunneler.x3d"), new X3D.SFString("JinLipFunneler.x3d")]);
Group73ZZZ.children[1] = Inline77;

Switch7ZZZ.children[13] = Group73;

let Group78 = browser.currentScene.createNode("Group");
let Script79 = browser.currentScene.createNode("Script");
Script79.DEF = "Choice14";
Script80.getField("touchTime")Script79YYY.field = new X3D.MFNode();

Script81.getField("choice")Script79YYY.field = new X3D.MFNode();


Script79.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }`)
Group78YYY.children = new X3D.MFNode();

Group78ZZZ.children[0] = Script79;

let Inline82 = browser.currentScene.createNode("Inline");
Inline82.DEF = "JinLipPressor";
Inline82.url = new X3D.MFString([new X3D.SFString("../resources/JinLipPressor.x3d"), new X3D.SFString("JinLipPressor.x3d")]);
Group78ZZZ.children[1] = Inline82;

Switch7ZZZ.children[14] = Group78;

let Group83 = browser.currentScene.createNode("Group");
let Script84 = browser.currentScene.createNode("Script");
Script84.DEF = "Choice15";
Script85.getField("touchTime")Script84YYY.field = new X3D.MFNode();

Script86.getField("choice")Script84YYY.field = new X3D.MFNode();


Script84.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }`)
Group83YYY.children = new X3D.MFNode();

Group83ZZZ.children[0] = Script84;

let Inline87 = browser.currentScene.createNode("Inline");
Inline87.DEF = "JinLipPuckerer";
Inline87.url = new X3D.MFString([new X3D.SFString("../resources/JinLipPuckerer.x3d"), new X3D.SFString("JinLipPuckerer.x3d")]);
Group83ZZZ.children[1] = Inline87;

Switch7ZZZ.children[15] = Group83;

let Group88 = browser.currentScene.createNode("Group");
let Script89 = browser.currentScene.createNode("Script");
Script89.DEF = "Choice16";
Script90.getField("touchTime")Script89YYY.field = new X3D.MFNode();

Script91.getField("choice")Script89YYY.field = new X3D.MFNode();


Script89.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }`)
Group88YYY.children = new X3D.MFNode();

Group88ZZZ.children[0] = Script89;

let Inline92 = browser.currentScene.createNode("Inline");
Inline92.DEF = "JinLipsPart";
Inline92.url = new X3D.MFString([new X3D.SFString("../resources/JinLipsPart.x3d"), new X3D.SFString("JinLipsPart.x3d")]);
Group88ZZZ.children[1] = Inline92;

Switch7ZZZ.children[16] = Group88;

let Group93 = browser.currentScene.createNode("Group");
let Script94 = browser.currentScene.createNode("Script");
Script94.DEF = "Choice17";
Script95.getField("touchTime")Script94YYY.field = new X3D.MFNode();

Script96.getField("choice")Script94YYY.field = new X3D.MFNode();


Script94.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }`)
Group93YYY.children = new X3D.MFNode();

Group93ZZZ.children[0] = Script94;

let Inline97 = browser.currentScene.createNode("Inline");
Inline97.DEF = "JinLipStretcher";
Inline97.url = new X3D.MFString([new X3D.SFString("../resources/JinLipStretcher.x3d"), new X3D.SFString("JinLipStretcher.x3d")]);
Group93ZZZ.children[1] = Inline97;

Switch7ZZZ.children[17] = Group93;

let Group98 = browser.currentScene.createNode("Group");
let Script99 = browser.currentScene.createNode("Script");
Script99.DEF = "Choice18";
Script100.getField("touchTime")Script99YYY.field = new X3D.MFNode();

Script101.getField("choice")Script99YYY.field = new X3D.MFNode();


Script99.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }`)
Group98YYY.children = new X3D.MFNode();

Group98ZZZ.children[0] = Script99;

let Inline102 = browser.currentScene.createNode("Inline");
Inline102.DEF = "JinLipSuck";
Inline102.url = new X3D.MFString([new X3D.SFString("../resources/JinLipSuck.x3d"), new X3D.SFString("JinLipSuck.x3d")]);
Group98ZZZ.children[1] = Inline102;

Switch7ZZZ.children[18] = Group98;

let Group103 = browser.currentScene.createNode("Group");
let Script104 = browser.currentScene.createNode("Script");
Script104.DEF = "Choice19";
Script105.getField("touchTime")Script104YYY.field = new X3D.MFNode();

Script106.getField("choice")Script104YYY.field = new X3D.MFNode();


Script104.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }`)
Group103YYY.children = new X3D.MFNode();

Group103ZZZ.children[0] = Script104;

let Inline107 = browser.currentScene.createNode("Inline");
Inline107.DEF = "JinLipTightener";
Inline107.url = new X3D.MFString([new X3D.SFString("../resources/JinLipTightener.x3d"), new X3D.SFString("JinLipTightener.x3d")]);
Group103ZZZ.children[1] = Inline107;

Switch7ZZZ.children[19] = Group103;

let Group108 = browser.currentScene.createNode("Group");
let Script109 = browser.currentScene.createNode("Script");
Script109.DEF = "Choice20";
Script110.getField("touchTime")Script109YYY.field = new X3D.MFNode();

Script111.getField("choice")Script109YYY.field = new X3D.MFNode();


Script109.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }`)
Group108YYY.children = new X3D.MFNode();

Group108ZZZ.children[0] = Script109;

let Inline112 = browser.currentScene.createNode("Inline");
Inline112.DEF = "JinLowerLipDepressor";
Inline112.url = new X3D.MFString([new X3D.SFString("../resources/JinLowerLipDepressor.x3d"), new X3D.SFString("JinLowerLipDepressor.x3d")]);
Group108ZZZ.children[1] = Inline112;

Switch7ZZZ.children[20] = Group108;

let Group113 = browser.currentScene.createNode("Group");
let Script114 = browser.currentScene.createNode("Script");
Script114.DEF = "Choice21";
Script115.getField("touchTime")Script114YYY.field = new X3D.MFNode();

Script116.getField("choice")Script114YYY.field = new X3D.MFNode();


Script114.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }`)
Group113YYY.children = new X3D.MFNode();

Group113ZZZ.children[0] = Script114;

let Inline117 = browser.currentScene.createNode("Inline");
Inline117.DEF = "JinMouthStretch";
Inline117.url = new X3D.MFString([new X3D.SFString("../resources/JinMouthStretch.x3d"), new X3D.SFString("JinMouthStretch.x3d")]);
Group113ZZZ.children[1] = Inline117;

Switch7ZZZ.children[21] = Group113;

let Group118 = browser.currentScene.createNode("Group");
let Script119 = browser.currentScene.createNode("Script");
Script119.DEF = "Choice22";
Script120.getField("touchTime")Script119YYY.field = new X3D.MFNode();

Script121.getField("choice")Script119YYY.field = new X3D.MFNode();


Script119.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }`)
Group118YYY.children = new X3D.MFNode();

Group118ZZZ.children[0] = Script119;

let Inline122 = browser.currentScene.createNode("Inline");
Inline122.DEF = "JinNasolabialDeepener";
Inline122.url = new X3D.MFString([new X3D.SFString("../resources/JinNasolabialDeepener.x3d"), new X3D.SFString("JinNasolabialDeepener.x3d")]);
Group118ZZZ.children[1] = Inline122;

Switch7ZZZ.children[22] = Group118;

let Group123 = browser.currentScene.createNode("Group");
let Script124 = browser.currentScene.createNode("Script");
Script124.DEF = "Choice23";
Script125.getField("touchTime")Script124YYY.field = new X3D.MFNode();

Script126.getField("choice")Script124YYY.field = new X3D.MFNode();


Script124.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }`)
Group123YYY.children = new X3D.MFNode();

Group123ZZZ.children[0] = Script124;

let Inline127 = browser.currentScene.createNode("Inline");
Inline127.DEF = "JinNoseWrinkler";
Inline127.url = new X3D.MFString([new X3D.SFString("../resources/JinNoseWrinkler.x3d"), new X3D.SFString("JinNoseWrinkler.x3d")]);
Group123ZZZ.children[1] = Inline127;

Switch7ZZZ.children[23] = Group123;

let Group128 = browser.currentScene.createNode("Group");
let Script129 = browser.currentScene.createNode("Script");
Script129.DEF = "Choice24";
Script130.getField("touchTime")Script129YYY.field = new X3D.MFNode();

Script131.getField("choice")Script129YYY.field = new X3D.MFNode();


Script129.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }`)
Group128YYY.children = new X3D.MFNode();

Group128ZZZ.children[0] = Script129;

let Inline132 = browser.currentScene.createNode("Inline");
Inline132.DEF = "JinOuterBrowRaiser";
Inline132.url = new X3D.MFString([new X3D.SFString("../resources/JinOuterBrowRaiser.x3d"), new X3D.SFString("JinOuterBrowRaiser.x3d")]);
Group128ZZZ.children[1] = Inline132;

Switch7ZZZ.children[24] = Group128;

let Group133 = browser.currentScene.createNode("Group");
let Script134 = browser.currentScene.createNode("Script");
Script134.DEF = "Choice25";
Script135.getField("touchTime")Script134YYY.field = new X3D.MFNode();

Script136.getField("choice")Script134YYY.field = new X3D.MFNode();


Script134.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }`)
Group133YYY.children = new X3D.MFNode();

Group133ZZZ.children[0] = Script134;

let Inline137 = browser.currentScene.createNode("Inline");
Inline137.DEF = "JinSlit";
Inline137.url = new X3D.MFString([new X3D.SFString("../resources/JinSlit.x3d"), new X3D.SFString("JinSlit.x3d")]);
Group133ZZZ.children[1] = Inline137;

Switch7ZZZ.children[25] = Group133;

let Group138 = browser.currentScene.createNode("Group");
let Script139 = browser.currentScene.createNode("Script");
Script139.DEF = "Choice26";
Script140.getField("touchTime")Script139YYY.field = new X3D.MFNode();

Script141.getField("choice")Script139YYY.field = new X3D.MFNode();


Script139.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }`)
Group138YYY.children = new X3D.MFNode();

Group138ZZZ.children[0] = Script139;

let Inline142 = browser.currentScene.createNode("Inline");
Inline142.DEF = "JinSquint";
Inline142.url = new X3D.MFString([new X3D.SFString("../resources/JinSquint.x3d"), new X3D.SFString("JinSquint.x3d")]);
Group138ZZZ.children[1] = Inline142;

Switch7ZZZ.children[26] = Group138;

let Group143 = browser.currentScene.createNode("Group");
let Script144 = browser.currentScene.createNode("Script");
Script144.DEF = "Choice27";
Script145.getField("touchTime")Script144YYY.field = new X3D.MFNode();

Script146.getField("choice")Script144YYY.field = new X3D.MFNode();


Script144.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }`)
Group143YYY.children = new X3D.MFNode();

Group143ZZZ.children[0] = Script144;

let Inline147 = browser.currentScene.createNode("Inline");
Inline147.DEF = "JinUpperLidRaiser";
Inline147.url = new X3D.MFString([new X3D.SFString("../resources/JinUpperLidRaiser.x3d"), new X3D.SFString("JinUpperLidRaiser.x3d")]);
Group143ZZZ.children[1] = Inline147;

Switch7ZZZ.children[27] = Group143;

let Group148 = browser.currentScene.createNode("Group");
let Script149 = browser.currentScene.createNode("Script");
Script149.DEF = "Choice28";
Script150.getField("touchTime")Script149YYY.field = new X3D.MFNode();

Script151.getField("choice")Script149YYY.field = new X3D.MFNode();


Script149.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }`)
Group148YYY.children = new X3D.MFNode();

Group148ZZZ.children[0] = Script149;

let Inline152 = browser.currentScene.createNode("Inline");
Inline152.DEF = "JinUpperLipRaiser";
Inline152.url = new X3D.MFString([new X3D.SFString("../resources/JinUpperLipRaiser.x3d"), new X3D.SFString("JinUpperLipRaiser.x3d")]);
Group148ZZZ.children[1] = Inline152;

Switch7ZZZ.children[28] = Group148;

let Group153 = browser.currentScene.createNode("Group");
let Script154 = browser.currentScene.createNode("Script");
Script154.DEF = "Choice29";
Script155.getField("touchTime")Script154YYY.field = new X3D.MFNode();

Script156.getField("choice")Script154YYY.field = new X3D.MFNode();


Script154.setSourceCode(`ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }`)
Group153YYY.children = new X3D.MFNode();

Group153ZZZ.children[0] = Script154;

let Inline157 = browser.currentScene.createNode("Inline");
Inline157.DEF = "JinWink";
Inline157.url = new X3D.MFString([new X3D.SFString("../resources/JinWink.x3d"), new X3D.SFString("JinWink.x3d")]);
Group153ZZZ.children[1] = Inline157;

Switch7ZZZ.children[29] = Group153;

Group6YYY.children = new X3D.MFNode();

Group6ZZZ.children[0] = Switch7;

let Transform158 = browser.currentScene.createNode("Transform");
Transform158.translation = new X3D.SFVec3f([48,63.4,0]);
let TouchSensor159 = browser.currentScene.createNode("TouchSensor");
TouchSensor159.description = "TSJinBlink";
TouchSensor159.DEF = "JinBlink_Sensor";
Transform158YYY.children = new X3D.MFNode();

Transform158ZZZ.children[0] = TouchSensor159;

let Shape160 = browser.currentScene.createNode("Shape");
let Appearance161 = browser.currentScene.createNode("Appearance");
let Material162 = browser.currentScene.createNode("Material");
Material162.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material162;

appearance = Appearance161;

let Text163 = browser.currentScene.createNode("Text");
Text163.string = new X3D.MFString([new X3D.SFString("JinBlink")]);
let FontStyle164 = browser.currentScene.createNode("FontStyle");
FontStyle164.size = 2.4;
FontStyle164.spacing = 1.2;
FontStyle164.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle164;

geometry = Text163;

Transform158ZZZ.child[1] = Shape160;

let Shape165 = browser.currentScene.createNode("Shape");
let Appearance166 = browser.currentScene.createNode("Appearance");
let Material167 = browser.currentScene.createNode("Material");
Material167.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material167;

appearance = Appearance166;

let IndexedFaceSet168 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet168.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate169 = browser.currentScene.createNode("Coordinate");
Coordinate169.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate169;

geometry = IndexedFaceSet168;

Transform158ZZZ.child[2] = Shape165;

Group6ZZZ.children[1] = Transform158;

let ROUTE170 = browser.currentScene.createNode("ROUTE");
ROUTE170.fromNode = "JinBlink_Sensor";
ROUTE170.fromField = "touchTime";
ROUTE170.toNode = "Choice0";
ROUTE170.toField = "touchTime";
Group6ZZZ.children[2] = ROUTE170;

let ROUTE171 = browser.currentScene.createNode("ROUTE");
ROUTE171.fromNode = "Choice0";
ROUTE171.fromField = "choice";
ROUTE171.toNode = "SceneSwitcher";
ROUTE171.toField = "whichChoice";
Group6ZZZ.children[3] = ROUTE171;

let Transform172 = browser.currentScene.createNode("Transform");
Transform172.translation = new X3D.SFVec3f([48,60.4,0]);
let TouchSensor173 = browser.currentScene.createNode("TouchSensor");
TouchSensor173.description = "TSJinBrowLowerer";
TouchSensor173.DEF = "JinBrowLowerer_Sensor";
Transform172YYY.children = new X3D.MFNode();

Transform172ZZZ.children[0] = TouchSensor173;

let Shape174 = browser.currentScene.createNode("Shape");
let Appearance175 = browser.currentScene.createNode("Appearance");
let Material176 = browser.currentScene.createNode("Material");
Material176.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material176;

appearance = Appearance175;

let Text177 = browser.currentScene.createNode("Text");
Text177.string = new X3D.MFString([new X3D.SFString("JinBrowLowerer")]);
let FontStyle178 = browser.currentScene.createNode("FontStyle");
FontStyle178.size = 2.4;
FontStyle178.spacing = 1.2;
FontStyle178.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle178;

geometry = Text177;

Transform172ZZZ.child[1] = Shape174;

let Shape179 = browser.currentScene.createNode("Shape");
let Appearance180 = browser.currentScene.createNode("Appearance");
let Material181 = browser.currentScene.createNode("Material");
Material181.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material181;

appearance = Appearance180;

let IndexedFaceSet182 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet182.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate183 = browser.currentScene.createNode("Coordinate");
Coordinate183.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate183;

geometry = IndexedFaceSet182;

Transform172ZZZ.child[2] = Shape179;

Group6ZZZ.children[4] = Transform172;

let ROUTE184 = browser.currentScene.createNode("ROUTE");
ROUTE184.fromNode = "JinBrowLowerer_Sensor";
ROUTE184.fromField = "touchTime";
ROUTE184.toNode = "Choice1";
ROUTE184.toField = "touchTime";
Group6ZZZ.children[5] = ROUTE184;

let ROUTE185 = browser.currentScene.createNode("ROUTE");
ROUTE185.fromNode = "Choice1";
ROUTE185.fromField = "choice";
ROUTE185.toNode = "SceneSwitcher";
ROUTE185.toField = "whichChoice";
Group6ZZZ.children[6] = ROUTE185;

let Transform186 = browser.currentScene.createNode("Transform");
Transform186.translation = new X3D.SFVec3f([48,57.39999999999999,0]);
let TouchSensor187 = browser.currentScene.createNode("TouchSensor");
TouchSensor187.description = "TSJinCheekPuffer";
TouchSensor187.DEF = "JinCheekPuffer_Sensor";
Transform186YYY.children = new X3D.MFNode();

Transform186ZZZ.children[0] = TouchSensor187;

let Shape188 = browser.currentScene.createNode("Shape");
let Appearance189 = browser.currentScene.createNode("Appearance");
let Material190 = browser.currentScene.createNode("Material");
Material190.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material190;

appearance = Appearance189;

let Text191 = browser.currentScene.createNode("Text");
Text191.string = new X3D.MFString([new X3D.SFString("JinCheekPuffer")]);
let FontStyle192 = browser.currentScene.createNode("FontStyle");
FontStyle192.size = 2.4;
FontStyle192.spacing = 1.2;
FontStyle192.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle192;

geometry = Text191;

Transform186ZZZ.child[1] = Shape188;

let Shape193 = browser.currentScene.createNode("Shape");
let Appearance194 = browser.currentScene.createNode("Appearance");
let Material195 = browser.currentScene.createNode("Material");
Material195.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material195;

appearance = Appearance194;

let IndexedFaceSet196 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet196.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate197 = browser.currentScene.createNode("Coordinate");
Coordinate197.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate197;

geometry = IndexedFaceSet196;

Transform186ZZZ.child[2] = Shape193;

Group6ZZZ.children[7] = Transform186;

let ROUTE198 = browser.currentScene.createNode("ROUTE");
ROUTE198.fromNode = "JinCheekPuffer_Sensor";
ROUTE198.fromField = "touchTime";
ROUTE198.toNode = "Choice2";
ROUTE198.toField = "touchTime";
Group6ZZZ.children[8] = ROUTE198;

let ROUTE199 = browser.currentScene.createNode("ROUTE");
ROUTE199.fromNode = "Choice2";
ROUTE199.fromField = "choice";
ROUTE199.toNode = "SceneSwitcher";
ROUTE199.toField = "whichChoice";
Group6ZZZ.children[9] = ROUTE199;

let Transform200 = browser.currentScene.createNode("Transform");
Transform200.translation = new X3D.SFVec3f([48,54.39999999999999,0]);
let TouchSensor201 = browser.currentScene.createNode("TouchSensor");
TouchSensor201.description = "TSJinCheekRaiser";
TouchSensor201.DEF = "JinCheekRaiser_Sensor";
Transform200YYY.children = new X3D.MFNode();

Transform200ZZZ.children[0] = TouchSensor201;

let Shape202 = browser.currentScene.createNode("Shape");
let Appearance203 = browser.currentScene.createNode("Appearance");
let Material204 = browser.currentScene.createNode("Material");
Material204.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material204;

appearance = Appearance203;

let Text205 = browser.currentScene.createNode("Text");
Text205.string = new X3D.MFString([new X3D.SFString("JinCheekRaiser")]);
let FontStyle206 = browser.currentScene.createNode("FontStyle");
FontStyle206.size = 2.4;
FontStyle206.spacing = 1.2;
FontStyle206.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle206;

geometry = Text205;

Transform200ZZZ.child[1] = Shape202;

let Shape207 = browser.currentScene.createNode("Shape");
let Appearance208 = browser.currentScene.createNode("Appearance");
let Material209 = browser.currentScene.createNode("Material");
Material209.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material209;

appearance = Appearance208;

let IndexedFaceSet210 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet210.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate211 = browser.currentScene.createNode("Coordinate");
Coordinate211.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate211;

geometry = IndexedFaceSet210;

Transform200ZZZ.child[2] = Shape207;

Group6ZZZ.children[10] = Transform200;

let ROUTE212 = browser.currentScene.createNode("ROUTE");
ROUTE212.fromNode = "JinCheekRaiser_Sensor";
ROUTE212.fromField = "touchTime";
ROUTE212.toNode = "Choice3";
ROUTE212.toField = "touchTime";
Group6ZZZ.children[11] = ROUTE212;

let ROUTE213 = browser.currentScene.createNode("ROUTE");
ROUTE213.fromNode = "Choice3";
ROUTE213.fromField = "choice";
ROUTE213.toNode = "SceneSwitcher";
ROUTE213.toField = "whichChoice";
Group6ZZZ.children[12] = ROUTE213;

let Transform214 = browser.currentScene.createNode("Transform");
Transform214.translation = new X3D.SFVec3f([48,51.39999999999999,0]);
let TouchSensor215 = browser.currentScene.createNode("TouchSensor");
TouchSensor215.description = "TSJinChinRaiser";
TouchSensor215.DEF = "JinChinRaiser_Sensor";
Transform214YYY.children = new X3D.MFNode();

Transform214ZZZ.children[0] = TouchSensor215;

let Shape216 = browser.currentScene.createNode("Shape");
let Appearance217 = browser.currentScene.createNode("Appearance");
let Material218 = browser.currentScene.createNode("Material");
Material218.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material218;

appearance = Appearance217;

let Text219 = browser.currentScene.createNode("Text");
Text219.string = new X3D.MFString([new X3D.SFString("JinChinRaiser")]);
let FontStyle220 = browser.currentScene.createNode("FontStyle");
FontStyle220.size = 2.4;
FontStyle220.spacing = 1.2;
FontStyle220.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle220;

geometry = Text219;

Transform214ZZZ.child[1] = Shape216;

let Shape221 = browser.currentScene.createNode("Shape");
let Appearance222 = browser.currentScene.createNode("Appearance");
let Material223 = browser.currentScene.createNode("Material");
Material223.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material223;

appearance = Appearance222;

let IndexedFaceSet224 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet224.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate225 = browser.currentScene.createNode("Coordinate");
Coordinate225.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate225;

geometry = IndexedFaceSet224;

Transform214ZZZ.child[2] = Shape221;

Group6ZZZ.children[13] = Transform214;

let ROUTE226 = browser.currentScene.createNode("ROUTE");
ROUTE226.fromNode = "JinChinRaiser_Sensor";
ROUTE226.fromField = "touchTime";
ROUTE226.toNode = "Choice4";
ROUTE226.toField = "touchTime";
Group6ZZZ.children[14] = ROUTE226;

let ROUTE227 = browser.currentScene.createNode("ROUTE");
ROUTE227.fromNode = "Choice4";
ROUTE227.fromField = "choice";
ROUTE227.toNode = "SceneSwitcher";
ROUTE227.toField = "whichChoice";
Group6ZZZ.children[15] = ROUTE227;

let Transform228 = browser.currentScene.createNode("Transform");
Transform228.translation = new X3D.SFVec3f([48,48.39999999999999,0]);
let TouchSensor229 = browser.currentScene.createNode("TouchSensor");
TouchSensor229.description = "TSJinDimpler";
TouchSensor229.DEF = "JinDimpler_Sensor";
Transform228YYY.children = new X3D.MFNode();

Transform228ZZZ.children[0] = TouchSensor229;

let Shape230 = browser.currentScene.createNode("Shape");
let Appearance231 = browser.currentScene.createNode("Appearance");
let Material232 = browser.currentScene.createNode("Material");
Material232.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material232;

appearance = Appearance231;

let Text233 = browser.currentScene.createNode("Text");
Text233.string = new X3D.MFString([new X3D.SFString("JinDimpler")]);
let FontStyle234 = browser.currentScene.createNode("FontStyle");
FontStyle234.size = 2.4;
FontStyle234.spacing = 1.2;
FontStyle234.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle234;

geometry = Text233;

Transform228ZZZ.child[1] = Shape230;

let Shape235 = browser.currentScene.createNode("Shape");
let Appearance236 = browser.currentScene.createNode("Appearance");
let Material237 = browser.currentScene.createNode("Material");
Material237.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material237;

appearance = Appearance236;

let IndexedFaceSet238 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet238.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate239 = browser.currentScene.createNode("Coordinate");
Coordinate239.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate239;

geometry = IndexedFaceSet238;

Transform228ZZZ.child[2] = Shape235;

Group6ZZZ.children[16] = Transform228;

let ROUTE240 = browser.currentScene.createNode("ROUTE");
ROUTE240.fromNode = "JinDimpler_Sensor";
ROUTE240.fromField = "touchTime";
ROUTE240.toNode = "Choice5";
ROUTE240.toField = "touchTime";
Group6ZZZ.children[17] = ROUTE240;

let ROUTE241 = browser.currentScene.createNode("ROUTE");
ROUTE241.fromNode = "Choice5";
ROUTE241.fromField = "choice";
ROUTE241.toNode = "SceneSwitcher";
ROUTE241.toField = "whichChoice";
Group6ZZZ.children[18] = ROUTE241;

let Transform242 = browser.currentScene.createNode("Transform");
Transform242.translation = new X3D.SFVec3f([48,45.39999999999999,0]);
let TouchSensor243 = browser.currentScene.createNode("TouchSensor");
TouchSensor243.description = "TSJinEyesClosed";
TouchSensor243.DEF = "JinEyesClosed_Sensor";
Transform242YYY.children = new X3D.MFNode();

Transform242ZZZ.children[0] = TouchSensor243;

let Shape244 = browser.currentScene.createNode("Shape");
let Appearance245 = browser.currentScene.createNode("Appearance");
let Material246 = browser.currentScene.createNode("Material");
Material246.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material246;

appearance = Appearance245;

let Text247 = browser.currentScene.createNode("Text");
Text247.string = new X3D.MFString([new X3D.SFString("JinEyesClosed")]);
let FontStyle248 = browser.currentScene.createNode("FontStyle");
FontStyle248.size = 2.4;
FontStyle248.spacing = 1.2;
FontStyle248.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle248;

geometry = Text247;

Transform242ZZZ.child[1] = Shape244;

let Shape249 = browser.currentScene.createNode("Shape");
let Appearance250 = browser.currentScene.createNode("Appearance");
let Material251 = browser.currentScene.createNode("Material");
Material251.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material251;

appearance = Appearance250;

let IndexedFaceSet252 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet252.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate253 = browser.currentScene.createNode("Coordinate");
Coordinate253.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate253;

geometry = IndexedFaceSet252;

Transform242ZZZ.child[2] = Shape249;

Group6ZZZ.children[19] = Transform242;

let ROUTE254 = browser.currentScene.createNode("ROUTE");
ROUTE254.fromNode = "JinEyesClosed_Sensor";
ROUTE254.fromField = "touchTime";
ROUTE254.toNode = "Choice6";
ROUTE254.toField = "touchTime";
Group6ZZZ.children[20] = ROUTE254;

let ROUTE255 = browser.currentScene.createNode("ROUTE");
ROUTE255.fromNode = "Choice6";
ROUTE255.fromField = "choice";
ROUTE255.toNode = "SceneSwitcher";
ROUTE255.toField = "whichChoice";
Group6ZZZ.children[21] = ROUTE255;

let Transform256 = browser.currentScene.createNode("Transform");
Transform256.translation = new X3D.SFVec3f([48,42.39999999999999,0]);
let TouchSensor257 = browser.currentScene.createNode("TouchSensor");
TouchSensor257.description = "TSJinInnerBrowRaiser";
TouchSensor257.DEF = "JinInnerBrowRaiser_Sensor";
Transform256YYY.children = new X3D.MFNode();

Transform256ZZZ.children[0] = TouchSensor257;

let Shape258 = browser.currentScene.createNode("Shape");
let Appearance259 = browser.currentScene.createNode("Appearance");
let Material260 = browser.currentScene.createNode("Material");
Material260.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material260;

appearance = Appearance259;

let Text261 = browser.currentScene.createNode("Text");
Text261.string = new X3D.MFString([new X3D.SFString("JinInnerBrowRaiser")]);
let FontStyle262 = browser.currentScene.createNode("FontStyle");
FontStyle262.size = 2.4;
FontStyle262.spacing = 1.2;
FontStyle262.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle262;

geometry = Text261;

Transform256ZZZ.child[1] = Shape258;

let Shape263 = browser.currentScene.createNode("Shape");
let Appearance264 = browser.currentScene.createNode("Appearance");
let Material265 = browser.currentScene.createNode("Material");
Material265.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material265;

appearance = Appearance264;

let IndexedFaceSet266 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet266.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate267 = browser.currentScene.createNode("Coordinate");
Coordinate267.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate267;

geometry = IndexedFaceSet266;

Transform256ZZZ.child[2] = Shape263;

Group6ZZZ.children[22] = Transform256;

let ROUTE268 = browser.currentScene.createNode("ROUTE");
ROUTE268.fromNode = "JinInnerBrowRaiser_Sensor";
ROUTE268.fromField = "touchTime";
ROUTE268.toNode = "Choice7";
ROUTE268.toField = "touchTime";
Group6ZZZ.children[23] = ROUTE268;

let ROUTE269 = browser.currentScene.createNode("ROUTE");
ROUTE269.fromNode = "Choice7";
ROUTE269.fromField = "choice";
ROUTE269.toNode = "SceneSwitcher";
ROUTE269.toField = "whichChoice";
Group6ZZZ.children[24] = ROUTE269;

let Transform270 = browser.currentScene.createNode("Transform");
Transform270.translation = new X3D.SFVec3f([48,39.39999999999999,0]);
let TouchSensor271 = browser.currentScene.createNode("TouchSensor");
TouchSensor271.description = "TSJinJawDrop";
TouchSensor271.DEF = "JinJawDrop_Sensor";
Transform270YYY.children = new X3D.MFNode();

Transform270ZZZ.children[0] = TouchSensor271;

let Shape272 = browser.currentScene.createNode("Shape");
let Appearance273 = browser.currentScene.createNode("Appearance");
let Material274 = browser.currentScene.createNode("Material");
Material274.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material274;

appearance = Appearance273;

let Text275 = browser.currentScene.createNode("Text");
Text275.string = new X3D.MFString([new X3D.SFString("JinJawDrop")]);
let FontStyle276 = browser.currentScene.createNode("FontStyle");
FontStyle276.size = 2.4;
FontStyle276.spacing = 1.2;
FontStyle276.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle276;

geometry = Text275;

Transform270ZZZ.child[1] = Shape272;

let Shape277 = browser.currentScene.createNode("Shape");
let Appearance278 = browser.currentScene.createNode("Appearance");
let Material279 = browser.currentScene.createNode("Material");
Material279.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material279;

appearance = Appearance278;

let IndexedFaceSet280 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet280.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate281 = browser.currentScene.createNode("Coordinate");
Coordinate281.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate281;

geometry = IndexedFaceSet280;

Transform270ZZZ.child[2] = Shape277;

Group6ZZZ.children[25] = Transform270;

let ROUTE282 = browser.currentScene.createNode("ROUTE");
ROUTE282.fromNode = "JinJawDrop_Sensor";
ROUTE282.fromField = "touchTime";
ROUTE282.toNode = "Choice8";
ROUTE282.toField = "touchTime";
Group6ZZZ.children[26] = ROUTE282;

let ROUTE283 = browser.currentScene.createNode("ROUTE");
ROUTE283.fromNode = "Choice8";
ROUTE283.fromField = "choice";
ROUTE283.toNode = "SceneSwitcher";
ROUTE283.toField = "whichChoice";
Group6ZZZ.children[27] = ROUTE283;

let Transform284 = browser.currentScene.createNode("Transform");
Transform284.translation = new X3D.SFVec3f([48,36.39999999999999,0]);
let TouchSensor285 = browser.currentScene.createNode("TouchSensor");
TouchSensor285.description = "TSJinLidDroop";
TouchSensor285.DEF = "JinLidDroop_Sensor";
Transform284YYY.children = new X3D.MFNode();

Transform284ZZZ.children[0] = TouchSensor285;

let Shape286 = browser.currentScene.createNode("Shape");
let Appearance287 = browser.currentScene.createNode("Appearance");
let Material288 = browser.currentScene.createNode("Material");
Material288.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material288;

appearance = Appearance287;

let Text289 = browser.currentScene.createNode("Text");
Text289.string = new X3D.MFString([new X3D.SFString("JinLidDroop")]);
let FontStyle290 = browser.currentScene.createNode("FontStyle");
FontStyle290.size = 2.4;
FontStyle290.spacing = 1.2;
FontStyle290.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle290;

geometry = Text289;

Transform284ZZZ.child[1] = Shape286;

let Shape291 = browser.currentScene.createNode("Shape");
let Appearance292 = browser.currentScene.createNode("Appearance");
let Material293 = browser.currentScene.createNode("Material");
Material293.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material293;

appearance = Appearance292;

let IndexedFaceSet294 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet294.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate295 = browser.currentScene.createNode("Coordinate");
Coordinate295.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate295;

geometry = IndexedFaceSet294;

Transform284ZZZ.child[2] = Shape291;

Group6ZZZ.children[28] = Transform284;

let ROUTE296 = browser.currentScene.createNode("ROUTE");
ROUTE296.fromNode = "JinLidDroop_Sensor";
ROUTE296.fromField = "touchTime";
ROUTE296.toNode = "Choice9";
ROUTE296.toField = "touchTime";
Group6ZZZ.children[29] = ROUTE296;

let ROUTE297 = browser.currentScene.createNode("ROUTE");
ROUTE297.fromNode = "Choice9";
ROUTE297.fromField = "choice";
ROUTE297.toNode = "SceneSwitcher";
ROUTE297.toField = "whichChoice";
Group6ZZZ.children[30] = ROUTE297;

let Transform298 = browser.currentScene.createNode("Transform");
Transform298.translation = new X3D.SFVec3f([48,33.39999999999999,0]);
let TouchSensor299 = browser.currentScene.createNode("TouchSensor");
TouchSensor299.description = "TSJinLidTightener";
TouchSensor299.DEF = "JinLidTightener_Sensor";
Transform298YYY.children = new X3D.MFNode();

Transform298ZZZ.children[0] = TouchSensor299;

let Shape300 = browser.currentScene.createNode("Shape");
let Appearance301 = browser.currentScene.createNode("Appearance");
let Material302 = browser.currentScene.createNode("Material");
Material302.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material302;

appearance = Appearance301;

let Text303 = browser.currentScene.createNode("Text");
Text303.string = new X3D.MFString([new X3D.SFString("JinLidTightener")]);
let FontStyle304 = browser.currentScene.createNode("FontStyle");
FontStyle304.size = 2.4;
FontStyle304.spacing = 1.2;
FontStyle304.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle304;

geometry = Text303;

Transform298ZZZ.child[1] = Shape300;

let Shape305 = browser.currentScene.createNode("Shape");
let Appearance306 = browser.currentScene.createNode("Appearance");
let Material307 = browser.currentScene.createNode("Material");
Material307.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material307;

appearance = Appearance306;

let IndexedFaceSet308 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet308.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate309 = browser.currentScene.createNode("Coordinate");
Coordinate309.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate309;

geometry = IndexedFaceSet308;

Transform298ZZZ.child[2] = Shape305;

Group6ZZZ.children[31] = Transform298;

let ROUTE310 = browser.currentScene.createNode("ROUTE");
ROUTE310.fromNode = "JinLidTightener_Sensor";
ROUTE310.fromField = "touchTime";
ROUTE310.toNode = "Choice10";
ROUTE310.toField = "touchTime";
Group6ZZZ.children[32] = ROUTE310;

let ROUTE311 = browser.currentScene.createNode("ROUTE");
ROUTE311.fromNode = "Choice10";
ROUTE311.fromField = "choice";
ROUTE311.toNode = "SceneSwitcher";
ROUTE311.toField = "whichChoice";
Group6ZZZ.children[33] = ROUTE311;

let Transform312 = browser.currentScene.createNode("Transform");
Transform312.translation = new X3D.SFVec3f([48,30.399999999999995,0]);
let TouchSensor313 = browser.currentScene.createNode("TouchSensor");
TouchSensor313.description = "TSJinLipCornerDepressor";
TouchSensor313.DEF = "JinLipCornerDepressor_Sensor";
Transform312YYY.children = new X3D.MFNode();

Transform312ZZZ.children[0] = TouchSensor313;

let Shape314 = browser.currentScene.createNode("Shape");
let Appearance315 = browser.currentScene.createNode("Appearance");
let Material316 = browser.currentScene.createNode("Material");
Material316.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material316;

appearance = Appearance315;

let Text317 = browser.currentScene.createNode("Text");
Text317.string = new X3D.MFString([new X3D.SFString("JinLipCornerDepressor")]);
let FontStyle318 = browser.currentScene.createNode("FontStyle");
FontStyle318.size = 2.4;
FontStyle318.spacing = 1.2;
FontStyle318.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle318;

geometry = Text317;

Transform312ZZZ.child[1] = Shape314;

let Shape319 = browser.currentScene.createNode("Shape");
let Appearance320 = browser.currentScene.createNode("Appearance");
let Material321 = browser.currentScene.createNode("Material");
Material321.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material321;

appearance = Appearance320;

let IndexedFaceSet322 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet322.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate323 = browser.currentScene.createNode("Coordinate");
Coordinate323.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate323;

geometry = IndexedFaceSet322;

Transform312ZZZ.child[2] = Shape319;

Group6ZZZ.children[34] = Transform312;

let ROUTE324 = browser.currentScene.createNode("ROUTE");
ROUTE324.fromNode = "JinLipCornerDepressor_Sensor";
ROUTE324.fromField = "touchTime";
ROUTE324.toNode = "Choice11";
ROUTE324.toField = "touchTime";
Group6ZZZ.children[35] = ROUTE324;

let ROUTE325 = browser.currentScene.createNode("ROUTE");
ROUTE325.fromNode = "Choice11";
ROUTE325.fromField = "choice";
ROUTE325.toNode = "SceneSwitcher";
ROUTE325.toField = "whichChoice";
Group6ZZZ.children[36] = ROUTE325;

let Transform326 = browser.currentScene.createNode("Transform");
Transform326.translation = new X3D.SFVec3f([48,27.399999999999995,0]);
let TouchSensor327 = browser.currentScene.createNode("TouchSensor");
TouchSensor327.description = "TSJinLipCornerPuller";
TouchSensor327.DEF = "JinLipCornerPuller_Sensor";
Transform326YYY.children = new X3D.MFNode();

Transform326ZZZ.children[0] = TouchSensor327;

let Shape328 = browser.currentScene.createNode("Shape");
let Appearance329 = browser.currentScene.createNode("Appearance");
let Material330 = browser.currentScene.createNode("Material");
Material330.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material330;

appearance = Appearance329;

let Text331 = browser.currentScene.createNode("Text");
Text331.string = new X3D.MFString([new X3D.SFString("JinLipCornerPuller")]);
let FontStyle332 = browser.currentScene.createNode("FontStyle");
FontStyle332.size = 2.4;
FontStyle332.spacing = 1.2;
FontStyle332.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle332;

geometry = Text331;

Transform326ZZZ.child[1] = Shape328;

let Shape333 = browser.currentScene.createNode("Shape");
let Appearance334 = browser.currentScene.createNode("Appearance");
let Material335 = browser.currentScene.createNode("Material");
Material335.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material335;

appearance = Appearance334;

let IndexedFaceSet336 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet336.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate337 = browser.currentScene.createNode("Coordinate");
Coordinate337.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate337;

geometry = IndexedFaceSet336;

Transform326ZZZ.child[2] = Shape333;

Group6ZZZ.children[37] = Transform326;

let ROUTE338 = browser.currentScene.createNode("ROUTE");
ROUTE338.fromNode = "JinLipCornerPuller_Sensor";
ROUTE338.fromField = "touchTime";
ROUTE338.toNode = "Choice12";
ROUTE338.toField = "touchTime";
Group6ZZZ.children[38] = ROUTE338;

let ROUTE339 = browser.currentScene.createNode("ROUTE");
ROUTE339.fromNode = "Choice12";
ROUTE339.fromField = "choice";
ROUTE339.toNode = "SceneSwitcher";
ROUTE339.toField = "whichChoice";
Group6ZZZ.children[39] = ROUTE339;

let Transform340 = browser.currentScene.createNode("Transform");
Transform340.translation = new X3D.SFVec3f([48,24.399999999999995,0]);
let TouchSensor341 = browser.currentScene.createNode("TouchSensor");
TouchSensor341.description = "TSJinLipFunneler";
TouchSensor341.DEF = "JinLipFunneler_Sensor";
Transform340YYY.children = new X3D.MFNode();

Transform340ZZZ.children[0] = TouchSensor341;

let Shape342 = browser.currentScene.createNode("Shape");
let Appearance343 = browser.currentScene.createNode("Appearance");
let Material344 = browser.currentScene.createNode("Material");
Material344.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material344;

appearance = Appearance343;

let Text345 = browser.currentScene.createNode("Text");
Text345.string = new X3D.MFString([new X3D.SFString("JinLipFunneler")]);
let FontStyle346 = browser.currentScene.createNode("FontStyle");
FontStyle346.size = 2.4;
FontStyle346.spacing = 1.2;
FontStyle346.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle346;

geometry = Text345;

Transform340ZZZ.child[1] = Shape342;

let Shape347 = browser.currentScene.createNode("Shape");
let Appearance348 = browser.currentScene.createNode("Appearance");
let Material349 = browser.currentScene.createNode("Material");
Material349.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material349;

appearance = Appearance348;

let IndexedFaceSet350 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet350.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate351 = browser.currentScene.createNode("Coordinate");
Coordinate351.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate351;

geometry = IndexedFaceSet350;

Transform340ZZZ.child[2] = Shape347;

Group6ZZZ.children[40] = Transform340;

let ROUTE352 = browser.currentScene.createNode("ROUTE");
ROUTE352.fromNode = "JinLipFunneler_Sensor";
ROUTE352.fromField = "touchTime";
ROUTE352.toNode = "Choice13";
ROUTE352.toField = "touchTime";
Group6ZZZ.children[41] = ROUTE352;

let ROUTE353 = browser.currentScene.createNode("ROUTE");
ROUTE353.fromNode = "Choice13";
ROUTE353.fromField = "choice";
ROUTE353.toNode = "SceneSwitcher";
ROUTE353.toField = "whichChoice";
Group6ZZZ.children[42] = ROUTE353;

let Transform354 = browser.currentScene.createNode("Transform");
Transform354.translation = new X3D.SFVec3f([48,21.399999999999995,0]);
let TouchSensor355 = browser.currentScene.createNode("TouchSensor");
TouchSensor355.description = "TSJinLipPressor";
TouchSensor355.DEF = "JinLipPressor_Sensor";
Transform354YYY.children = new X3D.MFNode();

Transform354ZZZ.children[0] = TouchSensor355;

let Shape356 = browser.currentScene.createNode("Shape");
let Appearance357 = browser.currentScene.createNode("Appearance");
let Material358 = browser.currentScene.createNode("Material");
Material358.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material358;

appearance = Appearance357;

let Text359 = browser.currentScene.createNode("Text");
Text359.string = new X3D.MFString([new X3D.SFString("JinLipPressor")]);
let FontStyle360 = browser.currentScene.createNode("FontStyle");
FontStyle360.size = 2.4;
FontStyle360.spacing = 1.2;
FontStyle360.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle360;

geometry = Text359;

Transform354ZZZ.child[1] = Shape356;

let Shape361 = browser.currentScene.createNode("Shape");
let Appearance362 = browser.currentScene.createNode("Appearance");
let Material363 = browser.currentScene.createNode("Material");
Material363.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material363;

appearance = Appearance362;

let IndexedFaceSet364 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet364.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate365 = browser.currentScene.createNode("Coordinate");
Coordinate365.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate365;

geometry = IndexedFaceSet364;

Transform354ZZZ.child[2] = Shape361;

Group6ZZZ.children[43] = Transform354;

let ROUTE366 = browser.currentScene.createNode("ROUTE");
ROUTE366.fromNode = "JinLipPressor_Sensor";
ROUTE366.fromField = "touchTime";
ROUTE366.toNode = "Choice14";
ROUTE366.toField = "touchTime";
Group6ZZZ.children[44] = ROUTE366;

let ROUTE367 = browser.currentScene.createNode("ROUTE");
ROUTE367.fromNode = "Choice14";
ROUTE367.fromField = "choice";
ROUTE367.toNode = "SceneSwitcher";
ROUTE367.toField = "whichChoice";
Group6ZZZ.children[45] = ROUTE367;

let Transform368 = browser.currentScene.createNode("Transform");
Transform368.translation = new X3D.SFVec3f([48,18.4,0]);
let TouchSensor369 = browser.currentScene.createNode("TouchSensor");
TouchSensor369.description = "TSJinLipPuckerer";
TouchSensor369.DEF = "JinLipPuckerer_Sensor";
Transform368YYY.children = new X3D.MFNode();

Transform368ZZZ.children[0] = TouchSensor369;

let Shape370 = browser.currentScene.createNode("Shape");
let Appearance371 = browser.currentScene.createNode("Appearance");
let Material372 = browser.currentScene.createNode("Material");
Material372.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material372;

appearance = Appearance371;

let Text373 = browser.currentScene.createNode("Text");
Text373.string = new X3D.MFString([new X3D.SFString("JinLipPuckerer")]);
let FontStyle374 = browser.currentScene.createNode("FontStyle");
FontStyle374.size = 2.4;
FontStyle374.spacing = 1.2;
FontStyle374.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle374;

geometry = Text373;

Transform368ZZZ.child[1] = Shape370;

let Shape375 = browser.currentScene.createNode("Shape");
let Appearance376 = browser.currentScene.createNode("Appearance");
let Material377 = browser.currentScene.createNode("Material");
Material377.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material377;

appearance = Appearance376;

let IndexedFaceSet378 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet378.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate379 = browser.currentScene.createNode("Coordinate");
Coordinate379.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate379;

geometry = IndexedFaceSet378;

Transform368ZZZ.child[2] = Shape375;

Group6ZZZ.children[46] = Transform368;

let ROUTE380 = browser.currentScene.createNode("ROUTE");
ROUTE380.fromNode = "JinLipPuckerer_Sensor";
ROUTE380.fromField = "touchTime";
ROUTE380.toNode = "Choice15";
ROUTE380.toField = "touchTime";
Group6ZZZ.children[47] = ROUTE380;

let ROUTE381 = browser.currentScene.createNode("ROUTE");
ROUTE381.fromNode = "Choice15";
ROUTE381.fromField = "choice";
ROUTE381.toNode = "SceneSwitcher";
ROUTE381.toField = "whichChoice";
Group6ZZZ.children[48] = ROUTE381;

let Transform382 = browser.currentScene.createNode("Transform");
Transform382.translation = new X3D.SFVec3f([48,15.399999999999997,0]);
let TouchSensor383 = browser.currentScene.createNode("TouchSensor");
TouchSensor383.description = "TSJinLipsPart";
TouchSensor383.DEF = "JinLipsPart_Sensor";
Transform382YYY.children = new X3D.MFNode();

Transform382ZZZ.children[0] = TouchSensor383;

let Shape384 = browser.currentScene.createNode("Shape");
let Appearance385 = browser.currentScene.createNode("Appearance");
let Material386 = browser.currentScene.createNode("Material");
Material386.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material386;

appearance = Appearance385;

let Text387 = browser.currentScene.createNode("Text");
Text387.string = new X3D.MFString([new X3D.SFString("JinLipsPart")]);
let FontStyle388 = browser.currentScene.createNode("FontStyle");
FontStyle388.size = 2.4;
FontStyle388.spacing = 1.2;
FontStyle388.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle388;

geometry = Text387;

Transform382ZZZ.child[1] = Shape384;

let Shape389 = browser.currentScene.createNode("Shape");
let Appearance390 = browser.currentScene.createNode("Appearance");
let Material391 = browser.currentScene.createNode("Material");
Material391.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material391;

appearance = Appearance390;

let IndexedFaceSet392 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet392.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate393 = browser.currentScene.createNode("Coordinate");
Coordinate393.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate393;

geometry = IndexedFaceSet392;

Transform382ZZZ.child[2] = Shape389;

Group6ZZZ.children[49] = Transform382;

let ROUTE394 = browser.currentScene.createNode("ROUTE");
ROUTE394.fromNode = "JinLipsPart_Sensor";
ROUTE394.fromField = "touchTime";
ROUTE394.toNode = "Choice16";
ROUTE394.toField = "touchTime";
Group6ZZZ.children[50] = ROUTE394;

let ROUTE395 = browser.currentScene.createNode("ROUTE");
ROUTE395.fromNode = "Choice16";
ROUTE395.fromField = "choice";
ROUTE395.toNode = "SceneSwitcher";
ROUTE395.toField = "whichChoice";
Group6ZZZ.children[51] = ROUTE395;

let Transform396 = browser.currentScene.createNode("Transform");
Transform396.translation = new X3D.SFVec3f([48,12.399999999999999,0]);
let TouchSensor397 = browser.currentScene.createNode("TouchSensor");
TouchSensor397.description = "TSJinLipStretcher";
TouchSensor397.DEF = "JinLipStretcher_Sensor";
Transform396YYY.children = new X3D.MFNode();

Transform396ZZZ.children[0] = TouchSensor397;

let Shape398 = browser.currentScene.createNode("Shape");
let Appearance399 = browser.currentScene.createNode("Appearance");
let Material400 = browser.currentScene.createNode("Material");
Material400.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material400;

appearance = Appearance399;

let Text401 = browser.currentScene.createNode("Text");
Text401.string = new X3D.MFString([new X3D.SFString("JinLipStretcher")]);
let FontStyle402 = browser.currentScene.createNode("FontStyle");
FontStyle402.size = 2.4;
FontStyle402.spacing = 1.2;
FontStyle402.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle402;

geometry = Text401;

Transform396ZZZ.child[1] = Shape398;

let Shape403 = browser.currentScene.createNode("Shape");
let Appearance404 = browser.currentScene.createNode("Appearance");
let Material405 = browser.currentScene.createNode("Material");
Material405.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material405;

appearance = Appearance404;

let IndexedFaceSet406 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet406.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate407 = browser.currentScene.createNode("Coordinate");
Coordinate407.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate407;

geometry = IndexedFaceSet406;

Transform396ZZZ.child[2] = Shape403;

Group6ZZZ.children[52] = Transform396;

let ROUTE408 = browser.currentScene.createNode("ROUTE");
ROUTE408.fromNode = "JinLipStretcher_Sensor";
ROUTE408.fromField = "touchTime";
ROUTE408.toNode = "Choice17";
ROUTE408.toField = "touchTime";
Group6ZZZ.children[53] = ROUTE408;

let ROUTE409 = browser.currentScene.createNode("ROUTE");
ROUTE409.fromNode = "Choice17";
ROUTE409.fromField = "choice";
ROUTE409.toNode = "SceneSwitcher";
ROUTE409.toField = "whichChoice";
Group6ZZZ.children[54] = ROUTE409;

let Transform410 = browser.currentScene.createNode("Transform");
Transform410.translation = new X3D.SFVec3f([48,9.399999999999999,0]);
let TouchSensor411 = browser.currentScene.createNode("TouchSensor");
TouchSensor411.description = "TSJinLipSuck";
TouchSensor411.DEF = "JinLipSuck_Sensor";
Transform410YYY.children = new X3D.MFNode();

Transform410ZZZ.children[0] = TouchSensor411;

let Shape412 = browser.currentScene.createNode("Shape");
let Appearance413 = browser.currentScene.createNode("Appearance");
let Material414 = browser.currentScene.createNode("Material");
Material414.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material414;

appearance = Appearance413;

let Text415 = browser.currentScene.createNode("Text");
Text415.string = new X3D.MFString([new X3D.SFString("JinLipSuck")]);
let FontStyle416 = browser.currentScene.createNode("FontStyle");
FontStyle416.size = 2.4;
FontStyle416.spacing = 1.2;
FontStyle416.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle416;

geometry = Text415;

Transform410ZZZ.child[1] = Shape412;

let Shape417 = browser.currentScene.createNode("Shape");
let Appearance418 = browser.currentScene.createNode("Appearance");
let Material419 = browser.currentScene.createNode("Material");
Material419.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material419;

appearance = Appearance418;

let IndexedFaceSet420 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet420.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate421 = browser.currentScene.createNode("Coordinate");
Coordinate421.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate421;

geometry = IndexedFaceSet420;

Transform410ZZZ.child[2] = Shape417;

Group6ZZZ.children[55] = Transform410;

let ROUTE422 = browser.currentScene.createNode("ROUTE");
ROUTE422.fromNode = "JinLipSuck_Sensor";
ROUTE422.fromField = "touchTime";
ROUTE422.toNode = "Choice18";
ROUTE422.toField = "touchTime";
Group6ZZZ.children[56] = ROUTE422;

let ROUTE423 = browser.currentScene.createNode("ROUTE");
ROUTE423.fromNode = "Choice18";
ROUTE423.fromField = "choice";
ROUTE423.toNode = "SceneSwitcher";
ROUTE423.toField = "whichChoice";
Group6ZZZ.children[57] = ROUTE423;

let Transform424 = browser.currentScene.createNode("Transform");
Transform424.translation = new X3D.SFVec3f([48,6.399999999999999,0]);
let TouchSensor425 = browser.currentScene.createNode("TouchSensor");
TouchSensor425.description = "TSJinLipTightener";
TouchSensor425.DEF = "JinLipTightener_Sensor";
Transform424YYY.children = new X3D.MFNode();

Transform424ZZZ.children[0] = TouchSensor425;

let Shape426 = browser.currentScene.createNode("Shape");
let Appearance427 = browser.currentScene.createNode("Appearance");
let Material428 = browser.currentScene.createNode("Material");
Material428.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material428;

appearance = Appearance427;

let Text429 = browser.currentScene.createNode("Text");
Text429.string = new X3D.MFString([new X3D.SFString("JinLipTightener")]);
let FontStyle430 = browser.currentScene.createNode("FontStyle");
FontStyle430.size = 2.4;
FontStyle430.spacing = 1.2;
FontStyle430.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle430;

geometry = Text429;

Transform424ZZZ.child[1] = Shape426;

let Shape431 = browser.currentScene.createNode("Shape");
let Appearance432 = browser.currentScene.createNode("Appearance");
let Material433 = browser.currentScene.createNode("Material");
Material433.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material433;

appearance = Appearance432;

let IndexedFaceSet434 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet434.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate435 = browser.currentScene.createNode("Coordinate");
Coordinate435.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate435;

geometry = IndexedFaceSet434;

Transform424ZZZ.child[2] = Shape431;

Group6ZZZ.children[58] = Transform424;

let ROUTE436 = browser.currentScene.createNode("ROUTE");
ROUTE436.fromNode = "JinLipTightener_Sensor";
ROUTE436.fromField = "touchTime";
ROUTE436.toNode = "Choice19";
ROUTE436.toField = "touchTime";
Group6ZZZ.children[59] = ROUTE436;

let ROUTE437 = browser.currentScene.createNode("ROUTE");
ROUTE437.fromNode = "Choice19";
ROUTE437.fromField = "choice";
ROUTE437.toNode = "SceneSwitcher";
ROUTE437.toField = "whichChoice";
Group6ZZZ.children[60] = ROUTE437;

let Transform438 = browser.currentScene.createNode("Transform");
Transform438.translation = new X3D.SFVec3f([48,3.399999999999995,0]);
let TouchSensor439 = browser.currentScene.createNode("TouchSensor");
TouchSensor439.description = "TSJinLowerLipDepressor";
TouchSensor439.DEF = "JinLowerLipDepressor_Sensor";
Transform438YYY.children = new X3D.MFNode();

Transform438ZZZ.children[0] = TouchSensor439;

let Shape440 = browser.currentScene.createNode("Shape");
let Appearance441 = browser.currentScene.createNode("Appearance");
let Material442 = browser.currentScene.createNode("Material");
Material442.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material442;

appearance = Appearance441;

let Text443 = browser.currentScene.createNode("Text");
Text443.string = new X3D.MFString([new X3D.SFString("JinLowerLipDepressor")]);
let FontStyle444 = browser.currentScene.createNode("FontStyle");
FontStyle444.size = 2.4;
FontStyle444.spacing = 1.2;
FontStyle444.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle444;

geometry = Text443;

Transform438ZZZ.child[1] = Shape440;

let Shape445 = browser.currentScene.createNode("Shape");
let Appearance446 = browser.currentScene.createNode("Appearance");
let Material447 = browser.currentScene.createNode("Material");
Material447.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material447;

appearance = Appearance446;

let IndexedFaceSet448 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet448.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate449 = browser.currentScene.createNode("Coordinate");
Coordinate449.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate449;

geometry = IndexedFaceSet448;

Transform438ZZZ.child[2] = Shape445;

Group6ZZZ.children[61] = Transform438;

let ROUTE450 = browser.currentScene.createNode("ROUTE");
ROUTE450.fromNode = "JinLowerLipDepressor_Sensor";
ROUTE450.fromField = "touchTime";
ROUTE450.toNode = "Choice20";
ROUTE450.toField = "touchTime";
Group6ZZZ.children[62] = ROUTE450;

let ROUTE451 = browser.currentScene.createNode("ROUTE");
ROUTE451.fromNode = "Choice20";
ROUTE451.fromField = "choice";
ROUTE451.toNode = "SceneSwitcher";
ROUTE451.toField = "whichChoice";
Group6ZZZ.children[63] = ROUTE451;

let Transform452 = browser.currentScene.createNode("Transform");
Transform452.translation = new X3D.SFVec3f([48,0.399999999999995,0]);
let TouchSensor453 = browser.currentScene.createNode("TouchSensor");
TouchSensor453.description = "TSJinMouthStretch";
TouchSensor453.DEF = "JinMouthStretch_Sensor";
Transform452YYY.children = new X3D.MFNode();

Transform452ZZZ.children[0] = TouchSensor453;

let Shape454 = browser.currentScene.createNode("Shape");
let Appearance455 = browser.currentScene.createNode("Appearance");
let Material456 = browser.currentScene.createNode("Material");
Material456.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material456;

appearance = Appearance455;

let Text457 = browser.currentScene.createNode("Text");
Text457.string = new X3D.MFString([new X3D.SFString("JinMouthStretch")]);
let FontStyle458 = browser.currentScene.createNode("FontStyle");
FontStyle458.size = 2.4;
FontStyle458.spacing = 1.2;
FontStyle458.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle458;

geometry = Text457;

Transform452ZZZ.child[1] = Shape454;

let Shape459 = browser.currentScene.createNode("Shape");
let Appearance460 = browser.currentScene.createNode("Appearance");
let Material461 = browser.currentScene.createNode("Material");
Material461.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material461;

appearance = Appearance460;

let IndexedFaceSet462 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet462.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate463 = browser.currentScene.createNode("Coordinate");
Coordinate463.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate463;

geometry = IndexedFaceSet462;

Transform452ZZZ.child[2] = Shape459;

Group6ZZZ.children[64] = Transform452;

let ROUTE464 = browser.currentScene.createNode("ROUTE");
ROUTE464.fromNode = "JinMouthStretch_Sensor";
ROUTE464.fromField = "touchTime";
ROUTE464.toNode = "Choice21";
ROUTE464.toField = "touchTime";
Group6ZZZ.children[65] = ROUTE464;

let ROUTE465 = browser.currentScene.createNode("ROUTE");
ROUTE465.fromNode = "Choice21";
ROUTE465.fromField = "choice";
ROUTE465.toNode = "SceneSwitcher";
ROUTE465.toField = "whichChoice";
Group6ZZZ.children[66] = ROUTE465;

let Transform466 = browser.currentScene.createNode("Transform");
Transform466.translation = new X3D.SFVec3f([48,-2.6000000000000085,0]);
let TouchSensor467 = browser.currentScene.createNode("TouchSensor");
TouchSensor467.description = "TSJinNasolabialDeepener";
TouchSensor467.DEF = "JinNasolabialDeepener_Sensor";
Transform466YYY.children = new X3D.MFNode();

Transform466ZZZ.children[0] = TouchSensor467;

let Shape468 = browser.currentScene.createNode("Shape");
let Appearance469 = browser.currentScene.createNode("Appearance");
let Material470 = browser.currentScene.createNode("Material");
Material470.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material470;

appearance = Appearance469;

let Text471 = browser.currentScene.createNode("Text");
Text471.string = new X3D.MFString([new X3D.SFString("JinNasolabialDeepener")]);
let FontStyle472 = browser.currentScene.createNode("FontStyle");
FontStyle472.size = 2.4;
FontStyle472.spacing = 1.2;
FontStyle472.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle472;

geometry = Text471;

Transform466ZZZ.child[1] = Shape468;

let Shape473 = browser.currentScene.createNode("Shape");
let Appearance474 = browser.currentScene.createNode("Appearance");
let Material475 = browser.currentScene.createNode("Material");
Material475.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material475;

appearance = Appearance474;

let IndexedFaceSet476 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet476.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate477 = browser.currentScene.createNode("Coordinate");
Coordinate477.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate477;

geometry = IndexedFaceSet476;

Transform466ZZZ.child[2] = Shape473;

Group6ZZZ.children[67] = Transform466;

let ROUTE478 = browser.currentScene.createNode("ROUTE");
ROUTE478.fromNode = "JinNasolabialDeepener_Sensor";
ROUTE478.fromField = "touchTime";
ROUTE478.toNode = "Choice22";
ROUTE478.toField = "touchTime";
Group6ZZZ.children[68] = ROUTE478;

let ROUTE479 = browser.currentScene.createNode("ROUTE");
ROUTE479.fromNode = "Choice22";
ROUTE479.fromField = "choice";
ROUTE479.toNode = "SceneSwitcher";
ROUTE479.toField = "whichChoice";
Group6ZZZ.children[69] = ROUTE479;

let Transform480 = browser.currentScene.createNode("Transform");
Transform480.translation = new X3D.SFVec3f([48,-5.6000000000000085,0]);
let TouchSensor481 = browser.currentScene.createNode("TouchSensor");
TouchSensor481.description = "TSJinNoseWrinkler";
TouchSensor481.DEF = "JinNoseWrinkler_Sensor";
Transform480YYY.children = new X3D.MFNode();

Transform480ZZZ.children[0] = TouchSensor481;

let Shape482 = browser.currentScene.createNode("Shape");
let Appearance483 = browser.currentScene.createNode("Appearance");
let Material484 = browser.currentScene.createNode("Material");
Material484.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material484;

appearance = Appearance483;

let Text485 = browser.currentScene.createNode("Text");
Text485.string = new X3D.MFString([new X3D.SFString("JinNoseWrinkler")]);
let FontStyle486 = browser.currentScene.createNode("FontStyle");
FontStyle486.size = 2.4;
FontStyle486.spacing = 1.2;
FontStyle486.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle486;

geometry = Text485;

Transform480ZZZ.child[1] = Shape482;

let Shape487 = browser.currentScene.createNode("Shape");
let Appearance488 = browser.currentScene.createNode("Appearance");
let Material489 = browser.currentScene.createNode("Material");
Material489.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material489;

appearance = Appearance488;

let IndexedFaceSet490 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet490.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate491 = browser.currentScene.createNode("Coordinate");
Coordinate491.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate491;

geometry = IndexedFaceSet490;

Transform480ZZZ.child[2] = Shape487;

Group6ZZZ.children[70] = Transform480;

let ROUTE492 = browser.currentScene.createNode("ROUTE");
ROUTE492.fromNode = "JinNoseWrinkler_Sensor";
ROUTE492.fromField = "touchTime";
ROUTE492.toNode = "Choice23";
ROUTE492.toField = "touchTime";
Group6ZZZ.children[71] = ROUTE492;

let ROUTE493 = browser.currentScene.createNode("ROUTE");
ROUTE493.fromNode = "Choice23";
ROUTE493.fromField = "choice";
ROUTE493.toNode = "SceneSwitcher";
ROUTE493.toField = "whichChoice";
Group6ZZZ.children[72] = ROUTE493;

let Transform494 = browser.currentScene.createNode("Transform");
Transform494.translation = new X3D.SFVec3f([48,-8.600000000000009,0]);
let TouchSensor495 = browser.currentScene.createNode("TouchSensor");
TouchSensor495.description = "TSJinOuterBrowRaiser";
TouchSensor495.DEF = "JinOuterBrowRaiser_Sensor";
Transform494YYY.children = new X3D.MFNode();

Transform494ZZZ.children[0] = TouchSensor495;

let Shape496 = browser.currentScene.createNode("Shape");
let Appearance497 = browser.currentScene.createNode("Appearance");
let Material498 = browser.currentScene.createNode("Material");
Material498.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material498;

appearance = Appearance497;

let Text499 = browser.currentScene.createNode("Text");
Text499.string = new X3D.MFString([new X3D.SFString("JinOuterBrowRaiser")]);
let FontStyle500 = browser.currentScene.createNode("FontStyle");
FontStyle500.size = 2.4;
FontStyle500.spacing = 1.2;
FontStyle500.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle500;

geometry = Text499;

Transform494ZZZ.child[1] = Shape496;

let Shape501 = browser.currentScene.createNode("Shape");
let Appearance502 = browser.currentScene.createNode("Appearance");
let Material503 = browser.currentScene.createNode("Material");
Material503.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material503;

appearance = Appearance502;

let IndexedFaceSet504 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet504.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate505 = browser.currentScene.createNode("Coordinate");
Coordinate505.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate505;

geometry = IndexedFaceSet504;

Transform494ZZZ.child[2] = Shape501;

Group6ZZZ.children[73] = Transform494;

let ROUTE506 = browser.currentScene.createNode("ROUTE");
ROUTE506.fromNode = "JinOuterBrowRaiser_Sensor";
ROUTE506.fromField = "touchTime";
ROUTE506.toNode = "Choice24";
ROUTE506.toField = "touchTime";
Group6ZZZ.children[74] = ROUTE506;

let ROUTE507 = browser.currentScene.createNode("ROUTE");
ROUTE507.fromNode = "Choice24";
ROUTE507.fromField = "choice";
ROUTE507.toNode = "SceneSwitcher";
ROUTE507.toField = "whichChoice";
Group6ZZZ.children[75] = ROUTE507;

let Transform508 = browser.currentScene.createNode("Transform");
Transform508.translation = new X3D.SFVec3f([48,-11.600000000000009,0]);
let TouchSensor509 = browser.currentScene.createNode("TouchSensor");
TouchSensor509.description = "TSJinSlit";
TouchSensor509.DEF = "JinSlit_Sensor";
Transform508YYY.children = new X3D.MFNode();

Transform508ZZZ.children[0] = TouchSensor509;

let Shape510 = browser.currentScene.createNode("Shape");
let Appearance511 = browser.currentScene.createNode("Appearance");
let Material512 = browser.currentScene.createNode("Material");
Material512.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material512;

appearance = Appearance511;

let Text513 = browser.currentScene.createNode("Text");
Text513.string = new X3D.MFString([new X3D.SFString("JinSlit")]);
let FontStyle514 = browser.currentScene.createNode("FontStyle");
FontStyle514.size = 2.4;
FontStyle514.spacing = 1.2;
FontStyle514.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle514;

geometry = Text513;

Transform508ZZZ.child[1] = Shape510;

let Shape515 = browser.currentScene.createNode("Shape");
let Appearance516 = browser.currentScene.createNode("Appearance");
let Material517 = browser.currentScene.createNode("Material");
Material517.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material517;

appearance = Appearance516;

let IndexedFaceSet518 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet518.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate519 = browser.currentScene.createNode("Coordinate");
Coordinate519.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate519;

geometry = IndexedFaceSet518;

Transform508ZZZ.child[2] = Shape515;

Group6ZZZ.children[76] = Transform508;

let ROUTE520 = browser.currentScene.createNode("ROUTE");
ROUTE520.fromNode = "JinSlit_Sensor";
ROUTE520.fromField = "touchTime";
ROUTE520.toNode = "Choice25";
ROUTE520.toField = "touchTime";
Group6ZZZ.children[77] = ROUTE520;

let ROUTE521 = browser.currentScene.createNode("ROUTE");
ROUTE521.fromNode = "Choice25";
ROUTE521.fromField = "choice";
ROUTE521.toNode = "SceneSwitcher";
ROUTE521.toField = "whichChoice";
Group6ZZZ.children[78] = ROUTE521;

let Transform522 = browser.currentScene.createNode("Transform");
Transform522.translation = new X3D.SFVec3f([48,-14.600000000000001,0]);
let TouchSensor523 = browser.currentScene.createNode("TouchSensor");
TouchSensor523.description = "TSJinSquint";
TouchSensor523.DEF = "JinSquint_Sensor";
Transform522YYY.children = new X3D.MFNode();

Transform522ZZZ.children[0] = TouchSensor523;

let Shape524 = browser.currentScene.createNode("Shape");
let Appearance525 = browser.currentScene.createNode("Appearance");
let Material526 = browser.currentScene.createNode("Material");
Material526.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material526;

appearance = Appearance525;

let Text527 = browser.currentScene.createNode("Text");
Text527.string = new X3D.MFString([new X3D.SFString("JinSquint")]);
let FontStyle528 = browser.currentScene.createNode("FontStyle");
FontStyle528.size = 2.4;
FontStyle528.spacing = 1.2;
FontStyle528.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle528;

geometry = Text527;

Transform522ZZZ.child[1] = Shape524;

let Shape529 = browser.currentScene.createNode("Shape");
let Appearance530 = browser.currentScene.createNode("Appearance");
let Material531 = browser.currentScene.createNode("Material");
Material531.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material531;

appearance = Appearance530;

let IndexedFaceSet532 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet532.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate533 = browser.currentScene.createNode("Coordinate");
Coordinate533.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate533;

geometry = IndexedFaceSet532;

Transform522ZZZ.child[2] = Shape529;

Group6ZZZ.children[79] = Transform522;

let ROUTE534 = browser.currentScene.createNode("ROUTE");
ROUTE534.fromNode = "JinSquint_Sensor";
ROUTE534.fromField = "touchTime";
ROUTE534.toNode = "Choice26";
ROUTE534.toField = "touchTime";
Group6ZZZ.children[80] = ROUTE534;

let ROUTE535 = browser.currentScene.createNode("ROUTE");
ROUTE535.fromNode = "Choice26";
ROUTE535.fromField = "choice";
ROUTE535.toNode = "SceneSwitcher";
ROUTE535.toField = "whichChoice";
Group6ZZZ.children[81] = ROUTE535;

let Transform536 = browser.currentScene.createNode("Transform");
Transform536.translation = new X3D.SFVec3f([48,-17.6,0]);
let TouchSensor537 = browser.currentScene.createNode("TouchSensor");
TouchSensor537.description = "TSJinUpperLidRaiser";
TouchSensor537.DEF = "JinUpperLidRaiser_Sensor";
Transform536YYY.children = new X3D.MFNode();

Transform536ZZZ.children[0] = TouchSensor537;

let Shape538 = browser.currentScene.createNode("Shape");
let Appearance539 = browser.currentScene.createNode("Appearance");
let Material540 = browser.currentScene.createNode("Material");
Material540.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material540;

appearance = Appearance539;

let Text541 = browser.currentScene.createNode("Text");
Text541.string = new X3D.MFString([new X3D.SFString("JinUpperLidRaiser")]);
let FontStyle542 = browser.currentScene.createNode("FontStyle");
FontStyle542.size = 2.4;
FontStyle542.spacing = 1.2;
FontStyle542.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle542;

geometry = Text541;

Transform536ZZZ.child[1] = Shape538;

let Shape543 = browser.currentScene.createNode("Shape");
let Appearance544 = browser.currentScene.createNode("Appearance");
let Material545 = browser.currentScene.createNode("Material");
Material545.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material545;

appearance = Appearance544;

let IndexedFaceSet546 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet546.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate547 = browser.currentScene.createNode("Coordinate");
Coordinate547.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate547;

geometry = IndexedFaceSet546;

Transform536ZZZ.child[2] = Shape543;

Group6ZZZ.children[82] = Transform536;

let ROUTE548 = browser.currentScene.createNode("ROUTE");
ROUTE548.fromNode = "JinUpperLidRaiser_Sensor";
ROUTE548.fromField = "touchTime";
ROUTE548.toNode = "Choice27";
ROUTE548.toField = "touchTime";
Group6ZZZ.children[83] = ROUTE548;

let ROUTE549 = browser.currentScene.createNode("ROUTE");
ROUTE549.fromNode = "Choice27";
ROUTE549.fromField = "choice";
ROUTE549.toNode = "SceneSwitcher";
ROUTE549.toField = "whichChoice";
Group6ZZZ.children[84] = ROUTE549;

let Transform550 = browser.currentScene.createNode("Transform");
Transform550.translation = new X3D.SFVec3f([48,-20.6,0]);
let TouchSensor551 = browser.currentScene.createNode("TouchSensor");
TouchSensor551.description = "TSJinUpperLipRaiser";
TouchSensor551.DEF = "JinUpperLipRaiser_Sensor";
Transform550YYY.children = new X3D.MFNode();

Transform550ZZZ.children[0] = TouchSensor551;

let Shape552 = browser.currentScene.createNode("Shape");
let Appearance553 = browser.currentScene.createNode("Appearance");
let Material554 = browser.currentScene.createNode("Material");
Material554.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material554;

appearance = Appearance553;

let Text555 = browser.currentScene.createNode("Text");
Text555.string = new X3D.MFString([new X3D.SFString("JinUpperLipRaiser")]);
let FontStyle556 = browser.currentScene.createNode("FontStyle");
FontStyle556.size = 2.4;
FontStyle556.spacing = 1.2;
FontStyle556.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle556;

geometry = Text555;

Transform550ZZZ.child[1] = Shape552;

let Shape557 = browser.currentScene.createNode("Shape");
let Appearance558 = browser.currentScene.createNode("Appearance");
let Material559 = browser.currentScene.createNode("Material");
Material559.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material559;

appearance = Appearance558;

let IndexedFaceSet560 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet560.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate561 = browser.currentScene.createNode("Coordinate");
Coordinate561.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate561;

geometry = IndexedFaceSet560;

Transform550ZZZ.child[2] = Shape557;

Group6ZZZ.children[85] = Transform550;

let ROUTE562 = browser.currentScene.createNode("ROUTE");
ROUTE562.fromNode = "JinUpperLipRaiser_Sensor";
ROUTE562.fromField = "touchTime";
ROUTE562.toNode = "Choice28";
ROUTE562.toField = "touchTime";
Group6ZZZ.children[86] = ROUTE562;

let ROUTE563 = browser.currentScene.createNode("ROUTE");
ROUTE563.fromNode = "Choice28";
ROUTE563.fromField = "choice";
ROUTE563.toNode = "SceneSwitcher";
ROUTE563.toField = "whichChoice";
Group6ZZZ.children[87] = ROUTE563;

let Transform564 = browser.currentScene.createNode("Transform");
Transform564.translation = new X3D.SFVec3f([48,-23.599999999999994,0]);
let TouchSensor565 = browser.currentScene.createNode("TouchSensor");
TouchSensor565.description = "TSJinWink";
TouchSensor565.DEF = "JinWink_Sensor";
Transform564YYY.children = new X3D.MFNode();

Transform564ZZZ.children[0] = TouchSensor565;

let Shape566 = browser.currentScene.createNode("Shape");
let Appearance567 = browser.currentScene.createNode("Appearance");
let Material568 = browser.currentScene.createNode("Material");
Material568.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material568;

appearance = Appearance567;

let Text569 = browser.currentScene.createNode("Text");
Text569.string = new X3D.MFString([new X3D.SFString("JinWink")]);
let FontStyle570 = browser.currentScene.createNode("FontStyle");
FontStyle570.size = 2.4;
FontStyle570.spacing = 1.2;
FontStyle570.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle570;

geometry = Text569;

Transform564ZZZ.child[1] = Shape566;

let Shape571 = browser.currentScene.createNode("Shape");
let Appearance572 = browser.currentScene.createNode("Appearance");
let Material573 = browser.currentScene.createNode("Material");
Material573.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material573;

appearance = Appearance572;

let IndexedFaceSet574 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet574.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate575 = browser.currentScene.createNode("Coordinate");
Coordinate575.point = new X3D.MFVec3f([20,1.3833333333333333,-0.1,-20,1.3833333333333333,-0.1,-20,-1.616666666666667,-0.1,20,-1.616666666666667,-0.1]);
coord = Coordinate575;

geometry = IndexedFaceSet574;

Transform564ZZZ.child[2] = Shape571;

Group6ZZZ.children[88] = Transform564;

let ROUTE576 = browser.currentScene.createNode("ROUTE");
ROUTE576.fromNode = "JinWink_Sensor";
ROUTE576.fromField = "touchTime";
ROUTE576.toNode = "Choice29";
ROUTE576.toField = "touchTime";
Group6ZZZ.children[89] = ROUTE576;

let ROUTE577 = browser.currentScene.createNode("ROUTE");
ROUTE577.fromNode = "Choice29";
ROUTE577.fromField = "choice";
ROUTE577.toNode = "SceneSwitcher";
ROUTE577.toField = "whichChoice";
Group6ZZZ.children[90] = ROUTE577;

browser.currentScene.children[1] = Group6;

}
main ();
