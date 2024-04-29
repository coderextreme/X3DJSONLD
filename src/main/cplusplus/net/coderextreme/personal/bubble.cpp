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
meta2.setContent(CString("bubble.x3d"));
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
meta6.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/personal/bubble.x3d"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
NavigationInfo& NavigationInfo8 =  NavigationInfo();
NavigationInfo8.setType(new CString[]{CString("EXAMINE")}, 1);
Scene7.addChild(&NavigationInfo8);

Viewpoint& Viewpoint9 =  Viewpoint();
Viewpoint9.setPosition(new float[]{0,0,4});
Viewpoint9.setOrientation(new float[]{1,0,0,0});
Viewpoint9.setDescription(CString("Bubble in action"));
Scene7.addChild(&Viewpoint9);

ProtoDeclare& ProtoDeclare10 =  ProtoDeclare();
ProtoDeclare10.setName(CString("Bubble"));
ProtoBody& ProtoBody11 =  ProtoBody();
Transform& Transform12 =  Transform();
Transform12.setDEF(CString("transform"));
Shape& Shape13 =  Shape();
Sphere& Sphere14 =  Sphere();
Sphere14.setRadius(0.25);
Shape13.setGeometry(&Sphere14);

Appearance& Appearance15 =  Appearance();
Material& Material16 =  Material();
Material16.setDiffuseColor(new float[]{1,0,0});
Material16.setTransparency(0.2);
Appearance15.addChild(&Material16);

Shape13.addChild(&Appearance15);

Transform12.addChild(&Shape13);

Script& Script17 =  Script();
Script17.setDEF(CString("bounce"));
field& field18 =  field();
field18.setName(CString("scale"));
field18.setAccessType(CString("inputOutput"));
field18.setType(CString("SFVec3f"));
field18.setValue(CString("1 1 1"));
Script17.addChild(&field18);

field& field19 =  field();
field19.setName(CString("translation"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("SFVec3f"));
field19.setValue(CString("0 0 0"));
Script17.addChild(&field19);

field& field20 =  field();
field20.setName(CString("velocity"));
field20.setAccessType(CString("inputOutput"));
field20.setType(CString("SFVec3f"));
field20.setValue(CString("0 0 0"));
Script17.addChild(&field20);

field& field21 =  field();
field21.setName(CString("scalvel"));
field21.setAccessType(CString("inputOutput"));
field21.setType(CString("SFVec3f"));
field21.setValue(CString("0 0 0"));
Script17.addChild(&field21);

field& field22 =  field();
field22.setName(CString("set_fraction"));
field22.setAccessType(CString("inputOnly"));
field22.setType(CString("SFFloat"));
Script17.addChild(&field22);


Script17.setSourceCode(CString("ecmascript:")+
_T("function initialize() {")+
_T("    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);")+
_T("    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);")+
_T("}")+
_T("function set_fraction(value) {")+
_T("	translation = new SFVec3f(")+
_T("		translation.x + velocity.x,")+
_T("		translation.y + velocity.y,")+
_T("		translation.z + velocity.z);")+
_T("	scale = new SFVec3f(")+
_T("		scale.x + scalvel.x,")+
_T("		scale.y + scalvel.y,")+
_T("		scale.z + scalvel.z);")+
_T("        // if you get to far away or too big, explode")+
_T("        if ( Math.abs(translation.x) > 256) {")+
_T("		translation.x = 0;")+
_T("		initialize();")+
_T("	}")+
_T("        if ( Math.abs(translation.y) > 256) {")+
_T("		translation.y = 0;")+
_T("		initialize();")+
_T("	}")+
_T("        if ( Math.abs(translation.z) > 256) {")+
_T("		translation.z = 0;")+
_T("		initialize();")+
_T("	}")+
_T("	if (Math.abs(scale.x) > 20) {")+
_T("		scale.x = scale.x/2;")+
_T("		translation.x = 0;")+
_T("		initialize();")+
_T("	}")+
_T("	if (Math.abs(scale.y) > 20) {")+
_T("		scale.y = scale.y/2;")+
_T("		translation.y = 0;")+
_T("		initialize();")+
_T("	}")+
_T("	if (Math.abs(scale.z) > 20) {")+
_T("		scale.z = scale.z/2;")+
_T("		translation.z = 0;")+
_T("		initialize();")+
_T("	}")+
_T("}"));
Transform12.addChild(&Script17);

TimeSensor& TimeSensor23 =  TimeSensor();
TimeSensor23.setDEF(CString("bubbleClock"));
TimeSensor23.setCycleInterval(10);
TimeSensor23.setLoop(True);
Transform12.addChild(&TimeSensor23);

ROUTE& ROUTE24 =  ROUTE();
ROUTE24.setFromNode(CString("bounce"));
ROUTE24.setFromField(CString("translation_changed"));
ROUTE24.setToNode(CString("transform"));
ROUTE24.setToField(CString("set_translation"));
Transform12.addChild(&ROUTE24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("bounce"));
ROUTE25.setFromField(CString("scale_changed"));
ROUTE25.setToNode(CString("transform"));
ROUTE25.setToField(CString("set_scale"));
Transform12.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("bubbleClock"));
ROUTE26.setFromField(CString("fraction_changed"));
ROUTE26.setToNode(CString("bounce"));
ROUTE26.setToField(CString("set_fraction"));
Transform12.addChild(&ROUTE26);

ProtoBody11.addChild(&Transform12);

ProtoDeclare10.addChild(&ProtoBody11);

Scene7.addChild(&ProtoDeclare10);

ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("Bubble"));
ProtoInstance27.setDEF(CString("bubbleA"));
Scene7.addChild(&ProtoInstance27);

X3D0.setScene(&Scene7);

}
