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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:56 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:56 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("AnimContainer"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("whichChoice"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFInt32"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("stopTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("children"));
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("MFNode"));
TimeSensor& TimeSensor13 =  TimeSensor();
TimeSensor13.setDEF(CString("_1"));
field12.addChild(&TimeSensor13);

ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody14 =  ProtoBody();
ProtoDeclare& ProtoDeclare15 =  ProtoDeclare();
ProtoDeclare15.setName(CString("Data"));
ProtoInterface& ProtoInterface16 =  ProtoInterface();
field& field17 =  field();
field17.setName(CString("whichChoice"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFInt32"));
ProtoInterface16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("stopTime"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ProtoInterface16.addChild(&field18);

ProtoDeclare15.addChild(&ProtoInterface16);

ProtoBody& ProtoBody19 =  ProtoBody();
Group& Group20 =  Group();
ProtoBody19.addChild(&Group20);

ProtoDeclare15.addChild(&ProtoBody19);

ProtoBody14.addChild(&ProtoDeclare15);

Script& Script21 =  Script();
Script21.setDEF(CString("_animContainer"));
Script21.setDirectOutput(True);
Script21.setMustEvaluate(True);
field& field22 =  field();
field22.setName(CString("set_whichChoice"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("SFInt32"));
Script21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("set_stopTime"));
field23.setAccessType(CString("inputOnly"));
field23.setType(CString("SFTime"));
Script21.addChild(&field23);

field& field24 =  field();
field24.setName(CString("children"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("MFNode"));
Script21.addChild(&field24);

field& field25 =  field();
field25.setName(CString("data"));
field25.setAccessType(CString("initializeOnly"));
field25.setType(CString("SFNode"));
ProtoInstance& ProtoInstance26 =  ProtoInstance();
ProtoInstance26.setName(CString("Data"));
ProtoInstance26.setDEF(CString("Data"));
IS& IS27 =  IS();
Connect& connect28 =  Connect();
connect28.setNodeField(CString("whichChoice"));
connect28.setProtoField(CString("whichChoice"));
IS27.addChild(&connect28);

Connect& connect29 =  Connect();
connect29.setNodeField(CString("stopTime"));
connect29.setProtoField(CString("stopTime"));
IS27.addChild(&connect29);

ProtoInstance26.addChild(&IS27);

field25.addChild(&ProtoInstance26);

Script21.addChild(&field25);

IS& IS30 =  IS();
Connect& connect31 =  Connect();
connect31.setNodeField(CString("children"));
connect31.setProtoField(CString("children"));
IS30.addChild(&connect31);

Script21.addChild(&IS30);


Script21.setSourceCode(CString("vrmlscript:")+
_T("function set_whichChoice(value, time)")+
_T("{")+
_T("	children[value].startTime = time;")+
_T("}")+
_T("function set_stopTime(value, time)")+
_T("{")+
_T("	children[data.whichChoice].stopTime = time;")+
_T("}"));
ProtoBody14.addChild(&Script21);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("Data"));
ROUTE32.setFromField(CString("whichChoice_changed"));
ROUTE32.setToNode(CString("_animContainer"));
ROUTE32.setToField(CString("set_whichChoice"));
ProtoBody14.addChild(&ROUTE32);

ROUTE& ROUTE33 =  ROUTE();
ROUTE33.setFromNode(CString("Data"));
ROUTE33.setFromField(CString("stopTime_changed"));
ROUTE33.setToNode(CString("_animContainer"));
ROUTE33.setToField(CString("set_stopTime"));
ProtoBody14.addChild(&ROUTE33);

ProtoDeclare8.addChild(&ProtoBody14);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
