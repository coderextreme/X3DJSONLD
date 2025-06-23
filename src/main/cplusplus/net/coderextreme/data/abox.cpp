#ifndef WIN32
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#define WINGDIAPI
#define APIENTRY
#endif
#define FALSE false
#define TRUE true
#define BOOL bool
#define False false
#define True true
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
#include "C:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
int main(int argc, char ** argv) {
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("abox.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("John Carlson"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("generator"));
meta4.setContent(CString("manual"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("identifier"));
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/abox.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("a box"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
ProtoDeclare& ProtoDeclare8 =  ProtoDeclare();
ProtoDeclare8.setName(CString("anyShape"));
ProtoInterface& ProtoInterface9 =  ProtoInterface();
field& field10 =  field();
field10.setName(CString("myShape"));
field10.setAccessType(CString("inputOutput"));
field10.setType(CString("MFNode"));
Shape& Shape11 =  Shape();
Sphere& Sphere12 =  Sphere();
Shape11.setGeometry(&Sphere12);

field10.addChild(&Shape11);

ProtoInterface9.addChild(&field10);

ProtoDeclare8.addChild(&ProtoInterface9);

ProtoBody& ProtoBody13 =  ProtoBody();
Transform& Transform14 =  Transform();
IS& IS15 =  IS();
Connect& connect16 =  Connect();
connect16.setNodeField(CString("children"));
connect16.setProtoField(CString("myShape"));
IS15.addChild(&connect16);

Transform14.addChild(&IS15);

ProtoBody13.addChild(&Transform14);

ProtoDeclare8.addChild(&ProtoBody13);

Scene7.addChild(&ProtoDeclare8);

ProtoDeclare& ProtoDeclare17 =  ProtoDeclare();
ProtoDeclare17.setName(CString("one"));
ProtoInterface& ProtoInterface18 =  ProtoInterface();
field& field19 =  field();
field19.setName(CString("myShape"));
field19.setAccessType(CString("inputOutput"));
field19.setType(CString("MFNode"));
Shape& Shape20 =  Shape();
Cylinder& Cylinder21 =  Cylinder();
Shape20.setGeometry(&Cylinder21);

field19.addChild(&Shape20);

ProtoInterface18.addChild(&field19);

ProtoDeclare17.addChild(&ProtoInterface18);

ProtoBody& ProtoBody22 =  ProtoBody();
Transform& Transform23 =  Transform();
ProtoInstance& ProtoInstance24 =  ProtoInstance();
ProtoInstance24.setName(CString("anyShape"));
IS& IS25 =  IS();
Connect& connect26 =  Connect();
connect26.setNodeField(CString("myShape"));
connect26.setProtoField(CString("myShape"));
IS25.addChild(&connect26);

ProtoInstance24.addChild(&IS25);

Transform23.addChild(&ProtoInstance24);

ProtoBody22.addChild(&Transform23);

ProtoDeclare17.addChild(&ProtoBody22);

Scene7.addChild(&ProtoDeclare17);

ProtoInstance& ProtoInstance27 =  ProtoInstance();
ProtoInstance27.setName(CString("one"));
fieldValue& fieldValue28 =  fieldValue();
fieldValue28.setName(CString("myShape"));
Shape& Shape29 =  Shape();
Box& Box30 =  Box();
Box30.setSize(new float[]{140,140,140});
Shape29.setGeometry(&Box30);

fieldValue28.addChild(&Shape29);

ProtoInstance27.addChild(&fieldValue28);

Scene7.addChild(&ProtoInstance27);

X3D0.setScene(&Scene7);

}
