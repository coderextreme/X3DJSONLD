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
ProtoDeclare8.setName(CString("AnimCtrl"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("start"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("stop"));
field11.setAccessType(CString("inputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("stoped"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("isActive"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ProtoInterface9.addChild(&field13);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody14 =  ProtoBody();
Script& Script15 =  Script();
Script15.setDEF(CString("_animCtrl"));
field& field16 =  field();
field16.setName(CString("start"));
field16.setAccessType(CString("inputOnly"));
field16.setType(CString("SFBool"));
Script15.addChild(&field16);

field& field17 =  field();
field17.setName(CString("stop"));
field17.setAccessType(CString("inputOnly"));
field17.setType(CString("SFBool"));
Script15.addChild(&field17);

field& field18 =  field();
field18.setName(CString("stoped"));
field18.setAccessType(CString("outputOnly"));
field18.setType(CString("SFBool"));
Script15.addChild(&field18);

field& field19 =  field();
field19.setName(CString("isActive"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFBool"));
Script15.addChild(&field19);

IS& IS20 =  IS();
Connect& connect21 =  Connect();
connect21.setNodeField(CString("start"));
connect21.setProtoField(CString("start"));
IS20.addChild(&connect21);

Connect& connect22 =  Connect();
connect22.setNodeField(CString("stop"));
connect22.setProtoField(CString("stop"));
IS20.addChild(&connect22);

Connect& connect23 =  Connect();
connect23.setNodeField(CString("stoped"));
connect23.setProtoField(CString("stoped"));
IS20.addChild(&connect23);

Connect& connect24 =  Connect();
connect24.setNodeField(CString("isActive"));
connect24.setProtoField(CString("isActive"));
IS20.addChild(&connect24);

Script15.addChild(&IS20);


//Script15.setSourceCode(CString("vrmlscript:")+
//_T("function start(value, time)")+
//_T("{")+
//_T("	if (value) {")+
//_T("		isActive = TRUE;")+
//_T("	}")+
//_T("}")+
//_T("function stop(value, time)")+
//_T("{")+
//_T("	if (!value) {")+
//_T("		stoped = TRUE;")+
//_T("		isActive = FALSE;")+
//_T("	}")+
//_T("}"));
ProtoBody14.addChild(&Script15);

ProtoDeclare8.addChild(&ProtoBody14);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
