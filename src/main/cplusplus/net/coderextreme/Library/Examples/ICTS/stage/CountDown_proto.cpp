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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:00 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("CountDown"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
field10.setValue(CString("300"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("stopTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("set_time"));
field12.setAccessType(CString("inputOnly"));
field12.setType(CString("SFTime"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("offset"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFTime"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("time"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("exitTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody16 =  ProtoBody();
ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("Data"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("startTime"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("stopTime"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("offset"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface18.addChild(&field21);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
ProtoBody22.addChild(&Group23);

ProtoDeclare17.addChild(&ProtoBody22);

ProtoBody16.addChild(&ProtoDeclare17);

Group& Group24 =  Group();
Script& Script25 =  Script();
Script25.setDEF(CString("_countDown"));
Script25.setDirectOutput(True);
field& field26 =  field();
field26.setName(CString("time_changed"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFTime"));
Script25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("exitTime"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFTime"));
Script25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("set_time"));
field28.setAccessType(CString("inputOnly"));
field28.setType(CString("SFTime"));
Script25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_offset"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("offset"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFTime"));
Script25.addChild(&field30);

field& field31 =  field();
field31.setName(CString("last"));
field31.setAccessType(CString("initializeOnly"));
field31.setType(CString("SFTime"));
field31.setValue(CString("-1"));
Script25.addChild(&field31);

field& field32 =  field();
field32.setName(CString("data"));
field32.setAccessType(CString("initializeOnly"));
field32.setType(CString("SFNode"));
ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(CString("Data"));
ProtoInstance33.setDEF(CString("_1"));
IS& IS34 =  IS();
Connect& connect35 =  Connect();
connect35.setNodeField(CString("startTime"));
connect35.setProtoField(CString("startTime"));
IS34.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("stopTime"));
connect36.setProtoField(CString("stopTime"));
IS34.addChild(&connect36);

Connect& connect37 =  Connect();
connect37.setNodeField(CString("offset"));
connect37.setProtoField(CString("offset"));
IS34.addChild(&connect37);

ProtoInstance33.addChild(&IS34);

field32.addChild(&ProtoInstance33);

Script25.addChild(&field32);

IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("time_changed"));
connect39.setProtoField(CString("time"));
IS38.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("exitTime"));
connect40.setProtoField(CString("exitTime"));
IS38.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("set_time"));
connect41.setProtoField(CString("set_time"));
IS38.addChild(&connect41);

Script25.addChild(&IS38);


Script25.setSourceCode(CString("vrmlscript:")+
_T("function  initialize()")+
_T("{")+
_T("	offset = data.startTime;")+
_T("	time_changed = offset;")+
_T("}")+
_T("function  set_offset(value, time)")+
_T("{")+
_T("	offset = value;")+
_T("	last = -1;")+
_T("}")+
_T("function  set_time(value, time)")+
_T("{")+
_T("	if (last < 0) last = time;")+
_T("	offset -= (time - last);")+
_T("	if (offset <= data.stopTime) {")+
_T("		last = -1;")+
_T("		offset = data.startTime;")+
_T("		time_changed = data.stopTime;")+
_T("		exitTime = time;")+
_T("	} else {		")+
_T("		time_changed = offset;")+
_T("		last = time;")+
_T("	}")+
_T("}"));
Group24.addChild(&Script25);

ProtoBody16.addChild(&Group24);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("_1"));
ROUTE42.setFromField(CString("offset_changed"));
ROUTE42.setToNode(CString("_countDown"));
ROUTE42.setToField(CString("set_offset"));
ProtoBody16.addChild(&ROUTE42);

ProtoDeclare8.addChild(&ProtoBody16);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
