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
component& component2 =  component();
component2.setName(CString("HAnim"));
component2.setLevel(1);
head1.addChild(&component2);

meta& meta3 =  meta();
meta3.setName(CString("title"));
meta3.setContent(CString("JohnJoint.x3d"));
head1.addMeta(&meta3);

meta& meta4 =  meta();
meta4.setName(CString("identifier"));
meta4.setContent(CString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("An attempt at a standard LOA-4 skeleton"));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("generator"));
meta6.setContent(CString("h6.pl"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("creator"));
meta7.setContent(CString("John Carlson"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("created"));
meta8.setContent(CString("12 January 2023"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("license"));
meta9.setContent(CString("../license.html"));
head1.addMeta(&meta9);

X3D0.setHead(&head1);

Scene& Scene10 =  Scene();
Transform& Transform11 =  Transform();
//DEF for markerfor XYZ axes
Shape& Shape12 =  Shape();
Shape12.setDEF(CString("AxisLinesShape"));
//RGB lines showing XYZ axes
IndexedLineSet& IndexedLineSet13 =  IndexedLineSet();
IndexedLineSet13.setColorIndex(new int[]{0,1,2}, 3);
IndexedLineSet13.setColorPerVertex(False);
IndexedLineSet13.setCoordIndex(new int32_t[]{0,1,-1,0,2,-1,0,3,-1}, 9);
Coordinate& Coordinate14 =  Coordinate();
Coordinate14.setPoint(new float[]{0,0,0,0.1,0,0,0,0.1,0,0,0,0.1}, 12);
IndexedLineSet13.setCoord(&Coordinate14);

CColor& Color15 =  CColor();
Color15.setColor(new float[]{1,0,0,0,0.6,0,0,0,1}, 9);
IndexedLineSet13.setColor(&Color15);

Shape12.setGeometry(&IndexedLineSet13);

Transform11.addChild(&Shape12);

Scene10.addChild(&Transform11);

Group& Group16 =  Group();
//DEFS for markers of skeleton joints, segments, and sites
Transform& Transform17 =  Transform();
//<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Transform& Transform18 =  Transform();
Transform18.setTranslation(new float[]{0,2.1,0});
Shape& Shape19 =  Shape();
Shape19.setDEF(CString("HAnimJointShape"));
Sphere& Sphere20 =  Sphere();
Sphere20.setRadius(0.02);
Shape19.setGeometry(&Sphere20);

Appearance& Appearance21 =  Appearance();
Material& Material22 =  Material();
Material22.setDEF(CString("HAnimJointMaterial"));
Material22.setDiffuseColor(new float[]{0,0,0.8});
Material22.setTransparency(0.3);
Appearance21.addChild(&Material22);

Shape19.addChild(&Appearance21);

Transform18.addChild(&Shape19);

Transform17.addChild(&Transform18);

Transform& Transform23 =  Transform();
Transform23.setTranslation(new float[]{0,2.05,0});
Shape& Shape24 =  Shape();
Shape24.setDEF(CString("HAnimSegmentLine"));
LineSet& LineSet25 =  LineSet();
LineSet25.setVertexCount(new int32_t[]{2}, 1);
ColorRGBA& ColorRGBA26 =  ColorRGBA();
ColorRGBA26.setDEF(CString("HAnimSegmentLineColorRGBA"));
ColorRGBA26.setColor(new float[]{1,1,0,1,1,1,0,0.1}, 8);
LineSet25.addChild(&ColorRGBA26);

Coordinate& Coordinate27 =  Coordinate();
Coordinate27.setPoint(new float[]{-0.05,0,0,0.05,0,0}, 6);
LineSet25.setCoord(Coordinate27);

Shape24.setGeometry(&LineSet25);

Transform23.addChild(&Shape24);

Transform17.addChild(&Transform23);

//<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>
Group16.addChild(&Transform17);

Scene10.addChild(&Group16);

NavigationInfo& NavigationInfo28 =  NavigationInfo();
NavigationInfo28.setSpeed(1.5);
Scene10.addChild(&NavigationInfo28);

Viewpoint& Viewpoint29 =  Viewpoint();
Viewpoint29.setDescription(CString("default"));
Scene10.addChild(&Viewpoint29);

X3D0.setScene(&Scene10);

}
