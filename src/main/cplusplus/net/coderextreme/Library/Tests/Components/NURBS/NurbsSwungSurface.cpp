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
component& component2 =  component();
component2.setName(CString("NURBS"));
component2.setLevel(4);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("Rise and Shine"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("Tue, 15 Jan 2019 12:51:59 GMT"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V1.2.7, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("identifier"));
meta7.setContent(CString("file:///home/holger/Projekte/Library/Tests/Components/NURBS/NurbsSwungSurface.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("modified"));
meta8.setContent(CString("Thu, 30 Nov 2023 09:28:15 GMT"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
Transform& Transform10 =  Transform();
Transform10.setDEF(CString("NurbsSwungSurface"));
Shape& Shape11 =  Shape();
Appearance& Appearance12 =  Appearance();
Material& Material13 =  Material();
Appearance12.addChild(&Material13);

Shape11.addChild(&Appearance12);

NurbsSwungSurface& NurbsSwungSurface14 =  NurbsSwungSurface();
NurbsSwungSurface14.setCcw(False);
NurbsCurve2D& NurbsCurve2D15 =  NurbsCurve2D();
NurbsCurve2D15.setTessellation(50);
NurbsCurve2D15.setClosed(True);
NurbsCurve2D15.setOrder(4);
NurbsCurve2D15.setControlPoint(new double[]{0,0,1,0,1,1,0,1,0,0}, 10);
NurbsSwungSurface14.setProfileCurve(NurbsCurve2D15);

NurbsCurve2D& NurbsCurve2D16 =  NurbsCurve2D();
NurbsCurve2D16.setTessellation(50);
NurbsCurve2D16.setClosed(True);
NurbsCurve2D16.setOrder(4);
NurbsCurve2D16.setControlPoint(new double[]{0,0,1,0,1,1,0,1,0,0}, 10);
NurbsSwungSurface14.setTrajectoryCurve(NurbsCurve2D16);

Shape11.setGeometry(NurbsSwungSurface14);

Transform10.addChild(&Shape11);

Scene9.addChild(&Transform10);

X3D0.setScene(&Scene9);

}
