#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
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
meta5.setName(CString("transcriber"));
meta5.setContent(CString("John Carlson"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("23 January 2005"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("21 March 2018"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("description"));
meta8.setContent(CString("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("generator"));
meta10.setContent(CString("manually written"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("license"));
meta11.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
NavigationInfo& NavigationInfo13 =  NavigationInfo();
Scene12.addChild(&NavigationInfo13);

Viewpoint& Viewpoint14 =  Viewpoint();
Viewpoint14.setDescription(CString("Two mathematical orbitals"));
Viewpoint14.setPosition(new float[]{0,0,50});
Scene12.addChild(&Viewpoint14);

Group& Group15 =  Group();
DirectionalLight& DirectionalLight16 =  DirectionalLight();
DirectionalLight16.setDirection(new float[]{1,1,1});
Group15.addChild(&DirectionalLight16);

ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("orbit"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("translation"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
field19.setValue(CString("-8 0 0"));
ProtoInterface18.addChild(&field19);

field& field20 =  field();
field20.setName(CString("diffuseColor"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFColor"));
field20.setValue(CString("1 0.5 0"));
ProtoInterface18.addChild(&field20);

field& field21 =  field();
field21.setName(CString("specularColor"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFColor"));
field21.setValue(CString("1 0.5 0"));
ProtoInterface18.addChild(&field21);

field& field22 =  field();
field22.setName(CString("transparency"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFFloat"));
field22.setValue(CString("0.75"));
ProtoInterface18.addChild(&field22);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody23 =  ProtoBody();
Group& Group24 =  Group();
TimeSensor& TimeSensor25 =  TimeSensor();
TimeSensor25.setDEF(CString("Clock"));
TimeSensor25.setCycleInterval(16);
TimeSensor25.setLoop(True);
Group24.addChild(&TimeSensor25);

OrientationInterpolator& OrientationInterpolator26 =  OrientationInterpolator();
OrientationInterpolator26.setDEF(CString("OrbitPath"));
OrientationInterpolator26.setKey(new float[]{0,0.5,1}, 3);
OrientationInterpolator26.setKeyValue(new float[]{1,0,0,0,1,0,0,3.14,1,0,0,6.28}, 12);
Group24.addChild(&OrientationInterpolator26);

Transform& Transform27 =  Transform();
Transform27.setDEF(CString("OrbitTransform"));
IS& IS28 =  IS();
Connect& connect29 =  Connect();
connect29.setNodeField(CString("translation"));
connect29.setProtoField(CString("translation"));
IS28.addChild(&connect29);

Transform27.addChild(&IS28);

Shape& Shape30 =  Shape();
Appearance& Appearance31 =  Appearance();
Material& Material32 =  Material();
IS& IS33 =  IS();
Connect& connect34 =  Connect();
connect34.setNodeField(CString("diffuseColor"));
connect34.setProtoField(CString("diffuseColor"));
IS33.addChild(&connect34);

Connect& connect35 =  Connect();
connect35.setNodeField(CString("specularColor"));
connect35.setProtoField(CString("specularColor"));
IS33.addChild(&connect35);

Connect& connect36 =  Connect();
connect36.setNodeField(CString("transparency"));
connect36.setProtoField(CString("transparency"));
IS33.addChild(&connect36);

Material32.addChild(&IS33);

Appearance31.addChild(&Material32);

Shape30.addChild(&Appearance31);

//<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>
IndexedFaceSet& IndexedFaceSet37 =  IndexedFaceSet();
IndexedFaceSet37.setCcw(False);
IndexedFaceSet37.setConvex(False);
IndexedFaceSet37.setCoordIndex(new int32_t[]{0,1,2,-1}, 4);
IndexedFaceSet37.setDEF(CString("Orbit"));
Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setDEF(CString("OrbitCoordinates"));
Coordinate38.setPoint(new float[]{0,0,1,0,1,0,1,0,0}, 9);
IndexedFaceSet37.setCoord(&Coordinate38);

Shape30.setGeometry(&IndexedFaceSet37);

Transform27.addChild(&Shape30);

Group24.addChild(&Transform27);

Script& Script39 =  Script();
Script39.setDEF(CString("OrbitScript"));
field& field40 =  field();
field40.setName(CString("set_fraction"));
field40.setAccessType(CString("inputOnly"));
field40.setType(CString("SFFloat"));
Script39.addChild(&field40);

field& field41 =  field();
field41.setName(CString("coordinates"));
field41.setAccessType(CString("inputOutput"));
field41.setType(CString("MFVec3f"));
Script39.addChild(&field41);

field& field42 =  field();
field42.setName(CString("coordIndexes"));
field42.setAccessType(CString("inputOutput"));
field42.setType(CString("MFInt32"));
Script39.addChild(&field42);

field& field43 =  field();
field43.setName(CString("e"));
field43.setAccessType(CString("inputOutput"));
field43.setType(CString("SFFloat"));
field43.setValue(CString("5"));
Script39.addChild(&field43);

field& field44 =  field();
field44.setName(CString("f"));
field44.setAccessType(CString("inputOutput"));
field44.setType(CString("SFFloat"));
field44.setValue(CString("5"));
Script39.addChild(&field44);

field& field45 =  field();
field45.setName(CString("g"));
field45.setAccessType(CString("inputOutput"));
field45.setType(CString("SFFloat"));
field45.setValue(CString("5"));
Script39.addChild(&field45);

field& field46 =  field();
field46.setName(CString("h"));
field46.setAccessType(CString("inputOutput"));
field46.setType(CString("SFFloat"));
field46.setValue(CString("5"));
Script39.addChild(&field46);

field& field47 =  field();
field47.setName(CString("resolution"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFInt32"));
field47.setValue(CString("50"));
Script39.addChild(&field47);


Script39.setSourceCode(CString("ecmascript:")+
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
Group24.addChild(&Script39);

ROUTE& ROUTE48 =  ROUTE();
ROUTE48.setFromNode(CString("OrbitScript"));
ROUTE48.setFromField(CString("coordIndexes"));
ROUTE48.setToNode(CString("Orbit"));
ROUTE48.setToField(CString("set_coordIndex"));
Group24.addChild(&ROUTE48);

ROUTE& ROUTE49 =  ROUTE();
ROUTE49.setFromNode(CString("OrbitScript"));
ROUTE49.setFromField(CString("coordinates"));
ROUTE49.setToNode(CString("OrbitCoordinates"));
ROUTE49.setToField(CString("point"));
Group24.addChild(&ROUTE49);

ROUTE& ROUTE50 =  ROUTE();
ROUTE50.setFromNode(CString("Clock"));
ROUTE50.setFromField(CString("fraction_changed"));
ROUTE50.setToNode(CString("OrbitScript"));
ROUTE50.setToField(CString("set_fraction"));
Group24.addChild(&ROUTE50);

ROUTE& ROUTE51 =  ROUTE();
ROUTE51.setFromNode(CString("OrbitPath"));
ROUTE51.setFromField(CString("value_changed"));
ROUTE51.setToNode(CString("OrbitTransform"));
ROUTE51.setToField(CString("rotation"));
Group24.addChild(&ROUTE51);

ROUTE& ROUTE52 =  ROUTE();
ROUTE52.setFromNode(CString("Clock"));
ROUTE52.setFromField(CString("fraction_changed"));
ROUTE52.setToNode(CString("OrbitPath"));
ROUTE52.setToField(CString("set_fraction"));
Group24.addChild(&ROUTE52);

ProtoBody23.addChild(&Group24);

ProtoDeclare17.addChild(&ProtoBody23);

Group15.addChild(&ProtoDeclare17);

ProtoInstance& ProtoInstance53 =  ProtoInstance();
ProtoInstance53.setName(CString("orbit"));
fieldValue& fieldValue54 =  fieldValue();
fieldValue54.setName(CString("translation"));
fieldValue54.setValue(CString("-8 0 0"));
ProtoInstance53.addChild(&fieldValue54);

fieldValue& fieldValue55 =  fieldValue();
fieldValue55.setName(CString("diffuseColor"));
fieldValue55.setValue(CString("1 0.5 0"));
ProtoInstance53.addChild(&fieldValue55);

fieldValue& fieldValue56 =  fieldValue();
fieldValue56.setName(CString("specularColor"));
fieldValue56.setValue(CString("1 0.5 0"));
ProtoInstance53.addChild(&fieldValue56);

fieldValue& fieldValue57 =  fieldValue();
fieldValue57.setName(CString("transparency"));
fieldValue57.setValue(CString("0.75"));
ProtoInstance53.addChild(&fieldValue57);

Group15.addChild(&ProtoInstance53);

ProtoInstance& ProtoInstance58 =  ProtoInstance();
ProtoInstance58.setName(CString("orbit"));
fieldValue& fieldValue59 =  fieldValue();
fieldValue59.setName(CString("translation"));
fieldValue59.setValue(CString("8 0 0"));
ProtoInstance58.addChild(&fieldValue59);

fieldValue& fieldValue60 =  fieldValue();
fieldValue60.setName(CString("diffuseColor"));
fieldValue60.setValue(CString("0 0.5 1"));
ProtoInstance58.addChild(&fieldValue60);

fieldValue& fieldValue61 =  fieldValue();
fieldValue61.setName(CString("specularColor"));
fieldValue61.setValue(CString("0 0.5 1"));
ProtoInstance58.addChild(&fieldValue61);

fieldValue& fieldValue62 =  fieldValue();
fieldValue62.setName(CString("transparency"));
fieldValue62.setValue(CString("0.5"));
ProtoInstance58.addChild(&fieldValue62);

Group15.addChild(&ProtoInstance58);

Scene12.addChild(&Group15);

X3D0.setScene(&Scene12);

}
