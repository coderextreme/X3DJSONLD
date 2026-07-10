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

//Menu prototype declaration
let ProtoDeclare6 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Menu" ><ProtoInterface><field name="menuItems" type="MFString" accessType="initializeOnly"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="TextMenuTransform" translation="48 27 0"><TouchSensor DEF="MenuTouchSensor"></TouchSensor>
<Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 1 1"></Material>
</Appearance>
<Text DEF="MenuText"><IS><connect nodeField="string" protoField="menuItems"></connect>
</IS>
<FontStyle containerField="fontStyle" size="2.4" spacing="1.2" justify="&quot;MIDDLE&quot; &quot;MIDDLE&quot;"></FontStyle>
</Text>
</Shape>
<Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0 1"></Material>
</Appearance>
<IndexedFaceSet DEF="Backing" coordIndex="0 1 2 3 -1"><Coordinate point="25 36 -0.01 -25 36 -0.01 -25 -51 -0.01 25 -51 -0.01"></Coordinate>
</IndexedFaceSet>
</Shape>
</Transform>
<Switch DEF="SceneSwitcher" whichChoice="0"><Inline DEF="OPTION1" url="&quot;../resources/JinInnerBrowRaiser.x3d&quot; &quot;JinInnerBrowRaiser.x3d&quot;"></Inline>
<Inline DEF="OPTION2" url="&quot;../resources/JinOuterBrowRaiser.x3d&quot; &quot;JinOuterBrowRaiser.x3d&quot;"></Inline>
<Inline DEF="OPTION3" url="&quot;../resources/JinBrowLowerer.x3d&quot; &quot;JinBrowLowerer.x3d&quot;"></Inline>
<Inline DEF="OPTION4" url="&quot;../resources/JinUpperLidRaiser.x3d&quot; &quot;JinUpperLidRaiser.x3d&quot;"></Inline>
<Inline DEF="OPTION5" url="&quot;../resources/JinCheekRaiser.x3d&quot; &quot;JinCheekRaiser.x3d&quot;"></Inline>
<Inline DEF="OPTION6" url="&quot;../resources/JinLidTightener.x3d&quot; &quot;JinLidTightener.x3d&quot;"></Inline>
<Inline DEF="OPTION7" url="&quot;../resources/JinNoseWrinkler.x3d&quot; &quot;JinNoseWrinkler.x3d&quot;"></Inline>
<Inline DEF="OPTION8" url="&quot;../resources/JinUpperLipRaiser.x3d&quot; &quot;JinUpperLipRaiser.x3d&quot;"></Inline>
<Inline DEF="OPTION9" url="&quot;../resources/JinNasolabialDeepener.x3d&quot; &quot;JinNasolabialDeepener.x3d&quot;"></Inline>
<Inline DEF="OPTION10" url="&quot;../resources/JinLipCornerPuller.x3d&quot; &quot;JinLipCornerPuller.x3d&quot;"></Inline>
<Inline DEF="OPTION11" url="&quot;../resources/JinCheekPuffer.x3d&quot; &quot;JinCheekPuffer.x3d&quot;"></Inline>
<Inline DEF="OPTION12" url="&quot;../resources/JinDimpler.x3d&quot; &quot;JinDimpler.x3d&quot;"></Inline>
<Inline DEF="OPTION13" url="&quot;../resources/JinLipCornerDepressor.x3d&quot; &quot;JinLipCornerDepressor.x3d&quot;"></Inline>
<Inline DEF="OPTION14" url="&quot;../resources/JinLowerLipDepressor.x3d&quot; &quot;JinLowerLipDepressor.x3d&quot;"></Inline>
<Inline DEF="OPTION15" url="&quot;../resources/JinChinRaiser.x3d&quot; &quot;JinChinRaiser.x3d&quot;"></Inline>
<Inline DEF="OPTION16" url="&quot;../resources/JinLipPuckerer.x3d&quot; &quot;JinLipPuckerer.x3d&quot;"></Inline>
<Inline DEF="OPTION17" url="&quot;../resources/JinLipStretcher.x3d&quot; &quot;JinLipStretcher.x3d&quot;"></Inline>
<Inline DEF="OPTION18" url="&quot;../resources/JinLipFunneler.x3d&quot; &quot;JinLipFunneler.x3d&quot;"></Inline>
<Inline DEF="OPTION19" url="&quot;../resources/JinLipTightener.x3d&quot; &quot;JinLipTightener.x3d&quot;"></Inline>
<Inline DEF="OPTION20" url="&quot;../resources/JinLipPressor.x3d&quot; &quot;JinLipPressor.x3d&quot;"></Inline>
<Inline DEF="OPTION21" url="&quot;../resources/JinLipsPart.x3d&quot; &quot;JinLipsPart.x3d&quot;"></Inline>
<Inline DEF="OPTION22" url="&quot;../resources/JinJawDrop.x3d&quot; &quot;JinJawDrop.x3d&quot;"></Inline>
<Inline DEF="OPTION23" url="&quot;../resources/JinMouthStretch.x3d&quot; &quot;JinMouthStretch.x3d&quot;"></Inline>
<Inline DEF="OPTION24" url="&quot;../resources/JinLipSuck.x3d&quot; &quot;JinLipSuck.x3d&quot;"></Inline>
<Inline DEF="OPTION25" url="&quot;../resources/JinLidDroop.x3d&quot; &quot;JinLidDroop.x3d&quot;"></Inline>
<Inline DEF="OPTION26" url="&quot;../resources/JinSlit.x3d&quot; &quot;JinSlit.x3d&quot;"></Inline>
<Inline DEF="OPTION27" url="&quot;../resources/JinEyesClosed.x3d&quot; &quot;JinEyesClosed.x3d&quot;"></Inline>
<Inline DEF="OPTION28" url="&quot;../resources/JinSquint.x3d&quot; &quot;JinSquint.x3d&quot;"></Inline>
<Inline DEF="OPTION29" url="&quot;../resources/JinBlink.x3d&quot; &quot;JinBlink.x3d&quot;"></Inline>
<Inline DEF="OPTION30" url="&quot;../resources/JinWink.x3d&quot; &quot;JinWink.x3d&quot;"></Inline>
</Switch>
<!--Script to handle selection logic--><Script DEF="MenuScript"><field name="menuItems" type="MFString" accessType="initializeOnly"></field>
<field name="selection" type="SFInt32" accessType="outputOnly"></field>
<field name="touchPoint" type="SFVec3f" accessType="inputOnly"></field>
<field name="spacing" type="SFFloat" accessType="initializeOnly" value="1.2"></field>
<field name="size" type="SFFloat" accessType="initializeOnly" value="2.4"></field>
<field name="menuCenterY" type="SFFloat" accessType="initializeOnly"></field>
<field name="itemHeight" type="SFFloat" accessType="initializeOnly"></field>
<IS><connect nodeField="menuItems" protoField="menuItems"></connect>
</IS>
<![CDATA[ecmascript:
        function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        function touchPoint(value) {
          Browser.print("Hit "+value+" "+selection+"
");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print("Selected "+value+" "+selection+" "+menuItems[selection]+"
");
          }
        }]]></Script>
