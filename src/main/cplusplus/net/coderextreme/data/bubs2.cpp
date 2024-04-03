//#define False false
//#define True true
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
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("bubs2.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Tour around a prismatic sphere"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/geo.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translated"));
meta7.setContent(CString("13 March 2016"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"));
head1.addMeta(&meta8);

component& component9 =  component();
component9.setName(CString("Scripting"));
component9.setLevel(1);
head1.addChild(&component9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
NavigationInfo& NavigationInfo11 =  NavigationInfo();
NavigationInfo11.setType(new CString[1]{CString("EXAMINE")}, 1);
Scene10.addChild(&NavigationInfo11);

Viewpoint& Viewpoint12 =  Viewpoint();
Viewpoint12.setPosition(new float[3]{0.0,0.0,4.0});
Viewpoint12.setOrientation(new float[4]{1.0,0.0,0.0,0.0});
Viewpoint12.setDescription(CString("Bubbles in action"));
Scene10.addChild(&Viewpoint12);

Background& Background13 =  Background();
Background13.setBackUrl(new CString[2]{CString("../resources/images/BK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
Background13.setBottomUrl(new CString[2]{CString("../resources/images/BT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
Background13.setFrontUrl(new CString[2]{CString("../resources/images/FR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
Background13.setLeftUrl(new CString[2]{CString("../resources/images/LF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
Background13.setRightUrl(new CString[2]{CString("../resources/images/RT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
Background13.setTopUrl(new CString[2]{CString("../resources/images/TP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
Scene10.addChild(&Background13);

ProtoDeclare& ProtoDeclare14 =  ProtoDeclare();
ProtoDeclare14.setName(CString("Bubble"));
ProtoBody& ProtoBody15 =  ProtoBody();
Transform& Transform16 =  Transform();
Transform16.setDEF(CString("body_trans"));
Shape& Shape17 =  Shape();
Sphere& Sphere18 =  Sphere();
Sphere18.setRadius(0.25);
Shape17.setGeometry(&Sphere18);

Appearance& Appearance19 =  Appearance();
Material& Material20 =  Material();
Material20.setDiffuseColor(new float[3]{1.0,0.0,0.0});
Material20.setTransparency(0.2);
Appearance19.addChild(&Material20);

Shape17.addChild(&Appearance19);

Transform16.addChild(&Shape17);

Script& Script21 =  Script();
Script21.setDEF(CString("bounce"));
field& field22 =  field();
field22.setName(CString("scale"));
field22.setAccessType(CString("inputOutput"));
field22.setType(CString("SFVec3f"));
field22.setValue(CString("1 1 1"));
Script21.addChild(&field22);

field& field23 =  field();
field23.setName(CString("translation"));
field23.setAccessType(CString("inputOutput"));
field23.setType(CString("SFVec3f"));
field23.setValue(CString("0 0 0"));
Script21.addChild(&field23);

field& field24 =  field();
field24.setName(CString("velocity"));
field24.setAccessType(CString("inputOutput"));
field24.setType(CString("SFVec3f"));
field24.setValue(CString("0 0 0"));
Script21.addChild(&field24);

field& field25 =  field();
field25.setName(CString("scalvel"));
field25.setAccessType(CString("inputOutput"));
field25.setType(CString("SFVec3f"));
field25.setValue(CString("0 0 0"));
Script21.addChild(&field25);

field& field26 =  field();
field26.setName(CString("set_fraction"));
field26.setAccessType(CString("inputOnly"));
field26.setType(CString("SFFloat"));
Script21.addChild(&field26);


//Script21.setSourceCode(CString("ecmascript:")+
//_T("function initialize() {")+
//_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
//_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
//_T("}")+
//_T("function set_fraction(value) {")+
//_T("    if (typeof translation === 'undefined') {")+
//_T("		translation = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof velocity === 'undefined') {")+
//_T("		velocity = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof scalvel === 'undefined') {")+
//_T("		scalvel = new SFVec3f(0, 0, 0);")+
//_T("    }")+
//_T("    if (typeof scale === 'undefined') {")+
//_T("		scale = new SFVec3f(1, 1, 1);")+
//_T("    }")+
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
Transform16.addChild(&Script21);

TimeSensor& TimeSensor27 =  TimeSensor();
TimeSensor27.setDEF(CString("bubbleClock"));
TimeSensor27.setCycleInterval(10);
TimeSensor27.setLoop(True);
Transform16.addChild(&TimeSensor27);

ROUTE& ROUTE28 =  ROUTE();
ROUTE28.setFromNode(CString("bounce"));
ROUTE28.setFromField(CString("translation_changed"));
ROUTE28.setToNode(CString("body_trans"));
ROUTE28.setToField(CString("set_translation"));
Transform16.addChild(&ROUTE28);

ROUTE& ROUTE29 =  ROUTE();
ROUTE29.setFromNode(CString("bounce"));
ROUTE29.setFromField(CString("scale_changed"));
ROUTE29.setToNode(CString("body_trans"));
ROUTE29.setToField(CString("set_scale"));
Transform16.addChild(&ROUTE29);

ROUTE& ROUTE30 =  ROUTE();
ROUTE30.setFromNode(CString("bubbleClock"));
ROUTE30.setFromField(CString("fraction_changed"));
ROUTE30.setToNode(CString("bounce"));
ROUTE30.setToField(CString("set_fraction"));
Transform16.addChild(&ROUTE30);

ProtoBody15.addChild(&Transform16);

ProtoDeclare14.addChild(&ProtoBody15);

Scene10.addChild(&ProtoDeclare14);

ProtoInstance& ProtoInstance31 =  ProtoInstance();
ProtoInstance31.setName(CString("Bubble"));
ProtoInstance31.setDEF(CString("bubbleA"));
Scene10.addChild(&ProtoInstance31);

ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("Bubble"));
ProtoInstance32.setDEF(CString("bubbleB"));
Scene10.addChild(&ProtoInstance32);

ProtoInstance& ProtoInstance33 =  ProtoInstance();
ProtoInstance33.setName(CString("Bubble"));
ProtoInstance33.setDEF(CString("bubbleC"));
Scene10.addChild(&ProtoInstance33);

ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("Bubble"));
ProtoInstance34.setDEF(CString("bubbleD"));
Scene10.addChild(&ProtoInstance34);

X3D0.setScene(&Scene10);

//}
