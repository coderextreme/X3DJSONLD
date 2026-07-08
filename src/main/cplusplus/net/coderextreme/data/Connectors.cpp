#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Full"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("comment"));
meta2.setContent(CString("World of Titania"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Fri, 04 Sep 2015 10:19:01 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V3.0.4, https://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 25 Jul 2017 09:42:17 GMT"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("title"));
meta8.setContent(CString("Connectors"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(CString("RoundedRectangle2D"));
ProtoInterface& ProtoInterface11 =  ProtoInterface();
field& field12 =  field();
field12.setName(CString("cornerRadius"));
field12.setAccessType(CString("initializeOnly"));
field12.setType(CString("SFFloat"));
field12.setValue(CString("1"));
ProtoInterface11.addChild(&field12);

field& field13 =  field();
field13.setName(CString("size"));
field13.setAccessType(CString("initializeOnly"));
field13.setType(CString("SFVec2f"));
field13.setValue(CString("2 2"));
ProtoInterface11.addChild(&field13);

field& field14 =  field();
field14.setName(CString("solid"));
field14.setAccessType(CString("initializeOnly"));
field14.setType(CString("SFBool"));
field14.setValue(CString("true"));
ProtoInterface11.addChild(&field14);

ProtoDeclare10.addChild(&ProtoInterface11);

ProtoBody& ProtoBody15 =  ProtoBody();
IndexedFaceSet& IndexedFaceSet16 =  IndexedFaceSet();
IndexedFaceSet16.setDEF(CString("Geometry"));
IS& IS17 =  IS();
Connect& connect18 =  Connect();
connect18.setNodeField(CString("solid"));
connect18.setProtoField(CString("solid"));
IS17.addChild(&connect18);

IndexedFaceSet16.addChild(&IS17);

Coordinate& Coordinate19 =  Coordinate();
IndexedFaceSet16.setCoord(&Coordinate19);

ProtoBody15.addChild(&IndexedFaceSet16);

Script& Script20 =  Script();
Script20.setDEF(CString("RoundedRectangle2D"));
Script20.setDirectOutput(True);
field& field21 =  field();
field21.setName(CString("cornerDimension"));
field21.setAccessType(CString("initializeOnly"));
field21.setType(CString("SFFloat"));
field21.setValue(CString("10"));
Script20.addChild(&field21);

field& field22 =  field();
field22.setName(CString("cornerRadius"));
field22.setAccessType(CString("initializeOnly"));
field22.setType(CString("SFFloat"));
Script20.addChild(&field22);

field& field23 =  field();
field23.setName(CString("size"));
field23.setAccessType(CString("initializeOnly"));
field23.setType(CString("SFVec2f"));
Script20.addChild(&field23);

field& field24 =  field();
field24.setName(CString("geometry"));
field24.setAccessType(CString("initializeOnly"));
field24.setType(CString("SFNode"));
IndexedFaceSet& IndexedFaceSet25 =  IndexedFaceSet();
IndexedFaceSet25.setUSE(CString("Geometry"));
field24.addChild(IndexedFaceSet25);

Script20.addChild(&field24);

IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("cornerRadius"));
connect27.setProtoField(CString("cornerRadius"));
IS26.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("size"));
connect28.setProtoField(CString("size"));
IS26.addChild(&connect28);

Script20.addChild(&IS26);


Script20.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	var point         = new SFVec3f (cornerRadius, 0, 0);")+
_T("	var startRotation = new SFRotation ();")+
_T("	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);")+
_T("	var corner        = new MFVec3f ();")+
_T("	var coordIndex    = new MFInt32 ();")+
_T("	var points        = new MFVec3f ();")+
_T("	for (var i = 0; i < cornerDimension * 4; ++ i)")+
_T("		coordIndex [coordIndex .length] = i;")+
_T("	geometry .coordIndex = coordIndex;")+
_T("	for (var i = 0; i < cornerDimension; ++i)")+
_T("		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);")+
_T("	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);")+
_T("	for (var i = 0; i < cornerDimension; ++ i)")+
_T("		points [points .length] = corner [i] .add (translation);")+
_T("	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);")+
_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);")+
_T("	for (var i = 0; i < cornerDimension; ++ i)")+
_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
_T("	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);")+
_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI);")+
_T("	for (var i = 0; i < cornerDimension; ++ i)")+
_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
_T("	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);")+
_T("	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);")+
_T("	for (var i = 0; i < cornerDimension; ++ i)")+
_T("		points [points .length] = rotation .multVec (corner [i]) .add (translation);")+
_T("	geometry .coord .point = points;")+
_T("}"));
ProtoBody15.addChild(&Script20);

