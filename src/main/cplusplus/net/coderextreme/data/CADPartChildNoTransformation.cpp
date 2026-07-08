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
X3D0.setProfile(CString("CADInterchange"));
X3D0.setVersion(CString("4.0"));
head& head1 =  head();
component& component2 =  component();
component2.setName(CString("CADGeometry"));
component2.setLevel(2);
head1.addChild(&component2);

component& component3 =  component();
component3.setName(CString("EnvironmentalEffects"));
component3.setLevel(1);
head1.addChild(&component3);

meta& meta4 =  meta();
meta4.setName(CString("title"));
meta4.setContent(CString("CADPartChildNoTransformation.x3d"));
head1.addMeta(&meta4);

meta& meta5 =  meta();
meta5.setName(CString("description"));
meta5.setContent(CString("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."));
head1.addMeta(&meta5);

meta& meta6 =  meta();
meta6.setName(CString("creator"));
meta6.setContent(CString("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"));
head1.addMeta(&meta6);

meta& meta7 =  meta();
meta7.setName(CString("translator"));
meta7.setContent(CString("Vince Marchetti bushing generation using python scripts"));
head1.addMeta(&meta7);

meta& meta8 =  meta();
meta8.setName(CString("reference"));
meta8.setContent(CString("https://www.web3d.org/member-only/mantis/view.php?id=528"));
head1.addMeta(&meta8);

meta& meta9 =  meta();
meta9.setName(CString("warning"));
meta9.setContent(CString("This scene is intended for specification development only."));
head1.addMeta(&meta9);

meta& meta10 =  meta();
meta10.setName(CString("created"));
meta10.setContent(CString("29 June 2012"));
head1.addMeta(&meta10);

meta& meta11 =  meta();
meta11.setName(CString("modified"));
meta11.setContent(CString("20 October 2019"));
head1.addMeta(&meta11);

meta& meta12 =  meta();
meta12.setName(CString("identifier"));
meta12.setContent(CString("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"));
head1.addMeta(&meta12);

meta& meta13 =  meta();
meta13.setName(CString("generator"));
meta13.setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1.addMeta(&meta13);

meta& meta14 =  meta();
meta14.setName(CString("license"));
meta14.setContent(CString("../license.html"));
head1.addMeta(&meta14);

X3D0.setHead(&head1);

Scene& Scene15 =  Scene();
WorldInfo& WorldInfo16 =  WorldInfo();
WorldInfo16.setTitle(CString("CADPartChildNoTransformation.x3d"));
Scene15.addChild(&WorldInfo16);

Background& Background17 =  Background();
Background17.setSkyColor(new float[]{0.9607843,1,0.9607843}, 3);
Scene15.addChild(&Background17);

Viewpoint& Viewpoint18 =  Viewpoint();
Viewpoint18.setDescription(CString("Hello CAD bushing"));
Viewpoint18.setOrientation(new float[]{1,0,0,-0.321751});
Viewpoint18.setPosition(new float[]{0,5,15});
Scene15.addChild(&Viewpoint18);

CADAssembly& CADAssembly19 =  CADAssembly();
CADAssembly19.X3DNode::setName(CString("DesignPatternAssembly"));
CADPart& CADPart20 =  CADPart();
CADPart20.X3DNode::setName(CString("CADPartExample"));
//the rotation and translation attributes serve to position the bushing within the assembly
CADFace& CADFace21 =  CADFace();
CADFace21.X3DNode::setName(CString("outerSurface"));
Shape& Shape22 =  Shape();
//note solid='true' and so one-sided external rendering only
Cylinder& Cylinder23 =  Cylinder();
Cylinder23.setBottom(False);
Cylinder23.setHeight(3);
Cylinder23.setRadius(2);
Cylinder23.setTop(False);
Shape22.setGeometry(&Cylinder23);

Appearance& Appearance24 =  Appearance();
Appearance24.setDEF(CString("AppearanceGrey"));
Material& Material25 =  Material();
Appearance24.addChild(&Material25);

Shape22.addChild(&Appearance24);

CADFace21.setShape(Shape22);

CADPart20.addChildren(CADFace21);

CADFace& CADFace26 =  CADFace();
CADFace26.X3DNode::setName(CString("innerSurface"));
Shape& Shape27 =  Shape();
//note solid='false' and so two-sided internal + external rendering
Cylinder& Cylinder28 =  Cylinder();
Cylinder28.setBottom(False);
Cylinder28.setHeight(3);
Cylinder28.setSolid(False);
Cylinder28.setTop(False);
Shape27.setGeometry(&Cylinder28);

Appearance& Appearance29 =  Appearance();
Appearance29.setUSE(CString("AppearanceGrey"));
Shape27.addChild(&Appearance29);

CADFace26.setShape(Shape27);

CADPart20.addChildren(CADFace26);

