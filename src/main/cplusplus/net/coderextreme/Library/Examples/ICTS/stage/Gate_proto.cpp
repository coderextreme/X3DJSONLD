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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:04 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Gate"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("offset"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("isActive"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("enterTime"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("exitTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody15 =  ProtoBody();
ProtoDeclare& ProtoDeclare16 =  ProtoDeclare();
ProtoDeclare16.setName(CString("Data"));
ProtoInterface& ProtoInterface17 =  ProtoInterface();
field& field18 =  field();
field18.setName(CString("offset"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFBool"));
ProtoInterface17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("startTime"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
ProtoInterface17.addChild(&field19);

ProtoDeclare16.addChild(&ProtoInterface17);

ProtoBody& ProtoBody20 =  ProtoBody();
Group& Group21 =  Group();
ProtoBody20.addChild(&Group21);

ProtoDeclare16.addChild(&ProtoBody20);

ProtoBody15.addChild(&ProtoDeclare16);

Script& Script22 =  Script();
Script22.setDEF(CString("_1"));
Script22.setDirectOutput(True);
Script22.setMustEvaluate(True);
field& field23 =  field();
field23.setName(CString("isActive"));
field23.setAccessType(CString("outputOnly"));
field23.setType(CString("SFBool"));
Script22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("enterTime"));
field24.setAccessType(CString("outputOnly"));
field24.setType(CString("SFTime"));
Script22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("exitTime"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFTime"));
Script22.addChild(&field25);

field& field26 =  field();
field26.setName(CString("set_startTime"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFTime"));
Script22.addChild(&field26);

field& field27 =  field();
field27.setName(CString("data"));
field27.setAccessType(CString("initializeOnly"));
field27.setType(CString("SFNode"));
ProtoInstance& ProtoInstance28 =  ProtoInstance();
ProtoInstance28.setName(CString("Data"));
ProtoInstance28.setDEF(CString("_2"));
IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("offset"));
connect30.setProtoField(CString("offset"));
IS29.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("startTime"));
connect31.setProtoField(CString("startTime"));
IS29.addChild(&connect31);

ProtoInstance28.addChild(&IS29);

field27.addChild(&ProtoInstance28);

Script22.addChild(&field27);

IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("isActive"));
connect33.setProtoField(CString("isActive"));
IS32.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("enterTime"));
connect34.setProtoField(CString("enterTime"));
IS32.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("exitTime"));
connect35.setProtoField(CString("exitTime"));
IS32.addChild(&connect35);

Script22.addChild(&IS32);


Script22.setSourceCode(CString("vrmlscript:")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	if (data.offset) {")+
_T("		isActive = FALSE;")+
_T("		exitTime = time;")+
_T("	} else {")+
_T("		isActive = TRUE;")+
_T("		enterTime = time;")+
_T("	}")+
_T("}"));
ProtoBody15.addChild(&Script22);

ROUTE& ROUTE36 =  ROUTE();
ROUTE36.setFromNode(CString("_2"));
ROUTE36.setFromField(CString("startTime_changed"));
ROUTE36.setToNode(CString("_1"));
ROUTE36.setToField(CString("set_startTime"));
ProtoBody15.addChild(&ROUTE36);

ProtoDeclare8.addChild(&ProtoBody15);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
