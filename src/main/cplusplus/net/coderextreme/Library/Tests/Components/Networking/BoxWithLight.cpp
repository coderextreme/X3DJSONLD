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
meta2.setContent(CString("Sun, 29 Jan 2023 22:00:06 GMT"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("comment"));
meta3.setContent(CString("Rise and Shine"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Sunrise X3D Editor V1.0.8, https://create3000.github.io/sunrise/"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("identifier"));
meta6.setContent(CString("file:///Volumes/Home/Projekte/Library/Tests/Components/Networking/BoxWithLight.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Sun, 29 Jan 2023 23:15:27 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Transform& Transform9 =  Transform();
Transform9.setDEF(CString("Box"));
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
Material& Material12 =  Material();
Appearance11.addChild(&Material12);

Shape10.addChild(&Appearance11);

Box& Box13 =  Box();
Shape10.setGeometry(&Box13);

Transform9.addChild(&Shape10);

Scene8.addChild(&Transform9);

Transform& Transform14 =  Transform();
Transform14.setDEF(CString("Plane"));
Transform14.setScale(new float[]{2,0.1,2});
Shape& Shape15 =  Shape();
Appearance& Appearance16 =  Appearance();
Material& Material17 =  Material();
Appearance16.addChild(&Material17);

Shape15.addChild(&Appearance16);

Box& Box18 =  Box();
Shape15.setGeometry(&Box18);

Transform14.addChild(&Shape15);

Scene8.addChild(&Transform14);

SpotLight& SpotLight19 =  SpotLight();
SpotLight19.setLocation(new float[]{4,4,0});
SpotLight19.setDirection(new float[]{-1,-1,0});
SpotLight19.setBeamWidth(0.3);
SpotLight19.setCutOffAngle(0.6);
SpotLight19.setShadows(True);
Scene8.addChild(&SpotLight19);

X3D0.setScene(&Scene8);

}
