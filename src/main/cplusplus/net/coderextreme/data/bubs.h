//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.3"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("Scripting"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("bubs.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("John Carlson"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("Tour around a prismatic sphere"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
NavigationInfo& NavigationInfo9 =  NavigationInfo();
NavigationInfo9.setType(new CString[]{CString("EXAMINE")}, 1);
Scene8.addChild(&NavigationInfo9);

Viewpoint& Viewpoint10 =  Viewpoint();
Viewpoint10.setPosition(new float[]{0.0,0.0,4.0});
Viewpoint10.setOrientation(new float[]{1.0,0.0,0.0,0.0});
Viewpoint10.setDescription(CString("Bubbles in action"));
Scene8.addChild(&Viewpoint10);

Background& Background11 =  Background();
Background11.setBackUrl(new CString[]{CString("../resources/images/BK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
Background11.setBottomUrl(new CString[]{CString("../resources/images/BT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
Background11.setFrontUrl(new CString[]{CString("../resources/images/FR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
Background11.setLeftUrl(new CString[]{CString("../resources/images/LF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
Background11.setRightUrl(new CString[]{CString("../resources/images/RT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
Background11.setTopUrl(new CString[]{CString("../resources/images/TP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
Scene8.addChild(&Background11);

ProtoDeclare& ProtoDeclare12 =  ProtoDeclare();
ProtoDeclare12.setName(CString("Bubble"));
ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("body_trans"));
Shape& Shape15 =  Shape();
Sphere& Sphere16 =  Sphere();
Sphere16.setRadius(0.25);
Shape15.setGeometry(&Sphere16);

Appearance& Appearance17 =  Appearance();
Material& Material18 =  Material();
Material18.setDiffuseColor(new float[]{1.0,0.0,0.0});
Material18.setTransparency(0.2);
Appearance17.addChild(&Material18);

Shape15.addChild(&Appearance17);

Transform14.addChild(&Shape15);

Script& Script19 =  Script();
Script19.setDEF(CString("bounce1"));
field& field20 =  field();
field20.setName(CString("scale"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFVec3f"));
field20.setValue(CString("1 1 1"));
Script19.addChild(&field20);

field& field21 =  field();
field21.setName(CString("translation"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFVec3f"));
field21.setValue(CString("0 0 0"));
Script19.addChild(&field21);

field& field22 =  field();
field22.setName(CString("velocity"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFVec3f"));
field22.setValue(CString("0 0 0"));
Script19.addChild(&field22);

field& field23 =  field();
field23.setName(CString("scalvel"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFVec3f"));
field23.setValue(CString("0 0 0"));
Script19.addChild(&field23);

field& field24 =  field();
field24.setName(CString("set_fraction"));
field24.setAccessType(CString("inputOnly"));
field24.setType(CString("SFFloat"));
Script19.addChild(&field24);


//Script19.setSourceCode(CString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
//_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
//_T("    // if you get to far away or too big, explode")+
//_T("    if ( Math.abs(translation.x) > 256) {")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.y) > 256) {")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if ( Math.abs(translation.z) > 256) {")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.x) > 20) {")+
//_T("	scale.x = scale.x/20;")+
//_T("	translation.x = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.y) > 20) {")+
//_T("	scale.y = scale.y/20;")+
//_T("	translation.y = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("    if (Math.abs(scale.z) > 20) {")+
//_T("	scale.z = scale.z/20;")+
//_T("	translation.z = 0;")+
//_T("	initialize();")+
//_T("    }")+
//_T("}"));
Transform14.addChild(&Script19);

TimeSensor& TimeSensor25 =  TimeSensor();
TimeSensor25.setDEF(CString("bubbleClock"));
TimeSensor25.setCycleInterval(10);
TimeSensor25.setLoop(true);
Transform14.addChild(&TimeSensor25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("bounce1"));
ROUTE26.setFromField(CString("translation_changed"));
ROUTE26.setToNode(CString("body_trans"));
ROUTE26.setToField(CString("set_translation"));
Transform14.addChild(&ROUTE26);

ROUTE& ROUTE27 =  ROUTE();
ROUTE27.setFromNode(CString("bounce1"));
ROUTE27.setFromField(CString("scale_changed"));
ROUTE27.setToNode(CString("body_trans"));
ROUTE27.setToField(CString("set_scale"));
Transform14.addChild(&ROUTE27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("bubbleClock"));
ROUTE28.setFromField(CString("fraction_changed"));
ROUTE28.setToNode(CString("bounce1"));
ROUTE28.setToField(CString("set_fraction"));
Transform14.addChild(&ROUTE28);

ProtoBody13.addChild(&Transform14);

ProtoDeclare12.addChild(&ProtoBody13);

Scene8.addChild(&ProtoDeclare12);

ProtoInstance& ProtoInstance29 =  ProtoInstance();
ProtoInstance29.setName(CString("Bubble"));
ProtoInstance29.setDEF(CString("bubbleA"));
Scene8.addChild(&ProtoInstance29);

ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(CString("Bubble"));
ProtoInstance30.setDEF(CString("bubbleB"));
Scene8.addChild(&ProtoInstance30);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("Bubble"));
ProtoInstance31.setDEF(CString("bubbleC"));
Scene8.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("Bubble"));
ProtoInstance32.setDEF(CString("bubbleD"));
Scene8.addChild(&ProtoInstance32);

X3D0.setScene(&Scene8);

//}
