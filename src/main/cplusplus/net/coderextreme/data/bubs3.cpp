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
meta2.setContent(CString("bubs3.x3d"));
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
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/bubs.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[1]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setPosition(new float[3]{0,0,4});
Viewpoint9.setOrientation(new float[4]{1,0,0,0});
Viewpoint9.setDescription(CString("Bubbles in action"));
Scene7.addChild(&Viewpoint9);

Background& Background10 =  Background();
Background10.setBackUrl(new CString[2]{CString("../resources/images/BK.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png")}, 2);
Background10.setBottomUrl(new CString[2]{CString("../resources/images/BT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png")}, 2);
Background10.setFrontUrl(new CString[2]{CString("../resources/images/FR.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png")}, 2);
Background10.setLeftUrl(new CString[2]{CString("../resources/images/LF.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png")}, 2);
Background10.setRightUrl(new CString[2]{CString("../resources/images/RT.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png")}, 2);
Background10.setTopUrl(new CString[2]{CString("../resources/images/TP.png"), CString("https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png")}, 2);
Scene7.addChild(&Background10);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("DECLBubble_bubbleA"));
Shape& Shape12 =  Shape();
Sphere& Sphere13 =  Sphere();
Sphere13.setRadius(0.25);
Shape12.setGeometry(&Sphere13);

Appearance& Appearance14 =  Appearance();
Material& Material15 =  Material();
Material15.setDiffuseColor(new float[3]{1,0,0});
Material15.setTransparency(0.2);
Appearance14.addChild(&Material15);

Shape12.addChild(&Appearance14);

Transform11.addChild(&Shape12);

Script& Script16 =  Script();
Script16.setDEF(CString("DECLBubble_bubbleA_bounce"));
field& field17 =  field();
field17.setName(CString("scale"));
field17.setAccessType(CString("inputOutput"));
field17.setType(CString("SFVec3f"));
field17.setValue(CString("1 1 1"));
Script16.addChild(&field17);

