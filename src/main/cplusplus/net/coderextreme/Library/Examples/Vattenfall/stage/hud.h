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

ExternProtoDeclare& ExternProtoDeclare32 =  ExternProtoDeclare();
ExternProtoDeclare32.setName(CString("Scene"));
ExternProtoDeclare32.setUrl(new CString[]{CString("Scene_proto.x3d")}, 1);
field& field33 =  field();
field33.setName(CString("enabled"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFBool"));
ExternProtoDeclare32.addChild(&field33);

field& field34 =  field();
field34.setName(CString("startTime"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field34);

field& field35 =  field();
field35.setName(CString("stopTime"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field35);

field& field36 =  field();
field36.setName(CString("isActive"));
field36.setAccessType(CString("outputOnly"));
field36.setType(CString("SFBool"));
ExternProtoDeclare32.addChild(&field36);

field& field37 =  field();
field37.setName(CString("enterTime"));
field37.setAccessType(CString("outputOnly"));
field37.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field37);

field& field38 =  field();
field38.setName(CString("exitTime"));
field38.setAccessType(CString("outputOnly"));
field38.setType(CString("SFTime"));
ExternProtoDeclare32.addChild(&field38);

field& field39 =  field();
field39.setName(CString("interface"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("MFNode"));
ExternProtoDeclare32.addChild(&field39);

Scene7.addChild(&ExternProtoDeclare32);

WorldInfo& WorldInfo40 =  WorldInfo();
WorldInfo40.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo40);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("HUD_1"));
Transform& Transform42 =  Transform();
Transform42.setDEF(CString("ps_handle"));
Transform42.setScale(new float[]{1000.87,1000.87,1000.87});
Switch& Switch43 =  Switch();
Switch43.setWhichChoice(1);
Transform& Transform44 =  Transform();
Switch43.addChild(&Transform44);

Inline& Inline45 =  Inline();
Inline45.setUrl(new CString[]{CString("cube.x3d")}, 1);
Inline45.setBboxSize(new float[]{1.0,1.0,1.0});
Switch43.addChild(&Inline45);

Transform42.addChild(&Switch43);

Transform41.addChild(&Transform42);

Transform& Transform46 =  Transform();
Transform46.setDEF(CString("ProximitySensor"));
ProximitySensor& ProximitySensor47 =  ProximitySensor();
ProximitySensor47.setDEF(CString("_1"));
ProximitySensor47.setSize(new float[]{1000.87,1000.87,1000.87});
Transform46.addChild(&ProximitySensor47);

Transform41.addChild(&Transform46);

Transform& Transform48 =  Transform();
Transform48.setDEF(CString("HUD"));
Collision& Collision49 =  Collision();
Collision49.setEnabled(false);
Transform& Transform50 =  Transform();
Transform50.setDEF(CString("HUDObj"));
Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setDEF(CString("HUDVP1"));
Viewpoint51.setPosition(new float[]{0.0,0.0,0.0});
Transform50.addChild(&Viewpoint51);

Transform& Transform52 =  Transform();
Transform52.setDEF(CString("World"));
ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("World"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("interface"));
ProtoInstance& ProtoInstance55 =  ProtoInstance();
ProtoInstance55.setName(CString("Bool"));
ProtoInstance55.setDEF(CString("_2"));
fieldValue54.addChild(&ProtoInstance55);

ProtoInstance& ProtoInstance56 =  ProtoInstance();
ProtoInstance56.setName(CString("Bool"));
ProtoInstance56.setDEF(CString("_3"));
fieldValue54.addChild(&ProtoInstance56);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("Bool"));
ProtoInstance57.setDEF(CString("_4"));
fieldValue54.addChild(&ProtoInstance57);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("Bool"));
ProtoInstance58.setDEF(CString("_5"));
fieldValue54.addChild(&ProtoInstance58);

ProtoInstance& ProtoInstance59 =  ProtoInstance();
ProtoInstance59.setName(CString("Bool"));
ProtoInstance59.setDEF(CString("_6"));
fieldValue54.addChild(&ProtoInstance59);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("Bool"));
ProtoInstance60.setDEF(CString("_7"));
fieldValue54.addChild(&ProtoInstance60);

ProtoInstance& ProtoInstance61 =  ProtoInstance();
ProtoInstance61.setName(CString("Bool"));
ProtoInstance61.setDEF(CString("_8"));
fieldValue54.addChild(&ProtoInstance61);

ProtoInstance& ProtoInstance62 =  ProtoInstance();
ProtoInstance62.setName(CString("Int"));
ProtoInstance62.setDEF(CString("_9"));
fieldValue54.addChild(&ProtoInstance62);

ProtoInstance53.addChild(&fieldValue54);

fieldValue& fieldValue63 =  fieldValue();
fieldValue63.setName(CString("children"));
ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("Import"));
ProtoInstance64.setDEF(CString("_10"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("url"));
fieldValue65.setValue(CString("\", \" \"buttons.x3dfile:/net/usr/customer/mbm/projects/veag-presentation/vrml/medienfassade/hud/buttons.x3d\""));
ProtoInstance64.addChild(&fieldValue65);

fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(CString("startTime"));
fieldValue66.setValue(CString("1"));
ProtoInstance64.addChild(&fieldValue66);

fieldValue63.addChild(&ProtoInstance64);

ProtoInstance53.addChild(&fieldValue63);

Transform52.addChild(&ProtoInstance53);

Transform50.addChild(&Transform52);

Collision49.addChildren(&Transform50);

Transform48.addChild(&Collision49);

Transform41.addChild(&Transform48);

Scene7.addChild(&Transform41);

Transform& Transform67 =  Transform();
Transform67.setDEF(CString("Scene"));
ProtoInstance& ProtoInstance68 =  ProtoInstance();
ProtoInstance68.setName(CString("Scene"));
fieldValue& fieldValue69 =  fieldValue();
fieldValue69.setName(CString("interface"));
ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("Bool"));
ProtoInstance70.setDEF(CString("_11"));
fieldValue69.addChild(&ProtoInstance70);

