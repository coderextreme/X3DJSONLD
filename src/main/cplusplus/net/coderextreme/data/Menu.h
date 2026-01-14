//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("Menu.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("description"));
meta3.setContent(CString("X3D scene with a Switch of Inlines controlled by a menu"));
head1.addMeta(&meta3);

X3D0.setHead(&head1);

Scene& Scene4 =  Scene();
//Viewpoint and any other scene setup
Viewpoint& Viewpoint5 =  Viewpoint();
Viewpoint5.setPosition(new float[]{0.0,20.0,110.0});
Scene4.addChild(&Viewpoint5);

//Menu prototype declaration
ProtoDeclare& ProtoDeclare6 =  ProtoDeclare();
ProtoDeclare6.setName(CString("Menu"));
ProtoInterface& ProtoInterface7 =  ProtoInterface();
field& field8 =  field();
field8.setName(CString("menuItems"));
field8.setType(CString("MFString"));
field8.setAccessType(CString("initializeOnly"));
ProtoInterface7.addChild(&field8);

ProtoDeclare6.addChild(&ProtoInterface7);

ProtoBody& ProtoBody9 =  ProtoBody();
Group& Group10 =  Group();
Transform& Transform11 =  Transform();
Transform11.setDEF(CString("TextMenuTransform"));
Transform11.setTranslation(new float[]{48.0,27.0,0.0});
TouchSensor& TouchSensor12 =  TouchSensor();
TouchSensor12.setDEF(CString("MenuTouchSensor"));
Transform11.addChild(&TouchSensor12);

Shape& Shape13 =  Shape();
Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[]{1.0,1.0,1.0});
Appearance14.addChild(&Material15);

Shape13.addChild(&Appearance14);

Text& Text16 =  Text();
Text16.setDEF(CString("MenuText"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(CString("string"));
connect18.setProtoField(CString("menuItems"));
IS17.addChild(&connect18);

Text16.addChild(&IS17);

CFontStyle& FontStyle19 =  CFontStyle();
FontStyle19.setSize(2.4);
FontStyle19.setSpacing(1.2);
FontStyle19.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
Text16.setFontStyle(&FontStyle19);

Shape13.setGeometry(&Text16);

Transform11.addChild(&Shape13);

Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0.0,0.0,1.0});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

IndexedFaceSet& IndexedFaceSet23 =  IndexedFaceSet();
IndexedFaceSet23.setDEF(CString("Backing"));
IndexedFaceSet23.setCoordIndex(new int32_t[]{0,1,2,3,-1}, 5);
Coordinate& Coordinate24 =  Coordinate();
Coordinate24.setPoint(new float[]{25.0,36.0,-0.01,-25.0,36.0,-0.01,-25.0,-51.0,-0.01,25.0,-51.0,-0.01}, 12);
IndexedFaceSet23.setCoord(&Coordinate24);

Shape20.setGeometry(&IndexedFaceSet23);

Transform11.addChild(&Shape20);

Group10.addChild(&Transform11);

Switch& Switch25 =  Switch();
Switch25.setDEF(CString("SceneSwitcher"));
Switch25.setWhichChoice(0);
Inline& Inline26 =  Inline();
Inline26.setDEF(CString("OPTION1"));
Inline26.setUrl(new CString[]{CString("../resources/JinInnerBrowRaiser.x3d"), CString("JinInnerBrowRaiser.x3d")}, 2);
Switch25.addChild(&Inline26);

Inline& Inline27 =  Inline();
Inline27.setDEF(CString("OPTION2"));
Inline27.setUrl(new CString[]{CString("../resources/JinOuterBrowRaiser.x3d"), CString("JinOuterBrowRaiser.x3d")}, 2);
Switch25.addChild(&Inline27);

Inline& Inline28 =  Inline();
Inline28.setDEF(CString("OPTION3"));
Inline28.setUrl(new CString[]{CString("../resources/JinBrowLowerer.x3d"), CString("JinBrowLowerer.x3d")}, 2);
Switch25.addChild(&Inline28);

Inline& Inline29 =  Inline();
Inline29.setDEF(CString("OPTION4"));
Inline29.setUrl(new CString[]{CString("../resources/JinUpperLidRaiser.x3d"), CString("JinUpperLidRaiser.x3d")}, 2);
Switch25.addChild(&Inline29);

Inline& Inline30 =  Inline();
Inline30.setDEF(CString("OPTION5"));
Inline30.setUrl(new CString[]{CString("../resources/JinCheekRaiser.x3d"), CString("JinCheekRaiser.x3d")}, 2);
Switch25.addChild(&Inline30);

Inline& Inline31 =  Inline();
Inline31.setDEF(CString("OPTION6"));
Inline31.setUrl(new CString[]{CString("../resources/JinLidTightener.x3d"), CString("JinLidTightener.x3d")}, 2);
Switch25.addChild(&Inline31);

Inline& Inline32 =  Inline();
Inline32.setDEF(CString("OPTION7"));
Inline32.setUrl(new CString[]{CString("../resources/JinNoseWrinkler.x3d"), CString("JinNoseWrinkler.x3d")}, 2);
Switch25.addChild(&Inline32);

