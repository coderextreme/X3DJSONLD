//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Interchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("ifscubeworks.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("identifier"));
meta3.setContent(CString("http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("description"));
meta4.setContent(CString("Template for an Indexed Face Set"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("John Carlson"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("created"));
meta6.setContent(CString("4 April 2017"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("license"));
meta7.setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("generator"));
meta8.setContent(CString("X3D-Edit, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta8);

X3D0.setHead(&head1);

Scene& Scene9 =  Scene();
WorldInfo& WorldInfo10 =  WorldInfo();
WorldInfo10.setTitle(CString("ifscubeworks.x3d"));
Scene9.addChild(&WorldInfo10);

Group& Group11 =  Group();
Shape& Shape12 =  Shape();
IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setDEF(CString("IndexedFaceSet"));
IndexedFaceSet13.setCoordIndex(new int32_t[]{0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1}, 33);
IndexedFaceSet13.setNormalIndex(new int32_t[]{0,0,1,2,3,4,5}, 7);
IndexedFaceSet13.setNormalPerVertex(false);
IndexedFaceSet13.setColorIndex(new int[]{0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1}, 33);
Coordinate& Coordinate14 =  Coordinate();
Coordinate14.setPoint(new float[]{0.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,1.0}, 12);
IndexedFaceSet13.setCoord(&Coordinate14);

Normal& Normal15 =  Normal();
Normal15.setVector(new float[]{1.0,0.0,0.0,-1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,-1.0,0.0,0.0,0.0,1.0}, 18);
IndexedFaceSet13.setNormal(&Normal15);

CColor& Color16 =  CColor();
Color16.setColor(new float[]{0.0,1.0,0.0}, 3);
IndexedFaceSet13.setColor(&Color16);

Shape12.setGeometry(&IndexedFaceSet13);

Group11.addChild(&Shape12);

Scene9.addChild(&Group11);

X3D0.setScene(&Scene9);

//}
