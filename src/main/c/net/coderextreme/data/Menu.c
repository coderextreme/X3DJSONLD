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

//Menu prototype declaration
ProtoDeclare ProtoDeclare6 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface7 = createNode("ProtoInterface");
field field8 = createNode("field");
field8.name = "menuItems";
field8.type = "MFString";
field8.accessType = "initializeOnly";
ProtoInterface7.field = new MFNode();

ProtoInterface7.field[0] = field8;

ProtoDeclare6.protoInterface = ProtoInterface7;

ProtoBody ProtoBody9 = createNode("ProtoBody");
Group Group10 = createNode("Group");
Transform Transform11 = createNode("Transform");
Transform11.DEF = "TextMenuTransform";
Transform11.translation = new SFVec3f(new float[48,27,0]);
TouchSensor TouchSensor12 = createNode("TouchSensor");
TouchSensor12.DEF = "MenuTouchSensor";
Transform11.children = new MFNode();

Transform11.children[0] = TouchSensor12;

Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,1,1]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

Text Text16 = createNode("Text");
Text16.DEF = "MenuText";
IS IS17 = createNode("IS");
connect connect18 = createNode("connect");
connect18.nodeField = "string";
connect18.protoField = "menuItems";
IS17.connect = new MFNode();

IS17.connect[0] = connect18;

Text16.iS = IS17;

FontStyle FontStyle19 = createNode("FontStyle");
FontStyle19.size = 2.4;
FontStyle19.spacing = 1.2;
FontStyle19.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text16.fontStyle = FontStyle19;

Shape13.geometry = Text16;

Transform11.child[1] = Shape13;

Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0,0,1]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

IndexedFaceSet IndexedFaceSet23 = createNode("IndexedFaceSet");
IndexedFaceSet23.DEF = "Backing";
IndexedFaceSet23.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
Coordinate Coordinate24 = createNode("Coordinate");
Coordinate24.point = new MFVec3f(new float[25,36,-0.01,-25,36,-0.01,-25,-51,-0.01,25,-51,-0.01]);
IndexedFaceSet23.coord = Coordinate24;

Shape20.geometry = IndexedFaceSet23;

Transform11.child[2] = Shape20;

Group10.children = new MFNode();

Group10.children[0] = Transform11;

Switch Switch25 = createNode("Switch");
Switch25.DEF = "SceneSwitcher";
Switch25.whichChoice = 0;
Inline Inline26 = createNode("Inline");
Inline26.DEF = "OPTION1";
Inline26.url = new MFString(new java.lang.String["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"]);
Switch25.children = new MFNode();

Switch25.children[0] = Inline26;

Inline Inline27 = createNode("Inline");
Inline27.DEF = "OPTION2";
Inline27.url = new MFString(new java.lang.String["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"]);
Switch25.children[1] = Inline27;

Inline Inline28 = createNode("Inline");
Inline28.DEF = "OPTION3";
Inline28.url = new MFString(new java.lang.String["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"]);
Switch25.children[2] = Inline28;

Inline Inline29 = createNode("Inline");
Inline29.DEF = "OPTION4";
Inline29.url = new MFString(new java.lang.String["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"]);
Switch25.children[3] = Inline29;

Inline Inline30 = createNode("Inline");
Inline30.DEF = "OPTION5";
Inline30.url = new MFString(new java.lang.String["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"]);
Switch25.children[4] = Inline30;

Inline Inline31 = createNode("Inline");
Inline31.DEF = "OPTION6";
Inline31.url = new MFString(new java.lang.String["../resources/JinLidTightener.x3d","JinLidTightener.x3d"]);
Switch25.children[5] = Inline31;

Inline Inline32 = createNode("Inline");
Inline32.DEF = "OPTION7";
Inline32.url = new MFString(new java.lang.String["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"]);
Switch25.children[6] = Inline32;

Inline Inline33 = createNode("Inline");
Inline33.DEF = "OPTION8";
Inline33.url = new MFString(new java.lang.String["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"]);
Switch25.children[7] = Inline33;

Inline Inline34 = createNode("Inline");
Inline34.DEF = "OPTION9";
Inline34.url = new MFString(new java.lang.String["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"]);
Switch25.children[8] = Inline34;

Inline Inline35 = createNode("Inline");
Inline35.DEF = "OPTION10";
Inline35.url = new MFString(new java.lang.String["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"]);
Switch25.children[9] = Inline35;

Inline Inline36 = createNode("Inline");
Inline36.DEF = "OPTION11";
Inline36.url = new MFString(new java.lang.String["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"]);
Switch25.children[10] = Inline36;

Inline Inline37 = createNode("Inline");
Inline37.DEF = "OPTION12";
Inline37.url = new MFString(new java.lang.String["../resources/JinDimpler.x3d","JinDimpler.x3d"]);
Switch25.children[11] = Inline37;

Inline Inline38 = createNode("Inline");
Inline38.DEF = "OPTION13";
Inline38.url = new MFString(new java.lang.String["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"]);
Switch25.children[12] = Inline38;

Inline Inline39 = createNode("Inline");
Inline39.DEF = "OPTION14";
Inline39.url = new MFString(new java.lang.String["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"]);
Switch25.children[13] = Inline39;

Inline Inline40 = createNode("Inline");
Inline40.DEF = "OPTION15";
Inline40.url = new MFString(new java.lang.String["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"]);
Switch25.children[14] = Inline40;

Inline Inline41 = createNode("Inline");
Inline41.DEF = "OPTION16";
Inline41.url = new MFString(new java.lang.String["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"]);
Switch25.children[15] = Inline41;

Inline Inline42 = createNode("Inline");
Inline42.DEF = "OPTION17";
Inline42.url = new MFString(new java.lang.String["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"]);
Switch25.children[16] = Inline42;

