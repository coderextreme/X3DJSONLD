//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("3.0"));
head& head1 =  head();
meta& meta2 =  meta();
meta2.setName(CString("title"));
meta2.setContent(CString("GridXZ_20x20Fixed.x3d"));
head1.addMeta(&meta2);

meta& meta3 =  meta();
meta3.setName(CString("creator"));
meta3.setContent(CString("MV4204 class"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("created"));
meta4.setContent(CString("3 September 2000"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("modified"));
meta5.setContent(CString("28 November 2019"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("reference"));
meta6.setContent(CString("GridXY_20x20Fixed.x3d"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("reference"));
meta7.setContent(CString("GridYZ_20x20Fixed.x3d"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("description"));
meta8.setContent(CString("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("identifier"));
meta9.setContent(CString("https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("generator"));
meta10.setContent(CString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("license"));
meta11.setContent(CString("../../license.html"));
head1.addMeta(&meta11);

X3D0.setHead(&head1);

Scene& Scene12 =  Scene();
WorldInfo& WorldInfo13 =  WorldInfo();
WorldInfo13.setTitle(CString("GridXZ_20x20Fixed.x3d"));
Scene12.addChild(&WorldInfo13);

Viewpoint& Viewpoint14 =  Viewpoint();
Viewpoint14.setDescription(CString("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)"));
Viewpoint14.setOrientation(new float[]{1.0,0.0,0.0,-0.4});
Viewpoint14.setPosition(new float[]{0.0,10.0,25.0});
Scene12.addChild(&Viewpoint14);

Transform& Transform15 =  Transform();
Transform15.setDEF(CString("GridLocation"));
Group& Group16 =  Group();
Shape& Shape17 =  Shape();
Shape17.setDEF(CString("LinesAlignedAlongZ"));
IndexedLineSet& IndexedLineSet18 =  IndexedLineSet();
IndexedLineSet18.setColorIndex(new int[]{1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1}, 21);
IndexedLineSet18.setColorPerVertex(false);
IndexedLineSet18.setCoordIndex(new int32_t[]{1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1}, 63);
Coordinate& Coordinate19 =  Coordinate();
Coordinate19.setDEF(CString("EndPoints"));
Coordinate19.setPoint(new float[]{0.0,0.0,0.0,-10.0,0.0,10.0,-9.0,0.0,10.0,-8.0,0.0,10.0,-7.0,0.0,10.0,-6.0,0.0,10.0,-5.0,0.0,10.0,-4.0,0.0,10.0,-3.0,0.0,10.0,-2.0,0.0,10.0,-1.0,0.0,10.0,0.0,0.0,10.0,1.0,0.0,10.0,2.0,0.0,10.0,3.0,0.0,10.0,4.0,0.0,10.0,5.0,0.0,10.0,6.0,0.0,10.0,7.0,0.0,10.0,8.0,0.0,10.0,9.0,0.0,10.0,10.0,0.0,10.0,-10.0,0.0,-10.0,-9.0,0.0,-10.0,-8.0,0.0,-10.0,-7.0,0.0,-10.0,-6.0,0.0,-10.0,-5.0,0.0,-10.0,-4.0,0.0,-10.0,-3.0,0.0,-10.0,-2.0,0.0,-10.0,-1.0,0.0,-10.0,0.0,0.0,-10.0,1.0,0.0,-10.0,2.0,0.0,-10.0,3.0,0.0,-10.0,4.0,0.0,-10.0,5.0,0.0,-10.0,6.0,0.0,-10.0,7.0,0.0,-10.0,8.0,0.0,-10.0,9.0,0.0,-10.0,10.0,0.0,-10.0}, 129);
IndexedLineSet18.setCoord(&Coordinate19);

CColor& Color20 =  CColor();
Color20.setColor(new float[]{0.4,0.4,0.4,0.8,0.2,0.0,0.4,0.1,0.05}, 9);
IndexedLineSet18.setColor(&Color20);

Shape17.setGeometry(&IndexedLineSet18);

Group16.addChild(&Shape17);

Transform& Transform21 =  Transform();
Transform21.setDEF(CString("LinesAlignedAlongX"));
Transform21.setRotation(new float[]{0.0,1.0,0.0,1.57079});
Shape& Shape22 =  Shape();
Shape22.setUSE(CString("LinesAlignedAlongZ"));
Transform21.addChild(&Shape22);

Group16.addChild(&Transform21);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{0.0,-0.5,0.0});
Billboard& Billboard24 =  Billboard();
Shape& Shape25 =  Shape();
Text& Text26 =  Text();
Text26.setDEF(CString("CenterTextNode"));
Text26.setString(new CString[]{CString("origin")}, 1);
CFontStyle& FontStyle27 =  CFontStyle();
FontStyle27.setDEF(CString("FS4"));
FontStyle27.setJustify(new CString[]{CString("MIDDLE"), CString("MIDDLE")}, 2);
FontStyle27.setSize(0.4);
Text26.setFontStyle(&FontStyle27);

Shape25.setGeometry(&Text26);

Appearance& Appearance28 =  Appearance();
Appearance28.setDEF(CString("DefaultAppearance"));
Material& Material29 =  Material();
Appearance28.addChild(&Material29);

Shape25.addChild(&Appearance28);

Billboard24.addChild(&Shape25);

Transform23.addChild(&Billboard24);

Group16.addChild(&Transform23);

Transform& Transform30 =  Transform();
Transform30.setTranslation(new float[]{10.0,-0.5,10.0});
Billboard& Billboard31 =  Billboard();
Shape& Shape32 =  Shape();
Text& Text33 =  Text();
Text33.setString(new CString[]{CString("10 0 10")}, 1);
CFontStyle& FontStyle34 =  CFontStyle();
FontStyle34.setUSE(CString("FS4"));
Text33.setFontStyle(&FontStyle34);

Shape32.setGeometry(&Text33);

Appearance& Appearance35 =  Appearance();
Appearance35.setUSE(CString("DefaultAppearance"));
Shape32.addChild(&Appearance35);

Billboard31.addChild(&Shape32);

Transform30.addChild(&Billboard31);

Group16.addChild(&Transform30);

Transform& Transform36 =  Transform();
Transform36.setTranslation(new float[]{10.0,-0.5,-10.0});
Billboard& Billboard37 =  Billboard();
Shape& Shape38 =  Shape();
Text& Text39 =  Text();
Text39.setString(new CString[]{CString("10 0 -10")}, 1);
CFontStyle& FontStyle40 =  CFontStyle();
FontStyle40.setUSE(CString("FS4"));
Text39.setFontStyle(&FontStyle40);

Shape38.setGeometry(&Text39);

Appearance& Appearance41 =  Appearance();
Appearance41.setUSE(CString("DefaultAppearance"));
Shape38.addChild(&Appearance41);

Billboard37.addChild(&Shape38);

Transform36.addChild(&Billboard37);

Group16.addChild(&Transform36);

Transform& Transform42 =  Transform();
Transform42.setTranslation(new float[]{-10.0,-0.5,10.0});
Billboard& Billboard43 =  Billboard();
Shape& Shape44 =  Shape();
Text& Text45 =  Text();
Text45.setString(new CString[]{CString("-10 0 10")}, 1);
CFontStyle& FontStyle46 =  CFontStyle();
FontStyle46.setUSE(CString("FS4"));
Text45.setFontStyle(&FontStyle46);

Shape44.setGeometry(&Text45);

Appearance& Appearance47 =  Appearance();
Appearance47.setUSE(CString("DefaultAppearance"));
Shape44.addChild(&Appearance47);

Billboard43.addChild(&Shape44);

Transform42.addChild(&Billboard43);

Group16.addChild(&Transform42);

Transform& Transform48 =  Transform();
Transform48.setTranslation(new float[]{-10.0,-0.5,-10.0});
Billboard& Billboard49 =  Billboard();
Shape& Shape50 =  Shape();
Text& Text51 =  Text();
Text51.setString(new CString[]{CString("-10 0 -10")}, 1);
CFontStyle& FontStyle52 =  CFontStyle();
FontStyle52.setUSE(CString("FS4"));
Text51.setFontStyle(&FontStyle52);

Shape50.setGeometry(&Text51);

Appearance& Appearance53 =  Appearance();
Appearance53.setUSE(CString("DefaultAppearance"));
Shape50.addChild(&Appearance53);

Billboard49.addChild(&Shape50);

Transform48.addChild(&Billboard49);

Group16.addChild(&Transform48);

Transform15.addChild(&Group16);

Scene12.addChild(&Transform15);

X3D0.setScene(&Scene12);

//}
