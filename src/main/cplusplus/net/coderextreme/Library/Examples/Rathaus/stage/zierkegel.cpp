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
meta3.setContent(CString("Sun, 15 Mar 2015 09:37:03 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("creator"));
meta4.setContent(CString("Holger Seelig"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("generator"));
meta5.setContent(CString("Titania V0.7.6, http://titania.create3000.de"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("modified"));
meta6.setContent(CString("Sun, 15 Mar 2015 09:37:03 GMT"));
head1.addMeta(&meta6);

X3D0.setHead(&head1);

Scene& Scene7 =  Scene();
WorldInfo& WorldInfo8 =  WorldInfo();
WorldInfo8.setInfo(new CString[]{CString(", "), CString("Created in TitaniaPackaged by CosmoPackage")}, 2);
Scene7.addChild(&WorldInfo8);

Transform& Transform9 =  Transform();
Transform9.setDEF(CString("zierkegel"));
Shape& Shape10 =  Shape();
Appearance& Appearance11 =  Appearance();
Material& Material12 =  Material();
Material12.setAmbientIntensity(0.341818);
Material12.setDiffuseColor(new float[]{0.585106,0.0214792,0});
Appearance11.addChild(&Material12);

Shape10.addChild(&Appearance11);

IndexedFaceSet& IndexedFaceSet13 =  IndexedFaceSet();
IndexedFaceSet13.setDEF(CString("polySurface98_0Geo"));
IndexedFaceSet13.setConvex(False);
IndexedFaceSet13.setCreaseAngle(1.76331);
IndexedFaceSet13.setCoordIndex(new int32_t[]{11,12,2,6,-1,8,9,4,5,-1,8,5,3,7,-1,6,8,7,0,-1,8,6,2,9,-1,11,6,0,10,-1,5,11,10,3,-1,11,5,4,12,-1,14,13,4,9,-1,1,14,9,2,-1,15,1,2,12,-1,13,15,12,4,-1,20,27,26,-1,19,27,21,-1,23,16,18,-1,23,18,17,-1,16,19,21,18,-1,21,20,17,18,-1,27,20,21,-1,23,17,24,-1,23,22,16,-1,23,24,22,-1,27,19,25,-1,19,16,22,25,-1,17,20,26,24,-1,26,25,22,24,-1,27,25,26,-1}, 125);
Coordinate& Coordinate14 =  Coordinate();
Coordinate14.setDEF(CString("polySurface98GeoPoints"));
Coordinate14.setPoint(new float[]{-0.696,6.076,-7.18,-0.671,6.225,-7.142,-0.727,6.149,-7.227,-0.568,6.076,-7.051,-0.537,6.149,-7.004,-0.537,6.114,-7.004,-0.727,6.114,-7.227,-0.568,6.076,-7.18,-0.537,6.114,-7.227,-0.537,6.149,-7.227,-0.696,6.076,-7.052,-0.727,6.114,-7.004,-0.727,6.149,-7.004,-0.593,6.225,-7.089,-0.593,6.225,-7.142,-0.671,6.225,-7.089,-0.577,6.374,-7.167,-0.706,6.374,-7.113,-0.662,6.374,-7.211,-0.577,6.278,-7.167,-0.706,6.278,-7.113,-0.662,6.278,-7.211,-0.577,6.374,-7.058,-0.636,6.433,-7.113,-0.663,6.374,-7.014,-0.577,6.278,-7.058,-0.663,6.278,-7.014,-0.636,6.219,-7.113}, 84);
IndexedFaceSet13.setCoord(&Coordinate14);

Shape10.setGeometry(&IndexedFaceSet13);

Transform9.addChild(&Shape10);

Scene7.addChild(&Transform9);

X3D0.setScene(&Scene7);

}
