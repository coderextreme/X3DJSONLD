//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/pch.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/IndexedFaceSetExample/framework.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/glut.h"
//#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter06/IndexedFaceSetExample/include/X3DLib.h"
//int main(int argc, char ** argv) 
//{
X3D& X3D0 =  X3D();
X3D0.setProfile(CString("Immersive"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("IFS.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/IFS.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("h2.pl"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("modified"));
meta7.setContent(CString("18 Jan 2023"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("creator"));
meta8.setContent(CString("John Carlson"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("created"));
meta9.setContent(CString("9 November 2020"));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("license"));
meta10.setContent(CString("../license.html"));
head1.addMeta(&meta10);

X3D0.setHead(&head1);

Scene& Scene11 =  Scene();
Group& Group12 =  Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform& Transform13 =  Transform();
Transform13.setTranslation(new float[]{0.0,2.1,0.0});
Shape& Shape14 =  Shape();
Shape14.setDEF(CString("HAnimSiteShape"));
IndexedFaceSet& IndexedFaceSet15 =  IndexedFaceSet();
IndexedFaceSet15.setDEF(CString("DiamondIFS"));
IndexedFaceSet15.setCreaseAngle(0.5);
IndexedFaceSet15.setSolid(false);
IndexedFaceSet15.setCoordIndex(new int32_t[]{0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1}, 32);
ColorRGBA& ColorRGBA16 =  ColorRGBA();
ColorRGBA16.setDEF(CString("HAnimSiteColorRGBA"));
ColorRGBA16.setColor(new float[]{1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1}, 8);
IndexedFaceSet15.addChild(&ColorRGBA16);

Coordinate& Coordinate17 =  Coordinate();
Coordinate17.setPoint(new float[]{0.0,0.01,0.0,-0.01,0.0,0.0,0.0,0.0,0.01,0.01,0.0,0.0,0.0,0.0,-0.01,0.0,-0.01,0.0}, 18);
IndexedFaceSet15.setCoord(&Coordinate17);

Shape14.setGeometry(&IndexedFaceSet15);

Appearance& Appearance18 =  Appearance();
Material& Material19 =  Material();
Material19.setDiffuseColor(new float[]{1.0,1.0,0.0});
Material19.setTransparency(0.3);
Appearance18.addChild(&Material19);

Shape14.addChild(&Appearance18);

Transform13.addChild(&Shape14);

Group12.addChild(&Transform13);

Scene11.addChild(&Group12);

NavigationInfo& NavigationInfo20 =  NavigationInfo();
NavigationInfo20.setSpeed(1.5);
Scene11.addChild(&NavigationInfo20);

Viewpoint& Viewpoint21 =  Viewpoint();
Viewpoint21.setDescription(CString("default"));
Scene11.addChild(&Viewpoint21);

X3D0.setScene(&Scene11);

//}