Inline& Inline33 =  Inline();
Inline33.setDEF(CString("OPTION8"));
Inline33.setUrl(new CString[]{CString("../resources/JinUpperLipRaiser.x3d"), CString("JinUpperLipRaiser.x3d")}, 2);
Switch25.addChild(&Inline33);

Inline& Inline34 =  Inline();
Inline34.setDEF(CString("OPTION9"));
Inline34.setUrl(new CString[]{CString("../resources/JinNasolabialDeepener.x3d"), CString("JinNasolabialDeepener.x3d")}, 2);
Switch25.addChild(&Inline34);

Inline& Inline35 =  Inline();
Inline35.setDEF(CString("OPTION10"));
Inline35.setUrl(new CString[]{CString("../resources/JinLipCornerPuller.x3d"), CString("JinLipCornerPuller.x3d")}, 2);
Switch25.addChild(&Inline35);

Inline& Inline36 =  Inline();
Inline36.setDEF(CString("OPTION11"));
Inline36.setUrl(new CString[]{CString("../resources/JinCheekPuffer.x3d"), CString("JinCheekPuffer.x3d")}, 2);
Switch25.addChild(&Inline36);

Inline& Inline37 =  Inline();
Inline37.setDEF(CString("OPTION12"));
Inline37.setUrl(new CString[]{CString("../resources/JinDimpler.x3d"), CString("JinDimpler.x3d")}, 2);
Switch25.addChild(&Inline37);

Inline& Inline38 =  Inline();
Inline38.setDEF(CString("OPTION13"));
Inline38.setUrl(new CString[]{CString("../resources/JinLipCornerDepressor.x3d"), CString("JinLipCornerDepressor.x3d")}, 2);
Switch25.addChild(&Inline38);

Inline& Inline39 =  Inline();
Inline39.setDEF(CString("OPTION14"));
Inline39.setUrl(new CString[]{CString("../resources/JinLowerLipDepressor.x3d"), CString("JinLowerLipDepressor.x3d")}, 2);
Switch25.addChild(&Inline39);

Inline& Inline40 =  Inline();
Inline40.setDEF(CString("OPTION15"));
Inline40.setUrl(new CString[]{CString("../resources/JinChinRaiser.x3d"), CString("JinChinRaiser.x3d")}, 2);
Switch25.addChild(&Inline40);

Inline& Inline41 =  Inline();
Inline41.setDEF(CString("OPTION16"));
Inline41.setUrl(new CString[]{CString("../resources/JinLipPuckerer.x3d"), CString("JinLipPuckerer.x3d")}, 2);
Switch25.addChild(&Inline41);

Inline& Inline42 =  Inline();
Inline42.setDEF(CString("OPTION17"));
Inline42.setUrl(new CString[]{CString("../resources/JinLipStretcher.x3d"), CString("JinLipStretcher.x3d")}, 2);
Switch25.addChild(&Inline42);

Inline& Inline43 =  Inline();
Inline43.setDEF(CString("OPTION18"));
Inline43.setUrl(new CString[]{CString("../resources/JinLipFunneler.x3d"), CString("JinLipFunneler.x3d")}, 2);
Switch25.addChild(&Inline43);

Inline& Inline44 =  Inline();
Inline44.setDEF(CString("OPTION19"));
Inline44.setUrl(new CString[]{CString("../resources/JinLipTightener.x3d"), CString("JinLipTightener.x3d")}, 2);
Switch25.addChild(&Inline44);

Inline& Inline45 =  Inline();
Inline45.setDEF(CString("OPTION20"));
Inline45.setUrl(new CString[]{CString("../resources/JinLipPressor.x3d"), CString("JinLipPressor.x3d")}, 2);
Switch25.addChild(&Inline45);

Inline& Inline46 =  Inline();
Inline46.setDEF(CString("OPTION21"));
Inline46.setUrl(new CString[]{CString("../resources/JinLipsPart.x3d"), CString("JinLipsPart.x3d")}, 2);
Switch25.addChild(&Inline46);

Inline& Inline47 =  Inline();
Inline47.setDEF(CString("OPTION22"));
Inline47.setUrl(new CString[]{CString("../resources/JinJawDrop.x3d"), CString("JinJawDrop.x3d")}, 2);
Switch25.addChild(&Inline47);

Inline& Inline48 =  Inline();
Inline48.setDEF(CString("OPTION23"));
Inline48.setUrl(new CString[]{CString("../resources/JinMouthStretch.x3d"), CString("JinMouthStretch.x3d")}, 2);
Switch25.addChild(&Inline48);

Inline& Inline49 =  Inline();
Inline49.setDEF(CString("OPTION24"));
Inline49.setUrl(new CString[]{CString("../resources/JinLipSuck.x3d"), CString("JinLipSuck.x3d")}, 2);
Switch25.addChild(&Inline49);

Inline& Inline50 =  Inline();
Inline50.setDEF(CString("OPTION25"));
Inline50.setUrl(new CString[]{CString("../resources/JinLidDroop.x3d"), CString("JinLidDroop.x3d")}, 2);
Switch25.addChild(&Inline50);

