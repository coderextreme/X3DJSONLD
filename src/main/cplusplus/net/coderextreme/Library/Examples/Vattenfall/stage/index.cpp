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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:24 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Vattenfall"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("World"));
ExternProtoDeclare9.setUrl(new CString[]{CString("World_proto.x3d")}, 1);
field& field10 =  field();
field10.setName(CString("enabled"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("startTime"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("stopTime"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field12);

field& field13 =  field();
field13.setName(CString("isActive"));
field13.setAccessType(CString("outputOnly"));
field13.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field13);

field& field14 =  field();
field14.setName(CString("enterTime"));
field14.setAccessType(CString("outputOnly"));
field14.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field14);

field& field15 =  field();
field15.setName(CString("exitTime"));
field15.setAccessType(CString("outputOnly"));
field15.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field15);

field& field16 =  field();
field16.setName(CString("interface"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFNode"));
ExternProtoDeclare9.addChild(&field16);

field& field17 =  field();
field17.setName(CString("children"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("MFNode"));
ExternProtoDeclare9.addChild(&field17);

Scene8.addChild(&ExternProtoDeclare9);

ExternProtoDeclare& ExternProtoDeclare18 =  ExternProtoDeclare();
ExternProtoDeclare18.setName(CString("Bool"));
ExternProtoDeclare18.setUrl(new CString[]{CString("Bool_proto.x3d")}, 1);
field& field19 =  field();
field19.setName(CString("value"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFBool"));
ExternProtoDeclare18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("startTime"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFTime"));
ExternProtoDeclare18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("bool"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFBool"));
ExternProtoDeclare18.addChild(&field21);

Scene8.addChild(&ExternProtoDeclare18);

ExternProtoDeclare& ExternProtoDeclare22 =  ExternProtoDeclare();
ExternProtoDeclare22.setName(CString("Int"));
ExternProtoDeclare22.setUrl(new CString[]{CString("Int_proto.x3d")}, 1);
field& field23 =  field();
field23.setName(CString("value"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFInt32"));
ExternProtoDeclare22.addChild(&field23);

field& field24 =  field();
field24.setName(CString("startTime"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFTime"));
ExternProtoDeclare22.addChild(&field24);

field& field25 =  field();
field25.setName(CString("int"));
field25.setAccessType(CString("outputOnly"));
field25.setType(CString("SFInt32"));
ExternProtoDeclare22.addChild(&field25);

Scene8.addChild(&ExternProtoDeclare22);

ExternProtoDeclare& ExternProtoDeclare26 =  ExternProtoDeclare();
ExternProtoDeclare26.setName(CString("Import"));
ExternProtoDeclare26.setUrl(new CString[]{CString("Import_proto.x3d")}, 1);
field& field27 =  field();
field27.setName(CString("url"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("MFString"));
ExternProtoDeclare26.addChild(&field27);

field& field28 =  field();
field28.setName(CString("startTime"));
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("SFTime"));
ExternProtoDeclare26.addChild(&field28);

field& field29 =  field();
field29.setName(CString("isActive"));
field29.setAccessType(CString("outputOnly"));
field29.setType(CString("SFBool"));
ExternProtoDeclare26.addChild(&field29);

field& field30 =  field();
field30.setName(CString("exitTime"));
field30.setAccessType(CString("outputOnly"));
field30.setType(CString("SFTime"));
ExternProtoDeclare26.addChild(&field30);

field& field31 =  field();
field31.setName(CString("parameter"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("MFNode"));
ExternProtoDeclare26.addChild(&field31);

field& field32 =  field();
field32.setName(CString("children"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("MFNode"));
ExternProtoDeclare26.addChild(&field32);

Scene8.addChild(&ExternProtoDeclare26);

WorldInfo& WorldInfo33 =  WorldInfo();
WorldInfo33.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene8.addChild(&WorldInfo33);

Viewpoint& Viewpoint34 =  Viewpoint();
Viewpoint34.setDEF(CString("VP2"));
Viewpoint34.setDescription(CString("viewpoint1"));
Viewpoint34.setPosition(new float[]{0.0690002,1.5,43.753});
Scene8.addChild(&Viewpoint34);

NavigationInfo& NavigationInfo35 =  NavigationInfo();
NavigationInfo35.setDEF(CString("_NoNameNavInfo2"));
NavigationInfo35.setType(new CString[]{CString("NONE")}, 1);
NavigationInfo35.setHeadlight(False);
NavigationInfo35.setTransitionType(new CString[]{CString("TELEPORT")}, 1);
Scene8.addChild(&NavigationInfo35);

Transform& Transform36 =  Transform();
Transform36.setDEF(CString("HUDWorld"));
ProtoInstance& ProtoInstance37 =  ProtoInstance();
ProtoInstance37.setName(CString("World"));
fieldValue& fieldValue38 =  fieldValue();
fieldValue38.setName(CString("interface"));
ProtoInstance& ProtoInstance39 =  ProtoInstance();
ProtoInstance39.setName(CString("Bool"));
ProtoInstance39.setDEF(CString("_1"));
fieldValue38.addChild(&ProtoInstance39);

ProtoInstance& ProtoInstance40 =  ProtoInstance();
ProtoInstance40.setName(CString("Bool"));
ProtoInstance40.setDEF(CString("_2"));
fieldValue38.addChild(&ProtoInstance40);

ProtoInstance& ProtoInstance41 =  ProtoInstance();
ProtoInstance41.setName(CString("Bool"));
ProtoInstance41.setDEF(CString("_3"));
fieldValue38.addChild(&ProtoInstance41);

ProtoInstance& ProtoInstance42 =  ProtoInstance();
ProtoInstance42.setName(CString("Bool"));
ProtoInstance42.setDEF(CString("_4"));
fieldValue38.addChild(&ProtoInstance42);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("Bool"));
ProtoInstance43.setDEF(CString("_5"));
fieldValue38.addChild(&ProtoInstance43);

ProtoInstance& ProtoInstance44 =  ProtoInstance();
ProtoInstance44.setName(CString("Bool"));
ProtoInstance44.setDEF(CString("_6"));
fieldValue38.addChild(&ProtoInstance44);

ProtoInstance& ProtoInstance45 =  ProtoInstance();
ProtoInstance45.setName(CString("Bool"));
ProtoInstance45.setDEF(CString("_7"));
fieldValue38.addChild(&ProtoInstance45);

ProtoInstance& ProtoInstance46 =  ProtoInstance();
ProtoInstance46.setName(CString("Int"));
ProtoInstance46.setDEF(CString("_8"));
fieldValue38.addChild(&ProtoInstance46);

ProtoInstance37.addChild(&fieldValue38);

fieldValue& fieldValue47 =  fieldValue();
fieldValue47.setName(CString("children"));
ProtoInstance& ProtoInstance48 =  ProtoInstance();
ProtoInstance48.setName(CString("Import"));
ProtoInstance48.setDEF(CString("_9"));
fieldValue& fieldValue49 =  fieldValue();
fieldValue49.setName(CString("url"));
fieldValue49.setValue(CString("\", \" \"hud.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/hud.x3d\""));
ProtoInstance48.addChild(&fieldValue49);

fieldValue47.addChild(&ProtoInstance48);

ProtoInstance37.addChild(&fieldValue47);

Transform36.addChild(&ProtoInstance37);

Scene8.addChild(&Transform36);

Transform& Transform50 =  Transform();
Transform50.setDEF(CString("SceneWorld"));
ProtoInstance& ProtoInstance51 =  ProtoInstance();
ProtoInstance51.setName(CString("World"));
fieldValue& fieldValue52 =  fieldValue();
fieldValue52.setName(CString("interface"));
ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("Bool"));
ProtoInstance53.setDEF(CString("_10"));
fieldValue52.addChild(&ProtoInstance53);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("Bool"));
ProtoInstance54.setDEF(CString("_11"));
fieldValue52.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance55 =  ProtoInstance();
ProtoInstance55.setName(CString("Bool"));
ProtoInstance55.setDEF(CString("_12"));
fieldValue52.addChild(&ProtoInstance55);

ProtoInstance& ProtoInstance56 =  ProtoInstance();
ProtoInstance56.setName(CString("Bool"));
ProtoInstance56.setDEF(CString("_13"));
fieldValue52.addChild(&ProtoInstance56);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("Bool"));
ProtoInstance57.setDEF(CString("_14"));
fieldValue52.addChild(&ProtoInstance57);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("Bool"));
ProtoInstance58.setDEF(CString("_15"));
fieldValue52.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("Bool"));
ProtoInstance59.setDEF(CString("_16"));
fieldValue52.addChild(&ProtoInstance59);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("Int"));
ProtoInstance60.setDEF(CString("_17"));
fieldValue52.addChild(&ProtoInstance60);

ProtoInstance51.addChild(&fieldValue52);

fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("children"));
ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("Import"));
ProtoInstance62.setDEF(CString("_18"));
fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("url"));
fieldValue63.setValue(CString("\", \" \"scene.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/scene.x3d\""));
ProtoInstance62.addChild(&fieldValue63);

fieldValue& fieldValue64 =  fieldValue();
fieldValue64.setName(CString("startTime"));
fieldValue64.setValue(CString("1"));
ProtoInstance62.addChild(&fieldValue64);

fieldValue61.addChild(&ProtoInstance62);

ProtoInstance51.addChild(&fieldValue61);

Transform50.addChild(&ProtoInstance51);

Scene8.addChild(&Transform50);

ROUTE& ROUTE65 =  ROUTE();
ROUTE65.setFromNode(CString("_18"));
ROUTE65.setFromField(CString("exitTime"));
ROUTE65.setToNode(CString("_9"));
ROUTE65.setToField(CString("set_startTime"));
Scene8.addChild(&ROUTE65);

ROUTE& ROUTE66 =  ROUTE();
ROUTE66.setFromNode(CString("_1"));
ROUTE66.setFromField(CString("value_changed"));
ROUTE66.setToNode(CString("_10"));
ROUTE66.setToField(CString("set_value"));
Scene8.addChild(&ROUTE66);

ROUTE& ROUTE67 =  ROUTE();
ROUTE67.setFromNode(CString("_2"));
ROUTE67.setFromField(CString("value_changed"));
ROUTE67.setToNode(CString("_11"));
ROUTE67.setToField(CString("set_value"));
Scene8.addChild(&ROUTE67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("_3"));
ROUTE68.setFromField(CString("value_changed"));
ROUTE68.setToNode(CString("_12"));
ROUTE68.setToField(CString("set_value"));
Scene8.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("_4"));
ROUTE69.setFromField(CString("value_changed"));
ROUTE69.setToNode(CString("_13"));
ROUTE69.setToField(CString("set_value"));
Scene8.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("_5"));
ROUTE70.setFromField(CString("value_changed"));
ROUTE70.setToNode(CString("_14"));
ROUTE70.setToField(CString("set_value"));
Scene8.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromNode(CString("_6"));
ROUTE71.setFromField(CString("value_changed"));
ROUTE71.setToNode(CString("_15"));
ROUTE71.setToField(CString("set_value"));
Scene8.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromNode(CString("_7"));
ROUTE72.setFromField(CString("value_changed"));
ROUTE72.setToNode(CString("_16"));
ROUTE72.setToField(CString("set_value"));
Scene8.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromNode(CString("_8"));
ROUTE73.setFromField(CString("value_changed"));
ROUTE73.setToNode(CString("_17"));
ROUTE73.setToField(CString("set_value"));
Scene8.addChild(&ROUTE73);

X3D0.setScene(&Scene8);

}
