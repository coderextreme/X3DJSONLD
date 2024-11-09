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
ProtoDeclare8.setName(CString("Not"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("set_value"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFBool"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("value_changed"));
field11.setAccessType(CString("outputOnly"));
field11.setType(CString("SFBool"));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
Script& Script13 =  Script();
Script13.setDEF(CString("_not"));
field& field14 =  field();
field14.setName(CString("set_value"));
field14.setAccessType(CString("inputOnly"));
field14.setType(CString("SFBool"));
Script13.addChild(&field14);

field& field15 =  field();
field15.setName(CString("value_changed"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFBool"));
Script13.addChild(&field15);

IS& IS16 =  IS();
Connect& connect17 =  Connect();
connect17.setNodeField(CString("set_value"));
connect17.setProtoField(CString("set_value"));
IS16.addChild(&connect17);

Connect& connect18 =  Connect();
connect18.setNodeField(CString("value_changed"));
connect18.setProtoField(CString("value_changed"));
IS16.addChild(&connect18);

Script13.addChild(&IS16);


Script13.setSourceCode(CString("vrmlscript:")+
_T("function set_value(value, time) { value_changed = !value; }"));
ProtoBody12.addChild(&Script13);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
