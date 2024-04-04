#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("pp3.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("translator"));
meta4.setContent(CString("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("created"));
meta5.setContent(CString("5 May 2015"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("23 Dec 2022"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("description"));
meta7.setContent(CString("A process pipeline between three spheres (try typing on spheres and blue"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("https://coderextreme.net/x3d/pp3.x3d"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("generator"));
meta9.setContent(CString("manual"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
ProtoDeclare& ProtoDeclare11 =  ProtoDeclare();
ProtoDeclare11.setName(CString("Process"));
ProtoBody& ProtoBody12 =  ProtoBody();
Group& Group13 =  Group();
//left
Transform& Transform14 =  Transform();
Transform14.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setDiffuseColor(new float[]{0.7,1,0});
Material17.setTransparency(0.5);
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Extrusion& Extrusion18 =  Extrusion();
Extrusion18.setCreaseAngle(0.785);
Extrusion18.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion18.setSpine(new float[]{-2.5,0,0,-1.5,0,0}, 6);
Shape15.setGeometry(&Extrusion18);

Transform14.addChild(&Shape15);

//<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>
Group13.addChild(&Transform14);

//right
Transform& Transform19 =  Transform();
Transform19.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape20 =  Shape();
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[]{0,0.7,1});
Material22.setTransparency(0.5);
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Extrusion& Extrusion23 =  Extrusion();
Extrusion23.setCreaseAngle(0.785);
Extrusion23.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion23.setSpine(new float[]{1.5,0,0,2.5,0,0}, 6);
Shape20.setGeometry(&Extrusion23);

Transform19.addChild(&Shape20);

Transform& Transform24 =  Transform();
Transform24.setTranslation(new float[]{2,0,0});
Shape& Shape25 =  Shape();
Appearance& Appearance26 =  Appearance();
Material& Material27 =  Material();
Material27.setDEF(CString("MaterialLightBlue"));
Material27.setDiffuseColor(new float[]{1,1,1});
Appearance26.addChild(&Material27);

Shape25.addChild(&Appearance26);

Text& Text28 =  Text();
Text28.setDEF(CString("RightString"));
Text28.setString(new CString[]{CString("r")}, 1);
Shape25.setGeometry(&Text28);

Transform24.addChild(&Shape25);

Transform19.addChild(&Transform24);

StringSensor& StringSensor29 =  StringSensor();
StringSensor29.setDEF(CString("RightSensor"));
StringSensor29.setEnabled(False);
Transform19.addChild(&StringSensor29);

TouchSensor& TouchSensor30 =  TouchSensor();
TouchSensor30.setDescription(CString("touch to activate"));
TouchSensor30.setDEF(CString("RightTouch"));
Transform19.addChild(&TouchSensor30);

Group13.addChild(&Transform19);

//up
Transform& Transform31 =  Transform();
Transform31.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Material& Material34 =  Material();
Material34.setDiffuseColor(new float[]{0,0.7,1});
Material34.setTransparency(0.5);
Appearance33.addChild(&Material34);

Shape32.addChild(&Appearance33);

Extrusion& Extrusion35 =  Extrusion();
Extrusion35.setCreaseAngle(0.785);
Extrusion35.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion35.setSpine(new float[]{0,1.5,0,0,2.5,0}, 6);
Shape32.setGeometry(&Extrusion35);

Transform31.addChild(&Shape32);

Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{-0.5,2,0});
Shape& Shape37 =  Shape();
Appearance& Appearance38 =  Appearance();
Material& Material39 =  Material();
Material39.setUSE(CString("MaterialLightBlue"));
Appearance38.addChild(&Material39);

Shape37.addChild(&Appearance38);

Text& Text40 =  Text();
Text40.setDEF(CString("UpString"));
Text40.setString(new CString[]{CString("u")}, 1);
Shape37.setGeometry(&Text40);

Transform36.addChild(&Shape37);

Transform31.addChild(&Transform36);

StringSensor& StringSensor41 =  StringSensor();
StringSensor41.setDEF(CString("UpSensor"));
StringSensor41.setEnabled(False);
Transform31.addChild(&StringSensor41);

TouchSensor& TouchSensor42 =  TouchSensor();
TouchSensor42.setDescription(CString("touch to activate"));
TouchSensor42.setDEF(CString("UpTouch"));
Transform31.addChild(&TouchSensor42);

Group13.addChild(&Transform31);

//down
Transform& Transform43 =  Transform();
Transform43.setScale(new float[]{0.5,0.5,0.5});
Shape& Shape44 =  Shape();
Appearance& Appearance45 =  Appearance();
Material& Material46 =  Material();
Material46.setDiffuseColor(new float[]{0.7,1,0});
Material46.setTransparency(0.5);
Appearance45.addChild(&Material46);

Shape44.addChild(&Appearance45);

Extrusion& Extrusion47 =  Extrusion();
Extrusion47.setCreaseAngle(0.785);
Extrusion47.setCrossSection(new float[]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Extrusion47.setSpine(new float[]{0,-2.5,0,0,-1.5,0}, 6);
Shape44.setGeometry(&Extrusion47);

Transform43.addChild(&Shape44);

//<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>
Group13.addChild(&Transform43);

//center
Transform& Transform48 =  Transform();
Shape& Shape49 =  Shape();
Appearance& Appearance50 =  Appearance();
Material& Material51 =  Material();
Material51.setDiffuseColor(new float[]{1,0,0.7});
Appearance50.addChild(&Material51);

Shape49.addChild(&Appearance50);

Sphere& Sphere52 =  Sphere();
Shape49.setGeometry(&Sphere52);

Transform48.addChild(&Shape49);

Transform& Transform53 =  Transform();
Transform53.setScale(new float[]{0.5,0.5,0.5});
Transform53.setTranslation(new float[]{-0.5,0,1});
Shape& Shape54 =  Shape();
Appearance& Appearance55 =  Appearance();
Material& Material56 =  Material();
Material56.setUSE(CString("MaterialLightBlue"));
Appearance55.addChild(&Material56);

Shape54.addChild(&Appearance55);

Text& Text57 =  Text();
Text57.setDEF(CString("CenterString"));
Shape54.setGeometry(&Text57);

Transform53.addChild(&Shape54);

Transform48.addChild(&Transform53);

StringSensor& StringSensor58 =  StringSensor();
StringSensor58.setDEF(CString("CenterSensor"));
StringSensor58.setEnabled(False);
Transform48.addChild(&StringSensor58);

TouchSensor& TouchSensor59 =  TouchSensor();
TouchSensor59.setDescription(CString("touch to activate"));
TouchSensor59.setDEF(CString("CenterTouch"));
Transform48.addChild(&TouchSensor59);

Group13.addChild(&Transform48);

ProtoBody12.addChild(&Group13);

Script& Script60 =  Script();
Script60.setDEF(CString("RightSingleToMultiString"));
field& field61 =  field();
field61.setName(CString("set_rightstring"));
field61.setAccessType(CString("inputOnly"));
field61.setType(CString("SFString"));
Script60.addChild(&field61);

field& field62 =  field();
field62.setName(CString("rightlines"));
field62.setAccessType(CString("outputOnly"));
field62.setType(CString("MFString"));
Script60.addChild(&field62);


Script60.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("	rightlines = new MFString(\"\");")+
_T("}")+
_T("function set_rightstring(rightstr) {")+
_T("	rightlines = new MFString(rightstr);")+
_T("}"));
ProtoBody12.addChild(&Script60);

Script& Script63 =  Script();
Script63.setDEF(CString("UpSingleToMultiString"));
field& field64 =  field();
field64.setName(CString("set_upstring"));
field64.setAccessType(CString("inputOnly"));
field64.setType(CString("SFString"));
Script63.addChild(&field64);

field& field65 =  field();
field65.setName(CString("uplines"));
field65.setAccessType(CString("outputOnly"));
field65.setType(CString("MFString"));
Script63.addChild(&field65);


Script63.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("	uplines = new MFString(\"\");")+
_T("}")+
_T("function set_upstring(upstr) {")+
_T("	uplines = new MFString(upstr);")+
_T("}"));
ProtoBody12.addChild(&Script63);

Script& Script66 =  Script();
Script66.setDEF(CString("CenterSingleToMultiString"));
field& field67 =  field();
field67.setName(CString("set_centerstring"));
field67.setAccessType(CString("inputOnly"));
field67.setType(CString("SFString"));
Script66.addChild(&field67);

field& field68 =  field();
field68.setName(CString("centerlines"));
field68.setAccessType(CString("outputOnly"));
field68.setType(CString("MFString"));
Script66.addChild(&field68);


Script66.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("	centerlines = new MFString(\"\");")+
_T("}")+
_T("function set_centerstring(centerstr) {")+
_T("	centerlines = new MFString(centerstr);")+
_T("}"));
ProtoBody12.addChild(&Script66);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromField(CString("enteredText"));
ROUTE69.setFromNode(CString("CenterSensor"));
ROUTE69.setToField(CString("set_centerstring"));
ROUTE69.setToNode(CString("CenterSingleToMultiString"));
ProtoBody12.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromField(CString("centerlines"));
ROUTE70.setFromNode(CString("CenterSingleToMultiString"));
ROUTE70.setToField(CString("set_string"));
ROUTE70.setToNode(CString("CenterString"));
ProtoBody12.addChild(&ROUTE70);

ROUTE& ROUTE71 =  ROUTE();
ROUTE71.setFromField(CString("isOver"));
ROUTE71.setFromNode(CString("CenterTouch"));
ROUTE71.setToField(CString("set_enabled"));
ROUTE71.setToNode(CString("CenterSensor"));
ProtoBody12.addChild(&ROUTE71);

ROUTE& ROUTE72 =  ROUTE();
ROUTE72.setFromField(CString("enteredText"));
ROUTE72.setFromNode(CString("RightSensor"));
ROUTE72.setToField(CString("set_rightstring"));
ROUTE72.setToNode(CString("RightSingleToMultiString"));
ProtoBody12.addChild(&ROUTE72);

ROUTE& ROUTE73 =  ROUTE();
ROUTE73.setFromField(CString("rightlines"));
ROUTE73.setFromNode(CString("RightSingleToMultiString"));
ROUTE73.setToField(CString("set_string"));
ROUTE73.setToNode(CString("RightString"));
ProtoBody12.addChild(&ROUTE73);

ROUTE& ROUTE74 =  ROUTE();
ROUTE74.setFromField(CString("isOver"));
ROUTE74.setFromNode(CString("RightTouch"));
ROUTE74.setToField(CString("set_enabled"));
ROUTE74.setToNode(CString("RightSensor"));
ProtoBody12.addChild(&ROUTE74);

ROUTE& ROUTE75 =  ROUTE();
ROUTE75.setFromField(CString("enteredText"));
ROUTE75.setFromNode(CString("UpSensor"));
ROUTE75.setToField(CString("set_upstring"));
ROUTE75.setToNode(CString("UpSingleToMultiString"));
ProtoBody12.addChild(&ROUTE75);

ROUTE& ROUTE76 =  ROUTE();
ROUTE76.setFromField(CString("uplines"));
ROUTE76.setFromNode(CString("UpSingleToMultiString"));
ROUTE76.setToField(CString("set_string"));
ROUTE76.setToNode(CString("UpString"));
ProtoBody12.addChild(&ROUTE76);

ROUTE& ROUTE77 =  ROUTE();
ROUTE77.setFromField(CString("isOver"));
ROUTE77.setFromNode(CString("UpTouch"));
ROUTE77.setToField(CString("set_enabled"));
ROUTE77.setToNode(CString("UpSensor"));
ProtoBody12.addChild(&ROUTE77);

ProtoDeclare11.addChild(&ProtoBody12);

Scene10.addChild(&ProtoDeclare11);

NavigationInfo& NavigationInfo78 =  NavigationInfo();
Scene10.addChild(&NavigationInfo78);

Viewpoint& Viewpoint79 =  Viewpoint();
Viewpoint79.setDescription(CString("Process pipes"));
Viewpoint79.setOrientation(new float[]{1,0,0,-0.4});
Viewpoint79.setPosition(new float[]{0,5,12});
Scene10.addChild(&Viewpoint79);

Transform& Transform80 =  Transform();
Transform80.setTranslation(new float[]{0,-2.5,0});
ProtoInstance& ProtoInstance81 =  ProtoInstance();
ProtoInstance81.setName(CString("Process"));
Transform80.addChild(&ProtoInstance81);

Scene10.addChild(&Transform80);

Transform& Transform82 =  Transform();
ProtoInstance& ProtoInstance83 =  ProtoInstance();
ProtoInstance83.setName(CString("Process"));
Transform82.addChild(&ProtoInstance83);

Scene10.addChild(&Transform82);

Transform& Transform84 =  Transform();
Transform84.setTranslation(new float[]{0,2.5,0});
ProtoInstance& ProtoInstance85 =  ProtoInstance();
ProtoInstance85.setName(CString("Process"));
Transform84.addChild(&ProtoInstance85);

Scene10.addChild(&Transform84);

X3D0.setScene(&Scene10);

}
