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
meta3.setContent(CString("Sat, 25 Apr 2015 12:38:17 GMT"));
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
meta6.setContent(CString("Sat, 25 Apr 2015 12:38:17 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in CosmoWorldsPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Background& Background9 =  Background();
Background9.setDEF(CString("city"));
Background9.setFrontUrl(new CString[]{CString("night.png")}, 1);
Background9.setBackUrl(new CString[]{CString("night.png")}, 1);
Background9.setLeftUrl(new CString[]{CString("night.png")}, 1);
Background9.setRightUrl(new CString[]{CString("night.png")}, 1);
Background9.setTopUrl(new CString[]{CString("night.png")}, 1);
Background9.setBottomUrl(new CString[]{CString("night.png")}, 1);
Scene7.addChild(&Background9);

Transform& Transform10 =  Transform();
Transform10.setDEF(CString("vs_handle"));
Transform10.setScale(new float[]{19.4378,19.4378,19.4378});
Switch& Switch11 =  Switch();
Switch11.setWhichChoice(0);
Transform& Transform12 =  Transform();
Switch11.addChild(&Transform12);

Inline& Inline13 =  Inline();
Inline13.setUrl(new CString[]{CString("cube.x3d")}, 1);
Inline13.setBboxSize(new float[]{1,1,1});
Switch11.addChild(&Inline13);

Transform10.addChild(&Switch11);

Scene7.addChild(&Transform10);

Transform& Transform14 =  Transform();
Transform14.setDEF(CString("vs"));
VisibilitySensor& VisibilitySensor15 =  VisibilitySensor();
VisibilitySensor15.setDEF(CString("_1"));
VisibilitySensor15.setSize(new float[]{19.4378,19.4378,19.4378});
Transform14.addChild(&VisibilitySensor15);

Scene7.addChild(&Transform14);

ROUTE& ROUTE16 =  ROUTE();
ROUTE16.setFromNode(CString("_1"));
ROUTE16.setFromField(CString("isActive"));
ROUTE16.setToNode(CString("city"));
ROUTE16.setToField(CString("set_bind"));
Scene7.addChild(&ROUTE16);

ROUTE& ROUTE17 =  ROUTE();
ROUTE17.setFromNode(CString("vs_handle"));
ROUTE17.setFromField(CString("translation_changed"));
ROUTE17.setToNode(CString("_1"));
ROUTE17.setToField(CString("set_center"));
Scene7.addChild(&ROUTE17);

ROUTE& ROUTE18 =  ROUTE();
ROUTE18.setFromNode(CString("vs_handle"));
ROUTE18.setFromField(CString("scale_changed"));
ROUTE18.setToNode(CString("_1"));
ROUTE18.setToField(CString("set_size"));
Scene7.addChild(&ROUTE18);

X3D0.setScene(&Scene7);

}
