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
meta3.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("OptionButton"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("touchTime"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("whichChoice"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFInt32"));
field11.setValue(CString("-1"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("selected"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("choice"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("MFNode"));
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("_1"));
field13.addChild(&Transform14);

ProtoInterface9.addChild(&field13);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody15 =  ProtoBody();
Transform& Transform16 =  Transform();
Switch& Switch17 =  Switch();
Switch17.setDEF(CString("Option_1"));
Switch17.setWhichChoice(-1);
IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(CString("whichChoice"));
connect19.setProtoField(CString("whichChoice"));
IS18.addChild(&connect19);

Connect& connect20 =  Connect();
connect20.setNodeField(CString("children"));
connect20.setProtoField(CString("choice"));
IS18.addChild(&connect20);

Switch17.addChild(&IS18);

Transform16.addChild(&Switch17);

Transform& Transform21 =  Transform();
Script& Script22 =  Script();
Script22.setDEF(CString("_optionButton"));
Script22.setDirectOutput(true);
field& field23 =  field();
field23.setName(CString("selected"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFInt32"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("touchTime"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFTime"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("option"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFNode"));
Switch& Switch26 =  Switch();
Switch26.setUSE(CString("Option_1"));
field25.addChild(Switch26);

Script22.addChild(&field25);

IS& IS27 =  IS();
Connect& connect28 =  Connect();
connect28.setNodeField(CString("selected"));
connect28.setProtoField(CString("selected"));
IS27.addChild(&connect28);

Connect& connect29 =  Connect();
connect29.setNodeField(CString("touchTime"));
connect29.setProtoField(CString("touchTime"));
IS27.addChild(&connect29);

Script22.addChild(&IS27);


//Script22.setSourceCode(CString("vrmlscript:")+
//_T("function touchTime(value, time)")+
//_T("{")+
//_T("	i = 0;")+
//_T("	while(i < option.choice.length){")+
//_T("		if (option.choice[i++].touchTime == value){")+
//_T("			if (i == option.choice.length) option.whichChoice = 0;")+
//_T("			else option.whichChoice = i;")+
//_T("			selected = option.whichChoice;")+
//_T("			break;")+
//_T("		}")+
//_T("	}")+
//_T("}"));
Transform21.addChild(&Script22);

Transform16.addChild(&Transform21);

ProtoBody15.addChild(&Transform16);

ProtoDeclare8.addChild(&ProtoBody15);

Scene7.addChild(&ProtoDeclare8);

WorldInfo& WorldInfo30 =  WorldInfo();
WorldInfo30.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Scene7.addChild(&WorldInfo30);

X3D0.setScene(&Scene7);

//}
