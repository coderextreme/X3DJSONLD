//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
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
meta3.setContent(CString("Thu, 23 Apr 2015 06:07:13 GMT"));
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
meta6.setContent(CString("Thu, 23 Apr 2015 06:07:13 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("else"));
Inline& Inline10 =  Inline();
Inline10.setUrl(new CString[]{CString("helpScout.x3d")}, 1);
Inline10.setBboxSize(new float[]{5.0,3.8,5.0});
Transform9.addChild(&Inline10);

Scene7.addChild(&Transform9);

Transform& Transform11 =  Transform();
Transform11.setDEF(CString("hudLOD"));
LOD& LOD12 =  LOD();
LOD12.setDEF(CString("HUD"));
LOD12.setRange(new float[]{6.0}, 1);
Transform& Transform13 =  Transform();
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("HUD_obj"));
Transform& Transform15 =  Transform();
Collision& Collision16 =  Collision();
Collision16.setEnabled(false);
LOD& LOD17 =  LOD();
LOD17.setRange(new float[]{3.0}, 1);
Transform& Transform18 =  Transform();
Transform18.setDEF(CString("on"));
Inline& Inline19 =  Inline();
Inline19.setUrl(new CString[]{CString("cs_help-txt.x3d")}, 1);
Inline19.setBboxSize(new float[]{0.537486,0.144576,0.0317884});
Inline19.setBboxCenter(new float[]{0.00359547,-0.0934332,-0.276017});
Transform18.addChild(&Inline19);

LOD17.addChildren(&Transform18);

Transform& Transform20 =  Transform();
Transform20.setDEF(CString("off_1"));
LOD17.addChildren(&Transform20);

Collision16.addChildren(LOD17);

Transform15.addChild(&Collision16);

Transform14.addChild(&Transform15);

Transform13.addChild(&Transform14);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("prx"));
ProximitySensor& ProximitySensor22 =  ProximitySensor();
ProximitySensor22.setDEF(CString("_1"));
ProximitySensor22.setSize(new float[]{7.0,2.0,7.0});
ProximitySensor22.setCenter(new float[]{0.0,1.0,0.0});
Transform21.addChild(&ProximitySensor22);

Transform13.addChild(&Transform21);

LOD12.addChildren(&Transform13);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("off"));
LOD12.addChildren(&Transform23);

Transform11.addChild(&LOD12);

Scene7.addChild(&Transform11);

Viewpoint& Viewpoint24 =  Viewpoint();
Viewpoint24.setDEF(CString("VP1"));
Viewpoint24.setPosition(new float[]{3.71258,0.795521,3.41767});
Viewpoint24.setOrientation(new float[]{-0.0239249,0.998759,0.0436796,0.859438});
Viewpoint24.setFieldOfView(1.2);
Scene7.addChild(&Viewpoint24);

ROUTE& ROUTE25 =  ROUTE();
ROUTE25.setFromNode(CString("_1"));
ROUTE25.setFromField(CString("position_changed"));
ROUTE25.setToNode(CString("on"));
ROUTE25.setToField(CString("set_translation"));
Scene7.addChild(&ROUTE25);

ROUTE& ROUTE26 =  ROUTE();
ROUTE26.setFromNode(CString("_1"));
ROUTE26.setFromField(CString("orientation_changed"));
ROUTE26.setToNode(CString("on"));
ROUTE26.setToField(CString("set_rotation"));
Scene7.addChild(&ROUTE26);

X3D0.setScene(&Scene7);

//}
