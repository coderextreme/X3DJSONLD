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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:16 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Time2MFString"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("set_time"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFTime"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("string_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("MFString"));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
Script& Script13 =  Script();
field& field14 =  field();
field14.setName(CString("string_changed"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("MFString"));
Script13.addChild(&field14);

field& field15 =  field();
field15.setName(CString("set_time"));
field15.setAccessType(CString("inputOnly"));
field15.setType(CString("SFTime"));
Script13.addChild(&field15);

IS& IS16 =  IS();
Connect& connect17 =  Connect();
connect17.setNodeField(CString("string_changed"));
connect17.setProtoField(CString("string_changed"));
IS16.addChild(&connect17);

Connect& connect18 =  Connect();
connect18.setNodeField(CString("set_time"));
connect18.setProtoField(CString("set_time"));
IS16.addChild(&connect18);

Script13.addChild(&IS16);


//Script13.setSourceCode(CString("vrmlscript:")+
//_T("function set_time(value, time)")+
//_T("{")+
//_T("	t2 = value;")+
//_T("	mil = Math.floor(t2 * 1000) % 1000;")+
//_T("	t2 = Math.floor(t2);")+
//_T("	sec = t2%60;")+
//_T("	min = Math.floor((t2 - sec)/60)%60;")+
//_T("	s = (min > 9 ? min : \"0\" + min) + \".\" + (sec > 9 ? sec : \"0\" + sec )+ \".\" + mil;")+
//_T("	string_changed = new MFString(s);")+
//_T("}"));
ProtoBody12.addChild(&Script13);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

WorldInfo& WorldInfo19 =  WorldInfo();
WorldInfo19.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo19);

X3D0.setScene(&Scene7);

//}
