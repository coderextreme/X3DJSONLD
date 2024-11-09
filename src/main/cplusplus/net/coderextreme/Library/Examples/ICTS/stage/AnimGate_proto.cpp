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
ProtoDeclare8.setName(CString("AnimGate"));
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
field13.setName(CString("state"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("enterTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ProtoInterface9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("exitTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ProtoInterface9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("anim"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFBool"));
ProtoInterface9.addChild(&field16);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody17 =  ProtoBody();
ProtoDeclare& ProtoDeclare18 =  ProtoDeclare();
ProtoDeclare18.setName(CString("Data"));
ProtoInterface& ProtoInterface19 =  ProtoInterface();
field& field20 =  field();
field20.setName(CString("offset"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFBool"));
ProtoInterface19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("startTime"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFTime"));
ProtoInterface19.addChild(&field21);

ProtoDeclare18.addChild(&ProtoInterface19);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
ProtoBody22.addChild(&Group23);

ProtoDeclare18.addChild(&ProtoBody22);

ProtoBody17.addChild(&ProtoDeclare18);

Script& Script24 =  Script();
Script24.setDEF(CString("_1"));
Script24.setDirectOutput(True);
Script24.setMustEvaluate(True);
field& field25 =  field();
field25.setName(CString("isActive"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFBool"));
Script24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("state"));
field26.setAccessType(CString("outputOnly"));
field26.setType(CString("SFBool"));
Script24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("enterTime"));
field27.setAccessType(CString("outputOnly"));
field27.setType(CString("SFTime"));
Script24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("exitTime"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFTime"));
Script24.addChild(&field28);

field& field29 =  field();
field29.setName(CString("set_startTime"));
field29.setAccessType(CString("inputOnly"));
field29.setType(CString("SFTime"));
Script24.addChild(&field29);

field& field30 =  field();
field30.setName(CString("anim"));
field30.setAccessType(CString("inputOnly"));
field30.setType(CString("SFBool"));
Script24.addChild(&field30);

field& field31 =  field();
field31.setName(CString("data"));
field31.setAccessType(CString("initializeOnly"));
field31.setType(CString("SFNode"));
ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("Data"));
ProtoInstance32.setDEF(CString("_2"));
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("offset"));
connect34.setProtoField(CString("offset"));
IS33.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("startTime"));
connect35.setProtoField(CString("startTime"));
IS33.addChild(&connect35);

ProtoInstance32.addChild(&IS33);

field31.addChild(&ProtoInstance32);

Script24.addChild(&field31);

IS& IS36 =  IS();
Connect& connect37 =  Connect();
connect37.setNodeField(CString("isActive"));
connect37.setProtoField(CString("isActive"));
IS36.addChild(&connect37);

Connect& connect38 =  Connect();
connect38.setNodeField(CString("state"));
connect38.setProtoField(CString("state"));
IS36.addChild(&connect38);

Connect& connect39 =  Connect();
connect39.setNodeField(CString("enterTime"));
connect39.setProtoField(CString("enterTime"));
IS36.addChild(&connect39);

Connect& connect40 =  Connect();
connect40.setNodeField(CString("exitTime"));
connect40.setProtoField(CString("exitTime"));
IS36.addChild(&connect40);

Connect& connect41 =  Connect();
connect41.setNodeField(CString("anim"));
connect41.setProtoField(CString("anim"));
IS36.addChild(&connect41);

Script24.addChild(&IS36);


Script24.setSourceCode(CString("vrmlscript:")+
_T("function set_startTime(value, time)")+
_T("{")+
_T("	if (data.offset) {")+
_T("		exitTime = time;")+
_T("		isActive = FALSE;")+
_T("	} else {")+
_T("		isActive = TRUE;")+
_T("		enterTime = time;")+
_T("	}")+
_T("}")+
_T("function anim(value, time)")+
_T("{")+
_T("	if (!value) { state = data.offset; }")+
_T("}"));
ProtoBody17.addChild(&Script24);

ROUTE& ROUTE42 =  ROUTE();
ROUTE42.setFromNode(CString("_2"));
ROUTE42.setFromField(CString("startTime_changed"));
ROUTE42.setToNode(CString("_1"));
ROUTE42.setToField(CString("set_startTime"));
ProtoBody17.addChild(&ROUTE42);

ProtoDeclare8.addChild(&ProtoBody17);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
