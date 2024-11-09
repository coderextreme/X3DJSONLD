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
meta3.setContent(CString("Thu, 23 Apr 2015 06:06:57 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:06:57 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Bool"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("value_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("keyValue"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFBool"));
ProtoInterface9.addChild(&field12);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("Data"));
ProtoInterface& ProtoInterface15 =  ProtoInterface();
field& field16 =  field();
field16.setName(CString("keyValue"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFBool"));
ProtoInterface15.addChild(&field16);

ProtoDeclare14.addChild(&ProtoInterface15);

ProtoBody& ProtoBody17 =  ProtoBody();
Group& Group18 =  Group();
ProtoBody17.addChild(&Group18);

ProtoDeclare14.addChild(&ProtoBody17);

ProtoBody13.addChild(&ProtoDeclare14);

Script& Script19 =  Script();
Script19.setDEF(CString("_bool"));
Script19.setDirectOutput(true);
field& field20 =  field();
field20.setName(CString("startTime"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFTime"));
Script19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("value_changed"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFBool"));
Script19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("data"));
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFNode"));
ProtoInstance& ProtoInstance23 =  ProtoInstance();
ProtoInstance23.setName(CString("Data"));
IS& IS24 =  IS();
Connect& connect25 =  Connect();
connect25.setNodeField(CString("keyValue"));
connect25.setProtoField(CString("keyValue"));
IS24.addChild(&connect25);

ProtoInstance23.addChild(&IS24);

field22.addChild(&ProtoInstance23);

Script19.addChild(&field22);

IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("startTime"));
connect27.setProtoField(CString("startTime"));
IS26.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("value_changed"));
connect28.setProtoField(CString("value_changed"));
IS26.addChild(&connect28);

Script19.addChild(&IS26);


//Script19.setSourceCode(CString("vrmlscript:")+
//_T("function startTime(value, time)")+
//_T("{")+
//_T("	value_changed = data.keyValue;")+
//_T("}"));
ProtoBody13.addChild(&Script19);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
