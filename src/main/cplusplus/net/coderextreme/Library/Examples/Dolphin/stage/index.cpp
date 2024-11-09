#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
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
meta3.setContent(CString("Wed, 22 Apr 2015 09:04:29 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.8, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Wed, 22 Apr 2015 09:04:29 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Dolphin"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
ExternProtoDeclare& ExternProtoDeclare9 =  ExternProtoDeclare();
ExternProtoDeclare9.setName(CString("Dolphin"));
ExternProtoDeclare9.setUrl(new CString[]{CString("DolphinPROTO.x3d")}, 1);
field& field10 =  field();
field10.setName(CString("set_fraction"));
field10.setAccessType(CString("inputOnly"));
field10.setType(CString("SFFloat"));
ExternProtoDeclare9.addChild(&field10);

field& field11 =  field();
field11.setName(CString("collide"));
field11.setAccessType(CString("inputOutput"));
field11.setType(CString("SFBool"));
ExternProtoDeclare9.addChild(&field11);

field& field12 =  field();
field12.setName(CString("collideTime"));
field12.setAccessType(CString("outputOnly"));
field12.setType(CString("SFTime"));
ExternProtoDeclare9.addChild(&field12);

Scene8.addChild(&ExternProtoDeclare9);

NavigationInfo& NavigationInfo13 =  NavigationInfo();
Scene8.addChild(&NavigationInfo13);

Background& Background14 =  Background();
Background14.setSkyAngle(new float[]{1.5708}, 1);
Background14.setSkyColor(new float[]{1,1,1,0.35,0.65,0.65}, 6);
Background14.setGroundAngle(new float[]{1.5708}, 1);
Background14.setGroundColor(new float[]{0.15,0.3,0.35,0.35,0.65,0.65}, 6);
Scene8.addChild(&Background14);

DirectionalLight& DirectionalLight15 =  DirectionalLight();
DirectionalLight15.setColor(new float[]{0.55,0.75,0.75});
DirectionalLight15.setAmbientIntensity(0.7);
DirectionalLight15.setDirection(new float[]{0,-1,0});
Scene8.addChild(&DirectionalLight15);

DirectionalLight& DirectionalLight16 =  DirectionalLight();
DirectionalLight16.setColor(new float[]{0.55,0.75,0.75});
DirectionalLight16.setAmbientIntensity(0.7);
DirectionalLight16.setDirection(new float[]{0,-1,0});
Scene8.addChild(&DirectionalLight16);

ProtoInstance& ProtoInstance17 =  ProtoInstance();
ProtoInstance17.setName(CString("Dolphin"));
ProtoInstance17.setDEF(CString("DOLPHIN"));
Scene8.addChild(&ProtoInstance17);

TimeSensor& TimeSensor18 =  TimeSensor();
TimeSensor18.setDEF(CString("TS"));
TimeSensor18.setLoop(True);
Scene8.addChild(&TimeSensor18);

ROUTE& ROUTE19 =  ROUTE();
ROUTE19.setFromNode(CString("TS"));
ROUTE19.setFromField(CString("fraction_changed"));
ROUTE19.setToNode(CString("DOLPHIN"));
ROUTE19.setToField(CString("set_fraction"));
Scene8.addChild(&ROUTE19);

X3D0.setScene(&Scene8);

}