<!--ROUTEs to connect everything--><ROUTE fromNode="MenuTouchSensor" fromField="hitPoint_changed" toNode="MenuScript" toField="touchPoint"></ROUTE>
<ROUTE fromNode="MenuScript" fromField="selection" toNode="SceneSwitcher" toField="whichChoice"></ROUTE>
</Group>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare6.name = "Menu";
ProtoInterface8.getField("menuItems")ProtoInterface7YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface7;

let ProtoBody9 = browser.currentScene.createNode("ProtoBody");
let Group10 = browser.currentScene.createNode("Group");
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "TextMenuTransform";
Transform11.translation = new X3D.SFVec3f([48,27,0]);
let TouchSensor12 = browser.currentScene.createNode("TouchSensor");
TouchSensor12.DEF = "MenuTouchSensor";
Transform11YYY.children = new X3D.MFNode();

Transform11ZZZ.children[0] = TouchSensor12;

let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new X3D.SFColor([1,1,1]);
material = Material15;

appearance = Appearance14;

let Text16 = browser.currentScene.createNode("Text");
Text16.DEF = "MenuText";
let IS17 = browser.currentScene.createNode("IS");
let connect18 = browser.currentScene.createNode("connect");
connect18.nodeField = "string";
connect18.protoField = "menuItems";
IS17YYY.connect = new X3D.MFNode();

IS17ZZZ.connect[0] = connect18;

iS = IS17;

let FontStyle19 = browser.currentScene.createNode("FontStyle");
FontStyle19.size = 2.4;
FontStyle19.spacing = 1.2;
FontStyle19.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle19;

geometry = Text16;

Transform11ZZZ.child[1] = Shape13;

let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new X3D.SFColor([0,0,1]);
material = Material22;

appearance = Appearance21;