Inline Inline43 = createNode("Inline");
Inline43.DEF = "OPTION18";
Inline43.url = new MFString(new java.lang.String["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"]);
Switch25.children[17] = Inline43;

Inline Inline44 = createNode("Inline");
Inline44.DEF = "OPTION19";
Inline44.url = new MFString(new java.lang.String["../resources/JinLipTightener.x3d","JinLipTightener.x3d"]);
Switch25.children[18] = Inline44;

Inline Inline45 = createNode("Inline");
Inline45.DEF = "OPTION20";
Inline45.url = new MFString(new java.lang.String["../resources/JinLipPressor.x3d","JinLipPressor.x3d"]);
Switch25.children[19] = Inline45;

Inline Inline46 = createNode("Inline");
Inline46.DEF = "OPTION21";
Inline46.url = new MFString(new java.lang.String["../resources/JinLipsPart.x3d","JinLipsPart.x3d"]);
Switch25.children[20] = Inline46;

Inline Inline47 = createNode("Inline");
Inline47.DEF = "OPTION22";
Inline47.url = new MFString(new java.lang.String["../resources/JinJawDrop.x3d","JinJawDrop.x3d"]);
Switch25.children[21] = Inline47;

Inline Inline48 = createNode("Inline");
Inline48.DEF = "OPTION23";
Inline48.url = new MFString(new java.lang.String["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"]);
Switch25.children[22] = Inline48;

Inline Inline49 = createNode("Inline");
Inline49.DEF = "OPTION24";
Inline49.url = new MFString(new java.lang.String["../resources/JinLipSuck.x3d","JinLipSuck.x3d"]);
Switch25.children[23] = Inline49;

Inline Inline50 = createNode("Inline");
Inline50.DEF = "OPTION25";
Inline50.url = new MFString(new java.lang.String["../resources/JinLidDroop.x3d","JinLidDroop.x3d"]);
Switch25.children[24] = Inline50;

Inline Inline51 = createNode("Inline");
Inline51.DEF = "OPTION26";
Inline51.url = new MFString(new java.lang.String["../resources/JinSlit.x3d","JinSlit.x3d"]);
Switch25.children[25] = Inline51;

Inline Inline52 = createNode("Inline");
Inline52.DEF = "OPTION27";
Inline52.url = new MFString(new java.lang.String["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"]);
Switch25.children[26] = Inline52;

Inline Inline53 = createNode("Inline");
Inline53.DEF = "OPTION28";
Inline53.url = new MFString(new java.lang.String["../resources/JinSquint.x3d","JinSquint.x3d"]);
Switch25.children[27] = Inline53;

Inline Inline54 = createNode("Inline");
Inline54.DEF = "OPTION29";
Inline54.url = new MFString(new java.lang.String["../resources/JinBlink.x3d","JinBlink.x3d"]);
Switch25.children[28] = Inline54;

Inline Inline55 = createNode("Inline");
Inline55.DEF = "OPTION30";
Inline55.url = new MFString(new java.lang.String["../resources/JinWink.x3d","JinWink.x3d"]);
Switch25.children[29] = Inline55;

Group10.children[1] = Switch25;

//Script to handle selection logic
Script Script56 = createNode("Script");
Script56.DEF = "MenuScript";
field field57 = createNode("field");
field57.name = "menuItems";
field57.type = "MFString";
field57.accessType = "initializeOnly";
Script56.field = new MFNode();

Script56.field[0] = field57;

field field58 = createNode("field");
field58.name = "selection";
field58.type = "SFInt32";
field58.accessType = "outputOnly";
Script56.field[1] = field58;

field field59 = createNode("field");
field59.name = "touchPoint";
field59.type = "SFVec3f";
field59.accessType = "inputOnly";
Script56.field[2] = field59;

field field60 = createNode("field");
field60.name = "spacing";
field60.type = "SFFloat";
field60.accessType = "initializeOnly";
field60.value = "1.2";
Script56.field[3] = field60;

field field61 = createNode("field");
field61.name = "size";
field61.type = "SFFloat";
field61.accessType = "initializeOnly";
field61.value = "2.4";
Script56.field[4] = field61;

field field62 = createNode("field");
field62.name = "menuCenterY";
field62.type = "SFFloat";
field62.accessType = "initializeOnly";
Script56.field[5] = field62;

field field63 = createNode("field");
field63.name = "itemHeight";
field63.type = "SFFloat";
field63.accessType = "initializeOnly";
Script56.field[6] = field63;

IS IS64 = createNode("IS");
connect connect65 = createNode("connect");
connect65.nodeField = "menuItems";
connect65.protoField = "menuItems";
IS64.connect = new MFNode();

IS64.connect[0] = connect65;

Script56.iS = IS64;


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
Group10.children[2] = Script56;

//ROUTEs to connect everything
ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromNode = "MenuTouchSensor";
ROUTE66.fromField = "hitPoint_changed";
ROUTE66.toNode = "MenuScript";
ROUTE66.toField = "touchPoint";
Group10.children[3] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromNode = "MenuScript";
ROUTE67.fromField = "selection";
ROUTE67.toNode = "SceneSwitcher";
ROUTE67.toField = "whichChoice";
Group10.children[4] = ROUTE67;

ProtoBody9.children = new MFNode();

ProtoBody9.children[0] = Group10;

ProtoDeclare6.protoBody = ProtoBody9;

children[1] = ProtoDeclare6;

ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.name = "Menu";
ProtoInstance68.DEF = "MainMenu";
fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "menuItems";
fieldValue69.value = "\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"";
ProtoInstance68.fieldValue = new MFNode();

ProtoInstance68.fieldValue[0] = fieldValue69;

children[2] = ProtoInstance68;

}
