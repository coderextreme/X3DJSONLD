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
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("flowers2.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("23 January 2005"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("9 November 2024"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("description"));
meta7.setContent(CString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("generator"));
meta9.setContent(CString("manually written"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("license"));
meta10.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
NavigationInfo& NavigationInfo12 =  NavigationInfo();
Scene11.addChild(&NavigationInfo12);

Viewpoint& Viewpoint13 =  Viewpoint();
Viewpoint13.setDescription(CString("Two mathematical orbitals"));
Viewpoint13.setPosition(new float[]{0,0,50});
Scene11.addChild(&Viewpoint13);

Group& Group14 =  Group();
DirectionalLight& DirectionalLight15 =  DirectionalLight();
DirectionalLight15.setDirection(new float[]{1,1,1});
Group14.addChild(&DirectionalLight15);

ProtoDeclare& ProtoDeclare16 =  ProtoDeclare();
ProtoDeclare16.setName(CString("orbit"));
ProtoInterface& ProtoInterface17 =  ProtoInterface();
field& field18 =  field();
field18.setName(CString("translation"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("-8 0 0"));
ProtoInterface17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("diffuseColor"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFColor"));
field19.setValue(CString("1 0.5 0"));
ProtoInterface17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("specularColor"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFColor"));
field20.setValue(CString("1 0.5 0"));
ProtoInterface17.addChild(&field20);

field& field21 =  field();
field21.setName(CString("transparency"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFFloat"));
field21.setValue(CString("0.75"));
ProtoInterface17.addChild(&field21);

ProtoDeclare16.addChild(&ProtoInterface17);

ProtoBody& ProtoBody22 =  ProtoBody();
Group& Group23 =  Group();
TimeSensor& TimeSensor24 =  TimeSensor();
TimeSensor24.setDEF(CString("Clock"));
TimeSensor24.setCycleInterval(16);
TimeSensor24.setLoop(True);
Group23.addChild(&TimeSensor24);

OrientationInterpolator& OrientationInterpolator25 =  OrientationInterpolator();
OrientationInterpolator25.setDEF(CString("OrbitPath"));
OrientationInterpolator25.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator25.setKeyValue(new float[]{1,0,0,0,1,0,0,3.14,1,0,0,6.28}, 12);
Group23.addChild(&OrientationInterpolator25);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("OrbitTransform"));
IS& IS27 =  IS();
Connect& connect28 =  Connect();
connect28.setNodeField(CString("translation"));
connect28.setProtoField(CString("translation"));
IS27.addChild(&connect28);

Transform26.addChild(&IS27);

Shape& Shape29 =  Shape();
Appearance& Appearance30 =  Appearance();
Material& Material31 =  Material();
IS& IS32 =  IS();
Connect& connect33 =  Connect();
connect33.setNodeField(CString("diffuseColor"));
connect33.setProtoField(CString("diffuseColor"));
IS32.addChild(&connect33);

Connect& connect34 =  Connect();
connect34.setNodeField(CString("specularColor"));
connect34.setProtoField(CString("specularColor"));
IS32.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("transparency"));
connect35.setProtoField(CString("transparency"));
IS32.addChild(&connect35);

Material31.addChild(&IS32);

Appearance30.addChild(&Material31);

Shape29.addChild(&Appearance30);

//<IndexedFaceSet DEF=\"Orbit\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet& IndexedFaceSet36 =  IndexedFaceSet();
IndexedFaceSet36.setCcw(False);
IndexedFaceSet36.setConvex(False);
IndexedFaceSet36.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
IndexedFaceSet36.setDEF(CString("Orbit"));
Coordinate& Coordinate37 =  Coordinate();
Coordinate37.setDEF(CString("OrbitCoordinates"));
Coordinate37.setPoint(new float[]{0,0,1,0,1,0,1,0,0}, 9);
IndexedFaceSet36.setCoord(&Coordinate37);

Shape29.setGeometry(&IndexedFaceSet36);

Transform26.addChild(&Shape29);

Group23.addChild(&Transform26);

Script& Script38 =  Script();
Script38.setDEF(CString("OrbitScript"));
field& field39 =  field();
field39.setName(CString("set_fraction"));
field39.setAccessType(CString("inputOnly"));
field39.setType(CString("SFFloat"));
Script38.addChild(&field39);

field& field40 =  field();
field40.setName(CString("coordinates"));
field40.setAccessType(CString("inputOutput"));
field40.setType(CString("MFVec3f"));
Script38.addChild(&field40);

field& field41 =  field();
field41.setName(CString("coordIndexes"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("MFInt32"));
Script38.addChild(&field41);

field& field42 =  field();
field42.setName(CString("e"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("SFFloat"));
field42.setValue(CString("5"));
Script38.addChild(&field42);

field& field43 =  field();
field43.setName(CString("f"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFFloat"));
field43.setValue(CString("5"));
Script38.addChild(&field43);

field& field44 =  field();
field44.setName(CString("g"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFFloat"));
field44.setValue(CString("5"));
Script38.addChild(&field44);

field& field45 =  field();
field45.setName(CString("h"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFFloat"));
field45.setValue(CString("5"));
Script38.addChild(&field45);

field& field46 =  field();
field46.setName(CString("resolution"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFInt32"));
field46.setValue(CString("50"));
Script38.addChild(&field46);


Script38.setSourceCode(CString("ecmascript:")+
_T("			function initialize() {")+
_T("			     generateCoordinates();")+
_T("			     var arrIndex = 0;")+
_T("			     for (var i = 0; i < resolution-1; i++) {")+
_T("				for (var j = 0; j < resolution-1; j++) {")+
_T("				     coordIndexes[arrIndex++] = i*resolution+j;")+
_T("				     coordIndexes[arrIndex++] = i*resolution+j+1;")+
_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;")+
_T("				     coordIndexes[arrIndex++] = (i+1)*resolution+j;")+
_T("				     coordIndexes[arrIndex++] = -1;")+
_T("				}")+
_T("			    }")+
_T("			}")+
_T("			function generateCoordinates() {")+
_T("			     var theta = 0.0;")+
_T("			     var phi = 0.0;")+
_T("			     var delta = (2 * 3.141592653) / (resolution-1);")+
_T("			     var arrIndex = 0;")+
_T("			     for (var i = 0; i < resolution; i++) {")+
_T("				for (var j = 0; j < resolution; j++) {")+
_T("					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);")+
_T("					coordinates[arrIndex++] = new SFVec3f(")+
_T("						rho * Math.cos(phi) * Math.cos(theta),")+
_T("						rho * Math.cos(phi) * Math.sin(theta),")+
_T("						rho * Math.sin(phi)")+
_T("					);")+
_T("					theta += delta;")+
_T("				}")+
_T("				phi += delta;")+
_T("			     }")+
_T("			}")+
_T("			function set_fraction(fraction, eventTime) {")+
_T("				var choice = Math.floor(Math.random() * 4);")+
_T("				switch (choice) {")+
_T("				case 0:")+
_T("					e += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("					break;")+
_T("				case 1:")+
_T("					f += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("					break;")+
_T("				case 2:")+
_T("					g += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("					break;")+
_T("				case 3:")+
_T("					h += Math.floor(Math.random() * 2) * 2 - 1;")+
_T("					break;")+
_T("				}")+
_T("				if (e < 1) {")+
_T("					f = 10;")+
_T("				}")+
_T("				if (f < 1) {")+
_T("					f = 10;")+
_T("				}")+
_T("				if (g < 1) {")+
_T("					g = 4;")+
_T("				}")+
_T("				if (h < 1) {")+
_T("					h = 4;")+
_T("				}")+
_T("				generateCoordinates();")+
_T("			}"));
Group23.addChild(&Script38);

ROUTE& ROUTE47 =  ROUTE();
ROUTE47.setFromNode(CString("OrbitScript"));
ROUTE47.setFromField(CString("coordIndexes"));
ROUTE47.setToNode(CString("Orbit"));
ROUTE47.setToField(CString("set_coordIndex"));
Group23.addChild(&ROUTE47);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("OrbitScript"));
ROUTE48.setFromField(CString("coordinates"));
ROUTE48.setToNode(CString("OrbitCoordinates"));
ROUTE48.setToField(CString("point"));
Group23.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("Clock"));
ROUTE49.setFromField(CString("fraction_changed"));
ROUTE49.setToNode(CString("OrbitScript"));
ROUTE49.setToField(CString("set_fraction"));
Group23.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("OrbitPath"));
ROUTE50.setFromField(CString("value_changed"));
ROUTE50.setToNode(CString("OrbitTransform"));
ROUTE50.setToField(CString("rotation"));
Group23.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("Clock"));
ROUTE51.setFromField(CString("fraction_changed"));
ROUTE51.setToNode(CString("OrbitPath"));
ROUTE51.setToField(CString("set_fraction"));
Group23.addChild(&ROUTE51);

ProtoBody22.addChild(&Group23);

ProtoDeclare16.addChild(&ProtoBody22);

Group14.addChild(&ProtoDeclare16);

ProtoInstance& ProtoInstance52 =  ProtoInstance();
ProtoInstance52.setName(CString("orbit"));
fieldValue& fieldValue53 =  fieldValue();
fieldValue53.setName(CString("translation"));
fieldValue53.setValue(CString("-8 0 0"));
ProtoInstance52.addChild(&fieldValue53);

fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("diffuseColor"));
fieldValue54.setValue(CString("1 0.5 0"));
ProtoInstance52.addChild(&fieldValue54);

fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("specularColor"));
fieldValue55.setValue(CString("1 0.5 0"));
ProtoInstance52.addChild(&fieldValue55);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("transparency"));
fieldValue56.setValue(CString("0.75"));
ProtoInstance52.addChild(&fieldValue56);

Group14.addChild(&ProtoInstance52);

ProtoInstance& ProtoInstance57 =  ProtoInstance();
ProtoInstance57.setName(CString("orbit"));
fieldValue& fieldValue58 =  fieldValue();
fieldValue58.setName(CString("translation"));
fieldValue58.setValue(CString("8 0 0"));
ProtoInstance57.addChild(&fieldValue58);

fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("diffuseColor"));
fieldValue59.setValue(CString("0 0.5 1"));
ProtoInstance57.addChild(&fieldValue59);

fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(CString("specularColor"));
fieldValue60.setValue(CString("0 0.5 1"));
ProtoInstance57.addChild(&fieldValue60);

fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("transparency"));
fieldValue61.setValue(CString("0.5"));
ProtoInstance57.addChild(&fieldValue61);

Group14.addChild(&ProtoInstance57);

Scene11.addChild(&Group14);

X3D0.setScene(&Scene11);

}