let IndexedFaceSet23 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet23.DEF = "Backing";
IndexedFaceSet23.coordIndex = new X3D.MFInt32([0,1,2,3,-1]);
let Coordinate24 = browser.currentScene.createNode("Coordinate");
Coordinate24.point = new X3D.MFVec3f([25,36,-0.01,-25,36,-0.01,-25,-51,-0.01,25,-51,-0.01]);
coord = Coordinate24;

geometry = IndexedFaceSet23;

Transform11ZZZ.child[2] = Shape20;

Group10YYY.children = new X3D.MFNode();

Group10ZZZ.children[0] = Transform11;

let Switch25 = browser.currentScene.createNode("Switch");
Switch25.DEF = "SceneSwitcher";
Switch25.whichChoice = 0;
let Inline26 = browser.currentScene.createNode("Inline");
Inline26.DEF = "OPTION1";
Inline26.url = new X3D.MFString([new X3D.SFString("../resources/JinInnerBrowRaiser.x3d"), new X3D.SFString("JinInnerBrowRaiser.x3d")]);
Switch25YYY.children = new X3D.MFNode();

Switch25ZZZ.children[0] = Inline26;

let Inline27 = browser.currentScene.createNode("Inline");
Inline27.DEF = "OPTION2";
Inline27.url = new X3D.MFString([new X3D.SFString("../resources/JinOuterBrowRaiser.x3d"), new X3D.SFString("JinOuterBrowRaiser.x3d")]);
Switch25ZZZ.children[1] = Inline27;

let Inline28 = browser.currentScene.createNode("Inline");
Inline28.DEF = "OPTION3";
Inline28.url = new X3D.MFString([new X3D.SFString("../resources/JinBrowLowerer.x3d"), new X3D.SFString("JinBrowLowerer.x3d")]);
Switch25ZZZ.children[2] = Inline28;

let Inline29 = browser.currentScene.createNode("Inline");
Inline29.DEF = "OPTION4";
Inline29.url = new X3D.MFString([new X3D.SFString("../resources/JinUpperLidRaiser.x3d"), new X3D.SFString("JinUpperLidRaiser.x3d")]);
Switch25ZZZ.children[3] = Inline29;

let Inline30 = browser.currentScene.createNode("Inline");
Inline30.DEF = "OPTION5";
Inline30.url = new X3D.MFString([new X3D.SFString("../resources/JinCheekRaiser.x3d"), new X3D.SFString("JinCheekRaiser.x3d")]);
Switch25ZZZ.children[4] = Inline30;

let Inline31 = browser.currentScene.createNode("Inline");
Inline31.DEF = "OPTION6";
Inline31.url = new X3D.MFString([new X3D.SFString("../resources/JinLidTightener.x3d"), new X3D.SFString("JinLidTightener.x3d")]);
Switch25ZZZ.children[5] = Inline31;

let Inline32 = browser.currentScene.createNode("Inline");
Inline32.DEF = "OPTION7";
Inline32.url = new X3D.MFString([new X3D.SFString("../resources/JinNoseWrinkler.x3d"), new X3D.SFString("JinNoseWrinkler.x3d")]);
Switch25ZZZ.children[6] = Inline32;

let Inline33 = browser.currentScene.createNode("Inline");
Inline33.DEF = "OPTION8";
Inline33.url = new X3D.MFString([new X3D.SFString("../resources/JinUpperLipRaiser.x3d"), new X3D.SFString("JinUpperLipRaiser.x3d")]);
Switch25ZZZ.children[7] = Inline33;

let Inline34 = browser.currentScene.createNode("Inline");
Inline34.DEF = "OPTION9";
Inline34.url = new X3D.MFString([new X3D.SFString("../resources/JinNasolabialDeepener.x3d"), new X3D.SFString("JinNasolabialDeepener.x3d")]);
Switch25ZZZ.children[8] = Inline34;

let Inline35 = browser.currentScene.createNode("Inline");
Inline35.DEF = "OPTION10";
Inline35.url = new X3D.MFString([new X3D.SFString("../resources/JinLipCornerPuller.x3d"), new X3D.SFString("JinLipCornerPuller.x3d")]);
Switch25ZZZ.children[9] = Inline35;

let Inline36 = browser.currentScene.createNode("Inline");
Inline36.DEF = "OPTION11";
Inline36.url = new X3D.MFString([new X3D.SFString("../resources/JinCheekPuffer.x3d"), new X3D.SFString("JinCheekPuffer.x3d")]);
Switch25ZZZ.children[10] = Inline36;

