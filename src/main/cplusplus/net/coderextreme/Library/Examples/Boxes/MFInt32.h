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
meta3.setContent(CString("Sat, 05 Sep 2015 17:32:47 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.0.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sat, 05 Sep 2015 17:32:47 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("MFInt32"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("set_triggerTime"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("keyValue"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("MFInt32"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("value_changed"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("MFInt32"));
ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
Script& Script14 =  Script();
Script14.setDEF(CString("MFInt32"));
field& field15 =  field();
field15.setName(CString("set_triggerTime"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFTime"));
Script14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("keyValue"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFInt32"));
Script14.addChild(&field16);

field& field17 =  field();
field17.setName(CString("value_changed"));
field17.setAccessType(CString("outputOnly"));
field17.setType(CString("MFInt32"));
Script14.addChild(&field17);

IS& IS18 =  IS();
Connect& connect19 =  Connect();
connect19.setNodeField(CString("set_triggerTime"));
connect19.setProtoField(CString("set_triggerTime"));
IS18.addChild(&connect19);

Connect& connect20 =  Connect();
connect20.setNodeField(CString("keyValue"));
connect20.setProtoField(CString("keyValue"));
IS18.addChild(&connect20);

Connect& connect21 =  Connect();
connect21.setNodeField(CString("value_changed"));
connect21.setProtoField(CString("value_changed"));
IS18.addChild(&connect21);

Script14.addChild(&IS18);


//Script14.setSourceCode(CString("javascript:")+
//_T("function set_triggerTime (value, time)")+
//_T("{")+
//_T("	value_changed = keyValue;")+
//_T("}"));
ProtoBody13.addChild(&Script14);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
