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
meta2.setContent(CString("World of Sunrise X3D Editor"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Sun, 12 Dec 2021 19:43:00 +0100"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Sunrise X3D Editor V1.0, https://create3000.github.io/Sunrise/"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///Users/holger/Desktop/X_ITE/x_ite/src/tests/vp-layers.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 14 Dec 2021 20:27:38 +0100"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ProtoDeclare& ProtoDeclare9 =  ProtoDeclare();
ProtoDeclare9.setName(CString("VP"));
ProtoInterface& ProtoInterface10 =  ProtoInterface();
field& field11 =  field();
field11.setName(CString("translation"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec3f"));
ProtoInterface10.addChild(&field11);

field& field12 =  field();
field12.setName(CString("scale"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFVec3f"));
field12.setValue(CString("1 1 1"));
ProtoInterface10.addChild(&field12);

field& field13 =  field();
field13.setName(CString("same"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFBool"));
ProtoInterface10.addChild(&field13);

field& field14 =  field();
field14.setName(CString("viewpoint"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFNode"));
ProtoInterface10.addChild(&field14);

ProtoDeclare9.addChild(&ProtoInterface10);

ProtoBody& ProtoBody15 =  ProtoBody();
Transform& Transform16 =  Transform();
Transform16.setDEF(CString("Box"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(CString("translation"));
connect18.setProtoField(CString("translation"));
IS17.addChild(&connect18);

Connect& connect19 =  Connect();
connect19.setNodeField(CString("scale"));
connect19.setProtoField(CString("scale"));
IS17.addChild(&connect19);

Transform16.addChild(&IS17);

Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Box& Box23 =  Box();
Shape20.setGeometry(&Box23);

Transform16.addChild(&Shape20);

TouchSensor& TouchSensor24 =  TouchSensor();
TouchSensor24.setDEF(CString("_1"));
Transform16.addChild(&TouchSensor24);

ProtoBody15.addChild(&Transform16);

Script& Script25 =  Script();
Script25.setDEF(CString("VPScript"));
field& field26 =  field();
field26.setName(CString("set_time"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFTime"));
Script25.addChild(&field26);

field& field27 =  field();
field27.setName(CString("same"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFBool"));
Script25.addChild(&field27);

field& field28 =  field();
field28.setName(CString("viewpoint"));
field28.setAccessType(CString("initializeOnly"));
field28.setType(CString("SFNode"));
Script25.addChild(&field28);

IS& IS29 =  IS();
Connect& connect30 =  Connect();
connect30.setNodeField(CString("same"));
connect30.setProtoField(CString("same"));
IS29.addChild(&connect30);

Connect& connect31 =  Connect();
connect31.setNodeField(CString("viewpoint"));
connect31.setProtoField(CString("viewpoint"));
IS29.addChild(&connect31);

Script25.addChild(&IS29);


Script25.setSourceCode(CString("ecmascript:")+
_T("function set_time (value, time)")+
_T("{")+
_T("   var bind = same ? viewpoint .isBound : !viewpoint .isBound;")+
_T("   viewpoint .set_bind = bind;")+
_T("   print (viewpoint .description, bind);")+
_T("}"));
ProtoBody15.addChild(&Script25);

ROUTE& ROUTE32 =  ROUTE();
ROUTE32.setFromNode(CString("_1"));
ROUTE32.setFromField(CString("touchTime"));
ROUTE32.setToNode(CString("VPScript"));
ROUTE32.setToField(CString("set_time"));
ProtoBody15.addChild(&ROUTE32);

ProtoDeclare9.addChild(&ProtoBody15);

Scene8.addChild(&ProtoDeclare9);

WorldInfo& WorldInfo33 =  WorldInfo();
MetadataSet& MetadataSet34 =  MetadataSet();
MetadataSet34.X3DNode::setName(CString("Sunrise"));
MetadataSet34.setDEF(CString("Sunrise"));
MetadataSet34.X3DNode::setReference(CString("https://github.com/create3000/Swift-X3D"));
MetadataSet& MetadataSet35 =  MetadataSet();
MetadataSet35.X3DNode::setName(CString("Footer"));
MetadataSet35.setDEF(CString("Footer"));
MetadataSet35.X3DNode::setReference(CString("https://github.com/create3000/Swift-X3D"));
MetadataString& MetadataString36 =  MetadataString();
MetadataString36.X3DNode::setName(CString("selectedTabItem"));
MetadataString36.setDEF(CString("selectedTabItem"));
MetadataString36.X3DNode::setReference(CString("https://github.com/create3000/Swift-X3D"));
MetadataString36.setValue(new CString[]{CString("ScriptEditor")}, 1);
MetadataSet35.setValue((X3DNode *)&MetadataString36);

MetadataSet34.setValue((X3DNode *)&MetadataSet35);

MetadataSet& MetadataSet37 =  MetadataSet();
MetadataSet37.X3DNode::setName(CString("Sidebar"));
MetadataSet37.setDEF(CString("Sidebar"));
MetadataSet37.X3DNode::setReference(CString("https://github.com/create3000/Swift-X3D"));
MetadataString& MetadataString38 =  MetadataString();
MetadataString38.X3DNode::setName(CString("selectedTabItem"));
MetadataString38.setDEF(CString("selectedTabItem_1"));
MetadataString38.X3DNode::setReference(CString("https://github.com/create3000/Swift-X3D"));
MetadataString38.setValue(new CString[]{CString("OutlineEditor")}, 1);
MetadataSet37.setValue((X3DNode *)&MetadataString38);

MetadataSet34.setValue((X3DNode *)&MetadataSet37);

WorldInfo33.setMetadata(&MetadataSet34);

Scene8.addChild(&WorldInfo33);

LayerSet& LayerSet39 =  LayerSet();
LayerSet39.setActiveLayer(1);
LayerSet39.setOrder(new int32_t[]{0,1,2}, 3);
Layer& Layer40 =  Layer();
Layer40.setDEF(CString("L1"));
NavigationInfo& NavigationInfo41 =  NavigationInfo();
NavigationInfo41.setTransitionTime(2);
Layer40.addChild(&NavigationInfo41);

Viewpoint& Viewpoint42 =  Viewpoint();
Viewpoint42.setDEF(CString("VP1"));
Viewpoint42.setDescription(CString("VP1"));
Layer40.addChild(&Viewpoint42);

ProtoInstance& ProtoInstance43 =  ProtoInstance();
ProtoInstance43.setName(CString("VP"));
fieldValue& fieldValue44 =  fieldValue();
fieldValue44.setName(CString("translation"));
fieldValue44.setValue(CString("-3 2 0"));
ProtoInstance43.addChild(&fieldValue44);

fieldValue& fieldValue45 =  fieldValue();
fieldValue45.setName(CString("viewpoint"));
Viewpoint& Viewpoint46 =  Viewpoint();
Viewpoint46.setUSE(CString("VP1"));
fieldValue45.addChild(&Viewpoint46);

ProtoInstance43.addChild(&fieldValue45);

Layer40.addChild(&ProtoInstance43);

Viewpoint& Viewpoint47 =  Viewpoint();
Viewpoint47.setDEF(CString("VP2"));
Viewpoint47.setDescription(CString("VP2"));
Viewpoint47.setPosition(new float[]{1,0,10});
Layer40.addChild(&Viewpoint47);

ProtoInstance& ProtoInstance48 =  ProtoInstance();
ProtoInstance48.setName(CString("VP"));
fieldValue& fieldValue49 =  fieldValue();
fieldValue49.setName(CString("translation"));
fieldValue49.setValue(CString("0 2 0"));
ProtoInstance48.addChild(&fieldValue49);

fieldValue& fieldValue50 =  fieldValue();
fieldValue50.setName(CString("viewpoint"));
Viewpoint& Viewpoint51 =  Viewpoint();
Viewpoint51.setUSE(CString("VP2"));
fieldValue50.addChild(&Viewpoint51);

ProtoInstance48.addChild(&fieldValue50);

Layer40.addChild(&ProtoInstance48);

Viewpoint& Viewpoint52 =  Viewpoint();
Viewpoint52.setDEF(CString("VP3"));
Viewpoint52.setDescription(CString("VP3"));
Viewpoint52.setPosition(new float[]{2,0,10});
Layer40.addChild(&Viewpoint52);

ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("VP"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("translation"));
fieldValue54.setValue(CString("3 2 0"));
ProtoInstance53.addChild(&fieldValue54);

fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("viewpoint"));
Viewpoint& Viewpoint56 =  Viewpoint();
Viewpoint56.setUSE(CString("VP3"));
fieldValue55.addChild(&Viewpoint56);

ProtoInstance53.addChild(&fieldValue55);

Layer40.addChild(&ProtoInstance53);

LayerSet39.addChild(&Layer40);

Layer& Layer57 =  Layer();
Layer57.setDEF(CString("L2"));
NavigationInfo& NavigationInfo58 =  NavigationInfo();
Layer57.addChild(&NavigationInfo58);

Viewpoint& Viewpoint59 =  Viewpoint();
Viewpoint59.setDEF(CString("VP1_1"));
Viewpoint59.setDescription(CString("VP1"));
Layer57.addChild(&Viewpoint59);

ProtoInstance& ProtoInstance60 =  ProtoInstance();
ProtoInstance60.setName(CString("VP"));
fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("translation"));
fieldValue61.setValue(CString("-3 -2 0"));
ProtoInstance60.addChild(&fieldValue61);

fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("viewpoint"));
Viewpoint& Viewpoint63 =  Viewpoint();
Viewpoint63.setUSE(CString("VP1_1"));
fieldValue62.addChild(&Viewpoint63);

ProtoInstance60.addChild(&fieldValue62);

Layer57.addChild(&ProtoInstance60);

Viewpoint& Viewpoint64 =  Viewpoint();
Viewpoint64.setDEF(CString("VP2_1"));
Viewpoint64.setDescription(CString("VP2"));
Viewpoint64.setPosition(new float[]{1,0,10});
Layer57.addChild(&Viewpoint64);

ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(CString("VP"));
fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(CString("translation"));
fieldValue66.setValue(CString("0 -2 0"));
ProtoInstance65.addChild(&fieldValue66);

fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("viewpoint"));
Viewpoint& Viewpoint68 =  Viewpoint();
Viewpoint68.setUSE(CString("VP2_1"));
fieldValue67.addChild(&Viewpoint68);

ProtoInstance65.addChild(&fieldValue67);

Layer57.addChild(&ProtoInstance65);

Viewpoint& Viewpoint69 =  Viewpoint();
Viewpoint69.setUSE(CString("VP3"));
Layer57.addChild(&Viewpoint69);

ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("VP"));
fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("translation"));
fieldValue71.setValue(CString("3 -2 0"));
ProtoInstance70.addChild(&fieldValue71);

fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(CString("viewpoint"));
Viewpoint& Viewpoint73 =  Viewpoint();
Viewpoint73.setUSE(CString("VP3"));
fieldValue72.addChild(&Viewpoint73);

ProtoInstance70.addChild(&fieldValue72);

Layer57.addChild(&ProtoInstance70);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(CString("VP"));
fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("translation"));
fieldValue75.setValue(CString("0 -0.5 0"));
ProtoInstance74.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("scale"));
fieldValue76.setValue(CString("0.2 0.2 0.2"));
ProtoInstance74.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(CString("same"));
fieldValue77.setValue(CString("true"));
ProtoInstance74.addChild(&fieldValue77);

fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("viewpoint"));
Viewpoint& Viewpoint79 =  Viewpoint();
Viewpoint79.setUSE(CString("VP2_1"));
fieldValue78.addChild(&Viewpoint79);

ProtoInstance74.addChild(&fieldValue78);

Layer57.addChild(&ProtoInstance74);

LayerSet39.addChild(&Layer57);

Scene8.addChild(&LayerSet39);

X3D0.setScene(&Scene8);

}