let Inline37 = browser.currentScene.createNode("Inline");
Inline37.DEF = "OPTION12";
Inline37.url = new X3D.MFString([new X3D.SFString("../resources/JinDimpler.x3d"), new X3D.SFString("JinDimpler.x3d")]);
Switch25ZZZ.children[11] = Inline37;

let Inline38 = browser.currentScene.createNode("Inline");
Inline38.DEF = "OPTION13";
Inline38.url = new X3D.MFString([new X3D.SFString("../resources/JinLipCornerDepressor.x3d"), new X3D.SFString("JinLipCornerDepressor.x3d")]);
Switch25ZZZ.children[12] = Inline38;

let Inline39 = browser.currentScene.createNode("Inline");
Inline39.DEF = "OPTION14";
Inline39.url = new X3D.MFString([new X3D.SFString("../resources/JinLowerLipDepressor.x3d"), new X3D.SFString("JinLowerLipDepressor.x3d")]);
Switch25ZZZ.children[13] = Inline39;

let Inline40 = browser.currentScene.createNode("Inline");
Inline40.DEF = "OPTION15";
Inline40.url = new X3D.MFString([new X3D.SFString("../resources/JinChinRaiser.x3d"), new X3D.SFString("JinChinRaiser.x3d")]);
Switch25ZZZ.children[14] = Inline40;

let Inline41 = browser.currentScene.createNode("Inline");
Inline41.DEF = "OPTION16";
Inline41.url = new X3D.MFString([new X3D.SFString("../resources/JinLipPuckerer.x3d"), new X3D.SFString("JinLipPuckerer.x3d")]);
Switch25ZZZ.children[15] = Inline41;

let Inline42 = browser.currentScene.createNode("Inline");
Inline42.DEF = "OPTION17";
Inline42.url = new X3D.MFString([new X3D.SFString("../resources/JinLipStretcher.x3d"), new X3D.SFString("JinLipStretcher.x3d")]);
Switch25ZZZ.children[16] = Inline42;

let Inline43 = browser.currentScene.createNode("Inline");
Inline43.DEF = "OPTION18";
Inline43.url = new X3D.MFString([new X3D.SFString("../resources/JinLipFunneler.x3d"), new X3D.SFString("JinLipFunneler.x3d")]);
Switch25ZZZ.children[17] = Inline43;

let Inline44 = browser.currentScene.createNode("Inline");
Inline44.DEF = "OPTION19";
Inline44.url = new X3D.MFString([new X3D.SFString("../resources/JinLipTightener.x3d"), new X3D.SFString("JinLipTightener.x3d")]);
Switch25ZZZ.children[18] = Inline44;

let Inline45 = browser.currentScene.createNode("Inline");
Inline45.DEF = "OPTION20";
Inline45.url = new X3D.MFString([new X3D.SFString("../resources/JinLipPressor.x3d"), new X3D.SFString("JinLipPressor.x3d")]);
Switch25ZZZ.children[19] = Inline45;

let Inline46 = browser.currentScene.createNode("Inline");
Inline46.DEF = "OPTION21";
Inline46.url = new X3D.MFString([new X3D.SFString("../resources/JinLipsPart.x3d"), new X3D.SFString("JinLipsPart.x3d")]);
Switch25ZZZ.children[20] = Inline46;

let Inline47 = browser.currentScene.createNode("Inline");
Inline47.DEF = "OPTION22";
Inline47.url = new X3D.MFString([new X3D.SFString("../resources/JinJawDrop.x3d"), new X3D.SFString("JinJawDrop.x3d")]);
Switch25ZZZ.children[21] = Inline47;

let Inline48 = browser.currentScene.createNode("Inline");
Inline48.DEF = "OPTION23";
Inline48.url = new X3D.MFString([new X3D.SFString("../resources/JinMouthStretch.x3d"), new X3D.SFString("JinMouthStretch.x3d")]);
Switch25ZZZ.children[22] = Inline48;

let Inline49 = browser.currentScene.createNode("Inline");
Inline49.DEF = "OPTION24";
Inline49.url = new X3D.MFString([new X3D.SFString("../resources/JinLipSuck.x3d"), new X3D.SFString("JinLipSuck.x3d")]);
Switch25ZZZ.children[23] = Inline49;

let Inline50 = browser.currentScene.createNode("Inline");
Inline50.DEF = "OPTION25";
Inline50.url = new X3D.MFString([new X3D.SFString("../resources/JinLidDroop.x3d"), new X3D.SFString("JinLidDroop.x3d")]);
Switch25ZZZ.children[24] = Inline50;