Inline& Inline51 =  Inline();
Inline51.setDEF(CString("OPTION26"));
Inline51.setUrl(new CString[]{CString("../resources/JinSlit.x3d"), CString("JinSlit.x3d")}, 2);
Switch25.addChild(&Inline51);

Inline& Inline52 =  Inline();
Inline52.setDEF(CString("OPTION27"));
Inline52.setUrl(new CString[]{CString("../resources/JinEyesClosed.x3d"), CString("JinEyesClosed.x3d")}, 2);
Switch25.addChild(&Inline52);

Inline& Inline53 =  Inline();
Inline53.setDEF(CString("OPTION28"));
Inline53.setUrl(new CString[]{CString("../resources/JinSquint.x3d"), CString("JinSquint.x3d")}, 2);
Switch25.addChild(&Inline53);

Inline& Inline54 =  Inline();
Inline54.setDEF(CString("OPTION29"));
Inline54.setUrl(new CString[]{CString("../resources/JinBlink.x3d"), CString("JinBlink.x3d")}, 2);
Switch25.addChild(&Inline54);

Inline& Inline55 =  Inline();
Inline55.setDEF(CString("OPTION30"));
Inline55.setUrl(new CString[]{CString("../resources/JinWink.x3d"), CString("JinWink.x3d")}, 2);
Switch25.addChild(&Inline55);

Group10.addChild(&Switch25);

//Script to handle selection logic
Script& Script56 =  Script();
Script56.setDEF(CString("MenuScript"));
field& field57 =  field();
field57.setName(CString("menuItems"));
field57.setType(CString("MFString"));
field57.setAccessType(CString("initializeOnly"));
Script56.addChild(&field57);

field& field58 =  field();
field58.setName(CString("selection"));
field58.setType(CString("SFInt32"));
field58.setAccessType(CString("outputOnly"));
Script56.addChild(&field58);

field& field59 =  field();
field59.setName(CString("touchPoint"));
field59.setType(CString("SFVec3f"));
field59.setAccessType(CString("inputOnly"));
Script56.addChild(&field59);

field& field60 =  field();
field60.setName(CString("spacing"));
field60.setType(CString("SFFloat"));
field60.setAccessType(CString("initializeOnly"));
field60.setValue(CString("1.2"));
Script56.addChild(&field60);

field& field61 =  field();
field61.setName(CString("size"));
field61.setType(CString("SFFloat"));
field61.setAccessType(CString("initializeOnly"));
field61.setValue(CString("2.4"));
Script56.addChild(&field61);

field& field62 =  field();
field62.setName(CString("menuCenterY"));
field62.setType(CString("SFFloat"));
field62.setAccessType(CString("initializeOnly"));
Script56.addChild(&field62);

field& field63 =  field();
field63.setName(CString("itemHeight"));
field63.setType(CString("SFFloat"));
field63.setAccessType(CString("initializeOnly"));
Script56.addChild(&field63);

IS& IS64 =  IS();
Connect& connect65 =  Connect();
connect65.setNodeField(CString("menuItems"));
connect65.setProtoField(CString("menuItems"));
IS64.addChild(&connect65);

Script56.addChild(&IS64);


//Script56.setSourceCode(CString("ecmascript:")+
//_T("        function initialize() {")+
//_T("          selection = 0;")+
//_T("          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation")+
//_T("          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;")+
//_T("          menuCenterY = menuHeight / 2;")+
//_T("          itemHeight = menuHeight / menuItems.length;")+
//_T("        }")+
//_T("        function touchPoint(value) {")+
//_T("          Browser.print(\"Hit \"+value+\" \"+selection+\"")+
//_T("\");")+
//_T("          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);")+
//_T("          selection = index - 2;")+
//_T("          if (selection >= 0 && selection < menuItems.length) {")+
//_T("            Browser.print(\"Selected \"+value+\" \"+selection+\" \"+menuItems[selection]+\"")+
//_T("\");")+
//_T("          }")+
//_T("        }"));
Group10.addChild(&Script56);

//ROUTEs to connect everything
ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("MenuTouchSensor"));
ROUTE66.setFromField(CString("hitPoint_changed"));
ROUTE66.setToNode(CString("MenuScript"));
ROUTE66.setToField(CString("touchPoint"));
Group10.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("MenuScript"));
ROUTE67.setFromField(CString("selection"));
ROUTE67.setToNode(CString("SceneSwitcher"));
ROUTE67.setToField(CString("whichChoice"));
Group10.addChild(&ROUTE67);

ProtoBody9.addChild(&Group10);

ProtoDeclare6.addChild(&ProtoBody9);

Scene4.addChild(&ProtoDeclare6);

ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(CString("Menu"));
ProtoInstance68.setDEF(CString("MainMenu"));
fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("menuItems"));
fieldValue69.setValue(CString("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\""));
ProtoInstance68.addChild(&fieldValue69);

Scene4.addChild(&ProtoInstance68);

X3D0.setScene(&Scene4);

//}
