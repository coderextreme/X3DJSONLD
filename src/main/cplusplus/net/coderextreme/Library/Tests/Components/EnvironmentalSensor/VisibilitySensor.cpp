#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Fri, 18 Sep 2015 12:58:36 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 18 Sep 2015 13:41:42 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("VisibilitySensor"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Background& Background9 =  Background();
Background9.setSkyColor(new float[]{1,1,1}, 3);
Scene8.addChild(&Background9);

Viewpoint& Viewpoint10 =  Viewpoint();
Scene8.addChild(&Viewpoint10);

Switch& Switch11 =  Switch();
Switch11.setDEF(CString("_1"));
Switch11.setWhichChoice(0);
Group& Group12 =  Group();
Transform& Transform13 =  Transform();
Transform13.setDEF(CString("_2"));
Transform13.setScale(new float[]{2.82961,0.74589,1});
Shape& Shape14 =  Shape();
Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setDiffuseColor(new float[]{1,0,0});
Material16.setTransparency(0.5);
Appearance15.addChild(&Material16);

Shape14.addChild(&Appearance15);

Box& Box17 =  Box();
Box17.setSize(new float[]{1,1,1});
Box17.setSolid(False);
Shape14.setGeometry(&Box17);

Transform13.addChild(&Shape14);

Group12.addChild(&Transform13);

VisibilitySensor& VisibilitySensor18 =  VisibilitySensor();
VisibilitySensor18.setDEF(CString("Sensor"));
VisibilitySensor18.setSize(new float[]{2.82961,0.74589,1});
Group12.addChild(&VisibilitySensor18);

Switch11.addChild(&Group12);

Scene8.addChild(&Switch11);

Script& Script19 =  Script();
Script19.setDEF(CString("Debug"));
field& field20 =  field();
field20.setName(CString("set_enabled"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFTime"));
Script19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("set_whichChoice"));
field21.setAccessType(CString("inputOnly"));
field21.setType(CString("SFTime"));
Script19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("isActive"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("SFBool"));
Script19.addChild(&field22);

field& field23 =  field();
field23.setName(CString("enterTime"));
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("SFTime"));
Script19.addChild(&field23);

