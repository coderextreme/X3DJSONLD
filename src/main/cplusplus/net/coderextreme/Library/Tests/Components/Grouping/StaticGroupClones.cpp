#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("created"));
meta2.setContent(CString("Tue, 27 Aug 2024 20:45:48 GMT"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("Holger Seelig"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("Sunrize X3D Editor V1.7.15, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("Tue, 27 Aug 2024 20:51:25 GMT"));
head1.addMeta(&meta5);

X3D0.setHead(&head1);

Scene& Scene6 =  Scene();
WorldInfo& WorldInfo7 =  WorldInfo();
MetadataSet& MetadataSet8 =  MetadataSet();
MetadataSet8.X3DNode::setName(CString("Sunrize"));
MetadataSet8.X3DNode::setReference(CString("https://create3000.github.io/sunrize/"));
MetadataSet& MetadataSet9 =  MetadataSet();
MetadataSet9.X3DNode::setName(CString("GridTool"));
MetadataBoolean& MetadataBoolean10 =  MetadataBoolean();
MetadataBoolean10.X3DNode::setName(CString("visible"));
MetadataBoolean10.setValue(new boolean[]{True});
MetadataSet9.setValue((X3DNode *)&MetadataBoolean10);

MetadataSet8.setValue((X3DNode *)&MetadataSet9);

WorldInfo7.setMetadata(&MetadataSet8);

Scene6.addChild(&WorldInfo7);

Viewpoint& Viewpoint11 =  Viewpoint();
Viewpoint11.setDescription(CString("Initial View"));
Scene6.addChild(&Viewpoint11);

StaticGroup& StaticGroup12 =  StaticGroup();
Group& Group13 =  Group();
Group13.setDEF(CString("Clones"));
Transform& Transform14 =  Transform();
Transform14.setDEF(CString("Sphere_1"));
Transform14.setTranslation(new float[]{-3,0,0});
Shape& Shape15 =  Shape();
Shape15.setDEF(CString("_1"));
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setDiffuseColor(new float[]{0.8,0,0});
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Sphere& Sphere18 =  Sphere();
Shape15.setGeometry(&Sphere18);

Transform14.addChild(&Shape15);

Group13.addChild(&Transform14);

Transform& Transform19 =  Transform();
Transform19.setDEF(CString("Sphere_2"));
Transform19.setTranslation(new float[]{-1,0,0});
Shape& Shape20 =  Shape();
Shape20.setUSE(CString("_1"));
Transform19.addChild(&Shape20);

Group13.addChild(&Transform19);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("Sphere_3"));
Transform21.setTranslation(new float[]{1,0,0});
Shape& Shape22 =  Shape();
Shape22.setUSE(CString("_1"));
Transform21.addChild(&Shape22);

Group13.addChild(&Transform21);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("Sphere_4"));
Transform23.setTranslation(new float[]{3,0,0});
Shape& Shape24 =  Shape();
Shape24.setUSE(CString("_1"));
Transform23.addChild(&Shape24);

Group13.addChild(&Transform23);

StaticGroup12.addChildren(&Group13);

Group& Group25 =  Group();
Transform& Transform26 =  Transform();
Transform26.setDEF(CString("Sphere_5"));
Transform26.setTranslation(new float[]{-3,-2,0});
Shape& Shape27 =  Shape();
Appearance& Appearance28 =  Appearance();
Appearance28.setDEF(CString("_2"));
Material& Material29 =  Material();
Material29.setDiffuseColor(new float[]{1,0.8509804,0.4});
Appearance28.addChild(&Material29);

Shape27.addChild(&Appearance28);

Sphere& Sphere30 =  Sphere();
Shape27.setGeometry(&Sphere30);

Transform26.addChild(&Shape27);

Group25.addChild(&Transform26);

Transform& Transform31 =  Transform();
Transform31.setDEF(CString("Sphere_6"));
Transform31.setTranslation(new float[]{-1,-2,0});
Shape& Shape32 =  Shape();
Appearance& Appearance33 =  Appearance();
Appearance33.setUSE(CString("_2"));
Shape32.addChild(&Appearance33);

Sphere& Sphere34 =  Sphere();
Shape32.setGeometry(&Sphere34);

Transform31.addChild(&Shape32);

Group25.addChild(&Transform31);

Transform& Transform35 =  Transform();
Transform35.setDEF(CString("Sphere_7"));
Transform35.setTranslation(new float[]{1,-2,0});
Shape& Shape36 =  Shape();
Appearance& Appearance37 =  Appearance();
Appearance37.setUSE(CString("_2"));
Shape36.addChild(&Appearance37);

Sphere& Sphere38 =  Sphere();
Shape36.setGeometry(&Sphere38);

Transform35.addChild(&Shape36);

Group25.addChild(&Transform35);

Transform& Transform39 =  Transform();
Transform39.setDEF(CString("Sphere"));
Transform39.setTranslation(new float[]{3,-2,0});
Shape& Shape40 =  Shape();
Appearance& Appearance41 =  Appearance();
Appearance41.setUSE(CString("_2"));
Shape40.addChild(&Appearance41);

Sphere& Sphere42 =  Sphere();
Shape40.setGeometry(&Sphere42);

Transform39.addChild(&Shape40);

Group25.addChild(&Transform39);

StaticGroup12.addChildren(&Group25);

Scene6.addChild(&StaticGroup12);

Background& Background43 =  Background();
Background43.setDEF(CString("Gray"));
Background43.setSkyColor(new float[]{0.2,0.2,0.2}, 3);
Scene6.addChild(&Background43);

X3D0.setScene(&Scene6);

}
