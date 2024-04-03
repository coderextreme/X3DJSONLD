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
meta2.setContent(CString("qq3.x3d"));
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
meta5.setContent(CString("11 Jan 2015"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("05 May 2017"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("description"));
meta7.setContent(CString("12 extrusions to test prototype expander"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("identifier"));
meta8.setContent(CString("https://coderextreme.net/x3d/qq3.x3d"));
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
Transform14.setScale(new float[3]{0.5,0.5,0.5});
Shape& Shape15 =  Shape();
Shape15.setDEF(CString("ShapeLeftDown"));
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Material17.setDiffuseColor(new float[3]{0.7,1,0});
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Extrusion& Extrusion18 =  Extrusion();
Extrusion18.setSpine(new float[6]{-2.5,0,0,-1.5,0,0}, 6);
Extrusion18.setCreaseAngle(0.785);
Extrusion18.setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Shape15.setGeometry(&Extrusion18);

Transform14.addChild(&Shape15);

Group13.addChild(&Transform14);

//right
Transform& Transform19 =  Transform();
Transform19.setScale(new float[3]{0.5,0.5,0.5});
Shape& Shape20 =  Shape();
Shape20.setDEF(CString("ShapeUpRight"));
Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDiffuseColor(new float[3]{0,0.7,1});
Appearance21.addChild(&Material22);

Shape20.addChild(&Appearance21);

Extrusion& Extrusion23 =  Extrusion();
Extrusion23.setSpine(new float[6]{1.5,0,0,2.5,0,0}, 6);
Extrusion23.setCreaseAngle(0.785);
Extrusion23.setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0}, 34);
Shape20.setGeometry(&Extrusion23);

Transform19.addChild(&Shape20);

Group13.addChild(&Transform19);

//up
Transform& Transform24 =  Transform();
Transform24.setScale(new float[3]{0.5,0.5,0.5});
Shape& Shape25 =  Shape();
Shape25.setUSE(CString("ShapeUpRight"));
Transform24.addChild(&Shape25);

Group13.addChild(&Transform24);

//down
Transform& Transform26 =  Transform();
Transform26.setScale(new float[3]{0.5,0.5,0.5});
Shape& Shape27 =  Shape();
Shape27.setUSE(CString("ShapeLeftDown"));
Transform26.addChild(&Shape27);

Group13.addChild(&Transform26);

ProtoBody12.addChild(&Group13);

ProtoDeclare11.addChild(&ProtoBody12);

Scene10.addChild(&ProtoDeclare11);

Viewpoint& Viewpoint28 =  Viewpoint();
Viewpoint28.setDescription(CString("Process pipes"));
Viewpoint28.setOrientation(new float[4]{1,0,0,-0.4});
Viewpoint28.setPosition(new float[3]{0,5,12});
Scene10.addChild(&Viewpoint28);

Transform& Transform29 =  Transform();
Transform29.setTranslation(new float[3]{0,-2.5,0});
ProtoInstance& ProtoInstance30 =  ProtoInstance();
ProtoInstance30.setName(CString("Process"));
Transform29.addChild(&ProtoInstance30);

Scene10.addChild(&Transform29);

Transform& Transform31 =  Transform();
ProtoInstance& ProtoInstance32 =  ProtoInstance();
ProtoInstance32.setName(CString("Process"));
Transform31.addChild(&ProtoInstance32);

Scene10.addChild(&Transform31);

Transform& Transform33 =  Transform();
Transform33.setTranslation(new float[3]{0,2.5,0});
ProtoInstance& ProtoInstance34 =  ProtoInstance();
ProtoInstance34.setName(CString("Process"));
Transform33.addChild(&ProtoInstance34);

Scene10.addChild(&Transform33);

X3D0.setScene(&Scene10);

}