field& field24 =  field();
field24.setName(CString("exitTime"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
Script19.addChild(&field24);

field& field25 =  field();
field25.setName(CString("sensor"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFNode"));
VisibilitySensor& VisibilitySensor26 =  VisibilitySensor();
VisibilitySensor26.setUSE(CString("Sensor"));
field25.addChild(&VisibilitySensor26);

Script19.addChild(&field25);

field& field27 =  field();
field27.setName(CString("switchNode"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("SFNode"));
Switch& Switch28 =  Switch();
Switch28.setUSE(CString("_1"));
field27.addChild(Switch28);

Script19.addChild(&field27);


Script19.setSourceCode(CString("javascript:")+
_T("function set_enabled (value, time)")+
_T("{")+
_T("	sensor .enabled = ! sensor .enabled;")+
_T("	print ('enabled ' + sensor .enabled);")+
_T("}")+
_T("function set_whichChoice (value, time)")+
_T("{")+
_T("	switchNode .whichChoice = ! switchNode .whichChoice;")+
_T("	print ('whichChoice ' + switchNode .whichChoice);")+
_T("}")+
_T("function isActive (value, time)")+
_T("{")+
_T("	print ('isActive ' + value);")+
_T("}")+
_T("function enterTime (value, time)")+
_T("{")+
_T("	print ('enterTime ' + value);")+
_T("}")+
_T("function exitTime (value, time)")+
_T("{")+
_T("	print ('exitTime ' + value);")+
_T("}"));
Scene8.addChild(&Script19);

Transform& Transform29 =  Transform();
Transform29.setDEF(CString("Text_1"));
Transform29.setTranslation(new float[]{-2.61579,1.3267,0});
Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
Material32.setDEF(CString("Tropical15_1"));
Material32.setAmbientIntensity(0.223992);
Material32.setDiffuseColor(new float[]{0.895967,0,0.691271});
Material32.setSpecularColor(new float[]{0.0955906,0.0862563,0.093458});
Material32.setShininess(0.078125);
Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

Text& Text33 =  Text();
Text33.setString(new CString[]{CString("Enabled")}, 1);
Text33.setSolid(True);
CFontStyle& FontStyle34 =  CFontStyle();
FontStyle34.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text33.setFontStyle(&FontStyle34);

Shape30.setGeometry(&Text33);

Transform29.addChild(&Shape30);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("Box_1"));
Transform35.setTranslation(new float[]{-0.0107825,0.240168,0});
Transform35.setScale(new float[]{1.74811,0.513384,0.165402});
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
Material& Material38 =  Material();
Material38.setTransparency(0.640823);
Appearance37.addChild(&Material38);

Shape36.addChild(&Appearance37);

Box& Box39 =  Box();
Shape36.setGeometry(&Box39);

Transform35.addChild(&Shape36);

Transform29.addChild(&Transform35);

TouchSensor& TouchSensor40 =  TouchSensor();
TouchSensor40.setDEF(CString("_3"));
Transform29.addChild(&TouchSensor40);

Scene8.addChild(&Transform29);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("Text"));
Transform41.setTranslation(new float[]{3.38007,1.3267,0});
Shape& Shape42 =  Shape();
Appearance& Appearance43 =  Appearance();
Material& Material44 =  Material();
Material44.setDEF(CString("Tropical3_1"));
Material44.setAmbientIntensity(0.226102);
Material44.setDiffuseColor(new float[]{0.904409,0.774741,0.0830671});
Material44.setSpecularColor(new float[]{0.0955906,0.0955906,0.0955906});
Material44.setShininess(0.078125);
Appearance43.addChild(&Material44);

Shape42.addChild(&Appearance43);

Text& Text45 =  Text();
Text45.setString(new CString[]{CString("Switch")}, 1);
Text45.setSolid(True);
CFontStyle& FontStyle46 =  CFontStyle();
FontStyle46.setJustify(new CString[]{CString("MIDDLE")}, 1);
Text45.setFontStyle(&FontStyle46);

Shape42.setGeometry(&Text45);

Transform41.addChild(&Shape42);

Transform& Transform47 =  Transform();
Transform47.setDEF(CString("Box_2"));
Transform47.setTranslation(new float[]{-0.0486381,0.213912,0});
Transform47.setScale(new float[]{1.70972,0.513384,0.165402});
Shape& Shape48 =  Shape();
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setTransparency(0.640823);
Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

Box& Box51 =  Box();
Shape48.setGeometry(&Box51);

Transform47.addChild(&Shape48);

Transform41.addChild(&Transform47);

TouchSensor& TouchSensor52 =  TouchSensor();
TouchSensor52.setDEF(CString("_4"));
Transform41.addChild(&TouchSensor52);

Scene8.addChild(&Transform41);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("Sensor"));
ROUTE53.setFromField(CString("enterTime"));
ROUTE53.setToNode(CString("Debug"));
ROUTE53.setToField(CString("enterTime"));
Scene8.addChild(&ROUTE53);

ROUTE& ROUTE54 =  ROUTE();
ROUTE54.setFromNode(CString("Sensor"));
ROUTE54.setFromField(CString("exitTime"));
ROUTE54.setToNode(CString("Debug"));
ROUTE54.setToField(CString("exitTime"));
Scene8.addChild(&ROUTE54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("Sensor"));
ROUTE55.setFromField(CString("isActive"));
ROUTE55.setToNode(CString("Debug"));
ROUTE55.setToField(CString("isActive"));
Scene8.addChild(&ROUTE55);

ROUTE& ROUTE56 =  ROUTE();
ROUTE56.setFromNode(CString("_3"));
ROUTE56.setFromField(CString("touchTime"));
ROUTE56.setToNode(CString("Debug"));
ROUTE56.setToField(CString("set_enabled"));
Scene8.addChild(&ROUTE56);

ROUTE& ROUTE57 =  ROUTE();
ROUTE57.setFromNode(CString("_4"));
ROUTE57.setFromField(CString("touchTime"));
ROUTE57.setToNode(CString("Debug"));
ROUTE57.setToField(CString("set_whichChoice"));
Scene8.addChild(&ROUTE57);

ROUTE& ROUTE58 =  ROUTE();
ROUTE58.setFromNode(CString("_2"));
ROUTE58.setFromField(CString("scale_changed"));
ROUTE58.setToNode(CString("Sensor"));
ROUTE58.setToField(CString("set_size"));
Scene8.addChild(&ROUTE58);

X3D0.setScene(&Scene8);

}
