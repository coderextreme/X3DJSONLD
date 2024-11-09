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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:12 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:12 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("Matrix"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("size"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFVec2f"));
ProtoInterface9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("matrix"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("MFInt32"));
field11.setValue(CString("0 0"));
ProtoInterface9.addChild(&field11);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody12 =  ProtoBody();
ProtoDeclare& ProtoDeclare13 =  ProtoDeclare();
ProtoDeclare13.setName(CString("Data"));
ProtoInterface& ProtoInterface14 =  ProtoInterface();
field& field15 =  field();
field15.setName(CString("size"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFVec2f"));
ProtoInterface14.addChild(&field15);

field& field16 =  field();
field16.setName(CString("matrix"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFInt32"));
ProtoInterface14.addChild(&field16);

ProtoDeclare13.addChild(&ProtoInterface14);

ProtoBody& ProtoBody17 =  ProtoBody();
Group& Group18 =  Group();
ProtoBody17.addChild(&Group18);

ProtoDeclare13.addChild(&ProtoBody17);

ProtoBody12.addChild(&ProtoDeclare13);

Script& Script19 =  Script();
Script19.setDEF(CString("_matrix"));
Script19.setDirectOutput(True);
field& field20 =  field();
field20.setName(CString("data"));
field20.setAccessType(CString("initializeOnly"));
field20.setType(CString("SFNode"));
ProtoInstance& ProtoInstance21 =  ProtoInstance();
ProtoInstance21.setName(CString("Data"));
IS& IS22 =  IS();
Connect& connect23 =  Connect();
connect23.setNodeField(CString("size"));
connect23.setProtoField(CString("size"));
IS22.addChild(&connect23);

Connect& connect24 =  Connect();
connect24.setNodeField(CString("matrix"));
connect24.setProtoField(CString("matrix"));
IS22.addChild(&connect24);

ProtoInstance21.addChild(&IS22);

field20.addChild(&ProtoInstance21);

Script19.addChild(&field20);


Script19.setSourceCode(CString("vrmlscript:")+
_T("function initialize()")+
_T("{")+
_T("	matrix = new MFInt32();")+
_T("	for (i=0; i< data.size.x * data.size.y; i++) {")+
_T("		n = 0;")+
_T("		if (data.matrix[i]) {")+
_T("			if (data.matrix[i + 1]) n++;")+
_T("			if (data.matrix[i - 1]) n++;")+
_T("			if (data.matrix[i + data.size.x]) n++;")+
_T("			if (data.matrix[i - data.size.x]) n++;")+
_T("			matrix[i] = n;")+
_T("		} else {")+
_T("			matrix[i] = 0;")+
_T("		}")+
_T("	}")+
_T("	data.matrix = matrix;")+
_T("}"));
ProtoBody12.addChild(&Script19);

ProtoDeclare8.addChild(&ProtoBody12);

Scene7.addChild(&ProtoDeclare8);

X3D0.setScene(&Scene7);

}
