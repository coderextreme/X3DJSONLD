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
component& component2 =  component();
component2.setName(CString("Text"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("created"));
meta3.setContent(CString("Tue, 19 Sep 2023 18:19:25 GMT"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("comment"));
meta4.setContent(CString("Rise and Shine"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("creator"));
meta5.setContent(CString("Holger Seelig"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("Sunrize X3D Editor V1.1.2, https://create3000.github.io/sunrize/"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("Tue, 19 Sep 2023 19:38:18 GMT"));
head1.addMeta(&meta7);

X3D0.setHead(&head1);

Scene& Scene8 =  Scene();
Transform& Transform9 =  Transform();
Transform9.setDEF(CString("Text"));
Shape& Shape10 =  Shape();
Shape10.setDEF(CString("_1"));
Appearance& Appearance11 =  Appearance();
Material& Material12 =  Material();
Appearance11.addChild(&Material12);

Shape10.addChild(&Appearance11);

Text& Text13 =  Text();
Text13.setString(new CString[]{CString("3D Text")}, 1);
Text13.setSolid(true);
Shape10.setGeometry(&Text13);

Transform9.addChild(&Shape10);

Scene8.addChild(&Transform9);

Transform& Transform14 =  Transform();
Transform14.setDEF(CString("MirroredText"));
Transform14.setScale(new float[]{1.0,-1.0,1.0});
Shape& Shape15 =  Shape();
Shape15.setUSE(CString("_1"));
Transform14.addChild(&Shape15);

Scene8.addChild(&Transform14);

Transform& Transform16 =  Transform();
Transform16.setDEF(CString("Tree"));
Transform16.setTranslation(new float[]{-2.0,2.0,0.0});
Shape& Shape17 =  Shape();
Shape17.setDEF(CString("_2"));
Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Appearance18.addChild(&Material19);

Shape17.addChild(&Appearance18);

IndexedFaceSet& IndexedFaceSet20 =  IndexedFaceSet();
IndexedFaceSet20.setCreaseAngle(1.55176);
IndexedFaceSet20.setColorIndex(new int[]{1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,1,0,0,-1,0,3,0,0,-1,0,0,3,0,-1,0,3,0,0,-1,0,0,0,0,-1,0,0,3,0,-1,0,3,0,0,-1,0,0,3,0,-1,3,0,3,0,-1,0,3,0,3,-1,3,0,2,0,-1,0,2,0,0,-1,0,0,0,3,-1,3,0,0,0,-1,0,0,0,3,-1,0,1,0,3,-1,3,0,0,0,-1,0,0,0,2,-1,2,0,0,0,-1,0,0,1,0,-1,0,1,0,0,-1,0,0,1,0,-1,1,0,0,0,-1,0,0,1,0,-1,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,-1,1,0,0,0,-1,0,0,0,1,-1,0,0,0,0,-1,0,0,0,1,-1,1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,0,1,0,-1,5,4,4,6,-1,6,4,4,5,-1,6,4,4,6,-1,6,4,4,6,-1,6,4,4,5,-1,5,4,4,6,-1,5,4,4,4,-1,4,4,4,5,-1,4,4,4,5,-1,5,4,4,4,-1}, 281);
IndexedFaceSet20.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,1,-1,1,8,9,2,-1,2,9,10,3,-1,3,10,11,4,-1,4,11,12,5,-1,5,12,13,6,-1,6,13,14,7,-1,7,14,8,1,-1,8,15,16,9,-1,9,16,17,10,-1,10,17,18,11,-1,11,18,19,12,-1,12,19,20,13,-1,13,20,21,14,-1,14,21,15,8,-1,15,22,23,16,-1,16,23,24,17,-1,17,24,25,18,-1,18,25,26,19,-1,19,26,27,20,-1,20,27,28,21,-1,21,28,22,15,-1,22,29,30,23,-1,23,30,31,24,-1,24,31,32,25,-1,25,32,33,26,-1,26,33,34,27,-1,27,34,35,28,-1,28,35,29,22,-1,29,36,37,30,-1,30,37,38,31,-1,31,38,39,32,-1,32,39,40,33,-1,33,40,41,34,-1,34,41,42,35,-1,35,42,36,29,-1,36,43,37,-1,37,43,38,-1,38,43,39,-1,39,43,40,-1,40,43,41,-1,41,43,42,-1,42,43,36,-1,54,53,52,55,-1,55,45,44,54,-1,55,52,51,56,-1,56,46,45,55,-1,56,51,50,57,-1,57,47,46,56,-1,57,50,49,58,-1,58,48,47,57,-1,58,49,53,54,-1,54,44,48,58,-1}, 281);
CColor& Color21 =  CColor();
Color21.setColor(new float[]{0.0,0.501961,0.0,0.00574465,0.328945,0.00574465,0.0,0.617129,0.0,0.257502,0.65123,0.257502,0.388051,0.308639,0.233508,0.59,0.464167,0.340148,0.17,0.128257,0.0888773}, 21);
IndexedFaceSet20.setColor(&Color21);

Coordinate& Coordinate22 =  Coordinate();
Coordinate22.setPoint(new float[]{0.0,1.0,0.0,0.0,0.900969,-0.433884,-0.339224,0.900969,-0.270522,-0.423005,0.900969,0.0965482,-0.188255,0.926492,0.390916,0.188255,0.900969,0.390916,0.423005,0.900969,0.0965482,0.339224,0.900969,-0.270522,0.0,0.62349,-0.458553,-0.61126,0.62349,-0.487464,-0.762229,0.62349,0.173974,-0.339224,0.62349,0.524921,0.252635,0.62349,0.545573,0.584954,0.62349,0.103058,0.45663,0.62349,-0.360782,0.0,0.222521,-0.674149,-0.604653,0.222521,-0.445343,-0.741454,0.222521,0.216942,-0.278998,0.222521,0.650983,0.260511,0.222521,0.697119,0.650417,0.222521,0.216942,0.535279,0.222521,-0.394893,0.0,-0.222521,-0.729315,-0.619629,-0.222521,-0.415943,-0.602962,-0.222521,0.216942,-0.423005,-0.222521,0.700375,0.423005,-0.222521,0.628618,0.636888,-0.222521,0.216942,0.537947,-0.222521,-0.365751,0.0,-0.62349,-0.464764,-0.43454,-0.62349,-0.237222,-0.537292,-0.62349,0.173974,-0.213249,-0.62349,0.539167,0.339224,-0.62349,0.560788,0.411351,-0.62349,0.173974,0.364294,-0.62349,-0.238095,0.0,-0.900969,-0.32049,-0.339224,-0.900969,-0.21044,-0.337934,-0.900969,0.0965482,-0.188255,-0.900969,0.390916,0.188255,-0.900969,0.344821,0.215988,-0.900969,0.0965482,0.232303,-0.900969,-0.241411,0.0,-1.0,0.0,-0.0371049,-0.845094,-0.0449235,-0.0814127,-0.845094,-0.0116943,-0.0644886,-0.845094,0.0420716,-0.00972112,-0.845094,0.0420716,0.00720302,-0.845094,-0.0116943,0.182894,-2.08113,-0.0332549,0.194474,-2.08113,0.224828,-0.121986,-2.08113,0.207521,-0.174446,-2.08113,-0.0332549,-0.0371049,-2.08113,-0.162505,-0.0371049,-1.43185,-0.1489,-0.174446,-1.40082,-0.0332549,-0.0668762,-1.43215,0.0872304,0.0947064,-1.48254,0.127517,0.100237,-1.48236,-0.0332549}, 177);
IndexedFaceSet20.setCoord(&Coordinate22);

Shape17.setGeometry(&IndexedFaceSet20);

Transform16.addChild(&Shape17);

Scene8.addChild(&Transform16);

Transform& Transform23 =  Transform();
Transform23.setDEF(CString("MirroredTree"));
Transform23.setTranslation(new float[]{-2.0,-2.0,0.0});
Transform23.setScale(new float[]{1.0,-1.0,1.0});
Shape& Shape24 =  Shape();
Shape24.setUSE(CString("_2"));
Transform23.addChild(&Shape24);

Scene8.addChild(&Transform23);

X3D0.setScene(&Scene8);

//}
