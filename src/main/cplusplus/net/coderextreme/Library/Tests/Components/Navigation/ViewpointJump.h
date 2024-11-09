//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Wed, 05 Jul 2017 08:02:41 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V3.0.4, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Navigation/ViewpointJump.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Wed, 05 Jul 2017 08:10:01 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setPosition(new float[]{0.0,0.0,3.1});
Scene8.addChild(&Viewpoint9);

TimeSensor& TimeSensor10 =  TimeSensor();
TimeSensor10.setDEF(CString("TimeSensor1"));
TimeSensor10.setCycleInterval(3);
TimeSensor10.setLoop(true);
Scene8.addChild(&TimeSensor10);

Transform& Transform11 =  Transform();
Shape& Shape12 =  Shape();
Appearance& Appearance13 =  Appearance();
Material& Material14 =  Material();
Appearance13.addChild(&Material14);

Shape12.addChild(&Appearance13);

Sphere& Sphere15 =  Sphere();
Shape12.setGeometry(&Sphere15);

Transform11.addChild(&Shape12);

Scene8.addChild(&Transform11);

Viewpoint& Viewpoint16 =  Viewpoint();
Viewpoint16.setDEF(CString("Viewpoint1"));
Viewpoint16.setPosition(new float[]{0.0,0.0,10.2});
Scene8.addChild(&Viewpoint16);

Script& Script17 =  Script();
Script17.setDEF(CString("Script1"));
field& field18 =  field();
field18.setName(CString("float1_in"));
field18.setAccessType(CString("inputOnly"));
field18.setType(CString("SFFloat"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("bool1_out"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFBool"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("mstring1_out"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("MFString"));
Script17.addChild(&field20);


//Script17.setSourceCode(CString("javascript:")+
//_T(" function float1_in(value)")+
//_T("    {")+
//_T("    // value  SFFloat")+
//_T("    if (value > 0.90)")+
//_T("        bool1_out = true;")+
//_T("    mstring1_out = new MFString(value);")+
//_T("    }"));
Scene8.addChild(&Script17);

Transform& Transform21 =  Transform();
Transform21.setTranslation(new float[]{-2.57105,0.0,0.0});
Shape& Shape22 =  Shape();
Appearance& Appearance23 =  Appearance();
Material& Material24 =  Material();
Appearance23.addChild(&Material24);

Shape22.addChild(&Appearance23);

Text& Text25 =  Text();
Text25.setDEF(CString("Text1"));
Text25.setString(new CString[]{CString("0.6444690227508545")}, 1);
Shape22.setGeometry(&Text25);

Transform21.addChild(&Shape22);

Scene8.addChild(&Transform21);

NavigationInfo& NavigationInfo26 =  NavigationInfo();
Scene8.addChild(&NavigationInfo26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(CString("TimeSensor1"));
ROUTE27.setFromField(CString("fraction_changed"));
ROUTE27.setToNode(CString("Script1"));
ROUTE27.setToField(CString("float1_in"));
Scene8.addChild(&ROUTE27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("Script1"));
ROUTE28.setFromField(CString("bool1_out"));
ROUTE28.setToNode(CString("Viewpoint1"));
ROUTE28.setToField(CString("set_bind"));
Scene8.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(CString("Script1"));
ROUTE29.setFromField(CString("mstring1_out"));
ROUTE29.setToNode(CString("Text1"));
ROUTE29.setToField(CString("set_string"));
Scene8.addChild(&ROUTE29);

X3D0.setScene(&Scene8);

//}