CADFace& CADFace30 =  CADFace();
CADFace30.X3DNode::setName(CString("topCap"));
Shape& Shape31 =  Shape();
IndexedTriangleSet& IndexedTriangleSet32 =  IndexedTriangleSet();
IndexedTriangleSet32.setIndex(new int32_t[]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65}, 192);
Coordinate& Coordinate33 =  Coordinate();
Coordinate33.setPoint(new float[]{2,1.5,0,1,1.5,0,1.9616,1.5,0.3902,0.9808,1.5,0.1951,1.8478,1.5,0.7654,0.9239,1.5,0.3827,1.6629,1.5,1.1111,0.8315,1.5,0.5556,1.4142,1.5,1.4142,0.7071,1.5,0.7071,1.1111,1.5,1.6629,0.5556,1.5,0.8315,0.7654,1.5,1.8478,0.3827,1.5,0.9239,0.3902,1.5,1.9616,0.1951,1.5,0.9808,0,1.5,2,0,1.5,1,-0.3902,1.5,1.9616,-0.1951,1.5,0.9808,-0.7654,1.5,1.8478,-0.3827,1.5,0.9239,-1.1111,1.5,1.6629,-0.5556,1.5,0.8315,-1.4142,1.5,1.4142,-0.7071,1.5,0.7071,-1.6629,1.5,1.1111,-0.8315,1.5,0.5556,-1.8478,1.5,0.7654,-0.9239,1.5,0.3827,-1.9616,1.5,0.3902,-0.9808,1.5,0.1951,-2,1.5,0,-1,1.5,0,-1.9616,1.5,-0.3902,-0.9808,1.5,-0.1951,-1.8478,1.5,-0.7654,-0.9239,1.5,-0.3827,-1.6629,1.5,-1.1111,-0.8315,1.5,-0.5556,-1.4142,1.5,-1.4142,-0.7071,1.5,-0.7071,-1.1111,1.5,-1.6629,-0.5556,1.5,-0.8315,-0.7654,1.5,-1.8478,-0.3827,1.5,-0.9239,-0.3902,1.5,-1.9616,-0.1951,1.5,-0.9808,0,1.5,-2,0,1.5,-1,0.3902,1.5,-1.9616,0.1951,1.5,-0.9808,0.7654,1.5,-1.8478,0.3827,1.5,-0.9239,1.1111,1.5,-1.6629,0.5556,1.5,-0.8315,1.4142,1.5,-1.4142,0.7071,1.5,-0.7071,1.6629,1.5,-1.1111,0.8315,1.5,-0.5556,1.8478,1.5,-0.7654,0.9239,1.5,-0.3827,1.9616,1.5,-0.3902,0.9808,1.5,-0.1951,2,1.5,0,1,1.5,0}, 198);
IndexedTriangleSet32.setCoord(&Coordinate33);

Shape31.setGeometry(&IndexedTriangleSet32);

Appearance& Appearance34 =  Appearance();
Appearance34.setUSE(CString("AppearanceGrey"));
Shape31.addChild(&Appearance34);

CADFace30.setShape(Shape31);

CADPart20.addChildren(CADFace30);

CADFace& CADFace35 =  CADFace();
CADFace35.X3DNode::setName(CString("bottomCap"));
Shape& Shape36 =  Shape();
IndexedTriangleSet& IndexedTriangleSet37 =  IndexedTriangleSet();
IndexedTriangleSet37.setIndex(new int32_t[]{0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65}, 192);
Coordinate& Coordinate38 =  Coordinate();
Coordinate38.setPoint(new float[]{2,-1.5,0,1,-1.5,0,1.9616,-1.5,-0.3902,0.9808,-1.5,-0.1951,1.8478,-1.5,-0.7654,0.9239,-1.5,-0.3827,1.6629,-1.5,-1.1111,0.8315,-1.5,-0.5556,1.4142,-1.5,-1.4142,0.7071,-1.5,-0.7071,1.1111,-1.5,-1.6629,0.5556,-1.5,-0.8315,0.7654,-1.5,-1.8478,0.3827,-1.5,-0.9239,0.3902,-1.5,-1.9616,0.1951,-1.5,-0.9808,0,-1.5,-2,0,-1.5,-1,-0.3902,-1.5,-1.9616,-0.1951,-1.5,-0.9808,-0.7654,-1.5,-1.8478,-0.3827,-1.5,-0.9239,-1.1111,-1.5,-1.6629,-0.5556,-1.5,-0.8315,-1.4142,-1.5,-1.4142,-0.7071,-1.5,-0.7071,-1.6629,-1.5,-1.1111,-0.8315,-1.5,-0.5556,-1.8478,-1.5,-0.7654,-0.9239,-1.5,-0.3827,-1.9616,-1.5,-0.3902,-0.9808,-1.5,-0.1951,-2,-1.5,0,-1,-1.5,0,-1.9616,-1.5,0.3902,-0.9808,-1.5,0.1951,-1.8478,-1.5,0.7654,-0.9239,-1.5,0.3827,-1.6629,-1.5,1.1111,-0.8315,-1.5,0.5556,-1.4142,-1.5,1.4142,-0.7071,-1.5,0.7071,-1.1111,-1.5,1.6629,-0.5556,-1.5,0.8315,-0.7654,-1.5,1.8478,-0.3827,-1.5,0.9239,-0.3902,-1.5,1.9616,-0.1951,-1.5,0.9808,0,-1.5,2,0,-1.5,1,0.3902,-1.5,1.9616,0.1951,-1.5,0.9808,0.7654,-1.5,1.8478,0.3827,-1.5,0.9239,1.1111,-1.5,1.6629,0.5556,-1.5,0.8315,1.4142,-1.5,1.4142,0.7071,-1.5,0.7071,1.6629,-1.5,1.1111,0.8315,-1.5,0.5556,1.8478,-1.5,0.7654,0.9239,-1.5,0.3827,1.9616,-1.5,0.3902,0.9808,-1.5,0.1951,2,-1.5,0,1,-1.5,0}, 198);
IndexedTriangleSet37.setCoord(&Coordinate38);

Shape36.setGeometry(&IndexedTriangleSet37);

Appearance& Appearance39 =  Appearance();
Appearance39.setUSE(CString("AppearanceGrey"));
Shape36.addChild(&Appearance39);

CADFace35.setShape(Shape36);

CADPart20.addChildren(CADFace35);

CADAssembly19.X3DGroupingNode::addChild(static_cast<X3DGroupingNode*>(&CADPart20));

Scene15.X3DBaseNode::addChild(static_cast<X3DGroupingNode*>(&CADAssembly19));

X3D0.setScene(&Scene15);

}