field& field18 =  field();
field18.setName(CString("translation"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("0 0 0"));
Script16.addChild(&field18);

field& field19 =  field();
field19.setName(CString("velocity"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
field19.setValue(CString("0 0 0"));
Script16.addChild(&field19);

field& field20 =  field();
field20.setName(CString("scalvel"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFVec3f"));
field20.setValue(CString("0 0 0"));
Script16.addChild(&field20);

field& field21 =  field();
field21.setName(CString("set_fraction"));
field21.setAccessType(CString("inputOnly"));
field21.setType(CString("SFFloat"));
Script16.addChild(&field21);


Script16.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform11.addChild(&Script16);

TimeSensor& TimeSensor22 =  TimeSensor();
TimeSensor22.setDEF(CString("DECLBubble_bubbleA_bubbleClock"));
TimeSensor22.setCycleInterval(10);
TimeSensor22.setLoop(True);
Transform11.addChild(&TimeSensor22);

ROUTE& ROUTE23 =  ROUTE();
ROUTE23.setFromNode(CString("DECLBubble_bubbleA_bounce"));
ROUTE23.setFromField(CString("translation_changed"));
ROUTE23.setToNode(CString("DECLBubble_transform"));
ROUTE23.setToField(CString("set_translation"));
Transform11.addChild(&ROUTE23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("DECLBubble_bubbleA_bounce"));
ROUTE24.setFromField(CString("scale_changed"));
ROUTE24.setToNode(CString("DECLBubble_transform"));
ROUTE24.setToField(CString("set_scale"));
Transform11.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("DECLBubble_bubbleA_bubbleClock"));
ROUTE25.setFromField(CString("fraction_changed"));
ROUTE25.setToNode(CString("DECLBubble_bubbleA_bounce"));
ROUTE25.setToField(CString("set_fraction"));
Transform11.addChild(&ROUTE25);

Scene7.addChild(&Transform11);

Transform& Transform26 =  Transform();
Transform26.setDEF(CString("DECLBubble_bubbleB"));
Shape& Shape27 =  Shape();
Sphere& Sphere28 =  Sphere();
Sphere28.setRadius(0.25);
Shape27.setGeometry(&Sphere28);

Appearance& Appearance29 =  Appearance();
Material& Material30 =  Material();
Material30.setDiffuseColor(new float[3]{1,0,0});
Material30.setTransparency(0.2);
Appearance29.addChild(&Material30);

Shape27.addChild(&Appearance29);

Transform26.addChild(&Shape27);

Script& Script31 =  Script();
Script31.setDEF(CString("DECLBubble_bubbleB_bounce"));
field& field32 =  field();
field32.setName(CString("scale"));
field32.setAccessType(CString("inputOutput"));
field32.setType(CString("SFVec3f"));
field32.setValue(CString("1 1 1"));
Script31.addChild(&field32);

field& field33 =  field();
field33.setName(CString("translation"));
field33.setAccessType(CString("inputOutput"));
field33.setType(CString("SFVec3f"));
field33.setValue(CString("0 0 0"));
Script31.addChild(&field33);

field& field34 =  field();
field34.setName(CString("velocity"));
field34.setAccessType(CString("inputOutput"));
field34.setType(CString("SFVec3f"));
field34.setValue(CString("0 0 0"));
Script31.addChild(&field34);

field& field35 =  field();
field35.setName(CString("scalvel"));
field35.setAccessType(CString("inputOutput"));
field35.setType(CString("SFVec3f"));
field35.setValue(CString("0 0 0"));
Script31.addChild(&field35);

field& field36 =  field();
field36.setName(CString("set_fraction"));
field36.setAccessType(CString("inputOnly"));
field36.setType(CString("SFFloat"));
Script31.addChild(&field36);


Script31.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform26.addChild(&Script31);

TimeSensor& TimeSensor37 =  TimeSensor();
TimeSensor37.setDEF(CString("DECLBubble_bubbleB_bubbleClock"));
TimeSensor37.setCycleInterval(10);
TimeSensor37.setLoop(True);
Transform26.addChild(&TimeSensor37);

ROUTE& ROUTE38 =  ROUTE();
ROUTE38.setFromNode(CString("DECLBubble_bubbleB_bounce"));
ROUTE38.setFromField(CString("translation_changed"));
ROUTE38.setToNode(CString("DECLBubble_transform"));
ROUTE38.setToField(CString("set_translation"));
Transform26.addChild(&ROUTE38);

ROUTE& ROUTE39 =  ROUTE();
ROUTE39.setFromNode(CString("DECLBubble_bubbleB_bounce"));
ROUTE39.setFromField(CString("scale_changed"));
ROUTE39.setToNode(CString("DECLBubble_transform"));
ROUTE39.setToField(CString("set_scale"));
Transform26.addChild(&ROUTE39);

ROUTE& ROUTE40 =  ROUTE();
ROUTE40.setFromNode(CString("DECLBubble_bubbleB_bubbleClock"));
ROUTE40.setFromField(CString("fraction_changed"));
ROUTE40.setToNode(CString("DECLBubble_bubbleB_bounce"));
ROUTE40.setToField(CString("set_fraction"));
Transform26.addChild(&ROUTE40);

Scene7.addChild(&Transform26);

Transform& Transform41 =  Transform();
Transform41.setDEF(CString("DECLBubble_bubbleC"));
Shape& Shape42 =  Shape();
Sphere& Sphere43 =  Sphere();
Sphere43.setRadius(0.25);
Shape42.setGeometry(&Sphere43);

Appearance& Appearance44 =  Appearance();
Material& Material45 =  Material();
Material45.setDiffuseColor(new float[3]{1,0,0});
Material45.setTransparency(0.2);
Appearance44.addChild(&Material45);

Shape42.addChild(&Appearance44);

Transform41.addChild(&Shape42);

Script& Script46 =  Script();
Script46.setDEF(CString("DECLBubble_bubbleC_bounce"));
field& field47 =  field();
field47.setName(CString("scale"));
field47.setAccessType(CString("inputOutput"));
field47.setType(CString("SFVec3f"));
field47.setValue(CString("1 1 1"));
Script46.addChild(&field47);

field& field48 =  field();
field48.setName(CString("translation"));
field48.setAccessType(CString("inputOutput"));
field48.setType(CString("SFVec3f"));
field48.setValue(CString("0 0 0"));
Script46.addChild(&field48);

field& field49 =  field();
field49.setName(CString("velocity"));
field49.setAccessType(CString("inputOutput"));
field49.setType(CString("SFVec3f"));
field49.setValue(CString("0 0 0"));
Script46.addChild(&field49);

field& field50 =  field();
field50.setName(CString("scalvel"));
field50.setAccessType(CString("inputOutput"));
field50.setType(CString("SFVec3f"));
field50.setValue(CString("0 0 0"));
Script46.addChild(&field50);

field& field51 =  field();
field51.setName(CString("set_fraction"));
field51.setAccessType(CString("inputOnly"));
field51.setType(CString("SFFloat"));
Script46.addChild(&field51);


Script46.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform41.addChild(&Script46);

TimeSensor& TimeSensor52 =  TimeSensor();
TimeSensor52.setDEF(CString("DECLBubble_bubbleC_bubbleClock"));
TimeSensor52.setCycleInterval(10);
TimeSensor52.setLoop(True);
Transform41.addChild(&TimeSensor52);

ROUTE& ROUTE53 =  ROUTE();
ROUTE53.setFromNode(CString("DECLBubble_bubbleC_bounce"));
ROUTE53.setFromField(CString("translation_changed"));
ROUTE53.setToNode(CString("DECLBubble_transform"));
ROUTE53.setToField(CString("set_translation"));
Transform41.addChild(&ROUTE53);

ROUTE& ROUTE54 =  ROUTE();
ROUTE54.setFromNode(CString("DECLBubble_bubbleC_bounce"));
ROUTE54.setFromField(CString("scale_changed"));
ROUTE54.setToNode(CString("DECLBubble_transform"));
ROUTE54.setToField(CString("set_scale"));
Transform41.addChild(&ROUTE54);

ROUTE& ROUTE55 =  ROUTE();
ROUTE55.setFromNode(CString("DECLBubble_bubbleC_bubbleClock"));
ROUTE55.setFromField(CString("fraction_changed"));
ROUTE55.setToNode(CString("DECLBubble_bubbleC_bounce"));
ROUTE55.setToField(CString("set_fraction"));
Transform41.addChild(&ROUTE55);

Scene7.addChild(&Transform41);

Transform& Transform56 =  Transform();
Transform56.setDEF(CString("DECLBubble_bubbleD"));
Shape& Shape57 =  Shape();
Sphere& Sphere58 =  Sphere();
Sphere58.setRadius(0.25);
Shape57.setGeometry(&Sphere58);

Appearance& Appearance59 =  Appearance();
Material& Material60 =  Material();
Material60.setDiffuseColor(new float[3]{1,0,0});
Material60.setTransparency(0.2);
Appearance59.addChild(&Material60);

Shape57.addChild(&Appearance59);

Transform56.addChild(&Shape57);

Script& Script61 =  Script();
Script61.setDEF(CString("DECLBubble_bubbleD_bounce"));
field& field62 =  field();
field62.setName(CString("scale"));
field62.setAccessType(CString("inputOutput"));
field62.setType(CString("SFVec3f"));
field62.setValue(CString("1 1 1"));
Script61.addChild(&field62);

field& field63 =  field();
field63.setName(CString("translation"));
field63.setAccessType(CString("inputOutput"));
field63.setType(CString("SFVec3f"));
field63.setValue(CString("0 0 0"));
Script61.addChild(&field63);

field& field64 =  field();
field64.setName(CString("velocity"));
field64.setAccessType(CString("inputOutput"));
field64.setType(CString("SFVec3f"));
field64.setValue(CString("0 0 0"));
Script61.addChild(&field64);

field& field65 =  field();
field65.setName(CString("scalvel"));
field65.setAccessType(CString("inputOutput"));
field65.setType(CString("SFVec3f"));
field65.setValue(CString("0 0 0"));
Script61.addChild(&field65);

field& field66 =  field();
field66.setName(CString("set_fraction"));
field66.setAccessType(CString("inputOnly"));
field66.setType(CString("SFFloat"));
Script61.addChild(&field66);


Script61.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);")+
_T("    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);")+
_T("    // if you get to far away or too big, explode")+
_T("    if ( Math.abs(translation.x) > 256) {")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.y) > 256) {")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if ( Math.abs(translation.z) > 256) {")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.x) > 20) {")+
_T("	scale.x = scale.x/20;")+
_T("	translation.x = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.y) > 20) {")+
_T("	scale.y = scale.y/20;")+
_T("	translation.y = 0;")+
_T("	initialize();")+
_T("    }")+
_T("    if (Math.abs(scale.z) > 20) {")+
_T("	scale.z = scale.z/20;")+
_T("	translation.z = 0;")+
_T("	initialize();")+
_T("    }")+
_T("}"));
Transform56.addChild(&Script61);

