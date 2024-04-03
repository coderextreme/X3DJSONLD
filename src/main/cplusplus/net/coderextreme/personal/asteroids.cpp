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
meta2.setContent(CString("asteroids.x3d"));
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
meta5.setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/asteroids.x3d"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("description"));
meta6.setContent(CString("asteroids"));
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

ProtoInstance& ProtoInstance17 =  ProtoInstance();
ProtoInstance17.setName(CString("anyShape"));
Scene7.addChild(&ProtoInstance17);

X3D0.setScene(&Scene7);

}
