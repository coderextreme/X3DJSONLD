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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:21 GMT"));
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
meta6.setContent(CString("Mon, 27 Apr 2015 08:52:11 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("Scene"));
ExternProtoDeclare8.setUrl(new CString[]{CString("Scene_proto.x3d")}, 1);
field& field9 =  field();
field9.setName(CString("enabled"));
field9.setAccessType(CString("inputOutput"));
field9.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field9);

field& field10 =  field();
field10.setName(CString("startTime"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field10);

field& field11 =  field();
field11.setName(CString("stopTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field11);

field& field12 =  field();
field12.setName(CString("isActive"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFBool"));
ExternProtoDeclare8.addChild(&field12);

field& field13 =  field();
field13.setName(CString("enterTime"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field13);

field& field14 =  field();
field14.setName(CString("exitTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ExternProtoDeclare8.addChild(&field14);

field& field15 =  field();
field15.setName(CString("interface"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFNode"));
ExternProtoDeclare8.addChild(&field15);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare16 =  ExternProtoDeclare();
ExternProtoDeclare16.setName(CString("Int"));
ExternProtoDeclare16.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field17 =  field();
field17.setName(CString("value"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFInt32"));
ExternProtoDeclare16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("startTime"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ExternProtoDeclare16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("int"));
field19.setAccessType(CString("outputOnly"));
field19.setType(CString("SFInt32"));
ExternProtoDeclare16.addChild(&field19);

Scene7.addChild(&ExternProtoDeclare16);

WorldInfo& WorldInfo20 =  WorldInfo();
WorldInfo20.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo20);

Switch& Switch21 =  Switch();
Switch21.setDEF(CString("_1"));
Switch21.setWhichChoice(0);
Inline& Inline22 =  Inline();
Inline22.setUrl(new CString[]{CString("film1.x3d")}, 1);
Inline22.setBboxSize(new float[]{35.944,19.1172,0.299421});
Inline22.setBboxCenter(new float[]{7.5798,9.99219,0.153977});
Switch21.addChild(&Inline22);

Inline& Inline23 =  Inline();
Inline23.setUrl(new CString[]{CString("film2.x3d")}, 1);
Inline23.setBboxSize(new float[]{35.944,19.1172,0.299421});
Inline23.setBboxCenter(new float[]{7.5798,9.99219,0.153977});
Switch21.addChild(&Inline23);

Inline& Inline24 =  Inline();
Inline24.setUrl(new CString[]{CString("film3.x3d")}, 1);
Inline24.setBboxSize(new float[]{35.944,19.1172,0.299421});
Inline24.setBboxCenter(new float[]{7.5798,9.99219,0.153977});
Switch21.addChild(&Inline24);

Inline& Inline25 =  Inline();
Inline25.setUrl(new CString[]{CString("film4.x3d")}, 1);
Inline25.setBboxSize(new float[]{35.944,19.1172,0.299421});
Inline25.setBboxCenter(new float[]{7.5798,9.99219,0.153977});
Switch21.addChild(&Inline25);

Inline& Inline26 =  Inline();
Inline26.setUrl(new CString[]{CString("film5.x3d")}, 1);
Inline26.setBboxSize(new float[]{35.944,19.1172,0.299421});
Inline26.setBboxCenter(new float[]{7.5798,9.99219,0.153977});
Switch21.addChild(&Inline26);

Inline& Inline27 =  Inline();
Inline27.setUrl(new CString[]{CString("film6.x3d")}, 1);
Inline27.setBboxSize(new float[]{35.944,19.1172,0.299421});
Inline27.setBboxCenter(new float[]{7.5798,9.99219,0.153977});
Switch21.addChild(&Inline27);

Scene7.addChild(&Switch21);

Transform& Transform28 =  Transform();
Transform28.setDEF(CString("Scene"));
ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(CString("Scene"));
fieldValue& fieldValue30 =  fieldValue();
fieldValue30.setName(CString("interface"));
ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("Int"));
ProtoInstance31.setDEF(CString("_2"));
fieldValue30.addChild(&ProtoInstance31);

ProtoInstance29.addChild(&fieldValue30);

Transform28.addChild(&ProtoInstance29);

Scene7.addChild(&Transform28);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("_2"));
ROUTE32.setFromField(CString("value_changed"));
ROUTE32.setToNode(CString("_1"));
ROUTE32.setToField(CString("set_whichChoice"));
Scene7.addChild(&ROUTE32);

X3D0.setScene(&Scene7);

}
