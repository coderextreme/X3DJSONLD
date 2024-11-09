//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Mon, 14 Sep 2015 21:00:05 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.0, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("icon"));
meta6.setContent(CString("../../ui/icons/icon-bw.svg"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Mon, 14 Sep 2015 21:00:05 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("title"));
meta8.setContent(CString("about:gears"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
ExternProtoDeclare& ExternProtoDeclare10 =  ExternProtoDeclare();
ExternProtoDeclare10.setName(CString("Rotor"));
ExternProtoDeclare10.setUrl(new CString[]{CString("Rotor.x3d")}, 1);
field& field11 =  field();
field11.setName(CString("enabled"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
ExternProtoDeclare10.addChild(&field11);

field& field12 =  field();
field12.setName(CString("cycleInterval"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field12);

field& field13 =  field();
field13.setName(CString("axis"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
ExternProtoDeclare10.addChild(&field13);

field& field14 =  field();
field14.setName(CString("angle"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("SFFloat"));
ExternProtoDeclare10.addChild(&field14);

field& field15 =  field();
field15.setName(CString("loop"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("SFBool"));
ExternProtoDeclare10.addChild(&field15);

field& field16 =  field();
field16.setName(CString("startTime"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field16);

field& field17 =  field();
field17.setName(CString("pauseTime"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field17);

field& field18 =  field();
field18.setName(CString("resumeTime"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field18);

field& field19 =  field();
field19.setName(CString("stopTime"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field19);

field& field20 =  field();
field20.setName(CString("isActive"));
field20.setAccessType(CString("outputOnly"));
field20.setType(CString("SFBool"));
ExternProtoDeclare10.addChild(&field20);

field& field21 =  field();
field21.setName(CString("cycleTime"));
field21.setAccessType(CString("outputOnly"));
field21.setType(CString("SFTime"));
ExternProtoDeclare10.addChild(&field21);

field& field22 =  field();
field22.setName(CString("rotation_changed"));
field22.setAccessType(CString("outputOnly"));
field22.setType(CString("SFRotation"));
ExternProtoDeclare10.addChild(&field22);

Scene9.addChild(&ExternProtoDeclare10);

ProtoDeclare& ProtoDeclare23 =  ProtoDeclare();
ProtoDeclare23.setName(CString("Gear"));
ProtoInterface& ProtoInterface24 =  ProtoInterface();
field& field25 =  field();
field25.setName(CString("teeth"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFFloat"));
field25.setValue(CString("10"));
ProtoInterface24.addChild(&field25);

field& field26 =  field();
field26.setName(CString("toothDepth"));
field26.setAccessType(CString("inputOutput"));
field26.setType(CString("SFFloat"));
field26.setValue(CString("2"));
ProtoInterface24.addChild(&field26);

field& field27 =  field();
field27.setName(CString("innerRadius"));
field27.setAccessType(CString("inputOutput"));
field27.setType(CString("SFFloat"));
field27.setValue(CString("1"));
ProtoInterface24.addChild(&field27);

field& field28 =  field();
field28.setName(CString("outerRadius"));
field28.setAccessType(CString("inputOutput"));
field28.setType(CString("SFFloat"));
field28.setValue(CString("4"));
ProtoInterface24.addChild(&field28);

field& field29 =  field();
field29.setName(CString("width"));
field29.setAccessType(CString("inputOutput"));
field29.setType(CString("SFFloat"));
field29.setValue(CString("1"));
ProtoInterface24.addChild(&field29);

field& field30 =  field();
field30.setName(CString("creaseAngle"));
field30.setAccessType(CString("initializeOnly"));
field30.setType(CString("SFFloat"));
ProtoInterface24.addChild(&field30);

ProtoDeclare23.addChild(&ProtoInterface24);

ProtoBody& ProtoBody31 =  ProtoBody();
IndexedFaceSet& IndexedFaceSet32 =  IndexedFaceSet();
IndexedFaceSet32.setDEF(CString("Gear"));
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("creaseAngle"));
connect34.setProtoField(CString("creaseAngle"));
IS33.addChild(&connect34);

IndexedFaceSet32.addChild(&IS33);

Coordinate& Coordinate35 =  Coordinate();
IndexedFaceSet32.setCoord(&Coordinate35);

ProtoBody31.addChild(&IndexedFaceSet32);

Script& Script36 =  Script();
Script36.setDirectOutput(true);
field& field37 =  field();
field37.setName(CString("teeth"));
field37.setAccessType(CString("inputOutput"));
field37.setType(CString("SFFloat"));
Script36.addChild(&field37);

field& field38 =  field();
field38.setName(CString("toothDepth"));
field38.setAccessType(CString("inputOutput"));
field38.setType(CString("SFFloat"));
Script36.addChild(&field38);

field& field39 =  field();
field39.setName(CString("innerRadius"));
field39.setAccessType(CString("inputOutput"));
field39.setType(CString("SFFloat"));
Script36.addChild(&field39);

field& field40 =  field();
field40.setName(CString("outerRadius"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("SFFloat"));
Script36.addChild(&field40);

field& field41 =  field();
field41.setName(CString("width"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("SFFloat"));
Script36.addChild(&field41);

field& field42 =  field();
field42.setName(CString("gear"));
field42.setAccessType(CString("initializeOnly"));
field42.setType(CString("SFNode"));
IndexedFaceSet& IndexedFaceSet43 =  IndexedFaceSet();
IndexedFaceSet43.setUSE(CString("Gear"));
field42.addChild(IndexedFaceSet43);

Script36.addChild(&field42);

IS& IS44 =  IS();
Connect& connect45 =  Connect();
connect45.setNodeField(CString("teeth"));
connect45.setProtoField(CString("teeth"));
IS44.addChild(&connect45);

Connect& connect46 =  Connect();
connect46.setNodeField(CString("toothDepth"));
connect46.setProtoField(CString("toothDepth"));
IS44.addChild(&connect46);

Connect& connect47 =  Connect();
connect47.setNodeField(CString("innerRadius"));
connect47.setProtoField(CString("innerRadius"));
IS44.addChild(&connect47);

Connect& connect48 =  Connect();
connect48.setNodeField(CString("outerRadius"));
connect48.setProtoField(CString("outerRadius"));
IS44.addChild(&connect48);

Connect& connect49 =  Connect();
connect49.setNodeField(CString("width"));
connect49.setProtoField(CString("width"));
IS44.addChild(&connect49);

Script36.addChild(&IS44);


//Script36.setSourceCode(CString("vrmlscript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	eventsProcessed ();")+
//_T("}")+
//_T("function eventsProcessed ()")+
//_T("{")+
//_T("	print ('### Generating gear ...');")+
//_T("	var indices = new MFInt32 ();")+
//_T("	var points  = new MFVec3f ();")+
//_T("	var cos = Math .cos;")+
//_T("	var sin = Math .sin;")+
//_T("	// Radien and tooth angle")+
//_T("	var radius0 = innerRadius;")+
//_T("	var radius1 = outerRadius - toothDepth / 2;")+
//_T("	var radius2 = outerRadius + toothDepth / 2;")+
//_T("	var da = 2 * Math .PI / teeth / 4;")+
//_T("	// Front vectors")+
//_T("	var vectorf0 = new SFVec3f (radius0, 0, width * 0.5);")+
//_T("	var vectorf1 = new SFVec3f (radius1, 0, width * 0.5);")+
//_T("	var vectorf2 = new SFVec3f (radius2, 0, width * 0.5);")+
//_T("	// Back vectors")+
//_T("	var vectorb0 = new SFVec3f (radius0, 0, -width * 0.5);")+
//_T("	var vectorb1 = new SFVec3f (radius1, 0, -width * 0.5);")+
//_T("	var vectorb2 = new SFVec3f (radius2, 0, -width * 0.5);")+
//_T("	// Generate front face indices")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var index = i * 3;")+
//_T("		indices [indices .length] = index;")+
//_T("		indices [indices .length] = index + 1;")+
//_T("		indices [indices .length] = index + 2;")+
//_T("		indices [indices .length] = index + 4;")+
//_T("		indices [indices .length] = index + 3;")+
//_T("		indices [indices .length] = -1;")+
//_T("	}")+
//_T("	// Generate front face points")+
//_T("	for (var i = 0; i < teeth + 1; ++ i)")+
//_T("	{")+
//_T("		var angle = i * 2 * Math .PI / teeth;")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf0);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);")+
//_T("	}")+
//_T("	points .length = points .length - 1;")+
//_T("	points [points .length] = new SFVec3f ();")+
//_T("	points [points .length] = new SFVec3f ();")+
//_T("	points [points .length] = new SFVec3f ();")+
//_T("	// Generate front sides of teeth indices")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var index = i * 4;")+
//_T("		indices [indices .length] = points .length + index;")+
//_T("		indices [indices .length] = points .length + index + 1;")+
//_T("		indices [indices .length] = points .length + index + 2;")+
//_T("		indices [indices .length] = points .length + index + 3;")+
//_T("		indices [indices .length] = -1;")+
//_T("	}")+
//_T("	// Generate front sides of teeth points")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var angle = i * 2 * Math .PI / teeth;")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorf1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorf2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);")+
//_T("	}")+
//_T("	// Generate back face indices")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var index = i * 3;")+
//_T("		indices [indices .length] = points .length + index;")+
//_T("		indices [indices .length] = points .length + index + 3;")+
//_T("		indices [indices .length] = points .length + index + 4;")+
//_T("		indices [indices .length] = points .length + index + 2;")+
//_T("		indices [indices .length] = points .length + index + 1;")+
//_T("		indices [indices .length] = -1;")+
//_T("	}")+
//_T("	// Generate back face points")+
//_T("	for (var i = 0; i < teeth + 1; ++ i)")+
//_T("	{")+
//_T("		var angle = i * 2 * Math .PI / teeth;")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb0);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);")+
//_T("	}")+
//_T("	points .length = points .length - 1;")+
//_T("	// Generate back sides of teeth indices")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var index = i * 4;")+
//_T("		indices [indices .length] = points .length + index;")+
//_T("		indices [indices .length] = points .length + index + 1;")+
//_T("		indices [indices .length] = points .length + index + 2;")+
//_T("		indices [indices .length] = points .length + index + 3;")+
//_T("		indices [indices .length] = -1;")+
//_T("	}")+
//_T("	// Generate front sides of teeth points")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var angle = i * 2 * Math .PI / teeth;")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + da)     .multVec (vectorb2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle)          .multVec (vectorb1);")+
//_T("	}")+
//_T("	// Generate outward faces of teeth indices")+
//_T("	for (var i = 0; i < teeth * 4; ++ i)")+
//_T("	{")+
//_T("		var index = i * 2;")+
//_T("		indices [indices .length] = points .length + index;")+
//_T("		indices [indices .length] = points .length + index + 1;")+
//_T("		indices [indices .length] = points .length + index + 3;")+
//_T("		indices [indices .length] = points .length + index + 2;")+
//_T("		indices [indices .length] = -1;")+
//_T("	}")+
//_T("	indices [indices .length - 3] = points .length + 1;")+
//_T("	indices [indices .length - 2] = points .length;")+
//_T("	// Generate outward faces of teeth points")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("	   var angle = i * 2 * Math .PI / teeth;")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorf2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + da) .multVec (vectorb2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorf2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 2 * da) .multVec (vectorb2);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorf1);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle + 3 * da) .multVec (vectorb1);")+
//_T("	}")+
//_T("	// Generate inside radius cylinder points")+
//_T("	for (var i = 0; i < teeth; ++ i)")+
//_T("	{")+
//_T("		var index = i * 2;")+
//_T("		indices [indices .length] = points .length + index;")+
//_T("		indices [indices .length] = points .length + index + 1;")+
//_T("		indices [indices .length] = points .length + index + 3;")+
//_T("		indices [indices .length] = points .length + index + 2;")+
//_T("		indices [indices .length] = -1;")+
//_T("	}")+
//_T("	indices [indices .length - 3] = points .length + 1;")+
//_T("	indices [indices .length - 2] = points .length;")+
//_T("	// Generate inside radius cylinder indices")+
//_T("	for (var i = 0; i < teeth + 1; ++ i)")+
//_T("	{")+
//_T("		var angle = i * 2 * Math .PI / teeth;")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorb0);")+
//_T("		points [points .length] = new SFRotation (0, 0, 1, angle) .multVec (vectorf0);")+
//_T("	}")+
//_T("	print ('### Generating gear done.');")+
//_T("	gear .coord .point   = points;")+
//_T("	gear .set_coordIndex = indices;")+
//_T("}"));
ProtoBody31.addChild(&Script36);

ProtoDeclare23.addChild(&ProtoBody31);

Scene9.addChild(&ProtoDeclare23);

Viewpoint& Viewpoint50 =  Viewpoint();
Viewpoint50.setDescription(CString("Home"));
Viewpoint50.setPosition(new float[]{0.0,0.0,20.0});
Scene9.addChild(&Viewpoint50);

ProtoInstance& ProtoInstance51 =  ProtoInstance();
ProtoInstance51.setName(CString("Rotor"));
ProtoInstance51.setDEF(CString("RedRotor"));
fieldValue& fieldValue52 =  fieldValue();
fieldValue52.setName(CString("cycleInterval"));
fieldValue52.setValue(CString("10"));
ProtoInstance51.addChild(&fieldValue52);

fieldValue& fieldValue53 =  fieldValue();
fieldValue53.setName(CString("loop"));
fieldValue53.setValue(CString("true"));
ProtoInstance51.addChild(&fieldValue53);

Scene9.addChild(&ProtoInstance51);

ProtoInstance& ProtoInstance54 =  ProtoInstance();
ProtoInstance54.setName(CString("Rotor"));
ProtoInstance54.setDEF(CString("GreenRotor"));
fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("cycleInterval"));
fieldValue55.setValue(CString("5"));
ProtoInstance54.addChild(&fieldValue55);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("loop"));
fieldValue56.setValue(CString("true"));
ProtoInstance54.addChild(&fieldValue56);

Scene9.addChild(&ProtoInstance54);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("Rotor"));
ProtoInstance57.setDEF(CString("BlueRotor"));
fieldValue& fieldValue58 =  fieldValue();
fieldValue58.setName(CString("cycleInterval"));
fieldValue58.setValue(CString("5"));
ProtoInstance57.addChild(&fieldValue58);

fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("loop"));
fieldValue59.setValue(CString("true"));
ProtoInstance57.addChild(&fieldValue59);

Scene9.addChild(&ProtoInstance57);

Transform& Transform60 =  Transform();
Transform60.setDEF(CString("RedGear_1"));
Transform60.setTranslation(new float[]{-2.59808,-2.39242,0.725499});
Transform60.setRotation(new float[]{0.543846,0.826436,0.145723,0.627057});
Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Gear_1"));
Shape& Shape62 =  Shape();
Appearance& Appearance63 =  Appearance();
Material& Material64 =  Material();
Material64.setDiffuseColor(new float[]{0.8,0.1,0.0});
Appearance63.addChild(&Material64);

Shape62.addChild(&Appearance63);

ProtoInstance& ProtoInstance65 =  ProtoInstance();
ProtoInstance65.setName(CString("Gear"));
fieldValue& fieldValue66 =  fieldValue();
fieldValue66.setName(CString("teeth"));
fieldValue66.setValue(CString("20"));
ProtoInstance65.addChild(&fieldValue66);

fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("toothDepth"));
fieldValue67.setValue(CString("0.7"));
ProtoInstance65.addChild(&fieldValue67);

fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("creaseAngle"));
fieldValue68.setValue(CString("0.6"));
ProtoInstance65.addChild(&fieldValue68);

Shape62.setGeometry(&ProtoInstance65);

Transform61.addChild(&Shape62);

Transform60.addChild(&Transform61);

Scene9.addChild(&Transform60);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("GreenGear_1"));
Transform69.setTranslation(new float[]{2.68468,-1.34925,-2.14056});
Transform69.setRotation(new float[]{0.111593,0.985198,0.130124,3.70575});
Transform& Transform70 =  Transform();
Transform70.setDEF(CString("Gear_2"));
Shape& Shape71 =  Shape();
Appearance& Appearance72 =  Appearance();
Material& Material73 =  Material();
Material73.setDiffuseColor(new float[]{0.0,0.8,0.2});
Appearance72.addChild(&Material73);

Shape71.addChild(&Appearance72);

ProtoInstance& ProtoInstance74 =  ProtoInstance();
ProtoInstance74.setName(CString("Gear"));
fieldValue& fieldValue75 =  fieldValue();
fieldValue75.setName(CString("toothDepth"));
fieldValue75.setValue(CString("0.7"));
ProtoInstance74.addChild(&fieldValue75);

fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("innerRadius"));
fieldValue76.setValue(CString("0.5"));
ProtoInstance74.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(CString("outerRadius"));
fieldValue77.setValue(CString("2"));
ProtoInstance74.addChild(&fieldValue77);

fieldValue& fieldValue78 =  fieldValue();
fieldValue78.setName(CString("width"));
fieldValue78.setValue(CString("2"));
ProtoInstance74.addChild(&fieldValue78);

fieldValue& fieldValue79 =  fieldValue();
fieldValue79.setName(CString("creaseAngle"));
fieldValue79.setValue(CString("0.7"));
ProtoInstance74.addChild(&fieldValue79);

Shape71.setGeometry(&ProtoInstance74);

Transform70.addChild(&Shape71);

Transform69.addChild(&Transform70);

Scene9.addChild(&Transform69);

Transform& Transform80 =  Transform();
Transform80.setDEF(CString("BlueGear_1"));
Transform80.setTranslation(new float[]{-2.68468,3.41658,2.89301});
Transform80.setRotation(new float[]{-0.0562884,0.982778,0.176007,3.65356});
Transform& Transform81 =  Transform();
Transform81.setDEF(CString("Gear_3"));
Shape& Shape82 =  Shape();
Appearance& Appearance83 =  Appearance();
Material& Material84 =  Material();
Material84.setDiffuseColor(new float[]{0.2,0.2,1.0});
Appearance83.addChild(&Material84);

Shape82.addChild(&Appearance83);

ProtoInstance& ProtoInstance85 =  ProtoInstance();
ProtoInstance85.setName(CString("Gear"));
fieldValue& fieldValue86 =  fieldValue();
fieldValue86.setName(CString("toothDepth"));
fieldValue86.setValue(CString("0.7"));
ProtoInstance85.addChild(&fieldValue86);

fieldValue& fieldValue87 =  fieldValue();
fieldValue87.setName(CString("innerRadius"));
fieldValue87.setValue(CString("1.3"));
ProtoInstance85.addChild(&fieldValue87);

fieldValue& fieldValue88 =  fieldValue();
fieldValue88.setName(CString("outerRadius"));
fieldValue88.setValue(CString("2"));
ProtoInstance85.addChild(&fieldValue88);

fieldValue& fieldValue89 =  fieldValue();
fieldValue89.setName(CString("width"));
fieldValue89.setValue(CString("0.5"));
ProtoInstance85.addChild(&fieldValue89);

Shape82.setGeometry(&ProtoInstance85);

Transform81.addChild(&Shape82);

Transform80.addChild(&Transform81);

Scene9.addChild(&Transform80);

ROUTE& ROUTE90 =  ROUTE();
ROUTE90.setFromNode(CString("RedRotor"));
ROUTE90.setFromField(CString("rotation_changed"));
ROUTE90.setToNode(CString("Gear_1"));
ROUTE90.setToField(CString("set_rotation"));
Scene9.addChild(&ROUTE90);

ROUTE& ROUTE91 =  ROUTE();
ROUTE91.setFromNode(CString("GreenRotor"));
ROUTE91.setFromField(CString("rotation_changed"));
ROUTE91.setToNode(CString("Gear_2"));
ROUTE91.setToField(CString("set_rotation"));
Scene9.addChild(&ROUTE91);

ROUTE& ROUTE92 =  ROUTE();
ROUTE92.setFromNode(CString("BlueRotor"));
ROUTE92.setFromField(CString("rotation_changed"));
ROUTE92.setToNode(CString("Gear_3"));
ROUTE92.setToField(CString("set_rotation"));
Scene9.addChild(&ROUTE92);

X3D0.setScene(&Scene9);

//}