ProtoDeclare10.addChild(&ProtoBody15);

Scene9.addChild(&ProtoDeclare10);

ProtoDeclare& ProtoDeclare29 =  ProtoDeclare();
ProtoDeclare29.setName(CString("Widget"));
ProtoInterface& ProtoInterface30 =  ProtoInterface();
field& field31 =  field();
field31.setName(CString("fillColor"));
field31.setAccessType(CString("inputOutput"));
field31.setType(CString("SFColor"));
field31.setValue(CString("0.1 0.1 0.1"));
ProtoInterface30.addChild(&field31);

field& field32 =  field();
field32.setName(CString("lineColor"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFColor"));
field32.setValue(CString("0.4 0.4 0.4"));
ProtoInterface30.addChild(&field32);

field& field33 =  field();
field33.setName(CString("linewidthScaleFactor"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFFloat"));
field33.setValue(CString("1"));
ProtoInterface30.addChild(&field33);

field& field34 =  field();
field34.setName(CString("geometry"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFNode"));
ProtoInterface30.addChild(&field34);

ProtoDeclare29.addChild(&ProtoInterface30);

ProtoBody& ProtoBody35 =  ProtoBody();
Transform& Transform36 =  Transform();
Transform36.setDEF(CString("Shape"));
Shape& Shape37 =  Shape();
IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("geometry"));
connect39.setProtoField(CString("geometry"));
IS38.addChild(&connect39);

Shape37.addChild(&IS38);

Appearance& Appearance40 =  Appearance();
Material& Material41 =  Material();
IS& IS42 =  IS();
Connect& connect43 =  Connect();
connect43.setNodeField(CString("diffuseColor"));
connect43.setProtoField(CString("fillColor"));
IS42.addChild(&connect43);

Material41.addChild(&IS42);

Appearance40.addChild(&Material41);

Shape37.addChild(&Appearance40);

Transform36.addChild(&Shape37);

Shape& Shape44 =  Shape();
IS& IS45 =  IS();
Connect& connect46 =  Connect();
connect46.setNodeField(CString("geometry"));
connect46.setProtoField(CString("geometry"));
IS45.addChild(&connect46);

Shape44.addChild(&IS45);

Appearance& Appearance47 =  Appearance();
FillProperties& FillProperties48 =  FillProperties();
FillProperties48.setFilled(False);
FillProperties48.setHatched(False);
Appearance47.setFillProperties(FillProperties48);

LineProperties& LineProperties49 =  LineProperties();
IS& IS50 =  IS();
Connect& connect51 =  Connect();
connect51.setNodeField(CString("linewidthScaleFactor"));
connect51.setProtoField(CString("linewidthScaleFactor"));
IS50.addChild(&connect51);

LineProperties49.addChild(&IS50);

Appearance47.setLineProperties(LineProperties49);

Material& Material52 =  Material();
Material52.setDiffuseColor(new float[]{0,0,0});
IS& IS53 =  IS();
Connect& connect54 =  Connect();
connect54.setNodeField(CString("emissiveColor"));
connect54.setProtoField(CString("lineColor"));
IS53.addChild(&connect54);

Material52.addChild(&IS53);

Appearance47.addChild(&Material52);

Shape44.addChild(&Appearance47);

Transform36.addChild(&Shape44);

ProtoBody35.addChild(&Transform36);

ProtoDeclare29.addChild(&ProtoBody35);

Scene9.addChild(&ProtoDeclare29);

ProtoDeclare& ProtoDeclare55 =  ProtoDeclare();
ProtoDeclare55.setName(CString("Node"));
ProtoInterface& ProtoInterface56 =  ProtoInterface();
field& field57 =  field();
field57.setName(CString("translation"));
field57.setAccessType(CString("inputOutput"));
field57.setType(CString("SFVec3f"));
ProtoInterface56.addChild(&field57);

ProtoDeclare55.addChild(&ProtoInterface56);

ProtoBody& ProtoBody58 =  ProtoBody();
Group& Group59 =  Group();
PlaneSensor& PlaneSensor60 =  PlaneSensor();
PlaneSensor60.setDEF(CString("PlaneSensor"));
Group59.addChild(&PlaneSensor60);

Transform& Transform61 =  Transform();
Transform61.setDEF(CString("Node"));
IS& IS62 =  IS();
Connect& connect63 =  Connect();
connect63.setNodeField(CString("translation"));
connect63.setProtoField(CString("translation"));
IS62.addChild(&connect63);

Transform61.addChild(&IS62);

ProtoInstance& ProtoInstance64 =  ProtoInstance();
ProtoInstance64.setName(CString("Widget"));
fieldValue& fieldValue65 =  fieldValue();
fieldValue65.setName(CString("geometry"));
ProtoInstance& ProtoInstance66 =  ProtoInstance();
ProtoInstance66.setName(CString("RoundedRectangle2D"));
fieldValue& fieldValue67 =  fieldValue();
fieldValue67.setName(CString("cornerRadius"));
fieldValue67.setValue(CString("0.12"));
ProtoInstance66.addChild(&fieldValue67);

fieldValue& fieldValue68 =  fieldValue();
fieldValue68.setName(CString("size"));
fieldValue68.setValue(CString("2 1"));
ProtoInstance66.addChild(&fieldValue68);

fieldValue65.addChild(&ProtoInstance66);

ProtoInstance64.addChild(&fieldValue65);

Transform61.addChild(&ProtoInstance64);

Transform& Transform69 =  Transform();
Transform69.setDEF(CString("Input"));
Transform69.setTranslation(new float[]{-1,0,0});
ProtoInstance& ProtoInstance70 =  ProtoInstance();
ProtoInstance70.setName(CString("Widget"));
fieldValue& fieldValue71 =  fieldValue();
fieldValue71.setName(CString("lineColor"));
fieldValue71.setValue(CString("0.72 0.14 0.23"));
ProtoInstance70.addChild(&fieldValue71);

fieldValue& fieldValue72 =  fieldValue();
fieldValue72.setName(CString("geometry"));
Disk2D& Disk2D73 =  Disk2D();
Disk2D73.setDEF(CString("Connector"));
Disk2D73.setOuterRadius(0.2);
fieldValue72.addChild(Disk2D73);

ProtoInstance70.addChild(&fieldValue72);

Transform69.addChild(&ProtoInstance70);

Transform61.addChild(&Transform69);

Transform& Transform74 =  Transform();
Transform74.setDEF(CString("Output"));
Transform74.setTranslation(new float[]{1,0,0});
ProtoInstance& ProtoInstance75 =  ProtoInstance();
ProtoInstance75.setName(CString("Widget"));
fieldValue& fieldValue76 =  fieldValue();
fieldValue76.setName(CString("lineColor"));
fieldValue76.setValue(CString("0.44 0.5 0.72"));
ProtoInstance75.addChild(&fieldValue76);

fieldValue& fieldValue77 =  fieldValue();
fieldValue77.setName(CString("geometry"));
Disk2D& Disk2D78 =  Disk2D();
Disk2D78.setUSE(CString("Connector"));
fieldValue77.addChild(Disk2D78);

ProtoInstance75.addChild(&fieldValue77);

Transform74.addChild(&ProtoInstance75);

Transform61.addChild(&Transform74);

Group59.addChild(&Transform61);

ProtoBody58.addChild(&Group59);

Script& Script79 =  Script();
Script79.setDirectOutput(True);
field& field80 =  field();
field80.setName(CString("translation"));
field80.setAccessType(CString("inputOutput"));
field80.setType(CString("SFVec3f"));
Script79.addChild(&field80);

field& field81 =  field();
field81.setName(CString("sensor"));
field81.setAccessType(CString("initializeOnly"));
field81.setType(CString("SFNode"));
PlaneSensor& PlaneSensor82 =  PlaneSensor();
PlaneSensor82.setUSE(CString("PlaneSensor"));
field81.addChild(&PlaneSensor82);

Script79.addChild(&field81);

field& field83 =  field();
field83.setName(CString("transform"));
field83.setAccessType(CString("initializeOnly"));
field83.setType(CString("SFNode"));
Transform& Transform84 =  Transform();
Transform84.setUSE(CString("Node"));
field83.addChild(&Transform84);

Script79.addChild(&field83);

IS& IS85 =  IS();
Connect& connect86 =  Connect();
connect86.setNodeField(CString("translation"));
connect86.setProtoField(CString("translation"));
IS85.addChild(&connect86);

Script79.addChild(&IS85);


Script79.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	sensor .offset = translation;")+
_T("}"));
ProtoBody58.addChild(&Script79);

ROUTE& ROUTE87 =  ROUTE();
ROUTE87.setFromNode(CString("PlaneSensor"));
ROUTE87.setFromField(CString("translation_changed"));
ROUTE87.setToNode(CString("Node"));
ROUTE87.setToField(CString("set_translation"));
ProtoBody58.addChild(&ROUTE87);

ProtoDeclare55.addChild(&ProtoBody58);

Scene9.addChild(&ProtoDeclare55);

ProtoDeclare& ProtoDeclare88 =  ProtoDeclare();
ProtoDeclare88.setName(CString("Route"));
ProtoInterface& ProtoInterface89 =  ProtoInterface();
field& field90 =  field();
field90.setName(CString("lineColor"));
field90.setAccessType(CString("inputOutput"));
field90.setType(CString("SFColor"));
field90.setValue(CString("0.43 0.43 0.98"));
ProtoInterface89.addChild(&field90);

field& field91 =  field();
field91.setName(CString("linewidthScaleFactor"));
field91.setAccessType(CString("inputOutput"));
field91.setType(CString("SFFloat"));
field91.setValue(CString("2"));
ProtoInterface89.addChild(&field91);

field& field92 =  field();
field92.setName(CString("output"));
field92.setAccessType(CString("initializeOnly"));
field92.setType(CString("SFNode"));
ProtoInterface89.addChild(&field92);

field& field93 =  field();
field93.setName(CString("input"));
field93.setAccessType(CString("initializeOnly"));
field93.setType(CString("SFNode"));
ProtoInterface89.addChild(&field93);

ProtoDeclare88.addChild(&ProtoInterface89);

ProtoBody& ProtoBody94 =  ProtoBody();
Shape& Shape95 =  Shape();
Appearance& Appearance96 =  Appearance();
LineProperties& LineProperties97 =  LineProperties();
IS& IS98 =  IS();
Connect& connect99 =  Connect();
connect99.setNodeField(CString("linewidthScaleFactor"));
connect99.setProtoField(CString("linewidthScaleFactor"));
IS98.addChild(&connect99);

LineProperties97.addChild(&IS98);

Appearance96.setLineProperties(LineProperties97);

Material& Material100 =  Material();
Material100.setDiffuseColor(new float[]{0,0,0});
IS& IS101 =  IS();
Connect& connect102 =  Connect();
connect102.setNodeField(CString("emissiveColor"));
connect102.setProtoField(CString("lineColor"));
IS101.addChild(&connect102);

Material100.addChild(&IS101);

Appearance96.addChild(&Material100);

Shape95.addChild(&Appearance96);

LineSet& LineSet103 =  LineSet();
LineSet103.setDEF(CString("Geometry_1"));
LineSet103.setVertexCount(new int32_t[]{2}, 1);
Coordinate& Coordinate104 =  Coordinate();
Coordinate104.setPoint(new float[]{-1,0,0,1,0,0}, 6);
LineSet103.setCoord(Coordinate104);

Shape95.setGeometry(&LineSet103);

ProtoBody94.addChild(&Shape95);

Script& Script105 =  Script();
Script105.setDEF(CString("Route"));
Script105.setDirectOutput(True);
field& field106 =  field();
field106.setName(CString("set_translation"));
field106.setAccessType(CString("inputOnly"));
field106.setType(CString("SFVec3f"));
Script105.addChild(&field106);

field& field107 =  field();
field107.setName(CString("routeDimension"));
field107.setAccessType(CString("initializeOnly"));
field107.setType(CString("SFInt32"));
field107.setValue(CString("21"));
Script105.addChild(&field107);

field& field108 =  field();
field108.setName(CString("output"));
field108.setAccessType(CString("initializeOnly"));
field108.setType(CString("SFNode"));
Script105.addChild(&field108);

field& field109 =  field();
field109.setName(CString("input"));
field109.setAccessType(CString("initializeOnly"));
field109.setType(CString("SFNode"));
Script105.addChild(&field109);

field& field110 =  field();
field110.setName(CString("geometry"));
field110.setAccessType(CString("initializeOnly"));
field110.setType(CString("SFNode"));
LineSet& LineSet111 =  LineSet();
LineSet111.setUSE(CString("Geometry_1"));
field110.addChild(LineSet111);

Script105.addChild(&field110);

field& field112 =  field();
field112.setName(CString("self"));
field112.setAccessType(CString("initializeOnly"));
field112.setType(CString("SFNode"));
Script& Script113 =  Script();
Script113.setUSE(CString("Route"));
field112.addChild(&Script113);

Script105.addChild(&field112);

IS& IS114 =  IS();
Connect& connect115 =  Connect();
connect115.setNodeField(CString("output"));
connect115.setProtoField(CString("output"));
IS114.addChild(&connect115);

Connect& connect116 =  Connect();
connect116.setNodeField(CString("input"));
connect116.setProtoField(CString("input"));
IS114.addChild(&connect116);

Script105.addChild(&IS114);


Script105.setSourceCode(CString("ecmascript:")+
_T("function initialize ()")+
_T("{")+
_T("	Browser .addRoute (output, 'translation_changed', self, 'set_translation');")+
_T("	Browser .addRoute (input,  'translation_changed', self, 'set_translation');")+
_T("	set_translation ();")+
_T("}")+
_T("function set_translation ()")+
_T("{")+
_T("	geometry .vertexCount [0] = routeDimension;")+
_T("	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));")+
_T("	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));")+
_T("	var w = inPoint .x - outPoint .x;")+
_T("	var h = outPoint .y - inPoint .y;")+
_T("	for (var i = 0; i < routeDimension; ++ i)")+
_T("	{")+
_T("		var t = i / (routeDimension - 1);")+
_T("		var y = h / 2 * (Math .cos (t * Math .PI) - 1);")+
_T("		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));")+
_T("	}")+
_T("}"));
ProtoBody94.addChild(&Script105);

ProtoDeclare88.addChild(&ProtoBody94);

Scene9.addChild(&ProtoDeclare88);

NavigationInfo& NavigationInfo117 =  NavigationInfo();
NavigationInfo117.setType(new CString[]{CString("FLY"), CString("ANY")}, 2);
Scene9.addChild(&NavigationInfo117);

Background& Background118 =  Background();
Background118.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene9.addChild(&Background118);

OrthoViewpoint& OrthoViewpoint119 =  OrthoViewpoint();
OrthoViewpoint119.setDescription(CString("OthoViewpoint"));
OrthoViewpoint119.setPosition(new float[]{-3.13496,-4.19776,10});
OrthoViewpoint119.setCenterOfRotation(new float[]{-3.13496,-4.19776,0});
OrthoViewpoint119.setFieldOfView(new float[]{0,0,10,10}, 4);
Scene9.addChild(&OrthoViewpoint119);

Viewpoint& Viewpoint120 =  Viewpoint();
Viewpoint120.setDescription(CString("Viewpoint"));
Scene9.addChild(&Viewpoint120);

Transform& Transform121 =  Transform();
Transform121.setDEF(CString("Connectors"));
ProtoInstance& ProtoInstance122 =  ProtoInstance();
ProtoInstance122.setName(CString("Route"));
fieldValue& fieldValue123 =  fieldValue();
fieldValue123.setName(CString("output"));
ProtoInstance& ProtoInstance124 =  ProtoInstance();
ProtoInstance124.setName(CString("Node"));
ProtoInstance124.setDEF(CString("N1"));
fieldValue& fieldValue125 =  fieldValue();
fieldValue125.setName(CString("translation"));
fieldValue125.setValue(CString("-3.98323 2.88948 0"));
ProtoInstance124.addChild(&fieldValue125);

fieldValue123.addChild(&ProtoInstance124);

ProtoInstance122.addChild(&fieldValue123);

fieldValue& fieldValue126 =  fieldValue();
fieldValue126.setName(CString("input"));
ProtoInstance& ProtoInstance127 =  ProtoInstance();
ProtoInstance127.setName(CString("Node"));
ProtoInstance127.setDEF(CString("N2"));
fieldValue& fieldValue128 =  fieldValue();
fieldValue128.setName(CString("translation"));
fieldValue128.setValue(CString("-0.0890862 2.96049 0"));
ProtoInstance127.addChild(&fieldValue128);

fieldValue126.addChild(&ProtoInstance127);

ProtoInstance122.addChild(&fieldValue126);

Transform121.addChild(&ProtoInstance122);

ProtoInstance& ProtoInstance129 =  ProtoInstance();
ProtoInstance129.setName(CString("Route"));
fieldValue& fieldValue130 =  fieldValue();
fieldValue130.setName(CString("output"));
ProtoInstance& ProtoInstance131 =  ProtoInstance();
ProtoInstance131.setName(CString("Node"));
ProtoInstance131.setUSE(CString("N1"));
fieldValue130.addChild(&ProtoInstance131);

ProtoInstance129.addChild(&fieldValue130);

fieldValue& fieldValue132 =  fieldValue();
fieldValue132.setName(CString("input"));
ProtoInstance& ProtoInstance133 =  ProtoInstance();
ProtoInstance133.setName(CString("Node"));
ProtoInstance133.setDEF(CString("N3"));
fieldValue& fieldValue134 =  fieldValue();
fieldValue134.setName(CString("translation"));
fieldValue134.setValue(CString("-0.104169 1.16371 0"));
ProtoInstance133.addChild(&fieldValue134);

fieldValue132.addChild(&ProtoInstance133);

ProtoInstance129.addChild(&fieldValue132);

Transform121.addChild(&ProtoInstance129);

ProtoInstance& ProtoInstance135 =  ProtoInstance();
ProtoInstance135.setName(CString("Route"));
fieldValue& fieldValue136 =  fieldValue();
fieldValue136.setName(CString("output"));
ProtoInstance& ProtoInstance137 =  ProtoInstance();
ProtoInstance137.setName(CString("Node"));
ProtoInstance137.setUSE(CString("N1"));
fieldValue136.addChild(&ProtoInstance137);

ProtoInstance135.addChild(&fieldValue136);

fieldValue& fieldValue138 =  fieldValue();
fieldValue138.setName(CString("input"));
ProtoInstance& ProtoInstance139 =  ProtoInstance();
ProtoInstance139.setName(CString("Node"));
ProtoInstance139.setDEF(CString("N4"));
fieldValue& fieldValue140 =  fieldValue();
fieldValue140.setName(CString("translation"));
fieldValue140.setValue(CString("-0.0998688 -0.40172 0"));
ProtoInstance139.addChild(&fieldValue140);

fieldValue138.addChild(&ProtoInstance139);

ProtoInstance135.addChild(&fieldValue138);

Transform121.addChild(&ProtoInstance135);

ProtoInstance& ProtoInstance141 =  ProtoInstance();
ProtoInstance141.setName(CString("Route"));
fieldValue& fieldValue142 =  fieldValue();
fieldValue142.setName(CString("output"));
ProtoInstance& ProtoInstance143 =  ProtoInstance();
ProtoInstance143.setName(CString("Node"));
ProtoInstance143.setUSE(CString("N1"));
fieldValue142.addChild(&ProtoInstance143);

ProtoInstance141.addChild(&fieldValue142);

fieldValue& fieldValue144 =  fieldValue();
fieldValue144.setName(CString("input"));
ProtoInstance& ProtoInstance145 =  ProtoInstance();
ProtoInstance145.setName(CString("Node"));
ProtoInstance145.setDEF(CString("N5"));
fieldValue& fieldValue146 =  fieldValue();
fieldValue146.setName(CString("translation"));
fieldValue146.setValue(CString("-0.0998687 -2.14742 0"));
ProtoInstance145.addChild(&fieldValue146);

fieldValue144.addChild(&ProtoInstance145);

ProtoInstance141.addChild(&fieldValue144);

Transform121.addChild(&ProtoInstance141);

ProtoInstance& ProtoInstance147 =  ProtoInstance();
ProtoInstance147.setName(CString("Route"));
fieldValue& fieldValue148 =  fieldValue();
fieldValue148.setName(CString("output"));
ProtoInstance& ProtoInstance149 =  ProtoInstance();
ProtoInstance149.setName(CString("Node"));
ProtoInstance149.setUSE(CString("N2"));
fieldValue148.addChild(&ProtoInstance149);

ProtoInstance147.addChild(&fieldValue148);

fieldValue& fieldValue150 =  fieldValue();
fieldValue150.setName(CString("input"));
ProtoInstance& ProtoInstance151 =  ProtoInstance();
ProtoInstance151.setName(CString("Node"));
ProtoInstance151.setDEF(CString("N6"));
fieldValue& fieldValue152 =  fieldValue();
fieldValue152.setName(CString("translation"));
fieldValue152.setValue(CString("3.55694 2.4116 0"));
ProtoInstance151.addChild(&fieldValue152);

fieldValue150.addChild(&ProtoInstance151);

ProtoInstance147.addChild(&fieldValue150);

Transform121.addChild(&ProtoInstance147);

ProtoInstance& ProtoInstance153 =  ProtoInstance();
ProtoInstance153.setName(CString("Route"));
fieldValue& fieldValue154 =  fieldValue();
fieldValue154.setName(CString("output"));
ProtoInstance& ProtoInstance155 =  ProtoInstance();
ProtoInstance155.setName(CString("Node"));
ProtoInstance155.setUSE(CString("N3"));
fieldValue154.addChild(&ProtoInstance155);

ProtoInstance153.addChild(&fieldValue154);

fieldValue& fieldValue156 =  fieldValue();
fieldValue156.setName(CString("input"));
ProtoInstance& ProtoInstance157 =  ProtoInstance();
ProtoInstance157.setName(CString("Node"));
ProtoInstance157.setUSE(CString("N6"));
fieldValue156.addChild(&ProtoInstance157);

ProtoInstance153.addChild(&fieldValue156);

Transform121.addChild(&ProtoInstance153);

ProtoInstance& ProtoInstance158 =  ProtoInstance();
ProtoInstance158.setName(CString("Route"));
fieldValue& fieldValue159 =  fieldValue();
fieldValue159.setName(CString("output"));
ProtoInstance& ProtoInstance160 =  ProtoInstance();
ProtoInstance160.setName(CString("Node"));
ProtoInstance160.setUSE(CString("N4"));
fieldValue159.addChild(&ProtoInstance160);

ProtoInstance158.addChild(&fieldValue159);

fieldValue& fieldValue161 =  fieldValue();
fieldValue161.setName(CString("input"));
ProtoInstance& ProtoInstance162 =  ProtoInstance();
ProtoInstance162.setName(CString("Node"));
ProtoInstance162.setDEF(CString("N7"));
fieldValue& fieldValue163 =  fieldValue();
fieldValue163.setName(CString("translation"));
fieldValue163.setValue(CString("3.75106 -0.0794556 0"));
ProtoInstance162.addChild(&fieldValue163);

fieldValue161.addChild(&ProtoInstance162);

ProtoInstance158.addChild(&fieldValue161);

Transform121.addChild(&ProtoInstance158);

ProtoInstance& ProtoInstance164 =  ProtoInstance();
ProtoInstance164.setName(CString("Route"));
fieldValue& fieldValue165 =  fieldValue();
fieldValue165.setName(CString("output"));
ProtoInstance& ProtoInstance166 =  ProtoInstance();
ProtoInstance166.setName(CString("Node"));
ProtoInstance166.setUSE(CString("N5"));
fieldValue165.addChild(&ProtoInstance166);

ProtoInstance164.addChild(&fieldValue165);

fieldValue& fieldValue167 =  fieldValue();
fieldValue167.setName(CString("input"));
ProtoInstance& ProtoInstance168 =  ProtoInstance();
ProtoInstance168.setName(CString("Node"));
ProtoInstance168.setUSE(CString("N7"));
fieldValue167.addChild(&ProtoInstance168);

ProtoInstance164.addChild(&fieldValue167);

Transform121.addChild(&ProtoInstance164);

ProtoInstance& ProtoInstance169 =  ProtoInstance();
ProtoInstance169.setName(CString("Route"));
fieldValue& fieldValue170 =  fieldValue();
fieldValue170.setName(CString("output"));
ProtoInstance& ProtoInstance171 =  ProtoInstance();
ProtoInstance171.setName(CString("Node"));
ProtoInstance171.setUSE(CString("N6"));
fieldValue170.addChild(&ProtoInstance171);

ProtoInstance169.addChild(&fieldValue170);

fieldValue& fieldValue172 =  fieldValue();
fieldValue172.setName(CString("input"));
ProtoInstance& ProtoInstance173 =  ProtoInstance();
ProtoInstance173.setName(CString("Node"));
ProtoInstance173.setDEF(CString("N8"));
fieldValue& fieldValue174 =  fieldValue();
fieldValue174.setName(CString("translation"));
fieldValue174.setValue(CString("7.68077 1.21228 0"));
ProtoInstance173.addChild(&fieldValue174);

fieldValue172.addChild(&ProtoInstance173);

ProtoInstance169.addChild(&fieldValue172);

Transform121.addChild(&ProtoInstance169);

ProtoInstance& ProtoInstance175 =  ProtoInstance();
ProtoInstance175.setName(CString("Route"));
fieldValue& fieldValue176 =  fieldValue();
fieldValue176.setName(CString("output"));
ProtoInstance& ProtoInstance177 =  ProtoInstance();
ProtoInstance177.setName(CString("Node"));
ProtoInstance177.setUSE(CString("N7"));
fieldValue176.addChild(&ProtoInstance177);

ProtoInstance175.addChild(&fieldValue176);

fieldValue& fieldValue178 =  fieldValue();
fieldValue178.setName(CString("input"));
ProtoInstance& ProtoInstance179 =  ProtoInstance();
ProtoInstance179.setName(CString("Node"));
ProtoInstance179.setUSE(CString("N8"));
fieldValue178.addChild(&ProtoInstance179);

ProtoInstance175.addChild(&fieldValue178);

Transform121.addChild(&ProtoInstance175);

ProtoInstance& ProtoInstance180 =  ProtoInstance();
ProtoInstance180.setName(CString("Node"));
ProtoInstance180.setUSE(CString("N1"));
Transform121.addChild(&ProtoInstance180);

ProtoInstance& ProtoInstance181 =  ProtoInstance();
ProtoInstance181.setName(CString("Node"));
ProtoInstance181.setUSE(CString("N2"));
Transform121.addChild(&ProtoInstance181);

ProtoInstance& ProtoInstance182 =  ProtoInstance();
ProtoInstance182.setName(CString("Node"));
ProtoInstance182.setUSE(CString("N3"));
Transform121.addChild(&ProtoInstance182);

ProtoInstance& ProtoInstance183 =  ProtoInstance();
ProtoInstance183.setName(CString("Node"));
ProtoInstance183.setUSE(CString("N4"));
Transform121.addChild(&ProtoInstance183);

ProtoInstance& ProtoInstance184 =  ProtoInstance();
ProtoInstance184.setName(CString("Node"));
ProtoInstance184.setUSE(CString("N5"));
Transform121.addChild(&ProtoInstance184);

ProtoInstance& ProtoInstance185 =  ProtoInstance();
ProtoInstance185.setName(CString("Node"));
ProtoInstance185.setUSE(CString("N6"));
Transform121.addChild(&ProtoInstance185);

ProtoInstance& ProtoInstance186 =  ProtoInstance();
ProtoInstance186.setName(CString("Node"));
ProtoInstance186.setUSE(CString("N7"));
Transform121.addChild(&ProtoInstance186);

ProtoInstance& ProtoInstance187 =  ProtoInstance();
ProtoInstance187.setName(CString("Node"));
ProtoInstance187.setUSE(CString("N8"));
Transform121.addChild(&ProtoInstance187);

Scene9.addChild(&Transform121);

X3D0.setScene(&Scene9);

}