TimeSensor& TimeSensor67 =  TimeSensor();
TimeSensor67.setDEF(CString("DECLBubble_bubbleD_bubbleClock"));
TimeSensor67.setCycleInterval(10);
TimeSensor67.setLoop(True);
Transform56.addChild(&TimeSensor67);

ROUTE& ROUTE68 =  ROUTE();
ROUTE68.setFromNode(CString("DECLBubble_bubbleD_bounce"));
ROUTE68.setFromField(CString("translation_changed"));
ROUTE68.setToNode(CString("DECLBubble_transform"));
ROUTE68.setToField(CString("set_translation"));
Transform56.addChild(&ROUTE68);

ROUTE& ROUTE69 =  ROUTE();
ROUTE69.setFromNode(CString("DECLBubble_bubbleD_bounce"));
ROUTE69.setFromField(CString("scale_changed"));
ROUTE69.setToNode(CString("DECLBubble_transform"));
ROUTE69.setToField(CString("set_scale"));
Transform56.addChild(&ROUTE69);

ROUTE& ROUTE70 =  ROUTE();
ROUTE70.setFromNode(CString("DECLBubble_bubbleD_bubbleClock"));
ROUTE70.setFromField(CString("fraction_changed"));
ROUTE70.setToNode(CString("DECLBubble_bubbleD_bounce"));
ROUTE70.setToField(CString("set_fraction"));
Transform56.addChild(&ROUTE70);

Scene7.addChild(&Transform56);

X3D0.setScene(&Scene7);

}
