//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:01 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:01 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("DigitalClock"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("time"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("children"));
field11.setAccessType(CString("initializeOnly"));
field11.setType(CString("MFNode"));
Switch& Switch12 =  Switch();
Switch12.setDEF(CString("_1"));
Switch12.setWhichChoice(-1);
field11.addChild(Switch12);

Switch& Switch13 =  Switch();
Switch13.setDEF(CString("_2"));
Switch13.setWhichChoice(-1);
field11.addChild(Switch13);

ProtoInterface9.addChild(&field11);

field& field14 =  field();
field14.setName(CString("fraction"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("MFNode"));
Switch& Switch15 =  Switch();
Switch15.setDEF(CString("_3"));
Switch15.setWhichChoice(-1);
field14.addChild(Switch15);

Switch& Switch16 =  Switch();
Switch16.setDEF(CString("_4"));
Switch16.setWhichChoice(-1);
field14.addChild(Switch16);

ProtoInterface9.addChild(&field14);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("Data"));
ProtoInterface& ProtoInterface19 =  ProtoInterface();
field& field20 =  field();
field20.setName(CString("time"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ProtoInterface19.addChild(&field20);

ProtoDeclare18.addChild(&ProtoInterface19);

ProtoBody& ProtoBody21 =  ProtoBody();
Group& Group22 =  Group();
ProtoBody21.addChild(&Group22);

ProtoDeclare18.addChild(&ProtoBody21);

ProtoBody17.addChild(&ProtoDeclare18);

Script& Script23 =  Script();
Script23.setDEF(CString("_digitalClock"));
Script23.setDirectOutput(true);
field& field24 =  field();
field24.setName(CString("set_time"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
Script23.addChild(&field24);

field& field25 =  field();
field25.setName(CString("sec"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFInt32"));
field25.setValue(CString("-1"));
Script23.addChild(&field25);

field& field26 =  field();
field26.setName(CString("min"));
field26.setAccessType(CString("initializeOnly"));
field26.setType(CString("SFInt32"));
field26.setValue(CString("-1"));
Script23.addChild(&field26);

field& field27 =  field();
field27.setName(CString("hour"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("SFInt32"));
field27.setValue(CString("-1"));
Script23.addChild(&field27);

field& field28 =  field();
field28.setName(CString("l"));
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("SFInt32"));
Script23.addChild(&field28);

field& field29 =  field();
field29.setName(CString("children"));
field29.setAccessType(CString("initializeOnly"));
field29.setType(CString("MFNode"));
Script23.addChild(&field29);

field& field30 =  field();
field30.setName(CString("fraction"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("MFNode"));
Script23.addChild(&field30);

field& field31 =  field();
field31.setName(CString("data"));
field31.setAccessType(CString("initializeOnly"));
field31.setType(CString("SFNode"));
ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("Data"));
ProtoInstance32.setDEF(CString("_5"));
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("time"));
connect34.setProtoField(CString("time"));
IS33.addChild(&connect34);

ProtoInstance32.addChild(&IS33);

field31.addChild(&ProtoInstance32);

Script23.addChild(&field31);

IS& IS35 =  IS();
Connect& connect36 =  Connect();
connect36.setNodeField(CString("children"));
connect36.setProtoField(CString("children"));
IS35.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("fraction"));
connect37.setProtoField(CString("fraction"));
IS35.addChild(&connect37);

Script23.addChild(&IS35);


//Script23.setSourceCode(CString("vrmlscript:")+
//_T("function  set_time(value, time)")+
//_T("{")+
//_T("    t = Math.floor(value);")+
//_T("        f = (value - t);")+
//_T("   for (i = 0; i < fraction.length; i++) {")+
//_T("                f *= 10;")+
//_T("                whichChoice = Math.floor(f);")+
//_T("                fraction[i].whichChoice = whichChoice;")+
//_T("        f -= whichChoice;")+
//_T("    }")+
//_T("    if (l > 0) {")+
//_T("        if (t != sec && l) {")+
//_T("                sec = t;")+
//_T("                s = sec % 60; t =  sec / 60;")+
//_T("                e = s % 10;")+
//_T("                children[0].whichChoice = e;")+
//_T("                if (l > 1) {")+
//_T("                        z = s / 10;")+
//_T("                        children[1].whichChoice = z;")+
//_T("                        if (t != min && l > 2) {")+
//_T("                                min = t;")+
//_T("                                m = min % 60; t = min / 60;")+
//_T("                                e = m % 10;")+
//_T("                                children[2].whichChoice = e;")+
//_T("                                if (l > 2) {")+
//_T("                                        z = m / 10;")+
//_T("                                        children[3].whichChoice = z;")+
//_T("                                        if (t != hour && l > 4) {")+
//_T("                                                hour = t;")+
//_T("                                                h = hour % 24; t = hour / 24;")+
//_T("                                                e = h  % 10;")+
//_T("                                                children[4].whichChoice = e;")+
//_T("                                                if (l > 5) {")+
//_T("                                                        z = h  / 10;")+
//_T("                                                        children[5].whichChoice = z;")+
//_T("                                                }")+
//_T("                                        }")+
//_T("                                }")+
//_T("                        }")+
//_T("                }")+
//_T("        }")+
//_T("    }")+
//_T("}")+
//_T("function  initialize()")+
//_T("{")+
//_T("    set_time(data.time, 0);")+
//_T("        l = children.length;")+
//_T("}"));
ProtoBody17.addChild(&Script23);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("_5"));
ROUTE38.setFromField(CString("time_changed"));
ROUTE38.setToNode(CString("_digitalClock"));
ROUTE38.setToField(CString("set_time"));
ProtoBody17.addChild(&ROUTE38);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