let Inline51 = browser.currentScene.createNode("Inline");
Inline51.DEF = "OPTION26";
Inline51.url = new X3D.MFString([new X3D.SFString("../resources/JinSlit.x3d"), new X3D.SFString("JinSlit.x3d")]);
Switch25ZZZ.children[25] = Inline51;

let Inline52 = browser.currentScene.createNode("Inline");
Inline52.DEF = "OPTION27";
Inline52.url = new X3D.MFString([new X3D.SFString("../resources/JinEyesClosed.x3d"), new X3D.SFString("JinEyesClosed.x3d")]);
Switch25ZZZ.children[26] = Inline52;

let Inline53 = browser.currentScene.createNode("Inline");
Inline53.DEF = "OPTION28";
Inline53.url = new X3D.MFString([new X3D.SFString("../resources/JinSquint.x3d"), new X3D.SFString("JinSquint.x3d")]);
Switch25ZZZ.children[27] = Inline53;

let Inline54 = browser.currentScene.createNode("Inline");
Inline54.DEF = "OPTION29";
Inline54.url = new X3D.MFString([new X3D.SFString("../resources/JinBlink.x3d"), new X3D.SFString("JinBlink.x3d")]);
Switch25ZZZ.children[28] = Inline54;

let Inline55 = browser.currentScene.createNode("Inline");
Inline55.DEF = "OPTION30";
Inline55.url = new X3D.MFString([new X3D.SFString("../resources/JinWink.x3d"), new X3D.SFString("JinWink.x3d")]);
Switch25ZZZ.children[29] = Inline55;

Group10ZZZ.children[1] = Switch25;

//Script to handle selection logic
let Script56 = browser.currentScene.createNode("Script");
Script56.DEF = "MenuScript";
Script57.getField("menuItems")Script56YYY.field = new X3D.MFNode();

Script58.getField("selection")Script56YYY.field = new X3D.MFNode();

Script59.getField("touchPoint")Script56YYY.field = new X3D.MFNode();

Script60.getField("spacing").setValue("1.2");
Script56YYY.field = new X3D.MFNode();

Script61.getField("size").setValue("2.4");
Script56YYY.field = new X3D.MFNode();

Script62.getField("menuCenterY")Script56YYY.field = new X3D.MFNode();

Script63.getField("itemHeight")Script56YYY.field = new X3D.MFNode();

let IS64 = browser.currentScene.createNode("IS");
let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "menuItems";
connect65.protoField = "menuItems";
IS64YYY.connect = new X3D.MFNode();

IS64ZZZ.connect[0] = connect65;

iS = IS64;


Script56.setSourceCode(`ecmascript:\n"+
"        function initialize() {\n"+
"          selection = 0;\n"+
"          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation\n"+
"          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;\n"+
"          menuCenterY = menuHeight / 2;\n"+
"          itemHeight = menuHeight / menuItems.length;\n"+
"        }\n"+
"\n"+
"        function touchPoint(value) {\n"+
"          Browser.print(\"Hit \"+value+\" \"+selection+\"\n"+
"\");\n"+
"          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);\n"+
"\n"+
"          selection = index - 2;\n"+
"          if (selection >= 0 && selection < menuItems.length) {\n"+
"            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"\n"+
"\");\n"+
"          }\n"+
"        }`)
Group10ZZZ.children[2] = Script56;

//ROUTEs to connect everything
let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromNode = "MenuTouchSensor";
ROUTE66.fromField = "hitPoint_changed";
ROUTE66.toNode = "MenuScript";
ROUTE66.toField = "touchPoint";
Group10ZZZ.children[3] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromNode = "MenuScript";
ROUTE67.fromField = "selection";
ROUTE67.toNode = "SceneSwitcher";
ROUTE67.toField = "whichChoice";
Group10ZZZ.children[4] = ROUTE67;

ProtoBody9YYY.children = new X3D.MFNode();

ProtoBody9ZZZ.children[0] = Group10;

protoBody = ProtoBody9;

browser.currentScene.children[1] = ProtoDeclare6;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "Menu";
ProtoInstance68.DEF = "MainMenu";
let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "menuItems";
fieldValue69.value = "\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"";
ProtoInstance68YYY.fieldValue = new X3D.MFNode();

ProtoInstance68ZZZ.fieldValue[0] = fieldValue69;

browser.currentScene.children[2] = ProtoInstance68;

}
main ();
