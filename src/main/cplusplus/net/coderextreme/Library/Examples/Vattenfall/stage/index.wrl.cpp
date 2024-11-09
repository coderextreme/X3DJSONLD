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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:25 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:25 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ExternProtoDeclare& ExternProtoDeclare8 =  ExternProtoDeclare();
ExternProtoDeclare8.setName(CString("World"));
ExternProtoDeclare8.setUrl(new CString[]{CString("World_proto.x3d")}, 1);
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

field& field16 =  field();
field16.setName(CString("children"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFNode"));
ExternProtoDeclare8.addChild(&field16);

Scene7.addChild(&ExternProtoDeclare8);

ExternProtoDeclare& ExternProtoDeclare17 =  ExternProtoDeclare();
ExternProtoDeclare17.setName(CString("Bool"));
ExternProtoDeclare17.setUrl(new CString[]{CString("Bool_proto.x3d")}, 1);
field& field18 =  field();
field18.setName(CString("value"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFBool"));
ExternProtoDeclare17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("startTime"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
ExternProtoDeclare17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("bool"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFBool"));
ExternProtoDeclare17.addChild(&field20);

Scene7.addChild(&ExternProtoDeclare17);

ExternProtoDeclare& ExternProtoDeclare21 =  ExternProtoDeclare();
ExternProtoDeclare21.setName(CString("Int"));
ExternProtoDeclare21.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field22 =  field();
field22.setName(CString("value"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFInt32"));
ExternProtoDeclare21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("startTime"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFTime"));
ExternProtoDeclare21.addChild(&field23);

field& field24 =  field();
field24.setName(CString("int"));
field24.setAccessType(CString("outputOnly"));
field24.setType(CString("SFInt32"));
ExternProtoDeclare21.addChild(&field24);

Scene7.addChild(&ExternProtoDeclare21);

ExternProtoDeclare& ExternProtoDeclare25 =  ExternProtoDeclare();
ExternProtoDeclare25.setName(CString("Import"));
ExternProtoDeclare25.setUrl(new CString[]{CString("Import_proto.x3d")}, 1);
field& field26 =  field();
field26.setName(CString("url"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("MFString"));
ExternProtoDeclare25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("startTime"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFTime"));
ExternProtoDeclare25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("isActive"));
field28.setAccessType(CString("outputOnly"));
field28.setType(CString("SFBool"));
ExternProtoDeclare25.addChild(&field28);

field& field29 =  field();
field29.setName(CString("exitTime"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFTime"));
ExternProtoDeclare25.addChild(&field29);

field& field30 =  field();
field30.setName(CString("parameter"));
field30.setAccessType(CString("inputOutput"));
field30.setType(CString("MFNode"));
ExternProtoDeclare25.addChild(&field30);

field& field31 =  field();
field31.setName(CString("children"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("MFNode"));
ExternProtoDeclare25.addChild(&field31);

Scene7.addChild(&ExternProtoDeclare25);

WorldInfo& WorldInfo32 =  WorldInfo();
WorldInfo32.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo32);

Viewpoint& Viewpoint33 =  Viewpoint();
Viewpoint33.setDEF(CString("VP2"));
Viewpoint33.setDescription(CString("viewpoint1"));
Viewpoint33.setPosition(new float[]{0.0690002,1.5,43.753});
Scene7.addChild(&Viewpoint33);

NavigationInfo& NavigationInfo34 =  NavigationInfo();
NavigationInfo34.setDEF(CString("_NoNameNavInfo2"));
NavigationInfo34.setType(new CString[]{CString("NONE")}, 1);
NavigationInfo34.setHeadlight(False);
Scene7.addChild(&NavigationInfo34);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("HUDWorld"));
ProtoInstance& ProtoInstance36 =  ProtoInstance();
ProtoInstance36.setName(CString("World"));
fieldValue& fieldValue37 =  fieldValue();
fieldValue37.setName(CString("interface"));
ProtoInstance& ProtoInstance38 =  ProtoInstance();
ProtoInstance38.setName(CString("Bool"));
ProtoInstance38.setDEF(CString("_1"));
fieldValue37.addChild(&ProtoInstance38);

ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(CString("Bool"));
ProtoInstance39.setDEF(CString("_2"));
fieldValue37.addChild(&ProtoInstance39);

ProtoInstance& ProtoInstance40 =  ProtoInstance();
ProtoInstance40.setName(CString("Bool"));
ProtoInstance40.setDEF(CString("_3"));
fieldValue37.addChild(&ProtoInstance40);

ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setName(CString("Bool"));
ProtoInstance41.setDEF(CString("_4"));
fieldValue37.addChild(&ProtoInstance41);

ProtoInstance& ProtoInstance42 =  ProtoInstance();
ProtoInstance42.setName(CString("Bool"));
ProtoInstance42.setDEF(CString("_5"));
fieldValue37.addChild(&ProtoInstance42);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("Bool"));
ProtoInstance43.setDEF(CString("_6"));
fieldValue37.addChild(&ProtoInstance43);

ProtoInstance& ProtoInstance44 =  ProtoInstance();
ProtoInstance44.setName(CString("Bool"));
ProtoInstance44.setDEF(CString("_7"));
fieldValue37.addChild(&ProtoInstance44);

ProtoInstance& ProtoInstance45 =  ProtoInstance();
ProtoInstance45.setName(CString("Int"));
ProtoInstance45.setDEF(CString("_8"));
fieldValue37.addChild(&ProtoInstance45);

ProtoInstance36.addChild(&fieldValue37);

fieldValue& fieldValue46 =  fieldValue();
fieldValue46.setName(CString("children"));
ProtoInstance& ProtoInstance47 =  ProtoInstance();
ProtoInstance47.setName(CString("Import"));
ProtoInstance47.setDEF(CString("_9"));
fieldValue& fieldValue48 =  fieldValue();
fieldValue48.setName(CString("url"));
fieldValue48.setValue(CString("\", \" \"hud.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/hud.x3d\""));
ProtoInstance47.addChild(&fieldValue48);

fieldValue46.addChild(&ProtoInstance47);

ProtoInstance36.addChild(&fieldValue46);

Transform35.addChild(&ProtoInstance36);

Scene7.addChild(&Transform35);

Transform& Transform49 =  Transform();
Transform49.setDEF(CString("SceneWorld"));
ProtoInstance& ProtoInstance50 =  ProtoInstance();
ProtoInstance50.setName(CString("World"));
fieldValue& fieldValue51 =  fieldValue();
fieldValue51.setName(CString("interface"));
ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(CString("Bool"));
ProtoInstance52.setDEF(CString("_10"));
fieldValue51.addChild(&ProtoInstance52);

ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("Bool"));
ProtoInstance53.setDEF(CString("_11"));
fieldValue51.addChild(&ProtoInstance53);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("Bool"));
ProtoInstance54.setDEF(CString("_12"));
fieldValue51.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance55 =  ProtoInstance();
ProtoInstance55.setName(CString("Bool"));
ProtoInstance55.setDEF(CString("_13"));
fieldValue51.addChild(&ProtoInstance55);

ProtoInstance& ProtoInstance56 =  ProtoInstance();
ProtoInstance56.setName(CString("Bool"));
ProtoInstance56.setDEF(CString("_14"));
fieldValue51.addChild(&ProtoInstance56);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("Bool"));
ProtoInstance57.setDEF(CString("_15"));
fieldValue51.addChild(&ProtoInstance57);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("Bool"));
ProtoInstance58.setDEF(CString("_16"));
fieldValue51.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("Int"));
ProtoInstance59.setDEF(CString("_17"));
fieldValue51.addChild(&ProtoInstance59);

ProtoInstance50.addChild(&fieldValue51);

fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(CString("children"));
ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("Import"));
ProtoInstance61.setDEF(CString("_18"));
fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("url"));
fieldValue62.setValue(CString("\", \" \"scene.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/scene.x3d\""));
ProtoInstance61.addChild(&fieldValue62);

fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("startTime"));
fieldValue63.setValue(CString("1"));
ProtoInstance61.addChild(&fieldValue63);

fieldValue60.addChild(&ProtoInstance61);

ProtoInstance50.addChild(&fieldValue60);

Transform49.addChild(&ProtoInstance50);

Scene7.addChild(&Transform49);

ROUTE& ROUTE64 =  ROUTE();
ROUTE64.setFromNode(CString("_18"));
ROUTE64.setFromField(CString("exitTime"));
ROUTE64.setToNode(CString("_9"));
ROUTE64.setToField(CString("set_startTime"));
Scene7.addChild(&ROUTE64);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("_1"));
ROUTE65.setFromField(CString("value_changed"));
ROUTE65.setToNode(CString("_10"));
ROUTE65.setToField(CString("set_value"));
Scene7.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("_2"));
ROUTE66.setFromField(CString("value_changed"));
ROUTE66.setToNode(CString("_11"));
ROUTE66.setToField(CString("set_value"));
Scene7.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("_3"));
ROUTE67.setFromField(CString("value_changed"));
ROUTE67.setToNode(CString("_12"));
ROUTE67.setToField(CString("set_value"));
Scene7.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("_4"));
ROUTE68.setFromField(CString("value_changed"));
ROUTE68.setToNode(CString("_13"));
ROUTE68.setToField(CString("set_value"));
Scene7.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("_5"));
ROUTE69.setFromField(CString("value_changed"));
ROUTE69.setToNode(CString("_14"));
ROUTE69.setToField(CString("set_value"));
Scene7.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("_6"));
ROUTE70.setFromField(CString("value_changed"));
ROUTE70.setToNode(CString("_15"));
ROUTE70.setToField(CString("set_value"));
Scene7.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("_7"));
ROUTE71.setFromField(CString("value_changed"));
ROUTE71.setToNode(CString("_16"));
ROUTE71.setToField(CString("set_value"));
Scene7.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("_8"));
ROUTE72.setFromField(CString("value_changed"));
ROUTE72.setToNode(CString("_17"));
ROUTE72.setToField(CString("set_value"));
Scene7.addChild(&ROUTE72);

X3D0.setScene(&Scene7);

}
