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
meta3.setContent(CString("Fri, 28 Aug 2015 13:01:10 GMT"));
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
meta6.setContent(CString("Fri, 28 Aug 2015 13:01:10 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Unless"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("value"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
field10.setValue(CString("true"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("touchTime"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFTime"));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
ProtoDeclare& ProtoDeclare13 =  ProtoDeclare();
ProtoDeclare13.setName(CString("Data"));
ProtoInterface& ProtoInterface14 =  ProtoInterface();
field& field15 =  field();
field15.setName(CString("value"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFBool"));
field15.setValue(CString("true"));
ProtoInterface14.addChild(&field15);

ProtoDeclare13.addChild(&ProtoInterface14);

ProtoBody& ProtoBody16 =  ProtoBody();
Group& Group17 =  Group();
ProtoBody16.addChild(&Group17);

ProtoDeclare13.addChild(&ProtoBody16);

ProtoBody12.addChild(&ProtoDeclare13);

Script& Script18 =  Script();
Script18.setDEF(CString("_unless"));
Script18.setDirectOutput(true);
field& field19 =  field();
field19.setName(CString("touchTime"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFTime"));
Script18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("set_value"));
field20.setAccessType(CString("inputOnly"));
field20.setType(CString("SFBool"));
Script18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("data"));
field21.setAccessType(CString("initializeOnly"));
field21.setType(CString("SFNode"));
ProtoInstance& ProtoInstance22 =  ProtoInstance();
ProtoInstance22.setName(CString("Data"));
ProtoInstance22.setDEF(CString("Data"));
IS& IS23 =  IS();
Connect& connect24 =  Connect();
connect24.setNodeField(CString("value"));
connect24.setProtoField(CString("value"));
IS23.addChild(&connect24);

ProtoInstance22.addChild(&IS23);

field21.addChild(&ProtoInstance22);

Script18.addChild(&field21);

IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("touchTime"));
connect26.setProtoField(CString("touchTime"));
IS25.addChild(&connect26);

Script18.addChild(&IS25);


//Script18.setSourceCode(CString("vrmlscript:")+
//_T("function set_value(value, time) { if (!value) touchTime = time; }")+
//_T("function initialize() { set_value(data.value, 0); }"));
ProtoBody12.addChild(&Script18);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(CString("Data"));
ROUTE27.setFromField(CString("value_changed"));
ROUTE27.setToNode(CString("_unless"));
ROUTE27.setToField(CString("set_value"));
ProtoBody12.addChild(&ROUTE27);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

//}