ProtoInstance& ProtoInstance71 =  ProtoInstance();
ProtoInstance71.setName(CString("Bool"));
ProtoInstance71.setDEF(CString("_12"));
fieldValue69.addChild(&ProtoInstance71);

ProtoInstance& ProtoInstance72 =  ProtoInstance();
ProtoInstance72.setName(CString("Bool"));
ProtoInstance72.setDEF(CString("_13"));
fieldValue69.addChild(&ProtoInstance72);

ProtoInstance& ProtoInstance73 =  ProtoInstance();
ProtoInstance73.setName(CString("Bool"));
ProtoInstance73.setDEF(CString("_14"));
fieldValue69.addChild(&ProtoInstance73);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(CString("Bool"));
ProtoInstance74.setDEF(CString("_15"));
fieldValue69.addChild(&ProtoInstance74);

ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(CString("Bool"));
ProtoInstance75.setDEF(CString("_16"));
fieldValue69.addChild(&ProtoInstance75);

ProtoInstance& ProtoInstance76 =  ProtoInstance();
ProtoInstance76.setName(CString("Bool"));
ProtoInstance76.setDEF(CString("_17"));
fieldValue69.addChild(&ProtoInstance76);

ProtoInstance& ProtoInstance77 =  ProtoInstance();
ProtoInstance77.setName(CString("Int"));
ProtoInstance77.setDEF(CString("_18"));
fieldValue69.addChild(&ProtoInstance77);

ProtoInstance68.addChild(&fieldValue69);

Transform67.addChild(&ProtoInstance68);

Scene7.addChild(&Transform67);

ROUTE& ROUTE78 =  ROUTE();
ROUTE78.setFromNode(CString("ps_handle"));
ROUTE78.setFromField(CString("translation_changed"));
ROUTE78.setToNode(CString("_1"));
ROUTE78.setToField(CString("set_center"));
Scene7.addChild(&ROUTE78);

ROUTE& ROUTE79 =  ROUTE();
ROUTE79.setFromNode(CString("ps_handle"));
ROUTE79.setFromField(CString("scale_changed"));
ROUTE79.setToNode(CString("_1"));
ROUTE79.setToField(CString("set_size"));
Scene7.addChild(&ROUTE79);

ROUTE& ROUTE80 =  ROUTE();
ROUTE80.setFromNode(CString("_1"));
ROUTE80.setFromField(CString("position_changed"));
ROUTE80.setToNode(CString("HUDObj"));
ROUTE80.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE80);

ROUTE& ROUTE81 =  ROUTE();
ROUTE81.setFromNode(CString("_1"));
ROUTE81.setFromField(CString("orientation_changed"));
ROUTE81.setToNode(CString("HUDObj"));
ROUTE81.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE81);

ROUTE& ROUTE82 =  ROUTE();
ROUTE82.setFromNode(CString("_2"));
ROUTE82.setFromField(CString("value_changed"));
ROUTE82.setToNode(CString("_11"));
ROUTE82.setToField(CString("set_value"));
Scene7.addChild(&ROUTE82);

ROUTE& ROUTE83 =  ROUTE();
ROUTE83.setFromNode(CString("_3"));
ROUTE83.setFromField(CString("value_changed"));
ROUTE83.setToNode(CString("_12"));
ROUTE83.setToField(CString("set_value"));
Scene7.addChild(&ROUTE83);

ROUTE& ROUTE84 =  ROUTE();
ROUTE84.setFromNode(CString("_4"));
ROUTE84.setFromField(CString("value_changed"));
ROUTE84.setToNode(CString("_13"));
ROUTE84.setToField(CString("set_value"));
Scene7.addChild(&ROUTE84);

ROUTE& ROUTE85 =  ROUTE();
ROUTE85.setFromNode(CString("_5"));
ROUTE85.setFromField(CString("value_changed"));
ROUTE85.setToNode(CString("_14"));
ROUTE85.setToField(CString("set_value"));
Scene7.addChild(&ROUTE85);

ROUTE& ROUTE86 =  ROUTE();
ROUTE86.setFromNode(CString("_6"));
ROUTE86.setFromField(CString("value_changed"));
ROUTE86.setToNode(CString("_15"));
ROUTE86.setToField(CString("set_value"));
Scene7.addChild(&ROUTE86);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("_7"));
ROUTE87.setFromField(CString("value_changed"));
ROUTE87.setToNode(CString("_16"));
ROUTE87.setToField(CString("set_value"));
Scene7.addChild(&ROUTE87);

ROUTE& ROUTE88 =  ROUTE();
ROUTE88.setFromNode(CString("_8"));
ROUTE88.setFromField(CString("value_changed"));
ROUTE88.setToNode(CString("_17"));
ROUTE88.setToField(CString("set_value"));
Scene7.addChild(&ROUTE88);

ROUTE& ROUTE89 =  ROUTE();
ROUTE89.setFromNode(CString("_9"));
ROUTE89.setFromField(CString("value_changed"));
ROUTE89.setToNode(CString("_18"));
ROUTE89.setToField(CString("set_value"));
Scene7.addChild(&ROUTE89);

X3D0.setScene(&Scene7);

//}
