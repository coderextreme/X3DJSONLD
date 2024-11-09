//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
MFInt32 MFInt320 =  MFInt32();
MFInt320.setValue(3, new int32_t[]{1, 0, 1});
MFInt32 MFInt321 =  MFInt32();
MFInt321.setValue(3, new int32_t[]{2, 5, 2});
MFInt32 MFInt322 =  MFInt32();
MFInt322.setValue(1, new int32_t[]{48});
MFInt32 MFInt323 =  MFInt32();
MFInt323.setValue(1, new int32_t[]{10});
MFInt32 MFInt324 =  MFInt32();
MFInt324.setValue(5, new int32_t[]{0, 12, 24, 36, 48});
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
meta3.setContent(CString("Tue, 22 Sep 2015 11:26:52 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V3.0.4, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///home/holger/Projekte/Library/Examples/Marble/marble.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 13 Jun 2017 09:43:36 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ProtoDeclare& ProtoDeclare9 =  ProtoDeclare();
ProtoDeclare9.setName(CString("Grid"));
ProtoInterface& ProtoInterface10 =  ProtoInterface();
field& field11 =  field();
field11.setName(CString("translation"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFVec3f"));
ProtoInterface10.addChild(&field11);

field& field12 =  field();
field12.setName(CString("rotation"));
field12.setAccessType(CString("inputOutput"));
field12.setType(CString("SFRotation"));
ProtoInterface10.addChild(&field12);

field& field13 =  field();
field13.setName(CString("scale"));
field13.setAccessType(CString("inputOutput"));
field13.setType(CString("SFVec3f"));
field13.setValue(CString("1 1 1"));
ProtoInterface10.addChild(&field13);

field& field14 =  field();
field14.setName(CString("dimension"));
field14.setAccessType(CString("inputOutput"));
field14.setType(CString("MFInt32"));
field14.setValue(CString("10 10 10"));
ProtoInterface10.addChild(&field14);

field& field15 =  field();
field15.setName(CString("majorLineEvery"));
field15.setAccessType(CString("inputOutput"));
field15.setType(CString("MFInt32"));
field15.setValue(CString("5 5 5"));
ProtoInterface10.addChild(&field15);

field& field16 =  field();
field16.setName(CString("majorLineOffset"));
field16.setAccessType(CString("inputOutput"));
field16.setType(CString("MFInt32"));
field16.setValue(CString("0 0 0"));
ProtoInterface10.addChild(&field16);

field& field17 =  field();
field17.setName(CString("color"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFColor"));
field17.setValue(CString("0.5 0.5 0.5"));
ProtoInterface10.addChild(&field17);

field& field18 =  field();
field18.setName(CString("transparency"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFFloat"));
field18.setValue(CString("0.61803"));
ProtoInterface10.addChild(&field18);

field& field19 =  field();
field19.setName(CString("lineColor"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFColor"));
field19.setValue(CString("1 0.7 0.7"));
ProtoInterface10.addChild(&field19);

field& field20 =  field();
field20.setName(CString("lineTransparency"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFFloat"));
field20.setValue(CString("0.8"));
ProtoInterface10.addChild(&field20);

field& field21 =  field();
field21.setName(CString("majorLineColor"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFColor"));
field21.setValue(CString("1 0.7 0.7"));
ProtoInterface10.addChild(&field21);

field& field22 =  field();
field22.setName(CString("majorLineTransparency"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFFloat"));
field22.setValue(CString("0.6"));
ProtoInterface10.addChild(&field22);

field& field23 =  field();
field23.setName(CString("solid"));
field23.setAccessType(CString("initializeOnly"));
field23.setType(CString("SFBool"));
field23.setValue(CString("true"));
ProtoInterface10.addChild(&field23);

ProtoDeclare9.addChild(&ProtoInterface10);

ProtoBody& ProtoBody24 =  ProtoBody();
Transform& Transform25 =  Transform();
IS& IS26 =  IS();
Connect& connect27 =  Connect();
connect27.setNodeField(CString("translation"));
connect27.setProtoField(CString("translation"));
IS26.addChild(&connect27);

Connect& connect28 =  Connect();
connect28.setNodeField(CString("rotation"));
connect28.setProtoField(CString("rotation"));
IS26.addChild(&connect28);

Connect& connect29 =  Connect();
connect29.setNodeField(CString("scale"));
connect29.setProtoField(CString("scale"));
IS26.addChild(&connect29);

Transform25.addChild(&IS26);

Transform& Transform30 =  Transform();
Transform30.setDEF(CString("Plane"));
Transform30.setRotation(new float[]{-3.09087122910219e-8,0.70710528118436,0.707108281185553,3.14159});
Transform30.setScale(new float[]{10.0,10.0,1.0});
Shape& Shape31 =  Shape();
Appearance& Appearance32 =  Appearance();
Material& Material33 =  Material();
Material33.setDEF(CString("Material2"));
Material33.setDiffuseColor(new float[]{0.0,0.0,0.0});
IS& IS34 =  IS();
Connect& connect35 =  Connect();
connect35.setNodeField(CString("emissiveColor"));
connect35.setProtoField(CString("color"));
IS34.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("transparency"));
connect36.setProtoField(CString("transparency"));
IS34.addChild(&connect36);

Material33.addChild(&IS34);

Appearance32.addChild(&Material33);

Shape31.addChild(&Appearance32);

Rectangle2D& Rectangle2D37 =  Rectangle2D();
Rectangle2D37.setSize(new float[]{1.0,1.0});
IS& IS38 =  IS();
Connect& connect39 =  Connect();
connect39.setNodeField(CString("solid"));
connect39.setProtoField(CString("solid"));
IS38.addChild(&connect39);

Rectangle2D37.addChild(&IS38);

Shape31.setGeometry(Rectangle2D37);

Transform30.addChild(&Shape31);

Transform25.addChild(&Transform30);

Shape& Shape40 =  Shape();
Shape40.setDEF(CString("MajorGrid"));
Appearance& Appearance41 =  Appearance();
Material& Material42 =  Material();
Material42.setDEF(CString("MajorMaterial"));
IS& IS43 =  IS();
Connect& connect44 =  Connect();
connect44.setNodeField(CString("emissiveColor"));
connect44.setProtoField(CString("majorLineColor"));
IS43.addChild(&connect44);

Connect& connect45 =  Connect();
connect45.setNodeField(CString("transparency"));
connect45.setProtoField(CString("majorLineTransparency"));
IS43.addChild(&connect45);

Material42.addChild(&IS43);

Appearance41.addChild(&Material42);

Shape40.addChild(&Appearance41);

IndexedLineSet& IndexedLineSet46 =  IndexedLineSet();
IndexedLineSet46.setDEF(CString("MajorGrid_1"));
IndexedLineSet46.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1}, 18);
Coordinate& Coordinate47 =  Coordinate();
Coordinate47.setPoint(new float[]{-5.0,0.0,-5.25,-5.0,0.0,5.25,0.0,0.0,-5.25,0.0,0.0,5.25,5.0,0.0,-5.25,5.0,0.0,5.25,-5.25,0.0,-5.0,5.25,0.0,-5.0,-5.25,0.0,0.0,5.25,0.0,0.0,-5.25,0.0,5.0,5.25,0.0,5.0}, 36);
IndexedLineSet46.setCoord(&Coordinate47);

Shape40.setGeometry(&IndexedLineSet46);

Transform25.addChild(&Shape40);

Shape& Shape48 =  Shape();
Shape48.setDEF(CString("MinorGrid"));
Appearance& Appearance49 =  Appearance();
Material& Material50 =  Material();
Material50.setDEF(CString("MinorMaterial"));
IS& IS51 =  IS();
Connect& connect52 =  Connect();
connect52.setNodeField(CString("emissiveColor"));
connect52.setProtoField(CString("lineColor"));
IS51.addChild(&connect52);

Connect& connect53 =  Connect();
connect53.setNodeField(CString("transparency"));
connect53.setProtoField(CString("lineTransparency"));
IS51.addChild(&connect53);

Material50.addChild(&IS51);

Appearance49.addChild(&Material50);

Shape48.addChild(&Appearance49);

IndexedLineSet& IndexedLineSet54 =  IndexedLineSet();
IndexedLineSet54.setDEF(CString("MinorGrid_1"));
IndexedLineSet54.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1}, 48);
Coordinate& Coordinate55 =  Coordinate();
Coordinate55.setPoint(new float[]{-4.0,0.0,-5.0,-4.0,0.0,5.0,-3.0,0.0,-5.0,-3.0,0.0,5.0,-2.0,0.0,-5.0,-2.0,0.0,5.0,-1.0,0.0,-5.0,-1.0,0.0,5.0,1.0,0.0,-5.0,1.0,0.0,5.0,2.0,0.0,-5.0,2.0,0.0,5.0,3.0,0.0,-5.0,3.0,0.0,5.0,4.0,0.0,-5.0,4.0,0.0,5.0,-5.0,0.0,-4.0,5.0,0.0,-4.0,-5.0,0.0,-3.0,5.0,0.0,-3.0,-5.0,0.0,-2.0,5.0,0.0,-2.0,-5.0,0.0,-1.0,5.0,0.0,-1.0,-5.0,0.0,1.0,5.0,0.0,1.0,-5.0,0.0,2.0,5.0,0.0,2.0,-5.0,0.0,3.0,5.0,0.0,3.0,-5.0,0.0,4.0,5.0,0.0,4.0}, 96);
IndexedLineSet54.setCoord(&Coordinate55);

Shape48.setGeometry(&IndexedLineSet54);

Transform25.addChild(&Shape48);

Shape& Shape56 =  Shape();
Shape56.setDEF(CString("MajorPoints"));
Appearance& Appearance57 =  Appearance();
LineProperties& LineProperties58 =  LineProperties();
LineProperties58.setLinewidthScaleFactor(6);
Appearance57.setLineProperties(LineProperties58);

Material& Material59 =  Material();
Material59.setUSE(CString("MajorMaterial"));
Appearance57.addChild(&Material59);

Shape56.addChild(&Appearance57);

PointSet& PointSet60 =  PointSet();
PointSet60.setDEF(CString("MajorPoints_1"));
Coordinate& Coordinate61 =  Coordinate();
Coordinate61.setPoint(new float[]{0.0,-5.0,0.0,0.0,0.0,0.0,0.0,5.0,0.0}, 9);
PointSet60.setCoord(&Coordinate61);

Shape56.setGeometry(PointSet60);

Transform25.addChild(&Shape56);

Shape& Shape62 =  Shape();
Shape62.setDEF(CString("MinorPoints"));
Appearance& Appearance63 =  Appearance();
LineProperties& LineProperties64 =  LineProperties();
LineProperties64.setLinewidthScaleFactor(4);
Appearance63.setLineProperties(LineProperties64);

Material& Material65 =  Material();
Material65.setUSE(CString("MinorMaterial"));
Appearance63.addChild(&Material65);

Shape62.addChild(&Appearance63);

PointSet& PointSet66 =  PointSet();
PointSet66.setDEF(CString("MinorPoints_1"));
Coordinate& Coordinate67 =  Coordinate();
Coordinate67.setPoint(new float[]{0.0,-4.0,0.0,0.0,-3.0,0.0,0.0,-2.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,2.0,0.0,0.0,3.0,0.0,0.0,4.0,0.0}, 24);
PointSet66.setCoord(&Coordinate67);

Shape62.setGeometry(PointSet66);

Transform25.addChild(&Shape62);

ProtoBody24.addChild(&Transform25);

Script& Script68 =  Script();
Script68.setDEF(CString("GridScript"));
Script68.setDirectOutput(true);
Script68.setMustEvaluate(true);
field& field69 =  field();
field69.setName(CString("dimension"));
field69.setAccessType(CString("inputOutput"));
field69.setType(CString("MFInt32"));
Script68.addChild(&field69);

field& field70 =  field();
field70.setName(CString("majorLineEvery"));
field70.setAccessType(CString("inputOutput"));
field70.setType(CString("MFInt32"));
Script68.addChild(&field70);

field& field71 =  field();
field71.setName(CString("majorLineOffset"));
field71.setAccessType(CString("inputOutput"));
field71.setType(CString("MFInt32"));
Script68.addChild(&field71);

field& field72 =  field();
field72.setName(CString("plane"));
field72.setAccessType(CString("initializeOnly"));
field72.setType(CString("SFNode"));
Transform& Transform73 =  Transform();
Transform73.setUSE(CString("Plane"));
field72.addChild(&Transform73);

Script68.addChild(&field72);

field& field74 =  field();
field74.setName(CString("majorGrid"));
field74.setAccessType(CString("initializeOnly"));
field74.setType(CString("SFNode"));
IndexedLineSet& IndexedLineSet75 =  IndexedLineSet();
IndexedLineSet75.setUSE(CString("MajorGrid_1"));
field74.addChild(IndexedLineSet75);

Script68.addChild(&field74);

field& field76 =  field();
field76.setName(CString("minorGrid"));
field76.setAccessType(CString("initializeOnly"));
field76.setType(CString("SFNode"));
IndexedLineSet& IndexedLineSet77 =  IndexedLineSet();
IndexedLineSet77.setUSE(CString("MinorGrid_1"));
field76.addChild(IndexedLineSet77);

Script68.addChild(&field76);

field& field78 =  field();
field78.setName(CString("majorPoints"));
field78.setAccessType(CString("initializeOnly"));
field78.setType(CString("SFNode"));
PointSet& PointSet79 =  PointSet();
PointSet79.setUSE(CString("MajorPoints_1"));
field78.addChild(PointSet79);

Script68.addChild(&field78);

field& field80 =  field();
field80.setName(CString("minorPoints"));
field80.setAccessType(CString("initializeOnly"));
field80.setType(CString("SFNode"));
PointSet& PointSet81 =  PointSet();
PointSet81.setUSE(CString("MinorPoints_1"));
field80.addChild(PointSet81);

Script68.addChild(&field80);

IS& IS82 =  IS();
Connect& connect83 =  Connect();
connect83.setNodeField(CString("dimension"));
connect83.setProtoField(CString("dimension"));
IS82.addChild(&connect83);

Connect& connect84 =  Connect();
connect84.setNodeField(CString("majorLineEvery"));
connect84.setProtoField(CString("majorLineEvery"));
IS82.addChild(&connect84);

Connect& connect85 =  Connect();
connect85.setNodeField(CString("majorLineOffset"));
connect85.setProtoField(CString("majorLineOffset"));
IS82.addChild(&connect85);

Script68.addChild(&IS82);


//Script68.setSourceCode(CString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	eventsProcessed ();")+
//_T("}")+
//_T("function eventsProcessed ()")+
//_T("{")+
//_T("	// Plane")+
//_T("	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);")+
//_T("	// Grid")+
//_T("	generateGrid (true, majorGrid);")+
//_T("	generateGrid (false, minorGrid);")+
//_T("	// Points")+
//_T("	generatePoints (true,  majorPoints .coord .point);")+
//_T("	generatePoints (false, minorPoints .coord .point);")+
//_T("}")+
//_T("function generateGrid (major, grid)")+
//_T("{")+
//_T("	var point       = grid .coord .point;")+
//_T("	var coordIndex  = new MFInt32 ();")+
//_T("	var scaleX1_2   = dimension [0] / 2;")+
//_T("	var scaleZ1_2   = dimension [2] / 2;")+
//_T("	var majorAdd    = major / 4;")+
//_T("	var p           = 0;")+
//_T("	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)")+
//_T("	{")+
//_T("		if (major - isMajorLine (i, 0))")+
//_T("			continue;")+
//_T("		var x = -scaleX1_2 + i;")+
//_T("		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);")+
//_T("		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);")+
//_T("		coordIndex [coordIndex .length] = p;")+
//_T("		coordIndex [coordIndex .length] = p + 1;")+
//_T("		coordIndex [coordIndex .length] = -1;")+
//_T("			")+
//_T("		p += 2;")+
//_T("	}")+
//_T("	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)")+
//_T("	{")+
//_T("		if (major - isMajorLine (i, 2))")+
//_T("			continue;")+
//_T("		var z = -scaleZ1_2 + i;")+
//_T("		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);")+
//_T("		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);")+
//_T("		coordIndex [coordIndex .length] = p;")+
//_T("		coordIndex [coordIndex .length] = p + 1;")+
//_T("		coordIndex [coordIndex .length] = -1;")+
//_T("		")+
//_T("		p += 2;")+
//_T("	}")+
//_T("	point .length = p;")+
//_T("	grid .set_coordIndex = coordIndex;")+
//_T("}")+
//_T("function generatePoints (major, point)")+
//_T("{")+
//_T("	var scaleY1_2 = -dimension [1] / 2;")+
//_T("	var p         = 0;")+
//_T("	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)")+
//_T("	{")+
//_T("		if (major - isMajorLine (i, 1))")+
//_T("			continue;")+
//_T("		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);")+
//_T("		++ p;")+
//_T("	}")+
//_T("	point .length = p;")+
//_T("}")+
//_T("function isMajorLine (i, index)")+
//_T("{")+
//_T("	for (var d = index; d < majorLineEvery .length; d += 3)")+
//_T("	{")+
//_T("		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))")+
//_T("			return true;")+
//_T("	}")+
//_T("	return false;")+
//_T("}")+
//_T("function isMajor (i, dimension, majorLineEvery, majorLineOffset)")+
//_T("{")+
//_T("	if (majorLineEvery)")+
//_T("	{")+
//_T("		var index = Math .floor (i - dimension / 2 - majorLineOffset);")+
//_T("		return !(index % majorLineEvery);")+
//_T("	}")+
//_T("	return false;")+
//_T("}"));
ProtoBody24.addChild(&Script68);

ProtoDeclare9.addChild(&ProtoBody24);

Scene8.addChild(&ProtoDeclare9);

ProtoDeclare& ProtoDeclare86 =  ProtoDeclare();
ProtoDeclare86.setName(CString("NewPrototype"));
ProtoBody& ProtoBody87 =  ProtoBody();
ProtoDeclare& ProtoDeclare88 =  ProtoDeclare();
ProtoDeclare88.setName(CString("Grid"));
ProtoInterface& ProtoInterface89 =  ProtoInterface();
field& field90 =  field();
field90.setName(CString("translation"));
field90.setAccessType(CString("inputOutput"));
field90.setType(CString("SFVec3f"));
ProtoInterface89.addChild(&field90);

field& field91 =  field();
field91.setName(CString("rotation"));
field91.setAccessType(CString("inputOutput"));
field91.setType(CString("SFRotation"));
ProtoInterface89.addChild(&field91);

field& field92 =  field();
field92.setName(CString("scale"));
field92.setAccessType(CString("inputOutput"));
field92.setType(CString("SFVec3f"));
field92.setValue(CString("1 1 1"));
ProtoInterface89.addChild(&field92);

field& field93 =  field();
field93.setName(CString("dimension"));
field93.setAccessType(CString("inputOutput"));
field93.setType(CString("MFInt32"));
field93.setValue(CString("10 10 10"));
ProtoInterface89.addChild(&field93);

field& field94 =  field();
field94.setName(CString("majorLineEvery"));
field94.setAccessType(CString("inputOutput"));
field94.setType(CString("MFInt32"));
field94.setValue(CString("5 5 5"));
ProtoInterface89.addChild(&field94);

field& field95 =  field();
field95.setName(CString("majorLineOffset"));
field95.setAccessType(CString("inputOutput"));
field95.setType(CString("MFInt32"));
field95.setValue(CString("0 0 0"));
ProtoInterface89.addChild(&field95);

field& field96 =  field();
field96.setName(CString("color"));
field96.setAccessType(CString("inputOutput"));
field96.setType(CString("SFColor"));
field96.setValue(CString("0.5 0.5 0.5"));
ProtoInterface89.addChild(&field96);

field& field97 =  field();
field97.setName(CString("transparency"));
field97.setAccessType(CString("inputOutput"));
field97.setType(CString("SFFloat"));
field97.setValue(CString("0.61803"));
ProtoInterface89.addChild(&field97);

field& field98 =  field();
field98.setName(CString("lineColor"));
field98.setAccessType(CString("inputOutput"));
field98.setType(CString("SFColor"));
field98.setValue(CString("1 0.7 0.7"));
ProtoInterface89.addChild(&field98);

field& field99 =  field();
field99.setName(CString("lineTransparency"));
field99.setAccessType(CString("inputOutput"));
field99.setType(CString("SFFloat"));
field99.setValue(CString("0.8"));
ProtoInterface89.addChild(&field99);

field& field100 =  field();
field100.setName(CString("majorLineColor"));
field100.setAccessType(CString("inputOutput"));
field100.setType(CString("SFColor"));
field100.setValue(CString("1 0.7 0.7"));
ProtoInterface89.addChild(&field100);

field& field101 =  field();
field101.setName(CString("majorLineTransparency"));
field101.setAccessType(CString("inputOutput"));
field101.setType(CString("SFFloat"));
field101.setValue(CString("0.6"));
ProtoInterface89.addChild(&field101);

field& field102 =  field();
field102.setName(CString("solid"));
field102.setAccessType(CString("initializeOnly"));
field102.setType(CString("SFBool"));
field102.setValue(CString("true"));
ProtoInterface89.addChild(&field102);

ProtoDeclare88.addChild(&ProtoInterface89);

ProtoBody& ProtoBody103 =  ProtoBody();
Transform& Transform104 =  Transform();
IS& IS105 =  IS();
Connect& connect106 =  Connect();
connect106.setNodeField(CString("translation"));
connect106.setProtoField(CString("translation"));
IS105.addChild(&connect106);

Connect& connect107 =  Connect();
connect107.setNodeField(CString("rotation"));
connect107.setProtoField(CString("rotation"));
IS105.addChild(&connect107);

Connect& connect108 =  Connect();
connect108.setNodeField(CString("scale"));
connect108.setProtoField(CString("scale"));
IS105.addChild(&connect108);

Transform104.addChild(&IS105);

Transform& Transform109 =  Transform();
Transform109.setDEF(CString("Plane_1"));
Transform109.setRotation(new float[]{-3.09087122910219e-8,0.70710528118436,0.707108281185553,3.14159});
Transform109.setScale(new float[]{10.0,10.0,1.0});
Shape& Shape110 =  Shape();
Appearance& Appearance111 =  Appearance();
Material& Material112 =  Material();
Material112.setDEF(CString("Material2_1"));
Material112.setDiffuseColor(new float[]{0.0,0.0,0.0});
IS& IS113 =  IS();
Connect& connect114 =  Connect();
connect114.setNodeField(CString("emissiveColor"));
connect114.setProtoField(CString("color"));
IS113.addChild(&connect114);

Connect& connect115 =  Connect();
connect115.setNodeField(CString("transparency"));
connect115.setProtoField(CString("transparency"));
IS113.addChild(&connect115);

Material112.addChild(&IS113);

Appearance111.addChild(&Material112);

Shape110.addChild(&Appearance111);

Rectangle2D& Rectangle2D116 =  Rectangle2D();
Rectangle2D116.setSize(new float[]{1.0,1.0});
IS& IS117 =  IS();
Connect& connect118 =  Connect();
connect118.setNodeField(CString("solid"));
connect118.setProtoField(CString("solid"));
IS117.addChild(&connect118);

Rectangle2D116.addChild(&IS117);

Shape110.setGeometry(Rectangle2D116);

Transform109.addChild(&Shape110);

Transform104.addChild(&Transform109);

Shape& Shape119 =  Shape();
Shape119.setDEF(CString("MajorGrid_2"));
Appearance& Appearance120 =  Appearance();
Material& Material121 =  Material();
Material121.setDEF(CString("MajorMaterial_1"));
IS& IS122 =  IS();
Connect& connect123 =  Connect();
connect123.setNodeField(CString("emissiveColor"));
connect123.setProtoField(CString("majorLineColor"));
IS122.addChild(&connect123);

Connect& connect124 =  Connect();
connect124.setNodeField(CString("transparency"));
connect124.setProtoField(CString("majorLineTransparency"));
IS122.addChild(&connect124);

Material121.addChild(&IS122);

Appearance120.addChild(&Material121);

Shape119.addChild(&Appearance120);

IndexedLineSet& IndexedLineSet125 =  IndexedLineSet();
IndexedLineSet125.setDEF(CString("MajorGrid_3"));
IndexedLineSet125.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1}, 18);
Coordinate& Coordinate126 =  Coordinate();
Coordinate126.setPoint(new float[]{-5.0,0.0,-5.25,-5.0,0.0,5.25,0.0,0.0,-5.25,0.0,0.0,5.25,5.0,0.0,-5.25,5.0,0.0,5.25,-5.25,0.0,-5.0,5.25,0.0,-5.0,-5.25,0.0,0.0,5.25,0.0,0.0,-5.25,0.0,5.0,5.25,0.0,5.0}, 36);
IndexedLineSet125.setCoord(&Coordinate126);

Shape119.setGeometry(&IndexedLineSet125);

Transform104.addChild(&Shape119);

Shape& Shape127 =  Shape();
Shape127.setDEF(CString("MinorGrid_2"));
Appearance& Appearance128 =  Appearance();
Material& Material129 =  Material();
Material129.setDEF(CString("MinorMaterial_1"));
IS& IS130 =  IS();
Connect& connect131 =  Connect();
connect131.setNodeField(CString("emissiveColor"));
connect131.setProtoField(CString("lineColor"));
IS130.addChild(&connect131);

Connect& connect132 =  Connect();
connect132.setNodeField(CString("transparency"));
connect132.setProtoField(CString("lineTransparency"));
IS130.addChild(&connect132);

Material129.addChild(&IS130);

Appearance128.addChild(&Material129);

Shape127.addChild(&Appearance128);

IndexedLineSet& IndexedLineSet133 =  IndexedLineSet();
IndexedLineSet133.setDEF(CString("MinorGrid_3"));
IndexedLineSet133.setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1}, 48);
Coordinate& Coordinate134 =  Coordinate();
Coordinate134.setPoint(new float[]{-4.0,0.0,-5.0,-4.0,0.0,5.0,-3.0,0.0,-5.0,-3.0,0.0,5.0,-2.0,0.0,-5.0,-2.0,0.0,5.0,-1.0,0.0,-5.0,-1.0,0.0,5.0,1.0,0.0,-5.0,1.0,0.0,5.0,2.0,0.0,-5.0,2.0,0.0,5.0,3.0,0.0,-5.0,3.0,0.0,5.0,4.0,0.0,-5.0,4.0,0.0,5.0,-5.0,0.0,-4.0,5.0,0.0,-4.0,-5.0,0.0,-3.0,5.0,0.0,-3.0,-5.0,0.0,-2.0,5.0,0.0,-2.0,-5.0,0.0,-1.0,5.0,0.0,-1.0,-5.0,0.0,1.0,5.0,0.0,1.0,-5.0,0.0,2.0,5.0,0.0,2.0,-5.0,0.0,3.0,5.0,0.0,3.0,-5.0,0.0,4.0,5.0,0.0,4.0}, 96);
IndexedLineSet133.setCoord(&Coordinate134);

Shape127.setGeometry(&IndexedLineSet133);

Transform104.addChild(&Shape127);

Shape& Shape135 =  Shape();
Shape135.setDEF(CString("MajorPoints_2"));
Appearance& Appearance136 =  Appearance();
LineProperties& LineProperties137 =  LineProperties();
LineProperties137.setLinewidthScaleFactor(6);
Appearance136.setLineProperties(LineProperties137);

Material& Material138 =  Material();
Material138.setUSE(CString("MajorMaterial_1"));
Appearance136.addChild(&Material138);

Shape135.addChild(&Appearance136);

PointSet& PointSet139 =  PointSet();
PointSet139.setDEF(CString("MajorPoints_3"));
Coordinate& Coordinate140 =  Coordinate();
Coordinate140.setPoint(new float[]{0.0,-5.0,0.0,0.0,0.0,0.0,0.0,5.0,0.0}, 9);
PointSet139.setCoord(&Coordinate140);

Shape135.setGeometry(PointSet139);

Transform104.addChild(&Shape135);

Shape& Shape141 =  Shape();
Shape141.setDEF(CString("MinorPoints_2"));
Appearance& Appearance142 =  Appearance();
LineProperties& LineProperties143 =  LineProperties();
LineProperties143.setLinewidthScaleFactor(4);
Appearance142.setLineProperties(LineProperties143);

Material& Material144 =  Material();
Material144.setUSE(CString("MinorMaterial_1"));
Appearance142.addChild(&Material144);

Shape141.addChild(&Appearance142);

PointSet& PointSet145 =  PointSet();
PointSet145.setDEF(CString("MinorPoints_3"));
Coordinate& Coordinate146 =  Coordinate();
Coordinate146.setPoint(new float[]{0.0,-4.0,0.0,0.0,-3.0,0.0,0.0,-2.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,2.0,0.0,0.0,3.0,0.0,0.0,4.0,0.0}, 24);
PointSet145.setCoord(&Coordinate146);

Shape141.setGeometry(PointSet145);

Transform104.addChild(&Shape141);

ProtoBody103.addChild(&Transform104);

Script& Script147 =  Script();
Script147.setDEF(CString("GridScript_1"));
Script147.setDirectOutput(true);
Script147.setMustEvaluate(true);
field& field148 =  field();
field148.setName(CString("dimension"));
field148.setAccessType(CString("inputOutput"));
field148.setType(CString("MFInt32"));
Script147.addChild(&field148);

field& field149 =  field();
field149.setName(CString("majorLineEvery"));
field149.setAccessType(CString("inputOutput"));
field149.setType(CString("MFInt32"));
Script147.addChild(&field149);

field& field150 =  field();
field150.setName(CString("majorLineOffset"));
field150.setAccessType(CString("inputOutput"));
field150.setType(CString("MFInt32"));
Script147.addChild(&field150);

field& field151 =  field();
field151.setName(CString("plane"));
field151.setAccessType(CString("initializeOnly"));
field151.setType(CString("SFNode"));
Transform& Transform152 =  Transform();
Transform152.setUSE(CString("Plane_1"));
field151.addChild(&Transform152);

Script147.addChild(&field151);

field& field153 =  field();
field153.setName(CString("majorGrid"));
field153.setAccessType(CString("initializeOnly"));
field153.setType(CString("SFNode"));
IndexedLineSet& IndexedLineSet154 =  IndexedLineSet();
IndexedLineSet154.setUSE(CString("MajorGrid_3"));
field153.addChild(IndexedLineSet154);

Script147.addChild(&field153);

field& field155 =  field();
field155.setName(CString("minorGrid"));
field155.setAccessType(CString("initializeOnly"));
field155.setType(CString("SFNode"));
IndexedLineSet& IndexedLineSet156 =  IndexedLineSet();
IndexedLineSet156.setUSE(CString("MinorGrid_3"));
field155.addChild(IndexedLineSet156);

Script147.addChild(&field155);

field& field157 =  field();
field157.setName(CString("majorPoints"));
field157.setAccessType(CString("initializeOnly"));
field157.setType(CString("SFNode"));
PointSet& PointSet158 =  PointSet();
PointSet158.setUSE(CString("MajorPoints_3"));
field157.addChild(PointSet158);

Script147.addChild(&field157);

field& field159 =  field();
field159.setName(CString("minorPoints"));
field159.setAccessType(CString("initializeOnly"));
field159.setType(CString("SFNode"));
PointSet& PointSet160 =  PointSet();
PointSet160.setUSE(CString("MinorPoints_3"));
field159.addChild(PointSet160);

Script147.addChild(&field159);

IS& IS161 =  IS();
Connect& connect162 =  Connect();
connect162.setNodeField(CString("dimension"));
connect162.setProtoField(CString("dimension"));
IS161.addChild(&connect162);

Connect& connect163 =  Connect();
connect163.setNodeField(CString("majorLineEvery"));
connect163.setProtoField(CString("majorLineEvery"));
IS161.addChild(&connect163);

Connect& connect164 =  Connect();
connect164.setNodeField(CString("majorLineOffset"));
connect164.setProtoField(CString("majorLineOffset"));
IS161.addChild(&connect164);

Script147.addChild(&IS161);


//Script147.setSourceCode(CString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	eventsProcessed ();")+
//_T("}")+
//_T("function eventsProcessed ()")+
//_T("{")+
//_T("	// Plane")+
//_T("	plane .scale = new SFVec3f (dimension [0], dimension [2], 1);")+
//_T("	// Grid")+
//_T("	generateGrid (true, majorGrid);")+
//_T("	generateGrid (false, minorGrid);")+
//_T("	// Points")+
//_T("	generatePoints (true,  majorPoints .coord .point);")+
//_T("	generatePoints (false, minorPoints .coord .point);")+
//_T("}")+
//_T("function generateGrid (major, grid)")+
//_T("{")+
//_T("	var point       = grid .coord .point;")+
//_T("	var coordIndex  = new MFInt32 ();")+
//_T("	var scaleX1_2   = dimension [0] / 2;")+
//_T("	var scaleZ1_2   = dimension [2] / 2;")+
//_T("	var majorAdd    = major / 4;")+
//_T("	var p           = 0;")+
//_T("	for (var i = 0, size = dimension [0] + 1; i < size; ++ i)")+
//_T("	{")+
//_T("		if (major - isMajorLine (i, 0))")+
//_T("			continue;")+
//_T("		var x = -scaleX1_2 + i;")+
//_T("		point [p]     = new SFVec3f (x, 0, -scaleZ1_2 - majorAdd);")+
//_T("		point [p + 1] = new SFVec3f (x, 0,  scaleZ1_2 + majorAdd);")+
//_T("		coordIndex [coordIndex .length] = p;")+
//_T("		coordIndex [coordIndex .length] = p + 1;")+
//_T("		coordIndex [coordIndex .length] = -1;")+
//_T("			")+
//_T("		p += 2;")+
//_T("	}")+
//_T("	for (var i = 0, size = dimension [2] + 1; i < size; ++ i)")+
//_T("	{")+
//_T("		if (major - isMajorLine (i, 2))")+
//_T("			continue;")+
//_T("		var z = -scaleZ1_2 + i;")+
//_T("		point [p]     = new SFVec3f (-scaleX1_2 - majorAdd, 0, z);")+
//_T("		point [p + 1] = new SFVec3f ( scaleX1_2 + majorAdd, 0, z);")+
//_T("		coordIndex [coordIndex .length] = p;")+
//_T("		coordIndex [coordIndex .length] = p + 1;")+
//_T("		coordIndex [coordIndex .length] = -1;")+
//_T("		")+
//_T("		p += 2;")+
//_T("	}")+
//_T("	point .length = p;")+
//_T("	grid .set_coordIndex = coordIndex;")+
//_T("}")+
//_T("function generatePoints (major, point)")+
//_T("{")+
//_T("	var scaleY1_2 = -dimension [1] / 2;")+
//_T("	var p         = 0;")+
//_T("	for (var i = 0, size = dimension [1] + 1; i < size; ++ i)")+
//_T("	{")+
//_T("		if (major - isMajorLine (i, 1))")+
//_T("			continue;")+
//_T("		point [p] = new SFVec3f (0, scaleY1_2 + i, 0);")+
//_T("		++ p;")+
//_T("	}")+
//_T("	point .length = p;")+
//_T("}")+
//_T("function isMajorLine (i, index)")+
//_T("{")+
//_T("	for (var d = index; d < majorLineEvery .length; d += 3)")+
//_T("	{")+
//_T("		if (isMajor (i, dimension [index], majorLineEvery [d], majorLineOffset [d]))")+
//_T("			return true;")+
//_T("	}")+
//_T("	return false;")+
//_T("}")+
//_T("function isMajor (i, dimension, majorLineEvery, majorLineOffset)")+
//_T("{")+
//_T("	if (majorLineEvery)")+
//_T("	{")+
//_T("		var index = Math .floor (i - dimension / 2 - majorLineOffset);")+
//_T("		return !(index % majorLineEvery);")+
//_T("	}")+
//_T("	return false;")+
//_T("}"));
ProtoBody103.addChild(&Script147);

ProtoDeclare88.addChild(&ProtoBody103);

ProtoBody87.addChild(&ProtoDeclare88);

ProtoDeclare86.addChild(&ProtoBody87);

Scene8.addChild(&ProtoDeclare86);

WorldInfo& WorldInfo165 =  WorldInfo();
WorldInfo165.setTitle(CString("marble"));
MetadataSet& MetadataSet166 =  MetadataSet();
MetadataSet166.X3DNode::setName(CString("Titania"));
MetadataSet& MetadataSet167 =  MetadataSet();
MetadataSet167.X3DNode::setName(CString("AngleGrid"));
MetadataSet167.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean168 =  MetadataBoolean();
MetadataBoolean168.X3DNode::setName(CString("enabled"));
MetadataBoolean168.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean168.setValue(new boolean[]{false});
MetadataSet167.setValue((X3DNode *)&MetadataBoolean168);

MetadataSet166.setValue((X3DNode *)&MetadataSet167);

MetadataSet& MetadataSet169 =  MetadataSet();
MetadataSet169.X3DNode::setName(CString("Grid"));
MetadataSet169.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean170 =  MetadataBoolean();
MetadataBoolean170.X3DNode::setName(CString("enabled"));
MetadataBoolean170.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean170.setValue(new boolean[]{true});
MetadataSet169.setValue((X3DNode *)&MetadataBoolean170);

MetadataInteger& MetadataInteger171 =  MetadataInteger();
MetadataInteger171.X3DNode::setName(CString("majorLineOffset"));
MetadataInteger171.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger171.setValue(MFInt320);
MetadataSet169.setValue((X3DNode *)&MetadataInteger171);

MetadataInteger& MetadataInteger172 =  MetadataInteger();
MetadataInteger172.X3DNode::setName(CString("majorLineEvery"));
MetadataInteger172.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger172.setValue(MFInt321);
MetadataSet169.setValue((X3DNode *)&MetadataInteger172);

MetadataSet166.setValue((X3DNode *)&MetadataSet169);

MetadataSet& MetadataSet173 =  MetadataSet();
MetadataSet173.X3DNode::setName(CString("NavigationInfo"));
MetadataSet173.setDEF(CString("NavigationInfo"));
MetadataSet173.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString& MetadataString174 =  MetadataString();
MetadataString174.X3DNode::setName(CString("type"));
MetadataString174.setDEF(CString("type"));
MetadataString174.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString174.setValue(new CString[]{CString("EXAMINE")}, 1);
MetadataSet173.setValue((X3DNode *)&MetadataString174);

MetadataSet166.setValue((X3DNode *)&MetadataSet173);

MetadataSet& MetadataSet175 =  MetadataSet();
MetadataSet175.X3DNode::setName(CString("Viewpoint"));
MetadataSet175.setDEF(CString("Viewpoint"));
MetadataSet175.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble& MetadataDouble176 =  MetadataDouble();
MetadataDouble176.X3DNode::setName(CString("position"));
MetadataDouble176.setDEF(CString("position"));
MetadataDouble176.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble176.setValue(new double[]{-3.07363247871399,8.03197002410889,15.9220294952393}, 3);
MetadataSet175.setValue((X3DNode *)&MetadataDouble176);

MetadataDouble& MetadataDouble177 =  MetadataDouble();
MetadataDouble177.X3DNode::setName(CString("orientation"));
MetadataDouble177.setDEF(CString("orientation"));
MetadataDouble177.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble177.setValue(new double[]{-0.921656397930821,-0.377252083461801,-0.0907212746653947,0.497329384088516}, 4);
MetadataSet175.setValue((X3DNode *)&MetadataDouble177);

MetadataDouble& MetadataDouble178 =  MetadataDouble();
MetadataDouble178.X3DNode::setName(CString("centerOfRotation"));
MetadataDouble178.setDEF(CString("centerOfRotation"));
MetadataDouble178.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble178.setValue(new double[]{0.0,0.0,0.0}, 3);
MetadataSet175.setValue((X3DNode *)&MetadataDouble178);

MetadataSet166.setValue((X3DNode *)&MetadataSet175);

MetadataSet& MetadataSet179 =  MetadataSet();
MetadataSet179.X3DNode::setName(CString("Selection"));
MetadataSet179.setDEF(CString("Selection"));
MetadataSet179.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean& MetadataBoolean180 =  MetadataBoolean();
MetadataBoolean180.X3DNode::setName(CString("selectGeometry"));
MetadataBoolean180.setDEF(CString("selectGeometry"));
MetadataBoolean180.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataBoolean180.setValue(new boolean[]{false});
MetadataSet179.setValue((X3DNode *)&MetadataBoolean180);

MetadataSet166.setValue((X3DNode *)&MetadataSet179);

WorldInfo165.setMetadata(&MetadataSet166);

Scene8.addChild(&WorldInfo165);

Switch& Switch181 =  Switch();
Switch181.setDEF(CString("Resources"));
Switch181.setWhichChoice(-1);
Shape& Shape182 =  Shape();
Shape182.setDEF(CString("GrayBox"));
Appearance& Appearance183 =  Appearance();
Material& Material184 =  Material();
Material184.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material184.setSpecularColor(new float[]{0.415,0.415,0.415});
Material184.setShininess(0.102564);
Appearance183.addChild(&Material184);

Shape182.addChild(&Appearance183);

IndexedFaceSet& IndexedFaceSet185 =  IndexedFaceSet();
IndexedFaceSet185.setCreaseAngle(3.14159);
IndexedFaceSet185.setColorIndex(new int[]{1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1}, 477);
IndexedFaceSet185.setCoordIndex(new int32_t[]{74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1}, 477);
CColor& Color186 =  CColor();
Color186.setColor(new float[]{0.2,0.2,0.2,0.5,0.5,0.5}, 6);
IndexedFaceSet185.setColor(&Color186);

Coordinate& Coordinate187 =  Coordinate();
Coordinate187.setDEF(CString("coords_ME_Cube"));
Coordinate187.setPoint(new float[]{-0.699999,-1.0,0.699996,-0.700001,-0.700004,0.999997,-1.0,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1.0,-0.699994,-1.0,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1.0,-0.699997,0.700003,0.699999,-0.699998,1.0,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1.0,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1.0,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1.0,-0.699996,1.0,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1.0,0.700004,0.699994,0.700001,1.0,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994}, 288);
IndexedFaceSet185.setCoord(&Coordinate187);

Shape182.setGeometry(&IndexedFaceSet185);

Switch181.addChild(&Shape182);

Shape& Shape188 =  Shape();
Shape188.setDEF(CString("YellowBox"));
Appearance& Appearance189 =  Appearance();
Material& Material190 =  Material();
Material190.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material190.setSpecularColor(new float[]{0.415,0.415,0.415});
Material190.setShininess(0.102564);
Appearance189.addChild(&Material190);

Shape188.addChild(&Appearance189);

IndexedFaceSet& IndexedFaceSet191 =  IndexedFaceSet();
IndexedFaceSet191.setCreaseAngle(3.14159);
IndexedFaceSet191.setColorIndex(new int[]{1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1}, 477);
IndexedFaceSet191.setCoordIndex(new int32_t[]{74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1}, 477);
CColor& Color192 =  CColor();
Color192.setColor(new float[]{0.0,0.0,0.0,1.0,0.917647,0.0}, 6);
IndexedFaceSet191.setColor(&Color192);

Coordinate& Coordinate193 =  Coordinate();
Coordinate193.setDEF(CString("coords_ME_Cube_1"));
Coordinate193.setPoint(new float[]{-0.699999,-1.0,0.699996,-0.700001,-0.700004,0.999997,-1.0,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1.0,-0.699994,-1.0,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1.0,-0.699997,0.700003,0.699999,-0.699998,1.0,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1.0,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1.0,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1.0,-0.699996,1.0,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1.0,0.700004,0.699994,0.700001,1.0,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994}, 288);
IndexedFaceSet191.setCoord(&Coordinate193);

Shape188.setGeometry(&IndexedFaceSet191);

Switch181.addChild(&Shape188);

Shape& Shape194 =  Shape();
Shape194.setDEF(CString("OrangeBox"));
Appearance& Appearance195 =  Appearance();
Material& Material196 =  Material();
Material196.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material196.setSpecularColor(new float[]{0.415,0.415,0.415});
Material196.setShininess(0.102564);
Appearance195.addChild(&Material196);

Shape194.addChild(&Appearance195);

IndexedFaceSet& IndexedFaceSet197 =  IndexedFaceSet();
IndexedFaceSet197.setCreaseAngle(3.14159);
IndexedFaceSet197.setColorIndex(new int[]{1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1}, 477);
IndexedFaceSet197.setCoordIndex(new int32_t[]{74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1}, 477);
CColor& Color198 =  CColor();
Color198.setColor(new float[]{0.0,0.0,0.0,1.0,0.333333,0.0}, 6);
IndexedFaceSet197.setColor(&Color198);

Coordinate& Coordinate199 =  Coordinate();
Coordinate199.setDEF(CString("coords_ME_Cube_2"));
Coordinate199.setPoint(new float[]{-0.699999,-1.0,0.699996,-0.700001,-0.700004,0.999997,-1.0,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1.0,-0.699994,-1.0,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1.0,-0.699997,0.700003,0.699999,-0.699998,1.0,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1.0,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1.0,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1.0,-0.699996,1.0,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1.0,0.700004,0.699994,0.700001,1.0,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994}, 288);
IndexedFaceSet197.setCoord(&Coordinate199);

Shape194.setGeometry(&IndexedFaceSet197);

Switch181.addChild(&Shape194);

Shape& Shape200 =  Shape();
Shape200.setDEF(CString("RedBox"));
Appearance& Appearance201 =  Appearance();
Material& Material202 =  Material();
Material202.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material202.setSpecularColor(new float[]{0.415,0.415,0.415});
Material202.setShininess(0.102564);
Appearance201.addChild(&Material202);

Shape200.addChild(&Appearance201);

IndexedFaceSet& IndexedFaceSet203 =  IndexedFaceSet();
IndexedFaceSet203.setCreaseAngle(3.14159);
IndexedFaceSet203.setColorIndex(new int[]{1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1}, 477);
IndexedFaceSet203.setCoordIndex(new int32_t[]{74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1}, 477);
CColor& Color204 =  CColor();
Color204.setColor(new float[]{0.0,0.0,0.0,1.0,0.0,0.0}, 6);
IndexedFaceSet203.setColor(&Color204);

Coordinate& Coordinate205 =  Coordinate();
Coordinate205.setDEF(CString("coords_ME_Cube_3"));
Coordinate205.setPoint(new float[]{-0.699999,-1.0,0.699996,-0.700001,-0.700004,0.999997,-1.0,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1.0,-0.699994,-1.0,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1.0,-0.699997,0.700003,0.699999,-0.699998,1.0,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1.0,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1.0,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1.0,-0.699996,1.0,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1.0,0.700004,0.699994,0.700001,1.0,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994}, 288);
IndexedFaceSet203.setCoord(&Coordinate205);

Shape200.setGeometry(&IndexedFaceSet203);

Switch181.addChild(&Shape200);

Shape& Shape206 =  Shape();
Shape206.setDEF(CString("LilaBox"));
Appearance& Appearance207 =  Appearance();
Material& Material208 =  Material();
Material208.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material208.setSpecularColor(new float[]{0.415,0.415,0.415});
Material208.setShininess(0.102564);
Appearance207.addChild(&Material208);

Shape206.addChild(&Appearance207);

IndexedFaceSet& IndexedFaceSet209 =  IndexedFaceSet();
IndexedFaceSet209.setCreaseAngle(3.14159);
IndexedFaceSet209.setColorIndex(new int[]{1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,1,1,1,1,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,1,1,1,1,-1}, 477);
IndexedFaceSet209.setCoordIndex(new int32_t[]{74,84,36,25,-1,85,73,61,50,-1,62,72,24,13,-1,86,49,1,37,-1,0,3,5,4,-1,3,7,8,5,-1,1,6,8,7,-1,6,10,11,8,-1,2,9,11,10,-1,9,4,5,11,-1,5,8,11,-1,12,15,17,16,-1,15,19,20,17,-1,13,18,20,19,-1,18,22,23,20,-1,14,21,23,22,-1,21,16,17,23,-1,17,20,23,-1,24,27,29,28,-1,27,31,32,29,-1,25,30,32,31,-1,30,34,35,32,-1,26,33,35,34,-1,33,28,29,35,-1,29,32,35,-1,36,39,41,40,-1,39,43,44,41,-1,37,42,44,43,-1,42,46,47,44,-1,38,45,47,46,-1,45,40,41,47,-1,41,44,47,-1,48,51,53,52,-1,51,55,56,53,-1,49,54,56,55,-1,54,58,59,56,-1,50,57,59,58,-1,57,52,53,59,-1,53,56,59,-1,60,63,65,64,-1,63,67,68,65,-1,61,66,68,67,-1,66,70,71,68,-1,62,69,71,70,-1,69,64,65,71,-1,65,68,71,-1,72,75,77,76,-1,75,79,80,77,-1,73,78,80,79,-1,78,82,83,80,-1,74,81,83,82,-1,81,76,77,83,-1,77,80,83,-1,84,87,89,88,-1,87,91,92,89,-1,85,90,92,91,-1,90,94,95,92,-1,86,93,95,94,-1,93,88,89,95,-1,89,92,95,-1,1,49,55,6,-1,6,55,51,10,-1,10,51,48,2,-1,50,61,67,57,-1,57,67,63,52,-1,52,63,60,48,-1,62,13,19,69,-1,69,19,15,64,-1,64,15,12,60,-1,14,0,4,21,-1,21,4,9,16,-1,16,9,2,12,-1,61,73,79,66,-1,66,79,75,70,-1,70,75,72,62,-1,74,25,31,81,-1,81,31,27,76,-1,76,27,24,72,-1,26,14,22,33,-1,33,22,18,28,-1,28,18,13,24,-1,73,85,91,78,-1,78,91,87,82,-1,82,87,84,74,-1,86,37,43,93,-1,93,43,39,88,-1,88,39,36,84,-1,38,26,34,45,-1,45,34,30,40,-1,40,30,25,36,-1,85,50,58,90,-1,90,58,54,94,-1,94,54,49,86,-1,0,38,46,3,-1,3,46,42,7,-1,7,42,37,1,-1,48,60,12,2,-1}, 477);
CColor& Color210 =  CColor();
Color210.setColor(new float[]{0.0,0.0,0.0,0.67451,0.0,1.0}, 6);
IndexedFaceSet209.setColor(&Color210);

Coordinate& Coordinate211 =  Coordinate();
Coordinate211.setDEF(CString("coords_ME_Cube_4"));
Coordinate211.setPoint(new float[]{-0.699999,-1.0,0.699996,-0.700001,-0.700004,0.999997,-1.0,-0.700004,0.699996,-0.7,-0.959924,0.849799,-0.849802,-0.959925,0.699996,-0.843464,-0.920994,0.843459,-0.849804,-0.700004,0.959917,-0.7,-0.849806,0.959917,-0.843463,-0.843468,0.920986,-0.95992,-0.849807,0.699996,-0.959922,-0.700004,0.849799,-0.92099,-0.843467,0.84346,-0.999995,-0.700003,-0.700004,-0.699994,-0.700001,-1.0,-0.699994,-1.0,-0.700004,-0.959915,-0.700002,-0.849807,-0.959915,-0.849806,-0.700004,-0.920984,-0.843466,-0.843467,-0.699993,-0.849804,-0.959924,-0.849797,-0.700002,-0.959925,-0.843458,-0.843465,-0.920994,-0.849797,-0.959923,-0.700004,-0.699993,-0.959923,-0.849806,-0.843457,-0.920992,-0.843468,0.700006,-0.699996,-0.999998,1.00001,-0.699996,-0.699997,0.700006,-0.999997,-0.699998,0.849809,-0.699996,-0.959919,0.700007,-0.849799,-0.959919,0.843469,-0.84346,-0.920988,0.959927,-0.849799,-0.699997,0.959927,-0.699996,-0.8498,0.920996,-0.843459,-0.843462,0.700007,-0.959918,-0.849801,0.849809,-0.959917,-0.699998,0.84347,-0.920986,-0.843461,1.0,-0.699997,0.700003,0.699999,-0.699998,1.0,0.700001,-0.999998,0.700001,0.95992,-0.699997,0.849806,0.959922,-0.8498,0.700002,0.92099,-0.843462,0.843465,0.7,-0.849801,0.959923,0.849802,-0.699998,0.959923,0.843464,-0.843461,0.920992,0.849804,-0.959919,0.700002,0.7,-0.959919,0.849804,0.843463,-0.920988,0.843466,-1.00001,0.699996,0.699997,-0.700006,0.699996,0.999998,-0.700006,0.999997,0.699998,-0.959927,0.699996,0.8498,-0.959927,0.849799,0.699997,-0.920996,0.84346,0.843461,-0.700007,0.849799,0.959919,-0.849809,0.699996,0.959919,-0.84347,0.843459,0.920988,-0.849809,0.959917,0.699998,-0.700007,0.959918,0.849801,-0.843469,0.920986,0.843462,-1.0,0.699997,-0.700003,-0.700001,0.999998,-0.700001,-0.699999,0.699998,-1.0,-0.959922,0.8498,-0.700002,-0.95992,0.699997,-0.849806,-0.92099,0.843461,-0.843466,-0.7,0.959919,-0.849804,-0.849804,0.959919,-0.700002,-0.843464,0.920988,-0.843465,-0.849802,0.699998,-0.959923,-0.7,0.849801,-0.959923,-0.843463,0.843462,-0.920992,0.700001,0.700004,-0.999997,0.699999,1.0,-0.699996,1.0,0.700004,-0.699996,0.7,0.849806,-0.959917,0.849804,0.700004,-0.959917,0.843464,0.843467,-0.920986,0.849802,0.959925,-0.699996,0.7,0.959924,-0.849799,0.843463,0.920994,-0.84346,0.959922,0.700004,-0.849799,0.95992,0.849807,-0.699996,0.92099,0.843468,-0.843459,0.999995,0.700003,0.700004,0.699994,1.0,0.700004,0.699994,0.700001,1.0,0.959915,0.849806,0.700004,0.959915,0.700002,0.849807,0.920984,0.843465,0.843468,0.699993,0.959923,0.849806,0.849797,0.959923,0.700004,0.843458,0.920992,0.843467,0.849797,0.700002,0.959925,0.699993,0.849804,0.959924,0.843457,0.843466,0.920994}, 288);
IndexedFaceSet209.setCoord(&Coordinate211);

Shape206.setGeometry(&IndexedFaceSet209);

Switch181.addChild(&Shape206);

Scene8.addChild(&Switch181);

Script& Script212 =  Script();
Script212.setDEF(CString("EnterWorldScript"));

//Script212.setSourceCode(CString("ecmascript:")+
//_T("function initialize ()")+
//_T("{")+
//_T("	Browser .setBrowserOption (\"Shading\", \"PHONG\");")+
//_T("}"));
Scene8.addChild(&Script212);

NavigationInfo& NavigationInfo213 =  NavigationInfo();
Scene8.addChild(&NavigationInfo213);

Background& Background214 =  Background();
Background214.setDEF(CString("Gray"));
Background214.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene8.addChild(&Background214);

KeySensor& KeySensor215 =  KeySensor();
KeySensor215.setDEF(CString("A"));
KeySensor215.setEnabled(false);
Scene8.addChild(&KeySensor215);

Transform& Transform216 =  Transform();
Transform216.setDEF(CString("Marble"));
Transform216.setTranslation(new float[]{0.0,1.0,0.0});
Transform& Transform217 =  Transform();
Transform217.setDEF(CString("SphereTranslation"));
Viewpoint& Viewpoint218 =  Viewpoint();
Viewpoint218.setDescription(CString("Home"));
Viewpoint218.setPosition(new float[]{-3.38726,12.9707,12.1553});
Viewpoint218.setOrientation(new float[]{-0.94727163287453,-0.299522883916634,-0.113852955875043,0.840082});
Transform217.addChild(&Viewpoint218);

Transform& Transform219 =  Transform();
Transform219.setDEF(CString("SphereRotation"));
Shape& Shape220 =  Shape();
Appearance& Appearance221 =  Appearance();
Material& Material222 =  Material();
Material222.setDEF(CString("Metal31"));
Material222.setAmbientIntensity(0.0955322);
Material222.setDiffuseColor(new float[]{0.99772,0.995715,1.0});
Material222.setSpecularColor(new float[]{1.0,0.701006,1.0});
Material222.setShininess(0.127551);
Appearance221.addChild(&Material222);

ImageTexture& ImageTexture223 =  ImageTexture();
ImageTexture223.setUrl(new CString[]{CString(", "), CString("checkerboard.pngcheckerboard.svg")}, 2);
Appearance221.addChild(&ImageTexture223);

Shape220.addChild(&Appearance221);

Sphere& Sphere224 =  Sphere();
Sphere224.setSolid(false);
Shape220.setGeometry(&Sphere224);

Transform219.addChild(&Shape220);

Transform217.addChild(&Transform219);

Transform216.addChild(&Transform217);

Script& Script225 =  Script();
Script225.setDEF(CString("MarbleScript"));
Script225.setDirectOutput(true);
field& field226 =  field();
field226.setName(CString("set_actionKeyPress"));
field226.setAccessType(CString("inputOnly"));
field226.setType(CString("SFInt32"));
Script225.addChild(&field226);

field& field227 =  field();
field227.setName(CString("fieldSize"));
field227.setAccessType(CString("inputOutput"));
field227.setType(CString("SFVec3f"));
field227.setValue(CString("2 0 2"));
Script225.addChild(&field227);

field& field228 =  field();
field228.setName(CString("marbleRadius"));
field228.setAccessType(CString("inputOutput"));
field228.setType(CString("SFFloat"));
field228.setValue(CString("1"));
Script225.addChild(&field228);

field& field229 =  field();
field229.setName(CString("position_changed"));
field229.setAccessType(CString("outputOnly"));
field229.setType(CString("MFInt32"));
Script225.addChild(&field229);

field& field230 =  field();
field230.setName(CString("timer"));
field230.setAccessType(CString("initializeOnly"));
field230.setType(CString("SFNode"));
TimeSensor& TimeSensor231 =  TimeSensor();
TimeSensor231.setDEF(CString("_1"));
TimeSensor231.setCycleInterval(0.61803398875);
TimeSensor231.setStartTime(1446646222.59139);
field230.addChild(&TimeSensor231);

Script225.addChild(&field230);

field& field232 =  field();
field232.setName(CString("orientationInterpolator"));
field232.setAccessType(CString("initializeOnly"));
field232.setType(CString("SFNode"));
OrientationInterpolator& OrientationInterpolator233 =  OrientationInterpolator();
OrientationInterpolator233.setDEF(CString("_2"));
OrientationInterpolator233.setKey(new float[]{0.0,0.25,0.5,0.75,1.0}, 5);
OrientationInterpolator233.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0}, 20);
field232.addChild(&OrientationInterpolator233);

Script225.addChild(&field232);

field& field234 =  field();
field234.setName(CString("positionInterpolator"));
field234.setAccessType(CString("initializeOnly"));
field234.setType(CString("SFNode"));
PositionInterpolator& PositionInterpolator235 =  PositionInterpolator();
PositionInterpolator235.setDEF(CString("_3"));
PositionInterpolator235.setKey(new float[]{0.0,1.0}, 2);
PositionInterpolator235.setKeyValue(new float[]{0.0,0.0,0.0,0.0,0.0,0.0}, 6);
field234.addChild(&PositionInterpolator235);

Script225.addChild(&field234);

field& field236 =  field();
field236.setName(CString("rectangle"));
field236.setAccessType(CString("initializeOnly"));
field236.setType(CString("SFNode"));
Transform& Transform237 =  Transform();
Transform237.setDEF(CString("MarblePositionRectangle"));
Transform237.setRotation(new float[]{0.999999999993436,0.00000362335999997621,-7.56699999995033e-10,4.71239});
Transform237.setScaleOrientation(new float[]{0.999999999994294,0.00000297420999998303,0.00000160218999999086,0.785189});
Shape& Shape238 =  Shape();
Appearance& Appearance239 =  Appearance();
Material& Material240 =  Material();
Material240.setDEF(CString("Neon22"));
Material240.setAmbientIntensity(0);
Material240.setDiffuseColor(new float[]{0.0,0.0,0.0});
Material240.setSpecularColor(new float[]{0.622449,0.622449,0.622449});
Material240.setEmissiveColor(new float[]{0.934028,0.00304288,1.0});
Material240.setShininess(0.0510204);
Appearance239.addChild(&Material240);

Shape238.addChild(&Appearance239);

Rectangle2D& Rectangle2D241 =  Rectangle2D();
Shape238.setGeometry(Rectangle2D241);

Transform237.addChild(&Shape238);

field236.addChild(&Transform237);

Script225.addChild(&field236);

field& field242 =  field();
field242.setName(CString("grid"));
field242.setAccessType(CString("initializeOnly"));
field242.setType(CString("SFNode"));
ProtoInstance& ProtoInstance243 =  ProtoInstance();
ProtoInstance243.setName(CString("Grid"));
ProtoInstance243.setDEF(CString("_4"));
fieldValue& fieldValue244 =  fieldValue();
fieldValue244.setName(CString("dimension"));
fieldValue244.setValue(CString("22 0 22"));
ProtoInstance243.addChild(&fieldValue244);

fieldValue& fieldValue245 =  fieldValue();
fieldValue245.setName(CString("majorLineEvery"));
fieldValue245.setValue(CString("2 5 2"));
ProtoInstance243.addChild(&fieldValue245);

fieldValue& fieldValue246 =  fieldValue();
fieldValue246.setName(CString("majorLineOffset"));
fieldValue246.setValue(CString("1 0 1"));
ProtoInstance243.addChild(&fieldValue246);

fieldValue& fieldValue247 =  fieldValue();
fieldValue247.setName(CString("transparency"));
fieldValue247.setValue(CString("1"));
ProtoInstance243.addChild(&fieldValue247);

fieldValue& fieldValue248 =  fieldValue();
fieldValue248.setName(CString("lineColor"));
fieldValue248.setValue(CString("0 0 0"));
ProtoInstance243.addChild(&fieldValue248);

fieldValue& fieldValue249 =  fieldValue();
fieldValue249.setName(CString("majorLineColor"));
fieldValue249.setValue(CString("0 0 0"));
ProtoInstance243.addChild(&fieldValue249);

field242.addChild(&ProtoInstance243);

Script225.addChild(&field242);

Group& Group250 =  Group();
KeySensor& KeySensor251 =  KeySensor();
KeySensor251.setDEF(CString("MarbleKeySensor"));
Group250.addChild(&KeySensor251);

Script225.setGroup(Group250);


//Script225.setSourceCode(CString("ecmascript:")+
//_T("var")+
//_T("	up    = new SFVec3f (-1, 0,  0),")+
//_T("	down  = new SFVec3f ( 1, 0,  0),")+
//_T("	left  = new SFVec3f ( 0, 0,  1),")+
//_T("	right = new SFVec3f ( 0, 0, -1);")+
//_T("function initialize ()")+
//_T("{")+
//_T("	positionInterpolator    .keyValue = new MFVec3f ();")+
//_T("	orientationInterpolator .keyValue = new MFRotation ();")+
//_T("	rectangle .translation            = new SFVec3f (); ")+
//_T("	positionInterpolator    .set_fraction = 1;")+
//_T("	orientationInterpolator .set_fraction = 1;")+
//_T("	")+
//_T("	position_changed = new MFInt32 (grid .dimension [0] / fieldSize [0] / 2,")+
//_T("	                                0,")+
//_T("	                                grid .dimension [2] / fieldSize [2] / 2);")+
//_T("}")+
//_T("function set_actionKeyPress (value, time)")+
//_T("{")+
//_T("	if (timer .isActive)")+
//_T("		return;")+
//_T("	")+
//_T("	switch (value)")+
//_T("	{")+
//_T("		case 17: // up")+
//_T("			roll (-1, up, 2, time);")+
//_T("			break;")+
//_T("		case 18: // down")+
//_T("			roll (1, down, 2, time);")+
//_T("			break;")+
//_T("		case 19: // left")+
//_T("			roll (-1, left, 0, time);")+
//_T("			break;")+
//_T("		case 20: // right")+
//_T("			roll (1, right, 0, time);")+
//_T("			break;")+
//_T("	}")+
//_T("}")+
//_T("function roll (direction, rotationAxis, axis, time)")+
//_T("{")+
//_T("	// PositionInterpolator")+
//_T("	var")+
//_T("		startTranslation = positionInterpolator .keyValue [1],")+
//_T("		translation      = new SFVec3f ();")+
//_T("		")+
//_T("	translation [axis] = 2 * grid .scale [axis] * direction;")+
//_T("	translation        = startTranslation .add (translation);")+
//_T("	if (Math .abs (translation [axis]) > grid .dimension [axis] / fieldSize [axis] * grid .scale [axis])")+
//_T("		return;")+
//_T("		")+
//_T("	position_changed [axis] += direction;")+
//_T("	positionInterpolator .keyValue = new MFVec3f (startTranslation, translation);")+
//_T("	")+
//_T("	// OrientationInterpolator")+
//_T("	var")+
//_T("		startRotation = orientationInterpolator .keyValue [4],")+
//_T("		angle         = 2 * grid .scale [axis] / marbleRadius,")+
//_T("	   rotation1     = new SFRotation (rotationAxis, angle * 0.25),")+
//_T("		rotation2     = new SFRotation (rotationAxis, angle * 0.5),")+
//_T("		rotation3     = new SFRotation (rotationAxis, angle * 0.75),")+
//_T("		rotation4     = new SFRotation (rotationAxis, angle);")+
//_T("	")+
//_T("	rotation1 = startRotation .multiply (rotation1);")+
//_T("	rotation2 = startRotation .multiply (rotation2);")+
//_T("	rotation3 = startRotation .multiply (rotation3);")+
//_T("	rotation4 = startRotation .multiply (rotation4);")+
//_T("	orientationInterpolator .keyValue = new MFRotation (startRotation, rotation1, rotation2, rotation3, rotation4);")+
//_T("	timer .startTime = time;")+
//_T("	")+
//_T("	// Rectangle")+
//_T("	")+
//_T("	rectangle .translation = positionInterpolator .keyValue [1];")+
//_T("}"));
Transform216.addChild(&Script225);

Scene8.addChild(&Transform216);

Transform& Transform252 =  Transform();
Transform252.setUSE(CString("MarblePositionRectangle"));
Scene8.addChild(&Transform252);

ProtoInstance& ProtoInstance253 =  ProtoInstance();
ProtoInstance253.setName(CString("Grid"));
ProtoInstance253.setUSE(CString("_4"));
Scene8.addChild(&ProtoInstance253);

Script& Script254 =  Script();
Script254.setDEF(CString("ItemsScript"));
field& field255 =  field();
field255.setName(CString("set_position"));
field255.setAccessType(CString("inputOnly"));
field255.setType(CString("MFInt32"));
Script254.addChild(&field255);

field& field256 =  field();
field256.setName(CString("fieldSize"));
field256.setAccessType(CString("inputOutput"));
field256.setType(CString("SFVec3f"));
field256.setValue(CString("2 0 2"));
Script254.addChild(&field256);

field& field257 =  field();
field257.setName(CString("item"));
field257.setAccessType(CString("initializeOnly"));
field257.setType(CString("SFNode"));
Transform& Transform258 =  Transform();
Transform258.setDEF(CString("Item"));
Transform& Transform259 =  Transform();
Transform259.setDEF(CString("_5"));
Transform259.setRotation(new float[]{0.0,1.0,0.0,1.92752507496879});
Transform& Transform260 =  Transform();
Transform260.setDEF(CString("Rectangle2D"));
Transform260.setTranslation(new float[]{0.0,1.0,0.0});
Transform260.setRotation(new float[]{-3.18379e-14,-9.22889e-14,1.0,2.35619});
Transform260.setScale(new float[]{0.707107,0.707107,1.0});
Transform260.setScaleOrientation(new float[]{0.00000990983999946696,0.00000306160999983532,0.999999999946211,0.392693});
Group& Group261 =  Group();
Group261.setDEF(CString("ItemRotationAnim"));
MetadataSet& MetadataSet262 =  MetadataSet();
MetadataSet262.X3DNode::setName(CString("Animation"));
MetadataSet262.setDEF(CString("Animation"));
MetadataSet262.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger263 =  MetadataInteger();
MetadataInteger263.X3DNode::setName(CString("duration"));
MetadataInteger263.setDEF(CString("duration"));
MetadataInteger263.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger263.setValue(MFInt322);
MetadataSet262.setValue((X3DNode *)&MetadataInteger263);

MetadataInteger& MetadataInteger264 =  MetadataInteger();
MetadataInteger264.X3DNode::setName(CString("framesPerSecond"));
MetadataInteger264.setDEF(CString("framesPerSecond"));
MetadataInteger264.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger264.setValue(MFInt323);
MetadataSet262.setValue((X3DNode *)&MetadataInteger264);

Group261.setMetadata(&MetadataSet262);

TimeSensor& TimeSensor265 =  TimeSensor();
TimeSensor265.setDEF(CString("_6"));
TimeSensor265.setCycleInterval(4.8);
TimeSensor265.setLoop(true);
Group261.addChild(&TimeSensor265);

OrientationInterpolator& OrientationInterpolator266 =  OrientationInterpolator();
OrientationInterpolator266.setDEF(CString("RotationInterpolator"));
OrientationInterpolator266.setKey(new float[]{0.0,0.0208333,0.0416667,0.0625,0.0833333,0.104167,0.125,0.145833,0.166667,0.1875,0.208333,0.229167,0.25,0.270833,0.291667,0.3125,0.333333,0.354167,0.375,0.395833,0.416667,0.4375,0.458333,0.479167,0.5,0.520833,0.541667,0.5625,0.583333,0.604167,0.625,0.645833,0.666667,0.6875,0.708333,0.729167,0.75,0.770833,0.791667,0.8125,0.833333,0.854167,0.875,0.895833,0.916667,0.9375,0.958333,0.979167,1.0}, 49);
OrientationInterpolator266.setKeyValue(new float[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,0.124026000000001,0.0,-1.0,0.0,0.250436,0.0,-1.0,0.0,0.378893,0.0,-1.0,0.0,0.509054,0.0,-1.0,0.0,0.640579,0.0,-1.0,0.0,0.773126,0.0,-1.0,0.0,0.906355,0.0,-1.0,0.0,1.03993,0.0,-1.0,0.0,1.1735,0.0,-1.0,0.0,1.30672,0.0,-1.0,0.0,1.43927,0.0,-1.0,0.0,1.5708,0.0,-1.0,0.0,1.70107,0.0,-1.0,0.0,1.83032,0.0,-1.0,0.0,1.95889,0.0,-1.0,0.0,2.08712,0.0,-1.0,0.0,2.21535,0.0,-1.0,0.0,2.34392,0.0,-1.0,0.0,2.47317,0.0,-1.0,0.0,2.60345,0.0,-1.0,0.0,2.73509,0.0,-1.0,0.0,2.86843,0.0,-1.0,0.0,3.00382,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,2.99996,0.0,1.0,0.0,2.85389,0.0,1.0,0.0,2.70441,0.0,1.0,0.0,2.55254,0.0,1.0,0.0,2.39932,0.0,1.0,0.0,2.24575,0.0,1.0,0.0,2.09286,0.0,1.0,0.0,1.94168,0.0,1.0,0.0,1.79322,0.0,1.0,0.0,1.64852,0.0,1.0,0.0,1.50859,0.0,1.0,0.0,1.37445,0.0,1.0,0.0,1.24679,0.0,1.0,0.0,1.12492,0.0,1.0,0.0,1.00783,0.0,1.0,0.0,0.894481,0.0,1.0,0.0,0.783864,0.0,1.0,0.0,0.674952,0.0,1.0,0.0,0.566721,0.0,1.0,0.0,0.458149,0.0,1.0,0.0,0.348214,0.0,1.0,0.0,0.235892,0.0,1.0,0.0,0.120161000000002,0.0,0.0,1.0,0.0}, 196);
MetadataSet& MetadataSet267 =  MetadataSet();
MetadataSet267.X3DNode::setName(CString("Interpolator"));
MetadataSet267.setDEF(CString("Interpolator"));
MetadataSet267.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger& MetadataInteger268 =  MetadataInteger();
MetadataInteger268.X3DNode::setName(CString("key"));
MetadataInteger268.setDEF(CString("key"));
MetadataInteger268.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataInteger268.setValue(MFInt324);
MetadataSet267.setValue((X3DNode *)&MetadataInteger268);

MetadataDouble& MetadataDouble269 =  MetadataDouble();
MetadataDouble269.X3DNode::setName(CString("keyValue"));
MetadataDouble269.setDEF(CString("keyValue"));
MetadataDouble269.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataDouble269.setValue(new double[]{0.0,0.0,1.0,0.0,0.0,-1.0,0.0,1.570796251297,0.0,1.0,0.0,3.14159274101257,0.0,1.0,0.0,1.37444686889648,0.0,0.0,1.0,0.0}, 20);
MetadataSet267.setValue((X3DNode *)&MetadataDouble269);

MetadataString& MetadataString270 =  MetadataString();
MetadataString270.X3DNode::setName(CString("keyType"));
MetadataString270.setDEF(CString("keyType"));
MetadataString270.X3DNode::setReference(CString("http://titania.create3000.de"));
MetadataString270.setValue(new CString[]{CString(", "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINE, "), CString("SPLINESPLINE")}, 5);
MetadataSet267.setValue((X3DNode *)&MetadataString270);

OrientationInterpolator266.setMetadata(&MetadataSet267);

Group261.addChild(&OrientationInterpolator266);

Transform260.addChild(&Group261);

Shape& Shape271 =  Shape();
Appearance& Appearance272 =  Appearance();
TwoSidedMaterial& TwoSidedMaterial273 =  TwoSidedMaterial();
TwoSidedMaterial273.setSeparateBackColor(true);
TwoSidedMaterial273.setAmbientIntensity(0);
TwoSidedMaterial273.setDiffuseColor(new float[]{0.0,0.0,0.0});
TwoSidedMaterial273.setSpecularColor(new float[]{0.622449,0.622449,0.622449});
TwoSidedMaterial273.setEmissiveColor(new float[]{0.460235,0.0,1.0});
TwoSidedMaterial273.setShininess(0.0510204);
TwoSidedMaterial273.setBackAmbientIntensity(0);
TwoSidedMaterial273.setBackDiffuseColor(new float[]{0.0,0.0,0.0});
TwoSidedMaterial273.setBackSpecularColor(new float[]{0.721,0.721,0.721});
TwoSidedMaterial273.setBackEmissiveColor(new float[]{1.0,0.0392157,0.0});
TwoSidedMaterial273.setBackShininess(0.0903955);
Appearance272.addChild(&TwoSidedMaterial273);

Shape271.addChild(&Appearance272);

Rectangle2D& Rectangle2D274 =  Rectangle2D();
Shape271.setGeometry(Rectangle2D274);

Transform260.addChild(&Shape271);

Transform259.addChild(&Transform260);

Transform258.addChild(&Transform259);

field257.addChild(&Transform258);

Script254.addChild(&field257);

field& field275 =  field();
field275.setName(CString("itemGroup"));
field275.setAccessType(CString("initializeOnly"));
field275.setType(CString("SFNode"));
Group& Group276 =  Group();
Group276.setDEF(CString("ItemGroup"));
Transform& Transform277 =  Transform();
Transform& Transform278 =  Transform();
Transform278.setUSE(CString("Item"));
Transform277.addChild(&Transform278);

Group276.addChild(&Transform277);

Transform& Transform279 =  Transform();
Transform& Transform280 =  Transform();
Transform280.setUSE(CString("Item"));
Transform279.addChild(&Transform280);

Group276.addChild(&Transform279);

Transform& Transform281 =  Transform();
Transform& Transform282 =  Transform();
Transform282.setUSE(CString("Item"));
Transform281.addChild(&Transform282);

Group276.addChild(&Transform281);

Transform& Transform283 =  Transform();
Transform& Transform284 =  Transform();
Transform284.setUSE(CString("Item"));
Transform283.addChild(&Transform284);

Group276.addChild(&Transform283);

Transform& Transform285 =  Transform();
Transform& Transform286 =  Transform();
Transform286.setUSE(CString("Item"));
Transform285.addChild(&Transform286);

Group276.addChild(&Transform285);

Transform& Transform287 =  Transform();
Transform& Transform288 =  Transform();
Transform288.setUSE(CString("Item"));
Transform287.addChild(&Transform288);

Group276.addChild(&Transform287);

Transform& Transform289 =  Transform();
Transform& Transform290 =  Transform();
Transform290.setUSE(CString("Item"));
Transform289.addChild(&Transform290);

Group276.addChild(&Transform289);

Transform& Transform291 =  Transform();
Transform& Transform292 =  Transform();
Transform292.setUSE(CString("Item"));
Transform291.addChild(&Transform292);

Group276.addChild(&Transform291);

Transform& Transform293 =  Transform();
Transform& Transform294 =  Transform();
Transform294.setUSE(CString("Item"));
Transform293.addChild(&Transform294);

Group276.addChild(&Transform293);

Transform& Transform295 =  Transform();
Transform& Transform296 =  Transform();
Transform296.setUSE(CString("Item"));
Transform295.addChild(&Transform296);

Group276.addChild(&Transform295);

Transform& Transform297 =  Transform();
Transform& Transform298 =  Transform();
Transform298.setUSE(CString("Item"));
Transform297.addChild(&Transform298);

Group276.addChild(&Transform297);

Transform& Transform299 =  Transform();
Transform& Transform300 =  Transform();
Transform300.setUSE(CString("Item"));
Transform299.addChild(&Transform300);

Group276.addChild(&Transform299);

Transform& Transform301 =  Transform();
Transform& Transform302 =  Transform();
Transform302.setUSE(CString("Item"));
Transform301.addChild(&Transform302);

Group276.addChild(&Transform301);

Transform& Transform303 =  Transform();
Transform& Transform304 =  Transform();
Transform304.setUSE(CString("Item"));
Transform303.addChild(&Transform304);

Group276.addChild(&Transform303);

Transform& Transform305 =  Transform();
Transform& Transform306 =  Transform();
Transform306.setUSE(CString("Item"));
Transform305.addChild(&Transform306);

Group276.addChild(&Transform305);

Transform& Transform307 =  Transform();
Transform& Transform308 =  Transform();
Transform308.setUSE(CString("Item"));
Transform307.addChild(&Transform308);

Group276.addChild(&Transform307);

Transform& Transform309 =  Transform();
Transform& Transform310 =  Transform();
Transform310.setUSE(CString("Item"));
Transform309.addChild(&Transform310);

Group276.addChild(&Transform309);

Transform& Transform311 =  Transform();
Transform& Transform312 =  Transform();
Transform312.setUSE(CString("Item"));
Transform311.addChild(&Transform312);

Group276.addChild(&Transform311);

Transform& Transform313 =  Transform();
Transform& Transform314 =  Transform();
Transform314.setUSE(CString("Item"));
Transform313.addChild(&Transform314);

Group276.addChild(&Transform313);

Transform& Transform315 =  Transform();
Transform& Transform316 =  Transform();
Transform316.setUSE(CString("Item"));
Transform315.addChild(&Transform316);

Group276.addChild(&Transform315);

Transform& Transform317 =  Transform();
Transform& Transform318 =  Transform();
Transform318.setUSE(CString("Item"));
Transform317.addChild(&Transform318);

Group276.addChild(&Transform317);

Transform& Transform319 =  Transform();
Transform& Transform320 =  Transform();
Transform320.setUSE(CString("Item"));
Transform319.addChild(&Transform320);

Group276.addChild(&Transform319);

Transform& Transform321 =  Transform();
Transform& Transform322 =  Transform();
Transform322.setUSE(CString("Item"));
Transform321.addChild(&Transform322);

Group276.addChild(&Transform321);

Transform& Transform323 =  Transform();
Transform& Transform324 =  Transform();
Transform324.setUSE(CString("Item"));
Transform323.addChild(&Transform324);

Group276.addChild(&Transform323);

Transform& Transform325 =  Transform();
Transform& Transform326 =  Transform();
Transform326.setUSE(CString("Item"));
Transform325.addChild(&Transform326);

Group276.addChild(&Transform325);

Transform& Transform327 =  Transform();
Transform& Transform328 =  Transform();
Transform328.setUSE(CString("Item"));
Transform327.addChild(&Transform328);

Group276.addChild(&Transform327);

Transform& Transform329 =  Transform();
Transform& Transform330 =  Transform();
Transform330.setUSE(CString("Item"));
Transform329.addChild(&Transform330);

Group276.addChild(&Transform329);

Transform& Transform331 =  Transform();
Transform& Transform332 =  Transform();
Transform332.setUSE(CString("Item"));
Transform331.addChild(&Transform332);

Group276.addChild(&Transform331);

Transform& Transform333 =  Transform();
Transform& Transform334 =  Transform();
Transform334.setUSE(CString("Item"));
Transform333.addChild(&Transform334);

Group276.addChild(&Transform333);

Transform& Transform335 =  Transform();
Transform& Transform336 =  Transform();
Transform336.setUSE(CString("Item"));
Transform335.addChild(&Transform336);

Group276.addChild(&Transform335);

field275.addChild(&Group276);

Script254.addChild(&field275);

field& field337 =  field();
field337.setName(CString("grid"));
field337.setAccessType(CString("initializeOnly"));
field337.setType(CString("SFNode"));
ProtoInstance& ProtoInstance338 =  ProtoInstance();
ProtoInstance338.setName(CString("Grid"));
ProtoInstance338.setUSE(CString("_4"));
field337.addChild(&ProtoInstance338);

Script254.addChild(&field337);


//Script254.setSourceCode(CString("ecmascript:")+
//_T("var fillRate = 0.25")+
//_T("function initialize ()")+
//_T("{")+
//_T("	set_startTime (0);")+
//_T("}")+
//_T("function set_position (value)")+
//_T("{")+
//_T("	print (value);")+
//_T("}")+
//_T("function set_startTime ()")+
//_T("{")+
//_T("	var itemCount = Math .floor (grid .dimension [0] / fieldSize [0] * grid .dimension [2] / fieldSize [2] * fillRate);")+
//_T("	")+
//_T("	itemGroup .children .length = 0;")+
//_T("	")+
//_T("	for (var i = 0; i < itemCount; ++i)")+
//_T("	{")+
//_T("		var transform = Browser .currentScene .createNode (\"Transform\");")+
//_T("		")+
//_T("		transform .children [0] = item;")+
//_T("		itemGroup .children [i] = transform;")+
//_T("	}")+
//_T("}"));
Scene8.addChild(&Script254);

Group& Group339 =  Group();
Group339.setUSE(CString("ItemGroup"));
Scene8.addChild(&Group339);

ROUTE& ROUTE340 =  ROUTE();
ROUTE340.setFromNode(CString("_1"));
ROUTE340.setFromField(CString("fraction_changed"));
ROUTE340.setToNode(CString("_3"));
ROUTE340.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE340);

ROUTE& ROUTE341 =  ROUTE();
ROUTE341.setFromNode(CString("_1"));
ROUTE341.setFromField(CString("fraction_changed"));
ROUTE341.setToNode(CString("_2"));
ROUTE341.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE341);

ROUTE& ROUTE342 =  ROUTE();
ROUTE342.setFromNode(CString("MarbleKeySensor"));
ROUTE342.setFromField(CString("actionKeyPress"));
ROUTE342.setToNode(CString("MarbleScript"));
ROUTE342.setToField(CString("set_actionKeyPress"));
Scene8.addChild(&ROUTE342);

ROUTE& ROUTE343 =  ROUTE();
ROUTE343.setFromNode(CString("_2"));
ROUTE343.setFromField(CString("value_changed"));
ROUTE343.setToNode(CString("SphereRotation"));
ROUTE343.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE343);

ROUTE& ROUTE344 =  ROUTE();
ROUTE344.setFromNode(CString("_3"));
ROUTE344.setFromField(CString("value_changed"));
ROUTE344.setToNode(CString("SphereTranslation"));
ROUTE344.setToField(CString("set_translation"));
Scene8.addChild(&ROUTE344);

ROUTE& ROUTE345 =  ROUTE();
ROUTE345.setFromNode(CString("MarbleScript"));
ROUTE345.setFromField(CString("position_changed"));
ROUTE345.setToNode(CString("ItemsScript"));
ROUTE345.setToField(CString("set_position"));
Scene8.addChild(&ROUTE345);

ROUTE& ROUTE346 =  ROUTE();
ROUTE346.setFromNode(CString("_6"));
ROUTE346.setFromField(CString("fraction_changed"));
ROUTE346.setToNode(CString("RotationInterpolator"));
ROUTE346.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE346);

ROUTE& ROUTE347 =  ROUTE();
ROUTE347.setFromNode(CString("RotationInterpolator"));
ROUTE347.setFromField(CString("value_changed"));
ROUTE347.setToNode(CString("_5"));
ROUTE347.setToField(CString("set_rotation"));
Scene8.addChild(&ROUTE347);

X3D0.setScene(&Scene8);

//}
