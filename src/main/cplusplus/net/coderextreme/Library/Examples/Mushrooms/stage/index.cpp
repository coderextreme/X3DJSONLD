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
meta3.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V1.1.1, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Fri, 25 Sep 2015 17:43:15 GMT"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("title"));
meta7.setContent(CString("Mushrooms"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Group& Group9 =  Group();
WorldInfo& WorldInfo10 =  WorldInfo();
WorldInfo10.setInfo(new CString[]{CString(", "), CString("Created in Titania, "), CString("Packaged by CosmoPackagePackaged by CosmoPackage")}, 3);
Group9.addChild(&WorldInfo10);

Transform& Transform11 =  Transform();
Transform11.setTranslation(new float[]{52.4723,0,11.8231});
Transform11.setRotation(new float[]{0,1,0,1.49907});
Transform& Transform12 =  Transform();
Inline& Inline13 =  Inline();
Inline13.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline13.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline13.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform12.addChild(&Inline13);

Transform11.addChild(&Transform12);

Group9.addChild(&Transform11);

Transform& Transform14 =  Transform();
Transform14.setTranslation(new float[]{35.6884,0,14.5356});
Transform14.setRotation(new float[]{0,1,0,1.22763});
Transform& Transform15 =  Transform();
Inline& Inline16 =  Inline();
Inline16.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline16.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline16.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform15.addChild(&Inline16);

Transform14.addChild(&Transform15);

Group9.addChild(&Transform14);

Transform& Transform17 =  Transform();
Transform17.setTranslation(new float[]{6.59897,0,10.7292});
Transform17.setRotation(new float[]{0,1,0,0.61945});
Transform& Transform18 =  Transform();
Inline& Inline19 =  Inline();
Inline19.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline19.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline19.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform18.addChild(&Inline19);

Transform17.addChild(&Transform18);

Group9.addChild(&Transform17);

Transform& Transform20 =  Transform();
Transform20.setTranslation(new float[]{-12.4465,0,-2.34085});
Transform20.setRotation(new float[]{0,1,0,0.200959});
Transform& Transform21 =  Transform();
Inline& Inline22 =  Inline();
Inline22.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline22.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline22.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform21.addChild(&Inline22);

Transform20.addChild(&Transform21);

Group9.addChild(&Transform20);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{-24.2654,0,-22.5612});
Transform23.setRotation(new float[]{0,-1,0,0.203997});
Transform& Transform24 =  Transform();
Inline& Inline25 =  Inline();
Inline25.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline25.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline25.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform24.addChild(&Inline25);

Transform23.addChild(&Transform24);

Group9.addChild(&Transform23);

Transform& Transform26 =  Transform();
Transform26.setTranslation(new float[]{-26.8513,0,-39.5722});
Transform26.setRotation(new float[]{0,-1,0,0.455394});
Transform& Transform27 =  Transform();
Inline& Inline28 =  Inline();
Inline28.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline28.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline28.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform27.addChild(&Inline28);

Transform26.addChild(&Transform27);

Group9.addChild(&Transform26);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[]{-13.6717,0,-73.6618});
Transform29.setRotation(new float[]{0,-1,0,1.20026});
Transform& Transform30 =  Transform();
Inline& Inline31 =  Inline();
Inline31.setUrl(new CString[]{CString("hupfpilz.x3d")}, 1);
Inline31.setBboxSize(new float[]{5.41069,6.87135,5.41068});
Inline31.setBboxCenter(new float[]{31.5365,106.54,-26.9564});
Transform30.addChild(&Inline31);

Transform29.addChild(&Transform30);

Group9.addChild(&Transform29);

Inline& Inline32 =  Inline();
Inline32.setUrl(new CString[]{CString("pilzhaus.x3d")}, 1);
Inline32.setBboxSize(new float[]{1161.95,580.974,1161.95});
Inline32.setBboxCenter(new float[]{4.58313,143.655,1.2912});
Group9.addChild(&Inline32);

PointLight& PointLight33 =  PointLight();
PointLight33.setDEF(CString("Light2"));
PointLight33.setColor(new float[]{0.341451,1,0.269661});
PointLight33.setIntensity(0.592233);
PointLight33.setLocation(new float[]{36.7051,113.084,-43.2249});
Group9.addChild(&PointLight33);

Scene8.addChild(&Group9);

X3D0.setScene(&Scene8);

}
